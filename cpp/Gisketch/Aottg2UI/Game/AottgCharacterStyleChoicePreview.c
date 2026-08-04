// Type: Gisketch.Aottg2UI.Game.AottgCharacterStyleChoicePreview
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgCharacterStyleChoicePreview.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgCharacterStyleChoicePreview$$Register
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__Register (const MethodInfo* method);
// 0x45066f0

void Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__Register(MethodInfo *method)

{
  char cVar1;
  int iVar2;
  long lVar3;
  System_Action_GisketchChoiceOptionRenderContext__o *pSVar4;
  
  if (g_data_057aed4c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchChoiceOptionRenderContext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RenderEffect);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RenderFont);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterStyleChoicePreview);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchChoiceOptionRenderer);
    il2cpp_runtime_helper_023445d0(&"profile-character-font-preview");
    il2cpp_runtime_helper_023445d0(&"profile-character-effect-preview");
    g_data_057aed4c = '\x01';
    iVar2 = *(int *)(TypeInfo_AottgCharacterStyleChoicePreview + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_AottgCharacterStyleChoicePreview + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)(TypeInfo_AottgCharacterStyleChoicePreview + 0xb8);
    cVar1 = *(char *)(lVar3 + 0x20);
  }
  else {
    lVar3 = *(long *)(TypeInfo_AottgCharacterStyleChoicePreview + 0xb8);
    cVar1 = *(char *)(lVar3 + 0x20);
  }
  if (cVar1 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_AottgCharacterStyleChoicePreview + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)(TypeInfo_AottgCharacterStyleChoicePreview + 0xb8);
  }
  *(undefined1 *)(lVar3 + 0x20) = 1;
  pSVar4 = (System_Action_GisketchChoiceOptionRenderContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchChoiceOptionRenderContext);
  System_Action_object____ctor();
  if (*(int *)(TypeInfo_GisketchChoiceOptionRenderer + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderer__Register("profile-character-effect-preview",pSVar4,(MethodInfo *)0x0);
  pSVar4 = (System_Action_GisketchChoiceOptionRenderContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchChoiceOptionRenderContext);
  System_Action_object____ctor();
  Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderer__Register("profile-character-font-preview",pSVar4,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterStyleChoicePreview$$UseEffectRenderer
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__UseEffectRenderer (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, const MethodInfo* method);
// 0x4509f70

void Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__UseEffectRenderer
               (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,MethodInfo *method)

{
  if (g_data_057aed4d == '\0') {
    il2cpp_runtime_helper_023445d0(&"profile-character-effect-preview");
    g_data_057aed4d = '\x01';
  }
  if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (node->fields).choiceOptions = "profile-character-effect-preview";
    il2cpp_runtime_helper_022b4080(&(node->fields).choiceOptions);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterStyleChoicePreview$$UseFontRenderer
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__UseFontRenderer (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, const MethodInfo* method);
// 0x4509fc0

void Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__UseFontRenderer
               (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,MethodInfo *method)

{
  if (g_data_057aed4e == '\0') {
    il2cpp_runtime_helper_023445d0(&"profile-character-font-preview");
    g_data_057aed4e = '\x01';
  }
  if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (node->fields).choiceOptions = "profile-character-font-preview";
    il2cpp_runtime_helper_022b4080(&(node->fields).choiceOptions);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterStyleChoicePreview$$RenderEffect
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__RenderEffect (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o* context, const MethodInfo* method);
// 0x450a540

void Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__RenderEffect
               (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *context,MethodInfo *method)

{
  float *pfVar1;
  undefined8 uVar2;
  byte bVar3;
  System_String_c *pSVar4;
  void *pvVar5;
  UnityEngine_Transform_c *__this;
  Il2CppMethodPointer vtableDispatch;
  long lVar6;
  undefined8 uVar7;
  uint in_EAX;
  bool_conflict bVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *__this_00;
  UnityEngine_Color_array *pUVar13;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *pUVar14;
  UnityEngine_Object_o *x_00;
  System_String_o *pSVar15;
  _union_14 _Var16;
  TMPro_TMP_Text_o *pTVar17;
  TMPro_TMP_Text_o *pTVar18;
  undefined8 *puVar19;
  UnityEngine_Color32_Fields UVar20;
  TMPro_TMP_Text_o *pTVar21;
  TMPro_TMP_Text_o *pTVar22;
  _union_14 __this_01;
  Il2CppObject *pIVar23;
  PatreonEffects_NameEffectSettings_o *settings;
  System_String_o **in_RCX;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  undefined8 extraout_RDX_01;
  _union_14 extraout_RDX_02;
  _union_14 extraout_RDX_03;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  MethodInfo *pMVar24;
  _union_14 *p_Var25;
  System_String_Fields SVar26;
  MethodInfo *pMVar27;
  UnityEngine_Color32_o value;
  TMPro_TMP_Text_c *pTVar28;
  MethodInfo *method_02;
  UnityEngine_Color32_Fields value_00;
  System_String_o **ppSVar29;
  long *plVar30;
  long lVar31;
  _union_14 _Var32;
  MethodInfo *in_R8;
  long *plVar33;
  MethodInfo_24E7B40 **unaff_R13;
  System_String_o **__this_02;
  _union_14 _Var34;
  _union_14 *p_Var35;
  float fVar36;
  float fVar37;
  float in_XMM1_Da;
  float fVar38;
  float in_XMM1_Db;
  float fVar39;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined1 auVar40 [16];
  _union_14 _Stack_1b0;
  _union_14 _Stack_1a8;
  _union_14 _Stack_1a0;
  _union_14 _Stack_198;
  TMPro_TMP_Text_o *pTStack_190;
  MethodInfo *pMStack_188;
  TMPro_TMP_Text_o *pTStack_180;
  _union_14 _Stack_178;
  undefined8 uStack_170;
  _union_14 _Stack_168;
  long *plStack_160;
  UnityEngine_Color32_Fields UStack_158;
  _union_14 _Stack_150;
  undefined1 auStack_148 [88];
  undefined8 uStack_f0;
  _union_14 _Stack_d8;
  TMPro_TMP_Text_o *pTStack_d0;
  UnityEngine_Object_o *pUStack_c8;
  ulong uStack_c0;
  _union_14 _Stack_b8;
  UnityEngine_Object_o *pUStack_b0;
  long *plStack_a8;
  _union_14 _Stack_a0;
  _union_14 _Stack_98;
  _union_14 *p_Stack_90;
  undefined8 uStack_88;
  UnityEngine_Object_o *pUStack_80;
  long *plStack_78;
  undefined1 auStack_28 [8];
  
  auStack_28._0_4_ = in_EAX;
  if (g_data_057aed4f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterStyleChoicePreview);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"FourColorGradient");
    il2cpp_runtime_helper_023445d0(&"TwoColorGradient");
    il2cpp_runtime_helper_023445d0(&"Aottg2");
    il2cpp_runtime_helper_023445d0(&"Color");
    g_data_057aed4f = '\x01';
  }
  auStack_28._4_4_ = 0;
  if (*(int *)((long)TypeInfo_AottgCharacterStyleChoicePreview.genericMethod + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__Preview(context,method);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar27 = (MethodInfo *)0x0;
  bVar8 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    return;
  }
  if (*(int *)((long)TypeInfo_AottgCharacterStyleChoicePreview.genericMethod + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  _Var16 = (_union_14)context;
  Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__ApplyDarkSurface(context,pMVar27);
  if (context == (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *)0x0) {
label_0450a7f2:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    bVar3 = (byte)(context->fields).Enabled;
    pMVar27 = (MethodInfo *)(ulong)bVar3;
    _Var16 = (_union_14)context;
    Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__SetFeedback(context,(uint)bVar3,method_00);
    if ((char)(context->fields).Enabled == '\0') {
label_0450a7da:
      if (__this_00 != (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)0x0) {
        Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureDisabled(__this_00,pMVar27);
        return;
      }
      goto label_0450a7f2;
    }
    _Var16 = (_union_14)(context->fields).Value;
    bVar8 = System_String__op_Equality(_Var16.genericMethod,"Color",(MethodInfo *)0x0);
    pSVar15 = "Aottg2";
    if ((char)bVar8 == '\0') {
      pMVar27 = "TwoColorGradient";
      bVar8 = System_String__op_Equality
                        ((context->fields).Value,(System_String_o *)"TwoColorGradient",(MethodInfo *)0x0);
      if ((char)bVar8 == '\0') {
        pMVar27 = "FourColorGradient";
        bVar8 = System_String__op_Equality
                          ((context->fields).Value,(System_String_o *)"FourColorGradient",(MethodInfo *)0x0);
        if ((char)bVar8 == '\0') {
          _Var16 = (_union_14)(context->fields).Value;
          pMVar27 = (MethodInfo *)(auStack_28 + 4);
          bVar8 = PatreonEffects_NameEffectPresets__TryResolve
                            (_Var16.genericMethod,(int32_t *)pMVar27,(MethodInfo *)0x0);
          if ((char)bVar8 == '\0') goto label_0450a7da;
          uVar10 = auStack_28._4_4_;
          _Var16.genericMethod =
               Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__PresetColors((context->fields).Value,pMVar27);
          if (*(int *)((long)TypeInfo_AottgCharacterStyleChoicePreview.genericMethod + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pUVar13 = Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__Parse
                              (_Var16.genericMethod,pMVar27);
          if (__this_00 != (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)0x0) {
            Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureEffect
                      (__this_00,uVar10,pUVar13,"Aottg2",in_R8);
            return;
          }
          goto label_0450a7f2;
        }
        if (*(int *)((long)TypeInfo_AottgCharacterStyleChoicePreview.genericMethod + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        _Var16 = (_union_14)
                 ((_union_14 *)(*(long *)((long)TypeInfo_AottgCharacterStyleChoicePreview.genericMethod + 0xb8) + 8))->genericMethod;
        pUVar13 = Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__Parse(_Var16.genericMethod,pMVar27)
        ;
      }
      else {
        if (*(int *)((long)TypeInfo_AottgCharacterStyleChoicePreview.genericMethod + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        _Var16 = (_union_14)(*(_union_14 **)((long)TypeInfo_AottgCharacterStyleChoicePreview.genericMethod + 0xb8))->genericMethod;
        pUVar13 = Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__Parse(_Var16.genericMethod,pMVar27)
        ;
      }
      if (__this_00 != (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)0x0) {
        Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureGradient
                  (__this_00,pUVar13,"Aottg2",(MethodInfo *)&"Aottg2");
        return;
      }
      goto label_0450a7f2;
    }
    if (__this_00 == (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)0x0) goto label_0450a7f2;
    if (g_data_057aed58 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Color);
      g_data_057aed58 = '\x01';
    }
    _Var16 = TypeInfo_Color;
    pUVar13 = (UnityEngine_Color_array *)il2cpp_runtime_helper_022b2a40();
    if (pUVar13 == (UnityEngine_Color_array *)0x0) goto label_0450a7f2;
    uVar9 = (uint)pUVar13->max_length;
    in_RCX = (System_String_o **)(ulong)uVar9;
    if (uVar9 != 0) {
      pUVar13->m_Items[0].fields.r = 1.0;
      pUVar13->m_Items[0].fields.g = 1.0;
      pUVar13->m_Items[0].fields.b = 1.0;
      pUVar13->m_Items[0].fields.a = 1.0;
      if (uVar9 != 1) {
        pUVar13->m_Items[1].fields.r = 1.0;
        pUVar13->m_Items[1].fields.g = 1.0;
        pUVar13->m_Items[1].fields.b = 1.0;
        pUVar13->m_Items[1].fields.a = 1.0;
        Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureGradient
                  (__this_00,pUVar13,pSVar15,(MethodInfo *)in_RCX);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057aed51 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgNameStyleChoicePreview_GetComponent_AottgNameStyleC);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgNameStyleChoicePreview_AddComponent_AottgNameStyleC);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed51 = '\x01';
  }
  if (_Var16.genericMethod == (System_String_o *)0x0) {
    return;
  }
  _Var34 = (_union_14)((_union_14 *)((long)_Var16.genericMethod + 0x18))->genericMethod;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  x = (UnityEngine_Object_o *)0x0;
  SVar26._stringLength = 0;
  SVar26._firstChar = 0;
  SVar26._6_2_ = 0;
  bVar8 = UnityEngine_Object__op_Equality(_Var34.genericMethod,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    return;
  }
  pSVar4 = ((System_String_o *)((long)_Var16.genericMethod + 0x18))->klass;
  __this_02 = (System_String_o **)0x0;
  if (pSVar4 != (System_String_c *)0x0) {
    SVar26 = *(System_String_Fields *)((long)_Var16.genericMethod + 0x28);
    pvVar5 = (pSVar4->_1).image;
    (**(code **)((long)pvVar5 + 0x558))(pSVar4,SVar26,*(undefined8 *)((long)pvVar5 + 0x560));
    pSVar4 = ((System_String_o *)((long)_Var16.genericMethod + 0x18))->klass;
    __this_02 = (System_String_o **)0x0;
    if (pSVar4 != (System_String_c *)0x0) {
      x = (UnityEngine_Object_o *)
          UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pSVar4,MethodInfo_AottgNameStyleChoicePreview_GetComponent_AottgNameStyleC);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      SVar26._stringLength = 0;
      SVar26._firstChar = 0;
      SVar26._6_2_ = 0;
      bVar8 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar8 == '\0') {
        return;
      }
      __this_02 = ((_union_14 *)((long)_Var16.genericMethod + 0x18))->genericMethod;
      if ((UnityEngine_Transform_o *)__this_02 != (UnityEngine_Transform_o *)0x0) {
        SVar26._stringLength = 0;
        SVar26._firstChar = 0;
        SVar26._6_2_ = 0;
        pUVar14 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
        if (pUVar14 != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__AddComponent_object_(pUVar14,MethodInfo_AottgNameStyleChoicePreview_AddComponent_AottgNameStyleC);
          return;
        }
      }
    }
  }
  uStack_88 = il2cpp_runtime_helper_022b2c90();
  plStack_78 = &TypeInfo_Object;
  ppSVar29 = __this_02;
  pUStack_80 = x;
  if (g_data_057aed53 == '\0') {
    p_Stack_90 = (_union_14 *)0x450a953;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterStyleChoicePreview);
    p_Stack_90 = (_union_14 *)0x450a95f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponentInParent_Image);
    p_Stack_90 = (_union_14 *)0x450a96b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    p_Stack_90 = (_union_14 *)0x450a977;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    p_Stack_90 = (_union_14 *)0x450a983;
    il2cpp_runtime_helper_023445d0(&"-popover");
    ppSVar29 = &"-options-scroll";
    p_Stack_90 = (_union_14 *)0x450a98f;
    il2cpp_runtime_helper_023445d0();
    g_data_057aed53 = '\x01';
  }
  if ((UnityEngine_Transform_o *)__this_02 != (UnityEngine_Transform_o *)0x0) {
    if (*(char *)((long)__this_02 + 0x3e) == '\0') {
      x = (UnityEngine_Object_o *)((UnityEngine_Component_Fields *)((long)__this_02 + 0x10))->m_CachedPtr;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        p_Stack_90 = (_union_14 *)0x450aa6d;
        il2cpp_runtime_helper_02337ed0();
      }
      _Var16.genericMethod = (UnityEngine_Transform_o *)0x0;
      _Var34.genericMethod = (UnityEngine_Transform_o *)0x0;
      SVar26._stringLength = 0;
      SVar26._firstChar = 0;
      SVar26._6_2_ = 0;
      p_Stack_90 = (_union_14 *)0x450aa7c;
      bVar8 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar8 != '\0') {
        pUVar14 = (UnityEngine_GameObject_o *)
                  ((UnityEngine_Component_Fields *)((long)__this_02 + 0x10))->m_CachedPtr;
        ppSVar29 = (System_String_o **)(UnityEngine_Transform_o *)0x0;
        if (pUVar14 == (UnityEngine_GameObject_o *)0x0) goto label_0450abd7;
        p_Stack_90 = (_union_14 *)0x450aa94;
        _Var16.genericMethod = UnityEngine_GameObject__get_transform(pUVar14,(MethodInfo *)0x0);
      }
      __this_02 = &"-popover";
      unaff_R13 = &MethodInfo_Image_GetComponent_Image;
      iVar11 = *(int *)(TypeInfo_Object + 0xe4);
      _Var34 = _Var16;
      while( true ) {
        if (iVar11 == 0) {
          p_Stack_90 = (_union_14 *)0x450aadf;
          il2cpp_runtime_helper_02337ed0();
        }
        SVar26._stringLength = 0;
        SVar26._firstChar = 0;
        SVar26._6_2_ = 0;
        p_Stack_90 = (_union_14 *)0x450aaeb;
        ppSVar29 = (System_String_o **)_Var34;
        bVar8 = UnityEngine_Object__op_Inequality
                          (_Var34.genericMethod,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar8 == '\0') {
          return;
        }
        if (_Var34.genericMethod == (UnityEngine_Transform_o *)0x0) break;
        SVar26._stringLength = 0;
        SVar26._firstChar = 0;
        SVar26._6_2_ = 0;
        p_Stack_90 = (_union_14 *)0x450ab06;
        ppSVar29 = (System_String_o **)_Var34;
        pSVar15 = UnityEngine_Object__get_name(_Var34.genericMethod,(MethodInfo *)0x0);
        if (pSVar15 == (System_String_o *)0x0) break;
        p_Stack_90 = (_union_14 *)0x450ab1c;
        bVar8 = System_String__EndsWith(pSVar15,"-popover",(MethodInfo *)0x0);
        if ((char)bVar8 == '\0') {
          SVar26._stringLength = 0;
          SVar26._firstChar = 0;
          SVar26._6_2_ = 0;
          p_Stack_90 = (_union_14 *)0x450ab2a;
          ppSVar29 = (System_String_o **)_Var34;
          pSVar15 = UnityEngine_Object__get_name(_Var34.genericMethod,(MethodInfo *)0x0);
          if (pSVar15 == (System_String_o *)0x0) break;
          in_RCX = &"-options-scroll";
          p_Stack_90 = (_union_14 *)0x450ab47;
          bVar8 = System_String__EndsWith(pSVar15,"-options-scroll",(MethodInfo *)0x0);
          if ((char)bVar8 != '\0') goto label_0450ab4f;
        }
        else {
label_0450ab4f:
          p_Stack_90 = (_union_14 *)0x450ab5b;
          x = (UnityEngine_Object_o *)
              UnityEngine_Component__GetComponent_object_(_Var34.genericMethod,MethodInfo_Image_GetComponent_Image);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            p_Stack_90 = (_union_14 *)0x450ab70;
            il2cpp_runtime_helper_02337ed0();
          }
          SVar26._stringLength = 0;
          SVar26._firstChar = 0;
          SVar26._6_2_ = 0;
          p_Stack_90 = (_union_14 *)0x450ab7c;
          bVar8 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar8 != '\0') {
            if (*(int *)((long)TypeInfo_AottgCharacterStyleChoicePreview.genericMethod + 0xe4) == 0) {
              p_Stack_90 = (_union_14 *)0x450ab96;
              il2cpp_runtime_helper_02337ed0();
            }
            ppSVar29 = (System_String_o **)TypeInfo_AottgCharacterStyleChoicePreview;
            if (x == (UnityEngine_Object_o *)0x0) break;
            uVar2 = *(undefined8 *)(*(long *)((long)TypeInfo_AottgCharacterStyleChoicePreview.genericMethod + 0xb8) + 0x18);
            in_XMM1_Da = (float)uVar2;
            in_XMM1_Db = (float)((ulong)uVar2 >> 0x20);
            in_XMM1_Dc._0_2_ = 0;
            in_XMM1_Dc._2_1_ = '\0';
            in_XMM1_Dc._3_1_ = '\0';
            in_XMM1_Dd = 0;
            p_Stack_90 = (_union_14 *)0x450abc3;
            (**(code **)&x->klass[1]._2.naturalAligment)
                      ((int)*(undefined8 *)(*(long *)((long)TypeInfo_AottgCharacterStyleChoicePreview.genericMethod + 0xb8) + 0x10),x);
          }
        }
        p_Stack_90 = (_union_14 *)0x450aaca;
        _Var34.genericMethod = UnityEngine_Transform__get_parent(_Var34.genericMethod,(MethodInfo *)0x0);
        iVar11 = *(int *)(TypeInfo_Object + 0xe4);
      }
    }
    else {
      __this = ((UnityEngine_Transform_o *)((long)__this_02 + 0x18))->klass;
      ppSVar29 = (System_String_o **)(UnityEngine_Transform_o *)0x0;
      if (__this != (UnityEngine_Transform_c *)0x0) {
        p_Stack_90 = (_union_14 *)0x450a9c6;
        x_00 = (UnityEngine_Object_o *)
               UnityEngine_Component__GetComponentInParent_object_
                         ((UnityEngine_Component_o *)__this,MethodInfo_Image_GetComponentInParent_Image);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          p_Stack_90 = (_union_14 *)0x450a9e1;
          il2cpp_runtime_helper_02337ed0();
        }
        SVar26._stringLength = 0;
        SVar26._firstChar = 0;
        SVar26._6_2_ = 0;
        p_Stack_90 = (_union_14 *)0x450a9ed;
        bVar8 = UnityEngine_Object__op_Inequality(x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar8 == '\0') {
          return;
        }
        if (*(int *)((long)TypeInfo_AottgCharacterStyleChoicePreview.genericMethod + 0xe4) == 0) {
          p_Stack_90 = (_union_14 *)0x450aa0e;
          il2cpp_runtime_helper_02337ed0();
        }
        x = (UnityEngine_Object_o *)0x0;
        ppSVar29 = (System_String_o **)TypeInfo_AottgCharacterStyleChoicePreview;
        if (x_00 != (UnityEngine_Object_o *)0x0) {
          (**(code **)&x_00->klass[1]._2.naturalAligment)
                    ((int)*(undefined8 *)(*(long *)((long)TypeInfo_AottgCharacterStyleChoicePreview.genericMethod + 0xb8) + 0x10),
                     (int)*(undefined8 *)(*(long *)((long)TypeInfo_AottgCharacterStyleChoicePreview.genericMethod + 0xb8) + 0x18),x_00,
                     x_00->klass[1].vtable._0_Equals.methodPtr);
          return;
        }
      }
    }
  }
label_0450abd7:
  p_Stack_90 = (_union_14 *)0x450abdc;
  il2cpp_runtime_helper_022b2c90();
  p_Stack_90 = &TypeInfo_AottgCharacterStyleChoicePreview;
  plStack_a8 = &TypeInfo_Object;
  plVar30 = (long *)ppSVar29;
  pUStack_b0 = x;
  _Stack_a0 = (_union_14)__this_02;
  _Stack_98 = _Var34;
  if (g_data_057aed52 == '\0') {
    _Stack_b8 = (_union_14)0x450ac03;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchDropdownItemFeedback_GetComponent_GisketchDropdo);
    plVar30 = &TypeInfo_Object;
    _Stack_b8 = (_union_14)0x450ac0f;
    il2cpp_runtime_helper_023445d0();
    g_data_057aed52 = '\x01';
  }
  p_Var25 = &TypeInfo_AottgCharacterStyleChoicePreview;
  if ((UnityEngine_Transform_o *)ppSVar29 != (UnityEngine_Transform_o *)0x0) {
    x = (UnityEngine_Object_o *)((UnityEngine_Component_Fields *)((long)ppSVar29 + 0x10))->m_CachedPtr;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      _Stack_b8 = (_union_14)0x450ac3c;
      il2cpp_runtime_helper_02337ed0();
    }
    _Var16.genericMethod = (void *)0x0;
    _Stack_b8 = (_union_14)0x450ac4a;
    bVar8 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      pUVar14 = (UnityEngine_GameObject_o *)
                ((UnityEngine_Component_Fields *)((long)ppSVar29 + 0x10))->m_CachedPtr;
      plVar30 = (long *)0x0;
      p_Var25 = _Var16.genericMethod;
      if (pUVar14 == (UnityEngine_GameObject_o *)0x0) goto label_0450acbe;
      _Stack_b8 = (_union_14)0x450ac66;
      _Var16.genericMethod = UnityEngine_GameObject__GetComponent_object_(pUVar14,MethodInfo_GisketchDropdownItemFeedback_GetComponent_GisketchDropdo);
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      _Stack_b8 = (_union_14)0x450ac7b;
      il2cpp_runtime_helper_02337ed0();
    }
    _Stack_b8 = (_union_14)0x450ac87;
    plVar30 = (long *)_Var16;
    bVar8 = UnityEngine_Object__op_Inequality
                      (_Var16.genericMethod,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return;
    }
    p_Var25 = (void *)0x0;
    if (_Var16.genericMethod != (void *)0x0) {
      pSVar15 = (System_String_o *)((UnityEngine_Component_Fields *)((long)ppSVar29 + 0x28))->m_CachedPtr;
      Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__SetLabelText
                (_Var16.genericMethod,pSVar15,pSVar15,
                 SVar26._stringLength & 0xffU & (uint)*(byte *)((long)ppSVar29 + 0x3c),(MethodInfo *)0x0);
      return;
    }
  }
label_0450acbe:
  plVar33 = &TypeInfo_Object;
  _Stack_b8 = (_union_14)0x450acc3;
  il2cpp_runtime_helper_022b2c90();
  pMVar27 = extraout_RDX;
  pUStack_c8 = x;
  uStack_c0 = (ulong)SVar26 & 0xffffffff;
  _Stack_b8 = (_union_14)ppSVar29;
  if (g_data_057aed56 == '\0') {
    pTStack_d0 = (TMPro_TMP_Text_o *)0x450aced;
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameFontCatalog);
    pTStack_d0 = (TMPro_TMP_Text_o *)0x450acf9;
    il2cpp_runtime_helper_023445d0(&"Normal");
    g_data_057aed56 = '\x01';
    pMVar27 = extraout_RDX_00;
  }
  pTStack_d0 = (TMPro_TMP_Text_o *)0x450ad12;
  UVar20 = "Normal";
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ResetPlainVisuals
            ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)plVar30,(System_String_o *)"Normal",
             pMVar27);
  pTStack_d0 = (TMPro_TMP_Text_o *)0x450ad1a;
  pTVar17 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                      ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)plVar30,(MethodInfo *)UVar20);
  if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
    pTStack_d0 = (TMPro_TMP_Text_o *)0x450ad35;
    il2cpp_runtime_helper_02337ed0();
  }
  pTStack_d0 = (TMPro_TMP_Text_o *)0x450ad42;
  UVar20 = "Normal";
  PatreonEffects_NameFontCatalog__Apply(pTVar17,(System_String_o *)"Normal",(MethodInfo *)0x0);
  pTStack_d0 = (TMPro_TMP_Text_o *)0x450ad4a;
  _Var16 = (_union_14)plVar30;
  pTVar18 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                      ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)plVar30,(MethodInfo *)UVar20);
  if (pTVar18 != (TMPro_TMP_Text_o *)0x0) {
    in_RCX = (System_String_o **)pTVar18->klass;
    UVar20 = (UnityEngine_Color32_Fields)(((TMPro_TMP_Text_c *)in_RCX)->vtable)._23_set_color.method;
    in_XMM1_Da = 0.58;
    in_XMM1_Db = 1.0;
    in_XMM1_Dc._0_2_ = 0;
    in_XMM1_Dc._2_1_ = '\0';
    in_XMM1_Dc._3_1_ = '\0';
    in_XMM1_Dd = 0;
    pTStack_d0 = (TMPro_TMP_Text_o *)0x450ad74;
    (*(((TMPro_TMP_Text_c *)in_RCX)->vtable)._23_set_color.methodPtr)(0x3f147ae1,pTVar18);
    pTStack_d0 = (TMPro_TMP_Text_o *)0x450ad7c;
    pTVar17 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                        ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)plVar30,(MethodInfo *)UVar20)
    ;
    pTStack_d0 = (TMPro_TMP_Text_o *)0x450ad87;
    _Var16 = (_union_14)plVar30;
    pTVar18 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                        ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)plVar30,(MethodInfo *)UVar20)
    ;
    if (pTVar18 != (TMPro_TMP_Text_o *)0x0) {
      in_RCX = (System_String_o **)pTVar18->klass;
      UVar20 = (UnityEngine_Color32_Fields)(((TMPro_TMP_Text_c *)in_RCX)->vtable)._22_get_color.method;
      pTStack_d0 = (TMPro_TMP_Text_o *)0x450ad9f;
      (*(((TMPro_TMP_Text_c *)in_RCX)->vtable)._22_get_color.methodPtr)();
      _Var16.genericMethod = (void *)0x0;
      pTStack_d0 = (TMPro_TMP_Text_o *)0x450ada6;
      uVar9 = il2cpp_runtime_helper_03b428b0();
      if (pTVar17 != (TMPro_TMP_Text_o *)0x0) {
        UVar20.r = '\0';
        UVar20.g = '\0';
        UVar20.b = '\0';
        UVar20.a = '\0';
        UVar20.rgba = uVar9;
        pTStack_d0 = (TMPro_TMP_Text_o *)0x450adb7;
        TMPro_TMP_Text__set_faceColor(pTVar17,(UnityEngine_Color32_o)UVar20,(MethodInfo *)0x0);
        pTStack_d0 = (TMPro_TMP_Text_o *)0x450adbf;
        _Var16 = (_union_14)plVar30;
        pTVar18 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                            ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)plVar30,
                             (MethodInfo *)UVar20);
        if (pTVar18 != (TMPro_TMP_Text_o *)0x0) {
          vtableDispatch = (pTVar18->klass->vtable)._106_ForceMeshUpdate.methodPtr;
          (*vtableDispatch)
                    (pTVar18,0,0,(pTVar18->klass->vtable)._106_ForceMeshUpdate.method,vtableDispatch);
          return;
        }
      }
    }
  }
  pTStack_d0 = (TMPro_TMP_Text_o *)0x450ade9;
  uStack_f0 = il2cpp_runtime_helper_022b2c90();
  auStack_148._72_4_ = in_XMM1_Da;
  auStack_148._76_4_ = in_XMM1_Db;
  auStack_148._80_4_ = in_XMM1_Dc;
  auStack_148._84_4_ = in_XMM1_Dd;
  _Stack_d8 = (_union_14)plVar30;
  pTStack_d0 = pTVar17;
  if (g_data_057aed58 == '\0') {
    auStack_148._64_8_ = (void *)0x450ae1b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color);
    g_data_057aed58 = '\x01';
  }
  pMVar27 = (MethodInfo *)0x2;
  auStack_148._64_8_ = (void *)0x450ae36;
  _Var34 = TypeInfo_Color;
  pUVar13 = (UnityEngine_Color_array *)il2cpp_runtime_helper_022b2a40();
  if (pUVar13 != (UnityEngine_Color_array *)0x0) {
    uVar9 = (uint)pUVar13->max_length;
    in_RCX = (System_String_o **)(ulong)uVar9;
    if (uVar9 != 0) {
      pUVar13->m_Items[0].fields.r = (float)(undefined4)uStack_f0;
      pUVar13->m_Items[0].fields.g = (float)uStack_f0._4_4_;
      pUVar13->m_Items[0].fields.b = (float)auStack_148._72_4_;
      pUVar13->m_Items[0].fields.a = (float)auStack_148._76_4_;
      if (uVar9 != 1) {
        pUVar13->m_Items[1].fields.r = (float)(undefined4)uStack_f0;
        pUVar13->m_Items[1].fields.g = (float)uStack_f0._4_4_;
        pUVar13->m_Items[1].fields.b = (float)auStack_148._72_4_;
        pUVar13->m_Items[1].fields.a = (float)auStack_148._76_4_;
        Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureGradient
                  (_Var16.genericMethod,pUVar13,(System_String_o *)UVar20,(MethodInfo *)in_RCX);
        return;
      }
    }
    auStack_148._64_8_ = (void *)0x450ae73;
    il2cpp_runtime_helper_022b2ca0();
  }
  auStack_148._64_8_ = (void *)0x450ae78;
  il2cpp_runtime_helper_022b2c90();
  auStack_148._56_8_ = &"Normal";
  auStack_148._32_8_ = &TypeInfo_Object;
  pMVar24 = (MethodInfo *)auStack_148;
  plVar30 = (long *)_Var34;
  auStack_148._24_8_ = _Var16;
  auStack_148._40_8_ = unaff_R13;
  auStack_148._48_8_ = UVar20;
  auStack_148._64_8_ = p_Var25;
  if (g_data_057aed54 == '\0') {
    _Stack_150 = (_union_14)0x450aea6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterStyleChoicePreview);
    _Stack_150 = (_union_14)0x450aeb2;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color);
    _Stack_150 = (_union_14)0x450aebe;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ICollection_string);
    plVar30 = &TypeInfo_IList_string;
    _Stack_150 = (_union_14)0x450aeca;
    il2cpp_runtime_helper_023445d0();
    g_data_057aed54 = '\x01';
  }
  if (_Var34.genericMethod != (long *)0x0) {
    lVar6 = *(long *)_Var34.genericMethod;
    if ((ulong)*(ushort *)(lVar6 + 0x12e) != 0) {
      lVar31 = 0;
      do {
        if (*(long *)(*(long *)(lVar6 + 0xb0) + lVar31) == TypeInfo_ICollection_string) {
          puVar19 = (undefined8 *)
                    ((long)*(int *)(*(long *)(lVar6 + 0xb0) + 8 + lVar31) * 0x10 + lVar6 + 0x138);
          goto label_0450af31;
        }
        lVar31 = lVar31 + 0x10;
      } while ((ulong)*(ushort *)(lVar6 + 0x12e) << 4 != lVar31);
    }
    _Stack_150 = (_union_14)0x450af19;
    puVar19 = (undefined8 *)il2cpp_runtime_helper_02300d20(_Var34.genericMethod,TypeInfo_ICollection_string,0);
label_0450af31:
    _Stack_150 = (_union_14)0x450af3a;
    uVar10 = (*(code *)*puVar19)(_Var34.genericMethod,puVar19[1]);
    _Stack_150 = (_union_14)0x450af4b;
    UVar20 = (UnityEngine_Color32_Fields)il2cpp_runtime_helper_022b2a40(TypeInfo_Color.genericMethod,uVar10);
    if (UVar20 != (UnityEngine_Color32_Fields)0x0) {
      pTVar28 = (TMPro_TMP_Text_c *)0x0;
      p_Var25 = &TypeInfo_AottgCharacterStyleChoicePreview;
      do {
        lVar6 = *(long *)_Var34.genericMethod;
        if ((ulong)*(ushort *)(lVar6 + 0x12e) != 0) {
          lVar31 = 0;
          do {
            if (*(long *)(*(long *)(lVar6 + 0xb0) + lVar31) == TypeInfo_ICollection_string) {
              puVar19 = (undefined8 *)
                        ((long)*(int *)(*(long *)(lVar6 + 0xb0) + 8 + lVar31) * 0x10 + lVar6 + 0x138);
              goto label_0450aff3;
            }
            lVar31 = lVar31 + 0x10;
          } while ((ulong)*(ushort *)(lVar6 + 0x12e) << 4 != lVar31);
        }
        _Stack_150 = (_union_14)0x450afd9;
        puVar19 = (undefined8 *)il2cpp_runtime_helper_02300d20(_Var34.genericMethod,TypeInfo_ICollection_string,0);
label_0450aff3:
        _Stack_150 = (_union_14)0x450affc;
        iVar11 = (*(code *)*puVar19)(_Var34.genericMethod,puVar19[1]);
        if ((long)iVar11 <= (long)pTVar28) {
          return;
        }
        lVar6 = *(long *)_Var34.genericMethod;
        if ((ulong)*(ushort *)(lVar6 + 0x12e) != 0) {
          lVar31 = 0;
          do {
            if (*(long *)(*(long *)(lVar6 + 0xb0) + lVar31) == TypeInfo_IList_string) {
              puVar19 = (undefined8 *)
                        ((long)*(int *)(*(long *)(lVar6 + 0xb0) + 8 + lVar31) * 0x10 + lVar6 + 0x138);
              goto label_0450b063;
            }
            lVar31 = lVar31 + 0x10;
          } while ((ulong)*(ushort *)(lVar6 + 0x12e) << 4 != lVar31);
        }
        _Stack_150 = (_union_14)0x450b049;
        puVar19 = (undefined8 *)il2cpp_runtime_helper_02300d20(_Var34.genericMethod,TypeInfo_IList_string,0);
label_0450b063:
        _Stack_150 = (_union_14)0x450b06f;
        _Var16.genericMethod =
             (void *)(*(code *)*puVar19)(_Var34.genericMethod,(ulong)pTVar28 & 0xffffffff,puVar19[1]);
        if (*(int *)((long)TypeInfo_AottgCharacterStyleChoicePreview.genericMethod + 0xe4) == 0) {
          _Stack_150 = (_union_14)0x450b084;
          il2cpp_runtime_helper_02337ed0();
        }
        auStack_148._0_8_ = (Il2CppMethodPointer)0x0;
        auStack_148._8_8_ = (Il2CppMethodPointer)0x0;
        _Stack_150 = (_union_14)0x450b098;
        pMVar24 = (MethodInfo *)auStack_148;
        plVar30 = _Var16.genericMethod;
        bVar8 = UnityEngine_ColorUtility__TryParseHtmlString
                          (_Var16.genericMethod,(UnityEngine_Color_o *)auStack_148,(MethodInfo *)0x0);
        in_RCX = (System_String_o **)(ulong)*(uint *)((long)UVar20 + 0x18);
        plVar33 = (long *)auStack_148;
        if (in_RCX <= pTVar28) goto label_0450b1e2;
        if ((char)bVar8 == '\0') {
          fVar36 = 1.0;
          fVar37 = 1.0;
          fVar38 = fVar36;
          fVar39 = fVar37;
        }
        else {
          fVar36 = (float)auStack_148._0_8_;
          fVar37 = SUB84(auStack_148._0_8_,4);
          fVar38 = (float)auStack_148._8_8_;
          fVar39 = SUB84(auStack_148._8_8_,4);
        }
        pfVar1 = (float *)((long)UVar20 + 0x20 + (long)pTVar28 * 0x10);
        *pfVar1 = fVar36;
        pfVar1[1] = fVar37;
        pfVar1[2] = fVar38;
        pfVar1[3] = fVar39;
        pTVar28 = (TMPro_TMP_Text_c *)((long)&(pTVar28->_1).image + 1);
      } while( true );
    }
    lVar6 = *(long *)_Var34.genericMethod;
    if ((ulong)*(ushort *)(lVar6 + 0x12e) != 0) {
      lVar31 = 0;
      do {
        if (*(long *)(*(long *)(lVar6 + 0xb0) + lVar31) == TypeInfo_ICollection_string) {
          puVar19 = (undefined8 *)
                    ((long)*(int *)(*(long *)(lVar6 + 0xb0) + 8 + lVar31) * 0x10 + lVar6 + 0x138);
          goto label_0450b121;
        }
        lVar31 = lVar31 + 0x10;
      } while ((ulong)*(ushort *)(lVar6 + 0x12e) << 4 != lVar31);
    }
    _Stack_150 = (_union_14)0x450b109;
    puVar19 = (undefined8 *)il2cpp_runtime_helper_02300d20(_Var34.genericMethod,TypeInfo_ICollection_string,0);
label_0450b121:
    _Stack_150 = (_union_14)0x450b12a;
    iVar11 = (*(code *)*puVar19)(_Var34.genericMethod,puVar19[1]);
    if (iVar11 < 1) {
      return;
    }
    lVar6 = *(long *)_Var34.genericMethod;
    if ((ulong)*(ushort *)(lVar6 + 0x12e) != 0) {
      lVar31 = 0;
      do {
        if (*(long *)(*(long *)(lVar6 + 0xb0) + lVar31) == TypeInfo_IList_string) {
          in_RCX = (System_String_o **)
                   ((long)*(int *)(*(long *)(lVar6 + 0xb0) + 8 + lVar31) * 0x10 + lVar6 + 0x138);
          goto label_0450b1a3;
        }
        lVar31 = lVar31 + 0x10;
      } while ((ulong)*(ushort *)(lVar6 + 0x12e) << 4 != lVar31);
    }
    _Stack_150 = (_union_14)0x450b179;
    in_RCX = (System_String_o **)il2cpp_runtime_helper_02300d20(_Var34.genericMethod,TypeInfo_IList_string,0);
label_0450b1a3:
    _Stack_150 = (_union_14)0x450b1ae;
    _Var16.genericMethod =
         (void *)(*(((TMPro_TMP_Text_c *)in_RCX)->_1).image)
                           (_Var34.genericMethod,0,(((TMPro_TMP_Text_c *)in_RCX)->_1).gc_desc);
    if (*(int *)((long)TypeInfo_AottgCharacterStyleChoicePreview.genericMethod + 0xe4) == 0) {
      _Stack_150 = (_union_14)0x450b1c9;
      il2cpp_runtime_helper_02337ed0();
    }
    auStack_148._0_8_ = (Il2CppMethodPointer)0x0;
    auStack_148._8_8_ = (Il2CppMethodPointer)0x0;
    _Stack_150 = (_union_14)0x450b1dd;
    plVar30 = _Var16.genericMethod;
    UnityEngine_ColorUtility__TryParseHtmlString
              (_Var16.genericMethod,(UnityEngine_Color_o *)auStack_148,(MethodInfo *)0x0);
    _Stack_150 = (_union_14)0x450b1e2;
    il2cpp_runtime_helper_022b2c90();
label_0450b1e2:
    _Stack_150 = (_union_14)0x450b1e7;
    il2cpp_runtime_helper_022b2ca0();
    pMVar27 = pMVar24;
  }
  _Stack_150 = (_union_14)0x450b1ec;
  auVar40 = il2cpp_runtime_helper_022b2c90();
  pTVar17 = auVar40._8_8_;
  uStack_170 = auVar40._0_8_;
  _Stack_168 = _Var16;
  plStack_160 = plVar33;
  UStack_158 = UVar20;
  _Stack_150 = _Var34;
  if (g_data_057aed59 == '\0') {
    _Stack_178 = (_union_14)0x450b216;
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameFontCatalog);
    auVar40._8_8_ = extraout_RDX_01;
    auVar40._0_8_ = uStack_170;
    g_data_057aed59 = '\x01';
  }
  uStack_170 = auVar40._0_8_;
  _Stack_178 = (_union_14)0x450b228;
  pTVar18 = pTVar17;
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ResetPlainVisuals
            ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)plVar30,(System_String_o *)pTVar17,
             auVar40._8_8_);
  _Stack_178 = (_union_14)0x450b230;
  pTVar18 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                      ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)plVar30,(MethodInfo *)pTVar18);
  if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
    _Stack_178 = (_union_14)0x450b24b;
    il2cpp_runtime_helper_02337ed0();
  }
  _Stack_178 = (_union_14)0x450b258;
  pTVar22 = pTVar17;
  PatreonEffects_NameFontCatalog__Apply(pTVar18,(System_String_o *)pTVar17,(MethodInfo *)0x0);
  _Stack_178 = (_union_14)0x450b260;
  _Var16 = (_union_14)plVar30;
  pTVar21 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                      ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)plVar30,(MethodInfo *)pTVar22);
  uVar9 = (uint)pTVar22;
  if (pTVar21 != (TMPro_TMP_Text_o *)0x0) {
    in_RCX = (System_String_o **)pTVar21->klass;
    pMVar24 = (((TMPro_TMP_Text_c *)in_RCX)->vtable)._23_set_color.method;
    _Stack_178 = (_union_14)0x450b286;
    (*(((TMPro_TMP_Text_c *)in_RCX)->vtable)._23_set_color.methodPtr)(0x3f800000,0x3f800000,pTVar21);
    _Stack_178 = (_union_14)0x450b28e;
    pTVar17 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                        ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)plVar30,pMVar24);
    uVar9 = (uint)pMVar24;
    _Var16.genericMethod = (void *)0x0;
    _Stack_178 = (_union_14)0x450b2a2;
    uVar12 = il2cpp_runtime_helper_03b428b0(0x3f800000,0x3f800000);
    if (pTVar17 != (TMPro_TMP_Text_o *)0x0) {
      value.fields.r = '\0';
      value.fields.g = '\0';
      value.fields.b = '\0';
      value.fields.a = '\0';
      value.fields.rgba = uVar12;
      _Stack_178 = (_union_14)0x450b2b3;
      TMPro_TMP_Text__set_faceColor(pTVar17,value,(MethodInfo *)0x0);
      *(MethodInfo **)((long)plVar30 + 0x30) = pMVar27;
      _Stack_178 = (_union_14)0x450b2c3;
      pMVar24 = pMVar27;
      il2cpp_runtime_helper_022b4080((long)plVar30 + 0x30);
      _Stack_178 = (_union_14)0x450b2cb;
      Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__HookVertexColors
                ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)plVar30,pMVar24);
      _Stack_178 = (_union_14)0x450b2d3;
      _Var16 = (_union_14)plVar30;
      pTVar22 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                          ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)plVar30,pMVar24);
      uVar9 = (uint)pMVar24;
      if (pTVar22 != (TMPro_TMP_Text_o *)0x0) {
        vtableDispatch = (pTVar22->klass->vtable)._106_ForceMeshUpdate.methodPtr;
        (*vtableDispatch)
                  (pTVar22,0,0,(pTVar22->klass->vtable)._106_ForceMeshUpdate.method,vtableDispatch);
        return;
      }
    }
  }
  _Stack_178 = (_union_14)0x450b303;
  il2cpp_runtime_helper_022b2c90();
  _Var32._4_4_ = 0;
  _Var32._0_4_ = uVar9;
  _Var34 = extraout_RDX_02;
  _Stack_198 = (_union_14)plVar30;
  pTStack_190 = pTVar18;
  pMStack_188 = pMVar27;
  pTStack_180 = pTVar17;
  _Stack_178 = (_union_14)p_Var25;
  if (g_data_057aed5a == '\0') {
    _Stack_1a0 = (_union_14)0x450b339;
    il2cpp_runtime_helper_023445d0(&MethodInfo_NameEffectController_AddComponent_NameEffectController);
    _Stack_1a0 = (_union_14)0x450b345;
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameFontCatalog);
    g_data_057aed5a = '\x01';
    _Var34 = extraout_RDX_03;
  }
  _Stack_1a0 = (_union_14)0x450b357;
  pTVar28 = (TMPro_TMP_Text_c *)in_RCX;
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ResetPlainVisuals
            (_Var16.genericMethod,(System_String_o *)in_RCX,_Var34.genericMethod);
  _Stack_1a0 = (_union_14)0x450b35f;
  pTVar17 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                      (_Var16.genericMethod,(MethodInfo *)pTVar28);
  if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
    _Stack_1a0 = (_union_14)0x450b37a;
    il2cpp_runtime_helper_02337ed0();
  }
  _Stack_1a0 = (_union_14)0x450b387;
  PatreonEffects_NameFontCatalog__Apply(pTVar17,(System_String_o *)in_RCX,(MethodInfo *)0x0);
  _Stack_1a0 = (_union_14)0x450b38f;
  _Var34 = _Var16;
  __this_01.genericMethod =
       Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(_Var16.genericMethod,(MethodInfo *)in_RCX)
  ;
  if (__this_01.genericMethod == (void *)0x0) {
label_0450b444:
    _Stack_1a0 = (_union_14)0x450b449;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    in_RCX = (System_String_o **)0x0;
    _Stack_1a0 = (_union_14)0x450b3a2;
    pUVar14 = UnityEngine_Component__get_gameObject(__this_01.genericMethod,(MethodInfo *)0x0);
    _Var34 = __this_01;
    if (pUVar14 == (UnityEngine_GameObject_o *)0x0) goto label_0450b444;
    _Stack_1a0 = (_union_14)0x450b3bd;
    pIVar23 = UnityEngine_GameObject__AddComponent_object_(pUVar14,MethodInfo_NameEffectController_AddComponent_NameEffectController);
    *(Il2CppObject **)((long)_Var16.genericMethod + 0x28) = pIVar23;
    _Var16.genericMethod = _Var16.genericMethod + 0x28;
    _Stack_1a0 = (_union_14)0x450b3d0;
    il2cpp_runtime_helper_022b4080(_Var16.genericMethod);
    in_RCX = (System_String_o **)0x0;
    _Stack_1a0 = (_union_14)0x450b3da;
    _Var34 = _Var32;
    settings = PatreonEffects_NameEffectPresets__GetPreset(uVar9,(MethodInfo *)0x0);
    if (extraout_RDX_02.genericMethod == (void *)0x0) goto label_0450b444;
    if (*(long *)((long)extraout_RDX_02.genericMethod + 0x18) == 0) {
label_0450b42a:
      _Var34.genericMethod = (void *)0x0;
      if (*(PatreonEffects_NameEffectController_o **)_Var16.genericMethod !=
          (PatreonEffects_NameEffectController_o *)0x0) {
        PatreonEffects_NameEffectController__Apply
                  (*(PatreonEffects_NameEffectController_o **)_Var16.genericMethod,settings,(MethodInfo *)0x0)
        ;
        return;
      }
      goto label_0450b444;
    }
    if ((int)*(long *)((long)extraout_RDX_02.genericMethod + 0x18) != 0) {
      if (settings == (PatreonEffects_NameEffectSettings_o *)0x0) goto label_0450b444;
      uVar2 = *(undefined8 *)((long)extraout_RDX_02.genericMethod + 0x20);
      uVar7 = *(undefined8 *)((long)extraout_RDX_02.genericMethod + 0x28);
      (settings->fields).gradientA.fields.r = (float)(int)uVar2;
      (settings->fields).gradientA.fields.g = (float)(int)((ulong)uVar2 >> 0x20);
      (settings->fields).gradientA.fields.b = (float)(int)uVar7;
      (settings->fields).gradientA.fields.a = (float)(int)((ulong)uVar7 >> 0x20);
      if (1 < *(int *)((long)extraout_RDX_02.genericMethod + 0x18)) {
        uVar2 = *(undefined8 *)((long)extraout_RDX_02.genericMethod + 0x30);
        uVar7 = *(undefined8 *)((long)extraout_RDX_02.genericMethod + 0x38);
        (settings->fields).gradientB.fields.r = (float)(int)uVar2;
        (settings->fields).gradientB.fields.g = (float)(int)((ulong)uVar2 >> 0x20);
        (settings->fields).gradientB.fields.b = (float)(int)uVar7;
        (settings->fields).gradientB.fields.a = (float)(int)((ulong)uVar7 >> 0x20);
        if (2 < *(int *)((long)extraout_RDX_02.genericMethod + 0x18)) {
          uVar2 = *(undefined8 *)((long)extraout_RDX_02.genericMethod + 0x40);
          uVar7 = *(undefined8 *)((long)extraout_RDX_02.genericMethod + 0x48);
          (settings->fields).gradientC.fields.r = (float)(int)uVar2;
          (settings->fields).gradientC.fields.g = (float)(int)((ulong)uVar2 >> 0x20);
          (settings->fields).gradientC.fields.b = (float)(int)uVar7;
          (settings->fields).gradientC.fields.a = (float)(int)((ulong)uVar7 >> 0x20);
          if (3 < *(int *)((long)extraout_RDX_02.genericMethod + 0x18)) {
            uVar2 = *(undefined8 *)((long)extraout_RDX_02.genericMethod + 0x50);
            uVar7 = *(undefined8 *)((long)extraout_RDX_02.genericMethod + 0x58);
            (settings->fields).gradientD.fields.r = (float)(int)uVar2;
            (settings->fields).gradientD.fields.g = (float)(int)((ulong)uVar2 >> 0x20);
            (settings->fields).gradientD.fields.b = (float)(int)uVar7;
            (settings->fields).gradientD.fields.a = (float)(int)((ulong)uVar7 >> 0x20);
          }
        }
      }
      goto label_0450b42a;
    }
  }
  _Stack_1a0 = (_union_14)0x450b44e;
  il2cpp_runtime_helper_022b2ca0();
  p_Var25 = &_Stack_1b0;
  _Stack_1b0 = _Var16;
  _Stack_1a8 = extraout_RDX_02;
  _Stack_1a0 = _Var32;
  if (g_data_057aed50 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterStyleChoicePreview);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed50 = '\x01';
  }
  p_Var35 = &TypeInfo_AottgCharacterStyleChoicePreview;
  if (*(int *)((long)TypeInfo_AottgCharacterStyleChoicePreview.genericMethod + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  _Var16.genericMethod =
       Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__Preview
                 (_Var34.genericMethod,(MethodInfo *)in_RCX);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar27 = (MethodInfo *)0x0;
  bVar8 = UnityEngine_Object__op_Equality(_Var16.genericMethod,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    return;
  }
  if (*(int *)((long)TypeInfo_AottgCharacterStyleChoicePreview.genericMethod + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  _Var32 = _Var34;
  Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__ApplyDarkSurface(_Var34.genericMethod,pMVar27);
  if (_Var34.genericMethod != (void *)0x0) {
    pMVar27 = (MethodInfo *)(ulong)*(byte *)((long)_Var34.genericMethod + 0x3c);
    _Var32 = _Var34;
    Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__SetFeedback
              (_Var34.genericMethod,(uint)*(byte *)((long)_Var34.genericMethod + 0x3c),method_01);
    if (*(char *)((long)_Var34.genericMethod + 0x3c) == '\0') {
      if (_Var16.genericMethod != (void *)0x0) {
        Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureDisabled(_Var16.genericMethod,pMVar27);
        return;
      }
    }
    else if (_Var16.genericMethod != (void *)0x0) {
      pMVar27 = *(MethodInfo **)((long)_Var34.genericMethod + 0x30);
      pMVar24 = extraout_RDX_04;
      _Var34 = _Stack_1b0;
      p_Var25 = &_Stack_198;
      _Var32.genericMethod = _Var16.genericMethod;
      _Var16 = _Stack_1a8;
      p_Var35 = (_union_14 *)_Stack_1a0;
      goto Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureFont;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar24 = extraout_RDX_05;
Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureFont:
  *(_union_14 **)((long)p_Var25 + -8) = p_Var35;
  *(_union_14 *)((long)p_Var25 + -0x10) = _Var16;
  *(_union_14 *)((long)p_Var25 + -0x18) = _Var34;
  if (g_data_057aed57 == '\0') {
    *(undefined8 *)((long)p_Var25 + -0x20) = 0x450b550;
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameFontCatalog);
    g_data_057aed57 = '\x01';
    pMVar24 = extraout_RDX_06;
  }
  *(undefined8 *)((long)p_Var25 + -0x20) = 0x450b562;
  method_02 = pMVar27;
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ResetPlainVisuals
            (_Var32.genericMethod,(System_String_o *)pMVar27,pMVar24);
  *(undefined8 *)((long)p_Var25 + -0x20) = 0x450b56a;
  pTVar17 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(_Var32.genericMethod,method_02);
  if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
    *(undefined8 *)((long)p_Var25 + -0x20) = 0x450b585;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)p_Var25 + -0x20) = 0x450b592;
  PatreonEffects_NameFontCatalog__Apply(pTVar17,(System_String_o *)pMVar27,(MethodInfo *)0x0);
  *(undefined8 *)((long)p_Var25 + -0x20) = 0x450b59a;
  _Var16 = _Var32;
  pTVar17 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(_Var32.genericMethod,pMVar27);
  if (pTVar17 != (TMPro_TMP_Text_o *)0x0) {
    pMVar27 = (pTVar17->klass->vtable)._23_set_color.method;
    vtableDispatch = (pTVar17->klass->vtable)._23_set_color.methodPtr;
    *(undefined8 *)((long)p_Var25 + -0x20) = 0x450b5bc;
    (*vtableDispatch)(0x3f800000,0x3f800000,pTVar17);
    *(undefined8 *)((long)p_Var25 + -0x20) = 0x450b5c4;
    pTVar17 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(_Var32.genericMethod,pMVar27);
    _Var16.genericMethod = (void *)0x0;
    *(undefined8 *)((long)p_Var25 + -0x20) = 0x450b5d8;
    uVar9 = il2cpp_runtime_helper_03b428b0(0x3f800000,0x3f800000);
    if (pTVar17 != (TMPro_TMP_Text_o *)0x0) {
      value_00.r = '\0';
      value_00.g = '\0';
      value_00.b = '\0';
      value_00.a = '\0';
      value_00.rgba = uVar9;
      *(undefined8 *)((long)p_Var25 + -0x20) = 0x450b5e9;
      TMPro_TMP_Text__set_faceColor(pTVar17,(UnityEngine_Color32_o)value_00,(MethodInfo *)0x0);
      *(undefined8 *)((long)p_Var25 + -0x20) = 0x450b5f1;
      pTVar17 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                          (_Var32.genericMethod,(MethodInfo *)value_00);
      _Var16 = _Var32;
      if (pTVar17 != (TMPro_TMP_Text_o *)0x0) {
        vtableDispatch = (pTVar17->klass->vtable)._106_ForceMeshUpdate.methodPtr;
        (*vtableDispatch)
                  (pTVar17,0,0,(pTVar17->klass->vtable)._106_ForceMeshUpdate.method,vtableDispatch);
        return;
      }
    }
  }
  *(undefined8 *)((long)p_Var25 + -0x20) = 0x450b61b;
  il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)((long)p_Var25 + -0x30) = 0;
  *(undefined8 *)((long)p_Var25 + -0x28) = 0;
  *(undefined8 *)((long)p_Var25 + -0x38) = 0x450b635;
  bVar8 = UnityEngine_ColorUtility__TryParseHtmlString
                    (_Var16.genericMethod,(UnityEngine_Color_o *)((long)p_Var25 + -0x30),(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterStyleChoicePreview$$RenderFont
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__RenderFont (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o* context, const MethodInfo* method);
// 0x450b450

void Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__RenderFont
               (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *context,MethodInfo *method)

{
  byte bVar1;
  Il2CppMethodPointer vtableDispatch;
  bool_conflict bVar2;
  uint uVar3;
  Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *pGVar4;
  TMPro_TMP_Text_o *pTVar5;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_01;
  Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *unaff_RBX;
  undefined1 *puVar6;
  MethodInfo *pMVar7;
  MethodInfo *method_02;
  UnityEngine_Color32_Fields value;
  Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *__this;
  Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *unaff_R14;
  long *unaff_R15;
  long *plVar8;
  
  puVar6 = &stack0xffffffffffffffe8;
  if (g_data_057aed50 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterStyleChoicePreview);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed50 = '\x01';
  }
  plVar8 = &TypeInfo_AottgCharacterStyleChoicePreview;
  if (*(int *)(TypeInfo_AottgCharacterStyleChoicePreview + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pGVar4 = (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *)
           Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__Preview(context,method);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar7 = (MethodInfo *)0x0;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_AottgCharacterStyleChoicePreview + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this = context;
  Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__ApplyDarkSurface(context,pMVar7);
  if (context != (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *)0x0) {
    bVar1 = (byte)(context->fields).Enabled;
    pMVar7 = (MethodInfo *)(ulong)bVar1;
    __this = context;
    Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__SetFeedback(context,(uint)bVar1,method_00);
    if ((char)(context->fields).Enabled == '\0') {
      if (pGVar4 != (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *)0x0) {
        Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureDisabled
                  ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pGVar4,pMVar7);
        return;
      }
    }
    else if (pGVar4 != (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *)0x0) {
      pMVar7 = (MethodInfo *)(context->fields).Value;
      method_01 = extraout_RDX;
      context = unaff_RBX;
      puVar6 = (undefined1 *)register0x00000020;
      __this = pGVar4;
      pGVar4 = unaff_R14;
      plVar8 = unaff_R15;
      goto Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureFont;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  method_01 = extraout_RDX_00;
Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureFont:
  *(long **)(puVar6 + -8) = plVar8;
  *(Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o **)(puVar6 + -0x10) = pGVar4;
  *(Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o **)(puVar6 + -0x18) = context;
  if (g_data_057aed57 == '\0') {
    *(undefined8 *)(puVar6 + -0x20) = 0x450b550;
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameFontCatalog);
    g_data_057aed57 = '\x01';
    method_01 = extraout_RDX_01;
  }
  *(undefined8 *)(puVar6 + -0x20) = 0x450b562;
  method_02 = pMVar7;
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ResetPlainVisuals
            ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)__this,(System_String_o *)pMVar7,
             method_01);
  *(undefined8 *)(puVar6 + -0x20) = 0x450b56a;
  pTVar5 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                     ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)__this,method_02);
  if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
    *(undefined8 *)(puVar6 + -0x20) = 0x450b585;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)(puVar6 + -0x20) = 0x450b592;
  PatreonEffects_NameFontCatalog__Apply(pTVar5,(System_String_o *)pMVar7,(MethodInfo *)0x0);
  *(undefined8 *)(puVar6 + -0x20) = 0x450b59a;
  pGVar4 = __this;
  pTVar5 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                     ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)__this,pMVar7);
  if (pTVar5 != (TMPro_TMP_Text_o *)0x0) {
    pMVar7 = (pTVar5->klass->vtable)._23_set_color.method;
    vtableDispatch = (pTVar5->klass->vtable)._23_set_color.methodPtr;
    *(undefined8 *)(puVar6 + -0x20) = 0x450b5bc;
    (*vtableDispatch)(0x3f800000,0x3f8000003f800000,pTVar5);
    *(undefined8 *)(puVar6 + -0x20) = 0x450b5c4;
    pTVar5 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                       ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)__this,pMVar7);
    pGVar4 = (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *)0x0;
    *(undefined8 *)(puVar6 + -0x20) = 0x450b5d8;
    uVar3 = il2cpp_runtime_helper_03b428b0(0x3f800000,0x3f8000003f800000);
    if (pTVar5 != (TMPro_TMP_Text_o *)0x0) {
      value.r = '\0';
      value.g = '\0';
      value.b = '\0';
      value.a = '\0';
      value.rgba = uVar3;
      *(undefined8 *)(puVar6 + -0x20) = 0x450b5e9;
      TMPro_TMP_Text__set_faceColor(pTVar5,(UnityEngine_Color32_o)value,(MethodInfo *)0x0);
      *(undefined8 *)(puVar6 + -0x20) = 0x450b5f1;
      pTVar5 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                         ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)__this,(MethodInfo *)value);
      pGVar4 = __this;
      if (pTVar5 != (TMPro_TMP_Text_o *)0x0) {
        vtableDispatch = (pTVar5->klass->vtable)._106_ForceMeshUpdate.methodPtr;
        (*vtableDispatch)
                  (pTVar5,0,0,(pTVar5->klass->vtable)._106_ForceMeshUpdate.method,vtableDispatch);
        return;
      }
    }
  }
  *(undefined8 *)(puVar6 + -0x20) = 0x450b61b;
  il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar6 + -0x30) = 0;
  *(undefined8 *)(puVar6 + -0x28) = 0;
  *(undefined8 *)(puVar6 + -0x38) = 0x450b635;
  bVar2 = UnityEngine_ColorUtility__TryParseHtmlString
                    ((System_String_o *)pGVar4,(UnityEngine_Color_o *)(puVar6 + -0x30),(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterStyleChoicePreview$$Preview
// il2cpp: Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o* Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__Preview (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o* context, const MethodInfo* method);
// 0x450a800

Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *
Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__Preview
          (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *context,MethodInfo *method)

{
  float *pfVar1;
  undefined8 uVar2;
  TMPro_TextMeshProUGUI_o *pTVar3;
  UnityEngine_Transform_c *__this;
  Il2CppMethodPointer vtableDispatch;
  long lVar4;
  undefined8 uVar5;
  bool_conflict bVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *pGVar11;
  UnityEngine_GameObject_o *pUVar12;
  UnityEngine_Object_o *x;
  undefined4 extraout_var;
  _union_14 _Var13;
  undefined4 extraout_var_00;
  System_String_o *pSVar14;
  _union_14 _Var15;
  undefined4 extraout_var_01;
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *extraout_RAX;
  TMPro_TMP_Text_o *pTVar16;
  TMPro_TMP_Text_o *pTVar17;
  UnityEngine_Color_array *colors;
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *extraout_RAX_00;
  undefined8 *puVar18;
  UnityEngine_Color32_Fields UVar19;
  TMPro_TMP_Text_o *pTVar20;
  TMPro_TMP_Text_o *pTVar21;
  _union_14 __this_00;
  Il2CppObject *pIVar22;
  PatreonEffects_NameEffectSettings_o *settings;
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *extraout_RAX_01;
  undefined4 extraout_var_02;
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *extraout_RAX_02;
  undefined4 extraout_var_03;
  System_String_o **in_RCX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  undefined8 extraout_RDX_01;
  _union_14 extraout_RDX_02;
  _union_14 extraout_RDX_03;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  MethodInfo *pMVar23;
  _union_14 *p_Var24;
  _union_14 *unaff_RBP;
  System_String_o *pSVar25;
  MethodInfo *pMVar26;
  UnityEngine_Color32_o value;
  TMPro_TMP_Text_c *pTVar27;
  MethodInfo *method_01;
  UnityEngine_Color32_Fields value_00;
  System_String_o **ppSVar28;
  long *plVar29;
  long lVar30;
  _union_14 _Var31;
  long *plVar32;
  MethodInfo_24E7B40 **unaff_R13;
  System_String_o **__this_01;
  _union_14 *p_Var33;
  float fVar34;
  float fVar35;
  float in_XMM1_Da;
  float fVar36;
  float in_XMM1_Db;
  float fVar37;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined1 auVar38 [16];
  _union_14 _Stack_188;
  _union_14 _Stack_180;
  _union_14 _Stack_178;
  _union_14 _Stack_170;
  TMPro_TMP_Text_o *pTStack_168;
  MethodInfo *pMStack_160;
  TMPro_TMP_Text_o *pTStack_158;
  _union_14 _Stack_150;
  undefined8 uStack_148;
  _union_14 _Stack_140;
  long *plStack_138;
  UnityEngine_Color32_Fields UStack_130;
  _union_14 _Stack_128;
  undefined1 auStack_120 [88];
  undefined8 uStack_c8;
  _union_14 _Stack_b0;
  TMPro_TMP_Text_o *pTStack_a8;
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *pGStack_a0;
  ulong uStack_98;
  _union_14 _Stack_90;
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *pGStack_88;
  long *plStack_80;
  _union_14 _Stack_78;
  _union_14 _Stack_70;
  _union_14 _Stack_68;
  undefined8 uStack_60;
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *pGStack_58;
  long *plStack_50;
  
  if (g_data_057aed51 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgNameStyleChoicePreview_GetComponent_AottgNameStyleC);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgNameStyleChoicePreview_AddComponent_AottgNameStyleC);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed51 = '\x01';
  }
  if (context == (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *)0x0) {
    return (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)0x0;
  }
  _Var15 = (_union_14)(context->fields).Label;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pGVar11 = (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)0x0;
  pSVar25 = (System_String_o *)0x0;
  bVar6 = UnityEngine_Object__op_Equality(_Var15.genericMethod,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)0x0;
  }
  pTVar3 = (context->fields).Label;
  __this_01 = (System_String_o **)0x0;
  if (pTVar3 != (TMPro_TextMeshProUGUI_o *)0x0) {
    pSVar25 = (context->fields).Text;
    (*(pTVar3->klass->vtable)._66_set_text.methodPtr)
              (pTVar3,pSVar25,(pTVar3->klass->vtable)._66_set_text.method);
    pTVar3 = (context->fields).Label;
    __this_01 = (System_String_o **)0x0;
    if (pTVar3 != (TMPro_TextMeshProUGUI_o *)0x0) {
      pGVar11 = (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)
                UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pTVar3,MethodInfo_AottgNameStyleChoicePreview_GetComponent_AottgNameStyleC);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar25 = (System_String_o *)0x0;
      bVar6 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pGVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        return pGVar11;
      }
      __this_01 = (System_String_o **)(context->fields).Label;
      if ((UnityEngine_Transform_o *)__this_01 != (UnityEngine_Transform_o *)0x0) {
        pSVar25 = (System_String_o *)0x0;
        pUVar12 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
        if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
          pGVar11 = (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)
                    UnityEngine_GameObject__AddComponent_object_(pUVar12,MethodInfo_AottgNameStyleChoicePreview_AddComponent_AottgNameStyleC);
          return pGVar11;
        }
      }
    }
  }
  uStack_60 = il2cpp_runtime_helper_022b2c90();
  plStack_50 = &TypeInfo_Object;
  ppSVar28 = __this_01;
  pGStack_58 = pGVar11;
  if (g_data_057aed53 == '\0') {
    _Stack_68 = (_union_14)0x450a953;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterStyleChoicePreview);
    _Stack_68 = (_union_14)0x450a95f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponentInParent_Image);
    _Stack_68 = (_union_14)0x450a96b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    _Stack_68 = (_union_14)0x450a977;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    _Stack_68 = (_union_14)0x450a983;
    il2cpp_runtime_helper_023445d0(&"-popover");
    ppSVar28 = &"-options-scroll";
    _Stack_68 = (_union_14)0x450a98f;
    il2cpp_runtime_helper_023445d0();
    g_data_057aed53 = '\x01';
  }
  if ((UnityEngine_Transform_o *)__this_01 != (UnityEngine_Transform_o *)0x0) {
    if (*(char *)((long)__this_01 + 0x3e) == '\0') {
      pGVar11 = (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)
                ((UnityEngine_Component_Fields *)((long)__this_01 + 0x10))->m_CachedPtr;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        _Stack_68 = (_union_14)0x450aa6d;
        il2cpp_runtime_helper_02337ed0();
      }
      _Var13.genericMethod = (UnityEngine_Transform_o *)0x0;
      _Var15.genericMethod = (UnityEngine_Transform_o *)0x0;
      pSVar25 = (System_String_o *)0x0;
      _Stack_68 = (_union_14)0x450aa7c;
      bVar6 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pGVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar6 != '\0') {
        pUVar12 = (UnityEngine_GameObject_o *)
                  ((UnityEngine_Component_Fields *)((long)__this_01 + 0x10))->m_CachedPtr;
        ppSVar28 = (System_String_o **)(UnityEngine_Transform_o *)0x0;
        if (pUVar12 == (UnityEngine_GameObject_o *)0x0) goto label_0450abd7;
        _Stack_68 = (_union_14)0x450aa94;
        _Var13.genericMethod = UnityEngine_GameObject__get_transform(pUVar12,(MethodInfo *)0x0);
      }
      __this_01 = &"-popover";
      unaff_R13 = &MethodInfo_Image_GetComponent_Image;
      unaff_RBP = &TypeInfo_AottgCharacterStyleChoicePreview;
      iVar9 = *(int *)(TypeInfo_Object + 0xe4);
      _Var15 = _Var13;
      while( true ) {
        if (iVar9 == 0) {
          _Stack_68 = (_union_14)0x450aadf;
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar25 = (System_String_o *)0x0;
        _Stack_68 = (_union_14)0x450aaeb;
        ppSVar28 = (System_String_o **)_Var15;
        bVar6 = UnityEngine_Object__op_Inequality
                          (_Var15.genericMethod,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar6 == '\0') {
          return (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)CONCAT44(extraout_var_00,bVar6);
        }
        if (_Var15.genericMethod == (UnityEngine_Transform_o *)0x0) break;
        pSVar25 = (System_String_o *)0x0;
        _Stack_68 = (_union_14)0x450ab06;
        ppSVar28 = (System_String_o **)_Var15;
        pSVar14 = UnityEngine_Object__get_name(_Var15.genericMethod,(MethodInfo *)0x0);
        if (pSVar14 == (System_String_o *)0x0) break;
        _Stack_68 = (_union_14)0x450ab1c;
        bVar6 = System_String__EndsWith(pSVar14,"-popover",(MethodInfo *)0x0);
        if ((char)bVar6 == '\0') {
          pSVar25 = (System_String_o *)0x0;
          _Stack_68 = (_union_14)0x450ab2a;
          ppSVar28 = (System_String_o **)_Var15;
          pSVar14 = UnityEngine_Object__get_name(_Var15.genericMethod,(MethodInfo *)0x0);
          if (pSVar14 == (System_String_o *)0x0) break;
          in_RCX = &"-options-scroll";
          _Stack_68 = (_union_14)0x450ab47;
          bVar6 = System_String__EndsWith(pSVar14,"-options-scroll",(MethodInfo *)0x0);
          if ((char)bVar6 != '\0') goto label_0450ab4f;
        }
        else {
label_0450ab4f:
          _Stack_68 = (_union_14)0x450ab5b;
          pGVar11 = (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)
                    UnityEngine_Component__GetComponent_object_(_Var15.genericMethod,MethodInfo_Image_GetComponent_Image);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            _Stack_68 = (_union_14)0x450ab70;
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar25 = (System_String_o *)0x0;
          _Stack_68 = (_union_14)0x450ab7c;
          bVar6 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pGVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar6 != '\0') {
            if (*(int *)((long)TypeInfo_AottgCharacterStyleChoicePreview.genericMethod + 0xe4) == 0) {
              _Stack_68 = (_union_14)0x450ab96;
              il2cpp_runtime_helper_02337ed0();
            }
            ppSVar28 = (System_String_o **)TypeInfo_AottgCharacterStyleChoicePreview;
            if (pGVar11 == (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)0x0) break;
            uVar2 = *(undefined8 *)(*(long *)((long)TypeInfo_AottgCharacterStyleChoicePreview.genericMethod + 0xb8) + 0x18);
            in_XMM1_Da = (float)uVar2;
            in_XMM1_Db = (float)((ulong)uVar2 >> 0x20);
            in_XMM1_Dc._0_2_ = 0;
            in_XMM1_Dc._2_1_ = '\0';
            in_XMM1_Dc._3_1_ = '\0';
            in_XMM1_Dd = 0;
            _Stack_68 = (_union_14)0x450abc3;
            (**(code **)&pGVar11->klass[1]._2.naturalAligment)
                      ((int)*(undefined8 *)(*(long *)((long)TypeInfo_AottgCharacterStyleChoicePreview.genericMethod + 0xb8) + 0x10),pGVar11
                      );
          }
        }
        _Stack_68 = (_union_14)0x450aaca;
        _Var15.genericMethod = UnityEngine_Transform__get_parent(_Var15.genericMethod,(MethodInfo *)0x0);
        iVar9 = *(int *)(TypeInfo_Object + 0xe4);
      }
    }
    else {
      __this = ((UnityEngine_Transform_o *)((long)__this_01 + 0x18))->klass;
      ppSVar28 = (System_String_o **)(UnityEngine_Transform_o *)0x0;
      if (__this != (UnityEngine_Transform_c *)0x0) {
        _Stack_68 = (_union_14)0x450a9c6;
        x = (UnityEngine_Object_o *)
            UnityEngine_Component__GetComponentInParent_object_
                      ((UnityEngine_Component_o *)__this,MethodInfo_Image_GetComponentInParent_Image);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          _Stack_68 = (_union_14)0x450a9e1;
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar25 = (System_String_o *)0x0;
        _Stack_68 = (_union_14)0x450a9ed;
        bVar6 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar6 == '\0') {
          return (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)CONCAT44(extraout_var,bVar6);
        }
        unaff_RBP = &TypeInfo_AottgCharacterStyleChoicePreview;
        if (*(int *)((long)TypeInfo_AottgCharacterStyleChoicePreview.genericMethod + 0xe4) == 0) {
          _Stack_68 = (_union_14)0x450aa0e;
          il2cpp_runtime_helper_02337ed0();
        }
        pGVar11 = (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)0x0;
        ppSVar28 = (System_String_o **)TypeInfo_AottgCharacterStyleChoicePreview;
        if (x != (UnityEngine_Object_o *)0x0) {
          pGVar11 = (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)
                    (**(code **)&x->klass[1]._2.naturalAligment)
                              ((int)*(undefined8 *)(*(long *)((long)TypeInfo_AottgCharacterStyleChoicePreview.genericMethod + 0xb8) + 0x10)
                               ,(int)*(undefined8 *)
                                      (*(long *)((long)TypeInfo_AottgCharacterStyleChoicePreview.genericMethod + 0xb8) + 0x18),x,
                               x->klass[1].vtable._0_Equals.methodPtr);
          return pGVar11;
        }
      }
    }
  }
label_0450abd7:
  _Stack_68 = (_union_14)0x450abdc;
  il2cpp_runtime_helper_022b2c90();
  plStack_80 = &TypeInfo_Object;
  plVar29 = (long *)ppSVar28;
  pGStack_88 = pGVar11;
  _Stack_78 = (_union_14)__this_01;
  _Stack_70 = _Var15;
  _Stack_68 = (_union_14)unaff_RBP;
  if (g_data_057aed52 == '\0') {
    _Stack_90 = (_union_14)0x450ac03;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchDropdownItemFeedback_GetComponent_GisketchDropdo);
    plVar29 = &TypeInfo_Object;
    _Stack_90 = (_union_14)0x450ac0f;
    il2cpp_runtime_helper_023445d0();
    g_data_057aed52 = '\x01';
  }
  if ((UnityEngine_Transform_o *)ppSVar28 != (UnityEngine_Transform_o *)0x0) {
    pGVar11 = (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)
              ((UnityEngine_Component_Fields *)((long)ppSVar28 + 0x10))->m_CachedPtr;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      _Stack_90 = (_union_14)0x450ac3c;
      il2cpp_runtime_helper_02337ed0();
    }
    _Var15.genericMethod = (void *)0x0;
    _Stack_90 = (_union_14)0x450ac4a;
    bVar6 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pGVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      pUVar12 = (UnityEngine_GameObject_o *)
                ((UnityEngine_Component_Fields *)((long)ppSVar28 + 0x10))->m_CachedPtr;
      plVar29 = (long *)0x0;
      unaff_RBP = _Var15.genericMethod;
      if (pUVar12 == (UnityEngine_GameObject_o *)0x0) goto label_0450acbe;
      _Stack_90 = (_union_14)0x450ac66;
      _Var15.genericMethod = UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_GisketchDropdownItemFeedback_GetComponent_GisketchDropdo);
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      _Stack_90 = (_union_14)0x450ac7b;
      il2cpp_runtime_helper_02337ed0();
    }
    _Stack_90 = (_union_14)0x450ac87;
    plVar29 = (long *)_Var15;
    bVar6 = UnityEngine_Object__op_Inequality
                      (_Var15.genericMethod,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
      return (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)CONCAT44(extraout_var_01,bVar6);
    }
    unaff_RBP = (void *)0x0;
    if (_Var15.genericMethod != (void *)0x0) {
      pSVar14 = (System_String_o *)((UnityEngine_Component_Fields *)((long)ppSVar28 + 0x28))->m_CachedPtr;
      Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__SetLabelText
                (_Var15.genericMethod,pSVar14,pSVar14,
                 (uint)pSVar25 & 0xff & (uint)*(byte *)((long)ppSVar28 + 0x3c),(MethodInfo *)0x0);
      return extraout_RAX;
    }
  }
label_0450acbe:
  plVar32 = &TypeInfo_Object;
  _Stack_90 = (_union_14)0x450acc3;
  il2cpp_runtime_helper_022b2c90();
  pMVar26 = extraout_RDX;
  pGStack_a0 = pGVar11;
  uStack_98 = (ulong)pSVar25 & 0xffffffff;
  _Stack_90 = (_union_14)ppSVar28;
  if (g_data_057aed56 == '\0') {
    pTStack_a8 = (TMPro_TMP_Text_o *)0x450aced;
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameFontCatalog);
    pTStack_a8 = (TMPro_TMP_Text_o *)0x450acf9;
    il2cpp_runtime_helper_023445d0(&"Normal");
    g_data_057aed56 = '\x01';
    pMVar26 = extraout_RDX_00;
  }
  pTStack_a8 = (TMPro_TMP_Text_o *)0x450ad12;
  UVar19 = "Normal";
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ResetPlainVisuals
            ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)plVar29,(System_String_o *)"Normal",
             pMVar26);
  pTStack_a8 = (TMPro_TMP_Text_o *)0x450ad1a;
  pTVar16 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                      ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)plVar29,(MethodInfo *)UVar19);
  if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
    pTStack_a8 = (TMPro_TMP_Text_o *)0x450ad35;
    il2cpp_runtime_helper_02337ed0();
  }
  pTStack_a8 = (TMPro_TMP_Text_o *)0x450ad42;
  UVar19 = "Normal";
  PatreonEffects_NameFontCatalog__Apply(pTVar16,(System_String_o *)"Normal",(MethodInfo *)0x0);
  pTStack_a8 = (TMPro_TMP_Text_o *)0x450ad4a;
  _Var15 = (_union_14)plVar29;
  pTVar17 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                      ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)plVar29,(MethodInfo *)UVar19);
  if (pTVar17 != (TMPro_TMP_Text_o *)0x0) {
    in_RCX = (System_String_o **)pTVar17->klass;
    UVar19 = (UnityEngine_Color32_Fields)(((TMPro_TMP_Text_c *)in_RCX)->vtable)._23_set_color.method;
    in_XMM1_Da = 0.58;
    in_XMM1_Db = 1.0;
    in_XMM1_Dc._0_2_ = 0;
    in_XMM1_Dc._2_1_ = '\0';
    in_XMM1_Dc._3_1_ = '\0';
    in_XMM1_Dd = 0;
    pTStack_a8 = (TMPro_TMP_Text_o *)0x450ad74;
    (*(((TMPro_TMP_Text_c *)in_RCX)->vtable)._23_set_color.methodPtr)(0x3f147ae1,pTVar17);
    pTStack_a8 = (TMPro_TMP_Text_o *)0x450ad7c;
    pTVar16 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                        ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)plVar29,(MethodInfo *)UVar19)
    ;
    pTStack_a8 = (TMPro_TMP_Text_o *)0x450ad87;
    _Var15 = (_union_14)plVar29;
    pTVar17 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                        ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)plVar29,(MethodInfo *)UVar19)
    ;
    if (pTVar17 != (TMPro_TMP_Text_o *)0x0) {
      in_RCX = (System_String_o **)pTVar17->klass;
      UVar19 = (UnityEngine_Color32_Fields)(((TMPro_TMP_Text_c *)in_RCX)->vtable)._22_get_color.method;
      pTStack_a8 = (TMPro_TMP_Text_o *)0x450ad9f;
      (*(((TMPro_TMP_Text_c *)in_RCX)->vtable)._22_get_color.methodPtr)();
      _Var15.genericMethod = (void *)0x0;
      pTStack_a8 = (TMPro_TMP_Text_o *)0x450ada6;
      uVar7 = il2cpp_runtime_helper_03b428b0();
      if (pTVar16 != (TMPro_TMP_Text_o *)0x0) {
        UVar19.r = '\0';
        UVar19.g = '\0';
        UVar19.b = '\0';
        UVar19.a = '\0';
        UVar19.rgba = uVar7;
        pTStack_a8 = (TMPro_TMP_Text_o *)0x450adb7;
        TMPro_TMP_Text__set_faceColor(pTVar16,(UnityEngine_Color32_o)UVar19,(MethodInfo *)0x0);
        pTStack_a8 = (TMPro_TMP_Text_o *)0x450adbf;
        _Var15 = (_union_14)plVar29;
        pTVar17 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                            ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)plVar29,
                             (MethodInfo *)UVar19);
        if (pTVar17 != (TMPro_TMP_Text_o *)0x0) {
          vtableDispatch = (pTVar17->klass->vtable)._106_ForceMeshUpdate.methodPtr;
          pGVar11 = (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)
                    (*vtableDispatch)
                              (pTVar17,0,0,(pTVar17->klass->vtable)._106_ForceMeshUpdate.method,
                               vtableDispatch);
          return pGVar11;
        }
      }
    }
  }
  pTStack_a8 = (TMPro_TMP_Text_o *)0x450ade9;
  uStack_c8 = il2cpp_runtime_helper_022b2c90();
  auStack_120._72_4_ = in_XMM1_Da;
  auStack_120._76_4_ = in_XMM1_Db;
  auStack_120._80_4_ = in_XMM1_Dc;
  auStack_120._84_4_ = in_XMM1_Dd;
  _Stack_b0 = (_union_14)plVar29;
  pTStack_a8 = pTVar16;
  if (g_data_057aed58 == '\0') {
    auStack_120._64_8_ = (void *)0x450ae1b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color);
    g_data_057aed58 = '\x01';
  }
  pMVar26 = (MethodInfo *)0x2;
  auStack_120._64_8_ = (void *)0x450ae36;
  _Var13 = TypeInfo_Color;
  colors = (UnityEngine_Color_array *)il2cpp_runtime_helper_022b2a40();
  if (colors != (UnityEngine_Color_array *)0x0) {
    uVar7 = (uint)colors->max_length;
    in_RCX = (System_String_o **)(ulong)uVar7;
    if (uVar7 != 0) {
      colors->m_Items[0].fields.r = (float)(undefined4)uStack_c8;
      colors->m_Items[0].fields.g = (float)uStack_c8._4_4_;
      colors->m_Items[0].fields.b = (float)auStack_120._72_4_;
      colors->m_Items[0].fields.a = (float)auStack_120._76_4_;
      if (uVar7 != 1) {
        colors->m_Items[1].fields.r = (float)(undefined4)uStack_c8;
        colors->m_Items[1].fields.g = (float)uStack_c8._4_4_;
        colors->m_Items[1].fields.b = (float)auStack_120._72_4_;
        colors->m_Items[1].fields.a = (float)auStack_120._76_4_;
        Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureGradient
                  (_Var15.genericMethod,colors,(System_String_o *)UVar19,(MethodInfo *)in_RCX);
        return extraout_RAX_00;
      }
    }
    auStack_120._64_8_ = (void *)0x450ae73;
    il2cpp_runtime_helper_022b2ca0();
  }
  auStack_120._64_8_ = (void *)0x450ae78;
  il2cpp_runtime_helper_022b2c90();
  auStack_120._56_8_ = &"Normal";
  auStack_120._32_8_ = &TypeInfo_Object;
  pMVar23 = (MethodInfo *)auStack_120;
  plVar29 = (long *)_Var13;
  auStack_120._24_8_ = _Var15;
  auStack_120._40_8_ = unaff_R13;
  auStack_120._48_8_ = UVar19;
  auStack_120._64_8_ = unaff_RBP;
  if (g_data_057aed54 == '\0') {
    _Stack_128 = (_union_14)0x450aea6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterStyleChoicePreview);
    _Stack_128 = (_union_14)0x450aeb2;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color);
    _Stack_128 = (_union_14)0x450aebe;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ICollection_string);
    plVar29 = &TypeInfo_IList_string;
    _Stack_128 = (_union_14)0x450aeca;
    il2cpp_runtime_helper_023445d0();
    g_data_057aed54 = '\x01';
  }
  if (_Var13.genericMethod != (long *)0x0) {
    lVar4 = *(long *)_Var13.genericMethod;
    if ((ulong)*(ushort *)(lVar4 + 0x12e) != 0) {
      lVar30 = 0;
      do {
        if (*(long *)(*(long *)(lVar4 + 0xb0) + lVar30) == TypeInfo_ICollection_string) {
          puVar18 = (undefined8 *)
                    ((long)*(int *)(*(long *)(lVar4 + 0xb0) + 8 + lVar30) * 0x10 + lVar4 + 0x138);
          goto label_0450af31;
        }
        lVar30 = lVar30 + 0x10;
      } while ((ulong)*(ushort *)(lVar4 + 0x12e) << 4 != lVar30);
    }
    _Stack_128 = (_union_14)0x450af19;
    puVar18 = (undefined8 *)il2cpp_runtime_helper_02300d20(_Var13.genericMethod,TypeInfo_ICollection_string,0);
label_0450af31:
    _Stack_128 = (_union_14)0x450af3a;
    uVar8 = (*(code *)*puVar18)(_Var13.genericMethod,puVar18[1]);
    _Stack_128 = (_union_14)0x450af4b;
    UVar19 = (UnityEngine_Color32_Fields)il2cpp_runtime_helper_022b2a40(TypeInfo_Color.genericMethod,uVar8);
    if (UVar19 != (UnityEngine_Color32_Fields)0x0) {
      pTVar27 = (TMPro_TMP_Text_c *)0x0;
      unaff_RBP = &TypeInfo_AottgCharacterStyleChoicePreview;
      do {
        lVar4 = *(long *)_Var13.genericMethod;
        if ((ulong)*(ushort *)(lVar4 + 0x12e) != 0) {
          lVar30 = 0;
          do {
            if (*(long *)(*(long *)(lVar4 + 0xb0) + lVar30) == TypeInfo_ICollection_string) {
              puVar18 = (undefined8 *)
                        ((long)*(int *)(*(long *)(lVar4 + 0xb0) + 8 + lVar30) * 0x10 + lVar4 + 0x138);
              goto label_0450aff3;
            }
            lVar30 = lVar30 + 0x10;
          } while ((ulong)*(ushort *)(lVar4 + 0x12e) << 4 != lVar30);
        }
        _Stack_128 = (_union_14)0x450afd9;
        puVar18 = (undefined8 *)il2cpp_runtime_helper_02300d20(_Var13.genericMethod,TypeInfo_ICollection_string,0);
label_0450aff3:
        _Stack_128 = (_union_14)0x450affc;
        iVar9 = (*(code *)*puVar18)(_Var13.genericMethod,puVar18[1]);
        if ((long)iVar9 <= (long)pTVar27) {
          return (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)UVar19;
        }
        lVar4 = *(long *)_Var13.genericMethod;
        if ((ulong)*(ushort *)(lVar4 + 0x12e) != 0) {
          lVar30 = 0;
          do {
            if (*(long *)(*(long *)(lVar4 + 0xb0) + lVar30) == TypeInfo_IList_string) {
              puVar18 = (undefined8 *)
                        ((long)*(int *)(*(long *)(lVar4 + 0xb0) + 8 + lVar30) * 0x10 + lVar4 + 0x138);
              goto label_0450b063;
            }
            lVar30 = lVar30 + 0x10;
          } while ((ulong)*(ushort *)(lVar4 + 0x12e) << 4 != lVar30);
        }
        _Stack_128 = (_union_14)0x450b049;
        puVar18 = (undefined8 *)il2cpp_runtime_helper_02300d20(_Var13.genericMethod,TypeInfo_IList_string,0);
label_0450b063:
        _Stack_128 = (_union_14)0x450b06f;
        _Var15.genericMethod =
             (void *)(*(code *)*puVar18)(_Var13.genericMethod,(ulong)pTVar27 & 0xffffffff,puVar18[1]);
        if (*(int *)((long)TypeInfo_AottgCharacterStyleChoicePreview.genericMethod + 0xe4) == 0) {
          _Stack_128 = (_union_14)0x450b084;
          il2cpp_runtime_helper_02337ed0();
        }
        auStack_120._0_8_ = (Il2CppMethodPointer)0x0;
        auStack_120._8_8_ = (Il2CppMethodPointer)0x0;
        _Stack_128 = (_union_14)0x450b098;
        pMVar23 = (MethodInfo *)auStack_120;
        plVar29 = _Var15.genericMethod;
        bVar6 = UnityEngine_ColorUtility__TryParseHtmlString
                          (_Var15.genericMethod,(UnityEngine_Color_o *)auStack_120,(MethodInfo *)0x0);
        in_RCX = (System_String_o **)(ulong)*(uint *)((long)UVar19 + 0x18);
        plVar32 = (long *)auStack_120;
        if (in_RCX <= pTVar27) goto label_0450b1e2;
        if ((char)bVar6 == '\0') {
          fVar34 = 1.0;
          fVar35 = 1.0;
          fVar36 = fVar34;
          fVar37 = fVar35;
        }
        else {
          fVar34 = (float)auStack_120._0_8_;
          fVar35 = SUB84(auStack_120._0_8_,4);
          fVar36 = (float)auStack_120._8_8_;
          fVar37 = SUB84(auStack_120._8_8_,4);
        }
        pfVar1 = (float *)((long)UVar19 + 0x20 + (long)pTVar27 * 0x10);
        *pfVar1 = fVar34;
        pfVar1[1] = fVar35;
        pfVar1[2] = fVar36;
        pfVar1[3] = fVar37;
        pTVar27 = (TMPro_TMP_Text_c *)((long)&(pTVar27->_1).image + 1);
      } while( true );
    }
    lVar4 = *(long *)_Var13.genericMethod;
    if ((ulong)*(ushort *)(lVar4 + 0x12e) != 0) {
      lVar30 = 0;
      do {
        if (*(long *)(*(long *)(lVar4 + 0xb0) + lVar30) == TypeInfo_ICollection_string) {
          puVar18 = (undefined8 *)
                    ((long)*(int *)(*(long *)(lVar4 + 0xb0) + 8 + lVar30) * 0x10 + lVar4 + 0x138);
          goto label_0450b121;
        }
        lVar30 = lVar30 + 0x10;
      } while ((ulong)*(ushort *)(lVar4 + 0x12e) << 4 != lVar30);
    }
    _Stack_128 = (_union_14)0x450b109;
    puVar18 = (undefined8 *)il2cpp_runtime_helper_02300d20(_Var13.genericMethod,TypeInfo_ICollection_string,0);
label_0450b121:
    _Stack_128 = (_union_14)0x450b12a;
    iVar9 = (*(code *)*puVar18)(_Var13.genericMethod,puVar18[1]);
    if (iVar9 < 1) {
      return (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)0x0;
    }
    lVar4 = *(long *)_Var13.genericMethod;
    if ((ulong)*(ushort *)(lVar4 + 0x12e) != 0) {
      lVar30 = 0;
      do {
        if (*(long *)(*(long *)(lVar4 + 0xb0) + lVar30) == TypeInfo_IList_string) {
          in_RCX = (System_String_o **)
                   ((long)*(int *)(*(long *)(lVar4 + 0xb0) + 8 + lVar30) * 0x10 + lVar4 + 0x138);
          goto label_0450b1a3;
        }
        lVar30 = lVar30 + 0x10;
      } while ((ulong)*(ushort *)(lVar4 + 0x12e) << 4 != lVar30);
    }
    _Stack_128 = (_union_14)0x450b179;
    in_RCX = (System_String_o **)il2cpp_runtime_helper_02300d20(_Var13.genericMethod,TypeInfo_IList_string,0);
label_0450b1a3:
    _Stack_128 = (_union_14)0x450b1ae;
    _Var15.genericMethod =
         (void *)(*(((TMPro_TMP_Text_c *)in_RCX)->_1).image)
                           (_Var13.genericMethod,0,(((TMPro_TMP_Text_c *)in_RCX)->_1).gc_desc);
    if (*(int *)((long)TypeInfo_AottgCharacterStyleChoicePreview.genericMethod + 0xe4) == 0) {
      _Stack_128 = (_union_14)0x450b1c9;
      il2cpp_runtime_helper_02337ed0();
    }
    auStack_120._0_8_ = (Il2CppMethodPointer)0x0;
    auStack_120._8_8_ = (Il2CppMethodPointer)0x0;
    _Stack_128 = (_union_14)0x450b1dd;
    plVar29 = _Var15.genericMethod;
    UnityEngine_ColorUtility__TryParseHtmlString
              (_Var15.genericMethod,(UnityEngine_Color_o *)auStack_120,(MethodInfo *)0x0);
    _Stack_128 = (_union_14)0x450b1e2;
    il2cpp_runtime_helper_022b2c90();
label_0450b1e2:
    _Stack_128 = (_union_14)0x450b1e7;
    il2cpp_runtime_helper_022b2ca0();
    pMVar26 = pMVar23;
  }
  _Stack_128 = (_union_14)0x450b1ec;
  auVar38 = il2cpp_runtime_helper_022b2c90();
  pTVar16 = auVar38._8_8_;
  uStack_148 = auVar38._0_8_;
  _Stack_140 = _Var15;
  plStack_138 = plVar32;
  UStack_130 = UVar19;
  _Stack_128 = _Var13;
  if (g_data_057aed59 == '\0') {
    _Stack_150 = (_union_14)0x450b216;
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameFontCatalog);
    auVar38._8_8_ = extraout_RDX_01;
    auVar38._0_8_ = uStack_148;
    g_data_057aed59 = '\x01';
  }
  uStack_148 = auVar38._0_8_;
  _Stack_150 = (_union_14)0x450b228;
  pTVar17 = pTVar16;
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ResetPlainVisuals
            ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)plVar29,(System_String_o *)pTVar16,
             auVar38._8_8_);
  _Stack_150 = (_union_14)0x450b230;
  pTVar17 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                      ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)plVar29,(MethodInfo *)pTVar17);
  if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
    _Stack_150 = (_union_14)0x450b24b;
    il2cpp_runtime_helper_02337ed0();
  }
  _Stack_150 = (_union_14)0x450b258;
  pTVar21 = pTVar16;
  PatreonEffects_NameFontCatalog__Apply(pTVar17,(System_String_o *)pTVar16,(MethodInfo *)0x0);
  _Stack_150 = (_union_14)0x450b260;
  _Var15 = (_union_14)plVar29;
  pTVar20 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                      ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)plVar29,(MethodInfo *)pTVar21);
  uVar7 = (uint)pTVar21;
  if (pTVar20 != (TMPro_TMP_Text_o *)0x0) {
    in_RCX = (System_String_o **)pTVar20->klass;
    pMVar23 = (((TMPro_TMP_Text_c *)in_RCX)->vtable)._23_set_color.method;
    _Stack_150 = (_union_14)0x450b286;
    (*(((TMPro_TMP_Text_c *)in_RCX)->vtable)._23_set_color.methodPtr)(0x3f800000,0x3f800000,pTVar20);
    _Stack_150 = (_union_14)0x450b28e;
    pTVar16 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                        ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)plVar29,pMVar23);
    uVar7 = (uint)pMVar23;
    _Var15.genericMethod = (void *)0x0;
    _Stack_150 = (_union_14)0x450b2a2;
    uVar10 = il2cpp_runtime_helper_03b428b0(0x3f800000,0x3f800000);
    if (pTVar16 != (TMPro_TMP_Text_o *)0x0) {
      value.fields.r = '\0';
      value.fields.g = '\0';
      value.fields.b = '\0';
      value.fields.a = '\0';
      value.fields.rgba = uVar10;
      _Stack_150 = (_union_14)0x450b2b3;
      TMPro_TMP_Text__set_faceColor(pTVar16,value,(MethodInfo *)0x0);
      *(MethodInfo **)((long)plVar29 + 0x30) = pMVar26;
      _Stack_150 = (_union_14)0x450b2c3;
      pMVar23 = pMVar26;
      il2cpp_runtime_helper_022b4080((long)plVar29 + 0x30);
      _Stack_150 = (_union_14)0x450b2cb;
      Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__HookVertexColors
                ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)plVar29,pMVar23);
      _Stack_150 = (_union_14)0x450b2d3;
      _Var15 = (_union_14)plVar29;
      pTVar21 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                          ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)plVar29,pMVar23);
      uVar7 = (uint)pMVar23;
      if (pTVar21 != (TMPro_TMP_Text_o *)0x0) {
        vtableDispatch = (pTVar21->klass->vtable)._106_ForceMeshUpdate.methodPtr;
        pGVar11 = (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)
                  (*vtableDispatch)
                            (pTVar21,0,0,(pTVar21->klass->vtable)._106_ForceMeshUpdate.method,
                             vtableDispatch);
        return pGVar11;
      }
    }
  }
  _Stack_150 = (_union_14)0x450b303;
  il2cpp_runtime_helper_022b2c90();
  _Var31._4_4_ = 0;
  _Var31._0_4_ = uVar7;
  _Var13 = extraout_RDX_02;
  _Stack_170 = (_union_14)plVar29;
  pTStack_168 = pTVar17;
  pMStack_160 = pMVar26;
  pTStack_158 = pTVar16;
  _Stack_150 = (_union_14)unaff_RBP;
  if (g_data_057aed5a == '\0') {
    _Stack_178 = (_union_14)0x450b339;
    il2cpp_runtime_helper_023445d0(&MethodInfo_NameEffectController_AddComponent_NameEffectController);
    _Stack_178 = (_union_14)0x450b345;
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameFontCatalog);
    g_data_057aed5a = '\x01';
    _Var13 = extraout_RDX_03;
  }
  _Stack_178 = (_union_14)0x450b357;
  pTVar27 = (TMPro_TMP_Text_c *)in_RCX;
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ResetPlainVisuals
            (_Var15.genericMethod,(System_String_o *)in_RCX,_Var13.genericMethod);
  _Stack_178 = (_union_14)0x450b35f;
  pTVar16 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                      (_Var15.genericMethod,(MethodInfo *)pTVar27);
  if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
    _Stack_178 = (_union_14)0x450b37a;
    il2cpp_runtime_helper_02337ed0();
  }
  _Stack_178 = (_union_14)0x450b387;
  PatreonEffects_NameFontCatalog__Apply(pTVar16,(System_String_o *)in_RCX,(MethodInfo *)0x0);
  _Stack_178 = (_union_14)0x450b38f;
  _Var13 = _Var15;
  __this_00.genericMethod =
       Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(_Var15.genericMethod,(MethodInfo *)in_RCX)
  ;
  if (__this_00.genericMethod == (void *)0x0) {
label_0450b444:
    _Stack_178 = (_union_14)0x450b449;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    in_RCX = (System_String_o **)0x0;
    _Stack_178 = (_union_14)0x450b3a2;
    pUVar12 = UnityEngine_Component__get_gameObject(__this_00.genericMethod,(MethodInfo *)0x0);
    _Var13 = __this_00;
    if (pUVar12 == (UnityEngine_GameObject_o *)0x0) goto label_0450b444;
    _Stack_178 = (_union_14)0x450b3bd;
    pIVar22 = UnityEngine_GameObject__AddComponent_object_(pUVar12,MethodInfo_NameEffectController_AddComponent_NameEffectController);
    *(Il2CppObject **)((long)_Var15.genericMethod + 0x28) = pIVar22;
    _Var15.genericMethod = _Var15.genericMethod + 0x28;
    _Stack_178 = (_union_14)0x450b3d0;
    il2cpp_runtime_helper_022b4080(_Var15.genericMethod);
    in_RCX = (System_String_o **)0x0;
    _Stack_178 = (_union_14)0x450b3da;
    _Var13 = _Var31;
    settings = PatreonEffects_NameEffectPresets__GetPreset(uVar7,(MethodInfo *)0x0);
    if (extraout_RDX_02.genericMethod == (void *)0x0) goto label_0450b444;
    if (*(long *)((long)extraout_RDX_02.genericMethod + 0x18) == 0) {
label_0450b42a:
      _Var13.genericMethod = (void *)0x0;
      if (*(PatreonEffects_NameEffectController_o **)_Var15.genericMethod !=
          (PatreonEffects_NameEffectController_o *)0x0) {
        PatreonEffects_NameEffectController__Apply
                  (*(PatreonEffects_NameEffectController_o **)_Var15.genericMethod,settings,(MethodInfo *)0x0)
        ;
        return extraout_RAX_01;
      }
      goto label_0450b444;
    }
    if ((int)*(long *)((long)extraout_RDX_02.genericMethod + 0x18) != 0) {
      if (settings == (PatreonEffects_NameEffectSettings_o *)0x0) goto label_0450b444;
      uVar2 = *(undefined8 *)((long)extraout_RDX_02.genericMethod + 0x20);
      uVar5 = *(undefined8 *)((long)extraout_RDX_02.genericMethod + 0x28);
      (settings->fields).gradientA.fields.r = (float)(int)uVar2;
      (settings->fields).gradientA.fields.g = (float)(int)((ulong)uVar2 >> 0x20);
      (settings->fields).gradientA.fields.b = (float)(int)uVar5;
      (settings->fields).gradientA.fields.a = (float)(int)((ulong)uVar5 >> 0x20);
      if (1 < *(int *)((long)extraout_RDX_02.genericMethod + 0x18)) {
        uVar2 = *(undefined8 *)((long)extraout_RDX_02.genericMethod + 0x30);
        uVar5 = *(undefined8 *)((long)extraout_RDX_02.genericMethod + 0x38);
        (settings->fields).gradientB.fields.r = (float)(int)uVar2;
        (settings->fields).gradientB.fields.g = (float)(int)((ulong)uVar2 >> 0x20);
        (settings->fields).gradientB.fields.b = (float)(int)uVar5;
        (settings->fields).gradientB.fields.a = (float)(int)((ulong)uVar5 >> 0x20);
        if (2 < *(int *)((long)extraout_RDX_02.genericMethod + 0x18)) {
          uVar2 = *(undefined8 *)((long)extraout_RDX_02.genericMethod + 0x40);
          uVar5 = *(undefined8 *)((long)extraout_RDX_02.genericMethod + 0x48);
          (settings->fields).gradientC.fields.r = (float)(int)uVar2;
          (settings->fields).gradientC.fields.g = (float)(int)((ulong)uVar2 >> 0x20);
          (settings->fields).gradientC.fields.b = (float)(int)uVar5;
          (settings->fields).gradientC.fields.a = (float)(int)((ulong)uVar5 >> 0x20);
          if (3 < *(int *)((long)extraout_RDX_02.genericMethod + 0x18)) {
            uVar2 = *(undefined8 *)((long)extraout_RDX_02.genericMethod + 0x50);
            uVar5 = *(undefined8 *)((long)extraout_RDX_02.genericMethod + 0x58);
            (settings->fields).gradientD.fields.r = (float)(int)uVar2;
            (settings->fields).gradientD.fields.g = (float)(int)((ulong)uVar2 >> 0x20);
            (settings->fields).gradientD.fields.b = (float)(int)uVar5;
            (settings->fields).gradientD.fields.a = (float)(int)((ulong)uVar5 >> 0x20);
          }
        }
      }
      goto label_0450b42a;
    }
  }
  _Stack_178 = (_union_14)0x450b44e;
  il2cpp_runtime_helper_022b2ca0();
  p_Var24 = &_Stack_188;
  _Stack_188 = _Var15;
  _Stack_180 = extraout_RDX_02;
  _Stack_178 = _Var31;
  if (g_data_057aed50 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterStyleChoicePreview);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed50 = '\x01';
  }
  p_Var33 = &TypeInfo_AottgCharacterStyleChoicePreview;
  if (*(int *)((long)TypeInfo_AottgCharacterStyleChoicePreview.genericMethod + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  _Var15.genericMethod =
       Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__Preview
                 (_Var13.genericMethod,(MethodInfo *)in_RCX);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar26 = (MethodInfo *)0x0;
  bVar6 = UnityEngine_Object__op_Equality(_Var15.genericMethod,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)CONCAT44(extraout_var_02,bVar6);
  }
  if (*(int *)((long)TypeInfo_AottgCharacterStyleChoicePreview.genericMethod + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  _Var31 = _Var13;
  Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__ApplyDarkSurface(_Var13.genericMethod,pMVar26);
  if (_Var13.genericMethod != (void *)0x0) {
    pMVar26 = (MethodInfo *)(ulong)*(byte *)((long)_Var13.genericMethod + 0x3c);
    _Var31 = _Var13;
    Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__SetFeedback
              (_Var13.genericMethod,(uint)*(byte *)((long)_Var13.genericMethod + 0x3c),method_00);
    if (*(char *)((long)_Var13.genericMethod + 0x3c) == '\0') {
      if (_Var15.genericMethod != (void *)0x0) {
        Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureDisabled(_Var15.genericMethod,pMVar26);
        return extraout_RAX_02;
      }
    }
    else if (_Var15.genericMethod != (void *)0x0) {
      pMVar26 = *(MethodInfo **)((long)_Var13.genericMethod + 0x30);
      pMVar23 = extraout_RDX_04;
      _Var13 = _Stack_188;
      p_Var24 = &_Stack_170;
      _Var31.genericMethod = _Var15.genericMethod;
      _Var15 = _Stack_180;
      p_Var33 = (_union_14 *)_Stack_178;
      goto Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureFont;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar23 = extraout_RDX_05;
Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureFont:
  *(_union_14 **)((long)p_Var24 + -8) = p_Var33;
  *(_union_14 *)((long)p_Var24 + -0x10) = _Var15;
  *(_union_14 *)((long)p_Var24 + -0x18) = _Var13;
  if (g_data_057aed57 == '\0') {
    *(undefined8 *)((long)p_Var24 + -0x20) = 0x450b550;
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameFontCatalog);
    g_data_057aed57 = '\x01';
    pMVar23 = extraout_RDX_06;
  }
  *(undefined8 *)((long)p_Var24 + -0x20) = 0x450b562;
  method_01 = pMVar26;
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ResetPlainVisuals
            (_Var31.genericMethod,(System_String_o *)pMVar26,pMVar23);
  *(undefined8 *)((long)p_Var24 + -0x20) = 0x450b56a;
  pTVar16 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(_Var31.genericMethod,method_01);
  if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
    *(undefined8 *)((long)p_Var24 + -0x20) = 0x450b585;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)p_Var24 + -0x20) = 0x450b592;
  PatreonEffects_NameFontCatalog__Apply(pTVar16,(System_String_o *)pMVar26,(MethodInfo *)0x0);
  *(undefined8 *)((long)p_Var24 + -0x20) = 0x450b59a;
  _Var15 = _Var31;
  pTVar16 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(_Var31.genericMethod,pMVar26);
  if (pTVar16 != (TMPro_TMP_Text_o *)0x0) {
    pMVar26 = (pTVar16->klass->vtable)._23_set_color.method;
    vtableDispatch = (pTVar16->klass->vtable)._23_set_color.methodPtr;
    *(undefined8 *)((long)p_Var24 + -0x20) = 0x450b5bc;
    (*vtableDispatch)(0x3f800000,0x3f800000,pTVar16);
    *(undefined8 *)((long)p_Var24 + -0x20) = 0x450b5c4;
    pTVar16 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(_Var31.genericMethod,pMVar26);
    _Var15.genericMethod = (void *)0x0;
    *(undefined8 *)((long)p_Var24 + -0x20) = 0x450b5d8;
    uVar7 = il2cpp_runtime_helper_03b428b0(0x3f800000,0x3f800000);
    if (pTVar16 != (TMPro_TMP_Text_o *)0x0) {
      value_00.r = '\0';
      value_00.g = '\0';
      value_00.b = '\0';
      value_00.a = '\0';
      value_00.rgba = uVar7;
      *(undefined8 *)((long)p_Var24 + -0x20) = 0x450b5e9;
      TMPro_TMP_Text__set_faceColor(pTVar16,(UnityEngine_Color32_o)value_00,(MethodInfo *)0x0);
      *(undefined8 *)((long)p_Var24 + -0x20) = 0x450b5f1;
      pTVar16 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                          (_Var31.genericMethod,(MethodInfo *)value_00);
      _Var15 = _Var31;
      if (pTVar16 != (TMPro_TMP_Text_o *)0x0) {
        vtableDispatch = (pTVar16->klass->vtable)._106_ForceMeshUpdate.methodPtr;
        pGVar11 = (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)
                  (*vtableDispatch)
                            (pTVar16,0,0,(pTVar16->klass->vtable)._106_ForceMeshUpdate.method,
                             vtableDispatch);
        return pGVar11;
      }
    }
  }
  *(undefined8 *)((long)p_Var24 + -0x20) = 0x450b61b;
  il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)((long)p_Var24 + -0x30) = 0;
  *(undefined8 *)((long)p_Var24 + -0x28) = 0;
  *(undefined8 *)((long)p_Var24 + -0x38) = 0x450b635;
  bVar6 = UnityEngine_ColorUtility__TryParseHtmlString
                    (_Var15.genericMethod,(UnityEngine_Color_o *)((long)p_Var24 + -0x30),(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)CONCAT44(extraout_var_03,bVar6);
  }
  return (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)CONCAT44(extraout_var_03,bVar6);
}


// Gisketch.Aottg2UI.Game.AottgCharacterStyleChoicePreview$$SetFeedback
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__SetFeedback (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o* context, bool ownsColor, const MethodInfo* method);
// 0x450abe0

void Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__SetFeedback
               (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *context,bool_conflict ownsColor
               ,MethodInfo *method)

{
  float *pfVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  UnityEngine_Object_o *x;
  System_String_o *normal;
  Il2CppMethodPointer vtableDispatch;
  Il2CppRuntimeInterfaceOffsetPair *pIVar8;
  TMPro_TMP_Text_c *pTVar9;
  System_Threading_CancellationTokenSource_o *pSVar10;
  UnityEngine_RectTransform_o *pUVar11;
  bool_conflict bVar12;
  bool_conflict bVar13;
  uint uVar14;
  undefined4 uVar15;
  int iVar16;
  uint uVar17;
  TMPro_TMP_Text_o *pTVar18;
  TMPro_TMP_Text_o *pTVar19;
  TMPro_TMP_Text_o *pTVar20;
  UnityEngine_Color_array *colors;
  VirtualInvokeData *pVVar21;
  UnityEngine_Color32_Fields UVar22;
  TMPro_TMP_Text_o *pTVar23;
  UnityEngine_GameObject_o *pUVar24;
  Il2CppObject *pIVar25;
  PatreonEffects_NameEffectSettings_o *settings;
  TMPro_TMP_Text_c *in_RCX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  undefined8 extraout_RDX_01;
  TMPro_TMP_Text_o *extraout_RDX_02;
  TMPro_TMP_Text_o *extraout_RDX_03;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  MethodInfo *pMVar26;
  TMPro_TMP_Text_o *__this;
  TMPro_TMP_Text_o **ppTVar27;
  long *unaff_RBP;
  MethodInfo *pMVar28;
  UnityEngine_Color32_o value;
  TMPro_TMP_Text_c *pTVar29;
  MethodInfo *method_01;
  UnityEngine_Color32_Fields value_00;
  long *plVar30;
  long lVar31;
  long *unaff_R12;
  float fVar32;
  undefined8 uVar33;
  float fVar34;
  float in_XMM1_Da;
  float fVar35;
  float in_XMM1_Db;
  float fVar36;
  undefined1 auVar37 [16];
  TMPro_TMP_Text_o *pTStack_128;
  TMPro_TMP_Text_o *pTStack_120;
  TMPro_TMP_Text_o *pTStack_118;
  TMPro_TMP_Text_o *pTStack_110;
  TMPro_TMP_Text_o *pTStack_108;
  MethodInfo *pMStack_100;
  TMPro_TMP_Text_o *pTStack_f8;
  TMPro_TMP_Text_o *pTStack_f0;
  undefined8 uStack_e8;
  TMPro_TMP_Text_o *pTStack_e0;
  Il2CppClass *pIStack_d8;
  UnityEngine_Color32_Fields UStack_d0;
  TMPro_TMP_Text_o *pTStack_c8;
  Il2CppMethodPointer pIStack_c0;
  Il2CppMethodPointer pIStack_b8;
  TMPro_TMP_Text_o *pTStack_a8;
  Il2CppClass *pIStack_a0;
  
  plVar30 = (long *)context;
  if (g_data_057aed52 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchDropdownItemFeedback_GetComponent_GisketchDropdo);
    plVar30 = &TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057aed52 = '\x01';
  }
  if (context != (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *)0x0) {
    x = (UnityEngine_Object_o *)(context->fields).Root;
    unaff_R12 = &TypeInfo_Object;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pTVar18 = (TMPro_TMP_Text_o *)0x0;
    bVar13 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar13 != '\0') {
      pUVar24 = (context->fields).Root;
      plVar30 = (long *)0x0;
      unaff_RBP = (long *)pTVar18;
      if (pUVar24 == (UnityEngine_GameObject_o *)0x0) goto label_0450acbe;
      pTVar18 = (TMPro_TMP_Text_o *)UnityEngine_GameObject__GetComponent_object_(pUVar24,MethodInfo_GisketchDropdownItemFeedback_GetComponent_GisketchDropdo);
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    plVar30 = (long *)pTVar18;
    bVar13 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pTVar18,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar13 == '\0') {
      return;
    }
    unaff_RBP = (long *)0x0;
    if (pTVar18 != (TMPro_TMP_Text_o *)0x0) {
      normal = (context->fields).Text;
      Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__SetLabelText
                ((Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *)pTVar18,normal,normal,
                 ownsColor & 0xffU & (uint)(byte)(context->fields).Enabled,(MethodInfo *)0x0);
      return;
    }
  }
label_0450acbe:
  il2cpp_runtime_helper_022b2c90();
  pMVar28 = extraout_RDX;
  if (g_data_057aed56 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameFontCatalog);
    il2cpp_runtime_helper_023445d0(&"Normal");
    g_data_057aed56 = '\x01';
    pMVar28 = extraout_RDX_00;
  }
  UVar22 = "Normal";
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ResetPlainVisuals
            ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)plVar30,(System_String_o *)"Normal",
             pMVar28);
  pTVar18 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                      ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)plVar30,(MethodInfo *)UVar22);
  if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  UVar22 = "Normal";
  PatreonEffects_NameFontCatalog__Apply(pTVar18,(System_String_o *)"Normal",(MethodInfo *)0x0);
  pTVar18 = (TMPro_TMP_Text_o *)plVar30;
  pTVar19 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                      ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)plVar30,(MethodInfo *)UVar22);
  if (pTVar19 != (TMPro_TMP_Text_o *)0x0) {
    in_RCX = pTVar19->klass;
    UVar22 = (UnityEngine_Color32_Fields)(in_RCX->vtable)._23_set_color.method;
    in_XMM1_Da = 0.58;
    in_XMM1_Db = 1.0;
    (*(in_RCX->vtable)._23_set_color.methodPtr)(0x3f147ae1,pTVar19);
    pTVar19 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                        ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)plVar30,(MethodInfo *)UVar22)
    ;
    pTVar18 = (TMPro_TMP_Text_o *)plVar30;
    pTVar20 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                        ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)plVar30,(MethodInfo *)UVar22)
    ;
    if (pTVar20 != (TMPro_TMP_Text_o *)0x0) {
      in_RCX = pTVar20->klass;
      UVar22 = (UnityEngine_Color32_Fields)(in_RCX->vtable)._22_get_color.method;
      (*(in_RCX->vtable)._22_get_color.methodPtr)();
      pTVar18 = (TMPro_TMP_Text_o *)0x0;
      uVar14 = il2cpp_runtime_helper_03b428b0();
      if (pTVar19 != (TMPro_TMP_Text_o *)0x0) {
        UVar22.r = '\0';
        UVar22.g = '\0';
        UVar22.b = '\0';
        UVar22.a = '\0';
        UVar22.rgba = uVar14;
        TMPro_TMP_Text__set_faceColor(pTVar19,(UnityEngine_Color32_o)UVar22,(MethodInfo *)0x0);
        pTVar19 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                            ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)plVar30,
                             (MethodInfo *)UVar22);
        pTVar18 = (TMPro_TMP_Text_o *)plVar30;
        if (pTVar19 != (TMPro_TMP_Text_o *)0x0) {
          vtableDispatch = (pTVar19->klass->vtable)._106_ForceMeshUpdate.methodPtr;
          (*vtableDispatch)
                    (pTVar19,0,0,(pTVar19->klass->vtable)._106_ForceMeshUpdate.method,vtableDispatch);
          return;
        }
      }
    }
  }
  uVar33 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed58 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color);
    g_data_057aed58 = '\x01';
  }
  pMVar28 = (MethodInfo *)0x2;
  pTVar19 = TypeInfo_Color;
  colors = (UnityEngine_Color_array *)il2cpp_runtime_helper_022b2a40();
  if (colors != (UnityEngine_Color_array *)0x0) {
    uVar14 = (uint)colors->max_length;
    in_RCX = (TMPro_TMP_Text_c *)(ulong)uVar14;
    if (uVar14 != 0) {
      colors->m_Items[0].fields.r = (float)(int)uVar33;
      colors->m_Items[0].fields.g = (float)(int)((ulong)uVar33 >> 0x20);
      colors->m_Items[0].fields.b = in_XMM1_Da;
      colors->m_Items[0].fields.a = in_XMM1_Db;
      if (uVar14 != 1) {
        colors->m_Items[1].fields.r = (float)(int)uVar33;
        colors->m_Items[1].fields.g = (float)(int)((ulong)uVar33 >> 0x20);
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
  pMVar26 = (MethodInfo *)&stack0xffffffffffffff40;
  plVar30 = (long *)pTVar19;
  pTStack_a8 = pTVar18;
  pIStack_a0 = (Il2CppClass *)unaff_R12;
  if (g_data_057aed54 == '\0') {
    pTStack_c8 = (TMPro_TMP_Text_o *)0x450aea6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterStyleChoicePreview);
    pTStack_c8 = (TMPro_TMP_Text_o *)0x450aeb2;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color);
    pTStack_c8 = (TMPro_TMP_Text_o *)0x450aebe;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ICollection_string);
    plVar30 = &TypeInfo_IList_string;
    pTStack_c8 = (TMPro_TMP_Text_o *)0x450aeca;
    il2cpp_runtime_helper_023445d0();
    g_data_057aed54 = '\x01';
  }
  if (pTVar19 != (TMPro_TMP_Text_o *)0x0) {
    pTVar29 = pTVar19->klass;
    uVar3._0_1_ = (pTVar29->_2).rank;
    uVar3._1_1_ = (pTVar29->_2).minimumAlignment;
    if ((ulong)uVar3 != 0) {
      pIVar8 = (pTVar29->_1).interfaceOffsets;
      lVar31 = 0;
      do {
        if (*(long *)((long)&pIVar8->interfaceType + lVar31) == TypeInfo_ICollection_string) {
          pVVar21 = &(pTVar29->vtable)._0_Equals + *(int *)((long)&pIVar8->offset + lVar31);
          goto label_0450af31;
        }
        lVar31 = lVar31 + 0x10;
      } while ((ulong)uVar3 << 4 != lVar31);
    }
    pTStack_c8 = (TMPro_TMP_Text_o *)0x450af19;
    pVVar21 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pTVar19,TypeInfo_ICollection_string,0);
label_0450af31:
    pTStack_c8 = (TMPro_TMP_Text_o *)0x450af3a;
    uVar15 = (*pVVar21->methodPtr)(pTVar19,pVVar21->method);
    pTStack_c8 = (TMPro_TMP_Text_o *)0x450af4b;
    UVar22 = (UnityEngine_Color32_Fields)il2cpp_runtime_helper_022b2a40(TypeInfo_Color,uVar15);
    if (UVar22 != (UnityEngine_Color32_Fields)0x0) {
      pTVar29 = (TMPro_TMP_Text_c *)0x0;
      unaff_RBP = &TypeInfo_AottgCharacterStyleChoicePreview;
      do {
        pTVar9 = pTVar19->klass;
        uVar4._0_1_ = (pTVar9->_2).rank;
        uVar4._1_1_ = (pTVar9->_2).minimumAlignment;
        if ((ulong)uVar4 != 0) {
          pIVar8 = (pTVar9->_1).interfaceOffsets;
          lVar31 = 0;
          do {
            if (*(long *)((long)&pIVar8->interfaceType + lVar31) == TypeInfo_ICollection_string) {
              pVVar21 = &(pTVar9->vtable)._0_Equals + *(int *)((long)&pIVar8->offset + lVar31);
              goto label_0450aff3;
            }
            lVar31 = lVar31 + 0x10;
          } while ((ulong)uVar4 << 4 != lVar31);
        }
        pTStack_c8 = (TMPro_TMP_Text_o *)0x450afd9;
        pVVar21 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pTVar19,TypeInfo_ICollection_string,0);
label_0450aff3:
        pTStack_c8 = (TMPro_TMP_Text_o *)0x450affc;
        iVar16 = (*pVVar21->methodPtr)(pTVar19,pVVar21->method);
        if ((long)iVar16 <= (long)pTVar29) {
          return;
        }
        pTVar9 = pTVar19->klass;
        uVar5._0_1_ = (pTVar9->_2).rank;
        uVar5._1_1_ = (pTVar9->_2).minimumAlignment;
        if ((ulong)uVar5 != 0) {
          pIVar8 = (pTVar9->_1).interfaceOffsets;
          lVar31 = 0;
          do {
            if (*(long *)((long)&pIVar8->interfaceType + lVar31) == TypeInfo_IList_string) {
              pVVar21 = &(pTVar9->vtable)._0_Equals + *(int *)((long)&pIVar8->offset + lVar31);
              goto label_0450b063;
            }
            lVar31 = lVar31 + 0x10;
          } while ((ulong)uVar5 << 4 != lVar31);
        }
        pTStack_c8 = (TMPro_TMP_Text_o *)0x450b049;
        pVVar21 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pTVar19,TypeInfo_IList_string,0);
label_0450b063:
        pTStack_c8 = (TMPro_TMP_Text_o *)0x450b06f;
        pTVar18 = (TMPro_TMP_Text_o *)
                  (*pVVar21->methodPtr)(pTVar19,(ulong)pTVar29 & 0xffffffff,pVVar21->method);
        if (*(int *)(TypeInfo_AottgCharacterStyleChoicePreview + 0xe4) == 0) {
          pTStack_c8 = (TMPro_TMP_Text_o *)0x450b084;
          il2cpp_runtime_helper_02337ed0();
        }
        pIStack_c0 = (Il2CppMethodPointer)0x0;
        pIStack_b8 = (Il2CppMethodPointer)0x0;
        pTStack_c8 = (TMPro_TMP_Text_o *)0x450b098;
        pMVar26 = (MethodInfo *)&stack0xffffffffffffff40;
        plVar30 = (long *)pTVar18;
        bVar13 = UnityEngine_ColorUtility__TryParseHtmlString
                           ((System_String_o *)pTVar18,(UnityEngine_Color_o *)&stack0xffffffffffffff40,
                            (MethodInfo *)0x0);
        in_RCX = (TMPro_TMP_Text_c *)(ulong)*(uint *)((long)UVar22 + 0x18);
        unaff_R12 = (long *)&stack0xffffffffffffff40;
        if (in_RCX <= pTVar29) goto label_0450b1e2;
        if ((char)bVar13 == '\0') {
          fVar32 = 1.0;
          fVar34 = 1.0;
          fVar35 = fVar32;
          fVar36 = fVar34;
        }
        else {
          fVar32 = SUB84(pIStack_c0,0);
          fVar34 = (float)((ulong)pIStack_c0 >> 0x20);
          fVar35 = SUB84(pIStack_b8,0);
          fVar36 = (float)((ulong)pIStack_b8 >> 0x20);
        }
        pfVar1 = (float *)((long)UVar22 + 0x20 + (long)pTVar29 * 0x10);
        *pfVar1 = fVar32;
        pfVar1[1] = fVar34;
        pfVar1[2] = fVar35;
        pfVar1[3] = fVar36;
        pTVar29 = (TMPro_TMP_Text_c *)((long)&(pTVar29->_1).image + 1);
      } while( true );
    }
    pTVar29 = pTVar19->klass;
    uVar6._0_1_ = (pTVar29->_2).rank;
    uVar6._1_1_ = (pTVar29->_2).minimumAlignment;
    if ((ulong)uVar6 != 0) {
      pIVar8 = (pTVar29->_1).interfaceOffsets;
      lVar31 = 0;
      do {
        if (*(long *)((long)&pIVar8->interfaceType + lVar31) == TypeInfo_ICollection_string) {
          pVVar21 = &(pTVar29->vtable)._0_Equals + *(int *)((long)&pIVar8->offset + lVar31);
          goto label_0450b121;
        }
        lVar31 = lVar31 + 0x10;
      } while ((ulong)uVar6 << 4 != lVar31);
    }
    pTStack_c8 = (TMPro_TMP_Text_o *)0x450b109;
    pVVar21 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pTVar19,TypeInfo_ICollection_string,0);
label_0450b121:
    pTStack_c8 = (TMPro_TMP_Text_o *)0x450b12a;
    iVar16 = (*pVVar21->methodPtr)(pTVar19,pVVar21->method);
    if (iVar16 < 1) {
      return;
    }
    pTVar29 = pTVar19->klass;
    uVar7._0_1_ = (pTVar29->_2).rank;
    uVar7._1_1_ = (pTVar29->_2).minimumAlignment;
    if ((ulong)uVar7 != 0) {
      pIVar8 = (pTVar29->_1).interfaceOffsets;
      lVar31 = 0;
      do {
        if (*(long *)((long)&pIVar8->interfaceType + lVar31) == TypeInfo_IList_string) {
          in_RCX = (TMPro_TMP_Text_c *)
                   (&(pTVar29->vtable)._0_Equals + *(int *)((long)&pIVar8->offset + lVar31));
          goto label_0450b1a3;
        }
        lVar31 = lVar31 + 0x10;
      } while ((ulong)uVar7 << 4 != lVar31);
    }
    pTStack_c8 = (TMPro_TMP_Text_o *)0x450b179;
    in_RCX = (TMPro_TMP_Text_c *)il2cpp_runtime_helper_02300d20(pTVar19,TypeInfo_IList_string,0);
label_0450b1a3:
    pTStack_c8 = (TMPro_TMP_Text_o *)0x450b1ae;
    pTVar18 = (TMPro_TMP_Text_o *)(*(in_RCX->_1).image)(pTVar19,0,(in_RCX->_1).gc_desc);
    if (*(int *)(TypeInfo_AottgCharacterStyleChoicePreview + 0xe4) == 0) {
      pTStack_c8 = (TMPro_TMP_Text_o *)0x450b1c9;
      il2cpp_runtime_helper_02337ed0();
    }
    pIStack_c0 = (Il2CppMethodPointer)0x0;
    pIStack_b8 = (Il2CppMethodPointer)0x0;
    pTStack_c8 = (TMPro_TMP_Text_o *)0x450b1dd;
    plVar30 = (long *)pTVar18;
    UnityEngine_ColorUtility__TryParseHtmlString
              ((System_String_o *)pTVar18,(UnityEngine_Color_o *)&stack0xffffffffffffff40,(MethodInfo *)0x0);
    pTStack_c8 = (TMPro_TMP_Text_o *)0x450b1e2;
    il2cpp_runtime_helper_022b2c90();
label_0450b1e2:
    pTStack_c8 = (TMPro_TMP_Text_o *)0x450b1e7;
    il2cpp_runtime_helper_022b2ca0();
    pMVar28 = pMVar26;
  }
  pTStack_c8 = (TMPro_TMP_Text_o *)0x450b1ec;
  auVar37 = il2cpp_runtime_helper_022b2c90();
  pTVar20 = auVar37._8_8_;
  uStack_e8 = auVar37._0_8_;
  pTStack_e0 = pTVar18;
  pIStack_d8 = (Il2CppClass *)unaff_R12;
  UStack_d0 = UVar22;
  pTStack_c8 = pTVar19;
  if (g_data_057aed59 == '\0') {
    pTStack_f0 = (TMPro_TMP_Text_o *)0x450b216;
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameFontCatalog);
    auVar37._8_8_ = extraout_RDX_01;
    auVar37._0_8_ = uStack_e8;
    g_data_057aed59 = '\x01';
  }
  uStack_e8 = auVar37._0_8_;
  pTStack_f0 = (TMPro_TMP_Text_o *)0x450b228;
  pTVar18 = pTVar20;
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ResetPlainVisuals
            ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)plVar30,(System_String_o *)pTVar20,
             auVar37._8_8_);
  pTStack_f0 = (TMPro_TMP_Text_o *)0x450b230;
  pTVar18 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                      ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)plVar30,(MethodInfo *)pTVar18);
  if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
    pTStack_f0 = (TMPro_TMP_Text_o *)0x450b24b;
    il2cpp_runtime_helper_02337ed0();
  }
  pTStack_f0 = (TMPro_TMP_Text_o *)0x450b258;
  pTVar19 = pTVar20;
  PatreonEffects_NameFontCatalog__Apply(pTVar18,(System_String_o *)pTVar20,(MethodInfo *)0x0);
  pTStack_f0 = (TMPro_TMP_Text_o *)0x450b260;
  __this = (TMPro_TMP_Text_o *)plVar30;
  pTVar23 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                      ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)plVar30,(MethodInfo *)pTVar19);
  uVar14 = (uint)pTVar19;
  if (pTVar23 != (TMPro_TMP_Text_o *)0x0) {
    in_RCX = pTVar23->klass;
    pMVar26 = (in_RCX->vtable)._23_set_color.method;
    pTStack_f0 = (TMPro_TMP_Text_o *)0x450b286;
    (*(in_RCX->vtable)._23_set_color.methodPtr)(0x3f800000,0x3f800000,pTVar23);
    pTStack_f0 = (TMPro_TMP_Text_o *)0x450b28e;
    pTVar20 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                        ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)plVar30,pMVar26);
    uVar14 = (uint)pMVar26;
    __this = (TMPro_TMP_Text_o *)0x0;
    pTStack_f0 = (TMPro_TMP_Text_o *)0x450b2a2;
    uVar17 = il2cpp_runtime_helper_03b428b0(0x3f800000,0x3f800000);
    if (pTVar20 != (TMPro_TMP_Text_o *)0x0) {
      value.fields.r = '\0';
      value.fields.g = '\0';
      value.fields.b = '\0';
      value.fields.a = '\0';
      value.fields.rgba = uVar17;
      pTStack_f0 = (TMPro_TMP_Text_o *)0x450b2b3;
      TMPro_TMP_Text__set_faceColor(pTVar20,value,(MethodInfo *)0x0);
      *(MethodInfo **)&(((TMPro_TMP_Text_o *)plVar30)->fields).m_Color.fields.b = pMVar28;
      pTStack_f0 = (TMPro_TMP_Text_o *)0x450b2c3;
      pMVar26 = pMVar28;
      il2cpp_runtime_helper_022b4080(&(((TMPro_TMP_Text_o *)plVar30)->fields).m_Color.fields.b);
      pTStack_f0 = (TMPro_TMP_Text_o *)0x450b2cb;
      Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__HookVertexColors
                ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)plVar30,pMVar26);
      pTStack_f0 = (TMPro_TMP_Text_o *)0x450b2d3;
      __this = (TMPro_TMP_Text_o *)plVar30;
      pTVar19 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                          ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)plVar30,pMVar26);
      uVar14 = (uint)pMVar26;
      if (pTVar19 != (TMPro_TMP_Text_o *)0x0) {
        vtableDispatch = (pTVar19->klass->vtable)._106_ForceMeshUpdate.methodPtr;
        (*vtableDispatch)
                  (pTVar19,0,0,(pTVar19->klass->vtable)._106_ForceMeshUpdate.method,vtableDispatch);
        return;
      }
    }
  }
  pTStack_f0 = (TMPro_TMP_Text_o *)0x450b303;
  il2cpp_runtime_helper_022b2c90();
  pTVar23 = (TMPro_TMP_Text_o *)(ulong)uVar14;
  pTVar19 = extraout_RDX_02;
  pTStack_110 = (TMPro_TMP_Text_o *)plVar30;
  pTStack_108 = pTVar18;
  pMStack_100 = pMVar28;
  pTStack_f8 = pTVar20;
  pTStack_f0 = (TMPro_TMP_Text_o *)unaff_RBP;
  if (g_data_057aed5a == '\0') {
    pTStack_118 = (TMPro_TMP_Text_o *)0x450b339;
    il2cpp_runtime_helper_023445d0(&MethodInfo_NameEffectController_AddComponent_NameEffectController);
    pTStack_118 = (TMPro_TMP_Text_o *)0x450b345;
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameFontCatalog);
    g_data_057aed5a = '\x01';
    pTVar19 = extraout_RDX_03;
  }
  pTStack_118 = (TMPro_TMP_Text_o *)0x450b357;
  pTVar29 = in_RCX;
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ResetPlainVisuals
            ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)__this,(System_String_o *)in_RCX,
             (MethodInfo *)pTVar19);
  pTStack_118 = (TMPro_TMP_Text_o *)0x450b35f;
  pTVar18 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                      ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)__this,(MethodInfo *)pTVar29);
  if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
    pTStack_118 = (TMPro_TMP_Text_o *)0x450b37a;
    il2cpp_runtime_helper_02337ed0();
  }
  pTStack_118 = (TMPro_TMP_Text_o *)0x450b387;
  PatreonEffects_NameFontCatalog__Apply(pTVar18,(System_String_o *)in_RCX,(MethodInfo *)0x0);
  pTStack_118 = (TMPro_TMP_Text_o *)0x450b38f;
  pTVar18 = __this;
  pTVar19 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                      ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)__this,(MethodInfo *)in_RCX);
  if (pTVar19 == (TMPro_TMP_Text_o *)0x0) {
label_0450b444:
    pTStack_118 = (TMPro_TMP_Text_o *)0x450b449;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    in_RCX = (TMPro_TMP_Text_c *)0x0;
    pTStack_118 = (TMPro_TMP_Text_o *)0x450b3a2;
    pUVar24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pTVar19,(MethodInfo *)0x0);
    pTVar18 = pTVar19;
    if (pUVar24 == (UnityEngine_GameObject_o *)0x0) goto label_0450b444;
    pTStack_118 = (TMPro_TMP_Text_o *)0x450b3bd;
    pIVar25 = UnityEngine_GameObject__AddComponent_object_(pUVar24,MethodInfo_NameEffectController_AddComponent_NameEffectController);
    *(Il2CppObject **)&(__this->fields).m_Color.fields = pIVar25;
    __this = (TMPro_TMP_Text_o *)&(__this->fields).m_Color;
    pTStack_118 = (TMPro_TMP_Text_o *)0x450b3d0;
    il2cpp_runtime_helper_022b4080(__this);
    in_RCX = (TMPro_TMP_Text_c *)0x0;
    pTStack_118 = (TMPro_TMP_Text_o *)0x450b3da;
    pTVar18 = pTVar23;
    settings = PatreonEffects_NameEffectPresets__GetPreset(uVar14,(MethodInfo *)0x0);
    if (extraout_RDX_02 == (TMPro_TMP_Text_o *)0x0) goto label_0450b444;
    pSVar10 = (extraout_RDX_02->fields).m_CancellationTokenSource;
    if (pSVar10 == (System_Threading_CancellationTokenSource_o *)0x0) {
label_0450b42a:
      pTVar18 = (TMPro_TMP_Text_o *)0x0;
      if (*(PatreonEffects_NameEffectController_o **)&((UnityEngine_Color_o *)__this)->fields !=
          (PatreonEffects_NameEffectController_o *)0x0) {
        PatreonEffects_NameEffectController__Apply
                  (*(PatreonEffects_NameEffectController_o **)&((UnityEngine_Color_o *)__this)->fields,
                   settings,(MethodInfo *)0x0);
        return;
      }
      goto label_0450b444;
    }
    if ((int)pSVar10 != 0) {
      if (settings == (PatreonEffects_NameEffectSettings_o *)0x0) goto label_0450b444;
      fVar32 = (extraout_RDX_02->fields).m_Color.fields.r;
      fVar34 = (extraout_RDX_02->fields).m_Color.fields.g;
      *(UnityEngine_Material_o **)&(settings->fields).gradientA.fields = (extraout_RDX_02->fields).m_Material;
      (settings->fields).gradientA.fields.b = fVar32;
      (settings->fields).gradientA.fields.a = fVar34;
      if (1 < *(int *)&(extraout_RDX_02->fields).m_CancellationTokenSource) {
        fVar32 = (extraout_RDX_02->fields).m_Color.fields.a;
        bVar13 = (extraout_RDX_02->fields).m_SkipLayoutUpdate;
        bVar12 = (extraout_RDX_02->fields).m_SkipMaterialUpdate;
        (settings->fields).gradientB.fields.r = (extraout_RDX_02->fields).m_Color.fields.b;
        (settings->fields).gradientB.fields.g = fVar32;
        (settings->fields).gradientB.fields.b = (float)bVar13;
        (settings->fields).gradientB.fields.a = (float)bVar12;
        if (2 < *(int *)&(extraout_RDX_02->fields).m_CancellationTokenSource) {
          bVar13 = (extraout_RDX_02->fields).m_RaycastTargetCache;
          fVar32 = (extraout_RDX_02->fields).m_RaycastPadding.fields.x;
          fVar34 = (extraout_RDX_02->fields).m_RaycastPadding.fields.y;
          (settings->fields).gradientC.fields.r = (float)(extraout_RDX_02->fields).m_RaycastTarget;
          (settings->fields).gradientC.fields.g = (float)bVar13;
          (settings->fields).gradientC.fields.b = fVar32;
          (settings->fields).gradientC.fields.a = fVar34;
          if (3 < *(int *)&(extraout_RDX_02->fields).m_CancellationTokenSource) {
            fVar32 = (extraout_RDX_02->fields).m_RaycastPadding.fields.w;
            pUVar11 = (extraout_RDX_02->fields).m_RectTransform;
            (settings->fields).gradientD.fields.r = (extraout_RDX_02->fields).m_RaycastPadding.fields.z;
            (settings->fields).gradientD.fields.g = fVar32;
            *(UnityEngine_RectTransform_o **)&(settings->fields).gradientD.fields.b = pUVar11;
          }
        }
      }
      goto label_0450b42a;
    }
  }
  pTStack_118 = (TMPro_TMP_Text_o *)0x450b44e;
  il2cpp_runtime_helper_022b2ca0();
  ppTVar27 = &pTStack_128;
  pTStack_128 = __this;
  pTStack_120 = extraout_RDX_02;
  pTStack_118 = pTVar23;
  if (g_data_057aed50 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterStyleChoicePreview);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed50 = '\x01';
  }
  plVar30 = &TypeInfo_AottgCharacterStyleChoicePreview;
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
  pMVar28 = (MethodInfo *)0x0;
  bVar13 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pTVar19,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_AottgCharacterStyleChoicePreview + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pTVar20 = pTVar18;
  Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__ApplyDarkSurface
            ((Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *)pTVar18,pMVar28);
  if (pTVar18 != (TMPro_TMP_Text_o *)0x0) {
    bVar2 = (byte)(pTVar18->fields).m_SkipMaterialUpdate;
    pMVar28 = (MethodInfo *)(ulong)bVar2;
    pTVar20 = pTVar18;
    Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__SetFeedback
              ((Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *)pTVar18,(uint)bVar2,method_00)
    ;
    if ((char)(pTVar18->fields).m_SkipMaterialUpdate == '\0') {
      if (pTVar19 != (TMPro_TMP_Text_o *)0x0) {
        Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureDisabled
                  ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pTVar19,pMVar28);
        return;
      }
    }
    else if (pTVar19 != (TMPro_TMP_Text_o *)0x0) {
      pMVar28 = *(MethodInfo **)&(pTVar18->fields).m_Color.fields.b;
      pMVar26 = extraout_RDX_04;
      pTVar18 = pTStack_128;
      ppTVar27 = &pTStack_110;
      pTVar20 = pTVar19;
      pTVar19 = pTStack_120;
      plVar30 = (long *)pTStack_118;
      goto Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureFont;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar26 = extraout_RDX_05;
Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureFont:
  *(long **)((long)ppTVar27 + -8) = plVar30;
  *(TMPro_TMP_Text_o **)((long)ppTVar27 + -0x10) = pTVar19;
  *(TMPro_TMP_Text_o **)((long)ppTVar27 + -0x18) = pTVar18;
  if (g_data_057aed57 == '\0') {
    *(undefined8 *)((long)ppTVar27 + -0x20) = 0x450b550;
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameFontCatalog);
    g_data_057aed57 = '\x01';
    pMVar26 = extraout_RDX_06;
  }
  *(undefined8 *)((long)ppTVar27 + -0x20) = 0x450b562;
  method_01 = pMVar28;
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ResetPlainVisuals
            ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pTVar20,(System_String_o *)pMVar28,
             pMVar26);
  *(undefined8 *)((long)ppTVar27 + -0x20) = 0x450b56a;
  pTVar18 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                      ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pTVar20,method_01);
  if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
    *(undefined8 *)((long)ppTVar27 + -0x20) = 0x450b585;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)ppTVar27 + -0x20) = 0x450b592;
  PatreonEffects_NameFontCatalog__Apply(pTVar18,(System_String_o *)pMVar28,(MethodInfo *)0x0);
  *(undefined8 *)((long)ppTVar27 + -0x20) = 0x450b59a;
  pTVar18 = pTVar20;
  pTVar19 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                      ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pTVar20,pMVar28);
  if (pTVar19 != (TMPro_TMP_Text_o *)0x0) {
    pMVar28 = (pTVar19->klass->vtable)._23_set_color.method;
    vtableDispatch = (pTVar19->klass->vtable)._23_set_color.methodPtr;
    *(undefined8 *)((long)ppTVar27 + -0x20) = 0x450b5bc;
    (*vtableDispatch)(0x3f800000,0x3f800000,pTVar19);
    *(undefined8 *)((long)ppTVar27 + -0x20) = 0x450b5c4;
    pTVar19 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                        ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pTVar20,pMVar28);
    pTVar18 = (TMPro_TMP_Text_o *)0x0;
    *(undefined8 *)((long)ppTVar27 + -0x20) = 0x450b5d8;
    uVar14 = il2cpp_runtime_helper_03b428b0(0x3f800000,0x3f800000);
    if (pTVar19 != (TMPro_TMP_Text_o *)0x0) {
      value_00.r = '\0';
      value_00.g = '\0';
      value_00.b = '\0';
      value_00.a = '\0';
      value_00.rgba = uVar14;
      *(undefined8 *)((long)ppTVar27 + -0x20) = 0x450b5e9;
      TMPro_TMP_Text__set_faceColor(pTVar19,(UnityEngine_Color32_o)value_00,(MethodInfo *)0x0);
      *(undefined8 *)((long)ppTVar27 + -0x20) = 0x450b5f1;
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
  *(undefined8 *)((long)ppTVar27 + -0x20) = 0x450b61b;
  il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)((long)ppTVar27 + -0x30) = 0;
  *(undefined8 *)((long)ppTVar27 + -0x28) = 0;
  *(undefined8 *)((long)ppTVar27 + -0x38) = 0x450b635;
  bVar13 = UnityEngine_ColorUtility__TryParseHtmlString
                     ((System_String_o *)pTVar18,(UnityEngine_Color_o *)((long)ppTVar27 + -0x30),
                      (MethodInfo *)0x0);
  if ((char)bVar13 != '\0') {
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterStyleChoicePreview$$ApplyDarkSurface
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__ApplyDarkSurface (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o* context, const MethodInfo* method);
// 0x450a930

void Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__ApplyDarkSurface
               (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *context,MethodInfo *method)

{
  float *pfVar1;
  undefined8 uVar2;
  TMPro_TextMeshProUGUI_o *__this;
  Il2CppMethodPointer vtableDispatch;
  long lVar3;
  undefined8 uVar4;
  bool_conflict bVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  UnityEngine_Object_o *x;
  System_String_o *pSVar10;
  _union_14 _Var11;
  Il2CppClass *text;
  TMPro_TMP_Text_o *pTVar12;
  UnityEngine_Color_array *colors;
  undefined8 *puVar13;
  UnityEngine_Color32_Fields UVar14;
  TMPro_TMP_Text_o *pTVar15;
  TMPro_TMP_Text_o *pTVar16;
  TMPro_TMP_Text_o *pTVar17;
  _union_14 __this_00;
  UnityEngine_GameObject_o *pUVar18;
  Il2CppObject *pIVar19;
  PatreonEffects_NameEffectSettings_o *settings;
  System_String_o **in_RCX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  undefined8 extraout_RDX_01;
  _union_14 extraout_RDX_02;
  _union_14 extraout_RDX_03;
  _union_14 _Var20;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  MethodInfo *pMVar21;
  UnityEngine_Object_o *unaff_RBX;
  _union_14 *p_Var22;
  _union_14 *unaff_RBP;
  MethodInfo *pMVar23;
  UnityEngine_Color32_o value;
  TMPro_TMP_Text_c *pTVar24;
  MethodInfo *method_01;
  UnityEngine_Color32_Fields value_00;
  System_String_o **ppSVar25;
  long *plVar26;
  long lVar27;
  _union_14 _Var28;
  long *unaff_R12;
  MethodInfo_24E7B40 **unaff_R13;
  _union_14 unaff_R15;
  _union_14 *p_Var29;
  float fVar30;
  float fVar31;
  float in_XMM1_Da;
  float fVar32;
  float in_XMM1_Db;
  float fVar33;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined1 auVar34 [16];
  _union_14 _Stack_160;
  _union_14 _Stack_158;
  _union_14 _Stack_150;
  _union_14 _Stack_148;
  TMPro_TMP_Text_o *pTStack_140;
  MethodInfo *pMStack_138;
  TMPro_TMP_Text_o *pTStack_130;
  _union_14 _Stack_128;
  undefined8 uStack_120;
  _union_14 _Stack_118;
  Il2CppClass *pIStack_110;
  UnityEngine_Color32_Fields UStack_108;
  _union_14 _Stack_100;
  undefined1 auStack_f8 [48];
  UnityEngine_Color32_Fields UStack_c8;
  UnityEngine_Color32_Fields *pUStack_c0;
  _union_14 _Stack_b8;
  float fStack_b0;
  float fStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  Il2CppClass *pIStack_a0;
  _union_14 _Stack_88;
  Il2CppClass *pIStack_80;
  UnityEngine_Object_o *pUStack_78;
  void *pvStack_70;
  _union_14 _Stack_68;
  UnityEngine_Object_o *pUStack_60;
  Il2CppClass *pIStack_58;
  Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *pGStack_50;
  _union_14 _Stack_48;
  _union_14 _Stack_40;
  
  ppSVar25 = (System_String_o **)context;
  if (g_data_057aed53 == '\0') {
    _Stack_40 = (_union_14)0x450a953;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterStyleChoicePreview);
    _Stack_40 = (_union_14)0x450a95f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponentInParent_Image);
    _Stack_40 = (_union_14)0x450a96b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    _Stack_40 = (_union_14)0x450a977;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    _Stack_40 = (_union_14)0x450a983;
    il2cpp_runtime_helper_023445d0(&"-popover");
    ppSVar25 = &"-options-scroll";
    _Stack_40 = (_union_14)0x450a98f;
    il2cpp_runtime_helper_023445d0();
    g_data_057aed53 = '\x01';
  }
  if (context != (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *)0x0) {
    if (*(char *)((long)&(context->fields).Enabled + 2) == '\0') {
      unaff_RBX = (UnityEngine_Object_o *)(context->fields).Root;
      unaff_R12 = &TypeInfo_Object;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        _Stack_40 = (_union_14)0x450aa6d;
        il2cpp_runtime_helper_02337ed0();
      }
      unaff_R15.genericMethod = (UnityEngine_Transform_o *)0x0;
      method = (MethodInfo *)0x0;
      _Stack_40 = (_union_14)0x450aa7c;
      bVar5 = UnityEngine_Object__op_Inequality(unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        pUVar18 = (context->fields).Root;
        ppSVar25 = (System_String_o **)(UnityEngine_Transform_o *)0x0;
        if (pUVar18 == (UnityEngine_GameObject_o *)0x0) goto label_0450abd7;
        _Stack_40 = (_union_14)0x450aa94;
        unaff_R15.genericMethod = UnityEngine_GameObject__get_transform(pUVar18,(MethodInfo *)0x0);
      }
      unaff_R13 = &MethodInfo_Image_GetComponent_Image;
      unaff_RBP = &TypeInfo_AottgCharacterStyleChoicePreview;
      iVar8 = *(int *)(TypeInfo_Object + 0xe4);
      while( true ) {
        if (iVar8 == 0) {
          _Stack_40 = (_union_14)0x450aadf;
          il2cpp_runtime_helper_02337ed0();
        }
        method = (MethodInfo *)0x0;
        _Stack_40 = (_union_14)0x450aaeb;
        ppSVar25 = (System_String_o **)unaff_R15;
        bVar5 = UnityEngine_Object__op_Inequality
                          (unaff_R15.genericMethod,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
          return;
        }
        context = (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *)&"-popover";
        if (unaff_R15.genericMethod == (UnityEngine_Transform_o *)0x0) break;
        method = (MethodInfo *)0x0;
        _Stack_40 = (_union_14)0x450ab06;
        ppSVar25 = (System_String_o **)unaff_R15;
        pSVar10 = UnityEngine_Object__get_name(unaff_R15.genericMethod,(MethodInfo *)0x0);
        if (pSVar10 == (System_String_o *)0x0) break;
        _Stack_40 = (_union_14)0x450ab1c;
        bVar5 = System_String__EndsWith(pSVar10,"-popover",(MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
          method = (MethodInfo *)0x0;
          _Stack_40 = (_union_14)0x450ab2a;
          ppSVar25 = (System_String_o **)unaff_R15;
          pSVar10 = UnityEngine_Object__get_name(unaff_R15.genericMethod,(MethodInfo *)0x0);
          if (pSVar10 == (System_String_o *)0x0) break;
          in_RCX = &"-options-scroll";
          _Stack_40 = (_union_14)0x450ab47;
          bVar5 = System_String__EndsWith(pSVar10,"-options-scroll",(MethodInfo *)0x0);
          if ((char)bVar5 != '\0') goto label_0450ab4f;
        }
        else {
label_0450ab4f:
          _Stack_40 = (_union_14)0x450ab5b;
          unaff_RBX = (UnityEngine_Object_o *)
                      UnityEngine_Component__GetComponent_object_(unaff_R15.genericMethod,MethodInfo_Image_GetComponent_Image);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            _Stack_40 = (_union_14)0x450ab70;
            il2cpp_runtime_helper_02337ed0();
          }
          method = (MethodInfo *)0x0;
          _Stack_40 = (_union_14)0x450ab7c;
          bVar5 = UnityEngine_Object__op_Inequality(unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            if (*(int *)((long)TypeInfo_AottgCharacterStyleChoicePreview.genericMethod + 0xe4) == 0) {
              _Stack_40 = (_union_14)0x450ab96;
              il2cpp_runtime_helper_02337ed0();
            }
            ppSVar25 = (System_String_o **)TypeInfo_AottgCharacterStyleChoicePreview;
            if (unaff_RBX == (UnityEngine_Object_o *)0x0) break;
            uVar2 = *(undefined8 *)(*(long *)((long)TypeInfo_AottgCharacterStyleChoicePreview.genericMethod + 0xb8) + 0x18);
            in_XMM1_Da = (float)uVar2;
            in_XMM1_Db = (float)((ulong)uVar2 >> 0x20);
            in_XMM1_Dc._0_2_ = 0;
            in_XMM1_Dc._2_1_ = '\0';
            in_XMM1_Dc._3_1_ = '\0';
            in_XMM1_Dd = 0;
            _Stack_40 = (_union_14)0x450abc3;
            (**(code **)&unaff_RBX->klass[1]._2.naturalAligment)
                      ((int)*(undefined8 *)(*(long *)((long)TypeInfo_AottgCharacterStyleChoicePreview.genericMethod + 0xb8) + 0x10),
                       unaff_RBX);
          }
        }
        _Stack_40 = (_union_14)0x450aaca;
        unaff_R15.genericMethod = UnityEngine_Transform__get_parent(unaff_R15.genericMethod,(MethodInfo *)0x0)
        ;
        iVar8 = *(int *)(TypeInfo_Object + 0xe4);
      }
    }
    else {
      __this = (context->fields).Label;
      ppSVar25 = (System_String_o **)(UnityEngine_Transform_o *)0x0;
      if (__this != (TMPro_TextMeshProUGUI_o *)0x0) {
        _Stack_40 = (_union_14)0x450a9c6;
        x = (UnityEngine_Object_o *)
            UnityEngine_Component__GetComponentInParent_object_
                      ((UnityEngine_Component_o *)__this,MethodInfo_Image_GetComponentInParent_Image);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          _Stack_40 = (_union_14)0x450a9e1;
          il2cpp_runtime_helper_02337ed0();
        }
        method = (MethodInfo *)0x0;
        _Stack_40 = (_union_14)0x450a9ed;
        bVar5 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
          return;
        }
        unaff_RBP = &TypeInfo_AottgCharacterStyleChoicePreview;
        if (*(int *)((long)TypeInfo_AottgCharacterStyleChoicePreview.genericMethod + 0xe4) == 0) {
          _Stack_40 = (_union_14)0x450aa0e;
          il2cpp_runtime_helper_02337ed0();
        }
        unaff_RBX = (UnityEngine_Object_o *)0x0;
        ppSVar25 = (System_String_o **)TypeInfo_AottgCharacterStyleChoicePreview;
        if (x != (UnityEngine_Object_o *)0x0) {
          (**(code **)&x->klass[1]._2.naturalAligment)
                    ((int)*(undefined8 *)(*(long *)((long)TypeInfo_AottgCharacterStyleChoicePreview.genericMethod + 0xb8) + 0x10),
                     (int)*(undefined8 *)(*(long *)((long)TypeInfo_AottgCharacterStyleChoicePreview.genericMethod + 0xb8) + 0x18),x,
                     x->klass[1].vtable._0_Equals.methodPtr);
          return;
        }
      }
    }
  }
label_0450abd7:
  _Stack_40 = (_union_14)0x450abdc;
  il2cpp_runtime_helper_022b2c90();
  plVar26 = (long *)ppSVar25;
  pUStack_60 = unaff_RBX;
  pIStack_58 = (Il2CppClass *)unaff_R12;
  pGStack_50 = context;
  _Stack_48 = unaff_R15;
  _Stack_40 = (_union_14)unaff_RBP;
  if (g_data_057aed52 == '\0') {
    _Stack_68 = (_union_14)0x450ac03;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchDropdownItemFeedback_GetComponent_GisketchDropdo);
    plVar26 = &TypeInfo_Object;
    _Stack_68 = (_union_14)0x450ac0f;
    il2cpp_runtime_helper_023445d0();
    g_data_057aed52 = '\x01';
  }
  if ((UnityEngine_Transform_o *)ppSVar25 != (UnityEngine_Transform_o *)0x0) {
    unaff_RBX = (UnityEngine_Object_o *)((UnityEngine_Transform_Fields *)((long)ppSVar25 + 0x10))->m_CachedPtr
    ;
    unaff_R12 = &TypeInfo_Object;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      _Stack_68 = (_union_14)0x450ac3c;
      il2cpp_runtime_helper_02337ed0();
    }
    _Var11.genericMethod = (void *)0x0;
    _Stack_68 = (_union_14)0x450ac4a;
    bVar5 = UnityEngine_Object__op_Inequality(unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      pUVar18 = (UnityEngine_GameObject_o *)
                ((UnityEngine_Transform_Fields *)((long)ppSVar25 + 0x10))->m_CachedPtr;
      plVar26 = (long *)0x0;
      unaff_RBP = _Var11.genericMethod;
      if (pUVar18 == (UnityEngine_GameObject_o *)0x0) goto label_0450acbe;
      _Stack_68 = (_union_14)0x450ac66;
      _Var11.genericMethod = UnityEngine_GameObject__GetComponent_object_(pUVar18,MethodInfo_GisketchDropdownItemFeedback_GetComponent_GisketchDropdo);
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      _Stack_68 = (_union_14)0x450ac7b;
      il2cpp_runtime_helper_02337ed0();
    }
    _Stack_68 = (_union_14)0x450ac87;
    plVar26 = (long *)_Var11;
    bVar5 = UnityEngine_Object__op_Inequality
                      (_Var11.genericMethod,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      return;
    }
    unaff_RBP = (void *)0x0;
    if (_Var11.genericMethod != (void *)0x0) {
      pSVar10 = (System_String_o *)((UnityEngine_Transform_Fields *)((long)ppSVar25 + 0x28))->m_CachedPtr;
      Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__SetLabelText
                (_Var11.genericMethod,pSVar10,pSVar10,
                 (uint)method & 0xff & (uint)*(byte *)((long)ppSVar25 + 0x3c),(MethodInfo *)0x0);
      return;
    }
  }
label_0450acbe:
  _Stack_68 = (_union_14)0x450acc3;
  il2cpp_runtime_helper_022b2c90();
  pMVar23 = extraout_RDX;
  pUStack_78 = unaff_RBX;
  pvStack_70 = (void *)((ulong)method & 0xffffffff);
  _Stack_68 = (_union_14)ppSVar25;
  if (g_data_057aed56 == '\0') {
    pIStack_80 = (Il2CppClass *)0x450aced;
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameFontCatalog);
    pIStack_80 = (Il2CppClass *)0x450acf9;
    il2cpp_runtime_helper_023445d0(&"Normal");
    g_data_057aed56 = '\x01';
    pMVar23 = extraout_RDX_00;
  }
  pIStack_80 = (Il2CppClass *)0x450ad12;
  UVar14 = "Normal";
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ResetPlainVisuals
            ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)plVar26,(System_String_o *)"Normal",
             pMVar23);
  pIStack_80 = (Il2CppClass *)0x450ad1a;
  text = (Il2CppClass *)
         Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                   ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)plVar26,(MethodInfo *)UVar14);
  if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
    pIStack_80 = (Il2CppClass *)0x450ad35;
    il2cpp_runtime_helper_02337ed0();
  }
  pIStack_80 = (Il2CppClass *)0x450ad42;
  UVar14 = "Normal";
  PatreonEffects_NameFontCatalog__Apply
            ((TMPro_TMP_Text_o *)text,(System_String_o *)"Normal",(MethodInfo *)0x0);
  pIStack_80 = (Il2CppClass *)0x450ad4a;
  _Var11 = (_union_14)plVar26;
  pTVar12 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                      ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)plVar26,(MethodInfo *)UVar14);
  if (pTVar12 != (TMPro_TMP_Text_o *)0x0) {
    in_RCX = (System_String_o **)pTVar12->klass;
    UVar14 = (UnityEngine_Color32_Fields)(((TMPro_TMP_Text_c *)in_RCX)->vtable)._23_set_color.method;
    in_XMM1_Da = 0.58;
    in_XMM1_Db = 1.0;
    in_XMM1_Dc._0_2_ = 0;
    in_XMM1_Dc._2_1_ = '\0';
    in_XMM1_Dc._3_1_ = '\0';
    in_XMM1_Dd = 0;
    pIStack_80 = (Il2CppClass *)0x450ad74;
    (*(((TMPro_TMP_Text_c *)in_RCX)->vtable)._23_set_color.methodPtr)(0x3f147ae1,pTVar12);
    pIStack_80 = (Il2CppClass *)0x450ad7c;
    text = (Il2CppClass *)
           Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                     ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)plVar26,(MethodInfo *)UVar14);
    pIStack_80 = (Il2CppClass *)0x450ad87;
    _Var11 = (_union_14)plVar26;
    pTVar12 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                        ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)plVar26,(MethodInfo *)UVar14)
    ;
    if (pTVar12 != (TMPro_TMP_Text_o *)0x0) {
      in_RCX = (System_String_o **)pTVar12->klass;
      UVar14 = (UnityEngine_Color32_Fields)(((TMPro_TMP_Text_c *)in_RCX)->vtable)._22_get_color.method;
      pIStack_80 = (Il2CppClass *)0x450ad9f;
      (*(((TMPro_TMP_Text_c *)in_RCX)->vtable)._22_get_color.methodPtr)();
      _Var11.genericMethod = (void *)0x0;
      pIStack_80 = (Il2CppClass *)0x450ada6;
      uVar6 = il2cpp_runtime_helper_03b428b0();
      if (text != (Il2CppClass *)0x0) {
        UVar14.r = '\0';
        UVar14.g = '\0';
        UVar14.b = '\0';
        UVar14.a = '\0';
        UVar14.rgba = uVar6;
        pIStack_80 = (Il2CppClass *)0x450adb7;
        TMPro_TMP_Text__set_faceColor
                  ((TMPro_TMP_Text_o *)text,(UnityEngine_Color32_o)UVar14,(MethodInfo *)0x0);
        pIStack_80 = (Il2CppClass *)0x450adbf;
        _Var11 = (_union_14)plVar26;
        pTVar12 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                            ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)plVar26,
                             (MethodInfo *)UVar14);
        if (pTVar12 != (TMPro_TMP_Text_o *)0x0) {
          vtableDispatch = (pTVar12->klass->vtable)._106_ForceMeshUpdate.methodPtr;
          (*vtableDispatch)
                    (pTVar12,0,0,(pTVar12->klass->vtable)._106_ForceMeshUpdate.method,vtableDispatch);
          return;
        }
      }
    }
  }
  pIStack_80 = (Il2CppClass *)0x450ade9;
  pIStack_a0 = (Il2CppClass *)il2cpp_runtime_helper_022b2c90();
  fStack_b0 = in_XMM1_Da;
  fStack_ac = in_XMM1_Db;
  uStack_a8 = in_XMM1_Dc;
  uStack_a4 = in_XMM1_Dd;
  _Stack_88 = (_union_14)plVar26;
  pIStack_80 = text;
  if (g_data_057aed58 == '\0') {
    _Stack_b8.genericMethod = (void *)0x450ae1b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color);
    g_data_057aed58 = '\x01';
  }
  pMVar23 = (MethodInfo *)0x2;
  _Stack_b8.genericMethod = (void *)0x450ae36;
  _Var20 = TypeInfo_Color;
  colors = (UnityEngine_Color_array *)il2cpp_runtime_helper_022b2a40();
  if (colors != (UnityEngine_Color_array *)0x0) {
    uVar6 = (uint)colors->max_length;
    in_RCX = (System_String_o **)(ulong)uVar6;
    if (uVar6 != 0) {
      *(Il2CppClass **)&colors->m_Items[0].fields = pIStack_a0;
      colors->m_Items[0].fields.b = fStack_b0;
      colors->m_Items[0].fields.a = fStack_ac;
      if (uVar6 != 1) {
        *(Il2CppClass **)&colors->m_Items[1].fields = pIStack_a0;
        colors->m_Items[1].fields.b = fStack_b0;
        colors->m_Items[1].fields.a = fStack_ac;
        Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureGradient
                  (_Var11.genericMethod,colors,(System_String_o *)UVar14,(MethodInfo *)in_RCX);
        return;
      }
    }
    _Stack_b8.genericMethod = (void *)0x450ae73;
    il2cpp_runtime_helper_022b2ca0();
  }
  _Stack_b8.genericMethod = (void *)0x450ae78;
  il2cpp_runtime_helper_022b2c90();
  pUStack_c0 = &"Normal";
  pMVar21 = (MethodInfo *)auStack_f8;
  plVar26 = (long *)_Var20;
  auStack_f8._24_8_ = _Var11;
  auStack_f8._32_8_ = unaff_R12;
  auStack_f8._40_8_ = unaff_R13;
  UStack_c8 = UVar14;
  _Stack_b8 = (_union_14)unaff_RBP;
  if (g_data_057aed54 == '\0') {
    _Stack_100 = (_union_14)0x450aea6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterStyleChoicePreview);
    _Stack_100 = (_union_14)0x450aeb2;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color);
    _Stack_100 = (_union_14)0x450aebe;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ICollection_string);
    plVar26 = &TypeInfo_IList_string;
    _Stack_100 = (_union_14)0x450aeca;
    il2cpp_runtime_helper_023445d0();
    g_data_057aed54 = '\x01';
  }
  if (_Var20.genericMethod != (long *)0x0) {
    lVar3 = *(long *)_Var20.genericMethod;
    if ((ulong)*(ushort *)(lVar3 + 0x12e) != 0) {
      lVar27 = 0;
      do {
        if (*(long *)(*(long *)(lVar3 + 0xb0) + lVar27) == TypeInfo_ICollection_string) {
          puVar13 = (undefined8 *)
                    ((long)*(int *)(*(long *)(lVar3 + 0xb0) + 8 + lVar27) * 0x10 + lVar3 + 0x138);
          goto label_0450af31;
        }
        lVar27 = lVar27 + 0x10;
      } while ((ulong)*(ushort *)(lVar3 + 0x12e) << 4 != lVar27);
    }
    _Stack_100 = (_union_14)0x450af19;
    puVar13 = (undefined8 *)il2cpp_runtime_helper_02300d20(_Var20.genericMethod,TypeInfo_ICollection_string,0);
label_0450af31:
    _Stack_100 = (_union_14)0x450af3a;
    uVar7 = (*(code *)*puVar13)(_Var20.genericMethod,puVar13[1]);
    _Stack_100 = (_union_14)0x450af4b;
    UVar14 = (UnityEngine_Color32_Fields)il2cpp_runtime_helper_022b2a40(TypeInfo_Color.genericMethod,uVar7);
    if (UVar14 != (UnityEngine_Color32_Fields)0x0) {
      pTVar24 = (TMPro_TMP_Text_c *)0x0;
      unaff_RBP = &TypeInfo_AottgCharacterStyleChoicePreview;
      do {
        lVar3 = *(long *)_Var20.genericMethod;
        if ((ulong)*(ushort *)(lVar3 + 0x12e) != 0) {
          lVar27 = 0;
          do {
            if (*(long *)(*(long *)(lVar3 + 0xb0) + lVar27) == TypeInfo_ICollection_string) {
              puVar13 = (undefined8 *)
                        ((long)*(int *)(*(long *)(lVar3 + 0xb0) + 8 + lVar27) * 0x10 + lVar3 + 0x138);
              goto label_0450aff3;
            }
            lVar27 = lVar27 + 0x10;
          } while ((ulong)*(ushort *)(lVar3 + 0x12e) << 4 != lVar27);
        }
        _Stack_100 = (_union_14)0x450afd9;
        puVar13 = (undefined8 *)il2cpp_runtime_helper_02300d20(_Var20.genericMethod,TypeInfo_ICollection_string,0);
label_0450aff3:
        _Stack_100 = (_union_14)0x450affc;
        iVar8 = (*(code *)*puVar13)(_Var20.genericMethod,puVar13[1]);
        if ((long)iVar8 <= (long)pTVar24) {
          return;
        }
        lVar3 = *(long *)_Var20.genericMethod;
        if ((ulong)*(ushort *)(lVar3 + 0x12e) != 0) {
          lVar27 = 0;
          do {
            if (*(long *)(*(long *)(lVar3 + 0xb0) + lVar27) == TypeInfo_IList_string) {
              puVar13 = (undefined8 *)
                        ((long)*(int *)(*(long *)(lVar3 + 0xb0) + 8 + lVar27) * 0x10 + lVar3 + 0x138);
              goto label_0450b063;
            }
            lVar27 = lVar27 + 0x10;
          } while ((ulong)*(ushort *)(lVar3 + 0x12e) << 4 != lVar27);
        }
        _Stack_100 = (_union_14)0x450b049;
        puVar13 = (undefined8 *)il2cpp_runtime_helper_02300d20(_Var20.genericMethod,TypeInfo_IList_string,0);
label_0450b063:
        _Stack_100 = (_union_14)0x450b06f;
        _Var11.genericMethod =
             (void *)(*(code *)*puVar13)(_Var20.genericMethod,(ulong)pTVar24 & 0xffffffff,puVar13[1]);
        if (*(int *)((long)TypeInfo_AottgCharacterStyleChoicePreview.genericMethod + 0xe4) == 0) {
          _Stack_100 = (_union_14)0x450b084;
          il2cpp_runtime_helper_02337ed0();
        }
        auStack_f8._0_8_ = (Il2CppMethodPointer)0x0;
        auStack_f8._8_8_ = (Il2CppMethodPointer)0x0;
        _Stack_100 = (_union_14)0x450b098;
        pMVar21 = (MethodInfo *)auStack_f8;
        plVar26 = _Var11.genericMethod;
        bVar5 = UnityEngine_ColorUtility__TryParseHtmlString
                          (_Var11.genericMethod,(UnityEngine_Color_o *)auStack_f8,(MethodInfo *)0x0);
        in_RCX = (System_String_o **)(ulong)*(uint *)((long)UVar14 + 0x18);
        unaff_R12 = (long *)auStack_f8;
        if (in_RCX <= pTVar24) goto label_0450b1e2;
        if ((char)bVar5 == '\0') {
          fVar30 = 1.0;
          fVar31 = 1.0;
          fVar32 = fVar30;
          fVar33 = fVar31;
        }
        else {
          fVar30 = (float)auStack_f8._0_8_;
          fVar31 = SUB84(auStack_f8._0_8_,4);
          fVar32 = (float)auStack_f8._8_8_;
          fVar33 = SUB84(auStack_f8._8_8_,4);
        }
        pfVar1 = (float *)((long)UVar14 + 0x20 + (long)pTVar24 * 0x10);
        *pfVar1 = fVar30;
        pfVar1[1] = fVar31;
        pfVar1[2] = fVar32;
        pfVar1[3] = fVar33;
        pTVar24 = (TMPro_TMP_Text_c *)((long)&(pTVar24->_1).image + 1);
      } while( true );
    }
    lVar3 = *(long *)_Var20.genericMethod;
    if ((ulong)*(ushort *)(lVar3 + 0x12e) != 0) {
      lVar27 = 0;
      do {
        if (*(long *)(*(long *)(lVar3 + 0xb0) + lVar27) == TypeInfo_ICollection_string) {
          puVar13 = (undefined8 *)
                    ((long)*(int *)(*(long *)(lVar3 + 0xb0) + 8 + lVar27) * 0x10 + lVar3 + 0x138);
          goto label_0450b121;
        }
        lVar27 = lVar27 + 0x10;
      } while ((ulong)*(ushort *)(lVar3 + 0x12e) << 4 != lVar27);
    }
    _Stack_100 = (_union_14)0x450b109;
    puVar13 = (undefined8 *)il2cpp_runtime_helper_02300d20(_Var20.genericMethod,TypeInfo_ICollection_string,0);
label_0450b121:
    _Stack_100 = (_union_14)0x450b12a;
    iVar8 = (*(code *)*puVar13)(_Var20.genericMethod,puVar13[1]);
    if (iVar8 < 1) {
      return;
    }
    lVar3 = *(long *)_Var20.genericMethod;
    if ((ulong)*(ushort *)(lVar3 + 0x12e) != 0) {
      lVar27 = 0;
      do {
        if (*(long *)(*(long *)(lVar3 + 0xb0) + lVar27) == TypeInfo_IList_string) {
          in_RCX = (System_String_o **)
                   ((long)*(int *)(*(long *)(lVar3 + 0xb0) + 8 + lVar27) * 0x10 + lVar3 + 0x138);
          goto label_0450b1a3;
        }
        lVar27 = lVar27 + 0x10;
      } while ((ulong)*(ushort *)(lVar3 + 0x12e) << 4 != lVar27);
    }
    _Stack_100 = (_union_14)0x450b179;
    in_RCX = (System_String_o **)il2cpp_runtime_helper_02300d20(_Var20.genericMethod,TypeInfo_IList_string,0);
label_0450b1a3:
    _Stack_100 = (_union_14)0x450b1ae;
    _Var11.genericMethod =
         (void *)(*(((TMPro_TMP_Text_c *)in_RCX)->_1).image)
                           (_Var20.genericMethod,0,(((TMPro_TMP_Text_c *)in_RCX)->_1).gc_desc);
    if (*(int *)((long)TypeInfo_AottgCharacterStyleChoicePreview.genericMethod + 0xe4) == 0) {
      _Stack_100 = (_union_14)0x450b1c9;
      il2cpp_runtime_helper_02337ed0();
    }
    auStack_f8._0_8_ = (Il2CppMethodPointer)0x0;
    auStack_f8._8_8_ = (Il2CppMethodPointer)0x0;
    _Stack_100 = (_union_14)0x450b1dd;
    plVar26 = _Var11.genericMethod;
    UnityEngine_ColorUtility__TryParseHtmlString
              (_Var11.genericMethod,(UnityEngine_Color_o *)auStack_f8,(MethodInfo *)0x0);
    _Stack_100 = (_union_14)0x450b1e2;
    il2cpp_runtime_helper_022b2c90();
label_0450b1e2:
    _Stack_100 = (_union_14)0x450b1e7;
    il2cpp_runtime_helper_022b2ca0();
    pMVar23 = pMVar21;
  }
  _Stack_100 = (_union_14)0x450b1ec;
  auVar34 = il2cpp_runtime_helper_022b2c90();
  pTVar12 = auVar34._8_8_;
  uStack_120 = auVar34._0_8_;
  _Stack_118 = _Var11;
  pIStack_110 = (Il2CppClass *)unaff_R12;
  UStack_108 = UVar14;
  _Stack_100 = _Var20;
  if (g_data_057aed59 == '\0') {
    _Stack_128 = (_union_14)0x450b216;
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameFontCatalog);
    auVar34._8_8_ = extraout_RDX_01;
    auVar34._0_8_ = uStack_120;
    g_data_057aed59 = '\x01';
  }
  uStack_120 = auVar34._0_8_;
  _Stack_128 = (_union_14)0x450b228;
  pTVar15 = pTVar12;
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ResetPlainVisuals
            ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)plVar26,(System_String_o *)pTVar12,
             auVar34._8_8_);
  _Stack_128 = (_union_14)0x450b230;
  pTVar15 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                      ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)plVar26,(MethodInfo *)pTVar15);
  if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
    _Stack_128 = (_union_14)0x450b24b;
    il2cpp_runtime_helper_02337ed0();
  }
  _Stack_128 = (_union_14)0x450b258;
  pTVar17 = pTVar12;
  PatreonEffects_NameFontCatalog__Apply(pTVar15,(System_String_o *)pTVar12,(MethodInfo *)0x0);
  _Stack_128 = (_union_14)0x450b260;
  _Var11 = (_union_14)plVar26;
  pTVar16 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                      ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)plVar26,(MethodInfo *)pTVar17);
  uVar6 = (uint)pTVar17;
  if (pTVar16 != (TMPro_TMP_Text_o *)0x0) {
    in_RCX = (System_String_o **)pTVar16->klass;
    pMVar21 = (((TMPro_TMP_Text_c *)in_RCX)->vtable)._23_set_color.method;
    _Stack_128 = (_union_14)0x450b286;
    (*(((TMPro_TMP_Text_c *)in_RCX)->vtable)._23_set_color.methodPtr)(0x3f800000,0x3f800000,pTVar16);
    _Stack_128 = (_union_14)0x450b28e;
    pTVar12 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                        ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)plVar26,pMVar21);
    uVar6 = (uint)pMVar21;
    _Var11.genericMethod = (void *)0x0;
    _Stack_128 = (_union_14)0x450b2a2;
    uVar9 = il2cpp_runtime_helper_03b428b0(0x3f800000,0x3f800000);
    if (pTVar12 != (TMPro_TMP_Text_o *)0x0) {
      value.fields.r = '\0';
      value.fields.g = '\0';
      value.fields.b = '\0';
      value.fields.a = '\0';
      value.fields.rgba = uVar9;
      _Stack_128 = (_union_14)0x450b2b3;
      TMPro_TMP_Text__set_faceColor(pTVar12,value,(MethodInfo *)0x0);
      *(MethodInfo **)((long)plVar26 + 0x30) = pMVar23;
      _Stack_128 = (_union_14)0x450b2c3;
      pMVar21 = pMVar23;
      il2cpp_runtime_helper_022b4080((long)plVar26 + 0x30);
      _Stack_128 = (_union_14)0x450b2cb;
      Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__HookVertexColors
                ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)plVar26,pMVar21);
      _Stack_128 = (_union_14)0x450b2d3;
      _Var11 = (_union_14)plVar26;
      pTVar17 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                          ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)plVar26,pMVar21);
      uVar6 = (uint)pMVar21;
      if (pTVar17 != (TMPro_TMP_Text_o *)0x0) {
        vtableDispatch = (pTVar17->klass->vtable)._106_ForceMeshUpdate.methodPtr;
        (*vtableDispatch)
                  (pTVar17,0,0,(pTVar17->klass->vtable)._106_ForceMeshUpdate.method,vtableDispatch);
        return;
      }
    }
  }
  _Stack_128 = (_union_14)0x450b303;
  il2cpp_runtime_helper_022b2c90();
  _Var28._4_4_ = 0;
  _Var28._0_4_ = uVar6;
  _Var20 = extraout_RDX_02;
  _Stack_148 = (_union_14)plVar26;
  pTStack_140 = pTVar15;
  pMStack_138 = pMVar23;
  pTStack_130 = pTVar12;
  _Stack_128 = (_union_14)unaff_RBP;
  if (g_data_057aed5a == '\0') {
    _Stack_150 = (_union_14)0x450b339;
    il2cpp_runtime_helper_023445d0(&MethodInfo_NameEffectController_AddComponent_NameEffectController);
    _Stack_150 = (_union_14)0x450b345;
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameFontCatalog);
    g_data_057aed5a = '\x01';
    _Var20 = extraout_RDX_03;
  }
  _Stack_150 = (_union_14)0x450b357;
  pTVar24 = (TMPro_TMP_Text_c *)in_RCX;
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ResetPlainVisuals
            (_Var11.genericMethod,(System_String_o *)in_RCX,_Var20.genericMethod);
  _Stack_150 = (_union_14)0x450b35f;
  pTVar12 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                      (_Var11.genericMethod,(MethodInfo *)pTVar24);
  if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
    _Stack_150 = (_union_14)0x450b37a;
    il2cpp_runtime_helper_02337ed0();
  }
  _Stack_150 = (_union_14)0x450b387;
  PatreonEffects_NameFontCatalog__Apply(pTVar12,(System_String_o *)in_RCX,(MethodInfo *)0x0);
  _Stack_150 = (_union_14)0x450b38f;
  _Var20 = _Var11;
  __this_00.genericMethod =
       Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(_Var11.genericMethod,(MethodInfo *)in_RCX)
  ;
  if (__this_00.genericMethod == (void *)0x0) {
label_0450b444:
    _Stack_150 = (_union_14)0x450b449;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    in_RCX = (System_String_o **)0x0;
    _Stack_150 = (_union_14)0x450b3a2;
    pUVar18 = UnityEngine_Component__get_gameObject(__this_00.genericMethod,(MethodInfo *)0x0);
    _Var20 = __this_00;
    if (pUVar18 == (UnityEngine_GameObject_o *)0x0) goto label_0450b444;
    _Stack_150 = (_union_14)0x450b3bd;
    pIVar19 = UnityEngine_GameObject__AddComponent_object_(pUVar18,MethodInfo_NameEffectController_AddComponent_NameEffectController);
    *(Il2CppObject **)((long)_Var11.genericMethod + 0x28) = pIVar19;
    _Var11.genericMethod = _Var11.genericMethod + 0x28;
    _Stack_150 = (_union_14)0x450b3d0;
    il2cpp_runtime_helper_022b4080(_Var11.genericMethod);
    in_RCX = (System_String_o **)0x0;
    _Stack_150 = (_union_14)0x450b3da;
    _Var20 = _Var28;
    settings = PatreonEffects_NameEffectPresets__GetPreset(uVar6,(MethodInfo *)0x0);
    if (extraout_RDX_02.genericMethod == (void *)0x0) goto label_0450b444;
    if (*(long *)((long)extraout_RDX_02.genericMethod + 0x18) == 0) {
label_0450b42a:
      _Var20.genericMethod = (void *)0x0;
      if (*(PatreonEffects_NameEffectController_o **)_Var11.genericMethod !=
          (PatreonEffects_NameEffectController_o *)0x0) {
        PatreonEffects_NameEffectController__Apply
                  (*(PatreonEffects_NameEffectController_o **)_Var11.genericMethod,settings,(MethodInfo *)0x0)
        ;
        return;
      }
      goto label_0450b444;
    }
    if ((int)*(long *)((long)extraout_RDX_02.genericMethod + 0x18) != 0) {
      if (settings == (PatreonEffects_NameEffectSettings_o *)0x0) goto label_0450b444;
      uVar2 = *(undefined8 *)((long)extraout_RDX_02.genericMethod + 0x20);
      uVar4 = *(undefined8 *)((long)extraout_RDX_02.genericMethod + 0x28);
      (settings->fields).gradientA.fields.r = (float)(int)uVar2;
      (settings->fields).gradientA.fields.g = (float)(int)((ulong)uVar2 >> 0x20);
      (settings->fields).gradientA.fields.b = (float)(int)uVar4;
      (settings->fields).gradientA.fields.a = (float)(int)((ulong)uVar4 >> 0x20);
      if (1 < *(int *)((long)extraout_RDX_02.genericMethod + 0x18)) {
        uVar2 = *(undefined8 *)((long)extraout_RDX_02.genericMethod + 0x30);
        uVar4 = *(undefined8 *)((long)extraout_RDX_02.genericMethod + 0x38);
        (settings->fields).gradientB.fields.r = (float)(int)uVar2;
        (settings->fields).gradientB.fields.g = (float)(int)((ulong)uVar2 >> 0x20);
        (settings->fields).gradientB.fields.b = (float)(int)uVar4;
        (settings->fields).gradientB.fields.a = (float)(int)((ulong)uVar4 >> 0x20);
        if (2 < *(int *)((long)extraout_RDX_02.genericMethod + 0x18)) {
          uVar2 = *(undefined8 *)((long)extraout_RDX_02.genericMethod + 0x40);
          uVar4 = *(undefined8 *)((long)extraout_RDX_02.genericMethod + 0x48);
          (settings->fields).gradientC.fields.r = (float)(int)uVar2;
          (settings->fields).gradientC.fields.g = (float)(int)((ulong)uVar2 >> 0x20);
          (settings->fields).gradientC.fields.b = (float)(int)uVar4;
          (settings->fields).gradientC.fields.a = (float)(int)((ulong)uVar4 >> 0x20);
          if (3 < *(int *)((long)extraout_RDX_02.genericMethod + 0x18)) {
            uVar2 = *(undefined8 *)((long)extraout_RDX_02.genericMethod + 0x50);
            uVar4 = *(undefined8 *)((long)extraout_RDX_02.genericMethod + 0x58);
            (settings->fields).gradientD.fields.r = (float)(int)uVar2;
            (settings->fields).gradientD.fields.g = (float)(int)((ulong)uVar2 >> 0x20);
            (settings->fields).gradientD.fields.b = (float)(int)uVar4;
            (settings->fields).gradientD.fields.a = (float)(int)((ulong)uVar4 >> 0x20);
          }
        }
      }
      goto label_0450b42a;
    }
  }
  _Stack_150 = (_union_14)0x450b44e;
  il2cpp_runtime_helper_022b2ca0();
  p_Var22 = &_Stack_160;
  _Stack_160 = _Var11;
  _Stack_158 = extraout_RDX_02;
  _Stack_150 = _Var28;
  if (g_data_057aed50 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterStyleChoicePreview);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed50 = '\x01';
  }
  p_Var29 = &TypeInfo_AottgCharacterStyleChoicePreview;
  if (*(int *)((long)TypeInfo_AottgCharacterStyleChoicePreview.genericMethod + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  _Var11.genericMethod =
       Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__Preview
                 (_Var20.genericMethod,(MethodInfo *)in_RCX);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar23 = (MethodInfo *)0x0;
  bVar5 = UnityEngine_Object__op_Equality(_Var11.genericMethod,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return;
  }
  if (*(int *)((long)TypeInfo_AottgCharacterStyleChoicePreview.genericMethod + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  _Var28 = _Var20;
  Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__ApplyDarkSurface(_Var20.genericMethod,pMVar23);
  if (_Var20.genericMethod != (void *)0x0) {
    pMVar23 = (MethodInfo *)(ulong)*(byte *)((long)_Var20.genericMethod + 0x3c);
    _Var28 = _Var20;
    Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__SetFeedback
              (_Var20.genericMethod,(uint)*(byte *)((long)_Var20.genericMethod + 0x3c),method_00);
    if (*(char *)((long)_Var20.genericMethod + 0x3c) == '\0') {
      if (_Var11.genericMethod != (void *)0x0) {
        Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureDisabled(_Var11.genericMethod,pMVar23);
        return;
      }
    }
    else if (_Var11.genericMethod != (void *)0x0) {
      pMVar23 = *(MethodInfo **)((long)_Var20.genericMethod + 0x30);
      pMVar21 = extraout_RDX_04;
      _Var20 = _Stack_160;
      p_Var22 = &_Stack_148;
      _Var28.genericMethod = _Var11.genericMethod;
      _Var11 = _Stack_158;
      p_Var29 = (_union_14 *)_Stack_150;
      goto Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureFont;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar21 = extraout_RDX_05;
Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureFont:
  *(_union_14 **)((long)p_Var22 + -8) = p_Var29;
  *(_union_14 *)((long)p_Var22 + -0x10) = _Var11;
  *(_union_14 *)((long)p_Var22 + -0x18) = _Var20;
  if (g_data_057aed57 == '\0') {
    *(undefined8 *)((long)p_Var22 + -0x20) = 0x450b550;
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameFontCatalog);
    g_data_057aed57 = '\x01';
    pMVar21 = extraout_RDX_06;
  }
  *(undefined8 *)((long)p_Var22 + -0x20) = 0x450b562;
  method_01 = pMVar23;
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ResetPlainVisuals
            (_Var28.genericMethod,(System_String_o *)pMVar23,pMVar21);
  *(undefined8 *)((long)p_Var22 + -0x20) = 0x450b56a;
  pTVar12 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(_Var28.genericMethod,method_01);
  if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
    *(undefined8 *)((long)p_Var22 + -0x20) = 0x450b585;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)p_Var22 + -0x20) = 0x450b592;
  PatreonEffects_NameFontCatalog__Apply(pTVar12,(System_String_o *)pMVar23,(MethodInfo *)0x0);
  *(undefined8 *)((long)p_Var22 + -0x20) = 0x450b59a;
  _Var11 = _Var28;
  pTVar12 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(_Var28.genericMethod,pMVar23);
  if (pTVar12 != (TMPro_TMP_Text_o *)0x0) {
    pMVar23 = (pTVar12->klass->vtable)._23_set_color.method;
    vtableDispatch = (pTVar12->klass->vtable)._23_set_color.methodPtr;
    *(undefined8 *)((long)p_Var22 + -0x20) = 0x450b5bc;
    (*vtableDispatch)(0x3f800000,0x3f800000,pTVar12);
    *(undefined8 *)((long)p_Var22 + -0x20) = 0x450b5c4;
    pTVar12 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(_Var28.genericMethod,pMVar23);
    _Var11.genericMethod = (void *)0x0;
    *(undefined8 *)((long)p_Var22 + -0x20) = 0x450b5d8;
    uVar6 = il2cpp_runtime_helper_03b428b0(0x3f800000,0x3f800000);
    if (pTVar12 != (TMPro_TMP_Text_o *)0x0) {
      value_00.r = '\0';
      value_00.g = '\0';
      value_00.b = '\0';
      value_00.a = '\0';
      value_00.rgba = uVar6;
      *(undefined8 *)((long)p_Var22 + -0x20) = 0x450b5e9;
      TMPro_TMP_Text__set_faceColor(pTVar12,(UnityEngine_Color32_o)value_00,(MethodInfo *)0x0);
      *(undefined8 *)((long)p_Var22 + -0x20) = 0x450b5f1;
      pTVar12 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                          (_Var28.genericMethod,(MethodInfo *)value_00);
      _Var11 = _Var28;
      if (pTVar12 != (TMPro_TMP_Text_o *)0x0) {
        vtableDispatch = (pTVar12->klass->vtable)._106_ForceMeshUpdate.methodPtr;
        (*vtableDispatch)
                  (pTVar12,0,0,(pTVar12->klass->vtable)._106_ForceMeshUpdate.method,vtableDispatch);
        return;
      }
    }
  }
  *(undefined8 *)((long)p_Var22 + -0x20) = 0x450b61b;
  il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)((long)p_Var22 + -0x30) = 0;
  *(undefined8 *)((long)p_Var22 + -0x28) = 0;
  *(undefined8 *)((long)p_Var22 + -0x38) = 0x450b635;
  bVar5 = UnityEngine_ColorUtility__TryParseHtmlString
                    (_Var11.genericMethod,(UnityEngine_Color_o *)((long)p_Var22 + -0x30),(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterStyleChoicePreview$$Parse
// il2cpp: UnityEngine_Color_array* Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__Parse (System_Collections_Generic_IList_string__o* colors, const MethodInfo* method);
// 0x450ae80

UnityEngine_Color_array *
Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__Parse
          (System_Collections_Generic_IList_string__o *colors,MethodInfo *method)

{
  UnityEngine_Color_o *pUVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  System_Collections_Generic_IList_string__c *pSVar8;
  Il2CppRuntimeInterfaceOffsetPair *pIVar9;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  System_Threading_CancellationTokenSource_o *pSVar10;
  UnityEngine_RectTransform_o *pUVar11;
  bool_conflict bVar12;
  undefined4 uVar13;
  int iVar14;
  bool_conflict bVar15;
  uint uVar16;
  uint uVar17;
  VirtualInvokeData *pVVar18;
  TMPro_TMP_Text_o *pTVar19;
  TMPro_TMP_Text_o *pTVar20;
  TMPro_TMP_Text_o *pTVar21;
  TMPro_TMP_Text_o *pTVar22;
  UnityEngine_Color_array *pUVar23;
  UnityEngine_GameObject_o *__this;
  Il2CppObject *pIVar24;
  PatreonEffects_NameEffectSettings_o *settings;
  UnityEngine_Color_array *extraout_RAX;
  undefined4 extraout_var;
  UnityEngine_Color_array *extraout_RAX_00;
  undefined4 extraout_var_00;
  TMPro_TMP_Text_c *in_RCX;
  undefined8 extraout_RDX;
  TMPro_TMP_Text_o *extraout_RDX_00;
  TMPro_TMP_Text_o *extraout_RDX_01;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *method_01;
  TMPro_TMP_Text_o *unaff_RBX;
  TMPro_TMP_Text_o *__this_00;
  TMPro_TMP_Text_o **ppTVar25;
  long *unaff_RBP;
  UnityEngine_Color32_o value;
  TMPro_TMP_Text_c *pTVar26;
  MethodInfo *pMVar27;
  MethodInfo *method_02;
  UnityEngine_Color32_Fields value_00;
  long *plVar28;
  long lVar29;
  undefined1 *unaff_R12;
  UnityEngine_Color_array *unaff_R14;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar34 [16];
  TMPro_TMP_Text_o *pTStack_b0;
  TMPro_TMP_Text_o *pTStack_a8;
  TMPro_TMP_Text_o *pTStack_a0;
  TMPro_TMP_Text_o *pTStack_98;
  TMPro_TMP_Text_o *pTStack_90;
  MethodInfo *pMStack_88;
  TMPro_TMP_Text_o *pTStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  TMPro_TMP_Text_o *pTStack_68;
  undefined1 *puStack_60;
  UnityEngine_Color_array *pUStack_58;
  System_Collections_Generic_IList_string__o *pSStack_50;
  undefined1 local_48 [8];
  undefined8 uStack_40;
  
  pMVar27 = (MethodInfo *)local_48;
  plVar28 = (long *)colors;
  if (g_data_057aed54 == '\0') {
    pSStack_50 = (System_Collections_Generic_IList_string__o *)0x450aea6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterStyleChoicePreview);
    pSStack_50 = (System_Collections_Generic_IList_string__o *)0x450aeb2;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color);
    pSStack_50 = (System_Collections_Generic_IList_string__o *)0x450aebe;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ICollection_string);
    plVar28 = &TypeInfo_IList_string;
    pSStack_50 = (System_Collections_Generic_IList_string__o *)0x450aeca;
    il2cpp_runtime_helper_023445d0();
    g_data_057aed54 = '\x01';
  }
  if (colors != (System_Collections_Generic_IList_string__o *)0x0) {
    pSVar8 = colors->klass;
    uVar3._0_1_ = (pSVar8->_2).rank;
    uVar3._1_1_ = (pSVar8->_2).minimumAlignment;
    if ((ulong)uVar3 != 0) {
      pIVar9 = (pSVar8->_1).interfaceOffsets;
      lVar29 = 0;
      do {
        if (*(long *)((long)&pIVar9->interfaceType + lVar29) == TypeInfo_ICollection_string) {
          pVVar18 = pSVar8->vtable + *(int *)((long)&pIVar9->offset + lVar29);
          goto label_0450af31;
        }
        lVar29 = lVar29 + 0x10;
      } while ((ulong)uVar3 << 4 != lVar29);
    }
    pSStack_50 = (System_Collections_Generic_IList_string__o *)0x450af19;
    pVVar18 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(colors,TypeInfo_ICollection_string,0);
label_0450af31:
    pSStack_50 = (System_Collections_Generic_IList_string__o *)0x450af3a;
    uVar13 = (*pVVar18->methodPtr)(colors,pVVar18->method);
    pSStack_50 = (System_Collections_Generic_IList_string__o *)0x450af4b;
    unaff_R14 = (UnityEngine_Color_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Color,uVar13);
    if (unaff_R14 != (UnityEngine_Color_array *)0x0) {
      pTVar26 = (TMPro_TMP_Text_c *)0x0;
      unaff_RBP = &TypeInfo_AottgCharacterStyleChoicePreview;
      do {
        pSVar8 = colors->klass;
        uVar4._0_1_ = (pSVar8->_2).rank;
        uVar4._1_1_ = (pSVar8->_2).minimumAlignment;
        if ((ulong)uVar4 != 0) {
          pIVar9 = (pSVar8->_1).interfaceOffsets;
          lVar29 = 0;
          do {
            if (*(long *)((long)&pIVar9->interfaceType + lVar29) == TypeInfo_ICollection_string) {
              pVVar18 = pSVar8->vtable + *(int *)((long)&pIVar9->offset + lVar29);
              goto label_0450aff3;
            }
            lVar29 = lVar29 + 0x10;
          } while ((ulong)uVar4 << 4 != lVar29);
        }
        pSStack_50 = (System_Collections_Generic_IList_string__o *)0x450afd9;
        pVVar18 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(colors,TypeInfo_ICollection_string,0);
label_0450aff3:
        pSStack_50 = (System_Collections_Generic_IList_string__o *)0x450affc;
        iVar14 = (*pVVar18->methodPtr)(colors,pVVar18->method);
        if ((long)iVar14 <= (long)pTVar26) {
          return unaff_R14;
        }
        pSVar8 = colors->klass;
        uVar5._0_1_ = (pSVar8->_2).rank;
        uVar5._1_1_ = (pSVar8->_2).minimumAlignment;
        if ((ulong)uVar5 != 0) {
          pIVar9 = (pSVar8->_1).interfaceOffsets;
          lVar29 = 0;
          do {
            if (*(long *)((long)&pIVar9->interfaceType + lVar29) == TypeInfo_IList_string) {
              pVVar18 = pSVar8->vtable + *(int *)((long)&pIVar9->offset + lVar29);
              goto label_0450b063;
            }
            lVar29 = lVar29 + 0x10;
          } while ((ulong)uVar5 << 4 != lVar29);
        }
        pSStack_50 = (System_Collections_Generic_IList_string__o *)0x450b049;
        pVVar18 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(colors,TypeInfo_IList_string,0);
label_0450b063:
        pSStack_50 = (System_Collections_Generic_IList_string__o *)0x450b06f;
        unaff_RBX = (TMPro_TMP_Text_o *)
                    (*pVVar18->methodPtr)(colors,(ulong)pTVar26 & 0xffffffff,pVVar18->method);
        if (*(int *)(TypeInfo_AottgCharacterStyleChoicePreview + 0xe4) == 0) {
          pSStack_50 = (System_Collections_Generic_IList_string__o *)0x450b084;
          il2cpp_runtime_helper_02337ed0();
        }
        local_48 = (undefined1  [8])0x0;
        uStack_40 = (Il2CppMethodPointer)0x0;
        pSStack_50 = (System_Collections_Generic_IList_string__o *)0x450b098;
        pMVar27 = (MethodInfo *)local_48;
        plVar28 = (long *)unaff_RBX;
        bVar15 = UnityEngine_ColorUtility__TryParseHtmlString
                           ((System_String_o *)unaff_RBX,(UnityEngine_Color_o *)local_48,(MethodInfo *)0x0);
        in_RCX = (TMPro_TMP_Text_c *)(ulong)(uint)unaff_R14->max_length;
        unaff_R12 = local_48;
        if (in_RCX <= pTVar26) goto label_0450b1e2;
        if ((char)bVar15 == '\0') {
          fVar30 = 1.0;
          fVar31 = 1.0;
          fVar32 = fVar30;
          fVar33 = fVar31;
        }
        else {
          fVar30 = local_48._0_4_;
          fVar31 = local_48._4_4_;
          fVar32 = (float)uStack_40;
          fVar33 = uStack_40._4_4_;
        }
        pUVar1 = unaff_R14->m_Items + (long)pTVar26;
        (pUVar1->fields).r = fVar30;
        (pUVar1->fields).g = fVar31;
        (pUVar1->fields).b = fVar32;
        (pUVar1->fields).a = fVar33;
        pTVar26 = (TMPro_TMP_Text_c *)((long)&(pTVar26->_1).image + 1);
      } while( true );
    }
    pSVar8 = colors->klass;
    uVar6._0_1_ = (pSVar8->_2).rank;
    uVar6._1_1_ = (pSVar8->_2).minimumAlignment;
    if ((ulong)uVar6 != 0) {
      pIVar9 = (pSVar8->_1).interfaceOffsets;
      lVar29 = 0;
      do {
        if (*(long *)((long)&pIVar9->interfaceType + lVar29) == TypeInfo_ICollection_string) {
          pVVar18 = pSVar8->vtable + *(int *)((long)&pIVar9->offset + lVar29);
          goto label_0450b121;
        }
        lVar29 = lVar29 + 0x10;
      } while ((ulong)uVar6 << 4 != lVar29);
    }
    pSStack_50 = (System_Collections_Generic_IList_string__o *)0x450b109;
    pVVar18 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(colors,TypeInfo_ICollection_string,0);
label_0450b121:
    pSStack_50 = (System_Collections_Generic_IList_string__o *)0x450b12a;
    iVar14 = (*pVVar18->methodPtr)(colors,pVVar18->method);
    if (iVar14 < 1) {
      return (UnityEngine_Color_array *)0x0;
    }
    pSVar8 = colors->klass;
    uVar7._0_1_ = (pSVar8->_2).rank;
    uVar7._1_1_ = (pSVar8->_2).minimumAlignment;
    if ((ulong)uVar7 != 0) {
      pIVar9 = (pSVar8->_1).interfaceOffsets;
      lVar29 = 0;
      do {
        if (*(long *)((long)&pIVar9->interfaceType + lVar29) == TypeInfo_IList_string) {
          in_RCX = (TMPro_TMP_Text_c *)(pSVar8->vtable + *(int *)((long)&pIVar9->offset + lVar29));
          goto label_0450b1a3;
        }
        lVar29 = lVar29 + 0x10;
      } while ((ulong)uVar7 << 4 != lVar29);
    }
    pSStack_50 = (System_Collections_Generic_IList_string__o *)0x450b179;
    in_RCX = (TMPro_TMP_Text_c *)il2cpp_runtime_helper_02300d20(colors,TypeInfo_IList_string,0);
label_0450b1a3:
    pSStack_50 = (System_Collections_Generic_IList_string__o *)0x450b1ae;
    unaff_RBX = (TMPro_TMP_Text_o *)(*(in_RCX->_1).image)(colors,0,(in_RCX->_1).gc_desc);
    if (*(int *)(TypeInfo_AottgCharacterStyleChoicePreview + 0xe4) == 0) {
      pSStack_50 = (System_Collections_Generic_IList_string__o *)0x450b1c9;
      il2cpp_runtime_helper_02337ed0();
    }
    local_48 = (undefined1  [8])0x0;
    uStack_40 = (Il2CppMethodPointer)0x0;
    pSStack_50 = (System_Collections_Generic_IList_string__o *)0x450b1dd;
    plVar28 = (long *)unaff_RBX;
    UnityEngine_ColorUtility__TryParseHtmlString
              ((System_String_o *)unaff_RBX,(UnityEngine_Color_o *)local_48,(MethodInfo *)0x0);
    pSStack_50 = (System_Collections_Generic_IList_string__o *)0x450b1e2;
    il2cpp_runtime_helper_022b2c90();
label_0450b1e2:
    pSStack_50 = (System_Collections_Generic_IList_string__o *)0x450b1e7;
    il2cpp_runtime_helper_022b2ca0();
    method = pMVar27;
  }
  pSStack_50 = (System_Collections_Generic_IList_string__o *)0x450b1ec;
  auVar34 = il2cpp_runtime_helper_022b2c90();
  pTVar21 = auVar34._8_8_;
  uStack_70 = auVar34._0_8_;
  pTStack_68 = unaff_RBX;
  puStack_60 = unaff_R12;
  pUStack_58 = unaff_R14;
  pSStack_50 = colors;
  if (g_data_057aed59 == '\0') {
    plStack_78 = (long *)0x450b216;
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameFontCatalog);
    auVar34._8_8_ = extraout_RDX;
    auVar34._0_8_ = uStack_70;
    g_data_057aed59 = '\x01';
  }
  uStack_70 = auVar34._0_8_;
  plStack_78 = (long *)0x450b228;
  pTVar19 = pTVar21;
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ResetPlainVisuals
            ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)plVar28,(System_String_o *)pTVar21,
             auVar34._8_8_);
  plStack_78 = (long *)0x450b230;
  pTVar19 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                      ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)plVar28,(MethodInfo *)pTVar19);
  if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
    plStack_78 = (long *)0x450b24b;
    il2cpp_runtime_helper_02337ed0();
  }
  plStack_78 = (long *)0x450b258;
  pTVar22 = pTVar21;
  PatreonEffects_NameFontCatalog__Apply(pTVar19,(System_String_o *)pTVar21,(MethodInfo *)0x0);
  plStack_78 = (long *)0x450b260;
  __this_00 = (TMPro_TMP_Text_o *)plVar28;
  pTVar20 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                      ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)plVar28,(MethodInfo *)pTVar22);
  uVar17 = (uint)pTVar22;
  if (pTVar20 != (TMPro_TMP_Text_o *)0x0) {
    in_RCX = pTVar20->klass;
    pMVar27 = (in_RCX->vtable)._23_set_color.method;
    plStack_78 = (long *)0x450b286;
    (*(in_RCX->vtable)._23_set_color.methodPtr)(0x3f800000,0x3f8000003f800000,pTVar20);
    plStack_78 = (long *)0x450b28e;
    pTVar21 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                        ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)plVar28,pMVar27);
    uVar17 = (uint)pMVar27;
    __this_00 = (TMPro_TMP_Text_o *)0x0;
    plStack_78 = (long *)0x450b2a2;
    uVar16 = il2cpp_runtime_helper_03b428b0(0x3f800000,0x3f8000003f800000);
    if (pTVar21 != (TMPro_TMP_Text_o *)0x0) {
      value.fields.r = '\0';
      value.fields.g = '\0';
      value.fields.b = '\0';
      value.fields.a = '\0';
      value.fields.rgba = uVar16;
      plStack_78 = (long *)0x450b2b3;
      TMPro_TMP_Text__set_faceColor(pTVar21,value,(MethodInfo *)0x0);
      *(MethodInfo **)&(((TMPro_TMP_Text_o *)plVar28)->fields).m_Color.fields.b = method;
      plStack_78 = (long *)0x450b2c3;
      pMVar27 = method;
      il2cpp_runtime_helper_022b4080(&(((TMPro_TMP_Text_o *)plVar28)->fields).m_Color.fields.b);
      plStack_78 = (long *)0x450b2cb;
      Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__HookVertexColors
                ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)plVar28,pMVar27);
      plStack_78 = (long *)0x450b2d3;
      __this_00 = (TMPro_TMP_Text_o *)plVar28;
      pTVar22 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                          ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)plVar28,pMVar27);
      uVar17 = (uint)pMVar27;
      if (pTVar22 != (TMPro_TMP_Text_o *)0x0) {
        UNRECOVERED_JUMPTABLE_00 = (pTVar22->klass->vtable)._106_ForceMeshUpdate.methodPtr;
        pUVar23 = (UnityEngine_Color_array *)
                  (*UNRECOVERED_JUMPTABLE_00)
                            (pTVar22,0,0,(pTVar22->klass->vtable)._106_ForceMeshUpdate.method,
                             UNRECOVERED_JUMPTABLE_00);
        return pUVar23;
      }
    }
  }
  plStack_78 = (long *)0x450b303;
  il2cpp_runtime_helper_022b2c90();
  pTVar20 = (TMPro_TMP_Text_o *)(ulong)uVar17;
  pTVar22 = extraout_RDX_00;
  pTStack_98 = (TMPro_TMP_Text_o *)plVar28;
  pTStack_90 = pTVar19;
  pMStack_88 = method;
  pTStack_80 = pTVar21;
  plStack_78 = unaff_RBP;
  if (g_data_057aed5a == '\0') {
    pTStack_a0 = (TMPro_TMP_Text_o *)0x450b339;
    il2cpp_runtime_helper_023445d0(&MethodInfo_NameEffectController_AddComponent_NameEffectController);
    pTStack_a0 = (TMPro_TMP_Text_o *)0x450b345;
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameFontCatalog);
    g_data_057aed5a = '\x01';
    pTVar22 = extraout_RDX_01;
  }
  pTStack_a0 = (TMPro_TMP_Text_o *)0x450b357;
  pTVar26 = in_RCX;
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ResetPlainVisuals
            ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)__this_00,(System_String_o *)in_RCX,
             (MethodInfo *)pTVar22);
  pTStack_a0 = (TMPro_TMP_Text_o *)0x450b35f;
  pTVar21 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                      ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)__this_00,(MethodInfo *)pTVar26
                      );
  if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
    pTStack_a0 = (TMPro_TMP_Text_o *)0x450b37a;
    il2cpp_runtime_helper_02337ed0();
  }
  pTStack_a0 = (TMPro_TMP_Text_o *)0x450b387;
  PatreonEffects_NameFontCatalog__Apply(pTVar21,(System_String_o *)in_RCX,(MethodInfo *)0x0);
  pTStack_a0 = (TMPro_TMP_Text_o *)0x450b38f;
  pTVar21 = __this_00;
  pTVar19 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                      ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)__this_00,(MethodInfo *)in_RCX)
  ;
  if (pTVar19 == (TMPro_TMP_Text_o *)0x0) {
label_0450b444:
    pTStack_a0 = (TMPro_TMP_Text_o *)0x450b449;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    in_RCX = (TMPro_TMP_Text_c *)0x0;
    pTStack_a0 = (TMPro_TMP_Text_o *)0x450b3a2;
    __this = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pTVar19,(MethodInfo *)0x0);
    pTVar21 = pTVar19;
    if (__this == (UnityEngine_GameObject_o *)0x0) goto label_0450b444;
    pTStack_a0 = (TMPro_TMP_Text_o *)0x450b3bd;
    pIVar24 = UnityEngine_GameObject__AddComponent_object_(__this,MethodInfo_NameEffectController_AddComponent_NameEffectController);
    *(Il2CppObject **)&(__this_00->fields).m_Color.fields = pIVar24;
    __this_00 = (TMPro_TMP_Text_o *)&(__this_00->fields).m_Color;
    pTStack_a0 = (TMPro_TMP_Text_o *)0x450b3d0;
    il2cpp_runtime_helper_022b4080(__this_00);
    in_RCX = (TMPro_TMP_Text_c *)0x0;
    pTStack_a0 = (TMPro_TMP_Text_o *)0x450b3da;
    pTVar21 = pTVar20;
    settings = PatreonEffects_NameEffectPresets__GetPreset(uVar17,(MethodInfo *)0x0);
    if (extraout_RDX_00 == (TMPro_TMP_Text_o *)0x0) goto label_0450b444;
    pSVar10 = (extraout_RDX_00->fields).m_CancellationTokenSource;
    if (pSVar10 == (System_Threading_CancellationTokenSource_o *)0x0) {
label_0450b42a:
      pTVar21 = (TMPro_TMP_Text_o *)0x0;
      if (*(PatreonEffects_NameEffectController_o **)&((UnityEngine_Color_o *)__this_00)->fields !=
          (PatreonEffects_NameEffectController_o *)0x0) {
        PatreonEffects_NameEffectController__Apply
                  (*(PatreonEffects_NameEffectController_o **)&((UnityEngine_Color_o *)__this_00)->fields,
                   settings,(MethodInfo *)0x0);
        return extraout_RAX;
      }
      goto label_0450b444;
    }
    if ((int)pSVar10 != 0) {
      if (settings == (PatreonEffects_NameEffectSettings_o *)0x0) goto label_0450b444;
      fVar30 = (extraout_RDX_00->fields).m_Color.fields.r;
      fVar31 = (extraout_RDX_00->fields).m_Color.fields.g;
      *(UnityEngine_Material_o **)&(settings->fields).gradientA.fields = (extraout_RDX_00->fields).m_Material;
      (settings->fields).gradientA.fields.b = fVar30;
      (settings->fields).gradientA.fields.a = fVar31;
      if (1 < *(int *)&(extraout_RDX_00->fields).m_CancellationTokenSource) {
        fVar30 = (extraout_RDX_00->fields).m_Color.fields.a;
        bVar15 = (extraout_RDX_00->fields).m_SkipLayoutUpdate;
        bVar12 = (extraout_RDX_00->fields).m_SkipMaterialUpdate;
        (settings->fields).gradientB.fields.r = (extraout_RDX_00->fields).m_Color.fields.b;
        (settings->fields).gradientB.fields.g = fVar30;
        (settings->fields).gradientB.fields.b = (float)bVar15;
        (settings->fields).gradientB.fields.a = (float)bVar12;
        if (2 < *(int *)&(extraout_RDX_00->fields).m_CancellationTokenSource) {
          bVar15 = (extraout_RDX_00->fields).m_RaycastTargetCache;
          fVar30 = (extraout_RDX_00->fields).m_RaycastPadding.fields.x;
          fVar31 = (extraout_RDX_00->fields).m_RaycastPadding.fields.y;
          (settings->fields).gradientC.fields.r = (float)(extraout_RDX_00->fields).m_RaycastTarget;
          (settings->fields).gradientC.fields.g = (float)bVar15;
          (settings->fields).gradientC.fields.b = fVar30;
          (settings->fields).gradientC.fields.a = fVar31;
          if (3 < *(int *)&(extraout_RDX_00->fields).m_CancellationTokenSource) {
            fVar30 = (extraout_RDX_00->fields).m_RaycastPadding.fields.w;
            pUVar11 = (extraout_RDX_00->fields).m_RectTransform;
            (settings->fields).gradientD.fields.r = (extraout_RDX_00->fields).m_RaycastPadding.fields.z;
            (settings->fields).gradientD.fields.g = fVar30;
            *(UnityEngine_RectTransform_o **)&(settings->fields).gradientD.fields.b = pUVar11;
          }
        }
      }
      goto label_0450b42a;
    }
  }
  pTStack_a0 = (TMPro_TMP_Text_o *)0x450b44e;
  il2cpp_runtime_helper_022b2ca0();
  ppTVar25 = &pTStack_b0;
  pTStack_b0 = __this_00;
  pTStack_a8 = extraout_RDX_00;
  pTStack_a0 = pTVar20;
  if (g_data_057aed50 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterStyleChoicePreview);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed50 = '\x01';
  }
  plVar28 = &TypeInfo_AottgCharacterStyleChoicePreview;
  if (*(int *)(TypeInfo_AottgCharacterStyleChoicePreview + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pTVar19 = (TMPro_TMP_Text_o *)
            Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__Preview
                      ((Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *)pTVar21,
                       (MethodInfo *)in_RCX);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar27 = (MethodInfo *)0x0;
  bVar15 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pTVar19,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar15 != '\0') {
    return (UnityEngine_Color_array *)CONCAT44(extraout_var,bVar15);
  }
  if (*(int *)(TypeInfo_AottgCharacterStyleChoicePreview + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pTVar22 = pTVar21;
  Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__ApplyDarkSurface
            ((Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *)pTVar21,pMVar27);
  if (pTVar21 != (TMPro_TMP_Text_o *)0x0) {
    bVar2 = (byte)(pTVar21->fields).m_SkipMaterialUpdate;
    pMVar27 = (MethodInfo *)(ulong)bVar2;
    pTVar22 = pTVar21;
    Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__SetFeedback
              ((Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *)pTVar21,(uint)bVar2,method_00)
    ;
    if ((char)(pTVar21->fields).m_SkipMaterialUpdate == '\0') {
      if (pTVar19 != (TMPro_TMP_Text_o *)0x0) {
        Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureDisabled
                  ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pTVar19,pMVar27);
        return extraout_RAX_00;
      }
    }
    else if (pTVar19 != (TMPro_TMP_Text_o *)0x0) {
      pMVar27 = *(MethodInfo **)&(pTVar21->fields).m_Color.fields.b;
      method_01 = extraout_RDX_02;
      pTVar21 = pTStack_b0;
      ppTVar25 = &pTStack_98;
      pTVar22 = pTVar19;
      pTVar19 = pTStack_a8;
      plVar28 = (long *)pTStack_a0;
      goto Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureFont;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  method_01 = extraout_RDX_03;
Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureFont:
  *(long **)((long)ppTVar25 + -8) = plVar28;
  *(TMPro_TMP_Text_o **)((long)ppTVar25 + -0x10) = pTVar19;
  *(TMPro_TMP_Text_o **)((long)ppTVar25 + -0x18) = pTVar21;
  if (g_data_057aed57 == '\0') {
    *(undefined8 *)((long)ppTVar25 + -0x20) = 0x450b550;
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameFontCatalog);
    g_data_057aed57 = '\x01';
    method_01 = extraout_RDX_04;
  }
  *(undefined8 *)((long)ppTVar25 + -0x20) = 0x450b562;
  method_02 = pMVar27;
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ResetPlainVisuals
            ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pTVar22,(System_String_o *)pMVar27,
             method_01);
  *(undefined8 *)((long)ppTVar25 + -0x20) = 0x450b56a;
  pTVar21 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                      ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pTVar22,method_02);
  if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
    *(undefined8 *)((long)ppTVar25 + -0x20) = 0x450b585;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)ppTVar25 + -0x20) = 0x450b592;
  PatreonEffects_NameFontCatalog__Apply(pTVar21,(System_String_o *)pMVar27,(MethodInfo *)0x0);
  *(undefined8 *)((long)ppTVar25 + -0x20) = 0x450b59a;
  pTVar21 = pTVar22;
  pTVar19 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                      ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pTVar22,pMVar27);
  if (pTVar19 != (TMPro_TMP_Text_o *)0x0) {
    pMVar27 = (pTVar19->klass->vtable)._23_set_color.method;
    UNRECOVERED_JUMPTABLE_00 = (pTVar19->klass->vtable)._23_set_color.methodPtr;
    *(undefined8 *)((long)ppTVar25 + -0x20) = 0x450b5bc;
    (*UNRECOVERED_JUMPTABLE_00)(0x3f800000,0x3f8000003f800000,pTVar19);
    *(undefined8 *)((long)ppTVar25 + -0x20) = 0x450b5c4;
    pTVar19 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                        ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pTVar22,pMVar27);
    pTVar21 = (TMPro_TMP_Text_o *)0x0;
    *(undefined8 *)((long)ppTVar25 + -0x20) = 0x450b5d8;
    uVar17 = il2cpp_runtime_helper_03b428b0(0x3f800000,0x3f8000003f800000);
    if (pTVar19 != (TMPro_TMP_Text_o *)0x0) {
      value_00.r = '\0';
      value_00.g = '\0';
      value_00.b = '\0';
      value_00.a = '\0';
      value_00.rgba = uVar17;
      *(undefined8 *)((long)ppTVar25 + -0x20) = 0x450b5e9;
      TMPro_TMP_Text__set_faceColor(pTVar19,(UnityEngine_Color32_o)value_00,(MethodInfo *)0x0);
      *(undefined8 *)((long)ppTVar25 + -0x20) = 0x450b5f1;
      pTVar19 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text
                          ((Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)pTVar22,
                           (MethodInfo *)value_00);
      pTVar21 = pTVar22;
      if (pTVar19 != (TMPro_TMP_Text_o *)0x0) {
        UNRECOVERED_JUMPTABLE_00 = (pTVar19->klass->vtable)._106_ForceMeshUpdate.methodPtr;
        pUVar23 = (UnityEngine_Color_array *)
                  (*UNRECOVERED_JUMPTABLE_00)
                            (pTVar19,0,0,(pTVar19->klass->vtable)._106_ForceMeshUpdate.method,
                             UNRECOVERED_JUMPTABLE_00);
        return pUVar23;
      }
    }
  }
  *(undefined8 *)((long)ppTVar25 + -0x20) = 0x450b61b;
  il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)((long)ppTVar25 + -0x30) = 0;
  *(undefined8 *)((long)ppTVar25 + -0x28) = 0;
  *(undefined8 *)((long)ppTVar25 + -0x38) = 0x450b635;
  bVar15 = UnityEngine_ColorUtility__TryParseHtmlString
                     ((System_String_o *)pTVar21,(UnityEngine_Color_o *)((long)ppTVar25 + -0x30),
                      (MethodInfo *)0x0);
  if ((char)bVar15 != '\0') {
    return (UnityEngine_Color_array *)CONCAT44(extraout_var_00,bVar15);
  }
  return (UnityEngine_Color_array *)CONCAT44(extraout_var_00,bVar15);
}


// Gisketch.Aottg2UI.Game.AottgCharacterStyleChoicePreview$$Parse
// il2cpp: UnityEngine_Color_o Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__Parse (System_String_o* hex, const MethodInfo* method);
// 0x450b620

UnityEngine_Color_o
Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__Parse_440b620
          (System_String_o *hex,MethodInfo *method)

{
  UnityEngine_Color_Fields UVar1;
  bool_conflict bVar2;
  UnityEngine_Color_o UVar3;
  UnityEngine_Color_Fields UStack_18;
  
  UStack_18.r = 0.0;
  UStack_18.g = 0.0;
  UStack_18.b = 0.0;
  UStack_18.a = 0.0;
  bVar2 = UnityEngine_ColorUtility__TryParseHtmlString
                    (hex,(UnityEngine_Color_o *)&UStack_18,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    UVar3.fields.b = 1.0;
    UVar3.fields.a = 1.0;
    UVar3.fields.r = 1.0;
    UVar3.fields.g = 1.0;
    return (UnityEngine_Color_o)UVar3.fields;
  }
  UVar1.b = UStack_18.b;
  UVar1.a = UStack_18.a;
  UVar1.r = UStack_18.r;
  UVar1.g = UStack_18.g;
  return (UnityEngine_Color_o)UVar1;
}


// Gisketch.Aottg2UI.Game.AottgCharacterStyleChoicePreview$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview___cctor (const MethodInfo* method);
// 0x450b660

void Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview___cctor(MethodInfo *method)

{
  long lVar1;
  UnityEngine_Object_o *x;
  TMPro_ITextPreprocessor_o *pTVar2;
  Il2CppMethodPointer vtableDispatch;
  bool_conflict bVar3;
  long lVar4;
  TMPro_TMP_Text_o *pTVar5;
  TMPro_TMP_Text_o *pTVar6;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *pMVar7;
  MethodInfo *pMVar8;
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *__this;
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *__this_00;
  
  if (g_data_057aed55 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterStyleChoicePreview);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"#B7F8C8FF");
    il2cpp_runtime_helper_023445d0(&"#8CEBFFFF");
    il2cpp_runtime_helper_023445d0(&"#A8F5D6FF");
    il2cpp_runtime_helper_023445d0(&"#97F0E8FF");
    g_data_057aed55 = '\x01';
  }
  method_02 = (MethodInfo *)0x2;
  __this = TypeInfo_string;
  lVar4 = il2cpp_runtime_helper_022b2a40();
  pMVar8 = "#B7F8C8FF";
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x18) != 0) {
      __this = (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)(lVar4 + 0x20);
      *(MethodInfo **)(lVar4 + 0x20) = "#B7F8C8FF";
      il2cpp_runtime_helper_022b4080();
      method_02 = pMVar8;
      if (1 < *(uint *)(lVar4 + 0x18)) {
        *(undefined8 *)(lVar4 + 0x28) = "#8CEBFFFF";
        il2cpp_runtime_helper_022b4080(lVar4 + 0x28);
        **(long **)(TypeInfo_AottgCharacterStyleChoicePreview + 0xb8) = lVar4;
        il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_AottgCharacterStyleChoicePreview + 0xb8),lVar4);
        method_02 = (MethodInfo *)&g_data_00000004;
        __this = TypeInfo_string;
        lVar4 = il2cpp_runtime_helper_022b2a40();
        pMVar8 = "#B7F8C8FF";
        if (lVar4 == 0) goto label_0450b818;
        if (*(int *)(lVar4 + 0x18) != 0) {
          __this = (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)(lVar4 + 0x20);
          *(MethodInfo **)(lVar4 + 0x20) = "#B7F8C8FF";
          il2cpp_runtime_helper_022b4080();
          pMVar7 = "#A8F5D6FF";
          method_02 = pMVar8;
          if (1 < *(uint *)(lVar4 + 0x18)) {
            __this = (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)(lVar4 + 0x28);
            *(MethodInfo **)(lVar4 + 0x28) = "#A8F5D6FF";
            il2cpp_runtime_helper_022b4080();
            pMVar8 = "#97F0E8FF";
            method_02 = pMVar7;
            if (2 < *(uint *)(lVar4 + 0x18)) {
              __this = (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)(lVar4 + 0x30);
              *(MethodInfo **)(lVar4 + 0x30) = "#97F0E8FF";
              il2cpp_runtime_helper_022b4080();
              method_02 = pMVar8;
              if (3 < *(uint *)(lVar4 + 0x18)) {
                *(undefined8 *)(lVar4 + 0x38) = "#8CEBFFFF";
                il2cpp_runtime_helper_022b4080(lVar4 + 0x38);
                lVar1 = *(long *)(TypeInfo_AottgCharacterStyleChoicePreview + 0xb8);
                *(long *)(lVar1 + 8) = lVar4;
                il2cpp_runtime_helper_022b4080(lVar1 + 8,lVar4);
                lVar4 = *(long *)(TypeInfo_AottgCharacterStyleChoicePreview + 0xb8);
                *(undefined8 *)(lVar4 + 0x10) = 0x3e0f5c293e0f5c29;
                *(undefined8 *)(lVar4 + 0x18) = 0x3f8000003e0f5c29;
                return;
              }
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_0450b818:
  il2cpp_runtime_helper_022b2c90();
  pMVar8 = method_02;
  if (g_data_057aed5f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameFontCatalog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"PopExtrusion");
    il2cpp_runtime_helper_023445d0(&"PopShadow");
    g_data_057aed5f = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ClearVertexColors(__this,pMVar8);
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ClearAllEffects(__this,pMVar8);
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__DestroyStalePopLayer(__this,"PopShadow",method_00);
  pMVar8 = "PopExtrusion";
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__DestroyStalePopLayer
            (__this,(System_String_o *)"PopExtrusion",method_01);
  pTVar5 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,pMVar8);
  if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  PatreonEffects_NameFontCatalog__Apply(pTVar5,(System_String_o *)method_02,(MethodInfo *)0x0);
  __this_00 = __this;
  pTVar5 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,method_02);
  if (pTVar5 != (TMPro_TMP_Text_o *)0x0) {
    x = (UnityEngine_Object_o *)(pTVar5->fields).m_TextPreprocessor;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar8 = (MethodInfo *)0x0;
    bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      return;
    }
    pTVar5 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,pMVar8);
    pTVar6 = Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__get_Text(__this,pMVar8);
    __this_00 = __this;
    if (((pTVar6 != (TMPro_TMP_Text_o *)0x0) &&
        (pTVar2 = (pTVar6->fields).m_TextPreprocessor, pTVar2 != (TMPro_ITextPreprocessor_o *)0x0)) &&
       (pTVar5 != (TMPro_TMP_Text_o *)0x0)) {
      vtableDispatch = (pTVar5->klass->vtable)._68_set_fontSharedMaterial.methodPtr;
      (*vtableDispatch)
                (pTVar5,pTVar2[2].klass,(pTVar5->klass->vtable)._68_set_fontSharedMaterial.method,
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
  pTVar5 = (__this_00->fields)._text;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    pTVar5 = (TMPro_TMP_Text_o *)
             UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_00,MethodInfo_TMP_Text_GetComponent_TMP_Text);
    (__this_00->fields)._text = pTVar5;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields)._text,pTVar5);
  }
  return;
}


