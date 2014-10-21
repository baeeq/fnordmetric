/**
 * This file is part of the "FnordMetric" project
 *   Copyright (c) 2014 Paul Asmuth, Google Inc.
 *
 * FnordMetric is free software: you can redistribute it and/or modify it under
 * the terms of the GNU General Public License v3.0. You should have received a
 * copy of the GNU General Public License along with this program. If not, see
 * <http://www.gnu.org/licenses/>.
 */
#include <fnordmetric/metricdb/metricsnapshot.h>

using namespace fnord;
namespace fnordmetric {
namespace metricdb {

MetricSnapshot::MetricSnapshot() {}

MetricSnapshot::MetricSnapshot(
    const std::vector<std::shared_ptr<TableRef>>& tables) :
    tables_(tables) {}

void MetricSnapshot::appendTable(std::shared_ptr<TableRef> table) {
  tables_.emplace_back(table);
}

const std::vector<std::shared_ptr<TableRef>>& MetricSnapshot::tables() const {
  return tables_;
}

std::shared_ptr<MetricSnapshot> MetricSnapshot::clone() const {
  auto snap = new MetricSnapshot(tables_);
  return std::shared_ptr<MetricSnapshot>(snap);
}


}
}

