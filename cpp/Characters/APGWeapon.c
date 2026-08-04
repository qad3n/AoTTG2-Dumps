// Type: Characters.APGWeapon
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/APGWeapon.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Weapons/APGWeapon.cs
// --------------------------------

// Characters.APGWeapon$$.ctor
// il2cpp: void Characters_APGWeapon___ctor (Characters_APGWeapon_o* __this, Characters_BaseCharacter_o* owner, int32_t ammo, int32_t ammoPerRound, float cooldown, const MethodInfo* method);
// 0x42fa770

void Characters_APGWeapon___ctor
               (Characters_APGWeapon_o *__this,Characters_BaseCharacter_o *owner,int32_t ammo,
               int32_t ammoPerRound,float cooldown,MethodInfo *method)

{
  int iVar1;
  
  iVar1 = 0;
  Characters_ExtendedUseable___ctor((Characters_ExtendedUseable_o *)__this,owner,(MethodInfo *)0x0);
  (__this->fields).AmmoLeft = ammo;
  (__this->fields).MaxAmmo = ammo;
  (__this->fields).RoundLeft = ammoPerRound;
  (__this->fields).MaxRound = ammoPerRound;
  (__this->fields).Cooldown = cooldown;
  if (ammoPerRound == -1) {
    (__this->fields).RoundLeft = ammo;
  }
  else {
    iVar1 = ammo - ammoPerRound;
  }
  (__this->fields).AmmoLeft = iVar1;
  return;
}


// Characters.APGWeapon$$Activate
// il2cpp: void Characters_APGWeapon__Activate (Characters_APGWeapon_o* __this, const MethodInfo* method);
// 0x42fa7d0

void Characters_APGWeapon__Activate(Characters_APGWeapon_o *__this,MethodInfo *method)

{
  byte bVar1;
  char cVar2;
  Characters_Human_o *__this_00;
  Characters_HumanComponentCache_o *__this_01;
  Outline_o *pOVar3;
  Outline_c *pOVar4;
  void *pvVar5;
  UnityEngine_Rigidbody_o *__this_02;
  UI_HUDBottomHandler_o *__this_03;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  bool_conflict bVar10;
  System_String_o *pSVar11;
  UnityEngine_Transform_o *pUVar12;
  long *plVar13;
  long *plVar14;
  Il2CppObject *pIVar15;
  long lVar16;
  ulong uVar17;
  undefined4 extraout_EDX;
  Il2CppClass *owner;
  Characters_Human_o *pCVar18;
  long *unaff_R15;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  undefined4 uVar26;
  undefined4 extraout_XMM0_Dc_01;
  float extraout_XMM0_Dc_02;
  float extraout_XMM0_Dc_03;
  undefined4 extraout_XMM0_Dc_04;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  undefined4 uVar27;
  undefined4 extraout_XMM0_Dd_01;
  float extraout_XMM0_Dd_02;
  float extraout_XMM0_Dd_03;
  undefined4 extraout_XMM0_Dd_04;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined8 uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  UnityEngine_Vector3_o UVar34;
  UnityEngine_Vector3_o UVar35;
  UnityEngine_Vector3_o forward;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o forward_00;
  UnityEngine_Vector3_o position_00;
  UnityEngine_Quaternion_o UVar36;
  UnityEngine_Quaternion_Fields UVar37;
  undefined8 uStack_118;
  
  if (g_data_057adefc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CapsuleCollider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterData);
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    il2cpp_runtime_helper_023445d0(&"Range2Speed");
    il2cpp_runtime_helper_023445d0(&"MaxRange");
    il2cpp_runtime_helper_023445d0(&"Radius");
    il2cpp_runtime_helper_023445d0(&"Range1Constant");
    il2cpp_runtime_helper_023445d0(&"MinRange");
    il2cpp_runtime_helper_023445d0(&"APG");
    il2cpp_runtime_helper_023445d0(&"Range1Multiplier");
    il2cpp_runtime_helper_023445d0(&"APGPVP");
    il2cpp_runtime_helper_023445d0(&"Range2Constant");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"Range2Multiplier");
    g_data_057adefc = '\x01';
  }
  __this_00 = (Characters_Human_o *)(__this->fields)._owner;
  pCVar18 = __this_00;
  if (__this_00 == (Characters_Human_o *)0x0) goto label_042fb7ac;
  bVar1 = (TypeInfo_Human->_2).naturalAligment;
  owner = TypeInfo_Human;
  if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
     ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_Human)) {
    __this_01 = (__this_00->fields).HumanCache;
    if (__this_01 == (Characters_HumanComponentCache_o *)0x0) {
label_042fb7ac:
      il2cpp_runtime_helper_022b2c90();
label_042fb7b1:
      il2cpp_runtime_helper_022b2ca0();
    }
    else {
      bVar10 = Characters_HookUseable__IsHooked((Characters_HookUseable_o *)__this_01,(MethodInfo *)0x0);
      cVar2 = *(char *)((long)&(__this_00->fields).Animation + 4);
      unaff_R15 = &TypeInfo_HumanAnimations;
      if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      uVar17 = (ulong)(byte)((byte)bVar10 ^ 1);
      lVar16 = uVar17 * 8 + 0xf8;
      if (cVar2 != '\0') {
        lVar16 = uVar17 * 8 + 0xe0;
      }
      pSVar11 = *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + lVar16);
      Characters_Human__set_State(__this_00,1,(MethodInfo *)0x0);
      *(System_String_o **)&(__this_00->fields)._currentVelocity.fields = pSVar11;
      il2cpp_runtime_helper_022b4080(&(__this_00->fields)._currentVelocity,pSVar11);
      fVar28 = 0.0;
      Characters_BaseCharacter__CrossFade
                ((Characters_BaseCharacter_o *)__this_00,pSVar11,0.05,0.0,(MethodInfo *)0x0);
      uVar25 = (*(__this_00->klass->vtable)._66_GetAimPoint.methodPtr)(__this_00);
      fVar20 = (float)((ulong)uVar25 >> 0x20);
      lVar16 = *(long *)&(__this_00->fields).Dead;
      if ((lVar16 == 0) ||
         (pUVar12 = *(UnityEngine_Transform_o **)(lVar16 + 0x10), pUVar12 == (UnityEngine_Transform_o *)0x0))
      goto label_042fb7ac;
      UVar34 = UnityEngine_Transform__get_position(pUVar12,(MethodInfo *)0x0);
      if (g_data_057a6845 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        g_data_057a6845 = '\x01';
      }
      auVar33._0_4_ = (float)uVar25 - UVar34.fields.x;
      auVar33._4_4_ = fVar20 - UVar34.fields.y;
      auVar33._8_4_ = extraout_XMM0_Dc - extraout_XMM0_Dc_00;
      auVar33._12_4_ = extraout_XMM0_Dd - extraout_XMM0_Dd_00;
      fVar29 = fVar28 - UVar34.fields.z;
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      uVar26 = 0;
      uVar27 = 0;
      fVar19 = fVar29 * fVar29 + auVar33._4_4_ * auVar33._4_4_ + auVar33._0_4_ * auVar33._0_4_;
      if (fVar19 < 0.0) {
        fVar19 = sqrtf(fVar19);
        uVar26 = extraout_XMM0_Dc_01;
        uVar27 = extraout_XMM0_Dd_01;
        if (fVar19 <= 1e-05) goto label_042faad1;
label_042fab2d:
        fVar29 = fVar29 / fVar19;
        auVar7._4_4_ = fVar19;
        auVar7._0_4_ = fVar19;
        auVar7._8_4_ = uVar26;
        auVar7._12_4_ = uVar27;
        auVar33 = divps(auVar33,auVar7);
        uVar31 = auVar33._0_8_;
      }
      else {
        fVar19 = SQRT(fVar19);
        if (1e-05 < fVar19) goto label_042fab2d;
label_042faad1:
        if (g_data_057a65d5 == '\0') {
          il2cpp_runtime_helper_023445d0();
          g_data_057a65d5 = '\x01';
        }
        uVar31 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
        fVar29 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
      }
      UVar34.fields.z = fVar29;
      UVar34.fields.x = (float)(int)uVar31;
      UVar34.fields.y = (float)(int)((ulong)uVar31 >> 0x20);
      UVar36 = UnityEngine_Quaternion__LookRotation_4debb20(UVar34,(MethodInfo *)0x0);
      UVar34 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar36,(MethodInfo *)0x0);
      UVar35.fields.x = UVar34.fields.x * 57.29578;
      UVar35.fields.y = UVar34.fields.y * 57.29578;
      UVar35.fields.z = UVar34.fields.z * 57.29578;
      UVar34 = UnityEngine_Quaternion__Internal_MakePositive(UVar35,(MethodInfo *)0x0);
      *(float *)&(__this_00->fields).Detection = UVar34.fields.y;
      auVar9._4_8_ = 0;
      auVar9._0_4_ = UVar34.fields.y * 0.017453292;
      UVar37 = (UnityEngine_Quaternion_Fields)
               UnityEngine_Quaternion__Internal_FromEulerRad
                         ((UnityEngine_Vector3_o)(auVar9 << 0x20),(MethodInfo *)0x0);
      *(UnityEngine_Quaternion_Fields *)((long)&(__this_00->fields)._lastMountMessage + 4) = UVar37;
      lVar16 = *(long *)&(__this_00->fields).Dead;
      if ((lVar16 == 0) ||
         (pUVar12 = *(UnityEngine_Transform_o **)(lVar16 + 0x10), pUVar12 == (UnityEngine_Transform_o *)0x0))
      goto label_042fb7ac;
      UVar36 = UnityEngine_Transform__get_rotation(pUVar12,(MethodInfo *)0x0);
      UVar37 = *(UnityEngine_Quaternion_Fields *)((long)&(__this_00->fields)._lastMountMessage + 4);
      fVar29 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      UVar36 = UnityEngine_Quaternion__Lerp(UVar36,UVar37,fVar29 * 30.0,(MethodInfo *)0x0);
      UnityEngine_Transform__set_rotation(pUVar12,UVar36,(MethodInfo *)0x0);
      lVar16 = *(long *)&(__this_00->fields).Dead;
      if ((lVar16 == 0) ||
         (pUVar12 = *(UnityEngine_Transform_o **)(lVar16 + 0x10), pUVar12 == (UnityEngine_Transform_o *)0x0))
      goto label_042fb7ac;
      UVar34 = UnityEngine_Transform__get_position(pUVar12,(MethodInfo *)0x0);
      lVar16 = *(long *)&(__this_00->fields).Dead;
      if ((lVar16 == 0) ||
         (pUVar12 = *(UnityEngine_Transform_o **)(lVar16 + 0x10), pUVar12 == (UnityEngine_Transform_o *)0x0))
      goto label_042fb7ac;
      UVar35 = UnityEngine_Transform__get_up(pUVar12,(MethodInfo *)0x0);
      uStack_118._0_4_ = UVar34.fields.x;
      uStack_118._4_4_ = UVar34.fields.y;
      uStack_118._0_4_ = (float)uStack_118 + UVar35.fields.x * 0.8;
      uStack_118._4_4_ = uStack_118._4_4_ + UVar35.fields.y * 0.8;
      fVar29 = UVar34.fields.z + UVar35.fields.z * 0.8;
      if (g_data_057a6845 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        g_data_057a6845 = '\x01';
      }
      auVar32._0_4_ = (float)uVar25 - (float)uStack_118;
      auVar32._4_4_ = fVar20 - uStack_118._4_4_;
      auVar32._8_4_ = extraout_XMM0_Dc - (extraout_XMM0_Dc_02 + extraout_XMM0_Dc_03 * 0.0);
      auVar32._12_4_ = extraout_XMM0_Dd - (extraout_XMM0_Dd_02 + extraout_XMM0_Dd_03 * 0.0);
      fVar28 = fVar28 - fVar29;
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      uVar26 = 0;
      uVar27 = 0;
      fVar20 = fVar28 * fVar28 + auVar32._4_4_ * auVar32._4_4_ + auVar32._0_4_ * auVar32._0_4_;
      if (fVar20 < 0.0) {
        fVar20 = sqrtf(fVar20);
        uVar26 = extraout_XMM0_Dc_04;
        uVar27 = extraout_XMM0_Dd_04;
        if (fVar20 <= 1e-05) goto label_042fad20;
label_042fad7c:
        fVar28 = fVar28 / fVar20;
        auVar6._4_4_ = fVar20;
        auVar6._0_4_ = fVar20;
        auVar6._8_4_ = uVar26;
        auVar6._12_4_ = uVar27;
        auVar33 = divps(auVar32,auVar6);
        uVar25 = auVar33._0_8_;
      }
      else {
        fVar20 = SQRT(fVar20);
        if (1e-05 < fVar20) goto label_042fad7c;
label_042fad20:
        if (g_data_057a65d5 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
          g_data_057a65d5 = '\x01';
        }
        uVar25 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
        fVar28 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
      }
      if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar11 = *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x30);
      forward.fields.z = fVar28;
      forward.fields.x = (float)(int)uVar25;
      forward.fields.y = (float)(int)((ulong)uVar25 >> 0x20);
      UVar36 = UnityEngine_Quaternion__LookRotation_4debb20(forward,(MethodInfo *)0x0);
      position.fields.z = fVar29;
      position.fields.x = (float)uStack_118;
      position.fields.y = uStack_118._4_4_;
      Effects_EffectSpawner__Spawn(pSVar11,position,UVar36,0.2,1,(System_Object_array *)0x0,(MethodInfo *)0x0)
      ;
      if (*(int *)(TypeInfo_HumanSounds + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar11 = Characters_HumanSounds__GetRandomAPGShot((MethodInfo *)0x0);
      Characters_BaseCharacter__PlaySound((Characters_BaseCharacter_o *)__this_00,pSVar11,(MethodInfo *)0x0);
      pOVar3 = (__this_00->fields).OutlineComponent;
      if (((pOVar3 == (Outline_o *)0x0) || (pOVar4 = pOVar3[2].klass, pOVar4 == (Outline_c *)0x0)) ||
         (pUVar12 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pOVar4,(MethodInfo *)0x0),
         pUVar12 == (UnityEngine_Transform_o *)0x0)) goto label_042fb7ac;
      value.fields.z = fVar29;
      value.fields.x = (float)uStack_118;
      value.fields.y = uStack_118._4_4_;
      UnityEngine_Transform__set_position(pUVar12,value,(MethodInfo *)0x0);
      pOVar3 = (__this_00->fields).OutlineComponent;
      if ((pOVar3 == (Outline_o *)0x0) || (pOVar4 = pOVar3[2].klass, pOVar4 == (Outline_c *)0x0))
      goto label_042fb7ac;
      pUVar12 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pOVar4,(MethodInfo *)0x0);
      forward_00.fields.z = fVar28;
      forward_00.fields.x = (float)(int)uVar25;
      forward_00.fields.y = (float)(int)((ulong)uVar25 >> 0x20);
      UVar36 = UnityEngine_Quaternion__LookRotation_4debb20(forward_00,(MethodInfo *)0x0);
      if (pUVar12 == (UnityEngine_Transform_o *)0x0) goto label_042fb7ac;
      UnityEngine_Transform__set_rotation(pUVar12,UVar36,(MethodInfo *)0x0);
      unaff_R15 = &TypeInfo_CharacterData;
      if (*(int *)(TypeInfo_CharacterData + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      plVar13 = (long *)**(long **)(TypeInfo_CharacterData + 0xb8);
      if (plVar13 == (long *)0x0) goto label_042fb7ac;
      plVar13 = (long *)(**(code **)(*plVar13 + 0x1a8))
                                  (plVar13,"APG",*(undefined8 *)(*plVar13 + 0x1b0));
      lVar16 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
      if (((lVar16 == 0) || (lVar16 = *(long *)(lVar16 + 0x58), lVar16 == 0)) ||
         (lVar16 = *(long *)(lVar16 + 0x50), lVar16 == 0)) goto label_042fb7ac;
      if (*(char *)(lVar16 + 0x11) != '\0') {
        if (*(int *)(TypeInfo_CharacterData + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        plVar13 = (long *)**(long **)(TypeInfo_CharacterData + 0xb8);
        if (plVar13 == (long *)0x0) goto label_042fb7ac;
        plVar13 = (long *)(**(code **)(*plVar13 + 0x1a8))
                                    (plVar13,"APGPVP",*(undefined8 *)(*plVar13 + 0x1b0));
      }
      pOVar3 = (__this_00->fields).OutlineComponent;
      if ((pOVar3 == (Outline_o *)0x0) || (pOVar4 = pOVar3[2].klass, pOVar4 == (Outline_c *)0x0))
      goto label_042fb7ac;
      unaff_R15 = (long *)(pOVar4->_1).declaringType;
      if ((System_Object_array *)unaff_R15 != (System_Object_array *)0x0) {
        pvVar5 = ((Il2CppClass_1 *)&((System_Object_array *)unaff_R15)->obj)->image;
        bVar1 = (TypeInfo_CapsuleCollider->_2).naturalAligment;
        owner = TypeInfo_CapsuleCollider;
        if ((*(byte *)((long)pvVar5 + 0x130) < bVar1) ||
           (*(Il2CppClass **)(*(long *)((long)pvVar5 + 200) + -8 + (ulong)bVar1 * 8) != TypeInfo_CapsuleCollider))
        goto label_042fb7cd;
      }
      if ((plVar13 == (long *)0x0) ||
         ((plVar14 = (long *)(**(code **)(*plVar13 + 0x1a8))
                                       (plVar13,"Radius",*(undefined8 *)(*plVar13 + 0x1b0)),
          plVar14 == (long *)0x0 ||
          (fVar28 = (float)(**(code **)(*plVar14 + 0x388))(plVar14),
          (System_Object_array *)unaff_R15 == (System_Object_array *)0x0)))) goto label_042fb7ac;
      UnityEngine_CapsuleCollider__set_radius
                ((UnityEngine_CapsuleCollider_o *)unaff_R15,fVar28,(MethodInfo *)0x0);
      plVar14 = (long *)(**(code **)(*plVar13 + 0x1a8))
                                  (plVar13,"Range1Multiplier",*(undefined8 *)(*plVar13 + 0x1b0));
      if (plVar14 == (long *)0x0) goto label_042fb7ac;
      fVar28 = (float)(**(code **)(*plVar14 + 0x388))(plVar14,*(undefined8 *)(*plVar14 + 0x390));
      plVar14 = (long *)(**(code **)(*plVar13 + 0x1a8))
                                  (plVar13,"Range2Multiplier",*(undefined8 *)(*plVar13 + 0x1b0));
      if (plVar14 == (long *)0x0) goto label_042fb7ac;
      fVar20 = (float)(**(code **)(*plVar14 + 0x388))(plVar14,*(undefined8 *)(*plVar14 + 0x390));
      plVar14 = (long *)(**(code **)(*plVar13 + 0x1a8))
                                  (plVar13,"Range1Constant",*(undefined8 *)(*plVar13 + 0x1b0));
      if (plVar14 == (long *)0x0) goto label_042fb7ac;
      fVar19 = (float)(**(code **)(*plVar14 + 0x388))(plVar14,*(undefined8 *)(*plVar14 + 0x390));
      plVar14 = (long *)(**(code **)(*plVar13 + 0x1a8))
                                  (plVar13,"Range2Constant",*(undefined8 *)(*plVar13 + 0x1b0));
      if (plVar14 == (long *)0x0) goto label_042fb7ac;
      fVar21 = (float)(**(code **)(*plVar14 + 0x388))(plVar14,*(undefined8 *)(*plVar14 + 0x390));
      plVar14 = (long *)(**(code **)(*plVar13 + 0x1a8))
                                  (plVar13,"MinRange",*(undefined8 *)(*plVar13 + 0x1b0));
      if (plVar14 == (long *)0x0) goto label_042fb7ac;
      fVar22 = (float)(**(code **)(*plVar14 + 0x388))(plVar14,*(undefined8 *)(*plVar14 + 0x390));
      plVar14 = (long *)(**(code **)(*plVar13 + 0x1a8))
                                  (plVar13,"MaxRange",*(undefined8 *)(*plVar13 + 0x1b0));
      if (plVar14 == (long *)0x0) goto label_042fb7ac;
      fVar23 = (float)(**(code **)(*plVar14 + 0x388))(plVar14);
      lVar16 = *(long *)&(__this_00->fields).Dead;
      if ((lVar16 == 0) ||
         (__this_02 = *(UnityEngine_Rigidbody_o **)(lVar16 + 0x18),
         __this_02 == (UnityEngine_Rigidbody_o *)0x0)) goto label_042fb7ac;
      UVar34 = UnityEngine_Rigidbody__get_velocity(__this_02,(MethodInfo *)0x0);
      if (g_data_057a6841 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        g_data_057a6841 = '\x01';
      }
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      fVar30 = UVar34.fields.z * UVar34.fields.z +
               UVar34.fields.y * UVar34.fields.y + UVar34.fields.x * UVar34.fields.x;
      if (fVar30 < 0.0) {
        fVar30 = sqrtf(fVar30);
      }
      else {
        fVar30 = SQRT(fVar30);
      }
      plVar13 = (long *)(**(code **)(*plVar13 + 0x1a8))
                                  (plVar13,"Range2Speed",*(undefined8 *)(*plVar13 + 0x1b0));
      if (plVar13 == (long *)0x0) goto label_042fb7ac;
      fVar24 = (float)(**(code **)(*plVar13 + 0x388))(plVar13);
      fVar28 = (float)(~-(uint)(fVar24 < fVar30) & (uint)(fVar19 + fVar28 * fVar30) |
                      (uint)(fVar21 + fVar20 * fVar30) & -(uint)(fVar24 < fVar30));
      if (fVar28 <= fVar23) {
        fVar23 = fVar28;
      }
      UnityEngine_CapsuleCollider__set_height
                ((UnityEngine_CapsuleCollider_o *)unaff_R15,
                 (float)(~-(uint)(fVar22 <= fVar28) & (uint)fVar22 | (uint)fVar23 & -(uint)(fVar22 <= fVar28))
                 ,(MethodInfo *)0x0);
      fVar28 = UnityEngine_CapsuleCollider__get_height
                         ((UnityEngine_CapsuleCollider_o *)unaff_R15,(MethodInfo *)0x0);
      auVar8._4_8_ = 0;
      auVar8._0_4_ = fVar28 * 0.5 + 0.5;
      UnityEngine_CapsuleCollider__set_center
                ((UnityEngine_CapsuleCollider_o *)unaff_R15,(UnityEngine_Vector3_o)(auVar8 << 0x40),
                 (MethodInfo *)0x0);
      UnityEngine_CapsuleCollider__get_height((UnityEngine_CapsuleCollider_o *)unaff_R15,(MethodInfo *)0x0);
      UnityEngine_CapsuleCollider__get_radius((UnityEngine_CapsuleCollider_o *)unaff_R15,(MethodInfo *)0x0);
      UnityEngine_CapsuleCollider__get_height((UnityEngine_CapsuleCollider_o *)unaff_R15,(MethodInfo *)0x0);
      unaff_R15 = (long *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,5);
      pIVar15 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(TypeInfo_Vector3);
      if ((System_Object_array *)unaff_R15 == (System_Object_array *)0x0) goto label_042fb7ac;
      if ((pIVar15 == (Il2CppObject *)0x0) || (lVar16 = il2cpp_runtime_helper_023051f0(pIVar15), lVar16 != 0)) {
        if ((int)((System_Object_array *)unaff_R15)->max_length != 0) {
          ((System_Object_array *)unaff_R15)->m_Items[0] = pIVar15;
          il2cpp_runtime_helper_022b4080(((System_Object_array *)unaff_R15)->m_Items,pIVar15);
          pIVar15 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(TypeInfo_Vector3);
          if ((pIVar15 != (Il2CppObject *)0x0) && (lVar16 = il2cpp_runtime_helper_023051f0(pIVar15), lVar16 == 0))
          goto label_042fb7b6;
          if (1 < (uint)((System_Object_array *)unaff_R15)->max_length) {
            ((System_Object_array *)unaff_R15)->m_Items[1] = pIVar15;
            il2cpp_runtime_helper_022b4080(((System_Object_array *)unaff_R15)->m_Items + 1,pIVar15);
            pIVar15 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8);
            if ((pIVar15 != (Il2CppObject *)0x0) && (lVar16 = il2cpp_runtime_helper_023051f0(pIVar15), lVar16 == 0))
            goto label_042fb7b6;
            if (2 < (uint)((System_Object_array *)unaff_R15)->max_length) {
              ((System_Object_array *)unaff_R15)->m_Items[2] = pIVar15;
              il2cpp_runtime_helper_022b4080(((System_Object_array *)unaff_R15)->m_Items + 2,pIVar15);
              pIVar15 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8);
              if ((pIVar15 != (Il2CppObject *)0x0) && (lVar16 = il2cpp_runtime_helper_023051f0(pIVar15), lVar16 == 0))
              goto label_042fb7b6;
              if (3 < (uint)((System_Object_array *)unaff_R15)->max_length) {
                ((System_Object_array *)unaff_R15)->m_Items[3] = pIVar15;
                il2cpp_runtime_helper_022b4080(((System_Object_array *)unaff_R15)->m_Items + 3,pIVar15);
                pIVar15 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8);
                if ((pIVar15 != (Il2CppObject *)0x0) && (lVar16 = il2cpp_runtime_helper_023051f0(pIVar15), lVar16 == 0))
                goto label_042fb7b6;
                if (4 < (uint)((System_Object_array *)unaff_R15)->max_length) {
                  ((System_Object_array *)unaff_R15)->m_Items[4] = pIVar15;
                  il2cpp_runtime_helper_022b4080(((System_Object_array *)unaff_R15)->m_Items + 4,pIVar15);
                  if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                    pSVar11 = *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xb8);
                  }
                  else {
                    pSVar11 = *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xb8);
                  }
                  if (g_data_057a6843 == '\0') {
                    il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
                    g_data_057a6843 = '\x01';
                  }
                  position_00.fields.z = fVar29;
                  position_00.fields.x = (float)uStack_118;
                  position_00.fields.y = uStack_118._4_4_;
                  Effects_EffectSpawner__Spawn
                            (pSVar11,position_00,
                             (UnityEngine_Quaternion_o)
                             **(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8),1.0,1,
                             (System_Object_array *)unaff_R15,(MethodInfo *)0x0);
                  pOVar3 = (__this_00->fields).OutlineComponent;
                  if ((pOVar3 != (Outline_o *)0x0) && (pOVar4 = pOVar3[2].klass, pOVar4 != (Outline_c *)0x0))
                  {
                    Characters_BaseHitbox__Activate
                              ((Characters_BaseHitbox_o *)pOVar4,0.0,0.1,(MethodInfo *)0x0);
                    if ((char)(__this_00->fields).CustomDamage != '\0') {
                      return;
                    }
                    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pCVar18 = *(Characters_Human_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                    if (pCVar18 != (Characters_Human_o *)0x0) {
                      bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
                      owner = TypeInfo_InGameMenu;
                      if (((pCVar18->klass->_2).naturalAligment < bVar1) ||
                         ((pCVar18->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_InGameMenu))
                      goto label_042fb7c8;
                      __this_03 = *(UI_HUDBottomHandler_o **)&(pCVar18->fields)._cameraFPS;
                      if (__this_03 != (UI_HUDBottomHandler_o *)0x0) {
                        UI_HUDBottomHandler__ShootAPG(__this_03,(MethodInfo *)0x0);
                        return;
                      }
                    }
                  }
                  goto label_042fb7ac;
                }
              }
            }
          }
        }
        goto label_042fb7b1;
      }
    }
label_042fb7b6:
    uVar25 = il2cpp_runtime_helper_0231b270();
    owner = (Il2CppClass *)0x0;
    il2cpp_runtime_helper_022b2b10(uVar25);
    pCVar18 = __this_00;
  }
label_042fb7c8:
  il2cpp_runtime_helper_022b2fd0(pCVar18);
label_042fb7cd:
  uVar26 = il2cpp_runtime_helper_022b2fd0();
  Characters_HoldUseable___ctor
            ((Characters_HoldUseable_o *)unaff_R15,(Characters_BaseCharacter_o *)owner,(MethodInfo *)0x0);
  *(undefined4 *)((long)((Il2CppType *)((System_Object_array *)unaff_R15)->m_Items + 2) + 4) = extraout_EDX;
  *(undefined4 *)((long)((Il2CppType *)((System_Object_array *)unaff_R15)->m_Items + 2) + 8) = extraout_EDX;
  *(undefined4 *)&((Il2CppType *)((System_Object_array *)unaff_R15)->m_Items)[1].field_0xc = uVar26;
  *(undefined4 *)((Il2CppType *)((System_Object_array *)unaff_R15)->m_Items + 2) = uVar26;
  return;
}


