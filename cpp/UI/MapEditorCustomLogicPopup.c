// Type: UI.MapEditorCustomLogicPopup
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/MapEditorCustomLogicPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorCustomLogicPopup.cs
// --------------------------------

// UI.MapEditorCustomLogicPopup$$get_Title
// il2cpp: System_String_o* UI_MapEditorCustomLogicPopup__get_Title (UI_MapEditorCustomLogicPopup_o* __this, const MethodInfo* method);
// 0x1822ad410

System_String_o *
UI_MapEditorCustomLogicPopup__get_Title(UI_MapEditorCustomLogicPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347500 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Custom Logic");
    Il2CppMethodInitialized_184347500 = '\x01';
  }
  return "Custom Logic";
}


// UI.MapEditorCustomLogicPopup$$get_Width
// il2cpp: float UI_MapEditorCustomLogicPopup__get_Width (UI_MapEditorCustomLogicPopup_o* __this, const MethodInfo* method);
// 0x18210fb90

float
UI_MapEditorCustomLogicPopup__get_Width(UI_MapEditorCustomLogicPopup_o* __this, MethodInfo* method)

{
  return 500.0;
}


// UI.MapEditorCustomLogicPopup$$get_Height
// il2cpp: float UI_MapEditorCustomLogicPopup__get_Height (UI_MapEditorCustomLogicPopup_o* __this, const MethodInfo* method);
// 0x1821c1ea0

float UI_MapEditorCustomLogicPopup__get_Height(UI_MapEditorCustomLogicPopup_o *__this,MethodInfo *method)

{
  return 585.0;
}


// UI.MapEditorCustomLogicPopup$$get_VerticalPadding
// il2cpp: int32_t UI_MapEditorCustomLogicPopup__get_VerticalPadding (UI_MapEditorCustomLogicPopup_o* __this, const MethodInfo* method);
// 0x180847040

int32_t
UI_MapEditorCustomLogicPopup__get_VerticalPadding(UI_MapEditorCustomLogicPopup_o* __this, MethodInfo* method)

{
  return 0x14;
}


// UI.MapEditorCustomLogicPopup$$get_VerticalSpacing
// il2cpp: float UI_MapEditorCustomLogicPopup__get_VerticalSpacing (UI_MapEditorCustomLogicPopup_o* __this, const MethodInfo* method);
// 0x1820b9980

float
UI_MapEditorCustomLogicPopup__get_VerticalSpacing(UI_MapEditorCustomLogicPopup_o* __this, MethodInfo* method)

{
  return 10.0;
}


// UI.MapEditorCustomLogicPopup$$Setup
// il2cpp: void UI_MapEditorCustomLogicPopup__Setup (UI_MapEditorCustomLogicPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x1822acdb0

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
  UnityEngine_Color_Fields local_48;
  
  if (Il2CppMethodInitialized_184347501 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorCustomLogicPopup_Setup_b__14_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorCustomLogicPopup_Setup_b__14_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184347501 = '\x01';
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
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar3,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_MapEditorCustomLogicPopup_Setup_b__14_0,(MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar2,0.0,pUVar3,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  pSVar2 = UI_UIManager__GetLocaleCommon("Cancel",(MethodInfo *)0x0);
  pUVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar3,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_MapEditorCustomLogicPopup_Setup_b__14_1,(MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar2,0.0,pUVar3,(MethodInfo *)0x0);
  __this_01 = UI_ElementFactory__CreateDefaultLabel
                        ((__this->fields).SinglePanel,__this_00,"",0,4,(MethodInfo *)0x0);
  if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
    pUVar4 = UnityEngine_GameObject__GetComponent_object_
                       (__this_01,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    (__this->fields)._error = pUVar4;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._error,pUVar4);
    pUVar4 = (__this->fields)._error;
    if (pUVar4 != (UnityEngine_UI_Text_o *)0x0) {
      local_48.r = 1.0;
      local_48.g = 0.0;
      local_48.b = 0.0;
      local_48.a = 1.0;
      (*(pUVar4->klass->vtable)._23_set_color.methodPtr)
                (pUVar4,(UnityEngine_Color_o *)&local_48,(pUVar4->klass->vtable)._23_set_color.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorCustomLogicPopup$$Show
// il2cpp: void UI_MapEditorCustomLogicPopup__Show (UI_MapEditorCustomLogicPopup_o* __this, const MethodInfo* method);
// 0x1822ad000

void UI_MapEditorCustomLogicPopup__Show(UI_MapEditorCustomLogicPopup_o *__this,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_Object_o *pUVar2;
  Map_MapScript_o *pMVar3;
  Settings_StringSetting_o *__this_00;
  UnityEngine_UI_Text_o *pUVar4;
  bool bVar5;
  int32_t fontSize;
  System_String_o *themePanel;
  UI_ElementStyle_o *__this_01;
  UnityEngine_GameObject_o *value;
  GameManagers_MapEditorGameManager_o *pGVar6;
  
  if (Il2CppMethodInitialized_184347502 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_MapEditorGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184347502 = '\x01';
  }
  pGVar6 = (GameManagers_MapEditorGameManager_o *)
           TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (pGVar6 == (GameManagers_MapEditorGameManager_o *)0x0) {
    (__this->fields)._gameManager = (GameManagers_MapEditorGameManager_o *)0x0;
    pGVar6 = (GameManagers_MapEditorGameManager_o *)0x0;
  }
  else {
    bVar1 = (TypeInfo_GameManagers_MapEditorGameManager->_2).typeHierarchyDepth;
    if (((((GameManagers_BaseGameManager_c *)pGVar6->klass)->_2).typeHierarchyDepth < bVar1) ||
       ((((GameManagers_BaseGameManager_c *)pGVar6->klass)->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager)) {
      il2cpp_codegen_raise_invalid_cast_exception(pGVar6);
    }
    (__this->fields)._gameManager = pGVar6;
    bVar1 = (TypeInfo_GameManagers_MapEditorGameManager->_2).typeHierarchyDepth;
    if (((((GameManagers_BaseGameManager_c *)pGVar6->klass)->_2).typeHierarchyDepth < bVar1) ||
       ((((GameManagers_BaseGameManager_c *)pGVar6->klass)->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager)) {
      il2cpp_codegen_raise_invalid_cast_exception(pGVar6);
    }
  }
  Il2CppCodeGenWriteBarrier(&(__this->fields)._gameManager,pGVar6);
  pUVar2 = (UnityEngine_Object_o *)(__this->fields)._logicInput;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    pUVar2 = (UnityEngine_Object_o *)(__this->fields)._logicInput;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_2f1ff70(pUVar2,(MethodInfo *)0x0);
  }
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  themePanel = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                         (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_01,fontSize,130.0,20.0,themePanel,(MethodInfo *)0x0);
  UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  pGVar6 = (__this->fields)._gameManager;
  if (((pGVar6 != (GameManagers_MapEditorGameManager_o *)0x0) &&
      (pMVar3 = (pGVar6->fields).MapScript, pMVar3 != (Map_MapScript_o *)0x0)) &&
     (__this_00 = (__this->fields)._logic, __this_00 != (Settings_StringSetting_o *)0x0)) {
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)(pMVar3->fields).Logic,
               (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
    value = UI_ElementFactory__CreateInputSetting
                      ((__this->fields).SinglePanel,__this_01,
                       (Settings_BaseSetting_o *)(__this->fields)._logic,"",
                       "",450.0,400.0,true,(UnityEngine_Events_UnityAction_o *)0x0,
                       (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                       (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
    (__this->fields)._logicInput = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._logicInput,value);
    pUVar4 = (__this->fields)._error;
    if (pUVar4 != (UnityEngine_UI_Text_o *)0x0) {
      (*(pUVar4->klass->vtable)._75_set_text.methodPtr)
                (pUVar4,"",(pUVar4->klass->vtable)._75_set_text.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorCustomLogicPopup$$OnButtonClick
// il2cpp: void UI_MapEditorCustomLogicPopup__OnButtonClick (UI_MapEditorCustomLogicPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x1822ac970
// asm: 44 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822acc8c: mov rax, qword ptr [r14]
// asm:   0x1822acc8f: mov rcx, r14
// asm:   0x1822acc92: mov rdx, qword ptr [rax + 0x3d0]
// asm:   0x1822acc99: call qword ptr [rax + 0x3c8]  ; vtable slot 41
// asm:   0x1822acc9f: mov r8, qword ptr [r14]
// asm:   0x1822acca2: mov rcx, r14
// asm:   0x1822acca5: mov edi, eax
// asm:   0x1822acca7: mov rdx, qword ptr [r8 + 0x180]
// asm:   0x1822accae: call qword ptr [r8 + 0x178]  ; vtable slot 4
// asm:   0x1822accb5: mov rcx, qword ptr [rip + 0x1dc6c04]  ; TypeInfo_UI_ElementStyle
// asm:   0x1822accbc: mov rbx, rax
// asm:   0x1822accbf: call 0x1804170d0  ; il2cpp_runtime_helper_1804170d0()
// asm:   0x1822accc4: movss xmm3, dword ptr [rip + 0x10ac9e0]
// asm:   0x1822acccc: xor ebp, ebp
// asm:   0x1822accce: movss xmm2, dword ptr [rip + 0x119329e]
// asm:   0x1822accd6: mov edx, edi
// asm:   0x1822accd8: mov qword ptr [rsp + 0x28], rbp
// asm:   0x1822accdd: mov rcx, rax
// asm:   0x1822acce0: mov qword ptr [rsp + 0x20], rbx
// asm:   0x1822acce5: mov rsi, rax
// asm:   0x1822acce8: call 0x182211560  ; UI_ElementStyle___ctor()
// asm:   0x1822acced: movss xmm0, dword ptr [rip + 0x1192f37]
// asm:   0x1822accf5: mov rdx, rsi
// asm:   0x1822accf8: movss xmm1, dword ptr [rip + 0x10aca44]
// asm:   0x1822acd00: mov r9, qword ptr [rip + 0x1dd2221]  ; ""
// asm:   0x1822acd07: mov r8, qword ptr [r14 + 0xa8]
// asm:   0x1822acd0e: mov rcx, qword ptr [r14 + 0x20]
// asm:   0x1822acd12: mov qword ptr [rsp + 0x60], rbp
// asm:   0x1822acd17: mov qword ptr [rsp + 0x58], rbp
// asm:   0x1822acd1c: mov qword ptr [rsp + 0x50], rbp
// asm:   0x1822acd21: mov qword ptr [rsp + 0x48], rbp
// asm:   0x1822acd26: mov qword ptr [rsp + 0x40], rbp
// asm:   0x1822acd2b: mov byte ptr [rsp + 0x38], 1
// asm:   0x1822acd30: movss dword ptr [rsp + 0x30], xmm0
// asm:   0x1822acd36: movss dword ptr [rsp + 0x28], xmm1
// asm:   0x1822acd3c: mov qword ptr [rsp + 0x20], r9
// asm:   0x1822acd41: call 0x18220e3c0  ; UI_ElementFactory__CreateInputSetting()
// asm:   0x1822acd46: lea rcx, [r14 + 0xb0]
// asm:   0x1822acd4d: mov qword ptr [r14 + 0xb0], rax
// asm:   0x1822acd54: mov rdx, rax
// asm:   0x1822acd57: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x1822acd5c: mov rsi, qword ptr [rsp + 0x88]
// asm:   0x1822acd64: mov rbp, qword ptr [rsp + 0x80]
// asm:   0x1822acd6c: jmp 0x1822acbef

void UI_MapEditorCustomLogicPopup__OnButtonClick
               (UI_MapEditorCustomLogicPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  Settings_StringSetting_o *pSVar2;
  GameManagers_MapEditorGameManager_o *pGVar3;
  Map_MapScript_o *pMVar4;
  UI_BaseMenu_o *pUVar5;
  UI_MapEditorTopPanel_o *__this_00;
  UnityEngine_UI_Text_o *pUVar6;
  UnityEngine_Object_o *pUVar7;
  bool bVar8;
  int32_t fontSize;
  System_String_o *pSVar9;
  CustomLogic_CustomLogicEvaluator_o *value;
  UI_ElementStyle_o *__this_01;
  UnityEngine_GameObject_o *value_00;
  
  if (Il2CppMethodInitialized_184347503 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184347503 = '\x01';
  }
  bVar8 = System_String__op_Equality(name,"Cancel",(MethodInfo *)0x0);
  if (bVar8) {
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
                      ((pSVar2->fields)._value,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),
                       (MethodInfo *)0x0);
    if (bVar8) {
      pSVar2 = (__this->fields)._logic;
      if (pSVar2 == (Settings_StringSetting_o *)0x0) goto label_1822acd9c;
      pSVar9 = (pSVar2->fields)._value;
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      pSVar9 = CustomLogic_CustomLogicManager__TryParseLogic(pSVar9,(MethodInfo *)0x0);
    }
    bVar8 = System_String__op_Inequality
                      (pSVar9,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
    if (bVar8) {
      pUVar6 = (__this->fields)._error;
      if (pUVar6 != (UnityEngine_UI_Text_o *)0x0) {
        (*(pUVar6->klass->vtable)._75_set_text.methodPtr)
                  (pUVar6,pSVar9,(pUVar6->klass->vtable)._75_set_text.method);
        pUVar7 = (UnityEngine_Object_o *)(__this->fields)._logicInput;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar8 = UnityEngine_Object__op_Inequality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar8) {
          pUVar7 = (UnityEngine_Object_o *)(__this->fields)._logicInput;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          UnityEngine_Object__Destroy_2f1ff70(pUVar7,(MethodInfo *)0x0);
        }
        fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                             (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
        pSVar9 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                           (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
        UI_ElementStyle___ctor(__this_01,fontSize,130.0,20.0,pSVar9,(MethodInfo *)0x0);
        value_00 = UI_ElementFactory__CreateInputSetting
                             ((__this->fields).SinglePanel,__this_01,
                              (Settings_BaseSetting_o *)(__this->fields)._logic,"",
                              "",450.0,400.0,true,(UnityEngine_Events_UnityAction_o *)0x0,
                              (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                              (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
        (__this->fields)._logicInput = value_00;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._logicInput,value_00);
        return;
      }
    }
    else {
      pGVar3 = (__this->fields)._gameManager;
      if (((pGVar3 != (GameManagers_MapEditorGameManager_o *)0x0) &&
          (pSVar2 = (__this->fields)._logic, pSVar2 != (Settings_StringSetting_o *)0x0)) &&
         (pMVar4 = (pGVar3->fields).MapScript, pMVar4 != (Map_MapScript_o *)0x0)) {
        pSVar9 = (pSVar2->fields)._value;
        (pMVar4->fields).Logic = pSVar9;
        Il2CppCodeGenWriteBarrier(&(pMVar4->fields).Logic,pSVar9);
        pSVar2 = (__this->fields)._logic;
        if (pSVar2 != (Settings_StringSetting_o *)0x0) {
          pGVar3 = (__this->fields)._gameManager;
          pSVar9 = (pSVar2->fields)._value;
          if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
          }
          value = CustomLogic_CustomLogicManager__GetEditorEvaluator(pSVar9,true,(MethodInfo *)0x0);
          if (pGVar3 != (GameManagers_MapEditorGameManager_o *)0x0) {
            (pGVar3->fields).LogicEvaluator = value;
            Il2CppCodeGenWriteBarrier(&(pGVar3->fields).LogicEvaluator,value);
            if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
            }
            pUVar5 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
            if (pUVar5 != (UI_BaseMenu_o *)0x0) {
              bVar1 = (TypeInfo_UI_MapEditorMenu->_2).typeHierarchyDepth;
              if (((pUVar5->klass->_2).typeHierarchyDepth < bVar1) ||
                 ((pUVar5->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                  (Il2CppClass *)TypeInfo_UI_MapEditorMenu)) {
                il2cpp_codegen_raise_invalid_cast_exception(pUVar5);
              }
              __this_00 = (UI_MapEditorTopPanel_o *)(*(uint64_t *)((char *)pUVar5 + 0xb8));
              if (__this_00 != (UI_MapEditorTopPanel_o *)0x0) {
                UI_MapEditorTopPanel__Save(__this_00,(MethodInfo *)0x0);
                (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
                return;
              }
            }
          }
        }
      }
    }
  }
label_1822acd9c:
  ThrowNullReferenceException();
}


// UI.MapEditorCustomLogicPopup$$.ctor
// il2cpp: void UI_MapEditorCustomLogicPopup___ctor (UI_MapEditorCustomLogicPopup_o* __this, const MethodInfo* method);
// 0x1822ad370

void UI_MapEditorCustomLogicPopup___ctor(UI_MapEditorCustomLogicPopup_o *__this,MethodInfo *method)

{
  System_String_o *defaultValue;
  Settings_StringSetting_o *__this_00;
  
  if (Il2CppMethodInitialized_184347504 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    Il2CppMethodInitialized_184347504 = '\x01';
  }
  defaultValue = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_1f27ee0(__this_00,defaultValue,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields)._logic = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._logic,__this_00);
  UI_PromptPopup___ctor((UI_ToolsPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorCustomLogicPopup$$<Setup>b__14_0
// il2cpp: void UI_MapEditorCustomLogicPopup___Setup_b__14_0 (UI_MapEditorCustomLogicPopup_o* __this, const MethodInfo* method);
// 0x1822ad2f0

void UI_MapEditorCustomLogicPopup___Setup_b__14_0(UI_MapEditorCustomLogicPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347505 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    Il2CppMethodInitialized_184347505 = '\x01';
  }
  UI_MapEditorCustomLogicPopup__OnButtonClick(__this,"Save",(MethodInfo *)0x0);
  return;
}


// UI.MapEditorCustomLogicPopup$$<Setup>b__14_1
// il2cpp: void UI_MapEditorCustomLogicPopup___Setup_b__14_1 (UI_MapEditorCustomLogicPopup_o* __this, const MethodInfo* method);
// 0x1822ad330

void UI_MapEditorCustomLogicPopup___Setup_b__14_1(UI_MapEditorCustomLogicPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347506 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    Il2CppMethodInitialized_184347506 = '\x01';
  }
  UI_MapEditorCustomLogicPopup__OnButtonClick(__this,"Cancel",(MethodInfo *)0x0);
  return;
}


