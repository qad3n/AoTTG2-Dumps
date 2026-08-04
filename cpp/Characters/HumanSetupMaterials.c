// Type: Characters.HumanSetupMaterials
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/HumanSetupMaterials.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Setup/HumanSetupMaterials.cs
// --------------------------------

// Characters.HumanSetupMaterials$$Init
// il2cpp: void Characters_HumanSetupMaterials__Init (const MethodInfo* method);
// 0x42e7710

void Characters_HumanSetupMaterials__Init(MethodInfo *method)

{
  return;
}


// Characters.HumanSetupMaterials$$GetCostumeMaterial
// il2cpp: UnityEngine_Material_o* Characters_HumanSetupMaterials__GetCostumeMaterial (System_String_o* mainTexture, System_String_o* maskTexture, System_String_o* colorTexture, System_String_o* pantsTexture, UnityEngine_Color_o shirt, UnityEngine_Color_o straps, UnityEngine_Color_o pants, UnityEngine_Color_o jacket, UnityEngine_Color_o boots, const MethodInfo* method);
// 0x42ea130

UnityEngine_Material_o *
Characters_HumanSetupMaterials__GetCostumeMaterial
          (System_String_o *mainTexture,System_String_o *maskTexture,System_String_o *colorTexture,
          System_String_o *pantsTexture,UnityEngine_Color_o shirt,UnityEngine_Color_o straps,
          UnityEngine_Color_o pants,UnityEngine_Color_o jacket,UnityEngine_Color_o boots,MethodInfo *method)

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
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  bool_conflict bVar14;
  uint uVar15;
  int32_t iVar16;
  System_String_o *pSVar17;
  UnityEngine_Material_o *pUVar18;
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
  UnityEngine_Material_o *extraout_RAX;
  System_String_o *pSVar26;
  Il2CppObject *pIVar27;
  UnityEngine_Material_o *extraout_RAX_00;
  System_String_Fields SVar28;
  undefined4 extraout_var_00;
  UnityEngine_Material_o *extraout_RAX_01;
  undefined4 extraout_var_01;
  UnityEngine_Object_c *pUVar29;
  UnityEngine_Material_o *extraout_RAX_02;
  Characters_HumanSetup_o *pCVar30;
  Characters_HumanSetup_o *pCVar31;
  System_String_Fields SVar32;
  System_String_Fields SVar33;
  UnityEngine_Renderer_o *pUVar34;
  System_String_Fields method_00;
  System_String_Fields SVar35;
  System_String_Fields __this;
  UnityEngine_Material_o *extraout_RAX_03;
  System_String_Fields SVar36;
  UnityEngine_Material_o *extraout_RAX_04;
  System_String_o *pSVar37;
  UnityEngine_Object_o *pUVar38;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_SkinnedMeshRenderer_o *__this_01;
  UnityEngine_SkinnedMeshRenderer_o *__this_02;
  UnityEngine_Mesh_o *value;
  UnityEngine_Material_o *extraout_RAX_05;
  undefined8 *puVar39;
  System_String_o **__this_03;
  UnityEngine_Material_o *pUVar40;
  UnityEngine_Material_o *extraout_RAX_06;
  UnityEngine_Material_o *extraout_RAX_07;
  System_String_c *pSVar41;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  undefined4 extraout_var_05;
  undefined4 extraout_var_06;
  undefined4 extraout_var_07;
  undefined4 extraout_var_08;
  UnityEngine_Material_o *extraout_RAX_08;
  undefined4 extraout_var_09;
  UnityEngine_Material_o *extraout_RAX_09;
  undefined4 extraout_var_10;
  UnityEngine_Material_o *extraout_RAX_10;
  long lVar42;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX;
  MethodInfo *method_02;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *method_03;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
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
  MethodInfo *extraout_RDX_07;
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
  MethodInfo *method_20;
  MethodInfo *extraout_RDX_20;
  MethodInfo *extraout_RDX_21;
  MethodInfo *extraout_RDX_22;
  MethodInfo *pMVar43;
  long *plVar44;
  UnityEngine_Object_o *pUVar45;
  MethodInfo *method_21;
  Utility_Color255_o *__this_04;
  System_String_Fields __this_05;
  System_Object_array *__this_06;
  System_String_Fields __this_07;
  UnityEngine_Object_c *pUVar46;
  MethodInfo *in_R9;
  uint uVar47;
  System_String_c **value_00;
  float fVar48;
  float fVar49;
  undefined4 in_XMM0_Dc;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 in_XMM0_Dd;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  float fVar50;
  float fVar51;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Color_o value_01;
  UnityEngine_Color_o value_02;
  UnityEngine_Color_o value_03;
  UnityEngine_Color_o color;
  UnityEngine_Color_o color_00;
  UnityEngine_Color_o UVar52;
  UnityEngine_Color_o color_01;
  undefined4 uStack_2a4;
  long lStack_2a0;
  long *plStack_298;
  System_Object_array *pSStack_290;
  System_String_Fields SStack_288;
  System_String_Fields SStack_280;
  undefined1 auStack_278 [16];
  undefined1 auStack_268 [24];
  System_String_Fields SStack_250;
  System_String_Fields SStack_248;
  System_Object_array *pSStack_240;
  System_String_Fields SStack_238;
  Characters_HumanSetup_o *pCStack_230;
  System_String_Fields SStack_228;
  undefined1 auStack_220 [8];
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined1 auStack_210 [24];
  long *plStack_1f8;
  System_String_Fields SStack_1f0;
  System_Object_array *pSStack_1e8;
  System_String_Fields SStack_1e0;
  UnityEngine_Texture_o *pUStack_1d8;
  System_String_Fields SStack_1d0;
  System_String_o *pSStack_1c8;
  long *plStack_1c0;
  System_String_Fields SStack_1b8;
  System_Object_array *pSStack_1b0;
  System_String_Fields SStack_1a8;
  UnityEngine_Texture_o *pUStack_1a0;
  System_String_Fields SStack_198;
  System_String_o *pSStack_190;
  System_String_o *pSStack_188;
  Utility_Color255_o *pUStack_180;
  System_Object_array *pSStack_178;
  System_String_Fields SStack_170;
  UnityEngine_Texture_o *pUStack_168;
  Utility_Color255_o *pUStack_160;
  undefined8 uStack_158;
  Utility_Color255_o *pUStack_150;
  Characters_HumanSetup_o *pCStack_148;
  Characters_HumanSetup_o *pCStack_140;
  UnityEngine_Texture_o *pUStack_138;
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [24];
  UnityEngine_Material_o *pUStack_108;
  System_String_o *pSStack_100;
  long *plStack_f8;
  Characters_HumanSetup_o *pCStack_f0;
  UnityEngine_Texture_o *pUStack_e8;
  System_String_o *pSStack_e0;
  UnityEngine_Texture_o *local_d0;
  System_String_o *local_c8;
  System_String_o *local_c0;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined4 extraout_var_02;
  
  local_48 = jacket.fields._8_8_;
  local_58 = jacket.fields._0_8_;
  local_68 = pants.fields._8_8_;
  local_78 = pants.fields._0_8_;
  local_88 = straps.fields._8_8_;
  local_98 = straps.fields._0_8_;
  local_a8._8_4_ = in_XMM1_Dc;
  local_a8._0_8_ = shirt.fields._8_8_;
  local_a8._12_4_ = in_XMM1_Dd;
  local_b8._8_4_ = in_XMM0_Dc;
  local_b8._0_8_ = shirt.fields._0_8_;
  local_b8._12_4_ = in_XMM0_Dd;
  local_c8 = colorTexture;
  local_c0 = pantsTexture;
  if (g_data_057adea5 == '\0') {
    pSStack_e0 = (System_String_o *)0x42ea198;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupMaterials);
    pSStack_e0 = (System_String_o *)0x42ea1a4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Material_InstantiateAsset_Material);
    pSStack_e0 = (System_String_o *)0x42ea1b0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    pSStack_e0 = (System_String_o *)0x42ea1bc;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    pSStack_e0 = (System_String_o *)0x42ea1c8;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
    pSStack_e0 = (System_String_o *)0x42ea1d4;
    il2cpp_runtime_helper_023445d0(&"HumanCostumeMat");
    pSStack_e0 = (System_String_o *)0x42ea1e0;
    il2cpp_runtime_helper_023445d0(&"_jacket_color");
    pSStack_e0 = (System_String_o *)0x42ea1ec;
    il2cpp_runtime_helper_023445d0(&"_main_tex_mask");
    pSStack_e0 = (System_String_o *)0x42ea1f8;
    il2cpp_runtime_helper_023445d0(&"_pants_tex");
    pSStack_e0 = (System_String_o *)0x42ea204;
    il2cpp_runtime_helper_023445d0(&"_main_tex");
    pSStack_e0 = (System_String_o *)0x42ea210;
    il2cpp_runtime_helper_023445d0(&"_color_tex");
    pSStack_e0 = (System_String_o *)0x42ea21c;
    il2cpp_runtime_helper_023445d0(&"_boots_color");
    pSStack_e0 = (System_String_o *)0x42ea228;
    il2cpp_runtime_helper_023445d0(&"_straps_color");
    pSStack_e0 = (System_String_o *)0x42ea234;
    il2cpp_runtime_helper_023445d0(&"_pants_color");
    pSStack_e0 = (System_String_o *)0x42ea240;
    il2cpp_runtime_helper_023445d0(&"_shirt_color");
    g_data_057adea5 = '\x01';
  }
  if (*(int *)((long)TypeInfo_ResourcePaths + 0xe4) == 0) {
    pSStack_e0 = (System_String_o *)0x42ea264;
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar20 = &TypeInfo_ResourcePaths;
  pSVar26 = *(System_String_o **)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
  if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
    pSStack_e0 = (System_String_o *)0x42ea293;
    il2cpp_runtime_helper_02337ed0();
  }
  plVar44 = &TypeInfo_HumanSetupMaterials;
  pSStack_e0 = (System_String_o *)0x42ea2b6;
  pSVar17 = System_String__Concat_3ae5ba0
                      (*(System_String_o **)(*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 0x28),"HumanCostumeMat",
                       (MethodInfo *)0x0);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    pSStack_e0 = (System_String_o *)0x42ea2d1;
    il2cpp_runtime_helper_02337ed0();
  }
  pSStack_e0 = (System_String_o *)0x42ea2eb;
  pUVar18 = (UnityEngine_Material_o *)
            ApplicationManagers_ResourceManager__InstantiateAsset_object_(pSVar26,pSVar17,1,MethodInfo_Material_InstantiateAsset_Material);
  pSVar26 = *(System_String_o **)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
  pSStack_e0 = (System_String_o *)0x42ea315;
  pSVar17 = System_String__Concat_3ae5ba0
                      (*(System_String_o **)(*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 0x20),mainTexture,
                       (MethodInfo *)0x0);
  pSStack_e0 = (System_String_o *)0x42ea324;
  pUVar19 = (UnityEngine_Texture_o *)
            ApplicationManagers_ResourceManager__LoadAsset(pSVar26,pSVar17,0,(MethodInfo *)0x0);
  value_00 = &TypeInfo_Texture2D;
  if ((pUVar19 == (UnityEngine_Texture_o *)0x0) || ((System_String_c *)pUVar19->klass == TypeInfo_Texture2D)) {
    pSVar26 = *(System_String_o **)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
    pSStack_e0 = (System_String_o *)0x42ea368;
    local_d0 = pUVar19;
    pSVar17 = System_String__Concat_3ae5ba0
                        (*(System_String_o **)(*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 0x20),maskTexture,
                         (MethodInfo *)0x0);
    pSStack_e0 = (System_String_o *)0x42ea377;
    maskTexture = (System_String_o *)
                  ApplicationManagers_ResourceManager__LoadAsset(pSVar26,pSVar17,0,(MethodInfo *)0x0);
    if ((maskTexture != (System_String_o *)0x0) && (maskTexture->klass != TypeInfo_Texture2D)) goto label_042ea55f;
    pSVar26 = *(System_String_o **)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
    pSStack_e0 = (System_String_o *)0x42ea3b5;
    pSVar17 = System_String__Concat_3ae5ba0
                        (*(System_String_o **)(*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 0x20),local_c8,
                         (MethodInfo *)0x0);
    pSStack_e0 = (System_String_o *)0x42ea3c4;
    value_00 = (System_String_c **)
               ApplicationManagers_ResourceManager__LoadAsset(pSVar26,pSVar17,0,(MethodInfo *)0x0);
    if (((UnityEngine_Texture_o *)value_00 != (UnityEngine_Texture_o *)0x0) &&
       ((System_String_c *)((UnityEngine_Texture_o *)value_00)->klass != TypeInfo_Texture2D)) goto label_042ea567;
    pSVar26 = *(System_String_o **)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
    pSStack_e0 = (System_String_o *)0x42ea408;
    pSVar17 = System_String__Concat_3ae5ba0
                        (*(System_String_o **)(*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 0x20),local_c0,
                         (MethodInfo *)0x0);
    pSStack_e0 = (System_String_o *)0x42ea417;
    pSVar20 = (System_String_Fields *)
              ApplicationManagers_ResourceManager__LoadAsset(pSVar26,pSVar17,0,(MethodInfo *)0x0);
    if (((Characters_HumanSetup_o *)pSVar20 == (Characters_HumanSetup_o *)0x0) ||
       ((System_String_c *)((Characters_HumanSetup_o *)pSVar20)->klass == TypeInfo_Texture2D)) {
      if (pUVar18 != (UnityEngine_Material_o *)0x0) {
        pSStack_e0 = (System_String_o *)0x42ea45c;
        UnityEngine_Material__SetTexture(pUVar18,"_main_tex",local_d0,(MethodInfo *)0x0);
        pSStack_e0 = (System_String_o *)0x42ea473;
        UnityEngine_Material__SetTexture
                  (pUVar18,"_main_tex_mask",(UnityEngine_Texture_o *)maskTexture,(MethodInfo *)0x0);
        pSStack_e0 = (System_String_o *)0x42ea48a;
        UnityEngine_Material__SetTexture
                  (pUVar18,"_color_tex",(UnityEngine_Texture_o *)value_00,(MethodInfo *)0x0);
        pSStack_e0 = (System_String_o *)0x42ea4a1;
        UnityEngine_Material__SetTexture
                  (pUVar18,"_pants_tex",(UnityEngine_Texture_o *)pSVar20,(MethodInfo *)0x0);
        auVar13 = local_a8;
        auVar12 = local_b8;
        pSStack_e0 = (System_String_o *)0x42ea4bf;
        UVar52.fields.b = (float)local_a8._0_4_;
        UVar52.fields.a = (float)local_a8._4_4_;
        UVar52.fields.r = (float)local_b8._0_4_;
        UVar52.fields.g = (float)local_b8._4_4_;
        local_b8 = auVar12;
        local_a8 = auVar13;
        UnityEngine_Material__SetColor(pUVar18,"_shirt_color",UVar52,(MethodInfo *)0x0);
        pSStack_e0 = (System_String_o *)0x42ea4dd;
        value_01.fields.b = (float)(undefined4)local_88;
        value_01.fields.a = (float)local_88._4_4_;
        value_01.fields.r = (float)(undefined4)local_98;
        value_01.fields.g = (float)local_98._4_4_;
        UnityEngine_Material__SetColor(pUVar18,"_straps_color",value_01,(MethodInfo *)0x0);
        pSStack_e0 = (System_String_o *)0x42ea4fb;
        value_02.fields.b = (float)(undefined4)local_68;
        value_02.fields.a = (float)local_68._4_4_;
        value_02.fields.r = (float)(undefined4)local_78;
        value_02.fields.g = (float)local_78._4_4_;
        UnityEngine_Material__SetColor(pUVar18,"_pants_color",value_02,(MethodInfo *)0x0);
        pSStack_e0 = (System_String_o *)0x42ea51f;
        value_03.fields.b = (float)(undefined4)local_48;
        value_03.fields.a = (float)local_48._4_4_;
        value_03.fields.r = (float)(undefined4)local_58;
        value_03.fields.g = (float)local_58._4_4_;
        UnityEngine_Material__SetColor(pUVar18,"_jacket_color",value_03,(MethodInfo *)0x0);
        pSStack_e0 = (System_String_o *)0x42ea53d;
        UnityEngine_Material__SetColor(pUVar18,"_boots_color",boots,(MethodInfo *)0x0);
        return pUVar18;
      }
      pSStack_e0 = (System_String_o *)0x42ea557;
      pUVar19 = (UnityEngine_Texture_o *)il2cpp_runtime_helper_022b2c90();
      goto label_042ea557;
    }
  }
  else {
label_042ea557:
    pSStack_e0 = (System_String_o *)0x42ea55f;
    il2cpp_runtime_helper_022b2fd0(pUVar19);
label_042ea55f:
    pSStack_e0 = (System_String_o *)0x42ea567;
    il2cpp_runtime_helper_022b2fd0(maskTexture);
label_042ea567:
    pSStack_e0 = (System_String_o *)0x42ea56f;
    il2cpp_runtime_helper_022b2fd0(value_00);
  }
  pSStack_e0 = (System_String_o *)0x42ea577;
  pCVar30 = (Characters_HumanSetup_o *)pSVar20;
  il2cpp_runtime_helper_022b2fd0();
  plStack_f8 = &TypeInfo_HumanSetupMaterials;
  pUStack_108 = pUVar18;
  pSStack_100 = maskTexture;
  pCStack_f0 = (Characters_HumanSetup_o *)pSVar20;
  pUStack_e8 = (UnityEngine_Texture_o *)value_00;
  pSStack_e0 = pSVar26;
  if (g_data_057ade92 == '\0') {
    pUStack_138 = (UnityEngine_Texture_o *)0x42ea8c5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEffectPresets);
    pUStack_138 = (UnityEngine_Texture_o *)0x42ea8d1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ClothFactory);
    pUStack_138 = (UnityEngine_Texture_o *)0x42ea8dd;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponentsInChildren_Renderer);
    pUStack_138 = (UnityEngine_Texture_o *)0x42ea8e9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupMaterials);
    pUStack_138 = (UnityEngine_Texture_o *)0x42ea8f5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    pUStack_138 = (UnityEngine_Texture_o *)0x42ea901;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    pUStack_138 = (UnityEngine_Texture_o *)0x42ea90d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    pUStack_138 = (UnityEngine_Texture_o *)0x42ea919;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    pUStack_138 = (UnityEngine_Texture_o *)0x42ea925;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color255_get_Value);
    pUStack_138 = (UnityEngine_Texture_o *)0x42ea931;
    il2cpp_runtime_helper_023445d0(&"IgnoreColor");
    g_data_057ade92 = '\x01';
    pUVar22 = (Utility_Color255_o *)(pCVar30->fields)._part_hair;
    if (g_data_057adea2 != '\0') goto label_042ea5b3;
label_042ea94d:
    pUStack_138 = (UnityEngine_Texture_o *)0x42ea959;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    pUVar22 = (Utility_Color255_o *)(pCVar30->fields)._part_hair;
    if (g_data_057adea2 == '\0') goto label_042ea94d;
label_042ea5b3:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    pUStack_138 = (UnityEngine_Texture_o *)0x42ea97d;
    il2cpp_runtime_helper_02337ed0();
  }
  path_00 = &TypeInfo_Object;
  pUStack_138 = (UnityEngine_Texture_o *)0x42ea5d7;
  __this_04 = pUVar22;
  bVar14 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pUVar22,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar14 == '\0') {
    if ((char)(pCVar30->fields).IsDeadBody == '\0') goto label_042ea9ad;
label_042ea5ee:
    pSVar21 = (pCVar30->fields).CustomSet;
    if (pSVar21 != (Settings_HumanCustomSet_o *)0x0) goto label_042ea5ff;
label_042eabbd:
    pUStack_138 = (UnityEngine_Texture_o *)0x42eabc2;
    il2cpp_runtime_helper_022b2c90();
    path = (System_String_Fields *)plVar44;
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      pUStack_138 = (UnityEngine_Texture_o *)0x42ea994;
      il2cpp_runtime_helper_02337ed0();
    }
    pUStack_138 = (UnityEngine_Texture_o *)0x42ea99e;
    __this_04 = pUVar22;
    UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)pUVar22,(MethodInfo *)0x0);
    if ((char)(pCVar30->fields).IsDeadBody != '\0') goto label_042ea5ee;
label_042ea9ad:
    pUVar22 = (Utility_Color255_o *)(pCVar30->fields)._part_hair_1;
    if (*(int *)(TypeInfo_ClothFactory + 0xe4) == 0) {
      pUStack_138 = (UnityEngine_Texture_o *)0x42ea9cd;
      il2cpp_runtime_helper_02337ed0();
    }
    pUStack_138 = (UnityEngine_Texture_o *)0x42ea9d7;
    __this_04 = pUVar22;
    ClothFactory__DisposeObject((UnityEngine_GameObject_o *)pUVar22,(MethodInfo *)0x0);
    pSVar21 = (pCVar30->fields).CustomSet;
    if (pSVar21 == (Settings_HumanCustomSet_o *)0x0) goto label_042eabbd;
label_042ea5ff:
    pSVar4 = (pSVar21->fields).HairEffect;
    if (pSVar4 == (Settings_StringSetting_o *)0x0) goto label_042eabbd;
    pUVar22 = (Utility_Color255_o *)(pSVar4->fields)._value;
    if (*(int *)(TypeInfo_CharacterEffectPresets + 0xe4) == 0) {
      pUStack_138 = (UnityEngine_Texture_o *)0x42ea62b;
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar43 = (MethodInfo *)0x0;
    pUStack_138 = (UnityEngine_Texture_o *)0x42ea635;
    uVar15 = PatreonEffects_CharacterEffectPresets__ParseOrDefault
                       ((System_String_o *)pUVar22,(MethodInfo *)0x0);
    pCVar5 = (pCVar30->fields)._meshes;
    __this_04 = (Utility_Color255_o *)0x0;
    if (pCVar5 == (Characters_HumanSetupMeshes_o *)0x0) goto label_042eabbd;
    pSVar20 = (System_String_Fields *)(ulong)uVar15;
    pUStack_138 = (UnityEngine_Texture_o *)0x42ea64e;
    pUVar22 = (Utility_Color255_o *)Characters_HumanSetupMeshes__GetHairMesh(pCVar5,pMVar43);
    pMVar43 = (MethodInfo *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    pUStack_138 = (UnityEngine_Texture_o *)0x42ea673;
    bVar14 = System_String__op_Inequality
                       ((System_String_o *)pUVar22,(System_String_o *)pMVar43,(MethodInfo *)0x0);
    if ((char)bVar14 == '\0') {
label_042eaa10:
      path_00 = &g_data_057b9b70;
      pCVar5 = (pCVar30->fields)._meshes;
      __this_04 = (Utility_Color255_o *)0x0;
      if (pCVar5 != (Characters_HumanSetupMeshes_o *)0x0) {
        pUStack_138 = (UnityEngine_Texture_o *)0x42eaa26;
        pUVar22 = (Utility_Color255_o *)Characters_HumanSetupMeshes__GetHairClothMesh(pCVar5,pMVar43);
        pUStack_138 = (UnityEngine_Texture_o *)0x42eaa44;
        __this_04 = pUVar22;
        bVar14 = System_String__op_Inequality
                           ((System_String_o *)pUVar22,
                            (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
        if (((char)bVar14 == '\0') || ((char)(pCVar30->fields).IsDeadBody != '\0')) {
          return (UnityEngine_Material_o *)CONCAT44(extraout_var,bVar14);
        }
        path_00 = (long *)(pCVar30->fields)._textures;
        if ((Utility_Color255_o *)path_00 != (Utility_Color255_o *)0x0) {
          if (g_data_057adec5 == '\0') {
            __this_04 = (Utility_Color255_o *)&"Texture";
            pUStack_138 = (UnityEngine_Texture_o *)0x42eaa88;
            il2cpp_runtime_helper_023445d0();
            g_data_057adec5 = '\x01';
          }
          if ((*(System_String_Fields *)&((Utility_Color255_o *)path_00)->fields != (System_String_Fields)0x0)
             && (__this_04 = *(Utility_Color255_o **)
                              ((long)*(System_String_Fields *)&((Utility_Color255_o *)path_00)->fields + 0x1e0
                              ), __this_04 != (Utility_Color255_o *)0x0)) {
            pUStack_138 = (UnityEngine_Texture_o *)0x42eaac6;
            plVar24 = (long *)(*(((System_String_c *)__this_04->klass)->vtable)._7_CompareTo.methodPtr)
                                        (__this_04,"Texture",
                                         (((System_String_c *)__this_04->klass)->vtable)._7_CompareTo.method);
            if (plVar24 != (long *)0x0) {
              pMVar43 = *(MethodInfo **)(*plVar24 + 0x1d0);
              pUStack_138 = (UnityEngine_Texture_o *)0x42eaae2;
              path_00 = (long *)(**(code **)(*plVar24 + 0x1c8))(plVar24);
              if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
                pUStack_138 = (UnityEngine_Texture_o *)0x42eaafd;
                il2cpp_runtime_helper_02337ed0();
              }
              pUStack_138 = (UnityEngine_Texture_o *)0x42eab05;
              __this_04 = (Utility_Color255_o *)path_00;
              value_00 = (System_String_c **)
                         Characters_HumanSetupMaterials__GetHairMaterial((System_String_o *)path_00,pMVar43);
              pSVar21 = (pCVar30->fields).CustomSet;
              if ((pSVar21 != (Settings_HumanCustomSet_o *)0x0) &&
                 (pSVar6 = (pSVar21->fields).HairColor, pSVar6 != (Settings_ColorSetting_o *)0x0)) {
                pUVar25 = (pSVar6->fields)._value;
                __this_04 = (Utility_Color255_o *)0x0;
                if (pUVar25 != (Utility_Color255_o *)0x0) {
                  pUVar23 = (pCVar30->fields)._mount_cloth;
                  pUStack_138 = (UnityEngine_Texture_o *)0x42eab45;
                  UVar52 = Utility_Color255__ToColor(pUVar25,(MethodInfo *)0x0);
                  fVar48 = UVar52.fields.r;
                  fVar49 = UVar52.fields.g;
                  fVar50 = UVar52.fields.b;
                  fVar51 = UVar52.fields.a;
                  if (*(int *)(TypeInfo_ClothFactory + 0xe4) == 0) {
                    auStack_130._8_4_ = extraout_XMM0_Dc;
                    auStack_130._0_8_ = UVar52.fields._0_8_;
                    auStack_130._12_4_ = extraout_XMM0_Dd;
                    auStack_120._8_4_ = in_XMM1_Dc;
                    auStack_120._0_8_ = UVar52.fields._8_8_;
                    auStack_120._12_4_ = in_XMM1_Dd;
                    pUStack_138 = (UnityEngine_Texture_o *)0x42eab66;
                    il2cpp_runtime_helper_02337ed0();
                    fVar48 = (float)auStack_130._0_4_;
                    fVar49 = (float)auStack_130._4_4_;
                    fVar50 = (float)auStack_120._0_4_;
                    fVar51 = (float)auStack_120._4_4_;
                  }
                  pUStack_138 = (UnityEngine_Texture_o *)0x42eab7f;
                  color.fields.g = fVar49;
                  color.fields.r = fVar48;
                  color.fields.a = fVar51;
                  color.fields.b = fVar50;
                  pUVar23 = ClothFactory__GetHair
                                      (pUVar23,(System_String_o *)pUVar22,(UnityEngine_Material_o *)value_00,
                                       color,(MethodInfo *)0x0);
                  (pCVar30->fields)._part_hair_1 = pUVar23;
                  pUStack_138 = (UnityEngine_Texture_o *)0x42eab97;
                  il2cpp_runtime_helper_022b4080(&(pCVar30->fields)._part_hair_1,pUVar23);
                  Characters_HumanSetup__ApplyCharacterEffectToPart
                            (pCVar30,(pCVar30->fields)._part_hair_1,(int32_t)pSVar20,1,method);
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
      pUStack_138 = (UnityEngine_Texture_o *)0x42ea694;
      il2cpp_runtime_helper_02337ed0();
    }
    value_00 = (System_String_c **)&(pCVar30->fields)._part_hair;
    path_00 = *(long **)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      pUStack_138 = (UnityEngine_Texture_o *)0x42ea6c3;
      il2cpp_runtime_helper_02337ed0();
    }
    auStack_130._0_4_ = uVar15;
    pUStack_138 = (UnityEngine_Texture_o *)0x42ea6e1;
    pUVar23 = (UnityEngine_GameObject_o *)
              ApplicationManagers_ResourceManager__InstantiateAsset_object_
                        ((System_String_o *)path_00,(System_String_o *)pUVar22,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
    (pCVar30->fields)._part_hair = pUVar23;
    pUStack_138 = (UnityEngine_Texture_o *)0x42ea6f4;
    pCVar31 = (Characters_HumanSetup_o *)value_00;
    il2cpp_runtime_helper_022b4080(value_00,pUVar23);
    pUStack_138 = (UnityEngine_Texture_o *)0x42ea70b;
    Characters_HumanSetup__AttachToMount
              (pCVar31,(pCVar30->fields)._part_hair,(pCVar30->fields)._part_head,0,method);
    __this_04 = (Utility_Color255_o *)(pCVar30->fields)._part_hair;
    if (__this_04 == (Utility_Color255_o *)0x0) goto label_042eabbd;
    pUStack_138 = (UnityEngine_Texture_o *)0x42ea72b;
    path = (System_String_Fields *)
           UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                     ((UnityEngine_GameObject_o *)__this_04,MethodInfo_Renderer_GetComponentsInChildren_Renderer);
    if ((System_Object_array *)path == (System_Object_array *)0x0) goto label_042eabbd;
    iVar3 = (int)((System_Object_array *)path)->max_length;
    plVar44 = (long *)path;
    if (iVar3 < 1) {
label_042ea9ed:
      pMVar43 = (MethodInfo *)(pCVar30->fields)._part_hair;
      pSVar20 = (System_String_Fields *)(ulong)(uint)auStack_130._0_4_;
      pUStack_138 = (UnityEngine_Texture_o *)0x42eaa09;
      Characters_HumanSetup__ApplyCharacterEffectToPart
                (pCVar30,(UnityEngine_GameObject_o *)pMVar43,auStack_130._0_4_,1,method);
      goto label_042eaa10;
    }
    pSVar20 = (System_String_Fields *)0x0;
    value_00 = (System_String_c **)&"Texture";
    if (iVar3 != 0) {
      do {
        path_00 = (long *)(pCVar30->fields)._textures;
        if ((Utility_Color255_o *)path_00 == (Utility_Color255_o *)0x0) goto label_042eabbd;
        pUVar22 = (Utility_Color255_o *)((System_Object_array *)path)->m_Items[(int)pSVar20];
        if (g_data_057adec5 == '\0') {
          __this_04 = (Utility_Color255_o *)&"Texture";
          pUStack_138 = (UnityEngine_Texture_o *)0x42ea7a4;
          il2cpp_runtime_helper_023445d0();
          g_data_057adec5 = '\x01';
        }
        if ((*(System_String_Fields *)&((Utility_Color255_o *)path_00)->fields == (System_String_Fields)0x0)
           || (__this_04 = *(Utility_Color255_o **)
                            ((long)*(System_String_Fields *)&((Utility_Color255_o *)path_00)->fields + 0x1e0),
              __this_04 == (Utility_Color255_o *)0x0)) goto label_042eabbd;
        pUStack_138 = (UnityEngine_Texture_o *)0x42ea7db;
        plVar24 = (long *)(*(((System_String_c *)__this_04->klass)->vtable)._7_CompareTo.methodPtr)
                                    (__this_04,"Texture",
                                     (((System_String_c *)__this_04->klass)->vtable)._7_CompareTo.method);
        if (plVar24 == (long *)0x0) goto label_042eabbd;
        pMVar43 = *(MethodInfo **)(*plVar24 + 0x1d0);
        pUStack_138 = (UnityEngine_Texture_o *)0x42ea7f7;
        path_00 = (long *)(**(code **)(*plVar24 + 0x1c8))(plVar24);
        if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
          pUStack_138 = (UnityEngine_Texture_o *)0x42ea812;
          il2cpp_runtime_helper_02337ed0();
        }
        pUStack_138 = (UnityEngine_Texture_o *)0x42ea81a;
        __this_04 = (Utility_Color255_o *)path_00;
        pUVar18 = Characters_HumanSetupMaterials__GetHairMaterial((System_String_o *)path_00,pMVar43);
        if (pUVar22 == (Utility_Color255_o *)0x0) goto label_042eabbd;
        pUStack_138 = (UnityEngine_Texture_o *)0x42ea830;
        UnityEngine_Renderer__set_material((UnityEngine_Renderer_o *)pUVar22,pUVar18,(MethodInfo *)0x0);
        pUStack_138 = (UnityEngine_Texture_o *)0x42ea83a;
        __this_04 = pUVar22;
        pUVar25 = (Utility_Color255_o *)
                  UnityEngine_Object__get_name((UnityEngine_Object_o *)pUVar22,(MethodInfo *)0x0);
        if (pUVar25 == (Utility_Color255_o *)0x0) goto label_042eabbd;
        pUStack_138 = (UnityEngine_Texture_o *)0x42ea857;
        bVar14 = System_String__Contains((System_String_o *)pUVar25,"IgnoreColor",(MethodInfo *)0x0);
        if ((char)bVar14 == '\0') {
          pUStack_138 = (UnityEngine_Texture_o *)0x42ea869;
          __this_04 = pUVar22;
          pUVar22 = (Utility_Color255_o *)
                    UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)pUVar22,(MethodInfo *)0x0);
          pSVar21 = (pCVar30->fields).CustomSet;
          if (((pSVar21 == (Settings_HumanCustomSet_o *)0x0) ||
              (pSVar6 = (pSVar21->fields).HairColor, pSVar6 == (Settings_ColorSetting_o *)0x0)) ||
             (__this_04 = (pSVar6->fields)._value, __this_04 == (Utility_Color255_o *)0x0)) goto label_042eabbd;
          pUStack_138 = (UnityEngine_Texture_o *)0x42ea8a1;
          UVar52 = Utility_Color255__ToColor(__this_04,(MethodInfo *)0x0);
          if (pUVar22 == (Utility_Color255_o *)0x0) goto label_042eabbd;
          pUStack_138 = (UnityEngine_Texture_o *)0x42ea8b4;
          pUVar25 = pUVar22;
          UnityEngine_Material__set_color((UnityEngine_Material_o *)pUVar22,UVar52,(MethodInfo *)0x0);
        }
        uVar47 = (int)pSVar20 + 1;
        pSVar20 = (System_String_Fields *)(ulong)uVar47;
        uVar15 = (uint)((System_Object_array *)path)->max_length;
        if ((int)uVar15 <= (int)uVar47) goto label_042ea9ed;
        __this_04 = pUVar25;
      } while (uVar47 < uVar15);
    }
  }
  pUStack_138 = (UnityEngine_Texture_o *)0x42eabc7;
  uStack_158 = il2cpp_runtime_helper_022b2ca0();
  pUStack_150 = pUVar22;
  pCStack_148 = pCVar30;
  pCStack_140 = (Characters_HumanSetup_o *)pSVar20;
  pUStack_138 = (UnityEngine_Texture_o *)value_00;
  if (g_data_057ade96 == '\0') {
    pUStack_160 = (Utility_Color255_o *)0x42ead45;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    pUStack_160 = (Utility_Color255_o *)0x42ead51;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    pUStack_160 = (Utility_Color255_o *)0x42ead5d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    pUStack_160 = (Utility_Color255_o *)0x42ead69;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    pUStack_160 = (Utility_Color255_o *)0x42ead75;
    il2cpp_runtime_helper_023445d0(&"Eye");
    g_data_057ade96 = '\x01';
    SVar28 = *(System_String_Fields *)&__this_04[8].fields;
    if (g_data_057adea2 != '\0') goto label_042eabfd;
label_042ead91:
    pUStack_160 = (Utility_Color255_o *)0x42ead9d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    SVar28 = *(System_String_Fields *)&__this_04[8].fields;
    if (g_data_057adea2 == '\0') goto label_042ead91;
label_042eabfd:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    pUStack_160 = (Utility_Color255_o *)0x42eadc0;
    il2cpp_runtime_helper_02337ed0();
  }
  pUStack_160 = (Utility_Color255_o *)0x42eac20;
  bVar14 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)SVar28,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar14 == '\0') {
    if (*(int *)((long)TypeInfo_ResourcePaths + 0xe4) == 0) goto label_042eadf7;
label_042eac3f:
    pvVar7 = __this_04[0xb].monitor;
    SVar32 = TypeInfo_ResourcePaths;
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      pUStack_160 = (Utility_Color255_o *)0x42eadd6;
      il2cpp_runtime_helper_02337ed0();
    }
    pUStack_160 = (Utility_Color255_o *)0x42eade0;
    UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)SVar28,(MethodInfo *)0x0);
    if (*(int *)((long)TypeInfo_ResourcePaths + 0xe4) != 0) goto label_042eac3f;
label_042eadf7:
    pUStack_160 = (Utility_Color255_o *)0x42eadfc;
    il2cpp_runtime_helper_02337ed0();
    pvVar7 = __this_04[0xb].monitor;
    SVar32 = TypeInfo_ResourcePaths;
  }
  pSVar26 = (System_String_o *)0x0;
  TypeInfo_ResourcePaths = SVar32;
  if (pvVar7 != (void *)0x0) {
    SVar28 = *(System_String_Fields *)(*(long *)((long)SVar32 + 0xb8) + 8);
    if (g_data_057adeb7 == '\0') {
      pUStack_160 = (Utility_Color255_o *)0x42eac70;
      il2cpp_runtime_helper_023445d0(&"char_eyes");
      g_data_057adeb7 = '\x01';
    }
    value_00 = (System_String_c **)&__this_04[8].fields;
    pUStack_160 = (Utility_Color255_o *)0x42eac94;
    pSVar26 = System_String__Concat_3ae5ba0
                        (*(System_String_o **)((long)pvVar7 + 0x38),"char_eyes",(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      pUStack_160 = (Utility_Color255_o *)0x42eacaf;
      il2cpp_runtime_helper_02337ed0();
    }
    pUStack_160 = (Utility_Color255_o *)0x42eacc9;
    pIVar27 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                        ((System_String_o *)SVar28,pSVar26,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
    *(Il2CppObject **)&__this_04[8].fields = pIVar27;
    pUStack_160 = (Utility_Color255_o *)0x42eacdc;
    SVar32 = (System_String_Fields)value_00;
    il2cpp_runtime_helper_022b4080(value_00,pIVar27);
    pUStack_160 = (Utility_Color255_o *)0x42eacf3;
    Characters_HumanSetup__AttachToMount
              ((Characters_HumanSetup_o *)SVar32,*(UnityEngine_GameObject_o **)&__this_04[8].fields,
               (UnityEngine_GameObject_o *)*(System_String_Fields *)&__this_04[10].monitor,0,method);
    if ((__this_04[0xe].monitor != (void *)0x0) &&
       (lVar42 = *(long *)((long)__this_04[0xe].monitor + 0x40), lVar42 != 0)) {
      Characters_HumanSetup__SetFacialTexture
                ((Characters_HumanSetup_o *)SVar32,*(UnityEngine_GameObject_o **)&__this_04[8].fields,
                 "Eye",*(int32_t *)(lVar42 + 0x14),0,in_R9);
      return extraout_RAX_00;
    }
  }
  pUStack_160 = (Utility_Color255_o *)0x42eae15;
  pSStack_190 = (System_String_o *)il2cpp_runtime_helper_022b2c90();
  pSStack_188 = pSVar26;
  pUStack_180 = __this_04;
  pSStack_178 = (System_Object_array *)path;
  SStack_170 = SVar28;
  pUStack_168 = (UnityEngine_Texture_o *)value_00;
  pUStack_160 = (Utility_Color255_o *)path_00;
  if (g_data_057ade97 == '\0') {
    SStack_198._stringLength = 0x42eb0a3;
    SStack_198._firstChar = 0;
    SStack_198._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    SStack_198._stringLength = 0x42eb0af;
    SStack_198._firstChar = 0;
    SStack_198._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetup);
    SStack_198._stringLength = 0x42eb0bb;
    SStack_198._firstChar = 0;
    SStack_198._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    SStack_198._stringLength = 0x42eb0c7;
    SStack_198._firstChar = 0;
    SStack_198._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    SStack_198._stringLength = 0x42eb0d3;
    SStack_198._firstChar = 0;
    SStack_198._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    SStack_198._stringLength = 0x42eb0df;
    SStack_198._firstChar = 0;
    SStack_198._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    SStack_198._stringLength = 0x42eb0eb;
    SStack_198._firstChar = 0;
    SStack_198._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&"None");
    SStack_198._stringLength = 0x42eb0f7;
    SStack_198._firstChar = 0;
    SStack_198._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&"Face");
    g_data_057ade97 = '\x01';
    SVar36 = *(System_String_Fields *)((long)SVar32 + 0x118);
    if (g_data_057adea2 != '\0') goto label_042eae50;
label_042eb113:
    SStack_198._stringLength = 0x42eb11f;
    SStack_198._firstChar = 0;
    SStack_198._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    SVar36 = *(System_String_Fields *)((long)SVar32 + 0x118);
    if (g_data_057adea2 == '\0') goto label_042eb113;
label_042eae50:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    SStack_198._stringLength = 0x42eb142;
    SStack_198._firstChar = 0;
    SStack_198._6_2_ = 0;
    il2cpp_runtime_helper_02337ed0();
  }
  plVar44 = &TypeInfo_Object;
  SStack_198._stringLength = 0x42eae73;
  SStack_198._firstChar = 0;
  SStack_198._6_2_ = 0;
  SVar33 = SVar36;
  bVar14 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)SVar36,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar14 != '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      SStack_198._stringLength = 0x42eae88;
      SStack_198._firstChar = 0;
      SStack_198._6_2_ = 0;
      il2cpp_runtime_helper_02337ed0();
    }
    SStack_198._stringLength = 0x42eae92;
    SStack_198._firstChar = 0;
    SStack_198._6_2_ = 0;
    SVar33 = SVar36;
    UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)SVar36,(MethodInfo *)0x0);
  }
  if ((*(long *)((long)SVar32 + 0x1c8) != 0) &&
     (lVar42 = *(long *)(*(long *)((long)SVar32 + 0x1c8) + 0x48), lVar42 != 0)) {
    pSVar26 = *(System_String_o **)(lVar42 + 0x18);
    SVar33._stringLength = 0;
    SVar33._firstChar = 0;
    SVar33._6_2_ = 0;
    if (pSVar26 != (System_String_o *)0x0) {
      SStack_198._stringLength = 0x42eaec9;
      SStack_198._firstChar = 0;
      SStack_198._6_2_ = 0;
      SVar28 = (System_String_Fields)System_String__Substring(pSVar26,4,(MethodInfo *)0x0);
      SStack_198._stringLength = 0x42eaee0;
      SStack_198._firstChar = 0;
      SStack_198._6_2_ = 0;
      SVar33 = SVar28;
      bVar14 = System_String__op_Inequality
                         ((System_String_o *)SVar28,(System_String_o *)"None",(MethodInfo *)0x0);
      if ((char)bVar14 == '\0') {
        return (UnityEngine_Material_o *)CONCAT44(extraout_var_00,bVar14);
      }
      if ((*(long *)((long)SVar32 + 0x1c8) != 0) &&
         (lVar42 = *(long *)(*(long *)((long)SVar32 + 0x1c8) + 0x48), lVar42 != 0)) {
        SVar36 = *(System_String_Fields *)(lVar42 + 0x18);
        plVar44 = &TypeInfo_HumanSetup;
        if (*(int *)(TypeInfo_HumanSetup + 0xe4) == 0) {
          SStack_198._stringLength = 0x42eaf22;
          SStack_198._firstChar = 0;
          SStack_198._6_2_ = 0;
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar8 = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_HumanSetup + 0xb8) + 0x40);
        SVar33._stringLength = 0;
        SVar33._firstChar = 0;
        SVar33._6_2_ = 0;
        if (pSVar8 != (System_Collections_Generic_HashSet_object__o *)0x0) {
          SStack_198._stringLength = 0x42eaf4b;
          SStack_198._firstChar = 0;
          SStack_198._6_2_ = 0;
          uVar15 = System_Collections_Generic_HashSet_object___Contains
                             (pSVar8,(Il2CppObject *)SVar36,MethodInfo_Boolean_Contains);
          value_00 = (System_String_c **)(ulong)uVar15;
          if ((char)uVar15 == '\0') {
            SVar36 = **(System_String_Fields **)(g_data_057b9c00 + 0xb8);
            iVar3 = *(int *)((long)TypeInfo_ResourcePaths + 0xe4);
          }
          else {
            iVar3 = *(int *)((long)TypeInfo_ResourcePaths + 0xe4);
          }
          if (iVar3 == 0) {
            SStack_198._stringLength = 0x42eb18a;
            SStack_198._firstChar = 0;
            SStack_198._6_2_ = 0;
            il2cpp_runtime_helper_02337ed0();
            lVar42 = *(long *)((long)SVar32 + 0x168);
            SVar33 = TypeInfo_ResourcePaths;
          }
          else {
            lVar42 = *(long *)((long)SVar32 + 0x168);
            SVar33 = TypeInfo_ResourcePaths;
          }
          plVar44 = (long *)0x0;
          TypeInfo_ResourcePaths = SVar33;
          if (lVar42 != 0) {
            pSStack_190 = *(System_String_o **)
                           (*(UnityEngine_Object_StaticFields **)((long)SVar33 + 0xb8) + 2);
            if (g_data_057adeb8 == '\0') {
              SStack_198._stringLength = 0x42eafa2;
              SStack_198._firstChar = 0;
              SStack_198._6_2_ = 0;
              il2cpp_runtime_helper_023445d0(&"char_face");
              g_data_057adeb8 = '\x01';
            }
            SStack_198._stringLength = 0x42eafcb;
            SStack_198._firstChar = 0;
            SStack_198._6_2_ = 0;
            bVar14 = System_String__op_Inequality
                               ((System_String_o *)SVar36,
                                (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
            if ((char)bVar14 == '\0') {
              SVar36 = "char_face";
            }
            pCVar30 = (Characters_HumanSetup_o *)((long)SVar32 + 0x118);
            SStack_198._stringLength = 0x42eafef;
            SStack_198._firstChar = 0;
            SStack_198._6_2_ = 0;
            pSVar26 = System_String__Concat_3ae5ba0
                                (*(System_String_o **)(lVar42 + 0x38),(System_String_o *)SVar36,
                                 (MethodInfo *)0x0);
            if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
              SStack_198._stringLength = 0x42eb00a;
              SStack_198._firstChar = 0;
              SStack_198._6_2_ = 0;
              il2cpp_runtime_helper_02337ed0();
            }
            SStack_198._stringLength = 0x42eb025;
            SStack_198._firstChar = 0;
            SStack_198._6_2_ = 0;
            pIVar27 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                                (pSStack_190,pSVar26,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
            *(Il2CppObject **)((long)SVar32 + 0x118) = pIVar27;
            SStack_198._stringLength = 0x42eb038;
            SStack_198._firstChar = 0;
            SStack_198._6_2_ = 0;
            il2cpp_runtime_helper_022b4080(pCVar30,pIVar27);
            lVar42 = 0x148;
            if ((char)uVar15 != '\0') {
              lVar42 = 0x78;
            }
            SStack_198._stringLength = 0x42eb060;
            SStack_198._firstChar = 0;
            SStack_198._6_2_ = 0;
            Characters_HumanSetup__AttachToMount
                      (pCVar30,*(UnityEngine_GameObject_o **)((long)SVar32 + 0x118),
                       *(UnityEngine_GameObject_o **)((long)SVar32 + lVar42),uVar15 & 0xff,method);
            pUVar23 = *(UnityEngine_GameObject_o **)((long)SVar32 + 0x118);
            SStack_198._stringLength = 0x42eb072;
            SStack_198._firstChar = 0;
            SStack_198._6_2_ = 0;
            iVar16 = System_Int32__Parse((System_String_o *)SVar28,(MethodInfo *)0x0);
            Characters_HumanSetup__SetFacialTexture
                      ((Characters_HumanSetup_o *)SVar28,pUVar23,"Face",iVar16,uVar15 & 0xff,in_R9);
            return extraout_RAX_01;
          }
        }
      }
    }
  }
  SStack_198._stringLength = 0x42eb1a3;
  SStack_198._firstChar = 0;
  SStack_198._6_2_ = 0;
  pSStack_1c8 = (System_String_o *)il2cpp_runtime_helper_022b2c90();
  plStack_1c0 = plVar44;
  SStack_1b8 = SVar32;
  pSStack_1b0 = (System_Object_array *)path;
  SStack_1a8 = SVar28;
  pUStack_1a0 = (UnityEngine_Texture_o *)value_00;
  SStack_198 = SVar36;
  if (g_data_057ade98 == '\0') {
    SStack_1d0._stringLength = 0x42eb433;
    SStack_1d0._firstChar = 0;
    SStack_1d0._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    SStack_1d0._stringLength = 0x42eb43f;
    SStack_1d0._firstChar = 0;
    SStack_1d0._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetup);
    SStack_1d0._stringLength = 0x42eb44b;
    SStack_1d0._firstChar = 0;
    SStack_1d0._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    SStack_1d0._stringLength = 0x42eb457;
    SStack_1d0._firstChar = 0;
    SStack_1d0._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    SStack_1d0._stringLength = 0x42eb463;
    SStack_1d0._firstChar = 0;
    SStack_1d0._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    SStack_1d0._stringLength = 0x42eb46f;
    SStack_1d0._firstChar = 0;
    SStack_1d0._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    SStack_1d0._stringLength = 0x42eb47b;
    SStack_1d0._firstChar = 0;
    SStack_1d0._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&"None");
    SStack_1d0._stringLength = 0x42eb487;
    SStack_1d0._firstChar = 0;
    SStack_1d0._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&"Glass");
    g_data_057ade98 = '\x01';
    SVar32 = (System_String_Fields)((UnityEngine_Object_o *)((long)SVar33 + 0x120))->klass;
    if (g_data_057adea2 != '\0') goto label_042eb1e0;
label_042eb4a3:
    SStack_1d0._stringLength = 0x42eb4af;
    SStack_1d0._firstChar = 0;
    SStack_1d0._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    SVar32 = (System_String_Fields)((UnityEngine_Object_o *)((long)SVar33 + 0x120))->klass;
    if (g_data_057adea2 == '\0') goto label_042eb4a3;
label_042eb1e0:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    SStack_1d0._stringLength = 0x42eb4d2;
    SStack_1d0._firstChar = 0;
    SStack_1d0._6_2_ = 0;
    il2cpp_runtime_helper_02337ed0();
  }
  plVar44 = &TypeInfo_Object;
  SVar36._stringLength = 0;
  SVar36._firstChar = 0;
  SVar36._6_2_ = 0;
  SStack_1d0._stringLength = 0x42eb203;
  SStack_1d0._firstChar = 0;
  SStack_1d0._6_2_ = 0;
  __this_05 = SVar32;
  bVar14 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)SVar32,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar14 != '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      SStack_1d0._stringLength = 0x42eb218;
      SStack_1d0._firstChar = 0;
      SStack_1d0._6_2_ = 0;
      il2cpp_runtime_helper_02337ed0();
    }
    SVar36._stringLength = 0;
    SVar36._firstChar = 0;
    SVar36._6_2_ = 0;
    SStack_1d0._stringLength = 0x42eb222;
    SStack_1d0._firstChar = 0;
    SStack_1d0._6_2_ = 0;
    __this_05 = SVar32;
    UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)SVar32,(MethodInfo *)0x0);
  }
  pUVar29 = ((UnityEngine_Object_o *)((long)SVar33 + 0x1c8))->klass;
  if ((pUVar29 != (UnityEngine_Object_c *)0x0) &&
     (pIVar9 = (pUVar29->_1).declaringType, pIVar9 != (Il2CppClass *)0x0)) {
    pSVar26 = (System_String_o *)(pIVar9->_1).namespaze;
    __this_05._stringLength = 0;
    __this_05._firstChar = 0;
    __this_05._6_2_ = 0;
    if (pSVar26 != (System_String_o *)0x0) {
      SStack_1d0._stringLength = 0x42eb259;
      SStack_1d0._firstChar = 0;
      SStack_1d0._6_2_ = 0;
      SVar28 = (System_String_Fields)System_String__Substring(pSVar26,5,(MethodInfo *)0x0);
      SStack_1d0._stringLength = 0x42eb270;
      SStack_1d0._firstChar = 0;
      SStack_1d0._6_2_ = 0;
      SVar36 = "None";
      __this_05 = SVar28;
      bVar14 = System_String__op_Inequality
                         ((System_String_o *)SVar28,(System_String_o *)"None",(MethodInfo *)0x0);
      if ((char)bVar14 == '\0') {
        return (UnityEngine_Material_o *)CONCAT44(extraout_var_01,bVar14);
      }
      pUVar29 = ((UnityEngine_Object_o *)((long)SVar33 + 0x1c8))->klass;
      if ((pUVar29 != (UnityEngine_Object_c *)0x0) &&
         (pIVar9 = (pUVar29->_1).declaringType, pIVar9 != (Il2CppClass *)0x0)) {
        SVar32 = (System_String_Fields)(pIVar9->_1).namespaze;
        plVar44 = &TypeInfo_HumanSetup;
        if (*(int *)(TypeInfo_HumanSetup + 0xe4) == 0) {
          SStack_1d0._stringLength = 0x42eb2b2;
          SStack_1d0._firstChar = 0;
          SStack_1d0._6_2_ = 0;
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar8 = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_HumanSetup + 0xb8) + 0x40);
        __this_05._stringLength = 0;
        __this_05._firstChar = 0;
        __this_05._6_2_ = 0;
        if (pSVar8 != (System_Collections_Generic_HashSet_object__o *)0x0) {
          SStack_1d0._stringLength = 0x42eb2db;
          SStack_1d0._firstChar = 0;
          SStack_1d0._6_2_ = 0;
          SVar36 = SVar32;
          uVar15 = System_Collections_Generic_HashSet_object___Contains
                             (pSVar8,(Il2CppObject *)SVar32,MethodInfo_Boolean_Contains);
          value_00 = (System_String_c **)(ulong)uVar15;
          if ((char)uVar15 == '\0') {
            SVar32 = **(System_String_Fields **)(g_data_057b9c00 + 0xb8);
            iVar3 = *(int *)((long)TypeInfo_ResourcePaths + 0xe4);
          }
          else {
            iVar3 = *(int *)((long)TypeInfo_ResourcePaths + 0xe4);
          }
          if (iVar3 == 0) {
            SStack_1d0._stringLength = 0x42eb51a;
            SStack_1d0._firstChar = 0;
            SStack_1d0._6_2_ = 0;
            il2cpp_runtime_helper_02337ed0();
            pUVar29 = ((UnityEngine_Object_o *)((long)SVar33 + 0x168))->klass;
            __this_05 = TypeInfo_ResourcePaths;
          }
          else {
            pUVar29 = ((UnityEngine_Object_o *)((long)SVar33 + 0x168))->klass;
            __this_05 = TypeInfo_ResourcePaths;
          }
          plVar44 = (long *)0x0;
          TypeInfo_ResourcePaths = __this_05;
          if (pUVar29 != (UnityEngine_Object_c *)0x0) {
            pSStack_1c8 = *(System_String_o **)((long)*(System_String_Fields *)((long)__this_05 + 0xb8) + 8);
            if (g_data_057adeb9 == '\0') {
              SStack_1d0._stringLength = 0x42eb332;
              SStack_1d0._firstChar = 0;
              SStack_1d0._6_2_ = 0;
              il2cpp_runtime_helper_023445d0(&"char_glasses");
              g_data_057adeb9 = '\x01';
            }
            SStack_1d0._stringLength = 0x42eb35b;
            SStack_1d0._firstChar = 0;
            SStack_1d0._6_2_ = 0;
            bVar14 = System_String__op_Inequality
                               ((System_String_o *)SVar32,
                                (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
            if ((char)bVar14 == '\0') {
              SVar32 = "char_glasses";
            }
            pCVar30 = (Characters_HumanSetup_o *)((long)SVar33 + 0x120);
            SStack_1d0._stringLength = 0x42eb37f;
            SStack_1d0._firstChar = 0;
            SStack_1d0._6_2_ = 0;
            pSVar26 = System_String__Concat_3ae5ba0
                                (*(System_String_o **)&(pUVar29->_1).this_arg.bits,(System_String_o *)SVar32,
                                 (MethodInfo *)0x0);
            if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
              SStack_1d0._stringLength = 0x42eb39a;
              SStack_1d0._firstChar = 0;
              SStack_1d0._6_2_ = 0;
              il2cpp_runtime_helper_02337ed0();
            }
            SStack_1d0._stringLength = 0x42eb3b5;
            SStack_1d0._firstChar = 0;
            SStack_1d0._6_2_ = 0;
            pUVar29 = (UnityEngine_Object_c *)
                      ApplicationManagers_ResourceManager__InstantiateAsset_object_
                                (pSStack_1c8,pSVar26,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
            ((UnityEngine_Object_o *)((long)SVar33 + 0x120))->klass = pUVar29;
            SStack_1d0._stringLength = 0x42eb3c8;
            SStack_1d0._firstChar = 0;
            SStack_1d0._6_2_ = 0;
            il2cpp_runtime_helper_022b4080(pCVar30,pUVar29);
            lVar42 = 0x148;
            if ((char)uVar15 != '\0') {
              lVar42 = 0x78;
            }
            SStack_1d0._stringLength = 0x42eb3f0;
            SStack_1d0._firstChar = 0;
            SStack_1d0._6_2_ = 0;
            Characters_HumanSetup__AttachToMount
                      (pCVar30,(UnityEngine_GameObject_o *)
                               ((UnityEngine_Object_o *)((long)SVar33 + 0x120))->klass,
                       *(UnityEngine_GameObject_o **)((long)SVar33 + lVar42),uVar15 & 0xff,method);
            pUVar29 = ((UnityEngine_Object_o *)((long)SVar33 + 0x120))->klass;
            SStack_1d0._stringLength = 0x42eb402;
            SStack_1d0._firstChar = 0;
            SStack_1d0._6_2_ = 0;
            iVar16 = System_Int32__Parse((System_String_o *)SVar28,(MethodInfo *)0x0);
            Characters_HumanSetup__SetFacialTexture
                      ((Characters_HumanSetup_o *)SVar28,(UnityEngine_GameObject_o *)pUVar29,"Glass",
                       iVar16,uVar15 & 0xff,in_R9);
            return extraout_RAX_02;
          }
        }
      }
    }
  }
  SStack_1d0._stringLength = 0x42eb533;
  SStack_1d0._firstChar = 0;
  SStack_1d0._6_2_ = 0;
  il2cpp_runtime_helper_022b2c90();
  plStack_1f8 = plVar44;
  SStack_1f0 = SVar33;
  pSStack_1e8 = (System_Object_array *)path;
  SStack_1e0 = SVar28;
  pUStack_1d8 = (UnityEngine_Texture_o *)value_00;
  SStack_1d0 = SVar32;
  if (g_data_057ade9e == '\0') {
    SStack_228._stringLength = 0x42ebdc7;
    SStack_228._firstChar = 0;
    SStack_228._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ClothFactory);
    SStack_228._stringLength = 0x42ebdd3;
    SStack_228._firstChar = 0;
    SStack_228._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponent_Renderer);
    SStack_228._stringLength = 0x42ebddf;
    SStack_228._firstChar = 0;
    SStack_228._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupMaterials);
    SStack_228._stringLength = 0x42ebdeb;
    SStack_228._firstChar = 0;
    SStack_228._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    SStack_228._stringLength = 0x42ebdf7;
    SStack_228._firstChar = 0;
    SStack_228._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    SStack_228._stringLength = 0x42ebe03;
    SStack_228._firstChar = 0;
    SStack_228._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    SStack_228._stringLength = 0x42ebe0f;
    SStack_228._firstChar = 0;
    SStack_228._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color255_get_Value);
    SStack_228._stringLength = 0x42ebe1b;
    SStack_228._firstChar = 0;
    SStack_228._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&"Type");
    SStack_228._stringLength = 0x42ebe27;
    SStack_228._firstChar = 0;
    SStack_228._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&"Uniform");
    g_data_057ade9e = '\x01';
    pUVar38 = *(UnityEngine_Object_o **)((long)__this_05 + 0x158);
    if (g_data_057adea2 != '\0') goto label_042eb576;
label_042ebe43:
    SStack_228._stringLength = 0x42ebe4f;
    SStack_228._firstChar = 0;
    SStack_228._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    pUVar38 = *(UnityEngine_Object_o **)((long)__this_05 + 0x158);
    if (g_data_057adea2 == '\0') goto label_042ebe43;
label_042eb576:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    SStack_228._stringLength = 0x42ebe72;
    SStack_228._firstChar = 0;
    SStack_228._6_2_ = 0;
    il2cpp_runtime_helper_02337ed0();
  }
  SStack_228._stringLength = 0x42eb599;
  SStack_228._firstChar = 0;
  SStack_228._6_2_ = 0;
  bVar14 = UnityEngine_Object__op_Inequality(pUVar38,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar14 == '\0') {
    pUVar38 = *(UnityEngine_Object_o **)((long)__this_05 + 200);
    if (g_data_057adea2 == '\0') goto label_042ebea7;
label_042eb5b6:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      SStack_228._stringLength = 0x42ebe88;
      SStack_228._firstChar = 0;
      SStack_228._6_2_ = 0;
      il2cpp_runtime_helper_02337ed0();
    }
    SStack_228._stringLength = 0x42ebe92;
    SStack_228._firstChar = 0;
    SStack_228._6_2_ = 0;
    UnityEngine_Object__Destroy_4e01c60(pUVar38,(MethodInfo *)0x0);
    pUVar38 = *(UnityEngine_Object_o **)((long)__this_05 + 200);
    if (g_data_057adea2 != '\0') goto label_042eb5b6;
label_042ebea7:
    SStack_228._stringLength = 0x42ebeb3;
    SStack_228._firstChar = 0;
    SStack_228._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    SStack_228._stringLength = 0x42ebecf;
    SStack_228._firstChar = 0;
    SStack_228._6_2_ = 0;
    il2cpp_runtime_helper_02337ed0();
  }
  SStack_228._stringLength = 0x42eb5d2;
  SStack_228._firstChar = 0;
  SStack_228._6_2_ = 0;
  bVar14 = UnityEngine_Object__op_Inequality(pUVar38,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar14 == '\0') {
    pUVar38 = *(UnityEngine_Object_o **)((long)__this_05 + 0xd0);
    if (g_data_057adea2 == '\0') goto label_042ebf04;
label_042eb5ef:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      SStack_228._stringLength = 0x42ebee5;
      SStack_228._firstChar = 0;
      SStack_228._6_2_ = 0;
      il2cpp_runtime_helper_02337ed0();
    }
    SStack_228._stringLength = 0x42ebeef;
    SStack_228._firstChar = 0;
    SStack_228._6_2_ = 0;
    UnityEngine_Object__Destroy_4e01c60(pUVar38,(MethodInfo *)0x0);
    pUVar38 = *(UnityEngine_Object_o **)((long)__this_05 + 0xd0);
    if (g_data_057adea2 != '\0') goto label_042eb5ef;
label_042ebf04:
    SStack_228._stringLength = 0x42ebf10;
    SStack_228._firstChar = 0;
    SStack_228._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    SStack_228._stringLength = 0x42ebf2c;
    SStack_228._firstChar = 0;
    SStack_228._6_2_ = 0;
    il2cpp_runtime_helper_02337ed0();
  }
  SStack_228._stringLength = 0x42eb60b;
  SStack_228._firstChar = 0;
  SStack_228._6_2_ = 0;
  bVar14 = UnityEngine_Object__op_Inequality(pUVar38,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar14 == '\0') {
    pUVar38 = *(UnityEngine_Object_o **)((long)__this_05 + 0xd8);
    if (g_data_057adea2 == '\0') goto label_042ebf61;
label_042eb628:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      SStack_228._stringLength = 0x42ebf42;
      SStack_228._firstChar = 0;
      SStack_228._6_2_ = 0;
      il2cpp_runtime_helper_02337ed0();
    }
    SStack_228._stringLength = 0x42ebf4c;
    SStack_228._firstChar = 0;
    SStack_228._6_2_ = 0;
    UnityEngine_Object__Destroy_4e01c60(pUVar38,(MethodInfo *)0x0);
    pUVar38 = *(UnityEngine_Object_o **)((long)__this_05 + 0xd8);
    if (g_data_057adea2 != '\0') goto label_042eb628;
label_042ebf61:
    SStack_228._stringLength = 0x42ebf6d;
    SStack_228._firstChar = 0;
    SStack_228._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    SStack_228._stringLength = 0x42ebf89;
    SStack_228._firstChar = 0;
    SStack_228._6_2_ = 0;
    il2cpp_runtime_helper_02337ed0();
  }
  SStack_228._stringLength = 0x42eb644;
  SStack_228._firstChar = 0;
  SStack_228._6_2_ = 0;
  bVar14 = UnityEngine_Object__op_Inequality(pUVar38,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar14 == '\0') {
    pUVar38 = *(UnityEngine_Object_o **)((long)__this_05 + 0xe0);
    if (g_data_057adea2 == '\0') goto label_042ebfbe;
label_042eb661:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      SStack_228._stringLength = 0x42ebf9f;
      SStack_228._firstChar = 0;
      SStack_228._6_2_ = 0;
      il2cpp_runtime_helper_02337ed0();
    }
    SStack_228._stringLength = 0x42ebfa9;
    SStack_228._firstChar = 0;
    SStack_228._6_2_ = 0;
    UnityEngine_Object__Destroy_4e01c60(pUVar38,(MethodInfo *)0x0);
    pUVar38 = *(UnityEngine_Object_o **)((long)__this_05 + 0xe0);
    if (g_data_057adea2 != '\0') goto label_042eb661;
label_042ebfbe:
    SStack_228._stringLength = 0x42ebfca;
    SStack_228._firstChar = 0;
    SStack_228._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    SStack_228._stringLength = 0x42ebfe6;
    SStack_228._firstChar = 0;
    SStack_228._6_2_ = 0;
    il2cpp_runtime_helper_02337ed0();
  }
  SStack_228._stringLength = 0x42eb67d;
  SStack_228._firstChar = 0;
  SStack_228._6_2_ = 0;
  bVar14 = UnityEngine_Object__op_Inequality(pUVar38,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar14 == '\0') {
    pUVar38 = *(UnityEngine_Object_o **)((long)__this_05 + 0xf8);
    if (g_data_057adea2 == '\0') goto label_042ec01b;
label_042eb69a:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      SStack_228._stringLength = 0x42ebffc;
      SStack_228._firstChar = 0;
      SStack_228._6_2_ = 0;
      il2cpp_runtime_helper_02337ed0();
    }
    SStack_228._stringLength = 0x42ec006;
    SStack_228._firstChar = 0;
    SStack_228._6_2_ = 0;
    UnityEngine_Object__Destroy_4e01c60(pUVar38,(MethodInfo *)0x0);
    pUVar38 = *(UnityEngine_Object_o **)((long)__this_05 + 0xf8);
    if (g_data_057adea2 != '\0') goto label_042eb69a;
label_042ec01b:
    SStack_228._stringLength = 0x42ec027;
    SStack_228._firstChar = 0;
    SStack_228._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    SStack_228._stringLength = 0x42ec043;
    SStack_228._firstChar = 0;
    SStack_228._6_2_ = 0;
    il2cpp_runtime_helper_02337ed0();
  }
  SStack_228._stringLength = 0x42eb6b6;
  SStack_228._firstChar = 0;
  SStack_228._6_2_ = 0;
  bVar14 = UnityEngine_Object__op_Inequality(pUVar38,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar14 == '\0') {
    SVar32 = *(System_String_Fields *)((long)__this_05 + 0x100);
    if (g_data_057adea2 == '\0') goto label_042ec078;
label_042eb6d3:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      SStack_228._stringLength = 0x42ec059;
      SStack_228._firstChar = 0;
      SStack_228._6_2_ = 0;
      il2cpp_runtime_helper_02337ed0();
    }
    SStack_228._stringLength = 0x42ec063;
    SStack_228._firstChar = 0;
    SStack_228._6_2_ = 0;
    UnityEngine_Object__Destroy_4e01c60(pUVar38,(MethodInfo *)0x0);
    SVar32 = *(System_String_Fields *)((long)__this_05 + 0x100);
    if (g_data_057adea2 != '\0') goto label_042eb6d3;
label_042ec078:
    SStack_228._stringLength = 0x42ec084;
    SStack_228._firstChar = 0;
    SStack_228._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    SStack_228._stringLength = 0x42ec0a0;
    SStack_228._firstChar = 0;
    SStack_228._6_2_ = 0;
    il2cpp_runtime_helper_02337ed0();
  }
  method_00._stringLength = 0;
  method_00._firstChar = 0;
  method_00._6_2_ = 0;
  SStack_228._stringLength = 0x42eb6ef;
  SStack_228._firstChar = 0;
  SStack_228._6_2_ = 0;
  bVar14 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)SVar32,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar14 != '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      SStack_228._stringLength = 0x42eb704;
      SStack_228._firstChar = 0;
      SStack_228._6_2_ = 0;
      il2cpp_runtime_helper_02337ed0();
    }
    method_00._stringLength = 0;
    method_00._firstChar = 0;
    method_00._6_2_ = 0;
    SStack_228._stringLength = 0x42eb70e;
    SStack_228._firstChar = 0;
    SStack_228._6_2_ = 0;
    UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)SVar32,(MethodInfo *)0x0);
  }
  if (*(char *)((long)__this_05 + 0x1e8) == '\0') {
    SVar32 = *(System_String_Fields *)((long)__this_05 + 0x108);
    if (g_data_057adea2 == '\0') {
      SStack_228._stringLength = 0x42eb736;
      SStack_228._firstChar = 0;
      SStack_228._6_2_ = 0;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057adea2 = '\x01';
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      SStack_228._stringLength = 0x42eb74e;
      SStack_228._firstChar = 0;
      SStack_228._6_2_ = 0;
      il2cpp_runtime_helper_02337ed0();
    }
    method_00._stringLength = 0;
    method_00._firstChar = 0;
    method_00._6_2_ = 0;
    SStack_228._stringLength = 0x42eb75a;
    SStack_228._firstChar = 0;
    SStack_228._6_2_ = 0;
    bVar14 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)SVar32,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar14 != '\0') {
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        SStack_228._stringLength = 0x42eb76f;
        SStack_228._firstChar = 0;
        SStack_228._6_2_ = 0;
        il2cpp_runtime_helper_02337ed0();
      }
      method_00._stringLength = 0;
      method_00._firstChar = 0;
      method_00._6_2_ = 0;
      SStack_228._stringLength = 0x42eb779;
      SStack_228._firstChar = 0;
      SStack_228._6_2_ = 0;
      UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)SVar32,(MethodInfo *)0x0);
    }
  }
  SStack_228._stringLength = 0x42eb781;
  SStack_228._firstChar = 0;
  SStack_228._6_2_ = 0;
  Characters_HumanSetup__CreateCape((Characters_HumanSetup_o *)__this_05,(MethodInfo *)method_00);
  __this_07._stringLength = 0;
  __this_07._firstChar = 0;
  __this_07._6_2_ = 0;
  pCVar30 = (Characters_HumanSetup_o *)&TypeInfo_Object;
  if (*(Characters_HumanSetupMeshes_o **)((long)__this_05 + 0x168) != (Characters_HumanSetupMeshes_o *)0x0) {
    SStack_228._stringLength = 0x42eb79c;
    SStack_228._firstChar = 0;
    SStack_228._6_2_ = 0;
    pCVar30 = (Characters_HumanSetup_o *)
              Characters_HumanSetupMeshes__GetChestMesh
                        (*(Characters_HumanSetupMeshes_o **)((long)__this_05 + 0x168),1,method_01);
    method_00 = **(System_String_Fields **)(g_data_057b9c00 + 0xb8);
    SStack_228._stringLength = 0x42eb7c1;
    SStack_228._firstChar = 0;
    SStack_228._6_2_ = 0;
    bVar14 = System_String__op_Inequality
                       ((System_String_o *)pCVar30,(System_String_o *)method_00,(MethodInfo *)0x0);
    pMVar43 = extraout_RDX;
    SVar28 = (System_String_Fields)&g_data_057b9b70;
    if ((char)bVar14 == '\0') {
label_042eb8c9:
      __this_07._stringLength = 0;
      __this_07._firstChar = 0;
      __this_07._6_2_ = 0;
      if (*(Characters_HumanSetupMeshes_o **)((long)__this_05 + 0x168) != (Characters_HumanSetupMeshes_o *)0x0
         ) {
        SStack_228._stringLength = 0x42eb8e4;
        SStack_228._firstChar = 0;
        SStack_228._6_2_ = 0;
        SVar32 = (System_String_Fields)
                 Characters_HumanSetupMeshes__GetChestMesh
                           (*(Characters_HumanSetupMeshes_o **)((long)__this_05 + 0x168),2,pMVar43);
        method_00 = **(System_String_Fields **)(g_data_057b9c00 + 0xb8);
        SStack_228._stringLength = 0x42eb902;
        SStack_228._firstChar = 0;
        SStack_228._6_2_ = 0;
        bVar14 = System_String__op_Inequality
                           ((System_String_o *)SVar32,(System_String_o *)method_00,(MethodInfo *)0x0);
        pMVar43 = extraout_RDX_03;
        if ((char)bVar14 == '\0') {
label_042eb9c7:
          __this_07._stringLength = 0;
          __this_07._firstChar = 0;
          __this_07._6_2_ = 0;
          if (*(Characters_HumanSetupMeshes_o **)((long)__this_05 + 0x168) !=
              (Characters_HumanSetupMeshes_o *)0x0) {
            SStack_228._stringLength = 0x42eb9e2;
            SStack_228._firstChar = 0;
            SStack_228._6_2_ = 0;
            SVar32 = (System_String_Fields)
                     Characters_HumanSetupMeshes__GetChestMesh
                               (*(Characters_HumanSetupMeshes_o **)((long)__this_05 + 0x168),3,pMVar43);
            method_00 = **(System_String_Fields **)(g_data_057b9c00 + 0xb8);
            SStack_228._stringLength = 0x42eba00;
            SStack_228._firstChar = 0;
            SStack_228._6_2_ = 0;
            bVar14 = System_String__op_Inequality
                               ((System_String_o *)SVar32,(System_String_o *)method_00,(MethodInfo *)0x0);
            if (((char)bVar14 != '\0') && (*(char *)((long)__this_05 + 0x1e8) == '\0')) {
              pCVar30 = *(Characters_HumanSetup_o **)((long)__this_05 + 0x160);
              if (*(int *)(TypeInfo_ClothFactory + 0xe4) == 0) {
                SStack_228._stringLength = 0x42eba2f;
                SStack_228._firstChar = 0;
                SStack_228._6_2_ = 0;
                il2cpp_runtime_helper_02337ed0();
              }
              SStack_228._stringLength = 0x42eba3f;
              SStack_228._firstChar = 0;
              SStack_228._6_2_ = 0;
              method_00 = (System_String_Fields)
                          ClothFactory__GetCape
                                    ((UnityEngine_GameObject_o *)pCVar30,(System_String_o *)SVar32,
                                     (UnityEngine_Material_o *)SVar36,(MethodInfo *)0x0);
              *(System_String_Fields *)((long)__this_05 + 0x108) = method_00;
              SStack_228._stringLength = 0x42eba57;
              SStack_228._firstChar = 0;
              SStack_228._6_2_ = 0;
              il2cpp_runtime_helper_022b4080((long)__this_05 + 0x108);
            }
            __this_07._stringLength = 0;
            __this_07._firstChar = 0;
            __this_07._6_2_ = 0;
            if (*(Characters_HumanSetupMeshes_o **)((long)__this_05 + 0x168) !=
                (Characters_HumanSetupMeshes_o *)0x0) {
              SVar32 = (System_String_Fields)((long)__this_05 + 0x158);
              SStack_228._stringLength = 0x42eba75;
              SStack_228._firstChar = 0;
              SStack_228._6_2_ = 0;
              pSVar26 = Characters_HumanSetupMeshes__GetBodyMesh
                                  (*(Characters_HumanSetupMeshes_o **)((long)__this_05 + 0x168),
                                   (MethodInfo *)method_00);
              SStack_228._stringLength = 0x42eba80;
              SStack_228._firstChar = 0;
              SStack_228._6_2_ = 0;
              method_00 = (System_String_Fields)
                          Characters_HumanSetup__GenerateCloth
                                    ((Characters_HumanSetup_o *)__this_05,pSVar26,method_03);
              *(System_String_Fields *)((long)__this_05 + 0x158) = method_00;
              SStack_228._stringLength = 0x42eba93;
              SStack_228._firstChar = 0;
              SStack_228._6_2_ = 0;
              il2cpp_runtime_helper_022b4080(SVar32);
              __this_07 = *(System_String_Fields *)((long)__this_05 + 0x158);
              if (__this_07 != (System_String_Fields)0x0) {
                SStack_228._stringLength = 0x42ebab3;
                SStack_228._firstChar = 0;
                SStack_228._6_2_ = 0;
                method_00 = MethodInfo_Renderer_GetComponent_Renderer;
                pUVar34 = (UnityEngine_Renderer_o *)
                          UnityEngine_GameObject__GetComponent_object_
                                    ((UnityEngine_GameObject_o *)__this_07,(MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer)
                ;
                pCVar30 = (Characters_HumanSetup_o *)&MethodInfo_Renderer_GetComponent_Renderer;
                if (pUVar34 != (UnityEngine_Renderer_o *)0x0) {
                  SStack_228._stringLength = 0x42ebac9;
                  SStack_228._firstChar = 0;
                  SStack_228._6_2_ = 0;
                  method_00 = SVar36;
                  UnityEngine_Renderer__set_material
                            (pUVar34,(UnityEngine_Material_o *)SVar36,(MethodInfo *)0x0);
                  __this_07._stringLength = 0;
                  __this_07._firstChar = 0;
                  __this_07._6_2_ = 0;
                  if (*(Characters_HumanSetupTextures_o **)((long)__this_05 + 0x170) !=
                      (Characters_HumanSetupTextures_o *)0x0) {
                    SStack_228._stringLength = 0x42ebadf;
                    SStack_228._firstChar = 0;
                    SStack_228._6_2_ = 0;
                    SVar32 = (System_String_Fields)
                             Characters_HumanSetupTextures__GetBrandTexture
                                       (*(Characters_HumanSetupTextures_o **)((long)__this_05 + 0x170),
                                        (MethodInfo *)method_00);
                    pMVar43 = extraout_RDX_05;
                    if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
                      SStack_228._stringLength = 0x42ebafb;
                      SStack_228._firstChar = 0;
                      SStack_228._6_2_ = 0;
                      il2cpp_runtime_helper_02337ed0();
                      pMVar43 = extraout_RDX_06;
                    }
                    method_00._stringLength = 0;
                    method_00._firstChar = 0;
                    method_00._6_2_ = 0;
                    SStack_228._stringLength = 0x42ebb05;
                    SStack_228._firstChar = 0;
                    SStack_228._6_2_ = 0;
                    SVar33 = (System_String_Fields)
                             Characters_HumanSetupMaterials__GetPartMaterial
                                       ((System_String_o *)SVar32,0,pMVar43);
                    __this_07 = *(System_String_Fields *)((long)__this_05 + 0x1d8);
                    path = (System_String_Fields *)&TypeInfo_HumanSetupMaterials;
                    if (__this_07 != (System_String_Fields)0x0) {
                      SStack_228._stringLength = 0x42ebb33;
                      SStack_228._firstChar = 0;
                      SStack_228._6_2_ = 0;
                      method_00 = "Type";
                      SVar35 = (System_String_Fields)
                               (**(code **)(*(long *)__this_07 + 0x1a8))
                                         (__this_07,"Type",*(undefined8 *)(*(long *)__this_07 + 0x1b0));
                      SVar28 = SVar33;
                      if (SVar35 != (System_String_Fields)0x0) {
                        method_00 = *(System_String_Fields *)(*(long *)SVar35 + 0x1d0);
                        SStack_228._stringLength = 0x42ebb4f;
                        SStack_228._firstChar = 0;
                        SStack_228._6_2_ = 0;
                        __this = (System_String_Fields)(**(code **)(*(long *)SVar35 + 0x1c8))();
                        __this_07 = SVar35;
                        if (__this != (System_String_Fields)0x0) {
                          SStack_228._stringLength = 0x42ebb6c;
                          SStack_228._firstChar = 0;
                          SStack_228._6_2_ = 0;
                          method_00 = "Uniform";
                          bVar14 = System_String__StartsWith
                                             ((System_String_o *)__this,(System_String_o *)"Uniform",
                                              (MethodInfo *)0x0);
                          if ((char)bVar14 == '\0') {
label_042ebd34:
                            SVar32 = *(System_String_Fields *)((long)__this_05 + 0x170);
                            __this_07 = __this;
                            if (SVar32 != (System_String_Fields)0x0) {
                              if (g_data_057adec4 == '\0') {
                                SStack_228._stringLength = 0x42ebd5a;
                                SStack_228._firstChar = 0;
                                SStack_228._6_2_ = 0;
                                il2cpp_runtime_helper_023445d0(&"Skin/skin_blades");
                                SStack_228._stringLength = 0x42ebd66;
                                SStack_228._firstChar = 0;
                                SStack_228._6_2_ = 0;
                                il2cpp_runtime_helper_023445d0(&"Skin/skin_TS");
                                __this_07 = (System_String_Fields)&"Skin/skin_AHSS";
                                SStack_228._stringLength = 0x42ebd72;
                                SStack_228._firstChar = 0;
                                SStack_228._6_2_ = 0;
                                il2cpp_runtime_helper_023445d0();
                                g_data_057adec4 = '\x01';
                              }
                              if (*(System_String_Fields *)((long)SVar32 + 0x10) != (System_String_Fields)0x0)
                              {
                                iVar3 = *(int *)((long)*(System_String_Fields *)((long)SVar32 + 0x10) + 0x1d0)
                                ;
                                if (iVar3 == 1) {
label_042ec0ae:
                                  pSVar20 = (System_String_Fields *)&"Skin/skin_AHSS";
                                  lVar42 = *(long *)((long)__this_05 + 0x1c8);
                                }
                                else if (iVar3 == 2) {
                                  pSVar20 = (System_String_Fields *)&"Skin/skin_TS";
                                  lVar42 = *(long *)((long)__this_05 + 0x1c8);
                                }
                                else {
                                  if (iVar3 == 3) goto label_042ec0ae;
                                  pSVar20 = (System_String_Fields *)&"Skin/skin_blades";
                                  lVar42 = *(long *)((long)__this_05 + 0x1c8);
                                }
                                if ((lVar42 != 0) && (*(long *)(lVar42 + 0x98) != 0)) {
                                  pUVar22 = *(Utility_Color255_o **)(*(long *)(lVar42 + 0x98) + 0x18);
                                  __this_07._stringLength = 0;
                                  __this_07._firstChar = 0;
                                  __this_07._6_2_ = 0;
                                  if (pUVar22 != (Utility_Color255_o *)0x0) {
                                    SVar32 = *pSVar20;
                                    method_00._stringLength = 0;
                                    method_00._firstChar = 0;
                                    method_00._6_2_ = 0;
                                    SStack_228._stringLength = 0x42ec0ed;
                                    SStack_228._firstChar = 0;
                                    SStack_228._6_2_ = 0;
                                    UVar52 = Utility_Color255__ToColor(pUVar22,(MethodInfo *)0x0);
                                    fVar48 = UVar52.fields.r;
                                    fVar49 = UVar52.fields.g;
                                    fVar50 = UVar52.fields.b;
                                    fVar51 = UVar52.fields.a;
                                    if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
                                      auStack_210._8_4_ = extraout_XMM0_Dc_00;
                                      auStack_210._0_8_ = UVar52.fields._0_8_;
                                      auStack_210._12_4_ = extraout_XMM0_Dd_00;
                                      uStack_218 = in_XMM1_Dc;
                                      auStack_220 = UVar52.fields._8_8_;
                                      uStack_214 = in_XMM1_Dd;
                                      SStack_228._stringLength = 0x42ec108;
                                      SStack_228._firstChar = 0;
                                      SStack_228._6_2_ = 0;
                                      il2cpp_runtime_helper_02337ed0();
                                      fVar48 = (float)auStack_210._0_4_;
                                      fVar49 = (float)auStack_210._4_4_;
                                      fVar50 = (float)auStack_220._0_4_;
                                      fVar51 = (float)auStack_220._4_4_;
                                      in_XMM1_Dc = uStack_218;
                                      in_XMM1_Dd = uStack_214;
                                    }
                                    SStack_228._stringLength = 0x42ec119;
                                    SStack_228._firstChar = 0;
                                    SStack_228._6_2_ = 0;
                                    color_00.fields.g = fVar49;
                                    color_00.fields.r = fVar48;
                                    color_00.fields.a = fVar51;
                                    color_00.fields.b = fVar50;
                                    SVar33 = (System_String_Fields)
                                             Characters_HumanSetupMaterials__GetSkinMaterial
                                                       ((System_String_o *)SVar32,color_00,
                                                        (MethodInfo *)method_00);
                                    __this_07 = *(System_String_Fields *)((long)__this_05 + 0x148);
                                    if (__this_07 != (System_String_Fields)0x0) {
                                      SStack_228._stringLength = 0x42ec131;
                                      SStack_228._firstChar = 0;
                                      SStack_228._6_2_ = 0;
                                      method_00 = MethodInfo_Renderer_GetComponent_Renderer;
                                      pUVar34 = (UnityEngine_Renderer_o *)
                                                UnityEngine_GameObject__GetComponent_object_
                                                          ((UnityEngine_GameObject_o *)__this_07,
                                                           (MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer);
                                      SVar32 = SVar33;
                                      if (pUVar34 != (UnityEngine_Renderer_o *)0x0) {
                                        SStack_228._stringLength = 0x42ec143;
                                        SStack_228._firstChar = 0;
                                        SStack_228._6_2_ = 0;
                                        method_00 = SVar33;
                                        UnityEngine_Renderer__set_material
                                                  (pUVar34,(UnityEngine_Material_o *)SVar33,(MethodInfo *)0x0)
                                        ;
                                        __this_07 = *(System_String_Fields *)((long)__this_05 + 0xf0);
                                        if (__this_07 != (System_String_Fields)0x0) {
                                          SStack_228._stringLength = 0x42ec158;
                                          SStack_228._firstChar = 0;
                                          SStack_228._6_2_ = 0;
                                          method_00 = MethodInfo_Renderer_GetComponent_Renderer;
                                          pUVar34 = (UnityEngine_Renderer_o *)
                                                    UnityEngine_GameObject__GetComponent_object_
                                                              ((UnityEngine_GameObject_o *)__this_07,
                                                               (MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer);
                                          if (pUVar34 != (UnityEngine_Renderer_o *)0x0) {
                                            UnityEngine_Renderer__set_material
                                                      (pUVar34,(UnityEngine_Material_o *)SVar33,
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
                              SVar32 = (System_String_Fields)((long)__this_05 + 200);
                              SStack_228._stringLength = 0x42ebb97;
                              SStack_228._firstChar = 0;
                              SStack_228._6_2_ = 0;
                              pSVar26 = Characters_HumanSetupMeshes__GetBrandMesh
                                                  (*(Characters_HumanSetupMeshes_o **)
                                                    ((long)__this_05 + 0x168),1,method_04);
                              SStack_228._stringLength = 0x42ebba2;
                              SStack_228._firstChar = 0;
                              SStack_228._6_2_ = 0;
                              method_00 = (System_String_Fields)
                                          Characters_HumanSetup__GenerateCloth
                                                    ((Characters_HumanSetup_o *)__this_05,pSVar26,method_05);
                              *(System_String_Fields *)((long)__this_05 + 200) = method_00;
                              SStack_228._stringLength = 0x42ebbb5;
                              SStack_228._firstChar = 0;
                              SStack_228._6_2_ = 0;
                              il2cpp_runtime_helper_022b4080(SVar32);
                              __this_07 = *(System_String_Fields *)((long)__this_05 + 200);
                              if (__this_07 != (System_String_Fields)0x0) {
                                SStack_228._stringLength = 0x42ebbce;
                                SStack_228._firstChar = 0;
                                SStack_228._6_2_ = 0;
                                method_00 = MethodInfo_Renderer_GetComponent_Renderer;
                                pUVar34 = (UnityEngine_Renderer_o *)
                                          UnityEngine_GameObject__GetComponent_object_
                                                    ((UnityEngine_GameObject_o *)__this_07,
                                                     (MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer);
                                if (pUVar34 != (UnityEngine_Renderer_o *)0x0) {
                                  SStack_228._stringLength = 0x42ebbe4;
                                  SStack_228._firstChar = 0;
                                  SStack_228._6_2_ = 0;
                                  method_00 = SVar33;
                                  UnityEngine_Renderer__set_material
                                            (pUVar34,(UnityEngine_Material_o *)SVar33,(MethodInfo *)0x0);
                                  __this_07._stringLength = 0;
                                  __this_07._firstChar = 0;
                                  __this_07._6_2_ = 0;
                                  if (*(Characters_HumanSetupMeshes_o **)((long)__this_05 + 0x168) !=
                                      (Characters_HumanSetupMeshes_o *)0x0) {
                                    SVar32 = (System_String_Fields)((long)__this_05 + 0xd0);
                                    SStack_228._stringLength = 0x42ebc07;
                                    SStack_228._firstChar = 0;
                                    SStack_228._6_2_ = 0;
                                    pSVar26 = Characters_HumanSetupMeshes__GetBrandMesh
                                                        (*(Characters_HumanSetupMeshes_o **)
                                                          ((long)__this_05 + 0x168),2,method_06);
                                    SStack_228._stringLength = 0x42ebc12;
                                    SStack_228._firstChar = 0;
                                    SStack_228._6_2_ = 0;
                                    method_00 = (System_String_Fields)
                                                Characters_HumanSetup__GenerateCloth
                                                          ((Characters_HumanSetup_o *)__this_05,pSVar26,
                                                           method_07);
                                    *(System_String_Fields *)((long)__this_05 + 0xd0) = method_00;
                                    SStack_228._stringLength = 0x42ebc25;
                                    SStack_228._firstChar = 0;
                                    SStack_228._6_2_ = 0;
                                    il2cpp_runtime_helper_022b4080(SVar32);
                                    __this_07 = *(System_String_Fields *)((long)__this_05 + 0xd0);
                                    if (__this_07 != (System_String_Fields)0x0) {
                                      SStack_228._stringLength = 0x42ebc3e;
                                      SStack_228._firstChar = 0;
                                      SStack_228._6_2_ = 0;
                                      method_00 = MethodInfo_Renderer_GetComponent_Renderer;
                                      pUVar34 = (UnityEngine_Renderer_o *)
                                                UnityEngine_GameObject__GetComponent_object_
                                                          ((UnityEngine_GameObject_o *)__this_07,
                                                           (MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer);
                                      if (pUVar34 != (UnityEngine_Renderer_o *)0x0) {
                                        SStack_228._stringLength = 0x42ebc54;
                                        SStack_228._firstChar = 0;
                                        SStack_228._6_2_ = 0;
                                        method_00 = SVar33;
                                        UnityEngine_Renderer__set_material
                                                  (pUVar34,(UnityEngine_Material_o *)SVar33,(MethodInfo *)0x0)
                                        ;
                                        __this_07._stringLength = 0;
                                        __this_07._firstChar = 0;
                                        __this_07._6_2_ = 0;
                                        if (*(Characters_HumanSetupMeshes_o **)((long)__this_05 + 0x168) !=
                                            (Characters_HumanSetupMeshes_o *)0x0) {
                                          SVar32 = (System_String_Fields)((long)__this_05 + 0xd8);
                                          SStack_228._stringLength = 0x42ebc77;
                                          SStack_228._firstChar = 0;
                                          SStack_228._6_2_ = 0;
                                          pSVar26 = Characters_HumanSetupMeshes__GetBrandMesh
                                                              (*(Characters_HumanSetupMeshes_o **)
                                                                ((long)__this_05 + 0x168),3,method_08);
                                          SStack_228._stringLength = 0x42ebc82;
                                          SStack_228._firstChar = 0;
                                          SStack_228._6_2_ = 0;
                                          method_00 = (System_String_Fields)
                                                      Characters_HumanSetup__GenerateCloth
                                                                ((Characters_HumanSetup_o *)__this_05,pSVar26,
                                                                 method_09);
                                          *(System_String_Fields *)((long)__this_05 + 0xd8) = method_00;
                                          SStack_228._stringLength = 0x42ebc95;
                                          SStack_228._firstChar = 0;
                                          SStack_228._6_2_ = 0;
                                          il2cpp_runtime_helper_022b4080(SVar32);
                                          __this_07 = *(System_String_Fields *)((long)__this_05 + 0xd8);
                                          if (__this_07 != (System_String_Fields)0x0) {
                                            SStack_228._stringLength = 0x42ebcae;
                                            SStack_228._firstChar = 0;
                                            SStack_228._6_2_ = 0;
                                            method_00 = MethodInfo_Renderer_GetComponent_Renderer;
                                            pUVar34 = (UnityEngine_Renderer_o *)
                                                      UnityEngine_GameObject__GetComponent_object_
                                                                ((UnityEngine_GameObject_o *)__this_07,
                                                                 (MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer);
                                            if (pUVar34 != (UnityEngine_Renderer_o *)0x0) {
                                              SStack_228._stringLength = 0x42ebcc4;
                                              SStack_228._firstChar = 0;
                                              SStack_228._6_2_ = 0;
                                              method_00 = SVar33;
                                              UnityEngine_Renderer__set_material
                                                        (pUVar34,(UnityEngine_Material_o *)SVar33,
                                                         (MethodInfo *)0x0);
                                              __this_07._stringLength = 0;
                                              __this_07._firstChar = 0;
                                              __this_07._6_2_ = 0;
                                              if (*(Characters_HumanSetupMeshes_o **)((long)__this_05 + 0x168)
                                                  != (Characters_HumanSetupMeshes_o *)0x0) {
                                                SVar32 = (System_String_Fields)((long)__this_05 + 0xe0);
                                                SStack_228._stringLength = 0x42ebce7;
                                                SStack_228._firstChar = 0;
                                                SStack_228._6_2_ = 0;
                                                pSVar26 = Characters_HumanSetupMeshes__GetBrandMesh
                                                                    (*(Characters_HumanSetupMeshes_o **)
                                                                      ((long)__this_05 + 0x168),4,method_10);
                                                SStack_228._stringLength = 0x42ebcf2;
                                                SStack_228._firstChar = 0;
                                                SStack_228._6_2_ = 0;
                                                method_00 = (System_String_Fields)
                                                            Characters_HumanSetup__GenerateCloth
                                                                      ((Characters_HumanSetup_o *)__this_05,
                                                                       pSVar26,method_11);
                                                *(System_String_Fields *)((long)__this_05 + 0xe0) = method_00;
                                                SStack_228._stringLength = 0x42ebd05;
                                                SStack_228._firstChar = 0;
                                                SStack_228._6_2_ = 0;
                                                il2cpp_runtime_helper_022b4080(SVar32);
                                                __this_07 = *(System_String_Fields *)((long)__this_05 + 0xe0);
                                                if (__this_07 != (System_String_Fields)0x0) {
                                                  SStack_228._stringLength = 0x42ebd1e;
                                                  SStack_228._firstChar = 0;
                                                  SStack_228._6_2_ = 0;
                                                  method_00 = MethodInfo_Renderer_GetComponent_Renderer;
                                                  __this = (System_String_Fields)
                                                           UnityEngine_GameObject__GetComponent_object_
                                                                     ((UnityEngine_GameObject_o *)__this_07,
                                                                      (MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer);
                                                  if (__this != (System_String_Fields)0x0) {
                                                    SStack_228._stringLength = 0x42ebd34;
                                                    SStack_228._firstChar = 0;
                                                    SStack_228._6_2_ = 0;
                                                    method_00 = SVar33;
                                                    UnityEngine_Renderer__set_material
                                                              ((UnityEngine_Renderer_o *)__this,
                                                               (UnityEngine_Material_o *)SVar33,
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
            SStack_228._stringLength = 0x42eb922;
            SStack_228._firstChar = 0;
            SStack_228._6_2_ = 0;
            il2cpp_runtime_helper_02337ed0();
          }
          pCVar30 = (Characters_HumanSetup_o *)((long)__this_05 + 0x100);
          path = *(System_String_Fields **)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
          if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
            SStack_228._stringLength = 0x42eb950;
            SStack_228._firstChar = 0;
            SStack_228._6_2_ = 0;
            il2cpp_runtime_helper_02337ed0();
          }
          SStack_228._stringLength = 0x42eb96a;
          SStack_228._firstChar = 0;
          SStack_228._6_2_ = 0;
          pIVar27 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                              ((System_String_o *)path,(System_String_o *)SVar32,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
          *(Il2CppObject **)((long)__this_05 + 0x100) = pIVar27;
          SStack_228._stringLength = 0x42eb97d;
          SStack_228._firstChar = 0;
          SStack_228._6_2_ = 0;
          pCVar31 = pCVar30;
          il2cpp_runtime_helper_022b4080(pCVar30,pIVar27);
          method_00 = *(System_String_Fields *)((long)__this_05 + 0x100);
          SStack_228._stringLength = 0x42eb991;
          SStack_228._firstChar = 0;
          SStack_228._6_2_ = 0;
          Characters_HumanSetup__AttachToMount
                    (pCVar31,(UnityEngine_GameObject_o *)method_00,
                     *(UnityEngine_GameObject_o **)((long)__this_05 + 0x20),0,method);
          __this_07 = *(System_String_Fields *)((long)__this_05 + 0x100);
          if (__this_07 != (System_String_Fields)0x0) {
            SStack_228._stringLength = 0x42eb9b1;
            SStack_228._firstChar = 0;
            SStack_228._6_2_ = 0;
            method_00 = MethodInfo_Renderer_GetComponent_Renderer;
            pUVar34 = (UnityEngine_Renderer_o *)
                      UnityEngine_GameObject__GetComponent_object_
                                ((UnityEngine_GameObject_o *)__this_07,(MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer);
            if (pUVar34 != (UnityEngine_Renderer_o *)0x0) {
              SStack_228._stringLength = 0x42eb9c7;
              SStack_228._firstChar = 0;
              SStack_228._6_2_ = 0;
              method_00 = SVar36;
              UnityEngine_Renderer__set_material(pUVar34,(UnityEngine_Material_o *)SVar36,(MethodInfo *)0x0);
              pMVar43 = extraout_RDX_04;
              goto label_042eb9c7;
            }
          }
        }
      }
    }
    else {
      if (*(int *)((long)TypeInfo_ResourcePaths + 0xe4) == 0) {
        SStack_228._stringLength = 0x42eb7e1;
        SStack_228._firstChar = 0;
        SStack_228._6_2_ = 0;
        il2cpp_runtime_helper_02337ed0();
      }
      path = (System_String_Fields *)((long)__this_05 + 0xf8);
      SVar32 = *(System_String_Fields *)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        SStack_228._stringLength = 0x42eb80f;
        SStack_228._firstChar = 0;
        SStack_228._6_2_ = 0;
        il2cpp_runtime_helper_02337ed0();
      }
      SStack_228._stringLength = 0x42eb829;
      SStack_228._firstChar = 0;
      SStack_228._6_2_ = 0;
      pIVar27 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                          ((System_String_o *)SVar32,(System_String_o *)pCVar30,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
      *(Il2CppObject **)((long)__this_05 + 0xf8) = pIVar27;
      SStack_228._stringLength = 0x42eb83c;
      SStack_228._firstChar = 0;
      SStack_228._6_2_ = 0;
      __this_06 = (System_Object_array *)path;
      il2cpp_runtime_helper_022b4080(path,pIVar27);
      method_00 = *(System_String_Fields *)((long)__this_05 + 0xf8);
      SStack_228._stringLength = 0x42eb850;
      SStack_228._firstChar = 0;
      SStack_228._6_2_ = 0;
      Characters_HumanSetup__AttachToMount
                ((Characters_HumanSetup_o *)__this_06,(UnityEngine_GameObject_o *)method_00,
                 *(UnityEngine_GameObject_o **)((long)__this_05 + 0x20),0,method);
      __this_07._stringLength = 0;
      __this_07._firstChar = 0;
      __this_07._6_2_ = 0;
      if (*(UnityEngine_GameObject_o **)((long)__this_05 + 0xf8) != (UnityEngine_GameObject_o *)0x0) {
        SStack_228._stringLength = 0x42eb870;
        SStack_228._firstChar = 0;
        SStack_228._6_2_ = 0;
        method_00 = MethodInfo_Renderer_GetComponent_Renderer;
        pCVar31 = (Characters_HumanSetup_o *)
                  UnityEngine_GameObject__GetComponent_object_
                            (*(UnityEngine_GameObject_o **)((long)__this_05 + 0xf8),
                             (MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer);
        __this_07._stringLength = 0;
        __this_07._firstChar = 0;
        __this_07._6_2_ = 0;
        if (*(Characters_HumanSetupTextures_o **)((long)__this_05 + 0x170) !=
            (Characters_HumanSetupTextures_o *)0x0) {
          SStack_228._stringLength = 0x42eb88e;
          SStack_228._firstChar = 0;
          SStack_228._6_2_ = 0;
          SVar32 = (System_String_Fields)
                   Characters_HumanSetupTextures__GetChestTexture
                             (*(Characters_HumanSetupTextures_o **)((long)__this_05 + 0x170),1,method_02);
          pMVar43 = extraout_RDX_00;
          if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
            SStack_228._stringLength = 0x42eb8a9;
            SStack_228._firstChar = 0;
            SStack_228._6_2_ = 0;
            il2cpp_runtime_helper_02337ed0();
            pMVar43 = extraout_RDX_01;
          }
          method_00._stringLength = 0;
          method_00._firstChar = 0;
          method_00._6_2_ = 0;
          SStack_228._stringLength = 0x42eb8b3;
          SStack_228._firstChar = 0;
          SStack_228._6_2_ = 0;
          __this_07 = SVar32;
          SVar33 = (System_String_Fields)
                   Characters_HumanSetupMaterials__GetPartMaterial((System_String_o *)SVar32,0,pMVar43);
          pCVar30 = pCVar31;
          if (pCVar31 != (Characters_HumanSetup_o *)0x0) {
            SStack_228._stringLength = 0x42eb8c9;
            SStack_228._firstChar = 0;
            SStack_228._6_2_ = 0;
            UnityEngine_Renderer__set_material
                      ((UnityEngine_Renderer_o *)pCVar31,(UnityEngine_Material_o *)SVar33,(MethodInfo *)0x0);
            pMVar43 = extraout_RDX_02;
            method_00 = SVar33;
            goto label_042eb8c9;
          }
        }
      }
    }
  }
  SStack_228._stringLength = 0x42ec195;
  SStack_228._firstChar = 0;
  SStack_228._6_2_ = 0;
  il2cpp_runtime_helper_022b2c90();
  SStack_250 = SVar32;
  SStack_248 = __this_05;
  pSStack_240 = (System_Object_array *)path;
  SStack_238 = SVar28;
  pCStack_230 = pCVar30;
  SStack_228 = SVar36;
  if (g_data_057ade9c == '\0') {
    SStack_280._stringLength = 0x42ec355;
    SStack_280._firstChar = 0;
    SStack_280._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponent_Renderer);
    SStack_280._stringLength = 0x42ec361;
    SStack_280._firstChar = 0;
    SStack_280._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupMaterials);
    SStack_280._stringLength = 0x42ec36d;
    SStack_280._firstChar = 0;
    SStack_280._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color255_get_Value);
    g_data_057ade9c = '\x01';
    pUVar38 = *(UnityEngine_Object_o **)((long)__this_07 + 0xa8);
    if (g_data_057adea2 != '\0') goto label_042ec1d5;
label_042ec388:
    SStack_280._stringLength = 0x42ec394;
    SStack_280._firstChar = 0;
    SStack_280._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    pUVar38 = *(UnityEngine_Object_o **)((long)__this_07 + 0xa8);
    if (g_data_057adea2 == '\0') goto label_042ec388;
label_042ec1d5:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    SStack_280._stringLength = 0x42ec3b8;
    SStack_280._firstChar = 0;
    SStack_280._6_2_ = 0;
    il2cpp_runtime_helper_02337ed0();
  }
  plVar44 = &TypeInfo_Object;
  SStack_280._stringLength = 0x42ec1f9;
  SStack_280._firstChar = 0;
  SStack_280._6_2_ = 0;
  bVar14 = UnityEngine_Object__op_Inequality(pUVar38,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar14 == '\0') {
    pUVar38 = *(UnityEngine_Object_o **)((long)__this_07 + 0x138);
    if (g_data_057adea2 == '\0') goto label_042ec3ed;
label_042ec215:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      SStack_280._stringLength = 0x42ec3cf;
      SStack_280._firstChar = 0;
      SStack_280._6_2_ = 0;
      il2cpp_runtime_helper_02337ed0();
    }
    SStack_280._stringLength = 0x42ec3d9;
    SStack_280._firstChar = 0;
    SStack_280._6_2_ = 0;
    UnityEngine_Object__Destroy_4e01c60(pUVar38,(MethodInfo *)0x0);
    pUVar38 = *(UnityEngine_Object_o **)((long)__this_07 + 0x138);
    if (g_data_057adea2 != '\0') goto label_042ec215;
label_042ec3ed:
    SStack_280._stringLength = 0x42ec3f9;
    SStack_280._firstChar = 0;
    SStack_280._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    SStack_280._stringLength = 0x42ec416;
    SStack_280._firstChar = 0;
    SStack_280._6_2_ = 0;
    il2cpp_runtime_helper_02337ed0();
  }
  SStack_280._stringLength = 0x42ec232;
  SStack_280._firstChar = 0;
  SStack_280._6_2_ = 0;
  bVar14 = UnityEngine_Object__op_Inequality(pUVar38,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar14 == '\0') {
    pUVar38 = *(UnityEngine_Object_o **)((long)__this_07 + 0xb0);
    if (g_data_057adea2 == '\0') goto label_042ec44b;
label_042ec24e:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      SStack_280._stringLength = 0x42ec42d;
      SStack_280._firstChar = 0;
      SStack_280._6_2_ = 0;
      il2cpp_runtime_helper_02337ed0();
    }
    SStack_280._stringLength = 0x42ec437;
    SStack_280._firstChar = 0;
    SStack_280._6_2_ = 0;
    UnityEngine_Object__Destroy_4e01c60(pUVar38,(MethodInfo *)0x0);
    pUVar38 = *(UnityEngine_Object_o **)((long)__this_07 + 0xb0);
    if (g_data_057adea2 != '\0') goto label_042ec24e;
label_042ec44b:
    SStack_280._stringLength = 0x42ec457;
    SStack_280._firstChar = 0;
    SStack_280._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    SStack_280._stringLength = 0x42ec474;
    SStack_280._firstChar = 0;
    SStack_280._6_2_ = 0;
    il2cpp_runtime_helper_02337ed0();
  }
  SStack_280._stringLength = 0x42ec26b;
  SStack_280._firstChar = 0;
  SStack_280._6_2_ = 0;
  bVar14 = UnityEngine_Object__op_Inequality(pUVar38,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar14 == '\0') {
    SVar28 = *(System_String_Fields *)((long)__this_07 + 0x140);
    if (g_data_057adea2 == '\0') goto label_042ec4a9;
label_042ec287:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      SStack_280._stringLength = 0x42ec48b;
      SStack_280._firstChar = 0;
      SStack_280._6_2_ = 0;
      il2cpp_runtime_helper_02337ed0();
    }
    SStack_280._stringLength = 0x42ec495;
    SStack_280._firstChar = 0;
    SStack_280._6_2_ = 0;
    UnityEngine_Object__Destroy_4e01c60(pUVar38,(MethodInfo *)0x0);
    SVar28 = *(System_String_Fields *)((long)__this_07 + 0x140);
    if (g_data_057adea2 != '\0') goto label_042ec287;
label_042ec4a9:
    SStack_280._stringLength = 0x42ec4b5;
    SStack_280._firstChar = 0;
    SStack_280._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    SStack_280._stringLength = 0x42ec4d2;
    SStack_280._firstChar = 0;
    SStack_280._6_2_ = 0;
    il2cpp_runtime_helper_02337ed0();
  }
  SVar35._stringLength = 0;
  SVar35._firstChar = 0;
  SVar35._6_2_ = 0;
  SStack_280._stringLength = 0x42ec2a4;
  SStack_280._firstChar = 0;
  SStack_280._6_2_ = 0;
  SVar32 = SVar28;
  bVar14 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)SVar28,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar14 != '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      SStack_280._stringLength = 0x42ec2ba;
      SStack_280._firstChar = 0;
      SStack_280._6_2_ = 0;
      il2cpp_runtime_helper_02337ed0();
    }
    SVar35._stringLength = 0;
    SVar35._firstChar = 0;
    SVar35._6_2_ = 0;
    SStack_280._stringLength = 0x42ec2c4;
    SStack_280._firstChar = 0;
    SStack_280._6_2_ = 0;
    SVar32 = SVar28;
    UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)SVar28,(MethodInfo *)0x0);
  }
  lVar42 = *(long *)((long)__this_07 + 0x170);
  if (lVar42 != 0) {
    if (g_data_057adec4 == '\0') {
      SStack_280._stringLength = 0x42ec2e9;
      SStack_280._firstChar = 0;
      SStack_280._6_2_ = 0;
      il2cpp_runtime_helper_023445d0(&"Skin/skin_blades");
      SStack_280._stringLength = 0x42ec2f5;
      SStack_280._firstChar = 0;
      SStack_280._6_2_ = 0;
      il2cpp_runtime_helper_023445d0(&"Skin/skin_TS");
      SVar32 = (System_String_Fields)&"Skin/skin_AHSS";
      SStack_280._stringLength = 0x42ec301;
      SStack_280._firstChar = 0;
      SStack_280._6_2_ = 0;
      il2cpp_runtime_helper_023445d0();
      g_data_057adec4 = '\x01';
    }
    if (*(long *)(lVar42 + 0x10) != 0) {
      iVar3 = *(int *)(*(long *)(lVar42 + 0x10) + 0x1d0);
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
        SVar32._stringLength = 0;
        SVar32._firstChar = 0;
        SVar32._6_2_ = 0;
        if (pUVar22 != (Utility_Color255_o *)0x0) {
          SVar28 = *pSVar20;
          SVar35._stringLength = 0;
          SVar35._firstChar = 0;
          SVar35._6_2_ = 0;
          SStack_280._stringLength = 0x42ec51e;
          SStack_280._firstChar = 0;
          SStack_280._6_2_ = 0;
          UVar52 = Utility_Color255__ToColor(pUVar22,(MethodInfo *)0x0);
          fVar48 = UVar52.fields.r;
          fVar49 = UVar52.fields.g;
          fVar50 = UVar52.fields.b;
          fVar51 = UVar52.fields.a;
          if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
            auStack_268._8_4_ = extraout_XMM0_Dc_01;
            auStack_268._0_8_ = UVar52.fields._0_8_;
            auStack_268._12_4_ = extraout_XMM0_Dd_01;
            auStack_278._8_4_ = in_XMM1_Dc;
            auStack_278._0_8_ = UVar52.fields._8_8_;
            auStack_278._12_4_ = in_XMM1_Dd;
            SStack_280._stringLength = 0x42ec53f;
            SStack_280._firstChar = 0;
            SStack_280._6_2_ = 0;
            il2cpp_runtime_helper_02337ed0();
            fVar48 = (float)auStack_268._0_4_;
            fVar49 = (float)auStack_268._4_4_;
            fVar50 = (float)auStack_278._0_4_;
            fVar51 = (float)auStack_278._4_4_;
          }
          SStack_280._stringLength = 0x42ec550;
          SStack_280._firstChar = 0;
          SStack_280._6_2_ = 0;
          color_01.fields.g = fVar49;
          color_01.fields.r = fVar48;
          color_01.fields.a = fVar51;
          color_01.fields.b = fVar50;
          SVar36 = (System_String_Fields)
                   Characters_HumanSetupMaterials__GetSkinMaterial
                             ((System_String_o *)SVar28,color_01,(MethodInfo *)SVar35);
          SVar32._stringLength = 0;
          SVar32._firstChar = 0;
          SVar32._6_2_ = 0;
          if (*(Characters_HumanSetupMeshes_o **)((long)__this_07 + 0x168) !=
              (Characters_HumanSetupMeshes_o *)0x0) {
            plVar44 = (long *)((long)__this_07 + 0xa8);
            SStack_280._stringLength = 0x42ec574;
            SStack_280._firstChar = 0;
            SStack_280._6_2_ = 0;
            pSVar26 = Characters_HumanSetupMeshes__GetArmMesh
                                (*(Characters_HumanSetupMeshes_o **)((long)__this_07 + 0x168),1,method_12);
            SStack_280._stringLength = 0x42ec57f;
            SStack_280._firstChar = 0;
            SStack_280._6_2_ = 0;
            SVar35 = (System_String_Fields)
                     Characters_HumanSetup__GenerateCloth
                               ((Characters_HumanSetup_o *)__this_07,pSVar26,method_13);
            *(System_String_Fields *)((long)__this_07 + 0xa8) = SVar35;
            SStack_280._stringLength = 0x42ec591;
            SStack_280._firstChar = 0;
            SStack_280._6_2_ = 0;
            il2cpp_runtime_helper_022b4080(plVar44);
            SVar32 = *(System_String_Fields *)((long)__this_07 + 0xa8);
            SVar28 = SVar36;
            if (SVar32 != (System_String_Fields)0x0) {
              path = &MethodInfo_Renderer_GetComponent_Renderer;
              SStack_280._stringLength = 0x42ec5b1;
              SStack_280._firstChar = 0;
              SStack_280._6_2_ = 0;
              SVar35 = MethodInfo_Renderer_GetComponent_Renderer;
              pUVar34 = (UnityEngine_Renderer_o *)
                        UnityEngine_GameObject__GetComponent_object_
                                  ((UnityEngine_GameObject_o *)SVar32,(MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer);
              if (pUVar34 != (UnityEngine_Renderer_o *)0x0) {
                SStack_280._stringLength = 0x42ec5c7;
                SStack_280._firstChar = 0;
                SStack_280._6_2_ = 0;
                SVar35 = method_00;
                UnityEngine_Renderer__set_material
                          (pUVar34,(UnityEngine_Material_o *)method_00,(MethodInfo *)0x0);
                SVar32._stringLength = 0;
                SVar32._firstChar = 0;
                SVar32._6_2_ = 0;
                if (*(Characters_HumanSetupMeshes_o **)((long)__this_07 + 0x168) !=
                    (Characters_HumanSetupMeshes_o *)0x0) {
                  plVar44 = (long *)((long)__this_07 + 0x138);
                  SStack_280._stringLength = 0x42ec5e8;
                  SStack_280._firstChar = 0;
                  SStack_280._6_2_ = 0;
                  pSVar26 = Characters_HumanSetupMeshes__GetHandMesh
                                      (*(Characters_HumanSetupMeshes_o **)((long)__this_07 + 0x168),1,
                                       method_14);
                  SStack_280._stringLength = 0x42ec5f3;
                  SStack_280._firstChar = 0;
                  SStack_280._6_2_ = 0;
                  SVar35 = (System_String_Fields)
                           Characters_HumanSetup__GenerateCloth
                                     ((Characters_HumanSetup_o *)__this_07,pSVar26,method_15);
                  *(System_String_Fields *)((long)__this_07 + 0x138) = SVar35;
                  SStack_280._stringLength = 0x42ec605;
                  SStack_280._firstChar = 0;
                  SStack_280._6_2_ = 0;
                  il2cpp_runtime_helper_022b4080(plVar44);
                  SVar32 = *(System_String_Fields *)((long)__this_07 + 0x138);
                  if (SVar32 != (System_String_Fields)0x0) {
                    SStack_280._stringLength = 0x42ec61e;
                    SStack_280._firstChar = 0;
                    SStack_280._6_2_ = 0;
                    SVar35 = MethodInfo_Renderer_GetComponent_Renderer;
                    pUVar34 = (UnityEngine_Renderer_o *)
                              UnityEngine_GameObject__GetComponent_object_
                                        ((UnityEngine_GameObject_o *)SVar32,(MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer
                                        );
                    if (pUVar34 != (UnityEngine_Renderer_o *)0x0) {
                      SStack_280._stringLength = 0x42ec634;
                      SStack_280._firstChar = 0;
                      SStack_280._6_2_ = 0;
                      SVar35 = SVar36;
                      UnityEngine_Renderer__set_material
                                (pUVar34,(UnityEngine_Material_o *)SVar36,(MethodInfo *)0x0);
                      SVar32._stringLength = 0;
                      SVar32._firstChar = 0;
                      SVar32._6_2_ = 0;
                      if (*(Characters_HumanSetupMeshes_o **)((long)__this_07 + 0x168) !=
                          (Characters_HumanSetupMeshes_o *)0x0) {
                        plVar44 = (long *)((long)__this_07 + 0xb0);
                        SStack_280._stringLength = 0x42ec652;
                        SStack_280._firstChar = 0;
                        SStack_280._6_2_ = 0;
                        pSVar26 = Characters_HumanSetupMeshes__GetArmMesh
                                            (*(Characters_HumanSetupMeshes_o **)((long)__this_07 + 0x168),0,
                                             method_16);
                        SStack_280._stringLength = 0x42ec65d;
                        SStack_280._firstChar = 0;
                        SStack_280._6_2_ = 0;
                        SVar35 = (System_String_Fields)
                                 Characters_HumanSetup__GenerateCloth
                                           ((Characters_HumanSetup_o *)__this_07,pSVar26,method_17);
                        *(System_String_Fields *)((long)__this_07 + 0xb0) = SVar35;
                        SStack_280._stringLength = 0x42ec66f;
                        SStack_280._firstChar = 0;
                        SStack_280._6_2_ = 0;
                        il2cpp_runtime_helper_022b4080(plVar44);
                        SVar32 = *(System_String_Fields *)((long)__this_07 + 0xb0);
                        if (SVar32 != (System_String_Fields)0x0) {
                          SStack_280._stringLength = 0x42ec688;
                          SStack_280._firstChar = 0;
                          SStack_280._6_2_ = 0;
                          SVar35 = MethodInfo_Renderer_GetComponent_Renderer;
                          pUVar34 = (UnityEngine_Renderer_o *)
                                    UnityEngine_GameObject__GetComponent_object_
                                              ((UnityEngine_GameObject_o *)SVar32,
                                               (MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer);
                          if (pUVar34 != (UnityEngine_Renderer_o *)0x0) {
                            SStack_280._stringLength = 0x42ec69e;
                            SStack_280._firstChar = 0;
                            SStack_280._6_2_ = 0;
                            SVar35 = method_00;
                            UnityEngine_Renderer__set_material
                                      (pUVar34,(UnityEngine_Material_o *)method_00,(MethodInfo *)0x0);
                            SVar32._stringLength = 0;
                            SVar32._firstChar = 0;
                            SVar32._6_2_ = 0;
                            if (*(Characters_HumanSetupMeshes_o **)((long)__this_07 + 0x168) !=
                                (Characters_HumanSetupMeshes_o *)0x0) {
                              method_00 = (System_String_Fields)((long)__this_07 + 0x140);
                              SStack_280._stringLength = 0x42ec6b8;
                              SStack_280._firstChar = 0;
                              SStack_280._6_2_ = 0;
                              pSVar26 = Characters_HumanSetupMeshes__GetHandMesh
                                                  (*(Characters_HumanSetupMeshes_o **)
                                                    ((long)__this_07 + 0x168),0,method_18);
                              SStack_280._stringLength = 0x42ec6c3;
                              SStack_280._firstChar = 0;
                              SStack_280._6_2_ = 0;
                              SVar35 = (System_String_Fields)
                                       Characters_HumanSetup__GenerateCloth
                                                 ((Characters_HumanSetup_o *)__this_07,pSVar26,method_19);
                              *(System_String_Fields *)((long)__this_07 + 0x140) = SVar35;
                              SStack_280._stringLength = 0x42ec6d5;
                              SStack_280._firstChar = 0;
                              SStack_280._6_2_ = 0;
                              il2cpp_runtime_helper_022b4080(method_00);
                              SVar32 = *(System_String_Fields *)((long)__this_07 + 0x140);
                              if (SVar32 != (System_String_Fields)0x0) {
                                SStack_280._stringLength = 0x42ec6ea;
                                SStack_280._firstChar = 0;
                                SStack_280._6_2_ = 0;
                                SVar35 = MethodInfo_Renderer_GetComponent_Renderer;
                                pUVar34 = (UnityEngine_Renderer_o *)
                                          UnityEngine_GameObject__GetComponent_object_
                                                    ((UnityEngine_GameObject_o *)SVar32,
                                                     (MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer);
                                if (pUVar34 != (UnityEngine_Renderer_o *)0x0) {
                                  UnityEngine_Renderer__set_material
                                            (pUVar34,(UnityEngine_Material_o *)SVar36,(MethodInfo *)0x0);
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
  SStack_280._stringLength = 0x42ec726;
  SStack_280._firstChar = 0;
  SStack_280._6_2_ = 0;
  il2cpp_runtime_helper_022b2c90();
  lStack_2a0 = lVar42;
  plStack_298 = plVar44;
  pSStack_290 = (System_Object_array *)path;
  SStack_288 = method_00;
  SStack_280 = SVar28;
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
    pSVar41 = ((System_String_o *)((long)SVar32 + 0x1c8))->klass;
    if (pSVar41 == (System_String_c *)0x0) goto label_042ec961;
label_042ec777:
    pvVar7 = (pSVar41->_1).typeMetadataHandle;
    if ((pvVar7 == (void *)0x0) ||
       (pSVar41 = ((System_String_o *)((long)SVar32 + 0x168))->klass, pSVar41 == (System_String_c *)0x0))
    goto label_042ec961;
    pSVar26 = *(System_String_o **)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
    uStack_2a4 = *(undefined4 *)((long)pvVar7 + 0x14);
    if (g_data_057adeae == '\0') {
      il2cpp_runtime_helper_023445d0(&"character_leg_");
      g_data_057adeae = '\x01';
    }
    pSVar17 = (System_String_o *)(pSVar41->_1).namespaze;
    pSVar37 = System_Int32__ToString((int32_t)&uStack_2a4,(MethodInfo *)0x0);
    pSVar17 = System_String__Concat_3af7150(pSVar17,"character_leg_",pSVar37,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar38 = ApplicationManagers_ResourceManager__LoadAsset(pSVar26,pSVar17,1,(MethodInfo *)0x0);
    if (pUVar38 == (UnityEngine_Object_o *)0x0) goto label_042ec961;
    if (pUVar38->klass == TypeInfo_GameObject) {
      __this_00 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar38,(MethodInfo *)0x0)
      ;
      pSVar41 = ((System_String_o *)((long)SVar32 + 0x150))->klass;
      if ((((pSVar41 != (System_String_c *)0x0) &&
           (__this_01 = (UnityEngine_SkinnedMeshRenderer_o *)
                        UnityEngine_GameObject__GetComponent_object_
                                  ((UnityEngine_GameObject_o *)pSVar41,MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRenderer),
           __this_00 != (UnityEngine_Transform_o *)0x0)) &&
          (__this_02 = (UnityEngine_SkinnedMeshRenderer_o *)
                       UnityEngine_Component__GetComponent_object_
                                 ((UnityEngine_Component_o *)__this_00,MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRenderer),
          __this_02 != (UnityEngine_SkinnedMeshRenderer_o *)0x0)) &&
         (value = UnityEngine_SkinnedMeshRenderer__get_sharedMesh(__this_02,(MethodInfo *)0x0),
         __this_01 != (UnityEngine_SkinnedMeshRenderer_o *)0x0)) {
        UnityEngine_SkinnedMeshRenderer__set_sharedMesh(__this_01,value,(MethodInfo *)0x0);
        pSVar41 = ((System_String_o *)((long)SVar32 + 0x150))->klass;
        if ((pSVar41 != (System_String_c *)0x0) &&
           (pUVar34 = (UnityEngine_Renderer_o *)
                      UnityEngine_GameObject__GetComponent_object_
                                ((UnityEngine_GameObject_o *)pSVar41,MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRenderer),
           pUVar34 != (UnityEngine_Renderer_o *)0x0)) {
          UnityEngine_Renderer__set_material(pUVar34,(UnityEngine_Material_o *)SVar35,(MethodInfo *)0x0);
          return extraout_RAX_05;
        }
      }
      goto label_042ec961;
    }
  }
  else {
    if (*(int *)((long)TypeInfo_ResourcePaths + 0xe4) == 0) goto label_042ec949;
label_042ec767:
    pSVar41 = ((System_String_o *)((long)SVar32 + 0x1c8))->klass;
    if (pSVar41 != (System_String_c *)0x0) goto label_042ec777;
label_042ec961:
    pUVar38 = (UnityEngine_Object_o *)il2cpp_runtime_helper_022b2c90();
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
    pUVar45 = (UnityEngine_Object_o *)pUVar38[5].fields.m_CachedPtr;
    if (g_data_057adea2 != '\0') goto label_042ec99f;
label_042ecb66:
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    pUVar45 = (UnityEngine_Object_o *)pUVar38[5].fields.m_CachedPtr;
    if (g_data_057adea2 == '\0') goto label_042ecb66;
label_042ec99f:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar14 = UnityEngine_Object__op_Inequality(pUVar45,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar14 == '\0') {
    pUVar29 = pUVar38[6].klass;
    if (g_data_057adea2 == '\0') goto label_042ecbcb;
label_042ec9df:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar45,(MethodInfo *)0x0);
    pUVar29 = pUVar38[6].klass;
    if (g_data_057adea2 != '\0') goto label_042ec9df;
label_042ecbcb:
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar14 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pUVar29,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar14 == '\0') {
    pUVar45 = pUVar38[6].monitor;
    if (g_data_057adea2 == '\0') goto label_042ecc29;
label_042eca18:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)pUVar29,(MethodInfo *)0x0);
    pUVar45 = pUVar38[6].monitor;
    if (g_data_057adea2 != '\0') goto label_042eca18;
label_042ecc29:
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar14 = UnityEngine_Object__op_Inequality(pUVar45,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar14 == '\0') {
    SVar28 = (System_String_Fields)pUVar38[6].fields.m_CachedPtr;
    if (g_data_057adea2 == '\0') goto label_042ecc87;
label_042eca51:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar45,(MethodInfo *)0x0);
    SVar28 = (System_String_Fields)pUVar38[6].fields.m_CachedPtr;
    if (g_data_057adea2 != '\0') goto label_042eca51;
label_042ecc87:
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  SVar32 = SVar28;
  bVar14 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)SVar28,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pMVar43 = extraout_RDX_07;
  if ((char)bVar14 != '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)SVar28,(MethodInfo *)0x0);
    pMVar43 = extraout_RDX_08;
    SVar32 = SVar28;
  }
  pvVar7 = pUVar38[0xf].monitor;
  if (pvVar7 != (void *)0x0) {
    if (g_data_057adec2 == '\0') {
      il2cpp_runtime_helper_023445d0(&"Misc/AOTTG_HERO_3DMG");
      il2cpp_runtime_helper_023445d0(&"Misc/aottg_hero_AHSS_3dmg");
      SVar32 = (System_String_Fields)&"Misc/aottg_hero_APG_3dmg";
      il2cpp_runtime_helper_023445d0();
      g_data_057adec2 = '\x01';
      pMVar43 = extraout_RDX_09;
    }
    lVar42 = *(long *)((long)pvVar7 + 0x10);
    if (lVar42 != 0) {
      iVar3 = *(int *)(lVar42 + 0x1d0);
      if (iVar3 == 3) {
        puVar39 = &"Misc/aottg_hero_APG_3dmg";
      }
      else {
        puVar39 = &"Misc/AOTTG_HERO_3DMG";
        if (iVar3 == 1) {
          puVar39 = &"Misc/aottg_hero_AHSS_3dmg";
        }
      }
      pSVar26 = (System_String_o *)*puVar39;
      if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pMVar43 = extraout_RDX_10;
      }
      method_21 = (MethodInfo *)0x0;
      pUVar18 = Characters_HumanSetupMaterials__GetPartMaterial(pSVar26,0,pMVar43);
      if (*(int *)((long)TypeInfo_ResourcePaths + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      SVar32 = TypeInfo_ResourcePaths;
      if (pUVar38[0xf].klass != (UnityEngine_Object_c *)0x0) {
        pCVar30 = (Characters_HumanSetup_o *)&pUVar38[5].fields;
        pSVar26 = *(System_String_o **)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
        pSVar17 = Characters_HumanSetupMeshes__Get3dmgMesh
                            ((Characters_HumanSetupMeshes_o *)pUVar38[0xf].klass,method_21);
        if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pIVar27 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                            (pSVar26,pSVar17,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
        pUVar38[5].fields.m_CachedPtr = (intptr_t)pIVar27;
        il2cpp_runtime_helper_022b4080(pCVar30,pIVar27);
        Characters_HumanSetup__AttachToMount
                  (pCVar30,(UnityEngine_GameObject_o *)pUVar38[5].fields.m_CachedPtr,
                   (UnityEngine_GameObject_o *)pUVar38[1].fields.m_CachedPtr,0,method);
        SVar32 = (System_String_Fields)pUVar38[5].fields.m_CachedPtr;
        if ((SVar32 != (System_String_Fields)0x0) &&
           (__this_03 = (System_String_o **)
                        UnityEngine_GameObject__GetComponentInChildren_object_
                                  ((UnityEngine_GameObject_o *)SVar32,MethodInfo_Renderer_GetComponentInChildren_Renderer),
           (System_String_Fields)__this_03 != (System_String_Fields)0x0)) {
          UnityEngine_Renderer__set_material((UnityEngine_Renderer_o *)__this_03,pUVar18,(MethodInfo *)0x0);
          pUVar29 = pUVar38[0xf].klass;
          SVar32 = (System_String_Fields)__this_03;
          if (pUVar29 != (UnityEngine_Object_c *)0x0) {
            if (g_data_057adeb2 == '\0') {
              __this_03 = &"3dmg_belt";
              il2cpp_runtime_helper_023445d0();
              g_data_057adeb2 = '\x01';
            }
            pcVar11 = (pUVar29->_1).name;
            SVar32 = (System_String_Fields)__this_03;
            if (pcVar11 != (char *)0x0) {
              if ((*(uint *)(pcVar11 + 0x1d0) | 2) == 3) {
                pSVar26 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
                pSVar17 = pSVar26;
              }
              else {
                pSVar17 = System_String__Concat_3ae5ba0
                                    ((pUVar29->_1).byval_arg.data,"3dmg_belt",(MethodInfo *)0x0);
                pSVar26 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
              }
              bVar14 = System_String__op_Inequality(pSVar17,pSVar26,(MethodInfo *)0x0);
              pUVar40 = (UnityEngine_Material_o *)CONCAT44(extraout_var_02,bVar14);
              pMVar43 = extraout_RDX_11;
              if ((char)bVar14 != '\0') {
                if (*(int *)((long)TypeInfo_ResourcePaths + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pUVar45 = pUVar38 + 6;
                pSVar26 = *(System_String_o **)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
                if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pUVar29 = (UnityEngine_Object_c *)
                          ApplicationManagers_ResourceManager__InstantiateAsset_object_
                                    (pSVar26,pSVar17,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
                pUVar45->klass = pUVar29;
                il2cpp_runtime_helper_022b4080(pUVar45);
                SVar32 = (System_String_Fields)pUVar45->klass;
                if ((SVar32 == (System_String_Fields)0x0) ||
                   (pCVar30 = (Characters_HumanSetup_o *)
                              UnityEngine_GameObject__GetComponent_object_
                                        ((UnityEngine_GameObject_o *)SVar32,(MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer
                                        ), pCVar30 == (Characters_HumanSetup_o *)0x0)) goto label_042ed0e9;
                UnityEngine_Renderer__set_material
                          ((UnityEngine_Renderer_o *)pCVar30,pUVar18,(MethodInfo *)0x0);
                Characters_HumanSetup__AttachToMount
                          (pCVar30,(UnityEngine_GameObject_o *)pUVar38[6].klass,
                           (UnityEngine_GameObject_o *)pUVar38[1].fields.m_CachedPtr,0,method);
                pUVar40 = extraout_RAX_06;
                pMVar43 = extraout_RDX_12;
              }
              if (*(int *)&pUVar38[0x13].monitor == 3) {
                return pUVar40;
              }
              if (*(int *)((long)TypeInfo_ResourcePaths + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
                pMVar43 = extraout_RDX_13;
              }
              SVar32 = TypeInfo_ResourcePaths;
              if (pUVar38[0xf].klass != (UnityEngine_Object_c *)0x0) {
                ppvVar1 = &pUVar38[6].monitor;
                pSVar26 = *(System_String_o **)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
                pSVar17 = Characters_HumanSetupMeshes__GetGasMesh
                                    ((Characters_HumanSetupMeshes_o *)pUVar38[0xf].klass,1,pMVar43);
                if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pIVar27 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                                    (pSVar26,pSVar17,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
                *ppvVar1 = pIVar27;
                il2cpp_runtime_helper_022b4080(ppvVar1);
                SVar32 = (System_String_Fields)*ppvVar1;
                if ((SVar32 != (System_String_Fields)0x0) &&
                   (pCVar30 = (Characters_HumanSetup_o *)
                              UnityEngine_GameObject__GetComponent_object_
                                        ((UnityEngine_GameObject_o *)SVar32,(MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer
                                        ), pCVar30 != (Characters_HumanSetup_o *)0x0)) {
                  UnityEngine_Renderer__set_material
                            ((UnityEngine_Renderer_o *)pCVar30,pUVar18,(MethodInfo *)0x0);
                  Characters_HumanSetup__AttachToMount
                            (pCVar30,pUVar38[6].monitor,
                             (UnityEngine_GameObject_o *)
                             (&pUVar38[2].klass)[(ulong)(*(int *)&pUVar38[0x13].monitor == 1) * 2],0,method);
                  pMVar43 = extraout_RDX_14;
                  if (*(int *)((long)TypeInfo_ResourcePaths + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                    pMVar43 = extraout_RDX_15;
                  }
                  SVar32 = TypeInfo_ResourcePaths;
                  if (pUVar38[0xf].klass != (UnityEngine_Object_c *)0x0) {
                    pUVar2 = &pUVar38[6].fields;
                    pSVar26 = *(System_String_o **)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
                    pSVar17 = Characters_HumanSetupMeshes__GetGasMesh
                                        ((Characters_HumanSetupMeshes_o *)pUVar38[0xf].klass,0,pMVar43);
                    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pIVar27 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                                        (pSVar26,pSVar17,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
                    pUVar2->m_CachedPtr = (intptr_t)pIVar27;
                    il2cpp_runtime_helper_022b4080(pUVar2);
                    SVar32 = (System_String_Fields)pUVar2->m_CachedPtr;
                    if ((SVar32 != (System_String_Fields)0x0) &&
                       (pCVar30 = (Characters_HumanSetup_o *)
                                  UnityEngine_GameObject__GetComponent_object_
                                            ((UnityEngine_GameObject_o *)SVar32,
                                             (MethodInfo_255A0F0 *)MethodInfo_Renderer_GetComponent_Renderer),
                       pCVar30 != (Characters_HumanSetup_o *)0x0)) {
                      UnityEngine_Renderer__set_material
                                ((UnityEngine_Renderer_o *)pCVar30,pUVar18,(MethodInfo *)0x0);
                      Characters_HumanSetup__AttachToMount
                                (pCVar30,(UnityEngine_GameObject_o *)pUVar38[6].fields.m_CachedPtr,
                                 (&pUVar38[2].monitor)[(ulong)(*(int *)&pUVar38[0x13].monitor == 1) * 2],0,
                                 method);
                      return extraout_RAX_07;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
label_042ed0e9:
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
    pUVar38 = *(UnityEngine_Object_o **)((long)SVar32 + 0xb8);
    if (g_data_057adea2 != '\0') goto label_042ed11f;
label_042ed2a1:
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    pUVar38 = *(UnityEngine_Object_o **)((long)SVar32 + 0xb8);
    if (g_data_057adea2 == '\0') goto label_042ed2a1;
label_042ed11f:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar14 = UnityEngine_Object__op_Inequality(pUVar38,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar14 == '\0') {
    pSVar26 = *(System_String_o **)((long)SVar32 + 0xc0);
    if (g_data_057adea2 == '\0') goto label_042ed304;
label_042ed15e:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar38,(MethodInfo *)0x0);
    pSVar26 = *(System_String_o **)((long)SVar32 + 0xc0);
    if (g_data_057adea2 != '\0') goto label_042ed15e;
label_042ed304:
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar17 = pSVar26;
  bVar14 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pSVar26,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pMVar43 = extraout_RDX_16;
  if ((char)bVar14 != '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)pSVar26,(MethodInfo *)0x0);
    pMVar43 = extraout_RDX_17;
    pSVar17 = pSVar26;
  }
  lVar42 = *(long *)((long)SVar32 + 0x170);
  if (lVar42 != 0) {
    if (g_data_057adec2 == '\0') {
      il2cpp_runtime_helper_023445d0(&"Misc/AOTTG_HERO_3DMG");
      il2cpp_runtime_helper_023445d0(&"Misc/aottg_hero_AHSS_3dmg");
      pSVar17 = (System_String_o *)&"Misc/aottg_hero_APG_3dmg";
      il2cpp_runtime_helper_023445d0();
      g_data_057adec2 = '\x01';
      pMVar43 = extraout_RDX_18;
    }
    lVar42 = *(long *)(lVar42 + 0x10);
    if (lVar42 != 0) {
      iVar3 = *(int *)(lVar42 + 0x1d0);
      if (iVar3 == 3) {
        puVar39 = &"Misc/aottg_hero_APG_3dmg";
      }
      else {
        puVar39 = &"Misc/AOTTG_HERO_3DMG";
        if (iVar3 == 1) {
          puVar39 = &"Misc/aottg_hero_AHSS_3dmg";
        }
      }
      pSVar17 = (System_String_o *)*puVar39;
      iVar3 = *(int *)((long)SVar32 + 0x1d0);
      if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pMVar43 = extraout_RDX_19;
      }
      pUVar18 = Characters_HumanSetupMaterials__GetPartMaterial(pSVar17,(uint)(iVar3 == 3),pMVar43);
      if ((*(long *)((long)SVar32 + 0x1c8) != 0) &&
         (lVar42 = *(long *)(*(long *)((long)SVar32 + 0x1c8) + 0xe0), lVar42 != 0)) {
        pSVar26 = *(System_String_o **)(lVar42 + 0x18);
        if (*(int *)(TypeInfo_CharacterEffectPresets + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        iVar16 = PatreonEffects_CharacterEffectPresets__ParseOrDefault(pSVar26,(MethodInfo *)0x0);
        pSVar17 = (System_String_o *)0x0;
        if (*(Characters_HumanSetupMeshes_o **)((long)SVar32 + 0x168) != (Characters_HumanSetupMeshes_o *)0x0)
        {
          pCVar30 = (Characters_HumanSetup_o *)
                    Characters_HumanSetupMeshes__GetWeaponMesh
                              (*(Characters_HumanSetupMeshes_o **)((long)SVar32 + 0x168),1,method_20);
          bVar14 = System_String__op_Inequality
                             ((System_String_o *)pCVar30,
                              (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
          pMVar43 = extraout_RDX_20;
          if ((char)bVar14 == '\0') goto label_042ed58b;
          if (*(int *)((long)TypeInfo_ResourcePaths + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar26 = (System_String_o *)((long)SVar32 + 0xb8);
          pSVar17 = *(System_String_o **)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
          if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar41 = (System_String_c *)
                    ApplicationManagers_ResourceManager__InstantiateAsset_object_
                              (pSVar17,(System_String_o *)pCVar30,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
          pSVar26->klass = pSVar41;
          pSVar17 = pSVar26;
          il2cpp_runtime_helper_022b4080();
          if (pCVar30 != (Characters_HumanSetup_o *)0x0) {
            bVar14 = System_String__Contains((System_String_o *)pCVar30,"thunderspear",(MethodInfo *)0x0);
            if ((char)bVar14 == '\0') {
              Characters_HumanSetup__AttachToMount
                        (pCVar30,(UnityEngine_GameObject_o *)pSVar26->klass,
                         *(UnityEngine_GameObject_o **)((long)SVar32 + 0x50),0,method);
              pSVar17 = *(System_String_o **)((long)SVar32 + 0xb8);
              if ((pSVar17 == (System_String_o *)0x0) ||
                 (pUVar34 = (UnityEngine_Renderer_o *)
                            UnityEngine_GameObject__GetComponentInChildren_object_
                                      ((UnityEngine_GameObject_o *)pSVar17,MethodInfo_Renderer_GetComponentInChildren_Renderer),
                 pUVar34 == (UnityEngine_Renderer_o *)0x0)) goto label_042ed74f;
              UnityEngine_Renderer__set_material(pUVar34,pUVar18,(MethodInfo *)0x0);
            }
            else {
              Characters_HumanSetup__AttachToMount
                        (pCVar30,(UnityEngine_GameObject_o *)pSVar26->klass,
                         *(UnityEngine_GameObject_o **)((long)SVar32 + 0x60),0,method);
            }
            Characters_HumanSetup__ApplyCharacterEffectToPart
                      ((Characters_HumanSetup_o *)SVar32,*(UnityEngine_GameObject_o **)((long)SVar32 + 0xb8),
                       iVar16,0,method);
            pSVar17 = (System_String_o *)0x0;
            if (*(UnityEngine_GameObject_o **)((long)SVar32 + 0xb8) != (UnityEngine_GameObject_o *)0x0) {
              pUVar38 = (UnityEngine_Object_o *)
                        UnityEngine_GameObject__GetComponentInChildren_object_
                                  (*(UnityEngine_GameObject_o **)((long)SVar32 + 0xb8),MethodInfo_MeleeWeaponTrail_GetComponentInChildren_MeleeWeaponTrail);
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              bVar14 = UnityEngine_Object__op_Inequality
                                 (pUVar38,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              pMVar43 = extraout_RDX_21;
              if ((char)bVar14 == '\0') {
label_042ed58b:
                pSVar17 = (System_String_o *)0x0;
                if (*(Characters_HumanSetupMeshes_o **)((long)SVar32 + 0x168) !=
                    (Characters_HumanSetupMeshes_o *)0x0) {
                  pCVar30 = (Characters_HumanSetup_o *)
                            Characters_HumanSetupMeshes__GetWeaponMesh
                                      (*(Characters_HumanSetupMeshes_o **)((long)SVar32 + 0x168),0,pMVar43);
                  bVar14 = System_String__op_Inequality
                                     ((System_String_o *)pCVar30,
                                      (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                                      (MethodInfo *)0x0);
                  if ((char)bVar14 == '\0') {
                    return (UnityEngine_Material_o *)CONCAT44(extraout_var_03,bVar14);
                  }
                  if (*(int *)((long)TypeInfo_ResourcePaths + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pSVar26 = (System_String_o *)((long)SVar32 + 0xc0);
                  pSVar17 = *(System_String_o **)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
                  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pSVar41 = (System_String_c *)
                            ApplicationManagers_ResourceManager__InstantiateAsset_object_
                                      (pSVar17,(System_String_o *)pCVar30,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
                  pSVar26->klass = pSVar41;
                  pSVar17 = pSVar26;
                  il2cpp_runtime_helper_022b4080();
                  if (pCVar30 != (Characters_HumanSetup_o *)0x0) {
                    bVar14 = System_String__Contains
                                       ((System_String_o *)pCVar30,"thunderspear",(MethodInfo *)0x0);
                    if ((char)bVar14 == '\0') {
                      Characters_HumanSetup__AttachToMount
                                (pCVar30,(UnityEngine_GameObject_o *)pSVar26->klass,
                                 *(UnityEngine_GameObject_o **)((long)SVar32 + 0x58),0,method);
                      pSVar17 = *(System_String_o **)((long)SVar32 + 0xc0);
                      if ((pSVar17 == (System_String_o *)0x0) ||
                         (pUVar34 = (UnityEngine_Renderer_o *)
                                    UnityEngine_GameObject__GetComponentInChildren_object_
                                              ((UnityEngine_GameObject_o *)pSVar17,MethodInfo_Renderer_GetComponentInChildren_Renderer),
                         pUVar34 == (UnityEngine_Renderer_o *)0x0)) goto label_042ed74f;
                      UnityEngine_Renderer__set_material(pUVar34,pUVar18,(MethodInfo *)0x0);
                    }
                    else {
                      Characters_HumanSetup__AttachToMount
                                (pCVar30,(UnityEngine_GameObject_o *)pSVar26->klass,
                                 *(UnityEngine_GameObject_o **)((long)SVar32 + 0x68),0,method);
                    }
                    Characters_HumanSetup__ApplyCharacterEffectToPart
                              ((Characters_HumanSetup_o *)SVar32,
                               *(UnityEngine_GameObject_o **)((long)SVar32 + 0xc0),iVar16,0,method);
                    pSVar17 = (System_String_o *)0x0;
                    if (*(UnityEngine_GameObject_o **)((long)SVar32 + 0xc0) != (UnityEngine_GameObject_o *)0x0
                       ) {
                      pUVar38 = (UnityEngine_Object_o *)
                                UnityEngine_GameObject__GetComponentInChildren_object_
                                          (*(UnityEngine_GameObject_o **)((long)SVar32 + 0xc0),MethodInfo_MeleeWeaponTrail_GetComponentInChildren_MeleeWeaponTrail);
                      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      bVar14 = UnityEngine_Object__op_Inequality
                                         (pUVar38,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                      if ((char)bVar14 == '\0') {
                        return (UnityEngine_Material_o *)CONCAT44(extraout_var_04,bVar14);
                      }
                      pSVar17 = (System_String_o *)0x0;
                      if (pSVar26->klass != (System_String_c *)0x0) {
                        pIVar27 = UnityEngine_GameObject__GetComponentInChildren_object_
                                            ((UnityEngine_GameObject_o *)pSVar26->klass,MethodInfo_MeleeWeaponTrail_GetComponentInChildren_MeleeWeaponTrail);
                        pSVar17 = (System_String_o *)((long)SVar32 + 0x180);
                        *(Il2CppObject **)((long)SVar32 + 0x180) = pIVar27;
                        il2cpp_runtime_helper_022b4080();
                        pUVar18 = *(UnityEngine_Material_o **)((long)SVar32 + 0x180);
                        if (pUVar18 != (UnityEngine_Material_o *)0x0) {
                          *(undefined1 *)&pUVar18[1].monitor = 0;
                          return pUVar18;
                        }
                      }
                    }
                  }
                }
              }
              else {
                pSVar17 = (System_String_o *)0x0;
                if (pSVar26->klass != (System_String_c *)0x0) {
                  pIVar27 = UnityEngine_GameObject__GetComponentInChildren_object_
                                      ((UnityEngine_GameObject_o *)pSVar26->klass,MethodInfo_MeleeWeaponTrail_GetComponentInChildren_MeleeWeaponTrail);
                  pSVar17 = (System_String_o *)((long)SVar32 + 0x178);
                  *(Il2CppObject **)((long)SVar32 + 0x178) = pIVar27;
                  il2cpp_runtime_helper_022b4080();
                  if (*(long *)((long)SVar32 + 0x178) != 0) {
                    *(undefined1 *)(*(long *)((long)SVar32 + 0x178) + 0x20) = 0;
                    pMVar43 = extraout_RDX_22;
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
label_042ed74f:
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
    pUVar38 = pSVar17[0x10].monitor;
    if (g_data_057adea2 != '\0') goto label_042ed78d;
label_042eda29:
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    pUVar38 = pSVar17[0x10].monitor;
    if (g_data_057adea2 == '\0') goto label_042eda29;
label_042ed78d:
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar45 = pUVar38;
  bVar14 = UnityEngine_Object__op_Inequality(pUVar38,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar14 != '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar38,(MethodInfo *)0x0);
    pUVar45 = pUVar38;
  }
  if ((pSVar17[0x13].klass == (System_String_c *)0x0) ||
     (pvVar7 = ((pSVar17[0x13].klass)->_1).properties, pvVar7 == (void *)0x0)) goto label_042edaae;
  pSVar26 = *(System_String_o **)((long)pvVar7 + 0x18);
  pUVar45 = (UnityEngine_Object_o *)0x0;
  if (pSVar26 == (System_String_o *)0x0) goto label_042edaae;
  pSVar26 = System_String__Substring(pSVar26,4,(MethodInfo *)0x0);
  bVar14 = System_String__op_Inequality(pSVar26,(System_String_o *)"None",(MethodInfo *)0x0);
  if ((char)bVar14 == '\0') {
    return (UnityEngine_Material_o *)CONCAT44(extraout_var_05,bVar14);
  }
  if (*(int *)((long)TypeInfo_ResourcePaths + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar37 = *(System_String_o **)(*(long *)((long)TypeInfo_ResourcePaths + 0xb8) + 8);
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
  pCVar30 = (Characters_HumanSetup_o *)&pSVar17[0x10].monitor;
  pSVar26 = System_String__Concat_3af7150
                      ((System_String_o *)**(undefined8 **)(TypeInfo_HumanSetupPrefabs + 0xb8),"Back/Back",pSVar26,
                       (MethodInfo *)0x0);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar27 = ApplicationManagers_ResourceManager__InstantiateAsset_object_(pSVar37,pSVar26,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
  pSVar17[0x10].monitor = pIVar27;
  il2cpp_runtime_helper_022b4080(pCVar30,pIVar27);
  Characters_HumanSetup__AttachToMount
            (pCVar30,pSVar17[0x10].monitor,(UnityEngine_GameObject_o *)pSVar17[4].fields,1,method);
  pUVar45 = (UnityEngine_Object_o *)0x0;
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
      pUVar29 = pUVar45[0x11].klass;
    }
    else {
      pUVar29 = pUVar45[0x11].klass;
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
    pUVar46 = pUVar29;
    bVar14 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pUVar29,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar14 != '\0') {
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)pUVar29,(MethodInfo *)0x0);
      pUVar46 = pUVar29;
    }
    if ((pUVar45[0x13].klass != (UnityEngine_Object_c *)0x0) &&
       (pvVar7 = ((pUVar45[0x13].klass)->_1).fields, pvVar7 != (void *)0x0)) {
      pSVar26 = *(System_String_o **)((long)pvVar7 + 0x18);
      pUVar46 = (UnityEngine_Object_c *)0x0;
      if (pSVar26 != (System_String_o *)0x0) {
        pSVar26 = System_String__Substring(pSVar26,3,(MethodInfo *)0x0);
        bVar14 = System_String__op_Inequality(pSVar26,(System_String_o *)"None",(MethodInfo *)0x0);
        if ((char)bVar14 != '\0') {
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
          pCVar30 = (Characters_HumanSetup_o *)(pUVar45 + 0x11);
          pSVar26 = System_String__Concat_3af7150
                              ((System_String_o *)**(undefined8 **)(TypeInfo_HumanSetupPrefabs + 0xb8),"Hat/Hat",pSVar26,
                               (MethodInfo *)0x0);
          if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pUVar29 = (UnityEngine_Object_c *)
                    ApplicationManagers_ResourceManager__InstantiateAsset_object_
                              (pSVar17,pSVar26,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
          pUVar45[0x11].klass = pUVar29;
          il2cpp_runtime_helper_022b4080(pCVar30,pUVar29);
          Characters_HumanSetup__AttachToMount
                    (pCVar30,(UnityEngine_GameObject_o *)pUVar45[0x11].klass,pUVar45[5].monitor,1,method);
          return extraout_RAX_08;
        }
        return (UnityEngine_Material_o *)CONCAT44(extraout_var_08,bVar14);
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
      pUVar38 = (UnityEngine_Object_o *)pUVar46[1]._1.namespaze;
    }
    else {
      pUVar38 = (UnityEngine_Object_o *)pUVar46[1]._1.namespaze;
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
    pUVar45 = (UnityEngine_Object_o *)0x0;
    bVar14 = UnityEngine_Object__op_Inequality(pUVar38,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar14 != '\0') {
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar45 = (UnityEngine_Object_o *)0x0;
      UnityEngine_Object__Destroy_4e01c60(pUVar38,(MethodInfo *)0x0);
    }
    pIVar9 = pUVar46[1]._1.declaringType;
    if (((pIVar9 != (Il2CppClass *)0x0) && (pvVar7 = (pIVar9->_1).events, pvVar7 != (void *)0x0)) &&
       (pSVar26 = *(System_String_o **)((long)pvVar7 + 0x18), pSVar26 != (System_String_o *)0x0)) {
      pSVar26 = System_String__Substring(pSVar26,4,(MethodInfo *)0x0);
      bVar14 = System_String__op_Inequality(pSVar26,(System_String_o *)"None",(MethodInfo *)0x0);
      if ((char)bVar14 == '\0') {
        return (UnityEngine_Material_o *)CONCAT44(extraout_var_09,bVar14);
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
      pCVar30 = (Characters_HumanSetup_o *)&pUVar46[1]._1.namespaze;
      pSVar26 = System_String__Concat_3af7150
                          ((System_String_o *)**(undefined8 **)(TypeInfo_HumanSetupPrefabs + 0xb8),"Head/Head",pSVar26,
                           (MethodInfo *)0x0);
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar27 = ApplicationManagers_ResourceManager__InstantiateAsset_object_(pSVar17,pSVar26,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
      pUVar46[1]._1.namespaze = (char *)pIVar27;
      il2cpp_runtime_helper_022b4080(pCVar30,pIVar27);
      Characters_HumanSetup__AttachToMount
                (pCVar30,(UnityEngine_GameObject_o *)pUVar46[1]._1.namespaze,
                 (UnityEngine_GameObject_o *)(pUVar46->_1).klass,1,method);
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
    bVar14 = UnityEngine_Object__op_Inequality(pUVar45,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar14 == '\0') {
      return (UnityEngine_Material_o *)CONCAT44(extraout_var_10,bVar14);
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar45,(MethodInfo *)0x0);
    return extraout_RAX_10;
  }
  pUVar38 = (UnityEngine_Object_o *)
            UnityEngine_GameObject__GetComponentInChildren_object_(pSVar17[0x10].monitor,MethodInfo_EZSoftBone_GetComponentInChildren_EZSoftBone);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar45 = pUVar38;
  bVar14 = UnityEngine_Object__op_Inequality(pUVar38,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pUVar18 = (UnityEngine_Material_o *)CONCAT44(extraout_var_06,bVar14);
  if ((char)bVar14 != '\0') {
    if (pUVar38 == (UnityEngine_Object_o *)0x0) goto label_042edaae;
    pUVar29 = pUVar38[7].klass;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar14 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pUVar29,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    pUVar18 = (UnityEngine_Material_o *)CONCAT44(extraout_var_07,bVar14);
    if ((char)bVar14 != '\0') {
      pUVar29 = (UnityEngine_Object_c *)
                UnityEngine_Component__get_transform((UnityEngine_Component_o *)pSVar17,(MethodInfo *)0x0);
      pUVar38[7].klass = pUVar29;
      pUVar18 = (UnityEngine_Material_o *)il2cpp_runtime_helper_022b4080(pUVar38 + 7,pUVar29);
      return pUVar18;
    }
  }
  return pUVar18;
}


// Characters.HumanSetupMaterials$$GetPartMaterial
// il2cpp: UnityEngine_Material_o* Characters_HumanSetupMaterials__GetPartMaterial (System_String_o* texture, bool isOneSided, const MethodInfo* method);
// 0x42ee120

UnityEngine_Material_o *
Characters_HumanSetupMaterials__GetPartMaterial
          (System_String_o *texture,bool_conflict isOneSided,MethodInfo *method)

{
  uint uVar1;
  char *pcVar2;
  Il2CppMethodPointer pIVar3;
  UnityEngine_Object_o *x;
  Utility_Color255_c *reference;
  void *pvVar4;
  code *vtableDispatch;
  System_String_Fields SVar5;
  char cVar6;
  bool_conflict bVar7;
  int32_t iVar8;
  int32_t type;
  System_String_c *pSVar9;
  undefined8 *puVar10;
  System_String_o *pSVar11;
  UnityEngine_Transform_o *pUVar12;
  UnityEngine_Transform_o *p;
  UnityEngine_Transform_o *__this;
  UnityEngine_Material_o *extraout_RAX;
  UnityEngine_Material_o *extraout_RAX_00;
  undefined8 *puVar13;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  long lVar14;
  System_Object_array *pSVar15;
  Utility_Color255_o *x_00;
  Utility_Color255_o *x_01;
  Utility_Color255_o *pUVar16;
  Utility_Color255_o *pUVar17;
  UnityEngine_Texture_o *value;
  UnityEngine_Material_o *pUVar18;
  undefined4 extraout_var_01;
  System_String_o *pSVar19;
  UnityEngine_GameObject_o *pUVar20;
  ulong uVar21;
  undefined **ppuVar22;
  System_String_c *x_02;
  Photon_Realtime_Player_o *player;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  UnityEngine_Material_o *extraout_RAX_01;
  undefined4 uVar23;
  int iVar24;
  System_String_c **in_RCX;
  int32_t type_00;
  System_String_c *__this_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar25;
  System_String_c *unaff_RBX;
  System_String_c *pSVar26;
  ulong uVar27;
  undefined4 in_register_00000034;
  long *plVar28;
  System_String_o **ppSVar29;
  System_String_c *pSVar30;
  Utility_Color255_o *x_03;
  System_String_c **ppSVar31;
  System_String_c **str1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar32;
  MethodInfo *in_R8;
  long *plVar33;
  long *unaff_R13;
  System_String_o *unaff_R14;
  float fVar34;
  float fVar36;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar35 [16];
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  float fVar37;
  UnityEngine_Color_o UVar38;
  UnityEngine_Color_o value_00;
  UnityEngine_Color_o value_01;
  UnityEngine_Color_o value_02;
  Utility_Color255_o *pUStack_270;
  System_String_c *pSStack_268;
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
  float fStack_21c;
  float fStack_218;
  undefined4 uStack_214;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  undefined1 auStack_1f8 [8];
  float fStack_1f0;
  float fStack_1ec;
  undefined1 auStack_1e8 [8];
  float fStack_1e0;
  float fStack_1dc;
  undefined1 auStack_1d0 [8];
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
  float fStack_19c;
  float fStack_198;
  System_Object_array *pSStack_190;
  undefined1 auStack_188 [8];
  float fStack_180;
  float fStack_17c;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 auStack_168 [16];
  undefined1 auStack_158 [16];
  undefined1 auStack_148 [16];
  undefined1 auStack_138 [16];
  undefined1 auStack_128 [16];
  undefined1 auStack_118 [16];
  undefined8 uStack_108;
  undefined8 uStack_100;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  System_String_c *pSStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  System_String_o *pSStack_b8;
  System_String_c *pSStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  System_String_c *pSStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  System_String_c *pSStack_80;
  UnityEngine_Transform_o *pUStack_78;
  System_String_c *pSStack_70;
  System_String_c *pSStack_68;
  long *plStack_60;
  System_String_o *pSStack_58;
  System_String_o *pSStack_50;
  UnityEngine_Transform_o *pUStack_48;
  System_String_c *pSStack_40;
  undefined8 extraout_XMM0_Qb_01;
  
  pSVar30 = (System_String_c *)CONCAT44(in_register_00000034,isOneSided);
  __this = (UnityEngine_Transform_o *)(ulong)(uint)isOneSided;
  if (g_data_057adea6 == '\0') {
    pSStack_40 = (System_String_c *)0x42ee176;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    pSStack_40 = (System_String_c *)0x42ee182;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Material_get_Item);
    pSStack_40 = (System_String_c *)0x42ee18e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    pSStack_40 = (System_String_c *)0x42ee19a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupMaterials);
    pSStack_40 = (System_String_c *)0x42ee1a6;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Material_InstantiateAsset_Material);
    pSStack_40 = (System_String_c *)0x42ee1b2;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    pSStack_40 = (System_String_c *)0x42ee1be;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    pSStack_40 = (System_String_c *)0x42ee1ca;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
    pSStack_40 = (System_String_c *)0x42ee1d6;
    il2cpp_runtime_helper_023445d0(&"HumanPartMat");
    pSStack_40 = (System_String_c *)0x42ee1e2;
    il2cpp_runtime_helper_023445d0(&"HumanPart1SMat");
    g_data_057adea6 = '\x01';
    if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) != 0) goto label_042ee151;
label_042ee201:
    pSStack_40 = (System_String_c *)0x42ee206;
    il2cpp_runtime_helper_02337ed0();
    pSVar32 = *(System_Collections_Generic_Dictionary_object__object__o **)
               (*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 8);
    if (pSVar32 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_042ee3f7;
label_042ee21e:
    pSStack_40 = (System_String_c *)0x42ee230;
    pSVar30 = (System_String_c *)texture;
    bVar7 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar32,(Il2CppObject *)texture,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar7 != '\0') {
label_042ee3b1:
      if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
        pSStack_40 = (System_String_c *)0x42ee3c3;
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar32 = *(System_Collections_Generic_Dictionary_object__object__o **)
                 (*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 8);
      if (pSVar32 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        pUVar18 = (UnityEngine_Material_o *)
                  System_Collections_Generic_Dictionary_object__object___get_Item
                            (pSVar32,(Il2CppObject *)texture,MethodInfo_Material_get_Item);
        return pUVar18;
      }
      goto label_042ee3f7;
    }
    unaff_R13 = &TypeInfo_ResourcePaths;
    if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
      pSStack_40 = (System_String_c *)0x42ee251;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar11 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
    if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
      pSStack_40 = (System_String_c *)0x42ee28b;
      il2cpp_runtime_helper_02337ed0();
      pSVar19 = *(System_String_o **)(*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 0x28);
      if ((char)isOneSided != '\0') goto label_042ee27d;
label_042ee29f:
      puVar10 = &"HumanPartMat";
    }
    else {
      pSVar19 = *(System_String_o **)(*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 0x28);
      if ((char)isOneSided == '\0') goto label_042ee29f;
label_042ee27d:
      puVar10 = &"HumanPart1SMat";
    }
    pSStack_40 = (System_String_c *)0x42ee2b0;
    pSVar19 = System_String__Concat_3ae5ba0(pSVar19,(System_String_o *)*puVar10,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      pSStack_40 = (System_String_c *)0x42ee2cb;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_40 = (System_String_c *)0x42ee2e5;
    __this = (UnityEngine_Transform_o *)
             ApplicationManagers_ResourceManager__InstantiateAsset_object_(pSVar11,pSVar19,1,MethodInfo_Material_InstantiateAsset_Material);
    if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
      pSStack_40 = (System_String_c *)0x42ee2fa;
      il2cpp_runtime_helper_02337ed0();
    }
    unaff_R14 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
    if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
      pSStack_40 = (System_String_c *)0x42ee31b;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_40 = (System_String_c *)0x42ee334;
    unaff_RBX = (System_String_c *)
                System_String__Concat_3ae5ba0
                          (*(System_String_o **)(*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 0x20),texture,
                           (MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      pSStack_40 = (System_String_c *)0x42ee34f;
      il2cpp_runtime_helper_02337ed0();
    }
    in_RCX = (System_String_c **)0x0;
    pSStack_40 = (System_String_c *)0x42ee35e;
    pSVar30 = unaff_RBX;
    pSVar9 = (System_String_c *)
             ApplicationManagers_ResourceManager__LoadAsset
                       (unaff_R14,(System_String_o *)unaff_RBX,0,(MethodInfo *)0x0);
    if ((pSVar9 == (System_String_c *)0x0) ||
       (in_RCX = &TypeInfo_Texture2D, pSVar30 = TypeInfo_Texture2D, (pSVar9->_1).image == TypeInfo_Texture2D)) {
      if (__this != (UnityEngine_Transform_o *)0x0) {
        pSStack_40 = (System_String_c *)0x42ee388;
        UnityEngine_Material__set_mainTexture
                  ((UnityEngine_Material_o *)__this,(UnityEngine_Texture_o *)pSVar9,(MethodInfo *)0x0);
        pSVar32 = *(System_Collections_Generic_Dictionary_object__object__o **)
                   (*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 8);
        pSVar30 = pSVar9;
        if (pSVar32 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          pSStack_40 = (System_String_c *)0x42ee3b1;
          in_RCX = (System_String_c **)MethodInfo_Void_set_Item;
          pSVar30 = (System_String_c *)texture;
          System_Collections_Generic_Dictionary_object__object___set_Item
                    (pSVar32,(Il2CppObject *)texture,(Il2CppObject *)__this,MethodInfo_Void_set_Item);
          goto label_042ee3b1;
        }
      }
      goto label_042ee3f7;
    }
  }
  else {
    if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) goto label_042ee201;
label_042ee151:
    pSVar32 = *(System_Collections_Generic_Dictionary_object__object__o **)
               (*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 8);
    if (pSVar32 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_042ee21e;
label_042ee3f7:
    pSStack_40 = (System_String_c *)0x42ee3fc;
    pSVar9 = (System_String_c *)il2cpp_runtime_helper_022b2c90();
  }
  plVar33 = &TypeInfo_HumanSetupMaterials;
  pSStack_40 = (System_String_c *)0x42ee404;
  il2cpp_runtime_helper_022b2fd0();
  plVar28 = (long *)pSVar9;
  pSStack_40 = unaff_RBX;
  if (g_data_057adeb1 == '\0') {
    pUStack_48 = (UnityEngine_Transform_o *)0x42ee429;
    il2cpp_runtime_helper_023445d0(&"3dmg_2");
    pUStack_48 = (UnityEngine_Transform_o *)0x42ee435;
    il2cpp_runtime_helper_023445d0(&"3dmg_3");
    plVar28 = &"3dmg";
    pUStack_48 = (UnityEngine_Transform_o *)0x42ee441;
    il2cpp_runtime_helper_023445d0();
    g_data_057adeb1 = '\x01';
  }
  pcVar2 = (pSVar9->_1).name;
  if (pcVar2 != (char *)0x0) {
    iVar24 = *(int *)(pcVar2 + 0x1d0);
    if (iVar24 == 3) {
      puVar10 = &"3dmg_3";
    }
    else {
      puVar10 = &"3dmg";
      if (iVar24 == 1) {
        puVar10 = &"3dmg_2";
      }
    }
    pSVar11 = System_String__Concat_3ae5ba0
                        ((pSVar9->_1).byval_arg.data,(System_String_o *)*puVar10,(MethodInfo *)0x0);
    return (UnityEngine_Material_o *)pSVar11;
  }
  pUStack_48 = (UnityEngine_Transform_o *)0x42ee491;
  il2cpp_runtime_helper_022b2c90();
  uVar23 = SUB84(in_RCX,0);
  plStack_60 = &TypeInfo_HumanSetupMaterials;
  pUVar17 = (Utility_Color255_o *)0x0;
  pSVar11 = unaff_R14;
  pSStack_68 = pSVar9;
  pSStack_58 = unaff_R14;
  pSStack_50 = texture;
  pUStack_48 = __this;
  if (pSVar30 != (System_String_c *)0x0) {
    pSVar11 = (System_String_o *)((ulong)in_RCX & 0xffffffff);
    pUVar17 = (Utility_Color255_o *)0x0;
    pSStack_70 = (System_String_c *)0x42ee4c4;
    plVar28 = (long *)pSVar30;
    pUVar12 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pSVar30,(MethodInfo *)0x0);
    pSVar9 = __this_00;
    texture = (System_String_o *)pSVar30;
    if (__this_00 != (System_String_c *)0x0) {
      pUVar17 = (Utility_Color255_o *)0x0;
      pSStack_70 = (System_String_c *)0x42ee4da;
      plVar28 = (long *)__this_00;
      p = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)__this_00,(MethodInfo *)0x0);
      __this = (UnityEngine_Transform_o *)0x0;
      if (pUVar12 != (UnityEngine_Transform_o *)0x0) {
        pSStack_70 = (System_String_c *)0x42ee4f0;
        UnityEngine_Transform__SetParent(pUVar12,p,(MethodInfo *)0x0);
        pUVar17 = (Utility_Color255_o *)0x0;
        pSStack_70 = (System_String_c *)0x42ee4fa;
        plVar28 = (long *)pSVar30;
        pUVar12 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pSVar30,(MethodInfo *)0x0)
        ;
        if (g_data_057a65d5 == '\0') {
          plVar28 = &TypeInfo_Vector3;
          pSStack_70 = (System_String_c *)0x42ee512;
          il2cpp_runtime_helper_023445d0();
          g_data_057a65d5 = '\x01';
        }
        __this = (UnityEngine_Transform_o *)0x0;
        if (pUVar12 != (UnityEngine_Transform_o *)0x0) {
          plVar33 = &TypeInfo_Vector3;
          in_XMM1_Dc = 0;
          in_XMM1_Dd = 0;
          pSStack_70 = (System_String_c *)0x42ee547;
          UnityEngine_Transform__set_localPosition
                    (pUVar12,(UnityEngine_Vector3_o)**(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8),
                     (MethodInfo *)0x0);
          pUVar17 = (Utility_Color255_o *)0x0;
          pSStack_70 = (System_String_c *)0x42ee551;
          plVar28 = (long *)pSVar30;
          __this = UnityEngine_GameObject__get_transform
                             ((UnityEngine_GameObject_o *)pSVar30,(MethodInfo *)0x0);
          if (g_data_057a6843 == '\0') {
            plVar28 = &TypeInfo_Quaternion;
            pSStack_70 = (System_String_c *)0x42ee569;
            il2cpp_runtime_helper_023445d0();
            g_data_057a6843 = '\x01';
          }
          if (__this != (UnityEngine_Transform_o *)0x0) {
            in_XMM1_Dc = 0;
            in_XMM1_Dd = 0;
            pSStack_70 = (System_String_c *)0x42ee59d;
            UnityEngine_Transform__set_localRotation
                      (__this,(UnityEngine_Quaternion_o)
                              **(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8),(MethodInfo *)0x0);
            if ((char)pSVar11 == '\0') {
              return extraout_RAX;
            }
            pUVar17 = (Utility_Color255_o *)0x0;
            pSStack_70 = (System_String_c *)0x42ee5ac;
            plVar28 = (long *)pSVar30;
            pUVar12 = UnityEngine_GameObject__get_transform
                                ((UnityEngine_GameObject_o *)pSVar30,(MethodInfo *)0x0);
            if (g_data_057a6932 == '\0') {
              plVar28 = &TypeInfo_Vector3;
              pSStack_70 = (System_String_c *)0x42ee5c4;
              il2cpp_runtime_helper_023445d0();
              g_data_057a6932 = '\x01';
            }
            pSVar9 = (System_String_c *)0x0;
            if (pUVar12 != (UnityEngine_Transform_o *)0x0) {
              UnityEngine_Transform__set_localScale
                        (pUVar12,(UnityEngine_Vector3_o)
                                 *(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc),
                         (MethodInfo *)0x0);
              return extraout_RAX_00;
            }
          }
        }
      }
    }
  }
  pSStack_70 = (System_String_c *)0x42ee605;
  il2cpp_runtime_helper_022b2c90();
  ppSVar29 = (System_String_o **)plVar28;
  pSStack_70 = pSVar9;
  if (g_data_057adeb2 == '\0') {
    ppSVar29 = &"3dmg_belt";
    pUStack_78 = (UnityEngine_Transform_o *)0x42ee629;
    il2cpp_runtime_helper_023445d0();
    g_data_057adeb2 = '\x01';
  }
  pcVar2 = (((System_String_c *)plVar28)->_1).name;
  if (pcVar2 != (char *)0x0) {
    if ((*(uint *)(pcVar2 + 0x1d0) | 2) != 3) {
      pSVar11 = System_String__Concat_3ae5ba0
                          ((((System_String_c *)plVar28)->_1).byval_arg.data,"3dmg_belt",(MethodInfo *)0x0);
      return (UnityEngine_Material_o *)pSVar11;
    }
    return (UnityEngine_Material_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  pUStack_78 = (UnityEngine_Transform_o *)0x42ee67c;
  uStack_88 = il2cpp_runtime_helper_022b2c90();
  uVar21 = (ulong)pUVar17 & 0xffffffff;
  pSVar30 = (System_String_c *)ppSVar29;
  pSStack_80 = (System_String_c *)plVar28;
  pUStack_78 = __this;
  if (g_data_057adeb3 == '\0') {
    uStack_90 = 0x42ee69d;
    il2cpp_runtime_helper_023445d0(&"char_gun_mag_l");
    uStack_90 = 0x42ee6a9;
    il2cpp_runtime_helper_023445d0(&"char_gun_mag_r");
    uStack_90 = 0x42ee6b5;
    il2cpp_runtime_helper_023445d0(&"scabbard_L");
    pSVar30 = (System_String_c *)&"scabbard_R";
    uStack_90 = 0x42ee6c1;
    il2cpp_runtime_helper_023445d0();
    g_data_057adeb3 = '\x01';
  }
  pcVar2 = (((System_String_c *)ppSVar29)->_1).name;
  if (pcVar2 != (char *)0x0) {
    if ((*(uint *)(pcVar2 + 0x1d0) | 2) == 3) {
      puVar13 = &"char_gun_mag_r";
      puVar10 = &"char_gun_mag_l";
    }
    else {
      puVar13 = &"scabbard_R";
      puVar10 = (undefined8 *)&"scabbard_L";
    }
    if ((char)uVar21 == '\0') {
      puVar10 = puVar13;
    }
    pSVar11 = System_String__Concat_3ae5ba0
                        ((((System_String_c *)ppSVar29)->_1).byval_arg.data,(System_String_o *)*puVar10,
                         (MethodInfo *)0x0);
    return (UnityEngine_Material_o *)pSVar11;
  }
  uStack_90 = 0x42ee71d;
  uStack_a0 = il2cpp_runtime_helper_022b2c90();
  uVar27 = (ulong)pUVar17 & 0xffffffff;
  pSVar9 = pSVar30;
  pSStack_98 = (System_String_c *)ppSVar29;
  uStack_90 = uVar21;
  if (g_data_057adeb4 == '\0') {
    uStack_a8 = 0x42ee73d;
    il2cpp_runtime_helper_023445d0(&"blade_R");
    uStack_a8 = 0x42ee749;
    il2cpp_runtime_helper_023445d0(&"blade_L");
    uStack_a8 = 0x42ee755;
    il2cpp_runtime_helper_023445d0(&"character_gun_r_0");
    uStack_a8 = 0x42ee761;
    il2cpp_runtime_helper_023445d0(&"thunderspear_r");
    uStack_a8 = 0x42ee76d;
    il2cpp_runtime_helper_023445d0(&"apg_R");
    uStack_a8 = 0x42ee779;
    il2cpp_runtime_helper_023445d0(&"thunderspear_l");
    uStack_a8 = 0x42ee785;
    il2cpp_runtime_helper_023445d0(&"character_gun_l_0");
    pSVar9 = (System_String_c *)&"apg_L";
    uStack_a8 = 0x42ee791;
    il2cpp_runtime_helper_023445d0();
    g_data_057adeb4 = '\x01';
  }
  pcVar2 = (pSVar30->_1).name;
  if (pcVar2 != (char *)0x0) {
    iVar24 = *(int *)(pcVar2 + 0x1d0);
    if (iVar24 == 1) {
      puVar13 = &"character_gun_r_0";
      puVar10 = &"character_gun_l_0";
    }
    else if (iVar24 == 3) {
      puVar13 = &"apg_R";
      puVar10 = &"apg_L";
    }
    else {
      puVar10 = (undefined8 *)&"blade_L";
      if (iVar24 == 2) {
        puVar10 = (undefined8 *)&"thunderspear_l";
      }
      puVar13 = &"blade_R";
      if (iVar24 == 2) {
        puVar13 = &"thunderspear_r";
      }
    }
    if ((char)uVar27 == '\0') {
      puVar10 = puVar13;
    }
    pSVar11 = System_String__Concat_3ae5ba0
                        ((pSVar30->_1).this_arg.data,(System_String_o *)*puVar10,(MethodInfo *)0x0);
    return (UnityEngine_Material_o *)pSVar11;
  }
  uStack_a8 = 0x42ee812;
  il2cpp_runtime_helper_022b2c90();
  cVar6 = (char)uVar23;
  pSStack_268 = pSVar9;
  pSStack_d0 = pSVar30;
  plStack_c8 = plVar33;
  plStack_c0 = unaff_R13;
  pSStack_b8 = pSVar11;
  pSStack_b0 = (System_String_c *)texture;
  uStack_a8 = uVar27;
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
  pUStack_270 = (Utility_Color255_o *)0x0;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar25 = (MethodInfo *)0x0;
  bVar7 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar17,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (type_00 == 0) {
    return (UnityEngine_Material_o *)CONCAT44(extraout_var,bVar7);
  }
  if ((char)bVar7 != '\0') {
    return (UnityEngine_Material_o *)CONCAT44(extraout_var,bVar7);
  }
  bVar7 = Characters_HumanSetup__CanUseCharacterEffects((Characters_HumanSetup_o *)pSStack_268,pMVar25);
  if ((char)bVar7 == '\0') {
    return (UnityEngine_Material_o *)CONCAT44(extraout_var_00,bVar7);
  }
  if (*(int *)(TypeInfo_CharacterEffectPresets + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar16 = (Utility_Color255_o *)auStack_1d0;
  PatreonEffects_CharacterEffectPresets__GetPreset
            ((PatreonEffects_CharacterEffectPreset_o *)pUVar16,type_00,(MethodInfo *)0x0);
  pIVar3 = (pSStack_268->vtable)._9_GetTypeCode.methodPtr;
  if (((pIVar3 == (Il2CppMethodPointer)0x0) || (lVar14 = *(long *)(pIVar3 + 0xa0), lVar14 == 0)) ||
     (pUVar16 = *(Utility_Color255_o **)(lVar14 + 0x18), pUVar16 == (Utility_Color255_o *)0x0)) {
label_042ef756:
    il2cpp_runtime_helper_022b2c90();
    pUVar17 = pUVar16;
  }
  else {
    fStack_234 = (float)auStack_1d0._4_4_;
    fStack_238 = fStack_1c8;
    fStack_1fc = fStack_1c4;
    fStack_200 = fStack_1c0;
    fStack_204 = fStack_1bc;
    fStack_208 = fStack_1b8;
    fStack_20c = fStack_1b4;
    fStack_23c = fStack_1b0;
    fStack_240 = fStack_1ac;
    fStack_244 = fStack_1a8;
    fStack_248 = fStack_1a4;
    fStack_210 = fStack_1a0;
    fStack_24c = fStack_19c;
    fStack_250 = fStack_198;
    UVar38 = Utility_Color255__ToColor(pUVar16,(MethodInfo *)0x0);
    uStack_108 = UVar38.fields._0_8_;
    auStack_118._8_4_ = in_XMM1_Dc;
    auStack_118._0_8_ = UVar38.fields._8_8_;
    auStack_118._12_4_ = in_XMM1_Dd;
    pIVar3 = (pSStack_268->vtable)._9_GetTypeCode.methodPtr;
    if (pIVar3 == (Il2CppMethodPointer)0x0) goto label_042ef756;
    if (cVar6 == '\0') {
      lVar14 = *(long *)(pIVar3 + 0xe8);
      if (lVar14 != 0) goto label_042eebbf;
      goto label_042ef756;
    }
    lVar14 = *(long *)(pIVar3 + 0xd8);
    if (lVar14 == 0) goto label_042ef756;
label_042eebbf:
    pUVar16 = *(Utility_Color255_o **)(lVar14 + 0x18);
    if (pUVar16 == (Utility_Color255_o *)0x0) goto label_042ef756;
    uStack_100 = extraout_XMM0_Qb;
    UVar38 = Utility_Color255__ToColor(pUVar16,(MethodInfo *)0x0);
    uStack_178 = UVar38.fields._0_8_;
    fStack_180 = (float)in_XMM1_Dc;
    auStack_188 = (undefined1  [8])UVar38.fields._8_8_;
    fStack_17c = (float)in_XMM1_Dd;
    if (cVar6 != '\0') {
      _auStack_1e8 = ZEXT812(0x3e4ccccd);
      fStack_1dc = 0.0;
      _auStack_1f8 = ZEXT812(0x3ee66666);
      fStack_1ec = 0.0;
      if (pUVar17 != (Utility_Color255_o *)0x0) goto label_042eec3f;
      goto label_042ef756;
    }
    _auStack_1e8 = ZEXT812(0x3eb33333);
    fStack_1dc = 0.0;
    _auStack_1f8 = ZEXT812(0x3f19999a);
    fStack_1ec = 0.0;
    if (pUVar17 == (Utility_Color255_o *)0x0) goto label_042ef756;
label_042eec3f:
    uStack_170 = extraout_XMM0_Qb_00;
    pSVar15 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                        ((UnityEngine_GameObject_o *)pUVar17,MethodInfo_Renderer_GetComponentsInChildren_Renderer);
    pUVar16 = pUVar17;
    if (pSVar15 == (System_Object_array *)0x0) goto label_042ef756;
    if (cVar6 == '\0') {
      fStack_254 = 0.0;
      fStack_258 = 2.0;
      iVar24 = (int)pSVar15->max_length;
    }
    else {
      fStack_254 = 1.0;
      fStack_258 = 0.0;
      iVar24 = (int)pSVar15->max_length;
    }
    if (iVar24 < 1) {
      return (UnityEngine_Material_o *)pSVar15;
    }
    fVar37 = 1.0;
    if ((float)auStack_188._4_4_ <= 1.0) {
      fVar37 = (float)auStack_188._4_4_;
    }
    fVar37 = (float)(-(uint)(0.0 <= (float)auStack_188._4_4_) & (uint)fVar37);
    fStack_f8 = (float)auStack_1e8._0_4_ * (1.0 - (float)uStack_178) + (float)uStack_178;
    fStack_f4 = (float)auStack_1e8._0_4_ * (1.0 - uStack_178._4_4_) + uStack_178._4_4_;
    fStack_f0 = fStack_1e0 * (0.0 - (float)uStack_170) + (float)uStack_170;
    fStack_ec = fStack_1dc * (0.0 - uStack_170._4_4_) + uStack_170._4_4_;
    auStack_1e8._4_4_ = (float)auStack_1e8._0_4_ * (1.0 - (float)auStack_188._4_4_) + (float)auStack_188._4_4_
    ;
    auStack_1e8._0_4_ = (float)auStack_1e8._0_4_ * (1.0 - (float)auStack_188._0_4_) + (float)auStack_188._0_4_
    ;
    fStack_1e0 = fStack_1e0 * (0.0 - fStack_180) + fStack_180;
    fStack_1dc = fStack_1dc * (0.0 - fStack_17c) + fStack_17c;
    fStack_e8 = (1.0 - (float)uStack_178) * (float)auStack_1f8._0_4_ + (float)uStack_178;
    fStack_e4 = (1.0 - uStack_178._4_4_) * (float)auStack_1f8._0_4_ + uStack_178._4_4_;
    fStack_e0 = (0.0 - (float)uStack_170) * fStack_1f0 + (float)uStack_170;
    fStack_dc = (0.0 - uStack_170._4_4_) * fStack_1ec + uStack_170._4_4_;
    auStack_1f8._4_4_ = (float)auStack_1f8._0_4_ * (1.0 - (float)auStack_188._4_4_) + (float)auStack_188._4_4_
    ;
    auStack_1f8._0_4_ = (float)auStack_1f8._0_4_ * (1.0 - (float)auStack_188._0_4_) + (float)auStack_188._0_4_
    ;
    fStack_1f0 = fStack_1f0 * (0.0 - fStack_180) + fStack_180;
    fStack_1ec = fStack_1ec * (0.0 - fStack_17c) + fStack_17c;
    fStack_218 = (float)(int)auStack_1d0._0_4_;
    fVar34 = fStack_240 * 0.7;
    fVar36 = 1.0;
    if (fVar34 <= 1.0) {
      fVar36 = fVar34;
    }
    auStack_138 = ZEXT416(-(uint)(0.0 <= fVar34) & (uint)fVar36);
    fVar34 = fStack_23c * 0.95;
    fVar36 = 1.5;
    if (fVar34 <= 1.5) {
      fVar36 = fVar34;
    }
    auStack_148 = ZEXT416(~-(uint)(0.5 <= fVar34) & 0x3f000000 | (uint)fVar36 & -(uint)(0.5 <= fVar34));
    fStack_21c = fStack_24c * 1.25 * fVar37;
    fStack_224 = fStack_234 * 1.15 * fVar37;
    fStack_25c = fStack_250 * fVar37;
    fStack_228 = fStack_234 * 0.45 * fVar37;
    fVar34 = fStack_240 + 0.22;
    fVar36 = 1.0;
    if (fVar34 <= 1.0) {
      fVar36 = fVar34;
    }
    auStack_158 = ZEXT416(-(uint)(0.0 <= fVar34) & (uint)fVar36);
    fVar34 = fStack_23c + 0.14;
    fVar36 = 1.5;
    if (fVar34 <= 1.5) {
      fVar36 = fVar34;
    }
    auStack_168 = ZEXT416(~-(uint)(0.5 <= fVar34) & 0x3f000000 | (uint)fVar36 & -(uint)(0.5 <= fVar34));
    fStack_220 = fStack_244 * 1.15;
    fStack_22c = fStack_248 * 1.1;
    fStack_230 = fStack_238 * 0.9;
    auStack_128 = ZEXT416((uint)(fVar37 * fStack_24c));
    uVar21 = 0;
    uStack_214 = uVar23;
    pSStack_190 = pSVar15;
    if (iVar24 != 0) {
      do {
        x_03 = (Utility_Color255_o *)pSStack_190->m_Items[uVar21];
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pUVar17 = x_03;
        bVar7 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)x_03,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar7 == '\0') {
          pUVar16 = pUVar17;
          if (x_03 == (Utility_Color255_o *)0x0) goto label_042ef756;
          x_00 = (Utility_Color255_o *)
                 UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)x_03,(MethodInfo *)0x0);
          x_01 = (Utility_Color255_o *)UnityEngine_Shader__Find("Custom/CharacterEffectShader",(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pUVar17 = x_00;
          bVar7 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar7 == '\0') {
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pUVar17 = x_01;
            bVar7 = UnityEngine_Object__op_Equality
                              ((UnityEngine_Object_o *)x_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar7 == '\0') {
              pUStack_270 = (Utility_Color255_o *)0x0;
              pMVar25 = (pSStack_268->vtable)._11_System_IConvertible_ToChar.method;
              pUVar16 = (Utility_Color255_o *)0x0;
              if (pMVar25 == (MethodInfo *)0x0) goto label_042ef756;
              bVar7 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                                ((System_Collections_Generic_Dictionary_object__object__o *)pMVar25,
                                 (Il2CppObject *)x_03,(Il2CppObject **)&pUStack_270,MethodInfo_Boolean_TryGetValue);
              pUVar17 = pUStack_270;
              if ((char)bVar7 == '\0') {
label_042ef058:
                pUVar17 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Material);
                UnityEngine_Material___ctor
                          ((UnityEngine_Material_o *)pUVar17,(UnityEngine_Shader_o *)x_01,(MethodInfo *)0x0);
                pMVar25 = (pSStack_268->vtable)._11_System_IConvertible_ToChar.method;
                pUVar16 = (Utility_Color255_o *)0x0;
                pUStack_270 = pUVar17;
                if (pMVar25 == (MethodInfo *)0x0) goto label_042ef756;
                System_Collections_Generic_Dictionary_object__object___set_Item
                          ((System_Collections_Generic_Dictionary_object__object__o *)pMVar25,
                           (Il2CppObject *)x_03,(Il2CppObject *)pUVar17,MethodInfo_Void_set_Item);
label_042ef0ad:
                pUVar16 = x_03;
                UnityEngine_Renderer__set_material
                          ((UnityEngine_Renderer_o *)x_03,(UnityEngine_Material_o *)pUStack_270,
                           (MethodInfo *)0x0);
              }
              else {
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                bVar7 = UnityEngine_Object__op_Inequality
                                  ((UnityEngine_Object_o *)pUVar17,(UnityEngine_Object_o *)0x0,
                                   (MethodInfo *)0x0);
                if ((char)bVar7 == '\0') goto label_042ef058;
                pUVar16 = (Utility_Color255_o *)
                          UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)x_03,(MethodInfo *)0x0)
                ;
                pUVar17 = pUStack_270;
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                bVar7 = UnityEngine_Object__op_Inequality
                                  ((UnityEngine_Object_o *)pUVar16,(UnityEngine_Object_o *)pUVar17,
                                   (MethodInfo *)0x0);
                if ((char)bVar7 != '\0') goto label_042ef0ad;
              }
              uVar23 = uStack_214;
              if (x_00 == (Utility_Color255_o *)0x0) goto label_042ef756;
              bVar7 = UnityEngine_Material__HasProperty_4dcb5b0
                                ((UnityEngine_Material_o *)x_00,"_MainTex",(MethodInfo *)0x0);
              pUVar17 = pUStack_270;
              if ((char)bVar7 != '\0') {
                pUVar16 = x_00;
                value = UnityEngine_Material__GetTexture
                                  ((UnityEngine_Material_o *)x_00,"_MainTex",(MethodInfo *)0x0);
                if (pUVar17 == (Utility_Color255_o *)0x0) goto label_042ef756;
                UnityEngine_Material__SetTexture
                          ((UnityEngine_Material_o *)pUVar17,"_MainTex",value,(MethodInfo *)0x0);
              }
              if ((char)uVar23 == '\0') {
                pUVar16 = x_00;
                bVar7 = UnityEngine_Material__HasProperty_4dcb5b0
                                  ((UnityEngine_Material_o *)x_00,"_Color",(MethodInfo *)0x0);
                pUVar17 = pUStack_270;
                if ((char)bVar7 == '\0') {
                  if (pUStack_270 == (Utility_Color255_o *)0x0) goto label_042ef756;
                  fVar37 = (float)g_data_00d19fc0;
                  fVar36 = g_data_00d19fc0._4_4_;
                  auVar35 = _DAT_00d19fc0;
                }
                else {
                  UVar38 = UnityEngine_Material__GetColor
                                     ((UnityEngine_Material_o *)x_00,"_Color",(MethodInfo *)0x0);
                  fVar37 = UVar38.fields.b;
                  fVar36 = UVar38.fields.a;
                  auVar35._0_8_ = UVar38.fields._0_8_;
                  auVar35._8_8_ = extraout_XMM0_Qb_01;
                  pUVar16 = x_00;
                  if (pUVar17 == (Utility_Color255_o *)0x0) goto label_042ef756;
                }
              }
              else {
                pUVar16 = pUStack_270;
                if (pUStack_270 == (Utility_Color255_o *)0x0) goto label_042ef756;
                auVar35._8_8_ = uStack_100;
                auVar35._0_8_ = uStack_108;
                pUVar17 = pUStack_270;
                fVar37 = (float)auStack_118._0_4_;
                fVar36 = (float)auStack_118._4_4_;
              }
              UVar38.fields._0_8_ = auVar35._0_8_;
              UVar38.fields.a = fVar36;
              UVar38.fields.b = fVar37;
              UnityEngine_Material__SetColor
                        ((UnityEngine_Material_o *)pUVar17,"_Color",UVar38,(MethodInfo *)0x0);
              auVar35 = _auStack_188;
              pUVar16 = pUStack_270;
              if (pUStack_270 == (Utility_Color255_o *)0x0) goto label_042ef756;
              value_00.fields.b = (float)auStack_188._0_4_;
              value_00.fields.a = (float)auStack_188._4_4_;
              value_00.fields.r = (float)uStack_178;
              value_00.fields.g = uStack_178._4_4_;
              _auStack_188 = auVar35;
              UnityEngine_Material__SetColor
                        ((UnityEngine_Material_o *)pUStack_270,"_NeonColor",value_00,(MethodInfo *)0x0);
              auVar35 = _auStack_1e8;
              pUVar16 = pUStack_270;
              if (pUStack_270 == (Utility_Color255_o *)0x0) goto label_042ef756;
              value_01.fields.g = fStack_f4;
              value_01.fields.r = fStack_f8;
              value_01.fields.b = (float)auStack_1e8._0_4_;
              value_01.fields.a = (float)auStack_1e8._4_4_;
              _auStack_1e8 = auVar35;
              UnityEngine_Material__SetColor
                        ((UnityEngine_Material_o *)pUStack_270,"_GlowColor",value_01,(MethodInfo *)0x0);
              auVar35 = _auStack_1f8;
              pUVar16 = pUStack_270;
              if (pUStack_270 == (Utility_Color255_o *)0x0) goto label_042ef756;
              value_02.fields.g = fStack_e4;
              value_02.fields.r = fStack_e8;
              value_02.fields.b = (float)auStack_1f8._0_4_;
              value_02.fields.a = (float)auStack_1f8._4_4_;
              _auStack_1f8 = auVar35;
              UnityEngine_Material__SetColor
                        ((UnityEngine_Material_o *)pUStack_270,"_OutlineColor",value_02,(MethodInfo *)0x0);
              pUVar16 = pUStack_270;
              if ((((pUStack_270 == (Utility_Color255_o *)0x0) ||
                   (UnityEngine_Material__SetFloat
                              ((UnityEngine_Material_o *)pUStack_270,"_GlowIntensity",fStack_234,(MethodInfo *)0x0
                              ), pUVar16 = pUStack_270, pUStack_270 == (Utility_Color255_o *)0x0)) ||
                  ((UnityEngine_Material__SetFloat
                              ((UnityEngine_Material_o *)pUStack_270,"_OutlineThickness",fStack_238,(MethodInfo *)0x0
                              ), pUVar16 = pUStack_270, pUStack_270 == (Utility_Color255_o *)0x0 ||
                   ((UnityEngine_Material__SetFloat
                               ((UnityEngine_Material_o *)pUStack_270,"_OutlinePower",fStack_1fc,
                                (MethodInfo *)0x0), pUVar16 = pUStack_270,
                    pUStack_270 == (Utility_Color255_o *)0x0 ||
                    (UnityEngine_Material__SetFloat
                               ((UnityEngine_Material_o *)pUStack_270,"_PulseSpeed",fStack_200,
                                (MethodInfo *)0x0), pUVar16 = pUStack_270,
                    pUStack_270 == (Utility_Color255_o *)0x0)))))) ||
                 ((UnityEngine_Material__SetFloat
                             ((UnityEngine_Material_o *)pUStack_270,"_PulseAmount",fStack_204,(MethodInfo *)0x0)
                  , pUVar16 = pUStack_270, pUStack_270 == (Utility_Color255_o *)0x0 ||
                  (((((((UnityEngine_Material__SetFloat
                                   ((UnityEngine_Material_o *)pUStack_270,"_FlowSpeed",fStack_208,
                                    (MethodInfo *)0x0), pUVar16 = pUStack_270,
                        pUStack_270 == (Utility_Color255_o *)0x0 ||
                        (UnityEngine_Material__SetFloat
                                   ((UnityEngine_Material_o *)pUStack_270,"_FlowStrength",fStack_20c,
                                    (MethodInfo *)0x0), pUVar16 = pUStack_270,
                        pUStack_270 == (Utility_Color255_o *)0x0)) ||
                       (UnityEngine_Material__SetFloat
                                  ((UnityEngine_Material_o *)pUStack_270,"_TexturePreserve",fStack_23c,
                                   (MethodInfo *)0x0), pUVar16 = pUStack_270,
                       pUStack_270 == (Utility_Color255_o *)0x0)) ||
                      ((UnityEngine_Material__SetFloat
                                  ((UnityEngine_Material_o *)pUStack_270,"_EmissionFromTexture",fStack_240,
                                   (MethodInfo *)0x0), pUVar16 = pUStack_270,
                       pUStack_270 == (Utility_Color255_o *)0x0 ||
                       (UnityEngine_Material__SetFloat
                                  ((UnityEngine_Material_o *)pUStack_270,"_DetailScale",fStack_244,
                                   (MethodInfo *)0x0), pUVar16 = pUStack_270,
                       pUStack_270 == (Utility_Color255_o *)0x0)))) ||
                     (UnityEngine_Material__SetFloat
                                ((UnityEngine_Material_o *)pUStack_270,"_DetailSpeed",fStack_248,
                                 (MethodInfo *)0x0), pUVar16 = pUStack_270,
                     pUStack_270 == (Utility_Color255_o *)0x0)) ||
                    ((UnityEngine_Material__SetFloat
                                ((UnityEngine_Material_o *)pUStack_270,"_SecondaryScroll",fStack_210,
                                 (MethodInfo *)0x0), pUVar16 = pUStack_270,
                     pUStack_270 == (Utility_Color255_o *)0x0 ||
                     (UnityEngine_Material__SetFloat
                                ((UnityEngine_Material_o *)pUStack_270,"_EdgeSpark",fStack_24c,
                                 (MethodInfo *)0x0), pUVar16 = pUStack_270,
                     pUStack_270 == (Utility_Color255_o *)0x0)))) ||
                   ((UnityEngine_Material__SetFloat
                               ((UnityEngine_Material_o *)pUStack_270,"_StyleMode",fStack_218,
                                (MethodInfo *)0x0), pUVar16 = pUStack_270,
                    pUStack_270 == (Utility_Color255_o *)0x0 ||
                    ((UnityEngine_Material__SetFloat
                                ((UnityEngine_Material_o *)pUStack_270,"_StyleStrength",fStack_250,
                                 (MethodInfo *)0x0), pUVar16 = pUStack_270,
                     pUStack_270 == (Utility_Color255_o *)0x0 ||
                     (UnityEngine_Material__SetFloat
                                ((UnityEngine_Material_o *)pUStack_270,"_IsHair",fStack_254,
                                 (MethodInfo *)0x0), pUVar16 = pUStack_270,
                     pUStack_270 == (Utility_Color255_o *)0x0)))))))))) goto label_042ef756;
              UnityEngine_Material__SetFloat
                        ((UnityEngine_Material_o *)pUStack_270,"_CullMode",fStack_258,(MethodInfo *)0x0);
              lVar14 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x18);
              fVar37 = 2.0;
              if (lVar14 != 0) {
                lVar14 = *(long *)(lVar14 + 0x20);
                if (lVar14 == 0) goto label_042ef756;
                iVar24 = *(int *)(lVar14 + 0x14);
                fVar37 = 0.0;
                if (1 < iVar24) {
                  fVar37 = *(float *)(&g_data_00d1d3c8 + (ulong)(iVar24 < 3) * 4);
                }
              }
              pUVar16 = pUStack_270;
              if (pUStack_270 == (Utility_Color255_o *)0x0) goto label_042ef756;
              UnityEngine_Material__SetFloat
                        ((UnityEngine_Material_o *)pUStack_270,"_QualityLevel",fVar37,(MethodInfo *)0x0);
              pUVar16 = pUStack_270;
              if ((char)uVar23 == '\0') {
                if (pUStack_270 == (Utility_Color255_o *)0x0) goto label_042ef756;
                UnityEngine_Material__SetFloat
                          ((UnityEngine_Material_o *)pUStack_270,"_EmissionFromTexture",(float)auStack_138._0_4_,
                           (MethodInfo *)0x0);
                pUVar16 = (Utility_Color255_o *)0x0;
                if (pUStack_270 == (Utility_Color255_o *)0x0) goto label_042ef756;
                UnityEngine_Material__SetFloat
                          ((UnityEngine_Material_o *)pUStack_270,"_TexturePreserve",(float)auStack_148._0_4_,
                           (MethodInfo *)0x0);
                pUVar16 = (Utility_Color255_o *)0x0;
                if (pUStack_270 == (Utility_Color255_o *)0x0) goto label_042ef756;
                UnityEngine_Material__SetFloat
                          ((UnityEngine_Material_o *)pUStack_270,"_EdgeSpark",fStack_21c,(MethodInfo *)0x0);
                pUVar16 = (Utility_Color255_o *)0x0;
                if (pUStack_270 == (Utility_Color255_o *)0x0) goto label_042ef756;
                UnityEngine_Material__SetFloat
                          ((UnityEngine_Material_o *)pUStack_270,"_GlowIntensity",fStack_224,(MethodInfo *)0x0);
                pSVar11 = "_StyleStrength";
                pUVar16 = (Utility_Color255_o *)0x0;
                fVar37 = fStack_25c;
                if (pUStack_270 == (Utility_Color255_o *)0x0) goto label_042ef756;
              }
              else {
                if (pUStack_270 == (Utility_Color255_o *)0x0) goto label_042ef756;
                UnityEngine_Material__SetFloat
                          ((UnityEngine_Material_o *)pUStack_270,"_GlowIntensity",fStack_228,(MethodInfo *)0x0);
                pUVar16 = (Utility_Color255_o *)0x0;
                if (pUStack_270 == (Utility_Color255_o *)0x0) goto label_042ef756;
                UnityEngine_Material__SetFloat
                          ((UnityEngine_Material_o *)pUStack_270,"_EmissionFromTexture",(float)auStack_158._0_4_,
                           (MethodInfo *)0x0);
                pUVar16 = (Utility_Color255_o *)0x0;
                if (pUStack_270 == (Utility_Color255_o *)0x0) goto label_042ef756;
                UnityEngine_Material__SetFloat
                          ((UnityEngine_Material_o *)pUStack_270,"_TexturePreserve",(float)auStack_168._0_4_,
                           (MethodInfo *)0x0);
                pUVar16 = (Utility_Color255_o *)0x0;
                if (pUStack_270 == (Utility_Color255_o *)0x0) goto label_042ef756;
                UnityEngine_Material__SetFloat
                          ((UnityEngine_Material_o *)pUStack_270,"_DetailScale",fStack_220,(MethodInfo *)0x0);
                pUVar16 = (Utility_Color255_o *)0x0;
                if (pUStack_270 == (Utility_Color255_o *)0x0) goto label_042ef756;
                UnityEngine_Material__SetFloat
                          ((UnityEngine_Material_o *)pUStack_270,"_DetailSpeed",fStack_22c,(MethodInfo *)0x0);
                pUVar16 = (Utility_Color255_o *)0x0;
                if (pUStack_270 == (Utility_Color255_o *)0x0) goto label_042ef756;
                UnityEngine_Material__SetFloat
                          ((UnityEngine_Material_o *)pUStack_270,"_OutlineThickness",fStack_230,(MethodInfo *)0x0);
                pUVar16 = (Utility_Color255_o *)0x0;
                if (pUStack_270 == (Utility_Color255_o *)0x0) goto label_042ef756;
                UnityEngine_Material__SetFloat
                          ((UnityEngine_Material_o *)pUStack_270,"_StyleStrength",fStack_25c,(MethodInfo *)0x0);
                pUVar16 = (Utility_Color255_o *)0x0;
                if (pUStack_270 == (Utility_Color255_o *)0x0) goto label_042ef756;
                pSVar11 = "_EdgeSpark";
                fVar37 = (float)auStack_128._0_4_;
              }
              UnityEngine_Material__SetFloat
                        ((UnityEngine_Material_o *)pUStack_270,pSVar11,fVar37,(MethodInfo *)0x0);
              pUVar16 = (Utility_Color255_o *)0x0;
              if (pUStack_270 == (Utility_Color255_o *)0x0) goto label_042ef756;
              UnityEngine_Material__EnableKeyword
                        ((UnityEngine_Material_o *)pUStack_270,"_EMISSION",(MethodInfo *)0x0);
              pUVar16 = (Utility_Color255_o *)0x0;
              if (pUStack_270 == (Utility_Color255_o *)0x0) goto label_042ef756;
              UnityEngine_Material__set_globalIlluminationFlags
                        ((UnityEngine_Material_o *)pUStack_270,1,(MethodInfo *)0x0);
              UnityEngine_Renderer__set_material
                        ((UnityEngine_Renderer_o *)x_03,(UnityEngine_Material_o *)pUStack_270,
                         (MethodInfo *)0x0);
              pUVar17 = x_03;
            }
          }
        }
        uVar21 = uVar21 + 1;
        uVar1 = (uint)pSStack_190->max_length;
        if ((long)(int)uVar1 <= (long)uVar21) {
          return (UnityEngine_Material_o *)pSStack_190;
        }
      } while (uVar21 < uVar1);
    }
  }
  pUVar18 = (UnityEngine_Material_o *)il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ade91 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ClothFactory);
    pUVar18 = (UnityEngine_Material_o *)il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupMaterials);
    g_data_057ade91 = '\x01';
  }
  if (*(char *)&pUVar17[0xf].monitor != '\0') {
    return pUVar18;
  }
  x = pUVar17[7].monitor;
  if (g_data_057adea2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar30 = (System_String_c *)0x0;
  bVar7 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar30 = (System_String_c *)0x0;
    UnityEngine_Object__Destroy_4e01c60(x,(MethodInfo *)0x0);
  }
  if (pUVar17[0xb].monitor != (Characters_HumanSetupMeshes_o *)0x0) {
    pSVar11 = Characters_HumanSetupMeshes__GetCapeMesh(pUVar17[0xb].monitor,(MethodInfo *)pSVar30);
    pSVar30 = (System_String_c *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    bVar7 = System_String__op_Inequality(pSVar11,(System_String_o *)pSVar30,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      return (UnityEngine_Material_o *)CONCAT44(extraout_var_01,bVar7);
    }
    if (*(Characters_HumanSetupTextures_o **)&pUVar17[0xb].fields != (Characters_HumanSetupTextures_o *)0x0) {
      reference = pUVar17[0xb].klass;
      pSVar19 = Characters_HumanSetupTextures__GetBrandTexture
                          (*(Characters_HumanSetupTextures_o **)&pUVar17[0xb].fields,(MethodInfo *)pSVar30);
      pMVar25 = extraout_RDX;
      if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pMVar25 = extraout_RDX_00;
      }
      pUVar18 = Characters_HumanSetupMaterials__GetPartMaterial(pSVar19,0,pMVar25);
      if (*(int *)(TypeInfo_ClothFactory + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar20 = ClothFactory__GetCape((UnityEngine_GameObject_o *)reference,pSVar11,pUVar18,(MethodInfo *)0x0)
      ;
      pUVar17[7].monitor = pUVar20;
      pUVar18 = (UnityEngine_Material_o *)il2cpp_runtime_helper_022b4080(&pUVar17[7].monitor,pUVar20);
      return pUVar18;
    }
  }
  pSVar9 = (System_String_c *)0x0;
  il2cpp_runtime_helper_022b2c90();
  ppSVar29 = (System_String_o **)pSVar9;
  if (g_data_057adebc == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    ppSVar29 = &"character_cape_0";
    il2cpp_runtime_helper_023445d0();
    g_data_057adebc = '\x01';
  }
  pcVar2 = (pSVar9->_1).name;
  if (((pcVar2 != (char *)0x0) && (lVar14 = *(long *)(pcVar2 + 0x1c8), lVar14 != 0)) &&
     (lVar14 = *(long *)(lVar14 + 0x70), lVar14 != 0)) {
    if (*(int *)(lVar14 + 0x14) == 0) {
      return (UnityEngine_Material_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    pSVar11 = System_String__Concat_3ae5ba0
                        ((System_String_o *)(pSVar9->_1).namespaze,"character_cape_0",(MethodInfo *)0x0);
    return (UnityEngine_Material_o *)pSVar11;
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar9 = (System_String_c *)ppSVar29;
  if (g_data_057adec3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&"Brand/aottg_hero_brand_g");
    il2cpp_runtime_helper_023445d0(&"Brand/aottg_hero_brand_sc");
    il2cpp_runtime_helper_023445d0(&"Brand/aottg_hero_brand_mp");
    pSVar9 = (System_String_c *)&"Brand/aottg_hero_brand_ts";
    il2cpp_runtime_helper_023445d0();
    g_data_057adec3 = '\x01';
  }
  pcVar2 = (((System_String_c *)ppSVar29)->_1).name;
  if (((pcVar2 != (char *)0x0) && (lVar14 = *(long *)(pcVar2 + 0x1c8), lVar14 != 0)) &&
     (lVar14 = *(long *)(lVar14 + 0x78), lVar14 != 0)) {
    uVar21 = (ulong)*(int *)(lVar14 + 0x14);
    ppuVar22 = &g_data_0524f380 + uVar21;
    if (3 < uVar21) {
      ppuVar22 = (undefined **)(g_data_057b9c00 + 0xb8);
    }
    return *(UnityEngine_Material_o **)*ppuVar22;
  }
  il2cpp_runtime_helper_022b2c90();
  ppSVar31 = (System_String_c **)pSVar9;
  if (g_data_057adeba == '\0') {
    ppSVar31 = &"Texture";
    il2cpp_runtime_helper_023445d0();
    g_data_057adeba = '\x01';
  }
  pcVar2 = (pSVar9->_1).name;
  if (((pcVar2 != (char *)0x0) &&
      (ppSVar31 = *(System_String_c ***)(pcVar2 + 0x1e0),
      (System_String_c *)ppSVar31 != (System_String_c *)0x0)) &&
     (pvVar4 = (((System_String_c *)ppSVar31)->_1).image, pSVar30 = "Texture",
     plVar28 = (long *)(**(code **)((long)pvVar4 + 0x1a8))
                                 (ppSVar31,"Texture",*(undefined8 *)((long)pvVar4 + 0x1b0)),
     plVar28 != (long *)0x0)) {
    pSVar11 = (System_String_o *)(**(code **)(*plVar28 + 0x1c8))(plVar28,*(undefined8 *)(*plVar28 + 0x1d0));
    bVar7 = System_String__op_Equality
                      (pSVar11,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      pSVar11 = System_String__Concat_3ae5ba0
                          (*(System_String_o **)&(pSVar9->_1).byval_arg.bits,pSVar11,(MethodInfo *)0x0);
      return (UnityEngine_Material_o *)pSVar11;
    }
    return (UnityEngine_Material_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  il2cpp_runtime_helper_022b2c90();
  str1 = ppSVar31;
  if (g_data_057adec5 == '\0') {
    str1 = &"Texture";
    il2cpp_runtime_helper_023445d0();
    g_data_057adec5 = '\x01';
  }
  pcVar2 = (((System_String_c *)ppSVar31)->_1).name;
  if (((pcVar2 != (char *)0x0) &&
      (str1 = *(System_String_c ***)(pcVar2 + 0x1e0), (System_String_c *)str1 != (System_String_c *)0x0)) &&
     (pvVar4 = (((System_String_c *)str1)->_1).image, pSVar30 = "Texture",
     plVar28 = (long *)(**(code **)((long)pvVar4 + 0x1a8))
                                 (str1,"Texture",*(undefined8 *)((long)pvVar4 + 0x1b0)),
     plVar28 != (long *)0x0)) {
    vtableDispatch = *(code **)(*plVar28 + 0x1c8);
    pUVar18 = (UnityEngine_Material_o *)
              (*vtableDispatch)(plVar28,*(undefined8 *)(*plVar28 + 0x1d0),vtableDispatch);
    return pUVar18;
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
    pSVar32 = (System_Collections_Generic_Dictionary_object__object__o *)**(long **)(TypeInfo_HumanSetupMaterials + 0xb8);
    if (pSVar32 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_042efdd6;
label_042efc74:
    pSVar30 = (System_String_c *)str1;
    bVar7 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar32,(Il2CppObject *)str1,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar7 != '\0') {
label_042efd96:
      if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_HumanSetupMaterials + 0xb8) !=
          (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        pUVar18 = (UnityEngine_Material_o *)
                  System_Collections_Generic_Dictionary_object__object___get_Item
                            ((System_Collections_Generic_Dictionary_object__object__o *)
                             **(undefined8 **)(TypeInfo_HumanSetupMaterials + 0xb8),(Il2CppObject *)str1,MethodInfo_Material_get_Item);
        return pUVar18;
      }
      goto label_042efdd6;
    }
    if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar11 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar18 = (UnityEngine_Material_o *)
              ApplicationManagers_ResourceManager__InstantiateAsset_object_
                        (pSVar11,"Human/Parts/Hairs/Materials/HumanHairMat",1,MethodInfo_Material_InstantiateAsset_Material);
    pSVar11 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
    pSVar30 = (System_String_c *)
              System_String__Concat_3af7150
                        ("Human/Parts/Hairs/Textures/",(System_String_o *)str1,"Tex",(MethodInfo *)0x0);
    pSVar9 = (System_String_c *)
             ApplicationManagers_ResourceManager__LoadAsset
                       (pSVar11,(System_String_o *)pSVar30,0,(MethodInfo *)0x0);
    if ((pSVar9 == (System_String_c *)0x0) || (pSVar30 = TypeInfo_Texture2D, (pSVar9->_1).image == TypeInfo_Texture2D)) {
      if (pUVar18 != (UnityEngine_Material_o *)0x0) {
        UnityEngine_Material__set_mainTexture(pUVar18,(UnityEngine_Texture_o *)pSVar9,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar30 = pSVar9;
        if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_HumanSetupMaterials + 0xb8)
            != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          pSVar30 = (System_String_c *)str1;
          System_Collections_Generic_Dictionary_object__object___set_Item
                    ((System_Collections_Generic_Dictionary_object__object__o *)
                     **(undefined8 **)(TypeInfo_HumanSetupMaterials + 0xb8),(Il2CppObject *)str1,(Il2CppObject *)pUVar18,
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
    pSVar32 = (System_Collections_Generic_Dictionary_object__object__o *)**(long **)(TypeInfo_HumanSetupMaterials + 0xb8);
    if (pSVar32 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_042efc74;
label_042efdd6:
    pSVar9 = (System_String_c *)il2cpp_runtime_helper_022b2c90();
  }
  il2cpp_runtime_helper_022b2fd0();
  ppSVar31 = (System_String_c **)pSVar9;
  if (g_data_057adebb == '\0') {
    ppSVar31 = &"Cloth";
    il2cpp_runtime_helper_023445d0();
    g_data_057adebb = '\x01';
  }
  SVar5 = *(System_String_Fields *)&(pSVar9->_1).name;
  if ((SVar5 != (System_String_Fields)0x0) &&
     (ppSVar31 = *(System_String_c ***)((long)SVar5 + 0x1e0),
     (System_String_c *)ppSVar31 != (System_String_c *)0x0)) {
    pSVar26 = (((System_String_c *)ppSVar31)->_1).image;
    pSVar30 = "Cloth";
    cVar6 = (*(code *)pSVar26[1]._1.name)(ppSVar31,"Cloth",pSVar26[1]._1.namespaze);
    if (cVar6 == '\0') {
      return (UnityEngine_Material_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    SVar5 = *(System_String_Fields *)&(pSVar9->_1).name;
    if ((SVar5 != (System_String_Fields)0x0) &&
       (ppSVar31 = *(System_String_c ***)((long)SVar5 + 0x1e0),
       (System_String_c *)ppSVar31 != (System_String_c *)0x0)) {
      pSVar11 = *(System_String_o **)&(pSVar9->_1).byval_arg.bits;
      pSVar9 = (((System_String_c *)ppSVar31)->_1).image;
      pSVar30 = "Cloth";
      plVar28 = (long *)(*(pSVar9->vtable)._7_CompareTo.methodPtr)
                                  (ppSVar31,"Cloth",(pSVar9->vtable)._7_CompareTo.method);
      if (plVar28 != (long *)0x0) {
        pSVar19 = (System_String_o *)
                  (**(code **)(*plVar28 + 0x1c8))(plVar28,*(undefined8 *)(*plVar28 + 0x1d0));
        pSVar11 = System_String__Concat_3ae5ba0(pSVar11,pSVar19,(MethodInfo *)0x0);
        return (UnityEngine_Material_o *)pSVar11;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar9 = (System_String_c *)ppSVar31;
  if (g_data_057ade93 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEffectPresets);
    il2cpp_runtime_helper_023445d0(&MethodInfo_PhotonView_GetComponent_PhotonView);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    pSVar9 = (System_String_c *)&MethodInfo_String_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ade93 = '\x01';
  }
  pIVar3 = (((System_String_c *)ppSVar31)->vtable)._9_GetTypeCode.methodPtr;
  if (pIVar3 == (Il2CppMethodPointer)0x0) {
    pSVar26 = (System_String_c *)0x0;
  }
  else {
    lVar14 = *(long *)(pIVar3 + 0xd0);
    if (lVar14 == 0) {
label_042f006e:
      pUVar18 = (UnityEngine_Material_o *)il2cpp_runtime_helper_022b2c90();
      if (g_data_057ade95 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEffectPresets);
        pUVar18 = (UnityEngine_Material_o *)il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
        g_data_057ade95 = '\x01';
      }
      if ((pSVar9->vtable)._9_GetTypeCode.methodPtr != (Il2CppMethodPointer)0x0) {
        pSVar26 = pSVar9;
        bVar7 = Characters_HumanSetup__CanUseCharacterEffects
                          ((Characters_HumanSetup_o *)pSVar9,(MethodInfo *)pSVar30);
        pUVar18 = (UnityEngine_Material_o *)CONCAT44(extraout_var_03,bVar7);
        if ((char)bVar7 != '\0') {
          pIVar3 = (pSVar9->vtable)._9_GetTypeCode.methodPtr;
          if ((pIVar3 != (Il2CppMethodPointer)0x0) && (lVar14 = *(long *)(pIVar3 + 0xd0), lVar14 != 0)) {
            pSVar26 = *(System_String_c **)(lVar14 + 0x18);
            if (*(int *)(TypeInfo_CharacterEffectPresets + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            iVar8 = PatreonEffects_CharacterEffectPresets__ParseOrDefault
                              ((System_String_o *)pSVar26,(MethodInfo *)0x0);
            pIVar3 = (pSVar9->vtable)._9_GetTypeCode.methodPtr;
            if ((pIVar3 != (Il2CppMethodPointer)0x0) && (lVar14 = *(long *)(pIVar3 + 0xe0), lVar14 != 0)) {
              type = PatreonEffects_CharacterEffectPresets__ParseOrDefault
                               (*(System_String_o **)(lVar14 + 0x18),(MethodInfo *)0x0);
              Characters_HumanSetup__ApplyCharacterEffectToPart
                        ((Characters_HumanSetup_o *)pSVar9,
                         *(UnityEngine_GameObject_o **)&(pSVar9->_2).interfaces_count,iVar8,1,in_R8);
              Characters_HumanSetup__ApplyCharacterEffectToPart
                        ((Characters_HumanSetup_o *)pSVar9,
                         *(UnityEngine_GameObject_o **)&(pSVar9->_2).naturalAligment,iVar8,1,in_R8);
              Characters_HumanSetup__ApplyCharacterEffectToPart
                        ((Characters_HumanSetup_o *)pSVar9,(UnityEngine_GameObject_o *)pSVar9->static_fields,
                         type,0,in_R8);
              Characters_HumanSetup__ApplyCharacterEffectToPart
                        ((Characters_HumanSetup_o *)pSVar9,(UnityEngine_GameObject_o *)pSVar9->rgctx_data,type
                         ,0,in_R8);
              return extraout_RAX_01;
            }
          }
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057adeb7 == '\0') {
            il2cpp_runtime_helper_023445d0(&"char_eyes");
            g_data_057adeb7 = '\x01';
          }
          pSVar11 = System_String__Concat_3ae5ba0
                              (*(System_String_o **)&(pSVar26->_1).this_arg.bits,"char_eyes",
                               (MethodInfo *)0x0);
          return (UnityEngine_Material_o *)pSVar11;
        }
      }
      return pUVar18;
    }
    pSVar26 = *(System_String_c **)(lVar14 + 0x18);
    if (*(int *)(TypeInfo_CharacterEffectPresets + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar30 = (System_String_c *)0x0;
    pSVar9 = pSVar26;
    iVar8 = PatreonEffects_CharacterEffectPresets__ParseOrDefault
                      ((System_String_o *)pSVar26,(MethodInfo *)0x0);
    if (iVar8 == 0) {
      pIVar3 = (((System_String_c *)ppSVar31)->vtable)._9_GetTypeCode.methodPtr;
      if ((pIVar3 == (Il2CppMethodPointer)0x0) || (lVar14 = *(long *)(pIVar3 + 0xe0), lVar14 == 0))
      goto label_042f006e;
      pSVar11 = *(System_String_o **)(lVar14 + 0x18);
      if (*(int *)(TypeInfo_CharacterEffectPresets + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar26 = (System_String_c *)0x0;
      iVar8 = PatreonEffects_CharacterEffectPresets__ParseOrDefault(pSVar11,(MethodInfo *)0x0);
      if (iVar8 == 0) goto label_042f0060;
    }
    if (*(int *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 8) == 4) {
label_042f002a:
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      player = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      bVar7 = PatreonEffects_PatreonHelper__HasCharacterEffectAccess(player,(MethodInfo *)0x0);
      return (UnityEngine_Material_o *)CONCAT44(extraout_var_02,bVar7);
    }
    x_02 = (System_String_c *)
           UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)ppSVar31,MethodInfo_PhotonView_GetComponent_PhotonView);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar30 = (System_String_c *)0x0;
    pSVar9 = x_02;
    bVar7 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    pSVar26 = (System_String_c *)CONCAT71((int7)((ulong)pSVar26 >> 8),1);
    if ((char)bVar7 != '\0') {
      if (x_02 == (System_String_c *)0x0) goto label_042f006e;
      if (*(char *)&(x_02->_1).typeMetadataHandle != '\0') goto label_042f002a;
    }
  }
label_042f0060:
  return (UnityEngine_Material_o *)((ulong)pSVar26 & 0xffffffff);
}


// Characters.HumanSetupMaterials$$GetCustomSkinMaterial
// il2cpp: UnityEngine_Material_o* Characters_HumanSetupMaterials__GetCustomSkinMaterial (const MethodInfo* method);
// 0x42f18f0

UnityEngine_Material_o * Characters_HumanSetupMaterials__GetCustomSkinMaterial(MethodInfo *method)

{
  System_String_o *path;
  System_String_o *name;
  UnityEngine_Material_o *pUVar1;
  
  if (g_data_057adea7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupMaterials);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Material_InstantiateAsset_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&"HumanPartMat");
    g_data_057adea7 = '\x01';
  }
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  path = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
  if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  name = System_String__Concat_3ae5ba0
                   (*(System_String_o **)(*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 0x28),"HumanPartMat",
                    (MethodInfo *)0x0);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar1 = (UnityEngine_Material_o *)
           ApplicationManagers_ResourceManager__InstantiateAsset_object_(path,name,1,MethodInfo_Material_InstantiateAsset_Material);
  return pUVar1;
}


// Characters.HumanSetupMaterials$$GetHairMaterial
// il2cpp: UnityEngine_Material_o* Characters_HumanSetupMaterials__GetHairMaterial (System_String_o* texture, const MethodInfo* method);
// 0x42efb70

UnityEngine_Material_o *
Characters_HumanSetupMaterials__GetHairMaterial(System_String_o *texture,MethodInfo *method)

{
  System_String_Fields SVar1;
  Il2CppMethodPointer pIVar2;
  long lVar3;
  char cVar4;
  int32_t iVar5;
  bool_conflict bVar6;
  int32_t type;
  System_String_c *pSVar7;
  long *plVar8;
  System_String_o *str1;
  System_String_o *pSVar9;
  System_String_c *x;
  Photon_Realtime_Player_o *player;
  undefined4 extraout_var;
  UnityEngine_Material_o *pUVar10;
  undefined4 extraout_var_00;
  UnityEngine_Material_o *extraout_RAX;
  System_String_c *pSVar11;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_String_c **__this_00;
  MethodInfo *in_R8;
  
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
    __this = (System_Collections_Generic_Dictionary_object__object__o *)**(long **)(TypeInfo_HumanSetupMaterials + 0xb8);
    if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_042efdd6;
label_042efc74:
    method = (MethodInfo *)texture;
    bVar6 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (__this,(Il2CppObject *)texture,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar6 != '\0') {
label_042efd96:
      if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_HumanSetupMaterials + 0xb8) !=
          (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        pUVar10 = (UnityEngine_Material_o *)
                  System_Collections_Generic_Dictionary_object__object___get_Item
                            ((System_Collections_Generic_Dictionary_object__object__o *)
                             **(undefined8 **)(TypeInfo_HumanSetupMaterials + 0xb8),(Il2CppObject *)texture,MethodInfo_Material_get_Item);
        return pUVar10;
      }
      goto label_042efdd6;
    }
    if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar9 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar10 = (UnityEngine_Material_o *)
              ApplicationManagers_ResourceManager__InstantiateAsset_object_
                        (pSVar9,"Human/Parts/Hairs/Materials/HumanHairMat",1,MethodInfo_Material_InstantiateAsset_Material);
    pSVar9 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
    method = (MethodInfo *)System_String__Concat_3af7150("Human/Parts/Hairs/Textures/",texture,"Tex",(MethodInfo *)0x0);
    pSVar7 = (System_String_c *)
             ApplicationManagers_ResourceManager__LoadAsset
                       (pSVar9,(System_String_o *)method,0,(MethodInfo *)0x0);
    if ((pSVar7 == (System_String_c *)0x0) ||
       (method = (MethodInfo *)TypeInfo_Texture2D, (pSVar7->_1).image == TypeInfo_Texture2D)) {
      if (pUVar10 != (UnityEngine_Material_o *)0x0) {
        UnityEngine_Material__set_mainTexture(pUVar10,(UnityEngine_Texture_o *)pSVar7,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        method = (MethodInfo *)pSVar7;
        if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_HumanSetupMaterials + 0xb8)
            != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          method = (MethodInfo *)texture;
          System_Collections_Generic_Dictionary_object__object___set_Item
                    ((System_Collections_Generic_Dictionary_object__object__o *)
                     **(undefined8 **)(TypeInfo_HumanSetupMaterials + 0xb8),(Il2CppObject *)texture,(Il2CppObject *)pUVar10,
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
    __this = (System_Collections_Generic_Dictionary_object__object__o *)**(long **)(TypeInfo_HumanSetupMaterials + 0xb8);
    if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_042efc74;
label_042efdd6:
    pSVar7 = (System_String_c *)il2cpp_runtime_helper_022b2c90();
  }
  il2cpp_runtime_helper_022b2fd0();
  __this_00 = (System_String_c **)pSVar7;
  if (g_data_057adebb == '\0') {
    __this_00 = &"Cloth";
    il2cpp_runtime_helper_023445d0();
    g_data_057adebb = '\x01';
  }
  SVar1 = *(System_String_Fields *)&(pSVar7->_1).name;
  if ((SVar1 != (System_String_Fields)0x0) &&
     (__this_00 = *(System_String_c ***)((long)SVar1 + 0x1e0),
     (System_String_c *)__this_00 != (System_String_c *)0x0)) {
    pSVar11 = (((System_String_c *)__this_00)->_1).image;
    method = (MethodInfo *)"Cloth";
    cVar4 = (*(code *)pSVar11[1]._1.name)(__this_00,"Cloth",pSVar11[1]._1.namespaze);
    if (cVar4 == '\0') {
      return (UnityEngine_Material_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    SVar1 = *(System_String_Fields *)&(pSVar7->_1).name;
    if ((SVar1 != (System_String_Fields)0x0) &&
       (__this_00 = *(System_String_c ***)((long)SVar1 + 0x1e0),
       (System_String_c *)__this_00 != (System_String_c *)0x0)) {
      pSVar9 = *(System_String_o **)&(pSVar7->_1).byval_arg.bits;
      pSVar7 = (((System_String_c *)__this_00)->_1).image;
      method = (MethodInfo *)"Cloth";
      plVar8 = (long *)(*(pSVar7->vtable)._7_CompareTo.methodPtr)
                                 (__this_00,"Cloth",(pSVar7->vtable)._7_CompareTo.method);
      if (plVar8 != (long *)0x0) {
        str1 = (System_String_o *)(**(code **)(*plVar8 + 0x1c8))(plVar8,*(undefined8 *)(*plVar8 + 0x1d0));
        pSVar9 = System_String__Concat_3ae5ba0(pSVar9,str1,(MethodInfo *)0x0);
        return (UnityEngine_Material_o *)pSVar9;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar7 = (System_String_c *)__this_00;
  if (g_data_057ade93 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEffectPresets);
    il2cpp_runtime_helper_023445d0(&MethodInfo_PhotonView_GetComponent_PhotonView);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    pSVar7 = (System_String_c *)&MethodInfo_String_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ade93 = '\x01';
  }
  pIVar2 = (((System_String_c *)__this_00)->vtable)._9_GetTypeCode.methodPtr;
  if (pIVar2 == (Il2CppMethodPointer)0x0) {
    pSVar11 = (System_String_c *)0x0;
  }
  else {
    lVar3 = *(long *)(pIVar2 + 0xd0);
    if (lVar3 == 0) {
label_042f006e:
      pUVar10 = (UnityEngine_Material_o *)il2cpp_runtime_helper_022b2c90();
      if (g_data_057ade95 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEffectPresets);
        pUVar10 = (UnityEngine_Material_o *)il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
        g_data_057ade95 = '\x01';
      }
      if ((pSVar7->vtable)._9_GetTypeCode.methodPtr != (Il2CppMethodPointer)0x0) {
        pSVar11 = pSVar7;
        bVar6 = Characters_HumanSetup__CanUseCharacterEffects((Characters_HumanSetup_o *)pSVar7,method);
        pUVar10 = (UnityEngine_Material_o *)CONCAT44(extraout_var_00,bVar6);
        if ((char)bVar6 != '\0') {
          pIVar2 = (pSVar7->vtable)._9_GetTypeCode.methodPtr;
          if ((pIVar2 != (Il2CppMethodPointer)0x0) && (lVar3 = *(long *)(pIVar2 + 0xd0), lVar3 != 0)) {
            pSVar11 = *(System_String_c **)(lVar3 + 0x18);
            if (*(int *)(TypeInfo_CharacterEffectPresets + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            iVar5 = PatreonEffects_CharacterEffectPresets__ParseOrDefault
                              ((System_String_o *)pSVar11,(MethodInfo *)0x0);
            pIVar2 = (pSVar7->vtable)._9_GetTypeCode.methodPtr;
            if ((pIVar2 != (Il2CppMethodPointer)0x0) && (lVar3 = *(long *)(pIVar2 + 0xe0), lVar3 != 0)) {
              type = PatreonEffects_CharacterEffectPresets__ParseOrDefault
                               (*(System_String_o **)(lVar3 + 0x18),(MethodInfo *)0x0);
              Characters_HumanSetup__ApplyCharacterEffectToPart
                        ((Characters_HumanSetup_o *)pSVar7,
                         *(UnityEngine_GameObject_o **)&(pSVar7->_2).interfaces_count,iVar5,1,in_R8);
              Characters_HumanSetup__ApplyCharacterEffectToPart
                        ((Characters_HumanSetup_o *)pSVar7,
                         *(UnityEngine_GameObject_o **)&(pSVar7->_2).naturalAligment,iVar5,1,in_R8);
              Characters_HumanSetup__ApplyCharacterEffectToPart
                        ((Characters_HumanSetup_o *)pSVar7,(UnityEngine_GameObject_o *)pSVar7->static_fields,
                         type,0,in_R8);
              Characters_HumanSetup__ApplyCharacterEffectToPart
                        ((Characters_HumanSetup_o *)pSVar7,(UnityEngine_GameObject_o *)pSVar7->rgctx_data,type
                         ,0,in_R8);
              return extraout_RAX;
            }
          }
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057adeb7 == '\0') {
            il2cpp_runtime_helper_023445d0(&"char_eyes");
            g_data_057adeb7 = '\x01';
          }
          pSVar9 = System_String__Concat_3ae5ba0
                             (*(System_String_o **)&(pSVar11->_1).this_arg.bits,"char_eyes",(MethodInfo *)0x0
                             );
          return (UnityEngine_Material_o *)pSVar9;
        }
      }
      return pUVar10;
    }
    pSVar11 = *(System_String_c **)(lVar3 + 0x18);
    if (*(int *)(TypeInfo_CharacterEffectPresets + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method = (MethodInfo *)0x0;
    pSVar7 = pSVar11;
    iVar5 = PatreonEffects_CharacterEffectPresets__ParseOrDefault
                      ((System_String_o *)pSVar11,(MethodInfo *)0x0);
    if (iVar5 == 0) {
      pIVar2 = (((System_String_c *)__this_00)->vtable)._9_GetTypeCode.methodPtr;
      if ((pIVar2 == (Il2CppMethodPointer)0x0) || (lVar3 = *(long *)(pIVar2 + 0xe0), lVar3 == 0))
      goto label_042f006e;
      pSVar9 = *(System_String_o **)(lVar3 + 0x18);
      if (*(int *)(TypeInfo_CharacterEffectPresets + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar11 = (System_String_c *)0x0;
      iVar5 = PatreonEffects_CharacterEffectPresets__ParseOrDefault(pSVar9,(MethodInfo *)0x0);
      if (iVar5 == 0) goto label_042f0060;
    }
    if (*(int *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 8) == 4) {
label_042f002a:
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      player = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      bVar6 = PatreonEffects_PatreonHelper__HasCharacterEffectAccess(player,(MethodInfo *)0x0);
      return (UnityEngine_Material_o *)CONCAT44(extraout_var,bVar6);
    }
    x = (System_String_c *)
        UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_00,MethodInfo_PhotonView_GetComponent_PhotonView);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method = (MethodInfo *)0x0;
    pSVar7 = x;
    bVar6 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    pSVar11 = (System_String_c *)CONCAT71((int7)((ulong)pSVar11 >> 8),1);
    if ((char)bVar6 != '\0') {
      if (x == (System_String_c *)0x0) goto label_042f006e;
      if (*(char *)&(x->_1).typeMetadataHandle != '\0') goto label_042f002a;
    }
  }
label_042f0060:
  return (UnityEngine_Material_o *)((ulong)pSVar11 & 0xffffffff);
}


// Characters.HumanSetupMaterials$$GetFaceMaterial
// il2cpp: UnityEngine_Material_o* Characters_HumanSetupMaterials__GetFaceMaterial (System_String_o* texture, bool untiled, const MethodInfo* method);
// 0x42f1480

UnityEngine_Material_o *
Characters_HumanSetupMaterials__GetFaceMaterial
          (System_String_o *texture,bool_conflict untiled,MethodInfo *method)

{
  long lVar1;
  bool_conflict bVar2;
  undefined8 *puVar3;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  UnityEngine_MonoBehaviour_o *__this;
  UnityEngine_MonoBehaviour_c *pUVar6;
  System_Collections_Generic_Dictionary_object__object__o *pSVar7;
  UnityEngine_Material_o *extraout_RAX;
  System_Collections_Generic_HashSet_object__o *__this_00;
  UnityEngine_Material_o *pUVar8;
  
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
    pSVar7 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 0x10);
  }
  else {
    if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) != 0) goto label_042f14ad;
label_042f1574:
    il2cpp_runtime_helper_02337ed0();
    pSVar7 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 0x10);
  }
  if (pSVar7 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar7,(Il2CppObject *)texture,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar2 == '\0') {
      if ((char)untiled == '\0') {
        puVar3 = &"HumanFaceMat";
      }
      else {
        puVar3 = &"HumanFaceUntiledMat";
      }
      pSVar4 = (System_String_o *)*puVar3;
      if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar5 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
      pSVar4 = System_String__Concat_3ae5ba0("Human/Parts/Face/Materials/",pSVar4,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar8 = (UnityEngine_Material_o *)
               ApplicationManagers_ResourceManager__InstantiateAsset_object_(pSVar5,pSVar4,1,MethodInfo_Material_InstantiateAsset_Material);
      pSVar4 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
      pSVar5 = System_String__Concat_3ae5ba0("Human/Parts/Face/Textures/",texture,(MethodInfo *)0x0);
      __this = (UnityEngine_MonoBehaviour_o *)
               ApplicationManagers_ResourceManager__LoadAsset(pSVar4,pSVar5,0,(MethodInfo *)0x0);
      if ((__this != (UnityEngine_MonoBehaviour_o *)0x0) &&
         ((UnityEngine_Texture_c *)__this->klass != TypeInfo_Texture2D)) goto label_042f1712;
      if (pUVar8 != (UnityEngine_Material_o *)0x0) {
        UnityEngine_Material__set_mainTexture(pUVar8,(UnityEngine_Texture_o *)__this,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar7 = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 0x10);
        if (pSVar7 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___set_Item
                    (pSVar7,(Il2CppObject *)texture,(Il2CppObject *)pUVar8,MethodInfo_Void_set_Item);
          goto label_042f16cf;
        }
      }
    }
    else {
label_042f16cf:
      if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar7 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 0x10);
      if (pSVar7 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        pUVar8 = (UnityEngine_Material_o *)
                 System_Collections_Generic_Dictionary_object__object___get_Item
                           (pSVar7,(Il2CppObject *)texture,MethodInfo_Material_get_Item);
        return pUVar8;
      }
    }
  }
  __this = (UnityEngine_MonoBehaviour_o *)il2cpp_runtime_helper_022b2c90();
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
  pUVar6 = (UnityEngine_MonoBehaviour_c *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,3);
  if (pUVar6 != (UnityEngine_MonoBehaviour_c *)0x0) {
    if (*(int *)&(pUVar6->_1).namespaze != 0) {
      (pUVar6->_1).byval_arg.data = "Fire1";
      il2cpp_runtime_helper_022b4080(&(pUVar6->_1).byval_arg);
      if (1 < *(uint *)&(pUVar6->_1).namespaze) {
        *(undefined8 *)&(pUVar6->_1).byval_arg.bits = "Fire2";
        il2cpp_runtime_helper_022b4080(&(pUVar6->_1).byval_arg.bits);
        if (2 < *(uint *)&(pUVar6->_1).namespaze) {
          (pUVar6->_1).this_arg.data = "Lightning1";
          il2cpp_runtime_helper_022b4080(&(pUVar6->_1).this_arg);
          __this[0xd].klass = pUVar6;
          il2cpp_runtime_helper_022b4080(__this + 0xd,pUVar6);
          pSVar7 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_Renderer_Material)
          ;
          System_Collections_Generic_Dictionary_object__object____ctor(pSVar7,MethodInfo_Dictionary_2_UnityEngine_Renderer_UnityEngine_Material);
          __this[0xf].fields.m_CachedPtr = (intptr_t)pSVar7;
          il2cpp_runtime_helper_022b4080(&__this[0xf].fields);
          UnityEngine_MonoBehaviour___ctor(__this,(MethodInfo *)0x0);
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
  __this_00 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor(__this_00,MethodInfo_HashSet_1_System_String);
  lVar1 = *(long *)(TypeInfo_HumanSetup + 0xb8);
  *(System_Collections_Generic_HashSet_object__o **)(lVar1 + 0x40) = __this_00;
  pUVar8 = (UnityEngine_Material_o *)il2cpp_runtime_helper_022b4080(lVar1 + 0x40,__this_00);
  return pUVar8;
}


// Characters.HumanSetupMaterials$$GetTitanEyeMaterial
// il2cpp: UnityEngine_Material_o* Characters_HumanSetupMaterials__GetTitanEyeMaterial (System_String_o* texture, const MethodInfo* method);
// 0x42f19e0

UnityEngine_Material_o *
Characters_HumanSetupMaterials__GetTitanEyeMaterial(System_String_o *texture,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_String_o *pSVar2;
  bool_conflict bVar3;
  UnityEngine_Material_o *pUVar4;
  System_String_o *name;
  UnityEngine_Texture_o *value;
  UnityEngine_Material_o *extraout_RAX;
  
  if (g_data_057adeaa == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Material_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupMaterials);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Material_InstantiateAsset_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
    il2cpp_runtime_helper_023445d0(&"Titans/Heads/Textures/");
    il2cpp_runtime_helper_023445d0(&"Titans/Heads/Materials/TitanEyesMat");
    g_data_057adeaa = '\x01';
    if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) goto label_042f1abd;
label_042f1a0d:
    pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 0x18);
  }
  else {
    if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) != 0) goto label_042f1a0d;
label_042f1abd:
    il2cpp_runtime_helper_02337ed0();
    pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 0x18);
  }
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar1,(Il2CppObject *)texture,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar3 == '\0') {
      if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar2 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar4 = (UnityEngine_Material_o *)
               ApplicationManagers_ResourceManager__InstantiateAsset_object_
                         (pSVar2,"Titans/Heads/Materials/TitanEyesMat",1,MethodInfo_Material_InstantiateAsset_Material);
      pSVar2 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
      name = System_String__Concat_3ae5ba0("Titans/Heads/Textures/",texture,(MethodInfo *)0x0);
      value = (UnityEngine_Texture_o *)
              ApplicationManagers_ResourceManager__LoadAsset(pSVar2,name,0,(MethodInfo *)0x0);
      if ((value != (UnityEngine_Texture_o *)0x0) && (value->klass != TypeInfo_Texture2D)) goto label_042f1c39;
      if (pUVar4 != (UnityEngine_Material_o *)0x0) {
        UnityEngine_Material__set_mainTexture(pUVar4,value,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 0x18);
        if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___set_Item
                    (pSVar1,(Il2CppObject *)texture,(Il2CppObject *)pUVar4,MethodInfo_Void_set_Item);
          goto label_042f1bf3;
        }
      }
    }
    else {
label_042f1bf3:
      if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 0x18);
      if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        pUVar4 = (UnityEngine_Material_o *)
                 System_Collections_Generic_Dictionary_object__object___get_Item
                           (pSVar1,(Il2CppObject *)texture,MethodInfo_Material_get_Item);
        return pUVar4;
      }
    }
  }
  value = (UnityEngine_Texture_o *)il2cpp_runtime_helper_022b2c90();
label_042f1c39:
  il2cpp_runtime_helper_022b2fd0();
  System_Object___ctor((Il2CppObject *)value,(MethodInfo *)0x0);
  return extraout_RAX;
}


// Characters.HumanSetupMaterials$$GetSkinMaterial
// il2cpp: UnityEngine_Material_o* Characters_HumanSetupMaterials__GetSkinMaterial (System_String_o* texture, UnityEngine_Color_o color, const MethodInfo* method);
// 0x42f05a0

UnityEngine_Material_o *
Characters_HumanSetupMaterials__GetSkinMaterial
          (System_String_o *texture,UnityEngine_Color_o color,MethodInfo *method)

{
  System_String_c *str0;
  char cVar1;
  bool_conflict bVar2;
  UnityEngine_Material_o *__this;
  MethodInfo_255A0F0 *name;
  System_String_Fields SVar3;
  undefined8 *puVar4;
  System_String_Fields SVar5;
  System_String_o *__this_00;
  System_String_o *pSVar6;
  UnityEngine_Transform_array *value;
  System_String_Fields SVar7;
  System_String_Fields __this_01;
  UnityEngine_GameObject_o *pUVar8;
  UnityEngine_Transform_o *pUVar9;
  System_String_Fields __this_02;
  UnityEngine_Transform_o *value_00;
  UnityEngine_Material_o *extraout_RAX;
  undefined8 *puVar10;
  System_String_o *unaff_RBP;
  undefined4 uVar11;
  MethodInfo_255A0F0 *__this_03;
  System_String_Fields SVar12;
  undefined1 auVar13 [16];
  undefined4 uStack_a4;
  System_String_Fields SStack_a0;
  undefined8 uStack_98;
  System_String_Fields SStack_90;
  System_String_o *pSStack_88;
  undefined8 uStack_80;
  System_String_Fields SStack_78;
  
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
  pSVar6 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this = (UnityEngine_Material_o *)
           ApplicationManagers_ResourceManager__InstantiateAsset_object_(pSVar6,"Human/Parts/Costumes/Materials/HumanSkinMat",1,MethodInfo_Material_InstantiateAsset_Material);
  pSVar6 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
  name = (MethodInfo_255A0F0 *)System_String__Concat_3ae5ba0("Human/Parts/Costumes/Textures/",texture,(MethodInfo *)0x0);
  SVar3 = (System_String_Fields)
          ApplicationManagers_ResourceManager__LoadAsset(pSVar6,(System_String_o *)name,0,(MethodInfo *)0x0);
  if ((SVar3 == (System_String_Fields)0x0) ||
     (name = TypeInfo_Texture2D, *(MethodInfo_255A0F0 **)SVar3 == TypeInfo_Texture2D)) {
    if (__this != (UnityEngine_Material_o *)0x0) {
      UnityEngine_Material__SetTexture(__this,"_weapon_tex",(UnityEngine_Texture_o *)SVar3,(MethodInfo *)0x0);
      UnityEngine_Material__SetColor(__this,"_skin_color",color,(MethodInfo *)0x0);
      return __this;
    }
    SVar3 = (System_String_Fields)il2cpp_runtime_helper_022b2c90();
  }
  il2cpp_runtime_helper_022b2fd0();
  cVar1 = (char)name;
  SVar12 = SVar3;
  if (g_data_057adeb0 == '\0') {
    il2cpp_runtime_helper_023445d0(&"_arm_L");
    il2cpp_runtime_helper_023445d0(&"_uniform");
    il2cpp_runtime_helper_023445d0(&"_arm_R");
    il2cpp_runtime_helper_023445d0(&"Type");
    il2cpp_runtime_helper_023445d0(&"_casual_arm_AH_R");
    il2cpp_runtime_helper_023445d0(&"_casual_arm_AH_L");
    il2cpp_runtime_helper_023445d0(&"player");
    il2cpp_runtime_helper_023445d0(&"Uniform");
    SVar12 = (System_String_Fields)&"_casual";
    il2cpp_runtime_helper_023445d0();
    g_data_057adeb0 = '\x01';
  }
  pSVar6 = "player";
  SVar5 = *(System_String_Fields *)((long)SVar3 + 0x10);
  if (SVar5 != (System_String_Fields)0x0) {
    if ((*(uint *)((long)SVar5 + 0x1d0) | 2) == 3) {
      puVar4 = &"_casual_arm_AH_R";
      puVar10 = &"_casual_arm_AH_L";
label_042f086b:
      if (cVar1 == '\0') {
        puVar10 = puVar4;
      }
      pSVar6 = System_String__Concat_3af7150
                         ((System_String_o *)((System_String_o *)((long)SVar3 + 0x18))->klass,pSVar6,
                          (System_String_o *)*puVar10,(MethodInfo *)0x0);
      return (UnityEngine_Material_o *)pSVar6;
    }
    SVar12 = *(System_String_Fields *)((long)SVar5 + 0x1d8);
    unaff_RBP = pSVar6;
    if ((SVar12 != (System_String_Fields)0x0) &&
       (name = "Type",
       SVar5 = (System_String_Fields)
               (**(code **)(*(long *)SVar12 + 0x1a8))
                         (SVar12,"Type",*(undefined8 *)(*(long *)SVar12 + 0x1b0)),
       SVar5 != (System_String_Fields)0x0)) {
      name = *(MethodInfo_255A0F0 **)(*(long *)SVar5 + 0x1d0);
      __this_00 = (System_String_o *)(**(code **)(*(long *)SVar5 + 0x1c8))();
      SVar12 = SVar5;
      if (__this_00 != (System_String_o *)0x0) {
        bVar2 = System_String__StartsWith(__this_00,"Uniform",(MethodInfo *)0x0);
        if ((char)bVar2 == '\0') {
          puVar10 = &"_casual";
        }
        else {
          puVar10 = &"_uniform";
        }
        pSVar6 = System_String__Concat_3ae5ba0(pSVar6,(System_String_o *)*puVar10,(MethodInfo *)0x0);
        puVar4 = &"_arm_R";
        puVar10 = (undefined8 *)&"_arm_L";
        goto label_042f086b;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  __this_03 = name;
  SStack_78 = SVar3;
  if (g_data_057adea1 == '\0') {
    uStack_80 = 0x42f08b4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_SkinnedMeshRenderer_AddComponent_SkinnedMeshRenderer);
    uStack_80 = 0x42f08c0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRenderer);
    uStack_80 = 0x42f08cc;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    uStack_80 = 0x42f08d8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    uStack_80 = 0x42f08e4;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    uStack_80 = 0x42f08f0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    g_data_057adea1 = '\x01';
  }
  SVar3._stringLength = 0;
  SVar3._firstChar = 0;
  SVar3._6_2_ = 0;
  if (*(System_String_Fields *)((long)SVar12 + 0x160) != (System_String_Fields)0x0) {
    uStack_80 = 0x42f0917;
    SVar5 = (System_String_Fields)
            UnityEngine_GameObject__GetComponent_object_
                      ((UnityEngine_GameObject_o *)*(System_String_Fields *)((long)SVar12 + 0x160),
                       MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRenderer);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      uStack_80 = 0x42f0932;
      il2cpp_runtime_helper_02337ed0();
    }
    __this_03 = (MethodInfo_255A0F0 *)0x0;
    uStack_80 = 0x42f093e;
    SVar3 = SVar5;
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)SVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      SVar3 = *(System_String_Fields *)((long)SVar12 + 0x160);
      if (SVar3 == (System_String_Fields)0x0) goto label_042f0b43;
      uStack_80 = 0x42f0961;
      __this_03 = MethodInfo_SkinnedMeshRenderer_AddComponent_SkinnedMeshRenderer;
      SVar5 = (System_String_Fields)
              UnityEngine_GameObject__AddComponent_object_
                        ((UnityEngine_GameObject_o *)SVar3,(MethodInfo_255A020 *)MethodInfo_SkinnedMeshRenderer_AddComponent_SkinnedMeshRenderer);
    }
    if (SVar5 != (System_String_Fields)0x0) {
      uStack_80 = 0x42f0977;
      value = UnityEngine_SkinnedMeshRenderer__get_bones
                        ((UnityEngine_SkinnedMeshRenderer_o *)SVar5,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
        uStack_80 = 0x42f0992;
        il2cpp_runtime_helper_02337ed0();
      }
      SVar12 = *(System_String_Fields *)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        uStack_80 = 0x42f09b8;
        il2cpp_runtime_helper_02337ed0();
      }
      uStack_80 = 0x42f09d2;
      SVar3 = SVar12;
      SVar7 = (System_String_Fields)
              ApplicationManagers_ResourceManager__InstantiateAsset_object_
                        ((System_String_o *)SVar12,(System_String_o *)name,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
      __this_03 = name;
      if (SVar7 != (System_String_Fields)0x0) {
        uStack_80 = 0x42f09e7;
        __this_03 = MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRenderer;
        __this_01 = (System_String_Fields)
                    UnityEngine_GameObject__GetComponent_object_
                              ((UnityEngine_GameObject_o *)SVar7,MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRenderer);
        SVar3 = SVar7;
        if (__this_01 != (System_String_Fields)0x0) {
          __this_03 = (MethodInfo_255A0F0 *)0x0;
          uStack_80 = 0x42f09fd;
          SVar3 = __this_01;
          pUVar8 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
          if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
            uStack_80 = 0x42f0a10;
            pUVar9 = UnityEngine_GameObject__get_transform(pUVar8,(MethodInfo *)0x0);
            __this_03 = (MethodInfo_255A0F0 *)0x0;
            uStack_80 = 0x42f0a1d;
            SVar3 = SVar5;
            SVar7 = (System_String_Fields)
                    UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SVar5,(MethodInfo *)0x0);
            if (SVar7 != (System_String_Fields)0x0) {
              __this_03 = (MethodInfo_255A0F0 *)0x0;
              uStack_80 = 0x42f0a30;
              __this_02 = (System_String_Fields)
                          UnityEngine_GameObject__get_transform
                                    ((UnityEngine_GameObject_o *)SVar7,(MethodInfo *)0x0);
              SVar3 = SVar7;
              if (__this_02 != (System_String_Fields)0x0) {
                __this_03 = (MethodInfo_255A0F0 *)0x0;
                uStack_80 = 0x42f0a43;
                value_00 = UnityEngine_Transform__get_parent
                                     ((UnityEngine_Transform_o *)__this_02,(MethodInfo *)0x0);
                SVar3 = __this_02;
                if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
                  uStack_80 = 0x42f0a59;
                  UnityEngine_Transform__set_parent(pUVar9,value_00,(MethodInfo *)0x0);
                  __this_03 = (MethodInfo_255A0F0 *)0x0;
                  uStack_80 = 0x42f0a63;
                  SVar3 = __this_01;
                  pUVar9 = UnityEngine_Component__get_transform
                                     ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
                  if (g_data_057a65d5 == '\0') {
                    SVar3 = (System_String_Fields)&TypeInfo_Vector3;
                    uStack_80 = 0x42f0a7b;
                    il2cpp_runtime_helper_023445d0();
                    g_data_057a65d5 = '\x01';
                  }
                  SVar12._stringLength = 0;
                  SVar12._firstChar = 0;
                  SVar12._6_2_ = 0;
                  if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
                    uStack_80 = 0x42f0ab0;
                    UnityEngine_Transform__set_localPosition
                              (pUVar9,(UnityEngine_Vector3_o)
                                      **(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8),(MethodInfo *)0x0
                              );
                    __this_03 = (MethodInfo_255A0F0 *)0x0;
                    uStack_80 = 0x42f0aba;
                    SVar3 = __this_01;
                    pUVar9 = UnityEngine_Component__get_transform
                                       ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
                    if (g_data_057a6932 == '\0') {
                      SVar3 = (System_String_Fields)&TypeInfo_Vector3;
                      uStack_80 = 0x42f0ad2;
                      il2cpp_runtime_helper_023445d0();
                      g_data_057a6932 = '\x01';
                    }
                    SVar12._stringLength = 0;
                    SVar12._firstChar = 0;
                    SVar12._6_2_ = 0;
                    if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
                      uStack_80 = 0x42f0afd;
                      UnityEngine_Transform__set_localScale
                                (pUVar9,(UnityEngine_Vector3_o)
                                        *(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc),
                                 (MethodInfo *)0x0);
                      uStack_80 = 0x42f0b0a;
                      UnityEngine_SkinnedMeshRenderer__set_bones
                                ((UnityEngine_SkinnedMeshRenderer_o *)__this_01,value,(MethodInfo *)0x0);
                      uStack_80 = 0x42f0b19;
                      UnityEngine_SkinnedMeshRenderer__set_quality
                                ((UnityEngine_SkinnedMeshRenderer_o *)__this_01,4,(MethodInfo *)0x0);
                      uStack_80 = 0x42f0b23;
                      pUVar9 = UnityEngine_SkinnedMeshRenderer__get_rootBone
                                         ((UnityEngine_SkinnedMeshRenderer_o *)SVar5,(MethodInfo *)0x0);
                      uStack_80 = 0x42f0b30;
                      UnityEngine_SkinnedMeshRenderer__set_rootBone
                                ((UnityEngine_SkinnedMeshRenderer_o *)__this_01,pUVar9,(MethodInfo *)0x0);
                      pUVar8 = UnityEngine_Component__get_gameObject
                                         ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
                      return (UnityEngine_Material_o *)pUVar8;
                    }
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
  uStack_80 = 0x42f0b48;
  auVar13 = il2cpp_runtime_helper_022b2c90();
  uStack_80 = auVar13._0_8_;
  if (__this_03 != (MethodInfo_255A0F0 *)0x0) {
    UnityEngine_Renderer__set_material((UnityEngine_Renderer_o *)__this_03,auVar13._8_8_,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  pSStack_88 = (System_String_o *)0x42f0b69;
  uStack_98 = il2cpp_runtime_helper_022b2c90();
  uVar11 = SUB84(__this_03,0);
  SVar5 = SVar3;
  SStack_90 = SVar12;
  pSStack_88 = unaff_RBP;
  if (g_data_057adeaf == '\0') {
    SStack_a0._stringLength = 0x42f0b8d;
    SStack_a0._firstChar = 0;
    SStack_a0._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&"_ts");
    SStack_a0._stringLength = 0x42f0b99;
    SStack_a0._firstChar = 0;
    SStack_a0._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&"_empty");
    SStack_a0._stringLength = 0x42f0ba5;
    SStack_a0._firstChar = 0;
    SStack_a0._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&"character_hand_l");
    SStack_a0._stringLength = 0x42f0bb1;
    SStack_a0._firstChar = 0;
    SStack_a0._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&"character_hand_r");
    SStack_a0._stringLength = 0x42f0bbd;
    SStack_a0._firstChar = 0;
    SStack_a0._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&"_0");
    SVar5 = (System_String_Fields)&"_ah_0";
    SStack_a0._stringLength = 0x42f0bc9;
    SStack_a0._firstChar = 0;
    SStack_a0._6_2_ = 0;
    il2cpp_runtime_helper_023445d0();
    g_data_057adeaf = '\x01';
  }
  if ((char)__this_03 == '\0') {
    puVar10 = &"character_hand_r";
    SVar12 = *(System_String_Fields *)((long)SVar3 + 0x10);
  }
  else {
    puVar10 = &"character_hand_l";
    SVar12 = *(System_String_Fields *)((long)SVar3 + 0x10);
  }
  if (SVar12 == (System_String_Fields)0x0) {
    SStack_a0._stringLength = 0x42f0c3b;
    SStack_a0._firstChar = 0;
    SStack_a0._6_2_ = 0;
    il2cpp_runtime_helper_022b2c90();
    uStack_a4 = uVar11;
    SStack_a0 = SVar3;
    if (g_data_057adeae == '\0') {
      il2cpp_runtime_helper_023445d0(&"character_leg_");
      g_data_057adeae = '\x01';
    }
    str0 = ((System_String_o *)((long)SVar5 + 0x18))->klass;
    pSVar6 = System_Int32__ToString((int32_t)&uStack_a4,(MethodInfo *)0x0);
    pSVar6 = System_String__Concat_3af7150((System_String_o *)str0,"character_leg_",pSVar6,(MethodInfo *)0x0);
    return (UnityEngine_Material_o *)pSVar6;
  }
  pSVar6 = (System_String_o *)*puVar10;
  if ((ulong)(long)*(int *)((long)SVar12 + 0x1d0) < 4) {
    SStack_a0._stringLength = 0x42f0c22;
    SStack_a0._firstChar = 0;
    SStack_a0._6_2_ = 0;
    pSVar6 = System_String__Concat_3ae5ba0
                       (pSVar6,*(System_String_o **)(&g_data_0524f3a0)[*(int *)((long)SVar12 + 0x1d0)],
                        (MethodInfo *)0x0);
  }
  pSVar6 = System_String__Concat_3ae5ba0
                     ((System_String_o *)((System_String_o *)((long)SVar3 + 0x18))->klass,pSVar6,
                      (MethodInfo *)0x0);
  return (UnityEngine_Material_o *)pSVar6;
}


// Characters.HumanSetupMaterials$$.ctor
// il2cpp: void Characters_HumanSetupMaterials___ctor (Characters_HumanSetupMaterials_o* __this, const MethodInfo* method);
// 0x42f1c50

void Characters_HumanSetupMaterials___ctor(Characters_HumanSetupMaterials_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.HumanSetupMaterials$$.cctor
// il2cpp: void Characters_HumanSetupMaterials___cctor (const MethodInfo* method);
// 0x42f1c60

void Characters_HumanSetupMaterials___cctor(MethodInfo *method)

{
  ulong *puVar1;
  long lVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  ulong uVar4;
  
  if (cRam00000000057adeac == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_UnityEngine_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupMaterials);
    il2cpp_runtime_helper_023445d0(&"Human/Parts/Costumes/Textures/");
    il2cpp_runtime_helper_023445d0(&"Human/Parts/Costumes/Materials/");
    cRam00000000057adeac = '\x01';
  }
  pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Material);
  System_Collections_Generic_Dictionary_object__object____ctor(pSVar3,MethodInfo_Dictionary_2_System_String_UnityEngine_Material);
  **(undefined8 **)(TypeInfo_HumanSetupMaterials + 0xb8) = pSVar3;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_HumanSetupMaterials + 0xb8),pSVar3);
  pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Material);
  System_Collections_Generic_Dictionary_object__object____ctor(pSVar3,MethodInfo_Dictionary_2_System_String_UnityEngine_Material);
  lVar2 = *(long *)(TypeInfo_HumanSetupMaterials + 0xb8);
  *(System_Collections_Generic_Dictionary_object__object__o **)(lVar2 + 8) = pSVar3;
  il2cpp_runtime_helper_022b4080(lVar2 + 8,pSVar3);
  pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Material);
  System_Collections_Generic_Dictionary_object__object____ctor(pSVar3,MethodInfo_Dictionary_2_System_String_UnityEngine_Material);
  lVar2 = *(long *)(TypeInfo_HumanSetupMaterials + 0xb8);
  *(System_Collections_Generic_Dictionary_object__object__o **)(lVar2 + 0x10) = pSVar3;
  il2cpp_runtime_helper_022b4080(lVar2 + 0x10,pSVar3);
  pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Material);
  System_Collections_Generic_Dictionary_object__object____ctor(pSVar3,MethodInfo_Dictionary_2_System_String_UnityEngine_Material);
  lVar2 = *(long *)(TypeInfo_HumanSetupMaterials + 0xb8);
  *(System_Collections_Generic_Dictionary_object__object__o **)(lVar2 + 0x18) = pSVar3;
  il2cpp_runtime_helper_022b4080(lVar2 + 0x18,pSVar3);
  lVar2 = *(long *)(TypeInfo_HumanSetupMaterials + 0xb8);
  *(undefined8 *)(lVar2 + 0x20) = "Human/Parts/Costumes/Textures/";
  il2cpp_runtime_helper_022b4080(lVar2 + 0x20);
  lVar2 = *(long *)(TypeInfo_HumanSetupMaterials + 0xb8);
  *(undefined8 *)(lVar2 + 0x28) = _DAT_055c98f0;
  uVar4 = lVar2 + 0x28;
  if (g_data_057ba470 != 0) {
    LOCK();
    puVar1 = (ulong *)((long)&g_data_05803fe8 + (ulong)((uint)(uVar4 >> 0xf) & 0x3fff8));
    *puVar1 = *puVar1 | 1L << ((byte)(uVar4 >> 0xc) & 0x3f);
    UNLOCK();
  }
  return;
}


