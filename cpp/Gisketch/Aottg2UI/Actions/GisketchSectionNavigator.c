// Type: Gisketch.Aottg2UI.Actions.GisketchSectionNavigator
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchSectionNavigator.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator.<>c__DisplayClass27_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator___c__DisplayClass27_0___ctor (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator___c__DisplayClass27_0_o* __this, const MethodInfo* method);
// 0x3b9b2e0

void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator___c__DisplayClass27_0___ctor
               (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator___c__DisplayClass27_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator.<>c__DisplayClass27_0$$<AnimateSection>b__0
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator___c__DisplayClass27_0___AnimateSection_b__0 (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator___c__DisplayClass27_0_o* __this, float value, const MethodInfo* method);
// 0x3b9b750

void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator___c__DisplayClass27_0___AnimateSection_b__0
               (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator___c__DisplayClass27_0_o *__this,float value
               ,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  UnityEngine_RectTransform_c *extraout_RDX;
  UnityEngine_RectTransform_c *method_00;
  UnityEngine_RectTransform_o *target;
  Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *__this_00;
  
  __this_00 = (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *)(__this->fields).group;
  if (__this_00 != (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *)0x0) {
    UnityEngine_CanvasGroup__set_alpha((UnityEngine_CanvasGroup_o *)__this_00,value,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9f22 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransform);
    g_data_057a9f22 = '\x01';
  }
  UnityEngine_EventSystems_UIBehaviour__Awake
            ((UnityEngine_EventSystems_UIBehaviour_o *)__this_00,(MethodInfo *)0x0);
  pUVar1 = (UnityEngine_RectTransform_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
  method_00 = extraout_RDX;
  target = (UnityEngine_RectTransform_o *)0x0;
  if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
    method_00 = pUVar1->klass;
    target = (UnityEngine_RectTransform_o *)0x0;
    if (method_00 == TypeInfo_RectTransform) {
      target = pUVar1;
    }
  }
  Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__Setup(__this_00,target,(MethodInfo *)method_00);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$get_ActiveSectionId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__get_ActiveSectionId (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o* __this, const MethodInfo* method);
// 0x3b99d10

System_String_o *
Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__get_ActiveSectionId
          (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  System_String_array *pSVar3;
  UnityEngine_UI_ScrollRect_o *pUVar4;
  long lVar5;
  UnityEngine_RectTransform_o *__this_00;
  long *plVar6;
  code *pcVar7;
  UnityEngine_Component_o *__this_01;
  undefined1 auVar8 [16];
  UnityEngine_Vector2_o *pUVar9;
  Il2CppClass **ppIVar10;
  bool_conflict bVar11;
  undefined4 extraout_var;
  Il2CppClass *pIVar12;
  undefined4 extraout_var_00;
  UnityEngine_UI_Image_o *pUVar13;
  undefined4 extraout_var_01;
  System_String_o *extraout_RAX;
  undefined4 extraout_var_02;
  UnityEngine_Transform_o *__this_02;
  Il2CppClass *pIVar14;
  System_String_o *pSVar15;
  UnityEngine_RectTransform_o *pUVar16;
  Il2CppClass *pIVar17;
  Il2CppClass *name;
  void *pvVar18;
  undefined4 extraout_var_03;
  System_String_o *extraout_RAX_00;
  undefined4 extraout_var_04;
  undefined4 extraout_var_05;
  undefined4 extraout_var_06;
  undefined4 extraout_var_07;
  DG_Tweening_Tween_o *extraout_RAX_01;
  DG_Tweening_Core_DOGetter_float__o *getter;
  DG_Tweening_Core_DOSetter_float__o *setter;
  DG_Tweening_Core_TweenerCore_float__float__FloatOptions__o *t;
  Il2CppObject *t_00;
  Il2CppClass *pIVar19;
  DG_Tweening_Tween_o *pDVar20;
  DG_Tweening_Tween_o *extraout_RAX_02;
  undefined8 uVar21;
  undefined4 extraout_var_08;
  undefined4 extraout_var_09;
  Gilzoide_FlexUi_FlexLayout_o *__this_03;
  System_String_o *extraout_RAX_03;
  System_String_o *extraout_RAX_04;
  UnityEngine_Vector2_Fields UVar22;
  UnityEngine_Vector2_Fields method_00;
  System_String_o *a;
  ulong uVar23;
  ulong extraout_RDX;
  UnityEngine_Vector2_Fields UVar24;
  MethodInfo *pMVar25;
  UnityEngine_Vector2_Fields UVar26;
  UnityEngine_Vector2_Fields UVar27;
  Gilzoide_FlexUi_FlexLayout_o *x;
  UnityEngine_UI_Image_o **ppUVar28;
  Il2CppClass *unaff_RBP;
  MethodInfo *pMVar29;
  Il2CppClass *method_01;
  Il2CppClass *__this_04;
  UnityEngine_RectTransform_o *__this_05;
  Gilzoide_FlexUi_FlexLayout_o *__this_06;
  UnityEngine_Vector2_Fields UVar30;
  Il2CppClass *unaff_R13;
  uint uVar31;
  float fVar32;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined4 in_XMM1_Dc;
  undefined4 uVar33;
  undefined4 in_XMM1_Dd;
  undefined4 uVar34;
  float fVar35;
  undefined1 auVar36 [16];
  UnityEngine_Rect_o UVar37;
  undefined8 uStack_108;
  UnityEngine_Vector2_Fields UStack_100;
  UnityEngine_Vector2_Fields UStack_f8;
  Il2CppClass *pIStack_f0;
  Il2CppClass *pIStack_e8;
  Il2CppClass *pIStack_e0;
  Il2CppClass *pIStack_d8;
  MethodInfo *pMStack_d0;
  Il2CppClass *pIStack_c8;
  UnityEngine_Vector2_o *pUStack_c0;
  undefined8 uStack_b8;
  MethodInfo *pMStack_b0;
  undefined8 *puStack_a8;
  Il2CppClass *pIStack_a0;
  ulong uStack_98;
  Il2CppClass *pIStack_90;
  Il2CppClass *pIStack_88;
  undefined8 uStack_80;
  UnityEngine_Vector2_Fields UStack_78;
  Il2CppClass *pIStack_70;
  UnityEngine_Vector2_Fields UStack_68;
  UnityEngine_UI_Image_o *pUStack_58;
  Il2CppClass *pIStack_50;
  
  pSVar3 = (__this->fields)._sectionIds;
  if (pSVar3 == (System_String_array *)0x0) {
label_03b99d3b:
    return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  uVar31 = (__this->fields)._activeIndex;
  UVar22 = (UnityEngine_Vector2_Fields)(long)(int)uVar31;
  if (((long)UVar22 < 0) || (uVar2 = (uint)pSVar3->max_length, (int)uVar2 <= (int)uVar31)) goto label_03b99d3b;
  if (uVar31 < uVar2) {
    return pSVar3->m_Items[(long)UVar22];
  }
  il2cpp_runtime_helper_022b2ca0();
  method_00 = UVar22;
  pIVar19 = (Il2CppClass *)__this;
  pIVar14 = TypeInfo_string;
  if (g_data_057a9f15 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"brush-side-panel");
    pIVar19 = (Il2CppClass *)&"Separate";
    il2cpp_runtime_helper_023445d0();
    g_data_057a9f15 = '\x01';
    pIVar14 = TypeInfo_string;
  }
  TypeInfo_string = pIVar14;
  if ((UnityEngine_UI_Image_o *)method == (UnityEngine_UI_Image_o *)0x0) {
    method = (MethodInfo *)il2cpp_runtime_helper_022b2a40();
    pIVar19 = pIVar14;
  }
  if ((Il2CppClass *)__this != (Il2CppClass *)0x0) {
    (((Il2CppClass *)__this)->_1).byval_arg.data = method;
    il2cpp_runtime_helper_022b4080(&(((Il2CppClass *)__this)->_1).byval_arg);
    bVar11 = System_String__IsNullOrEmpty((System_String_o *)UVar22,(MethodInfo *)0x0);
    if ((char)bVar11 != '\0') {
      UVar22 = "brush-side-panel";
    }
    *(UnityEngine_Vector2_Fields *)&(((Il2CppClass *)__this)->_1).byval_arg.bits = UVar22;
    il2cpp_runtime_helper_022b4080(&(((Il2CppClass *)__this)->_1).byval_arg.bits,UVar22);
    bVar11 = System_String__Equals_3af50f0(a,"Separate",5,(MethodInfo *)0x0);
    *(char *)&(((Il2CppClass *)__this)->_1).this_arg.data = (char)bVar11;
    return (System_String_o *)CONCAT44(extraout_var,bVar11);
  }
  il2cpp_runtime_helper_022b2c90();
  pUStack_58 = (UnityEngine_UI_Image_o *)method;
  pIStack_50 = (Il2CppClass *)__this;
  if (g_data_057a9f20 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchSectionNavigator_GetComponentInChildren_Gisketch);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9f20 = '\x01';
  }
  UVar30 = (UnityEngine_Vector2_Fields)&TypeInfo_Object;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar12 = (Il2CppClass *)0x0;
  pMVar25 = (MethodInfo *)0x0;
  pIVar14 = pIVar19;
  bVar11 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pIVar19,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar11 == '\0') {
label_03b99ec5:
    unaff_R13 = (Il2CppClass *)&MethodInfo_GisketchSectionNavigator_GetComponentInChildren_Gisketch;
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
    while( true ) {
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar25 = (MethodInfo *)0x0;
      pIVar14 = pIVar12;
      bVar11 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)pIVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar11 == '\0') {
        UVar22.x = 0.0;
        UVar22.y = 0.0;
        return (System_String_o *)UVar22;
      }
      if (pIVar12 == (Il2CppClass *)0x0) break;
      UVar22 = (UnityEngine_Vector2_Fields)
               UnityEngine_Component__GetComponentInChildren_object_
                         ((UnityEngine_Component_o *)pIVar12,1,MethodInfo_GisketchSectionNavigator_GetComponentInChildren_Gisketch);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar11 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)UVar22,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar11 != '\0') {
        uVar21._0_4_ = UVar22.x;
        uVar21._4_4_ = UVar22.y;
        return (System_String_o *)uVar21;
      }
      pIVar12 = (Il2CppClass *)
                UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)pIVar12,(MethodInfo *)0x0);
      iVar1 = *(int *)(TypeInfo_Object + 0xe4);
    }
  }
  else if (pIVar19 != (Il2CppClass *)0x0) {
    pIVar12 = (Il2CppClass *)
              UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pIVar19,(MethodInfo *)0x0);
    goto label_03b99ec5;
  }
  UVar24.x = 0.0;
  UVar24.y = 0.0;
  auVar36 = il2cpp_runtime_helper_022b2c90();
  uStack_80 = auVar36._0_8_;
  uVar23 = auVar36._8_8_ & 0xffffffff;
  pMVar29 = pMVar25;
  UStack_78 = UVar24;
  pIStack_70 = (Il2CppClass *)0x0;
  UStack_68 = UVar22;
  if (g_data_057a9f17 == '\0') {
    pIStack_88 = (Il2CppClass *)0x3b99f95;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9f17 = '\x01';
  }
  pIStack_88 = (Il2CppClass *)0x3b99fa4;
  pIVar19 = pIVar14;
  Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Resolve
            ((Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)pIVar14,pMVar29);
  pUVar13 = (pIVar14->_1).byval_arg.data;
  pIVar12 = unaff_RBP;
  if (pUVar13 != (UnityEngine_UI_Image_o *)0x0) {
    pIVar12 = (Il2CppClass *)0x0;
    do {
      uVar31 = *(uint *)&(pUVar13->fields).m_CancellationTokenSource;
      if ((long)(int)uVar31 <= (long)pIVar12) {
        return (System_String_o *)pUVar13;
      }
      if ((Il2CppClass *)(ulong)uVar31 <= pIVar12) goto label_03b9a0a0;
      pIVar19 = (Il2CppClass *)(&(pUVar13->fields).m_Material)[(long)pIVar12];
      method_00.x = 0.0;
      method_00.y = 0.0;
      pIStack_88 = (Il2CppClass *)0x3b99fdc;
      pMVar29 = pMVar25;
      bVar11 = System_String__Equals_3af50f0
                         ((System_String_o *)pIVar19,(System_String_o *)pMVar25,5,(MethodInfo *)0x0);
      pUVar13 = (UnityEngine_UI_Image_o *)CONCAT44(extraout_var_00,bVar11);
      if ((char)bVar11 != '\0') goto label_03b99ff2;
      pIVar12 = (Il2CppClass *)((long)&(pIVar12->_1).image + 1);
      pUVar13 = (pIVar14->_1).byval_arg.data;
    } while (pUVar13 != (UnityEngine_UI_Image_o *)0x0);
  }
  do {
    while( true ) {
      pIStack_88 = (Il2CppClass *)0x3b99ff2;
      pUVar13 = (UnityEngine_UI_Image_o *)il2cpp_runtime_helper_022b2c90();
label_03b99ff2:
      fVar32 = SUB84(pIVar12,0);
      if (((int)fVar32 < 0) || ((((UnityEngine_Color_o *)&(pIVar14->_1).parent)->fields).r == fVar32)) {
        return (System_String_o *)pUVar13;
      }
      pMVar29 = (MethodInfo *)((ulong)pIVar12 & 0xffffffff);
      pIStack_88 = (Il2CppClass *)0x3b9a00b;
      pIVar19 = pIVar14;
      Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__SetActive
                ((Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)pIVar14,(int32_t)fVar32,
                 (uint)*(byte *)&(pIVar14->_1).this_arg.data,(MethodInfo *)method_00);
      if (*(char *)&(pIVar14->_1).this_arg.data == '\0') break;
      pMVar25 = *(MethodInfo **)&(pIVar14->_1).this_arg.bits;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        pIStack_88 = (Il2CppClass *)0x3b9a02e;
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar29 = (MethodInfo *)0x0;
      pIStack_88 = (Il2CppClass *)0x3b9a03a;
      bVar11 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)pMVar25,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar11 == '\0') {
        return (System_String_o *)(UnityEngine_UI_Image_o *)CONCAT44(extraout_var_01,bVar11);
      }
      pIStack_88 = (Il2CppClass *)0x3b9a046;
      Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__RefreshSeparateLayout
                ((Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)pIVar14,pMVar29);
      pUVar4 = *(UnityEngine_UI_ScrollRect_o **)&(pIVar14->_1).this_arg.bits;
      if (pUVar4 != (UnityEngine_UI_ScrollRect_o *)0x0) {
        UnityEngine_UI_ScrollRect__set_verticalNormalizedPosition(pUVar4,1.0,(MethodInfo *)0x0);
        return extraout_RAX;
      }
    }
    UVar22 = ((UnityEngine_Vector2_o *)&(pIVar14->_1).element_class)->fields;
  } while (UVar22 == (UnityEngine_Vector2_Fields)0x0);
  if ((uint)*(float *)((long)UVar22 + 0x18) <= (uint)fVar32) {
label_03b9a0a0:
    pIStack_88 = (Il2CppClass *)0x3b9a0a5;
    uStack_b8 = il2cpp_runtime_helper_022b2ca0();
    puStack_a8 = &TypeInfo_Object;
    pMStack_b0 = pMVar25;
    pIStack_a0 = unaff_R13;
    uStack_98 = uVar23;
    pIStack_90 = pIVar14;
    pIStack_88 = pIVar12;
    if (g_data_057a9f18 == '\0') {
      pUStack_c0 = (UnityEngine_Vector2_o *)0x3b9a0d3;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchBrushButtonFeedback);
      pUStack_c0 = (UnityEngine_Vector2_o *)0x3b9a0df;
      il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchBrushButtonFeedback_ComponentInNamedChild_Gisket);
      pUStack_c0 = (UnityEngine_Vector2_o *)0x3b9a0eb;
      il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_ComponentInNamedChild_RectTransform);
      pUStack_c0 = (UnityEngine_Vector2_o *)0x3b9a0f7;
      il2cpp_runtime_helper_023445d0(&MethodInfo_ScrollRect_ComponentInNamedChild_ScrollRect);
      pUStack_c0 = (UnityEngine_Vector2_o *)0x3b9a103;
      il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransform);
      pUStack_c0 = (UnityEngine_Vector2_o *)0x3b9a10f;
      il2cpp_runtime_helper_023445d0(&"brush-side-panel-button-");
      pUStack_c0 = (UnityEngine_Vector2_o *)0x3b9a11b;
      il2cpp_runtime_helper_023445d0(&"-scroll");
      g_data_057a9f18 = '\x01';
    }
    pUStack_c0 = (UnityEngine_Vector2_o *)0x3b9a12a;
    bVar11 = Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__IsResolved
                       ((Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)pIVar19,pMVar29);
    pUVar13 = (UnityEngine_UI_Image_o *)CONCAT44(extraout_var_02,bVar11);
    if ((char)bVar11 == '\0') {
      pUStack_c0 = (UnityEngine_Vector2_o *)0x3b9a13c;
      __this_02 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pIVar19,(MethodInfo *)0x0);
      if (__this_02 != (UnityEngine_Transform_o *)0x0) {
        pUStack_c0 = (UnityEngine_Vector2_o *)0x3b9a14f;
        pIVar14 = (Il2CppClass *)UnityEngine_Transform__get_parent(__this_02,(MethodInfo *)0x0);
        pUStack_c0 = (UnityEngine_Vector2_o *)0x3b9a167;
        pSVar15 = System_String__Concat_3ae5ba0
                            ((System_String_o *)*(UnityEngine_UI_Image_o **)&(pIVar19->_1).byval_arg.bits,
                             "-scroll",(MethodInfo *)0x0);
        pUStack_c0 = (UnityEngine_Vector2_o *)0x3b9a17c;
        pUVar16 = (UnityEngine_RectTransform_o *)
                  Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__ComponentInNamedChild_object_
                            ((UnityEngine_Transform_o *)pIVar14,pSVar15,MethodInfo_ScrollRect_ComponentInNamedChild_ScrollRect);
        *(UnityEngine_RectTransform_o **)&(pIVar19->_1).this_arg.bits = pUVar16;
        pUStack_c0 = (UnityEngine_Vector2_o *)0x3b9a18c;
        il2cpp_runtime_helper_022b4080(&(pIVar19->_1).this_arg.bits,pUVar16);
        pUVar13 = (pIVar19->_1).byval_arg.data;
        if (pUVar13 != (UnityEngine_UI_Image_o *)0x0) {
          pUStack_c0 = (UnityEngine_Vector2_o *)0x3b9a1ab;
          UVar22 = (UnityEngine_Vector2_Fields)
                   il2cpp_runtime_helper_022b2a40(TypeInfo_RectTransform,*(undefined4 *)&(pUVar13->fields).m_CancellationTokenSource);
          pUVar9 = (UnityEngine_Vector2_o *)&(pIVar19->_1).element_class;
          ((UnityEngine_Vector2_o *)&(pIVar19->_1).element_class)->fields = UVar22;
          pUStack_c0 = (UnityEngine_Vector2_o *)0x3b9a1be;
          il2cpp_runtime_helper_022b4080(pUVar9,UVar22);
          pUVar13 = (pIVar19->_1).byval_arg.data;
          if (pUVar13 != (UnityEngine_UI_Image_o *)0x0) {
            pUStack_c0 = (UnityEngine_Vector2_o *)0x3b9a1dd;
            pIVar17 = (Il2CppClass *)
                      il2cpp_runtime_helper_022b2a40(TypeInfo_GisketchBrushButtonFeedback,*(undefined4 *)&(pUVar13->fields).m_CancellationTokenSource);
            pIVar12 = (Il2CppClass *)&(pIVar19->_1).castClass;
            *(Il2CppClass **)&((UnityEngine_Color_o *)&(pIVar19->_1).castClass)->fields = pIVar17;
            pUStack_c0 = (UnityEngine_Vector2_o *)0x3b9a1ed;
            il2cpp_runtime_helper_022b4080();
            pUVar13 = (pIVar19->_1).byval_arg.data;
            if (pUVar13 != (UnityEngine_UI_Image_o *)0x0) {
              unaff_RBP = (Il2CppClass *)0x0;
              do {
                uVar31 = *(uint *)&(pUVar13->fields).m_CancellationTokenSource;
                if ((long)(int)uVar31 <= (long)unaff_RBP) {
                  return (System_String_o *)pUVar13;
                }
                name = pIVar17;
                if ((Il2CppClass *)(ulong)uVar31 <= unaff_RBP) {
label_03b9a31c:
                  pUStack_c0 = (UnityEngine_Vector2_o *)0x3b9a321;
                  il2cpp_runtime_helper_022b2ca0();
                  pvVar18 = (pIVar12->_1).byval_arg.data;
                  pMStack_d0 = pMVar25;
                  pIStack_c8 = pIVar14;
                  pUStack_c0 = pUVar9;
                  if (pvVar18 == (void *)0x0) goto label_03b9a385;
                  UVar26.x = 0.0;
                  UVar26.y = 0.0;
                  pIVar17 = name;
                  unaff_R13 = pIVar12;
                  goto label_03b9a350;
                }
                UVar30 = pUVar9->fields;
                pMVar25 = (MethodInfo *)(&(pUVar13->fields).m_Material)[(long)unaff_RBP];
                if (g_data_057a9f1e == '\0') {
                  pUStack_c0 = (UnityEngine_Vector2_o *)0x3b9a235;
                  il2cpp_runtime_helper_023445d0(&"-section-");
                  g_data_057a9f1e = '\x01';
                }
                pUStack_c0 = (UnityEngine_Vector2_o *)0x3b9a254;
                name = (Il2CppClass *)
                       System_String__Concat_3af7150
                                 ((System_String_o *)*(UnityEngine_UI_Image_o **)&(pIVar19->_1).byval_arg.bits
                                  ,"-section-",(System_String_o *)pMVar25,(MethodInfo *)0x0);
                pUStack_c0 = (UnityEngine_Vector2_o *)0x3b9a269;
                pIVar12 = pIVar14;
                pIVar17 = (Il2CppClass *)
                          Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__ComponentInNamedChild_object_
                                    ((UnityEngine_Transform_o *)pIVar14,(System_String_o *)name,MethodInfo_RectTransform_ComponentInNamedChild_RectTransform);
                if (UVar30 == (UnityEngine_Vector2_Fields)0x0) break;
                if ((Il2CppClass *)(ulong)*(uint *)((long)UVar30 + 0x18) <= unaff_RBP) goto label_03b9a31c;
                pIVar12 = (Il2CppClass *)((undefined8 *)((long)UVar30 + (long)unaff_RBP * 8) + 4);
                ((undefined8 *)((long)UVar30 + 0x20))[(long)unaff_RBP] = pIVar17;
                pUStack_c0 = (UnityEngine_Vector2_o *)0x3b9a295;
                il2cpp_runtime_helper_022b4080();
                pUVar13 = (pIVar19->_1).byval_arg.data;
                if (pUVar13 == (UnityEngine_UI_Image_o *)0x0) break;
                name = pIVar17;
                if ((Il2CppClass *)(ulong)*(uint *)&(pUVar13->fields).m_CancellationTokenSource <= unaff_RBP)
                goto label_03b9a31c;
                pMVar25 = *(MethodInfo **)&((UnityEngine_Color_o *)&(pIVar19->_1).castClass)->fields;
                pUStack_c0 = (UnityEngine_Vector2_o *)0x3b9a2c0;
                name = (Il2CppClass *)
                       System_String__Concat_3ae5ba0
                                 ("brush-side-panel-button-",
                                  (System_String_o *)(&(pUVar13->fields).m_Material)[(long)unaff_RBP],
                                  (MethodInfo *)0x0);
                pUStack_c0 = (UnityEngine_Vector2_o *)0x3b9a2d5;
                pIVar12 = pIVar14;
                pIVar17 = (Il2CppClass *)
                          Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__ComponentInNamedChild_object_
                                    ((UnityEngine_Transform_o *)pIVar14,(System_String_o *)name,MethodInfo_GisketchBrushButtonFeedback_ComponentInNamedChild_Gisket);
                if (pMVar25 == (MethodInfo *)0x0) break;
                if ((Il2CppClass *)(ulong)*(uint *)&pMVar25->name <= unaff_RBP) goto label_03b9a31c;
                pIVar12 = (Il2CppClass *)(&pMVar25->klass + (long)unaff_RBP);
                (&pMVar25->klass)[(long)unaff_RBP] = pIVar17;
                pUStack_c0 = (UnityEngine_Vector2_o *)0x3b9a2f7;
                il2cpp_runtime_helper_022b4080();
                unaff_RBP = (Il2CppClass *)((long)&(unaff_RBP->_1).image + 1);
                pUVar13 = (pIVar19->_1).byval_arg.data;
              } while (pUVar13 != (UnityEngine_UI_Image_o *)0x0);
            }
          }
        }
      }
      pUStack_c0 = (UnityEngine_Vector2_o *)0x3b9a30d;
      pUVar13 = (UnityEngine_UI_Image_o *)il2cpp_runtime_helper_022b2c90();
    }
    return (System_String_o *)pUVar13;
  }
  method_01 = *(Il2CppClass **)((long)UVar22 + 0x20 + (long)pIVar12 * 8);
  uVar23 = auVar36._8_8_ & 0xff;
  ppUVar28 = &pUStack_58;
  UVar27 = UStack_78;
  name = pIStack_70;
  UVar22 = UStack_68;
  goto Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__ScrollTo;
  while( true ) {
    if ((ulong)method_00 <= (ulong)UVar26) {
      pIStack_d8 = (Il2CppClass *)0x3b9a39c;
      auVar36 = il2cpp_runtime_helper_022b2ca0();
      pSVar15 = auVar36._0_8_;
      ppUVar28 = (UnityEngine_UI_Image_o **)&uStack_108;
      UVar27 = (UnityEngine_Vector2_Fields)(auVar36._8_8_ & 0xffffffff);
      UVar22 = (UnityEngine_Vector2_Fields)((ulong)pIVar17 & 0xffffffff);
      method_01 = pIVar17;
      __this_04 = unaff_R13;
      uStack_108 = pSVar15;
      UStack_100 = UVar26;
      UStack_f8 = UVar30;
      pIStack_f0 = pIVar19;
      pIStack_e8 = name;
      pIStack_e0 = pIVar12;
      pIStack_d8 = unaff_RBP;
      if (g_data_057a9f1a == '\0') {
        __this_04 = (Il2CppClass *)&TypeInfo_Object;
        pSVar15 = (System_String_o *)il2cpp_runtime_helper_023445d0();
        g_data_057a9f1a = '\x01';
      }
      uVar31 = (uint)pIVar17;
      if ((int)uVar31 < 0) {
        return pSVar15;
      }
      pvVar18 = (unaff_R13->_1).byval_arg.data;
      pIVar14 = __this_04;
      if (pvVar18 == (void *)0x0) goto label_03b9a5ca;
      pSVar15 = *(System_String_o **)((long)pvVar18 + 0x18);
      if ((int)pSVar15 <= (int)uVar31) {
        return pSVar15;
      }
      uStack_108 = (System_String_o *)CONCAT44(auVar36._8_4_,(undefined4)uStack_108);
      *(uint *)&(unaff_R13->_1).parent = uVar31;
      if ((int)pSVar15 < 1) goto label_03b9a54e;
      UVar30 = (UnityEngine_Vector2_Fields)((ulong)pIVar17 & 0xffffffff);
      UVar27.x = 0.0;
      UVar27.y = 0.0;
      name = (Il2CppClass *)&TypeInfo_Object;
      goto label_03b9a410;
    }
    unaff_R13 = *(Il2CppClass **)((long)pvVar18 + (long)UVar26 * 8 + 0x20);
    pIStack_d8 = (Il2CppClass *)0x3b9a374;
    pIVar17 = name;
    bVar11 = System_String__Equals_3af50f0
                       ((System_String_o *)unaff_R13,(System_String_o *)name,5,(MethodInfo *)0x0);
    if ((char)bVar11 != '\0') goto label_03b9a38f;
    UVar26 = (UnityEngine_Vector2_Fields)((long)UVar26 + 1);
    pvVar18 = (pIVar12->_1).byval_arg.data;
    if (pvVar18 == (void *)0x0) break;
label_03b9a350:
    method_00.y = 0.0;
    method_00.x = (float)*(uint *)((long)pvVar18 + 0x18);
    if ((long)(int)*(uint *)((long)pvVar18 + 0x18) <= (long)UVar26) goto label_03b9a38a;
  }
label_03b9a385:
  pIStack_d8 = (Il2CppClass *)0x3b9a38a;
  il2cpp_runtime_helper_022b2c90();
label_03b9a38a:
  UVar26.x = -NAN;
  UVar26.y = 0.0;
label_03b9a38f:
  return (System_String_o *)((ulong)UVar26 & 0xffffffff);
  while( true ) {
    pIVar19 = (unaff_R13->_1).castClass;
    if ((pIVar19 != (Il2CppClass *)0x0) &&
       (uVar2 = *(uint *)&(pIVar19->_1).namespaze, method_00.y = 0.0, method_00.x = (float)uVar2,
       (long)UVar27 < (long)(int)uVar2)) {
      pIVar14 = __this_04;
      if ((ulong)method_00 <= (ulong)UVar27) goto label_03b9a5cf;
      unaff_RBP = (&(pIVar19->_1).byval_arg.data)[(long)UVar27];
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      method_01 = (Il2CppClass *)0x0;
      __this_04 = unaff_RBP;
      bVar11 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)unaff_RBP,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar11 != '\0') {
        pIVar19 = (unaff_R13->_1).castClass;
        pIVar14 = __this_04;
        if (pIVar19 == (Il2CppClass *)0x0) goto label_03b9a5ca;
        method_00.y = 0.0;
        method_00.x = (float)*(uint *)&(pIVar19->_1).namespaze;
        if ((ulong)method_00 <= (ulong)UVar27) goto label_03b9a5cf;
        __this_04 = (&(pIVar19->_1).byval_arg.data)[(long)UVar27];
        pIVar14 = __this_04;
        if (__this_04 == (Il2CppClass *)0x0) goto label_03b9a5ca;
        *(bool *)((long)&(__this_04->_2).typeHierarchy + 2) = UVar30 == UVar27;
        Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__Refresh
                  ((Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)__this_04,
                   (MethodInfo *)method_01);
      }
    }
    pvVar18 = (unaff_R13->_1).byval_arg.data;
    pIVar14 = __this_04;
    if (pvVar18 == (void *)0x0) goto label_03b9a5ca;
    UVar27 = (UnityEngine_Vector2_Fields)((long)UVar27 + 1);
    pSVar15 = (System_String_o *)(long)*(int *)((long)pvVar18 + 0x18);
    if ((long)pSVar15 <= (long)UVar27) break;
label_03b9a410:
    pIVar19 = (unaff_R13->_1).element_class;
    if ((pIVar19 != (Il2CppClass *)0x0) &&
       (uVar2 = *(uint *)&(pIVar19->_1).namespaze, method_00.y = 0.0, method_00.x = (float)uVar2,
       (long)UVar27 < (long)(int)uVar2)) {
      pIVar14 = __this_04;
      if ((ulong)method_00 <= (ulong)UVar27) goto label_03b9a5cf;
      unaff_RBP = (&(pIVar19->_1).byval_arg.data)[(long)UVar27];
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      method_01 = (Il2CppClass *)0x0;
      __this_04 = unaff_RBP;
      bVar11 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)unaff_RBP,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (((char)bVar11 != '\0') && (*(char *)&(unaff_R13->_1).this_arg.data != '\0')) {
        pIVar19 = (unaff_R13->_1).element_class;
        pIVar14 = __this_04;
        if (pIVar19 == (Il2CppClass *)0x0) goto label_03b9a5ca;
        method_00.y = 0.0;
        method_00.x = (float)*(uint *)&(pIVar19->_1).namespaze;
        if ((ulong)method_00 <= (ulong)UVar27) goto label_03b9a5cf;
        pIVar14 = (&(pIVar19->_1).byval_arg.data)[(long)UVar27];
        if (pIVar14 == (Il2CppClass *)0x0) goto label_03b9a5ca;
        method_01 = (Il2CppClass *)0x0;
        __this_04 = (Il2CppClass *)
                    UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pIVar14,(MethodInfo *)0x0);
        if (__this_04 == (Il2CppClass *)0x0) goto label_03b9a5ca;
        method_01 = (Il2CppClass *)(ulong)(UVar30 == UVar27);
        UnityEngine_GameObject__SetActive
                  ((UnityEngine_GameObject_o *)__this_04,(uint)(UVar30 == UVar27),(MethodInfo *)0x0);
      }
    }
  }
label_03b9a54e:
  if (uStack_108._4_1_ == '\0') {
    return pSVar15;
  }
  pIVar19 = (unaff_R13->_1).element_class;
  if (pIVar19 == (Il2CppClass *)0x0) {
    return (System_String_o *)0x0;
  }
  if (uVar31 < *(uint *)&(pIVar19->_1).namespaze) {
    UVar27 = (UnityEngine_Vector2_Fields)(long)(int)uVar31;
    name = (&(pIVar19->_1).byval_arg.data)[(long)UVar27];
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method_01 = (Il2CppClass *)0x0;
    pIVar14 = name;
    bVar11 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)name,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar11 == '\0') {
      return (System_String_o *)CONCAT44(extraout_var_03,bVar11);
    }
    pIVar19 = (unaff_R13->_1).element_class;
    if (pIVar19 == (Il2CppClass *)0x0) {
label_03b9a5ca:
      il2cpp_runtime_helper_022b2c90();
    }
    else if (uVar31 < *(uint *)&(pIVar19->_1).namespaze) {
      Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__AnimateSection
                ((&(pIVar19->_1).byval_arg.data)[(long)UVar27],(MethodInfo *)method_01);
      return extraout_RAX_00;
    }
  }
label_03b9a5cf:
  il2cpp_runtime_helper_022b2ca0();
  uVar23 = extraout_RDX;
Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__ScrollTo:
  *(Il2CppClass **)((long)ppUVar28 + -8) = unaff_RBP;
  *(UnityEngine_Vector2_Fields *)((long)ppUVar28 + -0x10) = UVar22;
  *(Il2CppClass **)((long)ppUVar28 + -0x18) = name;
  *(Il2CppClass **)((long)ppUVar28 + -0x20) = unaff_R13;
  *(UnityEngine_Vector2_Fields *)((long)ppUVar28 + -0x28) = UVar30;
  *(UnityEngine_Vector2_Fields *)((long)ppUVar28 + -0x30) = UVar27;
  if (g_data_057a9f1c == '\0') {
    *(undefined8 *)((long)ppUVar28 + -0xa0) = 0x3b9a610;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    *(undefined8 *)((long)ppUVar28 + -0xa0) = 0x3b9a61c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOGetter_float);
    *(undefined8 *)((long)ppUVar28 + -0xa0) = 0x3b9a628;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOSetter_float);
    *(undefined8 *)((long)ppUVar28 + -0xa0) = 0x3b9a634;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOTween);
    *(undefined8 *)((long)ppUVar28 + -0xa0) = 0x3b9a640;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotionDriver);
    *(undefined8 *)((long)ppUVar28 + -0xa0) = 0x3b9a64c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ScrollTo_b__22_0);
    *(undefined8 *)((long)ppUVar28 + -0xa0) = 0x3b9a658;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ScrollTo_b__22_1);
    *(undefined8 *)((long)ppUVar28 + -0xa0) = 0x3b9a664;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    *(undefined8 *)((long)ppUVar28 + -0xa0) = 0x3b9a670;
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
    *(undefined8 *)((long)ppUVar28 + -0xa0) = 0x3b9a67c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TweenerCore_3_System_Single_System_Single_DG_Tweening_Pl);
    *(undefined8 *)((long)ppUVar28 + -0xa0) = 0x3b9a688;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TweenerCore_3_System_Single_System_Single_DG_Tweening_Pl);
    g_data_057a9f1c = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)((long)ppUVar28 + -0xa0) = 0x3b9a6a8;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)ppUVar28 + -0xa0) = 0x3b9a6b4;
  bVar11 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)method_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pDVar20 = (DG_Tweening_Tween_o *)CONCAT44(extraout_var_04,bVar11);
  if ((char)bVar11 == '\0') {
    pUVar16 = *(UnityEngine_RectTransform_o **)&(pIVar14->_1).this_arg.bits;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)ppUVar28 + -0xa0) = 0x3b9a6d3;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)ppUVar28 + -0xa0) = 0x3b9a6df;
    __this_05 = pUVar16;
    bVar11 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)pUVar16,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    pDVar20 = (DG_Tweening_Tween_o *)CONCAT44(extraout_var_05,bVar11);
    if ((char)bVar11 == '\0') {
      lVar5 = *(long *)&(pIVar14->_1).this_arg.bits;
      if (lVar5 != 0) {
        pUVar16 = *(UnityEngine_RectTransform_o **)(lVar5 + 0x40);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          *(undefined8 *)((long)ppUVar28 + -0xa0) = 0x3b9a70b;
          il2cpp_runtime_helper_02337ed0();
        }
        *(undefined8 *)((long)ppUVar28 + -0xa0) = 0x3b9a717;
        __this_05 = pUVar16;
        bVar11 = UnityEngine_Object__op_Equality
                           ((UnityEngine_Object_o *)pUVar16,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar11 != '\0') {
          return (System_String_o *)(DG_Tweening_Tween_o *)CONCAT44(extraout_var_06,bVar11);
        }
        lVar5 = *(long *)&(pIVar14->_1).this_arg.bits;
        if (lVar5 != 0) {
          pUVar16 = *(UnityEngine_RectTransform_o **)(lVar5 + 0x20);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            *(undefined8 *)((long)ppUVar28 + -0xa0) = 0x3b9a743;
            il2cpp_runtime_helper_02337ed0();
          }
          *(undefined8 *)((long)ppUVar28 + -0xa0) = 0x3b9a74f;
          bVar11 = UnityEngine_Object__op_Equality
                             ((UnityEngine_Object_o *)pUVar16,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar11 != '\0') {
            return (System_String_o *)(DG_Tweening_Tween_o *)CONCAT44(extraout_var_07,bVar11);
          }
          __this_05 = (UnityEngine_RectTransform_o *)0x0;
          *(undefined8 *)((long)ppUVar28 + -0xa0) = 0x3b9a75e;
          UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
          lVar5 = *(long *)&(pIVar14->_1).this_arg.bits;
          if ((lVar5 != 0) &&
             (__this_05 = *(UnityEngine_RectTransform_o **)(lVar5 + 0x20),
             __this_05 != (UnityEngine_RectTransform_o *)0x0)) {
            *(undefined8 *)((long)ppUVar28 + -0xa0) = 0x3b9a780;
            UVar37 = UnityEngine_RectTransform__get_rect(__this_05,(MethodInfo *)0x0);
            lVar5 = *(long *)&(pIVar14->_1).this_arg.bits;
            if ((lVar5 != 0) &&
               (__this_05 = *(UnityEngine_RectTransform_o **)(lVar5 + 0x40),
               __this_05 != (UnityEngine_RectTransform_o *)0x0)) {
              *(float *)((long)ppUVar28 + -0x98) = UVar37.fields.m_Height;
              *(float *)((long)ppUVar28 + -0x94) = UVar37.fields.m_Height;
              *(undefined4 *)((long)ppUVar28 + -0x90) = in_XMM1_Dc;
              *(undefined4 *)((long)ppUVar28 + -0x8c) = in_XMM1_Dd;
              *(undefined8 *)((long)ppUVar28 + -0xa0) = 0x3b9a7aa;
              UVar37 = UnityEngine_RectTransform__get_rect(__this_05,(MethodInfo *)0x0);
              uVar33 = 0;
              uVar34 = 0;
              fVar32 = 0.0;
              if (0.0 <= *(float *)((long)ppUVar28 + -0x98) - UVar37.fields.m_Height) {
                fVar32 = *(float *)((long)ppUVar28 + -0x98) - UVar37.fields.m_Height;
              }
              if (fVar32 <= 0.01) {
                return (System_String_o *)extraout_RAX_01;
              }
              *(float *)((long)ppUVar28 + -0x98) = fVar32;
              lVar5 = *(long *)&(pIVar14->_1).this_arg.bits;
              if (lVar5 != 0) {
                UVar22 = *(UnityEngine_Vector2_Fields *)(lVar5 + 0x40);
                if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
                  *(undefined8 *)((long)ppUVar28 + -0xa0) = 0x3b9a7fd;
                  il2cpp_runtime_helper_02337ed0();
                }
                __this_05 = (UnityEngine_RectTransform_o *)((long)ppUVar28 + -0x48);
                method_00.x = 0.0;
                method_00.y = 0.0;
                *(undefined8 *)((long)ppUVar28 + -0xa0) = 0x3b9a80f;
                UnityEngine_RectTransformUtility__CalculateRelativeRectTransformBounds
                          ((UnityEngine_Bounds_o *)__this_05,(UnityEngine_Transform_o *)UVar22,
                           (UnityEngine_Transform_o *)method_01,(MethodInfo *)0x0);
                lVar5 = *(long *)&(pIVar14->_1).this_arg.bits;
                if (lVar5 != 0) {
                  __this_00 = *(UnityEngine_RectTransform_o **)(lVar5 + 0x40);
                  __this_05 = (UnityEngine_RectTransform_o *)0x0;
                  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
                    *(undefined8 *)((long)ppUVar28 + -0x68) = *(undefined8 *)((long)ppUVar28 + -0x48);
                    *(undefined8 *)((long)ppUVar28 + -0x60) = 0;
                    *(undefined8 *)((long)ppUVar28 + -0x58) = *(undefined8 *)((long)ppUVar28 + -0x3c);
                    *(undefined8 *)((long)ppUVar28 + -0x50) = 0;
                    *(undefined8 *)((long)ppUVar28 + -0xa0) = 0x3b9a847;
                    UVar37 = UnityEngine_RectTransform__get_rect(__this_00,(MethodInfo *)0x0);
                    auVar36._8_4_ = extraout_XMM0_Dc;
                    auVar36._0_8_ = UVar37.fields._0_8_;
                    auVar36._12_4_ = extraout_XMM0_Dd;
                    *(undefined1 (*) [16])((long)ppUVar28 + -0x78) = auVar36;
                    auVar8._8_4_ = uVar33;
                    auVar8._0_8_ = UVar37.fields._8_8_;
                    auVar8._12_4_ = uVar34;
                    *(undefined1 (*) [16])((long)ppUVar28 + -0x88) = auVar8;
                    pUVar4 = *(UnityEngine_UI_ScrollRect_o **)&(pIVar14->_1).this_arg.bits;
                    __this_05 = (UnityEngine_RectTransform_o *)0x0;
                    if (pUVar4 != (UnityEngine_UI_ScrollRect_o *)0x0) {
                      *(undefined8 *)((long)ppUVar28 + -0xa0) = 0x3b9a866;
                      fVar32 = UnityEngine_UI_ScrollRect__get_verticalNormalizedPosition
                                         (pUVar4,(MethodInfo *)0x0);
                      plVar6 = *(long **)&(pIVar14->_1).this_arg.bits;
                      __this_05 = (UnityEngine_RectTransform_o *)0x0;
                      if (plVar6 != (long *)0x0) {
                        fVar32 = fVar32 - ((*(float *)((long)ppUVar28 + -0x74) +
                                           *(float *)((long)ppUVar28 + -0x84)) -
                                          (*(float *)((long)ppUVar28 + -0x54) +
                                          *(float *)((long)ppUVar28 + -100))) /
                                          *(float *)((long)ppUVar28 + -0x98);
                        fVar35 = 1.0;
                        if (fVar32 <= 1.0) {
                          fVar35 = fVar32;
                        }
                        *(undefined1 (*) [16])((long)ppUVar28 + -0x98) =
                             ZEXT416(-(uint)(0.0 <= fVar32) & (uint)fVar35);
                        pcVar7 = *(code **)(*plVar6 + 0x3c8);
                        *(undefined8 *)((long)ppUVar28 + -0xa0) = 0x3b9a8da;
                        (*pcVar7)();
                        pIVar19 = (pIVar14->_1).declaringType;
                        if (pIVar19 != (Il2CppClass *)0x0) {
                          *(undefined8 *)((long)ppUVar28 + -0xa0) = 0x3b9a8ed;
                          DG_Tweening_TweenExtensions__Kill
                                    ((DG_Tweening_Tween_o *)pIVar19,0,(MethodInfo *)0x0);
                        }
                        if ((char)(uVar23 & 0xffffffff) == '\0') {
                          if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
                            *(undefined8 *)((long)ppUVar28 + -0xa0) = 0x3b9a90e;
                            il2cpp_runtime_helper_02337ed0();
                          }
                          *(undefined8 *)((long)ppUVar28 + -0xa0) = 0x3b9a915;
                          bVar11 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
                          if ((char)bVar11 != '\0') {
                            ppIVar10 = &(pIVar14->_1).declaringType;
                            *(undefined8 *)((long)ppUVar28 + -0xa0) = 0x3b9a931;
                            getter = (DG_Tweening_Core_DOGetter_float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_DOGetter_float);
                            *(undefined8 *)((long)ppUVar28 + -0xa0) = 0x3b9a94b;
                            DG_Tweening_Core_DOGetter_float____ctor();
                            *(undefined8 *)((long)ppUVar28 + -0xa0) = 0x3b9a95a;
                            setter = (DG_Tweening_Core_DOSetter_float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_DOSetter_float);
                            *(undefined8 *)((long)ppUVar28 + -0xa0) = 0x3b9a974;
                            DG_Tweening_Core_DOSetter_float____ctor();
                            if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
                              *(undefined8 *)((long)ppUVar28 + -0xa0) = 0x3b9a98c;
                              il2cpp_runtime_helper_02337ed0();
                            }
                            *(undefined8 *)((long)ppUVar28 + -0xa0) = 0x3b9a9a5;
                            t = DG_Tweening_DOTween__To
                                          (getter,setter,*(float *)((long)ppUVar28 + -0x98),0.22,
                                           (MethodInfo *)0x0);
                            *(undefined8 *)((long)ppUVar28 + -0xa0) = 0x3b9a9bc;
                            t_00 = DG_Tweening_TweenSettingsExtensions__SetEase_object_
                                             ((Il2CppObject *)t,9,MethodInfo_TweenerCore_3_System_Single_System_Single_DG_Tweening_Pl);
                            *(undefined8 *)((long)ppUVar28 + -0xa0) = 0x3b9a9d3;
                            pIVar19 = (Il2CppClass *)
                                      DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                                                (t_00,1,MethodInfo_TweenerCore_3_System_Single_System_Single_DG_Tweening_Pl);
                            *ppIVar10 = pIVar19;
                            *(undefined8 *)((long)ppUVar28 + -0xa0) = 0x3b9a9e1;
                            il2cpp_runtime_helper_022b4080(ppIVar10);
                            pIVar19 = *ppIVar10;
                            if (*(int *)(TypeInfo_GisketchMotionDriver + 0xe4) == 0) {
                              *(undefined8 *)((long)ppUVar28 + -0xa0) = 0x3b9a9fc;
                              il2cpp_runtime_helper_02337ed0();
                            }
                            *(undefined8 *)((long)ppUVar28 + -0xa0) = 0x3b9aa08;
                            pDVar20 = Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Track
                                                ((DG_Tweening_Tween_o *)pIVar19,0,(MethodInfo *)0x0);
                            return (System_String_o *)pDVar20;
                          }
                        }
                        pUVar4 = *(UnityEngine_UI_ScrollRect_o **)&(pIVar14->_1).this_arg.bits;
                        __this_05 = (UnityEngine_RectTransform_o *)0x0;
                        if (pUVar4 != (UnityEngine_UI_ScrollRect_o *)0x0) {
                          *(undefined8 *)((long)ppUVar28 + -0xa0) = 0x3b9aa1f;
                          UnityEngine_UI_ScrollRect__set_verticalNormalizedPosition
                                    (pUVar4,*(float *)((long)ppUVar28 + -0x98),(MethodInfo *)0x0);
                          return (System_String_o *)extraout_RAX_02;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      *(undefined8 *)((long)ppUVar28 + -0xa0) = 0x3b9aa33;
      uVar21 = il2cpp_runtime_helper_022b2c90();
      *(UnityEngine_Vector2_Fields *)((long)ppUVar28 + -0xa0) = UVar22;
      *(ulong *)((long)ppUVar28 + -0xa8) = uVar23 & 0xffffffff;
      *(Il2CppClass **)((long)ppUVar28 + -0xb0) = pIVar14;
      *(UnityEngine_RectTransform_o **)((long)ppUVar28 + -0xb8) = pUVar16;
      *(undefined8 *)((long)ppUVar28 + -0xc0) = uVar21;
      if (g_data_057a9f1b == '\0') {
        *(undefined8 *)((long)ppUVar28 + -200) = 0x3b9aa60;
        il2cpp_runtime_helper_023445d0(&MethodInfo_FlexLayout_GetComponent_FlexLayout);
        *(undefined8 *)((long)ppUVar28 + -200) = 0x3b9aa6c;
        il2cpp_runtime_helper_023445d0(&TypeInfo_LayoutRebuilder);
        *(undefined8 *)((long)ppUVar28 + -200) = 0x3b9aa78;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057a9f1b = '\x01';
      }
      x = __this_05[2].monitor;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)ppUVar28 + -200) = 0x3b9aa9c;
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar25 = (MethodInfo *)0x0;
      *(undefined8 *)((long)ppUVar28 + -200) = 0x3b9aaa8;
      __this_06 = x;
      bVar11 = UnityEngine_Object__op_Equality
                         ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar11 != '\0') {
        return (System_String_o *)CONCAT44(extraout_var_08,bVar11);
      }
      if (__this_05[2].monitor != (void *)0x0) {
        x = *(Gilzoide_FlexUi_FlexLayout_o **)((long)__this_05[2].monitor + 0x20);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          *(undefined8 *)((long)ppUVar28 + -200) = 0x3b9aacf;
          il2cpp_runtime_helper_02337ed0();
        }
        pMVar25 = (MethodInfo *)0x0;
        *(undefined8 *)((long)ppUVar28 + -200) = 0x3b9aadb;
        bVar11 = UnityEngine_Object__op_Equality
                           ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar11 != '\0') {
          return (System_String_o *)CONCAT44(extraout_var_09,bVar11);
        }
        __this_06 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
        *(undefined8 *)((long)ppUVar28 + -200) = 0x3b9aaf2;
        UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
        if (__this_05[2].monitor != (void *)0x0) {
          __this_01 = *(UnityEngine_Component_o **)((long)__this_05[2].monitor + 0x20);
          __this_06 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
          if (__this_01 != (UnityEngine_Component_o *)0x0) {
            *(undefined8 *)((long)ppUVar28 + -200) = 0x3b9ab1b;
            __this_03 = (Gilzoide_FlexUi_FlexLayout_o *)
                        UnityEngine_Component__GetComponent_object_(__this_01,MethodInfo_FlexLayout_GetComponent_FlexLayout);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              *(undefined8 *)((long)ppUVar28 + -200) = 0x3b9ab30;
              il2cpp_runtime_helper_02337ed0();
            }
            pMVar25 = (MethodInfo *)0x0;
            *(undefined8 *)((long)ppUVar28 + -200) = 0x3b9ab3c;
            __this_06 = __this_03;
            bVar11 = UnityEngine_Object__op_Inequality
                               ((UnityEngine_Object_o *)__this_03,(UnityEngine_Object_o *)0x0,
                                (MethodInfo *)0x0);
            if ((char)bVar11 != '\0') {
              if (__this_03 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto label_03b9ab90;
              pMVar25 = (MethodInfo *)0x0;
              *(undefined8 *)((long)ppUVar28 + -200) = 0x3b9ab4f;
              Gilzoide_FlexUi_FlexLayout__RefreshRootLayoutImmediate(__this_03,(MethodInfo *)0x0);
              __this_06 = __this_03;
            }
            if (__this_05[2].monitor != (void *)0x0) {
              pUVar16 = *(UnityEngine_RectTransform_o **)((long)__this_05[2].monitor + 0x20);
              if (*(int *)(TypeInfo_LayoutRebuilder + 0xe4) == 0) {
                *(undefined8 *)((long)ppUVar28 + -200) = 0x3b9ab74;
                il2cpp_runtime_helper_02337ed0();
              }
              *(undefined8 *)((long)ppUVar28 + -200) = 0x3b9ab7e;
              UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate(pUVar16,(MethodInfo *)0x0);
              UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
              return extraout_RAX_03;
            }
          }
        }
      }
label_03b9ab90:
      *(undefined8 *)((long)ppUVar28 + -200) = 0x3b9ab95;
      il2cpp_runtime_helper_022b2c90();
      *(Gilzoide_FlexUi_FlexLayout_o **)((long)ppUVar28 + -200) = x;
      *(undefined8 *)((long)ppUVar28 + -0xd0) = 0x3b9aba9;
      Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Resolve
                ((Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)__this_06,pMVar25);
      Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__SetActive
                ((Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)__this_06,0,0,(MethodInfo *)method_00
                );
      return extraout_RAX_04;
    }
  }
  return (System_String_o *)pDVar20;
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$Setup
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Setup (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o* __this, System_String_array* sectionIds, System_String_o* mode, System_String_o* prefix, const MethodInfo* method);
// 0x3b99d60

void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Setup
               (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *__this,System_String_array *sectionIds,
               System_String_o *mode,System_String_o *prefix,MethodInfo *method)

{
  uint uVar1;
  UnityEngine_UI_ScrollRect_o *pUVar2;
  long lVar3;
  UnityEngine_RectTransform_o *__this_00;
  long *plVar4;
  code *pcVar5;
  UnityEngine_Component_o *__this_01;
  undefined1 auVar6 [16];
  UnityEngine_Vector2_o *pUVar7;
  Il2CppClass **ppIVar8;
  bool_conflict bVar9;
  int iVar10;
  Il2CppClass *pIVar11;
  UnityEngine_Transform_o *__this_02;
  Il2CppClass *pIVar12;
  System_String_o *pSVar13;
  UnityEngine_RectTransform_o *pUVar14;
  UnityEngine_Vector2_Fields UVar15;
  Il2CppClass *pIVar16;
  UnityEngine_UI_Image_o *pUVar17;
  Il2CppClass *name;
  void *pvVar18;
  DG_Tweening_Core_DOGetter_float__o *getter;
  DG_Tweening_Core_DOSetter_float__o *setter;
  DG_Tweening_Core_TweenerCore_float__float__FloatOptions__o *t;
  Il2CppObject *t_00;
  Il2CppClass *pIVar19;
  undefined8 uVar20;
  Gilzoide_FlexUi_FlexLayout_o *__this_03;
  ulong uVar21;
  ulong extraout_RDX;
  UnityEngine_Vector2_Fields UVar22;
  MethodInfo *pMVar23;
  UnityEngine_Vector2_Fields UVar24;
  UnityEngine_Vector2_Fields UVar25;
  Gilzoide_FlexUi_FlexLayout_o *x;
  System_String_array **ppSVar26;
  Il2CppClass *unaff_RBP;
  MethodInfo *pMVar27;
  Il2CppClass *method_00;
  Il2CppClass *__this_04;
  UnityEngine_RectTransform_o *__this_05;
  Gilzoide_FlexUi_FlexLayout_o *__this_06;
  UnityEngine_Vector2_Fields UVar28;
  Il2CppClass *unaff_R13;
  uint uVar29;
  float fVar30;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined4 in_XMM1_Dc;
  undefined4 uVar31;
  undefined4 in_XMM1_Dd;
  undefined4 uVar32;
  float fVar33;
  undefined1 auVar34 [16];
  UnityEngine_Rect_o UVar35;
  undefined8 uStack_100;
  UnityEngine_Vector2_Fields UStack_f8;
  UnityEngine_Vector2_Fields UStack_f0;
  Il2CppClass *pIStack_e8;
  Il2CppClass *pIStack_e0;
  Il2CppClass *pIStack_d8;
  Il2CppClass *pIStack_d0;
  MethodInfo *pMStack_c8;
  Il2CppClass *pIStack_c0;
  UnityEngine_Vector2_o *pUStack_b8;
  undefined8 uStack_b0;
  MethodInfo *pMStack_a8;
  undefined8 *puStack_a0;
  Il2CppClass *pIStack_98;
  ulong uStack_90;
  Il2CppClass *pIStack_88;
  Il2CppClass *pIStack_80;
  undefined8 uStack_78;
  UnityEngine_Vector2_Fields UStack_70;
  Il2CppClass *pIStack_68;
  System_String_o *pSStack_60;
  System_String_array *pSStack_50;
  Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *pGStack_48;
  
  UVar15 = (UnityEngine_Vector2_Fields)prefix;
  pIVar19 = (Il2CppClass *)__this;
  pIVar12 = TypeInfo_string;
  if (g_data_057a9f15 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"brush-side-panel");
    pIVar19 = (Il2CppClass *)&"Separate";
    il2cpp_runtime_helper_023445d0();
    g_data_057a9f15 = '\x01';
    pIVar12 = TypeInfo_string;
  }
  TypeInfo_string = pIVar12;
  if (sectionIds == (System_String_array *)0x0) {
    sectionIds = (System_String_array *)il2cpp_runtime_helper_022b2a40();
    pIVar19 = pIVar12;
  }
  if (__this != (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)0x0) {
    (__this->fields)._sectionIds = sectionIds;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._sectionIds);
    bVar9 = System_String__IsNullOrEmpty(prefix,(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      prefix = "brush-side-panel";
    }
    (__this->fields)._prefix = prefix;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._prefix,prefix);
    bVar9 = System_String__Equals_3af50f0(mode,"Separate",5,(MethodInfo *)0x0);
    *(char *)&(__this->fields)._separate = (char)bVar9;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pSStack_50 = sectionIds;
  pGStack_48 = __this;
  if (g_data_057a9f20 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchSectionNavigator_GetComponentInChildren_Gisketch);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9f20 = '\x01';
  }
  UVar28 = (UnityEngine_Vector2_Fields)&TypeInfo_Object;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar11 = (Il2CppClass *)0x0;
  pMVar23 = (MethodInfo *)0x0;
  pIVar12 = pIVar19;
  bVar9 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pIVar19,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 == '\0') {
label_03b99ec5:
    unaff_R13 = (Il2CppClass *)&MethodInfo_GisketchSectionNavigator_GetComponentInChildren_Gisketch;
    iVar10 = *(int *)(TypeInfo_Object + 0xe4);
    while( true ) {
      if (iVar10 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar23 = (MethodInfo *)0x0;
      pIVar12 = pIVar11;
      bVar9 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pIVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
        return;
      }
      if (pIVar11 == (Il2CppClass *)0x0) break;
      prefix = (System_String_o *)
               UnityEngine_Component__GetComponentInChildren_object_
                         ((UnityEngine_Component_o *)pIVar11,1,MethodInfo_GisketchSectionNavigator_GetComponentInChildren_Gisketch);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar9 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)prefix,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar9 != '\0') {
        return;
      }
      pIVar11 = (Il2CppClass *)
                UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)pIVar11,(MethodInfo *)0x0);
      iVar10 = *(int *)(TypeInfo_Object + 0xe4);
    }
  }
  else if (pIVar19 != (Il2CppClass *)0x0) {
    pIVar11 = (Il2CppClass *)
              UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pIVar19,(MethodInfo *)0x0);
    goto label_03b99ec5;
  }
  UVar22.x = 0.0;
  UVar22.y = 0.0;
  auVar34 = il2cpp_runtime_helper_022b2c90();
  uStack_78 = auVar34._0_8_;
  uVar21 = auVar34._8_8_ & 0xffffffff;
  pMVar27 = pMVar23;
  UStack_70 = UVar22;
  pIStack_68 = (Il2CppClass *)0x0;
  pSStack_60 = prefix;
  if (g_data_057a9f17 == '\0') {
    pIStack_80 = (Il2CppClass *)0x3b99f95;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9f17 = '\x01';
  }
  pIStack_80 = (Il2CppClass *)0x3b99fa4;
  pIVar19 = pIVar12;
  Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Resolve
            ((Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)pIVar12,pMVar27);
  pUVar17 = (pIVar12->_1).byval_arg.data;
  pIVar11 = unaff_RBP;
  if (pUVar17 != (UnityEngine_UI_Image_o *)0x0) {
    pIVar11 = (Il2CppClass *)0x0;
    do {
      uVar29 = *(uint *)&(pUVar17->fields).m_CancellationTokenSource;
      if ((long)(int)uVar29 <= (long)pIVar11) {
        return;
      }
      if ((Il2CppClass *)(ulong)uVar29 <= pIVar11) goto label_03b9a0a0;
      pIVar19 = (Il2CppClass *)(&(pUVar17->fields).m_Material)[(long)pIVar11];
      UVar15.x = 0.0;
      UVar15.y = 0.0;
      pIStack_80 = (Il2CppClass *)0x3b99fdc;
      pMVar27 = pMVar23;
      bVar9 = System_String__Equals_3af50f0
                        ((System_String_o *)pIVar19,(System_String_o *)pMVar23,5,(MethodInfo *)0x0);
      if ((char)bVar9 != '\0') goto label_03b99ff2;
      pIVar11 = (Il2CppClass *)((long)&(pIVar11->_1).image + 1);
      pUVar17 = (pIVar12->_1).byval_arg.data;
    } while (pUVar17 != (UnityEngine_UI_Image_o *)0x0);
  }
  do {
    while( true ) {
      pIStack_80 = (Il2CppClass *)0x3b99ff2;
      il2cpp_runtime_helper_022b2c90();
label_03b99ff2:
      fVar30 = SUB84(pIVar11,0);
      if (((int)fVar30 < 0) || ((((UnityEngine_Color_o *)&(pIVar12->_1).parent)->fields).r == fVar30)) {
        return;
      }
      pMVar27 = (MethodInfo *)((ulong)pIVar11 & 0xffffffff);
      pIStack_80 = (Il2CppClass *)0x3b9a00b;
      pIVar19 = pIVar12;
      Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__SetActive
                ((Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)pIVar12,(int32_t)fVar30,
                 (uint)*(byte *)&(pIVar12->_1).this_arg.data,(MethodInfo *)UVar15);
      if (*(char *)&(pIVar12->_1).this_arg.data == '\0') break;
      pMVar23 = *(MethodInfo **)&(pIVar12->_1).this_arg.bits;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        pIStack_80 = (Il2CppClass *)0x3b9a02e;
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar27 = (MethodInfo *)0x0;
      pIStack_80 = (Il2CppClass *)0x3b9a03a;
      bVar9 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pMVar23,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
        return;
      }
      pIStack_80 = (Il2CppClass *)0x3b9a046;
      Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__RefreshSeparateLayout
                ((Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)pIVar12,pMVar27);
      pUVar2 = *(UnityEngine_UI_ScrollRect_o **)&(pIVar12->_1).this_arg.bits;
      if (pUVar2 != (UnityEngine_UI_ScrollRect_o *)0x0) {
        UnityEngine_UI_ScrollRect__set_verticalNormalizedPosition(pUVar2,1.0,(MethodInfo *)0x0);
        return;
      }
    }
    UVar22 = ((UnityEngine_Vector2_o *)&(pIVar12->_1).element_class)->fields;
  } while (UVar22 == (UnityEngine_Vector2_Fields)0x0);
  if ((uint)fVar30 < (uint)*(float *)((long)UVar22 + 0x18)) {
    method_00 = *(Il2CppClass **)((long)UVar22 + 0x20 + (long)pIVar11 * 8);
    uVar21 = auVar34._8_8_ & 0xff;
    ppSVar26 = &pSStack_50;
    UVar25 = UStack_70;
    name = pIStack_68;
    pSVar13 = pSStack_60;
  }
  else {
label_03b9a0a0:
    pIStack_80 = (Il2CppClass *)0x3b9a0a5;
    uStack_b0 = il2cpp_runtime_helper_022b2ca0();
    puStack_a0 = &TypeInfo_Object;
    pMStack_a8 = pMVar23;
    pIStack_98 = unaff_R13;
    uStack_90 = uVar21;
    pIStack_88 = pIVar12;
    pIStack_80 = pIVar11;
    if (g_data_057a9f18 == '\0') {
      pUStack_b8 = (UnityEngine_Vector2_o *)0x3b9a0d3;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchBrushButtonFeedback);
      pUStack_b8 = (UnityEngine_Vector2_o *)0x3b9a0df;
      il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchBrushButtonFeedback_ComponentInNamedChild_Gisket);
      pUStack_b8 = (UnityEngine_Vector2_o *)0x3b9a0eb;
      il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_ComponentInNamedChild_RectTransform);
      pUStack_b8 = (UnityEngine_Vector2_o *)0x3b9a0f7;
      il2cpp_runtime_helper_023445d0(&MethodInfo_ScrollRect_ComponentInNamedChild_ScrollRect);
      pUStack_b8 = (UnityEngine_Vector2_o *)0x3b9a103;
      il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransform);
      pUStack_b8 = (UnityEngine_Vector2_o *)0x3b9a10f;
      il2cpp_runtime_helper_023445d0(&"brush-side-panel-button-");
      pUStack_b8 = (UnityEngine_Vector2_o *)0x3b9a11b;
      il2cpp_runtime_helper_023445d0(&"-scroll");
      g_data_057a9f18 = '\x01';
    }
    pUStack_b8 = (UnityEngine_Vector2_o *)0x3b9a12a;
    bVar9 = Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__IsResolved
                      ((Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)pIVar19,pMVar27);
    if ((char)bVar9 != '\0') {
      return;
    }
    pUStack_b8 = (UnityEngine_Vector2_o *)0x3b9a13c;
    __this_02 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pIVar19,(MethodInfo *)0x0);
    if (__this_02 == (UnityEngine_Transform_o *)0x0) {
label_03b9a308:
      pUStack_b8 = (UnityEngine_Vector2_o *)0x3b9a30d;
      il2cpp_runtime_helper_022b2c90();
      return;
    }
    pUStack_b8 = (UnityEngine_Vector2_o *)0x3b9a14f;
    pIVar12 = (Il2CppClass *)UnityEngine_Transform__get_parent(__this_02,(MethodInfo *)0x0);
    pUStack_b8 = (UnityEngine_Vector2_o *)0x3b9a167;
    pSVar13 = System_String__Concat_3ae5ba0
                        ((System_String_o *)*(UnityEngine_UI_Image_o **)&(pIVar19->_1).byval_arg.bits,
                         "-scroll",(MethodInfo *)0x0);
    pUStack_b8 = (UnityEngine_Vector2_o *)0x3b9a17c;
    pUVar14 = (UnityEngine_RectTransform_o *)
              Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__ComponentInNamedChild_object_
                        ((UnityEngine_Transform_o *)pIVar12,pSVar13,MethodInfo_ScrollRect_ComponentInNamedChild_ScrollRect);
    *(UnityEngine_RectTransform_o **)&(pIVar19->_1).this_arg.bits = pUVar14;
    pUStack_b8 = (UnityEngine_Vector2_o *)0x3b9a18c;
    il2cpp_runtime_helper_022b4080(&(pIVar19->_1).this_arg.bits,pUVar14);
    pUVar17 = (pIVar19->_1).byval_arg.data;
    if (pUVar17 == (UnityEngine_UI_Image_o *)0x0) goto label_03b9a308;
    pUStack_b8 = (UnityEngine_Vector2_o *)0x3b9a1ab;
    UVar15 = (UnityEngine_Vector2_Fields)
             il2cpp_runtime_helper_022b2a40(TypeInfo_RectTransform,*(undefined4 *)&(pUVar17->fields).m_CancellationTokenSource);
    pUVar7 = (UnityEngine_Vector2_o *)&(pIVar19->_1).element_class;
    ((UnityEngine_Vector2_o *)&(pIVar19->_1).element_class)->fields = UVar15;
    pUStack_b8 = (UnityEngine_Vector2_o *)0x3b9a1be;
    il2cpp_runtime_helper_022b4080(pUVar7,UVar15);
    pUVar17 = (pIVar19->_1).byval_arg.data;
    if (pUVar17 == (UnityEngine_UI_Image_o *)0x0) goto label_03b9a308;
    pUStack_b8 = (UnityEngine_Vector2_o *)0x3b9a1dd;
    pIVar16 = (Il2CppClass *)
              il2cpp_runtime_helper_022b2a40(TypeInfo_GisketchBrushButtonFeedback,*(undefined4 *)&(pUVar17->fields).m_CancellationTokenSource);
    pIVar11 = (Il2CppClass *)&(pIVar19->_1).castClass;
    *(Il2CppClass **)&((UnityEngine_Color_o *)&(pIVar19->_1).castClass)->fields = pIVar16;
    pUStack_b8 = (UnityEngine_Vector2_o *)0x3b9a1ed;
    il2cpp_runtime_helper_022b4080();
    pUVar17 = (pIVar19->_1).byval_arg.data;
    if (pUVar17 == (UnityEngine_UI_Image_o *)0x0) goto label_03b9a308;
    unaff_RBP = (Il2CppClass *)0x0;
    while( true ) {
      uVar29 = *(uint *)&(pUVar17->fields).m_CancellationTokenSource;
      if ((long)(int)uVar29 <= (long)unaff_RBP) {
        return;
      }
      name = pIVar16;
      if ((Il2CppClass *)(ulong)uVar29 <= unaff_RBP) break;
      UVar28 = pUVar7->fields;
      pMVar23 = (MethodInfo *)(&(pUVar17->fields).m_Material)[(long)unaff_RBP];
      if (g_data_057a9f1e == '\0') {
        pUStack_b8 = (UnityEngine_Vector2_o *)0x3b9a235;
        il2cpp_runtime_helper_023445d0(&"-section-");
        g_data_057a9f1e = '\x01';
      }
      pUStack_b8 = (UnityEngine_Vector2_o *)0x3b9a254;
      name = (Il2CppClass *)
             System_String__Concat_3af7150
                       ((System_String_o *)*(UnityEngine_UI_Image_o **)&(pIVar19->_1).byval_arg.bits,
                        "-section-",(System_String_o *)pMVar23,(MethodInfo *)0x0);
      pUStack_b8 = (UnityEngine_Vector2_o *)0x3b9a269;
      pIVar11 = pIVar12;
      pIVar16 = (Il2CppClass *)
                Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__ComponentInNamedChild_object_
                          ((UnityEngine_Transform_o *)pIVar12,(System_String_o *)name,MethodInfo_RectTransform_ComponentInNamedChild_RectTransform);
      if (UVar28 == (UnityEngine_Vector2_Fields)0x0) goto label_03b9a308;
      if ((Il2CppClass *)(ulong)*(uint *)((long)UVar28 + 0x18) <= unaff_RBP) break;
      pIVar11 = (Il2CppClass *)((undefined8 *)((long)UVar28 + (long)unaff_RBP * 8) + 4);
      ((undefined8 *)((long)UVar28 + 0x20))[(long)unaff_RBP] = pIVar16;
      pUStack_b8 = (UnityEngine_Vector2_o *)0x3b9a295;
      il2cpp_runtime_helper_022b4080();
      pUVar17 = (pIVar19->_1).byval_arg.data;
      if (pUVar17 == (UnityEngine_UI_Image_o *)0x0) goto label_03b9a308;
      name = pIVar16;
      if ((Il2CppClass *)(ulong)*(uint *)&(pUVar17->fields).m_CancellationTokenSource <= unaff_RBP) break;
      pMVar23 = *(MethodInfo **)&((UnityEngine_Color_o *)&(pIVar19->_1).castClass)->fields;
      pUStack_b8 = (UnityEngine_Vector2_o *)0x3b9a2c0;
      name = (Il2CppClass *)
             System_String__Concat_3ae5ba0
                       ("brush-side-panel-button-",(System_String_o *)(&(pUVar17->fields).m_Material)[(long)unaff_RBP],
                        (MethodInfo *)0x0);
      pUStack_b8 = (UnityEngine_Vector2_o *)0x3b9a2d5;
      pIVar11 = pIVar12;
      pIVar16 = (Il2CppClass *)
                Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__ComponentInNamedChild_object_
                          ((UnityEngine_Transform_o *)pIVar12,(System_String_o *)name,MethodInfo_GisketchBrushButtonFeedback_ComponentInNamedChild_Gisket);
      if (pMVar23 == (MethodInfo *)0x0) goto label_03b9a308;
      if ((Il2CppClass *)(ulong)*(uint *)&pMVar23->name <= unaff_RBP) break;
      pIVar11 = (Il2CppClass *)(&pMVar23->klass + (long)unaff_RBP);
      (&pMVar23->klass)[(long)unaff_RBP] = pIVar16;
      pUStack_b8 = (UnityEngine_Vector2_o *)0x3b9a2f7;
      il2cpp_runtime_helper_022b4080();
      unaff_RBP = (Il2CppClass *)((long)&(unaff_RBP->_1).image + 1);
      pUVar17 = (pIVar19->_1).byval_arg.data;
      if (pUVar17 == (UnityEngine_UI_Image_o *)0x0) goto label_03b9a308;
    }
    pUStack_b8 = (UnityEngine_Vector2_o *)0x3b9a321;
    il2cpp_runtime_helper_022b2ca0();
    pvVar18 = (pIVar11->_1).byval_arg.data;
    pMStack_c8 = pMVar23;
    pIStack_c0 = pIVar12;
    pUStack_b8 = pUVar7;
    if (pvVar18 == (void *)0x0) goto label_03b9a385;
    UVar24.x = 0.0;
    UVar24.y = 0.0;
    pIVar16 = name;
    unaff_R13 = pIVar11;
    while( true ) {
      UVar15.y = 0.0;
      UVar15.x = (float)*(uint *)((long)pvVar18 + 0x18);
      if ((long)(int)*(uint *)((long)pvVar18 + 0x18) <= (long)UVar24) {
        return;
      }
      if ((ulong)UVar15 <= (ulong)UVar24) break;
      unaff_R13 = *(Il2CppClass **)((long)pvVar18 + (long)UVar24 * 8 + 0x20);
      pIStack_d0 = (Il2CppClass *)0x3b9a374;
      pIVar16 = name;
      bVar9 = System_String__Equals_3af50f0
                        ((System_String_o *)unaff_R13,(System_String_o *)name,5,(MethodInfo *)0x0);
      if ((char)bVar9 != '\0') {
        return;
      }
      UVar24 = (UnityEngine_Vector2_Fields)((long)UVar24 + 1);
      pvVar18 = (pIVar11->_1).byval_arg.data;
      if (pvVar18 == (void *)0x0) {
label_03b9a385:
        pIStack_d0 = (Il2CppClass *)0x3b9a38a;
        il2cpp_runtime_helper_022b2c90();
        return;
      }
    }
    pIStack_d0 = (Il2CppClass *)0x3b9a39c;
    auVar34 = il2cpp_runtime_helper_022b2ca0();
    uStack_100 = auVar34._0_8_;
    ppSVar26 = (System_String_array **)&uStack_100;
    UVar25 = (UnityEngine_Vector2_Fields)(auVar34._8_8_ & 0xffffffff);
    pSVar13 = (System_String_o *)((ulong)pIVar16 & 0xffffffff);
    method_00 = pIVar16;
    __this_04 = unaff_R13;
    UStack_f8 = UVar24;
    UStack_f0 = UVar28;
    pIStack_e8 = pIVar19;
    pIStack_e0 = name;
    pIStack_d8 = pIVar11;
    pIStack_d0 = unaff_RBP;
    if (g_data_057a9f1a == '\0') {
      __this_04 = (Il2CppClass *)&TypeInfo_Object;
      il2cpp_runtime_helper_023445d0();
      g_data_057a9f1a = '\x01';
    }
    uVar29 = (uint)pIVar16;
    if ((int)uVar29 < 0) {
      return;
    }
    pvVar18 = (unaff_R13->_1).byval_arg.data;
    pIVar12 = __this_04;
    if (pvVar18 == (void *)0x0) {
label_03b9a5ca:
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      iVar10 = (int)*(undefined8 *)((long)pvVar18 + 0x18);
      if (iVar10 <= (int)uVar29) {
        return;
      }
      uStack_100 = CONCAT44(auVar34._8_4_,(undefined4)uStack_100);
      *(uint *)&(unaff_R13->_1).parent = uVar29;
      if (0 < iVar10) {
        UVar28 = (UnityEngine_Vector2_Fields)((ulong)pIVar16 & 0xffffffff);
        UVar25.x = 0.0;
        UVar25.y = 0.0;
        name = (Il2CppClass *)&TypeInfo_Object;
        do {
          pIVar19 = (unaff_R13->_1).element_class;
          if ((pIVar19 != (Il2CppClass *)0x0) &&
             (uVar1 = *(uint *)&(pIVar19->_1).namespaze, UVar15.y = 0.0, UVar15.x = (float)uVar1,
             (long)UVar25 < (long)(int)uVar1)) {
            pIVar12 = __this_04;
            if ((ulong)UVar15 <= (ulong)UVar25) goto label_03b9a5cf;
            unaff_RBP = (&(pIVar19->_1).byval_arg.data)[(long)UVar25];
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            method_00 = (Il2CppClass *)0x0;
            __this_04 = unaff_RBP;
            bVar9 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)unaff_RBP,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                              );
            if (((char)bVar9 != '\0') && (*(char *)&(unaff_R13->_1).this_arg.data != '\0')) {
              pIVar19 = (unaff_R13->_1).element_class;
              pIVar12 = __this_04;
              if (pIVar19 == (Il2CppClass *)0x0) goto label_03b9a5ca;
              UVar15.y = 0.0;
              UVar15.x = (float)*(uint *)&(pIVar19->_1).namespaze;
              if ((ulong)UVar15 <= (ulong)UVar25) goto label_03b9a5cf;
              pIVar12 = (&(pIVar19->_1).byval_arg.data)[(long)UVar25];
              if (pIVar12 == (Il2CppClass *)0x0) goto label_03b9a5ca;
              method_00 = (Il2CppClass *)0x0;
              __this_04 = (Il2CppClass *)
                          UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pIVar12,(MethodInfo *)0x0);
              if (__this_04 == (Il2CppClass *)0x0) goto label_03b9a5ca;
              method_00 = (Il2CppClass *)(ulong)(UVar28 == UVar25);
              UnityEngine_GameObject__SetActive
                        ((UnityEngine_GameObject_o *)__this_04,(uint)(UVar28 == UVar25),(MethodInfo *)0x0);
            }
          }
          pIVar19 = (unaff_R13->_1).castClass;
          if ((pIVar19 != (Il2CppClass *)0x0) &&
             (uVar1 = *(uint *)&(pIVar19->_1).namespaze, UVar15.y = 0.0, UVar15.x = (float)uVar1,
             (long)UVar25 < (long)(int)uVar1)) {
            pIVar12 = __this_04;
            if ((ulong)UVar15 <= (ulong)UVar25) goto label_03b9a5cf;
            unaff_RBP = (&(pIVar19->_1).byval_arg.data)[(long)UVar25];
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            method_00 = (Il2CppClass *)0x0;
            __this_04 = unaff_RBP;
            bVar9 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)unaff_RBP,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                              );
            if ((char)bVar9 != '\0') {
              pIVar19 = (unaff_R13->_1).castClass;
              pIVar12 = __this_04;
              if (pIVar19 == (Il2CppClass *)0x0) goto label_03b9a5ca;
              UVar15.y = 0.0;
              UVar15.x = (float)*(uint *)&(pIVar19->_1).namespaze;
              if ((ulong)UVar15 <= (ulong)UVar25) goto label_03b9a5cf;
              __this_04 = (&(pIVar19->_1).byval_arg.data)[(long)UVar25];
              pIVar12 = __this_04;
              if (__this_04 == (Il2CppClass *)0x0) goto label_03b9a5ca;
              *(bool *)((long)&(__this_04->_2).typeHierarchy + 2) = UVar28 == UVar25;
              Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__Refresh
                        ((Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)__this_04,
                         (MethodInfo *)method_00);
            }
          }
          pvVar18 = (unaff_R13->_1).byval_arg.data;
          pIVar12 = __this_04;
          if (pvVar18 == (void *)0x0) goto label_03b9a5ca;
          UVar25 = (UnityEngine_Vector2_Fields)((long)UVar25 + 1);
        } while ((long)UVar25 < (long)*(int *)((long)pvVar18 + 0x18));
      }
      if ((uStack_100._4_1_ == '\0') ||
         (pIVar19 = (unaff_R13->_1).element_class, pIVar19 == (Il2CppClass *)0x0)) {
        return;
      }
      if (uVar29 < *(uint *)&(pIVar19->_1).namespaze) {
        UVar25 = (UnityEngine_Vector2_Fields)(long)(int)uVar29;
        name = (&(pIVar19->_1).byval_arg.data)[(long)UVar25];
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        method_00 = (Il2CppClass *)0x0;
        pIVar12 = name;
        bVar9 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)name,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar9 == '\0') {
          return;
        }
        pIVar19 = (unaff_R13->_1).element_class;
        if (pIVar19 == (Il2CppClass *)0x0) goto label_03b9a5ca;
        if (uVar29 < *(uint *)&(pIVar19->_1).namespaze) {
          Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__AnimateSection
                    ((&(pIVar19->_1).byval_arg.data)[(long)UVar25],(MethodInfo *)method_00);
          return;
        }
      }
    }
label_03b9a5cf:
    il2cpp_runtime_helper_022b2ca0();
    uVar21 = extraout_RDX;
  }
  *(Il2CppClass **)((long)ppSVar26 + -8) = unaff_RBP;
  *(System_String_o **)((long)ppSVar26 + -0x10) = pSVar13;
  *(Il2CppClass **)((long)ppSVar26 + -0x18) = name;
  *(Il2CppClass **)((long)ppSVar26 + -0x20) = unaff_R13;
  *(UnityEngine_Vector2_Fields *)((long)ppSVar26 + -0x28) = UVar28;
  *(UnityEngine_Vector2_Fields *)((long)ppSVar26 + -0x30) = UVar25;
  if (g_data_057a9f1c == '\0') {
    *(undefined8 *)((long)ppSVar26 + -0xa0) = 0x3b9a610;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    *(undefined8 *)((long)ppSVar26 + -0xa0) = 0x3b9a61c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOGetter_float);
    *(undefined8 *)((long)ppSVar26 + -0xa0) = 0x3b9a628;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOSetter_float);
    *(undefined8 *)((long)ppSVar26 + -0xa0) = 0x3b9a634;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOTween);
    *(undefined8 *)((long)ppSVar26 + -0xa0) = 0x3b9a640;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotionDriver);
    *(undefined8 *)((long)ppSVar26 + -0xa0) = 0x3b9a64c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ScrollTo_b__22_0);
    *(undefined8 *)((long)ppSVar26 + -0xa0) = 0x3b9a658;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ScrollTo_b__22_1);
    *(undefined8 *)((long)ppSVar26 + -0xa0) = 0x3b9a664;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    *(undefined8 *)((long)ppSVar26 + -0xa0) = 0x3b9a670;
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
    *(undefined8 *)((long)ppSVar26 + -0xa0) = 0x3b9a67c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TweenerCore_3_System_Single_System_Single_DG_Tweening_Pl);
    *(undefined8 *)((long)ppSVar26 + -0xa0) = 0x3b9a688;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TweenerCore_3_System_Single_System_Single_DG_Tweening_Pl);
    g_data_057a9f1c = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)((long)ppSVar26 + -0xa0) = 0x3b9a6a8;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)ppSVar26 + -0xa0) = 0x3b9a6b4;
  bVar9 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)method_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 == '\0') {
    pUVar14 = *(UnityEngine_RectTransform_o **)&(pIVar12->_1).this_arg.bits;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)ppSVar26 + -0xa0) = 0x3b9a6d3;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)ppSVar26 + -0xa0) = 0x3b9a6df;
    __this_05 = pUVar14;
    bVar9 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar9 == '\0') {
      lVar3 = *(long *)&(pIVar12->_1).this_arg.bits;
      if (lVar3 != 0) {
        pUVar14 = *(UnityEngine_RectTransform_o **)(lVar3 + 0x40);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          *(undefined8 *)((long)ppSVar26 + -0xa0) = 0x3b9a70b;
          il2cpp_runtime_helper_02337ed0();
        }
        *(undefined8 *)((long)ppSVar26 + -0xa0) = 0x3b9a717;
        __this_05 = pUVar14;
        bVar9 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)pUVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar9 != '\0') {
          return;
        }
        lVar3 = *(long *)&(pIVar12->_1).this_arg.bits;
        if (lVar3 != 0) {
          pUVar14 = *(UnityEngine_RectTransform_o **)(lVar3 + 0x20);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            *(undefined8 *)((long)ppSVar26 + -0xa0) = 0x3b9a743;
            il2cpp_runtime_helper_02337ed0();
          }
          *(undefined8 *)((long)ppSVar26 + -0xa0) = 0x3b9a74f;
          bVar9 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)pUVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar9 != '\0') {
            return;
          }
          __this_05 = (UnityEngine_RectTransform_o *)0x0;
          *(undefined8 *)((long)ppSVar26 + -0xa0) = 0x3b9a75e;
          UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
          lVar3 = *(long *)&(pIVar12->_1).this_arg.bits;
          if ((lVar3 != 0) &&
             (__this_05 = *(UnityEngine_RectTransform_o **)(lVar3 + 0x20),
             __this_05 != (UnityEngine_RectTransform_o *)0x0)) {
            *(undefined8 *)((long)ppSVar26 + -0xa0) = 0x3b9a780;
            UVar35 = UnityEngine_RectTransform__get_rect(__this_05,(MethodInfo *)0x0);
            lVar3 = *(long *)&(pIVar12->_1).this_arg.bits;
            if ((lVar3 != 0) &&
               (__this_05 = *(UnityEngine_RectTransform_o **)(lVar3 + 0x40),
               __this_05 != (UnityEngine_RectTransform_o *)0x0)) {
              *(float *)((long)ppSVar26 + -0x98) = UVar35.fields.m_Height;
              *(float *)((long)ppSVar26 + -0x94) = UVar35.fields.m_Height;
              *(undefined4 *)((long)ppSVar26 + -0x90) = in_XMM1_Dc;
              *(undefined4 *)((long)ppSVar26 + -0x8c) = in_XMM1_Dd;
              *(undefined8 *)((long)ppSVar26 + -0xa0) = 0x3b9a7aa;
              UVar35 = UnityEngine_RectTransform__get_rect(__this_05,(MethodInfo *)0x0);
              uVar31 = 0;
              uVar32 = 0;
              fVar30 = 0.0;
              if (0.0 <= *(float *)((long)ppSVar26 + -0x98) - UVar35.fields.m_Height) {
                fVar30 = *(float *)((long)ppSVar26 + -0x98) - UVar35.fields.m_Height;
              }
              if (fVar30 <= 0.01) {
                return;
              }
              *(float *)((long)ppSVar26 + -0x98) = fVar30;
              lVar3 = *(long *)&(pIVar12->_1).this_arg.bits;
              if (lVar3 != 0) {
                pSVar13 = *(System_String_o **)(lVar3 + 0x40);
                if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
                  *(undefined8 *)((long)ppSVar26 + -0xa0) = 0x3b9a7fd;
                  il2cpp_runtime_helper_02337ed0();
                }
                __this_05 = (UnityEngine_RectTransform_o *)((long)ppSVar26 + -0x48);
                UVar15.x = 0.0;
                UVar15.y = 0.0;
                *(undefined8 *)((long)ppSVar26 + -0xa0) = 0x3b9a80f;
                UnityEngine_RectTransformUtility__CalculateRelativeRectTransformBounds
                          ((UnityEngine_Bounds_o *)__this_05,(UnityEngine_Transform_o *)pSVar13,
                           (UnityEngine_Transform_o *)method_00,(MethodInfo *)0x0);
                lVar3 = *(long *)&(pIVar12->_1).this_arg.bits;
                if (lVar3 != 0) {
                  __this_00 = *(UnityEngine_RectTransform_o **)(lVar3 + 0x40);
                  __this_05 = (UnityEngine_RectTransform_o *)0x0;
                  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
                    *(undefined8 *)((long)ppSVar26 + -0x68) = *(undefined8 *)((long)ppSVar26 + -0x48);
                    *(undefined8 *)((long)ppSVar26 + -0x60) = 0;
                    *(undefined8 *)((long)ppSVar26 + -0x58) = *(undefined8 *)((long)ppSVar26 + -0x3c);
                    *(undefined8 *)((long)ppSVar26 + -0x50) = 0;
                    *(undefined8 *)((long)ppSVar26 + -0xa0) = 0x3b9a847;
                    UVar35 = UnityEngine_RectTransform__get_rect(__this_00,(MethodInfo *)0x0);
                    auVar34._8_4_ = extraout_XMM0_Dc;
                    auVar34._0_8_ = UVar35.fields._0_8_;
                    auVar34._12_4_ = extraout_XMM0_Dd;
                    *(undefined1 (*) [16])((long)ppSVar26 + -0x78) = auVar34;
                    auVar6._8_4_ = uVar31;
                    auVar6._0_8_ = UVar35.fields._8_8_;
                    auVar6._12_4_ = uVar32;
                    *(undefined1 (*) [16])((long)ppSVar26 + -0x88) = auVar6;
                    pUVar2 = *(UnityEngine_UI_ScrollRect_o **)&(pIVar12->_1).this_arg.bits;
                    __this_05 = (UnityEngine_RectTransform_o *)0x0;
                    if (pUVar2 != (UnityEngine_UI_ScrollRect_o *)0x0) {
                      *(undefined8 *)((long)ppSVar26 + -0xa0) = 0x3b9a866;
                      fVar30 = UnityEngine_UI_ScrollRect__get_verticalNormalizedPosition
                                         (pUVar2,(MethodInfo *)0x0);
                      plVar4 = *(long **)&(pIVar12->_1).this_arg.bits;
                      __this_05 = (UnityEngine_RectTransform_o *)0x0;
                      if (plVar4 != (long *)0x0) {
                        fVar30 = fVar30 - ((*(float *)((long)ppSVar26 + -0x74) +
                                           *(float *)((long)ppSVar26 + -0x84)) -
                                          (*(float *)((long)ppSVar26 + -0x54) +
                                          *(float *)((long)ppSVar26 + -100))) /
                                          *(float *)((long)ppSVar26 + -0x98);
                        fVar33 = 1.0;
                        if (fVar30 <= 1.0) {
                          fVar33 = fVar30;
                        }
                        *(undefined1 (*) [16])((long)ppSVar26 + -0x98) =
                             ZEXT416(-(uint)(0.0 <= fVar30) & (uint)fVar33);
                        pcVar5 = *(code **)(*plVar4 + 0x3c8);
                        *(undefined8 *)((long)ppSVar26 + -0xa0) = 0x3b9a8da;
                        (*pcVar5)();
                        pIVar19 = (pIVar12->_1).declaringType;
                        if (pIVar19 != (Il2CppClass *)0x0) {
                          *(undefined8 *)((long)ppSVar26 + -0xa0) = 0x3b9a8ed;
                          DG_Tweening_TweenExtensions__Kill
                                    ((DG_Tweening_Tween_o *)pIVar19,0,(MethodInfo *)0x0);
                        }
                        if ((char)(uVar21 & 0xffffffff) == '\0') {
                          if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
                            *(undefined8 *)((long)ppSVar26 + -0xa0) = 0x3b9a90e;
                            il2cpp_runtime_helper_02337ed0();
                          }
                          *(undefined8 *)((long)ppSVar26 + -0xa0) = 0x3b9a915;
                          bVar9 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
                          if ((char)bVar9 != '\0') {
                            ppIVar8 = &(pIVar12->_1).declaringType;
                            *(undefined8 *)((long)ppSVar26 + -0xa0) = 0x3b9a931;
                            getter = (DG_Tweening_Core_DOGetter_float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_DOGetter_float);
                            *(undefined8 *)((long)ppSVar26 + -0xa0) = 0x3b9a94b;
                            DG_Tweening_Core_DOGetter_float____ctor();
                            *(undefined8 *)((long)ppSVar26 + -0xa0) = 0x3b9a95a;
                            setter = (DG_Tweening_Core_DOSetter_float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_DOSetter_float);
                            *(undefined8 *)((long)ppSVar26 + -0xa0) = 0x3b9a974;
                            DG_Tweening_Core_DOSetter_float____ctor();
                            if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
                              *(undefined8 *)((long)ppSVar26 + -0xa0) = 0x3b9a98c;
                              il2cpp_runtime_helper_02337ed0();
                            }
                            *(undefined8 *)((long)ppSVar26 + -0xa0) = 0x3b9a9a5;
                            t = DG_Tweening_DOTween__To
                                          (getter,setter,*(float *)((long)ppSVar26 + -0x98),0.22,
                                           (MethodInfo *)0x0);
                            *(undefined8 *)((long)ppSVar26 + -0xa0) = 0x3b9a9bc;
                            t_00 = DG_Tweening_TweenSettingsExtensions__SetEase_object_
                                             ((Il2CppObject *)t,9,MethodInfo_TweenerCore_3_System_Single_System_Single_DG_Tweening_Pl);
                            *(undefined8 *)((long)ppSVar26 + -0xa0) = 0x3b9a9d3;
                            pIVar19 = (Il2CppClass *)
                                      DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                                                (t_00,1,MethodInfo_TweenerCore_3_System_Single_System_Single_DG_Tweening_Pl);
                            *ppIVar8 = pIVar19;
                            *(undefined8 *)((long)ppSVar26 + -0xa0) = 0x3b9a9e1;
                            il2cpp_runtime_helper_022b4080(ppIVar8);
                            pIVar19 = *ppIVar8;
                            if (*(int *)(TypeInfo_GisketchMotionDriver + 0xe4) == 0) {
                              *(undefined8 *)((long)ppSVar26 + -0xa0) = 0x3b9a9fc;
                              il2cpp_runtime_helper_02337ed0();
                            }
                            *(undefined8 *)((long)ppSVar26 + -0xa0) = 0x3b9aa08;
                            Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Track
                                      ((DG_Tweening_Tween_o *)pIVar19,0,(MethodInfo *)0x0);
                            return;
                          }
                        }
                        pUVar2 = *(UnityEngine_UI_ScrollRect_o **)&(pIVar12->_1).this_arg.bits;
                        __this_05 = (UnityEngine_RectTransform_o *)0x0;
                        if (pUVar2 != (UnityEngine_UI_ScrollRect_o *)0x0) {
                          *(undefined8 *)((long)ppSVar26 + -0xa0) = 0x3b9aa1f;
                          UnityEngine_UI_ScrollRect__set_verticalNormalizedPosition
                                    (pUVar2,*(float *)((long)ppSVar26 + -0x98),(MethodInfo *)0x0);
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
      *(undefined8 *)((long)ppSVar26 + -0xa0) = 0x3b9aa33;
      uVar20 = il2cpp_runtime_helper_022b2c90();
      *(System_String_o **)((long)ppSVar26 + -0xa0) = pSVar13;
      *(ulong *)((long)ppSVar26 + -0xa8) = uVar21 & 0xffffffff;
      *(Il2CppClass **)((long)ppSVar26 + -0xb0) = pIVar12;
      *(UnityEngine_RectTransform_o **)((long)ppSVar26 + -0xb8) = pUVar14;
      *(undefined8 *)((long)ppSVar26 + -0xc0) = uVar20;
      if (g_data_057a9f1b == '\0') {
        *(undefined8 *)((long)ppSVar26 + -200) = 0x3b9aa60;
        il2cpp_runtime_helper_023445d0(&MethodInfo_FlexLayout_GetComponent_FlexLayout);
        *(undefined8 *)((long)ppSVar26 + -200) = 0x3b9aa6c;
        il2cpp_runtime_helper_023445d0(&TypeInfo_LayoutRebuilder);
        *(undefined8 *)((long)ppSVar26 + -200) = 0x3b9aa78;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057a9f1b = '\x01';
      }
      x = __this_05[2].monitor;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)ppSVar26 + -200) = 0x3b9aa9c;
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar23 = (MethodInfo *)0x0;
      *(undefined8 *)((long)ppSVar26 + -200) = 0x3b9aaa8;
      __this_06 = x;
      bVar9 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar9 != '\0') {
        return;
      }
      if (__this_05[2].monitor != (void *)0x0) {
        x = *(Gilzoide_FlexUi_FlexLayout_o **)((long)__this_05[2].monitor + 0x20);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          *(undefined8 *)((long)ppSVar26 + -200) = 0x3b9aacf;
          il2cpp_runtime_helper_02337ed0();
        }
        pMVar23 = (MethodInfo *)0x0;
        *(undefined8 *)((long)ppSVar26 + -200) = 0x3b9aadb;
        bVar9 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar9 != '\0') {
          return;
        }
        __this_06 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
        *(undefined8 *)((long)ppSVar26 + -200) = 0x3b9aaf2;
        UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
        if (__this_05[2].monitor != (void *)0x0) {
          __this_01 = *(UnityEngine_Component_o **)((long)__this_05[2].monitor + 0x20);
          __this_06 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
          if (__this_01 != (UnityEngine_Component_o *)0x0) {
            *(undefined8 *)((long)ppSVar26 + -200) = 0x3b9ab1b;
            __this_03 = (Gilzoide_FlexUi_FlexLayout_o *)
                        UnityEngine_Component__GetComponent_object_(__this_01,MethodInfo_FlexLayout_GetComponent_FlexLayout);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              *(undefined8 *)((long)ppSVar26 + -200) = 0x3b9ab30;
              il2cpp_runtime_helper_02337ed0();
            }
            pMVar23 = (MethodInfo *)0x0;
            *(undefined8 *)((long)ppSVar26 + -200) = 0x3b9ab3c;
            __this_06 = __this_03;
            bVar9 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)__this_03,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                              );
            if ((char)bVar9 != '\0') {
              if (__this_03 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto label_03b9ab90;
              pMVar23 = (MethodInfo *)0x0;
              *(undefined8 *)((long)ppSVar26 + -200) = 0x3b9ab4f;
              Gilzoide_FlexUi_FlexLayout__RefreshRootLayoutImmediate(__this_03,(MethodInfo *)0x0);
              __this_06 = __this_03;
            }
            if (__this_05[2].monitor != (void *)0x0) {
              pUVar14 = *(UnityEngine_RectTransform_o **)((long)__this_05[2].monitor + 0x20);
              if (*(int *)(TypeInfo_LayoutRebuilder + 0xe4) == 0) {
                *(undefined8 *)((long)ppSVar26 + -200) = 0x3b9ab74;
                il2cpp_runtime_helper_02337ed0();
              }
              *(undefined8 *)((long)ppSVar26 + -200) = 0x3b9ab7e;
              UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate(pUVar14,(MethodInfo *)0x0);
              UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
              return;
            }
          }
        }
      }
label_03b9ab90:
      *(undefined8 *)((long)ppSVar26 + -200) = 0x3b9ab95;
      il2cpp_runtime_helper_022b2c90();
      *(Gilzoide_FlexUi_FlexLayout_o **)((long)ppSVar26 + -200) = x;
      *(undefined8 *)((long)ppSVar26 + -0xd0) = 0x3b9aba9;
      Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Resolve
                ((Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)__this_06,pMVar23);
      Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__SetActive
                ((Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)__this_06,0,0,(MethodInfo *)UVar15);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$Select
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Select (UnityEngine_GameObject_o* source, System_String_o* sectionId, bool instant, const MethodInfo* method);
// 0x3b989d0

void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Select
               (UnityEngine_GameObject_o *source,System_String_o *sectionId,bool_conflict instant,
               MethodInfo *method)

{
  Il2CppObject *pIVar1;
  UnityEngine_CanvasGroup_o *__this;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar2;
  Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *__this_00;
  Il2CppObject *pIVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_Object_o *x;
  UnityEngine_RectTransform_o *__this_01;
  System_Type_array *components;
  System_Type_o *pSVar5;
  long lVar6;
  Il2CppClass *__this_02;
  UnityEngine_Transform_o *__this_03;
  UnityEngine_Transform_o *parent;
  UnityEngine_RectTransform_o *rect;
  UnityEngine_Canvas_o *__this_04;
  Il2CppObject *pIVar7;
  DG_Tweening_TweenCallback_o *action;
  DG_Tweening_Sequence_o *pDVar8;
  DG_Tweening_TweenCallback_float__o *pDVar9;
  DG_Tweening_Tweener_o *pDVar10;
  DG_Tweening_Tween_o *tween;
  undefined8 uVar11;
  MethodInfo *pMVar12;
  Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *x_00;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  UnityEngine_Rect_o UVar18;
  UnityEngine_Rect_o rect_00;
  UnityEngine_Rect_o rect_01;
  UnityEngine_Rect_o rect_02;
  float fStack_f0;
  float fStack_ec;
  float fStack_d0;
  float fStack_cc;
  UnityEngine_Bounds_o UStack_60;
  Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *pGStack_48;
  
  pMVar12 = (MethodInfo *)sectionId;
  if (g_data_057a9f16 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9f16 = '\x01';
  }
  __this_00 = Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__FindNavigator(source,pMVar12);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  x_00 = __this_00;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    return;
  }
  if (__this_00 != (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)0x0) {
    Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Select_3a99f70
              (__this_00,sectionId,instant & 0xff,method);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pGStack_48 = __this_00;
  if (g_data_057a9f10 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOTween);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CanvasGroup_AddComponent_CanvasGroup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Canvas_AddComponent_Canvas);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Canvas_GetComponentInParent_Canvas);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotionDriver);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback_float);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_OnComplete_Sequence);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_OnKill_Sequence);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_SetUpdate_Sequence);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Play_b__0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Play_b__1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Play_b__2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass1_0);
    il2cpp_runtime_helper_023445d0(&"AoTTG Search Spotlight");
    g_data_057a9f10 = '\x01';
  }
  pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass1_0);
  System_Object___ctor(pIVar3,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar4 = (UnityEngine_Transform_o *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
label_03b98bda:
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    x = (UnityEngine_Object_o *)0x0;
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (x_00 == (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)0x0) goto label_03b99204;
      x = (UnityEngine_Object_o *)
          UnityEngine_GameObject__GetComponentInParent_object_((UnityEngine_GameObject_o *)x_00,MethodInfo_Canvas_GetComponentInParent_Canvas);
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_01 = (UnityEngine_RectTransform_o *)0x0;
    bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (x == (UnityEngine_Object_o *)0x0) goto label_03b99204;
      __this_01 = (UnityEngine_RectTransform_o *)
                  UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)x,MethodInfo_RectTransform_GetComponent_RectTransform);
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      return;
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      return;
    }
    components = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
    handle.fields.value = TypeRef_RectTransform.fields.value;
    if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar5 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
    if (components == (System_Type_array *)0x0) goto label_03b99204;
    if ((pSVar5 != (System_Type_o *)0x0) &&
       (lVar6 = il2cpp_runtime_helper_023051f0(pSVar5,(((components->obj).klass)->_1).element_class), lVar6 == 0))
    goto label_03b9920e;
    if ((int)components->max_length != 0) {
      components->m_Items[0] = pSVar5;
      il2cpp_runtime_helper_022b4080(components->m_Items,pSVar5);
      __this_02 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
      UnityEngine_GameObject___ctor_4dfc440
                ((UnityEngine_GameObject_o *)__this_02,"AoTTG Search Spotlight",components,(MethodInfo *)0x0);
      if (pIVar3 != (Il2CppObject *)0x0) {
        pIVar1 = pIVar3 + 1;
        pIVar3[1].klass = __this_02;
        il2cpp_runtime_helper_022b4080(pIVar1);
        if (((pIVar3[1].klass != (Il2CppClass *)0x0) &&
            (__this_03 = UnityEngine_GameObject__get_transform
                                   ((UnityEngine_GameObject_o *)pIVar3[1].klass,(MethodInfo *)0x0),
            x != (UnityEngine_Object_o *)0x0)) &&
           (parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)x,(MethodInfo *)0x0),
           __this_03 != (UnityEngine_Transform_o *)0x0)) {
          UnityEngine_Transform__SetParent_4e09e30(__this_03,parent,0,(MethodInfo *)0x0);
          if (pIVar1->klass != (Il2CppClass *)0x0) {
            pMVar12 = MethodInfo_RectTransform_GetComponent_RectTransform;
            rect = (UnityEngine_RectTransform_o *)
                   UnityEngine_GameObject__GetComponent_object_
                             ((UnityEngine_GameObject_o *)pIVar1->klass,(MethodInfo_255A0F0 *)MethodInfo_RectTransform_GetComponent_RectTransform);
            Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__Stretch(rect,pMVar12);
            if ((pIVar1->klass != (Il2CppClass *)0x0) &&
               (__this_04 = (UnityEngine_Canvas_o *)
                            UnityEngine_GameObject__AddComponent_object_
                                      ((UnityEngine_GameObject_o *)pIVar1->klass,MethodInfo_Canvas_AddComponent_Canvas),
               __this_04 != (UnityEngine_Canvas_o *)0x0)) {
              UnityEngine_Canvas__set_overrideSorting(__this_04,1,(MethodInfo *)0x0);
              UnityEngine_Canvas__set_sortingOrder(__this_04,900,(MethodInfo *)0x0);
              if (pIVar1->klass != (Il2CppClass *)0x0) {
                pIVar7 = UnityEngine_GameObject__AddComponent_object_
                                   ((UnityEngine_GameObject_o *)pIVar1->klass,MethodInfo_CanvasGroup_AddComponent_CanvasGroup);
                pIVar3[1].monitor = pIVar7;
                il2cpp_runtime_helper_022b4080(&pIVar3[1].monitor);
                if (pIVar3[1].monitor != (UnityEngine_CanvasGroup_o *)0x0) {
                  UnityEngine_CanvasGroup__set_blocksRaycasts(pIVar3[1].monitor,0,(MethodInfo *)0x0);
                  __this = pIVar3[1].monitor;
                  if (__this != (UnityEngine_CanvasGroup_o *)0x0) {
                    UnityEngine_CanvasGroup__set_alpha(__this,0.0,(MethodInfo *)0x0);
                    if (g_data_057a9f11 == '\0') {
                      il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
                      g_data_057a9f11 = '\x01';
                    }
                    if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    UnityEngine_RectTransformUtility__CalculateRelativeRectTransformBounds
                              (&UStack_60,(UnityEngine_Transform_o *)__this_01,pUVar4,(MethodInfo *)0x0);
                    if ((pIVar1->klass != (Il2CppClass *)0x0) &&
                       (pUVar4 = UnityEngine_GameObject__get_transform
                                           ((UnityEngine_GameObject_o *)pIVar1->klass,(MethodInfo *)0x0),
                       __this_01 != (UnityEngine_RectTransform_o *)0x0)) {
                      fStack_d0 = UStack_60.fields.m_Center.fields.x;
                      fStack_cc = UStack_60.fields.m_Center.fields.y;
                      fStack_f0 = UStack_60.fields.m_Extents.fields.x;
                      fStack_ec = UStack_60.fields.m_Extents.fields.y;
                      fVar15 = (fStack_d0 - fStack_f0) + -10.0;
                      fVar16 = (fStack_cc - fStack_ec) + -10.0;
                      pMVar12 = (MethodInfo *)0x0;
                      UVar18 = UnityEngine_RectTransform__get_rect(__this_01,(MethodInfo *)0x0);
                      fVar13 = UVar18.fields.m_XMin;
                      fVar17 = ((fStack_ec + fStack_cc + 10.0) - fVar16) + fVar16;
                      fVar14 = fVar13 + UVar18.fields.m_Width;
                      rect_00.fields.m_Width = fVar14 - fVar13;
                      rect_00.fields.m_YMin = fVar17;
                      rect_00.fields.m_XMin = fVar13;
                      rect_00.fields.m_Height = (UVar18.fields.m_Height + UVar18.fields.m_YMin) - fVar17;
                      Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__AddPanel
                                (pUVar4,(UnityEngine_Color_o)(ZEXT816(0x3f147ae100000000) << 0x40),rect_00,
                                 pMVar12);
                      rect_01.fields.m_Height = fVar16 - UVar18.fields.m_YMin;
                      rect_01.fields.m_Width = rect_00.fields.m_Width;
                      rect_01.fields.m_XMin = (float)(int)UVar18.fields._0_8_;
                      rect_01.fields.m_YMin = (float)(int)((ulong)UVar18.fields._0_8_ >> 0x20);
                      Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__AddPanel
                                (pUVar4,(UnityEngine_Color_o)(ZEXT816(0x3f147ae100000000) << 0x40),rect_01,
                                 pMVar12);
                      UVar18.fields.m_Width = fVar15 - fVar13;
                      UVar18.fields.m_YMin = fVar16;
                      UVar18.fields.m_XMin = fVar13;
                      UVar18.fields.m_Height = fVar17 - fVar16;
                      Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__AddPanel
                                (pUVar4,(UnityEngine_Color_o)(ZEXT816(0x3f147ae100000000) << 0x40),UVar18,
                                 pMVar12);
                      fVar15 = ((fStack_d0 + fStack_f0 + 10.0) - fVar15) + fVar15;
                      rect_02.fields.m_Width = fVar14 - fVar15;
                      rect_02.fields.m_YMin = fVar16;
                      rect_02.fields.m_XMin = fVar15;
                      rect_02.fields.m_Height = fVar17 - fVar16;
                      Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__AddPanel
                                (pUVar4,(UnityEngine_Color_o)(ZEXT816(0x3f147ae100000000) << 0x40),rect_02,
                                 pMVar12);
                      action = (DG_Tweening_TweenCallback_o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback);
                      DG_Tweening_TweenCallback___ctor();
                      if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      pDVar8 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
                      pDVar9 = (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback_float);
                      DG_Tweening_TweenCallback_float____ctor();
                      pDVar10 = DG_Tweening_DOVirtual__Float(0.0,1.0,0.14,pDVar9,(MethodInfo *)0x0);
                      pDVar8 = DG_Tweening_TweenSettingsExtensions__Append
                                         (pDVar8,(DG_Tweening_Tween_o *)pDVar10,(MethodInfo *)0x0);
                      pDVar8 = DG_Tweening_TweenSettingsExtensions__AppendInterval
                                         (pDVar8,0.18,(MethodInfo *)0x0);
                      pDVar9 = (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback_float);
                      DG_Tweening_TweenCallback_float____ctor();
                      pDVar10 = DG_Tweening_DOVirtual__Float(1.0,0.0,0.18,pDVar9,(MethodInfo *)0x0);
                      pDVar8 = DG_Tweening_TweenSettingsExtensions__Append
                                         (pDVar8,(DG_Tweening_Tween_o *)pDVar10,(MethodInfo *)0x0);
                      pIVar3 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                                         ((Il2CppObject *)pDVar8,1,MethodInfo_Sequence_SetUpdate_Sequence);
                      pIVar3 = DG_Tweening_TweenSettingsExtensions__OnComplete_object_
                                         (pIVar3,action,MethodInfo_Sequence_OnComplete_Sequence);
                      tween = (DG_Tweening_Tween_o *)
                              DG_Tweening_TweenSettingsExtensions__OnKill_object_(pIVar3,action,MethodInfo_Sequence_OnKill_Sequence);
                      if (*(int *)(TypeInfo_GisketchMotionDriver + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Track(tween,0,(MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto label_03b99204;
    }
  }
  else {
    if (x_00 != (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)0x0) {
      pUVar4 = (UnityEngine_Transform_o *)
               UnityEngine_GameObject__GetComponent_object_
                         ((UnityEngine_GameObject_o *)x_00,(MethodInfo_255A0F0 *)MethodInfo_RectTransform_GetComponent_RectTransform);
      goto label_03b98bda;
    }
label_03b99204:
    il2cpp_runtime_helper_022b2c90();
  }
  il2cpp_runtime_helper_022b2ca0();
label_03b9920e:
  uVar11 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10(uVar11,0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$Select
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Select (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o* __this, System_String_o* sectionId, bool instant, const MethodInfo* method);
// 0x3b99f70

void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Select_3a99f70
               (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *__this,System_String_o *sectionId,
               bool_conflict instant,MethodInfo *method)

{
  UnityEngine_RectTransform_array **ppUVar1;
  Il2CppClass **ppIVar2;
  UnityEngine_Vector2_Fields UVar3;
  long lVar4;
  UnityEngine_RectTransform_o *pUVar5;
  UnityEngine_RectTransform_StaticFields *pUVar6;
  UnityEngine_Component_o *__this_00;
  undefined1 auVar7 [16];
  bool_conflict bVar8;
  int iVar9;
  UnityEngine_Transform_o *__this_01;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *pGVar10;
  System_String_o *name;
  UnityEngine_UI_ScrollRect_o *pUVar11;
  UnityEngine_RectTransform_array *pUVar12;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *pGVar13;
  System_String_array *pSVar14;
  UnityEngine_UI_Image_o *pUVar15;
  DG_Tweening_Core_DOGetter_float__o *getter;
  DG_Tweening_Core_DOSetter_float__o *setter;
  DG_Tweening_Core_TweenerCore_float__float__FloatOptions__o *t;
  Il2CppObject *t_00;
  Il2CppClass *pIVar16;
  undefined8 uVar17;
  Gilzoide_FlexUi_FlexLayout_o *__this_02;
  ulong uVar18;
  ulong extraout_RDX;
  UnityEngine_RectTransform_array *unaff_RBX;
  UnityEngine_RectTransform_o *pUVar19;
  Gilzoide_FlexUi_FlexLayout_o *x;
  uint uVar20;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *unaff_RBP;
  MethodInfo *pMVar21;
  Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *__this_03;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *pGVar22;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *__this_04;
  UnityEngine_RectTransform_o *__this_05;
  Gilzoide_FlexUi_FlexLayout_o *__this_06;
  UnityEngine_RectTransform_array *unaff_R12;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *unaff_R13;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *unaff_R14;
  UnityEngine_Transform_o *unaff_R15;
  float fVar23;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined4 in_XMM1_Dc;
  undefined4 uVar24;
  undefined4 in_XMM1_Dd;
  undefined4 uVar25;
  float fVar26;
  undefined1 auVar27 [16];
  UnityEngine_Rect_o UVar28;
  undefined8 uStack_b0;
  UnityEngine_RectTransform_array *pUStack_a8;
  UnityEngine_RectTransform_array *pUStack_a0;
  Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *pGStack_98;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *pGStack_90;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *pGStack_88;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *pGStack_80;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *pGStack_78;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *pGStack_70;
  UnityEngine_RectTransform_array **ppUStack_68;
  undefined8 uStack_60;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *pGStack_58;
  
  pMVar21 = (MethodInfo *)sectionId;
  if (g_data_057a9f17 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9f17 = '\x01';
  }
  __this_03 = __this;
  Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Resolve(__this,pMVar21);
  pSVar14 = (__this->fields)._sectionIds;
  pGVar10 = unaff_RBP;
  if (pSVar14 != (System_String_array *)0x0) {
    pGVar10 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)0x0;
    do {
      uVar20 = (uint)pSVar14->max_length;
      if ((long)(int)uVar20 <= (long)pGVar10) {
        return;
      }
      if ((Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)(ulong)uVar20 <= pGVar10)
      goto label_03b9a0a0;
      __this_03 = (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)pSVar14->m_Items[(long)pGVar10];
      method = (MethodInfo *)0x0;
      pMVar21 = (MethodInfo *)sectionId;
      bVar8 = System_String__Equals_3af50f0((System_String_o *)__this_03,sectionId,5,(MethodInfo *)0x0);
      if ((char)bVar8 != '\0') goto label_03b99ff2;
      pGVar10 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)
                ((long)&((Il2CppClass_1 *)&pGVar10->obj)->image + 1);
      pSVar14 = (__this->fields)._sectionIds;
    } while (pSVar14 != (System_String_array *)0x0);
  }
  do {
    while( true ) {
      il2cpp_runtime_helper_022b2c90();
label_03b99ff2:
      uVar20 = (uint)pGVar10;
      if (((int)uVar20 < 0) || ((__this->fields)._activeIndex == uVar20)) {
        return;
      }
      pMVar21 = (MethodInfo *)((ulong)pGVar10 & 0xffffffff);
      __this_03 = __this;
      Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__SetActive
                (__this,uVar20,(uint)(byte)(__this->fields)._separate,method);
      if ((char)(__this->fields)._separate == '\0') break;
      sectionId = (System_String_o *)(__this->fields)._scroll;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar21 = (MethodInfo *)0x0;
      bVar8 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)sectionId,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar8 == '\0') {
        return;
      }
      Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__RefreshSeparateLayout(__this,pMVar21);
      pUVar11 = (__this->fields)._scroll;
      if (pUVar11 != (UnityEngine_UI_ScrollRect_o *)0x0) {
        UnityEngine_UI_ScrollRect__set_verticalNormalizedPosition(pUVar11,1.0,(MethodInfo *)0x0);
        return;
      }
    }
    pUVar12 = (__this->fields)._sections;
  } while (pUVar12 == (UnityEngine_RectTransform_array *)0x0);
  if (uVar20 < (uint)pUVar12->max_length) {
    pGVar13 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)pUVar12->m_Items[(long)pGVar10];
    uVar18 = (ulong)(uint)instant & 0xff;
  }
  else {
label_03b9a0a0:
    uStack_60 = il2cpp_runtime_helper_022b2ca0();
    pGStack_58 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)sectionId;
    if (g_data_057a9f18 == '\0') {
      ppUStack_68 = (UnityEngine_RectTransform_array **)0x3b9a0d3;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchBrushButtonFeedback);
      ppUStack_68 = (UnityEngine_RectTransform_array **)0x3b9a0df;
      il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchBrushButtonFeedback_ComponentInNamedChild_Gisket);
      ppUStack_68 = (UnityEngine_RectTransform_array **)0x3b9a0eb;
      il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_ComponentInNamedChild_RectTransform);
      ppUStack_68 = (UnityEngine_RectTransform_array **)0x3b9a0f7;
      il2cpp_runtime_helper_023445d0(&MethodInfo_ScrollRect_ComponentInNamedChild_ScrollRect);
      ppUStack_68 = (UnityEngine_RectTransform_array **)0x3b9a103;
      il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransform);
      ppUStack_68 = (UnityEngine_RectTransform_array **)0x3b9a10f;
      il2cpp_runtime_helper_023445d0(&"brush-side-panel-button-");
      ppUStack_68 = (UnityEngine_RectTransform_array **)0x3b9a11b;
      il2cpp_runtime_helper_023445d0(&"-scroll");
      g_data_057a9f18 = '\x01';
    }
    ppUStack_68 = (UnityEngine_RectTransform_array **)0x3b9a12a;
    bVar8 = Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__IsResolved(__this_03,pMVar21);
    if ((char)bVar8 != '\0') {
      return;
    }
    ppUStack_68 = (UnityEngine_RectTransform_array **)0x3b9a13c;
    __this_01 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
    if (__this_01 == (UnityEngine_Transform_o *)0x0) {
label_03b9a308:
      ppUStack_68 = (UnityEngine_RectTransform_array **)0x3b9a30d;
      il2cpp_runtime_helper_022b2c90();
      return;
    }
    ppUStack_68 = (UnityEngine_RectTransform_array **)0x3b9a14f;
    pGVar10 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)
              UnityEngine_Transform__get_parent(__this_01,(MethodInfo *)0x0);
    ppUStack_68 = (UnityEngine_RectTransform_array **)0x3b9a167;
    name = System_String__Concat_3ae5ba0((__this_03->fields)._prefix,"-scroll",(MethodInfo *)0x0);
    ppUStack_68 = (UnityEngine_RectTransform_array **)0x3b9a17c;
    pUVar11 = (UnityEngine_UI_ScrollRect_o *)
              Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__ComponentInNamedChild_object_
                        ((UnityEngine_Transform_o *)pGVar10,name,MethodInfo_ScrollRect_ComponentInNamedChild_ScrollRect);
    (__this_03->fields)._scroll = pUVar11;
    ppUStack_68 = (UnityEngine_RectTransform_array **)0x3b9a18c;
    il2cpp_runtime_helper_022b4080(&(__this_03->fields)._scroll,pUVar11);
    pSVar14 = (__this_03->fields)._sectionIds;
    if (pSVar14 == (System_String_array *)0x0) goto label_03b9a308;
    ppUStack_68 = (UnityEngine_RectTransform_array **)0x3b9a1ab;
    pUVar12 = (UnityEngine_RectTransform_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_RectTransform,(int)pSVar14->max_length);
    ppUVar1 = &(__this_03->fields)._sections;
    (__this_03->fields)._sections = pUVar12;
    ppUStack_68 = (UnityEngine_RectTransform_array **)0x3b9a1be;
    il2cpp_runtime_helper_022b4080(ppUVar1,pUVar12);
    pSVar14 = (__this_03->fields)._sectionIds;
    if (pSVar14 == (System_String_array *)0x0) goto label_03b9a308;
    ppUStack_68 = (UnityEngine_RectTransform_array **)0x3b9a1dd;
    pGVar13 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)
              il2cpp_runtime_helper_022b2a40(TypeInfo_GisketchBrushButtonFeedback,(int)pSVar14->max_length);
    pGVar22 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)&(__this_03->fields)._buttons;
    (__this_03->fields)._buttons = pGVar13;
    ppUStack_68 = (UnityEngine_RectTransform_array **)0x3b9a1ed;
    il2cpp_runtime_helper_022b4080();
    pSVar14 = (__this_03->fields)._sectionIds;
    if (pSVar14 == (System_String_array *)0x0) goto label_03b9a308;
    unaff_RBP = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)0x0;
    while( true ) {
      uVar20 = (uint)pSVar14->max_length;
      if ((long)(int)uVar20 <= (long)unaff_RBP) {
        return;
      }
      unaff_R14 = pGVar13;
      if ((Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)(ulong)uVar20 <= unaff_RBP) break;
      unaff_R12 = *ppUVar1;
      sectionId = pSVar14->m_Items[(long)unaff_RBP];
      if (g_data_057a9f1e == '\0') {
        ppUStack_68 = (UnityEngine_RectTransform_array **)0x3b9a235;
        il2cpp_runtime_helper_023445d0(&"-section-");
        g_data_057a9f1e = '\x01';
      }
      ppUStack_68 = (UnityEngine_RectTransform_array **)0x3b9a254;
      unaff_R14 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)
                  System_String__Concat_3af7150
                            ((__this_03->fields)._prefix,"-section-",sectionId,(MethodInfo *)0x0);
      ppUStack_68 = (UnityEngine_RectTransform_array **)0x3b9a269;
      pGVar22 = pGVar10;
      pGVar13 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)
                Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__ComponentInNamedChild_object_
                          ((UnityEngine_Transform_o *)pGVar10,(System_String_o *)unaff_R14,MethodInfo_RectTransform_ComponentInNamedChild_RectTransform);
      if (unaff_R12 == (UnityEngine_RectTransform_array *)0x0) goto label_03b9a308;
      if ((Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)
          (ulong)*(uint *)&unaff_R12->max_length <= unaff_RBP) break;
      pGVar22 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)
                (unaff_R12->m_Items + (long)unaff_RBP);
      unaff_R12->m_Items[(long)unaff_RBP] = (UnityEngine_RectTransform_o *)pGVar13;
      ppUStack_68 = (UnityEngine_RectTransform_array **)0x3b9a295;
      il2cpp_runtime_helper_022b4080();
      pSVar14 = (__this_03->fields)._sectionIds;
      if (pSVar14 == (System_String_array *)0x0) goto label_03b9a308;
      unaff_R14 = pGVar13;
      if ((Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)(ulong)(uint)pSVar14->max_length <=
          unaff_RBP) break;
      sectionId = (System_String_o *)(__this_03->fields)._buttons;
      ppUStack_68 = (UnityEngine_RectTransform_array **)0x3b9a2c0;
      unaff_R14 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)
                  System_String__Concat_3ae5ba0
                            ("brush-side-panel-button-",pSVar14->m_Items[(long)unaff_RBP],(MethodInfo *)0x0);
      ppUStack_68 = (UnityEngine_RectTransform_array **)0x3b9a2d5;
      pGVar22 = pGVar10;
      pGVar13 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)
                Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__ComponentInNamedChild_object_
                          ((UnityEngine_Transform_o *)pGVar10,(System_String_o *)unaff_R14,MethodInfo_GisketchBrushButtonFeedback_ComponentInNamedChild_Gisket);
      if ((Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)sectionId ==
          (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)0x0) goto label_03b9a308;
      if ((Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)
          (ulong)*(uint *)&((Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)sectionId)->
                           max_length <= unaff_RBP) break;
      pGVar22 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)
                (((Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)sectionId)->m_Items +
                (long)unaff_RBP);
      ((Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)sectionId)->m_Items[(long)unaff_RBP] =
           (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)pGVar13;
      ppUStack_68 = (UnityEngine_RectTransform_array **)0x3b9a2f7;
      il2cpp_runtime_helper_022b4080();
      unaff_RBP = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)
                  ((long)&((Il2CppClass_1 *)&unaff_RBP->obj)->image + 1);
      pSVar14 = (__this_03->fields)._sectionIds;
      if (pSVar14 == (System_String_array *)0x0) goto label_03b9a308;
    }
    ppUStack_68 = (UnityEngine_RectTransform_array **)0x3b9a321;
    il2cpp_runtime_helper_022b2ca0();
    pUVar15 = ((Il2CppType *)pGVar22->m_Items)->data;
    pGStack_78 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)sectionId;
    pGStack_70 = pGVar10;
    ppUStack_68 = ppUVar1;
    if (pUVar15 == (UnityEngine_UI_Image_o *)0x0) goto label_03b9a385;
    pUVar12 = (UnityEngine_RectTransform_array *)0x0;
    pGVar10 = unaff_R14;
    unaff_R13 = pGVar22;
    while( true ) {
      uVar20 = *(uint *)&(pUVar15->fields).m_CancellationTokenSource;
      method = (MethodInfo *)(ulong)uVar20;
      if ((long)(int)uVar20 <= (long)pUVar12) {
        return;
      }
      if (method <= pUVar12) break;
      unaff_R13 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)
                  (&(pUVar15->fields).m_Material)[(long)pUVar12];
      pGStack_80 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)0x3b9a374;
      pGVar10 = unaff_R14;
      bVar8 = System_String__Equals_3af50f0
                        ((System_String_o *)unaff_R13,(System_String_o *)unaff_R14,5,(MethodInfo *)0x0);
      if ((char)bVar8 != '\0') {
        return;
      }
      pUVar12 = (UnityEngine_RectTransform_array *)((long)&(pUVar12->obj).klass + 1);
      pUVar15 = ((Il2CppType *)pGVar22->m_Items)->data;
      if (pUVar15 == (UnityEngine_UI_Image_o *)0x0) {
label_03b9a385:
        pGStack_80 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)0x3b9a38a;
        il2cpp_runtime_helper_022b2c90();
        return;
      }
    }
    pGStack_80 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)0x3b9a39c;
    auVar27 = il2cpp_runtime_helper_022b2ca0();
    uStack_b0 = auVar27._0_8_;
    register0x00000020 = (BADSPACEBASE *)&uStack_b0;
    unaff_RBX = (UnityEngine_RectTransform_array *)(auVar27._8_8_ & 0xffffffff);
    unaff_R15 = (UnityEngine_Transform_o *)((ulong)pGVar10 & 0xffffffff);
    pGVar13 = pGVar10;
    __this_04 = unaff_R13;
    pUStack_a8 = pUVar12;
    pUStack_a0 = unaff_R12;
    pGStack_98 = __this_03;
    pGStack_90 = unaff_R14;
    pGStack_88 = pGVar22;
    pGStack_80 = unaff_RBP;
    if (g_data_057a9f1a == '\0') {
      __this_04 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)&TypeInfo_Object;
      il2cpp_runtime_helper_023445d0();
      g_data_057a9f1a = '\x01';
    }
    uVar20 = (uint)pGVar10;
    if ((int)uVar20 < 0) {
      return;
    }
    pUVar15 = ((Il2CppType *)unaff_R13->m_Items)->data;
    __this = (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)__this_04;
    if (pUVar15 == (UnityEngine_UI_Image_o *)0x0) {
label_03b9a5ca:
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      iVar9 = (int)(pUVar15->fields).m_CancellationTokenSource;
      if (iVar9 <= (int)uVar20) {
        return;
      }
      uStack_b0 = CONCAT44(auVar27._8_4_,(undefined4)uStack_b0);
      *(uint *)((long)((Il2CppType *)unaff_R13->m_Items + 3) + 8) = uVar20;
      if (0 < iVar9) {
        unaff_R12 = (UnityEngine_RectTransform_array *)((ulong)pGVar10 & 0xffffffff);
        unaff_RBX = (UnityEngine_RectTransform_array *)0x0;
        unaff_R14 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)&TypeInfo_Object;
        do {
          UVar3 = *(UnityEngine_Vector2_Fields *)((Il2CppType *)unaff_R13->m_Items + 2);
          if ((UVar3 != (UnityEngine_Vector2_Fields)0x0) &&
             (method = (MethodInfo *)(ulong)*(uint *)((long)UVar3 + 0x18),
             (long)unaff_RBX < (long)(int)*(uint *)((long)UVar3 + 0x18))) {
            __this = (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)__this_04;
            if (method <= unaff_RBX) goto label_03b9a5cf;
            unaff_RBP = *(Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array **)
                         ((long)UVar3 + 0x20 + (long)unaff_RBX * 8);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pGVar13 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)0x0;
            __this_04 = unaff_RBP;
            bVar8 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)unaff_RBP,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                              );
            if (((char)bVar8 != '\0') && (*(char *)&((Il2CppType *)unaff_R13->m_Items)[1].data != '\0')) {
              UVar3 = *(UnityEngine_Vector2_Fields *)((Il2CppType *)unaff_R13->m_Items + 2);
              __this = (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)__this_04;
              if (UVar3 == (UnityEngine_Vector2_Fields)0x0) goto label_03b9a5ca;
              method = (MethodInfo *)(ulong)*(uint *)((long)UVar3 + 0x18);
              if (method <= unaff_RBX) goto label_03b9a5cf;
              __this = *(Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o **)
                        ((long)UVar3 + 0x20 + (long)unaff_RBX * 8);
              if ((Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)__this ==
                  (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)0x0) goto label_03b9a5ca;
              pGVar13 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)0x0;
              __this_04 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)
                          UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
              if (__this_04 == (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)0x0)
              goto label_03b9a5ca;
              pGVar13 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)
                        (ulong)(unaff_R12 == unaff_RBX);
              UnityEngine_GameObject__SetActive
                        ((UnityEngine_GameObject_o *)__this_04,(uint)(unaff_R12 == unaff_RBX),
                         (MethodInfo *)0x0);
            }
          }
          lVar4 = *(long *)&((UnityEngine_Color_o *)
                            ((UnityEngine_Vector2_o *)((Il2CppType *)unaff_R13->m_Items + 2) + 1))->fields;
          if ((lVar4 != 0) &&
             (method = (MethodInfo *)(ulong)*(uint *)(lVar4 + 0x18),
             (long)unaff_RBX < (long)(int)*(uint *)(lVar4 + 0x18))) {
            __this = (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)__this_04;
            if (method <= unaff_RBX) goto label_03b9a5cf;
            unaff_RBP = *(Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array **)
                         (lVar4 + 0x20 + (long)unaff_RBX * 8);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pGVar13 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)0x0;
            __this_04 = unaff_RBP;
            bVar8 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)unaff_RBP,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                              );
            if ((char)bVar8 != '\0') {
              lVar4 = *(long *)&((UnityEngine_Color_o *)
                                ((UnityEngine_Vector2_o *)((Il2CppType *)unaff_R13->m_Items + 2) + 1))->fields
              ;
              __this = (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)__this_04;
              if (lVar4 == 0) goto label_03b9a5ca;
              method = (MethodInfo *)(ulong)*(uint *)(lVar4 + 0x18);
              if (method <= unaff_RBX) goto label_03b9a5cf;
              __this_04 = *(Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array **)
                           (lVar4 + 0x20 + (long)unaff_RBX * 8);
              __this = (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)__this_04;
              if (__this_04 == (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)0x0)
              goto label_03b9a5ca;
              *(bool *)((long)((Il2CppType *)__this_04->m_Items + 10) + 10) = unaff_R12 == unaff_RBX;
              Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__Refresh
                        ((Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)__this_04,
                         (MethodInfo *)pGVar13);
            }
          }
          pUVar15 = ((Il2CppType *)unaff_R13->m_Items)->data;
          __this = (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)__this_04;
          if (pUVar15 == (UnityEngine_UI_Image_o *)0x0) goto label_03b9a5ca;
          unaff_RBX = (UnityEngine_RectTransform_array *)((long)&(unaff_RBX->obj).klass + 1);
        } while ((long)unaff_RBX < (long)*(int *)&(pUVar15->fields).m_CancellationTokenSource);
      }
      if ((uStack_b0._4_1_ == '\0') ||
         (UVar3 = *(UnityEngine_Vector2_Fields *)((Il2CppType *)unaff_R13->m_Items + 2),
         UVar3 == (UnityEngine_Vector2_Fields)0x0)) {
        return;
      }
      if (uVar20 < *(uint *)((long)UVar3 + 0x18)) {
        unaff_RBX = (UnityEngine_RectTransform_array *)(long)(int)uVar20;
        unaff_R14 = *(Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array **)
                     ((long)UVar3 + 0x20 + (long)unaff_RBX * 8);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pGVar13 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)0x0;
        __this = (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)unaff_R14;
        bVar8 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)unaff_R14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar8 == '\0') {
          return;
        }
        UVar3 = *(UnityEngine_Vector2_Fields *)((Il2CppType *)unaff_R13->m_Items + 2);
        if (UVar3 == (UnityEngine_Vector2_Fields)0x0) goto label_03b9a5ca;
        if (uVar20 < *(uint *)((long)UVar3 + 0x18)) {
          Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__AnimateSection
                    (*(UnityEngine_RectTransform_o **)((long)UVar3 + 0x20 + (long)unaff_RBX * 8),
                     (MethodInfo *)pGVar13);
          return;
        }
      }
    }
label_03b9a5cf:
    il2cpp_runtime_helper_022b2ca0();
    uVar18 = extraout_RDX;
  }
  *(Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array **)((long)register0x00000020 + -8) = unaff_RBP
  ;
  *(UnityEngine_Transform_o **)((long)register0x00000020 + -0x10) = unaff_R15;
  *(Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array **)((long)register0x00000020 + -0x18) =
       unaff_R14;
  *(Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array **)((long)register0x00000020 + -0x20) =
       unaff_R13;
  *(UnityEngine_RectTransform_array **)((long)register0x00000020 + -0x28) = unaff_R12;
  *(UnityEngine_RectTransform_array **)((long)register0x00000020 + -0x30) = unaff_RBX;
  if (g_data_057a9f1c == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x3b9a610;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x3b9a61c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOGetter_float);
    *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x3b9a628;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOSetter_float);
    *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x3b9a634;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOTween);
    *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x3b9a640;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotionDriver);
    *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x3b9a64c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ScrollTo_b__22_0);
    *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x3b9a658;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ScrollTo_b__22_1);
    *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x3b9a664;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x3b9a670;
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
    *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x3b9a67c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TweenerCore_3_System_Single_System_Single_DG_Tweening_Pl);
    *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x3b9a688;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TweenerCore_3_System_Single_System_Single_DG_Tweening_Pl);
    g_data_057a9f1c = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x3b9a6a8;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x3b9a6b4;
  bVar8 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    pUVar19 = *(UnityEngine_RectTransform_o **)
               &((Il2CppType *)
                ((Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)__this)->m_Items)[1].bits;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x3b9a6d3;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x3b9a6df;
    __this_05 = pUVar19;
    bVar8 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar19,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      pUVar5 = *(UnityEngine_RectTransform_o **)
                &((Il2CppType *)
                 ((Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)__this)->m_Items)[1].bits;
      if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
        pUVar19 = (UnityEngine_RectTransform_o *)pUVar5[2].fields.m_CachedPtr;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x3b9a70b;
          il2cpp_runtime_helper_02337ed0();
        }
        *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x3b9a717;
        __this_05 = pUVar19;
        bVar8 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)pUVar19,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar8 != '\0') {
          return;
        }
        pUVar5 = *(UnityEngine_RectTransform_o **)
                  &((Il2CppType *)
                   ((Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)__this)->m_Items)[1].bits;
        if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
          pUVar19 = pUVar5[1].monitor;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x3b9a743;
            il2cpp_runtime_helper_02337ed0();
          }
          *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x3b9a74f;
          bVar8 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)pUVar19,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar8 != '\0') {
            return;
          }
          __this_05 = (UnityEngine_RectTransform_o *)0x0;
          *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x3b9a75e;
          UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
          pUVar5 = *(UnityEngine_RectTransform_o **)
                    &((Il2CppType *)
                     ((Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)__this)->m_Items)[1].bits
          ;
          if ((pUVar5 != (UnityEngine_RectTransform_o *)0x0) &&
             (__this_05 = pUVar5[1].monitor, __this_05 != (UnityEngine_RectTransform_o *)0x0)) {
            *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x3b9a780;
            UVar28 = UnityEngine_RectTransform__get_rect(__this_05,(MethodInfo *)0x0);
            pUVar5 = *(UnityEngine_RectTransform_o **)
                      &((Il2CppType *)
                       ((Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)__this)->m_Items)[1].
                       bits;
            if ((pUVar5 != (UnityEngine_RectTransform_o *)0x0) &&
               (__this_05 = (UnityEngine_RectTransform_o *)pUVar5[2].fields.m_CachedPtr,
               __this_05 != (UnityEngine_RectTransform_o *)0x0)) {
              *(float *)((long)register0x00000020 + -0x98) = UVar28.fields.m_Height;
              *(float *)((long)register0x00000020 + -0x94) = UVar28.fields.m_Height;
              *(undefined4 *)((long)register0x00000020 + -0x90) = in_XMM1_Dc;
              *(undefined4 *)((long)register0x00000020 + -0x8c) = in_XMM1_Dd;
              *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x3b9a7aa;
              UVar28 = UnityEngine_RectTransform__get_rect(__this_05,(MethodInfo *)0x0);
              uVar24 = 0;
              uVar25 = 0;
              fVar23 = 0.0;
              if (0.0 <= *(float *)((long)register0x00000020 + -0x98) - UVar28.fields.m_Height) {
                fVar23 = *(float *)((long)register0x00000020 + -0x98) - UVar28.fields.m_Height;
              }
              if (fVar23 <= 0.01) {
                return;
              }
              *(float *)((long)register0x00000020 + -0x98) = fVar23;
              pUVar5 = *(UnityEngine_RectTransform_o **)
                        &((Il2CppType *)
                         ((Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)__this)->m_Items)[1].
                         bits;
              if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
                unaff_R15 = (UnityEngine_Transform_o *)pUVar5[2].fields.m_CachedPtr;
                if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
                  *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x3b9a7fd;
                  il2cpp_runtime_helper_02337ed0();
                }
                __this_05 = (UnityEngine_RectTransform_o *)((long)register0x00000020 + -0x48);
                method = (MethodInfo *)0x0;
                *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x3b9a80f;
                UnityEngine_RectTransformUtility__CalculateRelativeRectTransformBounds
                          ((UnityEngine_Bounds_o *)__this_05,unaff_R15,(UnityEngine_Transform_o *)pGVar13,
                           (MethodInfo *)0x0);
                pUVar5 = *(UnityEngine_RectTransform_o **)
                          &((Il2CppType *)
                           ((Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)__this)->m_Items)
                           [1].bits;
                if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
                  pUVar5 = (UnityEngine_RectTransform_o *)pUVar5[2].fields.m_CachedPtr;
                  __this_05 = (UnityEngine_RectTransform_o *)0x0;
                  if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
                    *(undefined8 *)((long)register0x00000020 + -0x68) =
                         *(undefined8 *)((long)register0x00000020 + -0x48);
                    *(undefined8 *)((long)register0x00000020 + -0x60) = 0;
                    *(undefined8 *)((long)register0x00000020 + -0x58) =
                         *(undefined8 *)((long)register0x00000020 + -0x3c);
                    *(undefined8 *)((long)register0x00000020 + -0x50) = 0;
                    *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x3b9a847;
                    UVar28 = UnityEngine_RectTransform__get_rect(pUVar5,(MethodInfo *)0x0);
                    auVar27._8_4_ = extraout_XMM0_Dc;
                    auVar27._0_8_ = UVar28.fields._0_8_;
                    auVar27._12_4_ = extraout_XMM0_Dd;
                    *(undefined1 (*) [16])((long)register0x00000020 + -0x78) = auVar27;
                    auVar7._8_4_ = uVar24;
                    auVar7._0_8_ = UVar28.fields._8_8_;
                    auVar7._12_4_ = uVar25;
                    *(undefined1 (*) [16])((long)register0x00000020 + -0x88) = auVar7;
                    pUVar11 = *(UnityEngine_UI_ScrollRect_o **)
                               &((Il2CppType *)
                                ((Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)__this)->
                                m_Items)[1].bits;
                    __this_05 = (UnityEngine_RectTransform_o *)0x0;
                    if (pUVar11 != (UnityEngine_UI_ScrollRect_o *)0x0) {
                      *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x3b9a866;
                      fVar23 = UnityEngine_UI_ScrollRect__get_verticalNormalizedPosition
                                         (pUVar11,(MethodInfo *)0x0);
                      pUVar5 = *(UnityEngine_RectTransform_o **)
                                &((Il2CppType *)
                                 ((Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)__this)->
                                 m_Items)[1].bits;
                      __this_05 = (UnityEngine_RectTransform_o *)0x0;
                      if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
                        fVar23 = fVar23 - ((*(float *)((long)register0x00000020 + -0x74) +
                                           *(float *)((long)register0x00000020 + -0x84)) -
                                          (*(float *)((long)register0x00000020 + -0x54) +
                                          *(float *)((long)register0x00000020 + -100))) /
                                          *(float *)((long)register0x00000020 + -0x98);
                        fVar26 = 1.0;
                        if (fVar23 <= 1.0) {
                          fVar26 = fVar23;
                        }
                        *(undefined1 (*) [16])((long)register0x00000020 + -0x98) =
                             ZEXT416(-(uint)(0.0 <= fVar23) & (uint)fVar26);
                        pUVar6 = pUVar5->klass[2].static_fields;
                        *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x3b9a8da;
                        (*(code *)pUVar6)();
                        pIVar16 = ((Il2CppType *)
                                  ((Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)__this)->
                                  m_Items)[3].data;
                        if (pIVar16 != (Il2CppClass *)0x0) {
                          *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x3b9a8ed;
                          DG_Tweening_TweenExtensions__Kill
                                    ((DG_Tweening_Tween_o *)pIVar16,0,(MethodInfo *)0x0);
                        }
                        if ((char)(uVar18 & 0xffffffff) == '\0') {
                          if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
                            *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x3b9a90e;
                            il2cpp_runtime_helper_02337ed0();
                          }
                          *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x3b9a915;
                          bVar8 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
                          if ((char)bVar8 != '\0') {
                            ppIVar2 = &((Il2CppType *)
                                       ((Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)__this)
                                       ->m_Items)[3].data;
                            *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x3b9a931;
                            getter = (DG_Tweening_Core_DOGetter_float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_DOGetter_float);
                            *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x3b9a94b;
                            DG_Tweening_Core_DOGetter_float____ctor();
                            *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x3b9a95a;
                            setter = (DG_Tweening_Core_DOSetter_float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_DOSetter_float);
                            *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x3b9a974;
                            DG_Tweening_Core_DOSetter_float____ctor();
                            if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
                              *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x3b9a98c;
                              il2cpp_runtime_helper_02337ed0();
                            }
                            *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x3b9a9a5;
                            t = DG_Tweening_DOTween__To
                                          (getter,setter,*(float *)((long)register0x00000020 + -0x98),0.22,
                                           (MethodInfo *)0x0);
                            *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x3b9a9bc;
                            t_00 = DG_Tweening_TweenSettingsExtensions__SetEase_object_
                                             ((Il2CppObject *)t,9,MethodInfo_TweenerCore_3_System_Single_System_Single_DG_Tweening_Pl);
                            *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x3b9a9d3;
                            pIVar16 = (Il2CppClass *)
                                      DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                                                (t_00,1,MethodInfo_TweenerCore_3_System_Single_System_Single_DG_Tweening_Pl);
                            *ppIVar2 = pIVar16;
                            *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x3b9a9e1;
                            il2cpp_runtime_helper_022b4080(ppIVar2);
                            pIVar16 = *ppIVar2;
                            if (*(int *)(TypeInfo_GisketchMotionDriver + 0xe4) == 0) {
                              *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x3b9a9fc;
                              il2cpp_runtime_helper_02337ed0();
                            }
                            *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x3b9aa08;
                            Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Track
                                      ((DG_Tweening_Tween_o *)pIVar16,0,(MethodInfo *)0x0);
                            return;
                          }
                        }
                        pUVar11 = *(UnityEngine_UI_ScrollRect_o **)
                                   &((Il2CppType *)
                                    ((Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)__this)->
                                    m_Items)[1].bits;
                        __this_05 = (UnityEngine_RectTransform_o *)0x0;
                        if (pUVar11 != (UnityEngine_UI_ScrollRect_o *)0x0) {
                          *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x3b9aa1f;
                          UnityEngine_UI_ScrollRect__set_verticalNormalizedPosition
                                    (pUVar11,*(float *)((long)register0x00000020 + -0x98),(MethodInfo *)0x0);
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
      *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x3b9aa33;
      uVar17 = il2cpp_runtime_helper_022b2c90();
      *(UnityEngine_Transform_o **)((long)register0x00000020 + -0xa0) = unaff_R15;
      *(ulong *)((long)register0x00000020 + -0xa8) = uVar18 & 0xffffffff;
      *(Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o **)((long)register0x00000020 + -0xb0) = __this;
      *(UnityEngine_RectTransform_o **)((long)register0x00000020 + -0xb8) = pUVar19;
      *(undefined8 *)((long)register0x00000020 + -0xc0) = uVar17;
      if (g_data_057a9f1b == '\0') {
        *(undefined8 *)((long)register0x00000020 + -200) = 0x3b9aa60;
        il2cpp_runtime_helper_023445d0(&MethodInfo_FlexLayout_GetComponent_FlexLayout);
        *(undefined8 *)((long)register0x00000020 + -200) = 0x3b9aa6c;
        il2cpp_runtime_helper_023445d0(&TypeInfo_LayoutRebuilder);
        *(undefined8 *)((long)register0x00000020 + -200) = 0x3b9aa78;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057a9f1b = '\x01';
      }
      x = __this_05[2].monitor;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -200) = 0x3b9aa9c;
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar21 = (MethodInfo *)0x0;
      *(undefined8 *)((long)register0x00000020 + -200) = 0x3b9aaa8;
      __this_06 = x;
      bVar8 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar8 != '\0') {
        return;
      }
      if (__this_05[2].monitor != (void *)0x0) {
        x = *(Gilzoide_FlexUi_FlexLayout_o **)((long)__this_05[2].monitor + 0x20);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          *(undefined8 *)((long)register0x00000020 + -200) = 0x3b9aacf;
          il2cpp_runtime_helper_02337ed0();
        }
        pMVar21 = (MethodInfo *)0x0;
        *(undefined8 *)((long)register0x00000020 + -200) = 0x3b9aadb;
        bVar8 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar8 != '\0') {
          return;
        }
        __this_06 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
        *(undefined8 *)((long)register0x00000020 + -200) = 0x3b9aaf2;
        UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
        if (__this_05[2].monitor != (void *)0x0) {
          __this_00 = *(UnityEngine_Component_o **)((long)__this_05[2].monitor + 0x20);
          __this_06 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
          if (__this_00 != (UnityEngine_Component_o *)0x0) {
            *(undefined8 *)((long)register0x00000020 + -200) = 0x3b9ab1b;
            __this_02 = (Gilzoide_FlexUi_FlexLayout_o *)
                        UnityEngine_Component__GetComponent_object_(__this_00,MethodInfo_FlexLayout_GetComponent_FlexLayout);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              *(undefined8 *)((long)register0x00000020 + -200) = 0x3b9ab30;
              il2cpp_runtime_helper_02337ed0();
            }
            pMVar21 = (MethodInfo *)0x0;
            *(undefined8 *)((long)register0x00000020 + -200) = 0x3b9ab3c;
            __this_06 = __this_02;
            bVar8 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                              );
            if ((char)bVar8 != '\0') {
              if (__this_02 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto label_03b9ab90;
              pMVar21 = (MethodInfo *)0x0;
              *(undefined8 *)((long)register0x00000020 + -200) = 0x3b9ab4f;
              Gilzoide_FlexUi_FlexLayout__RefreshRootLayoutImmediate(__this_02,(MethodInfo *)0x0);
              __this_06 = __this_02;
            }
            if (__this_05[2].monitor != (void *)0x0) {
              pUVar19 = *(UnityEngine_RectTransform_o **)((long)__this_05[2].monitor + 0x20);
              if (*(int *)(TypeInfo_LayoutRebuilder + 0xe4) == 0) {
                *(undefined8 *)((long)register0x00000020 + -200) = 0x3b9ab74;
                il2cpp_runtime_helper_02337ed0();
              }
              *(undefined8 *)((long)register0x00000020 + -200) = 0x3b9ab7e;
              UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate(pUVar19,(MethodInfo *)0x0);
              UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
              return;
            }
          }
        }
      }
label_03b9ab90:
      *(undefined8 *)((long)register0x00000020 + -200) = 0x3b9ab95;
      il2cpp_runtime_helper_022b2c90();
      *(Gilzoide_FlexUi_FlexLayout_o **)((long)register0x00000020 + -200) = x;
      *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x3b9aba9;
      Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Resolve
                ((Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)__this_06,pMVar21);
      Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__SetActive
                ((Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)__this_06,0,0,method);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$Start
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Start (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o* __this, const MethodInfo* method);
// 0x3b9aba0

void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Start
               (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *__this,MethodInfo *method)

{
  MethodInfo *in_RCX;
  
  Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Resolve(__this,method);
  Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__SetActive(__this,0,0,in_RCX);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$LateUpdate
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__LateUpdate (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o* __this, const MethodInfo* method);
// 0x3b9abc0

void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__LateUpdate
               (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *__this,MethodInfo *method)

{
  int32_t index;
  MethodInfo *in_RCX;
  
  if ((char)(__this->fields)._separate == '\0') {
    Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Resolve(__this,method);
    index = Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__SectionAtViewportTop(__this,method);
    if ((-1 < index) && (index != (__this->fields)._activeIndex)) {
      Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__SetActive(__this,index,0,in_RCX);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__OnDestroy (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o* __this, const MethodInfo* method);
// 0x3b9ae70

void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__OnDestroy
               (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *__this,MethodInfo *method)

{
  DG_Tweening_Tween_o *t;
  
  t = (__this->fields)._scrollTween;
  if (t != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(t,0,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$Resolve
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Resolve (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o* __this, const MethodInfo* method);
// 0x3b9a0b0

void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Resolve
               (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_array **ppUVar1;
  Il2CppClass **ppIVar2;
  UnityEngine_Vector2_Fields UVar3;
  long lVar4;
  UnityEngine_RectTransform_o *pUVar5;
  UnityEngine_Object_o *pUVar6;
  UnityEngine_Component_o *__this_00;
  bool_conflict bVar7;
  int iVar8;
  UnityEngine_Transform_o *pUVar9;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *pGVar10;
  System_String_o *name;
  UnityEngine_UI_ScrollRect_o *pUVar11;
  UnityEngine_RectTransform_array *pUVar12;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *pGVar13;
  System_String_array *pSVar14;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *name_00;
  UnityEngine_UI_Image_o *pUVar15;
  DG_Tweening_Core_DOGetter_float__o *getter;
  DG_Tweening_Core_DOSetter_float__o *setter;
  DG_Tweening_Core_TweenerCore_float__float__FloatOptions__o *t;
  Il2CppObject *t_00;
  Il2CppClass *pIVar16;
  Gilzoide_FlexUi_FlexLayout_o *__this_01;
  UnityEngine_RectTransform_array *method_00;
  char extraout_DL;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *unaff_RBX;
  UnityEngine_RectTransform_array *pUVar17;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *x;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *method_01;
  MethodInfo *method_02;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *pGVar18;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *__this_02;
  UnityEngine_RectTransform_o *pUVar19;
  Gilzoide_FlexUi_FlexLayout_o *__this_03;
  UnityEngine_RectTransform_array *unaff_R12;
  uint uVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  UnityEngine_Rect_o UVar24;
  UnityEngine_Rect_o UVar25;
  float fStack_10c;
  float fStack_fc;
  undefined1 auStack_d0 [16];
  float fStack_c0;
  UnityEngine_RectTransform_array *pUStack_b8;
  UnityEngine_RectTransform_array *pUStack_b0;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *pGStack_a8;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *pGStack_a0;
  ulong uStack_98;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *pGStack_90;
  undefined8 uStack_88;
  UnityEngine_RectTransform_array *pUStack_80;
  UnityEngine_RectTransform_array *pUStack_78;
  Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *pGStack_70;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *pGStack_68;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *pGStack_60;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *pGStack_58;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *pGStack_50;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *pGStack_48;
  UnityEngine_RectTransform_array **ppUStack_40;
  
  if (g_data_057a9f18 == '\0') {
    ppUStack_40 = (UnityEngine_RectTransform_array **)0x3b9a0d3;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchBrushButtonFeedback);
    ppUStack_40 = (UnityEngine_RectTransform_array **)0x3b9a0df;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchBrushButtonFeedback_ComponentInNamedChild_Gisket);
    ppUStack_40 = (UnityEngine_RectTransform_array **)0x3b9a0eb;
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_ComponentInNamedChild_RectTransform);
    ppUStack_40 = (UnityEngine_RectTransform_array **)0x3b9a0f7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_ScrollRect_ComponentInNamedChild_ScrollRect);
    ppUStack_40 = (UnityEngine_RectTransform_array **)0x3b9a103;
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransform);
    ppUStack_40 = (UnityEngine_RectTransform_array **)0x3b9a10f;
    il2cpp_runtime_helper_023445d0(&"brush-side-panel-button-");
    ppUStack_40 = (UnityEngine_RectTransform_array **)0x3b9a11b;
    il2cpp_runtime_helper_023445d0(&"-scroll");
    g_data_057a9f18 = '\x01';
  }
  ppUStack_40 = (UnityEngine_RectTransform_array **)0x3b9a12a;
  bVar7 = Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__IsResolved(__this,method);
  if ((char)bVar7 != '\0') {
    return;
  }
  ppUStack_40 = (UnityEngine_RectTransform_array **)0x3b9a13c;
  pUVar9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar9 == (UnityEngine_Transform_o *)0x0) {
label_03b9a308:
    ppUStack_40 = (UnityEngine_RectTransform_array **)0x3b9a30d;
    il2cpp_runtime_helper_022b2c90();
    return;
  }
  ppUStack_40 = (UnityEngine_RectTransform_array **)0x3b9a14f;
  pGVar10 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)
            UnityEngine_Transform__get_parent(pUVar9,(MethodInfo *)0x0);
  ppUStack_40 = (UnityEngine_RectTransform_array **)0x3b9a167;
  name = System_String__Concat_3ae5ba0((__this->fields)._prefix,"-scroll",(MethodInfo *)0x0);
  ppUStack_40 = (UnityEngine_RectTransform_array **)0x3b9a17c;
  pUVar11 = (UnityEngine_UI_ScrollRect_o *)
            Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__ComponentInNamedChild_object_
                      ((UnityEngine_Transform_o *)pGVar10,name,MethodInfo_ScrollRect_ComponentInNamedChild_ScrollRect);
  (__this->fields)._scroll = pUVar11;
  ppUStack_40 = (UnityEngine_RectTransform_array **)0x3b9a18c;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._scroll,pUVar11);
  pSVar14 = (__this->fields)._sectionIds;
  if (pSVar14 == (System_String_array *)0x0) goto label_03b9a308;
  ppUStack_40 = (UnityEngine_RectTransform_array **)0x3b9a1ab;
  pUVar12 = (UnityEngine_RectTransform_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_RectTransform,(int)pSVar14->max_length);
  ppUVar1 = &(__this->fields)._sections;
  (__this->fields)._sections = pUVar12;
  ppUStack_40 = (UnityEngine_RectTransform_array **)0x3b9a1be;
  il2cpp_runtime_helper_022b4080(ppUVar1,pUVar12);
  pSVar14 = (__this->fields)._sectionIds;
  if (pSVar14 == (System_String_array *)0x0) goto label_03b9a308;
  ppUStack_40 = (UnityEngine_RectTransform_array **)0x3b9a1dd;
  pGVar13 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)
            il2cpp_runtime_helper_022b2a40(TypeInfo_GisketchBrushButtonFeedback,(int)pSVar14->max_length);
  pGVar18 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)&(__this->fields)._buttons;
  (__this->fields)._buttons = pGVar13;
  ppUStack_40 = (UnityEngine_RectTransform_array **)0x3b9a1ed;
  il2cpp_runtime_helper_022b4080();
  pSVar14 = (__this->fields)._sectionIds;
  if (pSVar14 == (System_String_array *)0x0) goto label_03b9a308;
  x = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)0x0;
  while( true ) {
    uVar20 = (uint)pSVar14->max_length;
    if ((long)(int)uVar20 <= (long)x) {
      return;
    }
    name_00 = pGVar13;
    if ((Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)(ulong)uVar20 <= x) break;
    unaff_R12 = *ppUVar1;
    unaff_RBX = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)pSVar14->m_Items[(long)x];
    if (g_data_057a9f1e == '\0') {
      ppUStack_40 = (UnityEngine_RectTransform_array **)0x3b9a235;
      il2cpp_runtime_helper_023445d0(&"-section-");
      g_data_057a9f1e = '\x01';
    }
    ppUStack_40 = (UnityEngine_RectTransform_array **)0x3b9a254;
    name_00 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)
              System_String__Concat_3af7150
                        ((__this->fields)._prefix,"-section-",(System_String_o *)unaff_RBX,(MethodInfo *)0x0)
    ;
    ppUStack_40 = (UnityEngine_RectTransform_array **)0x3b9a269;
    pGVar18 = pGVar10;
    pGVar13 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)
              Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__ComponentInNamedChild_object_
                        ((UnityEngine_Transform_o *)pGVar10,(System_String_o *)name_00,MethodInfo_RectTransform_ComponentInNamedChild_RectTransform);
    if (unaff_R12 == (UnityEngine_RectTransform_array *)0x0) goto label_03b9a308;
    if ((Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)(ulong)*(uint *)&unaff_R12->max_length
        <= x) break;
    pGVar18 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)(unaff_R12->m_Items + (long)x);
    unaff_R12->m_Items[(long)x] = (UnityEngine_RectTransform_o *)pGVar13;
    ppUStack_40 = (UnityEngine_RectTransform_array **)0x3b9a295;
    il2cpp_runtime_helper_022b4080();
    pSVar14 = (__this->fields)._sectionIds;
    if (pSVar14 == (System_String_array *)0x0) goto label_03b9a308;
    name_00 = pGVar13;
    if ((Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)(ulong)(uint)pSVar14->max_length <= x)
    break;
    unaff_RBX = (__this->fields)._buttons;
    ppUStack_40 = (UnityEngine_RectTransform_array **)0x3b9a2c0;
    name_00 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)
              System_String__Concat_3ae5ba0("brush-side-panel-button-",pSVar14->m_Items[(long)x],(MethodInfo *)0x0);
    ppUStack_40 = (UnityEngine_RectTransform_array **)0x3b9a2d5;
    pGVar18 = pGVar10;
    pGVar13 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)
              Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__ComponentInNamedChild_object_
                        ((UnityEngine_Transform_o *)pGVar10,(System_String_o *)name_00,MethodInfo_GisketchBrushButtonFeedback_ComponentInNamedChild_Gisket);
    if (unaff_RBX == (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)0x0) goto label_03b9a308;
    if ((Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)(ulong)(uint)unaff_RBX->max_length <= x
       ) break;
    pGVar18 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)(unaff_RBX->m_Items + (long)x);
    unaff_RBX->m_Items[(long)x] = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)pGVar13;
    ppUStack_40 = (UnityEngine_RectTransform_array **)0x3b9a2f7;
    il2cpp_runtime_helper_022b4080();
    x = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)
        ((long)&((Il2CppClass_1 *)&x->obj)->image + 1);
    pSVar14 = (__this->fields)._sectionIds;
    if (pSVar14 == (System_String_array *)0x0) goto label_03b9a308;
  }
  ppUStack_40 = (UnityEngine_RectTransform_array **)0x3b9a321;
  il2cpp_runtime_helper_022b2ca0();
  pUVar15 = ((Il2CppType *)pGVar18->m_Items)->data;
  pGStack_50 = unaff_RBX;
  pGStack_48 = pGVar10;
  ppUStack_40 = ppUVar1;
  if (pUVar15 == (UnityEngine_UI_Image_o *)0x0) goto label_03b9a385;
  pUVar12 = (UnityEngine_RectTransform_array *)0x0;
  pGVar13 = name_00;
  pGVar10 = pGVar18;
  while( true ) {
    uVar20 = *(uint *)&(pUVar15->fields).m_CancellationTokenSource;
    method_00 = (UnityEngine_RectTransform_array *)(ulong)uVar20;
    if ((long)(int)uVar20 <= (long)pUVar12) {
      return;
    }
    if (method_00 <= pUVar12) break;
    pGVar10 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)
              (&(pUVar15->fields).m_Material)[(long)pUVar12];
    pGStack_58 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)0x3b9a374;
    pGVar13 = name_00;
    bVar7 = System_String__Equals_3af50f0
                      ((System_String_o *)pGVar10,(System_String_o *)name_00,5,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      return;
    }
    pUVar12 = (UnityEngine_RectTransform_array *)((long)&(pUVar12->obj).klass + 1);
    pUVar15 = ((Il2CppType *)pGVar18->m_Items)->data;
    if (pUVar15 == (UnityEngine_UI_Image_o *)0x0) {
label_03b9a385:
      pGStack_58 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)0x3b9a38a;
      il2cpp_runtime_helper_022b2c90();
      return;
    }
  }
  pGStack_58 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)0x3b9a39c;
  auVar23 = il2cpp_runtime_helper_022b2ca0();
  uStack_88 = auVar23._0_8_;
  pUVar17 = (UnityEngine_RectTransform_array *)(auVar23._8_8_ & 0xffffffff);
  method_01 = pGVar13;
  __this_02 = pGVar10;
  pUStack_80 = pUVar12;
  pUStack_78 = unaff_R12;
  pGStack_70 = __this;
  pGStack_68 = name_00;
  pGStack_60 = pGVar18;
  pGStack_58 = x;
  if (g_data_057a9f1a == '\0') {
    __this_02 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)&TypeInfo_Object;
    pGStack_90 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)0x3b9a3c8;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9f1a = '\x01';
  }
  uVar20 = (uint)pGVar13;
  if ((int)uVar20 < 0) {
    return;
  }
  pUVar15 = ((Il2CppType *)pGVar10->m_Items)->data;
  pGVar18 = __this_02;
  if (pUVar15 == (UnityEngine_UI_Image_o *)0x0) {
label_03b9a5ca:
    pGStack_90 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)0x3b9a5cf;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    iVar8 = (int)(pUVar15->fields).m_CancellationTokenSource;
    if (iVar8 <= (int)uVar20) {
      return;
    }
    uStack_88 = CONCAT44(auVar23._8_4_,(undefined4)uStack_88);
    *(uint *)((long)((Il2CppType *)pGVar10->m_Items + 3) + 8) = uVar20;
    if (0 < iVar8) {
      unaff_R12 = (UnityEngine_RectTransform_array *)((ulong)pGVar13 & 0xffffffff);
      pUVar17 = (UnityEngine_RectTransform_array *)0x0;
      name_00 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)&TypeInfo_Object;
      do {
        UVar3 = *(UnityEngine_Vector2_Fields *)((Il2CppType *)pGVar10->m_Items + 2);
        if ((UVar3 != (UnityEngine_Vector2_Fields)0x0) &&
           (method_00 = (UnityEngine_RectTransform_array *)(ulong)*(uint *)((long)UVar3 + 0x18),
           (long)pUVar17 < (long)(int)*(uint *)((long)UVar3 + 0x18))) {
          pGVar18 = __this_02;
          if (method_00 <= pUVar17) goto label_03b9a5cf;
          x = *(Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array **)
               ((long)UVar3 + 0x20 + (long)pUVar17 * 8);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            pGStack_90 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)0x3b9a44b;
            il2cpp_runtime_helper_02337ed0();
          }
          method_01 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)0x0;
          pGStack_90 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)0x3b9a457;
          __this_02 = x;
          bVar7 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (((char)bVar7 != '\0') && (*(char *)&((Il2CppType *)pGVar10->m_Items)[1].data != '\0')) {
            UVar3 = *(UnityEngine_Vector2_Fields *)((Il2CppType *)pGVar10->m_Items + 2);
            pGVar18 = __this_02;
            if (UVar3 == (UnityEngine_Vector2_Fields)0x0) goto label_03b9a5ca;
            method_00 = (UnityEngine_RectTransform_array *)(ulong)*(uint *)((long)UVar3 + 0x18);
            if (method_00 <= pUVar17) goto label_03b9a5cf;
            pGVar18 = *(Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array **)
                       ((long)UVar3 + 0x20 + (long)pUVar17 * 8);
            if (pGVar18 == (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)0x0)
            goto label_03b9a5ca;
            method_01 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)0x0;
            pGStack_90 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)0x3b9a490;
            __this_02 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)
                        UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pGVar18,(MethodInfo *)0x0);
            if (__this_02 == (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)0x0)
            goto label_03b9a5ca;
            method_01 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)
                        (ulong)(unaff_R12 == pUVar17);
            pGStack_90 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)0x3b9a4ac;
            UnityEngine_GameObject__SetActive
                      ((UnityEngine_GameObject_o *)__this_02,(uint)(unaff_R12 == pUVar17),(MethodInfo *)0x0);
          }
        }
        lVar4 = *(long *)&((UnityEngine_Color_o *)
                          ((UnityEngine_Vector2_o *)((Il2CppType *)pGVar10->m_Items + 2) + 1))->fields;
        if ((lVar4 != 0) &&
           (method_00 = (UnityEngine_RectTransform_array *)(ulong)*(uint *)(lVar4 + 0x18),
           (long)pUVar17 < (long)(int)*(uint *)(lVar4 + 0x18))) {
          pGVar18 = __this_02;
          if (method_00 <= pUVar17) goto label_03b9a5cf;
          x = *(Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array **)
               (lVar4 + 0x20 + (long)pUVar17 * 8);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            pGStack_90 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)0x3b9a4e3;
            il2cpp_runtime_helper_02337ed0();
          }
          method_01 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)0x0;
          pGStack_90 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)0x3b9a4ef;
          __this_02 = x;
          bVar7 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar7 != '\0') {
            lVar4 = *(long *)&((UnityEngine_Color_o *)
                              ((UnityEngine_Vector2_o *)((Il2CppType *)pGVar10->m_Items + 2) + 1))->fields;
            pGVar18 = __this_02;
            if (lVar4 == 0) goto label_03b9a5ca;
            method_00 = (UnityEngine_RectTransform_array *)(ulong)*(uint *)(lVar4 + 0x18);
            if (method_00 <= pUVar17) goto label_03b9a5cf;
            __this_02 = *(Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array **)
                         (lVar4 + 0x20 + (long)pUVar17 * 8);
            pGVar18 = __this_02;
            if (__this_02 == (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)0x0)
            goto label_03b9a5ca;
            *(bool *)((long)((Il2CppType *)__this_02->m_Items + 10) + 10) = unaff_R12 == pUVar17;
            pGStack_90 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)0x3b9a529;
            Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__Refresh
                      ((Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)__this_02,
                       (MethodInfo *)method_01);
          }
        }
        pUVar15 = ((Il2CppType *)pGVar10->m_Items)->data;
        pGVar18 = __this_02;
        if (pUVar15 == (UnityEngine_UI_Image_o *)0x0) goto label_03b9a5ca;
        pUVar17 = (UnityEngine_RectTransform_array *)((long)&(pUVar17->obj).klass + 1);
      } while ((long)pUVar17 < (long)*(int *)&(pUVar15->fields).m_CancellationTokenSource);
    }
    if ((uStack_88._4_1_ == '\0') ||
       (UVar3 = *(UnityEngine_Vector2_Fields *)((Il2CppType *)pGVar10->m_Items + 2),
       UVar3 == (UnityEngine_Vector2_Fields)0x0)) {
      return;
    }
    if (uVar20 < *(uint *)((long)UVar3 + 0x18)) {
      pUVar17 = (UnityEngine_RectTransform_array *)(long)(int)uVar20;
      name_00 = *(Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array **)
                 ((long)UVar3 + 0x20 + (long)pUVar17 * 8);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        pGStack_90 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)0x3b9a584;
        il2cpp_runtime_helper_02337ed0();
      }
      method_01 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)0x0;
      pGStack_90 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)0x3b9a590;
      pGVar18 = name_00;
      bVar7 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)name_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
        return;
      }
      UVar3 = *(UnityEngine_Vector2_Fields *)((Il2CppType *)pGVar10->m_Items + 2);
      if (UVar3 == (UnityEngine_Vector2_Fields)0x0) goto label_03b9a5ca;
      if (uVar20 < *(uint *)((long)UVar3 + 0x18)) {
        Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__AnimateSection
                  (*(UnityEngine_RectTransform_o **)((long)UVar3 + 0x20 + (long)pUVar17 * 8),
                   (MethodInfo *)method_01);
        return;
      }
    }
  }
label_03b9a5cf:
  pGStack_90 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)0x3b9a5d4;
  il2cpp_runtime_helper_022b2ca0();
  pUStack_b8 = pUVar17;
  pUStack_b0 = unaff_R12;
  pGStack_a8 = pGVar10;
  pGStack_a0 = name_00;
  uStack_98 = (ulong)pGVar13 & 0xffffffff;
  pGStack_90 = x;
  if (g_data_057a9f1c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOGetter_float);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOSetter_float);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOTween);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotionDriver);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ScrollTo_b__22_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ScrollTo_b__22_1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TweenerCore_3_System_Single_System_Single_DG_Tweening_Pl);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TweenerCore_3_System_Single_System_Single_DG_Tweening_Pl);
    g_data_057a9f1c = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar7 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)method_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    pUVar19 = *(UnityEngine_RectTransform_o **)&((Il2CppType *)pGVar18->m_Items)[1].bits;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar7 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar19,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      pUVar5 = *(UnityEngine_RectTransform_o **)&((Il2CppType *)pGVar18->m_Items)[1].bits;
      if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
        pUVar19 = (UnityEngine_RectTransform_o *)pUVar5[2].fields.m_CachedPtr;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar7 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)pUVar19,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar7 != '\0') {
          return;
        }
        pUVar5 = *(UnityEngine_RectTransform_o **)&((Il2CppType *)pGVar18->m_Items)[1].bits;
        if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
          pUVar6 = pUVar5[1].monitor;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar7 = UnityEngine_Object__op_Equality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar7 != '\0') {
            return;
          }
          pUVar19 = (UnityEngine_RectTransform_o *)0x0;
          UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
          pUVar5 = *(UnityEngine_RectTransform_o **)&((Il2CppType *)pGVar18->m_Items)[1].bits;
          if ((pUVar5 != (UnityEngine_RectTransform_o *)0x0) &&
             (pUVar19 = pUVar5[1].monitor, pUVar19 != (UnityEngine_RectTransform_o *)0x0)) {
            UVar24 = UnityEngine_RectTransform__get_rect(pUVar19,(MethodInfo *)0x0);
            pUVar5 = *(UnityEngine_RectTransform_o **)&((Il2CppType *)pGVar18->m_Items)[1].bits;
            if ((pUVar5 != (UnityEngine_RectTransform_o *)0x0) &&
               (pUVar19 = (UnityEngine_RectTransform_o *)pUVar5[2].fields.m_CachedPtr,
               pUVar19 != (UnityEngine_RectTransform_o *)0x0)) {
              UVar25 = UnityEngine_RectTransform__get_rect(pUVar19,(MethodInfo *)0x0);
              fVar21 = UVar24.fields.m_Height - UVar25.fields.m_Height;
              fVar22 = 0.0;
              if (0.0 <= fVar21) {
                fVar22 = fVar21;
              }
              if (fVar22 <= 0.01) {
                return;
              }
              pUVar5 = *(UnityEngine_RectTransform_o **)&((Il2CppType *)pGVar18->m_Items)[1].bits;
              if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
                pUVar9 = (UnityEngine_Transform_o *)pUVar5[2].fields.m_CachedPtr;
                if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pUVar19 = (UnityEngine_RectTransform_o *)auStack_d0;
                method_00 = (UnityEngine_RectTransform_array *)0x0;
                UnityEngine_RectTransformUtility__CalculateRelativeRectTransformBounds
                          ((UnityEngine_Bounds_o *)pUVar19,pUVar9,(UnityEngine_Transform_o *)method_01,
                           (MethodInfo *)0x0);
                pUVar5 = *(UnityEngine_RectTransform_o **)&((Il2CppType *)pGVar18->m_Items)[1].bits;
                if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
                  pUVar5 = (UnityEngine_RectTransform_o *)pUVar5[2].fields.m_CachedPtr;
                  pUVar19 = (UnityEngine_RectTransform_o *)0x0;
                  if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
                    UVar24 = UnityEngine_RectTransform__get_rect(pUVar5,(MethodInfo *)0x0);
                    pUVar11 = *(UnityEngine_UI_ScrollRect_o **)&((Il2CppType *)pGVar18->m_Items)[1].bits;
                    pUVar19 = (UnityEngine_RectTransform_o *)0x0;
                    if (pUVar11 != (UnityEngine_UI_ScrollRect_o *)0x0) {
                      fVar21 = UnityEngine_UI_ScrollRect__get_verticalNormalizedPosition
                                         (pUVar11,(MethodInfo *)0x0);
                      pUVar5 = *(UnityEngine_RectTransform_o **)&((Il2CppType *)pGVar18->m_Items)[1].bits;
                      pUVar19 = (UnityEngine_RectTransform_o *)0x0;
                      if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
                        fStack_10c = UVar24.fields.m_Height;
                        fStack_fc = UVar24.fields.m_YMin;
                        fVar21 = fVar21 - ((fStack_fc + fStack_10c) - (fStack_c0 + (float)auStack_d0._4_4_)) /
                                          fVar22;
                        fVar22 = 1.0;
                        if (fVar21 <= 1.0) {
                          fVar22 = fVar21;
                        }
                        fVar22 = (float)(-(uint)(0.0 <= fVar21) & (uint)fVar22);
                        (*(code *)pUVar5->klass[2].static_fields)();
                        if (((Il2CppType *)pGVar18->m_Items)[3].data != (Il2CppClass *)0x0) {
                          DG_Tweening_TweenExtensions__Kill
                                    ((DG_Tweening_Tween_o *)((Il2CppType *)pGVar18->m_Items)[3].data,0,
                                     (MethodInfo *)0x0);
                        }
                        if (extraout_DL == '\0') {
                          if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
                            il2cpp_runtime_helper_02337ed0();
                          }
                          bVar7 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
                          if ((char)bVar7 != '\0') {
                            ppIVar2 = &((Il2CppType *)pGVar18->m_Items)[3].data;
                            getter = (DG_Tweening_Core_DOGetter_float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_DOGetter_float);
                            DG_Tweening_Core_DOGetter_float____ctor();
                            setter = (DG_Tweening_Core_DOSetter_float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_DOSetter_float);
                            DG_Tweening_Core_DOSetter_float____ctor();
                            if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
                              il2cpp_runtime_helper_02337ed0();
                            }
                            t = DG_Tweening_DOTween__To(getter,setter,fVar22,0.22,(MethodInfo *)0x0);
                            t_00 = DG_Tweening_TweenSettingsExtensions__SetEase_object_
                                             ((Il2CppObject *)t,9,MethodInfo_TweenerCore_3_System_Single_System_Single_DG_Tweening_Pl);
                            pIVar16 = (Il2CppClass *)
                                      DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                                                (t_00,1,MethodInfo_TweenerCore_3_System_Single_System_Single_DG_Tweening_Pl);
                            *ppIVar2 = pIVar16;
                            il2cpp_runtime_helper_022b4080(ppIVar2);
                            pIVar16 = *ppIVar2;
                            if (*(int *)(TypeInfo_GisketchMotionDriver + 0xe4) == 0) {
                              il2cpp_runtime_helper_02337ed0();
                            }
                            Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Track
                                      ((DG_Tweening_Tween_o *)pIVar16,0,(MethodInfo *)0x0);
                            return;
                          }
                        }
                        pUVar11 = *(UnityEngine_UI_ScrollRect_o **)&((Il2CppType *)pGVar18->m_Items)[1].bits;
                        pUVar19 = (UnityEngine_RectTransform_o *)0x0;
                        if (pUVar11 != (UnityEngine_UI_ScrollRect_o *)0x0) {
                          UnityEngine_UI_ScrollRect__set_verticalNormalizedPosition
                                    (pUVar11,fVar22,(MethodInfo *)0x0);
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
      if (g_data_057a9f1b == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_FlexLayout_GetComponent_FlexLayout);
        il2cpp_runtime_helper_023445d0(&TypeInfo_LayoutRebuilder);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057a9f1b = '\x01';
      }
      __this_03 = pUVar19[2].monitor;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      method_02 = (MethodInfo *)0x0;
      bVar7 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)__this_03,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') {
        return;
      }
      if (pUVar19[2].monitor != (void *)0x0) {
        pUVar6 = *(UnityEngine_Object_o **)((long)pUVar19[2].monitor + 0x20);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        method_02 = (MethodInfo *)0x0;
        bVar7 = UnityEngine_Object__op_Equality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar7 != '\0') {
          return;
        }
        __this_03 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
        UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
        if (pUVar19[2].monitor != (void *)0x0) {
          __this_00 = *(UnityEngine_Component_o **)((long)pUVar19[2].monitor + 0x20);
          __this_03 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
          if (__this_00 != (UnityEngine_Component_o *)0x0) {
            __this_01 = (Gilzoide_FlexUi_FlexLayout_o *)
                        UnityEngine_Component__GetComponent_object_(__this_00,MethodInfo_FlexLayout_GetComponent_FlexLayout);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            method_02 = (MethodInfo *)0x0;
            __this_03 = __this_01;
            bVar7 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                              );
            if ((char)bVar7 != '\0') {
              if (__this_01 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto label_03b9ab90;
              method_02 = (MethodInfo *)0x0;
              Gilzoide_FlexUi_FlexLayout__RefreshRootLayoutImmediate(__this_01,(MethodInfo *)0x0);
              __this_03 = __this_01;
            }
            if (pUVar19[2].monitor != (void *)0x0) {
              pUVar19 = *(UnityEngine_RectTransform_o **)((long)pUVar19[2].monitor + 0x20);
              if (*(int *)(TypeInfo_LayoutRebuilder + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate(pUVar19,(MethodInfo *)0x0);
              UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
              return;
            }
          }
        }
      }
label_03b9ab90:
      il2cpp_runtime_helper_022b2c90();
      Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Resolve
                ((Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)__this_03,method_02);
      Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__SetActive
                ((Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)__this_03,0,0,(MethodInfo *)method_00
                );
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$IsResolved
// il2cpp: bool Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__IsResolved (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o* __this, const MethodInfo* method);
// 0x3b9ae90

bool_conflict
Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__IsResolved
          (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_array *pUVar1;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *pGVar2;
  bool_conflict bVar3;
  System_String_array *pSVar4;
  System_String_o *pSVar5;
  ulong uVar6;
  UnityEngine_UI_ScrollRect_o *x;
  
  if (g_data_057a9f19 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9f19 = '\x01';
  }
  x = (__this->fields)._scroll;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar5 = (System_String_o *)0x0;
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((((char)bVar3 == '\0') && ((__this->fields)._sections != (UnityEngine_RectTransform_array *)0x0)) &&
     ((__this->fields)._buttons != (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)0x0)) {
    pSVar4 = (__this->fields)._sectionIds;
    if (pSVar4 != (System_String_array *)0x0) {
      uVar6 = 0;
      do {
        if ((long)(int)pSVar4->max_length <= (long)uVar6) {
          return 1;
        }
        pUVar1 = (__this->fields)._sections;
        if (pUVar1 == (UnityEngine_RectTransform_array *)0x0) break;
        if ((uint)pUVar1->max_length <= uVar6) {
label_03b9afd6:
          il2cpp_runtime_helper_022b2ca0();
          if (g_data_057a9f1e == '\0') {
            il2cpp_runtime_helper_023445d0(&"-section-");
            g_data_057a9f1e = '\x01';
          }
          pSVar5 = System_String__Concat_3af7150
                             (*(System_String_o **)&(x->fields).m_Horizontal,"-section-",pSVar5,
                              (MethodInfo *)0x0);
          return (bool_conflict)pSVar5;
        }
        x = (UnityEngine_UI_ScrollRect_o *)pUVar1->m_Items[uVar6];
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar5 = (System_String_o *)0x0;
        bVar3 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar3 != '\0') {
          return 0;
        }
        pGVar2 = (__this->fields)._buttons;
        if (pGVar2 == (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)0x0) break;
        if ((uint)pGVar2->max_length <= uVar6) goto label_03b9afd6;
        x = (UnityEngine_UI_ScrollRect_o *)pGVar2->m_Items[uVar6];
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar5 = (System_String_o *)0x0;
        bVar3 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar3 != '\0') {
          return 0;
        }
        uVar6 = uVar6 + 1;
        pSVar4 = (__this->fields)._sectionIds;
      } while (pSVar4 != (System_String_array *)0x0);
    }
    il2cpp_runtime_helper_022b2c90();
  }
  return 0;
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$SetActive
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__SetActive (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o* __this, int32_t index, bool animate, const MethodInfo* method);
// 0x3b9a3a0

void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__SetActive
               (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *__this,int32_t index,
               bool_conflict animate,MethodInfo *method)

{
  float *pfVar1;
  uint uVar2;
  System_String_array *pSVar3;
  UnityEngine_RectTransform_array *pUVar4;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *pGVar5;
  UnityEngine_RectTransform_o *pUVar6;
  UnityEngine_Object_o *pUVar7;
  UnityEngine_Transform_o *root;
  UnityEngine_UI_ScrollRect_o *pUVar8;
  DG_Tweening_Tween_o *pDVar9;
  UnityEngine_Component_o *__this_00;
  int iVar10;
  bool_conflict bVar11;
  undefined8 in_RAX;
  DG_Tweening_Core_DOGetter_float__o *getter;
  DG_Tweening_Core_DOSetter_float__o *setter;
  DG_Tweening_Core_TweenerCore_float__float__FloatOptions__o *t;
  Il2CppObject *pIVar12;
  Gilzoide_FlexUi_FlexLayout_o *__this_01;
  char extraout_DL;
  MethodInfo *pMVar13;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *unaff_RBP;
  undefined4 in_register_00000034;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this_02;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this_03;
  UnityEngine_RectTransform_o *pUVar14;
  Gilzoide_FlexUi_FlexLayout_o *__this_04;
  MethodInfo *unaff_R12;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *unaff_R14;
  float fVar15;
  float fVar16;
  UnityEngine_Rect_o UVar17;
  UnityEngine_Rect_o UVar18;
  float fStack_bc;
  float fStack_ac;
  undefined1 local_80 [16];
  float fStack_70;
  MethodInfo *pMStack_68;
  MethodInfo *pMStack_60;
  Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *pGStack_58;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *pGStack_50;
  ulong uStack_48;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *pGStack_40;
  undefined8 uStack_38;
  
  method_00 = (MethodInfo *)CONCAT44(in_register_00000034,index);
  pMVar13 = (MethodInfo *)(ulong)(uint)animate;
  __this_02 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)__this;
  uStack_38 = in_RAX;
  if (g_data_057a9f1a == '\0') {
    __this_02 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)&TypeInfo_Object;
    pGStack_40 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)0x3b9a3c8;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9f1a = '\x01';
  }
  if (index < 0) {
    return;
  }
  pSVar3 = (__this->fields)._sectionIds;
  __this_03 = __this_02;
  if (pSVar3 == (System_String_array *)0x0) {
label_03b9a5ca:
    pGStack_40 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)0x3b9a5cf;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    iVar10 = (int)pSVar3->max_length;
    if (iVar10 <= index) {
      return;
    }
    uStack_38 = CONCAT44(animate,(undefined4)uStack_38);
    (__this->fields)._activeIndex = index;
    if (0 < iVar10) {
      unaff_R12 = (MethodInfo *)(ulong)(uint)index;
      pMVar13 = (MethodInfo *)0x0;
      unaff_R14 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)&TypeInfo_Object;
      do {
        pUVar4 = (__this->fields)._sections;
        if ((pUVar4 != (UnityEngine_RectTransform_array *)0x0) &&
           (uVar2 = (uint)pUVar4->max_length, method = (MethodInfo *)(ulong)uVar2,
           (long)pMVar13 < (long)(int)uVar2)) {
          __this_03 = __this_02;
          if (method <= pMVar13) goto label_03b9a5cf;
          unaff_RBP = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)
                      pUVar4->m_Items[(long)pMVar13];
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            pGStack_40 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)0x3b9a44b;
            il2cpp_runtime_helper_02337ed0();
          }
          method_00 = (MethodInfo *)0x0;
          pGStack_40 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)0x3b9a457;
          __this_02 = unaff_RBP;
          bVar11 = UnityEngine_Object__op_Inequality
                             ((UnityEngine_Object_o *)unaff_RBP,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
          ;
          if (((char)bVar11 != '\0') && ((char)(__this->fields)._separate != '\0')) {
            pUVar4 = (__this->fields)._sections;
            __this_03 = __this_02;
            if (pUVar4 == (UnityEngine_RectTransform_array *)0x0) goto label_03b9a5ca;
            method = (MethodInfo *)(ulong)(uint)pUVar4->max_length;
            if (method <= pMVar13) goto label_03b9a5cf;
            __this_03 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)
                        pUVar4->m_Items[(long)pMVar13];
            if (__this_03 == (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)0x0)
            goto label_03b9a5ca;
            method_00 = (MethodInfo *)0x0;
            pGStack_40 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)0x3b9a490;
            __this_02 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)
                        UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
            if (__this_02 == (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)0x0)
            goto label_03b9a5ca;
            method_00 = (MethodInfo *)(ulong)(unaff_R12 == pMVar13);
            pGStack_40 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)0x3b9a4ac;
            UnityEngine_GameObject__SetActive
                      ((UnityEngine_GameObject_o *)__this_02,(uint)(unaff_R12 == pMVar13),(MethodInfo *)0x0);
          }
        }
        pGVar5 = (__this->fields)._buttons;
        if ((pGVar5 != (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)0x0) &&
           (uVar2 = (uint)pGVar5->max_length, method = (MethodInfo *)(ulong)uVar2,
           (long)pMVar13 < (long)(int)uVar2)) {
          __this_03 = __this_02;
          if (method <= pMVar13) goto label_03b9a5cf;
          unaff_RBP = pGVar5->m_Items[(long)pMVar13];
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            pGStack_40 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)0x3b9a4e3;
            il2cpp_runtime_helper_02337ed0();
          }
          method_00 = (MethodInfo *)0x0;
          pGStack_40 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)0x3b9a4ef;
          __this_02 = unaff_RBP;
          bVar11 = UnityEngine_Object__op_Inequality
                             ((UnityEngine_Object_o *)unaff_RBP,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
          ;
          if ((char)bVar11 != '\0') {
            pGVar5 = (__this->fields)._buttons;
            __this_03 = __this_02;
            if (pGVar5 == (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)0x0)
            goto label_03b9a5ca;
            method = (MethodInfo *)(ulong)(uint)pGVar5->max_length;
            if (method <= pMVar13) goto label_03b9a5cf;
            __this_02 = pGVar5->m_Items[(long)pMVar13];
            __this_03 = __this_02;
            if (__this_02 == (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)0x0)
            goto label_03b9a5ca;
            *(bool *)((long)&(__this_02->fields)._hovered + 2) = unaff_R12 == pMVar13;
            pGStack_40 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)0x3b9a529;
            Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__Refresh(__this_02,method_00);
          }
        }
        pSVar3 = (__this->fields)._sectionIds;
        __this_03 = __this_02;
        if (pSVar3 == (System_String_array *)0x0) goto label_03b9a5ca;
        pMVar13 = (MethodInfo *)((long)&pMVar13->methodPointer + 1);
      } while ((long)pMVar13 < (long)(int)pSVar3->max_length);
    }
    if (uStack_38._4_1_ == '\0') {
      return;
    }
    pUVar4 = (__this->fields)._sections;
    if (pUVar4 == (UnityEngine_RectTransform_array *)0x0) {
      return;
    }
    if ((uint)index < (uint)pUVar4->max_length) {
      pMVar13 = (MethodInfo *)(long)index;
      unaff_R14 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)pUVar4->m_Items[(long)pMVar13];
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        pGStack_40 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)0x3b9a584;
        il2cpp_runtime_helper_02337ed0();
      }
      method_00 = (MethodInfo *)0x0;
      pGStack_40 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)0x3b9a590;
      __this_03 = unaff_R14;
      bVar11 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)unaff_R14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar11 == '\0') {
        return;
      }
      pUVar4 = (__this->fields)._sections;
      if (pUVar4 == (UnityEngine_RectTransform_array *)0x0) goto label_03b9a5ca;
      if ((uint)index < (uint)pUVar4->max_length) {
        Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__AnimateSection
                  (pUVar4->m_Items[(long)pMVar13],method_00);
        return;
      }
    }
  }
label_03b9a5cf:
  pGStack_40 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)0x3b9a5d4;
  il2cpp_runtime_helper_022b2ca0();
  pMStack_68 = pMVar13;
  pMStack_60 = unaff_R12;
  pGStack_58 = __this;
  pGStack_50 = unaff_R14;
  uStack_48 = (ulong)(uint)index;
  pGStack_40 = unaff_RBP;
  if (g_data_057a9f1c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOGetter_float);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOSetter_float);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOTween);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotionDriver);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ScrollTo_b__22_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ScrollTo_b__22_1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TweenerCore_3_System_Single_System_Single_DG_Tweening_Pl);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TweenerCore_3_System_Single_System_Single_DG_Tweening_Pl);
    g_data_057a9f1c = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar11 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)method_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar11 == '\0') {
    pUVar14 = (__this_03->fields)._content;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar11 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)pUVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar11 == '\0') {
      pUVar6 = (__this_03->fields)._content;
      if (pUVar6 != (UnityEngine_RectTransform_o *)0x0) {
        pUVar14 = (UnityEngine_RectTransform_o *)pUVar6[2].fields.m_CachedPtr;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar11 = UnityEngine_Object__op_Equality
                           ((UnityEngine_Object_o *)pUVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar11 != '\0') {
          return;
        }
        pUVar6 = (__this_03->fields)._content;
        if (pUVar6 != (UnityEngine_RectTransform_o *)0x0) {
          pUVar7 = pUVar6[1].monitor;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar11 = UnityEngine_Object__op_Equality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar11 != '\0') {
            return;
          }
          pUVar14 = (UnityEngine_RectTransform_o *)0x0;
          UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
          pUVar6 = (__this_03->fields)._content;
          if ((pUVar6 != (UnityEngine_RectTransform_o *)0x0) &&
             (pUVar14 = pUVar6[1].monitor, pUVar14 != (UnityEngine_RectTransform_o *)0x0)) {
            UVar17 = UnityEngine_RectTransform__get_rect(pUVar14,(MethodInfo *)0x0);
            pUVar6 = (__this_03->fields)._content;
            if ((pUVar6 != (UnityEngine_RectTransform_o *)0x0) &&
               (pUVar14 = (UnityEngine_RectTransform_o *)pUVar6[2].fields.m_CachedPtr,
               pUVar14 != (UnityEngine_RectTransform_o *)0x0)) {
              UVar18 = UnityEngine_RectTransform__get_rect(pUVar14,(MethodInfo *)0x0);
              fVar15 = UVar17.fields.m_Height - UVar18.fields.m_Height;
              fVar16 = 0.0;
              if (0.0 <= fVar15) {
                fVar16 = fVar15;
              }
              if (fVar16 <= 0.01) {
                return;
              }
              pUVar6 = (__this_03->fields)._content;
              if (pUVar6 != (UnityEngine_RectTransform_o *)0x0) {
                root = (UnityEngine_Transform_o *)pUVar6[2].fields.m_CachedPtr;
                if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pUVar14 = (UnityEngine_RectTransform_o *)local_80;
                method = (MethodInfo *)0x0;
                UnityEngine_RectTransformUtility__CalculateRelativeRectTransformBounds
                          ((UnityEngine_Bounds_o *)pUVar14,root,(UnityEngine_Transform_o *)method_00,
                           (MethodInfo *)0x0);
                pUVar6 = (__this_03->fields)._content;
                if (pUVar6 != (UnityEngine_RectTransform_o *)0x0) {
                  pUVar6 = (UnityEngine_RectTransform_o *)pUVar6[2].fields.m_CachedPtr;
                  pUVar14 = (UnityEngine_RectTransform_o *)0x0;
                  if (pUVar6 != (UnityEngine_RectTransform_o *)0x0) {
                    UVar17 = UnityEngine_RectTransform__get_rect(pUVar6,(MethodInfo *)0x0);
                    pUVar8 = (UnityEngine_UI_ScrollRect_o *)(__this_03->fields)._content;
                    pUVar14 = (UnityEngine_RectTransform_o *)0x0;
                    if (pUVar8 != (UnityEngine_UI_ScrollRect_o *)0x0) {
                      fVar15 = UnityEngine_UI_ScrollRect__get_verticalNormalizedPosition
                                         (pUVar8,(MethodInfo *)0x0);
                      pUVar6 = (__this_03->fields)._content;
                      pUVar14 = (UnityEngine_RectTransform_o *)0x0;
                      if (pUVar6 != (UnityEngine_RectTransform_o *)0x0) {
                        fStack_bc = UVar17.fields.m_Height;
                        fStack_ac = UVar17.fields.m_YMin;
                        fVar15 = fVar15 - ((fStack_ac + fStack_bc) - (fStack_70 + (float)local_80._4_4_)) /
                                          fVar16;
                        fVar16 = 1.0;
                        if (fVar15 <= 1.0) {
                          fVar16 = fVar15;
                        }
                        fVar16 = (float)(-(uint)(0.0 <= fVar15) & (uint)fVar16);
                        (*(code *)pUVar6->klass[2].static_fields)();
                        pDVar9 = *(DG_Tweening_Tween_o **)&(__this_03->fields)._hiddenBrush.fields.b;
                        if (pDVar9 != (DG_Tweening_Tween_o *)0x0) {
                          DG_Tweening_TweenExtensions__Kill(pDVar9,0,(MethodInfo *)0x0);
                        }
                        if (extraout_DL == '\0') {
                          if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
                            il2cpp_runtime_helper_02337ed0();
                          }
                          bVar11 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
                          if ((char)bVar11 != '\0') {
                            pfVar1 = &(__this_03->fields)._hiddenBrush.fields.b;
                            getter = (DG_Tweening_Core_DOGetter_float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_DOGetter_float);
                            DG_Tweening_Core_DOGetter_float____ctor();
                            setter = (DG_Tweening_Core_DOSetter_float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_DOSetter_float);
                            DG_Tweening_Core_DOSetter_float____ctor();
                            if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
                              il2cpp_runtime_helper_02337ed0();
                            }
                            t = DG_Tweening_DOTween__To(getter,setter,fVar16,0.22,(MethodInfo *)0x0);
                            pIVar12 = DG_Tweening_TweenSettingsExtensions__SetEase_object_
                                                ((Il2CppObject *)t,9,MethodInfo_TweenerCore_3_System_Single_System_Single_DG_Tweening_Pl);
                            pIVar12 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                                                (pIVar12,1,MethodInfo_TweenerCore_3_System_Single_System_Single_DG_Tweening_Pl);
                            *(Il2CppObject **)pfVar1 = pIVar12;
                            il2cpp_runtime_helper_022b4080(pfVar1);
                            pDVar9 = *(DG_Tweening_Tween_o **)pfVar1;
                            if (*(int *)(TypeInfo_GisketchMotionDriver + 0xe4) == 0) {
                              il2cpp_runtime_helper_02337ed0();
                            }
                            Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Track(pDVar9,0,(MethodInfo *)0x0)
                            ;
                            return;
                          }
                        }
                        pUVar8 = (UnityEngine_UI_ScrollRect_o *)(__this_03->fields)._content;
                        pUVar14 = (UnityEngine_RectTransform_o *)0x0;
                        if (pUVar8 != (UnityEngine_UI_ScrollRect_o *)0x0) {
                          UnityEngine_UI_ScrollRect__set_verticalNormalizedPosition
                                    (pUVar8,fVar16,(MethodInfo *)0x0);
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
      if (g_data_057a9f1b == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_FlexLayout_GetComponent_FlexLayout);
        il2cpp_runtime_helper_023445d0(&TypeInfo_LayoutRebuilder);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057a9f1b = '\x01';
      }
      __this_04 = pUVar14[2].monitor;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar13 = (MethodInfo *)0x0;
      bVar11 = UnityEngine_Object__op_Equality
                         ((UnityEngine_Object_o *)__this_04,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar11 != '\0') {
        return;
      }
      if (pUVar14[2].monitor != (void *)0x0) {
        pUVar7 = *(UnityEngine_Object_o **)((long)pUVar14[2].monitor + 0x20);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pMVar13 = (MethodInfo *)0x0;
        bVar11 = UnityEngine_Object__op_Equality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar11 != '\0') {
          return;
        }
        __this_04 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
        UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
        if (pUVar14[2].monitor != (void *)0x0) {
          __this_00 = *(UnityEngine_Component_o **)((long)pUVar14[2].monitor + 0x20);
          __this_04 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
          if (__this_00 != (UnityEngine_Component_o *)0x0) {
            __this_01 = (Gilzoide_FlexUi_FlexLayout_o *)
                        UnityEngine_Component__GetComponent_object_(__this_00,MethodInfo_FlexLayout_GetComponent_FlexLayout);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pMVar13 = (MethodInfo *)0x0;
            __this_04 = __this_01;
            bVar11 = UnityEngine_Object__op_Inequality
                               ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,
                                (MethodInfo *)0x0);
            if ((char)bVar11 != '\0') {
              if (__this_01 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto label_03b9ab90;
              pMVar13 = (MethodInfo *)0x0;
              Gilzoide_FlexUi_FlexLayout__RefreshRootLayoutImmediate(__this_01,(MethodInfo *)0x0);
              __this_04 = __this_01;
            }
            if (pUVar14[2].monitor != (void *)0x0) {
              pUVar14 = *(UnityEngine_RectTransform_o **)((long)pUVar14[2].monitor + 0x20);
              if (*(int *)(TypeInfo_LayoutRebuilder + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate(pUVar14,(MethodInfo *)0x0);
              UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
              return;
            }
          }
        }
      }
label_03b9ab90:
      il2cpp_runtime_helper_022b2c90();
      Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Resolve
                ((Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)__this_04,pMVar13);
      Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__SetActive
                ((Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)__this_04,0,0,method);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$RefreshSeparateLayout
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__RefreshSeparateLayout (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o* __this, const MethodInfo* method);
// 0x3b9aa40

void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__RefreshSeparateLayout
               (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  bool_conflict bVar2;
  UnityEngine_UI_ScrollRect_o *pUVar3;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  UnityEngine_UI_ScrollRect_o *__this_00;
  
  if (g_data_057a9f1b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_FlexLayout_GetComponent_FlexLayout);
    il2cpp_runtime_helper_023445d0(&TypeInfo_LayoutRebuilder);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9f1b = '\x01';
  }
  __this_00 = (__this->fields)._scroll;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_00 = (MethodInfo *)0x0;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return;
  }
  pUVar3 = (__this->fields)._scroll;
  if (pUVar3 != (UnityEngine_UI_ScrollRect_o *)0x0) {
    pUVar1 = (pUVar3->fields).m_Content;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method_00 = (MethodInfo *)0x0;
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      return;
    }
    __this_00 = (UnityEngine_UI_ScrollRect_o *)0x0;
    UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
    pUVar3 = (__this->fields)._scroll;
    if (pUVar3 != (UnityEngine_UI_ScrollRect_o *)0x0) {
      pUVar1 = (pUVar3->fields).m_Content;
      __this_00 = (UnityEngine_UI_ScrollRect_o *)0x0;
      if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
        pUVar3 = (UnityEngine_UI_ScrollRect_o *)
                 UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar1,MethodInfo_FlexLayout_GetComponent_FlexLayout);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        method_00 = (MethodInfo *)0x0;
        __this_00 = pUVar3;
        bVar2 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (pUVar3 == (UnityEngine_UI_ScrollRect_o *)0x0) goto label_03b9ab90;
          method_00 = (MethodInfo *)0x0;
          Gilzoide_FlexUi_FlexLayout__RefreshRootLayoutImmediate
                    ((Gilzoide_FlexUi_FlexLayout_o *)pUVar3,(MethodInfo *)0x0);
          __this_00 = pUVar3;
        }
        pUVar3 = (__this->fields)._scroll;
        if (pUVar3 != (UnityEngine_UI_ScrollRect_o *)0x0) {
          pUVar1 = (pUVar3->fields).m_Content;
          if (*(int *)(TypeInfo_LayoutRebuilder + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate(pUVar1,(MethodInfo *)0x0);
          UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_03b9ab90:
  il2cpp_runtime_helper_022b2c90();
  Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Resolve
            ((Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)__this_00,method_00);
  Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__SetActive
            ((Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)__this_00,0,0,in_RCX);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$ScrollTo
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__ScrollTo (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o* __this, UnityEngine_RectTransform_o* target, bool instant, const MethodInfo* method);
// 0x3b9a5e0

void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__ScrollTo
               (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *__this,
               UnityEngine_RectTransform_o *target,bool_conflict instant,MethodInfo *method)

{
  DG_Tweening_Tween_o **ppDVar1;
  UnityEngine_UI_ScrollRect_o *pUVar2;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_Transform_o *root;
  long lVar4;
  UnityEngine_Object_o *x;
  UnityEngine_Component_o *__this_00;
  bool_conflict bVar5;
  DG_Tweening_Core_DOGetter_float__o *getter;
  DG_Tweening_Core_DOSetter_float__o *setter;
  DG_Tweening_Core_TweenerCore_float__float__FloatOptions__o *t;
  Il2CppObject *t_00;
  DG_Tweening_Tween_o *pDVar6;
  Gilzoide_FlexUi_FlexLayout_o *__this_01;
  MethodInfo *method_00;
  UnityEngine_UI_ScrollRect_o *__this_02;
  Gilzoide_FlexUi_FlexLayout_o *__this_03;
  float fVar7;
  float fVar8;
  UnityEngine_Rect_o UVar9;
  UnityEngine_Rect_o UVar10;
  float fStack_84;
  float fStack_74;
  undefined1 auStack_48 [16];
  float fStack_38;
  
  if (g_data_057a9f1c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOGetter_float);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOSetter_float);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOTween);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotionDriver);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ScrollTo_b__22_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ScrollTo_b__22_1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TweenerCore_3_System_Single_System_Single_DG_Tweening_Pl);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TweenerCore_3_System_Single_System_Single_DG_Tweening_Pl);
    g_data_057a9f1c = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)target,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    __this_02 = (__this->fields)._scroll;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      pUVar2 = (__this->fields)._scroll;
      if (pUVar2 != (UnityEngine_UI_ScrollRect_o *)0x0) {
        __this_02 = *(UnityEngine_UI_ScrollRect_o **)&(pUVar2->fields).m_ScrollSensitivity;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar5 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar5 != '\0') {
          return;
        }
        pUVar2 = (__this->fields)._scroll;
        if (pUVar2 != (UnityEngine_UI_ScrollRect_o *)0x0) {
          pUVar3 = (pUVar2->fields).m_Content;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar5 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            return;
          }
          __this_02 = (UnityEngine_UI_ScrollRect_o *)0x0;
          UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
          pUVar2 = (__this->fields)._scroll;
          if ((pUVar2 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
             (__this_02 = (UnityEngine_UI_ScrollRect_o *)(pUVar2->fields).m_Content,
             __this_02 != (UnityEngine_UI_ScrollRect_o *)0x0)) {
            UVar9 = UnityEngine_RectTransform__get_rect
                              ((UnityEngine_RectTransform_o *)__this_02,(MethodInfo *)0x0);
            pUVar2 = (__this->fields)._scroll;
            if ((pUVar2 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
               (__this_02 = *(UnityEngine_UI_ScrollRect_o **)&(pUVar2->fields).m_ScrollSensitivity,
               __this_02 != (UnityEngine_UI_ScrollRect_o *)0x0)) {
              UVar10 = UnityEngine_RectTransform__get_rect
                                 ((UnityEngine_RectTransform_o *)__this_02,(MethodInfo *)0x0);
              fVar7 = UVar9.fields.m_Height - UVar10.fields.m_Height;
              fVar8 = 0.0;
              if (0.0 <= fVar7) {
                fVar8 = fVar7;
              }
              if (fVar8 <= 0.01) {
                return;
              }
              pUVar2 = (__this->fields)._scroll;
              if (pUVar2 != (UnityEngine_UI_ScrollRect_o *)0x0) {
                root = *(UnityEngine_Transform_o **)&(pUVar2->fields).m_ScrollSensitivity;
                if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                __this_02 = (UnityEngine_UI_ScrollRect_o *)auStack_48;
                method = (MethodInfo *)0x0;
                UnityEngine_RectTransformUtility__CalculateRelativeRectTransformBounds
                          ((UnityEngine_Bounds_o *)__this_02,root,(UnityEngine_Transform_o *)target,
                           (MethodInfo *)0x0);
                pUVar2 = (__this->fields)._scroll;
                if (pUVar2 != (UnityEngine_UI_ScrollRect_o *)0x0) {
                  pUVar3 = *(UnityEngine_RectTransform_o **)&(pUVar2->fields).m_ScrollSensitivity;
                  __this_02 = (UnityEngine_UI_ScrollRect_o *)0x0;
                  if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
                    UVar9 = UnityEngine_RectTransform__get_rect(pUVar3,(MethodInfo *)0x0);
                    pUVar2 = (__this->fields)._scroll;
                    __this_02 = (UnityEngine_UI_ScrollRect_o *)0x0;
                    if (pUVar2 != (UnityEngine_UI_ScrollRect_o *)0x0) {
                      fVar7 = UnityEngine_UI_ScrollRect__get_verticalNormalizedPosition
                                        (pUVar2,(MethodInfo *)0x0);
                      pUVar2 = (__this->fields)._scroll;
                      __this_02 = (UnityEngine_UI_ScrollRect_o *)0x0;
                      if (pUVar2 != (UnityEngine_UI_ScrollRect_o *)0x0) {
                        fStack_84 = UVar9.fields.m_Height;
                        fStack_74 = UVar9.fields.m_YMin;
                        fVar7 = fVar7 - ((fStack_74 + fStack_84) - (fStack_38 + (float)auStack_48._4_4_)) /
                                        fVar8;
                        fVar8 = 1.0;
                        if (fVar7 <= 1.0) {
                          fVar8 = fVar7;
                        }
                        fVar8 = (float)(-(uint)(0.0 <= fVar7) & (uint)fVar8);
                        (*(pUVar2->klass->vtable)._41_StopMovement.methodPtr)();
                        pDVar6 = (__this->fields)._scrollTween;
                        if (pDVar6 != (DG_Tweening_Tween_o *)0x0) {
                          DG_Tweening_TweenExtensions__Kill(pDVar6,0,(MethodInfo *)0x0);
                        }
                        if ((char)instant == '\0') {
                          if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
                            il2cpp_runtime_helper_02337ed0();
                          }
                          bVar5 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
                          if ((char)bVar5 != '\0') {
                            ppDVar1 = &(__this->fields)._scrollTween;
                            getter = (DG_Tweening_Core_DOGetter_float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_DOGetter_float);
                            DG_Tweening_Core_DOGetter_float____ctor();
                            setter = (DG_Tweening_Core_DOSetter_float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_DOSetter_float);
                            DG_Tweening_Core_DOSetter_float____ctor();
                            if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
                              il2cpp_runtime_helper_02337ed0();
                            }
                            t = DG_Tweening_DOTween__To(getter,setter,fVar8,0.22,(MethodInfo *)0x0);
                            t_00 = DG_Tweening_TweenSettingsExtensions__SetEase_object_
                                             ((Il2CppObject *)t,9,MethodInfo_TweenerCore_3_System_Single_System_Single_DG_Tweening_Pl);
                            pDVar6 = (DG_Tweening_Tween_o *)
                                     DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                                               (t_00,1,MethodInfo_TweenerCore_3_System_Single_System_Single_DG_Tweening_Pl);
                            *ppDVar1 = pDVar6;
                            il2cpp_runtime_helper_022b4080(ppDVar1);
                            pDVar6 = *ppDVar1;
                            if (*(int *)(TypeInfo_GisketchMotionDriver + 0xe4) == 0) {
                              il2cpp_runtime_helper_02337ed0();
                            }
                            Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Track(pDVar6,0,(MethodInfo *)0x0)
                            ;
                            return;
                          }
                        }
                        pUVar2 = (__this->fields)._scroll;
                        __this_02 = (UnityEngine_UI_ScrollRect_o *)0x0;
                        if (pUVar2 != (UnityEngine_UI_ScrollRect_o *)0x0) {
                          UnityEngine_UI_ScrollRect__set_verticalNormalizedPosition
                                    (pUVar2,fVar8,(MethodInfo *)0x0);
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
      if (g_data_057a9f1b == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_FlexLayout_GetComponent_FlexLayout);
        il2cpp_runtime_helper_023445d0(&TypeInfo_LayoutRebuilder);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057a9f1b = '\x01';
      }
      __this_03 = *(Gilzoide_FlexUi_FlexLayout_o **)&(__this_02->fields).m_Inertia;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      method_00 = (MethodInfo *)0x0;
      bVar5 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)__this_03,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        return;
      }
      lVar4 = *(long *)&(__this_02->fields).m_Inertia;
      if (lVar4 != 0) {
        x = *(UnityEngine_Object_o **)(lVar4 + 0x20);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        method_00 = (MethodInfo *)0x0;
        bVar5 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar5 != '\0') {
          return;
        }
        __this_03 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
        UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
        lVar4 = *(long *)&(__this_02->fields).m_Inertia;
        if (lVar4 != 0) {
          __this_00 = *(UnityEngine_Component_o **)(lVar4 + 0x20);
          __this_03 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
          if (__this_00 != (UnityEngine_Component_o *)0x0) {
            __this_01 = (Gilzoide_FlexUi_FlexLayout_o *)
                        UnityEngine_Component__GetComponent_object_(__this_00,MethodInfo_FlexLayout_GetComponent_FlexLayout);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            method_00 = (MethodInfo *)0x0;
            __this_03 = __this_01;
            bVar5 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                              );
            if ((char)bVar5 != '\0') {
              if (__this_01 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto label_03b9ab90;
              method_00 = (MethodInfo *)0x0;
              Gilzoide_FlexUi_FlexLayout__RefreshRootLayoutImmediate(__this_01,(MethodInfo *)0x0);
              __this_03 = __this_01;
            }
            lVar4 = *(long *)&(__this_02->fields).m_Inertia;
            if (lVar4 != 0) {
              pUVar3 = *(UnityEngine_RectTransform_o **)(lVar4 + 0x20);
              if (*(int *)(TypeInfo_LayoutRebuilder + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate(pUVar3,(MethodInfo *)0x0);
              UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
              return;
            }
          }
        }
      }
label_03b9ab90:
      il2cpp_runtime_helper_022b2c90();
      Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Resolve
                ((Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)__this_03,method_00);
      Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__SetActive
                ((Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)__this_03,0,0,method);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$SectionAtViewportTop
// il2cpp: int32_t Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__SectionAtViewportTop (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o* __this, const MethodInfo* method);
// 0x3b9abf0

int32_t Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__SectionAtViewportTop
                  (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *__this,MethodInfo *method)

{
  uint uVar1;
  UnityEngine_UI_ScrollRect_o *child;
  UnityEngine_UI_ScrollRect_o *pUVar2;
  UnityEngine_Transform_o *root;
  UnityEngine_UI_Scrollbar_o *t;
  bool_conflict bVar3;
  int32_t iVar4;
  int32_t extraout_EAX;
  UnityEngine_RectTransform_array *pUVar5;
  UnityEngine_UI_ScrollRect_o *pUVar6;
  UnityEngine_UI_ScrollRect_o *x;
  ulong uVar7;
  int iVar8;
  float fVar10;
  float fVar11;
  float fVar12;
  UnityEngine_Rect_o UVar13;
  float local_70;
  UnityEngine_UI_ScrollRect_c *local_48;
  undefined8 local_3c;
  ulong uVar9;
  
  if (g_data_057a9f1d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
    g_data_057a9f1d = '\x01';
  }
  x = (__this->fields)._scroll;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return -1;
  }
  pUVar6 = (__this->fields)._scroll;
  if (pUVar6 != (UnityEngine_UI_ScrollRect_o *)0x0) {
    x = *(UnityEngine_UI_ScrollRect_o **)&(pUVar6->fields).m_ScrollSensitivity;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      return -1;
    }
    if ((__this->fields)._sections == (UnityEngine_RectTransform_array *)0x0) {
      return -1;
    }
    pUVar6 = (__this->fields)._scroll;
    if ((pUVar6 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
       (pUVar6 = *(UnityEngine_UI_ScrollRect_o **)&(pUVar6->fields).m_ScrollSensitivity, x = pUVar6,
       pUVar6 != (UnityEngine_UI_ScrollRect_o *)0x0)) {
      UVar13 = UnityEngine_RectTransform__get_rect((UnityEngine_RectTransform_o *)pUVar6,(MethodInfo *)0x0);
      pUVar5 = (__this->fields)._sections;
      x = pUVar6;
      if (pUVar5 != (UnityEngine_RectTransform_array *)0x0) {
        fVar10 = UVar13.fields.m_YMin + UVar13.fields.m_Height;
        local_70 = 3.4028235e+38;
        uVar9 = 0xffffffff;
        iVar8 = -1;
        uVar7 = 0;
        uVar1 = (uint)pUVar5->max_length;
        if (0 < (int)uVar1) {
          do {
            x = pUVar6;
            if (uVar1 <= uVar7) goto label_03b9ae6a;
            child = (UnityEngine_UI_ScrollRect_o *)pUVar5->m_Items[uVar7];
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pUVar6 = child;
            bVar3 = UnityEngine_Object__op_Equality
                              ((UnityEngine_Object_o *)child,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar3 == '\0') {
              x = pUVar6;
              if ((child == (UnityEngine_UI_ScrollRect_o *)0x0) ||
                 (x = child,
                 pUVar6 = (UnityEngine_UI_ScrollRect_o *)
                          UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)child,(MethodInfo *)0x0),
                 pUVar6 == (UnityEngine_UI_ScrollRect_o *)0x0)) goto label_03b9ae65;
              bVar3 = UnityEngine_GameObject__get_activeInHierarchy
                                ((UnityEngine_GameObject_o *)pUVar6,(MethodInfo *)0x0);
              if ((char)bVar3 != '\0') {
                pUVar2 = (__this->fields)._scroll;
                x = pUVar6;
                if (pUVar2 == (UnityEngine_UI_ScrollRect_o *)0x0) goto label_03b9ae65;
                root = *(UnityEngine_Transform_o **)&(pUVar2->fields).m_ScrollSensitivity;
                if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pUVar6 = (UnityEngine_UI_ScrollRect_o *)&stack0xffffffffffffffb8;
                UnityEngine_RectTransformUtility__CalculateRelativeRectTransformBounds
                          ((UnityEngine_Bounds_o *)pUVar6,root,(UnityEngine_Transform_o *)child,
                           (MethodInfo *)0x0);
                fVar12 = (float)((ulong)local_48 >> 0x20);
                fVar11 = fVar12 + SUB84(local_3c,4);
                if (((UVar13.fields.m_YMin <= fVar11) && (fVar12 - SUB84(local_3c,4) <= fVar10)) &&
                   (fVar11 = ABS(fVar11 - (fVar10 + -24.0)), fVar11 < local_70)) {
                  uVar9 = uVar7 & 0xffffffff;
                  local_70 = fVar11;
                }
              }
            }
            iVar8 = (int)uVar9;
            uVar7 = uVar7 + 1;
            pUVar5 = (__this->fields)._sections;
            x = pUVar6;
            if (pUVar5 == (UnityEngine_RectTransform_array *)0x0) goto label_03b9ae65;
            uVar1 = (uint)pUVar5->max_length;
          } while ((long)uVar7 < (long)(int)uVar1);
        }
        if (-1 < iVar8) {
          return iVar8;
        }
        return (__this->fields)._activeIndex;
      }
    }
  }
label_03b9ae65:
  il2cpp_runtime_helper_022b2c90();
label_03b9ae6a:
  iVar4 = il2cpp_runtime_helper_022b2ca0();
  t = (x->fields).m_HorizontalScrollbar;
  if (t != (UnityEngine_UI_Scrollbar_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill((DG_Tweening_Tween_o *)t,0,(MethodInfo *)0x0);
    return extraout_EAX;
  }
  return iVar4;
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$MaxScrollY
// il2cpp: float Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__MaxScrollY (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o* __this, const MethodInfo* method);
// 0x3b9b280

float Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__MaxScrollY
                (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *__this,MethodInfo *method)

{
  UnityEngine_UI_ScrollRect_o *pUVar1;
  UnityEngine_RectTransform_o *__this_00;
  Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *__this_01;
  float fVar2;
  float extraout_XMM0_Da;
  float fVar3;
  UnityEngine_Rect_o UVar4;
  UnityEngine_Rect_o UVar5;
  
  pUVar1 = (__this->fields)._scroll;
  __this_01 = __this;
  if ((pUVar1 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
     (__this_01 = (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)(pUVar1->fields).m_Content,
     __this_01 != (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)0x0)) {
    UVar4 = UnityEngine_RectTransform__get_rect((UnityEngine_RectTransform_o *)__this_01,(MethodInfo *)0x0);
    pUVar1 = (__this->fields)._scroll;
    if ((pUVar1 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
       (__this_00 = *(UnityEngine_RectTransform_o **)&(pUVar1->fields).m_ScrollSensitivity,
       __this_01 = (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)0x0,
       __this_00 != (UnityEngine_RectTransform_o *)0x0)) {
      UVar5 = UnityEngine_RectTransform__get_rect(__this_00,(MethodInfo *)0x0);
      fVar3 = UVar4.fields.m_Height - UVar5.fields.m_Height;
      fVar2 = 0.0;
      if (0.0 <= fVar3) {
        fVar2 = fVar3;
      }
      return fVar2;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  return extraout_XMM0_Da;
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$IndexOf
// il2cpp: int32_t Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__IndexOf (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o* __this, System_String_o* sectionId, const MethodInfo* method);
// 0x3b9a330

int32_t Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__IndexOf
                  (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *__this,System_String_o *sectionId,
                  MethodInfo *method)

{
  float *pfVar1;
  uint uVar2;
  UnityEngine_UI_Image_o *pUVar3;
  UnityEngine_Vector2_Fields UVar4;
  long lVar5;
  UnityEngine_RectTransform_o *pUVar6;
  UnityEngine_Object_o *pUVar7;
  UnityEngine_Transform_o *root;
  UnityEngine_UI_ScrollRect_o *pUVar8;
  UnityEngine_Component_o *__this_00;
  bool_conflict bVar9;
  int iVar10;
  int32_t extraout_EAX;
  int32_t extraout_EAX_00;
  int32_t extraout_EAX_01;
  int32_t extraout_EAX_02;
  int32_t extraout_EAX_03;
  System_String_array *pSVar11;
  undefined8 uVar12;
  DG_Tweening_Core_DOGetter_float__o *getter;
  DG_Tweening_Core_DOSetter_float__o *setter;
  DG_Tweening_Core_TweenerCore_float__float__FloatOptions__o *t;
  Il2CppObject *pIVar13;
  DG_Tweening_Tween_o *pDVar14;
  Gilzoide_FlexUi_FlexLayout_o *__this_01;
  MethodInfo *method_00;
  char extraout_DL;
  MethodInfo *pMVar15;
  MethodInfo *pMVar16;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *unaff_RBP;
  MethodInfo *method_01;
  MethodInfo *pMVar17;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *a;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this_02;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this_03;
  UnityEngine_RectTransform_o *pUVar18;
  Gilzoide_FlexUi_FlexLayout_o *__this_04;
  MethodInfo *unaff_R12;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  UnityEngine_Rect_o UVar22;
  UnityEngine_Rect_o UVar23;
  float fStack_d4;
  float fStack_c4;
  undefined1 auStack_98 [16];
  float fStack_88;
  MethodInfo *pMStack_80;
  MethodInfo *pMStack_78;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *pGStack_70;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *pGStack_68;
  ulong uStack_60;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *pGStack_58;
  undefined8 uStack_50;
  MethodInfo *pMStack_48;
  
  pSVar11 = (__this->fields)._sectionIds;
  if (pSVar11 != (System_String_array *)0x0) {
    pMVar15 = (MethodInfo *)0x0;
    pMVar17 = (MethodInfo *)sectionId;
    a = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)__this;
    do {
      uVar2 = (uint)pSVar11->max_length;
      method_00 = (MethodInfo *)(ulong)uVar2;
      if ((long)(int)uVar2 <= (long)pMVar15) goto label_03b9a38a;
      if (method_00 <= pMVar15) {
        auVar21 = il2cpp_runtime_helper_022b2ca0();
        uVar12 = auVar21._0_8_;
        pMVar16 = (MethodInfo *)(auVar21._8_8_ & 0xffffffff);
        method_01 = pMVar17;
        __this_02 = a;
        uStack_50 = uVar12;
        pMStack_48 = pMVar15;
        if (g_data_057a9f1a == '\0') {
          __this_02 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)&TypeInfo_Object;
          pGStack_58 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)0x3b9a3c8;
          uVar12 = il2cpp_runtime_helper_023445d0();
          g_data_057a9f1a = '\x01';
        }
        fVar20 = SUB84(pMVar17,0);
        if ((int)fVar20 < 0) {
          return (int32_t)uVar12;
        }
        pUVar3 = (a->fields)._brush;
        __this_03 = __this_02;
        if (pUVar3 == (UnityEngine_UI_Image_o *)0x0) goto label_03b9a5ca;
        iVar10 = (int)(pUVar3->fields).m_CancellationTokenSource;
        if (iVar10 <= (int)fVar20) {
          return iVar10;
        }
        uStack_50 = CONCAT44(auVar21._8_4_,(undefined4)uStack_50);
        (a->fields)._shownBrush.fields.r = fVar20;
        if (iVar10 < 1) goto label_03b9a54e;
        unaff_R12 = (MethodInfo *)((ulong)pMVar17 & 0xffffffff);
        pMVar16 = (MethodInfo *)0x0;
        sectionId = (System_String_o *)&TypeInfo_Object;
        goto label_03b9a410;
      }
      a = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)pSVar11->m_Items[(long)pMVar15];
      pMVar17 = (MethodInfo *)sectionId;
      bVar9 = System_String__Equals_3af50f0((System_String_o *)a,sectionId,5,(MethodInfo *)0x0);
      if ((char)bVar9 != '\0') goto label_03b9a38f;
      pMVar15 = (MethodInfo *)((long)&pMVar15->methodPointer + 1);
      pSVar11 = (__this->fields)._sectionIds;
    } while (pSVar11 != (System_String_array *)0x0);
  }
  il2cpp_runtime_helper_022b2c90();
label_03b9a38a:
  pMVar15 = (MethodInfo *)&g_data_ffffffff;
label_03b9a38f:
  return (int32_t)pMVar15;
  while( true ) {
    lVar5 = *(long *)&(a->fields)._hiddenBrush.fields;
    if ((lVar5 != 0) &&
       (method_00 = (MethodInfo *)(ulong)*(uint *)(lVar5 + 0x18),
       (long)pMVar16 < (long)(int)*(uint *)(lVar5 + 0x18))) {
      __this_03 = __this_02;
      if (method_00 <= pMVar16) goto label_03b9a5cf;
      unaff_RBP = *(Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o **)
                   (lVar5 + 0x20 + (long)pMVar16 * 8);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        pGStack_58 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)0x3b9a4e3;
        il2cpp_runtime_helper_02337ed0();
      }
      method_01 = (MethodInfo *)0x0;
      pGStack_58 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)0x3b9a4ef;
      __this_02 = unaff_RBP;
      bVar9 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)unaff_RBP,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar9 != '\0') {
        lVar5 = *(long *)&(a->fields)._hiddenBrush.fields;
        __this_03 = __this_02;
        if (lVar5 == 0) goto label_03b9a5ca;
        method_00 = (MethodInfo *)(ulong)*(uint *)(lVar5 + 0x18);
        if (method_00 <= pMVar16) goto label_03b9a5cf;
        __this_02 = *(Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o **)
                     (lVar5 + 0x20 + (long)pMVar16 * 8);
        __this_03 = __this_02;
        if (__this_02 == (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)0x0) goto label_03b9a5ca;
        *(bool *)((long)&(__this_02->fields)._hovered + 2) = unaff_R12 == pMVar16;
        pGStack_58 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)0x3b9a529;
        Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__Refresh(__this_02,method_01);
      }
    }
    pUVar3 = (a->fields)._brush;
    __this_03 = __this_02;
    if (pUVar3 == (UnityEngine_UI_Image_o *)0x0) goto label_03b9a5ca;
    pMVar16 = (MethodInfo *)((long)&pMVar16->methodPointer + 1);
    iVar10 = *(int *)&(pUVar3->fields).m_CancellationTokenSource;
    if ((long)iVar10 <= (long)pMVar16) break;
label_03b9a410:
    UVar4 = (a->fields)._contentOrigin.fields;
    if ((UVar4 != (UnityEngine_Vector2_Fields)0x0) &&
       (method_00 = (MethodInfo *)(ulong)*(uint *)((long)UVar4 + 0x18),
       (long)pMVar16 < (long)(int)*(uint *)((long)UVar4 + 0x18))) {
      __this_03 = __this_02;
      if (method_00 <= pMVar16) goto label_03b9a5cf;
      unaff_RBP = *(Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o **)
                   ((long)UVar4 + 0x20 + (long)pMVar16 * 8);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        pGStack_58 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)0x3b9a44b;
        il2cpp_runtime_helper_02337ed0();
      }
      method_01 = (MethodInfo *)0x0;
      pGStack_58 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)0x3b9a457;
      __this_02 = unaff_RBP;
      bVar9 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)unaff_RBP,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (((char)bVar9 != '\0') && (*(char *)&(a->fields)._label != '\0')) {
        UVar4 = (a->fields)._contentOrigin.fields;
        __this_03 = __this_02;
        if (UVar4 == (UnityEngine_Vector2_Fields)0x0) goto label_03b9a5ca;
        method_00 = (MethodInfo *)(ulong)*(uint *)((long)UVar4 + 0x18);
        if (method_00 <= pMVar16) goto label_03b9a5cf;
        __this_03 = *(Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o **)
                     ((long)UVar4 + 0x20 + (long)pMVar16 * 8);
        if (__this_03 == (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)0x0) goto label_03b9a5ca;
        method_01 = (MethodInfo *)0x0;
        pGStack_58 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)0x3b9a490;
        __this_02 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)
                    UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
        if (__this_02 == (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)0x0) goto label_03b9a5ca;
        method_01 = (MethodInfo *)(ulong)(unaff_R12 == pMVar16);
        pGStack_58 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)0x3b9a4ac;
        UnityEngine_GameObject__SetActive
                  ((UnityEngine_GameObject_o *)__this_02,(uint)(unaff_R12 == pMVar16),(MethodInfo *)0x0);
      }
    }
  }
label_03b9a54e:
  if (uStack_50._4_1_ != '\0') {
    UVar4 = (a->fields)._contentOrigin.fields;
    iVar10 = 0;
    if (UVar4 != (UnityEngine_Vector2_Fields)0x0) {
      if ((uint)fVar20 < (uint)*(float *)((long)UVar4 + 0x18)) {
        pMVar16 = (MethodInfo *)(long)(int)fVar20;
        sectionId = *(System_String_o **)((long)UVar4 + 0x20 + (long)pMVar16 * 8);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          pGStack_58 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)0x3b9a584;
          il2cpp_runtime_helper_02337ed0();
        }
        method_01 = (MethodInfo *)0x0;
        pGStack_58 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)0x3b9a590;
        __this_03 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)sectionId;
        bVar9 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)sectionId,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar9 == '\0') {
          return bVar9;
        }
        UVar4 = (a->fields)._contentOrigin.fields;
        if (UVar4 == (UnityEngine_Vector2_Fields)0x0) {
label_03b9a5ca:
          pGStack_58 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)0x3b9a5cf;
          il2cpp_runtime_helper_022b2c90();
        }
        else if ((uint)fVar20 < (uint)*(float *)((long)UVar4 + 0x18)) {
          Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__AnimateSection
                    (*(UnityEngine_RectTransform_o **)((long)UVar4 + 0x20 + (long)pMVar16 * 8),method_01);
          return extraout_EAX;
        }
      }
label_03b9a5cf:
      pGStack_58 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)0x3b9a5d4;
      il2cpp_runtime_helper_022b2ca0();
      pMStack_80 = pMVar16;
      pMStack_78 = unaff_R12;
      pGStack_70 = a;
      pGStack_68 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)sectionId;
      uStack_60 = (ulong)pMVar17 & 0xffffffff;
      pGStack_58 = unaff_RBP;
      if (g_data_057a9f1c == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
        il2cpp_runtime_helper_023445d0(&TypeInfo_DOGetter_float);
        il2cpp_runtime_helper_023445d0(&TypeInfo_DOSetter_float);
        il2cpp_runtime_helper_023445d0(&TypeInfo_DOTween);
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotionDriver);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ScrollTo_b__22_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ScrollTo_b__22_1);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
        il2cpp_runtime_helper_023445d0(&MethodInfo_TweenerCore_3_System_Single_System_Single_DG_Tweening_Pl);
        il2cpp_runtime_helper_023445d0(&MethodInfo_TweenerCore_3_System_Single_System_Single_DG_Tweening_Pl);
        g_data_057a9f1c = '\x01';
      }
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar9 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)method_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
        pUVar18 = (__this_03->fields)._content;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar9 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)pUVar18,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar9 == '\0') {
          pUVar6 = (__this_03->fields)._content;
          if (pUVar6 != (UnityEngine_RectTransform_o *)0x0) {
            pUVar18 = (UnityEngine_RectTransform_o *)pUVar6[2].fields.m_CachedPtr;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar9 = UnityEngine_Object__op_Equality
                              ((UnityEngine_Object_o *)pUVar18,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar9 != '\0') {
              return bVar9;
            }
            pUVar6 = (__this_03->fields)._content;
            if (pUVar6 != (UnityEngine_RectTransform_o *)0x0) {
              pUVar7 = pUVar6[1].monitor;
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              bVar9 = UnityEngine_Object__op_Equality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if ((char)bVar9 != '\0') {
                return bVar9;
              }
              pUVar18 = (UnityEngine_RectTransform_o *)0x0;
              UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
              pUVar6 = (__this_03->fields)._content;
              if ((pUVar6 != (UnityEngine_RectTransform_o *)0x0) &&
                 (pUVar18 = pUVar6[1].monitor, pUVar18 != (UnityEngine_RectTransform_o *)0x0)) {
                UVar22 = UnityEngine_RectTransform__get_rect(pUVar18,(MethodInfo *)0x0);
                pUVar6 = (__this_03->fields)._content;
                if ((pUVar6 != (UnityEngine_RectTransform_o *)0x0) &&
                   (pUVar18 = (UnityEngine_RectTransform_o *)pUVar6[2].fields.m_CachedPtr,
                   pUVar18 != (UnityEngine_RectTransform_o *)0x0)) {
                  UVar23 = UnityEngine_RectTransform__get_rect(pUVar18,(MethodInfo *)0x0);
                  fVar19 = UVar22.fields.m_Height - UVar23.fields.m_Height;
                  fVar20 = 0.0;
                  if (0.0 <= fVar19) {
                    fVar20 = fVar19;
                  }
                  if (fVar20 <= 0.01) {
                    return extraout_EAX_00;
                  }
                  pUVar6 = (__this_03->fields)._content;
                  if (pUVar6 != (UnityEngine_RectTransform_o *)0x0) {
                    root = (UnityEngine_Transform_o *)pUVar6[2].fields.m_CachedPtr;
                    if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pUVar18 = (UnityEngine_RectTransform_o *)auStack_98;
                    method_00 = (MethodInfo *)0x0;
                    UnityEngine_RectTransformUtility__CalculateRelativeRectTransformBounds
                              ((UnityEngine_Bounds_o *)pUVar18,root,(UnityEngine_Transform_o *)method_01,
                               (MethodInfo *)0x0);
                    pUVar6 = (__this_03->fields)._content;
                    if (pUVar6 != (UnityEngine_RectTransform_o *)0x0) {
                      pUVar6 = (UnityEngine_RectTransform_o *)pUVar6[2].fields.m_CachedPtr;
                      pUVar18 = (UnityEngine_RectTransform_o *)0x0;
                      if (pUVar6 != (UnityEngine_RectTransform_o *)0x0) {
                        UVar22 = UnityEngine_RectTransform__get_rect(pUVar6,(MethodInfo *)0x0);
                        pUVar8 = (UnityEngine_UI_ScrollRect_o *)(__this_03->fields)._content;
                        pUVar18 = (UnityEngine_RectTransform_o *)0x0;
                        if (pUVar8 != (UnityEngine_UI_ScrollRect_o *)0x0) {
                          fVar19 = UnityEngine_UI_ScrollRect__get_verticalNormalizedPosition
                                             (pUVar8,(MethodInfo *)0x0);
                          pUVar6 = (__this_03->fields)._content;
                          pUVar18 = (UnityEngine_RectTransform_o *)0x0;
                          if (pUVar6 != (UnityEngine_RectTransform_o *)0x0) {
                            fStack_d4 = UVar22.fields.m_Height;
                            fStack_c4 = UVar22.fields.m_YMin;
                            fVar19 = fVar19 - ((fStack_c4 + fStack_d4) - (fStack_88 + (float)auStack_98._4_4_)
                                              ) / fVar20;
                            fVar20 = 1.0;
                            if (fVar19 <= 1.0) {
                              fVar20 = fVar19;
                            }
                            fVar20 = (float)(-(uint)(0.0 <= fVar19) & (uint)fVar20);
                            (*(code *)pUVar6->klass[2].static_fields)();
                            pDVar14 = *(DG_Tweening_Tween_o **)&(__this_03->fields)._hiddenBrush.fields.b;
                            if (pDVar14 != (DG_Tweening_Tween_o *)0x0) {
                              DG_Tweening_TweenExtensions__Kill(pDVar14,0,(MethodInfo *)0x0);
                            }
                            if (extraout_DL == '\0') {
                              if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
                                il2cpp_runtime_helper_02337ed0();
                              }
                              bVar9 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
                              if ((char)bVar9 != '\0') {
                                pfVar1 = &(__this_03->fields)._hiddenBrush.fields.b;
                                getter = (DG_Tweening_Core_DOGetter_float__o *)
                                         il2cpp_runtime_helper_023052d0(TypeInfo_DOGetter_float);
                                DG_Tweening_Core_DOGetter_float____ctor();
                                setter = (DG_Tweening_Core_DOSetter_float__o *)
                                         il2cpp_runtime_helper_023052d0(TypeInfo_DOSetter_float);
                                DG_Tweening_Core_DOSetter_float____ctor();
                                if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
                                  il2cpp_runtime_helper_02337ed0();
                                }
                                t = DG_Tweening_DOTween__To(getter,setter,fVar20,0.22,(MethodInfo *)0x0);
                                pIVar13 = DG_Tweening_TweenSettingsExtensions__SetEase_object_
                                                    ((Il2CppObject *)t,9,MethodInfo_TweenerCore_3_System_Single_System_Single_DG_Tweening_Pl);
                                pIVar13 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                                                    (pIVar13,1,MethodInfo_TweenerCore_3_System_Single_System_Single_DG_Tweening_Pl);
                                *(Il2CppObject **)pfVar1 = pIVar13;
                                il2cpp_runtime_helper_022b4080(pfVar1);
                                pDVar14 = *(DG_Tweening_Tween_o **)pfVar1;
                                if (*(int *)(TypeInfo_GisketchMotionDriver + 0xe4) == 0) {
                                  il2cpp_runtime_helper_02337ed0();
                                }
                                pDVar14 = Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Track
                                                    (pDVar14,0,(MethodInfo *)0x0);
                                return (int32_t)pDVar14;
                              }
                            }
                            pUVar8 = (UnityEngine_UI_ScrollRect_o *)(__this_03->fields)._content;
                            pUVar18 = (UnityEngine_RectTransform_o *)0x0;
                            if (pUVar8 != (UnityEngine_UI_ScrollRect_o *)0x0) {
                              UnityEngine_UI_ScrollRect__set_verticalNormalizedPosition
                                        (pUVar8,fVar20,(MethodInfo *)0x0);
                              return extraout_EAX_01;
                            }
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
          if (g_data_057a9f1b == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_FlexLayout_GetComponent_FlexLayout);
            il2cpp_runtime_helper_023445d0(&TypeInfo_LayoutRebuilder);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            g_data_057a9f1b = '\x01';
          }
          __this_04 = pUVar18[2].monitor;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pMVar17 = (MethodInfo *)0x0;
          bVar9 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)__this_04,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar9 != '\0') {
            return bVar9;
          }
          if (pUVar18[2].monitor != (void *)0x0) {
            pUVar7 = *(UnityEngine_Object_o **)((long)pUVar18[2].monitor + 0x20);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pMVar17 = (MethodInfo *)0x0;
            bVar9 = UnityEngine_Object__op_Equality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar9 != '\0') {
              return bVar9;
            }
            __this_04 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
            UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
            if (pUVar18[2].monitor != (void *)0x0) {
              __this_00 = *(UnityEngine_Component_o **)((long)pUVar18[2].monitor + 0x20);
              __this_04 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
              if (__this_00 != (UnityEngine_Component_o *)0x0) {
                __this_01 = (Gilzoide_FlexUi_FlexLayout_o *)
                            UnityEngine_Component__GetComponent_object_(__this_00,MethodInfo_FlexLayout_GetComponent_FlexLayout);
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pMVar17 = (MethodInfo *)0x0;
                __this_04 = __this_01;
                bVar9 = UnityEngine_Object__op_Inequality
                                  ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,
                                   (MethodInfo *)0x0);
                if ((char)bVar9 != '\0') {
                  if (__this_01 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto label_03b9ab90;
                  pMVar17 = (MethodInfo *)0x0;
                  Gilzoide_FlexUi_FlexLayout__RefreshRootLayoutImmediate(__this_01,(MethodInfo *)0x0);
                  __this_04 = __this_01;
                }
                if (pUVar18[2].monitor != (void *)0x0) {
                  pUVar18 = *(UnityEngine_RectTransform_o **)((long)pUVar18[2].monitor + 0x20);
                  if (*(int *)(TypeInfo_LayoutRebuilder + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate(pUVar18,(MethodInfo *)0x0);
                  UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
                  return extraout_EAX_02;
                }
              }
            }
          }
label_03b9ab90:
          il2cpp_runtime_helper_022b2c90();
          Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Resolve
                    ((Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)__this_04,pMVar17);
          Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__SetActive
                    ((Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)__this_04,0,0,method_00);
          return extraout_EAX_03;
        }
      }
      return bVar9;
    }
  }
  return iVar10;
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$SectionName
// il2cpp: System_String_o* Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__SectionName (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o* __this, System_String_o* sectionId, const MethodInfo* method);
// 0x3b9afe0

System_String_o *
Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__SectionName
          (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *__this,System_String_o *sectionId,
          MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (g_data_057a9f1e == '\0') {
    il2cpp_runtime_helper_023445d0(&"-section-");
    g_data_057a9f1e = '\x01';
  }
  pSVar1 = System_String__Concat_3af7150((__this->fields)._prefix,"-section-",sectionId,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$AnimateSection
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__AnimateSection (UnityEngine_RectTransform_o* section, const MethodInfo* method);
// 0x3b9b030

void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__AnimateSection
               (UnityEngine_RectTransform_o *section,MethodInfo *method)

{
  char cVar1;
  bool_conflict bVar2;
  Il2CppObject *pIVar3;
  Il2CppClass *pIVar4;
  UnityEngine_GameObject_o *__this;
  DG_Tweening_TweenCallback_float__o *onVirtualUpdate;
  DG_Tweening_Tweener_o *t;
  DG_Tweening_Tween_o *tween;
  Il2CppObject *pIVar5;
  UnityEngine_RectTransform_o *pUVar6;
  UnityEngine_RectTransform_o *__this_00;
  undefined8 uVar7;
  UnityEngine_Rect_o UVar8;
  
  if (g_data_057a9f1f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CanvasGroup_GetComponent_CanvasGroup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CanvasGroup_AddComponent_CanvasGroup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotionDriver);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback_float);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Tweener_SetEase_Tweener);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Tweener_SetUpdate_Tweener);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AnimateSection_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass27_0);
    g_data_057a9f1f = '\x01';
  }
  pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass27_0);
  System_Object___ctor(pIVar3,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pUVar6 = (UnityEngine_RectTransform_o *)0x0;
    bVar2 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    cVar1 = (char)bVar2;
  }
  else {
    pUVar6 = (UnityEngine_RectTransform_o *)0x0;
    bVar2 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    cVar1 = (char)bVar2;
  }
  if (cVar1 == '\0') {
    return;
  }
  if ((section != (UnityEngine_RectTransform_o *)0x0) &&
     (pUVar6 = section,
     pIVar4 = (Il2CppClass *)
              UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)section,MethodInfo_CanvasGroup_GetComponent_CanvasGroup),
     pIVar3 != (Il2CppObject *)0x0)) {
    pIVar5 = pIVar3 + 1;
    pIVar3[1].klass = pIVar4;
    il2cpp_runtime_helper_022b4080(pIVar5);
    pIVar4 = pIVar3[1].klass;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pIVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      __this = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)section,(MethodInfo *)0x0);
      pUVar6 = section;
      if (__this == (UnityEngine_GameObject_o *)0x0) goto label_03b9b27a;
      pIVar4 = (Il2CppClass *)UnityEngine_GameObject__AddComponent_object_(__this,MethodInfo_CanvasGroup_AddComponent_CanvasGroup);
      pIVar5->klass = pIVar4;
      il2cpp_runtime_helper_022b4080(pIVar5);
    }
    pUVar6 = (UnityEngine_RectTransform_o *)0x0;
    if (pIVar5->klass != (Il2CppClass *)0x0) {
      UnityEngine_CanvasGroup__set_alpha((UnityEngine_CanvasGroup_o *)pIVar5->klass,0.0,(MethodInfo *)0x0);
      onVirtualUpdate = (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback_float);
      DG_Tweening_TweenCallback_float____ctor();
      t = DG_Tweening_DOVirtual__Float(0.0,1.0,0.14,onVirtualUpdate,(MethodInfo *)0x0);
      pIVar3 = DG_Tweening_TweenSettingsExtensions__SetEase_object_((Il2CppObject *)t,9,MethodInfo_Tweener_SetEase_Tweener);
      tween = (DG_Tweening_Tween_o *)
              DG_Tweening_TweenSettingsExtensions__SetUpdate_object_(pIVar3,1,MethodInfo_Tweener_SetUpdate_Tweener);
      if (*(int *)(TypeInfo_GisketchMotionDriver + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Track(tween,0,(MethodInfo *)0x0);
      return;
    }
  }
label_03b9b27a:
  uVar7 = il2cpp_runtime_helper_022b2c90();
  __this_00 = pUVar6;
  if ((pUVar6[2].monitor != (void *)0x0) &&
     (__this_00 = *(UnityEngine_RectTransform_o **)((long)pUVar6[2].monitor + 0x20),
     __this_00 != (UnityEngine_RectTransform_o *)0x0)) {
    UVar8 = UnityEngine_RectTransform__get_rect(__this_00,(MethodInfo *)0x0);
    uVar7 = UVar8.fields._0_8_;
    if (pUVar6[2].monitor != (void *)0x0) {
      pUVar6 = *(UnityEngine_RectTransform_o **)((long)pUVar6[2].monitor + 0x40);
      __this_00 = (UnityEngine_RectTransform_o *)0x0;
      if (pUVar6 != (UnityEngine_RectTransform_o *)0x0) {
        UnityEngine_RectTransform__get_rect(pUVar6,(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90(uVar7);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$FindNavigator
// il2cpp: Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o* Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__FindNavigator (UnityEngine_GameObject_o* source, const MethodInfo* method);
// 0x3b99e50

Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *
Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__FindNavigator
          (UnityEngine_GameObject_o *source,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  UnityEngine_UI_ScrollRect_o *pUVar3;
  long lVar4;
  UnityEngine_RectTransform_o *__this;
  long *plVar5;
  code *pcVar6;
  UnityEngine_Component_o *__this_00;
  undefined1 auVar7 [16];
  UnityEngine_Vector2_o *pUVar8;
  Il2CppClass **ppIVar9;
  bool_conflict bVar10;
  Il2CppClass *pIVar11;
  undefined4 extraout_var;
  UnityEngine_UI_Image_o *pUVar12;
  undefined4 extraout_var_00;
  Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *extraout_RAX;
  undefined4 extraout_var_01;
  UnityEngine_Transform_o *__this_01;
  System_String_o *name;
  UnityEngine_RectTransform_o *pUVar13;
  UnityEngine_Vector2_Fields UVar14;
  Il2CppClass *pIVar15;
  Il2CppClass *name_00;
  void *pvVar16;
  Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *pGVar17;
  undefined4 extraout_var_02;
  Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *extraout_RAX_00;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  undefined4 extraout_var_05;
  undefined4 extraout_var_06;
  DG_Tweening_Tween_o *extraout_RAX_01;
  DG_Tweening_Core_DOGetter_float__o *getter;
  DG_Tweening_Core_DOSetter_float__o *setter;
  DG_Tweening_Core_TweenerCore_float__float__FloatOptions__o *t;
  Il2CppObject *t_00;
  Il2CppClass *pIVar18;
  DG_Tweening_Tween_o *pDVar19;
  DG_Tweening_Tween_o *extraout_RAX_02;
  undefined8 uVar20;
  undefined4 extraout_var_07;
  undefined4 extraout_var_08;
  Gilzoide_FlexUi_FlexLayout_o *__this_02;
  Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *extraout_RAX_03;
  Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *extraout_RAX_04;
  UnityEngine_Vector2_Fields in_RCX;
  ulong uVar21;
  ulong extraout_RDX;
  MethodInfo *pMVar22;
  UnityEngine_Vector2_Fields UVar23;
  UnityEngine_Vector2_Fields UVar24;
  Gilzoide_FlexUi_FlexLayout_o *x;
  undefined8 *puVar25;
  Il2CppClass *unaff_RBP;
  Il2CppClass *pIVar26;
  MethodInfo *pMVar27;
  Il2CppClass *method_00;
  Il2CppClass *__this_03;
  UnityEngine_RectTransform_o *__this_04;
  Gilzoide_FlexUi_FlexLayout_o *__this_05;
  UnityEngine_Vector2_Fields UVar28;
  Il2CppClass *unaff_R13;
  uint uVar29;
  Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *unaff_R15;
  Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *root;
  float fVar30;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined4 in_XMM1_Dc;
  undefined4 uVar31;
  undefined4 in_XMM1_Dd;
  undefined4 uVar32;
  float fVar33;
  undefined1 auVar34 [16];
  UnityEngine_Rect_o UVar35;
  undefined8 uStack_d8;
  UnityEngine_Vector2_Fields UStack_d0;
  UnityEngine_Vector2_Fields UStack_c8;
  Il2CppClass *pIStack_c0;
  Il2CppClass *pIStack_b8;
  Il2CppClass *pIStack_b0;
  Il2CppClass *pIStack_a8;
  MethodInfo *pMStack_a0;
  Il2CppClass *pIStack_98;
  UnityEngine_Vector2_o *pUStack_90;
  undefined8 uStack_88;
  MethodInfo *pMStack_80;
  undefined8 *puStack_78;
  Il2CppClass *pIStack_70;
  ulong uStack_68;
  Il2CppClass *pIStack_60;
  Il2CppClass *pIStack_58;
  undefined8 uStack_50;
  UnityEngine_Vector2_Fields UStack_48;
  Il2CppClass *pIStack_40;
  Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *pGStack_38;
  
  if (g_data_057a9f20 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchSectionNavigator_GetComponentInChildren_Gisketch);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9f20 = '\x01';
  }
  UVar28 = (UnityEngine_Vector2_Fields)&TypeInfo_Object;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar11 = (Il2CppClass *)0x0;
  pMVar22 = (MethodInfo *)0x0;
  pIVar18 = (Il2CppClass *)source;
  bVar10 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar10 == '\0') {
label_03b99ec5:
    unaff_R13 = (Il2CppClass *)&MethodInfo_GisketchSectionNavigator_GetComponentInChildren_Gisketch;
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
    while( true ) {
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar22 = (MethodInfo *)0x0;
      pIVar18 = pIVar11;
      bVar10 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)pIVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar10 == '\0') {
        return (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)0x0;
      }
      if (pIVar11 == (Il2CppClass *)0x0) break;
      unaff_R15 = (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)
                  UnityEngine_Component__GetComponentInChildren_object_
                            ((UnityEngine_Component_o *)pIVar11,1,MethodInfo_GisketchSectionNavigator_GetComponentInChildren_Gisketch);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar10 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)unaff_R15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar10 != '\0') {
        return unaff_R15;
      }
      pIVar11 = (Il2CppClass *)
                UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)pIVar11,(MethodInfo *)0x0);
      iVar1 = *(int *)(TypeInfo_Object + 0xe4);
    }
  }
  else if (source != (UnityEngine_GameObject_o *)0x0) {
    pIVar11 = (Il2CppClass *)UnityEngine_GameObject__get_transform(source,(MethodInfo *)0x0);
    goto label_03b99ec5;
  }
  UVar14.x = 0.0;
  UVar14.y = 0.0;
  auVar34 = il2cpp_runtime_helper_022b2c90();
  uStack_50 = auVar34._0_8_;
  uVar21 = auVar34._8_8_ & 0xffffffff;
  pMVar27 = pMVar22;
  UStack_48 = UVar14;
  pIStack_40 = (Il2CppClass *)0x0;
  pGStack_38 = unaff_R15;
  if (g_data_057a9f17 == '\0') {
    pIStack_58 = (Il2CppClass *)0x3b99f95;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9f17 = '\x01';
  }
  pIStack_58 = (Il2CppClass *)0x3b99fa4;
  pIVar11 = pIVar18;
  Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Resolve
            ((Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)pIVar18,pMVar27);
  pUVar12 = (pIVar18->_1).byval_arg.data;
  pIVar26 = unaff_RBP;
  if (pUVar12 != (UnityEngine_UI_Image_o *)0x0) {
    pIVar26 = (Il2CppClass *)0x0;
    do {
      uVar29 = *(uint *)&(pUVar12->fields).m_CancellationTokenSource;
      if ((long)(int)uVar29 <= (long)pIVar26) {
        return (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)pUVar12;
      }
      if ((Il2CppClass *)(ulong)uVar29 <= pIVar26) goto label_03b9a0a0;
      pIVar11 = (Il2CppClass *)(&(pUVar12->fields).m_Material)[(long)pIVar26];
      in_RCX.x = 0.0;
      in_RCX.y = 0.0;
      pIStack_58 = (Il2CppClass *)0x3b99fdc;
      pMVar27 = pMVar22;
      bVar10 = System_String__Equals_3af50f0
                         ((System_String_o *)pIVar11,(System_String_o *)pMVar22,5,(MethodInfo *)0x0);
      pUVar12 = (UnityEngine_UI_Image_o *)CONCAT44(extraout_var,bVar10);
      if ((char)bVar10 != '\0') goto label_03b99ff2;
      pIVar26 = (Il2CppClass *)((long)&(pIVar26->_1).image + 1);
      pUVar12 = (pIVar18->_1).byval_arg.data;
    } while (pUVar12 != (UnityEngine_UI_Image_o *)0x0);
  }
  do {
    while( true ) {
      pIStack_58 = (Il2CppClass *)0x3b99ff2;
      pUVar12 = (UnityEngine_UI_Image_o *)il2cpp_runtime_helper_022b2c90();
label_03b99ff2:
      fVar30 = SUB84(pIVar26,0);
      if (((int)fVar30 < 0) || ((((UnityEngine_Color_o *)&(pIVar18->_1).parent)->fields).r == fVar30)) {
        return (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)pUVar12;
      }
      pMVar27 = (MethodInfo *)((ulong)pIVar26 & 0xffffffff);
      pIStack_58 = (Il2CppClass *)0x3b9a00b;
      pIVar11 = pIVar18;
      Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__SetActive
                ((Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)pIVar18,(int32_t)fVar30,
                 (uint)*(byte *)&(pIVar18->_1).this_arg.data,(MethodInfo *)in_RCX);
      if (*(char *)&(pIVar18->_1).this_arg.data == '\0') break;
      pMVar22 = *(MethodInfo **)&(pIVar18->_1).this_arg.bits;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        pIStack_58 = (Il2CppClass *)0x3b9a02e;
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar27 = (MethodInfo *)0x0;
      pIStack_58 = (Il2CppClass *)0x3b9a03a;
      bVar10 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)pMVar22,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar10 == '\0') {
        return (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)
               (UnityEngine_UI_Image_o *)CONCAT44(extraout_var_00,bVar10);
      }
      pIStack_58 = (Il2CppClass *)0x3b9a046;
      Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__RefreshSeparateLayout
                ((Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)pIVar18,pMVar27);
      pUVar3 = *(UnityEngine_UI_ScrollRect_o **)&(pIVar18->_1).this_arg.bits;
      if (pUVar3 != (UnityEngine_UI_ScrollRect_o *)0x0) {
        UnityEngine_UI_ScrollRect__set_verticalNormalizedPosition(pUVar3,1.0,(MethodInfo *)0x0);
        return extraout_RAX;
      }
    }
    UVar14 = ((UnityEngine_Vector2_o *)&(pIVar18->_1).element_class)->fields;
  } while (UVar14 == (UnityEngine_Vector2_Fields)0x0);
  if ((uint)*(float *)((long)UVar14 + 0x18) <= (uint)fVar30) {
label_03b9a0a0:
    pIStack_58 = (Il2CppClass *)0x3b9a0a5;
    uStack_88 = il2cpp_runtime_helper_022b2ca0();
    puStack_78 = &TypeInfo_Object;
    pMStack_80 = pMVar22;
    pIStack_70 = unaff_R13;
    uStack_68 = uVar21;
    pIStack_60 = pIVar18;
    pIStack_58 = pIVar26;
    if (g_data_057a9f18 == '\0') {
      pUStack_90 = (UnityEngine_Vector2_o *)0x3b9a0d3;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchBrushButtonFeedback);
      pUStack_90 = (UnityEngine_Vector2_o *)0x3b9a0df;
      il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchBrushButtonFeedback_ComponentInNamedChild_Gisket);
      pUStack_90 = (UnityEngine_Vector2_o *)0x3b9a0eb;
      il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_ComponentInNamedChild_RectTransform);
      pUStack_90 = (UnityEngine_Vector2_o *)0x3b9a0f7;
      il2cpp_runtime_helper_023445d0(&MethodInfo_ScrollRect_ComponentInNamedChild_ScrollRect);
      pUStack_90 = (UnityEngine_Vector2_o *)0x3b9a103;
      il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransform);
      pUStack_90 = (UnityEngine_Vector2_o *)0x3b9a10f;
      il2cpp_runtime_helper_023445d0(&"brush-side-panel-button-");
      pUStack_90 = (UnityEngine_Vector2_o *)0x3b9a11b;
      il2cpp_runtime_helper_023445d0(&"-scroll");
      g_data_057a9f18 = '\x01';
    }
    pUStack_90 = (UnityEngine_Vector2_o *)0x3b9a12a;
    bVar10 = Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__IsResolved
                       ((Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)pIVar11,pMVar27);
    pUVar12 = (UnityEngine_UI_Image_o *)CONCAT44(extraout_var_01,bVar10);
    if ((char)bVar10 == '\0') {
      pUStack_90 = (UnityEngine_Vector2_o *)0x3b9a13c;
      __this_01 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pIVar11,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_Transform_o *)0x0) {
        pUStack_90 = (UnityEngine_Vector2_o *)0x3b9a14f;
        pIVar18 = (Il2CppClass *)UnityEngine_Transform__get_parent(__this_01,(MethodInfo *)0x0);
        pUStack_90 = (UnityEngine_Vector2_o *)0x3b9a167;
        name = System_String__Concat_3ae5ba0
                         ((System_String_o *)*(UnityEngine_UI_Image_o **)&(pIVar11->_1).byval_arg.bits,
                          "-scroll",(MethodInfo *)0x0);
        pUStack_90 = (UnityEngine_Vector2_o *)0x3b9a17c;
        pUVar13 = (UnityEngine_RectTransform_o *)
                  Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__ComponentInNamedChild_object_
                            ((UnityEngine_Transform_o *)pIVar18,name,MethodInfo_ScrollRect_ComponentInNamedChild_ScrollRect);
        *(UnityEngine_RectTransform_o **)&(pIVar11->_1).this_arg.bits = pUVar13;
        pUStack_90 = (UnityEngine_Vector2_o *)0x3b9a18c;
        il2cpp_runtime_helper_022b4080(&(pIVar11->_1).this_arg.bits,pUVar13);
        pUVar12 = (pIVar11->_1).byval_arg.data;
        if (pUVar12 != (UnityEngine_UI_Image_o *)0x0) {
          pUStack_90 = (UnityEngine_Vector2_o *)0x3b9a1ab;
          UVar14 = (UnityEngine_Vector2_Fields)
                   il2cpp_runtime_helper_022b2a40(TypeInfo_RectTransform,*(undefined4 *)&(pUVar12->fields).m_CancellationTokenSource);
          pUVar8 = (UnityEngine_Vector2_o *)&(pIVar11->_1).element_class;
          ((UnityEngine_Vector2_o *)&(pIVar11->_1).element_class)->fields = UVar14;
          pUStack_90 = (UnityEngine_Vector2_o *)0x3b9a1be;
          il2cpp_runtime_helper_022b4080(pUVar8,UVar14);
          pUVar12 = (pIVar11->_1).byval_arg.data;
          if (pUVar12 != (UnityEngine_UI_Image_o *)0x0) {
            pUStack_90 = (UnityEngine_Vector2_o *)0x3b9a1dd;
            pIVar15 = (Il2CppClass *)
                      il2cpp_runtime_helper_022b2a40(TypeInfo_GisketchBrushButtonFeedback,*(undefined4 *)&(pUVar12->fields).m_CancellationTokenSource);
            pIVar26 = (Il2CppClass *)&(pIVar11->_1).castClass;
            *(Il2CppClass **)&((UnityEngine_Color_o *)&(pIVar11->_1).castClass)->fields = pIVar15;
            pUStack_90 = (UnityEngine_Vector2_o *)0x3b9a1ed;
            il2cpp_runtime_helper_022b4080();
            pUVar12 = (pIVar11->_1).byval_arg.data;
            if (pUVar12 != (UnityEngine_UI_Image_o *)0x0) {
              unaff_RBP = (Il2CppClass *)0x0;
              do {
                uVar29 = *(uint *)&(pUVar12->fields).m_CancellationTokenSource;
                if ((long)(int)uVar29 <= (long)unaff_RBP) {
                  return (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)pUVar12;
                }
                name_00 = pIVar15;
                if ((Il2CppClass *)(ulong)uVar29 <= unaff_RBP) {
label_03b9a31c:
                  pUStack_90 = (UnityEngine_Vector2_o *)0x3b9a321;
                  il2cpp_runtime_helper_022b2ca0();
                  pvVar16 = (pIVar26->_1).byval_arg.data;
                  pMStack_a0 = pMVar22;
                  pIStack_98 = pIVar18;
                  pUStack_90 = pUVar8;
                  if (pvVar16 == (void *)0x0) goto label_03b9a385;
                  UVar23.x = 0.0;
                  UVar23.y = 0.0;
                  pIVar15 = name_00;
                  unaff_R13 = pIVar26;
                  goto label_03b9a350;
                }
                UVar28 = pUVar8->fields;
                pMVar22 = (MethodInfo *)(&(pUVar12->fields).m_Material)[(long)unaff_RBP];
                if (g_data_057a9f1e == '\0') {
                  pUStack_90 = (UnityEngine_Vector2_o *)0x3b9a235;
                  il2cpp_runtime_helper_023445d0(&"-section-");
                  g_data_057a9f1e = '\x01';
                }
                pUStack_90 = (UnityEngine_Vector2_o *)0x3b9a254;
                name_00 = (Il2CppClass *)
                          System_String__Concat_3af7150
                                    ((System_String_o *)
                                     *(UnityEngine_UI_Image_o **)&(pIVar11->_1).byval_arg.bits,"-section-",
                                     (System_String_o *)pMVar22,(MethodInfo *)0x0);
                pUStack_90 = (UnityEngine_Vector2_o *)0x3b9a269;
                pIVar26 = pIVar18;
                pIVar15 = (Il2CppClass *)
                          Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__ComponentInNamedChild_object_
                                    ((UnityEngine_Transform_o *)pIVar18,(System_String_o *)name_00,
                                     MethodInfo_RectTransform_ComponentInNamedChild_RectTransform);
                if (UVar28 == (UnityEngine_Vector2_Fields)0x0) break;
                if ((Il2CppClass *)(ulong)*(uint *)((long)UVar28 + 0x18) <= unaff_RBP) goto label_03b9a31c;
                pIVar26 = (Il2CppClass *)((undefined8 *)((long)UVar28 + (long)unaff_RBP * 8) + 4);
                ((undefined8 *)((long)UVar28 + 0x20))[(long)unaff_RBP] = pIVar15;
                pUStack_90 = (UnityEngine_Vector2_o *)0x3b9a295;
                il2cpp_runtime_helper_022b4080();
                pUVar12 = (pIVar11->_1).byval_arg.data;
                if (pUVar12 == (UnityEngine_UI_Image_o *)0x0) break;
                name_00 = pIVar15;
                if ((Il2CppClass *)(ulong)*(uint *)&(pUVar12->fields).m_CancellationTokenSource <= unaff_RBP)
                goto label_03b9a31c;
                pMVar22 = *(MethodInfo **)&((UnityEngine_Color_o *)&(pIVar11->_1).castClass)->fields;
                pUStack_90 = (UnityEngine_Vector2_o *)0x3b9a2c0;
                name_00 = (Il2CppClass *)
                          System_String__Concat_3ae5ba0
                                    ("brush-side-panel-button-",
                                     (System_String_o *)(&(pUVar12->fields).m_Material)[(long)unaff_RBP],
                                     (MethodInfo *)0x0);
                pUStack_90 = (UnityEngine_Vector2_o *)0x3b9a2d5;
                pIVar26 = pIVar18;
                pIVar15 = (Il2CppClass *)
                          Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__ComponentInNamedChild_object_
                                    ((UnityEngine_Transform_o *)pIVar18,(System_String_o *)name_00,
                                     MethodInfo_GisketchBrushButtonFeedback_ComponentInNamedChild_Gisket);
                if (pMVar22 == (MethodInfo *)0x0) break;
                if ((Il2CppClass *)(ulong)*(uint *)&pMVar22->name <= unaff_RBP) goto label_03b9a31c;
                pIVar26 = (Il2CppClass *)(&pMVar22->klass + (long)unaff_RBP);
                (&pMVar22->klass)[(long)unaff_RBP] = pIVar15;
                pUStack_90 = (UnityEngine_Vector2_o *)0x3b9a2f7;
                il2cpp_runtime_helper_022b4080();
                unaff_RBP = (Il2CppClass *)((long)&(unaff_RBP->_1).image + 1);
                pUVar12 = (pIVar11->_1).byval_arg.data;
              } while (pUVar12 != (UnityEngine_UI_Image_o *)0x0);
            }
          }
        }
      }
      pUStack_90 = (UnityEngine_Vector2_o *)0x3b9a30d;
      pUVar12 = (UnityEngine_UI_Image_o *)il2cpp_runtime_helper_022b2c90();
    }
    return (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)pUVar12;
  }
  method_00 = *(Il2CppClass **)((long)UVar14 + 0x20 + (long)pIVar26 * 8);
  uVar21 = auVar34._8_8_ & 0xff;
  puVar25 = (undefined8 *)&stack0xffffffffffffffd8;
  UVar24 = UStack_48;
  name_00 = pIStack_40;
  root = pGStack_38;
  goto Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__ScrollTo;
  while( true ) {
    if ((ulong)in_RCX <= (ulong)UVar23) {
      pIStack_a8 = (Il2CppClass *)0x3b9a39c;
      auVar34 = il2cpp_runtime_helper_022b2ca0();
      pGVar17 = auVar34._0_8_;
      puVar25 = &uStack_d8;
      UVar24 = (UnityEngine_Vector2_Fields)(auVar34._8_8_ & 0xffffffff);
      root = (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)((ulong)pIVar15 & 0xffffffff);
      method_00 = pIVar15;
      __this_03 = unaff_R13;
      uStack_d8 = pGVar17;
      UStack_d0 = UVar23;
      UStack_c8 = UVar28;
      pIStack_c0 = pIVar11;
      pIStack_b8 = name_00;
      pIStack_b0 = pIVar26;
      pIStack_a8 = unaff_RBP;
      if (g_data_057a9f1a == '\0') {
        __this_03 = (Il2CppClass *)&TypeInfo_Object;
        pGVar17 = (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)il2cpp_runtime_helper_023445d0();
        g_data_057a9f1a = '\x01';
      }
      uVar29 = (uint)pIVar15;
      if ((int)uVar29 < 0) {
        return pGVar17;
      }
      pvVar16 = (unaff_R13->_1).byval_arg.data;
      pIVar18 = __this_03;
      if (pvVar16 == (void *)0x0) goto label_03b9a5ca;
      pGVar17 = *(Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o **)((long)pvVar16 + 0x18);
      if ((int)pGVar17 <= (int)uVar29) {
        return pGVar17;
      }
      uStack_d8 = (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)
                  CONCAT44(auVar34._8_4_,(undefined4)uStack_d8);
      *(uint *)&(unaff_R13->_1).parent = uVar29;
      if ((int)pGVar17 < 1) goto label_03b9a54e;
      UVar28 = (UnityEngine_Vector2_Fields)((ulong)pIVar15 & 0xffffffff);
      UVar24.x = 0.0;
      UVar24.y = 0.0;
      name_00 = (Il2CppClass *)&TypeInfo_Object;
      goto label_03b9a410;
    }
    unaff_R13 = *(Il2CppClass **)((long)pvVar16 + (long)UVar23 * 8 + 0x20);
    pIStack_a8 = (Il2CppClass *)0x3b9a374;
    pIVar15 = name_00;
    bVar10 = System_String__Equals_3af50f0
                       ((System_String_o *)unaff_R13,(System_String_o *)name_00,5,(MethodInfo *)0x0);
    if ((char)bVar10 != '\0') goto label_03b9a38f;
    UVar23 = (UnityEngine_Vector2_Fields)((long)UVar23 + 1);
    pvVar16 = (pIVar26->_1).byval_arg.data;
    if (pvVar16 == (void *)0x0) break;
label_03b9a350:
    in_RCX.y = 0.0;
    in_RCX.x = (float)*(uint *)((long)pvVar16 + 0x18);
    if ((long)(int)*(uint *)((long)pvVar16 + 0x18) <= (long)UVar23) goto label_03b9a38a;
  }
label_03b9a385:
  pIStack_a8 = (Il2CppClass *)0x3b9a38a;
  il2cpp_runtime_helper_022b2c90();
label_03b9a38a:
  UVar23.x = -NAN;
  UVar23.y = 0.0;
label_03b9a38f:
  return (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)((ulong)UVar23 & 0xffffffff);
  while( true ) {
    pIVar11 = (unaff_R13->_1).castClass;
    if ((pIVar11 != (Il2CppClass *)0x0) &&
       (uVar2 = *(uint *)&(pIVar11->_1).namespaze, in_RCX.y = 0.0, in_RCX.x = (float)uVar2,
       (long)UVar24 < (long)(int)uVar2)) {
      pIVar18 = __this_03;
      if ((ulong)in_RCX <= (ulong)UVar24) goto label_03b9a5cf;
      unaff_RBP = (&(pIVar11->_1).byval_arg.data)[(long)UVar24];
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      method_00 = (Il2CppClass *)0x0;
      __this_03 = unaff_RBP;
      bVar10 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)unaff_RBP,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar10 != '\0') {
        pIVar11 = (unaff_R13->_1).castClass;
        pIVar18 = __this_03;
        if (pIVar11 == (Il2CppClass *)0x0) goto label_03b9a5ca;
        in_RCX.y = 0.0;
        in_RCX.x = (float)*(uint *)&(pIVar11->_1).namespaze;
        if ((ulong)in_RCX <= (ulong)UVar24) goto label_03b9a5cf;
        __this_03 = (&(pIVar11->_1).byval_arg.data)[(long)UVar24];
        pIVar18 = __this_03;
        if (__this_03 == (Il2CppClass *)0x0) goto label_03b9a5ca;
        *(bool *)((long)&(__this_03->_2).typeHierarchy + 2) = UVar28 == UVar24;
        Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__Refresh
                  ((Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)__this_03,
                   (MethodInfo *)method_00);
      }
    }
    pvVar16 = (unaff_R13->_1).byval_arg.data;
    pIVar18 = __this_03;
    if (pvVar16 == (void *)0x0) goto label_03b9a5ca;
    UVar24 = (UnityEngine_Vector2_Fields)((long)UVar24 + 1);
    pGVar17 = (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)(long)*(int *)((long)pvVar16 + 0x18);
    if ((long)pGVar17 <= (long)UVar24) break;
label_03b9a410:
    pIVar11 = (unaff_R13->_1).element_class;
    if ((pIVar11 != (Il2CppClass *)0x0) &&
       (uVar2 = *(uint *)&(pIVar11->_1).namespaze, in_RCX.y = 0.0, in_RCX.x = (float)uVar2,
       (long)UVar24 < (long)(int)uVar2)) {
      pIVar18 = __this_03;
      if ((ulong)in_RCX <= (ulong)UVar24) goto label_03b9a5cf;
      unaff_RBP = (&(pIVar11->_1).byval_arg.data)[(long)UVar24];
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      method_00 = (Il2CppClass *)0x0;
      __this_03 = unaff_RBP;
      bVar10 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)unaff_RBP,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (((char)bVar10 != '\0') && (*(char *)&(unaff_R13->_1).this_arg.data != '\0')) {
        pIVar11 = (unaff_R13->_1).element_class;
        pIVar18 = __this_03;
        if (pIVar11 == (Il2CppClass *)0x0) goto label_03b9a5ca;
        in_RCX.y = 0.0;
        in_RCX.x = (float)*(uint *)&(pIVar11->_1).namespaze;
        if ((ulong)in_RCX <= (ulong)UVar24) goto label_03b9a5cf;
        pIVar18 = (&(pIVar11->_1).byval_arg.data)[(long)UVar24];
        if (pIVar18 == (Il2CppClass *)0x0) goto label_03b9a5ca;
        method_00 = (Il2CppClass *)0x0;
        __this_03 = (Il2CppClass *)
                    UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pIVar18,(MethodInfo *)0x0);
        if (__this_03 == (Il2CppClass *)0x0) goto label_03b9a5ca;
        method_00 = (Il2CppClass *)(ulong)(UVar28 == UVar24);
        UnityEngine_GameObject__SetActive
                  ((UnityEngine_GameObject_o *)__this_03,(uint)(UVar28 == UVar24),(MethodInfo *)0x0);
      }
    }
  }
label_03b9a54e:
  if (uStack_d8._4_1_ == '\0') {
    return pGVar17;
  }
  pIVar11 = (unaff_R13->_1).element_class;
  if (pIVar11 == (Il2CppClass *)0x0) {
    return (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)0x0;
  }
  if (uVar29 < *(uint *)&(pIVar11->_1).namespaze) {
    UVar24 = (UnityEngine_Vector2_Fields)(long)(int)uVar29;
    name_00 = (&(pIVar11->_1).byval_arg.data)[(long)UVar24];
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method_00 = (Il2CppClass *)0x0;
    pIVar18 = name_00;
    bVar10 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)name_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar10 == '\0') {
      return (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)CONCAT44(extraout_var_02,bVar10);
    }
    pIVar11 = (unaff_R13->_1).element_class;
    if (pIVar11 == (Il2CppClass *)0x0) {
label_03b9a5ca:
      il2cpp_runtime_helper_022b2c90();
    }
    else if (uVar29 < *(uint *)&(pIVar11->_1).namespaze) {
      Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__AnimateSection
                ((&(pIVar11->_1).byval_arg.data)[(long)UVar24],(MethodInfo *)method_00);
      return extraout_RAX_00;
    }
  }
label_03b9a5cf:
  il2cpp_runtime_helper_022b2ca0();
  uVar21 = extraout_RDX;
Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__ScrollTo:
  *(Il2CppClass **)((long)puVar25 + -8) = unaff_RBP;
  *(Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o **)((long)puVar25 + -0x10) = root;
  *(Il2CppClass **)((long)puVar25 + -0x18) = name_00;
  *(Il2CppClass **)((long)puVar25 + -0x20) = unaff_R13;
  *(UnityEngine_Vector2_Fields *)((long)puVar25 + -0x28) = UVar28;
  *(UnityEngine_Vector2_Fields *)((long)puVar25 + -0x30) = UVar24;
  if (g_data_057a9f1c == '\0') {
    *(undefined8 *)((long)puVar25 + -0xa0) = 0x3b9a610;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    *(undefined8 *)((long)puVar25 + -0xa0) = 0x3b9a61c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOGetter_float);
    *(undefined8 *)((long)puVar25 + -0xa0) = 0x3b9a628;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOSetter_float);
    *(undefined8 *)((long)puVar25 + -0xa0) = 0x3b9a634;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOTween);
    *(undefined8 *)((long)puVar25 + -0xa0) = 0x3b9a640;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotionDriver);
    *(undefined8 *)((long)puVar25 + -0xa0) = 0x3b9a64c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ScrollTo_b__22_0);
    *(undefined8 *)((long)puVar25 + -0xa0) = 0x3b9a658;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ScrollTo_b__22_1);
    *(undefined8 *)((long)puVar25 + -0xa0) = 0x3b9a664;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    *(undefined8 *)((long)puVar25 + -0xa0) = 0x3b9a670;
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
    *(undefined8 *)((long)puVar25 + -0xa0) = 0x3b9a67c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TweenerCore_3_System_Single_System_Single_DG_Tweening_Pl);
    *(undefined8 *)((long)puVar25 + -0xa0) = 0x3b9a688;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TweenerCore_3_System_Single_System_Single_DG_Tweening_Pl);
    g_data_057a9f1c = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)((long)puVar25 + -0xa0) = 0x3b9a6a8;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)puVar25 + -0xa0) = 0x3b9a6b4;
  bVar10 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)method_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pDVar19 = (DG_Tweening_Tween_o *)CONCAT44(extraout_var_03,bVar10);
  if ((char)bVar10 == '\0') {
    pUVar13 = *(UnityEngine_RectTransform_o **)&(pIVar18->_1).this_arg.bits;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)puVar25 + -0xa0) = 0x3b9a6d3;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)puVar25 + -0xa0) = 0x3b9a6df;
    __this_04 = pUVar13;
    bVar10 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    pDVar19 = (DG_Tweening_Tween_o *)CONCAT44(extraout_var_04,bVar10);
    if ((char)bVar10 == '\0') {
      lVar4 = *(long *)&(pIVar18->_1).this_arg.bits;
      if (lVar4 != 0) {
        pUVar13 = *(UnityEngine_RectTransform_o **)(lVar4 + 0x40);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          *(undefined8 *)((long)puVar25 + -0xa0) = 0x3b9a70b;
          il2cpp_runtime_helper_02337ed0();
        }
        *(undefined8 *)((long)puVar25 + -0xa0) = 0x3b9a717;
        __this_04 = pUVar13;
        bVar10 = UnityEngine_Object__op_Equality
                           ((UnityEngine_Object_o *)pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar10 != '\0') {
          return (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)
                 (DG_Tweening_Tween_o *)CONCAT44(extraout_var_05,bVar10);
        }
        lVar4 = *(long *)&(pIVar18->_1).this_arg.bits;
        if (lVar4 != 0) {
          pUVar13 = *(UnityEngine_RectTransform_o **)(lVar4 + 0x20);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            *(undefined8 *)((long)puVar25 + -0xa0) = 0x3b9a743;
            il2cpp_runtime_helper_02337ed0();
          }
          *(undefined8 *)((long)puVar25 + -0xa0) = 0x3b9a74f;
          bVar10 = UnityEngine_Object__op_Equality
                             ((UnityEngine_Object_o *)pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar10 != '\0') {
            return (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)
                   (DG_Tweening_Tween_o *)CONCAT44(extraout_var_06,bVar10);
          }
          __this_04 = (UnityEngine_RectTransform_o *)0x0;
          *(undefined8 *)((long)puVar25 + -0xa0) = 0x3b9a75e;
          UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
          lVar4 = *(long *)&(pIVar18->_1).this_arg.bits;
          if ((lVar4 != 0) &&
             (__this_04 = *(UnityEngine_RectTransform_o **)(lVar4 + 0x20),
             __this_04 != (UnityEngine_RectTransform_o *)0x0)) {
            *(undefined8 *)((long)puVar25 + -0xa0) = 0x3b9a780;
            UVar35 = UnityEngine_RectTransform__get_rect(__this_04,(MethodInfo *)0x0);
            lVar4 = *(long *)&(pIVar18->_1).this_arg.bits;
            if ((lVar4 != 0) &&
               (__this_04 = *(UnityEngine_RectTransform_o **)(lVar4 + 0x40),
               __this_04 != (UnityEngine_RectTransform_o *)0x0)) {
              *(float *)((long)puVar25 + -0x98) = UVar35.fields.m_Height;
              *(float *)((long)puVar25 + -0x94) = UVar35.fields.m_Height;
              *(undefined4 *)((long)puVar25 + -0x90) = in_XMM1_Dc;
              *(undefined4 *)((long)puVar25 + -0x8c) = in_XMM1_Dd;
              *(undefined8 *)((long)puVar25 + -0xa0) = 0x3b9a7aa;
              UVar35 = UnityEngine_RectTransform__get_rect(__this_04,(MethodInfo *)0x0);
              uVar31 = 0;
              uVar32 = 0;
              fVar30 = 0.0;
              if (0.0 <= *(float *)((long)puVar25 + -0x98) - UVar35.fields.m_Height) {
                fVar30 = *(float *)((long)puVar25 + -0x98) - UVar35.fields.m_Height;
              }
              if (fVar30 <= 0.01) {
                return (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)extraout_RAX_01;
              }
              *(float *)((long)puVar25 + -0x98) = fVar30;
              lVar4 = *(long *)&(pIVar18->_1).this_arg.bits;
              if (lVar4 != 0) {
                root = *(Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o **)(lVar4 + 0x40);
                if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
                  *(undefined8 *)((long)puVar25 + -0xa0) = 0x3b9a7fd;
                  il2cpp_runtime_helper_02337ed0();
                }
                __this_04 = (UnityEngine_RectTransform_o *)((long)puVar25 + -0x48);
                in_RCX.x = 0.0;
                in_RCX.y = 0.0;
                *(undefined8 *)((long)puVar25 + -0xa0) = 0x3b9a80f;
                UnityEngine_RectTransformUtility__CalculateRelativeRectTransformBounds
                          ((UnityEngine_Bounds_o *)__this_04,(UnityEngine_Transform_o *)root,
                           (UnityEngine_Transform_o *)method_00,(MethodInfo *)0x0);
                lVar4 = *(long *)&(pIVar18->_1).this_arg.bits;
                if (lVar4 != 0) {
                  __this = *(UnityEngine_RectTransform_o **)(lVar4 + 0x40);
                  __this_04 = (UnityEngine_RectTransform_o *)0x0;
                  if (__this != (UnityEngine_RectTransform_o *)0x0) {
                    *(undefined8 *)((long)puVar25 + -0x68) = *(undefined8 *)((long)puVar25 + -0x48);
                    *(undefined8 *)((long)puVar25 + -0x60) = 0;
                    *(undefined8 *)((long)puVar25 + -0x58) = *(undefined8 *)((long)puVar25 + -0x3c);
                    *(undefined8 *)((long)puVar25 + -0x50) = 0;
                    *(undefined8 *)((long)puVar25 + -0xa0) = 0x3b9a847;
                    UVar35 = UnityEngine_RectTransform__get_rect(__this,(MethodInfo *)0x0);
                    auVar34._8_4_ = extraout_XMM0_Dc;
                    auVar34._0_8_ = UVar35.fields._0_8_;
                    auVar34._12_4_ = extraout_XMM0_Dd;
                    *(undefined1 (*) [16])((long)puVar25 + -0x78) = auVar34;
                    auVar7._8_4_ = uVar31;
                    auVar7._0_8_ = UVar35.fields._8_8_;
                    auVar7._12_4_ = uVar32;
                    *(undefined1 (*) [16])((long)puVar25 + -0x88) = auVar7;
                    pUVar3 = *(UnityEngine_UI_ScrollRect_o **)&(pIVar18->_1).this_arg.bits;
                    __this_04 = (UnityEngine_RectTransform_o *)0x0;
                    if (pUVar3 != (UnityEngine_UI_ScrollRect_o *)0x0) {
                      *(undefined8 *)((long)puVar25 + -0xa0) = 0x3b9a866;
                      fVar30 = UnityEngine_UI_ScrollRect__get_verticalNormalizedPosition
                                         (pUVar3,(MethodInfo *)0x0);
                      plVar5 = *(long **)&(pIVar18->_1).this_arg.bits;
                      __this_04 = (UnityEngine_RectTransform_o *)0x0;
                      if (plVar5 != (long *)0x0) {
                        fVar30 = fVar30 - ((*(float *)((long)puVar25 + -0x74) +
                                           *(float *)((long)puVar25 + -0x84)) -
                                          (*(float *)((long)puVar25 + -0x54) +
                                          *(float *)((long)puVar25 + -100))) /
                                          *(float *)((long)puVar25 + -0x98);
                        fVar33 = 1.0;
                        if (fVar30 <= 1.0) {
                          fVar33 = fVar30;
                        }
                        *(undefined1 (*) [16])((long)puVar25 + -0x98) =
                             ZEXT416(-(uint)(0.0 <= fVar30) & (uint)fVar33);
                        pcVar6 = *(code **)(*plVar5 + 0x3c8);
                        *(undefined8 *)((long)puVar25 + -0xa0) = 0x3b9a8da;
                        (*pcVar6)();
                        pIVar11 = (pIVar18->_1).declaringType;
                        if (pIVar11 != (Il2CppClass *)0x0) {
                          *(undefined8 *)((long)puVar25 + -0xa0) = 0x3b9a8ed;
                          DG_Tweening_TweenExtensions__Kill
                                    ((DG_Tweening_Tween_o *)pIVar11,0,(MethodInfo *)0x0);
                        }
                        if ((char)(uVar21 & 0xffffffff) == '\0') {
                          if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
                            *(undefined8 *)((long)puVar25 + -0xa0) = 0x3b9a90e;
                            il2cpp_runtime_helper_02337ed0();
                          }
                          *(undefined8 *)((long)puVar25 + -0xa0) = 0x3b9a915;
                          bVar10 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
                          if ((char)bVar10 != '\0') {
                            ppIVar9 = &(pIVar18->_1).declaringType;
                            *(undefined8 *)((long)puVar25 + -0xa0) = 0x3b9a931;
                            getter = (DG_Tweening_Core_DOGetter_float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_DOGetter_float);
                            *(undefined8 *)((long)puVar25 + -0xa0) = 0x3b9a94b;
                            DG_Tweening_Core_DOGetter_float____ctor();
                            *(undefined8 *)((long)puVar25 + -0xa0) = 0x3b9a95a;
                            setter = (DG_Tweening_Core_DOSetter_float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_DOSetter_float);
                            *(undefined8 *)((long)puVar25 + -0xa0) = 0x3b9a974;
                            DG_Tweening_Core_DOSetter_float____ctor();
                            if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
                              *(undefined8 *)((long)puVar25 + -0xa0) = 0x3b9a98c;
                              il2cpp_runtime_helper_02337ed0();
                            }
                            *(undefined8 *)((long)puVar25 + -0xa0) = 0x3b9a9a5;
                            t = DG_Tweening_DOTween__To
                                          (getter,setter,*(float *)((long)puVar25 + -0x98),0.22,
                                           (MethodInfo *)0x0);
                            *(undefined8 *)((long)puVar25 + -0xa0) = 0x3b9a9bc;
                            t_00 = DG_Tweening_TweenSettingsExtensions__SetEase_object_
                                             ((Il2CppObject *)t,9,MethodInfo_TweenerCore_3_System_Single_System_Single_DG_Tweening_Pl);
                            *(undefined8 *)((long)puVar25 + -0xa0) = 0x3b9a9d3;
                            pIVar18 = (Il2CppClass *)
                                      DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                                                (t_00,1,MethodInfo_TweenerCore_3_System_Single_System_Single_DG_Tweening_Pl);
                            *ppIVar9 = pIVar18;
                            *(undefined8 *)((long)puVar25 + -0xa0) = 0x3b9a9e1;
                            il2cpp_runtime_helper_022b4080(ppIVar9);
                            pIVar18 = *ppIVar9;
                            if (*(int *)(TypeInfo_GisketchMotionDriver + 0xe4) == 0) {
                              *(undefined8 *)((long)puVar25 + -0xa0) = 0x3b9a9fc;
                              il2cpp_runtime_helper_02337ed0();
                            }
                            *(undefined8 *)((long)puVar25 + -0xa0) = 0x3b9aa08;
                            pDVar19 = Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Track
                                                ((DG_Tweening_Tween_o *)pIVar18,0,(MethodInfo *)0x0);
                            return (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)pDVar19;
                          }
                        }
                        pUVar3 = *(UnityEngine_UI_ScrollRect_o **)&(pIVar18->_1).this_arg.bits;
                        __this_04 = (UnityEngine_RectTransform_o *)0x0;
                        if (pUVar3 != (UnityEngine_UI_ScrollRect_o *)0x0) {
                          *(undefined8 *)((long)puVar25 + -0xa0) = 0x3b9aa1f;
                          UnityEngine_UI_ScrollRect__set_verticalNormalizedPosition
                                    (pUVar3,*(float *)((long)puVar25 + -0x98),(MethodInfo *)0x0);
                          return (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)extraout_RAX_02;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      *(undefined8 *)((long)puVar25 + -0xa0) = 0x3b9aa33;
      uVar20 = il2cpp_runtime_helper_022b2c90();
      *(Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o **)((long)puVar25 + -0xa0) = root;
      *(ulong *)((long)puVar25 + -0xa8) = uVar21 & 0xffffffff;
      *(Il2CppClass **)((long)puVar25 + -0xb0) = pIVar18;
      *(UnityEngine_RectTransform_o **)((long)puVar25 + -0xb8) = pUVar13;
      *(undefined8 *)((long)puVar25 + -0xc0) = uVar20;
      if (g_data_057a9f1b == '\0') {
        *(undefined8 *)((long)puVar25 + -200) = 0x3b9aa60;
        il2cpp_runtime_helper_023445d0(&MethodInfo_FlexLayout_GetComponent_FlexLayout);
        *(undefined8 *)((long)puVar25 + -200) = 0x3b9aa6c;
        il2cpp_runtime_helper_023445d0(&TypeInfo_LayoutRebuilder);
        *(undefined8 *)((long)puVar25 + -200) = 0x3b9aa78;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057a9f1b = '\x01';
      }
      x = __this_04[2].monitor;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)puVar25 + -200) = 0x3b9aa9c;
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar22 = (MethodInfo *)0x0;
      *(undefined8 *)((long)puVar25 + -200) = 0x3b9aaa8;
      __this_05 = x;
      bVar10 = UnityEngine_Object__op_Equality
                         ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar10 != '\0') {
        return (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)CONCAT44(extraout_var_07,bVar10);
      }
      if (__this_04[2].monitor != (void *)0x0) {
        x = *(Gilzoide_FlexUi_FlexLayout_o **)((long)__this_04[2].monitor + 0x20);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          *(undefined8 *)((long)puVar25 + -200) = 0x3b9aacf;
          il2cpp_runtime_helper_02337ed0();
        }
        pMVar22 = (MethodInfo *)0x0;
        *(undefined8 *)((long)puVar25 + -200) = 0x3b9aadb;
        bVar10 = UnityEngine_Object__op_Equality
                           ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar10 != '\0') {
          return (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)CONCAT44(extraout_var_08,bVar10);
        }
        __this_05 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
        *(undefined8 *)((long)puVar25 + -200) = 0x3b9aaf2;
        UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
        if (__this_04[2].monitor != (void *)0x0) {
          __this_00 = *(UnityEngine_Component_o **)((long)__this_04[2].monitor + 0x20);
          __this_05 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
          if (__this_00 != (UnityEngine_Component_o *)0x0) {
            *(undefined8 *)((long)puVar25 + -200) = 0x3b9ab1b;
            __this_02 = (Gilzoide_FlexUi_FlexLayout_o *)
                        UnityEngine_Component__GetComponent_object_(__this_00,MethodInfo_FlexLayout_GetComponent_FlexLayout);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              *(undefined8 *)((long)puVar25 + -200) = 0x3b9ab30;
              il2cpp_runtime_helper_02337ed0();
            }
            pMVar22 = (MethodInfo *)0x0;
            *(undefined8 *)((long)puVar25 + -200) = 0x3b9ab3c;
            __this_05 = __this_02;
            bVar10 = UnityEngine_Object__op_Inequality
                               ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,
                                (MethodInfo *)0x0);
            if ((char)bVar10 != '\0') {
              if (__this_02 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto label_03b9ab90;
              pMVar22 = (MethodInfo *)0x0;
              *(undefined8 *)((long)puVar25 + -200) = 0x3b9ab4f;
              Gilzoide_FlexUi_FlexLayout__RefreshRootLayoutImmediate(__this_02,(MethodInfo *)0x0);
              __this_05 = __this_02;
            }
            if (__this_04[2].monitor != (void *)0x0) {
              pUVar13 = *(UnityEngine_RectTransform_o **)((long)__this_04[2].monitor + 0x20);
              if (*(int *)(TypeInfo_LayoutRebuilder + 0xe4) == 0) {
                *(undefined8 *)((long)puVar25 + -200) = 0x3b9ab74;
                il2cpp_runtime_helper_02337ed0();
              }
              *(undefined8 *)((long)puVar25 + -200) = 0x3b9ab7e;
              UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate(pUVar13,(MethodInfo *)0x0);
              UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
              return extraout_RAX_03;
            }
          }
        }
      }
label_03b9ab90:
      *(undefined8 *)((long)puVar25 + -200) = 0x3b9ab95;
      il2cpp_runtime_helper_022b2c90();
      *(Gilzoide_FlexUi_FlexLayout_o **)((long)puVar25 + -200) = x;
      *(undefined8 *)((long)puVar25 + -0xd0) = 0x3b9aba9;
      Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Resolve
                ((Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)__this_05,pMVar22);
      Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__SetActive
                ((Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)__this_05,0,0,(MethodInfo *)in_RCX);
      return extraout_RAX_04;
    }
  }
  return (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)pDVar19;
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$ComponentInNamedChild<object>
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__ComponentInNamedChild_object_ (UnityEngine_Transform_o* root, System_String_o* name, const MethodInfo_255B710* method);
// 0x265b710

Il2CppObject *
Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__ComponentInNamedChild_object_
          (UnityEngine_Transform_o *root,System_String_o *name,MethodInfo_255B710 *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  System_RuntimeTypeHandle_o SVar6;
  Unity_VisualScripting_IGraphData_c *pUVar7;
  Il2CppRuntimeInterfaceOffsetPair *pIVar8;
  Il2CppMethodPointer pIVar9;
  Unity_VisualScripting_IGraphDebugData_c *pUVar10;
  MethodInfo *pMVar11;
  System_String_c *pSVar12;
  Unity_VisualScripting_GraphPointer_o *pUVar13;
  code *pcVar14;
  char cVar15;
  bool_conflict bVar16;
  System_Object_array *pSVar17;
  Il2CppObject *pIVar18;
  System_Object_array *pSVar19;
  UnityEngine_Object_o *__this;
  System_Object_array *pointer;
  System_Type_o *pSVar20;
  System_String_o *pSVar21;
  undefined8 uVar22;
  Unity_VisualScripting_GraphPointerException_o *pUVar23;
  Unity_VisualScripting_IGraphData_o *pUVar24;
  Il2CppMethodPointer *ppIVar25;
  void *pvVar26;
  System_Type_o *pSVar27;
  Unity_VisualScripting_IGraphDebugData_o *pUVar28;
  Il2CppObject *pIVar29;
  Unity_VisualScripting_GraphPointerException_o *pUVar30;
  long lVar31;
  void *pvVar32;
  long *plVar33;
  undefined8 *puVar34;
  Unity_VisualScripting_IGraphParent_o *pUVar35;
  void *extraout_RDX;
  undefined8 extraout_RDX_00;
  void *pvVar36;
  ulong uVar37;
  System_String_o *pSVar38;
  System_String_o *pSVar39;
  void *pvVar40;
  System_Object_array *x;
  Unity_VisualScripting_GraphPointerException_o *pUVar41;
  long lVar42;
  long lVar43;
  undefined1 auVar44 [16];
  undefined8 uStack_218;
  ulong auStack_210 [6];
  undefined8 uStack_1e0;
  ulong auStack_1d8 [6];
  undefined8 uStack_1a8;
  long alStack_1a0 [6];
  ulong auStack_170 [6];
  long alStack_140 [8];
  long alStack_100 [6];
  undefined1 auStack_d0 [8];
  void *pvStack_c8;
  System_String_o *pSStack_c0;
  Unity_VisualScripting_GraphPointerException_o *pUStack_b8;
  Il2CppObject *pIStack_b0;
  System_String_o *pSStack_a8;
  Unity_VisualScripting_GraphPointerException_o *pUStack_a0;
  long *plStack_98;
  System_Object_array *pSStack_90;
  System_String_o *pSStack_88;
  System_Object_array *pSStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  long lStack_68;
  System_String_o *pSStack_60;
  System_Object_array *pSStack_58;
  undefined8 uStack_50;
  System_Object_array *pSStack_48;
  
  if ((method->rgctx_data == (MethodInfo_255B710_RGCTXs *)0x0) &&
     (il2cpp_runtime_helper_023445d0(&TypeInfo_Object), method->rgctx_data == (MethodInfo_255B710_RGCTXs *)0x0)) {
    il2cpp_runtime_helper_02300a20(method);
  }
  pSVar17 = (System_Object_array *)
            Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__FindChild(root,name,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar21 = (System_String_o *)0x0;
  x = pSVar17;
  bVar16 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pSVar17,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar16 == '\0') {
    return (Il2CppObject *)0x0;
  }
  if (pSVar17 != (System_Object_array *)0x0) {
    pIVar18 = UnityEngine_Component__GetComponentInChildren_object_
                        ((UnityEngine_Component_o *)pSVar17,1,
                         (MethodInfo_24E7F00 *)
                         method->rgctx_data->_1_UnityEngine_Component_GetComponentInChildren_T_);
    return pIVar18;
  }
  auVar44 = il2cpp_runtime_helper_022b2c90();
  lVar31 = auVar44._8_8_;
  uStack_50 = auVar44._0_8_;
  pSStack_48 = pSVar17;
  if (*(long *)(lVar31 + 0x38) == 0) {
    pSStack_58 = (System_Object_array *)0x265b7d7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    if (*(long *)(lVar31 + 0x38) != 0) goto label_0265b7e3;
    pSStack_58 = (System_Object_array *)0x265b8ef;
    il2cpp_runtime_helper_02300a20(lVar31);
    iVar4 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
label_0265b7e3:
    iVar4 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar4 == 0) {
    pSStack_58 = (System_Object_array *)0x265b7fc;
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar17 = (System_Object_array *)0x0;
  pSVar38 = (System_String_o *)0x0;
  pSStack_58 = (System_Object_array *)0x265b80a;
  pointer = x;
  bVar16 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar16 != '\0') {
    return &((System_Object_array *)0x0)->obj;
  }
  uVar37 = 0;
  if (x == (System_Object_array *)0x0) {
label_0265b90c:
    pSStack_58 = (System_Object_array *)0x265b911;
    il2cpp_runtime_helper_022b2c90();
    pSVar19 = x;
  }
  else {
    pSVar38 = (System_String_o *)0x1;
    pSStack_58 = (System_Object_array *)0x265b831;
    pointer = x;
    pSVar19 = UnityEngine_Component__GetComponentsInChildren_object_
                        ((UnityEngine_Component_o *)x,1,*(MethodInfo_24E85B0 **)(*(long *)(lVar31 + 0x38) + 8)
                        );
    if (pSVar19 == (System_Object_array *)0x0) goto label_0265b90c;
    if ((int)pSVar19->max_length < 1) {
      return &((System_Object_array *)0x0)->obj;
    }
    uVar37 = 0;
    if ((pSVar19->max_length & 0xffffffff) != 0) {
      do {
        pSVar17 = (System_Object_array *)pSVar19->m_Items[uVar37];
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          pSStack_58 = (System_Object_array *)0x265b892;
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar38 = (System_String_o *)0x0;
        pSStack_58 = (System_Object_array *)0x265b89e;
        pointer = pSVar17;
        bVar16 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)pSVar17,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar16 != '\0') {
          x = pSVar19;
          if (pSVar17 == (System_Object_array *)0x0) goto label_0265b90c;
          pSVar38 = (System_String_o *)0x0;
          pSStack_58 = (System_Object_array *)0x265b8b1;
          pointer = pSVar17;
          __this = (UnityEngine_Object_o *)
                   UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pSVar17,(MethodInfo *)0x0)
          ;
          if (__this == (UnityEngine_Object_o *)0x0) goto label_0265b90c;
          pSStack_58 = (System_Object_array *)0x265b8c0;
          pointer = (System_Object_array *)UnityEngine_Object__get_name(__this,(MethodInfo *)0x0);
          pSStack_58 = (System_Object_array *)0x265b8cd;
          pSVar38 = pSVar21;
          bVar16 = System_String__op_Equality((System_String_o *)pointer,pSVar21,(MethodInfo *)0x0);
          if ((char)bVar16 != '\0') {
            return &pSVar17->obj;
          }
        }
        uVar37 = uVar37 + 1;
        uVar5 = (uint)pSVar19->max_length;
        if ((long)(int)uVar5 <= (long)uVar37) {
          return &((System_Object_array *)0x0)->obj;
        }
      } while (uVar37 < uVar5);
    }
  }
  pSStack_58 = (System_Object_array *)0x265b916;
  uStack_78 = il2cpp_runtime_helper_022b2ca0();
  puVar34 = pSVar38[2].monitor;
  uStack_70 = uVar37;
  lStack_68 = lVar31;
  pSStack_60 = pSVar21;
  pSStack_58 = pSVar19;
  if (puVar34 == (undefined8 *)0x0) {
    pSStack_80 = (System_Object_array *)0x265b93f;
    il2cpp_runtime_helper_02300a20(pSVar38);
    puVar34 = pSVar38[2].monitor;
  }
  pSStack_80 = (System_Object_array *)0x265b94b;
  pIVar18 = (Il2CppObject *)(**(code **)*puVar34)(pointer);
  if ((char)pIVar18 != '\0') {
    return pIVar18;
  }
  SVar6.fields.value =
       (System_RuntimeTypeHandle_Fields)
       ((System_RuntimeTypeHandle_Fields *)((long)pSVar38[2].monitor + 8))->value;
  pSStack_80 = (System_Object_array *)0x265b976;
  il2cpp_runtime_helper_01f68090(g_data_057b9c50);
  pSStack_80 = (System_Object_array *)0x265b980;
  pSVar20 = System_Type__GetTypeFromHandle(SVar6,(MethodInfo *)0x0);
  pSStack_80 = (System_Object_array *)0x265b98f;
  pSVar21 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Graph pointer must be within a {0} for this operation.");
  pSStack_80 = (System_Object_array *)0x265b99c;
  pSVar21 = System_String__Format(pSVar21,(Il2CppObject *)pSVar20,(MethodInfo *)0x0);
  pSStack_80 = (System_Object_array *)0x265b9ab;
  uVar22 = il2cpp_runtime_helper_023445d0(&TypeInfo_GraphPointerException);
  pSStack_80 = (System_Object_array *)0x265b9b3;
  pUVar23 = (Unity_VisualScripting_GraphPointerException_o *)il2cpp_runtime_helper_023052d0(uVar22);
  pIVar18 = (Il2CppObject *)0x0;
  pSStack_80 = (System_Object_array *)0x265b9c6;
  Unity_VisualScripting_GraphPointerException___ctor
            (pUVar23,pSVar21,(Unity_VisualScripting_GraphPointer_o *)pointer,(MethodInfo *)0x0);
  pSStack_80 = (System_Object_array *)0x265b9d1;
  pSVar39 = pSVar38;
  pUVar41 = pUVar23;
  il2cpp_runtime_helper_022b2b10();
  plStack_98 = &TypeInfo_Object;
  plVar33 = pIVar18[3].monitor;
  pvStack_c8 = extraout_RDX;
  pSStack_c0 = pSVar39;
  pSStack_a8 = pSVar38;
  pUStack_a0 = pUVar23;
  pSStack_90 = pointer;
  pSStack_88 = pSVar21;
  pSStack_80 = pSVar17;
  if (plVar33 == (long *)0x0) {
    alStack_100[5] = 0x265ba14;
    il2cpp_runtime_helper_023445d0(&TypeInfo_IGraphData);
    plVar33 = pIVar18[3].monitor;
    if (plVar33 == (long *)0x0) {
      alStack_100[5] = 0x265ba26;
      il2cpp_runtime_helper_02300a20(pIVar18);
      plVar33 = pIVar18[3].monitor;
    }
  }
  uVar37 = (ulong)*(uint *)(*plVar33 + 0xfc);
  lVar31 = -(uVar37 + 0xf & 0xfffffffffffffff0);
  pIStack_b0 = (Il2CppObject *)0x0;
  *(undefined8 *)(auStack_d0 + lVar31 + -8) = 0x265ba58;
  pUVar24 = Unity_VisualScripting_GraphPointer__get__data
                      ((Unity_VisualScripting_GraphPointer_o *)pUVar41,(MethodInfo *)0x0);
  if (pUVar24 == (Unity_VisualScripting_IGraphData_o *)0x0) {
    *(undefined8 *)(auStack_d0 + lVar31 + -8) = 0x265bb55;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pUVar7 = pUVar24->klass;
    uVar1._0_1_ = (pUVar7->_2).rank;
    uVar1._1_1_ = (pUVar7->_2).minimumAlignment;
    pUStack_b8 = pUVar41;
    if ((ulong)uVar1 != 0) {
      pIVar8 = (pUVar7->_1).interfaceOffsets;
      lVar42 = 0;
      do {
        if (*(long *)((long)&pIVar8->interfaceType + lVar42) == TypeInfo_IGraphData) {
          ppIVar25 = &pUVar7->vtable[*(int *)((long)&pIVar8->offset + lVar42)].methodPtr;
          goto label_0265bac2;
        }
        lVar42 = lVar42 + 0x10;
      } while ((ulong)uVar1 << 4 != lVar42);
    }
    *(undefined8 *)(auStack_d0 + lVar31 + -8) = 0x265baa9;
    ppIVar25 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pUVar24,TypeInfo_IGraphData,0);
label_0265bac2:
    pSVar21 = pSStack_c0;
    pIVar9 = *ppIVar25;
    *(undefined8 *)(auStack_d0 + lVar31 + -8) = 0x265bad6;
    cVar15 = (*pIVar9)(pUVar24,pSVar21,&pIStack_b0);
    pIVar29 = pIStack_b0;
    if (cVar15 != '\0') {
      lVar42 = *(long *)pIVar18[3].monitor;
      if ((*(byte *)(lVar42 + 0x135) & 1) == 0) {
        *(undefined8 *)(auStack_d0 + lVar31 + -8) = 0x265baf7;
        il2cpp_runtime_helper_023009c0(lVar42);
      }
      *(undefined8 *)(auStack_d0 + lVar31 + -8) = 0x265bb02;
      lVar42 = il2cpp_runtime_helper_023051f0(pIVar29);
      pIVar29 = pIStack_b0;
      if (lVar42 != 0) {
        lVar42 = *(long *)pIVar18[3].monitor;
        if ((*(byte *)(lVar42 + 0x135) & 1) == 0) {
          *(undefined8 *)(auStack_d0 + lVar31 + -8) = 0x265bb24;
          lVar42 = il2cpp_runtime_helper_023009c0(lVar42);
        }
        *(undefined8 *)(auStack_d0 + lVar31 + -8) = 0x265bb32;
        pvVar26 = (void *)il2cpp_runtime_helper_022b2b80(pIVar29,lVar42,auStack_d0 + lVar31);
        pvVar32 = pvStack_c8;
        *(undefined8 *)(auStack_d0 + lVar31 + -8) = 0x265bb41;
        pIVar18 = memcpy(pvVar32,pvVar26,uVar37);
        return pIVar18;
      }
      *(undefined8 *)(auStack_d0 + lVar31 + -8) = 0x265bb78;
      il2cpp_runtime_helper_01f681a0(pIVar29);
      *(undefined8 *)(auStack_d0 + lVar31 + -8) = 0x265bb82;
      pSVar20 = System_Object__GetType(pIVar29,(MethodInfo *)0x0);
      SVar6.fields.value =
           (System_RuntimeTypeHandle_Fields)
           ((System_RuntimeTypeHandle_Fields *)((long)pIVar18[3].monitor + 8))->value;
      *(undefined8 *)(auStack_d0 + lVar31 + -8) = 0x265bba1;
      il2cpp_runtime_helper_01f68090(g_data_057b9c50);
      *(undefined8 *)(auStack_d0 + lVar31 + -8) = 0x265bbab;
      pSVar27 = System_Type__GetTypeFromHandle(SVar6,(MethodInfo *)0x0);
      *(undefined8 *)(auStack_d0 + lVar31 + -8) = 0x265bbba;
      pSVar38 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Graph element data type mismatch. Found {0}, expected {1}.");
      *(undefined8 *)(auStack_d0 + lVar31 + -8) = 0x265bbca;
      pSVar38 = System_String__Format_3af78e0
                          (pSVar38,(Il2CppObject *)pSVar20,(Il2CppObject *)pSVar27,(MethodInfo *)0x0);
      goto label_0265bbca;
    }
  }
  *(undefined8 *)(auStack_d0 + lVar31 + -8) = 0x265bb61;
  pSVar38 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Missing graph element data for {0}.");
  *(undefined8 *)(auStack_d0 + lVar31 + -8) = 0x265bb6e;
  pSVar38 = System_String__Format(pSVar38,(Il2CppObject *)pSVar21,(MethodInfo *)0x0);
label_0265bbca:
  *(undefined8 *)(auStack_d0 + lVar31 + -8) = 0x265bbd9;
  uVar22 = il2cpp_runtime_helper_023445d0(&TypeInfo_GraphPointerException);
  *(undefined8 *)(auStack_d0 + lVar31 + -8) = 0x265bbe1;
  pUVar23 = (Unity_VisualScripting_GraphPointerException_o *)il2cpp_runtime_helper_023052d0(uVar22);
  pUVar41 = pUStack_b8;
  *(undefined8 *)(auStack_d0 + lVar31 + -8) = 0x265bbf5;
  Unity_VisualScripting_GraphPointerException___ctor
            (pUVar23,pSVar38,(Unity_VisualScripting_GraphPointer_o *)pUVar41,(MethodInfo *)0x0);
  *(code **)(auStack_d0 + lVar31 + -8) = Unity_VisualScripting_GraphPointer__GetElementDebugData_object_;
  pIVar29 = pIVar18;
  pUVar41 = pUVar23;
  auVar44 = il2cpp_runtime_helper_022b2b10();
  lVar42 = auVar44._8_8_;
  *(System_String_o **)(auStack_d0 + lVar31 + -8) = pSVar21;
  *(System_String_o **)((long)alStack_100 + lVar31 + 0x20) = pSVar38;
  *(Il2CppObject **)((long)alStack_100 + lVar31 + 0x18) = pIVar18;
  *(Unity_VisualScripting_GraphPointerException_o **)((long)alStack_100 + lVar31 + 0x10) = pUVar23;
  *(long *)((long)alStack_100 + lVar31 + 8) = auVar44._0_8_;
  if (*(long *)(lVar42 + 0x38) == 0) {
    *(undefined8 *)((long)alStack_100 + lVar31) = 0x265bc24;
    il2cpp_runtime_helper_023445d0(&TypeInfo_IGraphDebugData);
    if (*(long *)(lVar42 + 0x38) == 0) {
      *(undefined8 *)((long)alStack_100 + lVar31) = 0x265bc34;
      il2cpp_runtime_helper_02300a20(lVar42);
    }
  }
  *(undefined8 *)((long)alStack_100 + lVar31) = 0x265bc3e;
  pUVar28 = Unity_VisualScripting_GraphPointer__get_debugData
                      ((Unity_VisualScripting_GraphPointer_o *)pUVar41,(MethodInfo *)0x0);
  if (pUVar28 == (Unity_VisualScripting_IGraphDebugData_o *)0x0) {
    *(undefined8 *)((long)alStack_100 + lVar31) = 0x265bd28;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pUVar10 = pUVar28->klass;
    uVar2._0_1_ = (pUVar10->_2).rank;
    uVar2._1_1_ = (pUVar10->_2).minimumAlignment;
    if ((ulong)uVar2 != 0) {
      pIVar8 = (pUVar10->_1).interfaceOffsets;
      lVar43 = 0;
      do {
        if (*(long *)((long)&pIVar8->interfaceType + lVar43) == TypeInfo_IGraphDebugData) {
          ppIVar25 = &pUVar10->vtable[*(int *)((long)&pIVar8->offset + lVar43)].methodPtr;
          goto label_0265bca1;
        }
        lVar43 = lVar43 + 0x10;
      } while ((ulong)uVar2 << 4 != lVar43);
    }
    *(undefined8 *)((long)alStack_100 + lVar31) = 0x265bc89;
    ppIVar25 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pUVar28,TypeInfo_IGraphDebugData,0);
label_0265bca1:
    pMVar11 = (MethodInfo *)ppIVar25[1];
    pIVar9 = *ppIVar25;
    *(undefined8 *)((long)alStack_100 + lVar31) = 0x265bcad;
    pIVar29 = (Il2CppObject *)(*pIVar9)(pUVar28,pIVar29,pMVar11);
    lVar43 = **(long **)(lVar42 + 0x38);
    if ((*(byte *)(lVar43 + 0x135) & 1) == 0) {
      *(undefined8 *)((long)alStack_100 + lVar31) = 0x265bcc9;
      il2cpp_runtime_helper_023009c0(lVar43);
    }
    *(undefined8 *)((long)alStack_100 + lVar31) = 0x265bcd4;
    lVar43 = il2cpp_runtime_helper_023051f0(pIVar29);
    if (lVar43 != 0) {
      lVar42 = **(long **)(lVar42 + 0x38);
      if ((*(byte *)(lVar42 + 0x135) & 1) == 0) {
        *(undefined8 *)((long)alStack_100 + lVar31) = 0x265bcf2;
        lVar42 = il2cpp_runtime_helper_023009c0(lVar42);
      }
      if (pIVar29 != (Il2CppObject *)0x0) {
        *(undefined8 *)((long)alStack_100 + lVar31) = 0x265bd05;
        pIVar18 = (Il2CppObject *)il2cpp_runtime_helper_023051f0(pIVar29,lVar42);
        if (pIVar18 != (Il2CppObject *)0x0) {
          return pIVar18;
        }
        *(undefined8 *)((long)alStack_100 + lVar31) = 0x265bd15;
        il2cpp_runtime_helper_022b2fd0(pIVar29,lVar42);
      }
      return (Il2CppObject *)0x0;
    }
  }
  *(undefined8 *)((long)alStack_100 + lVar31) = 0x265bd30;
  il2cpp_runtime_helper_01f681a0(pIVar29);
  *(undefined8 *)((long)alStack_100 + lVar31) = 0x265bd3a;
  pSVar20 = System_Object__GetType(pIVar29,(MethodInfo *)0x0);
  SVar6.fields.value =
       (System_RuntimeTypeHandle_Fields)
       ((System_RuntimeTypeHandle_Fields *)(*(long *)(lVar42 + 0x38) + 8))->value;
  *(undefined8 *)((long)alStack_100 + lVar31) = 0x265bd59;
  il2cpp_runtime_helper_01f68090(g_data_057b9c50);
  *(undefined8 *)((long)alStack_100 + lVar31) = 0x265bd63;
  pSVar27 = System_Type__GetTypeFromHandle(SVar6,(MethodInfo *)0x0);
  *(undefined8 *)((long)alStack_100 + lVar31) = 0x265bd72;
  pSVar21 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Graph element runtime debug data type mismatch. Found {0}, expected {1}.");
  *(undefined8 *)((long)alStack_100 + lVar31) = 0x265bd82;
  pSVar21 = System_String__Format_3af78e0
                      (pSVar21,(Il2CppObject *)pSVar20,(Il2CppObject *)pSVar27,(MethodInfo *)0x0);
  *(undefined8 *)((long)alStack_100 + lVar31) = 0x265bd91;
  uVar22 = il2cpp_runtime_helper_023445d0(&TypeInfo_GraphPointerException);
  *(undefined8 *)((long)alStack_100 + lVar31) = 0x265bd99;
  pUVar30 = (Unity_VisualScripting_GraphPointerException_o *)il2cpp_runtime_helper_023052d0(uVar22);
  pvVar32 = (void *)0x0;
  *(undefined8 *)((long)alStack_100 + lVar31) = 0x265bdac;
  Unity_VisualScripting_GraphPointerException___ctor
            (pUVar30,pSVar21,(Unity_VisualScripting_GraphPointer_o *)pUVar41,(MethodInfo *)0x0);
  *(undefined8 *)((long)alStack_100 + lVar31) = 0x265bdb7;
  lVar43 = lVar42;
  pUVar23 = pUVar30;
  il2cpp_runtime_helper_022b2b10();
  *(System_Object_array ***)((long)alStack_100 + lVar31) = &pSStack_80;
  *(System_String_o **)((long)alStack_140 + lVar31 + 0x38) = pSVar21;
  *(Unity_VisualScripting_GraphPointerException_o **)((long)alStack_140 + lVar31 + 0x30) = pUVar41;
  *(ulong *)((long)alStack_140 + lVar31 + 0x28) = uVar37;
  *(long *)((long)alStack_140 + lVar31 + 0x20) = lVar42;
  *(Unity_VisualScripting_GraphPointerException_o **)((long)alStack_140 + lVar31 + 0x18) = pUVar30;
  *(undefined8 *)((long)alStack_140 + lVar31) = extraout_RDX_00;
  *(long *)((long)alStack_140 + lVar31 + 8) = lVar43;
  plVar33 = *(long **)((long)pvVar32 + 0x38);
  if (plVar33 == (long *)0x0) {
    *(undefined8 *)((long)auStack_170 + lVar31 + 0x28) = 0x265bdf4;
    il2cpp_runtime_helper_023445d0(&TypeInfo_IGraphDebugData);
    plVar33 = *(long **)((long)pvVar32 + 0x38);
    if (plVar33 == (long *)0x0) {
      *(undefined8 *)((long)auStack_170 + lVar31 + 0x28) = 0x265be05;
      il2cpp_runtime_helper_02300a20(pvVar32);
      plVar33 = *(long **)((long)pvVar32 + 0x38);
    }
  }
  uVar37 = (ulong)*(uint *)(*plVar33 + 0xfc);
  lVar42 = (long)alStack_140 + (lVar31 - (uVar37 + 0xf & 0xfffffffffffffff0));
  *(Unity_VisualScripting_GraphPointerException_o **)((long)alStack_140 + lVar31 + 0x10) = pUVar23;
  *(undefined8 *)(lVar42 + -8) = 0x265be33;
  pSVar38 = (System_String_o *)
            Unity_VisualScripting_GraphPointer__get_debugData
                      ((Unity_VisualScripting_GraphPointer_o *)pUVar23,(MethodInfo *)0x0);
  if (pSVar38 == (System_String_o *)0x0) {
    *(undefined8 *)(lVar42 + -8) = 0x265bf22;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSVar12 = pSVar38->klass;
    uVar3._0_1_ = (pSVar12->_2).rank;
    uVar3._1_1_ = (pSVar12->_2).minimumAlignment;
    if ((ulong)uVar3 != 0) {
      pIVar8 = (pSVar12->_1).interfaceOffsets;
      lVar43 = 0;
      do {
        if (*(long *)((long)&pIVar8->interfaceType + lVar43) == TypeInfo_IGraphDebugData) {
          ppIVar25 = &(&(pSVar12->vtable)._0_Equals)[*(int *)((long)&pIVar8->offset + lVar43)].methodPtr;
          goto label_0265bea1;
        }
        lVar43 = lVar43 + 0x10;
      } while ((ulong)uVar3 << 4 != lVar43);
    }
    *(undefined8 *)(lVar42 + -8) = 0x265be89;
    ppIVar25 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar38,TypeInfo_IGraphDebugData,0);
label_0265bea1:
    pMVar11 = (MethodInfo *)ppIVar25[1];
    uVar22 = *(undefined8 *)((long)alStack_140 + lVar31 + 8);
    pIVar9 = *ppIVar25;
    *(undefined8 *)(lVar42 + -8) = 0x265beae;
    pUVar23 = (Unity_VisualScripting_GraphPointerException_o *)(*pIVar9)(pSVar38,uVar22,pMVar11);
    lVar43 = **(long **)((long)pvVar32 + 0x38);
    if ((*(byte *)(lVar43 + 0x135) & 1) == 0) {
      *(undefined8 *)(lVar42 + -8) = 0x265bec9;
      il2cpp_runtime_helper_023009c0(lVar43);
    }
    *(undefined8 *)(lVar42 + -8) = 0x265bed4;
    lVar43 = il2cpp_runtime_helper_023051f0(pUVar23);
    pSVar21 = pSVar38;
    if (lVar43 != 0) {
      lVar43 = **(long **)((long)pvVar32 + 0x38);
      if ((*(byte *)(lVar43 + 0x135) & 1) == 0) {
        *(undefined8 *)(lVar42 + -8) = 0x265bef1;
        lVar43 = il2cpp_runtime_helper_023009c0(lVar43);
      }
      *(undefined8 *)(lVar42 + -8) = 0x265beff;
      pvVar26 = (void *)il2cpp_runtime_helper_022b2b80(pUVar23,lVar43,lVar42);
      pvVar32 = *(void **)((long)alStack_140 + lVar31);
      *(undefined8 *)(lVar42 + -8) = 0x265bf0e;
      pIVar18 = memcpy(pvVar32,pvVar26,uVar37);
      return pIVar18;
    }
  }
  *(undefined8 *)(lVar42 + -8) = 0x265bf2a;
  il2cpp_runtime_helper_01f681a0(pUVar23);
  *(undefined8 *)(lVar42 + -8) = 0x265bf34;
  pSVar20 = System_Object__GetType((Il2CppObject *)pUVar23,(MethodInfo *)0x0);
  SVar6.fields.value =
       (System_RuntimeTypeHandle_Fields)
       ((System_RuntimeTypeHandle_Fields *)(*(long *)((long)pvVar32 + 0x38) + 8))->value;
  *(undefined8 *)(lVar42 + -8) = 0x265bf52;
  il2cpp_runtime_helper_01f68090(g_data_057b9c50);
  *(undefined8 *)(lVar42 + -8) = 0x265bf5c;
  pSVar27 = System_Type__GetTypeFromHandle(SVar6,(MethodInfo *)0x0);
  *(undefined8 *)(lVar42 + -8) = 0x265bf6b;
  pSVar38 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Graph element runtime debug data type mismatch. Found {0}, expected {1}.");
  *(undefined8 *)(lVar42 + -8) = 0x265bf7b;
  pSVar38 = System_String__Format_3af78e0
                      (pSVar38,(Il2CppObject *)pSVar20,(Il2CppObject *)pSVar27,(MethodInfo *)0x0);
  *(undefined8 *)(lVar42 + -8) = 0x265bf8a;
  uVar22 = il2cpp_runtime_helper_023445d0(&TypeInfo_GraphPointerException);
  *(undefined8 *)(lVar42 + -8) = 0x265bf92;
  pUVar23 = (Unity_VisualScripting_GraphPointerException_o *)il2cpp_runtime_helper_023052d0(uVar22);
  pUVar13 = *(Unity_VisualScripting_GraphPointer_o **)((long)alStack_140 + lVar31 + 0x10);
  *(undefined8 *)(lVar42 + -8) = 0x265bfa6;
  Unity_VisualScripting_GraphPointerException___ctor(pUVar23,pSVar38,pUVar13,(MethodInfo *)0x0);
  *(undefined8 *)(lVar42 + -8) = 0x265bfb1;
  pvVar26 = pvVar32;
  pUVar41 = pUVar23;
  uVar22 = il2cpp_runtime_helper_022b2b10();
  *(System_String_o **)(lVar42 + -8) = pSVar21;
  *(System_String_o **)(lVar42 + -0x10) = pSVar38;
  *(ulong *)(lVar42 + -0x18) = uVar37;
  *(Unity_VisualScripting_GraphPointerException_o **)(lVar42 + -0x20) = pUVar23;
  *(undefined8 *)(lVar42 + -0x28) = uVar22;
  if (*(long *)((long)pvVar26 + 0x38) == 0) {
    *(undefined8 *)(lVar42 + -0x30) = 0x265bfdd;
    il2cpp_runtime_helper_02300a20(pvVar26);
  }
  *(undefined8 *)(lVar42 + -0x30) = 0x265bfe7;
  pIVar18 = (Il2CppObject *)
            Unity_VisualScripting_GraphPointer__get_data
                      ((Unity_VisualScripting_GraphPointer_o *)pUVar41,(MethodInfo *)0x0);
  lVar43 = **(long **)((long)pvVar26 + 0x38);
  if ((*(byte *)(lVar43 + 0x135) & 1) == 0) {
    *(undefined8 *)(lVar42 + -0x30) = 0x265c002;
    il2cpp_runtime_helper_023009c0(lVar43);
  }
  *(undefined8 *)(lVar42 + -0x30) = 0x265c00d;
  lVar43 = il2cpp_runtime_helper_023051f0(pIVar18);
  if (lVar43 != 0) {
    lVar31 = **(long **)((long)pvVar26 + 0x38);
    if ((*(byte *)(lVar31 + 0x135) & 1) == 0) {
      *(undefined8 *)(lVar42 + -0x30) = 0x265c02a;
      lVar31 = il2cpp_runtime_helper_023009c0(lVar31);
    }
    if (pIVar18 != (Il2CppObject *)0x0) {
      *(undefined8 *)(lVar42 + -0x30) = 0x265c03d;
      pIVar29 = (Il2CppObject *)il2cpp_runtime_helper_023051f0(pIVar18,lVar31);
      if (pIVar29 != (Il2CppObject *)0x0) {
        return pIVar29;
      }
      *(undefined8 *)(lVar42 + -0x30) = 0x265c04d;
      il2cpp_runtime_helper_022b2fd0(pIVar18,lVar31);
    }
    return (Il2CppObject *)0x0;
  }
  *(undefined8 *)(lVar42 + -0x30) = 0x265c063;
  il2cpp_runtime_helper_01f681a0(pIVar18);
  *(undefined8 *)(lVar42 + -0x30) = 0x265c06d;
  pSVar20 = System_Object__GetType(pIVar18,(MethodInfo *)0x0);
  SVar6.fields.value =
       (System_RuntimeTypeHandle_Fields)
       ((System_RuntimeTypeHandle_Fields *)(*(long *)((long)pvVar26 + 0x38) + 8))->value;
  *(undefined8 *)(lVar42 + -0x30) = 0x265c08b;
  il2cpp_runtime_helper_01f68090(g_data_057b9c50);
  *(undefined8 *)(lVar42 + -0x30) = 0x265c095;
  pSVar27 = System_Type__GetTypeFromHandle(SVar6,(MethodInfo *)0x0);
  *(undefined8 *)(lVar42 + -0x30) = 0x265c0a4;
  pSVar21 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Graph data type mismatch. Found {0}, expected {1}.");
  *(undefined8 *)(lVar42 + -0x30) = 0x265c0b4;
  pSVar21 = System_String__Format_3af78e0
                      (pSVar21,(Il2CppObject *)pSVar20,(Il2CppObject *)pSVar27,(MethodInfo *)0x0);
  *(undefined8 *)(lVar42 + -0x30) = 0x265c0c3;
  uVar22 = il2cpp_runtime_helper_023445d0(&TypeInfo_GraphPointerException);
  *(undefined8 *)(lVar42 + -0x30) = 0x265c0cb;
  pUVar30 = (Unity_VisualScripting_GraphPointerException_o *)il2cpp_runtime_helper_023052d0(uVar22);
  *(undefined8 *)(lVar42 + -0x30) = 0x265c0de;
  Unity_VisualScripting_GraphPointerException___ctor
            (pUVar30,pSVar21,(Unity_VisualScripting_GraphPointer_o *)pUVar41,(MethodInfo *)0x0);
  *(undefined8 *)(lVar42 + -0x30) = 0x265c0e9;
  pvVar40 = pvVar26;
  pUVar23 = pUVar30;
  auVar44 = il2cpp_runtime_helper_022b2b10();
  pvVar36 = auVar44._8_8_;
  *(long *)(lVar42 + -0x30) = (long)alStack_100 + lVar31;
  *(void **)(lVar42 + -0x38) = pvVar26;
  *(Unity_VisualScripting_GraphPointerException_o **)(lVar42 + -0x40) = pUVar41;
  *(void **)(lVar42 + -0x48) = pvVar32;
  *(System_String_o **)(lVar42 + -0x50) = pSVar21;
  *(Unity_VisualScripting_GraphPointerException_o **)(lVar42 + -0x58) = pUVar30;
  *(long *)(lVar42 + -0x60) = auVar44._0_8_;
  plVar33 = *(long **)((long)pvVar36 + 0x38);
  if (plVar33 == (long *)0x0) {
    *(undefined8 *)(lVar42 + -0x68) = 0x265c118;
    il2cpp_runtime_helper_02300a20(pvVar36);
    plVar33 = *(long **)((long)pvVar36 + 0x38);
  }
  uVar37 = (ulong)*(uint *)(*plVar33 + 0xfc);
  lVar43 = (lVar42 + -0x60) - (uVar37 + 0xf & 0xfffffffffffffff0);
  *(Unity_VisualScripting_GraphPointerException_o **)(lVar42 + -0x60) = pUVar23;
  *(undefined8 *)(lVar43 + -8) = 0x265c146;
  pIVar18 = (Il2CppObject *)
            Unity_VisualScripting_GraphPointer__get_data
                      ((Unity_VisualScripting_GraphPointer_o *)pUVar23,(MethodInfo *)0x0);
  lVar31 = **(long **)((long)pvVar36 + 0x38);
  if ((*(byte *)(lVar31 + 0x135) & 1) == 0) {
    *(undefined8 *)(lVar43 + -8) = 0x265c161;
    il2cpp_runtime_helper_023009c0(lVar31);
  }
  *(undefined8 *)(lVar43 + -8) = 0x265c16c;
  lVar31 = il2cpp_runtime_helper_023051f0(pIVar18);
  if (lVar31 != 0) {
    lVar31 = **(long **)((long)pvVar36 + 0x38);
    if ((*(byte *)(lVar31 + 0x135) & 1) == 0) {
      *(undefined8 *)(lVar43 + -8) = 0x265c189;
      lVar31 = il2cpp_runtime_helper_023009c0(lVar31);
    }
    *(undefined8 *)(lVar43 + -8) = 0x265c197;
    pvVar32 = (void *)il2cpp_runtime_helper_022b2b80(pIVar18,lVar31,lVar43);
    *(undefined8 *)(lVar43 + -8) = 0x265c1a5;
    pIVar18 = memcpy(pvVar40,pvVar32,uVar37);
    return pIVar18;
  }
  *(undefined8 *)(lVar43 + -8) = 0x265c1bc;
  il2cpp_runtime_helper_01f681a0(pIVar18);
  *(undefined8 *)(lVar43 + -8) = 0x265c1c6;
  pSVar20 = System_Object__GetType(pIVar18,(MethodInfo *)0x0);
  SVar6.fields.value =
       (System_RuntimeTypeHandle_Fields)
       ((System_RuntimeTypeHandle_Fields *)(*(long *)((long)pvVar36 + 0x38) + 8))->value;
  *(undefined8 *)(lVar43 + -8) = 0x265c1e4;
  il2cpp_runtime_helper_01f68090(g_data_057b9c50);
  *(undefined8 *)(lVar43 + -8) = 0x265c1ee;
  pSVar27 = System_Type__GetTypeFromHandle(SVar6,(MethodInfo *)0x0);
  *(undefined8 *)(lVar43 + -8) = 0x265c1fd;
  pSVar21 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Graph data type mismatch. Found {0}, expected {1}.");
  *(undefined8 *)(lVar43 + -8) = 0x265c20d;
  pSVar21 = System_String__Format_3af78e0
                      (pSVar21,(Il2CppObject *)pSVar20,(Il2CppObject *)pSVar27,(MethodInfo *)0x0);
  *(undefined8 *)(lVar43 + -8) = 0x265c21c;
  uVar22 = il2cpp_runtime_helper_023445d0(&TypeInfo_GraphPointerException);
  *(undefined8 *)(lVar43 + -8) = 0x265c224;
  pUVar23 = (Unity_VisualScripting_GraphPointerException_o *)il2cpp_runtime_helper_023052d0(uVar22);
  pUVar13 = *(Unity_VisualScripting_GraphPointer_o **)(lVar42 + -0x60);
  *(undefined8 *)(lVar43 + -8) = 0x265c238;
  Unity_VisualScripting_GraphPointerException___ctor(pUVar23,pSVar21,pUVar13,(MethodInfo *)0x0);
  *(undefined8 *)(lVar43 + -8) = 0x265c243;
  pvVar32 = pvVar36;
  pUVar41 = pUVar23;
  auVar44 = il2cpp_runtime_helper_022b2b10();
  pvVar26 = auVar44._8_8_;
  *(long *)(lVar43 + -8) = lVar42 + -0x30;
  *(void **)(lVar43 + -0x10) = pvVar40;
  *(System_String_o **)(lVar43 + -0x18) = pSVar21;
  *(void **)(lVar43 + -0x20) = pvVar36;
  *(ulong *)(lVar43 + -0x28) = uVar37;
  *(Unity_VisualScripting_GraphPointerException_o **)(lVar43 + -0x30) = pUVar23;
  *(long *)(lVar43 + -0x38) = auVar44._0_8_;
  plVar33 = *(long **)((long)pvVar26 + 0x38);
  if (plVar33 == (long *)0x0) {
    *(undefined8 *)(lVar43 + -0x40) = 0x265c278;
    il2cpp_runtime_helper_02300a20(pvVar26);
    plVar33 = *(long **)((long)pvVar26 + 0x38);
  }
  uVar37 = (ulong)*(uint *)(*plVar33 + 0xfc);
  lVar42 = (lVar43 + -0x38) - (uVar37 + 0xf & 0xfffffffffffffff0);
  *(Unity_VisualScripting_GraphPointerException_o **)(lVar43 + -0x38) = pUVar41;
  *(undefined8 *)(lVar42 + -8) = 0x265c2a6;
  pIVar18 = (Il2CppObject *)
            Unity_VisualScripting_GraphPointer__get_debugData
                      ((Unity_VisualScripting_GraphPointer_o *)pUVar41,(MethodInfo *)0x0);
  lVar31 = **(long **)((long)pvVar26 + 0x38);
  if ((*(byte *)(lVar31 + 0x135) & 1) == 0) {
    *(undefined8 *)(lVar42 + -8) = 0x265c2c1;
    il2cpp_runtime_helper_023009c0(lVar31);
  }
  *(undefined8 *)(lVar42 + -8) = 0x265c2cc;
  lVar31 = il2cpp_runtime_helper_023051f0(pIVar18);
  if (lVar31 != 0) {
    lVar31 = **(long **)((long)pvVar26 + 0x38);
    if ((*(byte *)(lVar31 + 0x135) & 1) == 0) {
      *(undefined8 *)(lVar42 + -8) = 0x265c2e9;
      lVar31 = il2cpp_runtime_helper_023009c0(lVar31);
    }
    *(undefined8 *)(lVar42 + -8) = 0x265c2f7;
    pvVar26 = (void *)il2cpp_runtime_helper_022b2b80(pIVar18,lVar31,lVar42);
    *(undefined8 *)(lVar42 + -8) = 0x265c305;
    pIVar18 = memcpy(pvVar32,pvVar26,uVar37);
    return pIVar18;
  }
  *(undefined8 *)(lVar42 + -8) = 0x265c31c;
  il2cpp_runtime_helper_01f681a0(pIVar18);
  *(undefined8 *)(lVar42 + -8) = 0x265c326;
  pSVar20 = System_Object__GetType(pIVar18,(MethodInfo *)0x0);
  SVar6.fields.value =
       (System_RuntimeTypeHandle_Fields)
       ((System_RuntimeTypeHandle_Fields *)(*(long *)((long)pvVar26 + 0x38) + 8))->value;
  *(undefined8 *)(lVar42 + -8) = 0x265c344;
  il2cpp_runtime_helper_01f68090(g_data_057b9c50);
  *(undefined8 *)(lVar42 + -8) = 0x265c34e;
  pSVar27 = System_Type__GetTypeFromHandle(SVar6,(MethodInfo *)0x0);
  *(undefined8 *)(lVar42 + -8) = 0x265c35d;
  pSVar21 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Graph debug data type mismatch. Found {0}, expected {1}.");
  *(undefined8 *)(lVar42 + -8) = 0x265c36d;
  pSVar21 = System_String__Format_3af78e0
                      (pSVar21,(Il2CppObject *)pSVar20,(Il2CppObject *)pSVar27,(MethodInfo *)0x0);
  *(undefined8 *)(lVar42 + -8) = 0x265c37c;
  uVar22 = il2cpp_runtime_helper_023445d0(&TypeInfo_GraphPointerException);
  *(undefined8 *)(lVar42 + -8) = 0x265c384;
  pUVar23 = (Unity_VisualScripting_GraphPointerException_o *)il2cpp_runtime_helper_023052d0(uVar22);
  pUVar13 = *(Unity_VisualScripting_GraphPointer_o **)(lVar43 + -0x38);
  *(undefined8 *)(lVar42 + -8) = 0x265c398;
  Unity_VisualScripting_GraphPointerException___ctor(pUVar23,pSVar21,pUVar13,(MethodInfo *)0x0);
  *(undefined8 *)(lVar42 + -8) = 0x265c3a3;
  pvVar40 = pvVar26;
  pUVar41 = pUVar23;
  auVar44 = il2cpp_runtime_helper_022b2b10();
  lVar31 = auVar44._8_8_;
  *(long *)(lVar42 + -8) = lVar43 + -8;
  *(void **)(lVar42 + -0x10) = pvVar32;
  *(System_String_o **)(lVar42 + -0x18) = pSVar21;
  *(void **)(lVar42 + -0x20) = pvVar26;
  *(ulong *)(lVar42 + -0x28) = uVar37;
  *(Unity_VisualScripting_GraphPointerException_o **)(lVar42 + -0x30) = pUVar23;
  *(long *)(lVar42 + -0x38) = auVar44._0_8_;
  puVar34 = *(undefined8 **)(lVar31 + 0x38);
  if (puVar34 == (undefined8 *)0x0) {
    *(undefined8 *)(lVar42 + -0x40) = 0x265c3d8;
    il2cpp_runtime_helper_02300a20(lVar31);
    puVar34 = *(undefined8 **)(lVar31 + 0x38);
  }
  uVar5 = *(uint *)(puVar34[1] + 0xfc);
  lVar42 = (lVar42 + -0x38) - ((ulong)uVar5 + 0xf & 0xfffffffffffffff0);
  pcVar14 = *(code **)*puVar34;
  *(undefined8 *)(lVar42 + -8) = 0x265c401;
  (*pcVar14)(pUVar41);
  *(undefined8 *)(lVar42 + -8) = 0x265c40b;
  pUVar35 = Unity_VisualScripting_GraphPointer__get_parent
                      ((Unity_VisualScripting_GraphPointer_o *)pUVar41,(MethodInfo *)0x0);
  lVar31 = *(long *)(*(long *)(lVar31 + 0x38) + 8);
  if ((*(byte *)(lVar31 + 0x135) & 1) == 0) {
    *(undefined8 *)(lVar42 + -8) = 0x265c428;
    lVar31 = il2cpp_runtime_helper_023009c0(lVar31);
  }
  *(undefined8 *)(lVar42 + -8) = 0x265c436;
  pvVar32 = (void *)il2cpp_runtime_helper_022b2b80(pUVar35,lVar31,lVar42);
  *(undefined8 *)(lVar42 + -8) = 0x265c444;
  pIVar18 = memcpy(pvVar40,pvVar32,(ulong)uVar5);
  return pIVar18;
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$FindChild
// il2cpp: UnityEngine_Transform_o* Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__FindChild (UnityEngine_Transform_o* root, System_String_o* name, const MethodInfo* method);
// 0x3b9b2f0

UnityEngine_Transform_o *
Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__FindChild
          (UnityEngine_Transform_o *root,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  System_Collections_IEnumerator_c *pSVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  char cVar6;
  bool_conflict bVar7;
  System_String_o *a;
  VirtualInvokeData *pVVar8;
  UnityEngine_Transform_o *x;
  long *plVar9;
  undefined8 *puVar10;
  MethodInfo *method_00;
  long lVar11;
  long lVar12;
  System_Collections_IEnumerator_o *unaff_R12;
  int iVar13;
  UnityEngine_Transform_o *pUVar14;
  undefined1 auVar15 [12];
  undefined1 auVar16 [16];
  long local_38;
  
  if (g_data_057a9f21 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Transform);
    g_data_057a9f21 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar7 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pUVar14 = (UnityEngine_Transform_o *)0x0;
  if ((char)bVar7 == '\0') {
    if (root == (UnityEngine_Transform_o *)0x0) {
label_03b9b5d4:
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      a = UnityEngine_Object__get_name((UnityEngine_Object_o *)root,(MethodInfo *)0x0);
      bVar7 = System_String__op_Equality(a,name,(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') {
        return root;
      }
      unaff_R12 = UnityEngine_Transform__GetEnumerator(root,(MethodInfo *)0x0);
      if (unaff_R12 != (System_Collections_IEnumerator_o *)0x0) {
        local_38 = 0;
        do {
          pSVar4 = unaff_R12->klass;
          uVar2._0_1_ = (pSVar4->_2).rank;
          uVar2._1_1_ = (pSVar4->_2).minimumAlignment;
          if ((ulong)uVar2 != 0) {
            pIVar5 = (pSVar4->_1).interfaceOffsets;
            lVar11 = 0;
            do {
              if (*(long *)((long)&pIVar5->interfaceType + lVar11) == TypeInfo_IEnumerator) {
                pVVar8 = pSVar4->vtable + *(int *)((long)&pIVar5->offset + lVar11);
                goto label_03b9b433;
              }
              lVar11 = lVar11 + 0x10;
            } while ((ulong)uVar2 << 4 != lVar11);
          }
          pVVar8 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(unaff_R12,TypeInfo_IEnumerator,0);
label_03b9b433:
          cVar6 = (*pVVar8->methodPtr)(unaff_R12,pVVar8->method);
          if (cVar6 == '\0') {
            iVar13 = 7;
            goto label_03b9b533;
          }
          pSVar4 = unaff_R12->klass;
          uVar3._0_1_ = (pSVar4->_2).rank;
          uVar3._1_1_ = (pSVar4->_2).minimumAlignment;
          if ((ulong)uVar3 != 0) {
            pIVar5 = (pSVar4->_1).interfaceOffsets;
            lVar11 = 0;
            do {
              if (*(long *)((long)&pIVar5->interfaceType + lVar11) == TypeInfo_IEnumerator) {
                pVVar8 = pSVar4->vtable + (*(int *)((long)&pIVar5->offset + lVar11) + 1);
                goto label_03b9b4b8;
              }
              lVar11 = lVar11 + 0x10;
            } while ((ulong)uVar3 << 4 != lVar11);
          }
          pVVar8 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(unaff_R12,TypeInfo_IEnumerator,1);
label_03b9b4b8:
          auVar16 = (*pVVar8->methodPtr)(unaff_R12,pVVar8->method);
          method_00 = auVar16._8_8_;
          pUVar14 = auVar16._0_8_;
          if (pUVar14 != (UnityEngine_Transform_o *)0x0) {
            bVar1 = (TypeInfo_Transform->_2).naturalAligment;
            method_00 = (MethodInfo *)(ulong)bVar1;
            if (((pUVar14->klass->_2).naturalAligment < bVar1) ||
               ((pUVar14->klass->_2).typeHierarchy[(long)&method_00[-1].field_0x57] != TypeInfo_Transform)) {
              il2cpp_runtime_helper_022b2fd0(pUVar14);
              goto label_03b9b5d4;
            }
          }
          x = Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__FindChild(pUVar14,name,method_00);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar7 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar7 != '\0') {
            iVar13 = 6;
            goto label_03b9b535;
          }
        } while( true );
      }
    }
    il2cpp_runtime_helper_022b2c90();
    do {
      auVar15 = il2cpp_runtime_helper_022fefe0();
      iVar13 = 0;
      if (auVar15._8_4_ != 1) {
        plVar9 = (long *)il2cpp_runtime_helper_023051f0(unaff_R12,TypeInfo_IDisposable);
        if (plVar9 == (long *)0x0) goto label_03b9b6d6;
        lVar11 = *plVar9;
        if ((ulong)*(ushort *)(lVar11 + 0x12e) == 0) goto label_03b9b6af;
        lVar12 = 0;
        goto label_03b9b6a0;
      }
      plVar9 = (long *)__cxa_begin_catch(auVar15._0_8_);
      local_38 = *plVar9;
      __cxa_end_catch();
label_03b9b533:
      x = (UnityEngine_Transform_o *)0x0;
label_03b9b535:
      plVar9 = (long *)il2cpp_runtime_helper_023051f0(unaff_R12,TypeInfo_IDisposable);
      if (plVar9 != (long *)0x0) {
        lVar11 = *plVar9;
        if ((ulong)*(ushort *)(lVar11 + 0x12e) != 0) {
          lVar12 = 0;
          do {
            if (*(long *)(*(long *)(lVar11 + 0xb0) + lVar12) == TypeInfo_IDisposable) {
              puVar10 = (undefined8 *)
                        (lVar11 + (long)*(int *)(*(long *)(lVar11 + 0xb0) + 8 + lVar12) * 0x10 + 0x138);
              goto label_03b9b59d;
            }
            lVar12 = lVar12 + 0x10;
          } while ((ulong)*(ushort *)(lVar11 + 0x12e) << 4 != lVar12);
        }
        puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar9,TypeInfo_IDisposable,0);
label_03b9b59d:
        (*(code *)*puVar10)(plVar9,puVar10[1]);
      }
    } while (local_38 != 0);
    pUVar14 = (UnityEngine_Transform_o *)0x0;
    if (iVar13 == 6) {
      pUVar14 = x;
    }
  }
  return pUVar14;
  while (lVar12 = lVar12 + 0x10, (ulong)*(ushort *)(lVar11 + 0x12e) << 4 != lVar12) {
label_03b9b6a0:
    if (*(long *)(*(long *)(lVar11 + 0xb0) + lVar12) == TypeInfo_IDisposable) {
      puVar10 = (undefined8 *)(lVar11 + (long)*(int *)(*(long *)(lVar11 + 0xb0) + 8 + lVar12) * 0x10 + 0x138);
      goto label_03b9b6cd;
    }
  }
label_03b9b6af:
  puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar9,TypeInfo_IDisposable,0);
label_03b9b6cd:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
label_03b9b6d6:
  _Unwind_Resume(auVar15._0_8_);
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator___ctor (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o* __this, const MethodInfo* method);
// 0x3b9b700

void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator___ctor
               (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *__this,MethodInfo *method)

{
  (__this->fields)._activeIndex = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$<ScrollTo>b__22_0
// il2cpp: float Gisketch_Aottg2UI_Actions_GisketchSectionNavigator___ScrollTo_b__22_0 (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o* __this, const MethodInfo* method);
// 0x3b9b710

float Gisketch_Aottg2UI_Actions_GisketchSectionNavigator___ScrollTo_b__22_0
                (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  UnityEngine_RectTransform_c *extraout_RDX;
  UnityEngine_RectTransform_c *method_00;
  UnityEngine_RectTransform_o *target;
  UnityEngine_UI_ScrollRect_o *pUVar2;
  Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *__this_00;
  float fVar3;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  
  pUVar2 = (__this->fields)._scroll;
  if (pUVar2 != (UnityEngine_UI_ScrollRect_o *)0x0) {
    fVar3 = UnityEngine_UI_ScrollRect__get_verticalNormalizedPosition(pUVar2,(MethodInfo *)0x0);
    return fVar3;
  }
  fVar3 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar2 = *(UnityEngine_UI_ScrollRect_o **)&(pUVar2->fields).m_Inertia;
  if (pUVar2 != (UnityEngine_UI_ScrollRect_o *)0x0) {
    UnityEngine_UI_ScrollRect__set_verticalNormalizedPosition(pUVar2,fVar3,(MethodInfo *)0x0);
    return extraout_XMM0_Da;
  }
  fVar3 = (float)il2cpp_runtime_helper_022b2c90();
  __this_00 = (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *)(pUVar2->fields).m_CachedPtr;
  if (__this_00 != (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *)0x0) {
    UnityEngine_CanvasGroup__set_alpha((UnityEngine_CanvasGroup_o *)__this_00,fVar3,(MethodInfo *)0x0);
    return extraout_XMM0_Da_00;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9f22 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransform);
    g_data_057a9f22 = '\x01';
  }
  UnityEngine_EventSystems_UIBehaviour__Awake
            ((UnityEngine_EventSystems_UIBehaviour_o *)__this_00,(MethodInfo *)0x0);
  pUVar1 = (UnityEngine_RectTransform_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
  method_00 = extraout_RDX;
  target = (UnityEngine_RectTransform_o *)0x0;
  if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
    method_00 = pUVar1->klass;
    target = (UnityEngine_RectTransform_o *)0x0;
    if (method_00 == TypeInfo_RectTransform) {
      target = pUVar1;
    }
  }
  Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__Setup(__this_00,target,(MethodInfo *)method_00);
  return extraout_XMM0_Da_01;
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$<ScrollTo>b__22_1
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator___ScrollTo_b__22_1 (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o* __this, float value, const MethodInfo* method);
// 0x3b9b730

void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator___ScrollTo_b__22_1
               (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *__this,float value,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  UnityEngine_RectTransform_c *extraout_RDX;
  UnityEngine_RectTransform_c *method_00;
  UnityEngine_RectTransform_o *target;
  UnityEngine_UI_ScrollRect_o *__this_00;
  Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *__this_01;
  float value_00;
  
  __this_00 = (__this->fields)._scroll;
  if (__this_00 != (UnityEngine_UI_ScrollRect_o *)0x0) {
    UnityEngine_UI_ScrollRect__set_verticalNormalizedPosition(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  value_00 = (float)il2cpp_runtime_helper_022b2c90();
  __this_01 = (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *)(__this_00->fields).m_CachedPtr;
  if (__this_01 != (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *)0x0) {
    UnityEngine_CanvasGroup__set_alpha((UnityEngine_CanvasGroup_o *)__this_01,value_00,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9f22 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransform);
    g_data_057a9f22 = '\x01';
  }
  UnityEngine_EventSystems_UIBehaviour__Awake
            ((UnityEngine_EventSystems_UIBehaviour_o *)__this_01,(MethodInfo *)0x0);
  pUVar1 = (UnityEngine_RectTransform_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
  method_00 = extraout_RDX;
  target = (UnityEngine_RectTransform_o *)0x0;
  if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
    method_00 = pUVar1->klass;
    target = (UnityEngine_RectTransform_o *)0x0;
    if (method_00 == TypeInfo_RectTransform) {
      target = pUVar1;
    }
  }
  Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__Setup(__this_01,target,(MethodInfo *)method_00);
  return;
}


