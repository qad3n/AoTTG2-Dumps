// Type: Characters.HoldUseable
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/HoldUseable.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Characters/BaseUseable/HoldUseable.cs  [CHANGED since prior version]
// --------------------------------

// Characters.HoldUseable$$.ctor
// il2cpp: void Characters_HoldUseable___ctor (Characters_HoldUseable_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x3f9c840

void Characters_HoldUseable___ctor
               (Characters_HoldUseable_o *__this,Characters_BaseCharacter_o *owner,
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


// Characters.HoldUseable$$OnFixedUpdate
// il2cpp: void Characters_HoldUseable__OnFixedUpdate (Characters_HoldUseable_o* __this, const MethodInfo* method);
// 0x3f9c890

void Characters_HoldUseable__OnFixedUpdate(Characters_HoldUseable_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  undefined8 in_RDX;
  
  if ((char)(__this->fields).IsActive != '\0') {
    vtable_dispatch = (__this->klass->vtable)._16_ActiveFixedUpdate.methodPtr;
    (*vtable_dispatch)
              (__this,(__this->klass->vtable)._16_ActiveFixedUpdate.method,in_RDX,
               vtable_dispatch);
    return;
  }
  return;
}


// Characters.HoldUseable$$SetInput
// il2cpp: void Characters_HoldUseable__SetInput (Characters_HoldUseable_o* __this, bool key, const MethodInfo* method);
// 0x3f9c8b0

void Characters_HoldUseable__SetInput
               (Characters_HoldUseable_o *__this,bool_conflict key,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch_00;
  char cVar1;
  undefined8 extraout_RDX;
  float fVar2;
  
  cVar1 = (char)(__this->fields).IsActive;
  if ((char)key == '\0') {
    if (cVar1 != '\0') {
      *(undefined1 *)&(__this->fields).IsActive = 0;
      vtable_dispatch_00 = (__this->klass->vtable)._10_Deactivate.methodPtr;
      (*vtable_dispatch_00)
                (__this,(__this->klass->vtable)._10_Deactivate.method,method,
                 vtable_dispatch_00);
      return;
    }
  }
  else if (cVar1 == '\0') {
    cVar1 = (*(__this->klass->vtable)._6_CanUse.methodPtr)
                      (__this,(__this->klass->vtable)._6_CanUse.method);
    if (cVar1 != '\0') {
      *(undefined1 *)&(__this->fields).IsActive = 1;
      fVar2 = (float)(*(__this->klass->vtable)._14_get_ActiveTime.methodPtr)
                               (__this,(__this->klass->vtable)._14_get_ActiveTime.method);
      (__this->fields)._activeTimeLeft = fVar2;
      (*(__this->klass->vtable)._9_Activate.methodPtr)
                (__this,(__this->klass->vtable)._9_Activate.method);
      vtable_dispatch_00 = (__this->klass->vtable)._8_OnUse.methodPtr;
      (*vtable_dispatch_00)
                (__this,(__this->klass->vtable)._8_OnUse.method,extraout_RDX,
                 vtable_dispatch_00);
      return;
    }
  }
  return;
}


// Characters.HoldUseable$$ReadInput
// il2cpp: void Characters_HoldUseable__ReadInput (Characters_HoldUseable_o* __this, Settings_KeybindSetting_o* keybind, const MethodInfo* method);
// 0x3f9c940

void Characters_HoldUseable__ReadInput
               (Characters_HoldUseable_o *__this,Settings_KeybindSetting_o *keybind,
               MethodInfo *method)

{
  Characters_HoldUseable_c *pCVar1;
  Il2CppMethodPointer vtable_dispatch;
  uint uVar2;
  
  if (keybind != (Settings_KeybindSetting_o *)0x0) {
    uVar2 = Settings_KeybindSetting__GetKey(keybind,0,(MethodInfo *)0x0);
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


