/*
 * AnalyticPassPlanner.hpp
 *
 *  Created on: Dec 9, 2009
 *      Author: Philip Rogers
 */

#ifndef ANALYTICPASSPLANNER_HPP_
#define ANALYTICPASSPLANNER_HPP_

#include <iostream>
#include <fstream>
//#include "../../Play.hpp"
#include <gameplay/Robot.hpp>
#include "PassState.hpp"
#include "PassConfig.hpp"
#include <boost/ptr_container/ptr_vector.hpp>
#include <boost/foreach.hpp>

#define APPROXBALLVEL 20.0       // m/s
#define APPROXROBOTVELTRANS 1.0  // m/s
#define APPROXROBOTVELROT 4.0    // rad/s

typedef boost::ptr_vector<PassConfig> PassConfigVector;

using namespace Geometry2d;
using namespace Gameplay;
using namespace std;

namespace AnalyticPassPlanner {
	void generateAllConfigs(const Point &ballPos, set<Robot *> &_robots, PassConfigVector &passConfigResult);
	void evaluateConfigs(set<Robot *> &_robots, Robot** _opponents, PassConfigVector &passConfigs);
};

#endif /* ANALYTICPASSPLANNER_HPP_ */
