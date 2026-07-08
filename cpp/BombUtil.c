// Type: BombUtil
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/BombUtil.cs
// Prior source: NEW in this update
// --------------------------------

// BombUtil$$GetOldRadiusCost
// il2cpp: float BombUtil__GetOldRadiusCost (float radius, const MethodInfo* method);
// 0x3d6edc0

float BombUtil__GetOldRadiusCost(float radius,MethodInfo *method)

{
  return (radius + -20.0) * 0.25;
}


// BombUtil$$GetOldSpeedCost
// il2cpp: float BombUtil__GetOldSpeedCost (float speed, const MethodInfo* method);
// 0x3d6ede0

float BombUtil__GetOldSpeedCost(float speed,MethodInfo *method)

{
  return (speed + -200.0) / 60.0;
}


// BombUtil$$GetOldCooldownCost
// il2cpp: float BombUtil__GetOldCooldownCost (float cooldown, const MethodInfo* method);
// 0x3d6ee00

float BombUtil__GetOldCooldownCost(float cooldown,MethodInfo *method)

{
  return (cooldown + -5.0) / -0.4;
}


// BombUtil$$GetOldRangeCost
// il2cpp: float BombUtil__GetOldRangeCost (float range, const MethodInfo* method);
// 0x3d6ee20

float BombUtil__GetOldRangeCost(float range,MethodInfo *method)

{
  return (range + -200.0) / 60.0;
}


// BombUtil$$GetOldBombRadius
// il2cpp: float BombUtil__GetOldBombRadius (float pointsSpent, const MethodInfo* method);
// 0x3d6ee40

float BombUtil__GetOldBombRadius(float pointsSpent,MethodInfo *method)

{
  return pointsSpent * 4.0 + 20.0;
}


// BombUtil$$GetOldBombSpeed
// il2cpp: float BombUtil__GetOldBombSpeed (float pointsSpent, const MethodInfo* method);
// 0x3d6ee60

float BombUtil__GetOldBombSpeed(float pointsSpent,MethodInfo *method)

{
  return pointsSpent * 60.0 + 200.0;
}


// BombUtil$$GetOldBombCooldown
// il2cpp: float BombUtil__GetOldBombCooldown (float pointsSpent, const MethodInfo* method);
// 0x3d6ee80

float BombUtil__GetOldBombCooldown(float pointsSpent,MethodInfo *method)

{
  return pointsSpent * -0.4 + 5.0;
}


// BombUtil$$GetOldBombRange
// il2cpp: float BombUtil__GetOldBombRange (float pointsSpent, const MethodInfo* method);
// 0x3d6eea0

float BombUtil__GetOldBombRange(float pointsSpent,MethodInfo *method)

{
  return pointsSpent * 60.0 + 200.0;
}


// BombUtil$$GetBombStat
// il2cpp: float BombUtil__GetBombStat (float pointsSpent, float maxValue, float valuePerPoint, float cutoff, const MethodInfo* method);
// 0x3d6eec0

float BombUtil__GetBombStat
                (float pointsSpent,float maxValue,float valuePerPoint,float cutoff,
                MethodInfo *method)

{
  float fVar1;
  
  if (cutoff <= 10.0) {
    if ((pointsSpent == 10.0) && (!NAN(pointsSpent))) {
      return maxValue;
    }
    if (cutoff < pointsSpent) {
      return maxValue + (10.0 - pointsSpent) * valuePerPoint * -0.5;
    }
    fVar1 = (cutoff - pointsSpent) * valuePerPoint + (10.0 - cutoff) * valuePerPoint * 0.5;
  }
  else {
    fVar1 = (10.0 - pointsSpent) * valuePerPoint;
  }
  return maxValue - fVar1;
}


// BombUtil$$GetBombRadius
// il2cpp: float BombUtil__GetBombRadius (float pointsSpent, float oldMinCost, float oldMaxCost, float cutoff, const MethodInfo* method);
// 0x3d6ef40

float BombUtil__GetBombRadius
                (float pointsSpent,float oldMinCost,float oldMaxCost,float cutoff,MethodInfo *method
                )

{
  float fVar1;
  float fVar2;
  
  fVar1 = oldMaxCost * 4.0 + 20.0;
  fVar2 = (fVar1 - (oldMinCost * 4.0 + 20.0)) / 10.0;
  if (10.0 < cutoff) {
    return fVar1 - (10.0 - pointsSpent) * fVar2;
  }
  if ((pointsSpent != 10.0) || (NAN(pointsSpent))) {
    if (cutoff < pointsSpent) {
      return fVar1 + (10.0 - pointsSpent) * fVar2 * -0.5;
    }
    fVar1 = fVar1 - ((cutoff - pointsSpent) * fVar2 + (10.0 - cutoff) * fVar2 * 0.5);
  }
  return fVar1;
}


// BombUtil$$GetBombRange
// il2cpp: float BombUtil__GetBombRange (float pointsSpent, float oldMinCost, float oldMaxCost, float cutoff, const MethodInfo* method);
// 0x3d6efe0

float BombUtil__GetBombRange
                (float pointsSpent,float oldMinCost,float oldMaxCost,float cutoff,MethodInfo *method
                )

{
  float fVar1;
  float fVar2;
  
  fVar1 = oldMaxCost * 60.0 + 200.0;
  fVar2 = (fVar1 - (oldMinCost * 60.0 + 200.0)) / 10.0;
  if (10.0 < cutoff) {
    return fVar1 - (10.0 - pointsSpent) * fVar2;
  }
  if ((pointsSpent != 10.0) || (NAN(pointsSpent))) {
    if (cutoff < pointsSpent) {
      return fVar1 + (10.0 - pointsSpent) * fVar2 * -0.5;
    }
    fVar1 = fVar1 - ((cutoff - pointsSpent) * fVar2 + (10.0 - cutoff) * fVar2 * 0.5);
  }
  return fVar1;
}


// BombUtil$$GetBombSpeed
// il2cpp: float BombUtil__GetBombSpeed (float pointsSpent, float oldMinCost, float oldMaxCost, float cutoff, const MethodInfo* method);
// 0x3d6f080

float BombUtil__GetBombSpeed
                (float pointsSpent,float oldMinCost,float oldMaxCost,float cutoff,MethodInfo *method
                )

{
  float fVar1;
  float fVar2;
  
  fVar1 = oldMaxCost * 60.0 + 200.0;
  fVar2 = (fVar1 - (oldMinCost * 60.0 + 200.0)) / 10.0;
  if (10.0 < cutoff) {
    return fVar1 - (10.0 - pointsSpent) * fVar2;
  }
  if ((pointsSpent != 10.0) || (NAN(pointsSpent))) {
    if (cutoff < pointsSpent) {
      return fVar1 + (10.0 - pointsSpent) * fVar2 * -0.5;
    }
    fVar1 = fVar1 - ((cutoff - pointsSpent) * fVar2 + (10.0 - cutoff) * fVar2 * 0.5);
  }
  return fVar1;
}


// BombUtil$$GetBombCooldown
// il2cpp: float BombUtil__GetBombCooldown (float pointsSpent, float oldMinCost, float oldMaxCost, float cutoff, const MethodInfo* method);
// 0x3d6f120

float BombUtil__GetBombCooldown
                (float pointsSpent,float oldMinCost,float oldMaxCost,float cutoff,MethodInfo *method
                )

{
  float fVar1;
  float fVar2;
  
  fVar1 = 5.0 - oldMaxCost * 0.4;
  fVar2 = (fVar1 - (5.0 - oldMinCost * 0.4)) / 10.0;
  if (10.0 < cutoff) {
    return fVar1 - (10.0 - pointsSpent) * fVar2;
  }
  if ((pointsSpent != 10.0) || (NAN(pointsSpent))) {
    if (cutoff < pointsSpent) {
      return fVar1 + (10.0 - pointsSpent) * fVar2 * -0.5;
    }
    fVar1 = fVar1 - ((cutoff - pointsSpent) * fVar2 + (10.0 - cutoff) * fVar2 * 0.5);
  }
  return fVar1;
}


// BombUtil$$.ctor
// il2cpp: void BombUtil___ctor (BombUtil_o* __this, const MethodInfo* method);
// 0x3d6f1c0

void BombUtil___ctor(BombUtil_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


