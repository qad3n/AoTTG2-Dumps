// Type: UI.DuelPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/DuelPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/DuelPopup.cs
// --------------------------------

// UI.DuelPopup.<>c__DisplayClass15_0$$.ctor
// il2cpp: void UI_DuelPopup___c__DisplayClass15_0___ctor (UI_DuelPopup___c__DisplayClass15_0_o* __this, const MethodInfo* method);
// 0x43fb030

void UI_DuelPopup___c__DisplayClass15_0___ctor
               (UI_DuelPopup___c__DisplayClass15_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.DuelPopup.<>c__DisplayClass15_0$$<SetupTopButtons>b__0
// il2cpp: void UI_DuelPopup___c__DisplayClass15_0___SetupTopButtons_b__0 (UI_DuelPopup___c__DisplayClass15_0_o* __this, const MethodInfo* method);
// 0x43fb2b0

void UI_DuelPopup___c__DisplayClass15_0___SetupTopButtons_b__0
               (UI_DuelPopup___c__DisplayClass15_0_o *__this,MethodInfo *method)

{
  UI_DuelPopup_o *pUVar1;
  Il2CppMethodPointer vtableDispatch;
  
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 != (UI_DuelPopup_o *)0x0) {
    vtableDispatch = (pUVar1->klass->vtable)._28_SetCategoryPanel.methodPtr;
    (*vtableDispatch)
              (pUVar1,(__this->fields).buttonName,(pUVar1->klass->vtable)._28_SetCategoryPanel.method,
               vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// UI.DuelPopup$$get_Title
// il2cpp: System_String_o* UI_DuelPopup__get_Title (UI_DuelPopup_o* __this, const MethodInfo* method);
// 0x43faba0

System_String_o * UI_DuelPopup__get_Title(UI_DuelPopup_o *__this,MethodInfo *method)

{
  return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
}


// UI.DuelPopup$$get_Width
// il2cpp: float UI_DuelPopup__get_Width (UI_DuelPopup_o* __this, const MethodInfo* method);
// 0x43fabc0

float UI_DuelPopup__get_Width(UI_DuelPopup_o *__this,MethodInfo *method)

{
  return 1000.0;
}


// UI.DuelPopup$$get_Height
// il2cpp: float UI_DuelPopup__get_Height (UI_DuelPopup_o* __this, const MethodInfo* method);
// 0x43fabd0

float UI_DuelPopup__get_Height(UI_DuelPopup_o *__this,MethodInfo *method)

{
  return 800.0;
}


// UI.DuelPopup$$get_CategoryPanel
// il2cpp: bool UI_DuelPopup__get_CategoryPanel (UI_DuelPopup_o* __this, const MethodInfo* method);
// 0x43fabe0

bool_conflict UI_DuelPopup__get_CategoryPanel(UI_DuelPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.DuelPopup$$get_CategoryButtons
// il2cpp: bool UI_DuelPopup__get_CategoryButtons (UI_DuelPopup_o* __this, const MethodInfo* method);
// 0x43fabf0

bool_conflict UI_DuelPopup__get_CategoryButtons(UI_DuelPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.DuelPopup$$get_DefaultCategoryPanel
// il2cpp: System_String_o* UI_DuelPopup__get_DefaultCategoryPanel (UI_DuelPopup_o* __this, const MethodInfo* method);
// 0x43fac00

System_String_o * UI_DuelPopup__get_DefaultCategoryPanel(UI_DuelPopup_o *__this,MethodInfo *method)

{
  if (g_data_057ae55e == '\0') {
    il2cpp_runtime_helper_023445d0(&"Play");
    g_data_057ae55e = '\x01';
  }
  return "Play";
}


// UI.DuelPopup$$Setup
// il2cpp: void UI_DuelPopup__Setup (UI_DuelPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x43fac30

void UI_DuelPopup__Setup(UI_DuelPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *parent_00;
  int32_t fontSize;
  System_String_o *pSVar1;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Events_UnityAction_o *onClick;
  
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  if (g_data_057ae561 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetupBottomButtons_b__18_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Back");
    g_data_057ae561 = '\x01';
  }
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar1 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,120.0,20.0,pSVar1,(MethodInfo *)0x0);
  parent_00 = (__this->fields).BottomBar;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
  onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(parent_00,__this_00,pSVar1,0.0,onClick,(MethodInfo *)0x0);
  return;
}


// UI.DuelPopup$$Show
// il2cpp: void UI_DuelPopup__Show (UI_DuelPopup_o* __this, const MethodInfo* method);
// 0x43fad80

void UI_DuelPopup__Show(UI_DuelPopup_o *__this,MethodInfo *method)

{
  UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.DuelPopup$$SetupTopButtons
// il2cpp: void UI_DuelPopup__SetupTopButtons (UI_DuelPopup_o* __this, const MethodInfo* method);
// 0x43fad90

void UI_DuelPopup__SetupTopButtons(UI_DuelPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppObject *key;
  System_String_o *pSVar1;
  UI_ElementStyle_o *__this_01;
  long lVar2;
  UnityEngine_Transform_o *__this_02;
  UnityEngine_Events_UnityAction_o *onClick;
  UnityEngine_Transform_o *__this_03;
  Il2CppObject *value;
  UnityEngine_Transform_o *parent;
  ulong uVar3;
  
  if (g_data_057ae55f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetupTopButtons_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass15_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Spectate");
    il2cpp_runtime_helper_023445d0(&"Play");
    g_data_057ae55f = '\x01';
  }
  pSVar1 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_01,0x1c,120.0,20.0,pSVar1,(MethodInfo *)0x0);
  parent = TypeInfo_string;
  lVar2 = il2cpp_runtime_helper_022b2a40();
  if (lVar2 == 0) {
label_043fb023:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(lVar2 + 0x18) != 0) {
    parent = (UnityEngine_Transform_o *)(lVar2 + 0x20);
    *(undefined8 *)(lVar2 + 0x20) = "Play";
    il2cpp_runtime_helper_022b4080();
    if (1 < *(uint *)(lVar2 + 0x18)) {
      *(undefined8 *)(lVar2 + 0x28) = "Spectate";
      il2cpp_runtime_helper_022b4080(lVar2 + 0x28);
      if (0 < *(int *)(lVar2 + 0x18)) {
        uVar3 = 0;
        do {
          __this_02 = (UnityEngine_Transform_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass15_0);
          parent = __this_02;
          System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
          if (__this_02 == (UnityEngine_Transform_o *)0x0) goto label_043fb023;
          parent = __this_02 + 1;
          __this_02[1].klass = (UnityEngine_Transform_c *)__this;
          il2cpp_runtime_helper_022b4080();
          if (*(uint *)(lVar2 + 0x18) <= uVar3) goto label_043fb028;
          (__this_02->fields).m_CachedPtr = *(intptr_t *)(lVar2 + 0x20 + uVar3 * 8);
          il2cpp_runtime_helper_022b4080(&__this_02->fields);
          parent = (__this->fields).TopBar;
          pSVar1 = (System_String_o *)(__this_02->fields).m_CachedPtr;
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar1 = UI_UIManager__GetLocaleCommon(pSVar1,(MethodInfo *)0x0);
          onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
          UnityEngine_Events_UnityAction___ctor();
          __this_03 = (UnityEngine_Transform_o *)
                      UI_ElementFactory__CreateCategoryButton
                                (parent,__this_01,pSVar1,onClick,(MethodInfo *)0x0);
          if (__this_03 == (UnityEngine_Transform_o *)0x0) goto label_043fb023;
          __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._topButtons;
          key = (Il2CppObject *)(__this_02->fields).m_CachedPtr;
          value = UnityEngine_GameObject__GetComponent_object_
                            ((UnityEngine_GameObject_o *)__this_03,MethodInfo_Button_GetComponent_Button);
          parent = __this_03;
          if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_043fb023;
          System_Collections_Generic_Dictionary_object__object___Add(__this_00,key,value,MethodInfo_Void_Add);
          uVar3 = uVar3 + 1;
        } while ((long)uVar3 < (long)*(int *)(lVar2 + 0x18));
      }
      UI_HeadedPanel__SetupTopButtons((UI_HeadedPanel_o *)__this,(MethodInfo *)0x0);
      return;
    }
  }
label_043fb028:
  il2cpp_runtime_helper_022b2ca0();
  System_Object___ctor((Il2CppObject *)parent,(MethodInfo *)0x0);
  return;
}


// UI.DuelPopup$$RegisterCategoryPanels
// il2cpp: void UI_DuelPopup__RegisterCategoryPanels (UI_DuelPopup_o* __this, const MethodInfo* method);
// 0x43fb040

void UI_DuelPopup__RegisterCategoryPanels(UI_DuelPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_Type_o *pSVar2;
  System_RuntimeTypeHandle_o handle;
  
  if (g_data_057ae560 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeRef_DuelPlayPanel);
    il2cpp_runtime_helper_023445d0(&TypeRef_DuelSpectatePanel);
    il2cpp_runtime_helper_023445d0(&"Spectate");
    il2cpp_runtime_helper_023445d0(&"Play");
    g_data_057ae560 = '\x01';
  }
  handle.fields.value = TypeRef_DuelPlayPanel.fields.value;
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._categoryPanelTypes;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Add
              (pSVar1,"Play",(Il2CppObject *)pSVar2,MethodInfo_Void_Add);
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._categoryPanelTypes;
    handle.fields.value = TypeRef_DuelSpectatePanel.fields.value;
    pSVar2 = System_Type__GetTypeFromHandle(TypeRef_DuelSpectatePanel,(MethodInfo *)0x0);
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar1,"Spectate",(Il2CppObject *)pSVar2,MethodInfo_Void_Add);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  UI_BasePanel__SetupPopups((UI_BasePanel_o *)handle.fields.value,(MethodInfo *)0x0);
  return;
}


// UI.DuelPopup$$SetupPopups
// il2cpp: void UI_DuelPopup__SetupPopups (UI_DuelPopup_o* __this, const MethodInfo* method);
// 0x43fb130

void UI_DuelPopup__SetupPopups(UI_DuelPopup_o *__this,MethodInfo *method)

{
  UI_BasePanel__SetupPopups((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.DuelPopup$$SetupBottomButtons
// il2cpp: void UI_DuelPopup__SetupBottomButtons (UI_DuelPopup_o* __this, const MethodInfo* method);
// 0x43fac50

void UI_DuelPopup__SetupBottomButtons(UI_DuelPopup_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *parent;
  int32_t fontSize;
  System_String_o *pSVar1;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Events_UnityAction_o *onClick;
  
  if (g_data_057ae561 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetupBottomButtons_b__18_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Back");
    g_data_057ae561 = '\x01';
  }
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar1 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,120.0,20.0,pSVar1,(MethodInfo *)0x0);
  parent = (__this->fields).BottomBar;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
  onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(parent,__this_00,pSVar1,0.0,onClick,(MethodInfo *)0x0);
  return;
}


// UI.DuelPopup$$OnBottomBarButtonClick
// il2cpp: void UI_DuelPopup__OnBottomBarButtonClick (UI_DuelPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x43fb140

void UI_DuelPopup__OnBottomBarButtonClick(UI_DuelPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  bool_conflict bVar2;
  UI_MainMenu_o *__this_00;
  
  if (g_data_057ae562 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MainMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Back");
    g_data_057ae562 = '\x01';
  }
  bVar2 = System_String__op_Equality(name,"Back",(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_00 = *(UI_MainMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (__this_00 != (UI_MainMenu_o *)0x0) {
      bVar1 = (TypeInfo_MainMenu->_2).naturalAligment;
      if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
         ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_MainMenu)) {
        UI_MainMenu__ShowMultiplayerMapPopup(__this_00,(MethodInfo *)0x0);
        return;
      }
      il2cpp_runtime_helper_022b2fd0();
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae563 == '\0') {
      il2cpp_runtime_helper_023445d0(&"DuelPopup");
      g_data_057ae563 = '\x01';
    }
    (__this_00->fields)._multiplayerMapPopup = "DuelPopup";
    il2cpp_runtime_helper_022b4080(&(__this_00->fields)._multiplayerMapPopup);
    UI_BasePopup___ctor((UI_TooltipPopup_o *)__this_00,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UI.DuelPopup$$.ctor
// il2cpp: void UI_DuelPopup___ctor (UI_DuelPopup_o* __this, const MethodInfo* method);
// 0x43fb220

void UI_DuelPopup___ctor(UI_DuelPopup_o *__this,MethodInfo *method)

{
  if (g_data_057ae563 == '\0') {
    il2cpp_runtime_helper_023445d0(&"DuelPopup");
    g_data_057ae563 = '\x01';
  }
  (__this->fields).LocaleCategory = "DuelPopup";
  il2cpp_runtime_helper_022b4080(&(__this->fields).LocaleCategory);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.DuelPopup$$<SetupBottomButtons>b__18_0
// il2cpp: void UI_DuelPopup___SetupBottomButtons_b__18_0 (UI_DuelPopup_o* __this, const MethodInfo* method);
// 0x43fb270

void UI_DuelPopup___SetupBottomButtons_b__18_0(UI_DuelPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (g_data_057ae564 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Back");
    g_data_057ae564 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_DuelPopup__OnBottomBarButtonClick(__this,"Back",in_RDX);
  return;
}


