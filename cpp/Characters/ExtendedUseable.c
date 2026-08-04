// Type: Characters.ExtendedUseable
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/ExtendedUseable.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/BaseUseable/ExtendedUseable.cs
// --------------------------------

// Characters.ExtendedUseable$$get_ActiveTime
// il2cpp: float Characters_ExtendedUseable__get_ActiveTime (Characters_ExtendedUseable_o* __this, const MethodInfo* method);
// 0x42a8f20

float Characters_ExtendedUseable__get_ActiveTime(Characters_ExtendedUseable_o *__this,MethodInfo *method)

{
  return 0.0;
}


// Characters.ExtendedUseable$$.ctor
// il2cpp: void Characters_ExtendedUseable___ctor (Characters_ExtendedUseable_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x42a8f30

void Characters_ExtendedUseable___ctor
               (Characters_ExtendedUseable_o *__this,Characters_BaseCharacter_o *owner,MethodInfo *method)

{
  (__this->fields)._lastUseTime = -1000.0;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._owner = owner;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._owner,owner);
  (__this->fields).Cooldown = 0.0;
  (__this->fields).UsesLeft = -1;
  (__this->fields).MaxUses = -1;
  return;
}


// Characters.ExtendedUseable$$GetActiveTime
// il2cpp: float Characters_ExtendedUseable__GetActiveTime (Characters_ExtendedUseable_o* __this, const MethodInfo* method);
// 0x42a8f80

float Characters_ExtendedUseable__GetActiveTime(Characters_ExtendedUseable_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  undefined8 in_RDX;
  float fVar1;
  
  vtableDispatch = (__this->klass->vtable)._14_get_ActiveTime.methodPtr;
  fVar1 = (float)(*vtableDispatch)
                           (__this,(__this->klass->vtable)._14_get_ActiveTime.method,in_RDX,
                            vtableDispatch);
  return fVar1;
}


// Characters.ExtendedUseable$$ReadInput
// il2cpp: void Characters_ExtendedUseable__ReadInput (Characters_ExtendedUseable_o* __this, Settings_KeybindSetting_o* keybind, const MethodInfo* method);
// 0x42a8fa0

void Characters_ExtendedUseable__ReadInput
               (Characters_ExtendedUseable_o *__this,Settings_KeybindSetting_o *keybind,MethodInfo *method)

{
  Characters_ExtendedUseable_c *pCVar1;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  char cVar2;
  uint uVar3;
  undefined8 extraout_RDX;
  float fVar4;
  
  if (keybind != (Settings_KeybindSetting_o *)0x0) {
    uVar3 = Settings_KeybindSetting__GetKeyDown(keybind,0,(MethodInfo *)0x0);
    pCVar1 = __this->klass;
    UNRECOVERED_JUMPTABLE_00 = (pCVar1->vtable)._12_SetInput.methodPtr;
    (*UNRECOVERED_JUMPTABLE_00)
              (__this,(ulong)(uVar3 & 0xff),(pCVar1->vtable)._12_SetInput.method,pCVar1,
               UNRECOVERED_JUMPTABLE_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((char)keybind != '\0') {
    cVar2 = (*(__this->klass->vtable)._6_CanUse.methodPtr)();
    if ((cVar2 != '\0') && ((char)(__this->fields).IsActive == '\0')) {
      *(undefined1 *)&(__this->fields).IsActive = 1;
      fVar4 = (float)(*(__this->klass->vtable)._15_GetActiveTime.methodPtr)
                               (__this,(__this->klass->vtable)._15_GetActiveTime.method);
      (__this->fields)._activeTimeLeft = fVar4;
      (*(__this->klass->vtable)._9_Activate.methodPtr)(__this,(__this->klass->vtable)._9_Activate.method);
      UNRECOVERED_JUMPTABLE_00 = (__this->klass->vtable)._8_OnUse.methodPtr;
      (*UNRECOVERED_JUMPTABLE_00)
                (__this,(__this->klass->vtable)._8_OnUse.method,extraout_RDX,UNRECOVERED_JUMPTABLE_00);
      return;
    }
  }
  return;
}


// Characters.ExtendedUseable$$SetInput
// il2cpp: void Characters_ExtendedUseable__SetInput (Characters_ExtendedUseable_o* __this, bool key, const MethodInfo* method);
// 0x42a8fe0

void Characters_ExtendedUseable__SetInput
               (Characters_ExtendedUseable_o *__this,bool_conflict key,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  char cVar1;
  undefined8 extraout_RDX;
  float fVar2;
  
  if ((char)key != '\0') {
    cVar1 = (*(__this->klass->vtable)._6_CanUse.methodPtr)(__this,(__this->klass->vtable)._6_CanUse.method);
    if ((cVar1 != '\0') && ((char)(__this->fields).IsActive == '\0')) {
      *(undefined1 *)&(__this->fields).IsActive = 1;
      fVar2 = (float)(*(__this->klass->vtable)._15_GetActiveTime.methodPtr)
                               (__this,(__this->klass->vtable)._15_GetActiveTime.method);
      (__this->fields)._activeTimeLeft = fVar2;
      (*(__this->klass->vtable)._9_Activate.methodPtr)(__this,(__this->klass->vtable)._9_Activate.method);
      vtableDispatch = (__this->klass->vtable)._8_OnUse.methodPtr;
      (*vtableDispatch)
                (__this,(__this->klass->vtable)._8_OnUse.method,extraout_RDX,vtableDispatch);
      return;
    }
  }
  return;
}


// Characters.ExtendedUseable$$OnFixedUpdate
// il2cpp: void Characters_ExtendedUseable__OnFixedUpdate (Characters_ExtendedUseable_o* __this, const MethodInfo* method);
// 0x42a9050

void Characters_ExtendedUseable__OnFixedUpdate(Characters_ExtendedUseable_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
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
    UNRECOVERED_JUMPTABLE_00 = (__this->klass->vtable)._16_ActiveFixedUpdate.methodPtr;
    (*UNRECOVERED_JUMPTABLE_00)
              (__this,(__this->klass->vtable)._16_ActiveFixedUpdate.method,extraout_RDX,
               UNRECOVERED_JUMPTABLE_00);
    return;
  }
  *(undefined1 *)&(__this->fields).IsActive = 0;
  UNRECOVERED_JUMPTABLE_00 = (__this->klass->vtable)._10_Deactivate.methodPtr;
  (*UNRECOVERED_JUMPTABLE_00)
            (__this,(__this->klass->vtable)._10_Deactivate.method,extraout_RDX,UNRECOVERED_JUMPTABLE_00);
  return;
}


// Characters.ExtendedUseable$$ActiveFixedUpdate
// il2cpp: void Characters_ExtendedUseable__ActiveFixedUpdate (Characters_ExtendedUseable_o* __this, const MethodInfo* method);
// 0x42a90d0

void Characters_ExtendedUseable__ActiveFixedUpdate(Characters_ExtendedUseable_o *__this,MethodInfo *method)

{
  return;
}


