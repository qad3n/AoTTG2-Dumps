// Type: Characters.ShifterTransformSpecial
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/ShifterTransformSpecial.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/ShifterTransformSpecial.cs
// --------------------------------

// Characters.ShifterTransformSpecial$$get_ActiveTime
// il2cpp: float Characters_ShifterTransformSpecial__get_ActiveTime (Characters_ShifterTransformSpecial_o* __this, const MethodInfo* method);
// 0x5c0dab0

float Characters_ShifterTransformSpecial__get_ActiveTime
                (Characters_ShifterTransformSpecial_o *__this,MethodInfo *method)

{
  return 0.8;
}


// Characters.ShifterTransformSpecial$$.ctor
// il2cpp: void Characters_ShifterTransformSpecial___ctor (Characters_ShifterTransformSpecial_o* __this, Characters_BaseCharacter_o* owner, System_String_o* shifter, const MethodInfo* method);
// 0x5c0dac0

void Characters_ShifterTransformSpecial___ctor
               (Characters_ShifterTransformSpecial_o *__this,Characters_BaseCharacter_o *owner,
               System_String_o *shifter,MethodInfo *method)

{
  (__this->fields).LiveTime = 60.0;
  Characters_RechargeableUseable___ctor
            ((Characters_RechargeableUseable_o *)__this,owner,0.0,(MethodInfo *)0x0);
  (__this->fields)._shifter = shifter;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._shifter);
  (__this->fields).UsesLeft = -1;
  (__this->fields).MaxUses = 1;
  (__this->fields).Cooldown = 300.0;
  (__this->fields).ReduceCooldownAmount = 20.0;
  Characters_BaseUseable__SetCooldownLeft((Characters_BaseUseable_o *)__this,300.0,(MethodInfo *)0x0);
  return;
}


// Characters.ShifterTransformSpecial$$Activate
// il2cpp: void Characters_ShifterTransformSpecial__Activate (Characters_ShifterTransformSpecial_o* __this, const MethodInfo* method);
// 0x5c0db20

void Characters_ShifterTransformSpecial__Activate
               (Characters_ShifterTransformSpecial_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *__this_00;
  
  if (Il2CppMethodInitialized_075476c2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    Il2CppMethodInitialized_075476c2 = '\x01';
  }
  __this_00 = (Characters_Human_o *)(__this->fields)._owner;
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  if (__this_00 == (Characters_Human_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
  if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
     ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Characters_Human)) {
    il2cpp_codegen_raise_invalid_cast_exception(__this_00);
  }
  Characters_Human__EmoteAnimation
            (__this_00,TypeInfo_Characters_HumanAnimations->static_fields->SpecialShifter,(MethodInfo *)0x0);
  return;
}


// Characters.ShifterTransformSpecial$$Deactivate
// il2cpp: void Characters_ShifterTransformSpecial__Deactivate (Characters_ShifterTransformSpecial_o* __this, const MethodInfo* method);
// 0x5c0dbd0

void Characters_ShifterTransformSpecial__Deactivate
               (Characters_ShifterTransformSpecial_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *__this_00;
  
  if (Il2CppMethodInitialized_075476c3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    Il2CppMethodInitialized_075476c3 = '\x01';
  }
  __this_00 = (Characters_Human_o *)(__this->fields)._owner;
  if (__this_00 == (Characters_Human_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
  if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
     ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Characters_Human)) {
    il2cpp_codegen_raise_invalid_cast_exception();
  }
  if ((__this_00->fields).Dead == false) {
    Characters_Human__TransformShifter
              (__this_00,(__this->fields)._shifter,(__this->fields).LiveTime,(MethodInfo *)0x0);
    return;
  }
  return;
}


