// Type: UI.MultiplayerFilterPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/MultiplayerFilterPopup.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/MainMenu/MultiplayerFilterPopup.cs  [CHANGED since prior version]
// --------------------------------

// UI.MultiplayerFilterPopup$$get_Title
// il2cpp: System_String_o* UI_MultiplayerFilterPopup__get_Title (UI_MultiplayerFilterPopup_o* __this, const MethodInfo* method);
// 0x40f48e0

System_String_o *
UI_MultiplayerFilterPopup__get_Title(UI_MultiplayerFilterPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (DAT_0570481b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"Filters");
    DAT_0570481b = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = UI_UIManager__GetLocaleCommon("Filters",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.MultiplayerFilterPopup$$get_VerticalPadding
// il2cpp: int32_t UI_MultiplayerFilterPopup__get_VerticalPadding (UI_MultiplayerFilterPopup_o* __this, const MethodInfo* method);
// 0x40f4940

int32_t UI_MultiplayerFilterPopup__get_VerticalPadding
                  (UI_MultiplayerFilterPopup_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.MultiplayerFilterPopup$$get_HorizontalPadding
// il2cpp: int32_t UI_MultiplayerFilterPopup__get_HorizontalPadding (UI_MultiplayerFilterPopup_o* __this, const MethodInfo* method);
// 0x40f4950

int32_t UI_MultiplayerFilterPopup__get_HorizontalPadding
                  (UI_MultiplayerFilterPopup_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.MultiplayerFilterPopup$$get_VerticalSpacing
// il2cpp: float UI_MultiplayerFilterPopup__get_VerticalSpacing (UI_MultiplayerFilterPopup_o* __this, const MethodInfo* method);
// 0x40f4960

float UI_MultiplayerFilterPopup__get_VerticalSpacing
                (UI_MultiplayerFilterPopup_o *__this,MethodInfo *method)

{
  return 20.0;
}


// UI.MultiplayerFilterPopup$$get_Width
// il2cpp: float UI_MultiplayerFilterPopup__get_Width (UI_MultiplayerFilterPopup_o* __this, const MethodInfo* method);
// 0x40f4970

float UI_MultiplayerFilterPopup__get_Width(UI_MultiplayerFilterPopup_o *__this,MethodInfo *method)

{
  return 370.0;
}


// UI.MultiplayerFilterPopup$$get_Height
// il2cpp: float UI_MultiplayerFilterPopup__get_Height (UI_MultiplayerFilterPopup_o* __this, const MethodInfo* method);
// 0x40f4980

float UI_MultiplayerFilterPopup__get_Height(UI_MultiplayerFilterPopup_o *__this,MethodInfo *method)

{
  return 245.0;
}


// UI.MultiplayerFilterPopup$$get_PanelAlignment
// il2cpp: int32_t UI_MultiplayerFilterPopup__get_PanelAlignment (UI_MultiplayerFilterPopup_o* __this, const MethodInfo* method);
// 0x40f4990

int32_t UI_MultiplayerFilterPopup__get_PanelAlignment
                  (UI_MultiplayerFilterPopup_o *__this,MethodInfo *method)

{
  return 4;
}


// UI.MultiplayerFilterPopup$$Setup
// il2cpp: void UI_MultiplayerFilterPopup__Setup (UI_MultiplayerFilterPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x40f49a0

void UI_MultiplayerFilterPopup__Setup
               (UI_MultiplayerFilterPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_Transform_o *pUVar2;
  System_Threading_CancellationTokenSource_o *setting;
  UnityEngine_Transform_o *setting_00;
  System_String_o *subCategory;
  int32_t fontSize;
  System_String_o *pSVar3;
  UI_ElementStyle_o *__this_00;
  UI_ElementStyle_o *__this_01;
  UnityEngine_Events_UnityAction_o *onClick;
  System_String_o *pSVar4;
  
  if (DAT_0570481c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__14_0);
    il2cpp_init_method_metadata(&TypeInfo_MultiplayerRoomListPopup);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"MainMenu");
    il2cpp_init_method_metadata(&"Confirm");
    il2cpp_init_method_metadata(&"MultiplayerFilterPopup");
    il2cpp_init_method_metadata(&"ShowFull");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"ShowPassword");
    DAT_0570481c = '\x01';
  }
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,(MethodInfo *)0x0);
  subCategory = "MultiplayerFilterPopup";
  pSVar4 = "MainMenu";
  if (parent != (UI_BasePanel_o *)0x0) {
    bVar1 = (TypeInfo_MultiplayerRoomListPopup->_2).naturalAligment;
    if (((parent->klass->_2).naturalAligment < bVar1) ||
       ((parent->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_MultiplayerRoomListPopup)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(parent);
    }
  }
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar3 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,120.0,20.0,pSVar3,(MethodInfo *)0x0);
  pSVar3 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_01,0x18,240.0,20.0,pSVar3,(MethodInfo *)0x0);
  pUVar2 = (__this->fields).BottomBar;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar3 = UI_UIManager__GetLocaleCommon("Confirm",(MethodInfo *)0x0);
  onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar2,__this_00,pSVar3,0.0,onClick,(MethodInfo *)0x0);
  if (parent != (UI_BasePanel_o *)0x0) {
    pUVar2 = (__this->fields).SinglePanel;
    setting = parent[2].fields.m_CancellationTokenSource;
    pSVar3 = UI_UIManager__GetLocale
                       (pSVar4,subCategory,"ShowFull","","",(MethodInfo *)0x0)
    ;
    UI_ElementFactory__CreateToggleSetting
              (pUVar2,__this_01,(Settings_BaseSetting_o *)setting,pSVar3,"",30.0,30.0,
               (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
    pUVar2 = (__this->fields).SinglePanel;
    setting_00 = parent[2].fields.SinglePanel;
    pSVar4 = UI_UIManager__GetLocale
                       (pSVar4,subCategory,"ShowPassword","","",(MethodInfo *)0x0)
    ;
    UI_ElementFactory__CreateToggleSetting
              (pUVar2,__this_01,(Settings_BaseSetting_o *)setting_00,pSVar4,"",30.0,30.0,
               (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MultiplayerFilterPopup$$OnButtonClick
// il2cpp: void UI_MultiplayerFilterPopup__OnButtonClick (UI_MultiplayerFilterPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x40f4cc0

void UI_MultiplayerFilterPopup__OnButtonClick
               (UI_MultiplayerFilterPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  UI_MultiplayerRoomListPopup_o *__this_00;
  bool_conflict bVar2;
  MethodInfo *method_00;
  
  if (DAT_0570481d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MultiplayerRoomListPopup);
    il2cpp_init_method_metadata(&"Confirm");
    DAT_0570481d = '\x01';
  }
  bVar2 = System_String__op_Equality(name,"Confirm",(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    return;
  }
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  __this_00 = (UI_MultiplayerRoomListPopup_o *)(__this->fields).Parent;
  if (__this_00 == (UI_MultiplayerRoomListPopup_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  bVar1 = (TypeInfo_MultiplayerRoomListPopup->_2).naturalAligment;
  if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
     ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_MultiplayerRoomListPopup)) {
    UI_MultiplayerRoomListPopup__RefreshList(__this_00,1,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_unwind_resume();
}


// UI.MultiplayerFilterPopup$$.ctor
// il2cpp: void UI_MultiplayerFilterPopup___ctor (UI_MultiplayerFilterPopup_o* __this, const MethodInfo* method);
// 0x40f5dc0

void UI_MultiplayerFilterPopup___ctor(UI_MultiplayerFilterPopup_o *__this,MethodInfo *method)

{
  UI_PromptPopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MultiplayerFilterPopup$$<Setup>b__14_0
// il2cpp: void UI_MultiplayerFilterPopup___Setup_b__14_0 (UI_MultiplayerFilterPopup_o* __this, const MethodInfo* method);
// 0x40f5dd0

void UI_MultiplayerFilterPopup__<Setup>b__14_0
               (UI_MultiplayerFilterPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_0570481e == '\0') {
    il2cpp_init_method_metadata(&"Confirm");
    DAT_0570481e = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_MultiplayerFilterPopup__OnButtonClick(__this,"Confirm",in_RDX);
  return;
}


