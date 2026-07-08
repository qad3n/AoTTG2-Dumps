// Type: Assets.Scripts.Characters.Human.Perks.DivisivePowerPerk
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Assets.Scripts.Characters.Human.Perks/DivisivePowerPerk.cs
// Prior source: NEW in this update
// --------------------------------

// Assets.Scripts.Characters.Human.Perks.DivisivePowerPerk$$get_PerkEnabled
// il2cpp: bool Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__get_PerkEnabled (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o* __this, const MethodInfo* method);
// 0x414d800

bool_conflict
Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__get_PerkEnabled
          (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *__this,MethodInfo *method)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (__this->fields).CurrPoints;
  uVar2 = (*(__this->klass->vtable)._5_get_MaxPoints.methodPtr)
                    (__this,(__this->klass->vtable)._5_get_MaxPoints.method);
  return (bool_conflict)CONCAT71((int7)((ulong)uVar2 >> 8),iVar1 == (int)uVar2);
}


// Assets.Scripts.Characters.Human.Perks.DivisivePowerPerk$$get_MaxPower
// il2cpp: float Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__get_MaxPower (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o* __this, const MethodInfo* method);
// 0x414d820

float Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__get_MaxPower
                (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *__this,
                MethodInfo *method)

{
  return 1.0;
}


// Assets.Scripts.Characters.Human.Perks.DivisivePowerPerk$$get_MinPower
// il2cpp: float Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__get_MinPower (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o* __this, const MethodInfo* method);
// 0x414d830

float Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__get_MinPower
                (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *__this,
                MethodInfo *method)

{
  return 0.0;
}


// Assets.Scripts.Characters.Human.Perks.DivisivePowerPerk$$get_PowerUsageDivisor
// il2cpp: float Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__get_PowerUsageDivisor (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o* __this, const MethodInfo* method);
// 0x414d840

float Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__get_PowerUsageDivisor
                (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *__this,
                MethodInfo *method)

{
  return 2.0;
}


// Assets.Scripts.Characters.Human.Perks.DivisivePowerPerk$$get_LinearRecoveryRate
// il2cpp: float Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__get_LinearRecoveryRate (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o* __this, const MethodInfo* method);
// 0x414d850

float Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__get_LinearRecoveryRate
                (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *__this,
                MethodInfo *method)

{
  return 0.1;
}


// Assets.Scripts.Characters.Human.Perks.DivisivePowerPerk$$get_Cooldown
// il2cpp: float Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__get_Cooldown (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o* __this, const MethodInfo* method);
// 0x414d860

float Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__get_Cooldown
                (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *__this,
                MethodInfo *method)

{
  return 0.0;
}


// Assets.Scripts.Characters.Human.Perks.DivisivePowerPerk$$.ctor
// il2cpp: void Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk___ctor (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o* __this, const MethodInfo* method);
// 0x414d870

void Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk___ctor
               (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *__this,MethodInfo *method
               )

{
  float fVar1;
  
  (__this->fields)._lastUseTime = -1000.0;
  Characters_BasePerk___ctor((Characters_BasePerk_o *)__this,(MethodInfo *)0x0);
  fVar1 = (float)(*(__this->klass->vtable)._9_get_MaxPower.methodPtr)
                           (__this,(__this->klass->vtable)._9_get_MaxPower.method);
  (__this->fields)._currentPower = fVar1;
  fVar1 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  (__this->fields)._lastUpdateTime = fVar1;
  return;
}


// Assets.Scripts.Characters.Human.Perks.DivisivePowerPerk$$Reset
// il2cpp: void Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__Reset (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o* __this, const MethodInfo* method);
// 0x414d8b0

void Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__Reset
               (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *__this,MethodInfo *method
               )

{
  float fVar1;
  
  fVar1 = (float)(*(__this->klass->vtable)._9_get_MaxPower.methodPtr)
                           (__this,(__this->klass->vtable)._9_get_MaxPower.method);
  (__this->fields)._currentPower = fVar1;
  fVar1 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  (__this->fields)._lastUpdateTime = fVar1;
  return;
}


// Assets.Scripts.Characters.Human.Perks.DivisivePowerPerk$$GetCurrentPower
// il2cpp: float Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__GetCurrentPower (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o* __this, const MethodInfo* method);
// 0x414d8e0

float Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__GetCurrentPower
                (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *__this,
                MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  fVar1 = fVar1 - (__this->fields)._lastUpdateTime;
  if (0.0 < fVar1) {
    fVar3 = (__this->fields)._currentPower;
    fVar2 = (float)(*(__this->klass->vtable)._9_get_MaxPower.methodPtr)
                             (__this,(__this->klass->vtable)._9_get_MaxPower.method);
    if (fVar3 < fVar2) {
      fVar3 = (float)(*(__this->klass->vtable)._15_GetRecoveryAmount.methodPtr)
                               (fVar1,__this,(__this->klass->vtable)._15_GetRecoveryAmount.method);
      fVar3 = fVar3 + (__this->fields)._currentPower;
      fVar2 = (float)(*(__this->klass->vtable)._10_get_MinPower.methodPtr)
                               (__this,(__this->klass->vtable)._10_get_MinPower.method);
      fVar1 = (float)(*(__this->klass->vtable)._9_get_MaxPower.methodPtr)
                               (__this,(__this->klass->vtable)._9_get_MaxPower.method);
      if (fVar3 <= fVar1) {
        fVar1 = fVar3;
      }
      (__this->fields)._currentPower =
           (float)(~-(uint)(fVar2 <= fVar3) & (uint)fVar2 | (uint)fVar1 & -(uint)(fVar2 <= fVar3));
      fVar1 = UnityEngine_Time__get_time((MethodInfo *)0x0);
      (__this->fields)._lastUpdateTime = fVar1;
    }
  }
  return (__this->fields)._currentPower;
}


// Assets.Scripts.Characters.Human.Perks.DivisivePowerPerk$$SetCurrentPower
// il2cpp: void Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__SetCurrentPower (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o* __this, float power, const MethodInfo* method);
// 0x414da80

void Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__SetCurrentPower
               (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *__this,float power,
               MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)(*(__this->klass->vtable)._10_get_MinPower.methodPtr)
                           (__this,(__this->klass->vtable)._10_get_MinPower.method);
  fVar2 = (float)(*(__this->klass->vtable)._9_get_MaxPower.methodPtr)
                           (__this,(__this->klass->vtable)._9_get_MaxPower.method);
  if (power <= fVar2) {
    fVar2 = power;
  }
  (__this->fields)._currentPower =
       (float)(-(uint)(fVar1 <= power) & (uint)fVar2 | ~-(uint)(fVar1 <= power) & (uint)fVar1);
  fVar2 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  (__this->fields)._lastUpdateTime = fVar2;
  return;
}


// Assets.Scripts.Characters.Human.Perks.DivisivePowerPerk$$RecoverPower
// il2cpp: void Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__RecoverPower (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o* __this, float amount, const MethodInfo* method);
// 0x414daf0

void Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__RecoverPower
               (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *__this,float amount,
               MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = amount + (__this->fields)._currentPower;
  fVar2 = (float)(*(__this->klass->vtable)._10_get_MinPower.methodPtr)
                           (__this,(__this->klass->vtable)._10_get_MinPower.method);
  fVar3 = (float)(*(__this->klass->vtable)._9_get_MaxPower.methodPtr)
                           (__this,(__this->klass->vtable)._9_get_MaxPower.method);
  if (fVar1 <= fVar3) {
    fVar3 = fVar1;
  }
  (__this->fields)._currentPower =
       (float)(-(uint)(fVar2 <= fVar1) & (uint)fVar3 | ~-(uint)(fVar2 <= fVar1) & (uint)fVar2);
  fVar3 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  (__this->fields)._lastUpdateTime = fVar3;
  return;
}


// Assets.Scripts.Characters.Human.Perks.DivisivePowerPerk$$RecoverPowerBySeconds
// il2cpp: void Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__RecoverPowerBySeconds (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o* __this, float seconds, const MethodInfo* method);
// 0x414db60

void Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__RecoverPowerBySeconds
               (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *__this,float seconds,
               MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (0.0 < seconds) {
    fVar1 = (float)(*(__this->klass->vtable)._15_GetRecoveryAmount.methodPtr)
                             (__this,(__this->klass->vtable)._15_GetRecoveryAmount.method);
    fVar1 = fVar1 + (__this->fields)._currentPower;
    fVar2 = (float)(*(__this->klass->vtable)._10_get_MinPower.methodPtr)
                             (__this,(__this->klass->vtable)._10_get_MinPower.method);
    fVar3 = (float)(*(__this->klass->vtable)._9_get_MaxPower.methodPtr)
                             (__this,(__this->klass->vtable)._9_get_MaxPower.method);
    if (fVar1 <= fVar3) {
      fVar3 = fVar1;
    }
    (__this->fields)._currentPower =
         (float)(~-(uint)(fVar2 <= fVar1) & (uint)fVar2 | (uint)fVar3 & -(uint)(fVar2 <= fVar1));
    fVar3 = UnityEngine_Time__get_time((MethodInfo *)0x0);
    (__this->fields)._lastUpdateTime = fVar3;
  }
  return;
}


// Assets.Scripts.Characters.Human.Perks.DivisivePowerPerk$$GetPowerRatio
// il2cpp: float Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__GetPowerRatio (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o* __this, const MethodInfo* method);
// 0x414dbf0

float Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__GetPowerRatio
                (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *__this,
                MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  fVar1 = fVar1 - (__this->fields)._lastUpdateTime;
  if (0.0 < fVar1) {
    fVar3 = (__this->fields)._currentPower;
    fVar2 = (float)(*(__this->klass->vtable)._9_get_MaxPower.methodPtr)
                             (__this,(__this->klass->vtable)._9_get_MaxPower.method);
    if (fVar3 < fVar2) {
      fVar3 = (float)(*(__this->klass->vtable)._15_GetRecoveryAmount.methodPtr)
                               (fVar1,__this,(__this->klass->vtable)._15_GetRecoveryAmount.method);
      fVar3 = fVar3 + (__this->fields)._currentPower;
      fVar2 = (float)(*(__this->klass->vtable)._10_get_MinPower.methodPtr)
                               (__this,(__this->klass->vtable)._10_get_MinPower.method);
      fVar1 = (float)(*(__this->klass->vtable)._9_get_MaxPower.methodPtr)
                               (__this,(__this->klass->vtable)._9_get_MaxPower.method);
      if (fVar3 <= fVar1) {
        fVar1 = fVar3;
      }
      (__this->fields)._currentPower =
           (float)(~-(uint)(fVar2 <= fVar3) & (uint)fVar2 | (uint)fVar1 & -(uint)(fVar2 <= fVar3));
      fVar1 = UnityEngine_Time__get_time((MethodInfo *)0x0);
      (__this->fields)._lastUpdateTime = fVar1;
    }
  }
  fVar1 = (float)(*(__this->klass->vtable)._9_get_MaxPower.methodPtr)
                           (__this,(__this->klass->vtable)._9_get_MaxPower.method);
  fVar3 = (float)(*(__this->klass->vtable)._10_get_MinPower.methodPtr)
                           (__this,(__this->klass->vtable)._10_get_MinPower.method);
  if ((fVar1 == fVar3) && (!NAN(fVar1) && !NAN(fVar3))) {
    return 1.0;
  }
  fVar1 = (__this->fields)._currentPower;
  fVar3 = (float)(*(__this->klass->vtable)._10_get_MinPower.methodPtr)
                           (__this,(__this->klass->vtable)._10_get_MinPower.method);
  fVar2 = (float)(*(__this->klass->vtable)._9_get_MaxPower.methodPtr)
                           (__this,(__this->klass->vtable)._9_get_MaxPower.method);
  fVar4 = (float)(*(__this->klass->vtable)._10_get_MinPower.methodPtr)
                           (__this,(__this->klass->vtable)._10_get_MinPower.method);
  return (fVar1 - fVar3) / (fVar2 - fVar4);
}


// Assets.Scripts.Characters.Human.Perks.DivisivePowerPerk$$UpdatePower
// il2cpp: void Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__UpdatePower (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o* __this, const MethodInfo* method);
// 0x414d9b0

void Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__UpdatePower
               (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *__this,MethodInfo *method
               )

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  fVar1 = fVar1 - (__this->fields)._lastUpdateTime;
  if (0.0 < fVar1) {
    fVar3 = (__this->fields)._currentPower;
    fVar2 = (float)(*(__this->klass->vtable)._9_get_MaxPower.methodPtr)
                             (__this,(__this->klass->vtable)._9_get_MaxPower.method);
    if (fVar3 < fVar2) {
      fVar3 = (float)(*(__this->klass->vtable)._15_GetRecoveryAmount.methodPtr)
                               (fVar1,__this,(__this->klass->vtable)._15_GetRecoveryAmount.method);
      fVar3 = fVar3 + (__this->fields)._currentPower;
      fVar2 = (float)(*(__this->klass->vtable)._10_get_MinPower.methodPtr)
                               (__this,(__this->klass->vtable)._10_get_MinPower.method);
      fVar1 = (float)(*(__this->klass->vtable)._9_get_MaxPower.methodPtr)
                               (__this,(__this->klass->vtable)._9_get_MaxPower.method);
      if (fVar3 <= fVar1) {
        fVar1 = fVar3;
      }
      (__this->fields)._currentPower =
           (float)(~-(uint)(fVar2 <= fVar3) & (uint)fVar2 | (uint)fVar1 & -(uint)(fVar2 <= fVar3));
      fVar1 = UnityEngine_Time__get_time((MethodInfo *)0x0);
      (__this->fields)._lastUpdateTime = fVar1;
    }
  }
  return;
}


// Assets.Scripts.Characters.Human.Perks.DivisivePowerPerk$$GetRecoveryAmount
// il2cpp: float Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__GetRecoveryAmount (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o* __this, float deltaTime, const MethodInfo* method);
// 0x414dd70

float Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__GetRecoveryAmount
                (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *__this,float deltaTime,
                MethodInfo *method)

{
  float fVar1;
  
  fVar1 = (float)(*(__this->klass->vtable)._12_get_LinearRecoveryRate.methodPtr)
                           (__this,(__this->klass->vtable)._12_get_LinearRecoveryRate.method);
  return fVar1 * deltaTime;
}


// Assets.Scripts.Characters.Human.Perks.DivisivePowerPerk$$CanUse
// il2cpp: bool Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__CanUse (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o* __this, const MethodInfo* method);
// 0x414dd90

bool_conflict
Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__CanUse
          (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *__this,MethodInfo *method)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar2 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  fVar2 = fVar2 - (__this->fields)._lastUpdateTime;
  if (0.0 < fVar2) {
    fVar4 = (__this->fields)._currentPower;
    fVar3 = (float)(*(__this->klass->vtable)._9_get_MaxPower.methodPtr)
                             (__this,(__this->klass->vtable)._9_get_MaxPower.method);
    if (fVar4 < fVar3) {
      fVar4 = (float)(*(__this->klass->vtable)._15_GetRecoveryAmount.methodPtr)
                               (fVar2,__this,(__this->klass->vtable)._15_GetRecoveryAmount.method);
      fVar4 = fVar4 + (__this->fields)._currentPower;
      fVar3 = (float)(*(__this->klass->vtable)._10_get_MinPower.methodPtr)
                               (__this,(__this->klass->vtable)._10_get_MinPower.method);
      fVar2 = (float)(*(__this->klass->vtable)._9_get_MaxPower.methodPtr)
                               (__this,(__this->klass->vtable)._9_get_MaxPower.method);
      if (fVar4 <= fVar2) {
        fVar2 = fVar4;
      }
      (__this->fields)._currentPower =
           (float)(~-(uint)(fVar3 <= fVar4) & (uint)fVar3 | (uint)fVar2 & -(uint)(fVar3 <= fVar4));
      fVar2 = UnityEngine_Time__get_time((MethodInfo *)0x0);
      (__this->fields)._lastUpdateTime = fVar2;
    }
  }
  fVar2 = (__this->fields)._currentPower;
  fVar4 = (float)(*(__this->klass->vtable)._10_get_MinPower.methodPtr)
                           (__this,(__this->klass->vtable)._10_get_MinPower.method);
  fVar3 = (float)(*(__this->klass->vtable)._13_get_Cooldown.methodPtr)
                           (__this,(__this->klass->vtable)._13_get_Cooldown.method);
  uVar1 = 1;
  if ((fVar3 != 0.0) || (NAN(fVar3))) {
    fVar5 = UnityEngine_Time__get_time((MethodInfo *)0x0);
    fVar3 = (__this->fields)._lastUseTime;
    fVar6 = (float)(*(__this->klass->vtable)._13_get_Cooldown.methodPtr)
                             (__this,(__this->klass->vtable)._13_get_Cooldown.method);
    uVar1 = (uint)(fVar6 <= fVar5 - fVar3);
  }
  return uVar1 & fVar4 < fVar2;
}


// Assets.Scripts.Characters.Human.Perks.DivisivePowerPerk$$OnUse
// il2cpp: void Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__OnUse (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o* __this, const MethodInfo* method);
// 0x414def0

void Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__OnUse
               (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *__this,MethodInfo *method
               )

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  fVar1 = fVar1 - (__this->fields)._lastUpdateTime;
  if (0.0 < fVar1) {
    fVar3 = (__this->fields)._currentPower;
    fVar2 = (float)(*(__this->klass->vtable)._9_get_MaxPower.methodPtr)
                             (__this,(__this->klass->vtable)._9_get_MaxPower.method);
    if (fVar3 < fVar2) {
      fVar3 = (float)(*(__this->klass->vtable)._15_GetRecoveryAmount.methodPtr)
                               (fVar1,__this,(__this->klass->vtable)._15_GetRecoveryAmount.method);
      fVar3 = fVar3 + (__this->fields)._currentPower;
      fVar2 = (float)(*(__this->klass->vtable)._10_get_MinPower.methodPtr)
                               (__this,(__this->klass->vtable)._10_get_MinPower.method);
      fVar1 = (float)(*(__this->klass->vtable)._9_get_MaxPower.methodPtr)
                               (__this,(__this->klass->vtable)._9_get_MaxPower.method);
      if (fVar3 <= fVar1) {
        fVar1 = fVar3;
      }
      (__this->fields)._currentPower =
           (float)(~-(uint)(fVar2 <= fVar3) & (uint)fVar2 | (uint)fVar1 & -(uint)(fVar2 <= fVar3));
      fVar1 = UnityEngine_Time__get_time((MethodInfo *)0x0);
      (__this->fields)._lastUpdateTime = fVar1;
    }
  }
  fVar1 = (__this->fields)._currentPower;
  fVar2 = (float)(*(__this->klass->vtable)._11_get_PowerUsageDivisor.methodPtr)
                           (__this,(__this->klass->vtable)._11_get_PowerUsageDivisor.method);
  fVar4 = (float)(*(__this->klass->vtable)._10_get_MinPower.methodPtr)
                           (__this,(__this->klass->vtable)._10_get_MinPower.method);
  fVar3 = (float)(*(__this->klass->vtable)._9_get_MaxPower.methodPtr)
                           (__this,(__this->klass->vtable)._9_get_MaxPower.method);
  fVar1 = fVar1 / fVar2;
  if (fVar1 <= fVar3) {
    fVar3 = fVar1;
  }
  (__this->fields)._currentPower =
       (float)(~-(uint)(fVar4 <= fVar1) & (uint)fVar4 | (uint)fVar3 & -(uint)(fVar4 <= fVar1));
  fVar1 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  (__this->fields)._lastUseTime = fVar1;
  fVar1 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  (__this->fields)._lastUpdateTime = fVar1;
  return;
}


// Assets.Scripts.Characters.Human.Perks.DivisivePowerPerk$$OnUse
// il2cpp: void Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__OnUse (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o* __this, float percent, const MethodInfo* method);
// 0x414e050

void Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__OnUse
               (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *__this,float percent,
               MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  fVar1 = fVar1 - (__this->fields)._lastUpdateTime;
  if (0.0 < fVar1) {
    fVar3 = (__this->fields)._currentPower;
    fVar2 = (float)(*(__this->klass->vtable)._9_get_MaxPower.methodPtr)
                             (__this,(__this->klass->vtable)._9_get_MaxPower.method);
    if (fVar3 < fVar2) {
      fVar3 = (float)(*(__this->klass->vtable)._15_GetRecoveryAmount.methodPtr)
                               (fVar1,__this,(__this->klass->vtable)._15_GetRecoveryAmount.method);
      fVar3 = fVar3 + (__this->fields)._currentPower;
      fVar2 = (float)(*(__this->klass->vtable)._10_get_MinPower.methodPtr)
                               (__this,(__this->klass->vtable)._10_get_MinPower.method);
      fVar1 = (float)(*(__this->klass->vtable)._9_get_MaxPower.methodPtr)
                               (__this,(__this->klass->vtable)._9_get_MaxPower.method);
      if (fVar3 <= fVar1) {
        fVar1 = fVar3;
      }
      (__this->fields)._currentPower =
           (float)(~-(uint)(fVar2 <= fVar3) & (uint)fVar2 | (uint)fVar1 & -(uint)(fVar2 <= fVar3));
      fVar1 = UnityEngine_Time__get_time((MethodInfo *)0x0);
      (__this->fields)._lastUpdateTime = fVar1;
    }
  }
  fVar1 = (__this->fields)._currentPower;
  fVar2 = (float)(*(__this->klass->vtable)._9_get_MaxPower.methodPtr)
                           (__this,(__this->klass->vtable)._9_get_MaxPower.method);
  fVar4 = (float)(*(__this->klass->vtable)._10_get_MinPower.methodPtr)
                           (__this,(__this->klass->vtable)._10_get_MinPower.method);
  fVar3 = (float)(*(__this->klass->vtable)._9_get_MaxPower.methodPtr)
                           (__this,(__this->klass->vtable)._9_get_MaxPower.method);
  fVar1 = fVar1 - fVar2 * percent;
  if (fVar1 <= fVar3) {
    fVar3 = fVar1;
  }
  (__this->fields)._currentPower =
       (float)(~-(uint)(fVar4 <= fVar1) & (uint)fVar4 | (uint)fVar3 & -(uint)(fVar4 <= fVar1));
  fVar1 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  (__this->fields)._lastUseTime = fVar1;
  fVar1 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  (__this->fields)._lastUpdateTime = fVar1;
  return;
}


// Assets.Scripts.Characters.Human.Perks.DivisivePowerPerk$$SetCooldownLeft
// il2cpp: void Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__SetCooldownLeft (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o* __this, float cooldownLeft, const MethodInfo* method);
// 0x414e1c0

void Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__SetCooldownLeft
               (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *__this,float cooldownLeft
               ,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar1 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  fVar2 = (float)(*(__this->klass->vtable)._13_get_Cooldown.methodPtr)
                           (__this,(__this->klass->vtable)._13_get_Cooldown.method);
  (__this->fields)._lastUseTime = (fVar1 - fVar2) + cooldownLeft;
  return;
}


// Assets.Scripts.Characters.Human.Perks.DivisivePowerPerk$$GetCooldownLeft
// il2cpp: float Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__GetCooldownLeft (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o* __this, const MethodInfo* method);
// 0x414e210

float Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__GetCooldownLeft
                (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *__this,
                MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = (float)(*(__this->klass->vtable)._13_get_Cooldown.methodPtr)
                           (__this,(__this->klass->vtable)._13_get_Cooldown.method);
  fVar3 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  fVar1 = (__this->fields)._lastUseTime;
  fVar4 = (float)(*(__this->klass->vtable)._13_get_Cooldown.methodPtr)
                           (__this,(__this->klass->vtable)._13_get_Cooldown.method);
  fVar2 = fVar2 - (fVar3 - fVar1);
  if (fVar2 <= fVar4) {
    fVar4 = fVar2;
  }
  return (float)(-(uint)(0.0 <= fVar2) & (uint)fVar4);
}


// Assets.Scripts.Characters.Human.Perks.DivisivePowerPerk$$GetCooldownRatio
// il2cpp: float Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__GetCooldownRatio (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o* __this, const MethodInfo* method);
// 0x414e280

float Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__GetCooldownRatio
                (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *__this,
                MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (float)(*(__this->klass->vtable)._13_get_Cooldown.methodPtr)
                           (__this,(__this->klass->vtable)._13_get_Cooldown.method);
  if ((fVar1 == 0.0) && (!NAN(fVar1))) {
    return 1.0;
  }
  fVar2 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  fVar1 = (__this->fields)._lastUseTime;
  fVar3 = (float)(*(__this->klass->vtable)._13_get_Cooldown.methodPtr)
                           (__this,(__this->klass->vtable)._13_get_Cooldown.method);
  fVar3 = (fVar2 - fVar1) / fVar3;
  fVar1 = 0.0;
  if ((0.0 <= fVar3) && (fVar1 = 1.0, fVar3 <= 1.0)) {
    fVar1 = fVar3;
  }
  return fVar1;
}


