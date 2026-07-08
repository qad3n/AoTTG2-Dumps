// Type: Characters.ExtendedUseable
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/ExtendedUseable.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Characters/BaseUseable/ExtendedUseable.cs  [CHANGED since prior version]
// --------------------------------

// Characters.ExtendedUseable$$get_ActiveTime
// il2cpp: float Characters_ExtendedUseable__get_ActiveTime (Characters_ExtendedUseable_o* __this, const MethodInfo* method);
// 0x3f9c680

float Characters_ExtendedUseable__get_ActiveTime
                (Characters_ExtendedUseable_o *__this,MethodInfo *method)

{
  return 0.0;
}


// Characters.ExtendedUseable$$.ctor
// il2cpp: void Characters_ExtendedUseable___ctor (Characters_ExtendedUseable_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x3f9c690

void Characters_ExtendedUseable___ctor
               (Characters_ExtendedUseable_o *__this,Characters_BaseCharacter_o *owner,
               MethodInfo *method)

{
  (__this->fields)._lastUseTime = -1000.0;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._owner = owner;
  il2cpp_runtime_glue(&(__this->fields)._owner,owner);
  (__this->fields).Cooldown = 0.0;
  (__this->fields).UsesLeft = -1;
  (__this->fields).MaxUses = -1;
  return;
}


// Characters.ExtendedUseable$$GetActiveTime
// il2cpp: float Characters_ExtendedUseable__GetActiveTime (Characters_ExtendedUseable_o* __this, const MethodInfo* method);
// 0x3f9c6e0

float Characters_ExtendedUseable__GetActiveTime
                (Characters_ExtendedUseable_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  undefined8 in_RDX;
  float fVar1;
  
  vtable_dispatch = (__this->klass->vtable)._14_get_ActiveTime.methodPtr;
  fVar1 = (float)(*vtable_dispatch)
                           (__this,(__this->klass->vtable)._14_get_ActiveTime.method,in_RDX,
                            vtable_dispatch);
  return fVar1;
}


// Characters.ExtendedUseable$$ReadInput
// il2cpp: void Characters_ExtendedUseable__ReadInput (Characters_ExtendedUseable_o* __this, Settings_KeybindSetting_o* keybind, const MethodInfo* method);
// 0x3f9c700

void Characters_ExtendedUseable__ReadInput
               (Characters_ExtendedUseable_o *__this,Settings_KeybindSetting_o *keybind,
               MethodInfo *method)

{
  Characters_ExtendedUseable_c *pCVar1;
  Il2CppMethodPointer vtable_dispatch;
  uint uVar2;
  
  if (keybind != (Settings_KeybindSetting_o *)0x0) {
    uVar2 = Settings_KeybindSetting__GetKeyDown(keybind,0,(MethodInfo *)0x0);
    pCVar1 = __this->klass;
    vtable_dispatch = (pCVar1->vtable)._12_SetInput.methodPtr;
    (*vtable_dispatch)
              (__this,(ulong)(uVar2 & 0xff),(pCVar1->vtable)._12_SetInput.method,pCVar1,
               vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.ExtendedUseable$$SetInput
// il2cpp: void Characters_ExtendedUseable__SetInput (Characters_ExtendedUseable_o* __this, bool key, const MethodInfo* method);
// 0x3f9c740

void Characters_ExtendedUseable__SetInput
               (Characters_ExtendedUseable_o *__this,bool_conflict key,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  char cVar1;
  undefined8 extraout_RDX;
  float fVar2;
  
  if ((char)key != '\0') {
    cVar1 = (*(__this->klass->vtable)._6_CanUse.methodPtr)
                      (__this,(__this->klass->vtable)._6_CanUse.method);
    if ((cVar1 != '\0') && ((char)(__this->fields).IsActive == '\0')) {
      *(undefined1 *)&(__this->fields).IsActive = 1;
      fVar2 = (float)(*(__this->klass->vtable)._15_GetActiveTime.methodPtr)
                               (__this,(__this->klass->vtable)._15_GetActiveTime.method);
      (__this->fields)._activeTimeLeft = fVar2;
      (*(__this->klass->vtable)._9_Activate.methodPtr)
                (__this,(__this->klass->vtable)._9_Activate.method);
      vtable_dispatch = (__this->klass->vtable)._8_OnUse.methodPtr;
      (*vtable_dispatch)
                (__this,(__this->klass->vtable)._8_OnUse.method,extraout_RDX,vtable_dispatch);
      return;
    }
  }
  return;
}


// Characters.ExtendedUseable$$OnFixedUpdate
// il2cpp: void Characters_ExtendedUseable__OnFixedUpdate (Characters_ExtendedUseable_o* __this, const MethodInfo* method);
// 0x3f9c7b0

void Characters_ExtendedUseable__OnFixedUpdate
               (Characters_ExtendedUseable_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch_00;
  undefined8 extraout_RDX;
  float fVar1;
  float fVar2;
  
  if ((char)(__this->fields).IsActive == '\0') {
    return;
  }
  fVar2 = (__this->fields)._activeTimeLeft;
  fVar1 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
  fVar2 = fVar2 - fVar1;
  (__this->fields)._activeTimeLeft = fVar2;
  if (0.0 < fVar2) {
    vtable_dispatch_00 = (__this->klass->vtable)._16_ActiveFixedUpdate.methodPtr;
    (*vtable_dispatch_00)
              (__this,(__this->klass->vtable)._16_ActiveFixedUpdate.method,extraout_RDX,
               vtable_dispatch_00);
    return;
  }
  *(undefined1 *)&(__this->fields).IsActive = 0;
  vtable_dispatch_00 = (__this->klass->vtable)._10_Deactivate.methodPtr;
  (*vtable_dispatch_00)
            (__this,(__this->klass->vtable)._10_Deactivate.method,extraout_RDX,
             vtable_dispatch_00);
  return;
}


// Characters.ExtendedUseable$$ActiveFixedUpdate
// il2cpp: void Characters_ExtendedUseable__ActiveFixedUpdate (Characters_ExtendedUseable_o* __this, const MethodInfo* method);
// 0x3f9c830

void Characters_ExtendedUseable__ActiveFixedUpdate
               (Characters_ExtendedUseable_o *__this,MethodInfo *method)

{
  return;
}


