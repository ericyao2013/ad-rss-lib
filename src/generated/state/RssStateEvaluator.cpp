/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (c) 2018-2019 Intel Corporation
 *
 * SPDX-License-Identifier: LGPL-2.1-only
 *
 * ----------------- END LICENSE BLOCK -----------------------------------
 */

/**
 * Generated file
 * @file
 *
 */

#include "ad_rss/state/RssStateEvaluator.hpp"
#include <stdexcept>

std::string toString(::ad_rss::state::RssStateEvaluator const e)
{
  switch (e)
  {
    case ::ad_rss::state::RssStateEvaluator::None:
      return std::string("::ad_rss::state::RssStateEvaluator::None"); // LCOV_EXCL_BR_LINE
    case ::ad_rss::state::RssStateEvaluator::LongitudinalDistanceOppositeDirectionEgoCorrectLane:
      return std::string(
        "::ad_rss::state::RssStateEvaluator::LongitudinalDistanceOppositeDirectionEgoCorrectLane"); // LCOV_EXCL_BR_LINE
    case ::ad_rss::state::RssStateEvaluator::LongitudinalDistanceOppositeDirection:
      return std::string(
        "::ad_rss::state::RssStateEvaluator::LongitudinalDistanceOppositeDirection"); // LCOV_EXCL_BR_LINE
    case ::ad_rss::state::RssStateEvaluator::LongitudinalDistanceSameDirectionEgoFront:
      return std::string(
        "::ad_rss::state::RssStateEvaluator::LongitudinalDistanceSameDirectionEgoFront"); // LCOV_EXCL_BR_LINE
    case ::ad_rss::state::RssStateEvaluator::LongitudinalDistanceSameDirectionOtherInFront:
      return std::string(
        "::ad_rss::state::RssStateEvaluator::LongitudinalDistanceSameDirectionOtherInFront"); // LCOV_EXCL_BR_LINE
    case ::ad_rss::state::RssStateEvaluator::LateralDistance:
      return std::string("::ad_rss::state::RssStateEvaluator::LateralDistance"); // LCOV_EXCL_BR_LINE
    case ::ad_rss::state::RssStateEvaluator::IntersectionOtherPriorityEgoAbleToStop:
      return std::string(
        "::ad_rss::state::RssStateEvaluator::IntersectionOtherPriorityEgoAbleToStop"); // LCOV_EXCL_BR_LINE
    case ::ad_rss::state::RssStateEvaluator::IntersectionEgoPriorityOtherAbleToStop:
      return std::string(
        "::ad_rss::state::RssStateEvaluator::IntersectionEgoPriorityOtherAbleToStop"); // LCOV_EXCL_BR_LINE
    case ::ad_rss::state::RssStateEvaluator::IntersectionEgoInFront:
      return std::string("::ad_rss::state::RssStateEvaluator::IntersectionEgoInFront"); // LCOV_EXCL_BR_LINE
    case ::ad_rss::state::RssStateEvaluator::IntersectionOtherInFront:
      return std::string("::ad_rss::state::RssStateEvaluator::IntersectionOtherInFront"); // LCOV_EXCL_BR_LINE
    case ::ad_rss::state::RssStateEvaluator::IntersectionOverlap:
      return std::string("::ad_rss::state::RssStateEvaluator::IntersectionOverlap"); // LCOV_EXCL_BR_LINE
    default:
      return std::string("UNKNOWN ENUM VALUE"); // LCOV_EXCL_BR_LINE
  }
}

template <>::ad_rss::state::RssStateEvaluator fromString(std::string const &str)
{
  if (str == std::string("::ad_rss::state::RssStateEvaluator::None")) // LCOV_EXCL_BR_LINE
  {
    return ::ad_rss::state::RssStateEvaluator::None;
  }
  if (str == std::string("None")) // LCOV_EXCL_BR_LINE
  {
    return ::ad_rss::state::RssStateEvaluator::None;
  }
  if (
    str
    == std::string(
         "::ad_rss::state::RssStateEvaluator::LongitudinalDistanceOppositeDirectionEgoCorrectLane")) // LCOV_EXCL_BR_LINE
  {
    return ::ad_rss::state::RssStateEvaluator::LongitudinalDistanceOppositeDirectionEgoCorrectLane;
  }
  if (str == std::string("LongitudinalDistanceOppositeDirectionEgoCorrectLane")) // LCOV_EXCL_BR_LINE
  {
    return ::ad_rss::state::RssStateEvaluator::LongitudinalDistanceOppositeDirectionEgoCorrectLane;
  }
  if (str
      == std::string("::ad_rss::state::RssStateEvaluator::LongitudinalDistanceOppositeDirection")) // LCOV_EXCL_BR_LINE
  {
    return ::ad_rss::state::RssStateEvaluator::LongitudinalDistanceOppositeDirection;
  }
  if (str == std::string("LongitudinalDistanceOppositeDirection")) // LCOV_EXCL_BR_LINE
  {
    return ::ad_rss::state::RssStateEvaluator::LongitudinalDistanceOppositeDirection;
  }
  if (str == std::string(
               "::ad_rss::state::RssStateEvaluator::LongitudinalDistanceSameDirectionEgoFront")) // LCOV_EXCL_BR_LINE
  {
    return ::ad_rss::state::RssStateEvaluator::LongitudinalDistanceSameDirectionEgoFront;
  }
  if (str == std::string("LongitudinalDistanceSameDirectionEgoFront")) // LCOV_EXCL_BR_LINE
  {
    return ::ad_rss::state::RssStateEvaluator::LongitudinalDistanceSameDirectionEgoFront;
  }
  if (str
      == std::string(
           "::ad_rss::state::RssStateEvaluator::LongitudinalDistanceSameDirectionOtherInFront")) // LCOV_EXCL_BR_LINE
  {
    return ::ad_rss::state::RssStateEvaluator::LongitudinalDistanceSameDirectionOtherInFront;
  }
  if (str == std::string("LongitudinalDistanceSameDirectionOtherInFront")) // LCOV_EXCL_BR_LINE
  {
    return ::ad_rss::state::RssStateEvaluator::LongitudinalDistanceSameDirectionOtherInFront;
  }
  if (str == std::string("::ad_rss::state::RssStateEvaluator::LateralDistance")) // LCOV_EXCL_BR_LINE
  {
    return ::ad_rss::state::RssStateEvaluator::LateralDistance;
  }
  if (str == std::string("LateralDistance")) // LCOV_EXCL_BR_LINE
  {
    return ::ad_rss::state::RssStateEvaluator::LateralDistance;
  }
  if (str
      == std::string("::ad_rss::state::RssStateEvaluator::IntersectionOtherPriorityEgoAbleToStop")) // LCOV_EXCL_BR_LINE
  {
    return ::ad_rss::state::RssStateEvaluator::IntersectionOtherPriorityEgoAbleToStop;
  }
  if (str == std::string("IntersectionOtherPriorityEgoAbleToStop")) // LCOV_EXCL_BR_LINE
  {
    return ::ad_rss::state::RssStateEvaluator::IntersectionOtherPriorityEgoAbleToStop;
  }
  if (str
      == std::string("::ad_rss::state::RssStateEvaluator::IntersectionEgoPriorityOtherAbleToStop")) // LCOV_EXCL_BR_LINE
  {
    return ::ad_rss::state::RssStateEvaluator::IntersectionEgoPriorityOtherAbleToStop;
  }
  if (str == std::string("IntersectionEgoPriorityOtherAbleToStop")) // LCOV_EXCL_BR_LINE
  {
    return ::ad_rss::state::RssStateEvaluator::IntersectionEgoPriorityOtherAbleToStop;
  }
  if (str == std::string("::ad_rss::state::RssStateEvaluator::IntersectionEgoInFront")) // LCOV_EXCL_BR_LINE
  {
    return ::ad_rss::state::RssStateEvaluator::IntersectionEgoInFront;
  }
  if (str == std::string("IntersectionEgoInFront")) // LCOV_EXCL_BR_LINE
  {
    return ::ad_rss::state::RssStateEvaluator::IntersectionEgoInFront;
  }
  if (str == std::string("::ad_rss::state::RssStateEvaluator::IntersectionOtherInFront")) // LCOV_EXCL_BR_LINE
  {
    return ::ad_rss::state::RssStateEvaluator::IntersectionOtherInFront;
  }
  if (str == std::string("IntersectionOtherInFront")) // LCOV_EXCL_BR_LINE
  {
    return ::ad_rss::state::RssStateEvaluator::IntersectionOtherInFront;
  }
  if (str == std::string("::ad_rss::state::RssStateEvaluator::IntersectionOverlap")) // LCOV_EXCL_BR_LINE
  {
    return ::ad_rss::state::RssStateEvaluator::IntersectionOverlap;
  }
  if (str == std::string("IntersectionOverlap")) // LCOV_EXCL_BR_LINE
  {
    return ::ad_rss::state::RssStateEvaluator::IntersectionOverlap;
  }
  throw std::out_of_range("Invalid enum literal"); // LCOV_EXCL_BR_LINE
}
