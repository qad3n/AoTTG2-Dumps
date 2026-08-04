// Type: UI.HeadedPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/HeadedPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/HeadedPanel.cs
// --------------------------------

// UI.HeadedPanel$$get_Title
// il2cpp: System_String_o* UI_HeadedPanel__get_Title (UI_HeadedPanel_o* __this, const MethodInfo* method);
// 0x434c250

System_String_o * UI_HeadedPanel__get_Title(UI_HeadedPanel_o *__this,MethodInfo *method)

{
  if (g_data_057ae10f == '\0') {
    il2cpp_runtime_helper_023445d0(&"Default");
    g_data_057ae10f = '\x01';
  }
  return "Default";
}


// UI.HeadedPanel$$get_TopBarHeight
// il2cpp: float UI_HeadedPanel__get_TopBarHeight (UI_HeadedPanel_o* __this, const MethodInfo* method);
// 0x434c280

float UI_HeadedPanel__get_TopBarHeight(UI_HeadedPanel_o *__this,MethodInfo *method)

{
  return 65.0;
}


// UI.HeadedPanel$$get_BottomBarHeight
// il2cpp: float UI_HeadedPanel__get_BottomBarHeight (UI_HeadedPanel_o* __this, const MethodInfo* method);
// 0x434c290

float UI_HeadedPanel__get_BottomBarHeight(UI_HeadedPanel_o *__this,MethodInfo *method)

{
  return 65.0;
}


// UI.HeadedPanel$$get_BottomBarSpacing
// il2cpp: float UI_HeadedPanel__get_BottomBarSpacing (UI_HeadedPanel_o* __this, const MethodInfo* method);
// 0x434c2a0

float UI_HeadedPanel__get_BottomBarSpacing(UI_HeadedPanel_o *__this,MethodInfo *method)

{
  return 20.0;
}


// UI.HeadedPanel$$get_BottomBarPadding
// il2cpp: int32_t UI_HeadedPanel__get_BottomBarPadding (UI_HeadedPanel_o* __this, const MethodInfo* method);
// 0x434c2b0

int32_t UI_HeadedPanel__get_BottomBarPadding(UI_HeadedPanel_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.HeadedPanel$$get_VerticalPadding
// il2cpp: int32_t UI_HeadedPanel__get_VerticalPadding (UI_HeadedPanel_o* __this, const MethodInfo* method);
// 0x434c2c0

int32_t UI_HeadedPanel__get_VerticalPadding(UI_HeadedPanel_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.HeadedPanel$$get_HorizontalPadding
// il2cpp: int32_t UI_HeadedPanel__get_HorizontalPadding (UI_HeadedPanel_o* __this, const MethodInfo* method);
// 0x434c2d0

int32_t UI_HeadedPanel__get_HorizontalPadding(UI_HeadedPanel_o *__this,MethodInfo *method)

{
  return 0x1e;
}


// UI.HeadedPanel$$get_TitleFontSize
// il2cpp: int32_t UI_HeadedPanel__get_TitleFontSize (UI_HeadedPanel_o* __this, const MethodInfo* method);
// 0x434c2e0

int32_t UI_HeadedPanel__get_TitleFontSize(UI_HeadedPanel_o *__this,MethodInfo *method)

{
  return 0x1e;
}


// UI.HeadedPanel$$get_ButtonFontSize
// il2cpp: int32_t UI_HeadedPanel__get_ButtonFontSize (UI_HeadedPanel_o* __this, const MethodInfo* method);
// 0x434c2f0

int32_t UI_HeadedPanel__get_ButtonFontSize(UI_HeadedPanel_o *__this,MethodInfo *method)

{
  return 0x1c;
}


// UI.HeadedPanel$$get_CategoryButtons
// il2cpp: bool UI_HeadedPanel__get_CategoryButtons (UI_HeadedPanel_o* __this, const MethodInfo* method);
// 0x434c300

bool_conflict UI_HeadedPanel__get_CategoryButtons(UI_HeadedPanel_o *__this,MethodInfo *method)

{
  return 0;
}


// UI.HeadedPanel$$Setup
// il2cpp: void UI_HeadedPanel__Setup (UI_HeadedPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x434c310

void UI_HeadedPanel__Setup(UI_HeadedPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o **ppUVar1;
  UnityEngine_Transform_o **ppUVar2;
  Il2CppMethodPointer vtableDispatch;
  char cVar3;
  uint uVar4;
  int32_t right;
  bool_conflict bVar5;
  UnityEngine_Transform_o *pUVar6;
  UI_HeadedPanel_o *title;
  UnityEngine_RectTransform_o *pUVar7;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *__this_00;
  UnityEngine_UI_LayoutGroup_o *__this_01;
  UI_HeadedPanel_o *pUVar8;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_UI_Text_o *__this_03;
  UnityEngine_UI_RawImage_o *pUVar9;
  UI_HeadedPanel_o *__this_04;
  Il2CppObject *pIVar10;
  float fVar11;
  UnityEngine_Color_o UVar12;
  undefined1 auVar13 [16];
  
  if (g_data_057ae110 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RawImage_GetComponent_RawImage);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectOffset);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"Label");
    il2cpp_runtime_helper_023445d0(&"TitleColor");
    il2cpp_runtime_helper_023445d0(&"HeaderColor");
    il2cpp_runtime_helper_023445d0(&"HeaderTexture");
    il2cpp_runtime_helper_023445d0(&"Background/TopBar");
    il2cpp_runtime_helper_023445d0(&"BorderColor");
    il2cpp_runtime_helper_023445d0(&"Border");
    il2cpp_runtime_helper_023445d0(&"Background/BottomBar");
    il2cpp_runtime_helper_023445d0(&"MainBody");
    g_data_057ae110 = '\x01';
  }
  title = (UI_HeadedPanel_o *)0x0;
  __this_04 = __this;
  pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto label_0434ca4a;
  pUVar6 = UnityEngine_Transform__Find(pUVar6,"Background/TopBar",(MethodInfo *)0x0);
  ppUVar1 = &(__this->fields).TopBar;
  (__this->fields).TopBar = pUVar6;
  il2cpp_runtime_helper_022b4080();
  title = (UI_HeadedPanel_o *)0x0;
  __this_04 = __this;
  pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto label_0434ca4a;
  title = (UI_HeadedPanel_o *)UnityEngine_Transform__Find(pUVar6,"Background/BottomBar",(MethodInfo *)0x0);
  ppUVar2 = &(__this->fields).BottomBar;
  (__this->fields).BottomBar = (UnityEngine_Transform_o *)title;
  il2cpp_runtime_helper_022b4080(ppUVar2);
  pUVar6 = (__this->fields).TopBar;
  __this_04 = (UI_HeadedPanel_o *)0x0;
  if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto label_0434ca4a;
  pUVar7 = (UnityEngine_RectTransform_o *)
           UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar6,MethodInfo_RectTransform_GetComponent_RectTransform);
  title = (UI_HeadedPanel_o *)(__this->klass->vtable)._36_get_TopBarHeight.method;
  __this_04 = __this;
  fVar11 = (float)(*(__this->klass->vtable)._36_get_TopBarHeight.methodPtr)();
  if (pUVar7 == (UnityEngine_RectTransform_o *)0x0) goto label_0434ca4a;
  title = (UI_HeadedPanel_o *)0x1;
  UnityEngine_RectTransform__SetSizeWithCurrentAnchors(pUVar7,1,fVar11,(MethodInfo *)0x0);
  __this_04 = (UI_HeadedPanel_o *)0x0;
  if (*ppUVar2 == (UnityEngine_Transform_o *)0x0) goto label_0434ca4a;
  pUVar7 = (UnityEngine_RectTransform_o *)
           UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)*ppUVar2,MethodInfo_RectTransform_GetComponent_RectTransform);
  title = (UI_HeadedPanel_o *)(__this->klass->vtable)._37_get_BottomBarHeight.method;
  __this_04 = __this;
  fVar11 = (float)(*(__this->klass->vtable)._37_get_BottomBarHeight.methodPtr)();
  if (pUVar7 == (UnityEngine_RectTransform_o *)0x0) goto label_0434ca4a;
  title = (UI_HeadedPanel_o *)0x1;
  UnityEngine_RectTransform__SetSizeWithCurrentAnchors(pUVar7,1,fVar11,(MethodInfo *)0x0);
  __this_04 = (UI_HeadedPanel_o *)0x0;
  if (*ppUVar2 == (UnityEngine_Transform_o *)0x0) goto label_0434ca4a;
  __this_00 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
              UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)*ppUVar2,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
  title = (UI_HeadedPanel_o *)(__this->klass->vtable)._38_get_BottomBarSpacing.method;
  __this_04 = __this;
  fVar11 = (float)(*(__this->klass->vtable)._38_get_BottomBarSpacing.methodPtr)();
  if (__this_00 == (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) goto label_0434ca4a;
  title = (UI_HeadedPanel_o *)0x0;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing(__this_00,fVar11,(MethodInfo *)0x0);
  __this_04 = (UI_HeadedPanel_o *)0x0;
  if (*ppUVar2 == (UnityEngine_Transform_o *)0x0) goto label_0434ca4a;
  __this_01 = (UnityEngine_UI_LayoutGroup_o *)
              UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)*ppUVar2,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
  uVar4 = (*(__this->klass->vtable)._39_get_BottomBarPadding.methodPtr)
                    (__this,(__this->klass->vtable)._39_get_BottomBarPadding.method);
  right = (*(__this->klass->vtable)._39_get_BottomBarPadding.methodPtr)
                    (__this,(__this->klass->vtable)._39_get_BottomBarPadding.method);
  pUVar8 = (UI_HeadedPanel_o *)il2cpp_runtime_helper_023052d0(TypeInfo_RectOffset);
  title = (UI_HeadedPanel_o *)(ulong)uVar4;
  __this_04 = pUVar8;
  UnityEngine_RectOffset___ctor_4dbeaf0((UnityEngine_RectOffset_o *)pUVar8,uVar4,right,0,0,(MethodInfo *)0x0);
  if (__this_01 == (UnityEngine_UI_LayoutGroup_o *)0x0) goto label_0434ca4a;
  UnityEngine_UI_LayoutGroup__set_padding(__this_01,(UnityEngine_RectOffset_o *)pUVar8,(MethodInfo *)0x0);
  title = pUVar8;
  __this_04 = (UI_HeadedPanel_o *)0x0;
  if (*ppUVar1 == (UnityEngine_Transform_o *)0x0) goto label_0434ca4a;
  pUVar6 = UnityEngine_Transform__Find(*ppUVar1,(System_String_o *)"Label",(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  title = (UI_HeadedPanel_o *)0x0;
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
label_0434c7a3:
    pUVar6 = *ppUVar1;
    __this_04 = (UI_HeadedPanel_o *)0x0;
    if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto label_0434ca4a;
  }
  else {
    title = (UI_HeadedPanel_o *)(__this->klass->vtable)._42_get_CategoryButtons.method;
    cVar3 = (*(__this->klass->vtable)._42_get_CategoryButtons.methodPtr)(__this);
    __this_04 = (UI_HeadedPanel_o *)(__this->fields).TopBar;
    if (__this_04 == (UI_HeadedPanel_o *)0x0) goto label_0434ca4a;
    title = "Label";
    pUVar8 = (UI_HeadedPanel_o *)
             UnityEngine_Transform__Find
                       ((UnityEngine_Transform_o *)__this_04,(System_String_o *)"Label",(MethodInfo *)0x0
                       );
    if (pUVar8 == (UI_HeadedPanel_o *)0x0) goto label_0434ca4a;
    if (cVar3 == '\0') {
      __this_03 = (UnityEngine_UI_Text_o *)
                  UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar8,MethodInfo_Text_GetComponent_Text);
      title = (UI_HeadedPanel_o *)(__this->klass->vtable)._40_get_TitleFontSize.method;
      __this_04 = __this;
      uVar4 = (*(__this->klass->vtable)._40_get_TitleFontSize.methodPtr)();
      if (__this_03 == (UnityEngine_UI_Text_o *)0x0) goto label_0434ca4a;
      title = (UI_HeadedPanel_o *)(ulong)uVar4;
      UnityEngine_UI_Text__set_fontSize(__this_03,uVar4,(MethodInfo *)0x0);
      __this_04 = (UI_HeadedPanel_o *)*ppUVar1;
      if (__this_04 == (UI_HeadedPanel_o *)0x0) goto label_0434ca4a;
      title = "Label";
      pUVar6 = UnityEngine_Transform__Find
                         ((UnityEngine_Transform_o *)__this_04,(System_String_o *)"Label",
                          (MethodInfo *)0x0);
      if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto label_0434ca4a;
      pIVar10 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar6,MethodInfo_Text_GetComponent_Text);
      __this_04 = (UI_HeadedPanel_o *)
                  (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                            (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      title = "MainBody";
      UVar12 = UI_UIManager__GetThemeColor
                         ((System_String_o *)__this_04,(System_String_o *)"MainBody","TitleColor",
                          "DefaultPanel",(MethodInfo *)0x0);
      if (pIVar10 == (Il2CppObject *)0x0) goto label_0434ca4a;
      (*pIVar10->klass->vtable[0x17].methodPtr)
                (UVar12.fields._0_8_,UVar12.fields._8_8_,pIVar10,pIVar10->klass->vtable[0x17].method);
      auVar13 = (*(__this->klass->vtable)._35_get_Title.methodPtr)
                          (__this,(__this->klass->vtable)._35_get_Title.method);
      title = auVar13._0_8_;
      UI_HeadedPanel__SetTitle(__this,(System_String_o *)title,auVar13._8_8_);
      goto label_0434c7a3;
    }
    title = (UI_HeadedPanel_o *)0x0;
    __this_02 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar8,(MethodInfo *)0x0);
    __this_04 = pUVar8;
    if (__this_02 == (UnityEngine_GameObject_o *)0x0) goto label_0434ca4a;
    title = (UI_HeadedPanel_o *)0x0;
    UnityEngine_GameObject__SetActive(__this_02,0,(MethodInfo *)0x0);
    pUVar6 = *ppUVar1;
    if (pUVar6 == (UnityEngine_Transform_o *)0x0) {
      __this_04 = (UI_HeadedPanel_o *)0x0;
      goto label_0434ca4a;
    }
  }
  pUVar9 = (UnityEngine_UI_RawImage_o *)
           UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar6,MethodInfo_RawImage_GetComponent_RawImage);
  __this_04 = (UI_HeadedPanel_o *)
              (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                        (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  title = "MainBody";
  pUVar8 = (UI_HeadedPanel_o *)
           UI_UIManager__GetThemeTexture
                     ((System_String_o *)__this_04,(System_String_o *)"MainBody","HeaderTexture","DefaultPanel",
                      (MethodInfo *)0x0);
  if (pUVar9 != (UnityEngine_UI_RawImage_o *)0x0) {
    UnityEngine_UI_RawImage__set_texture(pUVar9,(UnityEngine_Texture_o *)pUVar8,(MethodInfo *)0x0);
    title = pUVar8;
    __this_04 = (UI_HeadedPanel_o *)0x0;
    if (*ppUVar1 != (UnityEngine_Transform_o *)0x0) {
      pIVar10 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)*ppUVar1,MethodInfo_RawImage_GetComponent_RawImage);
      __this_04 = (UI_HeadedPanel_o *)
                  (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                            (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
      title = "MainBody";
      UVar12 = UI_UIManager__GetThemeColor
                         ((System_String_o *)__this_04,(System_String_o *)"MainBody","HeaderColor",
                          "DefaultPanel",(MethodInfo *)0x0);
      if (pIVar10 != (Il2CppObject *)0x0) {
        title = (UI_HeadedPanel_o *)pIVar10->klass->vtable[0x17].method;
        (*pIVar10->klass->vtable[0x17].methodPtr)(UVar12.fields._0_8_,UVar12.fields._8_8_,pIVar10);
        __this_04 = (UI_HeadedPanel_o *)0x0;
        if (*ppUVar2 != (UnityEngine_Transform_o *)0x0) {
          pUVar9 = (UnityEngine_UI_RawImage_o *)
                   UnityEngine_Component__GetComponent_object_
                             ((UnityEngine_Component_o *)*ppUVar2,MethodInfo_RawImage_GetComponent_RawImage);
          __this_04 = (UI_HeadedPanel_o *)
                      (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
          title = "MainBody";
          pUVar8 = (UI_HeadedPanel_o *)
                   UI_UIManager__GetThemeTexture
                             ((System_String_o *)__this_04,(System_String_o *)"MainBody","HeaderTexture",
                              "DefaultPanel",(MethodInfo *)0x0);
          if (pUVar9 != (UnityEngine_UI_RawImage_o *)0x0) {
            UnityEngine_UI_RawImage__set_texture(pUVar9,(UnityEngine_Texture_o *)pUVar8,(MethodInfo *)0x0);
            title = pUVar8;
            __this_04 = (UI_HeadedPanel_o *)0x0;
            if (*ppUVar2 != (UnityEngine_Transform_o *)0x0) {
              pIVar10 = UnityEngine_Component__GetComponent_object_
                                  ((UnityEngine_Component_o *)*ppUVar2,MethodInfo_RawImage_GetComponent_RawImage);
              __this_04 = (UI_HeadedPanel_o *)
                          (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                    (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
              title = "MainBody";
              UVar12 = UI_UIManager__GetThemeColor
                                 ((System_String_o *)__this_04,(System_String_o *)"MainBody","HeaderColor",
                                  "DefaultPanel",(MethodInfo *)0x0);
              if (pIVar10 != (Il2CppObject *)0x0) {
                (*pIVar10->klass->vtable[0x17].methodPtr)(UVar12.fields._0_8_,UVar12.fields._8_8_,pIVar10);
                title = (UI_HeadedPanel_o *)0x0;
                __this_04 = __this;
                pUVar8 = (UI_HeadedPanel_o *)
                         UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                if (pUVar8 != (UI_HeadedPanel_o *)0x0) {
                  title = "Border";
                  pUVar6 = UnityEngine_Transform__Find
                                     ((UnityEngine_Transform_o *)pUVar8,(System_String_o *)"Border",
                                      (MethodInfo *)0x0);
                  __this_04 = pUVar8;
                  if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
                    pIVar10 = UnityEngine_Component__GetComponent_object_
                                        ((UnityEngine_Component_o *)pUVar6,MethodInfo_Image_GetComponent_Image);
                    __this_04 = (UI_HeadedPanel_o *)
                                (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                          (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
                    title = "MainBody";
                    UVar12 = UI_UIManager__GetThemeColor
                                       ((System_String_o *)__this_04,(System_String_o *)"MainBody",
                                        "BorderColor","DefaultPanel",(MethodInfo *)0x0);
                    if (pIVar10 != (Il2CppObject *)0x0) {
                      (*pIVar10->klass->vtable[0x17].methodPtr)
                                (UVar12.fields._0_8_,UVar12.fields._8_8_,pIVar10,
                                 pIVar10->klass->vtable[0x17].method);
                      cVar3 = (*(__this->klass->vtable)._42_get_CategoryButtons.methodPtr)
                                        (__this,(__this->klass->vtable)._42_get_CategoryButtons.method);
                      if (cVar3 != '\0') {
                        (*(__this->klass->vtable)._44_SetupTopButtons.methodPtr)
                                  (__this,(__this->klass->vtable)._44_SetupTopButtons.method);
                      }
                      UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
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
label_0434ca4a:
  il2cpp_runtime_helper_022b2c90();
  UI_BasePanel__SetCategoryPanel((UI_BasePanel_o *)__this_04,(System_String_o *)title,(MethodInfo *)0x0);
  vtableDispatch = (__this_04->klass->vtable)._43_SetTopButton.methodPtr;
  (*vtableDispatch)
            (__this_04,title,(__this_04->klass->vtable)._43_SetTopButton.method,vtableDispatch);
  return;
}


// UI.HeadedPanel$$SetCategoryPanel
// il2cpp: void UI_HeadedPanel__SetCategoryPanel (UI_HeadedPanel_o* __this, System_String_o* name, const MethodInfo* method);
// 0x434ca50

void UI_HeadedPanel__SetCategoryPanel(UI_HeadedPanel_o *__this,System_String_o *name,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  
  UI_BasePanel__SetCategoryPanel((UI_BasePanel_o *)__this,name,(MethodInfo *)0x0);
  vtableDispatch = (__this->klass->vtable)._43_SetTopButton.methodPtr;
  (*vtableDispatch)(__this,name,(__this->klass->vtable)._43_SetTopButton.method,vtableDispatch);
  return;
}


// UI.HeadedPanel$$SetTopButton
// il2cpp: void UI_HeadedPanel__SetTopButton (UI_HeadedPanel_o* __this, System_String_o* name, const MethodInfo* method);
// 0x434ca90

void UI_HeadedPanel__SetTopButton(UI_HeadedPanel_o *__this,System_String_o *name,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  long lVar2;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_03;
  int32_t iVar3;
  bool_conflict bVar4;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_04;
  UnityEngine_UI_Selectable_o *__this_05;
  long *plVar5;
  undefined1 auVar6 [12];
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar7;
  Il2CppMethodPointer pIVar8;
  UnityEngine_UI_Selectable_o *__this_06;
  
  if (g_data_057ae111 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_System_String_U);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
    g_data_057ae111 = '\x01';
  }
  pSVar7 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pIVar8 = (Il2CppMethodPointer)0x0;
  __this_06 = (UnityEngine_UI_Selectable_o *)0x0;
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._topButtons;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    iVar3 = System_Collections_Generic_Dictionary_object__object___get_Count(pSVar1,MethodInfo_Int32_get_Count);
    if (iVar3 < 1) {
      return;
    }
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._topButtons;
    if ((pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
       (__this_04 = System_Collections_Generic_Dictionary_object__object___get_Values(pSVar1,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_System_String_U),
       __this_04 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
      System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                 &stack0xffffffffffffffb8,__this_04,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
      while( true ) {
        __this_00.fields._8_8_ = pIVar8;
        __this_00.fields._dictionary = pSVar7;
        __this_00.fields._currentValue = (Il2CppObject *)__this_06;
        bVar4 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext
                          (__this_00,(MethodInfo_3251CB0 *)&stack0xffffffffffffffb8);
        if ((char)bVar4 == '\0') {
          __this_01.fields._8_8_ = pIVar8;
          __this_01.fields._dictionary = pSVar7;
          __this_01.fields._currentValue = (Il2CppObject *)__this_06;
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
                    (__this_01,(MethodInfo_3251CA0 *)&stack0xffffffffffffffb8);
          goto label_0434cbb9;
        }
        if (__this_06 == (UnityEngine_UI_Selectable_o *)0x0) break;
        UnityEngine_UI_Selectable__set_interactable(__this_06,1,(MethodInfo *)0x0);
      }
      il2cpp_runtime_helper_022b2c90();
    }
  }
  do {
    auVar6 = il2cpp_runtime_helper_022b2c90();
    if (auVar6._8_4_ != 1) {
label_0434cc4c:
      __this_03.fields._8_8_ = pIVar8;
      __this_03.fields._dictionary = pSVar7;
      __this_03.fields._currentValue = (Il2CppObject *)__this_06;
      System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
                (__this_03,(MethodInfo_3251CA0 *)&stack0xffffffffffffffb8);
      _Unwind_Resume(auVar6._0_8_);
    }
    plVar5 = (long *)__cxa_begin_catch(auVar6._0_8_);
    lVar2 = *plVar5;
    __cxa_end_catch();
    __this_02.fields._8_8_ = pIVar8;
    __this_02.fields._dictionary = pSVar7;
    __this_02.fields._currentValue = (Il2CppObject *)__this_06;
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
              (__this_02,(MethodInfo_3251CA0 *)&stack0xffffffffffffffb8);
    if (lVar2 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar2);
      goto label_0434cc4c;
    }
label_0434cbb9:
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._topButtons;
    if ((pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
       (__this_05 = (UnityEngine_UI_Selectable_o *)
                    System_Collections_Generic_Dictionary_object__object___get_Item
                              (pSVar1,(Il2CppObject *)name,MethodInfo_Button_get_Item),
       __this_05 != (UnityEngine_UI_Selectable_o *)0x0)) {
      UnityEngine_UI_Selectable__set_interactable(__this_05,0,(MethodInfo *)0x0);
      return;
    }
  } while( true );
}


// UI.HeadedPanel$$SetTitle
// il2cpp: void UI_HeadedPanel__SetTitle (UI_HeadedPanel_o* __this, System_String_o* title, const MethodInfo* method);
// 0x434b380

void UI_HeadedPanel__SetTitle(UI_HeadedPanel_o *__this,System_String_o *title,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  Il2CppMethodPointer vtableDispatch;
  long lVar2;
  UnityEngine_Transform_c *pUVar3;
  undefined8 uVar4;
  bool_conflict bVar5;
  UnityEngine_Transform_o *__this_00;
  Il2CppObject *pIVar6;
  UI_TooltipPopup_o *__this_01;
  MethodInfo *method_00;
  UnityEngine_Transform_o *__this_02;
  
  __this_01 = (UI_TooltipPopup_o *)title;
  if (g_data_057ae112 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&"Label");
    g_data_057ae112 = '\x01';
  }
  __this_02 = (__this->fields).TopBar;
  if (__this_02 != (UnityEngine_Transform_o *)0x0) {
    __this_01 = "Label";
    __this_00 = UnityEngine_Transform__Find(__this_02,(System_String_o *)"Label",(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Transform_o *)0x0) {
      __this_01 = MethodInfo_Text_GetComponent_Text;
      pIVar6 = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)__this_00,(MethodInfo_24E7B40 *)MethodInfo_Text_GetComponent_Text);
      __this_02 = __this_00;
      if (pIVar6 != (Il2CppObject *)0x0) {
        pIVar1 = pIVar6->klass;
        vtableDispatch = pIVar1->vtable[0x4b].methodPtr;
        (*vtableDispatch)(pIVar6,title,pIVar1->vtable[0x4b].method,pIVar1,vtableDispatch);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae100 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Confirm");
    g_data_057ae100 = '\x01';
  }
  method_00 = "Confirm";
  bVar5 = System_String__op_Equality
                    ((System_String_o *)__this_01,(System_String_o *)"Confirm",(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    lVar2 = __this_02[7].fields.m_CachedPtr;
    if (lVar2 == 0) {
      il2cpp_runtime_helper_022b2c90();
      *(undefined4 *)&(__this_01->fields)._label = 0x42700000;
      UI_BasePopup___ctor(__this_01,method_00);
      return;
    }
    (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
  }
  pUVar3 = __this_02->klass;
  uVar4._0_4_ = pUVar3[1]._2.token;
  uVar4._4_2_ = pUVar3[1]._2.method_count;
  uVar4._6_2_ = pUVar3[1]._2.property_count;
  (**(code **)&pUVar3[1]._2.thread_static_fields_offset)(__this_02,uVar4);
  return;
}


// UI.HeadedPanel$$SetupTopButtons
// il2cpp: void UI_HeadedPanel__SetupTopButtons (UI_HeadedPanel_o* __this, const MethodInfo* method);
// 0x434cc90

void UI_HeadedPanel__SetupTopButtons(UI_HeadedPanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  UnityEngine_Transform_o *__this_00;
  long lVar2;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_03;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_04;
  bool_conflict bVar3;
  int32_t iVar4;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_05;
  UnityEngine_RectTransform_o *__this_06;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *__this_07;
  long *plVar5;
  UnityEngine_Rect_o UVar6;
  undefined1 auVar7 [12];
  undefined8 in_stack_ffffffffffffff98;
  float in_stack_ffffffffffffffa0;
  float in_stack_ffffffffffffffa4;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *pSVar8;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_38;
  
  if (g_data_057ae113 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_System_String_U);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_get_Current);
    il2cpp_runtime_helper_023445d0();
    g_data_057ae113 = '\x01';
  }
  pSVar8 = (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *)0x0;
  UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._topButtons;
  if ((pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
     (__this_05 = System_Collections_Generic_Dictionary_object__object___get_Values(pSVar1,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_System_String_U),
     __this_05 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
    System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator
              (&local_38,__this_05,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
    in_stack_ffffffffffffffa0 = 0.0;
    pSVar8 = (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *)
             local_38.fields._dictionary;
    while( true ) {
      __this_01.fields._index = (int32_t)in_stack_ffffffffffffffa0;
      __this_01.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff98;
      __this_01.fields._version = (int32_t)in_stack_ffffffffffffffa4;
      __this_01.fields._currentValue = (Il2CppObject *)pSVar8;
      bVar3 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext
                        (__this_01,(MethodInfo_3251CB0 *)&stack0xffffffffffffffa8);
      if ((char)bVar3 == '\0') {
        __this_02.fields._index = (int32_t)in_stack_ffffffffffffffa0;
        __this_02.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff98;
        __this_02.fields._version = (int32_t)in_stack_ffffffffffffffa4;
        __this_02.fields._currentValue = (Il2CppObject *)pSVar8;
        System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
                  (__this_02,(MethodInfo_3251CA0 *)&stack0xffffffffffffffa8);
        goto label_0434cdff;
      }
      if ((UnityEngine_Component_o *)local_38.fields._currentValue == (UnityEngine_Component_o *)0x0) break;
      __this_06 = (UnityEngine_RectTransform_o *)
                  UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)local_38.fields._currentValue,MethodInfo_RectTransform_GetComponent_RectTransform);
      if (__this_06 == (UnityEngine_RectTransform_o *)0x0) goto label_0434ce82;
      UVar6 = UnityEngine_RectTransform__get_rect(__this_06,(MethodInfo *)0x0);
      in_stack_ffffffffffffffa0 = in_stack_ffffffffffffffa0 + UVar6.fields.m_Width;
    }
    il2cpp_runtime_helper_022b2c90();
label_0434ce82:
    il2cpp_runtime_helper_022b2c90();
  }
  do {
    auVar7 = il2cpp_runtime_helper_022b2c90();
    if (auVar7._8_4_ != 1) {
label_0434cef1:
      __this_04.fields._index = (int32_t)in_stack_ffffffffffffffa0;
      __this_04.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff98;
      __this_04.fields._version = (int32_t)in_stack_ffffffffffffffa4;
      __this_04.fields._currentValue = (Il2CppObject *)pSVar8;
      System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
                (__this_04,(MethodInfo_3251CA0 *)&stack0xffffffffffffffa8);
      _Unwind_Resume(auVar7._0_8_);
    }
    plVar5 = (long *)__cxa_begin_catch(auVar7._0_8_);
    lVar2 = *plVar5;
    __cxa_end_catch();
    __this_03.fields._index = (int32_t)in_stack_ffffffffffffffa0;
    __this_03.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff98;
    __this_03.fields._version = (int32_t)in_stack_ffffffffffffffa4;
    __this_03.fields._currentValue = (Il2CppObject *)pSVar8;
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
              (__this_03,(MethodInfo_3251CA0 *)&stack0xffffffffffffffa8);
    if (lVar2 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar2);
      goto label_0434cef1;
    }
label_0434cdff:
    __this_00 = (__this->fields).TopBar;
    if (__this_00 != (UnityEngine_Transform_o *)0x0) {
      __this_07 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                  UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)__this_00,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
      in_stack_ffffffffffffffa4 =
           (float)(*(__this->klass->vtable)._33_GetWidth.methodPtr)
                            (__this,(__this->klass->vtable)._33_GetWidth.method);
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._topButtons;
      if ((pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
         (iVar4 = System_Collections_Generic_Dictionary_object__object___get_Count(pSVar1,MethodInfo_Int32_get_Count),
         __this_07 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0)) {
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                  (__this_07,(in_stack_ffffffffffffffa4 - in_stack_ffffffffffffffa0) / (float)(iVar4 + 1),
                   (MethodInfo *)0x0);
        return;
      }
    }
  } while( true );
}


// UI.HeadedPanel$$GetPanelHeight
// il2cpp: float UI_HeadedPanel__GetPanelHeight (UI_HeadedPanel_o* __this, const MethodInfo* method);
// 0x434cf30

float UI_HeadedPanel__GetPanelHeight(UI_HeadedPanel_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer pIVar1;
  code *pcVar2;
  UnityEngine_Object_o *x;
  MethodInfo *pMVar3;
  UnityEngine_Vector2_o UVar4;
  bool_conflict bVar5;
  UnityEngine_RectTransform_o *pUVar6;
  UnityEngine_Transform_c *pUVar7;
  Il2CppRGCTXData *pIVar8;
  UnityEngine_GameObject_o *__this_00;
  Il2CppRGCTXData *__this_01;
  UnityEngine_CanvasGroup_o *__this_02;
  undefined8 uVar9;
  Il2CppClass *extraout_RDX;
  Il2CppClass *pIVar10;
  Il2CppClass *__this_03;
  undefined8 *puVar11;
  MethodInfo *pMVar12;
  UnityEngine_Transform_o *__this_04;
  Il2CppRGCTXData *pIVar13;
  Il2CppRGCTXData *y;
  undefined8 unaff_R12;
  MethodInfo_24E7B40 **unaff_R14;
  undefined8 unaff_R15;
  float fVar14;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  uint uVar15;
  undefined4 uVar16;
  float extraout_XMM0_Da_02;
  float extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined8 uStack_68;
  Il2CppClass *pIStack_60;
  UnityEngine_Transform_c *pUStack_58;
  undefined8 uStack_50;
  UI_HeadedPanel_o *pUStack_48;
  MethodInfo_24E7B40 **ppMStack_40;
  float fStack_38;
  float fStack_34;
  undefined1 auStack_28 [24];
  
  if (g_data_057ae114 == '\0') {
    ppMStack_40 = (MethodInfo_24E7B40 **)0x434cf4f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    g_data_057ae114 = '\x01';
  }
  __this_04 = (__this->fields).TopBar;
  if (__this_04 != (UnityEngine_Transform_o *)0x0) {
    unaff_R14 = &MethodInfo_RectTransform_GetComponent_RectTransform;
    ppMStack_40 = (MethodInfo_24E7B40 **)0x434cf72;
    pUVar6 = (UnityEngine_RectTransform_o *)
             UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_04,MethodInfo_RectTransform_GetComponent_RectTransform);
    if (pUVar6 != (UnityEngine_RectTransform_o *)0x0) {
      ppMStack_40 = (MethodInfo_24E7B40 **)0x434cf85;
      UVar4 = UnityEngine_RectTransform__get_sizeDelta(pUVar6,(MethodInfo *)0x0);
      auStack_28._8_4_ = extraout_XMM0_Dc;
      auStack_28._0_4_ = UVar4.fields.x;
      auStack_28._4_4_ = UVar4.fields.y;
      auStack_28._12_4_ = extraout_XMM0_Dd;
      ppMStack_40 = (MethodInfo_24E7B40 **)0x434cf9d;
      fStack_38 = (float)(*(__this->klass->vtable)._7_get_BorderVerticalPadding.methodPtr)(__this);
      __this_04 = (__this->fields).BottomBar;
      if (__this_04 != (UnityEngine_Transform_o *)0x0) {
        ppMStack_40 = (MethodInfo_24E7B40 **)0x434cfb3;
        pUVar6 = (UnityEngine_RectTransform_o *)
                 UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)__this_04,MethodInfo_RectTransform_GetComponent_RectTransform);
        if (pUVar6 != (UnityEngine_RectTransform_o *)0x0) {
          auStack_28._0_4_ = auStack_28._4_4_;
          if ((float)auStack_28._4_4_ <= fStack_38) {
            auStack_28._0_4_ = fStack_38;
          }
          ppMStack_40 = (MethodInfo_24E7B40 **)0x434cfd5;
          UVar4 = UnityEngine_RectTransform__get_sizeDelta(pUVar6,(MethodInfo *)0x0);
          fStack_38 = UVar4.fields.y;
          ppMStack_40 = (MethodInfo_24E7B40 **)0x434cff0;
          fStack_34 = fStack_38;
          fVar14 = (float)(*(__this->klass->vtable)._7_get_BorderVerticalPadding.methodPtr)
                                    (__this,(__this->klass->vtable)._7_get_BorderVerticalPadding.method);
          if (fStack_38 <= fVar14) {
            fStack_38 = fVar14;
          }
          ppMStack_40 = (MethodInfo_24E7B40 **)0x434d00f;
          fVar14 = (float)(*(__this->klass->vtable)._34_GetHeight.methodPtr)
                                    (__this,(__this->klass->vtable)._34_GetHeight.method);
          return (fVar14 - (float)auStack_28._0_4_) - fStack_38;
        }
      }
    }
  }
  ppMStack_40 = (MethodInfo_24E7B40 **)0x434d027;
  uStack_50 = il2cpp_runtime_helper_022b2c90();
  pUStack_48 = __this;
  ppMStack_40 = unaff_R14;
  if (g_data_057ae116 == '\0') {
    pUStack_58 = (UnityEngine_Transform_c *)0x434d04c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pUStack_58 = (UnityEngine_Transform_c *)0x434d058;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae116 = '\x01';
  }
  pUVar7 = __this_04[2].klass;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pUStack_58 = (UnityEngine_Transform_c *)0x434d07b;
    il2cpp_runtime_helper_02337ed0();
  }
  pUStack_58 = (UnityEngine_Transform_c *)0x434d085;
  bVar5 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar7,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return extraout_XMM0_Da;
  }
  fVar14 = extraout_XMM0_Da;
  if (*(int *)((long)&TypeInfo_UIManager[2].parameters + 4) == 0) {
    pUStack_58 = (UnityEngine_Transform_c *)0x434d0a7;
    fVar14 = (float)il2cpp_runtime_helper_02337ed0();
  }
  pIVar10 = *(Il2CppClass **)(TypeInfo_UIManager[2].virtualMethodPointer + 0x28);
  if (pIVar10 != (Il2CppClass *)0x0) {
    return fVar14;
  }
  pUStack_58 = (UnityEngine_Transform_c *)0x434d0ce;
  __this_03 = (Il2CppClass *)TypeInfo_UIManager;
  uStack_68 = il2cpp_runtime_helper_022b2c90();
  puVar11 = &uStack_68;
  pIStack_60 = pIVar10;
  pUStack_58 = pUVar7;
  if (g_data_057ae117 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae117 = '\x01';
  }
  pMVar12 = (MethodInfo *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  bVar5 = System_String__op_Inequality
                    ((System_String_o *)(__this_03->_1).byval_arg.data,(System_String_o *)pMVar12,
                     (MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    return extraout_XMM0_Da_00;
  }
  pUVar7 = (UnityEngine_Transform_c *)UI_HoverTooltip__GetPopup((UI_HoverTooltip_o *)__this_03,pMVar12);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar12 = (MethodInfo *)0x0;
  bVar5 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar7,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    return extraout_XMM0_Da_01;
  }
  pIVar8 = (Il2CppRGCTXData *)UI_HoverTooltip__GetPopup((UI_HoverTooltip_o *)__this_03,pMVar12);
  ((_union_13 *)&(__this_03->_1).this_arg.bits)->rgctx_data = pIVar8;
  il2cpp_runtime_helper_022b4080((_union_13 *)&(__this_03->_1).this_arg.bits);
  pIVar13 = ((_union_13 *)&(__this_03->_1).this_arg.bits)->rgctx_data;
  if (pIVar13 == (Il2CppRGCTXData *)0x0) {
    uVar15 = il2cpp_runtime_helper_022b2c90();
    pIVar10 = extraout_RDX;
  }
  else {
    uVar15 = (__this_03->_1).byval_arg.bits;
    pIVar8 = (__this_03->_1).byval_arg.data;
    puVar11 = &uStack_50;
    pIVar10 = __this_03;
    __this_03 = pIStack_60;
    pUVar7 = pUStack_58;
  }
  *(undefined8 *)((long)puVar11 + -8) = unaff_R15;
  *(UnityEngine_Transform_c **)((long)puVar11 + -0x10) = pUVar7;
  *(Il2CppClass **)((long)puVar11 + -0x18) = __this_03;
  *(uint *)((long)puVar11 + -0x1c) = uVar15;
  *(undefined8 *)((long)puVar11 + -0x30) = 0x434d1af;
  y = pIVar13;
  __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pIVar13,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    *(undefined8 *)((long)puVar11 + -0x30) = 0x434d1c2;
    bVar5 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
label_0434d23f:
      pMVar12 = pIVar13[0x15].method;
      y = (Il2CppRGCTXData *)0x0;
      if (pMVar12 != (MethodInfo *)0x0) {
        uVar9 = *(undefined8 *)(pMVar12->methodPointer + 0x5f0);
        pcVar2 = *(code **)(pMVar12->methodPointer + 0x5e8);
        *(undefined8 *)((long)puVar11 + -0x30) = 0x434d25e;
        (*pcVar2)(pMVar12,pIVar8,uVar9);
        pIVar13[0x17].klass = pIVar10;
        *(undefined8 *)((long)puVar11 + -0x30) = 0x434d274;
        il2cpp_runtime_helper_022b4080();
        *(undefined4 *)(pIVar13 + 0x18) = *(undefined4 *)((long)puVar11 + -0x1c);
        *(undefined8 *)((long)puVar11 + -0x30) = 0x434d289;
        UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
        *(undefined8 *)((long)puVar11 + -0x30) = 0x434d291;
        UI_TooltipPopup__SetTooltipPosition((UI_TooltipPopup_o *)pIVar13,(MethodInfo *)pIVar10);
        UI_BasePopup__Show((UI_BasePopup_o *)pIVar13,(MethodInfo *)pIVar10);
        return extraout_XMM0_Da_02;
      }
    }
    else {
      *(undefined8 *)((long)puVar11 + -0x30) = 0x434d1d0;
      UnityEngine_MonoBehaviour__StopAllCoroutines((UnityEngine_MonoBehaviour_o *)pIVar13,(MethodInfo *)0x0);
      pIVar1 = pIVar13->klass->vtable[0x30].methodPtr;
      *(undefined8 *)((long)puVar11 + -0x30) = 0x434d1e3;
      uVar16 = (*pIVar1)(pIVar13);
      *(undefined4 *)((long)puVar11 + -0x20) = uVar16;
      if (g_data_057ae0e3 == '\0') {
        *(undefined8 *)((long)puVar11 + -0x30) = 0x434d1fe;
        il2cpp_runtime_helper_023445d0(&MethodInfo_CanvasGroup_GetComponent_CanvasGroup);
        g_data_057ae0e3 = '\x01';
      }
      *(undefined8 *)((long)puVar11 + -0x30) = 0x434d20f;
      y = pIVar13;
      __this_01 = (Il2CppRGCTXData *)
                  UnityEngine_Component__get_transform((UnityEngine_Component_o *)pIVar13,(MethodInfo *)0x0);
      if (__this_01 != (Il2CppRGCTXData *)0x0) {
        *(undefined8 *)((long)puVar11 + -0x30) = 0x434d22a;
        __this_02 = (UnityEngine_CanvasGroup_o *)
                    UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)__this_01,MethodInfo_CanvasGroup_GetComponent_CanvasGroup);
        y = __this_01;
        if (__this_02 != (UnityEngine_CanvasGroup_o *)0x0) {
          *(undefined8 *)((long)puVar11 + -0x30) = 0x434d23f;
          UnityEngine_CanvasGroup__set_alpha(__this_02,*(float *)((long)puVar11 + -0x20),(MethodInfo *)0x0);
          goto label_0434d23f;
        }
      }
    }
  }
  *(undefined8 *)((long)puVar11 + -0x30) = 0x434d2a7;
  uVar9 = il2cpp_runtime_helper_022b2c90();
  *(Il2CppRGCTXData **)((long)puVar11 + -0x30) = pIVar8;
  *(Il2CppClass **)((long)puVar11 + -0x38) = pIVar10;
  *(undefined8 *)((long)puVar11 + -0x40) = unaff_R12;
  *(Il2CppRGCTXData **)((long)puVar11 + -0x48) = pIVar13;
  *(undefined8 *)((long)puVar11 + -0x50) = uVar9;
  if (g_data_057ae118 == '\0') {
    *(undefined8 *)((long)puVar11 + -0x58) = 0x434d2d0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae118 = '\x01';
  }
  pMVar12 = y[7].method;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)((long)puVar11 + -0x58) = 0x434d2f4;
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar13 = y + 7;
  *(undefined8 *)((long)puVar11 + -0x58) = 0x434d302;
  bVar5 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pMVar12,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    if (pIVar13->klass == (Il2CppClass *)0x0) {
label_0434d36c:
      *(undefined8 *)((long)puVar11 + -0x58) = 0x434d371;
      il2cpp_runtime_helper_022b2c90();
      *(undefined4 *)&pMVar12->return_type = 0x42200000;
      UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)pMVar12,(MethodInfo *)0x0);
      return extraout_XMM0_Da_03;
    }
    x = pIVar13->klass->static_fields;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)puVar11 + -0x58) = 0x434d327;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)puVar11 + -0x58) = 0x434d334;
    bVar5 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      pMVar3 = pIVar13->method;
      pMVar12 = (MethodInfo *)0x0;
      if (pMVar3 == (MethodInfo *)0x0) goto label_0434d36c;
      uVar9 = *(undefined8 *)(pMVar3->methodPointer + 0x2a0);
      pcVar2 = *(code **)(pMVar3->methodPointer + 0x298);
      *(undefined8 *)((long)puVar11 + -0x58) = 0x434d350;
      (*pcVar2)(pMVar3,uVar9);
    }
  }
  pIVar13->rgctxDataDummy = (void *)0x0;
  fVar14 = (float)il2cpp_runtime_helper_022b4080(pIVar13,0);
  return fVar14;
}


// UI.HeadedPanel$$.ctor
// il2cpp: void UI_HeadedPanel___ctor (UI_HeadedPanel_o* __this, const MethodInfo* method);
// 0x4345f20

void UI_HeadedPanel___ctor(UI_HeadedPanel_o *__this,MethodInfo *method)

{
  System_String_o *defaultValue;
  System_Collections_Generic_List_BasePopup__o *__this_00;
  Settings_StringSetting_o *__this_01;
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  
  if (g_data_057ae115 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_UnityEngine_UI_Button);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Button);
    g_data_057ae115 = '\x01';
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Button);
  System_Collections_Generic_Dictionary_object__object____ctor(pSVar1,MethodInfo_Dictionary_2_System_String_UnityEngine_UI_Button);
  (__this->fields)._topButtons = (System_Collections_Generic_Dictionary_string__Button__o *)pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._topButtons,pSVar1);
  if (g_data_057ae02c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Type,0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Type);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UI_BasePopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_BasePopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    g_data_057ae02c = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_BasePopup__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_BasePopup);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UI_BasePopup);
  (__this->fields)._popups = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._popups,__this_00);
  defaultValue = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  __this_01 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(__this_01,defaultValue,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields)._currentCategoryPanelName = __this_01;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._currentCategoryPanelName,__this_01);
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Type);
  System_Collections_Generic_Dictionary_object__object____ctor(pSVar1,MethodInfo_Dictionary_2_System_String_System_Type);
  (__this->fields)._categoryPanelTypes = (System_Collections_Generic_Dictionary_string__Type__o *)pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._categoryPanelTypes);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


