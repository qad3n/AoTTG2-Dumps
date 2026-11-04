// Type: Characters.SimpleUseable
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/SimpleUseable.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/BaseUseable/SimpleUseable.cs
// --------------------------------

// Characters.SimpleUseable$$.ctor
// il2cpp: void Characters_SimpleUseable___ctor (Characters_SimpleUseable_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x1821177e0

void Characters_SimpleUseable___ctor
               (Characters_SimpleUseable_o *__this,Characters_BaseCharacter_o *owner,MethodInfo *method)

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


// Characters.SimpleUseable$$ReadInput
// il2cpp: void Characters_SimpleUseable__ReadInput (Characters_SimpleUseable_o* __this, Settings_KeybindSetting_o* keybind, const MethodInfo* method);
// 0x182117730

void Characters_SimpleUseable__ReadInput
               (Characters_SimpleUseable_o *__this,Settings_KeybindSetting_o *keybind,MethodInfo *method)

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


// Characters.SimpleUseable$$SetInput
// il2cpp: void Characters_SimpleUseable__SetInput (Characters_SimpleUseable_o* __this, bool key, const MethodInfo* method);
// 0x18211cfe0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18211d026: add rsp, 0x20
// asm:   0x18211d02a: pop rbx

void Characters_SimpleUseable__SetInput(Characters_SimpleUseable_o *__this,bool key,MethodInfo *method)

{
  bool bVar1;
  
  if ((key) && (bVar1 = (*(__this->klass->vtable)._6_CanUse.methodPtr)
                                  (__this,(__this->klass->vtable)._6_CanUse.method), bVar1)) {
    (*(__this->klass->vtable)._9_Activate.methodPtr)
              (__this,(System_Type_o *)(__this->klass->vtable)._9_Activate.method,method);
    (*(__this->klass->vtable)._8_OnUse.methodPtr)(__this,(__this->klass->vtable)._8_OnUse.method);
  }
  return;
}


