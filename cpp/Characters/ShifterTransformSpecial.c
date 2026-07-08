// Type: Characters.ShifterTransformSpecial
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/ShifterTransformSpecial.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Characters/Human/Specials/ShifterTransformSpecial.cs  [CHANGED since prior version]
// --------------------------------

// Characters.ShifterTransformSpecial$$get_ActiveTime
// il2cpp: float Characters_ShifterTransformSpecial__get_ActiveTime (Characters_ShifterTransformSpecial_o* __this, const MethodInfo* method);
// 0x3feadc0

float Characters_ShifterTransformSpecial__get_ActiveTime
                (Characters_ShifterTransformSpecial_o *__this,MethodInfo *method)

{
  return 0.8;
}


// Characters.ShifterTransformSpecial$$.ctor
// il2cpp: void Characters_ShifterTransformSpecial___ctor (Characters_ShifterTransformSpecial_o* __this, Characters_BaseCharacter_o* owner, System_String_o* shifter, const MethodInfo* method);
// 0x3fd7a50

void Characters_ShifterTransformSpecial___ctor
               (Characters_ShifterTransformSpecial_o *__this,Characters_BaseCharacter_o *owner,
               System_String_o *shifter,MethodInfo *method)

{
  (__this->fields).LiveTime = 60.0;
  Characters_RechargeableUseable___ctor
            ((Characters_RechargeableUseable_o *)__this,owner,0.0,(MethodInfo *)0x0);
  (__this->fields)._shifter = shifter;
  il2cpp_runtime_glue(&(__this->fields)._shifter);
  (__this->fields).MaxUses = 1;
  (__this->fields).Cooldown = 300.0;
  (__this->fields).UsesLeft = -1;
  (__this->fields).ReduceCooldownAmount = 20.0;
  Characters_BaseUseable__SetCooldownLeft
            ((Characters_BaseUseable_o *)__this,300.0,(MethodInfo *)0x0);
  return;
}


// Characters.ShifterTransformSpecial$$Activate
// il2cpp: void Characters_ShifterTransformSpecial__Activate (Characters_ShifterTransformSpecial_o* __this, const MethodInfo* method);
// 0x3feadd0

void Characters_ShifterTransformSpecial__Activate
               (Characters_ShifterTransformSpecial_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *__this_00;
  
  if (DAT_05704177 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    il2cpp_init_method_metadata(&TypeInfo_Human);
    DAT_05704177 = '\x01';
  }
  __this_00 = (Characters_Human_o *)(__this->fields)._owner;
  if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (__this_00 != (Characters_Human_o *)0x0) {
    bVar1 = (TypeInfo_Human->_2).naturalAligment;
    if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_Human)) {
      Characters_Human__EmoteAnimation
                (__this_00,*(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x220),
                 (MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume(__this_00);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.ShifterTransformSpecial$$Deactivate
// il2cpp: void Characters_ShifterTransformSpecial__Deactivate (Characters_ShifterTransformSpecial_o* __this, const MethodInfo* method);
// 0x3feae80

void Characters_ShifterTransformSpecial__Deactivate
               (Characters_ShifterTransformSpecial_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *__this_00;
  
  if (DAT_05704178 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Human);
    DAT_05704178 = '\x01';
  }
  __this_00 = (Characters_Human_o *)(__this->fields)._owner;
  if (__this_00 != (Characters_Human_o *)0x0) {
    bVar1 = (TypeInfo_Human->_2).naturalAligment;
    if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_Human)) {
      if (*(char *)&(__this_00->fields).FeedVictimName != '\0') {
        return;
      }
      Characters_Human__TransformShifter
                (__this_00,(__this->fields)._shifter,(__this->fields).LiveTime,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


