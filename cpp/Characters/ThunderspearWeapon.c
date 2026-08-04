// Type: Characters.ThunderspearWeapon
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/ThunderspearWeapon.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Weapons/ThunderSpearWeapon.cs
// --------------------------------

// Characters.ThunderspearWeapon$$.ctor
// il2cpp: void Characters_ThunderspearWeapon___ctor (Characters_ThunderspearWeapon_o* __this, Characters_BaseCharacter_o* owner, int32_t ammo, int32_t ammoPerRound, float cooldown, float radius, float speed, float travelTime, float delay, SimpleJSONFixed_JSONNode_o* tsInfo, const MethodInfo* method);
// 0x42fb9b0

void Characters_ThunderspearWeapon___ctor
               (Characters_ThunderspearWeapon_o *__this,Characters_BaseCharacter_o *owner,int32_t ammo,
               int32_t ammoPerRound,float cooldown,float radius,float speed,float travelTime,float delay,
               SimpleJSONFixed_JSONNode_o *tsInfo,MethodInfo *method)

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
  (__this->fields).Radius = radius;
  (__this->fields).Speed = speed;
  (__this->fields).TravelTime = travelTime;
  (__this->fields).Delay = delay;
  (__this->fields).TSInfo = tsInfo;
  il2cpp_runtime_helper_022b4080(&(__this->fields).TSInfo,tsInfo);
  return;
}


// Characters.ThunderspearWeapon$$Activate
// il2cpp: void Characters_ThunderspearWeapon__Activate (Characters_ThunderspearWeapon_o* __this, const MethodInfo* method);
// 0x42fba70

void Characters_ThunderspearWeapon__Activate(Characters_ThunderspearWeapon_o *__this,MethodInfo *method)

{
  void **ppvVar1;
  int iVar2;
  int32_t charViewId;
  Characters_Human_o *pCVar3;
  System_Action_Hashtable__o *pSVar4;
  System_Action_Hashtable__c *pSVar5;
  undefined8 uVar6;
  UnityEngine_Rigidbody_o *__this_00;
  Utility_Color255_o *__this_01;
  SimpleJSONFixed_JSONNode_o *pSVar7;
  UI_HUDBottomHandler_o *__this_02;
  UnityEngine_Object_o *x;
  Il2CppClass *vtableDispatch;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [12];
  UnityEngine_Vector3_Fields gravity;
  undefined1 auVar11 [8];
  byte bVar12;
  char cVar13;
  bool_conflict bVar14;
  bool_conflict bVar15;
  UnityEngine_Transform_o *pUVar16;
  System_String_o *pSVar17;
  System_Object_array *settings;
  Il2CppObject *pIVar18;
  long lVar19;
  long *plVar20;
  Projectiles_ThunderspearProjectile_o *pPVar21;
  undefined8 *puVar22;
  char extraout_DL;
  undefined8 extraout_RDX;
  Projectiles_ThunderspearProjectile_o **ppPVar23;
  Characters_Human_o *pCVar24;
  UnityEngine_GameObject_o *pUVar25;
  UnityEngine_Object_o *pUVar26;
  float *pfVar27;
  bool bVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined8 uVar36;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  undefined4 uVar37;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  float extraout_XMM0_Dc_04;
  undefined4 extraout_XMM0_Dc_05;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  undefined4 uVar38;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined4 extraout_XMM0_Dd_03;
  float extraout_XMM0_Dd_04;
  undefined4 extraout_XMM0_Dd_05;
  float extraout_XMM1_Da;
  undefined8 uVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar42;
  float fVar43;
  UnityEngine_Quaternion_o UVar44;
  UnityEngine_Quaternion_Fields UVar45;
  UnityEngine_Vector3_o UVar46;
  UnityEngine_Vector3_o euler;
  UnityEngine_Vector3_o forward;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o velocity;
  undefined8 uStack_108;
  float fStack_ec;
  float fStack_d8;
  undefined1 auStack_c8 [8];
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  undefined8 uStack_88;
  
  if (g_data_057adeff == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ProjectilePrefabs);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StockSpecial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ThunderspearProjectile);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color255_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"SpeedMultiplier");
    il2cpp_runtime_helper_023445d0(&"RangeMin");
    il2cpp_runtime_helper_023445d0(&"RangeMultiplier");
    il2cpp_runtime_helper_023445d0(&"RangeMax");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"Range");
    g_data_057adeff = '\x01';
  }
  pCVar3 = (Characters_Human_o *)(__this->fields)._owner;
  pCVar24 = pCVar3;
  if (pCVar3 == (Characters_Human_o *)0x0) goto label_042fcb52;
  bVar12 = (TypeInfo_Human->_2).naturalAligment;
  if (((pCVar3->klass->_2).naturalAligment < bVar12) ||
     ((pCVar3->klass->_2).typeHierarchy[(ulong)bVar12 - 1] != TypeInfo_Human)) {
label_042fcb67:
    il2cpp_runtime_helper_022b2fd0(pCVar24);
  }
  else {
    if ((((pCVar3->fields).FinishSetup | 8U) == 9) &&
       (pSVar4 = (pCVar3->fields).OnPlayerPropertiesChanged, pSVar4 != (System_Action_Hashtable__o *)0x0)) {
      pSVar5 = pSVar4->klass;
      bVar12 = (TypeInfo_StockSpecial->_2).naturalAligment;
      if ((bVar12 <= (pSVar5->_2).naturalAligment) &&
         ((pSVar5->_2).typeHierarchy[(ulong)bVar12 - 1] == TypeInfo_StockSpecial)) {
        *(undefined1 *)((long)&(pSVar4->fields).invoke_impl + 4) = 0;
        (*(pSVar5->vtable)._10_CombineImpl.methodPtr)(pSVar4,(pSVar5->vtable)._10_CombineImpl.method);
      }
    }
    uVar36 = (*(pCVar3->klass->vtable)._66_GetAimPoint.methodPtr)(pCVar3);
    fVar43 = (float)((ulong)uVar36 >> 0x20);
    lVar19 = *(long *)&(pCVar3->fields).Dead;
    if ((lVar19 == 0) ||
       (pUVar16 = *(UnityEngine_Transform_o **)(lVar19 + 0x10), pUVar16 == (UnityEngine_Transform_o *)0x0))
    goto label_042fcb52;
    UVar46 = UnityEngine_Transform__get_position(pUVar16,(MethodInfo *)0x0);
    if (g_data_057a6845 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a6845 = '\x01';
    }
    auVar41._0_4_ = (float)uVar36 - UVar46.fields.x;
    auVar41._4_4_ = fVar43 - UVar46.fields.y;
    auVar41._8_4_ = extraout_XMM0_Dc - extraout_XMM0_Dc_00;
    auVar41._12_4_ = extraout_XMM0_Dd - extraout_XMM0_Dd_00;
    fVar42 = extraout_XMM1_Da - UVar46.fields.z;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar37 = 0;
    uVar38 = 0;
    fVar29 = fVar42 * fVar42 + auVar41._4_4_ * auVar41._4_4_ + auVar41._0_4_ * auVar41._0_4_;
    if (fVar29 < 0.0) {
      fVar29 = sqrtf(fVar29);
      uVar37 = extraout_XMM0_Dc_01;
      uVar38 = extraout_XMM0_Dd_01;
      if (1e-05 < fVar29) goto label_042fbd69;
label_042fbd01:
      if (g_data_057a65d5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a65d5 = '\x01';
      }
      uVar39 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      fVar42 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
      lVar19._0_4_ = (pCVar3->fields).Dead;
      lVar19._4_4_ = (pCVar3->fields).CustomDamageEnabled;
    }
    else {
      fVar29 = SQRT(fVar29);
      if (fVar29 <= 1e-05) goto label_042fbd01;
label_042fbd69:
      fVar42 = fVar42 / fVar29;
      auVar9._4_4_ = fVar29;
      auVar9._0_4_ = fVar29;
      auVar9._8_4_ = uVar37;
      auVar9._12_4_ = uVar38;
      auVar41 = divps(auVar41,auVar9);
      uVar39 = auVar41._0_8_;
      lVar19._0_4_ = (pCVar3->fields).Dead;
      lVar19._4_4_ = (pCVar3->fields).CustomDamageEnabled;
    }
    if ((lVar19 == 0) || (*(UnityEngine_Transform_o **)(lVar19 + 0x10) == (UnityEngine_Transform_o *)0x0)) {
label_042fcb52:
      il2cpp_runtime_helper_022b2c90();
label_042fcb57:
      pPVar21 = (Projectiles_ThunderspearProjectile_o *)il2cpp_runtime_helper_022b2ca0();
label_042fcb5c:
      il2cpp_runtime_helper_022b2fd0(pPVar21);
      pCVar24 = pCVar3;
      goto label_042fcb67;
    }
    UVar46 = UnityEngine_Transform__get_forward
                       (*(UnityEngine_Transform_o **)(lVar19 + 0x10),(MethodInfo *)0x0);
    lVar19 = *(long *)&(pCVar3->fields).MountState;
    if ((lVar19 == 0) ||
       (pUVar25 = *(UnityEngine_GameObject_o **)(lVar19 + 0xb8), pUVar25 == (UnityEngine_GameObject_o *)0x0))
    goto label_042fcb52;
    bVar15 = UnityEngine_GameObject__get_activeSelf(pUVar25,(MethodInfo *)0x0);
    lVar19 = *(long *)&(pCVar3->fields).MountState;
    if ((lVar19 == 0) ||
       (pUVar25 = *(UnityEngine_GameObject_o **)(lVar19 + 0xc0), pUVar25 == (UnityEngine_GameObject_o *)0x0))
    goto label_042fcb52;
    bVar14 = UnityEngine_GameObject__get_activeSelf(pUVar25,(MethodInfo *)0x0);
    if (g_data_057adf02 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
      g_data_057adf02 = '\x01';
    }
    lVar19 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
    if (lVar19 == 0) goto label_042fcb52;
    lVar19 = *(long *)(lVar19 + 0x58);
    fStack_b8 = (float)uVar39;
    if ((lVar19 == 0) || (lVar19 = *(long *)(lVar19 + 0x48), lVar19 == 0)) goto label_042fcb52;
    if (*(char *)(lVar19 + 0x11) == '\0') {
      bVar28 = (__this->fields).MaxRound == 2;
    }
    else {
      bVar28 = false;
    }
    fStack_d8 = UVar46.fields.x;
    bVar12 = (byte)bVar15;
    if ((((bVar12 == 0) || (bVar12 != 1 || 0.0 <= UVar46.fields.z * fStack_b8 - fStack_d8 * fVar42)) ||
        ((pCVar3->fields).FinishSetup == 0xd)) && ((byte)bVar14 != 0)) {
      lVar19 = *(long *)&(pCVar3->fields).MountState;
      if (((lVar19 != 0) &&
          (pUVar25 = *(UnityEngine_GameObject_o **)(lVar19 + 0xc0), pUVar25 != (UnityEngine_GameObject_o *)0x0
          )) && (pUVar16 = UnityEngine_GameObject__get_transform(pUVar25,(MethodInfo *)0x0),
                pUVar16 != (UnityEngine_Transform_o *)0x0)) {
        UVar46 = UnityEngine_Transform__get_position(pUVar16,(MethodInfo *)0x0);
        fStack_d8 = UVar46.fields.z;
        fStack_c0 = (float)extraout_XMM0_Dc_02;
        auStack_c8 = (undefined1  [8])UVar46.fields._0_8_;
        fStack_bc = (float)extraout_XMM0_Dd_02;
        if (*(int *)(TypeInfo_HumanSounds + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar17 = Characters_HumanSounds__GetRandomTSLaunch((MethodInfo *)0x0);
        Characters_BaseCharacter__PlaySound((Characters_BaseCharacter_o *)pCVar3,pSVar17,(MethodInfo *)0x0);
        Characters_Human__SetThunderspears(pCVar3,(uint)(byte)(bVar12 | bVar28 ^ 1U),0,(MethodInfo *)0x0);
        cVar13 = *(char *)((long)&(pCVar3->fields).Animation + 4);
        if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          lVar19 = *(long *)(TypeInfo_HumanAnimations + 0xb8);
        }
        else {
          lVar19 = *(long *)(TypeInfo_HumanAnimations + 0xb8);
        }
        if (cVar13 == '\0') {
          puVar22 = (undefined8 *)(lVar19 + 0x130);
        }
        else {
          puVar22 = (undefined8 *)(lVar19 + 0x120);
        }
        goto label_042fc0bd;
      }
      goto label_042fcb52;
    }
    lVar19 = *(long *)&(pCVar3->fields).MountState;
    if (((lVar19 == 0) ||
        (pUVar25 = *(UnityEngine_GameObject_o **)(lVar19 + 0xb8), pUVar25 == (UnityEngine_GameObject_o *)0x0))
       || (pUVar16 = UnityEngine_GameObject__get_transform(pUVar25,(MethodInfo *)0x0),
          pUVar16 == (UnityEngine_Transform_o *)0x0)) goto label_042fcb52;
    UVar46 = UnityEngine_Transform__get_position(pUVar16,(MethodInfo *)0x0);
    fStack_d8 = UVar46.fields.z;
    fStack_c0 = (float)extraout_XMM0_Dc_03;
    auStack_c8 = (undefined1  [8])UVar46.fields._0_8_;
    fStack_bc = (float)extraout_XMM0_Dd_03;
    if (*(int *)(TypeInfo_HumanSounds + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar17 = Characters_HumanSounds__GetRandomTSLaunch((MethodInfo *)0x0);
    Characters_BaseCharacter__PlaySound((Characters_BaseCharacter_o *)pCVar3,pSVar17,(MethodInfo *)0x0);
    Characters_Human__SetThunderspears(pCVar3,0,(uint)(byte)((byte)bVar14 | bVar28 ^ 1U),(MethodInfo *)0x0);
    cVar13 = *(char *)((long)&(pCVar3->fields).Animation + 4);
    if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      lVar19 = *(long *)(TypeInfo_HumanAnimations + 0xb8);
    }
    else {
      lVar19 = *(long *)(TypeInfo_HumanAnimations + 0xb8);
    }
    if (cVar13 == '\0') {
      puVar22 = (undefined8 *)(lVar19 + 0x138);
    }
    else {
      puVar22 = (undefined8 *)(lVar19 + 0x128);
    }
label_042fc0bd:
    uVar6 = *puVar22;
    (pCVar3->fields)._currentVelocity.fields.x = (float)(int)uVar6;
    (pCVar3->fields)._currentVelocity.fields.y = (float)(int)((ulong)uVar6 >> 0x20);
    il2cpp_runtime_helper_022b4080(&(pCVar3->fields)._currentVelocity);
    if (*(char *)((long)&(pCVar3->fields).Animation + 4) != '\0') {
      lVar19 = *(long *)&(pCVar3->fields).MountState;
      if (((lVar19 == 0) ||
          (pUVar25 = *(UnityEngine_GameObject_o **)(lVar19 + 0x148),
          pUVar25 == (UnityEngine_GameObject_o *)0x0)) ||
         (pUVar16 = UnityEngine_GameObject__get_transform(pUVar25,(MethodInfo *)0x0),
         pUVar16 == (UnityEngine_Transform_o *)0x0)) goto label_042fcb52;
      UVar46 = UnityEngine_Transform__get_position(pUVar16,(MethodInfo *)0x0);
      if (g_data_057a6844 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a6844 = '\x01';
      }
      uVar6 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
      auStack_c8._4_4_ = UVar46.fields.y + (float)((ulong)uVar6 >> 0x20);
      auStack_c8._0_4_ = UVar46.fields.x + (float)uVar6;
      fStack_c0 = extraout_XMM0_Dc_04 + 0.0;
      fStack_bc = extraout_XMM0_Dd_04 + 0.0;
      fStack_d8 = UVar46.fields.z + *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
    }
    auVar11 = auStack_c8;
    if (g_data_057a6845 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a6845 = '\x01';
    }
    auVar40._0_4_ = (float)uVar36 - (float)auStack_c8._0_4_;
    auVar40._4_4_ = fVar43 - (float)auStack_c8._4_4_;
    auVar40._8_4_ = extraout_XMM0_Dc - fStack_c0;
    auVar40._12_4_ = extraout_XMM0_Dd - fStack_bc;
    fVar43 = extraout_XMM1_Da - fStack_d8;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar37 = 0;
    uVar38 = 0;
    fVar29 = fVar43 * fVar43 + auVar40._4_4_ * auVar40._4_4_ + auVar40._0_4_ * auVar40._0_4_;
    if (fVar29 < 0.0) {
      fVar29 = sqrtf(fVar29);
      uVar37 = extraout_XMM0_Dc_05;
      uVar38 = extraout_XMM0_Dd_05;
      if (1e-05 < fVar29) goto label_042fc271;
label_042fc20b:
      if (g_data_057a65d5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a65d5 = '\x01';
      }
      uVar36 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      fVar43 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
      cVar13 = *(char *)((long)&(pCVar3->fields).Animation + 4);
    }
    else {
      fVar29 = SQRT(fVar29);
      if (fVar29 <= 1e-05) goto label_042fc20b;
label_042fc271:
      fVar43 = fVar43 / fVar29;
      auVar8._4_4_ = fVar29;
      auVar8._0_4_ = fVar29;
      auVar8._8_4_ = uVar37;
      auVar8._12_4_ = uVar38;
      auVar41 = divps(auVar40,auVar8);
      uVar36 = auVar41._0_8_;
      cVar13 = *(char *)((long)&(pCVar3->fields).Animation + 4);
    }
    fVar29 = (float)((ulong)uVar36 >> 0x20);
    if (cVar13 != '\0') {
      auStack_c8._4_4_ = (float)auStack_c8._4_4_ + fVar29;
      auStack_c8._0_4_ = (float)auStack_c8._0_4_ + (float)uVar36;
      fStack_d8 = fStack_d8 + fVar43;
      auVar11 = auStack_c8;
    }
    auStack_c8 = auVar11;
    iVar2 = (pCVar3->fields).FinishSetup;
    if (iVar2 != 0xb) {
      if (iVar2 == 1) {
        *(undefined1 *)((long)&(pCVar3->fields).LastGoodHeadAngle.fields.x + 1) = 1;
      }
      Characters_BaseCharacter__PlayAnimation
                ((Characters_BaseCharacter_o *)pCVar3,
                 *(System_String_o **)&(pCVar3->fields)._currentVelocity.fields,0.1,(MethodInfo *)0x0);
      Characters_Human__set_State(pCVar3,1,(MethodInfo *)0x0);
      UVar46.fields.z = fVar42;
      UVar46.fields.x = (float)(int)uVar39;
      UVar46.fields.y = (float)(int)((ulong)uVar39 >> 0x20);
      UVar44 = UnityEngine_Quaternion__LookRotation_4debb20(UVar46,(MethodInfo *)0x0);
      UVar46 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar44,(MethodInfo *)0x0);
      euler.fields.x = UVar46.fields.x * 57.29578;
      euler.fields.y = UVar46.fields.y * 57.29578;
      euler.fields.z = UVar46.fields.z * 57.29578;
      UVar46 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
      *(float *)&(pCVar3->fields).Detection = UVar46.fields.y;
      auVar10._4_8_ = 0;
      auVar10._0_4_ = UVar46.fields.y * 0.017453292;
      UVar45 = (UnityEngine_Quaternion_Fields)
               UnityEngine_Quaternion__Internal_FromEulerRad
                         ((UnityEngine_Vector3_o)(auVar10 << 0x20),(MethodInfo *)0x0);
      *(UnityEngine_Quaternion_Fields *)((long)&(pCVar3->fields)._lastMountMessage + 4) = UVar45;
    }
    if (*(int *)((long)&(pCVar3->fields).Weapon + 4) == 1) {
      pSVar17 = (pCVar3->fields).CurrentSpecial;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar15 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)pSVar17,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar15 == '\0') goto label_042fc3cb;
      pSVar17 = (pCVar3->fields).CurrentSpecial;
      if (pSVar17 == (System_String_o *)0x0) goto label_042fcb52;
      uStack_88 = pSVar17[0x10].fields;
      fStack_ec = *(float *)&pSVar17[0x11].klass;
    }
    else {
label_042fc3cb:
      lVar19 = *(long *)&(pCVar3->fields).Dead;
      if ((lVar19 == 0) ||
         (__this_00 = *(UnityEngine_Rigidbody_o **)(lVar19 + 0x18),
         __this_00 == (UnityEngine_Rigidbody_o *)0x0)) goto label_042fcb52;
      UVar46 = UnityEngine_Rigidbody__get_velocity(__this_00,(MethodInfo *)0x0);
      fStack_ec = UVar46.fields.z;
      uStack_88 = UVar46.fields._0_8_;
    }
    lVar19 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
    if (((lVar19 == 0) || (lVar19 = *(long *)(lVar19 + 0x58), lVar19 == 0)) ||
       (lVar19 = *(long *)(lVar19 + 0x48), lVar19 == 0)) goto label_042fcb52;
    fVar42 = (__this->fields).Speed;
    if (*(char *)(lVar19 + 0x11) == '\0') {
      if (g_data_057a6841 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        g_data_057a6841 = '\x01';
      }
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      fVar30 = fStack_ec * fStack_ec + uStack_88._4_4_ * uStack_88._4_4_ + (float)uStack_88 * (float)uStack_88
      ;
      if (fVar30 < 0.0) {
        fVar31 = sqrtf(fVar30);
        pSVar7 = (__this->fields).TSInfo;
      }
      else {
        fVar31 = SQRT(fVar30);
        pSVar7 = (__this->fields).TSInfo;
      }
      if ((pSVar7 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
         (plVar20 = (long *)(*(pSVar7->klass->vtable)._7_get_Item.methodPtr)
                                      (pSVar7,"SpeedMultiplier",(pSVar7->klass->vtable)._7_get_Item.method),
         plVar20 != (long *)0x0)) {
        fVar32 = (float)(**(code **)(*plVar20 + 0x388))(plVar20);
        pSVar7 = (__this->fields).TSInfo;
        if ((pSVar7 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
           (plVar20 = (long *)(*(pSVar7->klass->vtable)._7_get_Item.methodPtr)
                                        (pSVar7,"Range",(pSVar7->klass->vtable)._7_get_Item.method),
           plVar20 != (long *)0x0)) {
          fVar33 = (float)(**(code **)(*plVar20 + 0x388))(plVar20);
          if (g_data_057a6841 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
            g_data_057a6841 = '\x01';
            if (*(int *)(TypeInfo_Math + 0xe4) == 0) goto label_042fc9d0;
label_042fc985:
            if (0.0 <= fVar30) goto label_042fc996;
label_042fc9e6:
            fVar30 = sqrtf(fVar30);
            pSVar7 = (__this->fields).TSInfo;
          }
          else {
            if (*(int *)(TypeInfo_Math + 0xe4) != 0) goto label_042fc985;
label_042fc9d0:
            il2cpp_runtime_helper_02337ed0();
            if (fVar30 < 0.0) goto label_042fc9e6;
label_042fc996:
            fVar30 = SQRT(fVar30);
            pSVar7 = (__this->fields).TSInfo;
          }
          if ((pSVar7 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
             (plVar20 = (long *)(*(pSVar7->klass->vtable)._7_get_Item.methodPtr)
                                          (pSVar7,"RangeMultiplier",(pSVar7->klass->vtable)._7_get_Item.method),
             plVar20 != (long *)0x0)) {
            fVar34 = (float)(**(code **)(*plVar20 + 0x388))(plVar20);
            pSVar7 = (__this->fields).TSInfo;
            if ((pSVar7 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
               (plVar20 = (long *)(*(pSVar7->klass->vtable)._7_get_Item.methodPtr)
                                            (pSVar7,"RangeMin",(pSVar7->klass->vtable)._7_get_Item.method),
               plVar20 != (long *)0x0)) {
              fVar35 = (float)(**(code **)(*plVar20 + 0x388))(plVar20);
              pSVar7 = (__this->fields).TSInfo;
              if ((pSVar7 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
                 (plVar20 = (long *)(*(pSVar7->klass->vtable)._7_get_Item.methodPtr)
                                              (pSVar7,"RangeMax",(pSVar7->klass->vtable)._7_get_Item.method)
                 , plVar20 != (long *)0x0)) {
                fVar42 = fVar42 + fVar31 * fVar32;
                fVar31 = (float)(**(code **)(*plVar20 + 0x388))(plVar20);
                fVar33 = fVar33 + fVar30 * fVar34;
                if (fVar33 <= fVar31) {
                  fVar31 = fVar33;
                }
                fVar30 = (float)(~-(uint)(fVar35 <= fVar33) & (uint)fVar35 |
                                (uint)fVar31 & -(uint)(fVar35 <= fVar33)) / fVar42;
                iVar2 = *(int *)(TypeInfo_ProjectilePrefabs + 0xe4);
                goto joined_r0x042fcb47;
              }
            }
          }
        }
      }
      goto label_042fcb52;
    }
    fVar30 = (__this->fields).TravelTime;
    iVar2 = *(int *)(TypeInfo_ProjectilePrefabs + 0xe4);
joined_r0x042fcb47:
    if (iVar2 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar17 = (System_String_o *)**(undefined8 **)(TypeInfo_ProjectilePrefabs + 0xb8);
    forward.fields.z = fVar43;
    forward.fields.x = (float)(int)uVar36;
    forward.fields.y = (float)(int)((ulong)uVar36 >> 0x20);
    UVar44 = UnityEngine_Quaternion__LookRotation_4debb20(forward,(MethodInfo *)0x0);
    if (g_data_057a65d5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a65d5 = '\x01';
    }
    lVar19 = *(long *)&(pCVar3->fields).Dead;
    if ((lVar19 == 0) || (lVar19 = *(long *)(lVar19 + 0x20), lVar19 == 0)) goto label_042fcb52;
    gravity = **(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8);
    charViewId = *(int32_t *)(lVar19 + 0x94);
    settings = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,3);
    pIVar18 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8);
    if (settings == (System_Object_array *)0x0) goto label_042fcb52;
    if ((pIVar18 != (Il2CppObject *)0x0) && (lVar19 = il2cpp_runtime_helper_023051f0(pIVar18), lVar19 == 0))
    goto label_042fcb6c;
    if ((int)settings->max_length == 0) goto label_042fcb57;
    settings->m_Items[0] = pIVar18;
    il2cpp_runtime_helper_022b4080(settings->m_Items);
    lVar19 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x30);
    if (((lVar19 == 0) || (lVar19 = *(long *)(lVar19 + 0x20), lVar19 == 0)) ||
       (__this_01 = *(Utility_Color255_o **)(lVar19 + 0x18), __this_01 == (Utility_Color255_o *)0x0))
    goto label_042fcb52;
    Utility_Color255__ToColor(__this_01,(MethodInfo *)0x0);
    pIVar18 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(TypeInfo_Color);
    if ((pIVar18 == (Il2CppObject *)0x0) || (lVar19 = il2cpp_runtime_helper_023051f0(pIVar18), lVar19 != 0)) {
      if ((uint)settings->max_length < 2) goto label_042fcb57;
      settings->m_Items[1] = pIVar18;
      il2cpp_runtime_helper_022b4080(settings->m_Items + 1,pIVar18);
      pIVar18 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98);
      if ((pIVar18 != (Il2CppObject *)0x0) && (lVar19 = il2cpp_runtime_helper_023051f0(pIVar18), lVar19 == 0))
      goto label_042fcb6c;
      if ((uint)settings->max_length < 3) goto label_042fcb57;
      settings->m_Items[2] = pIVar18;
      il2cpp_runtime_helper_022b4080(settings->m_Items + 2,pIVar18);
      position.fields.z = fStack_d8;
      position.fields.x = (float)auStack_c8._0_4_;
      position.fields.y = (float)auStack_c8._4_4_;
      velocity.fields.z = fVar43 * fVar42;
      velocity.fields.x = (float)uVar36 * fVar42;
      velocity.fields.y = fVar29 * fVar42;
      pPVar21 = (Projectiles_ThunderspearProjectile_o *)
                Projectiles_ProjectileSpawner__Spawn
                          (pSVar17,position,UVar44,velocity,(UnityEngine_Vector3_o)gravity,fVar30,charViewId,
                           "",settings,(MethodInfo *)0x0);
      vtableDispatch = TypeInfo_ThunderspearProjectile;
      if (pPVar21 == (Projectiles_ThunderspearProjectile_o *)0x0) {
        (__this->fields).Current = (Projectiles_ThunderspearProjectile_o *)0x0;
label_042fc804:
        ppPVar23 = &(__this->fields).Current;
        il2cpp_runtime_helper_022b4080(ppPVar23);
        pPVar21 = *ppPVar23;
        if (pPVar21 != (Projectiles_ThunderspearProjectile_o *)0x0) {
          *(System_String_Fields *)&(pPVar21->fields).InitialPlayerVelocity.fields = uStack_88;
          (pPVar21->fields).InitialPlayerVelocity.fields.z = fStack_ec;
          (__this->fields)._delayTimeLeft = (__this->fields).Delay;
          if ((char)(pCVar3->fields).CustomDamage != '\0') {
            return;
          }
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pCVar24 = *(Characters_Human_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
          if (pCVar24 != (Characters_Human_o *)0x0) {
            bVar12 = (TypeInfo_InGameMenu->_2).naturalAligment;
            if (((pCVar24->klass->_2).naturalAligment < bVar12) ||
               ((pCVar24->klass->_2).typeHierarchy[(ulong)bVar12 - 1] != TypeInfo_InGameMenu)) goto label_042fcb67;
            __this_02 = *(UI_HUDBottomHandler_o **)&(pCVar24->fields)._cameraFPS;
            if (__this_02 != (UI_HUDBottomHandler_o *)0x0) {
              UI_HUDBottomHandler__ShootTS(__this_02,(MethodInfo *)0x0);
              return;
            }
          }
        }
        goto label_042fcb52;
      }
      bVar12 = (TypeInfo_ThunderspearProjectile->_2).naturalAligment;
      if ((bVar12 <= (pPVar21->klass->_2).naturalAligment) &&
         ((pPVar21->klass->_2).typeHierarchy[(ulong)bVar12 - 1] == TypeInfo_ThunderspearProjectile)) {
        (__this->fields).Current = pPVar21;
        if ((bVar12 <= (pPVar21->klass->_2).naturalAligment) &&
           ((pPVar21->klass->_2).typeHierarchy[(ulong)bVar12 - 1] == vtableDispatch))
        goto label_042fc804;
      }
      goto label_042fcb5c;
    }
  }
label_042fcb6c:
  puVar22 = (undefined8 *)il2cpp_runtime_helper_0231b270();
  lVar19 = 0;
  il2cpp_runtime_helper_022b2b10();
  if ((lVar19 != 0) && (lVar19 = *(long *)(lVar19 + 0x130), lVar19 != 0)) {
    if (extraout_DL == '\0') {
      pUVar25 = *(UnityEngine_GameObject_o **)(lVar19 + 0xc0);
      puVar22 = (undefined8 *)0x0;
      if (pUVar25 != (UnityEngine_GameObject_o *)0x0) goto label_042fcbb0;
    }
    else {
      pUVar25 = *(UnityEngine_GameObject_o **)(lVar19 + 0xb8);
      if (pUVar25 != (UnityEngine_GameObject_o *)0x0) {
label_042fcbb0:
        UnityEngine_GameObject__get_activeSelf(pUVar25,(MethodInfo *)0x0);
        return;
      }
      puVar22 = (undefined8 *)0x0;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf02 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    puVar22 = &MethodInfo_Boolean_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057adf02 = '\x01';
  }
  lVar19 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if (((lVar19 != 0) && (lVar19 = *(long *)(lVar19 + 0x58), lVar19 != 0)) &&
     (lVar19 = *(long *)(lVar19 + 0x48), lVar19 != 0)) {
    if (*(char *)(lVar19 + 0x11) != '\0') {
      return;
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf00 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adf00 = '\x01';
  }
  pUVar26 = (UnityEngine_Object_o *)puVar22[10];
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  cVar13 = '\0';
  bVar15 = UnityEngine_Object__op_Inequality(pUVar26,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (((char)bVar15 == '\0') || (puVar22[10] != 0)) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (cVar13 == '\0') {
    return;
  }
  if (g_data_057adf00 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adf00 = '\x01';
  }
  x = pUVar26[3].monitor;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar15 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar15 == '\0') {
label_042fcd13:
    cVar13 = (*pUVar26->klass[1]._1.byval_arg.data)
                       (pUVar26,*(undefined8 *)&pUVar26->klass[1]._1.byval_arg.bits);
    if (cVar13 == '\0') {
      return;
    }
    (*(code *)pUVar26->klass[1]._1.declaringType)(pUVar26,pUVar26->klass[1]._1.parent);
    vtableDispatch = pUVar26->klass[1]._1.element_class;
    (*(code *)vtableDispatch)
              (pUVar26,pUVar26->klass[1]._1.castClass,extraout_RDX,vtableDispatch);
    return;
  }
  ppvVar1 = &pUVar26[3].monitor;
  pPVar21 = *ppvVar1;
  if (pPVar21 != (Projectiles_ThunderspearProjectile_o *)0x0) {
    if (((char)(pPVar21->fields).Disabled == '\0') && (*(float *)&pUVar26[4].monitor <= 0.0)) {
      Projectiles_ThunderspearProjectile__Explode(pPVar21,(MethodInfo *)0x0);
      *ppvVar1 = (void *)0x0;
      il2cpp_runtime_helper_022b4080(ppvVar1,0);
      return;
    }
    goto label_042fcd13;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf01 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adf01 = '\x01';
  }
  pCVar3 = *(Characters_Human_o **)&(pPVar21->fields)._correctPosition.fields.y;
  if (pCVar3 == (Characters_Human_o *)0x0) goto label_042fcfec;
  bVar12 = (TypeInfo_Human->_2).naturalAligment;
  if (((pCVar3->klass->_2).naturalAligment < bVar12) ||
     ((pCVar3->klass->_2).typeHierarchy[(ulong)bVar12 - 1] != TypeInfo_Human)) {
    il2cpp_runtime_helper_022b2fd0(pCVar3);
    goto label_042fcfec;
  }
  if (*(char *)&(pCVar3->fields).FeedVictimName != '\0') {
    pUVar26 = *(UnityEngine_Object_o **)&(pPVar21->fields)._correctVelocity.fields.z;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar15 = UnityEngine_Object__op_Inequality(pUVar26,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar15 == '\0') {
      return;
    }
    pfVar27 = &(pPVar21->fields)._correctVelocity.fields.z;
    plVar20 = *(long **)pfVar27;
    if (plVar20 != (long *)0x0) {
      (**(code **)(*plVar20 + 0x248))(plVar20,*(undefined8 *)(*plVar20 + 0x250));
      *(undefined8 *)pfVar27 = 0;
      il2cpp_runtime_helper_022b4080(pfVar27,0);
      return;
    }
    goto label_042fcfec;
  }
  cVar13 = (*(pPVar21->klass->vtable)._6_SendCustomStream.methodPtr)(pPVar21);
  if ((cVar13 != '\0') && ((pCVar3->fields).FinishSetup != 4)) {
    lVar19 = *(long *)&(pCVar3->fields).MountState;
    if ((lVar19 == 0) ||
       (pUVar25 = *(UnityEngine_GameObject_o **)(lVar19 + 0xb8), pUVar25 == (UnityEngine_GameObject_o *)0x0))
    goto label_042fcfec;
    bVar15 = UnityEngine_GameObject__get_activeSelf(pUVar25,(MethodInfo *)0x0);
    if ((char)bVar15 != '\0') {
      lVar19 = *(long *)&(pCVar3->fields).MountState;
      if ((lVar19 == 0) ||
         (pUVar25 = *(UnityEngine_GameObject_o **)(lVar19 + 0xc0), pUVar25 == (UnityEngine_GameObject_o *)0x0)
         ) goto label_042fcfec;
      bVar15 = UnityEngine_GameObject__get_activeSelf(pUVar25,(MethodInfo *)0x0);
      if ((char)bVar15 != '\0') goto label_042fcf76;
    }
    if (g_data_057adf02 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
      g_data_057adf02 = '\x01';
    }
    lVar19 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
    if (((lVar19 == 0) || (lVar19 = *(long *)(lVar19 + 0x58), lVar19 == 0)) ||
       (lVar19 = *(long *)(lVar19 + 0x48), lVar19 == 0)) goto label_042fcfec;
    if (((*(char *)(lVar19 + 0x11) != '\0') || ((pPVar21->fields)._correctRotation.fields.w != 2.8026e-45)) ||
       (1 < (int)(pPVar21->fields)._correctVelocity.fields.x)) {
      Characters_Human__SetThunderspears(pCVar3,1,1,(MethodInfo *)0x0);
    }
  }
label_042fcf76:
  pUVar26 = *(UnityEngine_Object_o **)&(pPVar21->fields)._correctVelocity.fields.z;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar15 = UnityEngine_Object__op_Inequality(pUVar26,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar15 != '\0') {
    lVar19 = *(long *)&(pPVar21->fields)._correctVelocity.fields.z;
    if (lVar19 == 0) {
label_042fcfec:
      il2cpp_runtime_helper_022b2c90();
      return;
    }
    if (*(char *)(lVar19 + 0x28) == '\0') {
      fVar43 = (float)(pPVar21->fields)._syncCamera;
      fVar42 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
      (pPVar21->fields)._syncCamera = (bool_conflict)(fVar43 - fVar42);
      return;
    }
  }
  return;
}


// Characters.ThunderspearWeapon$$HasActiveProjectile
// il2cpp: bool Characters_ThunderspearWeapon__HasActiveProjectile (Characters_ThunderspearWeapon_o* __this, const MethodInfo* method);
// 0x42fcc30

bool_conflict
Characters_ThunderspearWeapon__HasActiveProjectile(Characters_ThunderspearWeapon_o *__this,MethodInfo *method)

{
  float fVar1;
  byte bVar2;
  UnityEngine_Object_o *pUVar3;
  Il2CppMethodPointer vtableDispatch;
  Characters_Human_o *__this_00;
  long *plVar4;
  long lVar5;
  UnityEngine_GameObject_o *pUVar6;
  char cVar7;
  bool_conflict bVar8;
  uint uVar9;
  bool_conflict extraout_EAX;
  undefined8 uVar11;
  undefined8 extraout_RDX;
  Projectiles_ThunderspearProjectile_o *x;
  Projectiles_ThunderspearProjectile_o *pPVar12;
  float *pfVar13;
  float fVar14;
  ulong uVar10;
  
  if (g_data_057adf00 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adf00 = '\x01';
  }
  x = (__this->fields).Current;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  cVar7 = '\0';
  bVar8 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    return 0;
  }
  pPVar12 = (__this->fields).Current;
  if (pPVar12 != (Projectiles_ThunderspearProjectile_o *)0x0) {
    return (uint)((char)(pPVar12->fields).Disabled == '\0');
  }
  bVar8 = il2cpp_runtime_helper_022b2c90();
  if (cVar7 == '\0') {
    return bVar8;
  }
  if (g_data_057adf00 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adf00 = '\x01';
  }
  pUVar3 = *(UnityEngine_Object_o **)&(x->fields)._correctVelocity.fields.z;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar8 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
label_042fcd13:
    bVar8 = (*(x->klass->vtable)._6_SendCustomStream.methodPtr)
                      (x,(x->klass->vtable)._6_SendCustomStream.method);
    if ((char)bVar8 == '\0') {
      return bVar8;
    }
    (*(x->klass->vtable)._9_Update.methodPtr)(x,(x->klass->vtable)._9_Update.method);
    vtableDispatch = (x->klass->vtable)._8_OnPhotonSerializeView.methodPtr;
    bVar8 = (*vtableDispatch)
                      (x,(x->klass->vtable)._8_OnPhotonSerializeView.method,extraout_RDX,vtableDispatch
                      );
    return bVar8;
  }
  pfVar13 = &(x->fields)._correctVelocity.fields.z;
  pPVar12 = *(Projectiles_ThunderspearProjectile_o **)pfVar13;
  if (pPVar12 != (Projectiles_ThunderspearProjectile_o *)0x0) {
    if (((char)(pPVar12->fields).Disabled == '\0') && ((float)(x->fields)._syncCamera <= 0.0)) {
      Projectiles_ThunderspearProjectile__Explode(pPVar12,(MethodInfo *)0x0);
      *(undefined8 *)pfVar13 = 0;
      bVar8 = il2cpp_runtime_helper_022b4080(pfVar13,0);
      return bVar8;
    }
    goto label_042fcd13;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf01 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adf01 = '\x01';
  }
  __this_00 = *(Characters_Human_o **)&(pPVar12->fields)._correctPosition.fields.y;
  if (__this_00 == (Characters_Human_o *)0x0) goto label_042fcfec;
  bVar2 = (TypeInfo_Human->_2).naturalAligment;
  if (((__this_00->klass->_2).naturalAligment < bVar2) ||
     ((__this_00->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_Human)) {
    il2cpp_runtime_helper_022b2fd0(__this_00);
    goto label_042fcfec;
  }
  if (*(char *)&(__this_00->fields).FeedVictimName != '\0') {
    pUVar3 = *(UnityEngine_Object_o **)&(pPVar12->fields)._correctVelocity.fields.z;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar9 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    uVar10 = (ulong)uVar9;
    if ((char)uVar9 != '\0') {
      pfVar13 = &(pPVar12->fields)._correctVelocity.fields.z;
      plVar4 = *(long **)pfVar13;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x248))(plVar4,*(undefined8 *)(*plVar4 + 0x250));
        *(undefined8 *)pfVar13 = 0;
        bVar8 = il2cpp_runtime_helper_022b4080(pfVar13,0);
        return bVar8;
      }
      goto label_042fcfec;
    }
    goto label_042fcfb1;
  }
  cVar7 = (*(pPVar12->klass->vtable)._6_SendCustomStream.methodPtr)(pPVar12);
  if ((cVar7 != '\0') && ((__this_00->fields).FinishSetup != 4)) {
    lVar5 = *(long *)&(__this_00->fields).MountState;
    if ((lVar5 == 0) ||
       (pUVar6 = *(UnityEngine_GameObject_o **)(lVar5 + 0xb8), pUVar6 == (UnityEngine_GameObject_o *)0x0))
    goto label_042fcfec;
    bVar8 = UnityEngine_GameObject__get_activeSelf(pUVar6,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      lVar5 = *(long *)&(__this_00->fields).MountState;
      if ((lVar5 == 0) ||
         (pUVar6 = *(UnityEngine_GameObject_o **)(lVar5 + 0xc0), pUVar6 == (UnityEngine_GameObject_o *)0x0))
      goto label_042fcfec;
      bVar8 = UnityEngine_GameObject__get_activeSelf(pUVar6,(MethodInfo *)0x0);
      if ((char)bVar8 != '\0') goto label_042fcf76;
    }
    if (g_data_057adf02 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
      g_data_057adf02 = '\x01';
    }
    lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
    if (((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x58), lVar5 == 0)) ||
       (lVar5 = *(long *)(lVar5 + 0x48), lVar5 == 0)) goto label_042fcfec;
    if (((*(char *)(lVar5 + 0x11) != '\0') || ((pPVar12->fields)._correctRotation.fields.w != 2.8026e-45)) ||
       (1 < (int)(pPVar12->fields)._correctVelocity.fields.x)) {
      Characters_Human__SetThunderspears(__this_00,1,1,(MethodInfo *)0x0);
    }
  }
label_042fcf76:
  pUVar3 = *(UnityEngine_Object_o **)&(pPVar12->fields)._correctVelocity.fields.z;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar9 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  uVar10 = (ulong)uVar9;
  if ((char)uVar9 != '\0') {
    uVar10 = *(ulong *)&(pPVar12->fields)._correctVelocity.fields.z;
    if (uVar10 == 0) {
label_042fcfec:
      uVar11 = il2cpp_runtime_helper_022b2c90();
      return (bool_conflict)CONCAT71((int7)((ulong)uVar11 >> 8),1);
    }
    if (*(char *)(uVar10 + 0x28) == '\0') {
      fVar1 = (float)(pPVar12->fields)._syncCamera;
      fVar14 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
      (pPVar12->fields)._syncCamera = (bool_conflict)(fVar1 - fVar14);
      return extraout_EAX;
    }
  }
label_042fcfb1:
  return (bool_conflict)uVar10;
}


// Characters.ThunderspearWeapon$$SetInput
// il2cpp: void Characters_ThunderspearWeapon__SetInput (Characters_ThunderspearWeapon_o* __this, bool key, const MethodInfo* method);
// 0x42fcca0

void Characters_ThunderspearWeapon__SetInput
               (Characters_ThunderspearWeapon_o *__this,bool_conflict key,MethodInfo *method)

{
  Projectiles_ThunderspearProjectile_o **ppPVar1;
  float fVar2;
  byte bVar3;
  Il2CppMethodPointer vtableDispatch;
  Characters_Human_o *__this_00;
  UnityEngine_Object_o *pUVar4;
  long *plVar5;
  long lVar6;
  UnityEngine_GameObject_o *pUVar7;
  char cVar8;
  bool_conflict bVar9;
  undefined8 extraout_RDX;
  Projectiles_ThunderspearProjectile_o *pPVar10;
  float *pfVar11;
  float fVar12;
  
  if ((char)key == '\0') {
    return;
  }
  if (g_data_057adf00 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adf00 = '\x01';
  }
  pPVar10 = (__this->fields).Current;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar9 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pPVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 == '\0') {
label_042fcd13:
    cVar8 = (*(__this->klass->vtable)._6_CanUse.methodPtr)(__this,(__this->klass->vtable)._6_CanUse.method);
    if (cVar8 == '\0') {
      return;
    }
    (*(__this->klass->vtable)._9_Activate.methodPtr)(__this,(__this->klass->vtable)._9_Activate.method);
    vtableDispatch = (__this->klass->vtable)._8_OnUse.methodPtr;
    (*vtableDispatch)
              (__this,(__this->klass->vtable)._8_OnUse.method,extraout_RDX,vtableDispatch);
    return;
  }
  ppPVar1 = &(__this->fields).Current;
  pPVar10 = *ppPVar1;
  if (pPVar10 != (Projectiles_ThunderspearProjectile_o *)0x0) {
    if (((char)(pPVar10->fields).Disabled == '\0') && ((__this->fields)._delayTimeLeft <= 0.0)) {
      Projectiles_ThunderspearProjectile__Explode(pPVar10,(MethodInfo *)0x0);
      *ppPVar1 = (Projectiles_ThunderspearProjectile_o *)0x0;
      il2cpp_runtime_helper_022b4080(ppPVar1,0);
      return;
    }
    goto label_042fcd13;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf01 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adf01 = '\x01';
  }
  __this_00 = *(Characters_Human_o **)&(pPVar10->fields)._correctPosition.fields.y;
  if (__this_00 == (Characters_Human_o *)0x0) goto label_042fcfec;
  bVar3 = (TypeInfo_Human->_2).naturalAligment;
  if (((__this_00->klass->_2).naturalAligment < bVar3) ||
     ((__this_00->klass->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_Human)) {
    il2cpp_runtime_helper_022b2fd0(__this_00);
    goto label_042fcfec;
  }
  if (*(char *)&(__this_00->fields).FeedVictimName != '\0') {
    pUVar4 = *(UnityEngine_Object_o **)&(pPVar10->fields)._correctVelocity.fields.z;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar9 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar9 == '\0') {
      return;
    }
    pfVar11 = &(pPVar10->fields)._correctVelocity.fields.z;
    plVar5 = *(long **)pfVar11;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x248))(plVar5,*(undefined8 *)(*plVar5 + 0x250));
      *(undefined8 *)pfVar11 = 0;
      il2cpp_runtime_helper_022b4080(pfVar11,0);
      return;
    }
    goto label_042fcfec;
  }
  cVar8 = (*(pPVar10->klass->vtable)._6_SendCustomStream.methodPtr)(pPVar10);
  if ((cVar8 != '\0') && ((__this_00->fields).FinishSetup != 4)) {
    lVar6 = *(long *)&(__this_00->fields).MountState;
    if ((lVar6 == 0) ||
       (pUVar7 = *(UnityEngine_GameObject_o **)(lVar6 + 0xb8), pUVar7 == (UnityEngine_GameObject_o *)0x0))
    goto label_042fcfec;
    bVar9 = UnityEngine_GameObject__get_activeSelf(pUVar7,(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      lVar6 = *(long *)&(__this_00->fields).MountState;
      if ((lVar6 == 0) ||
         (pUVar7 = *(UnityEngine_GameObject_o **)(lVar6 + 0xc0), pUVar7 == (UnityEngine_GameObject_o *)0x0))
      goto label_042fcfec;
      bVar9 = UnityEngine_GameObject__get_activeSelf(pUVar7,(MethodInfo *)0x0);
      if ((char)bVar9 != '\0') goto label_042fcf76;
    }
    if (g_data_057adf02 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
      g_data_057adf02 = '\x01';
    }
    lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
    if (((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x58), lVar6 == 0)) ||
       (lVar6 = *(long *)(lVar6 + 0x48), lVar6 == 0)) goto label_042fcfec;
    if (((*(char *)(lVar6 + 0x11) != '\0') || ((pPVar10->fields)._correctRotation.fields.w != 2.8026e-45)) ||
       (1 < (int)(pPVar10->fields)._correctVelocity.fields.x)) {
      Characters_Human__SetThunderspears(__this_00,1,1,(MethodInfo *)0x0);
    }
  }
label_042fcf76:
  pUVar4 = *(UnityEngine_Object_o **)&(pPVar10->fields)._correctVelocity.fields.z;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar9 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 != '\0') {
    lVar6 = *(long *)&(pPVar10->fields)._correctVelocity.fields.z;
    if (lVar6 == 0) {
label_042fcfec:
      il2cpp_runtime_helper_022b2c90();
      return;
    }
    if (*(char *)(lVar6 + 0x28) == '\0') {
      fVar2 = (float)(pPVar10->fields)._syncCamera;
      fVar12 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
      (pPVar10->fields)._syncCamera = (bool_conflict)(fVar2 - fVar12);
      return;
    }
  }
  return;
}


// Characters.ThunderspearWeapon$$OnFixedUpdate
// il2cpp: void Characters_ThunderspearWeapon__OnFixedUpdate (Characters_ThunderspearWeapon_o* __this, const MethodInfo* method);
// 0x42fcd90

void Characters_ThunderspearWeapon__OnFixedUpdate(Characters_ThunderspearWeapon_o *__this,MethodInfo *method)

{
  float fVar1;
  byte bVar2;
  Characters_Human_o *__this_00;
  Projectiles_ThunderspearProjectile_o *pPVar3;
  long lVar4;
  UnityEngine_GameObject_o *pUVar5;
  char cVar6;
  bool_conflict bVar7;
  Projectiles_ThunderspearProjectile_o **ppPVar8;
  float fVar9;
  
  if (g_data_057adf01 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adf01 = '\x01';
  }
  __this_00 = (Characters_Human_o *)(__this->fields)._owner;
  if (__this_00 == (Characters_Human_o *)0x0) goto label_042fcfec;
  bVar2 = (TypeInfo_Human->_2).naturalAligment;
  if (((__this_00->klass->_2).naturalAligment < bVar2) ||
     ((__this_00->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_Human)) {
    il2cpp_runtime_helper_022b2fd0(__this_00);
    goto label_042fcfec;
  }
  if (*(char *)&(__this_00->fields).FeedVictimName != '\0') {
    pPVar3 = (__this->fields).Current;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar7 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pPVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      return;
    }
    ppPVar8 = &(__this->fields).Current;
    pPVar3 = *ppPVar8;
    if (pPVar3 != (Projectiles_ThunderspearProjectile_o *)0x0) {
      (*(pPVar3->klass->vtable)._17_DestroySelf.methodPtr)
                (pPVar3,(pPVar3->klass->vtable)._17_DestroySelf.method);
      *ppPVar8 = (Projectiles_ThunderspearProjectile_o *)0x0;
      il2cpp_runtime_helper_022b4080(ppPVar8,0);
      return;
    }
    goto label_042fcfec;
  }
  cVar6 = (*(__this->klass->vtable)._6_CanUse.methodPtr)(__this);
  if ((cVar6 != '\0') && ((__this_00->fields).FinishSetup != 4)) {
    lVar4 = *(long *)&(__this_00->fields).MountState;
    if ((lVar4 == 0) ||
       (pUVar5 = *(UnityEngine_GameObject_o **)(lVar4 + 0xb8), pUVar5 == (UnityEngine_GameObject_o *)0x0))
    goto label_042fcfec;
    bVar7 = UnityEngine_GameObject__get_activeSelf(pUVar5,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      lVar4 = *(long *)&(__this_00->fields).MountState;
      if ((lVar4 == 0) ||
         (pUVar5 = *(UnityEngine_GameObject_o **)(lVar4 + 0xc0), pUVar5 == (UnityEngine_GameObject_o *)0x0))
      goto label_042fcfec;
      bVar7 = UnityEngine_GameObject__get_activeSelf(pUVar5,(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') goto label_042fcf76;
    }
    if (g_data_057adf02 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
      g_data_057adf02 = '\x01';
    }
    lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
    if (((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0x58), lVar4 == 0)) ||
       (lVar4 = *(long *)(lVar4 + 0x48), lVar4 == 0)) goto label_042fcfec;
    if (((*(char *)(lVar4 + 0x11) != '\0') || ((__this->fields).MaxRound != 2)) ||
       (1 < (__this->fields).RoundLeft)) {
      Characters_Human__SetThunderspears(__this_00,1,1,(MethodInfo *)0x0);
    }
  }
label_042fcf76:
  pPVar3 = (__this->fields).Current;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pPVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    pPVar3 = (__this->fields).Current;
    if (pPVar3 == (Projectiles_ThunderspearProjectile_o *)0x0) {
label_042fcfec:
      il2cpp_runtime_helper_022b2c90();
      return;
    }
    if ((char)(pPVar3->fields).Disabled == '\0') {
      fVar1 = (__this->fields)._delayTimeLeft;
      fVar9 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
      (__this->fields)._delayTimeLeft = fVar1 - fVar9;
      return;
    }
  }
  return;
}


// Characters.ThunderspearWeapon$$IsModelActive
// il2cpp: bool Characters_ThunderspearWeapon__IsModelActive (Characters_ThunderspearWeapon_o* __this, Characters_Human_o* human, bool left, const MethodInfo* method);
// 0x42fcb80

bool_conflict
Characters_ThunderspearWeapon__IsModelActive
          (Characters_ThunderspearWeapon_o *__this,Characters_Human_o *human,bool_conflict left,
          MethodInfo *method)

{
  float fVar1;
  byte bVar2;
  long lVar3;
  UnityEngine_Object_o *pUVar4;
  Il2CppMethodPointer vtableDispatch;
  Characters_Human_o *__this_00;
  long *plVar5;
  char cVar6;
  bool_conflict bVar7;
  uint uVar8;
  bool_conflict extraout_EAX;
  undefined8 uVar10;
  undefined8 extraout_RDX;
  UnityEngine_GameObject_o *pUVar11;
  Characters_ThunderspearWeapon_o *pCVar12;
  Projectiles_ThunderspearProjectile_o *x;
  Projectiles_ThunderspearProjectile_o *pPVar13;
  float *pfVar14;
  float fVar15;
  ulong uVar9;
  
  if ((human != (Characters_Human_o *)0x0) && (lVar3 = *(long *)&(human->fields).MountState, lVar3 != 0)) {
    if ((char)left == '\0') {
      pUVar11 = *(UnityEngine_GameObject_o **)(lVar3 + 0xc0);
      __this = (Characters_ThunderspearWeapon_o *)0x0;
      if (pUVar11 != (UnityEngine_GameObject_o *)0x0) goto label_042fcbb0;
    }
    else {
      pUVar11 = *(UnityEngine_GameObject_o **)(lVar3 + 0xb8);
      if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
label_042fcbb0:
        bVar7 = UnityEngine_GameObject__get_activeSelf(pUVar11,(MethodInfo *)0x0);
        return bVar7;
      }
      __this = (Characters_ThunderspearWeapon_o *)0x0;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar12 = __this;
  if (g_data_057adf02 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    pCVar12 = (Characters_ThunderspearWeapon_o *)&MethodInfo_Boolean_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057adf02 = '\x01';
  }
  lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if (((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x58), lVar3 != 0)) &&
     (lVar3 = *(long *)(lVar3 + 0x48), lVar3 != 0)) {
    if (*(char *)(lVar3 + 0x11) == '\0') {
      return (bool_conflict)CONCAT71((int7)((ulong)lVar3 >> 8),(__this->fields).MaxRound == 2);
    }
    return 0;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf00 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adf00 = '\x01';
  }
  x = (pCVar12->fields).Current;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  cVar6 = '\0';
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    return 0;
  }
  pPVar13 = (pCVar12->fields).Current;
  if (pPVar13 != (Projectiles_ThunderspearProjectile_o *)0x0) {
    return (uint)((char)(pPVar13->fields).Disabled == '\0');
  }
  bVar7 = il2cpp_runtime_helper_022b2c90();
  if (cVar6 == '\0') {
    return bVar7;
  }
  if (g_data_057adf00 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adf00 = '\x01';
  }
  pUVar4 = *(UnityEngine_Object_o **)&(x->fields)._correctVelocity.fields.z;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar7 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
label_042fcd13:
    bVar7 = (*(x->klass->vtable)._6_SendCustomStream.methodPtr)
                      (x,(x->klass->vtable)._6_SendCustomStream.method);
    if ((char)bVar7 == '\0') {
      return bVar7;
    }
    (*(x->klass->vtable)._9_Update.methodPtr)(x,(x->klass->vtable)._9_Update.method);
    vtableDispatch = (x->klass->vtable)._8_OnPhotonSerializeView.methodPtr;
    bVar7 = (*vtableDispatch)
                      (x,(x->klass->vtable)._8_OnPhotonSerializeView.method,extraout_RDX,vtableDispatch
                      );
    return bVar7;
  }
  pfVar14 = &(x->fields)._correctVelocity.fields.z;
  pPVar13 = *(Projectiles_ThunderspearProjectile_o **)pfVar14;
  if (pPVar13 != (Projectiles_ThunderspearProjectile_o *)0x0) {
    if (((char)(pPVar13->fields).Disabled == '\0') && ((float)(x->fields)._syncCamera <= 0.0)) {
      Projectiles_ThunderspearProjectile__Explode(pPVar13,(MethodInfo *)0x0);
      *(undefined8 *)pfVar14 = 0;
      bVar7 = il2cpp_runtime_helper_022b4080(pfVar14,0);
      return bVar7;
    }
    goto label_042fcd13;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf01 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adf01 = '\x01';
  }
  __this_00 = *(Characters_Human_o **)&(pPVar13->fields)._correctPosition.fields.y;
  if (__this_00 == (Characters_Human_o *)0x0) goto label_042fcfec;
  bVar2 = (TypeInfo_Human->_2).naturalAligment;
  if (((__this_00->klass->_2).naturalAligment < bVar2) ||
     ((__this_00->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_Human)) {
    il2cpp_runtime_helper_022b2fd0(__this_00);
    goto label_042fcfec;
  }
  if (*(char *)&(__this_00->fields).FeedVictimName != '\0') {
    pUVar4 = *(UnityEngine_Object_o **)&(pPVar13->fields)._correctVelocity.fields.z;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar8 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    uVar9 = (ulong)uVar8;
    if ((char)uVar8 != '\0') {
      pfVar14 = &(pPVar13->fields)._correctVelocity.fields.z;
      plVar5 = *(long **)pfVar14;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x248))(plVar5,*(undefined8 *)(*plVar5 + 0x250));
        *(undefined8 *)pfVar14 = 0;
        bVar7 = il2cpp_runtime_helper_022b4080(pfVar14,0);
        return bVar7;
      }
      goto label_042fcfec;
    }
    goto label_042fcfb1;
  }
  cVar6 = (*(pPVar13->klass->vtable)._6_SendCustomStream.methodPtr)(pPVar13);
  if ((cVar6 != '\0') && ((__this_00->fields).FinishSetup != 4)) {
    lVar3 = *(long *)&(__this_00->fields).MountState;
    if ((lVar3 == 0) ||
       (pUVar11 = *(UnityEngine_GameObject_o **)(lVar3 + 0xb8), pUVar11 == (UnityEngine_GameObject_o *)0x0))
    goto label_042fcfec;
    bVar7 = UnityEngine_GameObject__get_activeSelf(pUVar11,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      lVar3 = *(long *)&(__this_00->fields).MountState;
      if ((lVar3 == 0) ||
         (pUVar11 = *(UnityEngine_GameObject_o **)(lVar3 + 0xc0), pUVar11 == (UnityEngine_GameObject_o *)0x0))
      goto label_042fcfec;
      bVar7 = UnityEngine_GameObject__get_activeSelf(pUVar11,(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') goto label_042fcf76;
    }
    if (g_data_057adf02 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
      g_data_057adf02 = '\x01';
    }
    lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
    if (((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0x58), lVar3 == 0)) ||
       (lVar3 = *(long *)(lVar3 + 0x48), lVar3 == 0)) goto label_042fcfec;
    if (((*(char *)(lVar3 + 0x11) != '\0') || ((pPVar13->fields)._correctRotation.fields.w != 2.8026e-45)) ||
       (1 < (int)(pPVar13->fields)._correctVelocity.fields.x)) {
      Characters_Human__SetThunderspears(__this_00,1,1,(MethodInfo *)0x0);
    }
  }
label_042fcf76:
  pUVar4 = *(UnityEngine_Object_o **)&(pPVar13->fields)._correctVelocity.fields.z;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar8 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  uVar9 = (ulong)uVar8;
  if ((char)uVar8 != '\0') {
    uVar9 = *(ulong *)&(pPVar13->fields)._correctVelocity.fields.z;
    if (uVar9 == 0) {
label_042fcfec:
      uVar10 = il2cpp_runtime_helper_022b2c90();
      return (bool_conflict)CONCAT71((int7)((ulong)uVar10 >> 8),1);
    }
    if (*(char *)(uVar9 + 0x28) == '\0') {
      fVar1 = (float)(pPVar13->fields)._syncCamera;
      fVar15 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
      (pPVar13->fields)._syncCamera = (bool_conflict)(fVar1 - fVar15);
      return extraout_EAX;
    }
  }
label_042fcfb1:
  return (bool_conflict)uVar9;
}


// Characters.ThunderspearWeapon$$IsTwoShotMode
// il2cpp: bool Characters_ThunderspearWeapon__IsTwoShotMode (Characters_ThunderspearWeapon_o* __this, const MethodInfo* method);
// 0x42fcbc0

bool_conflict
Characters_ThunderspearWeapon__IsTwoShotMode(Characters_ThunderspearWeapon_o *__this,MethodInfo *method)

{
  float fVar1;
  byte bVar2;
  long lVar3;
  UnityEngine_Object_o *pUVar4;
  Il2CppMethodPointer vtableDispatch;
  Characters_Human_o *__this_00;
  long *plVar5;
  UnityEngine_GameObject_o *pUVar6;
  char cVar7;
  bool_conflict bVar8;
  uint uVar9;
  bool_conflict extraout_EAX;
  undefined8 uVar11;
  undefined8 extraout_RDX;
  Characters_ThunderspearWeapon_o *pCVar12;
  Projectiles_ThunderspearProjectile_o *x;
  Projectiles_ThunderspearProjectile_o *pPVar13;
  float *pfVar14;
  float fVar15;
  ulong uVar10;
  
  pCVar12 = __this;
  if (g_data_057adf02 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    pCVar12 = (Characters_ThunderspearWeapon_o *)&MethodInfo_Boolean_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057adf02 = '\x01';
  }
  lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if (((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x58), lVar3 != 0)) &&
     (lVar3 = *(long *)(lVar3 + 0x48), lVar3 != 0)) {
    if (*(char *)(lVar3 + 0x11) == '\0') {
      return (bool_conflict)CONCAT71((int7)((ulong)lVar3 >> 8),(__this->fields).MaxRound == 2);
    }
    return 0;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf00 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adf00 = '\x01';
  }
  x = (pCVar12->fields).Current;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  cVar7 = '\0';
  bVar8 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    return 0;
  }
  pPVar13 = (pCVar12->fields).Current;
  if (pPVar13 != (Projectiles_ThunderspearProjectile_o *)0x0) {
    return (uint)((char)(pPVar13->fields).Disabled == '\0');
  }
  bVar8 = il2cpp_runtime_helper_022b2c90();
  if (cVar7 == '\0') {
    return bVar8;
  }
  if (g_data_057adf00 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adf00 = '\x01';
  }
  pUVar4 = *(UnityEngine_Object_o **)&(x->fields)._correctVelocity.fields.z;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar8 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
label_042fcd13:
    bVar8 = (*(x->klass->vtable)._6_SendCustomStream.methodPtr)
                      (x,(x->klass->vtable)._6_SendCustomStream.method);
    if ((char)bVar8 == '\0') {
      return bVar8;
    }
    (*(x->klass->vtable)._9_Update.methodPtr)(x,(x->klass->vtable)._9_Update.method);
    vtableDispatch = (x->klass->vtable)._8_OnPhotonSerializeView.methodPtr;
    bVar8 = (*vtableDispatch)
                      (x,(x->klass->vtable)._8_OnPhotonSerializeView.method,extraout_RDX,vtableDispatch
                      );
    return bVar8;
  }
  pfVar14 = &(x->fields)._correctVelocity.fields.z;
  pPVar13 = *(Projectiles_ThunderspearProjectile_o **)pfVar14;
  if (pPVar13 != (Projectiles_ThunderspearProjectile_o *)0x0) {
    if (((char)(pPVar13->fields).Disabled == '\0') && ((float)(x->fields)._syncCamera <= 0.0)) {
      Projectiles_ThunderspearProjectile__Explode(pPVar13,(MethodInfo *)0x0);
      *(undefined8 *)pfVar14 = 0;
      bVar8 = il2cpp_runtime_helper_022b4080(pfVar14,0);
      return bVar8;
    }
    goto label_042fcd13;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf01 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adf01 = '\x01';
  }
  __this_00 = *(Characters_Human_o **)&(pPVar13->fields)._correctPosition.fields.y;
  if (__this_00 == (Characters_Human_o *)0x0) goto label_042fcfec;
  bVar2 = (TypeInfo_Human->_2).naturalAligment;
  if (((__this_00->klass->_2).naturalAligment < bVar2) ||
     ((__this_00->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_Human)) {
    il2cpp_runtime_helper_022b2fd0(__this_00);
    goto label_042fcfec;
  }
  if (*(char *)&(__this_00->fields).FeedVictimName != '\0') {
    pUVar4 = *(UnityEngine_Object_o **)&(pPVar13->fields)._correctVelocity.fields.z;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar9 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    uVar10 = (ulong)uVar9;
    if ((char)uVar9 != '\0') {
      pfVar14 = &(pPVar13->fields)._correctVelocity.fields.z;
      plVar5 = *(long **)pfVar14;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x248))(plVar5,*(undefined8 *)(*plVar5 + 0x250));
        *(undefined8 *)pfVar14 = 0;
        bVar8 = il2cpp_runtime_helper_022b4080(pfVar14,0);
        return bVar8;
      }
      goto label_042fcfec;
    }
    goto label_042fcfb1;
  }
  cVar7 = (*(pPVar13->klass->vtable)._6_SendCustomStream.methodPtr)(pPVar13);
  if ((cVar7 != '\0') && ((__this_00->fields).FinishSetup != 4)) {
    lVar3 = *(long *)&(__this_00->fields).MountState;
    if ((lVar3 == 0) ||
       (pUVar6 = *(UnityEngine_GameObject_o **)(lVar3 + 0xb8), pUVar6 == (UnityEngine_GameObject_o *)0x0))
    goto label_042fcfec;
    bVar8 = UnityEngine_GameObject__get_activeSelf(pUVar6,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      lVar3 = *(long *)&(__this_00->fields).MountState;
      if ((lVar3 == 0) ||
         (pUVar6 = *(UnityEngine_GameObject_o **)(lVar3 + 0xc0), pUVar6 == (UnityEngine_GameObject_o *)0x0))
      goto label_042fcfec;
      bVar8 = UnityEngine_GameObject__get_activeSelf(pUVar6,(MethodInfo *)0x0);
      if ((char)bVar8 != '\0') goto label_042fcf76;
    }
    if (g_data_057adf02 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
      g_data_057adf02 = '\x01';
    }
    lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
    if (((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0x58), lVar3 == 0)) ||
       (lVar3 = *(long *)(lVar3 + 0x48), lVar3 == 0)) goto label_042fcfec;
    if (((*(char *)(lVar3 + 0x11) != '\0') || ((pPVar13->fields)._correctRotation.fields.w != 2.8026e-45)) ||
       (1 < (int)(pPVar13->fields)._correctVelocity.fields.x)) {
      Characters_Human__SetThunderspears(__this_00,1,1,(MethodInfo *)0x0);
    }
  }
label_042fcf76:
  pUVar4 = *(UnityEngine_Object_o **)&(pPVar13->fields)._correctVelocity.fields.z;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar9 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  uVar10 = (ulong)uVar9;
  if ((char)uVar9 != '\0') {
    uVar10 = *(ulong *)&(pPVar13->fields)._correctVelocity.fields.z;
    if (uVar10 == 0) {
label_042fcfec:
      uVar11 = il2cpp_runtime_helper_022b2c90();
      return (bool_conflict)CONCAT71((int7)((ulong)uVar11 >> 8),1);
    }
    if (*(char *)(uVar10 + 0x28) == '\0') {
      fVar1 = (float)(pPVar13->fields)._syncCamera;
      fVar15 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
      (pPVar13->fields)._syncCamera = (bool_conflict)(fVar1 - fVar15);
      return extraout_EAX;
    }
  }
label_042fcfb1:
  return (bool_conflict)uVar10;
}


