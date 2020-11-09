#include "maneuver.h"

Maneuver::Maneuver(const QVariantMap &map)
{
  coordinate = QGeoCoordinate(map.value("y").toDouble(), map.value("x").toDouble());
  duration = map.value("duration").toDouble();
  icon = map.value("icon").toString();
  instArrive = map.value("arrive_instruction").toString();
  instDepart = map.value("depart_instruction").toString();
  passive = map.value("passive", false).toBool();
  name = passive ? QStringLiteral("passive") : QStringLiteral("active");
  narrative = map.value("narrative").toString();
  sign = map.value("sign").toMap();
  street = map.value("street").toString();
}
