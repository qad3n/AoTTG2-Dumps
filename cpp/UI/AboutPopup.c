// Type: UI.AboutPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/AboutPopup.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/MainMenu/AboutPopup.cs  [CHANGED since prior version]
// --------------------------------

// UI.AboutPopup.<>c__DisplayClass15_0$$.ctor
// il2cpp: void UI_AboutPopup___c__DisplayClass15_0___ctor (UI_AboutPopup___c__DisplayClass15_0_o* __this, const MethodInfo* method);
// 0x40de650

void UI_AboutPopup_<>c__DisplayClass15_0___ctor
               (UI_AboutPopup___c__DisplayClass15_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.AboutPopup.<>c__DisplayClass15_0$$<SetupTopButtons>b__0
// il2cpp: void UI_AboutPopup___c__DisplayClass15_0___SetupTopButtons_b__0 (UI_AboutPopup___c__DisplayClass15_0_o* __this, const MethodInfo* method);
// 0x40de830

void UI_AboutPopup_<>c__DisplayClass15_0__<SetupTopButtons>b__0
               (UI_AboutPopup___c__DisplayClass15_0_o *__this,MethodInfo *method)

{
  UI_AboutPopup_o *pUVar1;
  Il2CppMethodPointer vtable_dispatch;
  
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 != (UI_AboutPopup_o *)0x0) {
    vtable_dispatch = (pUVar1->klass->vtable)._28_SetCategoryPanel.methodPtr;
    (*vtable_dispatch)
              (pUVar1,(__this->fields).buttonName,
               (pUVar1->klass->vtable)._28_SetCategoryPanel.method,vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.AboutPopup.<>c__DisplayClass17_0$$.ctor
// il2cpp: void UI_AboutPopup___c__DisplayClass17_0___ctor (UI_AboutPopup___c__DisplayClass17_0_o* __this, const MethodInfo* method);
// 0x40de7a0

void UI_AboutPopup_<>c__DisplayClass17_0___ctor
               (UI_AboutPopup___c__DisplayClass17_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.AboutPopup.<>c__DisplayClass17_0$$<SetupBottomButtons>b__0
// il2cpp: void UI_AboutPopup___c__DisplayClass17_0___SetupBottomButtons_b__0 (UI_AboutPopup___c__DisplayClass17_0_o* __this, const MethodInfo* method);
// 0x40de860

void UI_AboutPopup_<>c__DisplayClass17_0__<SetupBottomButtons>b__0
               (UI_AboutPopup___c__DisplayClass17_0_o *__this,MethodInfo *method)

{
  UI_AboutPopup_o *pUVar1;
  System_String_o *a;
  bool_conflict bVar2;
  
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 == (UI_AboutPopup_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  a = (__this->fields).buttonName;
  if (DAT_05704791 == '\0') {
    il2cpp_init_method_metadata(&"Back");
    DAT_05704791 = '\x01';
  }
  bVar2 = System_String__op_Equality(a,"Back",(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    (*(pUVar1->klass->vtable)._22_Hide.methodPtr)(pUVar1,(pUVar1->klass->vtable)._22_Hide.method);
    return;
  }
  return;
}


// UI.AboutPopup$$get_Title
// il2cpp: System_String_o* UI_AboutPopup__get_Title (UI_AboutPopup_o* __this, const MethodInfo* method);
// 0x40de010

System_String_o * UI_AboutPopup__get_Title(UI_AboutPopup_o *__this,MethodInfo *method)

{
  return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
}


// UI.AboutPopup$$get_Width
// il2cpp: float UI_AboutPopup__get_Width (UI_AboutPopup_o* __this, const MethodInfo* method);
// 0x40de030

float UI_AboutPopup__get_Width(UI_AboutPopup_o *__this,MethodInfo *method)

{
  return 800.0;
}


// UI.AboutPopup$$get_Height
// il2cpp: float UI_AboutPopup__get_Height (UI_AboutPopup_o* __this, const MethodInfo* method);
// 0x40de040

float UI_AboutPopup__get_Height(UI_AboutPopup_o *__this,MethodInfo *method)

{
  return 600.0;
}


// UI.AboutPopup$$get_CategoryPanel
// il2cpp: bool UI_AboutPopup__get_CategoryPanel (UI_AboutPopup_o* __this, const MethodInfo* method);
// 0x40de050

bool_conflict UI_AboutPopup__get_CategoryPanel(UI_AboutPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.AboutPopup$$get_CategoryButtons
// il2cpp: bool UI_AboutPopup__get_CategoryButtons (UI_AboutPopup_o* __this, const MethodInfo* method);
// 0x40de060

bool_conflict UI_AboutPopup__get_CategoryButtons(UI_AboutPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.AboutPopup$$get_DefaultCategoryPanel
// il2cpp: System_String_o* UI_AboutPopup__get_DefaultCategoryPanel (UI_AboutPopup_o* __this, const MethodInfo* method);
// 0x40de070

System_String_o *
UI_AboutPopup__get_DefaultCategoryPanel(UI_AboutPopup_o *__this,MethodInfo *method)

{
  if (DAT_0570478d == '\0') {
    il2cpp_init_method_metadata(&"Help");
    DAT_0570478d = '\x01';
  }
  return "Help";
}


// UI.AboutPopup$$get_UseSound
// il2cpp: bool UI_AboutPopup__get_UseSound (UI_AboutPopup_o* __this, const MethodInfo* method);
// 0x40de0a0

bool_conflict UI_AboutPopup__get_UseSound(UI_AboutPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.AboutPopup$$Setup
// il2cpp: void UI_AboutPopup__Setup (UI_AboutPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x40de0b0

void UI_AboutPopup__Setup(UI_AboutPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *parent_00;
  Il2CppClass *item;
  int32_t fontSize;
  System_String_o *pSVar1;
  UI_ElementStyle_o *__this_00;
  long lVar2;
  UnityEngine_Events_UnityAction_o *onClick;
  Il2CppObject *__this_01;
  ulong uVar3;
  
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  if (DAT_05704790 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&MethodInfo_Void__SetupBottomButtons_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass17_0);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"Back");
    DAT_05704790 = '\x01';
  }
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar1 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,120.0,20.0,pSVar1,(MethodInfo *)0x0);
  lVar2 = il2cpp_glue_02274930(TypeInfo_string,1);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) == 0) {
LAB_040de2ff:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    *(undefined8 *)(lVar2 + 0x20) = "Back";
    il2cpp_runtime_glue(lVar2 + 0x20);
    if (0 < *(int *)(lVar2 + 0x18)) {
      uVar3 = 0;
      do {
        __this_01 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass17_0);
        System_Object___ctor(__this_01,(MethodInfo *)0x0);
        if (__this_01 == (Il2CppObject *)0x0) goto LAB_040de2fa;
        __this_01[1].monitor = __this;
        il2cpp_runtime_glue(&__this_01[1].monitor,__this);
        if (*(uint *)(lVar2 + 0x18) <= uVar3) goto LAB_040de2ff;
        __this_01[1].klass = *(Il2CppClass **)(lVar2 + 0x20 + uVar3 * 8);
        il2cpp_runtime_glue(__this_01 + 1);
        parent_00 = (__this->fields).BottomBar;
        item = __this_01[1].klass;
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar1 = UI_UIManager__GetLocaleCommon((System_String_o *)item,(MethodInfo *)0x0);
        onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
        UnityEngine_Events_UnityAction___ctor();
        UI_ElementFactory__CreateTextButton
                  (parent_00,__this_00,pSVar1,0.0,onClick,(MethodInfo *)0x0);
        uVar3 = uVar3 + 1;
      } while ((long)uVar3 < (long)*(int *)(lVar2 + 0x18));
    }
    return;
  }
LAB_040de2fa:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.AboutPopup$$SetupTopButtons
// il2cpp: void UI_AboutPopup__SetupTopButtons (UI_AboutPopup_o* __this, const MethodInfo* method);
// 0x40de310

void UI_AboutPopup__SetupTopButtons(UI_AboutPopup_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *parent;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool_conflict bVar1;
  System_String_o *themePanel;
  UI_ElementStyle_o *__this_01;
  long lVar2;
  Il2CppObject *pIVar3;
  Il2CppClass *pIVar4;
  UnityEngine_Events_UnityAction_o *onClick;
  UnityEngine_GameObject_o *__this_02;
  ulong uVar5;
  
  if (DAT_0570478e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_Button_GetComponent_Button);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&MethodInfo_Void__SetupTopButtons_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass15_0);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"MainMenu");
    il2cpp_init_method_metadata(&"Changelog");
    il2cpp_init_method_metadata(&"AboutPopup");
    il2cpp_init_method_metadata(&"Help");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"Version");
    DAT_0570478e = '\x01';
  }
  themePanel = (System_String_o *)
               (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                         (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_01,0x1c,120.0,20.0,themePanel,(MethodInfo *)0x0);
  lVar2 = il2cpp_glue_02274930(TypeInfo_string,3);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = "Help";
      il2cpp_runtime_glue(lVar2 + 0x20);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = "Changelog";
        il2cpp_runtime_glue(lVar2 + 0x28);
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(System_String_o **)(lVar2 + 0x30) = "Version";
          il2cpp_runtime_glue(lVar2 + 0x30);
          if (0 < *(int *)(lVar2 + 0x18)) {
            uVar5 = 0;
            do {
              pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass15_0);
              System_Object___ctor(pIVar3,(MethodInfo *)0x0);
              if (pIVar3 == (Il2CppObject *)0x0) goto LAB_040de63d;
              pIVar3[1].monitor = __this;
              il2cpp_runtime_glue(&pIVar3[1].monitor,__this);
              if (*(uint *)(lVar2 + 0x18) <= uVar5) goto LAB_040de642;
              pIVar3[1].klass = *(Il2CppClass **)(lVar2 + 0x20 + uVar5 * 8);
              il2cpp_runtime_glue(pIVar3 + 1);
              pIVar4 = pIVar3[1].klass;
              bVar1 = System_String__op_Inequality
                                ((System_String_o *)pIVar4,"Version",(MethodInfo *)0x0);
              if ((char)bVar1 != '\0') {
                pIVar4 = pIVar3[1].klass;
                if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                pIVar4 = (Il2CppClass *)
                         UI_UIManager__GetLocale
                                   ("MainMenu","AboutPopup",(System_String_o *)pIVar4,""
                                    ,"",(MethodInfo *)0x0);
              }
              parent = (__this->fields).TopBar;
              onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
              UnityEngine_Events_UnityAction___ctor();
              __this_02 = UI_ElementFactory__CreateCategoryButton
                                    (parent,__this_01,(System_String_o *)pIVar4,onClick,
                                     (MethodInfo *)0x0);
              if (__this_02 == (UnityEngine_GameObject_o *)0x0) goto LAB_040de63d;
              __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                          (__this->fields)._topButtons;
              pIVar4 = pIVar3[1].klass;
              pIVar3 = UnityEngine_GameObject__GetComponent<object>(__this_02,MethodInfo_Button_GetComponent_Button);
              if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
              goto LAB_040de63d;
              System_Collections_Generic_Dictionary<object__object>__Add
                        (__this_00,(Il2CppObject *)pIVar4,pIVar3,MethodInfo_Void_Add);
              uVar5 = uVar5 + 1;
            } while ((long)uVar5 < (long)*(int *)(lVar2 + 0x18));
          }
          UI_HeadedPanel__SetupTopButtons((UI_HeadedPanel_o *)__this,(MethodInfo *)0x0);
          return;
        }
      }
    }
LAB_040de642:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_040de63d:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.AboutPopup$$RegisterCategoryPanels
// il2cpp: void UI_AboutPopup__RegisterCategoryPanels (UI_AboutPopup_o* __this, const MethodInfo* method);
// 0x40de660

void UI_AboutPopup__RegisterCategoryPanels(UI_AboutPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_RuntimeTypeHandle_o handle;
  System_Type_o *pSVar2;
  
  if (DAT_0570478f == '\0') {
    il2cpp_init_method_metadata(&TypeRef_AboutChangelogPanel);
    il2cpp_init_method_metadata(&TypeRef_AboutHelpPanel);
    il2cpp_init_method_metadata(&TypeRef_AboutVersionPanel);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&"Changelog");
    il2cpp_init_method_metadata(&"Help");
    il2cpp_init_method_metadata(&"Version");
    DAT_0570478f = '\x01';
  }
  handle.fields.value = TypeRef_AboutHelpPanel.fields.value;
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           (__this->fields)._categoryPanelTypes;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object__object>__Add
              (pSVar1,"Help",(Il2CppObject *)pSVar2,MethodInfo_Void_Add);
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
             (__this->fields)._categoryPanelTypes;
    pSVar2 = System_Type__GetTypeFromHandle(TypeRef_AboutChangelogPanel,(MethodInfo *)0x0);
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary<object__object>__Add
                (pSVar1,"Changelog",(Il2CppObject *)pSVar2,MethodInfo_Void_Add);
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
               (__this->fields)._categoryPanelTypes;
      pSVar2 = System_Type__GetTypeFromHandle(TypeRef_AboutVersionPanel,(MethodInfo *)0x0);
      if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary<object__object>__Add
                  (pSVar1,"Version",(Il2CppObject *)pSVar2,MethodInfo_Void_Add);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.AboutPopup$$SetupBottomButtons
// il2cpp: void UI_AboutPopup__SetupBottomButtons (UI_AboutPopup_o* __this, const MethodInfo* method);
// 0x40de0d0

void UI_AboutPopup__SetupBottomButtons(UI_AboutPopup_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *parent;
  Il2CppClass *item;
  int32_t fontSize;
  System_String_o *pSVar1;
  UI_ElementStyle_o *__this_00;
  long lVar2;
  UnityEngine_Events_UnityAction_o *onClick;
  Il2CppObject *__this_01;
  ulong uVar3;
  
  if (DAT_05704790 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&MethodInfo_Void__SetupBottomButtons_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass17_0);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"Back");
    DAT_05704790 = '\x01';
  }
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar1 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,120.0,20.0,pSVar1,(MethodInfo *)0x0);
  lVar2 = il2cpp_glue_02274930(TypeInfo_string,1);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) == 0) {
LAB_040de2ff:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    *(undefined8 *)(lVar2 + 0x20) = "Back";
    il2cpp_runtime_glue(lVar2 + 0x20);
    if (0 < *(int *)(lVar2 + 0x18)) {
      uVar3 = 0;
      do {
        __this_01 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass17_0);
        System_Object___ctor(__this_01,(MethodInfo *)0x0);
        if (__this_01 == (Il2CppObject *)0x0) goto LAB_040de2fa;
        __this_01[1].monitor = __this;
        il2cpp_runtime_glue(&__this_01[1].monitor,__this);
        if (*(uint *)(lVar2 + 0x18) <= uVar3) goto LAB_040de2ff;
        __this_01[1].klass = *(Il2CppClass **)(lVar2 + 0x20 + uVar3 * 8);
        il2cpp_runtime_glue(__this_01 + 1);
        parent = (__this->fields).BottomBar;
        item = __this_01[1].klass;
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar1 = UI_UIManager__GetLocaleCommon((System_String_o *)item,(MethodInfo *)0x0);
        onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
        UnityEngine_Events_UnityAction___ctor();
        UI_ElementFactory__CreateTextButton(parent,__this_00,pSVar1,0.0,onClick,(MethodInfo *)0x0);
        uVar3 = uVar3 + 1;
      } while ((long)uVar3 < (long)*(int *)(lVar2 + 0x18));
    }
    return;
  }
LAB_040de2fa:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.AboutPopup$$OnBottomBarButtonClick
// il2cpp: void UI_AboutPopup__OnBottomBarButtonClick (UI_AboutPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x40de7b0

void UI_AboutPopup__OnBottomBarButtonClick
               (UI_AboutPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (DAT_05704791 == '\0') {
    il2cpp_init_method_metadata(&"Back");
    DAT_05704791 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Back",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
    return;
  }
  return;
}


// UI.AboutPopup$$.ctor
// il2cpp: void UI_AboutPopup___ctor (UI_AboutPopup_o* __this, const MethodInfo* method);
// 0x40de820

void UI_AboutPopup___ctor(UI_AboutPopup_o *__this,MethodInfo *method)

{
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


