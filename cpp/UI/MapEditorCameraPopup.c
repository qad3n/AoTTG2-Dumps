// Type: UI.MapEditorCameraPopup
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/MapEditorCameraPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorCameraPopup.cs
// --------------------------------

// UI.MapEditorCameraPopup$$get_Title
// il2cpp: System_String_o* UI_MapEditorCameraPopup__get_Title (UI_MapEditorCameraPopup_o* __this, const MethodInfo* method);
// 0x1822a9630

System_String_o * UI_MapEditorCameraPopup__get_Title(UI_MapEditorCameraPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843474df == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Camera");
    Il2CppMethodInitialized_1843474df = '\x01';
  }
  return "Camera";
}


// UI.MapEditorCameraPopup$$get_Width
// il2cpp: float UI_MapEditorCameraPopup__get_Width (UI_MapEditorCameraPopup_o* __this, const MethodInfo* method);
// 0x1822a9660

float UI_MapEditorCameraPopup__get_Width(UI_MapEditorCameraPopup_o *__this,MethodInfo *method)

{
  return 645.0;
}


// UI.MapEditorCameraPopup$$get_Height
// il2cpp: float UI_MapEditorCameraPopup__get_Height (UI_MapEditorCameraPopup_o* __this, const MethodInfo* method);
// 0x1821dc6c0

float UI_MapEditorCameraPopup__get_Height(UI_MapEditorCameraPopup_o *__this,MethodInfo *method)

{
  return 310.0;
}


// UI.MapEditorCameraPopup$$get_VerticalPadding
// il2cpp: int32_t UI_MapEditorCameraPopup__get_VerticalPadding (UI_MapEditorCameraPopup_o* __this, const MethodInfo* method);
// 0x180847040

int32_t
UI_MapEditorCameraPopup__get_VerticalPadding(UI_MapEditorCameraPopup_o* __this, MethodInfo* method)

{
  return 0x14;
}


// UI.MapEditorCameraPopup$$get_VerticalSpacing
// il2cpp: float UI_MapEditorCameraPopup__get_VerticalSpacing (UI_MapEditorCameraPopup_o* __this, const MethodInfo* method);
// 0x182168bc0

float
UI_MapEditorCameraPopup__get_VerticalSpacing(UI_MapEditorCameraPopup_o* __this, MethodInfo* method)

{
  return 20.0;
}


// UI.MapEditorCameraPopup$$get_DoublePanel
// il2cpp: bool UI_MapEditorCameraPopup__get_DoublePanel (UI_MapEditorCameraPopup_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
UI_MapEditorCameraPopup__get_DoublePanel(UI_MapEditorCameraPopup_o* __this, MethodInfo* method)

{
  return true;
}


// UI.MapEditorCameraPopup$$Setup
// il2cpp: void UI_MapEditorCameraPopup__Setup (UI_MapEditorCameraPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x1822a8870

void UI_MapEditorCameraPopup__Setup
               (UI_MapEditorCameraPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_Transform_o *pUVar3;
  System_Collections_Generic_List_InputSettingElement__o *pSVar4;
  UI_InputSettingElement_array *pUVar5;
  MethodInfo *pMVar6;
  int32_t fontSize;
  System_String_o *pSVar7;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar8;
  UnityEngine_GameObject_o *pUVar9;
  UI_InputSettingElement_o *pUVar10;
  
  if (Il2CppMethodInitialized_1843474e0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_InputSettingElement);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_InputSettingElement_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorCameraPopup_Setup_b__19_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorCameraPopup_Setup_b__19_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Rotation Z");
    il2cpp_codegen_initialize_runtime_metadata(&"Rotation Y");
    il2cpp_codegen_initialize_runtime_metadata(&"Position X");
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    il2cpp_codegen_initialize_runtime_metadata(&"Position Z");
    il2cpp_codegen_initialize_runtime_metadata(&"Position Y");
    il2cpp_codegen_initialize_runtime_metadata(&"Rotation X");
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_1843474e0 = '\x01';
  }
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,(MethodInfo *)0x0);
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar7 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,100.0,20.0,pSVar7,(MethodInfo *)0x0);
  pUVar3 = (__this->fields).BottomBar;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar7 = UI_UIManager__GetLocaleCommon("Save",(MethodInfo *)0x0);
  pUVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar8,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_MapEditorCameraPopup_Setup_b__19_0,(MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(pUVar3,__this_00,pSVar7,0.0,pUVar8,(MethodInfo *)0x0);
  pUVar3 = (__this->fields).BottomBar;
  pSVar7 = UI_UIManager__GetLocaleCommon("Cancel",(MethodInfo *)0x0);
  pUVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar8,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_MapEditorCameraPopup_Setup_b__19_1,(MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(pUVar3,__this_00,pSVar7,0.0,pUVar8,(MethodInfo *)0x0);
  pSVar4 = (__this->fields)._inputs;
  pUVar9 = UI_ElementFactory__CreateInputSetting
                     ((__this->fields).DoublePanelLeft,__this_00,
                      (Settings_BaseSetting_o *)(__this->fields)._positionX,"Position X",
                      "",120.0,40.0,false,(UnityEngine_Events_UnityAction_o *)0x0,
                      (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                      (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
  if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
    pUVar10 = UnityEngine_GameObject__GetComponent_object_
                        (pUVar9,(MethodInfo_6F5650 *)
                                MethodInfo_UnityEngine_GameObject_GetComponent_InputSettingElement);
    pMVar6 = MethodInfo_System_Collections_Generic_List_InputSettingElement_Add;
    if (pSVar4 == (System_Collections_Generic_List_InputSettingElement__o *)0x0) goto label_1822a8fd7;
    piVar1 = &(pSVar4->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar5 = (pSVar4->fields)._items;
    if (pUVar5 == (UI_InputSettingElement_array *)0x0) goto label_1822a8fd7;
    uVar2 = (pSVar4->fields)._size;
    if (uVar2 < (uint)pUVar5->max_length) {
      (pSVar4->fields)._size = uVar2 + 1;
      if ((uint)pUVar5->max_length <= uVar2) goto label_1822a8fdd;
      pUVar5->m_Items[(int)uVar2] = pUVar10;
      Il2CppCodeGenWriteBarrier(pUVar5->m_Items + (int)uVar2,pUVar10);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)pUVar10,
                 (MethodInfo_93DD50 *)pMVar6->klass->rgctx_data[0xe].method);
    }
    pSVar4 = (__this->fields)._inputs;
    pUVar9 = UI_ElementFactory__CreateInputSetting
                       ((__this->fields).DoublePanelLeft,__this_00,
                        (Settings_BaseSetting_o *)(__this->fields)._positionY,"Position Y",
                        "",120.0,40.0,false,(UnityEngine_Events_UnityAction_o *)0x0,
                        (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                        (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
    if (pUVar9 == (UnityEngine_GameObject_o *)0x0) goto label_1822a8fd7;
    pUVar10 = UnityEngine_GameObject__GetComponent_object_
                        (pUVar9,(MethodInfo_6F5650 *)
                                MethodInfo_UnityEngine_GameObject_GetComponent_InputSettingElement);
    pMVar6 = MethodInfo_System_Collections_Generic_List_InputSettingElement_Add;
    if (pSVar4 == (System_Collections_Generic_List_InputSettingElement__o *)0x0) goto label_1822a8fd7;
    piVar1 = &(pSVar4->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar5 = (pSVar4->fields)._items;
    if (pUVar5 == (UI_InputSettingElement_array *)0x0) goto label_1822a8fd7;
    uVar2 = (pSVar4->fields)._size;
    if (uVar2 < (uint)pUVar5->max_length) {
      (pSVar4->fields)._size = uVar2 + 1;
      if ((uint)pUVar5->max_length <= uVar2) goto label_1822a8fdd;
      pUVar5->m_Items[(int)uVar2] = pUVar10;
      Il2CppCodeGenWriteBarrier(pUVar5->m_Items + (int)uVar2,pUVar10);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)pUVar10,
                 (MethodInfo_93DD50 *)pMVar6->klass->rgctx_data[0xe].method);
    }
    pSVar4 = (__this->fields)._inputs;
    pUVar9 = UI_ElementFactory__CreateInputSetting
                       ((__this->fields).DoublePanelLeft,__this_00,
                        (Settings_BaseSetting_o *)(__this->fields)._positionZ,"Position Z",
                        "",120.0,40.0,false,(UnityEngine_Events_UnityAction_o *)0x0,
                        (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                        (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
    if (pUVar9 == (UnityEngine_GameObject_o *)0x0) goto label_1822a8fd7;
    pUVar10 = UnityEngine_GameObject__GetComponent_object_
                        (pUVar9,(MethodInfo_6F5650 *)
                                MethodInfo_UnityEngine_GameObject_GetComponent_InputSettingElement);
    pMVar6 = MethodInfo_System_Collections_Generic_List_InputSettingElement_Add;
    if (pSVar4 == (System_Collections_Generic_List_InputSettingElement__o *)0x0) goto label_1822a8fd7;
    piVar1 = &(pSVar4->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar5 = (pSVar4->fields)._items;
    if (pUVar5 == (UI_InputSettingElement_array *)0x0) goto label_1822a8fd7;
    uVar2 = (pSVar4->fields)._size;
    if (uVar2 < (uint)pUVar5->max_length) {
      (pSVar4->fields)._size = uVar2 + 1;
      if ((uint)pUVar5->max_length <= uVar2) goto label_1822a8fdd;
      pUVar5->m_Items[(int)uVar2] = pUVar10;
      Il2CppCodeGenWriteBarrier(pUVar5->m_Items + (int)uVar2,pUVar10);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)pUVar10,
                 (MethodInfo_93DD50 *)pMVar6->klass->rgctx_data[0xe].method);
    }
    pSVar4 = (__this->fields)._inputs;
    pUVar9 = UI_ElementFactory__CreateInputSetting
                       ((__this->fields).DoublePanelRight,__this_00,
                        (Settings_BaseSetting_o *)(__this->fields)._rotationX,"Rotation X",
                        "",120.0,40.0,false,(UnityEngine_Events_UnityAction_o *)0x0,
                        (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                        (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
    if (pUVar9 == (UnityEngine_GameObject_o *)0x0) goto label_1822a8fd7;
    pUVar10 = UnityEngine_GameObject__GetComponent_object_
                        (pUVar9,(MethodInfo_6F5650 *)
                                MethodInfo_UnityEngine_GameObject_GetComponent_InputSettingElement);
    pMVar6 = MethodInfo_System_Collections_Generic_List_InputSettingElement_Add;
    if (pSVar4 == (System_Collections_Generic_List_InputSettingElement__o *)0x0) goto label_1822a8fd7;
    piVar1 = &(pSVar4->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar5 = (pSVar4->fields)._items;
    if (pUVar5 == (UI_InputSettingElement_array *)0x0) goto label_1822a8fd7;
    uVar2 = (pSVar4->fields)._size;
    if (uVar2 < (uint)pUVar5->max_length) {
      (pSVar4->fields)._size = uVar2 + 1;
      if ((uint)pUVar5->max_length <= uVar2) goto label_1822a8fdd;
      pUVar5->m_Items[(int)uVar2] = pUVar10;
      Il2CppCodeGenWriteBarrier(pUVar5->m_Items + (int)uVar2,pUVar10);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)pUVar10,
                 (MethodInfo_93DD50 *)pMVar6->klass->rgctx_data[0xe].method);
    }
    pSVar4 = (__this->fields)._inputs;
    pUVar9 = UI_ElementFactory__CreateInputSetting
                       ((__this->fields).DoublePanelRight,__this_00,
                        (Settings_BaseSetting_o *)(__this->fields)._rotationY,"Rotation Y",
                        "",120.0,40.0,false,(UnityEngine_Events_UnityAction_o *)0x0,
                        (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                        (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
    if (pUVar9 == (UnityEngine_GameObject_o *)0x0) goto label_1822a8fd7;
    pUVar10 = UnityEngine_GameObject__GetComponent_object_
                        (pUVar9,(MethodInfo_6F5650 *)
                                MethodInfo_UnityEngine_GameObject_GetComponent_InputSettingElement);
    pMVar6 = MethodInfo_System_Collections_Generic_List_InputSettingElement_Add;
    if (pSVar4 == (System_Collections_Generic_List_InputSettingElement__o *)0x0) goto label_1822a8fd7;
    piVar1 = &(pSVar4->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar5 = (pSVar4->fields)._items;
    if (pUVar5 == (UI_InputSettingElement_array *)0x0) goto label_1822a8fd7;
    uVar2 = (pSVar4->fields)._size;
    if (uVar2 < (uint)pUVar5->max_length) {
      (pSVar4->fields)._size = uVar2 + 1;
      if ((uint)pUVar5->max_length <= uVar2) goto label_1822a8fdd;
      pUVar5->m_Items[(int)uVar2] = pUVar10;
      Il2CppCodeGenWriteBarrier(pUVar5->m_Items + (int)uVar2,pUVar10);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)pUVar10,
                 (MethodInfo_93DD50 *)pMVar6->klass->rgctx_data[0xe].method);
    }
    pSVar4 = (__this->fields)._inputs;
    pUVar9 = UI_ElementFactory__CreateInputSetting
                       ((__this->fields).DoublePanelRight,__this_00,
                        (Settings_BaseSetting_o *)(__this->fields)._rotationZ,"Rotation Z",
                        "",120.0,40.0,false,(UnityEngine_Events_UnityAction_o *)0x0,
                        (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                        (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
    if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
      pUVar10 = UnityEngine_GameObject__GetComponent_object_
                          (pUVar9,(MethodInfo_6F5650 *)
                                  MethodInfo_UnityEngine_GameObject_GetComponent_InputSettingElement);
      pMVar6 = MethodInfo_System_Collections_Generic_List_InputSettingElement_Add;
      if (pSVar4 != (System_Collections_Generic_List_InputSettingElement__o *)0x0) {
        piVar1 = &(pSVar4->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar5 = (pSVar4->fields)._items;
        if (pUVar5 != (UI_InputSettingElement_array *)0x0) {
          uVar2 = (pSVar4->fields)._size;
          if (uVar2 < (uint)pUVar5->max_length) {
            (pSVar4->fields)._size = uVar2 + 1;
            if ((uint)pUVar5->max_length <= uVar2) {
label_1822a8fdd:
              ThrowIndexOutOfRangeException();
            }
            pUVar5->m_Items[(int)uVar2] = pUVar10;
            Il2CppCodeGenWriteBarrier(pUVar5->m_Items + (int)uVar2,pUVar10);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)pUVar10,
                       (MethodInfo_93DD50 *)pMVar6->klass->rgctx_data[0xe].method);
          }
          return;
        }
      }
    }
  }
label_1822a8fd7:
  ThrowNullReferenceException();
}


// UI.MapEditorCameraPopup$$Show
// il2cpp: void UI_MapEditorCameraPopup__Show (UI_MapEditorCameraPopup_o* __this, const MethodInfo* method);
// 0x1822a8ff0
// eh: try 0x1822a9370..0x1822a93ed -> pad 0x183317870 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822a93b2: mov rdx, qword ptr [rip + 0x1dde4af]  ; MethodInfo_System_Collections_Generic_List_Enumerator_InputSettingElement_Dispose
// asm:   0x1822a93b9: mov rcx, qword ptr [rsp + 0x48]
// asm:   0x1822a93be: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1822a93c3: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x1822a93c8: test rcx, rcx
// asm:   0x1822a93cb: jne 0x1822a93ed
// asm:   0x1822a93ed: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183317870: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317875: push rbp
// asm:   0x183317876: sub rsp, 0x20
// asm:   0x18331787a: mov rbp, rdx
// asm:   0x18331787d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183317881: mov rcx, qword ptr [rax]
// asm:   0x183317884: mov qword ptr [rbp + 0x40], rcx
// asm:   0x183317888: movabs rax, 0
// asm:   0x183317892: add rsp, 0x20
// asm:   0x183317896: pop rbp
// asm:   0x183317897: ret 

void UI_MapEditorCameraPopup__Show(UI_MapEditorCameraPopup_o *__this,MethodInfo *method)

{
  Cameras_BaseCamera_o *pCVar1;
  Utility_BaseComponentCache_o *pUVar2;
  UnityEngine_Transform_o *__this_00;
  Settings_FloatSetting_o *pSVar3;
  System_Collections_Generic_List_InputSettingElement__o *__this_01;
  bool bVar4;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_Vector3_o *pUVar5;
  UnityEngine_Quaternion_o *pUVar6;
  UnityEngine_Vector3_o local_68;
  undefined1 local_58 [16];
  Il2CppObject *local_48;
  UnityEngine_Quaternion_Fields local_40;
  System_Collections_Generic_List_Enumerator_object__o local_30;
  
  if (Il2CppMethodInitialized_1843474e1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_InputSettingElement_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_InputSettingElement_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_InputSettingElement_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_InputSettingElement_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_set_Value);
    Il2CppMethodInitialized_1843474e1 = '\x01';
  }
  local_40.x = 0.0;
  local_40.y = 0.0;
  local_40.z = 0.0;
  local_40.w = 0.0;
  local_30.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_30.fields._index = 0;
  local_30.fields._version = 0;
  local_30.fields._current = (Il2CppObject *)0x0;
  __this_02 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
    bVar4 = UnityEngine_GameObject__get_activeSelf(__this_02,(MethodInfo *)0x0);
    if (bVar4) {
      return;
    }
    UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
    pCVar1 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
    if (((pCVar1 != (Cameras_BaseCamera_o *)0x0) &&
        (pUVar2 = (pCVar1->fields).Cache, pUVar2 != (Utility_BaseComponentCache_o *)0x0)) &&
       (__this_00 = (pUVar2->fields).Transform, __this_00 != (UnityEngine_Transform_o *)0x0)) {
      pSVar3 = (__this->fields)._positionX;
      pUVar5 = UnityEngine_Transform__get_position(&local_68,__this_00,(MethodInfo *)0x0);
      if (pSVar3 != (Settings_FloatSetting_o *)0x0) {
        Settings_TypedSetting_float___set_Value
                  ((Settings_TypedSetting_float__o *)pSVar3,(pUVar5->fields).x,
                   (MethodInfo_E8F490 *)MethodInfo_Settings_TypedSetting_float_set_Value);
        pSVar3 = (__this->fields)._positionY;
        pUVar5 = UnityEngine_Transform__get_position(&local_68,__this_00,(MethodInfo *)0x0);
        if (pSVar3 != (Settings_FloatSetting_o *)0x0) {
          Settings_TypedSetting_float___set_Value
                    ((Settings_TypedSetting_float__o *)pSVar3,(pUVar5->fields).y,
                     (MethodInfo_E8F490 *)MethodInfo_Settings_TypedSetting_float_set_Value);
          pSVar3 = (__this->fields)._positionZ;
          pUVar5 = UnityEngine_Transform__get_position(&local_68,__this_00,(MethodInfo *)0x0);
          if (pSVar3 != (Settings_FloatSetting_o *)0x0) {
            Settings_TypedSetting_float___set_Value
                      ((Settings_TypedSetting_float__o *)pSVar3,(pUVar5->fields).z,
                       (MethodInfo_E8F490 *)MethodInfo_Settings_TypedSetting_float_set_Value);
            pSVar3 = (__this->fields)._rotationX;
            pUVar6 = UnityEngine_Transform__get_rotation
                               ((UnityEngine_Quaternion_o *)local_58,__this_00,(MethodInfo *)0x0);
            local_40.x = (pUVar6->fields).x;
            local_40.y = (pUVar6->fields).y;
            local_40.z = (pUVar6->fields).z;
            local_40.w = (pUVar6->fields).w;
            pUVar5 = UnityEngine_Quaternion__Internal_ToEulerRad
                               ((UnityEngine_Vector3_o *)local_58,(UnityEngine_Quaternion_o *)&local_40,
                                (MethodInfo *)0x0);
            local_68.fields.x = (pUVar5->fields).x * 57.29578;
            local_68.fields.y = (pUVar5->fields).y * 57.29578;
            local_68.fields.z = (pUVar5->fields).z * 57.29578;
            pUVar5 = UnityEngine_Quaternion__Internal_MakePositive
                               ((UnityEngine_Vector3_o *)local_58,&local_68,(MethodInfo *)0x0);
            if (pSVar3 != (Settings_FloatSetting_o *)0x0) {
              Settings_TypedSetting_float___set_Value
                        ((Settings_TypedSetting_float__o *)pSVar3,(pUVar5->fields).x,
                         (MethodInfo_E8F490 *)MethodInfo_Settings_TypedSetting_float_set_Value);
              pSVar3 = (__this->fields)._rotationY;
              pUVar6 = UnityEngine_Transform__get_rotation
                                 ((UnityEngine_Quaternion_o *)local_58,__this_00,(MethodInfo *)0x0);
              local_40.x = (pUVar6->fields).x;
              local_40.y = (pUVar6->fields).y;
              local_40.z = (pUVar6->fields).z;
              local_40.w = (pUVar6->fields).w;
              pUVar5 = UnityEngine_Quaternion__Internal_ToEulerRad
                                 ((UnityEngine_Vector3_o *)local_58,(UnityEngine_Quaternion_o *)&local_40,
                                  (MethodInfo *)0x0);
              local_68.fields.x = (pUVar5->fields).x * 57.29578;
              local_68.fields.y = (pUVar5->fields).y * 57.29578;
              local_68.fields.z = (pUVar5->fields).z * 57.29578;
              pUVar5 = UnityEngine_Quaternion__Internal_MakePositive
                                 ((UnityEngine_Vector3_o *)local_58,&local_68,(MethodInfo *)0x0);
              if (pSVar3 != (Settings_FloatSetting_o *)0x0) {
                Settings_TypedSetting_float___set_Value
                          ((Settings_TypedSetting_float__o *)pSVar3,(pUVar5->fields).y,
                           (MethodInfo_E8F490 *)MethodInfo_Settings_TypedSetting_float_set_Value);
                pSVar3 = (__this->fields)._rotationZ;
                pUVar6 = UnityEngine_Transform__get_rotation
                                   ((UnityEngine_Quaternion_o *)local_58,__this_00,(MethodInfo *)0x0);
                local_40.x = (pUVar6->fields).x;
                local_40.y = (pUVar6->fields).y;
                local_40.z = (pUVar6->fields).z;
                local_40.w = (pUVar6->fields).w;
                pUVar5 = UnityEngine_Quaternion__Internal_ToEulerRad
                                   ((UnityEngine_Vector3_o *)local_58,(UnityEngine_Quaternion_o *)&local_40,
                                    (MethodInfo *)0x0);
                local_68.fields.x = (pUVar5->fields).x * 57.29578;
                local_68.fields.y = (pUVar5->fields).y * 57.29578;
                local_68.fields.z = (pUVar5->fields).z * 57.29578;
                pUVar5 = UnityEngine_Quaternion__Internal_MakePositive
                                   ((UnityEngine_Vector3_o *)local_58,&local_68,(MethodInfo *)0x0);
                if (pSVar3 != (Settings_FloatSetting_o *)0x0) {
                  Settings_TypedSetting_float___set_Value
                            ((Settings_TypedSetting_float__o *)pSVar3,(pUVar5->fields).z,
                             (MethodInfo_E8F490 *)MethodInfo_Settings_TypedSetting_float_set_Value);
                  __this_01 = (__this->fields)._inputs;
                  if (__this_01 != (System_Collections_Generic_List_InputSettingElement__o *)0x0) {
                    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                              ((System_Collections_Generic_List_Enumerator_T__o *)local_58,
                               (System_Collections_Generic_List_T__o *)__this_01,
                               (MethodInfo_91F180 *)
                               MethodInfo_System_Collections_Generic_List_InputSettingElement_GetEnumerator);
                    local_30.fields._list = (System_Collections_Generic_List_T__o *)local_58._0_8_;
                    local_30.fields._index = local_58._8_4_;
                    local_30.fields._version = local_58._12_4_;
                    local_30.fields._current = local_48;
                    local_58._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
                    local_58._8_8_ = &local_30;
                    while( true ) {
                      bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                        (&local_30,
                                         (MethodInfo_153A2A0 *)
                                         MethodInfo_System_Collections_Generic_List_Enumerator_InputSettingElement_MoveNext
                                        );
                      if (!bVar4) {
                        System_Collections_Generic_List_Enumerator_object___Dispose
                                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_30,
                                   MethodInfo_System_Collections_Generic_List_Enumerator_InputSettingElement_Dispose
                                  );
                        return;
                      }
                      if (local_30.fields._current == (Il2CppObject *)0x0) break;
                      (*(local_30.fields._current)->klass->vtable[6].methodPtr)
                                (local_30.fields._current,(local_30.fields._current)->klass->vtable[6].method)
                      ;
                    }
                    ThrowNullReferenceException();
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorCameraPopup$$OnButtonClick
// il2cpp: void UI_MapEditorCameraPopup__OnButtonClick (UI_MapEditorCameraPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x1822a86a0

void UI_MapEditorCameraPopup__OnButtonClick
               (UI_MapEditorCameraPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  Cameras_BaseCamera_o *pCVar1;
  Utility_BaseComponentCache_o *pUVar2;
  Settings_FloatSetting_o *pSVar3;
  Settings_FloatSetting_o *pSVar4;
  Settings_FloatSetting_o *pSVar5;
  UnityEngine_Transform_o *__this_00;
  bool bVar6;
  UnityEngine_Quaternion_o *pUVar7;
  UnityEngine_Quaternion_Fields local_28;
  UnityEngine_Quaternion_o local_18;
  
  if (Il2CppMethodInitialized_1843474e2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    Il2CppMethodInitialized_1843474e2 = '\x01';
  }
  bVar6 = System_String__op_Equality(name,"Cancel",(MethodInfo *)0x0);
  if (bVar6) {
label_1822a8846:
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
    return;
  }
  bVar6 = System_String__op_Equality(name,"Save",(MethodInfo *)0x0);
  if (!bVar6) {
    return;
  }
  pCVar1 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  if (((((pCVar1 != (Cameras_BaseCamera_o *)0x0) &&
        (pUVar2 = (pCVar1->fields).Cache, pUVar2 != (Utility_BaseComponentCache_o *)0x0)) &&
       (pSVar3 = (__this->fields)._positionX, pSVar3 != (Settings_FloatSetting_o *)0x0)) &&
      ((pSVar4 = (__this->fields)._positionY, pSVar4 != (Settings_FloatSetting_o *)0x0 &&
       (pSVar5 = (__this->fields)._positionZ, pSVar5 != (Settings_FloatSetting_o *)0x0)))) &&
     (__this_00 = (pUVar2->fields).Transform, __this_00 != (UnityEngine_Transform_o *)0x0)) {
    local_28.z = (pSVar5->fields)._value;
    local_28.y = (pSVar4->fields)._value;
    local_28.x = (pSVar3->fields)._value;
    UnityEngine_Transform__set_position(__this_00,(UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
    pSVar3 = (__this->fields)._rotationX;
    if (((pSVar3 != (Settings_FloatSetting_o *)0x0) &&
        (pSVar4 = (__this->fields)._rotationY, pSVar4 != (Settings_FloatSetting_o *)0x0)) &&
       (pSVar5 = (__this->fields)._rotationZ, pSVar5 != (Settings_FloatSetting_o *)0x0)) {
      local_28.z = (pSVar5->fields)._value * 0.017453292;
      local_28.y = (pSVar4->fields)._value * 0.017453292;
      local_28.x = (pSVar3->fields)._value * 0.017453292;
      pUVar7 = UnityEngine_Quaternion__Internal_FromEulerRad
                         (&local_18,(UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
      local_28.x = (pUVar7->fields).x;
      local_28.y = (pUVar7->fields).y;
      local_28.z = (pUVar7->fields).z;
      local_28.w = (pUVar7->fields).w;
      UnityEngine_Transform__set_rotation(__this_00,(UnityEngine_Quaternion_o *)&local_28,(MethodInfo *)0x0);
      goto label_1822a8846;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorCameraPopup$$.ctor
// il2cpp: void UI_MapEditorCameraPopup___ctor (UI_MapEditorCameraPopup_o* __this, const MethodInfo* method);
// 0x1822a9480

void UI_MapEditorCameraPopup___ctor(UI_MapEditorCameraPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_InputSettingElement__o *__this_00;
  Settings_FloatSetting_o *pSVar1;
  
  if (Il2CppMethodInitialized_1843474e3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_InputSettingElement_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_InputSettingElement);
    Il2CppMethodInitialized_1843474e3 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_InputSettingElement);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_InputSettingElement_ctor);
  (__this->fields)._inputs = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._inputs,__this_00);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor(pSVar1,(MethodInfo *)0x0);
  (__this->fields)._positionX = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._positionX,pSVar1);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor(pSVar1,(MethodInfo *)0x0);
  (__this->fields)._positionY = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._positionY,pSVar1);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor(pSVar1,(MethodInfo *)0x0);
  (__this->fields)._positionZ = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._positionZ,pSVar1);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor(pSVar1,(MethodInfo *)0x0);
  (__this->fields)._rotationX = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._rotationX,pSVar1);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor(pSVar1,(MethodInfo *)0x0);
  (__this->fields)._rotationY = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._rotationY,pSVar1);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor(pSVar1,(MethodInfo *)0x0);
  (__this->fields)._rotationZ = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._rotationZ,pSVar1);
  UI_PromptPopup___ctor((UI_ToolsPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorCameraPopup$$<Setup>b__19_0
// il2cpp: void UI_MapEditorCameraPopup___Setup_b__19_0 (UI_MapEditorCameraPopup_o* __this, const MethodInfo* method);
// 0x1822a9400

void UI_MapEditorCameraPopup___Setup_b__19_0(UI_MapEditorCameraPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843474e4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    Il2CppMethodInitialized_1843474e4 = '\x01';
  }
  UI_MapEditorCameraPopup__OnButtonClick(__this,"Save",(MethodInfo *)0x0);
  return;
}


// UI.MapEditorCameraPopup$$<Setup>b__19_1
// il2cpp: void UI_MapEditorCameraPopup___Setup_b__19_1 (UI_MapEditorCameraPopup_o* __this, const MethodInfo* method);
// 0x1822a9440

void UI_MapEditorCameraPopup___Setup_b__19_1(UI_MapEditorCameraPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843474e5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    Il2CppMethodInitialized_1843474e5 = '\x01';
  }
  UI_MapEditorCameraPopup__OnButtonClick(__this,"Cancel",(MethodInfo *)0x0);
  return;
}


