// Type: PatreonEffects.NameEffectPresets
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/PatreonEffects/NameEffectPresets.cs
// Prior real C# source: none
// --------------------------------

// PatreonEffects.NameEffectPresets$$GetPreset
// il2cpp: PatreonEffects_NameEffectSettings_o* PatreonEffects_NameEffectPresets__GetPreset (int32_t type, const MethodInfo* method);
// 0x4328bb0

PatreonEffects_NameEffectSettings_o *
PatreonEffects_NameEffectPresets__GetPreset(int32_t type,MethodInfo *method)

{
  ulong uVar1;
  bool_conflict *pbVar2;
  uint16_t *puVar3;
  TMPro_TMP_TextElement_o **ppTVar4;
  TMPro_TMP_SpriteAsset_o **ppTVar5;
  UnityEngine_Material_o **ppUVar6;
  float *pfVar7;
  float fVar8;
  char cVar9;
  byte bVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  UnityEngine_Object_o *pUVar15;
  UnityEngine_Material_o *pUVar16;
  TMPro_TMP_TextInfo_o *textInfo;
  TMPro_TMP_Asset_o *pTVar17;
  UnityEngine_Material_c *pUVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  byte bVar22;
  byte bVar23;
  bool_conflict bVar24;
  PatreonEffects_NameEffectController_o *__this;
  PatreonEffects_NameEffectSettings_o *pPVar25;
  PatreonEffects_NameEffectSettings_o *extraout_RAX;
  PatreonEffects_NameEffectSettings_o *extraout_RAX_00;
  PatreonEffects_NameEffectSettings_o *extraout_RAX_01;
  undefined4 extraout_var;
  PatreonEffects_NameEffectSettings_o *extraout_RAX_02;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  TMPro_TMP_CharacterInfo_array *pTVar26;
  PatreonEffects_NameEffectSettings_o *pPVar27;
  TMPro_TMP_Text_o **ppTVar28;
  long lVar29;
  PatreonEffects_NameEffectSettings_o *extraout_RAX_03;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  undefined8 unaff_RBX;
  long lVar30;
  undefined1 *puVar31;
  long lVar32;
  PatreonEffects_NameEffectSettings_o *method_01;
  int *piVar33;
  undefined4 in_register_0000003c;
  MethodInfo *pMVar34;
  PatreonEffects_NameEffectController_o *pPVar35;
  TMPro_TMP_Text_o *pTVar36;
  TMPro_TMP_Text_o *pTVar37;
  MethodInfo *in_R9;
  undefined8 unaff_R14;
  ulong uVar38;
  undefined8 unaff_R15;
  ulong uVar39;
  float fVar40;
  float fVar41;
  UnityEngine_Color_o value;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  long lStack_98;
  undefined1 auStack_90 [48];
  UnityEngine_Material_o *pUStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [16];
  
  pMVar34 = (MethodInfo *)CONCAT44(in_register_0000003c,type);
  puVar31 = &stack0xfffffffffffffff8;
  if (g_data_057ae04f == '\0') {
    pMVar34 = (MethodInfo *)&TypeInfo_NameEffectSettings;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae04f = '\x01';
  }
  switch(type) {
  case 1:
    if (g_data_057ae051 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_NameEffectSettings);
      g_data_057ae051 = '\x01';
    }
    pPVar27 = (PatreonEffects_NameEffectSettings_o *)il2cpp_runtime_helper_023052d0(TypeInfo_NameEffectSettings);
    (pPVar27->fields).gradientA.fields.r = 0.78;
    (pPVar27->fields).gradientA.fields.g = 1.0;
    (pPVar27->fields).gradientA.fields.b = 0.9;
    (pPVar27->fields).gradientA.fields.a = 1.0;
    (pPVar27->fields).gradientB.fields.r = 0.64;
    (pPVar27->fields).gradientB.fields.g = 0.95;
    (pPVar27->fields).gradientB.fields.b = 1.0;
    (pPVar27->fields).gradientB.fields.a = 1.0;
    (pPVar27->fields).gradientC.fields.r = 0.86;
    (pPVar27->fields).gradientC.fields.g = 0.76;
    (pPVar27->fields).gradientC.fields.b = 1.0;
    (pPVar27->fields).gradientC.fields.a = 1.0;
    (pPVar27->fields).gradientD.fields.r = 1.0;
    (pPVar27->fields).gradientD.fields.g = 0.96;
    (pPVar27->fields).gradientD.fields.b = 0.82;
    (pPVar27->fields).gradientD.fields.a = 1.0;
    (pPVar27->fields).gradientScale = 2.8;
    (pPVar27->fields).gradientSpeed = 0.16;
    (pPVar27->fields).glow = 1.35;
    (pPVar27->fields).scanlineStrength = 0.12;
    (pPVar27->fields).scanlineDensity = 180.0;
    (pPVar27->fields).scanlineSpeed = 0.18;
    (pPVar27->fields).flickerStrength = 0.05;
    (pPVar27->fields).flickerSpeed = 18.0;
    (pPVar27->fields).softness = 1.0;
    (pPVar27->fields).popShadowOffset.fields = (UnityEngine_Vector2_Fields)0xbfc0000000000000;
    (pPVar27->fields).popExtrusionOffset.fields = (UnityEngine_Vector2_Fields)0xc0c0000000000000;
    System_Object___ctor((Il2CppObject *)pPVar27,(MethodInfo *)0x0);
    return pPVar27;
  case 2:
    pPVar27 = PatreonEffects_NameEffectPresets__Shimmer(pMVar34);
    return pPVar27;
  case 3:
    if (g_data_057ae053 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_NameEffectSettings);
      g_data_057ae053 = '\x01';
    }
    pPVar27 = (PatreonEffects_NameEffectSettings_o *)il2cpp_runtime_helper_023052d0(TypeInfo_NameEffectSettings);
    (pPVar27->fields).gradientA.fields.r = 0.78;
    (pPVar27->fields).gradientA.fields.g = 1.0;
    (pPVar27->fields).gradientA.fields.b = 0.9;
    (pPVar27->fields).gradientA.fields.a = 1.0;
    (pPVar27->fields).gradientB.fields.r = 0.64;
    (pPVar27->fields).gradientB.fields.g = 0.95;
    (pPVar27->fields).gradientB.fields.b = 1.0;
    (pPVar27->fields).gradientB.fields.a = 1.0;
    (pPVar27->fields).gradientC.fields.r = 0.86;
    (pPVar27->fields).gradientC.fields.g = 0.76;
    (pPVar27->fields).gradientC.fields.b = 1.0;
    (pPVar27->fields).gradientC.fields.a = 1.0;
    (pPVar27->fields).gradientD.fields.r = 1.0;
    (pPVar27->fields).gradientD.fields.g = 0.96;
    (pPVar27->fields).gradientD.fields.b = 0.82;
    (pPVar27->fields).gradientD.fields.a = 1.0;
    (pPVar27->fields).gradientScale = 2.8;
    (pPVar27->fields).gradientSpeed = 0.16;
    (pPVar27->fields).glow = 1.35;
    (pPVar27->fields).scanlineStrength = 0.12;
    (pPVar27->fields).scanlineDensity = 180.0;
    (pPVar27->fields).scanlineSpeed = 0.18;
    (pPVar27->fields).flickerStrength = 0.05;
    (pPVar27->fields).flickerSpeed = 18.0;
    (pPVar27->fields).softness = 1.0;
    (pPVar27->fields).popShadowOffset.fields = (UnityEngine_Vector2_Fields)0xbfc0000000000000;
    (pPVar27->fields).popExtrusionOffset.fields = (UnityEngine_Vector2_Fields)0xc0c0000000000000;
    System_Object___ctor((Il2CppObject *)pPVar27,(MethodInfo *)0x0);
    if (pPVar27 != (PatreonEffects_NameEffectSettings_o *)0x0) {
      (pPVar27->fields).effectMode = 1;
      (pPVar27->fields).gradientA.fields.r = 1.0;
      (pPVar27->fields).gradientA.fields.g = 1.0;
      (pPVar27->fields).gradientA.fields.b = 1.0;
      (pPVar27->fields).gradientA.fields.a = 1.0;
      (pPVar27->fields).gradientB.fields.r = 0.88;
      (pPVar27->fields).gradientB.fields.g = 0.95;
      (pPVar27->fields).gradientB.fields.b = 1.0;
      (pPVar27->fields).gradientB.fields.a = 1.0;
      (pPVar27->fields).gradientC.fields.r = 0.07;
      (pPVar27->fields).gradientC.fields.g = 0.08;
      (pPVar27->fields).gradientC.fields.b = 0.13;
      (pPVar27->fields).gradientC.fields.a = 1.0;
      (pPVar27->fields).gradientD.fields.r = 0.92;
      (pPVar27->fields).gradientD.fields.g = 0.02;
      (pPVar27->fields).gradientD.fields.b = 0.29;
      (pPVar27->fields).gradientD.fields.a = 1.0;
      (pPVar27->fields).gradientScale = 1.0;
      (pPVar27->fields).gradientSpeed = 0.0;
      (pPVar27->fields).glow = 1.0;
      (pPVar27->fields).scanlineStrength = 0.0;
      (pPVar27->fields).flickerStrength = 0.0;
      (pPVar27->fields).softness = 0.85;
      (pPVar27->fields).popShadowOffset.fields = (UnityEngine_Vector2_Fields)0xbfc0000000000000;
      (pPVar27->fields).popExtrusionOffset.fields = (UnityEngine_Vector2_Fields)0xc0c0000000000000;
      return pPVar27;
    }
    il2cpp_runtime_helper_022b2c90();
    unaff_RBX = 0;
    break;
  case 4:
    puVar31 = (undefined1 *)register0x00000020;
    break;
  case 5:
    goto PatreonEffects_NameEffectPresets__Waves;
  case 6:
    puVar31 = (undefined1 *)register0x00000020;
    goto PatreonEffects_NameEffectPresets__Electric;
  case 7:
    goto PatreonEffects_NameEffectPresets__Outline;
  default:
    __this = (PatreonEffects_NameEffectController_o *)il2cpp_runtime_helper_023052d0(TypeInfo_NameEffectSettings);
    *(float *)&(__this->fields).m_CachedPtr = 0.78;
    *(float *)((long)&(__this->fields).m_CachedPtr + 4) = 1.0;
    (__this->fields).m_CancellationTokenSource =
         (System_Threading_CancellationTokenSource_o *)0x3f8000003f666666;
    *(float *)&(__this->fields).text = 0.64;
    *(float *)((long)&(__this->fields).text + 4) = 0.95;
    *(undefined8 *)&(__this->fields).effect = 0x3f8000003f800000;
    *(float *)&(__this->fields).originalFontMaterial = 0.86;
    *(float *)((long)&(__this->fields).originalFontMaterial + 4) = 0.76;
    (__this->fields).originalFontAsset = (TMPro_TMP_FontAsset_o *)0x3f8000003f800000;
    *(float *)&(__this->fields).runtimeMat = 1.0;
    *(float *)((long)&(__this->fields).runtimeMat + 4) = 0.96;
    *(undefined8 *)&(__this->fields).initialized = 0x3f8000003f51eb85;
    *(undefined8 *)((long)&(__this->fields).popShadowText + 4) = 0x3e23d70a40333333;
    *(undefined8 *)((long)&(__this->fields).popExtrusionText + 4) = 0x3df5c28f3faccccd;
    *(undefined8 *)&(__this->fields).outlineActive = 0x3e3851ec43340000;
    *(undefined8 *)&(__this->fields).effectVertexDataHooked = 0x419000003d4ccccd;
    (__this->fields).popFaceA.fields.r = 1.0;
    ((UnityEngine_Vector2_o *)&(__this->fields).popFaceA.fields.g)->fields =
         (UnityEngine_Vector2_Fields)0xbfc0000000000000;
    ((UnityEngine_Vector2_o *)&(__this->fields).popFaceA.fields.a)->fields =
         (UnityEngine_Vector2_Fields)0xc0c0000000000000;
    pPVar27 = (PatreonEffects_NameEffectSettings_o *)0x0;
    pPVar35 = __this;
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    if (__this != (PatreonEffects_NameEffectController_o *)0x0) {
      *(undefined8 *)((long)&(__this->fields).popExtrusionText + 4) = 0x3f800000;
      (__this->fields).effectVertexDataHooked = 0;
      return (PatreonEffects_NameEffectSettings_o *)__this;
    }
    pPVar25 = (PatreonEffects_NameEffectSettings_o *)il2cpp_runtime_helper_022b2c90();
    method_01 = pPVar27;
    if (g_data_057ae038 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_NameEffectController);
      pPVar25 = (PatreonEffects_NameEffectSettings_o *)il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057ae038 = '\x01';
    }
    if (pPVar27 != (PatreonEffects_NameEffectSettings_o *)0x0) {
      iVar11 = (pPVar27->fields).effectMode;
      if (iVar11 == 6) {
        PatreonEffects_NameEffectController__ClearEffectVertexData(pPVar35,(MethodInfo *)method_01);
        if (g_data_057ae042 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_NameEffectController);
          g_data_057ae042 = '\x01';
        }
        *(undefined1 *)&(pPVar35->fields).popActive = 0;
        PatreonEffects_NameEffectController__ClearPopGradient(pPVar35,(MethodInfo *)method_01);
        if (*(int *)((long)&(TypeInfo_NameEffectController->fields).m_Corners + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        PatreonEffects_NameEffectController__DestroyPopLayer
                  (&(pPVar35->fields).popShadowText,(MethodInfo *)method_01);
        PatreonEffects_NameEffectController__DestroyPopLayer
                  (&(pPVar35->fields).popExtrusionText,(MethodInfo *)method_01);
        PatreonEffects_NameEffectController__ApplyOutline(pPVar35,pPVar27,method_00);
        return extraout_RAX_00;
      }
      if (iVar11 == 1) {
        PatreonEffects_NameEffectController__ClearEffectVertexData(pPVar35,(MethodInfo *)method_01);
        cVar9 = *(char *)((long)&(pPVar35->fields).popActive + 1);
        *(undefined1 *)((long)&(pPVar35->fields).popActive + 1) = 0;
        PatreonEffects_NameEffectController__ClearPopGradient(pPVar35,(MethodInfo *)method_01);
        pMVar34 = extraout_RDX;
        if (cVar9 != '\0') {
          PatreonEffects_NameEffectController__ClearShaderMaterial(pPVar35,(MethodInfo *)method_01);
          pMVar34 = extraout_RDX_00;
        }
        PatreonEffects_NameEffectController__ApplyPop(pPVar35,pPVar27,pMVar34);
        return extraout_RAX;
      }
      if (g_data_057ae042 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_NameEffectController);
        g_data_057ae042 = '\x01';
      }
      *(undefined1 *)&(pPVar35->fields).popActive = 0;
      PatreonEffects_NameEffectController__ClearPopGradient(pPVar35,(MethodInfo *)method_01);
      if (*(int *)((long)&(TypeInfo_NameEffectController->fields).m_Corners + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      PatreonEffects_NameEffectController__DestroyPopLayer
                (&(pPVar35->fields).popShadowText,(MethodInfo *)method_01);
      PatreonEffects_NameEffectController__DestroyPopLayer
                (&(pPVar35->fields).popExtrusionText,(MethodInfo *)method_01);
      bVar10 = *(byte *)((long)&(pPVar35->fields).popActive + 1);
      *(undefined1 *)((long)&(pPVar35->fields).popActive + 1) = 0;
      PatreonEffects_NameEffectController__ClearPopGradient(pPVar35,(MethodInfo *)method_01);
      if (bVar10 != 0) {
        PatreonEffects_NameEffectController__ClearShaderMaterial(pPVar35,(MethodInfo *)method_01);
      }
      PatreonEffects_NameEffectController__EnsureShaderMaterial(pPVar35,(MethodInfo *)method_01);
      pPVar25 = extraout_RAX_01;
      if ((char)(pPVar35->fields).initialized != '\0') {
        pUVar15 = (UnityEngine_Object_o *)(pPVar35->fields).runtimeMat;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar24 = UnityEngine_Object__op_Equality(pUVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        pPVar25 = (PatreonEffects_NameEffectSettings_o *)CONCAT44(extraout_var,bVar24);
        if ((char)bVar24 == '\0') {
          pUVar16 = (pPVar35->fields).runtimeMat;
          pTVar36 = TypeInfo_NameEffectController;
          if (*(int *)((long)&(TypeInfo_NameEffectController->fields).m_Corners + 4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (pUVar16 != (UnityEngine_Material_o *)0x0) {
            value.fields.b = 1.0;
            value.fields.a = 1.0;
            value.fields.r = 1.0;
            value.fields.g = 1.0;
            UnityEngine_Material__SetColor_4dca510
                      (pUVar16,*(int32_t *)&((TypeInfo_NameEffectController->fields).m_ParentMask)->klass,value,
                       (MethodInfo *)0x0);
            pUVar16 = (pPVar35->fields).runtimeMat;
            pTVar36 = (TMPro_TMP_Text_o *)0x0;
            if (pUVar16 != (UnityEngine_Material_o *)0x0) {
              UnityEngine_Material__SetColor_4dca510
                        (pUVar16,*(int32_t *)((long)&((TypeInfo_NameEffectController->fields).m_ParentMask)->klass + 4),
                         (UnityEngine_Color_o)(pPVar27->fields).gradientA.fields,(MethodInfo *)0x0);
              pUVar16 = (pPVar35->fields).runtimeMat;
              pTVar36 = (TMPro_TMP_Text_o *)0x0;
              if (pUVar16 != (UnityEngine_Material_o *)0x0) {
                UnityEngine_Material__SetColor_4dca510
                          (pUVar16,*(int32_t *)&((TypeInfo_NameEffectController->fields).m_ParentMask)->monitor,
                           (UnityEngine_Color_o)(pPVar27->fields).gradientB.fields,(MethodInfo *)0x0);
                pUVar16 = (pPVar35->fields).runtimeMat;
                pTVar36 = (TMPro_TMP_Text_o *)0x0;
                if (pUVar16 != (UnityEngine_Material_o *)0x0) {
                  UnityEngine_Material__SetColor_4dca510
                            (pUVar16,*(int32_t *)((long)&((TypeInfo_NameEffectController->fields).m_ParentMask)->monitor + 4),
                             (UnityEngine_Color_o)(pPVar27->fields).gradientC.fields,(MethodInfo *)0x0);
                  pUVar16 = (pPVar35->fields).runtimeMat;
                  pTVar36 = (TMPro_TMP_Text_o *)0x0;
                  if (pUVar16 != (UnityEngine_Material_o *)0x0) {
                    UnityEngine_Material__SetColor_4dca510
                              (pUVar16,(int32_t)(((TypeInfo_NameEffectController->fields).m_ParentMask)->fields).m_CachedPtr,
                               (UnityEngine_Color_o)(pPVar27->fields).gradientD.fields,(MethodInfo *)0x0);
                    pUVar16 = (pPVar35->fields).runtimeMat;
                    pTVar36 = (TMPro_TMP_Text_o *)0x0;
                    if (pUVar16 != (UnityEngine_Material_o *)0x0) {
                      UnityEngine_Material__SetFloat_4dcd3b0
                                (pUVar16,*(int32_t *)
                                          ((long)&(((TypeInfo_NameEffectController->fields).m_ParentMask)->fields).m_CachedPtr
                                          + 4),(pPVar27->fields).gradientScale,(MethodInfo *)0x0);
                      pUVar16 = (pPVar35->fields).runtimeMat;
                      pTVar36 = (TMPro_TMP_Text_o *)0x0;
                      if (pUVar16 != (UnityEngine_Material_o *)0x0) {
                        UnityEngine_Material__SetFloat_4dcd3b0
                                  (pUVar16,*(int32_t *)
                                            &(((TypeInfo_NameEffectController->fields).m_ParentMask)->fields).
                                             m_CancellationTokenSource,(pPVar27->fields).gradientSpeed,
                                   (MethodInfo *)0x0);
                        pUVar16 = (pPVar35->fields).runtimeMat;
                        pTVar36 = (TMPro_TMP_Text_o *)0x0;
                        if (pUVar16 != (UnityEngine_Material_o *)0x0) {
                          UnityEngine_Material__SetFloat_4dcd3b0
                                    (pUVar16,*(int32_t *)
                                              ((long)&(((TypeInfo_NameEffectController->fields).m_ParentMask)->fields).
                                                      m_CancellationTokenSource + 4),
                                     (float)(pPVar27->fields).effectMode,(MethodInfo *)0x0);
                          pUVar16 = (pPVar35->fields).runtimeMat;
                          pTVar36 = (TMPro_TMP_Text_o *)0x0;
                          if (pUVar16 != (UnityEngine_Material_o *)0x0) {
                            UnityEngine_Material__SetFloat_4dcd3b0
                                      (pUVar16,*(int32_t *)
                                                &(((TypeInfo_NameEffectController->fields).m_ParentMask)->fields).
                                                 m_VertexClipper,(pPVar27->fields).glow,(MethodInfo *)0x0);
                            pUVar16 = (pPVar35->fields).runtimeMat;
                            pTVar36 = (TMPro_TMP_Text_o *)0x0;
                            if (pUVar16 != (UnityEngine_Material_o *)0x0) {
                              UnityEngine_Material__SetFloat_4dcd3b0
                                        (pUVar16,*(int32_t *)
                                                  ((long)&(((TypeInfo_NameEffectController->fields).m_ParentMask)->fields).
                                                          m_VertexClipper + 4),
                                         (pPVar27->fields).scanlineStrength,(MethodInfo *)0x0);
                              pUVar16 = (pPVar35->fields).runtimeMat;
                              pTVar36 = (TMPro_TMP_Text_o *)0x0;
                              if (pUVar16 != (UnityEngine_Material_o *)0x0) {
                                UnityEngine_Material__SetFloat_4dcd3b0
                                          (pUVar16,*(int32_t *)
                                                    &(((TypeInfo_NameEffectController->fields).m_ParentMask)->fields).
                                                     m_RectTransform,(pPVar27->fields).scanlineDensity,
                                           (MethodInfo *)0x0);
                                pUVar16 = (pPVar35->fields).runtimeMat;
                                pTVar36 = (TMPro_TMP_Text_o *)0x0;
                                if (pUVar16 != (UnityEngine_Material_o *)0x0) {
                                  UnityEngine_Material__SetFloat_4dcd3b0
                                            (pUVar16,*(int32_t *)
                                                      ((long)&(((TypeInfo_NameEffectController->fields).m_ParentMask)->fields).
                                                              m_RectTransform + 4),
                                             (pPVar27->fields).scanlineSpeed,(MethodInfo *)0x0);
                                  pUVar16 = (pPVar35->fields).runtimeMat;
                                  pTVar36 = (TMPro_TMP_Text_o *)0x0;
                                  if (pUVar16 != (UnityEngine_Material_o *)0x0) {
                                    UnityEngine_Material__SetFloat_4dcd3b0
                                              (pUVar16,*(int32_t *)
                                                        &(((TypeInfo_NameEffectController->fields).m_ParentMask)->fields).
                                                         m_MaskableTargets,(pPVar27->fields).flickerStrength,
                                               (MethodInfo *)0x0);
                                    pUVar16 = (pPVar35->fields).runtimeMat;
                                    pTVar36 = (TMPro_TMP_Text_o *)0x0;
                                    if (pUVar16 != (UnityEngine_Material_o *)0x0) {
                                      UnityEngine_Material__SetFloat_4dcd3b0
                                                (pUVar16,*(int32_t *)
                                                          ((long)&(((TypeInfo_NameEffectController->fields).m_ParentMask)->
                                                                  fields).m_MaskableTargets + 4),
                                                 (pPVar27->fields).flickerSpeed,(MethodInfo *)0x0);
                                      pUVar16 = (pPVar35->fields).runtimeMat;
                                      pTVar36 = (TMPro_TMP_Text_o *)0x0;
                                      if (pUVar16 != (UnityEngine_Material_o *)0x0) {
                                        uVar12 = *(uint *)&(((TypeInfo_NameEffectController->fields).m_ParentMask)->fields).
                                                           m_ClipTargets;
                                        pMVar34 = (MethodInfo *)(ulong)uVar12;
                                        UnityEngine_Material__SetFloat_4dcd3b0
                                                  (pUVar16,uVar12,(pPVar27->fields).softness,(MethodInfo *)0x0
                                                  );
                                        PatreonEffects_NameEffectController__HookEffectVertexData
                                                  (pPVar35,pMVar34);
                                        pTVar36 = (pPVar35->fields).text;
                                        if (pTVar36 != (TMPro_TMP_Text_o *)0x0) {
                                          (*(pTVar36->klass->vtable)._106_ForceMeshUpdate.methodPtr)
                                                    (pTVar36,0,0,
                                                     (pTVar36->klass->vtable)._106_ForceMeshUpdate.method);
                                          pTVar37 = (pPVar35->fields).text;
                                          if (pTVar37 != (TMPro_TMP_Text_o *)0x0) {
                                            textInfo = *(TMPro_TMP_TextInfo_o **)
                                                        &(pTVar37->fields).m_ignoreCulling;
                                            if (g_data_057ae048 == '\0') {
                                              il2cpp_runtime_helper_023445d0(&TypeInfo_NameEffectController);
                                              il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
                                              g_data_057ae048 = '\x01';
                                            }
                                            fStack_9c = 0.0;
                                            fStack_a0 = 0.0;
                                            fStack_a4 = 0.0;
                                            fStack_a8 = 0.0;
                                            uStack_50._0_4_ = 0;
                                            uStack_50._4_4_ = 0;
                                            auStack_48._0_4_ = 0.0;
                                            auStack_48._4_4_ = 0.0;
                                            pUStack_60 = (UnityEngine_Material_o *)0x0;
                                            lStack_58 = 0;
                                            auStack_90._32_8_ = (TMPro_TMP_SpriteAsset_o *)0x0;
                                            auStack_90._40_4_ = 0.0;
                                            auStack_90._44_4_ = 0.0;
                                            auStack_90._16_8_ = (TMPro_TMP_TextElement_o *)0x0;
                                            auStack_90._24_8_ = (TMPro_TMP_FontAsset_o *)0x0;
                                            auStack_90._0_8_ = (TMPro_TMP_Text_c *)0x0;
                                            auStack_90._8_8_ = (void *)0x0;
                                            pUVar15 = (UnityEngine_Object_o *)(pPVar35->fields).runtimeMat;
                                            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                                              il2cpp_runtime_helper_02337ed0();
                                            }
                                            bVar24 = UnityEngine_Object__op_Equality
                                                               (pUVar15,(UnityEngine_Object_o *)0x0,
                                                                (MethodInfo *)0x0);
                                            pPVar27 = (PatreonEffects_NameEffectSettings_o *)
                                                      CONCAT44(extraout_var_00,bVar24);
                                            if (((char)bVar24 == '\0') &&
                                               (textInfo != (TMPro_TMP_TextInfo_o *)0x0)) {
                                              if (*(int *)((long)&(TypeInfo_NameEffectController->fields).m_Corners + 4) == 0)
                                              {
                                                il2cpp_runtime_helper_02337ed0();
                                              }
                                              bVar24 = PatreonEffects_NameEffectController__TryLocalBounds
                                                                 (textInfo,&fStack_9c,&fStack_a0,&fStack_a4,
                                                                  &fStack_a8,in_R9);
                                              fVar21 = fStack_9c;
                                              fVar40 = fStack_a0;
                                              fVar20 = fStack_a4;
                                              fVar41 = fStack_a8;
                                              pPVar27 = (PatreonEffects_NameEffectSettings_o *)
                                                        CONCAT44(extraout_var_01,bVar24);
                                              if ((char)bVar24 != '\0') {
                                                pTVar36 = TypeInfo_NameEffectController;
                                                if (*(int *)((long)&(TypeInfo_NameEffectController->fields).m_Corners + 4) == 0
                                                   ) {
                                                  il2cpp_runtime_helper_02337ed0();
                                                  pTVar26 = (textInfo->fields).characterInfo;
                                                  if (pTVar26 == (TMPro_TMP_CharacterInfo_array *)0x0) {
                                                    return (PatreonEffects_NameEffectSettings_o *)0x0;
                                                  }
                                                }
                                                else {
                                                  pTVar26 = (textInfo->fields).characterInfo;
                                                  if (pTVar26 == (TMPro_TMP_CharacterInfo_array *)0x0) {
                                                    return (PatreonEffects_NameEffectSettings_o *)0x0;
                                                  }
                                                }
                                                uVar12 = (textInfo->fields).characterCount;
                                                uVar13 = (uint)pTVar26->max_length;
                                                if ((int)uVar12 <= (int)uVar13) {
                                                  uVar13 = uVar12;
                                                }
                                                pPVar27 = (PatreonEffects_NameEffectSettings_o *)(ulong)uVar13
                                                ;
                                                if (0 < (int)uVar13) {
                                                  fVar40 = fVar40 - fVar21;
                                                  fVar41 = fVar41 - fVar20;
                                                  if (fVar40 <= 0.001) {
                                                    fVar40 = 0.001;
                                                  }
                                                  if (fVar41 <= 0.001) {
                                                    fVar41 = 0.001;
                                                  }
                                                  lVar32 = 0x58;
                                                  uVar38 = 0;
                                                  ppTVar28 = (TMPro_TMP_Text_o **)
                                                             (textInfo->fields).characterInfo;
                                                  pTVar37 = TypeInfo_NameEffectController;
                                                  while (TypeInfo_NameEffectController = pTVar37,
                                                        (TMPro_TMP_CharacterInfo_array *)ppTVar28 !=
                                                        (TMPro_TMP_CharacterInfo_array *)0x0) {
                                                    if ((uint)((TMPro_TMP_CharacterInfo_array *)ppTVar28)->
                                                              max_length <= uVar38) goto label_0432a626;
                                                    if ((*(byte *)((long)&((TMPro_TMP_CharacterInfo_array *)
                                                                          ppTVar28)->m_Items[0].fields.
                                                                          topRight.fields.y + lVar32) & 1) !=
                                                        0) {
                                                      uVar12 = *(uint *)((long)((TMPro_TMP_CharacterInfo_array
                                                                                 *)ppTVar28)->m_Items +
                                                                        lVar32 + -0x20);
                                                      lVar30 = (long)(int)uVar12;
                                                      uVar13 = *(uint *)((long)((TMPro_TMP_CharacterInfo_array
                                                                                 *)ppTVar28)->m_Items +
                                                                        lVar32 + -0xc);
                                                      uVar39 = (ulong)uVar13;
                                                      ppTVar28 = &TypeInfo_NameEffectController;
                                                      pTVar36 = pTVar37;
                                                      if (*(int *)((long)&(pTVar37->fields).m_Corners + 4) ==
                                                          0) {
                                                        ppTVar28 = (TMPro_TMP_Text_o **)il2cpp_runtime_helper_02337ed0();
                                                        pTVar36 = pTVar37;
                                                      }
                                                      uStack_50._0_4_ = 0;
                                                      uStack_50._4_4_ = 0;
                                                      auStack_48._0_4_ = 0.0;
                                                      auStack_48._4_4_ = 0.0;
                                                      pUStack_60 = (UnityEngine_Material_o *)0x0;
                                                      lStack_58 = 0;
                                                      auStack_90._32_8_ = (TMPro_TMP_SpriteAsset_o *)0x0;
                                                      auStack_90._40_4_ = 0.0;
                                                      auStack_90._44_4_ = 0.0;
                                                      auStack_90._16_8_ = (TMPro_TMP_TextElement_o *)0x0;
                                                      auStack_90._24_8_ = (TMPro_TMP_FontAsset_o *)0x0;
                                                      auStack_90._0_8_ = (TMPro_TMP_Text_c *)0x0;
                                                      auStack_90._8_8_ = (void *)0x0;
                                                      if (((-1 < (int)uVar12) &&
                                                          (ppTVar28 = (TMPro_TMP_Text_o **)
                                                                      (textInfo->fields).meshInfo,
                                                          (TMPro_TMP_CharacterInfo_array *)ppTVar28 !=
                                                          (TMPro_TMP_CharacterInfo_array *)0x0)) &&
                                                         (uVar14 = (uint)((TMPro_TMP_CharacterInfo_array *)
                                                                         ppTVar28)->max_length,
                                                         (int)uVar12 < (int)uVar14)) {
                                                        if (uVar14 <= uVar12) goto label_0432a626;
                                                        puVar3 = &((TMPro_TMP_CharacterInfo_array *)ppTVar28)
                                                                  ->m_Items[0].fields.character +
                                                                 lVar30 * 0x28;
                                                        auStack_90._0_8_ = *(undefined8 *)puVar3;
                                                        auStack_90._8_8_ = *(undefined8 *)(puVar3 + 4);
                                                        ppTVar4 = &((TMPro_TMP_CharacterInfo_array *)ppTVar28)
                                                                   ->m_Items[0].fields.textElement +
                                                                  lVar30 * 10;
                                                        auStack_90._16_8_ = *ppTVar4;
                                                        auStack_90._24_8_ = ppTVar4[1];
                                                        ppTVar5 = &((TMPro_TMP_CharacterInfo_array *)ppTVar28)
                                                                   ->m_Items[0].fields.spriteAsset +
                                                                  lVar30 * 10;
                                                        auStack_90._32_8_ = *ppTVar5;
                                                        auStack_90._40_8_ = ppTVar5[1];
                                                        ppUVar6 = &((TMPro_TMP_CharacterInfo_array *)ppTVar28)
                                                                   ->m_Items[0].fields.material + lVar30 * 10;
                                                        pUStack_60 = *ppUVar6;
                                                        lStack_58 = (long)ppUVar6[1];
                                                        pfVar7 = &((TMPro_TMP_CharacterInfo_array *)ppTVar28)
                                                                  ->m_Items[0].fields.pointSize +
                                                                 lVar30 * 0x14;
                                                        uStack_50 = *(undefined8 *)pfVar7;
                                                        auStack_48._0_8_ = *(undefined8 *)(pfVar7 + 2);
                                                        pTVar36 = (TMPro_TMP_Text_o *)auStack_90;
                                                        ppTVar28 = (TMPro_TMP_Text_o **)il2cpp_runtime_helper_022b4080();
                                                        lVar30 = lStack_58;
                                                        uVar19 = auStack_90._16_8_;
                                                        if ((lStack_58 != 0) &&
                                                           ((TMPro_TMP_TextElement_o *)auStack_90._16_8_ !=
                                                            (TMPro_TMP_TextElement_o *)0x0)) {
                                                          ppTVar28 = *(TMPro_TMP_Text_o ***)(lStack_58 + 0x18)
                                                          ;
                                                          if (((int)(uVar13 + 3) < (int)ppTVar28) &&
                                                             (pTVar17 = ((TMPro_TMP_TextElement_Fields *)
                                                                        (auStack_90._16_8_ + 0x10))->
                                                                        m_TextAsset,
                                                             (int)(uVar13 + 3) < (int)pTVar17)) {
                                                            if ((((ulong)ppTVar28 & 0xffffffff) <= uVar39) ||
                                                               (((ulong)pTVar17 & 0xffffffff) <= uVar39)) {
label_0432a626:
                                                              pPVar27 = (PatreonEffects_NameEffectSettings_o *
                                                                        )il2cpp_runtime_helper_022b2ca0();
                                                              return pPVar27;
                                                            }
                                                            lVar29 = (long)(int)uVar13;
                                                            bVar10 = *(byte *)(lStack_58 + 0x23 + lVar29 * 4);
                                                            fVar8 = *(float *)((long)&((
                                                       TMPro_TMP_TextElement_Fields *)
                                                       (auStack_90._16_8_ + 0x10))->m_Glyph + lVar29 * 0xc);
                                                       pTVar36 = TypeInfo_NameEffectController;
                                                       if (*(int *)((long)&(TypeInfo_NameEffectController->fields).m_Corners +
                                                                   4) == 0) {
                                                         il2cpp_runtime_helper_02337ed0();
                                                       }
                                                       bVar22 = PatreonEffects_NameEffectController__ToByte
                                                                          ((fVar8 - fVar21) / fVar40,
                                                                           (MethodInfo *)pTVar36);
                                                       if ((*(uint *)&((TMPro_TMP_TextElement_Fields *)
                                                                      (uVar19 + 0x10))->m_TextAsset <= uVar39)
                                                          || (bVar23 = 
                                                       PatreonEffects_NameEffectController__ToByte
                                                                 ((*(float *)((long)&((
                                                       TMPro_TMP_TextElement_Fields *)(uVar19 + 0x10))->
                                                       m_Glyph + lVar29 * 0xc + 4) - fVar20) / fVar41,
                                                       (MethodInfo *)pTVar36),
                                                       *(uint *)(lVar30 + 0x18) <= uVar39)) goto label_0432a626;
                                                       *(uint *)(lVar30 + 0x20 + lVar29 * 4) =
                                                            (uint)bVar22 | (uint)bVar10 << 0x18 |
                                                            (uint)bVar23 << 8 | 0xff0000;
                                                       uVar1 = uVar39 + 1;
                                                       if ((*(uint *)(lVar30 + 0x18) <= uVar1) ||
                                                          (*(uint *)&((TMPro_TMP_TextElement_Fields *)
                                                                     (uVar19 + 0x10))->m_TextAsset <= uVar1))
                                                       goto label_0432a626;
                                                       lVar29 = (long)(int)uVar1;
                                                       bVar10 = *(byte *)(lVar30 + 0x23 + lVar29 * 4);
                                                       lStack_98 = lVar29 * 3;
                                                       fVar8 = *(float *)((long)&((
                                                       TMPro_TMP_TextElement_Fields *)(uVar19 + 0x10))->
                                                       m_Glyph + lVar29 * 0xc);
                                                       pTVar36 = TypeInfo_NameEffectController;
                                                       if (*(int *)((long)&(TypeInfo_NameEffectController->fields).m_Corners +
                                                                   4) == 0) {
                                                         il2cpp_runtime_helper_02337ed0();
                                                       }
                                                       bVar22 = PatreonEffects_NameEffectController__ToByte
                                                                          ((fVar8 - fVar21) / fVar40,
                                                                           (MethodInfo *)pTVar36);
                                                       if ((*(uint *)&((TMPro_TMP_TextElement_Fields *)
                                                                      (uVar19 + 0x10))->m_TextAsset <= uVar1)
                                                          || (bVar23 = 
                                                       PatreonEffects_NameEffectController__ToByte
                                                                 ((*(float *)((long)&((
                                                       TMPro_TMP_TextElement_Fields *)(uVar19 + 0x10))->
                                                       m_Glyph + lStack_98 * 4 + 4) - fVar20) / fVar41,
                                                       (MethodInfo *)pTVar36),
                                                       *(uint *)(lVar30 + 0x18) <= uVar1)) goto label_0432a626;
                                                       *(uint *)(lVar30 + 0x20 + lVar29 * 4) =
                                                            (uint)bVar22 | (uint)bVar10 << 0x18 |
                                                            (uint)bVar23 << 8 | 0xff0000;
                                                       uVar1 = uVar39 + 2;
                                                       if ((*(uint *)(lVar30 + 0x18) <= uVar1) ||
                                                          (*(uint *)&((TMPro_TMP_TextElement_Fields *)
                                                                     (uVar19 + 0x10))->m_TextAsset <= uVar1))
                                                       goto label_0432a626;
                                                       lVar29 = (long)(int)uVar1;
                                                       bVar10 = *(byte *)(lVar30 + 0x23 + lVar29 * 4);
                                                       lStack_98 = lVar29 * 3;
                                                       fVar8 = *(float *)((long)&((
                                                       TMPro_TMP_TextElement_Fields *)(uVar19 + 0x10))->
                                                       m_Glyph + lVar29 * 0xc);
                                                       pTVar36 = TypeInfo_NameEffectController;
                                                       if (*(int *)((long)&(TypeInfo_NameEffectController->fields).m_Corners +
                                                                   4) == 0) {
                                                         il2cpp_runtime_helper_02337ed0();
                                                       }
                                                       bVar22 = PatreonEffects_NameEffectController__ToByte
                                                                          ((fVar8 - fVar21) / fVar40,
                                                                           (MethodInfo *)pTVar36);
                                                       if ((*(uint *)&((TMPro_TMP_TextElement_Fields *)
                                                                      (uVar19 + 0x10))->m_TextAsset <= uVar1)
                                                          || (bVar23 = 
                                                       PatreonEffects_NameEffectController__ToByte
                                                                 ((*(float *)((long)&((
                                                       TMPro_TMP_TextElement_Fields *)(uVar19 + 0x10))->
                                                       m_Glyph + lStack_98 * 4 + 4) - fVar20) / fVar41,
                                                       (MethodInfo *)pTVar36),
                                                       *(uint *)(lVar30 + 0x18) <= uVar1)) goto label_0432a626;
                                                       *(uint *)(lVar30 + 0x20 + lVar29 * 4) =
                                                            (uint)bVar22 | (uint)bVar10 << 0x18 |
                                                            (uint)bVar23 << 8 | 0xff0000;
                                                       uVar39 = uVar39 + 3;
                                                       if ((*(uint *)(lVar30 + 0x18) <= uVar39) ||
                                                          (*(uint *)&((TMPro_TMP_TextElement_Fields *)
                                                                     (uVar19 + 0x10))->m_TextAsset <= uVar39))
                                                       goto label_0432a626;
                                                       ppTVar28 = (TMPro_TMP_Text_o **)(long)(int)uVar39;
                                                       bVar10 = *(byte *)(lVar30 + 0x23 + (long)ppTVar28 * 4);
                                                       fVar8 = *(float *)((long)&((
                                                       TMPro_TMP_TextElement_Fields *)(uVar19 + 0x10))->
                                                       m_Glyph + (long)ppTVar28 * 0xc);
                                                       pTVar36 = TypeInfo_NameEffectController;
                                                       if (*(int *)((long)&(TypeInfo_NameEffectController->fields).m_Corners +
                                                                   4) == 0) {
                                                         il2cpp_runtime_helper_02337ed0();
                                                       }
                                                       bVar22 = PatreonEffects_NameEffectController__ToByte
                                                                          ((fVar8 - fVar21) / fVar40,
                                                                           (MethodInfo *)pTVar36);
                                                       if ((*(uint *)&((TMPro_TMP_TextElement_Fields *)
                                                                      (uVar19 + 0x10))->m_TextAsset <= uVar39)
                                                          || (bVar23 = 
                                                       PatreonEffects_NameEffectController__ToByte
                                                                 ((*(float *)((long)&((
                                                       TMPro_TMP_TextElement_Fields *)(uVar19 + 0x10))->
                                                       m_Glyph + (long)ppTVar28 * 0xc + 4) - fVar20) / fVar41,
                                                       (MethodInfo *)pTVar36),
                                                       *(uint *)(lVar30 + 0x18) <= uVar39)) goto label_0432a626;
                                                       *(uint *)(lVar30 + 0x20 + (long)ppTVar28 * 4) =
                                                            (uint)bVar22 | (uint)bVar10 << 0x18 |
                                                            (uint)bVar23 << 8 | 0xff0000;
                                                       }
                                                       }
                                                      }
                                                    }
                                                    uVar38 = uVar38 + 1;
                                                    lVar32 = lVar32 + 0x178;
                                                    if (pPVar27 ==
                                                        (PatreonEffects_NameEffectSettings_o *)uVar38) {
                                                      return (PatreonEffects_NameEffectSettings_o *)
                                                             (TMPro_TMP_CharacterInfo_array *)ppTVar28;
                                                    }
                                                    pTVar37 = TypeInfo_NameEffectController;
                                                    ppTVar28 = (TMPro_TMP_Text_o **)
                                                               (textInfo->fields).characterInfo;
                                                  }
                                                  il2cpp_runtime_helper_022b2c90();
                                                  if (g_data_057ae047 == '\0') {
                                                    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
                                                    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
                                                    g_data_057ae047 = '\x01';
                                                  }
                                                  pUVar15 = (UnityEngine_Object_o *)
                                                            (pTVar36->fields).m_Material;
                                                  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                                                    il2cpp_runtime_helper_02337ed0();
                                                  }
                                                  bVar24 = UnityEngine_Object__op_Inequality
                                                                     (pUVar15,(UnityEngine_Object_o *)0x0,
                                                                      (MethodInfo *)0x0);
                                                  if ((char)bVar24 != '\0') {
                                                    pUVar15 = *(UnityEngine_Object_o **)
                                                               &(pTVar36->fields).m_Color.fields.b;
                                                    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                                                      il2cpp_runtime_helper_02337ed0();
                                                    }
                                                    pMVar34 = (MethodInfo *)0x0;
                                                    bVar24 = UnityEngine_Object__op_Inequality
                                                                       (pUVar15,(UnityEngine_Object_o *)0x0,
                                                                        (MethodInfo *)0x0);
                                                    if ((char)bVar24 != '\0') {
                                                      pUVar16 = (pTVar36->fields).m_Material;
                                                      if (pUVar16 != (UnityEngine_Material_o *)0x0) {
                                                        pMVar34 = *(MethodInfo **)
                                                                   &(pTVar36->fields).m_Color.fields.b;
                                                        pUVar18 = pUVar16->klass;
                                                        uVar19._0_4_ = pUVar18[3]._2.token;
                                                        uVar19._4_2_ = pUVar18[3]._2.method_count;
                                                        uVar19._6_2_ = pUVar18[3]._2.property_count;
                                                        (**(code **)&pUVar18[3]._2.thread_static_fields_offset
                                                        )(pUVar16,pMVar34,uVar19);
                                                        pUVar16 = (pTVar36->fields).m_Material;
                                                        if (pUVar16 != (UnityEngine_Material_o *)0x0) {
                                                          (*pUVar16->klass[5]._1.fields)
                                                                    (pUVar16,0,0,pUVar16->klass[5]._1.events);
                                                          goto label_0432a71e;
                                                        }
                                                      }
                                                      pPVar35 = (PatreonEffects_NameEffectController_o *)0x0;
                                                      il2cpp_runtime_helper_022b2c90();
                                                      PatreonEffects_NameEffectController__Clear
                                                                (pPVar35,pMVar34);
                                                      return extraout_RAX_03;
                                                    }
                                                  }
label_0432a71e:
                                                  pUVar15 = *(UnityEngine_Object_o **)
                                                             &(pTVar36->fields).m_RaycastTarget;
                                                  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                                                    il2cpp_runtime_helper_02337ed0();
                                                  }
                                                  pbVar2 = &(pTVar36->fields).m_RaycastTarget;
                                                  bVar24 = UnityEngine_Object__op_Inequality
                                                                     (pUVar15,(UnityEngine_Object_o *)0x0,
                                                                      (MethodInfo *)0x0);
                                                  if ((char)bVar24 != '\0') {
                                                    if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
                                                      il2cpp_runtime_helper_02337ed0();
                                                    }
                                                    bVar24 = UnityEngine_Application__get_isPlaying
                                                                       ((MethodInfo *)0x0);
                                                    pUVar15 = *(UnityEngine_Object_o **)pbVar2;
                                                    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                                                      il2cpp_runtime_helper_02337ed0();
                                                    }
                                                    if ((char)bVar24 == '\0') {
                                                      UnityEngine_Object__DestroyImmediate_4e01e00
                                                                (pUVar15,(MethodInfo *)0x0);
                                                    }
                                                    else {
                                                      UnityEngine_Object__Destroy_4e01c60
                                                                (pUVar15,(MethodInfo *)0x0);
                                                    }
                                                  }
                                                  (pTVar36->fields).m_RaycastTarget = 0;
                                                  (pTVar36->fields).m_RaycastTargetCache = 0;
                                                  pPVar27 = (PatreonEffects_NameEffectSettings_o *)
                                                            il2cpp_runtime_helper_022b4080(pbVar2,0);
                                                  *(undefined1 *)&(pTVar36->fields).m_RaycastPadding.fields.x
                                                       = 0;
                                                  return pPVar27;
                                                }
                                              }
                                            }
                                            return pPVar27;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          pPVar25 = (PatreonEffects_NameEffectSettings_o *)il2cpp_runtime_helper_022b2c90();
          auStack_48._0_8_ = (ulong)bVar10;
          auStack_48._8_8_ = pPVar27;
          if (g_data_057ae039 == '\0') {
            uStack_50._0_4_ = 0x43291e7;
            uStack_50._4_4_ = 0;
            il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_Text_GetComponent_TMP_Text);
            uStack_50._0_4_ = 0x43291f3;
            uStack_50._4_4_ = 0;
            pPVar25 = (PatreonEffects_NameEffectSettings_o *)il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            g_data_057ae039 = '\x01';
            cVar9 = *(char *)((long)&(pTVar36->fields).m_CanvasRenderer + 4);
          }
          else {
            cVar9 = *(char *)((long)&(pTVar36->fields).m_CanvasRenderer + 4);
          }
          if (cVar9 == '\0') {
            *(undefined1 *)((long)&(pTVar36->fields).m_CanvasRenderer + 4) = 1;
            pUVar15 = (UnityEngine_Object_o *)(pTVar36->fields).m_Material;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              uStack_50._0_4_ = 0x4329220;
              uStack_50._4_4_ = 0;
              il2cpp_runtime_helper_02337ed0();
            }
            pMVar34 = (MethodInfo *)0x0;
            uStack_50._0_4_ = 0x432922c;
            uStack_50._4_4_ = 0;
            bVar24 = UnityEngine_Object__op_Equality(pUVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar24 != '\0') {
              uStack_50._0_4_ = 0x4329246;
              uStack_50._4_4_ = 0;
              pMVar34 = (MethodInfo *)
                        UnityEngine_Component__GetComponent_object_
                                  ((UnityEngine_Component_o *)pTVar36,MethodInfo_TMP_Text_GetComponent_TMP_Text);
              (pTVar36->fields).m_Material = (UnityEngine_Material_o *)pMVar34;
              uStack_50._0_4_ = 0x4329255;
              uStack_50._4_4_ = 0;
              il2cpp_runtime_helper_022b4080(&(pTVar36->fields).m_Material);
            }
            uStack_50._0_4_ = 0x432925d;
            uStack_50._4_4_ = 0;
            PatreonEffects_NameEffectController__RefreshOriginalMaterial
                      ((PatreonEffects_NameEffectController_o *)pTVar36,pMVar34);
            if (g_data_057ae042 == '\0') {
              uStack_50._0_4_ = 0x4329272;
              uStack_50._4_4_ = 0;
              il2cpp_runtime_helper_023445d0(&TypeInfo_NameEffectController);
              g_data_057ae042 = '\x01';
            }
            *(undefined1 *)&(pTVar36->fields).m_CanvasRenderer = 0;
            uStack_50._0_4_ = 0x4329285;
            uStack_50._4_4_ = 0;
            PatreonEffects_NameEffectController__ClearPopGradient
                      ((PatreonEffects_NameEffectController_o *)pTVar36,pMVar34);
            if (*(int *)((long)&(TypeInfo_NameEffectController->fields).m_Corners + 4) == 0) {
              uStack_50._0_4_ = 0x43292a1;
              uStack_50._4_4_ = 0;
              il2cpp_runtime_helper_02337ed0();
            }
            uStack_50._0_4_ = 0x43292a9;
            uStack_50._4_4_ = 0;
            PatreonEffects_NameEffectController__DestroyPopLayer
                      ((TMPro_TMP_Text_o **)&(pTVar36->fields).m_RaycastPadding.fields.z,pMVar34);
            uStack_50._0_4_ = 0x43292b2;
            uStack_50._4_4_ = 0;
            PatreonEffects_NameEffectController__DestroyPopLayer
                      ((TMPro_TMP_Text_o **)&(pTVar36->fields).m_RectTransform,pMVar34);
            cVar9 = *(char *)((long)&(pTVar36->fields).m_CanvasRenderer + 1);
            *(undefined1 *)((long)&(pTVar36->fields).m_CanvasRenderer + 1) = 0;
            uStack_50._0_4_ = 0x43292c2;
            uStack_50._4_4_ = 0;
            PatreonEffects_NameEffectController__ClearPopGradient
                      ((PatreonEffects_NameEffectController_o *)pTVar36,pMVar34);
            if (cVar9 != '\0') {
              uStack_50._0_4_ = 0x43292cf;
              uStack_50._4_4_ = 0;
              PatreonEffects_NameEffectController__ClearShaderMaterial
                        ((PatreonEffects_NameEffectController_o *)pTVar36,pMVar34);
            }
            uStack_50._0_4_ = 0x43292d7;
            uStack_50._4_4_ = 0;
            PatreonEffects_NameEffectController__ClearEffectVertexData
                      ((PatreonEffects_NameEffectController_o *)pTVar36,pMVar34);
            uStack_50._0_4_ = 0x43292df;
            uStack_50._4_4_ = 0;
            PatreonEffects_NameEffectController__ClearShaderMaterial
                      ((PatreonEffects_NameEffectController_o *)pTVar36,pMVar34);
            *(undefined1 *)&(pTVar36->fields).m_RaycastPadding.fields.x = 0;
            return extraout_RAX_02;
          }
          return pPVar25;
        }
      }
    }
    return pPVar25;
  }
  register0x00000020 = (BADSPACEBASE *)(puVar31 + -8);
  *(undefined8 *)(puVar31 + -8) = unaff_RBX;
  if (g_data_057ae054 == '\0') {
    *(undefined8 *)(puVar31 + -0x10) = 0x432d0e6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameEffectSettings);
    g_data_057ae054 = '\x01';
  }
  *(undefined8 *)(puVar31 + -0x10) = 0x432d0fc;
  pPVar27 = (PatreonEffects_NameEffectSettings_o *)il2cpp_runtime_helper_023052d0(TypeInfo_NameEffectSettings);
  (pPVar27->fields).gradientA.fields.r = 0.78;
  (pPVar27->fields).gradientA.fields.g = 1.0;
  (pPVar27->fields).gradientA.fields.b = 0.9;
  (pPVar27->fields).gradientA.fields.a = 1.0;
  (pPVar27->fields).gradientB.fields.r = 0.64;
  (pPVar27->fields).gradientB.fields.g = 0.95;
  (pPVar27->fields).gradientB.fields.b = 1.0;
  (pPVar27->fields).gradientB.fields.a = 1.0;
  (pPVar27->fields).gradientC.fields.r = 0.86;
  (pPVar27->fields).gradientC.fields.g = 0.76;
  (pPVar27->fields).gradientC.fields.b = 1.0;
  (pPVar27->fields).gradientC.fields.a = 1.0;
  (pPVar27->fields).gradientD.fields.r = 1.0;
  (pPVar27->fields).gradientD.fields.g = 0.96;
  (pPVar27->fields).gradientD.fields.b = 0.82;
  (pPVar27->fields).gradientD.fields.a = 1.0;
  (pPVar27->fields).gradientScale = 2.8;
  (pPVar27->fields).gradientSpeed = 0.16;
  (pPVar27->fields).glow = 1.35;
  (pPVar27->fields).scanlineStrength = 0.12;
  (pPVar27->fields).scanlineDensity = 180.0;
  (pPVar27->fields).scanlineSpeed = 0.18;
  (pPVar27->fields).flickerStrength = 0.05;
  (pPVar27->fields).flickerSpeed = 18.0;
  (pPVar27->fields).softness = 1.0;
  (pPVar27->fields).popShadowOffset.fields = (UnityEngine_Vector2_Fields)0xbfc0000000000000;
  (pPVar27->fields).popExtrusionOffset.fields = (UnityEngine_Vector2_Fields)0xc0c0000000000000;
  *(undefined8 *)(puVar31 + -0x10) = 0x432d15d;
  System_Object___ctor((Il2CppObject *)pPVar27,(MethodInfo *)0x0);
  if (pPVar27 != (PatreonEffects_NameEffectSettings_o *)0x0) {
    (pPVar27->fields).effectMode = 3;
    (pPVar27->fields).gradientA.fields.r = 0.72;
    (pPVar27->fields).gradientA.fields.g = 0.08;
    (pPVar27->fields).gradientA.fields.b = 0.02;
    (pPVar27->fields).gradientA.fields.a = 1.0;
    (pPVar27->fields).gradientB.fields.r = 1.0;
    (pPVar27->fields).gradientB.fields.g = 0.36;
    (pPVar27->fields).gradientB.fields.b = 0.04;
    (pPVar27->fields).gradientB.fields.a = 1.0;
    (pPVar27->fields).gradientC.fields.r = 1.0;
    (pPVar27->fields).gradientC.fields.g = 0.86;
    (pPVar27->fields).gradientC.fields.b = 0.18;
    (pPVar27->fields).gradientC.fields.a = 1.0;
    (pPVar27->fields).gradientD.fields.r = 1.0;
    (pPVar27->fields).gradientD.fields.g = 0.45;
    (pPVar27->fields).gradientD.fields.b = 0.08;
    (pPVar27->fields).gradientD.fields.a = 1.0;
    (pPVar27->fields).gradientScale = 1.15;
    (pPVar27->fields).gradientSpeed = 0.42;
    (pPVar27->fields).glow = 0.38;
    (pPVar27->fields).scanlineStrength = 0.48;
    (pPVar27->fields).scanlineDensity = 11.0;
    (pPVar27->fields).scanlineSpeed = 0.46;
    (pPVar27->fields).flickerStrength = 0.12;
    (pPVar27->fields).flickerSpeed = 9.0;
    (pPVar27->fields).softness = 0.92;
    return pPVar27;
  }
  *(undefined8 *)(puVar31 + -0x10) = 0x432d1bc;
  il2cpp_runtime_helper_022b2c90();
  unaff_RBX = 0;
PatreonEffects_NameEffectPresets__Waves:
  puVar31 = (undefined1 *)((long)register0x00000020 + -8);
  *(undefined8 *)((long)register0x00000020 + -8) = unaff_RBX;
  if (g_data_057ae055 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0x432d1d6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameEffectSettings);
    g_data_057ae055 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x10) = 0x432d1ec;
  pPVar27 = (PatreonEffects_NameEffectSettings_o *)il2cpp_runtime_helper_023052d0(TypeInfo_NameEffectSettings);
  (pPVar27->fields).gradientA.fields.r = 0.78;
  (pPVar27->fields).gradientA.fields.g = 1.0;
  (pPVar27->fields).gradientA.fields.b = 0.9;
  (pPVar27->fields).gradientA.fields.a = 1.0;
  (pPVar27->fields).gradientB.fields.r = 0.64;
  (pPVar27->fields).gradientB.fields.g = 0.95;
  (pPVar27->fields).gradientB.fields.b = 1.0;
  (pPVar27->fields).gradientB.fields.a = 1.0;
  (pPVar27->fields).gradientC.fields.r = 0.86;
  (pPVar27->fields).gradientC.fields.g = 0.76;
  (pPVar27->fields).gradientC.fields.b = 1.0;
  (pPVar27->fields).gradientC.fields.a = 1.0;
  (pPVar27->fields).gradientD.fields.r = 1.0;
  (pPVar27->fields).gradientD.fields.g = 0.96;
  (pPVar27->fields).gradientD.fields.b = 0.82;
  (pPVar27->fields).gradientD.fields.a = 1.0;
  (pPVar27->fields).gradientScale = 2.8;
  (pPVar27->fields).gradientSpeed = 0.16;
  (pPVar27->fields).glow = 1.35;
  (pPVar27->fields).scanlineStrength = 0.12;
  (pPVar27->fields).scanlineDensity = 180.0;
  (pPVar27->fields).scanlineSpeed = 0.18;
  (pPVar27->fields).flickerStrength = 0.05;
  (pPVar27->fields).flickerSpeed = 18.0;
  (pPVar27->fields).softness = 1.0;
  (pPVar27->fields).popShadowOffset.fields = (UnityEngine_Vector2_Fields)0xbfc0000000000000;
  (pPVar27->fields).popExtrusionOffset.fields = (UnityEngine_Vector2_Fields)0xc0c0000000000000;
  *(undefined8 *)((long)register0x00000020 + -0x10) = 0x432d24d;
  System_Object___ctor((Il2CppObject *)pPVar27,(MethodInfo *)0x0);
  if (pPVar27 != (PatreonEffects_NameEffectSettings_o *)0x0) {
    (pPVar27->fields).effectMode = 4;
    (pPVar27->fields).gradientA.fields.r = 0.05;
    (pPVar27->fields).gradientA.fields.g = 0.34;
    (pPVar27->fields).gradientA.fields.b = 0.76;
    (pPVar27->fields).gradientA.fields.a = 1.0;
    (pPVar27->fields).gradientB.fields.r = 0.08;
    (pPVar27->fields).gradientB.fields.g = 0.74;
    (pPVar27->fields).gradientB.fields.b = 0.92;
    (pPVar27->fields).gradientB.fields.a = 1.0;
    (pPVar27->fields).gradientC.fields.r = 0.72;
    (pPVar27->fields).gradientC.fields.g = 0.96;
    (pPVar27->fields).gradientC.fields.b = 1.0;
    (pPVar27->fields).gradientC.fields.a = 1.0;
    (pPVar27->fields).gradientD.fields.r = 0.18;
    (pPVar27->fields).gradientD.fields.g = 0.86;
    (pPVar27->fields).gradientD.fields.b = 1.0;
    (pPVar27->fields).gradientD.fields.a = 1.0;
    (pPVar27->fields).gradientScale = 0.8;
    (pPVar27->fields).gradientSpeed = 0.18;
    (pPVar27->fields).glow = 0.42;
    (pPVar27->fields).scanlineStrength = 0.24;
    (pPVar27->fields).scanlineDensity = 8.0;
    (pPVar27->fields).scanlineSpeed = 0.2;
    (pPVar27->fields).flickerStrength = 0.0;
    (pPVar27->fields).softness = 0.95;
    return pPVar27;
  }
  *(undefined8 *)((long)register0x00000020 + -0x10) = 0x432d2b6;
  il2cpp_runtime_helper_022b2c90();
  unaff_RBX = 0;
PatreonEffects_NameEffectPresets__Electric:
  register0x00000020 = (BADSPACEBASE *)(puVar31 + -8);
  *(undefined8 *)(puVar31 + -8) = unaff_RBX;
  if (g_data_057ae056 == '\0') {
    *(undefined8 *)(puVar31 + -0x10) = 0x432d2d6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameEffectSettings);
    g_data_057ae056 = '\x01';
  }
  *(undefined8 *)(puVar31 + -0x10) = 0x432d2ec;
  pPVar27 = (PatreonEffects_NameEffectSettings_o *)il2cpp_runtime_helper_023052d0(TypeInfo_NameEffectSettings);
  (pPVar27->fields).gradientA.fields.r = 0.78;
  (pPVar27->fields).gradientA.fields.g = 1.0;
  (pPVar27->fields).gradientA.fields.b = 0.9;
  (pPVar27->fields).gradientA.fields.a = 1.0;
  (pPVar27->fields).gradientB.fields.r = 0.64;
  (pPVar27->fields).gradientB.fields.g = 0.95;
  (pPVar27->fields).gradientB.fields.b = 1.0;
  (pPVar27->fields).gradientB.fields.a = 1.0;
  (pPVar27->fields).gradientC.fields.r = 0.86;
  (pPVar27->fields).gradientC.fields.g = 0.76;
  (pPVar27->fields).gradientC.fields.b = 1.0;
  (pPVar27->fields).gradientC.fields.a = 1.0;
  (pPVar27->fields).gradientD.fields.r = 1.0;
  (pPVar27->fields).gradientD.fields.g = 0.96;
  (pPVar27->fields).gradientD.fields.b = 0.82;
  (pPVar27->fields).gradientD.fields.a = 1.0;
  (pPVar27->fields).gradientScale = 2.8;
  (pPVar27->fields).gradientSpeed = 0.16;
  (pPVar27->fields).glow = 1.35;
  (pPVar27->fields).scanlineStrength = 0.12;
  (pPVar27->fields).scanlineDensity = 180.0;
  (pPVar27->fields).scanlineSpeed = 0.18;
  (pPVar27->fields).flickerStrength = 0.05;
  (pPVar27->fields).flickerSpeed = 18.0;
  (pPVar27->fields).softness = 1.0;
  (pPVar27->fields).popShadowOffset.fields = (UnityEngine_Vector2_Fields)0xbfc0000000000000;
  (pPVar27->fields).popExtrusionOffset.fields = (UnityEngine_Vector2_Fields)0xc0c0000000000000;
  *(undefined8 *)(puVar31 + -0x10) = 0x432d34d;
  System_Object___ctor((Il2CppObject *)pPVar27,(MethodInfo *)0x0);
  if (pPVar27 != (PatreonEffects_NameEffectSettings_o *)0x0) {
    (pPVar27->fields).effectMode = 5;
    (pPVar27->fields).gradientA.fields.r = 0.08;
    (pPVar27->fields).gradientA.fields.g = 0.28;
    (pPVar27->fields).gradientA.fields.b = 1.0;
    (pPVar27->fields).gradientA.fields.a = 1.0;
    (pPVar27->fields).gradientB.fields.r = 0.08;
    (pPVar27->fields).gradientB.fields.g = 0.94;
    (pPVar27->fields).gradientB.fields.b = 1.0;
    (pPVar27->fields).gradientB.fields.a = 1.0;
    (pPVar27->fields).gradientC.fields.r = 0.86;
    (pPVar27->fields).gradientC.fields.g = 1.0;
    (pPVar27->fields).gradientC.fields.b = 1.0;
    (pPVar27->fields).gradientC.fields.a = 1.0;
    (pPVar27->fields).gradientD.fields.r = 0.24;
    (pPVar27->fields).gradientD.fields.g = 0.72;
    (pPVar27->fields).gradientD.fields.b = 1.0;
    (pPVar27->fields).gradientD.fields.a = 1.0;
    (pPVar27->fields).gradientScale = 1.35;
    (pPVar27->fields).gradientSpeed = 0.76;
    (pPVar27->fields).glow = 0.68;
    (pPVar27->fields).scanlineStrength = 0.36;
    (pPVar27->fields).scanlineDensity = 18.0;
    (pPVar27->fields).scanlineSpeed = 0.82;
    (pPVar27->fields).flickerStrength = 0.18;
    (pPVar27->fields).flickerSpeed = 16.0;
    (pPVar27->fields).softness = 0.82;
    return pPVar27;
  }
  *(undefined8 *)(puVar31 + -0x10) = 0x432d3ac;
  il2cpp_runtime_helper_022b2c90();
  unaff_RBX = 0;
PatreonEffects_NameEffectPresets__Outline:
  *(undefined8 *)((long)register0x00000020 + -8) = unaff_RBX;
  if (g_data_057ae057 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0x432d3c6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameEffectSettings);
    g_data_057ae057 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x10) = 0x432d3dc;
  pPVar25 = (PatreonEffects_NameEffectSettings_o *)il2cpp_runtime_helper_023052d0(TypeInfo_NameEffectSettings);
  (pPVar25->fields).gradientA.fields.r = 0.78;
  (pPVar25->fields).gradientA.fields.g = 1.0;
  (pPVar25->fields).gradientA.fields.b = 0.9;
  (pPVar25->fields).gradientA.fields.a = 1.0;
  (pPVar25->fields).gradientB.fields.r = 0.64;
  (pPVar25->fields).gradientB.fields.g = 0.95;
  (pPVar25->fields).gradientB.fields.b = 1.0;
  (pPVar25->fields).gradientB.fields.a = 1.0;
  (pPVar25->fields).gradientC.fields.r = 0.86;
  (pPVar25->fields).gradientC.fields.g = 0.76;
  (pPVar25->fields).gradientC.fields.b = 1.0;
  (pPVar25->fields).gradientC.fields.a = 1.0;
  (pPVar25->fields).gradientD.fields.r = 1.0;
  (pPVar25->fields).gradientD.fields.g = 0.96;
  (pPVar25->fields).gradientD.fields.b = 0.82;
  (pPVar25->fields).gradientD.fields.a = 1.0;
  (pPVar25->fields).gradientScale = 2.8;
  (pPVar25->fields).gradientSpeed = 0.16;
  (pPVar25->fields).glow = 1.35;
  (pPVar25->fields).scanlineStrength = 0.12;
  (pPVar25->fields).scanlineDensity = 180.0;
  (pPVar25->fields).scanlineSpeed = 0.18;
  (pPVar25->fields).flickerStrength = 0.05;
  (pPVar25->fields).flickerSpeed = 18.0;
  (pPVar25->fields).softness = 1.0;
  (pPVar25->fields).popShadowOffset.fields = (UnityEngine_Vector2_Fields)0xbfc0000000000000;
  (pPVar25->fields).popExtrusionOffset.fields = (UnityEngine_Vector2_Fields)0xc0c0000000000000;
  piVar33 = (int *)0x0;
  *(undefined8 *)((long)register0x00000020 + -0x10) = 0x432d43d;
  pPVar27 = pPVar25;
  System_Object___ctor((Il2CppObject *)pPVar25,(MethodInfo *)0x0);
  if (pPVar25 == (PatreonEffects_NameEffectSettings_o *)0x0) {
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0x432d48d;
    il2cpp_runtime_helper_022b2c90();
    *(undefined8 *)((long)register0x00000020 + -0x10) = unaff_R15;
    *(undefined8 *)((long)register0x00000020 + -0x18) = unaff_R14;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0;
    if (g_data_057ae050 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0x432d4b4;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryParse_NameEffectType);
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0x432d4c0;
      il2cpp_runtime_helper_023445d0(&"Wave");
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0x432d4cc;
      il2cpp_runtime_helper_023445d0(&"None");
      g_data_057ae050 = '\x01';
    }
    *(undefined4 *)((long)register0x00000020 + -0x24) = 0;
    *piVar33 = 0;
    pPVar25 = (PatreonEffects_NameEffectSettings_o *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0x432d4ee;
    bVar24 = System_String__IsNullOrWhiteSpace((System_String_o *)pPVar27,(MethodInfo *)0x0);
    if ((char)bVar24 == '\0') {
      pPVar25 = (PatreonEffects_NameEffectSettings_o *)0x0;
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0x432d50c;
      bVar24 = System_String__op_Equality((System_String_o *)pPVar27,"None",(MethodInfo *)0x0);
      if ((char)bVar24 == '\0') {
        *(undefined8 *)((long)register0x00000020 + -0x38) = 0x432d52d;
        bVar24 = System_String__Equals_3af50f0((System_String_o *)pPVar27,"Wave",5,(MethodInfo *)0x0);
        if ((char)bVar24 == '\0') {
          if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
            *(undefined8 *)((long)register0x00000020 + -0x38) = 0x432d556;
            il2cpp_runtime_helper_02337ed0();
          }
          pMVar34 = (MethodInfo *)0x1;
          *(undefined8 *)((long)register0x00000020 + -0x38) = 0x432d572;
          bVar24 = System_Enum__TryParse_Int32Enum__2501010
                             ((System_String_o *)pPVar27,1,(int32_t *)((long)register0x00000020 + -0x24),
                              MethodInfo_Boolean_TryParse_NameEffectType);
          if (((char)bVar24 == '\0') || (6 < *(int *)((long)register0x00000020 + -0x24) - 1U)) {
            *(undefined8 *)((long)register0x00000020 + -0x38) = 0x432d58f;
            bVar24 = PatreonEffects_NameEffectPresets__IsLegacyEffect((System_String_o *)pPVar27,pMVar34);
            if ((char)bVar24 == '\0') {
              return (PatreonEffects_NameEffectSettings_o *)0x0;
            }
            *piVar33 = 1;
          }
          else {
            *piVar33 = *(int *)((long)register0x00000020 + -0x24);
          }
        }
        else {
          *piVar33 = 5;
        }
        pPVar25 = (PatreonEffects_NameEffectSettings_o *)0x1;
      }
    }
    return pPVar25;
  }
  (pPVar25->fields).effectMode = 6;
  (pPVar25->fields).gradientA.fields.r = 1.0;
  (pPVar25->fields).gradientA.fields.g = 1.0;
  (pPVar25->fields).gradientA.fields.b = 1.0;
  (pPVar25->fields).gradientA.fields.a = 1.0;
  (pPVar25->fields).gradientB.fields.r = 1.0;
  (pPVar25->fields).gradientB.fields.g = 1.0;
  (pPVar25->fields).gradientB.fields.b = 1.0;
  (pPVar25->fields).gradientB.fields.a = 1.0;
  (pPVar25->fields).gradientC.fields.r = 1.0;
  (pPVar25->fields).gradientC.fields.g = 1.0;
  (pPVar25->fields).gradientC.fields.b = 1.0;
  (pPVar25->fields).gradientC.fields.a = 1.0;
  (pPVar25->fields).gradientD.fields.r = 0.92;
  (pPVar25->fields).gradientD.fields.g = 0.02;
  (pPVar25->fields).gradientD.fields.b = 0.29;
  (pPVar25->fields).gradientD.fields.a = 1.0;
  (pPVar25->fields).gradientScale = 1.0;
  (pPVar25->fields).gradientSpeed = 0.0;
  (pPVar25->fields).glow = 0.42;
  (pPVar25->fields).scanlineStrength = 0.0;
  (pPVar25->fields).flickerStrength = 0.0;
  (pPVar25->fields).softness = 0.86;
  return pPVar25;
}


// PatreonEffects.NameEffectPresets$$TryResolve
// il2cpp: bool PatreonEffects_NameEffectPresets__TryResolve (System_String_o* raw, int32_t* type, const MethodInfo* method);
// 0x432d490

bool_conflict
PatreonEffects_NameEffectPresets__TryResolve(System_String_o *raw,int32_t *type,MethodInfo *method)

{
  bool_conflict bVar1;
  bool_conflict bVar2;
  MethodInfo *method_00;
  int32_t local_1c;
  
  if (g_data_057ae050 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryParse_NameEffectType);
    il2cpp_runtime_helper_023445d0(&"Wave");
    il2cpp_runtime_helper_023445d0(&"None");
    g_data_057ae050 = '\x01';
  }
  local_1c = 0;
  *type = 0;
  bVar2 = 0;
  bVar1 = System_String__IsNullOrWhiteSpace(raw,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar2 = 0;
    bVar1 = System_String__op_Equality(raw,"None",(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      bVar1 = System_String__Equals_3af50f0(raw,"Wave",5,(MethodInfo *)0x0);
      if ((char)bVar1 == '\0') {
        if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        method_00 = (MethodInfo *)0x1;
        bVar1 = System_Enum__TryParse_Int32Enum__2501010(raw,1,&local_1c,MethodInfo_Boolean_TryParse_NameEffectType);
        if (((char)bVar1 == '\0') || (6 < local_1c - 1U)) {
          bVar1 = PatreonEffects_NameEffectPresets__IsLegacyEffect(raw,method_00);
          if ((char)bVar1 == '\0') {
            return 0;
          }
          *type = 1;
        }
        else {
          *type = local_1c;
        }
      }
      else {
        *type = 5;
      }
      bVar2 = 1;
    }
  }
  return bVar2;
}


// PatreonEffects.NameEffectPresets$$IsSupportedEffect
// il2cpp: bool PatreonEffects_NameEffectPresets__IsSupportedEffect (int32_t type, const MethodInfo* method);
// 0x432d5b0

bool_conflict PatreonEffects_NameEffectPresets__IsSupportedEffect(int32_t type,MethodInfo *method)

{
  uint3 uVar1;
  
  uVar1 = (uint3)(type - 1U >> 8);
  if (type - 1U < 5) {
    return (bool_conflict)CONCAT71((uint7)uVar1,1);
  }
  return CONCAT31(uVar1,(type | 1U) == 7);
}


// PatreonEffects.NameEffectPresets$$Holographic
// il2cpp: PatreonEffects_NameEffectSettings_o* PatreonEffects_NameEffectPresets__Holographic (const MethodInfo* method);
// 0x432a890

PatreonEffects_NameEffectSettings_o * PatreonEffects_NameEffectPresets__Holographic(MethodInfo *method)

{
  PatreonEffects_NameEffectSettings_o *__this;
  
  if (g_data_057ae051 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameEffectSettings);
    g_data_057ae051 = '\x01';
  }
  __this = (PatreonEffects_NameEffectSettings_o *)il2cpp_runtime_helper_023052d0(TypeInfo_NameEffectSettings);
  (__this->fields).gradientA.fields.r = 0.78;
  (__this->fields).gradientA.fields.g = 1.0;
  (__this->fields).gradientA.fields.b = 0.9;
  (__this->fields).gradientA.fields.a = 1.0;
  (__this->fields).gradientB.fields.r = 0.64;
  (__this->fields).gradientB.fields.g = 0.95;
  (__this->fields).gradientB.fields.b = 1.0;
  (__this->fields).gradientB.fields.a = 1.0;
  (__this->fields).gradientC.fields.r = 0.86;
  (__this->fields).gradientC.fields.g = 0.76;
  (__this->fields).gradientC.fields.b = 1.0;
  (__this->fields).gradientC.fields.a = 1.0;
  (__this->fields).gradientD.fields.r = 1.0;
  (__this->fields).gradientD.fields.g = 0.96;
  (__this->fields).gradientD.fields.b = 0.82;
  (__this->fields).gradientD.fields.a = 1.0;
  (__this->fields).gradientScale = 2.8;
  (__this->fields).gradientSpeed = 0.16;
  (__this->fields).glow = 1.35;
  (__this->fields).scanlineStrength = 0.12;
  (__this->fields).scanlineDensity = 180.0;
  (__this->fields).scanlineSpeed = 0.18;
  (__this->fields).flickerStrength = 0.05;
  (__this->fields).flickerSpeed = 18.0;
  (__this->fields).softness = 1.0;
  (__this->fields).popShadowOffset.fields = (UnityEngine_Vector2_Fields)0xbfc0000000000000;
  (__this->fields).popExtrusionOffset.fields = (UnityEngine_Vector2_Fields)0xc0c0000000000000;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return __this;
}


// PatreonEffects.NameEffectPresets$$Shimmer
// il2cpp: PatreonEffects_NameEffectSettings_o* PatreonEffects_NameEffectPresets__Shimmer (const MethodInfo* method);
// 0x432cee0

PatreonEffects_NameEffectSettings_o * PatreonEffects_NameEffectPresets__Shimmer(MethodInfo *method)

{
  bool_conflict bVar1;
  PatreonEffects_NameEffectSettings_o *pPVar2;
  PatreonEffects_NameEffectSettings_o *pPVar3;
  int *piVar4;
  MethodInfo *method_00;
  int32_t iStack_4c;
  PatreonEffects_NameEffectSettings_o *pPStack_48;
  
  if (g_data_057ae052 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameEffectSettings);
    g_data_057ae052 = '\x01';
  }
  pPVar2 = (PatreonEffects_NameEffectSettings_o *)il2cpp_runtime_helper_023052d0(TypeInfo_NameEffectSettings);
  (pPVar2->fields).gradientA.fields.r = 0.78;
  (pPVar2->fields).gradientA.fields.g = 1.0;
  (pPVar2->fields).gradientA.fields.b = 0.9;
  (pPVar2->fields).gradientA.fields.a = 1.0;
  (pPVar2->fields).gradientB.fields.r = 0.64;
  (pPVar2->fields).gradientB.fields.g = 0.95;
  (pPVar2->fields).gradientB.fields.b = 1.0;
  (pPVar2->fields).gradientB.fields.a = 1.0;
  (pPVar2->fields).gradientC.fields.r = 0.86;
  (pPVar2->fields).gradientC.fields.g = 0.76;
  (pPVar2->fields).gradientC.fields.b = 1.0;
  (pPVar2->fields).gradientC.fields.a = 1.0;
  (pPVar2->fields).gradientD.fields.r = 1.0;
  (pPVar2->fields).gradientD.fields.g = 0.96;
  (pPVar2->fields).gradientD.fields.b = 0.82;
  (pPVar2->fields).gradientD.fields.a = 1.0;
  (pPVar2->fields).gradientScale = 2.8;
  (pPVar2->fields).gradientSpeed = 0.16;
  (pPVar2->fields).glow = 1.35;
  (pPVar2->fields).scanlineStrength = 0.12;
  (pPVar2->fields).scanlineDensity = 180.0;
  (pPVar2->fields).scanlineSpeed = 0.18;
  (pPVar2->fields).flickerStrength = 0.05;
  (pPVar2->fields).flickerSpeed = 18.0;
  (pPVar2->fields).softness = 1.0;
  (pPVar2->fields).popShadowOffset.fields = (UnityEngine_Vector2_Fields)0xbfc0000000000000;
  (pPVar2->fields).popExtrusionOffset.fields = (UnityEngine_Vector2_Fields)0xc0c0000000000000;
  System_Object___ctor((Il2CppObject *)pPVar2,(MethodInfo *)0x0);
  if (pPVar2 != (PatreonEffects_NameEffectSettings_o *)0x0) {
    (pPVar2->fields).effectMode = 2;
    (pPVar2->fields).gradientA.fields.r = 0.95;
    (pPVar2->fields).gradientA.fields.g = 0.58;
    (pPVar2->fields).gradientA.fields.b = 0.12;
    (pPVar2->fields).gradientA.fields.a = 1.0;
    (pPVar2->fields).gradientB.fields.r = 1.0;
    (pPVar2->fields).gradientB.fields.g = 0.86;
    (pPVar2->fields).gradientB.fields.b = 0.32;
    (pPVar2->fields).gradientB.fields.a = 1.0;
    (pPVar2->fields).gradientC.fields.r = 1.0;
    (pPVar2->fields).gradientC.fields.g = 0.95;
    (pPVar2->fields).gradientC.fields.b = 0.58;
    (pPVar2->fields).gradientC.fields.a = 1.0;
    (pPVar2->fields).gradientD.fields.r = 0.95;
    (pPVar2->fields).gradientD.fields.g = 0.58;
    (pPVar2->fields).gradientD.fields.b = 0.12;
    (pPVar2->fields).gradientD.fields.a = 1.0;
    (pPVar2->fields).gradientSpeed = 0.18;
    (pPVar2->fields).glow = 0.88;
    (pPVar2->fields).scanlineStrength = 0.32;
    (pPVar2->fields).scanlineSpeed = 0.18;
    (pPVar2->fields).flickerStrength = 0.0;
    (pPVar2->fields).softness = 0.9;
    return pPVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae053 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameEffectSettings);
    g_data_057ae053 = '\x01';
  }
  pPVar2 = (PatreonEffects_NameEffectSettings_o *)il2cpp_runtime_helper_023052d0(TypeInfo_NameEffectSettings);
  (pPVar2->fields).gradientA.fields.r = 0.78;
  (pPVar2->fields).gradientA.fields.g = 1.0;
  (pPVar2->fields).gradientA.fields.b = 0.9;
  (pPVar2->fields).gradientA.fields.a = 1.0;
  (pPVar2->fields).gradientB.fields.r = 0.64;
  (pPVar2->fields).gradientB.fields.g = 0.95;
  (pPVar2->fields).gradientB.fields.b = 1.0;
  (pPVar2->fields).gradientB.fields.a = 1.0;
  (pPVar2->fields).gradientC.fields.r = 0.86;
  (pPVar2->fields).gradientC.fields.g = 0.76;
  (pPVar2->fields).gradientC.fields.b = 1.0;
  (pPVar2->fields).gradientC.fields.a = 1.0;
  (pPVar2->fields).gradientD.fields.r = 1.0;
  (pPVar2->fields).gradientD.fields.g = 0.96;
  (pPVar2->fields).gradientD.fields.b = 0.82;
  (pPVar2->fields).gradientD.fields.a = 1.0;
  (pPVar2->fields).gradientScale = 2.8;
  (pPVar2->fields).gradientSpeed = 0.16;
  (pPVar2->fields).glow = 1.35;
  (pPVar2->fields).scanlineStrength = 0.12;
  (pPVar2->fields).scanlineDensity = 180.0;
  (pPVar2->fields).scanlineSpeed = 0.18;
  (pPVar2->fields).flickerStrength = 0.05;
  (pPVar2->fields).flickerSpeed = 18.0;
  (pPVar2->fields).softness = 1.0;
  (pPVar2->fields).popShadowOffset.fields = (UnityEngine_Vector2_Fields)0xbfc0000000000000;
  (pPVar2->fields).popExtrusionOffset.fields = (UnityEngine_Vector2_Fields)0xc0c0000000000000;
  System_Object___ctor((Il2CppObject *)pPVar2,(MethodInfo *)0x0);
  if (pPVar2 != (PatreonEffects_NameEffectSettings_o *)0x0) {
    (pPVar2->fields).effectMode = 1;
    (pPVar2->fields).gradientA.fields.r = 1.0;
    (pPVar2->fields).gradientA.fields.g = 1.0;
    (pPVar2->fields).gradientA.fields.b = 1.0;
    (pPVar2->fields).gradientA.fields.a = 1.0;
    (pPVar2->fields).gradientB.fields.r = 0.88;
    (pPVar2->fields).gradientB.fields.g = 0.95;
    (pPVar2->fields).gradientB.fields.b = 1.0;
    (pPVar2->fields).gradientB.fields.a = 1.0;
    (pPVar2->fields).gradientC.fields.r = 0.07;
    (pPVar2->fields).gradientC.fields.g = 0.08;
    (pPVar2->fields).gradientC.fields.b = 0.13;
    (pPVar2->fields).gradientC.fields.a = 1.0;
    (pPVar2->fields).gradientD.fields.r = 0.92;
    (pPVar2->fields).gradientD.fields.g = 0.02;
    (pPVar2->fields).gradientD.fields.b = 0.29;
    (pPVar2->fields).gradientD.fields.a = 1.0;
    (pPVar2->fields).gradientScale = 1.0;
    (pPVar2->fields).gradientSpeed = 0.0;
    (pPVar2->fields).glow = 1.0;
    (pPVar2->fields).scanlineStrength = 0.0;
    (pPVar2->fields).flickerStrength = 0.0;
    (pPVar2->fields).softness = 0.85;
    (pPVar2->fields).popShadowOffset.fields = (UnityEngine_Vector2_Fields)0xbfc0000000000000;
    (pPVar2->fields).popExtrusionOffset.fields = (UnityEngine_Vector2_Fields)0xc0c0000000000000;
    return pPVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae054 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameEffectSettings);
    g_data_057ae054 = '\x01';
  }
  pPVar2 = (PatreonEffects_NameEffectSettings_o *)il2cpp_runtime_helper_023052d0(TypeInfo_NameEffectSettings);
  (pPVar2->fields).gradientA.fields.r = 0.78;
  (pPVar2->fields).gradientA.fields.g = 1.0;
  (pPVar2->fields).gradientA.fields.b = 0.9;
  (pPVar2->fields).gradientA.fields.a = 1.0;
  (pPVar2->fields).gradientB.fields.r = 0.64;
  (pPVar2->fields).gradientB.fields.g = 0.95;
  (pPVar2->fields).gradientB.fields.b = 1.0;
  (pPVar2->fields).gradientB.fields.a = 1.0;
  (pPVar2->fields).gradientC.fields.r = 0.86;
  (pPVar2->fields).gradientC.fields.g = 0.76;
  (pPVar2->fields).gradientC.fields.b = 1.0;
  (pPVar2->fields).gradientC.fields.a = 1.0;
  (pPVar2->fields).gradientD.fields.r = 1.0;
  (pPVar2->fields).gradientD.fields.g = 0.96;
  (pPVar2->fields).gradientD.fields.b = 0.82;
  (pPVar2->fields).gradientD.fields.a = 1.0;
  (pPVar2->fields).gradientScale = 2.8;
  (pPVar2->fields).gradientSpeed = 0.16;
  (pPVar2->fields).glow = 1.35;
  (pPVar2->fields).scanlineStrength = 0.12;
  (pPVar2->fields).scanlineDensity = 180.0;
  (pPVar2->fields).scanlineSpeed = 0.18;
  (pPVar2->fields).flickerStrength = 0.05;
  (pPVar2->fields).flickerSpeed = 18.0;
  (pPVar2->fields).softness = 1.0;
  (pPVar2->fields).popShadowOffset.fields = (UnityEngine_Vector2_Fields)0xbfc0000000000000;
  (pPVar2->fields).popExtrusionOffset.fields = (UnityEngine_Vector2_Fields)0xc0c0000000000000;
  System_Object___ctor((Il2CppObject *)pPVar2,(MethodInfo *)0x0);
  if (pPVar2 != (PatreonEffects_NameEffectSettings_o *)0x0) {
    (pPVar2->fields).effectMode = 3;
    (pPVar2->fields).gradientA.fields.r = 0.72;
    (pPVar2->fields).gradientA.fields.g = 0.08;
    (pPVar2->fields).gradientA.fields.b = 0.02;
    (pPVar2->fields).gradientA.fields.a = 1.0;
    (pPVar2->fields).gradientB.fields.r = 1.0;
    (pPVar2->fields).gradientB.fields.g = 0.36;
    (pPVar2->fields).gradientB.fields.b = 0.04;
    (pPVar2->fields).gradientB.fields.a = 1.0;
    (pPVar2->fields).gradientC.fields.r = 1.0;
    (pPVar2->fields).gradientC.fields.g = 0.86;
    (pPVar2->fields).gradientC.fields.b = 0.18;
    (pPVar2->fields).gradientC.fields.a = 1.0;
    (pPVar2->fields).gradientD.fields.r = 1.0;
    (pPVar2->fields).gradientD.fields.g = 0.45;
    (pPVar2->fields).gradientD.fields.b = 0.08;
    (pPVar2->fields).gradientD.fields.a = 1.0;
    (pPVar2->fields).gradientScale = 1.15;
    (pPVar2->fields).gradientSpeed = 0.42;
    (pPVar2->fields).glow = 0.38;
    (pPVar2->fields).scanlineStrength = 0.48;
    (pPVar2->fields).scanlineDensity = 11.0;
    (pPVar2->fields).scanlineSpeed = 0.46;
    (pPVar2->fields).flickerStrength = 0.12;
    (pPVar2->fields).flickerSpeed = 9.0;
    (pPVar2->fields).softness = 0.92;
    return pPVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae055 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameEffectSettings);
    g_data_057ae055 = '\x01';
  }
  pPVar2 = (PatreonEffects_NameEffectSettings_o *)il2cpp_runtime_helper_023052d0(TypeInfo_NameEffectSettings);
  (pPVar2->fields).gradientA.fields.r = 0.78;
  (pPVar2->fields).gradientA.fields.g = 1.0;
  (pPVar2->fields).gradientA.fields.b = 0.9;
  (pPVar2->fields).gradientA.fields.a = 1.0;
  (pPVar2->fields).gradientB.fields.r = 0.64;
  (pPVar2->fields).gradientB.fields.g = 0.95;
  (pPVar2->fields).gradientB.fields.b = 1.0;
  (pPVar2->fields).gradientB.fields.a = 1.0;
  (pPVar2->fields).gradientC.fields.r = 0.86;
  (pPVar2->fields).gradientC.fields.g = 0.76;
  (pPVar2->fields).gradientC.fields.b = 1.0;
  (pPVar2->fields).gradientC.fields.a = 1.0;
  (pPVar2->fields).gradientD.fields.r = 1.0;
  (pPVar2->fields).gradientD.fields.g = 0.96;
  (pPVar2->fields).gradientD.fields.b = 0.82;
  (pPVar2->fields).gradientD.fields.a = 1.0;
  (pPVar2->fields).gradientScale = 2.8;
  (pPVar2->fields).gradientSpeed = 0.16;
  (pPVar2->fields).glow = 1.35;
  (pPVar2->fields).scanlineStrength = 0.12;
  (pPVar2->fields).scanlineDensity = 180.0;
  (pPVar2->fields).scanlineSpeed = 0.18;
  (pPVar2->fields).flickerStrength = 0.05;
  (pPVar2->fields).flickerSpeed = 18.0;
  (pPVar2->fields).softness = 1.0;
  (pPVar2->fields).popShadowOffset.fields = (UnityEngine_Vector2_Fields)0xbfc0000000000000;
  (pPVar2->fields).popExtrusionOffset.fields = (UnityEngine_Vector2_Fields)0xc0c0000000000000;
  System_Object___ctor((Il2CppObject *)pPVar2,(MethodInfo *)0x0);
  if (pPVar2 != (PatreonEffects_NameEffectSettings_o *)0x0) {
    (pPVar2->fields).effectMode = 4;
    (pPVar2->fields).gradientA.fields.r = 0.05;
    (pPVar2->fields).gradientA.fields.g = 0.34;
    (pPVar2->fields).gradientA.fields.b = 0.76;
    (pPVar2->fields).gradientA.fields.a = 1.0;
    (pPVar2->fields).gradientB.fields.r = 0.08;
    (pPVar2->fields).gradientB.fields.g = 0.74;
    (pPVar2->fields).gradientB.fields.b = 0.92;
    (pPVar2->fields).gradientB.fields.a = 1.0;
    (pPVar2->fields).gradientC.fields.r = 0.72;
    (pPVar2->fields).gradientC.fields.g = 0.96;
    (pPVar2->fields).gradientC.fields.b = 1.0;
    (pPVar2->fields).gradientC.fields.a = 1.0;
    (pPVar2->fields).gradientD.fields.r = 0.18;
    (pPVar2->fields).gradientD.fields.g = 0.86;
    (pPVar2->fields).gradientD.fields.b = 1.0;
    (pPVar2->fields).gradientD.fields.a = 1.0;
    (pPVar2->fields).gradientScale = 0.8;
    (pPVar2->fields).gradientSpeed = 0.18;
    (pPVar2->fields).glow = 0.42;
    (pPVar2->fields).scanlineStrength = 0.24;
    (pPVar2->fields).scanlineDensity = 8.0;
    (pPVar2->fields).scanlineSpeed = 0.2;
    (pPVar2->fields).flickerStrength = 0.0;
    (pPVar2->fields).softness = 0.95;
    return pPVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae056 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameEffectSettings);
    g_data_057ae056 = '\x01';
  }
  pPVar2 = (PatreonEffects_NameEffectSettings_o *)il2cpp_runtime_helper_023052d0(TypeInfo_NameEffectSettings);
  (pPVar2->fields).gradientA.fields.r = 0.78;
  (pPVar2->fields).gradientA.fields.g = 1.0;
  (pPVar2->fields).gradientA.fields.b = 0.9;
  (pPVar2->fields).gradientA.fields.a = 1.0;
  (pPVar2->fields).gradientB.fields.r = 0.64;
  (pPVar2->fields).gradientB.fields.g = 0.95;
  (pPVar2->fields).gradientB.fields.b = 1.0;
  (pPVar2->fields).gradientB.fields.a = 1.0;
  (pPVar2->fields).gradientC.fields.r = 0.86;
  (pPVar2->fields).gradientC.fields.g = 0.76;
  (pPVar2->fields).gradientC.fields.b = 1.0;
  (pPVar2->fields).gradientC.fields.a = 1.0;
  (pPVar2->fields).gradientD.fields.r = 1.0;
  (pPVar2->fields).gradientD.fields.g = 0.96;
  (pPVar2->fields).gradientD.fields.b = 0.82;
  (pPVar2->fields).gradientD.fields.a = 1.0;
  (pPVar2->fields).gradientScale = 2.8;
  (pPVar2->fields).gradientSpeed = 0.16;
  (pPVar2->fields).glow = 1.35;
  (pPVar2->fields).scanlineStrength = 0.12;
  (pPVar2->fields).scanlineDensity = 180.0;
  (pPVar2->fields).scanlineSpeed = 0.18;
  (pPVar2->fields).flickerStrength = 0.05;
  (pPVar2->fields).flickerSpeed = 18.0;
  (pPVar2->fields).softness = 1.0;
  (pPVar2->fields).popShadowOffset.fields = (UnityEngine_Vector2_Fields)0xbfc0000000000000;
  (pPVar2->fields).popExtrusionOffset.fields = (UnityEngine_Vector2_Fields)0xc0c0000000000000;
  System_Object___ctor((Il2CppObject *)pPVar2,(MethodInfo *)0x0);
  if (pPVar2 == (PatreonEffects_NameEffectSettings_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae057 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_NameEffectSettings);
      g_data_057ae057 = '\x01';
    }
    pPVar3 = (PatreonEffects_NameEffectSettings_o *)il2cpp_runtime_helper_023052d0(TypeInfo_NameEffectSettings);
    (pPVar3->fields).gradientA.fields.r = 0.78;
    (pPVar3->fields).gradientA.fields.g = 1.0;
    (pPVar3->fields).gradientA.fields.b = 0.9;
    (pPVar3->fields).gradientA.fields.a = 1.0;
    (pPVar3->fields).gradientB.fields.r = 0.64;
    (pPVar3->fields).gradientB.fields.g = 0.95;
    (pPVar3->fields).gradientB.fields.b = 1.0;
    (pPVar3->fields).gradientB.fields.a = 1.0;
    (pPVar3->fields).gradientC.fields.r = 0.86;
    (pPVar3->fields).gradientC.fields.g = 0.76;
    (pPVar3->fields).gradientC.fields.b = 1.0;
    (pPVar3->fields).gradientC.fields.a = 1.0;
    (pPVar3->fields).gradientD.fields.r = 1.0;
    (pPVar3->fields).gradientD.fields.g = 0.96;
    (pPVar3->fields).gradientD.fields.b = 0.82;
    (pPVar3->fields).gradientD.fields.a = 1.0;
    (pPVar3->fields).gradientScale = 2.8;
    (pPVar3->fields).gradientSpeed = 0.16;
    (pPVar3->fields).glow = 1.35;
    (pPVar3->fields).scanlineStrength = 0.12;
    (pPVar3->fields).scanlineDensity = 180.0;
    (pPVar3->fields).scanlineSpeed = 0.18;
    (pPVar3->fields).flickerStrength = 0.05;
    (pPVar3->fields).flickerSpeed = 18.0;
    (pPVar3->fields).softness = 1.0;
    (pPVar3->fields).popShadowOffset.fields = (UnityEngine_Vector2_Fields)0xbfc0000000000000;
    (pPVar3->fields).popExtrusionOffset.fields = (UnityEngine_Vector2_Fields)0xc0c0000000000000;
    piVar4 = (int *)0x0;
    pPVar2 = pPVar3;
    System_Object___ctor((Il2CppObject *)pPVar3,(MethodInfo *)0x0);
    if (pPVar3 == (PatreonEffects_NameEffectSettings_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      pPStack_48 = pPVar3;
      if (g_data_057ae050 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryParse_NameEffectType);
        il2cpp_runtime_helper_023445d0(&"Wave");
        il2cpp_runtime_helper_023445d0(&"None");
        g_data_057ae050 = '\x01';
      }
      iStack_4c = 0;
      *piVar4 = 0;
      pPVar3 = (PatreonEffects_NameEffectSettings_o *)0x0;
      bVar1 = System_String__IsNullOrWhiteSpace((System_String_o *)pPVar2,(MethodInfo *)0x0);
      if ((char)bVar1 == '\0') {
        pPVar3 = (PatreonEffects_NameEffectSettings_o *)0x0;
        bVar1 = System_String__op_Equality((System_String_o *)pPVar2,"None",(MethodInfo *)0x0);
        if ((char)bVar1 == '\0') {
          bVar1 = System_String__Equals_3af50f0((System_String_o *)pPVar2,"Wave",5,(MethodInfo *)0x0);
          if ((char)bVar1 == '\0') {
            if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            method_00 = (MethodInfo *)0x1;
            bVar1 = System_Enum__TryParse_Int32Enum__2501010
                              ((System_String_o *)pPVar2,1,&iStack_4c,MethodInfo_Boolean_TryParse_NameEffectType);
            if (((char)bVar1 == '\0') || (6 < iStack_4c - 1U)) {
              bVar1 = PatreonEffects_NameEffectPresets__IsLegacyEffect((System_String_o *)pPVar2,method_00);
              if ((char)bVar1 == '\0') {
                return (PatreonEffects_NameEffectSettings_o *)0x0;
              }
              *piVar4 = 1;
            }
            else {
              *piVar4 = iStack_4c;
            }
          }
          else {
            *piVar4 = 5;
          }
          pPVar3 = (PatreonEffects_NameEffectSettings_o *)0x1;
        }
      }
      return pPVar3;
    }
    (pPVar3->fields).effectMode = 6;
    (pPVar3->fields).gradientA.fields.r = 1.0;
    (pPVar3->fields).gradientA.fields.g = 1.0;
    (pPVar3->fields).gradientA.fields.b = 1.0;
    (pPVar3->fields).gradientA.fields.a = 1.0;
    (pPVar3->fields).gradientB.fields.r = 1.0;
    (pPVar3->fields).gradientB.fields.g = 1.0;
    (pPVar3->fields).gradientB.fields.b = 1.0;
    (pPVar3->fields).gradientB.fields.a = 1.0;
    (pPVar3->fields).gradientC.fields.r = 1.0;
    (pPVar3->fields).gradientC.fields.g = 1.0;
    (pPVar3->fields).gradientC.fields.b = 1.0;
    (pPVar3->fields).gradientC.fields.a = 1.0;
    (pPVar3->fields).gradientD.fields.r = 0.92;
    (pPVar3->fields).gradientD.fields.g = 0.02;
    (pPVar3->fields).gradientD.fields.b = 0.29;
    (pPVar3->fields).gradientD.fields.a = 1.0;
    (pPVar3->fields).gradientScale = 1.0;
    (pPVar3->fields).gradientSpeed = 0.0;
    (pPVar3->fields).glow = 0.42;
    (pPVar3->fields).scanlineStrength = 0.0;
    (pPVar3->fields).flickerStrength = 0.0;
    (pPVar3->fields).softness = 0.86;
    return pPVar3;
  }
  (pPVar2->fields).effectMode = 5;
  (pPVar2->fields).gradientA.fields.r = 0.08;
  (pPVar2->fields).gradientA.fields.g = 0.28;
  (pPVar2->fields).gradientA.fields.b = 1.0;
  (pPVar2->fields).gradientA.fields.a = 1.0;
  (pPVar2->fields).gradientB.fields.r = 0.08;
  (pPVar2->fields).gradientB.fields.g = 0.94;
  (pPVar2->fields).gradientB.fields.b = 1.0;
  (pPVar2->fields).gradientB.fields.a = 1.0;
  (pPVar2->fields).gradientC.fields.r = 0.86;
  (pPVar2->fields).gradientC.fields.g = 1.0;
  (pPVar2->fields).gradientC.fields.b = 1.0;
  (pPVar2->fields).gradientC.fields.a = 1.0;
  (pPVar2->fields).gradientD.fields.r = 0.24;
  (pPVar2->fields).gradientD.fields.g = 0.72;
  (pPVar2->fields).gradientD.fields.b = 1.0;
  (pPVar2->fields).gradientD.fields.a = 1.0;
  (pPVar2->fields).gradientScale = 1.35;
  (pPVar2->fields).gradientSpeed = 0.76;
  (pPVar2->fields).glow = 0.68;
  (pPVar2->fields).scanlineStrength = 0.36;
  (pPVar2->fields).scanlineDensity = 18.0;
  (pPVar2->fields).scanlineSpeed = 0.82;
  (pPVar2->fields).flickerStrength = 0.18;
  (pPVar2->fields).flickerSpeed = 16.0;
  (pPVar2->fields).softness = 0.82;
  return pPVar2;
}


// PatreonEffects.NameEffectPresets$$Pop
// il2cpp: PatreonEffects_NameEffectSettings_o* PatreonEffects_NameEffectPresets__Pop (const MethodInfo* method);
// 0x432cfd0

PatreonEffects_NameEffectSettings_o * PatreonEffects_NameEffectPresets__Pop(MethodInfo *method)

{
  bool_conflict bVar1;
  PatreonEffects_NameEffectSettings_o *pPVar2;
  PatreonEffects_NameEffectSettings_o *pPVar3;
  int *piVar4;
  MethodInfo *method_00;
  int32_t iStack_44;
  PatreonEffects_NameEffectSettings_o *pPStack_40;
  
  if (g_data_057ae053 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameEffectSettings);
    g_data_057ae053 = '\x01';
  }
  pPVar2 = (PatreonEffects_NameEffectSettings_o *)il2cpp_runtime_helper_023052d0(TypeInfo_NameEffectSettings);
  (pPVar2->fields).gradientA.fields.r = 0.78;
  (pPVar2->fields).gradientA.fields.g = 1.0;
  (pPVar2->fields).gradientA.fields.b = 0.9;
  (pPVar2->fields).gradientA.fields.a = 1.0;
  (pPVar2->fields).gradientB.fields.r = 0.64;
  (pPVar2->fields).gradientB.fields.g = 0.95;
  (pPVar2->fields).gradientB.fields.b = 1.0;
  (pPVar2->fields).gradientB.fields.a = 1.0;
  (pPVar2->fields).gradientC.fields.r = 0.86;
  (pPVar2->fields).gradientC.fields.g = 0.76;
  (pPVar2->fields).gradientC.fields.b = 1.0;
  (pPVar2->fields).gradientC.fields.a = 1.0;
  (pPVar2->fields).gradientD.fields.r = 1.0;
  (pPVar2->fields).gradientD.fields.g = 0.96;
  (pPVar2->fields).gradientD.fields.b = 0.82;
  (pPVar2->fields).gradientD.fields.a = 1.0;
  (pPVar2->fields).gradientScale = 2.8;
  (pPVar2->fields).gradientSpeed = 0.16;
  (pPVar2->fields).glow = 1.35;
  (pPVar2->fields).scanlineStrength = 0.12;
  (pPVar2->fields).scanlineDensity = 180.0;
  (pPVar2->fields).scanlineSpeed = 0.18;
  (pPVar2->fields).flickerStrength = 0.05;
  (pPVar2->fields).flickerSpeed = 18.0;
  (pPVar2->fields).softness = 1.0;
  (pPVar2->fields).popShadowOffset.fields = (UnityEngine_Vector2_Fields)0xbfc0000000000000;
  (pPVar2->fields).popExtrusionOffset.fields = (UnityEngine_Vector2_Fields)0xc0c0000000000000;
  System_Object___ctor((Il2CppObject *)pPVar2,(MethodInfo *)0x0);
  if (pPVar2 != (PatreonEffects_NameEffectSettings_o *)0x0) {
    (pPVar2->fields).effectMode = 1;
    (pPVar2->fields).gradientA.fields.r = 1.0;
    (pPVar2->fields).gradientA.fields.g = 1.0;
    (pPVar2->fields).gradientA.fields.b = 1.0;
    (pPVar2->fields).gradientA.fields.a = 1.0;
    (pPVar2->fields).gradientB.fields.r = 0.88;
    (pPVar2->fields).gradientB.fields.g = 0.95;
    (pPVar2->fields).gradientB.fields.b = 1.0;
    (pPVar2->fields).gradientB.fields.a = 1.0;
    (pPVar2->fields).gradientC.fields.r = 0.07;
    (pPVar2->fields).gradientC.fields.g = 0.08;
    (pPVar2->fields).gradientC.fields.b = 0.13;
    (pPVar2->fields).gradientC.fields.a = 1.0;
    (pPVar2->fields).gradientD.fields.r = 0.92;
    (pPVar2->fields).gradientD.fields.g = 0.02;
    (pPVar2->fields).gradientD.fields.b = 0.29;
    (pPVar2->fields).gradientD.fields.a = 1.0;
    (pPVar2->fields).gradientScale = 1.0;
    (pPVar2->fields).gradientSpeed = 0.0;
    (pPVar2->fields).glow = 1.0;
    (pPVar2->fields).scanlineStrength = 0.0;
    (pPVar2->fields).flickerStrength = 0.0;
    (pPVar2->fields).softness = 0.85;
    (pPVar2->fields).popShadowOffset.fields = (UnityEngine_Vector2_Fields)0xbfc0000000000000;
    (pPVar2->fields).popExtrusionOffset.fields = (UnityEngine_Vector2_Fields)0xc0c0000000000000;
    return pPVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae054 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameEffectSettings);
    g_data_057ae054 = '\x01';
  }
  pPVar2 = (PatreonEffects_NameEffectSettings_o *)il2cpp_runtime_helper_023052d0(TypeInfo_NameEffectSettings);
  (pPVar2->fields).gradientA.fields.r = 0.78;
  (pPVar2->fields).gradientA.fields.g = 1.0;
  (pPVar2->fields).gradientA.fields.b = 0.9;
  (pPVar2->fields).gradientA.fields.a = 1.0;
  (pPVar2->fields).gradientB.fields.r = 0.64;
  (pPVar2->fields).gradientB.fields.g = 0.95;
  (pPVar2->fields).gradientB.fields.b = 1.0;
  (pPVar2->fields).gradientB.fields.a = 1.0;
  (pPVar2->fields).gradientC.fields.r = 0.86;
  (pPVar2->fields).gradientC.fields.g = 0.76;
  (pPVar2->fields).gradientC.fields.b = 1.0;
  (pPVar2->fields).gradientC.fields.a = 1.0;
  (pPVar2->fields).gradientD.fields.r = 1.0;
  (pPVar2->fields).gradientD.fields.g = 0.96;
  (pPVar2->fields).gradientD.fields.b = 0.82;
  (pPVar2->fields).gradientD.fields.a = 1.0;
  (pPVar2->fields).gradientScale = 2.8;
  (pPVar2->fields).gradientSpeed = 0.16;
  (pPVar2->fields).glow = 1.35;
  (pPVar2->fields).scanlineStrength = 0.12;
  (pPVar2->fields).scanlineDensity = 180.0;
  (pPVar2->fields).scanlineSpeed = 0.18;
  (pPVar2->fields).flickerStrength = 0.05;
  (pPVar2->fields).flickerSpeed = 18.0;
  (pPVar2->fields).softness = 1.0;
  (pPVar2->fields).popShadowOffset.fields = (UnityEngine_Vector2_Fields)0xbfc0000000000000;
  (pPVar2->fields).popExtrusionOffset.fields = (UnityEngine_Vector2_Fields)0xc0c0000000000000;
  System_Object___ctor((Il2CppObject *)pPVar2,(MethodInfo *)0x0);
  if (pPVar2 != (PatreonEffects_NameEffectSettings_o *)0x0) {
    (pPVar2->fields).effectMode = 3;
    (pPVar2->fields).gradientA.fields.r = 0.72;
    (pPVar2->fields).gradientA.fields.g = 0.08;
    (pPVar2->fields).gradientA.fields.b = 0.02;
    (pPVar2->fields).gradientA.fields.a = 1.0;
    (pPVar2->fields).gradientB.fields.r = 1.0;
    (pPVar2->fields).gradientB.fields.g = 0.36;
    (pPVar2->fields).gradientB.fields.b = 0.04;
    (pPVar2->fields).gradientB.fields.a = 1.0;
    (pPVar2->fields).gradientC.fields.r = 1.0;
    (pPVar2->fields).gradientC.fields.g = 0.86;
    (pPVar2->fields).gradientC.fields.b = 0.18;
    (pPVar2->fields).gradientC.fields.a = 1.0;
    (pPVar2->fields).gradientD.fields.r = 1.0;
    (pPVar2->fields).gradientD.fields.g = 0.45;
    (pPVar2->fields).gradientD.fields.b = 0.08;
    (pPVar2->fields).gradientD.fields.a = 1.0;
    (pPVar2->fields).gradientScale = 1.15;
    (pPVar2->fields).gradientSpeed = 0.42;
    (pPVar2->fields).glow = 0.38;
    (pPVar2->fields).scanlineStrength = 0.48;
    (pPVar2->fields).scanlineDensity = 11.0;
    (pPVar2->fields).scanlineSpeed = 0.46;
    (pPVar2->fields).flickerStrength = 0.12;
    (pPVar2->fields).flickerSpeed = 9.0;
    (pPVar2->fields).softness = 0.92;
    return pPVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae055 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameEffectSettings);
    g_data_057ae055 = '\x01';
  }
  pPVar2 = (PatreonEffects_NameEffectSettings_o *)il2cpp_runtime_helper_023052d0(TypeInfo_NameEffectSettings);
  (pPVar2->fields).gradientA.fields.r = 0.78;
  (pPVar2->fields).gradientA.fields.g = 1.0;
  (pPVar2->fields).gradientA.fields.b = 0.9;
  (pPVar2->fields).gradientA.fields.a = 1.0;
  (pPVar2->fields).gradientB.fields.r = 0.64;
  (pPVar2->fields).gradientB.fields.g = 0.95;
  (pPVar2->fields).gradientB.fields.b = 1.0;
  (pPVar2->fields).gradientB.fields.a = 1.0;
  (pPVar2->fields).gradientC.fields.r = 0.86;
  (pPVar2->fields).gradientC.fields.g = 0.76;
  (pPVar2->fields).gradientC.fields.b = 1.0;
  (pPVar2->fields).gradientC.fields.a = 1.0;
  (pPVar2->fields).gradientD.fields.r = 1.0;
  (pPVar2->fields).gradientD.fields.g = 0.96;
  (pPVar2->fields).gradientD.fields.b = 0.82;
  (pPVar2->fields).gradientD.fields.a = 1.0;
  (pPVar2->fields).gradientScale = 2.8;
  (pPVar2->fields).gradientSpeed = 0.16;
  (pPVar2->fields).glow = 1.35;
  (pPVar2->fields).scanlineStrength = 0.12;
  (pPVar2->fields).scanlineDensity = 180.0;
  (pPVar2->fields).scanlineSpeed = 0.18;
  (pPVar2->fields).flickerStrength = 0.05;
  (pPVar2->fields).flickerSpeed = 18.0;
  (pPVar2->fields).softness = 1.0;
  (pPVar2->fields).popShadowOffset.fields = (UnityEngine_Vector2_Fields)0xbfc0000000000000;
  (pPVar2->fields).popExtrusionOffset.fields = (UnityEngine_Vector2_Fields)0xc0c0000000000000;
  System_Object___ctor((Il2CppObject *)pPVar2,(MethodInfo *)0x0);
  if (pPVar2 != (PatreonEffects_NameEffectSettings_o *)0x0) {
    (pPVar2->fields).effectMode = 4;
    (pPVar2->fields).gradientA.fields.r = 0.05;
    (pPVar2->fields).gradientA.fields.g = 0.34;
    (pPVar2->fields).gradientA.fields.b = 0.76;
    (pPVar2->fields).gradientA.fields.a = 1.0;
    (pPVar2->fields).gradientB.fields.r = 0.08;
    (pPVar2->fields).gradientB.fields.g = 0.74;
    (pPVar2->fields).gradientB.fields.b = 0.92;
    (pPVar2->fields).gradientB.fields.a = 1.0;
    (pPVar2->fields).gradientC.fields.r = 0.72;
    (pPVar2->fields).gradientC.fields.g = 0.96;
    (pPVar2->fields).gradientC.fields.b = 1.0;
    (pPVar2->fields).gradientC.fields.a = 1.0;
    (pPVar2->fields).gradientD.fields.r = 0.18;
    (pPVar2->fields).gradientD.fields.g = 0.86;
    (pPVar2->fields).gradientD.fields.b = 1.0;
    (pPVar2->fields).gradientD.fields.a = 1.0;
    (pPVar2->fields).gradientScale = 0.8;
    (pPVar2->fields).gradientSpeed = 0.18;
    (pPVar2->fields).glow = 0.42;
    (pPVar2->fields).scanlineStrength = 0.24;
    (pPVar2->fields).scanlineDensity = 8.0;
    (pPVar2->fields).scanlineSpeed = 0.2;
    (pPVar2->fields).flickerStrength = 0.0;
    (pPVar2->fields).softness = 0.95;
    return pPVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae056 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameEffectSettings);
    g_data_057ae056 = '\x01';
  }
  pPVar2 = (PatreonEffects_NameEffectSettings_o *)il2cpp_runtime_helper_023052d0(TypeInfo_NameEffectSettings);
  (pPVar2->fields).gradientA.fields.r = 0.78;
  (pPVar2->fields).gradientA.fields.g = 1.0;
  (pPVar2->fields).gradientA.fields.b = 0.9;
  (pPVar2->fields).gradientA.fields.a = 1.0;
  (pPVar2->fields).gradientB.fields.r = 0.64;
  (pPVar2->fields).gradientB.fields.g = 0.95;
  (pPVar2->fields).gradientB.fields.b = 1.0;
  (pPVar2->fields).gradientB.fields.a = 1.0;
  (pPVar2->fields).gradientC.fields.r = 0.86;
  (pPVar2->fields).gradientC.fields.g = 0.76;
  (pPVar2->fields).gradientC.fields.b = 1.0;
  (pPVar2->fields).gradientC.fields.a = 1.0;
  (pPVar2->fields).gradientD.fields.r = 1.0;
  (pPVar2->fields).gradientD.fields.g = 0.96;
  (pPVar2->fields).gradientD.fields.b = 0.82;
  (pPVar2->fields).gradientD.fields.a = 1.0;
  (pPVar2->fields).gradientScale = 2.8;
  (pPVar2->fields).gradientSpeed = 0.16;
  (pPVar2->fields).glow = 1.35;
  (pPVar2->fields).scanlineStrength = 0.12;
  (pPVar2->fields).scanlineDensity = 180.0;
  (pPVar2->fields).scanlineSpeed = 0.18;
  (pPVar2->fields).flickerStrength = 0.05;
  (pPVar2->fields).flickerSpeed = 18.0;
  (pPVar2->fields).softness = 1.0;
  (pPVar2->fields).popShadowOffset.fields = (UnityEngine_Vector2_Fields)0xbfc0000000000000;
  (pPVar2->fields).popExtrusionOffset.fields = (UnityEngine_Vector2_Fields)0xc0c0000000000000;
  System_Object___ctor((Il2CppObject *)pPVar2,(MethodInfo *)0x0);
  if (pPVar2 != (PatreonEffects_NameEffectSettings_o *)0x0) {
    (pPVar2->fields).effectMode = 5;
    (pPVar2->fields).gradientA.fields.r = 0.08;
    (pPVar2->fields).gradientA.fields.g = 0.28;
    (pPVar2->fields).gradientA.fields.b = 1.0;
    (pPVar2->fields).gradientA.fields.a = 1.0;
    (pPVar2->fields).gradientB.fields.r = 0.08;
    (pPVar2->fields).gradientB.fields.g = 0.94;
    (pPVar2->fields).gradientB.fields.b = 1.0;
    (pPVar2->fields).gradientB.fields.a = 1.0;
    (pPVar2->fields).gradientC.fields.r = 0.86;
    (pPVar2->fields).gradientC.fields.g = 1.0;
    (pPVar2->fields).gradientC.fields.b = 1.0;
    (pPVar2->fields).gradientC.fields.a = 1.0;
    (pPVar2->fields).gradientD.fields.r = 0.24;
    (pPVar2->fields).gradientD.fields.g = 0.72;
    (pPVar2->fields).gradientD.fields.b = 1.0;
    (pPVar2->fields).gradientD.fields.a = 1.0;
    (pPVar2->fields).gradientScale = 1.35;
    (pPVar2->fields).gradientSpeed = 0.76;
    (pPVar2->fields).glow = 0.68;
    (pPVar2->fields).scanlineStrength = 0.36;
    (pPVar2->fields).scanlineDensity = 18.0;
    (pPVar2->fields).scanlineSpeed = 0.82;
    (pPVar2->fields).flickerStrength = 0.18;
    (pPVar2->fields).flickerSpeed = 16.0;
    (pPVar2->fields).softness = 0.82;
    return pPVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae057 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameEffectSettings);
    g_data_057ae057 = '\x01';
  }
  pPVar3 = (PatreonEffects_NameEffectSettings_o *)il2cpp_runtime_helper_023052d0(TypeInfo_NameEffectSettings);
  (pPVar3->fields).gradientA.fields.r = 0.78;
  (pPVar3->fields).gradientA.fields.g = 1.0;
  (pPVar3->fields).gradientA.fields.b = 0.9;
  (pPVar3->fields).gradientA.fields.a = 1.0;
  (pPVar3->fields).gradientB.fields.r = 0.64;
  (pPVar3->fields).gradientB.fields.g = 0.95;
  (pPVar3->fields).gradientB.fields.b = 1.0;
  (pPVar3->fields).gradientB.fields.a = 1.0;
  (pPVar3->fields).gradientC.fields.r = 0.86;
  (pPVar3->fields).gradientC.fields.g = 0.76;
  (pPVar3->fields).gradientC.fields.b = 1.0;
  (pPVar3->fields).gradientC.fields.a = 1.0;
  (pPVar3->fields).gradientD.fields.r = 1.0;
  (pPVar3->fields).gradientD.fields.g = 0.96;
  (pPVar3->fields).gradientD.fields.b = 0.82;
  (pPVar3->fields).gradientD.fields.a = 1.0;
  (pPVar3->fields).gradientScale = 2.8;
  (pPVar3->fields).gradientSpeed = 0.16;
  (pPVar3->fields).glow = 1.35;
  (pPVar3->fields).scanlineStrength = 0.12;
  (pPVar3->fields).scanlineDensity = 180.0;
  (pPVar3->fields).scanlineSpeed = 0.18;
  (pPVar3->fields).flickerStrength = 0.05;
  (pPVar3->fields).flickerSpeed = 18.0;
  (pPVar3->fields).softness = 1.0;
  (pPVar3->fields).popShadowOffset.fields = (UnityEngine_Vector2_Fields)0xbfc0000000000000;
  (pPVar3->fields).popExtrusionOffset.fields = (UnityEngine_Vector2_Fields)0xc0c0000000000000;
  piVar4 = (int *)0x0;
  pPVar2 = pPVar3;
  System_Object___ctor((Il2CppObject *)pPVar3,(MethodInfo *)0x0);
  if (pPVar3 == (PatreonEffects_NameEffectSettings_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    pPStack_40 = pPVar3;
    if (g_data_057ae050 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryParse_NameEffectType);
      il2cpp_runtime_helper_023445d0(&"Wave");
      il2cpp_runtime_helper_023445d0(&"None");
      g_data_057ae050 = '\x01';
    }
    iStack_44 = 0;
    *piVar4 = 0;
    pPVar3 = (PatreonEffects_NameEffectSettings_o *)0x0;
    bVar1 = System_String__IsNullOrWhiteSpace((System_String_o *)pPVar2,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      pPVar3 = (PatreonEffects_NameEffectSettings_o *)0x0;
      bVar1 = System_String__op_Equality((System_String_o *)pPVar2,"None",(MethodInfo *)0x0);
      if ((char)bVar1 == '\0') {
        bVar1 = System_String__Equals_3af50f0((System_String_o *)pPVar2,"Wave",5,(MethodInfo *)0x0);
        if ((char)bVar1 == '\0') {
          if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          method_00 = (MethodInfo *)0x1;
          bVar1 = System_Enum__TryParse_Int32Enum__2501010
                            ((System_String_o *)pPVar2,1,&iStack_44,MethodInfo_Boolean_TryParse_NameEffectType);
          if (((char)bVar1 == '\0') || (6 < iStack_44 - 1U)) {
            bVar1 = PatreonEffects_NameEffectPresets__IsLegacyEffect((System_String_o *)pPVar2,method_00);
            if ((char)bVar1 == '\0') {
              return (PatreonEffects_NameEffectSettings_o *)0x0;
            }
            *piVar4 = 1;
          }
          else {
            *piVar4 = iStack_44;
          }
        }
        else {
          *piVar4 = 5;
        }
        pPVar3 = (PatreonEffects_NameEffectSettings_o *)0x1;
      }
    }
    return pPVar3;
  }
  (pPVar3->fields).effectMode = 6;
  (pPVar3->fields).gradientA.fields.r = 1.0;
  (pPVar3->fields).gradientA.fields.g = 1.0;
  (pPVar3->fields).gradientA.fields.b = 1.0;
  (pPVar3->fields).gradientA.fields.a = 1.0;
  (pPVar3->fields).gradientB.fields.r = 1.0;
  (pPVar3->fields).gradientB.fields.g = 1.0;
  (pPVar3->fields).gradientB.fields.b = 1.0;
  (pPVar3->fields).gradientB.fields.a = 1.0;
  (pPVar3->fields).gradientC.fields.r = 1.0;
  (pPVar3->fields).gradientC.fields.g = 1.0;
  (pPVar3->fields).gradientC.fields.b = 1.0;
  (pPVar3->fields).gradientC.fields.a = 1.0;
  (pPVar3->fields).gradientD.fields.r = 0.92;
  (pPVar3->fields).gradientD.fields.g = 0.02;
  (pPVar3->fields).gradientD.fields.b = 0.29;
  (pPVar3->fields).gradientD.fields.a = 1.0;
  (pPVar3->fields).gradientScale = 1.0;
  (pPVar3->fields).gradientSpeed = 0.0;
  (pPVar3->fields).glow = 0.42;
  (pPVar3->fields).scanlineStrength = 0.0;
  (pPVar3->fields).flickerStrength = 0.0;
  (pPVar3->fields).softness = 0.86;
  return pPVar3;
}


// PatreonEffects.NameEffectPresets$$Ember
// il2cpp: PatreonEffects_NameEffectSettings_o* PatreonEffects_NameEffectPresets__Ember (const MethodInfo* method);
// 0x432d0d0

PatreonEffects_NameEffectSettings_o * PatreonEffects_NameEffectPresets__Ember(MethodInfo *method)

{
  bool_conflict bVar1;
  PatreonEffects_NameEffectSettings_o *pPVar2;
  PatreonEffects_NameEffectSettings_o *pPVar3;
  int *piVar4;
  MethodInfo *method_00;
  int32_t iStack_3c;
  PatreonEffects_NameEffectSettings_o *pPStack_38;
  
  if (g_data_057ae054 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameEffectSettings);
    g_data_057ae054 = '\x01';
  }
  pPVar2 = (PatreonEffects_NameEffectSettings_o *)il2cpp_runtime_helper_023052d0(TypeInfo_NameEffectSettings);
  (pPVar2->fields).gradientA.fields.r = 0.78;
  (pPVar2->fields).gradientA.fields.g = 1.0;
  (pPVar2->fields).gradientA.fields.b = 0.9;
  (pPVar2->fields).gradientA.fields.a = 1.0;
  (pPVar2->fields).gradientB.fields.r = 0.64;
  (pPVar2->fields).gradientB.fields.g = 0.95;
  (pPVar2->fields).gradientB.fields.b = 1.0;
  (pPVar2->fields).gradientB.fields.a = 1.0;
  (pPVar2->fields).gradientC.fields.r = 0.86;
  (pPVar2->fields).gradientC.fields.g = 0.76;
  (pPVar2->fields).gradientC.fields.b = 1.0;
  (pPVar2->fields).gradientC.fields.a = 1.0;
  (pPVar2->fields).gradientD.fields.r = 1.0;
  (pPVar2->fields).gradientD.fields.g = 0.96;
  (pPVar2->fields).gradientD.fields.b = 0.82;
  (pPVar2->fields).gradientD.fields.a = 1.0;
  (pPVar2->fields).gradientScale = 2.8;
  (pPVar2->fields).gradientSpeed = 0.16;
  (pPVar2->fields).glow = 1.35;
  (pPVar2->fields).scanlineStrength = 0.12;
  (pPVar2->fields).scanlineDensity = 180.0;
  (pPVar2->fields).scanlineSpeed = 0.18;
  (pPVar2->fields).flickerStrength = 0.05;
  (pPVar2->fields).flickerSpeed = 18.0;
  (pPVar2->fields).softness = 1.0;
  (pPVar2->fields).popShadowOffset.fields = (UnityEngine_Vector2_Fields)0xbfc0000000000000;
  (pPVar2->fields).popExtrusionOffset.fields = (UnityEngine_Vector2_Fields)0xc0c0000000000000;
  System_Object___ctor((Il2CppObject *)pPVar2,(MethodInfo *)0x0);
  if (pPVar2 != (PatreonEffects_NameEffectSettings_o *)0x0) {
    (pPVar2->fields).effectMode = 3;
    (pPVar2->fields).gradientA.fields.r = 0.72;
    (pPVar2->fields).gradientA.fields.g = 0.08;
    (pPVar2->fields).gradientA.fields.b = 0.02;
    (pPVar2->fields).gradientA.fields.a = 1.0;
    (pPVar2->fields).gradientB.fields.r = 1.0;
    (pPVar2->fields).gradientB.fields.g = 0.36;
    (pPVar2->fields).gradientB.fields.b = 0.04;
    (pPVar2->fields).gradientB.fields.a = 1.0;
    (pPVar2->fields).gradientC.fields.r = 1.0;
    (pPVar2->fields).gradientC.fields.g = 0.86;
    (pPVar2->fields).gradientC.fields.b = 0.18;
    (pPVar2->fields).gradientC.fields.a = 1.0;
    (pPVar2->fields).gradientD.fields.r = 1.0;
    (pPVar2->fields).gradientD.fields.g = 0.45;
    (pPVar2->fields).gradientD.fields.b = 0.08;
    (pPVar2->fields).gradientD.fields.a = 1.0;
    (pPVar2->fields).gradientScale = 1.15;
    (pPVar2->fields).gradientSpeed = 0.42;
    (pPVar2->fields).glow = 0.38;
    (pPVar2->fields).scanlineStrength = 0.48;
    (pPVar2->fields).scanlineDensity = 11.0;
    (pPVar2->fields).scanlineSpeed = 0.46;
    (pPVar2->fields).flickerStrength = 0.12;
    (pPVar2->fields).flickerSpeed = 9.0;
    (pPVar2->fields).softness = 0.92;
    return pPVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae055 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameEffectSettings);
    g_data_057ae055 = '\x01';
  }
  pPVar2 = (PatreonEffects_NameEffectSettings_o *)il2cpp_runtime_helper_023052d0(TypeInfo_NameEffectSettings);
  (pPVar2->fields).gradientA.fields.r = 0.78;
  (pPVar2->fields).gradientA.fields.g = 1.0;
  (pPVar2->fields).gradientA.fields.b = 0.9;
  (pPVar2->fields).gradientA.fields.a = 1.0;
  (pPVar2->fields).gradientB.fields.r = 0.64;
  (pPVar2->fields).gradientB.fields.g = 0.95;
  (pPVar2->fields).gradientB.fields.b = 1.0;
  (pPVar2->fields).gradientB.fields.a = 1.0;
  (pPVar2->fields).gradientC.fields.r = 0.86;
  (pPVar2->fields).gradientC.fields.g = 0.76;
  (pPVar2->fields).gradientC.fields.b = 1.0;
  (pPVar2->fields).gradientC.fields.a = 1.0;
  (pPVar2->fields).gradientD.fields.r = 1.0;
  (pPVar2->fields).gradientD.fields.g = 0.96;
  (pPVar2->fields).gradientD.fields.b = 0.82;
  (pPVar2->fields).gradientD.fields.a = 1.0;
  (pPVar2->fields).gradientScale = 2.8;
  (pPVar2->fields).gradientSpeed = 0.16;
  (pPVar2->fields).glow = 1.35;
  (pPVar2->fields).scanlineStrength = 0.12;
  (pPVar2->fields).scanlineDensity = 180.0;
  (pPVar2->fields).scanlineSpeed = 0.18;
  (pPVar2->fields).flickerStrength = 0.05;
  (pPVar2->fields).flickerSpeed = 18.0;
  (pPVar2->fields).softness = 1.0;
  (pPVar2->fields).popShadowOffset.fields = (UnityEngine_Vector2_Fields)0xbfc0000000000000;
  (pPVar2->fields).popExtrusionOffset.fields = (UnityEngine_Vector2_Fields)0xc0c0000000000000;
  System_Object___ctor((Il2CppObject *)pPVar2,(MethodInfo *)0x0);
  if (pPVar2 == (PatreonEffects_NameEffectSettings_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae056 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_NameEffectSettings);
      g_data_057ae056 = '\x01';
    }
    pPVar2 = (PatreonEffects_NameEffectSettings_o *)il2cpp_runtime_helper_023052d0(TypeInfo_NameEffectSettings);
    (pPVar2->fields).gradientA.fields.r = 0.78;
    (pPVar2->fields).gradientA.fields.g = 1.0;
    (pPVar2->fields).gradientA.fields.b = 0.9;
    (pPVar2->fields).gradientA.fields.a = 1.0;
    (pPVar2->fields).gradientB.fields.r = 0.64;
    (pPVar2->fields).gradientB.fields.g = 0.95;
    (pPVar2->fields).gradientB.fields.b = 1.0;
    (pPVar2->fields).gradientB.fields.a = 1.0;
    (pPVar2->fields).gradientC.fields.r = 0.86;
    (pPVar2->fields).gradientC.fields.g = 0.76;
    (pPVar2->fields).gradientC.fields.b = 1.0;
    (pPVar2->fields).gradientC.fields.a = 1.0;
    (pPVar2->fields).gradientD.fields.r = 1.0;
    (pPVar2->fields).gradientD.fields.g = 0.96;
    (pPVar2->fields).gradientD.fields.b = 0.82;
    (pPVar2->fields).gradientD.fields.a = 1.0;
    (pPVar2->fields).gradientScale = 2.8;
    (pPVar2->fields).gradientSpeed = 0.16;
    (pPVar2->fields).glow = 1.35;
    (pPVar2->fields).scanlineStrength = 0.12;
    (pPVar2->fields).scanlineDensity = 180.0;
    (pPVar2->fields).scanlineSpeed = 0.18;
    (pPVar2->fields).flickerStrength = 0.05;
    (pPVar2->fields).flickerSpeed = 18.0;
    (pPVar2->fields).softness = 1.0;
    (pPVar2->fields).popShadowOffset.fields = (UnityEngine_Vector2_Fields)0xbfc0000000000000;
    (pPVar2->fields).popExtrusionOffset.fields = (UnityEngine_Vector2_Fields)0xc0c0000000000000;
    System_Object___ctor((Il2CppObject *)pPVar2,(MethodInfo *)0x0);
    if (pPVar2 == (PatreonEffects_NameEffectSettings_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae057 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_NameEffectSettings);
        g_data_057ae057 = '\x01';
      }
      pPVar3 = (PatreonEffects_NameEffectSettings_o *)il2cpp_runtime_helper_023052d0(TypeInfo_NameEffectSettings);
      (pPVar3->fields).gradientA.fields.r = 0.78;
      (pPVar3->fields).gradientA.fields.g = 1.0;
      (pPVar3->fields).gradientA.fields.b = 0.9;
      (pPVar3->fields).gradientA.fields.a = 1.0;
      (pPVar3->fields).gradientB.fields.r = 0.64;
      (pPVar3->fields).gradientB.fields.g = 0.95;
      (pPVar3->fields).gradientB.fields.b = 1.0;
      (pPVar3->fields).gradientB.fields.a = 1.0;
      (pPVar3->fields).gradientC.fields.r = 0.86;
      (pPVar3->fields).gradientC.fields.g = 0.76;
      (pPVar3->fields).gradientC.fields.b = 1.0;
      (pPVar3->fields).gradientC.fields.a = 1.0;
      (pPVar3->fields).gradientD.fields.r = 1.0;
      (pPVar3->fields).gradientD.fields.g = 0.96;
      (pPVar3->fields).gradientD.fields.b = 0.82;
      (pPVar3->fields).gradientD.fields.a = 1.0;
      (pPVar3->fields).gradientScale = 2.8;
      (pPVar3->fields).gradientSpeed = 0.16;
      (pPVar3->fields).glow = 1.35;
      (pPVar3->fields).scanlineStrength = 0.12;
      (pPVar3->fields).scanlineDensity = 180.0;
      (pPVar3->fields).scanlineSpeed = 0.18;
      (pPVar3->fields).flickerStrength = 0.05;
      (pPVar3->fields).flickerSpeed = 18.0;
      (pPVar3->fields).softness = 1.0;
      (pPVar3->fields).popShadowOffset.fields = (UnityEngine_Vector2_Fields)0xbfc0000000000000;
      (pPVar3->fields).popExtrusionOffset.fields = (UnityEngine_Vector2_Fields)0xc0c0000000000000;
      piVar4 = (int *)0x0;
      pPVar2 = pPVar3;
      System_Object___ctor((Il2CppObject *)pPVar3,(MethodInfo *)0x0);
      if (pPVar3 == (PatreonEffects_NameEffectSettings_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        pPStack_38 = pPVar3;
        if (g_data_057ae050 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryParse_NameEffectType);
          il2cpp_runtime_helper_023445d0(&"Wave");
          il2cpp_runtime_helper_023445d0(&"None");
          g_data_057ae050 = '\x01';
        }
        iStack_3c = 0;
        *piVar4 = 0;
        pPVar3 = (PatreonEffects_NameEffectSettings_o *)0x0;
        bVar1 = System_String__IsNullOrWhiteSpace((System_String_o *)pPVar2,(MethodInfo *)0x0);
        if ((char)bVar1 == '\0') {
          pPVar3 = (PatreonEffects_NameEffectSettings_o *)0x0;
          bVar1 = System_String__op_Equality((System_String_o *)pPVar2,"None",(MethodInfo *)0x0);
          if ((char)bVar1 == '\0') {
            bVar1 = System_String__Equals_3af50f0((System_String_o *)pPVar2,"Wave",5,(MethodInfo *)0x0);
            if ((char)bVar1 == '\0') {
              if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              method_00 = (MethodInfo *)0x1;
              bVar1 = System_Enum__TryParse_Int32Enum__2501010
                                ((System_String_o *)pPVar2,1,&iStack_3c,MethodInfo_Boolean_TryParse_NameEffectType);
              if (((char)bVar1 == '\0') || (6 < iStack_3c - 1U)) {
                bVar1 = PatreonEffects_NameEffectPresets__IsLegacyEffect((System_String_o *)pPVar2,method_00);
                if ((char)bVar1 == '\0') {
                  return (PatreonEffects_NameEffectSettings_o *)0x0;
                }
                *piVar4 = 1;
              }
              else {
                *piVar4 = iStack_3c;
              }
            }
            else {
              *piVar4 = 5;
            }
            pPVar3 = (PatreonEffects_NameEffectSettings_o *)0x1;
          }
        }
        return pPVar3;
      }
      (pPVar3->fields).effectMode = 6;
      (pPVar3->fields).gradientA.fields.r = 1.0;
      (pPVar3->fields).gradientA.fields.g = 1.0;
      (pPVar3->fields).gradientA.fields.b = 1.0;
      (pPVar3->fields).gradientA.fields.a = 1.0;
      (pPVar3->fields).gradientB.fields.r = 1.0;
      (pPVar3->fields).gradientB.fields.g = 1.0;
      (pPVar3->fields).gradientB.fields.b = 1.0;
      (pPVar3->fields).gradientB.fields.a = 1.0;
      (pPVar3->fields).gradientC.fields.r = 1.0;
      (pPVar3->fields).gradientC.fields.g = 1.0;
      (pPVar3->fields).gradientC.fields.b = 1.0;
      (pPVar3->fields).gradientC.fields.a = 1.0;
      (pPVar3->fields).gradientD.fields.r = 0.92;
      (pPVar3->fields).gradientD.fields.g = 0.02;
      (pPVar3->fields).gradientD.fields.b = 0.29;
      (pPVar3->fields).gradientD.fields.a = 1.0;
      (pPVar3->fields).gradientScale = 1.0;
      (pPVar3->fields).gradientSpeed = 0.0;
      (pPVar3->fields).glow = 0.42;
      (pPVar3->fields).scanlineStrength = 0.0;
      (pPVar3->fields).flickerStrength = 0.0;
      (pPVar3->fields).softness = 0.86;
      return pPVar3;
    }
    (pPVar2->fields).effectMode = 5;
    (pPVar2->fields).gradientA.fields.r = 0.08;
    (pPVar2->fields).gradientA.fields.g = 0.28;
    (pPVar2->fields).gradientA.fields.b = 1.0;
    (pPVar2->fields).gradientA.fields.a = 1.0;
    (pPVar2->fields).gradientB.fields.r = 0.08;
    (pPVar2->fields).gradientB.fields.g = 0.94;
    (pPVar2->fields).gradientB.fields.b = 1.0;
    (pPVar2->fields).gradientB.fields.a = 1.0;
    (pPVar2->fields).gradientC.fields.r = 0.86;
    (pPVar2->fields).gradientC.fields.g = 1.0;
    (pPVar2->fields).gradientC.fields.b = 1.0;
    (pPVar2->fields).gradientC.fields.a = 1.0;
    (pPVar2->fields).gradientD.fields.r = 0.24;
    (pPVar2->fields).gradientD.fields.g = 0.72;
    (pPVar2->fields).gradientD.fields.b = 1.0;
    (pPVar2->fields).gradientD.fields.a = 1.0;
    (pPVar2->fields).gradientScale = 1.35;
    (pPVar2->fields).gradientSpeed = 0.76;
    (pPVar2->fields).glow = 0.68;
    (pPVar2->fields).scanlineStrength = 0.36;
    (pPVar2->fields).scanlineDensity = 18.0;
    (pPVar2->fields).scanlineSpeed = 0.82;
    (pPVar2->fields).flickerStrength = 0.18;
    (pPVar2->fields).flickerSpeed = 16.0;
    (pPVar2->fields).softness = 0.82;
    return pPVar2;
  }
  (pPVar2->fields).effectMode = 4;
  (pPVar2->fields).gradientA.fields.r = 0.05;
  (pPVar2->fields).gradientA.fields.g = 0.34;
  (pPVar2->fields).gradientA.fields.b = 0.76;
  (pPVar2->fields).gradientA.fields.a = 1.0;
  (pPVar2->fields).gradientB.fields.r = 0.08;
  (pPVar2->fields).gradientB.fields.g = 0.74;
  (pPVar2->fields).gradientB.fields.b = 0.92;
  (pPVar2->fields).gradientB.fields.a = 1.0;
  (pPVar2->fields).gradientC.fields.r = 0.72;
  (pPVar2->fields).gradientC.fields.g = 0.96;
  (pPVar2->fields).gradientC.fields.b = 1.0;
  (pPVar2->fields).gradientC.fields.a = 1.0;
  (pPVar2->fields).gradientD.fields.r = 0.18;
  (pPVar2->fields).gradientD.fields.g = 0.86;
  (pPVar2->fields).gradientD.fields.b = 1.0;
  (pPVar2->fields).gradientD.fields.a = 1.0;
  (pPVar2->fields).gradientScale = 0.8;
  (pPVar2->fields).gradientSpeed = 0.18;
  (pPVar2->fields).glow = 0.42;
  (pPVar2->fields).scanlineStrength = 0.24;
  (pPVar2->fields).scanlineDensity = 8.0;
  (pPVar2->fields).scanlineSpeed = 0.2;
  (pPVar2->fields).flickerStrength = 0.0;
  (pPVar2->fields).softness = 0.95;
  return pPVar2;
}


// PatreonEffects.NameEffectPresets$$Waves
// il2cpp: PatreonEffects_NameEffectSettings_o* PatreonEffects_NameEffectPresets__Waves (const MethodInfo* method);
// 0x432d1c0

PatreonEffects_NameEffectSettings_o * PatreonEffects_NameEffectPresets__Waves(MethodInfo *method)

{
  bool_conflict bVar1;
  PatreonEffects_NameEffectSettings_o *pPVar2;
  PatreonEffects_NameEffectSettings_o *pPVar3;
  int *piVar4;
  MethodInfo *method_00;
  int32_t iStack_34;
  PatreonEffects_NameEffectSettings_o *pPStack_30;
  
  if (g_data_057ae055 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameEffectSettings);
    g_data_057ae055 = '\x01';
  }
  pPVar2 = (PatreonEffects_NameEffectSettings_o *)il2cpp_runtime_helper_023052d0(TypeInfo_NameEffectSettings);
  (pPVar2->fields).gradientA.fields.r = 0.78;
  (pPVar2->fields).gradientA.fields.g = 1.0;
  (pPVar2->fields).gradientA.fields.b = 0.9;
  (pPVar2->fields).gradientA.fields.a = 1.0;
  (pPVar2->fields).gradientB.fields.r = 0.64;
  (pPVar2->fields).gradientB.fields.g = 0.95;
  (pPVar2->fields).gradientB.fields.b = 1.0;
  (pPVar2->fields).gradientB.fields.a = 1.0;
  (pPVar2->fields).gradientC.fields.r = 0.86;
  (pPVar2->fields).gradientC.fields.g = 0.76;
  (pPVar2->fields).gradientC.fields.b = 1.0;
  (pPVar2->fields).gradientC.fields.a = 1.0;
  (pPVar2->fields).gradientD.fields.r = 1.0;
  (pPVar2->fields).gradientD.fields.g = 0.96;
  (pPVar2->fields).gradientD.fields.b = 0.82;
  (pPVar2->fields).gradientD.fields.a = 1.0;
  (pPVar2->fields).gradientScale = 2.8;
  (pPVar2->fields).gradientSpeed = 0.16;
  (pPVar2->fields).glow = 1.35;
  (pPVar2->fields).scanlineStrength = 0.12;
  (pPVar2->fields).scanlineDensity = 180.0;
  (pPVar2->fields).scanlineSpeed = 0.18;
  (pPVar2->fields).flickerStrength = 0.05;
  (pPVar2->fields).flickerSpeed = 18.0;
  (pPVar2->fields).softness = 1.0;
  (pPVar2->fields).popShadowOffset.fields = (UnityEngine_Vector2_Fields)0xbfc0000000000000;
  (pPVar2->fields).popExtrusionOffset.fields = (UnityEngine_Vector2_Fields)0xc0c0000000000000;
  System_Object___ctor((Il2CppObject *)pPVar2,(MethodInfo *)0x0);
  if (pPVar2 != (PatreonEffects_NameEffectSettings_o *)0x0) {
    (pPVar2->fields).effectMode = 4;
    (pPVar2->fields).gradientA.fields.r = 0.05;
    (pPVar2->fields).gradientA.fields.g = 0.34;
    (pPVar2->fields).gradientA.fields.b = 0.76;
    (pPVar2->fields).gradientA.fields.a = 1.0;
    (pPVar2->fields).gradientB.fields.r = 0.08;
    (pPVar2->fields).gradientB.fields.g = 0.74;
    (pPVar2->fields).gradientB.fields.b = 0.92;
    (pPVar2->fields).gradientB.fields.a = 1.0;
    (pPVar2->fields).gradientC.fields.r = 0.72;
    (pPVar2->fields).gradientC.fields.g = 0.96;
    (pPVar2->fields).gradientC.fields.b = 1.0;
    (pPVar2->fields).gradientC.fields.a = 1.0;
    (pPVar2->fields).gradientD.fields.r = 0.18;
    (pPVar2->fields).gradientD.fields.g = 0.86;
    (pPVar2->fields).gradientD.fields.b = 1.0;
    (pPVar2->fields).gradientD.fields.a = 1.0;
    (pPVar2->fields).gradientScale = 0.8;
    (pPVar2->fields).gradientSpeed = 0.18;
    (pPVar2->fields).glow = 0.42;
    (pPVar2->fields).scanlineStrength = 0.24;
    (pPVar2->fields).scanlineDensity = 8.0;
    (pPVar2->fields).scanlineSpeed = 0.2;
    (pPVar2->fields).flickerStrength = 0.0;
    (pPVar2->fields).softness = 0.95;
    return pPVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae056 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameEffectSettings);
    g_data_057ae056 = '\x01';
  }
  pPVar2 = (PatreonEffects_NameEffectSettings_o *)il2cpp_runtime_helper_023052d0(TypeInfo_NameEffectSettings);
  (pPVar2->fields).gradientA.fields.r = 0.78;
  (pPVar2->fields).gradientA.fields.g = 1.0;
  (pPVar2->fields).gradientA.fields.b = 0.9;
  (pPVar2->fields).gradientA.fields.a = 1.0;
  (pPVar2->fields).gradientB.fields.r = 0.64;
  (pPVar2->fields).gradientB.fields.g = 0.95;
  (pPVar2->fields).gradientB.fields.b = 1.0;
  (pPVar2->fields).gradientB.fields.a = 1.0;
  (pPVar2->fields).gradientC.fields.r = 0.86;
  (pPVar2->fields).gradientC.fields.g = 0.76;
  (pPVar2->fields).gradientC.fields.b = 1.0;
  (pPVar2->fields).gradientC.fields.a = 1.0;
  (pPVar2->fields).gradientD.fields.r = 1.0;
  (pPVar2->fields).gradientD.fields.g = 0.96;
  (pPVar2->fields).gradientD.fields.b = 0.82;
  (pPVar2->fields).gradientD.fields.a = 1.0;
  (pPVar2->fields).gradientScale = 2.8;
  (pPVar2->fields).gradientSpeed = 0.16;
  (pPVar2->fields).glow = 1.35;
  (pPVar2->fields).scanlineStrength = 0.12;
  (pPVar2->fields).scanlineDensity = 180.0;
  (pPVar2->fields).scanlineSpeed = 0.18;
  (pPVar2->fields).flickerStrength = 0.05;
  (pPVar2->fields).flickerSpeed = 18.0;
  (pPVar2->fields).softness = 1.0;
  (pPVar2->fields).popShadowOffset.fields = (UnityEngine_Vector2_Fields)0xbfc0000000000000;
  (pPVar2->fields).popExtrusionOffset.fields = (UnityEngine_Vector2_Fields)0xc0c0000000000000;
  System_Object___ctor((Il2CppObject *)pPVar2,(MethodInfo *)0x0);
  if (pPVar2 == (PatreonEffects_NameEffectSettings_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae057 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_NameEffectSettings);
      g_data_057ae057 = '\x01';
    }
    pPVar3 = (PatreonEffects_NameEffectSettings_o *)il2cpp_runtime_helper_023052d0(TypeInfo_NameEffectSettings);
    (pPVar3->fields).gradientA.fields.r = 0.78;
    (pPVar3->fields).gradientA.fields.g = 1.0;
    (pPVar3->fields).gradientA.fields.b = 0.9;
    (pPVar3->fields).gradientA.fields.a = 1.0;
    (pPVar3->fields).gradientB.fields.r = 0.64;
    (pPVar3->fields).gradientB.fields.g = 0.95;
    (pPVar3->fields).gradientB.fields.b = 1.0;
    (pPVar3->fields).gradientB.fields.a = 1.0;
    (pPVar3->fields).gradientC.fields.r = 0.86;
    (pPVar3->fields).gradientC.fields.g = 0.76;
    (pPVar3->fields).gradientC.fields.b = 1.0;
    (pPVar3->fields).gradientC.fields.a = 1.0;
    (pPVar3->fields).gradientD.fields.r = 1.0;
    (pPVar3->fields).gradientD.fields.g = 0.96;
    (pPVar3->fields).gradientD.fields.b = 0.82;
    (pPVar3->fields).gradientD.fields.a = 1.0;
    (pPVar3->fields).gradientScale = 2.8;
    (pPVar3->fields).gradientSpeed = 0.16;
    (pPVar3->fields).glow = 1.35;
    (pPVar3->fields).scanlineStrength = 0.12;
    (pPVar3->fields).scanlineDensity = 180.0;
    (pPVar3->fields).scanlineSpeed = 0.18;
    (pPVar3->fields).flickerStrength = 0.05;
    (pPVar3->fields).flickerSpeed = 18.0;
    (pPVar3->fields).softness = 1.0;
    (pPVar3->fields).popShadowOffset.fields = (UnityEngine_Vector2_Fields)0xbfc0000000000000;
    (pPVar3->fields).popExtrusionOffset.fields = (UnityEngine_Vector2_Fields)0xc0c0000000000000;
    piVar4 = (int *)0x0;
    pPVar2 = pPVar3;
    System_Object___ctor((Il2CppObject *)pPVar3,(MethodInfo *)0x0);
    if (pPVar3 == (PatreonEffects_NameEffectSettings_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      pPStack_30 = pPVar3;
      if (g_data_057ae050 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryParse_NameEffectType);
        il2cpp_runtime_helper_023445d0(&"Wave");
        il2cpp_runtime_helper_023445d0(&"None");
        g_data_057ae050 = '\x01';
      }
      iStack_34 = 0;
      *piVar4 = 0;
      pPVar3 = (PatreonEffects_NameEffectSettings_o *)0x0;
      bVar1 = System_String__IsNullOrWhiteSpace((System_String_o *)pPVar2,(MethodInfo *)0x0);
      if ((char)bVar1 == '\0') {
        pPVar3 = (PatreonEffects_NameEffectSettings_o *)0x0;
        bVar1 = System_String__op_Equality((System_String_o *)pPVar2,"None",(MethodInfo *)0x0);
        if ((char)bVar1 == '\0') {
          bVar1 = System_String__Equals_3af50f0((System_String_o *)pPVar2,"Wave",5,(MethodInfo *)0x0);
          if ((char)bVar1 == '\0') {
            if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            method_00 = (MethodInfo *)0x1;
            bVar1 = System_Enum__TryParse_Int32Enum__2501010
                              ((System_String_o *)pPVar2,1,&iStack_34,MethodInfo_Boolean_TryParse_NameEffectType);
            if (((char)bVar1 == '\0') || (6 < iStack_34 - 1U)) {
              bVar1 = PatreonEffects_NameEffectPresets__IsLegacyEffect((System_String_o *)pPVar2,method_00);
              if ((char)bVar1 == '\0') {
                return (PatreonEffects_NameEffectSettings_o *)0x0;
              }
              *piVar4 = 1;
            }
            else {
              *piVar4 = iStack_34;
            }
          }
          else {
            *piVar4 = 5;
          }
          pPVar3 = (PatreonEffects_NameEffectSettings_o *)0x1;
        }
      }
      return pPVar3;
    }
    (pPVar3->fields).effectMode = 6;
    (pPVar3->fields).gradientA.fields.r = 1.0;
    (pPVar3->fields).gradientA.fields.g = 1.0;
    (pPVar3->fields).gradientA.fields.b = 1.0;
    (pPVar3->fields).gradientA.fields.a = 1.0;
    (pPVar3->fields).gradientB.fields.r = 1.0;
    (pPVar3->fields).gradientB.fields.g = 1.0;
    (pPVar3->fields).gradientB.fields.b = 1.0;
    (pPVar3->fields).gradientB.fields.a = 1.0;
    (pPVar3->fields).gradientC.fields.r = 1.0;
    (pPVar3->fields).gradientC.fields.g = 1.0;
    (pPVar3->fields).gradientC.fields.b = 1.0;
    (pPVar3->fields).gradientC.fields.a = 1.0;
    (pPVar3->fields).gradientD.fields.r = 0.92;
    (pPVar3->fields).gradientD.fields.g = 0.02;
    (pPVar3->fields).gradientD.fields.b = 0.29;
    (pPVar3->fields).gradientD.fields.a = 1.0;
    (pPVar3->fields).gradientScale = 1.0;
    (pPVar3->fields).gradientSpeed = 0.0;
    (pPVar3->fields).glow = 0.42;
    (pPVar3->fields).scanlineStrength = 0.0;
    (pPVar3->fields).flickerStrength = 0.0;
    (pPVar3->fields).softness = 0.86;
    return pPVar3;
  }
  (pPVar2->fields).effectMode = 5;
  (pPVar2->fields).gradientA.fields.r = 0.08;
  (pPVar2->fields).gradientA.fields.g = 0.28;
  (pPVar2->fields).gradientA.fields.b = 1.0;
  (pPVar2->fields).gradientA.fields.a = 1.0;
  (pPVar2->fields).gradientB.fields.r = 0.08;
  (pPVar2->fields).gradientB.fields.g = 0.94;
  (pPVar2->fields).gradientB.fields.b = 1.0;
  (pPVar2->fields).gradientB.fields.a = 1.0;
  (pPVar2->fields).gradientC.fields.r = 0.86;
  (pPVar2->fields).gradientC.fields.g = 1.0;
  (pPVar2->fields).gradientC.fields.b = 1.0;
  (pPVar2->fields).gradientC.fields.a = 1.0;
  (pPVar2->fields).gradientD.fields.r = 0.24;
  (pPVar2->fields).gradientD.fields.g = 0.72;
  (pPVar2->fields).gradientD.fields.b = 1.0;
  (pPVar2->fields).gradientD.fields.a = 1.0;
  (pPVar2->fields).gradientScale = 1.35;
  (pPVar2->fields).gradientSpeed = 0.76;
  (pPVar2->fields).glow = 0.68;
  (pPVar2->fields).scanlineStrength = 0.36;
  (pPVar2->fields).scanlineDensity = 18.0;
  (pPVar2->fields).scanlineSpeed = 0.82;
  (pPVar2->fields).flickerStrength = 0.18;
  (pPVar2->fields).flickerSpeed = 16.0;
  (pPVar2->fields).softness = 0.82;
  return pPVar2;
}


// PatreonEffects.NameEffectPresets$$Electric
// il2cpp: PatreonEffects_NameEffectSettings_o* PatreonEffects_NameEffectPresets__Electric (const MethodInfo* method);
// 0x432d2c0

PatreonEffects_NameEffectSettings_o * PatreonEffects_NameEffectPresets__Electric(MethodInfo *method)

{
  bool_conflict bVar1;
  PatreonEffects_NameEffectSettings_o *pPVar2;
  PatreonEffects_NameEffectSettings_o *pPVar3;
  int *piVar4;
  MethodInfo *method_00;
  int32_t iStack_2c;
  PatreonEffects_NameEffectSettings_o *pPStack_28;
  
  if (g_data_057ae056 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameEffectSettings);
    g_data_057ae056 = '\x01';
  }
  pPVar2 = (PatreonEffects_NameEffectSettings_o *)il2cpp_runtime_helper_023052d0(TypeInfo_NameEffectSettings);
  (pPVar2->fields).gradientA.fields.r = 0.78;
  (pPVar2->fields).gradientA.fields.g = 1.0;
  (pPVar2->fields).gradientA.fields.b = 0.9;
  (pPVar2->fields).gradientA.fields.a = 1.0;
  (pPVar2->fields).gradientB.fields.r = 0.64;
  (pPVar2->fields).gradientB.fields.g = 0.95;
  (pPVar2->fields).gradientB.fields.b = 1.0;
  (pPVar2->fields).gradientB.fields.a = 1.0;
  (pPVar2->fields).gradientC.fields.r = 0.86;
  (pPVar2->fields).gradientC.fields.g = 0.76;
  (pPVar2->fields).gradientC.fields.b = 1.0;
  (pPVar2->fields).gradientC.fields.a = 1.0;
  (pPVar2->fields).gradientD.fields.r = 1.0;
  (pPVar2->fields).gradientD.fields.g = 0.96;
  (pPVar2->fields).gradientD.fields.b = 0.82;
  (pPVar2->fields).gradientD.fields.a = 1.0;
  (pPVar2->fields).gradientScale = 2.8;
  (pPVar2->fields).gradientSpeed = 0.16;
  (pPVar2->fields).glow = 1.35;
  (pPVar2->fields).scanlineStrength = 0.12;
  (pPVar2->fields).scanlineDensity = 180.0;
  (pPVar2->fields).scanlineSpeed = 0.18;
  (pPVar2->fields).flickerStrength = 0.05;
  (pPVar2->fields).flickerSpeed = 18.0;
  (pPVar2->fields).softness = 1.0;
  (pPVar2->fields).popShadowOffset.fields = (UnityEngine_Vector2_Fields)0xbfc0000000000000;
  (pPVar2->fields).popExtrusionOffset.fields = (UnityEngine_Vector2_Fields)0xc0c0000000000000;
  System_Object___ctor((Il2CppObject *)pPVar2,(MethodInfo *)0x0);
  if (pPVar2 != (PatreonEffects_NameEffectSettings_o *)0x0) {
    (pPVar2->fields).effectMode = 5;
    (pPVar2->fields).gradientA.fields.r = 0.08;
    (pPVar2->fields).gradientA.fields.g = 0.28;
    (pPVar2->fields).gradientA.fields.b = 1.0;
    (pPVar2->fields).gradientA.fields.a = 1.0;
    (pPVar2->fields).gradientB.fields.r = 0.08;
    (pPVar2->fields).gradientB.fields.g = 0.94;
    (pPVar2->fields).gradientB.fields.b = 1.0;
    (pPVar2->fields).gradientB.fields.a = 1.0;
    (pPVar2->fields).gradientC.fields.r = 0.86;
    (pPVar2->fields).gradientC.fields.g = 1.0;
    (pPVar2->fields).gradientC.fields.b = 1.0;
    (pPVar2->fields).gradientC.fields.a = 1.0;
    (pPVar2->fields).gradientD.fields.r = 0.24;
    (pPVar2->fields).gradientD.fields.g = 0.72;
    (pPVar2->fields).gradientD.fields.b = 1.0;
    (pPVar2->fields).gradientD.fields.a = 1.0;
    (pPVar2->fields).gradientScale = 1.35;
    (pPVar2->fields).gradientSpeed = 0.76;
    (pPVar2->fields).glow = 0.68;
    (pPVar2->fields).scanlineStrength = 0.36;
    (pPVar2->fields).scanlineDensity = 18.0;
    (pPVar2->fields).scanlineSpeed = 0.82;
    (pPVar2->fields).flickerStrength = 0.18;
    (pPVar2->fields).flickerSpeed = 16.0;
    (pPVar2->fields).softness = 0.82;
    return pPVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae057 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameEffectSettings);
    g_data_057ae057 = '\x01';
  }
  pPVar3 = (PatreonEffects_NameEffectSettings_o *)il2cpp_runtime_helper_023052d0(TypeInfo_NameEffectSettings);
  (pPVar3->fields).gradientA.fields.r = 0.78;
  (pPVar3->fields).gradientA.fields.g = 1.0;
  (pPVar3->fields).gradientA.fields.b = 0.9;
  (pPVar3->fields).gradientA.fields.a = 1.0;
  (pPVar3->fields).gradientB.fields.r = 0.64;
  (pPVar3->fields).gradientB.fields.g = 0.95;
  (pPVar3->fields).gradientB.fields.b = 1.0;
  (pPVar3->fields).gradientB.fields.a = 1.0;
  (pPVar3->fields).gradientC.fields.r = 0.86;
  (pPVar3->fields).gradientC.fields.g = 0.76;
  (pPVar3->fields).gradientC.fields.b = 1.0;
  (pPVar3->fields).gradientC.fields.a = 1.0;
  (pPVar3->fields).gradientD.fields.r = 1.0;
  (pPVar3->fields).gradientD.fields.g = 0.96;
  (pPVar3->fields).gradientD.fields.b = 0.82;
  (pPVar3->fields).gradientD.fields.a = 1.0;
  (pPVar3->fields).gradientScale = 2.8;
  (pPVar3->fields).gradientSpeed = 0.16;
  (pPVar3->fields).glow = 1.35;
  (pPVar3->fields).scanlineStrength = 0.12;
  (pPVar3->fields).scanlineDensity = 180.0;
  (pPVar3->fields).scanlineSpeed = 0.18;
  (pPVar3->fields).flickerStrength = 0.05;
  (pPVar3->fields).flickerSpeed = 18.0;
  (pPVar3->fields).softness = 1.0;
  (pPVar3->fields).popShadowOffset.fields = (UnityEngine_Vector2_Fields)0xbfc0000000000000;
  (pPVar3->fields).popExtrusionOffset.fields = (UnityEngine_Vector2_Fields)0xc0c0000000000000;
  piVar4 = (int *)0x0;
  pPVar2 = pPVar3;
  System_Object___ctor((Il2CppObject *)pPVar3,(MethodInfo *)0x0);
  if (pPVar3 == (PatreonEffects_NameEffectSettings_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    pPStack_28 = pPVar3;
    if (g_data_057ae050 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryParse_NameEffectType);
      il2cpp_runtime_helper_023445d0(&"Wave");
      il2cpp_runtime_helper_023445d0(&"None");
      g_data_057ae050 = '\x01';
    }
    iStack_2c = 0;
    *piVar4 = 0;
    pPVar3 = (PatreonEffects_NameEffectSettings_o *)0x0;
    bVar1 = System_String__IsNullOrWhiteSpace((System_String_o *)pPVar2,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      pPVar3 = (PatreonEffects_NameEffectSettings_o *)0x0;
      bVar1 = System_String__op_Equality((System_String_o *)pPVar2,"None",(MethodInfo *)0x0);
      if ((char)bVar1 == '\0') {
        bVar1 = System_String__Equals_3af50f0((System_String_o *)pPVar2,"Wave",5,(MethodInfo *)0x0);
        if ((char)bVar1 == '\0') {
          if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          method_00 = (MethodInfo *)0x1;
          bVar1 = System_Enum__TryParse_Int32Enum__2501010
                            ((System_String_o *)pPVar2,1,&iStack_2c,MethodInfo_Boolean_TryParse_NameEffectType);
          if (((char)bVar1 == '\0') || (6 < iStack_2c - 1U)) {
            bVar1 = PatreonEffects_NameEffectPresets__IsLegacyEffect((System_String_o *)pPVar2,method_00);
            if ((char)bVar1 == '\0') {
              return (PatreonEffects_NameEffectSettings_o *)0x0;
            }
            *piVar4 = 1;
          }
          else {
            *piVar4 = iStack_2c;
          }
        }
        else {
          *piVar4 = 5;
        }
        pPVar3 = (PatreonEffects_NameEffectSettings_o *)0x1;
      }
    }
    return pPVar3;
  }
  (pPVar3->fields).effectMode = 6;
  (pPVar3->fields).gradientA.fields.r = 1.0;
  (pPVar3->fields).gradientA.fields.g = 1.0;
  (pPVar3->fields).gradientA.fields.b = 1.0;
  (pPVar3->fields).gradientA.fields.a = 1.0;
  (pPVar3->fields).gradientB.fields.r = 1.0;
  (pPVar3->fields).gradientB.fields.g = 1.0;
  (pPVar3->fields).gradientB.fields.b = 1.0;
  (pPVar3->fields).gradientB.fields.a = 1.0;
  (pPVar3->fields).gradientC.fields.r = 1.0;
  (pPVar3->fields).gradientC.fields.g = 1.0;
  (pPVar3->fields).gradientC.fields.b = 1.0;
  (pPVar3->fields).gradientC.fields.a = 1.0;
  (pPVar3->fields).gradientD.fields.r = 0.92;
  (pPVar3->fields).gradientD.fields.g = 0.02;
  (pPVar3->fields).gradientD.fields.b = 0.29;
  (pPVar3->fields).gradientD.fields.a = 1.0;
  (pPVar3->fields).gradientScale = 1.0;
  (pPVar3->fields).gradientSpeed = 0.0;
  (pPVar3->fields).glow = 0.42;
  (pPVar3->fields).scanlineStrength = 0.0;
  (pPVar3->fields).flickerStrength = 0.0;
  (pPVar3->fields).softness = 0.86;
  return pPVar3;
}


// PatreonEffects.NameEffectPresets$$Outline
// il2cpp: PatreonEffects_NameEffectSettings_o* PatreonEffects_NameEffectPresets__Outline (const MethodInfo* method);
// 0x432d3b0

PatreonEffects_NameEffectSettings_o * PatreonEffects_NameEffectPresets__Outline(MethodInfo *method)

{
  bool_conflict bVar1;
  PatreonEffects_NameEffectSettings_o *pPVar2;
  int *piVar3;
  MethodInfo *method_00;
  PatreonEffects_NameEffectSettings_o *value;
  int32_t iStack_24;
  PatreonEffects_NameEffectSettings_o *pPStack_20;
  
  if (g_data_057ae057 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameEffectSettings);
    g_data_057ae057 = '\x01';
  }
  pPVar2 = (PatreonEffects_NameEffectSettings_o *)il2cpp_runtime_helper_023052d0(TypeInfo_NameEffectSettings);
  (pPVar2->fields).gradientA.fields.r = 0.78;
  (pPVar2->fields).gradientA.fields.g = 1.0;
  (pPVar2->fields).gradientA.fields.b = 0.9;
  (pPVar2->fields).gradientA.fields.a = 1.0;
  (pPVar2->fields).gradientB.fields.r = 0.64;
  (pPVar2->fields).gradientB.fields.g = 0.95;
  (pPVar2->fields).gradientB.fields.b = 1.0;
  (pPVar2->fields).gradientB.fields.a = 1.0;
  (pPVar2->fields).gradientC.fields.r = 0.86;
  (pPVar2->fields).gradientC.fields.g = 0.76;
  (pPVar2->fields).gradientC.fields.b = 1.0;
  (pPVar2->fields).gradientC.fields.a = 1.0;
  (pPVar2->fields).gradientD.fields.r = 1.0;
  (pPVar2->fields).gradientD.fields.g = 0.96;
  (pPVar2->fields).gradientD.fields.b = 0.82;
  (pPVar2->fields).gradientD.fields.a = 1.0;
  (pPVar2->fields).gradientScale = 2.8;
  (pPVar2->fields).gradientSpeed = 0.16;
  (pPVar2->fields).glow = 1.35;
  (pPVar2->fields).scanlineStrength = 0.12;
  (pPVar2->fields).scanlineDensity = 180.0;
  (pPVar2->fields).scanlineSpeed = 0.18;
  (pPVar2->fields).flickerStrength = 0.05;
  (pPVar2->fields).flickerSpeed = 18.0;
  (pPVar2->fields).softness = 1.0;
  (pPVar2->fields).popShadowOffset.fields = (UnityEngine_Vector2_Fields)0xbfc0000000000000;
  (pPVar2->fields).popExtrusionOffset.fields = (UnityEngine_Vector2_Fields)0xc0c0000000000000;
  piVar3 = (int *)0x0;
  value = pPVar2;
  System_Object___ctor((Il2CppObject *)pPVar2,(MethodInfo *)0x0);
  if (pPVar2 == (PatreonEffects_NameEffectSettings_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    pPStack_20 = pPVar2;
    if (g_data_057ae050 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryParse_NameEffectType);
      il2cpp_runtime_helper_023445d0(&"Wave");
      il2cpp_runtime_helper_023445d0(&"None");
      g_data_057ae050 = '\x01';
    }
    iStack_24 = 0;
    *piVar3 = 0;
    pPVar2 = (PatreonEffects_NameEffectSettings_o *)0x0;
    bVar1 = System_String__IsNullOrWhiteSpace((System_String_o *)value,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      pPVar2 = (PatreonEffects_NameEffectSettings_o *)0x0;
      bVar1 = System_String__op_Equality((System_String_o *)value,"None",(MethodInfo *)0x0);
      if ((char)bVar1 == '\0') {
        bVar1 = System_String__Equals_3af50f0((System_String_o *)value,"Wave",5,(MethodInfo *)0x0);
        if ((char)bVar1 == '\0') {
          if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          method_00 = (MethodInfo *)0x1;
          bVar1 = System_Enum__TryParse_Int32Enum__2501010((System_String_o *)value,1,&iStack_24,MethodInfo_Boolean_TryParse_NameEffectType)
          ;
          if (((char)bVar1 == '\0') || (6 < iStack_24 - 1U)) {
            bVar1 = PatreonEffects_NameEffectPresets__IsLegacyEffect((System_String_o *)value,method_00);
            if ((char)bVar1 == '\0') {
              return (PatreonEffects_NameEffectSettings_o *)0x0;
            }
            *piVar3 = 1;
          }
          else {
            *piVar3 = iStack_24;
          }
        }
        else {
          *piVar3 = 5;
        }
        pPVar2 = (PatreonEffects_NameEffectSettings_o *)0x1;
      }
    }
    return pPVar2;
  }
  (pPVar2->fields).effectMode = 6;
  (pPVar2->fields).gradientA.fields.r = 1.0;
  (pPVar2->fields).gradientA.fields.g = 1.0;
  (pPVar2->fields).gradientA.fields.b = 1.0;
  (pPVar2->fields).gradientA.fields.a = 1.0;
  (pPVar2->fields).gradientB.fields.r = 1.0;
  (pPVar2->fields).gradientB.fields.g = 1.0;
  (pPVar2->fields).gradientB.fields.b = 1.0;
  (pPVar2->fields).gradientB.fields.a = 1.0;
  (pPVar2->fields).gradientC.fields.r = 1.0;
  (pPVar2->fields).gradientC.fields.g = 1.0;
  (pPVar2->fields).gradientC.fields.b = 1.0;
  (pPVar2->fields).gradientC.fields.a = 1.0;
  (pPVar2->fields).gradientD.fields.r = 0.92;
  (pPVar2->fields).gradientD.fields.g = 0.02;
  (pPVar2->fields).gradientD.fields.b = 0.29;
  (pPVar2->fields).gradientD.fields.a = 1.0;
  (pPVar2->fields).gradientScale = 1.0;
  (pPVar2->fields).gradientSpeed = 0.0;
  (pPVar2->fields).glow = 0.42;
  (pPVar2->fields).scanlineStrength = 0.0;
  (pPVar2->fields).flickerStrength = 0.0;
  (pPVar2->fields).softness = 0.86;
  return pPVar2;
}


// PatreonEffects.NameEffectPresets$$IsLegacyEffect
// il2cpp: bool PatreonEffects_NameEffectPresets__IsLegacyEffect (System_String_o* raw, const MethodInfo* method);
// 0x432d5d0

bool_conflict PatreonEffects_NameEffectPresets__IsLegacyEffect(System_String_o *raw,MethodInfo *method)

{
  uint32_t uVar1;
  bool_conflict bVar2;
  undefined8 *puVar3;
  
  if (g_data_057ae058 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Wave");
    il2cpp_runtime_helper_023445d0(&"GradientScroll");
    il2cpp_runtime_helper_023445d0(&"Toxic");
    il2cpp_runtime_helper_023445d0(&"Electric");
    il2cpp_runtime_helper_023445d0(&"Frost");
    il2cpp_runtime_helper_023445d0(&"Cosmic");
    il2cpp_runtime_helper_023445d0(&"Matrix");
    il2cpp_runtime_helper_023445d0(&"AnimatedOutline");
    il2cpp_runtime_helper_023445d0(&"CRT");
    il2cpp_runtime_helper_023445d0(&"Ember");
    il2cpp_runtime_helper_023445d0(&"Sparkle");
    g_data_057ae058 = '\x01';
  }
  uVar1 = _PrivateImplementationDetails___ComputeStringHash(raw,(MethodInfo *)0x0);
  if (uVar1 < 0x73ce5e6e) {
    if (uVar1 < 0x2c96ccf5) {
      if (uVar1 == 0x58972d5) {
        puVar3 = &"Sparkle";
      }
      else {
        if (uVar1 != 0x2c96ccf4) {
          return 0;
        }
        puVar3 = &"Wave";
      }
    }
    else if (uVar1 == 0x5b778507) {
      puVar3 = &"Cosmic";
    }
    else if (uVar1 == 0x624dcb4c) {
      puVar3 = (undefined8 *)&"GradientScroll";
    }
    else {
      if (uVar1 != 0x73ce5e6d) {
        return 0;
      }
      puVar3 = &"Frost";
    }
  }
  else if (uVar1 < 0x9ce98adb) {
    if (uVar1 == 0x8568fbde) {
      puVar3 = &"Electric";
    }
    else if (uVar1 == 0x9ce98ada) {
      puVar3 = &"AnimatedOutline";
    }
    else {
      if (uVar1 != 0x771f5d5c) {
        return 0;
      }
      puVar3 = &"CRT";
    }
  }
  else if (uVar1 == 0xbf0f8b8c) {
    puVar3 = &"Toxic";
  }
  else if (uVar1 == 0xd2c95de4) {
    puVar3 = &"Ember";
  }
  else {
    if (uVar1 != 0xe9d1810c) {
      return 0;
    }
    puVar3 = &"Matrix";
  }
  bVar2 = System_String__op_Equality(raw,(System_String_o *)*puVar3,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    return 0;
  }
  return (bool_conflict)CONCAT71((uint7)(uint3)((uint)bVar2 >> 8),1);
}


