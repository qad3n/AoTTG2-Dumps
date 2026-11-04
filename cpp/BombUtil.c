// Type: BombUtil
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/BombUtil.cs
// Prior real C# source: none
// --------------------------------

// BombUtil$$GetOldRadiusCost
// il2cpp: float BombUtil__GetOldRadiusCost (float radius, const MethodInfo* method);
// 0x181d9faa0

float BombUtil__GetOldRadiusCost(float radius,MethodInfo *method)

{
  return (radius - 20.0) * 0.25;
}


// BombUtil$$GetOldSpeedCost
// il2cpp: float BombUtil__GetOldSpeedCost (float speed, const MethodInfo* method);
// 0x181d9fac0

float
BombUtil__GetOldSpeedCost(float speed, MethodInfo* method)

{
  return (range - 200.0) / 60.0;
}


// BombUtil$$GetOldCooldownCost
// il2cpp: float BombUtil__GetOldCooldownCost (float cooldown, const MethodInfo* method);
// 0x181d9fa80

float BombUtil__GetOldCooldownCost(float cooldown,MethodInfo *method)

{
  return (cooldown - 5.0) / -0.4;
}


// BombUtil$$GetOldRangeCost
// il2cpp: float BombUtil__GetOldRangeCost (float range, const MethodInfo* method);
// 0x181d9fac0

float BombUtil__GetOldRangeCost(float range,MethodInfo *method)

{
  return (range - 200.0) / 60.0;
}


// BombUtil$$GetOldBombRadius
// il2cpp: float BombUtil__GetOldBombRadius (float pointsSpent, const MethodInfo* method);
// 0x181d9fa40

float BombUtil__GetOldBombRadius(float pointsSpent,MethodInfo *method)

{
  return pointsSpent * 4.0 + 20.0;
}


// BombUtil$$GetOldBombSpeed
// il2cpp: float BombUtil__GetOldBombSpeed (float pointsSpent, const MethodInfo* method);
// 0x181d9fa60

float
BombUtil__GetOldBombSpeed(float pointsSpent, MethodInfo* method)

{
  return pointsSpent * 60.0 + 200.0;
}


// BombUtil$$GetOldBombCooldown
// il2cpp: float BombUtil__GetOldBombCooldown (float pointsSpent, const MethodInfo* method);
// 0x181d9fa20

float BombUtil__GetOldBombCooldown(float pointsSpent,MethodInfo *method)

{
  return pointsSpent * -0.4 + 5.0;
}


// BombUtil$$GetOldBombRange
// il2cpp: float BombUtil__GetOldBombRange (float pointsSpent, const MethodInfo* method);
// 0x181d9fa60

float BombUtil__GetOldBombRange(float pointsSpent,MethodInfo *method)

{
  return pointsSpent * 60.0 + 200.0;
}


// BombUtil$$GetBombStat
// il2cpp: float BombUtil__GetBombStat (float pointsSpent, float maxValue, float valuePerPoint, float cutoff, const MethodInfo* method);
// 0x181d9f9b0

float BombUtil__GetBombStat
                (float pointsSpent,float maxValue,float valuePerPoint,float cutoff,MethodInfo *method)

{
  if (10.0 < cutoff) {
    maxValue = maxValue - (10.0 - pointsSpent) * valuePerPoint;
  }
  else if (pointsSpent != 10.0) {
    if (cutoff < pointsSpent) {
      return maxValue - (10.0 - pointsSpent) * valuePerPoint * 0.5;
    }
    return maxValue - ((10.0 - cutoff) * valuePerPoint * 0.5 + (cutoff - pointsSpent) * valuePerPoint);
  }
  return maxValue;
}


// BombUtil$$GetBombRadius
// il2cpp: float BombUtil__GetBombRadius (float pointsSpent, float oldMinCost, float oldMaxCost, float cutoff, const MethodInfo* method);
// 0x181d9f850

float BombUtil__GetBombRadius
                (float pointsSpent,float oldMinCost,float oldMaxCost,float cutoff,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar2 = oldMaxCost * 4.0 + 20.0;
  fVar1 = ((oldMaxCost * 4.0 + 20.0) - (oldMinCost * 4.0 + 20.0)) / 10.0;
  if (10.0 < cutoff) {
    fVar1 = (10.0 - pointsSpent) * fVar1;
  }
  else {
    if (pointsSpent == 10.0) {
      return fVar2;
    }
    if (cutoff < pointsSpent) {
      fVar1 = (10.0 - pointsSpent) * fVar1 * 0.5;
    }
    else {
      fVar1 = (10.0 - cutoff) * fVar1 * 0.5 + (cutoff - pointsSpent) * fVar1;
    }
  }
  return fVar2 - fVar1;
}


// BombUtil$$GetBombRange
// il2cpp: float BombUtil__GetBombRange (float pointsSpent, float oldMinCost, float oldMaxCost, float cutoff, const MethodInfo* method);
// 0x181d9f900

float
BombUtil__GetBombRange(float pointsSpent, float oldMinCost, float oldMaxCost, float cutoff, MethodInfo* method)

{
  float fVar1;
  float fVar2;
  
  fVar2 = oldMaxCost * 60.0 + 200.0;
  fVar1 = ((oldMaxCost * 60.0 + 200.0) - (oldMinCost * 60.0 + 200.0)) / 10.0;
  if (10.0 < cutoff) {
    fVar1 = (10.0 - pointsSpent) * fVar1;
  }
  else {
    if (pointsSpent == 10.0) {
      return fVar2;
    }
    if (cutoff < pointsSpent) {
      fVar1 = (10.0 - pointsSpent) * fVar1 * 0.5;
    }
    else {
      fVar1 = (10.0 - cutoff) * fVar1 * 0.5 + (cutoff - pointsSpent) * fVar1;
    }
  }
  return fVar2 - fVar1;
}


// BombUtil$$GetBombSpeed
// il2cpp: float BombUtil__GetBombSpeed (float pointsSpent, float oldMinCost, float oldMaxCost, float cutoff, const MethodInfo* method);
// 0x181d9f900

float BombUtil__GetBombSpeed
                (float pointsSpent,float oldMinCost,float oldMaxCost,float cutoff,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar2 = oldMaxCost * 60.0 + 200.0;
  fVar1 = ((oldMaxCost * 60.0 + 200.0) - (oldMinCost * 60.0 + 200.0)) / 10.0;
  if (10.0 < cutoff) {
    fVar1 = (10.0 - pointsSpent) * fVar1;
  }
  else {
    if (pointsSpent == 10.0) {
      return fVar2;
    }
    if (cutoff < pointsSpent) {
      fVar1 = (10.0 - pointsSpent) * fVar1 * 0.5;
    }
    else {
      fVar1 = (10.0 - cutoff) * fVar1 * 0.5 + (cutoff - pointsSpent) * fVar1;
    }
  }
  return fVar2 - fVar1;
}


// BombUtil$$GetBombCooldown
// il2cpp: float BombUtil__GetBombCooldown (float pointsSpent, float oldMinCost, float oldMaxCost, float cutoff, const MethodInfo* method);
// 0x181d9f7a0

float BombUtil__GetBombCooldown
                (float pointsSpent,float oldMinCost,float oldMaxCost,float cutoff,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar2 = oldMaxCost * -0.4 + 5.0;
  fVar1 = ((oldMaxCost * -0.4 + 5.0) - (oldMinCost * -0.4 + 5.0)) / 10.0;
  if (10.0 < cutoff) {
    fVar1 = (10.0 - pointsSpent) * fVar1;
  }
  else {
    if (pointsSpent == 10.0) {
      return fVar2;
    }
    if (cutoff < pointsSpent) {
      fVar1 = (10.0 - pointsSpent) * fVar1 * 0.5;
    }
    else {
      fVar1 = (10.0 - cutoff) * fVar1 * 0.5 + (cutoff - pointsSpent) * fVar1;
    }
  }
  return fVar2 - fVar1;
}


// BombUtil$$.ctor
// il2cpp: void BombUtil___ctor (BombUtil_o* __this, const MethodInfo* method);
// 0x18054c890

void
BombUtil___ctor(BombUtil_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


