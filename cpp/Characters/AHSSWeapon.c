// Type: Characters.AHSSWeapon
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/AHSSWeapon.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Weapons/AHSSWeapon.cs
// --------------------------------

// Characters.AHSSWeapon$$.ctor
// il2cpp: void Characters_AHSSWeapon___ctor (Characters_AHSSWeapon_o* __this, Characters_BaseCharacter_o* owner, int32_t ammo, int32_t ammoPerRound, float cooldown, const MethodInfo* method);
// 0x42f98a0

void Characters_AHSSWeapon___ctor
               (Characters_AHSSWeapon_o *__this,Characters_BaseCharacter_o *owner,int32_t ammo,
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


// Characters.AHSSWeapon$$GetActiveTime
// il2cpp: float Characters_AHSSWeapon__GetActiveTime (Characters_AHSSWeapon_o* __this, const MethodInfo* method);
// 0x42f9960

float Characters_AHSSWeapon__GetActiveTime(Characters_AHSSWeapon_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  System_String_o **ppSVar2;
  Il2CppObject *pIVar3;
  UnityEngine_Events_UnityAction_o *pUVar4;
  Il2CppObject *pIVar5;
  byte bVar6;
  byte bVar7;
  Characters_Human_o *pCVar8;
  Characters_HumanComponentCache_o *__this_00;
  Characters_HookUseable_o *pCVar9;
  Outline_o *pOVar10;
  System_Collections_Generic_List_string__o *pSVar11;
  Characters_BaseHitbox_o *__this_01;
  Il2CppRGCTXData *x;
  System_Action_Hashtable__o *__this_02;
  System_String_o *b;
  UnityEngine_UI_Image_o *pUVar12;
  MethodInfo_362C220 *pMVar13;
  code *vtableDispatch;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  UnityEngine_UI_Image_c *pUVar14;
  UnityEngine_Component_o *pUVar15;
  UnityEngine_UI_Image_o *pUVar16;
  bool bVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  char cVar21;
  bool_conflict bVar22;
  int iVar23;
  uint uVar24;
  System_Collections_Generic_List_string__c *pSVar25;
  long *plVar26;
  long *plVar27;
  UnityEngine_GameObject_o *pUVar28;
  UnityEngine_Animator_o *pUVar29;
  System_String_o *pSVar30;
  UnityEngine_Texture2D_o *texture;
  System_String_o *pSVar31;
  long lVar32;
  undefined8 *puVar33;
  UnityEngine_Object_o *pUVar34;
  UnityEngine_Transform_o *pUVar35;
  Il2CppClass *pIVar36;
  void *pvVar37;
  Il2CppClass *pIVar38;
  System_Collections_Generic_Dictionary_object__object__o *__this_03;
  undefined8 extraout_RDX;
  System_Collections_Generic_List_object__o *pSVar39;
  System_Object_array *__this_04;
  long **pplVar40;
  undefined1 *puVar41;
  undefined1 *puVar42;
  int iVar43;
  undefined8 unaff_RBP;
  long *plVar44;
  MethodInfo *pMVar45;
  Il2CppClass *pIVar46;
  Il2CppRuntimeInterfaceOffsetPair *pIVar47;
  System_Object_array *__this_05;
  System_Object_array *pSVar48;
  System_Object_array *pSVar49;
  Il2CppObject *pIVar50;
  System_Object_array *pSVar51;
  System_Collections_Generic_Dictionary_object__object__o *__this_06;
  long *unaff_R12;
  long *plVar52;
  Il2CppClass *unaff_R13;
  long *unaff_R14;
  Characters_Human_o *unaff_R15;
  bool bVar53;
  float fVar54;
  float extraout_XMM0_Da_18;
  float extraout_XMM0_Da_19;
  float extraout_XMM0_Da_20;
  float extraout_XMM0_Da_21;
  float extraout_XMM0_Da_22;
  float extraout_XMM0_Da_23;
  float extraout_XMM0_Da_24;
  float extraout_XMM0_Da_25;
  float extraout_XMM0_Da_26;
  float extraout_XMM0_Da_27;
  float extraout_XMM0_Da_28;
  undefined8 uVar57;
  float fVar55;
  float extraout_XMM0_Da;
  float fVar56;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float extraout_XMM0_Da_03;
  float extraout_XMM0_Da_04;
  float extraout_XMM0_Da_05;
  float extraout_XMM0_Da_06;
  float extraout_XMM0_Da_07;
  float extraout_XMM0_Da_08;
  float extraout_XMM0_Da_09;
  float extraout_XMM0_Da_10;
  float extraout_XMM0_Da_11;
  float extraout_XMM0_Da_12;
  float extraout_XMM0_Da_13;
  float extraout_XMM0_Da_14;
  float extraout_XMM0_Da_15;
  float extraout_XMM0_Da_16;
  float extraout_XMM0_Da_17;
  float extraout_XMM0_Dc;
  undefined4 uVar58;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  float extraout_XMM0_Dc_03;
  float fVar59;
  undefined4 extraout_XMM0_Dc_04;
  float extraout_XMM0_Dd;
  undefined4 uVar60;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  float extraout_XMM0_Dd_03;
  undefined4 extraout_XMM0_Dd_04;
  undefined4 in_XMM1_Da;
  undefined4 uVar61;
  undefined4 uVar62;
  ulong uVar63;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  float fVar67;
  UnityEngine_Quaternion_Fields UVar68;
  UnityEngine_Quaternion_o UVar69;
  undefined1 auVar70 [12];
  UnityEngine_Vector3_o UVar71;
  UnityEngine_Vector3_o euler;
  UnityEngine_Vector3_o forward;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o forward_00;
  UnityEngine_Vector3_o force;
  UnityEngine_Quaternion_o b_00;
  undefined1 auStack_c8 [8];
  float fStack_c0;
  float fStack_bc;
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  uint uStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [8];
  float fStack_60;
  float fStack_5c;
  float fStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  System_Collections_Generic_List_string__c *pSStack_38;
  long *plStack_10;
  
  if (g_data_057adef8 == '\0') {
    plStack_10 = (long *)0x42f999d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterData);
    plStack_10 = (long *)0x42f99a9;
    il2cpp_runtime_helper_023445d0(&"FireDelay");
    plStack_10 = (long *)0x42f99b5;
    il2cpp_runtime_helper_023445d0(&"AHSS");
    g_data_057adef8 = '\x01';
    if (*(int *)(TypeInfo_CharacterData + 0xe4) != 0) goto label_042f997d;
label_042f99cf:
    plStack_10 = (long *)0x42f99d4;
    il2cpp_runtime_helper_02337ed0();
    plVar44 = (long *)**(undefined8 **)(TypeInfo_CharacterData + 0xb8);
  }
  else {
    if (*(int *)(TypeInfo_CharacterData + 0xe4) == 0) goto label_042f99cf;
label_042f997d:
    plVar44 = (long *)**(undefined8 **)(TypeInfo_CharacterData + 0xb8);
  }
  if ((System_Collections_Generic_List_string__c *)plVar44 != (System_Collections_Generic_List_string__c *)0x0
     ) {
    pvVar37 = (((System_Collections_Generic_List_string__c *)plVar44)->_1).image;
    plStack_10 = (long *)0x42f9a00;
    pSVar25 = (System_Collections_Generic_List_string__c *)
              (**(code **)((long)pvVar37 + 0x1a8))
                        (plVar44,"AHSS",*(undefined8 *)((long)pvVar37 + 0x1b0));
    if (pSVar25 != (System_Collections_Generic_List_string__c *)0x0) {
      pvVar37 = (pSVar25->_1).image;
      plStack_10 = (long *)0x42f9a22;
      plVar26 = (long *)(**(code **)((long)pvVar37 + 0x1a8))
                                  (pSVar25,"FireDelay",*(undefined8 *)((long)pvVar37 + 0x1b0));
      plVar44 = (long *)pSVar25;
      if (plVar26 != (long *)0x0) {
        vtableDispatch = *(code **)(*plVar26 + 0x388);
        fVar56 = (float)(*vtableDispatch)
                                  (plVar26,*(undefined8 *)(*plVar26 + 0x390),vtableDispatch);
        return fVar56;
      }
    }
  }
  plStack_10 = (long *)0x42f9a43;
  il2cpp_runtime_helper_022b2c90();
  plStack_10 = &TypeInfo_CharacterData;
  if (g_data_057adef9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    g_data_057adef9 = '\x01';
  }
  plVar26 = (((System_Collections_Generic_List_string__c *)plVar44)->_1).this_arg.data;
  if (plVar26 != (long *)0x0) {
    lVar32 = *plVar26;
    bVar6 = (TypeInfo_Human->_2).naturalAligment;
    if ((bVar6 <= *(byte *)(lVar32 + 0x130)) &&
       (*(Il2CppClass **)(*(long *)(lVar32 + 200) + -8 + (ulong)bVar6 * 8) == TypeInfo_Human)) {
      uVar57 = (**(code **)(lVar32 + 0x558))(plVar26,*(undefined8 *)(lVar32 + 0x560));
      *(undefined8 *)((long)&(((System_Collections_Generic_List_string__c *)plVar44)->_1).castClass + 4) =
           uVar57;
      *(undefined4 *)((long)&(((System_Collections_Generic_List_string__c *)plVar44)->_1).declaringType + 4) =
           in_XMM1_Da;
      return (float)uVar57;
    }
    il2cpp_runtime_helper_022b2fd0();
  }
  il2cpp_runtime_helper_022b2c90();
  pplVar40 = (long **)auStack_c8;
  pSStack_38 = (System_Collections_Generic_List_string__c *)plVar44;
  if (g_data_057adefa == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CapsuleCollider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterData);
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Radius");
    il2cpp_runtime_helper_023445d0(&"KnockbackForce");
    il2cpp_runtime_helper_023445d0(&"AHSS");
    g_data_057adefa = '\x01';
  }
  pCVar8 = (Characters_Human_o *)plVar26[6];
  plVar52 = unaff_R12;
  pIVar38 = unaff_R13;
  auVar64 = _auStack_68;
  if (pCVar8 == (Characters_Human_o *)0x0) goto label_042fa582;
  bVar6 = (TypeInfo_Human->_2).naturalAligment;
  if (((pCVar8->klass->_2).naturalAligment < bVar6) ||
     ((pCVar8->klass->_2).typeHierarchy[(ulong)bVar6 - 1] != TypeInfo_Human)) {
label_042fa587:
    il2cpp_runtime_helper_022b2fd0(pCVar8);
    pSVar25 = (System_Collections_Generic_List_string__c *)plVar44;
label_042fa592:
    unaff_R13 = pIVar38;
    unaff_R12 = plVar52;
    il2cpp_runtime_helper_022b2fd0();
    if (g_data_057adefb == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
      il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
      g_data_057adefb = '\x01';
      if (*(int *)(TypeInfo_UIManager + 0xe4) != 0) goto label_042fa5c3;
label_042fa60a:
      il2cpp_runtime_helper_02337ed0();
      plVar52 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    }
    else {
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) goto label_042fa60a;
label_042fa5c3:
      plVar52 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    }
    if (plVar52 == (long *)0x0) {
label_042fa67f:
      fVar56 = (float)il2cpp_runtime_helper_022b2c90();
      return fVar56;
    }
    if ((*(byte *)(*plVar52 + 0x130) < *(byte *)(TypeInfo_InGameMenu + 0x130)) ||
       (*(long *)(*(long *)(*plVar52 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameMenu + 0x130) * 8) != TypeInfo_InGameMenu
       )) {
      il2cpp_runtime_helper_022b2fd0();
      goto label_042fa67f;
    }
    pIVar47 = (Il2CppRuntimeInterfaceOffsetPair *)plVar52[0x16];
    if (pIVar47 == (Il2CppRuntimeInterfaceOffsetPair *)0x0) goto label_042fa67f;
    uVar24 = *(uint *)&(pSVar25->_1).castClass;
    bVar53 = uVar24 < 2;
    unaff_R14 = plVar26;
    unaff_R15 = pCVar8;
  }
  else {
    lVar32 = *(long *)&(pCVar8->fields).Dead;
    if ((lVar32 == 0) ||
       (pUVar35 = *(UnityEngine_Transform_o **)(lVar32 + 0x10), pUVar35 == (UnityEngine_Transform_o *)0x0))
    goto label_042fa582;
    uStack_98 = *(undefined8 *)((long)plVar26 + 0x4c);
    uStack_90 = 0;
    uStack_88 = CONCAT44(uStack_88._4_4_,*(undefined4 *)((long)plVar26 + 0x54));
    UVar71 = UnityEngine_Transform__get_position(pUVar35,(MethodInfo *)0x0);
    fVar56 = UVar71.fields.x;
    fVar54 = UVar71.fields.y;
    fVar59 = extraout_XMM0_Dc;
    fVar55 = extraout_XMM0_Dd;
    fVar67 = UVar71.fields.z;
    if (g_data_057a6845 == '\0') {
      auStack_b8._0_4_ = UVar71.fields.z;
      fStack_c0 = extraout_XMM0_Dc;
      auStack_c8 = (undefined1  [8])UVar71.fields._0_8_;
      fStack_bc = extraout_XMM0_Dd;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a6845 = '\x01';
      fVar56 = (float)auStack_c8._0_4_;
      fVar54 = (float)auStack_c8._4_4_;
      fVar59 = fStack_c0;
      fVar55 = fStack_bc;
      fVar67 = (float)auStack_b8._0_4_;
    }
    auVar64._0_4_ = (float)uStack_98 - fVar56;
    auVar64._4_4_ = uStack_98._4_4_ - fVar54;
    auVar64._8_4_ = (float)uStack_90 - fVar59;
    auVar64._12_4_ = uStack_90._4_4_ - fVar55;
    plVar52 = &TypeInfo_Math;
    fVar56 = (float)uStack_88 - fVar67;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      auStack_78._0_4_ = (float)uStack_88 - fVar67;
      _auStack_68 = auVar64;
      il2cpp_runtime_helper_02337ed0();
      auVar64 = _auStack_68;
      fVar56 = (float)auStack_78._0_4_;
    }
    uVar58 = 0;
    uVar60 = 0;
    fVar54 = fVar56 * fVar56 + auVar64._4_4_ * auVar64._4_4_ + auVar64._0_4_ * auVar64._0_4_;
    if (fVar54 < 0.0) {
      auStack_78._0_4_ = fVar56;
      _auStack_68 = auVar64;
      fVar54 = sqrtf(fVar54);
      uVar58 = extraout_XMM0_Dc_00;
      uVar60 = extraout_XMM0_Dd_00;
      auVar64 = _auStack_68;
      fVar56 = (float)auStack_78._0_4_;
      if (fVar54 <= 1e-05) goto label_042f9c94;
label_042f9cfc:
      fVar56 = fVar56 / fVar54;
      auVar19._4_4_ = fVar54;
      auVar19._0_4_ = fVar54;
      auVar19._8_4_ = uVar58;
      auVar19._12_4_ = uVar60;
      auVar65 = divps(auVar64,auVar19);
      lVar32._0_4_ = (pCVar8->fields).Dead;
      lVar32._4_4_ = (pCVar8->fields).CustomDamageEnabled;
      auVar64 = _auStack_68;
    }
    else {
      fVar54 = SQRT(fVar54);
      if (1e-05 < fVar54) goto label_042f9cfc;
label_042f9c94:
      if (g_data_057a65d5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a65d5 = '\x01';
      }
      auVar65._8_8_ = 0;
      auVar65._0_8_ = **(ulong **)(TypeInfo_Vector3 + 0xb8);
      fVar56 = *(float *)(*(ulong **)(TypeInfo_Vector3 + 0xb8) + 1);
      lVar32._0_4_ = (pCVar8->fields).Dead;
      lVar32._4_4_ = (pCVar8->fields).CustomDamageEnabled;
      auVar64 = _auStack_68;
    }
    _auStack_68 = auVar65;
    if (lVar32 == 0) {
label_042fa582:
      _auStack_68 = auVar64;
      il2cpp_runtime_helper_022b2c90();
      goto label_042fa587;
    }
    auStack_78._0_4_ = fVar56;
    auVar64 = _auStack_68;
    if (*(UnityEngine_Transform_o **)(lVar32 + 0x10) == (UnityEngine_Transform_o *)0x0) goto label_042fa582;
    UVar71 = UnityEngine_Transform__get_forward
                       (*(UnityEngine_Transform_o **)(lVar32 + 0x10),(MethodInfo *)0x0);
    cVar21 = *(char *)((long)&(pCVar8->fields).Animation + 4);
    plVar44 = (long *)CONCAT71((int7)((ulong)plVar44 >> 8),cVar21);
    auStack_b8._0_4_ = 0;
    auStack_b8._4_4_ = 0;
    uStack_b0._0_4_ = (float)0;
    uStack_b0._4_4_ = (float)0;
    if (cVar21 != '\0') {
      auStack_b8._0_4_ = (float)uStack_98;
      auStack_b8._4_4_ = uStack_98._4_4_;
      uStack_b0._0_4_ = (float)uStack_90;
      uStack_b0._4_4_ = uStack_90._4_4_;
    }
    _auStack_c8 = ZEXT816(0);
    if (cVar21 == '\0') {
      uStack_48 = uStack_98;
      uStack_40 = uStack_90;
      uStack_9c = (uint)(float)uStack_88;
    }
    else {
      uStack_9c = 0;
      uStack_48 = 0;
      uStack_40 = 0;
      _auStack_c8 = ZEXT416((uint)(float)uStack_88);
    }
    __this_00 = (pCVar8->fields).HumanCache;
    auVar64 = _auStack_68;
    if (__this_00 == (Characters_HumanComponentCache_o *)0x0) goto label_042fa582;
    fStack_4c = UVar71.fields.z * (float)auStack_68._0_4_ - UVar71.fields.x * (float)auStack_78._0_4_;
    bVar22 = Characters_HookUseable__IsHooked((Characters_HookUseable_o *)__this_00,(MethodInfo *)0x0);
    auVar64 = _auStack_68;
    if (cVar21 == '\0') {
      if ((char)bVar22 == '\0') {
        uStack_98 = uStack_48;
        uStack_90 = uStack_40;
        uStack_88 = CONCAT44(uStack_88._4_4_,uStack_9c);
        uVar58 = (undefined4)uStack_48;
        uVar60 = uStack_48._4_4_;
        uVar61 = (undefined4)uStack_40;
        uVar62 = uStack_40._4_4_;
        uVar24 = uStack_9c;
        if (0.0 <= fStack_4c) goto label_042f9e66;
label_042f9e8c:
        lVar32 = 0x100;
        if (*(int *)(TypeInfo_HumanAnimations + 0xe4) != 0) {
          auStack_b8._4_4_ = uVar60;
          auStack_b8._0_4_ = uVar58;
          uStack_b0._0_4_ = (float)uVar61;
          uStack_b0._4_4_ = (float)uVar62;
          _auStack_c8 = ZEXT416(uVar24);
          goto label_042f9f5a;
        }
        uStack_48 = CONCAT44(uVar60,uVar58);
        uStack_40 = CONCAT44(uVar62,uVar61);
        uStack_9c = uVar24;
        il2cpp_runtime_helper_02337ed0();
        uStack_b0 = uStack_40;
        auStack_b8 = (undefined1  [8])uStack_48;
        uVar24 = uStack_9c;
      }
      else {
label_042f9e66:
        pCVar9 = (Characters_HookUseable_o *)(pCVar8->fields).Special;
        if (pCVar9 == (Characters_HookUseable_o *)0x0) goto label_042fa582;
        bVar22 = Characters_HookUseable__IsHooked(pCVar9,(MethodInfo *)0x0);
        if ((char)bVar22 != '\0') {
          uVar58 = (float)uStack_98;
          uVar60 = uStack_98._4_4_;
          uVar61 = (float)uStack_90;
          uVar62 = uStack_90._4_4_;
          uVar24 = (uint)(float)uStack_88;
          goto label_042f9e8c;
        }
        lVar32 = 0xf8;
        if (*(int *)(TypeInfo_HumanAnimations + 0xe4) != 0) {
          uStack_b0 = uStack_90;
          auStack_b8 = (undefined1  [8])uStack_98;
          uVar24 = (uint)(float)uStack_88;
          goto label_042f9f56;
        }
label_042f9f3d:
        il2cpp_runtime_helper_02337ed0();
label_042f9f4b:
        auStack_b8._4_4_ = uStack_98._4_4_;
        auStack_b8._0_4_ = (float)uStack_98;
        uStack_b0._0_4_ = (float)uStack_90;
        uStack_b0._4_4_ = uStack_90._4_4_;
        uVar24 = (uint)(float)uStack_88;
      }
label_042f9f56:
      _auStack_c8 = ZEXT416(uVar24);
    }
    else {
      if ((char)bVar22 == '\0') {
        uStack_98 = auStack_b8;
        uStack_90 = auStack_b8._8_8_;
        uStack_88 = CONCAT44(uStack_88._4_4_,auStack_c8._0_4_);
        if (0.0 <= fStack_4c) goto label_042f9de1;
      }
      else {
label_042f9de1:
        pCVar9 = (Characters_HookUseable_o *)(pCVar8->fields).Special;
        if (pCVar9 == (Characters_HookUseable_o *)0x0) goto label_042fa582;
        bVar22 = Characters_HookUseable__IsHooked(pCVar9,(MethodInfo *)0x0);
        if ((char)bVar22 == '\0') {
          lVar32 = 0xe0;
          if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) goto label_042f9f3d;
          goto label_042f9f4b;
        }
        auStack_c8._4_4_ = 0;
        fStack_c0 = 0.0;
        fStack_bc = 0.0;
        auStack_b8._0_4_ = (float)uStack_98;
        auStack_b8._4_4_ = uStack_98._4_4_;
        uStack_b0._0_4_ = (float)uStack_90;
        uStack_b0._4_4_ = uStack_90._4_4_;
        auStack_c8._0_4_ = (float)uStack_88;
      }
      lVar32 = 0xe8;
      if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
    }
label_042f9f5a:
    plVar44 = *(long **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + lVar32);
    Characters_Human__set_State(pCVar8,1,(MethodInfo *)0x0);
    *(long **)&(pCVar8->fields)._currentVelocity.fields = plVar44;
    il2cpp_runtime_helper_022b4080(&(pCVar8->fields)._currentVelocity,plVar44);
    Characters_BaseCharacter__CrossFade
              ((Characters_BaseCharacter_o *)pCVar8,(System_String_o *)plVar44,0.05,0.0,(MethodInfo *)0x0);
    auVar64 = _auStack_68;
    UVar71.fields.z = (float)auStack_78._0_4_;
    UVar71.fields.x = (float)auStack_68._0_4_;
    UVar71.fields.y = (float)auStack_68._4_4_;
    _auStack_68 = auVar64;
    UVar69 = UnityEngine_Quaternion__LookRotation_4debb20(UVar71,(MethodInfo *)0x0);
    UVar71 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar69,(MethodInfo *)0x0);
    euler.fields.x = UVar71.fields.x * 57.29578;
    euler.fields.z = UVar71.fields.z * 57.29578;
    euler.fields.y = UVar71.fields.y * 57.29578;
    UVar71 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
    *(float *)&(pCVar8->fields).Detection = UVar71.fields.y;
    uVar58 = 0;
    uVar60 = 0;
    auVar70._4_8_ = 0;
    auVar70._0_4_ = UVar71.fields.y * 0.017453292;
    UVar68 = (UnityEngine_Quaternion_Fields)
             UnityEngine_Quaternion__Internal_FromEulerRad
                       ((UnityEngine_Vector3_o)(auVar70 << 0x20),(MethodInfo *)0x0);
    *(UnityEngine_Quaternion_Fields *)((long)&(pCVar8->fields)._lastMountMessage + 4) = UVar68;
    lVar32 = *(long *)&(pCVar8->fields).Dead;
    pIVar38 = (Il2CppClass *)&TypeInfo_HumanAnimations;
    auVar64 = _auStack_68;
    if ((lVar32 == 0) ||
       (plVar44 = *(long **)(lVar32 + 0x10),
       (System_Collections_Generic_List_string__c *)plVar44 ==
       (System_Collections_Generic_List_string__c *)0x0)) goto label_042fa582;
    UVar69 = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)plVar44,(MethodInfo *)0x0);
    fStack_60 = (float)extraout_XMM0_Dc_01;
    auStack_68 = (undefined1  [8])UVar69.fields._0_8_;
    fStack_5c = (float)extraout_XMM0_Dd_01;
    auStack_78._8_4_ = uVar58;
    auStack_78._0_8_ = UVar69.fields._8_8_;
    auStack_78._12_4_ = uVar60;
    uStack_98 = *(undefined8 *)((long)&(pCVar8->fields)._lastMountMessage + 4);
    uStack_90 = 0;
    uStack_88._0_4_ = (pCVar8->fields)._grabIFrames;
    uStack_88._4_4_ = (pCVar8->fields)._bladeTrailActive;
    uStack_80 = 0;
    fVar56 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    auVar65 = _auStack_68;
    auVar64 = auStack_78;
    UVar69.fields.z = (float)auStack_78._0_4_;
    UVar69.fields.w = (float)auStack_78._4_4_;
    UVar69.fields.x = (float)auStack_68._0_4_;
    UVar69.fields.y = (float)auStack_68._4_4_;
    b_00.fields.z = (float)uStack_88;
    b_00.fields.w = (float)uStack_88._4_4_;
    b_00.fields.x = (float)uStack_98;
    b_00.fields.y = uStack_98._4_4_;
    auStack_78 = auVar64;
    _auStack_68 = auVar65;
    UVar69 = UnityEngine_Quaternion__Lerp(UVar69,b_00,fVar56 * 30.0,(MethodInfo *)0x0);
    UnityEngine_Transform__set_rotation((UnityEngine_Transform_o *)plVar44,UVar69,(MethodInfo *)0x0);
    lVar32 = *(long *)&(pCVar8->fields).Dead;
    auVar64 = _auStack_68;
    if ((lVar32 == 0) ||
       (pUVar35 = *(UnityEngine_Transform_o **)(lVar32 + 0x10), pUVar35 == (UnityEngine_Transform_o *)0x0))
    goto label_042fa582;
    UVar71 = UnityEngine_Transform__get_position(pUVar35,(MethodInfo *)0x0);
    lVar32 = *(long *)&(pCVar8->fields).Dead;
    auVar64 = _auStack_68;
    if (lVar32 == 0) goto label_042fa582;
    auStack_78._0_4_ = UVar71.fields.z;
    fStack_60 = (float)extraout_XMM0_Dc_02;
    auStack_68 = (undefined1  [8])UVar71.fields._0_8_;
    fStack_5c = (float)extraout_XMM0_Dd_02;
    pUVar35 = *(UnityEngine_Transform_o **)(lVar32 + 0x10);
    auVar64 = _auStack_68;
    if (pUVar35 == (UnityEngine_Transform_o *)0x0) goto label_042fa582;
    UVar71 = UnityEngine_Transform__get_up(pUVar35,(MethodInfo *)0x0);
    auStack_68._0_4_ = (float)auStack_68._0_4_ + UVar71.fields.x * 0.8;
    auStack_68._4_4_ = (float)auStack_68._4_4_ + UVar71.fields.y * 0.8;
    fStack_60 = fStack_60 + extraout_XMM0_Dc_03 * 0.0;
    fStack_5c = fStack_5c + extraout_XMM0_Dd_03 * 0.0;
    fVar67 = (float)auStack_78._0_4_ + UVar71.fields.z * 0.8;
    auStack_78._0_4_ = fVar67;
    fVar56 = (float)auStack_68._0_4_;
    fVar54 = (float)auStack_68._4_4_;
    fVar59 = fStack_60;
    fVar55 = fStack_5c;
    if (g_data_057a6845 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a6845 = '\x01';
      fVar56 = (float)auStack_68._0_4_;
      fVar54 = (float)auStack_68._4_4_;
      fVar59 = fStack_60;
      fVar55 = fStack_5c;
      fVar67 = (float)auStack_78._0_4_;
    }
    auVar66._0_4_ = (float)auStack_b8._0_4_ - fVar56;
    auVar66._4_4_ = (float)auStack_b8._4_4_ - fVar54;
    auVar66._8_4_ = (float)uStack_b0 - fVar59;
    auVar66._12_4_ = uStack_b0._4_4_ - fVar55;
    fVar59 = (float)auStack_c8._0_4_ - fVar67;
    fVar56 = fStack_c0;
    fVar54 = fStack_bc;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      auStack_c8._0_4_ = (float)auStack_c8._0_4_ - fVar67;
      _auStack_b8 = auVar66;
      il2cpp_runtime_helper_02337ed0();
      fVar59 = (float)auStack_c8._0_4_;
      fVar56 = fStack_c0;
      fVar54 = fStack_bc;
      auVar66 = _auStack_b8;
    }
    fVar55 = fVar59 * fVar59 + auVar66._4_4_ * auVar66._4_4_ + auVar66._0_4_ * auVar66._0_4_;
    if (fVar55 < 0.0) {
      auStack_c8._0_4_ = fVar59;
      fStack_c0 = fVar56;
      fStack_bc = fVar54;
      _auStack_b8 = auVar66;
      fVar55 = sqrtf(fVar55);
      fVar56 = (float)extraout_XMM0_Dc_04;
      fVar54 = (float)extraout_XMM0_Dd_04;
      fVar59 = (float)auStack_c8._0_4_;
      auVar66 = _auStack_b8;
      if (fVar55 <= 1e-05) goto label_042fa19e;
label_042fa1f6:
      auStack_c8._0_4_ = fVar59 / fVar55;
      auVar18._4_4_ = fVar55;
      auVar18._0_4_ = fVar55;
      auVar18._8_4_ = fVar56;
      auVar18._12_4_ = fVar54;
      _auStack_b8 = divps(auVar66,auVar18);
    }
    else {
      fVar55 = SQRT(fVar55);
      fStack_c0 = fVar56;
      fStack_bc = fVar54;
      if (1e-05 < fVar55) goto label_042fa1f6;
label_042fa19e:
      if (g_data_057a65d5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a65d5 = '\x01';
      }
      uStack_b0 = 0;
      auStack_b8 = (undefined1  [8])**(ulong **)(TypeInfo_Vector3 + 0xb8);
      auStack_c8._0_4_ = *(undefined4 *)(*(ulong **)(TypeInfo_Vector3 + 0xb8) + 1);
      auStack_c8._4_4_ = 0;
      fStack_c0 = 0.0;
      fStack_bc = 0.0;
    }
    fVar56 = (float)auStack_c8._0_4_;
    if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      fVar56 = (float)auStack_c8._0_4_;
    }
    pSVar31 = *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x30);
    forward.fields.z = fVar56;
    forward.fields.x = (float)SUB84(auStack_b8,0);
    forward.fields.y = (float)(int)((ulong)auStack_b8 >> 0x20);
    UVar69 = UnityEngine_Quaternion__LookRotation_4debb20(forward,(MethodInfo *)0x0);
    auVar64 = _auStack_68;
    position.fields.z = (float)auStack_78._0_4_;
    position.fields.x = (float)auStack_68._0_4_;
    position.fields.y = (float)auStack_68._4_4_;
    _auStack_68 = auVar64;
    Effects_EffectSpawner__Spawn(pSVar31,position,UVar69,1.0,1,(System_Object_array *)0x0,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_HumanSounds + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar31 = Characters_HumanSounds__GetRandomAHSSGunShot((MethodInfo *)0x0);
    Characters_BaseCharacter__PlaySound((Characters_BaseCharacter_o *)pCVar8,pSVar31,(MethodInfo *)0x0);
    plVar44 = &TypeInfo_CharacterData;
    if (*(int *)(TypeInfo_CharacterData + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    plVar27 = (long *)**(long **)(TypeInfo_CharacterData + 0xb8);
    auVar64 = _auStack_68;
    if (plVar27 == (long *)0x0) goto label_042fa582;
    plVar52 = (long *)(**(code **)(*plVar27 + 0x1a8))(plVar27,"AHSS",*(undefined8 *)(*plVar27 + 0x1b0));
    pOVar10 = (pCVar8->fields).OutlineComponent;
    auVar64 = _auStack_68;
    if (((pOVar10 == (Outline_o *)0x0) ||
        (pSVar11 = pOVar10[1].fields._namesToIgnore,
        pSVar11 == (System_Collections_Generic_List_string__o *)0x0)) || (plVar52 == (long *)0x0))
    goto label_042fa582;
    plVar44 = (long *)pSVar11[2].klass;
    plVar27 = (long *)(**(code **)(*plVar52 + 0x1a8))(plVar52,"Radius",*(undefined8 *)(*plVar52 + 0x1b0));
    auVar64 = _auStack_68;
    if ((plVar27 == (long *)0x0) ||
       (fVar56 = (float)(**(code **)(*plVar27 + 0x388))(plVar27,*(undefined8 *)(*plVar27 + 0x390)),
       auVar64 = _auStack_68,
       (System_Collections_Generic_List_string__c *)plVar44 ==
       (System_Collections_Generic_List_string__c *)0x0)) goto label_042fa582;
    pvVar37 = (((System_Collections_Generic_List_string__c *)plVar44)->_1).image;
    pSVar25 = (System_Collections_Generic_List_string__c *)plVar44;
    if ((*(byte *)((long)pvVar37 + 0x130) < *(byte *)(TypeInfo_CapsuleCollider + 0x130)) ||
       (*(long *)(*(long *)((long)pvVar37 + 200) + -8 + (ulong)*(byte *)(TypeInfo_CapsuleCollider + 0x130) * 8) !=
        TypeInfo_CapsuleCollider)) goto label_042fa592;
    UnityEngine_CapsuleCollider__set_radius((UnityEngine_CapsuleCollider_o *)plVar44,fVar56,(MethodInfo *)0x0)
    ;
    pOVar10 = (pCVar8->fields).OutlineComponent;
    auVar64 = _auStack_68;
    if (((pOVar10 == (Outline_o *)0x0) ||
        (pSVar11 = pOVar10[1].fields._namesToIgnore,
        pSVar11 == (System_Collections_Generic_List_string__o *)0x0)) ||
       (pUVar35 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pSVar11,(MethodInfo *)0x0),
       auVar64 = _auStack_68, pUVar35 == (UnityEngine_Transform_o *)0x0)) goto label_042fa582;
    value.fields.z = (float)auStack_78._0_4_;
    value.fields.x = (float)auStack_68._0_4_;
    value.fields.y = (float)auStack_68._4_4_;
    _auStack_68 = auVar64;
    UnityEngine_Transform__set_position(pUVar35,value,(MethodInfo *)0x0);
    pOVar10 = (pCVar8->fields).OutlineComponent;
    auVar64 = _auStack_68;
    if ((pOVar10 == (Outline_o *)0x0) ||
       (pSVar11 = pOVar10[1].fields._namesToIgnore,
       pSVar11 == (System_Collections_Generic_List_string__o *)0x0)) goto label_042fa582;
    plVar44 = (long *)UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)pSVar11,(MethodInfo *)0x0);
    auVar64 = _auStack_b8;
    forward_00.fields.z = (float)auStack_c8._0_4_;
    forward_00.fields.x = (float)auStack_b8._0_4_;
    forward_00.fields.y = (float)auStack_b8._4_4_;
    _auStack_b8 = auVar64;
    UVar69 = UnityEngine_Quaternion__LookRotation_4debb20(forward_00,(MethodInfo *)0x0);
    auVar64 = _auStack_68;
    if ((System_Collections_Generic_List_string__c *)plVar44 ==
        (System_Collections_Generic_List_string__c *)0x0) goto label_042fa582;
    UnityEngine_Transform__set_rotation((UnityEngine_Transform_o *)plVar44,UVar69,(MethodInfo *)0x0);
    pOVar10 = (pCVar8->fields).OutlineComponent;
    auVar64 = _auStack_68;
    if ((pOVar10 == (Outline_o *)0x0) ||
       (__this_01 = (Characters_BaseHitbox_o *)pOVar10[1].fields._namesToIgnore,
       __this_01 == (Characters_BaseHitbox_o *)0x0)) goto label_042fa582;
    Characters_BaseHitbox__Activate(__this_01,0.0,0.1,(MethodInfo *)0x0);
    lVar32 = *(long *)&(pCVar8->fields).Dead;
    auVar64 = _auStack_68;
    if (lVar32 == 0) goto label_042fa582;
    plVar44 = *(long **)(lVar32 + 0x18);
    plVar27 = (long *)(**(code **)(*plVar52 + 0x1a8))(plVar52,"KnockbackForce",*(undefined8 *)(*plVar52 + 0x1b0));
    auVar64 = _auStack_68;
    if ((plVar27 == (long *)0x0) ||
       (fVar56 = (float)(**(code **)(*plVar27 + 0x388))(plVar27,*(undefined8 *)(*plVar27 + 0x390)),
       auVar64 = _auStack_68,
       (System_Collections_Generic_List_string__c *)plVar44 ==
       (System_Collections_Generic_List_string__c *)0x0)) goto label_042fa582;
    uVar63 = CONCAT44((float)auStack_b8._4_4_ * fVar56,(float)auStack_b8._0_4_ * fVar56) ^ 0x8000000080000000;
    force.fields.z = -((float)auStack_c8._0_4_ * fVar56);
    force.fields.x = (float)(int)uVar63;
    force.fields.y = (float)(int)(uVar63 >> 0x20);
    UnityEngine_Rigidbody__AddForce((UnityEngine_Rigidbody_o *)plVar44,force,2,(MethodInfo *)0x0);
    if ((char)(pCVar8->fields).CustomDamage != '\0') {
      return extraout_XMM0_Da;
    }
    plVar44 = &TypeInfo_UIManager;
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar25 = *(System_Collections_Generic_List_string__c **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    auVar64 = _auStack_68;
    if (pSVar25 == (System_Collections_Generic_List_string__c *)0x0) goto label_042fa582;
    pvVar37 = (pSVar25->_1).image;
    if ((*(byte *)((long)pvVar37 + 0x130) < *(byte *)(TypeInfo_InGameMenu + 0x130)) ||
       (*(long *)(*(long *)((long)pvVar37 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameMenu + 0x130) * 8) !=
        TypeInfo_InGameMenu)) goto label_042fa592;
    pIVar47 = (pSVar25->_1).interfaceOffsets;
    if (pIVar47 == (Il2CppRuntimeInterfaceOffsetPair *)0x0) goto label_042fa582;
    uVar24 = *(uint *)(plVar26 + 9);
    bVar53 = uVar24 == 1;
    pplVar40 = &plStack_10;
    plVar44 = (long *)pSStack_38;
  }
  pIVar38 = (Il2CppClass *)(ulong)bVar53;
  *(undefined8 *)((long)pplVar40 + -8) = unaff_RBP;
  *(Characters_Human_o **)((long)pplVar40 + -0x10) = unaff_R15;
  *(long **)((long)pplVar40 + -0x18) = unaff_R14;
  *(long **)((long)pplVar40 + -0x20) = unaff_R12;
  *(long **)((long)pplVar40 + -0x28) = plVar44;
  if (g_data_057ae3db == '\0') {
    *(undefined8 *)((long)pplVar40 + -0x30) = 0x43c2dd6;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Animator_GetComponent_Animator);
    *(undefined8 *)((long)pplVar40 + -0x30) = 0x43c2de2;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae3db = '\x01';
  }
  pUVar34 = *(UnityEngine_Object_o **)&pIVar47[0x10].offset;
  plVar44 = &TypeInfo_Object;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)((long)pplVar40 + -0x30) = 0x43c2e09;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)pplVar40 + -0x30) = 0x43c2e15;
  bVar22 = UnityEngine_Object__op_Equality(pUVar34,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar22 != '\0') {
    return extraout_XMM0_Da_00;
  }
  pIVar46 = pIVar47[0xc].interfaceType;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)((long)pplVar40 + -0x30) = 0x43c2e36;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)pplVar40 + -0x30) = 0x43c2e42;
  bVar22 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pIVar46,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar22 != '\0') {
    return extraout_XMM0_Da_01;
  }
  pIVar46 = pIVar47[0x1e].interfaceType;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)((long)pplVar40 + -0x30) = 0x43c2e63;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)pplVar40 + -0x30) = 0x43c2e6f;
  bVar22 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pIVar46,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar22 != '\0') {
    return extraout_XMM0_Da_02;
  }
  fVar56 = extraout_XMM0_Da_02;
  if (bVar53 == false) {
label_043c2f68:
    if (uVar24 != 0) {
label_043c3041:
      *(undefined8 *)((long)&pIVar47[0x12].interfaceType + 4) = 0x3f2ac08300000000;
      return fVar56;
    }
    pIVar36 = *(Il2CppClass **)&pIVar47[0x21].offset;
    if (pIVar36 != (Il2CppClass *)0x0) {
      *(undefined8 *)((long)pplVar40 + -0x30) = 0x43c2f88;
      pUVar28 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pIVar36,(MethodInfo *)0x0);
      if (pUVar28 != (UnityEngine_GameObject_o *)0x0) {
        *(undefined8 *)((long)pplVar40 + -0x30) = 0x43c2fa0;
        UnityEngine_GameObject__SetActive(pUVar28,1,(MethodInfo *)0x0);
        pIVar36 = *(Il2CppClass **)&pIVar47[0x21].offset;
        if (pIVar36 != (Il2CppClass *)0x0) {
          *(undefined8 *)((long)pplVar40 + -0x30) = 0x43c2fbf;
          pUVar29 = (UnityEngine_Animator_o *)
                    UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)pIVar36,(MethodInfo_24E7B40 *)MethodInfo_Animator_GetComponent_Animator);
          if (pUVar29 != (UnityEngine_Animator_o *)0x0) {
            *(undefined8 *)((long)pplVar40 + -0x30) = 0x43c2fd5;
            UnityEngine_Animator__Update(pUVar29,0.0,(MethodInfo *)0x0);
            pIVar36 = *(Il2CppClass **)&pIVar47[0x1e].offset;
            if (pIVar36 != (Il2CppClass *)0x0) {
              *(undefined8 *)((long)pplVar40 + -0x30) = 0x43c2fe8;
              pUVar28 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pIVar36,(MethodInfo *)0x0);
              if (pUVar28 != (UnityEngine_GameObject_o *)0x0) {
                *(undefined8 *)((long)pplVar40 + -0x30) = 0x43c2ff9;
                UnityEngine_GameObject__SetActive(pUVar28,0,(MethodInfo *)0x0);
                pIVar36 = *(Il2CppClass **)&pIVar47[0x1f].offset;
                if (pIVar36 != (Il2CppClass *)0x0) {
                  *(undefined8 *)((long)pplVar40 + -0x30) = 0x43c300c;
                  pUVar28 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)pIVar36,(MethodInfo *)0x0);
                  if (pUVar28 != (UnityEngine_GameObject_o *)0x0) {
                    *(undefined8 *)((long)pplVar40 + -0x30) = 0x43c301d;
                    UnityEngine_GameObject__SetActive(pUVar28,0,(MethodInfo *)0x0);
                    pIVar36 = *(Il2CppClass **)&pIVar47[0x20].offset;
                    if (pIVar36 != (Il2CppClass *)0x0) {
                      *(undefined8 *)((long)pplVar40 + -0x30) = 0x43c3030;
                      pUVar28 = UnityEngine_Component__get_gameObject
                                          ((UnityEngine_Component_o *)pIVar36,(MethodInfo *)0x0);
                      if (pUVar28 != (UnityEngine_GameObject_o *)0x0) {
                        *(undefined8 *)((long)pplVar40 + -0x30) = 0x43c3041;
                        UnityEngine_GameObject__SetActive(pUVar28,0,(MethodInfo *)0x0);
                        fVar56 = extraout_XMM0_Da_04;
                        goto label_043c3041;
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
  else {
    pIVar36 = pIVar47[0x21].interfaceType;
    if (pIVar36 != (Il2CppClass *)0x0) {
      *(undefined8 *)((long)pplVar40 + -0x30) = 0x43c2e97;
      pUVar28 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pIVar36,(MethodInfo *)0x0);
      if (pUVar28 != (UnityEngine_GameObject_o *)0x0) {
        *(undefined8 *)((long)pplVar40 + -0x30) = 0x43c2eaf;
        UnityEngine_GameObject__SetActive(pUVar28,1,(MethodInfo *)0x0);
        pIVar36 = pIVar47[0x21].interfaceType;
        if (pIVar36 != (Il2CppClass *)0x0) {
          *(undefined8 *)((long)pplVar40 + -0x30) = 0x43c2ece;
          pUVar29 = (UnityEngine_Animator_o *)
                    UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)pIVar36,(MethodInfo_24E7B40 *)MethodInfo_Animator_GetComponent_Animator);
          if (pUVar29 != (UnityEngine_Animator_o *)0x0) {
            *(undefined8 *)((long)pplVar40 + -0x30) = 0x43c2ee4;
            UnityEngine_Animator__Update(pUVar29,0.0,(MethodInfo *)0x0);
            pIVar36 = pIVar47[0x1e].interfaceType;
            if (pIVar36 != (Il2CppClass *)0x0) {
              *(undefined8 *)((long)pplVar40 + -0x30) = 0x43c2efb;
              pUVar28 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pIVar36,(MethodInfo *)0x0);
              if (pUVar28 != (UnityEngine_GameObject_o *)0x0) {
                *(undefined8 *)((long)pplVar40 + -0x30) = 0x43c2f10;
                UnityEngine_GameObject__SetActive(pUVar28,0,(MethodInfo *)0x0);
                pIVar36 = pIVar47[0x1f].interfaceType;
                if (pIVar36 != (Il2CppClass *)0x0) {
                  *(undefined8 *)((long)pplVar40 + -0x30) = 0x43c2f27;
                  pUVar28 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)pIVar36,(MethodInfo *)0x0);
                  if (pUVar28 != (UnityEngine_GameObject_o *)0x0) {
                    *(undefined8 *)((long)pplVar40 + -0x30) = 0x43c2f3c;
                    UnityEngine_GameObject__SetActive(pUVar28,0,(MethodInfo *)0x0);
                    pIVar36 = pIVar47[0x20].interfaceType;
                    if (pIVar36 != (Il2CppClass *)0x0) {
                      *(undefined8 *)((long)pplVar40 + -0x30) = 0x43c2f53;
                      pUVar28 = UnityEngine_Component__get_gameObject
                                          ((UnityEngine_Component_o *)pIVar36,(MethodInfo *)0x0);
                      if (pUVar28 != (UnityEngine_GameObject_o *)0x0) {
                        *(undefined8 *)((long)pplVar40 + -0x30) = 0x43c2f68;
                        UnityEngine_GameObject__SetActive(pUVar28,0,(MethodInfo *)0x0);
                        fVar56 = extraout_XMM0_Da_03;
                        goto label_043c2f68;
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
  *(code **)((long)pplVar40 + -0x30) = UI_HUDBottomHandler__ShootTS;
  il2cpp_runtime_helper_022b2c90();
  *(Il2CppRuntimeInterfaceOffsetPair **)((long)pplVar40 + -0x30) = pIVar47;
  *(ulong *)((long)pplVar40 + -0x38) = (ulong)(uVar24 == 0);
  *(Il2CppClass **)((long)pplVar40 + -0x40) = pIVar46;
  if (g_data_057ae3dc == '\0') {
    *(undefined8 *)((long)pplVar40 + -0x48) = 0x43c307d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Animator_GetComponent_Animator);
    *(undefined8 *)((long)pplVar40 + -0x48) = 0x43c3089;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    *(undefined8 *)((long)pplVar40 + -0x48) = 0x43c3095;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    *(undefined8 *)((long)pplVar40 + -0x48) = 0x43c30a1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    g_data_057ae3dc = '\x01';
  }
  pUVar34 = *(UnityEngine_Object_o **)&(pIVar36->_2).static_fields_size;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)((long)pplVar40 + -0x48) = 0x43c30c7;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)pplVar40 + -0x48) = 0x43c30d3;
  bVar22 = UnityEngine_Object__op_Equality(pUVar34,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar22 != '\0') {
    return extraout_XMM0_Da_05;
  }
  x = pIVar36->rgctx_data;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)((long)pplVar40 + -0x48) = 0x43c30f3;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)pplVar40 + -0x48) = 0x43c30ff;
  bVar22 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar22 != '\0') {
    return extraout_XMM0_Da_06;
  }
  pSVar48 = (System_Object_array *)pIVar36->vtable[0xe].method;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)((long)pplVar40 + -0x48) = 0x43c311b;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)pplVar40 + -0x48) = 0x43c3127;
  __this_05 = pSVar48;
  bVar22 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pSVar48,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar22 != '\0') {
    return extraout_XMM0_Da_07;
  }
  lVar32 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if (((lVar32 != 0) && (lVar32 = *(long *)(lVar32 + 0x58), lVar32 != 0)) &&
     (lVar32 = *(long *)(lVar32 + 0x48), lVar32 != 0)) {
    if (*(char *)(lVar32 + 0x11) != '\0') {
      return extraout_XMM0_Da_07;
    }
    __this_05 = (System_Object_array *)pIVar36->vtable[0xf].method;
    if (__this_05 != (System_Object_array *)0x0) {
      *(undefined8 *)((long)pplVar40 + -0x48) = 0x43c3186;
      pUVar28 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_05,(MethodInfo *)0x0);
      if (pUVar28 != (UnityEngine_GameObject_o *)0x0) {
        *(undefined8 *)((long)pplVar40 + -0x48) = 0x43c319e;
        UnityEngine_GameObject__SetActive(pUVar28,1,(MethodInfo *)0x0);
        __this_05 = (System_Object_array *)pIVar36->vtable[0xf].method;
        if (__this_05 != (System_Object_array *)0x0) {
          *(undefined8 *)((long)pplVar40 + -0x48) = 0x43c31bd;
          pUVar29 = (UnityEngine_Animator_o *)
                    UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)__this_05,(MethodInfo_24E7B40 *)MethodInfo_Animator_GetComponent_Animator);
          if (pUVar29 != (UnityEngine_Animator_o *)0x0) {
            *(undefined8 *)((long)pplVar40 + -0x48) = 0x43c31d3;
            UnityEngine_Animator__Update(pUVar29,0.0,(MethodInfo *)0x0);
            __this_05 = (System_Object_array *)pIVar36->vtable[0xe].method;
            if (__this_05 != (System_Object_array *)0x0) {
              *(undefined8 *)((long)pplVar40 + -0x48) = 0x43c31ea;
              pUVar28 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)__this_05,(MethodInfo *)0x0);
              if (pUVar28 != (UnityEngine_GameObject_o *)0x0) {
                *(undefined8 *)((long)pplVar40 + -0x48) = 0x43c31ff;
                UnityEngine_GameObject__SetActive(pUVar28,0,(MethodInfo *)0x0);
                __this_05 = (System_Object_array *)pIVar36->vtable[0xf].methodPtr;
                if (__this_05 != (System_Object_array *)0x0) {
                  *(undefined8 *)((long)pplVar40 + -0x48) = 0x43c3212;
                  pUVar28 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)__this_05,(MethodInfo *)0x0);
                  if (pUVar28 != (UnityEngine_GameObject_o *)0x0) {
                    *(undefined8 *)((long)pplVar40 + -0x48) = 0x43c3223;
                    UnityEngine_GameObject__SetActive(pUVar28,0,(MethodInfo *)0x0);
                    __this_05 = (System_Object_array *)pIVar36->vtable[6].method;
                    if (__this_05 != (System_Object_array *)0x0) {
                      *(undefined8 *)((long)pplVar40 + -0x48) = 0x43c3236;
                      pUVar28 = UnityEngine_Component__get_gameObject
                                          ((UnityEngine_Component_o *)__this_05,(MethodInfo *)0x0);
                      if (pUVar28 != (UnityEngine_GameObject_o *)0x0) {
                        *(undefined8 *)((long)pplVar40 + -0x48) = 0x43c324a;
                        UnityEngine_GameObject__SetActive(pUVar28,1,(MethodInfo *)0x0);
                        __this_05 = (System_Object_array *)pIVar36->vtable[7].methodPtr;
                        if (__this_05 != (System_Object_array *)0x0) {
                          *(undefined8 *)((long)pplVar40 + -0x48) = 0x43c325d;
                          pUVar28 = UnityEngine_Component__get_gameObject
                                              ((UnityEngine_Component_o *)__this_05,(MethodInfo *)0x0);
                          if (pUVar28 != (UnityEngine_GameObject_o *)0x0) {
                            *(undefined8 *)((long)pplVar40 + -0x48) = 0x43c3271;
                            UnityEngine_GameObject__SetActive(pUVar28,1,(MethodInfo *)0x0);
                            (pIVar36->_2).nested_type_count = 0;
                            (pIVar36->_2).vtable_count = 0;
                            (pIVar36->_2).interfaces_count = 0;
                            (pIVar36->_2).interface_offsets_count = 0x3f80;
                            return extraout_XMM0_Da_08;
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
    }
  }
  *(undefined8 *)((long)pplVar40 + -0x48) = 0x43c328d;
  il2cpp_runtime_helper_022b2c90();
  *(long **)((long)pplVar40 + -0x48) = &TypeInfo_Object;
  *(Il2CppClass **)((long)pplVar40 + -0x50) = pIVar36;
  *(System_Object_array **)((long)pplVar40 + -0x58) = pSVar48;
  if (g_data_057ae3dd == '\0') {
    *(undefined8 *)((long)pplVar40 + -0x70) = 0x43c32b1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AHSSWeapon);
    *(undefined8 *)((long)pplVar40 + -0x70) = 0x43c32bd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_APGWeapon);
    *(undefined8 *)((long)pplVar40 + -0x70) = 0x43c32c9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_BladeWeapon);
    *(undefined8 *)((long)pplVar40 + -0x70) = 0x43c32d5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    *(undefined8 *)((long)pplVar40 + -0x70) = 0x43c32e1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ThunderspearWeapon);
    g_data_057ae3dd = '\x01';
  }
  pSVar31 = (System_String_o *)__this_05->m_Items[0x1d];
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)((long)pplVar40 + -0x70) = 0x43c3307;
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar45 = (MethodInfo *)0x0;
  *(undefined8 *)((long)pplVar40 + -0x70) = 0x43c3313;
  bVar22 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pSVar31,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar22 == '\0') {
    pUVar34 = (UnityEngine_Object_o *)__this_05->m_Items[0x1f];
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)pplVar40 + -0x70) = 0x43c349c;
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar46 = (Il2CppClass *)0x0;
    *(undefined8 *)((long)pplVar40 + -0x70) = 0x43c34a8;
    bVar22 = UnityEngine_Object__op_Inequality(pUVar34,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar22 == '\0') {
      return extraout_XMM0_Da_11;
    }
    __this_04 = *(System_Object_array **)((long)pplVar40 + -0x58);
    pSVar49 = *(System_Object_array **)((long)pplVar40 + -0x50);
    pSVar48 = *(System_Object_array **)((long)pplVar40 + -0x48);
    puVar42 = (undefined1 *)((long)pplVar40 + -0x40);
  }
  else {
    *(undefined4 *)((long)pplVar40 + -0x5c) = *(undefined4 *)((long)__this_05->m_Items + 0x104);
    *(undefined8 *)((long)pplVar40 + -0x70) = 0x43c3331;
    fVar56 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    *(float *)((long)__this_05->m_Items + 0x104) = *(float *)((long)pplVar40 + -0x5c) - fVar56;
    *(undefined4 *)((long)pplVar40 + -0x5c) = *(undefined4 *)(__this_05->m_Items + 0x20);
    *(undefined8 *)((long)pplVar40 + -0x70) = 0x43c335a;
    fVar56 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    *(float *)(__this_05->m_Items + 0x20) = *(float *)((long)pplVar40 + -0x5c) - fVar56;
    *(undefined4 *)((long)pplVar40 + -0x5c) = *(undefined4 *)(__this_05->m_Items + 0x21);
    *(undefined8 *)((long)pplVar40 + -0x70) = 0x43c3383;
    fVar56 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    *(float *)(__this_05->m_Items + 0x21) = *(float *)((long)pplVar40 + -0x5c) - fVar56;
    *(undefined8 *)((long)pplVar40 + -0x70) = 0x43c339e;
    UI_HUDBottomHandler__UpdateHumanSpecial((UI_HUDBottomHandler_o *)__this_05,pMVar45);
    *(undefined8 *)((long)pplVar40 + -0x70) = 0x43c33a6;
    UI_HUDBottomHandler__UpdateGas((UI_HUDBottomHandler_o *)__this_05,pMVar45);
    *(undefined8 *)((long)pplVar40 + -0x70) = 0x43c33ae;
    pSVar48 = __this_05;
    UI_HUDBottomHandler__UpdatePerkTimer((UI_HUDBottomHandler_o *)__this_05,pMVar45);
    if (__this_05->m_Items[0x1d] == (Il2CppObject *)0x0) {
      *(undefined8 *)((long)pplVar40 + -0x70) = 0x43c34ff;
      uVar57 = il2cpp_runtime_helper_022b2c90();
      *(long **)((long)pplVar40 + -0x70) = &TypeInfo_Object;
      *(System_Object_array **)((long)pplVar40 + -0x78) = __this_05;
      *(Il2CppClass **)((long)pplVar40 + -0x80) = pIVar38;
      *(System_String_o **)((long)pplVar40 + -0x88) = pSVar31;
      *(undefined8 *)((long)pplVar40 + -0x90) = uVar57;
      if (g_data_057ae3e0 == '\0') {
        *(undefined8 *)((long)pplVar40 + -0x98) = 0x43c3520;
        il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
        *(undefined8 *)((long)pplVar40 + -0x98) = 0x43c352c;
        il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
        *(undefined8 *)((long)pplVar40 + -0x98) = 0x43c3538;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
        *(undefined8 *)((long)pplVar40 + -0x98) = 0x43c3544;
        il2cpp_runtime_helper_023445d0(&"Icons/Specials/");
        *(undefined8 *)((long)pplVar40 + -0x98) = 0x43c3550;
        il2cpp_runtime_helper_023445d0(&"");
        g_data_057ae3e0 = '\x01';
      }
      pCVar8 = (((UI_HUDBottomHandler_o *)pSVar48)->fields)._human;
      if (pCVar8 != (Characters_Human_o *)0x0) {
        __this_02 = (pCVar8->fields).OnPlayerPropertiesChanged;
        if (__this_02 == (System_Action_Hashtable__o *)0x0) {
          pUVar16 = (((UI_HUDBottomHandler_o *)pSVar48)->fields)._specialFill;
          if (pUVar16 != (UnityEngine_UI_Image_o *)0x0) {
            *(undefined8 *)((long)pplVar40 + -0x98) = 0x43c373d;
            UnityEngine_UI_Image__set_fillAmount(pUVar16,0.0,(MethodInfo *)0x0);
            pUVar16 = (((UI_HUDBottomHandler_o *)pSVar48)->fields)._specialIconFill;
            if (pUVar16 != (UnityEngine_UI_Image_o *)0x0) {
              *(undefined8 *)((long)pplVar40 + -0x98) = 0x43c3758;
              UnityEngine_UI_Image__set_fillAmount(pUVar16,0.0,(MethodInfo *)0x0);
              goto label_043c3758;
            }
          }
        }
        else {
          *(undefined8 *)((long)pplVar40 + -0x98) = 0x43c357f;
          fVar56 = Characters_BaseUseable__GetCooldownRatio
                             ((Characters_BaseUseable_o *)__this_02,(MethodInfo *)0x0);
          pUVar16 = (((UI_HUDBottomHandler_o *)pSVar48)->fields)._specialFill;
          if (pUVar16 != (UnityEngine_UI_Image_o *)0x0) {
            *(float *)((long)pplVar40 + -0x8c) = fVar56;
            *(undefined8 *)((long)pplVar40 + -0x98) = 0x43c359d;
            UnityEngine_UI_Image__set_fillAmount(pUVar16,fVar56,(MethodInfo *)0x0);
            pUVar16 = (((UI_HUDBottomHandler_o *)pSVar48)->fields)._specialIconFill;
            if (pUVar16 != (UnityEngine_UI_Image_o *)0x0) {
              *(undefined8 *)((long)pplVar40 + -0x98) = 0x43c35bb;
              UnityEngine_UI_Image__set_fillAmount
                        (pUVar16,*(float *)((long)pplVar40 + -0x8c),(MethodInfo *)0x0);
              pSVar30 = (((UI_HUDBottomHandler_o *)pSVar48)->fields)._currentSpecialIcon;
              b = (((UI_HUDBottomHandler_o *)pSVar48)->fields)._newSpecialIcon;
              *(undefined8 *)((long)pplVar40 + -0x98) = 0x43c35d2;
              bVar22 = System_String__op_Inequality(pSVar30,b,(MethodInfo *)0x0);
              if ((char)bVar22 == '\0') {
label_043c3758:
                pUVar16 = (((UI_HUDBottomHandler_o *)pSVar48)->fields)._specialIconBackground;
              }
              else {
                ppSVar2 = &(((UI_HUDBottomHandler_o *)pSVar48)->fields)._currentSpecialIcon;
                (((UI_HUDBottomHandler_o *)pSVar48)->fields)._currentSpecialIcon =
                     (((UI_HUDBottomHandler_o *)pSVar48)->fields)._newSpecialIcon;
                *(undefined8 *)((long)pplVar40 + -0x98) = 0x43c35fa;
                il2cpp_runtime_helper_022b4080(ppSVar2);
                pSVar30 = (((UI_HUDBottomHandler_o *)pSVar48)->fields)._currentSpecialIcon;
                *(undefined8 *)((long)pplVar40 + -0x98) = 0x43c3613;
                bVar22 = System_String__op_Inequality
                                   (pSVar30,(System_String_o *)"",(MethodInfo *)0x0);
                if ((char)bVar22 == '\0') goto label_043c3758;
                if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
                  *(undefined8 *)((long)pplVar40 + -0x98) = 0x43c3633;
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar31 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
                pSVar30 = *ppSVar2;
                *(undefined8 *)((long)pplVar40 + -0x98) = 0x43c3654;
                pSVar30 = System_String__Concat_3ae5ba0("Icons/Specials/",pSVar30,(MethodInfo *)0x0);
                if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
                  *(undefined8 *)((long)pplVar40 + -0x98) = 0x43c366f;
                  il2cpp_runtime_helper_02337ed0();
                }
                *(undefined8 *)((long)pplVar40 + -0x98) = 0x43c3681;
                texture = (UnityEngine_Texture2D_o *)
                          ApplicationManagers_ResourceManager__LoadAsset(pSVar31,pSVar30,1,(MethodInfo *)0x0);
                if (texture == (UnityEngine_Texture2D_o *)0x0) {
                  *(undefined8 *)((long)pplVar40 + -0x98) = 0x43c384a;
                  il2cpp_runtime_helper_022b2c90();
label_043c384a:
                  *(undefined8 *)((long)pplVar40 + -0x98) = 0x43c3852;
                  il2cpp_runtime_helper_022b2fd0(texture);
label_043c3852:
                  *(undefined8 *)((long)pplVar40 + -0x98) = 0x43c3857;
                  il2cpp_runtime_helper_022b2c90();
                }
                else {
                  if (texture->klass != TypeInfo_Texture2D) goto label_043c384a;
                  pMVar45 = (texture->klass->vtable)._5_get_width.method;
                  UNRECOVERED_JUMPTABLE_00 = (texture->klass->vtable)._5_get_width.methodPtr;
                  *(undefined8 *)((long)pplVar40 + -0x98) = 0x43c36b3;
                  iVar23 = (*UNRECOVERED_JUMPTABLE_00)(texture,pMVar45);
                  UNRECOVERED_JUMPTABLE_00 = (texture->klass->vtable)._7_get_height.methodPtr;
                  *(undefined8 *)((long)pplVar40 + -0x98) = 0x43c36c8;
                  iVar43 = (*UNRECOVERED_JUMPTABLE_00)(texture);
                  *(undefined8 *)((long)pplVar40 + -0x98) = 0x43c36e7;
                  auVar20._4_4_ = (float)iVar43;
                  auVar20._0_4_ = (float)iVar23;
                  auVar20._8_8_ = 0;
                  pSVar31 = (System_String_o *)
                            UnityEngine_Sprite__Create_4e0d730
                                      (texture,(UnityEngine_Rect_o)(auVar20 << 0x40),
                                       (UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
                  pUVar16 = (((UI_HUDBottomHandler_o *)pSVar48)->fields)._specialIconBackground;
                  if (pUVar16 == (UnityEngine_UI_Image_o *)0x0) goto label_043c3852;
                  *(undefined8 *)((long)pplVar40 + -0x98) = 0x43c3705;
                  UnityEngine_UI_Image__set_sprite(pUVar16,(UnityEngine_Sprite_o *)pSVar31,(MethodInfo *)0x0);
                  pUVar16 = (((UI_HUDBottomHandler_o *)pSVar48)->fields)._specialIconFill;
                  if (pUVar16 != (UnityEngine_UI_Image_o *)0x0) {
                    *(undefined8 *)((long)pplVar40 + -0x98) = 0x43c3720;
                    UnityEngine_UI_Image__set_sprite
                              (pUVar16,(UnityEngine_Sprite_o *)pSVar31,(MethodInfo *)0x0);
                    goto label_043c3758;
                  }
                }
                *(undefined8 *)((long)pplVar40 + -0x98) = 0x43c385c;
                auVar70 = il2cpp_runtime_helper_022b2c90();
                if (auVar70._8_4_ != 1) {
                  *(undefined **)((long)pplVar40 + -0x98) = &g_data_043c3987;
                  _Unwind_Resume(auVar70._0_8_);
                }
                *(undefined8 *)((long)pplVar40 + -0x98) = 0x43c38d8;
                pSVar31 = (System_String_o *)__cxa_begin_catch(auVar70._0_8_);
                pvVar37 = (pSVar31->klass->_1).image;
                *(undefined8 *)((long)pplVar40 + -0x98) = 0x43c38f1;
                cVar21 = il2cpp_runtime_helper_0233e000(g_data_057b9b80,pvVar37);
                if (cVar21 == '\0') goto label_043c3956;
                *(undefined8 *)((long)pplVar40 + -0x98) = 0x43c38fa;
                __cxa_end_catch();
                pSVar31 = *ppSVar2;
                *(undefined8 *)((long)pplVar40 + -0x98) = 0x43c3909;
                pSVar30 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Error loading special icon ");
                *(undefined8 *)((long)pplVar40 + -0x98) = 0x43c3916;
                pSVar31 = System_String__Concat_3ae5ba0(pSVar30,pSVar31,(MethodInfo *)0x0);
                *(undefined8 *)((long)pplVar40 + -0x98) = 0x43c3925;
                lVar32 = il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
                if (*(int *)(lVar32 + 0xe4) == 0) {
                  *(undefined8 *)((long)pplVar40 + -0x98) = 0x43c3936;
                  il2cpp_runtime_helper_02337ed0(lVar32);
                }
                *(undefined8 *)((long)pplVar40 + -0x98) = 0x43c3940;
                UnityEngine_Debug__Log((Il2CppObject *)pSVar31,(MethodInfo *)0x0);
                pUVar16 = (((UI_HUDBottomHandler_o *)pSVar48)->fields)._specialIconBackground;
              }
              if (pUVar16 != (UnityEngine_UI_Image_o *)0x0) {
                *(undefined8 *)((long)pplVar40 + -0x98) = 0x43c3770;
                pSVar31 = (System_String_o *)
                          UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pUVar16,(MethodInfo *)0x0);
                pCVar8 = (((UI_HUDBottomHandler_o *)pSVar48)->fields)._human;
                if (pCVar8 != (Characters_Human_o *)0x0) {
                  if ((pCVar8->fields).OnPlayerPropertiesChanged == (System_Action_Hashtable__o *)0x0) {
                    uVar24 = 0;
                  }
                  else {
                    pSVar30 = (((UI_HUDBottomHandler_o *)pSVar48)->fields)._currentSpecialIcon;
                    *(undefined8 *)((long)pplVar40 + -0x98) = 0x43c37a7;
                    uVar24 = System_String__op_Inequality
                                       (pSVar30,(System_String_o *)"",(MethodInfo *)0x0);
                  }
                  if (pSVar31 != (System_String_o *)0x0) {
                    *(undefined8 *)((long)pplVar40 + -0x98) = 0x43c37c9;
                    UnityEngine_GameObject__SetActive
                              ((UnityEngine_GameObject_o *)pSVar31,uVar24 & 0xff,(MethodInfo *)0x0);
                    pUVar16 = (((UI_HUDBottomHandler_o *)pSVar48)->fields)._specialIconFill;
                    if (pUVar16 != (UnityEngine_UI_Image_o *)0x0) {
                      *(undefined8 *)((long)pplVar40 + -0x98) = 0x43c37e1;
                      pSVar31 = (System_String_o *)
                                UnityEngine_Component__get_gameObject
                                          ((UnityEngine_Component_o *)pUVar16,(MethodInfo *)0x0);
                      pCVar8 = (((UI_HUDBottomHandler_o *)pSVar48)->fields)._human;
                      if (pCVar8 != (Characters_Human_o *)0x0) {
                        if ((pCVar8->fields).OnPlayerPropertiesChanged == (System_Action_Hashtable__o *)0x0) {
                          uVar24 = 0;
                        }
                        else {
                          pSVar30 = (((UI_HUDBottomHandler_o *)pSVar48)->fields)._currentSpecialIcon;
                          *(undefined8 *)((long)pplVar40 + -0x98) = 0x43c3818;
                          uVar24 = System_String__op_Inequality
                                             (pSVar30,(System_String_o *)"",(MethodInfo *)0x0);
                        }
                        if (pSVar31 != (System_String_o *)0x0) {
                          UnityEngine_GameObject__SetActive
                                    ((UnityEngine_GameObject_o *)pSVar31,uVar24 & 0xff,(MethodInfo *)0x0);
                          return extraout_XMM0_Da_13;
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
      *(undefined8 *)((long)pplVar40 + -0x98) = 0x43c3956;
      il2cpp_runtime_helper_022b2c90();
label_043c3956:
      *(undefined8 *)((long)pplVar40 + -0x98) = 0x43c3960;
      puVar33 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar33 = pSVar31->klass;
      *(undefined **)((long)pplVar40 + -0x98) = &g_data_043c3977;
      __cxa_throw(puVar33,&PTR_PTR_05215060,0);
    }
    pIVar46 = __this_05->m_Items[0x1d][0x10].klass;
    if (pIVar46 == (Il2CppClass *)0x0) {
      return extraout_XMM0_Da_09;
    }
    pvVar37 = (pIVar46->_1).image;
    bVar6 = *(byte *)((long)pvVar37 + 0x130);
    bVar7 = (TypeInfo_BladeWeapon->_2).naturalAligment;
    if ((bVar6 < bVar7) ||
       (*(Il2CppClass **)(*(long *)((long)pvVar37 + 200) + -8 + (ulong)bVar7 * 8) != TypeInfo_BladeWeapon)) {
      bVar7 = *(byte *)(TypeInfo_APGWeapon + 0x130);
      if ((bVar7 <= bVar6) &&
         (*(long *)(*(long *)((long)pvVar37 + 200) + -8 + (long)(ulong)bVar7 * 8) == TypeInfo_APGWeapon)) {
        UI_HUDBottomHandler__UpdateAPG((UI_HUDBottomHandler_o *)__this_05,(MethodInfo *)(ulong)bVar7);
        return extraout_XMM0_Da_12;
      }
      pIVar46 = (Il2CppClass *)(ulong)*(byte *)(TypeInfo_AHSSWeapon + 0x130);
      if ((bVar6 < *(byte *)(TypeInfo_AHSSWeapon + 0x130)) ||
         (*(long *)(*(long *)((long)pvVar37 + 200) + -8 + (long)pIVar46 * 8) != TypeInfo_AHSSWeapon)) {
        bVar7 = (TypeInfo_ThunderspearWeapon->_2).naturalAligment;
        if (bVar6 < bVar7) {
          return extraout_XMM0_Da_09;
        }
        if (*(Il2CppClass **)(*(long *)((long)pvVar37 + 200) + -8 + (long)(ulong)bVar7 * 8) != TypeInfo_ThunderspearWeapon) {
          return extraout_XMM0_Da_09;
        }
        UI_HUDBottomHandler__UpdateTS((UI_HUDBottomHandler_o *)__this_05,(MethodInfo *)(ulong)bVar7);
        return extraout_XMM0_Da_10;
      }
      __this_04 = *(System_Object_array **)((long)pplVar40 + -0x58);
      pSVar51 = *(System_Object_array **)((long)pplVar40 + -0x50);
      pSVar48 = *(System_Object_array **)((long)pplVar40 + -0x48);
      puVar41 = (undefined1 *)((long)pplVar40 + -0x40);
    }
    else {
      __this_04 = *(System_Object_array **)((long)pplVar40 + -0x58);
      pSVar51 = *(System_Object_array **)((long)pplVar40 + -0x50);
      uVar57 = *(undefined8 *)((long)pplVar40 + -0x48);
      *(long **)((long)pplVar40 + -0x48) = &TypeInfo_Object;
      *(undefined8 *)((long)pplVar40 + -0x50) = uVar57;
      *(System_Object_array **)((long)pplVar40 + -0x58) = pSVar51;
      *(Il2CppClass **)((long)pplVar40 + -0x60) = unaff_R13;
      *(Il2CppClass **)((long)pplVar40 + -0x68) = pIVar38;
      *(System_Object_array **)((long)pplVar40 + -0x70) = __this_04;
      if (g_data_057ae3e1 == '\0') {
        *(undefined8 *)((long)pplVar40 + -0x90) = 0x43c3e36;
        il2cpp_runtime_helper_023445d0(&TypeInfo_BladeWeapon);
        *(undefined8 *)((long)pplVar40 + -0x90) = 0x43c3e42;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Animator_GetComponent_Animator);
        *(undefined8 *)((long)pplVar40 + -0x90) = 0x43c3e4e;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
        *(undefined8 *)((long)pplVar40 + -0x90) = 0x43c3e5a;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
        *(undefined8 *)((long)pplVar40 + -0x90) = 0x43c3e66;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
        *(undefined8 *)((long)pplVar40 + -0x90) = 0x43c3e72;
        il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Item);
        *(undefined8 *)((long)pplVar40 + -0x90) = 0x43c3e7e;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        *(undefined8 *)((long)pplVar40 + -0x90) = 0x43c3e8a;
        il2cpp_runtime_helper_023445d0(&"Prefabs/InGame/HUDBladeAmmo");
        g_data_057ae3e1 = '\x01';
      }
      if ((__this_05->m_Items[0x1d] == (Il2CppObject *)0x0) ||
         (plVar44 = (long *)__this_05->m_Items[0x1d][0x10].klass,
         (System_Object_array *)plVar44 == (System_Object_array *)0x0)) goto label_043c45cd;
      pUVar14 = ((Il2CppClass_1 *)&((System_Object_array *)plVar44)->obj)->image;
      bVar6 = (TypeInfo_BladeWeapon->_2).naturalAligment;
      if ((bVar6 <= (pUVar14->_2).naturalAligment) &&
         ((pUVar14->_2).typeHierarchy[(ulong)bVar6 - 1] == TypeInfo_BladeWeapon)) {
        pUVar15 = (UnityEngine_Component_o *)__this_05->m_Items[0x27];
        if (pUVar15 == (UnityEngine_Component_o *)0x0) goto label_043c45cd;
        *(float *)((long)pplVar40 + -0x80) =
             *(float *)((Il2CppType *)((System_Object_array *)plVar44)->m_Items + 2) /
             *(float *)&((Il2CppType *)((System_Object_array *)plVar44)->m_Items)[1].field_0xc;
        *(undefined8 *)((long)pplVar40 + -0x90) = 0x43c3f0b;
        pUVar28 = UnityEngine_Component__get_gameObject(pUVar15,(MethodInfo *)0x0);
        if (pUVar28 == (UnityEngine_GameObject_o *)0x0) goto label_043c45cd;
        *(undefined8 *)((long)pplVar40 + -0x90) = 0x43c3f1e;
        bVar22 = UnityEngine_GameObject__get_activeSelf(pUVar28,(MethodInfo *)0x0);
        if ((char)bVar22 != '\0') {
          pUVar16 = (UnityEngine_UI_Image_o *)__this_05->m_Items[0x28];
          if (pUVar16 == (UnityEngine_UI_Image_o *)0x0) goto label_043c45cd;
          pUVar12 = (UnityEngine_UI_Image_o *)__this_05->m_Items[0x27];
          *(undefined8 *)((long)pplVar40 + -0x90) = 0x43c3f4a;
          UnityEngine_UI_Image__set_fillAmount(pUVar16,*(float *)((long)pplVar40 + -0x80),(MethodInfo *)0x0);
          if (pUVar12 == (UnityEngine_UI_Image_o *)0x0) goto label_043c45cd;
          *(undefined8 *)((long)pplVar40 + -0x90) = 0x43c3f63;
          UnityEngine_UI_Image__set_fillAmount(pUVar12,*(float *)((long)pplVar40 + -0x80),(MethodInfo *)0x0);
          pIVar50 = __this_05->m_Items[0x27];
          if (*(float *)((long)pplVar40 + -0x80) <= 0.25) {
            if (pIVar50 == (Il2CppObject *)0x0) goto label_043c45cd;
            pIVar5 = __this_05->m_Items[4];
            pIVar3 = __this_05->m_Items[5];
            pMVar45 = pIVar50->klass->vtable[0x17].method;
            UNRECOVERED_JUMPTABLE_00 = pIVar50->klass->vtable[0x17].methodPtr;
            *(undefined8 *)((long)pplVar40 + -0x90) = 0x43c4013;
            (*UNRECOVERED_JUMPTABLE_00)((int)pIVar5,(int)pIVar3,pIVar50,pMVar45);
            pIVar50 = __this_05->m_Items[0x28];
            if (pIVar50 == (Il2CppObject *)0x0) goto label_043c45cd;
            pIVar5 = __this_05->m_Items[4];
            pIVar3 = __this_05->m_Items[5];
            pMVar45 = pIVar50->klass->vtable[0x17].method;
            UNRECOVERED_JUMPTABLE_00 = pIVar50->klass->vtable[0x17].methodPtr;
            *(undefined8 *)((long)pplVar40 + -0x90) = 0x43c403f;
            (*UNRECOVERED_JUMPTABLE_00)((int)pIVar5,(int)pIVar3,pIVar50,pMVar45);
            pIVar50 = __this_05->m_Items[0x29];
            if (pIVar50 == (Il2CppObject *)0x0) goto label_043c45cd;
            uVar58 = SUB84(__this_05->m_Items[6],0);
          }
          else {
            if (pIVar50 == (Il2CppObject *)0x0) goto label_043c45cd;
            pIVar5 = __this_05->m_Items[10];
            pIVar3 = __this_05->m_Items[0xb];
            pMVar45 = pIVar50->klass->vtable[0x17].method;
            UNRECOVERED_JUMPTABLE_00 = pIVar50->klass->vtable[0x17].methodPtr;
            *(undefined8 *)((long)pplVar40 + -0x90) = 0x43c3f9e;
            (*UNRECOVERED_JUMPTABLE_00)((int)pIVar5,(int)pIVar3,pIVar50,pMVar45);
            pIVar50 = __this_05->m_Items[0x28];
            if (pIVar50 == (Il2CppObject *)0x0) goto label_043c45cd;
            pIVar5 = __this_05->m_Items[10];
            pIVar3 = __this_05->m_Items[0xb];
            pMVar45 = pIVar50->klass->vtable[0x17].method;
            UNRECOVERED_JUMPTABLE_00 = pIVar50->klass->vtable[0x17].methodPtr;
            *(undefined8 *)((long)pplVar40 + -0x90) = 0x43c3fca;
            (*UNRECOVERED_JUMPTABLE_00)((int)pIVar5,(int)pIVar3,pIVar50,pMVar45);
            pIVar50 = __this_05->m_Items[0x29];
            if (pIVar50 == (Il2CppObject *)0x0) goto label_043c45cd;
            uVar58 = SUB84(__this_05->m_Items[0xc],0);
          }
          UNRECOVERED_JUMPTABLE_00 = pIVar50->klass->vtable[0x17].methodPtr;
          *(undefined8 *)((long)pplVar40 + -0x90) = 0x43c406b;
          (*UNRECOVERED_JUMPTABLE_00)(uVar58);
        }
        if (0.0 < *(float *)((long)pplVar40 + -0x80)) {
label_043c40d5:
          pUVar15 = (UnityEngine_Component_o *)__this_05->m_Items[0x29];
          if (pUVar15 == (UnityEngine_Component_o *)0x0) goto label_043c45cd;
          *(undefined8 *)((long)pplVar40 + -0x90) = 0x43c40ec;
          pUVar28 = UnityEngine_Component__get_gameObject(pUVar15,(MethodInfo *)0x0);
          if (pUVar28 == (UnityEngine_GameObject_o *)0x0) goto label_043c45cd;
          *(undefined8 *)((long)pplVar40 + -0x90) = 0x43c40ff;
          bVar22 = UnityEngine_GameObject__get_activeSelf(pUVar28,(MethodInfo *)0x0);
          fVar56 = extraout_XMM0_Da_14;
          if (((char)bVar22 != '\0') || (fVar56 = 0.0, 0.0 < *(float *)((long)__this_05->m_Items + 0x104)))
          goto label_043c42f1;
          pUVar15 = (UnityEngine_Component_o *)__this_05->m_Items[0x2a];
          if (pUVar15 == (UnityEngine_Component_o *)0x0) goto label_043c45cd;
          *(undefined8 *)((long)pplVar40 + -0x90) = 0x43c412f;
          pUVar28 = UnityEngine_Component__get_gameObject(pUVar15,(MethodInfo *)0x0);
          if (pUVar28 == (UnityEngine_GameObject_o *)0x0) goto label_043c45cd;
          *(undefined8 *)((long)pplVar40 + -0x90) = 0x43c4144;
          UnityEngine_GameObject__SetActive(pUVar28,0,(MethodInfo *)0x0);
          fVar56 = 0.0;
          if (*(float *)((long)pplVar40 + -0x80) <= 0.0) goto label_043c42f1;
          pUVar15 = (UnityEngine_Component_o *)__this_05->m_Items[0x29];
          if (pUVar15 == (UnityEngine_Component_o *)0x0) goto label_043c45cd;
          *(undefined8 *)((long)pplVar40 + -0x90) = 0x43c416d;
          pUVar28 = UnityEngine_Component__get_gameObject(pUVar15,(MethodInfo *)0x0);
          if (pUVar28 == (UnityEngine_GameObject_o *)0x0) goto label_043c45cd;
          *(undefined8 *)((long)pplVar40 + -0x90) = 0x43c4185;
          UnityEngine_GameObject__SetActive(pUVar28,1,(MethodInfo *)0x0);
          pUVar15 = (UnityEngine_Component_o *)__this_05->m_Items[0x2b];
          if (pUVar15 == (UnityEngine_Component_o *)0x0) goto label_043c45cd;
          *(undefined8 *)((long)pplVar40 + -0x90) = 0x43c419c;
          pUVar28 = UnityEngine_Component__get_gameObject(pUVar15,(MethodInfo *)0x0);
          if (pUVar28 == (UnityEngine_GameObject_o *)0x0) goto label_043c45cd;
          *(undefined8 *)((long)pplVar40 + -0x90) = 0x43c41b1;
          UnityEngine_GameObject__SetActive(pUVar28,0,(MethodInfo *)0x0);
          pUVar15 = (UnityEngine_Component_o *)__this_05->m_Items[0x27];
          if (pUVar15 == (UnityEngine_Component_o *)0x0) goto label_043c45cd;
          *(undefined8 *)((long)pplVar40 + -0x90) = 0x43c41c8;
          pUVar28 = UnityEngine_Component__get_gameObject(pUVar15,(MethodInfo *)0x0);
          if (pUVar28 == (UnityEngine_GameObject_o *)0x0) goto label_043c45cd;
          *(undefined8 *)((long)pplVar40 + -0x90) = 0x43c41e0;
          UnityEngine_GameObject__SetActive(pUVar28,1,(MethodInfo *)0x0);
          pUVar15 = (UnityEngine_Component_o *)__this_05->m_Items[0x28];
          if (pUVar15 == (UnityEngine_Component_o *)0x0) goto label_043c45cd;
          *(undefined8 *)((long)pplVar40 + -0x90) = 0x43c41f7;
          pUVar28 = UnityEngine_Component__get_gameObject(pUVar15,(MethodInfo *)0x0);
          if (pUVar28 == (UnityEngine_GameObject_o *)0x0) goto label_043c45cd;
          *(undefined8 *)((long)pplVar40 + -0x90) = 0x43c420f;
          UnityEngine_GameObject__SetActive(pUVar28,1,(MethodInfo *)0x0);
          pUVar16 = (UnityEngine_UI_Image_o *)__this_05->m_Items[0x28];
          if (pUVar16 == (UnityEngine_UI_Image_o *)0x0) goto label_043c45cd;
          pUVar12 = (UnityEngine_UI_Image_o *)__this_05->m_Items[0x27];
          *(undefined8 *)((long)pplVar40 + -0x90) = 0x43c4233;
          UnityEngine_UI_Image__set_fillAmount(pUVar16,*(float *)((long)pplVar40 + -0x80),(MethodInfo *)0x0);
          if (pUVar12 == (UnityEngine_UI_Image_o *)0x0) goto label_043c45cd;
          *(undefined8 *)((long)pplVar40 + -0x90) = 0x43c424c;
          UnityEngine_UI_Image__set_fillAmount(pUVar12,*(float *)((long)pplVar40 + -0x80),(MethodInfo *)0x0);
          pSVar39 = (System_Collections_Generic_List_object__o *)__this_05->m_Items[0x2e];
          fVar56 = extraout_XMM0_Da_15;
        }
        else {
          pUVar15 = (UnityEngine_Component_o *)__this_05->m_Items[0x2b];
          if (pUVar15 == (UnityEngine_Component_o *)0x0) goto label_043c45cd;
          *(undefined8 *)((long)pplVar40 + -0x90) = 0x43c408c;
          pUVar28 = UnityEngine_Component__get_gameObject(pUVar15,(MethodInfo *)0x0);
          if (pUVar28 == (UnityEngine_GameObject_o *)0x0) goto label_043c45cd;
          *(undefined8 *)((long)pplVar40 + -0x90) = 0x43c409f;
          bVar22 = UnityEngine_GameObject__get_activeSelf(pUVar28,(MethodInfo *)0x0);
          if ((char)bVar22 != '\0') goto label_043c40d5;
          pUVar15 = (UnityEngine_Component_o *)__this_05->m_Items[0x2a];
          if (pUVar15 == (UnityEngine_Component_o *)0x0) goto label_043c45cd;
          *(undefined8 *)((long)pplVar40 + -0x90) = 0x43c40ba;
          pUVar28 = UnityEngine_Component__get_gameObject(pUVar15,(MethodInfo *)0x0);
          if (pUVar28 == (UnityEngine_GameObject_o *)0x0) goto label_043c45cd;
          *(undefined8 *)((long)pplVar40 + -0x90) = 0x43c40cd;
          bVar22 = UnityEngine_GameObject__get_activeSelf(pUVar28,(MethodInfo *)0x0);
          if ((char)bVar22 != '\0') goto label_043c40d5;
          pUVar15 = (UnityEngine_Component_o *)__this_05->m_Items[0x2b];
          if (pUVar15 == (UnityEngine_Component_o *)0x0) goto label_043c45cd;
          *(undefined8 *)((long)pplVar40 + -0x90) = 0x43c4278;
          pUVar28 = UnityEngine_Component__get_gameObject(pUVar15,(MethodInfo *)0x0);
          if (pUVar28 == (UnityEngine_GameObject_o *)0x0) goto label_043c45cd;
          *(undefined8 *)((long)pplVar40 + -0x90) = 0x43c4290;
          UnityEngine_GameObject__SetActive(pUVar28,1,(MethodInfo *)0x0);
          pUVar15 = (UnityEngine_Component_o *)__this_05->m_Items[0x2b];
          if (pUVar15 == (UnityEngine_Component_o *)0x0) goto label_043c45cd;
          *(undefined8 *)((long)pplVar40 + -0x90) = 0x43c42af;
          pUVar29 = (UnityEngine_Animator_o *)
                    UnityEngine_Component__GetComponent_object_(pUVar15,(MethodInfo_24E7B40 *)MethodInfo_Animator_GetComponent_Animator);
          if (pUVar29 == (UnityEngine_Animator_o *)0x0) goto label_043c45cd;
          *(undefined8 *)((long)pplVar40 + -0x90) = 0x43c42c5;
          UnityEngine_Animator__Update(pUVar29,0.0,(MethodInfo *)0x0);
          pUVar15 = (UnityEngine_Component_o *)__this_05->m_Items[0x29];
          if (pUVar15 == (UnityEngine_Component_o *)0x0) goto label_043c45cd;
          *(undefined8 *)((long)pplVar40 + -0x90) = 0x43c42dc;
          pUVar28 = UnityEngine_Component__get_gameObject(pUVar15,(MethodInfo *)0x0);
          if (pUVar28 == (UnityEngine_GameObject_o *)0x0) goto label_043c45cd;
          *(undefined8 *)((long)pplVar40 + -0x90) = 0x43c42f1;
          UnityEngine_GameObject__SetActive(pUVar28,0,(MethodInfo *)0x0);
          fVar56 = extraout_XMM0_Da_16;
label_043c42f1:
          pSVar39 = (System_Collections_Generic_List_object__o *)__this_05->m_Items[0x2e];
        }
        if (pSVar39 != (System_Collections_Generic_List_object__o *)0x0) {
          iVar23 = (pSVar39->fields)._size;
          *(long **)((long)pplVar40 + -0x78) = plVar44;
          fVar54 = (((UnityEngine_Vector4_o *)
                    ((long)((Il2CppType *)((System_Object_array *)plVar44)->m_Items + 2) + 8))->fields).x;
          if ((int)fVar54 < iVar23) {
            if (iVar23 - (int)fVar54 < 1) {
              return fVar56;
            }
            iVar43 = 0;
            do {
              *(undefined8 *)((long)pplVar40 + -0x90) = 0x43c433d;
              pUVar34 = (UnityEngine_Object_o *)
                        System_Collections_Generic_List_object___get_Item(pSVar39,0,MethodInfo_GameObject_get_Item);
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                *(undefined8 *)((long)pplVar40 + -0x90) = 0x43c4358;
                il2cpp_runtime_helper_02337ed0();
              }
              *(undefined8 *)((long)pplVar40 + -0x90) = 0x43c4362;
              UnityEngine_Object__Destroy_4e01c60(pUVar34,(MethodInfo *)0x0);
              pSVar39 = (System_Collections_Generic_List_object__o *)__this_05->m_Items[0x2f];
              if (pSVar39 == (System_Collections_Generic_List_object__o *)0x0) break;
              *(undefined8 *)((long)pplVar40 + -0x90) = 0x43c437c;
              pUVar34 = (UnityEngine_Object_o *)
                        System_Collections_Generic_List_object___get_Item(pSVar39,0,MethodInfo_GameObject_get_Item);
              *(undefined8 *)((long)pplVar40 + -0x90) = 0x43c4386;
              UnityEngine_Object__Destroy_4e01c60(pUVar34,(MethodInfo *)0x0);
              pSVar39 = (System_Collections_Generic_List_object__o *)__this_05->m_Items[0x2e];
              if (pSVar39 == (System_Collections_Generic_List_object__o *)0x0) break;
              *(undefined8 *)((long)pplVar40 + -0x90) = 0x43c43a1;
              System_Collections_Generic_List_object___RemoveAt(pSVar39,0,MethodInfo_Void_RemoveAt);
              pSVar39 = (System_Collections_Generic_List_object__o *)__this_05->m_Items[0x2f];
              if (pSVar39 == (System_Collections_Generic_List_object__o *)0x0) break;
              *(undefined8 *)((long)pplVar40 + -0x90) = 0x43c43bc;
              System_Collections_Generic_List_object___RemoveAt(pSVar39,0,MethodInfo_Void_RemoveAt);
              iVar43 = iVar43 + 1;
              if (iVar23 - *(int *)(*(long *)((long)pplVar40 + -0x78) + 0x48) <= iVar43) {
                return extraout_XMM0_Da_17;
              }
              pSVar39 = (System_Collections_Generic_List_object__o *)__this_05->m_Items[0x2e];
            } while (pSVar39 != (System_Collections_Generic_List_object__o *)0x0);
          }
          else {
            if ((int)fVar54 <= iVar23) {
              return fVar56;
            }
            if ((int)fVar54 - iVar23 < 1) {
              return fVar56;
            }
            pUVar28 = (UnityEngine_GameObject_o *)__this_05->m_Items[0x2c];
            if (pUVar28 != (UnityEngine_GameObject_o *)0x0) {
              iVar43 = 0;
              *(System_Object_array **)((long)pplVar40 + -0x80) = __this_05;
              do {
                *(undefined8 *)((long)pplVar40 + -0x90) = 0x43c4427;
                pUVar35 = UnityEngine_GameObject__get_transform(pUVar28,(MethodInfo *)0x0);
                *(undefined8 *)((long)pplVar40 + -0x90) = 0x43c4435;
                pUVar28 = UI_ElementFactory__InstantiateAndBind(pUVar35,"Prefabs/InGame/HUDBladeAmmo",(MethodInfo *)0x0);
                lVar32 = MethodInfo_Void_Add;
                if (pSVar39 == (System_Collections_Generic_List_object__o *)0x0) break;
                piVar1 = &(pSVar39->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar48 = (pSVar39->fields)._items;
                if (pSVar48 == (System_Object_array *)0x0) break;
                uVar24 = (pSVar39->fields)._size;
                if (uVar24 < (uint)pSVar48->max_length) {
                  (pSVar39->fields)._size = uVar24 + 1;
                  pSVar48->m_Items[(int)uVar24] = (Il2CppObject *)pUVar28;
                  *(undefined8 *)((long)pplVar40 + -0x90) = 0x43c447d;
                  il2cpp_runtime_helper_022b4080(pSVar48->m_Items + (int)uVar24);
                  pUVar28 = *(UnityEngine_GameObject_o **)(*(long *)((long)pplVar40 + -0x80) + 0x188);
                }
                else {
                  pMVar13 = *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar32 + 0x20) + 0xc0) + 0x70);
                  *(undefined8 *)((long)pplVar40 + -0x90) = 0x43c44ba;
                  System_Collections_Generic_List_object___AddWithResize
                            (pSVar39,(Il2CppObject *)pUVar28,pMVar13);
                  pUVar28 = *(UnityEngine_GameObject_o **)(*(long *)((long)pplVar40 + -0x80) + 0x188);
                }
                if (pUVar28 == (UnityEngine_GameObject_o *)0x0) break;
                *(undefined8 *)((long)pplVar40 + -0x90) = 0x43c44d9;
                pUVar35 = UnityEngine_GameObject__get_transform(pUVar28,(MethodInfo *)0x0);
                *(undefined8 *)((long)pplVar40 + -0x90) = 0x43c44ea;
                pUVar28 = UI_ElementFactory__InstantiateAndBind(pUVar35,"Prefabs/InGame/HUDBladeAmmo",(MethodInfo *)0x0);
                if (pUVar28 == (UnityEngine_GameObject_o *)0x0) break;
                *(undefined8 *)((long)pplVar40 + -0x90) = 0x43c4500;
                pUVar35 = UnityEngine_GameObject__get_transform(pUVar28,(MethodInfo *)0x0);
                *(undefined8 *)((long)pplVar40 + -0x90) = 0x43c4514;
                UVar69 = UnityEngine_Quaternion__Internal_FromEulerRad
                                   ((UnityEngine_Vector3_o)ZEXT812(0x40490fdb00000000),(MethodInfo *)0x0);
                if (pUVar35 == (UnityEngine_Transform_o *)0x0) break;
                *(undefined8 *)((long)pplVar40 + -0x90) = 0x43c4527;
                UnityEngine_Transform__set_localRotation(pUVar35,UVar69,(MethodInfo *)0x0);
                lVar32 = MethodInfo_Void_Add;
                pSVar39 = *(System_Collections_Generic_List_object__o **)
                           (*(long *)((long)pplVar40 + -0x80) + 0x198);
                if (pSVar39 == (System_Collections_Generic_List_object__o *)0x0) break;
                piVar1 = &(pSVar39->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar48 = (pSVar39->fields)._items;
                if (pSVar48 == (System_Object_array *)0x0) break;
                uVar24 = (pSVar39->fields)._size;
                if (uVar24 < (uint)pSVar48->max_length) {
                  (pSVar39->fields)._size = uVar24 + 1;
                  pSVar48->m_Items[(int)uVar24] = (Il2CppObject *)pUVar28;
                  *(undefined8 *)((long)pplVar40 + -0x90) = 0x43c4577;
                  fVar56 = (float)il2cpp_runtime_helper_022b4080(pSVar48->m_Items + (int)uVar24);
                }
                else {
                  pMVar13 = *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar32 + 0x20) + 0xc0) + 0x70);
                  *(undefined8 *)((long)pplVar40 + -0x90) = 0x43c4597;
                  System_Collections_Generic_List_object___AddWithResize
                            (pSVar39,(Il2CppObject *)pUVar28,pMVar13);
                  fVar56 = extraout_XMM0_Da_18;
                }
                iVar43 = iVar43 + 1;
                if (*(int *)(*(long *)((long)pplVar40 + -0x78) + 0x48) - iVar23 <= iVar43) {
                  return fVar56;
                }
                pUVar28 = *(UnityEngine_GameObject_o **)(*(long *)((long)pplVar40 + -0x80) + 0x180);
                pSVar39 = *(System_Collections_Generic_List_object__o **)
                           (*(long *)((long)pplVar40 + -0x80) + 400);
              } while (pUVar28 != (UnityEngine_GameObject_o *)0x0);
            }
          }
        }
label_043c45cd:
        *(undefined8 *)((long)pplVar40 + -0x90) = 0x43c45d2;
        fVar56 = (float)il2cpp_runtime_helper_022b2c90();
        return fVar56;
      }
      *(undefined8 *)((long)pplVar40 + -0x90) = 0x43c45e9;
      pIVar46 = TypeInfo_BladeWeapon;
      pSVar48 = (System_Object_array *)plVar44;
      il2cpp_runtime_helper_022b2fd0();
      *(System_Object_array **)((long)pplVar40 + -0x90) = __this_05;
      *(System_Object_array **)((long)pplVar40 + -0x98) = pSVar51;
      *(Il2CppClass **)((long)pplVar40 + -0xa0) = unaff_R13;
      *(Il2CppClass **)((long)pplVar40 + -0xa8) = pIVar38;
      *(System_Object_array **)((long)pplVar40 + -0xb0) = __this_04;
      puVar41 = (undefined1 *)((long)pplVar40 + -0xc0);
      if (g_data_057ae3e2 == '\0') {
        *(undefined8 *)((long)pplVar40 + -200) = 0x43c4615;
        il2cpp_runtime_helper_023445d0(&TypeInfo_AmmoWeapon);
        g_data_057ae3e2 = '\x01';
      }
      if ((*(long *)((long)((Il2CppType *)pSVar48->m_Items + 0xe) + 8) == 0) ||
         (pSVar51 = *(System_Object_array **)
                     (*(long *)((long)((Il2CppType *)pSVar48->m_Items + 0xe) + 8) + 0x100),
         pSVar51 == (System_Object_array *)0x0)) {
label_043c4ab9:
        *(undefined8 *)((long)pplVar40 + -200) = 0x43c4abe;
        il2cpp_runtime_helper_022b2c90();
      }
      else {
        pIVar36 = (pSVar51->obj).klass;
        bVar6 = (TypeInfo_AmmoWeapon->_2).naturalAligment;
        pIVar46 = TypeInfo_AmmoWeapon;
        if ((bVar6 <= (pIVar36->_2).naturalAligment) &&
           ((pIVar36->_2).typeHierarchy[(ulong)bVar6 - 1] == TypeInfo_AmmoWeapon)) {
          iVar23 = *(int *)((long)pSVar51->m_Items + 0x24);
          if (iVar23 < 1) {
            if (*(int *)(pSVar51->m_Items + 5) == -1) {
              fVar56 = 1.0;
              pUVar16 = *(UnityEngine_UI_Image_o **)((long)((Il2CppType *)pSVar48->m_Items + 0x18) + 8);
            }
            else {
              fVar56 = 0.0;
              pUVar16 = *(UnityEngine_UI_Image_o **)((long)((Il2CppType *)pSVar48->m_Items + 0x18) + 8);
            }
          }
          else {
            fVar56 = (float)*(int *)(pSVar51->m_Items + 5) / (float)iVar23;
            pUVar16 = *(UnityEngine_UI_Image_o **)((long)((Il2CppType *)pSVar48->m_Items + 0x18) + 8);
          }
          if (pUVar16 != (UnityEngine_UI_Image_o *)0x0) {
            __this_04 = ((Il2CppType *)pSVar48->m_Items)[0x18].data;
            pIVar46 = (Il2CppClass *)0x0;
            *(float *)((long)pplVar40 + -0xb4) = fVar56;
            *(undefined8 *)((long)pplVar40 + -200) = 0x43c46dc;
            UnityEngine_UI_Image__set_fillAmount(pUVar16,fVar56,(MethodInfo *)0x0);
            if (__this_04 != (System_Object_array *)0x0) {
              pIVar46 = (Il2CppClass *)0x0;
              *(undefined8 *)((long)pplVar40 + -200) = 0x43c46f5;
              UnityEngine_UI_Image__set_fillAmount
                        ((UnityEngine_UI_Image_o *)__this_04,*(float *)((long)pplVar40 + -0xb4),
                         (MethodInfo *)0x0);
              if (*(float *)((long)pplVar40 + -0xb4) <= 0.0) {
                if (((Il2CppType *)pSVar48->m_Items)[0x1a].data != (long *)0x0) {
                  pIVar36 = ((Il2CppType *)pSVar48->m_Items)[3].data;
                  lVar32 = *((Il2CppType *)pSVar48->m_Items)[0x1a].data;
                  pIVar46 = *(Il2CppClass **)(lVar32 + 0x2b0);
                  vtableDispatch = *(code **)(lVar32 + 0x2a8);
                  *(undefined8 *)((long)pplVar40 + -200) = 0x43c47cf;
                  (*vtableDispatch)((int)pIVar36);
                  plVar26 = *(long **)((long)((Il2CppType *)pSVar48->m_Items + 0x1b) + 8);
                  if (plVar26 != (long *)0x0) {
                    pIVar36 = ((Il2CppType *)pSVar48->m_Items)[3].data;
                    lVar32 = *plVar26;
                    pIVar46 = *(Il2CppClass **)(lVar32 + 0x2b0);
                    vtableDispatch = *(code **)(lVar32 + 0x2a8);
                    *(undefined8 *)((long)pplVar40 + -200) = 0x43c47fb;
                    (*vtableDispatch)((int)pIVar36);
                    plVar26 = ((Il2CppType *)pSVar48->m_Items)[0x1b].data;
                    if (plVar26 != (long *)0x0) {
                      uVar58 = SUB84(((Il2CppType *)pSVar48->m_Items)[3].data,0);
                      goto label_043c4886;
                    }
                  }
                }
              }
              else {
                plVar26 = ((Il2CppType *)pSVar48->m_Items)[0x1a].data;
                if (*(float *)((long)pplVar40 + -0xb4) <= 0.5) {
                  if (plVar26 != (long *)0x0) {
                    pvVar37 = ((Il2CppType *)pSVar48->m_Items)[1].data;
                    pIVar46 = *(Il2CppClass **)(*plVar26 + 0x2b0);
                    vtableDispatch = *(code **)(*plVar26 + 0x2a8);
                    *(undefined8 *)((long)pplVar40 + -200) = 0x43c483e;
                    (*vtableDispatch)((int)pvVar37);
                    plVar26 = *(long **)((long)((Il2CppType *)pSVar48->m_Items + 0x1b) + 8);
                    if (plVar26 != (long *)0x0) {
                      pvVar37 = ((Il2CppType *)pSVar48->m_Items)[1].data;
                      lVar32 = *plVar26;
                      pIVar46 = *(Il2CppClass **)(lVar32 + 0x2b0);
                      vtableDispatch = *(code **)(lVar32 + 0x2a8);
                      *(undefined8 *)((long)pplVar40 + -200) = 0x43c486a;
                      (*vtableDispatch)((int)pvVar37);
                      plVar26 = ((Il2CppType *)pSVar48->m_Items)[0x1b].data;
                      if (plVar26 != (long *)0x0) {
                        uVar58 = SUB84(((Il2CppType *)pSVar48->m_Items)[1].data,0);
                        goto label_043c4886;
                      }
                    }
                  }
                }
                else if (plVar26 != (long *)0x0) {
                  pUVar4 = ((Il2CppType *)pSVar48->m_Items)[6].data;
                  pIVar46 = *(Il2CppClass **)(*plVar26 + 0x2b0);
                  vtableDispatch = *(code **)(*plVar26 + 0x2a8);
                  *(undefined8 *)((long)pplVar40 + -200) = 0x43c474a;
                  (*vtableDispatch)((int)pUVar4);
                  plVar26 = *(long **)((long)((Il2CppType *)pSVar48->m_Items + 0x1b) + 8);
                  if (plVar26 != (long *)0x0) {
                    pUVar4 = ((Il2CppType *)pSVar48->m_Items)[6].data;
                    lVar32 = *plVar26;
                    pIVar46 = *(Il2CppClass **)(lVar32 + 0x2b0);
                    vtableDispatch = *(code **)(lVar32 + 0x2a8);
                    *(undefined8 *)((long)pplVar40 + -200) = 0x43c477c;
                    (*vtableDispatch)((int)pUVar4);
                    plVar26 = ((Il2CppType *)pSVar48->m_Items)[0x1b].data;
                    if (plVar26 != (long *)0x0) {
                      uVar58 = SUB84(((Il2CppType *)pSVar48->m_Items)[6].data,0);
label_043c4886:
                      vtableDispatch = *(code **)(*plVar26 + 0x2a8);
                      *(undefined8 *)((long)pplVar40 + -200) = 0x43c4896;
                      (*vtableDispatch)(uVar58);
                      unaff_R13 = ((Il2CppType *)pSVar48->m_Items)[0x19].data;
                      __this_04 = *(System_Object_array **)((long)((Il2CppType *)pSVar48->m_Items + 0x19) + 8)
                      ;
                      pSVar51 = (System_Object_array *)(pSVar51->m_Items + 4);
                      pIVar46 = (Il2CppClass *)0x0;
                      *(undefined8 *)((long)pplVar40 + -200) = 0x43c48b2;
                      pIVar36 = (Il2CppClass *)System_Int32__ToString((int32_t)pSVar51,(MethodInfo *)0x0);
                      if (__this_04 != (System_Object_array *)0x0) {
                        pUVar14 = ((Il2CppClass_1 *)&__this_04->obj)->image;
                        pMVar45 = (pUVar14->vtable)._75_unknown.method;
                        UNRECOVERED_JUMPTABLE_00 = (pUVar14->vtable)._75_unknown.methodPtr;
                        *(undefined8 *)((long)pplVar40 + -200) = 0x43c48d4;
                        pIVar46 = pIVar36;
                        (*UNRECOVERED_JUMPTABLE_00)(__this_04,pIVar36,pMVar45);
                        pIVar38 = pIVar36;
                        if (unaff_R13 != (Il2CppClass *)0x0) {
                          UNRECOVERED_JUMPTABLE_00 = (unaff_R13->_1).image;
                          uVar57 = *(undefined8 *)(UNRECOVERED_JUMPTABLE_00 + 0x5f0);
                          vtableDispatch = *(code **)(UNRECOVERED_JUMPTABLE_00 + 0x5e8);
                          *(undefined8 *)((long)pplVar40 + -200) = 0x43c48f4;
                          pIVar46 = pIVar36;
                          (*vtableDispatch)(unaff_R13,pIVar36,uVar57);
                          plVar26 = ((Il2CppType *)pSVar48->m_Items)[0x19].data;
                          if (*(int *)&(pSVar51->obj).klass == 0) {
                            if (plVar26 != (long *)0x0) {
                              pIVar46 = *(Il2CppClass **)(*plVar26 + 0x2b0);
                              vtableDispatch = *(code **)(*plVar26 + 0x2a8);
                              *(undefined8 *)((long)pplVar40 + -200) = 0x43c49cd;
                              (*vtableDispatch)(0x3f800000);
                              plVar26 = *(long **)((long)((Il2CppType *)pSVar48->m_Items + 0x19) + 8);
                              if (plVar26 != (long *)0x0) {
                                lVar32 = *plVar26;
                                pIVar46 = *(Il2CppClass **)(lVar32 + 0x2b0);
                                vtableDispatch = *(code **)(lVar32 + 0x2a8);
                                *(undefined8 *)((long)pplVar40 + -200) = 0x43c49fc;
                                (*vtableDispatch)(0x3f800000);
                                pUVar15 = ((Il2CppType *)pSVar48->m_Items)[0x1a].data;
                                goto joined_r0x043c4a06;
                              }
                            }
                          }
                          else if (plVar26 != (long *)0x0) {
                            pIVar46 = *(Il2CppClass **)(*plVar26 + 0x2b0);
                            vtableDispatch = *(code **)(*plVar26 + 0x2a8);
                            *(undefined8 *)((long)pplVar40 + -200) = 0x43c4928;
                            (*vtableDispatch)();
                            plVar26 = *(long **)((long)((Il2CppType *)pSVar48->m_Items + 0x19) + 8);
                            if (plVar26 != (long *)0x0) {
                              lVar32 = *plVar26;
                              pIVar46 = *(Il2CppClass **)(lVar32 + 0x2b0);
                              vtableDispatch = *(code **)(lVar32 + 0x2a8);
                              *(undefined8 *)((long)pplVar40 + -200) = 0x43c4952;
                              (*vtableDispatch)();
                              pUVar15 = ((Il2CppType *)pSVar48->m_Items)[0x1a].data;
joined_r0x043c4a06:
                              if (pUVar15 != (UnityEngine_Component_o *)0x0) {
                                pIVar46 = (Il2CppClass *)0x0;
                                *(undefined8 *)((long)pplVar40 + -200) = 0x43c4969;
                                pUVar28 = UnityEngine_Component__get_gameObject(pUVar15,(MethodInfo *)0x0);
                                if (pUVar28 != (UnityEngine_GameObject_o *)0x0) {
                                  pIVar46 = (Il2CppClass *)0x0;
                                  *(undefined8 *)((long)pplVar40 + -200) = 0x43c497c;
                                  bVar22 = UnityEngine_GameObject__get_activeSelf(pUVar28,(MethodInfo *)0x0);
                                  fVar56 = extraout_XMM0_Da_19;
                                  if ((((char)bVar22 != '\0') ||
                                      (fVar56 = 0.0,
                                      0.0 < *(float *)((long)((Il2CppType *)pSVar48->m_Items + 0x10) + 4))) ||
                                     (0.0 < *(float *)((long)((Il2CppType *)pSVar48->m_Items + 0x10) + 8))) {
                                    return fVar56;
                                  }
                                  pUVar15 = ((Il2CppType *)pSVar48->m_Items)[0x1a].data;
                                  if (pUVar15 != (UnityEngine_Component_o *)0x0) {
                                    pIVar46 = (Il2CppClass *)0x0;
                                    *(undefined8 *)((long)pplVar40 + -200) = 0x43c4a28;
                                    pUVar28 = UnityEngine_Component__get_gameObject(pUVar15,(MethodInfo *)0x0)
                                    ;
                                    if (pUVar28 != (UnityEngine_GameObject_o *)0x0) {
                                      pIVar46 = (Il2CppClass *)0x1;
                                      *(undefined8 *)((long)pplVar40 + -200) = 0x43c4a40;
                                      UnityEngine_GameObject__SetActive(pUVar28,1,(MethodInfo *)0x0);
                                      pUVar15 = *(UnityEngine_Component_o **)
                                                 ((long)((Il2CppType *)pSVar48->m_Items + 0x1b) + 8);
                                      if (pUVar15 != (UnityEngine_Component_o *)0x0) {
                                        pIVar46 = (Il2CppClass *)0x0;
                                        *(undefined8 *)((long)pplVar40 + -200) = 0x43c4a53;
                                        pUVar28 = UnityEngine_Component__get_gameObject
                                                            (pUVar15,(MethodInfo *)0x0);
                                        if (pUVar28 != (UnityEngine_GameObject_o *)0x0) {
                                          pIVar46 = (Il2CppClass *)0x0;
                                          *(undefined8 *)((long)pplVar40 + -200) = 0x43c4a64;
                                          UnityEngine_GameObject__SetActive(pUVar28,0,(MethodInfo *)0x0);
                                          pUVar15 = *(UnityEngine_Component_o **)
                                                     ((long)((Il2CppType *)pSVar48->m_Items + 0x1a) + 8);
                                          if (pUVar15 != (UnityEngine_Component_o *)0x0) {
                                            pIVar46 = (Il2CppClass *)0x0;
                                            *(undefined8 *)((long)pplVar40 + -200) = 0x43c4a77;
                                            pUVar28 = UnityEngine_Component__get_gameObject
                                                                (pUVar15,(MethodInfo *)0x0);
                                            if (pUVar28 != (UnityEngine_GameObject_o *)0x0) {
                                              pIVar46 = (Il2CppClass *)0x0;
                                              *(undefined8 *)((long)pplVar40 + -200) = 0x43c4a88;
                                              UnityEngine_GameObject__SetActive(pUVar28,0,(MethodInfo *)0x0);
                                              pUVar15 = ((Il2CppType *)pSVar48->m_Items)[0x1b].data;
                                              if (pUVar15 != (UnityEngine_Component_o *)0x0) {
                                                pIVar46 = (Il2CppClass *)0x0;
                                                *(undefined8 *)((long)pplVar40 + -200) = 0x43c4a9b;
                                                pUVar28 = UnityEngine_Component__get_gameObject
                                                                    (pUVar15,(MethodInfo *)0x0);
                                                if (pUVar28 != (UnityEngine_GameObject_o *)0x0) {
                                                  UnityEngine_GameObject__SetActive
                                                            (pUVar28,0,(MethodInfo *)0x0);
                                                  return extraout_XMM0_Da_20;
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
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          goto label_043c4ab9;
        }
      }
      *(undefined8 *)((long)pplVar40 + -200) = 0x43c4ac6;
      __this_05 = pSVar51;
      pvVar37 = (void *)il2cpp_runtime_helper_022b2fd0();
    }
    *(long **)(puVar41 + -8) = plVar44;
    *(System_Object_array **)(puVar41 + -0x10) = pSVar48;
    *(System_Object_array **)(puVar41 + -0x18) = pSVar51;
    *(Il2CppClass **)(puVar41 + -0x20) = unaff_R13;
    *(Il2CppClass **)(puVar41 + -0x28) = pIVar38;
    *(System_Object_array **)(puVar41 + -0x30) = __this_04;
    *(void **)(puVar41 + -0x38) = pvVar37;
    if (g_data_057ae3e3 == '\0') {
      *(undefined8 *)(puVar41 + -0x40) = 0x43c4af3;
      il2cpp_runtime_helper_023445d0(&TypeInfo_AmmoWeapon);
      g_data_057ae3e3 = '\x01';
    }
    if ((*(Characters_Human_o **)((long)((UnityEngine_Color_o *)__this_05->m_Items + 0xe) + 8) ==
         (Characters_Human_o *)0x0) ||
       (pSVar51 = ((*(Characters_Human_o **)((long)((UnityEngine_Color_o *)__this_05->m_Items + 0xe) + 8))->
                  fields).crossfadeCache, pSVar51 == (System_Object_array *)0x0)) {
label_043c52c4:
      *(undefined8 *)(puVar41 + -0x40) = 0x43c52c9;
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      pIVar38 = (pSVar51->obj).klass;
      bVar6 = (TypeInfo_AmmoWeapon->_2).naturalAligment;
      pIVar46 = TypeInfo_AmmoWeapon;
      if ((bVar6 <= (pIVar38->_2).naturalAligment) &&
         ((pIVar38->_2).typeHierarchy[(ulong)bVar6 - 1] == TypeInfo_AmmoWeapon)) {
        __this_04 = (System_Object_array *)__this_05->m_Items[0x32];
        pIVar50 = __this_05->m_Items[0x33];
        pSVar48 = (System_Object_array *)(pSVar51->m_Items + 4);
        pIVar46 = (Il2CppClass *)0x0;
        *(undefined8 *)(puVar41 + -0x40) = 0x43c4b6b;
        pIVar38 = (Il2CppClass *)System_Int32__ToString((int32_t)pSVar48,(MethodInfo *)0x0);
        if (pIVar50 != (Il2CppObject *)0x0) {
          pMVar45 = pIVar50->klass->vtable[0x4b].method;
          UNRECOVERED_JUMPTABLE_00 = pIVar50->klass->vtable[0x4b].methodPtr;
          *(undefined8 *)(puVar41 + -0x40) = 0x43c4b8e;
          pIVar46 = pIVar38;
          (*UNRECOVERED_JUMPTABLE_00)(pIVar50,pIVar38,pMVar45);
          unaff_R13 = pIVar38;
          if (__this_04 != (System_Object_array *)0x0) {
            pUVar14 = ((Il2CppClass_1 *)&__this_04->obj)->image;
            pMVar45 = (pUVar14->vtable)._75_unknown.method;
            UNRECOVERED_JUMPTABLE_00 = (pUVar14->vtable)._75_unknown.methodPtr;
            *(undefined8 *)(puVar41 + -0x40) = 0x43c4bad;
            pIVar46 = pIVar38;
            (*UNRECOVERED_JUMPTABLE_00)(__this_04,pIVar38,pMVar45);
            pIVar50 = __this_05->m_Items[0x32];
            if (*(int *)&((Il2CppClass_1 *)&pSVar48->obj)->image == 0) {
              if (pIVar50 != (Il2CppObject *)0x0) {
                pIVar46 = (Il2CppClass *)pIVar50->klass->vtable[0x17].method;
                UNRECOVERED_JUMPTABLE_00 = pIVar50->klass->vtable[0x17].methodPtr;
                *(undefined8 *)(puVar41 + -0x40) = 0x43c4cfb;
                (*UNRECOVERED_JUMPTABLE_00)(0x3f800000);
                if (__this_05->m_Items[0x33] != (Il2CppObject *)0x0) {
                  pIVar38 = __this_05->m_Items[0x33]->klass;
                  pIVar46 = (Il2CppClass *)pIVar38->vtable[0x17].method;
                  UNRECOVERED_JUMPTABLE_00 = pIVar38->vtable[0x17].methodPtr;
                  *(undefined8 *)(puVar41 + -0x40) = 0x43c4d2b;
                  (*UNRECOVERED_JUMPTABLE_00)(0x3f800000);
                  iVar23 = *(int *)(pSVar51->m_Items + 5);
                  if (iVar23 != 1) goto label_043c4c1a;
label_043c4d38:
                  if (__this_05->m_Items[0x3a] != (Il2CppObject *)0x0) {
                    __this_04 = (System_Object_array *)(__this_05->m_Items + 2);
                    pSVar49 = (System_Object_array *)(__this_05->m_Items + 6);
                    if (0 < *(int *)&((Il2CppClass_1 *)&pSVar48->obj)->image) {
                      pSVar49 = __this_04;
                    }
                    pUVar14 = ((Il2CppClass_1 *)&pSVar49->obj)->image;
                    pIVar38 = __this_05->m_Items[0x3a]->klass;
                    pIVar46 = (Il2CppClass *)pIVar38->vtable[0x17].method;
                    UNRECOVERED_JUMPTABLE_00 = pIVar38->vtable[0x17].methodPtr;
                    *(undefined8 *)(puVar41 + -0x40) = 0x43c4d81;
                    (*UNRECOVERED_JUMPTABLE_00)((int)pUVar14);
                    if (__this_05->m_Items[0x3b] != (Il2CppObject *)0x0) {
                      pIVar50 = __this_05->m_Items[2];
                      pIVar38 = __this_05->m_Items[0x3b]->klass;
                      pIVar46 = (Il2CppClass *)pIVar38->vtable[0x17].method;
                      UNRECOVERED_JUMPTABLE_00 = pIVar38->vtable[0x17].methodPtr;
                      *(undefined8 *)(puVar41 + -0x40) = 0x43c4db0;
                      (*UNRECOVERED_JUMPTABLE_00)((int)pIVar50);
                      if (__this_05->m_Items[0x38] != (Il2CppObject *)0x0) {
                        pIVar50 = __this_05->m_Items[2];
                        pIVar38 = __this_05->m_Items[0x38]->klass;
                        pIVar46 = (Il2CppClass *)pIVar38->vtable[0x17].method;
                        UNRECOVERED_JUMPTABLE_00 = pIVar38->vtable[0x17].methodPtr;
                        *(undefined8 *)(puVar41 + -0x40) = 0x43c4ddf;
                        (*UNRECOVERED_JUMPTABLE_00)((int)pIVar50);
                        if (__this_05->m_Items[0x39] != (Il2CppObject *)0x0) {
                          pIVar50 = __this_05->m_Items[2];
                          pIVar38 = __this_05->m_Items[0x39]->klass;
                          pIVar46 = (Il2CppClass *)pIVar38->vtable[0x17].method;
                          UNRECOVERED_JUMPTABLE_00 = pIVar38->vtable[0x17].methodPtr;
                          *(undefined8 *)(puVar41 + -0x40) = 0x43c4e0e;
                          (*UNRECOVERED_JUMPTABLE_00)((int)pIVar50);
                          if (__this_05->m_Items[0x3e] != (Il2CppObject *)0x0) {
                            pIVar50 = __this_05->m_Items[2];
                            pIVar38 = __this_05->m_Items[0x3e]->klass;
                            pIVar46 = (Il2CppClass *)pIVar38->vtable[0x17].method;
                            UNRECOVERED_JUMPTABLE_00 = pIVar38->vtable[0x17].methodPtr;
                            *(undefined8 *)(puVar41 + -0x40) = 0x43c4e3d;
                            (*UNRECOVERED_JUMPTABLE_00)((int)pIVar50);
                            pIVar50 = __this_05->m_Items[0x3f];
                            if (pIVar50 != (Il2CppObject *)0x0) {
                              uVar58 = SUB84(((Il2CppClass_1 *)&__this_04->obj)->image,0);
                              goto label_043c4eb3;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            else if (pIVar50 != (Il2CppObject *)0x0) {
              pIVar46 = (Il2CppClass *)pIVar50->klass->vtable[0x17].method;
              UNRECOVERED_JUMPTABLE_00 = pIVar50->klass->vtable[0x17].methodPtr;
              *(undefined8 *)(puVar41 + -0x40) = 0x43c4be2;
              (*UNRECOVERED_JUMPTABLE_00)();
              if (__this_05->m_Items[0x33] != (Il2CppObject *)0x0) {
                pIVar38 = __this_05->m_Items[0x33]->klass;
                pIVar46 = (Il2CppClass *)pIVar38->vtable[0x17].method;
                UNRECOVERED_JUMPTABLE_00 = pIVar38->vtable[0x17].methodPtr;
                *(undefined8 *)(puVar41 + -0x40) = 0x43c4c0d;
                (*UNRECOVERED_JUMPTABLE_00)();
                iVar23 = *(int *)(pSVar51->m_Items + 5);
                if (iVar23 == 1) goto label_043c4d38;
label_043c4c1a:
                if (iVar23 == 0) {
                  if (__this_05->m_Items[0x3a] != (Il2CppObject *)0x0) {
                    pIVar50 = __this_05->m_Items[6];
                    pIVar38 = __this_05->m_Items[0x3a]->klass;
                    pIVar46 = (Il2CppClass *)pIVar38->vtable[0x17].method;
                    UNRECOVERED_JUMPTABLE_00 = pIVar38->vtable[0x17].methodPtr;
                    *(undefined8 *)(puVar41 + -0x40) = 0x43c4c51;
                    (*UNRECOVERED_JUMPTABLE_00)((int)pIVar50);
                    if (__this_05->m_Items[0x3b] != (Il2CppObject *)0x0) {
                      pIVar50 = __this_05->m_Items[6];
                      pIVar38 = __this_05->m_Items[0x3b]->klass;
                      pIVar46 = (Il2CppClass *)pIVar38->vtable[0x17].method;
                      UNRECOVERED_JUMPTABLE_00 = pIVar38->vtable[0x17].methodPtr;
                      *(undefined8 *)(puVar41 + -0x40) = 0x43c4c80;
                      (*UNRECOVERED_JUMPTABLE_00)((int)pIVar50);
                      if (__this_05->m_Items[0x3e] != (Il2CppObject *)0x0) {
                        pIVar50 = __this_05->m_Items[6];
                        pIVar38 = __this_05->m_Items[0x3e]->klass;
                        pIVar46 = (Il2CppClass *)pIVar38->vtable[0x17].method;
                        UNRECOVERED_JUMPTABLE_00 = pIVar38->vtable[0x17].methodPtr;
                        *(undefined8 *)(puVar41 + -0x40) = 0x43c4caf;
                        (*UNRECOVERED_JUMPTABLE_00)((int)pIVar50);
                        pIVar50 = __this_05->m_Items[0x3f];
                        if (pIVar50 != (Il2CppObject *)0x0) {
                          uVar58 = SUB84(__this_05->m_Items[6],0);
                          goto label_043c4eb3;
                        }
                      }
                    }
                  }
                }
                else if (__this_05->m_Items[0x38] != (Il2CppObject *)0x0) {
                  pIVar50 = __this_05->m_Items[0xc];
                  pIVar38 = __this_05->m_Items[0x38]->klass;
                  pIVar46 = (Il2CppClass *)pIVar38->vtable[0x17].method;
                  UNRECOVERED_JUMPTABLE_00 = pIVar38->vtable[0x17].methodPtr;
                  *(undefined8 *)(puVar41 + -0x40) = 0x43c4e8e;
                  (*UNRECOVERED_JUMPTABLE_00)((int)pIVar50);
                  pIVar50 = __this_05->m_Items[0x39];
                  if (pIVar50 != (Il2CppObject *)0x0) {
                    uVar58 = SUB84(__this_05->m_Items[0xc],0);
label_043c4eb3:
                    pIVar46 = (Il2CppClass *)pIVar50->klass->vtable[0x17].method;
                    UNRECOVERED_JUMPTABLE_00 = pIVar50->klass->vtable[0x17].methodPtr;
                    *(undefined8 *)(puVar41 + -0x40) = 0x43c4ec3;
                    (*UNRECOVERED_JUMPTABLE_00)(uVar58);
                    pUVar15 = (UnityEngine_Component_o *)__this_05->m_Items[0x3a];
                    if (pUVar15 != (UnityEngine_Component_o *)0x0) {
                      pIVar46 = (Il2CppClass *)0x0;
                      *(undefined8 *)(puVar41 + -0x40) = 0x43c4edb;
                      pUVar28 = UnityEngine_Component__get_gameObject(pUVar15,(MethodInfo *)0x0);
                      if (pUVar28 != (UnityEngine_GameObject_o *)0x0) {
                        pIVar46 = (Il2CppClass *)0x0;
                        *(undefined8 *)(puVar41 + -0x40) = 0x43c4eee;
                        bVar22 = UnityEngine_GameObject__get_activeSelf(pUVar28,(MethodInfo *)0x0);
                        if (((char)bVar22 == '\0') || (*(int *)(pSVar51->m_Items + 5) < 2)) {
label_043c4f56:
                          pUVar15 = (UnityEngine_Component_o *)__this_05->m_Items[0x3b];
                          if (pUVar15 != (UnityEngine_Component_o *)0x0) {
                            pIVar46 = (Il2CppClass *)0x0;
                            *(undefined8 *)(puVar41 + -0x40) = 0x43c4f6e;
                            pUVar28 = UnityEngine_Component__get_gameObject(pUVar15,(MethodInfo *)0x0);
                            if (pUVar28 != (UnityEngine_GameObject_o *)0x0) {
                              pIVar46 = (Il2CppClass *)0x0;
                              *(undefined8 *)(puVar41 + -0x40) = 0x43c4f81;
                              bVar22 = UnityEngine_GameObject__get_activeSelf(pUVar28,(MethodInfo *)0x0);
                              if (((char)bVar22 == '\0') || (*(int *)(pSVar51->m_Items + 5) < 1)) {
label_043c4fe9:
                                pUVar15 = (UnityEngine_Component_o *)__this_05->m_Items[0x3e];
                                if (pUVar15 != (UnityEngine_Component_o *)0x0) {
                                  pIVar46 = (Il2CppClass *)0x0;
                                  *(undefined8 *)(puVar41 + -0x40) = 0x43c5001;
                                  pUVar28 = UnityEngine_Component__get_gameObject(pUVar15,(MethodInfo *)0x0);
                                  if (pUVar28 != (UnityEngine_GameObject_o *)0x0) {
                                    pIVar46 = (Il2CppClass *)0x0;
                                    *(undefined8 *)(puVar41 + -0x40) = 0x43c5014;
                                    bVar22 = UnityEngine_GameObject__get_activeSelf(pUVar28,(MethodInfo *)0x0)
                                    ;
                                    if (((char)bVar22 == '\0') ||
                                       (0.0 < *(float *)(__this_05->m_Items + 0x21))) {
label_043c5083:
                                      pUVar15 = (UnityEngine_Component_o *)__this_05->m_Items[0x3f];
                                      if (pUVar15 != (UnityEngine_Component_o *)0x0) {
                                        pIVar46 = (Il2CppClass *)0x0;
                                        *(undefined8 *)(puVar41 + -0x40) = 0x43c509b;
                                        pUVar28 = UnityEngine_Component__get_gameObject
                                                            (pUVar15,(MethodInfo *)0x0);
                                        if (pUVar28 != (UnityEngine_GameObject_o *)0x0) {
                                          pIVar46 = (Il2CppClass *)0x0;
                                          *(undefined8 *)(puVar41 + -0x40) = 0x43c50ae;
                                          bVar22 = UnityEngine_GameObject__get_activeSelf
                                                             (pUVar28,(MethodInfo *)0x0);
                                          if (((char)bVar22 == '\0') ||
                                             (0.0 < *(float *)(__this_05->m_Items + 0x21))) {
label_043c511d:
                                            pUVar15 = (UnityEngine_Component_o *)__this_05->m_Items[0x3c];
                                            if (pUVar15 != (UnityEngine_Component_o *)0x0) {
                                              pIVar46 = (Il2CppClass *)0x0;
                                              *(undefined8 *)(puVar41 + -0x40) = 0x43c5135;
                                              pUVar28 = UnityEngine_Component__get_gameObject
                                                                  (pUVar15,(MethodInfo *)0x0);
                                              if (pUVar28 != (UnityEngine_GameObject_o *)0x0) {
                                                pIVar46 = (Il2CppClass *)0x0;
                                                *(undefined8 *)(puVar41 + -0x40) = 0x43c5148;
                                                bVar22 = UnityEngine_GameObject__get_activeSelf
                                                                   (pUVar28,(MethodInfo *)0x0);
                                                if ((char)bVar22 == '\0') {
                                                  pUVar15 = (UnityEngine_Component_o *)
                                                            __this_05->m_Items[0x3d];
                                                  if (pUVar15 != (UnityEngine_Component_o *)0x0) {
                                                    pIVar46 = (Il2CppClass *)0x0;
                                                    *(undefined8 *)(puVar41 + -0x40) = 0x43c5164;
                                                    pUVar28 = UnityEngine_Component__get_gameObject
                                                                        (pUVar15,(MethodInfo *)0x0);
                                                    if (pUVar28 != (UnityEngine_GameObject_o *)0x0) {
                                                      pIVar46 = (Il2CppClass *)0x0;
                                                      *(undefined8 *)(puVar41 + -0x40) = 0x43c5177;
                                                      bVar22 = UnityEngine_GameObject__get_activeSelf
                                                                         (pUVar28,(MethodInfo *)0x0);
                                                      if ((char)bVar22 == '\0') {
                                                        return extraout_XMM0_Da_21;
                                                      }
                                                      goto label_043c517b;
                                                    }
                                                  }
                                                }
                                                else {
label_043c517b:
                                                  if (0.0 < *(float *)((long)__this_05->m_Items + 0x104)) {
                                                    return 0.0;
                                                  }
                                                  pUVar15 = (UnityEngine_Component_o *)
                                                            __this_05->m_Items[0x3c];
                                                  if (pUVar15 != (UnityEngine_Component_o *)0x0) {
                                                    pIVar46 = (Il2CppClass *)0x0;
                                                    *(undefined8 *)(puVar41 + -0x40) = 0x43c51b0;
                                                    pUVar28 = UnityEngine_Component__get_gameObject
                                                                        (pUVar15,(MethodInfo *)0x0);
                                                    if (pUVar28 != (UnityEngine_GameObject_o *)0x0) {
                                                      pIVar46 = (Il2CppClass *)0x0;
                                                      *(undefined8 *)(puVar41 + -0x40) = 0x43c51c5;
                                                      UnityEngine_GameObject__SetActive
                                                                (pUVar28,0,(MethodInfo *)0x0);
                                                      pUVar15 = (UnityEngine_Component_o *)
                                                                __this_05->m_Items[0x3d];
                                                      if (pUVar15 != (UnityEngine_Component_o *)0x0) {
                                                        pIVar46 = (Il2CppClass *)0x0;
                                                        *(undefined8 *)(puVar41 + -0x40) = 0x43c51dd;
                                                        pUVar28 = UnityEngine_Component__get_gameObject
                                                                            (pUVar15,(MethodInfo *)0x0);
                                                        if (pUVar28 != (UnityEngine_GameObject_o *)0x0) {
                                                          pIVar46 = (Il2CppClass *)0x0;
                                                          *(undefined8 *)(puVar41 + -0x40) = 0x43c51f2;
                                                          UnityEngine_GameObject__SetActive
                                                                    (pUVar28,0,(MethodInfo *)0x0);
                                                          pUVar15 = (UnityEngine_Component_o *)
                                                                    __this_05->m_Items[0x39];
                                                          if (pUVar15 != (UnityEngine_Component_o *)0x0) {
                                                            pIVar46 = (Il2CppClass *)0x0;
                                                            *(undefined8 *)(puVar41 + -0x40) = 0x43c520a;
                                                            pUVar28 = UnityEngine_Component__get_gameObject
                                                                                (pUVar15,(MethodInfo *)0x0);
                                                            if (pUVar28 != (UnityEngine_GameObject_o *)0x0) {
                                                              bVar53 = 0 < *(int *)(pSVar51->m_Items + 5);
                                                              pIVar46 = (Il2CppClass *)(ulong)bVar53;
                                                              *(undefined8 *)(puVar41 + -0x40) = 0x43c5228;
                                                              UnityEngine_GameObject__SetActive
                                                                        (pUVar28,(uint)bVar53,
                                                                         (MethodInfo *)0x0);
                                                              pUVar15 = (UnityEngine_Component_o *)
                                                                        __this_05->m_Items[0x38];
                                                              if (pUVar15 != (UnityEngine_Component_o *)0x0) {
                                                                pIVar46 = (Il2CppClass *)0x0;
                                                                *(undefined8 *)(puVar41 + -0x40) = 0x43c5240;
                                                                pUVar28 = 
                                                       UnityEngine_Component__get_gameObject
                                                                 (pUVar15,(MethodInfo *)0x0);
                                                       if (pUVar28 != (UnityEngine_GameObject_o *)0x0) {
                                                         bVar53 = 1 < *(int *)(pSVar51->m_Items + 5);
                                                         pIVar46 = (Il2CppClass *)(ulong)bVar53;
                                                         *(undefined8 *)(puVar41 + -0x40) = 0x43c525a;
                                                         UnityEngine_GameObject__SetActive
                                                                   (pUVar28,(uint)bVar53,(MethodInfo *)0x0);
                                                         pUVar15 = (UnityEngine_Component_o *)
                                                                   __this_05->m_Items[0x3b];
                                                         if (pUVar15 != (UnityEngine_Component_o *)0x0) {
                                                           pIVar46 = (Il2CppClass *)0x0;
                                                           *(undefined8 *)(puVar41 + -0x40) = 0x43c526e;
                                                           pUVar28 = UnityEngine_Component__get_gameObject
                                                                               (pUVar15,(MethodInfo *)0x0);
                                                           if (pUVar28 != (UnityEngine_GameObject_o *)0x0) {
                                                             bVar53 = *(int *)(pSVar51->m_Items + 5) < 1;
                                                             pIVar46 = (Il2CppClass *)(ulong)bVar53;
                                                             *(undefined8 *)(puVar41 + -0x40) = 0x43c5288;
                                                             UnityEngine_GameObject__SetActive
                                                                       (pUVar28,(uint)bVar53,(MethodInfo *)0x0
                                                                       );
                                                             pUVar15 = (UnityEngine_Component_o *)
                                                                       __this_05->m_Items[0x3a];
                                                             if (pUVar15 != (UnityEngine_Component_o *)0x0) {
                                                               pIVar46 = (Il2CppClass *)0x0;
                                                               *(undefined8 *)(puVar41 + -0x40) = 0x43c529c;
                                                               pUVar28 = UnityEngine_Component__get_gameObject
                                                                                   (pUVar15,(MethodInfo *)0x0)
                                                               ;
                                                               if (pUVar28 != (UnityEngine_GameObject_o *)0x0)
                                                               {
                                                                 UnityEngine_GameObject__SetActive
                                                                           (pUVar28,(uint)(*(int *)(pSVar51->
                                                       m_Items + 5) < 2),(MethodInfo *)0x0);
                                                       return extraout_XMM0_Da_22;
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
                                                  }
                                                }
                                              }
                                            }
                                          }
                                          else {
                                            pUVar15 = (UnityEngine_Component_o *)__this_05->m_Items[0x3f];
                                            if (pUVar15 != (UnityEngine_Component_o *)0x0) {
                                              pIVar46 = (Il2CppClass *)0x0;
                                              *(undefined8 *)(puVar41 + -0x40) = 0x43c50d8;
                                              pUVar28 = UnityEngine_Component__get_gameObject
                                                                  (pUVar15,(MethodInfo *)0x0);
                                              if (pUVar28 != (UnityEngine_GameObject_o *)0x0) {
                                                pIVar46 = (Il2CppClass *)0x0;
                                                *(undefined8 *)(puVar41 + -0x40) = 0x43c50ed;
                                                UnityEngine_GameObject__SetActive(pUVar28,0,(MethodInfo *)0x0)
                                                ;
                                                pUVar15 = (UnityEngine_Component_o *)__this_05->m_Items[0x3b];
                                                if (pUVar15 != (UnityEngine_Component_o *)0x0) {
                                                  pIVar46 = (Il2CppClass *)0x0;
                                                  *(undefined8 *)(puVar41 + -0x40) = 0x43c5105;
                                                  pUVar28 = UnityEngine_Component__get_gameObject
                                                                      (pUVar15,(MethodInfo *)0x0);
                                                  if (pUVar28 != (UnityEngine_GameObject_o *)0x0) {
                                                    pIVar46 = (Il2CppClass *)0x1;
                                                    *(undefined8 *)(puVar41 + -0x40) = 0x43c511d;
                                                    UnityEngine_GameObject__SetActive
                                                              (pUVar28,1,(MethodInfo *)0x0);
                                                    goto label_043c511d;
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                    else {
                                      pUVar15 = (UnityEngine_Component_o *)__this_05->m_Items[0x3e];
                                      if (pUVar15 != (UnityEngine_Component_o *)0x0) {
                                        pIVar46 = (Il2CppClass *)0x0;
                                        *(undefined8 *)(puVar41 + -0x40) = 0x43c503e;
                                        pUVar28 = UnityEngine_Component__get_gameObject
                                                            (pUVar15,(MethodInfo *)0x0);
                                        if (pUVar28 != (UnityEngine_GameObject_o *)0x0) {
                                          pIVar46 = (Il2CppClass *)0x0;
                                          *(undefined8 *)(puVar41 + -0x40) = 0x43c5053;
                                          UnityEngine_GameObject__SetActive(pUVar28,0,(MethodInfo *)0x0);
                                          pUVar15 = (UnityEngine_Component_o *)__this_05->m_Items[0x3a];
                                          if (pUVar15 != (UnityEngine_Component_o *)0x0) {
                                            pIVar46 = (Il2CppClass *)0x0;
                                            *(undefined8 *)(puVar41 + -0x40) = 0x43c506b;
                                            pUVar28 = UnityEngine_Component__get_gameObject
                                                                (pUVar15,(MethodInfo *)0x0);
                                            if (pUVar28 != (UnityEngine_GameObject_o *)0x0) {
                                              pIVar46 = (Il2CppClass *)0x1;
                                              *(undefined8 *)(puVar41 + -0x40) = 0x43c5083;
                                              UnityEngine_GameObject__SetActive(pUVar28,1,(MethodInfo *)0x0);
                                              goto label_043c5083;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                              else {
                                pUVar15 = (UnityEngine_Component_o *)__this_05->m_Items[0x3b];
                                if (pUVar15 != (UnityEngine_Component_o *)0x0) {
                                  pIVar46 = (Il2CppClass *)0x0;
                                  *(undefined8 *)(puVar41 + -0x40) = 0x43c4fa4;
                                  pUVar28 = UnityEngine_Component__get_gameObject(pUVar15,(MethodInfo *)0x0);
                                  if (pUVar28 != (UnityEngine_GameObject_o *)0x0) {
                                    pIVar46 = (Il2CppClass *)0x0;
                                    *(undefined8 *)(puVar41 + -0x40) = 0x43c4fb9;
                                    UnityEngine_GameObject__SetActive(pUVar28,0,(MethodInfo *)0x0);
                                    pUVar15 = (UnityEngine_Component_o *)__this_05->m_Items[0x39];
                                    if (pUVar15 != (UnityEngine_Component_o *)0x0) {
                                      pIVar46 = (Il2CppClass *)0x0;
                                      *(undefined8 *)(puVar41 + -0x40) = 0x43c4fd1;
                                      pUVar28 = UnityEngine_Component__get_gameObject
                                                          (pUVar15,(MethodInfo *)0x0);
                                      if (pUVar28 != (UnityEngine_GameObject_o *)0x0) {
                                        pIVar46 = (Il2CppClass *)0x1;
                                        *(undefined8 *)(puVar41 + -0x40) = 0x43c4fe9;
                                        UnityEngine_GameObject__SetActive(pUVar28,1,(MethodInfo *)0x0);
                                        goto label_043c4fe9;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                        else {
                          pUVar15 = (UnityEngine_Component_o *)__this_05->m_Items[0x3a];
                          if (pUVar15 != (UnityEngine_Component_o *)0x0) {
                            pIVar46 = (Il2CppClass *)0x0;
                            *(undefined8 *)(puVar41 + -0x40) = 0x43c4f11;
                            pUVar28 = UnityEngine_Component__get_gameObject(pUVar15,(MethodInfo *)0x0);
                            if (pUVar28 != (UnityEngine_GameObject_o *)0x0) {
                              pIVar46 = (Il2CppClass *)0x0;
                              *(undefined8 *)(puVar41 + -0x40) = 0x43c4f26;
                              UnityEngine_GameObject__SetActive(pUVar28,0,(MethodInfo *)0x0);
                              pUVar15 = (UnityEngine_Component_o *)__this_05->m_Items[0x38];
                              if (pUVar15 != (UnityEngine_Component_o *)0x0) {
                                pIVar46 = (Il2CppClass *)0x0;
                                *(undefined8 *)(puVar41 + -0x40) = 0x43c4f3e;
                                pUVar28 = UnityEngine_Component__get_gameObject(pUVar15,(MethodInfo *)0x0);
                                if (pUVar28 != (UnityEngine_GameObject_o *)0x0) {
                                  pIVar46 = (Il2CppClass *)0x1;
                                  *(undefined8 *)(puVar41 + -0x40) = 0x43c4f56;
                                  UnityEngine_GameObject__SetActive(pUVar28,1,(MethodInfo *)0x0);
                                  goto label_043c4f56;
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
          }
        }
        goto label_043c52c4;
      }
    }
    *(undefined8 *)(puVar41 + -0x40) = 0x43c52d1;
    pSVar49 = pSVar51;
    il2cpp_runtime_helper_022b2fd0();
    *(System_Object_array **)(puVar41 + -0x40) = pSVar48;
    *(System_Object_array **)(puVar41 + -0x48) = pSVar51;
    *(Il2CppClass **)(puVar41 + -0x50) = unaff_R13;
    *(System_Object_array **)(puVar41 + -0x58) = __this_05;
    *(System_Object_array **)(puVar41 + -0x60) = __this_04;
    puVar42 = puVar41 + -0x70;
    if (g_data_057ae3e4 == '\0') {
      *(undefined8 *)(puVar41 + -0x78) = 0x43c5305;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Animator_GetComponent_Animator);
      *(undefined8 *)(puVar41 + -0x78) = 0x43c5311;
      il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
      *(undefined8 *)(puVar41 + -0x78) = 0x43c531d;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ThunderspearWeapon);
      *(undefined8 *)(puVar41 + -0x78) = 0x43c5329;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
      g_data_057ae3e4 = '\x01';
    }
    if (pSVar49->m_Items[0x1d] == (Il2CppObject *)0x0) {
label_043c5986:
      *(undefined8 *)(puVar41 + -0x78) = 0x43c598b;
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      pSVar48 = (System_Object_array *)pSVar49->m_Items[0x1d][0x10].klass;
      if (pSVar48 == (System_Object_array *)0x0) {
label_043c537e:
        lVar32 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
        if ((lVar32 != 0) &&
           (((lVar32 = *(long *)(lVar32 + 0x58), lVar32 != 0 &&
             (lVar32 = *(long *)(lVar32 + 0x48), lVar32 != 0)) && (pSVar48 != (System_Object_array *)0x0)))) {
          if (*(char *)(lVar32 + 0x11) == '\0') {
            iVar23 = *(bool_conflict *)((long)((Il2CppType *)pSVar48->m_Items + 2) + 4);
            fVar56 = (((UnityEngine_Vector4_o *)((long)((Il2CppType *)pSVar48->m_Items + 2) + 8))->fields).x;
            if (iVar23 < 1) {
              if (fVar56 == -NAN) {
                fVar56 = 1.0;
                pUVar16 = (UnityEngine_UI_Image_o *)pSVar49->m_Items[0x31];
              }
              else {
                fVar56 = 0.0;
                pUVar16 = (UnityEngine_UI_Image_o *)pSVar49->m_Items[0x31];
              }
            }
            else {
              fVar56 = (float)(int)fVar56 / (float)iVar23;
              pUVar16 = (UnityEngine_UI_Image_o *)pSVar49->m_Items[0x31];
            }
            if (pUVar16 != (UnityEngine_UI_Image_o *)0x0) {
              __this_04 = (System_Object_array *)pSVar49->m_Items[0x30];
              pIVar46 = (Il2CppClass *)0x0;
              *(float *)(puVar41 + -100) = fVar56;
              *(undefined8 *)(puVar41 + -0x78) = 0x43c5631;
              UnityEngine_UI_Image__set_fillAmount(pUVar16,fVar56,(MethodInfo *)0x0);
              if (__this_04 != (System_Object_array *)0x0) {
                pIVar46 = (Il2CppClass *)0x0;
                *(undefined8 *)(puVar41 + -0x78) = 0x43c564a;
                UnityEngine_UI_Image__set_fillAmount
                          ((UnityEngine_UI_Image_o *)__this_04,*(float *)(puVar41 + -100),(MethodInfo *)0x0);
                if (*(float *)(puVar41 + -100) <= 0.0) {
                  if (pSVar49->m_Items[0x40] != (Il2CppObject *)0x0) {
                    pIVar50 = pSVar49->m_Items[6];
                    pIVar38 = pSVar49->m_Items[0x40]->klass;
                    pIVar46 = (Il2CppClass *)pIVar38->vtable[0x17].method;
                    UNRECOVERED_JUMPTABLE_00 = pIVar38->vtable[0x17].methodPtr;
                    *(undefined8 *)(puVar41 + -0x78) = 0x43c56ee;
                    (*UNRECOVERED_JUMPTABLE_00)((int)pIVar50);
                    pIVar50 = pSVar49->m_Items[0x42];
                    if (pIVar50 != (Il2CppObject *)0x0) {
                      uVar58 = SUB84(pSVar49->m_Items[6],0);
                      goto label_043c574d;
                    }
                  }
                }
                else {
                  pIVar50 = pSVar49->m_Items[0x40];
                  if (*(float *)(puVar41 + -100) <= 0.5) {
                    if (pIVar50 != (Il2CppObject *)0x0) {
                      pIVar5 = pSVar49->m_Items[2];
                      pIVar46 = (Il2CppClass *)pIVar50->klass->vtable[0x17].method;
                      UNRECOVERED_JUMPTABLE_00 = pIVar50->klass->vtable[0x17].methodPtr;
                      *(undefined8 *)(puVar41 + -0x78) = 0x43c5731;
                      (*UNRECOVERED_JUMPTABLE_00)((int)pIVar5);
                      pIVar50 = pSVar49->m_Items[0x42];
                      if (pIVar50 != (Il2CppObject *)0x0) {
                        uVar58 = SUB84(pSVar49->m_Items[2],0);
                        goto label_043c574d;
                      }
                    }
                  }
                  else if (pIVar50 != (Il2CppObject *)0x0) {
                    pIVar5 = pSVar49->m_Items[0xc];
                    pIVar46 = (Il2CppClass *)pIVar50->klass->vtable[0x17].method;
                    UNRECOVERED_JUMPTABLE_00 = pIVar50->klass->vtable[0x17].methodPtr;
                    *(undefined8 *)(puVar41 + -0x78) = 0x43c569b;
                    (*UNRECOVERED_JUMPTABLE_00)((int)pIVar5);
                    pIVar50 = pSVar49->m_Items[0x42];
                    if (pIVar50 != (Il2CppObject *)0x0) {
                      uVar58 = SUB84(pSVar49->m_Items[0xc],0);
label_043c574d:
                      UNRECOVERED_JUMPTABLE_00 = pIVar50->klass->vtable[0x17].methodPtr;
                      *(undefined8 *)(puVar41 + -0x78) = 0x43c575d;
                      (*UNRECOVERED_JUMPTABLE_00)(uVar58);
                      pIVar50 = pSVar49->m_Items[0x32];
                      __this_04 = (System_Object_array *)pSVar49->m_Items[0x33];
                      pSVar48 = (System_Object_array *)((Il2CppType *)pSVar48->m_Items + 2);
                      pIVar46 = (Il2CppClass *)0x0;
                      *(undefined8 *)(puVar41 + -0x78) = 0x43c5779;
                      pIVar38 = (Il2CppClass *)System_Int32__ToString((int32_t)pSVar48,(MethodInfo *)0x0);
                      if (__this_04 != (System_Object_array *)0x0) {
                        pUVar14 = ((Il2CppClass_1 *)&__this_04->obj)->image;
                        pMVar45 = (pUVar14->vtable)._75_unknown.method;
                        UNRECOVERED_JUMPTABLE_00 = (pUVar14->vtable)._75_unknown.methodPtr;
                        *(undefined8 *)(puVar41 + -0x78) = 0x43c579b;
                        pIVar46 = pIVar38;
                        (*UNRECOVERED_JUMPTABLE_00)(__this_04,pIVar38,pMVar45);
                        if (pIVar50 != (Il2CppObject *)0x0) {
                          pMVar45 = pIVar50->klass->vtable[0x4b].method;
                          UNRECOVERED_JUMPTABLE_00 = pIVar50->klass->vtable[0x4b].methodPtr;
                          *(undefined8 *)(puVar41 + -0x78) = 0x43c57bb;
                          (*UNRECOVERED_JUMPTABLE_00)(pIVar50,pIVar38,pMVar45);
                          pIVar50 = pSVar49->m_Items[0x32];
                          pIVar46 = pIVar38;
                          if (*(int *)&((Il2CppClass_1 *)&pSVar48->obj)->image == 0) {
                            if (pIVar50 != (Il2CppObject *)0x0) {
                              pIVar46 = (Il2CppClass *)pIVar50->klass->vtable[0x17].method;
                              UNRECOVERED_JUMPTABLE_00 = pIVar50->klass->vtable[0x17].methodPtr;
                              *(undefined8 *)(puVar41 + -0x78) = 0x43c5894;
                              (*UNRECOVERED_JUMPTABLE_00)(0x3f800000);
                              if (pSVar49->m_Items[0x33] != (Il2CppObject *)0x0) {
                                pIVar38 = pSVar49->m_Items[0x33]->klass;
                                pIVar46 = (Il2CppClass *)pIVar38->vtable[0x17].method;
                                UNRECOVERED_JUMPTABLE_00 = pIVar38->vtable[0x17].methodPtr;
                                *(undefined8 *)(puVar41 + -0x78) = 0x43c58c3;
                                (*UNRECOVERED_JUMPTABLE_00)(0x3f800000);
                                pUVar15 = (UnityEngine_Component_o *)pSVar49->m_Items[0x40];
                                goto joined_r0x043c58cd;
                              }
                            }
                          }
                          else if (pIVar50 != (Il2CppObject *)0x0) {
                            pIVar46 = (Il2CppClass *)pIVar50->klass->vtable[0x17].method;
                            UNRECOVERED_JUMPTABLE_00 = pIVar50->klass->vtable[0x17].methodPtr;
                            *(undefined8 *)(puVar41 + -0x78) = 0x43c57ef;
                            (*UNRECOVERED_JUMPTABLE_00)();
                            if (pSVar49->m_Items[0x33] != (Il2CppObject *)0x0) {
                              pIVar38 = pSVar49->m_Items[0x33]->klass;
                              pIVar46 = (Il2CppClass *)pIVar38->vtable[0x17].method;
                              UNRECOVERED_JUMPTABLE_00 = pIVar38->vtable[0x17].methodPtr;
                              *(undefined8 *)(puVar41 + -0x78) = 0x43c5819;
                              (*UNRECOVERED_JUMPTABLE_00)();
                              pUVar15 = (UnityEngine_Component_o *)pSVar49->m_Items[0x40];
joined_r0x043c58cd:
                              if (pUVar15 != (UnityEngine_Component_o *)0x0) {
                                pIVar46 = (Il2CppClass *)0x0;
                                *(undefined8 *)(puVar41 + -0x78) = 0x43c5830;
                                pUVar28 = UnityEngine_Component__get_gameObject(pUVar15,(MethodInfo *)0x0);
                                if (pUVar28 != (UnityEngine_GameObject_o *)0x0) {
                                  pIVar46 = (Il2CppClass *)0x0;
                                  *(undefined8 *)(puVar41 + -0x78) = 0x43c5843;
                                  bVar22 = UnityEngine_GameObject__get_activeSelf(pUVar28,(MethodInfo *)0x0);
                                  if ((char)bVar22 != '\0') {
                                    return extraout_XMM0_Da_25;
                                  }
                                  if (0.0 < *(float *)((long)pSVar49->m_Items + 0x104)) {
                                    return 0.0;
                                  }
                                  if (0.0 < *(float *)(pSVar49->m_Items + 0x21)) {
                                    return 0.0;
                                  }
                                  pUVar15 = (UnityEngine_Component_o *)pSVar49->m_Items[0x40];
                                  if (pUVar15 != (UnityEngine_Component_o *)0x0) {
                                    pIVar46 = (Il2CppClass *)0x0;
                                    *(undefined8 *)(puVar41 + -0x78) = 0x43c58ef;
                                    pUVar28 = UnityEngine_Component__get_gameObject(pUVar15,(MethodInfo *)0x0)
                                    ;
                                    if (pUVar28 != (UnityEngine_GameObject_o *)0x0) {
                                      pIVar46 = (Il2CppClass *)0x1;
                                      *(undefined8 *)(puVar41 + -0x78) = 0x43c5907;
                                      UnityEngine_GameObject__SetActive(pUVar28,1,(MethodInfo *)0x0);
                                      pUVar15 = (UnityEngine_Component_o *)pSVar49->m_Items[0x41];
                                      if (pUVar15 != (UnityEngine_Component_o *)0x0) {
                                        pIVar46 = (Il2CppClass *)0x0;
                                        *(undefined8 *)(puVar41 + -0x78) = 0x43c591a;
                                        pUVar28 = UnityEngine_Component__get_gameObject
                                                            (pUVar15,(MethodInfo *)0x0);
                                        if (pUVar28 != (UnityEngine_GameObject_o *)0x0) {
                                          pIVar46 = (Il2CppClass *)0x0;
                                          *(undefined8 *)(puVar41 + -0x78) = 0x43c592b;
                                          UnityEngine_GameObject__SetActive(pUVar28,0,(MethodInfo *)0x0);
                                          pUVar15 = (UnityEngine_Component_o *)pSVar49->m_Items[0x42];
                                          if (pUVar15 != (UnityEngine_Component_o *)0x0) {
                                            pIVar46 = (Il2CppClass *)0x0;
                                            *(undefined8 *)(puVar41 + -0x78) = 0x43c593e;
                                            pUVar28 = UnityEngine_Component__get_gameObject
                                                                (pUVar15,(MethodInfo *)0x0);
                                            if (pUVar28 != (UnityEngine_GameObject_o *)0x0) {
                                              pIVar46 = (Il2CppClass *)0x0;
                                              *(undefined8 *)(puVar41 + -0x78) = 0x43c594f;
                                              UnityEngine_GameObject__SetActive(pUVar28,0,(MethodInfo *)0x0);
                                              pUVar15 = (UnityEngine_Component_o *)pSVar49->m_Items[0x30];
                                              if (pUVar15 != (UnityEngine_Component_o *)0x0) {
                                                pIVar46 = (Il2CppClass *)0x0;
                                                *(undefined8 *)(puVar41 + -0x78) = 0x43c5962;
                                                pUVar28 = UnityEngine_Component__get_gameObject
                                                                    (pUVar15,(MethodInfo *)0x0);
                                                if (pUVar28 != (UnityEngine_GameObject_o *)0x0) {
                                                  pIVar46 = (Il2CppClass *)0x1;
                                                  *(undefined8 *)(puVar41 + -0x78) = 0x43c5976;
                                                  UnityEngine_GameObject__SetActive
                                                            (pUVar28,1,(MethodInfo *)0x0);
                                                  pUVar15 = (UnityEngine_Component_o *)pSVar49->m_Items[0x31];
                                                  goto joined_r0x043c5980;
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
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            pIVar46 = (Il2CppClass *)0x0;
            *(undefined8 *)(puVar41 + -0x78) = 0x43c53d3;
            fVar56 = Characters_BaseUseable__GetCooldownRatio
                               ((Characters_BaseUseable_o *)pSVar48,(MethodInfo *)0x0);
            *(float *)(puVar41 + -100) = fVar56;
            pUVar16 = (UnityEngine_UI_Image_o *)pSVar49->m_Items[0x46];
            if (pUVar16 != (UnityEngine_UI_Image_o *)0x0) {
              __this_04 = (System_Object_array *)pSVar49->m_Items[0x45];
              pIVar46 = (Il2CppClass *)0x0;
              *(undefined8 *)(puVar41 + -0x78) = 0x43c53fd;
              UnityEngine_UI_Image__set_fillAmount(pUVar16,*(float *)(puVar41 + -100),(MethodInfo *)0x0);
              if (__this_04 != (System_Object_array *)0x0) {
                pIVar46 = (Il2CppClass *)0x0;
                *(undefined8 *)(puVar41 + -0x78) = 0x43c5416;
                UnityEngine_UI_Image__set_fillAmount
                          ((UnityEngine_UI_Image_o *)__this_04,*(float *)(puVar41 + -100),(MethodInfo *)0x0);
                if (((bool)*(char *)(pSVar49->m_Items + 0x47) ==
                     (*(float *)(puVar41 + -100) <= 1.0 && *(float *)(puVar41 + -100) != 1.0)) ||
                   (bVar53 = *(float *)(puVar41 + -100) != 1.0, bVar17 = *(float *)(puVar41 + -100) <= 1.0,
                   *(bool *)(pSVar49->m_Items + 0x47) = bVar17 && bVar53, bVar17 && bVar53)) {
label_043c5518:
                  pUVar15 = (UnityEngine_Component_o *)pSVar49->m_Items[0x43];
                  if (pUVar15 != (UnityEngine_Component_o *)0x0) {
                    pIVar46 = (Il2CppClass *)0x0;
                    *(undefined8 *)(puVar41 + -0x78) = 0x43c552f;
                    pUVar28 = UnityEngine_Component__get_gameObject(pUVar15,(MethodInfo *)0x0);
                    if (pUVar28 != (UnityEngine_GameObject_o *)0x0) {
                      pIVar46 = (Il2CppClass *)0x0;
                      *(undefined8 *)(puVar41 + -0x78) = 0x43c5542;
                      bVar22 = UnityEngine_GameObject__get_activeSelf(pUVar28,(MethodInfo *)0x0);
                      fVar56 = extraout_XMM0_Da_23;
                      if (((char)bVar22 != '\0') ||
                         (fVar56 = 0.0, 0.0 < *(float *)((long)pSVar49->m_Items + 0x104))) {
                        return fVar56;
                      }
                      pUVar15 = (UnityEngine_Component_o *)pSVar49->m_Items[0x44];
                      if (pUVar15 != (UnityEngine_Component_o *)0x0) {
                        pIVar46 = (Il2CppClass *)0x0;
                        *(undefined8 *)(puVar41 + -0x78) = 0x43c5572;
                        pUVar28 = UnityEngine_Component__get_gameObject(pUVar15,(MethodInfo *)0x0);
                        if (pUVar28 != (UnityEngine_GameObject_o *)0x0) {
                          pIVar46 = (Il2CppClass *)0x0;
                          *(undefined8 *)(puVar41 + -0x78) = 0x43c5587;
                          UnityEngine_GameObject__SetActive(pUVar28,0,(MethodInfo *)0x0);
                          pUVar15 = (UnityEngine_Component_o *)pSVar49->m_Items[0x43];
joined_r0x043c5980:
                          if (pUVar15 != (UnityEngine_Component_o *)0x0) {
                            pIVar46 = (Il2CppClass *)0x0;
                            *(undefined8 *)(puVar41 + -0x78) = 0x43c559e;
                            pUVar28 = UnityEngine_Component__get_gameObject(pUVar15,(MethodInfo *)0x0);
                            if (pUVar28 != (UnityEngine_GameObject_o *)0x0) {
                              UnityEngine_GameObject__SetActive(pUVar28,1,(MethodInfo *)0x0);
                              return extraout_XMM0_Da_24;
                            }
                          }
                        }
                      }
                    }
                  }
                }
                else {
                  pUVar15 = (UnityEngine_Component_o *)pSVar49->m_Items[0x44];
                  if (pUVar15 != (UnityEngine_Component_o *)0x0) {
                    pIVar46 = (Il2CppClass *)0x0;
                    *(undefined8 *)(puVar41 + -0x78) = 0x43c5462;
                    pUVar28 = UnityEngine_Component__get_gameObject(pUVar15,(MethodInfo *)0x0);
                    if (pUVar28 != (UnityEngine_GameObject_o *)0x0) {
                      pIVar46 = (Il2CppClass *)0x0;
                      *(undefined8 *)(puVar41 + -0x78) = 0x43c5475;
                      bVar22 = UnityEngine_GameObject__get_activeSelf(pUVar28,(MethodInfo *)0x0);
                      if ((char)bVar22 != '\0') goto label_043c5518;
                      pUVar15 = (UnityEngine_Component_o *)pSVar49->m_Items[0x43];
                      if (pUVar15 != (UnityEngine_Component_o *)0x0) {
                        pIVar46 = (Il2CppClass *)0x0;
                        *(undefined8 *)(puVar41 + -0x78) = 0x43c5494;
                        pUVar28 = UnityEngine_Component__get_gameObject(pUVar15,(MethodInfo *)0x0);
                        if (pUVar28 != (UnityEngine_GameObject_o *)0x0) {
                          pIVar46 = (Il2CppClass *)0x0;
                          *(undefined8 *)(puVar41 + -0x78) = 0x43c54a9;
                          UnityEngine_GameObject__SetActive(pUVar28,0,(MethodInfo *)0x0);
                          pUVar15 = (UnityEngine_Component_o *)pSVar49->m_Items[0x44];
                          if (pUVar15 != (UnityEngine_Component_o *)0x0) {
                            pIVar46 = (Il2CppClass *)0x0;
                            *(undefined8 *)(puVar41 + -0x78) = 0x43c54c0;
                            pUVar28 = UnityEngine_Component__get_gameObject(pUVar15,(MethodInfo *)0x0);
                            if (pUVar28 != (UnityEngine_GameObject_o *)0x0) {
                              pIVar46 = (Il2CppClass *)0x1;
                              *(undefined8 *)(puVar41 + -0x78) = 0x43c54d8;
                              UnityEngine_GameObject__SetActive(pUVar28,1,(MethodInfo *)0x0);
                              pUVar15 = (UnityEngine_Component_o *)pSVar49->m_Items[0x44];
                              if (pUVar15 != (UnityEngine_Component_o *)0x0) {
                                *(undefined8 *)(puVar41 + -0x78) = 0x43c54f7;
                                pIVar46 = MethodInfo_Animator_GetComponent_Animator;
                                pUVar29 = (UnityEngine_Animator_o *)
                                          UnityEngine_Component__GetComponent_object_
                                                    (pUVar15,(MethodInfo_24E7B40 *)MethodInfo_Animator_GetComponent_Animator);
                                if (pUVar29 != (UnityEngine_Animator_o *)0x0) {
                                  pIVar46 = (Il2CppClass *)0x0;
                                  *(undefined8 *)(puVar41 + -0x78) = 0x43c550d;
                                  UnityEngine_Animator__Update(pUVar29,0.0,(MethodInfo *)0x0);
                                  *(undefined4 *)((long)pSVar49->m_Items + 0x104) = 0x3f000000;
                                  goto label_043c5518;
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
          }
        }
        goto label_043c5986;
      }
      pUVar14 = ((Il2CppClass_1 *)&pSVar48->obj)->image;
      bVar6 = (TypeInfo_ThunderspearWeapon->_2).naturalAligment;
      pIVar46 = TypeInfo_ThunderspearWeapon;
      if ((bVar6 <= (pUVar14->_2).naturalAligment) &&
         ((pUVar14->_2).typeHierarchy[(ulong)bVar6 - 1] == TypeInfo_ThunderspearWeapon)) goto label_043c537e;
    }
    *(undefined8 *)(puVar41 + -0x78) = 0x43c5993;
    __this_05 = pSVar48;
    il2cpp_runtime_helper_022b2fd0();
  }
  *(System_Object_array **)(puVar42 + -8) = __this_04;
  lVar32 = *(long *)((long)((Il2CppType *)__this_05->m_Items + 0xf) + 8);
  pSVar51 = __this_05;
  if ((lVar32 != 0) &&
     (pSVar51 = ((Il2CppType *)__this_05->m_Items)[0x24].data, __this_04 = __this_05,
     pSVar51 != (System_Object_array *)0x0)) {
    fVar54 = *(float *)(lVar32 + 0x140) / *(float *)(lVar32 + 0x134);
    fVar56 = 1.0;
    if (fVar54 <= 1.0) {
      fVar56 = fVar54;
    }
    pUVar14 = ((Il2CppClass_1 *)&pSVar51->obj)->image;
    pIVar46 = (Il2CppClass *)(pUVar14->vtable)._47_CrossFadeColor.method;
    UNRECOVERED_JUMPTABLE_00 = (pUVar14->vtable)._47_CrossFadeColor.methodPtr;
    *(undefined8 *)(puVar42 + -0x10) = 0x43c59fb;
    (*UNRECOVERED_JUMPTABLE_00)(-(uint)(0.0 <= fVar54) & (uint)fVar56);
    if (*(long *)((long)((Il2CppType *)__this_05->m_Items + 0xf) + 8) != 0) {
      pSVar51 = *(System_Object_array **)((long)((Il2CppType *)__this_05->m_Items + 0x24) + 8);
      if (*(float *)(*(long *)((long)((Il2CppType *)__this_05->m_Items + 0xf) + 8) + 0x140) <= 1.0) {
        if (pSVar51 != (System_Object_array *)0x0) {
          uVar58 = SUB84(((Il2CppType *)__this_05->m_Items)[9].data,0);
          uVar60 = SUB84(*(UnityEngine_UI_RectMask2D_o **)((long)((Il2CppType *)__this_05->m_Items + 9) + 8),0
                        );
          goto label_043c5a4b;
        }
      }
      else if (pSVar51 != (System_Object_array *)0x0) {
        uVar58 = SUB84(((Il2CppType *)__this_05->m_Items)[8].data,0);
        uVar60 = (undefined4)*(undefined8 *)((long)((Il2CppType *)__this_05->m_Items + 8) + 8);
label_043c5a4b:
        pUVar14 = ((Il2CppClass_1 *)&pSVar51->obj)->image;
        UNRECOVERED_JUMPTABLE_00 = (pUVar14->vtable)._23_set_color.methodPtr;
        fVar56 = (float)(*UNRECOVERED_JUMPTABLE_00)
                                  (uVar58,uVar60,pSVar51,(pUVar14->vtable)._23_set_color.method,extraout_RDX,
                                   UNRECOVERED_JUMPTABLE_00);
        return fVar56;
      }
    }
  }
  *(undefined8 *)(puVar42 + -0x10) = 0x43c5a64;
  il2cpp_runtime_helper_022b2c90();
  *(System_Object_array **)(puVar42 + -0x10) = pSVar48;
  *(System_Object_array **)(puVar42 + -0x18) = pSVar49;
  *(System_Object_array **)(puVar42 + -0x20) = __this_04;
  if (g_data_057ae3de == '\0') {
    *(undefined8 *)(puVar42 + -0x28) = 0x43c5a90;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Animator_GetComponent_Animator);
    *(undefined8 *)(puVar42 + -0x28) = 0x43c5a9c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    *(undefined8 *)(puVar42 + -0x28) = 0x43c5aa8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    *(undefined8 *)(puVar42 + -0x28) = 0x43c5ab4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Animator_get_Item);
    *(undefined8 *)(puVar42 + -0x28) = 0x43c5ac0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    g_data_057ae3de = '\x01';
  }
  pUVar28 = ((Il2CppType *)pSVar51->m_Items)[10].data;
  if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
    *(undefined8 *)(puVar42 + -0x28) = 0x43c5ae6;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)(puVar42 + -0x28) = 0x43c5af0;
  bVar22 = MiscExtensions__GetActive(pUVar28,(MethodInfo *)0x0);
  fVar56 = extraout_XMM0_Da_26;
  if ((char)bVar22 != '\0') {
    __this_06 = ((Il2CppType *)pSVar51->m_Items)[0x25].data;
    if (__this_06 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_043c5bc3;
    *(undefined8 *)(puVar42 + -0x28) = 0x43c5b1a;
    bVar22 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                       (__this_06,(Il2CppObject *)pIVar46,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar22 == '\0') {
      if (pIVar46 == (Il2CppClass *)0x0) goto label_043c5bc3;
      *(undefined8 *)(puVar42 + -0x28) = 0x43c5b61;
      pUVar29 = (UnityEngine_Animator_o *)
                UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pIVar46,(MethodInfo_24E7B40 *)MethodInfo_Animator_GetComponent_Animator);
      __this_06 = ((Il2CppType *)pSVar51->m_Items)[0x25].data;
      if (__this_06 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_043c5bc3;
      *(undefined8 *)(puVar42 + -0x28) = 0x43c5b85;
      System_Collections_Generic_Dictionary_object__object___Add
                (__this_06,(Il2CppObject *)pIVar46,(Il2CppObject *)pUVar29,MethodInfo_Void_Add);
      pUVar28 = (UnityEngine_GameObject_o *)0x0;
      if (pUVar29 == (UnityEngine_Animator_o *)0x0) goto label_043c5bc3;
    }
    else {
      __this_06 = ((Il2CppType *)pSVar51->m_Items)[0x25].data;
      if (__this_06 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_043c5bc3:
        *(undefined8 *)(puVar42 + -0x28) = 0x43c5bc8;
        uVar57 = il2cpp_runtime_helper_022b2c90();
        *(Il2CppClass **)(puVar42 + -0x28) = pIVar46;
        *(UnityEngine_GameObject_o **)(puVar42 + -0x30) = pUVar28;
        *(undefined8 *)(puVar42 + -0x38) = uVar57;
        if (g_data_057ae3e5 == '\0') {
          *(undefined8 *)(puVar42 + -0x40) = 0x43c5bec;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_UnityEngine_UI_Image_UnityEngine_Animator);
          *(undefined8 *)(puVar42 + -0x40) = 0x43c5bf8;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_Image_Animator);
          *(undefined8 *)(puVar42 + -0x40) = 0x43c5c04;
          il2cpp_runtime_helper_023445d0(&"");
          g_data_057ae3e5 = '\x01';
        }
        (__this_06->fields)._count = 0x3f800000;
        (__this_06->fields)._freeList = 0x3f000000;
        (__this_06->fields)._freeCount = 0;
        (__this_06->fields)._version = 0x3f000000;
        (__this_06->fields)._comparer =
             (System_Collections_Generic_IEqualityComparer_TKey__o *)0x3f4000003f800000;
        (__this_06->fields)._keys =
             (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x3f8000003f000000;
        (__this_06->fields)._values =
             (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x3f800000;
        (__this_06->fields)._syncRoot = (Il2CppObject *)0x3f00000000000000;
        __this_06[1].klass = (System_Collections_Generic_Dictionary_object__object__c *)0x3f0000003f800000;
        __this_06[1].monitor = (void *)0x3f8000003f000000;
        __this_06[1].fields._buckets = (System_Int32_array *)0x3f8000003f800000;
        __this_06[1].fields._entries =
             (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x3f0000003f800000;
        __this_06[1].fields._count = 0x3f800000;
        __this_06[1].fields._freeList = 0x3f800000;
        __this_06[1].fields._freeCount = 0x3f800000;
        __this_06[1].fields._version = 0x3f400000;
        *(undefined4 *)&__this_06[1].fields._comparer = 0x3f800000;
        *(undefined4 *)((long)&__this_06[1].fields._comparer + 4) = 0x3f800000;
        *(undefined4 *)&__this_06[1].fields._keys = 0x3f800000;
        *(undefined4 *)((long)&__this_06[1].fields._keys + 4) = 0x3f800000;
        __this_06[1].fields._values =
             (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x3e8000003f800000;
        __this_06[1].fields._syncRoot = (Il2CppObject *)0x3f8000003e800000;
        __this_06[2].klass = (System_Collections_Generic_Dictionary_object__object__c *)0x3f451eb83f451eb8;
        __this_06[2].monitor = (void *)0x3f8000003f451eb8;
        *(undefined4 *)&__this_06[2].fields._buckets = 0x3f451eb8;
        *(undefined4 *)((long)&__this_06[2].fields._buckets + 4) = 0x3f000000;
        *(undefined4 *)&__this_06[2].fields._entries = 0x3f000000;
        *(undefined4 *)((long)&__this_06[2].fields._entries + 4) = 0x3f800000;
        __this_06[3].monitor = "";
        *(undefined8 *)(puVar42 + -0x40) = 0x43c5ca5;
        il2cpp_runtime_helper_022b4080(&__this_06[3].monitor);
        __this_06[3].fields._buckets = "";
        *(undefined8 *)(puVar42 + -0x40) = 0x43c5cbb;
        il2cpp_runtime_helper_022b4080(&__this_06[3].fields);
        *(undefined8 *)(puVar42 + -0x40) = 0x43c5cca;
        __this_03 = (System_Collections_Generic_Dictionary_object__object__o *)
                    il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_Image_Animator);
        *(undefined8 *)(puVar42 + -0x40) = 0x43c5cdf;
        System_Collections_Generic_Dictionary_object__object____ctor(__this_03,MethodInfo_Dictionary_2_UnityEngine_UI_Image_UnityEngine_Animator);
        __this_06[7].fields._values =
             (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)__this_03;
        *(undefined8 *)(puVar42 + -0x40) = 0x43c5cf5;
        il2cpp_runtime_helper_022b4080(&__this_06[7].fields._values);
        UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_06,(MethodInfo *)0x0);
        return extraout_XMM0_Da_28;
      }
      *(undefined8 *)(puVar42 + -0x28) = 0x43c5b40;
      pUVar29 = (UnityEngine_Animator_o *)
                System_Collections_Generic_Dictionary_object__object___get_Item
                          (__this_06,(Il2CppObject *)pIVar46,MethodInfo_Animator_get_Item);
      if (pUVar29 == (UnityEngine_Animator_o *)0x0) {
        pUVar28 = (UnityEngine_GameObject_o *)0x0;
        goto label_043c5bc3;
      }
    }
    *(undefined8 *)(puVar42 + -0x28) = 0x43c5b94;
    fVar56 = UnityEngine_Animator__get_speed(pUVar29,(MethodInfo *)0x0);
    if ((fVar56 != 0.0) || (NAN(fVar56))) {
      *(undefined8 *)(puVar42 + -0x28) = 0x43c5bab;
      UnityEngine_Animator__Update(pUVar29,0.0,(MethodInfo *)0x0);
      UnityEngine_Animator__set_speed(pUVar29,0.0,(MethodInfo *)0x0);
      return extraout_XMM0_Da_27;
    }
  }
  return fVar56;
}


// Characters.AHSSWeapon$$Activate
// il2cpp: void Characters_AHSSWeapon__Activate (Characters_AHSSWeapon_o* __this, const MethodInfo* method);
// 0x42f9a50

void Characters_AHSSWeapon__Activate(Characters_AHSSWeapon_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  System_String_o **ppSVar2;
  Il2CppObject *pIVar3;
  UnityEngine_Events_UnityAction_o *pUVar4;
  Il2CppObject *pIVar5;
  byte bVar6;
  byte bVar7;
  Characters_BaseCharacter_c *pCVar8;
  Characters_Human_o *pCVar9;
  Characters_HumanComponentCache_o *__this_00;
  Characters_HookUseable_o *pCVar10;
  Outline_o *pOVar11;
  System_Collections_Generic_List_string__o *pSVar12;
  Characters_BaseHitbox_o *__this_01;
  System_Collections_Generic_List_string__c *pSVar13;
  Il2CppRGCTXData *x;
  System_Action_Hashtable__o *__this_02;
  System_String_o *b;
  UnityEngine_UI_Image_o *pUVar14;
  MethodInfo_362C220 *pMVar15;
  code *pcVar16;
  Il2CppMethodPointer vtableDispatch;
  UnityEngine_UI_Image_c *pUVar17;
  UnityEngine_Component_o *pUVar18;
  UnityEngine_UI_Image_o *pUVar19;
  bool bVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  char cVar24;
  bool_conflict bVar25;
  int iVar26;
  uint uVar27;
  long *plVar28;
  UnityEngine_GameObject_o *pUVar29;
  UnityEngine_Animator_o *pUVar30;
  System_String_o *pSVar31;
  UnityEngine_Texture2D_o *texture;
  System_String_o *pSVar32;
  long lVar33;
  undefined8 *puVar34;
  UnityEngine_Object_o *pUVar35;
  UnityEngine_Transform_o *pUVar36;
  Il2CppClass *pIVar37;
  void *pvVar38;
  Il2CppClass *pIVar39;
  undefined8 uVar40;
  System_Collections_Generic_Dictionary_object__object__o *__this_03;
  undefined8 extraout_RDX;
  System_Collections_Generic_List_object__o *pSVar41;
  System_Object_array *__this_04;
  undefined1 *puVar42;
  undefined1 *puVar43;
  undefined1 *puVar44;
  int iVar45;
  undefined8 unaff_RBP;
  MethodInfo *pMVar46;
  Il2CppClass *pIVar47;
  Characters_BaseCharacter_o *pCVar48;
  Il2CppRuntimeInterfaceOffsetPair *pIVar49;
  System_Object_array *__this_05;
  System_Object_array *pSVar50;
  System_Object_array *pSVar51;
  Il2CppObject *pIVar52;
  System_Object_array *pSVar53;
  System_Collections_Generic_Dictionary_object__object__o *__this_06;
  long *unaff_R12;
  long *plVar54;
  Il2CppClass *unaff_R13;
  Characters_BaseCharacter_o *unaff_R14;
  Characters_Human_o *unaff_R15;
  bool bVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float extraout_XMM0_Dc;
  undefined4 uVar59;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  float extraout_XMM0_Dc_03;
  float fVar60;
  undefined4 extraout_XMM0_Dc_04;
  float extraout_XMM0_Dd;
  undefined4 uVar61;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  float extraout_XMM0_Dd_03;
  undefined4 extraout_XMM0_Dd_04;
  float in_XMM1_Da;
  undefined4 uVar62;
  undefined4 uVar63;
  ulong uVar64;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  float fVar68;
  UnityEngine_Quaternion_Fields UVar69;
  UnityEngine_Quaternion_o UVar70;
  undefined1 auVar71 [12];
  UnityEngine_Vector3_o UVar72;
  UnityEngine_Vector3_o euler;
  UnityEngine_Vector3_o forward;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o forward_00;
  UnityEngine_Vector3_o force;
  UnityEngine_Quaternion_o b_00;
  undefined1 local_c0 [8];
  float fStack_b8;
  float fStack_b4;
  undefined1 local_b0 [8];
  undefined8 uStack_a8;
  uint local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70 [16];
  undefined1 local_60 [8];
  float fStack_58;
  float fStack_54;
  float local_44;
  undefined8 local_40;
  undefined8 uStack_38;
  System_Collections_Generic_List_string__c *pSStack_30;
  
  if (g_data_057adef9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    g_data_057adef9 = '\x01';
  }
  pCVar48 = (__this->fields)._owner;
  if (pCVar48 != (Characters_BaseCharacter_o *)0x0) {
    pCVar8 = pCVar48->klass;
    bVar6 = (TypeInfo_Human->_2).naturalAligment;
    if ((bVar6 <= (pCVar8->_2).naturalAligment) &&
       ((pCVar8->_2).typeHierarchy[(ulong)bVar6 - 1] == TypeInfo_Human)) {
      uVar40 = (*(pCVar8->vtable)._66_GetAimPoint.methodPtr)(pCVar48,(pCVar8->vtable)._66_GetAimPoint.method);
      (__this->fields)._target.fields.x = (float)(int)uVar40;
      (__this->fields)._target.fields.y = (float)(int)((ulong)uVar40 >> 0x20);
      (__this->fields)._target.fields.z = in_XMM1_Da;
      return;
    }
    il2cpp_runtime_helper_022b2fd0();
  }
  il2cpp_runtime_helper_022b2c90();
  puVar42 = local_c0;
  pSStack_30 = (System_Collections_Generic_List_string__c *)__this;
  if (g_data_057adefa == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CapsuleCollider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterData);
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Radius");
    il2cpp_runtime_helper_023445d0(&"KnockbackForce");
    il2cpp_runtime_helper_023445d0(&"AHSS");
    g_data_057adefa = '\x01';
  }
  pCVar9 = *(Characters_Human_o **)&(pCVar48->fields).MaxFootstepDistance;
  plVar54 = unaff_R12;
  pIVar39 = unaff_R13;
  auVar65 = _local_60;
  if (pCVar9 == (Characters_Human_o *)0x0) goto label_042fa582;
  bVar6 = (TypeInfo_Human->_2).naturalAligment;
  plVar28 = (long *)__this;
  if (((pCVar9->klass->_2).naturalAligment < bVar6) ||
     ((pCVar9->klass->_2).typeHierarchy[(ulong)bVar6 - 1] != TypeInfo_Human)) {
label_042fa587:
    il2cpp_runtime_helper_022b2fd0(pCVar9);
    __this = (Characters_AHSSWeapon_o *)plVar28;
label_042fa592:
    unaff_R13 = pIVar39;
    unaff_R12 = plVar54;
    il2cpp_runtime_helper_022b2fd0();
    if (g_data_057adefb == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
      il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
      g_data_057adefb = '\x01';
      if (*(int *)(TypeInfo_UIManager + 0xe4) != 0) goto label_042fa5c3;
label_042fa60a:
      il2cpp_runtime_helper_02337ed0();
      plVar54 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    }
    else {
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) goto label_042fa60a;
label_042fa5c3:
      plVar54 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    }
    if (plVar54 == (long *)0x0) {
label_042fa67f:
      il2cpp_runtime_helper_022b2c90();
      return;
    }
    if ((*(byte *)(*plVar54 + 0x130) < *(byte *)(TypeInfo_InGameMenu + 0x130)) ||
       (*(long *)(*(long *)(*plVar54 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameMenu + 0x130) * 8) != TypeInfo_InGameMenu
       )) {
      il2cpp_runtime_helper_022b2fd0();
      goto label_042fa67f;
    }
    pIVar49 = (Il2CppRuntimeInterfaceOffsetPair *)plVar54[0x16];
    if (pIVar49 == (Il2CppRuntimeInterfaceOffsetPair *)0x0) goto label_042fa67f;
    uVar27 = *(uint *)&(((System_Collections_Generic_List_string__c *)__this)->_1).castClass;
    bVar55 = uVar27 < 2;
    unaff_R14 = pCVar48;
    unaff_R15 = pCVar9;
  }
  else {
    lVar33 = *(long *)&(pCVar9->fields).Dead;
    if ((lVar33 == 0) ||
       (pUVar36 = *(UnityEngine_Transform_o **)(lVar33 + 0x10), pUVar36 == (UnityEngine_Transform_o *)0x0))
    goto label_042fa582;
    local_90 = *(undefined8 *)((long)&(pCVar48->fields).VisibleName + 4);
    uStack_88 = 0;
    local_80 = CONCAT44(local_80._4_4_,*(undefined4 *)&(pCVar48->fields).field_0x44);
    UVar72 = UnityEngine_Transform__get_position(pUVar36,(MethodInfo *)0x0);
    fVar58 = UVar72.fields.x;
    fVar56 = UVar72.fields.y;
    fVar60 = extraout_XMM0_Dc;
    fVar57 = extraout_XMM0_Dd;
    fVar68 = UVar72.fields.z;
    if (g_data_057a6845 == '\0') {
      local_b0._0_4_ = UVar72.fields.z;
      fStack_b8 = extraout_XMM0_Dc;
      local_c0 = (undefined1  [8])UVar72.fields._0_8_;
      fStack_b4 = extraout_XMM0_Dd;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a6845 = '\x01';
      fVar58 = (float)local_c0._0_4_;
      fVar56 = (float)local_c0._4_4_;
      fVar60 = fStack_b8;
      fVar57 = fStack_b4;
      fVar68 = (float)local_b0._0_4_;
    }
    auVar65._0_4_ = (float)local_90 - fVar58;
    auVar65._4_4_ = local_90._4_4_ - fVar56;
    auVar65._8_4_ = (float)uStack_88 - fVar60;
    auVar65._12_4_ = uStack_88._4_4_ - fVar57;
    plVar54 = &TypeInfo_Math;
    fVar58 = (float)local_80 - fVar68;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      local_70._0_4_ = (float)local_80 - fVar68;
      _local_60 = auVar65;
      il2cpp_runtime_helper_02337ed0();
      auVar65 = _local_60;
      fVar58 = (float)local_70._0_4_;
    }
    uVar59 = 0;
    uVar61 = 0;
    fVar56 = fVar58 * fVar58 + auVar65._4_4_ * auVar65._4_4_ + auVar65._0_4_ * auVar65._0_4_;
    if (fVar56 < 0.0) {
      local_70._0_4_ = fVar58;
      _local_60 = auVar65;
      fVar56 = sqrtf(fVar56);
      uVar59 = extraout_XMM0_Dc_00;
      uVar61 = extraout_XMM0_Dd_00;
      auVar65 = _local_60;
      fVar58 = (float)local_70._0_4_;
      if (fVar56 <= 1e-05) goto label_042f9c94;
label_042f9cfc:
      fVar58 = fVar58 / fVar56;
      auVar22._4_4_ = fVar56;
      auVar22._0_4_ = fVar56;
      auVar22._8_4_ = uVar59;
      auVar22._12_4_ = uVar61;
      auVar66 = divps(auVar65,auVar22);
      lVar33._0_4_ = (pCVar9->fields).Dead;
      lVar33._4_4_ = (pCVar9->fields).CustomDamageEnabled;
      auVar65 = _local_60;
    }
    else {
      fVar56 = SQRT(fVar56);
      if (1e-05 < fVar56) goto label_042f9cfc;
label_042f9c94:
      if (g_data_057a65d5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a65d5 = '\x01';
      }
      auVar66._8_8_ = 0;
      auVar66._0_8_ = **(ulong **)(TypeInfo_Vector3 + 0xb8);
      fVar58 = *(float *)(*(ulong **)(TypeInfo_Vector3 + 0xb8) + 1);
      lVar33._0_4_ = (pCVar9->fields).Dead;
      lVar33._4_4_ = (pCVar9->fields).CustomDamageEnabled;
      auVar65 = _local_60;
    }
    _local_60 = auVar66;
    if (lVar33 == 0) {
label_042fa582:
      _local_60 = auVar65;
      il2cpp_runtime_helper_022b2c90();
      plVar28 = (long *)__this;
      goto label_042fa587;
    }
    local_70._0_4_ = fVar58;
    auVar65 = _local_60;
    if (*(UnityEngine_Transform_o **)(lVar33 + 0x10) == (UnityEngine_Transform_o *)0x0) goto label_042fa582;
    UVar72 = UnityEngine_Transform__get_forward
                       (*(UnityEngine_Transform_o **)(lVar33 + 0x10),(MethodInfo *)0x0);
    cVar24 = *(char *)((long)&(pCVar9->fields).Animation + 4);
    __this = (Characters_AHSSWeapon_o *)CONCAT71((int7)((ulong)__this >> 8),cVar24);
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 0;
    uStack_a8._0_4_ = (float)0;
    uStack_a8._4_4_ = (float)0;
    if (cVar24 != '\0') {
      local_b0._0_4_ = (float)local_90;
      local_b0._4_4_ = local_90._4_4_;
      uStack_a8._0_4_ = (float)uStack_88;
      uStack_a8._4_4_ = uStack_88._4_4_;
    }
    _local_c0 = ZEXT816(0);
    if (cVar24 == '\0') {
      local_40 = local_90;
      uStack_38 = uStack_88;
      local_94 = (uint)(float)local_80;
    }
    else {
      local_94 = 0;
      local_40 = 0;
      uStack_38 = 0;
      _local_c0 = ZEXT416((uint)(float)local_80);
    }
    __this_00 = (pCVar9->fields).HumanCache;
    auVar65 = _local_60;
    if (__this_00 == (Characters_HumanComponentCache_o *)0x0) goto label_042fa582;
    local_44 = UVar72.fields.z * (float)local_60._0_4_ - UVar72.fields.x * (float)local_70._0_4_;
    bVar25 = Characters_HookUseable__IsHooked((Characters_HookUseable_o *)__this_00,(MethodInfo *)0x0);
    auVar65 = _local_60;
    if (cVar24 == '\0') {
      if ((char)bVar25 == '\0') {
        local_90 = local_40;
        uStack_88 = uStack_38;
        local_80 = CONCAT44(local_80._4_4_,local_94);
        uVar59 = (undefined4)local_40;
        uVar61 = local_40._4_4_;
        uVar62 = (undefined4)uStack_38;
        uVar63 = uStack_38._4_4_;
        uVar27 = local_94;
        if (0.0 <= local_44) goto label_042f9e66;
label_042f9e8c:
        lVar33 = 0x100;
        if (*(int *)(TypeInfo_HumanAnimations + 0xe4) != 0) {
          local_b0._4_4_ = uVar61;
          local_b0._0_4_ = uVar59;
          uStack_a8._0_4_ = (float)uVar62;
          uStack_a8._4_4_ = (float)uVar63;
          _local_c0 = ZEXT416(uVar27);
          goto label_042f9f5a;
        }
        local_40 = CONCAT44(uVar61,uVar59);
        uStack_38 = CONCAT44(uVar63,uVar62);
        local_94 = uVar27;
        il2cpp_runtime_helper_02337ed0();
        uStack_a8 = uStack_38;
        local_b0 = (undefined1  [8])local_40;
        uVar27 = local_94;
      }
      else {
label_042f9e66:
        pCVar10 = (Characters_HookUseable_o *)(pCVar9->fields).Special;
        if (pCVar10 == (Characters_HookUseable_o *)0x0) goto label_042fa582;
        bVar25 = Characters_HookUseable__IsHooked(pCVar10,(MethodInfo *)0x0);
        if ((char)bVar25 != '\0') {
          uVar59 = (float)local_90;
          uVar61 = local_90._4_4_;
          uVar62 = (float)uStack_88;
          uVar63 = uStack_88._4_4_;
          uVar27 = (uint)(float)local_80;
          goto label_042f9e8c;
        }
        lVar33 = 0xf8;
        if (*(int *)(TypeInfo_HumanAnimations + 0xe4) != 0) {
          uStack_a8 = uStack_88;
          local_b0 = (undefined1  [8])local_90;
          uVar27 = (uint)(float)local_80;
          goto label_042f9f56;
        }
label_042f9f3d:
        il2cpp_runtime_helper_02337ed0();
label_042f9f4b:
        local_b0._4_4_ = local_90._4_4_;
        local_b0._0_4_ = (float)local_90;
        uStack_a8._0_4_ = (float)uStack_88;
        uStack_a8._4_4_ = uStack_88._4_4_;
        uVar27 = (uint)(float)local_80;
      }
label_042f9f56:
      _local_c0 = ZEXT416(uVar27);
    }
    else {
      if ((char)bVar25 == '\0') {
        local_90 = local_b0;
        uStack_88 = local_b0._8_8_;
        local_80 = CONCAT44(local_80._4_4_,local_c0._0_4_);
        if (0.0 <= local_44) goto label_042f9de1;
      }
      else {
label_042f9de1:
        pCVar10 = (Characters_HookUseable_o *)(pCVar9->fields).Special;
        if (pCVar10 == (Characters_HookUseable_o *)0x0) goto label_042fa582;
        bVar25 = Characters_HookUseable__IsHooked(pCVar10,(MethodInfo *)0x0);
        if ((char)bVar25 == '\0') {
          lVar33 = 0xe0;
          if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) goto label_042f9f3d;
          goto label_042f9f4b;
        }
        local_c0._4_4_ = 0;
        fStack_b8 = 0.0;
        fStack_b4 = 0.0;
        local_b0._0_4_ = (float)local_90;
        local_b0._4_4_ = local_90._4_4_;
        uStack_a8._0_4_ = (float)uStack_88;
        uStack_a8._4_4_ = uStack_88._4_4_;
        local_c0._0_4_ = (float)local_80;
      }
      lVar33 = 0xe8;
      if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
    }
label_042f9f5a:
    __this = *(Characters_AHSSWeapon_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + lVar33);
    Characters_Human__set_State(pCVar9,1,(MethodInfo *)0x0);
    *(Characters_AHSSWeapon_o **)&(pCVar9->fields)._currentVelocity.fields = __this;
    il2cpp_runtime_helper_022b4080(&(pCVar9->fields)._currentVelocity,__this);
    Characters_BaseCharacter__CrossFade
              ((Characters_BaseCharacter_o *)pCVar9,(System_String_o *)__this,0.05,0.0,(MethodInfo *)0x0);
    auVar65 = _local_60;
    UVar72.fields.z = (float)local_70._0_4_;
    UVar72.fields.x = (float)local_60._0_4_;
    UVar72.fields.y = (float)local_60._4_4_;
    _local_60 = auVar65;
    UVar70 = UnityEngine_Quaternion__LookRotation_4debb20(UVar72,(MethodInfo *)0x0);
    UVar72 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar70,(MethodInfo *)0x0);
    euler.fields.x = UVar72.fields.x * 57.29578;
    euler.fields.z = UVar72.fields.z * 57.29578;
    euler.fields.y = UVar72.fields.y * 57.29578;
    UVar72 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
    *(float *)&(pCVar9->fields).Detection = UVar72.fields.y;
    uVar59 = 0;
    uVar61 = 0;
    auVar71._4_8_ = 0;
    auVar71._0_4_ = UVar72.fields.y * 0.017453292;
    UVar69 = (UnityEngine_Quaternion_Fields)
             UnityEngine_Quaternion__Internal_FromEulerRad
                       ((UnityEngine_Vector3_o)(auVar71 << 0x20),(MethodInfo *)0x0);
    *(UnityEngine_Quaternion_Fields *)((long)&(pCVar9->fields)._lastMountMessage + 4) = UVar69;
    lVar33 = *(long *)&(pCVar9->fields).Dead;
    pIVar39 = (Il2CppClass *)&TypeInfo_HumanAnimations;
    auVar65 = _local_60;
    if ((lVar33 == 0) ||
       (__this = *(Characters_AHSSWeapon_o **)(lVar33 + 0x10),
       (System_Collections_Generic_List_string__c *)__this == (System_Collections_Generic_List_string__c *)0x0
       )) goto label_042fa582;
    UVar70 = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)__this,(MethodInfo *)0x0);
    fStack_58 = (float)extraout_XMM0_Dc_01;
    local_60 = (undefined1  [8])UVar70.fields._0_8_;
    fStack_54 = (float)extraout_XMM0_Dd_01;
    local_70._8_4_ = uVar59;
    local_70._0_8_ = UVar70.fields._8_8_;
    local_70._12_4_ = uVar61;
    local_90 = *(undefined8 *)((long)&(pCVar9->fields)._lastMountMessage + 4);
    uStack_88 = 0;
    local_80._0_4_ = (pCVar9->fields)._grabIFrames;
    local_80._4_4_ = (pCVar9->fields)._bladeTrailActive;
    uStack_78 = 0;
    fVar58 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    auVar66 = _local_60;
    auVar65 = local_70;
    UVar70.fields.z = (float)local_70._0_4_;
    UVar70.fields.w = (float)local_70._4_4_;
    UVar70.fields.x = (float)local_60._0_4_;
    UVar70.fields.y = (float)local_60._4_4_;
    b_00.fields.z = (float)local_80;
    b_00.fields.w = (float)local_80._4_4_;
    b_00.fields.x = (float)local_90;
    b_00.fields.y = local_90._4_4_;
    local_70 = auVar65;
    _local_60 = auVar66;
    UVar70 = UnityEngine_Quaternion__Lerp(UVar70,b_00,fVar58 * 30.0,(MethodInfo *)0x0);
    UnityEngine_Transform__set_rotation((UnityEngine_Transform_o *)__this,UVar70,(MethodInfo *)0x0);
    lVar33 = *(long *)&(pCVar9->fields).Dead;
    auVar65 = _local_60;
    if ((lVar33 == 0) ||
       (pUVar36 = *(UnityEngine_Transform_o **)(lVar33 + 0x10), pUVar36 == (UnityEngine_Transform_o *)0x0))
    goto label_042fa582;
    UVar72 = UnityEngine_Transform__get_position(pUVar36,(MethodInfo *)0x0);
    lVar33 = *(long *)&(pCVar9->fields).Dead;
    auVar65 = _local_60;
    if (lVar33 == 0) goto label_042fa582;
    local_70._0_4_ = UVar72.fields.z;
    fStack_58 = (float)extraout_XMM0_Dc_02;
    local_60 = (undefined1  [8])UVar72.fields._0_8_;
    fStack_54 = (float)extraout_XMM0_Dd_02;
    pUVar36 = *(UnityEngine_Transform_o **)(lVar33 + 0x10);
    auVar65 = _local_60;
    if (pUVar36 == (UnityEngine_Transform_o *)0x0) goto label_042fa582;
    UVar72 = UnityEngine_Transform__get_up(pUVar36,(MethodInfo *)0x0);
    local_60._0_4_ = (float)local_60._0_4_ + UVar72.fields.x * 0.8;
    local_60._4_4_ = (float)local_60._4_4_ + UVar72.fields.y * 0.8;
    fStack_58 = fStack_58 + extraout_XMM0_Dc_03 * 0.0;
    fStack_54 = fStack_54 + extraout_XMM0_Dd_03 * 0.0;
    fVar68 = (float)local_70._0_4_ + UVar72.fields.z * 0.8;
    local_70._0_4_ = fVar68;
    fVar58 = (float)local_60._0_4_;
    fVar56 = (float)local_60._4_4_;
    fVar60 = fStack_58;
    fVar57 = fStack_54;
    if (g_data_057a6845 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a6845 = '\x01';
      fVar58 = (float)local_60._0_4_;
      fVar56 = (float)local_60._4_4_;
      fVar60 = fStack_58;
      fVar57 = fStack_54;
      fVar68 = (float)local_70._0_4_;
    }
    auVar67._0_4_ = (float)local_b0._0_4_ - fVar58;
    auVar67._4_4_ = (float)local_b0._4_4_ - fVar56;
    auVar67._8_4_ = (float)uStack_a8 - fVar60;
    auVar67._12_4_ = uStack_a8._4_4_ - fVar57;
    fVar60 = (float)local_c0._0_4_ - fVar68;
    fVar58 = fStack_b8;
    fVar56 = fStack_b4;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      local_c0._0_4_ = (float)local_c0._0_4_ - fVar68;
      _local_b0 = auVar67;
      il2cpp_runtime_helper_02337ed0();
      fVar60 = (float)local_c0._0_4_;
      fVar58 = fStack_b8;
      fVar56 = fStack_b4;
      auVar67 = _local_b0;
    }
    fVar57 = fVar60 * fVar60 + auVar67._4_4_ * auVar67._4_4_ + auVar67._0_4_ * auVar67._0_4_;
    if (fVar57 < 0.0) {
      local_c0._0_4_ = fVar60;
      fStack_b8 = fVar58;
      fStack_b4 = fVar56;
      _local_b0 = auVar67;
      fVar57 = sqrtf(fVar57);
      fVar58 = (float)extraout_XMM0_Dc_04;
      fVar56 = (float)extraout_XMM0_Dd_04;
      fVar60 = (float)local_c0._0_4_;
      auVar67 = _local_b0;
      if (fVar57 <= 1e-05) goto label_042fa19e;
label_042fa1f6:
      local_c0._0_4_ = fVar60 / fVar57;
      auVar21._4_4_ = fVar57;
      auVar21._0_4_ = fVar57;
      auVar21._8_4_ = fVar58;
      auVar21._12_4_ = fVar56;
      _local_b0 = divps(auVar67,auVar21);
    }
    else {
      fVar57 = SQRT(fVar57);
      fStack_b8 = fVar58;
      fStack_b4 = fVar56;
      if (1e-05 < fVar57) goto label_042fa1f6;
label_042fa19e:
      if (g_data_057a65d5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a65d5 = '\x01';
      }
      uStack_a8 = 0;
      local_b0 = (undefined1  [8])**(ulong **)(TypeInfo_Vector3 + 0xb8);
      local_c0._0_4_ = *(undefined4 *)(*(ulong **)(TypeInfo_Vector3 + 0xb8) + 1);
      local_c0._4_4_ = 0;
      fStack_b8 = 0.0;
      fStack_b4 = 0.0;
    }
    fVar58 = (float)local_c0._0_4_;
    if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      fVar58 = (float)local_c0._0_4_;
    }
    pSVar32 = *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x30);
    forward.fields.z = fVar58;
    forward.fields.x = (float)SUB84(local_b0,0);
    forward.fields.y = (float)(int)((ulong)local_b0 >> 0x20);
    UVar70 = UnityEngine_Quaternion__LookRotation_4debb20(forward,(MethodInfo *)0x0);
    auVar65 = _local_60;
    position.fields.z = (float)local_70._0_4_;
    position.fields.x = (float)local_60._0_4_;
    position.fields.y = (float)local_60._4_4_;
    _local_60 = auVar65;
    Effects_EffectSpawner__Spawn(pSVar32,position,UVar70,1.0,1,(System_Object_array *)0x0,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_HumanSounds + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar32 = Characters_HumanSounds__GetRandomAHSSGunShot((MethodInfo *)0x0);
    Characters_BaseCharacter__PlaySound((Characters_BaseCharacter_o *)pCVar9,pSVar32,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_CharacterData + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    plVar28 = (long *)**(long **)(TypeInfo_CharacterData + 0xb8);
    __this = (Characters_AHSSWeapon_o *)&TypeInfo_CharacterData;
    auVar65 = _local_60;
    if (plVar28 == (long *)0x0) goto label_042fa582;
    plVar54 = (long *)(**(code **)(*plVar28 + 0x1a8))(plVar28,"AHSS",*(undefined8 *)(*plVar28 + 0x1b0));
    pOVar11 = (pCVar9->fields).OutlineComponent;
    auVar65 = _local_60;
    if (((pOVar11 == (Outline_o *)0x0) ||
        (pSVar12 = pOVar11[1].fields._namesToIgnore,
        pSVar12 == (System_Collections_Generic_List_string__o *)0x0)) || (plVar54 == (long *)0x0))
    goto label_042fa582;
    __this = (Characters_AHSSWeapon_o *)pSVar12[2].klass;
    plVar28 = (long *)(**(code **)(*plVar54 + 0x1a8))(plVar54,"Radius",*(undefined8 *)(*plVar54 + 0x1b0));
    auVar65 = _local_60;
    if ((plVar28 == (long *)0x0) ||
       (fVar58 = (float)(**(code **)(*plVar28 + 0x388))(plVar28,*(undefined8 *)(*plVar28 + 0x390)),
       auVar65 = _local_60,
       (System_Collections_Generic_List_string__c *)__this == (System_Collections_Generic_List_string__c *)0x0
       )) goto label_042fa582;
    pvVar38 = (((System_Collections_Generic_List_string__c *)__this)->_1).image;
    plVar28 = (long *)__this;
    if ((*(byte *)((long)pvVar38 + 0x130) < *(byte *)(TypeInfo_CapsuleCollider + 0x130)) ||
       (*(long *)(*(long *)((long)pvVar38 + 200) + -8 + (ulong)*(byte *)(TypeInfo_CapsuleCollider + 0x130) * 8) !=
        TypeInfo_CapsuleCollider)) goto label_042fa592;
    UnityEngine_CapsuleCollider__set_radius((UnityEngine_CapsuleCollider_o *)__this,fVar58,(MethodInfo *)0x0);
    pOVar11 = (pCVar9->fields).OutlineComponent;
    auVar65 = _local_60;
    if (((pOVar11 == (Outline_o *)0x0) ||
        (pSVar12 = pOVar11[1].fields._namesToIgnore,
        pSVar12 == (System_Collections_Generic_List_string__o *)0x0)) ||
       (pUVar36 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pSVar12,(MethodInfo *)0x0),
       auVar65 = _local_60, pUVar36 == (UnityEngine_Transform_o *)0x0)) goto label_042fa582;
    value.fields.z = (float)local_70._0_4_;
    value.fields.x = (float)local_60._0_4_;
    value.fields.y = (float)local_60._4_4_;
    _local_60 = auVar65;
    UnityEngine_Transform__set_position(pUVar36,value,(MethodInfo *)0x0);
    pOVar11 = (pCVar9->fields).OutlineComponent;
    auVar65 = _local_60;
    if ((pOVar11 == (Outline_o *)0x0) ||
       (pSVar12 = pOVar11[1].fields._namesToIgnore,
       pSVar12 == (System_Collections_Generic_List_string__o *)0x0)) goto label_042fa582;
    __this = (Characters_AHSSWeapon_o *)
             UnityEngine_Component__get_transform((UnityEngine_Component_o *)pSVar12,(MethodInfo *)0x0);
    auVar65 = _local_b0;
    forward_00.fields.z = (float)local_c0._0_4_;
    forward_00.fields.x = (float)local_b0._0_4_;
    forward_00.fields.y = (float)local_b0._4_4_;
    _local_b0 = auVar65;
    UVar70 = UnityEngine_Quaternion__LookRotation_4debb20(forward_00,(MethodInfo *)0x0);
    auVar65 = _local_60;
    if ((System_Collections_Generic_List_string__c *)__this ==
        (System_Collections_Generic_List_string__c *)0x0) goto label_042fa582;
    UnityEngine_Transform__set_rotation((UnityEngine_Transform_o *)__this,UVar70,(MethodInfo *)0x0);
    pOVar11 = (pCVar9->fields).OutlineComponent;
    auVar65 = _local_60;
    if ((pOVar11 == (Outline_o *)0x0) ||
       (__this_01 = (Characters_BaseHitbox_o *)pOVar11[1].fields._namesToIgnore,
       __this_01 == (Characters_BaseHitbox_o *)0x0)) goto label_042fa582;
    Characters_BaseHitbox__Activate(__this_01,0.0,0.1,(MethodInfo *)0x0);
    lVar33 = *(long *)&(pCVar9->fields).Dead;
    auVar65 = _local_60;
    if (lVar33 == 0) goto label_042fa582;
    __this = *(Characters_AHSSWeapon_o **)(lVar33 + 0x18);
    plVar28 = (long *)(**(code **)(*plVar54 + 0x1a8))(plVar54,"KnockbackForce",*(undefined8 *)(*plVar54 + 0x1b0));
    auVar65 = _local_60;
    if ((plVar28 == (long *)0x0) ||
       (fVar58 = (float)(**(code **)(*plVar28 + 0x388))(plVar28,*(undefined8 *)(*plVar28 + 0x390)),
       auVar65 = _local_60,
       (System_Collections_Generic_List_string__c *)__this == (System_Collections_Generic_List_string__c *)0x0
       )) goto label_042fa582;
    uVar64 = CONCAT44((float)local_b0._4_4_ * fVar58,(float)local_b0._0_4_ * fVar58) ^ 0x8000000080000000;
    force.fields.z = -((float)local_c0._0_4_ * fVar58);
    force.fields.x = (float)(int)uVar64;
    force.fields.y = (float)(int)(uVar64 >> 0x20);
    UnityEngine_Rigidbody__AddForce((UnityEngine_Rigidbody_o *)__this,force,2,(MethodInfo *)0x0);
    if ((char)(pCVar9->fields).CustomDamage != '\0') {
      return;
    }
    plVar28 = &TypeInfo_UIManager;
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar13 = *(System_Collections_Generic_List_string__c **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    __this = (Characters_AHSSWeapon_o *)plVar28;
    auVar65 = _local_60;
    if (pSVar13 == (System_Collections_Generic_List_string__c *)0x0) goto label_042fa582;
    pvVar38 = (pSVar13->_1).image;
    __this = (Characters_AHSSWeapon_o *)pSVar13;
    if ((*(byte *)((long)pvVar38 + 0x130) < *(byte *)(TypeInfo_InGameMenu + 0x130)) ||
       (*(long *)(*(long *)((long)pvVar38 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameMenu + 0x130) * 8) !=
        TypeInfo_InGameMenu)) goto label_042fa592;
    pIVar49 = (pSVar13->_1).interfaceOffsets;
    __this = (Characters_AHSSWeapon_o *)plVar28;
    if (pIVar49 == (Il2CppRuntimeInterfaceOffsetPair *)0x0) goto label_042fa582;
    uVar27 = *(uint *)&(pCVar48->fields).VisibleName;
    bVar55 = uVar27 == 1;
    puVar42 = &stack0xfffffffffffffff8;
    plVar28 = (long *)pSStack_30;
  }
  pIVar39 = (Il2CppClass *)(ulong)bVar55;
  *(undefined8 *)(puVar42 + -8) = unaff_RBP;
  *(Characters_Human_o **)(puVar42 + -0x10) = unaff_R15;
  *(Characters_BaseCharacter_o **)(puVar42 + -0x18) = unaff_R14;
  *(long **)(puVar42 + -0x20) = unaff_R12;
  *(long **)(puVar42 + -0x28) = plVar28;
  if (g_data_057ae3db == '\0') {
    *(undefined8 *)(puVar42 + -0x30) = 0x43c2dd6;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Animator_GetComponent_Animator);
    *(undefined8 *)(puVar42 + -0x30) = 0x43c2de2;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae3db = '\x01';
  }
  pUVar35 = *(UnityEngine_Object_o **)&pIVar49[0x10].offset;
  plVar54 = &TypeInfo_Object;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)(puVar42 + -0x30) = 0x43c2e09;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)(puVar42 + -0x30) = 0x43c2e15;
  bVar25 = UnityEngine_Object__op_Equality(pUVar35,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar25 != '\0') {
    return;
  }
  pIVar47 = pIVar49[0xc].interfaceType;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)(puVar42 + -0x30) = 0x43c2e36;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)(puVar42 + -0x30) = 0x43c2e42;
  bVar25 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pIVar47,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar25 != '\0') {
    return;
  }
  pIVar47 = pIVar49[0x1e].interfaceType;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)(puVar42 + -0x30) = 0x43c2e63;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)(puVar42 + -0x30) = 0x43c2e6f;
  bVar25 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pIVar47,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar25 != '\0') {
    return;
  }
  if (bVar55 == false) {
label_043c2f68:
    if (uVar27 != 0) {
label_043c3041:
      *(undefined8 *)((long)&pIVar49[0x12].interfaceType + 4) = 0x3f2ac08300000000;
      return;
    }
    pIVar37 = *(Il2CppClass **)&pIVar49[0x21].offset;
    if (pIVar37 != (Il2CppClass *)0x0) {
      *(undefined8 *)(puVar42 + -0x30) = 0x43c2f88;
      pUVar29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pIVar37,(MethodInfo *)0x0);
      if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
        *(undefined8 *)(puVar42 + -0x30) = 0x43c2fa0;
        UnityEngine_GameObject__SetActive(pUVar29,1,(MethodInfo *)0x0);
        pIVar37 = *(Il2CppClass **)&pIVar49[0x21].offset;
        if (pIVar37 != (Il2CppClass *)0x0) {
          *(undefined8 *)(puVar42 + -0x30) = 0x43c2fbf;
          pUVar30 = (UnityEngine_Animator_o *)
                    UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)pIVar37,(MethodInfo_24E7B40 *)MethodInfo_Animator_GetComponent_Animator);
          if (pUVar30 != (UnityEngine_Animator_o *)0x0) {
            *(undefined8 *)(puVar42 + -0x30) = 0x43c2fd5;
            UnityEngine_Animator__Update(pUVar30,0.0,(MethodInfo *)0x0);
            pIVar37 = *(Il2CppClass **)&pIVar49[0x1e].offset;
            if (pIVar37 != (Il2CppClass *)0x0) {
              *(undefined8 *)(puVar42 + -0x30) = 0x43c2fe8;
              pUVar29 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pIVar37,(MethodInfo *)0x0);
              if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                *(undefined8 *)(puVar42 + -0x30) = 0x43c2ff9;
                UnityEngine_GameObject__SetActive(pUVar29,0,(MethodInfo *)0x0);
                pIVar37 = *(Il2CppClass **)&pIVar49[0x1f].offset;
                if (pIVar37 != (Il2CppClass *)0x0) {
                  *(undefined8 *)(puVar42 + -0x30) = 0x43c300c;
                  pUVar29 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)pIVar37,(MethodInfo *)0x0);
                  if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                    *(undefined8 *)(puVar42 + -0x30) = 0x43c301d;
                    UnityEngine_GameObject__SetActive(pUVar29,0,(MethodInfo *)0x0);
                    pIVar37 = *(Il2CppClass **)&pIVar49[0x20].offset;
                    if (pIVar37 != (Il2CppClass *)0x0) {
                      *(undefined8 *)(puVar42 + -0x30) = 0x43c3030;
                      pUVar29 = UnityEngine_Component__get_gameObject
                                          ((UnityEngine_Component_o *)pIVar37,(MethodInfo *)0x0);
                      if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                        *(undefined8 *)(puVar42 + -0x30) = 0x43c3041;
                        UnityEngine_GameObject__SetActive(pUVar29,0,(MethodInfo *)0x0);
                        goto label_043c3041;
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
  else {
    pIVar37 = pIVar49[0x21].interfaceType;
    if (pIVar37 != (Il2CppClass *)0x0) {
      *(undefined8 *)(puVar42 + -0x30) = 0x43c2e97;
      pUVar29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pIVar37,(MethodInfo *)0x0);
      if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
        *(undefined8 *)(puVar42 + -0x30) = 0x43c2eaf;
        UnityEngine_GameObject__SetActive(pUVar29,1,(MethodInfo *)0x0);
        pIVar37 = pIVar49[0x21].interfaceType;
        if (pIVar37 != (Il2CppClass *)0x0) {
          *(undefined8 *)(puVar42 + -0x30) = 0x43c2ece;
          pUVar30 = (UnityEngine_Animator_o *)
                    UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)pIVar37,(MethodInfo_24E7B40 *)MethodInfo_Animator_GetComponent_Animator);
          if (pUVar30 != (UnityEngine_Animator_o *)0x0) {
            *(undefined8 *)(puVar42 + -0x30) = 0x43c2ee4;
            UnityEngine_Animator__Update(pUVar30,0.0,(MethodInfo *)0x0);
            pIVar37 = pIVar49[0x1e].interfaceType;
            if (pIVar37 != (Il2CppClass *)0x0) {
              *(undefined8 *)(puVar42 + -0x30) = 0x43c2efb;
              pUVar29 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pIVar37,(MethodInfo *)0x0);
              if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                *(undefined8 *)(puVar42 + -0x30) = 0x43c2f10;
                UnityEngine_GameObject__SetActive(pUVar29,0,(MethodInfo *)0x0);
                pIVar37 = pIVar49[0x1f].interfaceType;
                if (pIVar37 != (Il2CppClass *)0x0) {
                  *(undefined8 *)(puVar42 + -0x30) = 0x43c2f27;
                  pUVar29 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)pIVar37,(MethodInfo *)0x0);
                  if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                    *(undefined8 *)(puVar42 + -0x30) = 0x43c2f3c;
                    UnityEngine_GameObject__SetActive(pUVar29,0,(MethodInfo *)0x0);
                    pIVar37 = pIVar49[0x20].interfaceType;
                    if (pIVar37 != (Il2CppClass *)0x0) {
                      *(undefined8 *)(puVar42 + -0x30) = 0x43c2f53;
                      pUVar29 = UnityEngine_Component__get_gameObject
                                          ((UnityEngine_Component_o *)pIVar37,(MethodInfo *)0x0);
                      if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                        *(undefined8 *)(puVar42 + -0x30) = 0x43c2f68;
                        UnityEngine_GameObject__SetActive(pUVar29,0,(MethodInfo *)0x0);
                        goto label_043c2f68;
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
  *(code **)(puVar42 + -0x30) = UI_HUDBottomHandler__ShootTS;
  il2cpp_runtime_helper_022b2c90();
  *(Il2CppRuntimeInterfaceOffsetPair **)(puVar42 + -0x30) = pIVar49;
  *(ulong *)(puVar42 + -0x38) = (ulong)(uVar27 == 0);
  *(Il2CppClass **)(puVar42 + -0x40) = pIVar47;
  if (g_data_057ae3dc == '\0') {
    *(undefined8 *)(puVar42 + -0x48) = 0x43c307d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Animator_GetComponent_Animator);
    *(undefined8 *)(puVar42 + -0x48) = 0x43c3089;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    *(undefined8 *)(puVar42 + -0x48) = 0x43c3095;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    *(undefined8 *)(puVar42 + -0x48) = 0x43c30a1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    g_data_057ae3dc = '\x01';
  }
  pUVar35 = *(UnityEngine_Object_o **)&(pIVar37->_2).static_fields_size;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)(puVar42 + -0x48) = 0x43c30c7;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)(puVar42 + -0x48) = 0x43c30d3;
  bVar25 = UnityEngine_Object__op_Equality(pUVar35,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar25 != '\0') {
    return;
  }
  x = pIVar37->rgctx_data;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)(puVar42 + -0x48) = 0x43c30f3;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)(puVar42 + -0x48) = 0x43c30ff;
  bVar25 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar25 != '\0') {
    return;
  }
  pSVar50 = (System_Object_array *)pIVar37->vtable[0xe].method;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)(puVar42 + -0x48) = 0x43c311b;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)(puVar42 + -0x48) = 0x43c3127;
  __this_05 = pSVar50;
  bVar25 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pSVar50,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar25 != '\0') {
    return;
  }
  lVar33 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if (((lVar33 != 0) && (lVar33 = *(long *)(lVar33 + 0x58), lVar33 != 0)) &&
     (lVar33 = *(long *)(lVar33 + 0x48), lVar33 != 0)) {
    if (*(char *)(lVar33 + 0x11) != '\0') {
      return;
    }
    __this_05 = (System_Object_array *)pIVar37->vtable[0xf].method;
    if (__this_05 != (System_Object_array *)0x0) {
      *(undefined8 *)(puVar42 + -0x48) = 0x43c3186;
      pUVar29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_05,(MethodInfo *)0x0);
      if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
        *(undefined8 *)(puVar42 + -0x48) = 0x43c319e;
        UnityEngine_GameObject__SetActive(pUVar29,1,(MethodInfo *)0x0);
        __this_05 = (System_Object_array *)pIVar37->vtable[0xf].method;
        if (__this_05 != (System_Object_array *)0x0) {
          *(undefined8 *)(puVar42 + -0x48) = 0x43c31bd;
          pUVar30 = (UnityEngine_Animator_o *)
                    UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)__this_05,(MethodInfo_24E7B40 *)MethodInfo_Animator_GetComponent_Animator);
          if (pUVar30 != (UnityEngine_Animator_o *)0x0) {
            *(undefined8 *)(puVar42 + -0x48) = 0x43c31d3;
            UnityEngine_Animator__Update(pUVar30,0.0,(MethodInfo *)0x0);
            __this_05 = (System_Object_array *)pIVar37->vtable[0xe].method;
            if (__this_05 != (System_Object_array *)0x0) {
              *(undefined8 *)(puVar42 + -0x48) = 0x43c31ea;
              pUVar29 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)__this_05,(MethodInfo *)0x0);
              if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                *(undefined8 *)(puVar42 + -0x48) = 0x43c31ff;
                UnityEngine_GameObject__SetActive(pUVar29,0,(MethodInfo *)0x0);
                __this_05 = (System_Object_array *)pIVar37->vtable[0xf].methodPtr;
                if (__this_05 != (System_Object_array *)0x0) {
                  *(undefined8 *)(puVar42 + -0x48) = 0x43c3212;
                  pUVar29 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)__this_05,(MethodInfo *)0x0);
                  if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                    *(undefined8 *)(puVar42 + -0x48) = 0x43c3223;
                    UnityEngine_GameObject__SetActive(pUVar29,0,(MethodInfo *)0x0);
                    __this_05 = (System_Object_array *)pIVar37->vtable[6].method;
                    if (__this_05 != (System_Object_array *)0x0) {
                      *(undefined8 *)(puVar42 + -0x48) = 0x43c3236;
                      pUVar29 = UnityEngine_Component__get_gameObject
                                          ((UnityEngine_Component_o *)__this_05,(MethodInfo *)0x0);
                      if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                        *(undefined8 *)(puVar42 + -0x48) = 0x43c324a;
                        UnityEngine_GameObject__SetActive(pUVar29,1,(MethodInfo *)0x0);
                        __this_05 = (System_Object_array *)pIVar37->vtable[7].methodPtr;
                        if (__this_05 != (System_Object_array *)0x0) {
                          *(undefined8 *)(puVar42 + -0x48) = 0x43c325d;
                          pUVar29 = UnityEngine_Component__get_gameObject
                                              ((UnityEngine_Component_o *)__this_05,(MethodInfo *)0x0);
                          if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                            *(undefined8 *)(puVar42 + -0x48) = 0x43c3271;
                            UnityEngine_GameObject__SetActive(pUVar29,1,(MethodInfo *)0x0);
                            (pIVar37->_2).nested_type_count = 0;
                            (pIVar37->_2).vtable_count = 0;
                            (pIVar37->_2).interfaces_count = 0;
                            (pIVar37->_2).interface_offsets_count = 0x3f80;
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
    }
  }
  *(undefined8 *)(puVar42 + -0x48) = 0x43c328d;
  il2cpp_runtime_helper_022b2c90();
  *(long **)(puVar42 + -0x48) = &TypeInfo_Object;
  *(Il2CppClass **)(puVar42 + -0x50) = pIVar37;
  *(System_Object_array **)(puVar42 + -0x58) = pSVar50;
  if (g_data_057ae3dd == '\0') {
    *(undefined8 *)(puVar42 + -0x70) = 0x43c32b1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AHSSWeapon);
    *(undefined8 *)(puVar42 + -0x70) = 0x43c32bd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_APGWeapon);
    *(undefined8 *)(puVar42 + -0x70) = 0x43c32c9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_BladeWeapon);
    *(undefined8 *)(puVar42 + -0x70) = 0x43c32d5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    *(undefined8 *)(puVar42 + -0x70) = 0x43c32e1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ThunderspearWeapon);
    g_data_057ae3dd = '\x01';
  }
  pSVar32 = (System_String_o *)__this_05->m_Items[0x1d];
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)(puVar42 + -0x70) = 0x43c3307;
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar46 = (MethodInfo *)0x0;
  *(undefined8 *)(puVar42 + -0x70) = 0x43c3313;
  bVar25 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pSVar32,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar25 == '\0') {
    pUVar35 = (UnityEngine_Object_o *)__this_05->m_Items[0x1f];
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)(puVar42 + -0x70) = 0x43c349c;
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar47 = (Il2CppClass *)0x0;
    *(undefined8 *)(puVar42 + -0x70) = 0x43c34a8;
    bVar25 = UnityEngine_Object__op_Inequality(pUVar35,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar25 == '\0') {
      return;
    }
    __this_04 = *(System_Object_array **)(puVar42 + -0x58);
    pSVar51 = *(System_Object_array **)(puVar42 + -0x50);
    pSVar50 = *(System_Object_array **)(puVar42 + -0x48);
    puVar44 = puVar42 + -0x40;
  }
  else {
    *(undefined4 *)(puVar42 + -0x5c) = *(undefined4 *)((long)__this_05->m_Items + 0x104);
    *(undefined8 *)(puVar42 + -0x70) = 0x43c3331;
    fVar58 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    *(float *)((long)__this_05->m_Items + 0x104) = *(float *)(puVar42 + -0x5c) - fVar58;
    *(undefined4 *)(puVar42 + -0x5c) = *(undefined4 *)(__this_05->m_Items + 0x20);
    *(undefined8 *)(puVar42 + -0x70) = 0x43c335a;
    fVar58 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    *(float *)(__this_05->m_Items + 0x20) = *(float *)(puVar42 + -0x5c) - fVar58;
    *(undefined4 *)(puVar42 + -0x5c) = *(undefined4 *)(__this_05->m_Items + 0x21);
    *(undefined8 *)(puVar42 + -0x70) = 0x43c3383;
    fVar58 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    *(float *)(__this_05->m_Items + 0x21) = *(float *)(puVar42 + -0x5c) - fVar58;
    *(undefined8 *)(puVar42 + -0x70) = 0x43c339e;
    UI_HUDBottomHandler__UpdateHumanSpecial((UI_HUDBottomHandler_o *)__this_05,pMVar46);
    *(undefined8 *)(puVar42 + -0x70) = 0x43c33a6;
    UI_HUDBottomHandler__UpdateGas((UI_HUDBottomHandler_o *)__this_05,pMVar46);
    *(undefined8 *)(puVar42 + -0x70) = 0x43c33ae;
    pSVar50 = __this_05;
    UI_HUDBottomHandler__UpdatePerkTimer((UI_HUDBottomHandler_o *)__this_05,pMVar46);
    if (__this_05->m_Items[0x1d] == (Il2CppObject *)0x0) {
      *(undefined8 *)(puVar42 + -0x70) = 0x43c34ff;
      uVar40 = il2cpp_runtime_helper_022b2c90();
      *(long **)(puVar42 + -0x70) = &TypeInfo_Object;
      *(System_Object_array **)(puVar42 + -0x78) = __this_05;
      *(Il2CppClass **)(puVar42 + -0x80) = pIVar39;
      *(System_String_o **)(puVar42 + -0x88) = pSVar32;
      *(undefined8 *)(puVar42 + -0x90) = uVar40;
      if (g_data_057ae3e0 == '\0') {
        *(undefined8 *)(puVar42 + -0x98) = 0x43c3520;
        il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
        *(undefined8 *)(puVar42 + -0x98) = 0x43c352c;
        il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
        *(undefined8 *)(puVar42 + -0x98) = 0x43c3538;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
        *(undefined8 *)(puVar42 + -0x98) = 0x43c3544;
        il2cpp_runtime_helper_023445d0(&"Icons/Specials/");
        *(undefined8 *)(puVar42 + -0x98) = 0x43c3550;
        il2cpp_runtime_helper_023445d0(&"");
        g_data_057ae3e0 = '\x01';
      }
      pCVar9 = (((UI_HUDBottomHandler_o *)pSVar50)->fields)._human;
      if (pCVar9 != (Characters_Human_o *)0x0) {
        __this_02 = (pCVar9->fields).OnPlayerPropertiesChanged;
        if (__this_02 == (System_Action_Hashtable__o *)0x0) {
          pUVar19 = (((UI_HUDBottomHandler_o *)pSVar50)->fields)._specialFill;
          if (pUVar19 != (UnityEngine_UI_Image_o *)0x0) {
            *(undefined8 *)(puVar42 + -0x98) = 0x43c373d;
            UnityEngine_UI_Image__set_fillAmount(pUVar19,0.0,(MethodInfo *)0x0);
            pUVar19 = (((UI_HUDBottomHandler_o *)pSVar50)->fields)._specialIconFill;
            if (pUVar19 != (UnityEngine_UI_Image_o *)0x0) {
              *(undefined8 *)(puVar42 + -0x98) = 0x43c3758;
              UnityEngine_UI_Image__set_fillAmount(pUVar19,0.0,(MethodInfo *)0x0);
              goto label_043c3758;
            }
          }
        }
        else {
          *(undefined8 *)(puVar42 + -0x98) = 0x43c357f;
          fVar58 = Characters_BaseUseable__GetCooldownRatio
                             ((Characters_BaseUseable_o *)__this_02,(MethodInfo *)0x0);
          pUVar19 = (((UI_HUDBottomHandler_o *)pSVar50)->fields)._specialFill;
          if (pUVar19 != (UnityEngine_UI_Image_o *)0x0) {
            *(float *)(puVar42 + -0x8c) = fVar58;
            *(undefined8 *)(puVar42 + -0x98) = 0x43c359d;
            UnityEngine_UI_Image__set_fillAmount(pUVar19,fVar58,(MethodInfo *)0x0);
            pUVar19 = (((UI_HUDBottomHandler_o *)pSVar50)->fields)._specialIconFill;
            if (pUVar19 != (UnityEngine_UI_Image_o *)0x0) {
              *(undefined8 *)(puVar42 + -0x98) = 0x43c35bb;
              UnityEngine_UI_Image__set_fillAmount(pUVar19,*(float *)(puVar42 + -0x8c),(MethodInfo *)0x0);
              pSVar31 = (((UI_HUDBottomHandler_o *)pSVar50)->fields)._currentSpecialIcon;
              b = (((UI_HUDBottomHandler_o *)pSVar50)->fields)._newSpecialIcon;
              *(undefined8 *)(puVar42 + -0x98) = 0x43c35d2;
              bVar25 = System_String__op_Inequality(pSVar31,b,(MethodInfo *)0x0);
              if ((char)bVar25 == '\0') {
label_043c3758:
                pUVar19 = (((UI_HUDBottomHandler_o *)pSVar50)->fields)._specialIconBackground;
              }
              else {
                ppSVar2 = &(((UI_HUDBottomHandler_o *)pSVar50)->fields)._currentSpecialIcon;
                (((UI_HUDBottomHandler_o *)pSVar50)->fields)._currentSpecialIcon =
                     (((UI_HUDBottomHandler_o *)pSVar50)->fields)._newSpecialIcon;
                *(undefined8 *)(puVar42 + -0x98) = 0x43c35fa;
                il2cpp_runtime_helper_022b4080(ppSVar2);
                pSVar31 = (((UI_HUDBottomHandler_o *)pSVar50)->fields)._currentSpecialIcon;
                *(undefined8 *)(puVar42 + -0x98) = 0x43c3613;
                bVar25 = System_String__op_Inequality
                                   (pSVar31,(System_String_o *)"",(MethodInfo *)0x0);
                if ((char)bVar25 == '\0') goto label_043c3758;
                if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
                  *(undefined8 *)(puVar42 + -0x98) = 0x43c3633;
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar32 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
                pSVar31 = *ppSVar2;
                *(undefined8 *)(puVar42 + -0x98) = 0x43c3654;
                pSVar31 = System_String__Concat_3ae5ba0("Icons/Specials/",pSVar31,(MethodInfo *)0x0);
                if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
                  *(undefined8 *)(puVar42 + -0x98) = 0x43c366f;
                  il2cpp_runtime_helper_02337ed0();
                }
                *(undefined8 *)(puVar42 + -0x98) = 0x43c3681;
                texture = (UnityEngine_Texture2D_o *)
                          ApplicationManagers_ResourceManager__LoadAsset(pSVar32,pSVar31,1,(MethodInfo *)0x0);
                if (texture == (UnityEngine_Texture2D_o *)0x0) {
                  *(undefined8 *)(puVar42 + -0x98) = 0x43c384a;
                  il2cpp_runtime_helper_022b2c90();
label_043c384a:
                  *(undefined8 *)(puVar42 + -0x98) = 0x43c3852;
                  il2cpp_runtime_helper_022b2fd0(texture);
label_043c3852:
                  *(undefined8 *)(puVar42 + -0x98) = 0x43c3857;
                  il2cpp_runtime_helper_022b2c90();
                }
                else {
                  if (texture->klass != TypeInfo_Texture2D) goto label_043c384a;
                  pMVar46 = (texture->klass->vtable)._5_get_width.method;
                  vtableDispatch = (texture->klass->vtable)._5_get_width.methodPtr;
                  *(undefined8 *)(puVar42 + -0x98) = 0x43c36b3;
                  iVar26 = (*vtableDispatch)(texture,pMVar46);
                  vtableDispatch = (texture->klass->vtable)._7_get_height.methodPtr;
                  *(undefined8 *)(puVar42 + -0x98) = 0x43c36c8;
                  iVar45 = (*vtableDispatch)(texture);
                  *(undefined8 *)(puVar42 + -0x98) = 0x43c36e7;
                  auVar23._4_4_ = (float)iVar45;
                  auVar23._0_4_ = (float)iVar26;
                  auVar23._8_8_ = 0;
                  pSVar32 = (System_String_o *)
                            UnityEngine_Sprite__Create_4e0d730
                                      (texture,(UnityEngine_Rect_o)(auVar23 << 0x40),
                                       (UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
                  pUVar19 = (((UI_HUDBottomHandler_o *)pSVar50)->fields)._specialIconBackground;
                  if (pUVar19 == (UnityEngine_UI_Image_o *)0x0) goto label_043c3852;
                  *(undefined8 *)(puVar42 + -0x98) = 0x43c3705;
                  UnityEngine_UI_Image__set_sprite(pUVar19,(UnityEngine_Sprite_o *)pSVar32,(MethodInfo *)0x0);
                  pUVar19 = (((UI_HUDBottomHandler_o *)pSVar50)->fields)._specialIconFill;
                  if (pUVar19 != (UnityEngine_UI_Image_o *)0x0) {
                    *(undefined8 *)(puVar42 + -0x98) = 0x43c3720;
                    UnityEngine_UI_Image__set_sprite
                              (pUVar19,(UnityEngine_Sprite_o *)pSVar32,(MethodInfo *)0x0);
                    goto label_043c3758;
                  }
                }
                *(undefined8 *)(puVar42 + -0x98) = 0x43c385c;
                auVar71 = il2cpp_runtime_helper_022b2c90();
                if (auVar71._8_4_ != 1) {
                  *(undefined **)(puVar42 + -0x98) = &g_data_043c3987;
                  _Unwind_Resume(auVar71._0_8_);
                }
                *(undefined8 *)(puVar42 + -0x98) = 0x43c38d8;
                pSVar32 = (System_String_o *)__cxa_begin_catch(auVar71._0_8_);
                pvVar38 = (pSVar32->klass->_1).image;
                *(undefined8 *)(puVar42 + -0x98) = 0x43c38f1;
                cVar24 = il2cpp_runtime_helper_0233e000(g_data_057b9b80,pvVar38);
                if (cVar24 == '\0') goto label_043c3956;
                *(undefined8 *)(puVar42 + -0x98) = 0x43c38fa;
                __cxa_end_catch();
                pSVar32 = *ppSVar2;
                *(undefined8 *)(puVar42 + -0x98) = 0x43c3909;
                pSVar31 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Error loading special icon ");
                *(undefined8 *)(puVar42 + -0x98) = 0x43c3916;
                pSVar32 = System_String__Concat_3ae5ba0(pSVar31,pSVar32,(MethodInfo *)0x0);
                *(undefined8 *)(puVar42 + -0x98) = 0x43c3925;
                lVar33 = il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
                if (*(int *)(lVar33 + 0xe4) == 0) {
                  *(undefined8 *)(puVar42 + -0x98) = 0x43c3936;
                  il2cpp_runtime_helper_02337ed0(lVar33);
                }
                *(undefined8 *)(puVar42 + -0x98) = 0x43c3940;
                UnityEngine_Debug__Log((Il2CppObject *)pSVar32,(MethodInfo *)0x0);
                pUVar19 = (((UI_HUDBottomHandler_o *)pSVar50)->fields)._specialIconBackground;
              }
              if (pUVar19 != (UnityEngine_UI_Image_o *)0x0) {
                *(undefined8 *)(puVar42 + -0x98) = 0x43c3770;
                pSVar32 = (System_String_o *)
                          UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pUVar19,(MethodInfo *)0x0);
                pCVar9 = (((UI_HUDBottomHandler_o *)pSVar50)->fields)._human;
                if (pCVar9 != (Characters_Human_o *)0x0) {
                  if ((pCVar9->fields).OnPlayerPropertiesChanged == (System_Action_Hashtable__o *)0x0) {
                    uVar27 = 0;
                  }
                  else {
                    pSVar31 = (((UI_HUDBottomHandler_o *)pSVar50)->fields)._currentSpecialIcon;
                    *(undefined8 *)(puVar42 + -0x98) = 0x43c37a7;
                    uVar27 = System_String__op_Inequality
                                       (pSVar31,(System_String_o *)"",(MethodInfo *)0x0);
                  }
                  if (pSVar32 != (System_String_o *)0x0) {
                    *(undefined8 *)(puVar42 + -0x98) = 0x43c37c9;
                    UnityEngine_GameObject__SetActive
                              ((UnityEngine_GameObject_o *)pSVar32,uVar27 & 0xff,(MethodInfo *)0x0);
                    pUVar19 = (((UI_HUDBottomHandler_o *)pSVar50)->fields)._specialIconFill;
                    if (pUVar19 != (UnityEngine_UI_Image_o *)0x0) {
                      *(undefined8 *)(puVar42 + -0x98) = 0x43c37e1;
                      pSVar32 = (System_String_o *)
                                UnityEngine_Component__get_gameObject
                                          ((UnityEngine_Component_o *)pUVar19,(MethodInfo *)0x0);
                      pCVar9 = (((UI_HUDBottomHandler_o *)pSVar50)->fields)._human;
                      if (pCVar9 != (Characters_Human_o *)0x0) {
                        if ((pCVar9->fields).OnPlayerPropertiesChanged == (System_Action_Hashtable__o *)0x0) {
                          uVar27 = 0;
                        }
                        else {
                          pSVar31 = (((UI_HUDBottomHandler_o *)pSVar50)->fields)._currentSpecialIcon;
                          *(undefined8 *)(puVar42 + -0x98) = 0x43c3818;
                          uVar27 = System_String__op_Inequality
                                             (pSVar31,(System_String_o *)"",(MethodInfo *)0x0);
                        }
                        if (pSVar32 != (System_String_o *)0x0) {
                          UnityEngine_GameObject__SetActive
                                    ((UnityEngine_GameObject_o *)pSVar32,uVar27 & 0xff,(MethodInfo *)0x0);
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
      *(undefined8 *)(puVar42 + -0x98) = 0x43c3956;
      il2cpp_runtime_helper_022b2c90();
label_043c3956:
      *(undefined8 *)(puVar42 + -0x98) = 0x43c3960;
      puVar34 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar34 = pSVar32->klass;
      *(undefined **)(puVar42 + -0x98) = &g_data_043c3977;
      __cxa_throw(puVar34,&PTR_PTR_05215060,0);
    }
    pIVar47 = __this_05->m_Items[0x1d][0x10].klass;
    if (pIVar47 == (Il2CppClass *)0x0) {
      return;
    }
    pvVar38 = (pIVar47->_1).image;
    bVar6 = *(byte *)((long)pvVar38 + 0x130);
    bVar7 = (TypeInfo_BladeWeapon->_2).naturalAligment;
    if ((bVar6 < bVar7) ||
       (*(Il2CppClass **)(*(long *)((long)pvVar38 + 200) + -8 + (ulong)bVar7 * 8) != TypeInfo_BladeWeapon)) {
      bVar7 = *(byte *)(TypeInfo_APGWeapon + 0x130);
      if ((bVar7 <= bVar6) &&
         (*(long *)(*(long *)((long)pvVar38 + 200) + -8 + (long)(ulong)bVar7 * 8) == TypeInfo_APGWeapon)) {
        UI_HUDBottomHandler__UpdateAPG((UI_HUDBottomHandler_o *)__this_05,(MethodInfo *)(ulong)bVar7);
        return;
      }
      pIVar47 = (Il2CppClass *)(ulong)*(byte *)(TypeInfo_AHSSWeapon + 0x130);
      if ((bVar6 < *(byte *)(TypeInfo_AHSSWeapon + 0x130)) ||
         (*(long *)(*(long *)((long)pvVar38 + 200) + -8 + (long)pIVar47 * 8) != TypeInfo_AHSSWeapon)) {
        bVar7 = (TypeInfo_ThunderspearWeapon->_2).naturalAligment;
        if (bVar6 < bVar7) {
          return;
        }
        if (*(Il2CppClass **)(*(long *)((long)pvVar38 + 200) + -8 + (long)(ulong)bVar7 * 8) != TypeInfo_ThunderspearWeapon) {
          return;
        }
        UI_HUDBottomHandler__UpdateTS((UI_HUDBottomHandler_o *)__this_05,(MethodInfo *)(ulong)bVar7);
        return;
      }
      __this_04 = *(System_Object_array **)(puVar42 + -0x58);
      pSVar53 = *(System_Object_array **)(puVar42 + -0x50);
      pSVar50 = *(System_Object_array **)(puVar42 + -0x48);
      puVar43 = puVar42 + -0x40;
    }
    else {
      __this_04 = *(System_Object_array **)(puVar42 + -0x58);
      pSVar53 = *(System_Object_array **)(puVar42 + -0x50);
      uVar40 = *(undefined8 *)(puVar42 + -0x48);
      *(long **)(puVar42 + -0x48) = &TypeInfo_Object;
      *(undefined8 *)(puVar42 + -0x50) = uVar40;
      *(System_Object_array **)(puVar42 + -0x58) = pSVar53;
      *(Il2CppClass **)(puVar42 + -0x60) = unaff_R13;
      *(Il2CppClass **)(puVar42 + -0x68) = pIVar39;
      *(System_Object_array **)(puVar42 + -0x70) = __this_04;
      if (g_data_057ae3e1 == '\0') {
        *(undefined8 *)(puVar42 + -0x90) = 0x43c3e36;
        il2cpp_runtime_helper_023445d0(&TypeInfo_BladeWeapon);
        *(undefined8 *)(puVar42 + -0x90) = 0x43c3e42;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Animator_GetComponent_Animator);
        *(undefined8 *)(puVar42 + -0x90) = 0x43c3e4e;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
        *(undefined8 *)(puVar42 + -0x90) = 0x43c3e5a;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
        *(undefined8 *)(puVar42 + -0x90) = 0x43c3e66;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
        *(undefined8 *)(puVar42 + -0x90) = 0x43c3e72;
        il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Item);
        *(undefined8 *)(puVar42 + -0x90) = 0x43c3e7e;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        *(undefined8 *)(puVar42 + -0x90) = 0x43c3e8a;
        il2cpp_runtime_helper_023445d0(&"Prefabs/InGame/HUDBladeAmmo");
        g_data_057ae3e1 = '\x01';
      }
      if ((__this_05->m_Items[0x1d] == (Il2CppObject *)0x0) ||
         (plVar54 = (long *)__this_05->m_Items[0x1d][0x10].klass,
         (System_Object_array *)plVar54 == (System_Object_array *)0x0)) goto label_043c45cd;
      pUVar17 = ((Il2CppClass_1 *)&((System_Object_array *)plVar54)->obj)->image;
      bVar6 = (TypeInfo_BladeWeapon->_2).naturalAligment;
      if ((bVar6 <= (pUVar17->_2).naturalAligment) &&
         ((pUVar17->_2).typeHierarchy[(ulong)bVar6 - 1] == TypeInfo_BladeWeapon)) {
        pUVar18 = (UnityEngine_Component_o *)__this_05->m_Items[0x27];
        if (pUVar18 == (UnityEngine_Component_o *)0x0) goto label_043c45cd;
        *(float *)(puVar42 + -0x80) =
             *(float *)((Il2CppType *)((System_Object_array *)plVar54)->m_Items + 2) /
             *(float *)&((Il2CppType *)((System_Object_array *)plVar54)->m_Items)[1].field_0xc;
        *(undefined8 *)(puVar42 + -0x90) = 0x43c3f0b;
        pUVar29 = UnityEngine_Component__get_gameObject(pUVar18,(MethodInfo *)0x0);
        if (pUVar29 == (UnityEngine_GameObject_o *)0x0) goto label_043c45cd;
        *(undefined8 *)(puVar42 + -0x90) = 0x43c3f1e;
        bVar25 = UnityEngine_GameObject__get_activeSelf(pUVar29,(MethodInfo *)0x0);
        if ((char)bVar25 != '\0') {
          pUVar19 = (UnityEngine_UI_Image_o *)__this_05->m_Items[0x28];
          if (pUVar19 == (UnityEngine_UI_Image_o *)0x0) goto label_043c45cd;
          pUVar14 = (UnityEngine_UI_Image_o *)__this_05->m_Items[0x27];
          *(undefined8 *)(puVar42 + -0x90) = 0x43c3f4a;
          UnityEngine_UI_Image__set_fillAmount(pUVar19,*(float *)(puVar42 + -0x80),(MethodInfo *)0x0);
          if (pUVar14 == (UnityEngine_UI_Image_o *)0x0) goto label_043c45cd;
          *(undefined8 *)(puVar42 + -0x90) = 0x43c3f63;
          UnityEngine_UI_Image__set_fillAmount(pUVar14,*(float *)(puVar42 + -0x80),(MethodInfo *)0x0);
          pIVar52 = __this_05->m_Items[0x27];
          if (*(float *)(puVar42 + -0x80) <= 0.25) {
            if (pIVar52 == (Il2CppObject *)0x0) goto label_043c45cd;
            pIVar5 = __this_05->m_Items[4];
            pIVar3 = __this_05->m_Items[5];
            pMVar46 = pIVar52->klass->vtable[0x17].method;
            vtableDispatch = pIVar52->klass->vtable[0x17].methodPtr;
            *(undefined8 *)(puVar42 + -0x90) = 0x43c4013;
            (*vtableDispatch)((int)pIVar5,(int)pIVar3,pIVar52,pMVar46);
            pIVar52 = __this_05->m_Items[0x28];
            if (pIVar52 == (Il2CppObject *)0x0) goto label_043c45cd;
            pIVar5 = __this_05->m_Items[4];
            pIVar3 = __this_05->m_Items[5];
            pMVar46 = pIVar52->klass->vtable[0x17].method;
            vtableDispatch = pIVar52->klass->vtable[0x17].methodPtr;
            *(undefined8 *)(puVar42 + -0x90) = 0x43c403f;
            (*vtableDispatch)((int)pIVar5,(int)pIVar3,pIVar52,pMVar46);
            pIVar52 = __this_05->m_Items[0x29];
            if (pIVar52 == (Il2CppObject *)0x0) goto label_043c45cd;
            uVar59 = SUB84(__this_05->m_Items[6],0);
          }
          else {
            if (pIVar52 == (Il2CppObject *)0x0) goto label_043c45cd;
            pIVar5 = __this_05->m_Items[10];
            pIVar3 = __this_05->m_Items[0xb];
            pMVar46 = pIVar52->klass->vtable[0x17].method;
            vtableDispatch = pIVar52->klass->vtable[0x17].methodPtr;
            *(undefined8 *)(puVar42 + -0x90) = 0x43c3f9e;
            (*vtableDispatch)((int)pIVar5,(int)pIVar3,pIVar52,pMVar46);
            pIVar52 = __this_05->m_Items[0x28];
            if (pIVar52 == (Il2CppObject *)0x0) goto label_043c45cd;
            pIVar5 = __this_05->m_Items[10];
            pIVar3 = __this_05->m_Items[0xb];
            pMVar46 = pIVar52->klass->vtable[0x17].method;
            vtableDispatch = pIVar52->klass->vtable[0x17].methodPtr;
            *(undefined8 *)(puVar42 + -0x90) = 0x43c3fca;
            (*vtableDispatch)((int)pIVar5,(int)pIVar3,pIVar52,pMVar46);
            pIVar52 = __this_05->m_Items[0x29];
            if (pIVar52 == (Il2CppObject *)0x0) goto label_043c45cd;
            uVar59 = SUB84(__this_05->m_Items[0xc],0);
          }
          vtableDispatch = pIVar52->klass->vtable[0x17].methodPtr;
          *(undefined8 *)(puVar42 + -0x90) = 0x43c406b;
          (*vtableDispatch)(uVar59);
        }
        if (0.0 < *(float *)(puVar42 + -0x80)) {
label_043c40d5:
          pUVar18 = (UnityEngine_Component_o *)__this_05->m_Items[0x29];
          if (pUVar18 == (UnityEngine_Component_o *)0x0) goto label_043c45cd;
          *(undefined8 *)(puVar42 + -0x90) = 0x43c40ec;
          pUVar29 = UnityEngine_Component__get_gameObject(pUVar18,(MethodInfo *)0x0);
          if (pUVar29 == (UnityEngine_GameObject_o *)0x0) goto label_043c45cd;
          *(undefined8 *)(puVar42 + -0x90) = 0x43c40ff;
          bVar25 = UnityEngine_GameObject__get_activeSelf(pUVar29,(MethodInfo *)0x0);
          if (((char)bVar25 != '\0') || (0.0 < *(float *)((long)__this_05->m_Items + 0x104)))
          goto label_043c42f1;
          pUVar18 = (UnityEngine_Component_o *)__this_05->m_Items[0x2a];
          if (pUVar18 == (UnityEngine_Component_o *)0x0) goto label_043c45cd;
          *(undefined8 *)(puVar42 + -0x90) = 0x43c412f;
          pUVar29 = UnityEngine_Component__get_gameObject(pUVar18,(MethodInfo *)0x0);
          if (pUVar29 == (UnityEngine_GameObject_o *)0x0) goto label_043c45cd;
          *(undefined8 *)(puVar42 + -0x90) = 0x43c4144;
          UnityEngine_GameObject__SetActive(pUVar29,0,(MethodInfo *)0x0);
          if (*(float *)(puVar42 + -0x80) <= 0.0) goto label_043c42f1;
          pUVar18 = (UnityEngine_Component_o *)__this_05->m_Items[0x29];
          if (pUVar18 == (UnityEngine_Component_o *)0x0) goto label_043c45cd;
          *(undefined8 *)(puVar42 + -0x90) = 0x43c416d;
          pUVar29 = UnityEngine_Component__get_gameObject(pUVar18,(MethodInfo *)0x0);
          if (pUVar29 == (UnityEngine_GameObject_o *)0x0) goto label_043c45cd;
          *(undefined8 *)(puVar42 + -0x90) = 0x43c4185;
          UnityEngine_GameObject__SetActive(pUVar29,1,(MethodInfo *)0x0);
          pUVar18 = (UnityEngine_Component_o *)__this_05->m_Items[0x2b];
          if (pUVar18 == (UnityEngine_Component_o *)0x0) goto label_043c45cd;
          *(undefined8 *)(puVar42 + -0x90) = 0x43c419c;
          pUVar29 = UnityEngine_Component__get_gameObject(pUVar18,(MethodInfo *)0x0);
          if (pUVar29 == (UnityEngine_GameObject_o *)0x0) goto label_043c45cd;
          *(undefined8 *)(puVar42 + -0x90) = 0x43c41b1;
          UnityEngine_GameObject__SetActive(pUVar29,0,(MethodInfo *)0x0);
          pUVar18 = (UnityEngine_Component_o *)__this_05->m_Items[0x27];
          if (pUVar18 == (UnityEngine_Component_o *)0x0) goto label_043c45cd;
          *(undefined8 *)(puVar42 + -0x90) = 0x43c41c8;
          pUVar29 = UnityEngine_Component__get_gameObject(pUVar18,(MethodInfo *)0x0);
          if (pUVar29 == (UnityEngine_GameObject_o *)0x0) goto label_043c45cd;
          *(undefined8 *)(puVar42 + -0x90) = 0x43c41e0;
          UnityEngine_GameObject__SetActive(pUVar29,1,(MethodInfo *)0x0);
          pUVar18 = (UnityEngine_Component_o *)__this_05->m_Items[0x28];
          if (pUVar18 == (UnityEngine_Component_o *)0x0) goto label_043c45cd;
          *(undefined8 *)(puVar42 + -0x90) = 0x43c41f7;
          pUVar29 = UnityEngine_Component__get_gameObject(pUVar18,(MethodInfo *)0x0);
          if (pUVar29 == (UnityEngine_GameObject_o *)0x0) goto label_043c45cd;
          *(undefined8 *)(puVar42 + -0x90) = 0x43c420f;
          UnityEngine_GameObject__SetActive(pUVar29,1,(MethodInfo *)0x0);
          pUVar19 = (UnityEngine_UI_Image_o *)__this_05->m_Items[0x28];
          if (pUVar19 == (UnityEngine_UI_Image_o *)0x0) goto label_043c45cd;
          pUVar14 = (UnityEngine_UI_Image_o *)__this_05->m_Items[0x27];
          *(undefined8 *)(puVar42 + -0x90) = 0x43c4233;
          UnityEngine_UI_Image__set_fillAmount(pUVar19,*(float *)(puVar42 + -0x80),(MethodInfo *)0x0);
          if (pUVar14 == (UnityEngine_UI_Image_o *)0x0) goto label_043c45cd;
          *(undefined8 *)(puVar42 + -0x90) = 0x43c424c;
          UnityEngine_UI_Image__set_fillAmount(pUVar14,*(float *)(puVar42 + -0x80),(MethodInfo *)0x0);
          pSVar41 = (System_Collections_Generic_List_object__o *)__this_05->m_Items[0x2e];
        }
        else {
          pUVar18 = (UnityEngine_Component_o *)__this_05->m_Items[0x2b];
          if (pUVar18 == (UnityEngine_Component_o *)0x0) goto label_043c45cd;
          *(undefined8 *)(puVar42 + -0x90) = 0x43c408c;
          pUVar29 = UnityEngine_Component__get_gameObject(pUVar18,(MethodInfo *)0x0);
          if (pUVar29 == (UnityEngine_GameObject_o *)0x0) goto label_043c45cd;
          *(undefined8 *)(puVar42 + -0x90) = 0x43c409f;
          bVar25 = UnityEngine_GameObject__get_activeSelf(pUVar29,(MethodInfo *)0x0);
          if ((char)bVar25 != '\0') goto label_043c40d5;
          pUVar18 = (UnityEngine_Component_o *)__this_05->m_Items[0x2a];
          if (pUVar18 == (UnityEngine_Component_o *)0x0) goto label_043c45cd;
          *(undefined8 *)(puVar42 + -0x90) = 0x43c40ba;
          pUVar29 = UnityEngine_Component__get_gameObject(pUVar18,(MethodInfo *)0x0);
          if (pUVar29 == (UnityEngine_GameObject_o *)0x0) goto label_043c45cd;
          *(undefined8 *)(puVar42 + -0x90) = 0x43c40cd;
          bVar25 = UnityEngine_GameObject__get_activeSelf(pUVar29,(MethodInfo *)0x0);
          if ((char)bVar25 != '\0') goto label_043c40d5;
          pUVar18 = (UnityEngine_Component_o *)__this_05->m_Items[0x2b];
          if (pUVar18 == (UnityEngine_Component_o *)0x0) goto label_043c45cd;
          *(undefined8 *)(puVar42 + -0x90) = 0x43c4278;
          pUVar29 = UnityEngine_Component__get_gameObject(pUVar18,(MethodInfo *)0x0);
          if (pUVar29 == (UnityEngine_GameObject_o *)0x0) goto label_043c45cd;
          *(undefined8 *)(puVar42 + -0x90) = 0x43c4290;
          UnityEngine_GameObject__SetActive(pUVar29,1,(MethodInfo *)0x0);
          pUVar18 = (UnityEngine_Component_o *)__this_05->m_Items[0x2b];
          if (pUVar18 == (UnityEngine_Component_o *)0x0) goto label_043c45cd;
          *(undefined8 *)(puVar42 + -0x90) = 0x43c42af;
          pUVar30 = (UnityEngine_Animator_o *)
                    UnityEngine_Component__GetComponent_object_(pUVar18,(MethodInfo_24E7B40 *)MethodInfo_Animator_GetComponent_Animator);
          if (pUVar30 == (UnityEngine_Animator_o *)0x0) goto label_043c45cd;
          *(undefined8 *)(puVar42 + -0x90) = 0x43c42c5;
          UnityEngine_Animator__Update(pUVar30,0.0,(MethodInfo *)0x0);
          pUVar18 = (UnityEngine_Component_o *)__this_05->m_Items[0x29];
          if (pUVar18 == (UnityEngine_Component_o *)0x0) goto label_043c45cd;
          *(undefined8 *)(puVar42 + -0x90) = 0x43c42dc;
          pUVar29 = UnityEngine_Component__get_gameObject(pUVar18,(MethodInfo *)0x0);
          if (pUVar29 == (UnityEngine_GameObject_o *)0x0) goto label_043c45cd;
          *(undefined8 *)(puVar42 + -0x90) = 0x43c42f1;
          UnityEngine_GameObject__SetActive(pUVar29,0,(MethodInfo *)0x0);
label_043c42f1:
          pSVar41 = (System_Collections_Generic_List_object__o *)__this_05->m_Items[0x2e];
        }
        if (pSVar41 != (System_Collections_Generic_List_object__o *)0x0) {
          iVar26 = (pSVar41->fields)._size;
          *(long **)(puVar42 + -0x78) = plVar54;
          fVar58 = (((UnityEngine_Vector4_o *)
                    ((long)((Il2CppType *)((System_Object_array *)plVar54)->m_Items + 2) + 8))->fields).x;
          if ((int)fVar58 < iVar26) {
            if (iVar26 - (int)fVar58 < 1) {
              return;
            }
            iVar45 = 0;
            do {
              *(undefined8 *)(puVar42 + -0x90) = 0x43c433d;
              pUVar35 = (UnityEngine_Object_o *)
                        System_Collections_Generic_List_object___get_Item(pSVar41,0,MethodInfo_GameObject_get_Item);
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                *(undefined8 *)(puVar42 + -0x90) = 0x43c4358;
                il2cpp_runtime_helper_02337ed0();
              }
              *(undefined8 *)(puVar42 + -0x90) = 0x43c4362;
              UnityEngine_Object__Destroy_4e01c60(pUVar35,(MethodInfo *)0x0);
              pSVar41 = (System_Collections_Generic_List_object__o *)__this_05->m_Items[0x2f];
              if (pSVar41 == (System_Collections_Generic_List_object__o *)0x0) break;
              *(undefined8 *)(puVar42 + -0x90) = 0x43c437c;
              pUVar35 = (UnityEngine_Object_o *)
                        System_Collections_Generic_List_object___get_Item(pSVar41,0,MethodInfo_GameObject_get_Item);
              *(undefined8 *)(puVar42 + -0x90) = 0x43c4386;
              UnityEngine_Object__Destroy_4e01c60(pUVar35,(MethodInfo *)0x0);
              pSVar41 = (System_Collections_Generic_List_object__o *)__this_05->m_Items[0x2e];
              if (pSVar41 == (System_Collections_Generic_List_object__o *)0x0) break;
              *(undefined8 *)(puVar42 + -0x90) = 0x43c43a1;
              System_Collections_Generic_List_object___RemoveAt(pSVar41,0,MethodInfo_Void_RemoveAt);
              pSVar41 = (System_Collections_Generic_List_object__o *)__this_05->m_Items[0x2f];
              if (pSVar41 == (System_Collections_Generic_List_object__o *)0x0) break;
              *(undefined8 *)(puVar42 + -0x90) = 0x43c43bc;
              System_Collections_Generic_List_object___RemoveAt(pSVar41,0,MethodInfo_Void_RemoveAt);
              iVar45 = iVar45 + 1;
              if (iVar26 - *(int *)(*(long *)(puVar42 + -0x78) + 0x48) <= iVar45) {
                return;
              }
              pSVar41 = (System_Collections_Generic_List_object__o *)__this_05->m_Items[0x2e];
            } while (pSVar41 != (System_Collections_Generic_List_object__o *)0x0);
          }
          else {
            if ((int)fVar58 <= iVar26) {
              return;
            }
            if ((int)fVar58 - iVar26 < 1) {
              return;
            }
            pUVar29 = (UnityEngine_GameObject_o *)__this_05->m_Items[0x2c];
            if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
              iVar45 = 0;
              *(System_Object_array **)(puVar42 + -0x80) = __this_05;
              do {
                *(undefined8 *)(puVar42 + -0x90) = 0x43c4427;
                pUVar36 = UnityEngine_GameObject__get_transform(pUVar29,(MethodInfo *)0x0);
                *(undefined8 *)(puVar42 + -0x90) = 0x43c4435;
                pUVar29 = UI_ElementFactory__InstantiateAndBind(pUVar36,"Prefabs/InGame/HUDBladeAmmo",(MethodInfo *)0x0);
                lVar33 = MethodInfo_Void_Add;
                if (pSVar41 == (System_Collections_Generic_List_object__o *)0x0) break;
                piVar1 = &(pSVar41->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar50 = (pSVar41->fields)._items;
                if (pSVar50 == (System_Object_array *)0x0) break;
                uVar27 = (pSVar41->fields)._size;
                if (uVar27 < (uint)pSVar50->max_length) {
                  (pSVar41->fields)._size = uVar27 + 1;
                  pSVar50->m_Items[(int)uVar27] = (Il2CppObject *)pUVar29;
                  *(undefined8 *)(puVar42 + -0x90) = 0x43c447d;
                  il2cpp_runtime_helper_022b4080(pSVar50->m_Items + (int)uVar27);
                  pUVar29 = *(UnityEngine_GameObject_o **)(*(long *)(puVar42 + -0x80) + 0x188);
                }
                else {
                  pMVar15 = *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar33 + 0x20) + 0xc0) + 0x70);
                  *(undefined8 *)(puVar42 + -0x90) = 0x43c44ba;
                  System_Collections_Generic_List_object___AddWithResize
                            (pSVar41,(Il2CppObject *)pUVar29,pMVar15);
                  pUVar29 = *(UnityEngine_GameObject_o **)(*(long *)(puVar42 + -0x80) + 0x188);
                }
                if (pUVar29 == (UnityEngine_GameObject_o *)0x0) break;
                *(undefined8 *)(puVar42 + -0x90) = 0x43c44d9;
                pUVar36 = UnityEngine_GameObject__get_transform(pUVar29,(MethodInfo *)0x0);
                *(undefined8 *)(puVar42 + -0x90) = 0x43c44ea;
                pUVar29 = UI_ElementFactory__InstantiateAndBind(pUVar36,"Prefabs/InGame/HUDBladeAmmo",(MethodInfo *)0x0);
                if (pUVar29 == (UnityEngine_GameObject_o *)0x0) break;
                *(undefined8 *)(puVar42 + -0x90) = 0x43c4500;
                pUVar36 = UnityEngine_GameObject__get_transform(pUVar29,(MethodInfo *)0x0);
                *(undefined8 *)(puVar42 + -0x90) = 0x43c4514;
                UVar70 = UnityEngine_Quaternion__Internal_FromEulerRad
                                   ((UnityEngine_Vector3_o)ZEXT812(0x40490fdb00000000),(MethodInfo *)0x0);
                if (pUVar36 == (UnityEngine_Transform_o *)0x0) break;
                *(undefined8 *)(puVar42 + -0x90) = 0x43c4527;
                UnityEngine_Transform__set_localRotation(pUVar36,UVar70,(MethodInfo *)0x0);
                lVar33 = MethodInfo_Void_Add;
                pSVar41 = *(System_Collections_Generic_List_object__o **)(*(long *)(puVar42 + -0x80) + 0x198);
                if (pSVar41 == (System_Collections_Generic_List_object__o *)0x0) break;
                piVar1 = &(pSVar41->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar50 = (pSVar41->fields)._items;
                if (pSVar50 == (System_Object_array *)0x0) break;
                uVar27 = (pSVar41->fields)._size;
                if (uVar27 < (uint)pSVar50->max_length) {
                  (pSVar41->fields)._size = uVar27 + 1;
                  pSVar50->m_Items[(int)uVar27] = (Il2CppObject *)pUVar29;
                  *(undefined8 *)(puVar42 + -0x90) = 0x43c4577;
                  il2cpp_runtime_helper_022b4080(pSVar50->m_Items + (int)uVar27);
                }
                else {
                  pMVar15 = *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar33 + 0x20) + 0xc0) + 0x70);
                  *(undefined8 *)(puVar42 + -0x90) = 0x43c4597;
                  System_Collections_Generic_List_object___AddWithResize
                            (pSVar41,(Il2CppObject *)pUVar29,pMVar15);
                }
                iVar45 = iVar45 + 1;
                if (*(int *)(*(long *)(puVar42 + -0x78) + 0x48) - iVar26 <= iVar45) {
                  return;
                }
                pUVar29 = *(UnityEngine_GameObject_o **)(*(long *)(puVar42 + -0x80) + 0x180);
                pSVar41 = *(System_Collections_Generic_List_object__o **)(*(long *)(puVar42 + -0x80) + 400);
              } while (pUVar29 != (UnityEngine_GameObject_o *)0x0);
            }
          }
        }
label_043c45cd:
        *(undefined8 *)(puVar42 + -0x90) = 0x43c45d2;
        il2cpp_runtime_helper_022b2c90();
        return;
      }
      *(undefined8 *)(puVar42 + -0x90) = 0x43c45e9;
      pIVar47 = TypeInfo_BladeWeapon;
      pSVar50 = (System_Object_array *)plVar54;
      il2cpp_runtime_helper_022b2fd0();
      *(System_Object_array **)(puVar42 + -0x90) = __this_05;
      *(System_Object_array **)(puVar42 + -0x98) = pSVar53;
      *(Il2CppClass **)(puVar42 + -0xa0) = unaff_R13;
      *(Il2CppClass **)(puVar42 + -0xa8) = pIVar39;
      *(System_Object_array **)(puVar42 + -0xb0) = __this_04;
      puVar43 = puVar42 + -0xc0;
      if (g_data_057ae3e2 == '\0') {
        *(undefined8 *)(puVar42 + -200) = 0x43c4615;
        il2cpp_runtime_helper_023445d0(&TypeInfo_AmmoWeapon);
        g_data_057ae3e2 = '\x01';
      }
      if ((*(long *)((long)((Il2CppType *)pSVar50->m_Items + 0xe) + 8) == 0) ||
         (pSVar53 = *(System_Object_array **)
                     (*(long *)((long)((Il2CppType *)pSVar50->m_Items + 0xe) + 8) + 0x100),
         pSVar53 == (System_Object_array *)0x0)) {
label_043c4ab9:
        *(undefined8 *)(puVar42 + -200) = 0x43c4abe;
        il2cpp_runtime_helper_022b2c90();
      }
      else {
        pIVar37 = (pSVar53->obj).klass;
        bVar6 = (TypeInfo_AmmoWeapon->_2).naturalAligment;
        pIVar47 = TypeInfo_AmmoWeapon;
        if ((bVar6 <= (pIVar37->_2).naturalAligment) &&
           ((pIVar37->_2).typeHierarchy[(ulong)bVar6 - 1] == TypeInfo_AmmoWeapon)) {
          iVar26 = *(int *)((long)pSVar53->m_Items + 0x24);
          if (iVar26 < 1) {
            if (*(int *)(pSVar53->m_Items + 5) == -1) {
              fVar58 = 1.0;
              pUVar19 = *(UnityEngine_UI_Image_o **)((long)((Il2CppType *)pSVar50->m_Items + 0x18) + 8);
            }
            else {
              fVar58 = 0.0;
              pUVar19 = *(UnityEngine_UI_Image_o **)((long)((Il2CppType *)pSVar50->m_Items + 0x18) + 8);
            }
          }
          else {
            fVar58 = (float)*(int *)(pSVar53->m_Items + 5) / (float)iVar26;
            pUVar19 = *(UnityEngine_UI_Image_o **)((long)((Il2CppType *)pSVar50->m_Items + 0x18) + 8);
          }
          if (pUVar19 != (UnityEngine_UI_Image_o *)0x0) {
            __this_04 = ((Il2CppType *)pSVar50->m_Items)[0x18].data;
            pIVar47 = (Il2CppClass *)0x0;
            *(float *)(puVar42 + -0xb4) = fVar58;
            *(undefined8 *)(puVar42 + -200) = 0x43c46dc;
            UnityEngine_UI_Image__set_fillAmount(pUVar19,fVar58,(MethodInfo *)0x0);
            if (__this_04 != (System_Object_array *)0x0) {
              pIVar47 = (Il2CppClass *)0x0;
              *(undefined8 *)(puVar42 + -200) = 0x43c46f5;
              UnityEngine_UI_Image__set_fillAmount
                        ((UnityEngine_UI_Image_o *)__this_04,*(float *)(puVar42 + -0xb4),(MethodInfo *)0x0);
              if (*(float *)(puVar42 + -0xb4) <= 0.0) {
                if (((Il2CppType *)pSVar50->m_Items)[0x1a].data != (long *)0x0) {
                  pIVar37 = ((Il2CppType *)pSVar50->m_Items)[3].data;
                  lVar33 = *((Il2CppType *)pSVar50->m_Items)[0x1a].data;
                  pIVar47 = *(Il2CppClass **)(lVar33 + 0x2b0);
                  pcVar16 = *(code **)(lVar33 + 0x2a8);
                  *(undefined8 *)(puVar42 + -200) = 0x43c47cf;
                  (*pcVar16)((int)pIVar37);
                  plVar28 = *(long **)((long)((Il2CppType *)pSVar50->m_Items + 0x1b) + 8);
                  if (plVar28 != (long *)0x0) {
                    pIVar37 = ((Il2CppType *)pSVar50->m_Items)[3].data;
                    lVar33 = *plVar28;
                    pIVar47 = *(Il2CppClass **)(lVar33 + 0x2b0);
                    pcVar16 = *(code **)(lVar33 + 0x2a8);
                    *(undefined8 *)(puVar42 + -200) = 0x43c47fb;
                    (*pcVar16)((int)pIVar37);
                    plVar28 = ((Il2CppType *)pSVar50->m_Items)[0x1b].data;
                    if (plVar28 != (long *)0x0) {
                      uVar59 = SUB84(((Il2CppType *)pSVar50->m_Items)[3].data,0);
                      goto label_043c4886;
                    }
                  }
                }
              }
              else {
                plVar28 = ((Il2CppType *)pSVar50->m_Items)[0x1a].data;
                if (*(float *)(puVar42 + -0xb4) <= 0.5) {
                  if (plVar28 != (long *)0x0) {
                    pvVar38 = ((Il2CppType *)pSVar50->m_Items)[1].data;
                    pIVar47 = *(Il2CppClass **)(*plVar28 + 0x2b0);
                    pcVar16 = *(code **)(*plVar28 + 0x2a8);
                    *(undefined8 *)(puVar42 + -200) = 0x43c483e;
                    (*pcVar16)((int)pvVar38);
                    plVar28 = *(long **)((long)((Il2CppType *)pSVar50->m_Items + 0x1b) + 8);
                    if (plVar28 != (long *)0x0) {
                      pvVar38 = ((Il2CppType *)pSVar50->m_Items)[1].data;
                      lVar33 = *plVar28;
                      pIVar47 = *(Il2CppClass **)(lVar33 + 0x2b0);
                      pcVar16 = *(code **)(lVar33 + 0x2a8);
                      *(undefined8 *)(puVar42 + -200) = 0x43c486a;
                      (*pcVar16)((int)pvVar38);
                      plVar28 = ((Il2CppType *)pSVar50->m_Items)[0x1b].data;
                      if (plVar28 != (long *)0x0) {
                        uVar59 = SUB84(((Il2CppType *)pSVar50->m_Items)[1].data,0);
                        goto label_043c4886;
                      }
                    }
                  }
                }
                else if (plVar28 != (long *)0x0) {
                  pUVar4 = ((Il2CppType *)pSVar50->m_Items)[6].data;
                  pIVar47 = *(Il2CppClass **)(*plVar28 + 0x2b0);
                  pcVar16 = *(code **)(*plVar28 + 0x2a8);
                  *(undefined8 *)(puVar42 + -200) = 0x43c474a;
                  (*pcVar16)((int)pUVar4);
                  plVar28 = *(long **)((long)((Il2CppType *)pSVar50->m_Items + 0x1b) + 8);
                  if (plVar28 != (long *)0x0) {
                    pUVar4 = ((Il2CppType *)pSVar50->m_Items)[6].data;
                    lVar33 = *plVar28;
                    pIVar47 = *(Il2CppClass **)(lVar33 + 0x2b0);
                    pcVar16 = *(code **)(lVar33 + 0x2a8);
                    *(undefined8 *)(puVar42 + -200) = 0x43c477c;
                    (*pcVar16)((int)pUVar4);
                    plVar28 = ((Il2CppType *)pSVar50->m_Items)[0x1b].data;
                    if (plVar28 != (long *)0x0) {
                      uVar59 = SUB84(((Il2CppType *)pSVar50->m_Items)[6].data,0);
label_043c4886:
                      pcVar16 = *(code **)(*plVar28 + 0x2a8);
                      *(undefined8 *)(puVar42 + -200) = 0x43c4896;
                      (*pcVar16)(uVar59);
                      unaff_R13 = ((Il2CppType *)pSVar50->m_Items)[0x19].data;
                      __this_04 = *(System_Object_array **)((long)((Il2CppType *)pSVar50->m_Items + 0x19) + 8)
                      ;
                      pSVar53 = (System_Object_array *)(pSVar53->m_Items + 4);
                      pIVar47 = (Il2CppClass *)0x0;
                      *(undefined8 *)(puVar42 + -200) = 0x43c48b2;
                      pIVar37 = (Il2CppClass *)System_Int32__ToString((int32_t)pSVar53,(MethodInfo *)0x0);
                      if (__this_04 != (System_Object_array *)0x0) {
                        pUVar17 = ((Il2CppClass_1 *)&__this_04->obj)->image;
                        pMVar46 = (pUVar17->vtable)._75_unknown.method;
                        vtableDispatch = (pUVar17->vtable)._75_unknown.methodPtr;
                        *(undefined8 *)(puVar42 + -200) = 0x43c48d4;
                        pIVar47 = pIVar37;
                        (*vtableDispatch)(__this_04,pIVar37,pMVar46);
                        pIVar39 = pIVar37;
                        if (unaff_R13 != (Il2CppClass *)0x0) {
                          vtableDispatch = (unaff_R13->_1).image;
                          uVar40 = *(undefined8 *)(vtableDispatch + 0x5f0);
                          pcVar16 = *(code **)(vtableDispatch + 0x5e8);
                          *(undefined8 *)(puVar42 + -200) = 0x43c48f4;
                          pIVar47 = pIVar37;
                          (*pcVar16)(unaff_R13,pIVar37,uVar40);
                          plVar28 = ((Il2CppType *)pSVar50->m_Items)[0x19].data;
                          if (*(int *)&(pSVar53->obj).klass == 0) {
                            if (plVar28 != (long *)0x0) {
                              pIVar47 = *(Il2CppClass **)(*plVar28 + 0x2b0);
                              pcVar16 = *(code **)(*plVar28 + 0x2a8);
                              *(undefined8 *)(puVar42 + -200) = 0x43c49cd;
                              (*pcVar16)(0x3f800000);
                              plVar28 = *(long **)((long)((Il2CppType *)pSVar50->m_Items + 0x19) + 8);
                              if (plVar28 != (long *)0x0) {
                                lVar33 = *plVar28;
                                pIVar47 = *(Il2CppClass **)(lVar33 + 0x2b0);
                                pcVar16 = *(code **)(lVar33 + 0x2a8);
                                *(undefined8 *)(puVar42 + -200) = 0x43c49fc;
                                (*pcVar16)(0x3f800000);
                                pUVar18 = ((Il2CppType *)pSVar50->m_Items)[0x1a].data;
                                goto joined_r0x043c4a06;
                              }
                            }
                          }
                          else if (plVar28 != (long *)0x0) {
                            pIVar47 = *(Il2CppClass **)(*plVar28 + 0x2b0);
                            pcVar16 = *(code **)(*plVar28 + 0x2a8);
                            *(undefined8 *)(puVar42 + -200) = 0x43c4928;
                            (*pcVar16)();
                            plVar28 = *(long **)((long)((Il2CppType *)pSVar50->m_Items + 0x19) + 8);
                            if (plVar28 != (long *)0x0) {
                              lVar33 = *plVar28;
                              pIVar47 = *(Il2CppClass **)(lVar33 + 0x2b0);
                              pcVar16 = *(code **)(lVar33 + 0x2a8);
                              *(undefined8 *)(puVar42 + -200) = 0x43c4952;
                              (*pcVar16)();
                              pUVar18 = ((Il2CppType *)pSVar50->m_Items)[0x1a].data;
joined_r0x043c4a06:
                              if (pUVar18 != (UnityEngine_Component_o *)0x0) {
                                pIVar47 = (Il2CppClass *)0x0;
                                *(undefined8 *)(puVar42 + -200) = 0x43c4969;
                                pUVar29 = UnityEngine_Component__get_gameObject(pUVar18,(MethodInfo *)0x0);
                                if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                                  pIVar47 = (Il2CppClass *)0x0;
                                  *(undefined8 *)(puVar42 + -200) = 0x43c497c;
                                  bVar25 = UnityEngine_GameObject__get_activeSelf(pUVar29,(MethodInfo *)0x0);
                                  if ((((char)bVar25 != '\0') ||
                                      (0.0 < *(float *)((long)((Il2CppType *)pSVar50->m_Items + 0x10) + 4)))
                                     || (0.0 < *(float *)((long)((Il2CppType *)pSVar50->m_Items + 0x10) + 8)))
                                  {
                                    return;
                                  }
                                  pUVar18 = ((Il2CppType *)pSVar50->m_Items)[0x1a].data;
                                  if (pUVar18 != (UnityEngine_Component_o *)0x0) {
                                    pIVar47 = (Il2CppClass *)0x0;
                                    *(undefined8 *)(puVar42 + -200) = 0x43c4a28;
                                    pUVar29 = UnityEngine_Component__get_gameObject(pUVar18,(MethodInfo *)0x0)
                                    ;
                                    if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                                      pIVar47 = (Il2CppClass *)0x1;
                                      *(undefined8 *)(puVar42 + -200) = 0x43c4a40;
                                      UnityEngine_GameObject__SetActive(pUVar29,1,(MethodInfo *)0x0);
                                      pUVar18 = *(UnityEngine_Component_o **)
                                                 ((long)((Il2CppType *)pSVar50->m_Items + 0x1b) + 8);
                                      if (pUVar18 != (UnityEngine_Component_o *)0x0) {
                                        pIVar47 = (Il2CppClass *)0x0;
                                        *(undefined8 *)(puVar42 + -200) = 0x43c4a53;
                                        pUVar29 = UnityEngine_Component__get_gameObject
                                                            (pUVar18,(MethodInfo *)0x0);
                                        if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                                          pIVar47 = (Il2CppClass *)0x0;
                                          *(undefined8 *)(puVar42 + -200) = 0x43c4a64;
                                          UnityEngine_GameObject__SetActive(pUVar29,0,(MethodInfo *)0x0);
                                          pUVar18 = *(UnityEngine_Component_o **)
                                                     ((long)((Il2CppType *)pSVar50->m_Items + 0x1a) + 8);
                                          if (pUVar18 != (UnityEngine_Component_o *)0x0) {
                                            pIVar47 = (Il2CppClass *)0x0;
                                            *(undefined8 *)(puVar42 + -200) = 0x43c4a77;
                                            pUVar29 = UnityEngine_Component__get_gameObject
                                                                (pUVar18,(MethodInfo *)0x0);
                                            if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                                              pIVar47 = (Il2CppClass *)0x0;
                                              *(undefined8 *)(puVar42 + -200) = 0x43c4a88;
                                              UnityEngine_GameObject__SetActive(pUVar29,0,(MethodInfo *)0x0);
                                              pUVar18 = ((Il2CppType *)pSVar50->m_Items)[0x1b].data;
                                              if (pUVar18 != (UnityEngine_Component_o *)0x0) {
                                                pIVar47 = (Il2CppClass *)0x0;
                                                *(undefined8 *)(puVar42 + -200) = 0x43c4a9b;
                                                pUVar29 = UnityEngine_Component__get_gameObject
                                                                    (pUVar18,(MethodInfo *)0x0);
                                                if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                                                  UnityEngine_GameObject__SetActive
                                                            (pUVar29,0,(MethodInfo *)0x0);
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
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          goto label_043c4ab9;
        }
      }
      *(undefined8 *)(puVar42 + -200) = 0x43c4ac6;
      __this_05 = pSVar53;
      pvVar38 = (void *)il2cpp_runtime_helper_022b2fd0();
    }
    *(long **)(puVar43 + -8) = plVar54;
    *(System_Object_array **)(puVar43 + -0x10) = pSVar50;
    *(System_Object_array **)(puVar43 + -0x18) = pSVar53;
    *(Il2CppClass **)(puVar43 + -0x20) = unaff_R13;
    *(Il2CppClass **)(puVar43 + -0x28) = pIVar39;
    *(System_Object_array **)(puVar43 + -0x30) = __this_04;
    *(void **)(puVar43 + -0x38) = pvVar38;
    if (g_data_057ae3e3 == '\0') {
      *(undefined8 *)(puVar43 + -0x40) = 0x43c4af3;
      il2cpp_runtime_helper_023445d0(&TypeInfo_AmmoWeapon);
      g_data_057ae3e3 = '\x01';
    }
    if ((*(Characters_Human_o **)((long)((UnityEngine_Color_o *)__this_05->m_Items + 0xe) + 8) ==
         (Characters_Human_o *)0x0) ||
       (pSVar53 = ((*(Characters_Human_o **)((long)((UnityEngine_Color_o *)__this_05->m_Items + 0xe) + 8))->
                  fields).crossfadeCache, pSVar53 == (System_Object_array *)0x0)) {
label_043c52c4:
      *(undefined8 *)(puVar43 + -0x40) = 0x43c52c9;
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      pIVar39 = (pSVar53->obj).klass;
      bVar6 = (TypeInfo_AmmoWeapon->_2).naturalAligment;
      pIVar47 = TypeInfo_AmmoWeapon;
      if ((bVar6 <= (pIVar39->_2).naturalAligment) &&
         ((pIVar39->_2).typeHierarchy[(ulong)bVar6 - 1] == TypeInfo_AmmoWeapon)) {
        __this_04 = (System_Object_array *)__this_05->m_Items[0x32];
        pIVar52 = __this_05->m_Items[0x33];
        pSVar50 = (System_Object_array *)(pSVar53->m_Items + 4);
        pIVar47 = (Il2CppClass *)0x0;
        *(undefined8 *)(puVar43 + -0x40) = 0x43c4b6b;
        pIVar39 = (Il2CppClass *)System_Int32__ToString((int32_t)pSVar50,(MethodInfo *)0x0);
        if (pIVar52 != (Il2CppObject *)0x0) {
          pMVar46 = pIVar52->klass->vtable[0x4b].method;
          vtableDispatch = pIVar52->klass->vtable[0x4b].methodPtr;
          *(undefined8 *)(puVar43 + -0x40) = 0x43c4b8e;
          pIVar47 = pIVar39;
          (*vtableDispatch)(pIVar52,pIVar39,pMVar46);
          unaff_R13 = pIVar39;
          if (__this_04 != (System_Object_array *)0x0) {
            pUVar17 = ((Il2CppClass_1 *)&__this_04->obj)->image;
            pMVar46 = (pUVar17->vtable)._75_unknown.method;
            vtableDispatch = (pUVar17->vtable)._75_unknown.methodPtr;
            *(undefined8 *)(puVar43 + -0x40) = 0x43c4bad;
            pIVar47 = pIVar39;
            (*vtableDispatch)(__this_04,pIVar39,pMVar46);
            pIVar52 = __this_05->m_Items[0x32];
            if (*(int *)&((Il2CppClass_1 *)&pSVar50->obj)->image == 0) {
              if (pIVar52 != (Il2CppObject *)0x0) {
                pIVar47 = (Il2CppClass *)pIVar52->klass->vtable[0x17].method;
                vtableDispatch = pIVar52->klass->vtable[0x17].methodPtr;
                *(undefined8 *)(puVar43 + -0x40) = 0x43c4cfb;
                (*vtableDispatch)(0x3f800000);
                if (__this_05->m_Items[0x33] != (Il2CppObject *)0x0) {
                  pIVar39 = __this_05->m_Items[0x33]->klass;
                  pIVar47 = (Il2CppClass *)pIVar39->vtable[0x17].method;
                  vtableDispatch = pIVar39->vtable[0x17].methodPtr;
                  *(undefined8 *)(puVar43 + -0x40) = 0x43c4d2b;
                  (*vtableDispatch)(0x3f800000);
                  iVar26 = *(int *)(pSVar53->m_Items + 5);
                  if (iVar26 != 1) goto label_043c4c1a;
label_043c4d38:
                  if (__this_05->m_Items[0x3a] != (Il2CppObject *)0x0) {
                    __this_04 = (System_Object_array *)(__this_05->m_Items + 2);
                    pSVar51 = (System_Object_array *)(__this_05->m_Items + 6);
                    if (0 < *(int *)&((Il2CppClass_1 *)&pSVar50->obj)->image) {
                      pSVar51 = __this_04;
                    }
                    pUVar17 = ((Il2CppClass_1 *)&pSVar51->obj)->image;
                    pIVar39 = __this_05->m_Items[0x3a]->klass;
                    pIVar47 = (Il2CppClass *)pIVar39->vtable[0x17].method;
                    vtableDispatch = pIVar39->vtable[0x17].methodPtr;
                    *(undefined8 *)(puVar43 + -0x40) = 0x43c4d81;
                    (*vtableDispatch)((int)pUVar17);
                    if (__this_05->m_Items[0x3b] != (Il2CppObject *)0x0) {
                      pIVar52 = __this_05->m_Items[2];
                      pIVar39 = __this_05->m_Items[0x3b]->klass;
                      pIVar47 = (Il2CppClass *)pIVar39->vtable[0x17].method;
                      vtableDispatch = pIVar39->vtable[0x17].methodPtr;
                      *(undefined8 *)(puVar43 + -0x40) = 0x43c4db0;
                      (*vtableDispatch)((int)pIVar52);
                      if (__this_05->m_Items[0x38] != (Il2CppObject *)0x0) {
                        pIVar52 = __this_05->m_Items[2];
                        pIVar39 = __this_05->m_Items[0x38]->klass;
                        pIVar47 = (Il2CppClass *)pIVar39->vtable[0x17].method;
                        vtableDispatch = pIVar39->vtable[0x17].methodPtr;
                        *(undefined8 *)(puVar43 + -0x40) = 0x43c4ddf;
                        (*vtableDispatch)((int)pIVar52);
                        if (__this_05->m_Items[0x39] != (Il2CppObject *)0x0) {
                          pIVar52 = __this_05->m_Items[2];
                          pIVar39 = __this_05->m_Items[0x39]->klass;
                          pIVar47 = (Il2CppClass *)pIVar39->vtable[0x17].method;
                          vtableDispatch = pIVar39->vtable[0x17].methodPtr;
                          *(undefined8 *)(puVar43 + -0x40) = 0x43c4e0e;
                          (*vtableDispatch)((int)pIVar52);
                          if (__this_05->m_Items[0x3e] != (Il2CppObject *)0x0) {
                            pIVar52 = __this_05->m_Items[2];
                            pIVar39 = __this_05->m_Items[0x3e]->klass;
                            pIVar47 = (Il2CppClass *)pIVar39->vtable[0x17].method;
                            vtableDispatch = pIVar39->vtable[0x17].methodPtr;
                            *(undefined8 *)(puVar43 + -0x40) = 0x43c4e3d;
                            (*vtableDispatch)((int)pIVar52);
                            pIVar52 = __this_05->m_Items[0x3f];
                            if (pIVar52 != (Il2CppObject *)0x0) {
                              uVar59 = SUB84(((Il2CppClass_1 *)&__this_04->obj)->image,0);
                              goto label_043c4eb3;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            else if (pIVar52 != (Il2CppObject *)0x0) {
              pIVar47 = (Il2CppClass *)pIVar52->klass->vtable[0x17].method;
              vtableDispatch = pIVar52->klass->vtable[0x17].methodPtr;
              *(undefined8 *)(puVar43 + -0x40) = 0x43c4be2;
              (*vtableDispatch)();
              if (__this_05->m_Items[0x33] != (Il2CppObject *)0x0) {
                pIVar39 = __this_05->m_Items[0x33]->klass;
                pIVar47 = (Il2CppClass *)pIVar39->vtable[0x17].method;
                vtableDispatch = pIVar39->vtable[0x17].methodPtr;
                *(undefined8 *)(puVar43 + -0x40) = 0x43c4c0d;
                (*vtableDispatch)();
                iVar26 = *(int *)(pSVar53->m_Items + 5);
                if (iVar26 == 1) goto label_043c4d38;
label_043c4c1a:
                if (iVar26 == 0) {
                  if (__this_05->m_Items[0x3a] != (Il2CppObject *)0x0) {
                    pIVar52 = __this_05->m_Items[6];
                    pIVar39 = __this_05->m_Items[0x3a]->klass;
                    pIVar47 = (Il2CppClass *)pIVar39->vtable[0x17].method;
                    vtableDispatch = pIVar39->vtable[0x17].methodPtr;
                    *(undefined8 *)(puVar43 + -0x40) = 0x43c4c51;
                    (*vtableDispatch)((int)pIVar52);
                    if (__this_05->m_Items[0x3b] != (Il2CppObject *)0x0) {
                      pIVar52 = __this_05->m_Items[6];
                      pIVar39 = __this_05->m_Items[0x3b]->klass;
                      pIVar47 = (Il2CppClass *)pIVar39->vtable[0x17].method;
                      vtableDispatch = pIVar39->vtable[0x17].methodPtr;
                      *(undefined8 *)(puVar43 + -0x40) = 0x43c4c80;
                      (*vtableDispatch)((int)pIVar52);
                      if (__this_05->m_Items[0x3e] != (Il2CppObject *)0x0) {
                        pIVar52 = __this_05->m_Items[6];
                        pIVar39 = __this_05->m_Items[0x3e]->klass;
                        pIVar47 = (Il2CppClass *)pIVar39->vtable[0x17].method;
                        vtableDispatch = pIVar39->vtable[0x17].methodPtr;
                        *(undefined8 *)(puVar43 + -0x40) = 0x43c4caf;
                        (*vtableDispatch)((int)pIVar52);
                        pIVar52 = __this_05->m_Items[0x3f];
                        if (pIVar52 != (Il2CppObject *)0x0) {
                          uVar59 = SUB84(__this_05->m_Items[6],0);
                          goto label_043c4eb3;
                        }
                      }
                    }
                  }
                }
                else if (__this_05->m_Items[0x38] != (Il2CppObject *)0x0) {
                  pIVar52 = __this_05->m_Items[0xc];
                  pIVar39 = __this_05->m_Items[0x38]->klass;
                  pIVar47 = (Il2CppClass *)pIVar39->vtable[0x17].method;
                  vtableDispatch = pIVar39->vtable[0x17].methodPtr;
                  *(undefined8 *)(puVar43 + -0x40) = 0x43c4e8e;
                  (*vtableDispatch)((int)pIVar52);
                  pIVar52 = __this_05->m_Items[0x39];
                  if (pIVar52 != (Il2CppObject *)0x0) {
                    uVar59 = SUB84(__this_05->m_Items[0xc],0);
label_043c4eb3:
                    pIVar47 = (Il2CppClass *)pIVar52->klass->vtable[0x17].method;
                    vtableDispatch = pIVar52->klass->vtable[0x17].methodPtr;
                    *(undefined8 *)(puVar43 + -0x40) = 0x43c4ec3;
                    (*vtableDispatch)(uVar59);
                    pUVar18 = (UnityEngine_Component_o *)__this_05->m_Items[0x3a];
                    if (pUVar18 != (UnityEngine_Component_o *)0x0) {
                      pIVar47 = (Il2CppClass *)0x0;
                      *(undefined8 *)(puVar43 + -0x40) = 0x43c4edb;
                      pUVar29 = UnityEngine_Component__get_gameObject(pUVar18,(MethodInfo *)0x0);
                      if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                        pIVar47 = (Il2CppClass *)0x0;
                        *(undefined8 *)(puVar43 + -0x40) = 0x43c4eee;
                        bVar25 = UnityEngine_GameObject__get_activeSelf(pUVar29,(MethodInfo *)0x0);
                        if (((char)bVar25 == '\0') || (*(int *)(pSVar53->m_Items + 5) < 2)) {
label_043c4f56:
                          pUVar18 = (UnityEngine_Component_o *)__this_05->m_Items[0x3b];
                          if (pUVar18 != (UnityEngine_Component_o *)0x0) {
                            pIVar47 = (Il2CppClass *)0x0;
                            *(undefined8 *)(puVar43 + -0x40) = 0x43c4f6e;
                            pUVar29 = UnityEngine_Component__get_gameObject(pUVar18,(MethodInfo *)0x0);
                            if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                              pIVar47 = (Il2CppClass *)0x0;
                              *(undefined8 *)(puVar43 + -0x40) = 0x43c4f81;
                              bVar25 = UnityEngine_GameObject__get_activeSelf(pUVar29,(MethodInfo *)0x0);
                              if (((char)bVar25 == '\0') || (*(int *)(pSVar53->m_Items + 5) < 1)) {
label_043c4fe9:
                                pUVar18 = (UnityEngine_Component_o *)__this_05->m_Items[0x3e];
                                if (pUVar18 != (UnityEngine_Component_o *)0x0) {
                                  pIVar47 = (Il2CppClass *)0x0;
                                  *(undefined8 *)(puVar43 + -0x40) = 0x43c5001;
                                  pUVar29 = UnityEngine_Component__get_gameObject(pUVar18,(MethodInfo *)0x0);
                                  if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                                    pIVar47 = (Il2CppClass *)0x0;
                                    *(undefined8 *)(puVar43 + -0x40) = 0x43c5014;
                                    bVar25 = UnityEngine_GameObject__get_activeSelf(pUVar29,(MethodInfo *)0x0)
                                    ;
                                    if (((char)bVar25 == '\0') ||
                                       (0.0 < *(float *)(__this_05->m_Items + 0x21))) {
label_043c5083:
                                      pUVar18 = (UnityEngine_Component_o *)__this_05->m_Items[0x3f];
                                      if (pUVar18 != (UnityEngine_Component_o *)0x0) {
                                        pIVar47 = (Il2CppClass *)0x0;
                                        *(undefined8 *)(puVar43 + -0x40) = 0x43c509b;
                                        pUVar29 = UnityEngine_Component__get_gameObject
                                                            (pUVar18,(MethodInfo *)0x0);
                                        if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                                          pIVar47 = (Il2CppClass *)0x0;
                                          *(undefined8 *)(puVar43 + -0x40) = 0x43c50ae;
                                          bVar25 = UnityEngine_GameObject__get_activeSelf
                                                             (pUVar29,(MethodInfo *)0x0);
                                          if (((char)bVar25 == '\0') ||
                                             (0.0 < *(float *)(__this_05->m_Items + 0x21))) {
label_043c511d:
                                            pUVar18 = (UnityEngine_Component_o *)__this_05->m_Items[0x3c];
                                            if (pUVar18 != (UnityEngine_Component_o *)0x0) {
                                              pIVar47 = (Il2CppClass *)0x0;
                                              *(undefined8 *)(puVar43 + -0x40) = 0x43c5135;
                                              pUVar29 = UnityEngine_Component__get_gameObject
                                                                  (pUVar18,(MethodInfo *)0x0);
                                              if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                                                pIVar47 = (Il2CppClass *)0x0;
                                                *(undefined8 *)(puVar43 + -0x40) = 0x43c5148;
                                                bVar25 = UnityEngine_GameObject__get_activeSelf
                                                                   (pUVar29,(MethodInfo *)0x0);
                                                if ((char)bVar25 == '\0') {
                                                  pUVar18 = (UnityEngine_Component_o *)
                                                            __this_05->m_Items[0x3d];
                                                  if (pUVar18 != (UnityEngine_Component_o *)0x0) {
                                                    pIVar47 = (Il2CppClass *)0x0;
                                                    *(undefined8 *)(puVar43 + -0x40) = 0x43c5164;
                                                    pUVar29 = UnityEngine_Component__get_gameObject
                                                                        (pUVar18,(MethodInfo *)0x0);
                                                    if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                                                      pIVar47 = (Il2CppClass *)0x0;
                                                      *(undefined8 *)(puVar43 + -0x40) = 0x43c5177;
                                                      bVar25 = UnityEngine_GameObject__get_activeSelf
                                                                         (pUVar29,(MethodInfo *)0x0);
                                                      if ((char)bVar25 == '\0') {
                                                        return;
                                                      }
                                                      goto label_043c517b;
                                                    }
                                                  }
                                                }
                                                else {
label_043c517b:
                                                  if (0.0 < *(float *)((long)__this_05->m_Items + 0x104)) {
                                                    return;
                                                  }
                                                  pUVar18 = (UnityEngine_Component_o *)
                                                            __this_05->m_Items[0x3c];
                                                  if (pUVar18 != (UnityEngine_Component_o *)0x0) {
                                                    pIVar47 = (Il2CppClass *)0x0;
                                                    *(undefined8 *)(puVar43 + -0x40) = 0x43c51b0;
                                                    pUVar29 = UnityEngine_Component__get_gameObject
                                                                        (pUVar18,(MethodInfo *)0x0);
                                                    if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                                                      pIVar47 = (Il2CppClass *)0x0;
                                                      *(undefined8 *)(puVar43 + -0x40) = 0x43c51c5;
                                                      UnityEngine_GameObject__SetActive
                                                                (pUVar29,0,(MethodInfo *)0x0);
                                                      pUVar18 = (UnityEngine_Component_o *)
                                                                __this_05->m_Items[0x3d];
                                                      if (pUVar18 != (UnityEngine_Component_o *)0x0) {
                                                        pIVar47 = (Il2CppClass *)0x0;
                                                        *(undefined8 *)(puVar43 + -0x40) = 0x43c51dd;
                                                        pUVar29 = UnityEngine_Component__get_gameObject
                                                                            (pUVar18,(MethodInfo *)0x0);
                                                        if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                                                          pIVar47 = (Il2CppClass *)0x0;
                                                          *(undefined8 *)(puVar43 + -0x40) = 0x43c51f2;
                                                          UnityEngine_GameObject__SetActive
                                                                    (pUVar29,0,(MethodInfo *)0x0);
                                                          pUVar18 = (UnityEngine_Component_o *)
                                                                    __this_05->m_Items[0x39];
                                                          if (pUVar18 != (UnityEngine_Component_o *)0x0) {
                                                            pIVar47 = (Il2CppClass *)0x0;
                                                            *(undefined8 *)(puVar43 + -0x40) = 0x43c520a;
                                                            pUVar29 = UnityEngine_Component__get_gameObject
                                                                                (pUVar18,(MethodInfo *)0x0);
                                                            if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                                                              bVar55 = 0 < *(int *)(pSVar53->m_Items + 5);
                                                              pIVar47 = (Il2CppClass *)(ulong)bVar55;
                                                              *(undefined8 *)(puVar43 + -0x40) = 0x43c5228;
                                                              UnityEngine_GameObject__SetActive
                                                                        (pUVar29,(uint)bVar55,
                                                                         (MethodInfo *)0x0);
                                                              pUVar18 = (UnityEngine_Component_o *)
                                                                        __this_05->m_Items[0x38];
                                                              if (pUVar18 != (UnityEngine_Component_o *)0x0) {
                                                                pIVar47 = (Il2CppClass *)0x0;
                                                                *(undefined8 *)(puVar43 + -0x40) = 0x43c5240;
                                                                pUVar29 = 
                                                       UnityEngine_Component__get_gameObject
                                                                 (pUVar18,(MethodInfo *)0x0);
                                                       if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                                                         bVar55 = 1 < *(int *)(pSVar53->m_Items + 5);
                                                         pIVar47 = (Il2CppClass *)(ulong)bVar55;
                                                         *(undefined8 *)(puVar43 + -0x40) = 0x43c525a;
                                                         UnityEngine_GameObject__SetActive
                                                                   (pUVar29,(uint)bVar55,(MethodInfo *)0x0);
                                                         pUVar18 = (UnityEngine_Component_o *)
                                                                   __this_05->m_Items[0x3b];
                                                         if (pUVar18 != (UnityEngine_Component_o *)0x0) {
                                                           pIVar47 = (Il2CppClass *)0x0;
                                                           *(undefined8 *)(puVar43 + -0x40) = 0x43c526e;
                                                           pUVar29 = UnityEngine_Component__get_gameObject
                                                                               (pUVar18,(MethodInfo *)0x0);
                                                           if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                                                             bVar55 = *(int *)(pSVar53->m_Items + 5) < 1;
                                                             pIVar47 = (Il2CppClass *)(ulong)bVar55;
                                                             *(undefined8 *)(puVar43 + -0x40) = 0x43c5288;
                                                             UnityEngine_GameObject__SetActive
                                                                       (pUVar29,(uint)bVar55,(MethodInfo *)0x0
                                                                       );
                                                             pUVar18 = (UnityEngine_Component_o *)
                                                                       __this_05->m_Items[0x3a];
                                                             if (pUVar18 != (UnityEngine_Component_o *)0x0) {
                                                               pIVar47 = (Il2CppClass *)0x0;
                                                               *(undefined8 *)(puVar43 + -0x40) = 0x43c529c;
                                                               pUVar29 = UnityEngine_Component__get_gameObject
                                                                                   (pUVar18,(MethodInfo *)0x0)
                                                               ;
                                                               if (pUVar29 != (UnityEngine_GameObject_o *)0x0)
                                                               {
                                                                 UnityEngine_GameObject__SetActive
                                                                           (pUVar29,(uint)(*(int *)(pSVar53->
                                                       m_Items + 5) < 2),(MethodInfo *)0x0);
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
                                                  }
                                                }
                                              }
                                            }
                                          }
                                          else {
                                            pUVar18 = (UnityEngine_Component_o *)__this_05->m_Items[0x3f];
                                            if (pUVar18 != (UnityEngine_Component_o *)0x0) {
                                              pIVar47 = (Il2CppClass *)0x0;
                                              *(undefined8 *)(puVar43 + -0x40) = 0x43c50d8;
                                              pUVar29 = UnityEngine_Component__get_gameObject
                                                                  (pUVar18,(MethodInfo *)0x0);
                                              if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                                                pIVar47 = (Il2CppClass *)0x0;
                                                *(undefined8 *)(puVar43 + -0x40) = 0x43c50ed;
                                                UnityEngine_GameObject__SetActive(pUVar29,0,(MethodInfo *)0x0)
                                                ;
                                                pUVar18 = (UnityEngine_Component_o *)__this_05->m_Items[0x3b];
                                                if (pUVar18 != (UnityEngine_Component_o *)0x0) {
                                                  pIVar47 = (Il2CppClass *)0x0;
                                                  *(undefined8 *)(puVar43 + -0x40) = 0x43c5105;
                                                  pUVar29 = UnityEngine_Component__get_gameObject
                                                                      (pUVar18,(MethodInfo *)0x0);
                                                  if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                                                    pIVar47 = (Il2CppClass *)0x1;
                                                    *(undefined8 *)(puVar43 + -0x40) = 0x43c511d;
                                                    UnityEngine_GameObject__SetActive
                                                              (pUVar29,1,(MethodInfo *)0x0);
                                                    goto label_043c511d;
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                    else {
                                      pUVar18 = (UnityEngine_Component_o *)__this_05->m_Items[0x3e];
                                      if (pUVar18 != (UnityEngine_Component_o *)0x0) {
                                        pIVar47 = (Il2CppClass *)0x0;
                                        *(undefined8 *)(puVar43 + -0x40) = 0x43c503e;
                                        pUVar29 = UnityEngine_Component__get_gameObject
                                                            (pUVar18,(MethodInfo *)0x0);
                                        if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                                          pIVar47 = (Il2CppClass *)0x0;
                                          *(undefined8 *)(puVar43 + -0x40) = 0x43c5053;
                                          UnityEngine_GameObject__SetActive(pUVar29,0,(MethodInfo *)0x0);
                                          pUVar18 = (UnityEngine_Component_o *)__this_05->m_Items[0x3a];
                                          if (pUVar18 != (UnityEngine_Component_o *)0x0) {
                                            pIVar47 = (Il2CppClass *)0x0;
                                            *(undefined8 *)(puVar43 + -0x40) = 0x43c506b;
                                            pUVar29 = UnityEngine_Component__get_gameObject
                                                                (pUVar18,(MethodInfo *)0x0);
                                            if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                                              pIVar47 = (Il2CppClass *)0x1;
                                              *(undefined8 *)(puVar43 + -0x40) = 0x43c5083;
                                              UnityEngine_GameObject__SetActive(pUVar29,1,(MethodInfo *)0x0);
                                              goto label_043c5083;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                              else {
                                pUVar18 = (UnityEngine_Component_o *)__this_05->m_Items[0x3b];
                                if (pUVar18 != (UnityEngine_Component_o *)0x0) {
                                  pIVar47 = (Il2CppClass *)0x0;
                                  *(undefined8 *)(puVar43 + -0x40) = 0x43c4fa4;
                                  pUVar29 = UnityEngine_Component__get_gameObject(pUVar18,(MethodInfo *)0x0);
                                  if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                                    pIVar47 = (Il2CppClass *)0x0;
                                    *(undefined8 *)(puVar43 + -0x40) = 0x43c4fb9;
                                    UnityEngine_GameObject__SetActive(pUVar29,0,(MethodInfo *)0x0);
                                    pUVar18 = (UnityEngine_Component_o *)__this_05->m_Items[0x39];
                                    if (pUVar18 != (UnityEngine_Component_o *)0x0) {
                                      pIVar47 = (Il2CppClass *)0x0;
                                      *(undefined8 *)(puVar43 + -0x40) = 0x43c4fd1;
                                      pUVar29 = UnityEngine_Component__get_gameObject
                                                          (pUVar18,(MethodInfo *)0x0);
                                      if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                                        pIVar47 = (Il2CppClass *)0x1;
                                        *(undefined8 *)(puVar43 + -0x40) = 0x43c4fe9;
                                        UnityEngine_GameObject__SetActive(pUVar29,1,(MethodInfo *)0x0);
                                        goto label_043c4fe9;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                        else {
                          pUVar18 = (UnityEngine_Component_o *)__this_05->m_Items[0x3a];
                          if (pUVar18 != (UnityEngine_Component_o *)0x0) {
                            pIVar47 = (Il2CppClass *)0x0;
                            *(undefined8 *)(puVar43 + -0x40) = 0x43c4f11;
                            pUVar29 = UnityEngine_Component__get_gameObject(pUVar18,(MethodInfo *)0x0);
                            if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                              pIVar47 = (Il2CppClass *)0x0;
                              *(undefined8 *)(puVar43 + -0x40) = 0x43c4f26;
                              UnityEngine_GameObject__SetActive(pUVar29,0,(MethodInfo *)0x0);
                              pUVar18 = (UnityEngine_Component_o *)__this_05->m_Items[0x38];
                              if (pUVar18 != (UnityEngine_Component_o *)0x0) {
                                pIVar47 = (Il2CppClass *)0x0;
                                *(undefined8 *)(puVar43 + -0x40) = 0x43c4f3e;
                                pUVar29 = UnityEngine_Component__get_gameObject(pUVar18,(MethodInfo *)0x0);
                                if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                                  pIVar47 = (Il2CppClass *)0x1;
                                  *(undefined8 *)(puVar43 + -0x40) = 0x43c4f56;
                                  UnityEngine_GameObject__SetActive(pUVar29,1,(MethodInfo *)0x0);
                                  goto label_043c4f56;
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
          }
        }
        goto label_043c52c4;
      }
    }
    *(undefined8 *)(puVar43 + -0x40) = 0x43c52d1;
    pSVar51 = pSVar53;
    il2cpp_runtime_helper_022b2fd0();
    *(System_Object_array **)(puVar43 + -0x40) = pSVar50;
    *(System_Object_array **)(puVar43 + -0x48) = pSVar53;
    *(Il2CppClass **)(puVar43 + -0x50) = unaff_R13;
    *(System_Object_array **)(puVar43 + -0x58) = __this_05;
    *(System_Object_array **)(puVar43 + -0x60) = __this_04;
    puVar44 = puVar43 + -0x70;
    if (g_data_057ae3e4 == '\0') {
      *(undefined8 *)(puVar43 + -0x78) = 0x43c5305;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Animator_GetComponent_Animator);
      *(undefined8 *)(puVar43 + -0x78) = 0x43c5311;
      il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
      *(undefined8 *)(puVar43 + -0x78) = 0x43c531d;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ThunderspearWeapon);
      *(undefined8 *)(puVar43 + -0x78) = 0x43c5329;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
      g_data_057ae3e4 = '\x01';
    }
    if (pSVar51->m_Items[0x1d] == (Il2CppObject *)0x0) {
label_043c5986:
      *(undefined8 *)(puVar43 + -0x78) = 0x43c598b;
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      pSVar50 = (System_Object_array *)pSVar51->m_Items[0x1d][0x10].klass;
      if (pSVar50 == (System_Object_array *)0x0) {
label_043c537e:
        lVar33 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
        if ((lVar33 != 0) &&
           (((lVar33 = *(long *)(lVar33 + 0x58), lVar33 != 0 &&
             (lVar33 = *(long *)(lVar33 + 0x48), lVar33 != 0)) && (pSVar50 != (System_Object_array *)0x0)))) {
          if (*(char *)(lVar33 + 0x11) == '\0') {
            iVar26 = *(bool_conflict *)((long)((Il2CppType *)pSVar50->m_Items + 2) + 4);
            fVar58 = (((UnityEngine_Vector4_o *)((long)((Il2CppType *)pSVar50->m_Items + 2) + 8))->fields).x;
            if (iVar26 < 1) {
              if (fVar58 == -NAN) {
                fVar58 = 1.0;
                pUVar19 = (UnityEngine_UI_Image_o *)pSVar51->m_Items[0x31];
              }
              else {
                fVar58 = 0.0;
                pUVar19 = (UnityEngine_UI_Image_o *)pSVar51->m_Items[0x31];
              }
            }
            else {
              fVar58 = (float)(int)fVar58 / (float)iVar26;
              pUVar19 = (UnityEngine_UI_Image_o *)pSVar51->m_Items[0x31];
            }
            if (pUVar19 != (UnityEngine_UI_Image_o *)0x0) {
              __this_04 = (System_Object_array *)pSVar51->m_Items[0x30];
              pIVar47 = (Il2CppClass *)0x0;
              *(float *)(puVar43 + -100) = fVar58;
              *(undefined8 *)(puVar43 + -0x78) = 0x43c5631;
              UnityEngine_UI_Image__set_fillAmount(pUVar19,fVar58,(MethodInfo *)0x0);
              if (__this_04 != (System_Object_array *)0x0) {
                pIVar47 = (Il2CppClass *)0x0;
                *(undefined8 *)(puVar43 + -0x78) = 0x43c564a;
                UnityEngine_UI_Image__set_fillAmount
                          ((UnityEngine_UI_Image_o *)__this_04,*(float *)(puVar43 + -100),(MethodInfo *)0x0);
                if (*(float *)(puVar43 + -100) <= 0.0) {
                  if (pSVar51->m_Items[0x40] != (Il2CppObject *)0x0) {
                    pIVar52 = pSVar51->m_Items[6];
                    pIVar39 = pSVar51->m_Items[0x40]->klass;
                    pIVar47 = (Il2CppClass *)pIVar39->vtable[0x17].method;
                    vtableDispatch = pIVar39->vtable[0x17].methodPtr;
                    *(undefined8 *)(puVar43 + -0x78) = 0x43c56ee;
                    (*vtableDispatch)((int)pIVar52);
                    pIVar52 = pSVar51->m_Items[0x42];
                    if (pIVar52 != (Il2CppObject *)0x0) {
                      uVar59 = SUB84(pSVar51->m_Items[6],0);
                      goto label_043c574d;
                    }
                  }
                }
                else {
                  pIVar52 = pSVar51->m_Items[0x40];
                  if (*(float *)(puVar43 + -100) <= 0.5) {
                    if (pIVar52 != (Il2CppObject *)0x0) {
                      pIVar5 = pSVar51->m_Items[2];
                      pIVar47 = (Il2CppClass *)pIVar52->klass->vtable[0x17].method;
                      vtableDispatch = pIVar52->klass->vtable[0x17].methodPtr;
                      *(undefined8 *)(puVar43 + -0x78) = 0x43c5731;
                      (*vtableDispatch)((int)pIVar5);
                      pIVar52 = pSVar51->m_Items[0x42];
                      if (pIVar52 != (Il2CppObject *)0x0) {
                        uVar59 = SUB84(pSVar51->m_Items[2],0);
                        goto label_043c574d;
                      }
                    }
                  }
                  else if (pIVar52 != (Il2CppObject *)0x0) {
                    pIVar5 = pSVar51->m_Items[0xc];
                    pIVar47 = (Il2CppClass *)pIVar52->klass->vtable[0x17].method;
                    vtableDispatch = pIVar52->klass->vtable[0x17].methodPtr;
                    *(undefined8 *)(puVar43 + -0x78) = 0x43c569b;
                    (*vtableDispatch)((int)pIVar5);
                    pIVar52 = pSVar51->m_Items[0x42];
                    if (pIVar52 != (Il2CppObject *)0x0) {
                      uVar59 = SUB84(pSVar51->m_Items[0xc],0);
label_043c574d:
                      vtableDispatch = pIVar52->klass->vtable[0x17].methodPtr;
                      *(undefined8 *)(puVar43 + -0x78) = 0x43c575d;
                      (*vtableDispatch)(uVar59);
                      pIVar52 = pSVar51->m_Items[0x32];
                      __this_04 = (System_Object_array *)pSVar51->m_Items[0x33];
                      pSVar50 = (System_Object_array *)((Il2CppType *)pSVar50->m_Items + 2);
                      pIVar47 = (Il2CppClass *)0x0;
                      *(undefined8 *)(puVar43 + -0x78) = 0x43c5779;
                      pIVar39 = (Il2CppClass *)System_Int32__ToString((int32_t)pSVar50,(MethodInfo *)0x0);
                      if (__this_04 != (System_Object_array *)0x0) {
                        pUVar17 = ((Il2CppClass_1 *)&__this_04->obj)->image;
                        pMVar46 = (pUVar17->vtable)._75_unknown.method;
                        vtableDispatch = (pUVar17->vtable)._75_unknown.methodPtr;
                        *(undefined8 *)(puVar43 + -0x78) = 0x43c579b;
                        pIVar47 = pIVar39;
                        (*vtableDispatch)(__this_04,pIVar39,pMVar46);
                        if (pIVar52 != (Il2CppObject *)0x0) {
                          pMVar46 = pIVar52->klass->vtable[0x4b].method;
                          vtableDispatch = pIVar52->klass->vtable[0x4b].methodPtr;
                          *(undefined8 *)(puVar43 + -0x78) = 0x43c57bb;
                          (*vtableDispatch)(pIVar52,pIVar39,pMVar46);
                          pIVar52 = pSVar51->m_Items[0x32];
                          pIVar47 = pIVar39;
                          if (*(int *)&((Il2CppClass_1 *)&pSVar50->obj)->image == 0) {
                            if (pIVar52 != (Il2CppObject *)0x0) {
                              pIVar47 = (Il2CppClass *)pIVar52->klass->vtable[0x17].method;
                              vtableDispatch = pIVar52->klass->vtable[0x17].methodPtr;
                              *(undefined8 *)(puVar43 + -0x78) = 0x43c5894;
                              (*vtableDispatch)(0x3f800000);
                              if (pSVar51->m_Items[0x33] != (Il2CppObject *)0x0) {
                                pIVar39 = pSVar51->m_Items[0x33]->klass;
                                pIVar47 = (Il2CppClass *)pIVar39->vtable[0x17].method;
                                vtableDispatch = pIVar39->vtable[0x17].methodPtr;
                                *(undefined8 *)(puVar43 + -0x78) = 0x43c58c3;
                                (*vtableDispatch)(0x3f800000);
                                pUVar18 = (UnityEngine_Component_o *)pSVar51->m_Items[0x40];
                                goto joined_r0x043c58cd;
                              }
                            }
                          }
                          else if (pIVar52 != (Il2CppObject *)0x0) {
                            pIVar47 = (Il2CppClass *)pIVar52->klass->vtable[0x17].method;
                            vtableDispatch = pIVar52->klass->vtable[0x17].methodPtr;
                            *(undefined8 *)(puVar43 + -0x78) = 0x43c57ef;
                            (*vtableDispatch)();
                            if (pSVar51->m_Items[0x33] != (Il2CppObject *)0x0) {
                              pIVar39 = pSVar51->m_Items[0x33]->klass;
                              pIVar47 = (Il2CppClass *)pIVar39->vtable[0x17].method;
                              vtableDispatch = pIVar39->vtable[0x17].methodPtr;
                              *(undefined8 *)(puVar43 + -0x78) = 0x43c5819;
                              (*vtableDispatch)();
                              pUVar18 = (UnityEngine_Component_o *)pSVar51->m_Items[0x40];
joined_r0x043c58cd:
                              if (pUVar18 != (UnityEngine_Component_o *)0x0) {
                                pIVar47 = (Il2CppClass *)0x0;
                                *(undefined8 *)(puVar43 + -0x78) = 0x43c5830;
                                pUVar29 = UnityEngine_Component__get_gameObject(pUVar18,(MethodInfo *)0x0);
                                if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                                  pIVar47 = (Il2CppClass *)0x0;
                                  *(undefined8 *)(puVar43 + -0x78) = 0x43c5843;
                                  bVar25 = UnityEngine_GameObject__get_activeSelf(pUVar29,(MethodInfo *)0x0);
                                  if ((char)bVar25 != '\0') {
                                    return;
                                  }
                                  if (0.0 < *(float *)((long)pSVar51->m_Items + 0x104)) {
                                    return;
                                  }
                                  if (0.0 < *(float *)(pSVar51->m_Items + 0x21)) {
                                    return;
                                  }
                                  pUVar18 = (UnityEngine_Component_o *)pSVar51->m_Items[0x40];
                                  if (pUVar18 != (UnityEngine_Component_o *)0x0) {
                                    pIVar47 = (Il2CppClass *)0x0;
                                    *(undefined8 *)(puVar43 + -0x78) = 0x43c58ef;
                                    pUVar29 = UnityEngine_Component__get_gameObject(pUVar18,(MethodInfo *)0x0)
                                    ;
                                    if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                                      pIVar47 = (Il2CppClass *)0x1;
                                      *(undefined8 *)(puVar43 + -0x78) = 0x43c5907;
                                      UnityEngine_GameObject__SetActive(pUVar29,1,(MethodInfo *)0x0);
                                      pUVar18 = (UnityEngine_Component_o *)pSVar51->m_Items[0x41];
                                      if (pUVar18 != (UnityEngine_Component_o *)0x0) {
                                        pIVar47 = (Il2CppClass *)0x0;
                                        *(undefined8 *)(puVar43 + -0x78) = 0x43c591a;
                                        pUVar29 = UnityEngine_Component__get_gameObject
                                                            (pUVar18,(MethodInfo *)0x0);
                                        if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                                          pIVar47 = (Il2CppClass *)0x0;
                                          *(undefined8 *)(puVar43 + -0x78) = 0x43c592b;
                                          UnityEngine_GameObject__SetActive(pUVar29,0,(MethodInfo *)0x0);
                                          pUVar18 = (UnityEngine_Component_o *)pSVar51->m_Items[0x42];
                                          if (pUVar18 != (UnityEngine_Component_o *)0x0) {
                                            pIVar47 = (Il2CppClass *)0x0;
                                            *(undefined8 *)(puVar43 + -0x78) = 0x43c593e;
                                            pUVar29 = UnityEngine_Component__get_gameObject
                                                                (pUVar18,(MethodInfo *)0x0);
                                            if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                                              pIVar47 = (Il2CppClass *)0x0;
                                              *(undefined8 *)(puVar43 + -0x78) = 0x43c594f;
                                              UnityEngine_GameObject__SetActive(pUVar29,0,(MethodInfo *)0x0);
                                              pUVar18 = (UnityEngine_Component_o *)pSVar51->m_Items[0x30];
                                              if (pUVar18 != (UnityEngine_Component_o *)0x0) {
                                                pIVar47 = (Il2CppClass *)0x0;
                                                *(undefined8 *)(puVar43 + -0x78) = 0x43c5962;
                                                pUVar29 = UnityEngine_Component__get_gameObject
                                                                    (pUVar18,(MethodInfo *)0x0);
                                                if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                                                  pIVar47 = (Il2CppClass *)0x1;
                                                  *(undefined8 *)(puVar43 + -0x78) = 0x43c5976;
                                                  UnityEngine_GameObject__SetActive
                                                            (pUVar29,1,(MethodInfo *)0x0);
                                                  pUVar18 = (UnityEngine_Component_o *)pSVar51->m_Items[0x31];
                                                  goto joined_r0x043c5980;
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
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            pIVar47 = (Il2CppClass *)0x0;
            *(undefined8 *)(puVar43 + -0x78) = 0x43c53d3;
            fVar58 = Characters_BaseUseable__GetCooldownRatio
                               ((Characters_BaseUseable_o *)pSVar50,(MethodInfo *)0x0);
            *(float *)(puVar43 + -100) = fVar58;
            pUVar19 = (UnityEngine_UI_Image_o *)pSVar51->m_Items[0x46];
            if (pUVar19 != (UnityEngine_UI_Image_o *)0x0) {
              __this_04 = (System_Object_array *)pSVar51->m_Items[0x45];
              pIVar47 = (Il2CppClass *)0x0;
              *(undefined8 *)(puVar43 + -0x78) = 0x43c53fd;
              UnityEngine_UI_Image__set_fillAmount(pUVar19,*(float *)(puVar43 + -100),(MethodInfo *)0x0);
              if (__this_04 != (System_Object_array *)0x0) {
                pIVar47 = (Il2CppClass *)0x0;
                *(undefined8 *)(puVar43 + -0x78) = 0x43c5416;
                UnityEngine_UI_Image__set_fillAmount
                          ((UnityEngine_UI_Image_o *)__this_04,*(float *)(puVar43 + -100),(MethodInfo *)0x0);
                if (((bool)*(char *)(pSVar51->m_Items + 0x47) ==
                     (*(float *)(puVar43 + -100) <= 1.0 && *(float *)(puVar43 + -100) != 1.0)) ||
                   (bVar55 = *(float *)(puVar43 + -100) != 1.0, bVar20 = *(float *)(puVar43 + -100) <= 1.0,
                   *(bool *)(pSVar51->m_Items + 0x47) = bVar20 && bVar55, bVar20 && bVar55)) {
label_043c5518:
                  pUVar18 = (UnityEngine_Component_o *)pSVar51->m_Items[0x43];
                  if (pUVar18 != (UnityEngine_Component_o *)0x0) {
                    pIVar47 = (Il2CppClass *)0x0;
                    *(undefined8 *)(puVar43 + -0x78) = 0x43c552f;
                    pUVar29 = UnityEngine_Component__get_gameObject(pUVar18,(MethodInfo *)0x0);
                    if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                      pIVar47 = (Il2CppClass *)0x0;
                      *(undefined8 *)(puVar43 + -0x78) = 0x43c5542;
                      bVar25 = UnityEngine_GameObject__get_activeSelf(pUVar29,(MethodInfo *)0x0);
                      if (((char)bVar25 != '\0') || (0.0 < *(float *)((long)pSVar51->m_Items + 0x104))) {
                        return;
                      }
                      pUVar18 = (UnityEngine_Component_o *)pSVar51->m_Items[0x44];
                      if (pUVar18 != (UnityEngine_Component_o *)0x0) {
                        pIVar47 = (Il2CppClass *)0x0;
                        *(undefined8 *)(puVar43 + -0x78) = 0x43c5572;
                        pUVar29 = UnityEngine_Component__get_gameObject(pUVar18,(MethodInfo *)0x0);
                        if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                          pIVar47 = (Il2CppClass *)0x0;
                          *(undefined8 *)(puVar43 + -0x78) = 0x43c5587;
                          UnityEngine_GameObject__SetActive(pUVar29,0,(MethodInfo *)0x0);
                          pUVar18 = (UnityEngine_Component_o *)pSVar51->m_Items[0x43];
joined_r0x043c5980:
                          if (pUVar18 != (UnityEngine_Component_o *)0x0) {
                            pIVar47 = (Il2CppClass *)0x0;
                            *(undefined8 *)(puVar43 + -0x78) = 0x43c559e;
                            pUVar29 = UnityEngine_Component__get_gameObject(pUVar18,(MethodInfo *)0x0);
                            if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                              UnityEngine_GameObject__SetActive(pUVar29,1,(MethodInfo *)0x0);
                              return;
                            }
                          }
                        }
                      }
                    }
                  }
                }
                else {
                  pUVar18 = (UnityEngine_Component_o *)pSVar51->m_Items[0x44];
                  if (pUVar18 != (UnityEngine_Component_o *)0x0) {
                    pIVar47 = (Il2CppClass *)0x0;
                    *(undefined8 *)(puVar43 + -0x78) = 0x43c5462;
                    pUVar29 = UnityEngine_Component__get_gameObject(pUVar18,(MethodInfo *)0x0);
                    if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                      pIVar47 = (Il2CppClass *)0x0;
                      *(undefined8 *)(puVar43 + -0x78) = 0x43c5475;
                      bVar25 = UnityEngine_GameObject__get_activeSelf(pUVar29,(MethodInfo *)0x0);
                      if ((char)bVar25 != '\0') goto label_043c5518;
                      pUVar18 = (UnityEngine_Component_o *)pSVar51->m_Items[0x43];
                      if (pUVar18 != (UnityEngine_Component_o *)0x0) {
                        pIVar47 = (Il2CppClass *)0x0;
                        *(undefined8 *)(puVar43 + -0x78) = 0x43c5494;
                        pUVar29 = UnityEngine_Component__get_gameObject(pUVar18,(MethodInfo *)0x0);
                        if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                          pIVar47 = (Il2CppClass *)0x0;
                          *(undefined8 *)(puVar43 + -0x78) = 0x43c54a9;
                          UnityEngine_GameObject__SetActive(pUVar29,0,(MethodInfo *)0x0);
                          pUVar18 = (UnityEngine_Component_o *)pSVar51->m_Items[0x44];
                          if (pUVar18 != (UnityEngine_Component_o *)0x0) {
                            pIVar47 = (Il2CppClass *)0x0;
                            *(undefined8 *)(puVar43 + -0x78) = 0x43c54c0;
                            pUVar29 = UnityEngine_Component__get_gameObject(pUVar18,(MethodInfo *)0x0);
                            if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                              pIVar47 = (Il2CppClass *)0x1;
                              *(undefined8 *)(puVar43 + -0x78) = 0x43c54d8;
                              UnityEngine_GameObject__SetActive(pUVar29,1,(MethodInfo *)0x0);
                              pUVar18 = (UnityEngine_Component_o *)pSVar51->m_Items[0x44];
                              if (pUVar18 != (UnityEngine_Component_o *)0x0) {
                                *(undefined8 *)(puVar43 + -0x78) = 0x43c54f7;
                                pIVar47 = MethodInfo_Animator_GetComponent_Animator;
                                pUVar30 = (UnityEngine_Animator_o *)
                                          UnityEngine_Component__GetComponent_object_
                                                    (pUVar18,(MethodInfo_24E7B40 *)MethodInfo_Animator_GetComponent_Animator);
                                if (pUVar30 != (UnityEngine_Animator_o *)0x0) {
                                  pIVar47 = (Il2CppClass *)0x0;
                                  *(undefined8 *)(puVar43 + -0x78) = 0x43c550d;
                                  UnityEngine_Animator__Update(pUVar30,0.0,(MethodInfo *)0x0);
                                  *(undefined4 *)((long)pSVar51->m_Items + 0x104) = 0x3f000000;
                                  goto label_043c5518;
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
          }
        }
        goto label_043c5986;
      }
      pUVar17 = ((Il2CppClass_1 *)&pSVar50->obj)->image;
      bVar6 = (TypeInfo_ThunderspearWeapon->_2).naturalAligment;
      pIVar47 = TypeInfo_ThunderspearWeapon;
      if ((bVar6 <= (pUVar17->_2).naturalAligment) &&
         ((pUVar17->_2).typeHierarchy[(ulong)bVar6 - 1] == TypeInfo_ThunderspearWeapon)) goto label_043c537e;
    }
    *(undefined8 *)(puVar43 + -0x78) = 0x43c5993;
    __this_05 = pSVar50;
    il2cpp_runtime_helper_022b2fd0();
  }
  *(System_Object_array **)(puVar44 + -8) = __this_04;
  lVar33 = *(long *)((long)((Il2CppType *)__this_05->m_Items + 0xf) + 8);
  pSVar53 = __this_05;
  if ((lVar33 != 0) &&
     (pSVar53 = ((Il2CppType *)__this_05->m_Items)[0x24].data, __this_04 = __this_05,
     pSVar53 != (System_Object_array *)0x0)) {
    fVar56 = *(float *)(lVar33 + 0x140) / *(float *)(lVar33 + 0x134);
    fVar58 = 1.0;
    if (fVar56 <= 1.0) {
      fVar58 = fVar56;
    }
    pUVar17 = ((Il2CppClass_1 *)&pSVar53->obj)->image;
    pIVar47 = (Il2CppClass *)(pUVar17->vtable)._47_CrossFadeColor.method;
    vtableDispatch = (pUVar17->vtable)._47_CrossFadeColor.methodPtr;
    *(undefined8 *)(puVar44 + -0x10) = 0x43c59fb;
    (*vtableDispatch)(-(uint)(0.0 <= fVar56) & (uint)fVar58);
    if (*(long *)((long)((Il2CppType *)__this_05->m_Items + 0xf) + 8) != 0) {
      pSVar53 = *(System_Object_array **)((long)((Il2CppType *)__this_05->m_Items + 0x24) + 8);
      if (*(float *)(*(long *)((long)((Il2CppType *)__this_05->m_Items + 0xf) + 8) + 0x140) <= 1.0) {
        if (pSVar53 != (System_Object_array *)0x0) {
          uVar59 = SUB84(((Il2CppType *)__this_05->m_Items)[9].data,0);
          uVar61 = SUB84(*(UnityEngine_UI_RectMask2D_o **)((long)((Il2CppType *)__this_05->m_Items + 9) + 8),0
                        );
          goto label_043c5a4b;
        }
      }
      else if (pSVar53 != (System_Object_array *)0x0) {
        uVar59 = SUB84(((Il2CppType *)__this_05->m_Items)[8].data,0);
        uVar61 = (undefined4)*(undefined8 *)((long)((Il2CppType *)__this_05->m_Items + 8) + 8);
label_043c5a4b:
        pUVar17 = ((Il2CppClass_1 *)&pSVar53->obj)->image;
        vtableDispatch = (pUVar17->vtable)._23_set_color.methodPtr;
        (*vtableDispatch)
                  (uVar59,uVar61,pSVar53,(pUVar17->vtable)._23_set_color.method,extraout_RDX,
                   vtableDispatch);
        return;
      }
    }
  }
  *(undefined8 *)(puVar44 + -0x10) = 0x43c5a64;
  il2cpp_runtime_helper_022b2c90();
  *(System_Object_array **)(puVar44 + -0x10) = pSVar50;
  *(System_Object_array **)(puVar44 + -0x18) = pSVar51;
  *(System_Object_array **)(puVar44 + -0x20) = __this_04;
  if (g_data_057ae3de == '\0') {
    *(undefined8 *)(puVar44 + -0x28) = 0x43c5a90;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Animator_GetComponent_Animator);
    *(undefined8 *)(puVar44 + -0x28) = 0x43c5a9c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    *(undefined8 *)(puVar44 + -0x28) = 0x43c5aa8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    *(undefined8 *)(puVar44 + -0x28) = 0x43c5ab4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Animator_get_Item);
    *(undefined8 *)(puVar44 + -0x28) = 0x43c5ac0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    g_data_057ae3de = '\x01';
  }
  pUVar29 = ((Il2CppType *)pSVar53->m_Items)[10].data;
  if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
    *(undefined8 *)(puVar44 + -0x28) = 0x43c5ae6;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)(puVar44 + -0x28) = 0x43c5af0;
  bVar25 = MiscExtensions__GetActive(pUVar29,(MethodInfo *)0x0);
  if ((char)bVar25 != '\0') {
    __this_06 = ((Il2CppType *)pSVar53->m_Items)[0x25].data;
    if (__this_06 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_043c5bc3;
    *(undefined8 *)(puVar44 + -0x28) = 0x43c5b1a;
    bVar25 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                       (__this_06,(Il2CppObject *)pIVar47,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar25 == '\0') {
      if (pIVar47 == (Il2CppClass *)0x0) goto label_043c5bc3;
      *(undefined8 *)(puVar44 + -0x28) = 0x43c5b61;
      pUVar30 = (UnityEngine_Animator_o *)
                UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pIVar47,(MethodInfo_24E7B40 *)MethodInfo_Animator_GetComponent_Animator);
      __this_06 = ((Il2CppType *)pSVar53->m_Items)[0x25].data;
      if (__this_06 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_043c5bc3;
      *(undefined8 *)(puVar44 + -0x28) = 0x43c5b85;
      System_Collections_Generic_Dictionary_object__object___Add
                (__this_06,(Il2CppObject *)pIVar47,(Il2CppObject *)pUVar30,MethodInfo_Void_Add);
      pUVar29 = (UnityEngine_GameObject_o *)0x0;
      if (pUVar30 == (UnityEngine_Animator_o *)0x0) goto label_043c5bc3;
    }
    else {
      __this_06 = ((Il2CppType *)pSVar53->m_Items)[0x25].data;
      if (__this_06 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_043c5bc3:
        *(undefined8 *)(puVar44 + -0x28) = 0x43c5bc8;
        uVar40 = il2cpp_runtime_helper_022b2c90();
        *(Il2CppClass **)(puVar44 + -0x28) = pIVar47;
        *(UnityEngine_GameObject_o **)(puVar44 + -0x30) = pUVar29;
        *(undefined8 *)(puVar44 + -0x38) = uVar40;
        if (g_data_057ae3e5 == '\0') {
          *(undefined8 *)(puVar44 + -0x40) = 0x43c5bec;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_UnityEngine_UI_Image_UnityEngine_Animator);
          *(undefined8 *)(puVar44 + -0x40) = 0x43c5bf8;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_Image_Animator);
          *(undefined8 *)(puVar44 + -0x40) = 0x43c5c04;
          il2cpp_runtime_helper_023445d0(&"");
          g_data_057ae3e5 = '\x01';
        }
        (__this_06->fields)._count = 0x3f800000;
        (__this_06->fields)._freeList = 0x3f000000;
        (__this_06->fields)._freeCount = 0;
        (__this_06->fields)._version = 0x3f000000;
        (__this_06->fields)._comparer =
             (System_Collections_Generic_IEqualityComparer_TKey__o *)0x3f4000003f800000;
        (__this_06->fields)._keys =
             (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x3f8000003f000000;
        (__this_06->fields)._values =
             (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x3f800000;
        (__this_06->fields)._syncRoot = (Il2CppObject *)0x3f00000000000000;
        __this_06[1].klass = (System_Collections_Generic_Dictionary_object__object__c *)0x3f0000003f800000;
        __this_06[1].monitor = (void *)0x3f8000003f000000;
        __this_06[1].fields._buckets = (System_Int32_array *)0x3f8000003f800000;
        __this_06[1].fields._entries =
             (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x3f0000003f800000;
        __this_06[1].fields._count = 0x3f800000;
        __this_06[1].fields._freeList = 0x3f800000;
        __this_06[1].fields._freeCount = 0x3f800000;
        __this_06[1].fields._version = 0x3f400000;
        *(undefined4 *)&__this_06[1].fields._comparer = 0x3f800000;
        *(undefined4 *)((long)&__this_06[1].fields._comparer + 4) = 0x3f800000;
        *(undefined4 *)&__this_06[1].fields._keys = 0x3f800000;
        *(undefined4 *)((long)&__this_06[1].fields._keys + 4) = 0x3f800000;
        __this_06[1].fields._values =
             (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x3e8000003f800000;
        __this_06[1].fields._syncRoot = (Il2CppObject *)0x3f8000003e800000;
        __this_06[2].klass = (System_Collections_Generic_Dictionary_object__object__c *)0x3f451eb83f451eb8;
        __this_06[2].monitor = (void *)0x3f8000003f451eb8;
        *(undefined4 *)&__this_06[2].fields._buckets = 0x3f451eb8;
        *(undefined4 *)((long)&__this_06[2].fields._buckets + 4) = 0x3f000000;
        *(undefined4 *)&__this_06[2].fields._entries = 0x3f000000;
        *(undefined4 *)((long)&__this_06[2].fields._entries + 4) = 0x3f800000;
        __this_06[3].monitor = "";
        *(undefined8 *)(puVar44 + -0x40) = 0x43c5ca5;
        il2cpp_runtime_helper_022b4080(&__this_06[3].monitor);
        __this_06[3].fields._buckets = "";
        *(undefined8 *)(puVar44 + -0x40) = 0x43c5cbb;
        il2cpp_runtime_helper_022b4080(&__this_06[3].fields);
        *(undefined8 *)(puVar44 + -0x40) = 0x43c5cca;
        __this_03 = (System_Collections_Generic_Dictionary_object__object__o *)
                    il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_Image_Animator);
        *(undefined8 *)(puVar44 + -0x40) = 0x43c5cdf;
        System_Collections_Generic_Dictionary_object__object____ctor(__this_03,MethodInfo_Dictionary_2_UnityEngine_UI_Image_UnityEngine_Animator);
        __this_06[7].fields._values =
             (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)__this_03;
        *(undefined8 *)(puVar44 + -0x40) = 0x43c5cf5;
        il2cpp_runtime_helper_022b4080(&__this_06[7].fields._values);
        UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_06,(MethodInfo *)0x0);
        return;
      }
      *(undefined8 *)(puVar44 + -0x28) = 0x43c5b40;
      pUVar30 = (UnityEngine_Animator_o *)
                System_Collections_Generic_Dictionary_object__object___get_Item
                          (__this_06,(Il2CppObject *)pIVar47,MethodInfo_Animator_get_Item);
      if (pUVar30 == (UnityEngine_Animator_o *)0x0) {
        pUVar29 = (UnityEngine_GameObject_o *)0x0;
        goto label_043c5bc3;
      }
    }
    *(undefined8 *)(puVar44 + -0x28) = 0x43c5b94;
    fVar58 = UnityEngine_Animator__get_speed(pUVar30,(MethodInfo *)0x0);
    if ((fVar58 != 0.0) || (NAN(fVar58))) {
      *(undefined8 *)(puVar44 + -0x28) = 0x43c5bab;
      UnityEngine_Animator__Update(pUVar30,0.0,(MethodInfo *)0x0);
      UnityEngine_Animator__set_speed(pUVar30,0.0,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Characters.AHSSWeapon$$Deactivate
// il2cpp: void Characters_AHSSWeapon__Deactivate (Characters_AHSSWeapon_o* __this, const MethodInfo* method);
// 0x42f9ad0

void Characters_AHSSWeapon__Deactivate(Characters_AHSSWeapon_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  System_String_o **ppSVar2;
  Il2CppObject *pIVar3;
  UnityEngine_Events_UnityAction_o *pUVar4;
  Il2CppObject *pIVar5;
  byte bVar6;
  byte bVar7;
  Characters_Human_o *pCVar8;
  Characters_HumanComponentCache_o *__this_00;
  Characters_HookUseable_o *pCVar9;
  Outline_o *pOVar10;
  System_Collections_Generic_List_string__o *pSVar11;
  Characters_BaseHitbox_o *__this_01;
  System_Collections_Generic_List_string__c *pSVar12;
  Il2CppRGCTXData *x;
  System_Action_Hashtable__o *__this_02;
  System_String_o *b;
  UnityEngine_UI_Image_o *pUVar13;
  MethodInfo_362C220 *pMVar14;
  code *pcVar15;
  Il2CppMethodPointer vtableDispatch;
  UnityEngine_UI_Image_c *pUVar16;
  UnityEngine_Component_o *pUVar17;
  UnityEngine_UI_Image_o *pUVar18;
  bool bVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  System_Collections_Generic_List_string__c *pSVar23;
  char cVar24;
  bool_conflict bVar25;
  int iVar26;
  uint uVar27;
  long *plVar28;
  System_Collections_Generic_List_string__c *animation;
  UnityEngine_GameObject_o *pUVar29;
  UnityEngine_Animator_o *pUVar30;
  System_String_o *pSVar31;
  UnityEngine_Texture2D_o *texture;
  System_String_o *pSVar32;
  long lVar33;
  undefined8 *puVar34;
  UnityEngine_Object_o *pUVar35;
  UnityEngine_Transform_o *pUVar36;
  Il2CppClass *pIVar37;
  void *pvVar38;
  Il2CppClass *pIVar39;
  undefined8 uVar40;
  System_Collections_Generic_Dictionary_object__object__o *__this_03;
  undefined8 extraout_RDX;
  System_Collections_Generic_List_string__c *unaff_RBX;
  System_Collections_Generic_List_object__o *pSVar41;
  System_Object_array *__this_04;
  undefined1 *puVar42;
  undefined1 *puVar43;
  int iVar44;
  undefined8 unaff_RBP;
  MethodInfo *pMVar45;
  Il2CppClass *pIVar46;
  Il2CppRuntimeInterfaceOffsetPair *pIVar47;
  System_Object_array *__this_05;
  System_Object_array *pSVar48;
  System_Object_array *pSVar49;
  Il2CppObject *pIVar50;
  System_Object_array *pSVar51;
  System_Collections_Generic_Dictionary_object__object__o *__this_06;
  long *unaff_R12;
  long *plVar52;
  Il2CppClass *unaff_R13;
  Characters_AHSSWeapon_o *unaff_R14;
  Characters_Human_o *unaff_R15;
  bool bVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float extraout_XMM0_Dc;
  undefined4 uVar57;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  float extraout_XMM0_Dc_03;
  float fVar58;
  undefined4 extraout_XMM0_Dc_04;
  float extraout_XMM0_Dd;
  undefined4 uVar59;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  float extraout_XMM0_Dd_03;
  undefined4 extraout_XMM0_Dd_04;
  undefined4 uVar60;
  undefined4 uVar61;
  ulong uVar62;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  float fVar66;
  UnityEngine_Quaternion_Fields UVar67;
  UnityEngine_Quaternion_o UVar68;
  undefined1 auVar69 [12];
  UnityEngine_Vector3_o UVar70;
  UnityEngine_Vector3_o euler;
  UnityEngine_Vector3_o forward;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o forward_00;
  UnityEngine_Vector3_o force;
  UnityEngine_Quaternion_o b_00;
  undefined1 auStack_b8 [8];
  float fStack_b0;
  float fStack_ac;
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  uint uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [8];
  float fStack_50;
  float fStack_4c;
  float fStack_3c;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  if (g_data_057adefa == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CapsuleCollider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterData);
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Radius");
    il2cpp_runtime_helper_023445d0(&"KnockbackForce");
    il2cpp_runtime_helper_023445d0(&"AHSS");
    g_data_057adefa = '\x01';
  }
  pCVar8 = (Characters_Human_o *)(__this->fields)._owner;
  animation = unaff_RBX;
  plVar52 = unaff_R12;
  pIVar39 = unaff_R13;
  auVar63 = _auStack_58;
  if (pCVar8 == (Characters_Human_o *)0x0) goto label_042fa582;
  bVar6 = (TypeInfo_Human->_2).naturalAligment;
  if (((pCVar8->klass->_2).naturalAligment < bVar6) ||
     ((pCVar8->klass->_2).typeHierarchy[(ulong)bVar6 - 1] != TypeInfo_Human)) {
label_042fa587:
    il2cpp_runtime_helper_022b2fd0(pCVar8);
    pSVar23 = animation;
label_042fa592:
    unaff_R13 = pIVar39;
    unaff_R12 = plVar52;
    unaff_RBX = pSVar23;
    il2cpp_runtime_helper_022b2fd0();
    if (g_data_057adefb == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
      il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
      g_data_057adefb = '\x01';
      if (*(int *)(TypeInfo_UIManager + 0xe4) != 0) goto label_042fa5c3;
label_042fa60a:
      il2cpp_runtime_helper_02337ed0();
      plVar52 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    }
    else {
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) goto label_042fa60a;
label_042fa5c3:
      plVar52 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    }
    if (plVar52 == (long *)0x0) {
label_042fa67f:
      il2cpp_runtime_helper_022b2c90();
      return;
    }
    if ((*(byte *)(*plVar52 + 0x130) < *(byte *)(TypeInfo_InGameMenu + 0x130)) ||
       (*(long *)(*(long *)(*plVar52 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameMenu + 0x130) * 8) != TypeInfo_InGameMenu
       )) {
      il2cpp_runtime_helper_022b2fd0();
      goto label_042fa67f;
    }
    pIVar47 = (Il2CppRuntimeInterfaceOffsetPair *)plVar52[0x16];
    if (pIVar47 == (Il2CppRuntimeInterfaceOffsetPair *)0x0) goto label_042fa67f;
    uVar27 = *(uint *)&(animation->_1).castClass;
    bVar53 = uVar27 < 2;
    register0x00000020 = (BADSPACEBASE *)auStack_b8;
    unaff_R14 = __this;
    unaff_R15 = pCVar8;
  }
  else {
    lVar33 = *(long *)&(pCVar8->fields).Dead;
    if ((lVar33 == 0) ||
       (pUVar36 = *(UnityEngine_Transform_o **)(lVar33 + 0x10), pUVar36 == (UnityEngine_Transform_o *)0x0))
    goto label_042fa582;
    uStack_88._0_4_ = (__this->fields)._target.fields.x;
    uStack_88._4_4_ = (__this->fields)._target.fields.y;
    uStack_80 = 0;
    uStack_78 = CONCAT44(uStack_78._4_4_,(__this->fields)._target.fields.z);
    UVar70 = UnityEngine_Transform__get_position(pUVar36,(MethodInfo *)0x0);
    fVar56 = UVar70.fields.x;
    fVar54 = UVar70.fields.y;
    fVar58 = extraout_XMM0_Dc;
    fVar55 = extraout_XMM0_Dd;
    fVar66 = UVar70.fields.z;
    if (g_data_057a6845 == '\0') {
      auStack_a8._0_4_ = UVar70.fields.z;
      fStack_b0 = extraout_XMM0_Dc;
      auStack_b8 = (undefined1  [8])UVar70.fields._0_8_;
      fStack_ac = extraout_XMM0_Dd;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a6845 = '\x01';
      fVar56 = (float)auStack_b8._0_4_;
      fVar54 = (float)auStack_b8._4_4_;
      fVar58 = fStack_b0;
      fVar55 = fStack_ac;
      fVar66 = (float)auStack_a8._0_4_;
    }
    auVar63._0_4_ = (float)uStack_88 - fVar56;
    auVar63._4_4_ = uStack_88._4_4_ - fVar54;
    auVar63._8_4_ = (float)uStack_80 - fVar58;
    auVar63._12_4_ = uStack_80._4_4_ - fVar55;
    plVar52 = &TypeInfo_Math;
    fVar56 = (float)uStack_78 - fVar66;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      auStack_68._0_4_ = (float)uStack_78 - fVar66;
      _auStack_58 = auVar63;
      il2cpp_runtime_helper_02337ed0();
      auVar63 = _auStack_58;
      fVar56 = (float)auStack_68._0_4_;
    }
    uVar57 = 0;
    uVar59 = 0;
    fVar54 = fVar56 * fVar56 + auVar63._4_4_ * auVar63._4_4_ + auVar63._0_4_ * auVar63._0_4_;
    if (fVar54 < 0.0) {
      auStack_68._0_4_ = fVar56;
      _auStack_58 = auVar63;
      fVar54 = sqrtf(fVar54);
      uVar57 = extraout_XMM0_Dc_00;
      uVar59 = extraout_XMM0_Dd_00;
      auVar63 = _auStack_58;
      fVar56 = (float)auStack_68._0_4_;
      if (fVar54 <= 1e-05) goto label_042f9c94;
label_042f9cfc:
      fVar56 = fVar56 / fVar54;
      auVar21._4_4_ = fVar54;
      auVar21._0_4_ = fVar54;
      auVar21._8_4_ = uVar57;
      auVar21._12_4_ = uVar59;
      auVar64 = divps(auVar63,auVar21);
      lVar33._0_4_ = (pCVar8->fields).Dead;
      lVar33._4_4_ = (pCVar8->fields).CustomDamageEnabled;
      auVar63 = _auStack_58;
    }
    else {
      fVar54 = SQRT(fVar54);
      if (1e-05 < fVar54) goto label_042f9cfc;
label_042f9c94:
      if (g_data_057a65d5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a65d5 = '\x01';
      }
      auVar64._8_8_ = 0;
      auVar64._0_8_ = **(ulong **)(TypeInfo_Vector3 + 0xb8);
      fVar56 = *(float *)(*(ulong **)(TypeInfo_Vector3 + 0xb8) + 1);
      lVar33._0_4_ = (pCVar8->fields).Dead;
      lVar33._4_4_ = (pCVar8->fields).CustomDamageEnabled;
      auVar63 = _auStack_58;
    }
    _auStack_58 = auVar64;
    if (lVar33 == 0) {
label_042fa582:
      _auStack_58 = auVar63;
      il2cpp_runtime_helper_022b2c90();
      goto label_042fa587;
    }
    auStack_68._0_4_ = fVar56;
    auVar63 = _auStack_58;
    if (*(UnityEngine_Transform_o **)(lVar33 + 0x10) == (UnityEngine_Transform_o *)0x0) goto label_042fa582;
    UVar70 = UnityEngine_Transform__get_forward
                       (*(UnityEngine_Transform_o **)(lVar33 + 0x10),(MethodInfo *)0x0);
    cVar24 = *(char *)((long)&(pCVar8->fields).Animation + 4);
    animation = (System_Collections_Generic_List_string__c *)CONCAT71((int7)((ulong)unaff_RBX >> 8),cVar24);
    auStack_a8._0_4_ = 0;
    auStack_a8._4_4_ = 0;
    uStack_a0._0_4_ = (float)0;
    uStack_a0._4_4_ = (float)0;
    if (cVar24 != '\0') {
      auStack_a8._0_4_ = (float)uStack_88;
      auStack_a8._4_4_ = uStack_88._4_4_;
      uStack_a0._0_4_ = (float)uStack_80;
      uStack_a0._4_4_ = uStack_80._4_4_;
    }
    _auStack_b8 = ZEXT816(0);
    if (cVar24 == '\0') {
      uStack_38 = uStack_88;
      uStack_30 = uStack_80;
      uStack_8c = (uint)(float)uStack_78;
    }
    else {
      uStack_8c = 0;
      uStack_38 = 0;
      uStack_30 = 0;
      _auStack_b8 = ZEXT416((uint)(float)uStack_78);
    }
    __this_00 = (pCVar8->fields).HumanCache;
    auVar63 = _auStack_58;
    if (__this_00 == (Characters_HumanComponentCache_o *)0x0) goto label_042fa582;
    fStack_3c = UVar70.fields.z * (float)auStack_58._0_4_ - UVar70.fields.x * (float)auStack_68._0_4_;
    bVar25 = Characters_HookUseable__IsHooked((Characters_HookUseable_o *)__this_00,(MethodInfo *)0x0);
    auVar63 = _auStack_58;
    if (cVar24 == '\0') {
      if ((char)bVar25 == '\0') {
        uStack_88 = uStack_38;
        uStack_80 = uStack_30;
        uStack_78 = CONCAT44(uStack_78._4_4_,uStack_8c);
        uVar57 = (undefined4)uStack_38;
        uVar59 = uStack_38._4_4_;
        uVar60 = (undefined4)uStack_30;
        uVar61 = uStack_30._4_4_;
        uVar27 = uStack_8c;
        if (0.0 <= fStack_3c) goto label_042f9e66;
label_042f9e8c:
        lVar33 = 0x100;
        if (*(int *)(TypeInfo_HumanAnimations + 0xe4) != 0) {
          auStack_a8._4_4_ = uVar59;
          auStack_a8._0_4_ = uVar57;
          uStack_a0._0_4_ = (float)uVar60;
          uStack_a0._4_4_ = (float)uVar61;
          _auStack_b8 = ZEXT416(uVar27);
          goto label_042f9f5a;
        }
        uStack_38 = CONCAT44(uVar59,uVar57);
        uStack_30 = CONCAT44(uVar61,uVar60);
        uStack_8c = uVar27;
        il2cpp_runtime_helper_02337ed0();
        uStack_a0 = uStack_30;
        auStack_a8 = (undefined1  [8])uStack_38;
        uVar27 = uStack_8c;
      }
      else {
label_042f9e66:
        pCVar9 = (Characters_HookUseable_o *)(pCVar8->fields).Special;
        if (pCVar9 == (Characters_HookUseable_o *)0x0) goto label_042fa582;
        bVar25 = Characters_HookUseable__IsHooked(pCVar9,(MethodInfo *)0x0);
        if ((char)bVar25 != '\0') {
          uVar57 = (float)uStack_88;
          uVar59 = uStack_88._4_4_;
          uVar60 = (float)uStack_80;
          uVar61 = uStack_80._4_4_;
          uVar27 = (uint)(float)uStack_78;
          goto label_042f9e8c;
        }
        lVar33 = 0xf8;
        if (*(int *)(TypeInfo_HumanAnimations + 0xe4) != 0) {
          uStack_a0 = uStack_80;
          auStack_a8 = (undefined1  [8])uStack_88;
          uVar27 = (uint)(float)uStack_78;
          goto label_042f9f56;
        }
label_042f9f3d:
        il2cpp_runtime_helper_02337ed0();
label_042f9f4b:
        auStack_a8._4_4_ = uStack_88._4_4_;
        auStack_a8._0_4_ = (float)uStack_88;
        uStack_a0._0_4_ = (float)uStack_80;
        uStack_a0._4_4_ = uStack_80._4_4_;
        uVar27 = (uint)(float)uStack_78;
      }
label_042f9f56:
      _auStack_b8 = ZEXT416(uVar27);
    }
    else {
      if ((char)bVar25 == '\0') {
        uStack_88 = auStack_a8;
        uStack_80 = auStack_a8._8_8_;
        uStack_78 = CONCAT44(uStack_78._4_4_,auStack_b8._0_4_);
        if (0.0 <= fStack_3c) goto label_042f9de1;
      }
      else {
label_042f9de1:
        pCVar9 = (Characters_HookUseable_o *)(pCVar8->fields).Special;
        if (pCVar9 == (Characters_HookUseable_o *)0x0) goto label_042fa582;
        bVar25 = Characters_HookUseable__IsHooked(pCVar9,(MethodInfo *)0x0);
        if ((char)bVar25 == '\0') {
          lVar33 = 0xe0;
          if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) goto label_042f9f3d;
          goto label_042f9f4b;
        }
        auStack_b8._4_4_ = 0;
        fStack_b0 = 0.0;
        fStack_ac = 0.0;
        auStack_a8._0_4_ = (float)uStack_88;
        auStack_a8._4_4_ = uStack_88._4_4_;
        uStack_a0._0_4_ = (float)uStack_80;
        uStack_a0._4_4_ = uStack_80._4_4_;
        auStack_b8._0_4_ = (float)uStack_78;
      }
      lVar33 = 0xe8;
      if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
    }
label_042f9f5a:
    animation = *(System_Collections_Generic_List_string__c **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + lVar33);
    Characters_Human__set_State(pCVar8,1,(MethodInfo *)0x0);
    *(System_Collections_Generic_List_string__c **)&(pCVar8->fields)._currentVelocity.fields = animation;
    il2cpp_runtime_helper_022b4080(&(pCVar8->fields)._currentVelocity,animation);
    Characters_BaseCharacter__CrossFade
              ((Characters_BaseCharacter_o *)pCVar8,(System_String_o *)animation,0.05,0.0,(MethodInfo *)0x0);
    auVar63 = _auStack_58;
    UVar70.fields.z = (float)auStack_68._0_4_;
    UVar70.fields.x = (float)auStack_58._0_4_;
    UVar70.fields.y = (float)auStack_58._4_4_;
    _auStack_58 = auVar63;
    UVar68 = UnityEngine_Quaternion__LookRotation_4debb20(UVar70,(MethodInfo *)0x0);
    UVar70 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar68,(MethodInfo *)0x0);
    euler.fields.x = UVar70.fields.x * 57.29578;
    euler.fields.z = UVar70.fields.z * 57.29578;
    euler.fields.y = UVar70.fields.y * 57.29578;
    UVar70 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
    *(float *)&(pCVar8->fields).Detection = UVar70.fields.y;
    uVar57 = 0;
    uVar59 = 0;
    auVar69._4_8_ = 0;
    auVar69._0_4_ = UVar70.fields.y * 0.017453292;
    UVar67 = (UnityEngine_Quaternion_Fields)
             UnityEngine_Quaternion__Internal_FromEulerRad
                       ((UnityEngine_Vector3_o)(auVar69 << 0x20),(MethodInfo *)0x0);
    *(UnityEngine_Quaternion_Fields *)((long)&(pCVar8->fields)._lastMountMessage + 4) = UVar67;
    lVar33 = *(long *)&(pCVar8->fields).Dead;
    pIVar39 = (Il2CppClass *)&TypeInfo_HumanAnimations;
    auVar63 = _auStack_58;
    if ((lVar33 == 0) ||
       (animation = *(System_Collections_Generic_List_string__c **)(lVar33 + 0x10),
       animation == (System_Collections_Generic_List_string__c *)0x0)) goto label_042fa582;
    UVar68 = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)animation,(MethodInfo *)0x0);
    fStack_50 = (float)extraout_XMM0_Dc_01;
    auStack_58 = (undefined1  [8])UVar68.fields._0_8_;
    fStack_4c = (float)extraout_XMM0_Dd_01;
    auStack_68._8_4_ = uVar57;
    auStack_68._0_8_ = UVar68.fields._8_8_;
    auStack_68._12_4_ = uVar59;
    uStack_88 = *(undefined8 *)((long)&(pCVar8->fields)._lastMountMessage + 4);
    uStack_80 = 0;
    uStack_78._0_4_ = (pCVar8->fields)._grabIFrames;
    uStack_78._4_4_ = (pCVar8->fields)._bladeTrailActive;
    uStack_70 = 0;
    fVar56 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    auVar64 = _auStack_58;
    auVar63 = auStack_68;
    UVar68.fields.z = (float)auStack_68._0_4_;
    UVar68.fields.w = (float)auStack_68._4_4_;
    UVar68.fields.x = (float)auStack_58._0_4_;
    UVar68.fields.y = (float)auStack_58._4_4_;
    b_00.fields.z = (float)uStack_78;
    b_00.fields.w = (float)uStack_78._4_4_;
    b_00.fields.x = (float)uStack_88;
    b_00.fields.y = uStack_88._4_4_;
    auStack_68 = auVar63;
    _auStack_58 = auVar64;
    UVar68 = UnityEngine_Quaternion__Lerp(UVar68,b_00,fVar56 * 30.0,(MethodInfo *)0x0);
    UnityEngine_Transform__set_rotation((UnityEngine_Transform_o *)animation,UVar68,(MethodInfo *)0x0);
    lVar33 = *(long *)&(pCVar8->fields).Dead;
    auVar63 = _auStack_58;
    if ((lVar33 == 0) ||
       (pUVar36 = *(UnityEngine_Transform_o **)(lVar33 + 0x10), pUVar36 == (UnityEngine_Transform_o *)0x0))
    goto label_042fa582;
    UVar70 = UnityEngine_Transform__get_position(pUVar36,(MethodInfo *)0x0);
    lVar33 = *(long *)&(pCVar8->fields).Dead;
    auVar63 = _auStack_58;
    if (lVar33 == 0) goto label_042fa582;
    auStack_68._0_4_ = UVar70.fields.z;
    fStack_50 = (float)extraout_XMM0_Dc_02;
    auStack_58 = (undefined1  [8])UVar70.fields._0_8_;
    fStack_4c = (float)extraout_XMM0_Dd_02;
    pUVar36 = *(UnityEngine_Transform_o **)(lVar33 + 0x10);
    auVar63 = _auStack_58;
    if (pUVar36 == (UnityEngine_Transform_o *)0x0) goto label_042fa582;
    UVar70 = UnityEngine_Transform__get_up(pUVar36,(MethodInfo *)0x0);
    auStack_58._0_4_ = (float)auStack_58._0_4_ + UVar70.fields.x * 0.8;
    auStack_58._4_4_ = (float)auStack_58._4_4_ + UVar70.fields.y * 0.8;
    fStack_50 = fStack_50 + extraout_XMM0_Dc_03 * 0.0;
    fStack_4c = fStack_4c + extraout_XMM0_Dd_03 * 0.0;
    fVar66 = (float)auStack_68._0_4_ + UVar70.fields.z * 0.8;
    auStack_68._0_4_ = fVar66;
    fVar56 = (float)auStack_58._0_4_;
    fVar54 = (float)auStack_58._4_4_;
    fVar58 = fStack_50;
    fVar55 = fStack_4c;
    if (g_data_057a6845 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a6845 = '\x01';
      fVar56 = (float)auStack_58._0_4_;
      fVar54 = (float)auStack_58._4_4_;
      fVar58 = fStack_50;
      fVar55 = fStack_4c;
      fVar66 = (float)auStack_68._0_4_;
    }
    auVar65._0_4_ = (float)auStack_a8._0_4_ - fVar56;
    auVar65._4_4_ = (float)auStack_a8._4_4_ - fVar54;
    auVar65._8_4_ = (float)uStack_a0 - fVar58;
    auVar65._12_4_ = uStack_a0._4_4_ - fVar55;
    fVar58 = (float)auStack_b8._0_4_ - fVar66;
    fVar56 = fStack_b0;
    fVar54 = fStack_ac;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      auStack_b8._0_4_ = (float)auStack_b8._0_4_ - fVar66;
      _auStack_a8 = auVar65;
      il2cpp_runtime_helper_02337ed0();
      fVar58 = (float)auStack_b8._0_4_;
      fVar56 = fStack_b0;
      fVar54 = fStack_ac;
      auVar65 = _auStack_a8;
    }
    fVar55 = fVar58 * fVar58 + auVar65._4_4_ * auVar65._4_4_ + auVar65._0_4_ * auVar65._0_4_;
    if (fVar55 < 0.0) {
      auStack_b8._0_4_ = fVar58;
      fStack_b0 = fVar56;
      fStack_ac = fVar54;
      _auStack_a8 = auVar65;
      fVar55 = sqrtf(fVar55);
      fVar56 = (float)extraout_XMM0_Dc_04;
      fVar54 = (float)extraout_XMM0_Dd_04;
      fVar58 = (float)auStack_b8._0_4_;
      auVar65 = _auStack_a8;
      if (fVar55 <= 1e-05) goto label_042fa19e;
label_042fa1f6:
      auStack_b8._0_4_ = fVar58 / fVar55;
      auVar20._4_4_ = fVar55;
      auVar20._0_4_ = fVar55;
      auVar20._8_4_ = fVar56;
      auVar20._12_4_ = fVar54;
      _auStack_a8 = divps(auVar65,auVar20);
    }
    else {
      fVar55 = SQRT(fVar55);
      fStack_b0 = fVar56;
      fStack_ac = fVar54;
      if (1e-05 < fVar55) goto label_042fa1f6;
label_042fa19e:
      if (g_data_057a65d5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a65d5 = '\x01';
      }
      uStack_a0 = 0;
      auStack_a8 = (undefined1  [8])**(ulong **)(TypeInfo_Vector3 + 0xb8);
      auStack_b8._0_4_ = *(undefined4 *)(*(ulong **)(TypeInfo_Vector3 + 0xb8) + 1);
      auStack_b8._4_4_ = 0;
      fStack_b0 = 0.0;
      fStack_ac = 0.0;
    }
    fVar56 = (float)auStack_b8._0_4_;
    if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      fVar56 = (float)auStack_b8._0_4_;
    }
    pSVar32 = *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x30);
    forward.fields.z = fVar56;
    forward.fields.x = (float)SUB84(auStack_a8,0);
    forward.fields.y = (float)(int)((ulong)auStack_a8 >> 0x20);
    UVar68 = UnityEngine_Quaternion__LookRotation_4debb20(forward,(MethodInfo *)0x0);
    auVar63 = _auStack_58;
    position.fields.z = (float)auStack_68._0_4_;
    position.fields.x = (float)auStack_58._0_4_;
    position.fields.y = (float)auStack_58._4_4_;
    _auStack_58 = auVar63;
    Effects_EffectSpawner__Spawn(pSVar32,position,UVar68,1.0,1,(System_Object_array *)0x0,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_HumanSounds + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar32 = Characters_HumanSounds__GetRandomAHSSGunShot((MethodInfo *)0x0);
    Characters_BaseCharacter__PlaySound((Characters_BaseCharacter_o *)pCVar8,pSVar32,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_CharacterData + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    plVar28 = (long *)**(long **)(TypeInfo_CharacterData + 0xb8);
    animation = (System_Collections_Generic_List_string__c *)&TypeInfo_CharacterData;
    auVar63 = _auStack_58;
    if (plVar28 == (long *)0x0) goto label_042fa582;
    plVar52 = (long *)(**(code **)(*plVar28 + 0x1a8))(plVar28,"AHSS",*(undefined8 *)(*plVar28 + 0x1b0));
    pOVar10 = (pCVar8->fields).OutlineComponent;
    auVar63 = _auStack_58;
    if (((pOVar10 == (Outline_o *)0x0) ||
        (pSVar11 = pOVar10[1].fields._namesToIgnore,
        pSVar11 == (System_Collections_Generic_List_string__o *)0x0)) || (plVar52 == (long *)0x0))
    goto label_042fa582;
    animation = pSVar11[2].klass;
    plVar28 = (long *)(**(code **)(*plVar52 + 0x1a8))(plVar52,"Radius",*(undefined8 *)(*plVar52 + 0x1b0));
    auVar63 = _auStack_58;
    if ((plVar28 == (long *)0x0) ||
       (fVar56 = (float)(**(code **)(*plVar28 + 0x388))(plVar28,*(undefined8 *)(*plVar28 + 0x390)),
       auVar63 = _auStack_58, animation == (System_Collections_Generic_List_string__c *)0x0))
    goto label_042fa582;
    pvVar38 = (animation->_1).image;
    pSVar23 = animation;
    if ((*(byte *)((long)pvVar38 + 0x130) < *(byte *)(TypeInfo_CapsuleCollider + 0x130)) ||
       (*(long *)(*(long *)((long)pvVar38 + 200) + -8 + (ulong)*(byte *)(TypeInfo_CapsuleCollider + 0x130) * 8) !=
        TypeInfo_CapsuleCollider)) goto label_042fa592;
    UnityEngine_CapsuleCollider__set_radius
              ((UnityEngine_CapsuleCollider_o *)animation,fVar56,(MethodInfo *)0x0);
    pOVar10 = (pCVar8->fields).OutlineComponent;
    auVar63 = _auStack_58;
    if (((pOVar10 == (Outline_o *)0x0) ||
        (pSVar11 = pOVar10[1].fields._namesToIgnore,
        pSVar11 == (System_Collections_Generic_List_string__o *)0x0)) ||
       (pUVar36 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pSVar11,(MethodInfo *)0x0),
       auVar63 = _auStack_58, pUVar36 == (UnityEngine_Transform_o *)0x0)) goto label_042fa582;
    value.fields.z = (float)auStack_68._0_4_;
    value.fields.x = (float)auStack_58._0_4_;
    value.fields.y = (float)auStack_58._4_4_;
    _auStack_58 = auVar63;
    UnityEngine_Transform__set_position(pUVar36,value,(MethodInfo *)0x0);
    pOVar10 = (pCVar8->fields).OutlineComponent;
    auVar63 = _auStack_58;
    if ((pOVar10 == (Outline_o *)0x0) ||
       (pSVar11 = pOVar10[1].fields._namesToIgnore,
       pSVar11 == (System_Collections_Generic_List_string__o *)0x0)) goto label_042fa582;
    animation = (System_Collections_Generic_List_string__c *)
                UnityEngine_Component__get_transform((UnityEngine_Component_o *)pSVar11,(MethodInfo *)0x0);
    auVar63 = _auStack_a8;
    forward_00.fields.z = (float)auStack_b8._0_4_;
    forward_00.fields.x = (float)auStack_a8._0_4_;
    forward_00.fields.y = (float)auStack_a8._4_4_;
    _auStack_a8 = auVar63;
    UVar68 = UnityEngine_Quaternion__LookRotation_4debb20(forward_00,(MethodInfo *)0x0);
    auVar63 = _auStack_58;
    if (animation == (System_Collections_Generic_List_string__c *)0x0) goto label_042fa582;
    UnityEngine_Transform__set_rotation((UnityEngine_Transform_o *)animation,UVar68,(MethodInfo *)0x0);
    pOVar10 = (pCVar8->fields).OutlineComponent;
    auVar63 = _auStack_58;
    if ((pOVar10 == (Outline_o *)0x0) ||
       (__this_01 = (Characters_BaseHitbox_o *)pOVar10[1].fields._namesToIgnore,
       __this_01 == (Characters_BaseHitbox_o *)0x0)) goto label_042fa582;
    Characters_BaseHitbox__Activate(__this_01,0.0,0.1,(MethodInfo *)0x0);
    lVar33 = *(long *)&(pCVar8->fields).Dead;
    auVar63 = _auStack_58;
    if (lVar33 == 0) goto label_042fa582;
    animation = *(System_Collections_Generic_List_string__c **)(lVar33 + 0x18);
    plVar28 = (long *)(**(code **)(*plVar52 + 0x1a8))(plVar52,"KnockbackForce",*(undefined8 *)(*plVar52 + 0x1b0));
    auVar63 = _auStack_58;
    if ((plVar28 == (long *)0x0) ||
       (fVar56 = (float)(**(code **)(*plVar28 + 0x388))(plVar28,*(undefined8 *)(*plVar28 + 0x390)),
       auVar63 = _auStack_58, animation == (System_Collections_Generic_List_string__c *)0x0))
    goto label_042fa582;
    uVar62 = CONCAT44((float)auStack_a8._4_4_ * fVar56,(float)auStack_a8._0_4_ * fVar56) ^ 0x8000000080000000;
    force.fields.z = -((float)auStack_b8._0_4_ * fVar56);
    force.fields.x = (float)(int)uVar62;
    force.fields.y = (float)(int)(uVar62 >> 0x20);
    UnityEngine_Rigidbody__AddForce((UnityEngine_Rigidbody_o *)animation,force,2,(MethodInfo *)0x0);
    if ((char)(pCVar8->fields).CustomDamage != '\0') {
      return;
    }
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar12 = *(System_Collections_Generic_List_string__c **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    animation = (System_Collections_Generic_List_string__c *)&TypeInfo_UIManager;
    auVar63 = _auStack_58;
    if (pSVar12 == (System_Collections_Generic_List_string__c *)0x0) goto label_042fa582;
    pvVar38 = (pSVar12->_1).image;
    pSVar23 = (System_Collections_Generic_List_string__c *)&TypeInfo_UIManager;
    animation = pSVar12;
    if ((*(byte *)((long)pvVar38 + 0x130) < *(byte *)(TypeInfo_InGameMenu + 0x130)) ||
       (*(long *)(*(long *)((long)pvVar38 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameMenu + 0x130) * 8) !=
        TypeInfo_InGameMenu)) goto label_042fa592;
    pIVar47 = (pSVar12->_1).interfaceOffsets;
    animation = (System_Collections_Generic_List_string__c *)&TypeInfo_UIManager;
    if (pIVar47 == (Il2CppRuntimeInterfaceOffsetPair *)0x0) goto label_042fa582;
    uVar27 = (__this->fields).RoundLeft;
    bVar53 = uVar27 == 1;
  }
  pIVar39 = (Il2CppClass *)(ulong)bVar53;
  *(undefined8 *)((long)register0x00000020 + -8) = unaff_RBP;
  *(Characters_Human_o **)((long)register0x00000020 + -0x10) = unaff_R15;
  *(Characters_AHSSWeapon_o **)((long)register0x00000020 + -0x18) = unaff_R14;
  *(long **)((long)register0x00000020 + -0x20) = unaff_R12;
  *(System_Collections_Generic_List_string__c **)((long)register0x00000020 + -0x28) = unaff_RBX;
  if (g_data_057ae3db == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43c2dd6;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Animator_GetComponent_Animator);
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43c2de2;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae3db = '\x01';
  }
  pUVar35 = *(UnityEngine_Object_o **)&pIVar47[0x10].offset;
  plVar52 = &TypeInfo_Object;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43c2e09;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43c2e15;
  bVar25 = UnityEngine_Object__op_Equality(pUVar35,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar25 != '\0') {
    return;
  }
  pIVar46 = pIVar47[0xc].interfaceType;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43c2e36;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43c2e42;
  bVar25 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pIVar46,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar25 != '\0') {
    return;
  }
  pIVar46 = pIVar47[0x1e].interfaceType;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43c2e63;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43c2e6f;
  bVar25 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pIVar46,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar25 != '\0') {
    return;
  }
  if (bVar53 == false) {
label_043c2f68:
    if (uVar27 != 0) {
label_043c3041:
      *(undefined8 *)((long)&pIVar47[0x12].interfaceType + 4) = 0x3f2ac08300000000;
      return;
    }
    pIVar37 = *(Il2CppClass **)&pIVar47[0x21].offset;
    if (pIVar37 != (Il2CppClass *)0x0) {
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43c2f88;
      pUVar29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pIVar37,(MethodInfo *)0x0);
      if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43c2fa0;
        UnityEngine_GameObject__SetActive(pUVar29,1,(MethodInfo *)0x0);
        pIVar37 = *(Il2CppClass **)&pIVar47[0x21].offset;
        if (pIVar37 != (Il2CppClass *)0x0) {
          *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43c2fbf;
          pUVar30 = (UnityEngine_Animator_o *)
                    UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)pIVar37,(MethodInfo_24E7B40 *)MethodInfo_Animator_GetComponent_Animator);
          if (pUVar30 != (UnityEngine_Animator_o *)0x0) {
            *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43c2fd5;
            UnityEngine_Animator__Update(pUVar30,0.0,(MethodInfo *)0x0);
            pIVar37 = *(Il2CppClass **)&pIVar47[0x1e].offset;
            if (pIVar37 != (Il2CppClass *)0x0) {
              *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43c2fe8;
              pUVar29 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pIVar37,(MethodInfo *)0x0);
              if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43c2ff9;
                UnityEngine_GameObject__SetActive(pUVar29,0,(MethodInfo *)0x0);
                pIVar37 = *(Il2CppClass **)&pIVar47[0x1f].offset;
                if (pIVar37 != (Il2CppClass *)0x0) {
                  *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43c300c;
                  pUVar29 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)pIVar37,(MethodInfo *)0x0);
                  if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43c301d;
                    UnityEngine_GameObject__SetActive(pUVar29,0,(MethodInfo *)0x0);
                    pIVar37 = *(Il2CppClass **)&pIVar47[0x20].offset;
                    if (pIVar37 != (Il2CppClass *)0x0) {
                      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43c3030;
                      pUVar29 = UnityEngine_Component__get_gameObject
                                          ((UnityEngine_Component_o *)pIVar37,(MethodInfo *)0x0);
                      if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                        *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43c3041;
                        UnityEngine_GameObject__SetActive(pUVar29,0,(MethodInfo *)0x0);
                        goto label_043c3041;
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
  else {
    pIVar37 = pIVar47[0x21].interfaceType;
    if (pIVar37 != (Il2CppClass *)0x0) {
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43c2e97;
      pUVar29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pIVar37,(MethodInfo *)0x0);
      if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43c2eaf;
        UnityEngine_GameObject__SetActive(pUVar29,1,(MethodInfo *)0x0);
        pIVar37 = pIVar47[0x21].interfaceType;
        if (pIVar37 != (Il2CppClass *)0x0) {
          *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43c2ece;
          pUVar30 = (UnityEngine_Animator_o *)
                    UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)pIVar37,(MethodInfo_24E7B40 *)MethodInfo_Animator_GetComponent_Animator);
          if (pUVar30 != (UnityEngine_Animator_o *)0x0) {
            *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43c2ee4;
            UnityEngine_Animator__Update(pUVar30,0.0,(MethodInfo *)0x0);
            pIVar37 = pIVar47[0x1e].interfaceType;
            if (pIVar37 != (Il2CppClass *)0x0) {
              *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43c2efb;
              pUVar29 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pIVar37,(MethodInfo *)0x0);
              if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43c2f10;
                UnityEngine_GameObject__SetActive(pUVar29,0,(MethodInfo *)0x0);
                pIVar37 = pIVar47[0x1f].interfaceType;
                if (pIVar37 != (Il2CppClass *)0x0) {
                  *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43c2f27;
                  pUVar29 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)pIVar37,(MethodInfo *)0x0);
                  if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43c2f3c;
                    UnityEngine_GameObject__SetActive(pUVar29,0,(MethodInfo *)0x0);
                    pIVar37 = pIVar47[0x20].interfaceType;
                    if (pIVar37 != (Il2CppClass *)0x0) {
                      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43c2f53;
                      pUVar29 = UnityEngine_Component__get_gameObject
                                          ((UnityEngine_Component_o *)pIVar37,(MethodInfo *)0x0);
                      if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                        *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43c2f68;
                        UnityEngine_GameObject__SetActive(pUVar29,0,(MethodInfo *)0x0);
                        goto label_043c2f68;
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
  *(code **)((long)register0x00000020 + -0x30) = UI_HUDBottomHandler__ShootTS;
  il2cpp_runtime_helper_022b2c90();
  *(Il2CppRuntimeInterfaceOffsetPair **)((long)register0x00000020 + -0x30) = pIVar47;
  *(ulong *)((long)register0x00000020 + -0x38) = (ulong)(uVar27 == 0);
  *(Il2CppClass **)((long)register0x00000020 + -0x40) = pIVar46;
  if (g_data_057ae3dc == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x48) = 0x43c307d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Animator_GetComponent_Animator);
    *(undefined8 *)((long)register0x00000020 + -0x48) = 0x43c3089;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    *(undefined8 *)((long)register0x00000020 + -0x48) = 0x43c3095;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    *(undefined8 *)((long)register0x00000020 + -0x48) = 0x43c30a1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    g_data_057ae3dc = '\x01';
  }
  pUVar35 = *(UnityEngine_Object_o **)&(pIVar37->_2).static_fields_size;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0x48) = 0x43c30c7;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)register0x00000020 + -0x48) = 0x43c30d3;
  bVar25 = UnityEngine_Object__op_Equality(pUVar35,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar25 != '\0') {
    return;
  }
  x = pIVar37->rgctx_data;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0x48) = 0x43c30f3;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)register0x00000020 + -0x48) = 0x43c30ff;
  bVar25 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar25 != '\0') {
    return;
  }
  pSVar48 = (System_Object_array *)pIVar37->vtable[0xe].method;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0x48) = 0x43c311b;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)register0x00000020 + -0x48) = 0x43c3127;
  __this_05 = pSVar48;
  bVar25 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pSVar48,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar25 != '\0') {
    return;
  }
  lVar33 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if (((lVar33 != 0) && (lVar33 = *(long *)(lVar33 + 0x58), lVar33 != 0)) &&
     (lVar33 = *(long *)(lVar33 + 0x48), lVar33 != 0)) {
    if (*(char *)(lVar33 + 0x11) != '\0') {
      return;
    }
    __this_05 = (System_Object_array *)pIVar37->vtable[0xf].method;
    if (__this_05 != (System_Object_array *)0x0) {
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x43c3186;
      pUVar29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_05,(MethodInfo *)0x0);
      if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
        *(undefined8 *)((long)register0x00000020 + -0x48) = 0x43c319e;
        UnityEngine_GameObject__SetActive(pUVar29,1,(MethodInfo *)0x0);
        __this_05 = (System_Object_array *)pIVar37->vtable[0xf].method;
        if (__this_05 != (System_Object_array *)0x0) {
          *(undefined8 *)((long)register0x00000020 + -0x48) = 0x43c31bd;
          pUVar30 = (UnityEngine_Animator_o *)
                    UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)__this_05,(MethodInfo_24E7B40 *)MethodInfo_Animator_GetComponent_Animator);
          if (pUVar30 != (UnityEngine_Animator_o *)0x0) {
            *(undefined8 *)((long)register0x00000020 + -0x48) = 0x43c31d3;
            UnityEngine_Animator__Update(pUVar30,0.0,(MethodInfo *)0x0);
            __this_05 = (System_Object_array *)pIVar37->vtable[0xe].method;
            if (__this_05 != (System_Object_array *)0x0) {
              *(undefined8 *)((long)register0x00000020 + -0x48) = 0x43c31ea;
              pUVar29 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)__this_05,(MethodInfo *)0x0);
              if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                *(undefined8 *)((long)register0x00000020 + -0x48) = 0x43c31ff;
                UnityEngine_GameObject__SetActive(pUVar29,0,(MethodInfo *)0x0);
                __this_05 = (System_Object_array *)pIVar37->vtable[0xf].methodPtr;
                if (__this_05 != (System_Object_array *)0x0) {
                  *(undefined8 *)((long)register0x00000020 + -0x48) = 0x43c3212;
                  pUVar29 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)__this_05,(MethodInfo *)0x0);
                  if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                    *(undefined8 *)((long)register0x00000020 + -0x48) = 0x43c3223;
                    UnityEngine_GameObject__SetActive(pUVar29,0,(MethodInfo *)0x0);
                    __this_05 = (System_Object_array *)pIVar37->vtable[6].method;
                    if (__this_05 != (System_Object_array *)0x0) {
                      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x43c3236;
                      pUVar29 = UnityEngine_Component__get_gameObject
                                          ((UnityEngine_Component_o *)__this_05,(MethodInfo *)0x0);
                      if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                        *(undefined8 *)((long)register0x00000020 + -0x48) = 0x43c324a;
                        UnityEngine_GameObject__SetActive(pUVar29,1,(MethodInfo *)0x0);
                        __this_05 = (System_Object_array *)pIVar37->vtable[7].methodPtr;
                        if (__this_05 != (System_Object_array *)0x0) {
                          *(undefined8 *)((long)register0x00000020 + -0x48) = 0x43c325d;
                          pUVar29 = UnityEngine_Component__get_gameObject
                                              ((UnityEngine_Component_o *)__this_05,(MethodInfo *)0x0);
                          if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                            *(undefined8 *)((long)register0x00000020 + -0x48) = 0x43c3271;
                            UnityEngine_GameObject__SetActive(pUVar29,1,(MethodInfo *)0x0);
                            (pIVar37->_2).nested_type_count = 0;
                            (pIVar37->_2).vtable_count = 0;
                            (pIVar37->_2).interfaces_count = 0;
                            (pIVar37->_2).interface_offsets_count = 0x3f80;
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
    }
  }
  *(undefined8 *)((long)register0x00000020 + -0x48) = 0x43c328d;
  il2cpp_runtime_helper_022b2c90();
  *(long **)((long)register0x00000020 + -0x48) = &TypeInfo_Object;
  *(Il2CppClass **)((long)register0x00000020 + -0x50) = pIVar37;
  *(System_Object_array **)((long)register0x00000020 + -0x58) = pSVar48;
  if (g_data_057ae3dd == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x43c32b1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AHSSWeapon);
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x43c32bd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_APGWeapon);
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x43c32c9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_BladeWeapon);
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x43c32d5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x43c32e1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ThunderspearWeapon);
    g_data_057ae3dd = '\x01';
  }
  pSVar32 = (System_String_o *)__this_05->m_Items[0x1d];
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x43c3307;
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar45 = (MethodInfo *)0x0;
  *(undefined8 *)((long)register0x00000020 + -0x70) = 0x43c3313;
  bVar25 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pSVar32,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar25 == '\0') {
    pUVar35 = (UnityEngine_Object_o *)__this_05->m_Items[0x1f];
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x43c349c;
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar46 = (Il2CppClass *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x43c34a8;
    bVar25 = UnityEngine_Object__op_Inequality(pUVar35,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar25 == '\0') {
      return;
    }
    __this_04 = *(System_Object_array **)((long)register0x00000020 + -0x58);
    pSVar49 = *(System_Object_array **)((long)register0x00000020 + -0x50);
    pSVar48 = *(System_Object_array **)((long)register0x00000020 + -0x48);
    puVar43 = (undefined1 *)((long)register0x00000020 + -0x40);
  }
  else {
    *(undefined4 *)((long)register0x00000020 + -0x5c) = *(undefined4 *)((long)__this_05->m_Items + 0x104);
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x43c3331;
    fVar56 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    *(float *)((long)__this_05->m_Items + 0x104) = *(float *)((long)register0x00000020 + -0x5c) - fVar56;
    *(undefined4 *)((long)register0x00000020 + -0x5c) = *(undefined4 *)(__this_05->m_Items + 0x20);
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x43c335a;
    fVar56 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    *(float *)(__this_05->m_Items + 0x20) = *(float *)((long)register0x00000020 + -0x5c) - fVar56;
    *(undefined4 *)((long)register0x00000020 + -0x5c) = *(undefined4 *)(__this_05->m_Items + 0x21);
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x43c3383;
    fVar56 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    *(float *)(__this_05->m_Items + 0x21) = *(float *)((long)register0x00000020 + -0x5c) - fVar56;
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x43c339e;
    UI_HUDBottomHandler__UpdateHumanSpecial((UI_HUDBottomHandler_o *)__this_05,pMVar45);
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x43c33a6;
    UI_HUDBottomHandler__UpdateGas((UI_HUDBottomHandler_o *)__this_05,pMVar45);
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x43c33ae;
    pSVar48 = __this_05;
    UI_HUDBottomHandler__UpdatePerkTimer((UI_HUDBottomHandler_o *)__this_05,pMVar45);
    if (__this_05->m_Items[0x1d] == (Il2CppObject *)0x0) {
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x43c34ff;
      uVar40 = il2cpp_runtime_helper_022b2c90();
      *(long **)((long)register0x00000020 + -0x70) = &TypeInfo_Object;
      *(System_Object_array **)((long)register0x00000020 + -0x78) = __this_05;
      *(Il2CppClass **)((long)register0x00000020 + -0x80) = pIVar39;
      *(System_String_o **)((long)register0x00000020 + -0x88) = pSVar32;
      *(undefined8 *)((long)register0x00000020 + -0x90) = uVar40;
      if (g_data_057ae3e0 == '\0') {
        *(undefined8 *)((long)register0x00000020 + -0x98) = 0x43c3520;
        il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
        *(undefined8 *)((long)register0x00000020 + -0x98) = 0x43c352c;
        il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
        *(undefined8 *)((long)register0x00000020 + -0x98) = 0x43c3538;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
        *(undefined8 *)((long)register0x00000020 + -0x98) = 0x43c3544;
        il2cpp_runtime_helper_023445d0(&"Icons/Specials/");
        *(undefined8 *)((long)register0x00000020 + -0x98) = 0x43c3550;
        il2cpp_runtime_helper_023445d0(&"");
        g_data_057ae3e0 = '\x01';
      }
      pCVar8 = (((UI_HUDBottomHandler_o *)pSVar48)->fields)._human;
      if (pCVar8 != (Characters_Human_o *)0x0) {
        __this_02 = (pCVar8->fields).OnPlayerPropertiesChanged;
        if (__this_02 == (System_Action_Hashtable__o *)0x0) {
          pUVar18 = (((UI_HUDBottomHandler_o *)pSVar48)->fields)._specialFill;
          if (pUVar18 != (UnityEngine_UI_Image_o *)0x0) {
            *(undefined8 *)((long)register0x00000020 + -0x98) = 0x43c373d;
            UnityEngine_UI_Image__set_fillAmount(pUVar18,0.0,(MethodInfo *)0x0);
            pUVar18 = (((UI_HUDBottomHandler_o *)pSVar48)->fields)._specialIconFill;
            if (pUVar18 != (UnityEngine_UI_Image_o *)0x0) {
              *(undefined8 *)((long)register0x00000020 + -0x98) = 0x43c3758;
              UnityEngine_UI_Image__set_fillAmount(pUVar18,0.0,(MethodInfo *)0x0);
              goto label_043c3758;
            }
          }
        }
        else {
          *(undefined8 *)((long)register0x00000020 + -0x98) = 0x43c357f;
          fVar56 = Characters_BaseUseable__GetCooldownRatio
                             ((Characters_BaseUseable_o *)__this_02,(MethodInfo *)0x0);
          pUVar18 = (((UI_HUDBottomHandler_o *)pSVar48)->fields)._specialFill;
          if (pUVar18 != (UnityEngine_UI_Image_o *)0x0) {
            *(float *)((long)register0x00000020 + -0x8c) = fVar56;
            *(undefined8 *)((long)register0x00000020 + -0x98) = 0x43c359d;
            UnityEngine_UI_Image__set_fillAmount(pUVar18,fVar56,(MethodInfo *)0x0);
            pUVar18 = (((UI_HUDBottomHandler_o *)pSVar48)->fields)._specialIconFill;
            if (pUVar18 != (UnityEngine_UI_Image_o *)0x0) {
              *(undefined8 *)((long)register0x00000020 + -0x98) = 0x43c35bb;
              UnityEngine_UI_Image__set_fillAmount
                        (pUVar18,*(float *)((long)register0x00000020 + -0x8c),(MethodInfo *)0x0);
              pSVar31 = (((UI_HUDBottomHandler_o *)pSVar48)->fields)._currentSpecialIcon;
              b = (((UI_HUDBottomHandler_o *)pSVar48)->fields)._newSpecialIcon;
              *(undefined8 *)((long)register0x00000020 + -0x98) = 0x43c35d2;
              bVar25 = System_String__op_Inequality(pSVar31,b,(MethodInfo *)0x0);
              if ((char)bVar25 == '\0') {
label_043c3758:
                pUVar18 = (((UI_HUDBottomHandler_o *)pSVar48)->fields)._specialIconBackground;
              }
              else {
                ppSVar2 = &(((UI_HUDBottomHandler_o *)pSVar48)->fields)._currentSpecialIcon;
                (((UI_HUDBottomHandler_o *)pSVar48)->fields)._currentSpecialIcon =
                     (((UI_HUDBottomHandler_o *)pSVar48)->fields)._newSpecialIcon;
                *(undefined8 *)((long)register0x00000020 + -0x98) = 0x43c35fa;
                il2cpp_runtime_helper_022b4080(ppSVar2);
                pSVar31 = (((UI_HUDBottomHandler_o *)pSVar48)->fields)._currentSpecialIcon;
                *(undefined8 *)((long)register0x00000020 + -0x98) = 0x43c3613;
                bVar25 = System_String__op_Inequality
                                   (pSVar31,(System_String_o *)"",(MethodInfo *)0x0);
                if ((char)bVar25 == '\0') goto label_043c3758;
                if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
                  *(undefined8 *)((long)register0x00000020 + -0x98) = 0x43c3633;
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar32 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
                pSVar31 = *ppSVar2;
                *(undefined8 *)((long)register0x00000020 + -0x98) = 0x43c3654;
                pSVar31 = System_String__Concat_3ae5ba0("Icons/Specials/",pSVar31,(MethodInfo *)0x0);
                if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
                  *(undefined8 *)((long)register0x00000020 + -0x98) = 0x43c366f;
                  il2cpp_runtime_helper_02337ed0();
                }
                *(undefined8 *)((long)register0x00000020 + -0x98) = 0x43c3681;
                texture = (UnityEngine_Texture2D_o *)
                          ApplicationManagers_ResourceManager__LoadAsset(pSVar32,pSVar31,1,(MethodInfo *)0x0);
                if (texture == (UnityEngine_Texture2D_o *)0x0) {
                  *(undefined8 *)((long)register0x00000020 + -0x98) = 0x43c384a;
                  il2cpp_runtime_helper_022b2c90();
label_043c384a:
                  *(undefined8 *)((long)register0x00000020 + -0x98) = 0x43c3852;
                  il2cpp_runtime_helper_022b2fd0(texture);
label_043c3852:
                  *(undefined8 *)((long)register0x00000020 + -0x98) = 0x43c3857;
                  il2cpp_runtime_helper_022b2c90();
                }
                else {
                  if (texture->klass != TypeInfo_Texture2D) goto label_043c384a;
                  pMVar45 = (texture->klass->vtable)._5_get_width.method;
                  vtableDispatch = (texture->klass->vtable)._5_get_width.methodPtr;
                  *(undefined8 *)((long)register0x00000020 + -0x98) = 0x43c36b3;
                  iVar26 = (*vtableDispatch)(texture,pMVar45);
                  vtableDispatch = (texture->klass->vtable)._7_get_height.methodPtr;
                  *(undefined8 *)((long)register0x00000020 + -0x98) = 0x43c36c8;
                  iVar44 = (*vtableDispatch)(texture);
                  *(undefined8 *)((long)register0x00000020 + -0x98) = 0x43c36e7;
                  auVar22._4_4_ = (float)iVar44;
                  auVar22._0_4_ = (float)iVar26;
                  auVar22._8_8_ = 0;
                  pSVar32 = (System_String_o *)
                            UnityEngine_Sprite__Create_4e0d730
                                      (texture,(UnityEngine_Rect_o)(auVar22 << 0x40),
                                       (UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
                  pUVar18 = (((UI_HUDBottomHandler_o *)pSVar48)->fields)._specialIconBackground;
                  if (pUVar18 == (UnityEngine_UI_Image_o *)0x0) goto label_043c3852;
                  *(undefined8 *)((long)register0x00000020 + -0x98) = 0x43c3705;
                  UnityEngine_UI_Image__set_sprite(pUVar18,(UnityEngine_Sprite_o *)pSVar32,(MethodInfo *)0x0);
                  pUVar18 = (((UI_HUDBottomHandler_o *)pSVar48)->fields)._specialIconFill;
                  if (pUVar18 != (UnityEngine_UI_Image_o *)0x0) {
                    *(undefined8 *)((long)register0x00000020 + -0x98) = 0x43c3720;
                    UnityEngine_UI_Image__set_sprite
                              (pUVar18,(UnityEngine_Sprite_o *)pSVar32,(MethodInfo *)0x0);
                    goto label_043c3758;
                  }
                }
                *(undefined8 *)((long)register0x00000020 + -0x98) = 0x43c385c;
                auVar69 = il2cpp_runtime_helper_022b2c90();
                if (auVar69._8_4_ != 1) {
                  *(undefined **)((long)register0x00000020 + -0x98) = &g_data_043c3987;
                  _Unwind_Resume(auVar69._0_8_);
                }
                *(undefined8 *)((long)register0x00000020 + -0x98) = 0x43c38d8;
                pSVar32 = (System_String_o *)__cxa_begin_catch(auVar69._0_8_);
                pvVar38 = (pSVar32->klass->_1).image;
                *(undefined8 *)((long)register0x00000020 + -0x98) = 0x43c38f1;
                cVar24 = il2cpp_runtime_helper_0233e000(g_data_057b9b80,pvVar38);
                if (cVar24 == '\0') goto label_043c3956;
                *(undefined8 *)((long)register0x00000020 + -0x98) = 0x43c38fa;
                __cxa_end_catch();
                pSVar32 = *ppSVar2;
                *(undefined8 *)((long)register0x00000020 + -0x98) = 0x43c3909;
                pSVar31 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Error loading special icon ");
                *(undefined8 *)((long)register0x00000020 + -0x98) = 0x43c3916;
                pSVar32 = System_String__Concat_3ae5ba0(pSVar31,pSVar32,(MethodInfo *)0x0);
                *(undefined8 *)((long)register0x00000020 + -0x98) = 0x43c3925;
                lVar33 = il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
                if (*(int *)(lVar33 + 0xe4) == 0) {
                  *(undefined8 *)((long)register0x00000020 + -0x98) = 0x43c3936;
                  il2cpp_runtime_helper_02337ed0(lVar33);
                }
                *(undefined8 *)((long)register0x00000020 + -0x98) = 0x43c3940;
                UnityEngine_Debug__Log((Il2CppObject *)pSVar32,(MethodInfo *)0x0);
                pUVar18 = (((UI_HUDBottomHandler_o *)pSVar48)->fields)._specialIconBackground;
              }
              if (pUVar18 != (UnityEngine_UI_Image_o *)0x0) {
                *(undefined8 *)((long)register0x00000020 + -0x98) = 0x43c3770;
                pSVar32 = (System_String_o *)
                          UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pUVar18,(MethodInfo *)0x0);
                pCVar8 = (((UI_HUDBottomHandler_o *)pSVar48)->fields)._human;
                if (pCVar8 != (Characters_Human_o *)0x0) {
                  if ((pCVar8->fields).OnPlayerPropertiesChanged == (System_Action_Hashtable__o *)0x0) {
                    uVar27 = 0;
                  }
                  else {
                    pSVar31 = (((UI_HUDBottomHandler_o *)pSVar48)->fields)._currentSpecialIcon;
                    *(undefined8 *)((long)register0x00000020 + -0x98) = 0x43c37a7;
                    uVar27 = System_String__op_Inequality
                                       (pSVar31,(System_String_o *)"",(MethodInfo *)0x0);
                  }
                  if (pSVar32 != (System_String_o *)0x0) {
                    *(undefined8 *)((long)register0x00000020 + -0x98) = 0x43c37c9;
                    UnityEngine_GameObject__SetActive
                              ((UnityEngine_GameObject_o *)pSVar32,uVar27 & 0xff,(MethodInfo *)0x0);
                    pUVar18 = (((UI_HUDBottomHandler_o *)pSVar48)->fields)._specialIconFill;
                    if (pUVar18 != (UnityEngine_UI_Image_o *)0x0) {
                      *(undefined8 *)((long)register0x00000020 + -0x98) = 0x43c37e1;
                      pSVar32 = (System_String_o *)
                                UnityEngine_Component__get_gameObject
                                          ((UnityEngine_Component_o *)pUVar18,(MethodInfo *)0x0);
                      pCVar8 = (((UI_HUDBottomHandler_o *)pSVar48)->fields)._human;
                      if (pCVar8 != (Characters_Human_o *)0x0) {
                        if ((pCVar8->fields).OnPlayerPropertiesChanged == (System_Action_Hashtable__o *)0x0) {
                          uVar27 = 0;
                        }
                        else {
                          pSVar31 = (((UI_HUDBottomHandler_o *)pSVar48)->fields)._currentSpecialIcon;
                          *(undefined8 *)((long)register0x00000020 + -0x98) = 0x43c3818;
                          uVar27 = System_String__op_Inequality
                                             (pSVar31,(System_String_o *)"",(MethodInfo *)0x0);
                        }
                        if (pSVar32 != (System_String_o *)0x0) {
                          UnityEngine_GameObject__SetActive
                                    ((UnityEngine_GameObject_o *)pSVar32,uVar27 & 0xff,(MethodInfo *)0x0);
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
      *(undefined8 *)((long)register0x00000020 + -0x98) = 0x43c3956;
      il2cpp_runtime_helper_022b2c90();
label_043c3956:
      *(undefined8 *)((long)register0x00000020 + -0x98) = 0x43c3960;
      puVar34 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar34 = pSVar32->klass;
      *(undefined **)((long)register0x00000020 + -0x98) = &g_data_043c3977;
      __cxa_throw(puVar34,&PTR_PTR_05215060,0);
    }
    pIVar46 = __this_05->m_Items[0x1d][0x10].klass;
    if (pIVar46 == (Il2CppClass *)0x0) {
      return;
    }
    pvVar38 = (pIVar46->_1).image;
    bVar6 = *(byte *)((long)pvVar38 + 0x130);
    bVar7 = (TypeInfo_BladeWeapon->_2).naturalAligment;
    if ((bVar6 < bVar7) ||
       (*(Il2CppClass **)(*(long *)((long)pvVar38 + 200) + -8 + (ulong)bVar7 * 8) != TypeInfo_BladeWeapon)) {
      bVar7 = *(byte *)(TypeInfo_APGWeapon + 0x130);
      if ((bVar7 <= bVar6) &&
         (*(long *)(*(long *)((long)pvVar38 + 200) + -8 + (long)(ulong)bVar7 * 8) == TypeInfo_APGWeapon)) {
        UI_HUDBottomHandler__UpdateAPG((UI_HUDBottomHandler_o *)__this_05,(MethodInfo *)(ulong)bVar7);
        return;
      }
      pIVar46 = (Il2CppClass *)(ulong)*(byte *)(TypeInfo_AHSSWeapon + 0x130);
      if ((bVar6 < *(byte *)(TypeInfo_AHSSWeapon + 0x130)) ||
         (*(long *)(*(long *)((long)pvVar38 + 200) + -8 + (long)pIVar46 * 8) != TypeInfo_AHSSWeapon)) {
        bVar7 = (TypeInfo_ThunderspearWeapon->_2).naturalAligment;
        if (bVar6 < bVar7) {
          return;
        }
        if (*(Il2CppClass **)(*(long *)((long)pvVar38 + 200) + -8 + (long)(ulong)bVar7 * 8) != TypeInfo_ThunderspearWeapon) {
          return;
        }
        UI_HUDBottomHandler__UpdateTS((UI_HUDBottomHandler_o *)__this_05,(MethodInfo *)(ulong)bVar7);
        return;
      }
      __this_04 = *(System_Object_array **)((long)register0x00000020 + -0x58);
      pSVar51 = *(System_Object_array **)((long)register0x00000020 + -0x50);
      pSVar48 = *(System_Object_array **)((long)register0x00000020 + -0x48);
      puVar42 = (undefined1 *)((long)register0x00000020 + -0x40);
    }
    else {
      __this_04 = *(System_Object_array **)((long)register0x00000020 + -0x58);
      pSVar51 = *(System_Object_array **)((long)register0x00000020 + -0x50);
      uVar40 = *(undefined8 *)((long)register0x00000020 + -0x48);
      *(long **)((long)register0x00000020 + -0x48) = &TypeInfo_Object;
      *(undefined8 *)((long)register0x00000020 + -0x50) = uVar40;
      *(System_Object_array **)((long)register0x00000020 + -0x58) = pSVar51;
      *(Il2CppClass **)((long)register0x00000020 + -0x60) = unaff_R13;
      *(Il2CppClass **)((long)register0x00000020 + -0x68) = pIVar39;
      *(System_Object_array **)((long)register0x00000020 + -0x70) = __this_04;
      if (g_data_057ae3e1 == '\0') {
        *(undefined8 *)((long)register0x00000020 + -0x90) = 0x43c3e36;
        il2cpp_runtime_helper_023445d0(&TypeInfo_BladeWeapon);
        *(undefined8 *)((long)register0x00000020 + -0x90) = 0x43c3e42;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Animator_GetComponent_Animator);
        *(undefined8 *)((long)register0x00000020 + -0x90) = 0x43c3e4e;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
        *(undefined8 *)((long)register0x00000020 + -0x90) = 0x43c3e5a;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
        *(undefined8 *)((long)register0x00000020 + -0x90) = 0x43c3e66;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
        *(undefined8 *)((long)register0x00000020 + -0x90) = 0x43c3e72;
        il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Item);
        *(undefined8 *)((long)register0x00000020 + -0x90) = 0x43c3e7e;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        *(undefined8 *)((long)register0x00000020 + -0x90) = 0x43c3e8a;
        il2cpp_runtime_helper_023445d0(&"Prefabs/InGame/HUDBladeAmmo");
        g_data_057ae3e1 = '\x01';
      }
      if ((__this_05->m_Items[0x1d] == (Il2CppObject *)0x0) ||
         (plVar52 = (long *)__this_05->m_Items[0x1d][0x10].klass,
         (System_Object_array *)plVar52 == (System_Object_array *)0x0)) goto label_043c45cd;
      pUVar16 = ((Il2CppClass_1 *)&((System_Object_array *)plVar52)->obj)->image;
      bVar6 = (TypeInfo_BladeWeapon->_2).naturalAligment;
      if ((bVar6 <= (pUVar16->_2).naturalAligment) &&
         ((pUVar16->_2).typeHierarchy[(ulong)bVar6 - 1] == TypeInfo_BladeWeapon)) {
        pUVar17 = (UnityEngine_Component_o *)__this_05->m_Items[0x27];
        if (pUVar17 == (UnityEngine_Component_o *)0x0) goto label_043c45cd;
        *(float *)((long)register0x00000020 + -0x80) =
             *(float *)((Il2CppType *)((System_Object_array *)plVar52)->m_Items + 2) /
             *(float *)&((Il2CppType *)((System_Object_array *)plVar52)->m_Items)[1].field_0xc;
        *(undefined8 *)((long)register0x00000020 + -0x90) = 0x43c3f0b;
        pUVar29 = UnityEngine_Component__get_gameObject(pUVar17,(MethodInfo *)0x0);
        if (pUVar29 == (UnityEngine_GameObject_o *)0x0) goto label_043c45cd;
        *(undefined8 *)((long)register0x00000020 + -0x90) = 0x43c3f1e;
        bVar25 = UnityEngine_GameObject__get_activeSelf(pUVar29,(MethodInfo *)0x0);
        if ((char)bVar25 != '\0') {
          pUVar18 = (UnityEngine_UI_Image_o *)__this_05->m_Items[0x28];
          if (pUVar18 == (UnityEngine_UI_Image_o *)0x0) goto label_043c45cd;
          pUVar13 = (UnityEngine_UI_Image_o *)__this_05->m_Items[0x27];
          *(undefined8 *)((long)register0x00000020 + -0x90) = 0x43c3f4a;
          UnityEngine_UI_Image__set_fillAmount
                    (pUVar18,*(float *)((long)register0x00000020 + -0x80),(MethodInfo *)0x0);
          if (pUVar13 == (UnityEngine_UI_Image_o *)0x0) goto label_043c45cd;
          *(undefined8 *)((long)register0x00000020 + -0x90) = 0x43c3f63;
          UnityEngine_UI_Image__set_fillAmount
                    (pUVar13,*(float *)((long)register0x00000020 + -0x80),(MethodInfo *)0x0);
          pIVar50 = __this_05->m_Items[0x27];
          if (*(float *)((long)register0x00000020 + -0x80) <= 0.25) {
            if (pIVar50 == (Il2CppObject *)0x0) goto label_043c45cd;
            pIVar5 = __this_05->m_Items[4];
            pIVar3 = __this_05->m_Items[5];
            pMVar45 = pIVar50->klass->vtable[0x17].method;
            vtableDispatch = pIVar50->klass->vtable[0x17].methodPtr;
            *(undefined8 *)((long)register0x00000020 + -0x90) = 0x43c4013;
            (*vtableDispatch)((int)pIVar5,(int)pIVar3,pIVar50,pMVar45);
            pIVar50 = __this_05->m_Items[0x28];
            if (pIVar50 == (Il2CppObject *)0x0) goto label_043c45cd;
            pIVar5 = __this_05->m_Items[4];
            pIVar3 = __this_05->m_Items[5];
            pMVar45 = pIVar50->klass->vtable[0x17].method;
            vtableDispatch = pIVar50->klass->vtable[0x17].methodPtr;
            *(undefined8 *)((long)register0x00000020 + -0x90) = 0x43c403f;
            (*vtableDispatch)((int)pIVar5,(int)pIVar3,pIVar50,pMVar45);
            pIVar50 = __this_05->m_Items[0x29];
            if (pIVar50 == (Il2CppObject *)0x0) goto label_043c45cd;
            uVar57 = SUB84(__this_05->m_Items[6],0);
          }
          else {
            if (pIVar50 == (Il2CppObject *)0x0) goto label_043c45cd;
            pIVar5 = __this_05->m_Items[10];
            pIVar3 = __this_05->m_Items[0xb];
            pMVar45 = pIVar50->klass->vtable[0x17].method;
            vtableDispatch = pIVar50->klass->vtable[0x17].methodPtr;
            *(undefined8 *)((long)register0x00000020 + -0x90) = 0x43c3f9e;
            (*vtableDispatch)((int)pIVar5,(int)pIVar3,pIVar50,pMVar45);
            pIVar50 = __this_05->m_Items[0x28];
            if (pIVar50 == (Il2CppObject *)0x0) goto label_043c45cd;
            pIVar5 = __this_05->m_Items[10];
            pIVar3 = __this_05->m_Items[0xb];
            pMVar45 = pIVar50->klass->vtable[0x17].method;
            vtableDispatch = pIVar50->klass->vtable[0x17].methodPtr;
            *(undefined8 *)((long)register0x00000020 + -0x90) = 0x43c3fca;
            (*vtableDispatch)((int)pIVar5,(int)pIVar3,pIVar50,pMVar45);
            pIVar50 = __this_05->m_Items[0x29];
            if (pIVar50 == (Il2CppObject *)0x0) goto label_043c45cd;
            uVar57 = SUB84(__this_05->m_Items[0xc],0);
          }
          vtableDispatch = pIVar50->klass->vtable[0x17].methodPtr;
          *(undefined8 *)((long)register0x00000020 + -0x90) = 0x43c406b;
          (*vtableDispatch)(uVar57);
        }
        if (0.0 < *(float *)((long)register0x00000020 + -0x80)) {
label_043c40d5:
          pUVar17 = (UnityEngine_Component_o *)__this_05->m_Items[0x29];
          if (pUVar17 == (UnityEngine_Component_o *)0x0) goto label_043c45cd;
          *(undefined8 *)((long)register0x00000020 + -0x90) = 0x43c40ec;
          pUVar29 = UnityEngine_Component__get_gameObject(pUVar17,(MethodInfo *)0x0);
          if (pUVar29 == (UnityEngine_GameObject_o *)0x0) goto label_043c45cd;
          *(undefined8 *)((long)register0x00000020 + -0x90) = 0x43c40ff;
          bVar25 = UnityEngine_GameObject__get_activeSelf(pUVar29,(MethodInfo *)0x0);
          if (((char)bVar25 != '\0') || (0.0 < *(float *)((long)__this_05->m_Items + 0x104)))
          goto label_043c42f1;
          pUVar17 = (UnityEngine_Component_o *)__this_05->m_Items[0x2a];
          if (pUVar17 == (UnityEngine_Component_o *)0x0) goto label_043c45cd;
          *(undefined8 *)((long)register0x00000020 + -0x90) = 0x43c412f;
          pUVar29 = UnityEngine_Component__get_gameObject(pUVar17,(MethodInfo *)0x0);
          if (pUVar29 == (UnityEngine_GameObject_o *)0x0) goto label_043c45cd;
          *(undefined8 *)((long)register0x00000020 + -0x90) = 0x43c4144;
          UnityEngine_GameObject__SetActive(pUVar29,0,(MethodInfo *)0x0);
          if (*(float *)((long)register0x00000020 + -0x80) <= 0.0) goto label_043c42f1;
          pUVar17 = (UnityEngine_Component_o *)__this_05->m_Items[0x29];
          if (pUVar17 == (UnityEngine_Component_o *)0x0) goto label_043c45cd;
          *(undefined8 *)((long)register0x00000020 + -0x90) = 0x43c416d;
          pUVar29 = UnityEngine_Component__get_gameObject(pUVar17,(MethodInfo *)0x0);
          if (pUVar29 == (UnityEngine_GameObject_o *)0x0) goto label_043c45cd;
          *(undefined8 *)((long)register0x00000020 + -0x90) = 0x43c4185;
          UnityEngine_GameObject__SetActive(pUVar29,1,(MethodInfo *)0x0);
          pUVar17 = (UnityEngine_Component_o *)__this_05->m_Items[0x2b];
          if (pUVar17 == (UnityEngine_Component_o *)0x0) goto label_043c45cd;
          *(undefined8 *)((long)register0x00000020 + -0x90) = 0x43c419c;
          pUVar29 = UnityEngine_Component__get_gameObject(pUVar17,(MethodInfo *)0x0);
          if (pUVar29 == (UnityEngine_GameObject_o *)0x0) goto label_043c45cd;
          *(undefined8 *)((long)register0x00000020 + -0x90) = 0x43c41b1;
          UnityEngine_GameObject__SetActive(pUVar29,0,(MethodInfo *)0x0);
          pUVar17 = (UnityEngine_Component_o *)__this_05->m_Items[0x27];
          if (pUVar17 == (UnityEngine_Component_o *)0x0) goto label_043c45cd;
          *(undefined8 *)((long)register0x00000020 + -0x90) = 0x43c41c8;
          pUVar29 = UnityEngine_Component__get_gameObject(pUVar17,(MethodInfo *)0x0);
          if (pUVar29 == (UnityEngine_GameObject_o *)0x0) goto label_043c45cd;
          *(undefined8 *)((long)register0x00000020 + -0x90) = 0x43c41e0;
          UnityEngine_GameObject__SetActive(pUVar29,1,(MethodInfo *)0x0);
          pUVar17 = (UnityEngine_Component_o *)__this_05->m_Items[0x28];
          if (pUVar17 == (UnityEngine_Component_o *)0x0) goto label_043c45cd;
          *(undefined8 *)((long)register0x00000020 + -0x90) = 0x43c41f7;
          pUVar29 = UnityEngine_Component__get_gameObject(pUVar17,(MethodInfo *)0x0);
          if (pUVar29 == (UnityEngine_GameObject_o *)0x0) goto label_043c45cd;
          *(undefined8 *)((long)register0x00000020 + -0x90) = 0x43c420f;
          UnityEngine_GameObject__SetActive(pUVar29,1,(MethodInfo *)0x0);
          pUVar18 = (UnityEngine_UI_Image_o *)__this_05->m_Items[0x28];
          if (pUVar18 == (UnityEngine_UI_Image_o *)0x0) goto label_043c45cd;
          pUVar13 = (UnityEngine_UI_Image_o *)__this_05->m_Items[0x27];
          *(undefined8 *)((long)register0x00000020 + -0x90) = 0x43c4233;
          UnityEngine_UI_Image__set_fillAmount
                    (pUVar18,*(float *)((long)register0x00000020 + -0x80),(MethodInfo *)0x0);
          if (pUVar13 == (UnityEngine_UI_Image_o *)0x0) goto label_043c45cd;
          *(undefined8 *)((long)register0x00000020 + -0x90) = 0x43c424c;
          UnityEngine_UI_Image__set_fillAmount
                    (pUVar13,*(float *)((long)register0x00000020 + -0x80),(MethodInfo *)0x0);
          pSVar41 = (System_Collections_Generic_List_object__o *)__this_05->m_Items[0x2e];
        }
        else {
          pUVar17 = (UnityEngine_Component_o *)__this_05->m_Items[0x2b];
          if (pUVar17 == (UnityEngine_Component_o *)0x0) goto label_043c45cd;
          *(undefined8 *)((long)register0x00000020 + -0x90) = 0x43c408c;
          pUVar29 = UnityEngine_Component__get_gameObject(pUVar17,(MethodInfo *)0x0);
          if (pUVar29 == (UnityEngine_GameObject_o *)0x0) goto label_043c45cd;
          *(undefined8 *)((long)register0x00000020 + -0x90) = 0x43c409f;
          bVar25 = UnityEngine_GameObject__get_activeSelf(pUVar29,(MethodInfo *)0x0);
          if ((char)bVar25 != '\0') goto label_043c40d5;
          pUVar17 = (UnityEngine_Component_o *)__this_05->m_Items[0x2a];
          if (pUVar17 == (UnityEngine_Component_o *)0x0) goto label_043c45cd;
          *(undefined8 *)((long)register0x00000020 + -0x90) = 0x43c40ba;
          pUVar29 = UnityEngine_Component__get_gameObject(pUVar17,(MethodInfo *)0x0);
          if (pUVar29 == (UnityEngine_GameObject_o *)0x0) goto label_043c45cd;
          *(undefined8 *)((long)register0x00000020 + -0x90) = 0x43c40cd;
          bVar25 = UnityEngine_GameObject__get_activeSelf(pUVar29,(MethodInfo *)0x0);
          if ((char)bVar25 != '\0') goto label_043c40d5;
          pUVar17 = (UnityEngine_Component_o *)__this_05->m_Items[0x2b];
          if (pUVar17 == (UnityEngine_Component_o *)0x0) goto label_043c45cd;
          *(undefined8 *)((long)register0x00000020 + -0x90) = 0x43c4278;
          pUVar29 = UnityEngine_Component__get_gameObject(pUVar17,(MethodInfo *)0x0);
          if (pUVar29 == (UnityEngine_GameObject_o *)0x0) goto label_043c45cd;
          *(undefined8 *)((long)register0x00000020 + -0x90) = 0x43c4290;
          UnityEngine_GameObject__SetActive(pUVar29,1,(MethodInfo *)0x0);
          pUVar17 = (UnityEngine_Component_o *)__this_05->m_Items[0x2b];
          if (pUVar17 == (UnityEngine_Component_o *)0x0) goto label_043c45cd;
          *(undefined8 *)((long)register0x00000020 + -0x90) = 0x43c42af;
          pUVar30 = (UnityEngine_Animator_o *)
                    UnityEngine_Component__GetComponent_object_(pUVar17,(MethodInfo_24E7B40 *)MethodInfo_Animator_GetComponent_Animator);
          if (pUVar30 == (UnityEngine_Animator_o *)0x0) goto label_043c45cd;
          *(undefined8 *)((long)register0x00000020 + -0x90) = 0x43c42c5;
          UnityEngine_Animator__Update(pUVar30,0.0,(MethodInfo *)0x0);
          pUVar17 = (UnityEngine_Component_o *)__this_05->m_Items[0x29];
          if (pUVar17 == (UnityEngine_Component_o *)0x0) goto label_043c45cd;
          *(undefined8 *)((long)register0x00000020 + -0x90) = 0x43c42dc;
          pUVar29 = UnityEngine_Component__get_gameObject(pUVar17,(MethodInfo *)0x0);
          if (pUVar29 == (UnityEngine_GameObject_o *)0x0) goto label_043c45cd;
          *(undefined8 *)((long)register0x00000020 + -0x90) = 0x43c42f1;
          UnityEngine_GameObject__SetActive(pUVar29,0,(MethodInfo *)0x0);
label_043c42f1:
          pSVar41 = (System_Collections_Generic_List_object__o *)__this_05->m_Items[0x2e];
        }
        if (pSVar41 != (System_Collections_Generic_List_object__o *)0x0) {
          iVar26 = (pSVar41->fields)._size;
          *(long **)((long)register0x00000020 + -0x78) = plVar52;
          fVar56 = (((UnityEngine_Vector4_o *)
                    ((long)((Il2CppType *)((System_Object_array *)plVar52)->m_Items + 2) + 8))->fields).x;
          if ((int)fVar56 < iVar26) {
            if (iVar26 - (int)fVar56 < 1) {
              return;
            }
            iVar44 = 0;
            do {
              *(undefined8 *)((long)register0x00000020 + -0x90) = 0x43c433d;
              pUVar35 = (UnityEngine_Object_o *)
                        System_Collections_Generic_List_object___get_Item(pSVar41,0,MethodInfo_GameObject_get_Item);
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                *(undefined8 *)((long)register0x00000020 + -0x90) = 0x43c4358;
                il2cpp_runtime_helper_02337ed0();
              }
              *(undefined8 *)((long)register0x00000020 + -0x90) = 0x43c4362;
              UnityEngine_Object__Destroy_4e01c60(pUVar35,(MethodInfo *)0x0);
              pSVar41 = (System_Collections_Generic_List_object__o *)__this_05->m_Items[0x2f];
              if (pSVar41 == (System_Collections_Generic_List_object__o *)0x0) break;
              *(undefined8 *)((long)register0x00000020 + -0x90) = 0x43c437c;
              pUVar35 = (UnityEngine_Object_o *)
                        System_Collections_Generic_List_object___get_Item(pSVar41,0,MethodInfo_GameObject_get_Item);
              *(undefined8 *)((long)register0x00000020 + -0x90) = 0x43c4386;
              UnityEngine_Object__Destroy_4e01c60(pUVar35,(MethodInfo *)0x0);
              pSVar41 = (System_Collections_Generic_List_object__o *)__this_05->m_Items[0x2e];
              if (pSVar41 == (System_Collections_Generic_List_object__o *)0x0) break;
              *(undefined8 *)((long)register0x00000020 + -0x90) = 0x43c43a1;
              System_Collections_Generic_List_object___RemoveAt(pSVar41,0,MethodInfo_Void_RemoveAt);
              pSVar41 = (System_Collections_Generic_List_object__o *)__this_05->m_Items[0x2f];
              if (pSVar41 == (System_Collections_Generic_List_object__o *)0x0) break;
              *(undefined8 *)((long)register0x00000020 + -0x90) = 0x43c43bc;
              System_Collections_Generic_List_object___RemoveAt(pSVar41,0,MethodInfo_Void_RemoveAt);
              iVar44 = iVar44 + 1;
              if (iVar26 - *(int *)(*(long *)((long)register0x00000020 + -0x78) + 0x48) <= iVar44) {
                return;
              }
              pSVar41 = (System_Collections_Generic_List_object__o *)__this_05->m_Items[0x2e];
            } while (pSVar41 != (System_Collections_Generic_List_object__o *)0x0);
          }
          else {
            if ((int)fVar56 <= iVar26) {
              return;
            }
            if ((int)fVar56 - iVar26 < 1) {
              return;
            }
            pUVar29 = (UnityEngine_GameObject_o *)__this_05->m_Items[0x2c];
            if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
              iVar44 = 0;
              *(System_Object_array **)((long)register0x00000020 + -0x80) = __this_05;
              do {
                *(undefined8 *)((long)register0x00000020 + -0x90) = 0x43c4427;
                pUVar36 = UnityEngine_GameObject__get_transform(pUVar29,(MethodInfo *)0x0);
                *(undefined8 *)((long)register0x00000020 + -0x90) = 0x43c4435;
                pUVar29 = UI_ElementFactory__InstantiateAndBind(pUVar36,"Prefabs/InGame/HUDBladeAmmo",(MethodInfo *)0x0);
                lVar33 = MethodInfo_Void_Add;
                if (pSVar41 == (System_Collections_Generic_List_object__o *)0x0) break;
                piVar1 = &(pSVar41->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar48 = (pSVar41->fields)._items;
                if (pSVar48 == (System_Object_array *)0x0) break;
                uVar27 = (pSVar41->fields)._size;
                if (uVar27 < (uint)pSVar48->max_length) {
                  (pSVar41->fields)._size = uVar27 + 1;
                  pSVar48->m_Items[(int)uVar27] = (Il2CppObject *)pUVar29;
                  *(undefined8 *)((long)register0x00000020 + -0x90) = 0x43c447d;
                  il2cpp_runtime_helper_022b4080(pSVar48->m_Items + (int)uVar27);
                  pUVar29 = *(UnityEngine_GameObject_o **)
                             (*(long *)((long)register0x00000020 + -0x80) + 0x188);
                }
                else {
                  pMVar14 = *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar33 + 0x20) + 0xc0) + 0x70);
                  *(undefined8 *)((long)register0x00000020 + -0x90) = 0x43c44ba;
                  System_Collections_Generic_List_object___AddWithResize
                            (pSVar41,(Il2CppObject *)pUVar29,pMVar14);
                  pUVar29 = *(UnityEngine_GameObject_o **)
                             (*(long *)((long)register0x00000020 + -0x80) + 0x188);
                }
                if (pUVar29 == (UnityEngine_GameObject_o *)0x0) break;
                *(undefined8 *)((long)register0x00000020 + -0x90) = 0x43c44d9;
                pUVar36 = UnityEngine_GameObject__get_transform(pUVar29,(MethodInfo *)0x0);
                *(undefined8 *)((long)register0x00000020 + -0x90) = 0x43c44ea;
                pUVar29 = UI_ElementFactory__InstantiateAndBind(pUVar36,"Prefabs/InGame/HUDBladeAmmo",(MethodInfo *)0x0);
                if (pUVar29 == (UnityEngine_GameObject_o *)0x0) break;
                *(undefined8 *)((long)register0x00000020 + -0x90) = 0x43c4500;
                pUVar36 = UnityEngine_GameObject__get_transform(pUVar29,(MethodInfo *)0x0);
                *(undefined8 *)((long)register0x00000020 + -0x90) = 0x43c4514;
                UVar68 = UnityEngine_Quaternion__Internal_FromEulerRad
                                   ((UnityEngine_Vector3_o)ZEXT812(0x40490fdb00000000),(MethodInfo *)0x0);
                if (pUVar36 == (UnityEngine_Transform_o *)0x0) break;
                *(undefined8 *)((long)register0x00000020 + -0x90) = 0x43c4527;
                UnityEngine_Transform__set_localRotation(pUVar36,UVar68,(MethodInfo *)0x0);
                lVar33 = MethodInfo_Void_Add;
                pSVar41 = *(System_Collections_Generic_List_object__o **)
                           (*(long *)((long)register0x00000020 + -0x80) + 0x198);
                if (pSVar41 == (System_Collections_Generic_List_object__o *)0x0) break;
                piVar1 = &(pSVar41->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar48 = (pSVar41->fields)._items;
                if (pSVar48 == (System_Object_array *)0x0) break;
                uVar27 = (pSVar41->fields)._size;
                if (uVar27 < (uint)pSVar48->max_length) {
                  (pSVar41->fields)._size = uVar27 + 1;
                  pSVar48->m_Items[(int)uVar27] = (Il2CppObject *)pUVar29;
                  *(undefined8 *)((long)register0x00000020 + -0x90) = 0x43c4577;
                  il2cpp_runtime_helper_022b4080(pSVar48->m_Items + (int)uVar27);
                }
                else {
                  pMVar14 = *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar33 + 0x20) + 0xc0) + 0x70);
                  *(undefined8 *)((long)register0x00000020 + -0x90) = 0x43c4597;
                  System_Collections_Generic_List_object___AddWithResize
                            (pSVar41,(Il2CppObject *)pUVar29,pMVar14);
                }
                iVar44 = iVar44 + 1;
                if (*(int *)(*(long *)((long)register0x00000020 + -0x78) + 0x48) - iVar26 <= iVar44) {
                  return;
                }
                pUVar29 = *(UnityEngine_GameObject_o **)(*(long *)((long)register0x00000020 + -0x80) + 0x180);
                pSVar41 = *(System_Collections_Generic_List_object__o **)
                           (*(long *)((long)register0x00000020 + -0x80) + 400);
              } while (pUVar29 != (UnityEngine_GameObject_o *)0x0);
            }
          }
        }
label_043c45cd:
        *(undefined8 *)((long)register0x00000020 + -0x90) = 0x43c45d2;
        il2cpp_runtime_helper_022b2c90();
        return;
      }
      *(undefined8 *)((long)register0x00000020 + -0x90) = 0x43c45e9;
      pIVar46 = TypeInfo_BladeWeapon;
      pSVar48 = (System_Object_array *)plVar52;
      il2cpp_runtime_helper_022b2fd0();
      *(System_Object_array **)((long)register0x00000020 + -0x90) = __this_05;
      *(System_Object_array **)((long)register0x00000020 + -0x98) = pSVar51;
      *(Il2CppClass **)((long)register0x00000020 + -0xa0) = unaff_R13;
      *(Il2CppClass **)((long)register0x00000020 + -0xa8) = pIVar39;
      *(System_Object_array **)((long)register0x00000020 + -0xb0) = __this_04;
      puVar42 = (undefined1 *)((long)register0x00000020 + -0xc0);
      if (g_data_057ae3e2 == '\0') {
        *(undefined8 *)((long)register0x00000020 + -200) = 0x43c4615;
        il2cpp_runtime_helper_023445d0(&TypeInfo_AmmoWeapon);
        g_data_057ae3e2 = '\x01';
      }
      if ((*(long *)((long)((Il2CppType *)pSVar48->m_Items + 0xe) + 8) == 0) ||
         (pSVar51 = *(System_Object_array **)
                     (*(long *)((long)((Il2CppType *)pSVar48->m_Items + 0xe) + 8) + 0x100),
         pSVar51 == (System_Object_array *)0x0)) {
label_043c4ab9:
        *(undefined8 *)((long)register0x00000020 + -200) = 0x43c4abe;
        il2cpp_runtime_helper_022b2c90();
      }
      else {
        pIVar37 = (pSVar51->obj).klass;
        bVar6 = (TypeInfo_AmmoWeapon->_2).naturalAligment;
        pIVar46 = TypeInfo_AmmoWeapon;
        if ((bVar6 <= (pIVar37->_2).naturalAligment) &&
           ((pIVar37->_2).typeHierarchy[(ulong)bVar6 - 1] == TypeInfo_AmmoWeapon)) {
          iVar26 = *(int *)((long)pSVar51->m_Items + 0x24);
          if (iVar26 < 1) {
            if (*(int *)(pSVar51->m_Items + 5) == -1) {
              fVar56 = 1.0;
              pUVar18 = *(UnityEngine_UI_Image_o **)((long)((Il2CppType *)pSVar48->m_Items + 0x18) + 8);
            }
            else {
              fVar56 = 0.0;
              pUVar18 = *(UnityEngine_UI_Image_o **)((long)((Il2CppType *)pSVar48->m_Items + 0x18) + 8);
            }
          }
          else {
            fVar56 = (float)*(int *)(pSVar51->m_Items + 5) / (float)iVar26;
            pUVar18 = *(UnityEngine_UI_Image_o **)((long)((Il2CppType *)pSVar48->m_Items + 0x18) + 8);
          }
          if (pUVar18 != (UnityEngine_UI_Image_o *)0x0) {
            __this_04 = ((Il2CppType *)pSVar48->m_Items)[0x18].data;
            pIVar46 = (Il2CppClass *)0x0;
            *(float *)((long)register0x00000020 + -0xb4) = fVar56;
            *(undefined8 *)((long)register0x00000020 + -200) = 0x43c46dc;
            UnityEngine_UI_Image__set_fillAmount(pUVar18,fVar56,(MethodInfo *)0x0);
            if (__this_04 != (System_Object_array *)0x0) {
              pIVar46 = (Il2CppClass *)0x0;
              *(undefined8 *)((long)register0x00000020 + -200) = 0x43c46f5;
              UnityEngine_UI_Image__set_fillAmount
                        ((UnityEngine_UI_Image_o *)__this_04,*(float *)((long)register0x00000020 + -0xb4),
                         (MethodInfo *)0x0);
              if (*(float *)((long)register0x00000020 + -0xb4) <= 0.0) {
                if (((Il2CppType *)pSVar48->m_Items)[0x1a].data != (long *)0x0) {
                  pIVar37 = ((Il2CppType *)pSVar48->m_Items)[3].data;
                  lVar33 = *((Il2CppType *)pSVar48->m_Items)[0x1a].data;
                  pIVar46 = *(Il2CppClass **)(lVar33 + 0x2b0);
                  pcVar15 = *(code **)(lVar33 + 0x2a8);
                  *(undefined8 *)((long)register0x00000020 + -200) = 0x43c47cf;
                  (*pcVar15)((int)pIVar37);
                  plVar28 = *(long **)((long)((Il2CppType *)pSVar48->m_Items + 0x1b) + 8);
                  if (plVar28 != (long *)0x0) {
                    pIVar37 = ((Il2CppType *)pSVar48->m_Items)[3].data;
                    lVar33 = *plVar28;
                    pIVar46 = *(Il2CppClass **)(lVar33 + 0x2b0);
                    pcVar15 = *(code **)(lVar33 + 0x2a8);
                    *(undefined8 *)((long)register0x00000020 + -200) = 0x43c47fb;
                    (*pcVar15)((int)pIVar37);
                    plVar28 = ((Il2CppType *)pSVar48->m_Items)[0x1b].data;
                    if (plVar28 != (long *)0x0) {
                      uVar57 = SUB84(((Il2CppType *)pSVar48->m_Items)[3].data,0);
                      goto label_043c4886;
                    }
                  }
                }
              }
              else {
                plVar28 = ((Il2CppType *)pSVar48->m_Items)[0x1a].data;
                if (*(float *)((long)register0x00000020 + -0xb4) <= 0.5) {
                  if (plVar28 != (long *)0x0) {
                    pvVar38 = ((Il2CppType *)pSVar48->m_Items)[1].data;
                    pIVar46 = *(Il2CppClass **)(*plVar28 + 0x2b0);
                    pcVar15 = *(code **)(*plVar28 + 0x2a8);
                    *(undefined8 *)((long)register0x00000020 + -200) = 0x43c483e;
                    (*pcVar15)((int)pvVar38);
                    plVar28 = *(long **)((long)((Il2CppType *)pSVar48->m_Items + 0x1b) + 8);
                    if (plVar28 != (long *)0x0) {
                      pvVar38 = ((Il2CppType *)pSVar48->m_Items)[1].data;
                      lVar33 = *plVar28;
                      pIVar46 = *(Il2CppClass **)(lVar33 + 0x2b0);
                      pcVar15 = *(code **)(lVar33 + 0x2a8);
                      *(undefined8 *)((long)register0x00000020 + -200) = 0x43c486a;
                      (*pcVar15)((int)pvVar38);
                      plVar28 = ((Il2CppType *)pSVar48->m_Items)[0x1b].data;
                      if (plVar28 != (long *)0x0) {
                        uVar57 = SUB84(((Il2CppType *)pSVar48->m_Items)[1].data,0);
                        goto label_043c4886;
                      }
                    }
                  }
                }
                else if (plVar28 != (long *)0x0) {
                  pUVar4 = ((Il2CppType *)pSVar48->m_Items)[6].data;
                  pIVar46 = *(Il2CppClass **)(*plVar28 + 0x2b0);
                  pcVar15 = *(code **)(*plVar28 + 0x2a8);
                  *(undefined8 *)((long)register0x00000020 + -200) = 0x43c474a;
                  (*pcVar15)((int)pUVar4);
                  plVar28 = *(long **)((long)((Il2CppType *)pSVar48->m_Items + 0x1b) + 8);
                  if (plVar28 != (long *)0x0) {
                    pUVar4 = ((Il2CppType *)pSVar48->m_Items)[6].data;
                    lVar33 = *plVar28;
                    pIVar46 = *(Il2CppClass **)(lVar33 + 0x2b0);
                    pcVar15 = *(code **)(lVar33 + 0x2a8);
                    *(undefined8 *)((long)register0x00000020 + -200) = 0x43c477c;
                    (*pcVar15)((int)pUVar4);
                    plVar28 = ((Il2CppType *)pSVar48->m_Items)[0x1b].data;
                    if (plVar28 != (long *)0x0) {
                      uVar57 = SUB84(((Il2CppType *)pSVar48->m_Items)[6].data,0);
label_043c4886:
                      pcVar15 = *(code **)(*plVar28 + 0x2a8);
                      *(undefined8 *)((long)register0x00000020 + -200) = 0x43c4896;
                      (*pcVar15)(uVar57);
                      unaff_R13 = ((Il2CppType *)pSVar48->m_Items)[0x19].data;
                      __this_04 = *(System_Object_array **)((long)((Il2CppType *)pSVar48->m_Items + 0x19) + 8)
                      ;
                      pSVar51 = (System_Object_array *)(pSVar51->m_Items + 4);
                      pIVar46 = (Il2CppClass *)0x0;
                      *(undefined8 *)((long)register0x00000020 + -200) = 0x43c48b2;
                      pIVar37 = (Il2CppClass *)System_Int32__ToString((int32_t)pSVar51,(MethodInfo *)0x0);
                      if (__this_04 != (System_Object_array *)0x0) {
                        pUVar16 = ((Il2CppClass_1 *)&__this_04->obj)->image;
                        pMVar45 = (pUVar16->vtable)._75_unknown.method;
                        vtableDispatch = (pUVar16->vtable)._75_unknown.methodPtr;
                        *(undefined8 *)((long)register0x00000020 + -200) = 0x43c48d4;
                        pIVar46 = pIVar37;
                        (*vtableDispatch)(__this_04,pIVar37,pMVar45);
                        pIVar39 = pIVar37;
                        if (unaff_R13 != (Il2CppClass *)0x0) {
                          vtableDispatch = (unaff_R13->_1).image;
                          uVar40 = *(undefined8 *)(vtableDispatch + 0x5f0);
                          pcVar15 = *(code **)(vtableDispatch + 0x5e8);
                          *(undefined8 *)((long)register0x00000020 + -200) = 0x43c48f4;
                          pIVar46 = pIVar37;
                          (*pcVar15)(unaff_R13,pIVar37,uVar40);
                          plVar28 = ((Il2CppType *)pSVar48->m_Items)[0x19].data;
                          if (*(int *)&(pSVar51->obj).klass == 0) {
                            if (plVar28 != (long *)0x0) {
                              pIVar46 = *(Il2CppClass **)(*plVar28 + 0x2b0);
                              pcVar15 = *(code **)(*plVar28 + 0x2a8);
                              *(undefined8 *)((long)register0x00000020 + -200) = 0x43c49cd;
                              (*pcVar15)(0x3f800000);
                              plVar28 = *(long **)((long)((Il2CppType *)pSVar48->m_Items + 0x19) + 8);
                              if (plVar28 != (long *)0x0) {
                                lVar33 = *plVar28;
                                pIVar46 = *(Il2CppClass **)(lVar33 + 0x2b0);
                                pcVar15 = *(code **)(lVar33 + 0x2a8);
                                *(undefined8 *)((long)register0x00000020 + -200) = 0x43c49fc;
                                (*pcVar15)(0x3f800000);
                                pUVar17 = ((Il2CppType *)pSVar48->m_Items)[0x1a].data;
                                goto joined_r0x043c4a06;
                              }
                            }
                          }
                          else if (plVar28 != (long *)0x0) {
                            pIVar46 = *(Il2CppClass **)(*plVar28 + 0x2b0);
                            pcVar15 = *(code **)(*plVar28 + 0x2a8);
                            *(undefined8 *)((long)register0x00000020 + -200) = 0x43c4928;
                            (*pcVar15)();
                            plVar28 = *(long **)((long)((Il2CppType *)pSVar48->m_Items + 0x19) + 8);
                            if (plVar28 != (long *)0x0) {
                              lVar33 = *plVar28;
                              pIVar46 = *(Il2CppClass **)(lVar33 + 0x2b0);
                              pcVar15 = *(code **)(lVar33 + 0x2a8);
                              *(undefined8 *)((long)register0x00000020 + -200) = 0x43c4952;
                              (*pcVar15)();
                              pUVar17 = ((Il2CppType *)pSVar48->m_Items)[0x1a].data;
joined_r0x043c4a06:
                              if (pUVar17 != (UnityEngine_Component_o *)0x0) {
                                pIVar46 = (Il2CppClass *)0x0;
                                *(undefined8 *)((long)register0x00000020 + -200) = 0x43c4969;
                                pUVar29 = UnityEngine_Component__get_gameObject(pUVar17,(MethodInfo *)0x0);
                                if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                                  pIVar46 = (Il2CppClass *)0x0;
                                  *(undefined8 *)((long)register0x00000020 + -200) = 0x43c497c;
                                  bVar25 = UnityEngine_GameObject__get_activeSelf(pUVar29,(MethodInfo *)0x0);
                                  if ((((char)bVar25 != '\0') ||
                                      (0.0 < *(float *)((long)((Il2CppType *)pSVar48->m_Items + 0x10) + 4)))
                                     || (0.0 < *(float *)((long)((Il2CppType *)pSVar48->m_Items + 0x10) + 8)))
                                  {
                                    return;
                                  }
                                  pUVar17 = ((Il2CppType *)pSVar48->m_Items)[0x1a].data;
                                  if (pUVar17 != (UnityEngine_Component_o *)0x0) {
                                    pIVar46 = (Il2CppClass *)0x0;
                                    *(undefined8 *)((long)register0x00000020 + -200) = 0x43c4a28;
                                    pUVar29 = UnityEngine_Component__get_gameObject(pUVar17,(MethodInfo *)0x0)
                                    ;
                                    if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                                      pIVar46 = (Il2CppClass *)0x1;
                                      *(undefined8 *)((long)register0x00000020 + -200) = 0x43c4a40;
                                      UnityEngine_GameObject__SetActive(pUVar29,1,(MethodInfo *)0x0);
                                      pUVar17 = *(UnityEngine_Component_o **)
                                                 ((long)((Il2CppType *)pSVar48->m_Items + 0x1b) + 8);
                                      if (pUVar17 != (UnityEngine_Component_o *)0x0) {
                                        pIVar46 = (Il2CppClass *)0x0;
                                        *(undefined8 *)((long)register0x00000020 + -200) = 0x43c4a53;
                                        pUVar29 = UnityEngine_Component__get_gameObject
                                                            (pUVar17,(MethodInfo *)0x0);
                                        if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                                          pIVar46 = (Il2CppClass *)0x0;
                                          *(undefined8 *)((long)register0x00000020 + -200) = 0x43c4a64;
                                          UnityEngine_GameObject__SetActive(pUVar29,0,(MethodInfo *)0x0);
                                          pUVar17 = *(UnityEngine_Component_o **)
                                                     ((long)((Il2CppType *)pSVar48->m_Items + 0x1a) + 8);
                                          if (pUVar17 != (UnityEngine_Component_o *)0x0) {
                                            pIVar46 = (Il2CppClass *)0x0;
                                            *(undefined8 *)((long)register0x00000020 + -200) = 0x43c4a77;
                                            pUVar29 = UnityEngine_Component__get_gameObject
                                                                (pUVar17,(MethodInfo *)0x0);
                                            if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                                              pIVar46 = (Il2CppClass *)0x0;
                                              *(undefined8 *)((long)register0x00000020 + -200) = 0x43c4a88;
                                              UnityEngine_GameObject__SetActive(pUVar29,0,(MethodInfo *)0x0);
                                              pUVar17 = ((Il2CppType *)pSVar48->m_Items)[0x1b].data;
                                              if (pUVar17 != (UnityEngine_Component_o *)0x0) {
                                                pIVar46 = (Il2CppClass *)0x0;
                                                *(undefined8 *)((long)register0x00000020 + -200) = 0x43c4a9b;
                                                pUVar29 = UnityEngine_Component__get_gameObject
                                                                    (pUVar17,(MethodInfo *)0x0);
                                                if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                                                  UnityEngine_GameObject__SetActive
                                                            (pUVar29,0,(MethodInfo *)0x0);
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
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          goto label_043c4ab9;
        }
      }
      *(undefined8 *)((long)register0x00000020 + -200) = 0x43c4ac6;
      __this_05 = pSVar51;
      pvVar38 = (void *)il2cpp_runtime_helper_022b2fd0();
    }
    *(long **)(puVar42 + -8) = plVar52;
    *(System_Object_array **)(puVar42 + -0x10) = pSVar48;
    *(System_Object_array **)(puVar42 + -0x18) = pSVar51;
    *(Il2CppClass **)(puVar42 + -0x20) = unaff_R13;
    *(Il2CppClass **)(puVar42 + -0x28) = pIVar39;
    *(System_Object_array **)(puVar42 + -0x30) = __this_04;
    *(void **)(puVar42 + -0x38) = pvVar38;
    if (g_data_057ae3e3 == '\0') {
      *(undefined8 *)(puVar42 + -0x40) = 0x43c4af3;
      il2cpp_runtime_helper_023445d0(&TypeInfo_AmmoWeapon);
      g_data_057ae3e3 = '\x01';
    }
    if ((*(Characters_Human_o **)((long)((UnityEngine_Color_o *)__this_05->m_Items + 0xe) + 8) ==
         (Characters_Human_o *)0x0) ||
       (pSVar51 = ((*(Characters_Human_o **)((long)((UnityEngine_Color_o *)__this_05->m_Items + 0xe) + 8))->
                  fields).crossfadeCache, pSVar51 == (System_Object_array *)0x0)) {
label_043c52c4:
      *(undefined8 *)(puVar42 + -0x40) = 0x43c52c9;
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      pIVar39 = (pSVar51->obj).klass;
      bVar6 = (TypeInfo_AmmoWeapon->_2).naturalAligment;
      pIVar46 = TypeInfo_AmmoWeapon;
      if ((bVar6 <= (pIVar39->_2).naturalAligment) &&
         ((pIVar39->_2).typeHierarchy[(ulong)bVar6 - 1] == TypeInfo_AmmoWeapon)) {
        __this_04 = (System_Object_array *)__this_05->m_Items[0x32];
        pIVar50 = __this_05->m_Items[0x33];
        pSVar48 = (System_Object_array *)(pSVar51->m_Items + 4);
        pIVar46 = (Il2CppClass *)0x0;
        *(undefined8 *)(puVar42 + -0x40) = 0x43c4b6b;
        pIVar39 = (Il2CppClass *)System_Int32__ToString((int32_t)pSVar48,(MethodInfo *)0x0);
        if (pIVar50 != (Il2CppObject *)0x0) {
          pMVar45 = pIVar50->klass->vtable[0x4b].method;
          vtableDispatch = pIVar50->klass->vtable[0x4b].methodPtr;
          *(undefined8 *)(puVar42 + -0x40) = 0x43c4b8e;
          pIVar46 = pIVar39;
          (*vtableDispatch)(pIVar50,pIVar39,pMVar45);
          unaff_R13 = pIVar39;
          if (__this_04 != (System_Object_array *)0x0) {
            pUVar16 = ((Il2CppClass_1 *)&__this_04->obj)->image;
            pMVar45 = (pUVar16->vtable)._75_unknown.method;
            vtableDispatch = (pUVar16->vtable)._75_unknown.methodPtr;
            *(undefined8 *)(puVar42 + -0x40) = 0x43c4bad;
            pIVar46 = pIVar39;
            (*vtableDispatch)(__this_04,pIVar39,pMVar45);
            pIVar50 = __this_05->m_Items[0x32];
            if (*(int *)&((Il2CppClass_1 *)&pSVar48->obj)->image == 0) {
              if (pIVar50 != (Il2CppObject *)0x0) {
                pIVar46 = (Il2CppClass *)pIVar50->klass->vtable[0x17].method;
                vtableDispatch = pIVar50->klass->vtable[0x17].methodPtr;
                *(undefined8 *)(puVar42 + -0x40) = 0x43c4cfb;
                (*vtableDispatch)(0x3f800000);
                if (__this_05->m_Items[0x33] != (Il2CppObject *)0x0) {
                  pIVar39 = __this_05->m_Items[0x33]->klass;
                  pIVar46 = (Il2CppClass *)pIVar39->vtable[0x17].method;
                  vtableDispatch = pIVar39->vtable[0x17].methodPtr;
                  *(undefined8 *)(puVar42 + -0x40) = 0x43c4d2b;
                  (*vtableDispatch)(0x3f800000);
                  iVar26 = *(int *)(pSVar51->m_Items + 5);
                  if (iVar26 != 1) goto label_043c4c1a;
label_043c4d38:
                  if (__this_05->m_Items[0x3a] != (Il2CppObject *)0x0) {
                    __this_04 = (System_Object_array *)(__this_05->m_Items + 2);
                    pSVar49 = (System_Object_array *)(__this_05->m_Items + 6);
                    if (0 < *(int *)&((Il2CppClass_1 *)&pSVar48->obj)->image) {
                      pSVar49 = __this_04;
                    }
                    pUVar16 = ((Il2CppClass_1 *)&pSVar49->obj)->image;
                    pIVar39 = __this_05->m_Items[0x3a]->klass;
                    pIVar46 = (Il2CppClass *)pIVar39->vtable[0x17].method;
                    vtableDispatch = pIVar39->vtable[0x17].methodPtr;
                    *(undefined8 *)(puVar42 + -0x40) = 0x43c4d81;
                    (*vtableDispatch)((int)pUVar16);
                    if (__this_05->m_Items[0x3b] != (Il2CppObject *)0x0) {
                      pIVar50 = __this_05->m_Items[2];
                      pIVar39 = __this_05->m_Items[0x3b]->klass;
                      pIVar46 = (Il2CppClass *)pIVar39->vtable[0x17].method;
                      vtableDispatch = pIVar39->vtable[0x17].methodPtr;
                      *(undefined8 *)(puVar42 + -0x40) = 0x43c4db0;
                      (*vtableDispatch)((int)pIVar50);
                      if (__this_05->m_Items[0x38] != (Il2CppObject *)0x0) {
                        pIVar50 = __this_05->m_Items[2];
                        pIVar39 = __this_05->m_Items[0x38]->klass;
                        pIVar46 = (Il2CppClass *)pIVar39->vtable[0x17].method;
                        vtableDispatch = pIVar39->vtable[0x17].methodPtr;
                        *(undefined8 *)(puVar42 + -0x40) = 0x43c4ddf;
                        (*vtableDispatch)((int)pIVar50);
                        if (__this_05->m_Items[0x39] != (Il2CppObject *)0x0) {
                          pIVar50 = __this_05->m_Items[2];
                          pIVar39 = __this_05->m_Items[0x39]->klass;
                          pIVar46 = (Il2CppClass *)pIVar39->vtable[0x17].method;
                          vtableDispatch = pIVar39->vtable[0x17].methodPtr;
                          *(undefined8 *)(puVar42 + -0x40) = 0x43c4e0e;
                          (*vtableDispatch)((int)pIVar50);
                          if (__this_05->m_Items[0x3e] != (Il2CppObject *)0x0) {
                            pIVar50 = __this_05->m_Items[2];
                            pIVar39 = __this_05->m_Items[0x3e]->klass;
                            pIVar46 = (Il2CppClass *)pIVar39->vtable[0x17].method;
                            vtableDispatch = pIVar39->vtable[0x17].methodPtr;
                            *(undefined8 *)(puVar42 + -0x40) = 0x43c4e3d;
                            (*vtableDispatch)((int)pIVar50);
                            pIVar50 = __this_05->m_Items[0x3f];
                            if (pIVar50 != (Il2CppObject *)0x0) {
                              uVar57 = SUB84(((Il2CppClass_1 *)&__this_04->obj)->image,0);
                              goto label_043c4eb3;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            else if (pIVar50 != (Il2CppObject *)0x0) {
              pIVar46 = (Il2CppClass *)pIVar50->klass->vtable[0x17].method;
              vtableDispatch = pIVar50->klass->vtable[0x17].methodPtr;
              *(undefined8 *)(puVar42 + -0x40) = 0x43c4be2;
              (*vtableDispatch)();
              if (__this_05->m_Items[0x33] != (Il2CppObject *)0x0) {
                pIVar39 = __this_05->m_Items[0x33]->klass;
                pIVar46 = (Il2CppClass *)pIVar39->vtable[0x17].method;
                vtableDispatch = pIVar39->vtable[0x17].methodPtr;
                *(undefined8 *)(puVar42 + -0x40) = 0x43c4c0d;
                (*vtableDispatch)();
                iVar26 = *(int *)(pSVar51->m_Items + 5);
                if (iVar26 == 1) goto label_043c4d38;
label_043c4c1a:
                if (iVar26 == 0) {
                  if (__this_05->m_Items[0x3a] != (Il2CppObject *)0x0) {
                    pIVar50 = __this_05->m_Items[6];
                    pIVar39 = __this_05->m_Items[0x3a]->klass;
                    pIVar46 = (Il2CppClass *)pIVar39->vtable[0x17].method;
                    vtableDispatch = pIVar39->vtable[0x17].methodPtr;
                    *(undefined8 *)(puVar42 + -0x40) = 0x43c4c51;
                    (*vtableDispatch)((int)pIVar50);
                    if (__this_05->m_Items[0x3b] != (Il2CppObject *)0x0) {
                      pIVar50 = __this_05->m_Items[6];
                      pIVar39 = __this_05->m_Items[0x3b]->klass;
                      pIVar46 = (Il2CppClass *)pIVar39->vtable[0x17].method;
                      vtableDispatch = pIVar39->vtable[0x17].methodPtr;
                      *(undefined8 *)(puVar42 + -0x40) = 0x43c4c80;
                      (*vtableDispatch)((int)pIVar50);
                      if (__this_05->m_Items[0x3e] != (Il2CppObject *)0x0) {
                        pIVar50 = __this_05->m_Items[6];
                        pIVar39 = __this_05->m_Items[0x3e]->klass;
                        pIVar46 = (Il2CppClass *)pIVar39->vtable[0x17].method;
                        vtableDispatch = pIVar39->vtable[0x17].methodPtr;
                        *(undefined8 *)(puVar42 + -0x40) = 0x43c4caf;
                        (*vtableDispatch)((int)pIVar50);
                        pIVar50 = __this_05->m_Items[0x3f];
                        if (pIVar50 != (Il2CppObject *)0x0) {
                          uVar57 = SUB84(__this_05->m_Items[6],0);
                          goto label_043c4eb3;
                        }
                      }
                    }
                  }
                }
                else if (__this_05->m_Items[0x38] != (Il2CppObject *)0x0) {
                  pIVar50 = __this_05->m_Items[0xc];
                  pIVar39 = __this_05->m_Items[0x38]->klass;
                  pIVar46 = (Il2CppClass *)pIVar39->vtable[0x17].method;
                  vtableDispatch = pIVar39->vtable[0x17].methodPtr;
                  *(undefined8 *)(puVar42 + -0x40) = 0x43c4e8e;
                  (*vtableDispatch)((int)pIVar50);
                  pIVar50 = __this_05->m_Items[0x39];
                  if (pIVar50 != (Il2CppObject *)0x0) {
                    uVar57 = SUB84(__this_05->m_Items[0xc],0);
label_043c4eb3:
                    pIVar46 = (Il2CppClass *)pIVar50->klass->vtable[0x17].method;
                    vtableDispatch = pIVar50->klass->vtable[0x17].methodPtr;
                    *(undefined8 *)(puVar42 + -0x40) = 0x43c4ec3;
                    (*vtableDispatch)(uVar57);
                    pUVar17 = (UnityEngine_Component_o *)__this_05->m_Items[0x3a];
                    if (pUVar17 != (UnityEngine_Component_o *)0x0) {
                      pIVar46 = (Il2CppClass *)0x0;
                      *(undefined8 *)(puVar42 + -0x40) = 0x43c4edb;
                      pUVar29 = UnityEngine_Component__get_gameObject(pUVar17,(MethodInfo *)0x0);
                      if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                        pIVar46 = (Il2CppClass *)0x0;
                        *(undefined8 *)(puVar42 + -0x40) = 0x43c4eee;
                        bVar25 = UnityEngine_GameObject__get_activeSelf(pUVar29,(MethodInfo *)0x0);
                        if (((char)bVar25 == '\0') || (*(int *)(pSVar51->m_Items + 5) < 2)) {
label_043c4f56:
                          pUVar17 = (UnityEngine_Component_o *)__this_05->m_Items[0x3b];
                          if (pUVar17 != (UnityEngine_Component_o *)0x0) {
                            pIVar46 = (Il2CppClass *)0x0;
                            *(undefined8 *)(puVar42 + -0x40) = 0x43c4f6e;
                            pUVar29 = UnityEngine_Component__get_gameObject(pUVar17,(MethodInfo *)0x0);
                            if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                              pIVar46 = (Il2CppClass *)0x0;
                              *(undefined8 *)(puVar42 + -0x40) = 0x43c4f81;
                              bVar25 = UnityEngine_GameObject__get_activeSelf(pUVar29,(MethodInfo *)0x0);
                              if (((char)bVar25 == '\0') || (*(int *)(pSVar51->m_Items + 5) < 1)) {
label_043c4fe9:
                                pUVar17 = (UnityEngine_Component_o *)__this_05->m_Items[0x3e];
                                if (pUVar17 != (UnityEngine_Component_o *)0x0) {
                                  pIVar46 = (Il2CppClass *)0x0;
                                  *(undefined8 *)(puVar42 + -0x40) = 0x43c5001;
                                  pUVar29 = UnityEngine_Component__get_gameObject(pUVar17,(MethodInfo *)0x0);
                                  if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                                    pIVar46 = (Il2CppClass *)0x0;
                                    *(undefined8 *)(puVar42 + -0x40) = 0x43c5014;
                                    bVar25 = UnityEngine_GameObject__get_activeSelf(pUVar29,(MethodInfo *)0x0)
                                    ;
                                    if (((char)bVar25 == '\0') ||
                                       (0.0 < *(float *)(__this_05->m_Items + 0x21))) {
label_043c5083:
                                      pUVar17 = (UnityEngine_Component_o *)__this_05->m_Items[0x3f];
                                      if (pUVar17 != (UnityEngine_Component_o *)0x0) {
                                        pIVar46 = (Il2CppClass *)0x0;
                                        *(undefined8 *)(puVar42 + -0x40) = 0x43c509b;
                                        pUVar29 = UnityEngine_Component__get_gameObject
                                                            (pUVar17,(MethodInfo *)0x0);
                                        if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                                          pIVar46 = (Il2CppClass *)0x0;
                                          *(undefined8 *)(puVar42 + -0x40) = 0x43c50ae;
                                          bVar25 = UnityEngine_GameObject__get_activeSelf
                                                             (pUVar29,(MethodInfo *)0x0);
                                          if (((char)bVar25 == '\0') ||
                                             (0.0 < *(float *)(__this_05->m_Items + 0x21))) {
label_043c511d:
                                            pUVar17 = (UnityEngine_Component_o *)__this_05->m_Items[0x3c];
                                            if (pUVar17 != (UnityEngine_Component_o *)0x0) {
                                              pIVar46 = (Il2CppClass *)0x0;
                                              *(undefined8 *)(puVar42 + -0x40) = 0x43c5135;
                                              pUVar29 = UnityEngine_Component__get_gameObject
                                                                  (pUVar17,(MethodInfo *)0x0);
                                              if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                                                pIVar46 = (Il2CppClass *)0x0;
                                                *(undefined8 *)(puVar42 + -0x40) = 0x43c5148;
                                                bVar25 = UnityEngine_GameObject__get_activeSelf
                                                                   (pUVar29,(MethodInfo *)0x0);
                                                if ((char)bVar25 == '\0') {
                                                  pUVar17 = (UnityEngine_Component_o *)
                                                            __this_05->m_Items[0x3d];
                                                  if (pUVar17 != (UnityEngine_Component_o *)0x0) {
                                                    pIVar46 = (Il2CppClass *)0x0;
                                                    *(undefined8 *)(puVar42 + -0x40) = 0x43c5164;
                                                    pUVar29 = UnityEngine_Component__get_gameObject
                                                                        (pUVar17,(MethodInfo *)0x0);
                                                    if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                                                      pIVar46 = (Il2CppClass *)0x0;
                                                      *(undefined8 *)(puVar42 + -0x40) = 0x43c5177;
                                                      bVar25 = UnityEngine_GameObject__get_activeSelf
                                                                         (pUVar29,(MethodInfo *)0x0);
                                                      if ((char)bVar25 == '\0') {
                                                        return;
                                                      }
                                                      goto label_043c517b;
                                                    }
                                                  }
                                                }
                                                else {
label_043c517b:
                                                  if (0.0 < *(float *)((long)__this_05->m_Items + 0x104)) {
                                                    return;
                                                  }
                                                  pUVar17 = (UnityEngine_Component_o *)
                                                            __this_05->m_Items[0x3c];
                                                  if (pUVar17 != (UnityEngine_Component_o *)0x0) {
                                                    pIVar46 = (Il2CppClass *)0x0;
                                                    *(undefined8 *)(puVar42 + -0x40) = 0x43c51b0;
                                                    pUVar29 = UnityEngine_Component__get_gameObject
                                                                        (pUVar17,(MethodInfo *)0x0);
                                                    if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                                                      pIVar46 = (Il2CppClass *)0x0;
                                                      *(undefined8 *)(puVar42 + -0x40) = 0x43c51c5;
                                                      UnityEngine_GameObject__SetActive
                                                                (pUVar29,0,(MethodInfo *)0x0);
                                                      pUVar17 = (UnityEngine_Component_o *)
                                                                __this_05->m_Items[0x3d];
                                                      if (pUVar17 != (UnityEngine_Component_o *)0x0) {
                                                        pIVar46 = (Il2CppClass *)0x0;
                                                        *(undefined8 *)(puVar42 + -0x40) = 0x43c51dd;
                                                        pUVar29 = UnityEngine_Component__get_gameObject
                                                                            (pUVar17,(MethodInfo *)0x0);
                                                        if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                                                          pIVar46 = (Il2CppClass *)0x0;
                                                          *(undefined8 *)(puVar42 + -0x40) = 0x43c51f2;
                                                          UnityEngine_GameObject__SetActive
                                                                    (pUVar29,0,(MethodInfo *)0x0);
                                                          pUVar17 = (UnityEngine_Component_o *)
                                                                    __this_05->m_Items[0x39];
                                                          if (pUVar17 != (UnityEngine_Component_o *)0x0) {
                                                            pIVar46 = (Il2CppClass *)0x0;
                                                            *(undefined8 *)(puVar42 + -0x40) = 0x43c520a;
                                                            pUVar29 = UnityEngine_Component__get_gameObject
                                                                                (pUVar17,(MethodInfo *)0x0);
                                                            if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                                                              bVar53 = 0 < *(int *)(pSVar51->m_Items + 5);
                                                              pIVar46 = (Il2CppClass *)(ulong)bVar53;
                                                              *(undefined8 *)(puVar42 + -0x40) = 0x43c5228;
                                                              UnityEngine_GameObject__SetActive
                                                                        (pUVar29,(uint)bVar53,
                                                                         (MethodInfo *)0x0);
                                                              pUVar17 = (UnityEngine_Component_o *)
                                                                        __this_05->m_Items[0x38];
                                                              if (pUVar17 != (UnityEngine_Component_o *)0x0) {
                                                                pIVar46 = (Il2CppClass *)0x0;
                                                                *(undefined8 *)(puVar42 + -0x40) = 0x43c5240;
                                                                pUVar29 = 
                                                       UnityEngine_Component__get_gameObject
                                                                 (pUVar17,(MethodInfo *)0x0);
                                                       if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                                                         bVar53 = 1 < *(int *)(pSVar51->m_Items + 5);
                                                         pIVar46 = (Il2CppClass *)(ulong)bVar53;
                                                         *(undefined8 *)(puVar42 + -0x40) = 0x43c525a;
                                                         UnityEngine_GameObject__SetActive
                                                                   (pUVar29,(uint)bVar53,(MethodInfo *)0x0);
                                                         pUVar17 = (UnityEngine_Component_o *)
                                                                   __this_05->m_Items[0x3b];
                                                         if (pUVar17 != (UnityEngine_Component_o *)0x0) {
                                                           pIVar46 = (Il2CppClass *)0x0;
                                                           *(undefined8 *)(puVar42 + -0x40) = 0x43c526e;
                                                           pUVar29 = UnityEngine_Component__get_gameObject
                                                                               (pUVar17,(MethodInfo *)0x0);
                                                           if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                                                             bVar53 = *(int *)(pSVar51->m_Items + 5) < 1;
                                                             pIVar46 = (Il2CppClass *)(ulong)bVar53;
                                                             *(undefined8 *)(puVar42 + -0x40) = 0x43c5288;
                                                             UnityEngine_GameObject__SetActive
                                                                       (pUVar29,(uint)bVar53,(MethodInfo *)0x0
                                                                       );
                                                             pUVar17 = (UnityEngine_Component_o *)
                                                                       __this_05->m_Items[0x3a];
                                                             if (pUVar17 != (UnityEngine_Component_o *)0x0) {
                                                               pIVar46 = (Il2CppClass *)0x0;
                                                               *(undefined8 *)(puVar42 + -0x40) = 0x43c529c;
                                                               pUVar29 = UnityEngine_Component__get_gameObject
                                                                                   (pUVar17,(MethodInfo *)0x0)
                                                               ;
                                                               if (pUVar29 != (UnityEngine_GameObject_o *)0x0)
                                                               {
                                                                 UnityEngine_GameObject__SetActive
                                                                           (pUVar29,(uint)(*(int *)(pSVar51->
                                                       m_Items + 5) < 2),(MethodInfo *)0x0);
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
                                                  }
                                                }
                                              }
                                            }
                                          }
                                          else {
                                            pUVar17 = (UnityEngine_Component_o *)__this_05->m_Items[0x3f];
                                            if (pUVar17 != (UnityEngine_Component_o *)0x0) {
                                              pIVar46 = (Il2CppClass *)0x0;
                                              *(undefined8 *)(puVar42 + -0x40) = 0x43c50d8;
                                              pUVar29 = UnityEngine_Component__get_gameObject
                                                                  (pUVar17,(MethodInfo *)0x0);
                                              if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                                                pIVar46 = (Il2CppClass *)0x0;
                                                *(undefined8 *)(puVar42 + -0x40) = 0x43c50ed;
                                                UnityEngine_GameObject__SetActive(pUVar29,0,(MethodInfo *)0x0)
                                                ;
                                                pUVar17 = (UnityEngine_Component_o *)__this_05->m_Items[0x3b];
                                                if (pUVar17 != (UnityEngine_Component_o *)0x0) {
                                                  pIVar46 = (Il2CppClass *)0x0;
                                                  *(undefined8 *)(puVar42 + -0x40) = 0x43c5105;
                                                  pUVar29 = UnityEngine_Component__get_gameObject
                                                                      (pUVar17,(MethodInfo *)0x0);
                                                  if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                                                    pIVar46 = (Il2CppClass *)0x1;
                                                    *(undefined8 *)(puVar42 + -0x40) = 0x43c511d;
                                                    UnityEngine_GameObject__SetActive
                                                              (pUVar29,1,(MethodInfo *)0x0);
                                                    goto label_043c511d;
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                    else {
                                      pUVar17 = (UnityEngine_Component_o *)__this_05->m_Items[0x3e];
                                      if (pUVar17 != (UnityEngine_Component_o *)0x0) {
                                        pIVar46 = (Il2CppClass *)0x0;
                                        *(undefined8 *)(puVar42 + -0x40) = 0x43c503e;
                                        pUVar29 = UnityEngine_Component__get_gameObject
                                                            (pUVar17,(MethodInfo *)0x0);
                                        if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                                          pIVar46 = (Il2CppClass *)0x0;
                                          *(undefined8 *)(puVar42 + -0x40) = 0x43c5053;
                                          UnityEngine_GameObject__SetActive(pUVar29,0,(MethodInfo *)0x0);
                                          pUVar17 = (UnityEngine_Component_o *)__this_05->m_Items[0x3a];
                                          if (pUVar17 != (UnityEngine_Component_o *)0x0) {
                                            pIVar46 = (Il2CppClass *)0x0;
                                            *(undefined8 *)(puVar42 + -0x40) = 0x43c506b;
                                            pUVar29 = UnityEngine_Component__get_gameObject
                                                                (pUVar17,(MethodInfo *)0x0);
                                            if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                                              pIVar46 = (Il2CppClass *)0x1;
                                              *(undefined8 *)(puVar42 + -0x40) = 0x43c5083;
                                              UnityEngine_GameObject__SetActive(pUVar29,1,(MethodInfo *)0x0);
                                              goto label_043c5083;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                              else {
                                pUVar17 = (UnityEngine_Component_o *)__this_05->m_Items[0x3b];
                                if (pUVar17 != (UnityEngine_Component_o *)0x0) {
                                  pIVar46 = (Il2CppClass *)0x0;
                                  *(undefined8 *)(puVar42 + -0x40) = 0x43c4fa4;
                                  pUVar29 = UnityEngine_Component__get_gameObject(pUVar17,(MethodInfo *)0x0);
                                  if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                                    pIVar46 = (Il2CppClass *)0x0;
                                    *(undefined8 *)(puVar42 + -0x40) = 0x43c4fb9;
                                    UnityEngine_GameObject__SetActive(pUVar29,0,(MethodInfo *)0x0);
                                    pUVar17 = (UnityEngine_Component_o *)__this_05->m_Items[0x39];
                                    if (pUVar17 != (UnityEngine_Component_o *)0x0) {
                                      pIVar46 = (Il2CppClass *)0x0;
                                      *(undefined8 *)(puVar42 + -0x40) = 0x43c4fd1;
                                      pUVar29 = UnityEngine_Component__get_gameObject
                                                          (pUVar17,(MethodInfo *)0x0);
                                      if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                                        pIVar46 = (Il2CppClass *)0x1;
                                        *(undefined8 *)(puVar42 + -0x40) = 0x43c4fe9;
                                        UnityEngine_GameObject__SetActive(pUVar29,1,(MethodInfo *)0x0);
                                        goto label_043c4fe9;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                        else {
                          pUVar17 = (UnityEngine_Component_o *)__this_05->m_Items[0x3a];
                          if (pUVar17 != (UnityEngine_Component_o *)0x0) {
                            pIVar46 = (Il2CppClass *)0x0;
                            *(undefined8 *)(puVar42 + -0x40) = 0x43c4f11;
                            pUVar29 = UnityEngine_Component__get_gameObject(pUVar17,(MethodInfo *)0x0);
                            if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                              pIVar46 = (Il2CppClass *)0x0;
                              *(undefined8 *)(puVar42 + -0x40) = 0x43c4f26;
                              UnityEngine_GameObject__SetActive(pUVar29,0,(MethodInfo *)0x0);
                              pUVar17 = (UnityEngine_Component_o *)__this_05->m_Items[0x38];
                              if (pUVar17 != (UnityEngine_Component_o *)0x0) {
                                pIVar46 = (Il2CppClass *)0x0;
                                *(undefined8 *)(puVar42 + -0x40) = 0x43c4f3e;
                                pUVar29 = UnityEngine_Component__get_gameObject(pUVar17,(MethodInfo *)0x0);
                                if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                                  pIVar46 = (Il2CppClass *)0x1;
                                  *(undefined8 *)(puVar42 + -0x40) = 0x43c4f56;
                                  UnityEngine_GameObject__SetActive(pUVar29,1,(MethodInfo *)0x0);
                                  goto label_043c4f56;
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
          }
        }
        goto label_043c52c4;
      }
    }
    *(undefined8 *)(puVar42 + -0x40) = 0x43c52d1;
    pSVar49 = pSVar51;
    il2cpp_runtime_helper_022b2fd0();
    *(System_Object_array **)(puVar42 + -0x40) = pSVar48;
    *(System_Object_array **)(puVar42 + -0x48) = pSVar51;
    *(Il2CppClass **)(puVar42 + -0x50) = unaff_R13;
    *(System_Object_array **)(puVar42 + -0x58) = __this_05;
    *(System_Object_array **)(puVar42 + -0x60) = __this_04;
    puVar43 = puVar42 + -0x70;
    if (g_data_057ae3e4 == '\0') {
      *(undefined8 *)(puVar42 + -0x78) = 0x43c5305;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Animator_GetComponent_Animator);
      *(undefined8 *)(puVar42 + -0x78) = 0x43c5311;
      il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
      *(undefined8 *)(puVar42 + -0x78) = 0x43c531d;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ThunderspearWeapon);
      *(undefined8 *)(puVar42 + -0x78) = 0x43c5329;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
      g_data_057ae3e4 = '\x01';
    }
    if (pSVar49->m_Items[0x1d] == (Il2CppObject *)0x0) {
label_043c5986:
      *(undefined8 *)(puVar42 + -0x78) = 0x43c598b;
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      pSVar48 = (System_Object_array *)pSVar49->m_Items[0x1d][0x10].klass;
      if (pSVar48 == (System_Object_array *)0x0) {
label_043c537e:
        lVar33 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
        if ((lVar33 != 0) &&
           (((lVar33 = *(long *)(lVar33 + 0x58), lVar33 != 0 &&
             (lVar33 = *(long *)(lVar33 + 0x48), lVar33 != 0)) && (pSVar48 != (System_Object_array *)0x0)))) {
          if (*(char *)(lVar33 + 0x11) == '\0') {
            iVar26 = *(bool_conflict *)((long)((Il2CppType *)pSVar48->m_Items + 2) + 4);
            fVar56 = (((UnityEngine_Vector4_o *)((long)((Il2CppType *)pSVar48->m_Items + 2) + 8))->fields).x;
            if (iVar26 < 1) {
              if (fVar56 == -NAN) {
                fVar56 = 1.0;
                pUVar18 = (UnityEngine_UI_Image_o *)pSVar49->m_Items[0x31];
              }
              else {
                fVar56 = 0.0;
                pUVar18 = (UnityEngine_UI_Image_o *)pSVar49->m_Items[0x31];
              }
            }
            else {
              fVar56 = (float)(int)fVar56 / (float)iVar26;
              pUVar18 = (UnityEngine_UI_Image_o *)pSVar49->m_Items[0x31];
            }
            if (pUVar18 != (UnityEngine_UI_Image_o *)0x0) {
              __this_04 = (System_Object_array *)pSVar49->m_Items[0x30];
              pIVar46 = (Il2CppClass *)0x0;
              *(float *)(puVar42 + -100) = fVar56;
              *(undefined8 *)(puVar42 + -0x78) = 0x43c5631;
              UnityEngine_UI_Image__set_fillAmount(pUVar18,fVar56,(MethodInfo *)0x0);
              if (__this_04 != (System_Object_array *)0x0) {
                pIVar46 = (Il2CppClass *)0x0;
                *(undefined8 *)(puVar42 + -0x78) = 0x43c564a;
                UnityEngine_UI_Image__set_fillAmount
                          ((UnityEngine_UI_Image_o *)__this_04,*(float *)(puVar42 + -100),(MethodInfo *)0x0);
                if (*(float *)(puVar42 + -100) <= 0.0) {
                  if (pSVar49->m_Items[0x40] != (Il2CppObject *)0x0) {
                    pIVar50 = pSVar49->m_Items[6];
                    pIVar39 = pSVar49->m_Items[0x40]->klass;
                    pIVar46 = (Il2CppClass *)pIVar39->vtable[0x17].method;
                    vtableDispatch = pIVar39->vtable[0x17].methodPtr;
                    *(undefined8 *)(puVar42 + -0x78) = 0x43c56ee;
                    (*vtableDispatch)((int)pIVar50);
                    pIVar50 = pSVar49->m_Items[0x42];
                    if (pIVar50 != (Il2CppObject *)0x0) {
                      uVar57 = SUB84(pSVar49->m_Items[6],0);
                      goto label_043c574d;
                    }
                  }
                }
                else {
                  pIVar50 = pSVar49->m_Items[0x40];
                  if (*(float *)(puVar42 + -100) <= 0.5) {
                    if (pIVar50 != (Il2CppObject *)0x0) {
                      pIVar5 = pSVar49->m_Items[2];
                      pIVar46 = (Il2CppClass *)pIVar50->klass->vtable[0x17].method;
                      vtableDispatch = pIVar50->klass->vtable[0x17].methodPtr;
                      *(undefined8 *)(puVar42 + -0x78) = 0x43c5731;
                      (*vtableDispatch)((int)pIVar5);
                      pIVar50 = pSVar49->m_Items[0x42];
                      if (pIVar50 != (Il2CppObject *)0x0) {
                        uVar57 = SUB84(pSVar49->m_Items[2],0);
                        goto label_043c574d;
                      }
                    }
                  }
                  else if (pIVar50 != (Il2CppObject *)0x0) {
                    pIVar5 = pSVar49->m_Items[0xc];
                    pIVar46 = (Il2CppClass *)pIVar50->klass->vtable[0x17].method;
                    vtableDispatch = pIVar50->klass->vtable[0x17].methodPtr;
                    *(undefined8 *)(puVar42 + -0x78) = 0x43c569b;
                    (*vtableDispatch)((int)pIVar5);
                    pIVar50 = pSVar49->m_Items[0x42];
                    if (pIVar50 != (Il2CppObject *)0x0) {
                      uVar57 = SUB84(pSVar49->m_Items[0xc],0);
label_043c574d:
                      vtableDispatch = pIVar50->klass->vtable[0x17].methodPtr;
                      *(undefined8 *)(puVar42 + -0x78) = 0x43c575d;
                      (*vtableDispatch)(uVar57);
                      pIVar50 = pSVar49->m_Items[0x32];
                      __this_04 = (System_Object_array *)pSVar49->m_Items[0x33];
                      pSVar48 = (System_Object_array *)((Il2CppType *)pSVar48->m_Items + 2);
                      pIVar46 = (Il2CppClass *)0x0;
                      *(undefined8 *)(puVar42 + -0x78) = 0x43c5779;
                      pIVar39 = (Il2CppClass *)System_Int32__ToString((int32_t)pSVar48,(MethodInfo *)0x0);
                      if (__this_04 != (System_Object_array *)0x0) {
                        pUVar16 = ((Il2CppClass_1 *)&__this_04->obj)->image;
                        pMVar45 = (pUVar16->vtable)._75_unknown.method;
                        vtableDispatch = (pUVar16->vtable)._75_unknown.methodPtr;
                        *(undefined8 *)(puVar42 + -0x78) = 0x43c579b;
                        pIVar46 = pIVar39;
                        (*vtableDispatch)(__this_04,pIVar39,pMVar45);
                        if (pIVar50 != (Il2CppObject *)0x0) {
                          pMVar45 = pIVar50->klass->vtable[0x4b].method;
                          vtableDispatch = pIVar50->klass->vtable[0x4b].methodPtr;
                          *(undefined8 *)(puVar42 + -0x78) = 0x43c57bb;
                          (*vtableDispatch)(pIVar50,pIVar39,pMVar45);
                          pIVar50 = pSVar49->m_Items[0x32];
                          pIVar46 = pIVar39;
                          if (*(int *)&((Il2CppClass_1 *)&pSVar48->obj)->image == 0) {
                            if (pIVar50 != (Il2CppObject *)0x0) {
                              pIVar46 = (Il2CppClass *)pIVar50->klass->vtable[0x17].method;
                              vtableDispatch = pIVar50->klass->vtable[0x17].methodPtr;
                              *(undefined8 *)(puVar42 + -0x78) = 0x43c5894;
                              (*vtableDispatch)(0x3f800000);
                              if (pSVar49->m_Items[0x33] != (Il2CppObject *)0x0) {
                                pIVar39 = pSVar49->m_Items[0x33]->klass;
                                pIVar46 = (Il2CppClass *)pIVar39->vtable[0x17].method;
                                vtableDispatch = pIVar39->vtable[0x17].methodPtr;
                                *(undefined8 *)(puVar42 + -0x78) = 0x43c58c3;
                                (*vtableDispatch)(0x3f800000);
                                pUVar17 = (UnityEngine_Component_o *)pSVar49->m_Items[0x40];
                                goto joined_r0x043c58cd;
                              }
                            }
                          }
                          else if (pIVar50 != (Il2CppObject *)0x0) {
                            pIVar46 = (Il2CppClass *)pIVar50->klass->vtable[0x17].method;
                            vtableDispatch = pIVar50->klass->vtable[0x17].methodPtr;
                            *(undefined8 *)(puVar42 + -0x78) = 0x43c57ef;
                            (*vtableDispatch)();
                            if (pSVar49->m_Items[0x33] != (Il2CppObject *)0x0) {
                              pIVar39 = pSVar49->m_Items[0x33]->klass;
                              pIVar46 = (Il2CppClass *)pIVar39->vtable[0x17].method;
                              vtableDispatch = pIVar39->vtable[0x17].methodPtr;
                              *(undefined8 *)(puVar42 + -0x78) = 0x43c5819;
                              (*vtableDispatch)();
                              pUVar17 = (UnityEngine_Component_o *)pSVar49->m_Items[0x40];
joined_r0x043c58cd:
                              if (pUVar17 != (UnityEngine_Component_o *)0x0) {
                                pIVar46 = (Il2CppClass *)0x0;
                                *(undefined8 *)(puVar42 + -0x78) = 0x43c5830;
                                pUVar29 = UnityEngine_Component__get_gameObject(pUVar17,(MethodInfo *)0x0);
                                if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                                  pIVar46 = (Il2CppClass *)0x0;
                                  *(undefined8 *)(puVar42 + -0x78) = 0x43c5843;
                                  bVar25 = UnityEngine_GameObject__get_activeSelf(pUVar29,(MethodInfo *)0x0);
                                  if ((char)bVar25 != '\0') {
                                    return;
                                  }
                                  if (0.0 < *(float *)((long)pSVar49->m_Items + 0x104)) {
                                    return;
                                  }
                                  if (0.0 < *(float *)(pSVar49->m_Items + 0x21)) {
                                    return;
                                  }
                                  pUVar17 = (UnityEngine_Component_o *)pSVar49->m_Items[0x40];
                                  if (pUVar17 != (UnityEngine_Component_o *)0x0) {
                                    pIVar46 = (Il2CppClass *)0x0;
                                    *(undefined8 *)(puVar42 + -0x78) = 0x43c58ef;
                                    pUVar29 = UnityEngine_Component__get_gameObject(pUVar17,(MethodInfo *)0x0)
                                    ;
                                    if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                                      pIVar46 = (Il2CppClass *)0x1;
                                      *(undefined8 *)(puVar42 + -0x78) = 0x43c5907;
                                      UnityEngine_GameObject__SetActive(pUVar29,1,(MethodInfo *)0x0);
                                      pUVar17 = (UnityEngine_Component_o *)pSVar49->m_Items[0x41];
                                      if (pUVar17 != (UnityEngine_Component_o *)0x0) {
                                        pIVar46 = (Il2CppClass *)0x0;
                                        *(undefined8 *)(puVar42 + -0x78) = 0x43c591a;
                                        pUVar29 = UnityEngine_Component__get_gameObject
                                                            (pUVar17,(MethodInfo *)0x0);
                                        if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                                          pIVar46 = (Il2CppClass *)0x0;
                                          *(undefined8 *)(puVar42 + -0x78) = 0x43c592b;
                                          UnityEngine_GameObject__SetActive(pUVar29,0,(MethodInfo *)0x0);
                                          pUVar17 = (UnityEngine_Component_o *)pSVar49->m_Items[0x42];
                                          if (pUVar17 != (UnityEngine_Component_o *)0x0) {
                                            pIVar46 = (Il2CppClass *)0x0;
                                            *(undefined8 *)(puVar42 + -0x78) = 0x43c593e;
                                            pUVar29 = UnityEngine_Component__get_gameObject
                                                                (pUVar17,(MethodInfo *)0x0);
                                            if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                                              pIVar46 = (Il2CppClass *)0x0;
                                              *(undefined8 *)(puVar42 + -0x78) = 0x43c594f;
                                              UnityEngine_GameObject__SetActive(pUVar29,0,(MethodInfo *)0x0);
                                              pUVar17 = (UnityEngine_Component_o *)pSVar49->m_Items[0x30];
                                              if (pUVar17 != (UnityEngine_Component_o *)0x0) {
                                                pIVar46 = (Il2CppClass *)0x0;
                                                *(undefined8 *)(puVar42 + -0x78) = 0x43c5962;
                                                pUVar29 = UnityEngine_Component__get_gameObject
                                                                    (pUVar17,(MethodInfo *)0x0);
                                                if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                                                  pIVar46 = (Il2CppClass *)0x1;
                                                  *(undefined8 *)(puVar42 + -0x78) = 0x43c5976;
                                                  UnityEngine_GameObject__SetActive
                                                            (pUVar29,1,(MethodInfo *)0x0);
                                                  pUVar17 = (UnityEngine_Component_o *)pSVar49->m_Items[0x31];
                                                  goto joined_r0x043c5980;
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
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            pIVar46 = (Il2CppClass *)0x0;
            *(undefined8 *)(puVar42 + -0x78) = 0x43c53d3;
            fVar56 = Characters_BaseUseable__GetCooldownRatio
                               ((Characters_BaseUseable_o *)pSVar48,(MethodInfo *)0x0);
            *(float *)(puVar42 + -100) = fVar56;
            pUVar18 = (UnityEngine_UI_Image_o *)pSVar49->m_Items[0x46];
            if (pUVar18 != (UnityEngine_UI_Image_o *)0x0) {
              __this_04 = (System_Object_array *)pSVar49->m_Items[0x45];
              pIVar46 = (Il2CppClass *)0x0;
              *(undefined8 *)(puVar42 + -0x78) = 0x43c53fd;
              UnityEngine_UI_Image__set_fillAmount(pUVar18,*(float *)(puVar42 + -100),(MethodInfo *)0x0);
              if (__this_04 != (System_Object_array *)0x0) {
                pIVar46 = (Il2CppClass *)0x0;
                *(undefined8 *)(puVar42 + -0x78) = 0x43c5416;
                UnityEngine_UI_Image__set_fillAmount
                          ((UnityEngine_UI_Image_o *)__this_04,*(float *)(puVar42 + -100),(MethodInfo *)0x0);
                if (((bool)*(char *)(pSVar49->m_Items + 0x47) ==
                     (*(float *)(puVar42 + -100) <= 1.0 && *(float *)(puVar42 + -100) != 1.0)) ||
                   (bVar53 = *(float *)(puVar42 + -100) != 1.0, bVar19 = *(float *)(puVar42 + -100) <= 1.0,
                   *(bool *)(pSVar49->m_Items + 0x47) = bVar19 && bVar53, bVar19 && bVar53)) {
label_043c5518:
                  pUVar17 = (UnityEngine_Component_o *)pSVar49->m_Items[0x43];
                  if (pUVar17 != (UnityEngine_Component_o *)0x0) {
                    pIVar46 = (Il2CppClass *)0x0;
                    *(undefined8 *)(puVar42 + -0x78) = 0x43c552f;
                    pUVar29 = UnityEngine_Component__get_gameObject(pUVar17,(MethodInfo *)0x0);
                    if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                      pIVar46 = (Il2CppClass *)0x0;
                      *(undefined8 *)(puVar42 + -0x78) = 0x43c5542;
                      bVar25 = UnityEngine_GameObject__get_activeSelf(pUVar29,(MethodInfo *)0x0);
                      if (((char)bVar25 != '\0') || (0.0 < *(float *)((long)pSVar49->m_Items + 0x104))) {
                        return;
                      }
                      pUVar17 = (UnityEngine_Component_o *)pSVar49->m_Items[0x44];
                      if (pUVar17 != (UnityEngine_Component_o *)0x0) {
                        pIVar46 = (Il2CppClass *)0x0;
                        *(undefined8 *)(puVar42 + -0x78) = 0x43c5572;
                        pUVar29 = UnityEngine_Component__get_gameObject(pUVar17,(MethodInfo *)0x0);
                        if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                          pIVar46 = (Il2CppClass *)0x0;
                          *(undefined8 *)(puVar42 + -0x78) = 0x43c5587;
                          UnityEngine_GameObject__SetActive(pUVar29,0,(MethodInfo *)0x0);
                          pUVar17 = (UnityEngine_Component_o *)pSVar49->m_Items[0x43];
joined_r0x043c5980:
                          if (pUVar17 != (UnityEngine_Component_o *)0x0) {
                            pIVar46 = (Il2CppClass *)0x0;
                            *(undefined8 *)(puVar42 + -0x78) = 0x43c559e;
                            pUVar29 = UnityEngine_Component__get_gameObject(pUVar17,(MethodInfo *)0x0);
                            if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                              UnityEngine_GameObject__SetActive(pUVar29,1,(MethodInfo *)0x0);
                              return;
                            }
                          }
                        }
                      }
                    }
                  }
                }
                else {
                  pUVar17 = (UnityEngine_Component_o *)pSVar49->m_Items[0x44];
                  if (pUVar17 != (UnityEngine_Component_o *)0x0) {
                    pIVar46 = (Il2CppClass *)0x0;
                    *(undefined8 *)(puVar42 + -0x78) = 0x43c5462;
                    pUVar29 = UnityEngine_Component__get_gameObject(pUVar17,(MethodInfo *)0x0);
                    if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                      pIVar46 = (Il2CppClass *)0x0;
                      *(undefined8 *)(puVar42 + -0x78) = 0x43c5475;
                      bVar25 = UnityEngine_GameObject__get_activeSelf(pUVar29,(MethodInfo *)0x0);
                      if ((char)bVar25 != '\0') goto label_043c5518;
                      pUVar17 = (UnityEngine_Component_o *)pSVar49->m_Items[0x43];
                      if (pUVar17 != (UnityEngine_Component_o *)0x0) {
                        pIVar46 = (Il2CppClass *)0x0;
                        *(undefined8 *)(puVar42 + -0x78) = 0x43c5494;
                        pUVar29 = UnityEngine_Component__get_gameObject(pUVar17,(MethodInfo *)0x0);
                        if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                          pIVar46 = (Il2CppClass *)0x0;
                          *(undefined8 *)(puVar42 + -0x78) = 0x43c54a9;
                          UnityEngine_GameObject__SetActive(pUVar29,0,(MethodInfo *)0x0);
                          pUVar17 = (UnityEngine_Component_o *)pSVar49->m_Items[0x44];
                          if (pUVar17 != (UnityEngine_Component_o *)0x0) {
                            pIVar46 = (Il2CppClass *)0x0;
                            *(undefined8 *)(puVar42 + -0x78) = 0x43c54c0;
                            pUVar29 = UnityEngine_Component__get_gameObject(pUVar17,(MethodInfo *)0x0);
                            if (pUVar29 != (UnityEngine_GameObject_o *)0x0) {
                              pIVar46 = (Il2CppClass *)0x1;
                              *(undefined8 *)(puVar42 + -0x78) = 0x43c54d8;
                              UnityEngine_GameObject__SetActive(pUVar29,1,(MethodInfo *)0x0);
                              pUVar17 = (UnityEngine_Component_o *)pSVar49->m_Items[0x44];
                              if (pUVar17 != (UnityEngine_Component_o *)0x0) {
                                *(undefined8 *)(puVar42 + -0x78) = 0x43c54f7;
                                pIVar46 = MethodInfo_Animator_GetComponent_Animator;
                                pUVar30 = (UnityEngine_Animator_o *)
                                          UnityEngine_Component__GetComponent_object_
                                                    (pUVar17,(MethodInfo_24E7B40 *)MethodInfo_Animator_GetComponent_Animator);
                                if (pUVar30 != (UnityEngine_Animator_o *)0x0) {
                                  pIVar46 = (Il2CppClass *)0x0;
                                  *(undefined8 *)(puVar42 + -0x78) = 0x43c550d;
                                  UnityEngine_Animator__Update(pUVar30,0.0,(MethodInfo *)0x0);
                                  *(undefined4 *)((long)pSVar49->m_Items + 0x104) = 0x3f000000;
                                  goto label_043c5518;
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
          }
        }
        goto label_043c5986;
      }
      pUVar16 = ((Il2CppClass_1 *)&pSVar48->obj)->image;
      bVar6 = (TypeInfo_ThunderspearWeapon->_2).naturalAligment;
      pIVar46 = TypeInfo_ThunderspearWeapon;
      if ((bVar6 <= (pUVar16->_2).naturalAligment) &&
         ((pUVar16->_2).typeHierarchy[(ulong)bVar6 - 1] == TypeInfo_ThunderspearWeapon)) goto label_043c537e;
    }
    *(undefined8 *)(puVar42 + -0x78) = 0x43c5993;
    __this_05 = pSVar48;
    il2cpp_runtime_helper_022b2fd0();
  }
  *(System_Object_array **)(puVar43 + -8) = __this_04;
  lVar33 = *(long *)((long)((Il2CppType *)__this_05->m_Items + 0xf) + 8);
  pSVar51 = __this_05;
  if ((lVar33 != 0) &&
     (pSVar51 = ((Il2CppType *)__this_05->m_Items)[0x24].data, __this_04 = __this_05,
     pSVar51 != (System_Object_array *)0x0)) {
    fVar54 = *(float *)(lVar33 + 0x140) / *(float *)(lVar33 + 0x134);
    fVar56 = 1.0;
    if (fVar54 <= 1.0) {
      fVar56 = fVar54;
    }
    pUVar16 = ((Il2CppClass_1 *)&pSVar51->obj)->image;
    pIVar46 = (Il2CppClass *)(pUVar16->vtable)._47_CrossFadeColor.method;
    vtableDispatch = (pUVar16->vtable)._47_CrossFadeColor.methodPtr;
    *(undefined8 *)(puVar43 + -0x10) = 0x43c59fb;
    (*vtableDispatch)(-(uint)(0.0 <= fVar54) & (uint)fVar56);
    if (*(long *)((long)((Il2CppType *)__this_05->m_Items + 0xf) + 8) != 0) {
      pSVar51 = *(System_Object_array **)((long)((Il2CppType *)__this_05->m_Items + 0x24) + 8);
      if (*(float *)(*(long *)((long)((Il2CppType *)__this_05->m_Items + 0xf) + 8) + 0x140) <= 1.0) {
        if (pSVar51 != (System_Object_array *)0x0) {
          uVar57 = SUB84(((Il2CppType *)__this_05->m_Items)[9].data,0);
          uVar59 = SUB84(*(UnityEngine_UI_RectMask2D_o **)((long)((Il2CppType *)__this_05->m_Items + 9) + 8),0
                        );
          goto label_043c5a4b;
        }
      }
      else if (pSVar51 != (System_Object_array *)0x0) {
        uVar57 = SUB84(((Il2CppType *)__this_05->m_Items)[8].data,0);
        uVar59 = (undefined4)*(undefined8 *)((long)((Il2CppType *)__this_05->m_Items + 8) + 8);
label_043c5a4b:
        pUVar16 = ((Il2CppClass_1 *)&pSVar51->obj)->image;
        vtableDispatch = (pUVar16->vtable)._23_set_color.methodPtr;
        (*vtableDispatch)
                  (uVar57,uVar59,pSVar51,(pUVar16->vtable)._23_set_color.method,extraout_RDX,
                   vtableDispatch);
        return;
      }
    }
  }
  *(undefined8 *)(puVar43 + -0x10) = 0x43c5a64;
  il2cpp_runtime_helper_022b2c90();
  *(System_Object_array **)(puVar43 + -0x10) = pSVar48;
  *(System_Object_array **)(puVar43 + -0x18) = pSVar49;
  *(System_Object_array **)(puVar43 + -0x20) = __this_04;
  if (g_data_057ae3de == '\0') {
    *(undefined8 *)(puVar43 + -0x28) = 0x43c5a90;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Animator_GetComponent_Animator);
    *(undefined8 *)(puVar43 + -0x28) = 0x43c5a9c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    *(undefined8 *)(puVar43 + -0x28) = 0x43c5aa8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    *(undefined8 *)(puVar43 + -0x28) = 0x43c5ab4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Animator_get_Item);
    *(undefined8 *)(puVar43 + -0x28) = 0x43c5ac0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    g_data_057ae3de = '\x01';
  }
  pUVar29 = ((Il2CppType *)pSVar51->m_Items)[10].data;
  if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
    *(undefined8 *)(puVar43 + -0x28) = 0x43c5ae6;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)(puVar43 + -0x28) = 0x43c5af0;
  bVar25 = MiscExtensions__GetActive(pUVar29,(MethodInfo *)0x0);
  if ((char)bVar25 != '\0') {
    __this_06 = ((Il2CppType *)pSVar51->m_Items)[0x25].data;
    if (__this_06 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_043c5bc3;
    *(undefined8 *)(puVar43 + -0x28) = 0x43c5b1a;
    bVar25 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                       (__this_06,(Il2CppObject *)pIVar46,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar25 == '\0') {
      if (pIVar46 == (Il2CppClass *)0x0) goto label_043c5bc3;
      *(undefined8 *)(puVar43 + -0x28) = 0x43c5b61;
      pUVar30 = (UnityEngine_Animator_o *)
                UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pIVar46,(MethodInfo_24E7B40 *)MethodInfo_Animator_GetComponent_Animator);
      __this_06 = ((Il2CppType *)pSVar51->m_Items)[0x25].data;
      if (__this_06 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_043c5bc3;
      *(undefined8 *)(puVar43 + -0x28) = 0x43c5b85;
      System_Collections_Generic_Dictionary_object__object___Add
                (__this_06,(Il2CppObject *)pIVar46,(Il2CppObject *)pUVar30,MethodInfo_Void_Add);
      pUVar29 = (UnityEngine_GameObject_o *)0x0;
      if (pUVar30 == (UnityEngine_Animator_o *)0x0) goto label_043c5bc3;
    }
    else {
      __this_06 = ((Il2CppType *)pSVar51->m_Items)[0x25].data;
      if (__this_06 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_043c5bc3:
        *(undefined8 *)(puVar43 + -0x28) = 0x43c5bc8;
        uVar40 = il2cpp_runtime_helper_022b2c90();
        *(Il2CppClass **)(puVar43 + -0x28) = pIVar46;
        *(UnityEngine_GameObject_o **)(puVar43 + -0x30) = pUVar29;
        *(undefined8 *)(puVar43 + -0x38) = uVar40;
        if (g_data_057ae3e5 == '\0') {
          *(undefined8 *)(puVar43 + -0x40) = 0x43c5bec;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_UnityEngine_UI_Image_UnityEngine_Animator);
          *(undefined8 *)(puVar43 + -0x40) = 0x43c5bf8;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_Image_Animator);
          *(undefined8 *)(puVar43 + -0x40) = 0x43c5c04;
          il2cpp_runtime_helper_023445d0(&"");
          g_data_057ae3e5 = '\x01';
        }
        (__this_06->fields)._count = 0x3f800000;
        (__this_06->fields)._freeList = 0x3f000000;
        (__this_06->fields)._freeCount = 0;
        (__this_06->fields)._version = 0x3f000000;
        (__this_06->fields)._comparer =
             (System_Collections_Generic_IEqualityComparer_TKey__o *)0x3f4000003f800000;
        (__this_06->fields)._keys =
             (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x3f8000003f000000;
        (__this_06->fields)._values =
             (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x3f800000;
        (__this_06->fields)._syncRoot = (Il2CppObject *)0x3f00000000000000;
        __this_06[1].klass = (System_Collections_Generic_Dictionary_object__object__c *)0x3f0000003f800000;
        __this_06[1].monitor = (void *)0x3f8000003f000000;
        __this_06[1].fields._buckets = (System_Int32_array *)0x3f8000003f800000;
        __this_06[1].fields._entries =
             (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x3f0000003f800000;
        __this_06[1].fields._count = 0x3f800000;
        __this_06[1].fields._freeList = 0x3f800000;
        __this_06[1].fields._freeCount = 0x3f800000;
        __this_06[1].fields._version = 0x3f400000;
        *(undefined4 *)&__this_06[1].fields._comparer = 0x3f800000;
        *(undefined4 *)((long)&__this_06[1].fields._comparer + 4) = 0x3f800000;
        *(undefined4 *)&__this_06[1].fields._keys = 0x3f800000;
        *(undefined4 *)((long)&__this_06[1].fields._keys + 4) = 0x3f800000;
        __this_06[1].fields._values =
             (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x3e8000003f800000;
        __this_06[1].fields._syncRoot = (Il2CppObject *)0x3f8000003e800000;
        __this_06[2].klass = (System_Collections_Generic_Dictionary_object__object__c *)0x3f451eb83f451eb8;
        __this_06[2].monitor = (void *)0x3f8000003f451eb8;
        *(undefined4 *)&__this_06[2].fields._buckets = 0x3f451eb8;
        *(undefined4 *)((long)&__this_06[2].fields._buckets + 4) = 0x3f000000;
        *(undefined4 *)&__this_06[2].fields._entries = 0x3f000000;
        *(undefined4 *)((long)&__this_06[2].fields._entries + 4) = 0x3f800000;
        __this_06[3].monitor = "";
        *(undefined8 *)(puVar43 + -0x40) = 0x43c5ca5;
        il2cpp_runtime_helper_022b4080(&__this_06[3].monitor);
        __this_06[3].fields._buckets = "";
        *(undefined8 *)(puVar43 + -0x40) = 0x43c5cbb;
        il2cpp_runtime_helper_022b4080(&__this_06[3].fields);
        *(undefined8 *)(puVar43 + -0x40) = 0x43c5cca;
        __this_03 = (System_Collections_Generic_Dictionary_object__object__o *)
                    il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_Image_Animator);
        *(undefined8 *)(puVar43 + -0x40) = 0x43c5cdf;
        System_Collections_Generic_Dictionary_object__object____ctor(__this_03,MethodInfo_Dictionary_2_UnityEngine_UI_Image_UnityEngine_Animator);
        __this_06[7].fields._values =
             (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)__this_03;
        *(undefined8 *)(puVar43 + -0x40) = 0x43c5cf5;
        il2cpp_runtime_helper_022b4080(&__this_06[7].fields._values);
        UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_06,(MethodInfo *)0x0);
        return;
      }
      *(undefined8 *)(puVar43 + -0x28) = 0x43c5b40;
      pUVar30 = (UnityEngine_Animator_o *)
                System_Collections_Generic_Dictionary_object__object___get_Item
                          (__this_06,(Il2CppObject *)pIVar46,MethodInfo_Animator_get_Item);
      if (pUVar30 == (UnityEngine_Animator_o *)0x0) {
        pUVar29 = (UnityEngine_GameObject_o *)0x0;
        goto label_043c5bc3;
      }
    }
    *(undefined8 *)(puVar43 + -0x28) = 0x43c5b94;
    fVar56 = UnityEngine_Animator__get_speed(pUVar30,(MethodInfo *)0x0);
    if ((fVar56 != 0.0) || (NAN(fVar56))) {
      *(undefined8 *)(puVar43 + -0x28) = 0x43c5bab;
      UnityEngine_Animator__Update(pUVar30,0.0,(MethodInfo *)0x0);
      UnityEngine_Animator__set_speed(pUVar30,0.0,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Characters.AHSSWeapon$$HandleUI
// il2cpp: void Characters_AHSSWeapon__HandleUI (Characters_AHSSWeapon_o* __this, const MethodInfo* method);
// 0x42fa5a0

void Characters_AHSSWeapon__HandleUI(Characters_AHSSWeapon_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  System_String_o **ppSVar2;
  Il2CppObject *pIVar3;
  byte bVar4;
  byte bVar5;
  Characters_Human_o *pCVar6;
  System_Action_Hashtable__o *__this_00;
  Il2CppMethodPointer vtableDispatch;
  UnityEngine_UI_Image_c *pUVar7;
  UnityEngine_Component_o *pUVar8;
  UnityEngine_UI_Image_o *pUVar9;
  bool bVar10;
  bool bVar11;
  undefined1 auVar12 [16];
  char cVar13;
  bool_conflict bVar14;
  int iVar15;
  uint uVar16;
  UnityEngine_GameObject_o *pUVar17;
  UnityEngine_Animator_o *pUVar18;
  System_String_o *pSVar19;
  UnityEngine_Texture2D_o *texture;
  System_String_o *pSVar20;
  long lVar21;
  undefined8 *puVar22;
  UnityEngine_Object_o *pUVar23;
  UnityEngine_Transform_o *pUVar24;
  Il2CppClass *pIVar25;
  void *pvVar26;
  Il2CppClass *pIVar27;
  undefined8 uVar28;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  ulong uVar29;
  undefined8 extraout_RDX;
  System_Collections_Generic_List_object__o *pSVar30;
  System_Object_array *__this_02;
  UnityEngine_Object_o **ppUVar31;
  UnityEngine_Object_o **ppUVar32;
  int iVar33;
  long *plVar34;
  MethodInfo *pMVar35;
  Il2CppClass *pIVar36;
  System_Object_array *pSVar37;
  System_Object_array *__this_03;
  System_Object_array *pSVar38;
  long *__this_04;
  long *plVar39;
  Il2CppObject *pIVar40;
  System_Collections_Generic_Dictionary_object__object__o *__this_05;
  Il2CppClass *unaff_R13;
  float fVar41;
  undefined4 uVar42;
  float fVar43;
  UnityEngine_UI_RectMask2D_o *pUVar44;
  UnityEngine_Quaternion_o value;
  undefined1 auVar45 [12];
  undefined1 auStack_c0 [12];
  float fStack_b4;
  System_Object_array *pSStack_b0;
  Il2CppClass *pIStack_a8;
  UnityEngine_Object_o *pUStack_40;
  ulong uStack_38;
  code *pcStack_30;
  
  if (g_data_057adefb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057adefb = '\x01';
    if (*(int *)(TypeInfo_UIManager + 0xe4) != 0) goto label_042fa5c3;
label_042fa60a:
    il2cpp_runtime_helper_02337ed0();
    plVar34 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  else {
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) goto label_042fa60a;
label_042fa5c3:
    plVar34 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  if (plVar34 == (long *)0x0) {
label_042fa67f:
    il2cpp_runtime_helper_022b2c90();
    return;
  }
  if ((*(byte *)(*plVar34 + 0x130) < *(byte *)(TypeInfo_InGameMenu + 0x130)) ||
     (*(long *)(*(long *)(*plVar34 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameMenu + 0x130) * 8) != TypeInfo_InGameMenu))
  {
    il2cpp_runtime_helper_022b2fd0();
    goto label_042fa67f;
  }
  lVar21 = plVar34[0x16];
  if (lVar21 == 0) goto label_042fa67f;
  uVar16 = (__this->fields).RoundLeft;
  pIVar27 = (Il2CppClass *)(ulong)(uVar16 < 2);
  uVar29 = (ulong)(uVar16 == 0);
  if (g_data_057ae3db == '\0') {
    pcStack_30 = (code *)0x43c2dd6;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Animator_GetComponent_Animator);
    pcStack_30 = (code *)0x43c2de2;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae3db = '\x01';
  }
  pUVar23 = *(UnityEngine_Object_o **)(lVar21 + 0x108);
  plVar34 = &TypeInfo_Object;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pcStack_30 = (code *)0x43c2e09;
    il2cpp_runtime_helper_02337ed0();
  }
  pcStack_30 = (code *)0x43c2e15;
  bVar14 = UnityEngine_Object__op_Equality(pUVar23,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar14 != '\0') {
    return;
  }
  pUVar23 = *(UnityEngine_Object_o **)(lVar21 + 0xc0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pcStack_30 = (code *)0x43c2e36;
    il2cpp_runtime_helper_02337ed0();
  }
  pcStack_30 = (code *)0x43c2e42;
  bVar14 = UnityEngine_Object__op_Equality(pUVar23,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar14 != '\0') {
    return;
  }
  pUVar23 = *(UnityEngine_Object_o **)(lVar21 + 0x1e0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pcStack_30 = (code *)0x43c2e63;
    il2cpp_runtime_helper_02337ed0();
  }
  pcStack_30 = (code *)0x43c2e6f;
  bVar14 = UnityEngine_Object__op_Equality(pUVar23,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar14 != '\0') {
    return;
  }
  if (uVar16 < 2) {
    pSVar37 = *(System_Object_array **)(lVar21 + 0x210);
    if (pSVar37 != (System_Object_array *)0x0) {
      pcStack_30 = (code *)0x43c2e97;
      pUVar17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pSVar37,(MethodInfo *)0x0);
      if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
        pcStack_30 = (code *)0x43c2eaf;
        UnityEngine_GameObject__SetActive(pUVar17,1,(MethodInfo *)0x0);
        pSVar37 = *(System_Object_array **)(lVar21 + 0x210);
        if (pSVar37 != (System_Object_array *)0x0) {
          pcStack_30 = (code *)0x43c2ece;
          pUVar18 = (UnityEngine_Animator_o *)
                    UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)pSVar37,(MethodInfo_24E7B40 *)MethodInfo_Animator_GetComponent_Animator);
          if (pUVar18 != (UnityEngine_Animator_o *)0x0) {
            pcStack_30 = (code *)0x43c2ee4;
            UnityEngine_Animator__Update(pUVar18,0.0,(MethodInfo *)0x0);
            pSVar37 = *(System_Object_array **)(lVar21 + 0x1e0);
            if (pSVar37 != (System_Object_array *)0x0) {
              pcStack_30 = (code *)0x43c2efb;
              pUVar17 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pSVar37,(MethodInfo *)0x0);
              if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
                pcStack_30 = (code *)0x43c2f10;
                UnityEngine_GameObject__SetActive(pUVar17,0,(MethodInfo *)0x0);
                pSVar37 = *(System_Object_array **)(lVar21 + 0x1f0);
                if (pSVar37 != (System_Object_array *)0x0) {
                  pcStack_30 = (code *)0x43c2f27;
                  pUVar17 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)pSVar37,(MethodInfo *)0x0);
                  if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
                    pcStack_30 = (code *)0x43c2f3c;
                    UnityEngine_GameObject__SetActive(pUVar17,0,(MethodInfo *)0x0);
                    pSVar37 = *(System_Object_array **)(lVar21 + 0x200);
                    if (pSVar37 != (System_Object_array *)0x0) {
                      pcStack_30 = (code *)0x43c2f53;
                      pUVar17 = UnityEngine_Component__get_gameObject
                                          ((UnityEngine_Component_o *)pSVar37,(MethodInfo *)0x0);
                      if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
                        pcStack_30 = (code *)0x43c2f68;
                        UnityEngine_GameObject__SetActive(pUVar17,0,(MethodInfo *)0x0);
                        goto label_043c2f68;
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
  else {
label_043c2f68:
    if (uVar16 != 0) {
label_043c3041:
      *(undefined8 *)(lVar21 + 0x124) = 0x3f2ac08300000000;
      return;
    }
    pSVar37 = *(System_Object_array **)(lVar21 + 0x218);
    if (pSVar37 != (System_Object_array *)0x0) {
      pcStack_30 = (code *)0x43c2f88;
      pUVar17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pSVar37,(MethodInfo *)0x0);
      if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
        pcStack_30 = (code *)0x43c2fa0;
        UnityEngine_GameObject__SetActive(pUVar17,1,(MethodInfo *)0x0);
        pSVar37 = *(System_Object_array **)(lVar21 + 0x218);
        if (pSVar37 != (System_Object_array *)0x0) {
          pcStack_30 = (code *)0x43c2fbf;
          pUVar18 = (UnityEngine_Animator_o *)
                    UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)pSVar37,(MethodInfo_24E7B40 *)MethodInfo_Animator_GetComponent_Animator);
          if (pUVar18 != (UnityEngine_Animator_o *)0x0) {
            pcStack_30 = (code *)0x43c2fd5;
            UnityEngine_Animator__Update(pUVar18,0.0,(MethodInfo *)0x0);
            pSVar37 = *(System_Object_array **)(lVar21 + 0x1e8);
            if (pSVar37 != (System_Object_array *)0x0) {
              pcStack_30 = (code *)0x43c2fe8;
              pUVar17 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pSVar37,(MethodInfo *)0x0);
              if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
                pcStack_30 = (code *)0x43c2ff9;
                UnityEngine_GameObject__SetActive(pUVar17,0,(MethodInfo *)0x0);
                pSVar37 = *(System_Object_array **)(lVar21 + 0x1f8);
                if (pSVar37 != (System_Object_array *)0x0) {
                  pcStack_30 = (code *)0x43c300c;
                  pUVar17 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)pSVar37,(MethodInfo *)0x0);
                  if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
                    pcStack_30 = (code *)0x43c301d;
                    UnityEngine_GameObject__SetActive(pUVar17,0,(MethodInfo *)0x0);
                    pSVar37 = *(System_Object_array **)(lVar21 + 0x208);
                    if (pSVar37 != (System_Object_array *)0x0) {
                      pcStack_30 = (code *)0x43c3030;
                      pUVar17 = UnityEngine_Component__get_gameObject
                                          ((UnityEngine_Component_o *)pSVar37,(MethodInfo *)0x0);
                      if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
                        pcStack_30 = (code *)0x43c3041;
                        UnityEngine_GameObject__SetActive(pUVar17,0,(MethodInfo *)0x0);
                        goto label_043c3041;
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
  pcStack_30 = UI_HUDBottomHandler__ShootTS;
  il2cpp_runtime_helper_022b2c90();
  pUStack_40 = pUVar23;
  uStack_38 = uVar29;
  pcStack_30 = (code *)lVar21;
  if (g_data_057ae3dc == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Animator_GetComponent_Animator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    g_data_057ae3dc = '\x01';
  }
  pUVar23 = (UnityEngine_Object_o *)pSVar37->m_Items[0x1d];
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar14 = UnityEngine_Object__op_Equality(pUVar23,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar14 != '\0') {
    return;
  }
  pUVar23 = (UnityEngine_Object_o *)pSVar37->m_Items[0x14];
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar14 = UnityEngine_Object__op_Equality(pUVar23,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar14 != '\0') {
    return;
  }
  __this_02 = (System_Object_array *)pSVar37->m_Items[0x40];
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_03 = __this_02;
  bVar14 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar14 != '\0') {
    return;
  }
  lVar21 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if (((lVar21 != 0) && (lVar21 = *(long *)(lVar21 + 0x58), lVar21 != 0)) &&
     (lVar21 = *(long *)(lVar21 + 0x48), lVar21 != 0)) {
    if (*(char *)(lVar21 + 0x11) != '\0') {
      return;
    }
    __this_03 = (System_Object_array *)pSVar37->m_Items[0x42];
    if ((__this_03 != (System_Object_array *)0x0) &&
       (pUVar17 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0),
       pUVar17 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar17,1,(MethodInfo *)0x0);
      __this_03 = (System_Object_array *)pSVar37->m_Items[0x42];
      if ((__this_03 != (System_Object_array *)0x0) &&
         (pUVar18 = (UnityEngine_Animator_o *)
                    UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)__this_03,(MethodInfo_24E7B40 *)MethodInfo_Animator_GetComponent_Animator),
         pUVar18 != (UnityEngine_Animator_o *)0x0)) {
        UnityEngine_Animator__Update(pUVar18,0.0,(MethodInfo *)0x0);
        __this_03 = (System_Object_array *)pSVar37->m_Items[0x40];
        if ((__this_03 != (System_Object_array *)0x0) &&
           (pUVar17 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0),
           pUVar17 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar17,0,(MethodInfo *)0x0);
          __this_03 = (System_Object_array *)pSVar37->m_Items[0x41];
          if ((__this_03 != (System_Object_array *)0x0) &&
             (pUVar17 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0),
             pUVar17 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar17,0,(MethodInfo *)0x0);
            __this_03 = (System_Object_array *)pSVar37->m_Items[0x30];
            if ((__this_03 != (System_Object_array *)0x0) &&
               (pUVar17 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0),
               pUVar17 != (UnityEngine_GameObject_o *)0x0)) {
              UnityEngine_GameObject__SetActive(pUVar17,1,(MethodInfo *)0x0);
              __this_03 = (System_Object_array *)pSVar37->m_Items[0x31];
              if ((__this_03 != (System_Object_array *)0x0) &&
                 (pUVar17 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0),
                 pUVar17 != (UnityEngine_GameObject_o *)0x0)) {
                UnityEngine_GameObject__SetActive(pUVar17,1,(MethodInfo *)0x0);
                *(undefined8 *)((long)pSVar37->m_Items + 0x104) = 0x3f80000000000000;
                return;
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3dd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AHSSWeapon);
    il2cpp_runtime_helper_023445d0(&TypeInfo_APGWeapon);
    il2cpp_runtime_helper_023445d0(&TypeInfo_BladeWeapon);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ThunderspearWeapon);
    g_data_057ae3dd = '\x01';
  }
  pSVar20 = (System_String_o *)__this_03->m_Items[0x1d];
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar35 = (MethodInfo *)0x0;
  bVar14 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pSVar20,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar14 == '\0') {
    pUVar23 = (UnityEngine_Object_o *)__this_03->m_Items[0x1f];
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar36 = (Il2CppClass *)0x0;
    bVar14 = UnityEngine_Object__op_Inequality(pUVar23,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar14 == '\0') {
      return;
    }
    __this_04 = &TypeInfo_Object;
    ppUVar32 = &pUStack_40;
  }
  else {
    fVar43 = *(float *)((long)__this_03->m_Items + 0x104);
    fVar41 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    *(float *)((long)__this_03->m_Items + 0x104) = fVar43 - fVar41;
    fVar43 = *(float *)(__this_03->m_Items + 0x20);
    fVar41 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    *(float *)(__this_03->m_Items + 0x20) = fVar43 - fVar41;
    fVar43 = *(float *)(__this_03->m_Items + 0x21);
    fVar41 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    *(float *)(__this_03->m_Items + 0x21) = fVar43 - fVar41;
    UI_HUDBottomHandler__UpdateHumanSpecial((UI_HUDBottomHandler_o *)__this_03,pMVar35);
    UI_HUDBottomHandler__UpdateGas((UI_HUDBottomHandler_o *)__this_03,pMVar35);
    pSVar38 = __this_03;
    UI_HUDBottomHandler__UpdatePerkTimer((UI_HUDBottomHandler_o *)__this_03,pMVar35);
    if (__this_03->m_Items[0x1d] == (Il2CppObject *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae3e0 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
        il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
        il2cpp_runtime_helper_023445d0(&"Icons/Specials/");
        il2cpp_runtime_helper_023445d0(&"");
        g_data_057ae3e0 = '\x01';
      }
      pCVar6 = (((UI_HUDBottomHandler_o *)pSVar38)->fields)._human;
      if (pCVar6 != (Characters_Human_o *)0x0) {
        __this_00 = (pCVar6->fields).OnPlayerPropertiesChanged;
        if (__this_00 == (System_Action_Hashtable__o *)0x0) {
          pUVar9 = (((UI_HUDBottomHandler_o *)pSVar38)->fields)._specialFill;
          if (pUVar9 != (UnityEngine_UI_Image_o *)0x0) {
            UnityEngine_UI_Image__set_fillAmount(pUVar9,0.0,(MethodInfo *)0x0);
            pUVar9 = (((UI_HUDBottomHandler_o *)pSVar38)->fields)._specialIconFill;
            if (pUVar9 != (UnityEngine_UI_Image_o *)0x0) {
              UnityEngine_UI_Image__set_fillAmount(pUVar9,0.0,(MethodInfo *)0x0);
              goto label_043c3758;
            }
          }
        }
        else {
          fVar43 = Characters_BaseUseable__GetCooldownRatio
                             ((Characters_BaseUseable_o *)__this_00,(MethodInfo *)0x0);
          pUVar9 = (((UI_HUDBottomHandler_o *)pSVar38)->fields)._specialFill;
          if (pUVar9 != (UnityEngine_UI_Image_o *)0x0) {
            UnityEngine_UI_Image__set_fillAmount(pUVar9,fVar43,(MethodInfo *)0x0);
            pUVar9 = (((UI_HUDBottomHandler_o *)pSVar38)->fields)._specialIconFill;
            if (pUVar9 != (UnityEngine_UI_Image_o *)0x0) {
              UnityEngine_UI_Image__set_fillAmount(pUVar9,fVar43,(MethodInfo *)0x0);
              bVar14 = System_String__op_Inequality
                                 ((((UI_HUDBottomHandler_o *)pSVar38)->fields)._currentSpecialIcon,
                                  (((UI_HUDBottomHandler_o *)pSVar38)->fields)._newSpecialIcon,
                                  (MethodInfo *)0x0);
              if ((char)bVar14 == '\0') {
label_043c3758:
                pUVar9 = (((UI_HUDBottomHandler_o *)pSVar38)->fields)._specialIconBackground;
              }
              else {
                ppSVar2 = &(((UI_HUDBottomHandler_o *)pSVar38)->fields)._currentSpecialIcon;
                (((UI_HUDBottomHandler_o *)pSVar38)->fields)._currentSpecialIcon =
                     (((UI_HUDBottomHandler_o *)pSVar38)->fields)._newSpecialIcon;
                il2cpp_runtime_helper_022b4080(ppSVar2);
                bVar14 = System_String__op_Inequality
                                   ((((UI_HUDBottomHandler_o *)pSVar38)->fields)._currentSpecialIcon,
                                    (System_String_o *)"",(MethodInfo *)0x0);
                if ((char)bVar14 == '\0') goto label_043c3758;
                if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar20 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
                pSVar19 = System_String__Concat_3ae5ba0("Icons/Specials/",*ppSVar2,(MethodInfo *)0x0);
                if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                texture = (UnityEngine_Texture2D_o *)
                          ApplicationManagers_ResourceManager__LoadAsset(pSVar20,pSVar19,1,(MethodInfo *)0x0);
                if (texture == (UnityEngine_Texture2D_o *)0x0) {
                  il2cpp_runtime_helper_022b2c90();
label_043c384a:
                  il2cpp_runtime_helper_022b2fd0(texture);
label_043c3852:
                  il2cpp_runtime_helper_022b2c90();
                }
                else {
                  if (texture->klass != TypeInfo_Texture2D) goto label_043c384a;
                  iVar15 = (*(texture->klass->vtable)._5_get_width.methodPtr)
                                     (texture,(texture->klass->vtable)._5_get_width.method);
                  iVar33 = (*(texture->klass->vtable)._7_get_height.methodPtr)(texture);
                  auVar12._4_4_ = (float)iVar33;
                  auVar12._0_4_ = (float)iVar15;
                  auVar12._8_8_ = 0;
                  pSVar20 = (System_String_o *)
                            UnityEngine_Sprite__Create_4e0d730
                                      (texture,(UnityEngine_Rect_o)(auVar12 << 0x40),
                                       (UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
                  pUVar9 = (((UI_HUDBottomHandler_o *)pSVar38)->fields)._specialIconBackground;
                  if (pUVar9 == (UnityEngine_UI_Image_o *)0x0) goto label_043c3852;
                  UnityEngine_UI_Image__set_sprite(pUVar9,(UnityEngine_Sprite_o *)pSVar20,(MethodInfo *)0x0);
                  pUVar9 = (((UI_HUDBottomHandler_o *)pSVar38)->fields)._specialIconFill;
                  if (pUVar9 != (UnityEngine_UI_Image_o *)0x0) {
                    UnityEngine_UI_Image__set_sprite(pUVar9,(UnityEngine_Sprite_o *)pSVar20,(MethodInfo *)0x0)
                    ;
                    goto label_043c3758;
                  }
                }
                auVar45 = il2cpp_runtime_helper_022b2c90();
                if (auVar45._8_4_ != 1) {
                  _Unwind_Resume(auVar45._0_8_);
                }
                pSVar20 = (System_String_o *)__cxa_begin_catch(auVar45._0_8_);
                cVar13 = il2cpp_runtime_helper_0233e000(g_data_057b9b80,(pSVar20->klass->_1).image);
                if (cVar13 == '\0') goto label_043c3956;
                __cxa_end_catch();
                pSVar20 = *ppSVar2;
                pSVar19 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Error loading special icon ");
                pSVar20 = System_String__Concat_3ae5ba0(pSVar19,pSVar20,(MethodInfo *)0x0);
                lVar21 = il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
                if (*(int *)(lVar21 + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0(lVar21);
                }
                UnityEngine_Debug__Log((Il2CppObject *)pSVar20,(MethodInfo *)0x0);
                pUVar9 = (((UI_HUDBottomHandler_o *)pSVar38)->fields)._specialIconBackground;
              }
              if (pUVar9 != (UnityEngine_UI_Image_o *)0x0) {
                pSVar20 = (System_String_o *)
                          UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0);
                pCVar6 = (((UI_HUDBottomHandler_o *)pSVar38)->fields)._human;
                if (pCVar6 != (Characters_Human_o *)0x0) {
                  if ((pCVar6->fields).OnPlayerPropertiesChanged == (System_Action_Hashtable__o *)0x0) {
                    uVar16 = 0;
                  }
                  else {
                    uVar16 = System_String__op_Inequality
                                       ((((UI_HUDBottomHandler_o *)pSVar38)->fields)._currentSpecialIcon,
                                        (System_String_o *)"",(MethodInfo *)0x0);
                  }
                  if (pSVar20 != (System_String_o *)0x0) {
                    UnityEngine_GameObject__SetActive
                              ((UnityEngine_GameObject_o *)pSVar20,uVar16 & 0xff,(MethodInfo *)0x0);
                    pUVar9 = (((UI_HUDBottomHandler_o *)pSVar38)->fields)._specialIconFill;
                    if (pUVar9 != (UnityEngine_UI_Image_o *)0x0) {
                      pSVar20 = (System_String_o *)
                                UnityEngine_Component__get_gameObject
                                          ((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0);
                      pCVar6 = (((UI_HUDBottomHandler_o *)pSVar38)->fields)._human;
                      if (pCVar6 != (Characters_Human_o *)0x0) {
                        if ((pCVar6->fields).OnPlayerPropertiesChanged == (System_Action_Hashtable__o *)0x0) {
                          uVar16 = 0;
                        }
                        else {
                          uVar16 = System_String__op_Inequality
                                             ((((UI_HUDBottomHandler_o *)pSVar38)->fields)._currentSpecialIcon
                                              ,(System_String_o *)"",(MethodInfo *)0x0);
                        }
                        if (pSVar20 != (System_String_o *)0x0) {
                          UnityEngine_GameObject__SetActive
                                    ((UnityEngine_GameObject_o *)pSVar20,uVar16 & 0xff,(MethodInfo *)0x0);
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
      il2cpp_runtime_helper_022b2c90();
label_043c3956:
      puVar22 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar22 = pSVar20->klass;
      __cxa_throw(puVar22,&PTR_PTR_05215060,0);
    }
    pIVar36 = __this_03->m_Items[0x1d][0x10].klass;
    if (pIVar36 == (Il2CppClass *)0x0) {
      return;
    }
    pvVar26 = (pIVar36->_1).image;
    bVar4 = *(byte *)((long)pvVar26 + 0x130);
    bVar5 = (TypeInfo_BladeWeapon->_2).naturalAligment;
    if ((bVar4 < bVar5) ||
       (*(Il2CppClass **)(*(long *)((long)pvVar26 + 200) + -8 + (ulong)bVar5 * 8) != TypeInfo_BladeWeapon)) {
      bVar5 = *(byte *)(TypeInfo_APGWeapon + 0x130);
      if ((bVar5 <= bVar4) &&
         (*(long *)(*(long *)((long)pvVar26 + 200) + -8 + (long)(ulong)bVar5 * 8) == TypeInfo_APGWeapon)) {
        UI_HUDBottomHandler__UpdateAPG((UI_HUDBottomHandler_o *)__this_03,(MethodInfo *)(ulong)bVar5);
        return;
      }
      pIVar36 = (Il2CppClass *)(ulong)*(byte *)(TypeInfo_AHSSWeapon + 0x130);
      if ((bVar4 < *(byte *)(TypeInfo_AHSSWeapon + 0x130)) ||
         (*(long *)(*(long *)((long)pvVar26 + 200) + -8 + (long)pIVar36 * 8) != TypeInfo_AHSSWeapon)) {
        bVar5 = (TypeInfo_ThunderspearWeapon->_2).naturalAligment;
        if (bVar4 < bVar5) {
          return;
        }
        if (*(Il2CppClass **)(*(long *)((long)pvVar26 + 200) + -8 + (long)(ulong)bVar5 * 8) != TypeInfo_ThunderspearWeapon) {
          return;
        }
        UI_HUDBottomHandler__UpdateTS((UI_HUDBottomHandler_o *)__this_03,(MethodInfo *)(ulong)bVar5);
        return;
      }
      __this_04 = &TypeInfo_Object;
      ppUVar31 = &pUStack_40;
    }
    else {
      if (g_data_057ae3e1 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_BladeWeapon);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Animator_GetComponent_Animator);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
        il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Item);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        il2cpp_runtime_helper_023445d0(&"Prefabs/InGame/HUDBladeAmmo");
        g_data_057ae3e1 = '\x01';
      }
      if ((__this_03->m_Items[0x1d] == (Il2CppObject *)0x0) ||
         (plVar34 = (long *)__this_03->m_Items[0x1d][0x10].klass,
         (System_Object_array *)plVar34 == (System_Object_array *)0x0)) goto label_043c45cd;
      pUVar7 = ((Il2CppClass_1 *)&((System_Object_array *)plVar34)->obj)->image;
      bVar4 = (TypeInfo_BladeWeapon->_2).naturalAligment;
      if ((bVar4 <= (pUVar7->_2).naturalAligment) &&
         ((pUVar7->_2).typeHierarchy[(ulong)bVar4 - 1] == TypeInfo_BladeWeapon)) {
        if ((UnityEngine_Component_o *)__this_03->m_Items[0x27] == (UnityEngine_Component_o *)0x0)
        goto label_043c45cd;
        fVar43 = *(float *)((Il2CppType *)((System_Object_array *)plVar34)->m_Items + 2) /
                 *(float *)&((Il2CppType *)((System_Object_array *)plVar34)->m_Items)[1].field_0xc;
        pUVar17 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_03->m_Items[0x27],(MethodInfo *)0x0);
        if (pUVar17 == (UnityEngine_GameObject_o *)0x0) goto label_043c45cd;
        bVar14 = UnityEngine_GameObject__get_activeSelf(pUVar17,(MethodInfo *)0x0);
        if ((char)bVar14 != '\0') {
          if ((UnityEngine_UI_Image_o *)__this_03->m_Items[0x28] == (UnityEngine_UI_Image_o *)0x0)
          goto label_043c45cd;
          pUVar9 = (UnityEngine_UI_Image_o *)__this_03->m_Items[0x27];
          UnityEngine_UI_Image__set_fillAmount
                    ((UnityEngine_UI_Image_o *)__this_03->m_Items[0x28],fVar43,(MethodInfo *)0x0);
          if (pUVar9 == (UnityEngine_UI_Image_o *)0x0) goto label_043c45cd;
          UnityEngine_UI_Image__set_fillAmount(pUVar9,fVar43,(MethodInfo *)0x0);
          pIVar40 = __this_03->m_Items[0x27];
          if (fVar43 <= 0.25) {
            if (pIVar40 == (Il2CppObject *)0x0) goto label_043c45cd;
            (*pIVar40->klass->vtable[0x17].methodPtr)
                      ((int)__this_03->m_Items[4],__this_03->m_Items[5],pIVar40,
                       pIVar40->klass->vtable[0x17].method);
            pIVar40 = __this_03->m_Items[0x28];
            if (pIVar40 == (Il2CppObject *)0x0) goto label_043c45cd;
            (*pIVar40->klass->vtable[0x17].methodPtr)
                      ((int)__this_03->m_Items[4],__this_03->m_Items[5],pIVar40,
                       pIVar40->klass->vtable[0x17].method);
            pIVar40 = __this_03->m_Items[0x29];
            if (pIVar40 == (Il2CppObject *)0x0) goto label_043c45cd;
            uVar42 = SUB84(__this_03->m_Items[6],0);
          }
          else {
            if (pIVar40 == (Il2CppObject *)0x0) goto label_043c45cd;
            (*pIVar40->klass->vtable[0x17].methodPtr)
                      ((int)__this_03->m_Items[10],__this_03->m_Items[0xb],pIVar40,
                       pIVar40->klass->vtable[0x17].method);
            pIVar40 = __this_03->m_Items[0x28];
            if (pIVar40 == (Il2CppObject *)0x0) goto label_043c45cd;
            (*pIVar40->klass->vtable[0x17].methodPtr)
                      ((int)__this_03->m_Items[10],__this_03->m_Items[0xb],pIVar40,
                       pIVar40->klass->vtable[0x17].method);
            pIVar40 = __this_03->m_Items[0x29];
            if (pIVar40 == (Il2CppObject *)0x0) goto label_043c45cd;
            uVar42 = SUB84(__this_03->m_Items[0xc],0);
          }
          (*pIVar40->klass->vtable[0x17].methodPtr)(uVar42);
        }
        if (0.0 < fVar43) {
label_043c40d5:
          if (((UnityEngine_Component_o *)__this_03->m_Items[0x29] == (UnityEngine_Component_o *)0x0) ||
             (pUVar17 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)__this_03->m_Items[0x29],(MethodInfo *)0x0),
             pUVar17 == (UnityEngine_GameObject_o *)0x0)) goto label_043c45cd;
          bVar14 = UnityEngine_GameObject__get_activeSelf(pUVar17,(MethodInfo *)0x0);
          if (((char)bVar14 != '\0') || (0.0 < *(float *)((long)__this_03->m_Items + 0x104)))
          goto label_043c42f1;
          if (((UnityEngine_Component_o *)__this_03->m_Items[0x2a] == (UnityEngine_Component_o *)0x0) ||
             (pUVar17 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)__this_03->m_Items[0x2a],(MethodInfo *)0x0),
             pUVar17 == (UnityEngine_GameObject_o *)0x0)) goto label_043c45cd;
          UnityEngine_GameObject__SetActive(pUVar17,0,(MethodInfo *)0x0);
          if (fVar43 <= 0.0) goto label_043c42f1;
          if (((UnityEngine_Component_o *)__this_03->m_Items[0x29] == (UnityEngine_Component_o *)0x0) ||
             (pUVar17 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)__this_03->m_Items[0x29],(MethodInfo *)0x0),
             pUVar17 == (UnityEngine_GameObject_o *)0x0)) goto label_043c45cd;
          UnityEngine_GameObject__SetActive(pUVar17,1,(MethodInfo *)0x0);
          if (((UnityEngine_Component_o *)__this_03->m_Items[0x2b] == (UnityEngine_Component_o *)0x0) ||
             (pUVar17 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)__this_03->m_Items[0x2b],(MethodInfo *)0x0),
             pUVar17 == (UnityEngine_GameObject_o *)0x0)) goto label_043c45cd;
          UnityEngine_GameObject__SetActive(pUVar17,0,(MethodInfo *)0x0);
          if (((UnityEngine_Component_o *)__this_03->m_Items[0x27] == (UnityEngine_Component_o *)0x0) ||
             (pUVar17 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)__this_03->m_Items[0x27],(MethodInfo *)0x0),
             pUVar17 == (UnityEngine_GameObject_o *)0x0)) goto label_043c45cd;
          UnityEngine_GameObject__SetActive(pUVar17,1,(MethodInfo *)0x0);
          if (((UnityEngine_Component_o *)__this_03->m_Items[0x28] == (UnityEngine_Component_o *)0x0) ||
             (pUVar17 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)__this_03->m_Items[0x28],(MethodInfo *)0x0),
             pUVar17 == (UnityEngine_GameObject_o *)0x0)) goto label_043c45cd;
          UnityEngine_GameObject__SetActive(pUVar17,1,(MethodInfo *)0x0);
          if ((UnityEngine_UI_Image_o *)__this_03->m_Items[0x28] == (UnityEngine_UI_Image_o *)0x0)
          goto label_043c45cd;
          pUVar9 = (UnityEngine_UI_Image_o *)__this_03->m_Items[0x27];
          UnityEngine_UI_Image__set_fillAmount
                    ((UnityEngine_UI_Image_o *)__this_03->m_Items[0x28],fVar43,(MethodInfo *)0x0);
          if (pUVar9 == (UnityEngine_UI_Image_o *)0x0) goto label_043c45cd;
          UnityEngine_UI_Image__set_fillAmount(pUVar9,fVar43,(MethodInfo *)0x0);
          pSVar30 = (System_Collections_Generic_List_object__o *)__this_03->m_Items[0x2e];
        }
        else {
          if (((UnityEngine_Component_o *)__this_03->m_Items[0x2b] == (UnityEngine_Component_o *)0x0) ||
             (pUVar17 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)__this_03->m_Items[0x2b],(MethodInfo *)0x0),
             pUVar17 == (UnityEngine_GameObject_o *)0x0)) goto label_043c45cd;
          bVar14 = UnityEngine_GameObject__get_activeSelf(pUVar17,(MethodInfo *)0x0);
          if ((char)bVar14 != '\0') goto label_043c40d5;
          if (((UnityEngine_Component_o *)__this_03->m_Items[0x2a] == (UnityEngine_Component_o *)0x0) ||
             (pUVar17 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)__this_03->m_Items[0x2a],(MethodInfo *)0x0),
             pUVar17 == (UnityEngine_GameObject_o *)0x0)) goto label_043c45cd;
          bVar14 = UnityEngine_GameObject__get_activeSelf(pUVar17,(MethodInfo *)0x0);
          if ((char)bVar14 != '\0') goto label_043c40d5;
          if (((UnityEngine_Component_o *)__this_03->m_Items[0x2b] == (UnityEngine_Component_o *)0x0) ||
             (pUVar17 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)__this_03->m_Items[0x2b],(MethodInfo *)0x0),
             pUVar17 == (UnityEngine_GameObject_o *)0x0)) goto label_043c45cd;
          UnityEngine_GameObject__SetActive(pUVar17,1,(MethodInfo *)0x0);
          if (((UnityEngine_Component_o *)__this_03->m_Items[0x2b] == (UnityEngine_Component_o *)0x0) ||
             (pUVar18 = (UnityEngine_Animator_o *)
                        UnityEngine_Component__GetComponent_object_
                                  ((UnityEngine_Component_o *)__this_03->m_Items[0x2b],
                                   (MethodInfo_24E7B40 *)MethodInfo_Animator_GetComponent_Animator),
             pUVar18 == (UnityEngine_Animator_o *)0x0)) goto label_043c45cd;
          UnityEngine_Animator__Update(pUVar18,0.0,(MethodInfo *)0x0);
          if (((UnityEngine_Component_o *)__this_03->m_Items[0x29] == (UnityEngine_Component_o *)0x0) ||
             (pUVar17 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)__this_03->m_Items[0x29],(MethodInfo *)0x0),
             pUVar17 == (UnityEngine_GameObject_o *)0x0)) goto label_043c45cd;
          UnityEngine_GameObject__SetActive(pUVar17,0,(MethodInfo *)0x0);
label_043c42f1:
          pSVar30 = (System_Collections_Generic_List_object__o *)__this_03->m_Items[0x2e];
        }
        if (pSVar30 != (System_Collections_Generic_List_object__o *)0x0) {
          iVar15 = (pSVar30->fields)._size;
          fVar43 = (((UnityEngine_Vector4_o *)
                    ((long)((Il2CppType *)((System_Object_array *)plVar34)->m_Items + 2) + 8))->fields).x;
          if ((int)fVar43 < iVar15) {
            if (iVar15 - (int)fVar43 < 1) {
              return;
            }
            iVar33 = 0;
            do {
              pUVar23 = (UnityEngine_Object_o *)
                        System_Collections_Generic_List_object___get_Item(pSVar30,0,MethodInfo_GameObject_get_Item);
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              UnityEngine_Object__Destroy_4e01c60(pUVar23,(MethodInfo *)0x0);
              if ((System_Collections_Generic_List_object__o *)__this_03->m_Items[0x2f] ==
                  (System_Collections_Generic_List_object__o *)0x0) break;
              pUVar23 = (UnityEngine_Object_o *)
                        System_Collections_Generic_List_object___get_Item
                                  ((System_Collections_Generic_List_object__o *)__this_03->m_Items[0x2f],0,
                                   MethodInfo_GameObject_get_Item);
              UnityEngine_Object__Destroy_4e01c60(pUVar23,(MethodInfo *)0x0);
              if ((System_Collections_Generic_List_object__o *)__this_03->m_Items[0x2e] ==
                  (System_Collections_Generic_List_object__o *)0x0) break;
              System_Collections_Generic_List_object___RemoveAt
                        ((System_Collections_Generic_List_object__o *)__this_03->m_Items[0x2e],0,MethodInfo_Void_RemoveAt)
              ;
              if ((System_Collections_Generic_List_object__o *)__this_03->m_Items[0x2f] ==
                  (System_Collections_Generic_List_object__o *)0x0) break;
              System_Collections_Generic_List_object___RemoveAt
                        ((System_Collections_Generic_List_object__o *)__this_03->m_Items[0x2f],0,MethodInfo_Void_RemoveAt)
              ;
              iVar33 = iVar33 + 1;
              if (iVar15 - (int)(((UnityEngine_Vector4_o *)
                                 ((long)((Il2CppType *)((System_Object_array *)plVar34)->m_Items + 2) + 8))->
                                fields).x <= iVar33) {
                return;
              }
              pSVar30 = (System_Collections_Generic_List_object__o *)__this_03->m_Items[0x2e];
            } while (pSVar30 != (System_Collections_Generic_List_object__o *)0x0);
          }
          else {
            if ((int)fVar43 <= iVar15) {
              return;
            }
            if ((int)fVar43 - iVar15 < 1) {
              return;
            }
            pUVar17 = (UnityEngine_GameObject_o *)__this_03->m_Items[0x2c];
            if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
              iVar33 = 0;
              do {
                pUVar24 = UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0);
                pUVar17 = UI_ElementFactory__InstantiateAndBind(pUVar24,"Prefabs/InGame/HUDBladeAmmo",(MethodInfo *)0x0);
                lVar21 = MethodInfo_Void_Add;
                if (pSVar30 == (System_Collections_Generic_List_object__o *)0x0) break;
                piVar1 = &(pSVar30->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar37 = (pSVar30->fields)._items;
                if (pSVar37 == (System_Object_array *)0x0) break;
                uVar16 = (pSVar30->fields)._size;
                if (uVar16 < (uint)pSVar37->max_length) {
                  (pSVar30->fields)._size = uVar16 + 1;
                  pSVar37->m_Items[(int)uVar16] = (Il2CppObject *)pUVar17;
                  il2cpp_runtime_helper_022b4080(pSVar37->m_Items + (int)uVar16);
                  pUVar17 = (UnityEngine_GameObject_o *)__this_03->m_Items[0x2d];
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            (pSVar30,(Il2CppObject *)pUVar17,
                             *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
                  pUVar17 = (UnityEngine_GameObject_o *)__this_03->m_Items[0x2d];
                }
                if (pUVar17 == (UnityEngine_GameObject_o *)0x0) break;
                pUVar24 = UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0);
                pUVar17 = UI_ElementFactory__InstantiateAndBind(pUVar24,"Prefabs/InGame/HUDBladeAmmo",(MethodInfo *)0x0);
                if (pUVar17 == (UnityEngine_GameObject_o *)0x0) break;
                pUVar24 = UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0);
                value = UnityEngine_Quaternion__Internal_FromEulerRad
                                  ((UnityEngine_Vector3_o)ZEXT812(0x40490fdb00000000),(MethodInfo *)0x0);
                if (pUVar24 == (UnityEngine_Transform_o *)0x0) break;
                UnityEngine_Transform__set_localRotation(pUVar24,value,(MethodInfo *)0x0);
                lVar21 = MethodInfo_Void_Add;
                pSVar30 = (System_Collections_Generic_List_object__o *)__this_03->m_Items[0x2f];
                if (pSVar30 == (System_Collections_Generic_List_object__o *)0x0) break;
                piVar1 = &(pSVar30->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar37 = (pSVar30->fields)._items;
                if (pSVar37 == (System_Object_array *)0x0) break;
                uVar16 = (pSVar30->fields)._size;
                if (uVar16 < (uint)pSVar37->max_length) {
                  (pSVar30->fields)._size = uVar16 + 1;
                  pSVar37->m_Items[(int)uVar16] = (Il2CppObject *)pUVar17;
                  il2cpp_runtime_helper_022b4080(pSVar37->m_Items + (int)uVar16);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            (pSVar30,(Il2CppObject *)pUVar17,
                             *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
                }
                iVar33 = iVar33 + 1;
                if ((int)(((UnityEngine_Vector4_o *)
                          ((long)((Il2CppType *)((System_Object_array *)plVar34)->m_Items + 2) + 8))->fields).
                         x - iVar15 <= iVar33) {
                  return;
                }
                pUVar17 = (UnityEngine_GameObject_o *)__this_03->m_Items[0x2c];
                pSVar30 = (System_Collections_Generic_List_object__o *)__this_03->m_Items[0x2e];
              } while (pUVar17 != (UnityEngine_GameObject_o *)0x0);
            }
          }
        }
label_043c45cd:
        il2cpp_runtime_helper_022b2c90();
        return;
      }
      pIVar36 = TypeInfo_BladeWeapon;
      __this_04 = plVar34;
      il2cpp_runtime_helper_022b2fd0();
      ppUVar31 = (UnityEngine_Object_o **)auStack_c0;
      pSStack_b0 = __this_02;
      pIStack_a8 = pIVar27;
      if (g_data_057ae3e2 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_AmmoWeapon);
        g_data_057ae3e2 = '\x01';
      }
      if ((*(long *)((long)((Il2CppType *)((System_Object_array *)__this_04)->m_Items + 0xe) + 8) == 0) ||
         (pSVar37 = *(System_Object_array **)
                     (*(long *)((long)((Il2CppType *)((System_Object_array *)__this_04)->m_Items + 0xe) + 8) +
                     0x100), pSVar37 == (System_Object_array *)0x0)) {
label_043c4ab9:
        il2cpp_runtime_helper_022b2c90();
      }
      else {
        pIVar25 = (pSVar37->obj).klass;
        bVar4 = (TypeInfo_AmmoWeapon->_2).naturalAligment;
        pIVar36 = TypeInfo_AmmoWeapon;
        if ((bVar4 <= (pIVar25->_2).naturalAligment) &&
           ((pIVar25->_2).typeHierarchy[(ulong)bVar4 - 1] == TypeInfo_AmmoWeapon)) {
          iVar15 = *(int *)((long)pSVar37->m_Items + 0x24);
          if (iVar15 < 1) {
            if (*(int *)(pSVar37->m_Items + 5) == -1) {
              fVar43 = 1.0;
              pUVar9 = *(UnityEngine_UI_Image_o **)
                        ((long)((Il2CppType *)((System_Object_array *)__this_04)->m_Items + 0x18) + 8);
            }
            else {
              fVar43 = 0.0;
              pUVar9 = *(UnityEngine_UI_Image_o **)
                        ((long)((Il2CppType *)((System_Object_array *)__this_04)->m_Items + 0x18) + 8);
            }
          }
          else {
            fVar43 = (float)*(int *)(pSVar37->m_Items + 5) / (float)iVar15;
            pUVar9 = *(UnityEngine_UI_Image_o **)
                      ((long)((Il2CppType *)((System_Object_array *)__this_04)->m_Items + 0x18) + 8);
          }
          if (pUVar9 != (UnityEngine_UI_Image_o *)0x0) {
            __this_02 = ((Il2CppType *)((System_Object_array *)__this_04)->m_Items)[0x18].data;
            pIVar36 = (Il2CppClass *)0x0;
            fStack_b4 = fVar43;
            UnityEngine_UI_Image__set_fillAmount(pUVar9,fVar43,(MethodInfo *)0x0);
            if (__this_02 != (System_Object_array *)0x0) {
              pIVar36 = (Il2CppClass *)0x0;
              UnityEngine_UI_Image__set_fillAmount
                        ((UnityEngine_UI_Image_o *)__this_02,fStack_b4,(MethodInfo *)0x0);
              if (fStack_b4 <= 0.0) {
                if (((Il2CppType *)((System_Object_array *)__this_04)->m_Items)[0x1a].data != (long *)0x0) {
                  lVar21 = *((Il2CppType *)((System_Object_array *)__this_04)->m_Items)[0x1a].data;
                  pIVar36 = *(Il2CppClass **)(lVar21 + 0x2b0);
                  (**(code **)(lVar21 + 0x2a8))
                            ((int)((Il2CppType *)((System_Object_array *)__this_04)->m_Items)[3].data);
                  plVar39 = *(long **)((long)((Il2CppType *)((System_Object_array *)__this_04)->m_Items + 0x1b
                                             ) + 8);
                  if (plVar39 != (long *)0x0) {
                    lVar21 = *plVar39;
                    pIVar36 = *(Il2CppClass **)(lVar21 + 0x2b0);
                    (**(code **)(lVar21 + 0x2a8))
                              ((int)((Il2CppType *)((System_Object_array *)__this_04)->m_Items)[3].data);
                    plVar39 = ((Il2CppType *)((System_Object_array *)__this_04)->m_Items)[0x1b].data;
                    if (plVar39 != (long *)0x0) {
                      uVar42 = SUB84(((Il2CppType *)((System_Object_array *)__this_04)->m_Items)[3].data,0);
                      goto label_043c4886;
                    }
                  }
                }
              }
              else {
                plVar39 = ((Il2CppType *)((System_Object_array *)__this_04)->m_Items)[0x1a].data;
                if (fStack_b4 <= 0.5) {
                  if (plVar39 != (long *)0x0) {
                    pIVar36 = *(Il2CppClass **)(*plVar39 + 0x2b0);
                    (**(code **)(*plVar39 + 0x2a8))
                              ((int)((Il2CppType *)((System_Object_array *)__this_04)->m_Items)[1].data);
                    plVar39 = *(long **)((long)((Il2CppType *)((System_Object_array *)__this_04)->m_Items +
                                               0x1b) + 8);
                    if (plVar39 != (long *)0x0) {
                      lVar21 = *plVar39;
                      pIVar36 = *(Il2CppClass **)(lVar21 + 0x2b0);
                      (**(code **)(lVar21 + 0x2a8))
                                ((int)((Il2CppType *)((System_Object_array *)__this_04)->m_Items)[1].data);
                      plVar39 = ((Il2CppType *)((System_Object_array *)__this_04)->m_Items)[0x1b].data;
                      if (plVar39 != (long *)0x0) {
                        uVar42 = SUB84(((Il2CppType *)((System_Object_array *)__this_04)->m_Items)[1].data,0);
                        goto label_043c4886;
                      }
                    }
                  }
                }
                else if (plVar39 != (long *)0x0) {
                  pIVar36 = *(Il2CppClass **)(*plVar39 + 0x2b0);
                  (**(code **)(*plVar39 + 0x2a8))
                            ((int)((Il2CppType *)((System_Object_array *)__this_04)->m_Items)[6].data);
                  plVar39 = *(long **)((long)((Il2CppType *)((System_Object_array *)__this_04)->m_Items + 0x1b
                                             ) + 8);
                  if (plVar39 != (long *)0x0) {
                    lVar21 = *plVar39;
                    pIVar36 = *(Il2CppClass **)(lVar21 + 0x2b0);
                    (**(code **)(lVar21 + 0x2a8))
                              ((int)((Il2CppType *)((System_Object_array *)__this_04)->m_Items)[6].data);
                    plVar39 = ((Il2CppType *)((System_Object_array *)__this_04)->m_Items)[0x1b].data;
                    if (plVar39 != (long *)0x0) {
                      uVar42 = SUB84(((Il2CppType *)((System_Object_array *)__this_04)->m_Items)[6].data,0);
label_043c4886:
                      (**(code **)(*plVar39 + 0x2a8))(uVar42);
                      unaff_R13 = ((Il2CppType *)((System_Object_array *)__this_04)->m_Items)[0x19].data;
                      __this_02 = *(System_Object_array **)
                                   ((long)((Il2CppType *)((System_Object_array *)__this_04)->m_Items + 0x19) +
                                   8);
                      pSVar37 = (System_Object_array *)(pSVar37->m_Items + 4);
                      pIVar36 = (Il2CppClass *)0x0;
                      pIVar25 = (Il2CppClass *)System_Int32__ToString((int32_t)pSVar37,(MethodInfo *)0x0);
                      if ((__this_02 != (System_Object_array *)0x0) &&
                         (pUVar7 = ((Il2CppClass_1 *)&__this_02->obj)->image, pIVar36 = pIVar25,
                         (*(pUVar7->vtable)._75_unknown.methodPtr)
                                   (__this_02,pIVar25,(pUVar7->vtable)._75_unknown.method), pIVar27 = pIVar25,
                         unaff_R13 != (Il2CppClass *)0x0)) {
                        vtableDispatch = (unaff_R13->_1).image;
                        pIVar36 = pIVar25;
                        (**(code **)(vtableDispatch + 0x5e8))
                                  (unaff_R13,pIVar25,*(undefined8 *)(vtableDispatch + 0x5f0));
                        plVar39 = ((Il2CppType *)((System_Object_array *)__this_04)->m_Items)[0x19].data;
                        if (*(int *)&(pSVar37->obj).klass == 0) {
                          if (plVar39 != (long *)0x0) {
                            pIVar36 = *(Il2CppClass **)(*plVar39 + 0x2b0);
                            (**(code **)(*plVar39 + 0x2a8))(0x3f800000);
                            plVar39 = *(long **)((long)((Il2CppType *)
                                                        ((System_Object_array *)__this_04)->m_Items + 0x19) +
                                                8);
                            if (plVar39 != (long *)0x0) {
                              lVar21 = *plVar39;
                              pIVar36 = *(Il2CppClass **)(lVar21 + 0x2b0);
                              (**(code **)(lVar21 + 0x2a8))(0x3f800000);
                              pUVar8 = ((Il2CppType *)((System_Object_array *)__this_04)->m_Items)[0x1a].data;
                              goto joined_r0x043c4a06;
                            }
                          }
                        }
                        else if (plVar39 != (long *)0x0) {
                          pIVar36 = *(Il2CppClass **)(*plVar39 + 0x2b0);
                          (**(code **)(*plVar39 + 0x2a8))();
                          plVar39 = *(long **)((long)((Il2CppType *)
                                                      ((System_Object_array *)__this_04)->m_Items + 0x19) + 8)
                          ;
                          if (plVar39 != (long *)0x0) {
                            lVar21 = *plVar39;
                            pIVar36 = *(Il2CppClass **)(lVar21 + 0x2b0);
                            (**(code **)(lVar21 + 0x2a8))();
                            pUVar8 = ((Il2CppType *)((System_Object_array *)__this_04)->m_Items)[0x1a].data;
joined_r0x043c4a06:
                            if (pUVar8 != (UnityEngine_Component_o *)0x0) {
                              pIVar36 = (Il2CppClass *)0x0;
                              pUVar17 = UnityEngine_Component__get_gameObject(pUVar8,(MethodInfo *)0x0);
                              if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
                                pIVar36 = (Il2CppClass *)0x0;
                                bVar14 = UnityEngine_GameObject__get_activeSelf(pUVar17,(MethodInfo *)0x0);
                                if ((((char)bVar14 != '\0') ||
                                    (0.0 < *(float *)((long)((Il2CppType *)
                                                             ((System_Object_array *)__this_04)->m_Items +
                                                            0x10) + 4))) ||
                                   (0.0 < *(float *)((long)((Il2CppType *)
                                                            ((System_Object_array *)__this_04)->m_Items + 0x10
                                                           ) + 8))) {
                                  return;
                                }
                                if (((Il2CppType *)((System_Object_array *)__this_04)->m_Items)[0x1a].data !=
                                    (UnityEngine_Component_o *)0x0) {
                                  pIVar36 = (Il2CppClass *)0x0;
                                  pUVar17 = UnityEngine_Component__get_gameObject
                                                      (((Il2CppType *)
                                                       ((System_Object_array *)__this_04)->m_Items)[0x1a].data
                                                       ,(MethodInfo *)0x0);
                                  if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
                                    pIVar36 = (Il2CppClass *)0x1;
                                    UnityEngine_GameObject__SetActive(pUVar17,1,(MethodInfo *)0x0);
                                    pUVar8 = *(UnityEngine_Component_o **)
                                              ((long)((Il2CppType *)
                                                      ((System_Object_array *)__this_04)->m_Items + 0x1b) + 8)
                                    ;
                                    if (pUVar8 != (UnityEngine_Component_o *)0x0) {
                                      pIVar36 = (Il2CppClass *)0x0;
                                      pUVar17 = UnityEngine_Component__get_gameObject
                                                          (pUVar8,(MethodInfo *)0x0);
                                      if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
                                        pIVar36 = (Il2CppClass *)0x0;
                                        UnityEngine_GameObject__SetActive(pUVar17,0,(MethodInfo *)0x0);
                                        pUVar8 = *(UnityEngine_Component_o **)
                                                  ((long)((Il2CppType *)
                                                          ((System_Object_array *)__this_04)->m_Items + 0x1a)
                                                  + 8);
                                        if (pUVar8 != (UnityEngine_Component_o *)0x0) {
                                          pIVar36 = (Il2CppClass *)0x0;
                                          pUVar17 = UnityEngine_Component__get_gameObject
                                                              (pUVar8,(MethodInfo *)0x0);
                                          if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
                                            pIVar36 = (Il2CppClass *)0x0;
                                            UnityEngine_GameObject__SetActive(pUVar17,0,(MethodInfo *)0x0);
                                            if (((Il2CppType *)((System_Object_array *)__this_04)->m_Items)
                                                [0x1b].data != (UnityEngine_Component_o *)0x0) {
                                              pIVar36 = (Il2CppClass *)0x0;
                                              pUVar17 = UnityEngine_Component__get_gameObject
                                                                  (((Il2CppType *)
                                                                   ((System_Object_array *)__this_04)->m_Items
                                                                   )[0x1b].data,(MethodInfo *)0x0);
                                              if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
                                                UnityEngine_GameObject__SetActive(pUVar17,0,(MethodInfo *)0x0)
                                                ;
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
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          goto label_043c4ab9;
        }
      }
      __this_03 = pSVar37;
      pvVar26 = (void *)il2cpp_runtime_helper_022b2fd0();
    }
    *(long **)((long)ppUVar31 + -8) = plVar34;
    *(long **)((long)ppUVar31 + -0x10) = __this_04;
    *(System_Object_array **)((long)ppUVar31 + -0x18) = pSVar37;
    *(Il2CppClass **)((long)ppUVar31 + -0x20) = unaff_R13;
    *(Il2CppClass **)((long)ppUVar31 + -0x28) = pIVar27;
    *(System_Object_array **)((long)ppUVar31 + -0x30) = __this_02;
    *(void **)((long)ppUVar31 + -0x38) = pvVar26;
    if (g_data_057ae3e3 == '\0') {
      *(undefined8 *)((long)ppUVar31 + -0x40) = 0x43c4af3;
      il2cpp_runtime_helper_023445d0(&TypeInfo_AmmoWeapon);
      g_data_057ae3e3 = '\x01';
    }
    if ((*(Characters_Human_o **)((long)((UnityEngine_Color_o *)__this_03->m_Items + 0xe) + 8) ==
         (Characters_Human_o *)0x0) ||
       (pSVar37 = ((*(Characters_Human_o **)((long)((UnityEngine_Color_o *)__this_03->m_Items + 0xe) + 8))->
                  fields).crossfadeCache, pSVar37 == (System_Object_array *)0x0)) {
label_043c52c4:
      *(undefined8 *)((long)ppUVar31 + -0x40) = 0x43c52c9;
      il2cpp_runtime_helper_022b2c90();
      pSVar38 = pSVar37;
    }
    else {
      pIVar27 = (pSVar37->obj).klass;
      bVar4 = (TypeInfo_AmmoWeapon->_2).naturalAligment;
      pIVar36 = TypeInfo_AmmoWeapon;
      pSVar38 = pSVar37;
      if ((bVar4 <= (pIVar27->_2).naturalAligment) &&
         ((pIVar27->_2).typeHierarchy[(ulong)bVar4 - 1] == TypeInfo_AmmoWeapon)) {
        __this_02 = (System_Object_array *)__this_03->m_Items[0x32];
        pIVar40 = __this_03->m_Items[0x33];
        __this_04 = (long *)(pSVar37->m_Items + 4);
        pIVar36 = (Il2CppClass *)0x0;
        *(undefined8 *)((long)ppUVar31 + -0x40) = 0x43c4b6b;
        pIVar27 = (Il2CppClass *)System_Int32__ToString((int32_t)__this_04,(MethodInfo *)0x0);
        if (pIVar40 != (Il2CppObject *)0x0) {
          pMVar35 = pIVar40->klass->vtable[0x4b].method;
          vtableDispatch = pIVar40->klass->vtable[0x4b].methodPtr;
          *(undefined8 *)((long)ppUVar31 + -0x40) = 0x43c4b8e;
          pIVar36 = pIVar27;
          (*vtableDispatch)(pIVar40,pIVar27,pMVar35);
          unaff_R13 = pIVar27;
          if (__this_02 != (System_Object_array *)0x0) {
            pUVar7 = ((Il2CppClass_1 *)&__this_02->obj)->image;
            pMVar35 = (pUVar7->vtable)._75_unknown.method;
            vtableDispatch = (pUVar7->vtable)._75_unknown.methodPtr;
            *(undefined8 *)((long)ppUVar31 + -0x40) = 0x43c4bad;
            pIVar36 = pIVar27;
            (*vtableDispatch)(__this_02,pIVar27,pMVar35);
            pIVar40 = __this_03->m_Items[0x32];
            if (*(int *)&((Il2CppClass_1 *)&((System_Object_array *)__this_04)->obj)->image == 0) {
              if (pIVar40 != (Il2CppObject *)0x0) {
                pIVar36 = (Il2CppClass *)pIVar40->klass->vtable[0x17].method;
                vtableDispatch = pIVar40->klass->vtable[0x17].methodPtr;
                *(undefined8 *)((long)ppUVar31 + -0x40) = 0x43c4cfb;
                (*vtableDispatch)(0x3f800000);
                if (__this_03->m_Items[0x33] != (Il2CppObject *)0x0) {
                  pIVar27 = __this_03->m_Items[0x33]->klass;
                  pIVar36 = (Il2CppClass *)pIVar27->vtable[0x17].method;
                  vtableDispatch = pIVar27->vtable[0x17].methodPtr;
                  *(undefined8 *)((long)ppUVar31 + -0x40) = 0x43c4d2b;
                  (*vtableDispatch)(0x3f800000);
                  iVar15 = *(int *)(pSVar37->m_Items + 5);
                  if (iVar15 != 1) goto label_043c4c1a;
label_043c4d38:
                  if (__this_03->m_Items[0x3a] != (Il2CppObject *)0x0) {
                    __this_02 = (System_Object_array *)(__this_03->m_Items + 2);
                    pSVar38 = (System_Object_array *)(__this_03->m_Items + 6);
                    if (0 < *(int *)&((Il2CppClass_1 *)&((System_Object_array *)__this_04)->obj)->image) {
                      pSVar38 = __this_02;
                    }
                    pUVar7 = ((Il2CppClass_1 *)&pSVar38->obj)->image;
                    pIVar27 = __this_03->m_Items[0x3a]->klass;
                    pIVar36 = (Il2CppClass *)pIVar27->vtable[0x17].method;
                    vtableDispatch = pIVar27->vtable[0x17].methodPtr;
                    *(undefined8 *)((long)ppUVar31 + -0x40) = 0x43c4d81;
                    (*vtableDispatch)((int)pUVar7);
                    if (__this_03->m_Items[0x3b] != (Il2CppObject *)0x0) {
                      pIVar40 = __this_03->m_Items[2];
                      pIVar27 = __this_03->m_Items[0x3b]->klass;
                      pIVar36 = (Il2CppClass *)pIVar27->vtable[0x17].method;
                      vtableDispatch = pIVar27->vtable[0x17].methodPtr;
                      *(undefined8 *)((long)ppUVar31 + -0x40) = 0x43c4db0;
                      (*vtableDispatch)((int)pIVar40);
                      if (__this_03->m_Items[0x38] != (Il2CppObject *)0x0) {
                        pIVar40 = __this_03->m_Items[2];
                        pIVar27 = __this_03->m_Items[0x38]->klass;
                        pIVar36 = (Il2CppClass *)pIVar27->vtable[0x17].method;
                        vtableDispatch = pIVar27->vtable[0x17].methodPtr;
                        *(undefined8 *)((long)ppUVar31 + -0x40) = 0x43c4ddf;
                        (*vtableDispatch)((int)pIVar40);
                        if (__this_03->m_Items[0x39] != (Il2CppObject *)0x0) {
                          pIVar40 = __this_03->m_Items[2];
                          pIVar27 = __this_03->m_Items[0x39]->klass;
                          pIVar36 = (Il2CppClass *)pIVar27->vtable[0x17].method;
                          vtableDispatch = pIVar27->vtable[0x17].methodPtr;
                          *(undefined8 *)((long)ppUVar31 + -0x40) = 0x43c4e0e;
                          (*vtableDispatch)((int)pIVar40);
                          if (__this_03->m_Items[0x3e] != (Il2CppObject *)0x0) {
                            pIVar40 = __this_03->m_Items[2];
                            pIVar27 = __this_03->m_Items[0x3e]->klass;
                            pIVar36 = (Il2CppClass *)pIVar27->vtable[0x17].method;
                            vtableDispatch = pIVar27->vtable[0x17].methodPtr;
                            *(undefined8 *)((long)ppUVar31 + -0x40) = 0x43c4e3d;
                            (*vtableDispatch)((int)pIVar40);
                            pIVar40 = __this_03->m_Items[0x3f];
                            if (pIVar40 != (Il2CppObject *)0x0) {
                              uVar42 = SUB84(((Il2CppClass_1 *)&__this_02->obj)->image,0);
                              goto label_043c4eb3;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            else if (pIVar40 != (Il2CppObject *)0x0) {
              pIVar36 = (Il2CppClass *)pIVar40->klass->vtable[0x17].method;
              vtableDispatch = pIVar40->klass->vtable[0x17].methodPtr;
              *(undefined8 *)((long)ppUVar31 + -0x40) = 0x43c4be2;
              (*vtableDispatch)();
              if (__this_03->m_Items[0x33] != (Il2CppObject *)0x0) {
                pIVar27 = __this_03->m_Items[0x33]->klass;
                pIVar36 = (Il2CppClass *)pIVar27->vtable[0x17].method;
                vtableDispatch = pIVar27->vtable[0x17].methodPtr;
                *(undefined8 *)((long)ppUVar31 + -0x40) = 0x43c4c0d;
                (*vtableDispatch)();
                iVar15 = *(int *)(pSVar37->m_Items + 5);
                if (iVar15 == 1) goto label_043c4d38;
label_043c4c1a:
                if (iVar15 == 0) {
                  if (__this_03->m_Items[0x3a] != (Il2CppObject *)0x0) {
                    pIVar40 = __this_03->m_Items[6];
                    pIVar27 = __this_03->m_Items[0x3a]->klass;
                    pIVar36 = (Il2CppClass *)pIVar27->vtable[0x17].method;
                    vtableDispatch = pIVar27->vtable[0x17].methodPtr;
                    *(undefined8 *)((long)ppUVar31 + -0x40) = 0x43c4c51;
                    (*vtableDispatch)((int)pIVar40);
                    if (__this_03->m_Items[0x3b] != (Il2CppObject *)0x0) {
                      pIVar40 = __this_03->m_Items[6];
                      pIVar27 = __this_03->m_Items[0x3b]->klass;
                      pIVar36 = (Il2CppClass *)pIVar27->vtable[0x17].method;
                      vtableDispatch = pIVar27->vtable[0x17].methodPtr;
                      *(undefined8 *)((long)ppUVar31 + -0x40) = 0x43c4c80;
                      (*vtableDispatch)((int)pIVar40);
                      if (__this_03->m_Items[0x3e] != (Il2CppObject *)0x0) {
                        pIVar40 = __this_03->m_Items[6];
                        pIVar27 = __this_03->m_Items[0x3e]->klass;
                        pIVar36 = (Il2CppClass *)pIVar27->vtable[0x17].method;
                        vtableDispatch = pIVar27->vtable[0x17].methodPtr;
                        *(undefined8 *)((long)ppUVar31 + -0x40) = 0x43c4caf;
                        (*vtableDispatch)((int)pIVar40);
                        pIVar40 = __this_03->m_Items[0x3f];
                        if (pIVar40 != (Il2CppObject *)0x0) {
                          uVar42 = SUB84(__this_03->m_Items[6],0);
                          goto label_043c4eb3;
                        }
                      }
                    }
                  }
                }
                else if (__this_03->m_Items[0x38] != (Il2CppObject *)0x0) {
                  pIVar40 = __this_03->m_Items[0xc];
                  pIVar27 = __this_03->m_Items[0x38]->klass;
                  pIVar36 = (Il2CppClass *)pIVar27->vtable[0x17].method;
                  vtableDispatch = pIVar27->vtable[0x17].methodPtr;
                  *(undefined8 *)((long)ppUVar31 + -0x40) = 0x43c4e8e;
                  (*vtableDispatch)((int)pIVar40);
                  pIVar40 = __this_03->m_Items[0x39];
                  if (pIVar40 != (Il2CppObject *)0x0) {
                    uVar42 = SUB84(__this_03->m_Items[0xc],0);
label_043c4eb3:
                    pIVar36 = (Il2CppClass *)pIVar40->klass->vtable[0x17].method;
                    vtableDispatch = pIVar40->klass->vtable[0x17].methodPtr;
                    *(undefined8 *)((long)ppUVar31 + -0x40) = 0x43c4ec3;
                    (*vtableDispatch)(uVar42);
                    pUVar8 = (UnityEngine_Component_o *)__this_03->m_Items[0x3a];
                    if (pUVar8 != (UnityEngine_Component_o *)0x0) {
                      pIVar36 = (Il2CppClass *)0x0;
                      *(undefined8 *)((long)ppUVar31 + -0x40) = 0x43c4edb;
                      pUVar17 = UnityEngine_Component__get_gameObject(pUVar8,(MethodInfo *)0x0);
                      if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
                        pIVar36 = (Il2CppClass *)0x0;
                        *(undefined8 *)((long)ppUVar31 + -0x40) = 0x43c4eee;
                        bVar14 = UnityEngine_GameObject__get_activeSelf(pUVar17,(MethodInfo *)0x0);
                        if (((char)bVar14 == '\0') || (*(int *)(pSVar37->m_Items + 5) < 2)) {
label_043c4f56:
                          pUVar8 = (UnityEngine_Component_o *)__this_03->m_Items[0x3b];
                          if (pUVar8 != (UnityEngine_Component_o *)0x0) {
                            pIVar36 = (Il2CppClass *)0x0;
                            *(undefined8 *)((long)ppUVar31 + -0x40) = 0x43c4f6e;
                            pUVar17 = UnityEngine_Component__get_gameObject(pUVar8,(MethodInfo *)0x0);
                            if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
                              pIVar36 = (Il2CppClass *)0x0;
                              *(undefined8 *)((long)ppUVar31 + -0x40) = 0x43c4f81;
                              bVar14 = UnityEngine_GameObject__get_activeSelf(pUVar17,(MethodInfo *)0x0);
                              if (((char)bVar14 == '\0') || (*(int *)(pSVar37->m_Items + 5) < 1)) {
label_043c4fe9:
                                pUVar8 = (UnityEngine_Component_o *)__this_03->m_Items[0x3e];
                                if (pUVar8 != (UnityEngine_Component_o *)0x0) {
                                  pIVar36 = (Il2CppClass *)0x0;
                                  *(undefined8 *)((long)ppUVar31 + -0x40) = 0x43c5001;
                                  pUVar17 = UnityEngine_Component__get_gameObject(pUVar8,(MethodInfo *)0x0);
                                  if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
                                    pIVar36 = (Il2CppClass *)0x0;
                                    *(undefined8 *)((long)ppUVar31 + -0x40) = 0x43c5014;
                                    bVar14 = UnityEngine_GameObject__get_activeSelf(pUVar17,(MethodInfo *)0x0)
                                    ;
                                    if (((char)bVar14 == '\0') ||
                                       (0.0 < *(float *)(__this_03->m_Items + 0x21))) {
label_043c5083:
                                      pUVar8 = (UnityEngine_Component_o *)__this_03->m_Items[0x3f];
                                      if (pUVar8 != (UnityEngine_Component_o *)0x0) {
                                        pIVar36 = (Il2CppClass *)0x0;
                                        *(undefined8 *)((long)ppUVar31 + -0x40) = 0x43c509b;
                                        pUVar17 = UnityEngine_Component__get_gameObject
                                                            (pUVar8,(MethodInfo *)0x0);
                                        if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
                                          pIVar36 = (Il2CppClass *)0x0;
                                          *(undefined8 *)((long)ppUVar31 + -0x40) = 0x43c50ae;
                                          bVar14 = UnityEngine_GameObject__get_activeSelf
                                                             (pUVar17,(MethodInfo *)0x0);
                                          if (((char)bVar14 == '\0') ||
                                             (0.0 < *(float *)(__this_03->m_Items + 0x21))) {
label_043c511d:
                                            pUVar8 = (UnityEngine_Component_o *)__this_03->m_Items[0x3c];
                                            if (pUVar8 != (UnityEngine_Component_o *)0x0) {
                                              pIVar36 = (Il2CppClass *)0x0;
                                              *(undefined8 *)((long)ppUVar31 + -0x40) = 0x43c5135;
                                              pUVar17 = UnityEngine_Component__get_gameObject
                                                                  (pUVar8,(MethodInfo *)0x0);
                                              if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
                                                pIVar36 = (Il2CppClass *)0x0;
                                                *(undefined8 *)((long)ppUVar31 + -0x40) = 0x43c5148;
                                                bVar14 = UnityEngine_GameObject__get_activeSelf
                                                                   (pUVar17,(MethodInfo *)0x0);
                                                if ((char)bVar14 == '\0') {
                                                  pUVar8 = (UnityEngine_Component_o *)__this_03->m_Items[0x3d]
                                                  ;
                                                  if (pUVar8 != (UnityEngine_Component_o *)0x0) {
                                                    pIVar36 = (Il2CppClass *)0x0;
                                                    *(undefined8 *)((long)ppUVar31 + -0x40) = 0x43c5164;
                                                    pUVar17 = UnityEngine_Component__get_gameObject
                                                                        (pUVar8,(MethodInfo *)0x0);
                                                    if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
                                                      pIVar36 = (Il2CppClass *)0x0;
                                                      *(undefined8 *)((long)ppUVar31 + -0x40) = 0x43c5177;
                                                      bVar14 = UnityEngine_GameObject__get_activeSelf
                                                                         (pUVar17,(MethodInfo *)0x0);
                                                      if ((char)bVar14 == '\0') {
                                                        return;
                                                      }
                                                      goto label_043c517b;
                                                    }
                                                  }
                                                }
                                                else {
label_043c517b:
                                                  if (0.0 < *(float *)((long)__this_03->m_Items + 0x104)) {
                                                    return;
                                                  }
                                                  pUVar8 = (UnityEngine_Component_o *)__this_03->m_Items[0x3c]
                                                  ;
                                                  if (pUVar8 != (UnityEngine_Component_o *)0x0) {
                                                    pIVar36 = (Il2CppClass *)0x0;
                                                    *(undefined8 *)((long)ppUVar31 + -0x40) = 0x43c51b0;
                                                    pUVar17 = UnityEngine_Component__get_gameObject
                                                                        (pUVar8,(MethodInfo *)0x0);
                                                    if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
                                                      pIVar36 = (Il2CppClass *)0x0;
                                                      *(undefined8 *)((long)ppUVar31 + -0x40) = 0x43c51c5;
                                                      UnityEngine_GameObject__SetActive
                                                                (pUVar17,0,(MethodInfo *)0x0);
                                                      pUVar8 = (UnityEngine_Component_o *)
                                                               __this_03->m_Items[0x3d];
                                                      if (pUVar8 != (UnityEngine_Component_o *)0x0) {
                                                        pIVar36 = (Il2CppClass *)0x0;
                                                        *(undefined8 *)((long)ppUVar31 + -0x40) = 0x43c51dd;
                                                        pUVar17 = UnityEngine_Component__get_gameObject
                                                                            (pUVar8,(MethodInfo *)0x0);
                                                        if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
                                                          pIVar36 = (Il2CppClass *)0x0;
                                                          *(undefined8 *)((long)ppUVar31 + -0x40) = 0x43c51f2;
                                                          UnityEngine_GameObject__SetActive
                                                                    (pUVar17,0,(MethodInfo *)0x0);
                                                          pUVar8 = (UnityEngine_Component_o *)
                                                                   __this_03->m_Items[0x39];
                                                          if (pUVar8 != (UnityEngine_Component_o *)0x0) {
                                                            pIVar36 = (Il2CppClass *)0x0;
                                                            *(undefined8 *)((long)ppUVar31 + -0x40) =
                                                                 0x43c520a;
                                                            pUVar17 = UnityEngine_Component__get_gameObject
                                                                                (pUVar8,(MethodInfo *)0x0);
                                                            if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
                                                              bVar10 = 0 < *(int *)(pSVar37->m_Items + 5);
                                                              pIVar36 = (Il2CppClass *)(ulong)bVar10;
                                                              *(undefined8 *)((long)ppUVar31 + -0x40) =
                                                                   0x43c5228;
                                                              UnityEngine_GameObject__SetActive
                                                                        (pUVar17,(uint)bVar10,
                                                                         (MethodInfo *)0x0);
                                                              pUVar8 = (UnityEngine_Component_o *)
                                                                       __this_03->m_Items[0x38];
                                                              if (pUVar8 != (UnityEngine_Component_o *)0x0) {
                                                                pIVar36 = (Il2CppClass *)0x0;
                                                                *(undefined8 *)((long)ppUVar31 + -0x40) =
                                                                     0x43c5240;
                                                                pUVar17 = 
                                                       UnityEngine_Component__get_gameObject
                                                                 (pUVar8,(MethodInfo *)0x0);
                                                       if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
                                                         bVar10 = 1 < *(int *)(pSVar37->m_Items + 5);
                                                         pIVar36 = (Il2CppClass *)(ulong)bVar10;
                                                         *(undefined8 *)((long)ppUVar31 + -0x40) = 0x43c525a;
                                                         UnityEngine_GameObject__SetActive
                                                                   (pUVar17,(uint)bVar10,(MethodInfo *)0x0);
                                                         pUVar8 = (UnityEngine_Component_o *)
                                                                  __this_03->m_Items[0x3b];
                                                         if (pUVar8 != (UnityEngine_Component_o *)0x0) {
                                                           pIVar36 = (Il2CppClass *)0x0;
                                                           *(undefined8 *)((long)ppUVar31 + -0x40) = 0x43c526e
                                                           ;
                                                           pUVar17 = UnityEngine_Component__get_gameObject
                                                                               (pUVar8,(MethodInfo *)0x0);
                                                           if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
                                                             bVar10 = *(int *)(pSVar37->m_Items + 5) < 1;
                                                             pIVar36 = (Il2CppClass *)(ulong)bVar10;
                                                             *(undefined8 *)((long)ppUVar31 + -0x40) =
                                                                  0x43c5288;
                                                             UnityEngine_GameObject__SetActive
                                                                       (pUVar17,(uint)bVar10,(MethodInfo *)0x0
                                                                       );
                                                             pUVar8 = (UnityEngine_Component_o *)
                                                                      __this_03->m_Items[0x3a];
                                                             if (pUVar8 != (UnityEngine_Component_o *)0x0) {
                                                               pIVar36 = (Il2CppClass *)0x0;
                                                               *(undefined8 *)((long)ppUVar31 + -0x40) =
                                                                    0x43c529c;
                                                               pUVar17 = UnityEngine_Component__get_gameObject
                                                                                   (pUVar8,(MethodInfo *)0x0);
                                                               if (pUVar17 != (UnityEngine_GameObject_o *)0x0)
                                                               {
                                                                 UnityEngine_GameObject__SetActive
                                                                           (pUVar17,(uint)(*(int *)(pSVar37->
                                                       m_Items + 5) < 2),(MethodInfo *)0x0);
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
                                                  }
                                                }
                                              }
                                            }
                                          }
                                          else {
                                            pUVar8 = (UnityEngine_Component_o *)__this_03->m_Items[0x3f];
                                            if (pUVar8 != (UnityEngine_Component_o *)0x0) {
                                              pIVar36 = (Il2CppClass *)0x0;
                                              *(undefined8 *)((long)ppUVar31 + -0x40) = 0x43c50d8;
                                              pUVar17 = UnityEngine_Component__get_gameObject
                                                                  (pUVar8,(MethodInfo *)0x0);
                                              if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
                                                pIVar36 = (Il2CppClass *)0x0;
                                                *(undefined8 *)((long)ppUVar31 + -0x40) = 0x43c50ed;
                                                UnityEngine_GameObject__SetActive(pUVar17,0,(MethodInfo *)0x0)
                                                ;
                                                pUVar8 = (UnityEngine_Component_o *)__this_03->m_Items[0x3b];
                                                if (pUVar8 != (UnityEngine_Component_o *)0x0) {
                                                  pIVar36 = (Il2CppClass *)0x0;
                                                  *(undefined8 *)((long)ppUVar31 + -0x40) = 0x43c5105;
                                                  pUVar17 = UnityEngine_Component__get_gameObject
                                                                      (pUVar8,(MethodInfo *)0x0);
                                                  if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
                                                    pIVar36 = (Il2CppClass *)0x1;
                                                    *(undefined8 *)((long)ppUVar31 + -0x40) = 0x43c511d;
                                                    UnityEngine_GameObject__SetActive
                                                              (pUVar17,1,(MethodInfo *)0x0);
                                                    goto label_043c511d;
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                    else {
                                      pUVar8 = (UnityEngine_Component_o *)__this_03->m_Items[0x3e];
                                      if (pUVar8 != (UnityEngine_Component_o *)0x0) {
                                        pIVar36 = (Il2CppClass *)0x0;
                                        *(undefined8 *)((long)ppUVar31 + -0x40) = 0x43c503e;
                                        pUVar17 = UnityEngine_Component__get_gameObject
                                                            (pUVar8,(MethodInfo *)0x0);
                                        if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
                                          pIVar36 = (Il2CppClass *)0x0;
                                          *(undefined8 *)((long)ppUVar31 + -0x40) = 0x43c5053;
                                          UnityEngine_GameObject__SetActive(pUVar17,0,(MethodInfo *)0x0);
                                          pUVar8 = (UnityEngine_Component_o *)__this_03->m_Items[0x3a];
                                          if (pUVar8 != (UnityEngine_Component_o *)0x0) {
                                            pIVar36 = (Il2CppClass *)0x0;
                                            *(undefined8 *)((long)ppUVar31 + -0x40) = 0x43c506b;
                                            pUVar17 = UnityEngine_Component__get_gameObject
                                                                (pUVar8,(MethodInfo *)0x0);
                                            if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
                                              pIVar36 = (Il2CppClass *)0x1;
                                              *(undefined8 *)((long)ppUVar31 + -0x40) = 0x43c5083;
                                              UnityEngine_GameObject__SetActive(pUVar17,1,(MethodInfo *)0x0);
                                              goto label_043c5083;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                              else {
                                pUVar8 = (UnityEngine_Component_o *)__this_03->m_Items[0x3b];
                                if (pUVar8 != (UnityEngine_Component_o *)0x0) {
                                  pIVar36 = (Il2CppClass *)0x0;
                                  *(undefined8 *)((long)ppUVar31 + -0x40) = 0x43c4fa4;
                                  pUVar17 = UnityEngine_Component__get_gameObject(pUVar8,(MethodInfo *)0x0);
                                  if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
                                    pIVar36 = (Il2CppClass *)0x0;
                                    *(undefined8 *)((long)ppUVar31 + -0x40) = 0x43c4fb9;
                                    UnityEngine_GameObject__SetActive(pUVar17,0,(MethodInfo *)0x0);
                                    pUVar8 = (UnityEngine_Component_o *)__this_03->m_Items[0x39];
                                    if (pUVar8 != (UnityEngine_Component_o *)0x0) {
                                      pIVar36 = (Il2CppClass *)0x0;
                                      *(undefined8 *)((long)ppUVar31 + -0x40) = 0x43c4fd1;
                                      pUVar17 = UnityEngine_Component__get_gameObject
                                                          (pUVar8,(MethodInfo *)0x0);
                                      if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
                                        pIVar36 = (Il2CppClass *)0x1;
                                        *(undefined8 *)((long)ppUVar31 + -0x40) = 0x43c4fe9;
                                        UnityEngine_GameObject__SetActive(pUVar17,1,(MethodInfo *)0x0);
                                        goto label_043c4fe9;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                        else {
                          pUVar8 = (UnityEngine_Component_o *)__this_03->m_Items[0x3a];
                          if (pUVar8 != (UnityEngine_Component_o *)0x0) {
                            pIVar36 = (Il2CppClass *)0x0;
                            *(undefined8 *)((long)ppUVar31 + -0x40) = 0x43c4f11;
                            pUVar17 = UnityEngine_Component__get_gameObject(pUVar8,(MethodInfo *)0x0);
                            if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
                              pIVar36 = (Il2CppClass *)0x0;
                              *(undefined8 *)((long)ppUVar31 + -0x40) = 0x43c4f26;
                              UnityEngine_GameObject__SetActive(pUVar17,0,(MethodInfo *)0x0);
                              pUVar8 = (UnityEngine_Component_o *)__this_03->m_Items[0x38];
                              if (pUVar8 != (UnityEngine_Component_o *)0x0) {
                                pIVar36 = (Il2CppClass *)0x0;
                                *(undefined8 *)((long)ppUVar31 + -0x40) = 0x43c4f3e;
                                pUVar17 = UnityEngine_Component__get_gameObject(pUVar8,(MethodInfo *)0x0);
                                if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
                                  pIVar36 = (Il2CppClass *)0x1;
                                  *(undefined8 *)((long)ppUVar31 + -0x40) = 0x43c4f56;
                                  UnityEngine_GameObject__SetActive(pUVar17,1,(MethodInfo *)0x0);
                                  goto label_043c4f56;
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
          }
        }
        goto label_043c52c4;
      }
    }
    *(undefined8 *)((long)ppUVar31 + -0x40) = 0x43c52d1;
    pSVar37 = pSVar38;
    il2cpp_runtime_helper_022b2fd0();
    *(long **)((long)ppUVar31 + -0x40) = __this_04;
    *(System_Object_array **)((long)ppUVar31 + -0x48) = pSVar38;
    *(Il2CppClass **)((long)ppUVar31 + -0x50) = unaff_R13;
    *(System_Object_array **)((long)ppUVar31 + -0x58) = __this_03;
    *(System_Object_array **)((long)ppUVar31 + -0x60) = __this_02;
    ppUVar32 = (UnityEngine_Object_o **)((long)ppUVar31 + -0x70);
    if (g_data_057ae3e4 == '\0') {
      *(undefined8 *)((long)ppUVar31 + -0x78) = 0x43c5305;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Animator_GetComponent_Animator);
      *(undefined8 *)((long)ppUVar31 + -0x78) = 0x43c5311;
      il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
      *(undefined8 *)((long)ppUVar31 + -0x78) = 0x43c531d;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ThunderspearWeapon);
      *(undefined8 *)((long)ppUVar31 + -0x78) = 0x43c5329;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
      g_data_057ae3e4 = '\x01';
    }
    if (pSVar37->m_Items[0x1d] == (Il2CppObject *)0x0) {
label_043c5986:
      *(undefined8 *)((long)ppUVar31 + -0x78) = 0x43c598b;
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      __this_04 = (long *)pSVar37->m_Items[0x1d][0x10].klass;
      if ((System_Object_array *)__this_04 == (System_Object_array *)0x0) {
label_043c537e:
        lVar21 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
        if ((lVar21 != 0) &&
           (((lVar21 = *(long *)(lVar21 + 0x58), lVar21 != 0 &&
             (lVar21 = *(long *)(lVar21 + 0x48), lVar21 != 0)) &&
            ((System_Object_array *)__this_04 != (System_Object_array *)0x0)))) {
          if (*(char *)(lVar21 + 0x11) == '\0') {
            iVar15 = *(bool_conflict *)
                      ((long)((Il2CppType *)((System_Object_array *)__this_04)->m_Items + 2) + 4);
            fVar43 = (((UnityEngine_Vector4_o *)
                      ((long)((Il2CppType *)((System_Object_array *)__this_04)->m_Items + 2) + 8))->fields).x;
            if (iVar15 < 1) {
              if (fVar43 == -NAN) {
                fVar43 = 1.0;
                pUVar9 = (UnityEngine_UI_Image_o *)pSVar37->m_Items[0x31];
              }
              else {
                fVar43 = 0.0;
                pUVar9 = (UnityEngine_UI_Image_o *)pSVar37->m_Items[0x31];
              }
            }
            else {
              fVar43 = (float)(int)fVar43 / (float)iVar15;
              pUVar9 = (UnityEngine_UI_Image_o *)pSVar37->m_Items[0x31];
            }
            if (pUVar9 != (UnityEngine_UI_Image_o *)0x0) {
              __this_02 = (System_Object_array *)pSVar37->m_Items[0x30];
              pIVar36 = (Il2CppClass *)0x0;
              *(float *)((long)ppUVar31 + -100) = fVar43;
              *(undefined8 *)((long)ppUVar31 + -0x78) = 0x43c5631;
              UnityEngine_UI_Image__set_fillAmount(pUVar9,fVar43,(MethodInfo *)0x0);
              if (__this_02 != (System_Object_array *)0x0) {
                pIVar36 = (Il2CppClass *)0x0;
                *(undefined8 *)((long)ppUVar31 + -0x78) = 0x43c564a;
                UnityEngine_UI_Image__set_fillAmount
                          ((UnityEngine_UI_Image_o *)__this_02,*(float *)((long)ppUVar31 + -100),
                           (MethodInfo *)0x0);
                if (*(float *)((long)ppUVar31 + -100) <= 0.0) {
                  if (pSVar37->m_Items[0x40] != (Il2CppObject *)0x0) {
                    pIVar40 = pSVar37->m_Items[6];
                    pIVar27 = pSVar37->m_Items[0x40]->klass;
                    pIVar36 = (Il2CppClass *)pIVar27->vtable[0x17].method;
                    vtableDispatch = pIVar27->vtable[0x17].methodPtr;
                    *(undefined8 *)((long)ppUVar31 + -0x78) = 0x43c56ee;
                    (*vtableDispatch)((int)pIVar40);
                    pIVar40 = pSVar37->m_Items[0x42];
                    if (pIVar40 != (Il2CppObject *)0x0) {
                      uVar42 = SUB84(pSVar37->m_Items[6],0);
                      goto label_043c574d;
                    }
                  }
                }
                else {
                  pIVar40 = pSVar37->m_Items[0x40];
                  if (*(float *)((long)ppUVar31 + -100) <= 0.5) {
                    if (pIVar40 != (Il2CppObject *)0x0) {
                      pIVar3 = pSVar37->m_Items[2];
                      pIVar36 = (Il2CppClass *)pIVar40->klass->vtable[0x17].method;
                      vtableDispatch = pIVar40->klass->vtable[0x17].methodPtr;
                      *(undefined8 *)((long)ppUVar31 + -0x78) = 0x43c5731;
                      (*vtableDispatch)((int)pIVar3);
                      pIVar40 = pSVar37->m_Items[0x42];
                      if (pIVar40 != (Il2CppObject *)0x0) {
                        uVar42 = SUB84(pSVar37->m_Items[2],0);
                        goto label_043c574d;
                      }
                    }
                  }
                  else if (pIVar40 != (Il2CppObject *)0x0) {
                    pIVar3 = pSVar37->m_Items[0xc];
                    pIVar36 = (Il2CppClass *)pIVar40->klass->vtable[0x17].method;
                    vtableDispatch = pIVar40->klass->vtable[0x17].methodPtr;
                    *(undefined8 *)((long)ppUVar31 + -0x78) = 0x43c569b;
                    (*vtableDispatch)((int)pIVar3);
                    pIVar40 = pSVar37->m_Items[0x42];
                    if (pIVar40 != (Il2CppObject *)0x0) {
                      uVar42 = SUB84(pSVar37->m_Items[0xc],0);
label_043c574d:
                      vtableDispatch = pIVar40->klass->vtable[0x17].methodPtr;
                      *(undefined8 *)((long)ppUVar31 + -0x78) = 0x43c575d;
                      (*vtableDispatch)(uVar42);
                      pIVar40 = pSVar37->m_Items[0x32];
                      __this_02 = (System_Object_array *)pSVar37->m_Items[0x33];
                      __this_04 = (long *)((Il2CppType *)((System_Object_array *)__this_04)->m_Items + 2);
                      pIVar36 = (Il2CppClass *)0x0;
                      *(undefined8 *)((long)ppUVar31 + -0x78) = 0x43c5779;
                      pIVar27 = (Il2CppClass *)System_Int32__ToString((int32_t)__this_04,(MethodInfo *)0x0);
                      if (__this_02 != (System_Object_array *)0x0) {
                        pUVar7 = ((Il2CppClass_1 *)&__this_02->obj)->image;
                        pMVar35 = (pUVar7->vtable)._75_unknown.method;
                        vtableDispatch = (pUVar7->vtable)._75_unknown.methodPtr;
                        *(undefined8 *)((long)ppUVar31 + -0x78) = 0x43c579b;
                        pIVar36 = pIVar27;
                        (*vtableDispatch)(__this_02,pIVar27,pMVar35);
                        if (pIVar40 != (Il2CppObject *)0x0) {
                          pMVar35 = pIVar40->klass->vtable[0x4b].method;
                          vtableDispatch = pIVar40->klass->vtable[0x4b].methodPtr;
                          *(undefined8 *)((long)ppUVar31 + -0x78) = 0x43c57bb;
                          (*vtableDispatch)(pIVar40,pIVar27,pMVar35);
                          pIVar40 = pSVar37->m_Items[0x32];
                          pIVar36 = pIVar27;
                          if (*(int *)&((Il2CppClass_1 *)&((System_Object_array *)__this_04)->obj)->image == 0
                             ) {
                            if (pIVar40 != (Il2CppObject *)0x0) {
                              pIVar36 = (Il2CppClass *)pIVar40->klass->vtable[0x17].method;
                              vtableDispatch = pIVar40->klass->vtable[0x17].methodPtr;
                              *(undefined8 *)((long)ppUVar31 + -0x78) = 0x43c5894;
                              (*vtableDispatch)(0x3f800000);
                              if (pSVar37->m_Items[0x33] != (Il2CppObject *)0x0) {
                                pIVar27 = pSVar37->m_Items[0x33]->klass;
                                pIVar36 = (Il2CppClass *)pIVar27->vtable[0x17].method;
                                vtableDispatch = pIVar27->vtable[0x17].methodPtr;
                                *(undefined8 *)((long)ppUVar31 + -0x78) = 0x43c58c3;
                                (*vtableDispatch)(0x3f800000);
                                pUVar8 = (UnityEngine_Component_o *)pSVar37->m_Items[0x40];
                                goto joined_r0x043c58cd;
                              }
                            }
                          }
                          else if (pIVar40 != (Il2CppObject *)0x0) {
                            pIVar36 = (Il2CppClass *)pIVar40->klass->vtable[0x17].method;
                            vtableDispatch = pIVar40->klass->vtable[0x17].methodPtr;
                            *(undefined8 *)((long)ppUVar31 + -0x78) = 0x43c57ef;
                            (*vtableDispatch)();
                            if (pSVar37->m_Items[0x33] != (Il2CppObject *)0x0) {
                              pIVar27 = pSVar37->m_Items[0x33]->klass;
                              pIVar36 = (Il2CppClass *)pIVar27->vtable[0x17].method;
                              vtableDispatch = pIVar27->vtable[0x17].methodPtr;
                              *(undefined8 *)((long)ppUVar31 + -0x78) = 0x43c5819;
                              (*vtableDispatch)();
                              pUVar8 = (UnityEngine_Component_o *)pSVar37->m_Items[0x40];
joined_r0x043c58cd:
                              if (pUVar8 != (UnityEngine_Component_o *)0x0) {
                                pIVar36 = (Il2CppClass *)0x0;
                                *(undefined8 *)((long)ppUVar31 + -0x78) = 0x43c5830;
                                pUVar17 = UnityEngine_Component__get_gameObject(pUVar8,(MethodInfo *)0x0);
                                if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
                                  pIVar36 = (Il2CppClass *)0x0;
                                  *(undefined8 *)((long)ppUVar31 + -0x78) = 0x43c5843;
                                  bVar14 = UnityEngine_GameObject__get_activeSelf(pUVar17,(MethodInfo *)0x0);
                                  if ((char)bVar14 != '\0') {
                                    return;
                                  }
                                  if (0.0 < *(float *)((long)pSVar37->m_Items + 0x104)) {
                                    return;
                                  }
                                  if (0.0 < *(float *)(pSVar37->m_Items + 0x21)) {
                                    return;
                                  }
                                  pUVar8 = (UnityEngine_Component_o *)pSVar37->m_Items[0x40];
                                  if (pUVar8 != (UnityEngine_Component_o *)0x0) {
                                    pIVar36 = (Il2CppClass *)0x0;
                                    *(undefined8 *)((long)ppUVar31 + -0x78) = 0x43c58ef;
                                    pUVar17 = UnityEngine_Component__get_gameObject(pUVar8,(MethodInfo *)0x0);
                                    if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
                                      pIVar36 = (Il2CppClass *)0x1;
                                      *(undefined8 *)((long)ppUVar31 + -0x78) = 0x43c5907;
                                      UnityEngine_GameObject__SetActive(pUVar17,1,(MethodInfo *)0x0);
                                      pUVar8 = (UnityEngine_Component_o *)pSVar37->m_Items[0x41];
                                      if (pUVar8 != (UnityEngine_Component_o *)0x0) {
                                        pIVar36 = (Il2CppClass *)0x0;
                                        *(undefined8 *)((long)ppUVar31 + -0x78) = 0x43c591a;
                                        pUVar17 = UnityEngine_Component__get_gameObject
                                                            (pUVar8,(MethodInfo *)0x0);
                                        if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
                                          pIVar36 = (Il2CppClass *)0x0;
                                          *(undefined8 *)((long)ppUVar31 + -0x78) = 0x43c592b;
                                          UnityEngine_GameObject__SetActive(pUVar17,0,(MethodInfo *)0x0);
                                          pUVar8 = (UnityEngine_Component_o *)pSVar37->m_Items[0x42];
                                          if (pUVar8 != (UnityEngine_Component_o *)0x0) {
                                            pIVar36 = (Il2CppClass *)0x0;
                                            *(undefined8 *)((long)ppUVar31 + -0x78) = 0x43c593e;
                                            pUVar17 = UnityEngine_Component__get_gameObject
                                                                (pUVar8,(MethodInfo *)0x0);
                                            if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
                                              pIVar36 = (Il2CppClass *)0x0;
                                              *(undefined8 *)((long)ppUVar31 + -0x78) = 0x43c594f;
                                              UnityEngine_GameObject__SetActive(pUVar17,0,(MethodInfo *)0x0);
                                              pUVar8 = (UnityEngine_Component_o *)pSVar37->m_Items[0x30];
                                              if (pUVar8 != (UnityEngine_Component_o *)0x0) {
                                                pIVar36 = (Il2CppClass *)0x0;
                                                *(undefined8 *)((long)ppUVar31 + -0x78) = 0x43c5962;
                                                pUVar17 = UnityEngine_Component__get_gameObject
                                                                    (pUVar8,(MethodInfo *)0x0);
                                                if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
                                                  pIVar36 = (Il2CppClass *)0x1;
                                                  *(undefined8 *)((long)ppUVar31 + -0x78) = 0x43c5976;
                                                  UnityEngine_GameObject__SetActive
                                                            (pUVar17,1,(MethodInfo *)0x0);
                                                  pUVar8 = (UnityEngine_Component_o *)pSVar37->m_Items[0x31];
                                                  goto joined_r0x043c5980;
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
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            pIVar36 = (Il2CppClass *)0x0;
            *(undefined8 *)((long)ppUVar31 + -0x78) = 0x43c53d3;
            fVar43 = Characters_BaseUseable__GetCooldownRatio
                               ((Characters_BaseUseable_o *)__this_04,(MethodInfo *)0x0);
            *(float *)((long)ppUVar31 + -100) = fVar43;
            pUVar9 = (UnityEngine_UI_Image_o *)pSVar37->m_Items[0x46];
            if (pUVar9 != (UnityEngine_UI_Image_o *)0x0) {
              __this_02 = (System_Object_array *)pSVar37->m_Items[0x45];
              pIVar36 = (Il2CppClass *)0x0;
              *(undefined8 *)((long)ppUVar31 + -0x78) = 0x43c53fd;
              UnityEngine_UI_Image__set_fillAmount(pUVar9,*(float *)((long)ppUVar31 + -100),(MethodInfo *)0x0)
              ;
              if (__this_02 != (System_Object_array *)0x0) {
                pIVar36 = (Il2CppClass *)0x0;
                *(undefined8 *)((long)ppUVar31 + -0x78) = 0x43c5416;
                UnityEngine_UI_Image__set_fillAmount
                          ((UnityEngine_UI_Image_o *)__this_02,*(float *)((long)ppUVar31 + -100),
                           (MethodInfo *)0x0);
                if (((bool)*(char *)(pSVar37->m_Items + 0x47) ==
                     (*(float *)((long)ppUVar31 + -100) <= 1.0 && *(float *)((long)ppUVar31 + -100) != 1.0))
                   || (bVar10 = *(float *)((long)ppUVar31 + -100) != 1.0,
                      bVar11 = *(float *)((long)ppUVar31 + -100) <= 1.0,
                      *(bool *)(pSVar37->m_Items + 0x47) = bVar11 && bVar10, bVar11 && bVar10)) {
label_043c5518:
                  pUVar8 = (UnityEngine_Component_o *)pSVar37->m_Items[0x43];
                  if (pUVar8 != (UnityEngine_Component_o *)0x0) {
                    pIVar36 = (Il2CppClass *)0x0;
                    *(undefined8 *)((long)ppUVar31 + -0x78) = 0x43c552f;
                    pUVar17 = UnityEngine_Component__get_gameObject(pUVar8,(MethodInfo *)0x0);
                    if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
                      pIVar36 = (Il2CppClass *)0x0;
                      *(undefined8 *)((long)ppUVar31 + -0x78) = 0x43c5542;
                      bVar14 = UnityEngine_GameObject__get_activeSelf(pUVar17,(MethodInfo *)0x0);
                      if (((char)bVar14 != '\0') || (0.0 < *(float *)((long)pSVar37->m_Items + 0x104))) {
                        return;
                      }
                      pUVar8 = (UnityEngine_Component_o *)pSVar37->m_Items[0x44];
                      if (pUVar8 != (UnityEngine_Component_o *)0x0) {
                        pIVar36 = (Il2CppClass *)0x0;
                        *(undefined8 *)((long)ppUVar31 + -0x78) = 0x43c5572;
                        pUVar17 = UnityEngine_Component__get_gameObject(pUVar8,(MethodInfo *)0x0);
                        if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
                          pIVar36 = (Il2CppClass *)0x0;
                          *(undefined8 *)((long)ppUVar31 + -0x78) = 0x43c5587;
                          UnityEngine_GameObject__SetActive(pUVar17,0,(MethodInfo *)0x0);
                          pUVar8 = (UnityEngine_Component_o *)pSVar37->m_Items[0x43];
joined_r0x043c5980:
                          if (pUVar8 != (UnityEngine_Component_o *)0x0) {
                            pIVar36 = (Il2CppClass *)0x0;
                            *(undefined8 *)((long)ppUVar31 + -0x78) = 0x43c559e;
                            pUVar17 = UnityEngine_Component__get_gameObject(pUVar8,(MethodInfo *)0x0);
                            if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
                              UnityEngine_GameObject__SetActive(pUVar17,1,(MethodInfo *)0x0);
                              return;
                            }
                          }
                        }
                      }
                    }
                  }
                }
                else {
                  pUVar8 = (UnityEngine_Component_o *)pSVar37->m_Items[0x44];
                  if (pUVar8 != (UnityEngine_Component_o *)0x0) {
                    pIVar36 = (Il2CppClass *)0x0;
                    *(undefined8 *)((long)ppUVar31 + -0x78) = 0x43c5462;
                    pUVar17 = UnityEngine_Component__get_gameObject(pUVar8,(MethodInfo *)0x0);
                    if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
                      pIVar36 = (Il2CppClass *)0x0;
                      *(undefined8 *)((long)ppUVar31 + -0x78) = 0x43c5475;
                      bVar14 = UnityEngine_GameObject__get_activeSelf(pUVar17,(MethodInfo *)0x0);
                      if ((char)bVar14 != '\0') goto label_043c5518;
                      pUVar8 = (UnityEngine_Component_o *)pSVar37->m_Items[0x43];
                      if (pUVar8 != (UnityEngine_Component_o *)0x0) {
                        pIVar36 = (Il2CppClass *)0x0;
                        *(undefined8 *)((long)ppUVar31 + -0x78) = 0x43c5494;
                        pUVar17 = UnityEngine_Component__get_gameObject(pUVar8,(MethodInfo *)0x0);
                        if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
                          pIVar36 = (Il2CppClass *)0x0;
                          *(undefined8 *)((long)ppUVar31 + -0x78) = 0x43c54a9;
                          UnityEngine_GameObject__SetActive(pUVar17,0,(MethodInfo *)0x0);
                          pUVar8 = (UnityEngine_Component_o *)pSVar37->m_Items[0x44];
                          if (pUVar8 != (UnityEngine_Component_o *)0x0) {
                            pIVar36 = (Il2CppClass *)0x0;
                            *(undefined8 *)((long)ppUVar31 + -0x78) = 0x43c54c0;
                            pUVar17 = UnityEngine_Component__get_gameObject(pUVar8,(MethodInfo *)0x0);
                            if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
                              pIVar36 = (Il2CppClass *)0x1;
                              *(undefined8 *)((long)ppUVar31 + -0x78) = 0x43c54d8;
                              UnityEngine_GameObject__SetActive(pUVar17,1,(MethodInfo *)0x0);
                              pUVar8 = (UnityEngine_Component_o *)pSVar37->m_Items[0x44];
                              if (pUVar8 != (UnityEngine_Component_o *)0x0) {
                                *(undefined8 *)((long)ppUVar31 + -0x78) = 0x43c54f7;
                                pIVar36 = MethodInfo_Animator_GetComponent_Animator;
                                pUVar18 = (UnityEngine_Animator_o *)
                                          UnityEngine_Component__GetComponent_object_
                                                    (pUVar8,(MethodInfo_24E7B40 *)MethodInfo_Animator_GetComponent_Animator);
                                if (pUVar18 != (UnityEngine_Animator_o *)0x0) {
                                  pIVar36 = (Il2CppClass *)0x0;
                                  *(undefined8 *)((long)ppUVar31 + -0x78) = 0x43c550d;
                                  UnityEngine_Animator__Update(pUVar18,0.0,(MethodInfo *)0x0);
                                  *(undefined4 *)((long)pSVar37->m_Items + 0x104) = 0x3f000000;
                                  goto label_043c5518;
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
          }
        }
        goto label_043c5986;
      }
      pUVar7 = ((Il2CppClass_1 *)&((System_Object_array *)__this_04)->obj)->image;
      bVar4 = (TypeInfo_ThunderspearWeapon->_2).naturalAligment;
      pIVar36 = TypeInfo_ThunderspearWeapon;
      if ((bVar4 <= (pUVar7->_2).naturalAligment) &&
         ((pUVar7->_2).typeHierarchy[(ulong)bVar4 - 1] == TypeInfo_ThunderspearWeapon)) goto label_043c537e;
    }
    *(undefined8 *)((long)ppUVar31 + -0x78) = 0x43c5993;
    __this_03 = (System_Object_array *)__this_04;
    il2cpp_runtime_helper_022b2fd0();
  }
  *(System_Object_array **)((long)ppUVar32 + -8) = __this_02;
  lVar21 = *(long *)((long)((Il2CppType *)__this_03->m_Items + 0xf) + 8);
  pSVar38 = __this_03;
  if ((lVar21 != 0) &&
     (pSVar38 = ((Il2CppType *)__this_03->m_Items)[0x24].data, __this_02 = __this_03,
     pSVar38 != (System_Object_array *)0x0)) {
    fVar41 = *(float *)(lVar21 + 0x140) / *(float *)(lVar21 + 0x134);
    fVar43 = 1.0;
    if (fVar41 <= 1.0) {
      fVar43 = fVar41;
    }
    pUVar7 = ((Il2CppClass_1 *)&pSVar38->obj)->image;
    pIVar36 = (Il2CppClass *)(pUVar7->vtable)._47_CrossFadeColor.method;
    vtableDispatch = (pUVar7->vtable)._47_CrossFadeColor.methodPtr;
    *(undefined8 *)((long)ppUVar32 + -0x10) = 0x43c59fb;
    (*vtableDispatch)(-(uint)(0.0 <= fVar41) & (uint)fVar43);
    if (*(long *)((long)((Il2CppType *)__this_03->m_Items + 0xf) + 8) != 0) {
      pSVar38 = *(System_Object_array **)((long)((Il2CppType *)__this_03->m_Items + 0x24) + 8);
      if (*(float *)(*(long *)((long)((Il2CppType *)__this_03->m_Items + 0xf) + 8) + 0x140) <= 1.0) {
        if (pSVar38 != (System_Object_array *)0x0) {
          uVar42 = SUB84(((Il2CppType *)__this_03->m_Items)[9].data,0);
          pUVar44 = *(UnityEngine_UI_RectMask2D_o **)((long)((Il2CppType *)__this_03->m_Items + 9) + 8);
          goto label_043c5a4b;
        }
      }
      else if (pSVar38 != (System_Object_array *)0x0) {
        uVar42 = SUB84(((Il2CppType *)__this_03->m_Items)[8].data,0);
        pUVar44 = *(UnityEngine_UI_RectMask2D_o **)((long)((Il2CppType *)__this_03->m_Items + 8) + 8);
label_043c5a4b:
        pUVar7 = ((Il2CppClass_1 *)&pSVar38->obj)->image;
        vtableDispatch = (pUVar7->vtable)._23_set_color.methodPtr;
        (*vtableDispatch)
                  (uVar42,pUVar44,pSVar38,(pUVar7->vtable)._23_set_color.method,extraout_RDX,
                   vtableDispatch);
        return;
      }
    }
  }
  *(undefined8 *)((long)ppUVar32 + -0x10) = 0x43c5a64;
  il2cpp_runtime_helper_022b2c90();
  *(long **)((long)ppUVar32 + -0x10) = __this_04;
  *(System_Object_array **)((long)ppUVar32 + -0x18) = pSVar37;
  *(System_Object_array **)((long)ppUVar32 + -0x20) = __this_02;
  if (g_data_057ae3de == '\0') {
    *(undefined8 *)((long)ppUVar32 + -0x28) = 0x43c5a90;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Animator_GetComponent_Animator);
    *(undefined8 *)((long)ppUVar32 + -0x28) = 0x43c5a9c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    *(undefined8 *)((long)ppUVar32 + -0x28) = 0x43c5aa8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    *(undefined8 *)((long)ppUVar32 + -0x28) = 0x43c5ab4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Animator_get_Item);
    *(undefined8 *)((long)ppUVar32 + -0x28) = 0x43c5ac0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    g_data_057ae3de = '\x01';
  }
  pUVar17 = ((Il2CppType *)pSVar38->m_Items)[10].data;
  if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
    *(undefined8 *)((long)ppUVar32 + -0x28) = 0x43c5ae6;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)ppUVar32 + -0x28) = 0x43c5af0;
  bVar14 = MiscExtensions__GetActive(pUVar17,(MethodInfo *)0x0);
  if ((char)bVar14 != '\0') {
    __this_05 = ((Il2CppType *)pSVar38->m_Items)[0x25].data;
    if (__this_05 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_043c5bc3;
    *(undefined8 *)((long)ppUVar32 + -0x28) = 0x43c5b1a;
    bVar14 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                       (__this_05,(Il2CppObject *)pIVar36,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar14 == '\0') {
      if (pIVar36 == (Il2CppClass *)0x0) goto label_043c5bc3;
      *(undefined8 *)((long)ppUVar32 + -0x28) = 0x43c5b61;
      pUVar18 = (UnityEngine_Animator_o *)
                UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pIVar36,(MethodInfo_24E7B40 *)MethodInfo_Animator_GetComponent_Animator);
      __this_05 = ((Il2CppType *)pSVar38->m_Items)[0x25].data;
      if (__this_05 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_043c5bc3;
      *(undefined8 *)((long)ppUVar32 + -0x28) = 0x43c5b85;
      System_Collections_Generic_Dictionary_object__object___Add
                (__this_05,(Il2CppObject *)pIVar36,(Il2CppObject *)pUVar18,MethodInfo_Void_Add);
      pUVar17 = (UnityEngine_GameObject_o *)0x0;
      if (pUVar18 == (UnityEngine_Animator_o *)0x0) goto label_043c5bc3;
    }
    else {
      __this_05 = ((Il2CppType *)pSVar38->m_Items)[0x25].data;
      if (__this_05 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_043c5bc3:
        *(undefined8 *)((long)ppUVar32 + -0x28) = 0x43c5bc8;
        uVar28 = il2cpp_runtime_helper_022b2c90();
        *(Il2CppClass **)((long)ppUVar32 + -0x28) = pIVar36;
        *(UnityEngine_GameObject_o **)((long)ppUVar32 + -0x30) = pUVar17;
        *(undefined8 *)((long)ppUVar32 + -0x38) = uVar28;
        if (g_data_057ae3e5 == '\0') {
          *(undefined8 *)((long)ppUVar32 + -0x40) = 0x43c5bec;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_UnityEngine_UI_Image_UnityEngine_Animator);
          *(undefined8 *)((long)ppUVar32 + -0x40) = 0x43c5bf8;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_Image_Animator);
          *(undefined8 *)((long)ppUVar32 + -0x40) = 0x43c5c04;
          il2cpp_runtime_helper_023445d0(&"");
          g_data_057ae3e5 = '\x01';
        }
        (__this_05->fields)._count = 0x3f800000;
        (__this_05->fields)._freeList = 0x3f000000;
        (__this_05->fields)._freeCount = 0;
        (__this_05->fields)._version = 0x3f000000;
        (__this_05->fields)._comparer =
             (System_Collections_Generic_IEqualityComparer_TKey__o *)0x3f4000003f800000;
        (__this_05->fields)._keys =
             (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x3f8000003f000000;
        (__this_05->fields)._values =
             (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x3f800000;
        (__this_05->fields)._syncRoot = (Il2CppObject *)0x3f00000000000000;
        __this_05[1].klass = (System_Collections_Generic_Dictionary_object__object__c *)0x3f0000003f800000;
        __this_05[1].monitor = (void *)0x3f8000003f000000;
        __this_05[1].fields._buckets = (System_Int32_array *)0x3f8000003f800000;
        __this_05[1].fields._entries =
             (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x3f0000003f800000;
        __this_05[1].fields._count = 0x3f800000;
        __this_05[1].fields._freeList = 0x3f800000;
        __this_05[1].fields._freeCount = 0x3f800000;
        __this_05[1].fields._version = 0x3f400000;
        *(undefined4 *)&__this_05[1].fields._comparer = 0x3f800000;
        *(undefined4 *)((long)&__this_05[1].fields._comparer + 4) = 0x3f800000;
        *(undefined4 *)&__this_05[1].fields._keys = 0x3f800000;
        *(undefined4 *)((long)&__this_05[1].fields._keys + 4) = 0x3f800000;
        __this_05[1].fields._values =
             (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x3e8000003f800000;
        __this_05[1].fields._syncRoot = (Il2CppObject *)0x3f8000003e800000;
        __this_05[2].klass = (System_Collections_Generic_Dictionary_object__object__c *)0x3f451eb83f451eb8;
        __this_05[2].monitor = (void *)0x3f8000003f451eb8;
        *(undefined4 *)&__this_05[2].fields._buckets = 0x3f451eb8;
        *(undefined4 *)((long)&__this_05[2].fields._buckets + 4) = 0x3f000000;
        *(undefined4 *)&__this_05[2].fields._entries = 0x3f000000;
        *(undefined4 *)((long)&__this_05[2].fields._entries + 4) = 0x3f800000;
        __this_05[3].monitor = "";
        *(undefined8 *)((long)ppUVar32 + -0x40) = 0x43c5ca5;
        il2cpp_runtime_helper_022b4080(&__this_05[3].monitor);
        __this_05[3].fields._buckets = "";
        *(undefined8 *)((long)ppUVar32 + -0x40) = 0x43c5cbb;
        il2cpp_runtime_helper_022b4080(&__this_05[3].fields);
        *(undefined8 *)((long)ppUVar32 + -0x40) = 0x43c5cca;
        __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                    il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_Image_Animator);
        *(undefined8 *)((long)ppUVar32 + -0x40) = 0x43c5cdf;
        System_Collections_Generic_Dictionary_object__object____ctor(__this_01,MethodInfo_Dictionary_2_UnityEngine_UI_Image_UnityEngine_Animator);
        __this_05[7].fields._values =
             (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)__this_01;
        *(undefined8 *)((long)ppUVar32 + -0x40) = 0x43c5cf5;
        il2cpp_runtime_helper_022b4080(&__this_05[7].fields._values);
        UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_05,(MethodInfo *)0x0);
        return;
      }
      *(undefined8 *)((long)ppUVar32 + -0x28) = 0x43c5b40;
      pUVar18 = (UnityEngine_Animator_o *)
                System_Collections_Generic_Dictionary_object__object___get_Item
                          (__this_05,(Il2CppObject *)pIVar36,MethodInfo_Animator_get_Item);
      if (pUVar18 == (UnityEngine_Animator_o *)0x0) {
        pUVar17 = (UnityEngine_GameObject_o *)0x0;
        goto label_043c5bc3;
      }
    }
    *(undefined8 *)((long)ppUVar32 + -0x28) = 0x43c5b94;
    fVar43 = UnityEngine_Animator__get_speed(pUVar18,(MethodInfo *)0x0);
    if ((fVar43 != 0.0) || (NAN(fVar43))) {
      *(undefined8 *)((long)ppUVar32 + -0x28) = 0x43c5bab;
      UnityEngine_Animator__Update(pUVar18,0.0,(MethodInfo *)0x0);
      UnityEngine_Animator__set_speed(pUVar18,0.0,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


