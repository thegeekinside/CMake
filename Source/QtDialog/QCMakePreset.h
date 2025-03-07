/* Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
   file LICENSE.rst or https://cmake.org/licensing for details.  */
#pragma once

#include <QString>
#include <QVariant>

#include "cmCMakePresetsGraph.h"

class QCMakePreset
{
public:
  QString name;
  QString displayName;
  QString description;
  QString generator;
  QString architecture;
  bool setArchitecture;
  QString toolset;
  bool setToolset;
  bool enabled;
};

bool operator==(QCMakePreset const& lhs, QCMakePreset const& rhs);
bool operator!=(QCMakePreset const& lhs, QCMakePreset const& rhs);
bool operator<(QCMakePreset const& lhs, QCMakePreset const& rhs);
bool operator<=(QCMakePreset const& lhs, QCMakePreset const& rhs);
bool operator>(QCMakePreset const& lhs, QCMakePreset const& rhs);
bool operator>=(QCMakePreset const& lhs, QCMakePreset const& rhs);

Q_DECLARE_METATYPE(QCMakePreset)
