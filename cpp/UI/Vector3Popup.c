// Type: UI.Vector3Popup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/UI/Vector3Popup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/Vector3Popup.cs
// --------------------------------

// UI.Vector3Popup$$get_Title
// il2cpp: System_String_o* UI_Vector3Popup__get_Title (UI_Vector3Popup_o* __this, const MethodInfo* method);
// 0x5cc8a20

System_String_o * UI_Vector3Popup__get_Title(UI_Vector3Popup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07547b64 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Vector3");
    Il2CppMethodInitialized_07547b64 = '\x01';
  }
  return "Vector3";
}


// UI.Vector3Popup$$get_Width
// il2cpp: float UI_Vector3Popup__get_Width (UI_Vector3Popup_o* __this, const MethodInfo* method);
// 0x5cc8a50

float UI_Vector3Popup__get_Width(UI_Vector3Popup_o *__this,MethodInfo *method)

{
  return 250.0;
}


// UI.Vector3Popup$$get_Height
// il2cpp: float UI_Vector3Popup__get_Height (UI_Vector3Popup_o* __this, const MethodInfo* method);
// 0x5cc8a60

float UI_Vector3Popup__get_Height(UI_Vector3Popup_o *__this,MethodInfo *method)

{
  return 330.0;
}


// UI.Vector3Popup$$get_VerticalSpacing
// il2cpp: float UI_Vector3Popup__get_VerticalSpacing (UI_Vector3Popup_o* __this, const MethodInfo* method);
// 0x5cc8a70

float UI_Vector3Popup__get_VerticalSpacing(UI_Vector3Popup_o *__this,MethodInfo *method)

{
  return 20.0;
}


// UI.Vector3Popup$$get_PanelAlignment
// il2cpp: int32_t UI_Vector3Popup__get_PanelAlignment (UI_Vector3Popup_o* __this, const MethodInfo* method);
// 0x5cc8a80

int32_t UI_Vector3Popup__get_PanelAlignment(UI_Vector3Popup_o *__this,MethodInfo *method)

{
  return 1;
}


// UI.Vector3Popup$$Setup
// il2cpp: void UI_Vector3Popup__Setup (UI_Vector3Popup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x5cc8a90

void UI_Vector3Popup__Setup(UI_Vector3Popup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  int32_t fontSize;
  System_String_o *pSVar2;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar3;
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_07547b65 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_Vector3Popup_Setup_b__17_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_Vector3Popup_Setup_b__17_1);
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    Il2CppMethodInitialized_07547b65 = '\x01';
    method = extraout_RDX;
  }
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,method);
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
            (pUVar3,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_Vector3Popup_Setup_b__17_0,
             (MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar2,0.0,pUVar3,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  pSVar2 = UI_UIManager__GetLocaleCommon("Cancel",(MethodInfo *)0x0);
  pUVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (pUVar3,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_Vector3Popup_Setup_b__17_1,
             (MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar2,0.0,pUVar3,(MethodInfo *)0x0);
  return;
}


// UI.Vector3Popup$$Show
// il2cpp: void UI_Vector3Popup__Show (UI_Vector3Popup_o* __this, Settings_Vector3Setting_o* setting, UnityEngine_UI_Text_o* text, UnityEngine_Events_UnityAction_o* onChangeVector, const MethodInfo* method);
// 0x5cc8c40

void UI_Vector3Popup__Show
               (UI_Vector3Popup_o *__this,Settings_Vector3Setting_o *setting,UnityEngine_UI_Text_o *text,
               UnityEngine_Events_UnityAction_o *onChangeVector,MethodInfo *method)

{
  Settings_FloatSetting_o *pSVar1;
  bool bVar2;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547b66 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Vector3_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_set_Value);
    Il2CppMethodInitialized_07547b66 = '\x01';
  }
  __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    bVar2 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
    if (bVar2) {
      return;
    }
    UI_BasePopup__Show((UI_BasePopup_o *)__this,method_00);
    (__this->fields)._setting = setting;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._setting);
    (__this->fields)._text = text;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._text);
    if ((setting != (Settings_Vector3Setting_o *)0x0) &&
       (pSVar1 = (__this->fields)._x, pSVar1 != (Settings_FloatSetting_o *)0x0)) {
      Settings_TypedSetting_float___set_Value
                ((Settings_TypedSetting_float__o *)pSVar1,(setting->fields)._value.fields.x,
                 (MethodInfo_42DA3B0 *)MethodInfo_Settings_TypedSetting_float_set_Value);
      pSVar1 = (__this->fields)._y;
      if (pSVar1 != (Settings_FloatSetting_o *)0x0) {
        Settings_TypedSetting_float___set_Value
                  ((Settings_TypedSetting_float__o *)pSVar1,(setting->fields)._value.fields.y,
                   (MethodInfo_42DA3B0 *)MethodInfo_Settings_TypedSetting_float_set_Value);
        pSVar1 = (__this->fields)._z;
        if (pSVar1 != (Settings_FloatSetting_o *)0x0) {
          Settings_TypedSetting_float___set_Value
                    ((Settings_TypedSetting_float__o *)pSVar1,(setting->fields)._value.fields.z,
                     (MethodInfo_42DA3B0 *)MethodInfo_Settings_TypedSetting_float_set_Value);
          (__this->fields)._onChangeVector = onChangeVector;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._onChangeVector);
          UI_Vector3Popup__CreateInputs(__this,(MethodInfo *)onChangeVector);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.Vector3Popup$$CreateInputs
// il2cpp: void UI_Vector3Popup__CreateInputs (UI_Vector3Popup_o* __this, const MethodInfo* method);
// 0x5cc8d70
// eh: try 0x5cc8e90..0x5cc8ec1 -> pad 0x5cc9143 (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5cc915b..0x5cc9160 -> pad 0x5cc9185 cleanup
// eh: try 0x5cc9188..0x5cc9192 -> pad 0x5cc919a catch (...) [compiler noexcept guard]
// asm: 24 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cc9141: jmp 0x5cc9143
// asm:   0x5cc9143: mov rbx, rax
// asm:   0x5cc9146: cmp edx, 1
// asm:   0x5cc9149: jne 0x5cc9188
// asm:   0x5cc914b: mov rdi, rbx
// asm:   0x5cc914e: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5cc9153: mov rbx, qword ptr [rax]
// asm:   0x5cc9156: mov qword ptr [rsp + 0x48], rbx
// asm:   0x5cc915b: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5cc9160: lea rax, [rip + 0x15c4c11]  ; MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose
// asm:   0x5cc9167: mov rsi, qword ptr [rax]
// asm:   0x5cc916a: lea rdi, [rsp + 0x30]
// asm:   0x5cc916f: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5cc9174: test rbx, rbx
// asm:   0x5cc9177: je 0x5cc8ed7
// asm:   0x5cc917d: mov rdi, rbx
// asm:   0x5cc9180: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5cc9185: mov rbx, rax
// asm:   0x5cc9188: lea rdi, [rsp + 0x48]
// asm:   0x5cc918d: call 0x2fdb530  ; il2cpp_runtime_helper_02fdb530()
// asm:   0x5cc9192: mov rdi, rbx
// asm:   0x5cc9195: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5cc919a: mov rdi, rax
// asm:   0x5cc919d: call 0x2ab61e0  ; __clang_call_terminate()

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
  undefined1 local_58 [8];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_50;
  UnityEngine_Object_o *local_48;
  undefined1 local_40 [16];
  UnityEngine_Object_o *local_30;
  
  if (Il2CppMethodInitialized_07547b67 == '\0') {
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
    Il2CppMethodInitialized_07547b67 = '\x01';
  }
  local_58 = (undefined1  [8])0x0;
  pSStack_50 = (System_Collections_Generic_List_Enumerator_object__o *)0x0;
  local_48 = (UnityEngine_Object_o *)0x0;
  pSVar3 = (__this->fields)._inputs;
  if (pSVar3 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
               (System_Collections_Generic_List_object__o *)pSVar3,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
    local_48 = local_30;
    local_58 = (undefined1  [8])local_40._0_8_;
    pSStack_50 = (System_Collections_Generic_List_Enumerator_object__o *)local_40._8_8_;
    local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_40._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)local_58;
    while( true ) {
      bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)local_58,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext);
      obj = local_48;
      if (!bVar6) break;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_69214e0(obj,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)local_58,
               (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose)
    ;
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
    if (pSVar3 != (System_Collections_Generic_List_GameObject__o *)0x0) {
      piVar1 = &(pSVar3->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar4 = (pSVar3->fields)._items;
      if (pUVar4 != (UnityEngine_GameObject_array *)0x0) {
        uVar2 = (pSVar3->fields)._size;
        if (uVar2 < (uint)pUVar4->max_length) {
          (pSVar3->fields)._size = uVar2 + 1;
          pUVar4->m_Items[(int)uVar2] = pUVar7;
          Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar7,
                     (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
        }
        pSVar3 = (__this->fields)._inputs;
        pUVar7 = UI_ElementFactory__CreateInputSetting
                           ((__this->fields).SinglePanel,__this_00,
                            (Settings_BaseSetting_o *)(__this->fields)._y,"Y",
                            "",140.0,40.0,false,(UnityEngine_Events_UnityAction_o *)0x0,
                            (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                            (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
        pMVar5 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
        if (pSVar3 != (System_Collections_Generic_List_GameObject__o *)0x0) {
          piVar1 = &(pSVar3->fields)._version;
          *piVar1 = *piVar1 + 1;
          pUVar4 = (pSVar3->fields)._items;
          if (pUVar4 != (UnityEngine_GameObject_array *)0x0) {
            uVar2 = (pSVar3->fields)._size;
            if (uVar2 < (uint)pUVar4->max_length) {
              (pSVar3->fields)._size = uVar2 + 1;
              pUVar4->m_Items[(int)uVar2] = pUVar7;
              Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar7,
                         (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
            }
            pSVar3 = (__this->fields)._inputs;
            pUVar7 = UI_ElementFactory__CreateInputSetting
                               ((__this->fields).SinglePanel,__this_00,
                                (Settings_BaseSetting_o *)(__this->fields)._z,"Z",
                                "",140.0,40.0,false,(UnityEngine_Events_UnityAction_o *)0x0
                                ,(UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                                (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
            pMVar5 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
            if (pSVar3 != (System_Collections_Generic_List_GameObject__o *)0x0) {
              piVar1 = &(pSVar3->fields)._version;
              *piVar1 = *piVar1 + 1;
              pUVar4 = (pSVar3->fields)._items;
              if (pUVar4 != (UnityEngine_GameObject_array *)0x0) {
                uVar2 = (pSVar3->fields)._size;
                if (uVar2 < (uint)pUVar4->max_length) {
                  (pSVar3->fields)._size = uVar2 + 1;
                  pUVar4->m_Items[(int)uVar2] = pUVar7;
                  Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar7,
                             (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
                }
                return;
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.Vector3Popup$$OnButtonClick
// il2cpp: void UI_Vector3Popup__OnButtonClick (UI_Vector3Popup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5cc91b0

void UI_Vector3Popup__OnButtonClick(UI_Vector3Popup_o *__this,System_String_o *name,MethodInfo *method)

{
  Settings_FloatSetting_o *pSVar1;
  Settings_FloatSetting_o *pSVar2;
  Settings_FloatSetting_o *pSVar3;
  Settings_Vector3Setting_o *pSVar4;
  UnityEngine_UI_Text_o *pUVar5;
  UnityEngine_Events_UnityAction_o *pUVar6;
  UnityEngine_Vector3_Fields vector;
  bool bVar7;
  System_String_o *pSVar8;
  UnityEngine_Vector3_o value;
  
  if (Il2CppMethodInitialized_07547b68 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Vector3_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Vector3_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    Il2CppMethodInitialized_07547b68 = '\x01';
  }
  bVar7 = System_String__op_Equality(name,"Cancel",(MethodInfo *)0x0);
  if (bVar7) {
label_05cc9336:
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
    return;
  }
  bVar7 = System_String__op_Equality(name,"Save",(MethodInfo *)0x0);
  if (!bVar7) {
    return;
  }
  pSVar1 = (__this->fields)._x;
  if ((((pSVar1 != (Settings_FloatSetting_o *)0x0) &&
       (pSVar2 = (__this->fields)._y, pSVar2 != (Settings_FloatSetting_o *)0x0)) &&
      (pSVar3 = (__this->fields)._z, pSVar3 != (Settings_FloatSetting_o *)0x0)) &&
     (pSVar4 = (__this->fields)._setting, pSVar4 != (Settings_Vector3Setting_o *)0x0)) {
    value.fields.y = (pSVar2->fields)._value;
    value.fields.x = (pSVar1->fields)._value;
    value.fields.z = (pSVar3->fields)._value;
    Settings_TypedSetting_Vector3___set_Value
              ((Settings_TypedSetting_Vector3__o *)pSVar4,value,
               (MethodInfo_42DA4D0 *)MethodInfo_Settings_TypedSetting_Vector3_set_Value);
    pSVar4 = (__this->fields)._setting;
    if (pSVar4 != (Settings_Vector3Setting_o *)0x0) {
      pUVar5 = (__this->fields)._text;
      vector = (pSVar4->fields)._value.fields;
      if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
      }
      pSVar8 = MiscExtensions__ToDisplayString((UnityEngine_Vector3_o)vector,(MethodInfo *)0x0);
      if (pUVar5 != (UnityEngine_UI_Text_o *)0x0) {
        (*(pUVar5->klass->vtable)._75_set_text.methodPtr)
                  (pUVar5,pSVar8,(pUVar5->klass->vtable)._75_set_text.method);
        pUVar6 = (__this->fields)._onChangeVector;
        if (pUVar6 != (UnityEngine_Events_UnityAction_o *)0x0) {
          (*(code *)(pUVar6->fields).invoke_impl)((pUVar6->fields).method_code,(pUVar6->fields).method);
        }
        goto label_05cc9336;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.Vector3Popup$$.ctor
// il2cpp: void UI_Vector3Popup___ctor (UI_Vector3Popup_o* __this, const MethodInfo* method);
// 0x5cc9360

void UI_Vector3Popup___ctor(UI_Vector3Popup_o *__this,MethodInfo *method)

{
  Settings_FloatSetting_o *pSVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547b69 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_GameObject);
    Il2CppMethodInitialized_07547b69 = '\x01';
  }
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor_5a411f0(pSVar1,0.0,-3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
  (__this->fields)._x = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._x);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor_5a411f0(pSVar1,0.0,-3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
  (__this->fields)._y = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._y);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor_5a411f0(pSVar1,0.0,-3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
  (__this->fields)._z = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._z);
  method_00 = (MethodInfo *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)method_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_GameObject_ctor);
  (__this->fields)._inputs = (System_Collections_Generic_List_GameObject__o *)method_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._inputs);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,method_00);
  return;
}


// UI.Vector3Popup$$<Setup>b__17_0
// il2cpp: void UI_Vector3Popup___Setup_b__17_0 (UI_Vector3Popup_o* __this, const MethodInfo* method);
// 0x5cc94b0

void UI_Vector3Popup___Setup_b__17_0(UI_Vector3Popup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_07547b6a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    Il2CppMethodInitialized_07547b6a = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_Vector3Popup__OnButtonClick(__this,"Save",in_RDX);
  return;
}


// UI.Vector3Popup$$<Setup>b__17_1
// il2cpp: void UI_Vector3Popup___Setup_b__17_1 (UI_Vector3Popup_o* __this, const MethodInfo* method);
// 0x5cc94f0

void UI_Vector3Popup___Setup_b__17_1(UI_Vector3Popup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_07547b6b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    Il2CppMethodInitialized_07547b6b = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_Vector3Popup__OnButtonClick(__this,"Cancel",in_RDX);
  return;
}


