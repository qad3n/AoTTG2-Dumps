// Type: Characters.HumanSetupTextures
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/HumanSetupTextures.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Setup/HumanSetupTextures.cs
// --------------------------------

// Characters.HumanSetupTextures$$.ctor
// il2cpp: void Characters_HumanSetupTextures___ctor (Characters_HumanSetupTextures_o* __this, Characters_HumanSetup_o* setup, const MethodInfo* method);
// 0x42e7c90

void Characters_HumanSetupTextures___ctor
               (Characters_HumanSetupTextures_o *__this,Characters_HumanSetup_o *setup,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._setup = setup;
  il2cpp_runtime_helper_022b4080(&__this->fields,setup);
  return;
}


// Characters.HumanSetupTextures$$Get3dmgTexture
// il2cpp: System_String_o* Characters_HumanSetupTextures__Get3dmgTexture (Characters_HumanSetupTextures_o* __this, const MethodInfo* method);
// 0x42ee0a0

System_String_o *
Characters_HumanSetupTextures__Get3dmgTexture(Characters_HumanSetupTextures_o *__this,MethodInfo *method)

{
  uint uVar1;
  Characters_HumanSetup_o *pCVar2;
  char *pcVar3;
  Il2CppMethodPointer pIVar4;
  UnityEngine_Object_o *x;
  Utility_Color255_c *reference;
  void *pvVar5;
  code *vtableDispatch;
  System_String_Fields SVar6;
  char cVar7;
  bool_conflict bVar8;
  int32_t iVar9;
  int32_t type;
  undefined8 *puVar10;
  System_String_c *pSVar11;
  System_String_o *pSVar12;
  UnityEngine_Transform_o *pUVar13;
  UnityEngine_Transform_o *p;
  UnityEngine_Transform_o *__this_00;
  System_String_o *extraout_RAX;
  System_String_o *extraout_RAX_00;
  undefined8 *puVar14;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  long lVar15;
  System_Object_array *pSVar16;
  Utility_Color255_o *x_00;
  Utility_Color255_o *x_01;
  Utility_Color255_o *pUVar17;
  Utility_Color255_o *pUVar18;
  UnityEngine_Texture_o *value;
  undefined4 extraout_var_01;
  System_String_o *pSVar19;
  UnityEngine_Material_o *pUVar20;
  UnityEngine_GameObject_o *pUVar21;
  ulong uVar22;
  undefined **ppuVar23;
  System_String_c *x_02;
  Photon_Realtime_Player_o *player;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  System_String_o *extraout_RAX_01;
  undefined4 uVar24;
  int iVar25;
  System_String_c **in_RCX;
  int32_t type_00;
  System_String_c *__this_01;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar26;
  ulong uVar27;
  System_String_c *pSVar28;
  long *plVar29;
  System_String_o **ppSVar30;
  System_String_c *pSVar31;
  Utility_Color255_o *x_03;
  System_String_c **ppSVar32;
  System_String_c **str1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar33;
  MethodInfo *in_R8;
  long *plVar34;
  long *unaff_R13;
  System_String_o *unaff_R14;
  float fVar35;
  float fVar37;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar36 [16];
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  float fVar38;
  UnityEngine_Color_o UVar39;
  UnityEngine_Color_o value_00;
  UnityEngine_Color_o value_01;
  UnityEngine_Color_o value_02;
  Utility_Color255_o *pUStack_278;
  System_String_c *pSStack_270;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  float fStack_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float fStack_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float fStack_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float fStack_228;
  float fStack_224;
  float fStack_220;
  undefined4 uStack_21c;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  undefined1 auStack_200 [8];
  float fStack_1f8;
  float fStack_1f4;
  undefined1 auStack_1f0 [8];
  float fStack_1e8;
  float fStack_1e4;
  undefined1 auStack_1d8 [8];
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  System_Object_array *pSStack_198;
  undefined1 auStack_190 [8];
  float fStack_188;
  float fStack_184;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [16];
  undefined1 auStack_160 [16];
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined8 uStack_110;
  undefined8 uStack_108;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  System_String_c *pSStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  System_String_o *pSStack_c0;
  System_String_c *pSStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  System_String_c *pSStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  System_String_c *pSStack_88;
  UnityEngine_Transform_o *pUStack_80;
  System_String_c *pSStack_78;
  System_String_c *pSStack_70;
  long *plStack_68;
  System_String_o *pSStack_60;
  System_String_c *pSStack_58;
  UnityEngine_Transform_o *pUStack_50;
  System_String_c *pSStack_48;
  undefined8 uStack_40;
  Characters_HumanSetupTextures_o *pCStack_38;
  undefined8 extraout_XMM0_Qb_01;
  
  pSVar28 = (System_String_c *)__this;
  if (g_data_057adec2 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Misc/AOTTG_HERO_3DMG");
    il2cpp_runtime_helper_023445d0(&"Misc/aottg_hero_AHSS_3dmg");
    pSVar28 = (System_String_c *)&"Misc/aottg_hero_APG_3dmg";
    il2cpp_runtime_helper_023445d0();
    g_data_057adec2 = '\x01';
  }
  pCVar2 = (__this->fields)._setup;
  if (pCVar2 != (Characters_HumanSetup_o *)0x0) {
    iVar25 = (pCVar2->fields).Weapon;
    if (iVar25 == 3) {
      puVar10 = &"Misc/aottg_hero_APG_3dmg";
    }
    else {
      puVar10 = &"Misc/AOTTG_HERO_3DMG";
      if (iVar25 == 1) {
        puVar10 = &"Misc/aottg_hero_AHSS_3dmg";
      }
    }
    return (System_String_o *)*puVar10;
  }
  uStack_40 = il2cpp_runtime_helper_022b2c90();
  __this_00 = (UnityEngine_Transform_o *)((ulong)method & 0xffffffff);
  pCStack_38 = __this;
  if (g_data_057adea6 == '\0') {
    pSStack_48 = (System_String_c *)0x42ee176;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    pSStack_48 = (System_String_c *)0x42ee182;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Material_get_Item);
    pSStack_48 = (System_String_c *)0x42ee18e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    pSStack_48 = (System_String_c *)0x42ee19a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupMaterials);
    pSStack_48 = (System_String_c *)0x42ee1a6;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Material_InstantiateAsset_Material);
    pSStack_48 = (System_String_c *)0x42ee1b2;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    pSStack_48 = (System_String_c *)0x42ee1be;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    pSStack_48 = (System_String_c *)0x42ee1ca;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
    pSStack_48 = (System_String_c *)0x42ee1d6;
    il2cpp_runtime_helper_023445d0(&"HumanPartMat");
    pSStack_48 = (System_String_c *)0x42ee1e2;
    il2cpp_runtime_helper_023445d0(&"HumanPart1SMat");
    g_data_057adea6 = '\x01';
    if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) != 0) goto label_042ee151;
label_042ee201:
    pSStack_48 = (System_String_c *)0x42ee206;
    il2cpp_runtime_helper_02337ed0();
    pSVar33 = *(System_Collections_Generic_Dictionary_object__object__o **)
               (*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 8);
    if (pSVar33 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_042ee3f7;
label_042ee21e:
    pSStack_48 = (System_String_c *)0x42ee230;
    method = (MethodInfo *)pSVar28;
    bVar8 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar33,(Il2CppObject *)pSVar28,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar8 != '\0') {
label_042ee3b1:
      if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
        pSStack_48 = (System_String_c *)0x42ee3c3;
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar33 = *(System_Collections_Generic_Dictionary_object__object__o **)
                 (*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 8);
      if (pSVar33 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        pSVar12 = (System_String_o *)
                  System_Collections_Generic_Dictionary_object__object___get_Item
                            (pSVar33,(Il2CppObject *)pSVar28,MethodInfo_Material_get_Item);
        return pSVar12;
      }
      goto label_042ee3f7;
    }
    unaff_R13 = &TypeInfo_ResourcePaths;
    if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
      pSStack_48 = (System_String_c *)0x42ee251;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar12 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
    if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
      pSStack_48 = (System_String_c *)0x42ee28b;
      il2cpp_runtime_helper_02337ed0();
      pSVar19 = *(System_String_o **)(*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 0x28);
      if ((char)__this_00 != '\0') goto label_042ee27d;
label_042ee29f:
      puVar10 = &"HumanPartMat";
    }
    else {
      pSVar19 = *(System_String_o **)(*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 0x28);
      if ((char)__this_00 == '\0') goto label_042ee29f;
label_042ee27d:
      puVar10 = &"HumanPart1SMat";
    }
    pSStack_48 = (System_String_c *)0x42ee2b0;
    pSVar19 = System_String__Concat_3ae5ba0(pSVar19,(System_String_o *)*puVar10,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      pSStack_48 = (System_String_c *)0x42ee2cb;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_48 = (System_String_c *)0x42ee2e5;
    __this_00 = (UnityEngine_Transform_o *)
                ApplicationManagers_ResourceManager__InstantiateAsset_object_(pSVar12,pSVar19,1,MethodInfo_Material_InstantiateAsset_Material);
    if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
      pSStack_48 = (System_String_c *)0x42ee2fa;
      il2cpp_runtime_helper_02337ed0();
    }
    unaff_R14 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
    if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
      pSStack_48 = (System_String_c *)0x42ee31b;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_48 = (System_String_c *)0x42ee334;
    __this = (Characters_HumanSetupTextures_o *)
             System_String__Concat_3ae5ba0
                       (*(System_String_o **)(*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 0x20),
                        (System_String_o *)pSVar28,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      pSStack_48 = (System_String_c *)0x42ee34f;
      il2cpp_runtime_helper_02337ed0();
    }
    in_RCX = (System_String_c **)0x0;
    pSStack_48 = (System_String_c *)0x42ee35e;
    method = (MethodInfo *)__this;
    pSVar11 = (System_String_c *)
              ApplicationManagers_ResourceManager__LoadAsset
                        (unaff_R14,(System_String_o *)__this,0,(MethodInfo *)0x0);
    if ((pSVar11 == (System_String_c *)0x0) ||
       (in_RCX = &TypeInfo_Texture2D, method = (MethodInfo *)TypeInfo_Texture2D, (pSVar11->_1).image == TypeInfo_Texture2D)) {
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        pSStack_48 = (System_String_c *)0x42ee388;
        UnityEngine_Material__set_mainTexture
                  ((UnityEngine_Material_o *)__this_00,(UnityEngine_Texture_o *)pSVar11,(MethodInfo *)0x0);
        pSVar33 = *(System_Collections_Generic_Dictionary_object__object__o **)
                   (*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 8);
        method = (MethodInfo *)pSVar11;
        if (pSVar33 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          pSStack_48 = (System_String_c *)0x42ee3b1;
          in_RCX = (System_String_c **)MethodInfo_Void_set_Item;
          method = (MethodInfo *)pSVar28;
          System_Collections_Generic_Dictionary_object__object___set_Item
                    (pSVar33,(Il2CppObject *)pSVar28,(Il2CppObject *)__this_00,MethodInfo_Void_set_Item);
          goto label_042ee3b1;
        }
      }
      goto label_042ee3f7;
    }
  }
  else {
    if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) goto label_042ee201;
label_042ee151:
    pSVar33 = *(System_Collections_Generic_Dictionary_object__object__o **)
               (*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 8);
    if (pSVar33 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_042ee21e;
label_042ee3f7:
    pSStack_48 = (System_String_c *)0x42ee3fc;
    pSVar11 = (System_String_c *)il2cpp_runtime_helper_022b2c90();
  }
  plVar34 = &TypeInfo_HumanSetupMaterials;
  pSStack_48 = (System_String_c *)0x42ee404;
  il2cpp_runtime_helper_022b2fd0();
  plVar29 = (long *)pSVar11;
  pSStack_48 = (System_String_c *)__this;
  if (g_data_057adeb1 == '\0') {
    pUStack_50 = (UnityEngine_Transform_o *)0x42ee429;
    il2cpp_runtime_helper_023445d0(&"3dmg_2");
    pUStack_50 = (UnityEngine_Transform_o *)0x42ee435;
    il2cpp_runtime_helper_023445d0(&"3dmg_3");
    plVar29 = &"3dmg";
    pUStack_50 = (UnityEngine_Transform_o *)0x42ee441;
    il2cpp_runtime_helper_023445d0();
    g_data_057adeb1 = '\x01';
  }
  pcVar3 = (pSVar11->_1).name;
  if (pcVar3 != (char *)0x0) {
    iVar25 = *(int *)(pcVar3 + 0x1d0);
    if (iVar25 == 3) {
      puVar10 = &"3dmg_3";
    }
    else {
      puVar10 = &"3dmg";
      if (iVar25 == 1) {
        puVar10 = &"3dmg_2";
      }
    }
    pSVar12 = System_String__Concat_3ae5ba0
                        ((pSVar11->_1).byval_arg.data,(System_String_o *)*puVar10,(MethodInfo *)0x0);
    return pSVar12;
  }
  pUStack_50 = (UnityEngine_Transform_o *)0x42ee491;
  il2cpp_runtime_helper_022b2c90();
  uVar24 = SUB84(in_RCX,0);
  plStack_68 = &TypeInfo_HumanSetupMaterials;
  pUVar18 = (Utility_Color255_o *)0x0;
  pSVar12 = unaff_R14;
  pSStack_70 = pSVar11;
  pSStack_60 = unaff_R14;
  pSStack_58 = pSVar28;
  pUStack_50 = __this_00;
  if ((System_String_c *)method != (System_String_c *)0x0) {
    pSVar12 = (System_String_o *)((ulong)in_RCX & 0xffffffff);
    pUVar18 = (Utility_Color255_o *)0x0;
    pSStack_78 = (System_String_c *)0x42ee4c4;
    plVar29 = (long *)method;
    pUVar13 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)method,(MethodInfo *)0x0);
    pSVar11 = __this_01;
    pSVar28 = (System_String_c *)method;
    if (__this_01 != (System_String_c *)0x0) {
      pUVar18 = (Utility_Color255_o *)0x0;
      pSStack_78 = (System_String_c *)0x42ee4da;
      plVar29 = (long *)__this_01;
      p = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)__this_01,(MethodInfo *)0x0);
      __this_00 = (UnityEngine_Transform_o *)0x0;
      if (pUVar13 != (UnityEngine_Transform_o *)0x0) {
        pSStack_78 = (System_String_c *)0x42ee4f0;
        UnityEngine_Transform__SetParent(pUVar13,p,(MethodInfo *)0x0);
        pUVar18 = (Utility_Color255_o *)0x0;
        pSStack_78 = (System_String_c *)0x42ee4fa;
        plVar29 = (long *)method;
        pUVar13 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)method,(MethodInfo *)0x0);
        if (g_data_057a65d5 == '\0') {
          plVar29 = &TypeInfo_Vector3;
          pSStack_78 = (System_String_c *)0x42ee512;
          il2cpp_runtime_helper_023445d0();
          g_data_057a65d5 = '\x01';
        }
        __this_00 = (UnityEngine_Transform_o *)0x0;
        if (pUVar13 != (UnityEngine_Transform_o *)0x0) {
          plVar34 = &TypeInfo_Vector3;
          in_XMM1_Dc = 0;
          in_XMM1_Dd = 0;
          pSStack_78 = (System_String_c *)0x42ee547;
          UnityEngine_Transform__set_localPosition
                    (pUVar13,(UnityEngine_Vector3_o)**(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8),
                     (MethodInfo *)0x0);
          pUVar18 = (Utility_Color255_o *)0x0;
          pSStack_78 = (System_String_c *)0x42ee551;
          plVar29 = (long *)method;
          __this_00 = UnityEngine_GameObject__get_transform
                                ((UnityEngine_GameObject_o *)method,(MethodInfo *)0x0);
          if (g_data_057a6843 == '\0') {
            plVar29 = &TypeInfo_Quaternion;
            pSStack_78 = (System_String_c *)0x42ee569;
            il2cpp_runtime_helper_023445d0();
            g_data_057a6843 = '\x01';
          }
          if (__this_00 != (UnityEngine_Transform_o *)0x0) {
            in_XMM1_Dc = 0;
            in_XMM1_Dd = 0;
            pSStack_78 = (System_String_c *)0x42ee59d;
            UnityEngine_Transform__set_localRotation
                      (__this_00,
                       (UnityEngine_Quaternion_o)**(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8),
                       (MethodInfo *)0x0);
            if ((char)pSVar12 == '\0') {
              return extraout_RAX;
            }
            pUVar18 = (Utility_Color255_o *)0x0;
            pSStack_78 = (System_String_c *)0x42ee5ac;
            plVar29 = (long *)method;
            pUVar13 = UnityEngine_GameObject__get_transform
                                ((UnityEngine_GameObject_o *)method,(MethodInfo *)0x0);
            if (g_data_057a6932 == '\0') {
              plVar29 = &TypeInfo_Vector3;
              pSStack_78 = (System_String_c *)0x42ee5c4;
              il2cpp_runtime_helper_023445d0();
              g_data_057a6932 = '\x01';
            }
            pSVar11 = (System_String_c *)0x0;
            if (pUVar13 != (UnityEngine_Transform_o *)0x0) {
              UnityEngine_Transform__set_localScale
                        (pUVar13,(UnityEngine_Vector3_o)
                                 *(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc),
                         (MethodInfo *)0x0);
              return extraout_RAX_00;
            }
          }
        }
      }
    }
  }
  pSStack_78 = (System_String_c *)0x42ee605;
  il2cpp_runtime_helper_022b2c90();
  ppSVar30 = (System_String_o **)plVar29;
  pSStack_78 = pSVar11;
  if (g_data_057adeb2 == '\0') {
    ppSVar30 = &"3dmg_belt";
    pUStack_80 = (UnityEngine_Transform_o *)0x42ee629;
    il2cpp_runtime_helper_023445d0();
    g_data_057adeb2 = '\x01';
  }
  pcVar3 = (((System_String_c *)plVar29)->_1).name;
  if (pcVar3 != (char *)0x0) {
    if ((*(uint *)(pcVar3 + 0x1d0) | 2) != 3) {
      pSVar12 = System_String__Concat_3ae5ba0
                          ((((System_String_c *)plVar29)->_1).byval_arg.data,"3dmg_belt",(MethodInfo *)0x0);
      return pSVar12;
    }
    return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  pUStack_80 = (UnityEngine_Transform_o *)0x42ee67c;
  uStack_90 = il2cpp_runtime_helper_022b2c90();
  uVar22 = (ulong)pUVar18 & 0xffffffff;
  pSVar11 = (System_String_c *)ppSVar30;
  pSStack_88 = (System_String_c *)plVar29;
  pUStack_80 = __this_00;
  if (g_data_057adeb3 == '\0') {
    uStack_98 = 0x42ee69d;
    il2cpp_runtime_helper_023445d0(&"char_gun_mag_l");
    uStack_98 = 0x42ee6a9;
    il2cpp_runtime_helper_023445d0(&"char_gun_mag_r");
    uStack_98 = 0x42ee6b5;
    il2cpp_runtime_helper_023445d0(&"scabbard_L");
    pSVar11 = (System_String_c *)&"scabbard_R";
    uStack_98 = 0x42ee6c1;
    il2cpp_runtime_helper_023445d0();
    g_data_057adeb3 = '\x01';
  }
  pcVar3 = (((System_String_c *)ppSVar30)->_1).name;
  if (pcVar3 != (char *)0x0) {
    if ((*(uint *)(pcVar3 + 0x1d0) | 2) == 3) {
      puVar14 = &"char_gun_mag_r";
      puVar10 = &"char_gun_mag_l";
    }
    else {
      puVar14 = &"scabbard_R";
      puVar10 = (undefined8 *)&"scabbard_L";
    }
    if ((char)uVar22 == '\0') {
      puVar10 = puVar14;
    }
    pSVar12 = System_String__Concat_3ae5ba0
                        ((((System_String_c *)ppSVar30)->_1).byval_arg.data,(System_String_o *)*puVar10,
                         (MethodInfo *)0x0);
    return pSVar12;
  }
  uStack_98 = 0x42ee71d;
  uStack_a8 = il2cpp_runtime_helper_022b2c90();
  uVar27 = (ulong)pUVar18 & 0xffffffff;
  pSVar31 = pSVar11;
  pSStack_a0 = (System_String_c *)ppSVar30;
  uStack_98 = uVar22;
  if (g_data_057adeb4 == '\0') {
    uStack_b0 = 0x42ee73d;
    il2cpp_runtime_helper_023445d0(&"blade_R");
    uStack_b0 = 0x42ee749;
    il2cpp_runtime_helper_023445d0(&"blade_L");
    uStack_b0 = 0x42ee755;
    il2cpp_runtime_helper_023445d0(&"character_gun_r_0");
    uStack_b0 = 0x42ee761;
    il2cpp_runtime_helper_023445d0(&"thunderspear_r");
    uStack_b0 = 0x42ee76d;
    il2cpp_runtime_helper_023445d0(&"apg_R");
    uStack_b0 = 0x42ee779;
    il2cpp_runtime_helper_023445d0(&"thunderspear_l");
    uStack_b0 = 0x42ee785;
    il2cpp_runtime_helper_023445d0(&"character_gun_l_0");
    pSVar31 = (System_String_c *)&"apg_L";
    uStack_b0 = 0x42ee791;
    il2cpp_runtime_helper_023445d0();
    g_data_057adeb4 = '\x01';
  }
  pcVar3 = (pSVar11->_1).name;
  if (pcVar3 != (char *)0x0) {
    iVar25 = *(int *)(pcVar3 + 0x1d0);
    if (iVar25 == 1) {
      puVar14 = &"character_gun_r_0";
      puVar10 = &"character_gun_l_0";
    }
    else if (iVar25 == 3) {
      puVar14 = &"apg_R";
      puVar10 = &"apg_L";
    }
    else {
      puVar10 = (undefined8 *)&"blade_L";
      if (iVar25 == 2) {
        puVar10 = (undefined8 *)&"thunderspear_l";
      }
      puVar14 = &"blade_R";
      if (iVar25 == 2) {
        puVar14 = &"thunderspear_r";
      }
    }
    if ((char)uVar27 == '\0') {
      puVar10 = puVar14;
    }
    pSVar12 = System_String__Concat_3ae5ba0
                        ((pSVar11->_1).this_arg.data,(System_String_o *)*puVar10,(MethodInfo *)0x0);
    return pSVar12;
  }
  uStack_b0 = 0x42ee812;
  il2cpp_runtime_helper_022b2c90();
  cVar7 = (char)uVar24;
  pSStack_270 = pSVar31;
  pSStack_d8 = pSVar11;
  plStack_d0 = plVar34;
  plStack_c8 = unaff_R13;
  pSStack_c0 = pSVar12;
  pSStack_b8 = pSVar28;
  uStack_b0 = uVar27;
  if (g_data_057ade94 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEffectPresets);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponentsInChildren_Renderer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color255_get_Value);
    il2cpp_runtime_helper_023445d0(&"_PulseSpeed");
    il2cpp_runtime_helper_023445d0(&"_FlowSpeed");
    il2cpp_runtime_helper_023445d0(&"_TexturePreserve");
    il2cpp_runtime_helper_023445d0(&"_FlowStrength");
    il2cpp_runtime_helper_023445d0(&"Custom/CharacterEffectShader");
    il2cpp_runtime_helper_023445d0(&"_EmissionFromTexture");
    il2cpp_runtime_helper_023445d0(&"_SecondaryScroll");
    il2cpp_runtime_helper_023445d0(&"_QualityLevel");
    il2cpp_runtime_helper_023445d0(&"_IsHair");
    il2cpp_runtime_helper_023445d0(&"_Color");
    il2cpp_runtime_helper_023445d0(&"_MainTex");
    il2cpp_runtime_helper_023445d0(&"_CullMode");
    il2cpp_runtime_helper_023445d0(&"_EMISSION");
    il2cpp_runtime_helper_023445d0(&"_NeonColor");
    il2cpp_runtime_helper_023445d0(&"_OutlineThickness");
    il2cpp_runtime_helper_023445d0(&"_DetailSpeed");
    il2cpp_runtime_helper_023445d0(&"_StyleMode");
    il2cpp_runtime_helper_023445d0(&"_GlowIntensity");
    il2cpp_runtime_helper_023445d0(&"_EdgeSpark");
    il2cpp_runtime_helper_023445d0(&"_StyleStrength");
    il2cpp_runtime_helper_023445d0(&"_OutlinePower");
    il2cpp_runtime_helper_023445d0(&"_PulseAmount");
    il2cpp_runtime_helper_023445d0(&"_OutlineColor");
    il2cpp_runtime_helper_023445d0(&"_DetailScale");
    il2cpp_runtime_helper_023445d0(&"_GlowColor");
    g_data_057ade94 = '\x01';
  }
  pUStack_278 = (Utility_Color255_o *)0x0;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar26 = (MethodInfo *)0x0;
  bVar8 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar18,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (type_00 == 0) {
    return (System_String_o *)CONCAT44(extraout_var,bVar8);
  }
  if ((char)bVar8 != '\0') {
    return (System_String_o *)CONCAT44(extraout_var,bVar8);
  }
  bVar8 = Characters_HumanSetup__CanUseCharacterEffects((Characters_HumanSetup_o *)pSStack_270,pMVar26);
  if ((char)bVar8 == '\0') {
    return (System_String_o *)CONCAT44(extraout_var_00,bVar8);
  }
  if (*(int *)(TypeInfo_CharacterEffectPresets + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar17 = (Utility_Color255_o *)auStack_1d8;
  PatreonEffects_CharacterEffectPresets__GetPreset
            ((PatreonEffects_CharacterEffectPreset_o *)pUVar17,type_00,(MethodInfo *)0x0);
  pIVar4 = (pSStack_270->vtable)._9_GetTypeCode.methodPtr;
  if (((pIVar4 == (Il2CppMethodPointer)0x0) || (lVar15 = *(long *)(pIVar4 + 0xa0), lVar15 == 0)) ||
     (pUVar17 = *(Utility_Color255_o **)(lVar15 + 0x18), pUVar17 == (Utility_Color255_o *)0x0)) {
label_042ef756:
    il2cpp_runtime_helper_022b2c90();
    pUVar18 = pUVar17;
  }
  else {
    fStack_23c = (float)auStack_1d8._4_4_;
    fStack_240 = fStack_1d0;
    fStack_204 = fStack_1cc;
    fStack_208 = fStack_1c8;
    fStack_20c = fStack_1c4;
    fStack_210 = fStack_1c0;
    fStack_214 = fStack_1bc;
    fStack_244 = fStack_1b8;
    fStack_248 = fStack_1b4;
    fStack_24c = fStack_1b0;
    fStack_250 = fStack_1ac;
    fStack_218 = fStack_1a8;
    fStack_254 = fStack_1a4;
    fStack_258 = fStack_1a0;
    UVar39 = Utility_Color255__ToColor(pUVar17,(MethodInfo *)0x0);
    uStack_110 = UVar39.fields._0_8_;
    auStack_120._8_4_ = in_XMM1_Dc;
    auStack_120._0_8_ = UVar39.fields._8_8_;
    auStack_120._12_4_ = in_XMM1_Dd;
    pIVar4 = (pSStack_270->vtable)._9_GetTypeCode.methodPtr;
    if (pIVar4 == (Il2CppMethodPointer)0x0) goto label_042ef756;
    if (cVar7 == '\0') {
      lVar15 = *(long *)(pIVar4 + 0xe8);
      if (lVar15 != 0) goto label_042eebbf;
      goto label_042ef756;
    }
    lVar15 = *(long *)(pIVar4 + 0xd8);
    if (lVar15 == 0) goto label_042ef756;
label_042eebbf:
    pUVar17 = *(Utility_Color255_o **)(lVar15 + 0x18);
    if (pUVar17 == (Utility_Color255_o *)0x0) goto label_042ef756;
    uStack_108 = extraout_XMM0_Qb;
    UVar39 = Utility_Color255__ToColor(pUVar17,(MethodInfo *)0x0);
    uStack_180 = UVar39.fields._0_8_;
    fStack_188 = (float)in_XMM1_Dc;
    auStack_190 = (undefined1  [8])UVar39.fields._8_8_;
    fStack_184 = (float)in_XMM1_Dd;
    if (cVar7 != '\0') {
      _auStack_1f0 = ZEXT812(0x3e4ccccd);
      fStack_1e4 = 0.0;
      _auStack_200 = ZEXT812(0x3ee66666);
      fStack_1f4 = 0.0;
      if (pUVar18 != (Utility_Color255_o *)0x0) goto label_042eec3f;
      goto label_042ef756;
    }
    _auStack_1f0 = ZEXT812(0x3eb33333);
    fStack_1e4 = 0.0;
    _auStack_200 = ZEXT812(0x3f19999a);
    fStack_1f4 = 0.0;
    if (pUVar18 == (Utility_Color255_o *)0x0) goto label_042ef756;
label_042eec3f:
    uStack_178 = extraout_XMM0_Qb_00;
    pSVar16 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                        ((UnityEngine_GameObject_o *)pUVar18,MethodInfo_Renderer_GetComponentsInChildren_Renderer);
    pUVar17 = pUVar18;
    if (pSVar16 == (System_Object_array *)0x0) goto label_042ef756;
    if (cVar7 == '\0') {
      fStack_25c = 0.0;
      fStack_260 = 2.0;
      iVar25 = (int)pSVar16->max_length;
    }
    else {
      fStack_25c = 1.0;
      fStack_260 = 0.0;
      iVar25 = (int)pSVar16->max_length;
    }
    if (iVar25 < 1) {
      return (System_String_o *)pSVar16;
    }
    fVar38 = 1.0;
    if ((float)auStack_190._4_4_ <= 1.0) {
      fVar38 = (float)auStack_190._4_4_;
    }
    fVar38 = (float)(-(uint)(0.0 <= (float)auStack_190._4_4_) & (uint)fVar38);
    fStack_100 = (float)auStack_1f0._0_4_ * (1.0 - (float)uStack_180) + (float)uStack_180;
    fStack_fc = (float)auStack_1f0._0_4_ * (1.0 - uStack_180._4_4_) + uStack_180._4_4_;
    fStack_f8 = fStack_1e8 * (0.0 - (float)uStack_178) + (float)uStack_178;
    fStack_f4 = fStack_1e4 * (0.0 - uStack_178._4_4_) + uStack_178._4_4_;
    auStack_1f0._4_4_ = (float)auStack_1f0._0_4_ * (1.0 - (float)auStack_190._4_4_) + (float)auStack_190._4_4_
    ;
    auStack_1f0._0_4_ = (float)auStack_1f0._0_4_ * (1.0 - (float)auStack_190._0_4_) + (float)auStack_190._0_4_
    ;
    fStack_1e8 = fStack_1e8 * (0.0 - fStack_188) + fStack_188;
    fStack_1e4 = fStack_1e4 * (0.0 - fStack_184) + fStack_184;
    fStack_f0 = (1.0 - (float)uStack_180) * (float)auStack_200._0_4_ + (float)uStack_180;
    fStack_ec = (1.0 - uStack_180._4_4_) * (float)auStack_200._0_4_ + uStack_180._4_4_;
    fStack_e8 = (0.0 - (float)uStack_178) * fStack_1f8 + (float)uStack_178;
    fStack_e4 = (0.0 - uStack_178._4_4_) * fStack_1f4 + uStack_178._4_4_;
    auStack_200._4_4_ = (float)auStack_200._0_4_ * (1.0 - (float)auStack_190._4_4_) + (float)auStack_190._4_4_
    ;
    auStack_200._0_4_ = (float)auStack_200._0_4_ * (1.0 - (float)auStack_190._0_4_) + (float)auStack_190._0_4_
    ;
    fStack_1f8 = fStack_1f8 * (0.0 - fStack_188) + fStack_188;
    fStack_1f4 = fStack_1f4 * (0.0 - fStack_184) + fStack_184;
    fStack_220 = (float)(int)auStack_1d8._0_4_;
    fVar35 = fStack_248 * 0.7;
    fVar37 = 1.0;
    if (fVar35 <= 1.0) {
      fVar37 = fVar35;
    }
    auStack_140 = ZEXT416(-(uint)(0.0 <= fVar35) & (uint)fVar37);
    fVar35 = fStack_244 * 0.95;
    fVar37 = 1.5;
    if (fVar35 <= 1.5) {
      fVar37 = fVar35;
    }
    auStack_150 = ZEXT416(~-(uint)(0.5 <= fVar35) & 0x3f000000 | (uint)fVar37 & -(uint)(0.5 <= fVar35));
    fStack_224 = fStack_254 * 1.25 * fVar38;
    fStack_22c = fStack_23c * 1.15 * fVar38;
    fStack_264 = fStack_258 * fVar38;
    fStack_230 = fStack_23c * 0.45 * fVar38;
    fVar35 = fStack_248 + 0.22;
    fVar37 = 1.0;
    if (fVar35 <= 1.0) {
      fVar37 = fVar35;
    }
    auStack_160 = ZEXT416(-(uint)(0.0 <= fVar35) & (uint)fVar37);
    fVar35 = fStack_244 + 0.14;
    fVar37 = 1.5;
    if (fVar35 <= 1.5) {
      fVar37 = fVar35;
    }
    auStack_170 = ZEXT416(~-(uint)(0.5 <= fVar35) & 0x3f000000 | (uint)fVar37 & -(uint)(0.5 <= fVar35));
    fStack_228 = fStack_24c * 1.15;
    fStack_234 = fStack_250 * 1.1;
    fStack_238 = fStack_240 * 0.9;
    auStack_130 = ZEXT416((uint)(fVar38 * fStack_254));
    uVar22 = 0;
    uStack_21c = uVar24;
    pSStack_198 = pSVar16;
    if (iVar25 != 0) {
      do {
        x_03 = (Utility_Color255_o *)pSStack_198->m_Items[uVar22];
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pUVar18 = x_03;
        bVar8 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)x_03,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar8 == '\0') {
          pUVar17 = pUVar18;
          if (x_03 == (Utility_Color255_o *)0x0) goto label_042ef756;
          x_00 = (Utility_Color255_o *)
                 UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)x_03,(MethodInfo *)0x0);
          x_01 = (Utility_Color255_o *)UnityEngine_Shader__Find("Custom/CharacterEffectShader",(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pUVar18 = x_00;
          bVar8 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar8 == '\0') {
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pUVar18 = x_01;
            bVar8 = UnityEngine_Object__op_Equality
                              ((UnityEngine_Object_o *)x_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar8 == '\0') {
              pUStack_278 = (Utility_Color255_o *)0x0;
              pMVar26 = (pSStack_270->vtable)._11_System_IConvertible_ToChar.method;
              pUVar17 = (Utility_Color255_o *)0x0;
              if (pMVar26 == (MethodInfo *)0x0) goto label_042ef756;
              bVar8 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                                ((System_Collections_Generic_Dictionary_object__object__o *)pMVar26,
                                 (Il2CppObject *)x_03,(Il2CppObject **)&pUStack_278,MethodInfo_Boolean_TryGetValue);
              pUVar18 = pUStack_278;
              if ((char)bVar8 == '\0') {
label_042ef058:
                pUVar18 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Material);
                UnityEngine_Material___ctor
                          ((UnityEngine_Material_o *)pUVar18,(UnityEngine_Shader_o *)x_01,(MethodInfo *)0x0);
                pMVar26 = (pSStack_270->vtable)._11_System_IConvertible_ToChar.method;
                pUVar17 = (Utility_Color255_o *)0x0;
                pUStack_278 = pUVar18;
                if (pMVar26 == (MethodInfo *)0x0) goto label_042ef756;
                System_Collections_Generic_Dictionary_object__object___set_Item
                          ((System_Collections_Generic_Dictionary_object__object__o *)pMVar26,
                           (Il2CppObject *)x_03,(Il2CppObject *)pUVar18,MethodInfo_Void_set_Item);
label_042ef0ad:
                pUVar17 = x_03;
                UnityEngine_Renderer__set_material
                          ((UnityEngine_Renderer_o *)x_03,(UnityEngine_Material_o *)pUStack_278,
                           (MethodInfo *)0x0);
              }
              else {
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                bVar8 = UnityEngine_Object__op_Inequality
                                  ((UnityEngine_Object_o *)pUVar18,(UnityEngine_Object_o *)0x0,
                                   (MethodInfo *)0x0);
                if ((char)bVar8 == '\0') goto label_042ef058;
                pUVar17 = (Utility_Color255_o *)
                          UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)x_03,(MethodInfo *)0x0)
                ;
                pUVar18 = pUStack_278;
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                bVar8 = UnityEngine_Object__op_Inequality
                                  ((UnityEngine_Object_o *)pUVar17,(UnityEngine_Object_o *)pUVar18,
                                   (MethodInfo *)0x0);
                if ((char)bVar8 != '\0') goto label_042ef0ad;
              }
              uVar24 = uStack_21c;
              if (x_00 == (Utility_Color255_o *)0x0) goto label_042ef756;
              bVar8 = UnityEngine_Material__HasProperty_4dcb5b0
                                ((UnityEngine_Material_o *)x_00,"_MainTex",(MethodInfo *)0x0);
              pUVar18 = pUStack_278;
              if ((char)bVar8 != '\0') {
                pUVar17 = x_00;
                value = UnityEngine_Material__GetTexture
                                  ((UnityEngine_Material_o *)x_00,"_MainTex",(MethodInfo *)0x0);
                if (pUVar18 == (Utility_Color255_o *)0x0) goto label_042ef756;
                UnityEngine_Material__SetTexture
                          ((UnityEngine_Material_o *)pUVar18,"_MainTex",value,(MethodInfo *)0x0);
              }
              if ((char)uVar24 == '\0') {
                pUVar17 = x_00;
                bVar8 = UnityEngine_Material__HasProperty_4dcb5b0
                                  ((UnityEngine_Material_o *)x_00,"_Color",(MethodInfo *)0x0);
                pUVar18 = pUStack_278;
                if ((char)bVar8 == '\0') {
                  if (pUStack_278 == (Utility_Color255_o *)0x0) goto label_042ef756;
                  fVar38 = (float)g_data_00d19fc0;
                  fVar37 = g_data_00d19fc0._4_4_;
                  auVar36 = _DAT_00d19fc0;
                }
                else {
                  UVar39 = UnityEngine_Material__GetColor
                                     ((UnityEngine_Material_o *)x_00,"_Color",(MethodInfo *)0x0);
                  fVar38 = UVar39.fields.b;
                  fVar37 = UVar39.fields.a;
                  auVar36._0_8_ = UVar39.fields._0_8_;
                  auVar36._8_8_ = extraout_XMM0_Qb_01;
                  pUVar17 = x_00;
                  if (pUVar18 == (Utility_Color255_o *)0x0) goto label_042ef756;
                }
              }
              else {
                pUVar17 = pUStack_278;
                if (pUStack_278 == (Utility_Color255_o *)0x0) goto label_042ef756;
                auVar36._8_8_ = uStack_108;
                auVar36._0_8_ = uStack_110;
                pUVar18 = pUStack_278;
                fVar38 = (float)auStack_120._0_4_;
                fVar37 = (float)auStack_120._4_4_;
              }
              UVar39.fields._0_8_ = auVar36._0_8_;
              UVar39.fields.a = fVar37;
              UVar39.fields.b = fVar38;
              UnityEngine_Material__SetColor
                        ((UnityEngine_Material_o *)pUVar18,"_Color",UVar39,(MethodInfo *)0x0);
              auVar36 = _auStack_190;
              pUVar17 = pUStack_278;
              if (pUStack_278 == (Utility_Color255_o *)0x0) goto label_042ef756;
              value_00.fields.b = (float)auStack_190._0_4_;
              value_00.fields.a = (float)auStack_190._4_4_;
              value_00.fields.r = (float)uStack_180;
              value_00.fields.g = uStack_180._4_4_;
              _auStack_190 = auVar36;
              UnityEngine_Material__SetColor
                        ((UnityEngine_Material_o *)pUStack_278,"_NeonColor",value_00,(MethodInfo *)0x0);
              auVar36 = _auStack_1f0;
              pUVar17 = pUStack_278;
              if (pUStack_278 == (Utility_Color255_o *)0x0) goto label_042ef756;
              value_01.fields.g = fStack_fc;
              value_01.fields.r = fStack_100;
              value_01.fields.b = (float)auStack_1f0._0_4_;
              value_01.fields.a = (float)auStack_1f0._4_4_;
              _auStack_1f0 = auVar36;
              UnityEngine_Material__SetColor
                        ((UnityEngine_Material_o *)pUStack_278,"_GlowColor",value_01,(MethodInfo *)0x0);
              auVar36 = _auStack_200;
              pUVar17 = pUStack_278;
              if (pUStack_278 == (Utility_Color255_o *)0x0) goto label_042ef756;
              value_02.fields.g = fStack_ec;
              value_02.fields.r = fStack_f0;
              value_02.fields.b = (float)auStack_200._0_4_;
              value_02.fields.a = (float)auStack_200._4_4_;
              _auStack_200 = auVar36;
              UnityEngine_Material__SetColor
                        ((UnityEngine_Material_o *)pUStack_278,"_OutlineColor",value_02,(MethodInfo *)0x0);
              pUVar17 = pUStack_278;
              if ((((pUStack_278 == (Utility_Color255_o *)0x0) ||
                   (UnityEngine_Material__SetFloat
                              ((UnityEngine_Material_o *)pUStack_278,"_GlowIntensity",fStack_23c,(MethodInfo *)0x0
                              ), pUVar17 = pUStack_278, pUStack_278 == (Utility_Color255_o *)0x0)) ||
                  ((UnityEngine_Material__SetFloat
                              ((UnityEngine_Material_o *)pUStack_278,"_OutlineThickness",fStack_240,(MethodInfo *)0x0
                              ), pUVar17 = pUStack_278, pUStack_278 == (Utility_Color255_o *)0x0 ||
                   ((UnityEngine_Material__SetFloat
                               ((UnityEngine_Material_o *)pUStack_278,"_OutlinePower",fStack_204,
                                (MethodInfo *)0x0), pUVar17 = pUStack_278,
                    pUStack_278 == (Utility_Color255_o *)0x0 ||
                    (UnityEngine_Material__SetFloat
                               ((UnityEngine_Material_o *)pUStack_278,"_PulseSpeed",fStack_208,
                                (MethodInfo *)0x0), pUVar17 = pUStack_278,
                    pUStack_278 == (Utility_Color255_o *)0x0)))))) ||
                 ((UnityEngine_Material__SetFloat
                             ((UnityEngine_Material_o *)pUStack_278,"_PulseAmount",fStack_20c,(MethodInfo *)0x0)
                  , pUVar17 = pUStack_278, pUStack_278 == (Utility_Color255_o *)0x0 ||
                  (((((((UnityEngine_Material__SetFloat
                                   ((UnityEngine_Material_o *)pUStack_278,"_FlowSpeed",fStack_210,
                                    (MethodInfo *)0x0), pUVar17 = pUStack_278,
                        pUStack_278 == (Utility_Color255_o *)0x0 ||
                        (UnityEngine_Material__SetFloat
                                   ((UnityEngine_Material_o *)pUStack_278,"_FlowStrength",fStack_214,
                                    (MethodInfo *)0x0), pUVar17 = pUStack_278,
                        pUStack_278 == (Utility_Color255_o *)0x0)) ||
                       (UnityEngine_Material__SetFloat
                                  ((UnityEngine_Material_o *)pUStack_278,"_TexturePreserve",fStack_244,
                                   (MethodInfo *)0x0), pUVar17 = pUStack_278,
                       pUStack_278 == (Utility_Color255_o *)0x0)) ||
                      ((UnityEngine_Material__SetFloat
                                  ((UnityEngine_Material_o *)pUStack_278,"_EmissionFromTexture",fStack_248,
                                   (MethodInfo *)0x0), pUVar17 = pUStack_278,
                       pUStack_278 == (Utility_Color255_o *)0x0 ||
                       (UnityEngine_Material__SetFloat
                                  ((UnityEngine_Material_o *)pUStack_278,"_DetailScale",fStack_24c,
                                   (MethodInfo *)0x0), pUVar17 = pUStack_278,
                       pUStack_278 == (Utility_Color255_o *)0x0)))) ||
                     (UnityEngine_Material__SetFloat
                                ((UnityEngine_Material_o *)pUStack_278,"_DetailSpeed",fStack_250,
                                 (MethodInfo *)0x0), pUVar17 = pUStack_278,
                     pUStack_278 == (Utility_Color255_o *)0x0)) ||
                    ((UnityEngine_Material__SetFloat
                                ((UnityEngine_Material_o *)pUStack_278,"_SecondaryScroll",fStack_218,
                                 (MethodInfo *)0x0), pUVar17 = pUStack_278,
                     pUStack_278 == (Utility_Color255_o *)0x0 ||
                     (UnityEngine_Material__SetFloat
                                ((UnityEngine_Material_o *)pUStack_278,"_EdgeSpark",fStack_254,
                                 (MethodInfo *)0x0), pUVar17 = pUStack_278,
                     pUStack_278 == (Utility_Color255_o *)0x0)))) ||
                   ((UnityEngine_Material__SetFloat
                               ((UnityEngine_Material_o *)pUStack_278,"_StyleMode",fStack_220,
                                (MethodInfo *)0x0), pUVar17 = pUStack_278,
                    pUStack_278 == (Utility_Color255_o *)0x0 ||
                    ((UnityEngine_Material__SetFloat
                                ((UnityEngine_Material_o *)pUStack_278,"_StyleStrength",fStack_258,
                                 (MethodInfo *)0x0), pUVar17 = pUStack_278,
                     pUStack_278 == (Utility_Color255_o *)0x0 ||
                     (UnityEngine_Material__SetFloat
                                ((UnityEngine_Material_o *)pUStack_278,"_IsHair",fStack_25c,
                                 (MethodInfo *)0x0), pUVar17 = pUStack_278,
                     pUStack_278 == (Utility_Color255_o *)0x0)))))))))) goto label_042ef756;
              UnityEngine_Material__SetFloat
                        ((UnityEngine_Material_o *)pUStack_278,"_CullMode",fStack_260,(MethodInfo *)0x0);
              lVar15 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x18);
              fVar38 = 2.0;
              if (lVar15 != 0) {
                lVar15 = *(long *)(lVar15 + 0x20);
                if (lVar15 == 0) goto label_042ef756;
                iVar25 = *(int *)(lVar15 + 0x14);
                fVar38 = 0.0;
                if (1 < iVar25) {
                  fVar38 = *(float *)(&g_data_00d1d3c8 + (ulong)(iVar25 < 3) * 4);
                }
              }
              pUVar17 = pUStack_278;
              if (pUStack_278 == (Utility_Color255_o *)0x0) goto label_042ef756;
              UnityEngine_Material__SetFloat
                        ((UnityEngine_Material_o *)pUStack_278,"_QualityLevel",fVar38,(MethodInfo *)0x0);
              pUVar17 = pUStack_278;
              if ((char)uVar24 == '\0') {
                if (pUStack_278 == (Utility_Color255_o *)0x0) goto label_042ef756;
                UnityEngine_Material__SetFloat
                          ((UnityEngine_Material_o *)pUStack_278,"_EmissionFromTexture",(float)auStack_140._0_4_,
                           (MethodInfo *)0x0);
                pUVar17 = (Utility_Color255_o *)0x0;
                if (pUStack_278 == (Utility_Color255_o *)0x0) goto label_042ef756;
                UnityEngine_Material__SetFloat
                          ((UnityEngine_Material_o *)pUStack_278,"_TexturePreserve",(float)auStack_150._0_4_,
                           (MethodInfo *)0x0);
                pUVar17 = (Utility_Color255_o *)0x0;
                if (pUStack_278 == (Utility_Color255_o *)0x0) goto label_042ef756;
                UnityEngine_Material__SetFloat
                          ((UnityEngine_Material_o *)pUStack_278,"_EdgeSpark",fStack_224,(MethodInfo *)0x0);
                pUVar17 = (Utility_Color255_o *)0x0;
                if (pUStack_278 == (Utility_Color255_o *)0x0) goto label_042ef756;
                UnityEngine_Material__SetFloat
                          ((UnityEngine_Material_o *)pUStack_278,"_GlowIntensity",fStack_22c,(MethodInfo *)0x0);
                pSVar12 = "_StyleStrength";
                pUVar17 = (Utility_Color255_o *)0x0;
                fVar38 = fStack_264;
                if (pUStack_278 == (Utility_Color255_o *)0x0) goto label_042ef756;
              }
              else {
                if (pUStack_278 == (Utility_Color255_o *)0x0) goto label_042ef756;
                UnityEngine_Material__SetFloat
                          ((UnityEngine_Material_o *)pUStack_278,"_GlowIntensity",fStack_230,(MethodInfo *)0x0);
                pUVar17 = (Utility_Color255_o *)0x0;
                if (pUStack_278 == (Utility_Color255_o *)0x0) goto label_042ef756;
                UnityEngine_Material__SetFloat
                          ((UnityEngine_Material_o *)pUStack_278,"_EmissionFromTexture",(float)auStack_160._0_4_,
                           (MethodInfo *)0x0);
                pUVar17 = (Utility_Color255_o *)0x0;
                if (pUStack_278 == (Utility_Color255_o *)0x0) goto label_042ef756;
                UnityEngine_Material__SetFloat
                          ((UnityEngine_Material_o *)pUStack_278,"_TexturePreserve",(float)auStack_170._0_4_,
                           (MethodInfo *)0x0);
                pUVar17 = (Utility_Color255_o *)0x0;
                if (pUStack_278 == (Utility_Color255_o *)0x0) goto label_042ef756;
                UnityEngine_Material__SetFloat
                          ((UnityEngine_Material_o *)pUStack_278,"_DetailScale",fStack_228,(MethodInfo *)0x0);
                pUVar17 = (Utility_Color255_o *)0x0;
                if (pUStack_278 == (Utility_Color255_o *)0x0) goto label_042ef756;
                UnityEngine_Material__SetFloat
                          ((UnityEngine_Material_o *)pUStack_278,"_DetailSpeed",fStack_234,(MethodInfo *)0x0);
                pUVar17 = (Utility_Color255_o *)0x0;
                if (pUStack_278 == (Utility_Color255_o *)0x0) goto label_042ef756;
                UnityEngine_Material__SetFloat
                          ((UnityEngine_Material_o *)pUStack_278,"_OutlineThickness",fStack_238,(MethodInfo *)0x0);
                pUVar17 = (Utility_Color255_o *)0x0;
                if (pUStack_278 == (Utility_Color255_o *)0x0) goto label_042ef756;
                UnityEngine_Material__SetFloat
                          ((UnityEngine_Material_o *)pUStack_278,"_StyleStrength",fStack_264,(MethodInfo *)0x0);
                pUVar17 = (Utility_Color255_o *)0x0;
                if (pUStack_278 == (Utility_Color255_o *)0x0) goto label_042ef756;
                pSVar12 = "_EdgeSpark";
                fVar38 = (float)auStack_130._0_4_;
              }
              UnityEngine_Material__SetFloat
                        ((UnityEngine_Material_o *)pUStack_278,pSVar12,fVar38,(MethodInfo *)0x0);
              pUVar17 = (Utility_Color255_o *)0x0;
              if (pUStack_278 == (Utility_Color255_o *)0x0) goto label_042ef756;
              UnityEngine_Material__EnableKeyword
                        ((UnityEngine_Material_o *)pUStack_278,"_EMISSION",(MethodInfo *)0x0);
              pUVar17 = (Utility_Color255_o *)0x0;
              if (pUStack_278 == (Utility_Color255_o *)0x0) goto label_042ef756;
              UnityEngine_Material__set_globalIlluminationFlags
                        ((UnityEngine_Material_o *)pUStack_278,1,(MethodInfo *)0x0);
              UnityEngine_Renderer__set_material
                        ((UnityEngine_Renderer_o *)x_03,(UnityEngine_Material_o *)pUStack_278,
                         (MethodInfo *)0x0);
              pUVar18 = x_03;
            }
          }
        }
        uVar22 = uVar22 + 1;
        uVar1 = (uint)pSStack_198->max_length;
        if ((long)(int)uVar1 <= (long)uVar22) {
          return (System_String_o *)pSStack_198;
        }
      } while (uVar22 < uVar1);
    }
  }
  pSVar12 = (System_String_o *)il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ade91 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ClothFactory);
    pSVar12 = (System_String_o *)il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupMaterials);
    g_data_057ade91 = '\x01';
  }
  if (*(char *)&pUVar18[0xf].monitor != '\0') {
    return pSVar12;
  }
  x = pUVar18[7].monitor;
  if (g_data_057adea2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar28 = (System_String_c *)0x0;
  bVar8 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar28 = (System_String_c *)0x0;
    UnityEngine_Object__Destroy_4e01c60(x,(MethodInfo *)0x0);
  }
  if (pUVar18[0xb].monitor != (Characters_HumanSetupMeshes_o *)0x0) {
    pSVar12 = Characters_HumanSetupMeshes__GetCapeMesh(pUVar18[0xb].monitor,(MethodInfo *)pSVar28);
    pSVar28 = (System_String_c *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    bVar8 = System_String__op_Inequality(pSVar12,(System_String_o *)pSVar28,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return (System_String_o *)CONCAT44(extraout_var_01,bVar8);
    }
    if (*(Characters_HumanSetupTextures_o **)&pUVar18[0xb].fields != (Characters_HumanSetupTextures_o *)0x0) {
      reference = pUVar18[0xb].klass;
      pSVar19 = Characters_HumanSetupTextures__GetBrandTexture
                          (*(Characters_HumanSetupTextures_o **)&pUVar18[0xb].fields,(MethodInfo *)pSVar28);
      pMVar26 = extraout_RDX;
      if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pMVar26 = extraout_RDX_00;
      }
      pUVar20 = Characters_HumanSetupMaterials__GetPartMaterial(pSVar19,0,pMVar26);
      if (*(int *)(TypeInfo_ClothFactory + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar21 = ClothFactory__GetCape((UnityEngine_GameObject_o *)reference,pSVar12,pUVar20,(MethodInfo *)0x0)
      ;
      pUVar18[7].monitor = pUVar21;
      pSVar12 = (System_String_o *)il2cpp_runtime_helper_022b4080(&pUVar18[7].monitor,pUVar21);
      return pSVar12;
    }
  }
  pSVar11 = (System_String_c *)0x0;
  il2cpp_runtime_helper_022b2c90();
  ppSVar30 = (System_String_o **)pSVar11;
  if (g_data_057adebc == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    ppSVar30 = &"character_cape_0";
    il2cpp_runtime_helper_023445d0();
    g_data_057adebc = '\x01';
  }
  pcVar3 = (pSVar11->_1).name;
  if (((pcVar3 != (char *)0x0) && (lVar15 = *(long *)(pcVar3 + 0x1c8), lVar15 != 0)) &&
     (lVar15 = *(long *)(lVar15 + 0x70), lVar15 != 0)) {
    if (*(int *)(lVar15 + 0x14) == 0) {
      return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    pSVar12 = System_String__Concat_3ae5ba0
                        ((System_String_o *)(pSVar11->_1).namespaze,"character_cape_0",(MethodInfo *)0x0);
    return pSVar12;
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar11 = (System_String_c *)ppSVar30;
  if (g_data_057adec3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&"Brand/aottg_hero_brand_g");
    il2cpp_runtime_helper_023445d0(&"Brand/aottg_hero_brand_sc");
    il2cpp_runtime_helper_023445d0(&"Brand/aottg_hero_brand_mp");
    pSVar11 = (System_String_c *)&"Brand/aottg_hero_brand_ts";
    il2cpp_runtime_helper_023445d0();
    g_data_057adec3 = '\x01';
  }
  pcVar3 = (((System_String_c *)ppSVar30)->_1).name;
  if (((pcVar3 != (char *)0x0) && (lVar15 = *(long *)(pcVar3 + 0x1c8), lVar15 != 0)) &&
     (lVar15 = *(long *)(lVar15 + 0x78), lVar15 != 0)) {
    uVar22 = (ulong)*(int *)(lVar15 + 0x14);
    ppuVar23 = &g_data_0524f380 + uVar22;
    if (3 < uVar22) {
      ppuVar23 = (undefined **)(g_data_057b9c00 + 0xb8);
    }
    return *(System_String_o **)*ppuVar23;
  }
  il2cpp_runtime_helper_022b2c90();
  ppSVar32 = (System_String_c **)pSVar11;
  if (g_data_057adeba == '\0') {
    ppSVar32 = &"Texture";
    il2cpp_runtime_helper_023445d0();
    g_data_057adeba = '\x01';
  }
  pcVar3 = (pSVar11->_1).name;
  if (((pcVar3 != (char *)0x0) &&
      (ppSVar32 = *(System_String_c ***)(pcVar3 + 0x1e0),
      (System_String_c *)ppSVar32 != (System_String_c *)0x0)) &&
     (pvVar5 = (((System_String_c *)ppSVar32)->_1).image, pSVar28 = "Texture",
     plVar29 = (long *)(**(code **)((long)pvVar5 + 0x1a8))
                                 (ppSVar32,"Texture",*(undefined8 *)((long)pvVar5 + 0x1b0)),
     plVar29 != (long *)0x0)) {
    pSVar12 = (System_String_o *)(**(code **)(*plVar29 + 0x1c8))(plVar29,*(undefined8 *)(*plVar29 + 0x1d0));
    bVar8 = System_String__op_Equality
                      (pSVar12,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      pSVar12 = System_String__Concat_3ae5ba0
                          (*(System_String_o **)&(pSVar11->_1).byval_arg.bits,pSVar12,(MethodInfo *)0x0);
      return pSVar12;
    }
    return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  il2cpp_runtime_helper_022b2c90();
  str1 = ppSVar32;
  if (g_data_057adec5 == '\0') {
    str1 = &"Texture";
    il2cpp_runtime_helper_023445d0();
    g_data_057adec5 = '\x01';
  }
  pcVar3 = (((System_String_c *)ppSVar32)->_1).name;
  if (((pcVar3 != (char *)0x0) &&
      (str1 = *(System_String_c ***)(pcVar3 + 0x1e0), (System_String_c *)str1 != (System_String_c *)0x0)) &&
     (pvVar5 = (((System_String_c *)str1)->_1).image, pSVar28 = "Texture",
     plVar29 = (long *)(**(code **)((long)pvVar5 + 0x1a8))
                                 (str1,"Texture",*(undefined8 *)((long)pvVar5 + 0x1b0)),
     plVar29 != (long *)0x0)) {
    vtableDispatch = *(code **)(*plVar29 + 0x1c8);
    pSVar12 = (System_String_o *)
              (*vtableDispatch)(plVar29,*(undefined8 *)(*plVar29 + 0x1d0),vtableDispatch);
    return pSVar12;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adea8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Material_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupMaterials);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Material_InstantiateAsset_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
    il2cpp_runtime_helper_023445d0(&"Human/Parts/Hairs/Textures/");
    il2cpp_runtime_helper_023445d0(&"Human/Parts/Hairs/Materials/HumanHairMat");
    il2cpp_runtime_helper_023445d0(&"Tex");
    g_data_057adea8 = '\x01';
    if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) != 0) goto label_042efb9d;
label_042efc58:
    il2cpp_runtime_helper_02337ed0();
    pSVar33 = (System_Collections_Generic_Dictionary_object__object__o *)**(long **)(TypeInfo_HumanSetupMaterials + 0xb8);
    if (pSVar33 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_042efdd6;
label_042efc74:
    pSVar28 = (System_String_c *)str1;
    bVar8 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar33,(Il2CppObject *)str1,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar8 != '\0') {
label_042efd96:
      if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_HumanSetupMaterials + 0xb8) !=
          (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        pSVar12 = (System_String_o *)
                  System_Collections_Generic_Dictionary_object__object___get_Item
                            ((System_Collections_Generic_Dictionary_object__object__o *)
                             **(undefined8 **)(TypeInfo_HumanSetupMaterials + 0xb8),(Il2CppObject *)str1,MethodInfo_Material_get_Item);
        return pSVar12;
      }
      goto label_042efdd6;
    }
    if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar12 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar20 = (UnityEngine_Material_o *)
              ApplicationManagers_ResourceManager__InstantiateAsset_object_
                        (pSVar12,"Human/Parts/Hairs/Materials/HumanHairMat",1,MethodInfo_Material_InstantiateAsset_Material);
    pSVar12 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
    pSVar28 = (System_String_c *)
              System_String__Concat_3af7150
                        ("Human/Parts/Hairs/Textures/",(System_String_o *)str1,"Tex",(MethodInfo *)0x0);
    pSVar11 = (System_String_c *)
              ApplicationManagers_ResourceManager__LoadAsset
                        (pSVar12,(System_String_o *)pSVar28,0,(MethodInfo *)0x0);
    if ((pSVar11 == (System_String_c *)0x0) || (pSVar28 = TypeInfo_Texture2D, (pSVar11->_1).image == TypeInfo_Texture2D))
    {
      if (pUVar20 != (UnityEngine_Material_o *)0x0) {
        UnityEngine_Material__set_mainTexture(pUVar20,(UnityEngine_Texture_o *)pSVar11,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar28 = pSVar11;
        if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_HumanSetupMaterials + 0xb8)
            != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          pSVar28 = (System_String_c *)str1;
          System_Collections_Generic_Dictionary_object__object___set_Item
                    ((System_Collections_Generic_Dictionary_object__object__o *)
                     **(undefined8 **)(TypeInfo_HumanSetupMaterials + 0xb8),(Il2CppObject *)str1,(Il2CppObject *)pUVar20,
                     MethodInfo_Void_set_Item);
          goto label_042efd96;
        }
      }
      goto label_042efdd6;
    }
  }
  else {
    if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) goto label_042efc58;
label_042efb9d:
    pSVar33 = (System_Collections_Generic_Dictionary_object__object__o *)**(long **)(TypeInfo_HumanSetupMaterials + 0xb8);
    if (pSVar33 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_042efc74;
label_042efdd6:
    pSVar11 = (System_String_c *)il2cpp_runtime_helper_022b2c90();
  }
  il2cpp_runtime_helper_022b2fd0();
  ppSVar32 = (System_String_c **)pSVar11;
  if (g_data_057adebb == '\0') {
    ppSVar32 = &"Cloth";
    il2cpp_runtime_helper_023445d0();
    g_data_057adebb = '\x01';
  }
  SVar6 = *(System_String_Fields *)&(pSVar11->_1).name;
  if ((SVar6 != (System_String_Fields)0x0) &&
     (ppSVar32 = *(System_String_c ***)((long)SVar6 + 0x1e0),
     (System_String_c *)ppSVar32 != (System_String_c *)0x0)) {
    pSVar31 = (((System_String_c *)ppSVar32)->_1).image;
    pSVar28 = "Cloth";
    cVar7 = (*(code *)pSVar31[1]._1.name)(ppSVar32,"Cloth",pSVar31[1]._1.namespaze);
    if (cVar7 == '\0') {
      return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    SVar6 = *(System_String_Fields *)&(pSVar11->_1).name;
    if ((SVar6 != (System_String_Fields)0x0) &&
       (ppSVar32 = *(System_String_c ***)((long)SVar6 + 0x1e0),
       (System_String_c *)ppSVar32 != (System_String_c *)0x0)) {
      pSVar12 = *(System_String_o **)&(pSVar11->_1).byval_arg.bits;
      pSVar11 = (((System_String_c *)ppSVar32)->_1).image;
      pSVar28 = "Cloth";
      plVar29 = (long *)(*(pSVar11->vtable)._7_CompareTo.methodPtr)
                                  (ppSVar32,"Cloth",(pSVar11->vtable)._7_CompareTo.method);
      if (plVar29 != (long *)0x0) {
        pSVar19 = (System_String_o *)
                  (**(code **)(*plVar29 + 0x1c8))(plVar29,*(undefined8 *)(*plVar29 + 0x1d0));
        pSVar12 = System_String__Concat_3ae5ba0(pSVar12,pSVar19,(MethodInfo *)0x0);
        return pSVar12;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar11 = (System_String_c *)ppSVar32;
  if (g_data_057ade93 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEffectPresets);
    il2cpp_runtime_helper_023445d0(&MethodInfo_PhotonView_GetComponent_PhotonView);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    pSVar11 = (System_String_c *)&MethodInfo_String_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ade93 = '\x01';
  }
  pIVar4 = (((System_String_c *)ppSVar32)->vtable)._9_GetTypeCode.methodPtr;
  if (pIVar4 == (Il2CppMethodPointer)0x0) {
    pSVar31 = (System_String_c *)0x0;
  }
  else {
    lVar15 = *(long *)(pIVar4 + 0xd0);
    if (lVar15 == 0) {
label_042f006e:
      pSVar12 = (System_String_o *)il2cpp_runtime_helper_022b2c90();
      if (g_data_057ade95 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEffectPresets);
        pSVar12 = (System_String_o *)il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
        g_data_057ade95 = '\x01';
      }
      if ((pSVar11->vtable)._9_GetTypeCode.methodPtr != (Il2CppMethodPointer)0x0) {
        pSVar31 = pSVar11;
        bVar8 = Characters_HumanSetup__CanUseCharacterEffects
                          ((Characters_HumanSetup_o *)pSVar11,(MethodInfo *)pSVar28);
        pSVar12 = (System_String_o *)CONCAT44(extraout_var_03,bVar8);
        if ((char)bVar8 != '\0') {
          pIVar4 = (pSVar11->vtable)._9_GetTypeCode.methodPtr;
          if ((pIVar4 != (Il2CppMethodPointer)0x0) && (lVar15 = *(long *)(pIVar4 + 0xd0), lVar15 != 0)) {
            pSVar31 = *(System_String_c **)(lVar15 + 0x18);
            if (*(int *)(TypeInfo_CharacterEffectPresets + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            iVar9 = PatreonEffects_CharacterEffectPresets__ParseOrDefault
                              ((System_String_o *)pSVar31,(MethodInfo *)0x0);
            pIVar4 = (pSVar11->vtable)._9_GetTypeCode.methodPtr;
            if ((pIVar4 != (Il2CppMethodPointer)0x0) && (lVar15 = *(long *)(pIVar4 + 0xe0), lVar15 != 0)) {
              type = PatreonEffects_CharacterEffectPresets__ParseOrDefault
                               (*(System_String_o **)(lVar15 + 0x18),(MethodInfo *)0x0);
              Characters_HumanSetup__ApplyCharacterEffectToPart
                        ((Characters_HumanSetup_o *)pSVar11,
                         *(UnityEngine_GameObject_o **)&(pSVar11->_2).interfaces_count,iVar9,1,in_R8);
              Characters_HumanSetup__ApplyCharacterEffectToPart
                        ((Characters_HumanSetup_o *)pSVar11,
                         *(UnityEngine_GameObject_o **)&(pSVar11->_2).naturalAligment,iVar9,1,in_R8);
              Characters_HumanSetup__ApplyCharacterEffectToPart
                        ((Characters_HumanSetup_o *)pSVar11,(UnityEngine_GameObject_o *)pSVar11->static_fields
                         ,type,0,in_R8);
              Characters_HumanSetup__ApplyCharacterEffectToPart
                        ((Characters_HumanSetup_o *)pSVar11,(UnityEngine_GameObject_o *)pSVar11->rgctx_data,
                         type,0,in_R8);
              return extraout_RAX_01;
            }
          }
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057adeb7 == '\0') {
            il2cpp_runtime_helper_023445d0(&"char_eyes");
            g_data_057adeb7 = '\x01';
          }
          pSVar12 = System_String__Concat_3ae5ba0
                              (*(System_String_o **)&(pSVar31->_1).this_arg.bits,"char_eyes",
                               (MethodInfo *)0x0);
          return pSVar12;
        }
      }
      return pSVar12;
    }
    pSVar31 = *(System_String_c **)(lVar15 + 0x18);
    if (*(int *)(TypeInfo_CharacterEffectPresets + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar28 = (System_String_c *)0x0;
    pSVar11 = pSVar31;
    iVar9 = PatreonEffects_CharacterEffectPresets__ParseOrDefault
                      ((System_String_o *)pSVar31,(MethodInfo *)0x0);
    if (iVar9 == 0) {
      pIVar4 = (((System_String_c *)ppSVar32)->vtable)._9_GetTypeCode.methodPtr;
      if ((pIVar4 == (Il2CppMethodPointer)0x0) || (lVar15 = *(long *)(pIVar4 + 0xe0), lVar15 == 0))
      goto label_042f006e;
      pSVar12 = *(System_String_o **)(lVar15 + 0x18);
      if (*(int *)(TypeInfo_CharacterEffectPresets + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar31 = (System_String_c *)0x0;
      iVar9 = PatreonEffects_CharacterEffectPresets__ParseOrDefault(pSVar12,(MethodInfo *)0x0);
      if (iVar9 == 0) goto label_042f0060;
    }
    if (*(int *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 8) == 4) {
label_042f002a:
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      player = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      bVar8 = PatreonEffects_PatreonHelper__HasCharacterEffectAccess(player,(MethodInfo *)0x0);
      return (System_String_o *)CONCAT44(extraout_var_02,bVar8);
    }
    x_02 = (System_String_c *)
           UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)ppSVar32,MethodInfo_PhotonView_GetComponent_PhotonView);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar28 = (System_String_c *)0x0;
    pSVar11 = x_02;
    bVar8 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    pSVar31 = (System_String_c *)CONCAT71((int7)((ulong)pSVar31 >> 8),1);
    if ((char)bVar8 != '\0') {
      if (x_02 == (System_String_c *)0x0) goto label_042f006e;
      if (*(char *)&(x_02->_1).typeMetadataHandle != '\0') goto label_042f002a;
    }
  }
label_042f0060:
  return (System_String_o *)((ulong)pSVar31 & 0xffffffff);
}


// Characters.HumanSetupTextures$$GetBrandTexture
// il2cpp: System_String_o* Characters_HumanSetupTextures__GetBrandTexture (Characters_HumanSetupTextures_o* __this, const MethodInfo* method);
// 0x42ef980

System_String_o *
Characters_HumanSetupTextures__GetBrandTexture(Characters_HumanSetupTextures_o *__this,MethodInfo *method)

{
  Characters_HumanSetup_o *pCVar1;
  Settings_HumanCustomSet_o *pSVar2;
  Settings_IntSetting_o *pSVar3;
  char *pcVar4;
  void *pvVar5;
  code *vtableDispatch;
  System_String_Fields SVar6;
  Il2CppMethodPointer pIVar7;
  long lVar8;
  char cVar9;
  bool_conflict bVar10;
  int32_t iVar11;
  int32_t type;
  ulong uVar12;
  undefined **ppuVar13;
  long *plVar14;
  System_String_o *pSVar15;
  UnityEngine_Material_o *__this_00;
  System_String_o *str1;
  System_String_c *x;
  Photon_Realtime_Player_o *player;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  System_String_o *extraout_RAX;
  System_String_c *pSVar16;
  System_String_c *pSVar17;
  System_String_c **ppSVar18;
  System_String_c **str1_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  MethodInfo *in_R8;
  
  pSVar17 = (System_String_c *)__this;
  if (g_data_057adec3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&"Brand/aottg_hero_brand_g");
    il2cpp_runtime_helper_023445d0(&"Brand/aottg_hero_brand_sc");
    il2cpp_runtime_helper_023445d0(&"Brand/aottg_hero_brand_mp");
    pSVar17 = (System_String_c *)&"Brand/aottg_hero_brand_ts";
    il2cpp_runtime_helper_023445d0();
    g_data_057adec3 = '\x01';
  }
  pCVar1 = (__this->fields)._setup;
  if (((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
      (pSVar2 = (pCVar1->fields).CustomSet, pSVar2 != (Settings_HumanCustomSet_o *)0x0)) &&
     (pSVar3 = (pSVar2->fields).Logo, pSVar3 != (Settings_IntSetting_o *)0x0)) {
    uVar12 = (ulong)(pSVar3->fields)._value;
    ppuVar13 = &g_data_0524f380 + uVar12;
    if (3 < uVar12) {
      ppuVar13 = (undefined **)(g_data_057b9c00 + 0xb8);
    }
    return *(System_String_o **)*ppuVar13;
  }
  il2cpp_runtime_helper_022b2c90();
  ppSVar18 = (System_String_c **)pSVar17;
  if (g_data_057adeba == '\0') {
    ppSVar18 = &"Texture";
    il2cpp_runtime_helper_023445d0();
    g_data_057adeba = '\x01';
  }
  pcVar4 = (pSVar17->_1).name;
  if (((pcVar4 != (char *)0x0) &&
      (ppSVar18 = *(System_String_c ***)(pcVar4 + 0x1e0),
      (System_String_c *)ppSVar18 != (System_String_c *)0x0)) &&
     (pvVar5 = (((System_String_c *)ppSVar18)->_1).image, method = (MethodInfo *)"Texture",
     plVar14 = (long *)(**(code **)((long)pvVar5 + 0x1a8))
                                 (ppSVar18,"Texture",*(undefined8 *)((long)pvVar5 + 0x1b0)),
     plVar14 != (long *)0x0)) {
    pSVar15 = (System_String_o *)(**(code **)(*plVar14 + 0x1c8))(plVar14,*(undefined8 *)(*plVar14 + 0x1d0));
    bVar10 = System_String__op_Equality
                       (pSVar15,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
    if ((char)bVar10 == '\0') {
      pSVar15 = System_String__Concat_3ae5ba0
                          (*(System_String_o **)&(pSVar17->_1).byval_arg.bits,pSVar15,(MethodInfo *)0x0);
      return pSVar15;
    }
    return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  il2cpp_runtime_helper_022b2c90();
  str1_00 = ppSVar18;
  if (g_data_057adec5 == '\0') {
    str1_00 = &"Texture";
    il2cpp_runtime_helper_023445d0();
    g_data_057adec5 = '\x01';
  }
  pcVar4 = (((System_String_c *)ppSVar18)->_1).name;
  if (((pcVar4 != (char *)0x0) &&
      (str1_00 = *(System_String_c ***)(pcVar4 + 0x1e0), (System_String_c *)str1_00 != (System_String_c *)0x0)
      ) && (pvVar5 = (((System_String_c *)str1_00)->_1).image, method = (MethodInfo *)"Texture",
           plVar14 = (long *)(**(code **)((long)pvVar5 + 0x1a8))
                                       (str1_00,"Texture",*(undefined8 *)((long)pvVar5 + 0x1b0)),
           plVar14 != (long *)0x0)) {
    vtableDispatch = *(code **)(*plVar14 + 0x1c8);
    pSVar15 = (System_String_o *)
              (*vtableDispatch)(plVar14,*(undefined8 *)(*plVar14 + 0x1d0),vtableDispatch);
    return pSVar15;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adea8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Material_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupMaterials);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Material_InstantiateAsset_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
    il2cpp_runtime_helper_023445d0(&"Human/Parts/Hairs/Textures/");
    il2cpp_runtime_helper_023445d0(&"Human/Parts/Hairs/Materials/HumanHairMat");
    il2cpp_runtime_helper_023445d0(&"Tex");
    g_data_057adea8 = '\x01';
    if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) != 0) goto label_042efb9d;
label_042efc58:
    il2cpp_runtime_helper_02337ed0();
    __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)**(long **)(TypeInfo_HumanSetupMaterials + 0xb8);
    if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_042efdd6;
label_042efc74:
    method = (MethodInfo *)str1_00;
    bVar10 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                       (__this_01,(Il2CppObject *)str1_00,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar10 != '\0') {
label_042efd96:
      if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_HumanSetupMaterials + 0xb8) !=
          (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        pSVar15 = (System_String_o *)
                  System_Collections_Generic_Dictionary_object__object___get_Item
                            ((System_Collections_Generic_Dictionary_object__object__o *)
                             **(undefined8 **)(TypeInfo_HumanSetupMaterials + 0xb8),(Il2CppObject *)str1_00,MethodInfo_Material_get_Item);
        return pSVar15;
      }
      goto label_042efdd6;
    }
    if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar15 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_00 = (UnityEngine_Material_o *)
                ApplicationManagers_ResourceManager__InstantiateAsset_object_
                          (pSVar15,"Human/Parts/Hairs/Materials/HumanHairMat",1,MethodInfo_Material_InstantiateAsset_Material);
    pSVar15 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
    method = (MethodInfo *)
             System_String__Concat_3af7150
                       ("Human/Parts/Hairs/Textures/",(System_String_o *)str1_00,"Tex",(MethodInfo *)0x0);
    pSVar17 = (System_String_c *)
              ApplicationManagers_ResourceManager__LoadAsset
                        (pSVar15,(System_String_o *)method,0,(MethodInfo *)0x0);
    if ((pSVar17 == (System_String_c *)0x0) ||
       (method = (MethodInfo *)TypeInfo_Texture2D, (pSVar17->_1).image == TypeInfo_Texture2D)) {
      if (__this_00 != (UnityEngine_Material_o *)0x0) {
        UnityEngine_Material__set_mainTexture(__this_00,(UnityEngine_Texture_o *)pSVar17,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        method = (MethodInfo *)pSVar17;
        if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_HumanSetupMaterials + 0xb8)
            != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          method = (MethodInfo *)str1_00;
          System_Collections_Generic_Dictionary_object__object___set_Item
                    ((System_Collections_Generic_Dictionary_object__object__o *)
                     **(undefined8 **)(TypeInfo_HumanSetupMaterials + 0xb8),(Il2CppObject *)str1_00,(Il2CppObject *)__this_00,
                     MethodInfo_Void_set_Item);
          goto label_042efd96;
        }
      }
      goto label_042efdd6;
    }
  }
  else {
    if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) goto label_042efc58;
label_042efb9d:
    __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)**(long **)(TypeInfo_HumanSetupMaterials + 0xb8);
    if (__this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_042efc74;
label_042efdd6:
    pSVar17 = (System_String_c *)il2cpp_runtime_helper_022b2c90();
  }
  il2cpp_runtime_helper_022b2fd0();
  ppSVar18 = (System_String_c **)pSVar17;
  if (g_data_057adebb == '\0') {
    ppSVar18 = &"Cloth";
    il2cpp_runtime_helper_023445d0();
    g_data_057adebb = '\x01';
  }
  SVar6 = *(System_String_Fields *)&(pSVar17->_1).name;
  if ((SVar6 != (System_String_Fields)0x0) &&
     (ppSVar18 = *(System_String_c ***)((long)SVar6 + 0x1e0),
     (System_String_c *)ppSVar18 != (System_String_c *)0x0)) {
    pSVar16 = (((System_String_c *)ppSVar18)->_1).image;
    method = (MethodInfo *)"Cloth";
    cVar9 = (*(code *)pSVar16[1]._1.name)(ppSVar18,"Cloth",pSVar16[1]._1.namespaze);
    if (cVar9 == '\0') {
      return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    SVar6 = *(System_String_Fields *)&(pSVar17->_1).name;
    if ((SVar6 != (System_String_Fields)0x0) &&
       (ppSVar18 = *(System_String_c ***)((long)SVar6 + 0x1e0),
       (System_String_c *)ppSVar18 != (System_String_c *)0x0)) {
      pSVar15 = *(System_String_o **)&(pSVar17->_1).byval_arg.bits;
      pSVar17 = (((System_String_c *)ppSVar18)->_1).image;
      method = (MethodInfo *)"Cloth";
      plVar14 = (long *)(*(pSVar17->vtable)._7_CompareTo.methodPtr)
                                  (ppSVar18,"Cloth",(pSVar17->vtable)._7_CompareTo.method);
      if (plVar14 != (long *)0x0) {
        str1 = (System_String_o *)(**(code **)(*plVar14 + 0x1c8))(plVar14,*(undefined8 *)(*plVar14 + 0x1d0));
        pSVar15 = System_String__Concat_3ae5ba0(pSVar15,str1,(MethodInfo *)0x0);
        return pSVar15;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar17 = (System_String_c *)ppSVar18;
  if (g_data_057ade93 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEffectPresets);
    il2cpp_runtime_helper_023445d0(&MethodInfo_PhotonView_GetComponent_PhotonView);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    pSVar17 = (System_String_c *)&MethodInfo_String_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ade93 = '\x01';
  }
  pIVar7 = (((System_String_c *)ppSVar18)->vtable)._9_GetTypeCode.methodPtr;
  if (pIVar7 == (Il2CppMethodPointer)0x0) {
    pSVar16 = (System_String_c *)0x0;
  }
  else {
    lVar8 = *(long *)(pIVar7 + 0xd0);
    if (lVar8 == 0) {
label_042f006e:
      pSVar15 = (System_String_o *)il2cpp_runtime_helper_022b2c90();
      if (g_data_057ade95 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEffectPresets);
        pSVar15 = (System_String_o *)il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
        g_data_057ade95 = '\x01';
      }
      if ((pSVar17->vtable)._9_GetTypeCode.methodPtr != (Il2CppMethodPointer)0x0) {
        pSVar16 = pSVar17;
        bVar10 = Characters_HumanSetup__CanUseCharacterEffects((Characters_HumanSetup_o *)pSVar17,method);
        pSVar15 = (System_String_o *)CONCAT44(extraout_var_00,bVar10);
        if ((char)bVar10 != '\0') {
          pIVar7 = (pSVar17->vtable)._9_GetTypeCode.methodPtr;
          if ((pIVar7 != (Il2CppMethodPointer)0x0) && (lVar8 = *(long *)(pIVar7 + 0xd0), lVar8 != 0)) {
            pSVar16 = *(System_String_c **)(lVar8 + 0x18);
            if (*(int *)(TypeInfo_CharacterEffectPresets + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            iVar11 = PatreonEffects_CharacterEffectPresets__ParseOrDefault
                               ((System_String_o *)pSVar16,(MethodInfo *)0x0);
            pIVar7 = (pSVar17->vtable)._9_GetTypeCode.methodPtr;
            if ((pIVar7 != (Il2CppMethodPointer)0x0) && (lVar8 = *(long *)(pIVar7 + 0xe0), lVar8 != 0)) {
              type = PatreonEffects_CharacterEffectPresets__ParseOrDefault
                               (*(System_String_o **)(lVar8 + 0x18),(MethodInfo *)0x0);
              Characters_HumanSetup__ApplyCharacterEffectToPart
                        ((Characters_HumanSetup_o *)pSVar17,
                         *(UnityEngine_GameObject_o **)&(pSVar17->_2).interfaces_count,iVar11,1,in_R8);
              Characters_HumanSetup__ApplyCharacterEffectToPart
                        ((Characters_HumanSetup_o *)pSVar17,
                         *(UnityEngine_GameObject_o **)&(pSVar17->_2).naturalAligment,iVar11,1,in_R8);
              Characters_HumanSetup__ApplyCharacterEffectToPart
                        ((Characters_HumanSetup_o *)pSVar17,(UnityEngine_GameObject_o *)pSVar17->static_fields
                         ,type,0,in_R8);
              Characters_HumanSetup__ApplyCharacterEffectToPart
                        ((Characters_HumanSetup_o *)pSVar17,(UnityEngine_GameObject_o *)pSVar17->rgctx_data,
                         type,0,in_R8);
              return extraout_RAX;
            }
          }
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057adeb7 == '\0') {
            il2cpp_runtime_helper_023445d0(&"char_eyes");
            g_data_057adeb7 = '\x01';
          }
          pSVar15 = System_String__Concat_3ae5ba0
                              (*(System_String_o **)&(pSVar16->_1).this_arg.bits,"char_eyes",
                               (MethodInfo *)0x0);
          return pSVar15;
        }
      }
      return pSVar15;
    }
    pSVar16 = *(System_String_c **)(lVar8 + 0x18);
    if (*(int *)(TypeInfo_CharacterEffectPresets + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method = (MethodInfo *)0x0;
    pSVar17 = pSVar16;
    iVar11 = PatreonEffects_CharacterEffectPresets__ParseOrDefault
                       ((System_String_o *)pSVar16,(MethodInfo *)0x0);
    if (iVar11 == 0) {
      pIVar7 = (((System_String_c *)ppSVar18)->vtable)._9_GetTypeCode.methodPtr;
      if ((pIVar7 == (Il2CppMethodPointer)0x0) || (lVar8 = *(long *)(pIVar7 + 0xe0), lVar8 == 0))
      goto label_042f006e;
      pSVar15 = *(System_String_o **)(lVar8 + 0x18);
      if (*(int *)(TypeInfo_CharacterEffectPresets + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar16 = (System_String_c *)0x0;
      iVar11 = PatreonEffects_CharacterEffectPresets__ParseOrDefault(pSVar15,(MethodInfo *)0x0);
      if (iVar11 == 0) goto label_042f0060;
    }
    if (*(int *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 8) == 4) {
label_042f002a:
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      player = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      bVar10 = PatreonEffects_PatreonHelper__HasCharacterEffectAccess(player,(MethodInfo *)0x0);
      return (System_String_o *)CONCAT44(extraout_var,bVar10);
    }
    x = (System_String_c *)
        UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)ppSVar18,MethodInfo_PhotonView_GetComponent_PhotonView);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method = (MethodInfo *)0x0;
    pSVar17 = x;
    bVar10 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    pSVar16 = (System_String_c *)CONCAT71((int7)((ulong)pSVar16 >> 8),1);
    if ((char)bVar10 != '\0') {
      if (x == (System_String_c *)0x0) goto label_042f006e;
      if (*(char *)&(x->_1).typeMetadataHandle != '\0') goto label_042f002a;
    }
  }
label_042f0060:
  return (System_String_o *)((ulong)pSVar16 & 0xffffffff);
}


// Characters.HumanSetupTextures$$GetSkinTexture
// il2cpp: System_String_o* Characters_HumanSetupTextures__GetSkinTexture (Characters_HumanSetupTextures_o* __this, const MethodInfo* method);
// 0x42f0520

System_String_o *
Characters_HumanSetupTextures__GetSkinTexture(Characters_HumanSetupTextures_o *__this,MethodInfo *method)

{
  int iVar1;
  Characters_HumanSetup_o *pCVar2;
  System_String_c *str0;
  undefined8 uVar3;
  char cVar4;
  bool_conflict bVar5;
  System_String_o *__this_00;
  MethodInfo_255A0F0 *name;
  System_String_Fields SVar6;
  undefined8 *puVar7;
  System_String_Fields SVar8;
  System_String_o *pSVar9;
  UnityEngine_Transform_array *value;
  System_String_Fields SVar10;
  System_String_Fields __this_01;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_Transform_o *pUVar11;
  System_String_Fields __this_03;
  UnityEngine_Transform_o *value_00;
  System_String_o *extraout_RAX;
  undefined8 *puVar12;
  System_String_o *unaff_RBP;
  undefined4 uVar13;
  MethodInfo_255A0F0 *__this_04;
  System_String_o *pSVar14;
  System_String_Fields SVar15;
  undefined4 in_XMM1_Da;
  undefined4 in_XMM1_Db;
  undefined1 auVar16 [16];
  UnityEngine_Color_o value_01;
  undefined4 uStack_ac;
  System_String_Fields SStack_a8;
  undefined8 uStack_a0;
  System_String_Fields SStack_98;
  System_String_o *pSStack_90;
  undefined8 uStack_88;
  System_String_Fields SStack_80;
  
  pSVar14 = (System_String_o *)__this;
  if (g_data_057adec4 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Skin/skin_blades");
    il2cpp_runtime_helper_023445d0(&"Skin/skin_TS");
    pSVar14 = (System_String_o *)&"Skin/skin_AHSS";
    il2cpp_runtime_helper_023445d0();
    g_data_057adec4 = '\x01';
  }
  pCVar2 = (__this->fields)._setup;
  if (pCVar2 != (Characters_HumanSetup_o *)0x0) {
    iVar1 = (pCVar2->fields).Weapon;
    if (iVar1 != 1) {
      if (iVar1 == 2) {
        return "Skin/skin_TS";
      }
      if (iVar1 != 3) {
        return "Skin/skin_blades";
      }
    }
    return "Skin/skin_AHSS";
  }
  uVar3 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057adeab == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Material_InstantiateAsset_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
    il2cpp_runtime_helper_023445d0(&"Human/Parts/Costumes/Textures/");
    il2cpp_runtime_helper_023445d0(&"Human/Parts/Costumes/Materials/HumanSkinMat");
    il2cpp_runtime_helper_023445d0(&"_skin_color");
    il2cpp_runtime_helper_023445d0(&"_weapon_tex");
    g_data_057adeab = '\x01';
  }
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar9 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = (System_String_o *)
              ApplicationManagers_ResourceManager__InstantiateAsset_object_
                        (pSVar9,"Human/Parts/Costumes/Materials/HumanSkinMat",1,MethodInfo_Material_InstantiateAsset_Material);
  pSVar9 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
  name = (MethodInfo_255A0F0 *)System_String__Concat_3ae5ba0("Human/Parts/Costumes/Textures/",pSVar14,(MethodInfo *)0x0);
  SVar6 = (System_String_Fields)
          ApplicationManagers_ResourceManager__LoadAsset(pSVar9,(System_String_o *)name,0,(MethodInfo *)0x0);
  if ((SVar6 == (System_String_Fields)0x0) ||
     (name = TypeInfo_Texture2D, *(MethodInfo_255A0F0 **)SVar6 == TypeInfo_Texture2D)) {
    if (__this_00 != (System_String_o *)0x0) {
      UnityEngine_Material__SetTexture
                ((UnityEngine_Material_o *)__this_00,"_weapon_tex",(UnityEngine_Texture_o *)SVar6,
                 (MethodInfo *)0x0);
      value_01.fields.a = (float)in_XMM1_Db;
      value_01.fields.b = (float)in_XMM1_Da;
      value_01.fields.r = (float)(int)uVar3;
      value_01.fields.g = (float)(int)((ulong)uVar3 >> 0x20);
      UnityEngine_Material__SetColor
                ((UnityEngine_Material_o *)__this_00,"_skin_color",value_01,(MethodInfo *)0x0);
      return __this_00;
    }
    SVar6 = (System_String_Fields)il2cpp_runtime_helper_022b2c90();
  }
  il2cpp_runtime_helper_022b2fd0();
  cVar4 = (char)name;
  SVar15 = SVar6;
  if (g_data_057adeb0 == '\0') {
    il2cpp_runtime_helper_023445d0(&"_arm_L");
    il2cpp_runtime_helper_023445d0(&"_uniform");
    il2cpp_runtime_helper_023445d0(&"_arm_R");
    il2cpp_runtime_helper_023445d0(&"Type");
    il2cpp_runtime_helper_023445d0(&"_casual_arm_AH_R");
    il2cpp_runtime_helper_023445d0(&"_casual_arm_AH_L");
    il2cpp_runtime_helper_023445d0(&"player");
    il2cpp_runtime_helper_023445d0(&"Uniform");
    SVar15 = (System_String_Fields)&"_casual";
    il2cpp_runtime_helper_023445d0();
    g_data_057adeb0 = '\x01';
  }
  pSVar14 = "player";
  SVar8 = *(System_String_Fields *)((long)SVar6 + 0x10);
  if (SVar8 != (System_String_Fields)0x0) {
    if ((*(uint *)((long)SVar8 + 0x1d0) | 2) == 3) {
      puVar7 = &"_casual_arm_AH_R";
      puVar12 = &"_casual_arm_AH_L";
label_042f086b:
      if (cVar4 == '\0') {
        puVar12 = puVar7;
      }
      pSVar14 = System_String__Concat_3af7150
                          ((System_String_o *)((System_String_o *)((long)SVar6 + 0x18))->klass,pSVar14,
                           (System_String_o *)*puVar12,(MethodInfo *)0x0);
      return pSVar14;
    }
    SVar15 = *(System_String_Fields *)((long)SVar8 + 0x1d8);
    unaff_RBP = pSVar14;
    if ((SVar15 != (System_String_Fields)0x0) &&
       (name = "Type",
       SVar8 = (System_String_Fields)
               (**(code **)(*(long *)SVar15 + 0x1a8))
                         (SVar15,"Type",*(undefined8 *)(*(long *)SVar15 + 0x1b0)),
       SVar8 != (System_String_Fields)0x0)) {
      name = *(MethodInfo_255A0F0 **)(*(long *)SVar8 + 0x1d0);
      pSVar9 = (System_String_o *)(**(code **)(*(long *)SVar8 + 0x1c8))();
      SVar15 = SVar8;
      if (pSVar9 != (System_String_o *)0x0) {
        bVar5 = System_String__StartsWith(pSVar9,"Uniform",(MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
          puVar12 = &"_casual";
        }
        else {
          puVar12 = &"_uniform";
        }
        pSVar14 = System_String__Concat_3ae5ba0(pSVar14,(System_String_o *)*puVar12,(MethodInfo *)0x0);
        puVar7 = &"_arm_R";
        puVar12 = (undefined8 *)&"_arm_L";
        goto label_042f086b;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  __this_04 = name;
  SStack_80 = SVar6;
  if (g_data_057adea1 == '\0') {
    uStack_88 = 0x42f08b4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_SkinnedMeshRenderer_AddComponent_SkinnedMeshRenderer);
    uStack_88 = 0x42f08c0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRenderer);
    uStack_88 = 0x42f08cc;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    uStack_88 = 0x42f08d8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    uStack_88 = 0x42f08e4;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    uStack_88 = 0x42f08f0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    g_data_057adea1 = '\x01';
  }
  SVar6._stringLength = 0;
  SVar6._firstChar = 0;
  SVar6._6_2_ = 0;
  if (*(System_String_Fields *)((long)SVar15 + 0x160) != (System_String_Fields)0x0) {
    uStack_88 = 0x42f0917;
    SVar8 = (System_String_Fields)
            UnityEngine_GameObject__GetComponent_object_
                      ((UnityEngine_GameObject_o *)*(System_String_Fields *)((long)SVar15 + 0x160),
                       MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRenderer);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      uStack_88 = 0x42f0932;
      il2cpp_runtime_helper_02337ed0();
    }
    __this_04 = (MethodInfo_255A0F0 *)0x0;
    uStack_88 = 0x42f093e;
    SVar6 = SVar8;
    bVar5 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)SVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      SVar6 = *(System_String_Fields *)((long)SVar15 + 0x160);
      if (SVar6 == (System_String_Fields)0x0) goto label_042f0b43;
      uStack_88 = 0x42f0961;
      __this_04 = MethodInfo_SkinnedMeshRenderer_AddComponent_SkinnedMeshRenderer;
      SVar8 = (System_String_Fields)
              UnityEngine_GameObject__AddComponent_object_
                        ((UnityEngine_GameObject_o *)SVar6,(MethodInfo_255A020 *)MethodInfo_SkinnedMeshRenderer_AddComponent_SkinnedMeshRenderer);
    }
    if (SVar8 != (System_String_Fields)0x0) {
      uStack_88 = 0x42f0977;
      value = UnityEngine_SkinnedMeshRenderer__get_bones
                        ((UnityEngine_SkinnedMeshRenderer_o *)SVar8,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
        uStack_88 = 0x42f0992;
        il2cpp_runtime_helper_02337ed0();
      }
      SVar15 = *(System_String_Fields *)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        uStack_88 = 0x42f09b8;
        il2cpp_runtime_helper_02337ed0();
      }
      uStack_88 = 0x42f09d2;
      SVar6 = SVar15;
      SVar10 = (System_String_Fields)
               ApplicationManagers_ResourceManager__InstantiateAsset_object_
                         ((System_String_o *)SVar15,(System_String_o *)name,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
      __this_04 = name;
      if (SVar10 != (System_String_Fields)0x0) {
        uStack_88 = 0x42f09e7;
        __this_04 = MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRenderer;
        __this_01 = (System_String_Fields)
                    UnityEngine_GameObject__GetComponent_object_
                              ((UnityEngine_GameObject_o *)SVar10,MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRenderer);
        SVar6 = SVar10;
        if (__this_01 != (System_String_Fields)0x0) {
          __this_04 = (MethodInfo_255A0F0 *)0x0;
          uStack_88 = 0x42f09fd;
          SVar6 = __this_01;
          __this_02 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
          if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
            uStack_88 = 0x42f0a10;
            pUVar11 = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0);
            __this_04 = (MethodInfo_255A0F0 *)0x0;
            uStack_88 = 0x42f0a1d;
            SVar6 = SVar8;
            SVar10 = (System_String_Fields)
                     UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SVar8,(MethodInfo *)0x0)
            ;
            if (SVar10 != (System_String_Fields)0x0) {
              __this_04 = (MethodInfo_255A0F0 *)0x0;
              uStack_88 = 0x42f0a30;
              __this_03 = (System_String_Fields)
                          UnityEngine_GameObject__get_transform
                                    ((UnityEngine_GameObject_o *)SVar10,(MethodInfo *)0x0);
              SVar6 = SVar10;
              if (__this_03 != (System_String_Fields)0x0) {
                __this_04 = (MethodInfo_255A0F0 *)0x0;
                uStack_88 = 0x42f0a43;
                value_00 = UnityEngine_Transform__get_parent
                                     ((UnityEngine_Transform_o *)__this_03,(MethodInfo *)0x0);
                SVar6 = __this_03;
                if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
                  uStack_88 = 0x42f0a59;
                  UnityEngine_Transform__set_parent(pUVar11,value_00,(MethodInfo *)0x0);
                  __this_04 = (MethodInfo_255A0F0 *)0x0;
                  uStack_88 = 0x42f0a63;
                  SVar6 = __this_01;
                  pUVar11 = UnityEngine_Component__get_transform
                                      ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
                  if (g_data_057a65d5 == '\0') {
                    SVar6 = (System_String_Fields)&TypeInfo_Vector3;
                    uStack_88 = 0x42f0a7b;
                    il2cpp_runtime_helper_023445d0();
                    g_data_057a65d5 = '\x01';
                  }
                  SVar15._stringLength = 0;
                  SVar15._firstChar = 0;
                  SVar15._6_2_ = 0;
                  if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
                    uStack_88 = 0x42f0ab0;
                    UnityEngine_Transform__set_localPosition
                              (pUVar11,(UnityEngine_Vector3_o)
                                       **(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8),
                               (MethodInfo *)0x0);
                    __this_04 = (MethodInfo_255A0F0 *)0x0;
                    uStack_88 = 0x42f0aba;
                    SVar6 = __this_01;
                    pUVar11 = UnityEngine_Component__get_transform
                                        ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
                    if (g_data_057a6932 == '\0') {
                      SVar6 = (System_String_Fields)&TypeInfo_Vector3;
                      uStack_88 = 0x42f0ad2;
                      il2cpp_runtime_helper_023445d0();
                      g_data_057a6932 = '\x01';
                    }
                    SVar15._stringLength = 0;
                    SVar15._firstChar = 0;
                    SVar15._6_2_ = 0;
                    if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
                      uStack_88 = 0x42f0afd;
                      UnityEngine_Transform__set_localScale
                                (pUVar11,(UnityEngine_Vector3_o)
                                         *(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc)
                                 ,(MethodInfo *)0x0);
                      uStack_88 = 0x42f0b0a;
                      UnityEngine_SkinnedMeshRenderer__set_bones
                                ((UnityEngine_SkinnedMeshRenderer_o *)__this_01,value,(MethodInfo *)0x0);
                      uStack_88 = 0x42f0b19;
                      UnityEngine_SkinnedMeshRenderer__set_quality
                                ((UnityEngine_SkinnedMeshRenderer_o *)__this_01,4,(MethodInfo *)0x0);
                      uStack_88 = 0x42f0b23;
                      pUVar11 = UnityEngine_SkinnedMeshRenderer__get_rootBone
                                          ((UnityEngine_SkinnedMeshRenderer_o *)SVar8,(MethodInfo *)0x0);
                      uStack_88 = 0x42f0b30;
                      UnityEngine_SkinnedMeshRenderer__set_rootBone
                                ((UnityEngine_SkinnedMeshRenderer_o *)__this_01,pUVar11,(MethodInfo *)0x0);
                      pSVar14 = (System_String_o *)
                                UnityEngine_Component__get_gameObject
                                          ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
                      return pSVar14;
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
label_042f0b43:
  uStack_88 = 0x42f0b48;
  auVar16 = il2cpp_runtime_helper_022b2c90();
  uStack_88 = auVar16._0_8_;
  if (__this_04 != (MethodInfo_255A0F0 *)0x0) {
    UnityEngine_Renderer__set_material((UnityEngine_Renderer_o *)__this_04,auVar16._8_8_,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  pSStack_90 = (System_String_o *)0x42f0b69;
  uStack_a0 = il2cpp_runtime_helper_022b2c90();
  uVar13 = SUB84(__this_04,0);
  SVar8 = SVar6;
  SStack_98 = SVar15;
  pSStack_90 = unaff_RBP;
  if (g_data_057adeaf == '\0') {
    SStack_a8._stringLength = 0x42f0b8d;
    SStack_a8._firstChar = 0;
    SStack_a8._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&"_ts");
    SStack_a8._stringLength = 0x42f0b99;
    SStack_a8._firstChar = 0;
    SStack_a8._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&"_empty");
    SStack_a8._stringLength = 0x42f0ba5;
    SStack_a8._firstChar = 0;
    SStack_a8._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&"character_hand_l");
    SStack_a8._stringLength = 0x42f0bb1;
    SStack_a8._firstChar = 0;
    SStack_a8._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&"character_hand_r");
    SStack_a8._stringLength = 0x42f0bbd;
    SStack_a8._firstChar = 0;
    SStack_a8._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&"_0");
    SVar8 = (System_String_Fields)&"_ah_0";
    SStack_a8._stringLength = 0x42f0bc9;
    SStack_a8._firstChar = 0;
    SStack_a8._6_2_ = 0;
    il2cpp_runtime_helper_023445d0();
    g_data_057adeaf = '\x01';
  }
  if ((char)__this_04 == '\0') {
    puVar12 = &"character_hand_r";
    SVar15 = *(System_String_Fields *)((long)SVar6 + 0x10);
  }
  else {
    puVar12 = &"character_hand_l";
    SVar15 = *(System_String_Fields *)((long)SVar6 + 0x10);
  }
  if (SVar15 == (System_String_Fields)0x0) {
    SStack_a8._stringLength = 0x42f0c3b;
    SStack_a8._firstChar = 0;
    SStack_a8._6_2_ = 0;
    il2cpp_runtime_helper_022b2c90();
    uStack_ac = uVar13;
    SStack_a8 = SVar6;
    if (g_data_057adeae == '\0') {
      il2cpp_runtime_helper_023445d0(&"character_leg_");
      g_data_057adeae = '\x01';
    }
    str0 = ((System_String_o *)((long)SVar8 + 0x18))->klass;
    pSVar14 = System_Int32__ToString((int32_t)&uStack_ac,(MethodInfo *)0x0);
    pSVar14 = System_String__Concat_3af7150((System_String_o *)str0,"character_leg_",pSVar14,(MethodInfo *)0x0);
    return pSVar14;
  }
  pSVar14 = (System_String_o *)*puVar12;
  if ((ulong)(long)*(int *)((long)SVar15 + 0x1d0) < 4) {
    SStack_a8._stringLength = 0x42f0c22;
    SStack_a8._firstChar = 0;
    SStack_a8._6_2_ = 0;
    pSVar14 = System_String__Concat_3ae5ba0
                        (pSVar14,*(System_String_o **)(&g_data_0524f3a0)[*(int *)((long)SVar15 + 0x1d0)],
                         (MethodInfo *)0x0);
  }
  pSVar14 = System_String__Concat_3ae5ba0
                      ((System_String_o *)((System_String_o *)((long)SVar6 + 0x18))->klass,pSVar14,
                       (MethodInfo *)0x0);
  return pSVar14;
}


// Characters.HumanSetupTextures$$GetHairTexture
// il2cpp: System_String_o* Characters_HumanSetupTextures__GetHairTexture (Characters_HumanSetupTextures_o* __this, const MethodInfo* method);
// 0x42efb00

System_String_o *
Characters_HumanSetupTextures__GetHairTexture(Characters_HumanSetupTextures_o *__this,MethodInfo *method)

{
  Characters_HumanSetup_o *pCVar1;
  void *pvVar2;
  code *vtableDispatch;
  System_String_Fields SVar3;
  Il2CppMethodPointer pIVar4;
  long lVar5;
  char cVar6;
  int32_t iVar7;
  bool_conflict bVar8;
  int32_t type;
  long *plVar9;
  System_String_o *pSVar10;
  UnityEngine_Material_o *__this_00;
  System_String_c *pSVar11;
  System_String_o *str1;
  System_String_c *x;
  Photon_Realtime_Player_o *player;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  System_String_o *extraout_RAX;
  System_String_c *pSVar12;
  System_String_c **ppSVar13;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  MethodInfo *in_R8;
  
  ppSVar13 = (System_String_c **)__this;
  if (g_data_057adec5 == '\0') {
    ppSVar13 = &"Texture";
    il2cpp_runtime_helper_023445d0();
    g_data_057adec5 = '\x01';
  }
  pCVar1 = (__this->fields)._setup;
  if (((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
      (ppSVar13 = (System_String_c **)(pCVar1->fields).CurrentHair,
      (System_String_c *)ppSVar13 != (System_String_c *)0x0)) &&
     (pvVar2 = (((System_String_c *)ppSVar13)->_1).image, method = (MethodInfo *)"Texture",
     plVar9 = (long *)(**(code **)((long)pvVar2 + 0x1a8))
                                (ppSVar13,"Texture",*(undefined8 *)((long)pvVar2 + 0x1b0)),
     plVar9 != (long *)0x0)) {
    vtableDispatch = *(code **)(*plVar9 + 0x1c8);
    pSVar10 = (System_String_o *)
              (*vtableDispatch)(plVar9,*(undefined8 *)(*plVar9 + 0x1d0),vtableDispatch);
    return pSVar10;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adea8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Material_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupMaterials);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Material_InstantiateAsset_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
    il2cpp_runtime_helper_023445d0(&"Human/Parts/Hairs/Textures/");
    il2cpp_runtime_helper_023445d0(&"Human/Parts/Hairs/Materials/HumanHairMat");
    il2cpp_runtime_helper_023445d0(&"Tex");
    g_data_057adea8 = '\x01';
    if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) != 0) goto label_042efb9d;
label_042efc58:
    il2cpp_runtime_helper_02337ed0();
    __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)**(long **)(TypeInfo_HumanSetupMaterials + 0xb8);
    if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_042efdd6;
label_042efc74:
    method = (MethodInfo *)ppSVar13;
    bVar8 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (__this_01,(Il2CppObject *)ppSVar13,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar8 != '\0') {
label_042efd96:
      if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_HumanSetupMaterials + 0xb8) !=
          (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        pSVar10 = (System_String_o *)
                  System_Collections_Generic_Dictionary_object__object___get_Item
                            ((System_Collections_Generic_Dictionary_object__object__o *)
                             **(undefined8 **)(TypeInfo_HumanSetupMaterials + 0xb8),(Il2CppObject *)ppSVar13,MethodInfo_Material_get_Item);
        return pSVar10;
      }
      goto label_042efdd6;
    }
    if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar10 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_00 = (UnityEngine_Material_o *)
                ApplicationManagers_ResourceManager__InstantiateAsset_object_
                          (pSVar10,"Human/Parts/Hairs/Materials/HumanHairMat",1,MethodInfo_Material_InstantiateAsset_Material);
    pSVar10 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
    method = (MethodInfo *)
             System_String__Concat_3af7150
                       ("Human/Parts/Hairs/Textures/",(System_String_o *)ppSVar13,"Tex",(MethodInfo *)0x0);
    pSVar11 = (System_String_c *)
              ApplicationManagers_ResourceManager__LoadAsset
                        (pSVar10,(System_String_o *)method,0,(MethodInfo *)0x0);
    if ((pSVar11 == (System_String_c *)0x0) ||
       (method = (MethodInfo *)TypeInfo_Texture2D, (pSVar11->_1).image == TypeInfo_Texture2D)) {
      if (__this_00 != (UnityEngine_Material_o *)0x0) {
        UnityEngine_Material__set_mainTexture(__this_00,(UnityEngine_Texture_o *)pSVar11,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        method = (MethodInfo *)pSVar11;
        if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_HumanSetupMaterials + 0xb8)
            != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          method = (MethodInfo *)ppSVar13;
          System_Collections_Generic_Dictionary_object__object___set_Item
                    ((System_Collections_Generic_Dictionary_object__object__o *)
                     **(undefined8 **)(TypeInfo_HumanSetupMaterials + 0xb8),(Il2CppObject *)ppSVar13,(Il2CppObject *)__this_00
                     ,MethodInfo_Void_set_Item);
          goto label_042efd96;
        }
      }
      goto label_042efdd6;
    }
  }
  else {
    if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) goto label_042efc58;
label_042efb9d:
    __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)**(long **)(TypeInfo_HumanSetupMaterials + 0xb8);
    if (__this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_042efc74;
label_042efdd6:
    pSVar11 = (System_String_c *)il2cpp_runtime_helper_022b2c90();
  }
  il2cpp_runtime_helper_022b2fd0();
  ppSVar13 = (System_String_c **)pSVar11;
  if (g_data_057adebb == '\0') {
    ppSVar13 = &"Cloth";
    il2cpp_runtime_helper_023445d0();
    g_data_057adebb = '\x01';
  }
  SVar3 = *(System_String_Fields *)&(pSVar11->_1).name;
  if ((SVar3 != (System_String_Fields)0x0) &&
     (ppSVar13 = *(System_String_c ***)((long)SVar3 + 0x1e0),
     (System_String_c *)ppSVar13 != (System_String_c *)0x0)) {
    pSVar12 = (((System_String_c *)ppSVar13)->_1).image;
    method = (MethodInfo *)"Cloth";
    cVar6 = (*(code *)pSVar12[1]._1.name)(ppSVar13,"Cloth",pSVar12[1]._1.namespaze);
    if (cVar6 == '\0') {
      return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    SVar3 = *(System_String_Fields *)&(pSVar11->_1).name;
    if ((SVar3 != (System_String_Fields)0x0) &&
       (ppSVar13 = *(System_String_c ***)((long)SVar3 + 0x1e0),
       (System_String_c *)ppSVar13 != (System_String_c *)0x0)) {
      pSVar10 = *(System_String_o **)&(pSVar11->_1).byval_arg.bits;
      pSVar11 = (((System_String_c *)ppSVar13)->_1).image;
      method = (MethodInfo *)"Cloth";
      plVar9 = (long *)(*(pSVar11->vtable)._7_CompareTo.methodPtr)
                                 (ppSVar13,"Cloth",(pSVar11->vtable)._7_CompareTo.method);
      if (plVar9 != (long *)0x0) {
        str1 = (System_String_o *)(**(code **)(*plVar9 + 0x1c8))(plVar9,*(undefined8 *)(*plVar9 + 0x1d0));
        pSVar10 = System_String__Concat_3ae5ba0(pSVar10,str1,(MethodInfo *)0x0);
        return pSVar10;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar11 = (System_String_c *)ppSVar13;
  if (g_data_057ade93 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEffectPresets);
    il2cpp_runtime_helper_023445d0(&MethodInfo_PhotonView_GetComponent_PhotonView);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    pSVar11 = (System_String_c *)&MethodInfo_String_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ade93 = '\x01';
  }
  pIVar4 = (((System_String_c *)ppSVar13)->vtable)._9_GetTypeCode.methodPtr;
  if (pIVar4 == (Il2CppMethodPointer)0x0) {
    pSVar12 = (System_String_c *)0x0;
  }
  else {
    lVar5 = *(long *)(pIVar4 + 0xd0);
    if (lVar5 == 0) {
label_042f006e:
      pSVar10 = (System_String_o *)il2cpp_runtime_helper_022b2c90();
      if (g_data_057ade95 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEffectPresets);
        pSVar10 = (System_String_o *)il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
        g_data_057ade95 = '\x01';
      }
      if ((pSVar11->vtable)._9_GetTypeCode.methodPtr != (Il2CppMethodPointer)0x0) {
        pSVar12 = pSVar11;
        bVar8 = Characters_HumanSetup__CanUseCharacterEffects((Characters_HumanSetup_o *)pSVar11,method);
        pSVar10 = (System_String_o *)CONCAT44(extraout_var_00,bVar8);
        if ((char)bVar8 != '\0') {
          pIVar4 = (pSVar11->vtable)._9_GetTypeCode.methodPtr;
          if ((pIVar4 != (Il2CppMethodPointer)0x0) && (lVar5 = *(long *)(pIVar4 + 0xd0), lVar5 != 0)) {
            pSVar12 = *(System_String_c **)(lVar5 + 0x18);
            if (*(int *)(TypeInfo_CharacterEffectPresets + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            iVar7 = PatreonEffects_CharacterEffectPresets__ParseOrDefault
                              ((System_String_o *)pSVar12,(MethodInfo *)0x0);
            pIVar4 = (pSVar11->vtable)._9_GetTypeCode.methodPtr;
            if ((pIVar4 != (Il2CppMethodPointer)0x0) && (lVar5 = *(long *)(pIVar4 + 0xe0), lVar5 != 0)) {
              type = PatreonEffects_CharacterEffectPresets__ParseOrDefault
                               (*(System_String_o **)(lVar5 + 0x18),(MethodInfo *)0x0);
              Characters_HumanSetup__ApplyCharacterEffectToPart
                        ((Characters_HumanSetup_o *)pSVar11,
                         *(UnityEngine_GameObject_o **)&(pSVar11->_2).interfaces_count,iVar7,1,in_R8);
              Characters_HumanSetup__ApplyCharacterEffectToPart
                        ((Characters_HumanSetup_o *)pSVar11,
                         *(UnityEngine_GameObject_o **)&(pSVar11->_2).naturalAligment,iVar7,1,in_R8);
              Characters_HumanSetup__ApplyCharacterEffectToPart
                        ((Characters_HumanSetup_o *)pSVar11,(UnityEngine_GameObject_o *)pSVar11->static_fields
                         ,type,0,in_R8);
              Characters_HumanSetup__ApplyCharacterEffectToPart
                        ((Characters_HumanSetup_o *)pSVar11,(UnityEngine_GameObject_o *)pSVar11->rgctx_data,
                         type,0,in_R8);
              return extraout_RAX;
            }
          }
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057adeb7 == '\0') {
            il2cpp_runtime_helper_023445d0(&"char_eyes");
            g_data_057adeb7 = '\x01';
          }
          pSVar10 = System_String__Concat_3ae5ba0
                              (*(System_String_o **)&(pSVar12->_1).this_arg.bits,"char_eyes",
                               (MethodInfo *)0x0);
          return pSVar10;
        }
      }
      return pSVar10;
    }
    pSVar12 = *(System_String_c **)(lVar5 + 0x18);
    if (*(int *)(TypeInfo_CharacterEffectPresets + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method = (MethodInfo *)0x0;
    pSVar11 = pSVar12;
    iVar7 = PatreonEffects_CharacterEffectPresets__ParseOrDefault
                      ((System_String_o *)pSVar12,(MethodInfo *)0x0);
    if (iVar7 == 0) {
      pIVar4 = (((System_String_c *)ppSVar13)->vtable)._9_GetTypeCode.methodPtr;
      if ((pIVar4 == (Il2CppMethodPointer)0x0) || (lVar5 = *(long *)(pIVar4 + 0xe0), lVar5 == 0))
      goto label_042f006e;
      pSVar10 = *(System_String_o **)(lVar5 + 0x18);
      if (*(int *)(TypeInfo_CharacterEffectPresets + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar12 = (System_String_c *)0x0;
      iVar7 = PatreonEffects_CharacterEffectPresets__ParseOrDefault(pSVar10,(MethodInfo *)0x0);
      if (iVar7 == 0) goto label_042f0060;
    }
    if (*(int *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 8) == 4) {
label_042f002a:
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      player = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      bVar8 = PatreonEffects_PatreonHelper__HasCharacterEffectAccess(player,(MethodInfo *)0x0);
      return (System_String_o *)CONCAT44(extraout_var,bVar8);
    }
    x = (System_String_c *)
        UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)ppSVar13,MethodInfo_PhotonView_GetComponent_PhotonView);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method = (MethodInfo *)0x0;
    pSVar11 = x;
    bVar8 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    pSVar12 = (System_String_c *)CONCAT71((int7)((ulong)pSVar12 >> 8),1);
    if ((char)bVar8 != '\0') {
      if (x == (System_String_c *)0x0) goto label_042f006e;
      if (*(char *)&(x->_1).typeMetadataHandle != '\0') goto label_042f002a;
    }
  }
label_042f0060:
  return (System_String_o *)((ulong)pSVar12 & 0xffffffff);
}


// Characters.HumanSetupTextures$$GetBodyMainTexture
// il2cpp: System_String_o* Characters_HumanSetupTextures__GetBodyMainTexture (Characters_HumanSetupTextures_o* __this, const MethodInfo* method);
// 0x42e9ca0

System_String_o *
Characters_HumanSetupTextures__GetBodyMainTexture(Characters_HumanSetupTextures_o *__this,MethodInfo *method)

{
  void **ppvVar1;
  UnityEngine_Object_Fields *pUVar2;
  int iVar3;
  Settings_StringSetting_o *pSVar4;
  Characters_HumanSetupMeshes_o *pCVar5;
  Settings_ColorSetting_o *pSVar6;
  void *pvVar7;
  System_Collections_Generic_HashSet_object__o *pSVar8;
  Il2CppClass *pIVar9;
  long lVar10;
  char *pcVar11;
  uint uVar12;
  bool_conflict bVar13;
  int32_t iVar14;
  System_String_o *pSVar15;
  System_String_o *pSVar16;
  long *plVar17;
  undefined8 uVar18;
  System_String_o *pSVar19;
  UnityEngine_Texture_o *pUVar20;
  Settings_HumanCustomSet_o *pSVar21;
  Utility_Color255_o *pUVar22;
  UnityEngine_GameObject_o *pUVar23;
  long *plVar24;
  long *path;
  Utility_Color255_o *pUVar25;
  undefined4 extraout_var;
  System_String_o *extraout_RAX;
  Il2CppObject *pIVar26;
  System_String_o *extraout_RAX_00;
  System_String_Fields SVar27;
  undefined4 extraout_var_00;
  System_String_o *extraout_RAX_01;
  undefined4 extraout_var_01;
  UnityEngine_Object_c *pUVar28;
  System_String_o *extraout_RAX_02;
  Characters_HumanSetup_o *pCVar29;
  Characters_HumanSetup_o *pCVar30;
  System_String_Fields SVar31;
  System_String_Fields SVar32;
  UnityEngine_Renderer_o *pUVar33;
  System_String_Fields method_00;
  System_String_Fields SVar34;
  System_String_Fields __this_00;
  System_String_o *extraout_RAX_03;
  System_String_Fields SVar35;
  System_String_o *extraout_RAX_04;
  UnityEngine_Object_o *pUVar36;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_SkinnedMeshRenderer_o *__this_02;
  UnityEngine_SkinnedMeshRenderer_o *__this_03;
  UnityEngine_Mesh_o *value;
  System_String_o *extraout_RAX_05;
  UnityEngine_Material_o *pUVar37;
  undefined4 extraout_var_02;
  System_String_o *extraout_RAX_06;
  System_String_o *extraout_RAX_07;
  System_String_c *pSVar38;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  undefined4 extraout_var_05;
  undefined4 extraout_var_06;
  undefined4 extraout_var_07;
  undefined4 extraout_var_08;
  System_String_o *extraout_RAX_08;
  undefined4 extraout_var_09;
  System_String_o *extraout_RAX_09;
  undefined4 extraout_var_10;
  System_String_o *extraout_RAX_10;
  System_String_Fields *in_RCX;
  undefined8 *puVar39;
  long lVar40;
  System_String_o *extraout_RDX;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_02;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *method_03;
  MethodInfo *extraout_RDX_06;
  MethodInfo *extraout_RDX_07;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  MethodInfo *method_07;
  MethodInfo *method_08;
  MethodInfo *method_09;
  MethodInfo *method_10;
  MethodInfo *method_11;
  MethodInfo *method_12;
  MethodInfo *method_13;
  MethodInfo *method_14;
  MethodInfo *method_15;
  MethodInfo *method_16;
  MethodInfo *method_17;
  MethodInfo *method_18;
  MethodInfo *method_19;
  MethodInfo *extraout_RDX_08;
  MethodInfo *extraout_RDX_09;
  MethodInfo *extraout_RDX_10;
  MethodInfo *extraout_RDX_11;
  MethodInfo *extraout_RDX_12;
  MethodInfo *extraout_RDX_13;
  MethodInfo *extraout_RDX_14;
  MethodInfo *extraout_RDX_15;
  MethodInfo *extraout_RDX_16;
  MethodInfo *extraout_RDX_17;
  MethodInfo *extraout_RDX_18;
  MethodInfo *extraout_RDX_19;
  MethodInfo *extraout_RDX_20;
  MethodInfo *method_20;
  MethodInfo *extraout_RDX_21;
  MethodInfo *extraout_RDX_22;
  MethodInfo *extraout_RDX_23;
  MethodInfo *pMVar41;
  ulong unaff_RBX;
  UnityEngine_Object_o *pUVar42;
  MethodInfo *method_21;
  System_String_Fields *pSVar43;
  System_String_Fields *pSVar44;
  System_String_o **ppSVar45;
  Utility_Color255_o *__this_04;
  System_String_Fields __this_05;
  System_Object_array *__this_06;
  System_String_Fields __this_07;
  UnityEngine_Object_c *pUVar46;
  MethodInfo *in_R8;
  MethodInfo *in_R9;
  uint uVar47;
  UnityEngine_Texture_c **value_00;
  float fVar48;
  float fVar49;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 in_XMM1_Da;
  undefined4 in_XMM1_Db;
  float fVar50;
  float fVar51;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined8 in_XMM2_Qa;
  undefined8 in_XMM3_Qa;
  undefined8 in_XMM4_Qa;
  undefined8 in_XMM5_Qa;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;
  UnityEngine_Color_o value_01;
  UnityEngine_Color_o value_02;
  UnityEngine_Color_o value_03;
  UnityEngine_Color_o value_04;
  UnityEngine_Color_o color;
  UnityEngine_Color_o color_00;
  UnityEngine_Color_o UVar52;
  UnityEngine_Color_o color_01;
  undefined4 uStack_2f4;
  long lStack_2f0;
  long *plStack_2e8;
  System_Object_array *pSStack_2e0;
  System_String_Fields SStack_2d8;
  System_String_Fields SStack_2d0;
  undefined1 auStack_2c8 [16];
  undefined1 auStack_2b8 [24];
  System_String_Fields SStack_2a0;
  System_String_Fields SStack_298;
  System_Object_array *pSStack_290;
  System_String_Fields SStack_288;
  Characters_HumanSetup_o *pCStack_280;
  System_String_Fields SStack_278;
  undefined1 auStack_270 [8];
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined1 auStack_260 [24];
  long *plStack_248;
  System_String_Fields SStack_240;
  System_Object_array *pSStack_238;
  System_String_Fields SStack_230;
  UnityEngine_Texture_o *pUStack_228;
  System_String_Fields SStack_220;
  System_String_o *pSStack_218;
  long *plStack_210;
  System_String_Fields SStack_208;
  System_Object_array *pSStack_200;
  System_String_Fields SStack_1f8;
  UnityEngine_Texture_o *pUStack_1f0;
  System_String_Fields SStack_1e8;
  System_String_o *pSStack_1e0;
  System_String_o *pSStack_1d8;
  Utility_Color255_o *pUStack_1d0;
  System_Object_array *pSStack_1c8;
  System_String_Fields SStack_1c0;
  UnityEngine_Texture_o *pUStack_1b8;
  Utility_Color255_o *pUStack_1b0;
  undefined8 uStack_1a8;
  Utility_Color255_o *pUStack_1a0;
  Characters_HumanSetup_o *pCStack_198;
  Characters_HumanSetup_o *pCStack_190;
  UnityEngine_Texture_o *pUStack_188;
  undefined1 auStack_180 [16];
  undefined1 auStack_170 [24];
  System_String_o *pSStack_158;
  System_String_Fields SStack_150;
  long *plStack_148;
  Characters_HumanSetup_o *pCStack_140;
  UnityEngine_Texture_o *pUStack_138;
  System_String_o *pSStack_130;
  UnityEngine_Texture_o *pUStack_120;
  System_String_o *pSStack_118;
  System_String_c *pSStack_110;
  undefined8 uStack_108;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 uStack_e8;
  undefined8 uStack_d8;
  undefined8 uStack_c8;
  undefined8 uStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_98;
  System_String_o *pSStack_80;
  
  pSVar43 = (System_String_Fields *)__this;
  if (g_data_057adec6 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Uniform/");
    il2cpp_runtime_helper_023445d0(&"_main_tex");
    il2cpp_runtime_helper_023445d0(&"Type");
    il2cpp_runtime_helper_023445d0(&"Casual/");
    pSVar43 = &"Uniform";
    il2cpp_runtime_helper_023445d0();
    g_data_057adec6 = '\x01';
  }
  pCVar29 = (__this->fields)._setup;
  if (((pCVar29 != (Characters_HumanSetup_o *)0x0) &&
      (pSVar43 = (System_String_Fields *)(pCVar29->fields).CurrentCostume,
      (System_String_o *)pSVar43 != (System_String_o *)0x0)) &&
     (method = (MethodInfo *)"Type",
     pSVar15 = (System_String_o *)
               (*(((System_String_o *)pSVar43)->klass->vtable)._7_CompareTo.methodPtr)
                         (pSVar43,"Type",
                          (((System_String_o *)pSVar43)->klass->vtable)._7_CompareTo.method),
     pSVar15 != (System_String_o *)0x0)) {
    in_RCX = (System_String_Fields *)pSVar15->klass;
    method = (((System_String_c *)in_RCX)->vtable)._9_GetTypeCode.method;
    pSVar16 = (System_String_o *)(*(((System_String_c *)in_RCX)->vtable)._9_GetTypeCode.methodPtr)();
    pSVar43 = (System_String_Fields *)pSVar15;
    if (pSVar16 != (System_String_o *)0x0) {
      in_RCX = &"Uniform";
      method = (MethodInfo *)"Uniform";
      uVar12 = System_String__StartsWith(pSVar16,(System_String_o *)"Uniform",(MethodInfo *)0x0);
      unaff_RBX = (ulong)uVar12;
      pCVar29 = (__this->fields)._setup;
      pSVar43 = (System_String_Fields *)pSVar16;
      if (((pCVar29 != (Characters_HumanSetup_o *)0x0) &&
          (pSVar43 = (System_String_Fields *)(pCVar29->fields).CurrentCostume,
          (System_String_o *)pSVar43 != (System_String_o *)0x0)) &&
         (method = (MethodInfo *)"_main_tex",
         plVar17 = (long *)(*(((System_String_o *)pSVar43)->klass->vtable)._7_CompareTo.methodPtr)
                                     (pSVar43,"_main_tex",
                                      (((System_String_o *)pSVar43)->klass->vtable)._7_CompareTo.method),
         plVar17 != (long *)0x0)) {
        pSVar15 = (System_String_o *)
                  (**(code **)(*plVar17 + 0x1c8))(plVar17,*(undefined8 *)(*plVar17 + 0x1d0));
        if ((char)uVar12 == '\0') {
          puVar39 = &"Casual/";
        }
        else {
          puVar39 = &"Uniform/";
        }
        pSVar15 = System_String__Concat_3ae5ba0((System_String_o *)*puVar39,pSVar15,(MethodInfo *)0x0);
        return pSVar15;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar44 = pSVar43;
  if (g_data_057adec7 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Uniform/");
    il2cpp_runtime_helper_023445d0(&"_main_tex_mask");
    il2cpp_runtime_helper_023445d0(&"Type");
    il2cpp_runtime_helper_023445d0(&"Casual/");
    pSVar44 = &"Uniform";
    il2cpp_runtime_helper_023445d0();
    g_data_057adec7 = '\x01';
  }
  if (((((System_String_o *)pSVar43)->fields != (System_String_Fields)0x0) &&
      (pSVar44 = *(System_String_Fields **)((long)((System_String_o *)pSVar43)->fields + 0x1d8),
      (System_String_o *)pSVar44 != (System_String_o *)0x0)) &&
     (method = (MethodInfo *)"Type",
     pSVar15 = (System_String_o *)
               (*(((System_String_o *)pSVar44)->klass->vtable)._7_CompareTo.methodPtr)
                         (pSVar44,"Type",
                          (((System_String_o *)pSVar44)->klass->vtable)._7_CompareTo.method),
     pSVar15 != (System_String_o *)0x0)) {
    in_RCX = (System_String_Fields *)pSVar15->klass;
    method = (((System_String_c *)in_RCX)->vtable)._9_GetTypeCode.method;
    pSVar16 = (System_String_o *)(*(((System_String_c *)in_RCX)->vtable)._9_GetTypeCode.methodPtr)();
    pSVar44 = (System_String_Fields *)pSVar15;
    if (pSVar16 != (System_String_o *)0x0) {
      in_RCX = &"Uniform";
      method = (MethodInfo *)"Uniform";
      uVar12 = System_String__StartsWith(pSVar16,(System_String_o *)"Uniform",(MethodInfo *)0x0);
      unaff_RBX = (ulong)uVar12;
      pSVar44 = (System_String_Fields *)pSVar16;
      if (((((System_String_o *)pSVar43)->fields != (System_String_Fields)0x0) &&
          (pSVar44 = *(System_String_Fields **)((long)((System_String_o *)pSVar43)->fields + 0x1d8),
          (System_String_o *)pSVar44 != (System_String_o *)0x0)) &&
         (method = (MethodInfo *)"_main_tex_mask",
         plVar17 = (long *)(*(((System_String_o *)pSVar44)->klass->vtable)._7_CompareTo.methodPtr)
                                     (pSVar44,"_main_tex_mask",
                                      (((System_String_o *)pSVar44)->klass->vtable)._7_CompareTo.method),
         plVar17 != (long *)0x0)) {
        pSVar15 = (System_String_o *)
                  (**(code **)(*plVar17 + 0x1c8))(plVar17,*(undefined8 *)(*plVar17 + 0x1d0));
        if ((char)uVar12 == '\0') {
          puVar39 = &"Casual/";
        }
        else {
          puVar39 = &"Uniform/";
        }
        pSVar15 = System_String__Concat_3ae5ba0((System_String_o *)*puVar39,pSVar15,(MethodInfo *)0x0);
        return pSVar15;
      }
    }
  }
  uVar18 = il2cpp_runtime_helper_022b2c90();
  pSVar43 = pSVar44;
  if (g_data_057adec8 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Uniform/");
    il2cpp_runtime_helper_023445d0(&"_color_tex");
    il2cpp_runtime_helper_023445d0(&"Type");
    il2cpp_runtime_helper_023445d0(&"Casual/");
    pSVar43 = &"Uniform";
    il2cpp_runtime_helper_023445d0();
    g_data_057adec8 = '\x01';
  }
  if (((((System_String_o *)pSVar44)->fields != (System_String_Fields)0x0) &&
      (pSVar43 = *(System_String_Fields **)((long)((System_String_o *)pSVar44)->fields + 0x1d8),
      (System_String_o *)pSVar43 != (System_String_o *)0x0)) &&
     (method = (MethodInfo *)"Type",
     pSVar15 = (System_String_o *)
               (*(((System_String_o *)pSVar43)->klass->vtable)._7_CompareTo.methodPtr)
                         (pSVar43,"Type",
                          (((System_String_o *)pSVar43)->klass->vtable)._7_CompareTo.method),
     pSVar15 != (System_String_o *)0x0)) {
    in_RCX = (System_String_Fields *)pSVar15->klass;
    method = (((System_String_c *)in_RCX)->vtable)._9_GetTypeCode.method;
    pSVar16 = (System_String_o *)(*(((System_String_c *)in_RCX)->vtable)._9_GetTypeCode.methodPtr)();
    pSVar43 = (System_String_Fields *)pSVar15;
    if (pSVar16 != (System_String_o *)0x0) {
      in_RCX = &"Uniform";
      method = (MethodInfo *)"Uniform";
      bVar13 = System_String__StartsWith(pSVar16,(System_String_o *)"Uniform",(MethodInfo *)0x0);
      pSVar43 = (System_String_Fields *)pSVar16;
      if (((((System_String_o *)pSVar44)->fields != (System_String_Fields)0x0) &&
          (pSVar43 = *(System_String_Fields **)((long)((System_String_o *)pSVar44)->fields + 0x1d8),
          (System_String_o *)pSVar43 != (System_String_o *)0x0)) &&
         (method = (MethodInfo *)"_color_tex",
         plVar17 = (long *)(*(((System_String_o *)pSVar43)->klass->vtable)._7_CompareTo.methodPtr)
                                     (pSVar43,"_color_tex",
                                      (((System_String_o *)pSVar43)->klass->vtable)._7_CompareTo.method),
         plVar17 != (long *)0x0)) {
        pSVar15 = (System_String_o *)
                  (**(code **)(*plVar17 + 0x1c8))(plVar17,*(undefined8 *)(*plVar17 + 0x1d0));
        if ((char)bVar13 == '\0') {
          puVar39 = &"Casual/";
        }
        else {
          puVar39 = &"Uniform/";
        }
        pSVar15 = System_String__Concat_3ae5ba0((System_String_o *)*puVar39,pSVar15,(MethodInfo *)0x0);
        return pSVar15;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  ppSVar45 = (System_String_o **)pSVar43;
  if (g_data_057adec9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&"Pants/Shoes_Casual");
    il2cpp_runtime_helper_023445d0(&"_pants_tex");
    ppSVar45 = &"Pants/";
    il2cpp_runtime_helper_023445d0();
    g_data_057adec9 = '\x01';
  }
  SVar27 = ((System_String_o *)pSVar43)->fields;
  if (SVar27 != (System_String_Fields)0x0) {
    in_RCX = (System_String_Fields *)0x0;
    if ((*(long *)((long)SVar27 + 0x1c8) != 0) &&
       (in_RCX = *(System_String_Fields **)(*(long *)((long)SVar27 + 0x1c8) + 0x68),
       (System_String_c *)in_RCX != (System_String_c *)0x0)) {
      if (*(int *)((long)&(((System_String_c *)in_RCX)->_1).name + 4) == 1) {
        return "Pants/Shoes_Casual";
      }
      ppSVar45 = *(System_String_o ***)((long)SVar27 + 0x1d8);
      if (((System_String_o *)ppSVar45 != (System_String_o *)0x0) &&
         (method = (MethodInfo *)"_pants_tex",
         plVar17 = (long *)(*(((System_String_o *)ppSVar45)->klass->vtable)._7_CompareTo.methodPtr)
                                     (ppSVar45,"_pants_tex",
                                      (((System_String_o *)ppSVar45)->klass->vtable)._7_CompareTo.method),
         plVar17 != (long *)0x0)) {
        pSVar15 = (System_String_o *)
                  (**(code **)(*plVar17 + 0x1c8))(plVar17,*(undefined8 *)(*plVar17 + 0x1d0));
        pSVar15 = System_String__Concat_3ae5ba0("Pants/",pSVar15,(MethodInfo *)0x0);
        return pSVar15;
      }
    }
  }
  uStack_108 = il2cpp_runtime_helper_022b2c90();
  pSStack_118 = extraout_RDX;
  pSStack_110 = (System_String_c *)in_RCX;
  uStack_f8 = in_XMM1_Da;
  uStack_f4 = in_XMM1_Db;
  uStack_e8 = in_XMM2_Qa;
  uStack_d8 = in_XMM3_Qa;
  uStack_c8 = in_XMM4_Qa;
  uStack_b8 = in_XMM5_Qa;
  uStack_a8 = in_XMM6_Qa;
  uStack_98 = in_XMM7_Qa;
  pSStack_80 = (System_String_o *)pSVar43;
  if (g_data_057adea5 == '\0') {
    pSStack_130 = (System_String_o *)0x42ea198;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupMaterials);
    pSStack_130 = (System_String_o *)0x42ea1a4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Material_InstantiateAsset_Material);
    pSStack_130 = (System_String_o *)0x42ea1b0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    pSStack_130 = (System_String_o *)0x42ea1bc;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    pSStack_130 = (System_String_o *)0x42ea1c8;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
    pSStack_130 = (System_String_o *)0x42ea1d4;
    il2cpp_runtime_helper_023445d0(&"HumanCostumeMat");
    pSStack_130 = (System_String_o *)0x42ea1e0;
    il2cpp_runtime_helper_023445d0(&"_jacket_color");
    pSStack_130 = (System_String_o *)0x42ea1ec;
    il2cpp_runtime_helper_023445d0(&"_main_tex_mask");
    pSStack_130 = (System_String_o *)0x42ea1f8;
    il2cpp_runtime_helper_023445d0(&"_pants_tex");
    pSStack_130 = (System_String_o *)0x42ea204;
    il2cpp_runtime_helper_023445d0(&"_main_tex");
    pSStack_130 = (System_String_o *)0x42ea210;
    il2cpp_runtime_helper_023445d0(&"_color_tex");
    pSStack_130 = (System_String_o *)0x42ea21c;
    il2cpp_runtime_helper_023445d0(&"_boots_color");
    pSStack_130 = (System_String_o *)0x42ea228;
    il2cpp_runtime_helper_023445d0(&"_straps_color");
    pSStack_130 = (System_String_o *)0x42ea234;
    il2cpp_runtime_helper_023445d0(&"_pants_color");
    pSStack_130 = (System_String_o *)0x42ea240;
    il2cpp_runtime_helper_023445d0(&"_shirt_color");
    g_data_057adea5 = '\x01';
  }
  if (*(int *)((long)TypeInfo_ResourcePaths + 0xe4) == 0) {
    pSStack_130 = (System_String_o *)0x42ea264;
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar43 = &TypeInfo_ResourcePaths;
  pSVar15 = *(System_String_o **)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
  if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
    pSStack_130 = (System_String_o *)0x42ea293;
    il2cpp_runtime_helper_02337ed0();
  }
  plVar17 = &TypeInfo_HumanSetupMaterials;
  pSStack_130 = (System_String_o *)0x42ea2b6;
  pSVar16 = System_String__Concat_3ae5ba0
                      (*(System_String_o **)(*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 0x28),"HumanCostumeMat",
                       (MethodInfo *)0x0);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    pSStack_130 = (System_String_o *)0x42ea2d1;
    il2cpp_runtime_helper_02337ed0();
  }
  pSStack_130 = (System_String_o *)0x42ea2eb;
  pSVar16 = (System_String_o *)
            ApplicationManagers_ResourceManager__InstantiateAsset_object_(pSVar15,pSVar16,1,MethodInfo_Material_InstantiateAsset_Material);
  pSVar15 = *(System_String_o **)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
  pSStack_130 = (System_String_o *)0x42ea315;
  pSVar19 = System_String__Concat_3ae5ba0
                      (*(System_String_o **)(*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 0x20),
                       (System_String_o *)ppSVar45,(MethodInfo *)0x0);
  pSStack_130 = (System_String_o *)0x42ea324;
  pUVar20 = (UnityEngine_Texture_o *)
            ApplicationManagers_ResourceManager__LoadAsset(pSVar15,pSVar19,0,(MethodInfo *)0x0);
  value_00 = &TypeInfo_Texture2D;
  if ((pUVar20 == (UnityEngine_Texture_o *)0x0) || (pUVar20->klass == TypeInfo_Texture2D)) {
    pSVar15 = *(System_String_o **)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
    pSStack_130 = (System_String_o *)0x42ea368;
    pUStack_120 = pUVar20;
    pSVar19 = System_String__Concat_3ae5ba0
                        (*(System_String_o **)(*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 0x20),
                         (System_String_o *)method,(MethodInfo *)0x0);
    pSStack_130 = (System_String_o *)0x42ea377;
    method = (MethodInfo *)ApplicationManagers_ResourceManager__LoadAsset(pSVar15,pSVar19,0,(MethodInfo *)0x0)
    ;
    if (((System_String_Fields)method != (System_String_Fields)0x0) &&
       (*(UnityEngine_Texture_c **)method != TypeInfo_Texture2D)) goto label_042ea55f;
    pSVar15 = *(System_String_o **)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
    pSStack_130 = (System_String_o *)0x42ea3b5;
    pSVar19 = System_String__Concat_3ae5ba0
                        (*(System_String_o **)(*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 0x20),pSStack_118,
                         (MethodInfo *)0x0);
    pSStack_130 = (System_String_o *)0x42ea3c4;
    value_00 = (UnityEngine_Texture_c **)
               ApplicationManagers_ResourceManager__LoadAsset(pSVar15,pSVar19,0,(MethodInfo *)0x0);
    if (((UnityEngine_Texture_o *)value_00 != (UnityEngine_Texture_o *)0x0) &&
       (((UnityEngine_Texture_o *)value_00)->klass != TypeInfo_Texture2D)) goto label_042ea567;
    pSVar15 = *(System_String_o **)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
    pSStack_130 = (System_String_o *)0x42ea408;
    pSVar19 = System_String__Concat_3ae5ba0
                        (*(System_String_o **)(*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 0x20),
                         (System_String_o *)pSStack_110,(MethodInfo *)0x0);
    pSStack_130 = (System_String_o *)0x42ea417;
    pSVar43 = (System_String_Fields *)
              ApplicationManagers_ResourceManager__LoadAsset(pSVar15,pSVar19,0,(MethodInfo *)0x0);
    if (((Characters_HumanSetup_o *)pSVar43 == (Characters_HumanSetup_o *)0x0) ||
       ((UnityEngine_Texture_c *)((Characters_HumanSetup_o *)pSVar43)->klass == TypeInfo_Texture2D)) {
      if (pSVar16 != (System_String_o *)0x0) {
        pSStack_130 = (System_String_o *)0x42ea45c;
        UnityEngine_Material__SetTexture
                  ((UnityEngine_Material_o *)pSVar16,(System_String_o *)"_main_tex",pUStack_120,
                   (MethodInfo *)0x0);
        pSStack_130 = (System_String_o *)0x42ea473;
        UnityEngine_Material__SetTexture
                  ((UnityEngine_Material_o *)pSVar16,(System_String_o *)"_main_tex_mask",
                   (UnityEngine_Texture_o *)method,(MethodInfo *)0x0);
        pSStack_130 = (System_String_o *)0x42ea48a;
        UnityEngine_Material__SetTexture
                  ((UnityEngine_Material_o *)pSVar16,(System_String_o *)"_color_tex",
                   (UnityEngine_Texture_o *)value_00,(MethodInfo *)0x0);
        pSStack_130 = (System_String_o *)0x42ea4a1;
        UnityEngine_Material__SetTexture
                  ((UnityEngine_Material_o *)pSVar16,(System_String_o *)"_pants_tex",
                   (UnityEngine_Texture_o *)pSVar43,(MethodInfo *)0x0);
        value_01.fields.a = (float)uStack_f4;
        value_01.fields.b = (float)uStack_f8;
        pSStack_130 = (System_String_o *)0x42ea4bf;
        value_01.fields.r = (float)(undefined4)uStack_108;
        value_01.fields.g = (float)uStack_108._4_4_;
        UnityEngine_Material__SetColor
                  ((UnityEngine_Material_o *)pSVar16,"_shirt_color",value_01,(MethodInfo *)0x0);
        pSStack_130 = (System_String_o *)0x42ea4dd;
        value_02.fields.b = (float)(undefined4)uStack_d8;
        value_02.fields.a = (float)uStack_d8._4_4_;
        value_02.fields.r = (float)(undefined4)uStack_e8;
        value_02.fields.g = (float)uStack_e8._4_4_;
        UnityEngine_Material__SetColor
                  ((UnityEngine_Material_o *)pSVar16,"_straps_color",value_02,(MethodInfo *)0x0);
        pSStack_130 = (System_String_o *)0x42ea4fb;
        value_03.fields.b = (float)(undefined4)uStack_b8;
        value_03.fields.a = (float)uStack_b8._4_4_;
        value_03.fields.r = (float)(undefined4)uStack_c8;
        value_03.fields.g = (float)uStack_c8._4_4_;
        UnityEngine_Material__SetColor
                  ((UnityEngine_Material_o *)pSVar16,"_pants_color",value_03,(MethodInfo *)0x0);
        pSStack_130 = (System_String_o *)0x42ea51f;
        value_04.fields.b = (float)(undefined4)uStack_98;
        value_04.fields.a = (float)uStack_98._4_4_;
        value_04.fields.r = (float)(undefined4)uStack_a8;
        value_04.fields.g = (float)uStack_a8._4_4_;
        UnityEngine_Material__SetColor
                  ((UnityEngine_Material_o *)pSVar16,"_jacket_color",value_04,(MethodInfo *)0x0);
        UVar52.fields.b = (float)(int)unaff_RBX;
        UVar52.fields.a = (float)(int)(unaff_RBX >> 0x20);
        UVar52.fields.r = (float)(int)uVar18;
        UVar52.fields.g = (float)(int)((ulong)uVar18 >> 0x20);
        pSStack_130 = (System_String_o *)0x42ea53d;
        UnityEngine_Material__SetColor
                  ((UnityEngine_Material_o *)pSVar16,"_boots_color",UVar52,(MethodInfo *)0x0);
        return pSVar16;
      }
      pSStack_130 = (System_String_o *)0x42ea557;
      pUVar20 = (UnityEngine_Texture_o *)il2cpp_runtime_helper_022b2c90();
      goto label_042ea557;
    }
  }
  else {
label_042ea557:
    pSStack_130 = (System_String_o *)0x42ea55f;
    il2cpp_runtime_helper_022b2fd0(pUVar20);
label_042ea55f:
    pSStack_130 = (System_String_o *)0x42ea567;
    il2cpp_runtime_helper_022b2fd0(method);
label_042ea567:
    pSStack_130 = (System_String_o *)0x42ea56f;
    il2cpp_runtime_helper_022b2fd0(value_00);
  }
  pSStack_130 = (System_String_o *)0x42ea577;
  pCVar29 = (Characters_HumanSetup_o *)pSVar43;
  il2cpp_runtime_helper_022b2fd0();
  plStack_148 = &TypeInfo_HumanSetupMaterials;
  pSStack_158 = pSVar16;
  SStack_150 = (System_String_Fields)method;
  pCStack_140 = (Characters_HumanSetup_o *)pSVar43;
  pUStack_138 = (UnityEngine_Texture_o *)value_00;
  pSStack_130 = pSVar15;
  if (g_data_057ade92 == '\0') {
    pUStack_188 = (UnityEngine_Texture_o *)0x42ea8c5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEffectPresets);
    pUStack_188 = (UnityEngine_Texture_o *)0x42ea8d1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ClothFactory);
    pUStack_188 = (UnityEngine_Texture_o *)0x42ea8dd;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponentsInChildren_Renderer);
    pUStack_188 = (UnityEngine_Texture_o *)0x42ea8e9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupMaterials);
    pUStack_188 = (UnityEngine_Texture_o *)0x42ea8f5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    pUStack_188 = (UnityEngine_Texture_o *)0x42ea901;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    pUStack_188 = (UnityEngine_Texture_o *)0x42ea90d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    pUStack_188 = (UnityEngine_Texture_o *)0x42ea919;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    pUStack_188 = (UnityEngine_Texture_o *)0x42ea925;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color255_get_Value);
    pUStack_188 = (UnityEngine_Texture_o *)0x42ea931;
    il2cpp_runtime_helper_023445d0(&"IgnoreColor");
    g_data_057ade92 = '\x01';
    pUVar22 = (Utility_Color255_o *)(pCVar29->fields)._part_hair;
    if (g_data_057adea2 != '\0') goto label_042ea5b3;
label_042ea94d:
    pUStack_188 = (UnityEngine_Texture_o *)0x42ea959;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    pUVar22 = (Utility_Color255_o *)(pCVar29->fields)._part_hair;
    if (g_data_057adea2 == '\0') goto label_042ea94d;
label_042ea5b3:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    pUStack_188 = (UnityEngine_Texture_o *)0x42ea97d;
    il2cpp_runtime_helper_02337ed0();
  }
  path = &TypeInfo_Object;
  pUStack_188 = (UnityEngine_Texture_o *)0x42ea5d7;
  __this_04 = pUVar22;
  bVar13 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pUVar22,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 == '\0') {
    if ((char)(pCVar29->fields).IsDeadBody == '\0') goto label_042ea9ad;
label_042ea5ee:
    pSVar21 = (pCVar29->fields).CustomSet;
    if (pSVar21 != (Settings_HumanCustomSet_o *)0x0) goto label_042ea5ff;
label_042eabbd:
    pUStack_188 = (UnityEngine_Texture_o *)0x42eabc2;
    il2cpp_runtime_helper_022b2c90();
    pSVar44 = (System_String_Fields *)plVar17;
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      pUStack_188 = (UnityEngine_Texture_o *)0x42ea994;
      il2cpp_runtime_helper_02337ed0();
    }
    pUStack_188 = (UnityEngine_Texture_o *)0x42ea99e;
    __this_04 = pUVar22;
    UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)pUVar22,(MethodInfo *)0x0);
    if ((char)(pCVar29->fields).IsDeadBody != '\0') goto label_042ea5ee;
label_042ea9ad:
    pUVar22 = (Utility_Color255_o *)(pCVar29->fields)._part_hair_1;
    if (*(int *)(TypeInfo_ClothFactory + 0xe4) == 0) {
      pUStack_188 = (UnityEngine_Texture_o *)0x42ea9cd;
      il2cpp_runtime_helper_02337ed0();
    }
    pUStack_188 = (UnityEngine_Texture_o *)0x42ea9d7;
    __this_04 = pUVar22;
    ClothFactory__DisposeObject((UnityEngine_GameObject_o *)pUVar22,(MethodInfo *)0x0);
    pSVar21 = (pCVar29->fields).CustomSet;
    if (pSVar21 == (Settings_HumanCustomSet_o *)0x0) goto label_042eabbd;
label_042ea5ff:
    pSVar4 = (pSVar21->fields).HairEffect;
    if (pSVar4 == (Settings_StringSetting_o *)0x0) goto label_042eabbd;
    pUVar22 = (Utility_Color255_o *)(pSVar4->fields)._value;
    if (*(int *)(TypeInfo_CharacterEffectPresets + 0xe4) == 0) {
      pUStack_188 = (UnityEngine_Texture_o *)0x42ea62b;
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar41 = (MethodInfo *)0x0;
    pUStack_188 = (UnityEngine_Texture_o *)0x42ea635;
    uVar12 = PatreonEffects_CharacterEffectPresets__ParseOrDefault
                       ((System_String_o *)pUVar22,(MethodInfo *)0x0);
    pCVar5 = (pCVar29->fields)._meshes;
    __this_04 = (Utility_Color255_o *)0x0;
    if (pCVar5 == (Characters_HumanSetupMeshes_o *)0x0) goto label_042eabbd;
    pSVar43 = (System_String_Fields *)(ulong)uVar12;
    pUStack_188 = (UnityEngine_Texture_o *)0x42ea64e;
    pUVar22 = (Utility_Color255_o *)Characters_HumanSetupMeshes__GetHairMesh(pCVar5,pMVar41);
    pMVar41 = (MethodInfo *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    pUStack_188 = (UnityEngine_Texture_o *)0x42ea673;
    bVar13 = System_String__op_Inequality
                       ((System_String_o *)pUVar22,(System_String_o *)pMVar41,(MethodInfo *)0x0);
    if ((char)bVar13 == '\0') {
label_042eaa10:
      path = &g_data_057b9b70;
      pCVar5 = (pCVar29->fields)._meshes;
      __this_04 = (Utility_Color255_o *)0x0;
      if (pCVar5 != (Characters_HumanSetupMeshes_o *)0x0) {
        pUStack_188 = (UnityEngine_Texture_o *)0x42eaa26;
        pUVar22 = (Utility_Color255_o *)Characters_HumanSetupMeshes__GetHairClothMesh(pCVar5,pMVar41);
        pUStack_188 = (UnityEngine_Texture_o *)0x42eaa44;
        __this_04 = pUVar22;
        bVar13 = System_String__op_Inequality
                           ((System_String_o *)pUVar22,
                            (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
        if (((char)bVar13 == '\0') || ((char)(pCVar29->fields).IsDeadBody != '\0')) {
          return (System_String_o *)CONCAT44(extraout_var,bVar13);
        }
        path = (long *)(pCVar29->fields)._textures;
        if ((Utility_Color255_o *)path != (Utility_Color255_o *)0x0) {
          if (g_data_057adec5 == '\0') {
            __this_04 = (Utility_Color255_o *)&"Texture";
            pUStack_188 = (UnityEngine_Texture_o *)0x42eaa88;
            il2cpp_runtime_helper_023445d0();
            g_data_057adec5 = '\x01';
          }
          if ((*(System_String_Fields *)&((Utility_Color255_o *)path)->fields != (System_String_Fields)0x0) &&
             (__this_04 = *(Utility_Color255_o **)
                           ((long)*(System_String_Fields *)&((Utility_Color255_o *)path)->fields + 0x1e0),
             __this_04 != (Utility_Color255_o *)0x0)) {
            pUStack_188 = (UnityEngine_Texture_o *)0x42eaac6;
            plVar24 = (long *)(*(((System_String_c *)__this_04->klass)->vtable)._7_CompareTo.methodPtr)
                                        (__this_04,"Texture",
                                         (((System_String_c *)__this_04->klass)->vtable)._7_CompareTo.method);
            if (plVar24 != (long *)0x0) {
              pMVar41 = *(MethodInfo **)(*plVar24 + 0x1d0);
              pUStack_188 = (UnityEngine_Texture_o *)0x42eaae2;
              path = (long *)(**(code **)(*plVar24 + 0x1c8))(plVar24);
              if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
                pUStack_188 = (UnityEngine_Texture_o *)0x42eaafd;
                il2cpp_runtime_helper_02337ed0();
              }
              pUStack_188 = (UnityEngine_Texture_o *)0x42eab05;
              __this_04 = (Utility_Color255_o *)path;
              value_00 = (UnityEngine_Texture_c **)
                         Characters_HumanSetupMaterials__GetHairMaterial((System_String_o *)path,pMVar41);
              pSVar21 = (pCVar29->fields).CustomSet;
              if ((pSVar21 != (Settings_HumanCustomSet_o *)0x0) &&
                 (pSVar6 = (pSVar21->fields).HairColor, pSVar6 != (Settings_ColorSetting_o *)0x0)) {
                pUVar25 = (pSVar6->fields)._value;
                __this_04 = (Utility_Color255_o *)0x0;
                if (pUVar25 != (Utility_Color255_o *)0x0) {
                  pUVar23 = (pCVar29->fields)._mount_cloth;
                  pUStack_188 = (UnityEngine_Texture_o *)0x42eab45;
                  UVar52 = Utility_Color255__ToColor(pUVar25,(MethodInfo *)0x0);
                  fVar48 = UVar52.fields.r;
                  fVar49 = UVar52.fields.g;
                  fVar50 = UVar52.fields.b;
                  fVar51 = UVar52.fields.a;
                  if (*(int *)(TypeInfo_ClothFactory + 0xe4) == 0) {
                    auStack_180._8_4_ = extraout_XMM0_Dc;
                    auStack_180._0_8_ = UVar52.fields._0_8_;
                    auStack_180._12_4_ = extraout_XMM0_Dd;
                    auStack_170._8_4_ = in_XMM1_Dc;
                    auStack_170._0_8_ = UVar52.fields._8_8_;
                    auStack_170._12_4_ = in_XMM1_Dd;
                    pUStack_188 = (UnityEngine_Texture_o *)0x42eab66;
                    il2cpp_runtime_helper_02337ed0();
                    fVar48 = (float)auStack_180._0_4_;
                    fVar49 = (float)auStack_180._4_4_;
                    fVar50 = (float)auStack_170._0_4_;
                    fVar51 = (float)auStack_170._4_4_;
                  }
                  pUStack_188 = (UnityEngine_Texture_o *)0x42eab7f;
                  color.fields.g = fVar49;
                  color.fields.r = fVar48;
                  color.fields.a = fVar51;
                  color.fields.b = fVar50;
                  pUVar23 = ClothFactory__GetHair
                                      (pUVar23,(System_String_o *)pUVar22,(UnityEngine_Material_o *)value_00,
                                       color,(MethodInfo *)0x0);
                  (pCVar29->fields)._part_hair_1 = pUVar23;
                  pUStack_188 = (UnityEngine_Texture_o *)0x42eab97;
                  il2cpp_runtime_helper_022b4080(&(pCVar29->fields)._part_hair_1,pUVar23);
                  Characters_HumanSetup__ApplyCharacterEffectToPart
                            (pCVar29,(pCVar29->fields)._part_hair_1,(int32_t)pSVar43,1,in_R8);
                  return extraout_RAX;
                }
              }
            }
          }
        }
      }
      goto label_042eabbd;
    }
    if (*(int *)((long)TypeInfo_ResourcePaths + 0xe4) == 0) {
      pUStack_188 = (UnityEngine_Texture_o *)0x42ea694;
      il2cpp_runtime_helper_02337ed0();
    }
    value_00 = (UnityEngine_Texture_c **)&(pCVar29->fields)._part_hair;
    path = *(long **)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      pUStack_188 = (UnityEngine_Texture_o *)0x42ea6c3;
      il2cpp_runtime_helper_02337ed0();
    }
    auStack_180._0_4_ = uVar12;
    pUStack_188 = (UnityEngine_Texture_o *)0x42ea6e1;
    pUVar23 = (UnityEngine_GameObject_o *)
              ApplicationManagers_ResourceManager__InstantiateAsset_object_
                        ((System_String_o *)path,(System_String_o *)pUVar22,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
    (pCVar29->fields)._part_hair = pUVar23;
    pUStack_188 = (UnityEngine_Texture_o *)0x42ea6f4;
    pCVar30 = (Characters_HumanSetup_o *)value_00;
    il2cpp_runtime_helper_022b4080(value_00,pUVar23);
    pUStack_188 = (UnityEngine_Texture_o *)0x42ea70b;
    Characters_HumanSetup__AttachToMount
              (pCVar30,(pCVar29->fields)._part_hair,(pCVar29->fields)._part_head,0,in_R8);
    __this_04 = (Utility_Color255_o *)(pCVar29->fields)._part_hair;
    if (__this_04 == (Utility_Color255_o *)0x0) goto label_042eabbd;
    pUStack_188 = (UnityEngine_Texture_o *)0x42ea72b;
    pSVar44 = (System_String_Fields *)
              UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                        ((UnityEngine_GameObject_o *)__this_04,MethodInfo_Renderer_GetComponentsInChildren_Renderer);
    if ((System_Object_array *)pSVar44 == (System_Object_array *)0x0) goto label_042eabbd;
    iVar3 = (int)((System_Object_array *)pSVar44)->max_length;
    plVar17 = (long *)pSVar44;
    if (iVar3 < 1) {
label_042ea9ed:
      pMVar41 = (MethodInfo *)(pCVar29->fields)._part_hair;
      pSVar43 = (System_String_Fields *)(ulong)(uint)auStack_180._0_4_;
      pUStack_188 = (UnityEngine_Texture_o *)0x42eaa09;
      Characters_HumanSetup__ApplyCharacterEffectToPart
                (pCVar29,(UnityEngine_GameObject_o *)pMVar41,auStack_180._0_4_,1,in_R8);
      goto label_042eaa10;
    }
    pSVar43 = (System_String_Fields *)0x0;
    value_00 = (UnityEngine_Texture_c **)&"Texture";
    if (iVar3 != 0) {
      do {
        path = (long *)(pCVar29->fields)._textures;
        if ((Utility_Color255_o *)path == (Utility_Color255_o *)0x0) goto label_042eabbd;
        pUVar22 = (Utility_Color255_o *)((System_Object_array *)pSVar44)->m_Items[(int)pSVar43];
        if (g_data_057adec5 == '\0') {
          __this_04 = (Utility_Color255_o *)&"Texture";
          pUStack_188 = (UnityEngine_Texture_o *)0x42ea7a4;
          il2cpp_runtime_helper_023445d0();
          g_data_057adec5 = '\x01';
        }
        if ((*(System_String_Fields *)&((Utility_Color255_o *)path)->fields == (System_String_Fields)0x0) ||
           (__this_04 = *(Utility_Color255_o **)
                         ((long)*(System_String_Fields *)&((Utility_Color255_o *)path)->fields + 0x1e0),
           __this_04 == (Utility_Color255_o *)0x0)) goto label_042eabbd;
        pUStack_188 = (UnityEngine_Texture_o *)0x42ea7db;
        plVar24 = (long *)(*(((System_String_c *)__this_04->klass)->vtable)._7_CompareTo.methodPtr)
                                    (__this_04,"Texture",
                                     (((System_String_c *)__this_04->klass)->vtable)._7_CompareTo.method);
        if (plVar24 == (long *)0x0) goto label_042eabbd;
        pMVar41 = *(MethodInfo **)(*plVar24 + 0x1d0);
        pUStack_188 = (UnityEngine_Texture_o *)0x42ea7f7;
        path = (long *)(**(code **)(*plVar24 + 0x1c8))(plVar24);
        if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
          pUStack_188 = (UnityEngine_Texture_o *)0x42ea812;
          il2cpp_runtime_helper_02337ed0();
        }
        pUStack_188 = (UnityEngine_Texture_o *)0x42ea81a;
        __this_04 = (Utility_Color255_o *)path;
        pUVar37 = Characters_HumanSetupMaterials__GetHairMaterial((System_String_o *)path,pMVar41);
        if (pUVar22 == (Utility_Color255_o *)0x0) goto label_042eabbd;
        pUStack_188 = (UnityEngine_Texture_o *)0x42ea830;
        UnityEngine_Renderer__set_material((UnityEngine_Renderer_o *)pUVar22,pUVar37,(MethodInfo *)0x0);
        pUStack_188 = (UnityEngine_Texture_o *)0x42ea83a;
        __this_04 = pUVar22;
        pUVar25 = (Utility_Color255_o *)
                  UnityEngine_Object__get_name((UnityEngine_Object_o *)pUVar22,(MethodInfo *)0x0);
        if (pUVar25 == (Utility_Color255_o *)0x0) goto label_042eabbd;
        pUStack_188 = (UnityEngine_Texture_o *)0x42ea857;
        bVar13 = System_String__Contains((System_String_o *)pUVar25,"IgnoreColor",(MethodInfo *)0x0);
        if ((char)bVar13 == '\0') {
          pUStack_188 = (UnityEngine_Texture_o *)0x42ea869;
          __this_04 = pUVar22;
          pUVar22 = (Utility_Color255_o *)
                    UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)pUVar22,(MethodInfo *)0x0);
          pSVar21 = (pCVar29->fields).CustomSet;
          if (((pSVar21 == (Settings_HumanCustomSet_o *)0x0) ||
              (pSVar6 = (pSVar21->fields).HairColor, pSVar6 == (Settings_ColorSetting_o *)0x0)) ||
             (__this_04 = (pSVar6->fields)._value, __this_04 == (Utility_Color255_o *)0x0)) goto label_042eabbd;
          pUStack_188 = (UnityEngine_Texture_o *)0x42ea8a1;
          UVar52 = Utility_Color255__ToColor(__this_04,(MethodInfo *)0x0);
          if (pUVar22 == (Utility_Color255_o *)0x0) goto label_042eabbd;
          pUStack_188 = (UnityEngine_Texture_o *)0x42ea8b4;
          pUVar25 = pUVar22;
          UnityEngine_Material__set_color((UnityEngine_Material_o *)pUVar22,UVar52,(MethodInfo *)0x0);
        }
        uVar47 = (int)pSVar43 + 1;
        pSVar43 = (System_String_Fields *)(ulong)uVar47;
        uVar12 = (uint)((System_Object_array *)pSVar44)->max_length;
        if ((int)uVar12 <= (int)uVar47) goto label_042ea9ed;
        __this_04 = pUVar25;
      } while (uVar47 < uVar12);
    }
  }
  pUStack_188 = (UnityEngine_Texture_o *)0x42eabc7;
  uStack_1a8 = il2cpp_runtime_helper_022b2ca0();
  pUStack_1a0 = pUVar22;
  pCStack_198 = pCVar29;
  pCStack_190 = (Characters_HumanSetup_o *)pSVar43;
  pUStack_188 = (UnityEngine_Texture_o *)value_00;
  if (g_data_057ade96 == '\0') {
    pUStack_1b0 = (Utility_Color255_o *)0x42ead45;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    pUStack_1b0 = (Utility_Color255_o *)0x42ead51;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    pUStack_1b0 = (Utility_Color255_o *)0x42ead5d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    pUStack_1b0 = (Utility_Color255_o *)0x42ead69;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    pUStack_1b0 = (Utility_Color255_o *)0x42ead75;
    il2cpp_runtime_helper_023445d0(&"Eye");
    g_data_057ade96 = '\x01';
    SVar27 = *(System_String_Fields *)&__this_04[8].fields;
    if (g_data_057adea2 != '\0') goto label_042eabfd;
label_042ead91:
    pUStack_1b0 = (Utility_Color255_o *)0x42ead9d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    SVar27 = *(System_String_Fields *)&__this_04[8].fields;
    if (g_data_057adea2 == '\0') goto label_042ead91;
label_042eabfd:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    pUStack_1b0 = (Utility_Color255_o *)0x42eadc0;
    il2cpp_runtime_helper_02337ed0();
  }
  pUStack_1b0 = (Utility_Color255_o *)0x42eac20;
  bVar13 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)SVar27,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 == '\0') {
    if (*(int *)((long)TypeInfo_ResourcePaths + 0xe4) == 0) goto label_042eadf7;
label_042eac3f:
    pvVar7 = __this_04[0xb].monitor;
    SVar31 = TypeInfo_ResourcePaths;
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      pUStack_1b0 = (Utility_Color255_o *)0x42eadd6;
      il2cpp_runtime_helper_02337ed0();
    }
    pUStack_1b0 = (Utility_Color255_o *)0x42eade0;
    UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)SVar27,(MethodInfo *)0x0);
    if (*(int *)((long)TypeInfo_ResourcePaths + 0xe4) != 0) goto label_042eac3f;
label_042eadf7:
    pUStack_1b0 = (Utility_Color255_o *)0x42eadfc;
    il2cpp_runtime_helper_02337ed0();
    pvVar7 = __this_04[0xb].monitor;
    SVar31 = TypeInfo_ResourcePaths;
  }
  pSVar15 = (System_String_o *)0x0;
  TypeInfo_ResourcePaths = SVar31;
  if (pvVar7 != (void *)0x0) {
    SVar27 = *(System_String_Fields *)(*(long *)((long)SVar31 + 0xb8) + 8);
    if (g_data_057adeb7 == '\0') {
      pUStack_1b0 = (Utility_Color255_o *)0x42eac70;
      il2cpp_runtime_helper_023445d0(&"char_eyes");
      g_data_057adeb7 = '\x01';
    }
    value_00 = (UnityEngine_Texture_c **)&__this_04[8].fields;
    pUStack_1b0 = (Utility_Color255_o *)0x42eac94;
    pSVar15 = System_String__Concat_3ae5ba0
                        (*(System_String_o **)((long)pvVar7 + 0x38),"char_eyes",(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      pUStack_1b0 = (Utility_Color255_o *)0x42eacaf;
      il2cpp_runtime_helper_02337ed0();
    }
    pUStack_1b0 = (Utility_Color255_o *)0x42eacc9;
    pIVar26 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                        ((System_String_o *)SVar27,pSVar15,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
    *(Il2CppObject **)&__this_04[8].fields = pIVar26;
    pUStack_1b0 = (Utility_Color255_o *)0x42eacdc;
    SVar31 = (System_String_Fields)value_00;
    il2cpp_runtime_helper_022b4080(value_00,pIVar26);
    pUStack_1b0 = (Utility_Color255_o *)0x42eacf3;
    Characters_HumanSetup__AttachToMount
              ((Characters_HumanSetup_o *)SVar31,*(UnityEngine_GameObject_o **)&__this_04[8].fields,
               (UnityEngine_GameObject_o *)*(System_String_Fields *)&__this_04[10].monitor,0,in_R8);
    if ((__this_04[0xe].monitor != (void *)0x0) &&
       (lVar40 = *(long *)((long)__this_04[0xe].monitor + 0x40), lVar40 != 0)) {
      Characters_HumanSetup__SetFacialTexture
                ((Characters_HumanSetup_o *)SVar31,*(UnityEngine_GameObject_o **)&__this_04[8].fields,
                 "Eye",*(int32_t *)(lVar40 + 0x14),0,in_R9);
      return extraout_RAX_00;
    }
  }
  pUStack_1b0 = (Utility_Color255_o *)0x42eae15;
  pSStack_1e0 = (System_String_o *)il2cpp_runtime_helper_022b2c90();
  pSStack_1d8 = pSVar15;
  pUStack_1d0 = __this_04;
  pSStack_1c8 = (System_Object_array *)pSVar44;
  SStack_1c0 = SVar27;
  pUStack_1b8 = (UnityEngine_Texture_o *)value_00;
  pUStack_1b0 = (Utility_Color255_o *)path;
  if (g_data_057ade97 == '\0') {
    SStack_1e8._stringLength = 0x42eb0a3;
    SStack_1e8._firstChar = 0;
    SStack_1e8._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    SStack_1e8._stringLength = 0x42eb0af;
    SStack_1e8._firstChar = 0;
    SStack_1e8._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetup);
    SStack_1e8._stringLength = 0x42eb0bb;
    SStack_1e8._firstChar = 0;
    SStack_1e8._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    SStack_1e8._stringLength = 0x42eb0c7;
    SStack_1e8._firstChar = 0;
    SStack_1e8._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    SStack_1e8._stringLength = 0x42eb0d3;
    SStack_1e8._firstChar = 0;
    SStack_1e8._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    SStack_1e8._stringLength = 0x42eb0df;
    SStack_1e8._firstChar = 0;
    SStack_1e8._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    SStack_1e8._stringLength = 0x42eb0eb;
    SStack_1e8._firstChar = 0;
    SStack_1e8._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&"None");
    SStack_1e8._stringLength = 0x42eb0f7;
    SStack_1e8._firstChar = 0;
    SStack_1e8._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&"Face");
    g_data_057ade97 = '\x01';
    SVar35 = *(System_String_Fields *)((long)SVar31 + 0x118);
    if (g_data_057adea2 != '\0') goto label_042eae50;
label_042eb113:
    SStack_1e8._stringLength = 0x42eb11f;
    SStack_1e8._firstChar = 0;
    SStack_1e8._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    SVar35 = *(System_String_Fields *)((long)SVar31 + 0x118);
    if (g_data_057adea2 == '\0') goto label_042eb113;
label_042eae50:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    SStack_1e8._stringLength = 0x42eb142;
    SStack_1e8._firstChar = 0;
    SStack_1e8._6_2_ = 0;
    il2cpp_runtime_helper_02337ed0();
  }
  plVar17 = &TypeInfo_Object;
  SStack_1e8._stringLength = 0x42eae73;
  SStack_1e8._firstChar = 0;
  SStack_1e8._6_2_ = 0;
  SVar32 = SVar35;
  bVar13 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)SVar35,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 != '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      SStack_1e8._stringLength = 0x42eae88;
      SStack_1e8._firstChar = 0;
      SStack_1e8._6_2_ = 0;
      il2cpp_runtime_helper_02337ed0();
    }
    SStack_1e8._stringLength = 0x42eae92;
    SStack_1e8._firstChar = 0;
    SStack_1e8._6_2_ = 0;
    SVar32 = SVar35;
    UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)SVar35,(MethodInfo *)0x0);
  }
  if ((*(long *)((long)SVar31 + 0x1c8) != 0) &&
     (lVar40 = *(long *)(*(long *)((long)SVar31 + 0x1c8) + 0x48), lVar40 != 0)) {
    pSVar15 = *(System_String_o **)(lVar40 + 0x18);
    SVar32._stringLength = 0;
    SVar32._firstChar = 0;
    SVar32._6_2_ = 0;
    if (pSVar15 != (System_String_o *)0x0) {
      SStack_1e8._stringLength = 0x42eaec9;
      SStack_1e8._firstChar = 0;
      SStack_1e8._6_2_ = 0;
      SVar27 = (System_String_Fields)System_String__Substring(pSVar15,4,(MethodInfo *)0x0);
      SStack_1e8._stringLength = 0x42eaee0;
      SStack_1e8._firstChar = 0;
      SStack_1e8._6_2_ = 0;
      SVar32 = SVar27;
      bVar13 = System_String__op_Inequality
                         ((System_String_o *)SVar27,(System_String_o *)"None",(MethodInfo *)0x0);
      if ((char)bVar13 == '\0') {
        return (System_String_o *)CONCAT44(extraout_var_00,bVar13);
      }
      if ((*(long *)((long)SVar31 + 0x1c8) != 0) &&
         (lVar40 = *(long *)(*(long *)((long)SVar31 + 0x1c8) + 0x48), lVar40 != 0)) {
        SVar35 = *(System_String_Fields *)(lVar40 + 0x18);
        plVar17 = &TypeInfo_HumanSetup;
        if (*(int *)(TypeInfo_HumanSetup + 0xe4) == 0) {
          SStack_1e8._stringLength = 0x42eaf22;
          SStack_1e8._firstChar = 0;
          SStack_1e8._6_2_ = 0;
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar8 = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_HumanSetup + 0xb8) + 0x40);
        SVar32._stringLength = 0;
        SVar32._firstChar = 0;
        SVar32._6_2_ = 0;
        if (pSVar8 != (System_Collections_Generic_HashSet_object__o *)0x0) {
          SStack_1e8._stringLength = 0x42eaf4b;
          SStack_1e8._firstChar = 0;
          SStack_1e8._6_2_ = 0;
          uVar12 = System_Collections_Generic_HashSet_object___Contains
                             (pSVar8,(Il2CppObject *)SVar35,MethodInfo_Boolean_Contains);
          value_00 = (UnityEngine_Texture_c **)(ulong)uVar12;
          if ((char)uVar12 == '\0') {
            SVar35 = **(System_String_Fields **)(g_data_057b9c00 + 0xb8);
            iVar3 = *(int *)((long)TypeInfo_ResourcePaths + 0xe4);
          }
          else {
            iVar3 = *(int *)((long)TypeInfo_ResourcePaths + 0xe4);
          }
          if (iVar3 == 0) {
            SStack_1e8._stringLength = 0x42eb18a;
            SStack_1e8._firstChar = 0;
            SStack_1e8._6_2_ = 0;
            il2cpp_runtime_helper_02337ed0();
            lVar40 = *(long *)((long)SVar31 + 0x168);
            SVar32 = TypeInfo_ResourcePaths;
          }
          else {
            lVar40 = *(long *)((long)SVar31 + 0x168);
            SVar32 = TypeInfo_ResourcePaths;
          }
          plVar17 = (long *)0x0;
          TypeInfo_ResourcePaths = SVar32;
          if (lVar40 != 0) {
            pSStack_1e0 = *(System_String_o **)
                           (*(UnityEngine_Object_StaticFields **)((long)SVar32 + 0xb8) + 2);
            if (g_data_057adeb8 == '\0') {
              SStack_1e8._stringLength = 0x42eafa2;
              SStack_1e8._firstChar = 0;
              SStack_1e8._6_2_ = 0;
              il2cpp_runtime_helper_023445d0(&"char_face");
              g_data_057adeb8 = '\x01';
            }
            SStack_1e8._stringLength = 0x42eafcb;
            SStack_1e8._firstChar = 0;
            SStack_1e8._6_2_ = 0;
            bVar13 = System_String__op_Inequality
                               ((System_String_o *)SVar35,
                                (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
            if ((char)bVar13 == '\0') {
              SVar35 = "char_face";
            }
            pCVar29 = (Characters_HumanSetup_o *)((long)SVar31 + 0x118);
            SStack_1e8._stringLength = 0x42eafef;
            SStack_1e8._firstChar = 0;
            SStack_1e8._6_2_ = 0;
            pSVar15 = System_String__Concat_3ae5ba0
                                (*(System_String_o **)(lVar40 + 0x38),(System_String_o *)SVar35,
                                 (MethodInfo *)0x0);
            if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
              SStack_1e8._stringLength = 0x42eb00a;
              SStack_1e8._firstChar = 0;
              SStack_1e8._6_2_ = 0;
              il2cpp_runtime_helper_02337ed0();
            }
            SStack_1e8._stringLength = 0x42eb025;
            SStack_1e8._firstChar = 0;
            SStack_1e8._6_2_ = 0;
            pIVar26 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                                (pSStack_1e0,pSVar15,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
            *(Il2CppObject **)((long)SVar31 + 0x118) = pIVar26;
            SStack_1e8._stringLength = 0x42eb038;
            SStack_1e8._firstChar = 0;
            SStack_1e8._6_2_ = 0;
            il2cpp_runtime_helper_022b4080(pCVar29,pIVar26);
            lVar40 = 0x148;
            if ((char)uVar12 != '\0') {
              lVar40 = 0x78;
            }
            SStack_1e8._stringLength = 0x42eb060;
            SStack_1e8._firstChar = 0;
            SStack_1e8._6_2_ = 0;
            Characters_HumanSetup__AttachToMount
                      (pCVar29,*(UnityEngine_GameObject_o **)((long)SVar31 + 0x118),
                       *(UnityEngine_GameObject_o **)((long)SVar31 + lVar40),uVar12 & 0xff,in_R8);
            pUVar23 = *(UnityEngine_GameObject_o **)((long)SVar31 + 0x118);
            SStack_1e8._stringLength = 0x42eb072;
            SStack_1e8._firstChar = 0;
            SStack_1e8._6_2_ = 0;
            iVar14 = System_Int32__Parse((System_String_o *)SVar27,(MethodInfo *)0x0);
            Characters_HumanSetup__SetFacialTexture
                      ((Characters_HumanSetup_o *)SVar27,pUVar23,"Face",iVar14,uVar12 & 0xff,in_R9);
            return extraout_RAX_01;
          }
        }
      }
    }
  }
  SStack_1e8._stringLength = 0x42eb1a3;
  SStack_1e8._firstChar = 0;
  SStack_1e8._6_2_ = 0;
  pSStack_218 = (System_String_o *)il2cpp_runtime_helper_022b2c90();
  plStack_210 = plVar17;
  SStack_208 = SVar31;
  pSStack_200 = (System_Object_array *)pSVar44;
  SStack_1f8 = SVar27;
  pUStack_1f0 = (UnityEngine_Texture_o *)value_00;
  SStack_1e8 = SVar35;
  if (g_data_057ade98 == '\0') {
    SStack_220._stringLength = 0x42eb433;
    SStack_220._firstChar = 0;
    SStack_220._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    SStack_220._stringLength = 0x42eb43f;
    SStack_220._firstChar = 0;
    SStack_220._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetup);
    SStack_220._stringLength = 0x42eb44b;
    SStack_220._firstChar = 0;
    SStack_220._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    SStack_220._stringLength = 0x42eb457;
    SStack_220._firstChar = 0;
    SStack_220._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    SStack_220._stringLength = 0x42eb463;
    SStack_220._firstChar = 0;
    SStack_220._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    SStack_220._stringLength = 0x42eb46f;
    SStack_220._firstChar = 0;
    SStack_220._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    SStack_220._stringLength = 0x42eb47b;
    SStack_220._firstChar = 0;
    SStack_220._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&"None");
    SStack_220._stringLength = 0x42eb487;
    SStack_220._firstChar = 0;
    SStack_220._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&"Glass");
    g_data_057ade98 = '\x01';
    SVar31 = (System_String_Fields)((UnityEngine_Object_o *)((long)SVar32 + 0x120))->klass;
    if (g_data_057adea2 != '\0') goto label_042eb1e0;
label_042eb4a3:
    SStack_220._stringLength = 0x42eb4af;
    SStack_220._firstChar = 0;
    SStack_220._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    SVar31 = (System_String_Fields)((UnityEngine_Object_o *)((long)SVar32 + 0x120))->klass;
    if (g_data_057adea2 == '\0') goto label_042eb4a3;
label_042eb1e0:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    SStack_220._stringLength = 0x42eb4d2;
    SStack_220._firstChar = 0;
    SStack_220._6_2_ = 0;
    il2cpp_runtime_helper_02337ed0();
  }
  plVar17 = &TypeInfo_Object;
  SVar35._stringLength = 0;
  SVar35._firstChar = 0;
  SVar35._6_2_ = 0;
  SStack_220._stringLength = 0x42eb203;
  SStack_220._firstChar = 0;
  SStack_220._6_2_ = 0;
  __this_05 = SVar31;
  bVar13 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)SVar31,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 != '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      SStack_220._stringLength = 0x42eb218;
      SStack_220._firstChar = 0;
      SStack_220._6_2_ = 0;
      il2cpp_runtime_helper_02337ed0();
    }
    SVar35._stringLength = 0;
    SVar35._firstChar = 0;
    SVar35._6_2_ = 0;
    SStack_220._stringLength = 0x42eb222;
    SStack_220._firstChar = 0;
    SStack_220._6_2_ = 0;
    __this_05 = SVar31;
    UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)SVar31,(MethodInfo *)0x0);
  }
  pUVar28 = ((UnityEngine_Object_o *)((long)SVar32 + 0x1c8))->klass;
  if ((pUVar28 != (UnityEngine_Object_c *)0x0) &&
     (pIVar9 = (pUVar28->_1).declaringType, pIVar9 != (Il2CppClass *)0x0)) {
    pSVar15 = (System_String_o *)(pIVar9->_1).namespaze;
    __this_05._stringLength = 0;
    __this_05._firstChar = 0;
    __this_05._6_2_ = 0;
    if (pSVar15 != (System_String_o *)0x0) {
      SStack_220._stringLength = 0x42eb259;
      SStack_220._firstChar = 0;
      SStack_220._6_2_ = 0;
      SVar27 = (System_String_Fields)System_String__Substring(pSVar15,5,(MethodInfo *)0x0);
      SStack_220._stringLength = 0x42eb270;
      SStack_220._firstChar = 0;
      SStack_220._6_2_ = 0;
      SVar35 = "None";
      __this_05 = SVar27;
      bVar13 = System_String__op_Inequality
                         ((System_String_o *)SVar27,(System_String_o *)"None",(MethodInfo *)0x0);
      if ((char)bVar13 == '\0') {
        return (System_String_o *)CONCAT44(extraout_var_01,bVar13);
      }
      pUVar28 = ((UnityEngine_Object_o *)((long)SVar32 + 0x1c8))->klass;
      if ((pUVar28 != (UnityEngine_Object_c *)0x0) &&
         (pIVar9 = (pUVar28->_1).declaringType, pIVar9 != (Il2CppClass *)0x0)) {
        SVar31 = (System_String_Fields)(pIVar9->_1).namespaze;
        plVar17 = &TypeInfo_HumanSetup;
        if (*(int *)(TypeInfo_HumanSetup + 0xe4) == 0) {
          SStack_220._stringLength = 0x42eb2b2;
          SStack_220._firstChar = 0;
          SStack_220._6_2_ = 0;
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar8 = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_HumanSetup + 0xb8) + 0x40);
        __this_05._stringLength = 0;
        __this_05._firstChar = 0;
        __this_05._6_2_ = 0;
        if (pSVar8 != (System_Collections_Generic_HashSet_object__o *)0x0) {
          SStack_220._stringLength = 0x42eb2db;
          SStack_220._firstChar = 0;
          SStack_220._6_2_ = 0;
          SVar35 = SVar31;
          uVar12 = System_Collections_Generic_HashSet_object___Contains
                             (pSVar8,(Il2CppObject *)SVar31,MethodInfo_Boolean_Contains);
          value_00 = (UnityEngine_Texture_c **)(ulong)uVar12;
          if ((char)uVar12 == '\0') {
            SVar31 = **(System_String_Fields **)(g_data_057b9c00 + 0xb8);
            iVar3 = *(int *)((long)TypeInfo_ResourcePaths + 0xe4);
          }
          else {
            iVar3 = *(int *)((long)TypeInfo_ResourcePaths + 0xe4);
          }
          if (iVar3 == 0) {
            SStack_220._stringLength = 0x42eb51a;
            SStack_220._firstChar = 0;
            SStack_220._6_2_ = 0;
            il2cpp_runtime_helper_02337ed0();
            pUVar28 = ((UnityEngine_Object_o *)((long)SVar32 + 0x168))->klass;
            __this_05 = TypeInfo_ResourcePaths;
          }
          else {
            pUVar28 = ((UnityEngine_Object_o *)((long)SVar32 + 0x168))->klass;
            __this_05 = TypeInfo_ResourcePaths;
          }
          plVar17 = (long *)0x0;
          TypeInfo_ResourcePaths = __this_05;
          if (pUVar28 != (UnityEngine_Object_c *)0x0) {
            pSStack_218 = *(System_String_o **)((long)*(System_String_Fields *)((long)__this_05 + 0xb8) + 8);
            if (g_data_057adeb9 == '\0') {
              SStack_220._stringLength = 0x42eb332;
              SStack_220._firstChar = 0;
              SStack_220._6_2_ = 0;
              il2cpp_runtime_helper_023445d0(&"char_glasses");
              g_data_057adeb9 = '\x01';
            }
            SStack_220._stringLength = 0x42eb35b;
            SStack_220._firstChar = 0;
            SStack_220._6_2_ = 0;
            bVar13 = System_String__op_Inequality
                               ((System_String_o *)SVar31,
                                (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
            if ((char)bVar13 == '\0') {
              SVar31 = "char_glasses";
            }
            pCVar29 = (Characters_HumanSetup_o *)((long)SVar32 + 0x120);
            SStack_220._stringLength = 0x42eb37f;
            SStack_220._firstChar = 0;
            SStack_220._6_2_ = 0;
            pSVar15 = System_String__Concat_3ae5ba0
                                (*(System_String_o **)&(pUVar28->_1).this_arg.bits,(System_String_o *)SVar31,
                                 (MethodInfo *)0x0);
            if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
              SStack_220._stringLength = 0x42eb39a;
              SStack_220._firstChar = 0;
              SStack_220._6_2_ = 0;
              il2cpp_runtime_helper_02337ed0();
            }
            SStack_220._stringLength = 0x42eb3b5;
            SStack_220._firstChar = 0;
            SStack_220._6_2_ = 0;
            pUVar28 = (UnityEngine_Object_c *)
                      ApplicationManagers_ResourceManager__InstantiateAsset_object_
                                (pSStack_218,pSVar15,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
            ((UnityEngine_Object_o *)((long)SVar32 + 0x120))->klass = pUVar28;
            SStack_220._stringLength = 0x42eb3c8;
            SStack_220._firstChar = 0;
            SStack_220._6_2_ = 0;
            il2cpp_runtime_helper_022b4080(pCVar29,pUVar28);
            lVar40 = 0x148;
            if ((char)uVar12 != '\0') {
              lVar40 = 0x78;
            }
            SStack_220._stringLength = 0x42eb3f0;
            SStack_220._firstChar = 0;
            SStack_220._6_2_ = 0;
            Characters_HumanSetup__AttachToMount
                      (pCVar29,(UnityEngine_GameObject_o *)
                               ((UnityEngine_Object_o *)((long)SVar32 + 0x120))->klass,
                       *(UnityEngine_GameObject_o **)((long)SVar32 + lVar40),uVar12 & 0xff,in_R8);
            pUVar28 = ((UnityEngine_Object_o *)((long)SVar32 + 0x120))->klass;
            SStack_220._stringLength = 0x42eb402;
            SStack_220._firstChar = 0;
            SStack_220._6_2_ = 0;
            iVar14 = System_Int32__Parse((System_String_o *)SVar27,(MethodInfo *)0x0);
            Characters_HumanSetup__SetFacialTexture
                      ((Characters_HumanSetup_o *)SVar27,(UnityEngine_GameObject_o *)pUVar28,"Glass",
                       iVar14,uVar12 & 0xff,in_R9);
            return extraout_RAX_02;
          }
        }
      }
    }
  }
  SStack_220._stringLength = 0x42eb533;
  SStack_220._firstChar = 0;
  SStack_220._6_2_ = 0;
  il2cpp_runtime_helper_022b2c90();
  plStack_248 = plVar17;
  SStack_240 = SVar32;
  pSStack_238 = (System_Object_array *)pSVar44;
  SStack_230 = SVar27;
  pUStack_228 = (UnityEngine_Texture_o *)value_00;
  SStack_220 = SVar31;
  if (g_data_057ade9e == '\0') {
    SStack_278._stringLength = 0x42ebdc7;
    SStack_278._firstChar = 0;
    SStack_278._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ClothFactory);
    SStack_278._stringLength = 0x42ebdd3;
    SStack_278._firstChar = 0;
    SStack_278._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponent_Renderer);
    SStack_278._stringLength = 0x42ebddf;
    SStack_278._firstChar = 0;
    SStack_278._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupMaterials);
    SStack_278._stringLength = 0x42ebdeb;
    SStack_278._firstChar = 0;
    SStack_278._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    SStack_278._stringLength = 0x42ebdf7;
    SStack_278._firstChar = 0;
    SStack_278._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    SStack_278._stringLength = 0x42ebe03;
    SStack_278._firstChar = 0;
    SStack_278._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    SStack_278._stringLength = 0x42ebe0f;
    SStack_278._firstChar = 0;
    SStack_278._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color255_get_Value);
    SStack_278._stringLength = 0x42ebe1b;
    SStack_278._firstChar = 0;
    SStack_278._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&"Type");
    SStack_278._stringLength = 0x42ebe27;
    SStack_278._firstChar = 0;
    SStack_278._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&"Uniform");
    g_data_057ade9e = '\x01';
    pUVar36 = *(UnityEngine_Object_o **)((long)__this_05 + 0x158);
    if (g_data_057adea2 != '\0') goto label_042eb576;
label_042ebe43:
    SStack_278._stringLength = 0x42ebe4f;
    SStack_278._firstChar = 0;
    SStack_278._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    pUVar36 = *(UnityEngine_Object_o **)((long)__this_05 + 0x158);
    if (g_data_057adea2 == '\0') goto label_042ebe43;
label_042eb576:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    SStack_278._stringLength = 0x42ebe72;
    SStack_278._firstChar = 0;
    SStack_278._6_2_ = 0;
    il2cpp_runtime_helper_02337ed0();
  }
  SStack_278._stringLength = 0x42eb599;
  SStack_278._firstChar = 0;
  SStack_278._6_2_ = 0;
  bVar13 = UnityEngine_Object__op_Inequality(pUVar36,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 == '\0') {
    pUVar36 = *(UnityEngine_Object_o **)((long)__this_05 + 200);
    if (g_data_057adea2 == '\0') goto label_042ebea7;
label_042eb5b6:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      SStack_278._stringLength = 0x42ebe88;
      SStack_278._firstChar = 0;
      SStack_278._6_2_ = 0;
      il2cpp_runtime_helper_02337ed0();
    }
    SStack_278._stringLength = 0x42ebe92;
    SStack_278._firstChar = 0;
    SStack_278._6_2_ = 0;
    UnityEngine_Object__Destroy_4e01c60(pUVar36,(MethodInfo *)0x0);
    pUVar36 = *(UnityEngine_Object_o **)((long)__this_05 + 200);
    if (g_data_057adea2 != '\0') goto label_042eb5b6;
label_042ebea7:
    SStack_278._stringLength = 0x42ebeb3;
    SStack_278._firstChar = 0;
    SStack_278._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    SStack_278._stringLength = 0x42ebecf;
    SStack_278._firstChar = 0;
    SStack_278._6_2_ = 0;
    il2cpp_runtime_helper_02337ed0();
  }
  SStack_278._stringLength = 0x42eb5d2;
  SStack_278._firstChar = 0;
  SStack_278._6_2_ = 0;
  bVar13 = UnityEngine_Object__op_Inequality(pUVar36,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 == '\0') {
    pUVar36 = *(UnityEngine_Object_o **)((long)__this_05 + 0xd0);
    if (g_data_057adea2 == '\0') goto label_042ebf04;
label_042eb5ef:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      SStack_278._stringLength = 0x42ebee5;
      SStack_278._firstChar = 0;
      SStack_278._6_2_ = 0;
      il2cpp_runtime_helper_02337ed0();
    }
    SStack_278._stringLength = 0x42ebeef;
    SStack_278._firstChar = 0;
    SStack_278._6_2_ = 0;
    UnityEngine_Object__Destroy_4e01c60(pUVar36,(MethodInfo *)0x0);
    pUVar36 = *(UnityEngine_Object_o **)((long)__this_05 + 0xd0);
    if (g_data_057adea2 != '\0') goto label_042eb5ef;
label_042ebf04:
    SStack_278._stringLength = 0x42ebf10;
    SStack_278._firstChar = 0;
    SStack_278._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    SStack_278._stringLength = 0x42ebf2c;
    SStack_278._firstChar = 0;
    SStack_278._6_2_ = 0;
    il2cpp_runtime_helper_02337ed0();
  }
  SStack_278._stringLength = 0x42eb60b;
  SStack_278._firstChar = 0;
  SStack_278._6_2_ = 0;
  bVar13 = UnityEngine_Object__op_Inequality(pUVar36,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 == '\0') {
    pUVar36 = *(UnityEngine_Object_o **)((long)__this_05 + 0xd8);
    if (g_data_057adea2 == '\0') goto label_042ebf61;
label_042eb628:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      SStack_278._stringLength = 0x42ebf42;
      SStack_278._firstChar = 0;
      SStack_278._6_2_ = 0;
      il2cpp_runtime_helper_02337ed0();
    }
    SStack_278._stringLength = 0x42ebf4c;
    SStack_278._firstChar = 0;
    SStack_278._6_2_ = 0;
    UnityEngine_Object__Destroy_4e01c60(pUVar36,(MethodInfo *)0x0);
    pUVar36 = *(UnityEngine_Object_o **)((long)__this_05 + 0xd8);
    if (g_data_057adea2 != '\0') goto label_042eb628;
label_042ebf61:
    SStack_278._stringLength = 0x42ebf6d;
    SStack_278._firstChar = 0;
    SStack_278._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    SStack_278._stringLength = 0x42ebf89;
    SStack_278._firstChar = 0;
    SStack_278._6_2_ = 0;
    il2cpp_runtime_helper_02337ed0();
  }
  SStack_278._stringLength = 0x42eb644;
  SStack_278._firstChar = 0;
  SStack_278._6_2_ = 0;
  bVar13 = UnityEngine_Object__op_Inequality(pUVar36,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 == '\0') {
    pUVar36 = *(UnityEngine_Object_o **)((long)__this_05 + 0xe0);
    if (g_data_057adea2 == '\0') goto label_042ebfbe;
label_042eb661:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      SStack_278._stringLength = 0x42ebf9f;
      SStack_278._firstChar = 0;
      SStack_278._6_2_ = 0;
      il2cpp_runtime_helper_02337ed0();
    }
    SStack_278._stringLength = 0x42ebfa9;
    SStack_278._firstChar = 0;
    SStack_278._6_2_ = 0;
    UnityEngine_Object__Destroy_4e01c60(pUVar36,(MethodInfo *)0x0);
    pUVar36 = *(UnityEngine_Object_o **)((long)__this_05 + 0xe0);
    if (g_data_057adea2 != '\0') goto label_042eb661;
label_042ebfbe:
    SStack_278._stringLength = 0x42ebfca;
    SStack_278._firstChar = 0;
    SStack_278._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    SStack_278._stringLength = 0x42ebfe6;
    SStack_278._firstChar = 0;
    SStack_278._6_2_ = 0;
    il2cpp_runtime_helper_02337ed0();
  }
  SStack_278._stringLength = 0x42eb67d;
  SStack_278._firstChar = 0;
  SStack_278._6_2_ = 0;
  bVar13 = UnityEngine_Object__op_Inequality(pUVar36,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 == '\0') {
    pUVar36 = *(UnityEngine_Object_o **)((long)__this_05 + 0xf8);
    if (g_data_057adea2 == '\0') goto label_042ec01b;
label_042eb69a:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      SStack_278._stringLength = 0x42ebffc;
      SStack_278._firstChar = 0;
      SStack_278._6_2_ = 0;
      il2cpp_runtime_helper_02337ed0();
    }
    SStack_278._stringLength = 0x42ec006;
    SStack_278._firstChar = 0;
    SStack_278._6_2_ = 0;
    UnityEngine_Object__Destroy_4e01c60(pUVar36,(MethodInfo *)0x0);
    pUVar36 = *(UnityEngine_Object_o **)((long)__this_05 + 0xf8);
    if (g_data_057adea2 != '\0') goto label_042eb69a;
label_042ec01b:
    SStack_278._stringLength = 0x42ec027;
    SStack_278._firstChar = 0;
    SStack_278._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    SStack_278._stringLength = 0x42ec043;
    SStack_278._firstChar = 0;
    SStack_278._6_2_ = 0;
    il2cpp_runtime_helper_02337ed0();
  }
  SStack_278._stringLength = 0x42eb6b6;
  SStack_278._firstChar = 0;
  SStack_278._6_2_ = 0;
  bVar13 = UnityEngine_Object__op_Inequality(pUVar36,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 == '\0') {
    SVar31 = *(System_String_Fields *)((long)__this_05 + 0x100);
    if (g_data_057adea2 == '\0') goto label_042ec078;
label_042eb6d3:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      SStack_278._stringLength = 0x42ec059;
      SStack_278._firstChar = 0;
      SStack_278._6_2_ = 0;
      il2cpp_runtime_helper_02337ed0();
    }
    SStack_278._stringLength = 0x42ec063;
    SStack_278._firstChar = 0;
    SStack_278._6_2_ = 0;
    UnityEngine_Object__Destroy_4e01c60(pUVar36,(MethodInfo *)0x0);
    SVar31 = *(System_String_Fields *)((long)__this_05 + 0x100);
    if (g_data_057adea2 != '\0') goto label_042eb6d3;
label_042ec078:
    SStack_278._stringLength = 0x42ec084;
    SStack_278._firstChar = 0;
    SStack_278._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    SStack_278._stringLength = 0x42ec0a0;
    SStack_278._firstChar = 0;
    SStack_278._6_2_ = 0;
    il2cpp_runtime_helper_02337ed0();
  }
  method_00._stringLength = 0;
  method_00._firstChar = 0;
  method_00._6_2_ = 0;
  SStack_278._stringLength = 0x42eb6ef;
  SStack_278._firstChar = 0;
  SStack_278._6_2_ = 0;
  bVar13 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)SVar31,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 != '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      SStack_278._stringLength = 0x42eb704;
      SStack_278._firstChar = 0;
      SStack_278._6_2_ = 0;
      il2cpp_runtime_helper_02337ed0();
    }
    method_00._stringLength = 0;
    method_00._firstChar = 0;
    method_00._6_2_ = 0;
    SStack_278._stringLength = 0x42eb70e;
    SStack_278._firstChar = 0;
    SStack_278._6_2_ = 0;
    UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)SVar31,(MethodInfo *)0x0);
  }
  if (*(char *)((long)__this_05 + 0x1e8) == '\0') {
    SVar31 = *(System_String_Fields *)((long)__this_05 + 0x108);
    if (g_data_057adea2 == '\0') {
      SStack_278._stringLength = 0x42eb736;
      SStack_278._firstChar = 0;
      SStack_278._6_2_ = 0;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057adea2 = '\x01';
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      SStack_278._stringLength = 0x42eb74e;
      SStack_278._firstChar = 0;
      SStack_278._6_2_ = 0;
      il2cpp_runtime_helper_02337ed0();
    }
    method_00._stringLength = 0;
    method_00._firstChar = 0;
    method_00._6_2_ = 0;
    SStack_278._stringLength = 0x42eb75a;
    SStack_278._firstChar = 0;
    SStack_278._6_2_ = 0;
    bVar13 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)SVar31,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar13 != '\0') {
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        SStack_278._stringLength = 0x42eb76f;
        SStack_278._firstChar = 0;
        SStack_278._6_2_ = 0;
        il2cpp_runtime_helper_02337ed0();
      }
      method_00._stringLength = 0;
      method_00._firstChar = 0;
      method_00._6_2_ = 0;
      SStack_278._stringLength = 0x42eb779;
      SStack_278._firstChar = 0;
      SStack_278._6_2_ = 0;
      UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)SVar31,(MethodInfo *)0x0);
    }
  }
  SStack_278._stringLength = 0x42eb781;
  SStack_278._firstChar = 0;
  SStack_278._6_2_ = 0;
  Characters_HumanSetup__CreateCape((Characters_HumanSetup_o *)__this_05,(MethodInfo *)method_00);
  __this_07._stringLength = 0;
  __this_07._firstChar = 0;
  __this_07._6_2_ = 0;
  pCVar29 = (Characters_HumanSetup_o *)&TypeInfo_Object;
  if (*(Characters_HumanSetupMeshes_o **)((long)__this_05 + 0x168) != (Characters_HumanSetupMeshes_o *)0x0) {
    SStack_278._stringLength = 0x42eb79c;
    SStack_278._firstChar = 0;
    SStack_278._6_2_ = 0;
    pCVar29 = (Characters_HumanSetup_o *)
              Characters_HumanSetupMeshes__GetChestMesh
                        (*(Characters_HumanSetupMeshes_o **)((long)__this_05 + 0x168),1,method_01);
    method_00 = **(System_String_Fields **)(g_data_057b9c00 + 0xb8);
    SStack_278._stringLength = 0x42eb7c1;
    SStack_278._firstChar = 0;
    SStack_278._6_2_ = 0;
    bVar13 = System_String__op_Inequality
                       ((System_String_o *)pCVar29,(System_String_o *)method_00,(MethodInfo *)0x0);
    pMVar41 = extraout_RDX_00;
    SVar27 = (System_String_Fields)&g_data_057b9b70;
    if ((char)bVar13 == '\0') {
label_042eb8c9:
      __this_07._stringLength = 0;
      __this_07._firstChar = 0;
      __this_07._6_2_ = 0;
      if (*(Characters_HumanSetupMeshes_o **)((long)__this_05 + 0x168) != (Characters_HumanSetupMeshes_o *)0x0
         ) {
        SStack_278._stringLength = 0x42eb8e4;
        SStack_278._firstChar = 0;
        SStack_278._6_2_ = 0;
        SVar31 = (System_String_Fields)
                 Characters_HumanSetupMeshes__GetChestMesh
                           (*(Characters_HumanSetupMeshes_o **)((long)__this_05 + 0x168),2,pMVar41);
        method_00 = **(System_String_Fields **)(g_data_057b9c00 + 0xb8);
        SStack_278._stringLength = 0x42eb902;
        SStack_278._firstChar = 0;
        SStack_278._6_2_ = 0;
        bVar13 = System_String__op_Inequality
                           ((System_String_o *)SVar31,(System_String_o *)method_00,(MethodInfo *)0x0);
        pMVar41 = extraout_RDX_04;
        if ((char)bVar13 == '\0') {
label_042eb9c7:
          __this_07._stringLength = 0;
          __this_07._firstChar = 0;
          __this_07._6_2_ = 0;
          if (*(Characters_HumanSetupMeshes_o **)((long)__this_05 + 0x168) !=
              (Characters_HumanSetupMeshes_o *)0x0) {
            SStack_278._stringLength = 0x42eb9e2;
            SStack_278._firstChar = 0;
            SStack_278._6_2_ = 0;
            SVar31 = (System_String_Fields)
                     Characters_HumanSetupMeshes__GetChestMesh
                               (*(Characters_HumanSetupMeshes_o **)((long)__this_05 + 0x168),3,pMVar41);
            method_00 = **(System_String_Fields **)(g_data_057b9c00 + 0xb8);
            SStack_278._stringLength = 0x42eba00;
            SStack_278._firstChar = 0;
            SStack_278._6_2_ = 0;
            bVar13 = System_String__op_Inequality
                               ((System_String_o *)SVar31,(System_String_o *)method_00,(MethodInfo *)0x0);
            if (((char)bVar13 != '\0') && (*(char *)((long)__this_05 + 0x1e8) == '\0')) {
              pCVar29 = *(Characters_HumanSetup_o **)((long)__this_05 + 0x160);
              if (*(int *)(TypeInfo_ClothFactory + 0xe4) == 0) {
                SStack_278._stringLength = 0x42eba2f;
                SStack_278._firstChar = 0;
                SStack_278._6_2_ = 0;
                il2cpp_runtime_helper_02337ed0();
              }
              SStack_278._stringLength = 0x42eba3f;
              SStack_278._firstChar = 0;
              SStack_278._6_2_ = 0;
              method_00 = (System_String_Fields)
                          ClothFactory__GetCape
                                    ((UnityEngine_GameObject_o *)pCVar29,(System_String_o *)SVar31,
                                     (UnityEngine_Material_o *)SVar35,(MethodInfo *)0x0);
              *(System_String_Fields *)((long)__this_05 + 0x108) = method_00;
              SStack_278._stringLength = 0x42eba57;
              SStack_278._firstChar = 0;
              SStack_278._6_2_ = 0;
              il2cpp_runtime_helper_022b4080((long)__this_05 + 0x108);
            }
            __this_07._stringLength = 0;
            __this_07._firstChar = 0;
            __this_07._6_2_ = 0;
            if (*(Characters_HumanSetupMeshes_o **)((long)__this_05 + 0x168) !=
                (Characters_HumanSetupMeshes_o *)0x0) {
              SVar31 = (System_String_Fields)((long)__this_05 + 0x158);
              SStack_278._stringLength = 0x42eba75;
              SStack_278._firstChar = 0;
              SStack_278._6_2_ = 0;
              pSVar15 = Characters_HumanSetupMeshes__GetBodyMesh
                                  (*(Characters_HumanSetupMeshes_o **)((long)__this_05 + 0x168),
                                   (MethodInfo *)method_00);
              SStack_278._stringLength = 0x42eba80;
              SStack_278._firstChar = 0;
              SStack_278._6_2_ = 0;
              method_00 = (System_String_Fields)
                          Characters_HumanSetup__GenerateCloth
                                    ((Characters_HumanSetup_o *)__this_05,pSVar15,method_03);
              *(System_String_Fields *)((long)__this_05 + 0x158) = method_00;
              SStack_278._stringLength = 0x42eba93;
              SStack_278._firstChar = 0;
              SStack_278._6_2_ = 0;
              il2cpp_runtime_helper_022b4080(SVar31);
              __this_07 = *(System_String_Fields *)((long)__this_05 + 0x158);
              if (__this_07 != (System_String_Fields)0x0) {
                SStack_278._stringLength = 0x42ebab3;
                SStack_278._firstChar = 0;
                SStack_278._6_2_ = 0;
                method_00 = MethodInfo_Renderer_GetComponent_Renderer;
                pUVar33 = (UnityEngine_Renderer_o *)
                          UnityEngine_GameObject__GetComponent_object_
                                    ((UnityEngine_GameObject_o *)__this_07,(MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer)
                ;
                pCVar29 = (Characters_HumanSetup_o *)&MethodInfo_Renderer_GetComponent_Renderer;
                if (pUVar33 != (UnityEngine_Renderer_o *)0x0) {
                  SStack_278._stringLength = 0x42ebac9;
                  SStack_278._firstChar = 0;
                  SStack_278._6_2_ = 0;
                  method_00 = SVar35;
                  UnityEngine_Renderer__set_material
                            (pUVar33,(UnityEngine_Material_o *)SVar35,(MethodInfo *)0x0);
                  __this_07._stringLength = 0;
                  __this_07._firstChar = 0;
                  __this_07._6_2_ = 0;
                  if (*(Characters_HumanSetupTextures_o **)((long)__this_05 + 0x170) !=
                      (Characters_HumanSetupTextures_o *)0x0) {
                    SStack_278._stringLength = 0x42ebadf;
                    SStack_278._firstChar = 0;
                    SStack_278._6_2_ = 0;
                    SVar31 = (System_String_Fields)
                             Characters_HumanSetupTextures__GetBrandTexture
                                       (*(Characters_HumanSetupTextures_o **)((long)__this_05 + 0x170),
                                        (MethodInfo *)method_00);
                    pMVar41 = extraout_RDX_06;
                    if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
                      SStack_278._stringLength = 0x42ebafb;
                      SStack_278._firstChar = 0;
                      SStack_278._6_2_ = 0;
                      il2cpp_runtime_helper_02337ed0();
                      pMVar41 = extraout_RDX_07;
                    }
                    method_00._stringLength = 0;
                    method_00._firstChar = 0;
                    method_00._6_2_ = 0;
                    SStack_278._stringLength = 0x42ebb05;
                    SStack_278._firstChar = 0;
                    SStack_278._6_2_ = 0;
                    SVar32 = (System_String_Fields)
                             Characters_HumanSetupMaterials__GetPartMaterial
                                       ((System_String_o *)SVar31,0,pMVar41);
                    __this_07 = *(System_String_Fields *)((long)__this_05 + 0x1d8);
                    pSVar44 = (System_String_Fields *)&TypeInfo_HumanSetupMaterials;
                    if (__this_07 != (System_String_Fields)0x0) {
                      SStack_278._stringLength = 0x42ebb33;
                      SStack_278._firstChar = 0;
                      SStack_278._6_2_ = 0;
                      method_00 = "Type";
                      SVar34 = (System_String_Fields)
                               (**(code **)(*(long *)__this_07 + 0x1a8))
                                         (__this_07,"Type",*(undefined8 *)(*(long *)__this_07 + 0x1b0));
                      SVar27 = SVar32;
                      if (SVar34 != (System_String_Fields)0x0) {
                        method_00 = *(System_String_Fields *)(*(long *)SVar34 + 0x1d0);
                        SStack_278._stringLength = 0x42ebb4f;
                        SStack_278._firstChar = 0;
                        SStack_278._6_2_ = 0;
                        __this_00 = (System_String_Fields)(**(code **)(*(long *)SVar34 + 0x1c8))();
                        __this_07 = SVar34;
                        if (__this_00 != (System_String_Fields)0x0) {
                          SStack_278._stringLength = 0x42ebb6c;
                          SStack_278._firstChar = 0;
                          SStack_278._6_2_ = 0;
                          method_00 = "Uniform";
                          bVar13 = System_String__StartsWith
                                             ((System_String_o *)__this_00,(System_String_o *)"Uniform",
                                              (MethodInfo *)0x0);
                          if ((char)bVar13 == '\0') {
label_042ebd34:
                            SVar31 = *(System_String_Fields *)((long)__this_05 + 0x170);
                            __this_07 = __this_00;
                            if (SVar31 != (System_String_Fields)0x0) {
                              if (g_data_057adec4 == '\0') {
                                SStack_278._stringLength = 0x42ebd5a;
                                SStack_278._firstChar = 0;
                                SStack_278._6_2_ = 0;
                                il2cpp_runtime_helper_023445d0(&"Skin/skin_blades");
                                SStack_278._stringLength = 0x42ebd66;
                                SStack_278._firstChar = 0;
                                SStack_278._6_2_ = 0;
                                il2cpp_runtime_helper_023445d0(&"Skin/skin_TS");
                                __this_07 = (System_String_Fields)&"Skin/skin_AHSS";
                                SStack_278._stringLength = 0x42ebd72;
                                SStack_278._firstChar = 0;
                                SStack_278._6_2_ = 0;
                                il2cpp_runtime_helper_023445d0();
                                g_data_057adec4 = '\x01';
                              }
                              if (*(System_String_Fields *)((long)SVar31 + 0x10) != (System_String_Fields)0x0)
                              {
                                iVar3 = *(int *)((long)*(System_String_Fields *)((long)SVar31 + 0x10) + 0x1d0)
                                ;
                                if (iVar3 == 1) {
label_042ec0ae:
                                  pSVar43 = (System_String_Fields *)&"Skin/skin_AHSS";
                                  lVar40 = *(long *)((long)__this_05 + 0x1c8);
                                }
                                else if (iVar3 == 2) {
                                  pSVar43 = (System_String_Fields *)&"Skin/skin_TS";
                                  lVar40 = *(long *)((long)__this_05 + 0x1c8);
                                }
                                else {
                                  if (iVar3 == 3) goto label_042ec0ae;
                                  pSVar43 = (System_String_Fields *)&"Skin/skin_blades";
                                  lVar40 = *(long *)((long)__this_05 + 0x1c8);
                                }
                                if ((lVar40 != 0) && (*(long *)(lVar40 + 0x98) != 0)) {
                                  pUVar22 = *(Utility_Color255_o **)(*(long *)(lVar40 + 0x98) + 0x18);
                                  __this_07._stringLength = 0;
                                  __this_07._firstChar = 0;
                                  __this_07._6_2_ = 0;
                                  if (pUVar22 != (Utility_Color255_o *)0x0) {
                                    SVar31 = *pSVar43;
                                    method_00._stringLength = 0;
                                    method_00._firstChar = 0;
                                    method_00._6_2_ = 0;
                                    SStack_278._stringLength = 0x42ec0ed;
                                    SStack_278._firstChar = 0;
                                    SStack_278._6_2_ = 0;
                                    UVar52 = Utility_Color255__ToColor(pUVar22,(MethodInfo *)0x0);
                                    fVar48 = UVar52.fields.r;
                                    fVar49 = UVar52.fields.g;
                                    fVar50 = UVar52.fields.b;
                                    fVar51 = UVar52.fields.a;
                                    if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
                                      auStack_260._8_4_ = extraout_XMM0_Dc_00;
                                      auStack_260._0_8_ = UVar52.fields._0_8_;
                                      auStack_260._12_4_ = extraout_XMM0_Dd_00;
                                      uStack_268 = in_XMM1_Dc;
                                      auStack_270 = UVar52.fields._8_8_;
                                      uStack_264 = in_XMM1_Dd;
                                      SStack_278._stringLength = 0x42ec108;
                                      SStack_278._firstChar = 0;
                                      SStack_278._6_2_ = 0;
                                      il2cpp_runtime_helper_02337ed0();
                                      fVar48 = (float)auStack_260._0_4_;
                                      fVar49 = (float)auStack_260._4_4_;
                                      fVar50 = (float)auStack_270._0_4_;
                                      fVar51 = (float)auStack_270._4_4_;
                                      in_XMM1_Dc = uStack_268;
                                      in_XMM1_Dd = uStack_264;
                                    }
                                    SStack_278._stringLength = 0x42ec119;
                                    SStack_278._firstChar = 0;
                                    SStack_278._6_2_ = 0;
                                    color_00.fields.g = fVar49;
                                    color_00.fields.r = fVar48;
                                    color_00.fields.a = fVar51;
                                    color_00.fields.b = fVar50;
                                    SVar32 = (System_String_Fields)
                                             Characters_HumanSetupMaterials__GetSkinMaterial
                                                       ((System_String_o *)SVar31,color_00,
                                                        (MethodInfo *)method_00);
                                    __this_07 = *(System_String_Fields *)((long)__this_05 + 0x148);
                                    if (__this_07 != (System_String_Fields)0x0) {
                                      SStack_278._stringLength = 0x42ec131;
                                      SStack_278._firstChar = 0;
                                      SStack_278._6_2_ = 0;
                                      method_00 = MethodInfo_Renderer_GetComponent_Renderer;
                                      pUVar33 = (UnityEngine_Renderer_o *)
                                                UnityEngine_GameObject__GetComponent_object_
                                                          ((UnityEngine_GameObject_o *)__this_07,
                                                           (MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer);
                                      SVar31 = SVar32;
                                      if (pUVar33 != (UnityEngine_Renderer_o *)0x0) {
                                        SStack_278._stringLength = 0x42ec143;
                                        SStack_278._firstChar = 0;
                                        SStack_278._6_2_ = 0;
                                        method_00 = SVar32;
                                        UnityEngine_Renderer__set_material
                                                  (pUVar33,(UnityEngine_Material_o *)SVar32,(MethodInfo *)0x0)
                                        ;
                                        __this_07 = *(System_String_Fields *)((long)__this_05 + 0xf0);
                                        if (__this_07 != (System_String_Fields)0x0) {
                                          SStack_278._stringLength = 0x42ec158;
                                          SStack_278._firstChar = 0;
                                          SStack_278._6_2_ = 0;
                                          method_00 = MethodInfo_Renderer_GetComponent_Renderer;
                                          pUVar33 = (UnityEngine_Renderer_o *)
                                                    UnityEngine_GameObject__GetComponent_object_
                                                              ((UnityEngine_GameObject_o *)__this_07,
                                                               (MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer);
                                          if (pUVar33 != (UnityEngine_Renderer_o *)0x0) {
                                            UnityEngine_Renderer__set_material
                                                      (pUVar33,(UnityEngine_Material_o *)SVar32,
                                                       (MethodInfo *)0x0);
                                            return extraout_RAX_03;
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
                            __this_07._stringLength = 0;
                            __this_07._firstChar = 0;
                            __this_07._6_2_ = 0;
                            if (*(Characters_HumanSetupMeshes_o **)((long)__this_05 + 0x168) !=
                                (Characters_HumanSetupMeshes_o *)0x0) {
                              SVar31 = (System_String_Fields)((long)__this_05 + 200);
                              SStack_278._stringLength = 0x42ebb97;
                              SStack_278._firstChar = 0;
                              SStack_278._6_2_ = 0;
                              pSVar15 = Characters_HumanSetupMeshes__GetBrandMesh
                                                  (*(Characters_HumanSetupMeshes_o **)
                                                    ((long)__this_05 + 0x168),1,method_04);
                              SStack_278._stringLength = 0x42ebba2;
                              SStack_278._firstChar = 0;
                              SStack_278._6_2_ = 0;
                              method_00 = (System_String_Fields)
                                          Characters_HumanSetup__GenerateCloth
                                                    ((Characters_HumanSetup_o *)__this_05,pSVar15,method_05);
                              *(System_String_Fields *)((long)__this_05 + 200) = method_00;
                              SStack_278._stringLength = 0x42ebbb5;
                              SStack_278._firstChar = 0;
                              SStack_278._6_2_ = 0;
                              il2cpp_runtime_helper_022b4080(SVar31);
                              __this_07 = *(System_String_Fields *)((long)__this_05 + 200);
                              if (__this_07 != (System_String_Fields)0x0) {
                                SStack_278._stringLength = 0x42ebbce;
                                SStack_278._firstChar = 0;
                                SStack_278._6_2_ = 0;
                                method_00 = MethodInfo_Renderer_GetComponent_Renderer;
                                pUVar33 = (UnityEngine_Renderer_o *)
                                          UnityEngine_GameObject__GetComponent_object_
                                                    ((UnityEngine_GameObject_o *)__this_07,
                                                     (MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer);
                                if (pUVar33 != (UnityEngine_Renderer_o *)0x0) {
                                  SStack_278._stringLength = 0x42ebbe4;
                                  SStack_278._firstChar = 0;
                                  SStack_278._6_2_ = 0;
                                  method_00 = SVar32;
                                  UnityEngine_Renderer__set_material
                                            (pUVar33,(UnityEngine_Material_o *)SVar32,(MethodInfo *)0x0);
                                  __this_07._stringLength = 0;
                                  __this_07._firstChar = 0;
                                  __this_07._6_2_ = 0;
                                  if (*(Characters_HumanSetupMeshes_o **)((long)__this_05 + 0x168) !=
                                      (Characters_HumanSetupMeshes_o *)0x0) {
                                    SVar31 = (System_String_Fields)((long)__this_05 + 0xd0);
                                    SStack_278._stringLength = 0x42ebc07;
                                    SStack_278._firstChar = 0;
                                    SStack_278._6_2_ = 0;
                                    pSVar15 = Characters_HumanSetupMeshes__GetBrandMesh
                                                        (*(Characters_HumanSetupMeshes_o **)
                                                          ((long)__this_05 + 0x168),2,method_06);
                                    SStack_278._stringLength = 0x42ebc12;
                                    SStack_278._firstChar = 0;
                                    SStack_278._6_2_ = 0;
                                    method_00 = (System_String_Fields)
                                                Characters_HumanSetup__GenerateCloth
                                                          ((Characters_HumanSetup_o *)__this_05,pSVar15,
                                                           method_07);
                                    *(System_String_Fields *)((long)__this_05 + 0xd0) = method_00;
                                    SStack_278._stringLength = 0x42ebc25;
                                    SStack_278._firstChar = 0;
                                    SStack_278._6_2_ = 0;
                                    il2cpp_runtime_helper_022b4080(SVar31);
                                    __this_07 = *(System_String_Fields *)((long)__this_05 + 0xd0);
                                    if (__this_07 != (System_String_Fields)0x0) {
                                      SStack_278._stringLength = 0x42ebc3e;
                                      SStack_278._firstChar = 0;
                                      SStack_278._6_2_ = 0;
                                      method_00 = MethodInfo_Renderer_GetComponent_Renderer;
                                      pUVar33 = (UnityEngine_Renderer_o *)
                                                UnityEngine_GameObject__GetComponent_object_
                                                          ((UnityEngine_GameObject_o *)__this_07,
                                                           (MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer);
                                      if (pUVar33 != (UnityEngine_Renderer_o *)0x0) {
                                        SStack_278._stringLength = 0x42ebc54;
                                        SStack_278._firstChar = 0;
                                        SStack_278._6_2_ = 0;
                                        method_00 = SVar32;
                                        UnityEngine_Renderer__set_material
                                                  (pUVar33,(UnityEngine_Material_o *)SVar32,(MethodInfo *)0x0)
                                        ;
                                        __this_07._stringLength = 0;
                                        __this_07._firstChar = 0;
                                        __this_07._6_2_ = 0;
                                        if (*(Characters_HumanSetupMeshes_o **)((long)__this_05 + 0x168) !=
                                            (Characters_HumanSetupMeshes_o *)0x0) {
                                          SVar31 = (System_String_Fields)((long)__this_05 + 0xd8);
                                          SStack_278._stringLength = 0x42ebc77;
                                          SStack_278._firstChar = 0;
                                          SStack_278._6_2_ = 0;
                                          pSVar15 = Characters_HumanSetupMeshes__GetBrandMesh
                                                              (*(Characters_HumanSetupMeshes_o **)
                                                                ((long)__this_05 + 0x168),3,method_08);
                                          SStack_278._stringLength = 0x42ebc82;
                                          SStack_278._firstChar = 0;
                                          SStack_278._6_2_ = 0;
                                          method_00 = (System_String_Fields)
                                                      Characters_HumanSetup__GenerateCloth
                                                                ((Characters_HumanSetup_o *)__this_05,pSVar15,
                                                                 method_09);
                                          *(System_String_Fields *)((long)__this_05 + 0xd8) = method_00;
                                          SStack_278._stringLength = 0x42ebc95;
                                          SStack_278._firstChar = 0;
                                          SStack_278._6_2_ = 0;
                                          il2cpp_runtime_helper_022b4080(SVar31);
                                          __this_07 = *(System_String_Fields *)((long)__this_05 + 0xd8);
                                          if (__this_07 != (System_String_Fields)0x0) {
                                            SStack_278._stringLength = 0x42ebcae;
                                            SStack_278._firstChar = 0;
                                            SStack_278._6_2_ = 0;
                                            method_00 = MethodInfo_Renderer_GetComponent_Renderer;
                                            pUVar33 = (UnityEngine_Renderer_o *)
                                                      UnityEngine_GameObject__GetComponent_object_
                                                                ((UnityEngine_GameObject_o *)__this_07,
                                                                 (MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer);
                                            if (pUVar33 != (UnityEngine_Renderer_o *)0x0) {
                                              SStack_278._stringLength = 0x42ebcc4;
                                              SStack_278._firstChar = 0;
                                              SStack_278._6_2_ = 0;
                                              method_00 = SVar32;
                                              UnityEngine_Renderer__set_material
                                                        (pUVar33,(UnityEngine_Material_o *)SVar32,
                                                         (MethodInfo *)0x0);
                                              __this_07._stringLength = 0;
                                              __this_07._firstChar = 0;
                                              __this_07._6_2_ = 0;
                                              if (*(Characters_HumanSetupMeshes_o **)((long)__this_05 + 0x168)
                                                  != (Characters_HumanSetupMeshes_o *)0x0) {
                                                SVar31 = (System_String_Fields)((long)__this_05 + 0xe0);
                                                SStack_278._stringLength = 0x42ebce7;
                                                SStack_278._firstChar = 0;
                                                SStack_278._6_2_ = 0;
                                                pSVar15 = Characters_HumanSetupMeshes__GetBrandMesh
                                                                    (*(Characters_HumanSetupMeshes_o **)
                                                                      ((long)__this_05 + 0x168),4,method_10);
                                                SStack_278._stringLength = 0x42ebcf2;
                                                SStack_278._firstChar = 0;
                                                SStack_278._6_2_ = 0;
                                                method_00 = (System_String_Fields)
                                                            Characters_HumanSetup__GenerateCloth
                                                                      ((Characters_HumanSetup_o *)__this_05,
                                                                       pSVar15,method_11);
                                                *(System_String_Fields *)((long)__this_05 + 0xe0) = method_00;
                                                SStack_278._stringLength = 0x42ebd05;
                                                SStack_278._firstChar = 0;
                                                SStack_278._6_2_ = 0;
                                                il2cpp_runtime_helper_022b4080(SVar31);
                                                __this_07 = *(System_String_Fields *)((long)__this_05 + 0xe0);
                                                if (__this_07 != (System_String_Fields)0x0) {
                                                  SStack_278._stringLength = 0x42ebd1e;
                                                  SStack_278._firstChar = 0;
                                                  SStack_278._6_2_ = 0;
                                                  method_00 = MethodInfo_Renderer_GetComponent_Renderer;
                                                  __this_00 = (System_String_Fields)
                                                              UnityEngine_GameObject__GetComponent_object_
                                                                        ((UnityEngine_GameObject_o *)__this_07
                                                                         ,(MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer);
                                                  if (__this_00 != (System_String_Fields)0x0) {
                                                    SStack_278._stringLength = 0x42ebd34;
                                                    SStack_278._firstChar = 0;
                                                    SStack_278._6_2_ = 0;
                                                    method_00 = SVar32;
                                                    UnityEngine_Renderer__set_material
                                                              ((UnityEngine_Renderer_o *)__this_00,
                                                               (UnityEngine_Material_o *)SVar32,
                                                               (MethodInfo *)0x0);
                                                    goto label_042ebd34;
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
          }
        }
        else {
          if (*(int *)((long)TypeInfo_ResourcePaths + 0xe4) == 0) {
            SStack_278._stringLength = 0x42eb922;
            SStack_278._firstChar = 0;
            SStack_278._6_2_ = 0;
            il2cpp_runtime_helper_02337ed0();
          }
          pCVar29 = (Characters_HumanSetup_o *)((long)__this_05 + 0x100);
          pSVar44 = *(System_String_Fields **)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
          if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
            SStack_278._stringLength = 0x42eb950;
            SStack_278._firstChar = 0;
            SStack_278._6_2_ = 0;
            il2cpp_runtime_helper_02337ed0();
          }
          SStack_278._stringLength = 0x42eb96a;
          SStack_278._firstChar = 0;
          SStack_278._6_2_ = 0;
          pIVar26 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                              ((System_String_o *)pSVar44,(System_String_o *)SVar31,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
          *(Il2CppObject **)((long)__this_05 + 0x100) = pIVar26;
          SStack_278._stringLength = 0x42eb97d;
          SStack_278._firstChar = 0;
          SStack_278._6_2_ = 0;
          pCVar30 = pCVar29;
          il2cpp_runtime_helper_022b4080(pCVar29,pIVar26);
          method_00 = *(System_String_Fields *)((long)__this_05 + 0x100);
          SStack_278._stringLength = 0x42eb991;
          SStack_278._firstChar = 0;
          SStack_278._6_2_ = 0;
          Characters_HumanSetup__AttachToMount
                    (pCVar30,(UnityEngine_GameObject_o *)method_00,
                     *(UnityEngine_GameObject_o **)((long)__this_05 + 0x20),0,in_R8);
          __this_07 = *(System_String_Fields *)((long)__this_05 + 0x100);
          if (__this_07 != (System_String_Fields)0x0) {
            SStack_278._stringLength = 0x42eb9b1;
            SStack_278._firstChar = 0;
            SStack_278._6_2_ = 0;
            method_00 = MethodInfo_Renderer_GetComponent_Renderer;
            pUVar33 = (UnityEngine_Renderer_o *)
                      UnityEngine_GameObject__GetComponent_object_
                                ((UnityEngine_GameObject_o *)__this_07,(MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer);
            if (pUVar33 != (UnityEngine_Renderer_o *)0x0) {
              SStack_278._stringLength = 0x42eb9c7;
              SStack_278._firstChar = 0;
              SStack_278._6_2_ = 0;
              method_00 = SVar35;
              UnityEngine_Renderer__set_material(pUVar33,(UnityEngine_Material_o *)SVar35,(MethodInfo *)0x0);
              pMVar41 = extraout_RDX_05;
              goto label_042eb9c7;
            }
          }
        }
      }
    }
    else {
      if (*(int *)((long)TypeInfo_ResourcePaths + 0xe4) == 0) {
        SStack_278._stringLength = 0x42eb7e1;
        SStack_278._firstChar = 0;
        SStack_278._6_2_ = 0;
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar44 = (System_String_Fields *)((long)__this_05 + 0xf8);
      SVar31 = *(System_String_Fields *)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        SStack_278._stringLength = 0x42eb80f;
        SStack_278._firstChar = 0;
        SStack_278._6_2_ = 0;
        il2cpp_runtime_helper_02337ed0();
      }
      SStack_278._stringLength = 0x42eb829;
      SStack_278._firstChar = 0;
      SStack_278._6_2_ = 0;
      pIVar26 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                          ((System_String_o *)SVar31,(System_String_o *)pCVar29,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
      *(Il2CppObject **)((long)__this_05 + 0xf8) = pIVar26;
      SStack_278._stringLength = 0x42eb83c;
      SStack_278._firstChar = 0;
      SStack_278._6_2_ = 0;
      __this_06 = (System_Object_array *)pSVar44;
      il2cpp_runtime_helper_022b4080(pSVar44,pIVar26);
      method_00 = *(System_String_Fields *)((long)__this_05 + 0xf8);
      SStack_278._stringLength = 0x42eb850;
      SStack_278._firstChar = 0;
      SStack_278._6_2_ = 0;
      Characters_HumanSetup__AttachToMount
                ((Characters_HumanSetup_o *)__this_06,(UnityEngine_GameObject_o *)method_00,
                 *(UnityEngine_GameObject_o **)((long)__this_05 + 0x20),0,in_R8);
      __this_07._stringLength = 0;
      __this_07._firstChar = 0;
      __this_07._6_2_ = 0;
      if (*(UnityEngine_GameObject_o **)((long)__this_05 + 0xf8) != (UnityEngine_GameObject_o *)0x0) {
        SStack_278._stringLength = 0x42eb870;
        SStack_278._firstChar = 0;
        SStack_278._6_2_ = 0;
        method_00 = MethodInfo_Renderer_GetComponent_Renderer;
        pCVar30 = (Characters_HumanSetup_o *)
                  UnityEngine_GameObject__GetComponent_object_
                            (*(UnityEngine_GameObject_o **)((long)__this_05 + 0xf8),
                             (MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer);
        __this_07._stringLength = 0;
        __this_07._firstChar = 0;
        __this_07._6_2_ = 0;
        if (*(Characters_HumanSetupTextures_o **)((long)__this_05 + 0x170) !=
            (Characters_HumanSetupTextures_o *)0x0) {
          SStack_278._stringLength = 0x42eb88e;
          SStack_278._firstChar = 0;
          SStack_278._6_2_ = 0;
          SVar31 = (System_String_Fields)
                   Characters_HumanSetupTextures__GetChestTexture
                             (*(Characters_HumanSetupTextures_o **)((long)__this_05 + 0x170),1,method_02);
          pMVar41 = extraout_RDX_01;
          if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
            SStack_278._stringLength = 0x42eb8a9;
            SStack_278._firstChar = 0;
            SStack_278._6_2_ = 0;
            il2cpp_runtime_helper_02337ed0();
            pMVar41 = extraout_RDX_02;
          }
          method_00._stringLength = 0;
          method_00._firstChar = 0;
          method_00._6_2_ = 0;
          SStack_278._stringLength = 0x42eb8b3;
          SStack_278._firstChar = 0;
          SStack_278._6_2_ = 0;
          __this_07 = SVar31;
          SVar32 = (System_String_Fields)
                   Characters_HumanSetupMaterials__GetPartMaterial((System_String_o *)SVar31,0,pMVar41);
          pCVar29 = pCVar30;
          if (pCVar30 != (Characters_HumanSetup_o *)0x0) {
            SStack_278._stringLength = 0x42eb8c9;
            SStack_278._firstChar = 0;
            SStack_278._6_2_ = 0;
            UnityEngine_Renderer__set_material
                      ((UnityEngine_Renderer_o *)pCVar30,(UnityEngine_Material_o *)SVar32,(MethodInfo *)0x0);
            pMVar41 = extraout_RDX_03;
            method_00 = SVar32;
            goto label_042eb8c9;
          }
        }
      }
    }
  }
  SStack_278._stringLength = 0x42ec195;
  SStack_278._firstChar = 0;
  SStack_278._6_2_ = 0;
  il2cpp_runtime_helper_022b2c90();
  SStack_2a0 = SVar31;
  SStack_298 = __this_05;
  pSStack_290 = (System_Object_array *)pSVar44;
  SStack_288 = SVar27;
  pCStack_280 = pCVar29;
  SStack_278 = SVar35;
  if (g_data_057ade9c == '\0') {
    SStack_2d0._stringLength = 0x42ec355;
    SStack_2d0._firstChar = 0;
    SStack_2d0._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponent_Renderer);
    SStack_2d0._stringLength = 0x42ec361;
    SStack_2d0._firstChar = 0;
    SStack_2d0._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupMaterials);
    SStack_2d0._stringLength = 0x42ec36d;
    SStack_2d0._firstChar = 0;
    SStack_2d0._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color255_get_Value);
    g_data_057ade9c = '\x01';
    pUVar36 = *(UnityEngine_Object_o **)((long)__this_07 + 0xa8);
    if (g_data_057adea2 != '\0') goto label_042ec1d5;
label_042ec388:
    SStack_2d0._stringLength = 0x42ec394;
    SStack_2d0._firstChar = 0;
    SStack_2d0._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    pUVar36 = *(UnityEngine_Object_o **)((long)__this_07 + 0xa8);
    if (g_data_057adea2 == '\0') goto label_042ec388;
label_042ec1d5:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    SStack_2d0._stringLength = 0x42ec3b8;
    SStack_2d0._firstChar = 0;
    SStack_2d0._6_2_ = 0;
    il2cpp_runtime_helper_02337ed0();
  }
  plVar17 = &TypeInfo_Object;
  SStack_2d0._stringLength = 0x42ec1f9;
  SStack_2d0._firstChar = 0;
  SStack_2d0._6_2_ = 0;
  bVar13 = UnityEngine_Object__op_Inequality(pUVar36,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 == '\0') {
    pUVar36 = *(UnityEngine_Object_o **)((long)__this_07 + 0x138);
    if (g_data_057adea2 == '\0') goto label_042ec3ed;
label_042ec215:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      SStack_2d0._stringLength = 0x42ec3cf;
      SStack_2d0._firstChar = 0;
      SStack_2d0._6_2_ = 0;
      il2cpp_runtime_helper_02337ed0();
    }
    SStack_2d0._stringLength = 0x42ec3d9;
    SStack_2d0._firstChar = 0;
    SStack_2d0._6_2_ = 0;
    UnityEngine_Object__Destroy_4e01c60(pUVar36,(MethodInfo *)0x0);
    pUVar36 = *(UnityEngine_Object_o **)((long)__this_07 + 0x138);
    if (g_data_057adea2 != '\0') goto label_042ec215;
label_042ec3ed:
    SStack_2d0._stringLength = 0x42ec3f9;
    SStack_2d0._firstChar = 0;
    SStack_2d0._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    SStack_2d0._stringLength = 0x42ec416;
    SStack_2d0._firstChar = 0;
    SStack_2d0._6_2_ = 0;
    il2cpp_runtime_helper_02337ed0();
  }
  SStack_2d0._stringLength = 0x42ec232;
  SStack_2d0._firstChar = 0;
  SStack_2d0._6_2_ = 0;
  bVar13 = UnityEngine_Object__op_Inequality(pUVar36,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 == '\0') {
    pUVar36 = *(UnityEngine_Object_o **)((long)__this_07 + 0xb0);
    if (g_data_057adea2 == '\0') goto label_042ec44b;
label_042ec24e:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      SStack_2d0._stringLength = 0x42ec42d;
      SStack_2d0._firstChar = 0;
      SStack_2d0._6_2_ = 0;
      il2cpp_runtime_helper_02337ed0();
    }
    SStack_2d0._stringLength = 0x42ec437;
    SStack_2d0._firstChar = 0;
    SStack_2d0._6_2_ = 0;
    UnityEngine_Object__Destroy_4e01c60(pUVar36,(MethodInfo *)0x0);
    pUVar36 = *(UnityEngine_Object_o **)((long)__this_07 + 0xb0);
    if (g_data_057adea2 != '\0') goto label_042ec24e;
label_042ec44b:
    SStack_2d0._stringLength = 0x42ec457;
    SStack_2d0._firstChar = 0;
    SStack_2d0._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    SStack_2d0._stringLength = 0x42ec474;
    SStack_2d0._firstChar = 0;
    SStack_2d0._6_2_ = 0;
    il2cpp_runtime_helper_02337ed0();
  }
  SStack_2d0._stringLength = 0x42ec26b;
  SStack_2d0._firstChar = 0;
  SStack_2d0._6_2_ = 0;
  bVar13 = UnityEngine_Object__op_Inequality(pUVar36,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 == '\0') {
    SVar27 = *(System_String_Fields *)((long)__this_07 + 0x140);
    if (g_data_057adea2 == '\0') goto label_042ec4a9;
label_042ec287:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      SStack_2d0._stringLength = 0x42ec48b;
      SStack_2d0._firstChar = 0;
      SStack_2d0._6_2_ = 0;
      il2cpp_runtime_helper_02337ed0();
    }
    SStack_2d0._stringLength = 0x42ec495;
    SStack_2d0._firstChar = 0;
    SStack_2d0._6_2_ = 0;
    UnityEngine_Object__Destroy_4e01c60(pUVar36,(MethodInfo *)0x0);
    SVar27 = *(System_String_Fields *)((long)__this_07 + 0x140);
    if (g_data_057adea2 != '\0') goto label_042ec287;
label_042ec4a9:
    SStack_2d0._stringLength = 0x42ec4b5;
    SStack_2d0._firstChar = 0;
    SStack_2d0._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    SStack_2d0._stringLength = 0x42ec4d2;
    SStack_2d0._firstChar = 0;
    SStack_2d0._6_2_ = 0;
    il2cpp_runtime_helper_02337ed0();
  }
  SVar34._stringLength = 0;
  SVar34._firstChar = 0;
  SVar34._6_2_ = 0;
  SStack_2d0._stringLength = 0x42ec2a4;
  SStack_2d0._firstChar = 0;
  SStack_2d0._6_2_ = 0;
  SVar31 = SVar27;
  bVar13 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)SVar27,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 != '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      SStack_2d0._stringLength = 0x42ec2ba;
      SStack_2d0._firstChar = 0;
      SStack_2d0._6_2_ = 0;
      il2cpp_runtime_helper_02337ed0();
    }
    SVar34._stringLength = 0;
    SVar34._firstChar = 0;
    SVar34._6_2_ = 0;
    SStack_2d0._stringLength = 0x42ec2c4;
    SStack_2d0._firstChar = 0;
    SStack_2d0._6_2_ = 0;
    SVar31 = SVar27;
    UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)SVar27,(MethodInfo *)0x0);
  }
  lVar40 = *(long *)((long)__this_07 + 0x170);
  if (lVar40 != 0) {
    if (g_data_057adec4 == '\0') {
      SStack_2d0._stringLength = 0x42ec2e9;
      SStack_2d0._firstChar = 0;
      SStack_2d0._6_2_ = 0;
      il2cpp_runtime_helper_023445d0(&"Skin/skin_blades");
      SStack_2d0._stringLength = 0x42ec2f5;
      SStack_2d0._firstChar = 0;
      SStack_2d0._6_2_ = 0;
      il2cpp_runtime_helper_023445d0(&"Skin/skin_TS");
      SVar31 = (System_String_Fields)&"Skin/skin_AHSS";
      SStack_2d0._stringLength = 0x42ec301;
      SStack_2d0._firstChar = 0;
      SStack_2d0._6_2_ = 0;
      il2cpp_runtime_helper_023445d0();
      g_data_057adec4 = '\x01';
    }
    if (*(long *)(lVar40 + 0x10) != 0) {
      iVar3 = *(int *)(*(long *)(lVar40 + 0x10) + 0x1d0);
      if (iVar3 == 1) {
label_042ec4e0:
        pSVar43 = (System_String_Fields *)&"Skin/skin_AHSS";
        lVar10 = *(long *)((long)__this_07 + 0x1c8);
      }
      else if (iVar3 == 2) {
        pSVar43 = (System_String_Fields *)&"Skin/skin_TS";
        lVar10 = *(long *)((long)__this_07 + 0x1c8);
      }
      else {
        if (iVar3 == 3) goto label_042ec4e0;
        pSVar43 = (System_String_Fields *)&"Skin/skin_blades";
        lVar10 = *(long *)((long)__this_07 + 0x1c8);
      }
      if ((lVar10 != 0) && (*(long *)(lVar10 + 0x98) != 0)) {
        pUVar22 = *(Utility_Color255_o **)(*(long *)(lVar10 + 0x98) + 0x18);
        SVar31._stringLength = 0;
        SVar31._firstChar = 0;
        SVar31._6_2_ = 0;
        if (pUVar22 != (Utility_Color255_o *)0x0) {
          SVar27 = *pSVar43;
          SVar34._stringLength = 0;
          SVar34._firstChar = 0;
          SVar34._6_2_ = 0;
          SStack_2d0._stringLength = 0x42ec51e;
          SStack_2d0._firstChar = 0;
          SStack_2d0._6_2_ = 0;
          UVar52 = Utility_Color255__ToColor(pUVar22,(MethodInfo *)0x0);
          fVar48 = UVar52.fields.r;
          fVar49 = UVar52.fields.g;
          fVar50 = UVar52.fields.b;
          fVar51 = UVar52.fields.a;
          if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
            auStack_2b8._8_4_ = extraout_XMM0_Dc_01;
            auStack_2b8._0_8_ = UVar52.fields._0_8_;
            auStack_2b8._12_4_ = extraout_XMM0_Dd_01;
            auStack_2c8._8_4_ = in_XMM1_Dc;
            auStack_2c8._0_8_ = UVar52.fields._8_8_;
            auStack_2c8._12_4_ = in_XMM1_Dd;
            SStack_2d0._stringLength = 0x42ec53f;
            SStack_2d0._firstChar = 0;
            SStack_2d0._6_2_ = 0;
            il2cpp_runtime_helper_02337ed0();
            fVar48 = (float)auStack_2b8._0_4_;
            fVar49 = (float)auStack_2b8._4_4_;
            fVar50 = (float)auStack_2c8._0_4_;
            fVar51 = (float)auStack_2c8._4_4_;
          }
          SStack_2d0._stringLength = 0x42ec550;
          SStack_2d0._firstChar = 0;
          SStack_2d0._6_2_ = 0;
          color_01.fields.g = fVar49;
          color_01.fields.r = fVar48;
          color_01.fields.a = fVar51;
          color_01.fields.b = fVar50;
          SVar35 = (System_String_Fields)
                   Characters_HumanSetupMaterials__GetSkinMaterial
                             ((System_String_o *)SVar27,color_01,(MethodInfo *)SVar34);
          SVar31._stringLength = 0;
          SVar31._firstChar = 0;
          SVar31._6_2_ = 0;
          if (*(Characters_HumanSetupMeshes_o **)((long)__this_07 + 0x168) !=
              (Characters_HumanSetupMeshes_o *)0x0) {
            plVar17 = (long *)((long)__this_07 + 0xa8);
            SStack_2d0._stringLength = 0x42ec574;
            SStack_2d0._firstChar = 0;
            SStack_2d0._6_2_ = 0;
            pSVar15 = Characters_HumanSetupMeshes__GetArmMesh
                                (*(Characters_HumanSetupMeshes_o **)((long)__this_07 + 0x168),1,method_12);
            SStack_2d0._stringLength = 0x42ec57f;
            SStack_2d0._firstChar = 0;
            SStack_2d0._6_2_ = 0;
            SVar34 = (System_String_Fields)
                     Characters_HumanSetup__GenerateCloth
                               ((Characters_HumanSetup_o *)__this_07,pSVar15,method_13);
            *(System_String_Fields *)((long)__this_07 + 0xa8) = SVar34;
            SStack_2d0._stringLength = 0x42ec591;
            SStack_2d0._firstChar = 0;
            SStack_2d0._6_2_ = 0;
            il2cpp_runtime_helper_022b4080(plVar17);
            SVar31 = *(System_String_Fields *)((long)__this_07 + 0xa8);
            SVar27 = SVar35;
            if (SVar31 != (System_String_Fields)0x0) {
              pSVar44 = &MethodInfo_Renderer_GetComponent_Renderer;
              SStack_2d0._stringLength = 0x42ec5b1;
              SStack_2d0._firstChar = 0;
              SStack_2d0._6_2_ = 0;
              SVar34 = MethodInfo_Renderer_GetComponent_Renderer;
              pUVar33 = (UnityEngine_Renderer_o *)
                        UnityEngine_GameObject__GetComponent_object_
                                  ((UnityEngine_GameObject_o *)SVar31,(MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer);
              if (pUVar33 != (UnityEngine_Renderer_o *)0x0) {
                SStack_2d0._stringLength = 0x42ec5c7;
                SStack_2d0._firstChar = 0;
                SStack_2d0._6_2_ = 0;
                SVar34 = method_00;
                UnityEngine_Renderer__set_material
                          (pUVar33,(UnityEngine_Material_o *)method_00,(MethodInfo *)0x0);
                SVar31._stringLength = 0;
                SVar31._firstChar = 0;
                SVar31._6_2_ = 0;
                if (*(Characters_HumanSetupMeshes_o **)((long)__this_07 + 0x168) !=
                    (Characters_HumanSetupMeshes_o *)0x0) {
                  plVar17 = (long *)((long)__this_07 + 0x138);
                  SStack_2d0._stringLength = 0x42ec5e8;
                  SStack_2d0._firstChar = 0;
                  SStack_2d0._6_2_ = 0;
                  pSVar15 = Characters_HumanSetupMeshes__GetHandMesh
                                      (*(Characters_HumanSetupMeshes_o **)((long)__this_07 + 0x168),1,
                                       method_14);
                  SStack_2d0._stringLength = 0x42ec5f3;
                  SStack_2d0._firstChar = 0;
                  SStack_2d0._6_2_ = 0;
                  SVar34 = (System_String_Fields)
                           Characters_HumanSetup__GenerateCloth
                                     ((Characters_HumanSetup_o *)__this_07,pSVar15,method_15);
                  *(System_String_Fields *)((long)__this_07 + 0x138) = SVar34;
                  SStack_2d0._stringLength = 0x42ec605;
                  SStack_2d0._firstChar = 0;
                  SStack_2d0._6_2_ = 0;
                  il2cpp_runtime_helper_022b4080(plVar17);
                  SVar31 = *(System_String_Fields *)((long)__this_07 + 0x138);
                  if (SVar31 != (System_String_Fields)0x0) {
                    SStack_2d0._stringLength = 0x42ec61e;
                    SStack_2d0._firstChar = 0;
                    SStack_2d0._6_2_ = 0;
                    SVar34 = MethodInfo_Renderer_GetComponent_Renderer;
                    pUVar33 = (UnityEngine_Renderer_o *)
                              UnityEngine_GameObject__GetComponent_object_
                                        ((UnityEngine_GameObject_o *)SVar31,(MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer
                                        );
                    if (pUVar33 != (UnityEngine_Renderer_o *)0x0) {
                      SStack_2d0._stringLength = 0x42ec634;
                      SStack_2d0._firstChar = 0;
                      SStack_2d0._6_2_ = 0;
                      SVar34 = SVar35;
                      UnityEngine_Renderer__set_material
                                (pUVar33,(UnityEngine_Material_o *)SVar35,(MethodInfo *)0x0);
                      SVar31._stringLength = 0;
                      SVar31._firstChar = 0;
                      SVar31._6_2_ = 0;
                      if (*(Characters_HumanSetupMeshes_o **)((long)__this_07 + 0x168) !=
                          (Characters_HumanSetupMeshes_o *)0x0) {
                        plVar17 = (long *)((long)__this_07 + 0xb0);
                        SStack_2d0._stringLength = 0x42ec652;
                        SStack_2d0._firstChar = 0;
                        SStack_2d0._6_2_ = 0;
                        pSVar15 = Characters_HumanSetupMeshes__GetArmMesh
                                            (*(Characters_HumanSetupMeshes_o **)((long)__this_07 + 0x168),0,
                                             method_16);
                        SStack_2d0._stringLength = 0x42ec65d;
                        SStack_2d0._firstChar = 0;
                        SStack_2d0._6_2_ = 0;
                        SVar34 = (System_String_Fields)
                                 Characters_HumanSetup__GenerateCloth
                                           ((Characters_HumanSetup_o *)__this_07,pSVar15,method_17);
                        *(System_String_Fields *)((long)__this_07 + 0xb0) = SVar34;
                        SStack_2d0._stringLength = 0x42ec66f;
                        SStack_2d0._firstChar = 0;
                        SStack_2d0._6_2_ = 0;
                        il2cpp_runtime_helper_022b4080(plVar17);
                        SVar31 = *(System_String_Fields *)((long)__this_07 + 0xb0);
                        if (SVar31 != (System_String_Fields)0x0) {
                          SStack_2d0._stringLength = 0x42ec688;
                          SStack_2d0._firstChar = 0;
                          SStack_2d0._6_2_ = 0;
                          SVar34 = MethodInfo_Renderer_GetComponent_Renderer;
                          pUVar33 = (UnityEngine_Renderer_o *)
                                    UnityEngine_GameObject__GetComponent_object_
                                              ((UnityEngine_GameObject_o *)SVar31,
                                               (MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer);
                          if (pUVar33 != (UnityEngine_Renderer_o *)0x0) {
                            SStack_2d0._stringLength = 0x42ec69e;
                            SStack_2d0._firstChar = 0;
                            SStack_2d0._6_2_ = 0;
                            SVar34 = method_00;
                            UnityEngine_Renderer__set_material
                                      (pUVar33,(UnityEngine_Material_o *)method_00,(MethodInfo *)0x0);
                            SVar31._stringLength = 0;
                            SVar31._firstChar = 0;
                            SVar31._6_2_ = 0;
                            if (*(Characters_HumanSetupMeshes_o **)((long)__this_07 + 0x168) !=
                                (Characters_HumanSetupMeshes_o *)0x0) {
                              method_00 = (System_String_Fields)((long)__this_07 + 0x140);
                              SStack_2d0._stringLength = 0x42ec6b8;
                              SStack_2d0._firstChar = 0;
                              SStack_2d0._6_2_ = 0;
                              pSVar15 = Characters_HumanSetupMeshes__GetHandMesh
                                                  (*(Characters_HumanSetupMeshes_o **)
                                                    ((long)__this_07 + 0x168),0,method_18);
                              SStack_2d0._stringLength = 0x42ec6c3;
                              SStack_2d0._firstChar = 0;
                              SStack_2d0._6_2_ = 0;
                              SVar34 = (System_String_Fields)
                                       Characters_HumanSetup__GenerateCloth
                                                 ((Characters_HumanSetup_o *)__this_07,pSVar15,method_19);
                              *(System_String_Fields *)((long)__this_07 + 0x140) = SVar34;
                              SStack_2d0._stringLength = 0x42ec6d5;
                              SStack_2d0._firstChar = 0;
                              SStack_2d0._6_2_ = 0;
                              il2cpp_runtime_helper_022b4080(method_00);
                              SVar31 = *(System_String_Fields *)((long)__this_07 + 0x140);
                              if (SVar31 != (System_String_Fields)0x0) {
                                SStack_2d0._stringLength = 0x42ec6ea;
                                SStack_2d0._firstChar = 0;
                                SStack_2d0._6_2_ = 0;
                                SVar34 = MethodInfo_Renderer_GetComponent_Renderer;
                                pUVar33 = (UnityEngine_Renderer_o *)
                                          UnityEngine_GameObject__GetComponent_object_
                                                    ((UnityEngine_GameObject_o *)SVar31,
                                                     (MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer);
                                if (pUVar33 != (UnityEngine_Renderer_o *)0x0) {
                                  UnityEngine_Renderer__set_material
                                            (pUVar33,(UnityEngine_Material_o *)SVar35,(MethodInfo *)0x0);
                                  return extraout_RAX_04;
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
  SStack_2d0._stringLength = 0x42ec726;
  SStack_2d0._firstChar = 0;
  SStack_2d0._6_2_ = 0;
  il2cpp_runtime_helper_022b2c90();
  lStack_2f0 = lVar40;
  plStack_2e8 = plVar17;
  pSStack_2e0 = (System_Object_array *)pSVar44;
  SStack_2d8 = method_00;
  SStack_2d0 = SVar27;
  if (g_data_057ade9d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRenderer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRenderer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    g_data_057ade9d = '\x01';
    if (*(int *)((long)TypeInfo_ResourcePaths + 0xe4) != 0) goto label_042ec767;
label_042ec949:
    il2cpp_runtime_helper_02337ed0();
    pSVar38 = ((System_String_o *)((long)SVar31 + 0x1c8))->klass;
    if (pSVar38 == (System_String_c *)0x0) goto label_042ec961;
label_042ec777:
    pvVar7 = (pSVar38->_1).typeMetadataHandle;
    if ((pvVar7 == (void *)0x0) ||
       (pSVar38 = ((System_String_o *)((long)SVar31 + 0x168))->klass, pSVar38 == (System_String_c *)0x0))
    goto label_042ec961;
    pSVar15 = *(System_String_o **)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
    uStack_2f4 = *(undefined4 *)((long)pvVar7 + 0x14);
    if (g_data_057adeae == '\0') {
      il2cpp_runtime_helper_023445d0(&"character_leg_");
      g_data_057adeae = '\x01';
    }
    pSVar16 = (System_String_o *)(pSVar38->_1).namespaze;
    pSVar19 = System_Int32__ToString((int32_t)&uStack_2f4,(MethodInfo *)0x0);
    pSVar16 = System_String__Concat_3af7150(pSVar16,"character_leg_",pSVar19,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar36 = ApplicationManagers_ResourceManager__LoadAsset(pSVar15,pSVar16,1,(MethodInfo *)0x0);
    if (pUVar36 == (UnityEngine_Object_o *)0x0) goto label_042ec961;
    if (pUVar36->klass == TypeInfo_GameObject) {
      __this_01 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar36,(MethodInfo *)0x0)
      ;
      pSVar38 = ((System_String_o *)((long)SVar31 + 0x150))->klass;
      if (pSVar38 != (System_String_c *)0x0) {
        __this_02 = (UnityEngine_SkinnedMeshRenderer_o *)
                    UnityEngine_GameObject__GetComponent_object_
                              ((UnityEngine_GameObject_o *)pSVar38,MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRenderer);
        if (__this_01 != (UnityEngine_Transform_o *)0x0) {
          __this_03 = (UnityEngine_SkinnedMeshRenderer_o *)
                      UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)__this_01,MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRenderer);
          if (__this_03 != (UnityEngine_SkinnedMeshRenderer_o *)0x0) {
            value = UnityEngine_SkinnedMeshRenderer__get_sharedMesh(__this_03,(MethodInfo *)0x0);
            if (__this_02 != (UnityEngine_SkinnedMeshRenderer_o *)0x0) {
              UnityEngine_SkinnedMeshRenderer__set_sharedMesh(__this_02,value,(MethodInfo *)0x0);
              pSVar38 = ((System_String_o *)((long)SVar31 + 0x150))->klass;
              if (pSVar38 != (System_String_c *)0x0) {
                pUVar33 = (UnityEngine_Renderer_o *)
                          UnityEngine_GameObject__GetComponent_object_
                                    ((UnityEngine_GameObject_o *)pSVar38,MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRenderer);
                if (pUVar33 != (UnityEngine_Renderer_o *)0x0) {
                  UnityEngine_Renderer__set_material
                            (pUVar33,(UnityEngine_Material_o *)SVar34,(MethodInfo *)0x0);
                  return extraout_RAX_05;
                }
              }
            }
          }
        }
      }
      goto label_042ec961;
    }
  }
  else {
    if (*(int *)((long)TypeInfo_ResourcePaths + 0xe4) == 0) goto label_042ec949;
label_042ec767:
    pSVar38 = ((System_String_o *)((long)SVar31 + 0x1c8))->klass;
    if (pSVar38 != (System_String_c *)0x0) goto label_042ec777;
label_042ec961:
    pUVar36 = (UnityEngine_Object_o *)il2cpp_runtime_helper_022b2c90();
  }
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ade8f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponentInChildren_Renderer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponent_Renderer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupMaterials);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    g_data_057ade8f = '\x01';
    pUVar42 = (UnityEngine_Object_o *)pUVar36[5].fields.m_CachedPtr;
    if (g_data_057adea2 != '\0') goto label_042ec99f;
label_042ecb66:
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    pUVar42 = (UnityEngine_Object_o *)pUVar36[5].fields.m_CachedPtr;
    if (g_data_057adea2 == '\0') goto label_042ecb66;
label_042ec99f:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar13 = UnityEngine_Object__op_Inequality(pUVar42,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 == '\0') {
    pUVar28 = pUVar36[6].klass;
    if (g_data_057adea2 == '\0') goto label_042ecbcb;
label_042ec9df:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar42,(MethodInfo *)0x0);
    pUVar28 = pUVar36[6].klass;
    if (g_data_057adea2 != '\0') goto label_042ec9df;
label_042ecbcb:
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar13 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pUVar28,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 == '\0') {
    pUVar42 = pUVar36[6].monitor;
    if (g_data_057adea2 == '\0') goto label_042ecc29;
label_042eca18:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)pUVar28,(MethodInfo *)0x0);
    pUVar42 = pUVar36[6].monitor;
    if (g_data_057adea2 != '\0') goto label_042eca18;
label_042ecc29:
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar13 = UnityEngine_Object__op_Inequality(pUVar42,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 == '\0') {
    SVar27 = (System_String_Fields)pUVar36[6].fields.m_CachedPtr;
    if (g_data_057adea2 == '\0') goto label_042ecc87;
label_042eca51:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar42,(MethodInfo *)0x0);
    SVar27 = (System_String_Fields)pUVar36[6].fields.m_CachedPtr;
    if (g_data_057adea2 != '\0') goto label_042eca51;
label_042ecc87:
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  SVar31 = SVar27;
  bVar13 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)SVar27,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pMVar41 = extraout_RDX_08;
  if ((char)bVar13 != '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)SVar27,(MethodInfo *)0x0);
    pMVar41 = extraout_RDX_09;
    SVar31 = SVar27;
  }
  pvVar7 = pUVar36[0xf].monitor;
  if (pvVar7 != (void *)0x0) {
    if (g_data_057adec2 == '\0') {
      il2cpp_runtime_helper_023445d0(&"Misc/AOTTG_HERO_3DMG");
      il2cpp_runtime_helper_023445d0(&"Misc/aottg_hero_AHSS_3dmg");
      SVar31 = (System_String_Fields)&"Misc/aottg_hero_APG_3dmg";
      il2cpp_runtime_helper_023445d0();
      g_data_057adec2 = '\x01';
      pMVar41 = extraout_RDX_10;
    }
    lVar40 = *(long *)((long)pvVar7 + 0x10);
    if (lVar40 != 0) {
      iVar3 = *(int *)(lVar40 + 0x1d0);
      if (iVar3 == 3) {
        puVar39 = &"Misc/aottg_hero_APG_3dmg";
      }
      else {
        puVar39 = &"Misc/AOTTG_HERO_3DMG";
        if (iVar3 == 1) {
          puVar39 = &"Misc/aottg_hero_AHSS_3dmg";
        }
      }
      pSVar15 = (System_String_o *)*puVar39;
      if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pMVar41 = extraout_RDX_11;
      }
      method_21 = (MethodInfo *)0x0;
      pUVar37 = Characters_HumanSetupMaterials__GetPartMaterial(pSVar15,0,pMVar41);
      if (*(int *)((long)TypeInfo_ResourcePaths + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      SVar31 = TypeInfo_ResourcePaths;
      if (pUVar36[0xf].klass != (UnityEngine_Object_c *)0x0) {
        pCVar29 = (Characters_HumanSetup_o *)&pUVar36[5].fields;
        pSVar15 = *(System_String_o **)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
        pSVar16 = Characters_HumanSetupMeshes__Get3dmgMesh
                            ((Characters_HumanSetupMeshes_o *)pUVar36[0xf].klass,method_21);
        if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pIVar26 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                            (pSVar15,pSVar16,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
        pUVar36[5].fields.m_CachedPtr = (intptr_t)pIVar26;
        il2cpp_runtime_helper_022b4080(pCVar29,pIVar26);
        Characters_HumanSetup__AttachToMount
                  (pCVar29,(UnityEngine_GameObject_o *)pUVar36[5].fields.m_CachedPtr,
                   (UnityEngine_GameObject_o *)pUVar36[1].fields.m_CachedPtr,0,in_R8);
        SVar31 = (System_String_Fields)pUVar36[5].fields.m_CachedPtr;
        if (SVar31 != (System_String_Fields)0x0) {
          ppSVar45 = (System_String_o **)
                     UnityEngine_GameObject__GetComponentInChildren_object_
                               ((UnityEngine_GameObject_o *)SVar31,MethodInfo_Renderer_GetComponentInChildren_Renderer);
          if ((System_String_Fields)ppSVar45 != (System_String_Fields)0x0) {
            UnityEngine_Renderer__set_material((UnityEngine_Renderer_o *)ppSVar45,pUVar37,(MethodInfo *)0x0);
            pUVar28 = pUVar36[0xf].klass;
            SVar31 = (System_String_Fields)ppSVar45;
            if (pUVar28 != (UnityEngine_Object_c *)0x0) {
              if (g_data_057adeb2 == '\0') {
                ppSVar45 = &"3dmg_belt";
                il2cpp_runtime_helper_023445d0();
                g_data_057adeb2 = '\x01';
              }
              pcVar11 = (pUVar28->_1).name;
              SVar31 = (System_String_Fields)ppSVar45;
              if (pcVar11 != (char *)0x0) {
                if ((*(uint *)(pcVar11 + 0x1d0) | 2) == 3) {
                  pSVar15 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
                  pSVar16 = pSVar15;
                }
                else {
                  pSVar16 = System_String__Concat_3ae5ba0
                                      ((pUVar28->_1).byval_arg.data,"3dmg_belt",(MethodInfo *)0x0);
                  pSVar15 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
                }
                bVar13 = System_String__op_Inequality(pSVar16,pSVar15,(MethodInfo *)0x0);
                pSVar15 = (System_String_o *)CONCAT44(extraout_var_02,bVar13);
                pMVar41 = extraout_RDX_12;
                if ((char)bVar13 == '\0') {
label_042ecf16:
                  if (*(int *)&pUVar36[0x13].monitor == 3) {
                    return pSVar15;
                  }
                  if (*(int *)((long)TypeInfo_ResourcePaths + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                    pMVar41 = extraout_RDX_14;
                  }
                  SVar31 = TypeInfo_ResourcePaths;
                  if (pUVar36[0xf].klass != (UnityEngine_Object_c *)0x0) {
                    ppvVar1 = &pUVar36[6].monitor;
                    pSVar15 = *(System_String_o **)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
                    pSVar16 = Characters_HumanSetupMeshes__GetGasMesh
                                        ((Characters_HumanSetupMeshes_o *)pUVar36[0xf].klass,1,pMVar41);
                    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pIVar26 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                                        (pSVar15,pSVar16,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
                    *ppvVar1 = pIVar26;
                    il2cpp_runtime_helper_022b4080(ppvVar1);
                    SVar31 = (System_String_Fields)*ppvVar1;
                    if (SVar31 != (System_String_Fields)0x0) {
                      pCVar29 = (Characters_HumanSetup_o *)
                                UnityEngine_GameObject__GetComponent_object_
                                          ((UnityEngine_GameObject_o *)SVar31,
                                           (MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer);
                      if (pCVar29 != (Characters_HumanSetup_o *)0x0) {
                        UnityEngine_Renderer__set_material
                                  ((UnityEngine_Renderer_o *)pCVar29,pUVar37,(MethodInfo *)0x0);
                        Characters_HumanSetup__AttachToMount
                                  (pCVar29,pUVar36[6].monitor,
                                   (UnityEngine_GameObject_o *)
                                   (&pUVar36[2].klass)[(ulong)(*(int *)&pUVar36[0x13].monitor == 1) * 2],0,
                                   in_R8);
                        pMVar41 = extraout_RDX_15;
                        if (*(int *)((long)TypeInfo_ResourcePaths + 0xe4) == 0) {
                          il2cpp_runtime_helper_02337ed0();
                          pMVar41 = extraout_RDX_16;
                        }
                        SVar31 = TypeInfo_ResourcePaths;
                        if (pUVar36[0xf].klass != (UnityEngine_Object_c *)0x0) {
                          pUVar2 = &pUVar36[6].fields;
                          pSVar15 = *(System_String_o **)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
                          pSVar16 = Characters_HumanSetupMeshes__GetGasMesh
                                              ((Characters_HumanSetupMeshes_o *)pUVar36[0xf].klass,0,pMVar41);
                          if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
                            il2cpp_runtime_helper_02337ed0();
                          }
                          pIVar26 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                                              (pSVar15,pSVar16,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
                          pUVar2->m_CachedPtr = (intptr_t)pIVar26;
                          il2cpp_runtime_helper_022b4080(pUVar2);
                          SVar31 = (System_String_Fields)pUVar2->m_CachedPtr;
                          if (SVar31 != (System_String_Fields)0x0) {
                            pCVar29 = (Characters_HumanSetup_o *)
                                      UnityEngine_GameObject__GetComponent_object_
                                                ((UnityEngine_GameObject_o *)SVar31,
                                                 (MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer);
                            if (pCVar29 != (Characters_HumanSetup_o *)0x0) {
                              UnityEngine_Renderer__set_material
                                        ((UnityEngine_Renderer_o *)pCVar29,pUVar37,(MethodInfo *)0x0);
                              Characters_HumanSetup__AttachToMount
                                        (pCVar29,(UnityEngine_GameObject_o *)pUVar36[6].fields.m_CachedPtr,
                                         (&pUVar36[2].monitor)
                                         [(ulong)(*(int *)&pUVar36[0x13].monitor == 1) * 2],0,in_R8);
                              return extraout_RAX_07;
                            }
                          }
                        }
                      }
                    }
                  }
                }
                else {
                  if (*(int *)((long)TypeInfo_ResourcePaths + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pUVar42 = pUVar36 + 6;
                  pSVar15 = *(System_String_o **)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
                  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pUVar28 = (UnityEngine_Object_c *)
                            ApplicationManagers_ResourceManager__InstantiateAsset_object_
                                      (pSVar15,pSVar16,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
                  pUVar42->klass = pUVar28;
                  il2cpp_runtime_helper_022b4080(pUVar42);
                  SVar31 = (System_String_Fields)pUVar42->klass;
                  if (SVar31 != (System_String_Fields)0x0) {
                    pCVar29 = (Characters_HumanSetup_o *)
                              UnityEngine_GameObject__GetComponent_object_
                                        ((UnityEngine_GameObject_o *)SVar31,(MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer
                                        );
                    if (pCVar29 != (Characters_HumanSetup_o *)0x0) {
                      UnityEngine_Renderer__set_material
                                ((UnityEngine_Renderer_o *)pCVar29,pUVar37,(MethodInfo *)0x0);
                      Characters_HumanSetup__AttachToMount
                                (pCVar29,(UnityEngine_GameObject_o *)pUVar36[6].klass,
                                 (UnityEngine_GameObject_o *)pUVar36[1].fields.m_CachedPtr,0,in_R8);
                      pSVar15 = extraout_RAX_06;
                      pMVar41 = extraout_RDX_13;
                      goto label_042ecf16;
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
  if (g_data_057ade90 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEffectPresets);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MeleeWeaponTrail_GetComponentInChildren_MeleeWeaponTrail);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponentInChildren_Renderer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupMaterials);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&"thunderspear");
    g_data_057ade90 = '\x01';
    pUVar36 = *(UnityEngine_Object_o **)((long)SVar31 + 0xb8);
    if (g_data_057adea2 != '\0') goto label_042ed11f;
label_042ed2a1:
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    pUVar36 = *(UnityEngine_Object_o **)((long)SVar31 + 0xb8);
    if (g_data_057adea2 == '\0') goto label_042ed2a1;
label_042ed11f:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar13 = UnityEngine_Object__op_Inequality(pUVar36,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 == '\0') {
    pSVar15 = *(System_String_o **)((long)SVar31 + 0xc0);
    if (g_data_057adea2 == '\0') goto label_042ed304;
label_042ed15e:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar36,(MethodInfo *)0x0);
    pSVar15 = *(System_String_o **)((long)SVar31 + 0xc0);
    if (g_data_057adea2 != '\0') goto label_042ed15e;
label_042ed304:
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar16 = pSVar15;
  bVar13 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pSVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pMVar41 = extraout_RDX_17;
  if ((char)bVar13 != '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)pSVar15,(MethodInfo *)0x0);
    pMVar41 = extraout_RDX_18;
    pSVar16 = pSVar15;
  }
  lVar40 = *(long *)((long)SVar31 + 0x170);
  if (lVar40 != 0) {
    if (g_data_057adec2 == '\0') {
      il2cpp_runtime_helper_023445d0(&"Misc/AOTTG_HERO_3DMG");
      il2cpp_runtime_helper_023445d0(&"Misc/aottg_hero_AHSS_3dmg");
      pSVar16 = (System_String_o *)&"Misc/aottg_hero_APG_3dmg";
      il2cpp_runtime_helper_023445d0();
      g_data_057adec2 = '\x01';
      pMVar41 = extraout_RDX_19;
    }
    lVar40 = *(long *)(lVar40 + 0x10);
    if (lVar40 != 0) {
      iVar3 = *(int *)(lVar40 + 0x1d0);
      if (iVar3 == 3) {
        puVar39 = &"Misc/aottg_hero_APG_3dmg";
      }
      else {
        puVar39 = &"Misc/AOTTG_HERO_3DMG";
        if (iVar3 == 1) {
          puVar39 = &"Misc/aottg_hero_AHSS_3dmg";
        }
      }
      pSVar16 = (System_String_o *)*puVar39;
      iVar3 = *(int *)((long)SVar31 + 0x1d0);
      if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pMVar41 = extraout_RDX_20;
      }
      pUVar37 = Characters_HumanSetupMaterials__GetPartMaterial(pSVar16,(uint)(iVar3 == 3),pMVar41);
      if ((*(long *)((long)SVar31 + 0x1c8) != 0) &&
         (lVar40 = *(long *)(*(long *)((long)SVar31 + 0x1c8) + 0xe0), lVar40 != 0)) {
        pSVar15 = *(System_String_o **)(lVar40 + 0x18);
        if (*(int *)(TypeInfo_CharacterEffectPresets + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        iVar14 = PatreonEffects_CharacterEffectPresets__ParseOrDefault(pSVar15,(MethodInfo *)0x0);
        pSVar16 = (System_String_o *)0x0;
        if (*(Characters_HumanSetupMeshes_o **)((long)SVar31 + 0x168) != (Characters_HumanSetupMeshes_o *)0x0)
        {
          pCVar29 = (Characters_HumanSetup_o *)
                    Characters_HumanSetupMeshes__GetWeaponMesh
                              (*(Characters_HumanSetupMeshes_o **)((long)SVar31 + 0x168),1,method_20);
          bVar13 = System_String__op_Inequality
                             ((System_String_o *)pCVar29,
                              (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
          pMVar41 = extraout_RDX_21;
          if ((char)bVar13 == '\0') goto label_042ed58b;
          if (*(int *)((long)TypeInfo_ResourcePaths + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar15 = (System_String_o *)((long)SVar31 + 0xb8);
          pSVar16 = *(System_String_o **)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
          if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar38 = (System_String_c *)
                    ApplicationManagers_ResourceManager__InstantiateAsset_object_
                              (pSVar16,(System_String_o *)pCVar29,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
          pSVar15->klass = pSVar38;
          pSVar16 = pSVar15;
          il2cpp_runtime_helper_022b4080();
          if (pCVar29 != (Characters_HumanSetup_o *)0x0) {
            bVar13 = System_String__Contains((System_String_o *)pCVar29,"thunderspear",(MethodInfo *)0x0);
            if ((char)bVar13 == '\0') {
              Characters_HumanSetup__AttachToMount
                        (pCVar29,(UnityEngine_GameObject_o *)pSVar15->klass,
                         *(UnityEngine_GameObject_o **)((long)SVar31 + 0x50),0,in_R8);
              pSVar16 = *(System_String_o **)((long)SVar31 + 0xb8);
              if (pSVar16 != (System_String_o *)0x0) {
                pUVar33 = (UnityEngine_Renderer_o *)
                          UnityEngine_GameObject__GetComponentInChildren_object_
                                    ((UnityEngine_GameObject_o *)pSVar16,MethodInfo_Renderer_GetComponentInChildren_Renderer);
                if (pUVar33 != (UnityEngine_Renderer_o *)0x0) {
                  UnityEngine_Renderer__set_material(pUVar33,pUVar37,(MethodInfo *)0x0);
                  goto label_042ed4ec;
                }
              }
            }
            else {
              Characters_HumanSetup__AttachToMount
                        (pCVar29,(UnityEngine_GameObject_o *)pSVar15->klass,
                         *(UnityEngine_GameObject_o **)((long)SVar31 + 0x60),0,in_R8);
label_042ed4ec:
              Characters_HumanSetup__ApplyCharacterEffectToPart
                        ((Characters_HumanSetup_o *)SVar31,*(UnityEngine_GameObject_o **)((long)SVar31 + 0xb8)
                         ,iVar14,0,in_R8);
              pSVar16 = (System_String_o *)0x0;
              if (*(UnityEngine_GameObject_o **)((long)SVar31 + 0xb8) != (UnityEngine_GameObject_o *)0x0) {
                pUVar36 = (UnityEngine_Object_o *)
                          UnityEngine_GameObject__GetComponentInChildren_object_
                                    (*(UnityEngine_GameObject_o **)((long)SVar31 + 0xb8),MethodInfo_MeleeWeaponTrail_GetComponentInChildren_MeleeWeaponTrail);
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                bVar13 = UnityEngine_Object__op_Inequality
                                   (pUVar36,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                pMVar41 = extraout_RDX_22;
                if ((char)bVar13 == '\0') {
label_042ed58b:
                  pSVar16 = (System_String_o *)0x0;
                  if (*(Characters_HumanSetupMeshes_o **)((long)SVar31 + 0x168) !=
                      (Characters_HumanSetupMeshes_o *)0x0) {
                    pCVar29 = (Characters_HumanSetup_o *)
                              Characters_HumanSetupMeshes__GetWeaponMesh
                                        (*(Characters_HumanSetupMeshes_o **)((long)SVar31 + 0x168),0,pMVar41);
                    bVar13 = System_String__op_Inequality
                                       ((System_String_o *)pCVar29,
                                        (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                                        (MethodInfo *)0x0);
                    if ((char)bVar13 == '\0') {
                      return (System_String_o *)CONCAT44(extraout_var_03,bVar13);
                    }
                    if (*(int *)((long)TypeInfo_ResourcePaths + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pSVar15 = (System_String_o *)((long)SVar31 + 0xc0);
                    pSVar16 = *(System_String_o **)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
                    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pSVar38 = (System_String_c *)
                              ApplicationManagers_ResourceManager__InstantiateAsset_object_
                                        (pSVar16,(System_String_o *)pCVar29,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
                    pSVar15->klass = pSVar38;
                    pSVar16 = pSVar15;
                    il2cpp_runtime_helper_022b4080();
                    if (pCVar29 != (Characters_HumanSetup_o *)0x0) {
                      bVar13 = System_String__Contains
                                         ((System_String_o *)pCVar29,"thunderspear",(MethodInfo *)0x0);
                      if ((char)bVar13 == '\0') {
                        Characters_HumanSetup__AttachToMount
                                  (pCVar29,(UnityEngine_GameObject_o *)pSVar15->klass,
                                   *(UnityEngine_GameObject_o **)((long)SVar31 + 0x58),0,in_R8);
                        pSVar16 = *(System_String_o **)((long)SVar31 + 0xc0);
                        if (pSVar16 != (System_String_o *)0x0) {
                          pUVar33 = (UnityEngine_Renderer_o *)
                                    UnityEngine_GameObject__GetComponentInChildren_object_
                                              ((UnityEngine_GameObject_o *)pSVar16,MethodInfo_Renderer_GetComponentInChildren_Renderer);
                          if (pUVar33 != (UnityEngine_Renderer_o *)0x0) {
                            UnityEngine_Renderer__set_material(pUVar33,pUVar37,(MethodInfo *)0x0);
                            goto label_042ed6a9;
                          }
                        }
                      }
                      else {
                        Characters_HumanSetup__AttachToMount
                                  (pCVar29,(UnityEngine_GameObject_o *)pSVar15->klass,
                                   *(UnityEngine_GameObject_o **)((long)SVar31 + 0x68),0,in_R8);
label_042ed6a9:
                        Characters_HumanSetup__ApplyCharacterEffectToPart
                                  ((Characters_HumanSetup_o *)SVar31,
                                   *(UnityEngine_GameObject_o **)((long)SVar31 + 0xc0),iVar14,0,in_R8);
                        pSVar16 = (System_String_o *)0x0;
                        if (*(UnityEngine_GameObject_o **)((long)SVar31 + 0xc0) !=
                            (UnityEngine_GameObject_o *)0x0) {
                          pUVar36 = (UnityEngine_Object_o *)
                                    UnityEngine_GameObject__GetComponentInChildren_object_
                                              (*(UnityEngine_GameObject_o **)((long)SVar31 + 0xc0),
                                               MethodInfo_MeleeWeaponTrail_GetComponentInChildren_MeleeWeaponTrail);
                          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                            il2cpp_runtime_helper_02337ed0();
                          }
                          bVar13 = UnityEngine_Object__op_Inequality
                                             (pUVar36,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                          if ((char)bVar13 == '\0') {
                            return (System_String_o *)CONCAT44(extraout_var_04,bVar13);
                          }
                          pSVar16 = (System_String_o *)0x0;
                          if (pSVar15->klass != (System_String_c *)0x0) {
                            pIVar26 = UnityEngine_GameObject__GetComponentInChildren_object_
                                                ((UnityEngine_GameObject_o *)pSVar15->klass,MethodInfo_MeleeWeaponTrail_GetComponentInChildren_MeleeWeaponTrail);
                            pSVar16 = (System_String_o *)((long)SVar31 + 0x180);
                            *(Il2CppObject **)((long)SVar31 + 0x180) = pIVar26;
                            il2cpp_runtime_helper_022b4080();
                            pSVar15 = *(System_String_o **)((long)SVar31 + 0x180);
                            if (pSVar15 != (System_String_o *)0x0) {
                              *(undefined1 *)&pSVar15[1].monitor = 0;
                              return pSVar15;
                            }
                          }
                        }
                      }
                    }
                  }
                }
                else {
                  pSVar16 = (System_String_o *)0x0;
                  if (pSVar15->klass != (System_String_c *)0x0) {
                    pIVar26 = UnityEngine_GameObject__GetComponentInChildren_object_
                                        ((UnityEngine_GameObject_o *)pSVar15->klass,MethodInfo_MeleeWeaponTrail_GetComponentInChildren_MeleeWeaponTrail);
                    pSVar16 = (System_String_o *)((long)SVar31 + 0x178);
                    *(Il2CppObject **)((long)SVar31 + 0x178) = pIVar26;
                    il2cpp_runtime_helper_022b4080();
                    if (*(long *)((long)SVar31 + 0x178) != 0) {
                      *(undefined1 *)(*(long *)((long)SVar31 + 0x178) + 0x20) = 0;
                      pMVar41 = extraout_RDX_23;
                      goto label_042ed58b;
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
  if (g_data_057ade99 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_EZSoftBone_GetComponentInChildren_EZSoftBone);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupPrefabs);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&"None");
    g_data_057ade99 = '\x01';
    pUVar36 = pSVar16[0x10].monitor;
    if (g_data_057adea2 != '\0') goto label_042ed78d;
label_042eda29:
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    pUVar36 = pSVar16[0x10].monitor;
    if (g_data_057adea2 == '\0') goto label_042eda29;
label_042ed78d:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar42 = pUVar36;
  bVar13 = UnityEngine_Object__op_Inequality(pUVar36,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 != '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar36,(MethodInfo *)0x0);
    pUVar42 = pUVar36;
  }
  if ((pSVar16[0x13].klass == (System_String_c *)0x0) ||
     (pvVar7 = ((pSVar16[0x13].klass)->_1).properties, pvVar7 == (void *)0x0)) goto label_042edaae;
  pSVar15 = *(System_String_o **)((long)pvVar7 + 0x18);
  pUVar42 = (UnityEngine_Object_o *)0x0;
  if (pSVar15 == (System_String_o *)0x0) goto label_042edaae;
  pSVar15 = System_String__Substring(pSVar15,4,(MethodInfo *)0x0);
  bVar13 = System_String__op_Inequality(pSVar15,(System_String_o *)"None",(MethodInfo *)0x0);
  if ((char)bVar13 == '\0') {
    return (System_String_o *)CONCAT44(extraout_var_05,bVar13);
  }
  if (*(int *)((long)TypeInfo_ResourcePaths + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar19 = *(System_String_o **)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
  if (*(int *)(TypeInfo_HumanSetupPrefabs + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057adebe != '\0') goto label_042ed874;
label_042eda70:
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupPrefabs);
    il2cpp_runtime_helper_023445d0(&"Back/Back");
    g_data_057adebe = '\x01';
    iVar3 = *(int *)(TypeInfo_HumanSetupPrefabs + 0xe4);
  }
  else {
    if (g_data_057adebe == '\0') goto label_042eda70;
label_042ed874:
    iVar3 = *(int *)(TypeInfo_HumanSetupPrefabs + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar29 = (Characters_HumanSetup_o *)&pSVar16[0x10].monitor;
  pSVar15 = System_String__Concat_3af7150
                      ((System_String_o *)**(undefined8 **)(TypeInfo_HumanSetupPrefabs + 0xb8),"Back/Back",pSVar15,
                       (MethodInfo *)0x0);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar26 = ApplicationManagers_ResourceManager__InstantiateAsset_object_(pSVar19,pSVar15,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
  pSVar16[0x10].monitor = pIVar26;
  il2cpp_runtime_helper_022b4080(pCVar29,pIVar26);
  Characters_HumanSetup__AttachToMount
            (pCVar29,pSVar16[0x10].monitor,(UnityEngine_GameObject_o *)pSVar16[4].fields,1,in_R8);
  pUVar42 = (UnityEngine_Object_o *)0x0;
  if (pSVar16[0x10].monitor == (UnityEngine_GameObject_o *)0x0) {
label_042edaae:
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ade9b == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupPrefabs);
      il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
      il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
      il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
      il2cpp_runtime_helper_023445d0(&"None");
      g_data_057ade9b = '\x01';
      pUVar28 = pUVar42[0x11].klass;
    }
    else {
      pUVar28 = pUVar42[0x11].klass;
    }
    if (g_data_057adea2 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057adea2 = '\x01';
      iVar3 = *(int *)(TypeInfo_Object + 0xe4);
    }
    else {
      iVar3 = *(int *)(TypeInfo_Object + 0xe4);
    }
    if (iVar3 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar46 = pUVar28;
    bVar13 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pUVar28,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar13 != '\0') {
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)pUVar28,(MethodInfo *)0x0);
      pUVar46 = pUVar28;
    }
    if ((pUVar42[0x13].klass != (UnityEngine_Object_c *)0x0) &&
       (pvVar7 = ((pUVar42[0x13].klass)->_1).fields, pvVar7 != (void *)0x0)) {
      pSVar15 = *(System_String_o **)((long)pvVar7 + 0x18);
      pUVar46 = (UnityEngine_Object_c *)0x0;
      if (pSVar15 != (System_String_o *)0x0) {
        pSVar15 = System_String__Substring(pSVar15,3,(MethodInfo *)0x0);
        bVar13 = System_String__op_Inequality(pSVar15,(System_String_o *)"None",(MethodInfo *)0x0);
        if ((char)bVar13 != '\0') {
          if (*(int *)((long)TypeInfo_ResourcePaths + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar16 = *(System_String_o **)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
          if (*(int *)(TypeInfo_HumanSetupPrefabs + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057adebf == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupPrefabs);
            il2cpp_runtime_helper_023445d0(&"Hat/Hat");
            g_data_057adebf = '\x01';
            iVar3 = *(int *)(TypeInfo_HumanSetupPrefabs + 0xe4);
          }
          else {
            iVar3 = *(int *)(TypeInfo_HumanSetupPrefabs + 0xe4);
          }
          if (iVar3 == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pCVar29 = (Characters_HumanSetup_o *)(pUVar42 + 0x11);
          pSVar15 = System_String__Concat_3af7150
                              ((System_String_o *)**(undefined8 **)(TypeInfo_HumanSetupPrefabs + 0xb8),"Hat/Hat",pSVar15,
                               (MethodInfo *)0x0);
          if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pUVar28 = (UnityEngine_Object_c *)
                    ApplicationManagers_ResourceManager__InstantiateAsset_object_
                              (pSVar16,pSVar15,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
          pUVar42[0x11].klass = pUVar28;
          il2cpp_runtime_helper_022b4080(pCVar29,pUVar28);
          Characters_HumanSetup__AttachToMount
                    (pCVar29,(UnityEngine_GameObject_o *)pUVar42[0x11].klass,pUVar42[5].monitor,1,in_R8);
          return extraout_RAX_08;
        }
        return (System_String_o *)CONCAT44(extraout_var_08,bVar13);
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ade9a == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupPrefabs);
      il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
      il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
      il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
      il2cpp_runtime_helper_023445d0(&"None");
      g_data_057ade9a = '\x01';
      pUVar36 = (UnityEngine_Object_o *)pUVar46[1]._1.namespaze;
    }
    else {
      pUVar36 = (UnityEngine_Object_o *)pUVar46[1]._1.namespaze;
    }
    if (g_data_057adea2 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057adea2 = '\x01';
      iVar3 = *(int *)(TypeInfo_Object + 0xe4);
    }
    else {
      iVar3 = *(int *)(TypeInfo_Object + 0xe4);
    }
    if (iVar3 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar42 = (UnityEngine_Object_o *)0x0;
    bVar13 = UnityEngine_Object__op_Inequality(pUVar36,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar13 != '\0') {
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar42 = (UnityEngine_Object_o *)0x0;
      UnityEngine_Object__Destroy_4e01c60(pUVar36,(MethodInfo *)0x0);
    }
    pIVar9 = pUVar46[1]._1.declaringType;
    if (((pIVar9 != (Il2CppClass *)0x0) && (pvVar7 = (pIVar9->_1).events, pvVar7 != (void *)0x0)) &&
       (pSVar15 = *(System_String_o **)((long)pvVar7 + 0x18), pSVar15 != (System_String_o *)0x0)) {
      pSVar15 = System_String__Substring(pSVar15,4,(MethodInfo *)0x0);
      bVar13 = System_String__op_Inequality(pSVar15,(System_String_o *)"None",(MethodInfo *)0x0);
      if ((char)bVar13 == '\0') {
        return (System_String_o *)CONCAT44(extraout_var_09,bVar13);
      }
      if (*(int *)((long)TypeInfo_ResourcePaths + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar16 = *(System_String_o **)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
      if (*(int *)(TypeInfo_HumanSetupPrefabs + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057adec0 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupPrefabs);
        il2cpp_runtime_helper_023445d0(&"Head/Head");
        g_data_057adec0 = '\x01';
        iVar3 = *(int *)(TypeInfo_HumanSetupPrefabs + 0xe4);
      }
      else {
        iVar3 = *(int *)(TypeInfo_HumanSetupPrefabs + 0xe4);
      }
      if (iVar3 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pCVar29 = (Characters_HumanSetup_o *)&pUVar46[1]._1.namespaze;
      pSVar15 = System_String__Concat_3af7150
                          ((System_String_o *)**(undefined8 **)(TypeInfo_HumanSetupPrefabs + 0xb8),"Head/Head",pSVar15,
                           (MethodInfo *)0x0);
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar26 = ApplicationManagers_ResourceManager__InstantiateAsset_object_(pSVar16,pSVar15,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
      pUVar46[1]._1.namespaze = (char *)pIVar26;
      il2cpp_runtime_helper_022b4080(pCVar29,pIVar26);
      Characters_HumanSetup__AttachToMount
                (pCVar29,(UnityEngine_GameObject_o *)pUVar46[1]._1.namespaze,
                 (UnityEngine_GameObject_o *)(pUVar46->_1).klass,1,in_R8);
      return extraout_RAX_09;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057adea2 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057adea2 = '\x01';
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar13 = UnityEngine_Object__op_Inequality(pUVar42,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar13 == '\0') {
      return (System_String_o *)CONCAT44(extraout_var_10,bVar13);
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar42,(MethodInfo *)0x0);
    return extraout_RAX_10;
  }
  pUVar36 = (UnityEngine_Object_o *)
            UnityEngine_GameObject__GetComponentInChildren_object_(pSVar16[0x10].monitor,MethodInfo_EZSoftBone_GetComponentInChildren_EZSoftBone);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar42 = pUVar36;
  bVar13 = UnityEngine_Object__op_Inequality(pUVar36,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pSVar15 = (System_String_o *)CONCAT44(extraout_var_06,bVar13);
  if ((char)bVar13 != '\0') {
    if (pUVar36 == (UnityEngine_Object_o *)0x0) goto label_042edaae;
    pUVar28 = pUVar36[7].klass;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar13 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pUVar28,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    pSVar15 = (System_String_o *)CONCAT44(extraout_var_07,bVar13);
    if ((char)bVar13 != '\0') {
      pUVar28 = (UnityEngine_Object_c *)
                UnityEngine_Component__get_transform((UnityEngine_Component_o *)pSVar16,(MethodInfo *)0x0);
      pUVar36[7].klass = pUVar28;
      pSVar15 = (System_String_o *)il2cpp_runtime_helper_022b4080(pUVar36 + 7,pUVar28);
      return pSVar15;
    }
  }
  return pSVar15;
}


// Characters.HumanSetupTextures$$GetBodyMaskTexture
// il2cpp: System_String_o* Characters_HumanSetupTextures__GetBodyMaskTexture (Characters_HumanSetupTextures_o* __this, const MethodInfo* method);
// 0x42e9de0

System_String_o *
Characters_HumanSetupTextures__GetBodyMaskTexture(Characters_HumanSetupTextures_o *__this,MethodInfo *method)

{
  void **ppvVar1;
  UnityEngine_Object_Fields *pUVar2;
  int iVar3;
  Settings_StringSetting_o *pSVar4;
  Characters_HumanSetupMeshes_o *pCVar5;
  Settings_ColorSetting_o *pSVar6;
  void *pvVar7;
  System_Collections_Generic_HashSet_object__o *pSVar8;
  Il2CppClass *pIVar9;
  long lVar10;
  char *pcVar11;
  uint uVar12;
  bool_conflict bVar13;
  int32_t iVar14;
  System_String_o *pSVar15;
  System_String_o *pSVar16;
  long *plVar17;
  undefined8 uVar18;
  System_String_o *pSVar19;
  UnityEngine_Texture_o *pUVar20;
  Settings_HumanCustomSet_o *pSVar21;
  Utility_Color255_o *pUVar22;
  UnityEngine_GameObject_o *pUVar23;
  long *plVar24;
  long *path;
  Utility_Color255_o *pUVar25;
  undefined4 extraout_var;
  System_String_o *extraout_RAX;
  Il2CppObject *pIVar26;
  System_String_o *extraout_RAX_00;
  System_String_Fields SVar27;
  undefined4 extraout_var_00;
  System_String_o *extraout_RAX_01;
  undefined4 extraout_var_01;
  UnityEngine_Object_c *pUVar28;
  System_String_o *extraout_RAX_02;
  Characters_HumanSetup_o *pCVar29;
  Characters_HumanSetup_o *pCVar30;
  System_String_Fields SVar31;
  System_String_Fields SVar32;
  UnityEngine_Renderer_o *pUVar33;
  System_String_Fields method_00;
  System_String_Fields SVar34;
  System_String_Fields __this_00;
  System_String_o *extraout_RAX_03;
  System_String_Fields SVar35;
  System_String_o *extraout_RAX_04;
  UnityEngine_Object_o *pUVar36;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_SkinnedMeshRenderer_o *__this_02;
  UnityEngine_SkinnedMeshRenderer_o *__this_03;
  UnityEngine_Mesh_o *value;
  System_String_o *extraout_RAX_05;
  UnityEngine_Material_o *pUVar37;
  undefined4 extraout_var_02;
  System_String_o *extraout_RAX_06;
  System_String_o *extraout_RAX_07;
  System_String_c *pSVar38;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  undefined4 extraout_var_05;
  undefined4 extraout_var_06;
  undefined4 extraout_var_07;
  undefined4 extraout_var_08;
  System_String_o *extraout_RAX_08;
  undefined4 extraout_var_09;
  System_String_o *extraout_RAX_09;
  undefined4 extraout_var_10;
  System_String_o *extraout_RAX_10;
  System_String_Fields *in_RCX;
  undefined8 *puVar39;
  long lVar40;
  System_String_o *extraout_RDX;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_02;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *method_03;
  MethodInfo *extraout_RDX_06;
  MethodInfo *extraout_RDX_07;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  MethodInfo *method_07;
  MethodInfo *method_08;
  MethodInfo *method_09;
  MethodInfo *method_10;
  MethodInfo *method_11;
  MethodInfo *method_12;
  MethodInfo *method_13;
  MethodInfo *method_14;
  MethodInfo *method_15;
  MethodInfo *method_16;
  MethodInfo *method_17;
  MethodInfo *method_18;
  MethodInfo *method_19;
  MethodInfo *extraout_RDX_08;
  MethodInfo *extraout_RDX_09;
  MethodInfo *extraout_RDX_10;
  MethodInfo *extraout_RDX_11;
  MethodInfo *extraout_RDX_12;
  MethodInfo *extraout_RDX_13;
  MethodInfo *extraout_RDX_14;
  MethodInfo *extraout_RDX_15;
  MethodInfo *extraout_RDX_16;
  MethodInfo *extraout_RDX_17;
  MethodInfo *extraout_RDX_18;
  MethodInfo *extraout_RDX_19;
  MethodInfo *extraout_RDX_20;
  MethodInfo *method_20;
  MethodInfo *extraout_RDX_21;
  MethodInfo *extraout_RDX_22;
  MethodInfo *extraout_RDX_23;
  MethodInfo *pMVar41;
  ulong unaff_RBX;
  UnityEngine_Object_o *pUVar42;
  MethodInfo *method_21;
  System_String_Fields *pSVar43;
  System_String_Fields *pSVar44;
  System_String_o **ppSVar45;
  Utility_Color255_o *__this_04;
  System_String_Fields __this_05;
  System_Object_array *__this_06;
  System_String_Fields __this_07;
  UnityEngine_Object_c *pUVar46;
  MethodInfo *in_R8;
  MethodInfo *in_R9;
  uint uVar47;
  UnityEngine_Texture_c **value_00;
  float fVar48;
  float fVar49;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 in_XMM1_Da;
  undefined4 in_XMM1_Db;
  float fVar50;
  float fVar51;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined8 in_XMM2_Qa;
  undefined8 in_XMM3_Qa;
  undefined8 in_XMM4_Qa;
  undefined8 in_XMM5_Qa;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;
  UnityEngine_Color_o value_01;
  UnityEngine_Color_o value_02;
  UnityEngine_Color_o value_03;
  UnityEngine_Color_o value_04;
  UnityEngine_Color_o color;
  UnityEngine_Color_o color_00;
  UnityEngine_Color_o UVar52;
  UnityEngine_Color_o color_01;
  undefined4 uStack_2dc;
  long lStack_2d8;
  long *plStack_2d0;
  System_Object_array *pSStack_2c8;
  System_String_Fields SStack_2c0;
  System_String_Fields SStack_2b8;
  undefined1 auStack_2b0 [16];
  undefined1 auStack_2a0 [24];
  System_String_Fields SStack_288;
  System_String_Fields SStack_280;
  System_Object_array *pSStack_278;
  System_String_Fields SStack_270;
  Characters_HumanSetup_o *pCStack_268;
  System_String_Fields SStack_260;
  undefined1 auStack_258 [8];
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined1 auStack_248 [24];
  long *plStack_230;
  System_String_Fields SStack_228;
  System_Object_array *pSStack_220;
  System_String_Fields SStack_218;
  UnityEngine_Texture_o *pUStack_210;
  System_String_Fields SStack_208;
  System_String_o *pSStack_200;
  long *plStack_1f8;
  System_String_Fields SStack_1f0;
  System_Object_array *pSStack_1e8;
  System_String_Fields SStack_1e0;
  UnityEngine_Texture_o *pUStack_1d8;
  System_String_Fields SStack_1d0;
  System_String_o *pSStack_1c8;
  System_String_o *pSStack_1c0;
  Utility_Color255_o *pUStack_1b8;
  System_Object_array *pSStack_1b0;
  System_String_Fields SStack_1a8;
  UnityEngine_Texture_o *pUStack_1a0;
  Utility_Color255_o *pUStack_198;
  undefined8 uStack_190;
  Utility_Color255_o *pUStack_188;
  Characters_HumanSetup_o *pCStack_180;
  Characters_HumanSetup_o *pCStack_178;
  UnityEngine_Texture_o *pUStack_170;
  undefined1 auStack_168 [16];
  undefined1 auStack_158 [24];
  System_String_o *pSStack_140;
  System_String_Fields SStack_138;
  long *plStack_130;
  Characters_HumanSetup_o *pCStack_128;
  UnityEngine_Texture_o *pUStack_120;
  System_String_o *pSStack_118;
  UnityEngine_Texture_o *pUStack_108;
  System_String_o *pSStack_100;
  System_String_c *pSStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_80;
  System_String_o *pSStack_68;
  
  pSVar43 = (System_String_Fields *)__this;
  if (g_data_057adec7 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Uniform/");
    il2cpp_runtime_helper_023445d0(&"_main_tex_mask");
    il2cpp_runtime_helper_023445d0(&"Type");
    il2cpp_runtime_helper_023445d0(&"Casual/");
    pSVar43 = &"Uniform";
    il2cpp_runtime_helper_023445d0();
    g_data_057adec7 = '\x01';
  }
  pCVar29 = (__this->fields)._setup;
  if (((pCVar29 != (Characters_HumanSetup_o *)0x0) &&
      (pSVar43 = (System_String_Fields *)(pCVar29->fields).CurrentCostume,
      (System_String_o *)pSVar43 != (System_String_o *)0x0)) &&
     (method = (MethodInfo *)"Type",
     pSVar15 = (System_String_o *)
               (*(((System_String_o *)pSVar43)->klass->vtable)._7_CompareTo.methodPtr)
                         (pSVar43,"Type",
                          (((System_String_o *)pSVar43)->klass->vtable)._7_CompareTo.method),
     pSVar15 != (System_String_o *)0x0)) {
    in_RCX = (System_String_Fields *)pSVar15->klass;
    method = (((System_String_c *)in_RCX)->vtable)._9_GetTypeCode.method;
    pSVar16 = (System_String_o *)(*(((System_String_c *)in_RCX)->vtable)._9_GetTypeCode.methodPtr)();
    pSVar43 = (System_String_Fields *)pSVar15;
    if (pSVar16 != (System_String_o *)0x0) {
      in_RCX = &"Uniform";
      method = (MethodInfo *)"Uniform";
      uVar12 = System_String__StartsWith(pSVar16,(System_String_o *)"Uniform",(MethodInfo *)0x0);
      unaff_RBX = (ulong)uVar12;
      pCVar29 = (__this->fields)._setup;
      pSVar43 = (System_String_Fields *)pSVar16;
      if (((pCVar29 != (Characters_HumanSetup_o *)0x0) &&
          (pSVar43 = (System_String_Fields *)(pCVar29->fields).CurrentCostume,
          (System_String_o *)pSVar43 != (System_String_o *)0x0)) &&
         (method = (MethodInfo *)"_main_tex_mask",
         plVar17 = (long *)(*(((System_String_o *)pSVar43)->klass->vtable)._7_CompareTo.methodPtr)
                                     (pSVar43,"_main_tex_mask",
                                      (((System_String_o *)pSVar43)->klass->vtable)._7_CompareTo.method),
         plVar17 != (long *)0x0)) {
        pSVar15 = (System_String_o *)
                  (**(code **)(*plVar17 + 0x1c8))(plVar17,*(undefined8 *)(*plVar17 + 0x1d0));
        if ((char)uVar12 == '\0') {
          puVar39 = &"Casual/";
        }
        else {
          puVar39 = &"Uniform/";
        }
        pSVar15 = System_String__Concat_3ae5ba0((System_String_o *)*puVar39,pSVar15,(MethodInfo *)0x0);
        return pSVar15;
      }
    }
  }
  uVar18 = il2cpp_runtime_helper_022b2c90();
  pSVar44 = pSVar43;
  if (g_data_057adec8 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Uniform/");
    il2cpp_runtime_helper_023445d0(&"_color_tex");
    il2cpp_runtime_helper_023445d0(&"Type");
    il2cpp_runtime_helper_023445d0(&"Casual/");
    pSVar44 = &"Uniform";
    il2cpp_runtime_helper_023445d0();
    g_data_057adec8 = '\x01';
  }
  if (((((System_String_o *)pSVar43)->fields != (System_String_Fields)0x0) &&
      (pSVar44 = *(System_String_Fields **)((long)((System_String_o *)pSVar43)->fields + 0x1d8),
      (System_String_o *)pSVar44 != (System_String_o *)0x0)) &&
     (method = (MethodInfo *)"Type",
     pSVar15 = (System_String_o *)
               (*(((System_String_o *)pSVar44)->klass->vtable)._7_CompareTo.methodPtr)
                         (pSVar44,"Type",
                          (((System_String_o *)pSVar44)->klass->vtable)._7_CompareTo.method),
     pSVar15 != (System_String_o *)0x0)) {
    in_RCX = (System_String_Fields *)pSVar15->klass;
    method = (((System_String_c *)in_RCX)->vtable)._9_GetTypeCode.method;
    pSVar16 = (System_String_o *)(*(((System_String_c *)in_RCX)->vtable)._9_GetTypeCode.methodPtr)();
    pSVar44 = (System_String_Fields *)pSVar15;
    if (pSVar16 != (System_String_o *)0x0) {
      in_RCX = &"Uniform";
      method = (MethodInfo *)"Uniform";
      bVar13 = System_String__StartsWith(pSVar16,(System_String_o *)"Uniform",(MethodInfo *)0x0);
      pSVar44 = (System_String_Fields *)pSVar16;
      if (((((System_String_o *)pSVar43)->fields != (System_String_Fields)0x0) &&
          (pSVar44 = *(System_String_Fields **)((long)((System_String_o *)pSVar43)->fields + 0x1d8),
          (System_String_o *)pSVar44 != (System_String_o *)0x0)) &&
         (method = (MethodInfo *)"_color_tex",
         plVar17 = (long *)(*(((System_String_o *)pSVar44)->klass->vtable)._7_CompareTo.methodPtr)
                                     (pSVar44,"_color_tex",
                                      (((System_String_o *)pSVar44)->klass->vtable)._7_CompareTo.method),
         plVar17 != (long *)0x0)) {
        pSVar15 = (System_String_o *)
                  (**(code **)(*plVar17 + 0x1c8))(plVar17,*(undefined8 *)(*plVar17 + 0x1d0));
        if ((char)bVar13 == '\0') {
          puVar39 = &"Casual/";
        }
        else {
          puVar39 = &"Uniform/";
        }
        pSVar15 = System_String__Concat_3ae5ba0((System_String_o *)*puVar39,pSVar15,(MethodInfo *)0x0);
        return pSVar15;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  ppSVar45 = (System_String_o **)pSVar44;
  if (g_data_057adec9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&"Pants/Shoes_Casual");
    il2cpp_runtime_helper_023445d0(&"_pants_tex");
    ppSVar45 = &"Pants/";
    il2cpp_runtime_helper_023445d0();
    g_data_057adec9 = '\x01';
  }
  SVar27 = ((System_String_o *)pSVar44)->fields;
  if (SVar27 != (System_String_Fields)0x0) {
    in_RCX = (System_String_Fields *)0x0;
    if ((*(long *)((long)SVar27 + 0x1c8) != 0) &&
       (in_RCX = *(System_String_Fields **)(*(long *)((long)SVar27 + 0x1c8) + 0x68),
       (System_String_c *)in_RCX != (System_String_c *)0x0)) {
      if (*(int *)((long)&(((System_String_c *)in_RCX)->_1).name + 4) == 1) {
        return "Pants/Shoes_Casual";
      }
      ppSVar45 = *(System_String_o ***)((long)SVar27 + 0x1d8);
      if (((System_String_o *)ppSVar45 != (System_String_o *)0x0) &&
         (method = (MethodInfo *)"_pants_tex",
         plVar17 = (long *)(*(((System_String_o *)ppSVar45)->klass->vtable)._7_CompareTo.methodPtr)
                                     (ppSVar45,"_pants_tex",
                                      (((System_String_o *)ppSVar45)->klass->vtable)._7_CompareTo.method),
         plVar17 != (long *)0x0)) {
        pSVar15 = (System_String_o *)
                  (**(code **)(*plVar17 + 0x1c8))(plVar17,*(undefined8 *)(*plVar17 + 0x1d0));
        pSVar15 = System_String__Concat_3ae5ba0("Pants/",pSVar15,(MethodInfo *)0x0);
        return pSVar15;
      }
    }
  }
  uStack_f0 = il2cpp_runtime_helper_022b2c90();
  pSStack_100 = extraout_RDX;
  pSStack_f8 = (System_String_c *)in_RCX;
  uStack_e0 = in_XMM1_Da;
  uStack_dc = in_XMM1_Db;
  uStack_d0 = in_XMM2_Qa;
  uStack_c0 = in_XMM3_Qa;
  uStack_b0 = in_XMM4_Qa;
  uStack_a0 = in_XMM5_Qa;
  uStack_90 = in_XMM6_Qa;
  uStack_80 = in_XMM7_Qa;
  pSStack_68 = (System_String_o *)pSVar44;
  if (g_data_057adea5 == '\0') {
    pSStack_118 = (System_String_o *)0x42ea198;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupMaterials);
    pSStack_118 = (System_String_o *)0x42ea1a4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Material_InstantiateAsset_Material);
    pSStack_118 = (System_String_o *)0x42ea1b0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    pSStack_118 = (System_String_o *)0x42ea1bc;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    pSStack_118 = (System_String_o *)0x42ea1c8;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
    pSStack_118 = (System_String_o *)0x42ea1d4;
    il2cpp_runtime_helper_023445d0(&"HumanCostumeMat");
    pSStack_118 = (System_String_o *)0x42ea1e0;
    il2cpp_runtime_helper_023445d0(&"_jacket_color");
    pSStack_118 = (System_String_o *)0x42ea1ec;
    il2cpp_runtime_helper_023445d0(&"_main_tex_mask");
    pSStack_118 = (System_String_o *)0x42ea1f8;
    il2cpp_runtime_helper_023445d0(&"_pants_tex");
    pSStack_118 = (System_String_o *)0x42ea204;
    il2cpp_runtime_helper_023445d0(&"_main_tex");
    pSStack_118 = (System_String_o *)0x42ea210;
    il2cpp_runtime_helper_023445d0(&"_color_tex");
    pSStack_118 = (System_String_o *)0x42ea21c;
    il2cpp_runtime_helper_023445d0(&"_boots_color");
    pSStack_118 = (System_String_o *)0x42ea228;
    il2cpp_runtime_helper_023445d0(&"_straps_color");
    pSStack_118 = (System_String_o *)0x42ea234;
    il2cpp_runtime_helper_023445d0(&"_pants_color");
    pSStack_118 = (System_String_o *)0x42ea240;
    il2cpp_runtime_helper_023445d0(&"_shirt_color");
    g_data_057adea5 = '\x01';
  }
  if (*(int *)((long)TypeInfo_ResourcePaths + 0xe4) == 0) {
    pSStack_118 = (System_String_o *)0x42ea264;
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar43 = &TypeInfo_ResourcePaths;
  pSVar15 = *(System_String_o **)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
  if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
    pSStack_118 = (System_String_o *)0x42ea293;
    il2cpp_runtime_helper_02337ed0();
  }
  plVar17 = &TypeInfo_HumanSetupMaterials;
  pSStack_118 = (System_String_o *)0x42ea2b6;
  pSVar16 = System_String__Concat_3ae5ba0
                      (*(System_String_o **)(*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 0x28),"HumanCostumeMat",
                       (MethodInfo *)0x0);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    pSStack_118 = (System_String_o *)0x42ea2d1;
    il2cpp_runtime_helper_02337ed0();
  }
  pSStack_118 = (System_String_o *)0x42ea2eb;
  pSVar16 = (System_String_o *)
            ApplicationManagers_ResourceManager__InstantiateAsset_object_(pSVar15,pSVar16,1,MethodInfo_Material_InstantiateAsset_Material);
  pSVar15 = *(System_String_o **)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
  pSStack_118 = (System_String_o *)0x42ea315;
  pSVar19 = System_String__Concat_3ae5ba0
                      (*(System_String_o **)(*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 0x20),
                       (System_String_o *)ppSVar45,(MethodInfo *)0x0);
  pSStack_118 = (System_String_o *)0x42ea324;
  pUVar20 = (UnityEngine_Texture_o *)
            ApplicationManagers_ResourceManager__LoadAsset(pSVar15,pSVar19,0,(MethodInfo *)0x0);
  value_00 = &TypeInfo_Texture2D;
  if ((pUVar20 == (UnityEngine_Texture_o *)0x0) || (pUVar20->klass == TypeInfo_Texture2D)) {
    pSVar15 = *(System_String_o **)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
    pSStack_118 = (System_String_o *)0x42ea368;
    pUStack_108 = pUVar20;
    pSVar19 = System_String__Concat_3ae5ba0
                        (*(System_String_o **)(*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 0x20),
                         (System_String_o *)method,(MethodInfo *)0x0);
    pSStack_118 = (System_String_o *)0x42ea377;
    method = (MethodInfo *)ApplicationManagers_ResourceManager__LoadAsset(pSVar15,pSVar19,0,(MethodInfo *)0x0)
    ;
    if (((System_String_Fields)method != (System_String_Fields)0x0) &&
       (*(UnityEngine_Texture_c **)method != TypeInfo_Texture2D)) goto label_042ea55f;
    pSVar15 = *(System_String_o **)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
    pSStack_118 = (System_String_o *)0x42ea3b5;
    pSVar19 = System_String__Concat_3ae5ba0
                        (*(System_String_o **)(*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 0x20),pSStack_100,
                         (MethodInfo *)0x0);
    pSStack_118 = (System_String_o *)0x42ea3c4;
    value_00 = (UnityEngine_Texture_c **)
               ApplicationManagers_ResourceManager__LoadAsset(pSVar15,pSVar19,0,(MethodInfo *)0x0);
    if (((UnityEngine_Texture_o *)value_00 != (UnityEngine_Texture_o *)0x0) &&
       (((UnityEngine_Texture_o *)value_00)->klass != TypeInfo_Texture2D)) goto label_042ea567;
    pSVar15 = *(System_String_o **)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
    pSStack_118 = (System_String_o *)0x42ea408;
    pSVar19 = System_String__Concat_3ae5ba0
                        (*(System_String_o **)(*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 0x20),
                         (System_String_o *)pSStack_f8,(MethodInfo *)0x0);
    pSStack_118 = (System_String_o *)0x42ea417;
    pSVar43 = (System_String_Fields *)
              ApplicationManagers_ResourceManager__LoadAsset(pSVar15,pSVar19,0,(MethodInfo *)0x0);
    if (((Characters_HumanSetup_o *)pSVar43 == (Characters_HumanSetup_o *)0x0) ||
       ((UnityEngine_Texture_c *)((Characters_HumanSetup_o *)pSVar43)->klass == TypeInfo_Texture2D)) {
      if (pSVar16 != (System_String_o *)0x0) {
        pSStack_118 = (System_String_o *)0x42ea45c;
        UnityEngine_Material__SetTexture
                  ((UnityEngine_Material_o *)pSVar16,"_main_tex",pUStack_108,(MethodInfo *)0x0);
        pSStack_118 = (System_String_o *)0x42ea473;
        UnityEngine_Material__SetTexture
                  ((UnityEngine_Material_o *)pSVar16,(System_String_o *)"_main_tex_mask",
                   (UnityEngine_Texture_o *)method,(MethodInfo *)0x0);
        pSStack_118 = (System_String_o *)0x42ea48a;
        UnityEngine_Material__SetTexture
                  ((UnityEngine_Material_o *)pSVar16,(System_String_o *)"_color_tex",
                   (UnityEngine_Texture_o *)value_00,(MethodInfo *)0x0);
        pSStack_118 = (System_String_o *)0x42ea4a1;
        UnityEngine_Material__SetTexture
                  ((UnityEngine_Material_o *)pSVar16,(System_String_o *)"_pants_tex",
                   (UnityEngine_Texture_o *)pSVar43,(MethodInfo *)0x0);
        value_01.fields.a = (float)uStack_dc;
        value_01.fields.b = (float)uStack_e0;
        pSStack_118 = (System_String_o *)0x42ea4bf;
        value_01.fields.r = (float)(undefined4)uStack_f0;
        value_01.fields.g = (float)uStack_f0._4_4_;
        UnityEngine_Material__SetColor
                  ((UnityEngine_Material_o *)pSVar16,"_shirt_color",value_01,(MethodInfo *)0x0);
        pSStack_118 = (System_String_o *)0x42ea4dd;
        value_02.fields.b = (float)(undefined4)uStack_c0;
        value_02.fields.a = (float)uStack_c0._4_4_;
        value_02.fields.r = (float)(undefined4)uStack_d0;
        value_02.fields.g = (float)uStack_d0._4_4_;
        UnityEngine_Material__SetColor
                  ((UnityEngine_Material_o *)pSVar16,"_straps_color",value_02,(MethodInfo *)0x0);
        pSStack_118 = (System_String_o *)0x42ea4fb;
        value_03.fields.b = (float)(undefined4)uStack_a0;
        value_03.fields.a = (float)uStack_a0._4_4_;
        value_03.fields.r = (float)(undefined4)uStack_b0;
        value_03.fields.g = (float)uStack_b0._4_4_;
        UnityEngine_Material__SetColor
                  ((UnityEngine_Material_o *)pSVar16,"_pants_color",value_03,(MethodInfo *)0x0);
        pSStack_118 = (System_String_o *)0x42ea51f;
        value_04.fields.b = (float)(undefined4)uStack_80;
        value_04.fields.a = (float)uStack_80._4_4_;
        value_04.fields.r = (float)(undefined4)uStack_90;
        value_04.fields.g = (float)uStack_90._4_4_;
        UnityEngine_Material__SetColor
                  ((UnityEngine_Material_o *)pSVar16,"_jacket_color",value_04,(MethodInfo *)0x0);
        UVar52.fields.b = (float)(int)unaff_RBX;
        UVar52.fields.a = (float)(int)(unaff_RBX >> 0x20);
        UVar52.fields.r = (float)(int)uVar18;
        UVar52.fields.g = (float)(int)((ulong)uVar18 >> 0x20);
        pSStack_118 = (System_String_o *)0x42ea53d;
        UnityEngine_Material__SetColor
                  ((UnityEngine_Material_o *)pSVar16,"_boots_color",UVar52,(MethodInfo *)0x0);
        return pSVar16;
      }
      pSStack_118 = (System_String_o *)0x42ea557;
      pUVar20 = (UnityEngine_Texture_o *)il2cpp_runtime_helper_022b2c90();
      goto label_042ea557;
    }
  }
  else {
label_042ea557:
    pSStack_118 = (System_String_o *)0x42ea55f;
    il2cpp_runtime_helper_022b2fd0(pUVar20);
label_042ea55f:
    pSStack_118 = (System_String_o *)0x42ea567;
    il2cpp_runtime_helper_022b2fd0(method);
label_042ea567:
    pSStack_118 = (System_String_o *)0x42ea56f;
    il2cpp_runtime_helper_022b2fd0(value_00);
  }
  pSStack_118 = (System_String_o *)0x42ea577;
  pCVar29 = (Characters_HumanSetup_o *)pSVar43;
  il2cpp_runtime_helper_022b2fd0();
  plStack_130 = &TypeInfo_HumanSetupMaterials;
  pSStack_140 = pSVar16;
  SStack_138 = (System_String_Fields)method;
  pCStack_128 = (Characters_HumanSetup_o *)pSVar43;
  pUStack_120 = (UnityEngine_Texture_o *)value_00;
  pSStack_118 = pSVar15;
  if (g_data_057ade92 == '\0') {
    pUStack_170 = (UnityEngine_Texture_o *)0x42ea8c5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEffectPresets);
    pUStack_170 = (UnityEngine_Texture_o *)0x42ea8d1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ClothFactory);
    pUStack_170 = (UnityEngine_Texture_o *)0x42ea8dd;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponentsInChildren_Renderer);
    pUStack_170 = (UnityEngine_Texture_o *)0x42ea8e9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupMaterials);
    pUStack_170 = (UnityEngine_Texture_o *)0x42ea8f5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    pUStack_170 = (UnityEngine_Texture_o *)0x42ea901;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    pUStack_170 = (UnityEngine_Texture_o *)0x42ea90d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    pUStack_170 = (UnityEngine_Texture_o *)0x42ea919;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    pUStack_170 = (UnityEngine_Texture_o *)0x42ea925;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color255_get_Value);
    pUStack_170 = (UnityEngine_Texture_o *)0x42ea931;
    il2cpp_runtime_helper_023445d0(&"IgnoreColor");
    g_data_057ade92 = '\x01';
    pUVar22 = (Utility_Color255_o *)(pCVar29->fields)._part_hair;
    if (g_data_057adea2 != '\0') goto label_042ea5b3;
label_042ea94d:
    pUStack_170 = (UnityEngine_Texture_o *)0x42ea959;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    pUVar22 = (Utility_Color255_o *)(pCVar29->fields)._part_hair;
    if (g_data_057adea2 == '\0') goto label_042ea94d;
label_042ea5b3:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    pUStack_170 = (UnityEngine_Texture_o *)0x42ea97d;
    il2cpp_runtime_helper_02337ed0();
  }
  path = &TypeInfo_Object;
  pUStack_170 = (UnityEngine_Texture_o *)0x42ea5d7;
  __this_04 = pUVar22;
  bVar13 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pUVar22,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 == '\0') {
    if ((char)(pCVar29->fields).IsDeadBody == '\0') goto label_042ea9ad;
label_042ea5ee:
    pSVar21 = (pCVar29->fields).CustomSet;
    if (pSVar21 != (Settings_HumanCustomSet_o *)0x0) goto label_042ea5ff;
label_042eabbd:
    pUStack_170 = (UnityEngine_Texture_o *)0x42eabc2;
    il2cpp_runtime_helper_022b2c90();
    pSVar44 = (System_String_Fields *)plVar17;
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      pUStack_170 = (UnityEngine_Texture_o *)0x42ea994;
      il2cpp_runtime_helper_02337ed0();
    }
    pUStack_170 = (UnityEngine_Texture_o *)0x42ea99e;
    __this_04 = pUVar22;
    UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)pUVar22,(MethodInfo *)0x0);
    if ((char)(pCVar29->fields).IsDeadBody != '\0') goto label_042ea5ee;
label_042ea9ad:
    pUVar22 = (Utility_Color255_o *)(pCVar29->fields)._part_hair_1;
    if (*(int *)(TypeInfo_ClothFactory + 0xe4) == 0) {
      pUStack_170 = (UnityEngine_Texture_o *)0x42ea9cd;
      il2cpp_runtime_helper_02337ed0();
    }
    pUStack_170 = (UnityEngine_Texture_o *)0x42ea9d7;
    __this_04 = pUVar22;
    ClothFactory__DisposeObject((UnityEngine_GameObject_o *)pUVar22,(MethodInfo *)0x0);
    pSVar21 = (pCVar29->fields).CustomSet;
    if (pSVar21 == (Settings_HumanCustomSet_o *)0x0) goto label_042eabbd;
label_042ea5ff:
    pSVar4 = (pSVar21->fields).HairEffect;
    if (pSVar4 == (Settings_StringSetting_o *)0x0) goto label_042eabbd;
    pUVar22 = (Utility_Color255_o *)(pSVar4->fields)._value;
    if (*(int *)(TypeInfo_CharacterEffectPresets + 0xe4) == 0) {
      pUStack_170 = (UnityEngine_Texture_o *)0x42ea62b;
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar41 = (MethodInfo *)0x0;
    pUStack_170 = (UnityEngine_Texture_o *)0x42ea635;
    uVar12 = PatreonEffects_CharacterEffectPresets__ParseOrDefault
                       ((System_String_o *)pUVar22,(MethodInfo *)0x0);
    pCVar5 = (pCVar29->fields)._meshes;
    __this_04 = (Utility_Color255_o *)0x0;
    if (pCVar5 == (Characters_HumanSetupMeshes_o *)0x0) goto label_042eabbd;
    pSVar43 = (System_String_Fields *)(ulong)uVar12;
    pUStack_170 = (UnityEngine_Texture_o *)0x42ea64e;
    pUVar22 = (Utility_Color255_o *)Characters_HumanSetupMeshes__GetHairMesh(pCVar5,pMVar41);
    pMVar41 = (MethodInfo *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    pUStack_170 = (UnityEngine_Texture_o *)0x42ea673;
    bVar13 = System_String__op_Inequality
                       ((System_String_o *)pUVar22,(System_String_o *)pMVar41,(MethodInfo *)0x0);
    if ((char)bVar13 == '\0') {
label_042eaa10:
      path = &g_data_057b9b70;
      pCVar5 = (pCVar29->fields)._meshes;
      __this_04 = (Utility_Color255_o *)0x0;
      if (pCVar5 != (Characters_HumanSetupMeshes_o *)0x0) {
        pUStack_170 = (UnityEngine_Texture_o *)0x42eaa26;
        pUVar22 = (Utility_Color255_o *)Characters_HumanSetupMeshes__GetHairClothMesh(pCVar5,pMVar41);
        pUStack_170 = (UnityEngine_Texture_o *)0x42eaa44;
        __this_04 = pUVar22;
        bVar13 = System_String__op_Inequality
                           ((System_String_o *)pUVar22,
                            (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
        if (((char)bVar13 == '\0') || ((char)(pCVar29->fields).IsDeadBody != '\0')) {
          return (System_String_o *)CONCAT44(extraout_var,bVar13);
        }
        path = (long *)(pCVar29->fields)._textures;
        if ((Utility_Color255_o *)path != (Utility_Color255_o *)0x0) {
          if (g_data_057adec5 == '\0') {
            __this_04 = (Utility_Color255_o *)&"Texture";
            pUStack_170 = (UnityEngine_Texture_o *)0x42eaa88;
            il2cpp_runtime_helper_023445d0();
            g_data_057adec5 = '\x01';
          }
          if ((*(System_String_Fields *)&((Utility_Color255_o *)path)->fields != (System_String_Fields)0x0) &&
             (__this_04 = *(Utility_Color255_o **)
                           ((long)*(System_String_Fields *)&((Utility_Color255_o *)path)->fields + 0x1e0),
             __this_04 != (Utility_Color255_o *)0x0)) {
            pUStack_170 = (UnityEngine_Texture_o *)0x42eaac6;
            plVar24 = (long *)(*(((System_String_c *)__this_04->klass)->vtable)._7_CompareTo.methodPtr)
                                        (__this_04,"Texture",
                                         (((System_String_c *)__this_04->klass)->vtable)._7_CompareTo.method);
            if (plVar24 != (long *)0x0) {
              pMVar41 = *(MethodInfo **)(*plVar24 + 0x1d0);
              pUStack_170 = (UnityEngine_Texture_o *)0x42eaae2;
              path = (long *)(**(code **)(*plVar24 + 0x1c8))(plVar24);
              if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
                pUStack_170 = (UnityEngine_Texture_o *)0x42eaafd;
                il2cpp_runtime_helper_02337ed0();
              }
              pUStack_170 = (UnityEngine_Texture_o *)0x42eab05;
              __this_04 = (Utility_Color255_o *)path;
              value_00 = (UnityEngine_Texture_c **)
                         Characters_HumanSetupMaterials__GetHairMaterial((System_String_o *)path,pMVar41);
              pSVar21 = (pCVar29->fields).CustomSet;
              if ((pSVar21 != (Settings_HumanCustomSet_o *)0x0) &&
                 (pSVar6 = (pSVar21->fields).HairColor, pSVar6 != (Settings_ColorSetting_o *)0x0)) {
                pUVar25 = (pSVar6->fields)._value;
                __this_04 = (Utility_Color255_o *)0x0;
                if (pUVar25 != (Utility_Color255_o *)0x0) {
                  pUVar23 = (pCVar29->fields)._mount_cloth;
                  pUStack_170 = (UnityEngine_Texture_o *)0x42eab45;
                  UVar52 = Utility_Color255__ToColor(pUVar25,(MethodInfo *)0x0);
                  fVar48 = UVar52.fields.r;
                  fVar49 = UVar52.fields.g;
                  fVar50 = UVar52.fields.b;
                  fVar51 = UVar52.fields.a;
                  if (*(int *)(TypeInfo_ClothFactory + 0xe4) == 0) {
                    auStack_168._8_4_ = extraout_XMM0_Dc;
                    auStack_168._0_8_ = UVar52.fields._0_8_;
                    auStack_168._12_4_ = extraout_XMM0_Dd;
                    auStack_158._8_4_ = in_XMM1_Dc;
                    auStack_158._0_8_ = UVar52.fields._8_8_;
                    auStack_158._12_4_ = in_XMM1_Dd;
                    pUStack_170 = (UnityEngine_Texture_o *)0x42eab66;
                    il2cpp_runtime_helper_02337ed0();
                    fVar48 = (float)auStack_168._0_4_;
                    fVar49 = (float)auStack_168._4_4_;
                    fVar50 = (float)auStack_158._0_4_;
                    fVar51 = (float)auStack_158._4_4_;
                  }
                  pUStack_170 = (UnityEngine_Texture_o *)0x42eab7f;
                  color.fields.g = fVar49;
                  color.fields.r = fVar48;
                  color.fields.a = fVar51;
                  color.fields.b = fVar50;
                  pUVar23 = ClothFactory__GetHair
                                      (pUVar23,(System_String_o *)pUVar22,(UnityEngine_Material_o *)value_00,
                                       color,(MethodInfo *)0x0);
                  (pCVar29->fields)._part_hair_1 = pUVar23;
                  pUStack_170 = (UnityEngine_Texture_o *)0x42eab97;
                  il2cpp_runtime_helper_022b4080(&(pCVar29->fields)._part_hair_1,pUVar23);
                  Characters_HumanSetup__ApplyCharacterEffectToPart
                            (pCVar29,(pCVar29->fields)._part_hair_1,(int32_t)pSVar43,1,in_R8);
                  return extraout_RAX;
                }
              }
            }
          }
        }
      }
      goto label_042eabbd;
    }
    if (*(int *)((long)TypeInfo_ResourcePaths + 0xe4) == 0) {
      pUStack_170 = (UnityEngine_Texture_o *)0x42ea694;
      il2cpp_runtime_helper_02337ed0();
    }
    value_00 = (UnityEngine_Texture_c **)&(pCVar29->fields)._part_hair;
    path = *(long **)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      pUStack_170 = (UnityEngine_Texture_o *)0x42ea6c3;
      il2cpp_runtime_helper_02337ed0();
    }
    auStack_168._0_4_ = uVar12;
    pUStack_170 = (UnityEngine_Texture_o *)0x42ea6e1;
    pUVar23 = (UnityEngine_GameObject_o *)
              ApplicationManagers_ResourceManager__InstantiateAsset_object_
                        ((System_String_o *)path,(System_String_o *)pUVar22,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
    (pCVar29->fields)._part_hair = pUVar23;
    pUStack_170 = (UnityEngine_Texture_o *)0x42ea6f4;
    pCVar30 = (Characters_HumanSetup_o *)value_00;
    il2cpp_runtime_helper_022b4080(value_00,pUVar23);
    pUStack_170 = (UnityEngine_Texture_o *)0x42ea70b;
    Characters_HumanSetup__AttachToMount
              (pCVar30,(pCVar29->fields)._part_hair,(pCVar29->fields)._part_head,0,in_R8);
    __this_04 = (Utility_Color255_o *)(pCVar29->fields)._part_hair;
    if (__this_04 == (Utility_Color255_o *)0x0) goto label_042eabbd;
    pUStack_170 = (UnityEngine_Texture_o *)0x42ea72b;
    pSVar44 = (System_String_Fields *)
              UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                        ((UnityEngine_GameObject_o *)__this_04,MethodInfo_Renderer_GetComponentsInChildren_Renderer);
    if ((System_Object_array *)pSVar44 == (System_Object_array *)0x0) goto label_042eabbd;
    iVar3 = (int)((System_Object_array *)pSVar44)->max_length;
    plVar17 = (long *)pSVar44;
    if (iVar3 < 1) {
label_042ea9ed:
      pMVar41 = (MethodInfo *)(pCVar29->fields)._part_hair;
      pSVar43 = (System_String_Fields *)(ulong)(uint)auStack_168._0_4_;
      pUStack_170 = (UnityEngine_Texture_o *)0x42eaa09;
      Characters_HumanSetup__ApplyCharacterEffectToPart
                (pCVar29,(UnityEngine_GameObject_o *)pMVar41,auStack_168._0_4_,1,in_R8);
      goto label_042eaa10;
    }
    pSVar43 = (System_String_Fields *)0x0;
    value_00 = (UnityEngine_Texture_c **)&"Texture";
    if (iVar3 != 0) {
      do {
        path = (long *)(pCVar29->fields)._textures;
        if ((Utility_Color255_o *)path == (Utility_Color255_o *)0x0) goto label_042eabbd;
        pUVar22 = (Utility_Color255_o *)((System_Object_array *)pSVar44)->m_Items[(int)pSVar43];
        if (g_data_057adec5 == '\0') {
          __this_04 = (Utility_Color255_o *)&"Texture";
          pUStack_170 = (UnityEngine_Texture_o *)0x42ea7a4;
          il2cpp_runtime_helper_023445d0();
          g_data_057adec5 = '\x01';
        }
        if ((*(System_String_Fields *)&((Utility_Color255_o *)path)->fields == (System_String_Fields)0x0) ||
           (__this_04 = *(Utility_Color255_o **)
                         ((long)*(System_String_Fields *)&((Utility_Color255_o *)path)->fields + 0x1e0),
           __this_04 == (Utility_Color255_o *)0x0)) goto label_042eabbd;
        pUStack_170 = (UnityEngine_Texture_o *)0x42ea7db;
        plVar24 = (long *)(*(((System_String_c *)__this_04->klass)->vtable)._7_CompareTo.methodPtr)
                                    (__this_04,"Texture",
                                     (((System_String_c *)__this_04->klass)->vtable)._7_CompareTo.method);
        if (plVar24 == (long *)0x0) goto label_042eabbd;
        pMVar41 = *(MethodInfo **)(*plVar24 + 0x1d0);
        pUStack_170 = (UnityEngine_Texture_o *)0x42ea7f7;
        path = (long *)(**(code **)(*plVar24 + 0x1c8))(plVar24);
        if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
          pUStack_170 = (UnityEngine_Texture_o *)0x42ea812;
          il2cpp_runtime_helper_02337ed0();
        }
        pUStack_170 = (UnityEngine_Texture_o *)0x42ea81a;
        __this_04 = (Utility_Color255_o *)path;
        pUVar37 = Characters_HumanSetupMaterials__GetHairMaterial((System_String_o *)path,pMVar41);
        if (pUVar22 == (Utility_Color255_o *)0x0) goto label_042eabbd;
        pUStack_170 = (UnityEngine_Texture_o *)0x42ea830;
        UnityEngine_Renderer__set_material((UnityEngine_Renderer_o *)pUVar22,pUVar37,(MethodInfo *)0x0);
        pUStack_170 = (UnityEngine_Texture_o *)0x42ea83a;
        __this_04 = pUVar22;
        pUVar25 = (Utility_Color255_o *)
                  UnityEngine_Object__get_name((UnityEngine_Object_o *)pUVar22,(MethodInfo *)0x0);
        if (pUVar25 == (Utility_Color255_o *)0x0) goto label_042eabbd;
        pUStack_170 = (UnityEngine_Texture_o *)0x42ea857;
        bVar13 = System_String__Contains((System_String_o *)pUVar25,"IgnoreColor",(MethodInfo *)0x0);
        if ((char)bVar13 == '\0') {
          pUStack_170 = (UnityEngine_Texture_o *)0x42ea869;
          __this_04 = pUVar22;
          pUVar22 = (Utility_Color255_o *)
                    UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)pUVar22,(MethodInfo *)0x0);
          pSVar21 = (pCVar29->fields).CustomSet;
          if (((pSVar21 == (Settings_HumanCustomSet_o *)0x0) ||
              (pSVar6 = (pSVar21->fields).HairColor, pSVar6 == (Settings_ColorSetting_o *)0x0)) ||
             (__this_04 = (pSVar6->fields)._value, __this_04 == (Utility_Color255_o *)0x0)) goto label_042eabbd;
          pUStack_170 = (UnityEngine_Texture_o *)0x42ea8a1;
          UVar52 = Utility_Color255__ToColor(__this_04,(MethodInfo *)0x0);
          if (pUVar22 == (Utility_Color255_o *)0x0) goto label_042eabbd;
          pUStack_170 = (UnityEngine_Texture_o *)0x42ea8b4;
          pUVar25 = pUVar22;
          UnityEngine_Material__set_color((UnityEngine_Material_o *)pUVar22,UVar52,(MethodInfo *)0x0);
        }
        uVar47 = (int)pSVar43 + 1;
        pSVar43 = (System_String_Fields *)(ulong)uVar47;
        uVar12 = (uint)((System_Object_array *)pSVar44)->max_length;
        if ((int)uVar12 <= (int)uVar47) goto label_042ea9ed;
        __this_04 = pUVar25;
      } while (uVar47 < uVar12);
    }
  }
  pUStack_170 = (UnityEngine_Texture_o *)0x42eabc7;
  uStack_190 = il2cpp_runtime_helper_022b2ca0();
  pUStack_188 = pUVar22;
  pCStack_180 = pCVar29;
  pCStack_178 = (Characters_HumanSetup_o *)pSVar43;
  pUStack_170 = (UnityEngine_Texture_o *)value_00;
  if (g_data_057ade96 == '\0') {
    pUStack_198 = (Utility_Color255_o *)0x42ead45;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    pUStack_198 = (Utility_Color255_o *)0x42ead51;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    pUStack_198 = (Utility_Color255_o *)0x42ead5d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    pUStack_198 = (Utility_Color255_o *)0x42ead69;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    pUStack_198 = (Utility_Color255_o *)0x42ead75;
    il2cpp_runtime_helper_023445d0(&"Eye");
    g_data_057ade96 = '\x01';
    SVar27 = *(System_String_Fields *)&__this_04[8].fields;
    if (g_data_057adea2 != '\0') goto label_042eabfd;
label_042ead91:
    pUStack_198 = (Utility_Color255_o *)0x42ead9d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    SVar27 = *(System_String_Fields *)&__this_04[8].fields;
    if (g_data_057adea2 == '\0') goto label_042ead91;
label_042eabfd:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    pUStack_198 = (Utility_Color255_o *)0x42eadc0;
    il2cpp_runtime_helper_02337ed0();
  }
  pUStack_198 = (Utility_Color255_o *)0x42eac20;
  bVar13 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)SVar27,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 == '\0') {
    if (*(int *)((long)TypeInfo_ResourcePaths + 0xe4) == 0) goto label_042eadf7;
label_042eac3f:
    pvVar7 = __this_04[0xb].monitor;
    SVar31 = TypeInfo_ResourcePaths;
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      pUStack_198 = (Utility_Color255_o *)0x42eadd6;
      il2cpp_runtime_helper_02337ed0();
    }
    pUStack_198 = (Utility_Color255_o *)0x42eade0;
    UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)SVar27,(MethodInfo *)0x0);
    if (*(int *)((long)TypeInfo_ResourcePaths + 0xe4) != 0) goto label_042eac3f;
label_042eadf7:
    pUStack_198 = (Utility_Color255_o *)0x42eadfc;
    il2cpp_runtime_helper_02337ed0();
    pvVar7 = __this_04[0xb].monitor;
    SVar31 = TypeInfo_ResourcePaths;
  }
  pSVar15 = (System_String_o *)0x0;
  TypeInfo_ResourcePaths = SVar31;
  if (pvVar7 != (void *)0x0) {
    SVar27 = *(System_String_Fields *)(*(long *)((long)SVar31 + 0xb8) + 8);
    if (g_data_057adeb7 == '\0') {
      pUStack_198 = (Utility_Color255_o *)0x42eac70;
      il2cpp_runtime_helper_023445d0(&"char_eyes");
      g_data_057adeb7 = '\x01';
    }
    value_00 = (UnityEngine_Texture_c **)&__this_04[8].fields;
    pUStack_198 = (Utility_Color255_o *)0x42eac94;
    pSVar15 = System_String__Concat_3ae5ba0
                        (*(System_String_o **)((long)pvVar7 + 0x38),"char_eyes",(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      pUStack_198 = (Utility_Color255_o *)0x42eacaf;
      il2cpp_runtime_helper_02337ed0();
    }
    pUStack_198 = (Utility_Color255_o *)0x42eacc9;
    pIVar26 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                        ((System_String_o *)SVar27,pSVar15,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
    *(Il2CppObject **)&__this_04[8].fields = pIVar26;
    pUStack_198 = (Utility_Color255_o *)0x42eacdc;
    SVar31 = (System_String_Fields)value_00;
    il2cpp_runtime_helper_022b4080(value_00,pIVar26);
    pUStack_198 = (Utility_Color255_o *)0x42eacf3;
    Characters_HumanSetup__AttachToMount
              ((Characters_HumanSetup_o *)SVar31,*(UnityEngine_GameObject_o **)&__this_04[8].fields,
               (UnityEngine_GameObject_o *)*(System_String_Fields *)&__this_04[10].monitor,0,in_R8);
    if ((__this_04[0xe].monitor != (void *)0x0) &&
       (lVar40 = *(long *)((long)__this_04[0xe].monitor + 0x40), lVar40 != 0)) {
      Characters_HumanSetup__SetFacialTexture
                ((Characters_HumanSetup_o *)SVar31,*(UnityEngine_GameObject_o **)&__this_04[8].fields,
                 "Eye",*(int32_t *)(lVar40 + 0x14),0,in_R9);
      return extraout_RAX_00;
    }
  }
  pUStack_198 = (Utility_Color255_o *)0x42eae15;
  pSStack_1c8 = (System_String_o *)il2cpp_runtime_helper_022b2c90();
  pSStack_1c0 = pSVar15;
  pUStack_1b8 = __this_04;
  pSStack_1b0 = (System_Object_array *)pSVar44;
  SStack_1a8 = SVar27;
  pUStack_1a0 = (UnityEngine_Texture_o *)value_00;
  pUStack_198 = (Utility_Color255_o *)path;
  if (g_data_057ade97 == '\0') {
    SStack_1d0._stringLength = 0x42eb0a3;
    SStack_1d0._firstChar = 0;
    SStack_1d0._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    SStack_1d0._stringLength = 0x42eb0af;
    SStack_1d0._firstChar = 0;
    SStack_1d0._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetup);
    SStack_1d0._stringLength = 0x42eb0bb;
    SStack_1d0._firstChar = 0;
    SStack_1d0._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    SStack_1d0._stringLength = 0x42eb0c7;
    SStack_1d0._firstChar = 0;
    SStack_1d0._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    SStack_1d0._stringLength = 0x42eb0d3;
    SStack_1d0._firstChar = 0;
    SStack_1d0._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    SStack_1d0._stringLength = 0x42eb0df;
    SStack_1d0._firstChar = 0;
    SStack_1d0._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    SStack_1d0._stringLength = 0x42eb0eb;
    SStack_1d0._firstChar = 0;
    SStack_1d0._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&"None");
    SStack_1d0._stringLength = 0x42eb0f7;
    SStack_1d0._firstChar = 0;
    SStack_1d0._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&"Face");
    g_data_057ade97 = '\x01';
    SVar35 = *(System_String_Fields *)((long)SVar31 + 0x118);
    if (g_data_057adea2 != '\0') goto label_042eae50;
label_042eb113:
    SStack_1d0._stringLength = 0x42eb11f;
    SStack_1d0._firstChar = 0;
    SStack_1d0._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    SVar35 = *(System_String_Fields *)((long)SVar31 + 0x118);
    if (g_data_057adea2 == '\0') goto label_042eb113;
label_042eae50:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    SStack_1d0._stringLength = 0x42eb142;
    SStack_1d0._firstChar = 0;
    SStack_1d0._6_2_ = 0;
    il2cpp_runtime_helper_02337ed0();
  }
  plVar17 = &TypeInfo_Object;
  SStack_1d0._stringLength = 0x42eae73;
  SStack_1d0._firstChar = 0;
  SStack_1d0._6_2_ = 0;
  SVar32 = SVar35;
  bVar13 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)SVar35,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 != '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      SStack_1d0._stringLength = 0x42eae88;
      SStack_1d0._firstChar = 0;
      SStack_1d0._6_2_ = 0;
      il2cpp_runtime_helper_02337ed0();
    }
    SStack_1d0._stringLength = 0x42eae92;
    SStack_1d0._firstChar = 0;
    SStack_1d0._6_2_ = 0;
    SVar32 = SVar35;
    UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)SVar35,(MethodInfo *)0x0);
  }
  if ((*(long *)((long)SVar31 + 0x1c8) != 0) &&
     (lVar40 = *(long *)(*(long *)((long)SVar31 + 0x1c8) + 0x48), lVar40 != 0)) {
    pSVar15 = *(System_String_o **)(lVar40 + 0x18);
    SVar32._stringLength = 0;
    SVar32._firstChar = 0;
    SVar32._6_2_ = 0;
    if (pSVar15 != (System_String_o *)0x0) {
      SStack_1d0._stringLength = 0x42eaec9;
      SStack_1d0._firstChar = 0;
      SStack_1d0._6_2_ = 0;
      SVar27 = (System_String_Fields)System_String__Substring(pSVar15,4,(MethodInfo *)0x0);
      SStack_1d0._stringLength = 0x42eaee0;
      SStack_1d0._firstChar = 0;
      SStack_1d0._6_2_ = 0;
      SVar32 = SVar27;
      bVar13 = System_String__op_Inequality
                         ((System_String_o *)SVar27,(System_String_o *)"None",(MethodInfo *)0x0);
      if ((char)bVar13 == '\0') {
        return (System_String_o *)CONCAT44(extraout_var_00,bVar13);
      }
      if ((*(long *)((long)SVar31 + 0x1c8) != 0) &&
         (lVar40 = *(long *)(*(long *)((long)SVar31 + 0x1c8) + 0x48), lVar40 != 0)) {
        SVar35 = *(System_String_Fields *)(lVar40 + 0x18);
        plVar17 = &TypeInfo_HumanSetup;
        if (*(int *)(TypeInfo_HumanSetup + 0xe4) == 0) {
          SStack_1d0._stringLength = 0x42eaf22;
          SStack_1d0._firstChar = 0;
          SStack_1d0._6_2_ = 0;
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar8 = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_HumanSetup + 0xb8) + 0x40);
        SVar32._stringLength = 0;
        SVar32._firstChar = 0;
        SVar32._6_2_ = 0;
        if (pSVar8 != (System_Collections_Generic_HashSet_object__o *)0x0) {
          SStack_1d0._stringLength = 0x42eaf4b;
          SStack_1d0._firstChar = 0;
          SStack_1d0._6_2_ = 0;
          uVar12 = System_Collections_Generic_HashSet_object___Contains
                             (pSVar8,(Il2CppObject *)SVar35,MethodInfo_Boolean_Contains);
          value_00 = (UnityEngine_Texture_c **)(ulong)uVar12;
          if ((char)uVar12 == '\0') {
            SVar35 = **(System_String_Fields **)(g_data_057b9c00 + 0xb8);
            iVar3 = *(int *)((long)TypeInfo_ResourcePaths + 0xe4);
          }
          else {
            iVar3 = *(int *)((long)TypeInfo_ResourcePaths + 0xe4);
          }
          if (iVar3 == 0) {
            SStack_1d0._stringLength = 0x42eb18a;
            SStack_1d0._firstChar = 0;
            SStack_1d0._6_2_ = 0;
            il2cpp_runtime_helper_02337ed0();
            lVar40 = *(long *)((long)SVar31 + 0x168);
            SVar32 = TypeInfo_ResourcePaths;
          }
          else {
            lVar40 = *(long *)((long)SVar31 + 0x168);
            SVar32 = TypeInfo_ResourcePaths;
          }
          plVar17 = (long *)0x0;
          TypeInfo_ResourcePaths = SVar32;
          if (lVar40 != 0) {
            pSStack_1c8 = *(System_String_o **)
                           (*(UnityEngine_Object_StaticFields **)((long)SVar32 + 0xb8) + 2);
            if (g_data_057adeb8 == '\0') {
              SStack_1d0._stringLength = 0x42eafa2;
              SStack_1d0._firstChar = 0;
              SStack_1d0._6_2_ = 0;
              il2cpp_runtime_helper_023445d0(&"char_face");
              g_data_057adeb8 = '\x01';
            }
            SStack_1d0._stringLength = 0x42eafcb;
            SStack_1d0._firstChar = 0;
            SStack_1d0._6_2_ = 0;
            bVar13 = System_String__op_Inequality
                               ((System_String_o *)SVar35,
                                (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
            if ((char)bVar13 == '\0') {
              SVar35 = "char_face";
            }
            pCVar29 = (Characters_HumanSetup_o *)((long)SVar31 + 0x118);
            SStack_1d0._stringLength = 0x42eafef;
            SStack_1d0._firstChar = 0;
            SStack_1d0._6_2_ = 0;
            pSVar15 = System_String__Concat_3ae5ba0
                                (*(System_String_o **)(lVar40 + 0x38),(System_String_o *)SVar35,
                                 (MethodInfo *)0x0);
            if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
              SStack_1d0._stringLength = 0x42eb00a;
              SStack_1d0._firstChar = 0;
              SStack_1d0._6_2_ = 0;
              il2cpp_runtime_helper_02337ed0();
            }
            SStack_1d0._stringLength = 0x42eb025;
            SStack_1d0._firstChar = 0;
            SStack_1d0._6_2_ = 0;
            pIVar26 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                                (pSStack_1c8,pSVar15,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
            *(Il2CppObject **)((long)SVar31 + 0x118) = pIVar26;
            SStack_1d0._stringLength = 0x42eb038;
            SStack_1d0._firstChar = 0;
            SStack_1d0._6_2_ = 0;
            il2cpp_runtime_helper_022b4080(pCVar29,pIVar26);
            lVar40 = 0x148;
            if ((char)uVar12 != '\0') {
              lVar40 = 0x78;
            }
            SStack_1d0._stringLength = 0x42eb060;
            SStack_1d0._firstChar = 0;
            SStack_1d0._6_2_ = 0;
            Characters_HumanSetup__AttachToMount
                      (pCVar29,*(UnityEngine_GameObject_o **)((long)SVar31 + 0x118),
                       *(UnityEngine_GameObject_o **)((long)SVar31 + lVar40),uVar12 & 0xff,in_R8);
            pUVar23 = *(UnityEngine_GameObject_o **)((long)SVar31 + 0x118);
            SStack_1d0._stringLength = 0x42eb072;
            SStack_1d0._firstChar = 0;
            SStack_1d0._6_2_ = 0;
            iVar14 = System_Int32__Parse((System_String_o *)SVar27,(MethodInfo *)0x0);
            Characters_HumanSetup__SetFacialTexture
                      ((Characters_HumanSetup_o *)SVar27,pUVar23,"Face",iVar14,uVar12 & 0xff,in_R9);
            return extraout_RAX_01;
          }
        }
      }
    }
  }
  SStack_1d0._stringLength = 0x42eb1a3;
  SStack_1d0._firstChar = 0;
  SStack_1d0._6_2_ = 0;
  pSStack_200 = (System_String_o *)il2cpp_runtime_helper_022b2c90();
  plStack_1f8 = plVar17;
  SStack_1f0 = SVar31;
  pSStack_1e8 = (System_Object_array *)pSVar44;
  SStack_1e0 = SVar27;
  pUStack_1d8 = (UnityEngine_Texture_o *)value_00;
  SStack_1d0 = SVar35;
  if (g_data_057ade98 == '\0') {
    SStack_208._stringLength = 0x42eb433;
    SStack_208._firstChar = 0;
    SStack_208._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    SStack_208._stringLength = 0x42eb43f;
    SStack_208._firstChar = 0;
    SStack_208._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetup);
    SStack_208._stringLength = 0x42eb44b;
    SStack_208._firstChar = 0;
    SStack_208._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    SStack_208._stringLength = 0x42eb457;
    SStack_208._firstChar = 0;
    SStack_208._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    SStack_208._stringLength = 0x42eb463;
    SStack_208._firstChar = 0;
    SStack_208._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    SStack_208._stringLength = 0x42eb46f;
    SStack_208._firstChar = 0;
    SStack_208._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    SStack_208._stringLength = 0x42eb47b;
    SStack_208._firstChar = 0;
    SStack_208._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&"None");
    SStack_208._stringLength = 0x42eb487;
    SStack_208._firstChar = 0;
    SStack_208._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&"Glass");
    g_data_057ade98 = '\x01';
    SVar31 = (System_String_Fields)((UnityEngine_Object_o *)((long)SVar32 + 0x120))->klass;
    if (g_data_057adea2 != '\0') goto label_042eb1e0;
label_042eb4a3:
    SStack_208._stringLength = 0x42eb4af;
    SStack_208._firstChar = 0;
    SStack_208._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    SVar31 = (System_String_Fields)((UnityEngine_Object_o *)((long)SVar32 + 0x120))->klass;
    if (g_data_057adea2 == '\0') goto label_042eb4a3;
label_042eb1e0:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    SStack_208._stringLength = 0x42eb4d2;
    SStack_208._firstChar = 0;
    SStack_208._6_2_ = 0;
    il2cpp_runtime_helper_02337ed0();
  }
  plVar17 = &TypeInfo_Object;
  SVar35._stringLength = 0;
  SVar35._firstChar = 0;
  SVar35._6_2_ = 0;
  SStack_208._stringLength = 0x42eb203;
  SStack_208._firstChar = 0;
  SStack_208._6_2_ = 0;
  __this_05 = SVar31;
  bVar13 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)SVar31,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 != '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      SStack_208._stringLength = 0x42eb218;
      SStack_208._firstChar = 0;
      SStack_208._6_2_ = 0;
      il2cpp_runtime_helper_02337ed0();
    }
    SVar35._stringLength = 0;
    SVar35._firstChar = 0;
    SVar35._6_2_ = 0;
    SStack_208._stringLength = 0x42eb222;
    SStack_208._firstChar = 0;
    SStack_208._6_2_ = 0;
    __this_05 = SVar31;
    UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)SVar31,(MethodInfo *)0x0);
  }
  pUVar28 = ((UnityEngine_Object_o *)((long)SVar32 + 0x1c8))->klass;
  if ((pUVar28 != (UnityEngine_Object_c *)0x0) &&
     (pIVar9 = (pUVar28->_1).declaringType, pIVar9 != (Il2CppClass *)0x0)) {
    pSVar15 = (System_String_o *)(pIVar9->_1).namespaze;
    __this_05._stringLength = 0;
    __this_05._firstChar = 0;
    __this_05._6_2_ = 0;
    if (pSVar15 != (System_String_o *)0x0) {
      SStack_208._stringLength = 0x42eb259;
      SStack_208._firstChar = 0;
      SStack_208._6_2_ = 0;
      SVar27 = (System_String_Fields)System_String__Substring(pSVar15,5,(MethodInfo *)0x0);
      SStack_208._stringLength = 0x42eb270;
      SStack_208._firstChar = 0;
      SStack_208._6_2_ = 0;
      SVar35 = "None";
      __this_05 = SVar27;
      bVar13 = System_String__op_Inequality
                         ((System_String_o *)SVar27,(System_String_o *)"None",(MethodInfo *)0x0);
      if ((char)bVar13 == '\0') {
        return (System_String_o *)CONCAT44(extraout_var_01,bVar13);
      }
      pUVar28 = ((UnityEngine_Object_o *)((long)SVar32 + 0x1c8))->klass;
      if ((pUVar28 != (UnityEngine_Object_c *)0x0) &&
         (pIVar9 = (pUVar28->_1).declaringType, pIVar9 != (Il2CppClass *)0x0)) {
        SVar31 = (System_String_Fields)(pIVar9->_1).namespaze;
        plVar17 = &TypeInfo_HumanSetup;
        if (*(int *)(TypeInfo_HumanSetup + 0xe4) == 0) {
          SStack_208._stringLength = 0x42eb2b2;
          SStack_208._firstChar = 0;
          SStack_208._6_2_ = 0;
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar8 = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_HumanSetup + 0xb8) + 0x40);
        __this_05._stringLength = 0;
        __this_05._firstChar = 0;
        __this_05._6_2_ = 0;
        if (pSVar8 != (System_Collections_Generic_HashSet_object__o *)0x0) {
          SStack_208._stringLength = 0x42eb2db;
          SStack_208._firstChar = 0;
          SStack_208._6_2_ = 0;
          SVar35 = SVar31;
          uVar12 = System_Collections_Generic_HashSet_object___Contains
                             (pSVar8,(Il2CppObject *)SVar31,MethodInfo_Boolean_Contains);
          value_00 = (UnityEngine_Texture_c **)(ulong)uVar12;
          if ((char)uVar12 == '\0') {
            SVar31 = **(System_String_Fields **)(g_data_057b9c00 + 0xb8);
            iVar3 = *(int *)((long)TypeInfo_ResourcePaths + 0xe4);
          }
          else {
            iVar3 = *(int *)((long)TypeInfo_ResourcePaths + 0xe4);
          }
          if (iVar3 == 0) {
            SStack_208._stringLength = 0x42eb51a;
            SStack_208._firstChar = 0;
            SStack_208._6_2_ = 0;
            il2cpp_runtime_helper_02337ed0();
            pUVar28 = ((UnityEngine_Object_o *)((long)SVar32 + 0x168))->klass;
            __this_05 = TypeInfo_ResourcePaths;
          }
          else {
            pUVar28 = ((UnityEngine_Object_o *)((long)SVar32 + 0x168))->klass;
            __this_05 = TypeInfo_ResourcePaths;
          }
          plVar17 = (long *)0x0;
          TypeInfo_ResourcePaths = __this_05;
          if (pUVar28 != (UnityEngine_Object_c *)0x0) {
            pSStack_200 = *(System_String_o **)((long)*(System_String_Fields *)((long)__this_05 + 0xb8) + 8);
            if (g_data_057adeb9 == '\0') {
              SStack_208._stringLength = 0x42eb332;
              SStack_208._firstChar = 0;
              SStack_208._6_2_ = 0;
              il2cpp_runtime_helper_023445d0(&"char_glasses");
              g_data_057adeb9 = '\x01';
            }
            SStack_208._stringLength = 0x42eb35b;
            SStack_208._firstChar = 0;
            SStack_208._6_2_ = 0;
            bVar13 = System_String__op_Inequality
                               ((System_String_o *)SVar31,
                                (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
            if ((char)bVar13 == '\0') {
              SVar31 = "char_glasses";
            }
            pCVar29 = (Characters_HumanSetup_o *)((long)SVar32 + 0x120);
            SStack_208._stringLength = 0x42eb37f;
            SStack_208._firstChar = 0;
            SStack_208._6_2_ = 0;
            pSVar15 = System_String__Concat_3ae5ba0
                                (*(System_String_o **)&(pUVar28->_1).this_arg.bits,(System_String_o *)SVar31,
                                 (MethodInfo *)0x0);
            if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
              SStack_208._stringLength = 0x42eb39a;
              SStack_208._firstChar = 0;
              SStack_208._6_2_ = 0;
              il2cpp_runtime_helper_02337ed0();
            }
            SStack_208._stringLength = 0x42eb3b5;
            SStack_208._firstChar = 0;
            SStack_208._6_2_ = 0;
            pUVar28 = (UnityEngine_Object_c *)
                      ApplicationManagers_ResourceManager__InstantiateAsset_object_
                                (pSStack_200,pSVar15,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
            ((UnityEngine_Object_o *)((long)SVar32 + 0x120))->klass = pUVar28;
            SStack_208._stringLength = 0x42eb3c8;
            SStack_208._firstChar = 0;
            SStack_208._6_2_ = 0;
            il2cpp_runtime_helper_022b4080(pCVar29,pUVar28);
            lVar40 = 0x148;
            if ((char)uVar12 != '\0') {
              lVar40 = 0x78;
            }
            SStack_208._stringLength = 0x42eb3f0;
            SStack_208._firstChar = 0;
            SStack_208._6_2_ = 0;
            Characters_HumanSetup__AttachToMount
                      (pCVar29,(UnityEngine_GameObject_o *)
                               ((UnityEngine_Object_o *)((long)SVar32 + 0x120))->klass,
                       *(UnityEngine_GameObject_o **)((long)SVar32 + lVar40),uVar12 & 0xff,in_R8);
            pUVar28 = ((UnityEngine_Object_o *)((long)SVar32 + 0x120))->klass;
            SStack_208._stringLength = 0x42eb402;
            SStack_208._firstChar = 0;
            SStack_208._6_2_ = 0;
            iVar14 = System_Int32__Parse((System_String_o *)SVar27,(MethodInfo *)0x0);
            Characters_HumanSetup__SetFacialTexture
                      ((Characters_HumanSetup_o *)SVar27,(UnityEngine_GameObject_o *)pUVar28,"Glass",
                       iVar14,uVar12 & 0xff,in_R9);
            return extraout_RAX_02;
          }
        }
      }
    }
  }
  SStack_208._stringLength = 0x42eb533;
  SStack_208._firstChar = 0;
  SStack_208._6_2_ = 0;
  il2cpp_runtime_helper_022b2c90();
  plStack_230 = plVar17;
  SStack_228 = SVar32;
  pSStack_220 = (System_Object_array *)pSVar44;
  SStack_218 = SVar27;
  pUStack_210 = (UnityEngine_Texture_o *)value_00;
  SStack_208 = SVar31;
  if (g_data_057ade9e == '\0') {
    SStack_260._stringLength = 0x42ebdc7;
    SStack_260._firstChar = 0;
    SStack_260._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ClothFactory);
    SStack_260._stringLength = 0x42ebdd3;
    SStack_260._firstChar = 0;
    SStack_260._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponent_Renderer);
    SStack_260._stringLength = 0x42ebddf;
    SStack_260._firstChar = 0;
    SStack_260._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupMaterials);
    SStack_260._stringLength = 0x42ebdeb;
    SStack_260._firstChar = 0;
    SStack_260._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    SStack_260._stringLength = 0x42ebdf7;
    SStack_260._firstChar = 0;
    SStack_260._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    SStack_260._stringLength = 0x42ebe03;
    SStack_260._firstChar = 0;
    SStack_260._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    SStack_260._stringLength = 0x42ebe0f;
    SStack_260._firstChar = 0;
    SStack_260._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color255_get_Value);
    SStack_260._stringLength = 0x42ebe1b;
    SStack_260._firstChar = 0;
    SStack_260._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&"Type");
    SStack_260._stringLength = 0x42ebe27;
    SStack_260._firstChar = 0;
    SStack_260._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&"Uniform");
    g_data_057ade9e = '\x01';
    pUVar36 = *(UnityEngine_Object_o **)((long)__this_05 + 0x158);
    if (g_data_057adea2 != '\0') goto label_042eb576;
label_042ebe43:
    SStack_260._stringLength = 0x42ebe4f;
    SStack_260._firstChar = 0;
    SStack_260._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    pUVar36 = *(UnityEngine_Object_o **)((long)__this_05 + 0x158);
    if (g_data_057adea2 == '\0') goto label_042ebe43;
label_042eb576:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    SStack_260._stringLength = 0x42ebe72;
    SStack_260._firstChar = 0;
    SStack_260._6_2_ = 0;
    il2cpp_runtime_helper_02337ed0();
  }
  SStack_260._stringLength = 0x42eb599;
  SStack_260._firstChar = 0;
  SStack_260._6_2_ = 0;
  bVar13 = UnityEngine_Object__op_Inequality(pUVar36,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 == '\0') {
    pUVar36 = *(UnityEngine_Object_o **)((long)__this_05 + 200);
    if (g_data_057adea2 == '\0') goto label_042ebea7;
label_042eb5b6:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      SStack_260._stringLength = 0x42ebe88;
      SStack_260._firstChar = 0;
      SStack_260._6_2_ = 0;
      il2cpp_runtime_helper_02337ed0();
    }
    SStack_260._stringLength = 0x42ebe92;
    SStack_260._firstChar = 0;
    SStack_260._6_2_ = 0;
    UnityEngine_Object__Destroy_4e01c60(pUVar36,(MethodInfo *)0x0);
    pUVar36 = *(UnityEngine_Object_o **)((long)__this_05 + 200);
    if (g_data_057adea2 != '\0') goto label_042eb5b6;
label_042ebea7:
    SStack_260._stringLength = 0x42ebeb3;
    SStack_260._firstChar = 0;
    SStack_260._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    SStack_260._stringLength = 0x42ebecf;
    SStack_260._firstChar = 0;
    SStack_260._6_2_ = 0;
    il2cpp_runtime_helper_02337ed0();
  }
  SStack_260._stringLength = 0x42eb5d2;
  SStack_260._firstChar = 0;
  SStack_260._6_2_ = 0;
  bVar13 = UnityEngine_Object__op_Inequality(pUVar36,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 == '\0') {
    pUVar36 = *(UnityEngine_Object_o **)((long)__this_05 + 0xd0);
    if (g_data_057adea2 == '\0') goto label_042ebf04;
label_042eb5ef:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      SStack_260._stringLength = 0x42ebee5;
      SStack_260._firstChar = 0;
      SStack_260._6_2_ = 0;
      il2cpp_runtime_helper_02337ed0();
    }
    SStack_260._stringLength = 0x42ebeef;
    SStack_260._firstChar = 0;
    SStack_260._6_2_ = 0;
    UnityEngine_Object__Destroy_4e01c60(pUVar36,(MethodInfo *)0x0);
    pUVar36 = *(UnityEngine_Object_o **)((long)__this_05 + 0xd0);
    if (g_data_057adea2 != '\0') goto label_042eb5ef;
label_042ebf04:
    SStack_260._stringLength = 0x42ebf10;
    SStack_260._firstChar = 0;
    SStack_260._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    SStack_260._stringLength = 0x42ebf2c;
    SStack_260._firstChar = 0;
    SStack_260._6_2_ = 0;
    il2cpp_runtime_helper_02337ed0();
  }
  SStack_260._stringLength = 0x42eb60b;
  SStack_260._firstChar = 0;
  SStack_260._6_2_ = 0;
  bVar13 = UnityEngine_Object__op_Inequality(pUVar36,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 == '\0') {
    pUVar36 = *(UnityEngine_Object_o **)((long)__this_05 + 0xd8);
    if (g_data_057adea2 == '\0') goto label_042ebf61;
label_042eb628:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      SStack_260._stringLength = 0x42ebf42;
      SStack_260._firstChar = 0;
      SStack_260._6_2_ = 0;
      il2cpp_runtime_helper_02337ed0();
    }
    SStack_260._stringLength = 0x42ebf4c;
    SStack_260._firstChar = 0;
    SStack_260._6_2_ = 0;
    UnityEngine_Object__Destroy_4e01c60(pUVar36,(MethodInfo *)0x0);
    pUVar36 = *(UnityEngine_Object_o **)((long)__this_05 + 0xd8);
    if (g_data_057adea2 != '\0') goto label_042eb628;
label_042ebf61:
    SStack_260._stringLength = 0x42ebf6d;
    SStack_260._firstChar = 0;
    SStack_260._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    SStack_260._stringLength = 0x42ebf89;
    SStack_260._firstChar = 0;
    SStack_260._6_2_ = 0;
    il2cpp_runtime_helper_02337ed0();
  }
  SStack_260._stringLength = 0x42eb644;
  SStack_260._firstChar = 0;
  SStack_260._6_2_ = 0;
  bVar13 = UnityEngine_Object__op_Inequality(pUVar36,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 == '\0') {
    pUVar36 = *(UnityEngine_Object_o **)((long)__this_05 + 0xe0);
    if (g_data_057adea2 == '\0') goto label_042ebfbe;
label_042eb661:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      SStack_260._stringLength = 0x42ebf9f;
      SStack_260._firstChar = 0;
      SStack_260._6_2_ = 0;
      il2cpp_runtime_helper_02337ed0();
    }
    SStack_260._stringLength = 0x42ebfa9;
    SStack_260._firstChar = 0;
    SStack_260._6_2_ = 0;
    UnityEngine_Object__Destroy_4e01c60(pUVar36,(MethodInfo *)0x0);
    pUVar36 = *(UnityEngine_Object_o **)((long)__this_05 + 0xe0);
    if (g_data_057adea2 != '\0') goto label_042eb661;
label_042ebfbe:
    SStack_260._stringLength = 0x42ebfca;
    SStack_260._firstChar = 0;
    SStack_260._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    SStack_260._stringLength = 0x42ebfe6;
    SStack_260._firstChar = 0;
    SStack_260._6_2_ = 0;
    il2cpp_runtime_helper_02337ed0();
  }
  SStack_260._stringLength = 0x42eb67d;
  SStack_260._firstChar = 0;
  SStack_260._6_2_ = 0;
  bVar13 = UnityEngine_Object__op_Inequality(pUVar36,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 == '\0') {
    pUVar36 = *(UnityEngine_Object_o **)((long)__this_05 + 0xf8);
    if (g_data_057adea2 == '\0') goto label_042ec01b;
label_042eb69a:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      SStack_260._stringLength = 0x42ebffc;
      SStack_260._firstChar = 0;
      SStack_260._6_2_ = 0;
      il2cpp_runtime_helper_02337ed0();
    }
    SStack_260._stringLength = 0x42ec006;
    SStack_260._firstChar = 0;
    SStack_260._6_2_ = 0;
    UnityEngine_Object__Destroy_4e01c60(pUVar36,(MethodInfo *)0x0);
    pUVar36 = *(UnityEngine_Object_o **)((long)__this_05 + 0xf8);
    if (g_data_057adea2 != '\0') goto label_042eb69a;
label_042ec01b:
    SStack_260._stringLength = 0x42ec027;
    SStack_260._firstChar = 0;
    SStack_260._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    SStack_260._stringLength = 0x42ec043;
    SStack_260._firstChar = 0;
    SStack_260._6_2_ = 0;
    il2cpp_runtime_helper_02337ed0();
  }
  SStack_260._stringLength = 0x42eb6b6;
  SStack_260._firstChar = 0;
  SStack_260._6_2_ = 0;
  bVar13 = UnityEngine_Object__op_Inequality(pUVar36,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 == '\0') {
    SVar31 = *(System_String_Fields *)((long)__this_05 + 0x100);
    if (g_data_057adea2 == '\0') goto label_042ec078;
label_042eb6d3:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      SStack_260._stringLength = 0x42ec059;
      SStack_260._firstChar = 0;
      SStack_260._6_2_ = 0;
      il2cpp_runtime_helper_02337ed0();
    }
    SStack_260._stringLength = 0x42ec063;
    SStack_260._firstChar = 0;
    SStack_260._6_2_ = 0;
    UnityEngine_Object__Destroy_4e01c60(pUVar36,(MethodInfo *)0x0);
    SVar31 = *(System_String_Fields *)((long)__this_05 + 0x100);
    if (g_data_057adea2 != '\0') goto label_042eb6d3;
label_042ec078:
    SStack_260._stringLength = 0x42ec084;
    SStack_260._firstChar = 0;
    SStack_260._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    SStack_260._stringLength = 0x42ec0a0;
    SStack_260._firstChar = 0;
    SStack_260._6_2_ = 0;
    il2cpp_runtime_helper_02337ed0();
  }
  method_00._stringLength = 0;
  method_00._firstChar = 0;
  method_00._6_2_ = 0;
  SStack_260._stringLength = 0x42eb6ef;
  SStack_260._firstChar = 0;
  SStack_260._6_2_ = 0;
  bVar13 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)SVar31,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 != '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      SStack_260._stringLength = 0x42eb704;
      SStack_260._firstChar = 0;
      SStack_260._6_2_ = 0;
      il2cpp_runtime_helper_02337ed0();
    }
    method_00._stringLength = 0;
    method_00._firstChar = 0;
    method_00._6_2_ = 0;
    SStack_260._stringLength = 0x42eb70e;
    SStack_260._firstChar = 0;
    SStack_260._6_2_ = 0;
    UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)SVar31,(MethodInfo *)0x0);
  }
  if (*(char *)((long)__this_05 + 0x1e8) == '\0') {
    SVar31 = *(System_String_Fields *)((long)__this_05 + 0x108);
    if (g_data_057adea2 == '\0') {
      SStack_260._stringLength = 0x42eb736;
      SStack_260._firstChar = 0;
      SStack_260._6_2_ = 0;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057adea2 = '\x01';
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      SStack_260._stringLength = 0x42eb74e;
      SStack_260._firstChar = 0;
      SStack_260._6_2_ = 0;
      il2cpp_runtime_helper_02337ed0();
    }
    method_00._stringLength = 0;
    method_00._firstChar = 0;
    method_00._6_2_ = 0;
    SStack_260._stringLength = 0x42eb75a;
    SStack_260._firstChar = 0;
    SStack_260._6_2_ = 0;
    bVar13 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)SVar31,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar13 != '\0') {
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        SStack_260._stringLength = 0x42eb76f;
        SStack_260._firstChar = 0;
        SStack_260._6_2_ = 0;
        il2cpp_runtime_helper_02337ed0();
      }
      method_00._stringLength = 0;
      method_00._firstChar = 0;
      method_00._6_2_ = 0;
      SStack_260._stringLength = 0x42eb779;
      SStack_260._firstChar = 0;
      SStack_260._6_2_ = 0;
      UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)SVar31,(MethodInfo *)0x0);
    }
  }
  SStack_260._stringLength = 0x42eb781;
  SStack_260._firstChar = 0;
  SStack_260._6_2_ = 0;
  Characters_HumanSetup__CreateCape((Characters_HumanSetup_o *)__this_05,(MethodInfo *)method_00);
  __this_07._stringLength = 0;
  __this_07._firstChar = 0;
  __this_07._6_2_ = 0;
  pCVar29 = (Characters_HumanSetup_o *)&TypeInfo_Object;
  if (*(Characters_HumanSetupMeshes_o **)((long)__this_05 + 0x168) != (Characters_HumanSetupMeshes_o *)0x0) {
    SStack_260._stringLength = 0x42eb79c;
    SStack_260._firstChar = 0;
    SStack_260._6_2_ = 0;
    pCVar29 = (Characters_HumanSetup_o *)
              Characters_HumanSetupMeshes__GetChestMesh
                        (*(Characters_HumanSetupMeshes_o **)((long)__this_05 + 0x168),1,method_01);
    method_00 = **(System_String_Fields **)(g_data_057b9c00 + 0xb8);
    SStack_260._stringLength = 0x42eb7c1;
    SStack_260._firstChar = 0;
    SStack_260._6_2_ = 0;
    bVar13 = System_String__op_Inequality
                       ((System_String_o *)pCVar29,(System_String_o *)method_00,(MethodInfo *)0x0);
    pMVar41 = extraout_RDX_00;
    SVar27 = (System_String_Fields)&g_data_057b9b70;
    if ((char)bVar13 == '\0') {
label_042eb8c9:
      __this_07._stringLength = 0;
      __this_07._firstChar = 0;
      __this_07._6_2_ = 0;
      if (*(Characters_HumanSetupMeshes_o **)((long)__this_05 + 0x168) != (Characters_HumanSetupMeshes_o *)0x0
         ) {
        SStack_260._stringLength = 0x42eb8e4;
        SStack_260._firstChar = 0;
        SStack_260._6_2_ = 0;
        SVar31 = (System_String_Fields)
                 Characters_HumanSetupMeshes__GetChestMesh
                           (*(Characters_HumanSetupMeshes_o **)((long)__this_05 + 0x168),2,pMVar41);
        method_00 = **(System_String_Fields **)(g_data_057b9c00 + 0xb8);
        SStack_260._stringLength = 0x42eb902;
        SStack_260._firstChar = 0;
        SStack_260._6_2_ = 0;
        bVar13 = System_String__op_Inequality
                           ((System_String_o *)SVar31,(System_String_o *)method_00,(MethodInfo *)0x0);
        pMVar41 = extraout_RDX_04;
        if ((char)bVar13 == '\0') {
label_042eb9c7:
          __this_07._stringLength = 0;
          __this_07._firstChar = 0;
          __this_07._6_2_ = 0;
          if (*(Characters_HumanSetupMeshes_o **)((long)__this_05 + 0x168) !=
              (Characters_HumanSetupMeshes_o *)0x0) {
            SStack_260._stringLength = 0x42eb9e2;
            SStack_260._firstChar = 0;
            SStack_260._6_2_ = 0;
            SVar31 = (System_String_Fields)
                     Characters_HumanSetupMeshes__GetChestMesh
                               (*(Characters_HumanSetupMeshes_o **)((long)__this_05 + 0x168),3,pMVar41);
            method_00 = **(System_String_Fields **)(g_data_057b9c00 + 0xb8);
            SStack_260._stringLength = 0x42eba00;
            SStack_260._firstChar = 0;
            SStack_260._6_2_ = 0;
            bVar13 = System_String__op_Inequality
                               ((System_String_o *)SVar31,(System_String_o *)method_00,(MethodInfo *)0x0);
            if (((char)bVar13 != '\0') && (*(char *)((long)__this_05 + 0x1e8) == '\0')) {
              pCVar29 = *(Characters_HumanSetup_o **)((long)__this_05 + 0x160);
              if (*(int *)(TypeInfo_ClothFactory + 0xe4) == 0) {
                SStack_260._stringLength = 0x42eba2f;
                SStack_260._firstChar = 0;
                SStack_260._6_2_ = 0;
                il2cpp_runtime_helper_02337ed0();
              }
              SStack_260._stringLength = 0x42eba3f;
              SStack_260._firstChar = 0;
              SStack_260._6_2_ = 0;
              method_00 = (System_String_Fields)
                          ClothFactory__GetCape
                                    ((UnityEngine_GameObject_o *)pCVar29,(System_String_o *)SVar31,
                                     (UnityEngine_Material_o *)SVar35,(MethodInfo *)0x0);
              *(System_String_Fields *)((long)__this_05 + 0x108) = method_00;
              SStack_260._stringLength = 0x42eba57;
              SStack_260._firstChar = 0;
              SStack_260._6_2_ = 0;
              il2cpp_runtime_helper_022b4080((long)__this_05 + 0x108);
            }
            __this_07._stringLength = 0;
            __this_07._firstChar = 0;
            __this_07._6_2_ = 0;
            if (*(Characters_HumanSetupMeshes_o **)((long)__this_05 + 0x168) !=
                (Characters_HumanSetupMeshes_o *)0x0) {
              SVar31 = (System_String_Fields)((long)__this_05 + 0x158);
              SStack_260._stringLength = 0x42eba75;
              SStack_260._firstChar = 0;
              SStack_260._6_2_ = 0;
              pSVar15 = Characters_HumanSetupMeshes__GetBodyMesh
                                  (*(Characters_HumanSetupMeshes_o **)((long)__this_05 + 0x168),
                                   (MethodInfo *)method_00);
              SStack_260._stringLength = 0x42eba80;
              SStack_260._firstChar = 0;
              SStack_260._6_2_ = 0;
              method_00 = (System_String_Fields)
                          Characters_HumanSetup__GenerateCloth
                                    ((Characters_HumanSetup_o *)__this_05,pSVar15,method_03);
              *(System_String_Fields *)((long)__this_05 + 0x158) = method_00;
              SStack_260._stringLength = 0x42eba93;
              SStack_260._firstChar = 0;
              SStack_260._6_2_ = 0;
              il2cpp_runtime_helper_022b4080(SVar31);
              __this_07 = *(System_String_Fields *)((long)__this_05 + 0x158);
              if (__this_07 != (System_String_Fields)0x0) {
                SStack_260._stringLength = 0x42ebab3;
                SStack_260._firstChar = 0;
                SStack_260._6_2_ = 0;
                method_00 = MethodInfo_Renderer_GetComponent_Renderer;
                pUVar33 = (UnityEngine_Renderer_o *)
                          UnityEngine_GameObject__GetComponent_object_
                                    ((UnityEngine_GameObject_o *)__this_07,(MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer)
                ;
                pCVar29 = (Characters_HumanSetup_o *)&MethodInfo_Renderer_GetComponent_Renderer;
                if (pUVar33 != (UnityEngine_Renderer_o *)0x0) {
                  SStack_260._stringLength = 0x42ebac9;
                  SStack_260._firstChar = 0;
                  SStack_260._6_2_ = 0;
                  method_00 = SVar35;
                  UnityEngine_Renderer__set_material
                            (pUVar33,(UnityEngine_Material_o *)SVar35,(MethodInfo *)0x0);
                  __this_07._stringLength = 0;
                  __this_07._firstChar = 0;
                  __this_07._6_2_ = 0;
                  if (*(Characters_HumanSetupTextures_o **)((long)__this_05 + 0x170) !=
                      (Characters_HumanSetupTextures_o *)0x0) {
                    SStack_260._stringLength = 0x42ebadf;
                    SStack_260._firstChar = 0;
                    SStack_260._6_2_ = 0;
                    SVar31 = (System_String_Fields)
                             Characters_HumanSetupTextures__GetBrandTexture
                                       (*(Characters_HumanSetupTextures_o **)((long)__this_05 + 0x170),
                                        (MethodInfo *)method_00);
                    pMVar41 = extraout_RDX_06;
                    if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
                      SStack_260._stringLength = 0x42ebafb;
                      SStack_260._firstChar = 0;
                      SStack_260._6_2_ = 0;
                      il2cpp_runtime_helper_02337ed0();
                      pMVar41 = extraout_RDX_07;
                    }
                    method_00._stringLength = 0;
                    method_00._firstChar = 0;
                    method_00._6_2_ = 0;
                    SStack_260._stringLength = 0x42ebb05;
                    SStack_260._firstChar = 0;
                    SStack_260._6_2_ = 0;
                    SVar32 = (System_String_Fields)
                             Characters_HumanSetupMaterials__GetPartMaterial
                                       ((System_String_o *)SVar31,0,pMVar41);
                    __this_07 = *(System_String_Fields *)((long)__this_05 + 0x1d8);
                    pSVar44 = (System_String_Fields *)&TypeInfo_HumanSetupMaterials;
                    if (__this_07 != (System_String_Fields)0x0) {
                      SStack_260._stringLength = 0x42ebb33;
                      SStack_260._firstChar = 0;
                      SStack_260._6_2_ = 0;
                      method_00 = "Type";
                      SVar34 = (System_String_Fields)
                               (**(code **)(*(long *)__this_07 + 0x1a8))
                                         (__this_07,"Type",*(undefined8 *)(*(long *)__this_07 + 0x1b0));
                      SVar27 = SVar32;
                      if (SVar34 != (System_String_Fields)0x0) {
                        method_00 = *(System_String_Fields *)(*(long *)SVar34 + 0x1d0);
                        SStack_260._stringLength = 0x42ebb4f;
                        SStack_260._firstChar = 0;
                        SStack_260._6_2_ = 0;
                        __this_00 = (System_String_Fields)(**(code **)(*(long *)SVar34 + 0x1c8))();
                        __this_07 = SVar34;
                        if (__this_00 != (System_String_Fields)0x0) {
                          SStack_260._stringLength = 0x42ebb6c;
                          SStack_260._firstChar = 0;
                          SStack_260._6_2_ = 0;
                          method_00 = "Uniform";
                          bVar13 = System_String__StartsWith
                                             ((System_String_o *)__this_00,(System_String_o *)"Uniform",
                                              (MethodInfo *)0x0);
                          if ((char)bVar13 == '\0') {
label_042ebd34:
                            SVar31 = *(System_String_Fields *)((long)__this_05 + 0x170);
                            __this_07 = __this_00;
                            if (SVar31 != (System_String_Fields)0x0) {
                              if (g_data_057adec4 == '\0') {
                                SStack_260._stringLength = 0x42ebd5a;
                                SStack_260._firstChar = 0;
                                SStack_260._6_2_ = 0;
                                il2cpp_runtime_helper_023445d0(&"Skin/skin_blades");
                                SStack_260._stringLength = 0x42ebd66;
                                SStack_260._firstChar = 0;
                                SStack_260._6_2_ = 0;
                                il2cpp_runtime_helper_023445d0(&"Skin/skin_TS");
                                __this_07 = (System_String_Fields)&"Skin/skin_AHSS";
                                SStack_260._stringLength = 0x42ebd72;
                                SStack_260._firstChar = 0;
                                SStack_260._6_2_ = 0;
                                il2cpp_runtime_helper_023445d0();
                                g_data_057adec4 = '\x01';
                              }
                              if (*(System_String_Fields *)((long)SVar31 + 0x10) != (System_String_Fields)0x0)
                              {
                                iVar3 = *(int *)((long)*(System_String_Fields *)((long)SVar31 + 0x10) + 0x1d0)
                                ;
                                if (iVar3 == 1) {
label_042ec0ae:
                                  pSVar43 = (System_String_Fields *)&"Skin/skin_AHSS";
                                  lVar40 = *(long *)((long)__this_05 + 0x1c8);
                                }
                                else if (iVar3 == 2) {
                                  pSVar43 = (System_String_Fields *)&"Skin/skin_TS";
                                  lVar40 = *(long *)((long)__this_05 + 0x1c8);
                                }
                                else {
                                  if (iVar3 == 3) goto label_042ec0ae;
                                  pSVar43 = (System_String_Fields *)&"Skin/skin_blades";
                                  lVar40 = *(long *)((long)__this_05 + 0x1c8);
                                }
                                if ((lVar40 != 0) && (*(long *)(lVar40 + 0x98) != 0)) {
                                  pUVar22 = *(Utility_Color255_o **)(*(long *)(lVar40 + 0x98) + 0x18);
                                  __this_07._stringLength = 0;
                                  __this_07._firstChar = 0;
                                  __this_07._6_2_ = 0;
                                  if (pUVar22 != (Utility_Color255_o *)0x0) {
                                    SVar31 = *pSVar43;
                                    method_00._stringLength = 0;
                                    method_00._firstChar = 0;
                                    method_00._6_2_ = 0;
                                    SStack_260._stringLength = 0x42ec0ed;
                                    SStack_260._firstChar = 0;
                                    SStack_260._6_2_ = 0;
                                    UVar52 = Utility_Color255__ToColor(pUVar22,(MethodInfo *)0x0);
                                    fVar48 = UVar52.fields.r;
                                    fVar49 = UVar52.fields.g;
                                    fVar50 = UVar52.fields.b;
                                    fVar51 = UVar52.fields.a;
                                    if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
                                      auStack_248._8_4_ = extraout_XMM0_Dc_00;
                                      auStack_248._0_8_ = UVar52.fields._0_8_;
                                      auStack_248._12_4_ = extraout_XMM0_Dd_00;
                                      uStack_250 = in_XMM1_Dc;
                                      auStack_258 = UVar52.fields._8_8_;
                                      uStack_24c = in_XMM1_Dd;
                                      SStack_260._stringLength = 0x42ec108;
                                      SStack_260._firstChar = 0;
                                      SStack_260._6_2_ = 0;
                                      il2cpp_runtime_helper_02337ed0();
                                      fVar48 = (float)auStack_248._0_4_;
                                      fVar49 = (float)auStack_248._4_4_;
                                      fVar50 = (float)auStack_258._0_4_;
                                      fVar51 = (float)auStack_258._4_4_;
                                      in_XMM1_Dc = uStack_250;
                                      in_XMM1_Dd = uStack_24c;
                                    }
                                    SStack_260._stringLength = 0x42ec119;
                                    SStack_260._firstChar = 0;
                                    SStack_260._6_2_ = 0;
                                    color_00.fields.g = fVar49;
                                    color_00.fields.r = fVar48;
                                    color_00.fields.a = fVar51;
                                    color_00.fields.b = fVar50;
                                    SVar32 = (System_String_Fields)
                                             Characters_HumanSetupMaterials__GetSkinMaterial
                                                       ((System_String_o *)SVar31,color_00,
                                                        (MethodInfo *)method_00);
                                    __this_07 = *(System_String_Fields *)((long)__this_05 + 0x148);
                                    if (__this_07 != (System_String_Fields)0x0) {
                                      SStack_260._stringLength = 0x42ec131;
                                      SStack_260._firstChar = 0;
                                      SStack_260._6_2_ = 0;
                                      method_00 = MethodInfo_Renderer_GetComponent_Renderer;
                                      pUVar33 = (UnityEngine_Renderer_o *)
                                                UnityEngine_GameObject__GetComponent_object_
                                                          ((UnityEngine_GameObject_o *)__this_07,
                                                           (MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer);
                                      SVar31 = SVar32;
                                      if (pUVar33 != (UnityEngine_Renderer_o *)0x0) {
                                        SStack_260._stringLength = 0x42ec143;
                                        SStack_260._firstChar = 0;
                                        SStack_260._6_2_ = 0;
                                        method_00 = SVar32;
                                        UnityEngine_Renderer__set_material
                                                  (pUVar33,(UnityEngine_Material_o *)SVar32,(MethodInfo *)0x0)
                                        ;
                                        __this_07 = *(System_String_Fields *)((long)__this_05 + 0xf0);
                                        if (__this_07 != (System_String_Fields)0x0) {
                                          SStack_260._stringLength = 0x42ec158;
                                          SStack_260._firstChar = 0;
                                          SStack_260._6_2_ = 0;
                                          method_00 = MethodInfo_Renderer_GetComponent_Renderer;
                                          pUVar33 = (UnityEngine_Renderer_o *)
                                                    UnityEngine_GameObject__GetComponent_object_
                                                              ((UnityEngine_GameObject_o *)__this_07,
                                                               (MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer);
                                          if (pUVar33 != (UnityEngine_Renderer_o *)0x0) {
                                            UnityEngine_Renderer__set_material
                                                      (pUVar33,(UnityEngine_Material_o *)SVar32,
                                                       (MethodInfo *)0x0);
                                            return extraout_RAX_03;
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
                            __this_07._stringLength = 0;
                            __this_07._firstChar = 0;
                            __this_07._6_2_ = 0;
                            if (*(Characters_HumanSetupMeshes_o **)((long)__this_05 + 0x168) !=
                                (Characters_HumanSetupMeshes_o *)0x0) {
                              SVar31 = (System_String_Fields)((long)__this_05 + 200);
                              SStack_260._stringLength = 0x42ebb97;
                              SStack_260._firstChar = 0;
                              SStack_260._6_2_ = 0;
                              pSVar15 = Characters_HumanSetupMeshes__GetBrandMesh
                                                  (*(Characters_HumanSetupMeshes_o **)
                                                    ((long)__this_05 + 0x168),1,method_04);
                              SStack_260._stringLength = 0x42ebba2;
                              SStack_260._firstChar = 0;
                              SStack_260._6_2_ = 0;
                              method_00 = (System_String_Fields)
                                          Characters_HumanSetup__GenerateCloth
                                                    ((Characters_HumanSetup_o *)__this_05,pSVar15,method_05);
                              *(System_String_Fields *)((long)__this_05 + 200) = method_00;
                              SStack_260._stringLength = 0x42ebbb5;
                              SStack_260._firstChar = 0;
                              SStack_260._6_2_ = 0;
                              il2cpp_runtime_helper_022b4080(SVar31);
                              __this_07 = *(System_String_Fields *)((long)__this_05 + 200);
                              if (__this_07 != (System_String_Fields)0x0) {
                                SStack_260._stringLength = 0x42ebbce;
                                SStack_260._firstChar = 0;
                                SStack_260._6_2_ = 0;
                                method_00 = MethodInfo_Renderer_GetComponent_Renderer;
                                pUVar33 = (UnityEngine_Renderer_o *)
                                          UnityEngine_GameObject__GetComponent_object_
                                                    ((UnityEngine_GameObject_o *)__this_07,
                                                     (MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer);
                                if (pUVar33 != (UnityEngine_Renderer_o *)0x0) {
                                  SStack_260._stringLength = 0x42ebbe4;
                                  SStack_260._firstChar = 0;
                                  SStack_260._6_2_ = 0;
                                  method_00 = SVar32;
                                  UnityEngine_Renderer__set_material
                                            (pUVar33,(UnityEngine_Material_o *)SVar32,(MethodInfo *)0x0);
                                  __this_07._stringLength = 0;
                                  __this_07._firstChar = 0;
                                  __this_07._6_2_ = 0;
                                  if (*(Characters_HumanSetupMeshes_o **)((long)__this_05 + 0x168) !=
                                      (Characters_HumanSetupMeshes_o *)0x0) {
                                    SVar31 = (System_String_Fields)((long)__this_05 + 0xd0);
                                    SStack_260._stringLength = 0x42ebc07;
                                    SStack_260._firstChar = 0;
                                    SStack_260._6_2_ = 0;
                                    pSVar15 = Characters_HumanSetupMeshes__GetBrandMesh
                                                        (*(Characters_HumanSetupMeshes_o **)
                                                          ((long)__this_05 + 0x168),2,method_06);
                                    SStack_260._stringLength = 0x42ebc12;
                                    SStack_260._firstChar = 0;
                                    SStack_260._6_2_ = 0;
                                    method_00 = (System_String_Fields)
                                                Characters_HumanSetup__GenerateCloth
                                                          ((Characters_HumanSetup_o *)__this_05,pSVar15,
                                                           method_07);
                                    *(System_String_Fields *)((long)__this_05 + 0xd0) = method_00;
                                    SStack_260._stringLength = 0x42ebc25;
                                    SStack_260._firstChar = 0;
                                    SStack_260._6_2_ = 0;
                                    il2cpp_runtime_helper_022b4080(SVar31);
                                    __this_07 = *(System_String_Fields *)((long)__this_05 + 0xd0);
                                    if (__this_07 != (System_String_Fields)0x0) {
                                      SStack_260._stringLength = 0x42ebc3e;
                                      SStack_260._firstChar = 0;
                                      SStack_260._6_2_ = 0;
                                      method_00 = MethodInfo_Renderer_GetComponent_Renderer;
                                      pUVar33 = (UnityEngine_Renderer_o *)
                                                UnityEngine_GameObject__GetComponent_object_
                                                          ((UnityEngine_GameObject_o *)__this_07,
                                                           (MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer);
                                      if (pUVar33 != (UnityEngine_Renderer_o *)0x0) {
                                        SStack_260._stringLength = 0x42ebc54;
                                        SStack_260._firstChar = 0;
                                        SStack_260._6_2_ = 0;
                                        method_00 = SVar32;
                                        UnityEngine_Renderer__set_material
                                                  (pUVar33,(UnityEngine_Material_o *)SVar32,(MethodInfo *)0x0)
                                        ;
                                        __this_07._stringLength = 0;
                                        __this_07._firstChar = 0;
                                        __this_07._6_2_ = 0;
                                        if (*(Characters_HumanSetupMeshes_o **)((long)__this_05 + 0x168) !=
                                            (Characters_HumanSetupMeshes_o *)0x0) {
                                          SVar31 = (System_String_Fields)((long)__this_05 + 0xd8);
                                          SStack_260._stringLength = 0x42ebc77;
                                          SStack_260._firstChar = 0;
                                          SStack_260._6_2_ = 0;
                                          pSVar15 = Characters_HumanSetupMeshes__GetBrandMesh
                                                              (*(Characters_HumanSetupMeshes_o **)
                                                                ((long)__this_05 + 0x168),3,method_08);
                                          SStack_260._stringLength = 0x42ebc82;
                                          SStack_260._firstChar = 0;
                                          SStack_260._6_2_ = 0;
                                          method_00 = (System_String_Fields)
                                                      Characters_HumanSetup__GenerateCloth
                                                                ((Characters_HumanSetup_o *)__this_05,pSVar15,
                                                                 method_09);
                                          *(System_String_Fields *)((long)__this_05 + 0xd8) = method_00;
                                          SStack_260._stringLength = 0x42ebc95;
                                          SStack_260._firstChar = 0;
                                          SStack_260._6_2_ = 0;
                                          il2cpp_runtime_helper_022b4080(SVar31);
                                          __this_07 = *(System_String_Fields *)((long)__this_05 + 0xd8);
                                          if (__this_07 != (System_String_Fields)0x0) {
                                            SStack_260._stringLength = 0x42ebcae;
                                            SStack_260._firstChar = 0;
                                            SStack_260._6_2_ = 0;
                                            method_00 = MethodInfo_Renderer_GetComponent_Renderer;
                                            pUVar33 = (UnityEngine_Renderer_o *)
                                                      UnityEngine_GameObject__GetComponent_object_
                                                                ((UnityEngine_GameObject_o *)__this_07,
                                                                 (MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer);
                                            if (pUVar33 != (UnityEngine_Renderer_o *)0x0) {
                                              SStack_260._stringLength = 0x42ebcc4;
                                              SStack_260._firstChar = 0;
                                              SStack_260._6_2_ = 0;
                                              method_00 = SVar32;
                                              UnityEngine_Renderer__set_material
                                                        (pUVar33,(UnityEngine_Material_o *)SVar32,
                                                         (MethodInfo *)0x0);
                                              __this_07._stringLength = 0;
                                              __this_07._firstChar = 0;
                                              __this_07._6_2_ = 0;
                                              if (*(Characters_HumanSetupMeshes_o **)((long)__this_05 + 0x168)
                                                  != (Characters_HumanSetupMeshes_o *)0x0) {
                                                SVar31 = (System_String_Fields)((long)__this_05 + 0xe0);
                                                SStack_260._stringLength = 0x42ebce7;
                                                SStack_260._firstChar = 0;
                                                SStack_260._6_2_ = 0;
                                                pSVar15 = Characters_HumanSetupMeshes__GetBrandMesh
                                                                    (*(Characters_HumanSetupMeshes_o **)
                                                                      ((long)__this_05 + 0x168),4,method_10);
                                                SStack_260._stringLength = 0x42ebcf2;
                                                SStack_260._firstChar = 0;
                                                SStack_260._6_2_ = 0;
                                                method_00 = (System_String_Fields)
                                                            Characters_HumanSetup__GenerateCloth
                                                                      ((Characters_HumanSetup_o *)__this_05,
                                                                       pSVar15,method_11);
                                                *(System_String_Fields *)((long)__this_05 + 0xe0) = method_00;
                                                SStack_260._stringLength = 0x42ebd05;
                                                SStack_260._firstChar = 0;
                                                SStack_260._6_2_ = 0;
                                                il2cpp_runtime_helper_022b4080(SVar31);
                                                __this_07 = *(System_String_Fields *)((long)__this_05 + 0xe0);
                                                if (__this_07 != (System_String_Fields)0x0) {
                                                  SStack_260._stringLength = 0x42ebd1e;
                                                  SStack_260._firstChar = 0;
                                                  SStack_260._6_2_ = 0;
                                                  method_00 = MethodInfo_Renderer_GetComponent_Renderer;
                                                  __this_00 = (System_String_Fields)
                                                              UnityEngine_GameObject__GetComponent_object_
                                                                        ((UnityEngine_GameObject_o *)__this_07
                                                                         ,(MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer);
                                                  if (__this_00 != (System_String_Fields)0x0) {
                                                    SStack_260._stringLength = 0x42ebd34;
                                                    SStack_260._firstChar = 0;
                                                    SStack_260._6_2_ = 0;
                                                    method_00 = SVar32;
                                                    UnityEngine_Renderer__set_material
                                                              ((UnityEngine_Renderer_o *)__this_00,
                                                               (UnityEngine_Material_o *)SVar32,
                                                               (MethodInfo *)0x0);
                                                    goto label_042ebd34;
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
          }
        }
        else {
          if (*(int *)((long)TypeInfo_ResourcePaths + 0xe4) == 0) {
            SStack_260._stringLength = 0x42eb922;
            SStack_260._firstChar = 0;
            SStack_260._6_2_ = 0;
            il2cpp_runtime_helper_02337ed0();
          }
          pCVar29 = (Characters_HumanSetup_o *)((long)__this_05 + 0x100);
          pSVar44 = *(System_String_Fields **)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
          if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
            SStack_260._stringLength = 0x42eb950;
            SStack_260._firstChar = 0;
            SStack_260._6_2_ = 0;
            il2cpp_runtime_helper_02337ed0();
          }
          SStack_260._stringLength = 0x42eb96a;
          SStack_260._firstChar = 0;
          SStack_260._6_2_ = 0;
          pIVar26 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                              ((System_String_o *)pSVar44,(System_String_o *)SVar31,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
          *(Il2CppObject **)((long)__this_05 + 0x100) = pIVar26;
          SStack_260._stringLength = 0x42eb97d;
          SStack_260._firstChar = 0;
          SStack_260._6_2_ = 0;
          pCVar30 = pCVar29;
          il2cpp_runtime_helper_022b4080(pCVar29,pIVar26);
          method_00 = *(System_String_Fields *)((long)__this_05 + 0x100);
          SStack_260._stringLength = 0x42eb991;
          SStack_260._firstChar = 0;
          SStack_260._6_2_ = 0;
          Characters_HumanSetup__AttachToMount
                    (pCVar30,(UnityEngine_GameObject_o *)method_00,
                     *(UnityEngine_GameObject_o **)((long)__this_05 + 0x20),0,in_R8);
          __this_07 = *(System_String_Fields *)((long)__this_05 + 0x100);
          if (__this_07 != (System_String_Fields)0x0) {
            SStack_260._stringLength = 0x42eb9b1;
            SStack_260._firstChar = 0;
            SStack_260._6_2_ = 0;
            method_00 = MethodInfo_Renderer_GetComponent_Renderer;
            pUVar33 = (UnityEngine_Renderer_o *)
                      UnityEngine_GameObject__GetComponent_object_
                                ((UnityEngine_GameObject_o *)__this_07,(MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer);
            if (pUVar33 != (UnityEngine_Renderer_o *)0x0) {
              SStack_260._stringLength = 0x42eb9c7;
              SStack_260._firstChar = 0;
              SStack_260._6_2_ = 0;
              method_00 = SVar35;
              UnityEngine_Renderer__set_material(pUVar33,(UnityEngine_Material_o *)SVar35,(MethodInfo *)0x0);
              pMVar41 = extraout_RDX_05;
              goto label_042eb9c7;
            }
          }
        }
      }
    }
    else {
      if (*(int *)((long)TypeInfo_ResourcePaths + 0xe4) == 0) {
        SStack_260._stringLength = 0x42eb7e1;
        SStack_260._firstChar = 0;
        SStack_260._6_2_ = 0;
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar44 = (System_String_Fields *)((long)__this_05 + 0xf8);
      SVar31 = *(System_String_Fields *)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        SStack_260._stringLength = 0x42eb80f;
        SStack_260._firstChar = 0;
        SStack_260._6_2_ = 0;
        il2cpp_runtime_helper_02337ed0();
      }
      SStack_260._stringLength = 0x42eb829;
      SStack_260._firstChar = 0;
      SStack_260._6_2_ = 0;
      pIVar26 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                          ((System_String_o *)SVar31,(System_String_o *)pCVar29,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
      *(Il2CppObject **)((long)__this_05 + 0xf8) = pIVar26;
      SStack_260._stringLength = 0x42eb83c;
      SStack_260._firstChar = 0;
      SStack_260._6_2_ = 0;
      __this_06 = (System_Object_array *)pSVar44;
      il2cpp_runtime_helper_022b4080(pSVar44,pIVar26);
      method_00 = *(System_String_Fields *)((long)__this_05 + 0xf8);
      SStack_260._stringLength = 0x42eb850;
      SStack_260._firstChar = 0;
      SStack_260._6_2_ = 0;
      Characters_HumanSetup__AttachToMount
                ((Characters_HumanSetup_o *)__this_06,(UnityEngine_GameObject_o *)method_00,
                 *(UnityEngine_GameObject_o **)((long)__this_05 + 0x20),0,in_R8);
      __this_07._stringLength = 0;
      __this_07._firstChar = 0;
      __this_07._6_2_ = 0;
      if (*(UnityEngine_GameObject_o **)((long)__this_05 + 0xf8) != (UnityEngine_GameObject_o *)0x0) {
        SStack_260._stringLength = 0x42eb870;
        SStack_260._firstChar = 0;
        SStack_260._6_2_ = 0;
        method_00 = MethodInfo_Renderer_GetComponent_Renderer;
        pCVar30 = (Characters_HumanSetup_o *)
                  UnityEngine_GameObject__GetComponent_object_
                            (*(UnityEngine_GameObject_o **)((long)__this_05 + 0xf8),
                             (MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer);
        __this_07._stringLength = 0;
        __this_07._firstChar = 0;
        __this_07._6_2_ = 0;
        if (*(Characters_HumanSetupTextures_o **)((long)__this_05 + 0x170) !=
            (Characters_HumanSetupTextures_o *)0x0) {
          SStack_260._stringLength = 0x42eb88e;
          SStack_260._firstChar = 0;
          SStack_260._6_2_ = 0;
          SVar31 = (System_String_Fields)
                   Characters_HumanSetupTextures__GetChestTexture
                             (*(Characters_HumanSetupTextures_o **)((long)__this_05 + 0x170),1,method_02);
          pMVar41 = extraout_RDX_01;
          if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
            SStack_260._stringLength = 0x42eb8a9;
            SStack_260._firstChar = 0;
            SStack_260._6_2_ = 0;
            il2cpp_runtime_helper_02337ed0();
            pMVar41 = extraout_RDX_02;
          }
          method_00._stringLength = 0;
          method_00._firstChar = 0;
          method_00._6_2_ = 0;
          SStack_260._stringLength = 0x42eb8b3;
          SStack_260._firstChar = 0;
          SStack_260._6_2_ = 0;
          __this_07 = SVar31;
          SVar32 = (System_String_Fields)
                   Characters_HumanSetupMaterials__GetPartMaterial((System_String_o *)SVar31,0,pMVar41);
          pCVar29 = pCVar30;
          if (pCVar30 != (Characters_HumanSetup_o *)0x0) {
            SStack_260._stringLength = 0x42eb8c9;
            SStack_260._firstChar = 0;
            SStack_260._6_2_ = 0;
            UnityEngine_Renderer__set_material
                      ((UnityEngine_Renderer_o *)pCVar30,(UnityEngine_Material_o *)SVar32,(MethodInfo *)0x0);
            pMVar41 = extraout_RDX_03;
            method_00 = SVar32;
            goto label_042eb8c9;
          }
        }
      }
    }
  }
  SStack_260._stringLength = 0x42ec195;
  SStack_260._firstChar = 0;
  SStack_260._6_2_ = 0;
  il2cpp_runtime_helper_022b2c90();
  SStack_288 = SVar31;
  SStack_280 = __this_05;
  pSStack_278 = (System_Object_array *)pSVar44;
  SStack_270 = SVar27;
  pCStack_268 = pCVar29;
  SStack_260 = SVar35;
  if (g_data_057ade9c == '\0') {
    SStack_2b8._stringLength = 0x42ec355;
    SStack_2b8._firstChar = 0;
    SStack_2b8._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponent_Renderer);
    SStack_2b8._stringLength = 0x42ec361;
    SStack_2b8._firstChar = 0;
    SStack_2b8._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupMaterials);
    SStack_2b8._stringLength = 0x42ec36d;
    SStack_2b8._firstChar = 0;
    SStack_2b8._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color255_get_Value);
    g_data_057ade9c = '\x01';
    pUVar36 = *(UnityEngine_Object_o **)((long)__this_07 + 0xa8);
    if (g_data_057adea2 != '\0') goto label_042ec1d5;
label_042ec388:
    SStack_2b8._stringLength = 0x42ec394;
    SStack_2b8._firstChar = 0;
    SStack_2b8._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    pUVar36 = *(UnityEngine_Object_o **)((long)__this_07 + 0xa8);
    if (g_data_057adea2 == '\0') goto label_042ec388;
label_042ec1d5:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    SStack_2b8._stringLength = 0x42ec3b8;
    SStack_2b8._firstChar = 0;
    SStack_2b8._6_2_ = 0;
    il2cpp_runtime_helper_02337ed0();
  }
  plVar17 = &TypeInfo_Object;
  SStack_2b8._stringLength = 0x42ec1f9;
  SStack_2b8._firstChar = 0;
  SStack_2b8._6_2_ = 0;
  bVar13 = UnityEngine_Object__op_Inequality(pUVar36,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 == '\0') {
    pUVar36 = *(UnityEngine_Object_o **)((long)__this_07 + 0x138);
    if (g_data_057adea2 == '\0') goto label_042ec3ed;
label_042ec215:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      SStack_2b8._stringLength = 0x42ec3cf;
      SStack_2b8._firstChar = 0;
      SStack_2b8._6_2_ = 0;
      il2cpp_runtime_helper_02337ed0();
    }
    SStack_2b8._stringLength = 0x42ec3d9;
    SStack_2b8._firstChar = 0;
    SStack_2b8._6_2_ = 0;
    UnityEngine_Object__Destroy_4e01c60(pUVar36,(MethodInfo *)0x0);
    pUVar36 = *(UnityEngine_Object_o **)((long)__this_07 + 0x138);
    if (g_data_057adea2 != '\0') goto label_042ec215;
label_042ec3ed:
    SStack_2b8._stringLength = 0x42ec3f9;
    SStack_2b8._firstChar = 0;
    SStack_2b8._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    SStack_2b8._stringLength = 0x42ec416;
    SStack_2b8._firstChar = 0;
    SStack_2b8._6_2_ = 0;
    il2cpp_runtime_helper_02337ed0();
  }
  SStack_2b8._stringLength = 0x42ec232;
  SStack_2b8._firstChar = 0;
  SStack_2b8._6_2_ = 0;
  bVar13 = UnityEngine_Object__op_Inequality(pUVar36,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 == '\0') {
    pUVar36 = *(UnityEngine_Object_o **)((long)__this_07 + 0xb0);
    if (g_data_057adea2 == '\0') goto label_042ec44b;
label_042ec24e:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      SStack_2b8._stringLength = 0x42ec42d;
      SStack_2b8._firstChar = 0;
      SStack_2b8._6_2_ = 0;
      il2cpp_runtime_helper_02337ed0();
    }
    SStack_2b8._stringLength = 0x42ec437;
    SStack_2b8._firstChar = 0;
    SStack_2b8._6_2_ = 0;
    UnityEngine_Object__Destroy_4e01c60(pUVar36,(MethodInfo *)0x0);
    pUVar36 = *(UnityEngine_Object_o **)((long)__this_07 + 0xb0);
    if (g_data_057adea2 != '\0') goto label_042ec24e;
label_042ec44b:
    SStack_2b8._stringLength = 0x42ec457;
    SStack_2b8._firstChar = 0;
    SStack_2b8._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    SStack_2b8._stringLength = 0x42ec474;
    SStack_2b8._firstChar = 0;
    SStack_2b8._6_2_ = 0;
    il2cpp_runtime_helper_02337ed0();
  }
  SStack_2b8._stringLength = 0x42ec26b;
  SStack_2b8._firstChar = 0;
  SStack_2b8._6_2_ = 0;
  bVar13 = UnityEngine_Object__op_Inequality(pUVar36,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 == '\0') {
    SVar27 = *(System_String_Fields *)((long)__this_07 + 0x140);
    if (g_data_057adea2 == '\0') goto label_042ec4a9;
label_042ec287:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      SStack_2b8._stringLength = 0x42ec48b;
      SStack_2b8._firstChar = 0;
      SStack_2b8._6_2_ = 0;
      il2cpp_runtime_helper_02337ed0();
    }
    SStack_2b8._stringLength = 0x42ec495;
    SStack_2b8._firstChar = 0;
    SStack_2b8._6_2_ = 0;
    UnityEngine_Object__Destroy_4e01c60(pUVar36,(MethodInfo *)0x0);
    SVar27 = *(System_String_Fields *)((long)__this_07 + 0x140);
    if (g_data_057adea2 != '\0') goto label_042ec287;
label_042ec4a9:
    SStack_2b8._stringLength = 0x42ec4b5;
    SStack_2b8._firstChar = 0;
    SStack_2b8._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    SStack_2b8._stringLength = 0x42ec4d2;
    SStack_2b8._firstChar = 0;
    SStack_2b8._6_2_ = 0;
    il2cpp_runtime_helper_02337ed0();
  }
  SVar34._stringLength = 0;
  SVar34._firstChar = 0;
  SVar34._6_2_ = 0;
  SStack_2b8._stringLength = 0x42ec2a4;
  SStack_2b8._firstChar = 0;
  SStack_2b8._6_2_ = 0;
  SVar31 = SVar27;
  bVar13 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)SVar27,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 != '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      SStack_2b8._stringLength = 0x42ec2ba;
      SStack_2b8._firstChar = 0;
      SStack_2b8._6_2_ = 0;
      il2cpp_runtime_helper_02337ed0();
    }
    SVar34._stringLength = 0;
    SVar34._firstChar = 0;
    SVar34._6_2_ = 0;
    SStack_2b8._stringLength = 0x42ec2c4;
    SStack_2b8._firstChar = 0;
    SStack_2b8._6_2_ = 0;
    SVar31 = SVar27;
    UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)SVar27,(MethodInfo *)0x0);
  }
  lVar40 = *(long *)((long)__this_07 + 0x170);
  if (lVar40 != 0) {
    if (g_data_057adec4 == '\0') {
      SStack_2b8._stringLength = 0x42ec2e9;
      SStack_2b8._firstChar = 0;
      SStack_2b8._6_2_ = 0;
      il2cpp_runtime_helper_023445d0(&"Skin/skin_blades");
      SStack_2b8._stringLength = 0x42ec2f5;
      SStack_2b8._firstChar = 0;
      SStack_2b8._6_2_ = 0;
      il2cpp_runtime_helper_023445d0(&"Skin/skin_TS");
      SVar31 = (System_String_Fields)&"Skin/skin_AHSS";
      SStack_2b8._stringLength = 0x42ec301;
      SStack_2b8._firstChar = 0;
      SStack_2b8._6_2_ = 0;
      il2cpp_runtime_helper_023445d0();
      g_data_057adec4 = '\x01';
    }
    if (*(long *)(lVar40 + 0x10) != 0) {
      iVar3 = *(int *)(*(long *)(lVar40 + 0x10) + 0x1d0);
      if (iVar3 == 1) {
label_042ec4e0:
        pSVar43 = (System_String_Fields *)&"Skin/skin_AHSS";
        lVar10 = *(long *)((long)__this_07 + 0x1c8);
      }
      else if (iVar3 == 2) {
        pSVar43 = (System_String_Fields *)&"Skin/skin_TS";
        lVar10 = *(long *)((long)__this_07 + 0x1c8);
      }
      else {
        if (iVar3 == 3) goto label_042ec4e0;
        pSVar43 = (System_String_Fields *)&"Skin/skin_blades";
        lVar10 = *(long *)((long)__this_07 + 0x1c8);
      }
      if ((lVar10 != 0) && (*(long *)(lVar10 + 0x98) != 0)) {
        pUVar22 = *(Utility_Color255_o **)(*(long *)(lVar10 + 0x98) + 0x18);
        SVar31._stringLength = 0;
        SVar31._firstChar = 0;
        SVar31._6_2_ = 0;
        if (pUVar22 != (Utility_Color255_o *)0x0) {
          SVar27 = *pSVar43;
          SVar34._stringLength = 0;
          SVar34._firstChar = 0;
          SVar34._6_2_ = 0;
          SStack_2b8._stringLength = 0x42ec51e;
          SStack_2b8._firstChar = 0;
          SStack_2b8._6_2_ = 0;
          UVar52 = Utility_Color255__ToColor(pUVar22,(MethodInfo *)0x0);
          fVar48 = UVar52.fields.r;
          fVar49 = UVar52.fields.g;
          fVar50 = UVar52.fields.b;
          fVar51 = UVar52.fields.a;
          if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
            auStack_2a0._8_4_ = extraout_XMM0_Dc_01;
            auStack_2a0._0_8_ = UVar52.fields._0_8_;
            auStack_2a0._12_4_ = extraout_XMM0_Dd_01;
            auStack_2b0._8_4_ = in_XMM1_Dc;
            auStack_2b0._0_8_ = UVar52.fields._8_8_;
            auStack_2b0._12_4_ = in_XMM1_Dd;
            SStack_2b8._stringLength = 0x42ec53f;
            SStack_2b8._firstChar = 0;
            SStack_2b8._6_2_ = 0;
            il2cpp_runtime_helper_02337ed0();
            fVar48 = (float)auStack_2a0._0_4_;
            fVar49 = (float)auStack_2a0._4_4_;
            fVar50 = (float)auStack_2b0._0_4_;
            fVar51 = (float)auStack_2b0._4_4_;
          }
          SStack_2b8._stringLength = 0x42ec550;
          SStack_2b8._firstChar = 0;
          SStack_2b8._6_2_ = 0;
          color_01.fields.g = fVar49;
          color_01.fields.r = fVar48;
          color_01.fields.a = fVar51;
          color_01.fields.b = fVar50;
          SVar35 = (System_String_Fields)
                   Characters_HumanSetupMaterials__GetSkinMaterial
                             ((System_String_o *)SVar27,color_01,(MethodInfo *)SVar34);
          SVar31._stringLength = 0;
          SVar31._firstChar = 0;
          SVar31._6_2_ = 0;
          if (*(Characters_HumanSetupMeshes_o **)((long)__this_07 + 0x168) !=
              (Characters_HumanSetupMeshes_o *)0x0) {
            plVar17 = (long *)((long)__this_07 + 0xa8);
            SStack_2b8._stringLength = 0x42ec574;
            SStack_2b8._firstChar = 0;
            SStack_2b8._6_2_ = 0;
            pSVar15 = Characters_HumanSetupMeshes__GetArmMesh
                                (*(Characters_HumanSetupMeshes_o **)((long)__this_07 + 0x168),1,method_12);
            SStack_2b8._stringLength = 0x42ec57f;
            SStack_2b8._firstChar = 0;
            SStack_2b8._6_2_ = 0;
            SVar34 = (System_String_Fields)
                     Characters_HumanSetup__GenerateCloth
                               ((Characters_HumanSetup_o *)__this_07,pSVar15,method_13);
            *(System_String_Fields *)((long)__this_07 + 0xa8) = SVar34;
            SStack_2b8._stringLength = 0x42ec591;
            SStack_2b8._firstChar = 0;
            SStack_2b8._6_2_ = 0;
            il2cpp_runtime_helper_022b4080(plVar17);
            SVar31 = *(System_String_Fields *)((long)__this_07 + 0xa8);
            SVar27 = SVar35;
            if (SVar31 != (System_String_Fields)0x0) {
              pSVar44 = &MethodInfo_Renderer_GetComponent_Renderer;
              SStack_2b8._stringLength = 0x42ec5b1;
              SStack_2b8._firstChar = 0;
              SStack_2b8._6_2_ = 0;
              SVar34 = MethodInfo_Renderer_GetComponent_Renderer;
              pUVar33 = (UnityEngine_Renderer_o *)
                        UnityEngine_GameObject__GetComponent_object_
                                  ((UnityEngine_GameObject_o *)SVar31,(MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer);
              if (pUVar33 != (UnityEngine_Renderer_o *)0x0) {
                SStack_2b8._stringLength = 0x42ec5c7;
                SStack_2b8._firstChar = 0;
                SStack_2b8._6_2_ = 0;
                SVar34 = method_00;
                UnityEngine_Renderer__set_material
                          (pUVar33,(UnityEngine_Material_o *)method_00,(MethodInfo *)0x0);
                SVar31._stringLength = 0;
                SVar31._firstChar = 0;
                SVar31._6_2_ = 0;
                if (*(Characters_HumanSetupMeshes_o **)((long)__this_07 + 0x168) !=
                    (Characters_HumanSetupMeshes_o *)0x0) {
                  plVar17 = (long *)((long)__this_07 + 0x138);
                  SStack_2b8._stringLength = 0x42ec5e8;
                  SStack_2b8._firstChar = 0;
                  SStack_2b8._6_2_ = 0;
                  pSVar15 = Characters_HumanSetupMeshes__GetHandMesh
                                      (*(Characters_HumanSetupMeshes_o **)((long)__this_07 + 0x168),1,
                                       method_14);
                  SStack_2b8._stringLength = 0x42ec5f3;
                  SStack_2b8._firstChar = 0;
                  SStack_2b8._6_2_ = 0;
                  SVar34 = (System_String_Fields)
                           Characters_HumanSetup__GenerateCloth
                                     ((Characters_HumanSetup_o *)__this_07,pSVar15,method_15);
                  *(System_String_Fields *)((long)__this_07 + 0x138) = SVar34;
                  SStack_2b8._stringLength = 0x42ec605;
                  SStack_2b8._firstChar = 0;
                  SStack_2b8._6_2_ = 0;
                  il2cpp_runtime_helper_022b4080(plVar17);
                  SVar31 = *(System_String_Fields *)((long)__this_07 + 0x138);
                  if (SVar31 != (System_String_Fields)0x0) {
                    SStack_2b8._stringLength = 0x42ec61e;
                    SStack_2b8._firstChar = 0;
                    SStack_2b8._6_2_ = 0;
                    SVar34 = MethodInfo_Renderer_GetComponent_Renderer;
                    pUVar33 = (UnityEngine_Renderer_o *)
                              UnityEngine_GameObject__GetComponent_object_
                                        ((UnityEngine_GameObject_o *)SVar31,(MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer
                                        );
                    if (pUVar33 != (UnityEngine_Renderer_o *)0x0) {
                      SStack_2b8._stringLength = 0x42ec634;
                      SStack_2b8._firstChar = 0;
                      SStack_2b8._6_2_ = 0;
                      SVar34 = SVar35;
                      UnityEngine_Renderer__set_material
                                (pUVar33,(UnityEngine_Material_o *)SVar35,(MethodInfo *)0x0);
                      SVar31._stringLength = 0;
                      SVar31._firstChar = 0;
                      SVar31._6_2_ = 0;
                      if (*(Characters_HumanSetupMeshes_o **)((long)__this_07 + 0x168) !=
                          (Characters_HumanSetupMeshes_o *)0x0) {
                        plVar17 = (long *)((long)__this_07 + 0xb0);
                        SStack_2b8._stringLength = 0x42ec652;
                        SStack_2b8._firstChar = 0;
                        SStack_2b8._6_2_ = 0;
                        pSVar15 = Characters_HumanSetupMeshes__GetArmMesh
                                            (*(Characters_HumanSetupMeshes_o **)((long)__this_07 + 0x168),0,
                                             method_16);
                        SStack_2b8._stringLength = 0x42ec65d;
                        SStack_2b8._firstChar = 0;
                        SStack_2b8._6_2_ = 0;
                        SVar34 = (System_String_Fields)
                                 Characters_HumanSetup__GenerateCloth
                                           ((Characters_HumanSetup_o *)__this_07,pSVar15,method_17);
                        *(System_String_Fields *)((long)__this_07 + 0xb0) = SVar34;
                        SStack_2b8._stringLength = 0x42ec66f;
                        SStack_2b8._firstChar = 0;
                        SStack_2b8._6_2_ = 0;
                        il2cpp_runtime_helper_022b4080(plVar17);
                        SVar31 = *(System_String_Fields *)((long)__this_07 + 0xb0);
                        if (SVar31 != (System_String_Fields)0x0) {
                          SStack_2b8._stringLength = 0x42ec688;
                          SStack_2b8._firstChar = 0;
                          SStack_2b8._6_2_ = 0;
                          SVar34 = MethodInfo_Renderer_GetComponent_Renderer;
                          pUVar33 = (UnityEngine_Renderer_o *)
                                    UnityEngine_GameObject__GetComponent_object_
                                              ((UnityEngine_GameObject_o *)SVar31,
                                               (MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer);
                          if (pUVar33 != (UnityEngine_Renderer_o *)0x0) {
                            SStack_2b8._stringLength = 0x42ec69e;
                            SStack_2b8._firstChar = 0;
                            SStack_2b8._6_2_ = 0;
                            SVar34 = method_00;
                            UnityEngine_Renderer__set_material
                                      (pUVar33,(UnityEngine_Material_o *)method_00,(MethodInfo *)0x0);
                            SVar31._stringLength = 0;
                            SVar31._firstChar = 0;
                            SVar31._6_2_ = 0;
                            if (*(Characters_HumanSetupMeshes_o **)((long)__this_07 + 0x168) !=
                                (Characters_HumanSetupMeshes_o *)0x0) {
                              method_00 = (System_String_Fields)((long)__this_07 + 0x140);
                              SStack_2b8._stringLength = 0x42ec6b8;
                              SStack_2b8._firstChar = 0;
                              SStack_2b8._6_2_ = 0;
                              pSVar15 = Characters_HumanSetupMeshes__GetHandMesh
                                                  (*(Characters_HumanSetupMeshes_o **)
                                                    ((long)__this_07 + 0x168),0,method_18);
                              SStack_2b8._stringLength = 0x42ec6c3;
                              SStack_2b8._firstChar = 0;
                              SStack_2b8._6_2_ = 0;
                              SVar34 = (System_String_Fields)
                                       Characters_HumanSetup__GenerateCloth
                                                 ((Characters_HumanSetup_o *)__this_07,pSVar15,method_19);
                              *(System_String_Fields *)((long)__this_07 + 0x140) = SVar34;
                              SStack_2b8._stringLength = 0x42ec6d5;
                              SStack_2b8._firstChar = 0;
                              SStack_2b8._6_2_ = 0;
                              il2cpp_runtime_helper_022b4080(method_00);
                              SVar31 = *(System_String_Fields *)((long)__this_07 + 0x140);
                              if (SVar31 != (System_String_Fields)0x0) {
                                SStack_2b8._stringLength = 0x42ec6ea;
                                SStack_2b8._firstChar = 0;
                                SStack_2b8._6_2_ = 0;
                                SVar34 = MethodInfo_Renderer_GetComponent_Renderer;
                                pUVar33 = (UnityEngine_Renderer_o *)
                                          UnityEngine_GameObject__GetComponent_object_
                                                    ((UnityEngine_GameObject_o *)SVar31,
                                                     (MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer);
                                if (pUVar33 != (UnityEngine_Renderer_o *)0x0) {
                                  UnityEngine_Renderer__set_material
                                            (pUVar33,(UnityEngine_Material_o *)SVar35,(MethodInfo *)0x0);
                                  return extraout_RAX_04;
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
  SStack_2b8._stringLength = 0x42ec726;
  SStack_2b8._firstChar = 0;
  SStack_2b8._6_2_ = 0;
  il2cpp_runtime_helper_022b2c90();
  lStack_2d8 = lVar40;
  plStack_2d0 = plVar17;
  pSStack_2c8 = (System_Object_array *)pSVar44;
  SStack_2c0 = method_00;
  SStack_2b8 = SVar27;
  if (g_data_057ade9d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRenderer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRenderer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    g_data_057ade9d = '\x01';
    if (*(int *)((long)TypeInfo_ResourcePaths + 0xe4) != 0) goto label_042ec767;
label_042ec949:
    il2cpp_runtime_helper_02337ed0();
    pSVar38 = ((System_String_o *)((long)SVar31 + 0x1c8))->klass;
    if (pSVar38 == (System_String_c *)0x0) goto label_042ec961;
label_042ec777:
    pvVar7 = (pSVar38->_1).typeMetadataHandle;
    if ((pvVar7 == (void *)0x0) ||
       (pSVar38 = ((System_String_o *)((long)SVar31 + 0x168))->klass, pSVar38 == (System_String_c *)0x0))
    goto label_042ec961;
    pSVar15 = *(System_String_o **)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
    uStack_2dc = *(undefined4 *)((long)pvVar7 + 0x14);
    if (g_data_057adeae == '\0') {
      il2cpp_runtime_helper_023445d0(&"character_leg_");
      g_data_057adeae = '\x01';
    }
    pSVar16 = (System_String_o *)(pSVar38->_1).namespaze;
    pSVar19 = System_Int32__ToString((int32_t)&uStack_2dc,(MethodInfo *)0x0);
    pSVar16 = System_String__Concat_3af7150(pSVar16,"character_leg_",pSVar19,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar36 = ApplicationManagers_ResourceManager__LoadAsset(pSVar15,pSVar16,1,(MethodInfo *)0x0);
    if (pUVar36 == (UnityEngine_Object_o *)0x0) goto label_042ec961;
    if (pUVar36->klass == TypeInfo_GameObject) {
      __this_01 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar36,(MethodInfo *)0x0)
      ;
      pSVar38 = ((System_String_o *)((long)SVar31 + 0x150))->klass;
      if (pSVar38 != (System_String_c *)0x0) {
        __this_02 = (UnityEngine_SkinnedMeshRenderer_o *)
                    UnityEngine_GameObject__GetComponent_object_
                              ((UnityEngine_GameObject_o *)pSVar38,MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRenderer);
        if (__this_01 != (UnityEngine_Transform_o *)0x0) {
          __this_03 = (UnityEngine_SkinnedMeshRenderer_o *)
                      UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)__this_01,MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRenderer);
          if (__this_03 != (UnityEngine_SkinnedMeshRenderer_o *)0x0) {
            value = UnityEngine_SkinnedMeshRenderer__get_sharedMesh(__this_03,(MethodInfo *)0x0);
            if (__this_02 != (UnityEngine_SkinnedMeshRenderer_o *)0x0) {
              UnityEngine_SkinnedMeshRenderer__set_sharedMesh(__this_02,value,(MethodInfo *)0x0);
              pSVar38 = ((System_String_o *)((long)SVar31 + 0x150))->klass;
              if (pSVar38 != (System_String_c *)0x0) {
                pUVar33 = (UnityEngine_Renderer_o *)
                          UnityEngine_GameObject__GetComponent_object_
                                    ((UnityEngine_GameObject_o *)pSVar38,MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRenderer);
                if (pUVar33 != (UnityEngine_Renderer_o *)0x0) {
                  UnityEngine_Renderer__set_material
                            (pUVar33,(UnityEngine_Material_o *)SVar34,(MethodInfo *)0x0);
                  return extraout_RAX_05;
                }
              }
            }
          }
        }
      }
      goto label_042ec961;
    }
  }
  else {
    if (*(int *)((long)TypeInfo_ResourcePaths + 0xe4) == 0) goto label_042ec949;
label_042ec767:
    pSVar38 = ((System_String_o *)((long)SVar31 + 0x1c8))->klass;
    if (pSVar38 != (System_String_c *)0x0) goto label_042ec777;
label_042ec961:
    pUVar36 = (UnityEngine_Object_o *)il2cpp_runtime_helper_022b2c90();
  }
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ade8f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponentInChildren_Renderer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponent_Renderer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupMaterials);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    g_data_057ade8f = '\x01';
    pUVar42 = (UnityEngine_Object_o *)pUVar36[5].fields.m_CachedPtr;
    if (g_data_057adea2 != '\0') goto label_042ec99f;
label_042ecb66:
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    pUVar42 = (UnityEngine_Object_o *)pUVar36[5].fields.m_CachedPtr;
    if (g_data_057adea2 == '\0') goto label_042ecb66;
label_042ec99f:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar13 = UnityEngine_Object__op_Inequality(pUVar42,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 == '\0') {
    pUVar28 = pUVar36[6].klass;
    if (g_data_057adea2 == '\0') goto label_042ecbcb;
label_042ec9df:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar42,(MethodInfo *)0x0);
    pUVar28 = pUVar36[6].klass;
    if (g_data_057adea2 != '\0') goto label_042ec9df;
label_042ecbcb:
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar13 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pUVar28,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 == '\0') {
    pUVar42 = pUVar36[6].monitor;
    if (g_data_057adea2 == '\0') goto label_042ecc29;
label_042eca18:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)pUVar28,(MethodInfo *)0x0);
    pUVar42 = pUVar36[6].monitor;
    if (g_data_057adea2 != '\0') goto label_042eca18;
label_042ecc29:
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar13 = UnityEngine_Object__op_Inequality(pUVar42,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 == '\0') {
    SVar27 = (System_String_Fields)pUVar36[6].fields.m_CachedPtr;
    if (g_data_057adea2 == '\0') goto label_042ecc87;
label_042eca51:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar42,(MethodInfo *)0x0);
    SVar27 = (System_String_Fields)pUVar36[6].fields.m_CachedPtr;
    if (g_data_057adea2 != '\0') goto label_042eca51;
label_042ecc87:
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  SVar31 = SVar27;
  bVar13 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)SVar27,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pMVar41 = extraout_RDX_08;
  if ((char)bVar13 != '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)SVar27,(MethodInfo *)0x0);
    pMVar41 = extraout_RDX_09;
    SVar31 = SVar27;
  }
  pvVar7 = pUVar36[0xf].monitor;
  if (pvVar7 != (void *)0x0) {
    if (g_data_057adec2 == '\0') {
      il2cpp_runtime_helper_023445d0(&"Misc/AOTTG_HERO_3DMG");
      il2cpp_runtime_helper_023445d0(&"Misc/aottg_hero_AHSS_3dmg");
      SVar31 = (System_String_Fields)&"Misc/aottg_hero_APG_3dmg";
      il2cpp_runtime_helper_023445d0();
      g_data_057adec2 = '\x01';
      pMVar41 = extraout_RDX_10;
    }
    lVar40 = *(long *)((long)pvVar7 + 0x10);
    if (lVar40 != 0) {
      iVar3 = *(int *)(lVar40 + 0x1d0);
      if (iVar3 == 3) {
        puVar39 = &"Misc/aottg_hero_APG_3dmg";
      }
      else {
        puVar39 = &"Misc/AOTTG_HERO_3DMG";
        if (iVar3 == 1) {
          puVar39 = &"Misc/aottg_hero_AHSS_3dmg";
        }
      }
      pSVar15 = (System_String_o *)*puVar39;
      if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pMVar41 = extraout_RDX_11;
      }
      method_21 = (MethodInfo *)0x0;
      pUVar37 = Characters_HumanSetupMaterials__GetPartMaterial(pSVar15,0,pMVar41);
      if (*(int *)((long)TypeInfo_ResourcePaths + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      SVar31 = TypeInfo_ResourcePaths;
      if (pUVar36[0xf].klass != (UnityEngine_Object_c *)0x0) {
        pCVar29 = (Characters_HumanSetup_o *)&pUVar36[5].fields;
        pSVar15 = *(System_String_o **)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
        pSVar16 = Characters_HumanSetupMeshes__Get3dmgMesh
                            ((Characters_HumanSetupMeshes_o *)pUVar36[0xf].klass,method_21);
        if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pIVar26 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                            (pSVar15,pSVar16,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
        pUVar36[5].fields.m_CachedPtr = (intptr_t)pIVar26;
        il2cpp_runtime_helper_022b4080(pCVar29,pIVar26);
        Characters_HumanSetup__AttachToMount
                  (pCVar29,(UnityEngine_GameObject_o *)pUVar36[5].fields.m_CachedPtr,
                   (UnityEngine_GameObject_o *)pUVar36[1].fields.m_CachedPtr,0,in_R8);
        SVar31 = (System_String_Fields)pUVar36[5].fields.m_CachedPtr;
        if (SVar31 != (System_String_Fields)0x0) {
          ppSVar45 = (System_String_o **)
                     UnityEngine_GameObject__GetComponentInChildren_object_
                               ((UnityEngine_GameObject_o *)SVar31,MethodInfo_Renderer_GetComponentInChildren_Renderer);
          if ((System_String_Fields)ppSVar45 != (System_String_Fields)0x0) {
            UnityEngine_Renderer__set_material((UnityEngine_Renderer_o *)ppSVar45,pUVar37,(MethodInfo *)0x0);
            pUVar28 = pUVar36[0xf].klass;
            SVar31 = (System_String_Fields)ppSVar45;
            if (pUVar28 != (UnityEngine_Object_c *)0x0) {
              if (g_data_057adeb2 == '\0') {
                ppSVar45 = &"3dmg_belt";
                il2cpp_runtime_helper_023445d0();
                g_data_057adeb2 = '\x01';
              }
              pcVar11 = (pUVar28->_1).name;
              SVar31 = (System_String_Fields)ppSVar45;
              if (pcVar11 != (char *)0x0) {
                if ((*(uint *)(pcVar11 + 0x1d0) | 2) == 3) {
                  pSVar15 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
                  pSVar16 = pSVar15;
                }
                else {
                  pSVar16 = System_String__Concat_3ae5ba0
                                      ((pUVar28->_1).byval_arg.data,"3dmg_belt",(MethodInfo *)0x0);
                  pSVar15 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
                }
                bVar13 = System_String__op_Inequality(pSVar16,pSVar15,(MethodInfo *)0x0);
                pSVar15 = (System_String_o *)CONCAT44(extraout_var_02,bVar13);
                pMVar41 = extraout_RDX_12;
                if ((char)bVar13 == '\0') {
label_042ecf16:
                  if (*(int *)&pUVar36[0x13].monitor == 3) {
                    return pSVar15;
                  }
                  if (*(int *)((long)TypeInfo_ResourcePaths + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                    pMVar41 = extraout_RDX_14;
                  }
                  SVar31 = TypeInfo_ResourcePaths;
                  if (pUVar36[0xf].klass != (UnityEngine_Object_c *)0x0) {
                    ppvVar1 = &pUVar36[6].monitor;
                    pSVar15 = *(System_String_o **)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
                    pSVar16 = Characters_HumanSetupMeshes__GetGasMesh
                                        ((Characters_HumanSetupMeshes_o *)pUVar36[0xf].klass,1,pMVar41);
                    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pIVar26 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                                        (pSVar15,pSVar16,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
                    *ppvVar1 = pIVar26;
                    il2cpp_runtime_helper_022b4080(ppvVar1);
                    SVar31 = (System_String_Fields)*ppvVar1;
                    if (SVar31 != (System_String_Fields)0x0) {
                      pCVar29 = (Characters_HumanSetup_o *)
                                UnityEngine_GameObject__GetComponent_object_
                                          ((UnityEngine_GameObject_o *)SVar31,
                                           (MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer);
                      if (pCVar29 != (Characters_HumanSetup_o *)0x0) {
                        UnityEngine_Renderer__set_material
                                  ((UnityEngine_Renderer_o *)pCVar29,pUVar37,(MethodInfo *)0x0);
                        Characters_HumanSetup__AttachToMount
                                  (pCVar29,pUVar36[6].monitor,
                                   (UnityEngine_GameObject_o *)
                                   (&pUVar36[2].klass)[(ulong)(*(int *)&pUVar36[0x13].monitor == 1) * 2],0,
                                   in_R8);
                        pMVar41 = extraout_RDX_15;
                        if (*(int *)((long)TypeInfo_ResourcePaths + 0xe4) == 0) {
                          il2cpp_runtime_helper_02337ed0();
                          pMVar41 = extraout_RDX_16;
                        }
                        SVar31 = TypeInfo_ResourcePaths;
                        if (pUVar36[0xf].klass != (UnityEngine_Object_c *)0x0) {
                          pUVar2 = &pUVar36[6].fields;
                          pSVar15 = *(System_String_o **)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
                          pSVar16 = Characters_HumanSetupMeshes__GetGasMesh
                                              ((Characters_HumanSetupMeshes_o *)pUVar36[0xf].klass,0,pMVar41);
                          if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
                            il2cpp_runtime_helper_02337ed0();
                          }
                          pIVar26 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                                              (pSVar15,pSVar16,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
                          pUVar2->m_CachedPtr = (intptr_t)pIVar26;
                          il2cpp_runtime_helper_022b4080(pUVar2);
                          SVar31 = (System_String_Fields)pUVar2->m_CachedPtr;
                          if (SVar31 != (System_String_Fields)0x0) {
                            pCVar29 = (Characters_HumanSetup_o *)
                                      UnityEngine_GameObject__GetComponent_object_
                                                ((UnityEngine_GameObject_o *)SVar31,
                                                 (MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer);
                            if (pCVar29 != (Characters_HumanSetup_o *)0x0) {
                              UnityEngine_Renderer__set_material
                                        ((UnityEngine_Renderer_o *)pCVar29,pUVar37,(MethodInfo *)0x0);
                              Characters_HumanSetup__AttachToMount
                                        (pCVar29,(UnityEngine_GameObject_o *)pUVar36[6].fields.m_CachedPtr,
                                         (&pUVar36[2].monitor)
                                         [(ulong)(*(int *)&pUVar36[0x13].monitor == 1) * 2],0,in_R8);
                              return extraout_RAX_07;
                            }
                          }
                        }
                      }
                    }
                  }
                }
                else {
                  if (*(int *)((long)TypeInfo_ResourcePaths + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pUVar42 = pUVar36 + 6;
                  pSVar15 = *(System_String_o **)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
                  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pUVar28 = (UnityEngine_Object_c *)
                            ApplicationManagers_ResourceManager__InstantiateAsset_object_
                                      (pSVar15,pSVar16,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
                  pUVar42->klass = pUVar28;
                  il2cpp_runtime_helper_022b4080(pUVar42);
                  SVar31 = (System_String_Fields)pUVar42->klass;
                  if (SVar31 != (System_String_Fields)0x0) {
                    pCVar29 = (Characters_HumanSetup_o *)
                              UnityEngine_GameObject__GetComponent_object_
                                        ((UnityEngine_GameObject_o *)SVar31,(MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer
                                        );
                    if (pCVar29 != (Characters_HumanSetup_o *)0x0) {
                      UnityEngine_Renderer__set_material
                                ((UnityEngine_Renderer_o *)pCVar29,pUVar37,(MethodInfo *)0x0);
                      Characters_HumanSetup__AttachToMount
                                (pCVar29,(UnityEngine_GameObject_o *)pUVar36[6].klass,
                                 (UnityEngine_GameObject_o *)pUVar36[1].fields.m_CachedPtr,0,in_R8);
                      pSVar15 = extraout_RAX_06;
                      pMVar41 = extraout_RDX_13;
                      goto label_042ecf16;
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
  if (g_data_057ade90 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEffectPresets);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MeleeWeaponTrail_GetComponentInChildren_MeleeWeaponTrail);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponentInChildren_Renderer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupMaterials);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&"thunderspear");
    g_data_057ade90 = '\x01';
    pUVar36 = *(UnityEngine_Object_o **)((long)SVar31 + 0xb8);
    if (g_data_057adea2 != '\0') goto label_042ed11f;
label_042ed2a1:
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    pUVar36 = *(UnityEngine_Object_o **)((long)SVar31 + 0xb8);
    if (g_data_057adea2 == '\0') goto label_042ed2a1;
label_042ed11f:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar13 = UnityEngine_Object__op_Inequality(pUVar36,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 == '\0') {
    pSVar15 = *(System_String_o **)((long)SVar31 + 0xc0);
    if (g_data_057adea2 == '\0') goto label_042ed304;
label_042ed15e:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar36,(MethodInfo *)0x0);
    pSVar15 = *(System_String_o **)((long)SVar31 + 0xc0);
    if (g_data_057adea2 != '\0') goto label_042ed15e;
label_042ed304:
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar16 = pSVar15;
  bVar13 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pSVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pMVar41 = extraout_RDX_17;
  if ((char)bVar13 != '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)pSVar15,(MethodInfo *)0x0);
    pMVar41 = extraout_RDX_18;
    pSVar16 = pSVar15;
  }
  lVar40 = *(long *)((long)SVar31 + 0x170);
  if (lVar40 != 0) {
    if (g_data_057adec2 == '\0') {
      il2cpp_runtime_helper_023445d0(&"Misc/AOTTG_HERO_3DMG");
      il2cpp_runtime_helper_023445d0(&"Misc/aottg_hero_AHSS_3dmg");
      pSVar16 = (System_String_o *)&"Misc/aottg_hero_APG_3dmg";
      il2cpp_runtime_helper_023445d0();
      g_data_057adec2 = '\x01';
      pMVar41 = extraout_RDX_19;
    }
    lVar40 = *(long *)(lVar40 + 0x10);
    if (lVar40 != 0) {
      iVar3 = *(int *)(lVar40 + 0x1d0);
      if (iVar3 == 3) {
        puVar39 = &"Misc/aottg_hero_APG_3dmg";
      }
      else {
        puVar39 = &"Misc/AOTTG_HERO_3DMG";
        if (iVar3 == 1) {
          puVar39 = &"Misc/aottg_hero_AHSS_3dmg";
        }
      }
      pSVar16 = (System_String_o *)*puVar39;
      iVar3 = *(int *)((long)SVar31 + 0x1d0);
      if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pMVar41 = extraout_RDX_20;
      }
      pUVar37 = Characters_HumanSetupMaterials__GetPartMaterial(pSVar16,(uint)(iVar3 == 3),pMVar41);
      if ((*(long *)((long)SVar31 + 0x1c8) != 0) &&
         (lVar40 = *(long *)(*(long *)((long)SVar31 + 0x1c8) + 0xe0), lVar40 != 0)) {
        pSVar15 = *(System_String_o **)(lVar40 + 0x18);
        if (*(int *)(TypeInfo_CharacterEffectPresets + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        iVar14 = PatreonEffects_CharacterEffectPresets__ParseOrDefault(pSVar15,(MethodInfo *)0x0);
        pSVar16 = (System_String_o *)0x0;
        if (*(Characters_HumanSetupMeshes_o **)((long)SVar31 + 0x168) != (Characters_HumanSetupMeshes_o *)0x0)
        {
          pCVar29 = (Characters_HumanSetup_o *)
                    Characters_HumanSetupMeshes__GetWeaponMesh
                              (*(Characters_HumanSetupMeshes_o **)((long)SVar31 + 0x168),1,method_20);
          bVar13 = System_String__op_Inequality
                             ((System_String_o *)pCVar29,
                              (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
          pMVar41 = extraout_RDX_21;
          if ((char)bVar13 == '\0') goto label_042ed58b;
          if (*(int *)((long)TypeInfo_ResourcePaths + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar15 = (System_String_o *)((long)SVar31 + 0xb8);
          pSVar16 = *(System_String_o **)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
          if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar38 = (System_String_c *)
                    ApplicationManagers_ResourceManager__InstantiateAsset_object_
                              (pSVar16,(System_String_o *)pCVar29,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
          pSVar15->klass = pSVar38;
          pSVar16 = pSVar15;
          il2cpp_runtime_helper_022b4080();
          if (pCVar29 != (Characters_HumanSetup_o *)0x0) {
            bVar13 = System_String__Contains((System_String_o *)pCVar29,"thunderspear",(MethodInfo *)0x0);
            if ((char)bVar13 == '\0') {
              Characters_HumanSetup__AttachToMount
                        (pCVar29,(UnityEngine_GameObject_o *)pSVar15->klass,
                         *(UnityEngine_GameObject_o **)((long)SVar31 + 0x50),0,in_R8);
              pSVar16 = *(System_String_o **)((long)SVar31 + 0xb8);
              if (pSVar16 != (System_String_o *)0x0) {
                pUVar33 = (UnityEngine_Renderer_o *)
                          UnityEngine_GameObject__GetComponentInChildren_object_
                                    ((UnityEngine_GameObject_o *)pSVar16,MethodInfo_Renderer_GetComponentInChildren_Renderer);
                if (pUVar33 != (UnityEngine_Renderer_o *)0x0) {
                  UnityEngine_Renderer__set_material(pUVar33,pUVar37,(MethodInfo *)0x0);
                  goto label_042ed4ec;
                }
              }
            }
            else {
              Characters_HumanSetup__AttachToMount
                        (pCVar29,(UnityEngine_GameObject_o *)pSVar15->klass,
                         *(UnityEngine_GameObject_o **)((long)SVar31 + 0x60),0,in_R8);
label_042ed4ec:
              Characters_HumanSetup__ApplyCharacterEffectToPart
                        ((Characters_HumanSetup_o *)SVar31,*(UnityEngine_GameObject_o **)((long)SVar31 + 0xb8)
                         ,iVar14,0,in_R8);
              pSVar16 = (System_String_o *)0x0;
              if (*(UnityEngine_GameObject_o **)((long)SVar31 + 0xb8) != (UnityEngine_GameObject_o *)0x0) {
                pUVar36 = (UnityEngine_Object_o *)
                          UnityEngine_GameObject__GetComponentInChildren_object_
                                    (*(UnityEngine_GameObject_o **)((long)SVar31 + 0xb8),MethodInfo_MeleeWeaponTrail_GetComponentInChildren_MeleeWeaponTrail);
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                bVar13 = UnityEngine_Object__op_Inequality
                                   (pUVar36,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                pMVar41 = extraout_RDX_22;
                if ((char)bVar13 == '\0') {
label_042ed58b:
                  pSVar16 = (System_String_o *)0x0;
                  if (*(Characters_HumanSetupMeshes_o **)((long)SVar31 + 0x168) !=
                      (Characters_HumanSetupMeshes_o *)0x0) {
                    pCVar29 = (Characters_HumanSetup_o *)
                              Characters_HumanSetupMeshes__GetWeaponMesh
                                        (*(Characters_HumanSetupMeshes_o **)((long)SVar31 + 0x168),0,pMVar41);
                    bVar13 = System_String__op_Inequality
                                       ((System_String_o *)pCVar29,
                                        (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                                        (MethodInfo *)0x0);
                    if ((char)bVar13 == '\0') {
                      return (System_String_o *)CONCAT44(extraout_var_03,bVar13);
                    }
                    if (*(int *)((long)TypeInfo_ResourcePaths + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pSVar15 = (System_String_o *)((long)SVar31 + 0xc0);
                    pSVar16 = *(System_String_o **)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
                    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pSVar38 = (System_String_c *)
                              ApplicationManagers_ResourceManager__InstantiateAsset_object_
                                        (pSVar16,(System_String_o *)pCVar29,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
                    pSVar15->klass = pSVar38;
                    pSVar16 = pSVar15;
                    il2cpp_runtime_helper_022b4080();
                    if (pCVar29 != (Characters_HumanSetup_o *)0x0) {
                      bVar13 = System_String__Contains
                                         ((System_String_o *)pCVar29,"thunderspear",(MethodInfo *)0x0);
                      if ((char)bVar13 == '\0') {
                        Characters_HumanSetup__AttachToMount
                                  (pCVar29,(UnityEngine_GameObject_o *)pSVar15->klass,
                                   *(UnityEngine_GameObject_o **)((long)SVar31 + 0x58),0,in_R8);
                        pSVar16 = *(System_String_o **)((long)SVar31 + 0xc0);
                        if (pSVar16 != (System_String_o *)0x0) {
                          pUVar33 = (UnityEngine_Renderer_o *)
                                    UnityEngine_GameObject__GetComponentInChildren_object_
                                              ((UnityEngine_GameObject_o *)pSVar16,MethodInfo_Renderer_GetComponentInChildren_Renderer);
                          if (pUVar33 != (UnityEngine_Renderer_o *)0x0) {
                            UnityEngine_Renderer__set_material(pUVar33,pUVar37,(MethodInfo *)0x0);
                            goto label_042ed6a9;
                          }
                        }
                      }
                      else {
                        Characters_HumanSetup__AttachToMount
                                  (pCVar29,(UnityEngine_GameObject_o *)pSVar15->klass,
                                   *(UnityEngine_GameObject_o **)((long)SVar31 + 0x68),0,in_R8);
label_042ed6a9:
                        Characters_HumanSetup__ApplyCharacterEffectToPart
                                  ((Characters_HumanSetup_o *)SVar31,
                                   *(UnityEngine_GameObject_o **)((long)SVar31 + 0xc0),iVar14,0,in_R8);
                        pSVar16 = (System_String_o *)0x0;
                        if (*(UnityEngine_GameObject_o **)((long)SVar31 + 0xc0) !=
                            (UnityEngine_GameObject_o *)0x0) {
                          pUVar36 = (UnityEngine_Object_o *)
                                    UnityEngine_GameObject__GetComponentInChildren_object_
                                              (*(UnityEngine_GameObject_o **)((long)SVar31 + 0xc0),
                                               MethodInfo_MeleeWeaponTrail_GetComponentInChildren_MeleeWeaponTrail);
                          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                            il2cpp_runtime_helper_02337ed0();
                          }
                          bVar13 = UnityEngine_Object__op_Inequality
                                             (pUVar36,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                          if ((char)bVar13 == '\0') {
                            return (System_String_o *)CONCAT44(extraout_var_04,bVar13);
                          }
                          pSVar16 = (System_String_o *)0x0;
                          if (pSVar15->klass != (System_String_c *)0x0) {
                            pIVar26 = UnityEngine_GameObject__GetComponentInChildren_object_
                                                ((UnityEngine_GameObject_o *)pSVar15->klass,MethodInfo_MeleeWeaponTrail_GetComponentInChildren_MeleeWeaponTrail);
                            pSVar16 = (System_String_o *)((long)SVar31 + 0x180);
                            *(Il2CppObject **)((long)SVar31 + 0x180) = pIVar26;
                            il2cpp_runtime_helper_022b4080();
                            pSVar15 = *(System_String_o **)((long)SVar31 + 0x180);
                            if (pSVar15 != (System_String_o *)0x0) {
                              *(undefined1 *)&pSVar15[1].monitor = 0;
                              return pSVar15;
                            }
                          }
                        }
                      }
                    }
                  }
                }
                else {
                  pSVar16 = (System_String_o *)0x0;
                  if (pSVar15->klass != (System_String_c *)0x0) {
                    pIVar26 = UnityEngine_GameObject__GetComponentInChildren_object_
                                        ((UnityEngine_GameObject_o *)pSVar15->klass,MethodInfo_MeleeWeaponTrail_GetComponentInChildren_MeleeWeaponTrail);
                    pSVar16 = (System_String_o *)((long)SVar31 + 0x178);
                    *(Il2CppObject **)((long)SVar31 + 0x178) = pIVar26;
                    il2cpp_runtime_helper_022b4080();
                    if (*(long *)((long)SVar31 + 0x178) != 0) {
                      *(undefined1 *)(*(long *)((long)SVar31 + 0x178) + 0x20) = 0;
                      pMVar41 = extraout_RDX_23;
                      goto label_042ed58b;
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
  if (g_data_057ade99 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_EZSoftBone_GetComponentInChildren_EZSoftBone);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupPrefabs);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&"None");
    g_data_057ade99 = '\x01';
    pUVar36 = pSVar16[0x10].monitor;
    if (g_data_057adea2 != '\0') goto label_042ed78d;
label_042eda29:
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    pUVar36 = pSVar16[0x10].monitor;
    if (g_data_057adea2 == '\0') goto label_042eda29;
label_042ed78d:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar42 = pUVar36;
  bVar13 = UnityEngine_Object__op_Inequality(pUVar36,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 != '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar36,(MethodInfo *)0x0);
    pUVar42 = pUVar36;
  }
  if ((pSVar16[0x13].klass == (System_String_c *)0x0) ||
     (pvVar7 = ((pSVar16[0x13].klass)->_1).properties, pvVar7 == (void *)0x0)) goto label_042edaae;
  pSVar15 = *(System_String_o **)((long)pvVar7 + 0x18);
  pUVar42 = (UnityEngine_Object_o *)0x0;
  if (pSVar15 == (System_String_o *)0x0) goto label_042edaae;
  pSVar15 = System_String__Substring(pSVar15,4,(MethodInfo *)0x0);
  bVar13 = System_String__op_Inequality(pSVar15,(System_String_o *)"None",(MethodInfo *)0x0);
  if ((char)bVar13 == '\0') {
    return (System_String_o *)CONCAT44(extraout_var_05,bVar13);
  }
  if (*(int *)((long)TypeInfo_ResourcePaths + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar19 = *(System_String_o **)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
  if (*(int *)(TypeInfo_HumanSetupPrefabs + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057adebe != '\0') goto label_042ed874;
label_042eda70:
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupPrefabs);
    il2cpp_runtime_helper_023445d0(&"Back/Back");
    g_data_057adebe = '\x01';
    iVar3 = *(int *)(TypeInfo_HumanSetupPrefabs + 0xe4);
  }
  else {
    if (g_data_057adebe == '\0') goto label_042eda70;
label_042ed874:
    iVar3 = *(int *)(TypeInfo_HumanSetupPrefabs + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar29 = (Characters_HumanSetup_o *)&pSVar16[0x10].monitor;
  pSVar15 = System_String__Concat_3af7150
                      ((System_String_o *)**(undefined8 **)(TypeInfo_HumanSetupPrefabs + 0xb8),"Back/Back",pSVar15,
                       (MethodInfo *)0x0);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar26 = ApplicationManagers_ResourceManager__InstantiateAsset_object_(pSVar19,pSVar15,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
  pSVar16[0x10].monitor = pIVar26;
  il2cpp_runtime_helper_022b4080(pCVar29,pIVar26);
  Characters_HumanSetup__AttachToMount
            (pCVar29,pSVar16[0x10].monitor,(UnityEngine_GameObject_o *)pSVar16[4].fields,1,in_R8);
  pUVar42 = (UnityEngine_Object_o *)0x0;
  if (pSVar16[0x10].monitor == (UnityEngine_GameObject_o *)0x0) {
label_042edaae:
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ade9b == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupPrefabs);
      il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
      il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
      il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
      il2cpp_runtime_helper_023445d0(&"None");
      g_data_057ade9b = '\x01';
      pUVar28 = pUVar42[0x11].klass;
    }
    else {
      pUVar28 = pUVar42[0x11].klass;
    }
    if (g_data_057adea2 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057adea2 = '\x01';
      iVar3 = *(int *)(TypeInfo_Object + 0xe4);
    }
    else {
      iVar3 = *(int *)(TypeInfo_Object + 0xe4);
    }
    if (iVar3 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar46 = pUVar28;
    bVar13 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pUVar28,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar13 != '\0') {
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)pUVar28,(MethodInfo *)0x0);
      pUVar46 = pUVar28;
    }
    if ((pUVar42[0x13].klass != (UnityEngine_Object_c *)0x0) &&
       (pvVar7 = ((pUVar42[0x13].klass)->_1).fields, pvVar7 != (void *)0x0)) {
      pSVar15 = *(System_String_o **)((long)pvVar7 + 0x18);
      pUVar46 = (UnityEngine_Object_c *)0x0;
      if (pSVar15 != (System_String_o *)0x0) {
        pSVar15 = System_String__Substring(pSVar15,3,(MethodInfo *)0x0);
        bVar13 = System_String__op_Inequality(pSVar15,(System_String_o *)"None",(MethodInfo *)0x0);
        if ((char)bVar13 != '\0') {
          if (*(int *)((long)TypeInfo_ResourcePaths + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar16 = *(System_String_o **)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
          if (*(int *)(TypeInfo_HumanSetupPrefabs + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057adebf == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupPrefabs);
            il2cpp_runtime_helper_023445d0(&"Hat/Hat");
            g_data_057adebf = '\x01';
            iVar3 = *(int *)(TypeInfo_HumanSetupPrefabs + 0xe4);
          }
          else {
            iVar3 = *(int *)(TypeInfo_HumanSetupPrefabs + 0xe4);
          }
          if (iVar3 == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pCVar29 = (Characters_HumanSetup_o *)(pUVar42 + 0x11);
          pSVar15 = System_String__Concat_3af7150
                              ((System_String_o *)**(undefined8 **)(TypeInfo_HumanSetupPrefabs + 0xb8),"Hat/Hat",pSVar15,
                               (MethodInfo *)0x0);
          if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pUVar28 = (UnityEngine_Object_c *)
                    ApplicationManagers_ResourceManager__InstantiateAsset_object_
                              (pSVar16,pSVar15,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
          pUVar42[0x11].klass = pUVar28;
          il2cpp_runtime_helper_022b4080(pCVar29,pUVar28);
          Characters_HumanSetup__AttachToMount
                    (pCVar29,(UnityEngine_GameObject_o *)pUVar42[0x11].klass,pUVar42[5].monitor,1,in_R8);
          return extraout_RAX_08;
        }
        return (System_String_o *)CONCAT44(extraout_var_08,bVar13);
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ade9a == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupPrefabs);
      il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
      il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
      il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
      il2cpp_runtime_helper_023445d0(&"None");
      g_data_057ade9a = '\x01';
      pUVar36 = (UnityEngine_Object_o *)pUVar46[1]._1.namespaze;
    }
    else {
      pUVar36 = (UnityEngine_Object_o *)pUVar46[1]._1.namespaze;
    }
    if (g_data_057adea2 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057adea2 = '\x01';
      iVar3 = *(int *)(TypeInfo_Object + 0xe4);
    }
    else {
      iVar3 = *(int *)(TypeInfo_Object + 0xe4);
    }
    if (iVar3 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar42 = (UnityEngine_Object_o *)0x0;
    bVar13 = UnityEngine_Object__op_Inequality(pUVar36,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar13 != '\0') {
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar42 = (UnityEngine_Object_o *)0x0;
      UnityEngine_Object__Destroy_4e01c60(pUVar36,(MethodInfo *)0x0);
    }
    pIVar9 = pUVar46[1]._1.declaringType;
    if (((pIVar9 != (Il2CppClass *)0x0) && (pvVar7 = (pIVar9->_1).events, pvVar7 != (void *)0x0)) &&
       (pSVar15 = *(System_String_o **)((long)pvVar7 + 0x18), pSVar15 != (System_String_o *)0x0)) {
      pSVar15 = System_String__Substring(pSVar15,4,(MethodInfo *)0x0);
      bVar13 = System_String__op_Inequality(pSVar15,(System_String_o *)"None",(MethodInfo *)0x0);
      if ((char)bVar13 == '\0') {
        return (System_String_o *)CONCAT44(extraout_var_09,bVar13);
      }
      if (*(int *)((long)TypeInfo_ResourcePaths + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar16 = *(System_String_o **)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
      if (*(int *)(TypeInfo_HumanSetupPrefabs + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057adec0 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupPrefabs);
        il2cpp_runtime_helper_023445d0(&"Head/Head");
        g_data_057adec0 = '\x01';
        iVar3 = *(int *)(TypeInfo_HumanSetupPrefabs + 0xe4);
      }
      else {
        iVar3 = *(int *)(TypeInfo_HumanSetupPrefabs + 0xe4);
      }
      if (iVar3 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pCVar29 = (Characters_HumanSetup_o *)&pUVar46[1]._1.namespaze;
      pSVar15 = System_String__Concat_3af7150
                          ((System_String_o *)**(undefined8 **)(TypeInfo_HumanSetupPrefabs + 0xb8),"Head/Head",pSVar15,
                           (MethodInfo *)0x0);
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar26 = ApplicationManagers_ResourceManager__InstantiateAsset_object_(pSVar16,pSVar15,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
      pUVar46[1]._1.namespaze = (char *)pIVar26;
      il2cpp_runtime_helper_022b4080(pCVar29,pIVar26);
      Characters_HumanSetup__AttachToMount
                (pCVar29,(UnityEngine_GameObject_o *)pUVar46[1]._1.namespaze,
                 (UnityEngine_GameObject_o *)(pUVar46->_1).klass,1,in_R8);
      return extraout_RAX_09;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057adea2 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057adea2 = '\x01';
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar13 = UnityEngine_Object__op_Inequality(pUVar42,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar13 == '\0') {
      return (System_String_o *)CONCAT44(extraout_var_10,bVar13);
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar42,(MethodInfo *)0x0);
    return extraout_RAX_10;
  }
  pUVar36 = (UnityEngine_Object_o *)
            UnityEngine_GameObject__GetComponentInChildren_object_(pSVar16[0x10].monitor,MethodInfo_EZSoftBone_GetComponentInChildren_EZSoftBone);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar42 = pUVar36;
  bVar13 = UnityEngine_Object__op_Inequality(pUVar36,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pSVar15 = (System_String_o *)CONCAT44(extraout_var_06,bVar13);
  if ((char)bVar13 != '\0') {
    if (pUVar36 == (UnityEngine_Object_o *)0x0) goto label_042edaae;
    pUVar28 = pUVar36[7].klass;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar13 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pUVar28,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    pSVar15 = (System_String_o *)CONCAT44(extraout_var_07,bVar13);
    if ((char)bVar13 != '\0') {
      pUVar28 = (UnityEngine_Object_c *)
                UnityEngine_Component__get_transform((UnityEngine_Component_o *)pSVar16,(MethodInfo *)0x0);
      pUVar36[7].klass = pUVar28;
      pSVar15 = (System_String_o *)il2cpp_runtime_helper_022b4080(pUVar36 + 7,pUVar28);
      return pSVar15;
    }
  }
  return pSVar15;
}


// Characters.HumanSetupTextures$$GetBodyColorTexture
// il2cpp: System_String_o* Characters_HumanSetupTextures__GetBodyColorTexture (Characters_HumanSetupTextures_o* __this, const MethodInfo* method);
// 0x42e9f20

System_String_o *
Characters_HumanSetupTextures__GetBodyColorTexture(Characters_HumanSetupTextures_o *__this,MethodInfo *method)

{
  void **ppvVar1;
  UnityEngine_Object_Fields *pUVar2;
  int iVar3;
  Settings_StringSetting_o *pSVar4;
  Characters_HumanSetupMeshes_o *pCVar5;
  Settings_ColorSetting_o *pSVar6;
  void *pvVar7;
  System_Collections_Generic_HashSet_object__o *pSVar8;
  Il2CppClass *pIVar9;
  long lVar10;
  char *pcVar11;
  bool_conflict bVar12;
  uint uVar13;
  int32_t iVar14;
  undefined8 in_RAX;
  System_String_o *pSVar15;
  System_String_o *pSVar16;
  long *plVar17;
  System_String_o *pSVar18;
  UnityEngine_Texture_o *pUVar19;
  Settings_HumanCustomSet_o *pSVar20;
  Utility_Color255_o *pUVar21;
  UnityEngine_GameObject_o *pUVar22;
  System_String_Fields *path;
  long *plVar23;
  long *path_00;
  Utility_Color255_o *pUVar24;
  undefined4 extraout_var;
  System_String_o *extraout_RAX;
  Il2CppObject *pIVar25;
  System_String_o *extraout_RAX_00;
  System_String_Fields SVar26;
  undefined4 extraout_var_00;
  System_String_o *extraout_RAX_01;
  undefined4 extraout_var_01;
  UnityEngine_Object_c *pUVar27;
  System_String_o *extraout_RAX_02;
  Characters_HumanSetup_o *pCVar28;
  Characters_HumanSetup_o *pCVar29;
  System_String_Fields SVar30;
  System_String_Fields SVar31;
  UnityEngine_Renderer_o *pUVar32;
  System_String_Fields method_00;
  System_String_Fields SVar33;
  System_String_Fields __this_00;
  System_String_o *extraout_RAX_03;
  System_String_Fields SVar34;
  System_String_o *extraout_RAX_04;
  UnityEngine_Object_o *pUVar35;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_SkinnedMeshRenderer_o *__this_02;
  UnityEngine_SkinnedMeshRenderer_o *__this_03;
  UnityEngine_Mesh_o *value;
  System_String_o *extraout_RAX_05;
  UnityEngine_Material_o *pUVar36;
  undefined4 extraout_var_02;
  System_String_o *extraout_RAX_06;
  System_String_o *extraout_RAX_07;
  System_String_c *pSVar37;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  undefined4 extraout_var_05;
  undefined4 extraout_var_06;
  undefined4 extraout_var_07;
  undefined4 extraout_var_08;
  System_String_o *extraout_RAX_08;
  undefined4 extraout_var_09;
  System_String_o *extraout_RAX_09;
  undefined4 extraout_var_10;
  System_String_o *extraout_RAX_10;
  System_String_Fields *in_RCX;
  undefined8 *puVar38;
  long lVar39;
  System_String_o *extraout_RDX;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_02;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *method_03;
  MethodInfo *extraout_RDX_06;
  MethodInfo *extraout_RDX_07;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  MethodInfo *method_07;
  MethodInfo *method_08;
  MethodInfo *method_09;
  MethodInfo *method_10;
  MethodInfo *method_11;
  MethodInfo *method_12;
  MethodInfo *method_13;
  MethodInfo *method_14;
  MethodInfo *method_15;
  MethodInfo *method_16;
  MethodInfo *method_17;
  MethodInfo *method_18;
  MethodInfo *method_19;
  MethodInfo *extraout_RDX_08;
  MethodInfo *extraout_RDX_09;
  MethodInfo *extraout_RDX_10;
  MethodInfo *extraout_RDX_11;
  MethodInfo *extraout_RDX_12;
  MethodInfo *extraout_RDX_13;
  MethodInfo *extraout_RDX_14;
  MethodInfo *extraout_RDX_15;
  MethodInfo *extraout_RDX_16;
  MethodInfo *extraout_RDX_17;
  MethodInfo *extraout_RDX_18;
  MethodInfo *extraout_RDX_19;
  MethodInfo *extraout_RDX_20;
  MethodInfo *method_20;
  MethodInfo *extraout_RDX_21;
  MethodInfo *extraout_RDX_22;
  MethodInfo *extraout_RDX_23;
  MethodInfo *pMVar40;
  undefined8 unaff_RBX;
  UnityEngine_Object_o *pUVar41;
  MethodInfo *method_21;
  System_String_Fields *pSVar42;
  System_String_o **ppSVar43;
  Utility_Color255_o *__this_04;
  System_String_Fields __this_05;
  System_Object_array *__this_06;
  System_String_Fields __this_07;
  UnityEngine_Object_c *pUVar44;
  MethodInfo *in_R8;
  MethodInfo *in_R9;
  uint uVar45;
  UnityEngine_Texture_c **value_00;
  float fVar46;
  float fVar47;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 in_XMM1_Da;
  undefined4 in_XMM1_Db;
  float fVar48;
  float fVar49;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined8 in_XMM2_Qa;
  undefined8 in_XMM3_Qa;
  undefined8 in_XMM4_Qa;
  undefined8 in_XMM5_Qa;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;
  UnityEngine_Color_o value_01;
  UnityEngine_Color_o value_02;
  UnityEngine_Color_o value_03;
  UnityEngine_Color_o value_04;
  UnityEngine_Color_o color;
  UnityEngine_Color_o color_00;
  UnityEngine_Color_o UVar50;
  UnityEngine_Color_o color_01;
  undefined4 uStack_2c4;
  long lStack_2c0;
  long *plStack_2b8;
  System_Object_array *pSStack_2b0;
  System_String_Fields SStack_2a8;
  System_String_Fields SStack_2a0;
  undefined1 auStack_298 [16];
  undefined1 auStack_288 [24];
  System_String_Fields SStack_270;
  System_String_Fields SStack_268;
  System_Object_array *pSStack_260;
  System_String_Fields SStack_258;
  Characters_HumanSetup_o *pCStack_250;
  System_String_Fields SStack_248;
  undefined1 auStack_240 [8];
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined1 auStack_230 [24];
  long *plStack_218;
  System_String_Fields SStack_210;
  System_Object_array *pSStack_208;
  System_String_Fields SStack_200;
  UnityEngine_Texture_o *pUStack_1f8;
  System_String_Fields SStack_1f0;
  System_String_o *pSStack_1e8;
  long *plStack_1e0;
  System_String_Fields SStack_1d8;
  System_Object_array *pSStack_1d0;
  System_String_Fields SStack_1c8;
  UnityEngine_Texture_o *pUStack_1c0;
  System_String_Fields SStack_1b8;
  System_String_o *pSStack_1b0;
  System_String_o *pSStack_1a8;
  Utility_Color255_o *pUStack_1a0;
  System_Object_array *pSStack_198;
  System_String_Fields SStack_190;
  UnityEngine_Texture_o *pUStack_188;
  Utility_Color255_o *pUStack_180;
  undefined8 uStack_178;
  Utility_Color255_o *pUStack_170;
  Characters_HumanSetup_o *pCStack_168;
  Characters_HumanSetup_o *pCStack_160;
  UnityEngine_Texture_o *pUStack_158;
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [24];
  System_String_o *pSStack_128;
  System_String_Fields SStack_120;
  long *plStack_118;
  Characters_HumanSetup_o *pCStack_110;
  UnityEngine_Texture_o *pUStack_108;
  System_String_o *pSStack_100;
  UnityEngine_Texture_o *pUStack_f0;
  System_String_o *pSStack_e8;
  System_String_c *pSStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 uStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined8 uStack_68;
  System_String_o *pSStack_50;
  
  pSVar42 = (System_String_Fields *)__this;
  if (g_data_057adec8 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Uniform/");
    il2cpp_runtime_helper_023445d0(&"_color_tex");
    il2cpp_runtime_helper_023445d0(&"Type");
    il2cpp_runtime_helper_023445d0(&"Casual/");
    pSVar42 = &"Uniform";
    il2cpp_runtime_helper_023445d0();
    g_data_057adec8 = '\x01';
  }
  pCVar28 = (__this->fields)._setup;
  if (((pCVar28 != (Characters_HumanSetup_o *)0x0) &&
      (pSVar42 = (System_String_Fields *)(pCVar28->fields).CurrentCostume,
      (System_String_o *)pSVar42 != (System_String_o *)0x0)) &&
     (method = (MethodInfo *)"Type",
     pSVar15 = (System_String_o *)
               (*(((System_String_o *)pSVar42)->klass->vtable)._7_CompareTo.methodPtr)
                         (pSVar42,"Type",
                          (((System_String_o *)pSVar42)->klass->vtable)._7_CompareTo.method),
     pSVar15 != (System_String_o *)0x0)) {
    in_RCX = (System_String_Fields *)pSVar15->klass;
    method = (((System_String_c *)in_RCX)->vtable)._9_GetTypeCode.method;
    pSVar16 = (System_String_o *)(*(((System_String_c *)in_RCX)->vtable)._9_GetTypeCode.methodPtr)();
    pSVar42 = (System_String_Fields *)pSVar15;
    if (pSVar16 != (System_String_o *)0x0) {
      in_RCX = &"Uniform";
      method = (MethodInfo *)"Uniform";
      bVar12 = System_String__StartsWith(pSVar16,(System_String_o *)"Uniform",(MethodInfo *)0x0);
      pCVar28 = (__this->fields)._setup;
      pSVar42 = (System_String_Fields *)pSVar16;
      if (((pCVar28 != (Characters_HumanSetup_o *)0x0) &&
          (pSVar42 = (System_String_Fields *)(pCVar28->fields).CurrentCostume,
          (System_String_o *)pSVar42 != (System_String_o *)0x0)) &&
         (method = (MethodInfo *)"_color_tex",
         plVar17 = (long *)(*(((System_String_o *)pSVar42)->klass->vtable)._7_CompareTo.methodPtr)
                                     (pSVar42,"_color_tex",
                                      (((System_String_o *)pSVar42)->klass->vtable)._7_CompareTo.method),
         plVar17 != (long *)0x0)) {
        pSVar15 = (System_String_o *)
                  (**(code **)(*plVar17 + 0x1c8))(plVar17,*(undefined8 *)(*plVar17 + 0x1d0));
        if ((char)bVar12 == '\0') {
          puVar38 = &"Casual/";
        }
        else {
          puVar38 = &"Uniform/";
        }
        pSVar15 = System_String__Concat_3ae5ba0((System_String_o *)*puVar38,pSVar15,(MethodInfo *)0x0);
        return pSVar15;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  ppSVar43 = (System_String_o **)pSVar42;
  if (g_data_057adec9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&"Pants/Shoes_Casual");
    il2cpp_runtime_helper_023445d0(&"_pants_tex");
    ppSVar43 = &"Pants/";
    il2cpp_runtime_helper_023445d0();
    g_data_057adec9 = '\x01';
  }
  SVar26 = ((System_String_o *)pSVar42)->fields;
  if (SVar26 != (System_String_Fields)0x0) {
    in_RCX = (System_String_Fields *)0x0;
    if ((*(long *)((long)SVar26 + 0x1c8) != 0) &&
       (in_RCX = *(System_String_Fields **)(*(long *)((long)SVar26 + 0x1c8) + 0x68),
       (System_String_c *)in_RCX != (System_String_c *)0x0)) {
      if (*(int *)((long)&(((System_String_c *)in_RCX)->_1).name + 4) == 1) {
        return "Pants/Shoes_Casual";
      }
      ppSVar43 = *(System_String_o ***)((long)SVar26 + 0x1d8);
      if (((System_String_o *)ppSVar43 != (System_String_o *)0x0) &&
         (method = (MethodInfo *)"_pants_tex",
         plVar17 = (long *)(*(((System_String_o *)ppSVar43)->klass->vtable)._7_CompareTo.methodPtr)
                                     (ppSVar43,"_pants_tex",
                                      (((System_String_o *)ppSVar43)->klass->vtable)._7_CompareTo.method),
         plVar17 != (long *)0x0)) {
        pSVar15 = (System_String_o *)
                  (**(code **)(*plVar17 + 0x1c8))(plVar17,*(undefined8 *)(*plVar17 + 0x1d0));
        pSVar15 = System_String__Concat_3ae5ba0("Pants/",pSVar15,(MethodInfo *)0x0);
        return pSVar15;
      }
    }
  }
  uStack_d8 = il2cpp_runtime_helper_022b2c90();
  pSStack_e8 = extraout_RDX;
  pSStack_e0 = (System_String_c *)in_RCX;
  uStack_c8 = in_XMM1_Da;
  uStack_c4 = in_XMM1_Db;
  uStack_b8 = in_XMM2_Qa;
  uStack_a8 = in_XMM3_Qa;
  uStack_98 = in_XMM4_Qa;
  uStack_88 = in_XMM5_Qa;
  uStack_78 = in_XMM6_Qa;
  uStack_68 = in_XMM7_Qa;
  pSStack_50 = (System_String_o *)pSVar42;
  if (g_data_057adea5 == '\0') {
    pSStack_100 = (System_String_o *)0x42ea198;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupMaterials);
    pSStack_100 = (System_String_o *)0x42ea1a4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Material_InstantiateAsset_Material);
    pSStack_100 = (System_String_o *)0x42ea1b0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    pSStack_100 = (System_String_o *)0x42ea1bc;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    pSStack_100 = (System_String_o *)0x42ea1c8;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
    pSStack_100 = (System_String_o *)0x42ea1d4;
    il2cpp_runtime_helper_023445d0(&"HumanCostumeMat");
    pSStack_100 = (System_String_o *)0x42ea1e0;
    il2cpp_runtime_helper_023445d0(&"_jacket_color");
    pSStack_100 = (System_String_o *)0x42ea1ec;
    il2cpp_runtime_helper_023445d0(&"_main_tex_mask");
    pSStack_100 = (System_String_o *)0x42ea1f8;
    il2cpp_runtime_helper_023445d0(&"_pants_tex");
    pSStack_100 = (System_String_o *)0x42ea204;
    il2cpp_runtime_helper_023445d0(&"_main_tex");
    pSStack_100 = (System_String_o *)0x42ea210;
    il2cpp_runtime_helper_023445d0(&"_color_tex");
    pSStack_100 = (System_String_o *)0x42ea21c;
    il2cpp_runtime_helper_023445d0(&"_boots_color");
    pSStack_100 = (System_String_o *)0x42ea228;
    il2cpp_runtime_helper_023445d0(&"_straps_color");
    pSStack_100 = (System_String_o *)0x42ea234;
    il2cpp_runtime_helper_023445d0(&"_pants_color");
    pSStack_100 = (System_String_o *)0x42ea240;
    il2cpp_runtime_helper_023445d0(&"_shirt_color");
    g_data_057adea5 = '\x01';
  }
  if (*(int *)((long)TypeInfo_ResourcePaths + 0xe4) == 0) {
    pSStack_100 = (System_String_o *)0x42ea264;
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar42 = &TypeInfo_ResourcePaths;
  pSVar15 = *(System_String_o **)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
  if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
    pSStack_100 = (System_String_o *)0x42ea293;
    il2cpp_runtime_helper_02337ed0();
  }
  plVar17 = &TypeInfo_HumanSetupMaterials;
  pSStack_100 = (System_String_o *)0x42ea2b6;
  pSVar16 = System_String__Concat_3ae5ba0
                      (*(System_String_o **)(*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 0x28),"HumanCostumeMat",
                       (MethodInfo *)0x0);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    pSStack_100 = (System_String_o *)0x42ea2d1;
    il2cpp_runtime_helper_02337ed0();
  }
  pSStack_100 = (System_String_o *)0x42ea2eb;
  pSVar16 = (System_String_o *)
            ApplicationManagers_ResourceManager__InstantiateAsset_object_(pSVar15,pSVar16,1,MethodInfo_Material_InstantiateAsset_Material);
  pSVar15 = *(System_String_o **)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
  pSStack_100 = (System_String_o *)0x42ea315;
  pSVar18 = System_String__Concat_3ae5ba0
                      (*(System_String_o **)(*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 0x20),
                       (System_String_o *)ppSVar43,(MethodInfo *)0x0);
  pSStack_100 = (System_String_o *)0x42ea324;
  pUVar19 = (UnityEngine_Texture_o *)
            ApplicationManagers_ResourceManager__LoadAsset(pSVar15,pSVar18,0,(MethodInfo *)0x0);
  value_00 = &TypeInfo_Texture2D;
  if ((pUVar19 == (UnityEngine_Texture_o *)0x0) || (pUVar19->klass == TypeInfo_Texture2D)) {
    pSVar15 = *(System_String_o **)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
    pSStack_100 = (System_String_o *)0x42ea368;
    pUStack_f0 = pUVar19;
    pSVar18 = System_String__Concat_3ae5ba0
                        (*(System_String_o **)(*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 0x20),
                         (System_String_o *)method,(MethodInfo *)0x0);
    pSStack_100 = (System_String_o *)0x42ea377;
    method = (MethodInfo *)ApplicationManagers_ResourceManager__LoadAsset(pSVar15,pSVar18,0,(MethodInfo *)0x0)
    ;
    if (((System_String_Fields)method != (System_String_Fields)0x0) &&
       (*(UnityEngine_Texture_c **)method != TypeInfo_Texture2D)) goto label_042ea55f;
    pSVar15 = *(System_String_o **)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
    pSStack_100 = (System_String_o *)0x42ea3b5;
    pSVar18 = System_String__Concat_3ae5ba0
                        (*(System_String_o **)(*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 0x20),pSStack_e8,
                         (MethodInfo *)0x0);
    pSStack_100 = (System_String_o *)0x42ea3c4;
    value_00 = (UnityEngine_Texture_c **)
               ApplicationManagers_ResourceManager__LoadAsset(pSVar15,pSVar18,0,(MethodInfo *)0x0);
    if (((UnityEngine_Texture_o *)value_00 != (UnityEngine_Texture_o *)0x0) &&
       (((UnityEngine_Texture_o *)value_00)->klass != TypeInfo_Texture2D)) goto label_042ea567;
    pSVar15 = *(System_String_o **)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
    pSStack_100 = (System_String_o *)0x42ea408;
    pSVar18 = System_String__Concat_3ae5ba0
                        (*(System_String_o **)(*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 0x20),
                         (System_String_o *)pSStack_e0,(MethodInfo *)0x0);
    pSStack_100 = (System_String_o *)0x42ea417;
    pSVar42 = (System_String_Fields *)
              ApplicationManagers_ResourceManager__LoadAsset(pSVar15,pSVar18,0,(MethodInfo *)0x0);
    if (((Characters_HumanSetup_o *)pSVar42 == (Characters_HumanSetup_o *)0x0) ||
       ((UnityEngine_Texture_c *)((Characters_HumanSetup_o *)pSVar42)->klass == TypeInfo_Texture2D)) {
      if (pSVar16 != (System_String_o *)0x0) {
        pSStack_100 = (System_String_o *)0x42ea45c;
        UnityEngine_Material__SetTexture
                  ((UnityEngine_Material_o *)pSVar16,"_main_tex",pUStack_f0,(MethodInfo *)0x0);
        pSStack_100 = (System_String_o *)0x42ea473;
        UnityEngine_Material__SetTexture
                  ((UnityEngine_Material_o *)pSVar16,"_main_tex_mask",(UnityEngine_Texture_o *)method,
                   (MethodInfo *)0x0);
        pSStack_100 = (System_String_o *)0x42ea48a;
        UnityEngine_Material__SetTexture
                  ((UnityEngine_Material_o *)pSVar16,(System_String_o *)"_color_tex",
                   (UnityEngine_Texture_o *)value_00,(MethodInfo *)0x0);
        pSStack_100 = (System_String_o *)0x42ea4a1;
        UnityEngine_Material__SetTexture
                  ((UnityEngine_Material_o *)pSVar16,(System_String_o *)"_pants_tex",
                   (UnityEngine_Texture_o *)pSVar42,(MethodInfo *)0x0);
        value_01.fields.a = (float)uStack_c4;
        value_01.fields.b = (float)uStack_c8;
        pSStack_100 = (System_String_o *)0x42ea4bf;
        value_01.fields.r = (float)(undefined4)uStack_d8;
        value_01.fields.g = (float)uStack_d8._4_4_;
        UnityEngine_Material__SetColor
                  ((UnityEngine_Material_o *)pSVar16,"_shirt_color",value_01,(MethodInfo *)0x0);
        pSStack_100 = (System_String_o *)0x42ea4dd;
        value_02.fields.b = (float)(undefined4)uStack_a8;
        value_02.fields.a = (float)uStack_a8._4_4_;
        value_02.fields.r = (float)(undefined4)uStack_b8;
        value_02.fields.g = (float)uStack_b8._4_4_;
        UnityEngine_Material__SetColor
                  ((UnityEngine_Material_o *)pSVar16,"_straps_color",value_02,(MethodInfo *)0x0);
        pSStack_100 = (System_String_o *)0x42ea4fb;
        value_03.fields.b = (float)(undefined4)uStack_88;
        value_03.fields.a = (float)uStack_88._4_4_;
        value_03.fields.r = (float)(undefined4)uStack_98;
        value_03.fields.g = (float)uStack_98._4_4_;
        UnityEngine_Material__SetColor
                  ((UnityEngine_Material_o *)pSVar16,"_pants_color",value_03,(MethodInfo *)0x0);
        pSStack_100 = (System_String_o *)0x42ea51f;
        value_04.fields.b = (float)(undefined4)uStack_68;
        value_04.fields.a = (float)uStack_68._4_4_;
        value_04.fields.r = (float)(undefined4)uStack_78;
        value_04.fields.g = (float)uStack_78._4_4_;
        UnityEngine_Material__SetColor
                  ((UnityEngine_Material_o *)pSVar16,"_jacket_color",value_04,(MethodInfo *)0x0);
        UVar50.fields._8_8_ = unaff_RBX;
        UVar50.fields._0_8_ = in_RAX;
        pSStack_100 = (System_String_o *)0x42ea53d;
        UnityEngine_Material__SetColor
                  ((UnityEngine_Material_o *)pSVar16,"_boots_color",UVar50,(MethodInfo *)0x0);
        return pSVar16;
      }
      pSStack_100 = (System_String_o *)0x42ea557;
      pUVar19 = (UnityEngine_Texture_o *)il2cpp_runtime_helper_022b2c90();
      goto label_042ea557;
    }
  }
  else {
label_042ea557:
    pSStack_100 = (System_String_o *)0x42ea55f;
    il2cpp_runtime_helper_022b2fd0(pUVar19);
label_042ea55f:
    pSStack_100 = (System_String_o *)0x42ea567;
    il2cpp_runtime_helper_022b2fd0(method);
label_042ea567:
    pSStack_100 = (System_String_o *)0x42ea56f;
    il2cpp_runtime_helper_022b2fd0(value_00);
  }
  pSStack_100 = (System_String_o *)0x42ea577;
  pCVar28 = (Characters_HumanSetup_o *)pSVar42;
  il2cpp_runtime_helper_022b2fd0();
  plStack_118 = &TypeInfo_HumanSetupMaterials;
  pSStack_128 = pSVar16;
  SStack_120 = (System_String_Fields)method;
  pCStack_110 = (Characters_HumanSetup_o *)pSVar42;
  pUStack_108 = (UnityEngine_Texture_o *)value_00;
  pSStack_100 = pSVar15;
  if (g_data_057ade92 == '\0') {
    pUStack_158 = (UnityEngine_Texture_o *)0x42ea8c5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEffectPresets);
    pUStack_158 = (UnityEngine_Texture_o *)0x42ea8d1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ClothFactory);
    pUStack_158 = (UnityEngine_Texture_o *)0x42ea8dd;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponentsInChildren_Renderer);
    pUStack_158 = (UnityEngine_Texture_o *)0x42ea8e9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupMaterials);
    pUStack_158 = (UnityEngine_Texture_o *)0x42ea8f5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    pUStack_158 = (UnityEngine_Texture_o *)0x42ea901;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    pUStack_158 = (UnityEngine_Texture_o *)0x42ea90d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    pUStack_158 = (UnityEngine_Texture_o *)0x42ea919;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    pUStack_158 = (UnityEngine_Texture_o *)0x42ea925;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color255_get_Value);
    pUStack_158 = (UnityEngine_Texture_o *)0x42ea931;
    il2cpp_runtime_helper_023445d0(&"IgnoreColor");
    g_data_057ade92 = '\x01';
    pUVar21 = (Utility_Color255_o *)(pCVar28->fields)._part_hair;
    if (g_data_057adea2 != '\0') goto label_042ea5b3;
label_042ea94d:
    pUStack_158 = (UnityEngine_Texture_o *)0x42ea959;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    pUVar21 = (Utility_Color255_o *)(pCVar28->fields)._part_hair;
    if (g_data_057adea2 == '\0') goto label_042ea94d;
label_042ea5b3:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    pUStack_158 = (UnityEngine_Texture_o *)0x42ea97d;
    il2cpp_runtime_helper_02337ed0();
  }
  path_00 = &TypeInfo_Object;
  pUStack_158 = (UnityEngine_Texture_o *)0x42ea5d7;
  __this_04 = pUVar21;
  bVar12 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pUVar21,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 == '\0') {
    if ((char)(pCVar28->fields).IsDeadBody == '\0') goto label_042ea9ad;
label_042ea5ee:
    pSVar20 = (pCVar28->fields).CustomSet;
    if (pSVar20 != (Settings_HumanCustomSet_o *)0x0) goto label_042ea5ff;
label_042eabbd:
    pUStack_158 = (UnityEngine_Texture_o *)0x42eabc2;
    il2cpp_runtime_helper_022b2c90();
    path = (System_String_Fields *)plVar17;
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      pUStack_158 = (UnityEngine_Texture_o *)0x42ea994;
      il2cpp_runtime_helper_02337ed0();
    }
    pUStack_158 = (UnityEngine_Texture_o *)0x42ea99e;
    __this_04 = pUVar21;
    UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)pUVar21,(MethodInfo *)0x0);
    if ((char)(pCVar28->fields).IsDeadBody != '\0') goto label_042ea5ee;
label_042ea9ad:
    pUVar21 = (Utility_Color255_o *)(pCVar28->fields)._part_hair_1;
    if (*(int *)(TypeInfo_ClothFactory + 0xe4) == 0) {
      pUStack_158 = (UnityEngine_Texture_o *)0x42ea9cd;
      il2cpp_runtime_helper_02337ed0();
    }
    pUStack_158 = (UnityEngine_Texture_o *)0x42ea9d7;
    __this_04 = pUVar21;
    ClothFactory__DisposeObject((UnityEngine_GameObject_o *)pUVar21,(MethodInfo *)0x0);
    pSVar20 = (pCVar28->fields).CustomSet;
    if (pSVar20 == (Settings_HumanCustomSet_o *)0x0) goto label_042eabbd;
label_042ea5ff:
    pSVar4 = (pSVar20->fields).HairEffect;
    if (pSVar4 == (Settings_StringSetting_o *)0x0) goto label_042eabbd;
    pUVar21 = (Utility_Color255_o *)(pSVar4->fields)._value;
    if (*(int *)(TypeInfo_CharacterEffectPresets + 0xe4) == 0) {
      pUStack_158 = (UnityEngine_Texture_o *)0x42ea62b;
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar40 = (MethodInfo *)0x0;
    pUStack_158 = (UnityEngine_Texture_o *)0x42ea635;
    uVar13 = PatreonEffects_CharacterEffectPresets__ParseOrDefault
                       ((System_String_o *)pUVar21,(MethodInfo *)0x0);
    pCVar5 = (pCVar28->fields)._meshes;
    __this_04 = (Utility_Color255_o *)0x0;
    if (pCVar5 == (Characters_HumanSetupMeshes_o *)0x0) goto label_042eabbd;
    pSVar42 = (System_String_Fields *)(ulong)uVar13;
    pUStack_158 = (UnityEngine_Texture_o *)0x42ea64e;
    pUVar21 = (Utility_Color255_o *)Characters_HumanSetupMeshes__GetHairMesh(pCVar5,pMVar40);
    pMVar40 = (MethodInfo *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    pUStack_158 = (UnityEngine_Texture_o *)0x42ea673;
    bVar12 = System_String__op_Inequality
                       ((System_String_o *)pUVar21,(System_String_o *)pMVar40,(MethodInfo *)0x0);
    if ((char)bVar12 == '\0') {
label_042eaa10:
      path_00 = &g_data_057b9b70;
      pCVar5 = (pCVar28->fields)._meshes;
      __this_04 = (Utility_Color255_o *)0x0;
      if (pCVar5 != (Characters_HumanSetupMeshes_o *)0x0) {
        pUStack_158 = (UnityEngine_Texture_o *)0x42eaa26;
        pUVar21 = (Utility_Color255_o *)Characters_HumanSetupMeshes__GetHairClothMesh(pCVar5,pMVar40);
        pUStack_158 = (UnityEngine_Texture_o *)0x42eaa44;
        __this_04 = pUVar21;
        bVar12 = System_String__op_Inequality
                           ((System_String_o *)pUVar21,
                            (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
        if (((char)bVar12 == '\0') || ((char)(pCVar28->fields).IsDeadBody != '\0')) {
          return (System_String_o *)CONCAT44(extraout_var,bVar12);
        }
        path_00 = (long *)(pCVar28->fields)._textures;
        if ((Utility_Color255_o *)path_00 != (Utility_Color255_o *)0x0) {
          if (g_data_057adec5 == '\0') {
            __this_04 = (Utility_Color255_o *)&"Texture";
            pUStack_158 = (UnityEngine_Texture_o *)0x42eaa88;
            il2cpp_runtime_helper_023445d0();
            g_data_057adec5 = '\x01';
          }
          if ((*(System_String_Fields *)&((Utility_Color255_o *)path_00)->fields != (System_String_Fields)0x0)
             && (__this_04 = *(Utility_Color255_o **)
                              ((long)*(System_String_Fields *)&((Utility_Color255_o *)path_00)->fields + 0x1e0
                              ), __this_04 != (Utility_Color255_o *)0x0)) {
            pUStack_158 = (UnityEngine_Texture_o *)0x42eaac6;
            plVar23 = (long *)(*(((System_String_c *)__this_04->klass)->vtable)._7_CompareTo.methodPtr)
                                        (__this_04,"Texture",
                                         (((System_String_c *)__this_04->klass)->vtable)._7_CompareTo.method);
            if (plVar23 != (long *)0x0) {
              pMVar40 = *(MethodInfo **)(*plVar23 + 0x1d0);
              pUStack_158 = (UnityEngine_Texture_o *)0x42eaae2;
              path_00 = (long *)(**(code **)(*plVar23 + 0x1c8))(plVar23);
              if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
                pUStack_158 = (UnityEngine_Texture_o *)0x42eaafd;
                il2cpp_runtime_helper_02337ed0();
              }
              pUStack_158 = (UnityEngine_Texture_o *)0x42eab05;
              __this_04 = (Utility_Color255_o *)path_00;
              value_00 = (UnityEngine_Texture_c **)
                         Characters_HumanSetupMaterials__GetHairMaterial((System_String_o *)path_00,pMVar40);
              pSVar20 = (pCVar28->fields).CustomSet;
              if ((pSVar20 != (Settings_HumanCustomSet_o *)0x0) &&
                 (pSVar6 = (pSVar20->fields).HairColor, pSVar6 != (Settings_ColorSetting_o *)0x0)) {
                pUVar24 = (pSVar6->fields)._value;
                __this_04 = (Utility_Color255_o *)0x0;
                if (pUVar24 != (Utility_Color255_o *)0x0) {
                  pUVar22 = (pCVar28->fields)._mount_cloth;
                  pUStack_158 = (UnityEngine_Texture_o *)0x42eab45;
                  UVar50 = Utility_Color255__ToColor(pUVar24,(MethodInfo *)0x0);
                  fVar46 = UVar50.fields.r;
                  fVar47 = UVar50.fields.g;
                  fVar48 = UVar50.fields.b;
                  fVar49 = UVar50.fields.a;
                  if (*(int *)(TypeInfo_ClothFactory + 0xe4) == 0) {
                    auStack_150._8_4_ = extraout_XMM0_Dc;
                    auStack_150._0_8_ = UVar50.fields._0_8_;
                    auStack_150._12_4_ = extraout_XMM0_Dd;
                    auStack_140._8_4_ = in_XMM1_Dc;
                    auStack_140._0_8_ = UVar50.fields._8_8_;
                    auStack_140._12_4_ = in_XMM1_Dd;
                    pUStack_158 = (UnityEngine_Texture_o *)0x42eab66;
                    il2cpp_runtime_helper_02337ed0();
                    fVar46 = (float)auStack_150._0_4_;
                    fVar47 = (float)auStack_150._4_4_;
                    fVar48 = (float)auStack_140._0_4_;
                    fVar49 = (float)auStack_140._4_4_;
                  }
                  pUStack_158 = (UnityEngine_Texture_o *)0x42eab7f;
                  color.fields.g = fVar47;
                  color.fields.r = fVar46;
                  color.fields.a = fVar49;
                  color.fields.b = fVar48;
                  pUVar22 = ClothFactory__GetHair
                                      (pUVar22,(System_String_o *)pUVar21,(UnityEngine_Material_o *)value_00,
                                       color,(MethodInfo *)0x0);
                  (pCVar28->fields)._part_hair_1 = pUVar22;
                  pUStack_158 = (UnityEngine_Texture_o *)0x42eab97;
                  il2cpp_runtime_helper_022b4080(&(pCVar28->fields)._part_hair_1,pUVar22);
                  Characters_HumanSetup__ApplyCharacterEffectToPart
                            (pCVar28,(pCVar28->fields)._part_hair_1,(int32_t)pSVar42,1,in_R8);
                  return extraout_RAX;
                }
              }
            }
          }
        }
      }
      goto label_042eabbd;
    }
    if (*(int *)((long)TypeInfo_ResourcePaths + 0xe4) == 0) {
      pUStack_158 = (UnityEngine_Texture_o *)0x42ea694;
      il2cpp_runtime_helper_02337ed0();
    }
    value_00 = (UnityEngine_Texture_c **)&(pCVar28->fields)._part_hair;
    path_00 = *(long **)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      pUStack_158 = (UnityEngine_Texture_o *)0x42ea6c3;
      il2cpp_runtime_helper_02337ed0();
    }
    auStack_150._0_4_ = uVar13;
    pUStack_158 = (UnityEngine_Texture_o *)0x42ea6e1;
    pUVar22 = (UnityEngine_GameObject_o *)
              ApplicationManagers_ResourceManager__InstantiateAsset_object_
                        ((System_String_o *)path_00,(System_String_o *)pUVar21,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
    (pCVar28->fields)._part_hair = pUVar22;
    pUStack_158 = (UnityEngine_Texture_o *)0x42ea6f4;
    pCVar29 = (Characters_HumanSetup_o *)value_00;
    il2cpp_runtime_helper_022b4080(value_00,pUVar22);
    pUStack_158 = (UnityEngine_Texture_o *)0x42ea70b;
    Characters_HumanSetup__AttachToMount
              (pCVar29,(pCVar28->fields)._part_hair,(pCVar28->fields)._part_head,0,in_R8);
    __this_04 = (Utility_Color255_o *)(pCVar28->fields)._part_hair;
    if (__this_04 == (Utility_Color255_o *)0x0) goto label_042eabbd;
    pUStack_158 = (UnityEngine_Texture_o *)0x42ea72b;
    path = (System_String_Fields *)
           UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                     ((UnityEngine_GameObject_o *)__this_04,MethodInfo_Renderer_GetComponentsInChildren_Renderer);
    if ((System_Object_array *)path == (System_Object_array *)0x0) goto label_042eabbd;
    iVar3 = (int)((System_Object_array *)path)->max_length;
    plVar17 = (long *)path;
    if (iVar3 < 1) {
label_042ea9ed:
      pMVar40 = (MethodInfo *)(pCVar28->fields)._part_hair;
      pSVar42 = (System_String_Fields *)(ulong)(uint)auStack_150._0_4_;
      pUStack_158 = (UnityEngine_Texture_o *)0x42eaa09;
      Characters_HumanSetup__ApplyCharacterEffectToPart
                (pCVar28,(UnityEngine_GameObject_o *)pMVar40,auStack_150._0_4_,1,in_R8);
      goto label_042eaa10;
    }
    pSVar42 = (System_String_Fields *)0x0;
    value_00 = (UnityEngine_Texture_c **)&"Texture";
    if (iVar3 != 0) {
      do {
        path_00 = (long *)(pCVar28->fields)._textures;
        if ((Utility_Color255_o *)path_00 == (Utility_Color255_o *)0x0) goto label_042eabbd;
        pUVar21 = (Utility_Color255_o *)((System_Object_array *)path)->m_Items[(int)pSVar42];
        if (g_data_057adec5 == '\0') {
          __this_04 = (Utility_Color255_o *)&"Texture";
          pUStack_158 = (UnityEngine_Texture_o *)0x42ea7a4;
          il2cpp_runtime_helper_023445d0();
          g_data_057adec5 = '\x01';
        }
        if ((*(System_String_Fields *)&((Utility_Color255_o *)path_00)->fields == (System_String_Fields)0x0)
           || (__this_04 = *(Utility_Color255_o **)
                            ((long)*(System_String_Fields *)&((Utility_Color255_o *)path_00)->fields + 0x1e0),
              __this_04 == (Utility_Color255_o *)0x0)) goto label_042eabbd;
        pUStack_158 = (UnityEngine_Texture_o *)0x42ea7db;
        plVar23 = (long *)(*(((System_String_c *)__this_04->klass)->vtable)._7_CompareTo.methodPtr)
                                    (__this_04,"Texture",
                                     (((System_String_c *)__this_04->klass)->vtable)._7_CompareTo.method);
        if (plVar23 == (long *)0x0) goto label_042eabbd;
        pMVar40 = *(MethodInfo **)(*plVar23 + 0x1d0);
        pUStack_158 = (UnityEngine_Texture_o *)0x42ea7f7;
        path_00 = (long *)(**(code **)(*plVar23 + 0x1c8))(plVar23);
        if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
          pUStack_158 = (UnityEngine_Texture_o *)0x42ea812;
          il2cpp_runtime_helper_02337ed0();
        }
        pUStack_158 = (UnityEngine_Texture_o *)0x42ea81a;
        __this_04 = (Utility_Color255_o *)path_00;
        pUVar36 = Characters_HumanSetupMaterials__GetHairMaterial((System_String_o *)path_00,pMVar40);
        if (pUVar21 == (Utility_Color255_o *)0x0) goto label_042eabbd;
        pUStack_158 = (UnityEngine_Texture_o *)0x42ea830;
        UnityEngine_Renderer__set_material((UnityEngine_Renderer_o *)pUVar21,pUVar36,(MethodInfo *)0x0);
        pUStack_158 = (UnityEngine_Texture_o *)0x42ea83a;
        __this_04 = pUVar21;
        pUVar24 = (Utility_Color255_o *)
                  UnityEngine_Object__get_name((UnityEngine_Object_o *)pUVar21,(MethodInfo *)0x0);
        if (pUVar24 == (Utility_Color255_o *)0x0) goto label_042eabbd;
        pUStack_158 = (UnityEngine_Texture_o *)0x42ea857;
        bVar12 = System_String__Contains((System_String_o *)pUVar24,"IgnoreColor",(MethodInfo *)0x0);
        if ((char)bVar12 == '\0') {
          pUStack_158 = (UnityEngine_Texture_o *)0x42ea869;
          __this_04 = pUVar21;
          pUVar21 = (Utility_Color255_o *)
                    UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)pUVar21,(MethodInfo *)0x0);
          pSVar20 = (pCVar28->fields).CustomSet;
          if (((pSVar20 == (Settings_HumanCustomSet_o *)0x0) ||
              (pSVar6 = (pSVar20->fields).HairColor, pSVar6 == (Settings_ColorSetting_o *)0x0)) ||
             (__this_04 = (pSVar6->fields)._value, __this_04 == (Utility_Color255_o *)0x0)) goto label_042eabbd;
          pUStack_158 = (UnityEngine_Texture_o *)0x42ea8a1;
          UVar50 = Utility_Color255__ToColor(__this_04,(MethodInfo *)0x0);
          if (pUVar21 == (Utility_Color255_o *)0x0) goto label_042eabbd;
          pUStack_158 = (UnityEngine_Texture_o *)0x42ea8b4;
          pUVar24 = pUVar21;
          UnityEngine_Material__set_color((UnityEngine_Material_o *)pUVar21,UVar50,(MethodInfo *)0x0);
        }
        uVar45 = (int)pSVar42 + 1;
        pSVar42 = (System_String_Fields *)(ulong)uVar45;
        uVar13 = (uint)((System_Object_array *)path)->max_length;
        if ((int)uVar13 <= (int)uVar45) goto label_042ea9ed;
        __this_04 = pUVar24;
      } while (uVar45 < uVar13);
    }
  }
  pUStack_158 = (UnityEngine_Texture_o *)0x42eabc7;
  uStack_178 = il2cpp_runtime_helper_022b2ca0();
  pUStack_170 = pUVar21;
  pCStack_168 = pCVar28;
  pCStack_160 = (Characters_HumanSetup_o *)pSVar42;
  pUStack_158 = (UnityEngine_Texture_o *)value_00;
  if (g_data_057ade96 == '\0') {
    pUStack_180 = (Utility_Color255_o *)0x42ead45;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    pUStack_180 = (Utility_Color255_o *)0x42ead51;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    pUStack_180 = (Utility_Color255_o *)0x42ead5d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    pUStack_180 = (Utility_Color255_o *)0x42ead69;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    pUStack_180 = (Utility_Color255_o *)0x42ead75;
    il2cpp_runtime_helper_023445d0(&"Eye");
    g_data_057ade96 = '\x01';
    SVar26 = *(System_String_Fields *)&__this_04[8].fields;
    if (g_data_057adea2 != '\0') goto label_042eabfd;
label_042ead91:
    pUStack_180 = (Utility_Color255_o *)0x42ead9d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    SVar26 = *(System_String_Fields *)&__this_04[8].fields;
    if (g_data_057adea2 == '\0') goto label_042ead91;
label_042eabfd:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    pUStack_180 = (Utility_Color255_o *)0x42eadc0;
    il2cpp_runtime_helper_02337ed0();
  }
  pUStack_180 = (Utility_Color255_o *)0x42eac20;
  bVar12 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)SVar26,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 == '\0') {
    if (*(int *)((long)TypeInfo_ResourcePaths + 0xe4) == 0) goto label_042eadf7;
label_042eac3f:
    pvVar7 = __this_04[0xb].monitor;
    SVar30 = TypeInfo_ResourcePaths;
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      pUStack_180 = (Utility_Color255_o *)0x42eadd6;
      il2cpp_runtime_helper_02337ed0();
    }
    pUStack_180 = (Utility_Color255_o *)0x42eade0;
    UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)SVar26,(MethodInfo *)0x0);
    if (*(int *)((long)TypeInfo_ResourcePaths + 0xe4) != 0) goto label_042eac3f;
label_042eadf7:
    pUStack_180 = (Utility_Color255_o *)0x42eadfc;
    il2cpp_runtime_helper_02337ed0();
    pvVar7 = __this_04[0xb].monitor;
    SVar30 = TypeInfo_ResourcePaths;
  }
  pSVar15 = (System_String_o *)0x0;
  TypeInfo_ResourcePaths = SVar30;
  if (pvVar7 != (void *)0x0) {
    SVar26 = *(System_String_Fields *)(*(long *)((long)SVar30 + 0xb8) + 8);
    if (g_data_057adeb7 == '\0') {
      pUStack_180 = (Utility_Color255_o *)0x42eac70;
      il2cpp_runtime_helper_023445d0(&"char_eyes");
      g_data_057adeb7 = '\x01';
    }
    value_00 = (UnityEngine_Texture_c **)&__this_04[8].fields;
    pUStack_180 = (Utility_Color255_o *)0x42eac94;
    pSVar15 = System_String__Concat_3ae5ba0
                        (*(System_String_o **)((long)pvVar7 + 0x38),"char_eyes",(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      pUStack_180 = (Utility_Color255_o *)0x42eacaf;
      il2cpp_runtime_helper_02337ed0();
    }
    pUStack_180 = (Utility_Color255_o *)0x42eacc9;
    pIVar25 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                        ((System_String_o *)SVar26,pSVar15,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
    *(Il2CppObject **)&__this_04[8].fields = pIVar25;
    pUStack_180 = (Utility_Color255_o *)0x42eacdc;
    SVar30 = (System_String_Fields)value_00;
    il2cpp_runtime_helper_022b4080(value_00,pIVar25);
    pUStack_180 = (Utility_Color255_o *)0x42eacf3;
    Characters_HumanSetup__AttachToMount
              ((Characters_HumanSetup_o *)SVar30,*(UnityEngine_GameObject_o **)&__this_04[8].fields,
               (UnityEngine_GameObject_o *)*(System_String_Fields *)&__this_04[10].monitor,0,in_R8);
    if ((__this_04[0xe].monitor != (void *)0x0) &&
       (lVar39 = *(long *)((long)__this_04[0xe].monitor + 0x40), lVar39 != 0)) {
      Characters_HumanSetup__SetFacialTexture
                ((Characters_HumanSetup_o *)SVar30,*(UnityEngine_GameObject_o **)&__this_04[8].fields,
                 "Eye",*(int32_t *)(lVar39 + 0x14),0,in_R9);
      return extraout_RAX_00;
    }
  }
  pUStack_180 = (Utility_Color255_o *)0x42eae15;
  pSStack_1b0 = (System_String_o *)il2cpp_runtime_helper_022b2c90();
  pSStack_1a8 = pSVar15;
  pUStack_1a0 = __this_04;
  pSStack_198 = (System_Object_array *)path;
  SStack_190 = SVar26;
  pUStack_188 = (UnityEngine_Texture_o *)value_00;
  pUStack_180 = (Utility_Color255_o *)path_00;
  if (g_data_057ade97 == '\0') {
    SStack_1b8._stringLength = 0x42eb0a3;
    SStack_1b8._firstChar = 0;
    SStack_1b8._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    SStack_1b8._stringLength = 0x42eb0af;
    SStack_1b8._firstChar = 0;
    SStack_1b8._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetup);
    SStack_1b8._stringLength = 0x42eb0bb;
    SStack_1b8._firstChar = 0;
    SStack_1b8._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    SStack_1b8._stringLength = 0x42eb0c7;
    SStack_1b8._firstChar = 0;
    SStack_1b8._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    SStack_1b8._stringLength = 0x42eb0d3;
    SStack_1b8._firstChar = 0;
    SStack_1b8._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    SStack_1b8._stringLength = 0x42eb0df;
    SStack_1b8._firstChar = 0;
    SStack_1b8._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    SStack_1b8._stringLength = 0x42eb0eb;
    SStack_1b8._firstChar = 0;
    SStack_1b8._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&"None");
    SStack_1b8._stringLength = 0x42eb0f7;
    SStack_1b8._firstChar = 0;
    SStack_1b8._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&"Face");
    g_data_057ade97 = '\x01';
    SVar34 = *(System_String_Fields *)((long)SVar30 + 0x118);
    if (g_data_057adea2 != '\0') goto label_042eae50;
label_042eb113:
    SStack_1b8._stringLength = 0x42eb11f;
    SStack_1b8._firstChar = 0;
    SStack_1b8._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    SVar34 = *(System_String_Fields *)((long)SVar30 + 0x118);
    if (g_data_057adea2 == '\0') goto label_042eb113;
label_042eae50:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    SStack_1b8._stringLength = 0x42eb142;
    SStack_1b8._firstChar = 0;
    SStack_1b8._6_2_ = 0;
    il2cpp_runtime_helper_02337ed0();
  }
  plVar17 = &TypeInfo_Object;
  SStack_1b8._stringLength = 0x42eae73;
  SStack_1b8._firstChar = 0;
  SStack_1b8._6_2_ = 0;
  SVar31 = SVar34;
  bVar12 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)SVar34,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 != '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      SStack_1b8._stringLength = 0x42eae88;
      SStack_1b8._firstChar = 0;
      SStack_1b8._6_2_ = 0;
      il2cpp_runtime_helper_02337ed0();
    }
    SStack_1b8._stringLength = 0x42eae92;
    SStack_1b8._firstChar = 0;
    SStack_1b8._6_2_ = 0;
    SVar31 = SVar34;
    UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)SVar34,(MethodInfo *)0x0);
  }
  if ((*(long *)((long)SVar30 + 0x1c8) != 0) &&
     (lVar39 = *(long *)(*(long *)((long)SVar30 + 0x1c8) + 0x48), lVar39 != 0)) {
    pSVar15 = *(System_String_o **)(lVar39 + 0x18);
    SVar31._stringLength = 0;
    SVar31._firstChar = 0;
    SVar31._6_2_ = 0;
    if (pSVar15 != (System_String_o *)0x0) {
      SStack_1b8._stringLength = 0x42eaec9;
      SStack_1b8._firstChar = 0;
      SStack_1b8._6_2_ = 0;
      SVar26 = (System_String_Fields)System_String__Substring(pSVar15,4,(MethodInfo *)0x0);
      SStack_1b8._stringLength = 0x42eaee0;
      SStack_1b8._firstChar = 0;
      SStack_1b8._6_2_ = 0;
      SVar31 = SVar26;
      bVar12 = System_String__op_Inequality
                         ((System_String_o *)SVar26,(System_String_o *)"None",(MethodInfo *)0x0);
      if ((char)bVar12 == '\0') {
        return (System_String_o *)CONCAT44(extraout_var_00,bVar12);
      }
      if ((*(long *)((long)SVar30 + 0x1c8) != 0) &&
         (lVar39 = *(long *)(*(long *)((long)SVar30 + 0x1c8) + 0x48), lVar39 != 0)) {
        SVar34 = *(System_String_Fields *)(lVar39 + 0x18);
        plVar17 = &TypeInfo_HumanSetup;
        if (*(int *)(TypeInfo_HumanSetup + 0xe4) == 0) {
          SStack_1b8._stringLength = 0x42eaf22;
          SStack_1b8._firstChar = 0;
          SStack_1b8._6_2_ = 0;
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar8 = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_HumanSetup + 0xb8) + 0x40);
        SVar31._stringLength = 0;
        SVar31._firstChar = 0;
        SVar31._6_2_ = 0;
        if (pSVar8 != (System_Collections_Generic_HashSet_object__o *)0x0) {
          SStack_1b8._stringLength = 0x42eaf4b;
          SStack_1b8._firstChar = 0;
          SStack_1b8._6_2_ = 0;
          uVar13 = System_Collections_Generic_HashSet_object___Contains
                             (pSVar8,(Il2CppObject *)SVar34,MethodInfo_Boolean_Contains);
          value_00 = (UnityEngine_Texture_c **)(ulong)uVar13;
          if ((char)uVar13 == '\0') {
            SVar34 = **(System_String_Fields **)(g_data_057b9c00 + 0xb8);
            iVar3 = *(int *)((long)TypeInfo_ResourcePaths + 0xe4);
          }
          else {
            iVar3 = *(int *)((long)TypeInfo_ResourcePaths + 0xe4);
          }
          if (iVar3 == 0) {
            SStack_1b8._stringLength = 0x42eb18a;
            SStack_1b8._firstChar = 0;
            SStack_1b8._6_2_ = 0;
            il2cpp_runtime_helper_02337ed0();
            lVar39 = *(long *)((long)SVar30 + 0x168);
            SVar31 = TypeInfo_ResourcePaths;
          }
          else {
            lVar39 = *(long *)((long)SVar30 + 0x168);
            SVar31 = TypeInfo_ResourcePaths;
          }
          plVar17 = (long *)0x0;
          TypeInfo_ResourcePaths = SVar31;
          if (lVar39 != 0) {
            pSStack_1b0 = *(System_String_o **)
                           (*(UnityEngine_Object_StaticFields **)((long)SVar31 + 0xb8) + 2);
            if (g_data_057adeb8 == '\0') {
              SStack_1b8._stringLength = 0x42eafa2;
              SStack_1b8._firstChar = 0;
              SStack_1b8._6_2_ = 0;
              il2cpp_runtime_helper_023445d0(&"char_face");
              g_data_057adeb8 = '\x01';
            }
            SStack_1b8._stringLength = 0x42eafcb;
            SStack_1b8._firstChar = 0;
            SStack_1b8._6_2_ = 0;
            bVar12 = System_String__op_Inequality
                               ((System_String_o *)SVar34,
                                (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
            if ((char)bVar12 == '\0') {
              SVar34 = "char_face";
            }
            pCVar28 = (Characters_HumanSetup_o *)((long)SVar30 + 0x118);
            SStack_1b8._stringLength = 0x42eafef;
            SStack_1b8._firstChar = 0;
            SStack_1b8._6_2_ = 0;
            pSVar15 = System_String__Concat_3ae5ba0
                                (*(System_String_o **)(lVar39 + 0x38),(System_String_o *)SVar34,
                                 (MethodInfo *)0x0);
            if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
              SStack_1b8._stringLength = 0x42eb00a;
              SStack_1b8._firstChar = 0;
              SStack_1b8._6_2_ = 0;
              il2cpp_runtime_helper_02337ed0();
            }
            SStack_1b8._stringLength = 0x42eb025;
            SStack_1b8._firstChar = 0;
            SStack_1b8._6_2_ = 0;
            pIVar25 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                                (pSStack_1b0,pSVar15,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
            *(Il2CppObject **)((long)SVar30 + 0x118) = pIVar25;
            SStack_1b8._stringLength = 0x42eb038;
            SStack_1b8._firstChar = 0;
            SStack_1b8._6_2_ = 0;
            il2cpp_runtime_helper_022b4080(pCVar28,pIVar25);
            lVar39 = 0x148;
            if ((char)uVar13 != '\0') {
              lVar39 = 0x78;
            }
            SStack_1b8._stringLength = 0x42eb060;
            SStack_1b8._firstChar = 0;
            SStack_1b8._6_2_ = 0;
            Characters_HumanSetup__AttachToMount
                      (pCVar28,*(UnityEngine_GameObject_o **)((long)SVar30 + 0x118),
                       *(UnityEngine_GameObject_o **)((long)SVar30 + lVar39),uVar13 & 0xff,in_R8);
            pUVar22 = *(UnityEngine_GameObject_o **)((long)SVar30 + 0x118);
            SStack_1b8._stringLength = 0x42eb072;
            SStack_1b8._firstChar = 0;
            SStack_1b8._6_2_ = 0;
            iVar14 = System_Int32__Parse((System_String_o *)SVar26,(MethodInfo *)0x0);
            Characters_HumanSetup__SetFacialTexture
                      ((Characters_HumanSetup_o *)SVar26,pUVar22,"Face",iVar14,uVar13 & 0xff,in_R9);
            return extraout_RAX_01;
          }
        }
      }
    }
  }
  SStack_1b8._stringLength = 0x42eb1a3;
  SStack_1b8._firstChar = 0;
  SStack_1b8._6_2_ = 0;
  pSStack_1e8 = (System_String_o *)il2cpp_runtime_helper_022b2c90();
  plStack_1e0 = plVar17;
  SStack_1d8 = SVar30;
  pSStack_1d0 = (System_Object_array *)path;
  SStack_1c8 = SVar26;
  pUStack_1c0 = (UnityEngine_Texture_o *)value_00;
  SStack_1b8 = SVar34;
  if (g_data_057ade98 == '\0') {
    SStack_1f0._stringLength = 0x42eb433;
    SStack_1f0._firstChar = 0;
    SStack_1f0._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    SStack_1f0._stringLength = 0x42eb43f;
    SStack_1f0._firstChar = 0;
    SStack_1f0._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetup);
    SStack_1f0._stringLength = 0x42eb44b;
    SStack_1f0._firstChar = 0;
    SStack_1f0._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    SStack_1f0._stringLength = 0x42eb457;
    SStack_1f0._firstChar = 0;
    SStack_1f0._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    SStack_1f0._stringLength = 0x42eb463;
    SStack_1f0._firstChar = 0;
    SStack_1f0._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    SStack_1f0._stringLength = 0x42eb46f;
    SStack_1f0._firstChar = 0;
    SStack_1f0._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    SStack_1f0._stringLength = 0x42eb47b;
    SStack_1f0._firstChar = 0;
    SStack_1f0._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&"None");
    SStack_1f0._stringLength = 0x42eb487;
    SStack_1f0._firstChar = 0;
    SStack_1f0._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&"Glass");
    g_data_057ade98 = '\x01';
    SVar30 = (System_String_Fields)((UnityEngine_Object_o *)((long)SVar31 + 0x120))->klass;
    if (g_data_057adea2 != '\0') goto label_042eb1e0;
label_042eb4a3:
    SStack_1f0._stringLength = 0x42eb4af;
    SStack_1f0._firstChar = 0;
    SStack_1f0._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    SVar30 = (System_String_Fields)((UnityEngine_Object_o *)((long)SVar31 + 0x120))->klass;
    if (g_data_057adea2 == '\0') goto label_042eb4a3;
label_042eb1e0:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    SStack_1f0._stringLength = 0x42eb4d2;
    SStack_1f0._firstChar = 0;
    SStack_1f0._6_2_ = 0;
    il2cpp_runtime_helper_02337ed0();
  }
  plVar17 = &TypeInfo_Object;
  SVar34._stringLength = 0;
  SVar34._firstChar = 0;
  SVar34._6_2_ = 0;
  SStack_1f0._stringLength = 0x42eb203;
  SStack_1f0._firstChar = 0;
  SStack_1f0._6_2_ = 0;
  __this_05 = SVar30;
  bVar12 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)SVar30,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 != '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      SStack_1f0._stringLength = 0x42eb218;
      SStack_1f0._firstChar = 0;
      SStack_1f0._6_2_ = 0;
      il2cpp_runtime_helper_02337ed0();
    }
    SVar34._stringLength = 0;
    SVar34._firstChar = 0;
    SVar34._6_2_ = 0;
    SStack_1f0._stringLength = 0x42eb222;
    SStack_1f0._firstChar = 0;
    SStack_1f0._6_2_ = 0;
    __this_05 = SVar30;
    UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)SVar30,(MethodInfo *)0x0);
  }
  pUVar27 = ((UnityEngine_Object_o *)((long)SVar31 + 0x1c8))->klass;
  if ((pUVar27 != (UnityEngine_Object_c *)0x0) &&
     (pIVar9 = (pUVar27->_1).declaringType, pIVar9 != (Il2CppClass *)0x0)) {
    pSVar15 = (System_String_o *)(pIVar9->_1).namespaze;
    __this_05._stringLength = 0;
    __this_05._firstChar = 0;
    __this_05._6_2_ = 0;
    if (pSVar15 != (System_String_o *)0x0) {
      SStack_1f0._stringLength = 0x42eb259;
      SStack_1f0._firstChar = 0;
      SStack_1f0._6_2_ = 0;
      SVar26 = (System_String_Fields)System_String__Substring(pSVar15,5,(MethodInfo *)0x0);
      SStack_1f0._stringLength = 0x42eb270;
      SStack_1f0._firstChar = 0;
      SStack_1f0._6_2_ = 0;
      SVar34 = "None";
      __this_05 = SVar26;
      bVar12 = System_String__op_Inequality
                         ((System_String_o *)SVar26,(System_String_o *)"None",(MethodInfo *)0x0);
      if ((char)bVar12 == '\0') {
        return (System_String_o *)CONCAT44(extraout_var_01,bVar12);
      }
      pUVar27 = ((UnityEngine_Object_o *)((long)SVar31 + 0x1c8))->klass;
      if ((pUVar27 != (UnityEngine_Object_c *)0x0) &&
         (pIVar9 = (pUVar27->_1).declaringType, pIVar9 != (Il2CppClass *)0x0)) {
        SVar30 = (System_String_Fields)(pIVar9->_1).namespaze;
        plVar17 = &TypeInfo_HumanSetup;
        if (*(int *)(TypeInfo_HumanSetup + 0xe4) == 0) {
          SStack_1f0._stringLength = 0x42eb2b2;
          SStack_1f0._firstChar = 0;
          SStack_1f0._6_2_ = 0;
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar8 = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_HumanSetup + 0xb8) + 0x40);
        __this_05._stringLength = 0;
        __this_05._firstChar = 0;
        __this_05._6_2_ = 0;
        if (pSVar8 != (System_Collections_Generic_HashSet_object__o *)0x0) {
          SStack_1f0._stringLength = 0x42eb2db;
          SStack_1f0._firstChar = 0;
          SStack_1f0._6_2_ = 0;
          SVar34 = SVar30;
          uVar13 = System_Collections_Generic_HashSet_object___Contains
                             (pSVar8,(Il2CppObject *)SVar30,MethodInfo_Boolean_Contains);
          value_00 = (UnityEngine_Texture_c **)(ulong)uVar13;
          if ((char)uVar13 == '\0') {
            SVar30 = **(System_String_Fields **)(g_data_057b9c00 + 0xb8);
            iVar3 = *(int *)((long)TypeInfo_ResourcePaths + 0xe4);
          }
          else {
            iVar3 = *(int *)((long)TypeInfo_ResourcePaths + 0xe4);
          }
          if (iVar3 == 0) {
            SStack_1f0._stringLength = 0x42eb51a;
            SStack_1f0._firstChar = 0;
            SStack_1f0._6_2_ = 0;
            il2cpp_runtime_helper_02337ed0();
            pUVar27 = ((UnityEngine_Object_o *)((long)SVar31 + 0x168))->klass;
            __this_05 = TypeInfo_ResourcePaths;
          }
          else {
            pUVar27 = ((UnityEngine_Object_o *)((long)SVar31 + 0x168))->klass;
            __this_05 = TypeInfo_ResourcePaths;
          }
          plVar17 = (long *)0x0;
          TypeInfo_ResourcePaths = __this_05;
          if (pUVar27 != (UnityEngine_Object_c *)0x0) {
            pSStack_1e8 = *(System_String_o **)((long)*(System_String_Fields *)((long)__this_05 + 0xb8) + 8);
            if (g_data_057adeb9 == '\0') {
              SStack_1f0._stringLength = 0x42eb332;
              SStack_1f0._firstChar = 0;
              SStack_1f0._6_2_ = 0;
              il2cpp_runtime_helper_023445d0(&"char_glasses");
              g_data_057adeb9 = '\x01';
            }
            SStack_1f0._stringLength = 0x42eb35b;
            SStack_1f0._firstChar = 0;
            SStack_1f0._6_2_ = 0;
            bVar12 = System_String__op_Inequality
                               ((System_String_o *)SVar30,
                                (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
            if ((char)bVar12 == '\0') {
              SVar30 = "char_glasses";
            }
            pCVar28 = (Characters_HumanSetup_o *)((long)SVar31 + 0x120);
            SStack_1f0._stringLength = 0x42eb37f;
            SStack_1f0._firstChar = 0;
            SStack_1f0._6_2_ = 0;
            pSVar15 = System_String__Concat_3ae5ba0
                                (*(System_String_o **)&(pUVar27->_1).this_arg.bits,(System_String_o *)SVar30,
                                 (MethodInfo *)0x0);
            if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
              SStack_1f0._stringLength = 0x42eb39a;
              SStack_1f0._firstChar = 0;
              SStack_1f0._6_2_ = 0;
              il2cpp_runtime_helper_02337ed0();
            }
            SStack_1f0._stringLength = 0x42eb3b5;
            SStack_1f0._firstChar = 0;
            SStack_1f0._6_2_ = 0;
            pUVar27 = (UnityEngine_Object_c *)
                      ApplicationManagers_ResourceManager__InstantiateAsset_object_
                                (pSStack_1e8,pSVar15,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
            ((UnityEngine_Object_o *)((long)SVar31 + 0x120))->klass = pUVar27;
            SStack_1f0._stringLength = 0x42eb3c8;
            SStack_1f0._firstChar = 0;
            SStack_1f0._6_2_ = 0;
            il2cpp_runtime_helper_022b4080(pCVar28,pUVar27);
            lVar39 = 0x148;
            if ((char)uVar13 != '\0') {
              lVar39 = 0x78;
            }
            SStack_1f0._stringLength = 0x42eb3f0;
            SStack_1f0._firstChar = 0;
            SStack_1f0._6_2_ = 0;
            Characters_HumanSetup__AttachToMount
                      (pCVar28,(UnityEngine_GameObject_o *)
                               ((UnityEngine_Object_o *)((long)SVar31 + 0x120))->klass,
                       *(UnityEngine_GameObject_o **)((long)SVar31 + lVar39),uVar13 & 0xff,in_R8);
            pUVar27 = ((UnityEngine_Object_o *)((long)SVar31 + 0x120))->klass;
            SStack_1f0._stringLength = 0x42eb402;
            SStack_1f0._firstChar = 0;
            SStack_1f0._6_2_ = 0;
            iVar14 = System_Int32__Parse((System_String_o *)SVar26,(MethodInfo *)0x0);
            Characters_HumanSetup__SetFacialTexture
                      ((Characters_HumanSetup_o *)SVar26,(UnityEngine_GameObject_o *)pUVar27,"Glass",
                       iVar14,uVar13 & 0xff,in_R9);
            return extraout_RAX_02;
          }
        }
      }
    }
  }
  SStack_1f0._stringLength = 0x42eb533;
  SStack_1f0._firstChar = 0;
  SStack_1f0._6_2_ = 0;
  il2cpp_runtime_helper_022b2c90();
  plStack_218 = plVar17;
  SStack_210 = SVar31;
  pSStack_208 = (System_Object_array *)path;
  SStack_200 = SVar26;
  pUStack_1f8 = (UnityEngine_Texture_o *)value_00;
  SStack_1f0 = SVar30;
  if (g_data_057ade9e == '\0') {
    SStack_248._stringLength = 0x42ebdc7;
    SStack_248._firstChar = 0;
    SStack_248._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ClothFactory);
    SStack_248._stringLength = 0x42ebdd3;
    SStack_248._firstChar = 0;
    SStack_248._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponent_Renderer);
    SStack_248._stringLength = 0x42ebddf;
    SStack_248._firstChar = 0;
    SStack_248._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupMaterials);
    SStack_248._stringLength = 0x42ebdeb;
    SStack_248._firstChar = 0;
    SStack_248._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    SStack_248._stringLength = 0x42ebdf7;
    SStack_248._firstChar = 0;
    SStack_248._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    SStack_248._stringLength = 0x42ebe03;
    SStack_248._firstChar = 0;
    SStack_248._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    SStack_248._stringLength = 0x42ebe0f;
    SStack_248._firstChar = 0;
    SStack_248._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color255_get_Value);
    SStack_248._stringLength = 0x42ebe1b;
    SStack_248._firstChar = 0;
    SStack_248._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&"Type");
    SStack_248._stringLength = 0x42ebe27;
    SStack_248._firstChar = 0;
    SStack_248._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&"Uniform");
    g_data_057ade9e = '\x01';
    pUVar35 = *(UnityEngine_Object_o **)((long)__this_05 + 0x158);
    if (g_data_057adea2 != '\0') goto label_042eb576;
label_042ebe43:
    SStack_248._stringLength = 0x42ebe4f;
    SStack_248._firstChar = 0;
    SStack_248._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    pUVar35 = *(UnityEngine_Object_o **)((long)__this_05 + 0x158);
    if (g_data_057adea2 == '\0') goto label_042ebe43;
label_042eb576:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    SStack_248._stringLength = 0x42ebe72;
    SStack_248._firstChar = 0;
    SStack_248._6_2_ = 0;
    il2cpp_runtime_helper_02337ed0();
  }
  SStack_248._stringLength = 0x42eb599;
  SStack_248._firstChar = 0;
  SStack_248._6_2_ = 0;
  bVar12 = UnityEngine_Object__op_Inequality(pUVar35,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 == '\0') {
    pUVar35 = *(UnityEngine_Object_o **)((long)__this_05 + 200);
    if (g_data_057adea2 == '\0') goto label_042ebea7;
label_042eb5b6:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      SStack_248._stringLength = 0x42ebe88;
      SStack_248._firstChar = 0;
      SStack_248._6_2_ = 0;
      il2cpp_runtime_helper_02337ed0();
    }
    SStack_248._stringLength = 0x42ebe92;
    SStack_248._firstChar = 0;
    SStack_248._6_2_ = 0;
    UnityEngine_Object__Destroy_4e01c60(pUVar35,(MethodInfo *)0x0);
    pUVar35 = *(UnityEngine_Object_o **)((long)__this_05 + 200);
    if (g_data_057adea2 != '\0') goto label_042eb5b6;
label_042ebea7:
    SStack_248._stringLength = 0x42ebeb3;
    SStack_248._firstChar = 0;
    SStack_248._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    SStack_248._stringLength = 0x42ebecf;
    SStack_248._firstChar = 0;
    SStack_248._6_2_ = 0;
    il2cpp_runtime_helper_02337ed0();
  }
  SStack_248._stringLength = 0x42eb5d2;
  SStack_248._firstChar = 0;
  SStack_248._6_2_ = 0;
  bVar12 = UnityEngine_Object__op_Inequality(pUVar35,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 == '\0') {
    pUVar35 = *(UnityEngine_Object_o **)((long)__this_05 + 0xd0);
    if (g_data_057adea2 == '\0') goto label_042ebf04;
label_042eb5ef:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      SStack_248._stringLength = 0x42ebee5;
      SStack_248._firstChar = 0;
      SStack_248._6_2_ = 0;
      il2cpp_runtime_helper_02337ed0();
    }
    SStack_248._stringLength = 0x42ebeef;
    SStack_248._firstChar = 0;
    SStack_248._6_2_ = 0;
    UnityEngine_Object__Destroy_4e01c60(pUVar35,(MethodInfo *)0x0);
    pUVar35 = *(UnityEngine_Object_o **)((long)__this_05 + 0xd0);
    if (g_data_057adea2 != '\0') goto label_042eb5ef;
label_042ebf04:
    SStack_248._stringLength = 0x42ebf10;
    SStack_248._firstChar = 0;
    SStack_248._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    SStack_248._stringLength = 0x42ebf2c;
    SStack_248._firstChar = 0;
    SStack_248._6_2_ = 0;
    il2cpp_runtime_helper_02337ed0();
  }
  SStack_248._stringLength = 0x42eb60b;
  SStack_248._firstChar = 0;
  SStack_248._6_2_ = 0;
  bVar12 = UnityEngine_Object__op_Inequality(pUVar35,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 == '\0') {
    pUVar35 = *(UnityEngine_Object_o **)((long)__this_05 + 0xd8);
    if (g_data_057adea2 == '\0') goto label_042ebf61;
label_042eb628:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      SStack_248._stringLength = 0x42ebf42;
      SStack_248._firstChar = 0;
      SStack_248._6_2_ = 0;
      il2cpp_runtime_helper_02337ed0();
    }
    SStack_248._stringLength = 0x42ebf4c;
    SStack_248._firstChar = 0;
    SStack_248._6_2_ = 0;
    UnityEngine_Object__Destroy_4e01c60(pUVar35,(MethodInfo *)0x0);
    pUVar35 = *(UnityEngine_Object_o **)((long)__this_05 + 0xd8);
    if (g_data_057adea2 != '\0') goto label_042eb628;
label_042ebf61:
    SStack_248._stringLength = 0x42ebf6d;
    SStack_248._firstChar = 0;
    SStack_248._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    SStack_248._stringLength = 0x42ebf89;
    SStack_248._firstChar = 0;
    SStack_248._6_2_ = 0;
    il2cpp_runtime_helper_02337ed0();
  }
  SStack_248._stringLength = 0x42eb644;
  SStack_248._firstChar = 0;
  SStack_248._6_2_ = 0;
  bVar12 = UnityEngine_Object__op_Inequality(pUVar35,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 == '\0') {
    pUVar35 = *(UnityEngine_Object_o **)((long)__this_05 + 0xe0);
    if (g_data_057adea2 == '\0') goto label_042ebfbe;
label_042eb661:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      SStack_248._stringLength = 0x42ebf9f;
      SStack_248._firstChar = 0;
      SStack_248._6_2_ = 0;
      il2cpp_runtime_helper_02337ed0();
    }
    SStack_248._stringLength = 0x42ebfa9;
    SStack_248._firstChar = 0;
    SStack_248._6_2_ = 0;
    UnityEngine_Object__Destroy_4e01c60(pUVar35,(MethodInfo *)0x0);
    pUVar35 = *(UnityEngine_Object_o **)((long)__this_05 + 0xe0);
    if (g_data_057adea2 != '\0') goto label_042eb661;
label_042ebfbe:
    SStack_248._stringLength = 0x42ebfca;
    SStack_248._firstChar = 0;
    SStack_248._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    SStack_248._stringLength = 0x42ebfe6;
    SStack_248._firstChar = 0;
    SStack_248._6_2_ = 0;
    il2cpp_runtime_helper_02337ed0();
  }
  SStack_248._stringLength = 0x42eb67d;
  SStack_248._firstChar = 0;
  SStack_248._6_2_ = 0;
  bVar12 = UnityEngine_Object__op_Inequality(pUVar35,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 == '\0') {
    pUVar35 = *(UnityEngine_Object_o **)((long)__this_05 + 0xf8);
    if (g_data_057adea2 == '\0') goto label_042ec01b;
label_042eb69a:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      SStack_248._stringLength = 0x42ebffc;
      SStack_248._firstChar = 0;
      SStack_248._6_2_ = 0;
      il2cpp_runtime_helper_02337ed0();
    }
    SStack_248._stringLength = 0x42ec006;
    SStack_248._firstChar = 0;
    SStack_248._6_2_ = 0;
    UnityEngine_Object__Destroy_4e01c60(pUVar35,(MethodInfo *)0x0);
    pUVar35 = *(UnityEngine_Object_o **)((long)__this_05 + 0xf8);
    if (g_data_057adea2 != '\0') goto label_042eb69a;
label_042ec01b:
    SStack_248._stringLength = 0x42ec027;
    SStack_248._firstChar = 0;
    SStack_248._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    SStack_248._stringLength = 0x42ec043;
    SStack_248._firstChar = 0;
    SStack_248._6_2_ = 0;
    il2cpp_runtime_helper_02337ed0();
  }
  SStack_248._stringLength = 0x42eb6b6;
  SStack_248._firstChar = 0;
  SStack_248._6_2_ = 0;
  bVar12 = UnityEngine_Object__op_Inequality(pUVar35,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 == '\0') {
    SVar30 = *(System_String_Fields *)((long)__this_05 + 0x100);
    if (g_data_057adea2 == '\0') goto label_042ec078;
label_042eb6d3:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      SStack_248._stringLength = 0x42ec059;
      SStack_248._firstChar = 0;
      SStack_248._6_2_ = 0;
      il2cpp_runtime_helper_02337ed0();
    }
    SStack_248._stringLength = 0x42ec063;
    SStack_248._firstChar = 0;
    SStack_248._6_2_ = 0;
    UnityEngine_Object__Destroy_4e01c60(pUVar35,(MethodInfo *)0x0);
    SVar30 = *(System_String_Fields *)((long)__this_05 + 0x100);
    if (g_data_057adea2 != '\0') goto label_042eb6d3;
label_042ec078:
    SStack_248._stringLength = 0x42ec084;
    SStack_248._firstChar = 0;
    SStack_248._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    SStack_248._stringLength = 0x42ec0a0;
    SStack_248._firstChar = 0;
    SStack_248._6_2_ = 0;
    il2cpp_runtime_helper_02337ed0();
  }
  method_00._stringLength = 0;
  method_00._firstChar = 0;
  method_00._6_2_ = 0;
  SStack_248._stringLength = 0x42eb6ef;
  SStack_248._firstChar = 0;
  SStack_248._6_2_ = 0;
  bVar12 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)SVar30,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 != '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      SStack_248._stringLength = 0x42eb704;
      SStack_248._firstChar = 0;
      SStack_248._6_2_ = 0;
      il2cpp_runtime_helper_02337ed0();
    }
    method_00._stringLength = 0;
    method_00._firstChar = 0;
    method_00._6_2_ = 0;
    SStack_248._stringLength = 0x42eb70e;
    SStack_248._firstChar = 0;
    SStack_248._6_2_ = 0;
    UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)SVar30,(MethodInfo *)0x0);
  }
  if (*(char *)((long)__this_05 + 0x1e8) == '\0') {
    SVar30 = *(System_String_Fields *)((long)__this_05 + 0x108);
    if (g_data_057adea2 == '\0') {
      SStack_248._stringLength = 0x42eb736;
      SStack_248._firstChar = 0;
      SStack_248._6_2_ = 0;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057adea2 = '\x01';
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      SStack_248._stringLength = 0x42eb74e;
      SStack_248._firstChar = 0;
      SStack_248._6_2_ = 0;
      il2cpp_runtime_helper_02337ed0();
    }
    method_00._stringLength = 0;
    method_00._firstChar = 0;
    method_00._6_2_ = 0;
    SStack_248._stringLength = 0x42eb75a;
    SStack_248._firstChar = 0;
    SStack_248._6_2_ = 0;
    bVar12 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)SVar30,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar12 != '\0') {
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        SStack_248._stringLength = 0x42eb76f;
        SStack_248._firstChar = 0;
        SStack_248._6_2_ = 0;
        il2cpp_runtime_helper_02337ed0();
      }
      method_00._stringLength = 0;
      method_00._firstChar = 0;
      method_00._6_2_ = 0;
      SStack_248._stringLength = 0x42eb779;
      SStack_248._firstChar = 0;
      SStack_248._6_2_ = 0;
      UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)SVar30,(MethodInfo *)0x0);
    }
  }
  SStack_248._stringLength = 0x42eb781;
  SStack_248._firstChar = 0;
  SStack_248._6_2_ = 0;
  Characters_HumanSetup__CreateCape((Characters_HumanSetup_o *)__this_05,(MethodInfo *)method_00);
  __this_07._stringLength = 0;
  __this_07._firstChar = 0;
  __this_07._6_2_ = 0;
  pCVar28 = (Characters_HumanSetup_o *)&TypeInfo_Object;
  if (*(Characters_HumanSetupMeshes_o **)((long)__this_05 + 0x168) != (Characters_HumanSetupMeshes_o *)0x0) {
    SStack_248._stringLength = 0x42eb79c;
    SStack_248._firstChar = 0;
    SStack_248._6_2_ = 0;
    pCVar28 = (Characters_HumanSetup_o *)
              Characters_HumanSetupMeshes__GetChestMesh
                        (*(Characters_HumanSetupMeshes_o **)((long)__this_05 + 0x168),1,method_01);
    method_00 = **(System_String_Fields **)(g_data_057b9c00 + 0xb8);
    SStack_248._stringLength = 0x42eb7c1;
    SStack_248._firstChar = 0;
    SStack_248._6_2_ = 0;
    bVar12 = System_String__op_Inequality
                       ((System_String_o *)pCVar28,(System_String_o *)method_00,(MethodInfo *)0x0);
    pMVar40 = extraout_RDX_00;
    SVar26 = (System_String_Fields)&g_data_057b9b70;
    if ((char)bVar12 == '\0') {
label_042eb8c9:
      __this_07._stringLength = 0;
      __this_07._firstChar = 0;
      __this_07._6_2_ = 0;
      if (*(Characters_HumanSetupMeshes_o **)((long)__this_05 + 0x168) != (Characters_HumanSetupMeshes_o *)0x0
         ) {
        SStack_248._stringLength = 0x42eb8e4;
        SStack_248._firstChar = 0;
        SStack_248._6_2_ = 0;
        SVar30 = (System_String_Fields)
                 Characters_HumanSetupMeshes__GetChestMesh
                           (*(Characters_HumanSetupMeshes_o **)((long)__this_05 + 0x168),2,pMVar40);
        method_00 = **(System_String_Fields **)(g_data_057b9c00 + 0xb8);
        SStack_248._stringLength = 0x42eb902;
        SStack_248._firstChar = 0;
        SStack_248._6_2_ = 0;
        bVar12 = System_String__op_Inequality
                           ((System_String_o *)SVar30,(System_String_o *)method_00,(MethodInfo *)0x0);
        pMVar40 = extraout_RDX_04;
        if ((char)bVar12 == '\0') {
label_042eb9c7:
          __this_07._stringLength = 0;
          __this_07._firstChar = 0;
          __this_07._6_2_ = 0;
          if (*(Characters_HumanSetupMeshes_o **)((long)__this_05 + 0x168) !=
              (Characters_HumanSetupMeshes_o *)0x0) {
            SStack_248._stringLength = 0x42eb9e2;
            SStack_248._firstChar = 0;
            SStack_248._6_2_ = 0;
            SVar30 = (System_String_Fields)
                     Characters_HumanSetupMeshes__GetChestMesh
                               (*(Characters_HumanSetupMeshes_o **)((long)__this_05 + 0x168),3,pMVar40);
            method_00 = **(System_String_Fields **)(g_data_057b9c00 + 0xb8);
            SStack_248._stringLength = 0x42eba00;
            SStack_248._firstChar = 0;
            SStack_248._6_2_ = 0;
            bVar12 = System_String__op_Inequality
                               ((System_String_o *)SVar30,(System_String_o *)method_00,(MethodInfo *)0x0);
            if (((char)bVar12 != '\0') && (*(char *)((long)__this_05 + 0x1e8) == '\0')) {
              pCVar28 = *(Characters_HumanSetup_o **)((long)__this_05 + 0x160);
              if (*(int *)(TypeInfo_ClothFactory + 0xe4) == 0) {
                SStack_248._stringLength = 0x42eba2f;
                SStack_248._firstChar = 0;
                SStack_248._6_2_ = 0;
                il2cpp_runtime_helper_02337ed0();
              }
              SStack_248._stringLength = 0x42eba3f;
              SStack_248._firstChar = 0;
              SStack_248._6_2_ = 0;
              method_00 = (System_String_Fields)
                          ClothFactory__GetCape
                                    ((UnityEngine_GameObject_o *)pCVar28,(System_String_o *)SVar30,
                                     (UnityEngine_Material_o *)SVar34,(MethodInfo *)0x0);
              *(System_String_Fields *)((long)__this_05 + 0x108) = method_00;
              SStack_248._stringLength = 0x42eba57;
              SStack_248._firstChar = 0;
              SStack_248._6_2_ = 0;
              il2cpp_runtime_helper_022b4080((long)__this_05 + 0x108);
            }
            __this_07._stringLength = 0;
            __this_07._firstChar = 0;
            __this_07._6_2_ = 0;
            if (*(Characters_HumanSetupMeshes_o **)((long)__this_05 + 0x168) !=
                (Characters_HumanSetupMeshes_o *)0x0) {
              SVar30 = (System_String_Fields)((long)__this_05 + 0x158);
              SStack_248._stringLength = 0x42eba75;
              SStack_248._firstChar = 0;
              SStack_248._6_2_ = 0;
              pSVar15 = Characters_HumanSetupMeshes__GetBodyMesh
                                  (*(Characters_HumanSetupMeshes_o **)((long)__this_05 + 0x168),
                                   (MethodInfo *)method_00);
              SStack_248._stringLength = 0x42eba80;
              SStack_248._firstChar = 0;
              SStack_248._6_2_ = 0;
              method_00 = (System_String_Fields)
                          Characters_HumanSetup__GenerateCloth
                                    ((Characters_HumanSetup_o *)__this_05,pSVar15,method_03);
              *(System_String_Fields *)((long)__this_05 + 0x158) = method_00;
              SStack_248._stringLength = 0x42eba93;
              SStack_248._firstChar = 0;
              SStack_248._6_2_ = 0;
              il2cpp_runtime_helper_022b4080(SVar30);
              __this_07 = *(System_String_Fields *)((long)__this_05 + 0x158);
              if (__this_07 != (System_String_Fields)0x0) {
                SStack_248._stringLength = 0x42ebab3;
                SStack_248._firstChar = 0;
                SStack_248._6_2_ = 0;
                method_00 = MethodInfo_Renderer_GetComponent_Renderer;
                pUVar32 = (UnityEngine_Renderer_o *)
                          UnityEngine_GameObject__GetComponent_object_
                                    ((UnityEngine_GameObject_o *)__this_07,(MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer)
                ;
                pCVar28 = (Characters_HumanSetup_o *)&MethodInfo_Renderer_GetComponent_Renderer;
                if (pUVar32 != (UnityEngine_Renderer_o *)0x0) {
                  SStack_248._stringLength = 0x42ebac9;
                  SStack_248._firstChar = 0;
                  SStack_248._6_2_ = 0;
                  method_00 = SVar34;
                  UnityEngine_Renderer__set_material
                            (pUVar32,(UnityEngine_Material_o *)SVar34,(MethodInfo *)0x0);
                  __this_07._stringLength = 0;
                  __this_07._firstChar = 0;
                  __this_07._6_2_ = 0;
                  if (*(Characters_HumanSetupTextures_o **)((long)__this_05 + 0x170) !=
                      (Characters_HumanSetupTextures_o *)0x0) {
                    SStack_248._stringLength = 0x42ebadf;
                    SStack_248._firstChar = 0;
                    SStack_248._6_2_ = 0;
                    SVar30 = (System_String_Fields)
                             Characters_HumanSetupTextures__GetBrandTexture
                                       (*(Characters_HumanSetupTextures_o **)((long)__this_05 + 0x170),
                                        (MethodInfo *)method_00);
                    pMVar40 = extraout_RDX_06;
                    if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
                      SStack_248._stringLength = 0x42ebafb;
                      SStack_248._firstChar = 0;
                      SStack_248._6_2_ = 0;
                      il2cpp_runtime_helper_02337ed0();
                      pMVar40 = extraout_RDX_07;
                    }
                    method_00._stringLength = 0;
                    method_00._firstChar = 0;
                    method_00._6_2_ = 0;
                    SStack_248._stringLength = 0x42ebb05;
                    SStack_248._firstChar = 0;
                    SStack_248._6_2_ = 0;
                    SVar31 = (System_String_Fields)
                             Characters_HumanSetupMaterials__GetPartMaterial
                                       ((System_String_o *)SVar30,0,pMVar40);
                    __this_07 = *(System_String_Fields *)((long)__this_05 + 0x1d8);
                    path = (System_String_Fields *)&TypeInfo_HumanSetupMaterials;
                    if (__this_07 != (System_String_Fields)0x0) {
                      SStack_248._stringLength = 0x42ebb33;
                      SStack_248._firstChar = 0;
                      SStack_248._6_2_ = 0;
                      method_00 = "Type";
                      SVar33 = (System_String_Fields)
                               (**(code **)(*(long *)__this_07 + 0x1a8))
                                         (__this_07,"Type",*(undefined8 *)(*(long *)__this_07 + 0x1b0));
                      SVar26 = SVar31;
                      if (SVar33 != (System_String_Fields)0x0) {
                        method_00 = *(System_String_Fields *)(*(long *)SVar33 + 0x1d0);
                        SStack_248._stringLength = 0x42ebb4f;
                        SStack_248._firstChar = 0;
                        SStack_248._6_2_ = 0;
                        __this_00 = (System_String_Fields)(**(code **)(*(long *)SVar33 + 0x1c8))();
                        __this_07 = SVar33;
                        if (__this_00 != (System_String_Fields)0x0) {
                          SStack_248._stringLength = 0x42ebb6c;
                          SStack_248._firstChar = 0;
                          SStack_248._6_2_ = 0;
                          method_00 = "Uniform";
                          bVar12 = System_String__StartsWith
                                             ((System_String_o *)__this_00,(System_String_o *)"Uniform",
                                              (MethodInfo *)0x0);
                          if ((char)bVar12 == '\0') {
label_042ebd34:
                            SVar30 = *(System_String_Fields *)((long)__this_05 + 0x170);
                            __this_07 = __this_00;
                            if (SVar30 != (System_String_Fields)0x0) {
                              if (g_data_057adec4 == '\0') {
                                SStack_248._stringLength = 0x42ebd5a;
                                SStack_248._firstChar = 0;
                                SStack_248._6_2_ = 0;
                                il2cpp_runtime_helper_023445d0(&"Skin/skin_blades");
                                SStack_248._stringLength = 0x42ebd66;
                                SStack_248._firstChar = 0;
                                SStack_248._6_2_ = 0;
                                il2cpp_runtime_helper_023445d0(&"Skin/skin_TS");
                                __this_07 = (System_String_Fields)&"Skin/skin_AHSS";
                                SStack_248._stringLength = 0x42ebd72;
                                SStack_248._firstChar = 0;
                                SStack_248._6_2_ = 0;
                                il2cpp_runtime_helper_023445d0();
                                g_data_057adec4 = '\x01';
                              }
                              if (*(System_String_Fields *)((long)SVar30 + 0x10) != (System_String_Fields)0x0)
                              {
                                iVar3 = *(int *)((long)*(System_String_Fields *)((long)SVar30 + 0x10) + 0x1d0)
                                ;
                                if (iVar3 == 1) {
label_042ec0ae:
                                  pSVar42 = (System_String_Fields *)&"Skin/skin_AHSS";
                                  lVar39 = *(long *)((long)__this_05 + 0x1c8);
                                }
                                else if (iVar3 == 2) {
                                  pSVar42 = (System_String_Fields *)&"Skin/skin_TS";
                                  lVar39 = *(long *)((long)__this_05 + 0x1c8);
                                }
                                else {
                                  if (iVar3 == 3) goto label_042ec0ae;
                                  pSVar42 = (System_String_Fields *)&"Skin/skin_blades";
                                  lVar39 = *(long *)((long)__this_05 + 0x1c8);
                                }
                                if ((lVar39 != 0) && (*(long *)(lVar39 + 0x98) != 0)) {
                                  pUVar21 = *(Utility_Color255_o **)(*(long *)(lVar39 + 0x98) + 0x18);
                                  __this_07._stringLength = 0;
                                  __this_07._firstChar = 0;
                                  __this_07._6_2_ = 0;
                                  if (pUVar21 != (Utility_Color255_o *)0x0) {
                                    SVar30 = *pSVar42;
                                    method_00._stringLength = 0;
                                    method_00._firstChar = 0;
                                    method_00._6_2_ = 0;
                                    SStack_248._stringLength = 0x42ec0ed;
                                    SStack_248._firstChar = 0;
                                    SStack_248._6_2_ = 0;
                                    UVar50 = Utility_Color255__ToColor(pUVar21,(MethodInfo *)0x0);
                                    fVar46 = UVar50.fields.r;
                                    fVar47 = UVar50.fields.g;
                                    fVar48 = UVar50.fields.b;
                                    fVar49 = UVar50.fields.a;
                                    if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
                                      auStack_230._8_4_ = extraout_XMM0_Dc_00;
                                      auStack_230._0_8_ = UVar50.fields._0_8_;
                                      auStack_230._12_4_ = extraout_XMM0_Dd_00;
                                      uStack_238 = in_XMM1_Dc;
                                      auStack_240 = UVar50.fields._8_8_;
                                      uStack_234 = in_XMM1_Dd;
                                      SStack_248._stringLength = 0x42ec108;
                                      SStack_248._firstChar = 0;
                                      SStack_248._6_2_ = 0;
                                      il2cpp_runtime_helper_02337ed0();
                                      fVar46 = (float)auStack_230._0_4_;
                                      fVar47 = (float)auStack_230._4_4_;
                                      fVar48 = (float)auStack_240._0_4_;
                                      fVar49 = (float)auStack_240._4_4_;
                                      in_XMM1_Dc = uStack_238;
                                      in_XMM1_Dd = uStack_234;
                                    }
                                    SStack_248._stringLength = 0x42ec119;
                                    SStack_248._firstChar = 0;
                                    SStack_248._6_2_ = 0;
                                    color_00.fields.g = fVar47;
                                    color_00.fields.r = fVar46;
                                    color_00.fields.a = fVar49;
                                    color_00.fields.b = fVar48;
                                    SVar31 = (System_String_Fields)
                                             Characters_HumanSetupMaterials__GetSkinMaterial
                                                       ((System_String_o *)SVar30,color_00,
                                                        (MethodInfo *)method_00);
                                    __this_07 = *(System_String_Fields *)((long)__this_05 + 0x148);
                                    if (__this_07 != (System_String_Fields)0x0) {
                                      SStack_248._stringLength = 0x42ec131;
                                      SStack_248._firstChar = 0;
                                      SStack_248._6_2_ = 0;
                                      method_00 = MethodInfo_Renderer_GetComponent_Renderer;
                                      pUVar32 = (UnityEngine_Renderer_o *)
                                                UnityEngine_GameObject__GetComponent_object_
                                                          ((UnityEngine_GameObject_o *)__this_07,
                                                           (MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer);
                                      SVar30 = SVar31;
                                      if (pUVar32 != (UnityEngine_Renderer_o *)0x0) {
                                        SStack_248._stringLength = 0x42ec143;
                                        SStack_248._firstChar = 0;
                                        SStack_248._6_2_ = 0;
                                        method_00 = SVar31;
                                        UnityEngine_Renderer__set_material
                                                  (pUVar32,(UnityEngine_Material_o *)SVar31,(MethodInfo *)0x0)
                                        ;
                                        __this_07 = *(System_String_Fields *)((long)__this_05 + 0xf0);
                                        if (__this_07 != (System_String_Fields)0x0) {
                                          SStack_248._stringLength = 0x42ec158;
                                          SStack_248._firstChar = 0;
                                          SStack_248._6_2_ = 0;
                                          method_00 = MethodInfo_Renderer_GetComponent_Renderer;
                                          pUVar32 = (UnityEngine_Renderer_o *)
                                                    UnityEngine_GameObject__GetComponent_object_
                                                              ((UnityEngine_GameObject_o *)__this_07,
                                                               (MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer);
                                          if (pUVar32 != (UnityEngine_Renderer_o *)0x0) {
                                            UnityEngine_Renderer__set_material
                                                      (pUVar32,(UnityEngine_Material_o *)SVar31,
                                                       (MethodInfo *)0x0);
                                            return extraout_RAX_03;
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
                            __this_07._stringLength = 0;
                            __this_07._firstChar = 0;
                            __this_07._6_2_ = 0;
                            if (*(Characters_HumanSetupMeshes_o **)((long)__this_05 + 0x168) !=
                                (Characters_HumanSetupMeshes_o *)0x0) {
                              SVar30 = (System_String_Fields)((long)__this_05 + 200);
                              SStack_248._stringLength = 0x42ebb97;
                              SStack_248._firstChar = 0;
                              SStack_248._6_2_ = 0;
                              pSVar15 = Characters_HumanSetupMeshes__GetBrandMesh
                                                  (*(Characters_HumanSetupMeshes_o **)
                                                    ((long)__this_05 + 0x168),1,method_04);
                              SStack_248._stringLength = 0x42ebba2;
                              SStack_248._firstChar = 0;
                              SStack_248._6_2_ = 0;
                              method_00 = (System_String_Fields)
                                          Characters_HumanSetup__GenerateCloth
                                                    ((Characters_HumanSetup_o *)__this_05,pSVar15,method_05);
                              *(System_String_Fields *)((long)__this_05 + 200) = method_00;
                              SStack_248._stringLength = 0x42ebbb5;
                              SStack_248._firstChar = 0;
                              SStack_248._6_2_ = 0;
                              il2cpp_runtime_helper_022b4080(SVar30);
                              __this_07 = *(System_String_Fields *)((long)__this_05 + 200);
                              if (__this_07 != (System_String_Fields)0x0) {
                                SStack_248._stringLength = 0x42ebbce;
                                SStack_248._firstChar = 0;
                                SStack_248._6_2_ = 0;
                                method_00 = MethodInfo_Renderer_GetComponent_Renderer;
                                pUVar32 = (UnityEngine_Renderer_o *)
                                          UnityEngine_GameObject__GetComponent_object_
                                                    ((UnityEngine_GameObject_o *)__this_07,
                                                     (MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer);
                                if (pUVar32 != (UnityEngine_Renderer_o *)0x0) {
                                  SStack_248._stringLength = 0x42ebbe4;
                                  SStack_248._firstChar = 0;
                                  SStack_248._6_2_ = 0;
                                  method_00 = SVar31;
                                  UnityEngine_Renderer__set_material
                                            (pUVar32,(UnityEngine_Material_o *)SVar31,(MethodInfo *)0x0);
                                  __this_07._stringLength = 0;
                                  __this_07._firstChar = 0;
                                  __this_07._6_2_ = 0;
                                  if (*(Characters_HumanSetupMeshes_o **)((long)__this_05 + 0x168) !=
                                      (Characters_HumanSetupMeshes_o *)0x0) {
                                    SVar30 = (System_String_Fields)((long)__this_05 + 0xd0);
                                    SStack_248._stringLength = 0x42ebc07;
                                    SStack_248._firstChar = 0;
                                    SStack_248._6_2_ = 0;
                                    pSVar15 = Characters_HumanSetupMeshes__GetBrandMesh
                                                        (*(Characters_HumanSetupMeshes_o **)
                                                          ((long)__this_05 + 0x168),2,method_06);
                                    SStack_248._stringLength = 0x42ebc12;
                                    SStack_248._firstChar = 0;
                                    SStack_248._6_2_ = 0;
                                    method_00 = (System_String_Fields)
                                                Characters_HumanSetup__GenerateCloth
                                                          ((Characters_HumanSetup_o *)__this_05,pSVar15,
                                                           method_07);
                                    *(System_String_Fields *)((long)__this_05 + 0xd0) = method_00;
                                    SStack_248._stringLength = 0x42ebc25;
                                    SStack_248._firstChar = 0;
                                    SStack_248._6_2_ = 0;
                                    il2cpp_runtime_helper_022b4080(SVar30);
                                    __this_07 = *(System_String_Fields *)((long)__this_05 + 0xd0);
                                    if (__this_07 != (System_String_Fields)0x0) {
                                      SStack_248._stringLength = 0x42ebc3e;
                                      SStack_248._firstChar = 0;
                                      SStack_248._6_2_ = 0;
                                      method_00 = MethodInfo_Renderer_GetComponent_Renderer;
                                      pUVar32 = (UnityEngine_Renderer_o *)
                                                UnityEngine_GameObject__GetComponent_object_
                                                          ((UnityEngine_GameObject_o *)__this_07,
                                                           (MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer);
                                      if (pUVar32 != (UnityEngine_Renderer_o *)0x0) {
                                        SStack_248._stringLength = 0x42ebc54;
                                        SStack_248._firstChar = 0;
                                        SStack_248._6_2_ = 0;
                                        method_00 = SVar31;
                                        UnityEngine_Renderer__set_material
                                                  (pUVar32,(UnityEngine_Material_o *)SVar31,(MethodInfo *)0x0)
                                        ;
                                        __this_07._stringLength = 0;
                                        __this_07._firstChar = 0;
                                        __this_07._6_2_ = 0;
                                        if (*(Characters_HumanSetupMeshes_o **)((long)__this_05 + 0x168) !=
                                            (Characters_HumanSetupMeshes_o *)0x0) {
                                          SVar30 = (System_String_Fields)((long)__this_05 + 0xd8);
                                          SStack_248._stringLength = 0x42ebc77;
                                          SStack_248._firstChar = 0;
                                          SStack_248._6_2_ = 0;
                                          pSVar15 = Characters_HumanSetupMeshes__GetBrandMesh
                                                              (*(Characters_HumanSetupMeshes_o **)
                                                                ((long)__this_05 + 0x168),3,method_08);
                                          SStack_248._stringLength = 0x42ebc82;
                                          SStack_248._firstChar = 0;
                                          SStack_248._6_2_ = 0;
                                          method_00 = (System_String_Fields)
                                                      Characters_HumanSetup__GenerateCloth
                                                                ((Characters_HumanSetup_o *)__this_05,pSVar15,
                                                                 method_09);
                                          *(System_String_Fields *)((long)__this_05 + 0xd8) = method_00;
                                          SStack_248._stringLength = 0x42ebc95;
                                          SStack_248._firstChar = 0;
                                          SStack_248._6_2_ = 0;
                                          il2cpp_runtime_helper_022b4080(SVar30);
                                          __this_07 = *(System_String_Fields *)((long)__this_05 + 0xd8);
                                          if (__this_07 != (System_String_Fields)0x0) {
                                            SStack_248._stringLength = 0x42ebcae;
                                            SStack_248._firstChar = 0;
                                            SStack_248._6_2_ = 0;
                                            method_00 = MethodInfo_Renderer_GetComponent_Renderer;
                                            pUVar32 = (UnityEngine_Renderer_o *)
                                                      UnityEngine_GameObject__GetComponent_object_
                                                                ((UnityEngine_GameObject_o *)__this_07,
                                                                 (MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer);
                                            if (pUVar32 != (UnityEngine_Renderer_o *)0x0) {
                                              SStack_248._stringLength = 0x42ebcc4;
                                              SStack_248._firstChar = 0;
                                              SStack_248._6_2_ = 0;
                                              method_00 = SVar31;
                                              UnityEngine_Renderer__set_material
                                                        (pUVar32,(UnityEngine_Material_o *)SVar31,
                                                         (MethodInfo *)0x0);
                                              __this_07._stringLength = 0;
                                              __this_07._firstChar = 0;
                                              __this_07._6_2_ = 0;
                                              if (*(Characters_HumanSetupMeshes_o **)((long)__this_05 + 0x168)
                                                  != (Characters_HumanSetupMeshes_o *)0x0) {
                                                SVar30 = (System_String_Fields)((long)__this_05 + 0xe0);
                                                SStack_248._stringLength = 0x42ebce7;
                                                SStack_248._firstChar = 0;
                                                SStack_248._6_2_ = 0;
                                                pSVar15 = Characters_HumanSetupMeshes__GetBrandMesh
                                                                    (*(Characters_HumanSetupMeshes_o **)
                                                                      ((long)__this_05 + 0x168),4,method_10);
                                                SStack_248._stringLength = 0x42ebcf2;
                                                SStack_248._firstChar = 0;
                                                SStack_248._6_2_ = 0;
                                                method_00 = (System_String_Fields)
                                                            Characters_HumanSetup__GenerateCloth
                                                                      ((Characters_HumanSetup_o *)__this_05,
                                                                       pSVar15,method_11);
                                                *(System_String_Fields *)((long)__this_05 + 0xe0) = method_00;
                                                SStack_248._stringLength = 0x42ebd05;
                                                SStack_248._firstChar = 0;
                                                SStack_248._6_2_ = 0;
                                                il2cpp_runtime_helper_022b4080(SVar30);
                                                __this_07 = *(System_String_Fields *)((long)__this_05 + 0xe0);
                                                if (__this_07 != (System_String_Fields)0x0) {
                                                  SStack_248._stringLength = 0x42ebd1e;
                                                  SStack_248._firstChar = 0;
                                                  SStack_248._6_2_ = 0;
                                                  method_00 = MethodInfo_Renderer_GetComponent_Renderer;
                                                  __this_00 = (System_String_Fields)
                                                              UnityEngine_GameObject__GetComponent_object_
                                                                        ((UnityEngine_GameObject_o *)__this_07
                                                                         ,(MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer);
                                                  if (__this_00 != (System_String_Fields)0x0) {
                                                    SStack_248._stringLength = 0x42ebd34;
                                                    SStack_248._firstChar = 0;
                                                    SStack_248._6_2_ = 0;
                                                    method_00 = SVar31;
                                                    UnityEngine_Renderer__set_material
                                                              ((UnityEngine_Renderer_o *)__this_00,
                                                               (UnityEngine_Material_o *)SVar31,
                                                               (MethodInfo *)0x0);
                                                    goto label_042ebd34;
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
          }
        }
        else {
          if (*(int *)((long)TypeInfo_ResourcePaths + 0xe4) == 0) {
            SStack_248._stringLength = 0x42eb922;
            SStack_248._firstChar = 0;
            SStack_248._6_2_ = 0;
            il2cpp_runtime_helper_02337ed0();
          }
          pCVar28 = (Characters_HumanSetup_o *)((long)__this_05 + 0x100);
          path = *(System_String_Fields **)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
          if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
            SStack_248._stringLength = 0x42eb950;
            SStack_248._firstChar = 0;
            SStack_248._6_2_ = 0;
            il2cpp_runtime_helper_02337ed0();
          }
          SStack_248._stringLength = 0x42eb96a;
          SStack_248._firstChar = 0;
          SStack_248._6_2_ = 0;
          pIVar25 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                              ((System_String_o *)path,(System_String_o *)SVar30,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
          *(Il2CppObject **)((long)__this_05 + 0x100) = pIVar25;
          SStack_248._stringLength = 0x42eb97d;
          SStack_248._firstChar = 0;
          SStack_248._6_2_ = 0;
          pCVar29 = pCVar28;
          il2cpp_runtime_helper_022b4080(pCVar28,pIVar25);
          method_00 = *(System_String_Fields *)((long)__this_05 + 0x100);
          SStack_248._stringLength = 0x42eb991;
          SStack_248._firstChar = 0;
          SStack_248._6_2_ = 0;
          Characters_HumanSetup__AttachToMount
                    (pCVar29,(UnityEngine_GameObject_o *)method_00,
                     *(UnityEngine_GameObject_o **)((long)__this_05 + 0x20),0,in_R8);
          __this_07 = *(System_String_Fields *)((long)__this_05 + 0x100);
          if (__this_07 != (System_String_Fields)0x0) {
            SStack_248._stringLength = 0x42eb9b1;
            SStack_248._firstChar = 0;
            SStack_248._6_2_ = 0;
            method_00 = MethodInfo_Renderer_GetComponent_Renderer;
            pUVar32 = (UnityEngine_Renderer_o *)
                      UnityEngine_GameObject__GetComponent_object_
                                ((UnityEngine_GameObject_o *)__this_07,(MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer);
            if (pUVar32 != (UnityEngine_Renderer_o *)0x0) {
              SStack_248._stringLength = 0x42eb9c7;
              SStack_248._firstChar = 0;
              SStack_248._6_2_ = 0;
              method_00 = SVar34;
              UnityEngine_Renderer__set_material(pUVar32,(UnityEngine_Material_o *)SVar34,(MethodInfo *)0x0);
              pMVar40 = extraout_RDX_05;
              goto label_042eb9c7;
            }
          }
        }
      }
    }
    else {
      if (*(int *)((long)TypeInfo_ResourcePaths + 0xe4) == 0) {
        SStack_248._stringLength = 0x42eb7e1;
        SStack_248._firstChar = 0;
        SStack_248._6_2_ = 0;
        il2cpp_runtime_helper_02337ed0();
      }
      path = (System_String_Fields *)((long)__this_05 + 0xf8);
      SVar30 = *(System_String_Fields *)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        SStack_248._stringLength = 0x42eb80f;
        SStack_248._firstChar = 0;
        SStack_248._6_2_ = 0;
        il2cpp_runtime_helper_02337ed0();
      }
      SStack_248._stringLength = 0x42eb829;
      SStack_248._firstChar = 0;
      SStack_248._6_2_ = 0;
      pIVar25 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                          ((System_String_o *)SVar30,(System_String_o *)pCVar28,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
      *(Il2CppObject **)((long)__this_05 + 0xf8) = pIVar25;
      SStack_248._stringLength = 0x42eb83c;
      SStack_248._firstChar = 0;
      SStack_248._6_2_ = 0;
      __this_06 = (System_Object_array *)path;
      il2cpp_runtime_helper_022b4080(path,pIVar25);
      method_00 = *(System_String_Fields *)((long)__this_05 + 0xf8);
      SStack_248._stringLength = 0x42eb850;
      SStack_248._firstChar = 0;
      SStack_248._6_2_ = 0;
      Characters_HumanSetup__AttachToMount
                ((Characters_HumanSetup_o *)__this_06,(UnityEngine_GameObject_o *)method_00,
                 *(UnityEngine_GameObject_o **)((long)__this_05 + 0x20),0,in_R8);
      __this_07._stringLength = 0;
      __this_07._firstChar = 0;
      __this_07._6_2_ = 0;
      if (*(UnityEngine_GameObject_o **)((long)__this_05 + 0xf8) != (UnityEngine_GameObject_o *)0x0) {
        SStack_248._stringLength = 0x42eb870;
        SStack_248._firstChar = 0;
        SStack_248._6_2_ = 0;
        method_00 = MethodInfo_Renderer_GetComponent_Renderer;
        pCVar29 = (Characters_HumanSetup_o *)
                  UnityEngine_GameObject__GetComponent_object_
                            (*(UnityEngine_GameObject_o **)((long)__this_05 + 0xf8),
                             (MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer);
        __this_07._stringLength = 0;
        __this_07._firstChar = 0;
        __this_07._6_2_ = 0;
        if (*(Characters_HumanSetupTextures_o **)((long)__this_05 + 0x170) !=
            (Characters_HumanSetupTextures_o *)0x0) {
          SStack_248._stringLength = 0x42eb88e;
          SStack_248._firstChar = 0;
          SStack_248._6_2_ = 0;
          SVar30 = (System_String_Fields)
                   Characters_HumanSetupTextures__GetChestTexture
                             (*(Characters_HumanSetupTextures_o **)((long)__this_05 + 0x170),1,method_02);
          pMVar40 = extraout_RDX_01;
          if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
            SStack_248._stringLength = 0x42eb8a9;
            SStack_248._firstChar = 0;
            SStack_248._6_2_ = 0;
            il2cpp_runtime_helper_02337ed0();
            pMVar40 = extraout_RDX_02;
          }
          method_00._stringLength = 0;
          method_00._firstChar = 0;
          method_00._6_2_ = 0;
          SStack_248._stringLength = 0x42eb8b3;
          SStack_248._firstChar = 0;
          SStack_248._6_2_ = 0;
          __this_07 = SVar30;
          SVar31 = (System_String_Fields)
                   Characters_HumanSetupMaterials__GetPartMaterial((System_String_o *)SVar30,0,pMVar40);
          pCVar28 = pCVar29;
          if (pCVar29 != (Characters_HumanSetup_o *)0x0) {
            SStack_248._stringLength = 0x42eb8c9;
            SStack_248._firstChar = 0;
            SStack_248._6_2_ = 0;
            UnityEngine_Renderer__set_material
                      ((UnityEngine_Renderer_o *)pCVar29,(UnityEngine_Material_o *)SVar31,(MethodInfo *)0x0);
            pMVar40 = extraout_RDX_03;
            method_00 = SVar31;
            goto label_042eb8c9;
          }
        }
      }
    }
  }
  SStack_248._stringLength = 0x42ec195;
  SStack_248._firstChar = 0;
  SStack_248._6_2_ = 0;
  il2cpp_runtime_helper_022b2c90();
  SStack_270 = SVar30;
  SStack_268 = __this_05;
  pSStack_260 = (System_Object_array *)path;
  SStack_258 = SVar26;
  pCStack_250 = pCVar28;
  SStack_248 = SVar34;
  if (g_data_057ade9c == '\0') {
    SStack_2a0._stringLength = 0x42ec355;
    SStack_2a0._firstChar = 0;
    SStack_2a0._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponent_Renderer);
    SStack_2a0._stringLength = 0x42ec361;
    SStack_2a0._firstChar = 0;
    SStack_2a0._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupMaterials);
    SStack_2a0._stringLength = 0x42ec36d;
    SStack_2a0._firstChar = 0;
    SStack_2a0._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color255_get_Value);
    g_data_057ade9c = '\x01';
    pUVar35 = *(UnityEngine_Object_o **)((long)__this_07 + 0xa8);
    if (g_data_057adea2 != '\0') goto label_042ec1d5;
label_042ec388:
    SStack_2a0._stringLength = 0x42ec394;
    SStack_2a0._firstChar = 0;
    SStack_2a0._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    pUVar35 = *(UnityEngine_Object_o **)((long)__this_07 + 0xa8);
    if (g_data_057adea2 == '\0') goto label_042ec388;
label_042ec1d5:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    SStack_2a0._stringLength = 0x42ec3b8;
    SStack_2a0._firstChar = 0;
    SStack_2a0._6_2_ = 0;
    il2cpp_runtime_helper_02337ed0();
  }
  plVar17 = &TypeInfo_Object;
  SStack_2a0._stringLength = 0x42ec1f9;
  SStack_2a0._firstChar = 0;
  SStack_2a0._6_2_ = 0;
  bVar12 = UnityEngine_Object__op_Inequality(pUVar35,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 == '\0') {
    pUVar35 = *(UnityEngine_Object_o **)((long)__this_07 + 0x138);
    if (g_data_057adea2 == '\0') goto label_042ec3ed;
label_042ec215:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      SStack_2a0._stringLength = 0x42ec3cf;
      SStack_2a0._firstChar = 0;
      SStack_2a0._6_2_ = 0;
      il2cpp_runtime_helper_02337ed0();
    }
    SStack_2a0._stringLength = 0x42ec3d9;
    SStack_2a0._firstChar = 0;
    SStack_2a0._6_2_ = 0;
    UnityEngine_Object__Destroy_4e01c60(pUVar35,(MethodInfo *)0x0);
    pUVar35 = *(UnityEngine_Object_o **)((long)__this_07 + 0x138);
    if (g_data_057adea2 != '\0') goto label_042ec215;
label_042ec3ed:
    SStack_2a0._stringLength = 0x42ec3f9;
    SStack_2a0._firstChar = 0;
    SStack_2a0._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    SStack_2a0._stringLength = 0x42ec416;
    SStack_2a0._firstChar = 0;
    SStack_2a0._6_2_ = 0;
    il2cpp_runtime_helper_02337ed0();
  }
  SStack_2a0._stringLength = 0x42ec232;
  SStack_2a0._firstChar = 0;
  SStack_2a0._6_2_ = 0;
  bVar12 = UnityEngine_Object__op_Inequality(pUVar35,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 == '\0') {
    pUVar35 = *(UnityEngine_Object_o **)((long)__this_07 + 0xb0);
    if (g_data_057adea2 == '\0') goto label_042ec44b;
label_042ec24e:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      SStack_2a0._stringLength = 0x42ec42d;
      SStack_2a0._firstChar = 0;
      SStack_2a0._6_2_ = 0;
      il2cpp_runtime_helper_02337ed0();
    }
    SStack_2a0._stringLength = 0x42ec437;
    SStack_2a0._firstChar = 0;
    SStack_2a0._6_2_ = 0;
    UnityEngine_Object__Destroy_4e01c60(pUVar35,(MethodInfo *)0x0);
    pUVar35 = *(UnityEngine_Object_o **)((long)__this_07 + 0xb0);
    if (g_data_057adea2 != '\0') goto label_042ec24e;
label_042ec44b:
    SStack_2a0._stringLength = 0x42ec457;
    SStack_2a0._firstChar = 0;
    SStack_2a0._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    SStack_2a0._stringLength = 0x42ec474;
    SStack_2a0._firstChar = 0;
    SStack_2a0._6_2_ = 0;
    il2cpp_runtime_helper_02337ed0();
  }
  SStack_2a0._stringLength = 0x42ec26b;
  SStack_2a0._firstChar = 0;
  SStack_2a0._6_2_ = 0;
  bVar12 = UnityEngine_Object__op_Inequality(pUVar35,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 == '\0') {
    SVar26 = *(System_String_Fields *)((long)__this_07 + 0x140);
    if (g_data_057adea2 == '\0') goto label_042ec4a9;
label_042ec287:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      SStack_2a0._stringLength = 0x42ec48b;
      SStack_2a0._firstChar = 0;
      SStack_2a0._6_2_ = 0;
      il2cpp_runtime_helper_02337ed0();
    }
    SStack_2a0._stringLength = 0x42ec495;
    SStack_2a0._firstChar = 0;
    SStack_2a0._6_2_ = 0;
    UnityEngine_Object__Destroy_4e01c60(pUVar35,(MethodInfo *)0x0);
    SVar26 = *(System_String_Fields *)((long)__this_07 + 0x140);
    if (g_data_057adea2 != '\0') goto label_042ec287;
label_042ec4a9:
    SStack_2a0._stringLength = 0x42ec4b5;
    SStack_2a0._firstChar = 0;
    SStack_2a0._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    SStack_2a0._stringLength = 0x42ec4d2;
    SStack_2a0._firstChar = 0;
    SStack_2a0._6_2_ = 0;
    il2cpp_runtime_helper_02337ed0();
  }
  SVar33._stringLength = 0;
  SVar33._firstChar = 0;
  SVar33._6_2_ = 0;
  SStack_2a0._stringLength = 0x42ec2a4;
  SStack_2a0._firstChar = 0;
  SStack_2a0._6_2_ = 0;
  SVar30 = SVar26;
  bVar12 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)SVar26,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 != '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      SStack_2a0._stringLength = 0x42ec2ba;
      SStack_2a0._firstChar = 0;
      SStack_2a0._6_2_ = 0;
      il2cpp_runtime_helper_02337ed0();
    }
    SVar33._stringLength = 0;
    SVar33._firstChar = 0;
    SVar33._6_2_ = 0;
    SStack_2a0._stringLength = 0x42ec2c4;
    SStack_2a0._firstChar = 0;
    SStack_2a0._6_2_ = 0;
    SVar30 = SVar26;
    UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)SVar26,(MethodInfo *)0x0);
  }
  lVar39 = *(long *)((long)__this_07 + 0x170);
  if (lVar39 != 0) {
    if (g_data_057adec4 == '\0') {
      SStack_2a0._stringLength = 0x42ec2e9;
      SStack_2a0._firstChar = 0;
      SStack_2a0._6_2_ = 0;
      il2cpp_runtime_helper_023445d0(&"Skin/skin_blades");
      SStack_2a0._stringLength = 0x42ec2f5;
      SStack_2a0._firstChar = 0;
      SStack_2a0._6_2_ = 0;
      il2cpp_runtime_helper_023445d0(&"Skin/skin_TS");
      SVar30 = (System_String_Fields)&"Skin/skin_AHSS";
      SStack_2a0._stringLength = 0x42ec301;
      SStack_2a0._firstChar = 0;
      SStack_2a0._6_2_ = 0;
      il2cpp_runtime_helper_023445d0();
      g_data_057adec4 = '\x01';
    }
    if (*(long *)(lVar39 + 0x10) != 0) {
      iVar3 = *(int *)(*(long *)(lVar39 + 0x10) + 0x1d0);
      if (iVar3 == 1) {
label_042ec4e0:
        pSVar42 = (System_String_Fields *)&"Skin/skin_AHSS";
        lVar10 = *(long *)((long)__this_07 + 0x1c8);
      }
      else if (iVar3 == 2) {
        pSVar42 = (System_String_Fields *)&"Skin/skin_TS";
        lVar10 = *(long *)((long)__this_07 + 0x1c8);
      }
      else {
        if (iVar3 == 3) goto label_042ec4e0;
        pSVar42 = (System_String_Fields *)&"Skin/skin_blades";
        lVar10 = *(long *)((long)__this_07 + 0x1c8);
      }
      if ((lVar10 != 0) && (*(long *)(lVar10 + 0x98) != 0)) {
        pUVar21 = *(Utility_Color255_o **)(*(long *)(lVar10 + 0x98) + 0x18);
        SVar30._stringLength = 0;
        SVar30._firstChar = 0;
        SVar30._6_2_ = 0;
        if (pUVar21 != (Utility_Color255_o *)0x0) {
          SVar26 = *pSVar42;
          SVar33._stringLength = 0;
          SVar33._firstChar = 0;
          SVar33._6_2_ = 0;
          SStack_2a0._stringLength = 0x42ec51e;
          SStack_2a0._firstChar = 0;
          SStack_2a0._6_2_ = 0;
          UVar50 = Utility_Color255__ToColor(pUVar21,(MethodInfo *)0x0);
          fVar46 = UVar50.fields.r;
          fVar47 = UVar50.fields.g;
          fVar48 = UVar50.fields.b;
          fVar49 = UVar50.fields.a;
          if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
            auStack_288._8_4_ = extraout_XMM0_Dc_01;
            auStack_288._0_8_ = UVar50.fields._0_8_;
            auStack_288._12_4_ = extraout_XMM0_Dd_01;
            auStack_298._8_4_ = in_XMM1_Dc;
            auStack_298._0_8_ = UVar50.fields._8_8_;
            auStack_298._12_4_ = in_XMM1_Dd;
            SStack_2a0._stringLength = 0x42ec53f;
            SStack_2a0._firstChar = 0;
            SStack_2a0._6_2_ = 0;
            il2cpp_runtime_helper_02337ed0();
            fVar46 = (float)auStack_288._0_4_;
            fVar47 = (float)auStack_288._4_4_;
            fVar48 = (float)auStack_298._0_4_;
            fVar49 = (float)auStack_298._4_4_;
          }
          SStack_2a0._stringLength = 0x42ec550;
          SStack_2a0._firstChar = 0;
          SStack_2a0._6_2_ = 0;
          color_01.fields.g = fVar47;
          color_01.fields.r = fVar46;
          color_01.fields.a = fVar49;
          color_01.fields.b = fVar48;
          SVar34 = (System_String_Fields)
                   Characters_HumanSetupMaterials__GetSkinMaterial
                             ((System_String_o *)SVar26,color_01,(MethodInfo *)SVar33);
          SVar30._stringLength = 0;
          SVar30._firstChar = 0;
          SVar30._6_2_ = 0;
          if (*(Characters_HumanSetupMeshes_o **)((long)__this_07 + 0x168) !=
              (Characters_HumanSetupMeshes_o *)0x0) {
            plVar17 = (long *)((long)__this_07 + 0xa8);
            SStack_2a0._stringLength = 0x42ec574;
            SStack_2a0._firstChar = 0;
            SStack_2a0._6_2_ = 0;
            pSVar15 = Characters_HumanSetupMeshes__GetArmMesh
                                (*(Characters_HumanSetupMeshes_o **)((long)__this_07 + 0x168),1,method_12);
            SStack_2a0._stringLength = 0x42ec57f;
            SStack_2a0._firstChar = 0;
            SStack_2a0._6_2_ = 0;
            SVar33 = (System_String_Fields)
                     Characters_HumanSetup__GenerateCloth
                               ((Characters_HumanSetup_o *)__this_07,pSVar15,method_13);
            *(System_String_Fields *)((long)__this_07 + 0xa8) = SVar33;
            SStack_2a0._stringLength = 0x42ec591;
            SStack_2a0._firstChar = 0;
            SStack_2a0._6_2_ = 0;
            il2cpp_runtime_helper_022b4080(plVar17);
            SVar30 = *(System_String_Fields *)((long)__this_07 + 0xa8);
            SVar26 = SVar34;
            if (SVar30 != (System_String_Fields)0x0) {
              path = &MethodInfo_Renderer_GetComponent_Renderer;
              SStack_2a0._stringLength = 0x42ec5b1;
              SStack_2a0._firstChar = 0;
              SStack_2a0._6_2_ = 0;
              SVar33 = MethodInfo_Renderer_GetComponent_Renderer;
              pUVar32 = (UnityEngine_Renderer_o *)
                        UnityEngine_GameObject__GetComponent_object_
                                  ((UnityEngine_GameObject_o *)SVar30,(MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer);
              if (pUVar32 != (UnityEngine_Renderer_o *)0x0) {
                SStack_2a0._stringLength = 0x42ec5c7;
                SStack_2a0._firstChar = 0;
                SStack_2a0._6_2_ = 0;
                SVar33 = method_00;
                UnityEngine_Renderer__set_material
                          (pUVar32,(UnityEngine_Material_o *)method_00,(MethodInfo *)0x0);
                SVar30._stringLength = 0;
                SVar30._firstChar = 0;
                SVar30._6_2_ = 0;
                if (*(Characters_HumanSetupMeshes_o **)((long)__this_07 + 0x168) !=
                    (Characters_HumanSetupMeshes_o *)0x0) {
                  plVar17 = (long *)((long)__this_07 + 0x138);
                  SStack_2a0._stringLength = 0x42ec5e8;
                  SStack_2a0._firstChar = 0;
                  SStack_2a0._6_2_ = 0;
                  pSVar15 = Characters_HumanSetupMeshes__GetHandMesh
                                      (*(Characters_HumanSetupMeshes_o **)((long)__this_07 + 0x168),1,
                                       method_14);
                  SStack_2a0._stringLength = 0x42ec5f3;
                  SStack_2a0._firstChar = 0;
                  SStack_2a0._6_2_ = 0;
                  SVar33 = (System_String_Fields)
                           Characters_HumanSetup__GenerateCloth
                                     ((Characters_HumanSetup_o *)__this_07,pSVar15,method_15);
                  *(System_String_Fields *)((long)__this_07 + 0x138) = SVar33;
                  SStack_2a0._stringLength = 0x42ec605;
                  SStack_2a0._firstChar = 0;
                  SStack_2a0._6_2_ = 0;
                  il2cpp_runtime_helper_022b4080(plVar17);
                  SVar30 = *(System_String_Fields *)((long)__this_07 + 0x138);
                  if (SVar30 != (System_String_Fields)0x0) {
                    SStack_2a0._stringLength = 0x42ec61e;
                    SStack_2a0._firstChar = 0;
                    SStack_2a0._6_2_ = 0;
                    SVar33 = MethodInfo_Renderer_GetComponent_Renderer;
                    pUVar32 = (UnityEngine_Renderer_o *)
                              UnityEngine_GameObject__GetComponent_object_
                                        ((UnityEngine_GameObject_o *)SVar30,(MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer
                                        );
                    if (pUVar32 != (UnityEngine_Renderer_o *)0x0) {
                      SStack_2a0._stringLength = 0x42ec634;
                      SStack_2a0._firstChar = 0;
                      SStack_2a0._6_2_ = 0;
                      SVar33 = SVar34;
                      UnityEngine_Renderer__set_material
                                (pUVar32,(UnityEngine_Material_o *)SVar34,(MethodInfo *)0x0);
                      SVar30._stringLength = 0;
                      SVar30._firstChar = 0;
                      SVar30._6_2_ = 0;
                      if (*(Characters_HumanSetupMeshes_o **)((long)__this_07 + 0x168) !=
                          (Characters_HumanSetupMeshes_o *)0x0) {
                        plVar17 = (long *)((long)__this_07 + 0xb0);
                        SStack_2a0._stringLength = 0x42ec652;
                        SStack_2a0._firstChar = 0;
                        SStack_2a0._6_2_ = 0;
                        pSVar15 = Characters_HumanSetupMeshes__GetArmMesh
                                            (*(Characters_HumanSetupMeshes_o **)((long)__this_07 + 0x168),0,
                                             method_16);
                        SStack_2a0._stringLength = 0x42ec65d;
                        SStack_2a0._firstChar = 0;
                        SStack_2a0._6_2_ = 0;
                        SVar33 = (System_String_Fields)
                                 Characters_HumanSetup__GenerateCloth
                                           ((Characters_HumanSetup_o *)__this_07,pSVar15,method_17);
                        *(System_String_Fields *)((long)__this_07 + 0xb0) = SVar33;
                        SStack_2a0._stringLength = 0x42ec66f;
                        SStack_2a0._firstChar = 0;
                        SStack_2a0._6_2_ = 0;
                        il2cpp_runtime_helper_022b4080(plVar17);
                        SVar30 = *(System_String_Fields *)((long)__this_07 + 0xb0);
                        if (SVar30 != (System_String_Fields)0x0) {
                          SStack_2a0._stringLength = 0x42ec688;
                          SStack_2a0._firstChar = 0;
                          SStack_2a0._6_2_ = 0;
                          SVar33 = MethodInfo_Renderer_GetComponent_Renderer;
                          pUVar32 = (UnityEngine_Renderer_o *)
                                    UnityEngine_GameObject__GetComponent_object_
                                              ((UnityEngine_GameObject_o *)SVar30,
                                               (MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer);
                          if (pUVar32 != (UnityEngine_Renderer_o *)0x0) {
                            SStack_2a0._stringLength = 0x42ec69e;
                            SStack_2a0._firstChar = 0;
                            SStack_2a0._6_2_ = 0;
                            SVar33 = method_00;
                            UnityEngine_Renderer__set_material
                                      (pUVar32,(UnityEngine_Material_o *)method_00,(MethodInfo *)0x0);
                            SVar30._stringLength = 0;
                            SVar30._firstChar = 0;
                            SVar30._6_2_ = 0;
                            if (*(Characters_HumanSetupMeshes_o **)((long)__this_07 + 0x168) !=
                                (Characters_HumanSetupMeshes_o *)0x0) {
                              method_00 = (System_String_Fields)((long)__this_07 + 0x140);
                              SStack_2a0._stringLength = 0x42ec6b8;
                              SStack_2a0._firstChar = 0;
                              SStack_2a0._6_2_ = 0;
                              pSVar15 = Characters_HumanSetupMeshes__GetHandMesh
                                                  (*(Characters_HumanSetupMeshes_o **)
                                                    ((long)__this_07 + 0x168),0,method_18);
                              SStack_2a0._stringLength = 0x42ec6c3;
                              SStack_2a0._firstChar = 0;
                              SStack_2a0._6_2_ = 0;
                              SVar33 = (System_String_Fields)
                                       Characters_HumanSetup__GenerateCloth
                                                 ((Characters_HumanSetup_o *)__this_07,pSVar15,method_19);
                              *(System_String_Fields *)((long)__this_07 + 0x140) = SVar33;
                              SStack_2a0._stringLength = 0x42ec6d5;
                              SStack_2a0._firstChar = 0;
                              SStack_2a0._6_2_ = 0;
                              il2cpp_runtime_helper_022b4080(method_00);
                              SVar30 = *(System_String_Fields *)((long)__this_07 + 0x140);
                              if (SVar30 != (System_String_Fields)0x0) {
                                SStack_2a0._stringLength = 0x42ec6ea;
                                SStack_2a0._firstChar = 0;
                                SStack_2a0._6_2_ = 0;
                                SVar33 = MethodInfo_Renderer_GetComponent_Renderer;
                                pUVar32 = (UnityEngine_Renderer_o *)
                                          UnityEngine_GameObject__GetComponent_object_
                                                    ((UnityEngine_GameObject_o *)SVar30,
                                                     (MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer);
                                if (pUVar32 != (UnityEngine_Renderer_o *)0x0) {
                                  UnityEngine_Renderer__set_material
                                            (pUVar32,(UnityEngine_Material_o *)SVar34,(MethodInfo *)0x0);
                                  return extraout_RAX_04;
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
  SStack_2a0._stringLength = 0x42ec726;
  SStack_2a0._firstChar = 0;
  SStack_2a0._6_2_ = 0;
  il2cpp_runtime_helper_022b2c90();
  lStack_2c0 = lVar39;
  plStack_2b8 = plVar17;
  pSStack_2b0 = (System_Object_array *)path;
  SStack_2a8 = method_00;
  SStack_2a0 = SVar26;
  if (g_data_057ade9d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRenderer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRenderer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    g_data_057ade9d = '\x01';
    if (*(int *)((long)TypeInfo_ResourcePaths + 0xe4) != 0) goto label_042ec767;
label_042ec949:
    il2cpp_runtime_helper_02337ed0();
    pSVar37 = ((System_String_o *)((long)SVar30 + 0x1c8))->klass;
    if (pSVar37 == (System_String_c *)0x0) goto label_042ec961;
label_042ec777:
    pvVar7 = (pSVar37->_1).typeMetadataHandle;
    if ((pvVar7 == (void *)0x0) ||
       (pSVar37 = ((System_String_o *)((long)SVar30 + 0x168))->klass, pSVar37 == (System_String_c *)0x0))
    goto label_042ec961;
    pSVar15 = *(System_String_o **)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
    uStack_2c4 = *(undefined4 *)((long)pvVar7 + 0x14);
    if (g_data_057adeae == '\0') {
      il2cpp_runtime_helper_023445d0(&"character_leg_");
      g_data_057adeae = '\x01';
    }
    pSVar16 = (System_String_o *)(pSVar37->_1).namespaze;
    pSVar18 = System_Int32__ToString((int32_t)&uStack_2c4,(MethodInfo *)0x0);
    pSVar16 = System_String__Concat_3af7150(pSVar16,"character_leg_",pSVar18,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar35 = ApplicationManagers_ResourceManager__LoadAsset(pSVar15,pSVar16,1,(MethodInfo *)0x0);
    if (pUVar35 == (UnityEngine_Object_o *)0x0) goto label_042ec961;
    if (pUVar35->klass == TypeInfo_GameObject) {
      __this_01 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar35,(MethodInfo *)0x0)
      ;
      pSVar37 = ((System_String_o *)((long)SVar30 + 0x150))->klass;
      if (pSVar37 != (System_String_c *)0x0) {
        __this_02 = (UnityEngine_SkinnedMeshRenderer_o *)
                    UnityEngine_GameObject__GetComponent_object_
                              ((UnityEngine_GameObject_o *)pSVar37,MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRenderer);
        if (__this_01 != (UnityEngine_Transform_o *)0x0) {
          __this_03 = (UnityEngine_SkinnedMeshRenderer_o *)
                      UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)__this_01,MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRenderer);
          if (__this_03 != (UnityEngine_SkinnedMeshRenderer_o *)0x0) {
            value = UnityEngine_SkinnedMeshRenderer__get_sharedMesh(__this_03,(MethodInfo *)0x0);
            if (__this_02 != (UnityEngine_SkinnedMeshRenderer_o *)0x0) {
              UnityEngine_SkinnedMeshRenderer__set_sharedMesh(__this_02,value,(MethodInfo *)0x0);
              pSVar37 = ((System_String_o *)((long)SVar30 + 0x150))->klass;
              if (pSVar37 != (System_String_c *)0x0) {
                pUVar32 = (UnityEngine_Renderer_o *)
                          UnityEngine_GameObject__GetComponent_object_
                                    ((UnityEngine_GameObject_o *)pSVar37,MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRenderer);
                if (pUVar32 != (UnityEngine_Renderer_o *)0x0) {
                  UnityEngine_Renderer__set_material
                            (pUVar32,(UnityEngine_Material_o *)SVar33,(MethodInfo *)0x0);
                  return extraout_RAX_05;
                }
              }
            }
          }
        }
      }
      goto label_042ec961;
    }
  }
  else {
    if (*(int *)((long)TypeInfo_ResourcePaths + 0xe4) == 0) goto label_042ec949;
label_042ec767:
    pSVar37 = ((System_String_o *)((long)SVar30 + 0x1c8))->klass;
    if (pSVar37 != (System_String_c *)0x0) goto label_042ec777;
label_042ec961:
    pUVar35 = (UnityEngine_Object_o *)il2cpp_runtime_helper_022b2c90();
  }
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ade8f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponentInChildren_Renderer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponent_Renderer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupMaterials);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    g_data_057ade8f = '\x01';
    pUVar41 = (UnityEngine_Object_o *)pUVar35[5].fields.m_CachedPtr;
    if (g_data_057adea2 != '\0') goto label_042ec99f;
label_042ecb66:
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    pUVar41 = (UnityEngine_Object_o *)pUVar35[5].fields.m_CachedPtr;
    if (g_data_057adea2 == '\0') goto label_042ecb66;
label_042ec99f:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar12 = UnityEngine_Object__op_Inequality(pUVar41,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 == '\0') {
    pUVar27 = pUVar35[6].klass;
    if (g_data_057adea2 == '\0') goto label_042ecbcb;
label_042ec9df:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar41,(MethodInfo *)0x0);
    pUVar27 = pUVar35[6].klass;
    if (g_data_057adea2 != '\0') goto label_042ec9df;
label_042ecbcb:
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar12 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pUVar27,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 == '\0') {
    pUVar41 = pUVar35[6].monitor;
    if (g_data_057adea2 == '\0') goto label_042ecc29;
label_042eca18:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)pUVar27,(MethodInfo *)0x0);
    pUVar41 = pUVar35[6].monitor;
    if (g_data_057adea2 != '\0') goto label_042eca18;
label_042ecc29:
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar12 = UnityEngine_Object__op_Inequality(pUVar41,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 == '\0') {
    SVar26 = (System_String_Fields)pUVar35[6].fields.m_CachedPtr;
    if (g_data_057adea2 == '\0') goto label_042ecc87;
label_042eca51:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar41,(MethodInfo *)0x0);
    SVar26 = (System_String_Fields)pUVar35[6].fields.m_CachedPtr;
    if (g_data_057adea2 != '\0') goto label_042eca51;
label_042ecc87:
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  SVar30 = SVar26;
  bVar12 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)SVar26,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pMVar40 = extraout_RDX_08;
  if ((char)bVar12 != '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)SVar26,(MethodInfo *)0x0);
    pMVar40 = extraout_RDX_09;
    SVar30 = SVar26;
  }
  pvVar7 = pUVar35[0xf].monitor;
  if (pvVar7 != (void *)0x0) {
    if (g_data_057adec2 == '\0') {
      il2cpp_runtime_helper_023445d0(&"Misc/AOTTG_HERO_3DMG");
      il2cpp_runtime_helper_023445d0(&"Misc/aottg_hero_AHSS_3dmg");
      SVar30 = (System_String_Fields)&"Misc/aottg_hero_APG_3dmg";
      il2cpp_runtime_helper_023445d0();
      g_data_057adec2 = '\x01';
      pMVar40 = extraout_RDX_10;
    }
    lVar39 = *(long *)((long)pvVar7 + 0x10);
    if (lVar39 != 0) {
      iVar3 = *(int *)(lVar39 + 0x1d0);
      if (iVar3 == 3) {
        puVar38 = &"Misc/aottg_hero_APG_3dmg";
      }
      else {
        puVar38 = &"Misc/AOTTG_HERO_3DMG";
        if (iVar3 == 1) {
          puVar38 = &"Misc/aottg_hero_AHSS_3dmg";
        }
      }
      pSVar15 = (System_String_o *)*puVar38;
      if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pMVar40 = extraout_RDX_11;
      }
      method_21 = (MethodInfo *)0x0;
      pUVar36 = Characters_HumanSetupMaterials__GetPartMaterial(pSVar15,0,pMVar40);
      if (*(int *)((long)TypeInfo_ResourcePaths + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      SVar30 = TypeInfo_ResourcePaths;
      if (pUVar35[0xf].klass != (UnityEngine_Object_c *)0x0) {
        pCVar28 = (Characters_HumanSetup_o *)&pUVar35[5].fields;
        pSVar15 = *(System_String_o **)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
        pSVar16 = Characters_HumanSetupMeshes__Get3dmgMesh
                            ((Characters_HumanSetupMeshes_o *)pUVar35[0xf].klass,method_21);
        if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pIVar25 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                            (pSVar15,pSVar16,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
        pUVar35[5].fields.m_CachedPtr = (intptr_t)pIVar25;
        il2cpp_runtime_helper_022b4080(pCVar28,pIVar25);
        Characters_HumanSetup__AttachToMount
                  (pCVar28,(UnityEngine_GameObject_o *)pUVar35[5].fields.m_CachedPtr,
                   (UnityEngine_GameObject_o *)pUVar35[1].fields.m_CachedPtr,0,in_R8);
        SVar30 = (System_String_Fields)pUVar35[5].fields.m_CachedPtr;
        if (SVar30 != (System_String_Fields)0x0) {
          ppSVar43 = (System_String_o **)
                     UnityEngine_GameObject__GetComponentInChildren_object_
                               ((UnityEngine_GameObject_o *)SVar30,MethodInfo_Renderer_GetComponentInChildren_Renderer);
          if ((System_String_Fields)ppSVar43 != (System_String_Fields)0x0) {
            UnityEngine_Renderer__set_material((UnityEngine_Renderer_o *)ppSVar43,pUVar36,(MethodInfo *)0x0);
            pUVar27 = pUVar35[0xf].klass;
            SVar30 = (System_String_Fields)ppSVar43;
            if (pUVar27 != (UnityEngine_Object_c *)0x0) {
              if (g_data_057adeb2 == '\0') {
                ppSVar43 = &"3dmg_belt";
                il2cpp_runtime_helper_023445d0();
                g_data_057adeb2 = '\x01';
              }
              pcVar11 = (pUVar27->_1).name;
              SVar30 = (System_String_Fields)ppSVar43;
              if (pcVar11 != (char *)0x0) {
                if ((*(uint *)(pcVar11 + 0x1d0) | 2) == 3) {
                  pSVar15 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
                  pSVar16 = pSVar15;
                }
                else {
                  pSVar16 = System_String__Concat_3ae5ba0
                                      ((pUVar27->_1).byval_arg.data,"3dmg_belt",(MethodInfo *)0x0);
                  pSVar15 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
                }
                bVar12 = System_String__op_Inequality(pSVar16,pSVar15,(MethodInfo *)0x0);
                pSVar15 = (System_String_o *)CONCAT44(extraout_var_02,bVar12);
                pMVar40 = extraout_RDX_12;
                if ((char)bVar12 == '\0') {
label_042ecf16:
                  if (*(int *)&pUVar35[0x13].monitor == 3) {
                    return pSVar15;
                  }
                  if (*(int *)((long)TypeInfo_ResourcePaths + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                    pMVar40 = extraout_RDX_14;
                  }
                  SVar30 = TypeInfo_ResourcePaths;
                  if (pUVar35[0xf].klass != (UnityEngine_Object_c *)0x0) {
                    ppvVar1 = &pUVar35[6].monitor;
                    pSVar15 = *(System_String_o **)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
                    pSVar16 = Characters_HumanSetupMeshes__GetGasMesh
                                        ((Characters_HumanSetupMeshes_o *)pUVar35[0xf].klass,1,pMVar40);
                    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pIVar25 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                                        (pSVar15,pSVar16,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
                    *ppvVar1 = pIVar25;
                    il2cpp_runtime_helper_022b4080(ppvVar1);
                    SVar30 = (System_String_Fields)*ppvVar1;
                    if (SVar30 != (System_String_Fields)0x0) {
                      pCVar28 = (Characters_HumanSetup_o *)
                                UnityEngine_GameObject__GetComponent_object_
                                          ((UnityEngine_GameObject_o *)SVar30,
                                           (MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer);
                      if (pCVar28 != (Characters_HumanSetup_o *)0x0) {
                        UnityEngine_Renderer__set_material
                                  ((UnityEngine_Renderer_o *)pCVar28,pUVar36,(MethodInfo *)0x0);
                        Characters_HumanSetup__AttachToMount
                                  (pCVar28,pUVar35[6].monitor,
                                   (UnityEngine_GameObject_o *)
                                   (&pUVar35[2].klass)[(ulong)(*(int *)&pUVar35[0x13].monitor == 1) * 2],0,
                                   in_R8);
                        pMVar40 = extraout_RDX_15;
                        if (*(int *)((long)TypeInfo_ResourcePaths + 0xe4) == 0) {
                          il2cpp_runtime_helper_02337ed0();
                          pMVar40 = extraout_RDX_16;
                        }
                        SVar30 = TypeInfo_ResourcePaths;
                        if (pUVar35[0xf].klass != (UnityEngine_Object_c *)0x0) {
                          pUVar2 = &pUVar35[6].fields;
                          pSVar15 = *(System_String_o **)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
                          pSVar16 = Characters_HumanSetupMeshes__GetGasMesh
                                              ((Characters_HumanSetupMeshes_o *)pUVar35[0xf].klass,0,pMVar40);
                          if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
                            il2cpp_runtime_helper_02337ed0();
                          }
                          pIVar25 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                                              (pSVar15,pSVar16,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
                          pUVar2->m_CachedPtr = (intptr_t)pIVar25;
                          il2cpp_runtime_helper_022b4080(pUVar2);
                          SVar30 = (System_String_Fields)pUVar2->m_CachedPtr;
                          if (SVar30 != (System_String_Fields)0x0) {
                            pCVar28 = (Characters_HumanSetup_o *)
                                      UnityEngine_GameObject__GetComponent_object_
                                                ((UnityEngine_GameObject_o *)SVar30,
                                                 (MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer);
                            if (pCVar28 != (Characters_HumanSetup_o *)0x0) {
                              UnityEngine_Renderer__set_material
                                        ((UnityEngine_Renderer_o *)pCVar28,pUVar36,(MethodInfo *)0x0);
                              Characters_HumanSetup__AttachToMount
                                        (pCVar28,(UnityEngine_GameObject_o *)pUVar35[6].fields.m_CachedPtr,
                                         (&pUVar35[2].monitor)
                                         [(ulong)(*(int *)&pUVar35[0x13].monitor == 1) * 2],0,in_R8);
                              return extraout_RAX_07;
                            }
                          }
                        }
                      }
                    }
                  }
                }
                else {
                  if (*(int *)((long)TypeInfo_ResourcePaths + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pUVar41 = pUVar35 + 6;
                  pSVar15 = *(System_String_o **)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
                  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pUVar27 = (UnityEngine_Object_c *)
                            ApplicationManagers_ResourceManager__InstantiateAsset_object_
                                      (pSVar15,pSVar16,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
                  pUVar41->klass = pUVar27;
                  il2cpp_runtime_helper_022b4080(pUVar41);
                  SVar30 = (System_String_Fields)pUVar41->klass;
                  if (SVar30 != (System_String_Fields)0x0) {
                    pCVar28 = (Characters_HumanSetup_o *)
                              UnityEngine_GameObject__GetComponent_object_
                                        ((UnityEngine_GameObject_o *)SVar30,(MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer
                                        );
                    if (pCVar28 != (Characters_HumanSetup_o *)0x0) {
                      UnityEngine_Renderer__set_material
                                ((UnityEngine_Renderer_o *)pCVar28,pUVar36,(MethodInfo *)0x0);
                      Characters_HumanSetup__AttachToMount
                                (pCVar28,(UnityEngine_GameObject_o *)pUVar35[6].klass,
                                 (UnityEngine_GameObject_o *)pUVar35[1].fields.m_CachedPtr,0,in_R8);
                      pSVar15 = extraout_RAX_06;
                      pMVar40 = extraout_RDX_13;
                      goto label_042ecf16;
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
  if (g_data_057ade90 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEffectPresets);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MeleeWeaponTrail_GetComponentInChildren_MeleeWeaponTrail);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponentInChildren_Renderer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupMaterials);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&"thunderspear");
    g_data_057ade90 = '\x01';
    pUVar35 = *(UnityEngine_Object_o **)((long)SVar30 + 0xb8);
    if (g_data_057adea2 != '\0') goto label_042ed11f;
label_042ed2a1:
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    pUVar35 = *(UnityEngine_Object_o **)((long)SVar30 + 0xb8);
    if (g_data_057adea2 == '\0') goto label_042ed2a1;
label_042ed11f:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar12 = UnityEngine_Object__op_Inequality(pUVar35,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 == '\0') {
    pSVar15 = *(System_String_o **)((long)SVar30 + 0xc0);
    if (g_data_057adea2 == '\0') goto label_042ed304;
label_042ed15e:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar35,(MethodInfo *)0x0);
    pSVar15 = *(System_String_o **)((long)SVar30 + 0xc0);
    if (g_data_057adea2 != '\0') goto label_042ed15e;
label_042ed304:
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar16 = pSVar15;
  bVar12 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pSVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pMVar40 = extraout_RDX_17;
  if ((char)bVar12 != '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)pSVar15,(MethodInfo *)0x0);
    pMVar40 = extraout_RDX_18;
    pSVar16 = pSVar15;
  }
  lVar39 = *(long *)((long)SVar30 + 0x170);
  if (lVar39 != 0) {
    if (g_data_057adec2 == '\0') {
      il2cpp_runtime_helper_023445d0(&"Misc/AOTTG_HERO_3DMG");
      il2cpp_runtime_helper_023445d0(&"Misc/aottg_hero_AHSS_3dmg");
      pSVar16 = (System_String_o *)&"Misc/aottg_hero_APG_3dmg";
      il2cpp_runtime_helper_023445d0();
      g_data_057adec2 = '\x01';
      pMVar40 = extraout_RDX_19;
    }
    lVar39 = *(long *)(lVar39 + 0x10);
    if (lVar39 != 0) {
      iVar3 = *(int *)(lVar39 + 0x1d0);
      if (iVar3 == 3) {
        puVar38 = &"Misc/aottg_hero_APG_3dmg";
      }
      else {
        puVar38 = &"Misc/AOTTG_HERO_3DMG";
        if (iVar3 == 1) {
          puVar38 = &"Misc/aottg_hero_AHSS_3dmg";
        }
      }
      pSVar16 = (System_String_o *)*puVar38;
      iVar3 = *(int *)((long)SVar30 + 0x1d0);
      if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pMVar40 = extraout_RDX_20;
      }
      pUVar36 = Characters_HumanSetupMaterials__GetPartMaterial(pSVar16,(uint)(iVar3 == 3),pMVar40);
      if ((*(long *)((long)SVar30 + 0x1c8) != 0) &&
         (lVar39 = *(long *)(*(long *)((long)SVar30 + 0x1c8) + 0xe0), lVar39 != 0)) {
        pSVar15 = *(System_String_o **)(lVar39 + 0x18);
        if (*(int *)(TypeInfo_CharacterEffectPresets + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        iVar14 = PatreonEffects_CharacterEffectPresets__ParseOrDefault(pSVar15,(MethodInfo *)0x0);
        pSVar16 = (System_String_o *)0x0;
        if (*(Characters_HumanSetupMeshes_o **)((long)SVar30 + 0x168) != (Characters_HumanSetupMeshes_o *)0x0)
        {
          pCVar28 = (Characters_HumanSetup_o *)
                    Characters_HumanSetupMeshes__GetWeaponMesh
                              (*(Characters_HumanSetupMeshes_o **)((long)SVar30 + 0x168),1,method_20);
          bVar12 = System_String__op_Inequality
                             ((System_String_o *)pCVar28,
                              (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
          pMVar40 = extraout_RDX_21;
          if ((char)bVar12 == '\0') goto label_042ed58b;
          if (*(int *)((long)TypeInfo_ResourcePaths + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar15 = (System_String_o *)((long)SVar30 + 0xb8);
          pSVar16 = *(System_String_o **)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
          if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar37 = (System_String_c *)
                    ApplicationManagers_ResourceManager__InstantiateAsset_object_
                              (pSVar16,(System_String_o *)pCVar28,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
          pSVar15->klass = pSVar37;
          pSVar16 = pSVar15;
          il2cpp_runtime_helper_022b4080();
          if (pCVar28 != (Characters_HumanSetup_o *)0x0) {
            bVar12 = System_String__Contains((System_String_o *)pCVar28,"thunderspear",(MethodInfo *)0x0);
            if ((char)bVar12 == '\0') {
              Characters_HumanSetup__AttachToMount
                        (pCVar28,(UnityEngine_GameObject_o *)pSVar15->klass,
                         *(UnityEngine_GameObject_o **)((long)SVar30 + 0x50),0,in_R8);
              pSVar16 = *(System_String_o **)((long)SVar30 + 0xb8);
              if (pSVar16 != (System_String_o *)0x0) {
                pUVar32 = (UnityEngine_Renderer_o *)
                          UnityEngine_GameObject__GetComponentInChildren_object_
                                    ((UnityEngine_GameObject_o *)pSVar16,MethodInfo_Renderer_GetComponentInChildren_Renderer);
                if (pUVar32 != (UnityEngine_Renderer_o *)0x0) {
                  UnityEngine_Renderer__set_material(pUVar32,pUVar36,(MethodInfo *)0x0);
                  goto label_042ed4ec;
                }
              }
            }
            else {
              Characters_HumanSetup__AttachToMount
                        (pCVar28,(UnityEngine_GameObject_o *)pSVar15->klass,
                         *(UnityEngine_GameObject_o **)((long)SVar30 + 0x60),0,in_R8);
label_042ed4ec:
              Characters_HumanSetup__ApplyCharacterEffectToPart
                        ((Characters_HumanSetup_o *)SVar30,*(UnityEngine_GameObject_o **)((long)SVar30 + 0xb8)
                         ,iVar14,0,in_R8);
              pSVar16 = (System_String_o *)0x0;
              if (*(UnityEngine_GameObject_o **)((long)SVar30 + 0xb8) != (UnityEngine_GameObject_o *)0x0) {
                pUVar35 = (UnityEngine_Object_o *)
                          UnityEngine_GameObject__GetComponentInChildren_object_
                                    (*(UnityEngine_GameObject_o **)((long)SVar30 + 0xb8),MethodInfo_MeleeWeaponTrail_GetComponentInChildren_MeleeWeaponTrail);
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                bVar12 = UnityEngine_Object__op_Inequality
                                   (pUVar35,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                pMVar40 = extraout_RDX_22;
                if ((char)bVar12 == '\0') {
label_042ed58b:
                  pSVar16 = (System_String_o *)0x0;
                  if (*(Characters_HumanSetupMeshes_o **)((long)SVar30 + 0x168) !=
                      (Characters_HumanSetupMeshes_o *)0x0) {
                    pCVar28 = (Characters_HumanSetup_o *)
                              Characters_HumanSetupMeshes__GetWeaponMesh
                                        (*(Characters_HumanSetupMeshes_o **)((long)SVar30 + 0x168),0,pMVar40);
                    bVar12 = System_String__op_Inequality
                                       ((System_String_o *)pCVar28,
                                        (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                                        (MethodInfo *)0x0);
                    if ((char)bVar12 == '\0') {
                      return (System_String_o *)CONCAT44(extraout_var_03,bVar12);
                    }
                    if (*(int *)((long)TypeInfo_ResourcePaths + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pSVar15 = (System_String_o *)((long)SVar30 + 0xc0);
                    pSVar16 = *(System_String_o **)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
                    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pSVar37 = (System_String_c *)
                              ApplicationManagers_ResourceManager__InstantiateAsset_object_
                                        (pSVar16,(System_String_o *)pCVar28,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
                    pSVar15->klass = pSVar37;
                    pSVar16 = pSVar15;
                    il2cpp_runtime_helper_022b4080();
                    if (pCVar28 != (Characters_HumanSetup_o *)0x0) {
                      bVar12 = System_String__Contains
                                         ((System_String_o *)pCVar28,"thunderspear",(MethodInfo *)0x0);
                      if ((char)bVar12 == '\0') {
                        Characters_HumanSetup__AttachToMount
                                  (pCVar28,(UnityEngine_GameObject_o *)pSVar15->klass,
                                   *(UnityEngine_GameObject_o **)((long)SVar30 + 0x58),0,in_R8);
                        pSVar16 = *(System_String_o **)((long)SVar30 + 0xc0);
                        if (pSVar16 != (System_String_o *)0x0) {
                          pUVar32 = (UnityEngine_Renderer_o *)
                                    UnityEngine_GameObject__GetComponentInChildren_object_
                                              ((UnityEngine_GameObject_o *)pSVar16,MethodInfo_Renderer_GetComponentInChildren_Renderer);
                          if (pUVar32 != (UnityEngine_Renderer_o *)0x0) {
                            UnityEngine_Renderer__set_material(pUVar32,pUVar36,(MethodInfo *)0x0);
                            goto label_042ed6a9;
                          }
                        }
                      }
                      else {
                        Characters_HumanSetup__AttachToMount
                                  (pCVar28,(UnityEngine_GameObject_o *)pSVar15->klass,
                                   *(UnityEngine_GameObject_o **)((long)SVar30 + 0x68),0,in_R8);
label_042ed6a9:
                        Characters_HumanSetup__ApplyCharacterEffectToPart
                                  ((Characters_HumanSetup_o *)SVar30,
                                   *(UnityEngine_GameObject_o **)((long)SVar30 + 0xc0),iVar14,0,in_R8);
                        pSVar16 = (System_String_o *)0x0;
                        if (*(UnityEngine_GameObject_o **)((long)SVar30 + 0xc0) !=
                            (UnityEngine_GameObject_o *)0x0) {
                          pUVar35 = (UnityEngine_Object_o *)
                                    UnityEngine_GameObject__GetComponentInChildren_object_
                                              (*(UnityEngine_GameObject_o **)((long)SVar30 + 0xc0),
                                               MethodInfo_MeleeWeaponTrail_GetComponentInChildren_MeleeWeaponTrail);
                          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                            il2cpp_runtime_helper_02337ed0();
                          }
                          bVar12 = UnityEngine_Object__op_Inequality
                                             (pUVar35,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                          if ((char)bVar12 == '\0') {
                            return (System_String_o *)CONCAT44(extraout_var_04,bVar12);
                          }
                          pSVar16 = (System_String_o *)0x0;
                          if (pSVar15->klass != (System_String_c *)0x0) {
                            pIVar25 = UnityEngine_GameObject__GetComponentInChildren_object_
                                                ((UnityEngine_GameObject_o *)pSVar15->klass,MethodInfo_MeleeWeaponTrail_GetComponentInChildren_MeleeWeaponTrail);
                            pSVar16 = (System_String_o *)((long)SVar30 + 0x180);
                            *(Il2CppObject **)((long)SVar30 + 0x180) = pIVar25;
                            il2cpp_runtime_helper_022b4080();
                            pSVar15 = *(System_String_o **)((long)SVar30 + 0x180);
                            if (pSVar15 != (System_String_o *)0x0) {
                              *(undefined1 *)&pSVar15[1].monitor = 0;
                              return pSVar15;
                            }
                          }
                        }
                      }
                    }
                  }
                }
                else {
                  pSVar16 = (System_String_o *)0x0;
                  if (pSVar15->klass != (System_String_c *)0x0) {
                    pIVar25 = UnityEngine_GameObject__GetComponentInChildren_object_
                                        ((UnityEngine_GameObject_o *)pSVar15->klass,MethodInfo_MeleeWeaponTrail_GetComponentInChildren_MeleeWeaponTrail);
                    pSVar16 = (System_String_o *)((long)SVar30 + 0x178);
                    *(Il2CppObject **)((long)SVar30 + 0x178) = pIVar25;
                    il2cpp_runtime_helper_022b4080();
                    if (*(long *)((long)SVar30 + 0x178) != 0) {
                      *(undefined1 *)(*(long *)((long)SVar30 + 0x178) + 0x20) = 0;
                      pMVar40 = extraout_RDX_23;
                      goto label_042ed58b;
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
  if (g_data_057ade99 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_EZSoftBone_GetComponentInChildren_EZSoftBone);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupPrefabs);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&"None");
    g_data_057ade99 = '\x01';
    pUVar35 = pSVar16[0x10].monitor;
    if (g_data_057adea2 != '\0') goto label_042ed78d;
label_042eda29:
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    pUVar35 = pSVar16[0x10].monitor;
    if (g_data_057adea2 == '\0') goto label_042eda29;
label_042ed78d:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar41 = pUVar35;
  bVar12 = UnityEngine_Object__op_Inequality(pUVar35,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 != '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar35,(MethodInfo *)0x0);
    pUVar41 = pUVar35;
  }
  if ((pSVar16[0x13].klass == (System_String_c *)0x0) ||
     (pvVar7 = ((pSVar16[0x13].klass)->_1).properties, pvVar7 == (void *)0x0)) goto label_042edaae;
  pSVar15 = *(System_String_o **)((long)pvVar7 + 0x18);
  pUVar41 = (UnityEngine_Object_o *)0x0;
  if (pSVar15 == (System_String_o *)0x0) goto label_042edaae;
  pSVar15 = System_String__Substring(pSVar15,4,(MethodInfo *)0x0);
  bVar12 = System_String__op_Inequality(pSVar15,(System_String_o *)"None",(MethodInfo *)0x0);
  if ((char)bVar12 == '\0') {
    return (System_String_o *)CONCAT44(extraout_var_05,bVar12);
  }
  if (*(int *)((long)TypeInfo_ResourcePaths + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar18 = *(System_String_o **)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
  if (*(int *)(TypeInfo_HumanSetupPrefabs + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057adebe != '\0') goto label_042ed874;
label_042eda70:
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupPrefabs);
    il2cpp_runtime_helper_023445d0(&"Back/Back");
    g_data_057adebe = '\x01';
    iVar3 = *(int *)(TypeInfo_HumanSetupPrefabs + 0xe4);
  }
  else {
    if (g_data_057adebe == '\0') goto label_042eda70;
label_042ed874:
    iVar3 = *(int *)(TypeInfo_HumanSetupPrefabs + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar28 = (Characters_HumanSetup_o *)&pSVar16[0x10].monitor;
  pSVar15 = System_String__Concat_3af7150
                      ((System_String_o *)**(undefined8 **)(TypeInfo_HumanSetupPrefabs + 0xb8),"Back/Back",pSVar15,
                       (MethodInfo *)0x0);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar25 = ApplicationManagers_ResourceManager__InstantiateAsset_object_(pSVar18,pSVar15,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
  pSVar16[0x10].monitor = pIVar25;
  il2cpp_runtime_helper_022b4080(pCVar28,pIVar25);
  Characters_HumanSetup__AttachToMount
            (pCVar28,pSVar16[0x10].monitor,(UnityEngine_GameObject_o *)pSVar16[4].fields,1,in_R8);
  pUVar41 = (UnityEngine_Object_o *)0x0;
  if (pSVar16[0x10].monitor == (UnityEngine_GameObject_o *)0x0) {
label_042edaae:
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ade9b == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupPrefabs);
      il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
      il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
      il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
      il2cpp_runtime_helper_023445d0(&"None");
      g_data_057ade9b = '\x01';
      pUVar27 = pUVar41[0x11].klass;
    }
    else {
      pUVar27 = pUVar41[0x11].klass;
    }
    if (g_data_057adea2 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057adea2 = '\x01';
      iVar3 = *(int *)(TypeInfo_Object + 0xe4);
    }
    else {
      iVar3 = *(int *)(TypeInfo_Object + 0xe4);
    }
    if (iVar3 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar44 = pUVar27;
    bVar12 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pUVar27,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar12 != '\0') {
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)pUVar27,(MethodInfo *)0x0);
      pUVar44 = pUVar27;
    }
    if ((pUVar41[0x13].klass != (UnityEngine_Object_c *)0x0) &&
       (pvVar7 = ((pUVar41[0x13].klass)->_1).fields, pvVar7 != (void *)0x0)) {
      pSVar15 = *(System_String_o **)((long)pvVar7 + 0x18);
      pUVar44 = (UnityEngine_Object_c *)0x0;
      if (pSVar15 != (System_String_o *)0x0) {
        pSVar15 = System_String__Substring(pSVar15,3,(MethodInfo *)0x0);
        bVar12 = System_String__op_Inequality(pSVar15,(System_String_o *)"None",(MethodInfo *)0x0);
        if ((char)bVar12 != '\0') {
          if (*(int *)((long)TypeInfo_ResourcePaths + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar16 = *(System_String_o **)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
          if (*(int *)(TypeInfo_HumanSetupPrefabs + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057adebf == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupPrefabs);
            il2cpp_runtime_helper_023445d0(&"Hat/Hat");
            g_data_057adebf = '\x01';
            iVar3 = *(int *)(TypeInfo_HumanSetupPrefabs + 0xe4);
          }
          else {
            iVar3 = *(int *)(TypeInfo_HumanSetupPrefabs + 0xe4);
          }
          if (iVar3 == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pCVar28 = (Characters_HumanSetup_o *)(pUVar41 + 0x11);
          pSVar15 = System_String__Concat_3af7150
                              ((System_String_o *)**(undefined8 **)(TypeInfo_HumanSetupPrefabs + 0xb8),"Hat/Hat",pSVar15,
                               (MethodInfo *)0x0);
          if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pUVar27 = (UnityEngine_Object_c *)
                    ApplicationManagers_ResourceManager__InstantiateAsset_object_
                              (pSVar16,pSVar15,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
          pUVar41[0x11].klass = pUVar27;
          il2cpp_runtime_helper_022b4080(pCVar28,pUVar27);
          Characters_HumanSetup__AttachToMount
                    (pCVar28,(UnityEngine_GameObject_o *)pUVar41[0x11].klass,pUVar41[5].monitor,1,in_R8);
          return extraout_RAX_08;
        }
        return (System_String_o *)CONCAT44(extraout_var_08,bVar12);
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ade9a == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupPrefabs);
      il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
      il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
      il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
      il2cpp_runtime_helper_023445d0(&"None");
      g_data_057ade9a = '\x01';
      pUVar35 = (UnityEngine_Object_o *)pUVar44[1]._1.namespaze;
    }
    else {
      pUVar35 = (UnityEngine_Object_o *)pUVar44[1]._1.namespaze;
    }
    if (g_data_057adea2 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057adea2 = '\x01';
      iVar3 = *(int *)(TypeInfo_Object + 0xe4);
    }
    else {
      iVar3 = *(int *)(TypeInfo_Object + 0xe4);
    }
    if (iVar3 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar41 = (UnityEngine_Object_o *)0x0;
    bVar12 = UnityEngine_Object__op_Inequality(pUVar35,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar12 != '\0') {
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar41 = (UnityEngine_Object_o *)0x0;
      UnityEngine_Object__Destroy_4e01c60(pUVar35,(MethodInfo *)0x0);
    }
    pIVar9 = pUVar44[1]._1.declaringType;
    if (((pIVar9 != (Il2CppClass *)0x0) && (pvVar7 = (pIVar9->_1).events, pvVar7 != (void *)0x0)) &&
       (pSVar15 = *(System_String_o **)((long)pvVar7 + 0x18), pSVar15 != (System_String_o *)0x0)) {
      pSVar15 = System_String__Substring(pSVar15,4,(MethodInfo *)0x0);
      bVar12 = System_String__op_Inequality(pSVar15,(System_String_o *)"None",(MethodInfo *)0x0);
      if ((char)bVar12 == '\0') {
        return (System_String_o *)CONCAT44(extraout_var_09,bVar12);
      }
      if (*(int *)((long)TypeInfo_ResourcePaths + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar16 = *(System_String_o **)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
      if (*(int *)(TypeInfo_HumanSetupPrefabs + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057adec0 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupPrefabs);
        il2cpp_runtime_helper_023445d0(&"Head/Head");
        g_data_057adec0 = '\x01';
        iVar3 = *(int *)(TypeInfo_HumanSetupPrefabs + 0xe4);
      }
      else {
        iVar3 = *(int *)(TypeInfo_HumanSetupPrefabs + 0xe4);
      }
      if (iVar3 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pCVar28 = (Characters_HumanSetup_o *)&pUVar44[1]._1.namespaze;
      pSVar15 = System_String__Concat_3af7150
                          ((System_String_o *)**(undefined8 **)(TypeInfo_HumanSetupPrefabs + 0xb8),"Head/Head",pSVar15,
                           (MethodInfo *)0x0);
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar25 = ApplicationManagers_ResourceManager__InstantiateAsset_object_(pSVar16,pSVar15,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
      pUVar44[1]._1.namespaze = (char *)pIVar25;
      il2cpp_runtime_helper_022b4080(pCVar28,pIVar25);
      Characters_HumanSetup__AttachToMount
                (pCVar28,(UnityEngine_GameObject_o *)pUVar44[1]._1.namespaze,
                 (UnityEngine_GameObject_o *)(pUVar44->_1).klass,1,in_R8);
      return extraout_RAX_09;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057adea2 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057adea2 = '\x01';
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar12 = UnityEngine_Object__op_Inequality(pUVar41,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar12 == '\0') {
      return (System_String_o *)CONCAT44(extraout_var_10,bVar12);
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar41,(MethodInfo *)0x0);
    return extraout_RAX_10;
  }
  pUVar35 = (UnityEngine_Object_o *)
            UnityEngine_GameObject__GetComponentInChildren_object_(pSVar16[0x10].monitor,MethodInfo_EZSoftBone_GetComponentInChildren_EZSoftBone);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar41 = pUVar35;
  bVar12 = UnityEngine_Object__op_Inequality(pUVar35,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pSVar15 = (System_String_o *)CONCAT44(extraout_var_06,bVar12);
  if ((char)bVar12 != '\0') {
    if (pUVar35 == (UnityEngine_Object_o *)0x0) goto label_042edaae;
    pUVar27 = pUVar35[7].klass;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar12 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pUVar27,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    pSVar15 = (System_String_o *)CONCAT44(extraout_var_07,bVar12);
    if ((char)bVar12 != '\0') {
      pUVar27 = (UnityEngine_Object_c *)
                UnityEngine_Component__get_transform((UnityEngine_Component_o *)pSVar16,(MethodInfo *)0x0);
      pUVar35[7].klass = pUVar27;
      pSVar15 = (System_String_o *)il2cpp_runtime_helper_022b4080(pUVar35 + 7,pUVar27);
      return pSVar15;
    }
  }
  return pSVar15;
}


// Characters.HumanSetupTextures$$GetBodyPantsTexture
// il2cpp: System_String_o* Characters_HumanSetupTextures__GetBodyPantsTexture (Characters_HumanSetupTextures_o* __this, const MethodInfo* method);
// 0x42ea060

System_String_o *
Characters_HumanSetupTextures__GetBodyPantsTexture(Characters_HumanSetupTextures_o *__this,MethodInfo *method)

{
  void **ppvVar1;
  UnityEngine_Object_Fields *pUVar2;
  int iVar3;
  Settings_StringSetting_o *pSVar4;
  Characters_HumanSetupMeshes_o *pCVar5;
  Settings_ColorSetting_o *pSVar6;
  void *pvVar7;
  System_Collections_Generic_HashSet_object__o *pSVar8;
  Il2CppClass *pIVar9;
  long lVar10;
  char *pcVar11;
  bool_conflict bVar12;
  uint uVar13;
  int32_t iVar14;
  long *plVar15;
  System_String_o *pSVar16;
  System_String_o *pSVar17;
  System_String_o *pSVar18;
  UnityEngine_Texture_o *pUVar19;
  System_String_Fields *pSVar20;
  Settings_HumanCustomSet_o *pSVar21;
  Utility_Color255_o *pUVar22;
  UnityEngine_GameObject_o *pUVar23;
  System_String_Fields *path;
  long *plVar24;
  long *path_00;
  Utility_Color255_o *pUVar25;
  undefined4 extraout_var;
  System_String_o *extraout_RAX;
  Il2CppObject *pIVar26;
  System_String_o *extraout_RAX_00;
  System_String_Fields SVar27;
  undefined4 extraout_var_00;
  System_String_o *extraout_RAX_01;
  undefined4 extraout_var_01;
  UnityEngine_Object_c *pUVar28;
  System_String_o *extraout_RAX_02;
  Characters_HumanSetup_o *pCVar29;
  Characters_HumanSetup_o *pCVar30;
  System_String_Fields SVar31;
  System_String_Fields SVar32;
  UnityEngine_Renderer_o *pUVar33;
  System_String_Fields method_00;
  System_String_Fields SVar34;
  System_String_Fields __this_00;
  System_String_o *extraout_RAX_03;
  System_String_Fields SVar35;
  System_String_o *extraout_RAX_04;
  UnityEngine_Object_o *pUVar36;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_SkinnedMeshRenderer_o *__this_02;
  UnityEngine_SkinnedMeshRenderer_o *__this_03;
  UnityEngine_Mesh_o *value;
  System_String_o *extraout_RAX_05;
  undefined8 *puVar37;
  UnityEngine_Material_o *pUVar38;
  undefined4 extraout_var_02;
  System_String_o *extraout_RAX_06;
  System_String_o *extraout_RAX_07;
  System_String_c *pSVar39;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  undefined4 extraout_var_05;
  undefined4 extraout_var_06;
  undefined4 extraout_var_07;
  undefined4 extraout_var_08;
  System_String_o *extraout_RAX_08;
  undefined4 extraout_var_09;
  System_String_o *extraout_RAX_09;
  undefined4 extraout_var_10;
  System_String_o *extraout_RAX_10;
  Settings_IntSetting_o *in_RCX;
  long lVar40;
  System_String_o *extraout_RDX;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_02;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *method_03;
  MethodInfo *extraout_RDX_06;
  MethodInfo *extraout_RDX_07;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  MethodInfo *method_07;
  MethodInfo *method_08;
  MethodInfo *method_09;
  MethodInfo *method_10;
  MethodInfo *method_11;
  MethodInfo *method_12;
  MethodInfo *method_13;
  MethodInfo *method_14;
  MethodInfo *method_15;
  MethodInfo *method_16;
  MethodInfo *method_17;
  MethodInfo *method_18;
  MethodInfo *method_19;
  MethodInfo *extraout_RDX_08;
  MethodInfo *extraout_RDX_09;
  MethodInfo *extraout_RDX_10;
  MethodInfo *extraout_RDX_11;
  MethodInfo *extraout_RDX_12;
  MethodInfo *extraout_RDX_13;
  MethodInfo *extraout_RDX_14;
  MethodInfo *extraout_RDX_15;
  MethodInfo *extraout_RDX_16;
  MethodInfo *extraout_RDX_17;
  MethodInfo *extraout_RDX_18;
  MethodInfo *extraout_RDX_19;
  MethodInfo *extraout_RDX_20;
  MethodInfo *method_20;
  MethodInfo *extraout_RDX_21;
  MethodInfo *extraout_RDX_22;
  MethodInfo *extraout_RDX_23;
  MethodInfo *pMVar41;
  UnityEngine_Object_o *pUVar42;
  MethodInfo *method_21;
  System_String_o **ppSVar43;
  Utility_Color255_o *__this_04;
  System_String_Fields __this_05;
  System_Object_array *__this_06;
  System_String_Fields __this_07;
  UnityEngine_Object_c *pUVar44;
  MethodInfo *in_R8;
  MethodInfo *in_R9;
  uint uVar45;
  UnityEngine_Texture_c **value_00;
  float fVar46;
  float fVar47;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 in_XMM1_Da;
  undefined4 in_XMM1_Db;
  float fVar48;
  float fVar49;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined8 in_XMM2_Qa;
  undefined8 in_XMM3_Qa;
  undefined8 in_XMM4_Qa;
  undefined8 in_XMM5_Qa;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;
  UnityEngine_Color_o value_01;
  UnityEngine_Color_o value_02;
  UnityEngine_Color_o value_03;
  UnityEngine_Color_o color;
  UnityEngine_Color_o color_00;
  UnityEngine_Color_o UVar50;
  UnityEngine_Color_o color_01;
  UnityEngine_Color_o in_stack_00000000;
  undefined4 uStack_2ac;
  long lStack_2a8;
  long *plStack_2a0;
  System_Object_array *pSStack_298;
  System_String_Fields SStack_290;
  System_String_Fields SStack_288;
  undefined1 auStack_280 [16];
  undefined1 auStack_270 [24];
  System_String_Fields SStack_258;
  System_String_Fields SStack_250;
  System_Object_array *pSStack_248;
  System_String_Fields SStack_240;
  Characters_HumanSetup_o *pCStack_238;
  System_String_Fields SStack_230;
  undefined1 auStack_228 [8];
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined1 auStack_218 [24];
  long *plStack_200;
  System_String_Fields SStack_1f8;
  System_Object_array *pSStack_1f0;
  System_String_Fields SStack_1e8;
  UnityEngine_Texture_o *pUStack_1e0;
  System_String_Fields SStack_1d8;
  System_String_o *pSStack_1d0;
  long *plStack_1c8;
  System_String_Fields SStack_1c0;
  System_Object_array *pSStack_1b8;
  System_String_Fields SStack_1b0;
  UnityEngine_Texture_o *pUStack_1a8;
  System_String_Fields SStack_1a0;
  System_String_o *pSStack_198;
  System_String_o *pSStack_190;
  Utility_Color255_o *pUStack_188;
  System_Object_array *pSStack_180;
  System_String_Fields SStack_178;
  UnityEngine_Texture_o *pUStack_170;
  Utility_Color255_o *pUStack_168;
  undefined8 uStack_160;
  Utility_Color255_o *pUStack_158;
  Characters_HumanSetup_o *pCStack_150;
  Characters_HumanSetup_o *pCStack_148;
  UnityEngine_Texture_o *pUStack_140;
  undefined1 auStack_138 [16];
  undefined1 auStack_128 [24];
  System_String_o *pSStack_110;
  MethodInfo *pMStack_108;
  long *plStack_100;
  Characters_HumanSetup_o *pCStack_f8;
  UnityEngine_Texture_o *pUStack_f0;
  System_String_o *pSStack_e8;
  UnityEngine_Texture_o *pUStack_d8;
  System_String_o *pSStack_d0;
  Settings_IntSetting_o *pSStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_50;
  Characters_HumanSetupTextures_o *pCStack_38;
  
  ppSVar43 = (System_String_o **)__this;
  if (g_data_057adec9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&"Pants/Shoes_Casual");
    il2cpp_runtime_helper_023445d0(&"_pants_tex");
    ppSVar43 = &"Pants/";
    il2cpp_runtime_helper_023445d0();
    g_data_057adec9 = '\x01';
  }
  pCVar29 = (__this->fields)._setup;
  if (pCVar29 != (Characters_HumanSetup_o *)0x0) {
    pSVar21 = (pCVar29->fields).CustomSet;
    in_RCX = (Settings_IntSetting_o *)0x0;
    if ((pSVar21 != (Settings_HumanCustomSet_o *)0x0) &&
       (in_RCX = (pSVar21->fields).Boots, in_RCX != (Settings_IntSetting_o *)0x0)) {
      if ((in_RCX->fields)._value == 1) {
        return "Pants/Shoes_Casual";
      }
      ppSVar43 = (System_String_o **)(pCVar29->fields).CurrentCostume;
      if (((System_String_o *)ppSVar43 != (System_String_o *)0x0) &&
         (method = "_pants_tex",
         plVar15 = (long *)(*(((System_String_o *)ppSVar43)->klass->vtable)._7_CompareTo.methodPtr)
                                     (ppSVar43,"_pants_tex",
                                      (((System_String_o *)ppSVar43)->klass->vtable)._7_CompareTo.method),
         plVar15 != (long *)0x0)) {
        pSVar16 = (System_String_o *)
                  (**(code **)(*plVar15 + 0x1c8))(plVar15,*(undefined8 *)(*plVar15 + 0x1d0));
        pSVar16 = System_String__Concat_3ae5ba0("Pants/",pSVar16,(MethodInfo *)0x0);
        return pSVar16;
      }
    }
  }
  uStack_c0 = il2cpp_runtime_helper_022b2c90();
  pSStack_d0 = extraout_RDX;
  pSStack_c8 = in_RCX;
  uStack_b0 = in_XMM1_Da;
  uStack_ac = in_XMM1_Db;
  uStack_a0 = in_XMM2_Qa;
  uStack_90 = in_XMM3_Qa;
  uStack_80 = in_XMM4_Qa;
  uStack_70 = in_XMM5_Qa;
  uStack_60 = in_XMM6_Qa;
  uStack_50 = in_XMM7_Qa;
  pCStack_38 = __this;
  if (g_data_057adea5 == '\0') {
    pSStack_e8 = (System_String_o *)0x42ea198;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupMaterials);
    pSStack_e8 = (System_String_o *)0x42ea1a4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Material_InstantiateAsset_Material);
    pSStack_e8 = (System_String_o *)0x42ea1b0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    pSStack_e8 = (System_String_o *)0x42ea1bc;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    pSStack_e8 = (System_String_o *)0x42ea1c8;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
    pSStack_e8 = (System_String_o *)0x42ea1d4;
    il2cpp_runtime_helper_023445d0(&"HumanCostumeMat");
    pSStack_e8 = (System_String_o *)0x42ea1e0;
    il2cpp_runtime_helper_023445d0(&"_jacket_color");
    pSStack_e8 = (System_String_o *)0x42ea1ec;
    il2cpp_runtime_helper_023445d0(&"_main_tex_mask");
    pSStack_e8 = (System_String_o *)0x42ea1f8;
    il2cpp_runtime_helper_023445d0(&"_pants_tex");
    pSStack_e8 = (System_String_o *)0x42ea204;
    il2cpp_runtime_helper_023445d0(&"_main_tex");
    pSStack_e8 = (System_String_o *)0x42ea210;
    il2cpp_runtime_helper_023445d0(&"_color_tex");
    pSStack_e8 = (System_String_o *)0x42ea21c;
    il2cpp_runtime_helper_023445d0(&"_boots_color");
    pSStack_e8 = (System_String_o *)0x42ea228;
    il2cpp_runtime_helper_023445d0(&"_straps_color");
    pSStack_e8 = (System_String_o *)0x42ea234;
    il2cpp_runtime_helper_023445d0(&"_pants_color");
    pSStack_e8 = (System_String_o *)0x42ea240;
    il2cpp_runtime_helper_023445d0(&"_shirt_color");
    g_data_057adea5 = '\x01';
  }
  if (*(int *)((long)TypeInfo_ResourcePaths + 0xe4) == 0) {
    pSStack_e8 = (System_String_o *)0x42ea264;
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar20 = &TypeInfo_ResourcePaths;
  pSVar16 = *(System_String_o **)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
  if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
    pSStack_e8 = (System_String_o *)0x42ea293;
    il2cpp_runtime_helper_02337ed0();
  }
  plVar15 = &TypeInfo_HumanSetupMaterials;
  pSStack_e8 = (System_String_o *)0x42ea2b6;
  pSVar17 = System_String__Concat_3ae5ba0
                      (*(System_String_o **)(*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 0x28),"HumanCostumeMat",
                       (MethodInfo *)0x0);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    pSStack_e8 = (System_String_o *)0x42ea2d1;
    il2cpp_runtime_helper_02337ed0();
  }
  pSStack_e8 = (System_String_o *)0x42ea2eb;
  pSVar17 = (System_String_o *)
            ApplicationManagers_ResourceManager__InstantiateAsset_object_(pSVar16,pSVar17,1,MethodInfo_Material_InstantiateAsset_Material);
  pSVar16 = *(System_String_o **)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
  pSStack_e8 = (System_String_o *)0x42ea315;
  pSVar18 = System_String__Concat_3ae5ba0
                      (*(System_String_o **)(*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 0x20),
                       (System_String_o *)ppSVar43,(MethodInfo *)0x0);
  pSStack_e8 = (System_String_o *)0x42ea324;
  pUVar19 = (UnityEngine_Texture_o *)
            ApplicationManagers_ResourceManager__LoadAsset(pSVar16,pSVar18,0,(MethodInfo *)0x0);
  value_00 = &TypeInfo_Texture2D;
  if ((pUVar19 == (UnityEngine_Texture_o *)0x0) || (pUVar19->klass == TypeInfo_Texture2D)) {
    pSVar16 = *(System_String_o **)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
    pSStack_e8 = (System_String_o *)0x42ea368;
    pUStack_d8 = pUVar19;
    pSVar18 = System_String__Concat_3ae5ba0
                        (*(System_String_o **)(*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 0x20),
                         (System_String_o *)method,(MethodInfo *)0x0);
    pSStack_e8 = (System_String_o *)0x42ea377;
    method = (MethodInfo *)ApplicationManagers_ResourceManager__LoadAsset(pSVar16,pSVar18,0,(MethodInfo *)0x0)
    ;
    if ((method != (MethodInfo *)0x0) && ((UnityEngine_Texture_c *)method->methodPointer != TypeInfo_Texture2D))
    goto label_042ea55f;
    pSVar16 = *(System_String_o **)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
    pSStack_e8 = (System_String_o *)0x42ea3b5;
    pSVar18 = System_String__Concat_3ae5ba0
                        (*(System_String_o **)(*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 0x20),pSStack_d0,
                         (MethodInfo *)0x0);
    pSStack_e8 = (System_String_o *)0x42ea3c4;
    value_00 = (UnityEngine_Texture_c **)
               ApplicationManagers_ResourceManager__LoadAsset(pSVar16,pSVar18,0,(MethodInfo *)0x0);
    if (((UnityEngine_Texture_o *)value_00 != (UnityEngine_Texture_o *)0x0) &&
       (((UnityEngine_Texture_o *)value_00)->klass != TypeInfo_Texture2D)) goto label_042ea567;
    pSVar16 = *(System_String_o **)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
    pSStack_e8 = (System_String_o *)0x42ea408;
    pSVar18 = System_String__Concat_3ae5ba0
                        (*(System_String_o **)(*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 0x20),
                         (System_String_o *)pSStack_c8,(MethodInfo *)0x0);
    pSStack_e8 = (System_String_o *)0x42ea417;
    pSVar20 = (System_String_Fields *)
              ApplicationManagers_ResourceManager__LoadAsset(pSVar16,pSVar18,0,(MethodInfo *)0x0);
    if (((Characters_HumanSetup_o *)pSVar20 == (Characters_HumanSetup_o *)0x0) ||
       ((UnityEngine_Texture_c *)((Characters_HumanSetup_o *)pSVar20)->klass == TypeInfo_Texture2D)) {
      if (pSVar17 != (System_String_o *)0x0) {
        pSStack_e8 = (System_String_o *)0x42ea45c;
        UnityEngine_Material__SetTexture
                  ((UnityEngine_Material_o *)pSVar17,"_main_tex",pUStack_d8,(MethodInfo *)0x0);
        pSStack_e8 = (System_String_o *)0x42ea473;
        UnityEngine_Material__SetTexture
                  ((UnityEngine_Material_o *)pSVar17,"_main_tex_mask",(UnityEngine_Texture_o *)method,
                   (MethodInfo *)0x0);
        pSStack_e8 = (System_String_o *)0x42ea48a;
        UnityEngine_Material__SetTexture
                  ((UnityEngine_Material_o *)pSVar17,"_color_tex",(UnityEngine_Texture_o *)value_00,
                   (MethodInfo *)0x0);
        pSStack_e8 = (System_String_o *)0x42ea4a1;
        UnityEngine_Material__SetTexture
                  ((UnityEngine_Material_o *)pSVar17,(System_String_o *)"_pants_tex",
                   (UnityEngine_Texture_o *)pSVar20,(MethodInfo *)0x0);
        UVar50.fields.a = (float)uStack_ac;
        UVar50.fields.b = (float)uStack_b0;
        pSStack_e8 = (System_String_o *)0x42ea4bf;
        UVar50.fields.r = (float)(undefined4)uStack_c0;
        UVar50.fields.g = (float)uStack_c0._4_4_;
        UnityEngine_Material__SetColor
                  ((UnityEngine_Material_o *)pSVar17,"_shirt_color",UVar50,(MethodInfo *)0x0);
        pSStack_e8 = (System_String_o *)0x42ea4dd;
        value_01.fields.b = (float)(undefined4)uStack_90;
        value_01.fields.a = (float)uStack_90._4_4_;
        value_01.fields.r = (float)(undefined4)uStack_a0;
        value_01.fields.g = (float)uStack_a0._4_4_;
        UnityEngine_Material__SetColor
                  ((UnityEngine_Material_o *)pSVar17,"_straps_color",value_01,(MethodInfo *)0x0);
        pSStack_e8 = (System_String_o *)0x42ea4fb;
        value_02.fields.b = (float)(undefined4)uStack_70;
        value_02.fields.a = (float)uStack_70._4_4_;
        value_02.fields.r = (float)(undefined4)uStack_80;
        value_02.fields.g = (float)uStack_80._4_4_;
        UnityEngine_Material__SetColor
                  ((UnityEngine_Material_o *)pSVar17,"_pants_color",value_02,(MethodInfo *)0x0);
        pSStack_e8 = (System_String_o *)0x42ea51f;
        value_03.fields.b = (float)(undefined4)uStack_50;
        value_03.fields.a = (float)uStack_50._4_4_;
        value_03.fields.r = (float)(undefined4)uStack_60;
        value_03.fields.g = (float)uStack_60._4_4_;
        UnityEngine_Material__SetColor
                  ((UnityEngine_Material_o *)pSVar17,"_jacket_color",value_03,(MethodInfo *)0x0);
        pSStack_e8 = (System_String_o *)0x42ea53d;
        UnityEngine_Material__SetColor
                  ((UnityEngine_Material_o *)pSVar17,"_boots_color",in_stack_00000000,(MethodInfo *)0x0);
        return pSVar17;
      }
      pSStack_e8 = (System_String_o *)0x42ea557;
      pUVar19 = (UnityEngine_Texture_o *)il2cpp_runtime_helper_022b2c90();
      goto label_042ea557;
    }
  }
  else {
label_042ea557:
    pSStack_e8 = (System_String_o *)0x42ea55f;
    il2cpp_runtime_helper_022b2fd0(pUVar19);
label_042ea55f:
    pSStack_e8 = (System_String_o *)0x42ea567;
    il2cpp_runtime_helper_022b2fd0(method);
label_042ea567:
    pSStack_e8 = (System_String_o *)0x42ea56f;
    il2cpp_runtime_helper_022b2fd0(value_00);
  }
  pSStack_e8 = (System_String_o *)0x42ea577;
  pCVar29 = (Characters_HumanSetup_o *)pSVar20;
  il2cpp_runtime_helper_022b2fd0();
  plStack_100 = &TypeInfo_HumanSetupMaterials;
  pSStack_110 = pSVar17;
  pMStack_108 = method;
  pCStack_f8 = (Characters_HumanSetup_o *)pSVar20;
  pUStack_f0 = (UnityEngine_Texture_o *)value_00;
  pSStack_e8 = pSVar16;
  if (g_data_057ade92 == '\0') {
    pUStack_140 = (UnityEngine_Texture_o *)0x42ea8c5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEffectPresets);
    pUStack_140 = (UnityEngine_Texture_o *)0x42ea8d1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ClothFactory);
    pUStack_140 = (UnityEngine_Texture_o *)0x42ea8dd;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponentsInChildren_Renderer);
    pUStack_140 = (UnityEngine_Texture_o *)0x42ea8e9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupMaterials);
    pUStack_140 = (UnityEngine_Texture_o *)0x42ea8f5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    pUStack_140 = (UnityEngine_Texture_o *)0x42ea901;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    pUStack_140 = (UnityEngine_Texture_o *)0x42ea90d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    pUStack_140 = (UnityEngine_Texture_o *)0x42ea919;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    pUStack_140 = (UnityEngine_Texture_o *)0x42ea925;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color255_get_Value);
    pUStack_140 = (UnityEngine_Texture_o *)0x42ea931;
    il2cpp_runtime_helper_023445d0(&"IgnoreColor");
    g_data_057ade92 = '\x01';
    pUVar22 = (Utility_Color255_o *)(pCVar29->fields)._part_hair;
    if (g_data_057adea2 != '\0') goto label_042ea5b3;
label_042ea94d:
    pUStack_140 = (UnityEngine_Texture_o *)0x42ea959;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    pUVar22 = (Utility_Color255_o *)(pCVar29->fields)._part_hair;
    if (g_data_057adea2 == '\0') goto label_042ea94d;
label_042ea5b3:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    pUStack_140 = (UnityEngine_Texture_o *)0x42ea97d;
    il2cpp_runtime_helper_02337ed0();
  }
  path_00 = &TypeInfo_Object;
  pUStack_140 = (UnityEngine_Texture_o *)0x42ea5d7;
  __this_04 = pUVar22;
  bVar12 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pUVar22,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 == '\0') {
    if ((char)(pCVar29->fields).IsDeadBody == '\0') goto label_042ea9ad;
label_042ea5ee:
    pSVar21 = (pCVar29->fields).CustomSet;
    if (pSVar21 != (Settings_HumanCustomSet_o *)0x0) goto label_042ea5ff;
label_042eabbd:
    pUStack_140 = (UnityEngine_Texture_o *)0x42eabc2;
    il2cpp_runtime_helper_022b2c90();
    path = (System_String_Fields *)plVar15;
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      pUStack_140 = (UnityEngine_Texture_o *)0x42ea994;
      il2cpp_runtime_helper_02337ed0();
    }
    pUStack_140 = (UnityEngine_Texture_o *)0x42ea99e;
    __this_04 = pUVar22;
    UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)pUVar22,(MethodInfo *)0x0);
    if ((char)(pCVar29->fields).IsDeadBody != '\0') goto label_042ea5ee;
label_042ea9ad:
    pUVar22 = (Utility_Color255_o *)(pCVar29->fields)._part_hair_1;
    if (*(int *)(TypeInfo_ClothFactory + 0xe4) == 0) {
      pUStack_140 = (UnityEngine_Texture_o *)0x42ea9cd;
      il2cpp_runtime_helper_02337ed0();
    }
    pUStack_140 = (UnityEngine_Texture_o *)0x42ea9d7;
    __this_04 = pUVar22;
    ClothFactory__DisposeObject((UnityEngine_GameObject_o *)pUVar22,(MethodInfo *)0x0);
    pSVar21 = (pCVar29->fields).CustomSet;
    if (pSVar21 == (Settings_HumanCustomSet_o *)0x0) goto label_042eabbd;
label_042ea5ff:
    pSVar4 = (pSVar21->fields).HairEffect;
    if (pSVar4 == (Settings_StringSetting_o *)0x0) goto label_042eabbd;
    pUVar22 = (Utility_Color255_o *)(pSVar4->fields)._value;
    if (*(int *)(TypeInfo_CharacterEffectPresets + 0xe4) == 0) {
      pUStack_140 = (UnityEngine_Texture_o *)0x42ea62b;
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar41 = (MethodInfo *)0x0;
    pUStack_140 = (UnityEngine_Texture_o *)0x42ea635;
    uVar13 = PatreonEffects_CharacterEffectPresets__ParseOrDefault
                       ((System_String_o *)pUVar22,(MethodInfo *)0x0);
    pCVar5 = (pCVar29->fields)._meshes;
    __this_04 = (Utility_Color255_o *)0x0;
    if (pCVar5 == (Characters_HumanSetupMeshes_o *)0x0) goto label_042eabbd;
    pSVar20 = (System_String_Fields *)(ulong)uVar13;
    pUStack_140 = (UnityEngine_Texture_o *)0x42ea64e;
    pUVar22 = (Utility_Color255_o *)Characters_HumanSetupMeshes__GetHairMesh(pCVar5,pMVar41);
    pMVar41 = (MethodInfo *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    pUStack_140 = (UnityEngine_Texture_o *)0x42ea673;
    bVar12 = System_String__op_Inequality
                       ((System_String_o *)pUVar22,(System_String_o *)pMVar41,(MethodInfo *)0x0);
    if ((char)bVar12 == '\0') {
label_042eaa10:
      path_00 = &g_data_057b9b70;
      pCVar5 = (pCVar29->fields)._meshes;
      __this_04 = (Utility_Color255_o *)0x0;
      if (pCVar5 != (Characters_HumanSetupMeshes_o *)0x0) {
        pUStack_140 = (UnityEngine_Texture_o *)0x42eaa26;
        pUVar22 = (Utility_Color255_o *)Characters_HumanSetupMeshes__GetHairClothMesh(pCVar5,pMVar41);
        pUStack_140 = (UnityEngine_Texture_o *)0x42eaa44;
        __this_04 = pUVar22;
        bVar12 = System_String__op_Inequality
                           ((System_String_o *)pUVar22,
                            (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
        if (((char)bVar12 == '\0') || ((char)(pCVar29->fields).IsDeadBody != '\0')) {
          return (System_String_o *)CONCAT44(extraout_var,bVar12);
        }
        path_00 = (long *)(pCVar29->fields)._textures;
        if ((Utility_Color255_o *)path_00 != (Utility_Color255_o *)0x0) {
          if (g_data_057adec5 == '\0') {
            __this_04 = (Utility_Color255_o *)&"Texture";
            pUStack_140 = (UnityEngine_Texture_o *)0x42eaa88;
            il2cpp_runtime_helper_023445d0();
            g_data_057adec5 = '\x01';
          }
          if ((*(System_String_Fields *)&((Utility_Color255_o *)path_00)->fields != (System_String_Fields)0x0)
             && (__this_04 = *(Utility_Color255_o **)
                              ((long)*(System_String_Fields *)&((Utility_Color255_o *)path_00)->fields + 0x1e0
                              ), __this_04 != (Utility_Color255_o *)0x0)) {
            pUStack_140 = (UnityEngine_Texture_o *)0x42eaac6;
            plVar24 = (long *)(*(((System_String_c *)__this_04->klass)->vtable)._7_CompareTo.methodPtr)
                                        (__this_04,"Texture",
                                         (((System_String_c *)__this_04->klass)->vtable)._7_CompareTo.method);
            if (plVar24 != (long *)0x0) {
              pMVar41 = *(MethodInfo **)(*plVar24 + 0x1d0);
              pUStack_140 = (UnityEngine_Texture_o *)0x42eaae2;
              path_00 = (long *)(**(code **)(*plVar24 + 0x1c8))(plVar24);
              if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
                pUStack_140 = (UnityEngine_Texture_o *)0x42eaafd;
                il2cpp_runtime_helper_02337ed0();
              }
              pUStack_140 = (UnityEngine_Texture_o *)0x42eab05;
              __this_04 = (Utility_Color255_o *)path_00;
              value_00 = (UnityEngine_Texture_c **)
                         Characters_HumanSetupMaterials__GetHairMaterial((System_String_o *)path_00,pMVar41);
              pSVar21 = (pCVar29->fields).CustomSet;
              if ((pSVar21 != (Settings_HumanCustomSet_o *)0x0) &&
                 (pSVar6 = (pSVar21->fields).HairColor, pSVar6 != (Settings_ColorSetting_o *)0x0)) {
                pUVar25 = (pSVar6->fields)._value;
                __this_04 = (Utility_Color255_o *)0x0;
                if (pUVar25 != (Utility_Color255_o *)0x0) {
                  pUVar23 = (pCVar29->fields)._mount_cloth;
                  pUStack_140 = (UnityEngine_Texture_o *)0x42eab45;
                  UVar50 = Utility_Color255__ToColor(pUVar25,(MethodInfo *)0x0);
                  fVar46 = UVar50.fields.r;
                  fVar47 = UVar50.fields.g;
                  fVar48 = UVar50.fields.b;
                  fVar49 = UVar50.fields.a;
                  if (*(int *)(TypeInfo_ClothFactory + 0xe4) == 0) {
                    auStack_138._8_4_ = extraout_XMM0_Dc;
                    auStack_138._0_8_ = UVar50.fields._0_8_;
                    auStack_138._12_4_ = extraout_XMM0_Dd;
                    auStack_128._8_4_ = in_XMM1_Dc;
                    auStack_128._0_8_ = UVar50.fields._8_8_;
                    auStack_128._12_4_ = in_XMM1_Dd;
                    pUStack_140 = (UnityEngine_Texture_o *)0x42eab66;
                    il2cpp_runtime_helper_02337ed0();
                    fVar46 = (float)auStack_138._0_4_;
                    fVar47 = (float)auStack_138._4_4_;
                    fVar48 = (float)auStack_128._0_4_;
                    fVar49 = (float)auStack_128._4_4_;
                  }
                  pUStack_140 = (UnityEngine_Texture_o *)0x42eab7f;
                  color.fields.g = fVar47;
                  color.fields.r = fVar46;
                  color.fields.a = fVar49;
                  color.fields.b = fVar48;
                  pUVar23 = ClothFactory__GetHair
                                      (pUVar23,(System_String_o *)pUVar22,(UnityEngine_Material_o *)value_00,
                                       color,(MethodInfo *)0x0);
                  (pCVar29->fields)._part_hair_1 = pUVar23;
                  pUStack_140 = (UnityEngine_Texture_o *)0x42eab97;
                  il2cpp_runtime_helper_022b4080(&(pCVar29->fields)._part_hair_1,pUVar23);
                  Characters_HumanSetup__ApplyCharacterEffectToPart
                            (pCVar29,(pCVar29->fields)._part_hair_1,(int32_t)pSVar20,1,in_R8);
                  return extraout_RAX;
                }
              }
            }
          }
        }
      }
      goto label_042eabbd;
    }
    if (*(int *)((long)TypeInfo_ResourcePaths + 0xe4) == 0) {
      pUStack_140 = (UnityEngine_Texture_o *)0x42ea694;
      il2cpp_runtime_helper_02337ed0();
    }
    value_00 = (UnityEngine_Texture_c **)&(pCVar29->fields)._part_hair;
    path_00 = *(long **)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      pUStack_140 = (UnityEngine_Texture_o *)0x42ea6c3;
      il2cpp_runtime_helper_02337ed0();
    }
    auStack_138._0_4_ = uVar13;
    pUStack_140 = (UnityEngine_Texture_o *)0x42ea6e1;
    pUVar23 = (UnityEngine_GameObject_o *)
              ApplicationManagers_ResourceManager__InstantiateAsset_object_
                        ((System_String_o *)path_00,(System_String_o *)pUVar22,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
    (pCVar29->fields)._part_hair = pUVar23;
    pUStack_140 = (UnityEngine_Texture_o *)0x42ea6f4;
    pCVar30 = (Characters_HumanSetup_o *)value_00;
    il2cpp_runtime_helper_022b4080(value_00,pUVar23);
    pUStack_140 = (UnityEngine_Texture_o *)0x42ea70b;
    Characters_HumanSetup__AttachToMount
              (pCVar30,(pCVar29->fields)._part_hair,(pCVar29->fields)._part_head,0,in_R8);
    __this_04 = (Utility_Color255_o *)(pCVar29->fields)._part_hair;
    if (__this_04 == (Utility_Color255_o *)0x0) goto label_042eabbd;
    pUStack_140 = (UnityEngine_Texture_o *)0x42ea72b;
    path = (System_String_Fields *)
           UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                     ((UnityEngine_GameObject_o *)__this_04,MethodInfo_Renderer_GetComponentsInChildren_Renderer);
    if ((System_Object_array *)path == (System_Object_array *)0x0) goto label_042eabbd;
    iVar3 = (int)((System_Object_array *)path)->max_length;
    plVar15 = (long *)path;
    if (iVar3 < 1) {
label_042ea9ed:
      pMVar41 = (MethodInfo *)(pCVar29->fields)._part_hair;
      pSVar20 = (System_String_Fields *)(ulong)(uint)auStack_138._0_4_;
      pUStack_140 = (UnityEngine_Texture_o *)0x42eaa09;
      Characters_HumanSetup__ApplyCharacterEffectToPart
                (pCVar29,(UnityEngine_GameObject_o *)pMVar41,auStack_138._0_4_,1,in_R8);
      goto label_042eaa10;
    }
    pSVar20 = (System_String_Fields *)0x0;
    value_00 = (UnityEngine_Texture_c **)&"Texture";
    if (iVar3 != 0) {
      do {
        path_00 = (long *)(pCVar29->fields)._textures;
        if ((Utility_Color255_o *)path_00 == (Utility_Color255_o *)0x0) goto label_042eabbd;
        pUVar22 = (Utility_Color255_o *)((System_Object_array *)path)->m_Items[(int)pSVar20];
        if (g_data_057adec5 == '\0') {
          __this_04 = (Utility_Color255_o *)&"Texture";
          pUStack_140 = (UnityEngine_Texture_o *)0x42ea7a4;
          il2cpp_runtime_helper_023445d0();
          g_data_057adec5 = '\x01';
        }
        if ((*(System_String_Fields *)&((Utility_Color255_o *)path_00)->fields == (System_String_Fields)0x0)
           || (__this_04 = *(Utility_Color255_o **)
                            ((long)*(System_String_Fields *)&((Utility_Color255_o *)path_00)->fields + 0x1e0),
              __this_04 == (Utility_Color255_o *)0x0)) goto label_042eabbd;
        pUStack_140 = (UnityEngine_Texture_o *)0x42ea7db;
        plVar24 = (long *)(*(((System_String_c *)__this_04->klass)->vtable)._7_CompareTo.methodPtr)
                                    (__this_04,"Texture",
                                     (((System_String_c *)__this_04->klass)->vtable)._7_CompareTo.method);
        if (plVar24 == (long *)0x0) goto label_042eabbd;
        pMVar41 = *(MethodInfo **)(*plVar24 + 0x1d0);
        pUStack_140 = (UnityEngine_Texture_o *)0x42ea7f7;
        path_00 = (long *)(**(code **)(*plVar24 + 0x1c8))(plVar24);
        if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
          pUStack_140 = (UnityEngine_Texture_o *)0x42ea812;
          il2cpp_runtime_helper_02337ed0();
        }
        pUStack_140 = (UnityEngine_Texture_o *)0x42ea81a;
        __this_04 = (Utility_Color255_o *)path_00;
        pUVar38 = Characters_HumanSetupMaterials__GetHairMaterial((System_String_o *)path_00,pMVar41);
        if (pUVar22 == (Utility_Color255_o *)0x0) goto label_042eabbd;
        pUStack_140 = (UnityEngine_Texture_o *)0x42ea830;
        UnityEngine_Renderer__set_material((UnityEngine_Renderer_o *)pUVar22,pUVar38,(MethodInfo *)0x0);
        pUStack_140 = (UnityEngine_Texture_o *)0x42ea83a;
        __this_04 = pUVar22;
        pUVar25 = (Utility_Color255_o *)
                  UnityEngine_Object__get_name((UnityEngine_Object_o *)pUVar22,(MethodInfo *)0x0);
        if (pUVar25 == (Utility_Color255_o *)0x0) goto label_042eabbd;
        pUStack_140 = (UnityEngine_Texture_o *)0x42ea857;
        bVar12 = System_String__Contains((System_String_o *)pUVar25,"IgnoreColor",(MethodInfo *)0x0);
        if ((char)bVar12 == '\0') {
          pUStack_140 = (UnityEngine_Texture_o *)0x42ea869;
          __this_04 = pUVar22;
          pUVar22 = (Utility_Color255_o *)
                    UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)pUVar22,(MethodInfo *)0x0);
          pSVar21 = (pCVar29->fields).CustomSet;
          if (((pSVar21 == (Settings_HumanCustomSet_o *)0x0) ||
              (pSVar6 = (pSVar21->fields).HairColor, pSVar6 == (Settings_ColorSetting_o *)0x0)) ||
             (__this_04 = (pSVar6->fields)._value, __this_04 == (Utility_Color255_o *)0x0)) goto label_042eabbd;
          pUStack_140 = (UnityEngine_Texture_o *)0x42ea8a1;
          UVar50 = Utility_Color255__ToColor(__this_04,(MethodInfo *)0x0);
          if (pUVar22 == (Utility_Color255_o *)0x0) goto label_042eabbd;
          pUStack_140 = (UnityEngine_Texture_o *)0x42ea8b4;
          pUVar25 = pUVar22;
          UnityEngine_Material__set_color((UnityEngine_Material_o *)pUVar22,UVar50,(MethodInfo *)0x0);
        }
        uVar45 = (int)pSVar20 + 1;
        pSVar20 = (System_String_Fields *)(ulong)uVar45;
        uVar13 = (uint)((System_Object_array *)path)->max_length;
        if ((int)uVar13 <= (int)uVar45) goto label_042ea9ed;
        __this_04 = pUVar25;
      } while (uVar45 < uVar13);
    }
  }
  pUStack_140 = (UnityEngine_Texture_o *)0x42eabc7;
  uStack_160 = il2cpp_runtime_helper_022b2ca0();
  pUStack_158 = pUVar22;
  pCStack_150 = pCVar29;
  pCStack_148 = (Characters_HumanSetup_o *)pSVar20;
  pUStack_140 = (UnityEngine_Texture_o *)value_00;
  if (g_data_057ade96 == '\0') {
    pUStack_168 = (Utility_Color255_o *)0x42ead45;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    pUStack_168 = (Utility_Color255_o *)0x42ead51;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    pUStack_168 = (Utility_Color255_o *)0x42ead5d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    pUStack_168 = (Utility_Color255_o *)0x42ead69;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    pUStack_168 = (Utility_Color255_o *)0x42ead75;
    il2cpp_runtime_helper_023445d0(&"Eye");
    g_data_057ade96 = '\x01';
    SVar27 = *(System_String_Fields *)&__this_04[8].fields;
    if (g_data_057adea2 != '\0') goto label_042eabfd;
label_042ead91:
    pUStack_168 = (Utility_Color255_o *)0x42ead9d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    SVar27 = *(System_String_Fields *)&__this_04[8].fields;
    if (g_data_057adea2 == '\0') goto label_042ead91;
label_042eabfd:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    pUStack_168 = (Utility_Color255_o *)0x42eadc0;
    il2cpp_runtime_helper_02337ed0();
  }
  pUStack_168 = (Utility_Color255_o *)0x42eac20;
  bVar12 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)SVar27,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 == '\0') {
    if (*(int *)((long)TypeInfo_ResourcePaths + 0xe4) == 0) goto label_042eadf7;
label_042eac3f:
    pvVar7 = __this_04[0xb].monitor;
    SVar31 = TypeInfo_ResourcePaths;
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      pUStack_168 = (Utility_Color255_o *)0x42eadd6;
      il2cpp_runtime_helper_02337ed0();
    }
    pUStack_168 = (Utility_Color255_o *)0x42eade0;
    UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)SVar27,(MethodInfo *)0x0);
    if (*(int *)((long)TypeInfo_ResourcePaths + 0xe4) != 0) goto label_042eac3f;
label_042eadf7:
    pUStack_168 = (Utility_Color255_o *)0x42eadfc;
    il2cpp_runtime_helper_02337ed0();
    pvVar7 = __this_04[0xb].monitor;
    SVar31 = TypeInfo_ResourcePaths;
  }
  pSVar16 = (System_String_o *)0x0;
  TypeInfo_ResourcePaths = SVar31;
  if (pvVar7 != (void *)0x0) {
    SVar27 = *(System_String_Fields *)(*(long *)((long)SVar31 + 0xb8) + 8);
    if (g_data_057adeb7 == '\0') {
      pUStack_168 = (Utility_Color255_o *)0x42eac70;
      il2cpp_runtime_helper_023445d0(&"char_eyes");
      g_data_057adeb7 = '\x01';
    }
    value_00 = (UnityEngine_Texture_c **)&__this_04[8].fields;
    pUStack_168 = (Utility_Color255_o *)0x42eac94;
    pSVar16 = System_String__Concat_3ae5ba0
                        (*(System_String_o **)((long)pvVar7 + 0x38),"char_eyes",(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      pUStack_168 = (Utility_Color255_o *)0x42eacaf;
      il2cpp_runtime_helper_02337ed0();
    }
    pUStack_168 = (Utility_Color255_o *)0x42eacc9;
    pIVar26 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                        ((System_String_o *)SVar27,pSVar16,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
    *(Il2CppObject **)&__this_04[8].fields = pIVar26;
    pUStack_168 = (Utility_Color255_o *)0x42eacdc;
    SVar31 = (System_String_Fields)value_00;
    il2cpp_runtime_helper_022b4080(value_00,pIVar26);
    pUStack_168 = (Utility_Color255_o *)0x42eacf3;
    Characters_HumanSetup__AttachToMount
              ((Characters_HumanSetup_o *)SVar31,*(UnityEngine_GameObject_o **)&__this_04[8].fields,
               (UnityEngine_GameObject_o *)*(System_String_Fields *)&__this_04[10].monitor,0,in_R8);
    if ((__this_04[0xe].monitor != (void *)0x0) &&
       (lVar40 = *(long *)((long)__this_04[0xe].monitor + 0x40), lVar40 != 0)) {
      Characters_HumanSetup__SetFacialTexture
                ((Characters_HumanSetup_o *)SVar31,*(UnityEngine_GameObject_o **)&__this_04[8].fields,
                 "Eye",*(int32_t *)(lVar40 + 0x14),0,in_R9);
      return extraout_RAX_00;
    }
  }
  pUStack_168 = (Utility_Color255_o *)0x42eae15;
  pSStack_198 = (System_String_o *)il2cpp_runtime_helper_022b2c90();
  pSStack_190 = pSVar16;
  pUStack_188 = __this_04;
  pSStack_180 = (System_Object_array *)path;
  SStack_178 = SVar27;
  pUStack_170 = (UnityEngine_Texture_o *)value_00;
  pUStack_168 = (Utility_Color255_o *)path_00;
  if (g_data_057ade97 == '\0') {
    SStack_1a0._stringLength = 0x42eb0a3;
    SStack_1a0._firstChar = 0;
    SStack_1a0._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    SStack_1a0._stringLength = 0x42eb0af;
    SStack_1a0._firstChar = 0;
    SStack_1a0._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetup);
    SStack_1a0._stringLength = 0x42eb0bb;
    SStack_1a0._firstChar = 0;
    SStack_1a0._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    SStack_1a0._stringLength = 0x42eb0c7;
    SStack_1a0._firstChar = 0;
    SStack_1a0._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    SStack_1a0._stringLength = 0x42eb0d3;
    SStack_1a0._firstChar = 0;
    SStack_1a0._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    SStack_1a0._stringLength = 0x42eb0df;
    SStack_1a0._firstChar = 0;
    SStack_1a0._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    SStack_1a0._stringLength = 0x42eb0eb;
    SStack_1a0._firstChar = 0;
    SStack_1a0._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&"None");
    SStack_1a0._stringLength = 0x42eb0f7;
    SStack_1a0._firstChar = 0;
    SStack_1a0._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&"Face");
    g_data_057ade97 = '\x01';
    SVar35 = *(System_String_Fields *)((long)SVar31 + 0x118);
    if (g_data_057adea2 != '\0') goto label_042eae50;
label_042eb113:
    SStack_1a0._stringLength = 0x42eb11f;
    SStack_1a0._firstChar = 0;
    SStack_1a0._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    SVar35 = *(System_String_Fields *)((long)SVar31 + 0x118);
    if (g_data_057adea2 == '\0') goto label_042eb113;
label_042eae50:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    SStack_1a0._stringLength = 0x42eb142;
    SStack_1a0._firstChar = 0;
    SStack_1a0._6_2_ = 0;
    il2cpp_runtime_helper_02337ed0();
  }
  plVar15 = &TypeInfo_Object;
  SStack_1a0._stringLength = 0x42eae73;
  SStack_1a0._firstChar = 0;
  SStack_1a0._6_2_ = 0;
  SVar32 = SVar35;
  bVar12 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)SVar35,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 != '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      SStack_1a0._stringLength = 0x42eae88;
      SStack_1a0._firstChar = 0;
      SStack_1a0._6_2_ = 0;
      il2cpp_runtime_helper_02337ed0();
    }
    SStack_1a0._stringLength = 0x42eae92;
    SStack_1a0._firstChar = 0;
    SStack_1a0._6_2_ = 0;
    SVar32 = SVar35;
    UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)SVar35,(MethodInfo *)0x0);
  }
  if ((*(long *)((long)SVar31 + 0x1c8) != 0) &&
     (lVar40 = *(long *)(*(long *)((long)SVar31 + 0x1c8) + 0x48), lVar40 != 0)) {
    pSVar16 = *(System_String_o **)(lVar40 + 0x18);
    SVar32._stringLength = 0;
    SVar32._firstChar = 0;
    SVar32._6_2_ = 0;
    if (pSVar16 != (System_String_o *)0x0) {
      SStack_1a0._stringLength = 0x42eaec9;
      SStack_1a0._firstChar = 0;
      SStack_1a0._6_2_ = 0;
      SVar27 = (System_String_Fields)System_String__Substring(pSVar16,4,(MethodInfo *)0x0);
      SStack_1a0._stringLength = 0x42eaee0;
      SStack_1a0._firstChar = 0;
      SStack_1a0._6_2_ = 0;
      SVar32 = SVar27;
      bVar12 = System_String__op_Inequality
                         ((System_String_o *)SVar27,(System_String_o *)"None",(MethodInfo *)0x0);
      if ((char)bVar12 == '\0') {
        return (System_String_o *)CONCAT44(extraout_var_00,bVar12);
      }
      if ((*(long *)((long)SVar31 + 0x1c8) != 0) &&
         (lVar40 = *(long *)(*(long *)((long)SVar31 + 0x1c8) + 0x48), lVar40 != 0)) {
        SVar35 = *(System_String_Fields *)(lVar40 + 0x18);
        plVar15 = &TypeInfo_HumanSetup;
        if (*(int *)(TypeInfo_HumanSetup + 0xe4) == 0) {
          SStack_1a0._stringLength = 0x42eaf22;
          SStack_1a0._firstChar = 0;
          SStack_1a0._6_2_ = 0;
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar8 = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_HumanSetup + 0xb8) + 0x40);
        SVar32._stringLength = 0;
        SVar32._firstChar = 0;
        SVar32._6_2_ = 0;
        if (pSVar8 != (System_Collections_Generic_HashSet_object__o *)0x0) {
          SStack_1a0._stringLength = 0x42eaf4b;
          SStack_1a0._firstChar = 0;
          SStack_1a0._6_2_ = 0;
          uVar13 = System_Collections_Generic_HashSet_object___Contains
                             (pSVar8,(Il2CppObject *)SVar35,MethodInfo_Boolean_Contains);
          value_00 = (UnityEngine_Texture_c **)(ulong)uVar13;
          if ((char)uVar13 == '\0') {
            SVar35 = **(System_String_Fields **)(g_data_057b9c00 + 0xb8);
            iVar3 = *(int *)((long)TypeInfo_ResourcePaths + 0xe4);
          }
          else {
            iVar3 = *(int *)((long)TypeInfo_ResourcePaths + 0xe4);
          }
          if (iVar3 == 0) {
            SStack_1a0._stringLength = 0x42eb18a;
            SStack_1a0._firstChar = 0;
            SStack_1a0._6_2_ = 0;
            il2cpp_runtime_helper_02337ed0();
            lVar40 = *(long *)((long)SVar31 + 0x168);
            SVar32 = TypeInfo_ResourcePaths;
          }
          else {
            lVar40 = *(long *)((long)SVar31 + 0x168);
            SVar32 = TypeInfo_ResourcePaths;
          }
          plVar15 = (long *)0x0;
          TypeInfo_ResourcePaths = SVar32;
          if (lVar40 != 0) {
            pSStack_198 = *(System_String_o **)
                           (*(UnityEngine_Object_StaticFields **)((long)SVar32 + 0xb8) + 2);
            if (g_data_057adeb8 == '\0') {
              SStack_1a0._stringLength = 0x42eafa2;
              SStack_1a0._firstChar = 0;
              SStack_1a0._6_2_ = 0;
              il2cpp_runtime_helper_023445d0(&"char_face");
              g_data_057adeb8 = '\x01';
            }
            SStack_1a0._stringLength = 0x42eafcb;
            SStack_1a0._firstChar = 0;
            SStack_1a0._6_2_ = 0;
            bVar12 = System_String__op_Inequality
                               ((System_String_o *)SVar35,
                                (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
            if ((char)bVar12 == '\0') {
              SVar35 = "char_face";
            }
            pCVar29 = (Characters_HumanSetup_o *)((long)SVar31 + 0x118);
            SStack_1a0._stringLength = 0x42eafef;
            SStack_1a0._firstChar = 0;
            SStack_1a0._6_2_ = 0;
            pSVar16 = System_String__Concat_3ae5ba0
                                (*(System_String_o **)(lVar40 + 0x38),(System_String_o *)SVar35,
                                 (MethodInfo *)0x0);
            if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
              SStack_1a0._stringLength = 0x42eb00a;
              SStack_1a0._firstChar = 0;
              SStack_1a0._6_2_ = 0;
              il2cpp_runtime_helper_02337ed0();
            }
            SStack_1a0._stringLength = 0x42eb025;
            SStack_1a0._firstChar = 0;
            SStack_1a0._6_2_ = 0;
            pIVar26 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                                (pSStack_198,pSVar16,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
            *(Il2CppObject **)((long)SVar31 + 0x118) = pIVar26;
            SStack_1a0._stringLength = 0x42eb038;
            SStack_1a0._firstChar = 0;
            SStack_1a0._6_2_ = 0;
            il2cpp_runtime_helper_022b4080(pCVar29,pIVar26);
            lVar40 = 0x148;
            if ((char)uVar13 != '\0') {
              lVar40 = 0x78;
            }
            SStack_1a0._stringLength = 0x42eb060;
            SStack_1a0._firstChar = 0;
            SStack_1a0._6_2_ = 0;
            Characters_HumanSetup__AttachToMount
                      (pCVar29,*(UnityEngine_GameObject_o **)((long)SVar31 + 0x118),
                       *(UnityEngine_GameObject_o **)((long)SVar31 + lVar40),uVar13 & 0xff,in_R8);
            pUVar23 = *(UnityEngine_GameObject_o **)((long)SVar31 + 0x118);
            SStack_1a0._stringLength = 0x42eb072;
            SStack_1a0._firstChar = 0;
            SStack_1a0._6_2_ = 0;
            iVar14 = System_Int32__Parse((System_String_o *)SVar27,(MethodInfo *)0x0);
            Characters_HumanSetup__SetFacialTexture
                      ((Characters_HumanSetup_o *)SVar27,pUVar23,"Face",iVar14,uVar13 & 0xff,in_R9);
            return extraout_RAX_01;
          }
        }
      }
    }
  }
  SStack_1a0._stringLength = 0x42eb1a3;
  SStack_1a0._firstChar = 0;
  SStack_1a0._6_2_ = 0;
  pSStack_1d0 = (System_String_o *)il2cpp_runtime_helper_022b2c90();
  plStack_1c8 = plVar15;
  SStack_1c0 = SVar31;
  pSStack_1b8 = (System_Object_array *)path;
  SStack_1b0 = SVar27;
  pUStack_1a8 = (UnityEngine_Texture_o *)value_00;
  SStack_1a0 = SVar35;
  if (g_data_057ade98 == '\0') {
    SStack_1d8._stringLength = 0x42eb433;
    SStack_1d8._firstChar = 0;
    SStack_1d8._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    SStack_1d8._stringLength = 0x42eb43f;
    SStack_1d8._firstChar = 0;
    SStack_1d8._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetup);
    SStack_1d8._stringLength = 0x42eb44b;
    SStack_1d8._firstChar = 0;
    SStack_1d8._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    SStack_1d8._stringLength = 0x42eb457;
    SStack_1d8._firstChar = 0;
    SStack_1d8._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    SStack_1d8._stringLength = 0x42eb463;
    SStack_1d8._firstChar = 0;
    SStack_1d8._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    SStack_1d8._stringLength = 0x42eb46f;
    SStack_1d8._firstChar = 0;
    SStack_1d8._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    SStack_1d8._stringLength = 0x42eb47b;
    SStack_1d8._firstChar = 0;
    SStack_1d8._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&"None");
    SStack_1d8._stringLength = 0x42eb487;
    SStack_1d8._firstChar = 0;
    SStack_1d8._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&"Glass");
    g_data_057ade98 = '\x01';
    SVar31 = (System_String_Fields)((UnityEngine_Object_o *)((long)SVar32 + 0x120))->klass;
    if (g_data_057adea2 != '\0') goto label_042eb1e0;
label_042eb4a3:
    SStack_1d8._stringLength = 0x42eb4af;
    SStack_1d8._firstChar = 0;
    SStack_1d8._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    SVar31 = (System_String_Fields)((UnityEngine_Object_o *)((long)SVar32 + 0x120))->klass;
    if (g_data_057adea2 == '\0') goto label_042eb4a3;
label_042eb1e0:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    SStack_1d8._stringLength = 0x42eb4d2;
    SStack_1d8._firstChar = 0;
    SStack_1d8._6_2_ = 0;
    il2cpp_runtime_helper_02337ed0();
  }
  plVar15 = &TypeInfo_Object;
  SVar35._stringLength = 0;
  SVar35._firstChar = 0;
  SVar35._6_2_ = 0;
  SStack_1d8._stringLength = 0x42eb203;
  SStack_1d8._firstChar = 0;
  SStack_1d8._6_2_ = 0;
  __this_05 = SVar31;
  bVar12 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)SVar31,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 != '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      SStack_1d8._stringLength = 0x42eb218;
      SStack_1d8._firstChar = 0;
      SStack_1d8._6_2_ = 0;
      il2cpp_runtime_helper_02337ed0();
    }
    SVar35._stringLength = 0;
    SVar35._firstChar = 0;
    SVar35._6_2_ = 0;
    SStack_1d8._stringLength = 0x42eb222;
    SStack_1d8._firstChar = 0;
    SStack_1d8._6_2_ = 0;
    __this_05 = SVar31;
    UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)SVar31,(MethodInfo *)0x0);
  }
  pUVar28 = ((UnityEngine_Object_o *)((long)SVar32 + 0x1c8))->klass;
  if ((pUVar28 != (UnityEngine_Object_c *)0x0) &&
     (pIVar9 = (pUVar28->_1).declaringType, pIVar9 != (Il2CppClass *)0x0)) {
    pSVar16 = (System_String_o *)(pIVar9->_1).namespaze;
    __this_05._stringLength = 0;
    __this_05._firstChar = 0;
    __this_05._6_2_ = 0;
    if (pSVar16 != (System_String_o *)0x0) {
      SStack_1d8._stringLength = 0x42eb259;
      SStack_1d8._firstChar = 0;
      SStack_1d8._6_2_ = 0;
      SVar27 = (System_String_Fields)System_String__Substring(pSVar16,5,(MethodInfo *)0x0);
      SStack_1d8._stringLength = 0x42eb270;
      SStack_1d8._firstChar = 0;
      SStack_1d8._6_2_ = 0;
      SVar35 = "None";
      __this_05 = SVar27;
      bVar12 = System_String__op_Inequality
                         ((System_String_o *)SVar27,(System_String_o *)"None",(MethodInfo *)0x0);
      if ((char)bVar12 == '\0') {
        return (System_String_o *)CONCAT44(extraout_var_01,bVar12);
      }
      pUVar28 = ((UnityEngine_Object_o *)((long)SVar32 + 0x1c8))->klass;
      if ((pUVar28 != (UnityEngine_Object_c *)0x0) &&
         (pIVar9 = (pUVar28->_1).declaringType, pIVar9 != (Il2CppClass *)0x0)) {
        SVar31 = (System_String_Fields)(pIVar9->_1).namespaze;
        plVar15 = &TypeInfo_HumanSetup;
        if (*(int *)(TypeInfo_HumanSetup + 0xe4) == 0) {
          SStack_1d8._stringLength = 0x42eb2b2;
          SStack_1d8._firstChar = 0;
          SStack_1d8._6_2_ = 0;
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar8 = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_HumanSetup + 0xb8) + 0x40);
        __this_05._stringLength = 0;
        __this_05._firstChar = 0;
        __this_05._6_2_ = 0;
        if (pSVar8 != (System_Collections_Generic_HashSet_object__o *)0x0) {
          SStack_1d8._stringLength = 0x42eb2db;
          SStack_1d8._firstChar = 0;
          SStack_1d8._6_2_ = 0;
          SVar35 = SVar31;
          uVar13 = System_Collections_Generic_HashSet_object___Contains
                             (pSVar8,(Il2CppObject *)SVar31,MethodInfo_Boolean_Contains);
          value_00 = (UnityEngine_Texture_c **)(ulong)uVar13;
          if ((char)uVar13 == '\0') {
            SVar31 = **(System_String_Fields **)(g_data_057b9c00 + 0xb8);
            iVar3 = *(int *)((long)TypeInfo_ResourcePaths + 0xe4);
          }
          else {
            iVar3 = *(int *)((long)TypeInfo_ResourcePaths + 0xe4);
          }
          if (iVar3 == 0) {
            SStack_1d8._stringLength = 0x42eb51a;
            SStack_1d8._firstChar = 0;
            SStack_1d8._6_2_ = 0;
            il2cpp_runtime_helper_02337ed0();
            pUVar28 = ((UnityEngine_Object_o *)((long)SVar32 + 0x168))->klass;
            __this_05 = TypeInfo_ResourcePaths;
          }
          else {
            pUVar28 = ((UnityEngine_Object_o *)((long)SVar32 + 0x168))->klass;
            __this_05 = TypeInfo_ResourcePaths;
          }
          plVar15 = (long *)0x0;
          TypeInfo_ResourcePaths = __this_05;
          if (pUVar28 != (UnityEngine_Object_c *)0x0) {
            pSStack_1d0 = *(System_String_o **)((long)*(System_String_Fields *)((long)__this_05 + 0xb8) + 8);
            if (g_data_057adeb9 == '\0') {
              SStack_1d8._stringLength = 0x42eb332;
              SStack_1d8._firstChar = 0;
              SStack_1d8._6_2_ = 0;
              il2cpp_runtime_helper_023445d0(&"char_glasses");
              g_data_057adeb9 = '\x01';
            }
            SStack_1d8._stringLength = 0x42eb35b;
            SStack_1d8._firstChar = 0;
            SStack_1d8._6_2_ = 0;
            bVar12 = System_String__op_Inequality
                               ((System_String_o *)SVar31,
                                (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
            if ((char)bVar12 == '\0') {
              SVar31 = "char_glasses";
            }
            pCVar29 = (Characters_HumanSetup_o *)((long)SVar32 + 0x120);
            SStack_1d8._stringLength = 0x42eb37f;
            SStack_1d8._firstChar = 0;
            SStack_1d8._6_2_ = 0;
            pSVar16 = System_String__Concat_3ae5ba0
                                (*(System_String_o **)&(pUVar28->_1).this_arg.bits,(System_String_o *)SVar31,
                                 (MethodInfo *)0x0);
            if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
              SStack_1d8._stringLength = 0x42eb39a;
              SStack_1d8._firstChar = 0;
              SStack_1d8._6_2_ = 0;
              il2cpp_runtime_helper_02337ed0();
            }
            SStack_1d8._stringLength = 0x42eb3b5;
            SStack_1d8._firstChar = 0;
            SStack_1d8._6_2_ = 0;
            pUVar28 = (UnityEngine_Object_c *)
                      ApplicationManagers_ResourceManager__InstantiateAsset_object_
                                (pSStack_1d0,pSVar16,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
            ((UnityEngine_Object_o *)((long)SVar32 + 0x120))->klass = pUVar28;
            SStack_1d8._stringLength = 0x42eb3c8;
            SStack_1d8._firstChar = 0;
            SStack_1d8._6_2_ = 0;
            il2cpp_runtime_helper_022b4080(pCVar29,pUVar28);
            lVar40 = 0x148;
            if ((char)uVar13 != '\0') {
              lVar40 = 0x78;
            }
            SStack_1d8._stringLength = 0x42eb3f0;
            SStack_1d8._firstChar = 0;
            SStack_1d8._6_2_ = 0;
            Characters_HumanSetup__AttachToMount
                      (pCVar29,(UnityEngine_GameObject_o *)
                               ((UnityEngine_Object_o *)((long)SVar32 + 0x120))->klass,
                       *(UnityEngine_GameObject_o **)((long)SVar32 + lVar40),uVar13 & 0xff,in_R8);
            pUVar28 = ((UnityEngine_Object_o *)((long)SVar32 + 0x120))->klass;
            SStack_1d8._stringLength = 0x42eb402;
            SStack_1d8._firstChar = 0;
            SStack_1d8._6_2_ = 0;
            iVar14 = System_Int32__Parse((System_String_o *)SVar27,(MethodInfo *)0x0);
            Characters_HumanSetup__SetFacialTexture
                      ((Characters_HumanSetup_o *)SVar27,(UnityEngine_GameObject_o *)pUVar28,"Glass",
                       iVar14,uVar13 & 0xff,in_R9);
            return extraout_RAX_02;
          }
        }
      }
    }
  }
  SStack_1d8._stringLength = 0x42eb533;
  SStack_1d8._firstChar = 0;
  SStack_1d8._6_2_ = 0;
  il2cpp_runtime_helper_022b2c90();
  plStack_200 = plVar15;
  SStack_1f8 = SVar32;
  pSStack_1f0 = (System_Object_array *)path;
  SStack_1e8 = SVar27;
  pUStack_1e0 = (UnityEngine_Texture_o *)value_00;
  SStack_1d8 = SVar31;
  if (g_data_057ade9e == '\0') {
    SStack_230._stringLength = 0x42ebdc7;
    SStack_230._firstChar = 0;
    SStack_230._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ClothFactory);
    SStack_230._stringLength = 0x42ebdd3;
    SStack_230._firstChar = 0;
    SStack_230._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponent_Renderer);
    SStack_230._stringLength = 0x42ebddf;
    SStack_230._firstChar = 0;
    SStack_230._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupMaterials);
    SStack_230._stringLength = 0x42ebdeb;
    SStack_230._firstChar = 0;
    SStack_230._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    SStack_230._stringLength = 0x42ebdf7;
    SStack_230._firstChar = 0;
    SStack_230._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    SStack_230._stringLength = 0x42ebe03;
    SStack_230._firstChar = 0;
    SStack_230._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    SStack_230._stringLength = 0x42ebe0f;
    SStack_230._firstChar = 0;
    SStack_230._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color255_get_Value);
    SStack_230._stringLength = 0x42ebe1b;
    SStack_230._firstChar = 0;
    SStack_230._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&"Type");
    SStack_230._stringLength = 0x42ebe27;
    SStack_230._firstChar = 0;
    SStack_230._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&"Uniform");
    g_data_057ade9e = '\x01';
    pUVar36 = *(UnityEngine_Object_o **)((long)__this_05 + 0x158);
    if (g_data_057adea2 != '\0') goto label_042eb576;
label_042ebe43:
    SStack_230._stringLength = 0x42ebe4f;
    SStack_230._firstChar = 0;
    SStack_230._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    pUVar36 = *(UnityEngine_Object_o **)((long)__this_05 + 0x158);
    if (g_data_057adea2 == '\0') goto label_042ebe43;
label_042eb576:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    SStack_230._stringLength = 0x42ebe72;
    SStack_230._firstChar = 0;
    SStack_230._6_2_ = 0;
    il2cpp_runtime_helper_02337ed0();
  }
  SStack_230._stringLength = 0x42eb599;
  SStack_230._firstChar = 0;
  SStack_230._6_2_ = 0;
  bVar12 = UnityEngine_Object__op_Inequality(pUVar36,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 == '\0') {
    pUVar36 = *(UnityEngine_Object_o **)((long)__this_05 + 200);
    if (g_data_057adea2 == '\0') goto label_042ebea7;
label_042eb5b6:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      SStack_230._stringLength = 0x42ebe88;
      SStack_230._firstChar = 0;
      SStack_230._6_2_ = 0;
      il2cpp_runtime_helper_02337ed0();
    }
    SStack_230._stringLength = 0x42ebe92;
    SStack_230._firstChar = 0;
    SStack_230._6_2_ = 0;
    UnityEngine_Object__Destroy_4e01c60(pUVar36,(MethodInfo *)0x0);
    pUVar36 = *(UnityEngine_Object_o **)((long)__this_05 + 200);
    if (g_data_057adea2 != '\0') goto label_042eb5b6;
label_042ebea7:
    SStack_230._stringLength = 0x42ebeb3;
    SStack_230._firstChar = 0;
    SStack_230._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    SStack_230._stringLength = 0x42ebecf;
    SStack_230._firstChar = 0;
    SStack_230._6_2_ = 0;
    il2cpp_runtime_helper_02337ed0();
  }
  SStack_230._stringLength = 0x42eb5d2;
  SStack_230._firstChar = 0;
  SStack_230._6_2_ = 0;
  bVar12 = UnityEngine_Object__op_Inequality(pUVar36,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 == '\0') {
    pUVar36 = *(UnityEngine_Object_o **)((long)__this_05 + 0xd0);
    if (g_data_057adea2 == '\0') goto label_042ebf04;
label_042eb5ef:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      SStack_230._stringLength = 0x42ebee5;
      SStack_230._firstChar = 0;
      SStack_230._6_2_ = 0;
      il2cpp_runtime_helper_02337ed0();
    }
    SStack_230._stringLength = 0x42ebeef;
    SStack_230._firstChar = 0;
    SStack_230._6_2_ = 0;
    UnityEngine_Object__Destroy_4e01c60(pUVar36,(MethodInfo *)0x0);
    pUVar36 = *(UnityEngine_Object_o **)((long)__this_05 + 0xd0);
    if (g_data_057adea2 != '\0') goto label_042eb5ef;
label_042ebf04:
    SStack_230._stringLength = 0x42ebf10;
    SStack_230._firstChar = 0;
    SStack_230._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    SStack_230._stringLength = 0x42ebf2c;
    SStack_230._firstChar = 0;
    SStack_230._6_2_ = 0;
    il2cpp_runtime_helper_02337ed0();
  }
  SStack_230._stringLength = 0x42eb60b;
  SStack_230._firstChar = 0;
  SStack_230._6_2_ = 0;
  bVar12 = UnityEngine_Object__op_Inequality(pUVar36,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 == '\0') {
    pUVar36 = *(UnityEngine_Object_o **)((long)__this_05 + 0xd8);
    if (g_data_057adea2 == '\0') goto label_042ebf61;
label_042eb628:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      SStack_230._stringLength = 0x42ebf42;
      SStack_230._firstChar = 0;
      SStack_230._6_2_ = 0;
      il2cpp_runtime_helper_02337ed0();
    }
    SStack_230._stringLength = 0x42ebf4c;
    SStack_230._firstChar = 0;
    SStack_230._6_2_ = 0;
    UnityEngine_Object__Destroy_4e01c60(pUVar36,(MethodInfo *)0x0);
    pUVar36 = *(UnityEngine_Object_o **)((long)__this_05 + 0xd8);
    if (g_data_057adea2 != '\0') goto label_042eb628;
label_042ebf61:
    SStack_230._stringLength = 0x42ebf6d;
    SStack_230._firstChar = 0;
    SStack_230._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    SStack_230._stringLength = 0x42ebf89;
    SStack_230._firstChar = 0;
    SStack_230._6_2_ = 0;
    il2cpp_runtime_helper_02337ed0();
  }
  SStack_230._stringLength = 0x42eb644;
  SStack_230._firstChar = 0;
  SStack_230._6_2_ = 0;
  bVar12 = UnityEngine_Object__op_Inequality(pUVar36,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 == '\0') {
    pUVar36 = *(UnityEngine_Object_o **)((long)__this_05 + 0xe0);
    if (g_data_057adea2 == '\0') goto label_042ebfbe;
label_042eb661:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      SStack_230._stringLength = 0x42ebf9f;
      SStack_230._firstChar = 0;
      SStack_230._6_2_ = 0;
      il2cpp_runtime_helper_02337ed0();
    }
    SStack_230._stringLength = 0x42ebfa9;
    SStack_230._firstChar = 0;
    SStack_230._6_2_ = 0;
    UnityEngine_Object__Destroy_4e01c60(pUVar36,(MethodInfo *)0x0);
    pUVar36 = *(UnityEngine_Object_o **)((long)__this_05 + 0xe0);
    if (g_data_057adea2 != '\0') goto label_042eb661;
label_042ebfbe:
    SStack_230._stringLength = 0x42ebfca;
    SStack_230._firstChar = 0;
    SStack_230._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    SStack_230._stringLength = 0x42ebfe6;
    SStack_230._firstChar = 0;
    SStack_230._6_2_ = 0;
    il2cpp_runtime_helper_02337ed0();
  }
  SStack_230._stringLength = 0x42eb67d;
  SStack_230._firstChar = 0;
  SStack_230._6_2_ = 0;
  bVar12 = UnityEngine_Object__op_Inequality(pUVar36,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 == '\0') {
    pUVar36 = *(UnityEngine_Object_o **)((long)__this_05 + 0xf8);
    if (g_data_057adea2 == '\0') goto label_042ec01b;
label_042eb69a:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      SStack_230._stringLength = 0x42ebffc;
      SStack_230._firstChar = 0;
      SStack_230._6_2_ = 0;
      il2cpp_runtime_helper_02337ed0();
    }
    SStack_230._stringLength = 0x42ec006;
    SStack_230._firstChar = 0;
    SStack_230._6_2_ = 0;
    UnityEngine_Object__Destroy_4e01c60(pUVar36,(MethodInfo *)0x0);
    pUVar36 = *(UnityEngine_Object_o **)((long)__this_05 + 0xf8);
    if (g_data_057adea2 != '\0') goto label_042eb69a;
label_042ec01b:
    SStack_230._stringLength = 0x42ec027;
    SStack_230._firstChar = 0;
    SStack_230._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    SStack_230._stringLength = 0x42ec043;
    SStack_230._firstChar = 0;
    SStack_230._6_2_ = 0;
    il2cpp_runtime_helper_02337ed0();
  }
  SStack_230._stringLength = 0x42eb6b6;
  SStack_230._firstChar = 0;
  SStack_230._6_2_ = 0;
  bVar12 = UnityEngine_Object__op_Inequality(pUVar36,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 == '\0') {
    SVar31 = *(System_String_Fields *)((long)__this_05 + 0x100);
    if (g_data_057adea2 == '\0') goto label_042ec078;
label_042eb6d3:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      SStack_230._stringLength = 0x42ec059;
      SStack_230._firstChar = 0;
      SStack_230._6_2_ = 0;
      il2cpp_runtime_helper_02337ed0();
    }
    SStack_230._stringLength = 0x42ec063;
    SStack_230._firstChar = 0;
    SStack_230._6_2_ = 0;
    UnityEngine_Object__Destroy_4e01c60(pUVar36,(MethodInfo *)0x0);
    SVar31 = *(System_String_Fields *)((long)__this_05 + 0x100);
    if (g_data_057adea2 != '\0') goto label_042eb6d3;
label_042ec078:
    SStack_230._stringLength = 0x42ec084;
    SStack_230._firstChar = 0;
    SStack_230._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    SStack_230._stringLength = 0x42ec0a0;
    SStack_230._firstChar = 0;
    SStack_230._6_2_ = 0;
    il2cpp_runtime_helper_02337ed0();
  }
  method_00._stringLength = 0;
  method_00._firstChar = 0;
  method_00._6_2_ = 0;
  SStack_230._stringLength = 0x42eb6ef;
  SStack_230._firstChar = 0;
  SStack_230._6_2_ = 0;
  bVar12 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)SVar31,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 != '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      SStack_230._stringLength = 0x42eb704;
      SStack_230._firstChar = 0;
      SStack_230._6_2_ = 0;
      il2cpp_runtime_helper_02337ed0();
    }
    method_00._stringLength = 0;
    method_00._firstChar = 0;
    method_00._6_2_ = 0;
    SStack_230._stringLength = 0x42eb70e;
    SStack_230._firstChar = 0;
    SStack_230._6_2_ = 0;
    UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)SVar31,(MethodInfo *)0x0);
  }
  if (*(char *)((long)__this_05 + 0x1e8) == '\0') {
    SVar31 = *(System_String_Fields *)((long)__this_05 + 0x108);
    if (g_data_057adea2 == '\0') {
      SStack_230._stringLength = 0x42eb736;
      SStack_230._firstChar = 0;
      SStack_230._6_2_ = 0;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057adea2 = '\x01';
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      SStack_230._stringLength = 0x42eb74e;
      SStack_230._firstChar = 0;
      SStack_230._6_2_ = 0;
      il2cpp_runtime_helper_02337ed0();
    }
    method_00._stringLength = 0;
    method_00._firstChar = 0;
    method_00._6_2_ = 0;
    SStack_230._stringLength = 0x42eb75a;
    SStack_230._firstChar = 0;
    SStack_230._6_2_ = 0;
    bVar12 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)SVar31,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar12 != '\0') {
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        SStack_230._stringLength = 0x42eb76f;
        SStack_230._firstChar = 0;
        SStack_230._6_2_ = 0;
        il2cpp_runtime_helper_02337ed0();
      }
      method_00._stringLength = 0;
      method_00._firstChar = 0;
      method_00._6_2_ = 0;
      SStack_230._stringLength = 0x42eb779;
      SStack_230._firstChar = 0;
      SStack_230._6_2_ = 0;
      UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)SVar31,(MethodInfo *)0x0);
    }
  }
  SStack_230._stringLength = 0x42eb781;
  SStack_230._firstChar = 0;
  SStack_230._6_2_ = 0;
  Characters_HumanSetup__CreateCape((Characters_HumanSetup_o *)__this_05,(MethodInfo *)method_00);
  __this_07._stringLength = 0;
  __this_07._firstChar = 0;
  __this_07._6_2_ = 0;
  pCVar29 = (Characters_HumanSetup_o *)&TypeInfo_Object;
  if (*(Characters_HumanSetupMeshes_o **)((long)__this_05 + 0x168) != (Characters_HumanSetupMeshes_o *)0x0) {
    SStack_230._stringLength = 0x42eb79c;
    SStack_230._firstChar = 0;
    SStack_230._6_2_ = 0;
    pCVar29 = (Characters_HumanSetup_o *)
              Characters_HumanSetupMeshes__GetChestMesh
                        (*(Characters_HumanSetupMeshes_o **)((long)__this_05 + 0x168),1,method_01);
    method_00 = **(System_String_Fields **)(g_data_057b9c00 + 0xb8);
    SStack_230._stringLength = 0x42eb7c1;
    SStack_230._firstChar = 0;
    SStack_230._6_2_ = 0;
    bVar12 = System_String__op_Inequality
                       ((System_String_o *)pCVar29,(System_String_o *)method_00,(MethodInfo *)0x0);
    pMVar41 = extraout_RDX_00;
    SVar27 = (System_String_Fields)&g_data_057b9b70;
    if ((char)bVar12 == '\0') {
label_042eb8c9:
      __this_07._stringLength = 0;
      __this_07._firstChar = 0;
      __this_07._6_2_ = 0;
      if (*(Characters_HumanSetupMeshes_o **)((long)__this_05 + 0x168) != (Characters_HumanSetupMeshes_o *)0x0
         ) {
        SStack_230._stringLength = 0x42eb8e4;
        SStack_230._firstChar = 0;
        SStack_230._6_2_ = 0;
        SVar31 = (System_String_Fields)
                 Characters_HumanSetupMeshes__GetChestMesh
                           (*(Characters_HumanSetupMeshes_o **)((long)__this_05 + 0x168),2,pMVar41);
        method_00 = **(System_String_Fields **)(g_data_057b9c00 + 0xb8);
        SStack_230._stringLength = 0x42eb902;
        SStack_230._firstChar = 0;
        SStack_230._6_2_ = 0;
        bVar12 = System_String__op_Inequality
                           ((System_String_o *)SVar31,(System_String_o *)method_00,(MethodInfo *)0x0);
        pMVar41 = extraout_RDX_04;
        if ((char)bVar12 == '\0') {
label_042eb9c7:
          __this_07._stringLength = 0;
          __this_07._firstChar = 0;
          __this_07._6_2_ = 0;
          if (*(Characters_HumanSetupMeshes_o **)((long)__this_05 + 0x168) !=
              (Characters_HumanSetupMeshes_o *)0x0) {
            SStack_230._stringLength = 0x42eb9e2;
            SStack_230._firstChar = 0;
            SStack_230._6_2_ = 0;
            SVar31 = (System_String_Fields)
                     Characters_HumanSetupMeshes__GetChestMesh
                               (*(Characters_HumanSetupMeshes_o **)((long)__this_05 + 0x168),3,pMVar41);
            method_00 = **(System_String_Fields **)(g_data_057b9c00 + 0xb8);
            SStack_230._stringLength = 0x42eba00;
            SStack_230._firstChar = 0;
            SStack_230._6_2_ = 0;
            bVar12 = System_String__op_Inequality
                               ((System_String_o *)SVar31,(System_String_o *)method_00,(MethodInfo *)0x0);
            if (((char)bVar12 != '\0') && (*(char *)((long)__this_05 + 0x1e8) == '\0')) {
              pCVar29 = *(Characters_HumanSetup_o **)((long)__this_05 + 0x160);
              if (*(int *)(TypeInfo_ClothFactory + 0xe4) == 0) {
                SStack_230._stringLength = 0x42eba2f;
                SStack_230._firstChar = 0;
                SStack_230._6_2_ = 0;
                il2cpp_runtime_helper_02337ed0();
              }
              SStack_230._stringLength = 0x42eba3f;
              SStack_230._firstChar = 0;
              SStack_230._6_2_ = 0;
              method_00 = (System_String_Fields)
                          ClothFactory__GetCape
                                    ((UnityEngine_GameObject_o *)pCVar29,(System_String_o *)SVar31,
                                     (UnityEngine_Material_o *)SVar35,(MethodInfo *)0x0);
              *(System_String_Fields *)((long)__this_05 + 0x108) = method_00;
              SStack_230._stringLength = 0x42eba57;
              SStack_230._firstChar = 0;
              SStack_230._6_2_ = 0;
              il2cpp_runtime_helper_022b4080((long)__this_05 + 0x108);
            }
            __this_07._stringLength = 0;
            __this_07._firstChar = 0;
            __this_07._6_2_ = 0;
            if (*(Characters_HumanSetupMeshes_o **)((long)__this_05 + 0x168) !=
                (Characters_HumanSetupMeshes_o *)0x0) {
              SVar31 = (System_String_Fields)((long)__this_05 + 0x158);
              SStack_230._stringLength = 0x42eba75;
              SStack_230._firstChar = 0;
              SStack_230._6_2_ = 0;
              pSVar16 = Characters_HumanSetupMeshes__GetBodyMesh
                                  (*(Characters_HumanSetupMeshes_o **)((long)__this_05 + 0x168),
                                   (MethodInfo *)method_00);
              SStack_230._stringLength = 0x42eba80;
              SStack_230._firstChar = 0;
              SStack_230._6_2_ = 0;
              method_00 = (System_String_Fields)
                          Characters_HumanSetup__GenerateCloth
                                    ((Characters_HumanSetup_o *)__this_05,pSVar16,method_03);
              *(System_String_Fields *)((long)__this_05 + 0x158) = method_00;
              SStack_230._stringLength = 0x42eba93;
              SStack_230._firstChar = 0;
              SStack_230._6_2_ = 0;
              il2cpp_runtime_helper_022b4080(SVar31);
              __this_07 = *(System_String_Fields *)((long)__this_05 + 0x158);
              if (__this_07 != (System_String_Fields)0x0) {
                SStack_230._stringLength = 0x42ebab3;
                SStack_230._firstChar = 0;
                SStack_230._6_2_ = 0;
                method_00 = MethodInfo_Renderer_GetComponent_Renderer;
                pUVar33 = (UnityEngine_Renderer_o *)
                          UnityEngine_GameObject__GetComponent_object_
                                    ((UnityEngine_GameObject_o *)__this_07,(MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer)
                ;
                pCVar29 = (Characters_HumanSetup_o *)&MethodInfo_Renderer_GetComponent_Renderer;
                if (pUVar33 != (UnityEngine_Renderer_o *)0x0) {
                  SStack_230._stringLength = 0x42ebac9;
                  SStack_230._firstChar = 0;
                  SStack_230._6_2_ = 0;
                  method_00 = SVar35;
                  UnityEngine_Renderer__set_material
                            (pUVar33,(UnityEngine_Material_o *)SVar35,(MethodInfo *)0x0);
                  __this_07._stringLength = 0;
                  __this_07._firstChar = 0;
                  __this_07._6_2_ = 0;
                  if (*(Characters_HumanSetupTextures_o **)((long)__this_05 + 0x170) !=
                      (Characters_HumanSetupTextures_o *)0x0) {
                    SStack_230._stringLength = 0x42ebadf;
                    SStack_230._firstChar = 0;
                    SStack_230._6_2_ = 0;
                    SVar31 = (System_String_Fields)
                             Characters_HumanSetupTextures__GetBrandTexture
                                       (*(Characters_HumanSetupTextures_o **)((long)__this_05 + 0x170),
                                        (MethodInfo *)method_00);
                    pMVar41 = extraout_RDX_06;
                    if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
                      SStack_230._stringLength = 0x42ebafb;
                      SStack_230._firstChar = 0;
                      SStack_230._6_2_ = 0;
                      il2cpp_runtime_helper_02337ed0();
                      pMVar41 = extraout_RDX_07;
                    }
                    method_00._stringLength = 0;
                    method_00._firstChar = 0;
                    method_00._6_2_ = 0;
                    SStack_230._stringLength = 0x42ebb05;
                    SStack_230._firstChar = 0;
                    SStack_230._6_2_ = 0;
                    SVar32 = (System_String_Fields)
                             Characters_HumanSetupMaterials__GetPartMaterial
                                       ((System_String_o *)SVar31,0,pMVar41);
                    __this_07 = *(System_String_Fields *)((long)__this_05 + 0x1d8);
                    path = (System_String_Fields *)&TypeInfo_HumanSetupMaterials;
                    if (__this_07 != (System_String_Fields)0x0) {
                      SStack_230._stringLength = 0x42ebb33;
                      SStack_230._firstChar = 0;
                      SStack_230._6_2_ = 0;
                      method_00 = "Type";
                      SVar34 = (System_String_Fields)
                               (**(code **)(*(long *)__this_07 + 0x1a8))
                                         (__this_07,"Type",*(undefined8 *)(*(long *)__this_07 + 0x1b0));
                      SVar27 = SVar32;
                      if (SVar34 != (System_String_Fields)0x0) {
                        method_00 = *(System_String_Fields *)(*(long *)SVar34 + 0x1d0);
                        SStack_230._stringLength = 0x42ebb4f;
                        SStack_230._firstChar = 0;
                        SStack_230._6_2_ = 0;
                        __this_00 = (System_String_Fields)(**(code **)(*(long *)SVar34 + 0x1c8))();
                        __this_07 = SVar34;
                        if (__this_00 != (System_String_Fields)0x0) {
                          SStack_230._stringLength = 0x42ebb6c;
                          SStack_230._firstChar = 0;
                          SStack_230._6_2_ = 0;
                          method_00 = "Uniform";
                          bVar12 = System_String__StartsWith
                                             ((System_String_o *)__this_00,(System_String_o *)"Uniform",
                                              (MethodInfo *)0x0);
                          if ((char)bVar12 == '\0') {
label_042ebd34:
                            SVar31 = *(System_String_Fields *)((long)__this_05 + 0x170);
                            __this_07 = __this_00;
                            if (SVar31 != (System_String_Fields)0x0) {
                              if (g_data_057adec4 == '\0') {
                                SStack_230._stringLength = 0x42ebd5a;
                                SStack_230._firstChar = 0;
                                SStack_230._6_2_ = 0;
                                il2cpp_runtime_helper_023445d0(&"Skin/skin_blades");
                                SStack_230._stringLength = 0x42ebd66;
                                SStack_230._firstChar = 0;
                                SStack_230._6_2_ = 0;
                                il2cpp_runtime_helper_023445d0(&"Skin/skin_TS");
                                __this_07 = (System_String_Fields)&"Skin/skin_AHSS";
                                SStack_230._stringLength = 0x42ebd72;
                                SStack_230._firstChar = 0;
                                SStack_230._6_2_ = 0;
                                il2cpp_runtime_helper_023445d0();
                                g_data_057adec4 = '\x01';
                              }
                              if (*(System_String_Fields *)((long)SVar31 + 0x10) != (System_String_Fields)0x0)
                              {
                                iVar3 = *(int *)((long)*(System_String_Fields *)((long)SVar31 + 0x10) + 0x1d0)
                                ;
                                if (iVar3 == 1) {
label_042ec0ae:
                                  pSVar20 = (System_String_Fields *)&"Skin/skin_AHSS";
                                  lVar40 = *(long *)((long)__this_05 + 0x1c8);
                                }
                                else if (iVar3 == 2) {
                                  pSVar20 = (System_String_Fields *)&"Skin/skin_TS";
                                  lVar40 = *(long *)((long)__this_05 + 0x1c8);
                                }
                                else {
                                  if (iVar3 == 3) goto label_042ec0ae;
                                  pSVar20 = (System_String_Fields *)&"Skin/skin_blades";
                                  lVar40 = *(long *)((long)__this_05 + 0x1c8);
                                }
                                if ((lVar40 != 0) && (*(long *)(lVar40 + 0x98) != 0)) {
                                  pUVar22 = *(Utility_Color255_o **)(*(long *)(lVar40 + 0x98) + 0x18);
                                  __this_07._stringLength = 0;
                                  __this_07._firstChar = 0;
                                  __this_07._6_2_ = 0;
                                  if (pUVar22 != (Utility_Color255_o *)0x0) {
                                    SVar31 = *pSVar20;
                                    method_00._stringLength = 0;
                                    method_00._firstChar = 0;
                                    method_00._6_2_ = 0;
                                    SStack_230._stringLength = 0x42ec0ed;
                                    SStack_230._firstChar = 0;
                                    SStack_230._6_2_ = 0;
                                    UVar50 = Utility_Color255__ToColor(pUVar22,(MethodInfo *)0x0);
                                    fVar46 = UVar50.fields.r;
                                    fVar47 = UVar50.fields.g;
                                    fVar48 = UVar50.fields.b;
                                    fVar49 = UVar50.fields.a;
                                    if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
                                      auStack_218._8_4_ = extraout_XMM0_Dc_00;
                                      auStack_218._0_8_ = UVar50.fields._0_8_;
                                      auStack_218._12_4_ = extraout_XMM0_Dd_00;
                                      uStack_220 = in_XMM1_Dc;
                                      auStack_228 = UVar50.fields._8_8_;
                                      uStack_21c = in_XMM1_Dd;
                                      SStack_230._stringLength = 0x42ec108;
                                      SStack_230._firstChar = 0;
                                      SStack_230._6_2_ = 0;
                                      il2cpp_runtime_helper_02337ed0();
                                      fVar46 = (float)auStack_218._0_4_;
                                      fVar47 = (float)auStack_218._4_4_;
                                      fVar48 = (float)auStack_228._0_4_;
                                      fVar49 = (float)auStack_228._4_4_;
                                      in_XMM1_Dc = uStack_220;
                                      in_XMM1_Dd = uStack_21c;
                                    }
                                    SStack_230._stringLength = 0x42ec119;
                                    SStack_230._firstChar = 0;
                                    SStack_230._6_2_ = 0;
                                    color_00.fields.g = fVar47;
                                    color_00.fields.r = fVar46;
                                    color_00.fields.a = fVar49;
                                    color_00.fields.b = fVar48;
                                    SVar32 = (System_String_Fields)
                                             Characters_HumanSetupMaterials__GetSkinMaterial
                                                       ((System_String_o *)SVar31,color_00,
                                                        (MethodInfo *)method_00);
                                    __this_07 = *(System_String_Fields *)((long)__this_05 + 0x148);
                                    if (__this_07 != (System_String_Fields)0x0) {
                                      SStack_230._stringLength = 0x42ec131;
                                      SStack_230._firstChar = 0;
                                      SStack_230._6_2_ = 0;
                                      method_00 = MethodInfo_Renderer_GetComponent_Renderer;
                                      pUVar33 = (UnityEngine_Renderer_o *)
                                                UnityEngine_GameObject__GetComponent_object_
                                                          ((UnityEngine_GameObject_o *)__this_07,
                                                           (MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer);
                                      SVar31 = SVar32;
                                      if (pUVar33 != (UnityEngine_Renderer_o *)0x0) {
                                        SStack_230._stringLength = 0x42ec143;
                                        SStack_230._firstChar = 0;
                                        SStack_230._6_2_ = 0;
                                        method_00 = SVar32;
                                        UnityEngine_Renderer__set_material
                                                  (pUVar33,(UnityEngine_Material_o *)SVar32,(MethodInfo *)0x0)
                                        ;
                                        __this_07 = *(System_String_Fields *)((long)__this_05 + 0xf0);
                                        if (__this_07 != (System_String_Fields)0x0) {
                                          SStack_230._stringLength = 0x42ec158;
                                          SStack_230._firstChar = 0;
                                          SStack_230._6_2_ = 0;
                                          method_00 = MethodInfo_Renderer_GetComponent_Renderer;
                                          pUVar33 = (UnityEngine_Renderer_o *)
                                                    UnityEngine_GameObject__GetComponent_object_
                                                              ((UnityEngine_GameObject_o *)__this_07,
                                                               (MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer);
                                          if (pUVar33 != (UnityEngine_Renderer_o *)0x0) {
                                            UnityEngine_Renderer__set_material
                                                      (pUVar33,(UnityEngine_Material_o *)SVar32,
                                                       (MethodInfo *)0x0);
                                            return extraout_RAX_03;
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
                            __this_07._stringLength = 0;
                            __this_07._firstChar = 0;
                            __this_07._6_2_ = 0;
                            if (*(Characters_HumanSetupMeshes_o **)((long)__this_05 + 0x168) !=
                                (Characters_HumanSetupMeshes_o *)0x0) {
                              SVar31 = (System_String_Fields)((long)__this_05 + 200);
                              SStack_230._stringLength = 0x42ebb97;
                              SStack_230._firstChar = 0;
                              SStack_230._6_2_ = 0;
                              pSVar16 = Characters_HumanSetupMeshes__GetBrandMesh
                                                  (*(Characters_HumanSetupMeshes_o **)
                                                    ((long)__this_05 + 0x168),1,method_04);
                              SStack_230._stringLength = 0x42ebba2;
                              SStack_230._firstChar = 0;
                              SStack_230._6_2_ = 0;
                              method_00 = (System_String_Fields)
                                          Characters_HumanSetup__GenerateCloth
                                                    ((Characters_HumanSetup_o *)__this_05,pSVar16,method_05);
                              *(System_String_Fields *)((long)__this_05 + 200) = method_00;
                              SStack_230._stringLength = 0x42ebbb5;
                              SStack_230._firstChar = 0;
                              SStack_230._6_2_ = 0;
                              il2cpp_runtime_helper_022b4080(SVar31);
                              __this_07 = *(System_String_Fields *)((long)__this_05 + 200);
                              if (__this_07 != (System_String_Fields)0x0) {
                                SStack_230._stringLength = 0x42ebbce;
                                SStack_230._firstChar = 0;
                                SStack_230._6_2_ = 0;
                                method_00 = MethodInfo_Renderer_GetComponent_Renderer;
                                pUVar33 = (UnityEngine_Renderer_o *)
                                          UnityEngine_GameObject__GetComponent_object_
                                                    ((UnityEngine_GameObject_o *)__this_07,
                                                     (MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer);
                                if (pUVar33 != (UnityEngine_Renderer_o *)0x0) {
                                  SStack_230._stringLength = 0x42ebbe4;
                                  SStack_230._firstChar = 0;
                                  SStack_230._6_2_ = 0;
                                  method_00 = SVar32;
                                  UnityEngine_Renderer__set_material
                                            (pUVar33,(UnityEngine_Material_o *)SVar32,(MethodInfo *)0x0);
                                  __this_07._stringLength = 0;
                                  __this_07._firstChar = 0;
                                  __this_07._6_2_ = 0;
                                  if (*(Characters_HumanSetupMeshes_o **)((long)__this_05 + 0x168) !=
                                      (Characters_HumanSetupMeshes_o *)0x0) {
                                    SVar31 = (System_String_Fields)((long)__this_05 + 0xd0);
                                    SStack_230._stringLength = 0x42ebc07;
                                    SStack_230._firstChar = 0;
                                    SStack_230._6_2_ = 0;
                                    pSVar16 = Characters_HumanSetupMeshes__GetBrandMesh
                                                        (*(Characters_HumanSetupMeshes_o **)
                                                          ((long)__this_05 + 0x168),2,method_06);
                                    SStack_230._stringLength = 0x42ebc12;
                                    SStack_230._firstChar = 0;
                                    SStack_230._6_2_ = 0;
                                    method_00 = (System_String_Fields)
                                                Characters_HumanSetup__GenerateCloth
                                                          ((Characters_HumanSetup_o *)__this_05,pSVar16,
                                                           method_07);
                                    *(System_String_Fields *)((long)__this_05 + 0xd0) = method_00;
                                    SStack_230._stringLength = 0x42ebc25;
                                    SStack_230._firstChar = 0;
                                    SStack_230._6_2_ = 0;
                                    il2cpp_runtime_helper_022b4080(SVar31);
                                    __this_07 = *(System_String_Fields *)((long)__this_05 + 0xd0);
                                    if (__this_07 != (System_String_Fields)0x0) {
                                      SStack_230._stringLength = 0x42ebc3e;
                                      SStack_230._firstChar = 0;
                                      SStack_230._6_2_ = 0;
                                      method_00 = MethodInfo_Renderer_GetComponent_Renderer;
                                      pUVar33 = (UnityEngine_Renderer_o *)
                                                UnityEngine_GameObject__GetComponent_object_
                                                          ((UnityEngine_GameObject_o *)__this_07,
                                                           (MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer);
                                      if (pUVar33 != (UnityEngine_Renderer_o *)0x0) {
                                        SStack_230._stringLength = 0x42ebc54;
                                        SStack_230._firstChar = 0;
                                        SStack_230._6_2_ = 0;
                                        method_00 = SVar32;
                                        UnityEngine_Renderer__set_material
                                                  (pUVar33,(UnityEngine_Material_o *)SVar32,(MethodInfo *)0x0)
                                        ;
                                        __this_07._stringLength = 0;
                                        __this_07._firstChar = 0;
                                        __this_07._6_2_ = 0;
                                        if (*(Characters_HumanSetupMeshes_o **)((long)__this_05 + 0x168) !=
                                            (Characters_HumanSetupMeshes_o *)0x0) {
                                          SVar31 = (System_String_Fields)((long)__this_05 + 0xd8);
                                          SStack_230._stringLength = 0x42ebc77;
                                          SStack_230._firstChar = 0;
                                          SStack_230._6_2_ = 0;
                                          pSVar16 = Characters_HumanSetupMeshes__GetBrandMesh
                                                              (*(Characters_HumanSetupMeshes_o **)
                                                                ((long)__this_05 + 0x168),3,method_08);
                                          SStack_230._stringLength = 0x42ebc82;
                                          SStack_230._firstChar = 0;
                                          SStack_230._6_2_ = 0;
                                          method_00 = (System_String_Fields)
                                                      Characters_HumanSetup__GenerateCloth
                                                                ((Characters_HumanSetup_o *)__this_05,pSVar16,
                                                                 method_09);
                                          *(System_String_Fields *)((long)__this_05 + 0xd8) = method_00;
                                          SStack_230._stringLength = 0x42ebc95;
                                          SStack_230._firstChar = 0;
                                          SStack_230._6_2_ = 0;
                                          il2cpp_runtime_helper_022b4080(SVar31);
                                          __this_07 = *(System_String_Fields *)((long)__this_05 + 0xd8);
                                          if (__this_07 != (System_String_Fields)0x0) {
                                            SStack_230._stringLength = 0x42ebcae;
                                            SStack_230._firstChar = 0;
                                            SStack_230._6_2_ = 0;
                                            method_00 = MethodInfo_Renderer_GetComponent_Renderer;
                                            pUVar33 = (UnityEngine_Renderer_o *)
                                                      UnityEngine_GameObject__GetComponent_object_
                                                                ((UnityEngine_GameObject_o *)__this_07,
                                                                 (MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer);
                                            if (pUVar33 != (UnityEngine_Renderer_o *)0x0) {
                                              SStack_230._stringLength = 0x42ebcc4;
                                              SStack_230._firstChar = 0;
                                              SStack_230._6_2_ = 0;
                                              method_00 = SVar32;
                                              UnityEngine_Renderer__set_material
                                                        (pUVar33,(UnityEngine_Material_o *)SVar32,
                                                         (MethodInfo *)0x0);
                                              __this_07._stringLength = 0;
                                              __this_07._firstChar = 0;
                                              __this_07._6_2_ = 0;
                                              if (*(Characters_HumanSetupMeshes_o **)((long)__this_05 + 0x168)
                                                  != (Characters_HumanSetupMeshes_o *)0x0) {
                                                SVar31 = (System_String_Fields)((long)__this_05 + 0xe0);
                                                SStack_230._stringLength = 0x42ebce7;
                                                SStack_230._firstChar = 0;
                                                SStack_230._6_2_ = 0;
                                                pSVar16 = Characters_HumanSetupMeshes__GetBrandMesh
                                                                    (*(Characters_HumanSetupMeshes_o **)
                                                                      ((long)__this_05 + 0x168),4,method_10);
                                                SStack_230._stringLength = 0x42ebcf2;
                                                SStack_230._firstChar = 0;
                                                SStack_230._6_2_ = 0;
                                                method_00 = (System_String_Fields)
                                                            Characters_HumanSetup__GenerateCloth
                                                                      ((Characters_HumanSetup_o *)__this_05,
                                                                       pSVar16,method_11);
                                                *(System_String_Fields *)((long)__this_05 + 0xe0) = method_00;
                                                SStack_230._stringLength = 0x42ebd05;
                                                SStack_230._firstChar = 0;
                                                SStack_230._6_2_ = 0;
                                                il2cpp_runtime_helper_022b4080(SVar31);
                                                __this_07 = *(System_String_Fields *)((long)__this_05 + 0xe0);
                                                if (__this_07 != (System_String_Fields)0x0) {
                                                  SStack_230._stringLength = 0x42ebd1e;
                                                  SStack_230._firstChar = 0;
                                                  SStack_230._6_2_ = 0;
                                                  method_00 = MethodInfo_Renderer_GetComponent_Renderer;
                                                  __this_00 = (System_String_Fields)
                                                              UnityEngine_GameObject__GetComponent_object_
                                                                        ((UnityEngine_GameObject_o *)__this_07
                                                                         ,(MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer);
                                                  if (__this_00 != (System_String_Fields)0x0) {
                                                    SStack_230._stringLength = 0x42ebd34;
                                                    SStack_230._firstChar = 0;
                                                    SStack_230._6_2_ = 0;
                                                    method_00 = SVar32;
                                                    UnityEngine_Renderer__set_material
                                                              ((UnityEngine_Renderer_o *)__this_00,
                                                               (UnityEngine_Material_o *)SVar32,
                                                               (MethodInfo *)0x0);
                                                    goto label_042ebd34;
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
          }
        }
        else {
          if (*(int *)((long)TypeInfo_ResourcePaths + 0xe4) == 0) {
            SStack_230._stringLength = 0x42eb922;
            SStack_230._firstChar = 0;
            SStack_230._6_2_ = 0;
            il2cpp_runtime_helper_02337ed0();
          }
          pCVar29 = (Characters_HumanSetup_o *)((long)__this_05 + 0x100);
          path = *(System_String_Fields **)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
          if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
            SStack_230._stringLength = 0x42eb950;
            SStack_230._firstChar = 0;
            SStack_230._6_2_ = 0;
            il2cpp_runtime_helper_02337ed0();
          }
          SStack_230._stringLength = 0x42eb96a;
          SStack_230._firstChar = 0;
          SStack_230._6_2_ = 0;
          pIVar26 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                              ((System_String_o *)path,(System_String_o *)SVar31,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
          *(Il2CppObject **)((long)__this_05 + 0x100) = pIVar26;
          SStack_230._stringLength = 0x42eb97d;
          SStack_230._firstChar = 0;
          SStack_230._6_2_ = 0;
          pCVar30 = pCVar29;
          il2cpp_runtime_helper_022b4080(pCVar29,pIVar26);
          method_00 = *(System_String_Fields *)((long)__this_05 + 0x100);
          SStack_230._stringLength = 0x42eb991;
          SStack_230._firstChar = 0;
          SStack_230._6_2_ = 0;
          Characters_HumanSetup__AttachToMount
                    (pCVar30,(UnityEngine_GameObject_o *)method_00,
                     *(UnityEngine_GameObject_o **)((long)__this_05 + 0x20),0,in_R8);
          __this_07 = *(System_String_Fields *)((long)__this_05 + 0x100);
          if (__this_07 != (System_String_Fields)0x0) {
            SStack_230._stringLength = 0x42eb9b1;
            SStack_230._firstChar = 0;
            SStack_230._6_2_ = 0;
            method_00 = MethodInfo_Renderer_GetComponent_Renderer;
            pUVar33 = (UnityEngine_Renderer_o *)
                      UnityEngine_GameObject__GetComponent_object_
                                ((UnityEngine_GameObject_o *)__this_07,(MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer);
            if (pUVar33 != (UnityEngine_Renderer_o *)0x0) {
              SStack_230._stringLength = 0x42eb9c7;
              SStack_230._firstChar = 0;
              SStack_230._6_2_ = 0;
              method_00 = SVar35;
              UnityEngine_Renderer__set_material(pUVar33,(UnityEngine_Material_o *)SVar35,(MethodInfo *)0x0);
              pMVar41 = extraout_RDX_05;
              goto label_042eb9c7;
            }
          }
        }
      }
    }
    else {
      if (*(int *)((long)TypeInfo_ResourcePaths + 0xe4) == 0) {
        SStack_230._stringLength = 0x42eb7e1;
        SStack_230._firstChar = 0;
        SStack_230._6_2_ = 0;
        il2cpp_runtime_helper_02337ed0();
      }
      path = (System_String_Fields *)((long)__this_05 + 0xf8);
      SVar31 = *(System_String_Fields *)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        SStack_230._stringLength = 0x42eb80f;
        SStack_230._firstChar = 0;
        SStack_230._6_2_ = 0;
        il2cpp_runtime_helper_02337ed0();
      }
      SStack_230._stringLength = 0x42eb829;
      SStack_230._firstChar = 0;
      SStack_230._6_2_ = 0;
      pIVar26 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                          ((System_String_o *)SVar31,(System_String_o *)pCVar29,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
      *(Il2CppObject **)((long)__this_05 + 0xf8) = pIVar26;
      SStack_230._stringLength = 0x42eb83c;
      SStack_230._firstChar = 0;
      SStack_230._6_2_ = 0;
      __this_06 = (System_Object_array *)path;
      il2cpp_runtime_helper_022b4080(path,pIVar26);
      method_00 = *(System_String_Fields *)((long)__this_05 + 0xf8);
      SStack_230._stringLength = 0x42eb850;
      SStack_230._firstChar = 0;
      SStack_230._6_2_ = 0;
      Characters_HumanSetup__AttachToMount
                ((Characters_HumanSetup_o *)__this_06,(UnityEngine_GameObject_o *)method_00,
                 *(UnityEngine_GameObject_o **)((long)__this_05 + 0x20),0,in_R8);
      __this_07._stringLength = 0;
      __this_07._firstChar = 0;
      __this_07._6_2_ = 0;
      if (*(UnityEngine_GameObject_o **)((long)__this_05 + 0xf8) != (UnityEngine_GameObject_o *)0x0) {
        SStack_230._stringLength = 0x42eb870;
        SStack_230._firstChar = 0;
        SStack_230._6_2_ = 0;
        method_00 = MethodInfo_Renderer_GetComponent_Renderer;
        pCVar30 = (Characters_HumanSetup_o *)
                  UnityEngine_GameObject__GetComponent_object_
                            (*(UnityEngine_GameObject_o **)((long)__this_05 + 0xf8),
                             (MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer);
        __this_07._stringLength = 0;
        __this_07._firstChar = 0;
        __this_07._6_2_ = 0;
        if (*(Characters_HumanSetupTextures_o **)((long)__this_05 + 0x170) !=
            (Characters_HumanSetupTextures_o *)0x0) {
          SStack_230._stringLength = 0x42eb88e;
          SStack_230._firstChar = 0;
          SStack_230._6_2_ = 0;
          SVar31 = (System_String_Fields)
                   Characters_HumanSetupTextures__GetChestTexture
                             (*(Characters_HumanSetupTextures_o **)((long)__this_05 + 0x170),1,method_02);
          pMVar41 = extraout_RDX_01;
          if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
            SStack_230._stringLength = 0x42eb8a9;
            SStack_230._firstChar = 0;
            SStack_230._6_2_ = 0;
            il2cpp_runtime_helper_02337ed0();
            pMVar41 = extraout_RDX_02;
          }
          method_00._stringLength = 0;
          method_00._firstChar = 0;
          method_00._6_2_ = 0;
          SStack_230._stringLength = 0x42eb8b3;
          SStack_230._firstChar = 0;
          SStack_230._6_2_ = 0;
          __this_07 = SVar31;
          SVar32 = (System_String_Fields)
                   Characters_HumanSetupMaterials__GetPartMaterial((System_String_o *)SVar31,0,pMVar41);
          pCVar29 = pCVar30;
          if (pCVar30 != (Characters_HumanSetup_o *)0x0) {
            SStack_230._stringLength = 0x42eb8c9;
            SStack_230._firstChar = 0;
            SStack_230._6_2_ = 0;
            UnityEngine_Renderer__set_material
                      ((UnityEngine_Renderer_o *)pCVar30,(UnityEngine_Material_o *)SVar32,(MethodInfo *)0x0);
            pMVar41 = extraout_RDX_03;
            method_00 = SVar32;
            goto label_042eb8c9;
          }
        }
      }
    }
  }
  SStack_230._stringLength = 0x42ec195;
  SStack_230._firstChar = 0;
  SStack_230._6_2_ = 0;
  il2cpp_runtime_helper_022b2c90();
  SStack_258 = SVar31;
  SStack_250 = __this_05;
  pSStack_248 = (System_Object_array *)path;
  SStack_240 = SVar27;
  pCStack_238 = pCVar29;
  SStack_230 = SVar35;
  if (g_data_057ade9c == '\0') {
    SStack_288._stringLength = 0x42ec355;
    SStack_288._firstChar = 0;
    SStack_288._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponent_Renderer);
    SStack_288._stringLength = 0x42ec361;
    SStack_288._firstChar = 0;
    SStack_288._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupMaterials);
    SStack_288._stringLength = 0x42ec36d;
    SStack_288._firstChar = 0;
    SStack_288._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color255_get_Value);
    g_data_057ade9c = '\x01';
    pUVar36 = *(UnityEngine_Object_o **)((long)__this_07 + 0xa8);
    if (g_data_057adea2 != '\0') goto label_042ec1d5;
label_042ec388:
    SStack_288._stringLength = 0x42ec394;
    SStack_288._firstChar = 0;
    SStack_288._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    pUVar36 = *(UnityEngine_Object_o **)((long)__this_07 + 0xa8);
    if (g_data_057adea2 == '\0') goto label_042ec388;
label_042ec1d5:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    SStack_288._stringLength = 0x42ec3b8;
    SStack_288._firstChar = 0;
    SStack_288._6_2_ = 0;
    il2cpp_runtime_helper_02337ed0();
  }
  plVar15 = &TypeInfo_Object;
  SStack_288._stringLength = 0x42ec1f9;
  SStack_288._firstChar = 0;
  SStack_288._6_2_ = 0;
  bVar12 = UnityEngine_Object__op_Inequality(pUVar36,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 == '\0') {
    pUVar36 = *(UnityEngine_Object_o **)((long)__this_07 + 0x138);
    if (g_data_057adea2 == '\0') goto label_042ec3ed;
label_042ec215:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      SStack_288._stringLength = 0x42ec3cf;
      SStack_288._firstChar = 0;
      SStack_288._6_2_ = 0;
      il2cpp_runtime_helper_02337ed0();
    }
    SStack_288._stringLength = 0x42ec3d9;
    SStack_288._firstChar = 0;
    SStack_288._6_2_ = 0;
    UnityEngine_Object__Destroy_4e01c60(pUVar36,(MethodInfo *)0x0);
    pUVar36 = *(UnityEngine_Object_o **)((long)__this_07 + 0x138);
    if (g_data_057adea2 != '\0') goto label_042ec215;
label_042ec3ed:
    SStack_288._stringLength = 0x42ec3f9;
    SStack_288._firstChar = 0;
    SStack_288._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    SStack_288._stringLength = 0x42ec416;
    SStack_288._firstChar = 0;
    SStack_288._6_2_ = 0;
    il2cpp_runtime_helper_02337ed0();
  }
  SStack_288._stringLength = 0x42ec232;
  SStack_288._firstChar = 0;
  SStack_288._6_2_ = 0;
  bVar12 = UnityEngine_Object__op_Inequality(pUVar36,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 == '\0') {
    pUVar36 = *(UnityEngine_Object_o **)((long)__this_07 + 0xb0);
    if (g_data_057adea2 == '\0') goto label_042ec44b;
label_042ec24e:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      SStack_288._stringLength = 0x42ec42d;
      SStack_288._firstChar = 0;
      SStack_288._6_2_ = 0;
      il2cpp_runtime_helper_02337ed0();
    }
    SStack_288._stringLength = 0x42ec437;
    SStack_288._firstChar = 0;
    SStack_288._6_2_ = 0;
    UnityEngine_Object__Destroy_4e01c60(pUVar36,(MethodInfo *)0x0);
    pUVar36 = *(UnityEngine_Object_o **)((long)__this_07 + 0xb0);
    if (g_data_057adea2 != '\0') goto label_042ec24e;
label_042ec44b:
    SStack_288._stringLength = 0x42ec457;
    SStack_288._firstChar = 0;
    SStack_288._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    SStack_288._stringLength = 0x42ec474;
    SStack_288._firstChar = 0;
    SStack_288._6_2_ = 0;
    il2cpp_runtime_helper_02337ed0();
  }
  SStack_288._stringLength = 0x42ec26b;
  SStack_288._firstChar = 0;
  SStack_288._6_2_ = 0;
  bVar12 = UnityEngine_Object__op_Inequality(pUVar36,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 == '\0') {
    SVar27 = *(System_String_Fields *)((long)__this_07 + 0x140);
    if (g_data_057adea2 == '\0') goto label_042ec4a9;
label_042ec287:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      SStack_288._stringLength = 0x42ec48b;
      SStack_288._firstChar = 0;
      SStack_288._6_2_ = 0;
      il2cpp_runtime_helper_02337ed0();
    }
    SStack_288._stringLength = 0x42ec495;
    SStack_288._firstChar = 0;
    SStack_288._6_2_ = 0;
    UnityEngine_Object__Destroy_4e01c60(pUVar36,(MethodInfo *)0x0);
    SVar27 = *(System_String_Fields *)((long)__this_07 + 0x140);
    if (g_data_057adea2 != '\0') goto label_042ec287;
label_042ec4a9:
    SStack_288._stringLength = 0x42ec4b5;
    SStack_288._firstChar = 0;
    SStack_288._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    SStack_288._stringLength = 0x42ec4d2;
    SStack_288._firstChar = 0;
    SStack_288._6_2_ = 0;
    il2cpp_runtime_helper_02337ed0();
  }
  SVar34._stringLength = 0;
  SVar34._firstChar = 0;
  SVar34._6_2_ = 0;
  SStack_288._stringLength = 0x42ec2a4;
  SStack_288._firstChar = 0;
  SStack_288._6_2_ = 0;
  SVar31 = SVar27;
  bVar12 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)SVar27,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 != '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      SStack_288._stringLength = 0x42ec2ba;
      SStack_288._firstChar = 0;
      SStack_288._6_2_ = 0;
      il2cpp_runtime_helper_02337ed0();
    }
    SVar34._stringLength = 0;
    SVar34._firstChar = 0;
    SVar34._6_2_ = 0;
    SStack_288._stringLength = 0x42ec2c4;
    SStack_288._firstChar = 0;
    SStack_288._6_2_ = 0;
    SVar31 = SVar27;
    UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)SVar27,(MethodInfo *)0x0);
  }
  lVar40 = *(long *)((long)__this_07 + 0x170);
  if (lVar40 != 0) {
    if (g_data_057adec4 == '\0') {
      SStack_288._stringLength = 0x42ec2e9;
      SStack_288._firstChar = 0;
      SStack_288._6_2_ = 0;
      il2cpp_runtime_helper_023445d0(&"Skin/skin_blades");
      SStack_288._stringLength = 0x42ec2f5;
      SStack_288._firstChar = 0;
      SStack_288._6_2_ = 0;
      il2cpp_runtime_helper_023445d0(&"Skin/skin_TS");
      SVar31 = (System_String_Fields)&"Skin/skin_AHSS";
      SStack_288._stringLength = 0x42ec301;
      SStack_288._firstChar = 0;
      SStack_288._6_2_ = 0;
      il2cpp_runtime_helper_023445d0();
      g_data_057adec4 = '\x01';
    }
    if (*(long *)(lVar40 + 0x10) != 0) {
      iVar3 = *(int *)(*(long *)(lVar40 + 0x10) + 0x1d0);
      if (iVar3 == 1) {
label_042ec4e0:
        pSVar20 = (System_String_Fields *)&"Skin/skin_AHSS";
        lVar10 = *(long *)((long)__this_07 + 0x1c8);
      }
      else if (iVar3 == 2) {
        pSVar20 = (System_String_Fields *)&"Skin/skin_TS";
        lVar10 = *(long *)((long)__this_07 + 0x1c8);
      }
      else {
        if (iVar3 == 3) goto label_042ec4e0;
        pSVar20 = (System_String_Fields *)&"Skin/skin_blades";
        lVar10 = *(long *)((long)__this_07 + 0x1c8);
      }
      if ((lVar10 != 0) && (*(long *)(lVar10 + 0x98) != 0)) {
        pUVar22 = *(Utility_Color255_o **)(*(long *)(lVar10 + 0x98) + 0x18);
        SVar31._stringLength = 0;
        SVar31._firstChar = 0;
        SVar31._6_2_ = 0;
        if (pUVar22 != (Utility_Color255_o *)0x0) {
          SVar27 = *pSVar20;
          SVar34._stringLength = 0;
          SVar34._firstChar = 0;
          SVar34._6_2_ = 0;
          SStack_288._stringLength = 0x42ec51e;
          SStack_288._firstChar = 0;
          SStack_288._6_2_ = 0;
          UVar50 = Utility_Color255__ToColor(pUVar22,(MethodInfo *)0x0);
          fVar46 = UVar50.fields.r;
          fVar47 = UVar50.fields.g;
          fVar48 = UVar50.fields.b;
          fVar49 = UVar50.fields.a;
          if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
            auStack_270._8_4_ = extraout_XMM0_Dc_01;
            auStack_270._0_8_ = UVar50.fields._0_8_;
            auStack_270._12_4_ = extraout_XMM0_Dd_01;
            auStack_280._8_4_ = in_XMM1_Dc;
            auStack_280._0_8_ = UVar50.fields._8_8_;
            auStack_280._12_4_ = in_XMM1_Dd;
            SStack_288._stringLength = 0x42ec53f;
            SStack_288._firstChar = 0;
            SStack_288._6_2_ = 0;
            il2cpp_runtime_helper_02337ed0();
            fVar46 = (float)auStack_270._0_4_;
            fVar47 = (float)auStack_270._4_4_;
            fVar48 = (float)auStack_280._0_4_;
            fVar49 = (float)auStack_280._4_4_;
          }
          SStack_288._stringLength = 0x42ec550;
          SStack_288._firstChar = 0;
          SStack_288._6_2_ = 0;
          color_01.fields.g = fVar47;
          color_01.fields.r = fVar46;
          color_01.fields.a = fVar49;
          color_01.fields.b = fVar48;
          SVar35 = (System_String_Fields)
                   Characters_HumanSetupMaterials__GetSkinMaterial
                             ((System_String_o *)SVar27,color_01,(MethodInfo *)SVar34);
          SVar31._stringLength = 0;
          SVar31._firstChar = 0;
          SVar31._6_2_ = 0;
          if (*(Characters_HumanSetupMeshes_o **)((long)__this_07 + 0x168) !=
              (Characters_HumanSetupMeshes_o *)0x0) {
            plVar15 = (long *)((long)__this_07 + 0xa8);
            SStack_288._stringLength = 0x42ec574;
            SStack_288._firstChar = 0;
            SStack_288._6_2_ = 0;
            pSVar16 = Characters_HumanSetupMeshes__GetArmMesh
                                (*(Characters_HumanSetupMeshes_o **)((long)__this_07 + 0x168),1,method_12);
            SStack_288._stringLength = 0x42ec57f;
            SStack_288._firstChar = 0;
            SStack_288._6_2_ = 0;
            SVar34 = (System_String_Fields)
                     Characters_HumanSetup__GenerateCloth
                               ((Characters_HumanSetup_o *)__this_07,pSVar16,method_13);
            *(System_String_Fields *)((long)__this_07 + 0xa8) = SVar34;
            SStack_288._stringLength = 0x42ec591;
            SStack_288._firstChar = 0;
            SStack_288._6_2_ = 0;
            il2cpp_runtime_helper_022b4080(plVar15);
            SVar31 = *(System_String_Fields *)((long)__this_07 + 0xa8);
            SVar27 = SVar35;
            if (SVar31 != (System_String_Fields)0x0) {
              path = &MethodInfo_Renderer_GetComponent_Renderer;
              SStack_288._stringLength = 0x42ec5b1;
              SStack_288._firstChar = 0;
              SStack_288._6_2_ = 0;
              SVar34 = MethodInfo_Renderer_GetComponent_Renderer;
              pUVar33 = (UnityEngine_Renderer_o *)
                        UnityEngine_GameObject__GetComponent_object_
                                  ((UnityEngine_GameObject_o *)SVar31,(MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer);
              if (pUVar33 != (UnityEngine_Renderer_o *)0x0) {
                SStack_288._stringLength = 0x42ec5c7;
                SStack_288._firstChar = 0;
                SStack_288._6_2_ = 0;
                SVar34 = method_00;
                UnityEngine_Renderer__set_material
                          (pUVar33,(UnityEngine_Material_o *)method_00,(MethodInfo *)0x0);
                SVar31._stringLength = 0;
                SVar31._firstChar = 0;
                SVar31._6_2_ = 0;
                if (*(Characters_HumanSetupMeshes_o **)((long)__this_07 + 0x168) !=
                    (Characters_HumanSetupMeshes_o *)0x0) {
                  plVar15 = (long *)((long)__this_07 + 0x138);
                  SStack_288._stringLength = 0x42ec5e8;
                  SStack_288._firstChar = 0;
                  SStack_288._6_2_ = 0;
                  pSVar16 = Characters_HumanSetupMeshes__GetHandMesh
                                      (*(Characters_HumanSetupMeshes_o **)((long)__this_07 + 0x168),1,
                                       method_14);
                  SStack_288._stringLength = 0x42ec5f3;
                  SStack_288._firstChar = 0;
                  SStack_288._6_2_ = 0;
                  SVar34 = (System_String_Fields)
                           Characters_HumanSetup__GenerateCloth
                                     ((Characters_HumanSetup_o *)__this_07,pSVar16,method_15);
                  *(System_String_Fields *)((long)__this_07 + 0x138) = SVar34;
                  SStack_288._stringLength = 0x42ec605;
                  SStack_288._firstChar = 0;
                  SStack_288._6_2_ = 0;
                  il2cpp_runtime_helper_022b4080(plVar15);
                  SVar31 = *(System_String_Fields *)((long)__this_07 + 0x138);
                  if (SVar31 != (System_String_Fields)0x0) {
                    SStack_288._stringLength = 0x42ec61e;
                    SStack_288._firstChar = 0;
                    SStack_288._6_2_ = 0;
                    SVar34 = MethodInfo_Renderer_GetComponent_Renderer;
                    pUVar33 = (UnityEngine_Renderer_o *)
                              UnityEngine_GameObject__GetComponent_object_
                                        ((UnityEngine_GameObject_o *)SVar31,(MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer
                                        );
                    if (pUVar33 != (UnityEngine_Renderer_o *)0x0) {
                      SStack_288._stringLength = 0x42ec634;
                      SStack_288._firstChar = 0;
                      SStack_288._6_2_ = 0;
                      SVar34 = SVar35;
                      UnityEngine_Renderer__set_material
                                (pUVar33,(UnityEngine_Material_o *)SVar35,(MethodInfo *)0x0);
                      SVar31._stringLength = 0;
                      SVar31._firstChar = 0;
                      SVar31._6_2_ = 0;
                      if (*(Characters_HumanSetupMeshes_o **)((long)__this_07 + 0x168) !=
                          (Characters_HumanSetupMeshes_o *)0x0) {
                        plVar15 = (long *)((long)__this_07 + 0xb0);
                        SStack_288._stringLength = 0x42ec652;
                        SStack_288._firstChar = 0;
                        SStack_288._6_2_ = 0;
                        pSVar16 = Characters_HumanSetupMeshes__GetArmMesh
                                            (*(Characters_HumanSetupMeshes_o **)((long)__this_07 + 0x168),0,
                                             method_16);
                        SStack_288._stringLength = 0x42ec65d;
                        SStack_288._firstChar = 0;
                        SStack_288._6_2_ = 0;
                        SVar34 = (System_String_Fields)
                                 Characters_HumanSetup__GenerateCloth
                                           ((Characters_HumanSetup_o *)__this_07,pSVar16,method_17);
                        *(System_String_Fields *)((long)__this_07 + 0xb0) = SVar34;
                        SStack_288._stringLength = 0x42ec66f;
                        SStack_288._firstChar = 0;
                        SStack_288._6_2_ = 0;
                        il2cpp_runtime_helper_022b4080(plVar15);
                        SVar31 = *(System_String_Fields *)((long)__this_07 + 0xb0);
                        if (SVar31 != (System_String_Fields)0x0) {
                          SStack_288._stringLength = 0x42ec688;
                          SStack_288._firstChar = 0;
                          SStack_288._6_2_ = 0;
                          SVar34 = MethodInfo_Renderer_GetComponent_Renderer;
                          pUVar33 = (UnityEngine_Renderer_o *)
                                    UnityEngine_GameObject__GetComponent_object_
                                              ((UnityEngine_GameObject_o *)SVar31,
                                               (MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer);
                          if (pUVar33 != (UnityEngine_Renderer_o *)0x0) {
                            SStack_288._stringLength = 0x42ec69e;
                            SStack_288._firstChar = 0;
                            SStack_288._6_2_ = 0;
                            SVar34 = method_00;
                            UnityEngine_Renderer__set_material
                                      (pUVar33,(UnityEngine_Material_o *)method_00,(MethodInfo *)0x0);
                            SVar31._stringLength = 0;
                            SVar31._firstChar = 0;
                            SVar31._6_2_ = 0;
                            if (*(Characters_HumanSetupMeshes_o **)((long)__this_07 + 0x168) !=
                                (Characters_HumanSetupMeshes_o *)0x0) {
                              method_00 = (System_String_Fields)((long)__this_07 + 0x140);
                              SStack_288._stringLength = 0x42ec6b8;
                              SStack_288._firstChar = 0;
                              SStack_288._6_2_ = 0;
                              pSVar16 = Characters_HumanSetupMeshes__GetHandMesh
                                                  (*(Characters_HumanSetupMeshes_o **)
                                                    ((long)__this_07 + 0x168),0,method_18);
                              SStack_288._stringLength = 0x42ec6c3;
                              SStack_288._firstChar = 0;
                              SStack_288._6_2_ = 0;
                              SVar34 = (System_String_Fields)
                                       Characters_HumanSetup__GenerateCloth
                                                 ((Characters_HumanSetup_o *)__this_07,pSVar16,method_19);
                              *(System_String_Fields *)((long)__this_07 + 0x140) = SVar34;
                              SStack_288._stringLength = 0x42ec6d5;
                              SStack_288._firstChar = 0;
                              SStack_288._6_2_ = 0;
                              il2cpp_runtime_helper_022b4080(method_00);
                              SVar31 = *(System_String_Fields *)((long)__this_07 + 0x140);
                              if (SVar31 != (System_String_Fields)0x0) {
                                SStack_288._stringLength = 0x42ec6ea;
                                SStack_288._firstChar = 0;
                                SStack_288._6_2_ = 0;
                                SVar34 = MethodInfo_Renderer_GetComponent_Renderer;
                                pUVar33 = (UnityEngine_Renderer_o *)
                                          UnityEngine_GameObject__GetComponent_object_
                                                    ((UnityEngine_GameObject_o *)SVar31,
                                                     (MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer);
                                if (pUVar33 != (UnityEngine_Renderer_o *)0x0) {
                                  UnityEngine_Renderer__set_material
                                            (pUVar33,(UnityEngine_Material_o *)SVar35,(MethodInfo *)0x0);
                                  return extraout_RAX_04;
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
  SStack_288._stringLength = 0x42ec726;
  SStack_288._firstChar = 0;
  SStack_288._6_2_ = 0;
  il2cpp_runtime_helper_022b2c90();
  lStack_2a8 = lVar40;
  plStack_2a0 = plVar15;
  pSStack_298 = (System_Object_array *)path;
  SStack_290 = method_00;
  SStack_288 = SVar27;
  if (g_data_057ade9d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRenderer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRenderer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    g_data_057ade9d = '\x01';
    if (*(int *)((long)TypeInfo_ResourcePaths + 0xe4) != 0) goto label_042ec767;
label_042ec949:
    il2cpp_runtime_helper_02337ed0();
    pSVar39 = ((System_String_o *)((long)SVar31 + 0x1c8))->klass;
    if (pSVar39 == (System_String_c *)0x0) goto label_042ec961;
label_042ec777:
    pvVar7 = (pSVar39->_1).typeMetadataHandle;
    if ((pvVar7 == (void *)0x0) ||
       (pSVar39 = ((System_String_o *)((long)SVar31 + 0x168))->klass, pSVar39 == (System_String_c *)0x0))
    goto label_042ec961;
    pSVar16 = *(System_String_o **)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
    uStack_2ac = *(undefined4 *)((long)pvVar7 + 0x14);
    if (g_data_057adeae == '\0') {
      il2cpp_runtime_helper_023445d0(&"character_leg_");
      g_data_057adeae = '\x01';
    }
    pSVar17 = (System_String_o *)(pSVar39->_1).namespaze;
    pSVar18 = System_Int32__ToString((int32_t)&uStack_2ac,(MethodInfo *)0x0);
    pSVar17 = System_String__Concat_3af7150(pSVar17,"character_leg_",pSVar18,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar36 = ApplicationManagers_ResourceManager__LoadAsset(pSVar16,pSVar17,1,(MethodInfo *)0x0);
    if (pUVar36 == (UnityEngine_Object_o *)0x0) goto label_042ec961;
    if (pUVar36->klass == TypeInfo_GameObject) {
      __this_01 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar36,(MethodInfo *)0x0)
      ;
      pSVar39 = ((System_String_o *)((long)SVar31 + 0x150))->klass;
      if (pSVar39 != (System_String_c *)0x0) {
        __this_02 = (UnityEngine_SkinnedMeshRenderer_o *)
                    UnityEngine_GameObject__GetComponent_object_
                              ((UnityEngine_GameObject_o *)pSVar39,MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRenderer);
        if (__this_01 != (UnityEngine_Transform_o *)0x0) {
          __this_03 = (UnityEngine_SkinnedMeshRenderer_o *)
                      UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)__this_01,MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRenderer);
          if (__this_03 != (UnityEngine_SkinnedMeshRenderer_o *)0x0) {
            value = UnityEngine_SkinnedMeshRenderer__get_sharedMesh(__this_03,(MethodInfo *)0x0);
            if (__this_02 != (UnityEngine_SkinnedMeshRenderer_o *)0x0) {
              UnityEngine_SkinnedMeshRenderer__set_sharedMesh(__this_02,value,(MethodInfo *)0x0);
              pSVar39 = ((System_String_o *)((long)SVar31 + 0x150))->klass;
              if (pSVar39 != (System_String_c *)0x0) {
                pUVar33 = (UnityEngine_Renderer_o *)
                          UnityEngine_GameObject__GetComponent_object_
                                    ((UnityEngine_GameObject_o *)pSVar39,MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRenderer);
                if (pUVar33 != (UnityEngine_Renderer_o *)0x0) {
                  UnityEngine_Renderer__set_material
                            (pUVar33,(UnityEngine_Material_o *)SVar34,(MethodInfo *)0x0);
                  return extraout_RAX_05;
                }
              }
            }
          }
        }
      }
      goto label_042ec961;
    }
  }
  else {
    if (*(int *)((long)TypeInfo_ResourcePaths + 0xe4) == 0) goto label_042ec949;
label_042ec767:
    pSVar39 = ((System_String_o *)((long)SVar31 + 0x1c8))->klass;
    if (pSVar39 != (System_String_c *)0x0) goto label_042ec777;
label_042ec961:
    pUVar36 = (UnityEngine_Object_o *)il2cpp_runtime_helper_022b2c90();
  }
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ade8f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponentInChildren_Renderer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponent_Renderer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupMaterials);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    g_data_057ade8f = '\x01';
    pUVar42 = (UnityEngine_Object_o *)pUVar36[5].fields.m_CachedPtr;
    if (g_data_057adea2 != '\0') goto label_042ec99f;
label_042ecb66:
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    pUVar42 = (UnityEngine_Object_o *)pUVar36[5].fields.m_CachedPtr;
    if (g_data_057adea2 == '\0') goto label_042ecb66;
label_042ec99f:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar12 = UnityEngine_Object__op_Inequality(pUVar42,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 == '\0') {
    pUVar28 = pUVar36[6].klass;
    if (g_data_057adea2 == '\0') goto label_042ecbcb;
label_042ec9df:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar42,(MethodInfo *)0x0);
    pUVar28 = pUVar36[6].klass;
    if (g_data_057adea2 != '\0') goto label_042ec9df;
label_042ecbcb:
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar12 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pUVar28,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 == '\0') {
    pUVar42 = pUVar36[6].monitor;
    if (g_data_057adea2 == '\0') goto label_042ecc29;
label_042eca18:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)pUVar28,(MethodInfo *)0x0);
    pUVar42 = pUVar36[6].monitor;
    if (g_data_057adea2 != '\0') goto label_042eca18;
label_042ecc29:
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar12 = UnityEngine_Object__op_Inequality(pUVar42,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 == '\0') {
    SVar27 = (System_String_Fields)pUVar36[6].fields.m_CachedPtr;
    if (g_data_057adea2 == '\0') goto label_042ecc87;
label_042eca51:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar42,(MethodInfo *)0x0);
    SVar27 = (System_String_Fields)pUVar36[6].fields.m_CachedPtr;
    if (g_data_057adea2 != '\0') goto label_042eca51;
label_042ecc87:
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  SVar31 = SVar27;
  bVar12 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)SVar27,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pMVar41 = extraout_RDX_08;
  if ((char)bVar12 != '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)SVar27,(MethodInfo *)0x0);
    pMVar41 = extraout_RDX_09;
    SVar31 = SVar27;
  }
  pvVar7 = pUVar36[0xf].monitor;
  if (pvVar7 != (void *)0x0) {
    if (g_data_057adec2 == '\0') {
      il2cpp_runtime_helper_023445d0(&"Misc/AOTTG_HERO_3DMG");
      il2cpp_runtime_helper_023445d0(&"Misc/aottg_hero_AHSS_3dmg");
      SVar31 = (System_String_Fields)&"Misc/aottg_hero_APG_3dmg";
      il2cpp_runtime_helper_023445d0();
      g_data_057adec2 = '\x01';
      pMVar41 = extraout_RDX_10;
    }
    lVar40 = *(long *)((long)pvVar7 + 0x10);
    if (lVar40 != 0) {
      iVar3 = *(int *)(lVar40 + 0x1d0);
      if (iVar3 == 3) {
        puVar37 = &"Misc/aottg_hero_APG_3dmg";
      }
      else {
        puVar37 = &"Misc/AOTTG_HERO_3DMG";
        if (iVar3 == 1) {
          puVar37 = &"Misc/aottg_hero_AHSS_3dmg";
        }
      }
      pSVar16 = (System_String_o *)*puVar37;
      if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pMVar41 = extraout_RDX_11;
      }
      method_21 = (MethodInfo *)0x0;
      pUVar38 = Characters_HumanSetupMaterials__GetPartMaterial(pSVar16,0,pMVar41);
      if (*(int *)((long)TypeInfo_ResourcePaths + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      SVar31 = TypeInfo_ResourcePaths;
      if (pUVar36[0xf].klass != (UnityEngine_Object_c *)0x0) {
        pCVar29 = (Characters_HumanSetup_o *)&pUVar36[5].fields;
        pSVar16 = *(System_String_o **)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
        pSVar17 = Characters_HumanSetupMeshes__Get3dmgMesh
                            ((Characters_HumanSetupMeshes_o *)pUVar36[0xf].klass,method_21);
        if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pIVar26 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                            (pSVar16,pSVar17,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
        pUVar36[5].fields.m_CachedPtr = (intptr_t)pIVar26;
        il2cpp_runtime_helper_022b4080(pCVar29,pIVar26);
        Characters_HumanSetup__AttachToMount
                  (pCVar29,(UnityEngine_GameObject_o *)pUVar36[5].fields.m_CachedPtr,
                   (UnityEngine_GameObject_o *)pUVar36[1].fields.m_CachedPtr,0,in_R8);
        SVar31 = (System_String_Fields)pUVar36[5].fields.m_CachedPtr;
        if (SVar31 != (System_String_Fields)0x0) {
          ppSVar43 = (System_String_o **)
                     UnityEngine_GameObject__GetComponentInChildren_object_
                               ((UnityEngine_GameObject_o *)SVar31,MethodInfo_Renderer_GetComponentInChildren_Renderer);
          if ((System_String_Fields)ppSVar43 != (System_String_Fields)0x0) {
            UnityEngine_Renderer__set_material((UnityEngine_Renderer_o *)ppSVar43,pUVar38,(MethodInfo *)0x0);
            pUVar28 = pUVar36[0xf].klass;
            SVar31 = (System_String_Fields)ppSVar43;
            if (pUVar28 != (UnityEngine_Object_c *)0x0) {
              if (g_data_057adeb2 == '\0') {
                ppSVar43 = &"3dmg_belt";
                il2cpp_runtime_helper_023445d0();
                g_data_057adeb2 = '\x01';
              }
              pcVar11 = (pUVar28->_1).name;
              SVar31 = (System_String_Fields)ppSVar43;
              if (pcVar11 != (char *)0x0) {
                if ((*(uint *)(pcVar11 + 0x1d0) | 2) == 3) {
                  pSVar16 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
                  pSVar17 = pSVar16;
                }
                else {
                  pSVar17 = System_String__Concat_3ae5ba0
                                      ((pUVar28->_1).byval_arg.data,"3dmg_belt",(MethodInfo *)0x0);
                  pSVar16 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
                }
                bVar12 = System_String__op_Inequality(pSVar17,pSVar16,(MethodInfo *)0x0);
                pSVar16 = (System_String_o *)CONCAT44(extraout_var_02,bVar12);
                pMVar41 = extraout_RDX_12;
                if ((char)bVar12 == '\0') {
label_042ecf16:
                  if (*(int *)&pUVar36[0x13].monitor == 3) {
                    return pSVar16;
                  }
                  if (*(int *)((long)TypeInfo_ResourcePaths + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                    pMVar41 = extraout_RDX_14;
                  }
                  SVar31 = TypeInfo_ResourcePaths;
                  if (pUVar36[0xf].klass != (UnityEngine_Object_c *)0x0) {
                    ppvVar1 = &pUVar36[6].monitor;
                    pSVar16 = *(System_String_o **)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
                    pSVar17 = Characters_HumanSetupMeshes__GetGasMesh
                                        ((Characters_HumanSetupMeshes_o *)pUVar36[0xf].klass,1,pMVar41);
                    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pIVar26 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                                        (pSVar16,pSVar17,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
                    *ppvVar1 = pIVar26;
                    il2cpp_runtime_helper_022b4080(ppvVar1);
                    SVar31 = (System_String_Fields)*ppvVar1;
                    if (SVar31 != (System_String_Fields)0x0) {
                      pCVar29 = (Characters_HumanSetup_o *)
                                UnityEngine_GameObject__GetComponent_object_
                                          ((UnityEngine_GameObject_o *)SVar31,
                                           (MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer);
                      if (pCVar29 != (Characters_HumanSetup_o *)0x0) {
                        UnityEngine_Renderer__set_material
                                  ((UnityEngine_Renderer_o *)pCVar29,pUVar38,(MethodInfo *)0x0);
                        Characters_HumanSetup__AttachToMount
                                  (pCVar29,pUVar36[6].monitor,
                                   (UnityEngine_GameObject_o *)
                                   (&pUVar36[2].klass)[(ulong)(*(int *)&pUVar36[0x13].monitor == 1) * 2],0,
                                   in_R8);
                        pMVar41 = extraout_RDX_15;
                        if (*(int *)((long)TypeInfo_ResourcePaths + 0xe4) == 0) {
                          il2cpp_runtime_helper_02337ed0();
                          pMVar41 = extraout_RDX_16;
                        }
                        SVar31 = TypeInfo_ResourcePaths;
                        if (pUVar36[0xf].klass != (UnityEngine_Object_c *)0x0) {
                          pUVar2 = &pUVar36[6].fields;
                          pSVar16 = *(System_String_o **)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
                          pSVar17 = Characters_HumanSetupMeshes__GetGasMesh
                                              ((Characters_HumanSetupMeshes_o *)pUVar36[0xf].klass,0,pMVar41);
                          if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
                            il2cpp_runtime_helper_02337ed0();
                          }
                          pIVar26 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                                              (pSVar16,pSVar17,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
                          pUVar2->m_CachedPtr = (intptr_t)pIVar26;
                          il2cpp_runtime_helper_022b4080(pUVar2);
                          SVar31 = (System_String_Fields)pUVar2->m_CachedPtr;
                          if (SVar31 != (System_String_Fields)0x0) {
                            pCVar29 = (Characters_HumanSetup_o *)
                                      UnityEngine_GameObject__GetComponent_object_
                                                ((UnityEngine_GameObject_o *)SVar31,
                                                 (MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer);
                            if (pCVar29 != (Characters_HumanSetup_o *)0x0) {
                              UnityEngine_Renderer__set_material
                                        ((UnityEngine_Renderer_o *)pCVar29,pUVar38,(MethodInfo *)0x0);
                              Characters_HumanSetup__AttachToMount
                                        (pCVar29,(UnityEngine_GameObject_o *)pUVar36[6].fields.m_CachedPtr,
                                         (&pUVar36[2].monitor)
                                         [(ulong)(*(int *)&pUVar36[0x13].monitor == 1) * 2],0,in_R8);
                              return extraout_RAX_07;
                            }
                          }
                        }
                      }
                    }
                  }
                }
                else {
                  if (*(int *)((long)TypeInfo_ResourcePaths + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pUVar42 = pUVar36 + 6;
                  pSVar16 = *(System_String_o **)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
                  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pUVar28 = (UnityEngine_Object_c *)
                            ApplicationManagers_ResourceManager__InstantiateAsset_object_
                                      (pSVar16,pSVar17,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
                  pUVar42->klass = pUVar28;
                  il2cpp_runtime_helper_022b4080(pUVar42);
                  SVar31 = (System_String_Fields)pUVar42->klass;
                  if (SVar31 != (System_String_Fields)0x0) {
                    pCVar29 = (Characters_HumanSetup_o *)
                              UnityEngine_GameObject__GetComponent_object_
                                        ((UnityEngine_GameObject_o *)SVar31,(MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer
                                        );
                    if (pCVar29 != (Characters_HumanSetup_o *)0x0) {
                      UnityEngine_Renderer__set_material
                                ((UnityEngine_Renderer_o *)pCVar29,pUVar38,(MethodInfo *)0x0);
                      Characters_HumanSetup__AttachToMount
                                (pCVar29,(UnityEngine_GameObject_o *)pUVar36[6].klass,
                                 (UnityEngine_GameObject_o *)pUVar36[1].fields.m_CachedPtr,0,in_R8);
                      pSVar16 = extraout_RAX_06;
                      pMVar41 = extraout_RDX_13;
                      goto label_042ecf16;
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
  if (g_data_057ade90 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEffectPresets);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MeleeWeaponTrail_GetComponentInChildren_MeleeWeaponTrail);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponentInChildren_Renderer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupMaterials);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&"thunderspear");
    g_data_057ade90 = '\x01';
    pUVar36 = *(UnityEngine_Object_o **)((long)SVar31 + 0xb8);
    if (g_data_057adea2 != '\0') goto label_042ed11f;
label_042ed2a1:
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    pUVar36 = *(UnityEngine_Object_o **)((long)SVar31 + 0xb8);
    if (g_data_057adea2 == '\0') goto label_042ed2a1;
label_042ed11f:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar12 = UnityEngine_Object__op_Inequality(pUVar36,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 == '\0') {
    pSVar16 = *(System_String_o **)((long)SVar31 + 0xc0);
    if (g_data_057adea2 == '\0') goto label_042ed304;
label_042ed15e:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar36,(MethodInfo *)0x0);
    pSVar16 = *(System_String_o **)((long)SVar31 + 0xc0);
    if (g_data_057adea2 != '\0') goto label_042ed15e;
label_042ed304:
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar17 = pSVar16;
  bVar12 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pSVar16,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pMVar41 = extraout_RDX_17;
  if ((char)bVar12 != '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)pSVar16,(MethodInfo *)0x0);
    pMVar41 = extraout_RDX_18;
    pSVar17 = pSVar16;
  }
  lVar40 = *(long *)((long)SVar31 + 0x170);
  if (lVar40 != 0) {
    if (g_data_057adec2 == '\0') {
      il2cpp_runtime_helper_023445d0(&"Misc/AOTTG_HERO_3DMG");
      il2cpp_runtime_helper_023445d0(&"Misc/aottg_hero_AHSS_3dmg");
      pSVar17 = (System_String_o *)&"Misc/aottg_hero_APG_3dmg";
      il2cpp_runtime_helper_023445d0();
      g_data_057adec2 = '\x01';
      pMVar41 = extraout_RDX_19;
    }
    lVar40 = *(long *)(lVar40 + 0x10);
    if (lVar40 != 0) {
      iVar3 = *(int *)(lVar40 + 0x1d0);
      if (iVar3 == 3) {
        puVar37 = &"Misc/aottg_hero_APG_3dmg";
      }
      else {
        puVar37 = &"Misc/AOTTG_HERO_3DMG";
        if (iVar3 == 1) {
          puVar37 = &"Misc/aottg_hero_AHSS_3dmg";
        }
      }
      pSVar17 = (System_String_o *)*puVar37;
      iVar3 = *(int *)((long)SVar31 + 0x1d0);
      if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pMVar41 = extraout_RDX_20;
      }
      pUVar38 = Characters_HumanSetupMaterials__GetPartMaterial(pSVar17,(uint)(iVar3 == 3),pMVar41);
      if ((*(long *)((long)SVar31 + 0x1c8) != 0) &&
         (lVar40 = *(long *)(*(long *)((long)SVar31 + 0x1c8) + 0xe0), lVar40 != 0)) {
        pSVar16 = *(System_String_o **)(lVar40 + 0x18);
        if (*(int *)(TypeInfo_CharacterEffectPresets + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        iVar14 = PatreonEffects_CharacterEffectPresets__ParseOrDefault(pSVar16,(MethodInfo *)0x0);
        pSVar17 = (System_String_o *)0x0;
        if (*(Characters_HumanSetupMeshes_o **)((long)SVar31 + 0x168) != (Characters_HumanSetupMeshes_o *)0x0)
        {
          pCVar29 = (Characters_HumanSetup_o *)
                    Characters_HumanSetupMeshes__GetWeaponMesh
                              (*(Characters_HumanSetupMeshes_o **)((long)SVar31 + 0x168),1,method_20);
          bVar12 = System_String__op_Inequality
                             ((System_String_o *)pCVar29,
                              (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
          pMVar41 = extraout_RDX_21;
          if ((char)bVar12 == '\0') goto label_042ed58b;
          if (*(int *)((long)TypeInfo_ResourcePaths + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar16 = (System_String_o *)((long)SVar31 + 0xb8);
          pSVar17 = *(System_String_o **)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
          if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar39 = (System_String_c *)
                    ApplicationManagers_ResourceManager__InstantiateAsset_object_
                              (pSVar17,(System_String_o *)pCVar29,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
          pSVar16->klass = pSVar39;
          pSVar17 = pSVar16;
          il2cpp_runtime_helper_022b4080();
          if (pCVar29 != (Characters_HumanSetup_o *)0x0) {
            bVar12 = System_String__Contains((System_String_o *)pCVar29,"thunderspear",(MethodInfo *)0x0);
            if ((char)bVar12 == '\0') {
              Characters_HumanSetup__AttachToMount
                        (pCVar29,(UnityEngine_GameObject_o *)pSVar16->klass,
                         *(UnityEngine_GameObject_o **)((long)SVar31 + 0x50),0,in_R8);
              pSVar17 = *(System_String_o **)((long)SVar31 + 0xb8);
              if (pSVar17 != (System_String_o *)0x0) {
                pUVar33 = (UnityEngine_Renderer_o *)
                          UnityEngine_GameObject__GetComponentInChildren_object_
                                    ((UnityEngine_GameObject_o *)pSVar17,MethodInfo_Renderer_GetComponentInChildren_Renderer);
                if (pUVar33 != (UnityEngine_Renderer_o *)0x0) {
                  UnityEngine_Renderer__set_material(pUVar33,pUVar38,(MethodInfo *)0x0);
                  goto label_042ed4ec;
                }
              }
            }
            else {
              Characters_HumanSetup__AttachToMount
                        (pCVar29,(UnityEngine_GameObject_o *)pSVar16->klass,
                         *(UnityEngine_GameObject_o **)((long)SVar31 + 0x60),0,in_R8);
label_042ed4ec:
              Characters_HumanSetup__ApplyCharacterEffectToPart
                        ((Characters_HumanSetup_o *)SVar31,*(UnityEngine_GameObject_o **)((long)SVar31 + 0xb8)
                         ,iVar14,0,in_R8);
              pSVar17 = (System_String_o *)0x0;
              if (*(UnityEngine_GameObject_o **)((long)SVar31 + 0xb8) != (UnityEngine_GameObject_o *)0x0) {
                pUVar36 = (UnityEngine_Object_o *)
                          UnityEngine_GameObject__GetComponentInChildren_object_
                                    (*(UnityEngine_GameObject_o **)((long)SVar31 + 0xb8),MethodInfo_MeleeWeaponTrail_GetComponentInChildren_MeleeWeaponTrail);
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                bVar12 = UnityEngine_Object__op_Inequality
                                   (pUVar36,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                pMVar41 = extraout_RDX_22;
                if ((char)bVar12 == '\0') {
label_042ed58b:
                  pSVar17 = (System_String_o *)0x0;
                  if (*(Characters_HumanSetupMeshes_o **)((long)SVar31 + 0x168) !=
                      (Characters_HumanSetupMeshes_o *)0x0) {
                    pCVar29 = (Characters_HumanSetup_o *)
                              Characters_HumanSetupMeshes__GetWeaponMesh
                                        (*(Characters_HumanSetupMeshes_o **)((long)SVar31 + 0x168),0,pMVar41);
                    bVar12 = System_String__op_Inequality
                                       ((System_String_o *)pCVar29,
                                        (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                                        (MethodInfo *)0x0);
                    if ((char)bVar12 == '\0') {
                      return (System_String_o *)CONCAT44(extraout_var_03,bVar12);
                    }
                    if (*(int *)((long)TypeInfo_ResourcePaths + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pSVar16 = (System_String_o *)((long)SVar31 + 0xc0);
                    pSVar17 = *(System_String_o **)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
                    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pSVar39 = (System_String_c *)
                              ApplicationManagers_ResourceManager__InstantiateAsset_object_
                                        (pSVar17,(System_String_o *)pCVar29,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
                    pSVar16->klass = pSVar39;
                    pSVar17 = pSVar16;
                    il2cpp_runtime_helper_022b4080();
                    if (pCVar29 != (Characters_HumanSetup_o *)0x0) {
                      bVar12 = System_String__Contains
                                         ((System_String_o *)pCVar29,"thunderspear",(MethodInfo *)0x0);
                      if ((char)bVar12 == '\0') {
                        Characters_HumanSetup__AttachToMount
                                  (pCVar29,(UnityEngine_GameObject_o *)pSVar16->klass,
                                   *(UnityEngine_GameObject_o **)((long)SVar31 + 0x58),0,in_R8);
                        pSVar17 = *(System_String_o **)((long)SVar31 + 0xc0);
                        if (pSVar17 != (System_String_o *)0x0) {
                          pUVar33 = (UnityEngine_Renderer_o *)
                                    UnityEngine_GameObject__GetComponentInChildren_object_
                                              ((UnityEngine_GameObject_o *)pSVar17,MethodInfo_Renderer_GetComponentInChildren_Renderer);
                          if (pUVar33 != (UnityEngine_Renderer_o *)0x0) {
                            UnityEngine_Renderer__set_material(pUVar33,pUVar38,(MethodInfo *)0x0);
                            goto label_042ed6a9;
                          }
                        }
                      }
                      else {
                        Characters_HumanSetup__AttachToMount
                                  (pCVar29,(UnityEngine_GameObject_o *)pSVar16->klass,
                                   *(UnityEngine_GameObject_o **)((long)SVar31 + 0x68),0,in_R8);
label_042ed6a9:
                        Characters_HumanSetup__ApplyCharacterEffectToPart
                                  ((Characters_HumanSetup_o *)SVar31,
                                   *(UnityEngine_GameObject_o **)((long)SVar31 + 0xc0),iVar14,0,in_R8);
                        pSVar17 = (System_String_o *)0x0;
                        if (*(UnityEngine_GameObject_o **)((long)SVar31 + 0xc0) !=
                            (UnityEngine_GameObject_o *)0x0) {
                          pUVar36 = (UnityEngine_Object_o *)
                                    UnityEngine_GameObject__GetComponentInChildren_object_
                                              (*(UnityEngine_GameObject_o **)((long)SVar31 + 0xc0),
                                               MethodInfo_MeleeWeaponTrail_GetComponentInChildren_MeleeWeaponTrail);
                          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                            il2cpp_runtime_helper_02337ed0();
                          }
                          bVar12 = UnityEngine_Object__op_Inequality
                                             (pUVar36,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                          if ((char)bVar12 == '\0') {
                            return (System_String_o *)CONCAT44(extraout_var_04,bVar12);
                          }
                          pSVar17 = (System_String_o *)0x0;
                          if (pSVar16->klass != (System_String_c *)0x0) {
                            pIVar26 = UnityEngine_GameObject__GetComponentInChildren_object_
                                                ((UnityEngine_GameObject_o *)pSVar16->klass,MethodInfo_MeleeWeaponTrail_GetComponentInChildren_MeleeWeaponTrail);
                            pSVar17 = (System_String_o *)((long)SVar31 + 0x180);
                            *(Il2CppObject **)((long)SVar31 + 0x180) = pIVar26;
                            il2cpp_runtime_helper_022b4080();
                            pSVar16 = *(System_String_o **)((long)SVar31 + 0x180);
                            if (pSVar16 != (System_String_o *)0x0) {
                              *(undefined1 *)&pSVar16[1].monitor = 0;
                              return pSVar16;
                            }
                          }
                        }
                      }
                    }
                  }
                }
                else {
                  pSVar17 = (System_String_o *)0x0;
                  if (pSVar16->klass != (System_String_c *)0x0) {
                    pIVar26 = UnityEngine_GameObject__GetComponentInChildren_object_
                                        ((UnityEngine_GameObject_o *)pSVar16->klass,MethodInfo_MeleeWeaponTrail_GetComponentInChildren_MeleeWeaponTrail);
                    pSVar17 = (System_String_o *)((long)SVar31 + 0x178);
                    *(Il2CppObject **)((long)SVar31 + 0x178) = pIVar26;
                    il2cpp_runtime_helper_022b4080();
                    if (*(long *)((long)SVar31 + 0x178) != 0) {
                      *(undefined1 *)(*(long *)((long)SVar31 + 0x178) + 0x20) = 0;
                      pMVar41 = extraout_RDX_23;
                      goto label_042ed58b;
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
  if (g_data_057ade99 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_EZSoftBone_GetComponentInChildren_EZSoftBone);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupPrefabs);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&"None");
    g_data_057ade99 = '\x01';
    pUVar36 = pSVar17[0x10].monitor;
    if (g_data_057adea2 != '\0') goto label_042ed78d;
label_042eda29:
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    pUVar36 = pSVar17[0x10].monitor;
    if (g_data_057adea2 == '\0') goto label_042eda29;
label_042ed78d:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar42 = pUVar36;
  bVar12 = UnityEngine_Object__op_Inequality(pUVar36,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 != '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar36,(MethodInfo *)0x0);
    pUVar42 = pUVar36;
  }
  if ((pSVar17[0x13].klass == (System_String_c *)0x0) ||
     (pvVar7 = ((pSVar17[0x13].klass)->_1).properties, pvVar7 == (void *)0x0)) goto label_042edaae;
  pSVar16 = *(System_String_o **)((long)pvVar7 + 0x18);
  pUVar42 = (UnityEngine_Object_o *)0x0;
  if (pSVar16 == (System_String_o *)0x0) goto label_042edaae;
  pSVar16 = System_String__Substring(pSVar16,4,(MethodInfo *)0x0);
  bVar12 = System_String__op_Inequality(pSVar16,(System_String_o *)"None",(MethodInfo *)0x0);
  if ((char)bVar12 == '\0') {
    return (System_String_o *)CONCAT44(extraout_var_05,bVar12);
  }
  if (*(int *)((long)TypeInfo_ResourcePaths + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar18 = *(System_String_o **)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
  if (*(int *)(TypeInfo_HumanSetupPrefabs + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057adebe != '\0') goto label_042ed874;
label_042eda70:
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupPrefabs);
    il2cpp_runtime_helper_023445d0(&"Back/Back");
    g_data_057adebe = '\x01';
    iVar3 = *(int *)(TypeInfo_HumanSetupPrefabs + 0xe4);
  }
  else {
    if (g_data_057adebe == '\0') goto label_042eda70;
label_042ed874:
    iVar3 = *(int *)(TypeInfo_HumanSetupPrefabs + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar29 = (Characters_HumanSetup_o *)&pSVar17[0x10].monitor;
  pSVar16 = System_String__Concat_3af7150
                      ((System_String_o *)**(undefined8 **)(TypeInfo_HumanSetupPrefabs + 0xb8),"Back/Back",pSVar16,
                       (MethodInfo *)0x0);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar26 = ApplicationManagers_ResourceManager__InstantiateAsset_object_(pSVar18,pSVar16,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
  pSVar17[0x10].monitor = pIVar26;
  il2cpp_runtime_helper_022b4080(pCVar29,pIVar26);
  Characters_HumanSetup__AttachToMount
            (pCVar29,pSVar17[0x10].monitor,(UnityEngine_GameObject_o *)pSVar17[4].fields,1,in_R8);
  pUVar42 = (UnityEngine_Object_o *)0x0;
  if (pSVar17[0x10].monitor == (UnityEngine_GameObject_o *)0x0) {
label_042edaae:
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ade9b == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupPrefabs);
      il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
      il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
      il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
      il2cpp_runtime_helper_023445d0(&"None");
      g_data_057ade9b = '\x01';
      pUVar28 = pUVar42[0x11].klass;
    }
    else {
      pUVar28 = pUVar42[0x11].klass;
    }
    if (g_data_057adea2 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057adea2 = '\x01';
      iVar3 = *(int *)(TypeInfo_Object + 0xe4);
    }
    else {
      iVar3 = *(int *)(TypeInfo_Object + 0xe4);
    }
    if (iVar3 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar44 = pUVar28;
    bVar12 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pUVar28,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar12 != '\0') {
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)pUVar28,(MethodInfo *)0x0);
      pUVar44 = pUVar28;
    }
    if ((pUVar42[0x13].klass != (UnityEngine_Object_c *)0x0) &&
       (pvVar7 = ((pUVar42[0x13].klass)->_1).fields, pvVar7 != (void *)0x0)) {
      pSVar16 = *(System_String_o **)((long)pvVar7 + 0x18);
      pUVar44 = (UnityEngine_Object_c *)0x0;
      if (pSVar16 != (System_String_o *)0x0) {
        pSVar16 = System_String__Substring(pSVar16,3,(MethodInfo *)0x0);
        bVar12 = System_String__op_Inequality(pSVar16,(System_String_o *)"None",(MethodInfo *)0x0);
        if ((char)bVar12 != '\0') {
          if (*(int *)((long)TypeInfo_ResourcePaths + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar17 = *(System_String_o **)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
          if (*(int *)(TypeInfo_HumanSetupPrefabs + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057adebf == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupPrefabs);
            il2cpp_runtime_helper_023445d0(&"Hat/Hat");
            g_data_057adebf = '\x01';
            iVar3 = *(int *)(TypeInfo_HumanSetupPrefabs + 0xe4);
          }
          else {
            iVar3 = *(int *)(TypeInfo_HumanSetupPrefabs + 0xe4);
          }
          if (iVar3 == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pCVar29 = (Characters_HumanSetup_o *)(pUVar42 + 0x11);
          pSVar16 = System_String__Concat_3af7150
                              ((System_String_o *)**(undefined8 **)(TypeInfo_HumanSetupPrefabs + 0xb8),"Hat/Hat",pSVar16,
                               (MethodInfo *)0x0);
          if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pUVar28 = (UnityEngine_Object_c *)
                    ApplicationManagers_ResourceManager__InstantiateAsset_object_
                              (pSVar17,pSVar16,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
          pUVar42[0x11].klass = pUVar28;
          il2cpp_runtime_helper_022b4080(pCVar29,pUVar28);
          Characters_HumanSetup__AttachToMount
                    (pCVar29,(UnityEngine_GameObject_o *)pUVar42[0x11].klass,pUVar42[5].monitor,1,in_R8);
          return extraout_RAX_08;
        }
        return (System_String_o *)CONCAT44(extraout_var_08,bVar12);
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ade9a == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupPrefabs);
      il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
      il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
      il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
      il2cpp_runtime_helper_023445d0(&"None");
      g_data_057ade9a = '\x01';
      pUVar36 = (UnityEngine_Object_o *)pUVar44[1]._1.namespaze;
    }
    else {
      pUVar36 = (UnityEngine_Object_o *)pUVar44[1]._1.namespaze;
    }
    if (g_data_057adea2 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057adea2 = '\x01';
      iVar3 = *(int *)(TypeInfo_Object + 0xe4);
    }
    else {
      iVar3 = *(int *)(TypeInfo_Object + 0xe4);
    }
    if (iVar3 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar42 = (UnityEngine_Object_o *)0x0;
    bVar12 = UnityEngine_Object__op_Inequality(pUVar36,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar12 != '\0') {
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar42 = (UnityEngine_Object_o *)0x0;
      UnityEngine_Object__Destroy_4e01c60(pUVar36,(MethodInfo *)0x0);
    }
    pIVar9 = pUVar44[1]._1.declaringType;
    if (((pIVar9 != (Il2CppClass *)0x0) && (pvVar7 = (pIVar9->_1).events, pvVar7 != (void *)0x0)) &&
       (pSVar16 = *(System_String_o **)((long)pvVar7 + 0x18), pSVar16 != (System_String_o *)0x0)) {
      pSVar16 = System_String__Substring(pSVar16,4,(MethodInfo *)0x0);
      bVar12 = System_String__op_Inequality(pSVar16,(System_String_o *)"None",(MethodInfo *)0x0);
      if ((char)bVar12 == '\0') {
        return (System_String_o *)CONCAT44(extraout_var_09,bVar12);
      }
      if (*(int *)((long)TypeInfo_ResourcePaths + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar17 = *(System_String_o **)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
      if (*(int *)(TypeInfo_HumanSetupPrefabs + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057adec0 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupPrefabs);
        il2cpp_runtime_helper_023445d0(&"Head/Head");
        g_data_057adec0 = '\x01';
        iVar3 = *(int *)(TypeInfo_HumanSetupPrefabs + 0xe4);
      }
      else {
        iVar3 = *(int *)(TypeInfo_HumanSetupPrefabs + 0xe4);
      }
      if (iVar3 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pCVar29 = (Characters_HumanSetup_o *)&pUVar44[1]._1.namespaze;
      pSVar16 = System_String__Concat_3af7150
                          ((System_String_o *)**(undefined8 **)(TypeInfo_HumanSetupPrefabs + 0xb8),"Head/Head",pSVar16,
                           (MethodInfo *)0x0);
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar26 = ApplicationManagers_ResourceManager__InstantiateAsset_object_(pSVar17,pSVar16,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
      pUVar44[1]._1.namespaze = (char *)pIVar26;
      il2cpp_runtime_helper_022b4080(pCVar29,pIVar26);
      Characters_HumanSetup__AttachToMount
                (pCVar29,(UnityEngine_GameObject_o *)pUVar44[1]._1.namespaze,
                 (UnityEngine_GameObject_o *)(pUVar44->_1).klass,1,in_R8);
      return extraout_RAX_09;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057adea2 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057adea2 = '\x01';
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar12 = UnityEngine_Object__op_Inequality(pUVar42,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar12 == '\0') {
      return (System_String_o *)CONCAT44(extraout_var_10,bVar12);
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar42,(MethodInfo *)0x0);
    return extraout_RAX_10;
  }
  pUVar36 = (UnityEngine_Object_o *)
            UnityEngine_GameObject__GetComponentInChildren_object_(pSVar17[0x10].monitor,MethodInfo_EZSoftBone_GetComponentInChildren_EZSoftBone);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar42 = pUVar36;
  bVar12 = UnityEngine_Object__op_Inequality(pUVar36,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pSVar16 = (System_String_o *)CONCAT44(extraout_var_06,bVar12);
  if ((char)bVar12 != '\0') {
    if (pUVar36 == (UnityEngine_Object_o *)0x0) goto label_042edaae;
    pUVar28 = pUVar36[7].klass;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar12 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pUVar28,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    pSVar16 = (System_String_o *)CONCAT44(extraout_var_07,bVar12);
    if ((char)bVar12 != '\0') {
      pUVar28 = (UnityEngine_Object_c *)
                UnityEngine_Component__get_transform((UnityEngine_Component_o *)pSVar17,(MethodInfo *)0x0);
      pUVar36[7].klass = pUVar28;
      pSVar16 = (System_String_o *)il2cpp_runtime_helper_022b4080(pUVar36 + 7,pUVar28);
      return pSVar16;
    }
  }
  return pSVar16;
}


// Characters.HumanSetupTextures$$GetChestTexture
// il2cpp: System_String_o* Characters_HumanSetupTextures__GetChestTexture (Characters_HumanSetupTextures_o* __this, int32_t chest, const MethodInfo* method);
// 0x42f0fc0

System_String_o *
Characters_HumanSetupTextures__GetChestTexture
          (Characters_HumanSetupTextures_o *__this,int32_t chest,MethodInfo *method)

{
  Characters_HumanSetup_o *pCVar1;
  long lVar2;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  undefined8 *puVar6;
  System_String_o *pSVar7;
  System_String_o *pSVar8;
  UnityEngine_Material_o *__this_00;
  UnityEngine_MonoBehaviour_o *__this_01;
  UnityEngine_MonoBehaviour_c *pUVar9;
  System_Collections_Generic_Dictionary_object__object__o *pSVar10;
  System_String_o *extraout_RAX;
  System_Collections_Generic_HashSet_object__o *__this_02;
  char cVar11;
  MethodInfo *str1;
  MethodInfo *pMVar12;
  System_String_o **ppSVar13;
  System_String_c *str0;
  uint16_t uStack_32;
  Characters_HumanSetupTextures_o *pCStack_30;
  
  str1 = (MethodInfo *)(ulong)(uint)chest;
  ppSVar13 = (System_String_o **)__this;
  if (g_data_057adeca == '\0') {
    il2cpp_runtime_helper_023445d0(&"Misc/aottg_hero_annie_cap_causal");
    il2cpp_runtime_helper_023445d0(&"Type");
    il2cpp_runtime_helper_023445d0(&"Misc/aottg_hero_annie_cap_uniform");
    ppSVar13 = &"Uniform";
    il2cpp_runtime_helper_023445d0();
    g_data_057adeca = '\x01';
  }
  if (chest != 1) {
    puVar6 = *(undefined8 **)(g_data_057b9c00 + 0xb8);
label_042f10a0:
    return (System_String_o *)*puVar6;
  }
  pCVar1 = (__this->fields)._setup;
  if (((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
      (ppSVar13 = (System_String_o **)(pCVar1->fields).CurrentCostume,
      (System_String_o *)ppSVar13 != (System_String_o *)0x0)) &&
     (str1 = "Type",
     pSVar4 = (System_String_o *)
              (*(((System_String_o *)ppSVar13)->klass->vtable)._7_CompareTo.methodPtr)
                        (ppSVar13,"Type",
                         (((System_String_o *)ppSVar13)->klass->vtable)._7_CompareTo.method),
     pSVar4 != (System_String_o *)0x0)) {
    str1 = (pSVar4->klass->vtable)._9_GetTypeCode.method;
    pSVar5 = (System_String_o *)(*(pSVar4->klass->vtable)._9_GetTypeCode.methodPtr)();
    ppSVar13 = (System_String_o **)pSVar4;
    if (pSVar5 != (System_String_o *)0x0) {
      bVar3 = System_String__StartsWith(pSVar5,"Uniform",(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        puVar6 = &"Misc/aottg_hero_annie_cap_causal";
      }
      else {
        puVar6 = &"Misc/aottg_hero_annie_cap_uniform";
      }
      goto label_042f10a0;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar4 = (System_String_o *)ppSVar13;
  pCStack_30 = __this;
  if (g_data_057adeb5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Char_Last_Char);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&"_F");
    il2cpp_runtime_helper_023445d0(&"_uniform");
    il2cpp_runtime_helper_023445d0(&"_M");
    il2cpp_runtime_helper_023445d0(&"Type");
    il2cpp_runtime_helper_023445d0(&"player");
    il2cpp_runtime_helper_023445d0(&"Uniform");
    pSVar4 = (System_String_o *)&"_casual";
    il2cpp_runtime_helper_023445d0();
    g_data_057adeb5 = '\x01';
  }
  pSVar5 = "player";
  uStack_32 = 0;
  if (((((System_String_o *)ppSVar13)->fields != (System_String_Fields)0x0) &&
      (pSVar4 = *(System_String_o **)((long)((System_String_o *)ppSVar13)->fields + 0x1d8),
      pSVar4 != (System_String_o *)0x0)) &&
     (str1 = "Type",
     pSVar7 = (System_String_o *)
              (*(pSVar4->klass->vtable)._7_CompareTo.methodPtr)
                        (pSVar4,"Type",(pSVar4->klass->vtable)._7_CompareTo.method),
     pSVar7 != (System_String_o *)0x0)) {
    str1 = (pSVar7->klass->vtable)._9_GetTypeCode.method;
    pSVar8 = (System_String_o *)(*(pSVar7->klass->vtable)._9_GetTypeCode.methodPtr)();
    pSVar4 = pSVar7;
    if (pSVar8 != (System_String_o *)0x0) {
      bVar3 = System_String__StartsWith(pSVar8,"Uniform",(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        puVar6 = &"_casual";
      }
      else {
        puVar6 = &"_uniform";
      }
      str1 = (MethodInfo *)*puVar6;
      pSVar7 = System_String__Concat_3ae5ba0(pSVar5,(System_String_o *)str1,(MethodInfo *)0x0);
      pSVar4 = pSVar5;
      if (((((System_String_o *)ppSVar13)->fields != (System_String_Fields)0x0) &&
          (lVar2 = *(long *)((long)((System_String_o *)ppSVar13)->fields + 0x1c8), lVar2 != 0)) &&
         (lVar2 = *(long *)(lVar2 + 0x38), lVar2 != 0)) {
        if (*(int *)(lVar2 + 0x14) == 0) {
          puVar6 = &"_M";
        }
        else {
          puVar6 = &"_F";
        }
        pSVar4 = System_String__Concat_3ae5ba0(pSVar7,(System_String_o *)*puVar6,(MethodInfo *)0x0);
        uStack_32 = System_Linq_Enumerable__Last_char_
                              ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar8,MethodInfo_Char_Last_Char);
        if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar5 = System_Char__ToString((uint16_t)&uStack_32,(MethodInfo *)0x0);
        pSVar4 = System_String__Concat_3ae5ba0(pSVar4,pSVar5,(MethodInfo *)0x0);
        pSVar4 = System_String__Concat_3ae5ba0
                           ((System_String_o *)((System_String_o *)((long)ppSVar13 + 0x18))->klass,pSVar4,
                            (MethodInfo *)0x0);
        return pSVar4;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar12 = str1;
  pSVar5 = pSVar4;
  if (g_data_057adeb6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&"character_brand_arm_r_0");
    il2cpp_runtime_helper_023445d0(&"Type");
    il2cpp_runtime_helper_023445d0(&"character_brand_chest_f_0");
    il2cpp_runtime_helper_023445d0(&"character_brand_chest_m_0");
    il2cpp_runtime_helper_023445d0(&"character_brand_back_m_0");
    il2cpp_runtime_helper_023445d0(&"Uniform");
    il2cpp_runtime_helper_023445d0(&"character_brand_back_f_0");
    pSVar5 = (System_String_o *)&"character_brand_arm_l_0";
    il2cpp_runtime_helper_023445d0();
    g_data_057adeb6 = '\x01';
  }
  cVar11 = (char)pMVar12;
  if ((pSVar4->fields == (System_String_Fields)0x0) ||
     (pSVar5 = *(System_String_o **)((long)pSVar4->fields + 0x1d8), pSVar5 == (System_String_o *)0x0))
  goto label_042f1475;
  pMVar12 = "Type";
  pSVar7 = (System_String_o *)
           (*(pSVar5->klass->vtable)._7_CompareTo.methodPtr)
                     (pSVar5,"Type",(pSVar5->klass->vtable)._7_CompareTo.method);
  cVar11 = (char)pMVar12;
  if (pSVar7 == (System_String_o *)0x0) goto label_042f1475;
  cVar11 = (char)(pSVar7->klass->vtable)._9_GetTypeCode.method;
  pSVar8 = (System_String_o *)(*(pSVar7->klass->vtable)._9_GetTypeCode.methodPtr)();
  pSVar5 = pSVar7;
  if (pSVar8 == (System_String_o *)0x0) goto label_042f1475;
  pSVar5 = "Uniform";
  bVar3 = System_String__StartsWith(pSVar8,"Uniform",(MethodInfo *)0x0);
  cVar11 = (char)pSVar5;
  if ((char)bVar3 == '\0') {
switchD_042f13af_default:
    return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  pSVar5 = pSVar8;
  switch((int)str1) {
  case 1:
    str0 = pSVar4[1].klass;
    puVar6 = &"character_brand_arm_l_0";
    goto label_042f1464;
  case 2:
    str0 = pSVar4[1].klass;
    puVar6 = &"character_brand_arm_r_0";
label_042f1464:
    pSVar4 = System_String__Concat_3ae5ba0
                       ((System_String_o *)str0,(System_String_o *)*puVar6,(MethodInfo *)0x0);
    return pSVar4;
  case 3:
    if (((pSVar4->fields != (System_String_Fields)0x0) &&
        (lVar2 = *(long *)((long)pSVar4->fields + 0x1c8), lVar2 != 0)) &&
       (lVar2 = *(long *)(lVar2 + 0x38), lVar2 != 0)) {
      str0 = pSVar4[1].klass;
      if (*(int *)(lVar2 + 0x14) == 0) {
        puVar6 = &"character_brand_chest_m_0";
      }
      else {
        puVar6 = &"character_brand_chest_f_0";
      }
      goto label_042f1464;
    }
    break;
  case 4:
    if (((pSVar4->fields != (System_String_Fields)0x0) &&
        (lVar2 = *(long *)((long)pSVar4->fields + 0x1c8), lVar2 != 0)) &&
       (lVar2 = *(long *)(lVar2 + 0x38), lVar2 != 0)) {
      str0 = pSVar4[1].klass;
      if (*(int *)(lVar2 + 0x14) == 0) {
        puVar6 = &"character_brand_back_m_0";
      }
      else {
        puVar6 = &"character_brand_back_f_0";
      }
      goto label_042f1464;
    }
    break;
  default:
    goto switchD_042f13af_default;
  }
label_042f1475:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adea9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Material_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupMaterials);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Material_InstantiateAsset_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
    il2cpp_runtime_helper_023445d0(&"Human/Parts/Face/Materials/");
    il2cpp_runtime_helper_023445d0(&"HumanFaceMat");
    il2cpp_runtime_helper_023445d0(&"HumanFaceUntiledMat");
    il2cpp_runtime_helper_023445d0(&"Human/Parts/Face/Textures/");
    g_data_057adea9 = '\x01';
    if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) goto label_042f1574;
label_042f14ad:
    pSVar10 = *(System_Collections_Generic_Dictionary_object__object__o **)
               (*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 0x10);
  }
  else {
    if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) != 0) goto label_042f14ad;
label_042f1574:
    il2cpp_runtime_helper_02337ed0();
    pSVar10 = *(System_Collections_Generic_Dictionary_object__object__o **)
               (*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 0x10);
  }
  if (pSVar10 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar10,(Il2CppObject *)pSVar5,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar3 == '\0') {
      if (cVar11 == '\0') {
        puVar6 = &"HumanFaceMat";
      }
      else {
        puVar6 = &"HumanFaceUntiledMat";
      }
      pSVar4 = (System_String_o *)*puVar6;
      if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar7 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
      pSVar4 = System_String__Concat_3ae5ba0("Human/Parts/Face/Materials/",pSVar4,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_00 = (UnityEngine_Material_o *)
                  ApplicationManagers_ResourceManager__InstantiateAsset_object_(pSVar7,pSVar4,1,MethodInfo_Material_InstantiateAsset_Material);
      pSVar4 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
      pSVar7 = System_String__Concat_3ae5ba0("Human/Parts/Face/Textures/",pSVar5,(MethodInfo *)0x0);
      __this_01 = (UnityEngine_MonoBehaviour_o *)
                  ApplicationManagers_ResourceManager__LoadAsset(pSVar4,pSVar7,0,(MethodInfo *)0x0);
      if ((__this_01 != (UnityEngine_MonoBehaviour_o *)0x0) &&
         ((UnityEngine_Texture_c *)__this_01->klass != TypeInfo_Texture2D)) goto label_042f1712;
      if (__this_00 != (UnityEngine_Material_o *)0x0) {
        UnityEngine_Material__set_mainTexture(__this_00,(UnityEngine_Texture_o *)__this_01,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar10 = *(System_Collections_Generic_Dictionary_object__object__o **)
                   (*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 0x10);
        if (pSVar10 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___set_Item
                    (pSVar10,(Il2CppObject *)pSVar5,(Il2CppObject *)__this_00,MethodInfo_Void_set_Item);
          goto label_042f16cf;
        }
      }
    }
    else {
label_042f16cf:
      if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar10 = *(System_Collections_Generic_Dictionary_object__object__o **)
                 (*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 0x10);
      if (pSVar10 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        pSVar4 = (System_String_o *)
                 System_Collections_Generic_Dictionary_object__object___get_Item
                           (pSVar10,(Il2CppObject *)pSVar5,MethodInfo_Material_get_Item);
        return pSVar4;
      }
    }
  }
  __this_01 = (UnityEngine_MonoBehaviour_o *)il2cpp_runtime_helper_022b2c90();
label_042f1712:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057adea3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_UnityEngine_Renderer_UnityEngine_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_Renderer_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"Fire2");
    il2cpp_runtime_helper_023445d0(&"Lightning1");
    il2cpp_runtime_helper_023445d0(&"Fire1");
    g_data_057adea3 = '\x01';
  }
  pUVar9 = (UnityEngine_MonoBehaviour_c *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,3);
  if (pUVar9 != (UnityEngine_MonoBehaviour_c *)0x0) {
    if (*(int *)&(pUVar9->_1).namespaze != 0) {
      (pUVar9->_1).byval_arg.data = "Fire1";
      il2cpp_runtime_helper_022b4080(&(pUVar9->_1).byval_arg);
      if (1 < *(uint *)&(pUVar9->_1).namespaze) {
        *(undefined8 *)&(pUVar9->_1).byval_arg.bits = "Fire2";
        il2cpp_runtime_helper_022b4080(&(pUVar9->_1).byval_arg.bits);
        if (2 < *(uint *)&(pUVar9->_1).namespaze) {
          (pUVar9->_1).this_arg.data = "Lightning1";
          il2cpp_runtime_helper_022b4080(&(pUVar9->_1).this_arg);
          __this_01[0xd].klass = pUVar9;
          il2cpp_runtime_helper_022b4080(__this_01 + 0xd,pUVar9);
          pSVar10 = (System_Collections_Generic_Dictionary_object__object__o *)
                    il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_Renderer_Material);
          System_Collections_Generic_Dictionary_object__object____ctor(pSVar10,MethodInfo_Dictionary_2_UnityEngine_Renderer_UnityEngine_Material);
          __this_01[0xf].fields.m_CachedPtr = (intptr_t)pSVar10;
          il2cpp_runtime_helper_022b4080(&__this_01[0xf].fields);
          UnityEngine_MonoBehaviour___ctor(__this_01,(MethodInfo *)0x0);
          return extraout_RAX;
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adea4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetup);
    g_data_057adea4 = '\x01';
  }
  __this_02 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor(__this_02,MethodInfo_HashSet_1_System_String);
  lVar2 = *(long *)(TypeInfo_HumanSetup + 0xb8);
  *(System_Collections_Generic_HashSet_object__o **)(lVar2 + 0x40) = __this_02;
  pSVar4 = (System_String_o *)il2cpp_runtime_helper_022b4080(lVar2 + 0x40,__this_02);
  return pSVar4;
}


