// Type: Assets.Scripts.Characters.Human.Perks.DivisivePowerPerk
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Assets.Scripts.Characters.Human.Perks/DivisivePowerPerk.cs
// Prior real C# source: none
// --------------------------------

// Assets.Scripts.Characters.Human.Perks.DivisivePowerPerk$$get_PerkEnabled
// il2cpp: bool Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__get_PerkEnabled (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o* __this, const MethodInfo* method);
// 0x18232c5d0

bool
Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__get_PerkEnabled(Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o* __this, MethodInfo* method)

{
  int iVar1;
  int32_t iVar2;
  
  iVar1 = (__this->fields).CurrPoints;
  iVar2 = (*(__this->klass->vtable)._5_get_MaxPoints.methodPtr)
                    (__this,(__this->klass->vtable)._5_get_MaxPoints.method);
  return iVar1 == iVar2;
}


// Assets.Scripts.Characters.Human.Perks.DivisivePowerPerk$$get_MaxPower
// il2cpp: float Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__get_MaxPower (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o* __this, const MethodInfo* method);
// 0x1820cf430

float
Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__get_MaxPower(Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o* __this, MethodInfo* method)

{
  return 1.0;
}


// Assets.Scripts.Characters.Human.Perks.DivisivePowerPerk$$get_MinPower
// il2cpp: float Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__get_MinPower (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o* __this, const MethodInfo* method);
// 0x180560480

float
Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__get_MinPower(Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o* __this, MethodInfo* method)

{
  return 0.0;
}


// Assets.Scripts.Characters.Human.Perks.DivisivePowerPerk$$get_PowerUsageDivisor
// il2cpp: float Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__get_PowerUsageDivisor (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o* __this, const MethodInfo* method);
// 0x181d9f790

float Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__get_PowerUsageDivisor
                (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *__this,MethodInfo *method)

{
  return 2.0;
}


// Assets.Scripts.Characters.Human.Perks.DivisivePowerPerk$$get_LinearRecoveryRate
// il2cpp: float Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__get_LinearRecoveryRate (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o* __this, const MethodInfo* method);
// 0x1821bc890

float
Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__get_LinearRecoveryRate(Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o* __this, MethodInfo* method)

{
  return 0.1;
}


// Assets.Scripts.Characters.Human.Perks.DivisivePowerPerk$$get_Cooldown
// il2cpp: float Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__get_Cooldown (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o* __this, const MethodInfo* method);
// 0x180560480

float
Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__get_Cooldown(Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o* __this, MethodInfo* method)

{
  return 0.0;
}


// Assets.Scripts.Characters.Human.Perks.DivisivePowerPerk$$.ctor
// il2cpp: void Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk___ctor (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o* __this, const MethodInfo* method);
// 0x182336c60

void
Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk___ctor(Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o* __this, MethodInfo* method)

{
  float fVar1;
  
  (__this->fields)._lastUseTime = -1000.0;
  Characters_BasePerk___ctor((Characters_BasePerk_o *)__this,(MethodInfo *)0x0);
  fVar1 = (*(__this->klass->vtable)._9_get_MaxPower.methodPtr)
                    (__this,(__this->klass->vtable)._9_get_MaxPower.method);
  (__this->fields)._currentPower = fVar1;
  fVar1 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  (__this->fields)._lastUpdateTime = fVar1;
  return;
}


// Assets.Scripts.Characters.Human.Perks.DivisivePowerPerk$$Reset
// il2cpp: void Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__Reset (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o* __this, const MethodInfo* method);
// 0x182336a90

void
Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__Reset(Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o* __this, MethodInfo* method)

{
  float fVar1;
  
  fVar1 = (*(__this->klass->vtable)._9_get_MaxPower.methodPtr)
                    (__this,(__this->klass->vtable)._9_get_MaxPower.method);
  (__this->fields)._currentPower = fVar1;
  fVar1 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  (__this->fields)._lastUpdateTime = fVar1;
  return;
}


// Assets.Scripts.Characters.Human.Perks.DivisivePowerPerk$$GetCurrentPower
// il2cpp: float Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__GetCurrentPower (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o* __this, const MethodInfo* method);
// 0x1823366b0

float
Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__GetCurrentPower(Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o* __this, MethodInfo* method)

{
  Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__UpdatePower(__this,(MethodInfo *)0x0);
  return (__this->fields)._currentPower;
}


// Assets.Scripts.Characters.Human.Perks.DivisivePowerPerk$$SetCurrentPower
// il2cpp: void Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__SetCurrentPower (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o* __this, float power, const MethodInfo* method);
// 0x182336b10
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182336b5b: movaps xmm0, xmm7

void
Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__SetCurrentPower(Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o* __this, float power, MethodInfo* method)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (*(__this->klass->vtable)._10_get_MinPower.methodPtr)
                    (__this,(__this->klass->vtable)._10_get_MinPower.method);
  fVar2 = (*(__this->klass->vtable)._9_get_MaxPower.methodPtr)
                    (__this,(__this->klass->vtable)._9_get_MaxPower.method);
  if ((fVar1 <= power) && (fVar1 = fVar2, power <= fVar2)) {
    fVar1 = power;
  }
  (__this->fields)._currentPower = fVar1;
  fVar1 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  (__this->fields)._lastUpdateTime = fVar1;
  return;
}


// Assets.Scripts.Characters.Human.Perks.DivisivePowerPerk$$RecoverPower
// il2cpp: void Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__RecoverPower (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o* __this, float amount, const MethodInfo* method);
// 0x182336a00
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182336a5c: movaps xmm0, xmm8

void
Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__RecoverPower(Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o* __this, float amount, MethodInfo* method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = (__this->fields)._currentPower;
  fVar1 = (*(__this->klass->vtable)._10_get_MinPower.methodPtr)
                    (__this,(__this->klass->vtable)._10_get_MinPower.method);
  fVar2 = (*(__this->klass->vtable)._9_get_MaxPower.methodPtr)
                    (__this,(__this->klass->vtable)._9_get_MaxPower.method);
  fVar3 = fVar3 + amount;
  if ((fVar1 <= fVar3) && (fVar1 = fVar2, fVar3 <= fVar2)) {
    fVar1 = fVar3;
  }
  (__this->fields)._currentPower = fVar1;
  fVar3 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  (__this->fields)._lastUpdateTime = fVar3;
  return;
}


// Assets.Scripts.Characters.Human.Perks.DivisivePowerPerk$$RecoverPowerBySeconds
// il2cpp: void Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__RecoverPowerBySeconds (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o* __this, float seconds, const MethodInfo* method);
// 0x182336950
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823369d0: movaps xmm0, xmm8

void
Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__RecoverPowerBySeconds(Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o* __this, float seconds, MethodInfo* method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (0.0 < seconds) {
    fVar1 = (*(__this->klass->vtable)._15_GetRecoveryAmount.methodPtr)
                      (__this,seconds,(__this->klass->vtable)._15_GetRecoveryAmount.method);
    fVar4 = (__this->fields)._currentPower;
    fVar2 = (*(__this->klass->vtable)._10_get_MinPower.methodPtr)
                      (__this,(__this->klass->vtable)._10_get_MinPower.method);
    fVar3 = (*(__this->klass->vtable)._9_get_MaxPower.methodPtr)
                      (__this,(__this->klass->vtable)._9_get_MaxPower.method);
    fVar4 = fVar4 + fVar1;
    if ((fVar2 <= fVar4) && (fVar2 = fVar3, fVar4 <= fVar3)) {
      fVar2 = fVar4;
    }
    (__this->fields)._currentPower = fVar2;
    fVar4 = UnityEngine_Time__get_time((MethodInfo *)0x0);
    (__this->fields)._lastUpdateTime = fVar4;
  }
  return;
}


// Assets.Scripts.Characters.Human.Perks.DivisivePowerPerk$$GetPowerRatio
// il2cpp: float Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__GetPowerRatio (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o* __this, const MethodInfo* method);
// 0x1823366d0

float
Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__GetPowerRatio(Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o* __this, MethodInfo* method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__UpdatePower(__this,(MethodInfo *)0x0);
  fVar1 = (*(__this->klass->vtable)._9_get_MaxPower.methodPtr)
                    (__this,(__this->klass->vtable)._9_get_MaxPower.method);
  fVar2 = (*(__this->klass->vtable)._10_get_MinPower.methodPtr)
                    (__this,(__this->klass->vtable)._10_get_MinPower.method);
  if (fVar1 != fVar2) {
    fVar1 = (__this->fields)._currentPower;
    fVar2 = (*(__this->klass->vtable)._10_get_MinPower.methodPtr)
                      (__this,(__this->klass->vtable)._10_get_MinPower.method);
    fVar3 = (*(__this->klass->vtable)._9_get_MaxPower.methodPtr)
                      (__this,(__this->klass->vtable)._9_get_MaxPower.method);
    fVar4 = (*(__this->klass->vtable)._10_get_MinPower.methodPtr)
                      (__this,(__this->klass->vtable)._10_get_MinPower.method);
    return (fVar1 - fVar2) / (fVar3 - fVar4);
  }
  return 1.0;
}


// Assets.Scripts.Characters.Human.Perks.DivisivePowerPerk$$UpdatePower
// il2cpp: void Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__UpdatePower (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o* __this, const MethodInfo* method);
// 0x182336b80
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182336c2d: movaps xmm0, xmm8
// asm:   0x182336c48: movaps xmm6, xmmword ptr [rsp + 0x40]

void
Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__UpdatePower(Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o* __this, MethodInfo* method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  fVar1 = fVar1 - (__this->fields)._lastUpdateTime;
  if ((0.0 < fVar1) &&
     (fVar3 = (__this->fields)._currentPower,
     fVar2 = (*(__this->klass->vtable)._9_get_MaxPower.methodPtr)
                       (__this,(__this->klass->vtable)._9_get_MaxPower.method), fVar3 < fVar2)) {
    fVar2 = (*(__this->klass->vtable)._15_GetRecoveryAmount.methodPtr)
                      (__this,fVar1,(__this->klass->vtable)._15_GetRecoveryAmount.method);
    fVar1 = (__this->fields)._currentPower;
    fVar3 = (*(__this->klass->vtable)._10_get_MinPower.methodPtr)
                      (__this,(__this->klass->vtable)._10_get_MinPower.method);
    fVar4 = (*(__this->klass->vtable)._9_get_MaxPower.methodPtr)
                      (__this,(__this->klass->vtable)._9_get_MaxPower.method);
    fVar1 = fVar1 + fVar2;
    if ((fVar3 <= fVar1) && (fVar3 = fVar4, fVar1 <= fVar4)) {
      fVar3 = fVar1;
    }
    (__this->fields)._currentPower = fVar3;
    fVar1 = UnityEngine_Time__get_time((MethodInfo *)0x0);
    (__this->fields)._lastUpdateTime = fVar1;
  }
  return;
}


// Assets.Scripts.Characters.Human.Perks.DivisivePowerPerk$$GetRecoveryAmount
// il2cpp: float Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__GetRecoveryAmount (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o* __this, float deltaTime, const MethodInfo* method);
// 0x1823367a0

float
Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__GetRecoveryAmount(Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o* __this, float deltaTime, MethodInfo* method)

{
  float fVar1;
  
  fVar1 = (*(__this->klass->vtable)._12_get_LinearRecoveryRate.methodPtr)(__this);
  return fVar1 * deltaTime;
}


// Assets.Scripts.Characters.Human.Perks.DivisivePowerPerk$$CanUse
// il2cpp: bool Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__CanUse (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o* __this, const MethodInfo* method);
// 0x1823364e0

bool Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__CanUse
               (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *__this,MethodInfo *method)

{
  float fVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__UpdatePower
            ((Assets_Scripts_Characters_Human_Perks_PowerPerk_o *)__this,(MethodInfo *)0x0);
  fVar1 = (__this->fields)._currentPower;
  fVar4 = (*(__this->klass->vtable)._10_get_MinPower.methodPtr)
                    (__this,(__this->klass->vtable)._10_get_MinPower.method);
  fVar5 = (*(__this->klass->vtable)._13_get_Cooldown.methodPtr)
                    (__this,(__this->klass->vtable)._13_get_Cooldown.method);
  if (fVar5 == 0.0) {
    bVar2 = true;
  }
  else {
    fVar6 = UnityEngine_Time__get_time((MethodInfo *)0x0);
    fVar5 = (__this->fields)._lastUseTime;
    fVar7 = (*(__this->klass->vtable)._13_get_Cooldown.methodPtr)
                      (__this,(__this->klass->vtable)._13_get_Cooldown.method);
    bVar2 = fVar7 <= fVar6 - fVar5;
  }
  bVar3 = false;
  if (fVar4 < fVar1) {
    bVar3 = bVar2;
  }
  return bVar3;
}


// Assets.Scripts.Characters.Human.Perks.DivisivePowerPerk$$OnUse
// il2cpp: void Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__OnUse (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o* __this, const MethodInfo* method);
// 0x1823368a0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182336919: movaps xmm0, xmm8

void Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__OnUse
               (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__UpdatePower
            ((Assets_Scripts_Characters_Human_Perks_PowerPerk_o *)__this,(MethodInfo *)0x0);
  fVar4 = (__this->fields)._currentPower;
  fVar1 = (*(__this->klass->vtable)._11_get_PowerUsageDivisor.methodPtr)
                    (__this,(__this->klass->vtable)._11_get_PowerUsageDivisor.method);
  fVar2 = (*(__this->klass->vtable)._10_get_MinPower.methodPtr)
                    (__this,(__this->klass->vtable)._10_get_MinPower.method);
  fVar3 = (*(__this->klass->vtable)._9_get_MaxPower.methodPtr)
                    (__this,(__this->klass->vtable)._9_get_MaxPower.method);
  fVar4 = fVar4 / fVar1;
  if ((fVar2 <= fVar4) && (fVar2 = fVar3, fVar4 <= fVar3)) {
    fVar2 = fVar4;
  }
  (__this->fields)._currentPower = fVar2;
  fVar4 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  (__this->fields)._lastUseTime = fVar4;
  fVar4 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  (__this->fields)._lastUpdateTime = fVar4;
  return;
}


// Assets.Scripts.Characters.Human.Perks.DivisivePowerPerk$$OnUse
// il2cpp: void Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__OnUse (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o* __this, float percent, const MethodInfo* method);
// 0x1823367d0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18233685a: movaps xmm0, xmm9

void Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__OnUse_23367d0
               (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *__this,float percent,
               MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__UpdatePower
            ((Assets_Scripts_Characters_Human_Perks_PowerPerk_o *)__this,(MethodInfo *)0x0);
  fVar4 = (__this->fields)._currentPower;
  fVar1 = (*(__this->klass->vtable)._9_get_MaxPower.methodPtr)
                    (__this,(__this->klass->vtable)._9_get_MaxPower.method);
  fVar2 = (*(__this->klass->vtable)._10_get_MinPower.methodPtr)
                    (__this,(__this->klass->vtable)._10_get_MinPower.method);
  fVar3 = (*(__this->klass->vtable)._9_get_MaxPower.methodPtr)
                    (__this,(__this->klass->vtable)._9_get_MaxPower.method);
  fVar4 = fVar4 - fVar1 * percent;
  if ((fVar2 <= fVar4) && (fVar2 = fVar3, fVar4 <= fVar3)) {
    fVar2 = fVar4;
  }
  (__this->fields)._currentPower = fVar2;
  fVar4 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  (__this->fields)._lastUseTime = fVar4;
  fVar4 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  (__this->fields)._lastUpdateTime = fVar4;
  return;
}


// Assets.Scripts.Characters.Human.Perks.DivisivePowerPerk$$SetCooldownLeft
// il2cpp: void Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__SetCooldownLeft (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o* __this, float cooldownLeft, const MethodInfo* method);
// 0x182336ac0

void
Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__SetCooldownLeft(Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o* __this, float cooldownLeft, MethodInfo* method)

{
  float fVar1;
  float fVar2;
  
  fVar1 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  fVar2 = (*(__this->klass->vtable)._13_get_Cooldown.methodPtr)
                    (__this,(__this->klass->vtable)._13_get_Cooldown.method);
  (__this->fields)._lastUseTime = (fVar1 - fVar2) + cooldownLeft;
  return;
}


// Assets.Scripts.Characters.Human.Perks.DivisivePowerPerk$$GetCooldownLeft
// il2cpp: float Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__GetCooldownLeft (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o* __this, const MethodInfo* method);
// 0x182336590
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823365fd: movaps xmm0, xmm8

float
Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__GetCooldownLeft(Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o* __this, MethodInfo* method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = (*(__this->klass->vtable)._13_get_Cooldown.methodPtr)
                    (__this,(__this->klass->vtable)._13_get_Cooldown.method);
  fVar3 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  fVar1 = (__this->fields)._lastUseTime;
  fVar4 = (*(__this->klass->vtable)._13_get_Cooldown.methodPtr)
                    (__this,(__this->klass->vtable)._13_get_Cooldown.method);
  fVar2 = fVar2 - (fVar3 - fVar1);
  if (fVar2 < 0.0) {
    fVar2 = 0.0;
  }
  else if (fVar4 < fVar2) {
    fVar2 = fVar4;
  }
  return fVar2;
}


// Assets.Scripts.Characters.Human.Perks.DivisivePowerPerk$$GetCooldownRatio
// il2cpp: float Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__GetCooldownRatio (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o* __this, const MethodInfo* method);
// 0x182336620

float
Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__GetCooldownRatio(Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o* __this, MethodInfo* method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (*(__this->klass->vtable)._13_get_Cooldown.methodPtr)
                    (__this,(__this->klass->vtable)._13_get_Cooldown.method);
  if (fVar1 != 0.0) {
    fVar2 = UnityEngine_Time__get_time((MethodInfo *)0x0);
    fVar1 = (__this->fields)._lastUseTime;
    fVar3 = (*(__this->klass->vtable)._13_get_Cooldown.methodPtr)
                      (__this,(__this->klass->vtable)._13_get_Cooldown.method);
    fVar3 = (fVar2 - fVar1) / fVar3;
    fVar1 = 0.0;
    if ((0.0 <= fVar3) && (fVar1 = 1.0, fVar3 <= 1.0)) {
      fVar1 = fVar3;
    }
    return fVar1;
  }
  return 1.0;
}


