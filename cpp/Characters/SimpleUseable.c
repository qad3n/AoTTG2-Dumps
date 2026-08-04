// Type: Characters.SimpleUseable
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/SimpleUseable.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/BaseUseable/SimpleUseable.cs
// --------------------------------

// Characters.SimpleUseable$$.ctor
// il2cpp: void Characters_SimpleUseable___ctor (Characters_SimpleUseable_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x42a9290

void Characters_SimpleUseable___ctor
               (Characters_SimpleUseable_o *__this,Characters_BaseCharacter_o *owner,MethodInfo *method)

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


// Characters.SimpleUseable$$ReadInput
// il2cpp: void Characters_SimpleUseable__ReadInput (Characters_SimpleUseable_o* __this, Settings_KeybindSetting_o* keybind, const MethodInfo* method);
// 0x42a92e0

void Characters_SimpleUseable__ReadInput
               (Characters_SimpleUseable_o *__this,Settings_KeybindSetting_o *keybind,MethodInfo *method)

{
  Characters_SimpleUseable_c *pCVar1;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  char cVar2;
  uint uVar3;
  undefined8 extraout_RDX;
  
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
    if (cVar2 != '\0') {
      (*(__this->klass->vtable)._9_Activate.methodPtr)(__this,(__this->klass->vtable)._9_Activate.method);
      UNRECOVERED_JUMPTABLE_00 = (__this->klass->vtable)._8_OnUse.methodPtr;
      (*UNRECOVERED_JUMPTABLE_00)
                (__this,(__this->klass->vtable)._8_OnUse.method,extraout_RDX,UNRECOVERED_JUMPTABLE_00);
      return;
    }
  }
  return;
}


// Characters.SimpleUseable$$SetInput
// il2cpp: void Characters_SimpleUseable__SetInput (Characters_SimpleUseable_o* __this, bool key, const MethodInfo* method);
// 0x42a9320

void Characters_SimpleUseable__SetInput
               (Characters_SimpleUseable_o *__this,bool_conflict key,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  char cVar1;
  undefined8 extraout_RDX;
  
  if ((char)key != '\0') {
    cVar1 = (*(__this->klass->vtable)._6_CanUse.methodPtr)(__this,(__this->klass->vtable)._6_CanUse.method);
    if (cVar1 != '\0') {
      (*(__this->klass->vtable)._9_Activate.methodPtr)(__this,(__this->klass->vtable)._9_Activate.method);
      vtableDispatch = (__this->klass->vtable)._8_OnUse.methodPtr;
      (*vtableDispatch)
                (__this,(__this->klass->vtable)._8_OnUse.method,extraout_RDX,vtableDispatch);
      return;
    }
  }
  return;
}


