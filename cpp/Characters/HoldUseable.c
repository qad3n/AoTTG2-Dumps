// Type: Characters.HoldUseable
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/HoldUseable.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/BaseUseable/HoldUseable.cs
// --------------------------------

// Characters.HoldUseable$$.ctor
// il2cpp: void Characters_HoldUseable___ctor (Characters_HoldUseable_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x42a90e0

void Characters_HoldUseable___ctor
               (Characters_HoldUseable_o *__this,Characters_BaseCharacter_o *owner,MethodInfo *method)

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


// Characters.HoldUseable$$OnFixedUpdate
// il2cpp: void Characters_HoldUseable__OnFixedUpdate (Characters_HoldUseable_o* __this, const MethodInfo* method);
// 0x42a9130

void Characters_HoldUseable__OnFixedUpdate(Characters_HoldUseable_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  undefined8 in_RDX;
  
  if ((char)(__this->fields).IsActive != '\0') {
    vtableDispatch = (__this->klass->vtable)._16_ActiveFixedUpdate.methodPtr;
    (*vtableDispatch)
              (__this,(__this->klass->vtable)._16_ActiveFixedUpdate.method,in_RDX,vtableDispatch);
    return;
  }
  return;
}


// Characters.HoldUseable$$SetInput
// il2cpp: void Characters_HoldUseable__SetInput (Characters_HoldUseable_o* __this, bool key, const MethodInfo* method);
// 0x42a9150

void Characters_HoldUseable__SetInput(Characters_HoldUseable_o *__this,bool_conflict key,MethodInfo *method)

{
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  char cVar1;
  undefined8 extraout_RDX;
  float fVar2;
  
  cVar1 = (char)(__this->fields).IsActive;
  if ((char)key == '\0') {
    if (cVar1 != '\0') {
      *(undefined1 *)&(__this->fields).IsActive = 0;
      UNRECOVERED_JUMPTABLE_00 = (__this->klass->vtable)._10_Deactivate.methodPtr;
      (*UNRECOVERED_JUMPTABLE_00)
                (__this,(__this->klass->vtable)._10_Deactivate.method,method,UNRECOVERED_JUMPTABLE_00);
      return;
    }
  }
  else if (cVar1 == '\0') {
    cVar1 = (*(__this->klass->vtable)._6_CanUse.methodPtr)(__this,(__this->klass->vtable)._6_CanUse.method);
    if (cVar1 != '\0') {
      *(undefined1 *)&(__this->fields).IsActive = 1;
      fVar2 = (float)(*(__this->klass->vtable)._14_get_ActiveTime.methodPtr)
                               (__this,(__this->klass->vtable)._14_get_ActiveTime.method);
      (__this->fields)._activeTimeLeft = fVar2;
      (*(__this->klass->vtable)._9_Activate.methodPtr)(__this,(__this->klass->vtable)._9_Activate.method);
      UNRECOVERED_JUMPTABLE_00 = (__this->klass->vtable)._8_OnUse.methodPtr;
      (*UNRECOVERED_JUMPTABLE_00)
                (__this,(__this->klass->vtable)._8_OnUse.method,extraout_RDX,UNRECOVERED_JUMPTABLE_00);
      return;
    }
  }
  return;
}


// Characters.HoldUseable$$ReadInput
// il2cpp: void Characters_HoldUseable__ReadInput (Characters_HoldUseable_o* __this, Settings_KeybindSetting_o* keybind, const MethodInfo* method);
// 0x42a91e0

void Characters_HoldUseable__ReadInput
               (Characters_HoldUseable_o *__this,Settings_KeybindSetting_o *keybind,MethodInfo *method)

{
  Characters_HoldUseable_c *pCVar1;
  Il2CppMethodPointer vtableDispatch;
  uint uVar2;
  undefined4 uVar3;
  
  if (keybind != (Settings_KeybindSetting_o *)0x0) {
    uVar2 = Settings_KeybindSetting__GetKey(keybind,0,(MethodInfo *)0x0);
    pCVar1 = __this->klass;
    vtableDispatch = (pCVar1->vtable)._12_SetInput.methodPtr;
    (*vtableDispatch)
              (__this,(ulong)(uVar2 & 0xff),(pCVar1->vtable)._12_SetInput.method,pCVar1,vtableDispatch)
    ;
    return;
  }
  uVar3 = il2cpp_runtime_helper_022b2c90();
  (__this->fields)._lastUseTime = -1000.0;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._owner = (Characters_BaseCharacter_o *)keybind;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._owner,keybind);
  (__this->fields).Cooldown = 0.0;
  (__this->fields).UsesLeft = -1;
  (__this->fields).MaxUses = -1;
  *(undefined4 *)&(__this->fields).field_0x2c = uVar3;
  return;
}


