// Type: Assets.Scripts.Characters.Human.Perks.CDPerk
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Assets.Scripts.Characters.Human.Perks/CDPerk.cs
// Prior real C# source: none
// --------------------------------

// Assets.Scripts.Characters.Human.Perks.CDPerk$$get_PerkEnabled
// il2cpp: bool Assets_Scripts_Characters_Human_Perks_CDPerk__get_PerkEnabled (Assets_Scripts_Characters_Human_Perks_CDPerk_o* __this, const MethodInfo* method);
// 0x5ddabe0

bool Assets_Scripts_Characters_Human_Perks_CDPerk__get_PerkEnabled
               (Assets_Scripts_Characters_Human_Perks_CDPerk_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  
  iVar1 = (__this->fields).CurrPoints;
  iVar2 = (*(__this->klass->vtable)._5_get_MaxPoints.methodPtr)
                    (__this,(__this->klass->vtable)._5_get_MaxPoints.method);
  return iVar1 == iVar2;
}


// Assets.Scripts.Characters.Human.Perks.CDPerk$$get_Cooldown
// il2cpp: float Assets_Scripts_Characters_Human_Perks_CDPerk__get_Cooldown (Assets_Scripts_Characters_Human_Perks_CDPerk_o* __this, const MethodInfo* method);
// 0x5ddac00

float Assets_Scripts_Characters_Human_Perks_CDPerk__get_Cooldown
                (Assets_Scripts_Characters_Human_Perks_CDPerk_o *__this,MethodInfo *method)

{
  return 3.5;
}


// Assets.Scripts.Characters.Human.Perks.CDPerk$$Reset
// il2cpp: void Assets_Scripts_Characters_Human_Perks_CDPerk__Reset (Assets_Scripts_Characters_Human_Perks_CDPerk_o* __this, const MethodInfo* method);
// 0x5ddac10

void Assets_Scripts_Characters_Human_Perks_CDPerk__Reset
               (Assets_Scripts_Characters_Human_Perks_CDPerk_o *__this,MethodInfo *method)

{
  return;
}


// Assets.Scripts.Characters.Human.Perks.CDPerk$$SetCooldownLeft
// il2cpp: void Assets_Scripts_Characters_Human_Perks_CDPerk__SetCooldownLeft (Assets_Scripts_Characters_Human_Perks_CDPerk_o* __this, float cooldownLeft, const MethodInfo* method);
// 0x5ddac20

void Assets_Scripts_Characters_Human_Perks_CDPerk__SetCooldownLeft
               (Assets_Scripts_Characters_Human_Perks_CDPerk_o *__this,float cooldownLeft,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  (__this->fields)._lastUseTime = fVar1 + -3.5 + cooldownLeft;
  return;
}


// Assets.Scripts.Characters.Human.Perks.CDPerk$$GetCooldownLeft
// il2cpp: float Assets_Scripts_Characters_Human_Perks_CDPerk__GetCooldownLeft (Assets_Scripts_Characters_Human_Perks_CDPerk_o* __this, const MethodInfo* method);
// 0x5ddac50

float Assets_Scripts_Characters_Human_Perks_CDPerk__GetCooldownLeft
                (Assets_Scripts_Characters_Human_Perks_CDPerk_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar1 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  fVar2 = ((__this->fields)._lastUseTime - fVar1) + 3.5;
  fVar1 = 3.5;
  if (fVar2 <= 3.5) {
    fVar1 = fVar2;
  }
  return (float)(-(uint)(0.0 <= fVar2) & (uint)fVar1);
}


// Assets.Scripts.Characters.Human.Perks.CDPerk$$GetCooldownRatio
// il2cpp: float Assets_Scripts_Characters_Human_Perks_CDPerk__GetCooldownRatio (Assets_Scripts_Characters_Human_Perks_CDPerk_o* __this, const MethodInfo* method);
// 0x5ddac90

float Assets_Scripts_Characters_Human_Perks_CDPerk__GetCooldownRatio
                (Assets_Scripts_Characters_Human_Perks_CDPerk_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar1 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  fVar2 = (fVar1 - (__this->fields)._lastUseTime) / 3.5;
  fVar1 = 1.0;
  if (fVar2 <= 1.0) {
    fVar1 = fVar2;
  }
  return (float)(-(uint)(0.0 <= fVar2) & (uint)fVar1);
}


// Assets.Scripts.Characters.Human.Perks.CDPerk$$CanUse
// il2cpp: bool Assets_Scripts_Characters_Human_Perks_CDPerk__CanUse (Assets_Scripts_Characters_Human_Perks_CDPerk_o* __this, const MethodInfo* method);
// 0x5ddacd0

bool Assets_Scripts_Characters_Human_Perks_CDPerk__CanUse
               (Assets_Scripts_Characters_Human_Perks_CDPerk_o *__this,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  return 3.5 <= fVar1 - (__this->fields)._lastUseTime;
}


// Assets.Scripts.Characters.Human.Perks.CDPerk$$OnUse
// il2cpp: void Assets_Scripts_Characters_Human_Perks_CDPerk__OnUse (Assets_Scripts_Characters_Human_Perks_CDPerk_o* __this, const MethodInfo* method);
// 0x5ddacf0

void Assets_Scripts_Characters_Human_Perks_CDPerk__OnUse
               (Assets_Scripts_Characters_Human_Perks_CDPerk_o *__this,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  (__this->fields)._lastUseTime = fVar1;
  return;
}


// Assets.Scripts.Characters.Human.Perks.CDPerk$$.ctor
// il2cpp: void Assets_Scripts_Characters_Human_Perks_CDPerk___ctor (Assets_Scripts_Characters_Human_Perks_CDPerk_o* __this, const MethodInfo* method);
// 0x5ddad10

void Assets_Scripts_Characters_Human_Perks_CDPerk___ctor
               (Assets_Scripts_Characters_Human_Perks_CDPerk_o *__this,MethodInfo *method)

{
  (__this->fields)._lastUseTime = -1000.0;
  Characters_BasePerk___ctor((Characters_BasePerk_o *)__this,(MethodInfo *)0x0);
  return;
}


