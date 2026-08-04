// Type: UI.PromptPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/PromptPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/PromptPopup.cs
// --------------------------------

// UI.PromptPopup$$get_TopBarHeight
// il2cpp: float UI_PromptPopup__get_TopBarHeight (UI_PromptPopup_o* __this, const MethodInfo* method);
// 0x4350420

float UI_PromptPopup__get_TopBarHeight(UI_PromptPopup_o *__this,MethodInfo *method)

{
  return 55.0;
}


// UI.PromptPopup$$get_BottomBarHeight
// il2cpp: float UI_PromptPopup__get_BottomBarHeight (UI_PromptPopup_o* __this, const MethodInfo* method);
// 0x4350430

float UI_PromptPopup__get_BottomBarHeight(UI_PromptPopup_o *__this,MethodInfo *method)

{
  return 55.0;
}


// UI.PromptPopup$$get_TitleFontSize
// il2cpp: int32_t UI_PromptPopup__get_TitleFontSize (UI_PromptPopup_o* __this, const MethodInfo* method);
// 0x4350440

int32_t UI_PromptPopup__get_TitleFontSize(UI_PromptPopup_o *__this,MethodInfo *method)

{
  return 0x1a;
}


// UI.PromptPopup$$get_ButtonFontSize
// il2cpp: int32_t UI_PromptPopup__get_ButtonFontSize (UI_PromptPopup_o* __this, const MethodInfo* method);
// 0x4350450

int32_t UI_PromptPopup__get_ButtonFontSize(UI_PromptPopup_o *__this,MethodInfo *method)

{
  return 0x16;
}


// UI.PromptPopup$$Setup
// il2cpp: void UI_PromptPopup__Setup (UI_PromptPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x4346e40

void UI_PromptPopup__Setup(UI_PromptPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  byte *pbVar1;
  UnityEngine_Texture2D_o **ppUVar2;
  UnityEngine_Texture2D_o **ppUVar3;
  System_Collections_Generic_HashSet_object__o *__this_00;
  UnityEngine_Component_o *__this_01;
  Settings_BaseSetting_o *pSVar4;
  UnityEngine_Object_o *x;
  Settings_IntSetting_o *pSVar5;
  Utility_Color255_o *__this_02;
  bool_conflict bVar6;
  int32_t iVar7;
  UnityEngine_Transform_o *parent_00;
  UnityEngine_Transform_o *pUVar8;
  Il2CppObject *pIVar9;
  UnityEngine_Transform_o *pUVar10;
  System_String_o *pSVar11;
  UI_ElementStyle_o *__this_03;
  UI_ElementStyle_o *__this_04;
  UnityEngine_GameObject_o *pUVar12;
  UI_ColorPickPopup_o *pUVar13;
  UI_ColorPickPopup_o *pUVar14;
  UI_ColorPickPopup_o *pUVar15;
  UI_ColorPickPopup_o *pUVar16;
  UnityEngine_Transform_c *pUVar17;
  UnityEngine_UI_RawImage_o *pUVar18;
  UnityEngine_RectTransform_o *pUVar19;
  UnityEngine_Events_UnityAction_o *pUVar20;
  UnityEngine_GameObject_o *pUVar21;
  UnityEngine_Events_UnityAction_o *onEndEdit;
  System_Func_string__bool__o *onValidate;
  System_Func_string__string__o *onCleanup;
  UnityEngine_Texture2D_o *pUVar22;
  UnityEngine_Color32_array *pUVar23;
  System_String_o **textureRect;
  byte extraout_DL;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  UnityEngine_UI_Image_o *extraout_RDX_00;
  MethodInfo *method_03;
  Il2CppClass *pIVar24;
  byte bVar25;
  Settings_ColorSetting_o *pSVar26;
  UnityEngine_UI_Image_o *pUVar27;
  MethodInfo *pMVar28;
  MethodInfo *in_R8;
  float fVar29;
  float fVar30;
  UnityEngine_Color_o UVar31;
  UnityEngine_Color_o rgbColor;
  float fStackY_10c;
  undefined1 auStack_68 [16];
  UnityEngine_RectTransform_o *pUStack_58;
  UI_ElementStyle_o *pUStack_50;
  UI_BasePanel_o *pUStack_48;
  
  if (g_data_057ae138 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_IgnoreScaler_AddComponent_IgnoreScaler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&"Prefabs/Panels/BackgroundDim");
    g_data_057ae138 = '\x01';
    method = extraout_RDX;
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,method);
  parent_00 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar8 = (UnityEngine_Transform_o *)
           UI_ElementFactory__InstantiateAndBind(parent_00,"Prefabs/Panels/BackgroundDim",(MethodInfo *)0x0);
  if ((pUVar8 != (UnityEngine_Transform_o *)0x0) &&
     (parent_00 = pUVar8,
     pIVar9 = UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)pUVar8,MethodInfo_Image_GetComponent_Image),
     pIVar9 != (Il2CppObject *)0x0)) {
    (*pIVar9->klass->vtable[0x17].methodPtr)(0,0,pIVar9,pIVar9->klass->vtable[0x17].method);
    UnityEngine_GameObject__AddComponent_object_((UnityEngine_GameObject_o *)pUVar8,MethodInfo_IgnoreScaler_AddComponent_IgnoreScaler);
    parent_00 = pUVar8;
    pUVar10 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar8,(MethodInfo *)0x0);
    if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__SetSiblingIndex(pUVar10,0,(MethodInfo *)0x0);
      __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._staticTransforms;
      pUVar10 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar8,(MethodInfo *)0x0);
      parent = (UI_BasePanel_o *)0x0;
      parent_00 = pUVar8;
      if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet_object___Add(__this_00,(Il2CppObject *)pUVar10,MethodInfo_Boolean_Add);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pUStack_48 = parent;
  if (g_data_057ae0e8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_float_float);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_CleanupHexInput);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_IsHexInputValid);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnAlphaDragged);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnHexInputChanged);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnHexInputEndEdit);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnHueDragged);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnRGBAInputChanged);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnSVDragged);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ColorPickDragArea_GetComponent_ColorPickDragArea);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_string_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_string_bool);
    il2cpp_runtime_helper_023445d0(&MethodInfo_InputSettingElement_GetComponent_InputSettingElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"SVContainer");
    il2cpp_runtime_helper_023445d0(&"HueContainer");
    il2cpp_runtime_helper_023445d0(&"Hex");
    il2cpp_runtime_helper_023445d0(&"R");
    il2cpp_runtime_helper_023445d0(&"AlphaContainer");
    il2cpp_runtime_helper_023445d0(&"AlphaImage");
    il2cpp_runtime_helper_023445d0(&"G");
    il2cpp_runtime_helper_023445d0(&"HueImage");
    il2cpp_runtime_helper_023445d0(&"B");
    il2cpp_runtime_helper_023445d0(&"Prefabs/Elements/ColorPreview");
    il2cpp_runtime_helper_023445d0(&"Image");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"SVImage");
    il2cpp_runtime_helper_023445d0(&"A");
    g_data_057ae0e8 = '\x01';
  }
  pUStack_58 = (UnityEngine_RectTransform_o *)0x0;
  auStack_68._8_8_ = (UnityEngine_RectTransform_o *)0x0;
  auStack_68._0_8_ = (UnityEngine_RectTransform_o *)0x0;
  pSVar11 = (System_String_o *)
            (*(parent_00->klass->vtable)._4_GetEnumerator.methodPtr)
                      (parent_00,(parent_00->klass->vtable)._4_GetEnumerator.method);
  __this_03 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_03,0x12,24.0,8.0,pSVar11,(MethodInfo *)0x0);
  pSVar11 = (System_String_o *)
            (*(parent_00->klass->vtable)._4_GetEnumerator.methodPtr)
                      (parent_00,(parent_00->klass->vtable)._4_GetEnumerator.method);
  __this_04 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  textureRect = (System_String_o **)0x0;
  UI_ElementStyle___ctor(__this_04,0x12,52.0,10.0,pSVar11,(MethodInfo *)0x0);
  pUVar13 = parent_00[1].monitor;
  pUVar12 = UI_ElementFactory__CreateHorizontalGroup
                      ((UnityEngine_Transform_o *)pUVar13,12.0,1,(MethodInfo *)0x0);
  if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
    pUVar13 = (UI_ColorPickPopup_o *)UnityEngine_GameObject__get_transform(pUVar12,(MethodInfo *)0x0);
    pUVar14 = (UI_ColorPickPopup_o *)
              UI_ElementFactory__CreateVerticalGroup
                        ((UnityEngine_Transform_o *)pUVar13,10.0,1,(MethodInfo *)0x0);
    if (pUVar14 != (UI_ColorPickPopup_o *)0x0) {
      pUVar13 = (UI_ColorPickPopup_o *)
                UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar14,(MethodInfo *)0x0);
      pUVar15 = (UI_ColorPickPopup_o *)
                UI_ElementFactory__CreateHorizontalGroup
                          ((UnityEngine_Transform_o *)pUVar13,10.0,1,(MethodInfo *)0x0);
      if (pUVar15 != (UI_ColorPickPopup_o *)0x0) {
        pUVar13 = pUVar15;
        pUVar8 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar15,(MethodInfo *)0x0);
        textureRect = (System_String_o **)(parent_00 + 8);
        pUVar16 = (UI_ColorPickPopup_o *)
                  UI_ColorPickPopup__CreateTextureContainer
                            (pUVar13,pUVar8,"SVContainer",260.0,260.0,
                             (UnityEngine_RectTransform_o **)textureRect,in_R8);
        if (pUVar16 != (UI_ColorPickPopup_o *)0x0) {
          pUStack_50 = __this_04;
          pUVar8 = UnityEngine_GameObject__get_transform
                             ((UnityEngine_GameObject_o *)pUVar16,(MethodInfo *)0x0);
          textureRect = (System_String_o **)&stack0xffffffffffffffa8;
          pUVar17 = (UnityEngine_Transform_c *)
                    UI_ColorPickPopup__CreateTextureSurface
                              (pUVar16,pUVar8,"SVImage",(UnityEngine_RectTransform_o **)textureRect,in_R8);
          parent_00[10].klass = pUVar17;
          il2cpp_runtime_helper_022b4080(parent_00 + 10);
          pUVar13 = (UI_ColorPickPopup_o *)0x0;
          if (parent_00[10].klass != (UnityEngine_Transform_c *)0x0) {
            pIVar9 = UnityEngine_Component__GetComponent_object_
                               ((UnityEngine_Component_o *)parent_00[10].klass,MethodInfo_ColorPickDragArea_GetComponent_ColorPickDragArea);
            pUVar16 = (UI_ColorPickPopup_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_float_float);
            textureRect = (System_String_o **)0x0;
            pUVar13 = pUVar16;
            System_Action_float__float____ctor();
            if (pIVar9 != (Il2CppObject *)0x0) {
              *(undefined4 *)&pIVar9[2].klass = 0;
              pUVar13 = (UI_ColorPickPopup_o *)&pIVar9[2].monitor;
              pIVar9[2].monitor = pUVar16;
              il2cpp_runtime_helper_022b4080(pUVar13,pUVar16);
              pUVar17 = (UnityEngine_Transform_c *)
                        UI_ColorPickPopup__CreateHandle
                                  (pUVar13,pUStack_58,(UnityEngine_Vector2_o)0x4160000041600000,method_00);
              parent_00[9].klass = pUVar17;
              il2cpp_runtime_helper_022b4080(parent_00 + 9);
              pUVar8 = UnityEngine_GameObject__get_transform
                                 ((UnityEngine_GameObject_o *)pUVar15,(MethodInfo *)0x0);
              textureRect = &parent_00[8].monitor;
              pUVar16 = (UI_ColorPickPopup_o *)
                        UI_ColorPickPopup__CreateTextureContainer
                                  (pUVar15,pUVar8,"HueContainer",28.0,260.0,
                                   (UnityEngine_RectTransform_o **)textureRect,in_R8);
              pUVar13 = pUVar15;
              if (pUVar16 != (UI_ColorPickPopup_o *)0x0) {
                pUVar8 = UnityEngine_GameObject__get_transform
                                   ((UnityEngine_GameObject_o *)pUVar16,(MethodInfo *)0x0);
                textureRect = (System_String_o **)(auStack_68 + 8);
                pUVar18 = UI_ColorPickPopup__CreateTextureSurface
                                    (pUVar16,pUVar8,"HueImage",(UnityEngine_RectTransform_o **)textureRect,
                                     in_R8);
                parent_00[10].monitor = pUVar18;
                il2cpp_runtime_helper_022b4080(&parent_00[10].monitor);
                pUVar13 = (UI_ColorPickPopup_o *)0x0;
                if (parent_00[10].monitor != (UnityEngine_Component_o *)0x0) {
                  pIVar9 = UnityEngine_Component__GetComponent_object_(parent_00[10].monitor,MethodInfo_ColorPickDragArea_GetComponent_ColorPickDragArea);
                  pUVar15 = (UI_ColorPickPopup_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_float_float);
                  textureRect = (System_String_o **)0x0;
                  pUVar13 = pUVar15;
                  System_Action_float__float____ctor();
                  if (pIVar9 != (Il2CppObject *)0x0) {
                    *(undefined4 *)&pIVar9[2].klass = 2;
                    pUVar13 = (UI_ColorPickPopup_o *)&pIVar9[2].monitor;
                    pIVar9[2].monitor = pUVar15;
                    il2cpp_runtime_helper_022b4080(pUVar13,pUVar15);
                    pUVar19 = UI_ColorPickPopup__CreateHandle
                                        (pUVar13,(UnityEngine_RectTransform_o *)auStack_68._8_8_,
                                         (UnityEngine_Vector2_o)0x4040000041c00000,method_01);
                    parent_00[9].monitor = pUVar19;
                    il2cpp_runtime_helper_022b4080(&parent_00[9].monitor);
                    pUVar8 = UnityEngine_GameObject__get_transform
                                       ((UnityEngine_GameObject_o *)pUVar14,(MethodInfo *)0x0);
                    textureRect = (System_String_o **)&parent_00[8].fields;
                    pUVar15 = (UI_ColorPickPopup_o *)
                              UI_ColorPickPopup__CreateTextureContainer
                                        (pUVar14,pUVar8,"AlphaContainer",260.0,24.0,
                                         (UnityEngine_RectTransform_o **)textureRect,in_R8);
                    pUVar13 = pUVar14;
                    if (pUVar15 != (UI_ColorPickPopup_o *)0x0) {
                      pUVar8 = UnityEngine_GameObject__get_transform
                                         ((UnityEngine_GameObject_o *)pUVar15,(MethodInfo *)0x0);
                      textureRect = (System_String_o **)auStack_68;
                      pUVar18 = UI_ColorPickPopup__CreateTextureSurface
                                          (pUVar15,pUVar8,"AlphaImage",
                                           (UnityEngine_RectTransform_o **)textureRect,in_R8);
                      parent_00[10].fields.m_CachedPtr = (intptr_t)pUVar18;
                      il2cpp_runtime_helper_022b4080(&parent_00[10].fields);
                      __this_01 = (UnityEngine_Component_o *)parent_00[10].fields.m_CachedPtr;
                      pUVar13 = (UI_ColorPickPopup_o *)0x0;
                      if (__this_01 != (UnityEngine_Component_o *)0x0) {
                        pIVar9 = UnityEngine_Component__GetComponent_object_(__this_01,MethodInfo_ColorPickDragArea_GetComponent_ColorPickDragArea);
                        pUVar14 = (UI_ColorPickPopup_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_float_float);
                        textureRect = (System_String_o **)0x0;
                        pUVar13 = pUVar14;
                        System_Action_float__float____ctor();
                        if (pIVar9 != (Il2CppObject *)0x0) {
                          *(undefined4 *)&pIVar9[2].klass = 1;
                          pUVar13 = (UI_ColorPickPopup_o *)&pIVar9[2].monitor;
                          pIVar9[2].monitor = pUVar14;
                          il2cpp_runtime_helper_022b4080(pUVar13,pUVar14);
                          pUVar19 = UI_ColorPickPopup__CreateHandle
                                              (pUVar13,(UnityEngine_RectTransform_o *)auStack_68._0_8_,
                                               (UnityEngine_Vector2_o)0x41a0000040c00000,method_02);
                          parent_00[9].fields.m_CachedPtr = (intptr_t)pUVar19;
                          il2cpp_runtime_helper_022b4080(&parent_00[9].fields);
                          pUVar13 = (UI_ColorPickPopup_o *)
                                    UnityEngine_GameObject__get_transform(pUVar12,(MethodInfo *)0x0);
                          pUVar12 = UI_ElementFactory__CreateVerticalGroup
                                              ((UnityEngine_Transform_o *)pUVar13,10.0,0,(MethodInfo *)0x0);
                          if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
                            pUVar13 = (UI_ColorPickPopup_o *)
                                      UnityEngine_GameObject__get_transform(pUVar12,(MethodInfo *)0x0);
                            textureRect = &"Prefabs/Elements/ColorPreview";
                            pUVar14 = (UI_ColorPickPopup_o *)
                                      UI_ElementFactory__InstantiateAndBind
                                                ((UnityEngine_Transform_o *)pUVar13,"Prefabs/Elements/ColorPreview",
                                                 (MethodInfo *)0x0);
                            if ((pUVar14 != (UI_ColorPickPopup_o *)0x0) &&
                               (pUVar13 = pUVar14,
                               pIVar9 = UnityEngine_GameObject__GetComponent_object_
                                                  ((UnityEngine_GameObject_o *)pUVar14,MethodInfo_LayoutElement_GetComponent_LayoutElement),
                               pIVar9 != (Il2CppObject *)0x0)) {
                              textureRect = (System_String_o **)pIVar9->klass;
                              (*((Il2CppClass *)textureRect)->vtable[0x24].methodPtr)
                                        (0x42c00000,pIVar9,((Il2CppClass *)textureRect)->vtable[0x24].method);
                              pUVar13 = pUVar14;
                              pIVar9 = UnityEngine_GameObject__GetComponent_object_
                                                 ((UnityEngine_GameObject_o *)pUVar14,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                              if (pIVar9 != (Il2CppObject *)0x0) {
                                textureRect = (System_String_o **)pIVar9->klass;
                                (*((Il2CppClass *)textureRect)->vtable[0x26].methodPtr)(0x42600000,pIVar9);
                                pUVar15 = (UI_ColorPickPopup_o *)
                                          UnityEngine_GameObject__get_transform
                                                    ((UnityEngine_GameObject_o *)pUVar14,(MethodInfo *)0x0);
                                pUVar13 = pUVar14;
                                if (pUVar15 != (UI_ColorPickPopup_o *)0x0) {
                                  textureRect = &"Image";
                                  pUVar8 = UnityEngine_Transform__Find
                                                     ((UnityEngine_Transform_o *)pUVar15,"Image",
                                                      (MethodInfo *)0x0);
                                  pUVar13 = pUVar15;
                                  if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
                                    pIVar9 = UnityEngine_Component__GetComponent_object_
                                                       ((UnityEngine_Component_o *)pUVar8,MethodInfo_Image_GetComponent_Image);
                                    parent_00[7].fields.m_CachedPtr = (intptr_t)pIVar9;
                                    il2cpp_runtime_helper_022b4080(&parent_00[7].fields);
                                    pUVar13 = (UI_ColorPickPopup_o *)
                                              UnityEngine_GameObject__get_transform(pUVar12,(MethodInfo *)0x0)
                                    ;
                                    pUVar17 = parent_00[0xd].klass;
                                    pUVar20 = (UnityEngine_Events_UnityAction_o *)
                                              il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                                    UnityEngine_Events_UnityAction___ctor();
                                    textureRect = (System_String_o **)"R";
                                    pUVar21 = UI_ElementFactory__CreateInputSetting
                                                        ((UnityEngine_Transform_o *)pUVar13,__this_03,
                                                         (Settings_BaseSetting_o *)pUVar17,
                                                         (System_String_o *)"R","",62.0,
                                                         34.0,0,pUVar20,
                                                         (UnityEngine_Events_UnityAction_o *)0x0,
                                                         (System_Func_string__bool__o *)0x0,
                                                         (System_Func_string__string__o *)0x0,
                                                         (MethodInfo *)0x0);
                                    if (pUVar21 != (UnityEngine_GameObject_o *)0x0) {
                                      pIVar9 = UnityEngine_GameObject__GetComponent_object_
                                                         (pUVar21,MethodInfo_InputSettingElement_GetComponent_InputSettingElement);
                                      parent_00[0xe].fields.m_CachedPtr = (intptr_t)pIVar9;
                                      il2cpp_runtime_helper_022b4080(&parent_00[0xe].fields);
                                      pUVar13 = (UI_ColorPickPopup_o *)
                                                UnityEngine_GameObject__get_transform
                                                          (pUVar12,(MethodInfo *)0x0);
                                      pSVar4 = parent_00[0xd].monitor;
                                      pUVar20 = (UnityEngine_Events_UnityAction_o *)
                                                il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                                      UnityEngine_Events_UnityAction___ctor();
                                      textureRect = (System_String_o **)"G";
                                      pUVar21 = UI_ElementFactory__CreateInputSetting
                                                          ((UnityEngine_Transform_o *)pUVar13,__this_03,pSVar4
                                                           ,(System_String_o *)"G","",62.0,
                                                           34.0,0,pUVar20,
                                                           (UnityEngine_Events_UnityAction_o *)0x0,
                                                           (System_Func_string__bool__o *)0x0,
                                                           (System_Func_string__string__o *)0x0,
                                                           (MethodInfo *)0x0);
                                      if (pUVar21 != (UnityEngine_GameObject_o *)0x0) {
                                        pUVar17 = (UnityEngine_Transform_c *)
                                                  UnityEngine_GameObject__GetComponent_object_
                                                            (pUVar21,MethodInfo_InputSettingElement_GetComponent_InputSettingElement);
                                        parent_00[0xf].klass = pUVar17;
                                        il2cpp_runtime_helper_022b4080(parent_00 + 0xf);
                                        pUVar13 = (UI_ColorPickPopup_o *)
                                                  UnityEngine_GameObject__get_transform
                                                            (pUVar12,(MethodInfo *)0x0);
                                        pSVar4 = (Settings_BaseSetting_o *)parent_00[0xd].fields.m_CachedPtr;
                                        pUVar20 = (UnityEngine_Events_UnityAction_o *)
                                                  il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                                        UnityEngine_Events_UnityAction___ctor();
                                        textureRect = (System_String_o **)"B";
                                        pUVar21 = UI_ElementFactory__CreateInputSetting
                                                            ((UnityEngine_Transform_o *)pUVar13,__this_03,
                                                             pSVar4,(System_String_o *)"B",
                                                             "",62.0,34.0,0,pUVar20,
                                                             (UnityEngine_Events_UnityAction_o *)0x0,
                                                             (System_Func_string__bool__o *)0x0,
                                                             (System_Func_string__string__o *)0x0,
                                                             (MethodInfo *)0x0);
                                        if (pUVar21 != (UnityEngine_GameObject_o *)0x0) {
                                          pIVar9 = UnityEngine_GameObject__GetComponent_object_
                                                             (pUVar21,MethodInfo_InputSettingElement_GetComponent_InputSettingElement);
                                          parent_00[0xf].monitor = pIVar9;
                                          il2cpp_runtime_helper_022b4080(&parent_00[0xf].monitor);
                                          pUVar13 = (UI_ColorPickPopup_o *)
                                                    UnityEngine_GameObject__get_transform
                                                              (pUVar12,(MethodInfo *)0x0);
                                          pUVar17 = parent_00[0xe].klass;
                                          pUVar20 = (UnityEngine_Events_UnityAction_o *)
                                                    il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                                          UnityEngine_Events_UnityAction___ctor();
                                          textureRect = (System_String_o **)"A";
                                          pUVar21 = UI_ElementFactory__CreateInputSetting
                                                              ((UnityEngine_Transform_o *)pUVar13,__this_03,
                                                               (Settings_BaseSetting_o *)pUVar17,
                                                               (System_String_o *)"A","",
                                                               62.0,34.0,0,pUVar20,
                                                               (UnityEngine_Events_UnityAction_o *)0x0,
                                                               (System_Func_string__bool__o *)0x0,
                                                               (System_Func_string__string__o *)0x0,
                                                               (MethodInfo *)0x0);
                                          if (pUVar21 != (UnityEngine_GameObject_o *)0x0) {
                                            pIVar9 = UnityEngine_GameObject__GetComponent_object_
                                                               (pUVar21,MethodInfo_InputSettingElement_GetComponent_InputSettingElement);
                                            parent_00[0xf].fields.m_CachedPtr = (intptr_t)pIVar9;
                                            il2cpp_runtime_helper_022b4080(&parent_00[0xf].fields);
                                            pUVar13 = (UI_ColorPickPopup_o *)
                                                      UnityEngine_GameObject__get_transform
                                                                (pUVar12,(MethodInfo *)0x0);
                                            pSVar4 = parent_00[0xe].monitor;
                                            pUVar20 = (UnityEngine_Events_UnityAction_o *)
                                                      il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                                            UnityEngine_Events_UnityAction___ctor();
                                            onEndEdit = (UnityEngine_Events_UnityAction_o *)
                                                        il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                                            UnityEngine_Events_UnityAction___ctor();
                                            onValidate = (System_Func_string__bool__o *)
                                                         il2cpp_runtime_helper_023052d0(TypeInfo_Func_string_bool);
                                            System_Func_object__bool____ctor();
                                            onCleanup = (System_Func_string__string__o *)
                                                        il2cpp_runtime_helper_023052d0(TypeInfo_Func_string_string);
                                            System_Func_object__object____ctor();
                                            textureRect = (System_String_o **)"Hex";
                                            pUVar12 = UI_ElementFactory__CreateInputSetting
                                                                ((UnityEngine_Transform_o *)pUVar13,pUStack_50
                                                                 ,pSVar4,(System_String_o *)"Hex",
                                                                 "",116.0,34.0,0,pUVar20,onEndEdit,
                                                                 onValidate,onCleanup,(MethodInfo *)0x0);
                                            if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
                                              pUVar17 = (UnityEngine_Transform_c *)
                                                        UnityEngine_GameObject__GetComponent_object_
                                                                  (pUVar12,MethodInfo_InputSettingElement_GetComponent_InputSettingElement);
                                              parent_00[0x10].klass = pUVar17;
                                              il2cpp_runtime_helper_022b4080(parent_00 + 0x10,pUVar17);
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
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae0f0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ColorPickPopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
    g_data_057ae0f0 = '\x01';
  }
  x = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_ColorPickPopup + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
label_04347c85:
    pUVar22 = (pUVar13->fields)._svTexture;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    ppUVar2 = &(pUVar13->fields)._svTexture;
    bVar6 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar22,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
label_04347d54:
      pUVar22 = (pUVar13->fields)._alphaTexture;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      ppUVar3 = &(pUVar13->fields)._alphaTexture;
      bVar6 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pUVar22,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
label_04347e23:
        pUVar18 = (pUVar13->fields)._hueImage;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar6 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar18,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar6 != '\0') {
          pUVar18 = (pUVar13->fields)._hueImage;
          if (pUVar18 == (UnityEngine_UI_RawImage_o *)0x0) goto label_04347f17;
          UnityEngine_UI_RawImage__set_texture
                    (pUVar18,(UnityEngine_Texture_o *)**(undefined8 **)(TypeInfo_ColorPickPopup + 0xb8),(MethodInfo *)0x0
                    );
        }
        pUVar18 = (pUVar13->fields)._svImage;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar6 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar18,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar6 != '\0') {
          pUVar18 = (pUVar13->fields)._svImage;
          if (pUVar18 == (UnityEngine_UI_RawImage_o *)0x0) goto label_04347f17;
          UnityEngine_UI_RawImage__set_texture(pUVar18,(UnityEngine_Texture_o *)*ppUVar2,(MethodInfo *)0x0);
        }
        pUVar18 = (pUVar13->fields)._alphaImage;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar6 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar18,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar6 == '\0') {
          return;
        }
        pUVar18 = (pUVar13->fields)._alphaImage;
        if (pUVar18 != (UnityEngine_UI_RawImage_o *)0x0) {
          UnityEngine_UI_RawImage__set_texture(pUVar18,(UnityEngine_Texture_o *)*ppUVar3,(MethodInfo *)0x0);
          return;
        }
      }
      else {
        pUVar22 = (UnityEngine_Texture2D_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Texture2D);
        textureRect = (System_String_o **)&g_data_00000004;
        UnityEngine_Texture2D___ctor_4dd9130(pUVar22,0xc0,1,4,0,(MethodInfo *)0x0);
        *ppUVar3 = pUVar22;
        il2cpp_runtime_helper_022b4080(ppUVar3);
        if ((UnityEngine_Texture_o *)*ppUVar3 != (UnityEngine_Texture_o *)0x0) {
          UnityEngine_Texture__set_wrapMode((UnityEngine_Texture_o *)*ppUVar3,1,(MethodInfo *)0x0);
          if ((UnityEngine_Texture_o *)*ppUVar3 != (UnityEngine_Texture_o *)0x0) {
            UnityEngine_Texture__set_filterMode((UnityEngine_Texture_o *)*ppUVar3,1,(MethodInfo *)0x0);
            pUVar23 = (UnityEngine_Color32_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Color32,0xc0);
            (pUVar13->fields)._alphaPixels = pUVar23;
            il2cpp_runtime_helper_022b4080(&(pUVar13->fields)._alphaPixels);
            goto label_04347e23;
          }
        }
      }
    }
    else {
      pUVar22 = (UnityEngine_Texture2D_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Texture2D);
      textureRect = (System_String_o **)&g_data_00000004;
      UnityEngine_Texture2D___ctor_4dd9130(pUVar22,0xc0,0xc0,4,0,(MethodInfo *)0x0);
      *ppUVar2 = pUVar22;
      il2cpp_runtime_helper_022b4080(ppUVar2);
      if ((UnityEngine_Texture_o *)*ppUVar2 != (UnityEngine_Texture_o *)0x0) {
        UnityEngine_Texture__set_wrapMode((UnityEngine_Texture_o *)*ppUVar2,1,(MethodInfo *)0x0);
        if ((UnityEngine_Texture_o *)*ppUVar2 != (UnityEngine_Texture_o *)0x0) {
          UnityEngine_Texture__set_filterMode((UnityEngine_Texture_o *)*ppUVar2,1,(MethodInfo *)0x0);
          pUVar23 = (UnityEngine_Color32_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Color32,0x9000);
          (pUVar13->fields)._svPixels = pUVar23;
          il2cpp_runtime_helper_022b4080(&(pUVar13->fields)._svPixels);
          goto label_04347d54;
        }
      }
    }
  }
  else {
    pUVar22 = (UnityEngine_Texture2D_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Texture2D);
    textureRect = (System_String_o **)&g_data_00000004;
    UnityEngine_Texture2D___ctor_4dd9130(pUVar22,1,0x100,4,0,(MethodInfo *)0x0);
    **(undefined8 **)(TypeInfo_ColorPickPopup + 0xb8) = pUVar22;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_ColorPickPopup + 0xb8));
    if ((UnityEngine_Texture_o *)**(undefined8 **)(TypeInfo_ColorPickPopup + 0xb8) != (UnityEngine_Texture_o *)0x0) {
      UnityEngine_Texture__set_wrapMode
                ((UnityEngine_Texture_o *)**(undefined8 **)(TypeInfo_ColorPickPopup + 0xb8),1,(MethodInfo *)0x0);
      if ((UnityEngine_Texture_o *)**(undefined8 **)(TypeInfo_ColorPickPopup + 0xb8) != (UnityEngine_Texture_o *)0x0) {
        UnityEngine_Texture__set_filterMode
                  ((UnityEngine_Texture_o *)**(undefined8 **)(TypeInfo_ColorPickPopup + 0xb8),1,(MethodInfo *)0x0);
        pUVar23 = (UnityEngine_Color32_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Color32);
        if (pUVar23 == (UnityEngine_Color32_array *)0x0) goto label_04347f1c;
        pIVar24 = (Il2CppClass *)0x0;
        do {
          UVar31 = UnityEngine_Color__HSVToRGB_4de5b40
                             ((float)(int)pIVar24 / -255.0 + 1.0,1.0,1.0,1,(MethodInfo *)0x0);
          iVar7 = il2cpp_runtime_helper_03b428b0(UVar31.fields.r,UVar31.fields.b,0);
          textureRect = (System_String_o **)(ulong)(uint)pUVar23->max_length;
          if (textureRect <= pIVar24) {
            il2cpp_runtime_helper_022b2ca0();
            goto label_04347f17;
          }
          (&pUVar23->m_Items[0].fields.rgba)[(long)pIVar24] = iVar7;
          pIVar24 = (Il2CppClass *)((long)&(pIVar24->_1).image + 1);
        } while (pIVar24 != (Il2CppClass *)0x100);
        if ((UnityEngine_Texture2D_o *)**(undefined8 **)(TypeInfo_ColorPickPopup + 0xb8) !=
            (UnityEngine_Texture2D_o *)0x0) {
          UnityEngine_Texture2D__SetPixels32_4dd9b90
                    ((UnityEngine_Texture2D_o *)**(undefined8 **)(TypeInfo_ColorPickPopup + 0xb8),pUVar23,
                     (MethodInfo *)0x0);
          if ((UnityEngine_Texture2D_o *)**(undefined8 **)(TypeInfo_ColorPickPopup + 0xb8) !=
              (UnityEngine_Texture2D_o *)0x0) {
            textureRect = (System_String_o **)0x0;
            UnityEngine_Texture2D__Apply
                      ((UnityEngine_Texture2D_o *)**(undefined8 **)(TypeInfo_ColorPickPopup + 0xb8),0,1,(MethodInfo *)0x0
                      );
            goto label_04347c85;
          }
        }
      }
    }
  }
label_04347f17:
  il2cpp_runtime_helper_022b2c90();
label_04347f1c:
  pSVar26 = (Settings_ColorSetting_o *)0x0;
  UVar31 = UnityEngine_Color__HSVToRGB_4de5b40(1.0,1.0,1.0,1,(MethodInfo *)0x0);
  pUVar13 = (UI_ColorPickPopup_o *)0x0;
  il2cpp_runtime_helper_03b428b0(UVar31.fields.r,UVar31.fields.b);
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae0e7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color255_get_Value);
    g_data_057ae0e7 = '\x01';
  }
  bVar25 = 0;
  pUVar14 = pUVar13;
  pUVar12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar13,(MethodInfo *)0x0);
  if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
    pMVar28 = (MethodInfo *)0x0;
    bVar6 = UnityEngine_GameObject__get_activeSelf(pUVar12,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      return;
    }
    UI_BasePopup__Show((UI_BasePopup_o *)pUVar13,pMVar28);
    (pUVar13->fields)._setting = pSVar26;
    il2cpp_runtime_helper_022b4080(&(pUVar13->fields)._setting,pSVar26);
    pUVar14 = (UI_ColorPickPopup_o *)&(pUVar13->fields)._image;
    (pUVar13->fields)._image = extraout_RDX_00;
    pUVar27 = extraout_RDX_00;
    il2cpp_runtime_helper_022b4080();
    bVar25 = (byte)pUVar27;
    if ((pSVar26 != (Settings_ColorSetting_o *)0x0) &&
       (pSVar5 = (pUVar13->fields)._alpha, pSVar5 != (Settings_IntSetting_o *)0x0)) {
      (pSVar5->fields).MinValue = (pSVar26->fields).MinAlpha;
      (pUVar13->fields)._onChangeColor = (UnityEngine_Events_UnityAction_o *)textureRect;
      il2cpp_runtime_helper_022b4080(&(pUVar13->fields)._onChangeColor);
      bVar25 = (byte)textureRect;
      __this_02 = (pSVar26->fields)._value;
      pUVar14 = (UI_ColorPickPopup_o *)0x0;
      if (__this_02 != (Utility_Color255_o *)0x0) {
        UVar31 = Utility_Color255__ToColor(__this_02,(MethodInfo *)0x0);
        rgbColor.fields.b = UVar31.fields.b;
        rgbColor.fields.a = 1.0;
        rgbColor.fields.r = (float)(int)UVar31.fields._0_8_;
        rgbColor.fields.g = (float)(int)((ulong)UVar31.fields._0_8_ >> 0x20);
        UnityEngine_Color__RGBToHSV
                  (rgbColor,&(pUVar13->fields)._hue,&(pUVar13->fields)._saturation,&(pUVar13->fields)._value,
                   (MethodInfo *)0x0);
        fStackY_10c = UVar31.fields.a;
        fVar29 = (float)(pSVar26->fields).MinAlpha / 255.0;
        if (fVar29 <= fStackY_10c) {
          fVar29 = fStackY_10c;
        }
        fVar30 = 1.0;
        if (fVar29 <= 1.0) {
          fVar30 = fVar29;
        }
        (pUVar13->fields)._alphaValue = (float)(-(uint)(0.0 <= fVar29) & (uint)fVar30);
        *(undefined1 *)((long)&(pUVar13->fields)._suppressInputCallbacks + 3) = 0;
        *(undefined2 *)((long)&(pUVar13->fields)._suppressInputCallbacks + 1) = 0x101;
        pMVar28 = (MethodInfo *)0x1;
        UI_ColorPickPopup__ApplyCurrentColorToUI(pUVar13,1,method_03);
        if (*(char *)((long)&(pUVar13->fields)._suppressInputCallbacks + 1) != '\0') {
          UI_ColorPickPopup__UpdateSVTexture(pUVar13,pMVar28);
          *(undefined1 *)((long)&(pUVar13->fields)._suppressInputCallbacks + 1) = 0;
        }
        if (*(char *)((long)&(pUVar13->fields)._suppressInputCallbacks + 2) == '\0') {
          return;
        }
        UI_ColorPickPopup__UpdateAlphaTexture(pUVar13,pMVar28);
        *(undefined1 *)((long)&(pUVar13->fields)._suppressInputCallbacks + 2) = 0;
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pbVar1 = (byte *)((long)&(pUVar14->fields)._suppressInputCallbacks + 1);
  *pbVar1 = *pbVar1 | bVar25;
  pbVar1 = (byte *)((long)&(pUVar14->fields)._suppressInputCallbacks + 2);
  *pbVar1 = *pbVar1 | extraout_DL;
  return;
}


// UI.PromptPopup$$Update
// il2cpp: void UI_PromptPopup__Update (UI_PromptPopup_o* __this, const MethodInfo* method);
// 0x4350460

void UI_PromptPopup__Update(UI_PromptPopup_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  bool_conflict bVar1;
  undefined8 extraout_RDX;
  
  bVar1 = UnityEngine_Input__GetKeyDown(0x1b,(MethodInfo *)0x0);
  if (((char)bVar1 != '\0') && ((char)(__this->fields).IsActive != '\0')) {
    vtableDispatch = (__this->klass->vtable)._22_Hide.methodPtr;
    (*vtableDispatch)
              (__this,(__this->klass->vtable)._22_Hide.method,extraout_RDX,vtableDispatch);
    return;
  }
  return;
}


// UI.PromptPopup$$.ctor
// il2cpp: void UI_PromptPopup___ctor (UI_PromptPopup_o* __this, const MethodInfo* method);
// 0x434ac10

void UI_PromptPopup___ctor(UI_TooltipPopup_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_String_o *defaultValue;
  UI_BasePopup_AnimationKeyframe_array *pUVar3;
  long lVar4;
  System_Collections_Generic_List_BasePopup__o *__this_00;
  Settings_StringSetting_o *__this_01;
  System_Collections_Generic_HashSet_object__o *__this_02;
  System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *pSVar5;
  System_Collections_Generic_Dictionary_object__object__o *pSVar6;
  System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *pSVar7;
  undefined4 uVar8;
  undefined4 in_XMM1_Da;
  
  if (g_data_057ae0e4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_UnityEngine_Transform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_Transform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UI_BasePopup_AnimationKeyframe);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_AnimationKeyframe);
    g_data_057ae0e4 = '\x01';
  }
  __this_02 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_Transform);
  System_Collections_Generic_HashSet_object____ctor(__this_02,MethodInfo_HashSet_1_UnityEngine_Transform);
  (__this->fields)._staticTransforms = (System_Collections_Generic_HashSet_Transform__o *)__this_02;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._staticTransforms,__this_02);
  pSVar5 = (System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_AnimationKeyframe);
  pSVar7 = pSVar5;
  System_Collections_Generic_List_BasePopup_AnimationKeyframe____ctor(pSVar5,MethodInfo_List_1_UI_BasePopup_AnimationKeyframe);
  lVar4 = MethodInfo_Void_Add;
  if (pSVar5 != (System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *)0x0) {
    piVar1 = &(pSVar5->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar3 = (pSVar5->fields)._items;
    if (pUVar3 != (UI_BasePopup_AnimationKeyframe_array *)0x0) {
      uVar2 = (pSVar5->fields)._size;
      if (uVar2 < (uint)pUVar3->max_length) {
        (pSVar5->fields)._size = uVar2 + 1;
        pUVar3->m_Items[(int)uVar2].fields.time = 0.0;
        pUVar3->m_Items[(int)uVar2].fields.scale = 0.0;
      }
      else {
        pSVar7 = pSVar5;
        System_Collections_Generic_List_BasePopup_AnimationKeyframe___AddWithResize
                  (pSVar5,(UI_BasePopup_AnimationKeyframe_o)0x0,
                   *(MethodInfo_36B7030 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
      }
      lVar4 = MethodInfo_Void_Add;
      piVar1 = &(pSVar5->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar3 = (pSVar5->fields)._items;
      if (pUVar3 != (UI_BasePopup_AnimationKeyframe_array *)0x0) {
        uVar2 = (pSVar5->fields)._size;
        if (uVar2 < (uint)pUVar3->max_length) {
          (pSVar5->fields)._size = uVar2 + 1;
          pUVar3->m_Items[(int)uVar2].fields.time = 0.15;
          pUVar3->m_Items[(int)uVar2].fields.scale = 1.3;
        }
        else {
          pSVar7 = pSVar5;
          System_Collections_Generic_List_BasePopup_AnimationKeyframe___AddWithResize
                    (pSVar5,(UI_BasePopup_AnimationKeyframe_o)0x3fa666663e19999a,
                     *(MethodInfo_36B7030 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
        }
        lVar4 = MethodInfo_Void_Add;
        piVar1 = &(pSVar5->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar3 = (pSVar5->fields)._items;
        if (pUVar3 != (UI_BasePopup_AnimationKeyframe_array *)0x0) {
          uVar2 = (pSVar5->fields)._size;
          if (uVar2 < (uint)pUVar3->max_length) {
            (pSVar5->fields)._size = uVar2 + 1;
            pUVar3->m_Items[(int)uVar2].fields.time = 0.3;
            pUVar3->m_Items[(int)uVar2].fields.scale = 0.8;
          }
          else {
            pSVar7 = pSVar5;
            System_Collections_Generic_List_BasePopup_AnimationKeyframe___AddWithResize
                      (pSVar5,(UI_BasePopup_AnimationKeyframe_o)0x3f4ccccd3e99999a,
                       *(MethodInfo_36B7030 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
          }
          lVar4 = MethodInfo_Void_Add;
          piVar1 = &(pSVar5->fields)._version;
          *piVar1 = *piVar1 + 1;
          pUVar3 = (pSVar5->fields)._items;
          if (pUVar3 != (UI_BasePopup_AnimationKeyframe_array *)0x0) {
            uVar2 = (pSVar5->fields)._size;
            if (uVar2 < (uint)pUVar3->max_length) {
              (pSVar5->fields)._size = uVar2 + 1;
              pUVar3->m_Items[(int)uVar2].fields.time = 0.45;
              pUVar3->m_Items[(int)uVar2].fields.scale = 1.1;
            }
            else {
              pSVar7 = pSVar5;
              System_Collections_Generic_List_BasePopup_AnimationKeyframe___AddWithResize
                        (pSVar5,(UI_BasePopup_AnimationKeyframe_o)0x3f8ccccd3ee66666,
                         *(MethodInfo_36B7030 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
            }
            lVar4 = MethodInfo_Void_Add;
            piVar1 = &(pSVar5->fields)._version;
            *piVar1 = *piVar1 + 1;
            pUVar3 = (pSVar5->fields)._items;
            if (pUVar3 != (UI_BasePopup_AnimationKeyframe_array *)0x0) {
              uVar2 = (pSVar5->fields)._size;
              if (uVar2 < (uint)pUVar3->max_length) {
                (pSVar5->fields)._size = uVar2 + 1;
                pUVar3->m_Items[(int)uVar2].fields.time = 0.6;
                pUVar3->m_Items[(int)uVar2].fields.scale = 0.95;
              }
              else {
                pSVar7 = pSVar5;
                System_Collections_Generic_List_BasePopup_AnimationKeyframe___AddWithResize
                          (pSVar5,(UI_BasePopup_AnimationKeyframe_o)0x3f7333333f19999a,
                           *(MethodInfo_36B7030 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
              }
              lVar4 = MethodInfo_Void_Add;
              piVar1 = &(pSVar5->fields)._version;
              *piVar1 = *piVar1 + 1;
              pUVar3 = (pSVar5->fields)._items;
              if (pUVar3 != (UI_BasePopup_AnimationKeyframe_array *)0x0) {
                uVar2 = (pSVar5->fields)._size;
                if (uVar2 < (uint)pUVar3->max_length) {
                  (pSVar5->fields)._size = uVar2 + 1;
                  pUVar3->m_Items[(int)uVar2].fields.time = 0.75;
                  pUVar3->m_Items[(int)uVar2].fields.scale = 1.05;
                }
                else {
                  pSVar7 = pSVar5;
                  System_Collections_Generic_List_BasePopup_AnimationKeyframe___AddWithResize
                            (pSVar5,(UI_BasePopup_AnimationKeyframe_o)0x3f8666663f400000,
                             *(MethodInfo_36B7030 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                }
                lVar4 = MethodInfo_Void_Add;
                piVar1 = &(pSVar5->fields)._version;
                *piVar1 = *piVar1 + 1;
                pUVar3 = (pSVar5->fields)._items;
                if (pUVar3 != (UI_BasePopup_AnimationKeyframe_array *)0x0) {
                  uVar2 = (pSVar5->fields)._size;
                  if (uVar2 < (uint)pUVar3->max_length) {
                    (pSVar5->fields)._size = uVar2 + 1;
                    pUVar3->m_Items[(int)uVar2].fields.time = 1.0;
                    pUVar3->m_Items[(int)uVar2].fields.scale = 1.0;
                  }
                  else {
                    System_Collections_Generic_List_BasePopup_AnimationKeyframe___AddWithResize
                              (pSVar5,(UI_BasePopup_AnimationKeyframe_o)0x3f8000003f800000,
                               *(MethodInfo_36B7030 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                  }
                  (__this->fields).killPopupKeyframesIn = pSVar5;
                  il2cpp_runtime_helper_022b4080(&(__this->fields).killPopupKeyframesIn,pSVar5);
                  pSVar5 = (System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *)
                           il2cpp_runtime_helper_023052d0(TypeInfo_List_AnimationKeyframe);
                  pSVar7 = pSVar5;
                  System_Collections_Generic_List_BasePopup_AnimationKeyframe____ctor(pSVar5,MethodInfo_List_1_UI_BasePopup_AnimationKeyframe);
                  lVar4 = MethodInfo_Void_Add;
                  if (pSVar5 != (System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *)0x0) {
                    piVar1 = &(pSVar5->fields)._version;
                    *piVar1 = *piVar1 + 1;
                    pUVar3 = (pSVar5->fields)._items;
                    if (pUVar3 != (UI_BasePopup_AnimationKeyframe_array *)0x0) {
                      uVar2 = (pSVar5->fields)._size;
                      if (uVar2 < (uint)pUVar3->max_length) {
                        (pSVar5->fields)._size = uVar2 + 1;
                        pUVar3->m_Items[(int)uVar2].fields.time = 0.0;
                        pUVar3->m_Items[(int)uVar2].fields.scale = 0.0;
                      }
                      else {
                        pSVar7 = pSVar5;
                        System_Collections_Generic_List_BasePopup_AnimationKeyframe___AddWithResize
                                  (pSVar5,(UI_BasePopup_AnimationKeyframe_o)0x0,
                                   *(MethodInfo_36B7030 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70))
                        ;
                      }
                      lVar4 = MethodInfo_Void_Add;
                      piVar1 = &(pSVar5->fields)._version;
                      *piVar1 = *piVar1 + 1;
                      pUVar3 = (pSVar5->fields)._items;
                      if (pUVar3 != (UI_BasePopup_AnimationKeyframe_array *)0x0) {
                        uVar2 = (pSVar5->fields)._size;
                        if (uVar2 < (uint)pUVar3->max_length) {
                          (pSVar5->fields)._size = uVar2 + 1;
                          pUVar3->m_Items[(int)uVar2].fields.time = 0.6;
                          pUVar3->m_Items[(int)uVar2].fields.scale = 0.0;
                        }
                        else {
                          pSVar7 = pSVar5;
                          System_Collections_Generic_List_BasePopup_AnimationKeyframe___AddWithResize
                                    (pSVar5,(UI_BasePopup_AnimationKeyframe_o)0x3f19999a,
                                     *(MethodInfo_36B7030 **)
                                      (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                        }
                        lVar4 = MethodInfo_Void_Add;
                        piVar1 = &(pSVar5->fields)._version;
                        *piVar1 = *piVar1 + 1;
                        pUVar3 = (pSVar5->fields)._items;
                        if (pUVar3 != (UI_BasePopup_AnimationKeyframe_array *)0x0) {
                          uVar2 = (pSVar5->fields)._size;
                          if (uVar2 < (uint)pUVar3->max_length) {
                            (pSVar5->fields)._size = uVar2 + 1;
                            pUVar3->m_Items[(int)uVar2].fields.time = 0.7;
                            pUVar3->m_Items[(int)uVar2].fields.scale = 0.85;
                          }
                          else {
                            pSVar7 = pSVar5;
                            System_Collections_Generic_List_BasePopup_AnimationKeyframe___AddWithResize
                                      (pSVar5,(UI_BasePopup_AnimationKeyframe_o)0x3f59999a3f333333,
                                       *(MethodInfo_36B7030 **)
                                        (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                          }
                          lVar4 = MethodInfo_Void_Add;
                          piVar1 = &(pSVar5->fields)._version;
                          *piVar1 = *piVar1 + 1;
                          pUVar3 = (pSVar5->fields)._items;
                          if (pUVar3 != (UI_BasePopup_AnimationKeyframe_array *)0x0) {
                            uVar2 = (pSVar5->fields)._size;
                            if (uVar2 < (uint)pUVar3->max_length) {
                              (pSVar5->fields)._size = uVar2 + 1;
                              pUVar3->m_Items[(int)uVar2].fields.time = 0.85;
                              pUVar3->m_Items[(int)uVar2].fields.scale = 0.8;
                            }
                            else {
                              pSVar7 = pSVar5;
                              System_Collections_Generic_List_BasePopup_AnimationKeyframe___AddWithResize
                                        (pSVar5,(UI_BasePopup_AnimationKeyframe_o)0x3f4ccccd3f59999a,
                                         *(MethodInfo_36B7030 **)
                                          (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                            }
                            lVar4 = MethodInfo_Void_Add;
                            piVar1 = &(pSVar5->fields)._version;
                            *piVar1 = *piVar1 + 1;
                            pUVar3 = (pSVar5->fields)._items;
                            if (pUVar3 != (UI_BasePopup_AnimationKeyframe_array *)0x0) {
                              uVar2 = (pSVar5->fields)._size;
                              if (uVar2 < (uint)pUVar3->max_length) {
                                (pSVar5->fields)._size = uVar2 + 1;
                                pUVar3->m_Items[(int)uVar2].fields.time = 1.0;
                                pUVar3->m_Items[(int)uVar2].fields.scale = 1.0;
                              }
                              else {
                                System_Collections_Generic_List_BasePopup_AnimationKeyframe___AddWithResize
                                          (pSVar5,(UI_BasePopup_AnimationKeyframe_o)0x3f8000003f800000,
                                           *(MethodInfo_36B7030 **)
                                            (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                              }
                              (__this->fields).killPopupKeyframesOut = pSVar5;
                              il2cpp_runtime_helper_022b4080(&(__this->fields).killPopupKeyframesOut,pSVar5);
                              if (g_data_057ae115 == '\0') {
                                il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_UnityEngine_UI_Button);
                                il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Button);
                                g_data_057ae115 = '\x01';
                              }
                              pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)
                                       il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Button);
                              System_Collections_Generic_Dictionary_object__object____ctor
                                        (pSVar6,MethodInfo_Dictionary_2_System_String_UnityEngine_UI_Button);
                              (__this->fields)._topButtons =
                                   (System_Collections_Generic_Dictionary_string__Button__o *)pSVar6;
                              il2cpp_runtime_helper_022b4080(&(__this->fields)._topButtons,pSVar6);
                              if (g_data_057ae02c == '\0') {
                                il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Type,0);
                                il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Type);
                                il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UI_BasePopup);
                                il2cpp_runtime_helper_023445d0(&TypeInfo_List_BasePopup);
                                il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
                                g_data_057ae02c = '\x01';
                              }
                              __this_00 = (System_Collections_Generic_List_BasePopup__o *)
                                          il2cpp_runtime_helper_023052d0(TypeInfo_List_BasePopup);
                              System_Collections_Generic_List_object____ctor
                                        ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UI_BasePopup);
                              (__this->fields)._popups = __this_00;
                              il2cpp_runtime_helper_022b4080(&(__this->fields)._popups,__this_00);
                              defaultValue = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
                              __this_01 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
                              Settings_StringSetting___ctor_40f74f0
                                        (__this_01,defaultValue,0x7fffffff,(MethodInfo *)0x0);
                              (__this->fields)._currentCategoryPanelName = __this_01;
                              il2cpp_runtime_helper_022b4080(&(__this->fields)._currentCategoryPanelName,__this_01);
                              pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)
                                       il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Type);
                              System_Collections_Generic_Dictionary_object__object____ctor
                                        (pSVar6,MethodInfo_Dictionary_2_System_String_System_Type);
                              (__this->fields)._categoryPanelTypes =
                                   (System_Collections_Generic_Dictionary_string__Type__o *)pSVar6;
                              il2cpp_runtime_helper_022b4080(&(__this->fields)._categoryPanelTypes);
                              UnityEngine_MonoBehaviour___ctor
                                        ((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
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
  uVar8 = il2cpp_runtime_helper_022b2c90();
  *(undefined4 *)&pSVar7->klass = uVar8;
  *(undefined4 *)((long)&pSVar7->klass + 4) = in_XMM1_Da;
  return;
}


