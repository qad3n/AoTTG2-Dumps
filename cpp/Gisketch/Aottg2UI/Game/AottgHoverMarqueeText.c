// Type: Gisketch.Aottg2UI.Game.AottgHoverMarqueeText
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgHoverMarqueeText.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgHoverMarqueeText$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeText___cctor (const MethodInfo* method);
// 0x44e9dd0

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeText___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeText__RegisterFactory(method);
  return;
}


// Gisketch.Aottg2UI.Game.AottgHoverMarqueeText$$RegisterFactory
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeText__RegisterFactory (const MethodInfo* method);
// 0x44e7ed0

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeText__RegisterFactory(MethodInfo *method)

{
  char cVar1;
  int iVar2;
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *factory;
  
  if (g_data_057aec29 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_BuildRuntime);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgHoverMarqueeText);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchComponentFactory);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchComponentRegistry);
    il2cpp_runtime_helper_023445d0(&"AottgHoverMarqueeText");
    g_data_057aec29 = '\x01';
    iVar2 = *(int *)(TypeInfo_AottgHoverMarqueeText + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_AottgHoverMarqueeText + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
    cVar1 = **(char **)(TypeInfo_AottgHoverMarqueeText + 0xb8);
  }
  else {
    cVar1 = **(char **)(TypeInfo_AottgHoverMarqueeText + 0xb8);
  }
  if (cVar1 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_GisketchComponentRegistry + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this = (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)**(undefined8 **)(TypeInfo_GisketchComponentRegistry + 0xb8);
  factory = (Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchComponentFactory);
  Gisketch_Aottg2UI_Building_GisketchComponentFactory___ctor();
  if (__this == (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aec16 == '\0') {
      il2cpp_runtime_helper_023445d0(&"mainMenuOverlay");
      g_data_057aec16 = '\x01';
    }
    return;
  }
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry__Register
            (__this,"AottgHoverMarqueeText",factory,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_AottgHoverMarqueeText + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  **(undefined1 **)(TypeInfo_AottgHoverMarqueeText + 0xb8) = 1;
  return;
}


// Gisketch.Aottg2UI.Game.AottgHoverMarqueeText$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeText___ctor (Gisketch_Aottg2UI_Game_AottgHoverMarqueeText_o* __this, System_String_o* id, System_String_o* text, const MethodInfo* method);
// 0x44e9de0

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeText___ctor
               (Gisketch_Aottg2UI_Game_AottgHoverMarqueeText_o *__this,System_String_o *id,
               System_String_o *text,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._id = id;
  il2cpp_runtime_helper_022b4080(&__this->fields,id);
  if (text == (System_String_o *)0x0) {
    text = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  (__this->fields)._text = text;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._text,text);
  return;
}


// Gisketch.Aottg2UI.Game.AottgHoverMarqueeText$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeText__Build (Gisketch_Aottg2UI_Game_AottgHoverMarqueeText_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x44e9e40

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeText__Build
               (Gisketch_Aottg2UI_Game_AottgHoverMarqueeText_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               MethodInfo *method)

{
  UnityEngine_Component_Fields *pUVar1;
  void **ppvVar2;
  DG_Tweening_Tween_o **ppDVar3;
  undefined4 uVar4;
  int iVar5;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme;
  TMPro_TextMeshProUGUI_o *pTVar6;
  UnityEngine_Component_c *pUVar7;
  undefined8 uVar8;
  TMPro_TMP_Text_o *pTVar9;
  UnityEngine_Vector2_o UVar10;
  UnityEngine_Color_o *pUVar11;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar12;
  int32_t weight;
  System_Nullable_float__Fields __this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLength_o *minWidth;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *pGVar13;
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *pGVar14;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style;
  System_Type_array *components;
  System_Type_o *pSVar15;
  long lVar16;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Transform_o *pUVar17;
  UnityEngine_Transform_o *parent;
  Il2CppObject *pIVar18;
  TMPro_TMP_FontAsset_o *value;
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *x;
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *__this_02;
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *__this_03;
  UnityEngine_RectTransform_o *pUVar19;
  System_String_o *pSVar20;
  DG_Tweening_Sequence_o *pDVar21;
  DG_Tweening_Core_DOGetter_Vector2__o *getter;
  DG_Tweening_Core_DOSetter_Vector2__o *setter;
  DG_Tweening_Core_TweenerCore_Vector2__Vector2__VectorOptions__o *t;
  DG_Tweening_Tween_o *pDVar22;
  DG_Tweening_TweenCallback_o *callback;
  System_Nullable_float__Fields in_RCX;
  long extraout_RDX;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style_00;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_04;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *pMVar23;
  UnityEngine_RectTransform_o *pUVar24;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *method_00;
  System_Nullable_float__Fields __this_05;
  System_String_o **ppSVar25;
  UnityEngine_Component_o *__this_06;
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *__this_07;
  long *plVar26;
  MethodInfo *in_R8;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  UnityEngine_Color_o UVar31;
  UnityEngine_Color_o fallback;
  UnityEngine_Rect_o UVar32;
  float fStackY_190;
  float fStackY_180;
  
  if (g_data_057aec2a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"text");
    il2cpp_runtime_helper_023445d0(&"AottgHoverMarqueeText");
    g_data_057aec2a = '\x01';
  }
  __this_00 = (System_Nullable_float__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  pGVar13 = (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0;
  __this_05 = __this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor
            ((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (System_Nullable_float__Fields)0x0) {
    *(System_String_o **)((long)__this_00 + 0x10) = "AottgHoverMarqueeText";
    il2cpp_runtime_helper_022b4080((long)__this_00 + 0x10);
    *(System_String_o **)((long)__this_00 + 0x18) = (__this->fields)._id;
    il2cpp_runtime_helper_022b4080((long)__this_00 + 0x18);
    *(System_String_o **)((long)__this_00 + 0x20) = (__this->fields)._text;
    il2cpp_runtime_helper_022b4080((long)__this_00 + 0x20);
    *(System_String_o **)((long)__this_00 + 0x40) = "text";
    il2cpp_runtime_helper_022b4080((long)__this_00 + 0x40);
    *(System_String_o **)((long)__this_00 + 0x50) = "text";
    il2cpp_runtime_helper_022b4080();
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    minWidth = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
    in_RCX.hasValue = 0;
    in_RCX.value = 0.0;
    in_R8 = (MethodInfo *)0x0;
    pGVar13 = (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)
              Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                         (System_String_o *)0x0,0.0,width,height,minWidth,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         1.0,1.0,(MethodInfo *)0x0);
    __this_05 = (System_Nullable_float__Fields)((long)__this_00 + 0xd8);
    *(Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o **)((long)__this_00 + 0xd8) = pGVar13;
    il2cpp_runtime_helper_022b4080();
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Add
                (ui,(Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)__this_00,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  method_00 = pGVar13;
  ppSVar25 = (System_String_o **)__this_05;
  if (g_data_057aec2b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgHoverMarqueeTextRuntime_AddComponent_AottgHoverMarq);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectMask2D_AddComponent_RectMask2D);
    ppSVar25 = &"text";
    il2cpp_runtime_helper_023445d0();
    g_data_057aec2b = '\x01';
  }
  if (__this_05 != (System_Nullable_float__Fields)0x0) {
    UnityEngine_GameObject__AddComponent_object_((UnityEngine_GameObject_o *)__this_05,MethodInfo_RectMask2D_AddComponent_RectMask2D);
    method_00 = MethodInfo_AottgHoverMarqueeTextRuntime_AddComponent_AottgHoverMarq;
    pGVar14 = (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)
              UnityEngine_GameObject__AddComponent_object_
                        ((UnityEngine_GameObject_o *)__this_05,(MethodInfo_255A020 *)MethodInfo_AottgHoverMarqueeTextRuntime_AddComponent_AottgHoverMarq);
    ppSVar25 = (System_String_o **)__this_05;
    if ((pGVar13 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) && (extraout_RDX != 0)) {
      ppSVar25._0_4_ = 0;
      ppSVar25._4_4_ = 0.0;
      if (*(Gisketch_Aottg2UI_Styling_GisketchTheme_o **)(extraout_RDX + 0x18) !=
          (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
        pMVar23 = (MethodInfo *)(pGVar13->fields).textColor;
        style = Gisketch_Aottg2UI_Styling_GisketchTheme__GetStyle
                          (*(Gisketch_Aottg2UI_Styling_GisketchTheme_o **)(extraout_RDX + 0x18),
                           (pGVar13->fields).fontStyle,(MethodInfo *)0x0);
        theme = *(Gisketch_Aottg2UI_Styling_GisketchTheme_o **)(extraout_RDX + 0x18);
        ppSVar25 = *(System_String_o ***)&(pGVar13->fields).iconSize.fields;
        method_00 = (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0;
        bVar12 = System_String__IsNullOrEmpty((System_String_o *)ppSVar25,(MethodInfo *)0x0);
        if (pGVar14 != (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)0x0) {
          if ((char)bVar12 == '\0') {
            ppSVar25 = (System_String_o **)&(pGVar13->fields).iconSize;
          }
          else {
            ppSVar25 = &"text";
          }
          in_RCX = (System_Nullable_float__Fields)*ppSVar25;
          Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__CreateText
                    (pGVar14,style,theme,(System_String_o *)in_RCX,in_R8);
          pTVar6 = (pGVar14->fields)._text;
          if (pMVar23 == (MethodInfo *)0x0) {
            pMVar23 = (MethodInfo *)**(long **)(g_data_057b9c00 + 0xb8);
          }
          ppSVar25._0_4_ = 0;
          ppSVar25._4_4_ = 0.0;
          method_00 = style;
          if (pTVar6 != (TMPro_TextMeshProUGUI_o *)0x0) {
            (*(pTVar6->klass->vtable)._66_set_text.methodPtr)
                      (pTVar6,pMVar23,(pTVar6->klass->vtable)._66_set_text.method);
            Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__RegisterParent(pGVar14,pMVar23);
            Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__RefreshMarquee(pGVar14,pMVar23);
            return;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar13 = style_00;
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__CreateText
            ((Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)ppSVar25,style_00,
             (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)in_RCX,(System_String_o *)in_R8,in_R8);
  __this_06 = *(UnityEngine_Component_o **)((long)ppSVar25 + 0x20);
  if (method_00 == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    method_00 = (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  if (__this_06 != (UnityEngine_Component_o *)0x0) {
    pUVar7 = __this_06->klass;
    uVar8._0_4_ = pUVar7[3]._2.instance_size;
    uVar8._4_4_ = pUVar7[3]._2.actualSize;
    (*pUVar7[3]._2.genericContainerHandle)(__this_06,method_00,uVar8);
    Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__RegisterParent
              ((Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)ppSVar25,(MethodInfo *)method_00);
    Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__RefreshMarquee
              ((Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)ppSVar25,(MethodInfo *)method_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec2c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TextMeshProUGUI_AddComponent_TextMeshProUGUI);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTypography);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_GetValueOrDefault);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_GetValueOrDefault);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&"AoTTG Hover Marquee Text");
    g_data_057aec2c = '\x01';
  }
  components = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  handle = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar15 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) goto label_044ea64a;
  if ((pSVar15 == (System_Type_o *)0x0) || (lVar16 = il2cpp_runtime_helper_023051f0(pSVar15), lVar16 != 0)) {
    if ((int)components->max_length != 0) {
      components->m_Items[0] = pSVar15;
      il2cpp_runtime_helper_022b4080(components->m_Items,pSVar15);
      __this_01 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
      UnityEngine_GameObject___ctor_4dfc440(__this_01,"AoTTG Hover Marquee Text",components,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
        pUVar17 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
        parent = UnityEngine_Component__get_transform(__this_06,(MethodInfo *)0x0);
        if (pUVar17 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__SetParent_4e09e30(pUVar17,parent,0,(MethodInfo *)0x0);
          pIVar18 = UnityEngine_GameObject__GetComponent_object_(__this_01,MethodInfo_RectTransform_GetComponent_RectTransform);
          pUVar1 = &__this_06[1].fields;
          __this_06[1].fields.m_CachedPtr = (intptr_t)pIVar18;
          il2cpp_runtime_helper_022b4080(pUVar1);
          pUVar24 = (UnityEngine_RectTransform_o *)__this_06[1].fields.m_CachedPtr;
          if (pUVar24 != (UnityEngine_RectTransform_o *)0x0) {
            UnityEngine_RectTransform__set_anchorMin(pUVar24,(UnityEngine_Vector2_o)0x0,(MethodInfo *)0x0);
            if ((UnityEngine_RectTransform_o *)pUVar1->m_CachedPtr != (UnityEngine_RectTransform_o *)0x0) {
              UnityEngine_RectTransform__set_anchorMax
                        ((UnityEngine_RectTransform_o *)pUVar1->m_CachedPtr,
                         (UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0);
              if ((UnityEngine_RectTransform_o *)pUVar1->m_CachedPtr != (UnityEngine_RectTransform_o *)0x0) {
                UnityEngine_RectTransform__set_pivot
                          ((UnityEngine_RectTransform_o *)pUVar1->m_CachedPtr,
                           (UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
                pUVar24 = (UnityEngine_RectTransform_o *)pUVar1->m_CachedPtr;
                if (g_data_057a694c == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                  g_data_057a694c = '\x01';
                }
                if (pUVar24 != (UnityEngine_RectTransform_o *)0x0) {
                  UnityEngine_RectTransform__set_offsetMin
                            (pUVar24,(UnityEngine_Vector2_o)
                                     **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0)
                  ;
                  pUVar24 = (UnityEngine_RectTransform_o *)pUVar1->m_CachedPtr;
                  if (g_data_057a694c == '\0') {
                    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                    g_data_057a694c = '\x01';
                  }
                  if (pUVar24 != (UnityEngine_RectTransform_o *)0x0) {
                    UnityEngine_RectTransform__set_offsetMax
                              (pUVar24,(UnityEngine_Vector2_o)
                                       **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                               (MethodInfo *)0x0);
                    pIVar18 = UnityEngine_GameObject__AddComponent_object_(__this_01,MethodInfo_TextMeshProUGUI_AddComponent_TextMeshProUGUI);
                    ppvVar2 = &__this_06[1].monitor;
                    __this_06[1].monitor = pIVar18;
                    il2cpp_runtime_helper_022b4080(ppvVar2);
                    plVar26 = __this_06[1].monitor;
                    if (plVar26 != (long *)0x0) {
                      (**(code **)(*plVar26 + 0x2c8))(plVar26,0,*(undefined8 *)(*plVar26 + 0x2d0));
                      if (*ppvVar2 != (TMPro_TMP_Text_o *)0x0) {
                        TMPro_TMP_Text__set_enableWordWrapping(*ppvVar2,0,(MethodInfo *)0x0);
                        if (*ppvVar2 != (TMPro_TMP_Text_o *)0x0) {
                          TMPro_TMP_Text__set_alignment(*ppvVar2,0x1001,(MethodInfo *)0x0);
                          pTVar9 = *ppvVar2;
                          fVar27 = 20.0;
                          if ((pGVar13 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) &&
                             (0.0 < (pGVar13->fields).fontSize.fields.value)) {
                            fVar27 = System_Nullable_float___get_Value
                                               ((System_Nullable_float__o)&(pGVar13->fields).fontSize,
                                                MethodInfo_Single_get_Value);
                          }
                          if (pTVar9 != (TMPro_TMP_Text_o *)0x0) {
                            pSVar20 = (System_String_o *)0x0;
                            TMPro_TMP_Text__set_fontSize(pTVar9,fVar27,(MethodInfo *)0x0);
                            pTVar9 = *ppvVar2;
                            if (pGVar13 == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
                              weight = 400;
                              iVar5 = *(int *)(TypeInfo_GisketchTypography + 0xe4);
                            }
                            else {
                              pSVar20 = (pGVar13->fields).fontFamily;
                              weight = System_Nullable_int___GetValueOrDefault_37e7730
                                                 ((System_Nullable_int__o)&(pGVar13->fields).fontWeight,400,
                                                  MethodInfo_Int32_GetValueOrDefault);
                              iVar5 = *(int *)(TypeInfo_GisketchTypography + 0xe4);
                            }
                            if (iVar5 == 0) {
                              il2cpp_runtime_helper_02337ed0();
                            }
                            value = Gisketch_Aottg2UI_Styling_GisketchTypography__Resolve
                                              (pSVar20,weight,(System_String_o *)0x0,0,(MethodInfo *)0x0);
                            if (pTVar9 != (TMPro_TMP_Text_o *)0x0) {
                              TMPro_TMP_Text__set_font(pTVar9,value,(MethodInfo *)0x0);
                              if (pGVar13 == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
                                fVar27 = 1.0;
                                fVar28 = 1.0;
                                *(undefined4 *)&__this_06[2].klass = 0x3f800000;
                                *(undefined4 *)((long)&__this_06[2].klass + 4) = 0x3f800000;
                                *(undefined4 *)&__this_06[2].monitor = 0x3f800000;
                                *(undefined4 *)((long)&__this_06[2].monitor + 4) = 0x3f800000;
                                fVar29 = fVar27;
                                fVar30 = fVar28;
                                if (__this_04 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0)
                                goto label_044ea601;
                              }
                              else if (__this_04 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
                                UVar31.fields.b = 1.0;
                                UVar31.fields.a = 1.0;
                                UVar31.fields.r = 1.0;
                                UVar31.fields.g = 1.0;
                                UVar31 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                                                   (__this_04,(pGVar13->fields).textColor,UVar31,
                                                    (MethodInfo *)0x0);
                                fVar27 = UVar31.fields.r;
                                fVar28 = UVar31.fields.g;
                                *(UnityEngine_Color_Fields *)(__this_06 + 2) = UVar31.fields;
                                fVar29 = UVar31.fields.b;
                                fVar30 = UVar31.fields.a;
label_044ea601:
                                fallback.fields.g = fVar28;
                                fallback.fields.r = fVar27;
                                fallback.fields.a = fVar30;
                                fallback.fields.b = fVar29;
                                UVar31 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                                                   (__this_04,(System_String_o *)in_R8,fallback,
                                                    (MethodInfo *)0x0);
                                *(UnityEngine_Color_Fields *)&__this_06[2].fields = UVar31.fields;
                                plVar26 = __this_06[1].monitor;
                                if (plVar26 != (long *)0x0) {
                                  (**(code **)(*plVar26 + 0x2a8))
                                            ((int)__this_06[2].klass,(int)__this_06[2].monitor,plVar26,
                                             *(undefined8 *)(*plVar26 + 0x2b0));
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
label_044ea64a:
      il2cpp_runtime_helper_022b2c90();
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  pGVar14 = (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057aec2d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgHoverMarqueeParentRuntime_GetComponent_AottgHoverMa);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgHoverMarqueeParentRuntime_AddComponent_AottgHoverMa);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aec2d = '\x01';
  }
  __this_07 = pGVar14;
  pUVar17 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pGVar14,(MethodInfo *)0x0);
  if (pUVar17 != (UnityEngine_Transform_o *)0x0) {
    x = (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)
        UnityEngine_Transform__get_parent(pUVar17,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_07 = x;
    bVar12 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar12 != '\0') {
      return;
    }
    if (x != (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)0x0) {
      __this_02 = (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)
                  UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)x,MethodInfo_AottgHoverMarqueeParentRuntime_GetComponent_AottgHoverMa);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_03 = __this_02;
      bVar12 = UnityEngine_Object__op_Equality
                         ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      pMVar23 = extraout_RDX_00;
      if ((char)bVar12 != '\0') {
        __this_03 = (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)
                    UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
        __this_07 = x;
        if (__this_03 == (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)0x0) goto label_044ea77f;
        __this_02 = (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)
                    UnityEngine_GameObject__AddComponent_object_
                              ((UnityEngine_GameObject_o *)__this_03,MethodInfo_AottgHoverMarqueeParentRuntime_AddComponent_AottgHoverMa);
        pMVar23 = extraout_RDX_01;
      }
      __this_07 = __this_03;
      if (__this_02 != (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)0x0) {
        Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime__Register
                  ((Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o *)__this_02,pGVar14,pMVar23);
        return;
      }
    }
  }
label_044ea77f:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec2e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Vector2_RefreshMarquee_b__15_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RefreshMarquee_b__15_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RefreshMarquee_b__15_2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOGetter_Vector2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOSetter_Vector2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOTween);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TweenerCore_3_UnityEngine_Vector2_UnityEngine_Vector2_DG);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_SetLoops_Sequence);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_SetUpdate_Sequence);
    g_data_057aec2e = '\x01';
  }
  pTVar6 = (__this_07->fields)._text;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar12 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pTVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 == '\0') {
    pUVar24 = (__this_07->fields)._textRect;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar12 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)pUVar24,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar12 == '\0') {
      ppDVar3 = &(__this_07->fields)._tween;
      pDVar22 = (__this_07->fields)._tween;
      if (pDVar22 != (DG_Tweening_Tween_o *)0x0) {
        DG_Tweening_TweenExtensions__Kill(pDVar22,0,(MethodInfo *)0x0);
      }
      (__this_07->fields)._tween = (DG_Tweening_Tween_o *)0x0;
      plVar26 = (long *)ppDVar3;
      il2cpp_runtime_helper_022b4080();
      pUVar24 = (__this_07->fields)._textRect;
      if (g_data_057a694c == '\0') {
        plVar26 = &TypeInfo_Vector2;
        il2cpp_runtime_helper_023445d0();
        g_data_057a694c = '\x01';
      }
      if (pUVar24 != (UnityEngine_RectTransform_o *)0x0) {
        UnityEngine_RectTransform__set_anchoredPosition
                  (pUVar24,(UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                   (MethodInfo *)0x0);
        pTVar6 = (__this_07->fields)._text;
        plVar26 = (long *)0x0;
        if (pTVar6 != (TMPro_TextMeshProUGUI_o *)0x0) {
          pUVar11 = &(__this_07->fields)._activeColor;
          if ((char)(__this_07->fields)._active == '\0') {
            pUVar11 = &(__this_07->fields)._normalColor;
          }
          uVar4 = (pUVar11->fields).r;
          (*(pTVar6->klass->vtable)._23_set_color.methodPtr)(uVar4);
          pUVar19 = (UnityEngine_RectTransform_o *)
                    UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)__this_07,(MethodInfo *)0x0);
          pUVar24 = (UnityEngine_RectTransform_o *)0x0;
          if ((pUVar19 != (UnityEngine_RectTransform_o *)0x0) &&
             (pUVar24 = (UnityEngine_RectTransform_o *)0x0, pUVar19->klass == TypeInfo_RectTransform)) {
            pUVar24 = pUVar19;
          }
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          plVar26 = (long *)pUVar24;
          bVar12 = UnityEngine_Object__op_Inequality
                             ((UnityEngine_Object_o *)pUVar24,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          fVar27 = 0.0;
          fStackY_190 = 0.0;
          if ((char)bVar12 != '\0') {
            if (pUVar24 == (UnityEngine_RectTransform_o *)0x0) goto label_044eacb3;
            UVar32 = UnityEngine_RectTransform__get_rect(pUVar24,(MethodInfo *)0x0);
            fVar27 = UVar32.fields.m_XMin;
            fStackY_190 = UVar32.fields.m_Width;
          }
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0(fVar27);
          }
          plVar26 = (long *)pUVar24;
          bVar12 = UnityEngine_Object__op_Inequality
                             ((UnityEngine_Object_o *)pUVar24,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          fVar27 = 0.0;
          if ((char)bVar12 != '\0') {
            if (pUVar24 == (UnityEngine_RectTransform_o *)0x0) goto label_044eacb3;
            UVar32 = UnityEngine_RectTransform__get_rect(pUVar24,(MethodInfo *)0x0);
            fVar27 = UVar32.fields.m_Height;
            plVar26 = (long *)pUVar24;
          }
          pTVar6 = (__this_07->fields)._text;
          if (pTVar6 != (TMPro_TextMeshProUGUI_o *)0x0) {
            pSVar20 = (System_String_o *)
                      (*(pTVar6->klass->vtable)._65_get_text.methodPtr)
                                (pTVar6,(pTVar6->klass->vtable)._65_get_text.method);
            UVar10 = TMPro_TMP_Text__GetPreferredValues_4c6ffa0
                               ((TMPro_TMP_Text_o *)pTVar6,pSVar20,(MethodInfo *)0x0);
            pUVar24 = (__this_07->fields)._textRect;
            plVar26 = (long *)0x0;
            if (pUVar24 != (UnityEngine_RectTransform_o *)0x0) {
              fVar28 = fStackY_190;
              if (fStackY_190 <= 1.0) {
                fVar28 = 1.0;
              }
              UnityEngine_RectTransform__SetSizeWithCurrentAnchors(pUVar24,0,fVar28,(MethodInfo *)0x0);
              pUVar24 = (__this_07->fields)._textRect;
              plVar26 = (long *)0x0;
              if (pUVar24 != (UnityEngine_RectTransform_o *)0x0) {
                UnityEngine_RectTransform__SetSizeWithCurrentAnchors(pUVar24,1,fVar27,(MethodInfo *)0x0);
                pTVar6 = (__this_07->fields)._text;
                plVar26 = (long *)0x0;
                if (pTVar6 != (TMPro_TextMeshProUGUI_o *)0x0) {
                  TMPro_TMP_Text__set_overflowMode((TMPro_TMP_Text_o *)pTVar6,1,(MethodInfo *)0x0);
                  if ((char)(__this_07->fields)._active == '\0') {
                    return;
                  }
                  if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  bVar12 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
                  fStackY_180 = UVar10.fields.x;
                  if (fStackY_180 <= fStackY_190) {
                    return;
                  }
                  if (fStackY_190 <= 1.0) {
                    return;
                  }
                  if ((char)bVar12 == '\0') {
                    return;
                  }
                  pTVar6 = (__this_07->fields)._text;
                  plVar26 = (long *)0x0;
                  if (pTVar6 != (TMPro_TextMeshProUGUI_o *)0x0) {
                    TMPro_TMP_Text__set_overflowMode((TMPro_TMP_Text_o *)pTVar6,0,(MethodInfo *)0x0);
                    pUVar24 = (__this_07->fields)._textRect;
                    plVar26 = (long *)0x0;
                    if (pUVar24 != (UnityEngine_RectTransform_o *)0x0) {
                      UnityEngine_RectTransform__SetSizeWithCurrentAnchors
                                (pUVar24,0,fStackY_180,(MethodInfo *)0x0);
                      fVar28 = (fStackY_180 - fStackY_190) + 32.0;
                      fVar29 = fVar28 / 34.0;
                      fVar27 = 1.0;
                      if (1.0 <= fVar29) {
                        fVar27 = fVar29;
                      }
                      if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      pDVar21 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
                      pDVar21 = DG_Tweening_TweenSettingsExtensions__AppendInterval
                                          (pDVar21,0.45,(MethodInfo *)0x0);
                      getter = (DG_Tweening_Core_DOGetter_Vector2__o *)il2cpp_runtime_helper_023052d0(TypeInfo_DOGetter_Vector2);
                      DG_Tweening_Core_DOGetter_Vector2____ctor();
                      setter = (DG_Tweening_Core_DOSetter_Vector2__o *)il2cpp_runtime_helper_023052d0(TypeInfo_DOSetter_Vector2);
                      DG_Tweening_Core_DOSetter_Vector2____ctor();
                      UVar10.fields.y = 0.0;
                      UVar10.fields.x = -fVar28;
                      t = DG_Tweening_DOTween__To_2356150(getter,setter,UVar10,fVar27,(MethodInfo *)0x0);
                      pDVar22 = (DG_Tweening_Tween_o *)
                                DG_Tweening_TweenSettingsExtensions__SetEase_object_
                                          ((Il2CppObject *)t,1,MethodInfo_TweenerCore_3_UnityEngine_Vector2_UnityEngine_Vector2_DG);
                      pDVar21 = DG_Tweening_TweenSettingsExtensions__Append(pDVar21,pDVar22,(MethodInfo *)0x0)
                      ;
                      pDVar21 = DG_Tweening_TweenSettingsExtensions__AppendInterval
                                          (pDVar21,0.45,(MethodInfo *)0x0);
                      callback = (DG_Tweening_TweenCallback_o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback);
                      DG_Tweening_TweenCallback___ctor();
                      pDVar21 = DG_Tweening_TweenSettingsExtensions__AppendCallback
                                          (pDVar21,callback,(MethodInfo *)0x0);
                      pIVar18 = DG_Tweening_TweenSettingsExtensions__SetLoops_object_
                                          ((Il2CppObject *)pDVar21,-1,MethodInfo_Sequence_SetLoops_Sequence);
                      pDVar22 = (DG_Tweening_Tween_o *)
                                DG_Tweening_TweenSettingsExtensions__SetUpdate_object_(pIVar18,1,MethodInfo_Sequence_SetUpdate_Sequence)
                      ;
                      (__this_07->fields)._tween = pDVar22;
                      il2cpp_runtime_helper_022b4080(ppDVar3,pDVar22);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
label_044eacb3:
      il2cpp_runtime_helper_022b2c90();
      pDVar22 = (DG_Tweening_Tween_o *)
                (((UnityEngine_RectTransform_o *)((long)plVar26 + 0x48))->fields).m_CachedPtr;
      if (pDVar22 != (DG_Tweening_Tween_o *)0x0) {
        DG_Tweening_TweenExtensions__Kill(pDVar22,0,(MethodInfo *)0x0);
        return;
      }
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgHoverMarqueeText$$BuildRuntime
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgHoverMarqueeText__BuildRuntime (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x44ea010

bool_conflict
Gisketch_Aottg2UI_Game_AottgHoverMarqueeText__BuildRuntime
          (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
          Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
          Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  UnityEngine_Material_o **ppUVar1;
  DG_Tweening_Tween_o **ppDVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *pGVar7;
  TMPro_TMP_Text_o *pTVar8;
  UnityEngine_Vector2_o UVar9;
  UnityEngine_Color_o *pUVar10;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar11;
  bool_conflict extraout_EAX;
  int32_t weight;
  bool_conflict extraout_EAX_00;
  bool_conflict extraout_EAX_01;
  bool_conflict extraout_EAX_02;
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *pGVar12;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *style;
  undefined8 extraout_RAX;
  System_Type_array *components;
  System_Type_o *pSVar13;
  long lVar14;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *pUVar15;
  UnityEngine_Transform_o *parent;
  Il2CppObject *pIVar16;
  UnityEngine_Material_o *pUVar17;
  TMPro_TMP_FontAsset_o *value;
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *x;
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *__this_00;
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *__this_01;
  UnityEngine_RectTransform_o *pUVar18;
  System_String_o *pSVar19;
  DG_Tweening_Sequence_o *pDVar20;
  DG_Tweening_Core_DOGetter_Vector2__o *getter;
  DG_Tweening_Core_DOSetter_Vector2__o *setter;
  DG_Tweening_Core_TweenerCore_Vector2__Vector2__VectorOptions__o *t;
  DG_Tweening_Tween_o *pDVar21;
  DG_Tweening_TweenCallback_o *callback;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style_00;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_02;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar22;
  UnityEngine_RectTransform_o *pUVar23;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *method_00;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *pGVar24;
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *pGVar25;
  TMPro_TextMeshProUGUI_o *pTVar26;
  long *plVar27;
  System_String_o **ppSVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  UnityEngine_Color_o UVar33;
  UnityEngine_Color_o fallback;
  UnityEngine_Rect_o UVar34;
  float fStack_118;
  float fStack_108;
  
  method_00 = node;
  pGVar25 = (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)go;
  if (g_data_057aec2b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgHoverMarqueeTextRuntime_AddComponent_AottgHoverMarq);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectMask2D_AddComponent_RectMask2D);
    pGVar25 = (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)&"text";
    il2cpp_runtime_helper_023445d0();
    g_data_057aec2b = '\x01';
  }
  if (go != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__AddComponent_object_(go,MethodInfo_RectMask2D_AddComponent_RectMask2D);
    method_00 = MethodInfo_AottgHoverMarqueeTextRuntime_AddComponent_AottgHoverMarq;
    pGVar12 = (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)
              UnityEngine_GameObject__AddComponent_object_(go,(MethodInfo_255A020 *)MethodInfo_AottgHoverMarqueeTextRuntime_AddComponent_AottgHoverMarq);
    pGVar25 = (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)go;
    if ((node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) &&
       (context != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0)) {
      pGVar7 = (context->fields).Theme;
      pGVar25 = (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)0x0;
      if (pGVar7 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
        pMVar22 = (MethodInfo *)(node->fields).text;
        style = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                Gisketch_Aottg2UI_Styling_GisketchTheme__GetStyle
                          (pGVar7,(node->fields).style,(MethodInfo *)0x0);
        pGVar7 = (context->fields).Theme;
        pGVar25 = (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)(node->fields).value;
        method_00 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
        bVar11 = System_String__IsNullOrEmpty((System_String_o *)pGVar25,(MethodInfo *)0x0);
        if (pGVar12 != (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)0x0) {
          if ((char)bVar11 == '\0') {
            ppSVar28 = &(node->fields).value;
          }
          else {
            ppSVar28 = (System_String_o **)&"text";
          }
          view = (Gisketch_Aottg2UI_Building_GisketchView_o *)*ppSVar28;
          Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__CreateText
                    (pGVar12,(Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)style,pGVar7,
                     (System_String_o *)view,method);
          pTVar26 = (pGVar12->fields)._text;
          if (pMVar22 == (MethodInfo *)0x0) {
            pMVar22 = (MethodInfo *)**(long **)(g_data_057b9c00 + 0xb8);
          }
          pGVar25 = (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)0x0;
          method_00 = style;
          if (pTVar26 != (TMPro_TextMeshProUGUI_o *)0x0) {
            (*(pTVar26->klass->vtable)._66_set_text.methodPtr)
                      (pTVar26,pMVar22,(pTVar26->klass->vtable)._66_set_text.method);
            Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__RegisterParent(pGVar12,pMVar22);
            Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__RefreshMarquee(pGVar12,pMVar22);
            return (bool_conflict)CONCAT71((int7)((ulong)extraout_RAX >> 8),1);
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar24 = style_00;
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__CreateText
            (pGVar25,style_00,(Gisketch_Aottg2UI_Styling_GisketchTheme_o *)view,(System_String_o *)method,
             method);
  pTVar26 = (pGVar25->fields)._text;
  if (method_00 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    method_00 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  if (pTVar26 != (TMPro_TextMeshProUGUI_o *)0x0) {
    (*(pTVar26->klass->vtable)._66_set_text.methodPtr)
              (pTVar26,method_00,(pTVar26->klass->vtable)._66_set_text.method);
    Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__RegisterParent(pGVar25,(MethodInfo *)method_00);
    Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__RefreshMarquee(pGVar25,(MethodInfo *)method_00);
    return extraout_EAX;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec2c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TextMeshProUGUI_AddComponent_TextMeshProUGUI);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTypography);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_GetValueOrDefault);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_GetValueOrDefault);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&"AoTTG Hover Marquee Text");
    g_data_057aec2c = '\x01';
  }
  components = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  handle = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar13 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) goto label_044ea64a;
  if ((pSVar13 == (System_Type_o *)0x0) || (lVar14 = il2cpp_runtime_helper_023051f0(pSVar13), lVar14 != 0)) {
    if ((int)components->max_length != 0) {
      components->m_Items[0] = pSVar13;
      il2cpp_runtime_helper_022b4080(components->m_Items,pSVar13);
      __this = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
      UnityEngine_GameObject___ctor_4dfc440(__this,"AoTTG Hover Marquee Text",components,(MethodInfo *)0x0);
      if (__this != (UnityEngine_GameObject_o *)0x0) {
        pUVar15 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
        parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pTVar26,(MethodInfo *)0x0);
        if (pUVar15 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__SetParent_4e09e30(pUVar15,parent,0,(MethodInfo *)0x0);
          pIVar16 = UnityEngine_GameObject__GetComponent_object_(__this,MethodInfo_RectTransform_GetComponent_RectTransform);
          pUVar10 = &(pTVar26->fields).m_Color;
          *(Il2CppObject **)&(pTVar26->fields).m_Color.fields = pIVar16;
          il2cpp_runtime_helper_022b4080(pUVar10);
          pUVar23 = *(UnityEngine_RectTransform_o **)&(pTVar26->fields).m_Color.fields;
          if (pUVar23 != (UnityEngine_RectTransform_o *)0x0) {
            UnityEngine_RectTransform__set_anchorMin(pUVar23,(UnityEngine_Vector2_o)0x0,(MethodInfo *)0x0);
            if (*(UnityEngine_RectTransform_o **)&pUVar10->fields != (UnityEngine_RectTransform_o *)0x0) {
              UnityEngine_RectTransform__set_anchorMax
                        (*(UnityEngine_RectTransform_o **)&pUVar10->fields,
                         (UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0);
              if (*(UnityEngine_RectTransform_o **)&pUVar10->fields != (UnityEngine_RectTransform_o *)0x0) {
                UnityEngine_RectTransform__set_pivot
                          (*(UnityEngine_RectTransform_o **)&pUVar10->fields,
                           (UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
                pUVar23 = *(UnityEngine_RectTransform_o **)&pUVar10->fields;
                if (g_data_057a694c == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                  g_data_057a694c = '\x01';
                }
                if (pUVar23 != (UnityEngine_RectTransform_o *)0x0) {
                  UnityEngine_RectTransform__set_offsetMin
                            (pUVar23,(UnityEngine_Vector2_o)
                                     **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0)
                  ;
                  pUVar23 = *(UnityEngine_RectTransform_o **)&pUVar10->fields;
                  if (g_data_057a694c == '\0') {
                    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                    g_data_057a694c = '\x01';
                  }
                  if (pUVar23 != (UnityEngine_RectTransform_o *)0x0) {
                    UnityEngine_RectTransform__set_offsetMax
                              (pUVar23,(UnityEngine_Vector2_o)
                                       **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                               (MethodInfo *)0x0);
                    pUVar17 = (UnityEngine_Material_o *)
                              UnityEngine_GameObject__AddComponent_object_(__this,MethodInfo_TextMeshProUGUI_AddComponent_TextMeshProUGUI);
                    ppUVar1 = &(pTVar26->fields).m_Material;
                    (pTVar26->fields).m_Material = pUVar17;
                    il2cpp_runtime_helper_022b4080(ppUVar1);
                    pUVar17 = (pTVar26->fields).m_Material;
                    if (pUVar17 != (UnityEngine_Material_o *)0x0) {
                      (*(code *)pUVar17->klass[1].vtable._1_Finalize.method)
                                (pUVar17,0,pUVar17->klass[1].vtable._2_GetHashCode.methodPtr);
                      if ((TMPro_TMP_Text_o *)*ppUVar1 != (TMPro_TMP_Text_o *)0x0) {
                        TMPro_TMP_Text__set_enableWordWrapping
                                  ((TMPro_TMP_Text_o *)*ppUVar1,0,(MethodInfo *)0x0);
                        if ((TMPro_TMP_Text_o *)*ppUVar1 != (TMPro_TMP_Text_o *)0x0) {
                          TMPro_TMP_Text__set_alignment((TMPro_TMP_Text_o *)*ppUVar1,0x1001,(MethodInfo *)0x0)
                          ;
                          pTVar8 = (TMPro_TMP_Text_o *)*ppUVar1;
                          fVar29 = 20.0;
                          if ((pGVar24 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) &&
                             (0.0 < (pGVar24->fields).fontSize.fields.value)) {
                            fVar29 = System_Nullable_float___get_Value
                                               ((System_Nullable_float__o)&(pGVar24->fields).fontSize,
                                                MethodInfo_Single_get_Value);
                          }
                          if (pTVar8 != (TMPro_TMP_Text_o *)0x0) {
                            pSVar19 = (System_String_o *)0x0;
                            TMPro_TMP_Text__set_fontSize(pTVar8,fVar29,(MethodInfo *)0x0);
                            pTVar8 = (TMPro_TMP_Text_o *)*ppUVar1;
                            if (pGVar24 == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
                              weight = 400;
                              iVar6 = *(int *)(TypeInfo_GisketchTypography + 0xe4);
                            }
                            else {
                              pSVar19 = (pGVar24->fields).fontFamily;
                              weight = System_Nullable_int___GetValueOrDefault_37e7730
                                                 ((System_Nullable_int__o)&(pGVar24->fields).fontWeight,400,
                                                  MethodInfo_Int32_GetValueOrDefault);
                              iVar6 = *(int *)(TypeInfo_GisketchTypography + 0xe4);
                            }
                            if (iVar6 == 0) {
                              il2cpp_runtime_helper_02337ed0();
                            }
                            value = Gisketch_Aottg2UI_Styling_GisketchTypography__Resolve
                                              (pSVar19,weight,(System_String_o *)0x0,0,(MethodInfo *)0x0);
                            if (pTVar8 != (TMPro_TMP_Text_o *)0x0) {
                              TMPro_TMP_Text__set_font(pTVar8,value,(MethodInfo *)0x0);
                              if (pGVar24 == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
                                fVar29 = 1.0;
                                fVar30 = 1.0;
                                (pTVar26->fields).m_Color.fields.b = 1.0;
                                (pTVar26->fields).m_Color.fields.a = 1.0;
                                (pTVar26->fields).m_SkipLayoutUpdate = 0x3f800000;
                                (pTVar26->fields).m_SkipMaterialUpdate = 0x3f800000;
                                fVar31 = fVar29;
                                fVar32 = fVar30;
                                if (__this_02 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0)
                                goto label_044ea601;
                              }
                              else if (__this_02 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
                                UVar33.fields.b = 1.0;
                                UVar33.fields.a = 1.0;
                                UVar33.fields.r = 1.0;
                                UVar33.fields.g = 1.0;
                                UVar33 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                                                   (__this_02,(pGVar24->fields).textColor,UVar33,
                                                    (MethodInfo *)0x0);
                                fVar29 = UVar33.fields.r;
                                fVar30 = UVar33.fields.g;
                                *(UnityEngine_Color_Fields *)&(pTVar26->fields).m_Color.fields.b =
                                     UVar33.fields;
                                fVar31 = UVar33.fields.b;
                                fVar32 = UVar33.fields.a;
label_044ea601:
                                fallback.fields.g = fVar30;
                                fallback.fields.r = fVar29;
                                fallback.fields.a = fVar32;
                                fallback.fields.b = fVar31;
                                UVar33 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                                                   (__this_02,(System_String_o *)method,fallback,
                                                    (MethodInfo *)0x0);
                                (pTVar26->fields).m_RaycastTarget = (bool_conflict)UVar33.fields.r;
                                (pTVar26->fields).m_RaycastTargetCache = (bool_conflict)UVar33.fields.g;
                                (pTVar26->fields).m_RaycastPadding.fields.x = UVar33.fields.b;
                                (pTVar26->fields).m_RaycastPadding.fields.y = UVar33.fields.a;
                                pUVar17 = (pTVar26->fields).m_Material;
                                if (pUVar17 != (UnityEngine_Material_o *)0x0) {
                                  uVar3 = (pTVar26->fields).m_SkipLayoutUpdate;
                                  uVar4 = (pTVar26->fields).m_Color.fields.b;
                                  bVar11 = (**(code **)&pUVar17->klass[1]._2.naturalAligment)
                                                     (uVar4,uVar3,pUVar17,
                                                      pUVar17->klass[1].vtable._0_Equals.methodPtr);
                                  return bVar11;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
label_044ea64a:
      il2cpp_runtime_helper_022b2c90();
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  pGVar25 = (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057aec2d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgHoverMarqueeParentRuntime_GetComponent_AottgHoverMa);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgHoverMarqueeParentRuntime_AddComponent_AottgHoverMa);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aec2d = '\x01';
  }
  pGVar12 = pGVar25;
  pUVar15 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pGVar25,(MethodInfo *)0x0);
  if (pUVar15 != (UnityEngine_Transform_o *)0x0) {
    x = (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)
        UnityEngine_Transform__get_parent(pUVar15,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pGVar12 = x;
    bVar11 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar11 != '\0') {
      return bVar11;
    }
    if (x != (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)0x0) {
      __this_00 = (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)
                  UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)x,MethodInfo_AottgHoverMarqueeParentRuntime_GetComponent_AottgHoverMa);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_01 = __this_00;
      bVar11 = UnityEngine_Object__op_Equality
                         ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      pMVar22 = extraout_RDX;
      if ((char)bVar11 != '\0') {
        __this_01 = (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)
                    UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
        pGVar12 = x;
        if (__this_01 == (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)0x0) goto label_044ea77f;
        __this_00 = (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)
                    UnityEngine_GameObject__AddComponent_object_
                              ((UnityEngine_GameObject_o *)__this_01,MethodInfo_AottgHoverMarqueeParentRuntime_AddComponent_AottgHoverMa);
        pMVar22 = extraout_RDX_00;
      }
      pGVar12 = __this_01;
      if (__this_00 != (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)0x0) {
        Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime__Register
                  ((Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o *)__this_00,pGVar25,pMVar22);
        return extraout_EAX_00;
      }
    }
  }
label_044ea77f:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec2e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Vector2_RefreshMarquee_b__15_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RefreshMarquee_b__15_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RefreshMarquee_b__15_2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOGetter_Vector2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOSetter_Vector2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOTween);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TweenerCore_3_UnityEngine_Vector2_UnityEngine_Vector2_DG);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_SetLoops_Sequence);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_SetUpdate_Sequence);
    g_data_057aec2e = '\x01';
  }
  pTVar26 = (pGVar12->fields)._text;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar11 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pTVar26,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar11 == '\0') {
    pUVar23 = (pGVar12->fields)._textRect;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar11 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)pUVar23,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar11 == '\0') {
      ppDVar2 = &(pGVar12->fields)._tween;
      pDVar21 = (pGVar12->fields)._tween;
      if (pDVar21 != (DG_Tweening_Tween_o *)0x0) {
        DG_Tweening_TweenExtensions__Kill(pDVar21,0,(MethodInfo *)0x0);
      }
      (pGVar12->fields)._tween = (DG_Tweening_Tween_o *)0x0;
      plVar27 = (long *)ppDVar2;
      il2cpp_runtime_helper_022b4080();
      pUVar23 = (pGVar12->fields)._textRect;
      if (g_data_057a694c == '\0') {
        plVar27 = &TypeInfo_Vector2;
        il2cpp_runtime_helper_023445d0();
        g_data_057a694c = '\x01';
      }
      if (pUVar23 != (UnityEngine_RectTransform_o *)0x0) {
        UnityEngine_RectTransform__set_anchoredPosition
                  (pUVar23,(UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                   (MethodInfo *)0x0);
        pTVar26 = (pGVar12->fields)._text;
        plVar27 = (long *)0x0;
        if (pTVar26 != (TMPro_TextMeshProUGUI_o *)0x0) {
          pUVar10 = &(pGVar12->fields)._activeColor;
          if ((char)(pGVar12->fields)._active == '\0') {
            pUVar10 = &(pGVar12->fields)._normalColor;
          }
          uVar5 = (pUVar10->fields).r;
          (*(pTVar26->klass->vtable)._23_set_color.methodPtr)(uVar5);
          pUVar18 = (UnityEngine_RectTransform_o *)
                    UnityEngine_Component__get_transform((UnityEngine_Component_o *)pGVar12,(MethodInfo *)0x0)
          ;
          pUVar23 = (UnityEngine_RectTransform_o *)0x0;
          if ((pUVar18 != (UnityEngine_RectTransform_o *)0x0) &&
             (pUVar23 = (UnityEngine_RectTransform_o *)0x0, pUVar18->klass == TypeInfo_RectTransform)) {
            pUVar23 = pUVar18;
          }
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          plVar27 = (long *)pUVar23;
          bVar11 = UnityEngine_Object__op_Inequality
                             ((UnityEngine_Object_o *)pUVar23,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          fVar29 = 0.0;
          fStack_118 = 0.0;
          if ((char)bVar11 != '\0') {
            if (pUVar23 == (UnityEngine_RectTransform_o *)0x0) goto label_044eacb3;
            UVar34 = UnityEngine_RectTransform__get_rect(pUVar23,(MethodInfo *)0x0);
            fVar29 = UVar34.fields.m_XMin;
            fStack_118 = UVar34.fields.m_Width;
          }
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0(fVar29);
          }
          plVar27 = (long *)pUVar23;
          bVar11 = UnityEngine_Object__op_Inequality
                             ((UnityEngine_Object_o *)pUVar23,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          fVar29 = 0.0;
          if ((char)bVar11 != '\0') {
            if (pUVar23 == (UnityEngine_RectTransform_o *)0x0) goto label_044eacb3;
            UVar34 = UnityEngine_RectTransform__get_rect(pUVar23,(MethodInfo *)0x0);
            fVar29 = UVar34.fields.m_Height;
            plVar27 = (long *)pUVar23;
          }
          pTVar26 = (pGVar12->fields)._text;
          if (pTVar26 != (TMPro_TextMeshProUGUI_o *)0x0) {
            pSVar19 = (System_String_o *)
                      (*(pTVar26->klass->vtable)._65_get_text.methodPtr)
                                (pTVar26,(pTVar26->klass->vtable)._65_get_text.method);
            UVar9 = TMPro_TMP_Text__GetPreferredValues_4c6ffa0
                              ((TMPro_TMP_Text_o *)pTVar26,pSVar19,(MethodInfo *)0x0);
            pUVar23 = (pGVar12->fields)._textRect;
            plVar27 = (long *)0x0;
            if (pUVar23 != (UnityEngine_RectTransform_o *)0x0) {
              fVar30 = fStack_118;
              if (fStack_118 <= 1.0) {
                fVar30 = 1.0;
              }
              UnityEngine_RectTransform__SetSizeWithCurrentAnchors(pUVar23,0,fVar30,(MethodInfo *)0x0);
              pUVar23 = (pGVar12->fields)._textRect;
              plVar27 = (long *)0x0;
              if (pUVar23 != (UnityEngine_RectTransform_o *)0x0) {
                UnityEngine_RectTransform__SetSizeWithCurrentAnchors(pUVar23,1,fVar29,(MethodInfo *)0x0);
                pTVar26 = (pGVar12->fields)._text;
                plVar27 = (long *)0x0;
                if (pTVar26 != (TMPro_TextMeshProUGUI_o *)0x0) {
                  TMPro_TMP_Text__set_overflowMode((TMPro_TMP_Text_o *)pTVar26,1,(MethodInfo *)0x0);
                  if ((char)(pGVar12->fields)._active == '\0') {
                    return extraout_EAX_01;
                  }
                  if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  bVar11 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
                  fStack_108 = UVar9.fields.x;
                  if (fStack_108 <= fStack_118) {
                    return bVar11;
                  }
                  if (fStack_118 <= 1.0) {
                    return bVar11;
                  }
                  if ((char)bVar11 == '\0') {
                    return bVar11;
                  }
                  pTVar26 = (pGVar12->fields)._text;
                  plVar27 = (long *)0x0;
                  if (pTVar26 != (TMPro_TextMeshProUGUI_o *)0x0) {
                    TMPro_TMP_Text__set_overflowMode((TMPro_TMP_Text_o *)pTVar26,0,(MethodInfo *)0x0);
                    pUVar23 = (pGVar12->fields)._textRect;
                    plVar27 = (long *)0x0;
                    if (pUVar23 != (UnityEngine_RectTransform_o *)0x0) {
                      UnityEngine_RectTransform__SetSizeWithCurrentAnchors
                                (pUVar23,0,fStack_108,(MethodInfo *)0x0);
                      fVar30 = (fStack_108 - fStack_118) + 32.0;
                      fVar31 = fVar30 / 34.0;
                      fVar29 = 1.0;
                      if (1.0 <= fVar31) {
                        fVar29 = fVar31;
                      }
                      if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      pDVar20 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
                      pDVar20 = DG_Tweening_TweenSettingsExtensions__AppendInterval
                                          (pDVar20,0.45,(MethodInfo *)0x0);
                      getter = (DG_Tweening_Core_DOGetter_Vector2__o *)il2cpp_runtime_helper_023052d0(TypeInfo_DOGetter_Vector2);
                      DG_Tweening_Core_DOGetter_Vector2____ctor();
                      setter = (DG_Tweening_Core_DOSetter_Vector2__o *)il2cpp_runtime_helper_023052d0(TypeInfo_DOSetter_Vector2);
                      DG_Tweening_Core_DOSetter_Vector2____ctor();
                      UVar9.fields.y = 0.0;
                      UVar9.fields.x = -fVar30;
                      t = DG_Tweening_DOTween__To_2356150(getter,setter,UVar9,fVar29,(MethodInfo *)0x0);
                      pDVar21 = (DG_Tweening_Tween_o *)
                                DG_Tweening_TweenSettingsExtensions__SetEase_object_
                                          ((Il2CppObject *)t,1,MethodInfo_TweenerCore_3_UnityEngine_Vector2_UnityEngine_Vector2_DG);
                      pDVar20 = DG_Tweening_TweenSettingsExtensions__Append(pDVar20,pDVar21,(MethodInfo *)0x0)
                      ;
                      pDVar20 = DG_Tweening_TweenSettingsExtensions__AppendInterval
                                          (pDVar20,0.45,(MethodInfo *)0x0);
                      callback = (DG_Tweening_TweenCallback_o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback);
                      DG_Tweening_TweenCallback___ctor();
                      pDVar20 = DG_Tweening_TweenSettingsExtensions__AppendCallback
                                          (pDVar20,callback,(MethodInfo *)0x0);
                      pIVar16 = DG_Tweening_TweenSettingsExtensions__SetLoops_object_
                                          ((Il2CppObject *)pDVar20,-1,MethodInfo_Sequence_SetLoops_Sequence);
                      pDVar21 = (DG_Tweening_Tween_o *)
                                DG_Tweening_TweenSettingsExtensions__SetUpdate_object_(pIVar16,1,MethodInfo_Sequence_SetUpdate_Sequence)
                      ;
                      (pGVar12->fields)._tween = pDVar21;
                      bVar11 = il2cpp_runtime_helper_022b4080(ppDVar2,pDVar21);
                      return bVar11;
                    }
                  }
                }
              }
            }
          }
        }
      }
label_044eacb3:
      bVar11 = il2cpp_runtime_helper_022b2c90();
      pDVar21 = (DG_Tweening_Tween_o *)
                (((UnityEngine_RectTransform_o *)((long)plVar27 + 0x48))->fields).m_CachedPtr;
      if (pDVar21 != (DG_Tweening_Tween_o *)0x0) {
        DG_Tweening_TweenExtensions__Kill(pDVar21,0,(MethodInfo *)0x0);
        return extraout_EAX_02;
      }
      return bVar11;
    }
  }
  return bVar11;
}


