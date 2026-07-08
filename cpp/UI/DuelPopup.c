// Type: UI.DuelPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/DuelPopup.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/MainMenu/DuelPopup.cs  [CHANGED since prior version]
// --------------------------------

// UI.DuelPopup.<>c__DisplayClass15_0$$.ctor
// il2cpp: void UI_DuelPopup___c__DisplayClass15_0___ctor (UI_DuelPopup___c__DisplayClass15_0_o* __this, const MethodInfo* method);
// 0x40e6e00

void UI_DuelPopup_<>c__DisplayClass15_0___ctor
               (UI_DuelPopup___c__DisplayClass15_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.DuelPopup.<>c__DisplayClass15_0$$<SetupTopButtons>b__0
// il2cpp: void UI_DuelPopup___c__DisplayClass15_0___SetupTopButtons_b__0 (UI_DuelPopup___c__DisplayClass15_0_o* __this, const MethodInfo* method);
// 0x40e7080

void UI_DuelPopup_<>c__DisplayClass15_0__<SetupTopButtons>b__0
               (UI_DuelPopup___c__DisplayClass15_0_o *__this,MethodInfo *method)

{
  UI_DuelPopup_o *pUVar1;
  Il2CppMethodPointer vtable_dispatch;
  
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 != (UI_DuelPopup_o *)0x0) {
    vtable_dispatch = (pUVar1->klass->vtable)._28_SetCategoryPanel.methodPtr;
    (*vtable_dispatch)
              (pUVar1,(__this->fields).buttonName,
               (pUVar1->klass->vtable)._28_SetCategoryPanel.method,vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.DuelPopup$$get_Title
// il2cpp: System_String_o* UI_DuelPopup__get_Title (UI_DuelPopup_o* __this, const MethodInfo* method);
// 0x40e6970

System_String_o * UI_DuelPopup__get_Title(UI_DuelPopup_o *__this,MethodInfo *method)

{
  return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
}


// UI.DuelPopup$$get_Width
// il2cpp: float UI_DuelPopup__get_Width (UI_DuelPopup_o* __this, const MethodInfo* method);
// 0x40e6990

float UI_DuelPopup__get_Width(UI_DuelPopup_o *__this,MethodInfo *method)

{
  return 1000.0;
}


// UI.DuelPopup$$get_Height
// il2cpp: float UI_DuelPopup__get_Height (UI_DuelPopup_o* __this, const MethodInfo* method);
// 0x40e69a0

float UI_DuelPopup__get_Height(UI_DuelPopup_o *__this,MethodInfo *method)

{
  return 800.0;
}


// UI.DuelPopup$$get_CategoryPanel
// il2cpp: bool UI_DuelPopup__get_CategoryPanel (UI_DuelPopup_o* __this, const MethodInfo* method);
// 0x40e69b0

bool_conflict UI_DuelPopup__get_CategoryPanel(UI_DuelPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.DuelPopup$$get_CategoryButtons
// il2cpp: bool UI_DuelPopup__get_CategoryButtons (UI_DuelPopup_o* __this, const MethodInfo* method);
// 0x40e69c0

bool_conflict UI_DuelPopup__get_CategoryButtons(UI_DuelPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.DuelPopup$$get_DefaultCategoryPanel
// il2cpp: System_String_o* UI_DuelPopup__get_DefaultCategoryPanel (UI_DuelPopup_o* __this, const MethodInfo* method);
// 0x40e69d0

System_String_o * UI_DuelPopup__get_DefaultCategoryPanel(UI_DuelPopup_o *__this,MethodInfo *method)

{
  if (DAT_057047c3 == '\0') {
    il2cpp_init_method_metadata(&"Play");
    DAT_057047c3 = '\x01';
  }
  return "Play";
}


// UI.DuelPopup$$Setup
// il2cpp: void UI_DuelPopup__Setup (UI_DuelPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x40e6a00

void UI_DuelPopup__Setup(UI_DuelPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *parent_00;
  int32_t fontSize;
  System_String_o *pSVar1;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Events_UnityAction_o *onClick;
  
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  if (DAT_057047c6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void__SetupBottomButtons_b__18_0);
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"Back");
    DAT_057047c6 = '\x01';
  }
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar1 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,120.0,20.0,pSVar1,(MethodInfo *)0x0);
  parent_00 = (__this->fields).BottomBar;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
  onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(parent_00,__this_00,pSVar1,0.0,onClick,(MethodInfo *)0x0);
  return;
}


// UI.DuelPopup$$Show
// il2cpp: void UI_DuelPopup__Show (UI_DuelPopup_o* __this, const MethodInfo* method);
// 0x40e6b50

void UI_DuelPopup__Show(UI_DuelPopup_o *__this,MethodInfo *method)

{
  UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.DuelPopup$$SetupTopButtons
// il2cpp: void UI_DuelPopup__SetupTopButtons (UI_DuelPopup_o* __this, const MethodInfo* method);
// 0x40e6b60

void UI_DuelPopup__SetupTopButtons(UI_DuelPopup_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *parent;
  Il2CppClass *pIVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_String_o *pSVar2;
  UI_ElementStyle_o *__this_01;
  long lVar3;
  Il2CppObject *pIVar4;
  UnityEngine_Events_UnityAction_o *onClick;
  UnityEngine_GameObject_o *__this_02;
  ulong uVar5;
  
  if (DAT_057047c4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_Button_GetComponent_Button);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&MethodInfo_Void__SetupTopButtons_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass15_0);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"Spectate");
    il2cpp_init_method_metadata(&"Play");
    DAT_057047c4 = '\x01';
  }
  pSVar2 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_01,0x1c,120.0,20.0,pSVar2,(MethodInfo *)0x0);
  lVar3 = il2cpp_glue_02274930(TypeInfo_string,2);
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) != 0) {
      *(undefined8 *)(lVar3 + 0x20) = "Play";
      il2cpp_runtime_glue(lVar3 + 0x20);
      if (1 < *(uint *)(lVar3 + 0x18)) {
        *(undefined8 *)(lVar3 + 0x28) = "Spectate";
        il2cpp_runtime_glue(lVar3 + 0x28);
        if (0 < *(int *)(lVar3 + 0x18)) {
          uVar5 = 0;
          do {
            pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass15_0);
            System_Object___ctor(pIVar4,(MethodInfo *)0x0);
            if (pIVar4 == (Il2CppObject *)0x0) goto LAB_040e6df3;
            pIVar4[1].monitor = __this;
            il2cpp_runtime_glue(&pIVar4[1].monitor,__this);
            if (*(uint *)(lVar3 + 0x18) <= uVar5) goto LAB_040e6df8;
            pIVar4[1].klass = *(Il2CppClass **)(lVar3 + 0x20 + uVar5 * 8);
            il2cpp_runtime_glue(pIVar4 + 1);
            parent = (__this->fields).TopBar;
            pIVar1 = pIVar4[1].klass;
            if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar2 = UI_UIManager__GetLocaleCommon((System_String_o *)pIVar1,(MethodInfo *)0x0);
            onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
            UnityEngine_Events_UnityAction___ctor();
            __this_02 = UI_ElementFactory__CreateCategoryButton
                                  (parent,__this_01,pSVar2,onClick,(MethodInfo *)0x0);
            if (__this_02 == (UnityEngine_GameObject_o *)0x0) goto LAB_040e6df3;
            __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                        (__this->fields)._topButtons;
            pIVar1 = pIVar4[1].klass;
            pIVar4 = UnityEngine_GameObject__GetComponent<object>(__this_02,MethodInfo_Button_GetComponent_Button);
            if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
            goto LAB_040e6df3;
            System_Collections_Generic_Dictionary<object__object>__Add
                      (__this_00,(Il2CppObject *)pIVar1,pIVar4,MethodInfo_Void_Add);
            uVar5 = uVar5 + 1;
          } while ((long)uVar5 < (long)*(int *)(lVar3 + 0x18));
        }
        UI_HeadedPanel__SetupTopButtons((UI_HeadedPanel_o *)__this,(MethodInfo *)0x0);
        return;
      }
    }
LAB_040e6df8:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_040e6df3:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.DuelPopup$$RegisterCategoryPanels
// il2cpp: void UI_DuelPopup__RegisterCategoryPanels (UI_DuelPopup_o* __this, const MethodInfo* method);
// 0x40e6e10

void UI_DuelPopup__RegisterCategoryPanels(UI_DuelPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_RuntimeTypeHandle_o handle;
  System_Type_o *pSVar2;
  
  if (DAT_057047c5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeRef_DuelPlayPanel);
    il2cpp_init_method_metadata(&TypeRef_DuelSpectatePanel);
    il2cpp_init_method_metadata(&"Spectate");
    il2cpp_init_method_metadata(&"Play");
    DAT_057047c5 = '\x01';
  }
  handle.fields.value = TypeRef_DuelPlayPanel.fields.value;
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           (__this->fields)._categoryPanelTypes;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object__object>__Add
              (pSVar1,"Play",(Il2CppObject *)pSVar2,MethodInfo_Void_Add);
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
             (__this->fields)._categoryPanelTypes;
    pSVar2 = System_Type__GetTypeFromHandle(TypeRef_DuelSpectatePanel,(MethodInfo *)0x0);
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary<object__object>__Add
                (pSVar1,"Spectate",(Il2CppObject *)pSVar2,MethodInfo_Void_Add);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.DuelPopup$$SetupPopups
// il2cpp: void UI_DuelPopup__SetupPopups (UI_DuelPopup_o* __this, const MethodInfo* method);
// 0x40e6f00

void UI_DuelPopup__SetupPopups(UI_DuelPopup_o *__this,MethodInfo *method)

{
  UI_BasePanel__SetupPopups((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.DuelPopup$$SetupBottomButtons
// il2cpp: void UI_DuelPopup__SetupBottomButtons (UI_DuelPopup_o* __this, const MethodInfo* method);
// 0x40e6a20

void UI_DuelPopup__SetupBottomButtons(UI_DuelPopup_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *parent;
  int32_t fontSize;
  System_String_o *pSVar1;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Events_UnityAction_o *onClick;
  
  if (DAT_057047c6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void__SetupBottomButtons_b__18_0);
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"Back");
    DAT_057047c6 = '\x01';
  }
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar1 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,120.0,20.0,pSVar1,(MethodInfo *)0x0);
  parent = (__this->fields).BottomBar;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
  onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(parent,__this_00,pSVar1,0.0,onClick,(MethodInfo *)0x0);
  return;
}


// UI.DuelPopup$$OnBottomBarButtonClick
// il2cpp: void UI_DuelPopup__OnBottomBarButtonClick (UI_DuelPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x40e6f10

void UI_DuelPopup__OnBottomBarButtonClick
               (UI_DuelPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  UI_MainMenu_o *__this_00;
  bool_conflict bVar2;
  
  if (DAT_057047c7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MainMenu);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"Back");
    DAT_057047c7 = '\x01';
  }
  bVar2 = System_String__op_Equality(name,"Back",(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    return;
  }
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this_00 = *(UI_MainMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  if (__this_00 != (UI_MainMenu_o *)0x0) {
    bVar1 = (TypeInfo_MainMenu->_2).naturalAligment;
    if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_MainMenu)) {
      UI_MainMenu__ShowMultiplayerMapPopup(__this_00,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.DuelPopup$$.ctor
// il2cpp: void UI_DuelPopup___ctor (UI_DuelPopup_o* __this, const MethodInfo* method);
// 0x40e6ff0

void UI_DuelPopup___ctor(UI_DuelPopup_o *__this,MethodInfo *method)

{
  if (DAT_057047c8 == '\0') {
    il2cpp_init_method_metadata(&"DuelPopup");
    DAT_057047c8 = '\x01';
  }
  (__this->fields).LocaleCategory = "DuelPopup";
  il2cpp_runtime_glue(&(__this->fields).LocaleCategory);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.DuelPopup$$<SetupBottomButtons>b__18_0
// il2cpp: void UI_DuelPopup___SetupBottomButtons_b__18_0 (UI_DuelPopup_o* __this, const MethodInfo* method);
// 0x40e7040

void UI_DuelPopup__<SetupBottomButtons>b__18_0(UI_DuelPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_057047c9 == '\0') {
    il2cpp_init_method_metadata(&"Back");
    DAT_057047c9 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_DuelPopup__OnBottomBarButtonClick(__this,"Back",in_RDX);
  return;
}


