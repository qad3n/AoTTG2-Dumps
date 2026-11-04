// Type: Characters.BaseUseable
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/BaseUseable.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/BaseUseable/BaseUseable.cs
// --------------------------------

// Characters.BaseUseable$$.ctor
// il2cpp: void Characters_BaseUseable___ctor (Characters_BaseUseable_o* __this, Characters_BaseCharacter_o* owner, float cooldown, int32_t maxUses, const MethodInfo* method);
// 0x1821131f0

void Characters_BaseUseable___ctor
               (Characters_BaseUseable_o *__this,Characters_BaseCharacter_o *owner,float cooldown,
               int32_t maxUses,MethodInfo *method)

{
  (__this->fields)._lastUseTime = -1000.0;
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._owner = owner;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._owner,owner);
  (__this->fields).Cooldown = cooldown;
  (__this->fields).MaxUses = maxUses;
  (__this->fields).UsesLeft = maxUses;
  return;
}


// Characters.BaseUseable$$Reload
// il2cpp: void Characters_BaseUseable__Reload (Characters_BaseUseable_o* __this, const MethodInfo* method);
// 0x180547020

void
Characters_BaseUseable__Reload(Characters_BaseUseable_o* __this, MethodInfo* method)

{
  return;
}


// Characters.BaseUseable$$Reset
// il2cpp: void Characters_BaseUseable__Reset (Characters_BaseUseable_o* __this, const MethodInfo* method);
// 0x182113140

void Characters_BaseUseable__Reset(Characters_BaseUseable_o *__this,MethodInfo *method)

{
  (__this->fields).UsesLeft = (__this->fields).MaxUses;
  return;
}


// Characters.BaseUseable$$SetCooldownLeft
// il2cpp: void Characters_BaseUseable__SetCooldownLeft (Characters_BaseUseable_o* __this, float cooldownLeft, const MethodInfo* method);
// 0x182113150

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
// 0x182113000

float Characters_BaseUseable__GetCooldownLeft(Characters_BaseUseable_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (__this->fields).Cooldown;
  fVar1 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  fVar2 = fVar2 - (fVar1 - (__this->fields)._lastUseTime);
  if (fVar2 < 0.0) {
    fVar2 = 0.0;
  }
  else {
    fVar1 = (__this->fields).Cooldown;
    if (fVar1 < fVar2) {
      return fVar1;
    }
  }
  return fVar2;
}


// Characters.BaseUseable$$SetCooldownRatio
// il2cpp: void Characters_BaseUseable__SetCooldownRatio (Characters_BaseUseable_o* __this, float ratio, const MethodInfo* method);
// 0x182113190

void Characters_BaseUseable__SetCooldownRatio(Characters_BaseUseable_o *__this,float ratio,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (__this->fields).Cooldown;
  fVar3 = 0.0;
  if ((0.0 <= ratio) && (fVar3 = 1.0, ratio <= 1.0)) {
    fVar3 = ratio;
  }
  fVar2 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  (__this->fields)._lastUseTime = (fVar2 - (__this->fields).Cooldown) + fVar3 * fVar1;
  return;
}


// Characters.BaseUseable$$GetCooldownRatio
// il2cpp: float Characters_BaseUseable__GetCooldownRatio (Characters_BaseUseable_o* __this, const MethodInfo* method);
// 0x182113060

float Characters_BaseUseable__GetCooldownRatio(Characters_BaseUseable_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  if ((__this->fields).UsesLeft == 0) {
    return 0.0;
  }
  if ((__this->fields).Cooldown != 0.0) {
    fVar1 = UnityEngine_Time__get_time((MethodInfo *)0x0);
    fVar2 = (fVar1 - (__this->fields)._lastUseTime) / (__this->fields).Cooldown;
    fVar1 = 0.0;
    if ((0.0 <= fVar2) && (fVar1 = 1.0, fVar2 <= 1.0)) {
      fVar1 = fVar2;
    }
    return fVar1;
  }
  return 1.0;
}


// Characters.BaseUseable$$HasUsesLeft
// il2cpp: bool Characters_BaseUseable__HasUsesLeft (Characters_BaseUseable_o* __this, const MethodInfo* method);
// 0x182113100

bool Characters_BaseUseable__HasUsesLeft(Characters_BaseUseable_o *__this,MethodInfo *method)

{
  return (__this->fields).UsesLeft != 0;
}


// Characters.BaseUseable$$GetUsesRatio
// il2cpp: float Characters_BaseUseable__GetUsesRatio (Characters_BaseUseable_o* __this, const MethodInfo* method);
// 0x1821130e0

float Characters_BaseUseable__GetUsesRatio(Characters_BaseUseable_o *__this,MethodInfo *method)

{
  if ((0 < (__this->fields).MaxUses) && (-1 < (__this->fields).UsesLeft)) {
    return (float)(int)((uint)(__this->fields).UsesLeft / (uint)(__this->fields).MaxUses);
  }
  return 0.0;
}


// Characters.BaseUseable$$CanUse
// il2cpp: bool Characters_BaseUseable__CanUse (Characters_BaseUseable_o* __this, const MethodInfo* method);
// 0x182112fc0

bool Characters_BaseUseable__CanUse(Characters_BaseUseable_o *__this,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  if (fVar1 - (__this->fields)._lastUseTime < (__this->fields).Cooldown) {
    return false;
  }
  if ((__this->fields).UsesLeft == -1) {
    return true;
  }
  return 0 < (__this->fields).UsesLeft;
}


// Characters.BaseUseable$$HasDurability
// il2cpp: bool Characters_BaseUseable__HasDurability (Characters_BaseUseable_o* __this, const MethodInfo* method);
// 0x180668280

bool
Characters_BaseUseable__HasDurability(Characters_BaseUseable_o* __this, MethodInfo* method)

{
  return false;
}


// Characters.BaseUseable$$OnUse
// il2cpp: void Characters_BaseUseable__OnUse (Characters_BaseUseable_o* __this, const MethodInfo* method);
// 0x182113110

void Characters_BaseUseable__OnUse(Characters_BaseUseable_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  float fVar2;
  
  if (0 < (__this->fields).UsesLeft) {
    piVar1 = &(__this->fields).UsesLeft;
    *piVar1 = *piVar1 + -1;
  }
  fVar2 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  (__this->fields)._lastUseTime = fVar2;
  return;
}


// Characters.BaseUseable$$Activate
// il2cpp: void Characters_BaseUseable__Activate (Characters_BaseUseable_o* __this, const MethodInfo* method);
// 0x180547020

void
Characters_BaseUseable__Activate(Characters_BaseUseable_o* __this, MethodInfo* method)

{
  return;
}


// Characters.BaseUseable$$Deactivate
// il2cpp: void Characters_BaseUseable__Deactivate (Characters_BaseUseable_o* __this, const MethodInfo* method);
// 0x180547020

void
Characters_BaseUseable__Deactivate(Characters_BaseUseable_o* __this, MethodInfo* method)

{
  return;
}


// Characters.BaseUseable$$ReadInput
// il2cpp: void Characters_BaseUseable__ReadInput (Characters_BaseUseable_o* __this, Settings_KeybindSetting_o* keybind, const MethodInfo* method);
// 0x180547020

void
Characters_BaseUseable__ReadInput(Characters_BaseUseable_o* __this, Settings_KeybindSetting_o* keybind, MethodInfo* method)

{
  return;
}


// Characters.BaseUseable$$SetInput
// il2cpp: void Characters_BaseUseable__SetInput (Characters_BaseUseable_o* __this, bool key, const MethodInfo* method);
// 0x180547020

void
Characters_BaseUseable__SetInput(Characters_BaseUseable_o* __this, bool key, MethodInfo* method)

{
  return;
}


// Characters.BaseUseable$$OnFixedUpdate
// il2cpp: void Characters_BaseUseable__OnFixedUpdate (Characters_BaseUseable_o* __this, const MethodInfo* method);
// 0x180547020

void
Characters_BaseUseable__OnFixedUpdate(Characters_BaseUseable_o* __this, MethodInfo* method)

{
  return;
}


