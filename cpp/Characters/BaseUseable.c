// Type: Characters.BaseUseable
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/BaseUseable.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/BaseUseable/BaseUseable.cs
// --------------------------------

// Characters.BaseUseable$$.ctor
// il2cpp: void Characters_BaseUseable___ctor (Characters_BaseUseable_o* __this, Characters_BaseCharacter_o* owner, float cooldown, int32_t maxUses, const MethodInfo* method);
// 0x42a8c90

void Characters_BaseUseable___ctor
               (Characters_BaseUseable_o *__this,Characters_BaseCharacter_o *owner,float cooldown,
               int32_t maxUses,MethodInfo *method)

{
  (__this->fields)._lastUseTime = -1000.0;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._owner = owner;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._owner,owner);
  (__this->fields).Cooldown = cooldown;
  (__this->fields).MaxUses = maxUses;
  (__this->fields).UsesLeft = maxUses;
  return;
}


// Characters.BaseUseable$$Reload
// il2cpp: void Characters_BaseUseable__Reload (Characters_BaseUseable_o* __this, const MethodInfo* method);
// 0x42a8cf0

void Characters_BaseUseable__Reload(Characters_BaseUseable_o *__this,MethodInfo *method)

{
  return;
}


// Characters.BaseUseable$$Reset
// il2cpp: void Characters_BaseUseable__Reset (Characters_BaseUseable_o* __this, const MethodInfo* method);
// 0x42a8d00

void Characters_BaseUseable__Reset(Characters_BaseUseable_o *__this,MethodInfo *method)

{
  (__this->fields).UsesLeft = (__this->fields).MaxUses;
  return;
}


// Characters.BaseUseable$$SetCooldownLeft
// il2cpp: void Characters_BaseUseable__SetCooldownLeft (Characters_BaseUseable_o* __this, float cooldownLeft, const MethodInfo* method);
// 0x42a8d10

void Characters_BaseUseable__SetCooldownLeft
               (Characters_BaseUseable_o *__this,float cooldownLeft,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  (__this->fields)._lastUseTime = (fVar1 - (__this->fields).Cooldown) + cooldownLeft;
  return;
}


// Characters.BaseUseable$$GetCooldownLeft
// il2cpp: float Characters_BaseUseable__GetCooldownLeft (Characters_BaseUseable_o* __this, const MethodInfo* method);
// 0x42a8d40

float Characters_BaseUseable__GetCooldownLeft(Characters_BaseUseable_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = (__this->fields).Cooldown;
  fVar1 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  fVar2 = (__this->fields).Cooldown;
  fVar3 = fVar3 - (fVar1 - (__this->fields)._lastUseTime);
  if (fVar3 <= fVar2) {
    fVar2 = fVar3;
  }
  return (float)(-(uint)(0.0 <= fVar3) & (uint)fVar2);
}


// Characters.BaseUseable$$SetCooldownRatio
// il2cpp: void Characters_BaseUseable__SetCooldownRatio (Characters_BaseUseable_o* __this, float ratio, const MethodInfo* method);
// 0x42a8d90

void Characters_BaseUseable__SetCooldownRatio(Characters_BaseUseable_o *__this,float ratio,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = 1.0;
  if (ratio <= 1.0) {
    fVar3 = ratio;
  }
  fVar1 = (__this->fields).Cooldown;
  fVar2 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  (__this->fields)._lastUseTime =
       (fVar2 - (__this->fields).Cooldown) + (float)(-(uint)(0.0 <= ratio) & (uint)fVar3) * fVar1;
  return;
}


// Characters.BaseUseable$$GetCooldownRatio
// il2cpp: float Characters_BaseUseable__GetCooldownRatio (Characters_BaseUseable_o* __this, const MethodInfo* method);
// 0x42a8de0

float Characters_BaseUseable__GetCooldownRatio(Characters_BaseUseable_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  if ((__this->fields).UsesLeft == 0) {
    return 0.0;
  }
  fVar1 = (__this->fields).Cooldown;
  if ((fVar1 == 0.0) && (!NAN(fVar1))) {
    return 1.0;
  }
  fVar1 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  fVar2 = (fVar1 - (__this->fields)._lastUseTime) / (__this->fields).Cooldown;
  fVar1 = 0.0;
  if ((0.0 <= fVar2) && (fVar1 = 1.0, fVar2 <= 1.0)) {
    fVar1 = fVar2;
  }
  return fVar1;
}


// Characters.BaseUseable$$HasUsesLeft
// il2cpp: bool Characters_BaseUseable__HasUsesLeft (Characters_BaseUseable_o* __this, const MethodInfo* method);
// 0x42a8e40

bool_conflict Characters_BaseUseable__HasUsesLeft(Characters_BaseUseable_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),(__this->fields).UsesLeft != 0);
}


// Characters.BaseUseable$$GetUsesRatio
// il2cpp: float Characters_BaseUseable__GetUsesRatio (Characters_BaseUseable_o* __this, const MethodInfo* method);
// 0x42a8e50

float Characters_BaseUseable__GetUsesRatio(Characters_BaseUseable_o *__this,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  
  uVar1 = (__this->fields).MaxUses;
  fVar3 = 0.0;
  if ((0 < (int)uVar1) && (uVar2 = (__this->fields).UsesLeft, -1 < (int)uVar2)) {
    fVar3 = (float)(int)(uVar2 / uVar1);
  }
  return fVar3;
}


// Characters.BaseUseable$$CanUse
// il2cpp: bool Characters_BaseUseable__CanUse (Characters_BaseUseable_o* __this, const MethodInfo* method);
// 0x42a8e70

bool_conflict Characters_BaseUseable__CanUse(Characters_BaseUseable_o *__this,MethodInfo *method)

{
  int iVar1;
  float fVar2;
  
  fVar2 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  if (fVar2 - (__this->fields)._lastUseTime < (__this->fields).Cooldown) {
    return 0;
  }
  iVar1 = (__this->fields).UsesLeft;
  return CONCAT31((int3)((uint)iVar1 >> 8),0 < iVar1 || iVar1 == -1);
}


// Characters.BaseUseable$$HasDurability
// il2cpp: bool Characters_BaseUseable__HasDurability (Characters_BaseUseable_o* __this, const MethodInfo* method);
// 0x42a8ea0

bool_conflict Characters_BaseUseable__HasDurability(Characters_BaseUseable_o *__this,MethodInfo *method)

{
  return 0;
}


// Characters.BaseUseable$$OnUse
// il2cpp: void Characters_BaseUseable__OnUse (Characters_BaseUseable_o* __this, const MethodInfo* method);
// 0x42a8eb0

void Characters_BaseUseable__OnUse(Characters_BaseUseable_o *__this,MethodInfo *method)

{
  int iVar1;
  float fVar2;
  
  iVar1 = (__this->fields).UsesLeft;
  if (0 < iVar1) {
    (__this->fields).UsesLeft = iVar1 + -1;
  }
  fVar2 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  (__this->fields)._lastUseTime = fVar2;
  return;
}


// Characters.BaseUseable$$Activate
// il2cpp: void Characters_BaseUseable__Activate (Characters_BaseUseable_o* __this, const MethodInfo* method);
// 0x42a8ed0

void Characters_BaseUseable__Activate(Characters_BaseUseable_o *__this,MethodInfo *method)

{
  return;
}


// Characters.BaseUseable$$Deactivate
// il2cpp: void Characters_BaseUseable__Deactivate (Characters_BaseUseable_o* __this, const MethodInfo* method);
// 0x42a8ee0

void Characters_BaseUseable__Deactivate(Characters_BaseUseable_o *__this,MethodInfo *method)

{
  return;
}


// Characters.BaseUseable$$ReadInput
// il2cpp: void Characters_BaseUseable__ReadInput (Characters_BaseUseable_o* __this, Settings_KeybindSetting_o* keybind, const MethodInfo* method);
// 0x42a8ef0

void Characters_BaseUseable__ReadInput
               (Characters_BaseUseable_o *__this,Settings_KeybindSetting_o *keybind,MethodInfo *method)

{
  return;
}


// Characters.BaseUseable$$SetInput
// il2cpp: void Characters_BaseUseable__SetInput (Characters_BaseUseable_o* __this, bool key, const MethodInfo* method);
// 0x42a8f00

void Characters_BaseUseable__SetInput(Characters_BaseUseable_o *__this,bool_conflict key,MethodInfo *method)

{
  return;
}


// Characters.BaseUseable$$OnFixedUpdate
// il2cpp: void Characters_BaseUseable__OnFixedUpdate (Characters_BaseUseable_o* __this, const MethodInfo* method);
// 0x42a8f10

void Characters_BaseUseable__OnFixedUpdate(Characters_BaseUseable_o *__this,MethodInfo *method)

{
  return;
}


