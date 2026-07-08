// Type: UI.HeadedPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/HeadedPanel.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/BaseMenu/HeadedPanel.cs  [CHANGED since prior version]
// --------------------------------

// UI.HeadedPanel$$get_Title
// il2cpp: System_String_o* UI_HeadedPanel__get_Title (UI_HeadedPanel_o* __this, const MethodInfo* method);
// 0x4022aa0

System_String_o * UI_HeadedPanel__get_Title(UI_HeadedPanel_o *__this,MethodInfo *method)

{
  if (DAT_057042f9 == '\0') {
    il2cpp_init_method_metadata(&"Default");
    DAT_057042f9 = '\x01';
  }
  return "Default";
}


// UI.HeadedPanel$$get_TopBarHeight
// il2cpp: float UI_HeadedPanel__get_TopBarHeight (UI_HeadedPanel_o* __this, const MethodInfo* method);
// 0x4022ad0

float UI_HeadedPanel__get_TopBarHeight(UI_HeadedPanel_o *__this,MethodInfo *method)

{
  return 65.0;
}


// UI.HeadedPanel$$get_BottomBarHeight
// il2cpp: float UI_HeadedPanel__get_BottomBarHeight (UI_HeadedPanel_o* __this, const MethodInfo* method);
// 0x4022ae0

float UI_HeadedPanel__get_BottomBarHeight(UI_HeadedPanel_o *__this,MethodInfo *method)

{
  return 65.0;
}


// UI.HeadedPanel$$get_BottomBarSpacing
// il2cpp: float UI_HeadedPanel__get_BottomBarSpacing (UI_HeadedPanel_o* __this, const MethodInfo* method);
// 0x4022af0

float UI_HeadedPanel__get_BottomBarSpacing(UI_HeadedPanel_o *__this,MethodInfo *method)

{
  return 20.0;
}


// UI.HeadedPanel$$get_BottomBarPadding
// il2cpp: int32_t UI_HeadedPanel__get_BottomBarPadding (UI_HeadedPanel_o* __this, const MethodInfo* method);
// 0x4022b00

int32_t UI_HeadedPanel__get_BottomBarPadding(UI_HeadedPanel_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.HeadedPanel$$get_VerticalPadding
// il2cpp: int32_t UI_HeadedPanel__get_VerticalPadding (UI_HeadedPanel_o* __this, const MethodInfo* method);
// 0x4022b10

int32_t UI_HeadedPanel__get_VerticalPadding(UI_HeadedPanel_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.HeadedPanel$$get_HorizontalPadding
// il2cpp: int32_t UI_HeadedPanel__get_HorizontalPadding (UI_HeadedPanel_o* __this, const MethodInfo* method);
// 0x4022b20

int32_t UI_HeadedPanel__get_HorizontalPadding(UI_HeadedPanel_o *__this,MethodInfo *method)

{
  return 0x1e;
}


// UI.HeadedPanel$$get_TitleFontSize
// il2cpp: int32_t UI_HeadedPanel__get_TitleFontSize (UI_HeadedPanel_o* __this, const MethodInfo* method);
// 0x4022b30

int32_t UI_HeadedPanel__get_TitleFontSize(UI_HeadedPanel_o *__this,MethodInfo *method)

{
  return 0x1e;
}


// UI.HeadedPanel$$get_ButtonFontSize
// il2cpp: int32_t UI_HeadedPanel__get_ButtonFontSize (UI_HeadedPanel_o* __this, const MethodInfo* method);
// 0x4022b40

int32_t UI_HeadedPanel__get_ButtonFontSize(UI_HeadedPanel_o *__this,MethodInfo *method)

{
  return 0x1c;
}


// UI.HeadedPanel$$get_CategoryButtons
// il2cpp: bool UI_HeadedPanel__get_CategoryButtons (UI_HeadedPanel_o* __this, const MethodInfo* method);
// 0x4022b50

bool_conflict UI_HeadedPanel__get_CategoryButtons(UI_HeadedPanel_o *__this,MethodInfo *method)

{
  return 0;
}


// UI.HeadedPanel$$Setup
// il2cpp: void UI_HeadedPanel__Setup (UI_HeadedPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x4022b60

void UI_HeadedPanel__Setup(UI_HeadedPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o **ppUVar1;
  UnityEngine_Transform_o **ppUVar2;
  char cVar3;
  int32_t iVar4;
  int32_t right;
  bool_conflict bVar5;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_RectTransform_o *pUVar7;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *__this_00;
  UnityEngine_UI_LayoutGroup_o *__this_01;
  UnityEngine_RectOffset_o *__this_02;
  UnityEngine_GameObject_o *__this_03;
  UnityEngine_UI_Text_o *__this_04;
  UnityEngine_UI_RawImage_o *pUVar8;
  System_String_o *pSVar9;
  UnityEngine_Texture_o *pUVar10;
  Il2CppObject *pIVar11;
  float fVar12;
  UnityEngine_Color_o UVar13;
  undefined1 auVar14 [16];
  
  if (DAT_057042fa == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLay);
    il2cpp_init_method_metadata(&MethodInfo_Image_GetComponent_Image);
    il2cpp_init_method_metadata(&MethodInfo_RawImage_GetComponent_RawImage);
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_RectOffset);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"DefaultPanel");
    il2cpp_init_method_metadata(&"Label");
    il2cpp_init_method_metadata(&"TitleColor");
    il2cpp_init_method_metadata(&"HeaderColor");
    il2cpp_init_method_metadata(&"HeaderTexture");
    il2cpp_init_method_metadata(&"Background/TopBar");
    il2cpp_init_method_metadata(&"BorderColor");
    il2cpp_init_method_metadata(&"Border");
    il2cpp_init_method_metadata(&"Background/BottomBar");
    il2cpp_init_method_metadata(&"MainBody");
    DAT_057042fa = '\x01';
  }
  pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto LAB_0402329a;
  pUVar6 = UnityEngine_Transform__Find(pUVar6,"Background/TopBar",(MethodInfo *)0x0);
  ppUVar1 = &(__this->fields).TopBar;
  (__this->fields).TopBar = pUVar6;
  il2cpp_runtime_glue();
  pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto LAB_0402329a;
  pUVar6 = UnityEngine_Transform__Find(pUVar6,"Background/BottomBar",(MethodInfo *)0x0);
  ppUVar2 = &(__this->fields).BottomBar;
  (__this->fields).BottomBar = pUVar6;
  il2cpp_runtime_glue(ppUVar2,pUVar6);
  pUVar6 = (__this->fields).TopBar;
  if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto LAB_0402329a;
  pUVar7 = (UnityEngine_RectTransform_o *)
           UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)pUVar6,MethodInfo_RectTransform_GetComponent_RectTransform);
  fVar12 = (float)(*(__this->klass->vtable)._36_get_TopBarHeight.methodPtr)
                            (__this,(__this->klass->vtable)._36_get_TopBarHeight.method);
  if (pUVar7 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0402329a;
  UnityEngine_RectTransform__SetSizeWithCurrentAnchors(pUVar7,1,fVar12,(MethodInfo *)0x0);
  if (*ppUVar2 == (UnityEngine_Transform_o *)0x0) goto LAB_0402329a;
  pUVar7 = (UnityEngine_RectTransform_o *)
           UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)*ppUVar2,MethodInfo_RectTransform_GetComponent_RectTransform);
  fVar12 = (float)(*(__this->klass->vtable)._37_get_BottomBarHeight.methodPtr)
                            (__this,(__this->klass->vtable)._37_get_BottomBarHeight.method);
  if (pUVar7 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0402329a;
  UnityEngine_RectTransform__SetSizeWithCurrentAnchors(pUVar7,1,fVar12,(MethodInfo *)0x0);
  if (*ppUVar2 == (UnityEngine_Transform_o *)0x0) goto LAB_0402329a;
  __this_00 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
              UnityEngine_Component__GetComponent<object>
                        ((UnityEngine_Component_o *)*ppUVar2,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLay);
  fVar12 = (float)(*(__this->klass->vtable)._38_get_BottomBarSpacing.methodPtr)(__this);
  if (__this_00 == (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) goto LAB_0402329a;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing(__this_00,fVar12,(MethodInfo *)0x0);
  if (*ppUVar2 == (UnityEngine_Transform_o *)0x0) goto LAB_0402329a;
  __this_01 = (UnityEngine_UI_LayoutGroup_o *)
              UnityEngine_Component__GetComponent<object>
                        ((UnityEngine_Component_o *)*ppUVar2,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLay);
  iVar4 = (*(__this->klass->vtable)._39_get_BottomBarPadding.methodPtr)
                    (__this,(__this->klass->vtable)._39_get_BottomBarPadding.method);
  right = (*(__this->klass->vtable)._39_get_BottomBarPadding.methodPtr)
                    (__this,(__this->klass->vtable)._39_get_BottomBarPadding.method);
  __this_02 = (UnityEngine_RectOffset_o *)il2cpp_runtime_glue(TypeInfo_RectOffset);
  UnityEngine_RectOffset___ctor(__this_02,iVar4,right,0,0,(MethodInfo *)0x0);
  if (__this_01 == (UnityEngine_UI_LayoutGroup_o *)0x0) goto LAB_0402329a;
  UnityEngine_UI_LayoutGroup__set_padding(__this_01,__this_02,(MethodInfo *)0x0);
  if (*ppUVar1 == (UnityEngine_Transform_o *)0x0) goto LAB_0402329a;
  pUVar6 = UnityEngine_Transform__Find(*ppUVar1,"Label",(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
LAB_04022ff3:
    pUVar6 = *ppUVar1;
  }
  else {
    cVar3 = (*(__this->klass->vtable)._42_get_CategoryButtons.methodPtr)
                      (__this,(__this->klass->vtable)._42_get_CategoryButtons.method);
    pUVar6 = (__this->fields).TopBar;
    if ((pUVar6 == (UnityEngine_Transform_o *)0x0) ||
       (pUVar6 = UnityEngine_Transform__Find(pUVar6,"Label",(MethodInfo *)0x0),
       pUVar6 == (UnityEngine_Transform_o *)0x0)) goto LAB_0402329a;
    if (cVar3 == '\0') {
      __this_04 = (UnityEngine_UI_Text_o *)
                  UnityEngine_Component__GetComponent<object>
                            ((UnityEngine_Component_o *)pUVar6,MethodInfo_Text_GetComponent_Text);
      iVar4 = (*(__this->klass->vtable)._40_get_TitleFontSize.methodPtr)
                        (__this,(__this->klass->vtable)._40_get_TitleFontSize.method);
      if (__this_04 == (UnityEngine_UI_Text_o *)0x0) goto LAB_0402329a;
      UnityEngine_UI_Text__set_fontSize(__this_04,iVar4,(MethodInfo *)0x0);
      if ((*ppUVar1 == (UnityEngine_Transform_o *)0x0) ||
         (pUVar6 = UnityEngine_Transform__Find(*ppUVar1,"Label",(MethodInfo *)0x0),
         pUVar6 == (UnityEngine_Transform_o *)0x0)) goto LAB_0402329a;
      pIVar11 = UnityEngine_Component__GetComponent<object>
                          ((UnityEngine_Component_o *)pUVar6,MethodInfo_Text_GetComponent_Text);
      pSVar9 = (System_String_o *)
               (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                         (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UVar13 = UI_UIManager__GetThemeColor
                         (pSVar9,"MainBody","TitleColor","DefaultPanel",(MethodInfo *)0x0);
      if (pIVar11 == (Il2CppObject *)0x0) goto LAB_0402329a;
      (*pIVar11->klass->vtable[0x17].methodPtr)
                (UVar13.fields._0_8_,UVar13.fields._8_8_,pIVar11,pIVar11->klass->vtable[0x17].method
                );
      auVar14 = (*(__this->klass->vtable)._35_get_Title.methodPtr)
                          (__this,(__this->klass->vtable)._35_get_Title.method);
      UI_HeadedPanel__SetTitle(__this,auVar14._0_8_,auVar14._8_8_);
      goto LAB_04022ff3;
    }
    __this_03 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0);
    if (__this_03 == (UnityEngine_GameObject_o *)0x0) goto LAB_0402329a;
    UnityEngine_GameObject__SetActive(__this_03,0,(MethodInfo *)0x0);
    pUVar6 = *ppUVar1;
  }
  if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
    pUVar8 = (UnityEngine_UI_RawImage_o *)
             UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)pUVar6,MethodInfo_RawImage_GetComponent_RawImage);
    pSVar9 = (System_String_o *)
             (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                       (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pUVar10 = (UnityEngine_Texture_o *)
              UI_UIManager__GetThemeTexture
                        (pSVar9,"MainBody","HeaderTexture","DefaultPanel",(MethodInfo *)0x0);
    if (pUVar8 != (UnityEngine_UI_RawImage_o *)0x0) {
      UnityEngine_UI_RawImage__set_texture(pUVar8,pUVar10,(MethodInfo *)0x0);
      if (*ppUVar1 != (UnityEngine_Transform_o *)0x0) {
        pIVar11 = UnityEngine_Component__GetComponent<object>
                            ((UnityEngine_Component_o *)*ppUVar1,MethodInfo_RawImage_GetComponent_RawImage);
        pSVar9 = (System_String_o *)
                 (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                           (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
        UVar13 = UI_UIManager__GetThemeColor
                           (pSVar9,"MainBody","HeaderColor","DefaultPanel",(MethodInfo *)0x0);
        if (pIVar11 != (Il2CppObject *)0x0) {
          (*pIVar11->klass->vtable[0x17].methodPtr)
                    (UVar13.fields._0_8_,UVar13.fields._8_8_,pIVar11,
                     pIVar11->klass->vtable[0x17].method);
          if (*ppUVar2 != (UnityEngine_Transform_o *)0x0) {
            pUVar8 = (UnityEngine_UI_RawImage_o *)
                     UnityEngine_Component__GetComponent<object>
                               ((UnityEngine_Component_o *)*ppUVar2,MethodInfo_RawImage_GetComponent_RawImage);
            pSVar9 = (System_String_o *)
                     (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                               (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
            pUVar10 = (UnityEngine_Texture_o *)
                      UI_UIManager__GetThemeTexture
                                (pSVar9,"MainBody","HeaderTexture","DefaultPanel",(MethodInfo *)0x0);
            if (pUVar8 != (UnityEngine_UI_RawImage_o *)0x0) {
              UnityEngine_UI_RawImage__set_texture(pUVar8,pUVar10,(MethodInfo *)0x0);
              if (*ppUVar2 != (UnityEngine_Transform_o *)0x0) {
                pIVar11 = UnityEngine_Component__GetComponent<object>
                                    ((UnityEngine_Component_o *)*ppUVar2,MethodInfo_RawImage_GetComponent_RawImage);
                pSVar9 = (System_String_o *)
                         (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                   (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
                UVar13 = UI_UIManager__GetThemeColor
                                   (pSVar9,"MainBody","HeaderColor","DefaultPanel",(MethodInfo *)0x0)
                ;
                if (pIVar11 != (Il2CppObject *)0x0) {
                  (*pIVar11->klass->vtable[0x17].methodPtr)
                            (UVar13.fields._0_8_,UVar13.fields._8_8_,pIVar11);
                  pUVar6 = UnityEngine_Component__get_transform
                                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                  if ((pUVar6 != (UnityEngine_Transform_o *)0x0) &&
                     (pUVar6 = UnityEngine_Transform__Find(pUVar6,"Border",(MethodInfo *)0x0),
                     pUVar6 != (UnityEngine_Transform_o *)0x0)) {
                    pIVar11 = UnityEngine_Component__GetComponent<object>
                                        ((UnityEngine_Component_o *)pUVar6,MethodInfo_Image_GetComponent_Image);
                    pSVar9 = (System_String_o *)
                             (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                       (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
                    UVar13 = UI_UIManager__GetThemeColor
                                       (pSVar9,"MainBody","BorderColor","DefaultPanel",
                                        (MethodInfo *)0x0);
                    if (pIVar11 != (Il2CppObject *)0x0) {
                      (*pIVar11->klass->vtable[0x17].methodPtr)
                                (UVar13.fields._0_8_,UVar13.fields._8_8_,pIVar11,
                                 pIVar11->klass->vtable[0x17].method);
                      cVar3 = (*(__this->klass->vtable)._42_get_CategoryButtons.methodPtr)
                                        (__this,(__this->klass->vtable)._42_get_CategoryButtons.
                                                method);
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
LAB_0402329a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.HeadedPanel$$SetCategoryPanel
// il2cpp: void UI_HeadedPanel__SetCategoryPanel (UI_HeadedPanel_o* __this, System_String_o* name, const MethodInfo* method);
// 0x40232a0

void UI_HeadedPanel__SetCategoryPanel
               (UI_HeadedPanel_o *__this,System_String_o *name,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  
  UI_BasePanel__SetCategoryPanel((UI_BasePanel_o *)__this,name,(MethodInfo *)0x0);
  vtable_dispatch = (__this->klass->vtable)._43_SetTopButton.methodPtr;
  (*vtable_dispatch)
            (__this,name,(__this->klass->vtable)._43_SetTopButton.method,vtable_dispatch);
  return;
}


// UI.HeadedPanel$$SetTopButton
// il2cpp: void UI_HeadedPanel__SetTopButton (UI_HeadedPanel_o* __this, System_String_o* name, const MethodInfo* method);
// 0x40232e0

void UI_HeadedPanel__SetTopButton(UI_HeadedPanel_o *__this,System_String_o *name,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_01;
  int32_t iVar2;
  bool_conflict bVar3;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_02;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar4;
  Il2CppMethodPointer pIVar5;
  UnityEngine_UI_Selectable_o *pUVar6;
  
  if (DAT_057042fb == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Button_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_System);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Button_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
    DAT_057042fb = '\x01';
  }
  pSVar4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pIVar5 = (Il2CppMethodPointer)0x0;
  pUVar6 = (UnityEngine_UI_Selectable_o *)0x0;
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._topButtons;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    iVar2 = System_Collections_Generic_Dictionary<object__object>__get_Count(pSVar1,MethodInfo_Int32_get_Count);
    if (iVar2 < 1) {
      return;
    }
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._topButtons
    ;
    if ((pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
       (__this_02 = System_Collections_Generic_Dictionary<object__object>__get_Values
                              (pSVar1,MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_System),
       __this_02 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
      System_Collections_Generic_Dictionary_ValueCollection<object__object>__GetEnumerator
                ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *
                 )&stack0xffffffffffffffb8,__this_02,MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
      while (__this_00.fields._8_8_ = pIVar5, __this_00.fields._dictionary = pSVar4,
            __this_00.fields._currentValue = (Il2CppObject *)pUVar6,
            bVar3 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object__object>__MoveNext
                              (__this_00,(MethodInfo_31D09E0 *)&stack0xffffffffffffffb8),
            (char)bVar3 != '\0') {
        if (pUVar6 == (UnityEngine_UI_Selectable_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        UnityEngine_UI_Selectable__set_interactable(pUVar6,1,(MethodInfo *)0x0);
      }
      __this_01.fields._8_8_ = pIVar5;
      __this_01.fields._dictionary = pSVar4;
      __this_01.fields._currentValue = (Il2CppObject *)pUVar6;
      System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object__object>__Dispose
                (__this_01,(MethodInfo_31D09D0 *)&stack0xffffffffffffffb8);
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
               (__this->fields)._topButtons;
      if ((pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
         (pUVar6 = (UnityEngine_UI_Selectable_o *)
                   System_Collections_Generic_Dictionary<object__object>__get_Item
                             (pSVar1,(Il2CppObject *)name,MethodInfo_Button_get_Item),
         pUVar6 != (UnityEngine_UI_Selectable_o *)0x0)) {
        UnityEngine_UI_Selectable__set_interactable(pUVar6,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.HeadedPanel$$SetTitle
// il2cpp: void UI_HeadedPanel__SetTitle (UI_HeadedPanel_o* __this, System_String_o* title, const MethodInfo* method);
// 0x4021bd0

void UI_HeadedPanel__SetTitle(UI_HeadedPanel_o *__this,System_String_o *title,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  Il2CppMethodPointer vtable_dispatch;
  UnityEngine_Transform_o *pUVar2;
  Il2CppObject *pIVar3;
  
  if (DAT_057042fc == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&"Label");
    DAT_057042fc = '\x01';
  }
  pUVar2 = (__this->fields).TopBar;
  if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
    pUVar2 = UnityEngine_Transform__Find(pUVar2,"Label",(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      pIVar3 = UnityEngine_Component__GetComponent<object>
                         ((UnityEngine_Component_o *)pUVar2,MethodInfo_Text_GetComponent_Text);
      if (pIVar3 != (Il2CppObject *)0x0) {
        pIVar1 = pIVar3->klass;
        vtable_dispatch = pIVar1->vtable[0x4b].methodPtr;
        (*vtable_dispatch)
                  (pIVar3,title,pIVar1->vtable[0x4b].method,pIVar1,vtable_dispatch);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.HeadedPanel$$SetupTopButtons
// il2cpp: void UI_HeadedPanel__SetupTopButtons (UI_HeadedPanel_o* __this, const MethodInfo* method);
// 0x40234e0

void UI_HeadedPanel__SetupTopButtons(UI_HeadedPanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  UnityEngine_Transform_o *__this_00;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_02;
  bool_conflict bVar2;
  int32_t iVar3;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_03;
  UnityEngine_RectTransform_o *__this_04;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *__this_05;
  float fVar4;
  UnityEngine_Rect_o UVar5;
  undefined8 in_stack_ffffffffffffff98;
  float fVar6;
  undefined4 in_stack_ffffffffffffffa4;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *pSVar7;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_38;
  
  if (DAT_057042fd == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLay);
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_System);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Button_get_Current);
    il2cpp_init_method_metadata();
    DAT_057042fd = '\x01';
  }
  UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._topButtons;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    __this_03 = System_Collections_Generic_Dictionary<object__object>__get_Values
                          (pSVar1,MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_System);
    if (__this_03 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
      System_Collections_Generic_Dictionary_ValueCollection<object__object>__GetEnumerator
                (&local_38,__this_03,MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
      fVar6 = 0.0;
      pSVar7 = (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *)
               local_38.fields._dictionary;
      while( true ) {
        __this_01.fields._index = (int32_t)fVar6;
        __this_01.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff98;
        __this_01.fields._version = in_stack_ffffffffffffffa4;
        __this_01.fields._currentValue = (Il2CppObject *)pSVar7;
        bVar2 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object__object>__MoveNext
                          (__this_01,(MethodInfo_31D09E0 *)&stack0xffffffffffffffa8);
        if ((char)bVar2 == '\0') break;
        if ((UnityEngine_Component_o *)local_38.fields._currentValue ==
            (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        __this_04 = (UnityEngine_RectTransform_o *)
                    UnityEngine_Component__GetComponent<object>
                              ((UnityEngine_Component_o *)local_38.fields._currentValue,MethodInfo_RectTransform_GetComponent_RectTransform
                              );
        if (__this_04 == (UnityEngine_RectTransform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        UVar5 = UnityEngine_RectTransform__get_rect(__this_04,(MethodInfo *)0x0);
        fVar6 = fVar6 + UVar5.fields.m_Width;
      }
      __this_02.fields._index = (int32_t)fVar6;
      __this_02.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff98;
      __this_02.fields._version = in_stack_ffffffffffffffa4;
      __this_02.fields._currentValue = (Il2CppObject *)pSVar7;
      System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object__object>__Dispose
                (__this_02,(MethodInfo_31D09D0 *)&stack0xffffffffffffffa8);
      __this_00 = (__this->fields).TopBar;
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        __this_05 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                    UnityEngine_Component__GetComponent<object>
                              ((UnityEngine_Component_o *)__this_00,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLay);
        fVar4 = (float)(*(__this->klass->vtable)._33_GetWidth.methodPtr)
                                 (__this,(__this->klass->vtable)._33_GetWidth.method);
        pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                 (__this->fields)._topButtons;
        if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          iVar3 = System_Collections_Generic_Dictionary<object__object>__get_Count
                            (pSVar1,MethodInfo_Int32_get_Count);
          if (__this_05 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
            UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                      (__this_05,(fVar4 - fVar6) / (float)(iVar3 + 1),(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.HeadedPanel$$GetPanelHeight
// il2cpp: float UI_HeadedPanel__GetPanelHeight (UI_HeadedPanel_o* __this, const MethodInfo* method);
// 0x4023780

float UI_HeadedPanel__GetPanelHeight(UI_HeadedPanel_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_Vector2_o UVar2;
  UnityEngine_RectTransform_o *pUVar3;
  float fVar4;
  float fVar5;
  float fStack_24;
  
  if (DAT_057042fe == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    DAT_057042fe = '\x01';
  }
  pUVar1 = (__this->fields).TopBar;
  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
    pUVar3 = (UnityEngine_RectTransform_o *)
             UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)pUVar1,MethodInfo_RectTransform_GetComponent_RectTransform);
    if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
      UVar2 = UnityEngine_RectTransform__get_sizeDelta(pUVar3,(MethodInfo *)0x0);
      fVar4 = (float)(*(__this->klass->vtable)._7_get_BorderVerticalPadding.methodPtr)
                               (__this,(__this->klass->vtable)._7_get_BorderVerticalPadding.method);
      pUVar1 = (__this->fields).BottomBar;
      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
        pUVar3 = (UnityEngine_RectTransform_o *)
                 UnityEngine_Component__GetComponent<object>
                           ((UnityEngine_Component_o *)pUVar1,MethodInfo_RectTransform_GetComponent_RectTransform);
        if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
          fStack_24 = UVar2.fields.y;
          if (fStack_24 <= fVar4) {
            fStack_24 = fVar4;
          }
          UVar2 = UnityEngine_RectTransform__get_sizeDelta(pUVar3,(MethodInfo *)0x0);
          fVar5 = (float)(*(__this->klass->vtable)._7_get_BorderVerticalPadding.methodPtr)
                                   (__this,(__this->klass->vtable)._7_get_BorderVerticalPadding.
                                           method);
          fVar4 = UVar2.fields.y;
          if (UVar2.fields.y <= fVar5) {
            fVar4 = fVar5;
          }
          fVar5 = (float)(*(__this->klass->vtable)._34_GetHeight.methodPtr)
                                   (__this,(__this->klass->vtable)._34_GetHeight.method);
          return (fVar5 - fStack_24) - fVar4;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.HeadedPanel$$.ctor
// il2cpp: void UI_HeadedPanel___ctor (UI_HeadedPanel_o* __this, const MethodInfo* method);
// 0x401c850

void UI_HeadedPanel___ctor(UI_HeadedPanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if (DAT_057042ff == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_UnityEngine_UI_Button);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__Button);
    DAT_057042ff = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_string__Button);
  System_Collections_Generic_Dictionary<object__object>___ctor(__this_00,MethodInfo_Dictionary_2_System_String_UnityEngine_UI_Button);
  (__this->fields)._topButtons =
       (System_Collections_Generic_Dictionary_string__Button__o *)__this_00;
  il2cpp_runtime_glue(&(__this->fields)._topButtons);
  UI_BasePanel___ctor((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
  return;
}


