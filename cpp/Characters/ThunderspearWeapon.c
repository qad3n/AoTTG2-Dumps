// Type: Characters.ThunderspearWeapon
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/ThunderspearWeapon.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Characters/Human/Weapons/ThunderSpearWeapon.cs  [CHANGED since prior version]
// --------------------------------

// Characters.ThunderspearWeapon$$.ctor
// il2cpp: void Characters_ThunderspearWeapon___ctor (Characters_ThunderspearWeapon_o* __this, Characters_BaseCharacter_o* owner, int32_t ammo, int32_t ammoPerRound, float cooldown, float radius, float speed, float travelTime, float delay, SimpleJSONFixed_JSONNode_o* tsInfo, const MethodInfo* method);
// 0x3fef0f0

void Characters_ThunderspearWeapon___ctor
               (Characters_ThunderspearWeapon_o *__this,Characters_BaseCharacter_o *owner,
               int32_t ammo,int32_t ammoPerRound,float cooldown,float radius,float speed,
               float travelTime,float delay,SimpleJSONFixed_JSONNode_o *tsInfo,MethodInfo *method)

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
  il2cpp_runtime_glue(&(__this->fields).TSInfo,tsInfo);
  return;
}


// Characters.ThunderspearWeapon$$Activate
// il2cpp: void Characters_ThunderspearWeapon__Activate (Characters_ThunderspearWeapon_o* __this, const MethodInfo* method);
// 0x3fef1b0

void Characters_ThunderspearWeapon__Activate
               (Characters_ThunderspearWeapon_o *__this,MethodInfo *method)

{
  char cVar1;
  int iVar2;
  int32_t charViewId;
  System_Action_Hashtable__o *pSVar3;
  System_Action_Hashtable__c *pSVar4;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_Rigidbody_o *__this_00;
  Utility_Color255_o *__this_01;
  SimpleJSONFixed_JSONNode_o *pSVar6;
  UI_HUDBottomHandler_o *__this_02;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [12];
  Il2CppClass *pIVar10;
  byte bVar11;
  bool_conflict bVar12;
  bool_conflict bVar13;
  UnityEngine_Transform_o *pUVar14;
  System_String_o *pSVar15;
  undefined8 *puVar16;
  System_Object_array *settings;
  Il2CppObject *pIVar17;
  long lVar18;
  Projectiles_ThunderspearProjectile_o *pPVar19;
  long *plVar20;
  undefined8 uVar21;
  Projectiles_ThunderspearProjectile_o **ppPVar22;
  Characters_Human_o *__this_03;
  bool bVar23;
  undefined1 auVar24 [4];
  float fVar25;
  float fVar26;
  undefined4 extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  undefined4 uVar27;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  undefined4 extraout_XMM0_Dc_04;
  float extraout_XMM0_Dc_05;
  undefined4 extraout_XMM0_Dc_06;
  undefined4 extraout_XMM0_Dc_07;
  undefined4 extraout_XMM0_Dc_08;
  undefined4 extraout_XMM0_Dc_09;
  uint extraout_XMM0_Dc_10;
  uint extraout_XMM0_Dc_11;
  undefined4 extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  undefined4 uVar28;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined4 extraout_XMM0_Dd_03;
  undefined4 extraout_XMM0_Dd_04;
  float extraout_XMM0_Dd_05;
  undefined4 extraout_XMM0_Dd_06;
  undefined4 extraout_XMM0_Dd_07;
  undefined4 extraout_XMM0_Dd_08;
  undefined4 extraout_XMM0_Dd_09;
  uint extraout_XMM0_Dd_10;
  uint extraout_XMM0_Dd_11;
  float extraout_XMM1_Da;
  float fVar29;
  float fVar30;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  UnityEngine_Vector3_o UVar34;
  UnityEngine_Vector3_o euler;
  UnityEngine_Vector3_o forward;
  UnityEngine_Vector3_o position;
  UnityEngine_Quaternion_o UVar35;
  UnityEngine_Quaternion_Fields UVar36;
  UnityEngine_Vector3_o velocity;
  UnityEngine_Vector3_o gravity;
  undefined1 uStack_109;
  undefined1 auStack_108 [8];
  float fStack_100;
  float fStack_fc;
  float fStack_ec;
  undefined1 auStack_e8 [4];
  undefined1 auStack_e4 [12];
  undefined1 auStack_d8 [4];
  undefined1 auStack_d4 [8];
  float fStack_cc;
  undefined1 auStack_c8 [8];
  float fStack_c0;
  float fStack_bc;
  undefined1 auStack_b8 [12];
  float fStack_ac;
  System_String_o *pSStack_a8;
  float fStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  uint uStack_70;
  uint uStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [16];
  UnityEngine_Color_Fields UStack_40;
  undefined1 auVar31 [16];
  
  if (DAT_05704191 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Color);
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    il2cpp_init_method_metadata(&TypeInfo_Human);
    il2cpp_init_method_metadata(&TypeInfo_InGameMenu);
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_ProjectilePrefabs);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_StockSpecial);
    il2cpp_init_method_metadata(&TypeInfo_ThunderspearProjectile);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Color255_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"SpeedMultiplier");
    il2cpp_init_method_metadata(&"RangeMin");
    il2cpp_init_method_metadata(&"RangeMultiplier");
    il2cpp_init_method_metadata(&"RangeMax");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"Range");
    DAT_05704191 = '\x01';
  }
  __this_03 = (Characters_Human_o *)(__this->fields)._owner;
  auVar31 = _auStack_b8;
  uVar21 = CONCAT44(uStack_78._4_4_,(float)uStack_78);
  if (__this_03 == (Characters_Human_o *)0x0) goto LAB_03ff0292;
  bVar11 = (TypeInfo_Human->_2).naturalAligment;
  if (((__this_03->klass->_2).naturalAligment < bVar11) ||
     ((__this_03->klass->_2).typeHierarchy[(ulong)bVar11 - 1] != TypeInfo_Human)) goto LAB_03ff02a7;
  if ((((__this_03->fields).FinishSetup | 8U) == 9) &&
     (pSVar3 = (__this_03->fields).OnPlayerPropertiesChanged,
     pSVar3 != (System_Action_Hashtable__o *)0x0)) {
    pSVar4 = pSVar3->klass;
    bVar11 = (TypeInfo_StockSpecial->_2).naturalAligment;
    if ((bVar11 <= (pSVar4->_2).naturalAligment) &&
       ((pSVar4->_2).typeHierarchy[(ulong)bVar11 - 1] == TypeInfo_StockSpecial)) {
      *(undefined1 *)((long)&(pSVar3->fields).invoke_impl + 4) = 0;
      (*(pSVar4->vtable)._10_CombineImpl.methodPtr)(pSVar3,(pSVar4->vtable)._10_CombineImpl.method);
    }
  }
  auStack_108 = (undefined1  [8])(*(__this_03->klass->vtable)._66_GetAimPoint.methodPtr)(__this_03);
  fStack_100 = (float)extraout_XMM0_Dc;
  fStack_fc = (float)extraout_XMM0_Dd;
  lVar18 = *(long *)&(__this_03->fields).Dead;
  auVar31 = _auStack_b8;
  uVar21 = CONCAT44(uStack_78._4_4_,(float)uStack_78);
  if ((lVar18 == 0) ||
     (pUVar14 = *(UnityEngine_Transform_o **)(lVar18 + 0x10),
     uVar21 = CONCAT44(uStack_78._4_4_,(float)uStack_78), pUVar14 == (UnityEngine_Transform_o *)0x0)
     ) goto LAB_03ff0292;
  UVar34 = UnityEngine_Transform__get_position(pUVar14,(MethodInfo *)0x0);
  auVar24 = (undefined1  [4])UVar34.fields.x;
  fVar25 = UVar34.fields.y;
  fVar26 = extraout_XMM0_Dc_00;
  fVar30 = extraout_XMM0_Dd_00;
  fVar29 = UVar34.fields.z;
  if (DAT_056fde20 == '\0') {
    auStack_c8._0_4_ = UVar34.fields.z;
    auStack_d4._4_4_ = extraout_XMM0_Dc_00;
    _auStack_d8 = UVar34.fields._0_8_;
    fStack_cc = extraout_XMM0_Dd_00;
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde20 = '\x01';
    auVar24 = auStack_d8;
    fVar25 = (float)auStack_d4._0_4_;
    fVar26 = (float)auStack_d4._4_4_;
    fVar30 = fStack_cc;
    fVar29 = (float)auStack_c8._0_4_;
  }
  auVar31._0_4_ = (float)auStack_108._0_4_ - (float)auVar24;
  auVar31._4_4_ = (float)auStack_108._4_4_ - fVar25;
  auVar31._8_4_ = fStack_100 - fVar26;
  auVar31._12_4_ = fStack_fc - fVar30;
  auVar24 = (undefined1  [4])(extraout_XMM1_Da - fVar29);
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    auStack_e8 = (undefined1  [4])(extraout_XMM1_Da - fVar29);
    _auStack_b8 = auVar31;
    il2cpp_init_class();
    auVar31 = _auStack_b8;
    auVar24 = auStack_e8;
  }
  uVar27 = 0;
  uVar28 = 0;
  fVar25 = (float)auVar24 * (float)auVar24 +
           auVar31._4_4_ * auVar31._4_4_ + auVar31._0_4_ * auVar31._0_4_;
  if (fVar25 < 0.0) {
    auStack_e8 = auVar24;
    _auStack_b8 = auVar31;
    fVar25 = sqrtf(fVar25);
    uVar27 = extraout_XMM0_Dc_01;
    uVar28 = extraout_XMM0_Dd_01;
    auVar31 = _auStack_b8;
    auVar24 = auStack_e8;
    if (1e-05 < fVar25) goto LAB_03fef4a9;
LAB_03fef441:
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
    }
    uVar21 = CONCAT44(uStack_78._4_4_,(float)uStack_78);
    auVar32._8_8_ = 0;
    auVar32._0_8_ = **(ulong **)(TypeInfo_Vector3 + 0xb8);
    fVar26 = *(float *)(*(ulong **)(TypeInfo_Vector3 + 0xb8) + 1);
    lVar18._0_4_ = (__this_03->fields).Dead;
    lVar18._4_4_ = (__this_03->fields).CustomDamageEnabled;
    auVar31 = _auStack_b8;
  }
  else {
    fVar25 = SQRT(fVar25);
    if (fVar25 <= 1e-05) goto LAB_03fef441;
LAB_03fef4a9:
    uVar21 = CONCAT44(uStack_78._4_4_,(float)uStack_78);
    fVar26 = (float)auVar24 / fVar25;
    auVar8._4_4_ = fVar25;
    auVar8._0_4_ = fVar25;
    auVar8._8_4_ = uVar27;
    auVar8._12_4_ = uVar28;
    auVar32 = divps(auVar31,auVar8);
    lVar18._0_4_ = (__this_03->fields).Dead;
    lVar18._4_4_ = (__this_03->fields).CustomDamageEnabled;
    auVar31 = _auStack_b8;
  }
  _auStack_b8 = auVar32;
  if (lVar18 == 0) goto LAB_03ff0292;
  auStack_e8 = (undefined1  [4])fVar26;
  auVar31 = _auStack_b8;
  uVar21 = CONCAT44(uStack_78._4_4_,(float)uStack_78);
  if (*(UnityEngine_Transform_o **)(lVar18 + 0x10) == (UnityEngine_Transform_o *)0x0)
  goto LAB_03ff0292;
  UVar34 = UnityEngine_Transform__get_forward
                     (*(UnityEngine_Transform_o **)(lVar18 + 0x10),(MethodInfo *)0x0);
  lVar18 = *(long *)&(__this_03->fields).MountState;
  auVar31 = _auStack_b8;
  uVar21 = CONCAT44(uStack_78._4_4_,(float)uStack_78);
  if (lVar18 == 0) goto LAB_03ff0292;
  auStack_d4._4_4_ = extraout_XMM0_Dc_02;
  _auStack_d8 = UVar34.fields._0_8_;
  fStack_cc = (float)extraout_XMM0_Dd_02;
  auStack_c8._0_4_ = UVar34.fields.z;
  pUVar5 = *(UnityEngine_GameObject_o **)(lVar18 + 0xb8);
  uVar21 = CONCAT44(uStack_78._4_4_,(float)uStack_78);
  if (pUVar5 == (UnityEngine_GameObject_o *)0x0) goto LAB_03ff0292;
  bVar12 = UnityEngine_GameObject__get_activeSelf(pUVar5,(MethodInfo *)0x0);
  lVar18 = *(long *)&(__this_03->fields).MountState;
  auVar31 = _auStack_b8;
  uVar21 = CONCAT44(uStack_78._4_4_,(float)uStack_78);
  if ((lVar18 == 0) ||
     (pUVar5 = *(UnityEngine_GameObject_o **)(lVar18 + 0xc0),
     uVar21 = CONCAT44(uStack_78._4_4_,(float)uStack_78), pUVar5 == (UnityEngine_GameObject_o *)0x0)
     ) goto LAB_03ff0292;
  bVar13 = UnityEngine_GameObject__get_activeSelf(pUVar5,(MethodInfo *)0x0);
  if (DAT_05704194 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    DAT_05704194 = '\x01';
  }
  lVar18 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  auVar31 = _auStack_b8;
  uVar21 = CONCAT44(uStack_78._4_4_,(float)uStack_78);
  if (lVar18 == 0) goto LAB_03ff0292;
  lVar18 = *(long *)(lVar18 + 0x58);
  uVar21 = CONCAT44(uStack_78._4_4_,(float)uStack_78);
  if ((lVar18 == 0) ||
     (lVar18 = *(long *)(lVar18 + 0x48), uVar21 = CONCAT44(uStack_78._4_4_,(float)uStack_78),
     lVar18 == 0)) goto LAB_03ff0292;
  if (*(char *)(lVar18 + 0x11) == '\0') {
    bVar23 = (__this->fields).MaxRound == 2;
  }
  else {
    bVar23 = false;
  }
  bVar11 = (byte)bVar12;
  if ((((bVar11 != 0) &&
       (bVar11 == 1 &&
        (float)auStack_c8._0_4_ * (float)auStack_b8._0_4_ - (float)auStack_d8 * (float)auStack_e8 <
        0.0)) && ((__this_03->fields).FinishSetup != 0xd)) || ((byte)bVar13 == 0)) {
    lVar18 = *(long *)&(__this_03->fields).MountState;
    uVar21 = CONCAT44(uStack_78._4_4_,(float)uStack_78);
    if ((lVar18 == 0) ||
       (pUVar5 = *(UnityEngine_GameObject_o **)(lVar18 + 0xb8),
       uVar21 = CONCAT44(uStack_78._4_4_,(float)uStack_78),
       pUVar5 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03ff0292;
    pUVar14 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0);
    auVar31 = _auStack_b8;
    uVar21 = CONCAT44(uStack_78._4_4_,(float)uStack_78);
    if (pUVar14 == (UnityEngine_Transform_o *)0x0) goto LAB_03ff0292;
    UVar34 = UnityEngine_Transform__get_position(pUVar14,(MethodInfo *)0x0);
    fStack_c0 = (float)extraout_XMM0_Dc_04;
    auStack_c8 = (undefined1  [8])UVar34.fields._0_8_;
    fStack_bc = (float)extraout_XMM0_Dd_04;
    auStack_d8 = (undefined1  [4])UVar34.fields.z;
    if (*(int *)(TypeInfo_HumanSounds + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar15 = Characters_HumanSounds__GetRandomTSLaunch((MethodInfo *)0x0);
    Characters_BaseCharacter__PlaySound
              ((Characters_BaseCharacter_o *)__this_03,pSVar15,(MethodInfo *)0x0);
    Characters_Human__SetThunderspears
              (__this_03,0,(uint)(byte)((byte)bVar13 | bVar23 ^ 1U),(MethodInfo *)0x0);
    cVar1 = *(char *)((long)&(__this_03->fields).Animation + 4);
    if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
      il2cpp_init_class();
      lVar18 = *(long *)(TypeInfo_HumanAnimations + 0xb8);
    }
    else {
      lVar18 = *(long *)(TypeInfo_HumanAnimations + 0xb8);
    }
    if (cVar1 == '\0') {
      puVar16 = (undefined8 *)(lVar18 + 0x138);
    }
    else {
      puVar16 = (undefined8 *)(lVar18 + 0x128);
    }
  }
  else {
    lVar18 = *(long *)&(__this_03->fields).MountState;
    uVar21 = CONCAT44(uStack_78._4_4_,(float)uStack_78);
    if ((lVar18 == 0) ||
       (pUVar5 = *(UnityEngine_GameObject_o **)(lVar18 + 0xc0),
       uVar21 = CONCAT44(uStack_78._4_4_,(float)uStack_78),
       pUVar5 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03ff0292;
    pUVar14 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0);
    uVar21 = CONCAT44(uStack_78._4_4_,(float)uStack_78);
    auVar31 = _auStack_b8;
    if (pUVar14 == (UnityEngine_Transform_o *)0x0) goto LAB_03ff0292;
    UVar34 = UnityEngine_Transform__get_position(pUVar14,(MethodInfo *)0x0);
    fStack_c0 = (float)extraout_XMM0_Dc_03;
    auStack_c8 = (undefined1  [8])UVar34.fields._0_8_;
    fStack_bc = (float)extraout_XMM0_Dd_03;
    auStack_d8 = (undefined1  [4])UVar34.fields.z;
    if (*(int *)(TypeInfo_HumanSounds + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar15 = Characters_HumanSounds__GetRandomTSLaunch((MethodInfo *)0x0);
    Characters_BaseCharacter__PlaySound
              ((Characters_BaseCharacter_o *)__this_03,pSVar15,(MethodInfo *)0x0);
    Characters_Human__SetThunderspears
              (__this_03,(uint)(byte)(bVar11 | bVar23 ^ 1U),0,(MethodInfo *)0x0);
    cVar1 = *(char *)((long)&(__this_03->fields).Animation + 4);
    if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
      il2cpp_init_class();
      lVar18 = *(long *)(TypeInfo_HumanAnimations + 0xb8);
    }
    else {
      lVar18 = *(long *)(TypeInfo_HumanAnimations + 0xb8);
    }
    if (cVar1 == '\0') {
      puVar16 = (undefined8 *)(lVar18 + 0x130);
    }
    else {
      puVar16 = (undefined8 *)(lVar18 + 0x120);
    }
  }
  uVar21 = *puVar16;
  (__this_03->fields)._currentVelocity.fields.x = (float)(int)uVar21;
  (__this_03->fields)._currentVelocity.fields.y = (float)(int)((ulong)uVar21 >> 0x20);
  il2cpp_runtime_glue(&(__this_03->fields)._currentVelocity);
  if (*(char *)((long)&(__this_03->fields).Animation + 4) != '\0') {
    lVar18 = *(long *)&(__this_03->fields).MountState;
    auVar31 = _auStack_b8;
    uVar21 = CONCAT44(uStack_78._4_4_,(float)uStack_78);
    if ((lVar18 == 0) ||
       (pUVar5 = *(UnityEngine_GameObject_o **)(lVar18 + 0x148),
       uVar21 = CONCAT44(uStack_78._4_4_,(float)uStack_78),
       pUVar5 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03ff0292;
    pUVar14 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0);
    auVar31 = _auStack_b8;
    uVar21 = CONCAT44(uStack_78._4_4_,(float)uStack_78);
    if (pUVar14 == (UnityEngine_Transform_o *)0x0) goto LAB_03ff0292;
    UVar34 = UnityEngine_Transform__get_position(pUVar14,(MethodInfo *)0x0);
    auStack_c8._0_4_ = UVar34.fields.x;
    auStack_c8._4_4_ = UVar34.fields.y;
    fStack_c0 = extraout_XMM0_Dc_05;
    fStack_bc = extraout_XMM0_Dd_05;
    auVar24 = (undefined1  [4])UVar34.fields.z;
    if (DAT_056fde1f == '\0') {
      auStack_c8 = (undefined1  [8])UVar34.fields._0_8_;
      auStack_d8 = (undefined1  [4])UVar34.fields.z;
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fde1f = '\x01';
      auVar24 = auStack_d8;
    }
    uVar21 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
    auStack_c8._4_4_ = (float)auStack_c8._4_4_ + (float)((ulong)uVar21 >> 0x20);
    auStack_c8._0_4_ = (float)auStack_c8._0_4_ + (float)uVar21;
    fStack_c0 = fStack_c0 + 0.0;
    fStack_bc = fStack_bc + 0.0;
    auStack_d8 = (undefined1  [4])
                 ((float)auVar24 + *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20));
  }
  if (DAT_056fde20 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde20 = '\x01';
  }
  auVar33._0_4_ = (float)auStack_108._0_4_ - (float)auStack_c8._0_4_;
  auVar33._4_4_ = (float)auStack_108._4_4_ - (float)auStack_c8._4_4_;
  auVar33._8_4_ = fStack_100 - fStack_c0;
  auVar33._12_4_ = fStack_fc - fStack_bc;
  fVar25 = extraout_XMM1_Da - (float)auStack_d8;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    _auStack_108 = auVar33;
    il2cpp_init_class();
    auVar33 = _auStack_108;
  }
  uVar27 = 0;
  uVar28 = 0;
  fVar26 = fVar25 * fVar25 + auVar33._4_4_ * auVar33._4_4_ + auVar33._0_4_ * auVar33._0_4_;
  if (fVar26 < 0.0) {
    _auStack_108 = auVar33;
    fVar26 = sqrtf(fVar26);
    uVar27 = extraout_XMM0_Dc_06;
    uVar28 = extraout_XMM0_Dd_06;
    auVar33 = _auStack_108;
    if (1e-05 < fVar26) goto LAB_03fef9b1;
LAB_03fef94b:
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
    }
    register0x00001288 = 0;
    auStack_108 = (undefined1  [8])**(ulong **)(TypeInfo_Vector3 + 0xb8);
    fVar25 = *(float *)(*(ulong **)(TypeInfo_Vector3 + 0xb8) + 1);
    cVar1 = *(char *)((long)&(__this_03->fields).Animation + 4);
  }
  else {
    fVar26 = SQRT(fVar26);
    if (fVar26 <= 1e-05) goto LAB_03fef94b;
LAB_03fef9b1:
    fVar25 = fVar25 / fVar26;
    auVar7._4_4_ = fVar26;
    auVar7._0_4_ = fVar26;
    auVar7._8_4_ = uVar27;
    auVar7._12_4_ = uVar28;
    _auStack_108 = divps(auVar33,auVar7);
    cVar1 = *(char *)((long)&(__this_03->fields).Animation + 4);
  }
  if (cVar1 != '\0') {
    auStack_c8._4_4_ = (float)auStack_c8._4_4_ + auStack_108._4_4_;
    auStack_c8._0_4_ = (float)auStack_c8._0_4_ + auStack_108._0_4_;
    fStack_c0 = fStack_c0 + auStack_108._8_4_;
    fStack_bc = fStack_bc + auStack_108._12_4_;
    auStack_d8 = (undefined1  [4])((float)auStack_d8 + fVar25);
  }
  iVar2 = (__this_03->fields).FinishSetup;
  if (iVar2 != 0xb) {
    if (iVar2 == 1) {
      *(undefined1 *)((long)&(__this_03->fields).LastGoodHeadAngle.fields.x + 1) = 1;
    }
    Characters_BaseCharacter__PlayAnimation
              ((Characters_BaseCharacter_o *)__this_03,
               *(System_String_o **)&(__this_03->fields)._currentVelocity.fields,0.1,
               (MethodInfo *)0x0);
    Characters_Human__set_State(__this_03,1,(MethodInfo *)0x0);
    auVar31 = _auStack_b8;
    UVar34.fields.z = (float)auStack_e8;
    UVar34.fields.x = (float)auStack_b8._0_4_;
    UVar34.fields.y = (float)auStack_b8._4_4_;
    _auStack_b8 = auVar31;
    UVar35 = UnityEngine_Quaternion__LookRotation(UVar34,(MethodInfo *)0x0);
    UVar34 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar35,(MethodInfo *)0x0);
    euler.fields.x = UVar34.fields.x * 57.29578;
    euler.fields.y = UVar34.fields.y * 57.29578;
    euler.fields.z = UVar34.fields.z * 57.29578;
    UVar34 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
    *(float *)&(__this_03->fields).Detection = UVar34.fields.y;
    auVar9._4_8_ = 0;
    auVar9._0_4_ = UVar34.fields.y * 0.017453292;
    UVar36 = (UnityEngine_Quaternion_Fields)
             UnityEngine_Quaternion__Internal_FromEulerRad
                       ((UnityEngine_Vector3_o)(auVar9 << 0x20),(MethodInfo *)0x0);
    *(UnityEngine_Quaternion_Fields *)((long)&(__this_03->fields)._lastMountMessage + 4) = UVar36;
  }
  if (*(int *)((long)&(__this_03->fields).Weapon + 4) == 1) {
    pSVar15 = (__this_03->fields).CurrentSpecial;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar12 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pSVar15,(UnityEngine_Object_o *)0x0,
                        (MethodInfo *)0x0);
    if ((char)bVar12 == '\0') goto LAB_03fefb0b;
    pSVar15 = (__this_03->fields).CurrentSpecial;
    auVar31 = _auStack_b8;
    uVar21 = CONCAT44(uStack_78._4_4_,(float)uStack_78);
    if (pSVar15 == (System_String_o *)0x0) goto LAB_03ff0292;
    _uStack_80 = 0;
    auStack_88._0_4_ = pSVar15[0x10].fields._stringLength;
    auStack_88._4_2_ = pSVar15[0x10].fields._firstChar;
    auStack_88._6_2_ = *(undefined2 *)&pSVar15[0x10].fields.field_0x6;
    fStack_ec = *(float *)&pSVar15[0x11].klass;
  }
  else {
LAB_03fefb0b:
    lVar18 = *(long *)&(__this_03->fields).Dead;
    auVar31 = _auStack_b8;
    uVar21 = CONCAT44(uStack_78._4_4_,(float)uStack_78);
    if ((lVar18 == 0) ||
       (__this_00 = *(UnityEngine_Rigidbody_o **)(lVar18 + 0x18),
       uVar21 = CONCAT44(uStack_78._4_4_,(float)uStack_78),
       __this_00 == (UnityEngine_Rigidbody_o *)0x0)) goto LAB_03ff0292;
    UVar34 = UnityEngine_Rigidbody__get_velocity(__this_00,(MethodInfo *)0x0);
    fStack_ec = UVar34.fields.z;
    uStack_80 = extraout_XMM0_Dc_07;
    auStack_88 = (undefined1  [8])UVar34.fields._0_8_;
    uStack_7c = extraout_XMM0_Dd_07;
  }
  lVar18 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  auVar31 = _auStack_b8;
  uVar21 = CONCAT44(uStack_78._4_4_,(float)uStack_78);
  if (((lVar18 == 0) ||
      (lVar18 = *(long *)(lVar18 + 0x58), uVar21 = CONCAT44(uStack_78._4_4_,(float)uStack_78),
      lVar18 == 0)) || (lVar18 = *(long *)(lVar18 + 0x48), uVar21 = uStack_78, lVar18 == 0))
  goto LAB_03ff0292;
  _auStack_b8 = ZEXT416((uint)(__this->fields).Speed);
  if (*(char *)(lVar18 + 0x11) == '\0') {
    if (DAT_056fde1c == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_056fde1c = '\x01';
    }
    auVar24 = (undefined1  [4])auStack_88._4_4_;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      auStack_e4._0_4_ = auStack_88._4_4_;
      auStack_e8 = (undefined1  [4])auStack_88._4_4_;
      auStack_e4._4_4_ = uStack_80;
      auStack_e4._8_4_ = uStack_7c;
      il2cpp_init_class();
      auVar24 = auStack_e8;
    }
    uVar21 = CONCAT44(uStack_78._4_4_,(float)uStack_78);
    fVar26 = fStack_ec * fStack_ec +
             (float)auVar24 * (float)auVar24 + (float)auStack_88._0_4_ * (float)auStack_88._0_4_;
    uStack_98 = CONCAT44(uStack_98._4_4_,fVar26);
    if (fVar26 < 0.0) {
      fVar26 = sqrtf(fVar26);
      uVar21 = CONCAT44(uStack_78._4_4_,(float)uStack_78);
      pSStack_a8 = (System_String_o *)CONCAT44(pSStack_a8._4_4_,fVar26);
      pSVar6 = (__this->fields).TSInfo;
    }
    else {
      pSStack_a8 = (System_String_o *)CONCAT44(pSStack_a8._4_4_,SQRT(fVar26));
      pSVar6 = (__this->fields).TSInfo;
    }
    auVar31 = _auStack_b8;
    if (pSVar6 == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_03ff0292;
    plVar20 = (long *)(*(pSVar6->klass->vtable)._7_get_Item.methodPtr)
                                (pSVar6,"SpeedMultiplier",(pSVar6->klass->vtable)._7_get_Item.method);
    auVar31 = _auStack_b8;
    uVar21 = CONCAT44(uStack_78._4_4_,(float)uStack_78);
    if (plVar20 == (long *)0x0) goto LAB_03ff0292;
    uVar27 = (**(code **)(*plVar20 + 0x388))(plVar20,*(undefined8 *)(*plVar20 + 0x390));
    auStack_58._0_4_ = uVar27;
    pSVar6 = (__this->fields).TSInfo;
    auVar31 = _auStack_b8;
    uVar21 = CONCAT44(uStack_78._4_4_,(float)uStack_78);
    if (pSVar6 == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_03ff0292;
    plVar20 = (long *)(*(pSVar6->klass->vtable)._7_get_Item.methodPtr)
                                (pSVar6,"Range",(pSVar6->klass->vtable)._7_get_Item.method);
    auVar31 = _auStack_b8;
    uVar21 = CONCAT44(uStack_78._4_4_,(float)uStack_78);
    if (plVar20 == (long *)0x0) goto LAB_03ff0292;
    _auStack_e8 = (**(code **)(*plVar20 + 0x388))(plVar20,*(undefined8 *)(*plVar20 + 0x390));
    auStack_e4._4_4_ = extraout_XMM0_Dc_09;
    auStack_e4._8_4_ = extraout_XMM0_Dd_09;
    if (DAT_056fde1c == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_056fde1c = '\x01';
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) goto LAB_03ff0110;
LAB_03ff00c5:
      if (0.0 <= (float)uStack_98) goto LAB_03ff00d6;
LAB_03ff0126:
      fVar26 = sqrtf((float)uStack_98);
      uVar21 = CONCAT44(uStack_78._4_4_,(float)uStack_78);
      uStack_98 = CONCAT44(uStack_98._4_4_,fVar26);
      pSVar6 = (__this->fields).TSInfo;
    }
    else {
      if (*(int *)(TypeInfo_Math + 0xe4) != 0) goto LAB_03ff00c5;
LAB_03ff0110:
      il2cpp_init_class();
      if ((float)uStack_98 < 0.0) goto LAB_03ff0126;
LAB_03ff00d6:
      uVar21 = CONCAT44(uStack_78._4_4_,(float)uStack_78);
      uStack_98 = CONCAT44(uStack_98._4_4_,SQRT((float)uStack_98));
      pSVar6 = (__this->fields).TSInfo;
    }
    auVar31 = _auStack_b8;
    if (pSVar6 == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_03ff0292;
    plVar20 = (long *)(*(pSVar6->klass->vtable)._7_get_Item.methodPtr)
                                (pSVar6,"RangeMultiplier",(pSVar6->klass->vtable)._7_get_Item.method);
    auVar31 = _auStack_b8;
    uVar21 = CONCAT44(uStack_78._4_4_,(float)uStack_78);
    if (plVar20 == (long *)0x0) goto LAB_03ff0292;
    uVar27 = (**(code **)(*plVar20 + 0x388))(plVar20,*(undefined8 *)(*plVar20 + 0x390));
    uStack_68 = CONCAT44(uStack_68._4_4_,uVar27);
    pSVar6 = (__this->fields).TSInfo;
    auVar31 = _auStack_b8;
    uVar21 = CONCAT44(uStack_78._4_4_,(float)uStack_78);
    if (pSVar6 == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_03ff0292;
    plVar20 = (long *)(*(pSVar6->klass->vtable)._7_get_Item.methodPtr)
                                (pSVar6,"RangeMin",(pSVar6->klass->vtable)._7_get_Item.method);
    auVar31 = _auStack_b8;
    uVar21 = CONCAT44(uStack_78._4_4_,(float)uStack_78);
    if (plVar20 == (long *)0x0) goto LAB_03ff0292;
    uStack_78 = (**(code **)(*plVar20 + 0x388))(plVar20,*(undefined8 *)(*plVar20 + 0x390));
    pSVar6 = (__this->fields).TSInfo;
    auVar31 = _auStack_b8;
    uVar21 = uStack_78;
    if (pSVar6 == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_03ff0292;
    uStack_70 = extraout_XMM0_Dc_10;
    uStack_6c = extraout_XMM0_Dd_10;
    plVar20 = (long *)(*(pSVar6->klass->vtable)._7_get_Item.methodPtr)
                                (pSVar6,"RangeMax",(pSVar6->klass->vtable)._7_get_Item.method);
    auVar31 = _auStack_b8;
    uVar21 = uStack_78;
    if (plVar20 == (long *)0x0) goto LAB_03ff0292;
    auStack_b8._0_4_ = auStack_b8._0_4_ + pSStack_a8._0_4_ * (float)auStack_58._0_4_;
    uVar21 = (**(code **)(*plVar20 + 0x388))(plVar20,*(undefined8 *)(*plVar20 + 0x390));
    fVar30 = (float)auStack_e8 + (float)uStack_98 * (float)uStack_68;
    fVar26 = (float)uVar21;
    if (fVar30 <= (float)uVar21) {
      fVar26 = fVar30;
    }
    auStack_e4._0_4_ =
         ~auStack_e4._0_4_ & uStack_78._4_4_ | (uint)((ulong)uVar21 >> 0x20) & auStack_e4._0_4_;
    auStack_e8 = (undefined1  [4])
                 ((float)(~-(uint)((float)uStack_78 <= fVar30) & (uint)(float)uStack_78 |
                         (uint)fVar26 & -(uint)((float)uStack_78 <= fVar30)) /
                 (float)auStack_b8._0_4_);
    auStack_e4._4_4_ = ~auStack_e4._4_4_ & uStack_70 | extraout_XMM0_Dc_11 & auStack_e4._4_4_;
    auStack_e4._8_4_ = ~auStack_e4._8_4_ & uStack_6c | extraout_XMM0_Dd_11 & auStack_e4._8_4_;
    iVar2 = *(int *)(TypeInfo_ProjectilePrefabs + 0xe4);
    uVar27 = auStack_108._0_4_;
    uVar28 = auStack_108._4_4_;
  }
  else {
    _auStack_e8 = ZEXT416((uint)(__this->fields).TravelTime);
    iVar2 = *(int *)(TypeInfo_ProjectilePrefabs + 0xe4);
    uVar27 = auStack_108._0_4_;
    uVar28 = auStack_108._4_4_;
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
    uVar27 = auStack_108._0_4_;
    uVar28 = auStack_108._4_4_;
  }
  pSVar15 = (System_String_o *)**(undefined8 **)(TypeInfo_ProjectilePrefabs + 0xb8);
  forward.fields.y = (float)uVar28;
  forward.fields.x = (float)uVar27;
  forward.fields.z = fVar25;
  auVar31 = ZEXT1216((undefined1  [12])0x0) << 0x20;
  UVar35 = UnityEngine_Quaternion__LookRotation(forward,(MethodInfo *)0x0);
  uStack_90 = auVar31._8_8_;
  uStack_98 = UVar35.fields._8_8_;
  auStack_58._8_4_ = extraout_XMM0_Dc_08;
  auStack_58._0_8_ = UVar35.fields._0_8_;
  auStack_58._12_4_ = extraout_XMM0_Dd_08;
  uVar21 = uStack_78;
  if (DAT_056fdd15 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_056fdd15 = '\x01';
    uVar21 = uStack_78;
  }
  uStack_78._4_4_ = (uint)((ulong)uVar21 >> 0x20);
  lVar18 = *(long *)&(__this_03->fields).Dead;
  auVar31 = _auStack_b8;
  if ((lVar18 != 0) && (lVar18 = *(long *)(lVar18 + 0x20), pSStack_a8 = pSVar15, lVar18 != 0)) {
    uStack_68 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    uStack_60 = 0;
    uStack_78._0_4_ = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    charViewId = *(int32_t *)(lVar18 + 0x94);
    settings = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,3);
    fStack_9c = (__this->fields).Radius;
    pIVar17 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&fStack_9c);
    auVar31 = _auStack_b8;
    uVar21 = CONCAT44(uStack_78._4_4_,(float)uStack_78);
    if (settings != (System_Object_array *)0x0) {
      if ((pIVar17 != (Il2CppObject *)0x0) &&
         (lVar18 = il2cpp_runtime_glue(pIVar17,(((settings->obj).klass)->_1).element_class),
         lVar18 == 0)) goto LAB_03ff02ac;
      if ((int)settings->max_length == 0) goto LAB_03ff0297;
      settings->m_Items[0] = pIVar17;
      il2cpp_runtime_glue(settings->m_Items);
      lVar18 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x30);
      auVar31 = _auStack_b8;
      uVar21 = CONCAT44(uStack_78._4_4_,(float)uStack_78);
      if (((lVar18 == 0) ||
          (lVar18 = *(long *)(lVar18 + 0x20), uVar21 = CONCAT44(uStack_78._4_4_,(float)uStack_78),
          lVar18 == 0)) ||
         (__this_01 = *(Utility_Color255_o **)(lVar18 + 0x18),
         uVar21 = CONCAT44(uStack_78._4_4_,(float)uStack_78), __this_01 == (Utility_Color255_o *)0x0
         )) goto LAB_03ff0292;
      UStack_40 = (UnityEngine_Color_Fields)Utility_Color255__ToColor(__this_01,(MethodInfo *)0x0);
      pIVar17 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_Color,&UStack_40);
      if ((pIVar17 != (Il2CppObject *)0x0) &&
         (lVar18 = il2cpp_runtime_glue(pIVar17,(((settings->obj).klass)->_1).element_class),
         lVar18 == 0)) {
LAB_03ff02ac:
        uVar21 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(uVar21,0);
      }
      if ((uint)settings->max_length < 2) {
LAB_03ff0297:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      settings->m_Items[1] = pIVar17;
      il2cpp_runtime_glue(settings->m_Items + 1,pIVar17);
      uStack_109 = 1;
      pIVar17 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&uStack_109);
      if ((pIVar17 != (Il2CppObject *)0x0) &&
         (lVar18 = il2cpp_runtime_glue(pIVar17,(((settings->obj).klass)->_1).element_class),
         lVar18 == 0)) goto LAB_03ff02ac;
      if ((uint)settings->max_length < 3) goto LAB_03ff0297;
      fVar25 = fVar25 * (float)auStack_b8._0_4_;
      auStack_108._4_4_ = (float)auStack_108._4_4_ * (float)auStack_b8._0_4_;
      auStack_108._0_4_ = (float)auStack_108._0_4_ * (float)auStack_b8._0_4_;
      fStack_100 = fStack_100 * (float)auStack_b8._8_4_;
      fStack_fc = fStack_fc * fStack_ac;
      settings->m_Items[2] = pIVar17;
      il2cpp_runtime_glue(settings->m_Items + 2,pIVar17);
      auVar32 = auStack_58;
      auVar8 = _auStack_c8;
      auVar31 = _auStack_108;
      position.fields.z = (float)auStack_d8;
      position.fields.x = (float)auStack_c8._0_4_;
      position.fields.y = (float)auStack_c8._4_4_;
      velocity.fields.z = fVar25;
      velocity.fields.x = (float)auStack_108._0_4_;
      velocity.fields.y = (float)auStack_108._4_4_;
      UVar35.fields.z = (float)uStack_98;
      UVar35.fields.w = (float)uStack_98._4_4_;
      UVar35.fields.x = (float)auStack_58._0_4_;
      UVar35.fields.y = (float)auStack_58._4_4_;
      gravity.fields.z = (float)uStack_78;
      gravity.fields.x = (float)uStack_68;
      gravity.fields.y = (float)uStack_68._4_4_;
      _auStack_108 = auVar31;
      _auStack_c8 = auVar8;
      auStack_58 = auVar32;
      pPVar19 = (Projectiles_ThunderspearProjectile_o *)
                Projectiles_ProjectileSpawner__Spawn
                          (pSStack_a8,position,UVar35,velocity,gravity,(float)auStack_e8,charViewId,
                           "",settings,(MethodInfo *)0x0);
      pIVar10 = TypeInfo_ThunderspearProjectile;
      if (pPVar19 == (Projectiles_ThunderspearProjectile_o *)0x0) {
        (__this->fields).Current = (Projectiles_ThunderspearProjectile_o *)0x0;
      }
      else {
        bVar11 = (TypeInfo_ThunderspearProjectile->_2).naturalAligment;
        if (((pPVar19->klass->_2).naturalAligment < bVar11) ||
           ((pPVar19->klass->_2).typeHierarchy[(ulong)bVar11 - 1] != TypeInfo_ThunderspearProjectile)) {
LAB_03ff029c:
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(pPVar19);
        }
        (__this->fields).Current = pPVar19;
        if (((pPVar19->klass->_2).naturalAligment < bVar11) ||
           ((pPVar19->klass->_2).typeHierarchy[(ulong)bVar11 - 1] != pIVar10)) goto LAB_03ff029c;
      }
      ppPVar22 = &(__this->fields).Current;
      il2cpp_runtime_glue(ppPVar22,pPVar19);
      auVar8 = _auStack_88;
      pPVar19 = *ppPVar22;
      auVar31 = _auStack_b8;
      uVar21 = CONCAT44(uStack_78._4_4_,(float)uStack_78);
      if (pPVar19 != (Projectiles_ThunderspearProjectile_o *)0x0) {
        (pPVar19->fields).InitialPlayerVelocity.fields.x = (float)auStack_88._0_4_;
        (pPVar19->fields).InitialPlayerVelocity.fields.y = (float)auStack_88._4_4_;
        (pPVar19->fields).InitialPlayerVelocity.fields.z = fStack_ec;
        (__this->fields)._delayTimeLeft = (__this->fields).Delay;
        if ((char)(__this_03->fields).CustomDamage != '\0') {
          return;
        }
        _auStack_88 = auVar8;
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        __this_03 = *(Characters_Human_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        auVar31 = _auStack_b8;
        uVar21 = CONCAT44(uStack_78._4_4_,(float)uStack_78);
        if (__this_03 != (Characters_Human_o *)0x0) {
          bVar11 = (TypeInfo_InGameMenu->_2).naturalAligment;
          if (((__this_03->klass->_2).naturalAligment < bVar11) ||
             ((__this_03->klass->_2).typeHierarchy[(ulong)bVar11 - 1] != TypeInfo_InGameMenu)) {
LAB_03ff02a7:
                    /* WARNING: Subroutine does not return */
            il2cpp_unwind_resume(__this_03);
          }
          __this_02 = *(UI_HUDBottomHandler_o **)&(__this_03->fields)._cameraFPS;
          uVar21 = CONCAT44(uStack_78._4_4_,(float)uStack_78);
          if (__this_02 != (UI_HUDBottomHandler_o *)0x0) {
            UI_HUDBottomHandler__ShootTS(__this_02,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
LAB_03ff0292:
  _auStack_b8 = auVar31;
  uStack_78 = uVar21;
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.ThunderspearWeapon$$HasActiveProjectile
// il2cpp: bool Characters_ThunderspearWeapon__HasActiveProjectile (Characters_ThunderspearWeapon_o* __this, const MethodInfo* method);
// 0x3ff0370

bool_conflict
Characters_ThunderspearWeapon__HasActiveProjectile
          (Characters_ThunderspearWeapon_o *__this,MethodInfo *method)

{
  Projectiles_ThunderspearProjectile_o *pPVar1;
  bool_conflict bVar2;
  uint uVar3;
  
  if (DAT_05704192 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704192 = '\x01';
  }
  pPVar1 = (__this->fields).Current;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar3 = 0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pPVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pPVar1 = (__this->fields).Current;
    if (pPVar1 == (Projectiles_ThunderspearProjectile_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    uVar3 = (uint)((char)(pPVar1->fields).Disabled == '\0');
  }
  return uVar3;
}


// Characters.ThunderspearWeapon$$SetInput
// il2cpp: void Characters_ThunderspearWeapon__SetInput (Characters_ThunderspearWeapon_o* __this, bool key, const MethodInfo* method);
// 0x3ff03e0

void Characters_ThunderspearWeapon__SetInput
               (Characters_ThunderspearWeapon_o *__this,bool_conflict key,MethodInfo *method)

{
  Projectiles_ThunderspearProjectile_o **ppPVar1;
  Projectiles_ThunderspearProjectile_o *pPVar2;
  Il2CppMethodPointer vtable_dispatch;
  char cVar3;
  bool_conflict bVar4;
  undefined8 extraout_RDX;
  
  if ((char)key != '\0') {
    if (DAT_05704192 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Object);
      DAT_05704192 = '\x01';
    }
    pPVar2 = (__this->fields).Current;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pPVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar4 != '\0') {
      ppPVar1 = &(__this->fields).Current;
      pPVar2 = *ppPVar1;
      if (pPVar2 == (Projectiles_ThunderspearProjectile_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if (((char)(pPVar2->fields).Disabled == '\0') && ((__this->fields)._delayTimeLeft <= 0.0)) {
        Projectiles_ThunderspearProjectile__Explode(pPVar2,(MethodInfo *)0x0);
        *ppPVar1 = (Projectiles_ThunderspearProjectile_o *)0x0;
        il2cpp_runtime_glue(ppPVar1,0);
        return;
      }
    }
    cVar3 = (*(__this->klass->vtable)._6_CanUse.methodPtr)
                      (__this,(__this->klass->vtable)._6_CanUse.method);
    if (cVar3 != '\0') {
      (*(__this->klass->vtable)._9_Activate.methodPtr)
                (__this,(__this->klass->vtable)._9_Activate.method);
      vtable_dispatch = (__this->klass->vtable)._8_OnUse.methodPtr;
      (*vtable_dispatch)
                (__this,(__this->klass->vtable)._8_OnUse.method,extraout_RDX,vtable_dispatch);
      return;
    }
  }
  return;
}


// Characters.ThunderspearWeapon$$OnFixedUpdate
// il2cpp: void Characters_ThunderspearWeapon__OnFixedUpdate (Characters_ThunderspearWeapon_o* __this, const MethodInfo* method);
// 0x3ff04d0

void Characters_ThunderspearWeapon__OnFixedUpdate
               (Characters_ThunderspearWeapon_o *__this,MethodInfo *method)

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
  
  if (DAT_05704193 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Human);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704193 = '\x01';
  }
  __this_00 = (Characters_Human_o *)(__this->fields)._owner;
  if (__this_00 == (Characters_Human_o *)0x0) goto LAB_03ff072c;
  bVar2 = (TypeInfo_Human->_2).naturalAligment;
  if (((__this_00->klass->_2).naturalAligment < bVar2) ||
     ((__this_00->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_Human)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume(__this_00);
  }
  if (*(char *)&(__this_00->fields).FeedVictimName != '\0') {
    pPVar3 = (__this->fields).Current;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar7 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pPVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar7 == '\0') {
      return;
    }
    ppPVar8 = &(__this->fields).Current;
    pPVar3 = *ppPVar8;
    if (pPVar3 != (Projectiles_ThunderspearProjectile_o *)0x0) {
      (*(pPVar3->klass->vtable)._17_DestroySelf.methodPtr)
                (pPVar3,(pPVar3->klass->vtable)._17_DestroySelf.method);
      *ppPVar8 = (Projectiles_ThunderspearProjectile_o *)0x0;
      il2cpp_runtime_glue(ppPVar8,0);
      return;
    }
    goto LAB_03ff072c;
  }
  cVar6 = (*(__this->klass->vtable)._6_CanUse.methodPtr)(__this);
  if ((cVar6 != '\0') && ((__this_00->fields).FinishSetup != 4)) {
    lVar4 = *(long *)&(__this_00->fields).MountState;
    if ((lVar4 == 0) ||
       (pUVar5 = *(UnityEngine_GameObject_o **)(lVar4 + 0xb8),
       pUVar5 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03ff072c;
    bVar7 = UnityEngine_GameObject__get_activeSelf(pUVar5,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      lVar4 = *(long *)&(__this_00->fields).MountState;
      if ((lVar4 == 0) ||
         (pUVar5 = *(UnityEngine_GameObject_o **)(lVar4 + 0xc0),
         pUVar5 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03ff072c;
      bVar7 = UnityEngine_GameObject__get_activeSelf(pUVar5,(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') goto LAB_03ff06b6;
    }
    if (DAT_05704194 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
      il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
      DAT_05704194 = '\x01';
    }
    lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
    if (((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0x58), lVar4 == 0)) ||
       (lVar4 = *(long *)(lVar4 + 0x48), lVar4 == 0)) goto LAB_03ff072c;
    if (((*(char *)(lVar4 + 0x11) != '\0') || ((__this->fields).MaxRound != 2)) ||
       (1 < (__this->fields).RoundLeft)) {
      Characters_Human__SetThunderspears(__this_00,1,1,(MethodInfo *)0x0);
    }
  }
LAB_03ff06b6:
  pPVar3 = (__this->fields).Current;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pPVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    pPVar3 = (__this->fields).Current;
    if (pPVar3 == (Projectiles_ThunderspearProjectile_o *)0x0) {
LAB_03ff072c:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
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
// 0x3ff02c0

bool_conflict
Characters_ThunderspearWeapon__IsModelActive
          (Characters_ThunderspearWeapon_o *__this,Characters_Human_o *human,bool_conflict left,
          MethodInfo *method)

{
  long lVar1;
  bool_conflict bVar2;
  UnityEngine_GameObject_o *__this_00;
  
  if ((human != (Characters_Human_o *)0x0) &&
     (lVar1 = *(long *)&(human->fields).MountState, lVar1 != 0)) {
    if ((char)left == '\0') {
      __this_00 = *(UnityEngine_GameObject_o **)(lVar1 + 0xc0);
      __this = (Characters_ThunderspearWeapon_o *)0x0;
      if (__this_00 != (UnityEngine_GameObject_o *)0x0) goto LAB_03ff02f0;
    }
    else {
      __this_00 = *(UnityEngine_GameObject_o **)(lVar1 + 0xb8);
      if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
LAB_03ff02f0:
        bVar2 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
        return bVar2;
      }
      __this = (Characters_ThunderspearWeapon_o *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception(__this);
}


// Characters.ThunderspearWeapon$$IsTwoShotMode
// il2cpp: bool Characters_ThunderspearWeapon__IsTwoShotMode (Characters_ThunderspearWeapon_o* __this, const MethodInfo* method);
// 0x3ff0300

bool_conflict
Characters_ThunderspearWeapon__IsTwoShotMode
          (Characters_ThunderspearWeapon_o *__this,MethodInfo *method)

{
  long lVar1;
  
  if (DAT_05704194 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    DAT_05704194 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x58), lVar1 != 0)) &&
     (lVar1 = *(long *)(lVar1 + 0x48), lVar1 != 0)) {
    if (*(char *)(lVar1 + 0x11) != '\0') {
      return 0;
    }
    return (bool_conflict)CONCAT71((int7)((ulong)lVar1 >> 8),(__this->fields).MaxRound == 2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


