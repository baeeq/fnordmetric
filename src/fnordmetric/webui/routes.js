/**
 * This file is part of the "FnordMetric" project
 *   Copyright (c) 2016 Laura Schlimmer
 *   Copyright (c) 2016 Paul Asmuth
 *
 * FnordMetric is free software: you can redistribute it and/or modify it under
 * the terms of the GNU General Public License v3.0. You should have received a
 * copy of the GNU General Public License along with this program. If not, see
 * <http://www.gnu.org/licenses/>.
 */
FnordMetric = this.FnordMetric || {};
FnordMetric.config = FnordMetric.config || {};

FnordMetric.config.routes = [
  {
    "route": new RegExp("/metrics/(.*)"),
    "view": "fnordmetric.metric.table",
  },
  {
    "route": "/metrics",
    "view": "fnordmetric.metric.list",
  }
];
