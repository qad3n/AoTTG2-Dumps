// Type: UI.Vector3Popup
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/Vector3Popup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/Vector3Popup.cs
// --------------------------------

// UI.Vector3Popup$$get_Title
// il2cpp: System_String_o* UI_Vector3Popup__get_Title (UI_Vector3Popup_o* __this, const MethodInfo* method);
// 0x1821e9100

System_String_o * UI_Vector3Popup__get_Title(UI_Vector3Popup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346f6a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Vector3");
    Il2CppMethodInitialized_184346f6a = '\x01';
  }
  return "Vector3";
}


// UI.Vector3Popup$$get_Width
// il2cpp: float UI_Vector3Popup__get_Width (UI_Vector3Popup_o* __this, const MethodInfo* method);
// 0x182182bd0

float
UI_Vector3Popup__get_Width(UI_Vector3Popup_o* __this, MethodInfo* method)

{
  return 250.0;
}


// UI.Vector3Popup$$get_Height
// il2cpp: float UI_Vector3Popup__get_Height (UI_Vector3Popup_o* __this, const MethodInfo* method);
// 0x1821d2010

float
UI_Vector3Popup__get_Height(UI_Vector3Popup_o* __this, MethodInfo* method)

{
  return 330.0;
}


// UI.Vector3Popup$$get_VerticalSpacing
// il2cpp: float UI_Vector3Popup__get_VerticalSpacing (UI_Vector3Popup_o* __this, const MethodInfo* method);
// 0x182168bc0

float
UI_Vector3Popup__get_VerticalSpacing(UI_Vector3Popup_o* __this, MethodInfo* method)

{
  return 20.0;
}


// UI.Vector3Popup$$get_PanelAlignment
// il2cpp: int32_t UI_Vector3Popup__get_PanelAlignment (UI_Vector3Popup_o* __this, const MethodInfo* method);
// 0x180564040

int32_t
UI_Vector3Popup__get_PanelAlignment(UI_Vector3Popup_o* __this, MethodInfo* method)

{
  return 1;
}


// UI.Vector3Popup$$Setup
// il2cpp: void UI_Vector3Popup__Setup (UI_Vector3Popup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x1821e8c20

void UI_Vector3Popup__Setup(UI_Vector3Popup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  int32_t fontSize;
  System_String_o *pSVar2;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar3;
  
  if (Il2CppMethodInitialized_184346f6b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_Vector3Popup_Setup_b__17_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_Vector3Popup_Setup_b__17_1);
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    Il2CppMethodInitialized_184346f6b = '\x01';
  }
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,(MethodInfo *)0x0);
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar2 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,120.0,20.0,pSVar2,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar2 = UI_UIManager__GetLocaleCommon("Save",(MethodInfo *)0x0);
  pUVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar3,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_Vector3Popup_Setup_b__17_0,(MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar2,0.0,pUVar3,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  pSVar2 = UI_UIManager__GetLocaleCommon("Cancel",(MethodInfo *)0x0);
  pUVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar3,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_Vector3Popup_Setup_b__17_1,(MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar2,0.0,pUVar3,(MethodInfo *)0x0);
  return;
}


// UI.Vector3Popup$$Show
// il2cpp: void UI_Vector3Popup__Show (UI_Vector3Popup_o* __this, Settings_Vector3Setting_o* setting, UnityEngine_UI_Text_o* text, UnityEngine_Events_UnityAction_o* onChangeVector, const MethodInfo* method);
// 0x1821e8de0

void UI_Vector3Popup__Show
               (UI_Vector3Popup_o *__this,Settings_Vector3Setting_o *setting,UnityEngine_UI_Text_o *text,
               UnityEngine_Events_UnityAction_o *onChangeVector,MethodInfo *method)

{
  Settings_FloatSetting_o *pSVar1;
  bool bVar2;
  UnityEngine_GameObject_o *__this_00;
  
  if (Il2CppMethodInitialized_184346f6c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Vector3_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_set_Value);
    Il2CppMethodInitialized_184346f6c = '\x01';
  }
  __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    bVar2 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
    if (bVar2) {
      return;
    }
    UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
    (__this->fields)._setting = setting;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._setting,setting);
    (__this->fields)._text = text;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._text,text);
    if ((setting != (Settings_Vector3Setting_o *)0x0) &&
       (pSVar1 = (__this->fields)._x, pSVar1 != (Settings_FloatSetting_o *)0x0)) {
      Settings_TypedSetting_float___set_Value
                ((Settings_TypedSetting_float__o *)pSVar1,(setting->fields)._value.fields.x,
                 (MethodInfo_E8F490 *)MethodInfo_Settings_TypedSetting_float_set_Value);
      pSVar1 = (__this->fields)._y;
      if (pSVar1 != (Settings_FloatSetting_o *)0x0) {
        Settings_TypedSetting_float___set_Value
                  ((Settings_TypedSetting_float__o *)pSVar1,(setting->fields)._value.fields.y,
                   (MethodInfo_E8F490 *)MethodInfo_Settings_TypedSetting_float_set_Value);
        pSVar1 = (__this->fields)._z;
        if (pSVar1 != (Settings_FloatSetting_o *)0x0) {
          Settings_TypedSetting_float___set_Value
                    ((Settings_TypedSetting_float__o *)pSVar1,(setting->fields)._value.fields.z,
                     (MethodInfo_E8F490 *)MethodInfo_Settings_TypedSetting_float_set_Value);
          (__this->fields)._onChangeVector = onChangeVector;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._onChangeVector,onChangeVector);
          UI_Vector3Popup__CreateInputs(__this,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.Vector3Popup$$CreateInputs
// il2cpp: void UI_Vector3Popup__CreateInputs (UI_Vector3Popup_o* __this, const MethodInfo* method);
// 0x1821e85d0
// eh: try 0x1821e8700..0x1821e8741 -> pad 0x18333c6d0 catch Il2CppExceptionWrapper
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821e8752: mov rdx, qword ptr [rip + 0x1e97d8f]  ; MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose
// asm:   0x1821e8759: mov rcx, qword ptr [rsp + 0x80]
// asm:   0x1821e8761: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821e8766: mov rcx, qword ptr [rsp + 0x78]
// asm:   0x1821e876b: test rcx, rcx
// asm:   0x1821e876e: jne 0x1821e8a3a
// asm:   0x1821e8774: xor edi, edi
// asm:   0x1821e8776: mov r14, qword ptr [rsp + 0x100]
// asm:   0x1821e8a3a: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18333c6d0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333c6d5: push rbp
// asm:   0x18333c6d6: sub rsp, 0x70
// asm:   0x18333c6da: mov rbp, rdx
// asm:   0x18333c6dd: mov rax, qword ptr [rbp + 0x70]
// asm:   0x18333c6e1: mov rcx, qword ptr [rax]
// asm:   0x18333c6e4: mov qword ptr [rbp + 0x78], rcx
// asm:   0x18333c6e8: movabs rax, 0
// asm:   0x18333c6f2: add rsp, 0x70
// asm:   0x18333c6f6: pop rbp
// asm:   0x18333c6f7: ret 

void UI_Vector3Popup__CreateInputs(UI_Vector3Popup_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_GameObject__o *pSVar3;
  UnityEngine_GameObject_array *pUVar4;
  MethodInfo *pMVar5;
  UnityEngine_Object_o *obj;
  bool bVar6;
  System_String_o *themePanel;
  UI_ElementStyle_o *__this_00;
  UnityEngine_GameObject_o *pUVar7;
  undefined1 local_80 [16];
  UnityEngine_Object_o *local_70;
  undefined1 local_68 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_60;
  UnityEngine_Object_o *local_58;
  
  if (Il2CppMethodInitialized_184346f6d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"Z");
    il2cpp_codegen_initialize_runtime_metadata(&"Y");
    il2cpp_codegen_initialize_runtime_metadata(&"X");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184346f6d = '\x01';
  }
  local_68 = (undefined1  [8])0x0;
  pUStack_60 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_58 = (UnityEngine_Object_o *)0x0;
  pSVar3 = (__this->fields)._inputs;
  if (pSVar3 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_80,
               (System_Collections_Generic_List_T__o *)pSVar3,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
    local_68 = (undefined1  [8])local_80._0_8_;
    pUStack_60 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_80._8_8_;
    local_58 = local_70;
    local_80._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_80._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_68;
    while( true ) {
      bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext);
      obj = local_58;
      if (!bVar6) break;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_2f1ff70(obj,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_68,
               MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
    themePanel = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                           (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
    UI_ElementStyle___ctor(__this_00,0x18,30.0,20.0,themePanel,(MethodInfo *)0x0);
    pSVar3 = (__this->fields)._inputs;
    pUVar7 = UI_ElementFactory__CreateInputSetting
                       ((__this->fields).SinglePanel,__this_00,(Settings_BaseSetting_o *)(__this->fields)._x,
                        "X","",140.0,40.0,false,
                        (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                        (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                        (MethodInfo *)0x0);
    pMVar5 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
    if (pSVar3 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_1821e8a34;
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar4 = (pSVar3->fields)._items;
    if (pUVar4 == (UnityEngine_GameObject_array *)0x0) goto label_1821e8a34;
    uVar2 = (pSVar3->fields)._size;
    if (uVar2 < (uint)pUVar4->max_length) {
      (pSVar3->fields)._size = uVar2 + 1;
      if ((uint)pUVar4->max_length <= uVar2) goto label_1821e8a40;
      pUVar4->m_Items[(int)uVar2] = pUVar7;
      Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2,pUVar7);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar7,
                 (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    pSVar3 = (__this->fields)._inputs;
    pUVar7 = UI_ElementFactory__CreateInputSetting
                       ((__this->fields).SinglePanel,__this_00,(Settings_BaseSetting_o *)(__this->fields)._y,
                        "Y","",140.0,40.0,false,
                        (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                        (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                        (MethodInfo *)0x0);
    pMVar5 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
    if (pSVar3 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_1821e8a34;
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar4 = (pSVar3->fields)._items;
    if (pUVar4 == (UnityEngine_GameObject_array *)0x0) goto label_1821e8a34;
    uVar2 = (pSVar3->fields)._size;
    if (uVar2 < (uint)pUVar4->max_length) {
      (pSVar3->fields)._size = uVar2 + 1;
      if ((uint)pUVar4->max_length <= uVar2) goto label_1821e8a40;
      pUVar4->m_Items[(int)uVar2] = pUVar7;
      Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2,pUVar7);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar7,
                 (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    pSVar3 = (__this->fields)._inputs;
    pUVar7 = UI_ElementFactory__CreateInputSetting
                       ((__this->fields).SinglePanel,__this_00,(Settings_BaseSetting_o *)(__this->fields)._z,
                        "Z","",140.0,40.0,false,
                        (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                        (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                        (MethodInfo *)0x0);
    pMVar5 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
    if (pSVar3 != (System_Collections_Generic_List_GameObject__o *)0x0) {
      piVar1 = &(pSVar3->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar4 = (pSVar3->fields)._items;
      if (pUVar4 != (UnityEngine_GameObject_array *)0x0) {
        uVar2 = (pSVar3->fields)._size;
        if (uVar2 < (uint)pUVar4->max_length) {
          (pSVar3->fields)._size = uVar2 + 1;
          if ((uint)pUVar4->max_length <= uVar2) {
label_1821e8a40:
            ThrowIndexOutOfRangeException();
          }
          pUVar4->m_Items[(int)uVar2] = pUVar7;
          Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2,pUVar7);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar7,
                     (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
        }
        return;
      }
    }
  }
label_1821e8a34:
  ThrowNullReferenceException();
}


// UI.Vector3Popup$$OnButtonClick
// il2cpp: void UI_Vector3Popup__OnButtonClick (UI_Vector3Popup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x1821e8a50

void UI_Vector3Popup__OnButtonClick(UI_Vector3Popup_o *__this,System_String_o *name,MethodInfo *method)

{
  undefined8 uVar1;
  float fVar2;
  Settings_FloatSetting_o *pSVar3;
  Settings_FloatSetting_o *pSVar4;
  Settings_FloatSetting_o *pSVar5;
  Settings_Vector3Setting_o *pSVar6;
  UnityEngine_UI_Text_o *pUVar7;
  UnityEngine_Events_UnityAction_o *pUVar8;
  bool bVar9;
  System_String_o *pSVar10;
  UnityEngine_Vector3_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184346f6e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Vector3_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Vector3_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    Il2CppMethodInitialized_184346f6e = '\x01';
  }
  bVar9 = System_String__op_Equality(name,"Cancel",(MethodInfo *)0x0);
  if (bVar9) {
label_1821e8bf5:
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
    return;
  }
  bVar9 = System_String__op_Equality(name,"Save",(MethodInfo *)0x0);
  if (!bVar9) {
    return;
  }
  pSVar3 = (__this->fields)._x;
  if ((((pSVar3 != (Settings_FloatSetting_o *)0x0) &&
       (pSVar4 = (__this->fields)._y, pSVar4 != (Settings_FloatSetting_o *)0x0)) &&
      (pSVar5 = (__this->fields)._z, pSVar5 != (Settings_FloatSetting_o *)0x0)) &&
     (pSVar6 = (__this->fields)._setting, pSVar6 != (Settings_Vector3Setting_o *)0x0)) {
    local_28[0].z = (pSVar5->fields)._value;
    local_28[0].y = (pSVar4->fields)._value;
    local_28[0].x = (pSVar3->fields)._value;
    Settings_TypedSetting_Vector3___set_Value
              ((Settings_TypedSetting_Vector3__o *)pSVar6,(UnityEngine_Vector3_o *)local_28,
               (MethodInfo_E8F4F0 *)MethodInfo_Settings_TypedSetting_Vector3_set_Value);
    pSVar6 = (__this->fields)._setting;
    if (pSVar6 != (Settings_Vector3Setting_o *)0x0) {
      pUVar7 = (__this->fields)._text;
      fVar2 = (pSVar6->fields)._value.fields.z;
      uVar1._0_4_ = (pSVar6->fields)._value.fields.x;
      uVar1._4_4_ = (pSVar6->fields)._value.fields.y;
      if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
      }
      local_28[0]._0_8_ = uVar1;
      local_28[0].z = fVar2;
      pSVar10 = MiscExtensions__ToDisplayString((UnityEngine_Vector3_o *)local_28,(MethodInfo *)0x0);
      if (pUVar7 != (UnityEngine_UI_Text_o *)0x0) {
        (*(pUVar7->klass->vtable)._75_set_text.methodPtr)
                  (pUVar7,pSVar10,(pUVar7->klass->vtable)._75_set_text.method);
        if ((__this->fields)._onChangeVector != (UnityEngine_Events_UnityAction_o *)0x0) {
          pUVar8 = (__this->fields)._onChangeVector;
          (*(code *)(pUVar8->fields).invoke_impl)((pUVar8->fields).method_code,(pUVar8->fields).method);
        }
        goto label_1821e8bf5;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.Vector3Popup$$.ctor
// il2cpp: void UI_Vector3Popup___ctor (UI_Vector3Popup_o* __this, const MethodInfo* method);
// 0x1821e8f90

void UI_Vector3Popup___ctor(UI_Vector3Popup_o *__this,MethodInfo *method)

{
  Settings_FloatSetting_o *pSVar1;
  System_Collections_Generic_List_GameObject__o *__this_00;
  
  if (Il2CppMethodInitialized_184346f6f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_GameObject);
    Il2CppMethodInitialized_184346f6f = '\x01';
  }
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor_1f12570(pSVar1,0.0,-3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
  (__this->fields)._x = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._x,pSVar1);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor_1f12570(pSVar1,0.0,-3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
  (__this->fields)._y = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._y,pSVar1);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor_1f12570(pSVar1,0.0,-3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
  (__this->fields)._z = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._z,pSVar1);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_GameObject_ctor);
  (__this->fields)._inputs = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._inputs,__this_00);
  UI_PromptPopup___ctor((UI_ToolsPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.Vector3Popup$$<Setup>b__17_0
// il2cpp: void UI_Vector3Popup___Setup_b__17_0 (UI_Vector3Popup_o* __this, const MethodInfo* method);
// 0x1821e8f10

void UI_Vector3Popup___Setup_b__17_0(UI_Vector3Popup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346f70 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    Il2CppMethodInitialized_184346f70 = '\x01';
  }
  UI_Vector3Popup__OnButtonClick(__this,"Save",(MethodInfo *)0x0);
  return;
}


// UI.Vector3Popup$$<Setup>b__17_1
// il2cpp: void UI_Vector3Popup___Setup_b__17_1 (UI_Vector3Popup_o* __this, const MethodInfo* method);
// 0x1821e8f50

void UI_Vector3Popup___Setup_b__17_1(UI_Vector3Popup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346f71 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    Il2CppMethodInitialized_184346f71 = '\x01';
  }
  UI_Vector3Popup__OnButtonClick(__this,"Cancel",(MethodInfo *)0x0);
  return;
}


