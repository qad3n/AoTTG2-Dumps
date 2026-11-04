// Type: Characters.ExtendedUseable
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/ExtendedUseable.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/BaseUseable/ExtendedUseable.cs
// --------------------------------

// Characters.ExtendedUseable$$get_ActiveTime
// il2cpp: float Characters_ExtendedUseable__get_ActiveTime (Characters_ExtendedUseable_o* __this, const MethodInfo* method);
// 0x180560480

float
Characters_ExtendedUseable__get_ActiveTime(Characters_ExtendedUseable_o* __this, MethodInfo* method)

{
  return 0.0;
}


// Characters.ExtendedUseable$$.ctor
// il2cpp: void Characters_ExtendedUseable___ctor (Characters_ExtendedUseable_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x1821177e0

void
Characters_ExtendedUseable___ctor(Characters_ExtendedUseable_o* __this, Characters_BaseCharacter_o* owner, MethodInfo* method)

{
  (__this->fields)._lastUseTime = -1000.0;
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._owner = owner;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._owner,owner);
  (__this->fields).Cooldown = 0.0;
  (__this->fields).UsesLeft = -1;
  (__this->fields).MaxUses = -1;
  return;
}


// Characters.ExtendedUseable$$GetActiveTime
// il2cpp: float Characters_ExtendedUseable__GetActiveTime (Characters_ExtendedUseable_o* __this, const MethodInfo* method);
// 0x180b62cf0

float
Characters_ExtendedUseable__GetActiveTime(Characters_ExtendedUseable_o* __this, MethodInfo* method)

{
  int32_t iVar1;
  
  iVar1 = (*(__this->klass->vtable)._14_get_InstantiationKind.methodPtr)
                    (__this,(__this->klass->vtable)._14_get_InstantiationKind.method);
  return iVar1;
}


// Characters.ExtendedUseable$$ReadInput
// il2cpp: void Characters_ExtendedUseable__ReadInput (Characters_ExtendedUseable_o* __this, Settings_KeybindSetting_o* keybind, const MethodInfo* method);
// 0x182117730

void
Characters_ExtendedUseable__ReadInput(Characters_ExtendedUseable_o* __this, Settings_KeybindSetting_o* keybind, MethodInfo* method)

{
  bool bVar1;
  
  if (keybind != (Settings_KeybindSetting_o *)0x0) {
    bVar1 = Settings_KeybindSetting__GetKeyDown(keybind,false,(MethodInfo *)0x0);
    (*(__this->klass->vtable)._12_SetInput.methodPtr)
              (__this,bVar1,(__this->klass->vtable)._12_SetInput.method);
    return;
  }
  ThrowNullReferenceException();
}


// Characters.ExtendedUseable$$SetInput
// il2cpp: void Characters_ExtendedUseable__SetInput (Characters_ExtendedUseable_o* __this, bool key, const MethodInfo* method);
// 0x182117770
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821177d8: add rsp, 0x20
// asm:   0x1821177dc: pop rbx

void Characters_ExtendedUseable__SetInput(Characters_ExtendedUseable_o *__this,bool key,MethodInfo *method)

{
  Characters_ExtendedUseable_c *pCVar1;
  bool bVar2;
  float extraout_XMM0_Da;
  
  if (((key) && (bVar2 = (*(__this->klass->vtable)._6_CanUse.methodPtr)
                                   (__this,(__this->klass->vtable)._6_CanUse.method), bVar2)) &&
     ((__this->fields).IsActive == false)) {
    pCVar1 = __this->klass;
    (__this->fields).IsActive = true;
    (*(pCVar1->vtable)._15_GetActiveTime.methodPtr)(__this,(pCVar1->vtable)._15_GetActiveTime.method);
    pCVar1 = __this->klass;
    (__this->fields)._activeTimeLeft = extraout_XMM0_Da;
    (*(pCVar1->vtable)._9_Activate.methodPtr)
              (__this,(System_Type_o *)(pCVar1->vtable)._9_Activate.method,method);
    (*(__this->klass->vtable)._8_OnUse.methodPtr)(__this,(__this->klass->vtable)._8_OnUse.method);
  }
  return;
}


// Characters.ExtendedUseable$$OnFixedUpdate
// il2cpp: void Characters_ExtendedUseable__OnFixedUpdate (Characters_ExtendedUseable_o* __this, const MethodInfo* method);
// 0x1821176c0

void Characters_ExtendedUseable__OnFixedUpdate(Characters_ExtendedUseable_o *__this,MethodInfo *method)

{
  Characters_ExtendedUseable_c *pCVar1;
  MethodInfo *in_R8;
  float fVar2;
  float fVar3;
  
  if ((__this->fields).IsActive == false) {
    return;
  }
  fVar3 = (__this->fields)._activeTimeLeft;
  fVar2 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
  pCVar1 = __this->klass;
  fVar3 = fVar3 - fVar2;
  (__this->fields)._activeTimeLeft = fVar3;
  if (0.0 < fVar3) {
    (*(pCVar1->vtable)._16_ActiveFixedUpdate.methodPtr)
              (__this,(System_Type_o *)(pCVar1->vtable)._16_ActiveFixedUpdate.method,in_R8);
    return;
  }
  (__this->fields).IsActive = false;
  (*(pCVar1->vtable)._10_Deactivate.methodPtr)
            (__this,(System_Type_o *)(pCVar1->vtable)._10_Deactivate.method,in_R8);
  return;
}


// Characters.ExtendedUseable$$ActiveFixedUpdate
// il2cpp: void Characters_ExtendedUseable__ActiveFixedUpdate (Characters_ExtendedUseable_o* __this, const MethodInfo* method);
// 0x180547020

void
Characters_ExtendedUseable__ActiveFixedUpdate(Characters_ExtendedUseable_o* __this, MethodInfo* method)

{
  return;
}


