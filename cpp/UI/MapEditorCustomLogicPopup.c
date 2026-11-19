// Type: UI.MapEditorCustomLogicPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/MapEditorCustomLogicPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorCustomLogicPopup.cs
// --------------------------------

// UI.MapEditorCustomLogicPopup$$get_Title
// il2cpp: System_String_o* UI_MapEditorCustomLogicPopup__get_Title (UI_MapEditorCustomLogicPopup_o* __this, const MethodInfo* method);
// 0x5d70cc0

System_String_o *
UI_MapEditorCustomLogicPopup__get_Title(UI_MapEditorCustomLogicPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07547fb9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Top");
    il2cpp_codegen_initialize_runtime_metadata(&"CustomLogic");
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditor");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547fb9 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("MapEditor","Top","CustomLogic","",
                      "",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.MapEditorCustomLogicPopup$$get_Width
// il2cpp: float UI_MapEditorCustomLogicPopup__get_Width (UI_MapEditorCustomLogicPopup_o* __this, const MethodInfo* method);
// 0x5d70d60

float UI_MapEditorCustomLogicPopup__get_Width(UI_MapEditorCustomLogicPopup_o *__this,MethodInfo *method)

{
  return 500.0;
}


// UI.MapEditorCustomLogicPopup$$get_Height
// il2cpp: float UI_MapEditorCustomLogicPopup__get_Height (UI_MapEditorCustomLogicPopup_o* __this, const MethodInfo* method);
// 0x5d70d70

float UI_MapEditorCustomLogicPopup__get_Height(UI_MapEditorCustomLogicPopup_o *__this,MethodInfo *method)

{
  return 585.0;
}


// UI.MapEditorCustomLogicPopup$$get_VerticalPadding
// il2cpp: int32_t UI_MapEditorCustomLogicPopup__get_VerticalPadding (UI_MapEditorCustomLogicPopup_o* __this, const MethodInfo* method);
// 0x5d70d80

int32_t UI_MapEditorCustomLogicPopup__get_VerticalPadding
                  (UI_MapEditorCustomLogicPopup_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.MapEditorCustomLogicPopup$$get_VerticalSpacing
// il2cpp: float UI_MapEditorCustomLogicPopup__get_VerticalSpacing (UI_MapEditorCustomLogicPopup_o* __this, const MethodInfo* method);
// 0x5d70d90

float UI_MapEditorCustomLogicPopup__get_VerticalSpacing
                (UI_MapEditorCustomLogicPopup_o *__this,MethodInfo *method)

{
  return 10.0;
}


// UI.MapEditorCustomLogicPopup$$Setup
// il2cpp: void UI_MapEditorCustomLogicPopup__Setup (UI_MapEditorCustomLogicPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x5d70da0

void UI_MapEditorCustomLogicPopup__Setup
               (UI_MapEditorCustomLogicPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  int32_t fontSize;
  System_String_o *pSVar2;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar3;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_UI_Text_o *pUVar4;
  UnityEngine_Color_o UVar5;
  
  if (Il2CppMethodInitialized_07547fba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorCustomLogicPopup_Setup_b__14_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorCustomLogicPopup_Setup_b__14_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547fba = '\x01';
  }
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,(MethodInfo *)0x0);
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar2 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,130.0,20.0,pSVar2,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar2 = UI_UIManager__GetLocaleCommon("Save",(MethodInfo *)0x0);
  pUVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (pUVar3,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_MapEditorCustomLogicPopup_Setup_b__14_0,
             (MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar2,0.0,pUVar3,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  pSVar2 = UI_UIManager__GetLocaleCommon("Cancel",(MethodInfo *)0x0);
  pUVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (pUVar3,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_MapEditorCustomLogicPopup_Setup_b__14_1,
             (MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar2,0.0,pUVar3,(MethodInfo *)0x0);
  __this_01 = UI_ElementFactory__CreateDefaultLabel
                        ((__this->fields).SinglePanel,__this_00,"",0,4,(MethodInfo *)0x0);
  if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
    pUVar4 = UnityEngine_GameObject__GetComponent_object_
                       (__this_01,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    (__this->fields)._error = pUVar4;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._error);
    pUVar4 = (__this->fields)._error;
    if (pUVar4 != (UnityEngine_UI_Text_o *)0x0) {
      UVar5.fields.b = 0.0;
      UVar5.fields.a = 1.0;
      UVar5.fields.r = 1.0;
      UVar5.fields.g = 0.0;
      (*(pUVar4->klass->vtable)._23_set_color.methodPtr)
                (pUVar4,UVar5,(pUVar4->klass->vtable)._23_set_color.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorCustomLogicPopup$$Show
// il2cpp: void UI_MapEditorCustomLogicPopup__Show (UI_MapEditorCustomLogicPopup_o* __this, const MethodInfo* method);
// 0x5d70ff0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d710cb: lea rdi, [rbx + 0xb8]
// asm:   0x5d710d2: jmp 0x5d710e6

void UI_MapEditorCustomLogicPopup__Show(UI_MapEditorCustomLogicPopup_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o **targetAddress;
  byte bVar1;
  GameManagers_MapEditorGameManager_o *pGVar2;
  UnityEngine_Object_o *pUVar3;
  Map_MapScript_o *pMVar4;
  Settings_StringSetting_o *__this_00;
  UnityEngine_UI_Text_o *pUVar5;
  GameManagers_MapEditorGameManager_c *pGVar6;
  bool bVar7;
  int32_t fontSize;
  System_String_o *themePanel;
  UI_ElementStyle_o *__this_01;
  UnityEngine_GameObject_o *pUVar8;
  
  if (Il2CppMethodInitialized_07547fbb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_MapEditorGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547fbb = '\x01';
  }
  pGVar6 = TypeInfo_GameManagers_MapEditorGameManager;
  pGVar2 = (GameManagers_MapEditorGameManager_o *)
           TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (pGVar2 != (GameManagers_MapEditorGameManager_o *)0x0) {
    bVar1 = (TypeInfo_GameManagers_MapEditorGameManager->_2).typeHierarchyDepth;
    if ((bVar1 <= (((GameManagers_BaseGameManager_c *)pGVar2->klass)->_2).typeHierarchyDepth) &&
       ((((GameManagers_BaseGameManager_c *)pGVar2->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager)) {
      (__this->fields)._gameManager = pGVar2;
      if ((bVar1 <= (((GameManagers_BaseGameManager_c *)pGVar2->klass)->_2).typeHierarchyDepth) &&
         ((((GameManagers_BaseGameManager_c *)pGVar2->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] ==
          (Il2CppClass *)pGVar6)) goto label_05d710e6;
    }
    il2cpp_codegen_raise_invalid_cast_exception(pGVar2,pGVar6);
  }
  (__this->fields)._gameManager = (GameManagers_MapEditorGameManager_o *)0x0;
label_05d710e6:
  Il2CppCodeGenWriteBarrier(&(__this->fields)._gameManager);
  pUVar3 = (UnityEngine_Object_o *)(__this->fields)._logicInput;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  targetAddress = &(__this->fields)._logicInput;
  bVar7 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar7) {
    pUVar3 = (UnityEngine_Object_o *)*targetAddress;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0(pUVar3,(MethodInfo *)0x0);
  }
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  themePanel = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                         (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_01,fontSize,130.0,20.0,themePanel,(MethodInfo *)0x0);
  UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  pGVar2 = (__this->fields)._gameManager;
  if (((pGVar2 != (GameManagers_MapEditorGameManager_o *)0x0) &&
      (pMVar4 = (pGVar2->fields).MapScript, pMVar4 != (Map_MapScript_o *)0x0)) &&
     (__this_00 = (__this->fields)._logic, __this_00 != (Settings_StringSetting_o *)0x0)) {
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)(pMVar4->fields).Logic,
               (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
    pUVar8 = UI_ElementFactory__CreateInputSetting
                       ((__this->fields).SinglePanel,__this_01,
                        (Settings_BaseSetting_o *)(__this->fields)._logic,"",
                        "",450.0,400.0,true,(UnityEngine_Events_UnityAction_o *)0x0,
                        (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                        (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
    (__this->fields)._logicInput = pUVar8;
    Il2CppCodeGenWriteBarrier(targetAddress);
    pUVar5 = (__this->fields)._error;
    if (pUVar5 != (UnityEngine_UI_Text_o *)0x0) {
      (*(pUVar5->klass->vtable)._75_set_text.methodPtr)
                (pUVar5,"",(pUVar5->klass->vtable)._75_set_text.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorCustomLogicPopup$$OnButtonClick
// il2cpp: void UI_MapEditorCustomLogicPopup__OnButtonClick (UI_MapEditorCustomLogicPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5d71290

void UI_MapEditorCustomLogicPopup__OnButtonClick
               (UI_MapEditorCustomLogicPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  UnityEngine_GameObject_o **targetAddress;
  byte bVar1;
  Settings_StringSetting_o *pSVar2;
  UnityEngine_UI_Text_o *pUVar3;
  UnityEngine_Object_o *pUVar4;
  GameManagers_MapEditorGameManager_o *pGVar5;
  Map_MapScript_o *pMVar6;
  UI_BaseMenu_o *pUVar7;
  UI_MapEditorTopPanel_o *__this_00;
  bool bVar8;
  int32_t fontSize;
  System_String_o *pSVar9;
  UI_ElementStyle_o *__this_01;
  UnityEngine_GameObject_o *pUVar10;
  CustomLogic_CustomLogicEvaluator_o *pCVar11;
  
  if (Il2CppMethodInitialized_07547fbc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547fbc = '\x01';
  }
  bVar8 = System_String__op_Equality(name,"Cancel",(MethodInfo *)0x0);
  if (bVar8) {
label_05d71338:
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
    return;
  }
  bVar8 = System_String__op_Equality(name,"Save",(MethodInfo *)0x0);
  pSVar9 = "";
  if (!bVar8) {
    return;
  }
  pSVar2 = (__this->fields)._logic;
  if (pSVar2 != (Settings_StringSetting_o *)0x0) {
    bVar8 = System_String__op_Inequality
                      ((pSVar2->fields)._value,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),
                       (MethodInfo *)0x0);
    if (bVar8) {
      pSVar2 = (__this->fields)._logic;
      if (pSVar2 == (Settings_StringSetting_o *)0x0) goto label_05d7166a;
      pSVar9 = (pSVar2->fields)._value;
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      pSVar9 = CustomLogic_CustomLogicManager__TryParseLogic(pSVar9,(MethodInfo *)0x0);
    }
    bVar8 = System_String__op_Inequality
                      (pSVar9,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
    if (bVar8) {
      pUVar3 = (__this->fields)._error;
      if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
        (*(pUVar3->klass->vtable)._75_set_text.methodPtr)
                  (pUVar3,pSVar9,(pUVar3->klass->vtable)._75_set_text.method);
        pUVar4 = (UnityEngine_Object_o *)(__this->fields)._logicInput;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        targetAddress = &(__this->fields)._logicInput;
        bVar8 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar8) {
          pUVar4 = (UnityEngine_Object_o *)*targetAddress;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          UnityEngine_Object__Destroy_69214e0(pUVar4,(MethodInfo *)0x0);
        }
        fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                             (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
        pSVar9 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                           (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
        UI_ElementStyle___ctor(__this_01,fontSize,130.0,20.0,pSVar9,(MethodInfo *)0x0);
        pUVar10 = UI_ElementFactory__CreateInputSetting
                            ((__this->fields).SinglePanel,__this_01,
                             (Settings_BaseSetting_o *)(__this->fields)._logic,"",
                             "",450.0,400.0,true,(UnityEngine_Events_UnityAction_o *)0x0,
                             (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                             (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
        (__this->fields)._logicInput = pUVar10;
        Il2CppCodeGenWriteBarrier(targetAddress);
        return;
      }
    }
    else {
      pGVar5 = (__this->fields)._gameManager;
      if (((pGVar5 != (GameManagers_MapEditorGameManager_o *)0x0) &&
          (pSVar2 = (__this->fields)._logic, pSVar2 != (Settings_StringSetting_o *)0x0)) &&
         (pMVar6 = (pGVar5->fields).MapScript, pMVar6 != (Map_MapScript_o *)0x0)) {
        (pMVar6->fields).Logic = (pSVar2->fields)._value;
        Il2CppCodeGenWriteBarrier(&(pMVar6->fields).Logic);
        pSVar2 = (__this->fields)._logic;
        if (pSVar2 != (Settings_StringSetting_o *)0x0) {
          pGVar5 = (__this->fields)._gameManager;
          pSVar9 = (pSVar2->fields)._value;
          if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
          }
          pCVar11 = CustomLogic_CustomLogicManager__GetEditorEvaluator(pSVar9,true,(MethodInfo *)0x0);
          if (pGVar5 != (GameManagers_MapEditorGameManager_o *)0x0) {
            (pGVar5->fields).LogicEvaluator = pCVar11;
            Il2CppCodeGenWriteBarrier(&(pGVar5->fields).LogicEvaluator);
            if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
            }
            pUVar7 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
            if (pUVar7 != (UI_BaseMenu_o *)0x0) {
              bVar1 = (TypeInfo_UI_MapEditorMenu->_2).typeHierarchyDepth;
              if (((pUVar7->klass->_2).typeHierarchyDepth < bVar1) ||
                 ((pUVar7->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                  (Il2CppClass *)TypeInfo_UI_MapEditorMenu)) {
                il2cpp_codegen_raise_invalid_cast_exception();
              }
              __this_00 = (UI_MapEditorTopPanel_o *)(*(uint64_t *)((char *)pUVar7 + 0xb8));
              if (__this_00 != (UI_MapEditorTopPanel_o *)0x0) {
                UI_MapEditorTopPanel__Save(__this_00,(MethodInfo *)0x0);
                goto label_05d71338;
              }
            }
          }
        }
      }
    }
  }
label_05d7166a:
  ThrowNullReferenceException();
}


// UI.MapEditorCustomLogicPopup$$.ctor
// il2cpp: void UI_MapEditorCustomLogicPopup___ctor (UI_MapEditorCustomLogicPopup_o* __this, const MethodInfo* method);
// 0x5d71680

void UI_MapEditorCustomLogicPopup___ctor(UI_MapEditorCustomLogicPopup_o *__this,MethodInfo *method)

{
  System_String_o *defaultValue;
  Settings_StringSetting_o *__this_00;
  
  if (Il2CppMethodInitialized_07547fbd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    Il2CppMethodInitialized_07547fbd = '\x01';
  }
  defaultValue = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(__this_00,defaultValue,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields)._logic = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._logic);
  UI_PromptPopup___ctor((UI_PromptPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorCustomLogicPopup$$<Setup>b__14_0
// il2cpp: void UI_MapEditorCustomLogicPopup___Setup_b__14_0 (UI_MapEditorCustomLogicPopup_o* __this, const MethodInfo* method);
// 0x5d71710

void UI_MapEditorCustomLogicPopup___Setup_b__14_0(UI_MapEditorCustomLogicPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_07547fbe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    Il2CppMethodInitialized_07547fbe = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_MapEditorCustomLogicPopup__OnButtonClick(__this,"Save",in_RDX);
  return;
}


// UI.MapEditorCustomLogicPopup$$<Setup>b__14_1
// il2cpp: void UI_MapEditorCustomLogicPopup___Setup_b__14_1 (UI_MapEditorCustomLogicPopup_o* __this, const MethodInfo* method);
// 0x5d71750

void UI_MapEditorCustomLogicPopup___Setup_b__14_1(UI_MapEditorCustomLogicPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_07547fbf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    Il2CppMethodInitialized_07547fbf = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_MapEditorCustomLogicPopup__OnButtonClick(__this,"Cancel",in_RDX);
  return;
}


