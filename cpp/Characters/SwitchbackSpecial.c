// Type: Characters.SwitchbackSpecial
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/SwitchbackSpecial.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Characters/Human/Specials/SwitchbackSpecial.cs  [CHANGED since prior version]
// --------------------------------

// Characters.SwitchbackSpecial$$get_ActiveTime
// il2cpp: float Characters_SwitchbackSpecial__get_ActiveTime (Characters_SwitchbackSpecial_o* __this, const MethodInfo* method);
// 0x3fecb80

float Characters_SwitchbackSpecial__get_ActiveTime
                (Characters_SwitchbackSpecial_o *__this,MethodInfo *method)

{
  return 0.3;
}


// Characters.SwitchbackSpecial$$.ctor
// il2cpp: void Characters_SwitchbackSpecial___ctor (Characters_SwitchbackSpecial_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x3fecb90

void Characters_SwitchbackSpecial___ctor
               (Characters_SwitchbackSpecial_o *__this,Characters_BaseCharacter_o *owner,
               MethodInfo *method)

{
  Characters_ExtendedUseable___ctor((Characters_ExtendedUseable_o *)__this,owner,(MethodInfo *)0x0);
  (__this->fields).Cooldown = 2.0;
  return;
}


// Characters.SwitchbackSpecial$$RegisterCollision
// il2cpp: bool Characters_SwitchbackSpecial__RegisterCollision (Characters_SwitchbackSpecial_o* __this, Characters_Human_o* human, UnityEngine_Collision_o* collision, float speed, const MethodInfo* method);
// 0x3fecbb0

bool_conflict
Characters_SwitchbackSpecial__RegisterCollision
          (Characters_SwitchbackSpecial_o *__this,Characters_Human_o *human,
          UnityEngine_Collision_o *collision,float speed,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  UnityEngine_Rigidbody_o *__this_00;
  undefined1 auVar3 [16];
  UnityEngine_ContactPoint_o __this_01;
  UnityEngine_ContactPoint_array *pUVar4;
  undefined8 uVar5;
  float fVar6;
  undefined4 in_XMM0_Db;
  undefined4 in_XMM0_Dc;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  float in_XMM0_Dd;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  UnityEngine_Vector3_o UVar10;
  undefined1 in_stack_ffffffffffffffa8 [12];
  undefined4 in_stack_ffffffffffffffb4;
  undefined1 in_stack_ffffffffffffffb8 [16];
  
  if (DAT_05704186 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_05704186 = '\x01';
  }
  if ((char)(__this->fields).IsActive == '\0') {
    return 0;
  }
  if (((human == (Characters_Human_o *)0x0) || (lVar2 = *(long *)&(human->fields).Dead, lVar2 == 0))
     || (collision == (UnityEngine_Collision_o *)0x0)) goto LAB_03fecdec;
  __this_00 = *(UnityEngine_Rigidbody_o **)(lVar2 + 0x18);
  pUVar4 = UnityEngine_Collision__get_contacts(collision,(MethodInfo *)0x0);
  if (pUVar4 == (UnityEngine_ContactPoint_array *)0x0) goto LAB_03fecdec;
  if ((int)pUVar4->max_length == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  __this_01.fields.m_Normal.fields.x = (float)in_stack_ffffffffffffffb4;
  __this_01.fields.m_Point.fields.x = (float)in_stack_ffffffffffffffa8._0_4_;
  __this_01.fields.m_Point.fields.y = (float)in_stack_ffffffffffffffa8._4_4_;
  __this_01.fields.m_Point.fields.z = (float)in_stack_ffffffffffffffa8._8_4_;
  __this_01.fields.m_Normal.fields.y = (float)in_stack_ffffffffffffffb8._0_4_;
  __this_01.fields.m_Normal.fields.z = (float)in_stack_ffffffffffffffb8._4_4_;
  __this_01.fields.m_Impulse.fields.x = (float)in_stack_ffffffffffffffb8._8_4_;
  __this_01.fields.m_Impulse.fields.y = (float)in_stack_ffffffffffffffb8._12_4_;
  __this_01.fields.m_Impulse.fields.z = speed;
  __this_01.fields.m_ThisColliderInstanceID = in_XMM0_Db;
  __this_01.fields.m_OtherColliderInstanceID = in_XMM0_Dc;
  __this_01.fields.m_Separation = in_XMM0_Dd;
  UVar10 = UnityEngine_ContactPoint__get_normal(__this_01,(MethodInfo *)pUVar4->m_Items);
  fVar9 = UVar10.fields.z;
  auVar7._0_8_ = UVar10.fields._0_8_;
  auVar7._8_4_ = extraout_XMM0_Dc;
  auVar7._12_4_ = extraout_XMM0_Dd;
  auVar8._8_4_ = extraout_XMM0_Dc;
  auVar8._0_8_ = auVar7._0_8_;
  auVar8._12_4_ = extraout_XMM0_Dd;
  if (DAT_056fde20 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    in_XMM1_Dc = 0;
    in_XMM1_Dd = 0;
    DAT_056fde20 = '\x01';
    iVar1 = *(int *)(TypeInfo_Math + 0xe4);
    auVar7 = auVar8;
  }
  else {
    iVar1 = *(int *)(TypeInfo_Math + 0xe4);
  }
  if (iVar1 == 0) {
    auVar7 = auVar8;
    il2cpp_init_class();
    in_XMM1_Dc = 0;
    in_XMM1_Dd = 0;
    auVar8 = auVar7;
  }
  fVar6 = fVar9 * fVar9 + auVar7._4_4_ * auVar7._4_4_ + auVar7._0_4_ * auVar7._0_4_;
  if (fVar6 < 0.0) {
    auVar7 = auVar8;
    fVar6 = sqrtf(fVar6);
    in_XMM1_Dc = extraout_XMM0_Dc_00;
    in_XMM1_Dd = extraout_XMM0_Dd_00;
    if (1e-05 < fVar6) goto LAB_03fecd05;
LAB_03fecca5:
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
    }
    uVar5 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar9 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  }
  else {
    fVar6 = SQRT(fVar6);
    if (fVar6 <= 1e-05) goto LAB_03fecca5;
LAB_03fecd05:
    fVar9 = fVar9 / fVar6;
    auVar3._4_4_ = fVar6;
    auVar3._0_4_ = fVar6;
    auVar3._8_4_ = in_XMM1_Dc;
    auVar3._12_4_ = in_XMM1_Dd;
    auVar8 = divps(auVar7,auVar3);
    uVar5 = auVar8._0_8_;
  }
  if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
    if (speed <= 20.0) {
      speed = 20.0;
    }
    UVar10.fields.x = speed * (float)uVar5;
    UVar10.fields.y = speed * (float)((ulong)uVar5 >> 0x20);
    UVar10.fields.z = speed * fVar9;
    UnityEngine_Rigidbody__set_velocity(__this_00,UVar10,(MethodInfo *)0x0);
    (__this->fields)._activeTimeLeft = 0.0;
    *(undefined1 *)&(__this->fields).IsActive = 0;
    if (*(int *)(TypeInfo_HumanSounds + 0xe4) == 0) {
      il2cpp_init_class();
    }
    Characters_BaseCharacter__PlaySound
              ((Characters_BaseCharacter_o *)human,
               *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x170),(MethodInfo *)0x0);
    uVar5 = (*(__this->klass->vtable)._10_Deactivate.methodPtr)
                      (__this,(__this->klass->vtable)._10_Deactivate.method);
    return (bool_conflict)CONCAT71((int7)((ulong)uVar5 >> 8),1);
  }
LAB_03fecdec:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.SwitchbackSpecial$$SetInput
// il2cpp: void Characters_SwitchbackSpecial__SetInput (Characters_SwitchbackSpecial_o* __this, bool key, const MethodInfo* method);
// 0x3fece00

void Characters_SwitchbackSpecial__SetInput
               (Characters_SwitchbackSpecial_o *__this,bool_conflict key,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *__this_00;
  Il2CppMethodPointer vtable_dispatch;
  char cVar2;
  MethodInfo *extraout_RDX;
  undefined8 extraout_RDX_00;
  float fVar3;
  
  if (DAT_05704187 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Human);
    DAT_05704187 = '\x01';
    method = extraout_RDX;
  }
  if ((char)key != '\0') {
    cVar2 = (*(__this->klass->vtable)._6_CanUse.methodPtr)
                      (__this,(__this->klass->vtable)._6_CanUse.method,method);
    if ((cVar2 != '\0') && ((char)(__this->fields).IsActive == '\0')) {
      __this_00 = (Characters_Human_o *)(__this->fields)._owner;
      if (__this_00 == (Characters_Human_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      bVar1 = (TypeInfo_Human->_2).naturalAligment;
      if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
         ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_Human)) {
        if (*(int *)&(__this_00->fields).Weapon != 0) {
          Characters_Human__Unmount(__this_00,0,(MethodInfo *)0x0);
        }
        *(undefined1 *)&(__this->fields).IsActive = 1;
        fVar3 = (float)(*(__this->klass->vtable)._15_GetActiveTime.methodPtr)
                                 (__this,(__this->klass->vtable)._15_GetActiveTime.method);
        (__this->fields)._activeTimeLeft = fVar3;
        (*(__this->klass->vtable)._9_Activate.methodPtr)
                  (__this,(__this->klass->vtable)._9_Activate.method);
        vtable_dispatch = (__this->klass->vtable)._8_OnUse.methodPtr;
        (*vtable_dispatch)
                  (__this,(__this->klass->vtable)._8_OnUse.method,extraout_RDX_00,
                   vtable_dispatch);
        return;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume();
    }
  }
  return;
}


// Characters.SwitchbackSpecial$$Activate
// il2cpp: void Characters_SwitchbackSpecial__Activate (Characters_SwitchbackSpecial_o* __this, const MethodInfo* method);
// 0x3fecef0

void Characters_SwitchbackSpecial__Activate
               (Characters_SwitchbackSpecial_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_BaseCharacter_o *pCVar2;
  
  if (DAT_05704188 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Human);
    DAT_05704188 = '\x01';
  }
  pCVar2 = (__this->fields)._owner;
  if (pCVar2 != (Characters_BaseCharacter_o *)0x0) {
    bVar1 = (TypeInfo_Human->_2).naturalAligment;
    if ((bVar1 <= (pCVar2->klass->_2).naturalAligment) &&
       ((pCVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_Human)) {
      *(undefined4 *)((long)&pCVar2[1].fields.OutlineComponent + 4) = 0x3f000000;
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.SwitchbackSpecial$$Deactivate
// il2cpp: void Characters_SwitchbackSpecial__Deactivate (Characters_SwitchbackSpecial_o* __this, const MethodInfo* method);
// 0x3fecf70

void Characters_SwitchbackSpecial__Deactivate
               (Characters_SwitchbackSpecial_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *__this_00;
  
  if (DAT_05704189 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Human);
    DAT_05704189 = '\x01';
  }
  __this_00 = (Characters_Human_o *)(__this->fields)._owner;
  if (__this_00 != (Characters_Human_o *)0x0) {
    bVar1 = (TypeInfo_Human->_2).naturalAligment;
    if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_Human)) {
      Characters_Human__DodgeWall(__this_00,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


