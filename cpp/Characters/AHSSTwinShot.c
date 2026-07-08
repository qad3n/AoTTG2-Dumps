// Type: Characters.AHSSTwinShot
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/AHSSTwinShot.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Characters/Human/Specials/AHSSTwinShotSpecial.cs  [CHANGED since prior version]
// --------------------------------

// Characters.AHSSTwinShot$$.ctor
// il2cpp: void Characters_AHSSTwinShot___ctor (Characters_AHSSTwinShot_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x3fd7a30

void Characters_AHSSTwinShot___ctor
               (Characters_AHSSTwinShot_o *__this,Characters_BaseCharacter_o *owner,
               MethodInfo *method)

{
  Characters_ExtendedUseable___ctor((Characters_ExtendedUseable_o *)__this,owner,(MethodInfo *)0x0);
  (__this->fields).Cooldown = 1.0;
  return;
}


// Characters.AHSSTwinShot$$GetActiveTime
// il2cpp: float Characters_AHSSTwinShot__GetActiveTime (Characters_AHSSTwinShot_o* __this, const MethodInfo* method);
// 0x3fe5590

float Characters_AHSSTwinShot__GetActiveTime(Characters_AHSSTwinShot_o *__this,MethodInfo *method)

{
  int iVar1;
  code *vtable_dispatch;
  long *plVar2;
  float fVar3;
  
  if (DAT_0570415d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterData);
    il2cpp_init_method_metadata(&"FireDelay");
    il2cpp_init_method_metadata(&"AHSS");
    DAT_0570415d = '\x01';
    iVar1 = *(int *)(TypeInfo_CharacterData + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CharacterData + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    plVar2 = (long *)**(undefined8 **)(TypeInfo_CharacterData + 0xb8);
  }
  else {
    plVar2 = (long *)**(undefined8 **)(TypeInfo_CharacterData + 0xb8);
  }
  if (((plVar2 != (long *)0x0) &&
      (plVar2 = (long *)(**(code **)(*plVar2 + 0x1a8))
                                  (plVar2,"AHSS",*(undefined8 *)(*plVar2 + 0x1b0)),
      plVar2 != (long *)0x0)) &&
     (plVar2 = (long *)(**(code **)(*plVar2 + 0x1a8))
                                 (plVar2,"FireDelay",*(undefined8 *)(*plVar2 + 0x1b0)),
     plVar2 != (long *)0x0)) {
    vtable_dispatch = *(code **)(*plVar2 + 0x388);
    fVar3 = (float)(*vtable_dispatch)
                             (plVar2,*(undefined8 *)(*plVar2 + 0x390),vtable_dispatch);
    return fVar3;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.AHSSTwinShot$$CanUse
// il2cpp: bool Characters_AHSSTwinShot__CanUse (Characters_AHSSTwinShot_o* __this, const MethodInfo* method);
// 0x3fe5680

bool_conflict Characters_AHSSTwinShot__CanUse(Characters_AHSSTwinShot_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Characters_BaseCharacter_o *pCVar3;
  System_Object_array *pSVar4;
  Il2CppClass *pIVar5;
  bool_conflict bVar6;
  
  if (DAT_0570415e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AmmoWeapon);
    il2cpp_init_method_metadata(&TypeInfo_Human);
    DAT_0570415e = '\x01';
  }
  pCVar3 = (__this->fields)._owner;
  if (pCVar3 != (Characters_BaseCharacter_o *)0x0) {
    bVar1 = (TypeInfo_Human->_2).naturalAligment;
    if ((bVar1 <= (pCVar3->klass->_2).naturalAligment) &&
       ((pCVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_Human)) {
      pSVar4 = (pCVar3->fields).crossfadeCache;
      if (pSVar4 != (System_Object_array *)0x0) {
        pIVar5 = (pSVar4->obj).klass;
        bVar1 = (TypeInfo_AmmoWeapon->_2).naturalAligment;
        if ((bVar1 <= (pIVar5->_2).naturalAligment) &&
           ((pIVar5->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_AmmoWeapon)) {
          bVar6 = Characters_BaseUseable__CanUse
                            ((Characters_BaseUseable_o *)__this,(MethodInfo *)0x0);
          if ((char)bVar6 != '\0') {
            iVar2 = *(int *)(pSVar4->m_Items + 5);
            return CONCAT31((int3)((uint)iVar2 >> 8),iVar2 == -1 || 1 < iVar2);
          }
        }
      }
      return 0;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.AHSSTwinShot$$OnUse
// il2cpp: void Characters_AHSSTwinShot__OnUse (Characters_AHSSTwinShot_o* __this, const MethodInfo* method);
// 0x3fe5760

void Characters_AHSSTwinShot__OnUse(Characters_AHSSTwinShot_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Characters_BaseCharacter_o *pCVar3;
  System_Object_array *pSVar4;
  Il2CppClass *pIVar5;
  int iVar6;
  
  if (DAT_0570415f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AmmoWeapon);
    il2cpp_init_method_metadata(&TypeInfo_Human);
    DAT_0570415f = '\x01';
  }
  Characters_BaseUseable__OnUse((Characters_BaseUseable_o *)__this,(MethodInfo *)0x0);
  pCVar3 = (__this->fields)._owner;
  if (pCVar3 != (Characters_BaseCharacter_o *)0x0) {
    bVar1 = (TypeInfo_Human->_2).naturalAligment;
    if ((bVar1 <= (pCVar3->klass->_2).naturalAligment) &&
       ((pCVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_Human)) {
      pSVar4 = (pCVar3->fields).crossfadeCache;
      if (pSVar4 == (System_Object_array *)0x0) goto LAB_03fe581e;
      pIVar5 = (pSVar4->obj).klass;
      bVar1 = (TypeInfo_AmmoWeapon->_2).naturalAligment;
      if ((bVar1 <= (pIVar5->_2).naturalAligment) &&
         ((pIVar5->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_AmmoWeapon)) {
        iVar2 = *(int *)(pSVar4->m_Items + 5);
        if (-1 < iVar2) {
          iVar6 = 2;
          if (1 < iVar2) {
            iVar6 = iVar2;
          }
          *(int *)(pSVar4->m_Items + 5) = iVar6 + -2;
        }
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume();
  }
LAB_03fe581e:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.AHSSTwinShot$$Deactivate
// il2cpp: void Characters_AHSSTwinShot__Deactivate (Characters_AHSSTwinShot_o* __this, const MethodInfo* method);
// 0x3fe5830

void Characters_AHSSTwinShot__Deactivate(Characters_AHSSTwinShot_o *__this,MethodInfo *method)

{
  byte bVar1;
  char cVar2;
  Characters_Human_o *__this_00;
  Outline_o *pOVar3;
  System_Collections_Generic_List_string__o *pSVar4;
  void *pvVar5;
  Characters_BaseHitbox_o *__this_01;
  UnityEngine_Rigidbody_o *__this_02;
  UI_HUDBottomHandler_o *__this_03;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [12];
  undefined1 auVar9 [16];
  System_String_o *pSVar10;
  long *plVar11;
  long *plVar12;
  UnityEngine_Transform_o *pUVar13;
  long lVar14;
  MethodInfo *method_00;
  System_Collections_Generic_List_string__c *__this_04;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  undefined4 uVar19;
  undefined4 extraout_XMM0_Dc_01;
  float extraout_XMM0_Dc_02;
  float extraout_XMM0_Dc_03;
  undefined4 extraout_XMM0_Dc_04;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  undefined4 uVar20;
  undefined4 extraout_XMM0_Dd_01;
  float extraout_XMM0_Dd_02;
  float extraout_XMM0_Dd_03;
  undefined4 extraout_XMM0_Dd_04;
  float in_XMM1_Da;
  undefined8 uVar21;
  undefined1 auVar22 [16];
  float fVar23;
  UnityEngine_Vector3_o UVar24;
  UnityEngine_Vector3_o UVar25;
  UnityEngine_Vector3_o forward;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o forward_00;
  UnityEngine_Vector3_o force;
  UnityEngine_Quaternion_o UVar26;
  UnityEngine_Quaternion_Fields UVar27;
  undefined8 local_68;
  
  if (DAT_05704160 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CapsuleCollider);
    il2cpp_init_method_metadata(&TypeInfo_CharacterData);
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    il2cpp_init_method_metadata(&TypeInfo_Human);
    il2cpp_init_method_metadata(&TypeInfo_InGameMenu);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"Radius");
    il2cpp_init_method_metadata(&"KnockbackForce");
    il2cpp_init_method_metadata(&"AHSS");
    DAT_05704160 = '\x01';
  }
  __this_00 = (Characters_Human_o *)(__this->fields)._owner;
  if (__this_00 == (Characters_Human_o *)0x0) goto LAB_03fe60c4;
  bVar1 = (TypeInfo_Human->_2).naturalAligment;
  if (((__this_00->klass->_2).naturalAligment < bVar1) ||
     ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_Human)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume(__this_00);
  }
  uVar17 = (*(__this_00->klass->vtable)._66_GetAimPoint.methodPtr)(__this_00);
  fVar18 = (float)((ulong)uVar17 >> 0x20);
  lVar14 = *(long *)&(__this_00->fields).Dead;
  if ((lVar14 == 0) ||
     (pUVar13 = *(UnityEngine_Transform_o **)(lVar14 + 0x10),
     pUVar13 == (UnityEngine_Transform_o *)0x0)) goto LAB_03fe60c4;
  UVar24 = UnityEngine_Transform__get_position(pUVar13,(MethodInfo *)0x0);
  if (DAT_056fde20 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde20 = '\x01';
  }
  auVar22._0_4_ = (float)uVar17 - UVar24.fields.x;
  auVar22._4_4_ = fVar18 - UVar24.fields.y;
  auVar22._8_4_ = extraout_XMM0_Dc - extraout_XMM0_Dc_00;
  auVar22._12_4_ = extraout_XMM0_Dd - extraout_XMM0_Dd_00;
  fVar23 = in_XMM1_Da - UVar24.fields.z;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar19 = 0;
  uVar20 = 0;
  fVar15 = fVar23 * fVar23 + auVar22._4_4_ * auVar22._4_4_ + auVar22._0_4_ * auVar22._0_4_;
  if (fVar15 < 0.0) {
    fVar15 = sqrtf(fVar15);
    uVar19 = extraout_XMM0_Dc_01;
    uVar20 = extraout_XMM0_Dd_01;
    if (1e-05 < fVar15) goto LAB_03fe5a5f;
LAB_03fe59f7:
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
    }
    uVar21 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar23 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    lVar14._0_4_ = (__this_00->fields).Dead;
    lVar14._4_4_ = (__this_00->fields).CustomDamageEnabled;
  }
  else {
    fVar15 = SQRT(fVar15);
    if (fVar15 <= 1e-05) goto LAB_03fe59f7;
LAB_03fe5a5f:
    fVar23 = fVar23 / fVar15;
    auVar7._4_4_ = fVar15;
    auVar7._0_4_ = fVar15;
    auVar7._8_4_ = uVar19;
    auVar7._12_4_ = uVar20;
    auVar22 = divps(auVar22,auVar7);
    uVar21 = auVar22._0_8_;
    lVar14._0_4_ = (__this_00->fields).Dead;
    lVar14._4_4_ = (__this_00->fields).CustomDamageEnabled;
  }
  if ((lVar14 == 0) ||
     (*(UnityEngine_Transform_o **)(lVar14 + 0x10) == (UnityEngine_Transform_o *)0x0))
  goto LAB_03fe60c4;
  UVar24 = UnityEngine_Transform__get_forward
                     (*(UnityEngine_Transform_o **)(lVar14 + 0x10),(MethodInfo *)0x0);
  cVar2 = *(char *)((long)&(__this_00->fields).Animation + 4);
  if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
    il2cpp_init_class(UVar24.fields.x);
  }
  lVar14 = 0xf0;
  if (cVar2 == '\0') {
    lVar14 = 0x108;
  }
  pSVar10 = *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + lVar14);
  Characters_Human__set_State(__this_00,1,(MethodInfo *)0x0);
  *(System_String_o **)&(__this_00->fields)._currentVelocity.fields = pSVar10;
  il2cpp_runtime_glue(&(__this_00->fields)._currentVelocity,pSVar10);
  Characters_BaseCharacter__CrossFade
            ((Characters_BaseCharacter_o *)__this_00,pSVar10,0.05,0.0,(MethodInfo *)0x0);
  UVar24.fields.z = fVar23;
  UVar24.fields.x = (float)(int)uVar21;
  UVar24.fields.y = (float)(int)((ulong)uVar21 >> 0x20);
  UVar26 = UnityEngine_Quaternion__LookRotation(UVar24,(MethodInfo *)0x0);
  UVar24 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar26,(MethodInfo *)0x0);
  UVar25.fields.x = UVar24.fields.x * 57.29578;
  UVar25.fields.y = UVar24.fields.y * 57.29578;
  UVar25.fields.z = UVar24.fields.z * 57.29578;
  UVar24 = UnityEngine_Quaternion__Internal_MakePositive(UVar25,(MethodInfo *)0x0);
  *(float *)&(__this_00->fields).Detection = UVar24.fields.y;
  auVar8._4_8_ = 0;
  auVar8._0_4_ = UVar24.fields.y * 0.017453292;
  UVar27 = (UnityEngine_Quaternion_Fields)
           UnityEngine_Quaternion__Internal_FromEulerRad
                     ((UnityEngine_Vector3_o)(auVar8 << 0x20),(MethodInfo *)0x0);
  *(UnityEngine_Quaternion_Fields *)((long)&(__this_00->fields)._lastMountMessage + 4) = UVar27;
  lVar14 = *(long *)&(__this_00->fields).Dead;
  if ((lVar14 == 0) ||
     (pUVar13 = *(UnityEngine_Transform_o **)(lVar14 + 0x10),
     pUVar13 == (UnityEngine_Transform_o *)0x0)) goto LAB_03fe60c4;
  UVar26 = UnityEngine_Transform__get_rotation(pUVar13,(MethodInfo *)0x0);
  UVar27 = *(UnityEngine_Quaternion_Fields *)((long)&(__this_00->fields)._lastMountMessage + 4);
  fVar23 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  UVar26 = UnityEngine_Quaternion__Lerp(UVar26,UVar27,fVar23 * 30.0,(MethodInfo *)0x0);
  UnityEngine_Transform__set_rotation(pUVar13,UVar26,(MethodInfo *)0x0);
  lVar14 = *(long *)&(__this_00->fields).Dead;
  if ((lVar14 == 0) ||
     (pUVar13 = *(UnityEngine_Transform_o **)(lVar14 + 0x10),
     pUVar13 == (UnityEngine_Transform_o *)0x0)) goto LAB_03fe60c4;
  UVar24 = UnityEngine_Transform__get_position(pUVar13,(MethodInfo *)0x0);
  lVar14 = *(long *)&(__this_00->fields).Dead;
  if ((lVar14 == 0) ||
     (pUVar13 = *(UnityEngine_Transform_o **)(lVar14 + 0x10),
     pUVar13 == (UnityEngine_Transform_o *)0x0)) goto LAB_03fe60c4;
  UVar25 = UnityEngine_Transform__get_up(pUVar13,(MethodInfo *)0x0);
  local_68._0_4_ = UVar24.fields.x;
  local_68._4_4_ = UVar24.fields.y;
  local_68._0_4_ = (float)local_68 + UVar25.fields.x * 0.8;
  local_68._4_4_ = local_68._4_4_ + UVar25.fields.y * 0.8;
  fVar23 = UVar24.fields.z + UVar25.fields.z * 0.8;
  if (DAT_056fde20 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde20 = '\x01';
  }
  fVar15 = (float)uVar17 - (float)local_68;
  fVar18 = fVar18 - local_68._4_4_;
  in_XMM1_Da = in_XMM1_Da - fVar23;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar19 = 0;
  uVar20 = 0;
  fVar16 = in_XMM1_Da * in_XMM1_Da + fVar18 * fVar18 + fVar15 * fVar15;
  if (fVar16 < 0.0) {
    fVar16 = sqrtf(fVar16);
    uVar19 = extraout_XMM0_Dc_04;
    uVar20 = extraout_XMM0_Dd_04;
    if (1e-05 < fVar16) goto LAB_03fe5d50;
LAB_03fe5cfe:
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
    }
    uVar17 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar18 = (float)uVar17;
    fVar15 = (float)((ulong)uVar17 >> 0x20);
    in_XMM1_Da = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  }
  else {
    fVar16 = SQRT(fVar16);
    if (fVar16 <= 1e-05) goto LAB_03fe5cfe;
LAB_03fe5d50:
    in_XMM1_Da = in_XMM1_Da / fVar16;
    auVar9._4_4_ = fVar18;
    auVar9._0_4_ = fVar15;
    auVar9._8_4_ = extraout_XMM0_Dc - (extraout_XMM0_Dc_02 + extraout_XMM0_Dc_03 * 0.0);
    auVar9._12_4_ = extraout_XMM0_Dd - (extraout_XMM0_Dd_02 + extraout_XMM0_Dd_03 * 0.0);
    auVar6._4_4_ = fVar16;
    auVar6._0_4_ = fVar16;
    auVar6._8_4_ = uVar19;
    auVar6._12_4_ = uVar20;
    auVar22 = divps(auVar9,auVar6);
    fVar18 = auVar22._0_4_;
    fVar15 = auVar22._4_4_;
  }
  if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar10 = *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x30);
  forward.fields.y = fVar15;
  forward.fields.x = fVar18;
  forward.fields.z = in_XMM1_Da;
  UVar26 = UnityEngine_Quaternion__LookRotation(forward,(MethodInfo *)0x0);
  position.fields.z = fVar23;
  position.fields.x = (float)local_68;
  position.fields.y = local_68._4_4_;
  Effects_EffectSpawner__Spawn
            (pSVar10,position,UVar26,2.0,1,(System_Object_array *)0x0,(MethodInfo *)0x0);
  method_00 = TypeInfo_HumanSounds;
  if (*(int *)((long)&TypeInfo_HumanSounds[2].parameters + 4) == 0) {
    il2cpp_init_class();
  }
  pSVar10 = Characters_HumanSounds__GetRandomAHSSGunShotDouble(method_00);
  Characters_BaseCharacter__PlaySound
            ((Characters_BaseCharacter_o *)__this_00,pSVar10,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_CharacterData + 0xe4) == 0) {
    il2cpp_init_class();
  }
  plVar11 = (long *)**(long **)(TypeInfo_CharacterData + 0xb8);
  if (plVar11 != (long *)0x0) {
    plVar11 = (long *)(**(code **)(*plVar11 + 0x1a8))
                                (plVar11,"AHSS",*(undefined8 *)(*plVar11 + 0x1b0));
    pOVar3 = (__this_00->fields).OutlineComponent;
    if (((pOVar3 != (Outline_o *)0x0) &&
        (pSVar4 = pOVar3[1].fields._namesToIgnore,
        pSVar4 != (System_Collections_Generic_List_string__o *)0x0)) && (plVar11 != (long *)0x0)) {
      __this_04 = pSVar4[2].klass;
      plVar12 = (long *)(**(code **)(*plVar11 + 0x1a8))
                                  (plVar11,"Radius",*(undefined8 *)(*plVar11 + 0x1b0));
      if ((plVar12 != (long *)0x0) &&
         (fVar16 = (float)(**(code **)(*plVar12 + 0x388))(plVar12,*(undefined8 *)(*plVar12 + 0x390))
         , __this_04 != (System_Collections_Generic_List_string__c *)0x0)) {
        pvVar5 = (__this_04->_1).image;
        if ((*(byte *)((long)pvVar5 + 0x130) < *(byte *)(TypeInfo_CapsuleCollider + 0x130)) ||
           (*(long *)(*(long *)((long)pvVar5 + 200) + -8 +
                     (ulong)*(byte *)(TypeInfo_CapsuleCollider + 0x130) * 8) != TypeInfo_CapsuleCollider)) {
LAB_03fe60d4:
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(__this_04);
        }
        UnityEngine_CapsuleCollider__set_radius
                  ((UnityEngine_CapsuleCollider_o *)__this_04,fVar16 + fVar16,(MethodInfo *)0x0);
        pOVar3 = (__this_00->fields).OutlineComponent;
        if (((pOVar3 != (Outline_o *)0x0) &&
            (pSVar4 = pOVar3[1].fields._namesToIgnore,
            pSVar4 != (System_Collections_Generic_List_string__o *)0x0)) &&
           (pUVar13 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)pSVar4,(MethodInfo *)0x0),
           pUVar13 != (UnityEngine_Transform_o *)0x0)) {
          value.fields.z = fVar23;
          value.fields.x = (float)local_68;
          value.fields.y = local_68._4_4_;
          UnityEngine_Transform__set_position(pUVar13,value,(MethodInfo *)0x0);
          pOVar3 = (__this_00->fields).OutlineComponent;
          if ((pOVar3 != (Outline_o *)0x0) &&
             (pSVar4 = pOVar3[1].fields._namesToIgnore,
             pSVar4 != (System_Collections_Generic_List_string__o *)0x0)) {
            pUVar13 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)pSVar4,(MethodInfo *)0x0);
            forward_00.fields.y = fVar15;
            forward_00.fields.x = fVar18;
            forward_00.fields.z = in_XMM1_Da;
            UVar26 = UnityEngine_Quaternion__LookRotation(forward_00,(MethodInfo *)0x0);
            if (pUVar13 != (UnityEngine_Transform_o *)0x0) {
              UnityEngine_Transform__set_rotation(pUVar13,UVar26,(MethodInfo *)0x0);
              pOVar3 = (__this_00->fields).OutlineComponent;
              if ((pOVar3 != (Outline_o *)0x0) &&
                 (__this_01 = (Characters_BaseHitbox_o *)pOVar3[1].fields._namesToIgnore,
                 __this_01 != (Characters_BaseHitbox_o *)0x0)) {
                Characters_BaseHitbox__Activate(__this_01,0.0,0.1,(MethodInfo *)0x0);
                lVar14 = *(long *)&(__this_00->fields).Dead;
                if (lVar14 != 0) {
                  __this_02 = *(UnityEngine_Rigidbody_o **)(lVar14 + 0x18);
                  plVar11 = (long *)(**(code **)(*plVar11 + 0x1a8))
                                              (plVar11,"KnockbackForce",
                                               *(undefined8 *)(*plVar11 + 0x1b0));
                  if ((plVar11 != (long *)0x0) &&
                     (fVar23 = (float)(**(code **)(*plVar11 + 0x388))
                                                (plVar11,*(undefined8 *)(*plVar11 + 0x390)),
                     __this_02 != (UnityEngine_Rigidbody_o *)0x0)) {
                    force.fields.y = fVar15 * fVar23 * -2.0;
                    force.fields.x = fVar18 * fVar23 * -2.0;
                    force.fields.z = in_XMM1_Da * fVar23 * -2.0;
                    UnityEngine_Rigidbody__AddForce(__this_02,force,2,(MethodInfo *)0x0);
                    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                      il2cpp_init_class();
                    }
                    __this_04 = *(System_Collections_Generic_List_string__c **)
                                 (*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                    if (__this_04 != (System_Collections_Generic_List_string__c *)0x0) {
                      pvVar5 = (__this_04->_1).image;
                      if ((*(byte *)((long)pvVar5 + 0x130) < *(byte *)(TypeInfo_InGameMenu + 0x130)) ||
                         (*(long *)(*(long *)((long)pvVar5 + 200) + -8 +
                                   (ulong)*(byte *)(TypeInfo_InGameMenu + 0x130) * 8) != TypeInfo_InGameMenu))
                      goto LAB_03fe60d4;
                      __this_03 = (UI_HUDBottomHandler_o *)(__this_04->_1).interfaceOffsets;
                      if (__this_03 != (UI_HUDBottomHandler_o *)0x0) {
                        UI_HUDBottomHandler__ShootAHSS(__this_03,1,1,(MethodInfo *)0x0);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_03fe60c4:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


