// Type: PatreonEffects.NameEffectHelpers
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/PatreonEffects/NameEffectHelpers.cs
// Prior real C# source: none
// --------------------------------

// PatreonEffects.NameEffectHelpers$$TryGetNameEffect
// il2cpp: bool PatreonEffects_NameEffectHelpers__TryGetNameEffect (Photon_Realtime_Player_o* player, PatreonEffects_ResolvedNameEffect_o* result, const MethodInfo* method);
// 0x4327c70

bool_conflict
PatreonEffects_NameEffectHelpers__TryGetNameEffect
          (Photon_Realtime_Player_o *player,PatreonEffects_ResolvedNameEffect_o *result,MethodInfo *method)

{
  void **ppvVar1;
  undefined8 *puVar2;
  int iVar3;
  Settings_BoolSetting_o *pSVar4;
  Settings_StringSetting_o *pSVar5;
  Settings_ColorSetting_o *pSVar6;
  Utility_Color255_o *__this;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  UnityEngine_Object_o *pUVar7;
  UnityEngine_GameObject_o *pUVar8;
  TMPro_TMP_Text_o *__this_01;
  PatreonEffects_NameEffectController_o *__this_02;
  long *plVar9;
  code *vtableDispatch;
  UnityEngine_Vector2_o UVar10;
  char cVar11;
  bool_conflict bVar12;
  bool_conflict bVar13;
  bool_conflict extraout_EAX;
  int32_t iVar14;
  uint uVar15;
  bool_conflict extraout_EAX_00;
  bool_conflict extraout_EAX_01;
  Settings_ProfileSettings_o *pSVar16;
  TMPro_TMP_FontAsset_o *pTVar17;
  MethodInfo *pMVar18;
  System_String_o *pSVar19;
  TMPro_TMP_FontAsset_o *pTVar20;
  undefined8 uVar21;
  System_Type_array *components;
  System_Type_o *pSVar22;
  long lVar23;
  System_RuntimeTypeHandle_o SVar24;
  UnityEngine_Transform_o *pUVar25;
  UnityEngine_RectTransform_o *__this_03;
  UnityEngine_RectTransform_o *__this_04;
  TMPro_TextMeshProUGUI_o *pTVar26;
  undefined8 uVar27;
  MethodInfo *pMVar28;
  PatreonEffects_NameEffectSettings_o *settings;
  MethodInfo *method_00;
  MethodInfo *method_01;
  undefined8 extraout_RDX;
  MethodInfo *pMVar29;
  PatreonEffects_NameEffectApplier_o *__this_05;
  UnityEngine_UI_Text_o *__this_06;
  UnityEngine_Material_o *pUVar30;
  void **ppvVar31;
  long *plVar32;
  long *unaff_R12;
  byte bVar33;
  ulong unaff_R13;
  TMPro_TMP_Text_o *__this_07;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Color_o UVar34;
  UnityEngine_Vector3_o value;
  uint uStack_154;
  TMPro_TMP_FontAsset_o *pTStack_100;
  TMPro_TMP_FontAsset_o *pTStack_f8;
  System_String_o *pSStack_f0;
  ulong uStack_e8;
  long *plStack_e0;
  PatreonEffects_ResolvedNameEffect_o *pPStack_d8;
  Settings_ProfileSettings_o *pSStack_d0;
  Photon_Realtime_Player_o *pPStack_c8;
  int32_t local_ac;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  float local_48;
  float fStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  float local_38;
  float fStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pMVar18 = (MethodInfo *)result;
  if (g_data_057ae059 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color255_get_Value);
    g_data_057ae059 = '\x01';
  }
  pTVar17 = (TMPro_TMP_FontAsset_o *)player;
  pSVar16 = PatreonEffects_NameEffectHelpers__GetProfile(player,pMVar18);
  if (pSVar16 == (Settings_ProfileSettings_o *)0x0) {
    bVar33 = 0;
    local_38 = 1.0;
    fStack_34 = 1.0;
    uStack_30 = 0;
    uStack_2c = 0;
    local_a8 = ZEXT816(0x3f8000003f800000);
    local_68 = ZEXT816(0x3f8000003f800000);
    local_58 = ZEXT816(0x3f8000003f800000);
    unaff_R12 = (long *)0x0;
    local_78 = ZEXT816(0x3f8000003f800000);
    local_88 = ZEXT816(0x3f8000003f800000);
    local_98 = ZEXT816(0x3f8000003f800000);
    local_48 = local_38;
    fStack_44 = fStack_34;
    uStack_40 = uStack_30;
    uStack_3c = uStack_2c;
label_04327dd8:
    local_ac = 0;
    (result->fields).ColorC.fields.b = 0.0;
    (result->fields).ColorC.fields.a = 0.0;
    (result->fields).ColorD.fields.r = 0.0;
    (result->fields).ColorD.fields.g = 0.0;
    (result->fields).ColorB.fields.b = 0.0;
    (result->fields).ColorB.fields.a = 0.0;
    (result->fields).ColorC.fields.r = 0.0;
    (result->fields).ColorC.fields.g = 0.0;
    (result->fields).ColorA.fields.b = 0.0;
    (result->fields).ColorA.fields.a = 0.0;
    (result->fields).ColorB.fields.r = 0.0;
    (result->fields).ColorB.fields.g = 0.0;
    (result->fields).Enabled = 0;
    (result->fields).Type = 0;
    (result->fields).ColorA.fields.r = 0.0;
    (result->fields).ColorA.fields.g = 0.0;
    (result->fields).ColorD.fields.b = 0.0;
    (result->fields).ColorD.fields.a = 0.0;
    bVar13 = 0;
    if ((player != (Photon_Realtime_Player_o *)0x0) && (pSVar16 != (Settings_ProfileSettings_o *)0x0)) {
      bVar12 = PatreonEffects_PatreonHelper__HasNameEffectAccess(player,pMVar18);
      bVar13 = 0;
      if ((bVar33 != 0) && ((char)bVar12 != '\0')) {
        bVar13 = PatreonEffects_NameEffectPresets__TryResolve
                           ((System_String_o *)unaff_R12,&local_ac,method_00);
        if ((char)bVar13 == '\0') {
          bVar13 = 0;
        }
        else {
          *(undefined1 *)&(result->fields).Enabled = 1;
          (result->fields).Type = local_ac;
          (result->fields).ColorA.fields.r = (float)local_58._0_4_;
          (result->fields).ColorA.fields.g = (float)local_58._4_4_;
          (result->fields).ColorA.fields.b = local_68._0_4_;
          (result->fields).ColorA.fields.a = local_68._4_4_;
          (result->fields).ColorB.fields.r = (float)local_78._0_4_;
          (result->fields).ColorB.fields.g = (float)local_78._4_4_;
          (result->fields).ColorB.fields.b = local_88._0_4_;
          (result->fields).ColorB.fields.a = local_88._4_4_;
          (result->fields).ColorC.fields.r = (float)local_a8._0_4_;
          (result->fields).ColorC.fields.g = (float)local_a8._4_4_;
          (result->fields).ColorC.fields.b = local_98._0_4_;
          (result->fields).ColorC.fields.a = local_98._4_4_;
          (result->fields).ColorD.fields.r = local_38;
          (result->fields).ColorD.fields.g = fStack_34;
          (result->fields).ColorD.fields.b = local_48;
          (result->fields).ColorD.fields.a = fStack_44;
          bVar13 = (bool_conflict)CONCAT71((uint7)(uint3)((uint)local_ac >> 8),1);
        }
      }
    }
    return bVar13;
  }
  pSVar4 = (pSVar16->fields).NameEffectEnabled;
  if ((((pSVar4 != (Settings_BoolSetting_o *)0x0) &&
       (pSVar5 = (pSVar16->fields).NameEffect, pSVar5 != (Settings_StringSetting_o *)0x0)) &&
      (pSVar6 = (pSVar16->fields).NameEffectColorA, pSVar6 != (Settings_ColorSetting_o *)0x0)) &&
     (pTVar17 = (TMPro_TMP_FontAsset_o *)(pSVar6->fields)._value, pTVar17 != (TMPro_TMP_FontAsset_o *)0x0)) {
    bVar33 = *(byte *)((long)&(pSVar4->fields).DefaultValue + 1);
    unaff_R13 = (ulong)bVar33;
    unaff_R12 = (long *)(pSVar5->fields)._value;
    pMVar18 = (MethodInfo *)0x0;
    UVar34 = Utility_Color255__ToColor((Utility_Color255_o *)pTVar17,(MethodInfo *)0x0);
    local_68._8_4_ = in_XMM1_Dc;
    local_68._0_8_ = UVar34.fields._8_8_;
    local_68._12_4_ = in_XMM1_Dd;
    pSVar6 = (pSVar16->fields).NameEffectColorB;
    if (pSVar6 != (Settings_ColorSetting_o *)0x0) {
      local_58._8_4_ = extraout_XMM0_Dc;
      local_58._0_8_ = UVar34.fields._0_8_;
      local_58._12_4_ = extraout_XMM0_Dd;
      pTVar17 = (TMPro_TMP_FontAsset_o *)(pSVar6->fields)._value;
      if (pTVar17 != (TMPro_TMP_FontAsset_o *)0x0) {
        pMVar18 = (MethodInfo *)0x0;
        UVar34 = Utility_Color255__ToColor((Utility_Color255_o *)pTVar17,(MethodInfo *)0x0);
        local_88._8_4_ = in_XMM1_Dc;
        local_88._0_8_ = UVar34.fields._8_8_;
        local_88._12_4_ = in_XMM1_Dd;
        pSVar6 = (pSVar16->fields).NameEffectColorC;
        if (pSVar6 != (Settings_ColorSetting_o *)0x0) {
          local_78._8_4_ = extraout_XMM0_Dc_00;
          local_78._0_8_ = UVar34.fields._0_8_;
          local_78._12_4_ = extraout_XMM0_Dd_00;
          pTVar17 = (TMPro_TMP_FontAsset_o *)(pSVar6->fields)._value;
          if (pTVar17 != (TMPro_TMP_FontAsset_o *)0x0) {
            pMVar18 = (MethodInfo *)0x0;
            UVar34 = Utility_Color255__ToColor((Utility_Color255_o *)pTVar17,(MethodInfo *)0x0);
            pSVar6 = (pSVar16->fields).NameEffectColorD;
            if (pSVar6 != (Settings_ColorSetting_o *)0x0) {
              local_a8._8_4_ = extraout_XMM0_Dc_01;
              local_a8._0_8_ = UVar34.fields._0_8_;
              local_a8._12_4_ = extraout_XMM0_Dd_01;
              local_98._8_4_ = in_XMM1_Dc;
              local_98._0_8_ = UVar34.fields._8_8_;
              local_98._12_4_ = in_XMM1_Dd;
              __this = (pSVar6->fields)._value;
              pTVar17 = (TMPro_TMP_FontAsset_o *)0x0;
              if (__this != (Utility_Color255_o *)0x0) {
                pMVar18 = (MethodInfo *)0x0;
                UVar34 = Utility_Color255__ToColor(__this,(MethodInfo *)0x0);
                local_38 = UVar34.fields.r;
                fStack_34 = UVar34.fields.g;
                uStack_30 = extraout_XMM0_Dc_02;
                uStack_2c = extraout_XMM0_Dd_02;
                local_48 = UVar34.fields.b;
                fStack_44 = UVar34.fields.a;
                uStack_40 = in_XMM1_Dc;
                uStack_3c = in_XMM1_Dd;
                goto label_04327dd8;
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  cVar11 = (char)pMVar18;
  pSStack_d0 = pSVar16;
  pPStack_c8 = player;
  if (g_data_057ae06c == '\0') {
    pPStack_d8 = (PatreonEffects_ResolvedNameEffect_o *)0x4327ece;
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameFontCatalog);
    pPStack_d8 = (PatreonEffects_ResolvedNameEffect_o *)0x4327eda;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    pPStack_d8 = (PatreonEffects_ResolvedNameEffect_o *)0x4327ee6;
    il2cpp_runtime_helper_023445d0(&"Normal");
    g_data_057ae06c = '\x01';
  }
  if (pTVar17 != (TMPro_TMP_FontAsset_o *)0x0) {
    pPStack_d8 = (PatreonEffects_ResolvedNameEffect_o *)0x4327efa;
    bVar13 = PatreonEffects_PatreonHelper__HasNameEffectAccess((Photon_Realtime_Player_o *)pTVar17,pMVar18);
    if ((char)bVar13 != '\0') {
      pTVar20 = pTVar17;
      if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
        pPStack_d8 = (PatreonEffects_ResolvedNameEffect_o *)0x4327f57;
        il2cpp_runtime_helper_02337ed0();
        pPStack_d8 = (PatreonEffects_ResolvedNameEffect_o *)0x4327f5f;
        pSVar16 = PatreonEffects_NameFontCatalog__Profile((Photon_Realtime_Player_o *)pTVar17,pMVar18);
        if (pSVar16 == (Settings_ProfileSettings_o *)0x0) goto label_04327f64;
label_04327f1e:
        if (cVar11 == '\0') {
          pSVar5 = (pSVar16->fields).NameFont;
        }
        else {
          pSVar5 = (pSVar16->fields).GuildFont;
        }
        if (pSVar5 == (Settings_StringSetting_o *)0x0) {
          pPStack_d8 = (PatreonEffects_ResolvedNameEffect_o *)0x4327fab;
          il2cpp_runtime_helper_022b2c90();
          plStack_e0 = &TypeInfo_NameFontCatalog;
          pTStack_f8 = pTVar17;
          pSStack_f0 = (System_String_o *)unaff_R12;
          uStack_e8 = unaff_R13;
          pPStack_d8 = result;
          if (g_data_057ae069 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
            il2cpp_runtime_helper_023445d0(&TypeInfo_NameFontCatalog);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_FontAsset_Load_TMP_FontAsset);
            il2cpp_runtime_helper_023445d0(&"Normal");
            il2cpp_runtime_helper_023445d0(&"UI/Fonts/Vegur-Regular-SDF");
            g_data_057ae069 = '\x01';
          }
          pTStack_100 = (TMPro_TMP_FontAsset_o *)0x0;
          if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pMVar18 = (MethodInfo *)
                    PatreonEffects_NameFontCatalog__Normalize((System_String_o *)pTVar20,pMVar18);
          if ((System_Collections_Generic_Dictionary_object__object__o *)
              **(undefined8 **)(TypeInfo_NameFontCatalog + 0xb8) !=
              (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            pMVar29 = pMVar18;
            bVar13 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                               ((System_Collections_Generic_Dictionary_object__object__o *)
                                **(undefined8 **)(TypeInfo_NameFontCatalog + 0xb8),(Il2CppObject *)pMVar18,
                                (Il2CppObject **)&pTStack_100,MethodInfo_Boolean_TryGetValue);
            if ((char)bVar13 != '\0') goto label_04328163;
            if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar19 = PatreonEffects_NameFontCatalog__Path((System_String_o *)pMVar18,pMVar29);
            pTVar20 = (TMPro_TMP_FontAsset_o *)UnityEngine_Resources__Load_object_(pSVar19,MethodInfo_TMP_FontAsset_Load_TMP_FontAsset);
            unaff_R12 = &TypeInfo_Object;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar13 = UnityEngine_Object__op_Equality
                               ((UnityEngine_Object_o *)pTVar20,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
            ;
            if (((char)bVar13 != '\0') &&
               (bVar13 = System_String__op_Inequality
                                   ((System_String_o *)pMVar18,"Normal",(MethodInfo *)0x0),
               (char)bVar13 != '\0')) {
              pTVar20 = (TMPro_TMP_FontAsset_o *)
                        UnityEngine_Resources__Load_object_("UI/Fonts/Vegur-Regular-SDF",MethodInfo_TMP_FontAsset_Load_TMP_FontAsset);
            }
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar13 = UnityEngine_Object__op_Equality
                               ((UnityEngine_Object_o *)pTVar20,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
            ;
            if ((char)bVar13 == '\0') {
              if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) != 0) goto label_0432813f;
label_0432818a:
              il2cpp_runtime_helper_02337ed0();
              __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                          **(undefined8 **)(TypeInfo_NameFontCatalog + 0xb8);
            }
            else {
              pTVar20 = TMPro_TMP_Settings__get_defaultFontAsset((MethodInfo *)0x0);
              if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) goto label_0432818a;
label_0432813f:
              __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                          **(undefined8 **)(TypeInfo_NameFontCatalog + 0xb8);
            }
            if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              System_Collections_Generic_Dictionary_object__object___set_Item
                        (__this_00,(Il2CppObject *)pMVar18,(Il2CppObject *)pTVar20,MethodInfo_Void_set_Item);
              pTStack_100 = pTVar20;
label_04328163:
              return (bool_conflict)pTStack_100;
            }
          }
          __this_05 = (PatreonEffects_NameEffectApplier_o *)0x0;
          uVar21 = il2cpp_runtime_helper_022b2c90();
          if (g_data_057ae031 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeRef_CanvasRenderer);
            il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
            il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
            il2cpp_runtime_helper_023445d0(&MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
            il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
            il2cpp_runtime_helper_023445d0(&TypeRef_TextMeshProUGUI);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
            il2cpp_runtime_helper_023445d0(&"NameEffectOverlay");
            g_data_057ae031 = '\x01';
          }
          pUVar7 = (UnityEngine_Object_o *)(__this_05->fields)._tmpOverlay;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar13 = UnityEngine_Object__op_Inequality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar13 != '\0') {
            return bVar13;
          }
          components = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
          SVar24 = TypeRef_RectTransform;
          if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar22 = System_Type__GetTypeFromHandle(SVar24,(MethodInfo *)0x0);
          pMVar29 = pMVar18;
          if (components == (System_Type_array *)0x0) {
label_04328580:
            il2cpp_runtime_helper_022b2c90();
label_04328585:
            il2cpp_runtime_helper_022b2ca0();
          }
          else {
            SVar24.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)pSVar22;
            if ((pSVar22 == (System_Type_o *)0x0) || (lVar23 = il2cpp_runtime_helper_023051f0(pSVar22), lVar23 != 0)) {
              if ((int)components->max_length != 0) {
                components->m_Items[0] = pSVar22;
                il2cpp_runtime_helper_022b4080(components->m_Items);
                SVar24.fields.value =
                     (System_RuntimeTypeHandle_Fields)
                     System_Type__GetTypeFromHandle(TypeRef_CanvasRenderer,(MethodInfo *)0x0);
                if ((SVar24.fields.value != 0) &&
                   (lVar23 = il2cpp_runtime_helper_023051f0(SVar24.fields.value), lVar23 == 0)) goto label_0432858a;
                if (1 < (uint)components->max_length) {
                  components->m_Items[1] = (System_Type_o *)SVar24.fields.value;
                  il2cpp_runtime_helper_022b4080(components->m_Items + 1);
                  SVar24.fields.value =
                       (System_RuntimeTypeHandle_Fields)
                       System_Type__GetTypeFromHandle(TypeRef_TextMeshProUGUI,(MethodInfo *)0x0);
                  if ((SVar24.fields.value != 0) &&
                     (lVar23 = il2cpp_runtime_helper_023051f0(SVar24.fields.value), lVar23 == 0)) goto label_0432858a;
                  if (2 < (uint)components->max_length) {
                    pMVar29 = (MethodInfo *)&(__this_05->fields)._tmpOverlay;
                    components->m_Items[2] = (System_Type_o *)SVar24.fields.value;
                    il2cpp_runtime_helper_022b4080(components->m_Items + 2,SVar24.fields.value);
                    SVar24.fields.value = (System_RuntimeTypeHandle_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
                    UnityEngine_GameObject___ctor_4dfc440
                              ((UnityEngine_GameObject_o *)SVar24.fields.value,"NameEffectOverlay",components,
                               (MethodInfo *)0x0);
                    *(System_RuntimeTypeHandle_Fields *)pMVar29 = SVar24.fields.value;
                    il2cpp_runtime_helper_022b4080(pMVar29);
                    if (*(UnityEngine_GameObject_o **)pMVar29 != (UnityEngine_GameObject_o *)0x0) {
                      SVar24.fields.value =
                           (System_RuntimeTypeHandle_Fields)
                           UnityEngine_GameObject__get_transform
                                     (*(UnityEngine_GameObject_o **)pMVar29,(MethodInfo *)0x0);
                      pUVar25 = UnityEngine_Component__get_transform
                                          ((UnityEngine_Component_o *)__this_05,(MethodInfo *)0x0);
                      if ((pUVar25 != (UnityEngine_Transform_o *)0x0) &&
                         (pUVar25 = UnityEngine_Transform__get_parent(pUVar25,(MethodInfo *)0x0),
                         SVar24.fields.value != 0)) {
                        UnityEngine_Transform__SetParent_4e09e30
                                  ((UnityEngine_Transform_o *)SVar24.fields.value,pUVar25,0,(MethodInfo *)0x0)
                        ;
                        __this_03 = (UnityEngine_RectTransform_o *)
                                    UnityEngine_Component__GetComponent_object_
                                              ((UnityEngine_Component_o *)__this_05,MethodInfo_RectTransform_GetComponent_RectTransform);
                        pUVar8 = (__this_05->fields)._tmpOverlay;
                        if ((pUVar8 != (UnityEngine_GameObject_o *)0x0) &&
                           ((__this_04 = (UnityEngine_RectTransform_o *)
                                         UnityEngine_GameObject__GetComponent_object_(pUVar8,MethodInfo_RectTransform_GetComponent_RectTransform),
                            __this_03 != (UnityEngine_RectTransform_o *)0x0 &&
                            (UVar10 = UnityEngine_RectTransform__get_anchorMin(__this_03,(MethodInfo *)0x0),
                            SVar24.fields.value =
                                 (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)__this_04,
                            __this_04 != (UnityEngine_RectTransform_o *)0x0)))) {
                          UnityEngine_RectTransform__set_anchorMin(__this_04,UVar10,(MethodInfo *)0x0);
                          UVar10 = UnityEngine_RectTransform__get_anchorMax(__this_03,(MethodInfo *)0x0);
                          UnityEngine_RectTransform__set_anchorMax(__this_04,UVar10,(MethodInfo *)0x0);
                          UVar10 = UnityEngine_RectTransform__get_pivot(__this_03,(MethodInfo *)0x0);
                          UnityEngine_RectTransform__set_pivot(__this_04,UVar10,(MethodInfo *)0x0);
                          UVar10 = UnityEngine_RectTransform__get_anchoredPosition
                                             (__this_03,(MethodInfo *)0x0);
                          UnityEngine_RectTransform__set_anchoredPosition(__this_04,UVar10,(MethodInfo *)0x0);
                          UVar10 = UnityEngine_RectTransform__get_sizeDelta(__this_03,(MethodInfo *)0x0);
                          UnityEngine_RectTransform__set_sizeDelta(__this_04,UVar10,(MethodInfo *)0x0);
                          value = UnityEngine_Transform__get_localScale
                                            ((UnityEngine_Transform_o *)__this_03,(MethodInfo *)0x0);
                          UnityEngine_Transform__set_localScale
                                    ((UnityEngine_Transform_o *)__this_04,value,(MethodInfo *)0x0);
                          if (*(UnityEngine_GameObject_o **)pMVar29 != (UnityEngine_GameObject_o *)0x0) {
                            pTVar26 = (TMPro_TextMeshProUGUI_o *)
                                      UnityEngine_GameObject__GetComponent_object_
                                                (*(UnityEngine_GameObject_o **)pMVar29,MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
                            SVar24.fields.value =
                                 (System_RuntimeTypeHandle_Fields)&(__this_05->fields)._tmpText;
                            (__this_05->fields)._tmpText = pTVar26;
                            il2cpp_runtime_helper_022b4080(SVar24.fields.value);
                            pTVar26 = (__this_05->fields)._tmpText;
                            if (pTVar26 != (TMPro_TextMeshProUGUI_o *)0x0) {
                              (*(pTVar26->klass->vtable)._25_set_raycastTarget.methodPtr)
                                        (pTVar26,0,(pTVar26->klass->vtable)._25_set_raycastTarget.method);
                              if (*(TMPro_TextMeshProUGUI_o **)SVar24.fields.value !=
                                  (TMPro_TextMeshProUGUI_o *)0x0) {
                                TMPro_TMP_Text__set_enableWordWrapping
                                          ((TMPro_TMP_Text_o *)
                                           *(TMPro_TextMeshProUGUI_o **)SVar24.fields.value,0,
                                           (MethodInfo *)0x0);
                                if (*(TMPro_TextMeshProUGUI_o **)SVar24.fields.value !=
                                    (TMPro_TextMeshProUGUI_o *)0x0) {
                                  pMVar28 = (MethodInfo *)0x0;
                                  TMPro_TMP_Text__set_overflowMode
                                            ((TMPro_TMP_Text_o *)
                                             *(TMPro_TextMeshProUGUI_o **)SVar24.fields.value,0,
                                             (MethodInfo *)0x0);
                                  PatreonEffects_NameEffectApplier__SyncLegacyTextStyle(__this_05,pMVar28);
                                  pUVar8 = (__this_05->fields)._tmpOverlay;
                                  if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
                                    UnityEngine_GameObject__SetActive(pUVar8,0,(MethodInfo *)0x0);
                                    return extraout_EAX;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    goto label_04328580;
                  }
                }
              }
              goto label_04328585;
            }
          }
label_0432858a:
          lVar23 = il2cpp_runtime_helper_0231b270();
          il2cpp_runtime_helper_022b2b10();
          if (g_data_057ae034 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            g_data_057ae034 = '\x01';
          }
          pUVar7 = *(UnityEngine_Object_o **)(lVar23 + 0x30);
          __this_07 = (TMPro_TMP_Text_o *)0x0;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar13 = UnityEngine_Object__op_Equality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar13 != '\0') {
            return bVar13;
          }
          pUVar7 = *(UnityEngine_Object_o **)(lVar23 + 0x20);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar13 = UnityEngine_Object__op_Equality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar13 != '\0') {
            return bVar13;
          }
          __this_06 = *(UnityEngine_UI_Text_o **)(lVar23 + 0x20);
          if (__this_06 != (UnityEngine_UI_Text_o *)0x0) {
            __this_07 = *(TMPro_TMP_Text_o **)(lVar23 + 0x30);
            iVar14 = UnityEngine_UI_Text__get_fontSize(__this_06,(MethodInfo *)0x0);
            if (__this_07 != (TMPro_TMP_Text_o *)0x0) {
              TMPro_TMP_Text__set_fontSize(__this_07,(float)iVar14,(MethodInfo *)0x0);
              __this_06 = *(UnityEngine_UI_Text_o **)(lVar23 + 0x20);
              if (__this_06 != (UnityEngine_UI_Text_o *)0x0) {
                __this_07 = *(TMPro_TMP_Text_o **)(lVar23 + 0x30);
                (*(__this_06->klass->vtable)._22_get_color.methodPtr)();
                if (__this_07 != (TMPro_TMP_Text_o *)0x0) {
                  (*(__this_07->klass->vtable)._23_set_color.methodPtr)(__this_07);
                  __this_06 = *(UnityEngine_UI_Text_o **)(lVar23 + 0x20);
                  if (__this_06 != (UnityEngine_UI_Text_o *)0x0) {
                    __this_07 = *(TMPro_TMP_Text_o **)(lVar23 + 0x30);
                    uVar15 = UnityEngine_UI_Text__get_alignment(__this_06,(MethodInfo *)0x0);
                    iVar14 = 0x1002;
                    if (uVar15 < 9) {
                      iVar14 = *(int32_t *)(&g_data_00d99884 + (long)(int)uVar15 * 4);
                    }
                    if (__this_07 != (TMPro_TMP_Text_o *)0x0) {
                      TMPro_TMP_Text__set_alignment(__this_07,iVar14,(MethodInfo *)0x0);
                      __this_06 = *(UnityEngine_UI_Text_o **)(lVar23 + 0x20);
                      if (__this_06 != (UnityEngine_UI_Text_o *)0x0) {
                        __this_01 = *(TMPro_TMP_Text_o **)(lVar23 + 0x30);
                        uVar15 = UnityEngine_UI_Text__get_supportRichText(__this_06,(MethodInfo *)0x0);
                        if (__this_01 != (TMPro_TMP_Text_o *)0x0) {
                          TMPro_TMP_Text__set_richText(__this_01,uVar15 & 0xff,(MethodInfo *)0x0);
                          return extraout_EAX_00;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057ae02f == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            g_data_057ae02f = '\x01';
          }
          pUVar7 = *(UnityEngine_Object_o **)&(__this_06->fields).m_Color.fields.b;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar13 = UnityEngine_Object__op_Inequality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar13 == '\0') {
            return bVar13;
          }
          pUVar7 = (UnityEngine_Object_o *)(__this_06->fields).m_Material;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar13 = UnityEngine_Object__op_Inequality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar13 == '\0') {
            return bVar13;
          }
          pUVar30 = (__this_06->fields).m_Material;
          if (pUVar30 != (UnityEngine_Material_o *)0x0) {
            plVar32 = *(long **)&(__this_06->fields).m_Color.fields.b;
            uVar27 = (*(code *)pUVar30->klass[3].vtable._3_ToString.method)();
            if (plVar32 != (long *)0x0) {
              lVar23 = *plVar32;
              bVar13 = (**(code **)(lVar23 + 0x558))
                                 (plVar32,uVar27,*(undefined8 *)(lVar23 + 0x560),lVar23,
                                  *(code **)(lVar23 + 0x558));
              return bVar13;
            }
          }
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057ae032 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_NameEffectController_AddComponent_NameEffectController);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            g_data_057ae032 = '\x01';
          }
          pUVar7 = pUVar30[2].monitor;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          ppvVar1 = &pUVar30[2].monitor;
          pMVar28 = (MethodInfo *)0x0;
          bVar13 = UnityEngine_Object__op_Equality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar13 == '\0') {
label_04328892:
            uStack_154 = (uint)((ulong)__this_07 >> 0x20);
            ppvVar31 = (void **)(ulong)uStack_154;
            settings = PatreonEffects_NameEffectPresets__GetPreset(uStack_154,pMVar28);
            if (settings != (PatreonEffects_NameEffectSettings_o *)0x0) {
              (settings->fields).gradientA.fields.r = (float)(int)lVar23;
              (settings->fields).gradientA.fields.g = (float)(int)((ulong)lVar23 >> 0x20);
              *(System_RuntimeTypeHandle_Fields *)&(settings->fields).gradientA.fields.b = SVar24.fields.value
              ;
              *(MethodInfo **)&(settings->fields).gradientB.fields = pMVar29;
              *(PatreonEffects_NameEffectApplier_o **)&(settings->fields).gradientB.fields.b = __this_05;
              (settings->fields).gradientC.fields.r = (float)(int)uVar21;
              (settings->fields).gradientC.fields.g = (float)(int)((ulong)uVar21 >> 0x20);
              *(TMPro_TMP_FontAsset_o **)&(settings->fields).gradientC.fields.b = pTVar20;
              *(long **)&(settings->fields).gradientD.fields = unaff_R12;
              *(MethodInfo **)&(settings->fields).gradientD.fields.b = pMVar18;
              ppvVar31 = (void **)0x0;
              if (pUVar30[2].klass != (UnityEngine_Material_c *)0x0) {
                (**(code **)((long)((pUVar30[2].klass)->_1).image + 0x2a8))(0x3f800000,0x3f800000);
                ppvVar31 = (void **)0x0;
                if (*ppvVar1 != (PatreonEffects_NameEffectController_o *)0x0) {
                  PatreonEffects_NameEffectController__Apply(*ppvVar1,settings,method_01);
                  return extraout_EAX_01;
                }
              }
            }
          }
          else {
            pUVar8 = (UnityEngine_GameObject_o *)pUVar30[1].fields.m_CachedPtr;
            ppvVar31 = (void **)0x0;
            if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
              pMVar28 = (MethodInfo *)UnityEngine_GameObject__AddComponent_object_(pUVar8,MethodInfo_NameEffectController_AddComponent_NameEffectController);
              *ppvVar1 = pMVar28;
              ppvVar31 = ppvVar1;
              il2cpp_runtime_helper_022b4080();
              __this_02 = *ppvVar1;
              if (__this_02 != (PatreonEffects_NameEffectController_o *)0x0) {
                bVar13 = PatreonEffects_NameEffectController__FindText(__this_02,pMVar28);
                if ((char)bVar13 != '\0') {
                  *(undefined1 *)&(__this_02->fields).outlineActive = 0;
                  bVar13 = PatreonEffects_NameEffectController__RefreshOriginalMaterial(__this_02,pMVar28);
                  if ((char)bVar13 != '\0') {
                    (__this_02->fields).runtimeMat = (UnityEngine_Material_o *)0x0;
                    pMVar28 = (MethodInfo *)0x0;
                    il2cpp_runtime_helper_022b4080(&(__this_02->fields).runtimeMat);
                    *(undefined1 *)&(__this_02->fields).initialized = 0;
                  }
                }
                goto label_04328892;
              }
            }
          }
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057ae033 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            g_data_057ae033 = '\x01';
          }
          pUVar7 = ppvVar31[7];
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pMVar18 = (MethodInfo *)0x0;
          bVar13 = UnityEngine_Object__op_Inequality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar13 != '\0') {
            puVar2 = ppvVar31 + 7;
            plVar32 = (long *)0x0;
            if ((PatreonEffects_NameEffectController_o *)*puVar2 ==
                (PatreonEffects_NameEffectController_o *)0x0) goto label_04328b54;
            PatreonEffects_NameEffectController__Clear
                      ((PatreonEffects_NameEffectController_o *)*puVar2,pMVar18);
            pUVar7 = (UnityEngine_Object_o *)*puVar2;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            UnityEngine_Object__Destroy_4e01c60(pUVar7,(MethodInfo *)0x0);
            *puVar2 = 0;
            il2cpp_runtime_helper_022b4080(puVar2);
          }
          pUVar7 = ppvVar31[6];
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar13 = UnityEngine_Object__op_Inequality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar13 != '\0') {
            pUVar7 = ppvVar31[4];
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar13 = UnityEngine_Object__op_Inequality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar13 != '\0') {
              plVar32 = ppvVar31[4];
              if (plVar32 != (long *)0x0) {
                plVar9 = ppvVar31[6];
                (**(code **)(*plVar32 + 0x298))(plVar32,*(undefined8 *)(*plVar32 + 0x2a0));
                if (plVar9 != (long *)0x0) {
                  vtableDispatch = *(code **)(*plVar9 + 0x2a8);
                  bVar13 = (*vtableDispatch)
                                     (plVar9,*(undefined8 *)(*plVar9 + 0x2b0),extraout_RDX,
                                      vtableDispatch);
                  return bVar13;
                }
              }
label_04328b54:
              uVar21 = il2cpp_runtime_helper_022b2c90();
              return (bool_conflict)CONCAT71((int7)((ulong)uVar21 >> 8),(char)plVar32[8]);
            }
          }
          return bVar13;
        }
        pSVar19 = (pSVar5->fields)._value;
        iVar3 = *(int *)(TypeInfo_NameFontCatalog + 0xe4);
      }
      else {
        pPStack_d8 = (PatreonEffects_ResolvedNameEffect_o *)0x4327f19;
        pSVar16 = PatreonEffects_NameFontCatalog__Profile((Photon_Realtime_Player_o *)pTVar17,pMVar18);
        if (pSVar16 != (Settings_ProfileSettings_o *)0x0) goto label_04327f1e;
label_04327f64:
        iVar3 = *(int *)(TypeInfo_NameFontCatalog + 0xe4);
        pSVar19 = "Normal";
      }
      if (iVar3 == 0) {
        pPStack_d8 = (PatreonEffects_ResolvedNameEffect_o *)0x4327f9d;
        il2cpp_runtime_helper_02337ed0();
      }
      goto label_04327f9d;
    }
  }
  pSVar19 = "Normal";
  if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
    pPStack_d8 = (PatreonEffects_ResolvedNameEffect_o *)0x4327f46;
    il2cpp_runtime_helper_02337ed0();
    pSVar19 = "Normal";
  }
label_04327f9d:
  pTVar17 = PatreonEffects_NameFontCatalog__Load(pSVar19,pMVar18);
  return (bool_conflict)pTVar17;
}


// PatreonEffects.NameEffectHelpers$$TryGetGuildEffect
// il2cpp: bool PatreonEffects_NameEffectHelpers__TryGetGuildEffect (Photon_Realtime_Player_o* player, PatreonEffects_ResolvedNameEffect_o* result, const MethodInfo* method);
// 0x432d970

bool_conflict
PatreonEffects_NameEffectHelpers__TryGetGuildEffect
          (Photon_Realtime_Player_o *player,PatreonEffects_ResolvedNameEffect_o *result,MethodInfo *method)

{
  Settings_BoolSetting_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  Settings_ColorSetting_o *pSVar3;
  Utility_Color255_o *__this;
  bool_conflict bVar4;
  bool_conflict bVar5;
  Settings_ProfileSettings_o *pSVar6;
  MethodInfo *method_00;
  MethodInfo *method_01;
  Photon_Realtime_Player_o *__this_00;
  System_String_o *raw;
  char cVar7;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Color_o UVar8;
  int32_t local_ac;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  float local_48;
  float fStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  float local_38;
  float fStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  method_01 = (MethodInfo *)result;
  if (g_data_057ae05a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color255_get_Value);
    g_data_057ae05a = '\x01';
  }
  __this_00 = player;
  pSVar6 = PatreonEffects_NameEffectHelpers__GetProfile(player,method_01);
  if (pSVar6 != (Settings_ProfileSettings_o *)0x0) {
    pSVar1 = (pSVar6->fields).GuildEffectEnabled;
    if ((((pSVar1 != (Settings_BoolSetting_o *)0x0) &&
         (pSVar2 = (pSVar6->fields).GuildEffect, pSVar2 != (Settings_StringSetting_o *)0x0)) &&
        (pSVar3 = (pSVar6->fields).GuildEffectColorA, pSVar3 != (Settings_ColorSetting_o *)0x0)) &&
       (__this_00 = (Photon_Realtime_Player_o *)(pSVar3->fields)._value,
       __this_00 != (Photon_Realtime_Player_o *)0x0)) {
      cVar7 = *(char *)((long)&(pSVar1->fields).DefaultValue + 1);
      raw = (pSVar2->fields)._value;
      UVar8 = Utility_Color255__ToColor((Utility_Color255_o *)__this_00,(MethodInfo *)0x0);
      local_68._8_4_ = in_XMM1_Dc;
      local_68._0_8_ = UVar8.fields._8_8_;
      local_68._12_4_ = in_XMM1_Dd;
      pSVar3 = (pSVar6->fields).GuildEffectColorB;
      if (pSVar3 != (Settings_ColorSetting_o *)0x0) {
        local_58._8_4_ = extraout_XMM0_Dc;
        local_58._0_8_ = UVar8.fields._0_8_;
        local_58._12_4_ = extraout_XMM0_Dd;
        __this_00 = (Photon_Realtime_Player_o *)(pSVar3->fields)._value;
        if (__this_00 != (Photon_Realtime_Player_o *)0x0) {
          UVar8 = Utility_Color255__ToColor((Utility_Color255_o *)__this_00,(MethodInfo *)0x0);
          local_88._8_4_ = in_XMM1_Dc;
          local_88._0_8_ = UVar8.fields._8_8_;
          local_88._12_4_ = in_XMM1_Dd;
          pSVar3 = (pSVar6->fields).GuildEffectColorC;
          if (pSVar3 != (Settings_ColorSetting_o *)0x0) {
            local_78._8_4_ = extraout_XMM0_Dc_00;
            local_78._0_8_ = UVar8.fields._0_8_;
            local_78._12_4_ = extraout_XMM0_Dd_00;
            __this_00 = (Photon_Realtime_Player_o *)(pSVar3->fields)._value;
            if (__this_00 != (Photon_Realtime_Player_o *)0x0) {
              UVar8 = Utility_Color255__ToColor((Utility_Color255_o *)__this_00,(MethodInfo *)0x0);
              pSVar3 = (pSVar6->fields).GuildEffectColorD;
              if (pSVar3 != (Settings_ColorSetting_o *)0x0) {
                local_a8._8_4_ = extraout_XMM0_Dc_01;
                local_a8._0_8_ = UVar8.fields._0_8_;
                local_a8._12_4_ = extraout_XMM0_Dd_01;
                local_98._8_4_ = in_XMM1_Dc;
                local_98._0_8_ = UVar8.fields._8_8_;
                local_98._12_4_ = in_XMM1_Dd;
                __this = (pSVar3->fields)._value;
                __this_00 = (Photon_Realtime_Player_o *)0x0;
                if (__this != (Utility_Color255_o *)0x0) {
                  method_01 = (MethodInfo *)0x0;
                  UVar8 = Utility_Color255__ToColor(__this,(MethodInfo *)0x0);
                  local_38 = UVar8.fields.r;
                  fStack_34 = UVar8.fields.g;
                  uStack_30 = extraout_XMM0_Dc_02;
                  uStack_2c = extraout_XMM0_Dd_02;
                  local_48 = UVar8.fields.b;
                  fStack_44 = UVar8.fields.a;
                  uStack_40 = in_XMM1_Dc;
                  uStack_3c = in_XMM1_Dd;
                  goto label_0432dad8;
                }
              }
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
    return (bool_conflict)*(undefined8 *)&(__this_00->fields)._HasRejoined_k__BackingField;
  }
  cVar7 = '\0';
  local_38 = 1.0;
  fStack_34 = 1.0;
  uStack_30 = 0;
  uStack_2c = 0;
  local_a8 = ZEXT816(0x3f8000003f800000);
  local_68 = ZEXT816(0x3f8000003f800000);
  local_58 = ZEXT816(0x3f8000003f800000);
  raw = (System_String_o *)0x0;
  local_78 = ZEXT816(0x3f8000003f800000);
  local_88 = ZEXT816(0x3f8000003f800000);
  local_98 = ZEXT816(0x3f8000003f800000);
  local_48 = local_38;
  fStack_44 = fStack_34;
  uStack_40 = uStack_30;
  uStack_3c = uStack_2c;
label_0432dad8:
  local_ac = 0;
  (result->fields).ColorC.fields.b = 0.0;
  (result->fields).ColorC.fields.a = 0.0;
  (result->fields).ColorD.fields.r = 0.0;
  (result->fields).ColorD.fields.g = 0.0;
  (result->fields).ColorB.fields.b = 0.0;
  (result->fields).ColorB.fields.a = 0.0;
  (result->fields).ColorC.fields.r = 0.0;
  (result->fields).ColorC.fields.g = 0.0;
  (result->fields).ColorA.fields.b = 0.0;
  (result->fields).ColorA.fields.a = 0.0;
  (result->fields).ColorB.fields.r = 0.0;
  (result->fields).ColorB.fields.g = 0.0;
  (result->fields).Enabled = 0;
  (result->fields).Type = 0;
  (result->fields).ColorA.fields.r = 0.0;
  (result->fields).ColorA.fields.g = 0.0;
  (result->fields).ColorD.fields.b = 0.0;
  (result->fields).ColorD.fields.a = 0.0;
  bVar5 = 0;
  if (player != (Photon_Realtime_Player_o *)0x0) {
    if (pSVar6 != (Settings_ProfileSettings_o *)0x0) {
      bVar4 = PatreonEffects_PatreonHelper__HasNameEffectAccess(player,method_01);
      bVar5 = 0;
      if ((cVar7 != '\0') && ((char)bVar4 != '\0')) {
        bVar5 = PatreonEffects_NameEffectPresets__TryResolve(raw,&local_ac,method_00);
        if ((char)bVar5 == '\0') {
          bVar5 = 0;
        }
        else {
          *(undefined1 *)&(result->fields).Enabled = 1;
          (result->fields).Type = local_ac;
          (result->fields).ColorA.fields.r = (float)local_58._0_4_;
          (result->fields).ColorA.fields.g = (float)local_58._4_4_;
          (result->fields).ColorA.fields.b = local_68._0_4_;
          (result->fields).ColorA.fields.a = local_68._4_4_;
          (result->fields).ColorB.fields.r = (float)local_78._0_4_;
          (result->fields).ColorB.fields.g = (float)local_78._4_4_;
          (result->fields).ColorB.fields.b = local_88._0_4_;
          (result->fields).ColorB.fields.a = local_88._4_4_;
          (result->fields).ColorC.fields.r = (float)local_a8._0_4_;
          (result->fields).ColorC.fields.g = (float)local_a8._4_4_;
          (result->fields).ColorC.fields.b = local_98._0_4_;
          (result->fields).ColorC.fields.a = local_98._4_4_;
          (result->fields).ColorD.fields.r = local_38;
          (result->fields).ColorD.fields.g = fStack_34;
          (result->fields).ColorD.fields.b = local_48;
          (result->fields).ColorD.fields.a = fStack_44;
          bVar5 = (bool_conflict)CONCAT71((uint7)(uint3)((uint)local_ac >> 8),1);
        }
      }
    }
  }
  return bVar5;
}


// PatreonEffects.NameEffectHelpers$$GetProfile
// il2cpp: Settings_ProfileSettings_o* PatreonEffects_NameEffectHelpers__GetProfile (Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x432d760

Settings_ProfileSettings_o *
PatreonEffects_NameEffectHelpers__GetProfile(Photon_Realtime_Player_o *player,MethodInfo *method)

{
  bool_conflict bVar1;
  System_Collections_Generic_Dictionary_int__object__o *__this;
  Settings_ProfileSettings_o *pSVar2;
  System_String_o *in_RCX;
  char extraout_DL;
  MethodInfo *method_00;
  Photon_Realtime_Player_o *player_00;
  undefined8 *in_R8;
  undefined8 extraout_XMM1_Qa;
  undefined8 in_XMM2_Qa;
  undefined8 in_XMM3_Qa;
  undefined8 in_XMM4_Qa;
  undefined8 in_XMM5_Qa;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;
  int32_t local_b4;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 local_40;
  Photon_Realtime_Player_o *pPStack_30;
  undefined8 *puStack_28;
  Il2CppObject *local_18;
  
  if (g_data_057ae05b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    g_data_057ae05b = '\x01';
  }
  local_18 = (Il2CppObject *)0x0;
  if (player != (Photon_Realtime_Player_o *)0x0) {
    if (*(int *)((long)&TypeInfo_InGameManager[2].fields._CustomProperties_k__BackingField + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      __this = *(System_Collections_Generic_Dictionary_int__object__o **)
                (*(long *)&TypeInfo_InGameManager[2].fields.actorNumber + 0x18);
      player_00 = TypeInfo_InGameManager;
    }
    else {
      __this = *(System_Collections_Generic_Dictionary_int__object__o **)
                (*(long *)&TypeInfo_InGameManager[2].fields.actorNumber + 0x18);
      player_00 = TypeInfo_InGameManager;
    }
    TypeInfo_InGameManager = player_00;
    if (__this != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      if (*(int *)((long)&player_00[2].fields._CustomProperties_k__BackingField + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        __this = *(System_Collections_Generic_Dictionary_int__object__o **)
                  (*(long *)&TypeInfo_InGameManager[2].fields.actorNumber + 0x18);
        if (__this == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
          local_a0 = il2cpp_runtime_helper_022b2c90();
          puStack_28 = &TypeInfo_InGameManager;
          local_b4 = 0;
          in_R8[6] = 0;
          in_R8[7] = 0;
          in_R8[4] = 0;
          in_R8[5] = 0;
          in_R8[2] = 0;
          in_R8[3] = 0;
          *in_R8 = 0;
          in_R8[1] = 0;
          in_R8[8] = 0;
          pSVar2 = (Settings_ProfileSettings_o *)0x0;
          if ((player_00 != (Photon_Realtime_Player_o *)0x0) && (method != (MethodInfo *)0x0)) {
            local_b0 = extraout_XMM1_Qa;
            local_90 = in_XMM3_Qa;
            local_80 = in_XMM2_Qa;
            local_70 = in_XMM5_Qa;
            local_60 = in_XMM4_Qa;
            local_50 = in_XMM7_Qa;
            local_40 = in_XMM6_Qa;
            pPStack_30 = player;
            bVar1 = PatreonEffects_PatreonHelper__HasNameEffectAccess(player_00,method);
            pSVar2 = (Settings_ProfileSettings_o *)0x0;
            if (((char)bVar1 != '\0') && (extraout_DL != '\0')) {
              bVar1 = PatreonEffects_NameEffectPresets__TryResolve(in_RCX,&local_b4,method_00);
              if ((char)bVar1 == '\0') {
                pSVar2 = (Settings_ProfileSettings_o *)0x0;
              }
              else {
                *(undefined1 *)in_R8 = 1;
                *(int32_t *)((long)in_R8 + 4) = local_b4;
                in_R8[1] = local_a0;
                *(int *)(in_R8 + 2) = (int)local_b0;
                *(int *)((long)in_R8 + 0x14) = (int)((ulong)local_b0 >> 0x20);
                *(undefined4 *)(in_R8 + 3) = (undefined4)local_80;
                *(undefined4 *)((long)in_R8 + 0x1c) = local_80._4_4_;
                *(int *)(in_R8 + 4) = (int)local_90;
                *(int *)((long)in_R8 + 0x24) = (int)((ulong)local_90 >> 0x20);
                *(undefined4 *)(in_R8 + 5) = (undefined4)local_60;
                *(undefined4 *)((long)in_R8 + 0x2c) = local_60._4_4_;
                *(int *)(in_R8 + 6) = (int)local_70;
                *(int *)((long)in_R8 + 0x34) = (int)((ulong)local_70 >> 0x20);
                *(undefined4 *)(in_R8 + 7) = (undefined4)local_40;
                *(undefined4 *)((long)in_R8 + 0x3c) = local_40._4_4_;
                *(int *)(in_R8 + 8) = (int)local_50;
                *(int *)((long)in_R8 + 0x44) = (int)((ulong)local_50 >> 0x20);
                pSVar2 = (Settings_ProfileSettings_o *)CONCAT71((uint7)(uint3)((uint)local_b4 >> 8),1);
              }
            }
          }
          return pSVar2;
        }
      }
      bVar1 = System_Collections_Generic_Dictionary_int__object___TryGetValue
                        (__this,(player->fields).actorNumber,&local_18,MethodInfo_Boolean_TryGetValue);
      if ((local_18 != (Il2CppObject *)0x0) && ((char)bVar1 != '\0')) {
        return (Settings_ProfileSettings_o *)local_18[2].klass;
      }
    }
    if ((char)(player->fields).IsLocal != '\0') {
      return *(Settings_ProfileSettings_o **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
    }
  }
  return (Settings_ProfileSettings_o *)0x0;
}


// PatreonEffects.NameEffectHelpers$$TryGet
// il2cpp: bool PatreonEffects_NameEffectHelpers__TryGet (Photon_Realtime_Player_o* player, Settings_ProfileSettings_o* profile, bool enabled, System_String_o* effectStr, UnityEngine_Color_o colorA, UnityEngine_Color_o colorB, UnityEngine_Color_o colorC, UnityEngine_Color_o colorD, PatreonEffects_ResolvedNameEffect_o* result, const MethodInfo* method);
// 0x432d870

bool_conflict
PatreonEffects_NameEffectHelpers__TryGet
          (Photon_Realtime_Player_o *player,Settings_ProfileSettings_o *profile,bool_conflict enabled,
          System_String_o *effectStr,UnityEngine_Color_o colorA,UnityEngine_Color_o colorB,
          UnityEngine_Color_o colorC,UnityEngine_Color_o colorD,PatreonEffects_ResolvedNameEffect_o *result,
          MethodInfo *method)

{
  bool_conflict bVar1;
  bool_conflict bVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_var;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  int32_t iStack_9c;
  undefined8 uStack_98;
  undefined1 auStack_88 [16];
  undefined8 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_58;
  undefined8 uStack_48;
  undefined8 uStack_38;
  undefined8 uStack_28;
  
  uStack_58 = colorC.fields._8_8_;
  uStack_48 = colorC.fields._0_8_;
  uStack_38 = colorD.fields._8_8_;
  uStack_28 = colorD.fields._0_8_;
  uStack_78 = colorB.fields._8_8_;
  uStack_68 = colorB.fields._0_8_;
  uStack_98 = colorA.fields._8_8_;
  iStack_9c = 0;
  (result->fields).ColorC.fields.b = 0.0;
  (result->fields).ColorC.fields.a = 0.0;
  (result->fields).ColorD.fields.r = 0.0;
  (result->fields).ColorD.fields.g = 0.0;
  (result->fields).ColorB.fields.b = 0.0;
  (result->fields).ColorB.fields.a = 0.0;
  (result->fields).ColorC.fields.r = 0.0;
  (result->fields).ColorC.fields.g = 0.0;
  (result->fields).ColorA.fields.b = 0.0;
  (result->fields).ColorA.fields.a = 0.0;
  (result->fields).ColorB.fields.r = 0.0;
  (result->fields).ColorB.fields.g = 0.0;
  (result->fields).Enabled = 0;
  (result->fields).Type = 0;
  (result->fields).ColorA.fields.r = 0.0;
  (result->fields).ColorA.fields.g = 0.0;
  (result->fields).ColorD.fields.b = 0.0;
  (result->fields).ColorD.fields.a = 0.0;
  bVar2 = 0;
  if (player != (Photon_Realtime_Player_o *)0x0) {
    auStack_88._8_4_ = in_XMM0_Dc;
    auStack_88._0_8_ = colorA.fields._0_8_;
    auStack_88._12_4_ = in_XMM0_Dd;
    if (profile != (Settings_ProfileSettings_o *)0x0) {
      bVar1 = PatreonEffects_PatreonHelper__HasNameEffectAccess(player,(MethodInfo *)profile);
      bVar2 = 0;
      if (((char)bVar1 != '\0') && ((char)enabled != '\0')) {
        bVar2 = PatreonEffects_NameEffectPresets__TryResolve
                          (effectStr,&iStack_9c,(MethodInfo *)CONCAT44(extraout_var,extraout_EDX));
        if ((char)bVar2 == '\0') {
          bVar2 = 0;
        }
        else {
          *(undefined1 *)&(result->fields).Enabled = 1;
          (result->fields).Type = iStack_9c;
          (result->fields).ColorA.fields.r = (float)auStack_88._0_4_;
          (result->fields).ColorA.fields.g = (float)auStack_88._4_4_;
          (result->fields).ColorA.fields.b = (float)uStack_98;
          (result->fields).ColorA.fields.a = (float)((ulong)uStack_98 >> 0x20);
          (result->fields).ColorB.fields.r = (float)uStack_68;
          (result->fields).ColorB.fields.g = uStack_68._4_4_;
          (result->fields).ColorB.fields.b = (float)uStack_78;
          (result->fields).ColorB.fields.a = (float)((ulong)uStack_78 >> 0x20);
          (result->fields).ColorC.fields.r = (float)uStack_48;
          (result->fields).ColorC.fields.g = uStack_48._4_4_;
          (result->fields).ColorC.fields.b = (float)uStack_58;
          (result->fields).ColorC.fields.a = (float)((ulong)uStack_58 >> 0x20);
          (result->fields).ColorD.fields.r = (float)uStack_28;
          (result->fields).ColorD.fields.g = uStack_28._4_4_;
          (result->fields).ColorD.fields.b = (float)uStack_38;
          (result->fields).ColorD.fields.a = (float)((ulong)uStack_38 >> 0x20);
          bVar2 = (bool_conflict)CONCAT71((uint7)(uint3)((uint)iStack_9c >> 8),1);
        }
      }
    }
  }
  return bVar2;
}


