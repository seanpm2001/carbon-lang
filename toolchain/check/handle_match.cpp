// Part of the Carbon Language project, under the Apache License v2.0 with LLVM
// Exceptions. See /LICENSE for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception

#include "toolchain/check/context.h"
#include "toolchain/check/convert.h"

namespace Carbon::Check {

auto HandleMatchConditionStart(Context& context,
                               Parse::MatchConditionStartId parse_node)
    -> bool {
  return context.TODO(parse_node, "HandleMatchConditionStart");
}

auto HandleMatchCondition(Context& context, Parse::MatchConditionId parse_node)
    -> bool {
  return context.TODO(parse_node, "HandleMatchCondition");
}

auto HandleMatchIntroducer(Context& context,
                           Parse::MatchIntroducerId parse_node) -> bool {
  return context.TODO(parse_node, "HandleMatchIntroducer");
}

auto HandleMatchStatementStart(Context& context,
                               Parse::MatchStatementStartId parse_node)
    -> bool {
  return context.TODO(parse_node, "HandleMatchStatementStart");
}

auto HandleMatchCaseIntroducer(Context& context,
                               Parse::MatchCaseIntroducerId parse_node)
    -> bool {
  return context.TODO(parse_node, "HandleMatchCaseIntroducer");
}

auto HandleMatchCaseGuardIntroducer(
    Context& context, Parse::MatchCaseGuardIntroducerId parse_node) -> bool {
  return context.TODO(parse_node, "HandleMatchCaseGuardIntroducer");
}

auto HandleMatchCaseGuardStart(Context& context,
                               Parse::MatchCaseGuardStartId parse_node)
    -> bool {
  return context.TODO(parse_node, "HandleMatchCaseGuardStart");
}

auto HandleMatchCaseGuard(Context& context, Parse::MatchCaseGuardId parse_node)
    -> bool {
  return context.TODO(parse_node, "HandleMatchCaseGuard");
}

auto HandleMatchCaseEqualGreater(Context& context,
                                 Parse::MatchCaseEqualGreaterId parse_node)
    -> bool {
  return context.TODO(parse_node, "HandleMatchCaseEqualGreater");
}

auto HandleMatchCaseStart(Context& context, Parse::MatchCaseStartId parse_node)
    -> bool {
  return context.TODO(parse_node, "HandleMatchCaseStart");
}

auto HandleMatchCase(Context& context, Parse::MatchCaseId parse_node) -> bool {
  return context.TODO(parse_node, "HandleMatchCase");
}

auto HandleMatchDefaultIntroducer(Context& context,
                                  Parse::MatchDefaultIntroducerId parse_node)
    -> bool {
  return context.TODO(parse_node, "MatchDefaultIntroducer");
}

auto HandleMatchDefaultEqualGreater(
    Context& context, Parse::MatchDefaultEqualGreaterId parse_node) -> bool {
  return context.TODO(parse_node, "MatchDefaultEqualGreater");
}

auto HandleMatchDefaultStart(Context& context,
                             Parse::MatchDefaultStartId parse_node) -> bool {
  return context.TODO(parse_node, "HandleMatchDefaultStart");
}

auto HandleMatchDefault(Context& context, Parse::MatchDefaultId parse_node)
    -> bool {
  return context.TODO(parse_node, "HandleMatchDefault");
}

auto HandleMatchStatement(Context& context, Parse::MatchStatementId parse_node)
    -> bool {
  return context.TODO(parse_node, "HandleMatchStatement");
}

}  // namespace Carbon::Check
