// Type: UI.MultiplayerMapPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/MultiplayerMapPopup.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/MainMenu/MultiplayerMapPopup.cs  [CHANGED since prior version]
// --------------------------------

// UI.MultiplayerMapPopup.<>c__DisplayClass20_0$$.ctor
// il2cpp: void UI_MultiplayerMapPopup___c__DisplayClass20_0___ctor (UI_MultiplayerMapPopup___c__DisplayClass20_0_o* __this, const MethodInfo* method);
// 0x40f6b50

void UI_MultiplayerMapPopup_<>c__DisplayClass20_0___ctor
               (UI_MultiplayerMapPopup___c__DisplayClass20_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MultiplayerMapPopup.<>c__DisplayClass20_0$$<Setup>b__3
// il2cpp: void UI_MultiplayerMapPopup___c__DisplayClass20_0___Setup_b__3 (UI_MultiplayerMapPopup___c__DisplayClass20_0_o* __this, const MethodInfo* method);
// 0x40f7120

void UI_MultiplayerMapPopup_<>c__DisplayClass20_0__<Setup>b__3
               (UI_MultiplayerMapPopup___c__DisplayClass20_0_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Button_o *__this_00;
  UI_MultiplayerMapPopup_o *__this_01;
  System_String_o *name;
  MethodInfo *method_00;
  
  __this_00 = (__this->fields).button;
  if (__this_00 != (UnityEngine_UI_Button_o *)0x0) {
    __this_01 = (__this->fields).__4__this;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UI_MultiplayerMapPopup_o *)0x0) {
      UI_MultiplayerMapPopup__OnButtonClick(__this_01,name,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MultiplayerMapPopup$$get_ThemePanel
// il2cpp: System_String_o* UI_MultiplayerMapPopup__get_ThemePanel (UI_MultiplayerMapPopup_o* __this, const MethodInfo* method);
// 0x40f6370

System_String_o *
UI_MultiplayerMapPopup__get_ThemePanel(UI_MultiplayerMapPopup_o *__this,MethodInfo *method)

{
  if (DAT_05704824 == '\0') {
    il2cpp_init_method_metadata(&"MultiplayerMapPopup");
    DAT_05704824 = '\x01';
  }
  return "MultiplayerMapPopup";
}


// UI.MultiplayerMapPopup$$get_HorizontalPadding
// il2cpp: int32_t UI_MultiplayerMapPopup__get_HorizontalPadding (UI_MultiplayerMapPopup_o* __this, const MethodInfo* method);
// 0x40f63a0

int32_t UI_MultiplayerMapPopup__get_HorizontalPadding
                  (UI_MultiplayerMapPopup_o *__this,MethodInfo *method)

{
  return 0;
}


// UI.MultiplayerMapPopup$$get_VerticalPadding
// il2cpp: int32_t UI_MultiplayerMapPopup__get_VerticalPadding (UI_MultiplayerMapPopup_o* __this, const MethodInfo* method);
// 0x40f63b0

int32_t UI_MultiplayerMapPopup__get_VerticalPadding
                  (UI_MultiplayerMapPopup_o *__this,MethodInfo *method)

{
  return 0;
}


// UI.MultiplayerMapPopup$$get_VerticalSpacing
// il2cpp: float UI_MultiplayerMapPopup__get_VerticalSpacing (UI_MultiplayerMapPopup_o* __this, const MethodInfo* method);
// 0x40f63c0

float UI_MultiplayerMapPopup__get_VerticalSpacing
                (UI_MultiplayerMapPopup_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.MultiplayerMapPopup$$get_Title
// il2cpp: System_String_o* UI_MultiplayerMapPopup__get_Title (UI_MultiplayerMapPopup_o* __this, const MethodInfo* method);
// 0x40f63d0

System_String_o *
UI_MultiplayerMapPopup__get_Title(UI_MultiplayerMapPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (DAT_05704825 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"MainMenu");
    il2cpp_init_method_metadata(&"Title");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"MultiplayerMapPopup");
    DAT_05704825 = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("MainMenu","MultiplayerMapPopup","Title","","",
                      (MethodInfo *)0x0);
  return pSVar1;
}


// UI.MultiplayerMapPopup$$get_HasPremadeContent
// il2cpp: bool UI_MultiplayerMapPopup__get_HasPremadeContent (UI_MultiplayerMapPopup_o* __this, const MethodInfo* method);
// 0x40f6470

bool_conflict
UI_MultiplayerMapPopup__get_HasPremadeContent(UI_MultiplayerMapPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.MultiplayerMapPopup$$get_Width
// il2cpp: float UI_MultiplayerMapPopup__get_Width (UI_MultiplayerMapPopup_o* __this, const MethodInfo* method);
// 0x40f6480

float UI_MultiplayerMapPopup__get_Width(UI_MultiplayerMapPopup_o *__this,MethodInfo *method)

{
  return 900.0;
}


// UI.MultiplayerMapPopup$$get_Height
// il2cpp: float UI_MultiplayerMapPopup__get_Height (UI_MultiplayerMapPopup_o* __this, const MethodInfo* method);
// 0x40f6490

float UI_MultiplayerMapPopup__get_Height(UI_MultiplayerMapPopup_o *__this,MethodInfo *method)

{
  return 560.0;
}


// UI.MultiplayerMapPopup$$get_UseSound
// il2cpp: bool UI_MultiplayerMapPopup__get_UseSound (UI_MultiplayerMapPopup_o* __this, const MethodInfo* method);
// 0x40f64a0

bool_conflict
UI_MultiplayerMapPopup__get_UseSound(UI_MultiplayerMapPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.MultiplayerMapPopup$$Setup
// il2cpp: void UI_MultiplayerMapPopup__Setup (UI_MultiplayerMapPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x40f64b0

void UI_MultiplayerMapPopup__Setup
               (UI_MultiplayerMapPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  UnityEngine_UI_ColorBlock_o value;
  System_String_o *subCategory;
  int32_t fontSize;
  System_String_o *pSVar1;
  UI_ElementStyle_o *__this_01;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_GameObject_o *__this_02;
  System_Object_array *pSVar3;
  Il2CppObject *pIVar4;
  UnityEngine_Events_UnityAction_o *pUVar5;
  UnityEngine_UI_Selectable_o *__this_03;
  ulong uVar6;
  Il2CppObject *pIVar7;
  UnityEngine_Color_o UVar8;
  UnityEngine_UI_ColorBlock_o UStack_88;
  
  if (DAT_05704826 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Button_GetComponent_Button);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_Image_GetComponent_Image);
    il2cpp_init_method_metadata(&MethodInfo_Button___GetComponentsInChildren_Button);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__20_0);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__20_1);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__20_2);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__3);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass20_0);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"MainMenu");
    il2cpp_init_method_metadata(&"TextColor");
    il2cpp_init_method_metadata(&"DefaultPanel");
    il2cpp_init_method_metadata(&"Text");
    il2cpp_init_method_metadata(&"Back");
    il2cpp_init_method_metadata(&"DefaultButton");
    il2cpp_init_method_metadata(&"MultiplayerMap");
    il2cpp_init_method_metadata(&"MapColor");
    il2cpp_init_method_metadata(&"ServerButton");
    il2cpp_init_method_metadata(&"LAN");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"MultiplayerMapPopup");
    il2cpp_init_method_metadata(&"MainBody");
    DAT_05704826 = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar1 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_01,fontSize,120.0,20.0,pSVar1,(MethodInfo *)0x0);
  pUVar2 = (__this->fields).SinglePanel;
  if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
    pUVar2 = UnityEngine_Transform__Find(pUVar2,"MultiplayerMap",(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      __this_02 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
      if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
        pSVar3 = UnityEngine_GameObject__GetComponentsInChildren<object>(__this_02,MethodInfo_Button___GetComponentsInChildren_Button);
        if (pSVar3 != (System_Object_array *)0x0) {
          if (0 < (int)pSVar3->max_length) {
            uVar6 = 0;
            do {
              pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass20_0);
              System_Object___ctor(pIVar4,(MethodInfo *)0x0);
              if (pIVar4 == (Il2CppObject *)0x0) goto LAB_040f6b3b;
              pIVar4[1].monitor = __this;
              il2cpp_runtime_glue(&pIVar4[1].monitor,__this);
              if ((uint)pSVar3->max_length <= uVar6) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              pIVar7 = pIVar4 + 1;
              pIVar4[1].klass = (Il2CppClass *)pSVar3->m_Items[uVar6];
              il2cpp_runtime_glue(pIVar7);
              if (pIVar4[1].klass == (Il2CppClass *)0x0) goto LAB_040f6b3b;
              __this_00 = *(UnityEngine_Events_UnityEvent_o **)&((pIVar4[1].klass)->_2).element_size
              ;
              pUVar5 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
              UnityEngine_Events_UnityAction___ctor();
              if (__this_00 == (UnityEngine_Events_UnityEvent_o *)0x0) goto LAB_040f6b3b;
              UnityEngine_Events_UnityEvent__AddListener(__this_00,pUVar5,(MethodInfo *)0x0);
              if (pIVar7->klass == (Il2CppClass *)0x0) goto LAB_040f6b3b;
              __this_03 = (UnityEngine_UI_Selectable_o *)
                          UnityEngine_Component__GetComponent<object>
                                    ((UnityEngine_Component_o *)pIVar7->klass,MethodInfo_Button_GetComponent_Button);
              if (__this_01 == (UI_ElementStyle_o *)0x0) goto LAB_040f6b3b;
              pSVar1 = (__this_01->fields).ThemePanel;
              if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                il2cpp_init_class();
              }
              UI_UIManager__GetThemeColorBlock
                        (&UStack_88,pSVar1,"DefaultButton","","DefaultPanel",(MethodInfo *)0x0)
              ;
              if (__this_03 == (UnityEngine_UI_Selectable_o *)0x0) goto LAB_040f6b3b;
              value.fields.m_NormalColor.fields.b = UStack_88.fields.m_NormalColor.fields.b;
              value.fields.m_NormalColor.fields.a = UStack_88.fields.m_NormalColor.fields.a;
              value.fields.m_NormalColor.fields.r = UStack_88.fields.m_NormalColor.fields.r;
              value.fields.m_NormalColor.fields.g = UStack_88.fields.m_NormalColor.fields.g;
              value.fields.m_HighlightedColor.fields.r =
                   UStack_88.fields.m_HighlightedColor.fields.r;
              value.fields.m_HighlightedColor.fields.g =
                   UStack_88.fields.m_HighlightedColor.fields.g;
              value.fields.m_HighlightedColor.fields.b =
                   UStack_88.fields.m_HighlightedColor.fields.b;
              value.fields.m_HighlightedColor.fields.a =
                   UStack_88.fields.m_HighlightedColor.fields.a;
              value.fields.m_PressedColor.fields.r = UStack_88.fields.m_PressedColor.fields.r;
              value.fields.m_PressedColor.fields.g = UStack_88.fields.m_PressedColor.fields.g;
              value.fields.m_PressedColor.fields.b = UStack_88.fields.m_PressedColor.fields.b;
              value.fields.m_PressedColor.fields.a = UStack_88.fields.m_PressedColor.fields.a;
              value.fields.m_SelectedColor.fields.r = UStack_88.fields.m_SelectedColor.fields.r;
              value.fields.m_SelectedColor.fields.g = UStack_88.fields.m_SelectedColor.fields.g;
              value.fields.m_SelectedColor.fields.b = UStack_88.fields.m_SelectedColor.fields.b;
              value.fields.m_SelectedColor.fields.a = UStack_88.fields.m_SelectedColor.fields.a;
              value.fields.m_DisabledColor.fields.r = UStack_88.fields.m_DisabledColor.fields.r;
              value.fields.m_DisabledColor.fields.g = UStack_88.fields.m_DisabledColor.fields.g;
              value.fields.m_DisabledColor.fields.b = UStack_88.fields.m_DisabledColor.fields.b;
              value.fields.m_DisabledColor.fields.a = UStack_88.fields.m_DisabledColor.fields.a;
              value.fields.m_ColorMultiplier = UStack_88.fields.m_ColorMultiplier;
              value.fields.m_FadeDuration = UStack_88.fields.m_FadeDuration;
              UnityEngine_UI_Selectable__set_colors(__this_03,value,(MethodInfo *)0x0);
              if (pIVar7->klass == (Il2CppClass *)0x0) goto LAB_040f6b3b;
              pUVar2 = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)pIVar7->klass,(MethodInfo *)0x0);
              if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto LAB_040f6b3b;
              pUVar2 = UnityEngine_Transform__Find(pUVar2,"Text",(MethodInfo *)0x0);
              if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto LAB_040f6b3b;
              pIVar4 = UnityEngine_Component__GetComponent<object>
                                 ((UnityEngine_Component_o *)pUVar2,MethodInfo_Text_GetComponent_Text);
              UVar8 = UI_UIManager__GetThemeColor
                                ((__this_01->fields).ThemePanel,"DefaultButton","TextColor",
                                 "DefaultPanel",(MethodInfo *)0x0);
              if (pIVar4 == (Il2CppObject *)0x0) goto LAB_040f6b3b;
              (*pIVar4->klass->vtable[0x17].methodPtr)(UVar8.fields.r,UVar8.fields.b,pIVar4);
              uVar6 = uVar6 + 1;
            } while ((long)uVar6 < (long)(int)pSVar3->max_length);
          }
          subCategory = "MultiplayerMapPopup";
          pSVar1 = "MainMenu";
          pUVar2 = (__this->fields).BottomBar;
          pUVar5 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
          UnityEngine_Events_UnityAction___ctor();
          UI_ElementFactory__CreateTextButton
                    (pUVar2,__this_01,"LAN",0.0,pUVar5,(MethodInfo *)0x0);
          pUVar2 = (__this->fields).BottomBar;
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar1 = UI_UIManager__GetLocale
                             (pSVar1,subCategory,"ServerButton","","",
                              (MethodInfo *)0x0);
          pUVar5 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
          UnityEngine_Events_UnityAction___ctor();
          UI_ElementFactory__CreateTextButton(pUVar2,__this_01,pSVar1,0.0,pUVar5,(MethodInfo *)0x0);
          pUVar2 = (__this->fields).BottomBar;
          pSVar1 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
          pUVar5 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
          UnityEngine_Events_UnityAction___ctor();
          UI_ElementFactory__CreateTextButton(pUVar2,__this_01,pSVar1,0.0,pUVar5,(MethodInfo *)0x0);
          pIVar4 = UnityEngine_GameObject__GetComponent<object>(__this_02,MethodInfo_Image_GetComponent_Image);
          if (__this_01 != (UI_ElementStyle_o *)0x0) {
            UVar8 = UI_UIManager__GetThemeColor
                              ((__this_01->fields).ThemePanel,"MainBody","MapColor","DefaultPanel"
                               ,(MethodInfo *)0x0);
            if (pIVar4 != (Il2CppObject *)0x0) {
              (*pIVar4->klass->vtable[0x17].methodPtr)
                        (UVar8.fields.r,UVar8.fields.b,pIVar4,pIVar4->klass->vtable[0x17].method);
              return;
            }
          }
        }
      }
    }
  }
LAB_040f6b3b:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MultiplayerMapPopup$$SetupPopups
// il2cpp: void UI_MultiplayerMapPopup__SetupPopups (UI_MultiplayerMapPopup_o* __this, const MethodInfo* method);
// 0x40f6b60

void UI_MultiplayerMapPopup__SetupPopups(UI_MultiplayerMapPopup_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_BasePopup__o *pSVar3;
  UI_BasePopup_o *pUVar4;
  UI_BasePopup_array *pUVar5;
  long lVar6;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_Component_o *pUVar8;
  UI_MultiplayerSettingsPopup_o *pUVar9;
  UI_MultiplayerLanPopup_o *pUVar10;
  
  if (DAT_05704827 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_MultiplayerLanPopup_GetComponent_MultiplayerLanP);
    il2cpp_init_method_metadata(&MethodInfo_MultiplayerSettingsPopup_GetComponent_Multiplaye);
    il2cpp_init_method_metadata(&MethodInfo_MultiplayerLanPopup_CreateHeadedPanel_Multiplaye);
    il2cpp_init_method_metadata(&MethodInfo_MultiplayerSettingsPopup_CreateHeadedPanel_Multi);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    DAT_05704827 = '\x01';
  }
  UI_BasePanel__SetupPopups((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
  pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  pUVar8 = (UnityEngine_Component_o *)
           UI_ElementFactory__CreateHeadedPanel<object>(pUVar7,0,MethodInfo_MultiplayerSettingsPopup_CreateHeadedPanel_Multi);
  if (pUVar8 != (UnityEngine_Component_o *)0x0) {
    pUVar9 = (UI_MultiplayerSettingsPopup_o *)
             UnityEngine_Component__GetComponent<object>(pUVar8,MethodInfo_MultiplayerSettingsPopup_GetComponent_Multiplaye);
    (__this->fields)._multiplayerSettingsPopup = pUVar9;
    il2cpp_runtime_glue(&(__this->fields)._multiplayerSettingsPopup);
    pUVar7 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar8 = (UnityEngine_Component_o *)
             UI_ElementFactory__CreateHeadedPanel<object>(pUVar7,0,MethodInfo_MultiplayerLanPopup_CreateHeadedPanel_Multiplaye);
    if (pUVar8 != (UnityEngine_Component_o *)0x0) {
      pUVar10 = (UI_MultiplayerLanPopup_o *)
                UnityEngine_Component__GetComponent<object>(pUVar8,MethodInfo_MultiplayerLanPopup_GetComponent_MultiplayerLanP);
      (__this->fields)._lanPopup = pUVar10;
      il2cpp_runtime_glue(&(__this->fields)._lanPopup,pUVar10);
      lVar6 = MethodInfo_Void_Add;
      pSVar3 = (__this->fields)._popups;
      if (pSVar3 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
        pUVar4 = (UI_BasePopup_o *)(__this->fields)._multiplayerSettingsPopup;
        piVar1 = &(pSVar3->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar5 = (pSVar3->fields)._items;
        if (pUVar5 != (UI_BasePopup_array *)0x0) {
          uVar2 = (pSVar3->fields)._size;
          if (uVar2 < (uint)pUVar5->max_length) {
            (pSVar3->fields)._size = uVar2 + 1;
            pUVar5->m_Items[(int)uVar2] = pUVar4;
            il2cpp_runtime_glue(pUVar5->m_Items + (int)uVar2);
            pSVar3 = (__this->fields)._popups;
            lVar6 = MethodInfo_Void_Add;
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar4,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
            pSVar3 = (__this->fields)._popups;
            lVar6 = MethodInfo_Void_Add;
          }
          MethodInfo_Void_Add = lVar6;
          if (pSVar3 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
            pUVar4 = (UI_BasePopup_o *)(__this->fields)._lanPopup;
            piVar1 = &(pSVar3->fields)._version;
            *piVar1 = *piVar1 + 1;
            pUVar5 = (pSVar3->fields)._items;
            if (pUVar5 != (UI_BasePopup_array *)0x0) {
              uVar2 = (pSVar3->fields)._size;
              if (uVar2 < (uint)pUVar5->max_length) {
                (pSVar3->fields)._size = uVar2 + 1;
                pUVar5->m_Items[(int)uVar2] = pUVar4;
                il2cpp_runtime_glue(pUVar5->m_Items + (int)uVar2);
                return;
              }
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar4,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70))
              ;
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MultiplayerMapPopup$$OnButtonClick
// il2cpp: void UI_MultiplayerMapPopup__OnButtonClick (UI_MultiplayerMapPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x40f6d40

void UI_MultiplayerMapPopup__OnButtonClick
               (UI_MultiplayerMapPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  Settings_MultiplayerSettings_o *__this_00;
  UI_MultiplayerSettingsPopup_o *pUVar1;
  uint32_t uVar2;
  bool_conflict bVar3;
  MethodInfo *extraout_RDX;
  int32_t region;
  
  if (DAT_05704828 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&"Server");
    il2cpp_init_method_metadata(&"ButtonEU");
    il2cpp_init_method_metadata(&"Back");
    il2cpp_init_method_metadata(&"Offline");
    il2cpp_init_method_metadata(&"ButtonUS");
    il2cpp_init_method_metadata(&"ButtonASIA");
    il2cpp_init_method_metadata(&"LAN");
    il2cpp_init_method_metadata(&"ButtonCN");
    il2cpp_init_method_metadata(&"ButtonSA");
    DAT_05704828 = '\x01';
    method = extraout_RDX;
  }
  (*(__this->klass->vtable)._26_HideAllPopups.methodPtr)
            (__this,(__this->klass->vtable)._26_HideAllPopups.method,method);
  __this_00 = (Settings_MultiplayerSettings_o *)**(undefined8 **)(TypeInfo_SettingsManager + 0xb8);
  uVar2 = <PrivateImplementationDetails>__ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0xa01ce50e) {
    if (uVar2 < 0x8686f3a4) {
      if (uVar2 == 0x8686f3a3) {
        bVar3 = System_String__op_Equality(name,"ButtonASIA",(MethodInfo *)0x0);
        if ((char)bVar3 == '\0') {
          return;
        }
        if (__this_00 != (Settings_MultiplayerSettings_o *)0x0) {
          region = 3;
          goto LAB_040f7039;
        }
        goto LAB_040f704b;
      }
      if (uVar2 != 0x6d7302f2) {
        return;
      }
      bVar3 = System_String__op_Equality(name,"Server",(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        return;
      }
      pUVar1 = (__this->fields)._multiplayerSettingsPopup;
    }
    else {
      if (uVar2 != 0x993a9730) {
        if (uVar2 != 0xa01ce50d) {
          return;
        }
        bVar3 = System_String__op_Equality(name,"ButtonUS",(MethodInfo *)0x0);
        if ((char)bVar3 == '\0') {
          return;
        }
        if (__this_00 != (Settings_MultiplayerSettings_o *)0x0) {
          region = 1;
          goto LAB_040f7039;
        }
        goto LAB_040f704b;
      }
      bVar3 = System_String__op_Equality(name,"LAN",(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        return;
      }
      pUVar1 = (UI_MultiplayerSettingsPopup_o *)(__this->fields)._lanPopup;
    }
    if (pUVar1 != (UI_MultiplayerSettingsPopup_o *)0x0) {
      (*(pUVar1->klass->vtable)._21_Show.methodPtr)(pUVar1,(pUVar1->klass->vtable)._21_Show.method);
      return;
    }
  }
  else {
    if (0xc2170a65 < uVar2) {
      if (uVar2 == 0xda444fcb) {
        bVar3 = System_String__op_Equality(name,"ButtonEU",(MethodInfo *)0x0);
        if ((char)bVar3 != '\0') {
          if (__this_00 != (Settings_MultiplayerSettings_o *)0x0) {
            region = 0;
            goto LAB_040f7039;
          }
          goto LAB_040f704b;
        }
      }
      else if (uVar2 == 0xc47c37c8) {
        bVar3 = System_String__op_Equality(name,"Offline",(MethodInfo *)0x0);
        if ((char)bVar3 != '\0') {
          if (__this_00 != (Settings_MultiplayerSettings_o *)0x0) {
            Settings_MultiplayerSettings__ConnectOffline(__this_00,(MethodInfo *)0x0);
            return;
          }
          goto LAB_040f704b;
        }
      }
      else if ((uVar2 == 0xc2954bc2) &&
              (bVar3 = System_String__op_Equality(name,"Back",(MethodInfo *)0x0),
              (char)bVar3 != '\0')) {
        (*(__this->klass->vtable)._22_Hide.methodPtr)
                  (__this,(__this->klass->vtable)._22_Hide.method);
        return;
      }
      return;
    }
    if (uVar2 == 0xa33f7c08) {
      bVar3 = System_String__op_Equality(name,"ButtonCN",(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        return;
      }
      if (__this_00 != (Settings_MultiplayerSettings_o *)0x0) {
        region = 4;
LAB_040f7039:
        Settings_MultiplayerSettings__ConnectServer(__this_00,region,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      if (uVar2 != 0xc2170a65) {
        return;
      }
      bVar3 = System_String__op_Equality(name,"ButtonSA",(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        return;
      }
      if (__this_00 != (Settings_MultiplayerSettings_o *)0x0) {
        region = 2;
        goto LAB_040f7039;
      }
    }
  }
LAB_040f704b:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MultiplayerMapPopup$$.ctor
// il2cpp: void UI_MultiplayerMapPopup___ctor (UI_MultiplayerMapPopup_o* __this, const MethodInfo* method);
// 0x40f7050

void UI_MultiplayerMapPopup___ctor(UI_MultiplayerMapPopup_o *__this,MethodInfo *method)

{
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MultiplayerMapPopup$$<Setup>b__20_0
// il2cpp: void UI_MultiplayerMapPopup___Setup_b__20_0 (UI_MultiplayerMapPopup_o* __this, const MethodInfo* method);
// 0x40f7060

void UI_MultiplayerMapPopup__<Setup>b__20_0(UI_MultiplayerMapPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_05704829 == '\0') {
    il2cpp_init_method_metadata(&"LAN");
    DAT_05704829 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_MultiplayerMapPopup__OnButtonClick(__this,"LAN",in_RDX);
  return;
}


// UI.MultiplayerMapPopup$$<Setup>b__20_1
// il2cpp: void UI_MultiplayerMapPopup___Setup_b__20_1 (UI_MultiplayerMapPopup_o* __this, const MethodInfo* method);
// 0x40f70a0

void UI_MultiplayerMapPopup__<Setup>b__20_1(UI_MultiplayerMapPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_0570482a == '\0') {
    il2cpp_init_method_metadata(&"Server");
    DAT_0570482a = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_MultiplayerMapPopup__OnButtonClick(__this,"Server",in_RDX);
  return;
}


// UI.MultiplayerMapPopup$$<Setup>b__20_2
// il2cpp: void UI_MultiplayerMapPopup___Setup_b__20_2 (UI_MultiplayerMapPopup_o* __this, const MethodInfo* method);
// 0x40f70e0

void UI_MultiplayerMapPopup__<Setup>b__20_2(UI_MultiplayerMapPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_0570482b == '\0') {
    il2cpp_init_method_metadata(&"Back");
    DAT_0570482b = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_MultiplayerMapPopup__OnButtonClick(__this,"Back",in_RDX);
  return;
}


