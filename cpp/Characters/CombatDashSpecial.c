// Type: Characters.CombatDashSpecial
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/CombatDashSpecial.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Characters/Human/Specials/CombatDashSpecial.cs  [CHANGED since prior version]
// --------------------------------

// Characters.CombatDashSpecial$$get_ActiveTime
// il2cpp: float Characters_CombatDashSpecial__get_ActiveTime (Characters_CombatDashSpecial_o* __this, const MethodInfo* method);
// 0x3fe7ab0

float Characters_CombatDashSpecial__get_ActiveTime
                (Characters_CombatDashSpecial_o *__this,MethodInfo *method)

{
  return 2.0;
}


// Characters.CombatDashSpecial$$get_GroundedOnly
// il2cpp: bool Characters_CombatDashSpecial__get_GroundedOnly (Characters_CombatDashSpecial_o* __this, const MethodInfo* method);
// 0x3fe7ac0

bool_conflict
Characters_CombatDashSpecial__get_GroundedOnly
          (Characters_CombatDashSpecial_o *__this,MethodInfo *method)

{
  return 0;
}


// Characters.CombatDashSpecial$$.ctor
// il2cpp: void Characters_CombatDashSpecial___ctor (Characters_CombatDashSpecial_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x3fe7ad0

void Characters_CombatDashSpecial___ctor
               (Characters_CombatDashSpecial_o *__this,Characters_BaseCharacter_o *owner,
               MethodInfo *method)

{
  (__this->fields).Range = 200.0;
  Characters_BaseEmoteSpecial___ctor((Characters_BaseEmoteSpecial_o *)__this,owner,method);
  (__this->fields).Cooldown = 5.0;
  return;
}


// Characters.CombatDashSpecial$$Activate
// il2cpp: void Characters_CombatDashSpecial__Activate (Characters_CombatDashSpecial_o* __this, const MethodInfo* method);
// 0x3fe7af0

void Characters_CombatDashSpecial__Activate
               (Characters_CombatDashSpecial_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  long lVar2;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Rigidbody_o *__this_01;
  undefined1 auVar3 [16];
  float fVar4;
  undefined8 uVar5;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  undefined4 uVar6;
  undefined4 extraout_XMM0_Dc_01;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  undefined4 uVar7;
  undefined4 extraout_XMM0_Dd_01;
  float in_XMM1_Da;
  undefined1 auVar8 [16];
  UnityEngine_Vector3_o UVar9;
  
  if (DAT_0570416a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    DAT_0570416a = '\x01';
  }
  pCVar1 = (__this->fields)._human;
  if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (pCVar1 == (Characters_Human_o *)0x0) goto LAB_03fe7d01;
  Characters_Human__EmoteAnimation
            (pCVar1,*(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x90),(MethodInfo *)0x0);
  pCVar1 = (__this->fields)._human;
  if (pCVar1 == (Characters_Human_o *)0x0) goto LAB_03fe7d01;
  uVar5 = (*(pCVar1->klass->vtable)._66_GetAimPoint.methodPtr)();
  pCVar1 = (__this->fields)._human;
  if (((pCVar1 == (Characters_Human_o *)0x0) ||
      (lVar2 = *(long *)&(pCVar1->fields).Dead, lVar2 == 0)) ||
     (__this_00 = *(UnityEngine_Transform_o **)(lVar2 + 0x10),
     __this_00 == (UnityEngine_Transform_o *)0x0)) goto LAB_03fe7d01;
  UVar9 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
  if (DAT_056fde20 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde20 = '\x01';
  }
  auVar8._0_4_ = (float)uVar5 - UVar9.fields.x;
  auVar8._4_4_ = (float)((ulong)uVar5 >> 0x20) - UVar9.fields.y;
  auVar8._8_4_ = extraout_XMM0_Dc - extraout_XMM0_Dc_00;
  auVar8._12_4_ = extraout_XMM0_Dd - extraout_XMM0_Dd_00;
  in_XMM1_Da = in_XMM1_Da - UVar9.fields.z;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar6 = 0;
  uVar7 = 0;
  fVar4 = in_XMM1_Da * in_XMM1_Da + auVar8._4_4_ * auVar8._4_4_ + auVar8._0_4_ * auVar8._0_4_;
  if (fVar4 < 0.0) {
    fVar4 = sqrtf(fVar4);
    uVar6 = extraout_XMM0_Dc_01;
    uVar7 = extraout_XMM0_Dd_01;
    if (1e-05 < fVar4) goto LAB_03fe7cb9;
LAB_03fe7c54:
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
    }
    uVar5 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    in_XMM1_Da = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    pCVar1 = (__this->fields)._human;
  }
  else {
    fVar4 = SQRT(fVar4);
    if (fVar4 <= 1e-05) goto LAB_03fe7c54;
LAB_03fe7cb9:
    in_XMM1_Da = in_XMM1_Da / fVar4;
    auVar3._4_4_ = fVar4;
    auVar3._0_4_ = fVar4;
    auVar3._8_4_ = uVar6;
    auVar3._12_4_ = uVar7;
    auVar8 = divps(auVar8,auVar3);
    uVar5 = auVar8._0_8_;
    pCVar1 = (__this->fields)._human;
  }
  if (((pCVar1 != (Characters_Human_o *)0x0) &&
      (lVar2 = *(long *)&(pCVar1->fields).Dead, lVar2 != 0)) &&
     (__this_01 = *(UnityEngine_Rigidbody_o **)(lVar2 + 0x18),
     __this_01 != (UnityEngine_Rigidbody_o *)0x0)) {
    UVar9.fields.y = (float)((ulong)uVar5 >> 0x20) * 100.0;
    UVar9.fields.x = (float)uVar5 * 100.0;
    UVar9.fields.z = in_XMM1_Da * 100.0;
    UnityEngine_Rigidbody__set_velocity(__this_01,UVar9,(MethodInfo *)0x0);
    return;
  }
LAB_03fe7d01:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.CombatDashSpecial$$Deactivate
// il2cpp: void Characters_CombatDashSpecial__Deactivate (Characters_CombatDashSpecial_o* __this, const MethodInfo* method);
// 0x3fe7d10

void Characters_CombatDashSpecial__Deactivate
               (Characters_CombatDashSpecial_o *__this,MethodInfo *method)

{
  return;
}


