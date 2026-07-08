// Type: UI.ModerationBatchBanPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/ModerationBatchBanPopup.cs
// Prior source: NEW in this update
// --------------------------------

// UI.ModerationBatchBanPopup$$get_Title
// il2cpp: System_String_o* UI_ModerationBatchBanPopup__get_Title (UI_ModerationBatchBanPopup_o* __this, const MethodInfo* method);
// 0x40c4160

System_String_o *
UI_ModerationBatchBanPopup__get_Title(UI_ModerationBatchBanPopup_o *__this,MethodInfo *method)

{
  if (DAT_057046ba == '\0') {
    il2cpp_init_method_metadata(&"Batch Ban");
    DAT_057046ba = '\x01';
  }
  return "Batch Ban";
}


// UI.ModerationBatchBanPopup$$get_Width
// il2cpp: float UI_ModerationBatchBanPopup__get_Width (UI_ModerationBatchBanPopup_o* __this, const MethodInfo* method);
// 0x40c4190

float UI_ModerationBatchBanPopup__get_Width(UI_ModerationBatchBanPopup_o *__this,MethodInfo *method)

{
  return 550.0;
}


// UI.ModerationBatchBanPopup$$get_Height
// il2cpp: float UI_ModerationBatchBanPopup__get_Height (UI_ModerationBatchBanPopup_o* __this, const MethodInfo* method);
// 0x40c41a0

float UI_ModerationBatchBanPopup__get_Height
                (UI_ModerationBatchBanPopup_o *__this,MethodInfo *method)

{
  return 450.0;
}


// UI.ModerationBatchBanPopup$$get_VerticalPadding
// il2cpp: int32_t UI_ModerationBatchBanPopup__get_VerticalPadding (UI_ModerationBatchBanPopup_o* __this, const MethodInfo* method);
// 0x40c41b0

int32_t UI_ModerationBatchBanPopup__get_VerticalPadding
                  (UI_ModerationBatchBanPopup_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.ModerationBatchBanPopup$$get_HorizontalPadding
// il2cpp: int32_t UI_ModerationBatchBanPopup__get_HorizontalPadding (UI_ModerationBatchBanPopup_o* __this, const MethodInfo* method);
// 0x40c41c0

int32_t UI_ModerationBatchBanPopup__get_HorizontalPadding
                  (UI_ModerationBatchBanPopup_o *__this,MethodInfo *method)

{
  return 0x1e;
}


// UI.ModerationBatchBanPopup$$get_PanelAlignment
// il2cpp: int32_t UI_ModerationBatchBanPopup__get_PanelAlignment (UI_ModerationBatchBanPopup_o* __this, const MethodInfo* method);
// 0x40c41d0

int32_t UI_ModerationBatchBanPopup__get_PanelAlignment
                  (UI_ModerationBatchBanPopup_o *__this,MethodInfo *method)

{
  return 4;
}


// UI.ModerationBatchBanPopup$$Setup
// il2cpp: void UI_ModerationBatchBanPopup__Setup (UI_ModerationBatchBanPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x40c41e0

void UI_ModerationBatchBanPopup__Setup
               (UI_ModerationBatchBanPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  int32_t fontSize;
  System_String_o *pSVar1;
  UI_ElementStyle_o *__this_00;
  UI_ElementStyle_o *__this_01;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_Events_UnityAction_o *pUVar4;
  
  if (DAT_057046bb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__13_0);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__13_1);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__13_2);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__13_3);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__13_4);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"Session Ban");
    il2cpp_init_method_metadata(&"Back");
    il2cpp_init_method_metadata(&"Targets");
    il2cpp_init_method_metadata(&"Session Unban");
    il2cpp_init_method_metadata(&"IP Unban");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"Enter session IDs or IP addresses, one per line.");
    il2cpp_init_method_metadata(&"IP Ban");
    DAT_057046bb = '\x01';
  }
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,(MethodInfo *)0x0);
  pSVar1 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x18,100.0,20.0,pSVar1,(MethodInfo *)0x0);
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar1 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_01,fontSize,120.0,20.0,pSVar1,(MethodInfo *)0x0);
  UI_ElementFactory__CreateDefaultLabel
            ((__this->fields).SinglePanel,__this_00,"Enter session IDs or IP addresses, one per line.",0,3,(MethodInfo *)0x0);
  UI_ElementFactory__CreateInputSetting
            ((__this->fields).SinglePanel,__this_00,
             (Settings_BaseSetting_o *)(__this->fields)._batchTargetsSetting,"Targets",
             "",360.0,150.0,1,(UnityEngine_Events_UnityAction_o *)0x0,
             (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
             (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
  pUVar2 = UI_ElementFactory__CreateHorizontalGroup
                     ((__this->fields).SinglePanel,10.0,4,(MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
    pUVar3 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
    pUVar4 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
    UnityEngine_Events_UnityAction___ctor();
    UI_ElementFactory__CreateDefaultButton
              (pUVar3,__this_00,"Session Ban",140.0,0.0,pUVar4,(MethodInfo *)0x0);
    pUVar4 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
    UnityEngine_Events_UnityAction___ctor();
    UI_ElementFactory__CreateDefaultButton
              (pUVar3,__this_00,"IP Ban",140.0,0.0,pUVar4,(MethodInfo *)0x0);
    pUVar2 = UI_ElementFactory__CreateHorizontalGroup
                       ((__this->fields).SinglePanel,10.0,4,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
      pUVar3 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
      pUVar4 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
      UnityEngine_Events_UnityAction___ctor();
      UI_ElementFactory__CreateDefaultButton
                (pUVar3,__this_00,"Session Unban",140.0,0.0,pUVar4,(MethodInfo *)0x0);
      pUVar4 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
      UnityEngine_Events_UnityAction___ctor();
      UI_ElementFactory__CreateDefaultButton
                (pUVar3,__this_00,"IP Unban",140.0,0.0,pUVar4,(MethodInfo *)0x0);
      pUVar3 = (__this->fields).BottomBar;
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar1 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
      pUVar4 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
      UnityEngine_Events_UnityAction___ctor();
      UI_ElementFactory__CreateTextButton(pUVar3,__this_01,pSVar1,0.0,pUVar4,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ModerationBatchBanPopup$$OnAction
// il2cpp: void UI_ModerationBatchBanPopup__OnAction (UI_ModerationBatchBanPopup_o* __this, System_Action_o* action, const MethodInfo* method);
// 0x40c45f0

void UI_ModerationBatchBanPopup__OnAction
               (UI_ModerationBatchBanPopup_o *__this,System_Action_o *action,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  undefined8 extraout_RDX;
  
  if (action != (System_Action_o *)0x0) {
    (*(code *)(action->fields).invoke_impl)((action->fields).method_code,(action->fields).method);
    vtable_dispatch = (__this->klass->vtable)._22_Hide.methodPtr;
    (*vtable_dispatch)
              (__this,(__this->klass->vtable)._22_Hide.method,extraout_RDX,vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ModerationBatchBanPopup$$.ctor
// il2cpp: void UI_ModerationBatchBanPopup___ctor (UI_ModerationBatchBanPopup_o* __this, const MethodInfo* method);
// 0x40c4630

void UI_ModerationBatchBanPopup___ctor(UI_ModerationBatchBanPopup_o *__this,MethodInfo *method)

{
  System_String_o *defaultValue;
  Settings_StringSetting_o *__this_00;
  
  if (DAT_057046bc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_StringSetting);
    DAT_057046bc = '\x01';
  }
  defaultValue = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  __this_00 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(__this_00,defaultValue,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields)._batchTargetsSetting = __this_00;
  il2cpp_runtime_glue(&(__this->fields)._batchTargetsSetting);
  UI_PromptPopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ModerationBatchBanPopup$$<Setup>b__13_0
// il2cpp: void UI_ModerationBatchBanPopup___Setup_b__13_0 (UI_ModerationBatchBanPopup_o* __this, const MethodInfo* method);
// 0x40c46c0

void UI_ModerationBatchBanPopup__<Setup>b__13_0
               (UI_ModerationBatchBanPopup_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  long lVar1;
  undefined8 extraout_RDX;
  
  if (DAT_057046bd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__13_5);
    DAT_057046bd = '\x01';
  }
  lVar1 = il2cpp_runtime_glue(TypeInfo_Action);
  System_Action___ctor();
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
    vtable_dispatch = (__this->klass->vtable)._22_Hide.methodPtr;
    (*vtable_dispatch)
              (__this,(__this->klass->vtable)._22_Hide.method,extraout_RDX,vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ModerationBatchBanPopup$$<Setup>b__13_5
// il2cpp: void UI_ModerationBatchBanPopup___Setup_b__13_5 (UI_ModerationBatchBanPopup_o* __this, const MethodInfo* method);
// 0x40c4750

void UI_ModerationBatchBanPopup__<Setup>b__13_5
               (UI_ModerationBatchBanPopup_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  System_String_o *targets;
  
  if (DAT_057046be == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    DAT_057046be = '\x01';
  }
  pSVar1 = (__this->fields)._batchTargetsSetting;
  if (pSVar1 != (Settings_StringSetting_o *)0x0) {
    targets = (pSVar1->fields)._value;
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) {
      Anticheat_ModeratorManager__BatchSessionBan(targets,(MethodInfo *)0x0);
      return;
    }
    il2cpp_init_class();
    Anticheat_ModeratorManager__BatchSessionBan(targets,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ModerationBatchBanPopup$$<Setup>b__13_1
// il2cpp: void UI_ModerationBatchBanPopup___Setup_b__13_1 (UI_ModerationBatchBanPopup_o* __this, const MethodInfo* method);
// 0x40c47c0

void UI_ModerationBatchBanPopup__<Setup>b__13_1
               (UI_ModerationBatchBanPopup_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  long lVar1;
  undefined8 extraout_RDX;
  
  if (DAT_057046bf == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__13_6);
    DAT_057046bf = '\x01';
  }
  lVar1 = il2cpp_runtime_glue(TypeInfo_Action);
  System_Action___ctor();
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
    vtable_dispatch = (__this->klass->vtable)._22_Hide.methodPtr;
    (*vtable_dispatch)
              (__this,(__this->klass->vtable)._22_Hide.method,extraout_RDX,vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ModerationBatchBanPopup$$<Setup>b__13_6
// il2cpp: void UI_ModerationBatchBanPopup___Setup_b__13_6 (UI_ModerationBatchBanPopup_o* __this, const MethodInfo* method);
// 0x40c4850

void UI_ModerationBatchBanPopup__<Setup>b__13_6
               (UI_ModerationBatchBanPopup_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  System_String_o *targets;
  
  if (DAT_057046c0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    DAT_057046c0 = '\x01';
  }
  pSVar1 = (__this->fields)._batchTargetsSetting;
  if (pSVar1 != (Settings_StringSetting_o *)0x0) {
    targets = (pSVar1->fields)._value;
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) {
      Anticheat_ModeratorManager__BatchIPBan(targets,(MethodInfo *)0x0);
      return;
    }
    il2cpp_init_class();
    Anticheat_ModeratorManager__BatchIPBan(targets,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ModerationBatchBanPopup$$<Setup>b__13_2
// il2cpp: void UI_ModerationBatchBanPopup___Setup_b__13_2 (UI_ModerationBatchBanPopup_o* __this, const MethodInfo* method);
// 0x40c48c0

void UI_ModerationBatchBanPopup__<Setup>b__13_2
               (UI_ModerationBatchBanPopup_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  long lVar1;
  undefined8 extraout_RDX;
  
  if (DAT_057046c1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__13_7);
    DAT_057046c1 = '\x01';
  }
  lVar1 = il2cpp_runtime_glue(TypeInfo_Action);
  System_Action___ctor();
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
    vtable_dispatch = (__this->klass->vtable)._22_Hide.methodPtr;
    (*vtable_dispatch)
              (__this,(__this->klass->vtable)._22_Hide.method,extraout_RDX,vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ModerationBatchBanPopup$$<Setup>b__13_7
// il2cpp: void UI_ModerationBatchBanPopup___Setup_b__13_7 (UI_ModerationBatchBanPopup_o* __this, const MethodInfo* method);
// 0x40c4950

void UI_ModerationBatchBanPopup__<Setup>b__13_7
               (UI_ModerationBatchBanPopup_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  System_String_o *targets;
  
  if (DAT_057046c2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    DAT_057046c2 = '\x01';
  }
  pSVar1 = (__this->fields)._batchTargetsSetting;
  if (pSVar1 != (Settings_StringSetting_o *)0x0) {
    targets = (pSVar1->fields)._value;
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) {
      Anticheat_ModeratorManager__BatchSessionUnban(targets,(MethodInfo *)0x0);
      return;
    }
    il2cpp_init_class();
    Anticheat_ModeratorManager__BatchSessionUnban(targets,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ModerationBatchBanPopup$$<Setup>b__13_3
// il2cpp: void UI_ModerationBatchBanPopup___Setup_b__13_3 (UI_ModerationBatchBanPopup_o* __this, const MethodInfo* method);
// 0x40c49c0

void UI_ModerationBatchBanPopup__<Setup>b__13_3
               (UI_ModerationBatchBanPopup_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  long lVar1;
  undefined8 extraout_RDX;
  
  if (DAT_057046c3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__13_8);
    DAT_057046c3 = '\x01';
  }
  lVar1 = il2cpp_runtime_glue(TypeInfo_Action);
  System_Action___ctor();
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
    vtable_dispatch = (__this->klass->vtable)._22_Hide.methodPtr;
    (*vtable_dispatch)
              (__this,(__this->klass->vtable)._22_Hide.method,extraout_RDX,vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ModerationBatchBanPopup$$<Setup>b__13_8
// il2cpp: void UI_ModerationBatchBanPopup___Setup_b__13_8 (UI_ModerationBatchBanPopup_o* __this, const MethodInfo* method);
// 0x40c4a50

void UI_ModerationBatchBanPopup__<Setup>b__13_8
               (UI_ModerationBatchBanPopup_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  System_String_o *targets;
  
  if (DAT_057046c4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    DAT_057046c4 = '\x01';
  }
  pSVar1 = (__this->fields)._batchTargetsSetting;
  if (pSVar1 != (Settings_StringSetting_o *)0x0) {
    targets = (pSVar1->fields)._value;
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) {
      Anticheat_ModeratorManager__BatchIPUnban(targets,(MethodInfo *)0x0);
      return;
    }
    il2cpp_init_class();
    Anticheat_ModeratorManager__BatchIPUnban(targets,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ModerationBatchBanPopup$$<Setup>b__13_4
// il2cpp: void UI_ModerationBatchBanPopup___Setup_b__13_4 (UI_ModerationBatchBanPopup_o* __this, const MethodInfo* method);
// 0x40c4ac0

void UI_ModerationBatchBanPopup__<Setup>b__13_4
               (UI_ModerationBatchBanPopup_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  undefined8 in_RDX;
  
  vtable_dispatch = (__this->klass->vtable)._22_Hide.methodPtr;
  (*vtable_dispatch)
            (__this,(__this->klass->vtable)._22_Hide.method,in_RDX,vtable_dispatch);
  return;
}


