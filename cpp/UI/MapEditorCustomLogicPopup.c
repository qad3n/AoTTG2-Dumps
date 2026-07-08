// Type: UI.MapEditorCustomLogicPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/MapEditorCustomLogicPopup.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/MapEditorMenu/MapEditorCustomLogicPopup.cs  [CHANGED since prior version]
// --------------------------------

// UI.MapEditorCustomLogicPopup$$get_Title
// il2cpp: System_String_o* UI_MapEditorCustomLogicPopup__get_Title (UI_MapEditorCustomLogicPopup_o* __this, const MethodInfo* method);
// 0x41116b0

System_String_o *
UI_MapEditorCustomLogicPopup__get_Title(UI_MapEditorCustomLogicPopup_o *__this,MethodInfo *method)

{
  if (DAT_057048c5 == '\0') {
    il2cpp_init_method_metadata(&"Custom Logic");
    DAT_057048c5 = '\x01';
  }
  return "Custom Logic";
}


// UI.MapEditorCustomLogicPopup$$get_Width
// il2cpp: float UI_MapEditorCustomLogicPopup__get_Width (UI_MapEditorCustomLogicPopup_o* __this, const MethodInfo* method);
// 0x41116e0

float UI_MapEditorCustomLogicPopup__get_Width
                (UI_MapEditorCustomLogicPopup_o *__this,MethodInfo *method)

{
  return 500.0;
}


// UI.MapEditorCustomLogicPopup$$get_Height
// il2cpp: float UI_MapEditorCustomLogicPopup__get_Height (UI_MapEditorCustomLogicPopup_o* __this, const MethodInfo* method);
// 0x41116f0

float UI_MapEditorCustomLogicPopup__get_Height
                (UI_MapEditorCustomLogicPopup_o *__this,MethodInfo *method)

{
  return 585.0;
}


// UI.MapEditorCustomLogicPopup$$get_VerticalPadding
// il2cpp: int32_t UI_MapEditorCustomLogicPopup__get_VerticalPadding (UI_MapEditorCustomLogicPopup_o* __this, const MethodInfo* method);
// 0x4111700

int32_t UI_MapEditorCustomLogicPopup__get_VerticalPadding
                  (UI_MapEditorCustomLogicPopup_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.MapEditorCustomLogicPopup$$get_VerticalSpacing
// il2cpp: float UI_MapEditorCustomLogicPopup__get_VerticalSpacing (UI_MapEditorCustomLogicPopup_o* __this, const MethodInfo* method);
// 0x4111710

float UI_MapEditorCustomLogicPopup__get_VerticalSpacing
                (UI_MapEditorCustomLogicPopup_o *__this,MethodInfo *method)

{
  return 10.0;
}


// UI.MapEditorCustomLogicPopup$$Setup
// il2cpp: void UI_MapEditorCustomLogicPopup__Setup (UI_MapEditorCustomLogicPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x4111720

void UI_MapEditorCustomLogicPopup__Setup
               (UI_MapEditorCustomLogicPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  Il2CppMethodPointer vtable_dispatch;
  int32_t fontSize;
  System_String_o *pSVar2;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar3;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_UI_Text_o *pUVar4;
  undefined8 extraout_RDX;
  
  if (DAT_057048c6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__14_0);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__14_1);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"Cancel");
    il2cpp_init_method_metadata(&"Save");
    il2cpp_init_method_metadata(&"");
    DAT_057048c6 = '\x01';
  }
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,(MethodInfo *)0x0);
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar2 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,130.0,20.0,pSVar2,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = UI_UIManager__GetLocaleCommon("Save",(MethodInfo *)0x0);
  pUVar3 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar2,0.0,pUVar3,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  pSVar2 = UI_UIManager__GetLocaleCommon("Cancel",(MethodInfo *)0x0);
  pUVar3 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar2,0.0,pUVar3,(MethodInfo *)0x0);
  __this_01 = UI_ElementFactory__CreateDefaultLabel
                        ((__this->fields).SinglePanel,__this_00,"",0,4,(MethodInfo *)0x0);
  if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
    pUVar4 = (UnityEngine_UI_Text_o *)
             UnityEngine_GameObject__GetComponent<object>(__this_01,MethodInfo_Text_GetComponent_Text);
    (__this->fields)._error = pUVar4;
    il2cpp_runtime_glue(&(__this->fields)._error,pUVar4);
    pUVar4 = (__this->fields)._error;
    if (pUVar4 != (UnityEngine_UI_Text_o *)0x0) {
      vtable_dispatch = (pUVar4->klass->vtable)._23_set_color.methodPtr;
      (*vtable_dispatch)
                (0x3f800000,0,pUVar4,(pUVar4->klass->vtable)._23_set_color.method,extraout_RDX,
                 vtable_dispatch);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorCustomLogicPopup$$Show
// il2cpp: void UI_MapEditorCustomLogicPopup__Show (UI_MapEditorCustomLogicPopup_o* __this, const MethodInfo* method);
// 0x4111970

void UI_MapEditorCustomLogicPopup__Show(UI_MapEditorCustomLogicPopup_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o **ppUVar1;
  byte bVar2;
  GameManagers_MapEditorGameManager_o *pGVar3;
  UnityEngine_Object_o *pUVar4;
  Map_MapScript_o *pMVar5;
  Settings_StringSetting_o *__this_00;
  UnityEngine_UI_Text_o *pUVar6;
  Il2CppMethodPointer vtable_dispatch;
  Il2CppClass *pIVar7;
  bool_conflict bVar8;
  int32_t fontSize;
  System_String_o *themePanel;
  UI_ElementStyle_o *__this_01;
  UnityEngine_GameObject_o *pUVar9;
  
  if (DAT_057048c7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&TypeInfo_MapEditorGameManager);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&"");
    DAT_057048c7 = '\x01';
  }
  pIVar7 = TypeInfo_MapEditorGameManager;
  pGVar3 = *(GameManagers_MapEditorGameManager_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (pGVar3 == (GameManagers_MapEditorGameManager_o *)0x0) {
    (__this->fields)._gameManager = (GameManagers_MapEditorGameManager_o *)0x0;
LAB_04111a66:
    il2cpp_runtime_glue(&(__this->fields)._gameManager);
    pUVar4 = (UnityEngine_Object_o *)(__this->fields)._logicInput;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    ppUVar1 = &(__this->fields)._logicInput;
    bVar8 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      pUVar4 = (UnityEngine_Object_o *)*ppUVar1;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UnityEngine_Object__Destroy(pUVar4,(MethodInfo *)0x0);
    }
    fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                         (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
    themePanel = (System_String_o *)
                 (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                           (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    __this_01 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
    UI_ElementStyle___ctor(__this_01,fontSize,130.0,20.0,themePanel,(MethodInfo *)0x0);
    UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
    pGVar3 = (__this->fields)._gameManager;
    if (((pGVar3 != (GameManagers_MapEditorGameManager_o *)0x0) &&
        (pMVar5 = (pGVar3->fields).MapScript, pMVar5 != (Map_MapScript_o *)0x0)) &&
       (__this_00 = (__this->fields)._logic, __this_00 != (Settings_StringSetting_o *)0x0)) {
      Settings_TypedSetting<object>__set_Value
                ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)(pMVar5->fields).Logic,
                 MethodInfo_Void_set_Value);
      pUVar9 = UI_ElementFactory__CreateInputSetting
                         ((__this->fields).SinglePanel,__this_01,
                          (Settings_BaseSetting_o *)(__this->fields)._logic,"",
                          "",450.0,400.0,1,(UnityEngine_Events_UnityAction_o *)0x0,
                          (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0
                          ,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
      (__this->fields)._logicInput = pUVar9;
      il2cpp_runtime_glue(ppUVar1,pUVar9);
      pUVar6 = (__this->fields)._error;
      if (pUVar6 != (UnityEngine_UI_Text_o *)0x0) {
        vtable_dispatch = (pUVar6->klass->vtable)._75_set_text.methodPtr;
        (*vtable_dispatch)
                  (pUVar6,"",(pUVar6->klass->vtable)._75_set_text.method,
                   vtable_dispatch);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  bVar2 = (TypeInfo_MapEditorGameManager->_2).naturalAligment;
  if ((bVar2 <= (pGVar3->klass->_2).naturalAligment) &&
     ((pGVar3->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_MapEditorGameManager)) {
    (__this->fields)._gameManager = pGVar3;
    if ((bVar2 <= (pGVar3->klass->_2).naturalAligment) &&
       ((pGVar3->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == pIVar7)) goto LAB_04111a66;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_unwind_resume(pGVar3,pIVar7);
}


// UI.MapEditorCustomLogicPopup$$OnButtonClick
// il2cpp: void UI_MapEditorCustomLogicPopup__OnButtonClick (UI_MapEditorCustomLogicPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x4111c10

void UI_MapEditorCustomLogicPopup__OnButtonClick
               (UI_MapEditorCustomLogicPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  UnityEngine_GameObject_o **ppUVar1;
  Settings_StringSetting_o *pSVar2;
  UnityEngine_UI_Text_o *pUVar3;
  UnityEngine_Object_o *pUVar4;
  GameManagers_MapEditorGameManager_o *pGVar5;
  Map_MapScript_o *pMVar6;
  long *plVar7;
  bool_conflict bVar8;
  int32_t fontSize;
  System_String_o *pSVar9;
  UI_ElementStyle_o *__this_00;
  UnityEngine_GameObject_o *pUVar10;
  CustomLogic_CustomLogicEvaluator_o *pCVar11;
  
  if (DAT_057048c8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&TypeInfo_MapEditorMenu);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"Cancel");
    il2cpp_init_method_metadata(&"Save");
    il2cpp_init_method_metadata(&"");
    DAT_057048c8 = '\x01';
  }
  bVar8 = System_String__op_Equality(name,"Cancel",(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
LAB_04111cb8:
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
    return;
  }
  bVar8 = System_String__op_Equality(name,"Save",(MethodInfo *)0x0);
  pSVar9 = "";
  if ((char)bVar8 == '\0') {
    return;
  }
  pSVar2 = (__this->fields)._logic;
  if (pSVar2 != (Settings_StringSetting_o *)0x0) {
    bVar8 = System_String__op_Inequality
                      ((pSVar2->fields)._value,
                       (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      pSVar2 = (__this->fields)._logic;
      if (pSVar2 == (Settings_StringSetting_o *)0x0) goto LAB_04111fe4;
      pSVar9 = (pSVar2->fields)._value;
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar9 = CustomLogic_CustomLogicManager__TryParseLogic(pSVar9,(MethodInfo *)0x0);
    }
    bVar8 = System_String__op_Inequality
                      (pSVar9,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                       (MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      pGVar5 = (__this->fields)._gameManager;
      if (((pGVar5 != (GameManagers_MapEditorGameManager_o *)0x0) &&
          (pSVar2 = (__this->fields)._logic, pSVar2 != (Settings_StringSetting_o *)0x0)) &&
         (pMVar6 = (pGVar5->fields).MapScript, pMVar6 != (Map_MapScript_o *)0x0)) {
        (pMVar6->fields).Logic = (pSVar2->fields)._value;
        il2cpp_runtime_glue(&(pMVar6->fields).Logic);
        pSVar2 = (__this->fields)._logic;
        if (pSVar2 != (Settings_StringSetting_o *)0x0) {
          pGVar5 = (__this->fields)._gameManager;
          pSVar9 = (pSVar2->fields)._value;
          if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pCVar11 = CustomLogic_CustomLogicManager__GetEditorEvaluator(pSVar9,1,(MethodInfo *)0x0);
          if (pGVar5 != (GameManagers_MapEditorGameManager_o *)0x0) {
            (pGVar5->fields).LogicEvaluator = pCVar11;
            il2cpp_runtime_glue(&(pGVar5->fields).LogicEvaluator,pCVar11);
            if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
              il2cpp_init_class();
            }
            plVar7 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
            if (plVar7 != (long *)0x0) {
              if ((*(byte *)(*plVar7 + 0x130) < *(byte *)&TypeInfo_MapEditorMenu[3].return_type) ||
                 (*(MethodInfo **)
                   (*(long *)(*plVar7 + 200) + -8 + (ulong)*(byte *)&TypeInfo_MapEditorMenu[3].return_type * 8
                   ) != TypeInfo_MapEditorMenu)) {
                    /* WARNING: Subroutine does not return */
                il2cpp_unwind_resume();
              }
              if ((UI_MapEditorTopPanel_o *)plVar7[0x16] != (UI_MapEditorTopPanel_o *)0x0) {
                UI_MapEditorTopPanel__Save((UI_MapEditorTopPanel_o *)plVar7[0x16],TypeInfo_MapEditorMenu);
                goto LAB_04111cb8;
              }
            }
          }
        }
      }
    }
    else {
      pUVar3 = (__this->fields)._error;
      if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
        (*(pUVar3->klass->vtable)._75_set_text.methodPtr)
                  (pUVar3,pSVar9,(pUVar3->klass->vtable)._75_set_text.method);
        pUVar4 = (UnityEngine_Object_o *)(__this->fields)._logicInput;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        ppUVar1 = &(__this->fields)._logicInput;
        bVar8 = UnityEngine_Object__op_Inequality
                          (pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar8 != '\0') {
          pUVar4 = (UnityEngine_Object_o *)*ppUVar1;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          UnityEngine_Object__Destroy(pUVar4,(MethodInfo *)0x0);
        }
        fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                             (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
        pSVar9 = (System_String_o *)
                 (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                           (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
        __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
        UI_ElementStyle___ctor(__this_00,fontSize,130.0,20.0,pSVar9,(MethodInfo *)0x0);
        pUVar10 = UI_ElementFactory__CreateInputSetting
                            ((__this->fields).SinglePanel,__this_00,
                             (Settings_BaseSetting_o *)(__this->fields)._logic,"",
                             "",450.0,400.0,1,(UnityEngine_Events_UnityAction_o *)0x0,
                             (UnityEngine_Events_UnityAction_o *)0x0,
                             (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0
                             ,(MethodInfo *)0x0);
        (__this->fields)._logicInput = pUVar10;
        il2cpp_runtime_glue(ppUVar1,pUVar10);
        return;
      }
    }
  }
LAB_04111fe4:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorCustomLogicPopup$$.ctor
// il2cpp: void UI_MapEditorCustomLogicPopup___ctor (UI_MapEditorCustomLogicPopup_o* __this, const MethodInfo* method);
// 0x4111ff0

void UI_MapEditorCustomLogicPopup___ctor(UI_MapEditorCustomLogicPopup_o *__this,MethodInfo *method)

{
  System_String_o *defaultValue;
  Settings_StringSetting_o *__this_00;
  
  if (DAT_057048c9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_StringSetting);
    DAT_057048c9 = '\x01';
  }
  defaultValue = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  __this_00 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(__this_00,defaultValue,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields)._logic = __this_00;
  il2cpp_runtime_glue(&(__this->fields)._logic);
  UI_PromptPopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorCustomLogicPopup$$<Setup>b__14_0
// il2cpp: void UI_MapEditorCustomLogicPopup___Setup_b__14_0 (UI_MapEditorCustomLogicPopup_o* __this, const MethodInfo* method);
// 0x4112080

void UI_MapEditorCustomLogicPopup__<Setup>b__14_0
               (UI_MapEditorCustomLogicPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_057048ca == '\0') {
    il2cpp_init_method_metadata(&"Save");
    DAT_057048ca = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_MapEditorCustomLogicPopup__OnButtonClick(__this,"Save",in_RDX);
  return;
}


// UI.MapEditorCustomLogicPopup$$<Setup>b__14_1
// il2cpp: void UI_MapEditorCustomLogicPopup___Setup_b__14_1 (UI_MapEditorCustomLogicPopup_o* __this, const MethodInfo* method);
// 0x41120c0

void UI_MapEditorCustomLogicPopup__<Setup>b__14_1
               (UI_MapEditorCustomLogicPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_057048cb == '\0') {
    il2cpp_init_method_metadata(&"Cancel");
    DAT_057048cb = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_MapEditorCustomLogicPopup__OnButtonClick(__this,"Cancel",in_RDX);
  return;
}


