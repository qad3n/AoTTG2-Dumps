// Type: Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgNameStyleChoicePreview.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$ConfigureDisabled
// il2cpp: void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureDisabled (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o* __this, const MethodInfo* method);
// 0x450acd0

void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureDisabled
               (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *__this,MethodInfo *method)

{
  float *pfVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  Il2CppMethodPointer vtableDispatch;
  Il2CppRuntimeInterfaceOffsetPair *pIVar8;
  TMPro_TMP_Text_c *pTVar9;
  System_Threading_CancellationTokenSource_o *pSVar10;
  UnityEngine_RectTransform_o *pUVar11;
  bool_conflict bVar12;
  uint uVar13;
  undefined4 uVar14;
  int iVar15;
  bool_conflict bVar16;
  uint uVar17;
  TMPro_TMP_Text_o *pTVar18;
  TMPro_TMP_Text_o *pTVar19;
  TMPro_TMP_Text_o *pTVar20;
  UnityEngine_Color_array *colors;
  VirtualInvokeData *pVVar21;
  UnityEngine_Color32_Fields UVar22;
  TMPro_TMP_Text_o *pTVar23;
  UnityEngine_GameObject_o *__this_00;
  Il2CppObject *pIVar24;
  PatreonEffects_NameEffectSettings_o *settings;
  TMPro_TMP_Text_c *in_RCX;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  undefined8 extraout_RDX_00;
  TMPro_TMP_Text_o *extraout_RDX_01;
  TMPro_TMP_Text_o *extraout_RDX_02;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *pMVar25;
  TMPro_TMP_Text_o *__this_01;
  TMPro_TMP_Text_o **ppTVar26;
  long *unaff_RBP;
  MethodInfo *pMVar27;
  UnityEngine_Color32_o value;
  TMPro_TMP_Text_c *pTVar28;
  MethodInfo *method_01;
  UnityEngine_Color32_Fields value_00;
  long *plVar29;
  long lVar30;
  undefined1 *unaff_R12;
  float fVar31;
  undefined8 uVar32;
  float fVar33;
  float in_XMM1_Da;
  float fVar34;
  float in_XMM1_Db;
  float fVar35;
  undefined1 auVar36 [16];
  TMPro_TMP_Text_o *pTStack_100;
  TMPro_TMP_Text_o *pTStack_f8;
  TMPro_TMP_Text_o *pTStack_f0;
  TMPro_TMP_Text_o *pTStack_e8;
  TMPro_TMP_Text_o *pTStack_e0;
  MethodInfo *pMStack_d8;
  TMPro_TMP_Text_o *pTStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  TMPro_TMP_Text_o *pTStack_b8;
  undefined1 *puStack_b0;
  UnityEngine_Color32_Fields UStack_a8;
  TMPro_TMP_Text_o *pTStack_a0;
  undefined1 auStack_98 [24];
  TMPro_TMP_Text_o *pTStack_80;
  
  if (g_data_057aed56 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameFontCatalog);
    il2cpp_runtime_helper_023445d0(&"Normal");
    g_data_057aed56 = '\x01';
    in_RDX = extraout_RDX;
  }
  UVar22 = "Normal";
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ResetPlainVisuals
            (__this,(System_String_o *)"Normal",in_RDX);
  pTVar18 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,(MethodInfo *)UVar22);
  if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  UVar22 = "Normal";
  PatreonEffects_NameFontCatalog__Apply(pTVar18,(System_String_o *)"Normal",(MethodInfo *)0x0);
  pTVar18 = (TMPro_TMP_Text_o *)__this;
  pTVar19 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,(MethodInfo *)UVar22);
  if (pTVar19 != (TMPro_TMP_Text_o *)0x0) {
    in_RCX = pTVar19->klass;
    UVar22 = (UnityEngine_Color32_Fields)(in_RCX->vtable)._23_set_color.method;
    in_XMM1_Da = 0.58;
    in_XMM1_Db = 1.0;
    (*(in_RCX->vtable)._23_set_color.methodPtr)(0x3f147ae1,pTVar19);
    pTVar19 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,(MethodInfo *)UVar22);
    pTVar18 = (TMPro_TMP_Text_o *)__this;
    pTVar20 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,(MethodInfo *)UVar22);
    if (pTVar20 != (TMPro_TMP_Text_o *)0x0) {
      in_RCX = pTVar20->klass;
      UVar22 = (UnityEngine_Color32_Fields)(in_RCX->vtable)._22_get_color.method;
      (*(in_RCX->vtable)._22_get_color.methodPtr)();
      pTVar18 = (TMPro_TMP_Text_o *)0x0;
      uVar13 = il2cpp_runtime_helper_03b428b0();
      if (pTVar19 != (TMPro_TMP_Text_o *)0x0) {
        UVar22.r = '\0';
        UVar22.g = '\0';
        UVar22.b = '\0';
        UVar22.a = '\0';
        UVar22.rgba = uVar13;
        TMPro_TMP_Text__set_faceColor(pTVar19,(UnityEngine_Color32_o)UVar22,(MethodInfo *)0x0);
        pTVar19 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,(MethodInfo *)UVar22);
        pTVar18 = (TMPro_TMP_Text_o *)__this;
        if (pTVar19 != (TMPro_TMP_Text_o *)0x0) {
          vtableDispatch = (pTVar19->klass->vtable)._106_ForceMeshUpdate.methodPtr;
          (*vtableDispatch)
                    (pTVar19,0,0,(pTVar19->klass->vtable)._106_ForceMeshUpdate.method,vtableDispatch);
          return;
        }
      }
    }
  }
  uVar32 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed58 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color);
    g_data_057aed58 = '\x01';
  }
  pMVar27 = (MethodInfo *)0x2;
  pTVar19 = TypeInfo_Color;
  colors = (UnityEngine_Color_array *)il2cpp_runtime_helper_022b2a40();
  if (colors != (UnityEngine_Color_array *)0x0) {
    uVar13 = (uint)colors->max_length;
    in_RCX = (TMPro_TMP_Text_c *)(ulong)uVar13;
    if (uVar13 != 0) {
      colors->m_Items[0].fields.r = (float)(int)uVar32;
      colors->m_Items[0].fields.g = (float)(int)((ulong)uVar32 >> 0x20);
      colors->m_Items[0].fields.b = in_XMM1_Da;
      colors->m_Items[0].fields.a = in_XMM1_Db;
      if (uVar13 != 1) {
        colors->m_Items[1].fields.r = (float)(int)uVar32;
        colors->m_Items[1].fields.g = (float)(int)((ulong)uVar32 >> 0x20);
        colors->m_Items[1].fields.b = in_XMM1_Da;
        colors->m_Items[1].fields.a = in_XMM1_Db;
        Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureGradient
                  ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pTVar18,colors,
                   (System_String_o *)UVar22,(MethodInfo *)in_RCX);
        return;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar25 = (MethodInfo *)auStack_98;
  plVar29 = (long *)pTVar19;
  pTStack_80 = pTVar18;
  if (g_data_057aed54 == '\0') {
    pTStack_a0 = (TMPro_TMP_Text_o *)0x450aea6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterStyleChoicePreview);
    pTStack_a0 = (TMPro_TMP_Text_o *)0x450aeb2;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color);
    pTStack_a0 = (TMPro_TMP_Text_o *)0x450aebe;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ICollection_string);
    plVar29 = &TypeInfo_IList_string;
    pTStack_a0 = (TMPro_TMP_Text_o *)0x450aeca;
    il2cpp_runtime_helper_023445d0();
    g_data_057aed54 = '\x01';
  }
  if (pTVar19 != (TMPro_TMP_Text_o *)0x0) {
    pTVar28 = pTVar19->klass;
    uVar3._0_1_ = (pTVar28->_2).rank;
    uVar3._1_1_ = (pTVar28->_2).minimumAlignment;
    if ((ulong)uVar3 != 0) {
      pIVar8 = (pTVar28->_1).interfaceOffsets;
      lVar30 = 0;
      do {
        if (*(long *)((long)&pIVar8->interfaceType + lVar30) == TypeInfo_ICollection_string) {
          pVVar21 = &(pTVar28->vtable)._0_Equals + *(int *)((long)&pIVar8->offset + lVar30);
          goto label_0450af31;
        }
        lVar30 = lVar30 + 0x10;
      } while ((ulong)uVar3 << 4 != lVar30);
    }
    pTStack_a0 = (TMPro_TMP_Text_o *)0x450af19;
    pVVar21 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pTVar19,TypeInfo_ICollection_string,0);
label_0450af31:
    pTStack_a0 = (TMPro_TMP_Text_o *)0x450af3a;
    uVar14 = (*pVVar21->methodPtr)(pTVar19,pVVar21->method);
    pTStack_a0 = (TMPro_TMP_Text_o *)0x450af4b;
    UVar22 = (UnityEngine_Color32_Fields)il2cpp_runtime_helper_022b2a40(TypeInfo_Color,uVar14);
    if (UVar22 != (UnityEngine_Color32_Fields)0x0) {
      pTVar28 = (TMPro_TMP_Text_c *)0x0;
      unaff_RBP = &TypeInfo_AottgCharacterStyleChoicePreview;
      do {
        pTVar9 = pTVar19->klass;
        uVar4._0_1_ = (pTVar9->_2).rank;
        uVar4._1_1_ = (pTVar9->_2).minimumAlignment;
        if ((ulong)uVar4 != 0) {
          pIVar8 = (pTVar9->_1).interfaceOffsets;
          lVar30 = 0;
          do {
            if (*(long *)((long)&pIVar8->interfaceType + lVar30) == TypeInfo_ICollection_string) {
              pVVar21 = &(pTVar9->vtable)._0_Equals + *(int *)((long)&pIVar8->offset + lVar30);
              goto label_0450aff3;
            }
            lVar30 = lVar30 + 0x10;
          } while ((ulong)uVar4 << 4 != lVar30);
        }
        pTStack_a0 = (TMPro_TMP_Text_o *)0x450afd9;
        pVVar21 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pTVar19,TypeInfo_ICollection_string,0);
label_0450aff3:
        pTStack_a0 = (TMPro_TMP_Text_o *)0x450affc;
        iVar15 = (*pVVar21->methodPtr)(pTVar19,pVVar21->method);
        if ((long)iVar15 <= (long)pTVar28) {
          return;
        }
        pTVar9 = pTVar19->klass;
        uVar5._0_1_ = (pTVar9->_2).rank;
        uVar5._1_1_ = (pTVar9->_2).minimumAlignment;
        if ((ulong)uVar5 != 0) {
          pIVar8 = (pTVar9->_1).interfaceOffsets;
          lVar30 = 0;
          do {
            if (*(long *)((long)&pIVar8->interfaceType + lVar30) == TypeInfo_IList_string) {
              pVVar21 = &(pTVar9->vtable)._0_Equals + *(int *)((long)&pIVar8->offset + lVar30);
              goto label_0450b063;
            }
            lVar30 = lVar30 + 0x10;
          } while ((ulong)uVar5 << 4 != lVar30);
        }
        pTStack_a0 = (TMPro_TMP_Text_o *)0x450b049;
        pVVar21 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pTVar19,TypeInfo_IList_string,0);
label_0450b063:
        pTStack_a0 = (TMPro_TMP_Text_o *)0x450b06f;
        pTVar18 = (TMPro_TMP_Text_o *)
                  (*pVVar21->methodPtr)(pTVar19,(ulong)pTVar28 & 0xffffffff,pVVar21->method);
        if (*(int *)(TypeInfo_AottgCharacterStyleChoicePreview + 0xe4) == 0) {
          pTStack_a0 = (TMPro_TMP_Text_o *)0x450b084;
          il2cpp_runtime_helper_02337ed0();
        }
        auStack_98._0_8_ = (Il2CppMethodPointer)0x0;
        auStack_98._8_8_ = (Il2CppMethodPointer)0x0;
        pTStack_a0 = (TMPro_TMP_Text_o *)0x450b098;
        pMVar25 = (MethodInfo *)auStack_98;
        plVar29 = (long *)pTVar18;
        bVar16 = UnityEngine_ColorUtility__TryParseHtmlString
                           ((System_String_o *)pTVar18,(UnityEngine_Color_o *)auStack_98,(MethodInfo *)0x0);
        in_RCX = (TMPro_TMP_Text_c *)(ulong)*(uint *)((long)UVar22 + 0x18);
        unaff_R12 = auStack_98;
        if (in_RCX <= pTVar28) goto label_0450b1e2;
        if ((char)bVar16 == '\0') {
          fVar31 = 1.0;
          fVar33 = 1.0;
          fVar34 = fVar31;
          fVar35 = fVar33;
        }
        else {
          fVar31 = (float)auStack_98._0_8_;
          fVar33 = SUB84(auStack_98._0_8_,4);
          fVar34 = (float)auStack_98._8_8_;
          fVar35 = SUB84(auStack_98._8_8_,4);
        }
        pfVar1 = (float *)((long)UVar22 + 0x20 + (long)pTVar28 * 0x10);
        *pfVar1 = fVar31;
        pfVar1[1] = fVar33;
        pfVar1[2] = fVar34;
        pfVar1[3] = fVar35;
        pTVar28 = (TMPro_TMP_Text_c *)((long)&(pTVar28->_1).image + 1);
      } while( true );
    }
    pTVar28 = pTVar19->klass;
    uVar6._0_1_ = (pTVar28->_2).rank;
    uVar6._1_1_ = (pTVar28->_2).minimumAlignment;
    if ((ulong)uVar6 != 0) {
      pIVar8 = (pTVar28->_1).interfaceOffsets;
      lVar30 = 0;
      do {
        if (*(long *)((long)&pIVar8->interfaceType + lVar30) == TypeInfo_ICollection_string) {
          pVVar21 = &(pTVar28->vtable)._0_Equals + *(int *)((long)&pIVar8->offset + lVar30);
          goto label_0450b121;
        }
        lVar30 = lVar30 + 0x10;
      } while ((ulong)uVar6 << 4 != lVar30);
    }
    pTStack_a0 = (TMPro_TMP_Text_o *)0x450b109;
    pVVar21 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pTVar19,TypeInfo_ICollection_string,0);
label_0450b121:
    pTStack_a0 = (TMPro_TMP_Text_o *)0x450b12a;
    iVar15 = (*pVVar21->methodPtr)(pTVar19,pVVar21->method);
    if (iVar15 < 1) {
      return;
    }
    pTVar28 = pTVar19->klass;
    uVar7._0_1_ = (pTVar28->_2).rank;
    uVar7._1_1_ = (pTVar28->_2).minimumAlignment;
    if ((ulong)uVar7 != 0) {
      pIVar8 = (pTVar28->_1).interfaceOffsets;
      lVar30 = 0;
      do {
        if (*(long *)((long)&pIVar8->interfaceType + lVar30) == TypeInfo_IList_string) {
          in_RCX = (TMPro_TMP_Text_c *)
                   (&(pTVar28->vtable)._0_Equals + *(int *)((long)&pIVar8->offset + lVar30));
          goto label_0450b1a3;
        }
        lVar30 = lVar30 + 0x10;
      } while ((ulong)uVar7 << 4 != lVar30);
    }
    pTStack_a0 = (TMPro_TMP_Text_o *)0x450b179;
    in_RCX = (TMPro_TMP_Text_c *)il2cpp_runtime_helper_02300d20(pTVar19,TypeInfo_IList_string,0);
label_0450b1a3:
    pTStack_a0 = (TMPro_TMP_Text_o *)0x450b1ae;
    pTVar18 = (TMPro_TMP_Text_o *)(*(in_RCX->_1).image)(pTVar19,0,(in_RCX->_1).gc_desc);
    if (*(int *)(TypeInfo_AottgCharacterStyleChoicePreview + 0xe4) == 0) {
      pTStack_a0 = (TMPro_TMP_Text_o *)0x450b1c9;
      il2cpp_runtime_helper_02337ed0();
    }
    auStack_98._0_8_ = (Il2CppMethodPointer)0x0;
    auStack_98._8_8_ = (Il2CppMethodPointer)0x0;
    pTStack_a0 = (TMPro_TMP_Text_o *)0x450b1dd;
    plVar29 = (long *)pTVar18;
    UnityEngine_ColorUtility__TryParseHtmlString
              ((System_String_o *)pTVar18,(UnityEngine_Color_o *)auStack_98,(MethodInfo *)0x0);
    pTStack_a0 = (TMPro_TMP_Text_o *)0x450b1e2;
    il2cpp_runtime_helper_022b2c90();
label_0450b1e2:
    pTStack_a0 = (TMPro_TMP_Text_o *)0x450b1e7;
    il2cpp_runtime_helper_022b2ca0();
    pMVar27 = pMVar25;
  }
  pTStack_a0 = (TMPro_TMP_Text_o *)0x450b1ec;
  auVar36 = il2cpp_runtime_helper_022b2c90();
  pTVar20 = auVar36._8_8_;
  uStack_c0 = auVar36._0_8_;
  pTStack_b8 = pTVar18;
  puStack_b0 = unaff_R12;
  UStack_a8 = UVar22;
  pTStack_a0 = pTVar19;
  if (g_data_057aed59 == '\0') {
    plStack_c8 = (long *)0x450b216;
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameFontCatalog);
    auVar36._8_8_ = extraout_RDX_00;
    auVar36._0_8_ = uStack_c0;
    g_data_057aed59 = '\x01';
  }
  uStack_c0 = auVar36._0_8_;
  plStack_c8 = (long *)0x450b228;
  pTVar18 = pTVar20;
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ResetPlainVisuals
            ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)plVar29,(System_String_o *)pTVar20,
             auVar36._8_8_);
  plStack_c8 = (long *)0x450b230;
  pTVar18 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                      ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)plVar29,(MethodInfo *)pTVar18);
  if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
    plStack_c8 = (long *)0x450b24b;
    il2cpp_runtime_helper_02337ed0();
  }
  plStack_c8 = (long *)0x450b258;
  pTVar19 = pTVar20;
  PatreonEffects_NameFontCatalog__Apply(pTVar18,(System_String_o *)pTVar20,(MethodInfo *)0x0);
  plStack_c8 = (long *)0x450b260;
  __this_01 = (TMPro_TMP_Text_o *)plVar29;
  pTVar23 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                      ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)plVar29,(MethodInfo *)pTVar19);
  uVar13 = (uint)pTVar19;
  if (pTVar23 != (TMPro_TMP_Text_o *)0x0) {
    in_RCX = pTVar23->klass;
    pMVar25 = (in_RCX->vtable)._23_set_color.method;
    plStack_c8 = (long *)0x450b286;
    (*(in_RCX->vtable)._23_set_color.methodPtr)(0x3f800000,0x3f800000,pTVar23);
    plStack_c8 = (long *)0x450b28e;
    pTVar20 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                        ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)plVar29,pMVar25);
    uVar13 = (uint)pMVar25;
    __this_01 = (TMPro_TMP_Text_o *)0x0;
    plStack_c8 = (long *)0x450b2a2;
    uVar17 = il2cpp_runtime_helper_03b428b0(0x3f800000,0x3f800000);
    if (pTVar20 != (TMPro_TMP_Text_o *)0x0) {
      value.fields.r = '\0';
      value.fields.g = '\0';
      value.fields.b = '\0';
      value.fields.a = '\0';
      value.fields.rgba = uVar17;
      plStack_c8 = (long *)0x450b2b3;
      TMPro_TMP_Text__set_faceColor(pTVar20,value,(MethodInfo *)0x0);
      *(MethodInfo **)&(((TMPro_TMP_Text_o *)plVar29)->fields).m_Color.fields.b = pMVar27;
      plStack_c8 = (long *)0x450b2c3;
      pMVar25 = pMVar27;
      il2cpp_runtime_helper_022b4080(&(((TMPro_TMP_Text_o *)plVar29)->fields).m_Color.fields.b);
      plStack_c8 = (long *)0x450b2cb;
      Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__HookVertexColors
                ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)plVar29,pMVar25);
      plStack_c8 = (long *)0x450b2d3;
      __this_01 = (TMPro_TMP_Text_o *)plVar29;
      pTVar19 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                          ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)plVar29,pMVar25);
      uVar13 = (uint)pMVar25;
      if (pTVar19 != (TMPro_TMP_Text_o *)0x0) {
        vtableDispatch = (pTVar19->klass->vtable)._106_ForceMeshUpdate.methodPtr;
        (*vtableDispatch)
                  (pTVar19,0,0,(pTVar19->klass->vtable)._106_ForceMeshUpdate.method,vtableDispatch);
        return;
      }
    }
  }
  plStack_c8 = (long *)0x450b303;
  il2cpp_runtime_helper_022b2c90();
  pTVar23 = (TMPro_TMP_Text_o *)(ulong)uVar13;
  pTVar19 = extraout_RDX_01;
  pTStack_e8 = (TMPro_TMP_Text_o *)plVar29;
  pTStack_e0 = pTVar18;
  pMStack_d8 = pMVar27;
  pTStack_d0 = pTVar20;
  plStack_c8 = unaff_RBP;
  if (g_data_057aed5a == '\0') {
    pTStack_f0 = (TMPro_TMP_Text_o *)0x450b339;
    il2cpp_runtime_helper_023445d0(&MethodInfo_NameEffectController_AddComponent_NameEffectController);
    pTStack_f0 = (TMPro_TMP_Text_o *)0x450b345;
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameFontCatalog);
    g_data_057aed5a = '\x01';
    pTVar19 = extraout_RDX_02;
  }
  pTStack_f0 = (TMPro_TMP_Text_o *)0x450b357;
  pTVar28 = in_RCX;
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ResetPlainVisuals
            ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)__this_01,(System_String_o *)in_RCX,
             (MethodInfo *)pTVar19);
  pTStack_f0 = (TMPro_TMP_Text_o *)0x450b35f;
  pTVar18 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                      ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)__this_01,(MethodInfo *)pTVar28
                      );
  if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
    pTStack_f0 = (TMPro_TMP_Text_o *)0x450b37a;
    il2cpp_runtime_helper_02337ed0();
  }
  pTStack_f0 = (TMPro_TMP_Text_o *)0x450b387;
  PatreonEffects_NameFontCatalog__Apply(pTVar18,(System_String_o *)in_RCX,(MethodInfo *)0x0);
  pTStack_f0 = (TMPro_TMP_Text_o *)0x450b38f;
  pTVar18 = __this_01;
  pTVar19 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                      ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)__this_01,(MethodInfo *)in_RCX)
  ;
  if (pTVar19 == (TMPro_TMP_Text_o *)0x0) {
label_0450b444:
    pTStack_f0 = (TMPro_TMP_Text_o *)0x450b449;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    in_RCX = (TMPro_TMP_Text_c *)0x0;
    pTStack_f0 = (TMPro_TMP_Text_o *)0x450b3a2;
    __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pTVar19,(MethodInfo *)0x0);
    pTVar18 = pTVar19;
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_0450b444;
    pTStack_f0 = (TMPro_TMP_Text_o *)0x450b3bd;
    pIVar24 = UnityEngine_GameObject__AddComponent_object_(__this_00,MethodInfo_NameEffectController_AddComponent_NameEffectController);
    *(Il2CppObject **)&(__this_01->fields).m_Color.fields = pIVar24;
    __this_01 = (TMPro_TMP_Text_o *)&(__this_01->fields).m_Color;
    pTStack_f0 = (TMPro_TMP_Text_o *)0x450b3d0;
    il2cpp_runtime_helper_022b4080(__this_01);
    in_RCX = (TMPro_TMP_Text_c *)0x0;
    pTStack_f0 = (TMPro_TMP_Text_o *)0x450b3da;
    pTVar18 = pTVar23;
    settings = PatreonEffects_NameEffectPresets__GetPreset(uVar13,(MethodInfo *)0x0);
    if (extraout_RDX_01 == (TMPro_TMP_Text_o *)0x0) goto label_0450b444;
    pSVar10 = (extraout_RDX_01->fields).m_CancellationTokenSource;
    if (pSVar10 == (System_Threading_CancellationTokenSource_o *)0x0) {
label_0450b42a:
      pTVar18 = (TMPro_TMP_Text_o *)0x0;
      if (*(PatreonEffects_NameEffectController_o **)&((UnityEngine_Color_o *)__this_01)->fields !=
          (PatreonEffects_NameEffectController_o *)0x0) {
        PatreonEffects_NameEffectController__Apply
                  (*(PatreonEffects_NameEffectController_o **)&((UnityEngine_Color_o *)__this_01)->fields,
                   settings,(MethodInfo *)0x0);
        return;
      }
      goto label_0450b444;
    }
    if ((int)pSVar10 != 0) {
      if (settings == (PatreonEffects_NameEffectSettings_o *)0x0) goto label_0450b444;
      fVar31 = (extraout_RDX_01->fields).m_Color.fields.r;
      fVar33 = (extraout_RDX_01->fields).m_Color.fields.g;
      *(UnityEngine_Material_o **)&(settings->fields).gradientA.fields = (extraout_RDX_01->fields).m_Material;
      (settings->fields).gradientA.fields.b = fVar31;
      (settings->fields).gradientA.fields.a = fVar33;
      if (1 < *(int *)&(extraout_RDX_01->fields).m_CancellationTokenSource) {
        fVar31 = (extraout_RDX_01->fields).m_Color.fields.a;
        bVar16 = (extraout_RDX_01->fields).m_SkipLayoutUpdate;
        bVar12 = (extraout_RDX_01->fields).m_SkipMaterialUpdate;
        (settings->fields).gradientB.fields.r = (extraout_RDX_01->fields).m_Color.fields.b;
        (settings->fields).gradientB.fields.g = fVar31;
        (settings->fields).gradientB.fields.b = (float)bVar16;
        (settings->fields).gradientB.fields.a = (float)bVar12;
        if (2 < *(int *)&(extraout_RDX_01->fields).m_CancellationTokenSource) {
          bVar16 = (extraout_RDX_01->fields).m_RaycastTargetCache;
          fVar31 = (extraout_RDX_01->fields).m_RaycastPadding.fields.x;
          fVar33 = (extraout_RDX_01->fields).m_RaycastPadding.fields.y;
          (settings->fields).gradientC.fields.r = (float)(extraout_RDX_01->fields).m_RaycastTarget;
          (settings->fields).gradientC.fields.g = (float)bVar16;
          (settings->fields).gradientC.fields.b = fVar31;
          (settings->fields).gradientC.fields.a = fVar33;
          if (3 < *(int *)&(extraout_RDX_01->fields).m_CancellationTokenSource) {
            fVar31 = (extraout_RDX_01->fields).m_RaycastPadding.fields.w;
            pUVar11 = (extraout_RDX_01->fields).m_RectTransform;
            (settings->fields).gradientD.fields.r = (extraout_RDX_01->fields).m_RaycastPadding.fields.z;
            (settings->fields).gradientD.fields.g = fVar31;
            *(UnityEngine_RectTransform_o **)&(settings->fields).gradientD.fields.b = pUVar11;
          }
        }
      }
      goto label_0450b42a;
    }
  }
  pTStack_f0 = (TMPro_TMP_Text_o *)0x450b44e;
  il2cpp_runtime_helper_022b2ca0();
  ppTVar26 = &pTStack_100;
  pTStack_100 = __this_01;
  pTStack_f8 = extraout_RDX_01;
  pTStack_f0 = pTVar23;
  if (g_data_057aed50 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterStyleChoicePreview);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed50 = '\x01';
  }
  plVar29 = &TypeInfo_AottgCharacterStyleChoicePreview;
  if (*(int *)(TypeInfo_AottgCharacterStyleChoicePreview + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pTVar19 = (TMPro_TMP_Text_o *)
            Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__Preview
                      ((Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *)pTVar18,
                       (MethodInfo *)in_RCX);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar27 = (MethodInfo *)0x0;
  bVar16 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pTVar19,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar16 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_AottgCharacterStyleChoicePreview + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pTVar20 = pTVar18;
  Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__ApplyDarkSurface
            ((Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *)pTVar18,pMVar27);
  if (pTVar18 != (TMPro_TMP_Text_o *)0x0) {
    bVar2 = (byte)(pTVar18->fields).m_SkipMaterialUpdate;
    pMVar27 = (MethodInfo *)(ulong)bVar2;
    pTVar20 = pTVar18;
    Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__SetFeedback
              ((Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *)pTVar18,(uint)bVar2,method_00)
    ;
    if ((char)(pTVar18->fields).m_SkipMaterialUpdate == '\0') {
      if (pTVar19 != (TMPro_TMP_Text_o *)0x0) {
        Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureDisabled
                  ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pTVar19,pMVar27);
        return;
      }
    }
    else if (pTVar19 != (TMPro_TMP_Text_o *)0x0) {
      pMVar27 = *(MethodInfo **)&(pTVar18->fields).m_Color.fields.b;
      pMVar25 = extraout_RDX_03;
      pTVar18 = pTStack_100;
      ppTVar26 = &pTStack_e8;
      pTVar20 = pTVar19;
      pTVar19 = pTStack_f8;
      plVar29 = (long *)pTStack_f0;
      goto Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureFont;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar25 = extraout_RDX_04;
Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureFont:
  *(long **)((long)ppTVar26 + -8) = plVar29;
  *(TMPro_TMP_Text_o **)((long)ppTVar26 + -0x10) = pTVar19;
  *(TMPro_TMP_Text_o **)((long)ppTVar26 + -0x18) = pTVar18;
  if (g_data_057aed57 == '\0') {
    *(undefined8 *)((long)ppTVar26 + -0x20) = 0x450b550;
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameFontCatalog);
    g_data_057aed57 = '\x01';
    pMVar25 = extraout_RDX_05;
  }
  *(undefined8 *)((long)ppTVar26 + -0x20) = 0x450b562;
  method_01 = pMVar27;
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ResetPlainVisuals
            ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pTVar20,(System_String_o *)pMVar27,
             pMVar25);
  *(undefined8 *)((long)ppTVar26 + -0x20) = 0x450b56a;
  pTVar18 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                      ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pTVar20,method_01);
  if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
    *(undefined8 *)((long)ppTVar26 + -0x20) = 0x450b585;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)ppTVar26 + -0x20) = 0x450b592;
  PatreonEffects_NameFontCatalog__Apply(pTVar18,(System_String_o *)pMVar27,(MethodInfo *)0x0);
  *(undefined8 *)((long)ppTVar26 + -0x20) = 0x450b59a;
  pTVar18 = pTVar20;
  pTVar19 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                      ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pTVar20,pMVar27);
  if (pTVar19 != (TMPro_TMP_Text_o *)0x0) {
    pMVar27 = (pTVar19->klass->vtable)._23_set_color.method;
    vtableDispatch = (pTVar19->klass->vtable)._23_set_color.methodPtr;
    *(undefined8 *)((long)ppTVar26 + -0x20) = 0x450b5bc;
    (*vtableDispatch)(0x3f800000,0x3f800000,pTVar19);
    *(undefined8 *)((long)ppTVar26 + -0x20) = 0x450b5c4;
    pTVar19 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                        ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pTVar20,pMVar27);
    pTVar18 = (TMPro_TMP_Text_o *)0x0;
    *(undefined8 *)((long)ppTVar26 + -0x20) = 0x450b5d8;
    uVar13 = il2cpp_runtime_helper_03b428b0(0x3f800000,0x3f800000);
    if (pTVar19 != (TMPro_TMP_Text_o *)0x0) {
      value_00.r = '\0';
      value_00.g = '\0';
      value_00.b = '\0';
      value_00.a = '\0';
      value_00.rgba = uVar13;
      *(undefined8 *)((long)ppTVar26 + -0x20) = 0x450b5e9;
      TMPro_TMP_Text__set_faceColor(pTVar19,(UnityEngine_Color32_o)value_00,(MethodInfo *)0x0);
      *(undefined8 *)((long)ppTVar26 + -0x20) = 0x450b5f1;
      pTVar19 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                          ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pTVar20,
                           (MethodInfo *)value_00);
      pTVar18 = pTVar20;
      if (pTVar19 != (TMPro_TMP_Text_o *)0x0) {
        vtableDispatch = (pTVar19->klass->vtable)._106_ForceMeshUpdate.methodPtr;
        (*vtableDispatch)
                  (pTVar19,0,0,(pTVar19->klass->vtable)._106_ForceMeshUpdate.method,vtableDispatch);
        return;
      }
    }
  }
  *(undefined8 *)((long)ppTVar26 + -0x20) = 0x450b61b;
  il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)((long)ppTVar26 + -0x30) = 0;
  *(undefined8 *)((long)ppTVar26 + -0x28) = 0;
  *(undefined8 *)((long)ppTVar26 + -0x38) = 0x450b635;
  bVar16 = UnityEngine_ColorUtility__TryParseHtmlString
                     ((System_String_o *)pTVar18,(UnityEngine_Color_o *)((long)ppTVar26 + -0x30),
                      (MethodInfo *)0x0);
  if ((char)bVar16 != '\0') {
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$ConfigureFont
// il2cpp: void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureFont (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o* __this, System_String_o* font, const MethodInfo* method);
// 0x450b530

void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureFont
               (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *__this,System_String_o *font,
               MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  uint uVar1;
  bool_conflict bVar2;
  TMPro_TMP_Text_o *pTVar3;
  MethodInfo *extraout_RDX;
  MethodInfo *pMVar4;
  UnityEngine_Color32_Fields value;
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *htmlString;
  UnityEngine_Color_Fields UStack_30;
  undefined8 uStack_20;
  
  if (g_data_057aed57 == '\0') {
    uStack_20 = 0x450b550;
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameFontCatalog);
    g_data_057aed57 = '\x01';
    method = extraout_RDX;
  }
  uStack_20 = 0x450b562;
  pMVar4 = (MethodInfo *)font;
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ResetPlainVisuals(__this,font,method);
  uStack_20 = 0x450b56a;
  pTVar3 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,pMVar4);
  if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
    uStack_20 = 0x450b585;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_20 = 0x450b592;
  PatreonEffects_NameFontCatalog__Apply(pTVar3,font,(MethodInfo *)0x0);
  uStack_20 = 0x450b59a;
  htmlString = __this;
  pTVar3 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,(MethodInfo *)font);
  if (pTVar3 != (TMPro_TMP_Text_o *)0x0) {
    pMVar4 = (pTVar3->klass->vtable)._23_set_color.method;
    uStack_20 = 0x450b5bc;
    (*(pTVar3->klass->vtable)._23_set_color.methodPtr)(0x3f800000,0x3f8000003f800000,pTVar3);
    uStack_20 = 0x450b5c4;
    pTVar3 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,pMVar4);
    htmlString = (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)0x0;
    uStack_20 = 0x450b5d8;
    uVar1 = il2cpp_runtime_helper_03b428b0(0x3f800000,0x3f8000003f800000);
    if (pTVar3 != (TMPro_TMP_Text_o *)0x0) {
      value.r = '\0';
      value.g = '\0';
      value.b = '\0';
      value.a = '\0';
      value.rgba = uVar1;
      uStack_20 = 0x450b5e9;
      TMPro_TMP_Text__set_faceColor(pTVar3,(UnityEngine_Color32_o)value,(MethodInfo *)0x0);
      uStack_20 = 0x450b5f1;
      pTVar3 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,(MethodInfo *)value);
      htmlString = __this;
      if (pTVar3 != (TMPro_TMP_Text_o *)0x0) {
        vtableDispatch = (pTVar3->klass->vtable)._106_ForceMeshUpdate.methodPtr;
        (*vtableDispatch)
                  (pTVar3,0,0,(pTVar3->klass->vtable)._106_ForceMeshUpdate.method,vtableDispatch);
        return;
      }
    }
  }
  uStack_20 = 0x450b61b;
  il2cpp_runtime_helper_022b2c90();
  UStack_30.r = 0.0;
  UStack_30.g = 0.0;
  UStack_30.b = 0.0;
  UStack_30.a = 0.0;
  bVar2 = UnityEngine_ColorUtility__TryParseHtmlString
                    ((System_String_o *)htmlString,(UnityEngine_Color_o *)&UStack_30,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$ConfigureSolid
// il2cpp: void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureSolid (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o* __this, UnityEngine_Color_o color, System_String_o* font, const MethodInfo* method);
// 0x450adf0

void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureSolid
               (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *__this,UnityEngine_Color_o color,
               System_String_o *font,MethodInfo *method)

{
  void **ppvVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  Il2CppRuntimeInterfaceOffsetPair *pIVar8;
  TMPro_TMP_Text_c *pTVar9;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  System_Threading_CancellationTokenSource_o *pSVar10;
  UnityEngine_RectTransform_o *pUVar11;
  bool_conflict bVar12;
  undefined4 uVar13;
  int iVar14;
  bool_conflict bVar15;
  uint uVar16;
  uint uVar17;
  UnityEngine_Color_array *colors;
  VirtualInvokeData *pVVar18;
  TMPro_TMP_Text_o *pTVar19;
  TMPro_TMP_Text_o *pTVar20;
  TMPro_TMP_Text_o *pTVar21;
  TMPro_TMP_Text_o *pTVar22;
  UnityEngine_GameObject_o *__this_00;
  Il2CppObject *pIVar23;
  PatreonEffects_NameEffectSettings_o *settings;
  TMPro_TMP_Text_c *in_RCX;
  MethodInfo *extraout_RDX;
  undefined8 extraout_RDX_00;
  TMPro_TMP_Text_o *extraout_RDX_01;
  TMPro_TMP_Text_o *extraout_RDX_02;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *pMVar24;
  TMPro_TMP_Text_o *__this_01;
  TMPro_TMP_Text_o **ppTVar25;
  long *unaff_RBP;
  MethodInfo *pMVar26;
  UnityEngine_Color32_o value;
  TMPro_TMP_Text_c *pTVar27;
  MethodInfo *method_01;
  UnityEngine_Color32_Fields value_00;
  long *plVar28;
  long lVar29;
  undefined1 *unaff_R12;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar34 [16];
  TMPro_TMP_Text_o *pTStack_e8;
  TMPro_TMP_Text_o *pTStack_e0;
  TMPro_TMP_Text_o *pTStack_d8;
  TMPro_TMP_Text_o *pTStack_d0;
  TMPro_TMP_Text_o *pTStack_c8;
  MethodInfo *pMStack_c0;
  TMPro_TMP_Text_o *pTStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  TMPro_TMP_Text_o *pTStack_a0;
  undefined1 *puStack_98;
  System_String_o *pSStack_90;
  TMPro_TMP_Text_o *pTStack_88;
  undefined1 auStack_80 [24];
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *pGStack_68;
  float fStack_28;
  float fStack_24;
  
  if (g_data_057aed58 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color);
    g_data_057aed58 = '\x01';
    method = extraout_RDX;
  }
  pMVar26 = (MethodInfo *)0x2;
  pTVar19 = TypeInfo_Color;
  colors = (UnityEngine_Color_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Color,2,method);
  if (colors != (UnityEngine_Color_array *)0x0) {
    uVar17 = (uint)colors->max_length;
    in_RCX = (TMPro_TMP_Text_c *)(ulong)uVar17;
    fStack_28 = color.fields.r;
    fStack_24 = color.fields.g;
    if (uVar17 != 0) {
      colors->m_Items[0].fields.r = fStack_28;
      colors->m_Items[0].fields.g = fStack_24;
      colors->m_Items[0].fields.b = color.fields.b;
      colors->m_Items[0].fields.a = color.fields.a;
      if (uVar17 != 1) {
        colors->m_Items[1].fields.r = fStack_28;
        colors->m_Items[1].fields.g = fStack_24;
        colors->m_Items[1].fields.b = color.fields.b;
        colors->m_Items[1].fields.a = color.fields.a;
        Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureGradient
                  (__this,colors,font,(MethodInfo *)in_RCX);
        return;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar24 = (MethodInfo *)auStack_80;
  plVar28 = (long *)pTVar19;
  pGStack_68 = __this;
  if (g_data_057aed54 == '\0') {
    pTStack_88 = (TMPro_TMP_Text_o *)0x450aea6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterStyleChoicePreview);
    pTStack_88 = (TMPro_TMP_Text_o *)0x450aeb2;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color);
    pTStack_88 = (TMPro_TMP_Text_o *)0x450aebe;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ICollection_string);
    plVar28 = &TypeInfo_IList_string;
    pTStack_88 = (TMPro_TMP_Text_o *)0x450aeca;
    il2cpp_runtime_helper_023445d0();
    g_data_057aed54 = '\x01';
  }
  if (pTVar19 != (TMPro_TMP_Text_o *)0x0) {
    pTVar27 = pTVar19->klass;
    uVar3._0_1_ = (pTVar27->_2).rank;
    uVar3._1_1_ = (pTVar27->_2).minimumAlignment;
    if ((ulong)uVar3 != 0) {
      pIVar8 = (pTVar27->_1).interfaceOffsets;
      lVar29 = 0;
      do {
        if (*(long *)((long)&pIVar8->interfaceType + lVar29) == TypeInfo_ICollection_string) {
          pVVar18 = &(pTVar27->vtable)._0_Equals + *(int *)((long)&pIVar8->offset + lVar29);
          goto label_0450af31;
        }
        lVar29 = lVar29 + 0x10;
      } while ((ulong)uVar3 << 4 != lVar29);
    }
    pTStack_88 = (TMPro_TMP_Text_o *)0x450af19;
    pVVar18 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pTVar19,TypeInfo_ICollection_string,0);
label_0450af31:
    pTStack_88 = (TMPro_TMP_Text_o *)0x450af3a;
    uVar13 = (*pVVar18->methodPtr)(pTVar19,pVVar18->method);
    pTStack_88 = (TMPro_TMP_Text_o *)0x450af4b;
    font = (System_String_o *)il2cpp_runtime_helper_022b2a40(TypeInfo_Color,uVar13);
    if (font != (System_String_o *)0x0) {
      pTVar27 = (TMPro_TMP_Text_c *)0x0;
      unaff_RBP = &TypeInfo_AottgCharacterStyleChoicePreview;
      do {
        pTVar9 = pTVar19->klass;
        uVar4._0_1_ = (pTVar9->_2).rank;
        uVar4._1_1_ = (pTVar9->_2).minimumAlignment;
        if ((ulong)uVar4 != 0) {
          pIVar8 = (pTVar9->_1).interfaceOffsets;
          lVar29 = 0;
          do {
            if (*(long *)((long)&pIVar8->interfaceType + lVar29) == TypeInfo_ICollection_string) {
              pVVar18 = &(pTVar9->vtable)._0_Equals + *(int *)((long)&pIVar8->offset + lVar29);
              goto label_0450aff3;
            }
            lVar29 = lVar29 + 0x10;
          } while ((ulong)uVar4 << 4 != lVar29);
        }
        pTStack_88 = (TMPro_TMP_Text_o *)0x450afd9;
        pVVar18 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pTVar19,TypeInfo_ICollection_string,0);
label_0450aff3:
        pTStack_88 = (TMPro_TMP_Text_o *)0x450affc;
        iVar14 = (*pVVar18->methodPtr)(pTVar19,pVVar18->method);
        if ((long)iVar14 <= (long)pTVar27) {
          return;
        }
        pTVar9 = pTVar19->klass;
        uVar5._0_1_ = (pTVar9->_2).rank;
        uVar5._1_1_ = (pTVar9->_2).minimumAlignment;
        if ((ulong)uVar5 != 0) {
          pIVar8 = (pTVar9->_1).interfaceOffsets;
          lVar29 = 0;
          do {
            if (*(long *)((long)&pIVar8->interfaceType + lVar29) == TypeInfo_IList_string) {
              pVVar18 = &(pTVar9->vtable)._0_Equals + *(int *)((long)&pIVar8->offset + lVar29);
              goto label_0450b063;
            }
            lVar29 = lVar29 + 0x10;
          } while ((ulong)uVar5 << 4 != lVar29);
        }
        pTStack_88 = (TMPro_TMP_Text_o *)0x450b049;
        pVVar18 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pTVar19,TypeInfo_IList_string,0);
label_0450b063:
        pTStack_88 = (TMPro_TMP_Text_o *)0x450b06f;
        __this = (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)
                 (*pVVar18->methodPtr)(pTVar19,(ulong)pTVar27 & 0xffffffff,pVVar18->method);
        if (*(int *)(TypeInfo_AottgCharacterStyleChoicePreview + 0xe4) == 0) {
          pTStack_88 = (TMPro_TMP_Text_o *)0x450b084;
          il2cpp_runtime_helper_02337ed0();
        }
        auStack_80._0_8_ = (Il2CppMethodPointer)0x0;
        auStack_80._8_8_ = (Il2CppMethodPointer)0x0;
        pTStack_88 = (TMPro_TMP_Text_o *)0x450b098;
        pMVar24 = (MethodInfo *)auStack_80;
        plVar28 = (long *)__this;
        bVar15 = UnityEngine_ColorUtility__TryParseHtmlString
                           ((System_String_o *)__this,(UnityEngine_Color_o *)auStack_80,(MethodInfo *)0x0);
        in_RCX = (TMPro_TMP_Text_c *)(ulong)*(uint *)&font[1].klass;
        unaff_R12 = auStack_80;
        if (in_RCX <= pTVar27) goto label_0450b1e2;
        if ((char)bVar15 == '\0') {
          fVar30 = 1.0;
          fVar31 = 1.0;
          fVar32 = fVar30;
          fVar33 = fVar31;
        }
        else {
          fVar30 = (float)auStack_80._0_8_;
          fVar31 = SUB84(auStack_80._0_8_,4);
          fVar32 = (float)auStack_80._8_8_;
          fVar33 = SUB84(auStack_80._8_8_,4);
        }
        ppvVar1 = &font[1].monitor + (long)pTVar27 * 2;
        *(float *)ppvVar1 = fVar30;
        *(float *)((long)ppvVar1 + 4) = fVar31;
        ((System_String_Fields *)(ppvVar1 + 1))->_stringLength = (int32_t)fVar32;
        *(float *)((long)ppvVar1 + 0xc) = fVar33;
        pTVar27 = (TMPro_TMP_Text_c *)((long)&(pTVar27->_1).image + 1);
      } while( true );
    }
    pTVar27 = pTVar19->klass;
    uVar6._0_1_ = (pTVar27->_2).rank;
    uVar6._1_1_ = (pTVar27->_2).minimumAlignment;
    if ((ulong)uVar6 != 0) {
      pIVar8 = (pTVar27->_1).interfaceOffsets;
      lVar29 = 0;
      do {
        if (*(long *)((long)&pIVar8->interfaceType + lVar29) == TypeInfo_ICollection_string) {
          pVVar18 = &(pTVar27->vtable)._0_Equals + *(int *)((long)&pIVar8->offset + lVar29);
          goto label_0450b121;
        }
        lVar29 = lVar29 + 0x10;
      } while ((ulong)uVar6 << 4 != lVar29);
    }
    pTStack_88 = (TMPro_TMP_Text_o *)0x450b109;
    pVVar18 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pTVar19,TypeInfo_ICollection_string,0);
label_0450b121:
    pTStack_88 = (TMPro_TMP_Text_o *)0x450b12a;
    iVar14 = (*pVVar18->methodPtr)(pTVar19,pVVar18->method);
    if (iVar14 < 1) {
      return;
    }
    pTVar27 = pTVar19->klass;
    uVar7._0_1_ = (pTVar27->_2).rank;
    uVar7._1_1_ = (pTVar27->_2).minimumAlignment;
    if ((ulong)uVar7 != 0) {
      pIVar8 = (pTVar27->_1).interfaceOffsets;
      lVar29 = 0;
      do {
        if (*(long *)((long)&pIVar8->interfaceType + lVar29) == TypeInfo_IList_string) {
          in_RCX = (TMPro_TMP_Text_c *)
                   (&(pTVar27->vtable)._0_Equals + *(int *)((long)&pIVar8->offset + lVar29));
          goto label_0450b1a3;
        }
        lVar29 = lVar29 + 0x10;
      } while ((ulong)uVar7 << 4 != lVar29);
    }
    pTStack_88 = (TMPro_TMP_Text_o *)0x450b179;
    in_RCX = (TMPro_TMP_Text_c *)il2cpp_runtime_helper_02300d20(pTVar19,TypeInfo_IList_string,0);
label_0450b1a3:
    pTStack_88 = (TMPro_TMP_Text_o *)0x450b1ae;
    __this = (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)
             (*(in_RCX->_1).image)(pTVar19,0,(in_RCX->_1).gc_desc);
    if (*(int *)(TypeInfo_AottgCharacterStyleChoicePreview + 0xe4) == 0) {
      pTStack_88 = (TMPro_TMP_Text_o *)0x450b1c9;
      il2cpp_runtime_helper_02337ed0();
    }
    auStack_80._0_8_ = (Il2CppMethodPointer)0x0;
    auStack_80._8_8_ = (Il2CppMethodPointer)0x0;
    pTStack_88 = (TMPro_TMP_Text_o *)0x450b1dd;
    plVar28 = (long *)__this;
    UnityEngine_ColorUtility__TryParseHtmlString
              ((System_String_o *)__this,(UnityEngine_Color_o *)auStack_80,(MethodInfo *)0x0);
    pTStack_88 = (TMPro_TMP_Text_o *)0x450b1e2;
    il2cpp_runtime_helper_022b2c90();
label_0450b1e2:
    pTStack_88 = (TMPro_TMP_Text_o *)0x450b1e7;
    il2cpp_runtime_helper_022b2ca0();
    pMVar26 = pMVar24;
  }
  pTStack_88 = (TMPro_TMP_Text_o *)0x450b1ec;
  auVar34 = il2cpp_runtime_helper_022b2c90();
  pTVar21 = auVar34._8_8_;
  uStack_a8 = auVar34._0_8_;
  pTStack_a0 = (TMPro_TMP_Text_o *)__this;
  puStack_98 = unaff_R12;
  pSStack_90 = font;
  pTStack_88 = pTVar19;
  if (g_data_057aed59 == '\0') {
    plStack_b0 = (long *)0x450b216;
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameFontCatalog);
    auVar34._8_8_ = extraout_RDX_00;
    auVar34._0_8_ = uStack_a8;
    g_data_057aed59 = '\x01';
  }
  uStack_a8 = auVar34._0_8_;
  plStack_b0 = (long *)0x450b228;
  pTVar19 = pTVar21;
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ResetPlainVisuals
            ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)plVar28,(System_String_o *)pTVar21,
             auVar34._8_8_);
  plStack_b0 = (long *)0x450b230;
  pTVar19 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                      ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)plVar28,(MethodInfo *)pTVar19);
  if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
    plStack_b0 = (long *)0x450b24b;
    il2cpp_runtime_helper_02337ed0();
  }
  plStack_b0 = (long *)0x450b258;
  pTVar22 = pTVar21;
  PatreonEffects_NameFontCatalog__Apply(pTVar19,(System_String_o *)pTVar21,(MethodInfo *)0x0);
  plStack_b0 = (long *)0x450b260;
  __this_01 = (TMPro_TMP_Text_o *)plVar28;
  pTVar20 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                      ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)plVar28,(MethodInfo *)pTVar22);
  uVar17 = (uint)pTVar22;
  if (pTVar20 != (TMPro_TMP_Text_o *)0x0) {
    in_RCX = pTVar20->klass;
    pMVar24 = (in_RCX->vtable)._23_set_color.method;
    plStack_b0 = (long *)0x450b286;
    (*(in_RCX->vtable)._23_set_color.methodPtr)(0x3f800000,0x3f800000,pTVar20);
    plStack_b0 = (long *)0x450b28e;
    pTVar21 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                        ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)plVar28,pMVar24);
    uVar17 = (uint)pMVar24;
    __this_01 = (TMPro_TMP_Text_o *)0x0;
    plStack_b0 = (long *)0x450b2a2;
    uVar16 = il2cpp_runtime_helper_03b428b0(0x3f800000,0x3f800000);
    if (pTVar21 != (TMPro_TMP_Text_o *)0x0) {
      value.fields.r = '\0';
      value.fields.g = '\0';
      value.fields.b = '\0';
      value.fields.a = '\0';
      value.fields.rgba = uVar16;
      plStack_b0 = (long *)0x450b2b3;
      TMPro_TMP_Text__set_faceColor(pTVar21,value,(MethodInfo *)0x0);
      *(MethodInfo **)&(((TMPro_TMP_Text_o *)plVar28)->fields).m_Color.fields.b = pMVar26;
      plStack_b0 = (long *)0x450b2c3;
      pMVar24 = pMVar26;
      il2cpp_runtime_helper_022b4080(&(((TMPro_TMP_Text_o *)plVar28)->fields).m_Color.fields.b);
      plStack_b0 = (long *)0x450b2cb;
      Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__HookVertexColors
                ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)plVar28,pMVar24);
      plStack_b0 = (long *)0x450b2d3;
      __this_01 = (TMPro_TMP_Text_o *)plVar28;
      pTVar22 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                          ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)plVar28,pMVar24);
      uVar17 = (uint)pMVar24;
      if (pTVar22 != (TMPro_TMP_Text_o *)0x0) {
        UNRECOVERED_JUMPTABLE_00 = (pTVar22->klass->vtable)._106_ForceMeshUpdate.methodPtr;
        (*UNRECOVERED_JUMPTABLE_00)
                  (pTVar22,0,0,(pTVar22->klass->vtable)._106_ForceMeshUpdate.method,UNRECOVERED_JUMPTABLE_00);
        return;
      }
    }
  }
  plStack_b0 = (long *)0x450b303;
  il2cpp_runtime_helper_022b2c90();
  pTVar20 = (TMPro_TMP_Text_o *)(ulong)uVar17;
  pTVar22 = extraout_RDX_01;
  pTStack_d0 = (TMPro_TMP_Text_o *)plVar28;
  pTStack_c8 = pTVar19;
  pMStack_c0 = pMVar26;
  pTStack_b8 = pTVar21;
  plStack_b0 = unaff_RBP;
  if (g_data_057aed5a == '\0') {
    pTStack_d8 = (TMPro_TMP_Text_o *)0x450b339;
    il2cpp_runtime_helper_023445d0(&MethodInfo_NameEffectController_AddComponent_NameEffectController);
    pTStack_d8 = (TMPro_TMP_Text_o *)0x450b345;
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameFontCatalog);
    g_data_057aed5a = '\x01';
    pTVar22 = extraout_RDX_02;
  }
  pTStack_d8 = (TMPro_TMP_Text_o *)0x450b357;
  pTVar27 = in_RCX;
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ResetPlainVisuals
            ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)__this_01,(System_String_o *)in_RCX,
             (MethodInfo *)pTVar22);
  pTStack_d8 = (TMPro_TMP_Text_o *)0x450b35f;
  pTVar19 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                      ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)__this_01,(MethodInfo *)pTVar27
                      );
  if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
    pTStack_d8 = (TMPro_TMP_Text_o *)0x450b37a;
    il2cpp_runtime_helper_02337ed0();
  }
  pTStack_d8 = (TMPro_TMP_Text_o *)0x450b387;
  PatreonEffects_NameFontCatalog__Apply(pTVar19,(System_String_o *)in_RCX,(MethodInfo *)0x0);
  pTStack_d8 = (TMPro_TMP_Text_o *)0x450b38f;
  pTVar19 = __this_01;
  pTVar21 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                      ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)__this_01,(MethodInfo *)in_RCX)
  ;
  if (pTVar21 == (TMPro_TMP_Text_o *)0x0) {
label_0450b444:
    pTStack_d8 = (TMPro_TMP_Text_o *)0x450b449;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    in_RCX = (TMPro_TMP_Text_c *)0x0;
    pTStack_d8 = (TMPro_TMP_Text_o *)0x450b3a2;
    __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pTVar21,(MethodInfo *)0x0);
    pTVar19 = pTVar21;
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_0450b444;
    pTStack_d8 = (TMPro_TMP_Text_o *)0x450b3bd;
    pIVar23 = UnityEngine_GameObject__AddComponent_object_(__this_00,MethodInfo_NameEffectController_AddComponent_NameEffectController);
    *(Il2CppObject **)&(__this_01->fields).m_Color.fields = pIVar23;
    __this_01 = (TMPro_TMP_Text_o *)&(__this_01->fields).m_Color;
    pTStack_d8 = (TMPro_TMP_Text_o *)0x450b3d0;
    il2cpp_runtime_helper_022b4080(__this_01);
    in_RCX = (TMPro_TMP_Text_c *)0x0;
    pTStack_d8 = (TMPro_TMP_Text_o *)0x450b3da;
    pTVar19 = pTVar20;
    settings = PatreonEffects_NameEffectPresets__GetPreset(uVar17,(MethodInfo *)0x0);
    if (extraout_RDX_01 == (TMPro_TMP_Text_o *)0x0) goto label_0450b444;
    pSVar10 = (extraout_RDX_01->fields).m_CancellationTokenSource;
    if (pSVar10 == (System_Threading_CancellationTokenSource_o *)0x0) {
label_0450b42a:
      pTVar19 = (TMPro_TMP_Text_o *)0x0;
      if (*(PatreonEffects_NameEffectController_o **)&((UnityEngine_Color_o *)__this_01)->fields !=
          (PatreonEffects_NameEffectController_o *)0x0) {
        PatreonEffects_NameEffectController__Apply
                  (*(PatreonEffects_NameEffectController_o **)&((UnityEngine_Color_o *)__this_01)->fields,
                   settings,(MethodInfo *)0x0);
        return;
      }
      goto label_0450b444;
    }
    if ((int)pSVar10 != 0) {
      if (settings == (PatreonEffects_NameEffectSettings_o *)0x0) goto label_0450b444;
      fVar30 = (extraout_RDX_01->fields).m_Color.fields.r;
      fVar31 = (extraout_RDX_01->fields).m_Color.fields.g;
      *(UnityEngine_Material_o **)&(settings->fields).gradientA.fields = (extraout_RDX_01->fields).m_Material;
      (settings->fields).gradientA.fields.b = fVar30;
      (settings->fields).gradientA.fields.a = fVar31;
      if (1 < *(int *)&(extraout_RDX_01->fields).m_CancellationTokenSource) {
        fVar30 = (extraout_RDX_01->fields).m_Color.fields.a;
        bVar15 = (extraout_RDX_01->fields).m_SkipLayoutUpdate;
        bVar12 = (extraout_RDX_01->fields).m_SkipMaterialUpdate;
        (settings->fields).gradientB.fields.r = (extraout_RDX_01->fields).m_Color.fields.b;
        (settings->fields).gradientB.fields.g = fVar30;
        (settings->fields).gradientB.fields.b = (float)bVar15;
        (settings->fields).gradientB.fields.a = (float)bVar12;
        if (2 < *(int *)&(extraout_RDX_01->fields).m_CancellationTokenSource) {
          bVar15 = (extraout_RDX_01->fields).m_RaycastTargetCache;
          fVar30 = (extraout_RDX_01->fields).m_RaycastPadding.fields.x;
          fVar31 = (extraout_RDX_01->fields).m_RaycastPadding.fields.y;
          (settings->fields).gradientC.fields.r = (float)(extraout_RDX_01->fields).m_RaycastTarget;
          (settings->fields).gradientC.fields.g = (float)bVar15;
          (settings->fields).gradientC.fields.b = fVar30;
          (settings->fields).gradientC.fields.a = fVar31;
          if (3 < *(int *)&(extraout_RDX_01->fields).m_CancellationTokenSource) {
            fVar30 = (extraout_RDX_01->fields).m_RaycastPadding.fields.w;
            pUVar11 = (extraout_RDX_01->fields).m_RectTransform;
            (settings->fields).gradientD.fields.r = (extraout_RDX_01->fields).m_RaycastPadding.fields.z;
            (settings->fields).gradientD.fields.g = fVar30;
            *(UnityEngine_RectTransform_o **)&(settings->fields).gradientD.fields.b = pUVar11;
          }
        }
      }
      goto label_0450b42a;
    }
  }
  pTStack_d8 = (TMPro_TMP_Text_o *)0x450b44e;
  il2cpp_runtime_helper_022b2ca0();
  ppTVar25 = &pTStack_e8;
  pTStack_e8 = __this_01;
  pTStack_e0 = extraout_RDX_01;
  pTStack_d8 = pTVar20;
  if (g_data_057aed50 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterStyleChoicePreview);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed50 = '\x01';
  }
  plVar28 = &TypeInfo_AottgCharacterStyleChoicePreview;
  if (*(int *)(TypeInfo_AottgCharacterStyleChoicePreview + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pTVar21 = (TMPro_TMP_Text_o *)
            Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__Preview
                      ((Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *)pTVar19,
                       (MethodInfo *)in_RCX);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar26 = (MethodInfo *)0x0;
  bVar15 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pTVar21,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar15 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_AottgCharacterStyleChoicePreview + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pTVar22 = pTVar19;
  Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__ApplyDarkSurface
            ((Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *)pTVar19,pMVar26);
  if (pTVar19 != (TMPro_TMP_Text_o *)0x0) {
    bVar2 = (byte)(pTVar19->fields).m_SkipMaterialUpdate;
    pMVar26 = (MethodInfo *)(ulong)bVar2;
    pTVar22 = pTVar19;
    Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__SetFeedback
              ((Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *)pTVar19,(uint)bVar2,method_00)
    ;
    if ((char)(pTVar19->fields).m_SkipMaterialUpdate == '\0') {
      if (pTVar21 != (TMPro_TMP_Text_o *)0x0) {
        Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureDisabled
                  ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pTVar21,pMVar26);
        return;
      }
    }
    else if (pTVar21 != (TMPro_TMP_Text_o *)0x0) {
      pMVar26 = *(MethodInfo **)&(pTVar19->fields).m_Color.fields.b;
      pMVar24 = extraout_RDX_03;
      pTVar19 = pTStack_e8;
      ppTVar25 = &pTStack_d0;
      pTVar22 = pTVar21;
      pTVar21 = pTStack_e0;
      plVar28 = (long *)pTStack_d8;
      goto Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureFont;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar24 = extraout_RDX_04;
Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureFont:
  *(long **)((long)ppTVar25 + -8) = plVar28;
  *(TMPro_TMP_Text_o **)((long)ppTVar25 + -0x10) = pTVar21;
  *(TMPro_TMP_Text_o **)((long)ppTVar25 + -0x18) = pTVar19;
  if (g_data_057aed57 == '\0') {
    *(undefined8 *)((long)ppTVar25 + -0x20) = 0x450b550;
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameFontCatalog);
    g_data_057aed57 = '\x01';
    pMVar24 = extraout_RDX_05;
  }
  *(undefined8 *)((long)ppTVar25 + -0x20) = 0x450b562;
  method_01 = pMVar26;
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ResetPlainVisuals
            ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pTVar22,(System_String_o *)pMVar26,
             pMVar24);
  *(undefined8 *)((long)ppTVar25 + -0x20) = 0x450b56a;
  pTVar19 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                      ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pTVar22,method_01);
  if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
    *(undefined8 *)((long)ppTVar25 + -0x20) = 0x450b585;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)ppTVar25 + -0x20) = 0x450b592;
  PatreonEffects_NameFontCatalog__Apply(pTVar19,(System_String_o *)pMVar26,(MethodInfo *)0x0);
  *(undefined8 *)((long)ppTVar25 + -0x20) = 0x450b59a;
  pTVar19 = pTVar22;
  pTVar21 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                      ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pTVar22,pMVar26);
  if (pTVar21 != (TMPro_TMP_Text_o *)0x0) {
    pMVar26 = (pTVar21->klass->vtable)._23_set_color.method;
    UNRECOVERED_JUMPTABLE_00 = (pTVar21->klass->vtable)._23_set_color.methodPtr;
    *(undefined8 *)((long)ppTVar25 + -0x20) = 0x450b5bc;
    (*UNRECOVERED_JUMPTABLE_00)(0x3f800000,0x3f800000,pTVar21);
    *(undefined8 *)((long)ppTVar25 + -0x20) = 0x450b5c4;
    pTVar21 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                        ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pTVar22,pMVar26);
    pTVar19 = (TMPro_TMP_Text_o *)0x0;
    *(undefined8 *)((long)ppTVar25 + -0x20) = 0x450b5d8;
    uVar17 = il2cpp_runtime_helper_03b428b0(0x3f800000,0x3f800000);
    if (pTVar21 != (TMPro_TMP_Text_o *)0x0) {
      value_00.r = '\0';
      value_00.g = '\0';
      value_00.b = '\0';
      value_00.a = '\0';
      value_00.rgba = uVar17;
      *(undefined8 *)((long)ppTVar25 + -0x20) = 0x450b5e9;
      TMPro_TMP_Text__set_faceColor(pTVar21,(UnityEngine_Color32_o)value_00,(MethodInfo *)0x0);
      *(undefined8 *)((long)ppTVar25 + -0x20) = 0x450b5f1;
      pTVar21 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                          ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pTVar22,
                           (MethodInfo *)value_00);
      pTVar19 = pTVar22;
      if (pTVar21 != (TMPro_TMP_Text_o *)0x0) {
        UNRECOVERED_JUMPTABLE_00 = (pTVar21->klass->vtable)._106_ForceMeshUpdate.methodPtr;
        (*UNRECOVERED_JUMPTABLE_00)
                  (pTVar21,0,0,(pTVar21->klass->vtable)._106_ForceMeshUpdate.method,UNRECOVERED_JUMPTABLE_00);
        return;
      }
    }
  }
  *(undefined8 *)((long)ppTVar25 + -0x20) = 0x450b61b;
  il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)((long)ppTVar25 + -0x30) = 0;
  *(undefined8 *)((long)ppTVar25 + -0x28) = 0;
  *(undefined8 *)((long)ppTVar25 + -0x38) = 0x450b635;
  bVar15 = UnityEngine_ColorUtility__TryParseHtmlString
                     ((System_String_o *)pTVar19,(UnityEngine_Color_o *)((long)ppTVar25 + -0x30),
                      (MethodInfo *)0x0);
  if ((char)bVar15 != '\0') {
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$ConfigureGradient
// il2cpp: void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureGradient (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o* __this, UnityEngine_Color_array* colors, System_String_o* font, const MethodInfo* method);
// 0x450b1f0

void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureGradient
               (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *__this,UnityEngine_Color_array *colors,
               System_String_o *font,MethodInfo *method)

{
  byte bVar1;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  System_Threading_CancellationTokenSource_o *pSVar2;
  UnityEngine_RectTransform_o *pUVar3;
  float fVar4;
  float fVar5;
  bool_conflict bVar6;
  uint uVar7;
  bool_conflict bVar8;
  uint uVar9;
  TMPro_TMP_Text_o *pTVar10;
  TMPro_TMP_Text_o *pTVar11;
  UnityEngine_GameObject_o *__this_00;
  Il2CppObject *pIVar12;
  PatreonEffects_NameEffectSettings_o *settings;
  TMPro_TMP_Text_o *pTVar13;
  MethodInfo *extraout_RDX;
  MethodInfo *pMVar14;
  TMPro_TMP_Text_o *extraout_RDX_00;
  TMPro_TMP_Text_o *extraout_RDX_01;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *pMVar15;
  TMPro_TMP_Text_o **ppTVar16;
  UnityEngine_Color32_o value;
  UnityEngine_Color_array *method_01;
  TMPro_TMP_Text_c *method_02;
  MethodInfo *method_03;
  UnityEngine_Color32_Fields value_00;
  TMPro_TMP_Text_o *pTVar17;
  long *plVar18;
  TMPro_TMP_Text_o *pTStack_68;
  TMPro_TMP_Text_o *pTStack_60;
  TMPro_TMP_Text_o *pTStack_58;
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *pGStack_50;
  TMPro_TMP_Text_o *pTStack_48;
  UnityEngine_Color_array *pUStack_40;
  TMPro_TMP_Text_o *pTStack_38;
  
  pMVar14 = (MethodInfo *)font;
  if (g_data_057aed59 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameFontCatalog);
    g_data_057aed59 = '\x01';
    pMVar14 = extraout_RDX;
  }
  pMVar15 = (MethodInfo *)font;
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ResetPlainVisuals(__this,font,pMVar14);
  pTVar10 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,pMVar15);
  if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar14 = (MethodInfo *)font;
  PatreonEffects_NameFontCatalog__Apply(pTVar10,font,(MethodInfo *)0x0);
  pTVar13 = (TMPro_TMP_Text_o *)__this;
  pTVar11 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,pMVar14);
  uVar9 = (uint)pMVar14;
  if (pTVar11 != (TMPro_TMP_Text_o *)0x0) {
    method = (MethodInfo *)pTVar11->klass;
    pMVar14 = (((TMPro_TMP_Text_c *)method)->vtable)._23_set_color.method;
    (*(((TMPro_TMP_Text_c *)method)->vtable)._23_set_color.methodPtr)(0x3f800000,0x3f8000003f800000,pTVar11);
    font = (System_String_o *)Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,pMVar14);
    uVar9 = (uint)pMVar14;
    pTVar13 = (TMPro_TMP_Text_o *)0x0;
    uVar7 = il2cpp_runtime_helper_03b428b0(0x3f800000,0x3f8000003f800000);
    if ((TMPro_TMP_Text_o *)font != (TMPro_TMP_Text_o *)0x0) {
      value.fields.r = '\0';
      value.fields.g = '\0';
      value.fields.b = '\0';
      value.fields.a = '\0';
      value.fields.rgba = uVar7;
      TMPro_TMP_Text__set_faceColor((TMPro_TMP_Text_o *)font,value,(MethodInfo *)0x0);
      (__this->fields)._colors = colors;
      method_01 = colors;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._colors);
      Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__HookVertexColors(__this,(MethodInfo *)method_01);
      pTVar13 = (TMPro_TMP_Text_o *)__this;
      pTVar11 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,(MethodInfo *)method_01);
      uVar9 = (uint)method_01;
      if (pTVar11 != (TMPro_TMP_Text_o *)0x0) {
        UNRECOVERED_JUMPTABLE_00 = (pTVar11->klass->vtable)._106_ForceMeshUpdate.methodPtr;
        (*UNRECOVERED_JUMPTABLE_00)
                  (pTVar11,0,0,(pTVar11->klass->vtable)._106_ForceMeshUpdate.method,UNRECOVERED_JUMPTABLE_00);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pTVar17 = (TMPro_TMP_Text_o *)(ulong)uVar9;
  pTVar11 = extraout_RDX_00;
  pGStack_50 = __this;
  pTStack_48 = pTVar10;
  pUStack_40 = colors;
  pTStack_38 = (TMPro_TMP_Text_o *)font;
  if (g_data_057aed5a == '\0') {
    pTStack_58 = (TMPro_TMP_Text_o *)0x450b339;
    il2cpp_runtime_helper_023445d0(&MethodInfo_NameEffectController_AddComponent_NameEffectController);
    pTStack_58 = (TMPro_TMP_Text_o *)0x450b345;
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameFontCatalog);
    g_data_057aed5a = '\x01';
    pTVar11 = extraout_RDX_01;
  }
  pTStack_58 = (TMPro_TMP_Text_o *)0x450b357;
  method_02 = (TMPro_TMP_Text_c *)method;
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ResetPlainVisuals
            ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pTVar13,(System_String_o *)method,
             (MethodInfo *)pTVar11);
  pTStack_58 = (TMPro_TMP_Text_o *)0x450b35f;
  pTVar10 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                      ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pTVar13,(MethodInfo *)method_02
                      );
  if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
    pTStack_58 = (TMPro_TMP_Text_o *)0x450b37a;
    il2cpp_runtime_helper_02337ed0();
  }
  pTStack_58 = (TMPro_TMP_Text_o *)0x450b387;
  PatreonEffects_NameFontCatalog__Apply(pTVar10,(System_String_o *)method,(MethodInfo *)0x0);
  pTStack_58 = (TMPro_TMP_Text_o *)0x450b38f;
  pTVar10 = pTVar13;
  pTVar11 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                      ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pTVar13,method);
  if (pTVar11 == (TMPro_TMP_Text_o *)0x0) {
label_0450b444:
    pTStack_58 = (TMPro_TMP_Text_o *)0x450b449;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    method = (MethodInfo *)0x0;
    pTStack_58 = (TMPro_TMP_Text_o *)0x450b3a2;
    __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pTVar11,(MethodInfo *)0x0);
    pTVar10 = pTVar11;
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_0450b444;
    pTStack_58 = (TMPro_TMP_Text_o *)0x450b3bd;
    pIVar12 = UnityEngine_GameObject__AddComponent_object_(__this_00,MethodInfo_NameEffectController_AddComponent_NameEffectController);
    *(Il2CppObject **)&(pTVar13->fields).m_Color.fields = pIVar12;
    pTVar13 = (TMPro_TMP_Text_o *)&(pTVar13->fields).m_Color;
    pTStack_58 = (TMPro_TMP_Text_o *)0x450b3d0;
    il2cpp_runtime_helper_022b4080(pTVar13);
    method = (MethodInfo *)0x0;
    pTStack_58 = (TMPro_TMP_Text_o *)0x450b3da;
    pTVar10 = pTVar17;
    settings = PatreonEffects_NameEffectPresets__GetPreset(uVar9,(MethodInfo *)0x0);
    if (extraout_RDX_00 == (TMPro_TMP_Text_o *)0x0) goto label_0450b444;
    pSVar2 = (extraout_RDX_00->fields).m_CancellationTokenSource;
    if (pSVar2 == (System_Threading_CancellationTokenSource_o *)0x0) {
label_0450b42a:
      pTVar10 = (TMPro_TMP_Text_o *)0x0;
      if (*(PatreonEffects_NameEffectController_o **)&((UnityEngine_Color_o *)pTVar13)->fields !=
          (PatreonEffects_NameEffectController_o *)0x0) {
        PatreonEffects_NameEffectController__Apply
                  (*(PatreonEffects_NameEffectController_o **)&((UnityEngine_Color_o *)pTVar13)->fields,
                   settings,(MethodInfo *)0x0);
        return;
      }
      goto label_0450b444;
    }
    if ((int)pSVar2 != 0) {
      if (settings == (PatreonEffects_NameEffectSettings_o *)0x0) goto label_0450b444;
      fVar4 = (extraout_RDX_00->fields).m_Color.fields.r;
      fVar5 = (extraout_RDX_00->fields).m_Color.fields.g;
      *(UnityEngine_Material_o **)&(settings->fields).gradientA.fields = (extraout_RDX_00->fields).m_Material;
      (settings->fields).gradientA.fields.b = fVar4;
      (settings->fields).gradientA.fields.a = fVar5;
      if (1 < *(int *)&(extraout_RDX_00->fields).m_CancellationTokenSource) {
        fVar4 = (extraout_RDX_00->fields).m_Color.fields.a;
        bVar8 = (extraout_RDX_00->fields).m_SkipLayoutUpdate;
        bVar6 = (extraout_RDX_00->fields).m_SkipMaterialUpdate;
        (settings->fields).gradientB.fields.r = (extraout_RDX_00->fields).m_Color.fields.b;
        (settings->fields).gradientB.fields.g = fVar4;
        (settings->fields).gradientB.fields.b = (float)bVar8;
        (settings->fields).gradientB.fields.a = (float)bVar6;
        if (2 < *(int *)&(extraout_RDX_00->fields).m_CancellationTokenSource) {
          bVar8 = (extraout_RDX_00->fields).m_RaycastTargetCache;
          fVar4 = (extraout_RDX_00->fields).m_RaycastPadding.fields.x;
          fVar5 = (extraout_RDX_00->fields).m_RaycastPadding.fields.y;
          (settings->fields).gradientC.fields.r = (float)(extraout_RDX_00->fields).m_RaycastTarget;
          (settings->fields).gradientC.fields.g = (float)bVar8;
          (settings->fields).gradientC.fields.b = fVar4;
          (settings->fields).gradientC.fields.a = fVar5;
          if (3 < *(int *)&(extraout_RDX_00->fields).m_CancellationTokenSource) {
            fVar4 = (extraout_RDX_00->fields).m_RaycastPadding.fields.w;
            pUVar3 = (extraout_RDX_00->fields).m_RectTransform;
            (settings->fields).gradientD.fields.r = (extraout_RDX_00->fields).m_RaycastPadding.fields.z;
            (settings->fields).gradientD.fields.g = fVar4;
            *(UnityEngine_RectTransform_o **)&(settings->fields).gradientD.fields.b = pUVar3;
          }
        }
      }
      goto label_0450b42a;
    }
  }
  pTStack_58 = (TMPro_TMP_Text_o *)0x450b44e;
  il2cpp_runtime_helper_022b2ca0();
  ppTVar16 = &pTStack_68;
  pTStack_68 = pTVar13;
  pTStack_60 = extraout_RDX_00;
  pTStack_58 = pTVar17;
  if (g_data_057aed50 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterStyleChoicePreview);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed50 = '\x01';
  }
  plVar18 = &TypeInfo_AottgCharacterStyleChoicePreview;
  if (*(int *)(TypeInfo_AottgCharacterStyleChoicePreview + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pTVar13 = (TMPro_TMP_Text_o *)
            Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__Preview
                      ((Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *)pTVar10,method);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar14 = (MethodInfo *)0x0;
  bVar8 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_AottgCharacterStyleChoicePreview + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pTVar11 = pTVar10;
  Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__ApplyDarkSurface
            ((Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *)pTVar10,pMVar14);
  if (pTVar10 != (TMPro_TMP_Text_o *)0x0) {
    bVar1 = (byte)(pTVar10->fields).m_SkipMaterialUpdate;
    pMVar14 = (MethodInfo *)(ulong)bVar1;
    pTVar11 = pTVar10;
    Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__SetFeedback
              ((Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *)pTVar10,(uint)bVar1,method_00)
    ;
    if ((char)(pTVar10->fields).m_SkipMaterialUpdate == '\0') {
      if (pTVar13 != (TMPro_TMP_Text_o *)0x0) {
        Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureDisabled
                  ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pTVar13,pMVar14);
        return;
      }
    }
    else if (pTVar13 != (TMPro_TMP_Text_o *)0x0) {
      pMVar14 = *(MethodInfo **)&(pTVar10->fields).m_Color.fields.b;
      pMVar15 = extraout_RDX_02;
      pTVar10 = pTStack_68;
      ppTVar16 = (TMPro_TMP_Text_o **)&pGStack_50;
      pTVar11 = pTVar13;
      pTVar13 = pTStack_60;
      plVar18 = (long *)pTStack_58;
      goto Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureFont;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar15 = extraout_RDX_03;
Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureFont:
  *(long **)((long)ppTVar16 + -8) = plVar18;
  *(TMPro_TMP_Text_o **)((long)ppTVar16 + -0x10) = pTVar13;
  *(TMPro_TMP_Text_o **)((long)ppTVar16 + -0x18) = pTVar10;
  if (g_data_057aed57 == '\0') {
    *(undefined8 *)((long)ppTVar16 + -0x20) = 0x450b550;
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameFontCatalog);
    g_data_057aed57 = '\x01';
    pMVar15 = extraout_RDX_04;
  }
  *(undefined8 *)((long)ppTVar16 + -0x20) = 0x450b562;
  method_03 = pMVar14;
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ResetPlainVisuals
            ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pTVar11,(System_String_o *)pMVar14,
             pMVar15);
  *(undefined8 *)((long)ppTVar16 + -0x20) = 0x450b56a;
  pTVar10 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                      ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pTVar11,method_03);
  if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
    *(undefined8 *)((long)ppTVar16 + -0x20) = 0x450b585;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)ppTVar16 + -0x20) = 0x450b592;
  PatreonEffects_NameFontCatalog__Apply(pTVar10,(System_String_o *)pMVar14,(MethodInfo *)0x0);
  *(undefined8 *)((long)ppTVar16 + -0x20) = 0x450b59a;
  pTVar10 = pTVar11;
  pTVar13 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                      ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pTVar11,pMVar14);
  if (pTVar13 != (TMPro_TMP_Text_o *)0x0) {
    pMVar14 = (pTVar13->klass->vtable)._23_set_color.method;
    UNRECOVERED_JUMPTABLE_00 = (pTVar13->klass->vtable)._23_set_color.methodPtr;
    *(undefined8 *)((long)ppTVar16 + -0x20) = 0x450b5bc;
    (*UNRECOVERED_JUMPTABLE_00)(0x3f800000,0x3f8000003f800000,pTVar13);
    *(undefined8 *)((long)ppTVar16 + -0x20) = 0x450b5c4;
    pTVar13 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                        ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pTVar11,pMVar14);
    pTVar10 = (TMPro_TMP_Text_o *)0x0;
    *(undefined8 *)((long)ppTVar16 + -0x20) = 0x450b5d8;
    uVar9 = il2cpp_runtime_helper_03b428b0(0x3f800000,0x3f8000003f800000);
    if (pTVar13 != (TMPro_TMP_Text_o *)0x0) {
      value_00.r = '\0';
      value_00.g = '\0';
      value_00.b = '\0';
      value_00.a = '\0';
      value_00.rgba = uVar9;
      *(undefined8 *)((long)ppTVar16 + -0x20) = 0x450b5e9;
      TMPro_TMP_Text__set_faceColor(pTVar13,(UnityEngine_Color32_o)value_00,(MethodInfo *)0x0);
      *(undefined8 *)((long)ppTVar16 + -0x20) = 0x450b5f1;
      pTVar13 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                          ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pTVar11,
                           (MethodInfo *)value_00);
      pTVar10 = pTVar11;
      if (pTVar13 != (TMPro_TMP_Text_o *)0x0) {
        UNRECOVERED_JUMPTABLE_00 = (pTVar13->klass->vtable)._106_ForceMeshUpdate.methodPtr;
        (*UNRECOVERED_JUMPTABLE_00)
                  (pTVar13,0,0,(pTVar13->klass->vtable)._106_ForceMeshUpdate.method,UNRECOVERED_JUMPTABLE_00);
        return;
      }
    }
  }
  *(undefined8 *)((long)ppTVar16 + -0x20) = 0x450b61b;
  il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)((long)ppTVar16 + -0x30) = 0;
  *(undefined8 *)((long)ppTVar16 + -0x28) = 0;
  *(undefined8 *)((long)ppTVar16 + -0x38) = 0x450b635;
  bVar8 = UnityEngine_ColorUtility__TryParseHtmlString
                    ((System_String_o *)pTVar10,(UnityEngine_Color_o *)((long)ppTVar16 + -0x30),
                     (MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$ConfigureEffect
// il2cpp: void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureEffect (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o* __this, int32_t effect, UnityEngine_Color_array* colors, System_String_o* font, const MethodInfo* method);
// 0x450b310

void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureEffect
               (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *__this,int32_t effect,
               UnityEngine_Color_array *colors,System_String_o *font,MethodInfo *method)

{
  byte bVar1;
  Il2CppMethodPointer vtableDispatch;
  float fVar2;
  float fVar3;
  float fVar4;
  bool_conflict bVar5;
  uint uVar6;
  TMPro_TMP_Text_o *pTVar7;
  UnityEngine_Color_array *pUVar8;
  UnityEngine_GameObject_o *__this_00;
  PatreonEffects_NameEffectController_o *pPVar9;
  PatreonEffects_NameEffectSettings_o *settings;
  UnityEngine_Color_array *pUVar10;
  UnityEngine_Color_array *extraout_RDX;
  UnityEngine_Color_array *pUVar11;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *method_01;
  UnityEngine_Color_array **ppUVar12;
  MethodInfo *pMVar13;
  MethodInfo *method_02;
  UnityEngine_Color32_Fields value;
  long *plVar14;
  UnityEngine_Color_array *pUStack_40;
  UnityEngine_Color_array *pUStack_38;
  UnityEngine_Color_array *pUStack_30;
  
  pUVar10 = (UnityEngine_Color_array *)(ulong)(uint)effect;
  pUVar11 = colors;
  if (g_data_057aed5a == '\0') {
    pUStack_30 = (UnityEngine_Color_array *)0x450b339;
    il2cpp_runtime_helper_023445d0(&MethodInfo_NameEffectController_AddComponent_NameEffectController);
    pUStack_30 = (UnityEngine_Color_array *)0x450b345;
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameFontCatalog);
    g_data_057aed5a = '\x01';
    pUVar11 = extraout_RDX;
  }
  pUStack_30 = (UnityEngine_Color_array *)0x450b357;
  pMVar13 = (MethodInfo *)font;
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ResetPlainVisuals(__this,font,(MethodInfo *)pUVar11);
  pUStack_30 = (UnityEngine_Color_array *)0x450b35f;
  pTVar7 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,pMVar13);
  if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
    pUStack_30 = (UnityEngine_Color_array *)0x450b37a;
    il2cpp_runtime_helper_02337ed0();
  }
  pUStack_30 = (UnityEngine_Color_array *)0x450b387;
  PatreonEffects_NameFontCatalog__Apply(pTVar7,font,(MethodInfo *)0x0);
  pUStack_30 = (UnityEngine_Color_array *)0x450b38f;
  pUVar11 = (UnityEngine_Color_array *)__this;
  pUVar8 = (UnityEngine_Color_array *)
           Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,(MethodInfo *)font);
  if (pUVar8 == (UnityEngine_Color_array *)0x0) {
label_0450b444:
    pUStack_30 = (UnityEngine_Color_array *)0x450b449;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    font = (System_String_o *)0x0;
    pUStack_30 = (UnityEngine_Color_array *)0x450b3a2;
    __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar8,(MethodInfo *)0x0);
    pUVar11 = pUVar8;
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_0450b444;
    pUStack_30 = (UnityEngine_Color_array *)0x450b3bd;
    pPVar9 = (PatreonEffects_NameEffectController_o *)
             UnityEngine_GameObject__AddComponent_object_(__this_00,MethodInfo_NameEffectController_AddComponent_NameEffectController);
    (__this->fields)._effect = pPVar9;
    __this = (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)&(__this->fields)._effect;
    pUStack_30 = (UnityEngine_Color_array *)0x450b3d0;
    il2cpp_runtime_helper_022b4080(__this);
    font = (System_String_o *)0x0;
    pUStack_30 = (UnityEngine_Color_array *)0x450b3da;
    pUVar11 = pUVar10;
    settings = PatreonEffects_NameEffectPresets__GetPreset(effect,(MethodInfo *)0x0);
    if (colors == (UnityEngine_Color_array *)0x0) goto label_0450b444;
    if (colors->max_length == 0) {
label_0450b42a:
      pUVar11 = (UnityEngine_Color_array *)0x0;
      if (*(PatreonEffects_NameEffectController_o **)__this != (PatreonEffects_NameEffectController_o *)0x0) {
        PatreonEffects_NameEffectController__Apply
                  (*(PatreonEffects_NameEffectController_o **)__this,settings,(MethodInfo *)0x0);
        return;
      }
      goto label_0450b444;
    }
    if ((int)colors->max_length != 0) {
      if (settings == (PatreonEffects_NameEffectSettings_o *)0x0) goto label_0450b444;
      fVar2 = colors->m_Items[0].fields.g;
      fVar3 = colors->m_Items[0].fields.b;
      fVar4 = colors->m_Items[0].fields.a;
      (settings->fields).gradientA.fields.r = colors->m_Items[0].fields.r;
      (settings->fields).gradientA.fields.g = fVar2;
      (settings->fields).gradientA.fields.b = fVar3;
      (settings->fields).gradientA.fields.a = fVar4;
      if (1 < (int)colors->max_length) {
        fVar2 = colors->m_Items[1].fields.g;
        fVar3 = colors->m_Items[1].fields.b;
        fVar4 = colors->m_Items[1].fields.a;
        (settings->fields).gradientB.fields.r = colors->m_Items[1].fields.r;
        (settings->fields).gradientB.fields.g = fVar2;
        (settings->fields).gradientB.fields.b = fVar3;
        (settings->fields).gradientB.fields.a = fVar4;
        if (2 < (int)colors->max_length) {
          fVar2 = colors->m_Items[2].fields.g;
          fVar3 = colors->m_Items[2].fields.b;
          fVar4 = colors->m_Items[2].fields.a;
          (settings->fields).gradientC.fields.r = colors->m_Items[2].fields.r;
          (settings->fields).gradientC.fields.g = fVar2;
          (settings->fields).gradientC.fields.b = fVar3;
          (settings->fields).gradientC.fields.a = fVar4;
          if (3 < (int)colors->max_length) {
            fVar2 = colors->m_Items[3].fields.g;
            fVar3 = colors->m_Items[3].fields.b;
            fVar4 = colors->m_Items[3].fields.a;
            (settings->fields).gradientD.fields.r = colors->m_Items[3].fields.r;
            (settings->fields).gradientD.fields.g = fVar2;
            (settings->fields).gradientD.fields.b = fVar3;
            (settings->fields).gradientD.fields.a = fVar4;
          }
        }
      }
      goto label_0450b42a;
    }
  }
  pUStack_30 = (UnityEngine_Color_array *)0x450b44e;
  il2cpp_runtime_helper_022b2ca0();
  ppUVar12 = &pUStack_40;
  pUStack_40 = (UnityEngine_Color_array *)__this;
  pUStack_38 = colors;
  pUStack_30 = pUVar10;
  if (g_data_057aed50 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterStyleChoicePreview);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed50 = '\x01';
  }
  plVar14 = &TypeInfo_AottgCharacterStyleChoicePreview;
  if (*(int *)(TypeInfo_AottgCharacterStyleChoicePreview + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar10 = (UnityEngine_Color_array *)
            Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__Preview
                      ((Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *)pUVar11,
                       (MethodInfo *)font);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar13 = (MethodInfo *)0x0;
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_AottgCharacterStyleChoicePreview + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar8 = pUVar11;
  Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__ApplyDarkSurface
            ((Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *)pUVar11,pMVar13);
  if (pUVar11 != (UnityEngine_Color_array *)0x0) {
    bVar1 = *(byte *)&pUVar11->m_Items[1].fields.a;
    pMVar13 = (MethodInfo *)(ulong)bVar1;
    pUVar8 = pUVar11;
    Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__SetFeedback
              ((Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *)pUVar11,(uint)bVar1,method_00)
    ;
    if (*(char *)&pUVar11->m_Items[1].fields.a == '\0') {
      if (pUVar10 != (UnityEngine_Color_array *)0x0) {
        Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureDisabled
                  ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pUVar10,pMVar13);
        return;
      }
    }
    else if (pUVar10 != (UnityEngine_Color_array *)0x0) {
      pMVar13 = *(MethodInfo **)&pUVar11->m_Items[1].fields;
      method_01 = extraout_RDX_00;
      pUVar11 = pUStack_40;
      ppUVar12 = (UnityEngine_Color_array **)&stack0xffffffffffffffd8;
      pUVar8 = pUVar10;
      pUVar10 = pUStack_38;
      plVar14 = (long *)pUStack_30;
      goto Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureFont;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  method_01 = extraout_RDX_01;
Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureFont:
  *(long **)((long)ppUVar12 + -8) = plVar14;
  *(UnityEngine_Color_array **)((long)ppUVar12 + -0x10) = pUVar10;
  *(UnityEngine_Color_array **)((long)ppUVar12 + -0x18) = pUVar11;
  if (g_data_057aed57 == '\0') {
    *(undefined8 *)((long)ppUVar12 + -0x20) = 0x450b550;
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameFontCatalog);
    g_data_057aed57 = '\x01';
    method_01 = extraout_RDX_02;
  }
  *(undefined8 *)((long)ppUVar12 + -0x20) = 0x450b562;
  method_02 = pMVar13;
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ResetPlainVisuals
            ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pUVar8,(System_String_o *)pMVar13,
             method_01);
  *(undefined8 *)((long)ppUVar12 + -0x20) = 0x450b56a;
  pTVar7 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                     ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pUVar8,method_02);
  if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
    *(undefined8 *)((long)ppUVar12 + -0x20) = 0x450b585;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)ppUVar12 + -0x20) = 0x450b592;
  PatreonEffects_NameFontCatalog__Apply(pTVar7,(System_String_o *)pMVar13,(MethodInfo *)0x0);
  *(undefined8 *)((long)ppUVar12 + -0x20) = 0x450b59a;
  pUVar11 = pUVar8;
  pTVar7 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                     ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pUVar8,pMVar13);
  if (pTVar7 != (TMPro_TMP_Text_o *)0x0) {
    pMVar13 = (pTVar7->klass->vtable)._23_set_color.method;
    vtableDispatch = (pTVar7->klass->vtable)._23_set_color.methodPtr;
    *(undefined8 *)((long)ppUVar12 + -0x20) = 0x450b5bc;
    (*vtableDispatch)(0x3f800000,0x3f8000003f800000,pTVar7);
    *(undefined8 *)((long)ppUVar12 + -0x20) = 0x450b5c4;
    pTVar7 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                       ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pUVar8,pMVar13);
    pUVar11 = (UnityEngine_Color_array *)0x0;
    *(undefined8 *)((long)ppUVar12 + -0x20) = 0x450b5d8;
    uVar6 = il2cpp_runtime_helper_03b428b0(0x3f800000,0x3f8000003f800000);
    if (pTVar7 != (TMPro_TMP_Text_o *)0x0) {
      value.r = '\0';
      value.g = '\0';
      value.b = '\0';
      value.a = '\0';
      value.rgba = uVar6;
      *(undefined8 *)((long)ppUVar12 + -0x20) = 0x450b5e9;
      TMPro_TMP_Text__set_faceColor(pTVar7,(UnityEngine_Color32_o)value,(MethodInfo *)0x0);
      *(undefined8 *)((long)ppUVar12 + -0x20) = 0x450b5f1;
      pTVar7 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                         ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pUVar8,(MethodInfo *)value);
      pUVar11 = pUVar8;
      if (pTVar7 != (TMPro_TMP_Text_o *)0x0) {
        vtableDispatch = (pTVar7->klass->vtable)._106_ForceMeshUpdate.methodPtr;
        (*vtableDispatch)
                  (pTVar7,0,0,(pTVar7->klass->vtable)._106_ForceMeshUpdate.method,vtableDispatch);
        return;
      }
    }
  }
  *(undefined8 *)((long)ppUVar12 + -0x20) = 0x450b61b;
  il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)((long)ppUVar12 + -0x30) = 0;
  *(undefined8 *)((long)ppUVar12 + -0x28) = 0;
  *(undefined8 *)((long)ppUVar12 + -0x38) = 0x450b635;
  bVar5 = UnityEngine_ColorUtility__TryParseHtmlString
                    ((System_String_o *)pUVar11,(UnityEngine_Color_o *)((long)ppUVar12 + -0x30),
                     (MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$get_Text
// il2cpp: TMPro_TMP_Text_o* Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o* __this, const MethodInfo* method);
// 0x450b960

TMPro_TMP_Text_o *
Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
          (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *__this,MethodInfo *method)

{
  TMPro_TMP_Text_o **ppTVar1;
  bool_conflict bVar2;
  TMPro_TMP_Text_o *pTVar3;
  
  if (g_data_057aed5b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_Text_GetComponent_TMP_Text);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed5b = '\x01';
  }
  pTVar3 = (__this->fields)._text;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppTVar1 = &(__this->fields)._text;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pTVar3 = (TMPro_TMP_Text_o *)
             UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_TMP_Text_GetComponent_TMP_Text);
    (__this->fields)._text = pTVar3;
    il2cpp_runtime_helper_022b4080(ppTVar1,pTVar3);
  }
  return *ppTVar1;
}


// Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$HookVertexColors
// il2cpp: void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__HookVertexColors (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o* __this, const MethodInfo* method);
// 0x450b9f0

void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__HookVertexColors
               (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *__this,MethodInfo *method)

{
  float *pfVar1;
  int iVar2;
  bool_conflict bVar3;
  uint uVar4;
  undefined4 uVar5;
  TMPro_TMP_Text_o *pTVar6;
  long lVar7;
  long lVar8;
  Il2CppRGCTXData *pIVar9;
  System_Object_array *pSVar10;
  UnityEngine_Transform_o *pUVar11;
  UnityEngine_Object_o *pUVar12;
  uint uVar13;
  float *maxX;
  float *extraout_RDX;
  undefined8 *puVar14;
  Il2CppRGCTXData *pIVar15;
  Il2CppRGCTXData *__this_00;
  UnityEngine_Vector3_array *textInfo;
  long *unaff_RBP;
  uint uVar16;
  UnityEngine_Vector3_array *method_00;
  UnityEngine_Vector3_array *method_01;
  MethodInfo *in_R8;
  long lVar17;
  ulong unaff_R12;
  float *pfVar18;
  long *unaff_R13;
  float *pfVar19;
  long *plVar20;
  ulong uVar21;
  System_Object_array *pSVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  UnityEngine_Color_o UVar27;
  float fStack_e0;
  float fStack_dc;
  UnityEngine_Vector3_array *pUStack_d8;
  UnityEngine_Vector3_array *pUStack_d0;
  Il2CppRGCTXData *pIStack_c8;
  ulong uStack_c0;
  long *plStack_b8;
  UnityEngine_Vector3_array *pUStack_b0;
  System_Object_array *pSStack_a8;
  long *plStack_a0;
  Il2CppRGCTXData *pIStack_98;
  UnityEngine_Object_o *pUStack_90;
  long *plStack_88;
  Il2CppRGCTXData *pIStack_80;
  undefined8 *puStack_78;
  
  if (g_data_057aed5c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_TMP_TextInfo);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ApplyVertexColors);
    g_data_057aed5c = '\x01';
  }
  if ((char)(__this->fields)._hooked != '\0') {
    return;
  }
  pTVar6 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,method);
  lVar7 = il2cpp_runtime_helper_023052d0(TypeInfo_Action_TMP_TextInfo);
  lVar17 = lVar7;
  System_Action_object____ctor();
  if (pTVar6 != (TMPro_TMP_Text_o *)0x0) {
    (*(pTVar6->klass->vtable)._78_add_OnPreRenderText.methodPtr)
              (pTVar6,lVar7,(pTVar6->klass->vtable)._78_add_OnPreRenderText.method);
    *(undefined1 *)&(__this->fields)._hooked = 1;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed5d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_TMP_TextInfo);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ApplyVertexColors);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed5d = '\x01';
  }
  *(undefined8 *)(lVar17 + 0x30) = 0;
  il2cpp_runtime_helper_022b4080(lVar17 + 0x30);
  if (*(char *)(lVar17 + 0x38) == '\0') {
label_0450bb59:
    *(undefined1 *)(lVar17 + 0x38) = 0;
    return;
  }
  pUVar12 = *(UnityEngine_Object_o **)(lVar17 + 0x20);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = UnityEngine_Object__op_Inequality(pUVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') goto label_0450bb59;
  plVar20 = *(long **)(lVar17 + 0x20);
  lVar8 = il2cpp_runtime_helper_023052d0(TypeInfo_Action_TMP_TextInfo);
  lVar7 = lVar8;
  System_Action_object____ctor();
  if (plVar20 != (long *)0x0) {
    (**(code **)(*plVar20 + 0x628))(plVar20,lVar8,*(undefined8 *)(*plVar20 + 0x630));
    goto label_0450bb59;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed5e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed5e = '\x01';
  }
  plVar20 = *(long **)(lVar7 + 0x28);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_00 = (UnityEngine_Vector3_array *)0x0;
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)plVar20,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return;
  }
  puVar14 = (undefined8 *)(lVar7 + 0x28);
  pIVar15 = (Il2CppRGCTXData *)*puVar14;
  if (pIVar15 != (Il2CppRGCTXData *)0x0) {
    PatreonEffects_NameEffectController__Clear
              ((PatreonEffects_NameEffectController_o *)pIVar15,(MethodInfo *)0x0);
    pUVar12 = (UnityEngine_Object_o *)*puVar14;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar12,(MethodInfo *)0x0);
    *puVar14 = 0;
    il2cpp_runtime_helper_022b4080(puVar14,0);
    return;
  }
  pIStack_80 = (Il2CppRGCTXData *)il2cpp_runtime_helper_022b2c90();
  puStack_78 = puVar14;
  if (g_data_057aed60 == '\0') {
    plStack_88 = (long *)0x450bc43;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    plStack_88 = (long *)0x450bc4f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_NameEffectController_GetComponents_NameEffectController);
    plStack_88 = (long *)0x450bc5b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed60 = '\x01';
  }
  plStack_88 = (long *)0x450bc6a;
  __this_00 = pIVar15;
  pIVar9 = (Il2CppRGCTXData *)
           Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                     ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pIVar15,(MethodInfo *)method_00)
  ;
  pSVar22 = (System_Object_array *)&TypeInfo_Object;
  if (pIVar9 != (Il2CppRGCTXData *)0x0) {
    plStack_88 = (long *)0x450bc89;
    method_00 = MethodInfo_NameEffectController_GetComponents_NameEffectController;
    pIStack_80 = pIVar15;
    pSVar10 = UnityEngine_Component__GetComponents_object__24e8380
                        ((UnityEngine_Component_o *)pIVar9,(MethodInfo_24E8380 *)MethodInfo_NameEffectController_GetComponents_NameEffectController);
    __this_00 = pIVar9;
    if (pSVar10 != (System_Object_array *)0x0) {
      if ((int)pSVar10->max_length < 1) {
label_0450bd7f:
        pIStack_80[5].rgctxDataDummy = (void *)0x0;
        il2cpp_runtime_helper_022b4080(pIStack_80 + 5,0);
        return;
      }
      unaff_RBP = (long *)0x0;
      unaff_R13 = &TypeInfo_Object;
      plVar20 = &TypeInfo_Application;
      pSVar22 = pSVar10;
      if ((pSVar10->max_length & 0xffffffff) != 0) {
        do {
          pIVar15 = (Il2CppRGCTXData *)pSVar10->m_Items[(long)unaff_RBP];
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            plStack_88 = (long *)0x450bcfb;
            il2cpp_runtime_helper_02337ed0();
          }
          method_00 = (UnityEngine_Vector3_array *)0x0;
          plStack_88 = (long *)0x450bd07;
          pIVar9 = pIVar15;
          bVar3 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)pIVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar3 == '\0') {
            __this_00 = pIVar9;
            if (pIVar15 == (Il2CppRGCTXData *)0x0) goto label_0450bda9;
            plStack_88 = (long *)0x450bd1e;
            PatreonEffects_NameEffectController__Clear
                      ((PatreonEffects_NameEffectController_o *)pIVar15,(MethodInfo *)0x0);
            plStack_88 = (long *)0x450bd2a;
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pIVar15,0,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
              plStack_88 = (long *)0x450bd3b;
              il2cpp_runtime_helper_02337ed0();
            }
            plStack_88 = (long *)0x450bd42;
            uVar4 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
            unaff_R12 = (ulong)uVar4;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              plStack_88 = (long *)0x450bd67;
              il2cpp_runtime_helper_02337ed0();
            }
            if ((char)uVar4 == '\0') {
              method_00 = (UnityEngine_Vector3_array *)0x0;
              plStack_88 = (long *)0x450bcc5;
              pIVar9 = pIVar15;
              UnityEngine_Object__DestroyImmediate_4e01e00((UnityEngine_Object_o *)pIVar15,(MethodInfo *)0x0);
            }
            else {
              method_00 = (UnityEngine_Vector3_array *)0x0;
              plStack_88 = (long *)0x450bd7a;
              pIVar9 = pIVar15;
              UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)pIVar15,(MethodInfo *)0x0);
            }
          }
          unaff_RBP = (long *)((long)unaff_RBP + 1);
          uVar4 = (uint)pSVar10->max_length;
          if ((long)(int)uVar4 <= (long)unaff_RBP) goto label_0450bd7f;
        } while (unaff_RBP < (long *)(ulong)uVar4);
      }
      plStack_88 = (long *)0x450bda9;
      il2cpp_runtime_helper_022b2ca0();
      __this_00 = pIVar9;
    }
  }
label_0450bda9:
  plStack_88 = (long *)0x450bdae;
  il2cpp_runtime_helper_022b2c90();
  textInfo = method_00;
  pIStack_98 = pIVar15;
  pUStack_90 = (UnityEngine_Object_o *)plVar20;
  plStack_88 = unaff_RBP;
  if (g_data_057aed61 == '\0') {
    plStack_a0 = (long *)0x450bdcf;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    plStack_a0 = (long *)0x450bddb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed61 = '\x01';
  }
  plStack_a0 = (long *)0x450bdea;
  pIVar15 = __this_00;
  pIVar9 = (Il2CppRGCTXData *)
           Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                     ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)__this_00,(MethodInfo *)textInfo
                     );
  if (pIVar9 != (Il2CppRGCTXData *)0x0) {
    textInfo = (UnityEngine_Vector3_array *)0x0;
    plStack_a0 = (long *)0x450bdfd;
    pUVar11 = TMPro_TMP_Text__get_transform((TMPro_TMP_Text_o *)pIVar9,(MethodInfo *)0x0);
    pIVar15 = pIVar9;
    if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
      plStack_a0 = (long *)0x450be10;
      pIVar9 = (Il2CppRGCTXData *)UnityEngine_Transform__get_parent(pUVar11,(MethodInfo *)0x0);
      unaff_RBP = &TypeInfo_Object;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        plStack_a0 = (long *)0x450be2c;
        il2cpp_runtime_helper_02337ed0();
      }
      textInfo = (UnityEngine_Vector3_array *)0x0;
      plStack_a0 = (long *)0x450be38;
      pIVar15 = pIVar9;
      bVar3 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pIVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        return;
      }
      __this_00 = (Il2CppRGCTXData *)0x0;
      if (pIVar9 != (Il2CppRGCTXData *)0x0) {
        plStack_a0 = (long *)0x450be52;
        pUVar11 = UnityEngine_Transform__Find
                            ((UnityEngine_Transform_o *)pIVar9,(System_String_o *)method_00,(MethodInfo *)0x0)
        ;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          plStack_a0 = (long *)0x450be67;
          il2cpp_runtime_helper_02337ed0();
        }
        textInfo = (UnityEngine_Vector3_array *)0x0;
        plStack_a0 = (long *)0x450be73;
        bVar3 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar3 != '\0') {
          return;
        }
        if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
          plStack_a0 = (long *)0x450be94;
          il2cpp_runtime_helper_02337ed0();
        }
        pIVar15 = (Il2CppRGCTXData *)0x0;
        plStack_a0 = (long *)0x450be9b;
        bVar3 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
        __this_00 = (Il2CppRGCTXData *)0x0;
        if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
          plStack_a0 = (long *)0x450bead;
          pUVar12 = (UnityEngine_Object_o *)
                    UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar11,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            plStack_a0 = (long *)0x450bed5;
            il2cpp_runtime_helper_02337ed0();
          }
          if ((char)bVar3 != '\0') {
            UnityEngine_Object__Destroy_4e01c60(pUVar12,(MethodInfo *)0x0);
            return;
          }
          UnityEngine_Object__DestroyImmediate_4e01e00(pUVar12,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  plStack_a0 = (long *)0x450beed;
  il2cpp_runtime_helper_022b2c90();
  fStack_dc = 0.0;
  fStack_e0 = 0.0;
  if ((pIVar15[6].method == (MethodInfo *)0x0) || ((pIVar15[6].method)->name == (char *)0x0)) {
    return;
  }
  maxX = &fStack_e0;
  method_01 = textInfo;
  pIVar9 = pIVar15;
  pIStack_c8 = __this_00;
  uStack_c0 = unaff_R12;
  plStack_b8 = unaff_R13;
  pUStack_b0 = method_00;
  pSStack_a8 = pSVar22;
  plStack_a0 = unaff_RBP;
  bVar3 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__TryBounds
                    ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pIVar15,
                     (TMPro_TMP_TextInfo_o *)textInfo,&fStack_dc,maxX,in_R8);
  fVar25 = fStack_dc;
  if ((char)bVar3 == '\0') {
    return;
  }
  if (textInfo != (UnityEngine_Vector3_array *)0x0) {
    if ((int)textInfo->max_length < 1) {
      return;
    }
    fVar23 = fStack_e0 - fStack_dc;
    if (fVar23 <= 0.001) {
      fVar23 = 0.001;
    }
    method_01 = (UnityEngine_Vector3_array *)&g_data_00000058;
    pfVar19 = (float *)0x0;
    lVar17._0_4_ = textInfo->m_Items[2].fields.x;
    lVar17._4_4_ = textInfo->m_Items[2].fields.y;
    pUStack_d8 = textInfo;
    while (lVar17 != 0) {
      maxX = (float *)(ulong)*(uint *)(lVar17 + 0x18);
      if (maxX <= pfVar19) goto label_0450c228;
      if ((*(byte *)((long)&method_01->m_Items[0x17].fields.z + lVar17) & 1) != 0) {
        maxX = *(float **)&textInfo->m_Items[5].fields.y;
        if (maxX == (float *)0x0) break;
        fVar26 = *(float *)((long)method_01->m_Items + lVar17 + -0x20);
        if ((uint)maxX[6] <= (uint)fVar26) goto label_0450c228;
        lVar7 = *(long *)(maxX + (long)(int)fVar26 * 0x14 + 0xc);
        if (lVar7 == 0) break;
        uVar4 = *(uint *)((long)(method_01->m_Items + -1) + lVar17);
        pfVar18 = (float *)(ulong)uVar4;
        lVar17 = *(long *)(maxX + (long)(int)fVar26 * 0x14 + 0x16);
        pUStack_d0 = method_01;
        if (lVar17 == 0) {
          if (*(uint *)(lVar7 + 0x18) <= uVar4) goto label_0450c228;
          fVar23 = (*(float *)(lVar7 + 0x20 + (long)(int)uVar4 * 0xc) - fVar25) / fVar23;
          fVar25 = 1.0;
          if (fVar23 <= 1.0) {
            fVar25 = fVar23;
          }
          UVar27 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__Sample
                             ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pIVar15,
                              (float)(-(uint)(0.0 <= fVar23) & (uint)fVar25),(MethodInfo *)method_01);
          pIVar9 = (Il2CppRGCTXData *)0x0;
          il2cpp_runtime_helper_03b428b0(UVar27.fields.r);
          break;
        }
        if ((float *)(ulong)*(uint *)(lVar7 + 0x18) <= pfVar18) goto label_0450c228;
        fVar24 = (*(float *)(lVar7 + 0x20 + (long)(int)uVar4 * 0xc) - fVar25) / fVar23;
        fVar26 = 1.0;
        if (fVar24 <= 1.0) {
          fVar26 = fVar24;
        }
        UVar27 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__Sample
                           ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pIVar15,
                            (float)(-(uint)(0.0 <= fVar24) & (uint)fVar26),(MethodInfo *)method_01);
        pIVar9 = (Il2CppRGCTXData *)0x0;
        uVar5 = il2cpp_runtime_helper_03b428b0(UVar27.fields.r);
        maxX = (float *)(ulong)*(uint *)(lVar17 + 0x18);
        if (maxX <= pfVar18) goto label_0450c228;
        *(undefined4 *)(lVar17 + 0x20 + (long)(int)uVar4 * 4) = uVar5;
        pfVar1 = (float *)((long)pfVar18 + 1);
        if ((float *)(ulong)*(uint *)(lVar7 + 0x18) <= pfVar1) goto label_0450c228;
        fVar24 = (*(float *)(lVar7 + 0x20 + (long)(int)pfVar1 * 0xc) - fVar25) / fVar23;
        fVar26 = 1.0;
        if (fVar24 <= 1.0) {
          fVar26 = fVar24;
        }
        UVar27 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__Sample
                           ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pIVar15,
                            (float)(-(uint)(0.0 <= fVar24) & (uint)fVar26),(MethodInfo *)method_01);
        pIVar9 = (Il2CppRGCTXData *)0x0;
        uVar5 = il2cpp_runtime_helper_03b428b0(UVar27.fields.r);
        maxX = (float *)(ulong)*(uint *)(lVar17 + 0x18);
        if (maxX <= pfVar1) goto label_0450c228;
        *(undefined4 *)(lVar17 + 0x20 + (long)(int)pfVar1 * 4) = uVar5;
        pfVar1 = (float *)((long)pfVar18 + 2);
        if ((float *)(ulong)*(uint *)(lVar7 + 0x18) <= pfVar1) goto label_0450c228;
        fVar24 = (*(float *)(lVar7 + 0x20 + (long)(int)pfVar1 * 0xc) - fVar25) / fVar23;
        fVar26 = 1.0;
        if (fVar24 <= 1.0) {
          fVar26 = fVar24;
        }
        UVar27 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__Sample
                           ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pIVar15,
                            (float)(-(uint)(0.0 <= fVar24) & (uint)fVar26),(MethodInfo *)method_01);
        pIVar9 = (Il2CppRGCTXData *)0x0;
        uVar5 = il2cpp_runtime_helper_03b428b0(UVar27.fields.r);
        maxX = (float *)(ulong)*(uint *)(lVar17 + 0x18);
        if (maxX <= pfVar1) goto label_0450c228;
        *(undefined4 *)(lVar17 + 0x20 + (long)(int)pfVar1 * 4) = uVar5;
        pfVar18 = (float *)((long)pfVar18 + 3);
        if ((float *)(ulong)*(uint *)(lVar7 + 0x18) <= pfVar18) goto label_0450c228;
        fVar24 = (*(float *)(lVar7 + 0x20 + (long)(int)pfVar18 * 0xc) - fVar25) / fVar23;
        fVar26 = 1.0;
        if (fVar24 <= 1.0) {
          fVar26 = fVar24;
        }
        UVar27 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__Sample
                           ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pIVar15,
                            (float)(-(uint)(0.0 <= fVar24) & (uint)fVar26),(MethodInfo *)method_01);
        pIVar9 = (Il2CppRGCTXData *)0x0;
        uVar5 = il2cpp_runtime_helper_03b428b0(UVar27.fields.r);
        maxX = (float *)(ulong)*(uint *)(lVar17 + 0x18);
        if (maxX <= pfVar18) goto label_0450c228;
        *(undefined4 *)(lVar17 + 0x20 + (long)(int)pfVar18 * 4) = uVar5;
        textInfo = pUStack_d8;
        method_01 = pUStack_d0;
      }
      pfVar19 = (float *)((long)pfVar19 + 1);
      method_01 = (UnityEngine_Vector3_array *)&method_01->m_Items[0x1c].fields.z;
      if ((long)(int)textInfo->max_length <= (long)pfVar19) {
        return;
      }
      lVar17._0_4_ = textInfo->m_Items[2].fields.x;
      lVar17._4_4_ = textInfo->m_Items[2].fields.y;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_0450c228:
  il2cpp_runtime_helper_022b2ca0();
  *extraout_RDX = INFINITY;
  *maxX = -INFINITY;
  if (method_01 != (UnityEngine_Vector3_array *)0x0) {
    iVar2 = *(int *)&method_01->max_length;
    fVar25 = -INFINITY;
    if ((long)iVar2 < 1) {
      return;
    }
    lVar17 = 0x58;
    uVar21 = 0;
    pIVar9 = ((_union_13 *)(method_01->m_Items + 2))->rgctx_data;
    if (pIVar9 != (Il2CppRGCTXData *)0x0) {
label_0450c2a1:
      if (uVar21 < *(uint *)(pIVar9 + 3)) {
        if ((*(byte *)((long)pIVar9 + lVar17 + 0x13c) & 1) == 0) {
label_0450c280:
          uVar21 = uVar21 + 1;
          lVar17 = lVar17 + 0x178;
          if ((long)iVar2 <= (long)uVar21) {
            return;
          }
          pIVar9 = ((_union_13 *)(method_01->m_Items + 2))->rgctx_data;
          if (pIVar9 == (Il2CppRGCTXData *)0x0) goto label_0450c3c7;
          goto label_0450c2a1;
        }
        lVar7 = *(long *)&method_01->m_Items[5].fields.y;
        if (lVar7 == 0) goto label_0450c3c7;
        if (*(uint *)(lVar7 + 0x18) <= *(uint *)((long)pIVar9 + lVar17)) goto label_0450c3c2;
        lVar7 = *(long *)(lVar7 + 0x30 + (long)(int)*(uint *)((long)pIVar9 + lVar17) * 0x50);
        if (lVar7 == 0) goto label_0450c3c7;
        uVar4 = *(uint *)((long)pIVar9 + lVar17 + 0x14);
        pIVar9 = (Il2CppRGCTXData *)(ulong)uVar4;
        pIVar15 = (Il2CppRGCTXData *)(ulong)*(uint *)(lVar7 + 0x18);
        if (pIVar9 < pIVar15) {
          fVar25 = *(float *)(lVar7 + 0x20 + (long)(int)uVar4 * 0xc);
          fVar23 = *extraout_RDX;
          if (fVar25 <= *extraout_RDX) {
            fVar23 = fVar25;
          }
          *extraout_RDX = fVar23;
          fVar23 = *maxX;
          if (*maxX <= fVar25) {
            fVar23 = fVar25;
          }
          *maxX = fVar23;
          if ((Il2CppRGCTXData *)((long)pIVar9 + 1U) < pIVar15) {
            fVar25 = *(float *)(lVar7 + 0x20 + (long)(int)(Il2CppRGCTXData *)((long)pIVar9 + 1U) * 0xc);
            fVar23 = *extraout_RDX;
            if (fVar25 <= *extraout_RDX) {
              fVar23 = fVar25;
            }
            *extraout_RDX = fVar23;
            fVar23 = *maxX;
            if (*maxX <= fVar25) {
              fVar23 = fVar25;
            }
            *maxX = fVar23;
            if ((Il2CppRGCTXData *)((long)pIVar9 + 2U) < pIVar15) {
              fVar25 = *(float *)(lVar7 + 0x20 + (long)(int)(Il2CppRGCTXData *)((long)pIVar9 + 2U) * 0xc);
              fVar23 = *extraout_RDX;
              if (fVar25 <= *extraout_RDX) {
                fVar23 = fVar25;
              }
              *extraout_RDX = fVar23;
              fVar23 = *maxX;
              if (*maxX <= fVar25) {
                fVar23 = fVar25;
              }
              *maxX = fVar23;
              pIVar9 = (Il2CppRGCTXData *)((long)pIVar9 + 3);
              if (pIVar9 < pIVar15) {
                fVar23 = *(float *)(lVar7 + 0x20 + (long)(int)pIVar9 * 0xc);
                fVar25 = *extraout_RDX;
                if (fVar23 <= *extraout_RDX) {
                  fVar25 = fVar23;
                }
                *extraout_RDX = fVar25;
                fVar25 = *maxX;
                if (*maxX <= fVar23) {
                  fVar25 = fVar23;
                }
                *maxX = fVar25;
                goto label_0450c280;
              }
            }
          }
        }
      }
label_0450c3c2:
      il2cpp_runtime_helper_022b2ca0(fVar25);
    }
  }
label_0450c3c7:
  fVar25 = (float)il2cpp_runtime_helper_022b2c90();
  pIVar15 = pIVar9;
  if (pIVar9[6].method != (MethodInfo *)0x0) {
    iVar2 = *(int *)&(pIVar9[6].method)->name;
    if (iVar2 == 1) {
      return;
    }
    fVar23 = 1.0;
    if (fVar25 <= 1.0) {
      fVar23 = fVar25;
    }
    if (g_data_057a690a == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a690a = '\x01';
    }
    pIVar15 = TypeInfo_Math;
    if (*(int *)((long)TypeInfo_Math + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    fVar25 = floorf((float)(-(uint)(0.0 <= fVar25) & (uint)fVar23) * (float)(iVar2 + -1));
    if (pIVar9[6].method != (MethodInfo *)0x0) {
      uVar16 = (uint)fVar25;
      method_01 = (UnityEngine_Vector3_array *)(ulong)uVar16;
      uVar4 = *(uint *)&(pIVar9[6].method)->name;
      uVar13 = uVar4 - 2;
      if ((int)uVar16 < (int)(uVar4 - 2)) {
        uVar13 = uVar16;
      }
      if ((uVar13 < uVar4) &&
         (method_01 = (UnityEngine_Vector3_array *)(ulong)(uVar13 + 1), uVar13 + 1 < uVar4)) {
        return;
      }
      goto label_0450c50d;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_0450c50d:
  il2cpp_runtime_helper_022b2ca0();
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ClearEffect
            ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pIVar15,(MethodInfo *)method_01);
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ClearVertexColors
            ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pIVar15,(MethodInfo *)method_01);
  return;
}


// Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$ClearVertexColors
// il2cpp: void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ClearVertexColors (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o* __this, const MethodInfo* method);
// 0x450ba90

void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ClearVertexColors
               (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *__this,MethodInfo *method)

{
  float *pfVar1;
  int iVar2;
  TMPro_TMP_Text_o *pTVar3;
  bool_conflict bVar4;
  uint uVar5;
  undefined4 uVar6;
  long lVar7;
  Il2CppRGCTXData *pIVar8;
  System_Object_array *pSVar9;
  UnityEngine_Transform_o *pUVar10;
  UnityEngine_Object_o *pUVar11;
  uint uVar12;
  float *maxX;
  float *extraout_RDX;
  undefined8 *puVar13;
  Il2CppRGCTXData *pIVar14;
  Il2CppRGCTXData *__this_00;
  UnityEngine_Vector3_array *textInfo;
  long *unaff_RBP;
  uint uVar15;
  UnityEngine_Vector3_array *method_00;
  UnityEngine_Vector3_array *method_01;
  MethodInfo *in_R8;
  long lVar16;
  ulong unaff_R12;
  float *pfVar17;
  long *unaff_R13;
  float *pfVar18;
  long *x;
  ulong uVar19;
  System_Object_array *pSVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  UnityEngine_Color_o UVar25;
  float fStack_c8;
  float fStack_c4;
  UnityEngine_Vector3_array *pUStack_c0;
  UnityEngine_Vector3_array *pUStack_b8;
  Il2CppRGCTXData *pIStack_b0;
  ulong uStack_a8;
  long *plStack_a0;
  UnityEngine_Vector3_array *pUStack_98;
  System_Object_array *pSStack_90;
  long *plStack_88;
  Il2CppRGCTXData *pIStack_80;
  UnityEngine_Object_o *pUStack_78;
  long *plStack_70;
  Il2CppRGCTXData *pIStack_68;
  undefined8 *puStack_60;
  
  if (g_data_057aed5d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_TMP_TextInfo);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ApplyVertexColors);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed5d = '\x01';
  }
  (__this->fields)._colors = (UnityEngine_Color_array *)0x0;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._colors);
  if ((char)(__this->fields)._hooked == '\0') {
label_0450bb59:
    *(undefined1 *)&(__this->fields)._hooked = 0;
    return;
  }
  pTVar3 = (__this->fields)._text;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') goto label_0450bb59;
  pTVar3 = (__this->fields)._text;
  lVar7 = il2cpp_runtime_helper_023052d0(TypeInfo_Action_TMP_TextInfo);
  lVar16 = lVar7;
  System_Action_object____ctor();
  if (pTVar3 != (TMPro_TMP_Text_o *)0x0) {
    (*(pTVar3->klass->vtable)._79_remove_OnPreRenderText.methodPtr)
              (pTVar3,lVar7,(pTVar3->klass->vtable)._79_remove_OnPreRenderText.method);
    goto label_0450bb59;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed5e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed5e = '\x01';
  }
  x = *(long **)(lVar16 + 0x28);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_00 = (UnityEngine_Vector3_array *)0x0;
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    return;
  }
  puVar13 = (undefined8 *)(lVar16 + 0x28);
  pIVar14 = (Il2CppRGCTXData *)*puVar13;
  if (pIVar14 != (Il2CppRGCTXData *)0x0) {
    PatreonEffects_NameEffectController__Clear
              ((PatreonEffects_NameEffectController_o *)pIVar14,(MethodInfo *)0x0);
    pUVar11 = (UnityEngine_Object_o *)*puVar13;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar11,(MethodInfo *)0x0);
    *puVar13 = 0;
    il2cpp_runtime_helper_022b4080(puVar13,0);
    return;
  }
  pIStack_68 = (Il2CppRGCTXData *)il2cpp_runtime_helper_022b2c90();
  puStack_60 = puVar13;
  if (g_data_057aed60 == '\0') {
    plStack_70 = (long *)0x450bc43;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    plStack_70 = (long *)0x450bc4f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_NameEffectController_GetComponents_NameEffectController);
    plStack_70 = (long *)0x450bc5b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed60 = '\x01';
  }
  plStack_70 = (long *)0x450bc6a;
  __this_00 = pIVar14;
  pIVar8 = (Il2CppRGCTXData *)
           Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                     ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pIVar14,(MethodInfo *)method_00)
  ;
  pSVar20 = (System_Object_array *)&TypeInfo_Object;
  if (pIVar8 != (Il2CppRGCTXData *)0x0) {
    plStack_70 = (long *)0x450bc89;
    method_00 = MethodInfo_NameEffectController_GetComponents_NameEffectController;
    pIStack_68 = pIVar14;
    pSVar9 = UnityEngine_Component__GetComponents_object__24e8380
                       ((UnityEngine_Component_o *)pIVar8,(MethodInfo_24E8380 *)MethodInfo_NameEffectController_GetComponents_NameEffectController);
    __this_00 = pIVar8;
    if (pSVar9 != (System_Object_array *)0x0) {
      if ((int)pSVar9->max_length < 1) {
label_0450bd7f:
        pIStack_68[5].rgctxDataDummy = (void *)0x0;
        il2cpp_runtime_helper_022b4080(pIStack_68 + 5,0);
        return;
      }
      unaff_RBP = (long *)0x0;
      unaff_R13 = &TypeInfo_Object;
      x = &TypeInfo_Application;
      pSVar20 = pSVar9;
      if ((pSVar9->max_length & 0xffffffff) != 0) {
        do {
          pIVar14 = (Il2CppRGCTXData *)pSVar9->m_Items[(long)unaff_RBP];
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            plStack_70 = (long *)0x450bcfb;
            il2cpp_runtime_helper_02337ed0();
          }
          method_00 = (UnityEngine_Vector3_array *)0x0;
          plStack_70 = (long *)0x450bd07;
          pIVar8 = pIVar14;
          bVar4 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)pIVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar4 == '\0') {
            __this_00 = pIVar8;
            if (pIVar14 == (Il2CppRGCTXData *)0x0) goto label_0450bda9;
            plStack_70 = (long *)0x450bd1e;
            PatreonEffects_NameEffectController__Clear
                      ((PatreonEffects_NameEffectController_o *)pIVar14,(MethodInfo *)0x0);
            plStack_70 = (long *)0x450bd2a;
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pIVar14,0,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
              plStack_70 = (long *)0x450bd3b;
              il2cpp_runtime_helper_02337ed0();
            }
            plStack_70 = (long *)0x450bd42;
            uVar5 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
            unaff_R12 = (ulong)uVar5;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              plStack_70 = (long *)0x450bd67;
              il2cpp_runtime_helper_02337ed0();
            }
            if ((char)uVar5 == '\0') {
              method_00 = (UnityEngine_Vector3_array *)0x0;
              plStack_70 = (long *)0x450bcc5;
              pIVar8 = pIVar14;
              UnityEngine_Object__DestroyImmediate_4e01e00((UnityEngine_Object_o *)pIVar14,(MethodInfo *)0x0);
            }
            else {
              method_00 = (UnityEngine_Vector3_array *)0x0;
              plStack_70 = (long *)0x450bd7a;
              pIVar8 = pIVar14;
              UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)pIVar14,(MethodInfo *)0x0);
            }
          }
          unaff_RBP = (long *)((long)unaff_RBP + 1);
          uVar5 = (uint)pSVar9->max_length;
          if ((long)(int)uVar5 <= (long)unaff_RBP) goto label_0450bd7f;
        } while (unaff_RBP < (long *)(ulong)uVar5);
      }
      plStack_70 = (long *)0x450bda9;
      il2cpp_runtime_helper_022b2ca0();
      __this_00 = pIVar8;
    }
  }
label_0450bda9:
  plStack_70 = (long *)0x450bdae;
  il2cpp_runtime_helper_022b2c90();
  textInfo = method_00;
  pIStack_80 = pIVar14;
  pUStack_78 = (UnityEngine_Object_o *)x;
  plStack_70 = unaff_RBP;
  if (g_data_057aed61 == '\0') {
    plStack_88 = (long *)0x450bdcf;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    plStack_88 = (long *)0x450bddb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed61 = '\x01';
  }
  plStack_88 = (long *)0x450bdea;
  pIVar14 = __this_00;
  pIVar8 = (Il2CppRGCTXData *)
           Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                     ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)__this_00,(MethodInfo *)textInfo
                     );
  if (pIVar8 != (Il2CppRGCTXData *)0x0) {
    textInfo = (UnityEngine_Vector3_array *)0x0;
    plStack_88 = (long *)0x450bdfd;
    pUVar10 = TMPro_TMP_Text__get_transform((TMPro_TMP_Text_o *)pIVar8,(MethodInfo *)0x0);
    pIVar14 = pIVar8;
    if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
      plStack_88 = (long *)0x450be10;
      pIVar8 = (Il2CppRGCTXData *)UnityEngine_Transform__get_parent(pUVar10,(MethodInfo *)0x0);
      unaff_RBP = &TypeInfo_Object;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        plStack_88 = (long *)0x450be2c;
        il2cpp_runtime_helper_02337ed0();
      }
      textInfo = (UnityEngine_Vector3_array *)0x0;
      plStack_88 = (long *)0x450be38;
      pIVar14 = pIVar8;
      bVar4 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pIVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        return;
      }
      __this_00 = (Il2CppRGCTXData *)0x0;
      if (pIVar8 != (Il2CppRGCTXData *)0x0) {
        plStack_88 = (long *)0x450be52;
        pUVar10 = UnityEngine_Transform__Find
                            ((UnityEngine_Transform_o *)pIVar8,(System_String_o *)method_00,(MethodInfo *)0x0)
        ;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          plStack_88 = (long *)0x450be67;
          il2cpp_runtime_helper_02337ed0();
        }
        textInfo = (UnityEngine_Vector3_array *)0x0;
        plStack_88 = (long *)0x450be73;
        bVar4 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          return;
        }
        if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
          plStack_88 = (long *)0x450be94;
          il2cpp_runtime_helper_02337ed0();
        }
        pIVar14 = (Il2CppRGCTXData *)0x0;
        plStack_88 = (long *)0x450be9b;
        bVar4 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
        __this_00 = (Il2CppRGCTXData *)0x0;
        if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
          plStack_88 = (long *)0x450bead;
          pUVar11 = (UnityEngine_Object_o *)
                    UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar10,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            plStack_88 = (long *)0x450bed5;
            il2cpp_runtime_helper_02337ed0();
          }
          if ((char)bVar4 != '\0') {
            UnityEngine_Object__Destroy_4e01c60(pUVar11,(MethodInfo *)0x0);
            return;
          }
          UnityEngine_Object__DestroyImmediate_4e01e00(pUVar11,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  plStack_88 = (long *)0x450beed;
  il2cpp_runtime_helper_022b2c90();
  fStack_c4 = 0.0;
  fStack_c8 = 0.0;
  if ((pIVar14[6].method == (MethodInfo *)0x0) || ((pIVar14[6].method)->name == (char *)0x0)) {
    return;
  }
  maxX = &fStack_c8;
  method_01 = textInfo;
  pIVar8 = pIVar14;
  pIStack_b0 = __this_00;
  uStack_a8 = unaff_R12;
  plStack_a0 = unaff_R13;
  pUStack_98 = method_00;
  pSStack_90 = pSVar20;
  plStack_88 = unaff_RBP;
  bVar4 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__TryBounds
                    ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pIVar14,
                     (TMPro_TMP_TextInfo_o *)textInfo,&fStack_c4,maxX,in_R8);
  fVar23 = fStack_c4;
  if ((char)bVar4 == '\0') {
    return;
  }
  if (textInfo != (UnityEngine_Vector3_array *)0x0) {
    if ((int)textInfo->max_length < 1) {
      return;
    }
    fVar21 = fStack_c8 - fStack_c4;
    if (fVar21 <= 0.001) {
      fVar21 = 0.001;
    }
    method_01 = (UnityEngine_Vector3_array *)&g_data_00000058;
    pfVar18 = (float *)0x0;
    lVar16._0_4_ = textInfo->m_Items[2].fields.x;
    lVar16._4_4_ = textInfo->m_Items[2].fields.y;
    pUStack_c0 = textInfo;
    while (lVar16 != 0) {
      maxX = (float *)(ulong)*(uint *)(lVar16 + 0x18);
      if (maxX <= pfVar18) goto label_0450c228;
      if ((*(byte *)((long)&method_01->m_Items[0x17].fields.z + lVar16) & 1) != 0) {
        maxX = *(float **)&textInfo->m_Items[5].fields.y;
        if (maxX == (float *)0x0) break;
        fVar24 = *(float *)((long)method_01->m_Items + lVar16 + -0x20);
        if ((uint)maxX[6] <= (uint)fVar24) goto label_0450c228;
        lVar7 = *(long *)(maxX + (long)(int)fVar24 * 0x14 + 0xc);
        if (lVar7 == 0) break;
        uVar5 = *(uint *)((long)(method_01->m_Items + -1) + lVar16);
        pfVar17 = (float *)(ulong)uVar5;
        lVar16 = *(long *)(maxX + (long)(int)fVar24 * 0x14 + 0x16);
        pUStack_b8 = method_01;
        if (lVar16 == 0) {
          if (*(uint *)(lVar7 + 0x18) <= uVar5) goto label_0450c228;
          fVar21 = (*(float *)(lVar7 + 0x20 + (long)(int)uVar5 * 0xc) - fVar23) / fVar21;
          fVar23 = 1.0;
          if (fVar21 <= 1.0) {
            fVar23 = fVar21;
          }
          UVar25 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__Sample
                             ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pIVar14,
                              (float)(-(uint)(0.0 <= fVar21) & (uint)fVar23),(MethodInfo *)method_01);
          pIVar8 = (Il2CppRGCTXData *)0x0;
          il2cpp_runtime_helper_03b428b0(UVar25.fields.r);
          break;
        }
        if ((float *)(ulong)*(uint *)(lVar7 + 0x18) <= pfVar17) goto label_0450c228;
        fVar22 = (*(float *)(lVar7 + 0x20 + (long)(int)uVar5 * 0xc) - fVar23) / fVar21;
        fVar24 = 1.0;
        if (fVar22 <= 1.0) {
          fVar24 = fVar22;
        }
        UVar25 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__Sample
                           ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pIVar14,
                            (float)(-(uint)(0.0 <= fVar22) & (uint)fVar24),(MethodInfo *)method_01);
        pIVar8 = (Il2CppRGCTXData *)0x0;
        uVar6 = il2cpp_runtime_helper_03b428b0(UVar25.fields.r);
        maxX = (float *)(ulong)*(uint *)(lVar16 + 0x18);
        if (maxX <= pfVar17) goto label_0450c228;
        *(undefined4 *)(lVar16 + 0x20 + (long)(int)uVar5 * 4) = uVar6;
        pfVar1 = (float *)((long)pfVar17 + 1);
        if ((float *)(ulong)*(uint *)(lVar7 + 0x18) <= pfVar1) goto label_0450c228;
        fVar22 = (*(float *)(lVar7 + 0x20 + (long)(int)pfVar1 * 0xc) - fVar23) / fVar21;
        fVar24 = 1.0;
        if (fVar22 <= 1.0) {
          fVar24 = fVar22;
        }
        UVar25 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__Sample
                           ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pIVar14,
                            (float)(-(uint)(0.0 <= fVar22) & (uint)fVar24),(MethodInfo *)method_01);
        pIVar8 = (Il2CppRGCTXData *)0x0;
        uVar6 = il2cpp_runtime_helper_03b428b0(UVar25.fields.r);
        maxX = (float *)(ulong)*(uint *)(lVar16 + 0x18);
        if (maxX <= pfVar1) goto label_0450c228;
        *(undefined4 *)(lVar16 + 0x20 + (long)(int)pfVar1 * 4) = uVar6;
        pfVar1 = (float *)((long)pfVar17 + 2);
        if ((float *)(ulong)*(uint *)(lVar7 + 0x18) <= pfVar1) goto label_0450c228;
        fVar22 = (*(float *)(lVar7 + 0x20 + (long)(int)pfVar1 * 0xc) - fVar23) / fVar21;
        fVar24 = 1.0;
        if (fVar22 <= 1.0) {
          fVar24 = fVar22;
        }
        UVar25 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__Sample
                           ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pIVar14,
                            (float)(-(uint)(0.0 <= fVar22) & (uint)fVar24),(MethodInfo *)method_01);
        pIVar8 = (Il2CppRGCTXData *)0x0;
        uVar6 = il2cpp_runtime_helper_03b428b0(UVar25.fields.r);
        maxX = (float *)(ulong)*(uint *)(lVar16 + 0x18);
        if (maxX <= pfVar1) goto label_0450c228;
        *(undefined4 *)(lVar16 + 0x20 + (long)(int)pfVar1 * 4) = uVar6;
        pfVar17 = (float *)((long)pfVar17 + 3);
        if ((float *)(ulong)*(uint *)(lVar7 + 0x18) <= pfVar17) goto label_0450c228;
        fVar22 = (*(float *)(lVar7 + 0x20 + (long)(int)pfVar17 * 0xc) - fVar23) / fVar21;
        fVar24 = 1.0;
        if (fVar22 <= 1.0) {
          fVar24 = fVar22;
        }
        UVar25 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__Sample
                           ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pIVar14,
                            (float)(-(uint)(0.0 <= fVar22) & (uint)fVar24),(MethodInfo *)method_01);
        pIVar8 = (Il2CppRGCTXData *)0x0;
        uVar6 = il2cpp_runtime_helper_03b428b0(UVar25.fields.r);
        maxX = (float *)(ulong)*(uint *)(lVar16 + 0x18);
        if (maxX <= pfVar17) goto label_0450c228;
        *(undefined4 *)(lVar16 + 0x20 + (long)(int)pfVar17 * 4) = uVar6;
        textInfo = pUStack_c0;
        method_01 = pUStack_b8;
      }
      pfVar18 = (float *)((long)pfVar18 + 1);
      method_01 = (UnityEngine_Vector3_array *)&method_01->m_Items[0x1c].fields.z;
      if ((long)(int)textInfo->max_length <= (long)pfVar18) {
        return;
      }
      lVar16._0_4_ = textInfo->m_Items[2].fields.x;
      lVar16._4_4_ = textInfo->m_Items[2].fields.y;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_0450c228:
  il2cpp_runtime_helper_022b2ca0();
  *extraout_RDX = INFINITY;
  *maxX = -INFINITY;
  if (method_01 != (UnityEngine_Vector3_array *)0x0) {
    iVar2 = *(int *)&method_01->max_length;
    fVar23 = -INFINITY;
    if ((long)iVar2 < 1) {
      return;
    }
    lVar16 = 0x58;
    uVar19 = 0;
    pIVar8 = ((_union_13 *)(method_01->m_Items + 2))->rgctx_data;
    if (pIVar8 != (Il2CppRGCTXData *)0x0) {
label_0450c2a1:
      if (uVar19 < *(uint *)(pIVar8 + 3)) {
        if ((*(byte *)((long)pIVar8 + lVar16 + 0x13c) & 1) == 0) {
label_0450c280:
          uVar19 = uVar19 + 1;
          lVar16 = lVar16 + 0x178;
          if ((long)iVar2 <= (long)uVar19) {
            return;
          }
          pIVar8 = ((_union_13 *)(method_01->m_Items + 2))->rgctx_data;
          if (pIVar8 == (Il2CppRGCTXData *)0x0) goto label_0450c3c7;
          goto label_0450c2a1;
        }
        lVar7 = *(long *)&method_01->m_Items[5].fields.y;
        if (lVar7 == 0) goto label_0450c3c7;
        if (*(uint *)(lVar7 + 0x18) <= *(uint *)((long)pIVar8 + lVar16)) goto label_0450c3c2;
        lVar7 = *(long *)(lVar7 + 0x30 + (long)(int)*(uint *)((long)pIVar8 + lVar16) * 0x50);
        if (lVar7 == 0) goto label_0450c3c7;
        uVar5 = *(uint *)((long)pIVar8 + lVar16 + 0x14);
        pIVar8 = (Il2CppRGCTXData *)(ulong)uVar5;
        pIVar14 = (Il2CppRGCTXData *)(ulong)*(uint *)(lVar7 + 0x18);
        if (pIVar8 < pIVar14) {
          fVar23 = *(float *)(lVar7 + 0x20 + (long)(int)uVar5 * 0xc);
          fVar21 = *extraout_RDX;
          if (fVar23 <= *extraout_RDX) {
            fVar21 = fVar23;
          }
          *extraout_RDX = fVar21;
          fVar21 = *maxX;
          if (*maxX <= fVar23) {
            fVar21 = fVar23;
          }
          *maxX = fVar21;
          if ((Il2CppRGCTXData *)((long)pIVar8 + 1U) < pIVar14) {
            fVar23 = *(float *)(lVar7 + 0x20 + (long)(int)(Il2CppRGCTXData *)((long)pIVar8 + 1U) * 0xc);
            fVar21 = *extraout_RDX;
            if (fVar23 <= *extraout_RDX) {
              fVar21 = fVar23;
            }
            *extraout_RDX = fVar21;
            fVar21 = *maxX;
            if (*maxX <= fVar23) {
              fVar21 = fVar23;
            }
            *maxX = fVar21;
            if ((Il2CppRGCTXData *)((long)pIVar8 + 2U) < pIVar14) {
              fVar23 = *(float *)(lVar7 + 0x20 + (long)(int)(Il2CppRGCTXData *)((long)pIVar8 + 2U) * 0xc);
              fVar21 = *extraout_RDX;
              if (fVar23 <= *extraout_RDX) {
                fVar21 = fVar23;
              }
              *extraout_RDX = fVar21;
              fVar21 = *maxX;
              if (*maxX <= fVar23) {
                fVar21 = fVar23;
              }
              *maxX = fVar21;
              pIVar8 = (Il2CppRGCTXData *)((long)pIVar8 + 3);
              if (pIVar8 < pIVar14) {
                fVar21 = *(float *)(lVar7 + 0x20 + (long)(int)pIVar8 * 0xc);
                fVar23 = *extraout_RDX;
                if (fVar21 <= *extraout_RDX) {
                  fVar23 = fVar21;
                }
                *extraout_RDX = fVar23;
                fVar23 = *maxX;
                if (*maxX <= fVar21) {
                  fVar23 = fVar21;
                }
                *maxX = fVar23;
                goto label_0450c280;
              }
            }
          }
        }
      }
label_0450c3c2:
      il2cpp_runtime_helper_022b2ca0(fVar23);
    }
  }
label_0450c3c7:
  fVar23 = (float)il2cpp_runtime_helper_022b2c90();
  pIVar14 = pIVar8;
  if (pIVar8[6].method != (MethodInfo *)0x0) {
    iVar2 = *(int *)&(pIVar8[6].method)->name;
    if (iVar2 == 1) {
      return;
    }
    fVar21 = 1.0;
    if (fVar23 <= 1.0) {
      fVar21 = fVar23;
    }
    if (g_data_057a690a == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a690a = '\x01';
    }
    pIVar14 = TypeInfo_Math;
    if (*(int *)((long)TypeInfo_Math + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    fVar23 = floorf((float)(-(uint)(0.0 <= fVar23) & (uint)fVar21) * (float)(iVar2 + -1));
    if (pIVar8[6].method != (MethodInfo *)0x0) {
      uVar15 = (uint)fVar23;
      method_01 = (UnityEngine_Vector3_array *)(ulong)uVar15;
      uVar5 = *(uint *)&(pIVar8[6].method)->name;
      uVar12 = uVar5 - 2;
      if ((int)uVar15 < (int)(uVar5 - 2)) {
        uVar12 = uVar15;
      }
      if ((uVar12 < uVar5) &&
         (method_01 = (UnityEngine_Vector3_array *)(ulong)(uVar12 + 1), uVar12 + 1 < uVar5)) {
        return;
      }
      goto label_0450c50d;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_0450c50d:
  il2cpp_runtime_helper_022b2ca0();
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ClearEffect
            ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pIVar14,(MethodInfo *)method_01);
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ClearVertexColors
            ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pIVar14,(MethodInfo *)method_01);
  return;
}


// Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$ClearEffect
// il2cpp: void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ClearEffect (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o* __this, const MethodInfo* method);
// 0x450bb70

void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ClearEffect
               (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *__this,MethodInfo *method)

{
  TMPro_TMP_MeshInfo_array *pTVar1;
  int iVar2;
  PatreonEffects_NameEffectController_o *obj;
  TMPro_TMP_CharacterInfo_array *pTVar3;
  UnityEngine_Color32_array *pUVar4;
  long lVar5;
  bool_conflict bVar6;
  uint uVar7;
  int32_t iVar8;
  Il2CppRGCTXData *pIVar9;
  UnityEngine_Vector3_array *pUVar10;
  UnityEngine_Transform_o *pUVar11;
  UnityEngine_Object_o *obj_00;
  uint uVar12;
  TMPro_TMP_MeshInfo_array *maxX;
  float *extraout_RDX;
  PatreonEffects_NameEffectController_o **ppPVar13;
  Il2CppRGCTXData *pIVar14;
  Il2CppRGCTXData *__this_00;
  UnityEngine_Vector4_array *unaff_RBP;
  uint uVar15;
  UnityEngine_Vector3_array *pUVar16;
  UnityEngine_Vector3_array *method_00;
  MethodInfo *in_R8;
  long lVar17;
  UnityEngine_Mesh_o *unaff_R12;
  TMPro_TMP_MeshInfo_array *pTVar18;
  undefined8 *unaff_R13;
  TMPro_TMP_MeshInfo_array *pTVar19;
  UnityEngine_Vector2_array *x;
  ulong uVar20;
  UnityEngine_Vector3_array *pUVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  UnityEngine_Color_o UVar26;
  float fStack_b0;
  float fStack_ac;
  UnityEngine_Vector3_array *pUStack_a8;
  UnityEngine_Vector3_array *pUStack_a0;
  Il2CppRGCTXData *pIStack_98;
  UnityEngine_Mesh_o *pUStack_90;
  undefined8 *puStack_88;
  UnityEngine_Vector3_array *pUStack_80;
  UnityEngine_Vector3_array *pUStack_78;
  UnityEngine_Vector4_array *pUStack_70;
  Il2CppRGCTXData *pIStack_68;
  UnityEngine_Vector2_array *pUStack_60;
  UnityEngine_Vector4_array *pUStack_58;
  Il2CppRGCTXData *pIStack_50;
  UnityEngine_Material_o *pUStack_48;
  
  if (g_data_057aed5e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed5e = '\x01';
  }
  x = (UnityEngine_Vector2_array *)(__this->fields)._effect;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar16 = (UnityEngine_Vector3_array *)0x0;
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return;
  }
  ppPVar13 = &(__this->fields)._effect;
  pIVar14 = (Il2CppRGCTXData *)*ppPVar13;
  if (pIVar14 != (Il2CppRGCTXData *)0x0) {
    PatreonEffects_NameEffectController__Clear
              ((PatreonEffects_NameEffectController_o *)pIVar14,(MethodInfo *)0x0);
    obj = *ppPVar13;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)obj,(MethodInfo *)0x0);
    *ppPVar13 = (PatreonEffects_NameEffectController_o *)0x0;
    il2cpp_runtime_helper_022b4080(ppPVar13,0);
    return;
  }
  pIStack_50 = (Il2CppRGCTXData *)il2cpp_runtime_helper_022b2c90();
  pUStack_48 = (UnityEngine_Material_o *)ppPVar13;
  if (g_data_057aed60 == '\0') {
    pUStack_58 = (UnityEngine_Vector4_array *)0x450bc43;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    pUStack_58 = (UnityEngine_Vector4_array *)0x450bc4f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_NameEffectController_GetComponents_NameEffectController);
    pUStack_58 = (UnityEngine_Vector4_array *)0x450bc5b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed60 = '\x01';
  }
  pUStack_58 = (UnityEngine_Vector4_array *)0x450bc6a;
  __this_00 = pIVar14;
  pIVar9 = (Il2CppRGCTXData *)
           Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                     ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pIVar14,(MethodInfo *)pUVar16);
  pUVar21 = (UnityEngine_Vector3_array *)&TypeInfo_Object;
  if (pIVar9 != (Il2CppRGCTXData *)0x0) {
    pUStack_58 = (UnityEngine_Vector4_array *)0x450bc89;
    pUVar16 = MethodInfo_NameEffectController_GetComponents_NameEffectController;
    pIStack_50 = pIVar14;
    pUVar10 = (UnityEngine_Vector3_array *)
              UnityEngine_Component__GetComponents_object__24e8380
                        ((UnityEngine_Component_o *)pIVar9,(MethodInfo_24E8380 *)MethodInfo_NameEffectController_GetComponents_NameEffectController);
    __this_00 = pIVar9;
    if (pUVar10 != (UnityEngine_Vector3_array *)0x0) {
      if ((int)pUVar10->max_length < 1) {
label_0450bd7f:
        pIStack_50[5].rgctxDataDummy = (void *)0x0;
        il2cpp_runtime_helper_022b4080(pIStack_50 + 5,0);
        return;
      }
      unaff_RBP = (UnityEngine_Vector4_array *)0x0;
      unaff_R13 = &TypeInfo_Object;
      x = (UnityEngine_Vector2_array *)&TypeInfo_Application;
      pUVar21 = pUVar10;
      if ((pUVar10->max_length & 0xffffffff) != 0) {
        do {
          pIVar14 = *(Il2CppRGCTXData **)((long)&pUVar10->m_Items[0].fields.x + unaff_RBP * 8);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            pUStack_58 = (UnityEngine_Vector4_array *)0x450bcfb;
            il2cpp_runtime_helper_02337ed0();
          }
          pUVar16 = (UnityEngine_Vector3_array *)0x0;
          pUStack_58 = (UnityEngine_Vector4_array *)0x450bd07;
          pIVar9 = pIVar14;
          bVar6 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)pIVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar6 == '\0') {
            __this_00 = pIVar9;
            if (pIVar14 == (Il2CppRGCTXData *)0x0) goto label_0450bda9;
            pUStack_58 = (UnityEngine_Vector4_array *)0x450bd1e;
            PatreonEffects_NameEffectController__Clear
                      ((PatreonEffects_NameEffectController_o *)pIVar14,(MethodInfo *)0x0);
            pUStack_58 = (UnityEngine_Vector4_array *)0x450bd2a;
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pIVar14,0,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
              pUStack_58 = (UnityEngine_Vector4_array *)0x450bd3b;
              il2cpp_runtime_helper_02337ed0();
            }
            pUStack_58 = (UnityEngine_Vector4_array *)0x450bd42;
            uVar7 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
            unaff_R12 = (UnityEngine_Mesh_o *)(ulong)uVar7;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              pUStack_58 = (UnityEngine_Vector4_array *)0x450bd67;
              il2cpp_runtime_helper_02337ed0();
            }
            if ((char)uVar7 == '\0') {
              pUVar16 = (UnityEngine_Vector3_array *)0x0;
              pUStack_58 = (UnityEngine_Vector4_array *)0x450bcc5;
              pIVar9 = pIVar14;
              UnityEngine_Object__DestroyImmediate_4e01e00((UnityEngine_Object_o *)pIVar14,(MethodInfo *)0x0);
            }
            else {
              pUVar16 = (UnityEngine_Vector3_array *)0x0;
              pUStack_58 = (UnityEngine_Vector4_array *)0x450bd7a;
              pIVar9 = pIVar14;
              UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)pIVar14,(MethodInfo *)0x0);
            }
          }
          unaff_RBP = (UnityEngine_Vector4_array *)((long)&(unaff_RBP->obj).klass + 1);
          uVar7 = (uint)pUVar10->max_length;
          if ((long)(int)uVar7 <= (long)unaff_RBP) goto label_0450bd7f;
        } while (unaff_RBP < (UnityEngine_Vector4_array *)(ulong)uVar7);
      }
      pUStack_58 = (UnityEngine_Vector4_array *)0x450bda9;
      il2cpp_runtime_helper_022b2ca0();
      __this_00 = pIVar9;
    }
  }
label_0450bda9:
  pUStack_58 = (UnityEngine_Vector4_array *)0x450bdae;
  il2cpp_runtime_helper_022b2c90();
  pUVar10 = pUVar16;
  pIStack_68 = pIVar14;
  pUStack_60 = x;
  pUStack_58 = unaff_RBP;
  if (g_data_057aed61 == '\0') {
    pUStack_70 = (UnityEngine_Vector4_array *)0x450bdcf;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    pUStack_70 = (UnityEngine_Vector4_array *)0x450bddb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed61 = '\x01';
  }
  pUStack_70 = (UnityEngine_Vector4_array *)0x450bdea;
  pIVar14 = __this_00;
  pIVar9 = (Il2CppRGCTXData *)
           Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                     ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)__this_00,(MethodInfo *)pUVar10)
  ;
  if (pIVar9 != (Il2CppRGCTXData *)0x0) {
    pUVar10 = (UnityEngine_Vector3_array *)0x0;
    pUStack_70 = (UnityEngine_Vector4_array *)0x450bdfd;
    pUVar11 = TMPro_TMP_Text__get_transform((TMPro_TMP_Text_o *)pIVar9,(MethodInfo *)0x0);
    pIVar14 = pIVar9;
    if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
      pUStack_70 = (UnityEngine_Vector4_array *)0x450be10;
      pIVar9 = (Il2CppRGCTXData *)UnityEngine_Transform__get_parent(pUVar11,(MethodInfo *)0x0);
      unaff_RBP = (UnityEngine_Vector4_array *)&TypeInfo_Object;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        pUStack_70 = (UnityEngine_Vector4_array *)0x450be2c;
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar10 = (UnityEngine_Vector3_array *)0x0;
      pUStack_70 = (UnityEngine_Vector4_array *)0x450be38;
      pIVar14 = pIVar9;
      bVar6 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pIVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar6 != '\0') {
        return;
      }
      __this_00 = (Il2CppRGCTXData *)0x0;
      if (pIVar9 != (Il2CppRGCTXData *)0x0) {
        pUStack_70 = (UnityEngine_Vector4_array *)0x450be52;
        pUVar11 = UnityEngine_Transform__Find
                            ((UnityEngine_Transform_o *)pIVar9,(System_String_o *)pUVar16,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          pUStack_70 = (UnityEngine_Vector4_array *)0x450be67;
          il2cpp_runtime_helper_02337ed0();
        }
        pUVar10 = (UnityEngine_Vector3_array *)0x0;
        pUStack_70 = (UnityEngine_Vector4_array *)0x450be73;
        bVar6 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar6 != '\0') {
          return;
        }
        if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
          pUStack_70 = (UnityEngine_Vector4_array *)0x450be94;
          il2cpp_runtime_helper_02337ed0();
        }
        pIVar14 = (Il2CppRGCTXData *)0x0;
        pUStack_70 = (UnityEngine_Vector4_array *)0x450be9b;
        bVar6 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
        __this_00 = (Il2CppRGCTXData *)0x0;
        if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
          pUStack_70 = (UnityEngine_Vector4_array *)0x450bead;
          obj_00 = (UnityEngine_Object_o *)
                   UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar11,(MethodInfo *)0x0)
          ;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            pUStack_70 = (UnityEngine_Vector4_array *)0x450bed5;
            il2cpp_runtime_helper_02337ed0();
          }
          if ((char)bVar6 != '\0') {
            UnityEngine_Object__Destroy_4e01c60(obj_00,(MethodInfo *)0x0);
            return;
          }
          UnityEngine_Object__DestroyImmediate_4e01e00(obj_00,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  pUStack_70 = (UnityEngine_Vector4_array *)0x450beed;
  il2cpp_runtime_helper_022b2c90();
  fStack_ac = 0.0;
  fStack_b0 = 0.0;
  if ((pIVar14[6].rgctxDataDummy == (UnityEngine_Material_o *)0x0) ||
     (pIVar14[6].rgctxDataDummy[1].klass == (UnityEngine_Material_c *)0x0)) {
    return;
  }
  maxX = (TMPro_TMP_MeshInfo_array *)&fStack_b0;
  method_00 = pUVar10;
  pIVar9 = pIVar14;
  pIStack_98 = __this_00;
  pUStack_90 = unaff_R12;
  puStack_88 = unaff_R13;
  pUStack_80 = pUVar16;
  pUStack_78 = pUVar21;
  pUStack_70 = unaff_RBP;
  bVar6 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__TryBounds
                    ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pIVar14,
                     (TMPro_TMP_TextInfo_o *)pUVar10,&fStack_ac,(float *)maxX,in_R8);
  fVar24 = fStack_ac;
  if ((char)bVar6 == '\0') {
    return;
  }
  if (pUVar10 != (UnityEngine_Vector3_array *)0x0) {
    if ((int)pUVar10->max_length < 1) {
      return;
    }
    fVar22 = fStack_b0 - fStack_ac;
    if (fVar22 <= 0.001) {
      fVar22 = 0.001;
    }
    method_00 = (UnityEngine_Vector3_array *)&g_data_00000058;
    pTVar19 = (TMPro_TMP_MeshInfo_array *)0x0;
    pTVar3 = *(TMPro_TMP_CharacterInfo_array **)&pUVar10->m_Items[2].fields;
    pUStack_a8 = pUVar10;
    while (pTVar3 != (TMPro_TMP_CharacterInfo_array *)0x0) {
      maxX = (TMPro_TMP_MeshInfo_array *)(ulong)(uint)pTVar3->max_length;
      if (maxX <= pTVar19) goto label_0450c228;
      if ((*(byte *)((long)&pTVar3->m_Items[0].fields.topRight.fields.y + (long)method_00) & 1) != 0) {
        maxX = *(TMPro_TMP_MeshInfo_array **)&pUVar10->m_Items[5].fields.y;
        if (maxX == (TMPro_TMP_MeshInfo_array *)0x0) break;
        uVar7 = *(uint *)((long)&method_00->m_Items[0x1d].fields.y + (long)(pTVar3->m_Items + -1));
        if ((uint)maxX->max_length <= uVar7) goto label_0450c228;
        pUVar16 = maxX->m_Items[(int)uVar7].fields.vertices;
        if (pUVar16 == (UnityEngine_Vector3_array *)0x0) break;
        uVar12 = *(uint *)((undefined1 *)((long)&pTVar3->bounds + 4) + (long)method_00);
        pTVar18 = (TMPro_TMP_MeshInfo_array *)(ulong)uVar12;
        pUVar4 = maxX->m_Items[(int)uVar7].fields.colors32;
        pUStack_a0 = method_00;
        if (pUVar4 == (UnityEngine_Color32_array *)0x0) {
          if ((uint)pUVar16->max_length <= uVar12) goto label_0450c228;
          fVar22 = (pUVar16->m_Items[(int)uVar12].fields.x - fVar24) / fVar22;
          fVar24 = 1.0;
          if (fVar22 <= 1.0) {
            fVar24 = fVar22;
          }
          UVar26 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__Sample
                             ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pIVar14,
                              (float)(-(uint)(0.0 <= fVar22) & (uint)fVar24),(MethodInfo *)method_00);
          pIVar9 = (Il2CppRGCTXData *)0x0;
          il2cpp_runtime_helper_03b428b0(UVar26.fields.r);
          break;
        }
        if ((TMPro_TMP_MeshInfo_array *)(ulong)(uint)pUVar16->max_length <= pTVar18) goto label_0450c228;
        fVar23 = (pUVar16->m_Items[(int)uVar12].fields.x - fVar24) / fVar22;
        fVar25 = 1.0;
        if (fVar23 <= 1.0) {
          fVar25 = fVar23;
        }
        UVar26 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__Sample
                           ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pIVar14,
                            (float)(-(uint)(0.0 <= fVar23) & (uint)fVar25),(MethodInfo *)method_00);
        pIVar9 = (Il2CppRGCTXData *)0x0;
        iVar8 = il2cpp_runtime_helper_03b428b0(UVar26.fields.r);
        maxX = (TMPro_TMP_MeshInfo_array *)(ulong)(uint)pUVar4->max_length;
        if (maxX <= pTVar18) goto label_0450c228;
        (&pUVar4->m_Items[0].fields.rgba)[(int)uVar12] = iVar8;
        pTVar1 = (TMPro_TMP_MeshInfo_array *)((long)&(pTVar18->obj).klass + 1);
        if ((TMPro_TMP_MeshInfo_array *)(ulong)(uint)pUVar16->max_length <= pTVar1) goto label_0450c228;
        fVar23 = (pUVar16->m_Items[(int)pTVar1].fields.x - fVar24) / fVar22;
        fVar25 = 1.0;
        if (fVar23 <= 1.0) {
          fVar25 = fVar23;
        }
        UVar26 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__Sample
                           ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pIVar14,
                            (float)(-(uint)(0.0 <= fVar23) & (uint)fVar25),(MethodInfo *)method_00);
        pIVar9 = (Il2CppRGCTXData *)0x0;
        iVar8 = il2cpp_runtime_helper_03b428b0(UVar26.fields.r);
        maxX = (TMPro_TMP_MeshInfo_array *)(ulong)(uint)pUVar4->max_length;
        if (maxX <= pTVar1) goto label_0450c228;
        (&pUVar4->m_Items[0].fields.rgba)[(int)pTVar1] = iVar8;
        pTVar1 = (TMPro_TMP_MeshInfo_array *)((long)&(pTVar18->obj).klass + 2);
        if ((TMPro_TMP_MeshInfo_array *)(ulong)(uint)pUVar16->max_length <= pTVar1) goto label_0450c228;
        fVar23 = (pUVar16->m_Items[(int)pTVar1].fields.x - fVar24) / fVar22;
        fVar25 = 1.0;
        if (fVar23 <= 1.0) {
          fVar25 = fVar23;
        }
        UVar26 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__Sample
                           ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pIVar14,
                            (float)(-(uint)(0.0 <= fVar23) & (uint)fVar25),(MethodInfo *)method_00);
        pIVar9 = (Il2CppRGCTXData *)0x0;
        iVar8 = il2cpp_runtime_helper_03b428b0(UVar26.fields.r);
        maxX = (TMPro_TMP_MeshInfo_array *)(ulong)(uint)pUVar4->max_length;
        if (maxX <= pTVar1) goto label_0450c228;
        (&pUVar4->m_Items[0].fields.rgba)[(int)pTVar1] = iVar8;
        pTVar18 = (TMPro_TMP_MeshInfo_array *)((long)&(pTVar18->obj).klass + 3);
        if ((TMPro_TMP_MeshInfo_array *)(ulong)(uint)pUVar16->max_length <= pTVar18) goto label_0450c228;
        fVar23 = (pUVar16->m_Items[(int)pTVar18].fields.x - fVar24) / fVar22;
        fVar25 = 1.0;
        if (fVar23 <= 1.0) {
          fVar25 = fVar23;
        }
        UVar26 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__Sample
                           ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pIVar14,
                            (float)(-(uint)(0.0 <= fVar23) & (uint)fVar25),(MethodInfo *)method_00);
        pIVar9 = (Il2CppRGCTXData *)0x0;
        iVar8 = il2cpp_runtime_helper_03b428b0(UVar26.fields.r);
        maxX = (TMPro_TMP_MeshInfo_array *)(ulong)(uint)pUVar4->max_length;
        if (maxX <= pTVar18) goto label_0450c228;
        (&pUVar4->m_Items[0].fields.rgba)[(int)pTVar18] = iVar8;
        pUVar10 = pUStack_a8;
        method_00 = pUStack_a0;
      }
      pTVar19 = (TMPro_TMP_MeshInfo_array *)((long)&(pTVar19->obj).klass + 1);
      method_00 = (UnityEngine_Vector3_array *)&method_00->m_Items[0x1c].fields.z;
      if ((long)(int)pUVar10->max_length <= (long)pTVar19) {
        return;
      }
      pTVar3 = *(TMPro_TMP_CharacterInfo_array **)&pUVar10->m_Items[2].fields;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_0450c228:
  il2cpp_runtime_helper_022b2ca0();
  *extraout_RDX = INFINITY;
  *(float *)&(maxX->obj).klass = -INFINITY;
  if (method_00 != (UnityEngine_Vector3_array *)0x0) {
    iVar2 = *(int *)&method_00->max_length;
    fVar24 = -INFINITY;
    if ((long)iVar2 < 1) {
      return;
    }
    lVar17 = 0x58;
    uVar20 = 0;
    pIVar9 = ((_union_13 *)(method_00->m_Items + 2))->rgctx_data;
    if (pIVar9 != (Il2CppRGCTXData *)0x0) {
label_0450c2a1:
      if (uVar20 < *(uint *)(pIVar9 + 3)) {
        if ((*(byte *)((long)pIVar9 + lVar17 + 0x13c) & 1) == 0) {
label_0450c280:
          uVar20 = uVar20 + 1;
          lVar17 = lVar17 + 0x178;
          if ((long)iVar2 <= (long)uVar20) {
            return;
          }
          pIVar9 = ((_union_13 *)(method_00->m_Items + 2))->rgctx_data;
          if (pIVar9 == (Il2CppRGCTXData *)0x0) goto label_0450c3c7;
          goto label_0450c2a1;
        }
        lVar5 = *(long *)&method_00->m_Items[5].fields.y;
        if (lVar5 == 0) goto label_0450c3c7;
        if (*(uint *)(lVar5 + 0x18) <= *(uint *)((long)pIVar9 + lVar17)) goto label_0450c3c2;
        lVar5 = *(long *)(lVar5 + 0x30 + (long)(int)*(uint *)((long)pIVar9 + lVar17) * 0x50);
        if (lVar5 == 0) goto label_0450c3c7;
        uVar7 = *(uint *)((long)pIVar9 + lVar17 + 0x14);
        pIVar9 = (Il2CppRGCTXData *)(ulong)uVar7;
        pIVar14 = (Il2CppRGCTXData *)(ulong)*(uint *)(lVar5 + 0x18);
        if (pIVar9 < pIVar14) {
          fVar24 = *(float *)(lVar5 + 0x20 + (long)(int)uVar7 * 0xc);
          fVar22 = *extraout_RDX;
          if (fVar24 <= *extraout_RDX) {
            fVar22 = fVar24;
          }
          *extraout_RDX = fVar22;
          fVar22 = *(float *)&(maxX->obj).klass;
          if (fVar22 <= fVar24) {
            fVar22 = fVar24;
          }
          *(float *)&(maxX->obj).klass = fVar22;
          if ((undefined1 *)((long)pIVar9 + 1) < pIVar14) {
            fVar24 = *(float *)(lVar5 + 0x20 + (long)(int)(undefined1 *)((long)pIVar9 + 1) * 0xc);
            fVar22 = *extraout_RDX;
            if (fVar24 <= *extraout_RDX) {
              fVar22 = fVar24;
            }
            *extraout_RDX = fVar22;
            fVar22 = *(float *)&(maxX->obj).klass;
            if (fVar22 <= fVar24) {
              fVar22 = fVar24;
            }
            *(float *)&(maxX->obj).klass = fVar22;
            if ((undefined1 *)((long)pIVar9 + 2) < pIVar14) {
              fVar24 = *(float *)(lVar5 + 0x20 + (long)(int)(undefined1 *)((long)pIVar9 + 2) * 0xc);
              fVar22 = *extraout_RDX;
              if (fVar24 <= *extraout_RDX) {
                fVar22 = fVar24;
              }
              *extraout_RDX = fVar22;
              fVar22 = *(float *)&(maxX->obj).klass;
              if (fVar22 <= fVar24) {
                fVar22 = fVar24;
              }
              *(float *)&(maxX->obj).klass = fVar22;
              pIVar9 = (Il2CppRGCTXData *)((long)pIVar9 + 3);
              if (pIVar9 < pIVar14) {
                fVar22 = *(float *)(lVar5 + 0x20 + (long)(int)pIVar9 * 0xc);
                fVar24 = *extraout_RDX;
                if (fVar22 <= *extraout_RDX) {
                  fVar24 = fVar22;
                }
                *extraout_RDX = fVar24;
                fVar24 = *(float *)&(maxX->obj).klass;
                if (fVar24 <= fVar22) {
                  fVar24 = fVar22;
                }
                *(float *)&(maxX->obj).klass = fVar24;
                goto label_0450c280;
              }
            }
          }
        }
      }
label_0450c3c2:
      il2cpp_runtime_helper_022b2ca0(fVar24);
    }
  }
label_0450c3c7:
  fVar24 = (float)il2cpp_runtime_helper_022b2c90();
  pIVar14 = pIVar9;
  if (pIVar9[6].rgctxDataDummy != (UnityEngine_Material_o *)0x0) {
    iVar2 = *(int *)&pIVar9[6].rgctxDataDummy[1].klass;
    if (iVar2 == 1) {
      return;
    }
    fVar22 = 1.0;
    if (fVar24 <= 1.0) {
      fVar22 = fVar24;
    }
    if (g_data_057a690a == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a690a = '\x01';
    }
    pIVar14 = TypeInfo_Math;
    if (*(int *)((long)TypeInfo_Math + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    fVar24 = floorf((float)(-(uint)(0.0 <= fVar24) & (uint)fVar22) * (float)(iVar2 + -1));
    if (pIVar9[6].rgctxDataDummy != (UnityEngine_Material_o *)0x0) {
      uVar15 = (uint)fVar24;
      method_00 = (UnityEngine_Vector3_array *)(ulong)uVar15;
      uVar7 = *(uint *)&pIVar9[6].rgctxDataDummy[1].klass;
      uVar12 = uVar7 - 2;
      if ((int)uVar15 < (int)(uVar7 - 2)) {
        uVar12 = uVar15;
      }
      if ((uVar12 < uVar7) &&
         (method_00 = (UnityEngine_Vector3_array *)(ulong)(uVar12 + 1), uVar12 + 1 < uVar7)) {
        return;
      }
      goto label_0450c50d;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_0450c50d:
  il2cpp_runtime_helper_022b2ca0();
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ClearEffect
            ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pIVar14,(MethodInfo *)method_00);
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ClearVertexColors
            ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pIVar14,(MethodInfo *)method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$ResetPlainVisuals
// il2cpp: void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ResetPlainVisuals (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o* __this, System_String_o* font, const MethodInfo* method);
// 0x450b820

void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ResetPlainVisuals
               (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *__this,System_String_o *font,
               MethodInfo *method)

{
  UnityEngine_Object_o *x;
  TMPro_ITextPreprocessor_o *pTVar1;
  Il2CppMethodPointer vtableDispatch;
  bool_conflict bVar2;
  TMPro_TMP_Text_o *pTVar3;
  TMPro_TMP_Text_o *pTVar4;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *pMVar5;
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *__this_00;
  
  pMVar5 = (MethodInfo *)font;
  if (g_data_057aed5f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameFontCatalog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"PopExtrusion");
    il2cpp_runtime_helper_023445d0(&"PopShadow");
    g_data_057aed5f = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ClearVertexColors(__this,pMVar5);
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ClearAllEffects(__this,pMVar5);
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__DestroyStalePopLayer(__this,"PopShadow",method_00);
  pMVar5 = "PopExtrusion";
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__DestroyStalePopLayer
            (__this,(System_String_o *)"PopExtrusion",method_01);
  pTVar3 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,pMVar5);
  if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  PatreonEffects_NameFontCatalog__Apply(pTVar3,font,(MethodInfo *)0x0);
  __this_00 = __this;
  pTVar3 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,(MethodInfo *)font);
  if (pTVar3 != (TMPro_TMP_Text_o *)0x0) {
    x = (UnityEngine_Object_o *)(pTVar3->fields).m_TextPreprocessor;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar5 = (MethodInfo *)0x0;
    bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      return;
    }
    pTVar3 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,pMVar5);
    pTVar4 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,pMVar5);
    __this_00 = __this;
    if (((pTVar4 != (TMPro_TMP_Text_o *)0x0) &&
        (pTVar1 = (pTVar4->fields).m_TextPreprocessor, pTVar1 != (TMPro_ITextPreprocessor_o *)0x0)) &&
       (pTVar3 != (TMPro_TMP_Text_o *)0x0)) {
      vtableDispatch = (pTVar3->klass->vtable)._68_set_fontSharedMaterial.methodPtr;
      (*vtableDispatch)
                (pTVar3,pTVar1[2].klass,(pTVar3->klass->vtable)._68_set_fontSharedMaterial.method,
                 vtableDispatch);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed5b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_Text_GetComponent_TMP_Text);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed5b = '\x01';
  }
  pTVar3 = (__this_00->fields)._text;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pTVar3 = (TMPro_TMP_Text_o *)
             UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_00,MethodInfo_TMP_Text_GetComponent_TMP_Text);
    (__this_00->fields)._text = pTVar3;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields)._text,pTVar3);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$ClearAllEffects
// il2cpp: void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ClearAllEffects (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o* __this, const MethodInfo* method);
// 0x450bc20

void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ClearAllEffects
               (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *__this,MethodInfo *method)

{
  TMPro_TMP_MeshInfo_array *pTVar1;
  int iVar2;
  TMPro_TMP_CharacterInfo_array *pTVar3;
  UnityEngine_Color32_array *pUVar4;
  long lVar5;
  uint uVar6;
  bool_conflict bVar7;
  int32_t iVar8;
  System_Int32_array *in_RAX;
  Il2CppRGCTXData *pIVar9;
  UnityEngine_Vector3_array *pUVar10;
  Il2CppRGCTXData *pIVar11;
  UnityEngine_Transform_o *pUVar12;
  UnityEngine_Object_o *obj;
  uint uVar13;
  TMPro_TMP_MeshInfo_array *maxX;
  float *extraout_RDX;
  Il2CppRGCTXData *pIVar14;
  UnityEngine_Vector4_array *unaff_RBP;
  uint uVar15;
  UnityEngine_Vector3_array *method_00;
  MethodInfo *in_R8;
  long lVar16;
  UnityEngine_Mesh_o *unaff_R12;
  TMPro_TMP_MeshInfo_array *pTVar17;
  undefined8 *unaff_R13;
  TMPro_TMP_MeshInfo_array *pTVar18;
  UnityEngine_Vector2_array *unaff_R14;
  ulong uVar19;
  UnityEngine_Vector3_array *unaff_R15;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  UnityEngine_Color_o UVar24;
  float fStack_98;
  float fStack_94;
  UnityEngine_Vector3_array *pUStack_90;
  UnityEngine_Vector3_array *pUStack_88;
  Il2CppRGCTXData *pIStack_80;
  UnityEngine_Mesh_o *pUStack_78;
  undefined8 *puStack_70;
  UnityEngine_Vector3_array *pUStack_68;
  UnityEngine_Vector3_array *pUStack_60;
  UnityEngine_Vector4_array *pUStack_58;
  Il2CppRGCTXData *pIStack_50;
  UnityEngine_Vector2_array *pUStack_48;
  UnityEngine_Vector4_array *pUStack_40;
  System_Int32_array *local_38;
  
  local_38 = in_RAX;
  if (g_data_057aed60 == '\0') {
    pUStack_40 = (UnityEngine_Vector4_array *)0x450bc43;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    pUStack_40 = (UnityEngine_Vector4_array *)0x450bc4f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_NameEffectController_GetComponents_NameEffectController);
    pUStack_40 = (UnityEngine_Vector4_array *)0x450bc5b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed60 = '\x01';
  }
  pUStack_40 = (UnityEngine_Vector4_array *)0x450bc6a;
  pIVar14 = (Il2CppRGCTXData *)__this;
  pIVar9 = (Il2CppRGCTXData *)Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,method);
  if (pIVar9 != (Il2CppRGCTXData *)0x0) {
    pUStack_40 = (UnityEngine_Vector4_array *)0x450bc89;
    method = (MethodInfo *)MethodInfo_NameEffectController_GetComponents_NameEffectController;
    local_38 = (System_Int32_array *)__this;
    pUVar10 = (UnityEngine_Vector3_array *)
              UnityEngine_Component__GetComponents_object__24e8380
                        ((UnityEngine_Component_o *)pIVar9,(MethodInfo_24E8380 *)MethodInfo_NameEffectController_GetComponents_NameEffectController);
    pIVar14 = pIVar9;
    if (pUVar10 != (UnityEngine_Vector3_array *)0x0) {
      if ((int)pUVar10->max_length < 1) {
label_0450bd7f:
        *(PatreonEffects_NameEffectController_o **)((long)local_38->m_Items + 8) =
             (PatreonEffects_NameEffectController_o *)0x0;
        il2cpp_runtime_helper_022b4080((PatreonEffects_NameEffectController_o **)((long)local_38->m_Items + 8),0);
        return;
      }
      unaff_RBP = (UnityEngine_Vector4_array *)0x0;
      unaff_R13 = &TypeInfo_Object;
      unaff_R14 = (UnityEngine_Vector2_array *)&TypeInfo_Application;
      unaff_R15 = pUVar10;
      if ((pUVar10->max_length & 0xffffffff) != 0) {
        do {
          __this = *(Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o **)
                    ((long)&pUVar10->m_Items[0].fields.x + unaff_RBP * 8);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            pUStack_40 = (UnityEngine_Vector4_array *)0x450bcfb;
            il2cpp_runtime_helper_02337ed0();
          }
          method = (MethodInfo *)0x0;
          pUStack_40 = (UnityEngine_Vector4_array *)0x450bd07;
          pIVar9 = (Il2CppRGCTXData *)__this;
          bVar7 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar7 == '\0') {
            pIVar14 = pIVar9;
            if ((Il2CppRGCTXData *)__this == (Il2CppRGCTXData *)0x0) goto label_0450bda9;
            pUStack_40 = (UnityEngine_Vector4_array *)0x450bd1e;
            PatreonEffects_NameEffectController__Clear
                      ((PatreonEffects_NameEffectController_o *)__this,(MethodInfo *)0x0);
            pUStack_40 = (UnityEngine_Vector4_array *)0x450bd2a;
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this,0,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
              pUStack_40 = (UnityEngine_Vector4_array *)0x450bd3b;
              il2cpp_runtime_helper_02337ed0();
            }
            pUStack_40 = (UnityEngine_Vector4_array *)0x450bd42;
            uVar6 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
            unaff_R12 = (UnityEngine_Mesh_o *)(ulong)uVar6;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              pUStack_40 = (UnityEngine_Vector4_array *)0x450bd67;
              il2cpp_runtime_helper_02337ed0();
            }
            if ((char)uVar6 == '\0') {
              method = (MethodInfo *)0x0;
              pUStack_40 = (UnityEngine_Vector4_array *)0x450bcc5;
              pIVar9 = (Il2CppRGCTXData *)__this;
              UnityEngine_Object__DestroyImmediate_4e01e00((UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
            }
            else {
              method = (MethodInfo *)0x0;
              pUStack_40 = (UnityEngine_Vector4_array *)0x450bd7a;
              pIVar9 = (Il2CppRGCTXData *)__this;
              UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
            }
          }
          unaff_RBP = (UnityEngine_Vector4_array *)((long)&(unaff_RBP->obj).klass + 1);
          uVar6 = (uint)pUVar10->max_length;
          if ((long)(int)uVar6 <= (long)unaff_RBP) goto label_0450bd7f;
        } while (unaff_RBP < (UnityEngine_Vector4_array *)(ulong)uVar6);
      }
      pUStack_40 = (UnityEngine_Vector4_array *)0x450bda9;
      il2cpp_runtime_helper_022b2ca0();
      pIVar14 = pIVar9;
    }
  }
label_0450bda9:
  pUStack_40 = (UnityEngine_Vector4_array *)0x450bdae;
  il2cpp_runtime_helper_022b2c90();
  pUVar10 = (UnityEngine_Vector3_array *)method;
  pIStack_50 = (Il2CppRGCTXData *)__this;
  pUStack_48 = unaff_R14;
  pUStack_40 = unaff_RBP;
  if (g_data_057aed61 == '\0') {
    pUStack_58 = (UnityEngine_Vector4_array *)0x450bdcf;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    pUStack_58 = (UnityEngine_Vector4_array *)0x450bddb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed61 = '\x01';
  }
  pUStack_58 = (UnityEngine_Vector4_array *)0x450bdea;
  pIVar9 = pIVar14;
  pIVar11 = (Il2CppRGCTXData *)
            Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                      ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pIVar14,(MethodInfo *)pUVar10);
  if (pIVar11 != (Il2CppRGCTXData *)0x0) {
    pUVar10 = (UnityEngine_Vector3_array *)0x0;
    pUStack_58 = (UnityEngine_Vector4_array *)0x450bdfd;
    pUVar12 = TMPro_TMP_Text__get_transform((TMPro_TMP_Text_o *)pIVar11,(MethodInfo *)0x0);
    pIVar9 = pIVar11;
    if (pUVar12 != (UnityEngine_Transform_o *)0x0) {
      pUStack_58 = (UnityEngine_Vector4_array *)0x450be10;
      pIVar11 = (Il2CppRGCTXData *)UnityEngine_Transform__get_parent(pUVar12,(MethodInfo *)0x0);
      unaff_RBP = (UnityEngine_Vector4_array *)&TypeInfo_Object;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        pUStack_58 = (UnityEngine_Vector4_array *)0x450be2c;
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar10 = (UnityEngine_Vector3_array *)0x0;
      pUStack_58 = (UnityEngine_Vector4_array *)0x450be38;
      pIVar9 = pIVar11;
      bVar7 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pIVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') {
        return;
      }
      pIVar14 = (Il2CppRGCTXData *)0x0;
      if (pIVar11 != (Il2CppRGCTXData *)0x0) {
        pUStack_58 = (UnityEngine_Vector4_array *)0x450be52;
        pUVar12 = UnityEngine_Transform__Find
                            ((UnityEngine_Transform_o *)pIVar11,(System_String_o *)method,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          pUStack_58 = (UnityEngine_Vector4_array *)0x450be67;
          il2cpp_runtime_helper_02337ed0();
        }
        pUVar10 = (UnityEngine_Vector3_array *)0x0;
        pUStack_58 = (UnityEngine_Vector4_array *)0x450be73;
        bVar7 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)pUVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar7 != '\0') {
          return;
        }
        if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
          pUStack_58 = (UnityEngine_Vector4_array *)0x450be94;
          il2cpp_runtime_helper_02337ed0();
        }
        pIVar9 = (Il2CppRGCTXData *)0x0;
        pUStack_58 = (UnityEngine_Vector4_array *)0x450be9b;
        bVar7 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
        pIVar14 = (Il2CppRGCTXData *)0x0;
        if (pUVar12 != (UnityEngine_Transform_o *)0x0) {
          pUStack_58 = (UnityEngine_Vector4_array *)0x450bead;
          obj = (UnityEngine_Object_o *)
                UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar12,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            pUStack_58 = (UnityEngine_Vector4_array *)0x450bed5;
            il2cpp_runtime_helper_02337ed0();
          }
          if ((char)bVar7 != '\0') {
            UnityEngine_Object__Destroy_4e01c60(obj,(MethodInfo *)0x0);
            return;
          }
          UnityEngine_Object__DestroyImmediate_4e01e00(obj,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  pUStack_58 = (UnityEngine_Vector4_array *)0x450beed;
  il2cpp_runtime_helper_022b2c90();
  fStack_94 = 0.0;
  fStack_98 = 0.0;
  if ((pIVar9[6].rgctxDataDummy == (UnityEngine_Material_o *)0x0) ||
     (pIVar9[6].rgctxDataDummy[1].klass == (UnityEngine_Material_c *)0x0)) {
    return;
  }
  maxX = (TMPro_TMP_MeshInfo_array *)&fStack_98;
  method_00 = pUVar10;
  pIVar11 = pIVar9;
  pIStack_80 = pIVar14;
  pUStack_78 = unaff_R12;
  puStack_70 = unaff_R13;
  pUStack_68 = (UnityEngine_Vector3_array *)method;
  pUStack_60 = unaff_R15;
  pUStack_58 = unaff_RBP;
  bVar7 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__TryBounds
                    ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pIVar9,
                     (TMPro_TMP_TextInfo_o *)pUVar10,&fStack_94,(float *)maxX,in_R8);
  fVar22 = fStack_94;
  if ((char)bVar7 == '\0') {
    return;
  }
  if (pUVar10 != (UnityEngine_Vector3_array *)0x0) {
    if ((int)pUVar10->max_length < 1) {
      return;
    }
    fVar20 = fStack_98 - fStack_94;
    if (fVar20 <= 0.001) {
      fVar20 = 0.001;
    }
    method_00 = (UnityEngine_Vector3_array *)&g_data_00000058;
    pTVar18 = (TMPro_TMP_MeshInfo_array *)0x0;
    pTVar3 = *(TMPro_TMP_CharacterInfo_array **)&pUVar10->m_Items[2].fields;
    pUStack_90 = pUVar10;
    while (pTVar3 != (TMPro_TMP_CharacterInfo_array *)0x0) {
      maxX = (TMPro_TMP_MeshInfo_array *)(ulong)(uint)pTVar3->max_length;
      if (maxX <= pTVar18) goto label_0450c228;
      if ((*(byte *)((long)&pTVar3->m_Items[0].fields.topRight.fields.y + (long)method_00) & 1) != 0) {
        maxX = *(TMPro_TMP_MeshInfo_array **)&pUVar10->m_Items[5].fields.y;
        if (maxX == (TMPro_TMP_MeshInfo_array *)0x0) break;
        uVar6 = *(uint *)((long)&method_00->m_Items[0x1d].fields.y + (long)(pTVar3->m_Items + -1));
        if ((uint)maxX->max_length <= uVar6) goto label_0450c228;
        pUVar10 = maxX->m_Items[(int)uVar6].fields.vertices;
        if (pUVar10 == (UnityEngine_Vector3_array *)0x0) break;
        uVar13 = *(uint *)((undefined1 *)((long)&pTVar3->bounds + 4) + (long)method_00);
        pTVar17 = (TMPro_TMP_MeshInfo_array *)(ulong)uVar13;
        pUVar4 = maxX->m_Items[(int)uVar6].fields.colors32;
        pUStack_88 = method_00;
        if (pUVar4 == (UnityEngine_Color32_array *)0x0) {
          if ((uint)pUVar10->max_length <= uVar13) goto label_0450c228;
          fVar20 = (pUVar10->m_Items[(int)uVar13].fields.x - fVar22) / fVar20;
          fVar22 = 1.0;
          if (fVar20 <= 1.0) {
            fVar22 = fVar20;
          }
          UVar24 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__Sample
                             ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pIVar9,
                              (float)(-(uint)(0.0 <= fVar20) & (uint)fVar22),(MethodInfo *)method_00);
          pIVar11 = (Il2CppRGCTXData *)0x0;
          il2cpp_runtime_helper_03b428b0(UVar24.fields.r);
          break;
        }
        if ((TMPro_TMP_MeshInfo_array *)(ulong)(uint)pUVar10->max_length <= pTVar17) goto label_0450c228;
        fVar21 = (pUVar10->m_Items[(int)uVar13].fields.x - fVar22) / fVar20;
        fVar23 = 1.0;
        if (fVar21 <= 1.0) {
          fVar23 = fVar21;
        }
        UVar24 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__Sample
                           ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pIVar9,
                            (float)(-(uint)(0.0 <= fVar21) & (uint)fVar23),(MethodInfo *)method_00);
        pIVar11 = (Il2CppRGCTXData *)0x0;
        iVar8 = il2cpp_runtime_helper_03b428b0(UVar24.fields.r);
        maxX = (TMPro_TMP_MeshInfo_array *)(ulong)(uint)pUVar4->max_length;
        if (maxX <= pTVar17) goto label_0450c228;
        (&pUVar4->m_Items[0].fields.rgba)[(int)uVar13] = iVar8;
        pTVar1 = (TMPro_TMP_MeshInfo_array *)((long)&(pTVar17->obj).klass + 1);
        if ((TMPro_TMP_MeshInfo_array *)(ulong)(uint)pUVar10->max_length <= pTVar1) goto label_0450c228;
        fVar21 = (pUVar10->m_Items[(int)pTVar1].fields.x - fVar22) / fVar20;
        fVar23 = 1.0;
        if (fVar21 <= 1.0) {
          fVar23 = fVar21;
        }
        UVar24 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__Sample
                           ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pIVar9,
                            (float)(-(uint)(0.0 <= fVar21) & (uint)fVar23),(MethodInfo *)method_00);
        pIVar11 = (Il2CppRGCTXData *)0x0;
        iVar8 = il2cpp_runtime_helper_03b428b0(UVar24.fields.r);
        maxX = (TMPro_TMP_MeshInfo_array *)(ulong)(uint)pUVar4->max_length;
        if (maxX <= pTVar1) goto label_0450c228;
        (&pUVar4->m_Items[0].fields.rgba)[(int)pTVar1] = iVar8;
        pTVar1 = (TMPro_TMP_MeshInfo_array *)((long)&(pTVar17->obj).klass + 2);
        if ((TMPro_TMP_MeshInfo_array *)(ulong)(uint)pUVar10->max_length <= pTVar1) goto label_0450c228;
        fVar21 = (pUVar10->m_Items[(int)pTVar1].fields.x - fVar22) / fVar20;
        fVar23 = 1.0;
        if (fVar21 <= 1.0) {
          fVar23 = fVar21;
        }
        UVar24 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__Sample
                           ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pIVar9,
                            (float)(-(uint)(0.0 <= fVar21) & (uint)fVar23),(MethodInfo *)method_00);
        pIVar11 = (Il2CppRGCTXData *)0x0;
        iVar8 = il2cpp_runtime_helper_03b428b0(UVar24.fields.r);
        maxX = (TMPro_TMP_MeshInfo_array *)(ulong)(uint)pUVar4->max_length;
        if (maxX <= pTVar1) goto label_0450c228;
        (&pUVar4->m_Items[0].fields.rgba)[(int)pTVar1] = iVar8;
        pTVar17 = (TMPro_TMP_MeshInfo_array *)((long)&(pTVar17->obj).klass + 3);
        if ((TMPro_TMP_MeshInfo_array *)(ulong)(uint)pUVar10->max_length <= pTVar17) goto label_0450c228;
        fVar21 = (pUVar10->m_Items[(int)pTVar17].fields.x - fVar22) / fVar20;
        fVar23 = 1.0;
        if (fVar21 <= 1.0) {
          fVar23 = fVar21;
        }
        UVar24 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__Sample
                           ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pIVar9,
                            (float)(-(uint)(0.0 <= fVar21) & (uint)fVar23),(MethodInfo *)method_00);
        pIVar11 = (Il2CppRGCTXData *)0x0;
        iVar8 = il2cpp_runtime_helper_03b428b0(UVar24.fields.r);
        maxX = (TMPro_TMP_MeshInfo_array *)(ulong)(uint)pUVar4->max_length;
        if (maxX <= pTVar17) goto label_0450c228;
        (&pUVar4->m_Items[0].fields.rgba)[(int)pTVar17] = iVar8;
        pUVar10 = pUStack_90;
        method_00 = pUStack_88;
      }
      pTVar18 = (TMPro_TMP_MeshInfo_array *)((long)&(pTVar18->obj).klass + 1);
      method_00 = (UnityEngine_Vector3_array *)&method_00->m_Items[0x1c].fields.z;
      if ((long)(int)pUVar10->max_length <= (long)pTVar18) {
        return;
      }
      pTVar3 = *(TMPro_TMP_CharacterInfo_array **)&pUVar10->m_Items[2].fields;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_0450c228:
  il2cpp_runtime_helper_022b2ca0();
  *extraout_RDX = INFINITY;
  *(float *)&(maxX->obj).klass = -INFINITY;
  if (method_00 != (UnityEngine_Vector3_array *)0x0) {
    iVar2 = *(int *)&method_00->max_length;
    fVar22 = -INFINITY;
    if ((long)iVar2 < 1) {
      return;
    }
    lVar16 = 0x58;
    uVar19 = 0;
    pIVar11 = ((_union_13 *)(method_00->m_Items + 2))->rgctx_data;
    if (pIVar11 != (Il2CppRGCTXData *)0x0) {
label_0450c2a1:
      if (uVar19 < *(uint *)(pIVar11 + 3)) {
        if ((*(byte *)((long)pIVar11 + lVar16 + 0x13c) & 1) == 0) {
label_0450c280:
          uVar19 = uVar19 + 1;
          lVar16 = lVar16 + 0x178;
          if ((long)iVar2 <= (long)uVar19) {
            return;
          }
          pIVar11 = ((_union_13 *)(method_00->m_Items + 2))->rgctx_data;
          if (pIVar11 == (Il2CppRGCTXData *)0x0) goto label_0450c3c7;
          goto label_0450c2a1;
        }
        lVar5 = *(long *)&method_00->m_Items[5].fields.y;
        if (lVar5 == 0) goto label_0450c3c7;
        if (*(uint *)(lVar5 + 0x18) <= *(uint *)((long)pIVar11 + lVar16)) goto label_0450c3c2;
        lVar5 = *(long *)(lVar5 + 0x30 + (long)(int)*(uint *)((long)pIVar11 + lVar16) * 0x50);
        if (lVar5 == 0) goto label_0450c3c7;
        uVar6 = *(uint *)((long)pIVar11 + lVar16 + 0x14);
        pIVar11 = (Il2CppRGCTXData *)(ulong)uVar6;
        pIVar14 = (Il2CppRGCTXData *)(ulong)*(uint *)(lVar5 + 0x18);
        if (pIVar11 < pIVar14) {
          fVar22 = *(float *)(lVar5 + 0x20 + (long)(int)uVar6 * 0xc);
          fVar20 = *extraout_RDX;
          if (fVar22 <= *extraout_RDX) {
            fVar20 = fVar22;
          }
          *extraout_RDX = fVar20;
          fVar20 = *(float *)&(maxX->obj).klass;
          if (fVar20 <= fVar22) {
            fVar20 = fVar22;
          }
          *(float *)&(maxX->obj).klass = fVar20;
          if ((undefined1 *)((long)pIVar11 + 1) < pIVar14) {
            fVar22 = *(float *)(lVar5 + 0x20 + (long)(int)(undefined1 *)((long)pIVar11 + 1) * 0xc);
            fVar20 = *extraout_RDX;
            if (fVar22 <= *extraout_RDX) {
              fVar20 = fVar22;
            }
            *extraout_RDX = fVar20;
            fVar20 = *(float *)&(maxX->obj).klass;
            if (fVar20 <= fVar22) {
              fVar20 = fVar22;
            }
            *(float *)&(maxX->obj).klass = fVar20;
            if ((undefined1 *)((long)pIVar11 + 2) < pIVar14) {
              fVar22 = *(float *)(lVar5 + 0x20 + (long)(int)(undefined1 *)((long)pIVar11 + 2) * 0xc);
              fVar20 = *extraout_RDX;
              if (fVar22 <= *extraout_RDX) {
                fVar20 = fVar22;
              }
              *extraout_RDX = fVar20;
              fVar20 = *(float *)&(maxX->obj).klass;
              if (fVar20 <= fVar22) {
                fVar20 = fVar22;
              }
              *(float *)&(maxX->obj).klass = fVar20;
              pIVar11 = (Il2CppRGCTXData *)((long)pIVar11 + 3);
              if (pIVar11 < pIVar14) {
                fVar20 = *(float *)(lVar5 + 0x20 + (long)(int)pIVar11 * 0xc);
                fVar22 = *extraout_RDX;
                if (fVar20 <= *extraout_RDX) {
                  fVar22 = fVar20;
                }
                *extraout_RDX = fVar22;
                fVar22 = *(float *)&(maxX->obj).klass;
                if (fVar22 <= fVar20) {
                  fVar22 = fVar20;
                }
                *(float *)&(maxX->obj).klass = fVar22;
                goto label_0450c280;
              }
            }
          }
        }
      }
label_0450c3c2:
      il2cpp_runtime_helper_022b2ca0(fVar22);
    }
  }
label_0450c3c7:
  fVar22 = (float)il2cpp_runtime_helper_022b2c90();
  pIVar14 = pIVar11;
  if (pIVar11[6].rgctxDataDummy != (UnityEngine_Material_o *)0x0) {
    iVar2 = *(int *)&pIVar11[6].rgctxDataDummy[1].klass;
    if (iVar2 == 1) {
      return;
    }
    fVar20 = 1.0;
    if (fVar22 <= 1.0) {
      fVar20 = fVar22;
    }
    if (g_data_057a690a == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a690a = '\x01';
    }
    pIVar14 = TypeInfo_Math;
    if (*(int *)((long)TypeInfo_Math + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    fVar22 = floorf((float)(-(uint)(0.0 <= fVar22) & (uint)fVar20) * (float)(iVar2 + -1));
    if (pIVar11[6].rgctxDataDummy != (UnityEngine_Material_o *)0x0) {
      uVar15 = (uint)fVar22;
      method_00 = (UnityEngine_Vector3_array *)(ulong)uVar15;
      uVar6 = *(uint *)&pIVar11[6].rgctxDataDummy[1].klass;
      uVar13 = uVar6 - 2;
      if ((int)uVar15 < (int)(uVar6 - 2)) {
        uVar13 = uVar15;
      }
      if ((uVar13 < uVar6) &&
         (method_00 = (UnityEngine_Vector3_array *)(ulong)(uVar13 + 1), uVar13 + 1 < uVar6)) {
        return;
      }
      goto label_0450c50d;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_0450c50d:
  il2cpp_runtime_helper_022b2ca0();
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ClearEffect
            ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pIVar14,(MethodInfo *)method_00);
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ClearVertexColors
            ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pIVar14,(MethodInfo *)method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$DestroyStalePopLayer
// il2cpp: void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__DestroyStalePopLayer (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o* __this, System_String_o* name, const MethodInfo* method);
// 0x450bdb0

void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__DestroyStalePopLayer
               (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *__this,System_String_o *name,
               MethodInfo *method)

{
  TMPro_TMP_MeshInfo_array *pTVar1;
  int iVar2;
  uint uVar3;
  TMPro_TMP_CharacterInfo_array *pTVar4;
  UnityEngine_Color32_array *pUVar5;
  UnityEngine_Vector3_array *pUVar6;
  bool_conflict bVar7;
  int32_t iVar8;
  Il2CppRGCTXData *pIVar9;
  UnityEngine_Transform_o *pUVar10;
  UnityEngine_Object_o *obj;
  uint uVar11;
  TMPro_TMP_MeshInfo_array *maxX;
  float *extraout_RDX;
  TMPro_TMP_TextInfo_o *textInfo;
  uint uVar12;
  TMPro_TMP_TextInfo_o *method_00;
  Il2CppRGCTXData *pIVar13;
  MethodInfo *in_R8;
  long lVar14;
  long lVar15;
  TMPro_TMP_MeshInfo_array *pTVar16;
  TMPro_TMP_MeshInfo_array *pTVar17;
  ulong uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  UnityEngine_Color_o UVar23;
  float local_60;
  float local_5c;
  TMPro_TMP_TextInfo_o *local_58;
  TMPro_TMP_TextInfo_o *local_50;
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *pGStack_48;
  
  textInfo = (TMPro_TMP_TextInfo_o *)name;
  if (g_data_057aed61 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed61 = '\x01';
  }
  pIVar13 = (Il2CppRGCTXData *)__this;
  pIVar9 = (Il2CppRGCTXData *)
           Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,(MethodInfo *)textInfo);
  if (pIVar9 != (Il2CppRGCTXData *)0x0) {
    textInfo = (TMPro_TMP_TextInfo_o *)0x0;
    pUVar10 = TMPro_TMP_Text__get_transform((TMPro_TMP_Text_o *)pIVar9,(MethodInfo *)0x0);
    pIVar13 = pIVar9;
    if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
      pIVar9 = (Il2CppRGCTXData *)UnityEngine_Transform__get_parent(pUVar10,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      textInfo = (TMPro_TMP_TextInfo_o *)0x0;
      pIVar13 = pIVar9;
      bVar7 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pIVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') {
        return;
      }
      __this = (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)0x0;
      if (pIVar9 != (Il2CppRGCTXData *)0x0) {
        pUVar10 = UnityEngine_Transform__Find((UnityEngine_Transform_o *)pIVar9,name,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        textInfo = (TMPro_TMP_TextInfo_o *)0x0;
        bVar7 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar7 != '\0') {
          return;
        }
        if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pIVar13 = (Il2CppRGCTXData *)0x0;
        bVar7 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
        __this = (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)0x0;
        if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
          obj = (UnityEngine_Object_o *)
                UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar10,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if ((char)bVar7 == '\0') {
            UnityEngine_Object__DestroyImmediate_4e01e00(obj,(MethodInfo *)0x0);
            return;
          }
          UnityEngine_Object__Destroy_4e01c60(obj,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  local_5c = 0.0;
  local_60 = 0.0;
  if ((pIVar13[6].method == (MethodInfo *)0x0) || ((pIVar13[6].method)->name == (char *)0x0)) {
    return;
  }
  maxX = (TMPro_TMP_MeshInfo_array *)&local_60;
  method_00 = textInfo;
  pIVar9 = pIVar13;
  pGStack_48 = __this;
  bVar7 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__TryBounds
                    ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pIVar13,textInfo,&local_5c,
                     (float *)maxX,in_R8);
  fVar21 = local_5c;
  if ((char)bVar7 == '\0') {
    return;
  }
  if (textInfo != (TMPro_TMP_TextInfo_o *)0x0) {
    if ((textInfo->fields).characterCount < 1) {
      return;
    }
    fVar19 = local_60 - local_5c;
    if (fVar19 <= 0.001) {
      fVar19 = 0.001;
    }
    method_00 = (TMPro_TMP_TextInfo_o *)&g_data_00000058;
    pTVar17 = (TMPro_TMP_MeshInfo_array *)0x0;
    pTVar4 = (textInfo->fields).characterInfo;
    local_58 = textInfo;
    while (pTVar4 != (TMPro_TMP_CharacterInfo_array *)0x0) {
      maxX = (TMPro_TMP_MeshInfo_array *)(ulong)(uint)pTVar4->max_length;
      if (maxX <= pTVar17) goto label_0450c228;
      if ((*(byte *)((long)&pTVar4->m_Items[0].fields.topRight.fields.y + (long)method_00) & 1) != 0) {
        maxX = (textInfo->fields).meshInfo;
        if (maxX == (TMPro_TMP_MeshInfo_array *)0x0) break;
        uVar3 = *(uint *)((long)&method_00[3].fields.pageCount + (long)(pTVar4->m_Items + -1));
        if ((uint)maxX->max_length <= uVar3) goto label_0450c228;
        pUVar6 = maxX->m_Items[(int)uVar3].fields.vertices;
        if (pUVar6 == (UnityEngine_Vector3_array *)0x0) break;
        uVar11 = *(uint *)((undefined1 *)((long)&pTVar4->bounds + 4) + (long)method_00);
        pTVar16 = (TMPro_TMP_MeshInfo_array *)(ulong)uVar11;
        pUVar5 = maxX->m_Items[(int)uVar3].fields.colors32;
        local_50 = method_00;
        if (pUVar5 == (UnityEngine_Color32_array *)0x0) {
          if ((uint)pUVar6->max_length <= uVar11) goto label_0450c228;
          fVar19 = (pUVar6->m_Items[(int)uVar11].fields.x - fVar21) / fVar19;
          fVar21 = 1.0;
          if (fVar19 <= 1.0) {
            fVar21 = fVar19;
          }
          UVar23 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__Sample
                             ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pIVar13,
                              (float)(-(uint)(0.0 <= fVar19) & (uint)fVar21),(MethodInfo *)method_00);
          pIVar9 = (Il2CppRGCTXData *)0x0;
          il2cpp_runtime_helper_03b428b0(UVar23.fields.r);
          break;
        }
        if ((TMPro_TMP_MeshInfo_array *)(ulong)(uint)pUVar6->max_length <= pTVar16) goto label_0450c228;
        fVar20 = (pUVar6->m_Items[(int)uVar11].fields.x - fVar21) / fVar19;
        fVar22 = 1.0;
        if (fVar20 <= 1.0) {
          fVar22 = fVar20;
        }
        UVar23 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__Sample
                           ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pIVar13,
                            (float)(-(uint)(0.0 <= fVar20) & (uint)fVar22),(MethodInfo *)method_00);
        pIVar9 = (Il2CppRGCTXData *)0x0;
        iVar8 = il2cpp_runtime_helper_03b428b0(UVar23.fields.r);
        maxX = (TMPro_TMP_MeshInfo_array *)(ulong)(uint)pUVar5->max_length;
        if (maxX <= pTVar16) goto label_0450c228;
        (&pUVar5->m_Items[0].fields.rgba)[(int)uVar11] = iVar8;
        pTVar1 = (TMPro_TMP_MeshInfo_array *)((long)&(pTVar16->obj).klass + 1);
        if ((TMPro_TMP_MeshInfo_array *)(ulong)(uint)pUVar6->max_length <= pTVar1) goto label_0450c228;
        fVar20 = (pUVar6->m_Items[(int)pTVar1].fields.x - fVar21) / fVar19;
        fVar22 = 1.0;
        if (fVar20 <= 1.0) {
          fVar22 = fVar20;
        }
        UVar23 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__Sample
                           ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pIVar13,
                            (float)(-(uint)(0.0 <= fVar20) & (uint)fVar22),(MethodInfo *)method_00);
        pIVar9 = (Il2CppRGCTXData *)0x0;
        iVar8 = il2cpp_runtime_helper_03b428b0(UVar23.fields.r);
        maxX = (TMPro_TMP_MeshInfo_array *)(ulong)(uint)pUVar5->max_length;
        if (maxX <= pTVar1) goto label_0450c228;
        (&pUVar5->m_Items[0].fields.rgba)[(int)pTVar1] = iVar8;
        pTVar1 = (TMPro_TMP_MeshInfo_array *)((long)&(pTVar16->obj).klass + 2);
        if ((TMPro_TMP_MeshInfo_array *)(ulong)(uint)pUVar6->max_length <= pTVar1) goto label_0450c228;
        fVar20 = (pUVar6->m_Items[(int)pTVar1].fields.x - fVar21) / fVar19;
        fVar22 = 1.0;
        if (fVar20 <= 1.0) {
          fVar22 = fVar20;
        }
        UVar23 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__Sample
                           ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pIVar13,
                            (float)(-(uint)(0.0 <= fVar20) & (uint)fVar22),(MethodInfo *)method_00);
        pIVar9 = (Il2CppRGCTXData *)0x0;
        iVar8 = il2cpp_runtime_helper_03b428b0(UVar23.fields.r);
        maxX = (TMPro_TMP_MeshInfo_array *)(ulong)(uint)pUVar5->max_length;
        if (maxX <= pTVar1) goto label_0450c228;
        (&pUVar5->m_Items[0].fields.rgba)[(int)pTVar1] = iVar8;
        pTVar16 = (TMPro_TMP_MeshInfo_array *)((long)&(pTVar16->obj).klass + 3);
        if ((TMPro_TMP_MeshInfo_array *)(ulong)(uint)pUVar6->max_length <= pTVar16) goto label_0450c228;
        fVar20 = (pUVar6->m_Items[(int)pTVar16].fields.x - fVar21) / fVar19;
        fVar22 = 1.0;
        if (fVar20 <= 1.0) {
          fVar22 = fVar20;
        }
        UVar23 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__Sample
                           ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pIVar13,
                            (float)(-(uint)(0.0 <= fVar20) & (uint)fVar22),(MethodInfo *)method_00);
        pIVar9 = (Il2CppRGCTXData *)0x0;
        iVar8 = il2cpp_runtime_helper_03b428b0(UVar23.fields.r);
        maxX = (TMPro_TMP_MeshInfo_array *)(ulong)(uint)pUVar5->max_length;
        if (maxX <= pTVar16) goto label_0450c228;
        (&pUVar5->m_Items[0].fields.rgba)[(int)pTVar16] = iVar8;
        textInfo = local_58;
        method_00 = local_50;
      }
      pTVar17 = (TMPro_TMP_MeshInfo_array *)((long)&(pTVar17->obj).klass + 1);
      method_00 = (TMPro_TMP_TextInfo_o *)&method_00[3].fields.linkCount;
      if ((long)(textInfo->fields).characterCount <= (long)pTVar17) {
        return;
      }
      pTVar4 = (textInfo->fields).characterInfo;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_0450c228:
  il2cpp_runtime_helper_022b2ca0();
  *extraout_RDX = INFINITY;
  *(float *)&(maxX->obj).klass = -INFINITY;
  if (method_00 != (TMPro_TMP_TextInfo_o *)0x0) {
    lVar14 = (long)(method_00->fields).characterCount;
    fVar21 = -INFINITY;
    if (lVar14 < 1) {
      return;
    }
    lVar15 = 0x58;
    uVar18 = 0;
    pIVar9 = ((_union_13 *)&(method_00->fields).characterInfo)->rgctx_data;
    if (pIVar9 != (Il2CppRGCTXData *)0x0) {
label_0450c2a1:
      if (uVar18 < *(uint *)(pIVar9 + 3)) {
        if ((*(byte *)((long)pIVar9 + lVar15 + 0x13c) & 1) == 0) {
label_0450c280:
          uVar18 = uVar18 + 1;
          lVar15 = lVar15 + 0x178;
          if (lVar14 <= (long)uVar18) {
            return;
          }
          pIVar9 = ((_union_13 *)&(method_00->fields).characterInfo)->rgctx_data;
          if (pIVar9 == (Il2CppRGCTXData *)0x0) goto label_0450c3c7;
          goto label_0450c2a1;
        }
        pTVar17 = (method_00->fields).meshInfo;
        if (pTVar17 == (TMPro_TMP_MeshInfo_array *)0x0) goto label_0450c3c7;
        if (*(uint *)((long)pIVar9 + lVar15) < (uint)pTVar17->max_length) {
          pUVar6 = pTVar17->m_Items[(int)*(uint *)((long)pIVar9 + lVar15)].fields.vertices;
          if (pUVar6 != (UnityEngine_Vector3_array *)0x0) {
            uVar3 = *(uint *)((long)pIVar9 + lVar15 + 0x14);
            pIVar9 = (Il2CppRGCTXData *)(ulong)uVar3;
            pIVar13 = (Il2CppRGCTXData *)(ulong)(uint)pUVar6->max_length;
            if (pIVar9 < pIVar13) {
              fVar21 = pUVar6->m_Items[(int)uVar3].fields.x;
              fVar19 = *extraout_RDX;
              if (fVar21 <= *extraout_RDX) {
                fVar19 = fVar21;
              }
              *extraout_RDX = fVar19;
              fVar19 = *(float *)&(maxX->obj).klass;
              if (fVar19 <= fVar21) {
                fVar19 = fVar21;
              }
              *(float *)&(maxX->obj).klass = fVar19;
              if ((long)pIVar9 + 1U < pIVar13) {
                fVar21 = pUVar6->m_Items[(int)((long)pIVar9 + 1U)].fields.x;
                fVar19 = *extraout_RDX;
                if (fVar21 <= *extraout_RDX) {
                  fVar19 = fVar21;
                }
                *extraout_RDX = fVar19;
                fVar19 = *(float *)&(maxX->obj).klass;
                if (fVar19 <= fVar21) {
                  fVar19 = fVar21;
                }
                *(float *)&(maxX->obj).klass = fVar19;
                if ((long)pIVar9 + 2U < pIVar13) {
                  fVar21 = pUVar6->m_Items[(int)((long)pIVar9 + 2U)].fields.x;
                  fVar19 = *extraout_RDX;
                  if (fVar21 <= *extraout_RDX) {
                    fVar19 = fVar21;
                  }
                  *extraout_RDX = fVar19;
                  fVar19 = *(float *)&(maxX->obj).klass;
                  if (fVar19 <= fVar21) {
                    fVar19 = fVar21;
                  }
                  *(float *)&(maxX->obj).klass = fVar19;
                  pIVar9 = (Il2CppRGCTXData *)((long)pIVar9 + 3);
                  if (pIVar9 < pIVar13) {
                    fVar19 = pUVar6->m_Items[(int)pIVar9].fields.x;
                    fVar21 = *extraout_RDX;
                    if (fVar19 <= *extraout_RDX) {
                      fVar21 = fVar19;
                    }
                    *extraout_RDX = fVar21;
                    fVar21 = *(float *)&(maxX->obj).klass;
                    if (fVar21 <= fVar19) {
                      fVar21 = fVar19;
                    }
                    *(float *)&(maxX->obj).klass = fVar21;
                    goto label_0450c280;
                  }
                }
              }
            }
            goto label_0450c3c2;
          }
          goto label_0450c3c7;
        }
      }
label_0450c3c2:
      il2cpp_runtime_helper_022b2ca0(fVar21);
    }
  }
label_0450c3c7:
  fVar21 = (float)il2cpp_runtime_helper_022b2c90();
  pIVar13 = pIVar9;
  if (pIVar9[6].method != (MethodInfo *)0x0) {
    iVar2 = *(int *)&(pIVar9[6].method)->name;
    if (iVar2 == 1) {
      return;
    }
    fVar19 = 1.0;
    if (fVar21 <= 1.0) {
      fVar19 = fVar21;
    }
    if (g_data_057a690a == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a690a = '\x01';
    }
    pIVar13 = TypeInfo_Math;
    if (*(int *)((long)TypeInfo_Math + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    fVar21 = floorf((float)(-(uint)(0.0 <= fVar21) & (uint)fVar19) * (float)(iVar2 + -1));
    if (pIVar9[6].method != (MethodInfo *)0x0) {
      uVar12 = (uint)fVar21;
      method_00 = (TMPro_TMP_TextInfo_o *)(ulong)uVar12;
      uVar3 = *(uint *)&(pIVar9[6].method)->name;
      uVar11 = uVar3 - 2;
      if ((int)uVar12 < (int)(uVar3 - 2)) {
        uVar11 = uVar12;
      }
      if ((uVar11 < uVar3) && (method_00 = (TMPro_TMP_TextInfo_o *)(ulong)(uVar11 + 1), uVar11 + 1 < uVar3)) {
        return;
      }
      goto label_0450c50d;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_0450c50d:
  il2cpp_runtime_helper_022b2ca0();
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ClearEffect
            ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pIVar13,(MethodInfo *)method_00);
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ClearVertexColors
            ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pIVar13,(MethodInfo *)method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$ApplyVertexColors
// il2cpp: void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ApplyVertexColors (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o* __this, TMPro_TMP_TextInfo_o* textInfo, const MethodInfo* method);
// 0x450bef0

void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ApplyVertexColors
               (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *__this,TMPro_TMP_TextInfo_o *textInfo,
               MethodInfo *method)

{
  TMPro_TMP_MeshInfo_array *pTVar1;
  int iVar2;
  uint uVar3;
  UnityEngine_Color_array *pUVar4;
  TMPro_TMP_CharacterInfo_array *pTVar5;
  UnityEngine_Color32_array *pUVar6;
  UnityEngine_Vector3_array *pUVar7;
  bool_conflict bVar8;
  int32_t iVar9;
  uint uVar10;
  TMPro_TMP_MeshInfo_array *maxX;
  float *extraout_RDX;
  uint uVar11;
  TMPro_TMP_TextInfo_o *method_00;
  Il2CppRGCTXData *pIVar12;
  Il2CppRGCTXData *pIVar13;
  MethodInfo *in_R8;
  long lVar14;
  long lVar15;
  TMPro_TMP_MeshInfo_array *pTVar16;
  TMPro_TMP_MeshInfo_array *pTVar17;
  ulong uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  UnityEngine_Color_o UVar23;
  float fStack_48;
  float fStack_44;
  TMPro_TMP_TextInfo_o *pTStack_40;
  TMPro_TMP_TextInfo_o *pTStack_38;
  
  fStack_44 = 0.0;
  fStack_48 = 0.0;
  pUVar4 = (__this->fields)._colors;
  if ((pUVar4 == (UnityEngine_Color_array *)0x0) || (pUVar4->max_length == 0)) {
    return;
  }
  maxX = (TMPro_TMP_MeshInfo_array *)&fStack_48;
  method_00 = textInfo;
  pIVar12 = (Il2CppRGCTXData *)__this;
  bVar8 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__TryBounds
                    (__this,textInfo,&fStack_44,(float *)maxX,in_R8);
  fVar21 = fStack_44;
  if ((char)bVar8 == '\0') {
    return;
  }
  if (textInfo != (TMPro_TMP_TextInfo_o *)0x0) {
    if ((textInfo->fields).characterCount < 1) {
      return;
    }
    fVar19 = fStack_48 - fStack_44;
    if (fVar19 <= 0.001) {
      fVar19 = 0.001;
    }
    method_00 = (TMPro_TMP_TextInfo_o *)&g_data_00000058;
    pTVar17 = (TMPro_TMP_MeshInfo_array *)0x0;
    pTVar5 = (textInfo->fields).characterInfo;
    pTStack_40 = textInfo;
    while (pTVar5 != (TMPro_TMP_CharacterInfo_array *)0x0) {
      maxX = (TMPro_TMP_MeshInfo_array *)(ulong)(uint)pTVar5->max_length;
      if (maxX <= pTVar17) goto label_0450c228;
      if ((*(byte *)((long)&pTVar5->m_Items[0].fields.topRight.fields.y + (long)method_00) & 1) != 0) {
        maxX = (textInfo->fields).meshInfo;
        if (maxX == (TMPro_TMP_MeshInfo_array *)0x0) break;
        uVar3 = *(uint *)((long)&method_00[3].fields.pageCount + (long)(pTVar5->m_Items + -1));
        if ((uint)maxX->max_length <= uVar3) goto label_0450c228;
        pUVar7 = maxX->m_Items[(int)uVar3].fields.vertices;
        if (pUVar7 == (UnityEngine_Vector3_array *)0x0) break;
        uVar10 = *(uint *)((undefined1 *)((long)&pTVar5->bounds + 4) + (long)method_00);
        pTVar16 = (TMPro_TMP_MeshInfo_array *)(ulong)uVar10;
        pUVar6 = maxX->m_Items[(int)uVar3].fields.colors32;
        pTStack_38 = method_00;
        if (pUVar6 == (UnityEngine_Color32_array *)0x0) {
          if ((uint)pUVar7->max_length <= uVar10) goto label_0450c228;
          fVar19 = (pUVar7->m_Items[(int)uVar10].fields.x - fVar21) / fVar19;
          fVar21 = 1.0;
          if (fVar19 <= 1.0) {
            fVar21 = fVar19;
          }
          UVar23 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__Sample
                             (__this,(float)(-(uint)(0.0 <= fVar19) & (uint)fVar21),(MethodInfo *)method_00);
          pIVar12 = (Il2CppRGCTXData *)0x0;
          il2cpp_runtime_helper_03b428b0(UVar23.fields.r);
          break;
        }
        if ((TMPro_TMP_MeshInfo_array *)(ulong)(uint)pUVar7->max_length <= pTVar16) goto label_0450c228;
        fVar20 = (pUVar7->m_Items[(int)uVar10].fields.x - fVar21) / fVar19;
        fVar22 = 1.0;
        if (fVar20 <= 1.0) {
          fVar22 = fVar20;
        }
        UVar23 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__Sample
                           (__this,(float)(-(uint)(0.0 <= fVar20) & (uint)fVar22),(MethodInfo *)method_00);
        pIVar12 = (Il2CppRGCTXData *)0x0;
        iVar9 = il2cpp_runtime_helper_03b428b0(UVar23.fields.r);
        maxX = (TMPro_TMP_MeshInfo_array *)(ulong)(uint)pUVar6->max_length;
        if (maxX <= pTVar16) goto label_0450c228;
        (&pUVar6->m_Items[0].fields.rgba)[(int)uVar10] = iVar9;
        pTVar1 = (TMPro_TMP_MeshInfo_array *)((long)&(pTVar16->obj).klass + 1);
        if ((TMPro_TMP_MeshInfo_array *)(ulong)(uint)pUVar7->max_length <= pTVar1) goto label_0450c228;
        fVar20 = (pUVar7->m_Items[(int)pTVar1].fields.x - fVar21) / fVar19;
        fVar22 = 1.0;
        if (fVar20 <= 1.0) {
          fVar22 = fVar20;
        }
        UVar23 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__Sample
                           (__this,(float)(-(uint)(0.0 <= fVar20) & (uint)fVar22),(MethodInfo *)method_00);
        pIVar12 = (Il2CppRGCTXData *)0x0;
        iVar9 = il2cpp_runtime_helper_03b428b0(UVar23.fields.r);
        maxX = (TMPro_TMP_MeshInfo_array *)(ulong)(uint)pUVar6->max_length;
        if (maxX <= pTVar1) goto label_0450c228;
        (&pUVar6->m_Items[0].fields.rgba)[(int)pTVar1] = iVar9;
        pTVar1 = (TMPro_TMP_MeshInfo_array *)((long)&(pTVar16->obj).klass + 2);
        if ((TMPro_TMP_MeshInfo_array *)(ulong)(uint)pUVar7->max_length <= pTVar1) goto label_0450c228;
        fVar20 = (pUVar7->m_Items[(int)pTVar1].fields.x - fVar21) / fVar19;
        fVar22 = 1.0;
        if (fVar20 <= 1.0) {
          fVar22 = fVar20;
        }
        UVar23 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__Sample
                           (__this,(float)(-(uint)(0.0 <= fVar20) & (uint)fVar22),(MethodInfo *)method_00);
        pIVar12 = (Il2CppRGCTXData *)0x0;
        iVar9 = il2cpp_runtime_helper_03b428b0(UVar23.fields.r);
        maxX = (TMPro_TMP_MeshInfo_array *)(ulong)(uint)pUVar6->max_length;
        if (maxX <= pTVar1) goto label_0450c228;
        (&pUVar6->m_Items[0].fields.rgba)[(int)pTVar1] = iVar9;
        pTVar16 = (TMPro_TMP_MeshInfo_array *)((long)&(pTVar16->obj).klass + 3);
        if ((TMPro_TMP_MeshInfo_array *)(ulong)(uint)pUVar7->max_length <= pTVar16) goto label_0450c228;
        fVar20 = (pUVar7->m_Items[(int)pTVar16].fields.x - fVar21) / fVar19;
        fVar22 = 1.0;
        if (fVar20 <= 1.0) {
          fVar22 = fVar20;
        }
        UVar23 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__Sample
                           (__this,(float)(-(uint)(0.0 <= fVar20) & (uint)fVar22),(MethodInfo *)method_00);
        pIVar12 = (Il2CppRGCTXData *)0x0;
        iVar9 = il2cpp_runtime_helper_03b428b0(UVar23.fields.r);
        maxX = (TMPro_TMP_MeshInfo_array *)(ulong)(uint)pUVar6->max_length;
        if (maxX <= pTVar16) goto label_0450c228;
        (&pUVar6->m_Items[0].fields.rgba)[(int)pTVar16] = iVar9;
        textInfo = pTStack_40;
        method_00 = pTStack_38;
      }
      pTVar17 = (TMPro_TMP_MeshInfo_array *)((long)&(pTVar17->obj).klass + 1);
      method_00 = (TMPro_TMP_TextInfo_o *)&method_00[3].fields.linkCount;
      if ((long)(textInfo->fields).characterCount <= (long)pTVar17) {
        return;
      }
      pTVar5 = (textInfo->fields).characterInfo;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_0450c228:
  il2cpp_runtime_helper_022b2ca0();
  *extraout_RDX = INFINITY;
  *(float *)&(maxX->obj).klass = -INFINITY;
  if (method_00 != (TMPro_TMP_TextInfo_o *)0x0) {
    lVar14 = (long)(method_00->fields).characterCount;
    fVar21 = -INFINITY;
    if (lVar14 < 1) {
      return;
    }
    lVar15 = 0x58;
    uVar18 = 0;
    pIVar12 = ((_union_13 *)&(method_00->fields).characterInfo)->rgctx_data;
    if (pIVar12 != (Il2CppRGCTXData *)0x0) {
label_0450c2a1:
      if (uVar18 < *(uint *)(pIVar12 + 3)) {
        if ((*(byte *)((long)pIVar12 + lVar15 + 0x13c) & 1) == 0) {
label_0450c280:
          uVar18 = uVar18 + 1;
          lVar15 = lVar15 + 0x178;
          if (lVar14 <= (long)uVar18) {
            return;
          }
          pIVar12 = ((_union_13 *)&(method_00->fields).characterInfo)->rgctx_data;
          if (pIVar12 == (Il2CppRGCTXData *)0x0) goto label_0450c3c7;
          goto label_0450c2a1;
        }
        pTVar17 = (method_00->fields).meshInfo;
        if (pTVar17 == (TMPro_TMP_MeshInfo_array *)0x0) goto label_0450c3c7;
        if ((uint)pTVar17->max_length <= *(uint *)((long)pIVar12 + lVar15)) goto label_0450c3c2;
        pUVar7 = pTVar17->m_Items[(int)*(uint *)((long)pIVar12 + lVar15)].fields.vertices;
        if (pUVar7 == (UnityEngine_Vector3_array *)0x0) goto label_0450c3c7;
        uVar3 = *(uint *)((long)pIVar12 + lVar15 + 0x14);
        pIVar12 = (Il2CppRGCTXData *)(ulong)uVar3;
        pIVar13 = (Il2CppRGCTXData *)(ulong)(uint)pUVar7->max_length;
        if (pIVar12 < pIVar13) {
          fVar21 = pUVar7->m_Items[(int)uVar3].fields.x;
          fVar19 = *extraout_RDX;
          if (fVar21 <= *extraout_RDX) {
            fVar19 = fVar21;
          }
          *extraout_RDX = fVar19;
          fVar19 = *(float *)&(maxX->obj).klass;
          if (fVar19 <= fVar21) {
            fVar19 = fVar21;
          }
          *(float *)&(maxX->obj).klass = fVar19;
          if ((long)pIVar12 + 1U < pIVar13) {
            fVar21 = pUVar7->m_Items[(int)((long)pIVar12 + 1U)].fields.x;
            fVar19 = *extraout_RDX;
            if (fVar21 <= *extraout_RDX) {
              fVar19 = fVar21;
            }
            *extraout_RDX = fVar19;
            fVar19 = *(float *)&(maxX->obj).klass;
            if (fVar19 <= fVar21) {
              fVar19 = fVar21;
            }
            *(float *)&(maxX->obj).klass = fVar19;
            if ((long)pIVar12 + 2U < pIVar13) {
              fVar21 = pUVar7->m_Items[(int)((long)pIVar12 + 2U)].fields.x;
              fVar19 = *extraout_RDX;
              if (fVar21 <= *extraout_RDX) {
                fVar19 = fVar21;
              }
              *extraout_RDX = fVar19;
              fVar19 = *(float *)&(maxX->obj).klass;
              if (fVar19 <= fVar21) {
                fVar19 = fVar21;
              }
              *(float *)&(maxX->obj).klass = fVar19;
              pIVar12 = (Il2CppRGCTXData *)((long)pIVar12 + 3);
              if (pIVar12 < pIVar13) {
                fVar19 = pUVar7->m_Items[(int)pIVar12].fields.x;
                fVar21 = *extraout_RDX;
                if (fVar19 <= *extraout_RDX) {
                  fVar21 = fVar19;
                }
                *extraout_RDX = fVar21;
                fVar21 = *(float *)&(maxX->obj).klass;
                if (fVar21 <= fVar19) {
                  fVar21 = fVar19;
                }
                *(float *)&(maxX->obj).klass = fVar21;
                goto label_0450c280;
              }
            }
          }
        }
      }
label_0450c3c2:
      il2cpp_runtime_helper_022b2ca0(fVar21);
    }
  }
label_0450c3c7:
  fVar21 = (float)il2cpp_runtime_helper_022b2c90();
  pIVar13 = pIVar12;
  if (pIVar12[6].method != (MethodInfo *)0x0) {
    iVar2 = *(int *)&(pIVar12[6].method)->name;
    if (iVar2 == 1) {
      return;
    }
    fVar19 = 1.0;
    if (fVar21 <= 1.0) {
      fVar19 = fVar21;
    }
    if (g_data_057a690a == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a690a = '\x01';
    }
    pIVar13 = TypeInfo_Math;
    if (*(int *)((long)TypeInfo_Math + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    fVar21 = floorf((float)(-(uint)(0.0 <= fVar21) & (uint)fVar19) * (float)(iVar2 + -1));
    if (pIVar12[6].method != (MethodInfo *)0x0) {
      uVar11 = (uint)fVar21;
      method_00 = (TMPro_TMP_TextInfo_o *)(ulong)uVar11;
      uVar3 = *(uint *)&(pIVar12[6].method)->name;
      uVar10 = uVar3 - 2;
      if ((int)uVar11 < (int)(uVar3 - 2)) {
        uVar10 = uVar11;
      }
      if ((uVar10 < uVar3) && (method_00 = (TMPro_TMP_TextInfo_o *)(ulong)(uVar10 + 1), uVar10 + 1 < uVar3)) {
        return;
      }
      goto label_0450c50d;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_0450c50d:
  il2cpp_runtime_helper_022b2ca0();
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ClearEffect
            ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pIVar13,(MethodInfo *)method_00);
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ClearVertexColors
            ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pIVar13,(MethodInfo *)method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$TryBounds
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__TryBounds (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o* __this, TMPro_TMP_TextInfo_o* textInfo, float* minX, float* maxX, const MethodInfo* method);
// 0x450c230

bool_conflict
Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__TryBounds
          (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *__this,TMPro_TMP_TextInfo_o *textInfo,
          float *minX,float *maxX,MethodInfo *method)

{
  TMPro_TMP_CharacterInfo_array *pTVar1;
  int iVar2;
  uint uVar3;
  TMPro_TMP_MeshInfo_array *pTVar4;
  UnityEngine_Vector3_array *pUVar5;
  TMPro_TMP_TextElement_o *pTVar6;
  bool_conflict extraout_EAX;
  ulong in_RAX;
  uint uVar7;
  uint uVar8;
  TMPro_TMP_CharacterInfo_array *pTVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  
  *minX = INFINITY;
  *maxX = -INFINITY;
  if (textInfo != (TMPro_TMP_TextInfo_o *)0x0) {
    lVar10 = (long)(textInfo->fields).characterCount;
    fVar13 = -INFINITY;
    if (lVar10 < 1) {
label_0450c3b4:
      return (bool_conflict)CONCAT71((int7)(in_RAX >> 8),*minX <= fVar13 && fVar13 != *minX);
    }
    lVar11 = 0x58;
    uVar12 = 0;
    __this = (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)(textInfo->fields).characterInfo;
    if ((TMPro_TMP_CharacterInfo_array *)__this != (TMPro_TMP_CharacterInfo_array *)0x0) {
label_0450c2a1:
      in_RAX = (ulong)(uint)((TMPro_TMP_CharacterInfo_array *)__this)->max_length;
      if (uVar12 < in_RAX) {
        if ((*(byte *)((long)&((TMPro_TMP_CharacterInfo_array *)__this)->m_Items[0].fields.topRight.fields.y +
                      lVar11) & 1) == 0) {
label_0450c280:
          uVar12 = uVar12 + 1;
          lVar11 = lVar11 + 0x178;
          if (lVar10 <= (long)uVar12) goto label_0450c3b4;
          __this = (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)(textInfo->fields).characterInfo;
          if ((TMPro_TMP_CharacterInfo_array *)__this == (TMPro_TMP_CharacterInfo_array *)0x0)
          goto label_0450c3c7;
          goto label_0450c2a1;
        }
        pTVar4 = (textInfo->fields).meshInfo;
        if (pTVar4 == (TMPro_TMP_MeshInfo_array *)0x0) goto label_0450c3c7;
        uVar3 = *(uint *)((long)((TMPro_TMP_CharacterInfo_array *)__this)->m_Items + lVar11 + -0x20);
        if (uVar3 < (uint)pTVar4->max_length) {
          pUVar5 = pTVar4->m_Items[(int)uVar3].fields.vertices;
          if (pUVar5 != (UnityEngine_Vector3_array *)0x0) {
            uVar3 = *(uint *)((long)((TMPro_TMP_CharacterInfo_array *)__this)->m_Items + lVar11 + -0xc);
            __this = (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)(ulong)uVar3;
            pTVar9 = (TMPro_TMP_CharacterInfo_array *)(ulong)(uint)pUVar5->max_length;
            if (__this < pTVar9) {
              fVar13 = pUVar5->m_Items[(int)uVar3].fields.x;
              fVar14 = *minX;
              if (fVar13 <= *minX) {
                fVar14 = fVar13;
              }
              *minX = fVar14;
              fVar14 = *maxX;
              if (*maxX <= fVar13) {
                fVar14 = fVar13;
              }
              *maxX = fVar14;
              pTVar1 = (TMPro_TMP_CharacterInfo_array *)
                       ((long)&(((TMPro_TMP_CharacterInfo_array *)__this)->obj).klass + 1);
              if (pTVar1 < pTVar9) {
                fVar13 = pUVar5->m_Items[(int)pTVar1].fields.x;
                fVar14 = *minX;
                if (fVar13 <= *minX) {
                  fVar14 = fVar13;
                }
                *minX = fVar14;
                fVar14 = *maxX;
                if (*maxX <= fVar13) {
                  fVar14 = fVar13;
                }
                *maxX = fVar14;
                pTVar1 = (TMPro_TMP_CharacterInfo_array *)
                         ((long)&(((TMPro_TMP_CharacterInfo_array *)__this)->obj).klass + 2);
                if (pTVar1 < pTVar9) {
                  fVar13 = pUVar5->m_Items[(int)pTVar1].fields.x;
                  fVar14 = *minX;
                  if (fVar13 <= *minX) {
                    fVar14 = fVar13;
                  }
                  *minX = fVar14;
                  fVar14 = *maxX;
                  if (*maxX <= fVar13) {
                    fVar14 = fVar13;
                  }
                  *maxX = fVar14;
                  __this = (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)
                           ((long)&(((TMPro_TMP_CharacterInfo_array *)__this)->obj).klass + 3);
                  if (__this < pTVar9) {
                    in_RAX = (long)(int)__this * 3;
                    fVar14 = pUVar5->m_Items[(int)__this].fields.x;
                    fVar13 = *minX;
                    if (fVar14 <= *minX) {
                      fVar13 = fVar14;
                    }
                    *minX = fVar13;
                    fVar13 = *maxX;
                    if (*maxX <= fVar14) {
                      fVar13 = fVar14;
                    }
                    *maxX = fVar13;
                    goto label_0450c280;
                  }
                }
              }
            }
            goto label_0450c3c2;
          }
          goto label_0450c3c7;
        }
      }
label_0450c3c2:
      il2cpp_runtime_helper_022b2ca0();
    }
  }
label_0450c3c7:
  fVar13 = (float)il2cpp_runtime_helper_022b2c90();
  pTVar6 = ((TMPro_TMP_CharacterInfo_array *)__this)->m_Items[0].fields.textElement;
  pTVar9 = (TMPro_TMP_CharacterInfo_array *)__this;
  if (pTVar6 != (TMPro_TMP_TextElement_o *)0x0) {
    iVar2 = *(int *)&(pTVar6->fields).m_TextAsset;
    if (iVar2 == 1) {
      return 1;
    }
    fVar14 = 1.0;
    if (fVar13 <= 1.0) {
      fVar14 = fVar13;
    }
    if (g_data_057a690a == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a690a = '\x01';
    }
    pTVar9 = TypeInfo_Math;
    if (TypeInfo_Math->m_Items[0].fields.vertex_TR.fields.uv4.fields.x == 0.0) {
      il2cpp_runtime_helper_02337ed0();
    }
    fVar13 = floorf((float)(-(uint)(0.0 <= fVar13) & (uint)fVar14) * (float)(iVar2 + -1));
    pTVar6 = ((TMPro_TMP_CharacterInfo_array *)__this)->m_Items[0].fields.textElement;
    if (pTVar6 != (TMPro_TMP_TextElement_o *)0x0) {
      uVar8 = (uint)fVar13;
      textInfo = (TMPro_TMP_TextInfo_o *)(ulong)uVar8;
      uVar3 = *(uint *)&(pTVar6->fields).m_TextAsset;
      uVar7 = uVar3 - 2;
      if ((int)uVar8 < (int)(uVar3 - 2)) {
        uVar7 = uVar8;
      }
      if ((uVar7 < uVar3) && (textInfo = (TMPro_TMP_TextInfo_o *)(ulong)(uVar7 + 1), uVar7 + 1 < uVar3)) {
        return (bool_conflict)pTVar6;
      }
      goto label_0450c50d;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_0450c50d:
  il2cpp_runtime_helper_022b2ca0();
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ClearEffect
            ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pTVar9,(MethodInfo *)textInfo);
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ClearVertexColors
            ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pTVar9,(MethodInfo *)textInfo);
  return extraout_EAX;
}


// Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$Sample
// il2cpp: UnityEngine_Color_o Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__Sample (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o* __this, float t, const MethodInfo* method);
// 0x450c3d0

UnityEngine_Color_o
Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__Sample
          (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *__this,float t,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  UnityEngine_Color_array *pUVar11;
  uint uVar12;
  uint uVar13;
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *__this_00;
  float fVar14;
  float fVar15;
  undefined4 extraout_XMM0_Da;
  undefined8 in_XMM1_Qa;
  UnityEngine_Color_o UVar16;
  UnityEngine_Color_o UVar17;
  undefined4 extraout_XMM0_Db;
  
  pUVar11 = (__this->fields)._colors;
  __this_00 = __this;
  if (pUVar11 != (UnityEngine_Color_array *)0x0) {
    iVar9 = (int)pUVar11->max_length;
    if (iVar9 == 1) {
      return (UnityEngine_Color_o)pUVar11->m_Items[0].fields;
    }
    fVar14 = 1.0;
    if (t <= 1.0) {
      fVar14 = t;
    }
    in_XMM1_Qa = 0;
    if (g_data_057a690a == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a690a = '\x01';
    }
    fVar14 = (float)(-(uint)(0.0 <= t) & (uint)fVar14) * (float)(iVar9 + -1);
    __this_00 = TypeInfo_Math;
    if (*(int *)((long)&TypeInfo_Math[3].fields._text + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    fVar15 = floorf(fVar14);
    pUVar11 = (__this->fields)._colors;
    if (pUVar11 != (UnityEngine_Color_array *)0x0) {
      uVar13 = (uint)fVar15;
      method = (MethodInfo *)(ulong)uVar13;
      uVar10 = (uint)pUVar11->max_length;
      uVar12 = uVar10 - 2;
      if ((int)uVar13 < (int)(uVar10 - 2)) {
        uVar12 = uVar13;
      }
      if (uVar12 < uVar10) {
        uVar13 = uVar12 + 1;
        method = (MethodInfo *)(ulong)uVar13;
        if (uVar13 < uVar10) {
          uVar1 = pUVar11->m_Items[(int)uVar12].fields.r;
          uVar5 = pUVar11->m_Items[(int)uVar12].fields.g;
          uVar2 = pUVar11->m_Items[(int)uVar12].fields.b;
          uVar6 = pUVar11->m_Items[(int)uVar12].fields.a;
          uVar3 = pUVar11->m_Items[(int)uVar13].fields.r;
          uVar7 = pUVar11->m_Items[(int)uVar13].fields.g;
          uVar4 = pUVar11->m_Items[(int)uVar13].fields.b;
          uVar8 = pUVar11->m_Items[(int)uVar13].fields.a;
          fVar14 = fVar14 - (float)(int)uVar12;
          fVar15 = 1.0;
          if (fVar14 <= 1.0) {
            fVar15 = fVar14;
          }
          fVar15 = (float)(-(uint)(0.0 <= fVar14) & (uint)fVar15);
          UVar16.fields.r = ((float)uVar3 - (float)uVar1) * fVar15 + (float)uVar1;
          UVar16.fields.g = ((float)uVar7 - (float)uVar5) * fVar15 + (float)uVar5;
          UVar16.fields.b = ((float)uVar4 - (float)uVar2) * fVar15 + (float)uVar2;
          UVar16.fields.a = ((float)uVar8 - (float)uVar6) * fVar15 + (float)uVar6;
          return (UnityEngine_Color_o)UVar16.fields;
        }
      }
      goto label_0450c50d;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_0450c50d:
  il2cpp_runtime_helper_022b2ca0();
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ClearEffect(__this_00,method);
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ClearVertexColors(__this_00,method);
  UVar17.fields.g = (float)extraout_XMM0_Db;
  UVar17.fields.r = (float)extraout_XMM0_Da;
  UVar17.fields.b = (float)(int)in_XMM1_Qa;
  UVar17.fields.a = (float)(int)((ulong)in_XMM1_Qa >> 0x20);
  return (UnityEngine_Color_o)UVar17.fields;
}


// Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__OnDestroy (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o* __this, const MethodInfo* method);
// 0x450c520

void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__OnDestroy
               (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ClearEffect(__this,method);
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ClearVertexColors(__this,method);
  return;
}


// Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview___ctor (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o* __this, const MethodInfo* method);
// 0x450c540

void Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview___ctor
               (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057b4c9f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057b4c9f = '\x01';
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar1 != 0) {
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


