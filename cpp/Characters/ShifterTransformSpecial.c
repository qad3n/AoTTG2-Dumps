// Type: Characters.ShifterTransformSpecial
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/ShifterTransformSpecial.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/ShifterTransformSpecial.cs
// --------------------------------

// Characters.ShifterTransformSpecial$$get_ActiveTime
// il2cpp: float Characters_ShifterTransformSpecial__get_ActiveTime (Characters_ShifterTransformSpecial_o* __this, const MethodInfo* method);
// 0x42f7680

float Characters_ShifterTransformSpecial__get_ActiveTime
                (Characters_ShifterTransformSpecial_o *__this,MethodInfo *method)

{
  return 0.8;
}


// Characters.ShifterTransformSpecial$$.ctor
// il2cpp: void Characters_ShifterTransformSpecial___ctor (Characters_ShifterTransformSpecial_o* __this, Characters_BaseCharacter_o* owner, System_String_o* shifter, const MethodInfo* method);
// 0x42e4310

void Characters_ShifterTransformSpecial___ctor
               (Characters_ShifterTransformSpecial_o *__this,Characters_BaseCharacter_o *owner,
               System_String_o *shifter,MethodInfo *method)

{
  (__this->fields).LiveTime = 60.0;
  Characters_RechargeableUseable___ctor
            ((Characters_RechargeableUseable_o *)__this,owner,0.0,(MethodInfo *)0x0);
  (__this->fields)._shifter = shifter;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._shifter);
  (__this->fields).MaxUses = 1;
  (__this->fields).Cooldown = 300.0;
  (__this->fields).UsesLeft = -1;
  (__this->fields).ReduceCooldownAmount = 20.0;
  Characters_BaseUseable__SetCooldownLeft((Characters_BaseUseable_o *)__this,300.0,(MethodInfo *)0x0);
  return;
}


// Characters.ShifterTransformSpecial$$Activate
// il2cpp: void Characters_ShifterTransformSpecial__Activate (Characters_ShifterTransformSpecial_o* __this, const MethodInfo* method);
// 0x42f7690

void Characters_ShifterTransformSpecial__Activate
               (Characters_ShifterTransformSpecial_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  Characters_Human_o *pCVar3;
  
  if (g_data_057adee5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    g_data_057adee5 = '\x01';
  }
  pCVar2 = (Characters_Human_o *)(__this->fields)._owner;
  if ((TypeInfo_HumanAnimations->fields)._stepPhase == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar3 = TypeInfo_HumanAnimations;
  if (pCVar2 != (Characters_Human_o *)0x0) {
    bVar1 = (TypeInfo_Human->_2).naturalAligment;
    if ((bVar1 <= (pCVar2->klass->_2).naturalAligment) &&
       ((pCVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_Human)) {
      Characters_Human__EmoteAnimation
                (pCVar2,*(System_String_o **)
                         &(TypeInfo_HumanAnimations->fields).MovementSync[3].fields._correctCamera.fields.y,
                 (MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_022b2fd0();
    pCVar3 = pCVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adee6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    g_data_057adee6 = '\x01';
  }
  pCVar2 = *(Characters_Human_o **)&(pCVar3->fields).MaxFootstepDistance;
  if (pCVar2 != (Characters_Human_o *)0x0) {
    bVar1 = (TypeInfo_Human->_2).naturalAligment;
    if ((bVar1 <= (pCVar2->klass->_2).naturalAligment) &&
       ((pCVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_Human)) {
      if (*(char *)&(pCVar2->fields).FeedVictimName != '\0') {
        return;
      }
      Characters_Human__TransformShifter
                (pCVar2,(pCVar3->fields).VisibleName,*(float *)&(pCVar3->fields).RichTextName,
                 (MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_022b2fd0();
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// Characters.ShifterTransformSpecial$$Deactivate
// il2cpp: void Characters_ShifterTransformSpecial__Deactivate (Characters_ShifterTransformSpecial_o* __this, const MethodInfo* method);
// 0x42f7740

void Characters_ShifterTransformSpecial__Deactivate
               (Characters_ShifterTransformSpecial_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *__this_00;
  
  if (g_data_057adee6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    g_data_057adee6 = '\x01';
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
    il2cpp_runtime_helper_022b2fd0();
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


