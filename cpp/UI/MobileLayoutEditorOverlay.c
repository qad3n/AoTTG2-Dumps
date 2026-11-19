// Type: UI.MobileLayoutEditorOverlay
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp_body_deref/Scripts/UI/MobileLayoutEditorOverlay.cs
// Prior real C# source: none
// --------------------------------

// UI.MobileLayoutEditorOverlay.<>c$$.cctor
// il2cpp: void UI_MobileLayoutEditorOverlay___c___cctor (const MethodInfo* method);
// 0x5ca9030

void UI_MobileLayoutEditorOverlay___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07547a5c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileLayoutEditorOverlay_c);
    Il2CppMethodInitialized_07547a5c = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MobileLayoutEditorOverlay_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_UI_MobileLayoutEditorOverlay_c->static_fields->__9 = (UI_MobileLayoutEditorOverlay___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_UI_MobileLayoutEditorOverlay_c->static_fields->__9);
  return;
}


// UI.MobileLayoutEditorOverlay.<>c$$.ctor
// il2cpp: void UI_MobileLayoutEditorOverlay___c___ctor (UI_MobileLayoutEditorOverlay___c_o* __this, const MethodInfo* method);
// 0x5ca90a0

void UI_MobileLayoutEditorOverlay___c___ctor(UI_MobileLayoutEditorOverlay___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MobileLayoutEditorOverlay.<>c$$<ShowLoadPopup>b__54_0
// il2cpp: System_String_o* UI_MobileLayoutEditorOverlay___c___ShowLoadPopup_b__54_0 (UI_MobileLayoutEditorOverlay___c_o* __this, int32_t role, const MethodInfo* method);
// 0x5ca90b0

System_String_o *
UI_MobileLayoutEditorOverlay___c___ShowLoadPopup_b__54_0
          (UI_MobileLayoutEditorOverlay___c_o *__this,int32_t role,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Enum_o local_20;
  int32_t local_10;
  
  if (Il2CppMethodInitialized_07547a5d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLayoutRole);
    Il2CppMethodInitialized_07547a5d = '\x01';
  }
  local_20.klass = (System_Enum_c *)TypeInfo_UI_MobileInputLayoutRole;
  local_20.monitor = (void *)0xffffffffffffffff;
  local_10 = role;
  pSVar1 = System_Enum__ToString(&local_20,(MethodInfo *)0x0);
  return pSVar1;
}


// UI.MobileLayoutEditorOverlay.<>c$$<EnsureCoreControls>b__71_0
// il2cpp: bool UI_MobileLayoutEditorOverlay___c___EnsureCoreControls_b__71_0 (UI_MobileLayoutEditorOverlay___c_o* __this, UI_MobileInputControlLayout_o* x, const MethodInfo* method);
// 0x5ca9110

bool UI_MobileLayoutEditorOverlay___c___EnsureCoreControls_b__71_0
               (UI_MobileLayoutEditorOverlay___c_o *__this,UI_MobileInputControlLayout_o *x,MethodInfo *method
               )

{
  int32_t iVar1;
  bool bVar2;
  
  if (x == (UI_MobileInputControlLayout_o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar1 = UI_MobileInputControlLayout__GetKind(x,(MethodInfo *)0x0);
  bVar2 = true;
  if (iVar1 != 6) {
    iVar1 = UI_MobileInputControlLayout__GetKind(x,(MethodInfo *)0x0);
    bVar2 = iVar1 == 7;
  }
  return bVar2;
}


// UI.MobileLayoutEditorOverlay.<>c$$<EnsureCoreControls>b__71_1
// il2cpp: bool UI_MobileLayoutEditorOverlay___c___EnsureCoreControls_b__71_1 (UI_MobileLayoutEditorOverlay___c_o* __this, UI_MobileInputControlLayout_o* x, const MethodInfo* method);
// 0x5ca9150

bool UI_MobileLayoutEditorOverlay___c___EnsureCoreControls_b__71_1
               (UI_MobileLayoutEditorOverlay___c_o *__this,UI_MobileInputControlLayout_o *x,MethodInfo *method
               )

{
  uint uVar1;
  
  if (x == (UI_MobileInputControlLayout_o *)0x0) {
    ThrowNullReferenceException();
  }
  uVar1 = UI_MobileInputControlLayout__GetKind(x,(MethodInfo *)0x0);
  if ((uVar1 < 5) && ((0x17U >> (uVar1 & 0x1f) & 1) != 0)) {
    return false;
  }
  return uVar1 - 8 < 0xfffffffe;
}


// UI.MobileLayoutEditorOverlay.<>c$$<EnsureCoreControls>b__71_2
// il2cpp: bool UI_MobileLayoutEditorOverlay___c___EnsureCoreControls_b__71_2 (UI_MobileLayoutEditorOverlay___c_o* __this, UI_MobileInputControlLayout_o* x, const MethodInfo* method);
// 0x5ca9190

bool UI_MobileLayoutEditorOverlay___c___EnsureCoreControls_b__71_2
               (UI_MobileLayoutEditorOverlay___c_o *__this,UI_MobileInputControlLayout_o *x,MethodInfo *method
               )

{
  int32_t iVar1;
  
  if (x == (UI_MobileInputControlLayout_o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar1 = UI_MobileInputControlLayout__GetKind(x,(MethodInfo *)0x0);
  return iVar1 == 6;
}


// UI.MobileLayoutEditorOverlay.<>c$$<EnsureCoreControls>b__71_3
// il2cpp: bool UI_MobileLayoutEditorOverlay___c___EnsureCoreControls_b__71_3 (UI_MobileLayoutEditorOverlay___c_o* __this, UI_MobileInputControlLayout_o* x, const MethodInfo* method);
// 0x5ca91b0

bool UI_MobileLayoutEditorOverlay___c___EnsureCoreControls_b__71_3
               (UI_MobileLayoutEditorOverlay___c_o *__this,UI_MobileInputControlLayout_o *x,MethodInfo *method
               )

{
  int32_t iVar1;
  
  if (x == (UI_MobileInputControlLayout_o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar1 = UI_MobileInputControlLayout__GetKind(x,(MethodInfo *)0x0);
  return iVar1 == 7;
}


// UI.MobileLayoutEditorOverlay.<>c__DisplayClass101_0$$.ctor
// il2cpp: void UI_MobileLayoutEditorOverlay___c__DisplayClass101_0___ctor (UI_MobileLayoutEditorOverlay___c__DisplayClass101_0_o* __this, const MethodInfo* method);
// 0x5ca8d00

void UI_MobileLayoutEditorOverlay___c__DisplayClass101_0___ctor
               (UI_MobileLayoutEditorOverlay___c__DisplayClass101_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MobileLayoutEditorOverlay.<>c__DisplayClass101_0$$<AddTrigger>b__0
// il2cpp: void UI_MobileLayoutEditorOverlay___c__DisplayClass101_0___AddTrigger_b__0 (UI_MobileLayoutEditorOverlay___c__DisplayClass101_0_o* __this, UnityEngine_EventSystems_BaseEventData_o* data, const MethodInfo* method);
// 0x5ca91d0

void UI_MobileLayoutEditorOverlay___c__DisplayClass101_0___AddTrigger_b__0
               (UI_MobileLayoutEditorOverlay___c__DisplayClass101_0_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *data,MethodInfo *method)

{
  System_Action_BaseEventData__o *pSVar1;
  code *vtableDispatch;
  
  pSVar1 = (__this->fields).action;
  if (pSVar1 == (System_Action_BaseEventData__o *)0x0) {
    ThrowNullReferenceException();
  }
  vtableDispatch = (code *)(pSVar1->fields).invoke_impl;
  (*vtableDispatch)((pSVar1->fields).method_code,data,(pSVar1->fields).method,vtableDispatch);
  return;
}


// UI.MobileLayoutEditorOverlay.<>c__DisplayClass41_0$$.ctor
// il2cpp: void UI_MobileLayoutEditorOverlay___c__DisplayClass41_0___ctor (UI_MobileLayoutEditorOverlay___c__DisplayClass41_0_o* __this, const MethodInfo* method);
// 0x5c9f610

void UI_MobileLayoutEditorOverlay___c__DisplayClass41_0___ctor
               (UI_MobileLayoutEditorOverlay___c__DisplayClass41_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MobileLayoutEditorOverlay.<>c__DisplayClass41_0$$<CreateEditableControl>b__0
// il2cpp: void UI_MobileLayoutEditorOverlay___c__DisplayClass41_0___CreateEditableControl_b__0 (UI_MobileLayoutEditorOverlay___c__DisplayClass41_0_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x5ca91f0

void UI_MobileLayoutEditorOverlay___c__DisplayClass41_0___CreateEditableControl_b__0
               (UI_MobileLayoutEditorOverlay___c__DisplayClass41_0_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  byte bVar1;
  UI_MobileLayoutEditorOverlay_o *__this_00;
  MethodInfo *in_RCX;
  
  if (Il2CppMethodInitialized_07547a5e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_EventSystems_PointerEventData);
    Il2CppMethodInitialized_07547a5e = '\x01';
  }
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (UI_MobileLayoutEditorOverlay_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (eventData != (UnityEngine_EventSystems_BaseEventData_o *)0x0) {
    bVar1 = (TypeInfo_UnityEngine_EventSystems_PointerEventData->_2).typeHierarchyDepth;
    if (((eventData->klass->_2).typeHierarchyDepth < bVar1) ||
       (in_RCX = (MethodInfo *)(eventData->klass->_2).typeHierarchy,
       *(UnityEngine_EventSystems_PointerEventData_c **)((long)in_RCX + (ulong)bVar1 * 8 + -8) !=
       TypeInfo_UnityEngine_EventSystems_PointerEventData)) {
      il2cpp_codegen_raise_invalid_cast_exception
                (eventData,TypeInfo_UnityEngine_EventSystems_PointerEventData);
    }
  }
  UI_MobileLayoutEditorOverlay__BeginControlDrag
            (__this_00,(__this->fields).control,(UnityEngine_EventSystems_PointerEventData_o *)eventData,
             in_RCX);
  return;
}


// UI.MobileLayoutEditorOverlay.<>c__DisplayClass41_0$$<CreateEditableControl>b__1
// il2cpp: void UI_MobileLayoutEditorOverlay___c__DisplayClass41_0___CreateEditableControl_b__1 (UI_MobileLayoutEditorOverlay___c__DisplayClass41_0_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x5ca9280

void UI_MobileLayoutEditorOverlay___c__DisplayClass41_0___CreateEditableControl_b__1
               (UI_MobileLayoutEditorOverlay___c__DisplayClass41_0_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  byte bVar1;
  UI_MobileLayoutEditorOverlay_o *__this_00;
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_07547a5f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_EventSystems_PointerEventData);
    Il2CppMethodInitialized_07547a5f = '\x01';
    method = extraout_RDX;
  }
  if (eventData != (UnityEngine_EventSystems_BaseEventData_o *)0x0) {
    bVar1 = (TypeInfo_UnityEngine_EventSystems_PointerEventData->_2).typeHierarchyDepth;
    if (((eventData->klass->_2).typeHierarchyDepth < bVar1) ||
       ((eventData->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_UnityEngine_EventSystems_PointerEventData)) {
      il2cpp_codegen_raise_invalid_cast_exception(eventData);
    }
    __this_00 = (__this->fields).__4__this;
    if (__this_00 != (UI_MobileLayoutEditorOverlay_o *)0x0) {
      UI_MobileLayoutEditorOverlay__DragControl
                (__this_00,(__this->fields).control,
                 (UnityEngine_Vector2_o)*(UnityEngine_Vector2_Fields *)((long)&(*(uint64_t *)((char *)eventData + 0x140)) + 4),method
                );
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MobileLayoutEditorOverlay.<>c__DisplayClass41_0$$<CreateEditableControl>b__2
// il2cpp: void UI_MobileLayoutEditorOverlay___c__DisplayClass41_0___CreateEditableControl_b__2 (UI_MobileLayoutEditorOverlay___c__DisplayClass41_0_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x5ca9310

void UI_MobileLayoutEditorOverlay___c__DisplayClass41_0___CreateEditableControl_b__2
               (UI_MobileLayoutEditorOverlay___c__DisplayClass41_0_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  byte bVar1;
  UI_MobileLayoutEditorOverlay_o *pUVar2;
  
  if (Il2CppMethodInitialized_07547a60 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_EventSystems_PointerEventData);
    Il2CppMethodInitialized_07547a60 = '\x01';
  }
  pUVar2 = (__this->fields).__4__this;
  if ((pUVar2 == (UI_MobileLayoutEditorOverlay_o *)0x0) ||
     (eventData == (UnityEngine_EventSystems_BaseEventData_o *)0x0)) {
    ThrowNullReferenceException();
  }
  bVar1 = (TypeInfo_UnityEngine_EventSystems_PointerEventData->_2).typeHierarchyDepth;
  if (((eventData->klass->_2).typeHierarchyDepth < bVar1) ||
     ((eventData->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
      (Il2CppClass *)TypeInfo_UnityEngine_EventSystems_PointerEventData)) {
    il2cpp_codegen_raise_invalid_cast_exception(eventData);
  }
  if ((pUVar2->fields)._dragPointerId == *(int *)&(*(uint64_t *)((char *)eventData + 0x140))) {
    (pUVar2->fields)._draggingControl = (UI_MobileInputControlLayout_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(pUVar2->fields)._draggingControl);
    return;
  }
  return;
}


// UI.MobileLayoutEditorOverlay.<>c__DisplayClass41_0$$<CreateEditableControl>b__3
// il2cpp: void UI_MobileLayoutEditorOverlay___c__DisplayClass41_0___CreateEditableControl_b__3 (UI_MobileLayoutEditorOverlay___c__DisplayClass41_0_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x5ca93b0

void UI_MobileLayoutEditorOverlay___c__DisplayClass41_0___CreateEditableControl_b__3
               (UI_MobileLayoutEditorOverlay___c__DisplayClass41_0_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  byte bVar1;
  UI_MobileLayoutEditorOverlay_o *pUVar2;
  
  if (Il2CppMethodInitialized_07547a61 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_EventSystems_PointerEventData);
    Il2CppMethodInitialized_07547a61 = '\x01';
  }
  pUVar2 = (__this->fields).__4__this;
  if ((pUVar2 == (UI_MobileLayoutEditorOverlay_o *)0x0) ||
     (eventData == (UnityEngine_EventSystems_BaseEventData_o *)0x0)) {
    ThrowNullReferenceException();
  }
  bVar1 = (TypeInfo_UnityEngine_EventSystems_PointerEventData->_2).typeHierarchyDepth;
  if (((eventData->klass->_2).typeHierarchyDepth < bVar1) ||
     ((eventData->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
      (Il2CppClass *)TypeInfo_UnityEngine_EventSystems_PointerEventData)) {
    il2cpp_codegen_raise_invalid_cast_exception(eventData);
  }
  if ((((pUVar2->fields)._dragPointerId == *(int *)&(*(uint64_t *)((char *)eventData + 0x140))) &&
      (*(char *)&(*(uint64_t *)((char *)eventData + 0x138)) == '\0')) &&
     (*(char *)((long)&eventData[0xc].klass + 5) == '\0')) {
    (pUVar2->fields)._draggingControl = (UI_MobileInputControlLayout_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(pUVar2->fields)._draggingControl);
    return;
  }
  return;
}


// UI.MobileLayoutEditorOverlay.<>c__DisplayClass52_0$$.ctor
// il2cpp: void UI_MobileLayoutEditorOverlay___c__DisplayClass52_0___ctor (UI_MobileLayoutEditorOverlay___c__DisplayClass52_0_o* __this, const MethodInfo* method);
// 0x5ca36f0

void UI_MobileLayoutEditorOverlay___c__DisplayClass52_0___ctor
               (UI_MobileLayoutEditorOverlay___c__DisplayClass52_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MobileLayoutEditorOverlay.<>c__DisplayClass52_0$$<SavePreset>b__0
// il2cpp: void UI_MobileLayoutEditorOverlay___c__DisplayClass52_0___SavePreset_b__0 (UI_MobileLayoutEditorOverlay___c__DisplayClass52_0_o* __this, const MethodInfo* method);
// 0x5ca9460

void UI_MobileLayoutEditorOverlay___c__DisplayClass52_0___SavePreset_b__0
               (UI_MobileLayoutEditorOverlay___c__DisplayClass52_0_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Settings_StringSetting_o *pSVar2;
  UI_MobileLayoutEditorOverlay_o *pUVar3;
  UnityEngine_Object_o *obj;
  bool bVar4;
  System_String_o *pSVar5;
  UI_MobileInputLayout_o *pUVar6;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_DateTime_o SStack_28;
  
  if (Il2CppMethodInitialized_07547a62 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLayoutManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"MMdd-HHmmss");
    il2cpp_codegen_initialize_runtime_metadata(&"Custom ");
    Il2CppMethodInitialized_07547a62 = '\x01';
  }
  SStack_28.fields._dateData = (System_DateTime_Fields)0;
  pSVar2 = (__this->fields).name;
  if (pSVar2 != (Settings_StringSetting_o *)0x0) {
    bVar4 = System_String__IsNullOrWhiteSpace((pSVar2->fields)._value,(MethodInfo *)0x0);
    if (bVar4) {
      pUVar3 = (__this->fields).__4__this;
      if (pUVar3 == (UI_MobileLayoutEditorOverlay_o *)0x0) goto label_05ca96b4;
      iVar1 = (pUVar3->fields)._role;
      if ((TypeInfo_System_DateTime->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTime);
      }
      SStack_28 = System_DateTime__get_Now((MethodInfo *)0x0);
      pSVar5 = System_DateTime__ToString_5497760(&SStack_28,"MMdd-HHmmss",(MethodInfo *)0x0);
      pSVar5 = System_String__Concat_52f0320("Custom ",pSVar5,(MethodInfo *)0x0);
      if ((TypeInfo_UI_MobileInputLayoutManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutManager);
      }
      pSVar5 = UI_MobileInputLayoutManager__GetUniqueLayoutName(iVar1,pSVar5,(MethodInfo *)0x0);
    }
    else {
      pSVar2 = (__this->fields).name;
      if ((pSVar2 == (Settings_StringSetting_o *)0x0) ||
         (pSVar5 = (pSVar2->fields)._value, pSVar5 == (System_String_o *)0x0)) goto label_05ca96b4;
      pSVar5 = System_String__Trim(pSVar5,(MethodInfo *)0x0);
    }
    pUVar3 = (__this->fields).__4__this;
    if (pUVar3 != (UI_MobileLayoutEditorOverlay_o *)0x0) {
      iVar1 = (pUVar3->fields)._role;
      if ((TypeInfo_UI_MobileInputLayoutManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutManager);
      }
      bVar4 = UI_MobileInputLayoutManager__IsBuiltinLayoutName(iVar1,pSVar5,(MethodInfo *)0x0);
      if (bVar4) {
        pUVar3 = (__this->fields).__4__this;
        if (pUVar3 == (UI_MobileLayoutEditorOverlay_o *)0x0) goto label_05ca96b4;
        iVar1 = (pUVar3->fields)._role;
        if ((TypeInfo_UI_MobileInputLayoutManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutManager);
        }
        pSVar5 = UI_MobileInputLayoutManager__GetUniqueLayoutName(iVar1,pSVar5,(MethodInfo *)0x0);
      }
      pUVar3 = (__this->fields).__4__this;
      if ((pUVar3 != (UI_MobileLayoutEditorOverlay_o *)0x0) &&
         (pUVar6 = (pUVar3->fields)._layout, pUVar6 != (UI_MobileInputLayout_o *)0x0)) {
        (pUVar6->fields).Name = pSVar5;
        Il2CppCodeGenWriteBarrier(&(pUVar6->fields).Name);
        pUVar3 = (__this->fields).__4__this;
        if ((pUVar3 != (UI_MobileLayoutEditorOverlay_o *)0x0) &&
           (pUVar6 = (pUVar3->fields)._layout, pUVar6 != (UI_MobileInputLayout_o *)0x0)) {
          pUVar6 = UI_MobileInputLayout__Clone(pUVar6,pSVar5,false,(MethodInfo *)0x0);
          if ((TypeInfo_UI_MobileInputLayoutManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutManager);
          }
          method_01 = (MethodInfo *)0x0;
          UI_MobileInputLayoutManager__SaveCustomLayout(pUVar6,(MethodInfo *)0x0);
          pUVar3 = (__this->fields).__4__this;
          if (pUVar3 != (UI_MobileLayoutEditorOverlay_o *)0x0) {
            UI_MobileLayoutEditorOverlay__RefreshRestorePanel(pUVar3,method_01);
            obj = (UnityEngine_Object_o *)(__this->fields).panel;
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            UnityEngine_Object__Destroy_69214e0(obj,(MethodInfo *)0x0);
            pUVar3 = (__this->fields).__4__this;
            if (pUVar3 != (UI_MobileLayoutEditorOverlay_o *)0x0) {
              UI_MobileLayoutEditorOverlay__ShowSavedPopup(pUVar3,pSVar5,method_00);
              return;
            }
          }
        }
      }
    }
  }
label_05ca96b4:
  ThrowNullReferenceException();
}


// UI.MobileLayoutEditorOverlay.<>c__DisplayClass52_0$$<SavePreset>b__1
// il2cpp: void UI_MobileLayoutEditorOverlay___c__DisplayClass52_0___SavePreset_b__1 (UI_MobileLayoutEditorOverlay___c__DisplayClass52_0_o* __this, const MethodInfo* method);
// 0x5ca96c0

void UI_MobileLayoutEditorOverlay___c__DisplayClass52_0___SavePreset_b__1
               (UI_MobileLayoutEditorOverlay___c__DisplayClass52_0_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *obj;
  
  if (Il2CppMethodInitialized_07547a63 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547a63 = '\x01';
  }
  obj = (UnityEngine_Object_o *)(__this->fields).panel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    UnityEngine_Object__Destroy_69214e0(obj,(MethodInfo *)0x0);
    return;
  }
  UnityEngine_Object__Destroy_69214e0(obj,(MethodInfo *)0x0);
  return;
}


// UI.MobileLayoutEditorOverlay.<>c__DisplayClass53_0$$.ctor
// il2cpp: void UI_MobileLayoutEditorOverlay___c__DisplayClass53_0___ctor (UI_MobileLayoutEditorOverlay___c__DisplayClass53_0_o* __this, const MethodInfo* method);
// 0x5ca3d50

void UI_MobileLayoutEditorOverlay___c__DisplayClass53_0___ctor
               (UI_MobileLayoutEditorOverlay___c__DisplayClass53_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MobileLayoutEditorOverlay.<>c__DisplayClass53_0$$<ShowSavedPopup>b__0
// il2cpp: void UI_MobileLayoutEditorOverlay___c__DisplayClass53_0___ShowSavedPopup_b__0 (UI_MobileLayoutEditorOverlay___c__DisplayClass53_0_o* __this, const MethodInfo* method);
// 0x5ca9720

void UI_MobileLayoutEditorOverlay___c__DisplayClass53_0___ShowSavedPopup_b__0
               (UI_MobileLayoutEditorOverlay___c__DisplayClass53_0_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *obj;
  
  if (Il2CppMethodInitialized_07547a64 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547a64 = '\x01';
  }
  obj = (UnityEngine_Object_o *)(__this->fields).panel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    UnityEngine_Object__Destroy_69214e0(obj,(MethodInfo *)0x0);
    return;
  }
  UnityEngine_Object__Destroy_69214e0(obj,(MethodInfo *)0x0);
  return;
}


// UI.MobileLayoutEditorOverlay.<>c__DisplayClass54_0$$.ctor
// il2cpp: void UI_MobileLayoutEditorOverlay___c__DisplayClass54_0___ctor (UI_MobileLayoutEditorOverlay___c__DisplayClass54_0_o* __this, const MethodInfo* method);
// 0x5ca4740

void UI_MobileLayoutEditorOverlay___c__DisplayClass54_0___ctor
               (UI_MobileLayoutEditorOverlay___c__DisplayClass54_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MobileLayoutEditorOverlay.<>c__DisplayClass54_0$$<ShowLoadPopup>b__1
// il2cpp: void UI_MobileLayoutEditorOverlay___c__DisplayClass54_0___ShowLoadPopup_b__1 (UI_MobileLayoutEditorOverlay___c__DisplayClass54_0_o* __this, const MethodInfo* method);
// 0x5ca9780

void UI_MobileLayoutEditorOverlay___c__DisplayClass54_0___ShowLoadPopup_b__1
               (UI_MobileLayoutEditorOverlay___c__DisplayClass54_0_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *x;
  Settings_StringSetting_o *pSVar1;
  System_String_o *value;
  UI_MobileLayoutEditorOverlay_o *__this_00;
  bool bVar2;
  MethodInfo *in_R8;
  int32_t local_1c;
  
  if (Il2CppMethodInitialized_07547a65 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Enum_TryParse_MobileInputLayoutRole);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_07547a65 = '\x01';
  }
  local_1c = 0;
  x = (__this->fields).listRoot;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pSVar1 = (__this->fields).roleSetting;
    if (pSVar1 == (Settings_StringSetting_o *)0x0) {
label_05ca985c:
      ThrowNullReferenceException();
    }
    value = (pSVar1->fields)._value;
    if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_07556760);
    }
    bVar2 = System_Enum__TryParse_Int32Enum_
                      (value,&local_1c,
                       (MethodInfo_34DC610 *)MethodInfo_System_Enum_TryParse_MobileInputLayoutRole);
    if (bVar2) {
      __this_00 = (__this->fields).__4__this;
      if (__this_00 == (UI_MobileLayoutEditorOverlay_o *)0x0) goto label_05ca985c;
      UI_MobileLayoutEditorOverlay__PopulatePresetList
                (__this_00,(__this->fields).listRoot,(__this->fields).panel,local_1c,in_R8);
    }
  }
  return;
}


// UI.MobileLayoutEditorOverlay.<>c__DisplayClass54_0$$<ShowLoadPopup>b__2
// il2cpp: void UI_MobileLayoutEditorOverlay___c__DisplayClass54_0___ShowLoadPopup_b__2 (UI_MobileLayoutEditorOverlay___c__DisplayClass54_0_o* __this, const MethodInfo* method);
// 0x5ca9870

void UI_MobileLayoutEditorOverlay___c__DisplayClass54_0___ShowLoadPopup_b__2
               (UI_MobileLayoutEditorOverlay___c__DisplayClass54_0_o *__this,MethodInfo *method)

{
  UI_MobileLayoutEditorOverlay_o *pUVar1;
  UI_ImportPopup_o *__this_00;
  UnityEngine_Events_UnityAction_o *__this_01;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547a66 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass54_0_ShowLoadPopup_b__5);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547a66 = '\x01';
  }
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 != (UI_MobileLayoutEditorOverlay_o *)0x0) {
    __this_00 = (pUVar1->fields)._importPopup;
    __this_01 = (__this->fields).__9__5;
    if (__this_01 == (UnityEngine_Events_UnityAction_o *)0x0) {
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                (__this_01,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass54_0_ShowLoadPopup_b__5,
                 (MethodInfo *)0x0);
      (__this->fields).__9__5 = __this_01;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__9__5);
    }
    if (__this_00 != (UI_ImportPopup_o *)0x0) {
      UI_ImportPopup__Show
                (__this_00,__this_01,true,"","",(MethodInfo *)0x0);
      pUVar1 = (__this->fields).__4__this;
      if (pUVar1 != (UI_MobileLayoutEditorOverlay_o *)0x0) {
        UI_MobileLayoutEditorOverlay__ShowMenuPopupAboveEditor(pUVar1,(UI_BasePopup_o *)__this_00,method_00);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MobileLayoutEditorOverlay.<>c__DisplayClass54_0$$<ShowLoadPopup>b__5
// il2cpp: void UI_MobileLayoutEditorOverlay___c__DisplayClass54_0___ShowLoadPopup_b__5 (UI_MobileLayoutEditorOverlay___c__DisplayClass54_0_o* __this, const MethodInfo* method);
// 0x5ca9950

void UI_MobileLayoutEditorOverlay___c__DisplayClass54_0___ShowLoadPopup_b__5
               (UI_MobileLayoutEditorOverlay___c__DisplayClass54_0_o *__this,MethodInfo *method)

{
  UI_MobileLayoutEditorOverlay_o *__this_00;
  MethodInfo *in_RDX;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (UI_MobileLayoutEditorOverlay_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_MobileLayoutEditorOverlay__ImportLayoutFromPopup(__this_00,(__this->fields).panel,in_RDX);
  return;
}


// UI.MobileLayoutEditorOverlay.<>c__DisplayClass54_0$$<ShowLoadPopup>b__3
// il2cpp: void UI_MobileLayoutEditorOverlay___c__DisplayClass54_0___ShowLoadPopup_b__3 (UI_MobileLayoutEditorOverlay___c__DisplayClass54_0_o* __this, const MethodInfo* method);
// 0x5ca9970

void UI_MobileLayoutEditorOverlay___c__DisplayClass54_0___ShowLoadPopup_b__3
               (UI_MobileLayoutEditorOverlay___c__DisplayClass54_0_o *__this,MethodInfo *method)

{
  UI_MobileLayoutEditorOverlay_o *pUVar1;
  UI_ExportPopup_o *__this_00;
  System_String_o *value;
  MethodInfo *method_00;
  
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 != (UI_MobileLayoutEditorOverlay_o *)0x0) {
    __this_00 = (pUVar1->fields)._exportPopup;
    value = UnityEngine_JsonUtility__ToJson_69c15e0
                      ((Il2CppObject *)(pUVar1->fields)._layout,true,(MethodInfo *)0x0);
    if (__this_00 != (UI_ExportPopup_o *)0x0) {
      UI_ExportPopup__Show(__this_00,value,(MethodInfo *)0x0);
      pUVar1 = (__this->fields).__4__this;
      if (pUVar1 != (UI_MobileLayoutEditorOverlay_o *)0x0) {
        UI_MobileLayoutEditorOverlay__ShowMenuPopupAboveEditor(pUVar1,(UI_BasePopup_o *)__this_00,method_00);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MobileLayoutEditorOverlay.<>c__DisplayClass54_0$$<ShowLoadPopup>b__4
// il2cpp: void UI_MobileLayoutEditorOverlay___c__DisplayClass54_0___ShowLoadPopup_b__4 (UI_MobileLayoutEditorOverlay___c__DisplayClass54_0_o* __this, const MethodInfo* method);
// 0x5ca99d0

void UI_MobileLayoutEditorOverlay___c__DisplayClass54_0___ShowLoadPopup_b__4
               (UI_MobileLayoutEditorOverlay___c__DisplayClass54_0_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *obj;
  
  if (Il2CppMethodInitialized_07547a67 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547a67 = '\x01';
  }
  obj = (UnityEngine_Object_o *)(__this->fields).panel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    UnityEngine_Object__Destroy_69214e0(obj,(MethodInfo *)0x0);
    return;
  }
  UnityEngine_Object__Destroy_69214e0(obj,(MethodInfo *)0x0);
  return;
}


// UI.MobileLayoutEditorOverlay.<>c__DisplayClass59_0$$.ctor
// il2cpp: void UI_MobileLayoutEditorOverlay___c__DisplayClass59_0___ctor (UI_MobileLayoutEditorOverlay___c__DisplayClass59_0_o* __this, const MethodInfo* method);
// 0x5ca5ce0

void UI_MobileLayoutEditorOverlay___c__DisplayClass59_0___ctor
               (UI_MobileLayoutEditorOverlay___c__DisplayClass59_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MobileLayoutEditorOverlay.<>c__DisplayClass59_1$$.ctor
// il2cpp: void UI_MobileLayoutEditorOverlay___c__DisplayClass59_1___ctor (UI_MobileLayoutEditorOverlay___c__DisplayClass59_1_o* __this, const MethodInfo* method);
// 0x5ca5cf0

void UI_MobileLayoutEditorOverlay___c__DisplayClass59_1___ctor
               (UI_MobileLayoutEditorOverlay___c__DisplayClass59_1_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MobileLayoutEditorOverlay.<>c__DisplayClass59_1$$<PopulatePresetList>b__0
// il2cpp: void UI_MobileLayoutEditorOverlay___c__DisplayClass59_1___PopulatePresetList_b__0 (UI_MobileLayoutEditorOverlay___c__DisplayClass59_1_o* __this, const MethodInfo* method);
// 0x5ca9a30

void UI_MobileLayoutEditorOverlay___c__DisplayClass59_1___PopulatePresetList_b__0
               (UI_MobileLayoutEditorOverlay___c__DisplayClass59_1_o *__this,MethodInfo *method)

{
  UI_MobileInputLayout_o *layout;
  UI_MobileLayoutEditorOverlay___c__DisplayClass59_0_o *pUVar1;
  UI_MobileLayoutEditorOverlay_o *__this_00;
  MethodInfo *in_R8;
  
  if (Il2CppMethodInitialized_07547a68 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLayoutManager);
    Il2CppMethodInitialized_07547a68 = '\x01';
  }
  layout = (__this->fields).layout;
  if ((TypeInfo_UI_MobileInputLayoutManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutManager);
  }
  UI_MobileInputLayoutManager__DeleteCustomLayout(layout,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).CS___8__locals1;
  if ((pUVar1 == (UI_MobileLayoutEditorOverlay___c__DisplayClass59_0_o *)0x0) ||
     (__this_00 = (pUVar1->fields).__4__this, __this_00 == (UI_MobileLayoutEditorOverlay_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UI_MobileLayoutEditorOverlay__PopulatePresetList
            (__this_00,(pUVar1->fields).listRoot,(pUVar1->fields).panel,(pUVar1->fields).role,in_R8);
  return;
}


// UI.MobileLayoutEditorOverlay.<>c__DisplayClass59_1$$<PopulatePresetList>b__1
// il2cpp: void UI_MobileLayoutEditorOverlay___c__DisplayClass59_1___PopulatePresetList_b__1 (UI_MobileLayoutEditorOverlay___c__DisplayClass59_1_o* __this, const MethodInfo* method);
// 0x5ca9ab0

void UI_MobileLayoutEditorOverlay___c__DisplayClass59_1___PopulatePresetList_b__1
               (UI_MobileLayoutEditorOverlay___c__DisplayClass59_1_o *__this,MethodInfo *method)

{
  int32_t role;
  UI_MobileLayoutEditorOverlay___c__DisplayClass59_0_o *pUVar1;
  UI_MobileInputLayout_o *pUVar2;
  System_String_o *name;
  UI_MobileLayoutEditorOverlay_o *pUVar3;
  UnityEngine_Object_o *obj;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547a69 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLayoutManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547a69 = '\x01';
  }
  pUVar1 = (__this->fields).CS___8__locals1;
  if ((pUVar1 != (UI_MobileLayoutEditorOverlay___c__DisplayClass59_0_o *)0x0) &&
     (pUVar2 = (__this->fields).layout, pUVar2 != (UI_MobileInputLayout_o *)0x0)) {
    role = (pUVar1->fields).role;
    name = (pUVar2->fields).Name;
    if ((TypeInfo_UI_MobileInputLayoutManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutManager);
    }
    UI_MobileInputLayoutManager__SetSelectedLayoutName(role,name,(MethodInfo *)0x0);
    pUVar1 = (__this->fields).CS___8__locals1;
    if ((pUVar1 != (UI_MobileLayoutEditorOverlay___c__DisplayClass59_0_o *)0x0) &&
       (pUVar3 = (pUVar1->fields).__4__this, pUVar3 != (UI_MobileLayoutEditorOverlay_o *)0x0)) {
      (pUVar3->fields)._role = (pUVar1->fields).role;
      pUVar2 = (__this->fields).layout;
      if (pUVar2 != (UI_MobileInputLayout_o *)0x0) {
        method_00 = (MethodInfo *)
                    UI_MobileInputLayout__Clone(pUVar2,(System_String_o *)0x0,false,(MethodInfo *)0x0);
        (pUVar3->fields)._layout = (UI_MobileInputLayout_o *)method_00;
        Il2CppCodeGenWriteBarrier(&(pUVar3->fields)._layout);
        pUVar1 = (__this->fields).CS___8__locals1;
        if ((pUVar1 != (UI_MobileLayoutEditorOverlay___c__DisplayClass59_0_o *)0x0) &&
           (pUVar3 = (pUVar1->fields).__4__this, pUVar3 != (UI_MobileLayoutEditorOverlay_o *)0x0)) {
          UI_MobileLayoutEditorOverlay__RebuildControls(pUVar3,method_00);
          pUVar1 = (__this->fields).CS___8__locals1;
          if ((pUVar1 != (UI_MobileLayoutEditorOverlay___c__DisplayClass59_0_o *)0x0) &&
             (pUVar3 = (pUVar1->fields).__4__this, pUVar3 != (UI_MobileLayoutEditorOverlay_o *)0x0)) {
            UI_MobileLayoutEditorOverlay__RefreshRestorePanel(pUVar3,method_00);
            pUVar1 = (__this->fields).CS___8__locals1;
            if (pUVar1 != (UI_MobileLayoutEditorOverlay___c__DisplayClass59_0_o *)0x0) {
              obj = (UnityEngine_Object_o *)(pUVar1->fields).panel;
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              UnityEngine_Object__Destroy_69214e0(obj,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MobileLayoutEditorOverlay.<>c__DisplayClass60_0$$.ctor
// il2cpp: void UI_MobileLayoutEditorOverlay___c__DisplayClass60_0___ctor (UI_MobileLayoutEditorOverlay___c__DisplayClass60_0_o* __this, const MethodInfo* method);
// 0x5ca5e00

void UI_MobileLayoutEditorOverlay___c__DisplayClass60_0___ctor
               (UI_MobileLayoutEditorOverlay___c__DisplayClass60_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MobileLayoutEditorOverlay.<>c__DisplayClass60_0$$<ShowEditPopup>b__0
// il2cpp: void UI_MobileLayoutEditorOverlay___c__DisplayClass60_0___ShowEditPopup_b__0 (UI_MobileLayoutEditorOverlay___c__DisplayClass60_0_o* __this, const MethodInfo* method);
// 0x5ca9be0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ca9f08: jmp 0x5caa313
// asm:   0x5caa24f: jmp 0x5caa313

void UI_MobileLayoutEditorOverlay___c__DisplayClass60_0___ShowEditPopup_b__0
               (UI_MobileLayoutEditorOverlay___c__DisplayClass60_0_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Settings_StringSetting_o *pSVar3;
  UI_MobileInputControlLayout_o *pUVar4;
  UI_MobileLayoutActionListEditor_o *__this_00;
  Settings_FloatSetting_o *pSVar5;
  Settings_BoolSetting_o *pSVar6;
  UI_MobileInputSkinEditState_o *pUVar7;
  UI_MobileInputLayout_o *pUVar8;
  UI_MobileInputControlLayout_array *pUVar9;
  bool bVar10;
  bool bVar11;
  System_String_o *pSVar12;
  System_String_o *pSVar13;
  MethodInfo *pMVar14;
  UI_MobileInputSkin_o *pUVar15;
  System_Collections_Generic_List_MobileInputControlLayout__o *pSVar16;
  MethodInfo *method_00;
  System_Collections_Generic_List_MobileInputControlLayout__o **targetAddress;
  UI_MobileInputControlLayout_o *pUVar17;
  UI_MobileLayoutEditorOverlay_o *pUVar18;
  System_Enum_o SStack_38;
  undefined4 uStack_28;
  
  if (Il2CppMethodInitialized_07547a6a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MobileInputControlLayout_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MobileInputControlLayout_Contains);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MobileInputControlLayout_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_MobileInputControlLayout);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputControlKind);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputControlShape);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    Il2CppMethodInitialized_07547a6a = '\x01';
  }
  pUVar18 = (__this->fields).__4__this;
  if (pUVar18 != (UI_MobileLayoutEditorOverlay_o *)0x0) {
    bVar10 = false;
    if ((pUVar18->fields)._role == 1) {
      pSVar3 = (__this->fields).kind;
      if (pSVar3 == (Settings_StringSetting_o *)0x0) goto label_05caa313;
      pSVar13 = (pSVar3->fields)._value;
      SStack_38.klass = (System_Enum_c *)TypeInfo_UI_MobileInputControlKind;
      SStack_38.monitor = (void *)0xffffffffffffffff;
      uStack_28 = 0;
      pSVar12 = System_Enum__ToString(&SStack_38,(MethodInfo *)0x0);
      bVar10 = System_String__op_Equality(pSVar13,pSVar12,(MethodInfo *)0x0);
    }
    pSVar3 = (__this->fields).label;
    if ((pSVar3 != (Settings_StringSetting_o *)0x0) &&
       (pUVar4 = (__this->fields).control, pUVar4 != (UI_MobileInputControlLayout_o *)0x0)) {
      (pUVar4->fields).Label = (pSVar3->fields)._value;
      Il2CppCodeGenWriteBarrier(&(pUVar4->fields).Label);
      pSVar3 = (__this->fields).kind;
      if ((pSVar3 != (Settings_StringSetting_o *)0x0) &&
         (pUVar4 = (__this->fields).control, pUVar4 != (UI_MobileInputControlLayout_o *)0x0)) {
        (pUVar4->fields).Kind = (pSVar3->fields)._value;
        Il2CppCodeGenWriteBarrier(&(pUVar4->fields).Kind);
        pSVar3 = (__this->fields).kind;
        if ((pSVar3 != (Settings_StringSetting_o *)0x0) &&
           ((__this->fields).__4__this != (UI_MobileLayoutEditorOverlay_o *)0x0)) {
          pUVar4 = (__this->fields).control;
          pSVar13 = (pSVar3->fields)._value;
          if (Il2CppMethodInitialized_07547a36 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputControlKind);
            Il2CppMethodInitialized_07547a36 = '\x01';
          }
          SStack_38.klass = (System_Enum_c *)TypeInfo_UI_MobileInputControlKind;
          SStack_38.monitor = (void *)0xffffffffffffffff;
          uStack_28 = 7;
          pSVar12 = System_Enum__ToString(&SStack_38,(MethodInfo *)0x0);
          bVar11 = System_String__op_Equality(pSVar13,pSVar12,(MethodInfo *)0x0);
          if (bVar11) {
            SStack_38.klass = (System_Enum_c *)TypeInfo_UI_MobileInputControlShape;
            SStack_38.monitor = (void *)0xffffffffffffffff;
            uStack_28 = 0;
            pSVar13 = System_Enum__ToString(&SStack_38,(MethodInfo *)0x0);
          }
          else {
            pSVar3 = (__this->fields).shape;
            if (pSVar3 == (Settings_StringSetting_o *)0x0) goto label_05caa313;
            pSVar13 = (pSVar3->fields)._value;
          }
          if (pUVar4 != (UI_MobileInputControlLayout_o *)0x0) {
            (pUVar4->fields).Shape = pSVar13;
            Il2CppCodeGenWriteBarrier(&(pUVar4->fields).Shape);
            pSVar3 = (__this->fields).popupMode;
            if ((pSVar3 != (Settings_StringSetting_o *)0x0) &&
               (pUVar4 = (__this->fields).control, pUVar4 != (UI_MobileInputControlLayout_o *)0x0)) {
              (pUVar4->fields).PopupMode = (pSVar3->fields)._value;
              pUVar18 = (UI_MobileLayoutEditorOverlay_o *)&(pUVar4->fields).PopupMode;
              Il2CppCodeGenWriteBarrier((void **)pUVar18);
              pSVar3 = (__this->fields).kind;
              if ((pSVar3 != (Settings_StringSetting_o *)0x0) &&
                 ((__this->fields).__4__this != (UI_MobileLayoutEditorOverlay_o *)0x0)) {
                pUVar4 = (__this->fields).control;
                pMVar14 = (MethodInfo *)(pSVar3->fields)._value;
                bVar11 = UI_MobileLayoutEditorOverlay__IsActionListKind
                                   (pUVar18,(System_String_o *)pMVar14,method_00);
                if (bVar11) {
                  __this_00 = (__this->fields).actionList;
                  if (__this_00 == (UI_MobileLayoutActionListEditor_o *)0x0) goto label_05caa313;
                  pMVar14 = (MethodInfo *)UI_MobileLayoutActionListEditor__GetActionsString(__this_00,pMVar14)
                  ;
                }
                else {
                  pMVar14 = (MethodInfo *)"None";
                }
                if (pUVar4 != (UI_MobileInputControlLayout_o *)0x0) {
                  (pUVar4->fields).Actions = (System_String_o *)pMVar14;
                  Il2CppCodeGenWriteBarrier(&(pUVar4->fields).Actions);
                  pSVar5 = (__this->fields).bindReelInAngle;
                  if ((pSVar5 != (Settings_FloatSetting_o *)0x0) &&
                     (pUVar4 = (__this->fields).control, pUVar4 != (UI_MobileInputControlLayout_o *)0x0)) {
                    (pUVar4->fields).BindReelInAngle = (pSVar5->fields)._value;
                    pSVar5 = (__this->fields).bindReelOutAngle;
                    if (pSVar5 != (Settings_FloatSetting_o *)0x0) {
                      (pUVar4->fields).BindReelOutAngle = (pSVar5->fields)._value;
                      if (bVar10 == false) {
                        (pUVar4->fields).AimAssistOnPress = false;
                        (pUVar4->fields).AimAssistOnRelease = false;
                        pSVar5 = (__this->fields).width;
                      }
                      else {
                        pSVar6 = (__this->fields).aimAssistOnPress;
                        if (pSVar6 == (Settings_BoolSetting_o *)0x0) goto label_05caa313;
                        (pUVar4->fields).AimAssistOnPress = (pSVar6->fields)._value;
                        pSVar6 = (__this->fields).aimAssistOnRelease;
                        if (pSVar6 == (Settings_BoolSetting_o *)0x0) goto label_05caa313;
                        (pUVar4->fields).AimAssistOnRelease = (pSVar6->fields)._value;
                        pSVar5 = (__this->fields).width;
                      }
                      if (pSVar5 != (Settings_FloatSetting_o *)0x0) {
                        (pUVar4->fields).Width = (pSVar5->fields)._value;
                        pSVar5 = (__this->fields).height;
                        if (pSVar5 != (Settings_FloatSetting_o *)0x0) {
                          (pUVar4->fields).Height = (pSVar5->fields)._value;
                          pUVar7 = (__this->fields).skin;
                          if (pUVar7 != (UI_MobileInputSkinEditState_o *)0x0) {
                            pMVar14 = (MethodInfo *)UI_MobileInputSkinEditState__ToSkin(pUVar7,pMVar14);
                            (pUVar4->fields).Skin = (UI_MobileInputSkin_o *)pMVar14;
                            Il2CppCodeGenWriteBarrier(&(pUVar4->fields).Skin);
                            pUVar7 = (__this->fields).onSkin;
                            if (pUVar7 != (UI_MobileInputSkinEditState_o *)0x0) {
                              pUVar4 = (__this->fields).control;
                              pMVar14 = (MethodInfo *)UI_MobileInputSkinEditState__ToSkin(pUVar7,pMVar14);
                              if (pUVar4 != (UI_MobileInputControlLayout_o *)0x0) {
                                (pUVar4->fields).OnSkin = (UI_MobileInputSkin_o *)pMVar14;
                                Il2CppCodeGenWriteBarrier(&(pUVar4->fields).OnSkin);
                                pUVar7 = (__this->fields).icon;
                                if (pUVar7 != (UI_MobileInputSkinEditState_o *)0x0) {
                                  pUVar4 = (__this->fields).control;
                                  pMVar14 = (MethodInfo *)UI_MobileInputSkinEditState__ToSkin(pUVar7,pMVar14);
                                  if (pUVar4 != (UI_MobileInputControlLayout_o *)0x0) {
                                    (pUVar4->fields).Icon = (UI_MobileInputSkin_o *)pMVar14;
                                    Il2CppCodeGenWriteBarrier(&(pUVar4->fields).Icon);
                                    pSVar5 = (__this->fields).iconSize;
                                    if ((pSVar5 != (Settings_FloatSetting_o *)0x0) &&
                                       (pUVar4 = (__this->fields).control,
                                       pUVar4 != (UI_MobileInputControlLayout_o *)0x0)) {
                                      (pUVar4->fields).IconSize = (pSVar5->fields)._value;
                                      pUVar7 = (__this->fields).joystickHandleSkin;
                                      if (pUVar7 != (UI_MobileInputSkinEditState_o *)0x0) {
                                        pMVar14 = (MethodInfo *)
                                                  UI_MobileInputSkinEditState__ToSkin(pUVar7,pMVar14);
                                        (pUVar4->fields).JoystickHandleSkin = (UI_MobileInputSkin_o *)pMVar14;
                                        Il2CppCodeGenWriteBarrier(&(pUVar4->fields).JoystickHandleSkin);
                                        pUVar7 = (__this->fields).joystickActiveSkin;
                                        if (pUVar7 != (UI_MobileInputSkinEditState_o *)0x0) {
                                          pUVar4 = (__this->fields).control;
                                          pMVar14 = (MethodInfo *)
                                                    UI_MobileInputSkinEditState__ToSkin(pUVar7,pMVar14);
                                          if (pUVar4 != (UI_MobileInputControlLayout_o *)0x0) {
                                            (pUVar4->fields).JoystickActiveSkin =
                                                 (UI_MobileInputSkin_o *)pMVar14;
                                            Il2CppCodeGenWriteBarrier(&(pUVar4->fields).JoystickActiveSkin);
                                            pUVar7 = (__this->fields).joystickRingSkin;
                                            if (pUVar7 != (UI_MobileInputSkinEditState_o *)0x0) {
                                              pUVar4 = (__this->fields).control;
                                              pMVar14 = (MethodInfo *)
                                                        UI_MobileInputSkinEditState__ToSkin(pUVar7,pMVar14);
                                              if (pUVar4 != (UI_MobileInputControlLayout_o *)0x0) {
                                                (pUVar4->fields).JoystickRingSkin =
                                                     (UI_MobileInputSkin_o *)pMVar14;
                                                Il2CppCodeGenWriteBarrier(&(pUVar4->fields).JoystickRingSkin);
                                                pUVar7 = (__this->fields).joystickReelInSkin;
                                                if (pUVar7 != (UI_MobileInputSkinEditState_o *)0x0) {
                                                  pUVar4 = (__this->fields).control;
                                                  pMVar14 = (MethodInfo *)
                                                            UI_MobileInputSkinEditState__ToSkin
                                                                      (pUVar7,pMVar14);
                                                  if (pUVar4 != (UI_MobileInputControlLayout_o *)0x0) {
                                                    (pUVar4->fields).JoystickReelInSkin =
                                                         (UI_MobileInputSkin_o *)pMVar14;
                                                    Il2CppCodeGenWriteBarrier
                                                              (&(pUVar4->fields).JoystickReelInSkin);
                                                    pUVar7 = (__this->fields).joystickReelOutSkin;
                                                    if (pUVar7 != (UI_MobileInputSkinEditState_o *)0x0) {
                                                      pUVar4 = (__this->fields).control;
                                                      pUVar15 = UI_MobileInputSkinEditState__ToSkin
                                                                          (pUVar7,pMVar14);
                                                      if (pUVar4 != (UI_MobileInputControlLayout_o *)0x0) {
                                                        (pUVar4->fields).JoystickReelOutSkin = pUVar15;
                                                        Il2CppCodeGenWriteBarrier
                                                                  (&(pUVar4->fields).JoystickReelOutSkin);
                                                        pSVar5 = (__this->fields).joystickBaseScale;
                                                        if ((pSVar5 != (Settings_FloatSetting_o *)0x0) &&
                                                           (pUVar4 = (__this->fields).control,
                                                           pUVar4 != (UI_MobileInputControlLayout_o *)0x0)) {
                                                          (pUVar4->fields).JoystickBaseScale =
                                                               (pSVar5->fields)._value;
                                                          pSVar5 = (__this->fields).joystickHandleScale;
                                                          if (pSVar5 != (Settings_FloatSetting_o *)0x0) {
                                                            (pUVar4->fields).JoystickHandleScale =
                                                                 (pSVar5->fields)._value;
                                                            pSVar5 = (__this->fields).
                                                                     joystickReelOutRingDiameter;
                                                            if (pSVar5 != (Settings_FloatSetting_o *)0x0) {
                                                              (pUVar4->fields).JoystickReelOutRingDiameter =
                                                                   (pSVar5->fields)._value;
                                                              pSVar6 = (__this->fields).moveContentWithTouch;
                                                              if (pSVar6 != (Settings_BoolSetting_o *)0x0) {
                                                                (pUVar4->fields).DisableContentMovement =
                                                                     (bool)((pSVar6->fields)._value ^ 1);
                                                                pSVar6 = (__this->fields).allowLookAreaThrough
                                                                ;
                                                                if (pSVar6 != (Settings_BoolSetting_o *)0x0) {
                                                                  (pUVar4->fields).AllowLookAreaThrough =
                                                                       (pSVar6->fields)._value;
                                                                  pUVar17 = (__this->fields).parentControl;
                                                                  if (pUVar17 ==
                                                                      (UI_MobileInputControlLayout_o *)0x0) {
                                                                    if ((__this->fields).addOnConfirm == false
                                                                       ) {
                                                                      return;
                                                                    }
                                                                    pUVar18 = (__this->fields).__4__this;
                                                                    if (((pUVar18 ==
                                                                          (UI_MobileLayoutEditorOverlay_o *)
                                                                          0x0) || (pUVar8 = (pUVar18->fields).
                                                                                            _layout,
                                                                                  pUVar8 == (
                                                       UI_MobileInputLayout_o *)0x0)) ||
                                                       (pSVar16 = (pUVar8->fields).Controls,
                                                       pSVar16 ==
                                                       (
                                                       System_Collections_Generic_List_MobileInputControlLayout__o
                                                       *)0x0)) goto label_05caa313;
                                                       bVar10 = 
                                                       System_Collections_Generic_List_object___Contains
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )pSVar16,(Il2CppObject *)pUVar4,
                                                                  (MethodInfo_395D6D0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_List_MobileInputControlLayout_Contains
                                                       );
                                                       if (bVar10) {
                                                         return;
                                                       }
                                                       pUVar18 = (__this->fields).__4__this;
                                                       if ((pUVar18 == (UI_MobileLayoutEditorOverlay_o *)0x0)
                                                          || (pUVar8 = (pUVar18->fields)._layout,
                                                             pUVar8 == (UI_MobileInputLayout_o *)0x0))
                                                       goto label_05caa313;
                                                       pSVar16 = (pUVar8->fields).Controls;
                                                       pMVar14 = 
                                                       MethodInfo_System_Collections_Generic_List_MobileInputControlLayout_Add
                                                       ;
                                                       }
                                                       else {
                                                         if ((pUVar17->fields).Children ==
                                                             (
                                                       System_Collections_Generic_List_MobileInputControlLayout__o
                                                       *)0x0) {
                                                         targetAddress = &(pUVar17->fields).Children;
                                                         pSVar16 = il2cpp_codegen_object_new
                                                                             ((Il2CppClass *)
                                                                                                                                                            
                                                       TypeInfo_System_Collections_Generic_List_MobileInputControlLayout
                                                       );
                                                       System_Collections_Generic_List_object____ctor
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )pSVar16,(MethodInfo_395C910 *)
                                                                                                                                                      
                                                       MethodInfo_System_Collections_Generic_List_MobileInputControlLayout_ctor
                                                       );
                                                       *targetAddress = pSVar16;
                                                       Il2CppCodeGenWriteBarrier(targetAddress);
                                                       pUVar17 = (__this->fields).parentControl;
                                                       if (pUVar17 == (UI_MobileInputControlLayout_o *)0x0)
                                                       goto label_05caa313;
                                                       }
                                                       pSVar16 = (pUVar17->fields).Children;
                                                       if (pSVar16 ==
                                                           (
                                                       System_Collections_Generic_List_MobileInputControlLayout__o
                                                       *)0x0) goto label_05caa313;
                                                       bVar10 = 
                                                       System_Collections_Generic_List_object___Contains
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )pSVar16,(Il2CppObject *)
                                                                           (__this->fields).control,
                                                                  (MethodInfo_395D6D0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_List_MobileInputControlLayout_Contains
                                                       );
                                                       if (bVar10) {
                                                         return;
                                                       }
                                                       pUVar4 = (__this->fields).parentControl;
                                                       if (pUVar4 == (UI_MobileInputControlLayout_o *)0x0)
                                                       goto label_05caa313;
                                                       pSVar16 = (pUVar4->fields).Children;
                                                       pMVar14 = 
                                                       MethodInfo_System_Collections_Generic_List_MobileInputControlLayout_Add
                                                       ;
                                                       }
                                                       MethodInfo_System_Collections_Generic_List_MobileInputControlLayout_Add
                                                            = pMVar14;
                                                       if (pSVar16 !=
                                                           (
                                                       System_Collections_Generic_List_MobileInputControlLayout__o
                                                       *)0x0) {
                                                         pUVar4 = (__this->fields).control;
                                                         piVar1 = &(pSVar16->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pUVar9 = (pSVar16->fields)._items;
                                                         if (pUVar9 != (UI_MobileInputControlLayout_array *)
                                                                       0x0) {
                                                           uVar2 = (pSVar16->fields)._size;
                                                           if (uVar2 < (uint)pUVar9->max_length) {
                                                             (pSVar16->fields)._size = uVar2 + 1;
                                                             pUVar9->m_Items[(int)uVar2] = pUVar4;
                                                             Il2CppCodeGenWriteBarrier
                                                                       (pUVar9->m_Items + (int)uVar2);
                                                           }
                                                           else {
                                                                                                                          
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )pSVar16,(Il2CppObject *)pUVar4,
                                                                  (MethodInfo_395D230 *)
                                                                  pMVar14->klass->rgctx_data[0xe].method);
                                                       }
                                                       return;
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
label_05caa313:
  ThrowNullReferenceException();
}


// UI.MobileLayoutEditorOverlay.<>c__DisplayClass60_0$$<ShowEditPopup>b__1
// il2cpp: void UI_MobileLayoutEditorOverlay___c__DisplayClass60_0___ShowEditPopup_b__1 (UI_MobileLayoutEditorOverlay___c__DisplayClass60_0_o* __this, const MethodInfo* method);
// 0x5caa760

void UI_MobileLayoutEditorOverlay___c__DisplayClass60_0___ShowEditPopup_b__1
               (UI_MobileLayoutEditorOverlay___c__DisplayClass60_0_o *__this,MethodInfo *method)

{
  System_Action_o *pSVar1;
  UnityEngine_Object_o *pUVar2;
  UI_MobileLayoutEditorOverlay_o *pUVar3;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  UnityEngine_GameObject_o *pUVar4;
  bool bVar5;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *in_R8;
  
  if (Il2CppMethodInitialized_07547a6b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_MobileInputControlLayout_RectTransform_ContainsKey
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547a6b = '\x01';
  }
  pSVar1 = (__this->fields).applyChanges;
  if (pSVar1 != (System_Action_o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code);
    pUVar2 = (UnityEngine_Object_o *)(__this->fields).panel;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    method_01 = (MethodInfo *)0x0;
    UnityEngine_Object__Destroy_69214e0(pUVar2,(MethodInfo *)0x0);
    pUVar3 = (__this->fields).__4__this;
    if (pUVar3 != (UI_MobileLayoutEditorOverlay_o *)0x0) {
      UI_MobileLayoutEditorOverlay__RebuildControls(pUVar3,method_01);
      pUVar3 = (__this->fields).__4__this;
      if ((pUVar3 != (UI_MobileLayoutEditorOverlay_o *)0x0) &&
         (__this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                      (pUVar3->fields)._controlRects,
         __this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
        bVar5 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                          (__this_00,(Il2CppObject *)(__this->fields).control,
                           (MethodInfo_4AAD6F0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_MobileInputControlLayout_RectTransform_ContainsKey
                          );
        if (bVar5) {
          pUVar3 = (__this->fields).__4__this;
          if (pUVar3 == (UI_MobileLayoutEditorOverlay_o *)0x0) goto label_05caa94c;
          UI_MobileLayoutEditorOverlay__SelectControl(pUVar3,(__this->fields).control,method_00);
        }
        pUVar3 = (__this->fields).__4__this;
        if ((__this->fields).parentControl == (UI_MobileInputControlLayout_o *)0x0) {
          if (pUVar3 != (UI_MobileLayoutEditorOverlay_o *)0x0) {
            if (Il2CppMethodInitialized_07547a47 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
              Il2CppMethodInitialized_07547a47 = '\x01';
            }
            pUVar2 = (UnityEngine_Object_o *)(pUVar3->fields)._returnButton;
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar5 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if (!bVar5) {
              return;
            }
            pUVar4 = (pUVar3->fields)._returnButton;
            if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
              UnityEngine_GameObject__SetActive(pUVar4,true,(MethodInfo *)0x0);
              return;
            }
          }
        }
        else if (pUVar3 != (UI_MobileLayoutEditorOverlay_o *)0x0) {
          if (Il2CppMethodInitialized_07547a47 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
            Il2CppMethodInitialized_07547a47 = '\x01';
          }
          pUVar2 = (UnityEngine_Object_o *)(pUVar3->fields)._returnButton;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar5 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar5) {
            pUVar4 = (pUVar3->fields)._returnButton;
            if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto label_05caa94c;
            UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
          }
          pUVar3 = (__this->fields).__4__this;
          if (pUVar3 != (UI_MobileLayoutEditorOverlay_o *)0x0) {
            UI_MobileLayoutEditorOverlay__ShowEditPopup
                      (pUVar3,(__this->fields).parentControl,false,(UI_MobileInputControlLayout_o *)0x0,in_R8)
            ;
            return;
          }
        }
      }
    }
  }
label_05caa94c:
  ThrowNullReferenceException();
}


// UI.MobileLayoutEditorOverlay.<>c__DisplayClass60_0$$<ShowEditPopup>b__2
// il2cpp: void UI_MobileLayoutEditorOverlay___c__DisplayClass60_0___ShowEditPopup_b__2 (UI_MobileLayoutEditorOverlay___c__DisplayClass60_0_o* __this, const MethodInfo* method);
// 0x5caa960

void UI_MobileLayoutEditorOverlay___c__DisplayClass60_0___ShowEditPopup_b__2
               (UI_MobileLayoutEditorOverlay___c__DisplayClass60_0_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  UI_MobileLayoutEditorOverlay_o *pUVar2;
  UnityEngine_GameObject_o *pUVar3;
  bool bVar4;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *in_R8;
  
  if (Il2CppMethodInitialized_07547a6c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547a6c = '\x01';
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields).panel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  method_01 = (MethodInfo *)0x0;
  UnityEngine_Object__Destroy_69214e0(pUVar1,(MethodInfo *)0x0);
  pUVar2 = (__this->fields).__4__this;
  if ((__this->fields).parentControl == (UI_MobileInputControlLayout_o *)0x0) {
    if (pUVar2 != (UI_MobileLayoutEditorOverlay_o *)0x0) {
      if (Il2CppMethodInitialized_07547a47 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        Il2CppMethodInitialized_07547a47 = '\x01';
      }
      pUVar1 = (UnityEngine_Object_o *)(pUVar2->fields)._returnButton;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar4) {
        return;
      }
      pUVar3 = (pUVar2->fields)._returnButton;
      if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
        return;
      }
    }
  }
  else if (pUVar2 != (UI_MobileLayoutEditorOverlay_o *)0x0) {
    UI_MobileLayoutEditorOverlay__RebuildControls(pUVar2,method_01);
    pUVar2 = (__this->fields).__4__this;
    if (pUVar2 != (UI_MobileLayoutEditorOverlay_o *)0x0) {
      UI_MobileLayoutEditorOverlay__SelectControl(pUVar2,(__this->fields).parentControl,method_00);
      pUVar2 = (__this->fields).__4__this;
      if (pUVar2 != (UI_MobileLayoutEditorOverlay_o *)0x0) {
        if (Il2CppMethodInitialized_07547a47 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
          Il2CppMethodInitialized_07547a47 = '\x01';
        }
        pUVar1 = (UnityEngine_Object_o *)(pUVar2->fields)._returnButton;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar4 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar4) {
          pUVar3 = (pUVar2->fields)._returnButton;
          if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto label_05caaaf8;
          UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
        }
        pUVar2 = (__this->fields).__4__this;
        if (pUVar2 != (UI_MobileLayoutEditorOverlay_o *)0x0) {
          UI_MobileLayoutEditorOverlay__ShowEditPopup
                    (pUVar2,(__this->fields).parentControl,false,(UI_MobileInputControlLayout_o *)0x0,in_R8);
          return;
        }
      }
    }
  }
label_05caaaf8:
  ThrowNullReferenceException();
}


// UI.MobileLayoutEditorOverlay.<>c__DisplayClass60_0$$<ShowEditPopup>b__3
// il2cpp: void UI_MobileLayoutEditorOverlay___c__DisplayClass60_0___ShowEditPopup_b__3 (UI_MobileLayoutEditorOverlay___c__DisplayClass60_0_o* __this, const MethodInfo* method);
// 0x5caab00

void UI_MobileLayoutEditorOverlay___c__DisplayClass60_0___ShowEditPopup_b__3
               (UI_MobileLayoutEditorOverlay___c__DisplayClass60_0_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  UI_MobileLayoutEditorOverlay_o *pUVar2;
  UI_MobileLayoutActionListEditor_o *__this_00;
  UnityEngine_Object_o *pUVar3;
  UnityEngine_GameObject_o *pUVar4;
  bool bVar5;
  bool value;
  bool value_00;
  bool value_01;
  bool bVar6;
  bool value_02;
  bool bVar7;
  System_String_o *pSVar8;
  System_String_o *pSVar9;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_01;
  MethodInfo **__this_01;
  System_Enum_o SStack_80;
  undefined4 uStack_70;
  ulong uStack_68;
  System_Enum_o SStack_60;
  undefined4 uStack_50;
  System_Enum_o SStack_48;
  undefined4 uStack_38;
  
  __this_01 = (MethodInfo **)__this;
  if (Il2CppMethodInitialized_07547a6d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputControlKind);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputControlShape);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    __this_01 = &MethodInfo_Settings_TypedSetting_string_set_Value;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    Il2CppMethodInitialized_07547a6d = '\x01';
    in_RDX = extraout_RDX;
  }
  pSVar1 = (__this->fields).kind;
  if ((pSVar1 != (Settings_StringSetting_o *)0x0) &&
     ((__this->fields).__4__this != (UI_MobileLayoutEditorOverlay_o *)0x0)) {
    bVar5 = UI_MobileLayoutEditorOverlay__IsActionListKind
                      ((UI_MobileLayoutEditorOverlay_o *)__this_01,(pSVar1->fields)._value,in_RDX);
    pSVar1 = (__this->fields).kind;
    if ((pSVar1 != (Settings_StringSetting_o *)0x0) &&
       ((__this->fields).__4__this != (UI_MobileLayoutEditorOverlay_o *)0x0)) {
      value = UI_MobileLayoutEditorOverlay__UsesOnSkin
                        ((UI_MobileLayoutEditorOverlay_o *)__this_01,(pSVar1->fields)._value,method_00);
      pSVar1 = (__this->fields).kind;
      if (pSVar1 != (Settings_StringSetting_o *)0x0) {
        pSVar9 = (pSVar1->fields)._value;
        SStack_48.klass = (System_Enum_c *)TypeInfo_UI_MobileInputControlKind;
        SStack_48.monitor = (void *)0xffffffffffffffff;
        uStack_38 = 2;
        pSVar8 = System_Enum__ToString(&SStack_48,(MethodInfo *)0x0);
        value_00 = System_String__op_Equality(pSVar9,pSVar8,(MethodInfo *)0x0);
        pSVar1 = (__this->fields).kind;
        if (pSVar1 != (Settings_StringSetting_o *)0x0) {
          pSVar9 = (pSVar1->fields)._value;
          SStack_60.klass = (System_Enum_c *)TypeInfo_UI_MobileInputControlKind;
          SStack_60.monitor = (void *)0xffffffffffffffff;
          uStack_50 = 6;
          pSVar8 = System_Enum__ToString(&SStack_60,(MethodInfo *)0x0);
          value_01 = System_String__op_Equality(pSVar9,pSVar8,(MethodInfo *)0x0);
          pSVar1 = (__this->fields).kind;
          if ((pSVar1 != (Settings_StringSetting_o *)0x0) &&
             ((__this->fields).__4__this != (UI_MobileLayoutEditorOverlay_o *)0x0)) {
            pSVar9 = (pSVar1->fields)._value;
            if (Il2CppMethodInitialized_07547a38 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputControlKind);
              Il2CppMethodInitialized_07547a38 = '\x01';
            }
            SStack_80.klass = (System_Enum_c *)TypeInfo_UI_MobileInputControlKind;
            SStack_80.monitor = (void *)0xffffffffffffffff;
            uStack_70 = 3;
            pSVar8 = System_Enum__ToString(&SStack_80,(MethodInfo *)0x0);
            bVar6 = System_String__op_Equality(pSVar9,pSVar8,(MethodInfo *)0x0);
            value_02 = true;
            if (!bVar6) {
              SStack_80.klass = (System_Enum_c *)TypeInfo_UI_MobileInputControlKind;
              SStack_80.monitor = (void *)0xffffffffffffffff;
              uStack_70 = 4;
              pSVar8 = System_Enum__ToString(&SStack_80,(MethodInfo *)0x0);
              value_02 = System_String__op_Equality(pSVar9,pSVar8,(MethodInfo *)0x0);
            }
            pSVar1 = (__this->fields).kind;
            if ((pSVar1 != (Settings_StringSetting_o *)0x0) &&
               ((__this->fields).__4__this != (UI_MobileLayoutEditorOverlay_o *)0x0)) {
              pSVar9 = (pSVar1->fields)._value;
              if (Il2CppMethodInitialized_07547a39 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputControlKind);
                Il2CppMethodInitialized_07547a39 = '\x01';
              }
              SStack_80.klass = (System_Enum_c *)TypeInfo_UI_MobileInputControlKind;
              SStack_80.monitor = (void *)0xffffffffffffffff;
              uStack_70 = 7;
              uStack_68 = 0;
              pSVar8 = System_Enum__ToString(&SStack_80,(MethodInfo *)0x0);
              bVar6 = System_String__op_Inequality(pSVar9,pSVar8,(MethodInfo *)0x0);
              pUVar2 = (__this->fields).__4__this;
              if (pUVar2 != (UI_MobileLayoutEditorOverlay_o *)0x0) {
                method_01 = extraout_RDX_00;
                if ((pUVar2->fields)._role == 1) {
                  pSVar1 = (__this->fields).kind;
                  if (pSVar1 == (Settings_StringSetting_o *)0x0) goto label_05cab3f0;
                  pSVar9 = (pSVar1->fields)._value;
                  SStack_80.klass = (System_Enum_c *)TypeInfo_UI_MobileInputControlKind;
                  SStack_80.monitor = (void *)0xffffffffffffffff;
                  uStack_70 = 0;
                  pSVar8 = System_Enum__ToString(&SStack_80,(MethodInfo *)0x0);
                  bVar7 = System_String__op_Equality(pSVar9,pSVar8,(MethodInfo *)0x0);
                  uStack_68 = (ulong)bVar7;
                  method_01 = extraout_RDX_01;
                }
                __this_00 = (__this->fields).actionList;
                if (__this_00 != (UI_MobileLayoutActionListEditor_o *)0x0) {
                  UI_MobileLayoutActionListEditor__SetVisible(__this_00,bVar5,method_01);
                }
                pUVar3 = (UnityEngine_Object_o *)(__this->fields).popupModeDropdown;
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                bVar5 = UnityEngine_Object__op_Inequality
                                  (pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                if (bVar5) {
                  pUVar4 = (__this->fields).popupModeDropdown;
                  if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto label_05cab3f0;
                  UnityEngine_GameObject__SetActive(pUVar4,value_00,(MethodInfo *)0x0);
                }
                pUVar3 = (UnityEngine_Object_o *)(__this->fields).popupChildrenObject;
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                bVar5 = UnityEngine_Object__op_Inequality
                                  (pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                if (bVar5) {
                  pUVar4 = (__this->fields).popupChildrenObject;
                  if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto label_05cab3f0;
                  UnityEngine_GameObject__SetActive(pUVar4,value_00,(MethodInfo *)0x0);
                }
                pUVar3 = (UnityEngine_Object_o *)(__this->fields).onSkinSetting;
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                bVar5 = UnityEngine_Object__op_Inequality
                                  (pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                if (bVar5) {
                  pUVar4 = (__this->fields).onSkinSetting;
                  if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto label_05cab3f0;
                  UnityEngine_GameObject__SetActive(pUVar4,value,(MethodInfo *)0x0);
                }
                pUVar3 = (UnityEngine_Object_o *)(__this->fields).joystickHandleSkinSetting;
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                bVar5 = UnityEngine_Object__op_Inequality
                                  (pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                if (bVar5) {
                  pUVar4 = (__this->fields).joystickHandleSkinSetting;
                  if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto label_05cab3f0;
                  UnityEngine_GameObject__SetActive(pUVar4,value_01,(MethodInfo *)0x0);
                }
                pUVar3 = (UnityEngine_Object_o *)(__this->fields).joystickActiveSkinSetting;
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                bVar5 = UnityEngine_Object__op_Inequality
                                  (pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                if (bVar5) {
                  pUVar4 = (__this->fields).joystickActiveSkinSetting;
                  if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto label_05cab3f0;
                  UnityEngine_GameObject__SetActive(pUVar4,value_01,(MethodInfo *)0x0);
                }
                pUVar3 = (UnityEngine_Object_o *)(__this->fields).joystickRingSkinSetting;
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                bVar5 = UnityEngine_Object__op_Inequality
                                  (pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                if (bVar5) {
                  pUVar4 = (__this->fields).joystickRingSkinSetting;
                  if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto label_05cab3f0;
                  UnityEngine_GameObject__SetActive(pUVar4,value_01,(MethodInfo *)0x0);
                }
                pUVar3 = (UnityEngine_Object_o *)(__this->fields).joystickReelInSkinSetting;
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                bVar5 = UnityEngine_Object__op_Inequality
                                  (pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                if (bVar5) {
                  pUVar4 = (__this->fields).joystickReelInSkinSetting;
                  if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto label_05cab3f0;
                  UnityEngine_GameObject__SetActive(pUVar4,value_01,(MethodInfo *)0x0);
                }
                pUVar3 = (UnityEngine_Object_o *)(__this->fields).joystickReelOutSkinSetting;
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                bVar5 = UnityEngine_Object__op_Inequality
                                  (pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                if (bVar5) {
                  pUVar4 = (__this->fields).joystickReelOutSkinSetting;
                  if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto label_05cab3f0;
                  UnityEngine_GameObject__SetActive(pUVar4,value_01,(MethodInfo *)0x0);
                }
                pUVar3 = (UnityEngine_Object_o *)(__this->fields).joystickBaseScaleSetting;
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                bVar5 = UnityEngine_Object__op_Inequality
                                  (pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                if (bVar5) {
                  pUVar4 = (__this->fields).joystickBaseScaleSetting;
                  if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto label_05cab3f0;
                  UnityEngine_GameObject__SetActive(pUVar4,value_01,(MethodInfo *)0x0);
                }
                pUVar3 = (UnityEngine_Object_o *)(__this->fields).joystickHandleScaleSetting;
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                bVar5 = UnityEngine_Object__op_Inequality
                                  (pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                if (bVar5) {
                  pUVar4 = (__this->fields).joystickHandleScaleSetting;
                  if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto label_05cab3f0;
                  UnityEngine_GameObject__SetActive(pUVar4,value_01,(MethodInfo *)0x0);
                }
                pUVar3 = (UnityEngine_Object_o *)(__this->fields).joystickReelOutRingDiameterSetting;
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                bVar5 = UnityEngine_Object__op_Inequality
                                  (pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                if (bVar5) {
                  pUVar4 = (__this->fields).joystickReelOutRingDiameterSetting;
                  if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto label_05cab3f0;
                  UnityEngine_GameObject__SetActive(pUVar4,value_01,(MethodInfo *)0x0);
                }
                pUVar3 = (UnityEngine_Object_o *)(__this->fields).moveContentWithTouchToggle;
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                bVar5 = UnityEngine_Object__op_Inequality
                                  (pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                if (bVar5) {
                  pUVar4 = (__this->fields).moveContentWithTouchToggle;
                  if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto label_05cab3f0;
                  UnityEngine_GameObject__SetActive(pUVar4,value_02,(MethodInfo *)0x0);
                }
                pUVar3 = (UnityEngine_Object_o *)(__this->fields).allowLookAreaThroughToggle;
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                bVar5 = UnityEngine_Object__op_Inequality
                                  (pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                if (bVar5) {
                  pUVar4 = (__this->fields).allowLookAreaThroughToggle;
                  if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto label_05cab3f0;
                  UnityEngine_GameObject__SetActive(pUVar4,bVar6,(MethodInfo *)0x0);
                }
                pUVar3 = (UnityEngine_Object_o *)(__this->fields).bindReelInAngleSetting;
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                bVar5 = UnityEngine_Object__op_Inequality
                                  (pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                if (bVar5) {
                  pUVar4 = (__this->fields).bindReelInAngleSetting;
                  if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto label_05cab3f0;
                  UnityEngine_GameObject__SetActive(pUVar4,value_01,(MethodInfo *)0x0);
                }
                pUVar3 = (UnityEngine_Object_o *)(__this->fields).bindReelOutAngleSetting;
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                bVar5 = UnityEngine_Object__op_Inequality
                                  (pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                if (bVar5) {
                  pUVar4 = (__this->fields).bindReelOutAngleSetting;
                  if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto label_05cab3f0;
                  UnityEngine_GameObject__SetActive(pUVar4,value_01,(MethodInfo *)0x0);
                }
                pUVar3 = (UnityEngine_Object_o *)(__this->fields).aimAssistOnPressToggle;
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                bVar5 = UnityEngine_Object__op_Inequality
                                  (pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                if (bVar5) {
                  pUVar4 = (__this->fields).aimAssistOnPressToggle;
                  if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto label_05cab3f0;
                  UnityEngine_GameObject__SetActive(pUVar4,SUB81(uStack_68,0),(MethodInfo *)0x0);
                }
                pUVar3 = (UnityEngine_Object_o *)(__this->fields).aimAssistOnReleaseToggle;
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                bVar5 = UnityEngine_Object__op_Inequality
                                  (pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                if (bVar5) {
                  pUVar4 = (__this->fields).aimAssistOnReleaseToggle;
                  if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto label_05cab3f0;
                  UnityEngine_GameObject__SetActive(pUVar4,SUB81(uStack_68,0),(MethodInfo *)0x0);
                }
                pUVar3 = (UnityEngine_Object_o *)(__this->fields).shapeDropdown;
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                bVar5 = UnityEngine_Object__op_Inequality
                                  (pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                if (bVar5) {
                  pSVar1 = (__this->fields).kind;
                  if ((pSVar1 == (Settings_StringSetting_o *)0x0) ||
                     ((__this->fields).__4__this == (UI_MobileLayoutEditorOverlay_o *)0x0)) goto label_05cab3f0;
                  pUVar4 = (__this->fields).shapeDropdown;
                  pSVar9 = (pSVar1->fields)._value;
                  if (Il2CppMethodInitialized_07547a36 == '\0') {
                    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputControlKind);
                    Il2CppMethodInitialized_07547a36 = '\x01';
                  }
                  SStack_80.klass = (System_Enum_c *)TypeInfo_UI_MobileInputControlKind;
                  SStack_80.monitor = (void *)0xffffffffffffffff;
                  uStack_70 = 7;
                  pSVar8 = System_Enum__ToString(&SStack_80,(MethodInfo *)0x0);
                  bVar5 = System_String__op_Equality(pSVar9,pSVar8,(MethodInfo *)0x0);
                  if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto label_05cab3f0;
                  UnityEngine_GameObject__SetActive(pUVar4,!bVar5,(MethodInfo *)0x0);
                }
                pSVar1 = (__this->fields).kind;
                if ((pSVar1 != (Settings_StringSetting_o *)0x0) &&
                   ((__this->fields).__4__this != (UI_MobileLayoutEditorOverlay_o *)0x0)) {
                  pSVar9 = (pSVar1->fields)._value;
                  if (Il2CppMethodInitialized_07547a36 == '\0') {
                    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputControlKind);
                    Il2CppMethodInitialized_07547a36 = '\x01';
                  }
                  SStack_80.klass = (System_Enum_c *)TypeInfo_UI_MobileInputControlKind;
                  SStack_80.monitor = (void *)0xffffffffffffffff;
                  uStack_70 = 7;
                  pSVar8 = System_Enum__ToString(&SStack_80,(MethodInfo *)0x0);
                  bVar5 = System_String__op_Equality(pSVar9,pSVar8,(MethodInfo *)0x0);
                  if (bVar5) {
                    pSVar1 = (__this->fields).shape;
                    SStack_80.klass = (System_Enum_c *)TypeInfo_UI_MobileInputControlShape;
                    SStack_80.monitor = (void *)0xffffffffffffffff;
                    uStack_70 = 0;
                    pSVar9 = System_Enum__ToString(&SStack_80,(MethodInfo *)0x0);
                    if (pSVar1 == (Settings_StringSetting_o *)0x0) goto label_05cab3f0;
                    Settings_TypedSetting_object___set_Value
                              ((Settings_TypedSetting_T__o *)pSVar1,(Il2CppObject *)pSVar9,
                               (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
                  }
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
label_05cab3f0:
  ThrowNullReferenceException();
}


// UI.MobileLayoutEditorOverlay.<>c__DisplayClass60_0$$<ShowEditPopup>b__4
// il2cpp: void UI_MobileLayoutEditorOverlay___c__DisplayClass60_0___ShowEditPopup_b__4 (UI_MobileLayoutEditorOverlay___c__DisplayClass60_0_o* __this, const MethodInfo* method);
// 0x5cab510

void UI_MobileLayoutEditorOverlay___c__DisplayClass60_0___ShowEditPopup_b__4
               (UI_MobileLayoutEditorOverlay___c__DisplayClass60_0_o *__this,MethodInfo *method)

{
  System_Action_o *pSVar1;
  code *vtableDispatch;
  undefined8 in_RDX;
  
  pSVar1 = (__this->fields).refreshEditableOptions;
  if (pSVar1 == (System_Action_o *)0x0) {
    ThrowNullReferenceException();
  }
  vtableDispatch = (code *)(pSVar1->fields).invoke_impl;
  (*vtableDispatch)((pSVar1->fields).method_code,(pSVar1->fields).method,in_RDX,vtableDispatch);
  return;
}


// UI.MobileLayoutEditorOverlay.<>c__DisplayClass61_0$$.ctor
// il2cpp: void UI_MobileLayoutEditorOverlay___c__DisplayClass61_0___ctor (UI_MobileLayoutEditorOverlay___c__DisplayClass61_0_o* __this, const MethodInfo* method);
// 0x5ca7350

void UI_MobileLayoutEditorOverlay___c__DisplayClass61_0___ctor
               (UI_MobileLayoutEditorOverlay___c__DisplayClass61_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MobileLayoutEditorOverlay.<>c__DisplayClass61_0$$<CreateSkinSetting>b__0
// il2cpp: void UI_MobileLayoutEditorOverlay___c__DisplayClass61_0___CreateSkinSetting_b__0 (UI_MobileLayoutEditorOverlay___c__DisplayClass61_0_o* __this, const MethodInfo* method);
// 0x5cab540

void UI_MobileLayoutEditorOverlay___c__DisplayClass61_0___CreateSkinSetting_b__0
               (UI_MobileLayoutEditorOverlay___c__DisplayClass61_0_o *__this,MethodInfo *method)

{
  UI_MobileLayoutEditorOverlay_o *pUVar1;
  UnityEngine_RectTransform_o *parent;
  System_String_o *current;
  System_Action_string__o *__this_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547a6e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass61_0_CreateSkinSetting_b__2);
    Il2CppMethodInitialized_07547a6e = '\x01';
  }
  pUVar1 = (__this->fields).__4__this;
  if ((pUVar1 == (UI_MobileLayoutEditorOverlay_o *)0x0) ||
     (method_00 = (MethodInfo *)(__this->fields).state, method_00 == (MethodInfo *)0x0)) {
    ThrowNullReferenceException();
  }
  parent = (pUVar1->fields)._root;
  current = (System_String_o *)method_00->name;
  __this_00 = (__this->fields).__9__2;
  if (__this_00 == (System_Action_string__o *)0x0) {
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_string);
    method_00 = (MethodInfo *)0x0;
    System_Action_object____ctor
              ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass61_0_CreateSkinSetting_b__2,
               (MethodInfo_4A81BE0 *)0x0);
    (__this->fields).__9__2 = __this_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__9__2);
  }
  UI_MobileLayoutSkinPickerModal__Open((UnityEngine_Transform_o *)parent,current,__this_00,method_00);
  return;
}


// UI.MobileLayoutEditorOverlay.<>c__DisplayClass61_0$$<CreateSkinSetting>b__2
// il2cpp: void UI_MobileLayoutEditorOverlay___c__DisplayClass61_0___CreateSkinSetting_b__2 (UI_MobileLayoutEditorOverlay___c__DisplayClass61_0_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5cab680

void UI_MobileLayoutEditorOverlay___c__DisplayClass61_0___CreateSkinSetting_b__2
               (UI_MobileLayoutEditorOverlay___c__DisplayClass61_0_o *__this,System_String_o *value,
               MethodInfo *method)

{
  UI_MobileInputSkinEditState_o *pUVar1;
  UnityEngine_UI_Text_o *pUVar2;
  bool bVar3;
  System_String_o *pSVar4;
  MethodInfo *method_00;
  UnityEngine_UI_Text_o *__this_00;
  
  if (Il2CppMethodInitialized_07547a6f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547a6f = '\x01';
  }
  pUVar1 = (__this->fields).state;
  if (pUVar1 != (UI_MobileInputSkinEditState_o *)0x0) {
    (pUVar1->fields).Image = value;
    Il2CppCodeGenWriteBarrier(&(pUVar1->fields).Image);
    __this_00 = (__this->fields).selectText;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar3) {
      return;
    }
    pUVar1 = (__this->fields).state;
    if ((pUVar1 != (UI_MobileInputSkinEditState_o *)0x0) &&
       ((__this->fields).__4__this != (UI_MobileLayoutEditorOverlay_o *)0x0)) {
      pUVar2 = (__this->fields).selectText;
      pSVar4 = UI_MobileLayoutEditorOverlay__GetSkinButtonLabel
                         ((UI_MobileLayoutEditorOverlay_o *)__this_00,(pUVar1->fields).Image,method_00);
      if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
        (*(pUVar2->klass->vtable)._75_set_text.methodPtr)
                  (pUVar2,pSVar4,(pUVar2->klass->vtable)._75_set_text.method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MobileLayoutEditorOverlay.<>c__DisplayClass61_0$$<CreateSkinSetting>b__1
// il2cpp: void UI_MobileLayoutEditorOverlay___c__DisplayClass61_0___CreateSkinSetting_b__1 (UI_MobileLayoutEditorOverlay___c__DisplayClass61_0_o* __this, const MethodInfo* method);
// 0x5cab740

void UI_MobileLayoutEditorOverlay___c__DisplayClass61_0___CreateSkinSetting_b__1
               (UI_MobileLayoutEditorOverlay___c__DisplayClass61_0_o *__this,MethodInfo *method)

{
  UI_MobileInputSkinEditState_o *pUVar1;
  UnityEngine_UI_Text_o *pUVar2;
  bool bVar3;
  System_String_o *pSVar4;
  MethodInfo *method_00;
  UnityEngine_UI_Text_o *__this_00;
  
  if (Il2CppMethodInitialized_07547a70 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547a70 = '\x01';
  }
  pUVar1 = (__this->fields).state;
  if (pUVar1 != (UI_MobileInputSkinEditState_o *)0x0) {
    (pUVar1->fields).Image = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    Il2CppCodeGenWriteBarrier(&(pUVar1->fields).Image);
    __this_00 = (__this->fields).selectText;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar3) {
      return;
    }
    pUVar1 = (__this->fields).state;
    if ((pUVar1 != (UI_MobileInputSkinEditState_o *)0x0) &&
       ((__this->fields).__4__this != (UI_MobileLayoutEditorOverlay_o *)0x0)) {
      pUVar2 = (__this->fields).selectText;
      pSVar4 = UI_MobileLayoutEditorOverlay__GetSkinButtonLabel
                         ((UI_MobileLayoutEditorOverlay_o *)__this_00,(pUVar1->fields).Image,method_00);
      if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
        (*(pUVar2->klass->vtable)._75_set_text.methodPtr)
                  (pUVar2,pSVar4,(pUVar2->klass->vtable)._75_set_text.method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MobileLayoutEditorOverlay.<>c__DisplayClass75_0$$.ctor
// il2cpp: void UI_MobileLayoutEditorOverlay___c__DisplayClass75_0___ctor (UI_MobileLayoutEditorOverlay___c__DisplayClass75_0_o* __this, const MethodInfo* method);
// 0x5ca7e50

void UI_MobileLayoutEditorOverlay___c__DisplayClass75_0___ctor
               (UI_MobileLayoutEditorOverlay___c__DisplayClass75_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MobileLayoutEditorOverlay.<>c__DisplayClass75_0$$<CreatePopupChildrenEditor>b__0
// il2cpp: void UI_MobileLayoutEditorOverlay___c__DisplayClass75_0___CreatePopupChildrenEditor_b__0 (UI_MobileLayoutEditorOverlay___c__DisplayClass75_0_o* __this, const MethodInfo* method);
// 0x5cab820

void UI_MobileLayoutEditorOverlay___c__DisplayClass75_0___CreatePopupChildrenEditor_b__0
               (UI_MobileLayoutEditorOverlay___c__DisplayClass75_0_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Action_o *pSVar3;
  UI_MobileInputControlLayout_array *pUVar4;
  UnityEngine_Object_o *pUVar5;
  UnityEngine_GameObject_o *__this_00;
  bool bVar6;
  System_Collections_Generic_List_MobileInputControlLayout__o *pSVar7;
  System_String_o *pSVar8;
  UI_MobileInputControlLayout_o *control;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_Collections_Generic_List_MobileInputControlLayout__o **targetAddress;
  UI_MobileInputControlLayout_o *pUVar9;
  MethodInfo *pMVar10;
  UI_MobileLayoutEditorOverlay_o *pUVar11;
  MethodInfo *in_R8;
  System_Enum_o local_40;
  undefined4 local_30;
  
  if (Il2CppMethodInitialized_07547a71 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MobileInputControlLayout_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MobileInputControlLayout_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MobileInputControlLayout_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_MobileInputControlLayout);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputControlKind);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547a71 = '\x01';
  }
  pSVar3 = (__this->fields).applyParentChanges;
  if (pSVar3 != (System_Action_o *)0x0) {
    (*(code *)(pSVar3->fields).invoke_impl)((pSVar3->fields).method_code);
    pUVar9 = (__this->fields).popupControl;
    if (pUVar9 != (UI_MobileInputControlLayout_o *)0x0) {
      if ((pUVar9->fields).Children == (System_Collections_Generic_List_MobileInputControlLayout__o *)0x0) {
        targetAddress = &(pUVar9->fields).Children;
        pSVar7 = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MobileInputControlLayout);
        System_Collections_Generic_List_object____ctor
                  ((System_Collections_Generic_List_object__o *)pSVar7,
                   (MethodInfo_395C910 *)
                   MethodInfo_System_Collections_Generic_List_MobileInputControlLayout_ctor);
        *targetAddress = pSVar7;
        Il2CppCodeGenWriteBarrier(targetAddress);
        pUVar9 = (__this->fields).popupControl;
      }
      local_40.klass = (System_Enum_c *)TypeInfo_UI_MobileInputControlKind;
      local_40.monitor = (void *)0xffffffffffffffff;
      local_30 = 2;
      pSVar8 = System_Enum__ToString(&local_40,(MethodInfo *)0x0);
      if (pUVar9 != (UI_MobileInputControlLayout_o *)0x0) {
        (pUVar9->fields).Kind = pSVar8;
        pUVar11 = (UI_MobileLayoutEditorOverlay_o *)&(pUVar9->fields).Kind;
        Il2CppCodeGenWriteBarrier((void **)pUVar11);
        pUVar9 = (__this->fields).popupControl;
        if (((pUVar9 != (UI_MobileInputControlLayout_o *)0x0) &&
            (pSVar7 = (pUVar9->fields).Children,
            pSVar7 != (System_Collections_Generic_List_MobileInputControlLayout__o *)0x0)) &&
           ((__this->fields).__4__this != (UI_MobileLayoutEditorOverlay_o *)0x0)) {
          control = UI_MobileLayoutEditorOverlay__CreateDefaultPopupChild
                              (pUVar11,(pSVar7->fields)._size,method_00);
          pMVar10 = MethodInfo_System_Collections_Generic_List_MobileInputControlLayout_Add;
          pUVar9 = (__this->fields).popupControl;
          if ((pUVar9 != (UI_MobileInputControlLayout_o *)0x0) &&
             (pSVar7 = (pUVar9->fields).Children,
             pSVar7 != (System_Collections_Generic_List_MobileInputControlLayout__o *)0x0)) {
            piVar1 = &(pSVar7->fields)._version;
            *piVar1 = *piVar1 + 1;
            pUVar4 = (pSVar7->fields)._items;
            if (pUVar4 != (UI_MobileInputControlLayout_array *)0x0) {
              uVar2 = (pSVar7->fields)._size;
              if (uVar2 < (uint)pUVar4->max_length) {
                (pSVar7->fields)._size = uVar2 + 1;
                pUVar4->m_Items[(int)uVar2] = control;
                Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar7,(Il2CppObject *)control,
                           (MethodInfo_395D230 *)pMVar10->klass->rgctx_data[0xe].method);
              }
              pUVar5 = (UnityEngine_Object_o *)(__this->fields).editPanel;
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              UnityEngine_Object__Destroy_69214e0(pUVar5,(MethodInfo *)0x0);
              pUVar11 = (__this->fields).__4__this;
              if (pUVar11 != (UI_MobileLayoutEditorOverlay_o *)0x0) {
                if (Il2CppMethodInitialized_07547a47 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
                  Il2CppMethodInitialized_07547a47 = '\x01';
                }
                pUVar5 = (UnityEngine_Object_o *)(pUVar11->fields)._returnButton;
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                pMVar10 = (MethodInfo *)0x0;
                bVar6 = UnityEngine_Object__op_Inequality
                                  (pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                if (bVar6) {
                  __this_00 = (pUVar11->fields)._returnButton;
                  if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_05cabab8;
                  pMVar10 = (MethodInfo *)0x1;
                  UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
                }
                pUVar11 = (__this->fields).__4__this;
                if (pUVar11 != (UI_MobileLayoutEditorOverlay_o *)0x0) {
                  UI_MobileLayoutEditorOverlay__RebuildControls(pUVar11,pMVar10);
                  pUVar11 = (__this->fields).__4__this;
                  if (pUVar11 != (UI_MobileLayoutEditorOverlay_o *)0x0) {
                    UI_MobileLayoutEditorOverlay__SelectControl(pUVar11,control,method_01);
                    pUVar11 = (__this->fields).__4__this;
                    if (pUVar11 != (UI_MobileLayoutEditorOverlay_o *)0x0) {
                      UI_MobileLayoutEditorOverlay__ShowEditPopup
                                (pUVar11,control,false,(__this->fields).popupControl,in_R8);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
label_05cabab8:
  ThrowNullReferenceException();
}


// UI.MobileLayoutEditorOverlay.<>c__DisplayClass76_0$$.ctor
// il2cpp: void UI_MobileLayoutEditorOverlay___c__DisplayClass76_0___ctor (UI_MobileLayoutEditorOverlay___c__DisplayClass76_0_o* __this, const MethodInfo* method);
// 0x5ca82d0

void UI_MobileLayoutEditorOverlay___c__DisplayClass76_0___ctor
               (UI_MobileLayoutEditorOverlay___c__DisplayClass76_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MobileLayoutEditorOverlay.<>c__DisplayClass76_0$$<CreatePopupChildRow>b__0
// il2cpp: void UI_MobileLayoutEditorOverlay___c__DisplayClass76_0___CreatePopupChildRow_b__0 (UI_MobileLayoutEditorOverlay___c__DisplayClass76_0_o* __this, const MethodInfo* method);
// 0x5cabac0

void UI_MobileLayoutEditorOverlay___c__DisplayClass76_0___CreatePopupChildRow_b__0
               (UI_MobileLayoutEditorOverlay___c__DisplayClass76_0_o *__this,MethodInfo *method)

{
  System_Action_o *pSVar1;
  UnityEngine_Object_o *pUVar2;
  UI_MobileLayoutEditorOverlay_o *pUVar3;
  UnityEngine_GameObject_o *__this_00;
  bool bVar4;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *in_R8;
  
  if (Il2CppMethodInitialized_07547a72 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547a72 = '\x01';
  }
  pSVar1 = (__this->fields).applyParentChanges;
  if (pSVar1 != (System_Action_o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code);
    pUVar2 = (UnityEngine_Object_o *)(__this->fields).editPanel;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0(pUVar2,(MethodInfo *)0x0);
    pUVar3 = (__this->fields).__4__this;
    if (pUVar3 != (UI_MobileLayoutEditorOverlay_o *)0x0) {
      if (Il2CppMethodInitialized_07547a47 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        Il2CppMethodInitialized_07547a47 = '\x01';
      }
      pUVar2 = (UnityEngine_Object_o *)(pUVar3->fields)._returnButton;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      method_01 = (MethodInfo *)0x0;
      bVar4 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar4) {
        __this_00 = (pUVar3->fields)._returnButton;
        if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_05cabbd3;
        method_01 = (MethodInfo *)0x1;
        UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
      }
      pUVar3 = (__this->fields).__4__this;
      if (pUVar3 != (UI_MobileLayoutEditorOverlay_o *)0x0) {
        UI_MobileLayoutEditorOverlay__RebuildControls(pUVar3,method_01);
        pUVar3 = (__this->fields).__4__this;
        if (pUVar3 != (UI_MobileLayoutEditorOverlay_o *)0x0) {
          UI_MobileLayoutEditorOverlay__SelectControl(pUVar3,(__this->fields).child,method_00);
          pUVar3 = (__this->fields).__4__this;
          if (pUVar3 != (UI_MobileLayoutEditorOverlay_o *)0x0) {
            UI_MobileLayoutEditorOverlay__ShowEditPopup
                      (pUVar3,(__this->fields).child,false,(__this->fields).popupControl,in_R8);
            return;
          }
        }
      }
    }
  }
label_05cabbd3:
  ThrowNullReferenceException();
}


// UI.MobileLayoutEditorOverlay.<>c__DisplayClass76_0$$<CreatePopupChildRow>b__1
// il2cpp: void UI_MobileLayoutEditorOverlay___c__DisplayClass76_0___CreatePopupChildRow_b__1 (UI_MobileLayoutEditorOverlay___c__DisplayClass76_0_o* __this, const MethodInfo* method);
// 0x5cabbe0

void UI_MobileLayoutEditorOverlay___c__DisplayClass76_0___CreatePopupChildRow_b__1
               (UI_MobileLayoutEditorOverlay___c__DisplayClass76_0_o *__this,MethodInfo *method)

{
  System_Action_o *pSVar1;
  UI_MobileInputControlLayout_o *pUVar2;
  System_Collections_Generic_List_MobileInputControlLayout__o *__this_00;
  UnityEngine_Object_o *pUVar3;
  UI_MobileLayoutEditorOverlay_o *pUVar4;
  UnityEngine_GameObject_o *__this_01;
  bool bVar5;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *in_R8;
  
  if (Il2CppMethodInitialized_07547a73 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MobileInputControlLayout_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547a73 = '\x01';
  }
  pSVar1 = (__this->fields).applyParentChanges;
  if (pSVar1 != (System_Action_o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code);
    pUVar2 = (__this->fields).popupControl;
    if (pUVar2 != (UI_MobileInputControlLayout_o *)0x0) {
      __this_00 = (pUVar2->fields).Children;
      if (__this_00 != (System_Collections_Generic_List_MobileInputControlLayout__o *)0x0) {
        System_Collections_Generic_List_object___Remove
                  ((System_Collections_Generic_List_object__o *)__this_00,
                   (Il2CppObject *)(__this->fields).child,
                   (MethodInfo_395ED70 *)
                   MethodInfo_System_Collections_Generic_List_MobileInputControlLayout_Remove);
      }
      pUVar3 = (UnityEngine_Object_o *)(__this->fields).editPanel;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_69214e0(pUVar3,(MethodInfo *)0x0);
      pUVar4 = (__this->fields).__4__this;
      if (pUVar4 != (UI_MobileLayoutEditorOverlay_o *)0x0) {
        if (Il2CppMethodInitialized_07547a47 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
          Il2CppMethodInitialized_07547a47 = '\x01';
        }
        pUVar3 = (UnityEngine_Object_o *)(pUVar4->fields)._returnButton;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        method_01 = (MethodInfo *)0x0;
        bVar5 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar5) {
          __this_01 = (pUVar4->fields)._returnButton;
          if (__this_01 == (UnityEngine_GameObject_o *)0x0) goto label_05cabd29;
          method_01 = (MethodInfo *)0x1;
          UnityEngine_GameObject__SetActive(__this_01,true,(MethodInfo *)0x0);
        }
        pUVar4 = (__this->fields).__4__this;
        if (pUVar4 != (UI_MobileLayoutEditorOverlay_o *)0x0) {
          UI_MobileLayoutEditorOverlay__RebuildControls(pUVar4,method_01);
          pUVar4 = (__this->fields).__4__this;
          if (pUVar4 != (UI_MobileLayoutEditorOverlay_o *)0x0) {
            UI_MobileLayoutEditorOverlay__SelectControl(pUVar4,(__this->fields).popupControl,method_00);
            pUVar4 = (__this->fields).__4__this;
            if (pUVar4 != (UI_MobileLayoutEditorOverlay_o *)0x0) {
              UI_MobileLayoutEditorOverlay__ShowEditPopup
                        (pUVar4,(__this->fields).popupControl,false,(UI_MobileInputControlLayout_o *)0x0,in_R8
                        );
              return;
            }
          }
        }
      }
    }
  }
label_05cabd29:
  ThrowNullReferenceException();
}


// UI.MobileLayoutEditorOverlay.<>c__DisplayClass95_0$$.ctor
// il2cpp: void UI_MobileLayoutEditorOverlay___c__DisplayClass95_0___ctor (UI_MobileLayoutEditorOverlay___c__DisplayClass95_0_o* __this, const MethodInfo* method);
// 0x5ca8a20

void UI_MobileLayoutEditorOverlay___c__DisplayClass95_0___ctor
               (UI_MobileLayoutEditorOverlay___c__DisplayClass95_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MobileLayoutEditorOverlay.<>c__DisplayClass95_0$$<CreateTextButton>b__0
// il2cpp: void UI_MobileLayoutEditorOverlay___c__DisplayClass95_0___CreateTextButton_b__0 (UI_MobileLayoutEditorOverlay___c__DisplayClass95_0_o* __this, const MethodInfo* method);
// 0x5cabd30

void UI_MobileLayoutEditorOverlay___c__DisplayClass95_0___CreateTextButton_b__0
               (UI_MobileLayoutEditorOverlay___c__DisplayClass95_0_o *__this,MethodInfo *method)

{
  System_Action_o *pSVar1;
  code *vtableDispatch;
  undefined8 in_RDX;
  
  pSVar1 = (__this->fields).onClick;
  if (pSVar1 == (System_Action_o *)0x0) {
    ThrowNullReferenceException();
  }
  vtableDispatch = (code *)(pSVar1->fields).invoke_impl;
  (*vtableDispatch)((pSVar1->fields).method_code,(pSVar1->fields).method,in_RDX,vtableDispatch);
  return;
}


// UI.MobileLayoutEditorOverlay$$get_IsOpen
// il2cpp: bool UI_MobileLayoutEditorOverlay__get_IsOpen (const MethodInfo* method);
// 0x5c9c710

bool UI_MobileLayoutEditorOverlay__get_IsOpen(MethodInfo *method)

{
  UI_MobileLayoutEditorOverlay_o *pUVar1;
  bool bVar2;
  UnityEngine_GameObject_o *__this;
  
  if (Il2CppMethodInitialized_07547a18 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileLayoutEditorOverlay);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547a18 = '\x01';
  }
  pUVar1 = TypeInfo_UI_MobileLayoutEditorOverlay->static_fields->_instance;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = TypeInfo_UI_MobileLayoutEditorOverlay->static_fields->_instance;
    if (pUVar1 != (UI_MobileLayoutEditorOverlay_o *)0x0) {
      __this = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
      if (__this != (UnityEngine_GameObject_o *)0x0) {
        bVar2 = UnityEngine_GameObject__get_activeSelf(__this,(MethodInfo *)0x0);
        return bVar2;
      }
    }
    ThrowNullReferenceException();
  }
  return false;
}


// UI.MobileLayoutEditorOverlay$$Open
// il2cpp: void UI_MobileLayoutEditorOverlay__Open (int32_t role, UnityEngine_GameObject_o* restoreObject, const MethodInfo* method);
// 0x5c9c7c0

void UI_MobileLayoutEditorOverlay__Open
               (int32_t role,UnityEngine_GameObject_o *restoreObject,MethodInfo *method)

{
  UI_BaseMenu_o *pUVar1;
  UI_MobileLayoutEditorOverlay_o *pUVar2;
  Il2CppType *handle;
  bool bVar3;
  System_Type_array *components;
  System_Type_o *obj;
  Il2CppObject *pIVar4;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Transform_o *parent;
  UI_MobileLayoutEditorOverlay_o *method_00;
  UI_MobileLayoutEditorOverlay_c *in_RCX;
  
  if (Il2CppMethodInitialized_07547a19 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_MobileLayoutEditorOverlay);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileLayoutEditorOverlay);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"MobileLayoutEditorOverlay");
    Il2CppMethodInitialized_07547a19 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pUVar1 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    return;
  }
  pUVar2 = TypeInfo_UI_MobileLayoutEditorOverlay->static_fields->_instance;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
    handle = TypeRef_UnityEngine_RectTransform;
    if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_075567a8);
    }
    obj = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
    if (components == (System_Type_array *)0x0) goto label_05c9ca69;
    if (obj != (System_Type_o *)0x0) {
      pIVar4 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((components->obj).klass)->_1).element_class);
      if (pIVar4 == (Il2CppObject *)0x0) {
        pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
      }
    }
    if ((int)components->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    components->m_Items[0] = obj;
    Il2CppCodeGenWriteBarrier(components->m_Items);
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor_691aa60(__this,"MobileLayoutEditorOverlay",components,(MethodInfo *)0x0);
    if (__this == (UnityEngine_GameObject_o *)0x0) goto label_05c9ca69;
    __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pUVar1 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (pUVar1 == (UI_BaseMenu_o *)0x0) goto label_05c9ca69;
    parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
    if (__this_00 == (UnityEngine_Transform_o *)0x0) goto label_05c9ca69;
    UnityEngine_Transform__SetParent_692d510(__this_00,parent,false,(MethodInfo *)0x0);
    method_00 = UnityEngine_GameObject__AddComponent_object_
                          (__this,(MethodInfo_353B6A0 *)
                                  MethodInfo_UnityEngine_GameObject_AddComponent_MobileLayoutEditorOverlay);
    TypeInfo_UI_MobileLayoutEditorOverlay->static_fields->_instance = method_00;
    in_RCX = TypeInfo_UI_MobileLayoutEditorOverlay;
    Il2CppCodeGenWriteBarrier(&TypeInfo_UI_MobileLayoutEditorOverlay->static_fields->_instance);
    pUVar2 = TypeInfo_UI_MobileLayoutEditorOverlay->static_fields->_instance;
    if (pUVar2 == (UI_MobileLayoutEditorOverlay_o *)0x0) goto label_05c9ca69;
    UI_MobileLayoutEditorOverlay__Setup(pUVar2,(MethodInfo *)method_00);
  }
  pUVar2 = TypeInfo_UI_MobileLayoutEditorOverlay->static_fields->_instance;
  if (pUVar2 != (UI_MobileLayoutEditorOverlay_o *)0x0) {
    UI_MobileLayoutEditorOverlay__Show(pUVar2,role,restoreObject,(MethodInfo *)in_RCX);
    return;
  }
label_05c9ca69:
  ThrowNullReferenceException();
}


// UI.MobileLayoutEditorOverlay$$Setup
// il2cpp: void UI_MobileLayoutEditorOverlay__Setup (UI_MobileLayoutEditorOverlay_o* __this, const MethodInfo* method);
// 0x5c9ca90
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c9ce89: movaps xmm0, xmmword ptr [rsp]

void UI_MobileLayoutEditorOverlay__Setup(UI_MobileLayoutEditorOverlay_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o **targetAddress;
  UnityEngine_Vector2_Fields anchorMin;
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_o anchorMax;
  UnityEngine_Font_o *pUVar2;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_Canvas_o *__this_00;
  UnityEngine_CanvasGroup_o *__this_01;
  UnityEngine_Vector2_c **__this_02;
  UnityEngine_Vector2_StaticFields *pUVar5;
  MethodInfo *method_00;
  UI_ColorPickPopup_o *pUVar6;
  UI_ImportPopup_o *pUVar7;
  UI_ExportPopup_o *pUVar8;
  MethodInfo **method_01;
  float fVar9;
  float fVar10;
  
  if (Il2CppMethodInitialized_07547a1a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_ColorPickPopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ElementFactory_CreateDefaultPopup_ExportPopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ElementFactory_CreateDefaultPopup_ImportPopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_CanvasGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Canvas);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GraphicRaycaster);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_LanguageFonts);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Resources_GetBuiltinResource_Font);
    il2cpp_codegen_initialize_runtime_metadata(&"Controls");
    il2cpp_codegen_initialize_runtime_metadata(&"LegacyRuntime.ttf");
    Il2CppMethodInitialized_07547a1a = '\x01';
  }
  pUVar2 = UnityEngine_Resources__GetBuiltinResource_object_
                     ("LegacyRuntime.ttf",
                      (MethodInfo_3665B80 *)MethodInfo_UnityEngine_Resources_GetBuiltinResource_Font);
  if ((TypeInfo_UI_LanguageFonts->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_LanguageFonts);
  }
  pUVar2 = UI_LanguageFonts__LegacyFont(pUVar2,(MethodInfo *)0x0);
  (__this->fields)._font = pUVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._font);
  pUVar3 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
  targetAddress = &(__this->fields)._root;
  (__this->fields)._root = pUVar3;
  Il2CppCodeGenWriteBarrier(targetAddress);
  pUVar3 = (__this->fields)._root;
  if (Il2CppMethodInitialized_0753ecc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_0753ecc8 = '\x01';
  }
  if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
    UnityEngine_RectTransform__set_anchorMin
              (pUVar3,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
               (MethodInfo *)0x0);
    pUVar3 = *targetAddress;
    if (Il2CppMethodInitialized_07542885 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_07542885 = '\x01';
    }
    if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
      UnityEngine_RectTransform__set_anchorMax
                (pUVar3,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields
                 ,(MethodInfo *)0x0);
      pUVar3 = *targetAddress;
      if (Il2CppMethodInitialized_0753ecc8 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
        Il2CppMethodInitialized_0753ecc8 = '\x01';
      }
      if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
        UnityEngine_RectTransform__set_offsetMin
                  (pUVar3,(UnityEngine_Vector2_o)
                          (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,(MethodInfo *)0x0);
        pUVar3 = *targetAddress;
        if (Il2CppMethodInitialized_0753ecc8 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
          Il2CppMethodInitialized_0753ecc8 = '\x01';
        }
        if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
          UnityEngine_RectTransform__set_offsetMax
                    (pUVar3,(UnityEngine_Vector2_o)
                            (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,(MethodInfo *)0x0
                    );
          pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if ((pUVar4 != (UnityEngine_GameObject_o *)0x0) &&
             (__this_00 = UnityEngine_GameObject__AddComponent_object_
                                    (pUVar4,(MethodInfo_353B6A0 *)
                                            MethodInfo_UnityEngine_GameObject_AddComponent_Canvas),
             __this_00 != (UnityEngine_Canvas_o *)0x0)) {
            UnityEngine_Canvas__set_overrideSorting(__this_00,true,(MethodInfo *)0x0);
            UnityEngine_Canvas__set_sortingOrder(__this_00,30000,(MethodInfo *)0x0);
            pUVar4 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
            if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
              UnityEngine_GameObject__AddComponent_object_
                        (pUVar4,(MethodInfo_353B6A0 *)
                                MethodInfo_UnityEngine_GameObject_AddComponent_GraphicRaycaster);
              pUVar4 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
              if ((pUVar4 != (UnityEngine_GameObject_o *)0x0) &&
                 (__this_01 = UnityEngine_GameObject__AddComponent_object_
                                        (pUVar4,(MethodInfo_353B6A0 *)
                                                MethodInfo_UnityEngine_GameObject_AddComponent_CanvasGroup),
                 __this_01 != (UnityEngine_CanvasGroup_o *)0x0)) {
                UnityEngine_CanvasGroup__set_blocksRaycasts(__this_01,true,(MethodInfo *)0x0);
                UnityEngine_CanvasGroup__set_interactable(__this_01,true,(MethodInfo *)0x0);
                pUVar4 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                  method_01 = &MethodInfo_UnityEngine_GameObject_AddComponent_Image;
                  __this_02 = (UnityEngine_Vector2_c **)
                              UnityEngine_GameObject__AddComponent_object_
                                        (pUVar4,(MethodInfo_353B6A0 *)
                                                MethodInfo_UnityEngine_GameObject_AddComponent_Image);
                  if ((UnityEngine_UI_Image_o *)__this_02 != (UnityEngine_UI_Image_o *)0x0) {
                    (*(((UnityEngine_UI_Image_o *)__this_02)->klass->vtable)._23_set_color.methodPtr)
                              (__this_02,(UnityEngine_Color_o)(ZEXT816(0x3ea3d70a00000000) << 0x40),
                               (((UnityEngine_UI_Image_o *)__this_02)->klass->vtable)._23_set_color.method);
                    (*(((UnityEngine_UI_Image_o *)__this_02)->klass->vtable)._25_set_raycastTarget.methodPtr)
                              (__this_02,true,
                               (((UnityEngine_UI_Image_o *)__this_02)->klass->vtable)._25_set_raycastTarget.
                               method);
                    pUVar3 = *targetAddress;
                    if (Il2CppMethodInitialized_0753ecc8 == '\0') {
                      __this_02 = &TypeInfo_UnityEngine_Vector2;
                      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                      Il2CppMethodInitialized_0753ecc8 = '\x01';
                    }
                    pUVar5 = TypeInfo_UnityEngine_Vector2->static_fields;
                    anchorMin = (pUVar5->zeroVector).fields;
                    if (Il2CppMethodInitialized_07542885 == '\0') {
                      __this_02 = &TypeInfo_UnityEngine_Vector2;
                      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                      Il2CppMethodInitialized_07542885 = '\x01';
                      pUVar5 = TypeInfo_UnityEngine_Vector2->static_fields;
                      UVar1 = (pUVar5->oneVector).fields;
                      fVar9 = UVar1.x;
                      fVar10 = UVar1.y;
                      if (Il2CppMethodInitialized_0753ecc8 == '\0') {
                        __this_02 = &TypeInfo_UnityEngine_Vector2;
                        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                        Il2CppMethodInitialized_0753ecc8 = '\x01';
                        pUVar5 = TypeInfo_UnityEngine_Vector2->static_fields;
                      }
                    }
                    else {
                      UVar1 = (pUVar5->oneVector).fields;
                      fVar9 = UVar1.x;
                      fVar10 = UVar1.y;
                    }
                    UVar1 = (pUVar5->zeroVector).fields;
                    anchorMax.fields.y = fVar10;
                    anchorMax.fields.x = fVar9;
                    pUVar4 = UI_MobileLayoutEditorOverlay__CreateRect
                                       ((UI_MobileLayoutEditorOverlay_o *)__this_02,"Controls",
                                        pUVar3,(UnityEngine_Vector2_o)anchorMin,anchorMax,
                                        (UnityEngine_Vector2_o)UVar1,(UnityEngine_Vector2_o)UVar1,
                                        (MethodInfo *)method_01);
                    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                      method_00 = (MethodInfo *)
                                  UnityEngine_GameObject__GetComponent_object_
                                            (pUVar4,(MethodInfo_353B730 *)
                                                    MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform
                                            );
                      (__this->fields)._controlsRoot = (UnityEngine_RectTransform_o *)method_00;
                      Il2CppCodeGenWriteBarrier(&(__this->fields)._controlsRoot);
                      UI_MobileLayoutEditorOverlay__CreateToolbar(__this,method_00);
                      pUVar6 = UI_ElementFactory__CreateDefaultPopup_object_
                                         ((UnityEngine_Transform_o *)(__this->fields)._root,false,
                                          (MethodInfo_34D7290 *)
                                          MethodInfo_UI_ElementFactory_CreateDefaultPopup_ColorPickPopup);
                      (__this->fields)._colorPopup = pUVar6;
                      Il2CppCodeGenWriteBarrier(&(__this->fields)._colorPopup);
                      pUVar7 = UI_ElementFactory__CreateDefaultPopup_object_
                                         ((UnityEngine_Transform_o *)(__this->fields)._root,false,
                                          (MethodInfo_34D7290 *)
                                          MethodInfo_UI_ElementFactory_CreateDefaultPopup_ImportPopup);
                      (__this->fields)._importPopup = pUVar7;
                      Il2CppCodeGenWriteBarrier(&(__this->fields)._importPopup);
                      pUVar8 = UI_ElementFactory__CreateDefaultPopup_object_
                                         ((UnityEngine_Transform_o *)(__this->fields)._root,false,
                                          (MethodInfo_34D7290 *)
                                          MethodInfo_UI_ElementFactory_CreateDefaultPopup_ExportPopup);
                      (__this->fields)._exportPopup = pUVar8;
                      Il2CppCodeGenWriteBarrier(&(__this->fields)._exportPopup);
                      pUVar4 = UnityEngine_Component__get_gameObject
                                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                      if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                        UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
                        return;
                      }
                    }
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


// UI.MobileLayoutEditorOverlay$$Show
// il2cpp: void UI_MobileLayoutEditorOverlay__Show (UI_MobileLayoutEditorOverlay_o* __this, int32_t role, UnityEngine_GameObject_o* restoreObject, const MethodInfo* method);
// 0x5c9cf90

void UI_MobileLayoutEditorOverlay__Show
               (UI_MobileLayoutEditorOverlay_o *__this,int32_t role,UnityEngine_GameObject_o *restoreObject,
               MethodInfo *method)

{
  UnityEngine_Object_o *x;
  bool bVar1;
  UI_MobileInputLayout_o *pUVar2;
  UnityEngine_EventSystems_EventSystem_o *__this_00;
  System_String_o *pSVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_Transform_o *__this_01;
  MethodInfo *method_00;
  System_Enum_o SStack_38;
  int32_t iStack_28;
  
  if (Il2CppMethodInitialized_07547a1b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_EventSystems_EventSystem);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileInputBridge);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLayoutManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLayoutRole);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547a1b = '\x01';
  }
  if ((TypeInfo_UI_MobileInputLayoutManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutManager);
  }
  pUVar2 = UI_MobileInputLayoutManager__GetSelectedLayout(role,(MethodInfo *)0x0);
  if (pUVar2 == (UI_MobileInputLayout_o *)0x0) {
    return;
  }
  (__this->fields)._role = role;
  (__this->fields)._restoreObject = restoreObject;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._restoreObject);
  if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
  }
  UI_CursorManager__SetPointer(true,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
  }
  __this_00 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_EventSystems_EventSystem_o *)0x0) {
    UnityEngine_EventSystems_EventSystem__SetSelectedGameObject_6d01480
              (__this_00,(UnityEngine_GameObject_o *)0x0,(MethodInfo *)0x0);
  }
  pUVar2 = UI_MobileInputLayout__Clone(pUVar2,(System_String_o *)0x0,false,(MethodInfo *)0x0);
  (__this->fields)._layout = pUVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._layout);
  pUVar2 = (__this->fields)._layout;
  SStack_38.klass = (System_Enum_c *)TypeInfo_UI_MobileInputLayoutRole;
  SStack_38.monitor = (void *)0xffffffffffffffff;
  iStack_28 = role;
  pSVar3 = System_Enum__ToString(&SStack_38,(MethodInfo *)0x0);
  if (pUVar2 != (UI_MobileInputLayout_o *)0x0) {
    (pUVar2->fields).Role = pSVar3;
    Il2CppCodeGenWriteBarrier(&(pUVar2->fields).Role);
    pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(pUVar4,true,(MethodInfo *)0x0);
      x = (UnityEngine_Object_o *)(__this->fields)._returnButton;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        pUVar4 = (__this->fields)._returnButton;
        if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto label_05c9d1b7;
        UnityEngine_GameObject__SetActive(pUVar4,true,(MethodInfo *)0x0);
      }
      __this_01 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_Transform_o *)0x0) {
        method_00 = (MethodInfo *)0x0;
        UnityEngine_Transform__SetAsLastSibling(__this_01,(MethodInfo *)0x0);
        UI_MobileLayoutEditorOverlay__RebuildControls(__this,method_00);
        if ((TypeInfo_Settings_MobileInputBridge->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MobileInputBridge);
        }
        Settings_MobileInputBridge__ClearState((MethodInfo *)0x0);
        UI_MobileLayoutEditorOverlay__HideRestoreObject(__this,method_00);
        return;
      }
    }
  }
label_05c9d1b7:
  ThrowNullReferenceException();
}


// UI.MobileLayoutEditorOverlay$$HideRestoreObject
// il2cpp: void UI_MobileLayoutEditorOverlay__HideRestoreObject (UI_MobileLayoutEditorOverlay_o* __this, const MethodInfo* method);
// 0x5c9deb0

void UI_MobileLayoutEditorOverlay__HideRestoreObject
               (UI_MobileLayoutEditorOverlay_o *__this,MethodInfo *method)

{
  UnityEngine_CanvasGroup_o **targetAddress;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *pUVar1;
  bool bVar2;
  UnityEngine_CanvasGroup_o *pUVar3;
  Gisketch_Aottg2UI_GisketchUIRoot_o *x_00;
  Gisketch_Aottg2UI_Game_AottgGameUiActions_o *behaviour;
  MethodInfo *method_00;
  MethodInfo *method_01;
  float fVar4;
  
  if (Il2CppMethodInitialized_07547a1c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_AottgGameUiActions);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_CanvasGroup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_CanvasGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547a1c = '\x01';
  }
  targetAddress = &(__this->fields)._restoreGroup;
  (__this->fields)._restoreGroup = (UnityEngine_CanvasGroup_o *)0x0;
  Il2CppCodeGenWriteBarrier(targetAddress);
  (__this->fields)._restoreGroupAdded = false;
  x = (UnityEngine_Object_o *)(__this->fields)._restoreObject;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  pUVar1 = (__this->fields)._restoreObject;
  if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
    bVar2 = UnityEngine_GameObject__get_activeSelf(pUVar1,(MethodInfo *)0x0);
    if (!bVar2) {
      return;
    }
    pUVar1 = (__this->fields)._restoreObject;
    if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
      pUVar3 = UnityEngine_GameObject__GetComponent_object_
                         (pUVar1,(MethodInfo_353B730 *)
                                 MethodInfo_UnityEngine_GameObject_GetComponent_CanvasGroup);
      *targetAddress = pUVar3;
      Il2CppCodeGenWriteBarrier(targetAddress);
      pUVar3 = *targetAddress;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar2) {
        pUVar1 = (__this->fields)._restoreObject;
        if (pUVar1 == (UnityEngine_GameObject_o *)0x0) goto label_05c9e129;
        pUVar3 = UnityEngine_GameObject__AddComponent_object_
                           (pUVar1,(MethodInfo_353B6A0 *)
                                   MethodInfo_UnityEngine_GameObject_AddComponent_CanvasGroup);
        (__this->fields)._restoreGroup = pUVar3;
        Il2CppCodeGenWriteBarrier(targetAddress);
        (__this->fields)._restoreGroupAdded = true;
      }
      if (*targetAddress != (UnityEngine_CanvasGroup_o *)0x0) {
        fVar4 = UnityEngine_CanvasGroup__get_alpha(*targetAddress,(MethodInfo *)0x0);
        (__this->fields)._restoreGroupAlpha = fVar4;
        pUVar3 = (__this->fields)._restoreGroup;
        if (pUVar3 != (UnityEngine_CanvasGroup_o *)0x0) {
          bVar2 = UnityEngine_CanvasGroup__get_interactable(pUVar3,(MethodInfo *)0x0);
          (__this->fields)._restoreGroupInteractable = bVar2;
          pUVar3 = (__this->fields)._restoreGroup;
          if (pUVar3 != (UnityEngine_CanvasGroup_o *)0x0) {
            bVar2 = UnityEngine_CanvasGroup__get_blocksRaycasts(pUVar3,(MethodInfo *)0x0);
            (__this->fields)._restoreGroupBlocksRaycasts = bVar2;
            pUVar3 = (__this->fields)._restoreGroup;
            if (pUVar3 != (UnityEngine_CanvasGroup_o *)0x0) {
              UnityEngine_CanvasGroup__set_alpha(pUVar3,0.0,(MethodInfo *)0x0);
              if (*targetAddress != (UnityEngine_CanvasGroup_o *)0x0) {
                UnityEngine_CanvasGroup__set_interactable(*targetAddress,false,(MethodInfo *)0x0);
                if (*targetAddress != (UnityEngine_CanvasGroup_o *)0x0) {
                  UnityEngine_CanvasGroup__set_blocksRaycasts(*targetAddress,false,(MethodInfo *)0x0);
                  pUVar1 = (__this->fields)._restoreObject;
                  if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
                    x_00 = UnityEngine_GameObject__GetComponentInParent_object_
                                     (pUVar1,(MethodInfo_353BB40 *)
                                             MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot
                                     );
                    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                    }
                    bVar2 = UnityEngine_Object__op_Inequality
                                      ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,
                                       (MethodInfo *)0x0);
                    if (!bVar2) {
                      return;
                    }
                    UI_MobileLayoutEditorOverlay__SuspendUi(__this,(UnityEngine_Behaviour_o *)x_00,method_00);
                    if (x_00 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
                      behaviour = UnityEngine_Component__GetComponent_object_
                                            ((UnityEngine_Component_o *)x_00,
                                             (MethodInfo_34B0830 *)
                                             MethodInfo_UnityEngine_Component_GetComponent_AottgGameUiActions)
                      ;
                      UI_MobileLayoutEditorOverlay__SuspendUi
                                (__this,(UnityEngine_Behaviour_o *)behaviour,method_01);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
label_05c9e129:
  ThrowNullReferenceException();
}


// UI.MobileLayoutEditorOverlay$$SuspendUi
// il2cpp: void UI_MobileLayoutEditorOverlay__SuspendUi (UI_MobileLayoutEditorOverlay_o* __this, UnityEngine_Behaviour_o* behaviour, const MethodInfo* method);
// 0x5c9e130

void UI_MobileLayoutEditorOverlay__SuspendUi
               (UI_MobileLayoutEditorOverlay_o *__this,UnityEngine_Behaviour_o *behaviour,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_Behaviour__o *__this_00;
  UnityEngine_Behaviour_array *pUVar3;
  MethodInfo *pMVar4;
  bool bVar5;
  
  if (Il2CppMethodInitialized_07547a1d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Behaviour_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547a1d = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)behaviour,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    return;
  }
  if (behaviour != (UnityEngine_Behaviour_o *)0x0) {
    bVar5 = UnityEngine_Behaviour__get_enabled(behaviour,(MethodInfo *)0x0);
    pMVar4 = MethodInfo_System_Collections_Generic_List_Behaviour_Add;
    if (!bVar5) {
      return;
    }
    __this_00 = (__this->fields)._suspendedUi;
    if (__this_00 != (System_Collections_Generic_List_Behaviour__o *)0x0) {
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar3 = (__this_00->fields)._items;
      if (pUVar3 != (UnityEngine_Behaviour_array *)0x0) {
        uVar2 = (__this_00->fields)._size;
        if (uVar2 < (uint)pUVar3->max_length) {
          (__this_00->fields)._size = uVar2 + 1;
          pUVar3->m_Items[(int)uVar2] = behaviour;
          Il2CppCodeGenWriteBarrier(pUVar3->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)behaviour,
                     (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
        }
        UnityEngine_Behaviour__set_enabled(behaviour,false,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MobileLayoutEditorOverlay$$RestoreObject
// il2cpp: void UI_MobileLayoutEditorOverlay__RestoreObject (UI_MobileLayoutEditorOverlay_o* __this, const MethodInfo* method);
// 0x5c9e220
// eh: try 0x5c9e2f4..0x5c9e484 -> pad 0x5c9e491 (+4 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5c9e4a9..0x5c9e4ae -> pad 0x5c9e4d1 cleanup
// eh: try 0x5c9e4d4..0x5c9e4de -> pad 0x5c9e4e6 catch (...) [compiler noexcept guard]
// asm: 28 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c9e2ee: nop 
// asm:   0x5c9e489: jmp 0x5c9e491
// asm:   0x5c9e48b: jmp 0x5c9e491
// asm:   0x5c9e48d: jmp 0x5c9e491
// asm:   0x5c9e48f: jmp 0x5c9e491
// asm:   0x5c9e491: mov rbx, rax
// asm:   0x5c9e494: cmp edx, 1
// asm:   0x5c9e497: jne 0x5c9e4d4
// asm:   0x5c9e499: mov rdi, rbx
// asm:   0x5c9e49c: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c9e4a1: mov rbx, qword ptr [rax]
// asm:   0x5c9e4a4: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5c9e4a9: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c9e4ae: lea rax, [rip + 0x15ef36b]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Behaviour_Dispose
// asm:   0x5c9e4b5: mov rsi, qword ptr [rax]
// asm:   0x5c9e4b8: mov rdi, rsp
// asm:   0x5c9e4bb: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5c9e4c0: test rbx, rbx
// asm:   0x5c9e4c3: je 0x5c9e353
// asm:   0x5c9e4c9: mov rdi, rbx
// asm:   0x5c9e4cc: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c9e4d1: mov rbx, rax
// asm:   0x5c9e4d4: lea rdi, [rsp + 0x18]
// asm:   0x5c9e4d9: call 0x2fdad30  ; il2cpp_runtime_helper_02fdad30()
// asm:   0x5c9e4de: mov rdi, rbx
// asm:   0x5c9e4e1: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c9e4e6: mov rdi, rax
// asm:   0x5c9e4e9: call 0x2ab61e0  ; __clang_call_terminate()

void UI_MobileLayoutEditorOverlay__RestoreObject(UI_MobileLayoutEditorOverlay_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  UnityEngine_CanvasGroup_o **targetAddress;
  int length;
  System_Collections_Generic_List_Behaviour__o *pSVar2;
  UnityEngine_CanvasGroup_o *pUVar3;
  UnityEngine_Object_o *x;
  bool bVar4;
  undefined1 local_58 [8];
  undefined1 *puStack_50;
  UnityEngine_Object_o *local_48;
  undefined1 local_40 [16];
  UnityEngine_Object_o *local_30;
  
  if (Il2CppMethodInitialized_07547a1e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Behaviour_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Behaviour_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Behaviour_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Behaviour_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Behaviour_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547a1e = '\x01';
  }
  local_58 = (undefined1  [8])0x0;
  puStack_50 = (undefined1 *)0x0;
  local_48 = (UnityEngine_Object_o *)0x0;
  pSVar2 = (__this->fields)._suspendedUi;
  if (pSVar2 != (System_Collections_Generic_List_Behaviour__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
               (System_Collections_Generic_List_object__o *)pSVar2,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_Behaviour_GetEnumerator);
    local_48 = local_30;
    local_58 = (undefined1  [8])local_40._0_8_;
    puStack_50 = (undefined1 *)local_40._8_8_;
    local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_40._8_8_ = local_58;
    while( true ) {
      bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)local_58,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_Behaviour_MoveNext);
      x = local_48;
      if (!bVar4) break;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar4) {
        if (x == (UnityEngine_Object_o *)0x0) {
          ThrowNullReferenceException();
        }
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)x,true,(MethodInfo *)0x0);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)local_58,
               (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_Behaviour_Dispose);
    pSVar2 = (__this->fields)._suspendedUi;
    if (pSVar2 != (System_Collections_Generic_List_Behaviour__o *)0x0) {
      piVar1 = &(pSVar2->fields)._version;
      *piVar1 = *piVar1 + 1;
      length = (pSVar2->fields)._size;
      (pSVar2->fields)._size = 0;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
      }
      pUVar3 = (__this->fields)._restoreGroup;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      targetAddress = &(__this->fields)._restoreGroup;
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar4) {
label_05c9e438:
        (__this->fields)._restoreGroup = (UnityEngine_CanvasGroup_o *)0x0;
        Il2CppCodeGenWriteBarrier(targetAddress);
        (__this->fields)._restoreGroupAdded = false;
        (__this->fields)._restoreObject = (UnityEngine_GameObject_o *)0x0;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._restoreObject);
        return;
      }
      if (*targetAddress != (UnityEngine_CanvasGroup_o *)0x0) {
        UnityEngine_CanvasGroup__set_alpha
                  (*targetAddress,(__this->fields)._restoreGroupAlpha,(MethodInfo *)0x0);
        pUVar3 = (__this->fields)._restoreGroup;
        if (pUVar3 != (UnityEngine_CanvasGroup_o *)0x0) {
          UnityEngine_CanvasGroup__set_interactable
                    (pUVar3,(__this->fields)._restoreGroupInteractable,(MethodInfo *)0x0);
          pUVar3 = (__this->fields)._restoreGroup;
          if (pUVar3 != (UnityEngine_CanvasGroup_o *)0x0) {
            UnityEngine_CanvasGroup__set_blocksRaycasts
                      (pUVar3,(__this->fields)._restoreGroupBlocksRaycasts,(MethodInfo *)0x0);
            if ((__this->fields)._restoreGroupAdded != false) {
              pUVar3 = *targetAddress;
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              UnityEngine_Object__Destroy_69214e0((UnityEngine_Object_o *)pUVar3,(MethodInfo *)0x0);
            }
            goto label_05c9e438;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MobileLayoutEditorOverlay$$RefreshRestorePanel
// il2cpp: void UI_MobileLayoutEditorOverlay__RefreshRestorePanel (UI_MobileLayoutEditorOverlay_o* __this, const MethodInfo* method);
// 0x5c9e4f0

void UI_MobileLayoutEditorOverlay__RefreshRestorePanel
               (UI_MobileLayoutEditorOverlay_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  UnityEngine_GameObject_o *pUVar2;
  bool bVar3;
  UI_BasePanel_o *__this_00;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  
  if (Il2CppMethodInitialized_07547a1f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_BasePanel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"mobile");
    Il2CppMethodInitialized_07547a1f = '\x01';
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields)._restoreObject;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  __this_00 = (UI_BasePanel_o *)0x0;
  bVar3 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pUVar2 = (__this->fields)._restoreObject;
    if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto label_05c9e65c;
    __this_00 = UnityEngine_GameObject__GetComponent_object_
                          (pUVar2,(MethodInfo_353B730 *)
                                  MethodInfo_UnityEngine_GameObject_GetComponent_BasePanel);
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    if (__this_00 == (UI_BasePanel_o *)0x0) goto label_05c9e65c;
    UI_BasePanel__RebuildCategoryPanel(__this_00,(MethodInfo *)0x0);
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields)._restoreObject;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
  bVar3 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pUVar2 = (__this->fields)._restoreObject;
    if (pUVar2 == (UnityEngine_GameObject_o *)0x0) {
label_05c9e65c:
      ThrowNullReferenceException();
    }
    root = UnityEngine_GameObject__GetComponentInParent_object_
                     (pUVar2,(MethodInfo_353BB40 *)
                             MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    Gisketch_Aottg2UI_Game_AottgSettingsScreen__RefreshCategory(root,"mobile",(MethodInfo *)0x0);
    return;
  }
  return;
}


// UI.MobileLayoutEditorOverlay$$Update
// il2cpp: void UI_MobileLayoutEditorOverlay__Update (UI_MobileLayoutEditorOverlay_o* __this, const MethodInfo* method);
// 0x5c9e670

void UI_MobileLayoutEditorOverlay__Update(UI_MobileLayoutEditorOverlay_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  UI_MobileInputControlLayout_o **targetAddress;
  UnityEngine_Vector2_Fields local_10;
  
  local_10.x = 0.0;
  local_10.y = 0.0;
  if ((__this->fields)._draggingControl != (UI_MobileInputControlLayout_o *)0x0) {
    bVar1 = Utility_MobilePlatformUtility__TryGetHeldPointerPosition
                      ((__this->fields)._dragPointerId,(UnityEngine_Vector2_o *)&local_10,(MethodInfo *)0x0);
    if (!bVar1) {
      targetAddress = &(__this->fields)._draggingControl;
      *targetAddress = (UI_MobileInputControlLayout_o *)0x0;
      Il2CppCodeGenWriteBarrier(targetAddress);
      return;
    }
    UI_MobileLayoutEditorOverlay__DragControl
              (__this,(__this->fields)._draggingControl,(UnityEngine_Vector2_o)local_10,method_00);
  }
  return;
}


// UI.MobileLayoutEditorOverlay$$CreateToolbar
// il2cpp: void UI_MobileLayoutEditorOverlay__CreateToolbar (UI_MobileLayoutEditorOverlay_o* __this, const MethodInfo* method);
// 0x5c9d480

void UI_MobileLayoutEditorOverlay__CreateToolbar(UI_MobileLayoutEditorOverlay_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o **targetAddress;
  UI_MobileLayoutEditorToolbar_o **targetAddress_00;
  UnityEngine_Object_o *__this_00;
  UnityEngine_RectTransform_o *pUVar1;
  UI_MobileLayoutEditorToolbar_o *pUVar2;
  System_String_o *pSVar3;
  System_Action_o *__this_01;
  System_Action_o *__this_02;
  System_Action_o *__this_03;
  System_Action_o *__this_04;
  System_Action_o *__this_05;
  System_Action_o *__this_06;
  System_Action_o *__this_07;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_GameObject_o *__this_08;
  UnityEngine_EventSystems_EventTrigger_o *trigger;
  UI_MobileLayoutEditorOverlay_o *pUVar5;
  UI_MobileLayoutEditorOverlay_o *pUVar6;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547a20 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_BaseEventData);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_EventTrigger);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_MobileLayoutEditorToolbar);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MobileLayoutEditorOverlay_AddControl);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MobileLayoutEditorOverlay_Close);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MobileLayoutEditorOverlay_CopySelected);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MobileLayoutEditorOverlay_DeleteSelected);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MobileLayoutEditorOverlay_EditSelected);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MobileLayoutEditorOverlay_SavePreset);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MobileLayoutEditorOverlay_ShowLoadPopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MobileLayoutEditorOverlay_CreateToolbar_b__39_0)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MobileLayoutEditorOverlay_CreateToolbar_b__39_1)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MobileLayoutEditorOverlay_CreateToolbar_b__39_2)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"Toolbar");
    il2cpp_codegen_initialize_runtime_metadata(&"Background");
    il2cpp_codegen_initialize_runtime_metadata(&"Keybinds");
    il2cpp_codegen_initialize_runtime_metadata(&"MobileLayout");
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Panels/HeadedPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547a20 = '\x01';
  }
  __this_00 = (UnityEngine_Object_o *)
              UI_ElementFactory__InstantiateAndBind
                        ((UnityEngine_Transform_o *)(__this->fields)._root,"Prefabs/Panels/HeadedPanel",
                         (MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_Object_o *)0x0) {
    UnityEngine_Object__set_name(__this_00,"Toolbar",(MethodInfo *)0x0);
    pUVar1 = UnityEngine_GameObject__GetComponent_object_
                       ((UnityEngine_GameObject_o *)__this_00,
                        (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    targetAddress = &(__this->fields)._toolbar;
    (__this->fields)._toolbar = pUVar1;
    Il2CppCodeGenWriteBarrier(targetAddress);
    pUVar1 = (__this->fields)._toolbar;
    if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
      UnityEngine_RectTransform__set_anchorMin
                (pUVar1,(UnityEngine_Vector2_o)0x3f8000003f000000,(MethodInfo *)0x0);
      if (*targetAddress != (UnityEngine_RectTransform_o *)0x0) {
        UnityEngine_RectTransform__set_anchorMax
                  (*targetAddress,(UnityEngine_Vector2_o)0x3f8000003f000000,(MethodInfo *)0x0);
        if (*targetAddress != (UnityEngine_RectTransform_o *)0x0) {
          UnityEngine_RectTransform__set_anchoredPosition
                    (*targetAddress,(UnityEngine_Vector2_o)0xc2ac000000000000,(MethodInfo *)0x0);
          pUVar2 = UnityEngine_GameObject__AddComponent_object_
                             ((UnityEngine_GameObject_o *)__this_00,
                              (MethodInfo_353B6A0 *)
                              MethodInfo_UnityEngine_GameObject_AddComponent_MobileLayoutEditorToolbar);
          targetAddress_00 = &(__this->fields)._toolbarPanel;
          (__this->fields)._toolbarPanel = pUVar2;
          Il2CppCodeGenWriteBarrier(targetAddress_00);
          pUVar2 = (__this->fields)._toolbarPanel;
          if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
          }
          method_00 = (MethodInfo *)"";
          pSVar3 = UI_UIManager__GetLocale
                             ("SettingsPopup","Keybinds","MobileLayout",
                              "","",(MethodInfo *)0x0);
          __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
          System_Action___ctor
                    (__this_01,(Il2CppObject *)__this,
                     (intptr_t)MethodInfo_UI_MobileLayoutEditorOverlay_ShowLoadPopup,(MethodInfo *)0x0);
          __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
          System_Action___ctor
                    (__this_02,(Il2CppObject *)__this,
                     (intptr_t)MethodInfo_UI_MobileLayoutEditorOverlay_SavePreset,(MethodInfo *)0x0);
          __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
          System_Action___ctor
                    (__this_03,(Il2CppObject *)__this,
                     (intptr_t)MethodInfo_UI_MobileLayoutEditorOverlay_AddControl,(MethodInfo *)0x0);
          __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
          System_Action___ctor
                    (__this_04,(Il2CppObject *)__this,
                     (intptr_t)MethodInfo_UI_MobileLayoutEditorOverlay_EditSelected,(MethodInfo *)0x0);
          __this_05 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
          System_Action___ctor
                    (__this_05,(Il2CppObject *)__this,
                     (intptr_t)MethodInfo_UI_MobileLayoutEditorOverlay_DeleteSelected,(MethodInfo *)0x0);
          __this_06 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
          System_Action___ctor
                    (__this_06,(Il2CppObject *)__this,
                     (intptr_t)MethodInfo_UI_MobileLayoutEditorOverlay_CopySelected,(MethodInfo *)0x0);
          __this_07 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
          System_Action___ctor
                    (__this_07,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_MobileLayoutEditorOverlay_Close,
                     (MethodInfo *)0x0);
          if (pUVar2 != (UI_MobileLayoutEditorToolbar_o *)0x0) {
            (pUVar2->fields)._title = pSVar3;
            Il2CppCodeGenWriteBarrier(&(pUVar2->fields)._title);
            (pUVar2->fields)._loadPreset = __this_01;
            Il2CppCodeGenWriteBarrier(&(pUVar2->fields)._loadPreset);
            (pUVar2->fields)._savePreset = __this_02;
            Il2CppCodeGenWriteBarrier(&(pUVar2->fields)._savePreset);
            (pUVar2->fields)._add = __this_03;
            Il2CppCodeGenWriteBarrier(&(pUVar2->fields)._add);
            (pUVar2->fields)._edit = __this_04;
            Il2CppCodeGenWriteBarrier(&(pUVar2->fields)._edit);
            (pUVar2->fields)._delete = __this_05;
            Il2CppCodeGenWriteBarrier(&(pUVar2->fields)._delete);
            (pUVar2->fields)._copy = __this_06;
            Il2CppCodeGenWriteBarrier(&(pUVar2->fields)._copy);
            (pUVar2->fields)._back = __this_07;
            Il2CppCodeGenWriteBarrier(&(pUVar2->fields)._back);
            (*(pUVar2->klass->vtable)._20_Setup.methodPtr)
                      (pUVar2,(UI_BasePanel_o *)0x0,(pUVar2->klass->vtable)._20_Setup.method);
            pUVar2 = *targetAddress_00;
            if (pUVar2 != (UI_MobileLayoutEditorToolbar_o *)0x0) {
              (__this->fields)._returnButton = (pUVar2->fields)._ReturnButton_k__BackingField;
              Il2CppCodeGenWriteBarrier(&(__this->fields)._returnButton);
              pUVar4 = UnityEngine_GameObject__get_transform
                                 ((UnityEngine_GameObject_o *)__this_00,(MethodInfo *)0x0);
              if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                pUVar4 = UnityEngine_Transform__Find(pUVar4,"Background",(MethodInfo *)0x0);
                if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                  __this_08 = UnityEngine_Component__get_gameObject
                                        ((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0);
                  if (__this_08 != (UnityEngine_GameObject_o *)0x0) {
                    trigger = UnityEngine_GameObject__AddComponent_object_
                                        (__this_08,
                                         (MethodInfo_353B6A0 *)
                                         MethodInfo_UnityEngine_GameObject_AddComponent_EventTrigger);
                    pUVar5 = (UI_MobileLayoutEditorOverlay_o *)
                             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_BaseEventData);
                    pUVar6 = pUVar5;
                    System_Action_object____ctor
                              ((System_Action_object__o *)pUVar5,(Il2CppObject *)__this,
                               (intptr_t)MethodInfo_UI_MobileLayoutEditorOverlay_CreateToolbar_b__39_0,
                               (MethodInfo_4A81BE0 *)0x0);
                    UI_MobileLayoutEditorOverlay__AddTrigger
                              (pUVar6,trigger,2,(System_Action_BaseEventData__o *)pUVar5,method_00);
                    pUVar5 = (UI_MobileLayoutEditorOverlay_o *)
                             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_BaseEventData);
                    pUVar6 = pUVar5;
                    System_Action_object____ctor
                              ((System_Action_object__o *)pUVar5,(Il2CppObject *)__this,
                               (intptr_t)MethodInfo_UI_MobileLayoutEditorOverlay_CreateToolbar_b__39_1,
                               (MethodInfo_4A81BE0 *)0x0);
                    UI_MobileLayoutEditorOverlay__AddTrigger
                              (pUVar6,trigger,5,(System_Action_BaseEventData__o *)pUVar5,method_00);
                    pUVar5 = (UI_MobileLayoutEditorOverlay_o *)
                             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_BaseEventData);
                    pUVar6 = pUVar5;
                    System_Action_object____ctor
                              ((System_Action_object__o *)pUVar5,(Il2CppObject *)__this,
                               (intptr_t)MethodInfo_UI_MobileLayoutEditorOverlay_CreateToolbar_b__39_2,
                               (MethodInfo_4A81BE0 *)0x0);
                    UI_MobileLayoutEditorOverlay__AddTrigger
                              (pUVar6,trigger,3,(System_Action_BaseEventData__o *)pUVar5,method_00);
                    return;
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


// UI.MobileLayoutEditorOverlay$$RebuildControls
// il2cpp: void UI_MobileLayoutEditorOverlay__RebuildControls (UI_MobileLayoutEditorOverlay_o* __this, const MethodInfo* method);
// 0x5c9da00
// eh: try 0x5c9db10..0x5c9dc88 -> pad 0x5c9dc90 (+7 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5c9dcae..0x5c9dcb3 -> pad 0x5c9de41 cleanup
// eh: try 0x5c9ddf4..0x5c9de0f -> pad 0x5c9de58 (+1 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5c9de44..0x5c9de4e -> pad 0x5c9dea5 catch (...) [compiler noexcept guard]
// eh: try 0x5c9de70..0x5c9de75 -> pad 0x5c9de96 cleanup
// eh: try 0x5c9de99..0x5c9dea3 -> pad 0x5c9dea5 catch (...) [compiler noexcept guard]
// asm: 44 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c9dc88: jmp 0x5c9dc92
// asm:   0x5c9dc8a: jmp 0x5c9dc92
// asm:   0x5c9dc8c: jmp 0x5c9dc92
// asm:   0x5c9dc8e: jmp 0x5c9dc92
// asm:   0x5c9dc90: jmp 0x5c9dc92
// asm:   0x5c9dc92: mov r14, rax
// asm:   0x5c9dc95: cmp edx, 1
// asm:   0x5c9dc98: jne 0x5c9de44
// asm:   0x5c9dc9e: mov rdi, r14
// asm:   0x5c9dca1: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c9dca6: mov r14, qword ptr [rax]
// asm:   0x5c9dca9: mov qword ptr [rsp + 0x10], r14
// asm:   0x5c9dcae: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c9ddef: nop 
// asm:   0x5c9de39: mov rdi, r14
// asm:   0x5c9de3c: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c9de41: mov r14, rax
// asm:   0x5c9de44: lea rdi, [rsp + 0x10]
// asm:   0x5c9de49: call 0x2fdad60  ; il2cpp_runtime_helper_02fdad60()
// asm:   0x5c9de4e: mov rdi, r14
// asm:   0x5c9de51: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c9de56: jmp 0x5c9de58
// asm:   0x5c9de58: mov r14, rax
// asm:   0x5c9de5b: cmp edx, 1
// asm:   0x5c9de5e: jne 0x5c9de99
// asm:   0x5c9de60: mov rdi, r14
// asm:   0x5c9de63: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c9de68: mov rbx, qword ptr [rax]
// asm:   0x5c9de6b: mov qword ptr [rsp + 0x10], rbx
// asm:   0x5c9de70: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c9de75: lea rax, [rip + 0x15f070c]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MobileInputControlLayout_Dispose
// asm:   0x5c9de7c: mov rsi, qword ptr [rax]
// asm:   0x5c9de7f: lea rdi, [rsp + 0x30]
// asm:   0x5c9de84: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5c9de89: test rbx, rbx
// asm:   0x5c9de8c: je 0x5c9de25
// asm:   0x5c9de8e: mov rdi, rbx
// asm:   0x5c9de91: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c9de96: mov r14, rax
// asm:   0x5c9de99: lea rdi, [rsp + 0x10]
// asm:   0x5c9de9e: call 0x2fdae00  ; il2cpp_runtime_helper_02fdae00()
// asm:   0x5c9dea3: jmp 0x5c9de4e
// asm:   0x5c9dea5: mov rdi, rax
// asm:   0x5c9dea8: call 0x2ab61e0  ; __clang_call_terminate()

void UI_MobileLayoutEditorOverlay__RebuildControls(UI_MobileLayoutEditorOverlay_o *__this,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_RectTransform_o *__this_00;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  UI_MobileInputLayout_o *pUVar5;
  System_Collections_Generic_List_MobileInputControlLayout__o *__this_01;
  bool bVar6;
  MethodInfo *method_00;
  VirtualInvokeData *pVVar7;
  UnityEngine_Component_o *__this_02;
  UnityEngine_Object_o *obj;
  Il2CppObject *pIVar8;
  ulong uVar9;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  UnityEngine_Transform_c **__this_03;
  long lVar10;
  Il2CppObject *local_70;
  undefined8 local_68;
  System_Collections_Generic_List_Enumerator_T__o *local_60;
  Il2CppObject **local_58;
  Il2CppObject *local_50;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  __this_03 = (UnityEngine_Transform_c **)__this;
  if (Il2CppMethodInitialized_07547a21 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_MobileInputControlLayout_MobileInputControlLayout_Clear
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_MobileInputControlLayout_RectTransform_Clear)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MobileInputControlLayout_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MobileInputControlLayout_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MobileInputControlLayout_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MobileInputControlLayout_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    __this_03 = &TypeInfo_UnityEngine_Transform;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Transform);
    Il2CppMethodInitialized_07547a21 = '\x01';
    in_RDX = extraout_RDX;
  }
  local_50 = (Il2CppObject *)0x0;
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  UI_MobileLayoutEditorOverlay__EnsureCoreControls
            ((UI_MobileLayoutEditorOverlay_o *)__this_03,(__this->fields)._layout,in_RDX);
  __this_00 = (__this->fields)._controlsRoot;
  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
    local_70 = (Il2CppObject *)
               UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)__this_00,(MethodInfo *)0x0);
    local_68 = 0;
    local_60 = (System_Collections_Generic_List_Enumerator_T__o *)&local_70;
    local_58 = &local_50;
    do {
      pIVar8 = local_70;
      if (local_70 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar2 = local_70->klass;
      uVar9 = (ulong)(pIVar2->_2).interface_offsets_count;
      if (uVar9 != 0) {
        pIVar3 = (pIVar2->_1).interfaceOffsets;
        lVar10 = 0;
        do {
          if (*(System_Collections_IEnumerator_c **)((long)&pIVar3->interfaceType + lVar10) ==
              TypeInfo_System_Collections_IEnumerator) {
            method_00 = (MethodInfo *)(pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar10));
            goto label_05c9db83;
          }
          lVar10 = lVar10 + 0x10;
        } while (uVar9 * 0x10 != lVar10);
      }
      method_00 = (MethodInfo *)
                  GetInterfaceInvokeDataFromVTableSlowPath
                            (local_70,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_05c9db83:
      bVar6 = (*method_00->methodPointer)(pIVar8,(MethodInfo *)method_00->virtualMethodPointer);
      pIVar8 = local_70;
      if (!bVar6) {
        pIVar8 = il2cpp_vm_Object_IsInst(local_70,(Il2CppClass *)TypeInfo_System_IDisposable);
        local_50 = pIVar8;
        if (pIVar8 == (Il2CppObject *)0x0) goto label_05c9dd36;
        pIVar2 = pIVar8->klass;
        uVar9 = (ulong)(pIVar2->_2).interface_offsets_count;
        method_00 = (MethodInfo *)0x0;
        if (uVar9 == 0) goto label_05c9dd0f;
        pIVar3 = (pIVar2->_1).interfaceOffsets;
        method_00 = (MethodInfo *)(uVar9 * 0x10);
        lVar10 = 0;
        goto label_05c9dd00;
      }
      if (local_70 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar2 = local_70->klass;
      uVar9 = (ulong)(pIVar2->_2).interface_offsets_count;
      if (uVar9 != 0) {
        pIVar3 = (pIVar2->_1).interfaceOffsets;
        lVar10 = 0;
        do {
          if (*(System_Collections_IEnumerator_c **)((long)&pIVar3->interfaceType + lVar10) ==
              TypeInfo_System_Collections_IEnumerator) {
            pVVar7 = pIVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar10) + 1);
            goto label_05c9dc17;
          }
          lVar10 = lVar10 + 0x10;
        } while (uVar9 * 0x10 != lVar10);
      }
      pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                         (local_70,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_05c9dc17:
      __this_02 = (UnityEngine_Component_o *)(*pVVar7->methodPtr)(pIVar8,pVVar7->method);
      if (__this_02 == (UnityEngine_Component_o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar1 = (TypeInfo_UnityEngine_Transform->_2).typeHierarchyDepth;
      if (((__this_02->klass->_2).typeHierarchyDepth < bVar1) ||
         ((__this_02->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_UnityEngine_Transform)) {
        il2cpp_codegen_raise_invalid_cast_exception(__this_02);
      }
      obj = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(__this_02,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_69214e0(obj,(MethodInfo *)0x0);
    } while( true );
  }
  goto label_05c9de34;
  while (lVar10 = lVar10 + 0x10, method_00 != (MethodInfo *)lVar10) {
label_05c9dd00:
    if (*(System_IDisposable_c **)((long)&pIVar3->interfaceType + lVar10) == TypeInfo_System_IDisposable) {
      method_00 = (MethodInfo *)((long)*(int *)((long)&pIVar3->offset + lVar10) * 0x10);
      pVVar7 = (VirtualInvokeData *)((long)&method_00[3].parameters + (long)pIVar2);
      goto label_05c9dd2d;
    }
  }
label_05c9dd0f:
  pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar8,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05c9dd2d:
  (*pVVar7->methodPtr)(pIVar8,pVVar7->method);
label_05c9dd36:
  pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._controlRects;
  if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Clear
              (pSVar4,(MethodInfo_4AAD690 *)
                      MethodInfo_System_Collections_Generic_Dictionary_MobileInputControlLayout_RectTransform_Clear
              );
    pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._controlParents;
    if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Clear
                (pSVar4,(MethodInfo_4AAD690 *)
                        MethodInfo_System_Collections_Generic_Dictionary_MobileInputControlLayout_MobileInputControlLayout_Clear
                );
      (__this->fields)._selectedControl = (UI_MobileInputControlLayout_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._selectedControl);
      (__this->fields)._selectedRect = (UnityEngine_RectTransform_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._selectedRect);
      pUVar5 = (__this->fields)._layout;
      if (pUVar5 != (UI_MobileInputLayout_o *)0x0) {
        UI_MobileInputLayout__AssignRuntimeIds(pUVar5,(MethodInfo *)0x0);
        pUVar5 = (__this->fields)._layout;
        if ((pUVar5 != (UI_MobileInputLayout_o *)0x0) &&
           (__this_01 = (pUVar5->fields).Controls,
           __this_01 != (System_Collections_Generic_List_MobileInputControlLayout__o *)0x0)) {
          System_Collections_Generic_List_object___GetEnumerator
                    (&local_48,(System_Collections_Generic_List_object__o *)__this_01,
                     (MethodInfo_395E050 *)
                     MethodInfo_System_Collections_Generic_List_MobileInputControlLayout_GetEnumerator);
          local_68 = 0;
          local_60 = &local_48;
          while (bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                   ((System_Collections_Generic_List_Enumerator_object__o *)&local_48,
                                    (MethodInfo_4C45C50 *)
                                    MethodInfo_System_Collections_Generic_List_Enumerator_MobileInputControlLayout_MoveNext
                                   ), bVar6) {
            UI_MobileLayoutEditorOverlay__CreateEditableControl
                      (__this,(UI_MobileInputControlLayout_o *)local_48.fields._current,
                       (UI_MobileInputControlLayout_o *)0x0,method_00);
          }
          System_Collections_Generic_List_Enumerator_object___Dispose
                    ((System_Collections_Generic_List_Enumerator_object__o *)&local_48,
                     (MethodInfo_4C45C40 *)
                     MethodInfo_System_Collections_Generic_List_Enumerator_MobileInputControlLayout_Dispose);
          return;
        }
      }
    }
  }
label_05c9de34:
  ThrowNullReferenceException();
}


// UI.MobileLayoutEditorOverlay$$CreateEditableControl
// il2cpp: void UI_MobileLayoutEditorOverlay__CreateEditableControl (UI_MobileLayoutEditorOverlay_o* __this, UI_MobileInputControlLayout_o* control, UI_MobileInputControlLayout_o* parentControl, const MethodInfo* method);
// 0x5c9f0e0
// eh: try 0x5c9f564..0x5c9f581 -> pad 0x5c9f5ad (+1 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5c9f5c5..0x5c9f5ca -> pad 0x5c9f5eb cleanup
// eh: try 0x5c9f5ee..0x5c9f5f8 -> pad 0x5c9f600 catch (...) [compiler noexcept guard]
// asm: 24 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c9f5ab: jmp 0x5c9f5ad
// asm:   0x5c9f5ad: mov rbx, rax
// asm:   0x5c9f5b0: cmp edx, 1
// asm:   0x5c9f5b3: jne 0x5c9f5ee
// asm:   0x5c9f5b5: mov rdi, rbx
// asm:   0x5c9f5b8: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c9f5bd: mov rbx, qword ptr [rax]
// asm:   0x5c9f5c0: mov qword ptr [rsp + 0x38], rbx
// asm:   0x5c9f5c5: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c9f5ca: lea rax, [rip + 0x15eefb7]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MobileInputControlLayout_Dispose
// asm:   0x5c9f5d1: mov rsi, qword ptr [rax]
// asm:   0x5c9f5d4: lea rdi, [rsp + 0x20]
// asm:   0x5c9f5d9: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5c9f5de: test rbx, rbx
// asm:   0x5c9f5e1: je 0x5c9f597
// asm:   0x5c9f5e3: mov rdi, rbx
// asm:   0x5c9f5e6: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c9f5eb: mov rbx, rax
// asm:   0x5c9f5ee: lea rdi, [rsp + 0x38]
// asm:   0x5c9f5f3: call 0x2fdae30  ; il2cpp_runtime_helper_02fdae30()
// asm:   0x5c9f5f8: mov rdi, rbx
// asm:   0x5c9f5fb: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c9f600: mov rdi, rax
// asm:   0x5c9f603: call 0x2ab61e0  ; __clang_call_terminate()

void UI_MobileLayoutEditorOverlay__CreateEditableControl
               (UI_MobileLayoutEditorOverlay_o *__this,UI_MobileInputControlLayout_o *control,
               UI_MobileInputControlLayout_o *parentControl,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  UI_MobileInputControlLayout_o *pUVar3;
  UI_MobileInputControlLayout_o *control_00;
  System_String_o *name;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  System_Collections_Generic_List_MobileInputControlLayout__o *__this_00;
  UnityEngine_Vector2_o anchoredPosition;
  bool bVar5;
  int32_t iVar6;
  UI_MobileLayoutEditorOverlay___c__DisplayClass41_0_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_UI_Image_o *image;
  UI_MobileInputSkin_o *skin;
  UnityEngine_RectTransform_o *pUVar7;
  UnityEngine_EventSystems_EventTrigger_o *trigger;
  UI_MobileLayoutEditorOverlay_o *pUVar8;
  MethodInfo *method_00;
  UI_MobileLayoutEditorOverlay_o *pUVar9;
  MethodInfo *in_R8;
  UI_MobileInputControlLayout_o **targetAddress;
  float fVar10;
  UnityEngine_Rect_o UVar11;
  UnityEngine_Vector2_o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  undefined8 local_40;
  System_Collections_Generic_List_Enumerator_T__o *local_38;
  
  if (Il2CppMethodInitialized_07547a22 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_BaseEventData);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_MobileInputControlLayout_MobileInputControlLayout_set_Item
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_MobileInputControlLayout_RectTransform_set_Item
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MobileInputControlLayout_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MobileInputControlLayout_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MobileInputControlLayout_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_EventTrigger);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MobileInputControlLayout_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileControlSkinManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass41_0_CreateEditableControl_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass41_0_CreateEditableControl_b__1);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass41_0_CreateEditableControl_b__2);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass41_0_CreateEditableControl_b__3);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass41_0);
    Il2CppMethodInitialized_07547a22 = '\x01';
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass41_0);
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  if (__this_01 != (UI_MobileLayoutEditorOverlay___c__DisplayClass41_0_o *)0x0) {
    (__this_01->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).__4__this);
    targetAddress = &(__this_01->fields).control;
    (__this_01->fields).control = control;
    Il2CppCodeGenWriteBarrier(targetAddress);
    pUVar3 = (__this_01->fields).control;
    if (Il2CppMethodInitialized_07547a4a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
      Il2CppMethodInitialized_07547a4a = '\x01';
    }
    pUVar7 = (__this->fields)._controlsRoot;
    if (pUVar7 != (UnityEngine_RectTransform_o *)0x0) {
      UVar11 = UnityEngine_RectTransform__get_rect(pUVar7,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
      }
      if ((pUVar3 != (UI_MobileInputControlLayout_o *)0x0) &&
         (control_00 = *targetAddress, control_00 != (UI_MobileInputControlLayout_o *)0x0)) {
        fVar10 = UVar11.fields.m_Width;
        if (UVar11.fields.m_Height <= UVar11.fields.m_Width) {
          fVar10 = UVar11.fields.m_Height;
        }
        uVar1 = (pUVar3->fields).Width;
        uVar2 = (pUVar3->fields).Height;
        local_68.fields.y = fVar10 * (float)uVar2;
        local_68.fields.x = fVar10 * (float)uVar1;
        name = (control_00->fields).Id;
        pUVar7 = (__this->fields)._controlsRoot;
        pUVar9 = __this;
        anchoredPosition =
             UI_MobileLayoutEditorOverlay__GetControlPosition(__this,control_00,parentControl,method);
        __this_02 = UI_MobileLayoutEditorOverlay__CreateRect
                              (pUVar9,name,pUVar7,(UnityEngine_Vector2_o)0x3f0000003f000000,
                               (UnityEngine_Vector2_o)0x3f0000003f000000,local_68,anchoredPosition,method);
        if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
          image = UnityEngine_GameObject__AddComponent_object_
                            (__this_02,
                             (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_Image);
          if (*targetAddress != (UI_MobileInputControlLayout_o *)0x0) {
            skin = UI_MobileInputControlLayout__GetSkin(*targetAddress,(MethodInfo *)0x0);
            if (*targetAddress != (UI_MobileInputControlLayout_o *)0x0) {
              iVar6 = UI_MobileInputControlLayout__GetShape(*targetAddress,(MethodInfo *)0x0);
              if ((TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager);
              }
              method_00 = (MethodInfo *)0x0;
              UI_MobileControlSkinManager__ApplySkin(image,skin,iVar6,(MethodInfo *)0x0);
              pUVar7 = UnityEngine_GameObject__GetComponent_object_
                                 (__this_02,
                                  (MethodInfo_353B730 *)
                                  MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
              UI_MobileLayoutEditorOverlay__AddControlIconOrLabel
                        (__this,pUVar7,*targetAddress,local_68,method_00);
              trigger = UnityEngine_GameObject__AddComponent_object_
                                  (__this_02,
                                   (MethodInfo_353B6A0 *)
                                   MethodInfo_UnityEngine_GameObject_AddComponent_EventTrigger);
              pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                       (__this->fields)._controlRects;
              pUVar3 = *targetAddress;
              pUVar7 = UnityEngine_GameObject__GetComponent_object_
                                 (__this_02,
                                  (MethodInfo_353B730 *)
                                  MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
              if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                System_Collections_Generic_Dictionary_object__object___set_Item
                          (pSVar4,(Il2CppObject *)pUVar3,(Il2CppObject *)pUVar7,
                           (MethodInfo_4AAD4C0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_MobileInputControlLayout_RectTransform_set_Item
                          );
                if (parentControl != (UI_MobileInputControlLayout_o *)0x0) {
                  pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                           (__this->fields)._controlParents;
                  if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
                  goto label_05c9f5a6;
                  System_Collections_Generic_Dictionary_object__object___set_Item
                            (pSVar4,(Il2CppObject *)*targetAddress,(Il2CppObject *)parentControl,
                             (MethodInfo_4AAD4C0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_MobileInputControlLayout_MobileInputControlLayout_set_Item
                            );
                }
                pUVar8 = (UI_MobileLayoutEditorOverlay_o *)
                         il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_BaseEventData);
                pUVar9 = pUVar8;
                System_Action_object____ctor
                          ((System_Action_object__o *)pUVar8,(Il2CppObject *)__this_01,
                           (intptr_t)
                           MethodInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass41_0_CreateEditableControl_b__0
                           ,(MethodInfo_4A81BE0 *)0x0);
                UI_MobileLayoutEditorOverlay__AddTrigger
                          (pUVar9,trigger,2,(System_Action_BaseEventData__o *)pUVar8,in_R8);
                pUVar8 = (UI_MobileLayoutEditorOverlay_o *)
                         il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_BaseEventData);
                pUVar9 = pUVar8;
                System_Action_object____ctor
                          ((System_Action_object__o *)pUVar8,(Il2CppObject *)__this_01,
                           (intptr_t)
                           MethodInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass41_0_CreateEditableControl_b__1
                           ,(MethodInfo_4A81BE0 *)0x0);
                UI_MobileLayoutEditorOverlay__AddTrigger
                          (pUVar9,trigger,5,(System_Action_BaseEventData__o *)pUVar8,in_R8);
                pUVar8 = (UI_MobileLayoutEditorOverlay_o *)
                         il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_BaseEventData);
                pUVar9 = pUVar8;
                System_Action_object____ctor
                          ((System_Action_object__o *)pUVar8,(Il2CppObject *)__this_01,
                           (intptr_t)
                           MethodInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass41_0_CreateEditableControl_b__2
                           ,(MethodInfo_4A81BE0 *)0x0);
                UI_MobileLayoutEditorOverlay__AddTrigger
                          (pUVar9,trigger,3,(System_Action_BaseEventData__o *)pUVar8,in_R8);
                pUVar8 = (UI_MobileLayoutEditorOverlay_o *)
                         il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_BaseEventData);
                pUVar9 = pUVar8;
                System_Action_object____ctor
                          ((System_Action_object__o *)pUVar8,(Il2CppObject *)__this_01,
                           (intptr_t)
                           MethodInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass41_0_CreateEditableControl_b__3
                           ,(MethodInfo_4A81BE0 *)0x0);
                UI_MobileLayoutEditorOverlay__AddTrigger
                          (pUVar9,trigger,1,(System_Action_BaseEventData__o *)pUVar8,in_R8);
                if (parentControl == (UI_MobileInputControlLayout_o *)0x0) {
                  if (*targetAddress == (UI_MobileInputControlLayout_o *)0x0) goto label_05c9f5a6;
                  iVar6 = UI_MobileInputControlLayout__GetKind(*targetAddress,(MethodInfo *)0x0);
                  if (iVar6 == 2) {
                    if (*targetAddress == (UI_MobileInputControlLayout_o *)0x0) goto label_05c9f5a6;
                    __this_00 = ((*targetAddress)->fields).Children;
                    if (__this_00 != (System_Collections_Generic_List_MobileInputControlLayout__o *)0x0) {
                      System_Collections_Generic_List_object___GetEnumerator
                                (&local_58,(System_Collections_Generic_List_object__o *)__this_00,
                                 (MethodInfo_395E050 *)
                                 MethodInfo_System_Collections_Generic_List_MobileInputControlLayout_GetEnumerator
                                );
                      local_40 = 0;
                      local_38 = &local_58;
                      while( true ) {
                        bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                          ((System_Collections_Generic_List_Enumerator_object__o *)&local_58,
                                           (MethodInfo_4C45C50 *)
                                           MethodInfo_System_Collections_Generic_List_Enumerator_MobileInputControlLayout_MoveNext
                                          );
                        if (!bVar5) break;
                        UI_MobileLayoutEditorOverlay__CreateEditableControl
                                  (__this,(UI_MobileInputControlLayout_o *)local_58.fields._current,
                                   *targetAddress,(MethodInfo *)pUVar8);
                      }
                      System_Collections_Generic_List_Enumerator_object___Dispose
                                ((System_Collections_Generic_List_Enumerator_object__o *)&local_58,
                                 (MethodInfo_4C45C40 *)
                                 MethodInfo_System_Collections_Generic_List_Enumerator_MobileInputControlLayout_Dispose
                                );
                    }
                  }
                }
                return;
              }
            }
          }
        }
      }
    }
  }
label_05c9f5a6:
  ThrowNullReferenceException();
}


// UI.MobileLayoutEditorOverlay$$SelectControl
// il2cpp: void UI_MobileLayoutEditorOverlay__SelectControl (UI_MobileLayoutEditorOverlay_o* __this, UI_MobileInputControlLayout_o* control, const MethodInfo* method);
// 0x5c9faa0

void UI_MobileLayoutEditorOverlay__SelectControl
               (UI_MobileLayoutEditorOverlay_o *__this,UI_MobileInputControlLayout_o *control,
               MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_Fields UVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  UnityEngine_Vector2_o anchorMin;
  UnityEngine_Vector2_o anchorMax;
  bool bVar3;
  UnityEngine_Vector2_c **__this_01;
  UnityEngine_Vector2_StaticFields *pUVar4;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_RectTransform_o *pUVar5;
  UnityEngine_UI_Image_o *pUVar6;
  MethodInfo *method_00;
  UnityEngine_RectTransform_o **targetAddress;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  UnityEngine_Color_o UVar11;
  UnityEngine_RectTransform_o *local_40;
  UnityEngine_Vector2_Fields local_38;
  undefined8 uStack_30;
  UnityEngine_Vector2_Fields local_28;
  undefined8 uStack_20;
  
  if (Il2CppMethodInitialized_07547a23 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_MobileInputControlLayout_RectTransform_TryGetValue
              );
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"Selection");
    Il2CppMethodInitialized_07547a23 = '\x01';
  }
  local_40 = (UnityEngine_RectTransform_o *)0x0;
  if (control == (UI_MobileInputControlLayout_o *)0x0) {
    return;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._controlRects;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    method_00 = 
    MethodInfo_System_Collections_Generic_Dictionary_MobileInputControlLayout_RectTransform_TryGetValue;
    bVar3 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (__this_00,(Il2CppObject *)control,(Il2CppObject **)&local_40,
                       (MethodInfo_4AAF440 *)
                       MethodInfo_System_Collections_Generic_Dictionary_MobileInputControlLayout_RectTransform_TryGetValue
                      );
    if (!bVar3) {
      return;
    }
    (__this->fields)._selectedControl = control;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._selectedControl);
    __this_01 = (UnityEngine_Vector2_c **)(__this->fields)._selectedRect;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    targetAddress = &(__this->fields)._selectedRect;
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      if (*targetAddress == (UnityEngine_RectTransform_o *)0x0) goto label_05c9fcdf;
      __this_01 = (UnityEngine_Vector2_c **)
                  UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)*targetAddress,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_69214e0((UnityEngine_Object_o *)__this_01,(MethodInfo *)0x0);
    }
    pUVar5 = local_40;
    if (Il2CppMethodInitialized_0753ecc8 == '\0') {
      __this_01 = &TypeInfo_UnityEngine_Vector2;
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_0753ecc8 = '\x01';
    }
    pUVar4 = TypeInfo_UnityEngine_Vector2->static_fields;
    UVar1 = (pUVar4->zeroVector).fields;
    if (Il2CppMethodInitialized_07542885 == '\0') {
      uStack_30 = 0;
      __this_01 = &TypeInfo_UnityEngine_Vector2;
      local_38 = UVar1;
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_07542885 = '\x01';
      pUVar4 = TypeInfo_UnityEngine_Vector2->static_fields;
      UVar1 = (pUVar4->oneVector).fields;
      fVar9 = UVar1.x;
      fVar10 = UVar1.y;
      if (Il2CppMethodInitialized_0753ecc8 == '\0') {
        __this_01 = &TypeInfo_UnityEngine_Vector2;
        uStack_20 = 0;
        local_28 = UVar1;
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
        Il2CppMethodInitialized_0753ecc8 = '\x01';
        pUVar4 = TypeInfo_UnityEngine_Vector2->static_fields;
        fVar9 = local_28.x;
        fVar10 = local_28.y;
      }
      fVar7 = local_38.x;
      fVar8 = local_38.y;
    }
    else {
      UVar2 = (pUVar4->oneVector).fields;
      fVar9 = UVar2.x;
      fVar10 = UVar2.y;
      fVar7 = UVar1.x;
      fVar8 = UVar1.y;
    }
    UVar1 = (pUVar4->zeroVector).fields;
    anchorMin.fields.y = fVar8;
    anchorMin.fields.x = fVar7;
    anchorMax.fields.y = fVar10;
    anchorMax.fields.x = fVar9;
    __this_02 = UI_MobileLayoutEditorOverlay__CreateRect
                          ((UI_MobileLayoutEditorOverlay_o *)__this_01,"Selection",pUVar5,anchorMin,
                           anchorMax,(UnityEngine_Vector2_o)UVar1,(UnityEngine_Vector2_o)UVar1,method_00);
    if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
      pUVar5 = UnityEngine_GameObject__GetComponent_object_
                         (__this_02,
                          (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
      *targetAddress = pUVar5;
      Il2CppCodeGenWriteBarrier(targetAddress);
      pUVar6 = UnityEngine_GameObject__AddComponent_object_
                         (__this_02,(MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_Image
                         );
      if (pUVar6 != (UnityEngine_UI_Image_o *)0x0) {
        UVar11.fields.b = 0.1;
        UVar11.fields.a = 0.25;
        UVar11.fields.r = 1.0;
        UVar11.fields.g = 0.85;
        (*(pUVar6->klass->vtable)._23_set_color.methodPtr)
                  (pUVar6,UVar11,(pUVar6->klass->vtable)._23_set_color.method);
        (*(pUVar6->klass->vtable)._25_set_raycastTarget.methodPtr)
                  (pUVar6,false,(pUVar6->klass->vtable)._25_set_raycastTarget.method);
        return;
      }
    }
  }
label_05c9fcdf:
  ThrowNullReferenceException();
}


// UI.MobileLayoutEditorOverlay$$BeginControlDrag
// il2cpp: void UI_MobileLayoutEditorOverlay__BeginControlDrag (UI_MobileLayoutEditorOverlay_o* __this, UI_MobileInputControlLayout_o* control, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5c9fcf0

void UI_MobileLayoutEditorOverlay__BeginControlDrag
               (UI_MobileLayoutEditorOverlay_o *__this,UI_MobileInputControlLayout_o *control,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  UnityEngine_RectTransform_o *rect;
  UnityEngine_Vector2_o UVar2;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_EventSystems_PointerEventData_o *extraout_RDX;
  UnityEngine_EventSystems_PointerEventData_o *method_00;
  float fVar3;
  float fVar4;
  UnityEngine_Vector2_Fields UStack_40;
  UnityEngine_Vector2_Fields UStack_38;
  undefined8 uStack_30;
  
  method_00 = eventData;
  if (Il2CppMethodInitialized_07547a24 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_MobileInputControlLayout_RectTransform_get_Item
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransformUtility);
    Il2CppMethodInitialized_07547a24 = '\x01';
    method_00 = extraout_RDX;
  }
  UStack_40.x = 0.0;
  UStack_40.y = 0.0;
  UI_MobileLayoutEditorOverlay__SelectControl(__this,control,(MethodInfo *)method_00);
  (__this->fields)._draggingControl = control;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._draggingControl);
  if (eventData != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    (__this->fields)._dragPointerId = (eventData->fields)._pointerId_k__BackingField;
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._controlRects;
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      __this_01 = System_Collections_Generic_Dictionary_object__object___get_Item
                            (__this_00,(Il2CppObject *)control,
                             (MethodInfo_4AAD450 *)
                             MethodInfo_System_Collections_Generic_Dictionary_MobileInputControlLayout_RectTransform_get_Item
                            );
      rect = (__this->fields)._controlsRoot;
      UVar1 = (eventData->fields)._position_k__BackingField.fields;
      fVar3 = UVar1.x;
      fVar4 = UVar1.y;
      if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
        uStack_30 = 0;
        UStack_38 = UVar1;
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
        fVar3 = UStack_38.x;
        fVar4 = UStack_38.y;
      }
      UVar2.fields.y = fVar4;
      UVar2.fields.x = fVar3;
      UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                (rect,UVar2,(UnityEngine_Camera_o *)0x0,(UnityEngine_Vector2_o *)&UStack_40,(MethodInfo *)0x0)
      ;
      if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
        UVar2 = UnityEngine_RectTransform__get_anchoredPosition(__this_01,(MethodInfo *)0x0);
        UVar1.y = UVar2.fields.y - UStack_40.y;
        UVar1.x = UVar2.fields.x - UStack_40.x;
        (__this->fields)._controlDragOffset.fields = UVar1;
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MobileLayoutEditorOverlay$$DragControl
// il2cpp: void UI_MobileLayoutEditorOverlay__DragControl (UI_MobileLayoutEditorOverlay_o* __this, UI_MobileInputControlLayout_o* control, UnityEngine_Vector2_o screenPosition, const MethodInfo* method);
// 0x5c9fe00
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c9ff4b: jmp 0x5c9ff5e

void UI_MobileLayoutEditorOverlay__DragControl
               (UI_MobileLayoutEditorOverlay_o *__this,UI_MobileInputControlLayout_o *control,
               UnityEngine_Vector2_o screenPosition,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  UnityEngine_RectTransform_o *rect;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o position;
  UI_MobileInputControlLayout_o *pUVar3;
  bool bVar4;
  int32_t iVar5;
  MethodInfo *pMVar6;
  MethodInfo *method_00;
  float fVar7;
  float fVar8;
  UnityEngine_Vector2_Fields local_30;
  UnityEngine_RectTransform_o *local_28;
  UI_MobileInputControlLayout_o *local_20;
  
  if (Il2CppMethodInitialized_07547a25 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_MobileInputControlLayout_RectTransform_TryGetValue
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransformUtility);
    Il2CppMethodInitialized_07547a25 = '\x01';
  }
  local_28 = (UnityEngine_RectTransform_o *)0x0;
  local_30.x = 0.0;
  local_30.y = 0.0;
  if ((__this->fields)._draggingControl != control) {
    return;
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._controlRects;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar4 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (pSVar2,(Il2CppObject *)control,(Il2CppObject **)&local_28,
                       (MethodInfo_4AAF440 *)
                       MethodInfo_System_Collections_Generic_Dictionary_MobileInputControlLayout_RectTransform_TryGetValue
                      );
    if (!bVar4) {
      return;
    }
    rect = (__this->fields)._controlsRoot;
    if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
    }
    pMVar6 = (MethodInfo *)0x0;
    UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
              (rect,screenPosition,(UnityEngine_Camera_o *)0x0,(UnityEngine_Vector2_o *)&local_30,
               (MethodInfo *)0x0);
    if (local_28 != (UnityEngine_RectTransform_o *)0x0) {
      UVar1 = (__this->fields)._controlDragOffset.fields;
      fVar7 = UVar1.x + local_30.x;
      fVar8 = UVar1.y + local_30.y;
      position.fields.y = fVar8;
      position.fields.x = fVar7;
      value.fields.y = fVar8;
      value.fields.x = fVar7;
      UnityEngine_RectTransform__set_anchoredPosition(local_28,value,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_07547a48 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_System_Collections_Generic_Dictionary_MobileInputControlLayout_MobileInputControlLayout_TryGetVa
                  );
        Il2CppMethodInitialized_07547a48 = '\x01';
      }
      local_20 = (UI_MobileInputControlLayout_o *)0x0;
      if (control == (UI_MobileInputControlLayout_o *)0x0) {
        UI_MobileLayoutEditorOverlay__SavePosition
                  (__this,(UI_MobileInputControlLayout_o *)0x0,position,(UI_MobileInputControlLayout_o *)0x0,
                   pMVar6);
        ThrowNullReferenceException();
      }
      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._controlParents;
      if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        pMVar6 = 
        MethodInfo_System_Collections_Generic_Dictionary_MobileInputControlLayout_MobileInputControlLayout_TryGetVa
        ;
        bVar4 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                          (pSVar2,(Il2CppObject *)control,(Il2CppObject **)&local_20,
                           (MethodInfo_4AAF440 *)
                           MethodInfo_System_Collections_Generic_Dictionary_MobileInputControlLayout_MobileInputControlLayout_TryGetVa
                          );
        pUVar3 = local_20;
        if (bVar4) {
          UI_MobileLayoutEditorOverlay__SavePosition(__this,control,position,local_20,pMVar6);
          if (pUVar3 != (UI_MobileInputControlLayout_o *)0x0) {
            return;
          }
        }
        else {
          UI_MobileLayoutEditorOverlay__SavePosition
                    (__this,control,position,(UI_MobileInputControlLayout_o *)0x0,pMVar6);
        }
        iVar5 = UI_MobileInputControlLayout__GetKind(control,(MethodInfo *)0x0);
        if (iVar5 == 2) {
          UI_MobileLayoutEditorOverlay__UpdatePopupChildRects(__this,control,method_00);
          return;
        }
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MobileLayoutEditorOverlay$$EndControlDrag
// il2cpp: void UI_MobileLayoutEditorOverlay__EndControlDrag (UI_MobileLayoutEditorOverlay_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5ca0400

void UI_MobileLayoutEditorOverlay__EndControlDrag
               (UI_MobileLayoutEditorOverlay_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
               MethodInfo *method)

{
  if (eventData == (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((__this->fields)._dragPointerId == (eventData->fields)._pointerId_k__BackingField) {
    (__this->fields)._draggingControl = (UI_MobileInputControlLayout_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._draggingControl);
    return;
  }
  return;
}


// UI.MobileLayoutEditorOverlay$$EndControlDragIfReleased
// il2cpp: void UI_MobileLayoutEditorOverlay__EndControlDragIfReleased (UI_MobileLayoutEditorOverlay_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5ca0440

void UI_MobileLayoutEditorOverlay__EndControlDragIfReleased
               (UI_MobileLayoutEditorOverlay_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
               MethodInfo *method)

{
  if (eventData == (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((((__this->fields)._dragPointerId == (eventData->fields)._pointerId_k__BackingField) &&
      ((eventData->fields)._eligibleForClick_k__BackingField == false)) &&
     ((eventData->fields)._dragging_k__BackingField == false)) {
    (__this->fields)._draggingControl = (UI_MobileInputControlLayout_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._draggingControl);
    return;
  }
  return;
}


// UI.MobileLayoutEditorOverlay$$UpdateControlDrag
// il2cpp: void UI_MobileLayoutEditorOverlay__UpdateControlDrag (UI_MobileLayoutEditorOverlay_o* __this, const MethodInfo* method);
// 0x5c9e6e0

void UI_MobileLayoutEditorOverlay__UpdateControlDrag
               (UI_MobileLayoutEditorOverlay_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  UI_MobileInputControlLayout_o **targetAddress;
  UnityEngine_Vector2_Fields local_10;
  
  local_10.x = 0.0;
  local_10.y = 0.0;
  if ((__this->fields)._draggingControl != (UI_MobileInputControlLayout_o *)0x0) {
    bVar1 = Utility_MobilePlatformUtility__TryGetHeldPointerPosition
                      ((__this->fields)._dragPointerId,(UnityEngine_Vector2_o *)&local_10,(MethodInfo *)0x0);
    if (!bVar1) {
      targetAddress = &(__this->fields)._draggingControl;
      *targetAddress = (UI_MobileInputControlLayout_o *)0x0;
      Il2CppCodeGenWriteBarrier(targetAddress);
      return;
    }
    UI_MobileLayoutEditorOverlay__DragControl
              (__this,(__this->fields)._draggingControl,(UnityEngine_Vector2_o)local_10,method_00);
  }
  return;
}


// UI.MobileLayoutEditorOverlay$$AddControl
// il2cpp: void UI_MobileLayoutEditorOverlay__AddControl (UI_MobileLayoutEditorOverlay_o* __this, const MethodInfo* method);
// 0x5ca0490

void UI_MobileLayoutEditorOverlay__AddControl(UI_MobileLayoutEditorOverlay_o *__this,MethodInfo *method)

{
  UI_MobileInputControlLayout_o *__this_00;
  MethodInfo *in_R8;
  
  if (Il2CppMethodInitialized_07547a26 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputControlLayout);
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"BTN");
    Il2CppMethodInitialized_07547a26 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MobileInputControlLayout);
  UI_MobileInputControlLayout___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 == (UI_MobileInputControlLayout_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this_00->fields).Label = "BTN";
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).Label);
  (__this_00->fields).Actions = "None";
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).Actions);
  (__this_00->fields).X = 0.5;
  (__this_00->fields).Y = 0.5;
  (__this_00->fields).Width = 0.08;
  (__this_00->fields).Height = 0.08;
  UI_MobileLayoutEditorOverlay__ShowEditPopup
            (__this,__this_00,true,(UI_MobileInputControlLayout_o *)0x0,in_R8);
  return;
}


// UI.MobileLayoutEditorOverlay$$EditSelected
// il2cpp: void UI_MobileLayoutEditorOverlay__EditSelected (UI_MobileLayoutEditorOverlay_o* __this, const MethodInfo* method);
// 0x5ca2e90

void UI_MobileLayoutEditorOverlay__EditSelected(UI_MobileLayoutEditorOverlay_o *__this,MethodInfo *method)

{
  UI_MobileInputControlLayout_o *control;
  MethodInfo *in_R8;
  
  control = (__this->fields)._selectedControl;
  if (control == (UI_MobileInputControlLayout_o *)0x0) {
    return;
  }
  UI_MobileLayoutEditorOverlay__ShowEditPopup(__this,control,false,(UI_MobileInputControlLayout_o *)0x0,in_R8)
  ;
  return;
}


// UI.MobileLayoutEditorOverlay$$DeleteSelected
// il2cpp: void UI_MobileLayoutEditorOverlay__DeleteSelected (UI_MobileLayoutEditorOverlay_o* __this, const MethodInfo* method);
// 0x5ca2eb0

void UI_MobileLayoutEditorOverlay__DeleteSelected(UI_MobileLayoutEditorOverlay_o *__this,MethodInfo *method)

{
  UI_MobileInputControlLayout_o **targetAddress;
  UI_MobileInputControlLayout_o *pUVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  UI_MobileInputLayout_o *pUVar3;
  bool bVar4;
  UnityEngine_Object_o *obj;
  MethodInfo *method_00;
  System_Collections_Generic_List_MobileInputControlLayout__o *__this_00;
  UnityEngine_Component_o *local_28;
  Il2CppObject *local_20;
  
  if (Il2CppMethodInitialized_07547a27 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_MobileInputControlLayout_RectTransform_Remove
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_MobileInputControlLayout_RectTransform_TryGetValue
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MobileInputControlLayout_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547a27 = '\x01';
  }
  local_28 = (UnityEngine_Component_o *)0x0;
  pUVar1 = (__this->fields)._selectedControl;
  if (pUVar1 == (UI_MobileInputControlLayout_o *)0x0) {
    return;
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._controlRects;
  if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05ca3041;
  bVar4 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                    (pSVar2,(Il2CppObject *)pUVar1,(Il2CppObject **)&local_28,
                     (MethodInfo_4AAF440 *)
                     MethodInfo_System_Collections_Generic_Dictionary_MobileInputControlLayout_RectTransform_TryGetValue
                    );
  if (bVar4) {
    if (local_28 == (UnityEngine_Component_o *)0x0) goto label_05ca3041;
    obj = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(local_28,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0(obj,(MethodInfo *)0x0);
  }
  targetAddress = &(__this->fields)._selectedControl;
  pUVar1 = *targetAddress;
  if (Il2CppMethodInitialized_07547a48 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_MobileInputControlLayout_MobileInputControlLayout_TryGetVa
              );
    Il2CppMethodInitialized_07547a48 = '\x01';
  }
  local_20 = (Il2CppObject *)0x0;
  if (pUVar1 == (UI_MobileInputControlLayout_o *)0x0) {
label_05ca2fdc:
    pUVar3 = (__this->fields)._layout;
    if ((pUVar3 == (UI_MobileInputLayout_o *)0x0) ||
       (__this_00 = (pUVar3->fields).Controls,
       __this_00 == (System_Collections_Generic_List_MobileInputControlLayout__o *)0x0)) goto label_05ca3041;
  }
  else {
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._controlParents;
    if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05ca3041;
    bVar4 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (pSVar2,(Il2CppObject *)pUVar1,&local_20,
                       (MethodInfo_4AAF440 *)
                       MethodInfo_System_Collections_Generic_Dictionary_MobileInputControlLayout_MobileInputControlLayout_TryGetVa
                      );
    if (((!bVar4) || (local_20 == (Il2CppObject *)0x0)) ||
       (__this_00 = local_20[0xb].monitor,
       __this_00 == (System_Collections_Generic_List_MobileInputControlLayout__o *)0x0)) goto label_05ca2fdc;
  }
  System_Collections_Generic_List_object___Remove
            ((System_Collections_Generic_List_object__o *)__this_00,
             (Il2CppObject *)(__this->fields)._selectedControl,
             (MethodInfo_395ED70 *)MethodInfo_System_Collections_Generic_List_MobileInputControlLayout_Remove)
  ;
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._controlRects;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Remove
              (pSVar2,(Il2CppObject *)(__this->fields)._selectedControl,
               (MethodInfo_4AAED10 *)
               MethodInfo_System_Collections_Generic_Dictionary_MobileInputControlLayout_RectTransform_Remove)
    ;
    (__this->fields)._selectedControl = (UI_MobileInputControlLayout_o *)0x0;
    method_00 = (MethodInfo *)0x0;
    Il2CppCodeGenWriteBarrier(targetAddress);
    UI_MobileLayoutEditorOverlay__RebuildControls(__this,method_00);
    return;
  }
label_05ca3041:
  ThrowNullReferenceException();
}


// UI.MobileLayoutEditorOverlay$$CopySelected
// il2cpp: void UI_MobileLayoutEditorOverlay__CopySelected (UI_MobileLayoutEditorOverlay_o* __this, const MethodInfo* method);
// 0x5ca3050

void UI_MobileLayoutEditorOverlay__CopySelected(UI_MobileLayoutEditorOverlay_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  UI_MobileInputLayout_o *pUVar7;
  UI_MobileInputControlLayout_array *pUVar8;
  MethodInfo *pMVar9;
  bool bVar10;
  UI_MobileInputControlLayout_o *control;
  System_Collections_Generic_List_MobileInputControlLayout__o *pSVar11;
  MethodInfo *method_00;
  UI_MobileInputControlLayout_o *pUVar12;
  void **targetAddress;
  undefined1 auVar13 [16];
  Il2CppObject *pIStack_28;
  
  if (Il2CppMethodInitialized_07547a28 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MobileInputControlLayout_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MobileInputControlLayout_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_MobileInputControlLayout);
    Il2CppMethodInitialized_07547a28 = '\x01';
  }
  pUVar12 = (__this->fields)._selectedControl;
  if (pUVar12 == (UI_MobileInputControlLayout_o *)0x0) {
    return;
  }
  control = UI_MobileInputControlLayout__Clone(pUVar12,(MethodInfo *)0x0);
  pUVar12 = (__this->fields)._selectedControl;
  if (Il2CppMethodInitialized_07547a48 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_MobileInputControlLayout_MobileInputControlLayout_TryGetVa
              );
    Il2CppMethodInitialized_07547a48 = '\x01';
  }
  pIStack_28 = (Il2CppObject *)0x0;
  if (pUVar12 == (UI_MobileInputControlLayout_o *)0x0) {
label_05ca3172:
    if (control == (UI_MobileInputControlLayout_o *)0x0) goto label_05ca3226;
    uVar3 = (control->fields).X;
    uVar5 = (control->fields).Y;
    auVar13._4_4_ = (float)uVar5 + 0.03;
    auVar13._0_4_ = (float)uVar3 + 0.03;
    auVar13._8_8_ = 0;
    auVar13 = minps(_DAT_01005870,auVar13);
    (control->fields).X = (float)(-(uint)(0.0 <= (float)uVar3 + 0.03) & auVar13._0_4_);
    (control->fields).Y = (float)(-(uint)(0.0 <= (float)uVar5 + 0.03) & auVar13._4_4_);
    pUVar7 = (__this->fields)._layout;
    if (pUVar7 == (UI_MobileInputLayout_o *)0x0) goto label_05ca3226;
    pSVar11 = (pUVar7->fields).Controls;
label_05ca31af:
    if (pSVar11 == (System_Collections_Generic_List_MobileInputControlLayout__o *)0x0) goto label_05ca3226;
  }
  else {
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._controlParents;
    if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05ca3226;
    bVar10 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                       (__this_00,(Il2CppObject *)pUVar12,&pIStack_28,
                        (MethodInfo_4AAF440 *)
                        MethodInfo_System_Collections_Generic_Dictionary_MobileInputControlLayout_MobileInputControlLayout_TryGetVa
                       );
    if ((!bVar10) || (pIStack_28 == (Il2CppObject *)0x0)) goto label_05ca3172;
    if (control == (UI_MobileInputControlLayout_o *)0x0) goto label_05ca3226;
    uVar2 = (control->fields).X;
    uVar4 = (control->fields).Y;
    (control->fields).X = (float)uVar2 + 0.03;
    (control->fields).Y = (float)uVar4 + 0.03;
    pSVar11 = pIStack_28[0xb].monitor;
    if (pSVar11 == (System_Collections_Generic_List_MobileInputControlLayout__o *)0x0) {
      targetAddress = &pIStack_28[0xb].monitor;
      pSVar11 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MobileInputControlLayout);
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_List_object__o *)pSVar11,
                 (MethodInfo_395C910 *)
                 MethodInfo_System_Collections_Generic_List_MobileInputControlLayout_ctor);
      *targetAddress = pSVar11;
      Il2CppCodeGenWriteBarrier(targetAddress);
      pSVar11 = *targetAddress;
      goto label_05ca31af;
    }
  }
  pMVar9 = MethodInfo_System_Collections_Generic_List_MobileInputControlLayout_Add;
  piVar1 = &(pSVar11->fields)._version;
  *piVar1 = *piVar1 + 1;
  pUVar8 = (pSVar11->fields)._items;
  if (pUVar8 != (UI_MobileInputControlLayout_array *)0x0) {
    uVar6 = (pSVar11->fields)._size;
    pUVar12 = control;
    if (uVar6 < (uint)pUVar8->max_length) {
      (pSVar11->fields)._size = uVar6 + 1;
      pUVar8->m_Items[(int)uVar6] = control;
      Il2CppCodeGenWriteBarrier(pUVar8->m_Items + (int)uVar6);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar11,(Il2CppObject *)control,
                 (MethodInfo_395D230 *)pMVar9->klass->rgctx_data[0xe].method);
    }
    UI_MobileLayoutEditorOverlay__RebuildControls(__this,(MethodInfo *)pUVar12);
    UI_MobileLayoutEditorOverlay__SelectControl(__this,control,method_00);
    return;
  }
label_05ca3226:
  ThrowNullReferenceException();
}


// UI.MobileLayoutEditorOverlay$$SavePreset
// il2cpp: void UI_MobileLayoutEditorOverlay__SavePreset (UI_MobileLayoutEditorOverlay_o* __this, const MethodInfo* method);
// 0x5ca3230
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ca346c: mov rbp, rbx

void UI_MobileLayoutEditorOverlay__SavePreset(UI_MobileLayoutEditorOverlay_o *__this,MethodInfo *method)

{
  int32_t role;
  UnityEngine_Transform_o *pUVar1;
  UI_MobileInputLayout_o *pUVar2;
  bool bVar3;
  UI_MobileLayoutEditorOverlay___c__DisplayClass52_0_o *__this_00;
  System_String_o *pSVar4;
  UI_MobileLayoutEditorModal_o *__this_01;
  UnityEngine_GameObject_o *pUVar5;
  UI_ElementStyle_o *__this_02;
  Settings_StringSetting_o *pSVar6;
  UI_MobileLayoutEditorOverlay_o *pUVar7;
  MethodInfo *in_RCX;
  UI_MobileLayoutEditorOverlay_o *pUVar8;
  MethodInfo *method_00;
  System_DateTime_o SStack_40;
  UI_ElementStyle_o *pUStack_38;
  
  if (Il2CppMethodInitialized_07547a29 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLayoutManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass52_0_SavePreset_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass52_0_SavePreset_b__1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass52_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"SavePreset");
    il2cpp_codegen_initialize_runtime_metadata(&"MMdd-HHmmss");
    il2cpp_codegen_initialize_runtime_metadata(&"Custom ");
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    il2cpp_codegen_initialize_runtime_metadata(&"Default");
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"PresetName");
    Il2CppMethodInitialized_07547a29 = '\x01';
  }
  SStack_40.fields._dateData = (System_DateTime_Fields)0;
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass52_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 == (UI_MobileLayoutEditorOverlay___c__DisplayClass52_0_o *)0x0) {
label_05ca36e1:
    ThrowNullReferenceException();
  }
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar4 = UI_UIManager__GetLocaleCommon("SavePreset",(MethodInfo *)0x0);
  __this_01 = UI_MobileLayoutEditorOverlay__CreateModal(__this,pSVar4,480.0,230.0,false,in_RCX);
  if (__this_01 == (UI_MobileLayoutEditorModal_o *)0x0) goto label_05ca36e1;
  pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
  (__this_00->fields).panel = pUVar5;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).panel);
  pUVar1 = (__this_01->fields).SinglePanel;
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_02,0x14,150.0,12.0,"DefaultPanel",(MethodInfo *)0x0);
  pUVar2 = (__this->fields)._layout;
  if (pUVar2 == (UI_MobileInputLayout_o *)0x0) goto label_05ca36e1;
  bVar3 = System_String__IsNullOrEmpty((pUVar2->fields).Name,(MethodInfo *)0x0);
  if (!bVar3) {
    pUVar2 = (__this->fields)._layout;
    if (pUVar2 == (UI_MobileInputLayout_o *)0x0) goto label_05ca36e1;
    if (((pUVar2->fields).Builtin == false) &&
       (bVar3 = System_String__op_Equality((pUVar2->fields).Name,"Default",(MethodInfo *)0x0),
       !bVar3)) {
      pUVar2 = (__this->fields)._layout;
      if (pUVar2 == (UI_MobileInputLayout_o *)0x0) goto label_05ca36e1;
      pSVar4 = (pUVar2->fields).Name;
      goto label_05ca34f1;
    }
  }
  role = (__this->fields)._role;
  if ((TypeInfo_System_DateTime->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTime);
  }
  SStack_40 = System_DateTime__get_Now((MethodInfo *)0x0);
  pSVar4 = System_DateTime__ToString_5497760(&SStack_40,"MMdd-HHmmss",(MethodInfo *)0x0);
  pSVar4 = System_String__Concat_52f0320("Custom ",pSVar4,(MethodInfo *)0x0);
  if ((TypeInfo_UI_MobileInputLayoutManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutManager);
  }
  pSVar4 = UI_MobileInputLayoutManager__GetUniqueLayoutName(role,pSVar4,(MethodInfo *)0x0);
label_05ca34f1:
  pUStack_38 = __this_02;
  pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(pSVar6,pSVar4,0x30,(MethodInfo *)0x0);
  (__this_00->fields).name = pSVar6;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).name);
  pSVar4 = "PresetName";
  pSVar6 = (__this_00->fields).name;
  if (Il2CppMethodInitialized_07547a4d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"MobileLayout");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547a4d = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar4 = UI_UIManager__GetLocale
                     ("SettingsPopup","MobileLayout",pSVar4,"",
                      "",(MethodInfo *)0x0);
  method_00 = (MethodInfo *)"";
  UI_ElementFactory__CreateInputSetting
            (pUVar1,pUStack_38,(Settings_BaseSetting_o *)pSVar6,pSVar4,"",260.0,34.0,false,
             (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
             (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar4 = UI_UIManager__GetLocaleCommon("Save",(MethodInfo *)0x0);
  pUVar1 = (__this_01->fields).BottomBar;
  pUVar7 = (UI_MobileLayoutEditorOverlay_o *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
  pUVar8 = pUVar7;
  System_Action___ctor
            ((System_Action_o *)pUVar7,(Il2CppObject *)__this_00,
             (intptr_t)MethodInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass52_0_SavePreset_b__0,
             (MethodInfo *)0x0);
  UI_MobileLayoutEditorOverlay__CreateTextButton
            (pUVar8,pSVar4,pUVar1,(UnityEngine_Vector2_o)0x4228000042f00000,(System_Action_o *)pUVar7,
             method_00);
  pSVar4 = UI_UIManager__GetLocaleCommon("Cancel",(MethodInfo *)0x0);
  pUVar1 = (__this_01->fields).BottomBar;
  pUVar7 = (UI_MobileLayoutEditorOverlay_o *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
  pUVar8 = pUVar7;
  System_Action___ctor
            ((System_Action_o *)pUVar7,(Il2CppObject *)__this_00,
             (intptr_t)MethodInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass52_0_SavePreset_b__1,
             (MethodInfo *)0x0);
  UI_MobileLayoutEditorOverlay__CreateTextButton
            (pUVar8,pSVar4,pUVar1,(UnityEngine_Vector2_o)0x4228000042f00000,(System_Action_o *)pUVar7,
             method_00);
  return;
}


// UI.MobileLayoutEditorOverlay$$ShowSavedPopup
// il2cpp: void UI_MobileLayoutEditorOverlay__ShowSavedPopup (UI_MobileLayoutEditorOverlay_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5ca3b10

void UI_MobileLayoutEditorOverlay__ShowSavedPopup
               (UI_MobileLayoutEditorOverlay_o *__this,System_String_o *name,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UI_MobileLayoutEditorOverlay___c__DisplayClass53_0_o *__this_00;
  System_String_o *pSVar2;
  UI_MobileLayoutEditorModal_o *__this_01;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_RectTransform_o *parent;
  UI_MobileLayoutEditorOverlay_o *pUVar4;
  UI_MobileLayoutEditorOverlay_o *__this_02;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if (Il2CppMethodInitialized_07547a2a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass53_0_ShowSavedPopup_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass53_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Saved");
    il2cpp_codegen_initialize_runtime_metadata(&"Okay");
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    Il2CppMethodInitialized_07547a2a = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass53_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar2 = UI_UIManager__GetLocaleCommon("Save",(MethodInfo *)0x0);
  __this_01 = UI_MobileLayoutEditorOverlay__CreateModal(__this,pSVar2,480.0,190.0,false,in_RCX);
  if (__this_01 != (UI_MobileLayoutEditorModal_o *)0x0) {
    pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
    if (__this_00 != (UI_MobileLayoutEditorOverlay___c__DisplayClass53_0_o *)0x0) {
      (__this_00->fields).panel = pUVar3;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).panel);
      pUVar1 = (__this_01->fields).SinglePanel;
      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
        parent = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)pUVar1,
                            (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform)
        ;
        pSVar2 = "Saved";
        if (Il2CppMethodInitialized_07547a4d == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
          il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup");
          il2cpp_codegen_initialize_runtime_metadata(&"MobileLayout");
          il2cpp_codegen_initialize_runtime_metadata(&"");
          Il2CppMethodInitialized_07547a4d = '\x01';
        }
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        method_00 = (MethodInfo *)"";
        method_01 = (MethodInfo *)"";
        pUVar4 = (UI_MobileLayoutEditorOverlay_o *)
                 UI_UIManager__GetLocale
                           ("SettingsPopup","MobileLayout",pSVar2,"",
                            "",(MethodInfo *)0x0);
        pSVar2 = System_String__Format((System_String_o *)pUVar4,(Il2CppObject *)name,(MethodInfo *)0x0);
        UI_MobileLayoutEditorOverlay__AddModalLabel(pUVar4,parent,pSVar2,method_00);
        pSVar2 = UI_UIManager__GetLocaleCommon("Okay",(MethodInfo *)0x0);
        pUVar1 = (__this_01->fields).BottomBar;
        __this_02 = (UI_MobileLayoutEditorOverlay_o *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
        pUVar4 = __this_02;
        System_Action___ctor
                  ((System_Action_o *)__this_02,(Il2CppObject *)__this_00,
                   (intptr_t)MethodInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass53_0_ShowSavedPopup_b__0,
                   (MethodInfo *)0x0);
        UI_MobileLayoutEditorOverlay__CreateTextButton
                  (pUVar4,pSVar2,pUVar1,(UnityEngine_Vector2_o)0x4228000042f00000,(System_Action_o *)__this_02
                   ,method_01);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MobileLayoutEditorOverlay$$ShowLoadPopup
// il2cpp: void UI_MobileLayoutEditorOverlay__ShowLoadPopup (UI_MobileLayoutEditorOverlay_o* __this, const MethodInfo* method);
// 0x5ca3e60

void UI_MobileLayoutEditorOverlay__ShowLoadPopup(UI_MobileLayoutEditorOverlay_o *__this,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_Fields UVar2;
  UnityEngine_Transform_o *pUVar3;
  Il2CppObject *object;
  UnityEngine_Vector2_o anchorMin;
  UnityEngine_Vector2_o anchorMax;
  Il2CppType *handle;
  UI_MobileLayoutEditorOverlay___c__DisplayClass54_0_Fields *targetAddress;
  UI_MobileLayoutEditorOverlay___c__DisplayClass54_0_o *__this_00;
  System_String_o *pSVar4;
  UI_MobileLayoutEditorModal_o *pUVar5;
  UnityEngine_GameObject_o *pUVar6;
  UI_MobileLayoutEditorOverlay_o *pUVar7;
  System_Type_o *enumType;
  System_Collections_IEnumerable_o *source;
  System_Collections_Generic_IEnumerable_TResult__o *pSVar8;
  System_Int32Enum_array *source_00;
  UI_MobileLayoutEditorOverlay___c_StaticFields *pUVar9;
  System_Func_T__TResult__o *__this_01;
  Settings_StringSetting_o *__this_02;
  MethodInfo *method_00;
  System_Func_string__string__o *__this_03;
  UI_MobileLayoutEditorOverlay_o *__this_04;
  UnityEngine_Vector2_StaticFields *pUVar10;
  UnityEngine_RectTransform_o *pUVar11;
  UnityEngine_UI_VerticalLayoutGroup_o *__this_05;
  UnityEngine_UI_LayoutElement_o *pUVar12;
  UI_MobileLayoutEditorOverlay_o *pUVar13;
  MethodInfo *in_RCX;
  MethodInfo *method_01;
  MethodInfo *method_02;
  UnityEngine_Vector2_c **__this_06;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  MethodInfo *in_stack_ffffffffffffff48;
  System_Nullable_float__Fields SStack_90;
  UnityEngine_Vector2_Fields UStack_88;
  undefined8 uStack_80;
  UnityEngine_Vector2_Fields UStack_78;
  undefined8 uStack_70;
  UI_MobileLayoutEditorModal_o *pUStack_68;
  UnityEngine_GameObject_o **ppUStack_60;
  MethodInfo *pMStack_58;
  UI_MobileLayoutEditorOverlay___c__DisplayClass54_0_Fields *pUStack_50;
  System_Enum_o SStack_48;
  int32_t iStack_38;
  
  if (Il2CppMethodInitialized_07547a2b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Cast_MobileInputLayoutRole);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_Select_MobileInputLayoutRole_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_ToArray_MobileInputLayoutRole);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_MobileInputLayoutRole_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_VerticalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UI_MobileInputLayoutRole);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLayoutRole);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MobileLayoutEditorOverlay_RoleOptionLabel);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MobileLayoutEditorOverlay_c_ShowLoadPopup_b__54_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass54_0_ShowLoadPopup_b__1);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass54_0_ShowLoadPopup_b__2);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass54_0_ShowLoadPopup_b__3);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass54_0_ShowLoadPopup_b__4);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass54_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileLayoutEditorOverlay_c);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"LoadPreset");
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    il2cpp_codegen_initialize_runtime_metadata(&"PresetType");
    il2cpp_codegen_initialize_runtime_metadata(&"Import");
    il2cpp_codegen_initialize_runtime_metadata(&"PresetList");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"Export");
    Il2CppMethodInitialized_07547a2b = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass54_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (UI_MobileLayoutEditorOverlay___c__DisplayClass54_0_o *)0x0) {
    (__this_00->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar4 = UI_UIManager__GetLocaleCommon("LoadPreset",(MethodInfo *)0x0);
    pUVar5 = UI_MobileLayoutEditorOverlay__CreateModal(__this,pSVar4,580.0,640.0,true,in_RCX);
    if (pUVar5 != (UI_MobileLayoutEditorModal_o *)0x0) {
      pUVar6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
      ppUStack_60 = &(__this_00->fields).panel;
      (__this_00->fields).panel = pUVar6;
      Il2CppCodeGenWriteBarrier(ppUStack_60);
      pUVar3 = (pUVar5->fields).SinglePanel;
      if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
        pUVar7 = (UI_MobileLayoutEditorOverlay_o *)
                 UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)pUVar3,
                            (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform)
        ;
        UStack_88 = (UnityEngine_Vector2_Fields)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
        UI_ElementStyle___ctor
                  ((UI_ElementStyle_o *)UStack_88,0x18,200.0,20.0,"DefaultPanel",(MethodInfo *)0x0);
        handle = TypeRef_UI_MobileInputLayoutRole;
        if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(g_data_075567a8);
        }
        pUStack_68 = pUVar5;
        enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
        if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(g_data_07556760);
        }
        source = (System_Collections_IEnumerable_o *)System_Enum__GetValues(enumType,(MethodInfo *)0x0);
        pSVar8 = System_Linq_Enumerable__Cast_Int32Enum_
                           (source,(MethodInfo_34E0850 *)
                                   MethodInfo_System_Linq_Enumerable_Cast_MobileInputLayoutRole);
        source_00 = System_Linq_Enumerable__ToArray_Int32Enum_
                              ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar8,
                               (MethodInfo_34FEA00 *)
                               MethodInfo_System_Linq_Enumerable_ToArray_MobileInputLayoutRole);
        if ((TypeInfo_UI_MobileLayoutEditorOverlay_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileLayoutEditorOverlay_c);
        }
        pUVar9 = TypeInfo_UI_MobileLayoutEditorOverlay_c->static_fields;
        __this_01 = (System_Func_T__TResult__o *)pUVar9->__9__54_0;
        if (__this_01 == (System_Func_T__TResult__o *)0x0) {
          if ((TypeInfo_UI_MobileLayoutEditorOverlay_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileLayoutEditorOverlay_c);
            pUVar9 = TypeInfo_UI_MobileLayoutEditorOverlay_c->static_fields;
          }
          object = (Il2CppObject *)pUVar9->__9;
          __this_01 = (System_Func_T__TResult__o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Func_MobileInputLayoutRole_string);
          System_Func_Int32Enum__object____ctor
                    (__this_01,object,
                     (intptr_t)MethodInfo_UI_MobileLayoutEditorOverlay_c_ShowLoadPopup_b__54_0,
                     (MethodInfo_4F13780 *)0x0);
          pUVar9 = TypeInfo_UI_MobileLayoutEditorOverlay_c->static_fields;
          pUVar9->__9__54_0 = (System_Func_MobileInputLayoutRole__string__o *)__this_01;
          Il2CppCodeGenWriteBarrier(&pUVar9->__9__54_0);
        }
        pSVar8 = System_Linq_Enumerable__Select_Int32Enum__object_
                           ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                            (System_Func_TSource__TResult__o *)__this_01,
                            (MethodInfo_34F4BF0 *)
                            MethodInfo_System_Linq_Enumerable_Select_MobileInputLayoutRole_string);
        UStack_78 = (UnityEngine_Vector2_Fields)
                    System_Linq_Enumerable__ToArray_object_
                              ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar8,
                               (MethodInfo_34FEA80 *)MethodInfo_System_Linq_Enumerable_ToArray_string);
        SStack_48.klass = (System_Enum_c *)TypeInfo_UI_MobileInputLayoutRole;
        SStack_48.monitor = (void *)0xffffffffffffffff;
        iStack_38 = (__this->fields)._role;
        pSVar4 = System_Enum__ToString(&SStack_48,(MethodInfo *)0x0);
        __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
        Settings_StringSetting___ctor_5b7b730(__this_02,pSVar4,0x7fffffff,(MethodInfo *)0x0);
        (__this_00->fields).roleSetting = __this_02;
        Il2CppCodeGenWriteBarrier(&(__this_00->fields).roleSetting);
        pUStack_50 = &__this_00->fields;
        (__this_00->fields).listRoot = (UnityEngine_RectTransform_o *)0x0;
        Il2CppCodeGenWriteBarrier(&pUStack_50->listRoot);
        pSVar4 = "PresetType";
        pMStack_58 = (MethodInfo *)(__this_00->fields).roleSetting;
        if (Il2CppMethodInitialized_07547a4d == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
          il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup");
          il2cpp_codegen_initialize_runtime_metadata(&"MobileLayout");
          il2cpp_codegen_initialize_runtime_metadata(&"");
          Il2CppMethodInitialized_07547a4d = '\x01';
        }
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        method_00 = (MethodInfo *)
                    UI_UIManager__GetLocale
                              ("SettingsPopup","MobileLayout",pSVar4,"",
                               "",(MethodInfo *)0x0);
        __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_string);
        System_Func_object__object____ctor
                  ((System_Func_object__object__o *)__this_03,(Il2CppObject *)__this,
                   (intptr_t)MethodInfo_UI_MobileLayoutEditorOverlay_RoleOptionLabel,(MethodInfo_4F19B50 *)0x0
                  );
        SStack_90.hasValue = false;
        SStack_90._1_3_ = 0;
        SStack_90.value = 0.0;
        System_Nullable_float____ctor
                  ((System_Nullable_float__o *)&SStack_90,260.0,
                   (MethodInfo_3CDA2B0 *)MethodInfo_System_Nullable_float_ctor);
        __this_04 = (UI_MobileLayoutEditorOverlay_o *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        pUVar13 = __this_04;
        UnityEngine_Events_UnityAction___ctor
                  ((UnityEngine_Events_UnityAction_o *)__this_04,(Il2CppObject *)__this_00,
                   (intptr_t)MethodInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass54_0_ShowLoadPopup_b__1,
                   (MethodInfo *)0x0);
        UVar1 = UStack_88;
        method_01 = pMStack_58;
        pUVar6 = UI_MobileLayoutEditorOverlay__CreateLocalizedDropdownSetting
                           (pUVar13,(UnityEngine_Transform_o *)pUVar7,(UI_ElementStyle_o *)UStack_88,
                            (Settings_BaseSetting_o *)pMStack_58,(System_String_o *)method_00,
                            (System_String_array *)UStack_78,__this_03,"",260.0,36.0,300.0,
                            (System_Nullable_float__o)SStack_90,(UnityEngine_Events_UnityAction_o *)__this_04,
                            in_stack_ffffffffffffff48);
        UI_MobileLayoutEditorOverlay__RegisterDropdown(__this,pUVar6,method_02);
        __this_06 = (UnityEngine_Vector2_c **)pUVar7;
        UI_ElementFactory__CreateHorizontalLine
                  ((UnityEngine_Transform_o *)pUVar7,(UI_ElementStyle_o *)UVar1,520.0,1.0,(MethodInfo *)0x0);
        if (Il2CppMethodInitialized_0753ecc8 == '\0') {
          __this_06 = &TypeInfo_UnityEngine_Vector2;
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
          Il2CppMethodInitialized_0753ecc8 = '\x01';
        }
        targetAddress = pUStack_50;
        pUVar10 = TypeInfo_UnityEngine_Vector2->static_fields;
        UVar1 = (pUVar10->zeroVector).fields;
        if (Il2CppMethodInitialized_07542885 == '\0') {
          uStack_80 = 0;
          __this_06 = &TypeInfo_UnityEngine_Vector2;
          UStack_88 = UVar1;
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
          Il2CppMethodInitialized_07542885 = '\x01';
          pUVar10 = TypeInfo_UnityEngine_Vector2->static_fields;
          UVar1 = (pUVar10->oneVector).fields;
          fVar16 = UVar1.x;
          fVar17 = UVar1.y;
          if (Il2CppMethodInitialized_0753ecc8 == '\0') {
            __this_06 = &TypeInfo_UnityEngine_Vector2;
            uStack_70 = 0;
            UStack_78 = UVar1;
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
            Il2CppMethodInitialized_0753ecc8 = '\x01';
            pUVar10 = TypeInfo_UnityEngine_Vector2->static_fields;
            fVar16 = UStack_78.x;
            fVar17 = UStack_78.y;
          }
          fVar14 = UStack_88.x;
          fVar15 = UStack_88.y;
        }
        else {
          UVar2 = (pUVar10->oneVector).fields;
          fVar16 = UVar2.x;
          fVar17 = UVar2.y;
          fVar14 = UVar1.x;
          fVar15 = UVar1.y;
        }
        UVar1 = (pUVar10->zeroVector).fields;
        anchorMin.fields.y = fVar15;
        anchorMin.fields.x = fVar14;
        anchorMax.fields.y = fVar17;
        anchorMax.fields.x = fVar16;
        pUVar6 = UI_MobileLayoutEditorOverlay__CreateRect
                           ((UI_MobileLayoutEditorOverlay_o *)__this_06,"PresetList",
                            (UnityEngine_RectTransform_o *)pUVar7,anchorMin,anchorMax,
                            (UnityEngine_Vector2_o)UVar1,(UnityEngine_Vector2_o)UVar1,method_01);
        if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
          pUVar11 = UnityEngine_GameObject__GetComponent_object_
                              (pUVar6,(MethodInfo_353B730 *)
                                      MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
          targetAddress->listRoot = pUVar11;
          Il2CppCodeGenWriteBarrier(&targetAddress->listRoot);
          __this_05 = UnityEngine_GameObject__AddComponent_object_
                                (pUVar6,(MethodInfo_353B6A0 *)
                                        MethodInfo_UnityEngine_GameObject_AddComponent_VerticalLayoutGroup);
          if (__this_05 != (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) {
            UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                      ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_05,8.0,(MethodInfo *)0x0);
            UnityEngine_UI_LayoutGroup__set_childAlignment
                      ((UnityEngine_UI_LayoutGroup_o *)__this_05,1,(MethodInfo *)0x0);
            UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlWidth
                      ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_05,true,(MethodInfo *)0x0);
            UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth
                      ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_05,true,(MethodInfo *)0x0);
            UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
                      ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_05,false,(MethodInfo *)0x0);
            pUVar12 = UnityEngine_GameObject__AddComponent_object_
                                (pUVar6,(MethodInfo_353B6A0 *)
                                        MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
            if (pUVar12 != (UnityEngine_UI_LayoutElement_o *)0x0) {
              (*(pUVar12->klass->vtable)._42_set_flexibleHeight.methodPtr)
                        (pUVar12,1.0,(pUVar12->klass->vtable)._42_set_flexibleHeight.method);
              UI_MobileLayoutEditorOverlay__PopulatePresetList
                        (__this,targetAddress->listRoot,*ppUStack_60,(__this->fields)._role,method_00);
              if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
              }
              pSVar4 = UI_UIManager__GetLocaleCommon("Import",(MethodInfo *)0x0);
              pUVar5 = pUStack_68;
              pUVar3 = (pUStack_68->fields).BottomBar;
              pUVar13 = (UI_MobileLayoutEditorOverlay_o *)
                        il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
              pUVar7 = pUVar13;
              System_Action___ctor
                        ((System_Action_o *)pUVar13,(Il2CppObject *)__this_00,
                         (intptr_t)
                         MethodInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass54_0_ShowLoadPopup_b__2,
                         (MethodInfo *)0x0);
              UI_MobileLayoutEditorOverlay__CreateTextButton
                        (pUVar7,pSVar4,pUVar3,(UnityEngine_Vector2_o)0x4228000042f00000,
                         (System_Action_o *)pUVar13,method_00);
              pSVar4 = UI_UIManager__GetLocaleCommon("Export",(MethodInfo *)0x0);
              pUVar3 = (pUVar5->fields).BottomBar;
              pUVar13 = (UI_MobileLayoutEditorOverlay_o *)
                        il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
              pUVar7 = pUVar13;
              System_Action___ctor
                        ((System_Action_o *)pUVar13,(Il2CppObject *)__this_00,
                         (intptr_t)
                         MethodInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass54_0_ShowLoadPopup_b__3,
                         (MethodInfo *)0x0);
              UI_MobileLayoutEditorOverlay__CreateTextButton
                        (pUVar7,pSVar4,pUVar3,(UnityEngine_Vector2_o)0x4228000042f00000,
                         (System_Action_o *)pUVar13,method_00);
              pSVar4 = UI_UIManager__GetLocaleCommon("Cancel",(MethodInfo *)0x0);
              pUVar3 = (pUVar5->fields).BottomBar;
              pUVar13 = (UI_MobileLayoutEditorOverlay_o *)
                        il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
              pUVar7 = pUVar13;
              System_Action___ctor
                        ((System_Action_o *)pUVar13,(Il2CppObject *)__this_00,
                         (intptr_t)
                         MethodInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass54_0_ShowLoadPopup_b__4,
                         (MethodInfo *)0x0);
              UI_MobileLayoutEditorOverlay__CreateTextButton
                        (pUVar7,pSVar4,pUVar3,(UnityEngine_Vector2_o)0x4228000042f00000,
                         (System_Action_o *)pUVar13,method_00);
              return;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MobileLayoutEditorOverlay$$ShowMenuPopupAboveEditor
// il2cpp: void UI_MobileLayoutEditorOverlay__ShowMenuPopupAboveEditor (UI_MobileLayoutEditorOverlay_o* __this, UI_BasePopup_o* popup, const MethodInfo* method);
// 0x5ca5590

void UI_MobileLayoutEditorOverlay__ShowMenuPopupAboveEditor
               (UI_MobileLayoutEditorOverlay_o *__this,UI_BasePopup_o *popup,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_RectTransform_o *pUVar2;
  
  if (Il2CppMethodInitialized_07547a2c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547a2c = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)popup,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    pUVar2 = (__this->fields)._root;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      if (popup != (UI_BasePopup_o *)0x0) {
        pUVar2 = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)popup,
                            (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform)
        ;
        if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
          UnityEngine_Transform__SetParent_692d510
                    ((UnityEngine_Transform_o *)pUVar2,(UnityEngine_Transform_o *)(__this->fields)._root,false
                     ,(MethodInfo *)0x0);
          UnityEngine_RectTransform__set_anchorMin
                    (pUVar2,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
          UnityEngine_RectTransform__set_anchorMax
                    (pUVar2,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
          if (Il2CppMethodInitialized_0753ecc8 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
            Il2CppMethodInitialized_0753ecc8 = '\x01';
          }
          UnityEngine_RectTransform__set_anchoredPosition
                    (pUVar2,(UnityEngine_Vector2_o)
                            (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,(MethodInfo *)0x0
                    );
          UnityEngine_Transform__SetAsLastSibling((UnityEngine_Transform_o *)pUVar2,(MethodInfo *)0x0);
          return;
        }
      }
      ThrowNullReferenceException();
    }
  }
  return;
}


// UI.MobileLayoutEditorOverlay$$ImportLayoutFromPopup
// il2cpp: void UI_MobileLayoutEditorOverlay__ImportLayoutFromPopup (UI_MobileLayoutEditorOverlay_o* __this, UnityEngine_GameObject_o* loadPanel, const MethodInfo* method);
// 0x5ca56d0
// eh: try 0x5ca574b..0x5ca5822 -> pad 0x5ca5826 (+5 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x5ca5843..0x5ca5a56 -> pad 0x5ca5a56 (+1 call sites) cleanup
// eh: try 0x5ca5a59..0x5ca5a5e -> pad 0x5ca5a66 catch (...) [compiler noexcept guard]
// asm: 147 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ca5822: jmp 0x5ca582c
// asm:   0x5ca5824: jmp 0x5ca582c
// asm:   0x5ca5826: jmp 0x5ca582c
// asm:   0x5ca5828: jmp 0x5ca582c
// asm:   0x5ca582a: jmp 0x5ca582c
// asm:   0x5ca582c: mov rbx, rax
// asm:   0x5ca582f: cmp edx, 1
// asm:   0x5ca5832: jne 0x5ca5a5e
// asm:   0x5ca5838: mov rdi, rbx
// asm:   0x5ca583b: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5ca5840: mov rbx, rax
// asm:   0x5ca5843: lea rdi, [rip + 0x15d2876]  ; TypeInfo_System_Exception
// asm:   0x5ca584a: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5ca584f: mov rcx, qword ptr [rbx]
// asm:   0x5ca5852: mov rsi, qword ptr [rcx]
// asm:   0x5ca5855: mov rdi, rax
// asm:   0x5ca5858: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5ca585d: test al, al
// asm:   0x5ca585f: je 0x5ca5a35
// asm:   0x5ca5865: mov r12, qword ptr [rbx]
// asm:   0x5ca5868: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5ca586d: lea rdi, [rip + 0x15cee34]  ; TypeInfo_object_array
// asm:   0x5ca5874: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5ca5879: mov rdi, rax
// asm:   0x5ca587c: mov esi, 4
// asm:   0x5ca5881: call 0x30d6180  ; SZArrayNew()
// asm:   0x5ca5886: mov rbx, rax
// asm:   0x5ca5889: lea rdi, [rip + 0x163d040]  ; "Mobile layout import failed. Length: {0}, StartsWith: {1}, EndsWith: {2}, Error: {3}"
// asm:   0x5ca5890: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5ca5895: mov r13, rax
// asm:   0x5ca5898: test r14, r14
// asm:   0x5ca589b: je 0x5ca58a3
// asm:   0x5ca589d: mov eax, dword ptr [r14 + 0x10]
// asm:   0x5ca58a1: jmp 0x5ca58a5
// asm:   0x5ca58a3: xor eax, eax
// asm:   0x5ca58a5: mov dword ptr [rsp + 4], eax
// asm:   0x5ca58a9: lea rax, [rip + 0x18b0e18]
// asm:   0x5ca58b0: mov rdi, qword ptr [rax + 0x48]
// asm:   0x5ca58b4: lea rsi, [rsp + 4]
// asm:   0x5ca58b9: call 0x30d6260  ; il2cpp_runtime_helper_030d6260()
// asm:   0x5ca58be: test rbx, rbx
// asm:   0x5ca58c1: je 0x5ca5a30
// asm:   0x5ca58c7: mov rbp, rax
// asm:   0x5ca58ca: mov rdi, rbx
// asm:   0x5ca58cd: mov rsi, rax
// asm:   0x5ca58d0: call 0x2ac8d60  ; il2cpp_codegen_array_element_type_check()
// asm:   0x5ca58d5: mov rdi, rbx
// asm:   0x5ca58d8: xor esi, esi
// asm:   0x5ca58da: mov rdx, rbp
// asm:   0x5ca58dd: call 0x2ac8d90  ; il2cpp_runtime_helper_02ac8d90()
// asm:   0x5ca58e2: mov rsi, r14
// asm:   0x5ca58e5: mov edx, 1
// asm:   0x5ca58ea: call 0x5ca5bf0  ; UI_MobileLayoutEditorOverlay__GetPreview()
// asm:   0x5ca58ef: mov rbp, rax
// asm:   0x5ca58f2: mov rdi, rbx
// asm:   0x5ca58f5: mov rsi, rax
// asm:   0x5ca58f8: call 0x2ac8d60  ; il2cpp_codegen_array_element_type_check()
// asm:   0x5ca58fd: mov esi, 1
// asm:   0x5ca5902: mov rdi, rbx
// asm:   0x5ca5905: mov rdx, rbp
// asm:   0x5ca5908: call 0x2ac8d90  ; il2cpp_runtime_helper_02ac8d90()
// asm:   0x5ca590d: mov rsi, r14
// asm:   0x5ca5910: xor edx, edx
// asm:   0x5ca5912: call 0x5ca5bf0  ; UI_MobileLayoutEditorOverlay__GetPreview()
// asm:   0x5ca5917: mov rbp, rax
// asm:   0x5ca591a: mov rdi, rbx
// asm:   0x5ca591d: mov rsi, rax
// asm:   0x5ca5920: call 0x2ac8d60  ; il2cpp_codegen_array_element_type_check()
// asm:   0x5ca5925: mov esi, 2
// asm:   0x5ca592a: mov rdi, rbx
// asm:   0x5ca592d: mov rdx, rbp
// asm:   0x5ca5930: call 0x2ac8d90  ; il2cpp_runtime_helper_02ac8d90()
// asm:   0x5ca5935: test r12, r12
// asm:   0x5ca5938: je 0x5ca5a30
// asm:   0x5ca593e: mov rax, qword ptr [r12]
// asm:   0x5ca5942: mov rsi, qword ptr [rax + 0x190]
// asm:   0x5ca5949: mov rdi, r12
// asm:   0x5ca594c: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x5ca5952: mov rbp, rax
// asm:   0x5ca5955: mov rdi, rbx
// asm:   0x5ca5958: mov rsi, rax
// asm:   0x5ca595b: call 0x2ac8d60  ; il2cpp_codegen_array_element_type_check()
// asm:   0x5ca5960: mov esi, 3
// asm:   0x5ca5965: mov rdi, rbx
// asm:   0x5ca5968: mov rdx, rbp
// asm:   0x5ca596b: call 0x2ac8d90  ; il2cpp_runtime_helper_02ac8d90()
// asm:   0x5ca5970: mov rdi, r13
// asm:   0x5ca5973: mov rsi, rbx
// asm:   0x5ca5976: xor edx, edx
// asm:   0x5ca5978: call 0x5402cf0  ; System_String__Format()
// asm:   0x5ca597d: mov rbx, rax
// asm:   0x5ca5980: lea rdi, [rip + 0x15d1cc1]  ; TypeInfo_UnityEngine_Debug
// asm:   0x5ca5987: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5ca598c: cmp dword ptr [rax + 0xe4], 0
// asm:   0x5ca5993: jne 0x5ca599d
// asm:   0x5ca5995: mov rdi, rax
// asm:   0x5ca5998: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x5ca599d: mov rdi, rbx
// asm:   0x5ca59a0: xor esi, esi
// asm:   0x5ca59a2: call 0x69c5270  ; UnityEngine_Debug__LogWarning()
// asm:   0x5ca59a7: lea rdi, [rip + 0x15d85ba]  ; TypeInfo_UI_UIManager
// asm:   0x5ca59ae: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5ca59b3: cmp dword ptr [rax + 0xe4], 0
// asm:   0x5ca59ba: jne 0x5ca59c4
// asm:   0x5ca59bc: mov rdi, rax
// asm:   0x5ca59bf: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x5ca59c4: lea rdi, [rip + 0x1632325]  ; "Common"
// asm:   0x5ca59cb: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5ca59d0: mov r14, rax
// asm:   0x5ca59d3: lea rdi, [rip + 0x163a26e]  ; "InvalidPreset"
// asm:   0x5ca59da: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5ca59df: mov r12, rax
// asm:   0x5ca59e2: lea rbx, [rip + 0x162803f]  ; ""
// asm:   0x5ca59e9: mov rdi, rbx
// asm:   0x5ca59ec: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5ca59f1: mov r13, rax
// asm:   0x5ca59f4: mov rdi, rbx
// asm:   0x5ca59f7: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5ca59fc: mov rbp, rax
// asm:   0x5ca59ff: mov rdi, rbx
// asm:   0x5ca5a02: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5ca5a07: mov rdi, r14
// asm:   0x5ca5a0a: mov rsi, r12
// asm:   0x5ca5a0d: mov rdx, r13
// asm:   0x5ca5a10: mov rcx, rbp
// asm:   0x5ca5a13: mov r8, rax
// asm:   0x5ca5a16: xor r9d, r9d
// asm:   0x5ca5a19: call 0x5d94190  ; UI_UIManager__GetLocale()
// asm:   0x5ca5a1e: mov rdi, r15
// asm:   0x5ca5a21: mov rsi, rax
// asm:   0x5ca5a24: xor edx, edx
// asm:   0x5ca5a26: call 0x5cc0bb0  ; UI_ImportPopup__ShowError()
// asm:   0x5ca5a2b: jmp 0x5ca57db
// asm:   0x5ca5a35: mov edi, 8
// asm:   0x5ca5a3a: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5ca5a3f: mov rcx, qword ptr [rbx]
// asm:   0x5ca5a42: mov qword ptr [rax], rcx
// asm:   0x5ca5a45: lea rsi, [rip + 0x1187ab4]
// asm:   0x5ca5a4c: mov rdi, rax
// asm:   0x5ca5a4f: xor edx, edx
// asm:   0x5ca5a51: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5ca5a56: mov rbx, rax
// asm:   0x5ca5a59: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5ca5a5e: mov rdi, rbx
// asm:   0x5ca5a61: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5ca5a66: mov rdi, rax
// asm:   0x5ca5a69: call 0x2ab61e0  ; __clang_call_terminate()

void UI_MobileLayoutEditorOverlay__ImportLayoutFromPopup
               (UI_MobileLayoutEditorOverlay_o *__this,UnityEngine_GameObject_o *loadPanel,MethodInfo *method)

{
  UI_ImportPopup_o *pUVar1;
  Settings_StringSetting_o *pSVar2;
  int32_t iVar3;
  System_String_o *json;
  UI_MobileInputLayout_o *__this_00;
  MethodInfo *pMVar4;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  MethodInfo *extraout_RDX;
  MethodInfo **__this_02;
  
  __this_02 = (MethodInfo **)__this;
  if (Il2CppMethodInitialized_07547a2d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_JsonUtility_FromJson_MobileInputLayout)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    __this_02 = &MethodInfo_Settings_TypedSetting_string_get_Value;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_07547a2d = '\x01';
    method = extraout_RDX;
  }
  pUVar1 = (__this->fields)._importPopup;
  if ((pUVar1 == (UI_ImportPopup_o *)0x0) ||
     (pSVar2 = (pUVar1->fields).ImportSetting, pSVar2 == (Settings_StringSetting_o *)0x0)) {
    ThrowNullReferenceException();
  }
  json = UI_MobileLayoutEditorOverlay__NormalizeImportedLayoutJson
                   ((UI_MobileLayoutEditorOverlay_o *)__this_02,(pSVar2->fields)._value,method);
  __this_00 = UnityEngine_JsonUtility__FromJson_object_
                        (json,(MethodInfo_356DE00 *)
                              MethodInfo_UnityEngine_JsonUtility_FromJson_MobileInputLayout);
  if ((__this_00 == (UI_MobileInputLayout_o *)0x0) ||
     ((__this_00->fields).Controls == (System_Collections_Generic_List_MobileInputControlLayout__o *)0x0)) {
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
    System_Exception___ctor(__this_01,(MethodInfo *)0x0);
    pMVar4 = il2cpp_codegen_get_runtime_metadata
                       (&MethodInfo_UI_MobileLayoutEditorOverlay_ImportLayoutFromPopup);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,pMVar4);
  }
  iVar3 = UI_MobileInputLayout__GetRole(__this_00,(MethodInfo *)0x0);
  (__this->fields)._role = iVar3;
  pMVar4 = (MethodInfo *)UI_MobileInputLayout__Clone(__this_00,(System_String_o *)0x0,false,(MethodInfo *)0x0)
  ;
  (__this->fields)._layout = (UI_MobileInputLayout_o *)pMVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._layout);
  UI_MobileLayoutEditorOverlay__RebuildControls(__this,pMVar4);
  UI_MobileLayoutEditorOverlay__RefreshRestorePanel(__this,pMVar4);
  (*(pUVar1->klass->vtable)._22_Hide.methodPtr)(pUVar1,(pUVar1->klass->vtable)._22_Hide.method);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  UnityEngine_Object__Destroy_69214e0((UnityEngine_Object_o *)loadPanel,(MethodInfo *)0x0);
  return;
}


// UI.MobileLayoutEditorOverlay$$NormalizeImportedLayoutJson
// il2cpp: System_String_o* UI_MobileLayoutEditorOverlay__NormalizeImportedLayoutJson (UI_MobileLayoutEditorOverlay_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5ca5a70

System_String_o *
UI_MobileLayoutEditorOverlay__NormalizeImportedLayoutJson
          (UI_MobileLayoutEditorOverlay_o *__this,System_String_o *value,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  int32_t iVar3;
  System_String_o *pSVar4;
  
  if (Il2CppMethodInitialized_07547a2e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"```");
    Il2CppMethodInitialized_07547a2e = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (bVar1) {
    return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  if (value != (System_String_o *)0x0) {
    pSVar4 = System_String__Trim(value,(MethodInfo *)0x0);
    if (pSVar4 != (System_String_o *)0x0) {
      pSVar4 = System_String__Trim_5306ec0(pSVar4,0xfeff,(MethodInfo *)0x0);
      if (pSVar4 != (System_String_o *)0x0) {
        bVar1 = System_String__StartsWith(pSVar4,"```",(MethodInfo *)0x0);
        if (bVar1) {
          iVar2 = System_String__IndexOf(pSVar4,10,(MethodInfo *)0x0);
          if (-1 < iVar2) {
            pSVar4 = System_String__Substring(pSVar4,iVar2 + 1,(MethodInfo *)0x0);
            if (pSVar4 == (System_String_o *)0x0) goto label_05ca5be2;
          }
          pSVar4 = System_String__Trim(pSVar4,(MethodInfo *)0x0);
          if (pSVar4 == (System_String_o *)0x0) goto label_05ca5be2;
          bVar1 = System_String__EndsWith(pSVar4,"```",(MethodInfo *)0x0);
          if (bVar1) {
            pSVar4 = System_String__Substring_53042f0
                               (pSVar4,0,(pSVar4->fields)._stringLength + -3,(MethodInfo *)0x0);
            if (pSVar4 == (System_String_o *)0x0) goto label_05ca5be2;
          }
        }
        iVar2 = System_String__IndexOf(pSVar4,0x7b,(MethodInfo *)0x0);
        iVar3 = System_String__LastIndexOf(pSVar4,0x7d,(MethodInfo *)0x0);
        if ((-1 < iVar2) && (iVar3 - iVar2 != 0 && iVar2 <= iVar3)) {
          pSVar4 = System_String__Substring_53042f0(pSVar4,iVar2,(iVar3 - iVar2) + 1,(MethodInfo *)0x0);
          if (pSVar4 == (System_String_o *)0x0) goto label_05ca5be2;
        }
        pSVar4 = System_String__Trim(pSVar4,(MethodInfo *)0x0);
        if (pSVar4 != (System_String_o *)0x0) {
          pSVar4 = System_String__Trim_5306ec0(pSVar4,0xfeff,(MethodInfo *)0x0);
          return pSVar4;
        }
      }
    }
  }
label_05ca5be2:
  ThrowNullReferenceException();
}


// UI.MobileLayoutEditorOverlay$$GetPreview
// il2cpp: System_String_o* UI_MobileLayoutEditorOverlay__GetPreview (UI_MobileLayoutEditorOverlay_o* __this, System_String_o* value, bool start, const MethodInfo* method);
// 0x5ca5bf0

System_String_o *
UI_MobileLayoutEditorOverlay__GetPreview
          (UI_MobileLayoutEditorOverlay_o *__this,System_String_o *value,bool start,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  System_String_o *pSVar3;
  int length;
  int32_t startIndex;
  
  if (Il2CppMethodInitialized_07547a2f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"\n");
    il2cpp_codegen_initialize_runtime_metadata(&"\\n");
    il2cpp_codegen_initialize_runtime_metadata(&"\\r");
    il2cpp_codegen_initialize_runtime_metadata(&"\r");
    Il2CppMethodInitialized_07547a2f = '\x01';
  }
  bVar2 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (bVar2) {
    return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  if (value != (System_String_o *)0x0) {
    iVar1 = (value->fields)._stringLength;
    length = 0x20;
    if (iVar1 < 0x20) {
      length = iVar1;
    }
    startIndex = iVar1 - length;
    if (start) {
      startIndex = 0;
    }
    pSVar3 = System_String__Substring_53042f0(value,startIndex,length,(MethodInfo *)0x0);
    if (pSVar3 != (System_String_o *)0x0) {
      pSVar3 = System_String__Replace_5304550
                         (pSVar3,"\r","\\r",(MethodInfo *)0x0);
      if (pSVar3 != (System_String_o *)0x0) {
        pSVar3 = System_String__Replace_5304550
                           (pSVar3,"\n","\\n",(MethodInfo *)0x0);
        return pSVar3;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MobileLayoutEditorOverlay$$PopulatePresetList
// il2cpp: void UI_MobileLayoutEditorOverlay__PopulatePresetList (UI_MobileLayoutEditorOverlay_o* __this, UnityEngine_RectTransform_o* listRoot, UnityEngine_GameObject_o* panel, int32_t role, const MethodInfo* method);
// 0x5ca49b0
// eh: try 0x5ca4bf0..0x5ca4d57 -> pad 0x5ca54f1 (+3 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5ca4e6a..0x5ca53d1 -> pad 0x5ca54d9 (+33 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5ca53f9..0x5ca5410 -> pad 0x5ca54f3 (+3 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5ca5410..0x5ca5456 -> pad 0x5ca54d1 (+13 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5ca5510..0x5ca5515 -> pad 0x5ca551a cleanup
// eh: try 0x5ca551d..0x5ca5527 -> pad 0x5ca5580 catch (...) [compiler noexcept guard]
// eh: try 0x5ca5541..0x5ca5546 -> pad 0x5ca556b cleanup
// eh: try 0x5ca556e..0x5ca5578 -> pad 0x5ca5580 catch (...) [compiler noexcept guard]
// asm: 91 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ca4e5c: nop dword ptr [rax]
// asm:   0x5ca545b: mov rdi, r14
// asm:   0x5ca545e: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5ca5463: jmp 0x5ca5529
// asm:   0x5ca5468: jmp 0x5ca5529
// asm:   0x5ca546d: jmp 0x5ca5529
// asm:   0x5ca5472: jmp 0x5ca5529
// asm:   0x5ca5477: jmp 0x5ca5529
// asm:   0x5ca547c: jmp 0x5ca5529
// asm:   0x5ca5481: jmp 0x5ca5529
// asm:   0x5ca5486: jmp 0x5ca5529
// asm:   0x5ca548b: jmp 0x5ca5529
// asm:   0x5ca5490: jmp 0x5ca5529
// asm:   0x5ca5495: jmp 0x5ca5529
// asm:   0x5ca549a: jmp 0x5ca5529
// asm:   0x5ca549f: jmp 0x5ca5529
// asm:   0x5ca54a4: jmp 0x5ca5529
// asm:   0x5ca54a9: jmp 0x5ca5529
// asm:   0x5ca54ab: jmp 0x5ca5529
// asm:   0x5ca54ad: jmp 0x5ca5529
// asm:   0x5ca54af: jmp 0x5ca5529
// asm:   0x5ca54b1: jmp 0x5ca5529
// asm:   0x5ca54b3: jmp 0x5ca5529
// asm:   0x5ca54b5: jmp 0x5ca5529
// asm:   0x5ca54b7: jmp 0x5ca5529
// asm:   0x5ca54b9: jmp 0x5ca5529
// asm:   0x5ca54bb: jmp 0x5ca5529
// asm:   0x5ca54bd: jmp 0x5ca5529
// asm:   0x5ca54bf: jmp 0x5ca5529
// asm:   0x5ca54c1: jmp 0x5ca5529
// asm:   0x5ca54c3: jmp 0x5ca5529
// asm:   0x5ca54c5: jmp 0x5ca5529
// asm:   0x5ca54c7: jmp 0x5ca5529
// asm:   0x5ca54c9: jmp 0x5ca5529
// asm:   0x5ca54cb: jmp 0x5ca5529
// asm:   0x5ca54cd: jmp 0x5ca5529
// asm:   0x5ca54cf: jmp 0x5ca5529
// asm:   0x5ca54d1: jmp 0x5ca5529
// asm:   0x5ca54d3: jmp 0x5ca5529
// asm:   0x5ca54d5: jmp 0x5ca5529
// asm:   0x5ca54d7: jmp 0x5ca54f3
// asm:   0x5ca54d9: jmp 0x5ca5529
// asm:   0x5ca54db: jmp 0x5ca54f3
// asm:   0x5ca54dd: jmp 0x5ca54f3
// asm:   0x5ca54df: jmp 0x5ca54f3
// asm:   0x5ca54e1: jmp 0x5ca5529
// asm:   0x5ca54e3: jmp 0x5ca5529
// asm:   0x5ca54e5: jmp 0x5ca5529
// asm:   0x5ca54e7: jmp 0x5ca5529
// asm:   0x5ca54e9: jmp 0x5ca5529
// asm:   0x5ca54eb: jmp 0x5ca5529
// asm:   0x5ca54ed: jmp 0x5ca5529
// asm:   0x5ca54ef: jmp 0x5ca5529
// asm:   0x5ca54f1: jmp 0x5ca54f3
// asm:   0x5ca54f3: mov rbp, rax
// asm:   0x5ca54f6: mov r12, qword ptr [rsp + 8]
// asm:   0x5ca54fb: cmp edx, 1
// asm:   0x5ca54fe: jne 0x5ca551d
// asm:   0x5ca5500: mov rdi, rbp
// asm:   0x5ca5503: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5ca5508: mov r14, qword ptr [rax]
// asm:   0x5ca550b: mov qword ptr [rsp + 0x18], r14
// asm:   0x5ca5510: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5ca5515: jmp 0x5ca4d61
// asm:   0x5ca551a: mov rbp, rax
// asm:   0x5ca551d: lea rdi, [rsp + 0x18]
// asm:   0x5ca5522: call 0x2fdae60  ; il2cpp_runtime_helper_02fdae60()
// asm:   0x5ca5527: jmp 0x5ca5578
// asm:   0x5ca5529: mov rbp, rax
// asm:   0x5ca552c: cmp edx, 1
// asm:   0x5ca552f: jne 0x5ca556e
// asm:   0x5ca5531: mov rdi, rbp
// asm:   0x5ca5534: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5ca5539: mov rbx, qword ptr [rax]
// asm:   0x5ca553c: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5ca5541: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5ca5546: lea rax, [rip + 0x15e906b]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MobileInputLayout_Dispose
// asm:   0x5ca554d: mov rsi, qword ptr [rax]
// asm:   0x5ca5550: lea rdi, [rsp + 0x30]
// asm:   0x5ca5555: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5ca555a: test rbx, rbx
// asm:   0x5ca555d: je 0x5ca53ea
// asm:   0x5ca5563: mov rdi, rbx
// asm:   0x5ca5566: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5ca556b: mov rbp, rax
// asm:   0x5ca556e: lea rdi, [rsp + 0x18]
// asm:   0x5ca5573: call 0x2fdaf00  ; il2cpp_runtime_helper_02fdaf00()
// asm:   0x5ca5578: mov rdi, rbp
// asm:   0x5ca557b: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5ca5580: mov rdi, rax
// asm:   0x5ca5583: call 0x2ab61e0  ; __clang_call_terminate()

void UI_MobileLayoutEditorOverlay__PopulatePresetList
               (UI_MobileLayoutEditorOverlay_o *__this,UnityEngine_RectTransform_o *listRoot,
               UnityEngine_GameObject_o *panel,int32_t role,MethodInfo *method)

{
  UI_MobileLayoutEditorOverlay___c__DisplayClass59_0_o **targetAddress;
  UnityEngine_Vector2_Fields size;
  byte bVar1;
  int32_t iVar2;
  Il2CppClass *pIVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  Il2CppObject *pIVar5;
  bool bVar6;
  UI_MobileLayoutEditorOverlay___c__DisplayClass59_0_o *__this_00;
  VirtualInvokeData *pVVar7;
  UnityEngine_Component_o *__this_01;
  UnityEngine_Object_o *obj;
  UI_MobileInputLayout_c *obj_00;
  System_Collections_Generic_List_MobileInputLayout__o *__this_02;
  UI_MobileLayoutEditorOverlay___c__DisplayClass59_1_o *__this_03;
  UnityEngine_UI_LayoutElement_o *pUVar8;
  UnityEngine_UI_HorizontalLayoutGroup_o *pUVar9;
  UnityEngine_RectTransform_o *pUVar10;
  UI_MobileLayoutEditorOverlay_o *pUVar11;
  System_String_o *pSVar12;
  UnityEngine_GameObject_o *__this_04;
  UI_MobileLayoutEditorOverlay_o *__this_05;
  ulong uVar13;
  MethodInfo **__this_06;
  MethodInfo *method_00;
  long lVar14;
  UnityEngine_Vector2_c **ppUVar15;
  UI_MobileLayoutEditorOverlay___c__DisplayClass59_1_Fields *targetAddress_00;
  Il2CppObject *local_78;
  undefined1 local_70 [16];
  UI_MobileInputLayout_o *local_60;
  undefined1 local_58 [8];
  undefined8 uStack_50;
  UI_MobileInputLayout_o *local_48;
  UI_MobileLayoutEditorOverlay_o *local_40;
  UI_MobileInputLayout_c *local_38;
  
  local_40 = __this;
  if (Il2CppMethodInitialized_07547a30 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MobileInputLayout_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MobileInputLayout_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MobileInputLayout_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_HorizontalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MobileInputLayout_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLayoutManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Transform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass59_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass59_1_PopulatePresetList_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass59_1_PopulatePresetList_b__1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass59_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"Delete");
    il2cpp_codegen_initialize_runtime_metadata(&"Builtin");
    il2cpp_codegen_initialize_runtime_metadata(&"Buttons");
    il2cpp_codegen_initialize_runtime_metadata(&")");
    il2cpp_codegen_initialize_runtime_metadata(&" (");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"Use");
    Il2CppMethodInitialized_07547a30 = '\x01';
  }
  local_38 = (UI_MobileInputLayout_c *)0x0;
  local_58 = (undefined1  [8])0x0;
  uStack_50._0_4_ = 0;
  uStack_50._4_4_ = 0;
  local_48 = (UI_MobileInputLayout_o *)0x0;
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass59_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (UI_MobileLayoutEditorOverlay___c__DisplayClass59_0_o *)0x0) {
    (__this_00->fields).__4__this = local_40;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
    (__this_00->fields).listRoot = listRoot;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).listRoot);
    (__this_00->fields).panel = panel;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).panel);
    (__this_00->fields).role = role;
    pUVar10 = (__this_00->fields).listRoot;
    if (pUVar10 != (UnityEngine_RectTransform_o *)0x0) {
      local_78 = (Il2CppObject *)
                 UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)pUVar10,(MethodInfo *)0x0);
      local_70._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_70._8_8_ = &local_78;
      local_60 = (UI_MobileInputLayout_o *)&local_38;
      do {
        pIVar5 = local_78;
        if (local_78 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar3 = local_78->klass;
        uVar13 = (ulong)(pIVar3->_2).interface_offsets_count;
        if (uVar13 != 0) {
          pIVar4 = (pIVar3->_1).interfaceOffsets;
          lVar14 = 0;
          do {
            if (*(System_Collections_IEnumerator_c **)((long)&pIVar4->interfaceType + lVar14) ==
                TypeInfo_System_Collections_IEnumerator) {
              pVVar7 = pIVar3->vtable + *(int *)((long)&pIVar4->offset + lVar14);
              goto label_05ca4c63;
            }
            lVar14 = lVar14 + 0x10;
          } while (uVar13 * 0x10 != lVar14);
        }
        pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                           (local_78,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_05ca4c63:
        bVar6 = (*pVVar7->methodPtr)(pIVar5,pVVar7->method);
        pIVar5 = local_78;
        if (!bVar6) {
          obj_00 = (UI_MobileInputLayout_c *)
                   il2cpp_vm_Object_IsInst(local_78,(Il2CppClass *)TypeInfo_System_IDisposable);
          local_38 = obj_00;
          if (obj_00 == (UI_MobileInputLayout_c *)0x0) goto label_05ca4de6;
          pIVar3 = (obj_00->_1).image;
          uVar13 = (ulong)(pIVar3->_2).interface_offsets_count;
          if (uVar13 == 0) goto label_05ca4dbf;
          pIVar4 = (pIVar3->_1).interfaceOffsets;
          lVar14 = 0;
          goto label_05ca4db0;
        }
        if (local_78 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar3 = local_78->klass;
        uVar13 = (ulong)(pIVar3->_2).interface_offsets_count;
        if (uVar13 != 0) {
          pIVar4 = (pIVar3->_1).interfaceOffsets;
          lVar14 = 0;
          do {
            if (*(System_Collections_IEnumerator_c **)((long)&pIVar4->interfaceType + lVar14) ==
                TypeInfo_System_Collections_IEnumerator) {
              pVVar7 = pIVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar14) + 1);
              goto label_05ca4cf7;
            }
            lVar14 = lVar14 + 0x10;
          } while (uVar13 * 0x10 != lVar14);
        }
        pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                           (local_78,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_05ca4cf7:
        __this_01 = (UnityEngine_Component_o *)(*pVVar7->methodPtr)(pIVar5,pVVar7->method);
        if (__this_01 == (UnityEngine_Component_o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar1 = (TypeInfo_UnityEngine_Transform->_2).typeHierarchyDepth;
        if (((__this_01->klass->_2).typeHierarchyDepth < bVar1) ||
           ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_UnityEngine_Transform)) {
          il2cpp_codegen_raise_invalid_cast_exception(__this_01);
        }
        obj = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(__this_01,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_69214e0(obj,(MethodInfo *)0x0);
      } while( true );
    }
  }
  goto label_05ca5456;
  while (lVar14 = lVar14 + 0x10, uVar13 * 0x10 != lVar14) {
label_05ca4db0:
    if (*(System_IDisposable_c **)((long)&pIVar4->interfaceType + lVar14) == TypeInfo_System_IDisposable) {
      pVVar7 = pIVar3->vtable + *(int *)((long)&pIVar4->offset + lVar14);
      goto label_05ca4ddd;
    }
  }
label_05ca4dbf:
  pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                     ((Il2CppObject *)obj_00,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05ca4ddd:
  (*pVVar7->methodPtr)((Il2CppObject *)obj_00,pVVar7->method);
label_05ca4de6:
  iVar2 = (__this_00->fields).role;
  if ((TypeInfo_UI_MobileInputLayoutManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutManager);
  }
  __this_02 = UI_MobileInputLayoutManager__GetLayouts(iVar2,(MethodInfo *)0x0);
  if (__this_02 != (System_Collections_Generic_List_MobileInputLayout__o *)0x0) {
    __this_06 = &MethodInfo_System_Collections_Generic_List_MobileInputLayout_GetEnumerator;
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_70,
               (System_Collections_Generic_List_object__o *)__this_02,
               (MethodInfo_395E050 *)
               MethodInfo_System_Collections_Generic_List_MobileInputLayout_GetEnumerator);
    local_48 = local_60;
    local_58 = (undefined1  [8])local_70._0_8_;
    uStack_50 = (Il2CppObject **)local_70._8_8_;
    local_70._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_70._8_8_ = local_58;
    while( true ) {
      bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)local_58,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_MobileInputLayout_MoveNext);
      if (!bVar6) {
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((System_Collections_Generic_List_Enumerator_object__o *)local_58,
                   (MethodInfo_4C45C40 *)
                   MethodInfo_System_Collections_Generic_List_Enumerator_MobileInputLayout_Dispose);
        return;
      }
      __this_03 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass59_1);
      System_Object___ctor((Il2CppObject *)__this_03,(MethodInfo *)0x0);
      if (__this_03 == (UI_MobileLayoutEditorOverlay___c__DisplayClass59_1_o *)0x0) {
        ThrowNullReferenceException();
      }
      targetAddress = &(__this_03->fields).CS___8__locals1;
      (__this_03->fields).CS___8__locals1 = __this_00;
      Il2CppCodeGenWriteBarrier(targetAddress);
      targetAddress_00 = &__this_03->fields;
      (__this_03->fields).layout = local_48;
      ppUVar15 = (UnityEngine_Vector2_c **)targetAddress_00;
      Il2CppCodeGenWriteBarrier(&targetAddress_00->layout);
      if (*targetAddress == (UI_MobileLayoutEditorOverlay___c__DisplayClass59_0_o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar10 = ((*targetAddress)->fields).listRoot;
      if (Il2CppMethodInitialized_0753ecc8 == '\0') {
        ppUVar15 = &TypeInfo_UnityEngine_Vector2;
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
        Il2CppMethodInitialized_0753ecc8 = '\x01';
      }
      ppUVar15 = (UnityEngine_Vector2_c **)
                 UI_MobileLayoutEditorOverlay__CreateRect
                           ((UI_MobileLayoutEditorOverlay_o *)ppUVar15,"Row",pUVar10,
                            (UnityEngine_Vector2_o)0x3f8000003f000000,
                            (UnityEngine_Vector2_o)0x3f8000003f000000,
                            (UnityEngine_Vector2_o)0x4220000000000000,
                            (UnityEngine_Vector2_o)
                            (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                            (MethodInfo *)__this_06);
      if ((UI_MobileLayoutEditorOverlay_o *)ppUVar15 == (UI_MobileLayoutEditorOverlay_o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar8 = UnityEngine_GameObject__AddComponent_object_
                         ((UnityEngine_GameObject_o *)ppUVar15,
                          (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
      if (pUVar8 == (UnityEngine_UI_LayoutElement_o *)0x0) {
        ThrowNullReferenceException();
      }
      (*(pUVar8->klass->vtable)._38_set_preferredHeight.methodPtr)
                (pUVar8,42.0,(pUVar8->klass->vtable)._38_set_preferredHeight.method);
      (*(pUVar8->klass->vtable)._40_set_flexibleWidth.methodPtr)
                (pUVar8,1.0,(pUVar8->klass->vtable)._40_set_flexibleWidth.method);
      pUVar9 = UnityEngine_GameObject__AddComponent_object_
                         ((UnityEngine_GameObject_o *)ppUVar15,
                          (MethodInfo_353B6A0 *)
                          MethodInfo_UnityEngine_GameObject_AddComponent_HorizontalLayoutGroup);
      if (pUVar9 == (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) {
        ThrowNullReferenceException();
      }
      UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)pUVar9,8.0,(MethodInfo *)0x0);
      UnityEngine_UI_LayoutGroup__set_childAlignment
                ((UnityEngine_UI_LayoutGroup_o *)pUVar9,3,(MethodInfo *)0x0);
      UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth
                ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)pUVar9,false,(MethodInfo *)0x0);
      pUVar10 = UnityEngine_GameObject__GetComponent_object_
                          ((UnityEngine_GameObject_o *)ppUVar15,
                           (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform)
      ;
      if (*targetAddress == (UI_MobileLayoutEditorOverlay___c__DisplayClass59_0_o *)0x0) {
        ThrowNullReferenceException();
      }
      method_00 = (MethodInfo *)targetAddress_00->layout;
      if (method_00 == (MethodInfo *)0x0) break;
      iVar2 = ((*targetAddress)->fields).role;
      pSVar12 = (System_String_o *)method_00->name;
      if ((TypeInfo_UI_MobileInputLayoutManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutManager);
      }
      pUVar11 = (UI_MobileLayoutEditorOverlay_o *)
                UI_MobileInputLayoutManager__GetLayoutDisplayName(iVar2,pSVar12,(MethodInfo *)0x0);
      pSVar12 = "Builtin";
      if (targetAddress_00->layout == (UI_MobileInputLayout_o *)0x0) {
        ThrowNullReferenceException();
      }
      if ((targetAddress_00->layout->fields).Builtin == false) {
        pSVar12 = "";
      }
      else {
        if (Il2CppMethodInitialized_07547a4d == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
          il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup");
          il2cpp_codegen_initialize_runtime_metadata(&"MobileLayout");
          il2cpp_codegen_initialize_runtime_metadata(&"");
          Il2CppMethodInitialized_07547a4d = '\x01';
        }
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        method = (MethodInfo *)"";
        pSVar12 = UI_UIManager__GetLocale
                            ("SettingsPopup","MobileLayout",pSVar12,"",
                             "",(MethodInfo *)0x0);
        method_00 = (MethodInfo *)0x0;
        pSVar12 = System_String__Concat_5301f10
                            (" (",pSVar12,")",(MethodInfo *)0x0);
      }
      pSVar12 = System_String__Concat_52f0320((System_String_o *)pUVar11,pSVar12,(MethodInfo *)0x0);
      if (local_40 == (UI_MobileLayoutEditorOverlay_o *)0x0) {
        ThrowNullReferenceException();
      }
      UI_MobileLayoutEditorOverlay__AddPresetNameLabel(pUVar11,pUVar10,pSVar12,method_00);
      pUVar10 = UnityEngine_GameObject__GetComponent_object_
                          ((UnityEngine_GameObject_o *)ppUVar15,
                           (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform)
      ;
      if (Il2CppMethodInitialized_0753ecc8 == '\0') {
        ppUVar15 = &TypeInfo_UnityEngine_Vector2;
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
        Il2CppMethodInitialized_0753ecc8 = '\x01';
      }
      size = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields;
      __this_04 = UI_MobileLayoutEditorOverlay__CreateRect
                            ((UI_MobileLayoutEditorOverlay_o *)ppUVar15,"Buttons",pUVar10,
                             (UnityEngine_Vector2_o)0x3f0000003f800000,
                             (UnityEngine_Vector2_o)0x3f0000003f800000,(UnityEngine_Vector2_o)size,
                             (UnityEngine_Vector2_o)size,method_00);
      if (__this_04 == (UnityEngine_GameObject_o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar8 = UnityEngine_GameObject__AddComponent_object_
                         (__this_04,
                          (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
      if (targetAddress_00->layout == (UI_MobileInputLayout_o *)0x0) {
        ThrowNullReferenceException();
      }
      if (pUVar8 == (UnityEngine_UI_LayoutElement_o *)0x0) {
        ThrowNullReferenceException();
      }
      (*(pUVar8->klass->vtable)._36_set_preferredWidth.methodPtr)
                (pUVar8,*(float *)(&g_data_0100ae00 +
                                  (ulong)((targetAddress_00->layout->fields).Builtin == false) * 4),
                 (pUVar8->klass->vtable)._36_set_preferredWidth.method);
      (*(pUVar8->klass->vtable)._38_set_preferredHeight.methodPtr)
                (pUVar8,34.0,(pUVar8->klass->vtable)._38_set_preferredHeight.method);
      pUVar9 = UnityEngine_GameObject__AddComponent_object_
                         (__this_04,
                          (MethodInfo_353B6A0 *)
                          MethodInfo_UnityEngine_GameObject_AddComponent_HorizontalLayoutGroup);
      if (pUVar9 == (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) {
        ThrowNullReferenceException();
      }
      UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)pUVar9,8.0,(MethodInfo *)0x0);
      UnityEngine_UI_LayoutGroup__set_childAlignment
                ((UnityEngine_UI_LayoutGroup_o *)pUVar9,5,(MethodInfo *)0x0);
      UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth
                ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)pUVar9,false,(MethodInfo *)0x0);
      if (targetAddress_00->layout == (UI_MobileInputLayout_o *)0x0) {
        ThrowNullReferenceException();
      }
      if ((targetAddress_00->layout->fields).Builtin == false) {
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        pSVar12 = UI_UIManager__GetLocaleCommon("Delete",(MethodInfo *)0x0);
        pUVar10 = UnityEngine_GameObject__GetComponent_object_
                            (__this_04,
                             (MethodInfo_353B730 *)
                             MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
        __this_05 = (UI_MobileLayoutEditorOverlay_o *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
        pUVar11 = __this_05;
        System_Action___ctor
                  ((System_Action_o *)__this_05,(Il2CppObject *)__this_03,
                   (intptr_t)
                   MethodInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass59_1_PopulatePresetList_b__0,
                   (MethodInfo *)0x0);
        UI_MobileLayoutEditorOverlay__CreateTextButton
                  (pUVar11,pSVar12,(UnityEngine_Transform_o *)pUVar10,
                   (UnityEngine_Vector2_o)0x42080000428c0000,(System_Action_o *)__this_05,method);
      }
      pSVar12 = "Use";
      if (Il2CppMethodInitialized_07547a4d == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
        il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup");
        il2cpp_codegen_initialize_runtime_metadata(&"MobileLayout");
        il2cpp_codegen_initialize_runtime_metadata(&"");
        Il2CppMethodInitialized_07547a4d = '\x01';
      }
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      method = (MethodInfo *)"";
      pSVar12 = UI_UIManager__GetLocale
                          ("SettingsPopup","MobileLayout",pSVar12,"",
                           "",(MethodInfo *)0x0);
      pUVar10 = UnityEngine_GameObject__GetComponent_object_
                          (__this_04,
                           (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform)
      ;
      __this_06 = (MethodInfo **)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
      pUVar11 = (UI_MobileLayoutEditorOverlay_o *)__this_06;
      System_Action___ctor
                ((System_Action_o *)__this_06,(Il2CppObject *)__this_03,
                 (intptr_t)MethodInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass59_1_PopulatePresetList_b__1
                 ,(MethodInfo *)0x0);
      UI_MobileLayoutEditorOverlay__CreateTextButton
                (pUVar11,pSVar12,(UnityEngine_Transform_o *)pUVar10,(UnityEngine_Vector2_o)0x42080000428c0000,
                 (System_Action_o *)__this_06,method);
    }
    ThrowNullReferenceException();
  }
label_05ca5456:
  ThrowNullReferenceException();
}


// UI.MobileLayoutEditorOverlay$$ShowEditPopup
// il2cpp: void UI_MobileLayoutEditorOverlay__ShowEditPopup (UI_MobileLayoutEditorOverlay_o* __this, UI_MobileInputControlLayout_o* control, bool addOnConfirm, UI_MobileInputControlLayout_o* explicitParentControl, const MethodInfo* method);
// 0x5ca0550

void UI_MobileLayoutEditorOverlay__ShowEditPopup
               (UI_MobileLayoutEditorOverlay_o *__this,UI_MobileInputControlLayout_o *control,
               bool addOnConfirm,UI_MobileInputControlLayout_o *explicitParentControl,MethodInfo *method)

{
  UI_MobileInputControlLayout_o **ppUVar1;
  Settings_StringSetting_o **targetAddress;
  Settings_FloatSetting_o **ppSVar2;
  UnityEngine_GameObject_o **ppUVar3;
  UI_MobileInputSkinEditState_o **ppUVar4;
  UI_MobileInputSkinEditState_o **targetAddress_00;
  Settings_FloatSetting_o **targetAddress_01;
  Settings_FloatSetting_o **targetAddress_02;
  Settings_BoolSetting_o **ppSVar5;
  UI_MobileInputControlLayout_o *pUVar6;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  UnityEngine_Object_o *x;
  UnityEngine_Transform_o *parent;
  UI_MobileInputControlLayout_o *pUVar7;
  Il2CppType *handle;
  bool bVar8;
  UI_MobileLayoutEditorOverlay___c__DisplayClass60_0_o *__this_01;
  System_String_o *pSVar9;
  UI_MobileLayoutEditorModal_o *pUVar10;
  UnityEngine_GameObject_o *pUVar11;
  MethodInfo *pMVar12;
  System_String_o **ppSVar13;
  Settings_StringSetting_o *pSVar14;
  Settings_FloatSetting_o *pSVar15;
  UI_MobileInputSkin_o *pUVar16;
  UI_MobileInputSkinEditState_o *pUVar17;
  Settings_BoolSetting_o *pSVar18;
  System_Action_o *pSVar19;
  System_String_array *pSVar20;
  System_Func_string__string__o *__this_02;
  UI_MobileLayoutEditorOverlay_o *pUVar21;
  System_Type_o *pSVar22;
  UI_MobileLayoutActionListEditor_o *pUVar23;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  MethodInfo *method_07;
  MethodInfo *method_08;
  MethodInfo *method_09;
  MethodInfo *method_10;
  UI_ElementStyle_o *style;
  UI_MobileLayoutEditorOverlay_o *pUVar24;
  float fVar25;
  MethodInfo *pMVar26;
  MethodInfo *pMVar27;
  System_Enum_o local_1e0;
  int32_t local_1d0;
  Settings_StringSetting_o **local_1c8;
  Settings_StringSetting_o **local_1c0;
  System_Action_o *local_1b8;
  System_Action_o *local_1b0;
  System_Action_o **local_1a8;
  System_Action_o **local_1a0;
  UnityEngine_GameObject_o **local_198;
  UI_MobileLayoutActionListEditor_o **local_190;
  UnityEngine_GameObject_o **local_188;
  UnityEngine_GameObject_o **local_180;
  UnityEngine_GameObject_o **local_178;
  UnityEngine_GameObject_o **local_170;
  UnityEngine_GameObject_o **local_168;
  UnityEngine_GameObject_o **local_160;
  UnityEngine_GameObject_o **local_158;
  UnityEngine_GameObject_o **local_150;
  UnityEngine_GameObject_o **local_148;
  UnityEngine_GameObject_o **local_140;
  UnityEngine_GameObject_o **local_138;
  UnityEngine_GameObject_o **local_130;
  UnityEngine_GameObject_o **local_128;
  UnityEngine_GameObject_o **local_120;
  UnityEngine_GameObject_o **local_118;
  UnityEngine_GameObject_o **local_110;
  UnityEngine_GameObject_o **local_108;
  Settings_BoolSetting_o **local_100;
  Settings_BoolSetting_o **local_f8;
  Settings_FloatSetting_o **local_f0;
  Settings_FloatSetting_o **local_e8;
  Settings_FloatSetting_o **local_e0;
  Settings_FloatSetting_o **local_d8;
  Settings_BoolSetting_o **local_d0;
  UI_MobileInputSkinEditState_o **local_c8;
  UI_MobileInputSkinEditState_o **local_c0;
  UI_MobileInputSkinEditState_o **local_b8;
  UI_MobileInputSkinEditState_o **local_b0;
  UI_MobileInputSkinEditState_o **local_a8;
  UI_MobileInputSkinEditState_o **local_a0;
  Settings_FloatSetting_o **local_98;
  UI_MobileInputSkinEditState_o **local_90;
  UI_MobileInputSkinEditState_o **local_88;
  UI_MobileInputControlLayout_o **local_80;
  Settings_StringSetting_o **local_78;
  Settings_FloatSetting_o **local_70;
  Settings_FloatSetting_o **local_68;
  UI_MobileLayoutEditorModal_o *local_60;
  Settings_StringSetting_o **local_58;
  UnityEngine_GameObject_o **local_50;
  System_Enum_o local_48;
  int32_t local_38;
  
  if (Il2CppMethodInitialized_07547a31 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputControlKind);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UI_MobileInputControlShape);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputControlShape);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MobileInputLayoutManager_GetControlKindDisplayName);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UI_MobileInputPopupMode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputPopupMode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputSkinEditState);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MobileLayoutEditorOverlay_PopupModeOptionLabel);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MobileLayoutEditorOverlay_ShapeOptionLabel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass60_0_ShowEditPopup_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass60_0_ShowEditPopup_b__1);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass60_0_ShowEditPopup_b__2);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass60_0_ShowEditPopup_b__3);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass60_0_ShowEditPopup_b__4);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass60_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"MoveContentWithTouch");
    il2cpp_codegen_initialize_runtime_metadata(&"Label");
    il2cpp_codegen_initialize_runtime_metadata(&"OnSkin");
    il2cpp_codegen_initialize_runtime_metadata(&"JoystickHandleSkin");
    il2cpp_codegen_initialize_runtime_metadata(&"JoystickRingSkin");
    il2cpp_codegen_initialize_runtime_metadata(&"BindReelOutAngle");
    il2cpp_codegen_initialize_runtime_metadata(&"JoystickReelInSkin");
    il2cpp_codegen_initialize_runtime_metadata(&"AimAssistOnRelease");
    il2cpp_codegen_initialize_runtime_metadata(&"Kind");
    il2cpp_codegen_initialize_runtime_metadata(&"PopupMode");
    il2cpp_codegen_initialize_runtime_metadata(&"AllowLookAreaThrough");
    il2cpp_codegen_initialize_runtime_metadata(&"Behavior");
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    il2cpp_codegen_initialize_runtime_metadata(&"JoystickActiveSkin");
    il2cpp_codegen_initialize_runtime_metadata(&"IconSize");
    il2cpp_codegen_initialize_runtime_metadata(&"Basic");
    il2cpp_codegen_initialize_runtime_metadata(&"Width");
    il2cpp_codegen_initialize_runtime_metadata(&"Icon");
    il2cpp_codegen_initialize_runtime_metadata(&"Shape");
    il2cpp_codegen_initialize_runtime_metadata(&"JoystickBaseScale");
    il2cpp_codegen_initialize_runtime_metadata(&"Appearance");
    il2cpp_codegen_initialize_runtime_metadata(&"BindReelInAngle");
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    il2cpp_codegen_initialize_runtime_metadata(&"EditButton");
    il2cpp_codegen_initialize_runtime_metadata(&"JoystickReelOutSkin");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"BTN");
    il2cpp_codegen_initialize_runtime_metadata(&"JoystickHandleScale");
    il2cpp_codegen_initialize_runtime_metadata(&"JoystickReelOutRingDiameter");
    il2cpp_codegen_initialize_runtime_metadata(&"Skin");
    il2cpp_codegen_initialize_runtime_metadata(&"AimAssistOnPress");
    il2cpp_codegen_initialize_runtime_metadata(&"Height");
    Il2CppMethodInitialized_07547a31 = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass60_0);
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  if (__this_01 == (UI_MobileLayoutEditorOverlay___c__DisplayClass60_0_o *)0x0) goto label_05ca2e80;
  (__this_01->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_01->fields).__4__this);
  ppUVar1 = &(__this_01->fields).control;
  (__this_01->fields).control = control;
  Il2CppCodeGenWriteBarrier(ppUVar1);
  (__this_01->fields).addOnConfirm = addOnConfirm;
  if (explicitParentControl == (UI_MobileInputControlLayout_o *)0x0) {
    pUVar6 = *ppUVar1;
    if (Il2CppMethodInitialized_07547a48 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_System_Collections_Generic_Dictionary_MobileInputControlLayout_MobileInputControlLayout_TryGetVa
                );
      Il2CppMethodInitialized_07547a48 = '\x01';
    }
    local_1e0.klass = (System_Enum_c *)0x0;
    if (pUVar6 != (UI_MobileInputControlLayout_o *)0x0) {
      __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._controlParents;
      if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05ca2e80;
      bVar8 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                        (__this_00,(Il2CppObject *)pUVar6,(Il2CppObject **)&local_1e0,
                         (MethodInfo_4AAF440 *)
                         MethodInfo_System_Collections_Generic_Dictionary_MobileInputControlLayout_MobileInputControlLayout_TryGetVa
                        );
      if (bVar8) {
        explicitParentControl = (UI_MobileInputControlLayout_o *)local_1e0.klass;
        goto label_05ca08d4;
      }
    }
    explicitParentControl = (UI_MobileInputControlLayout_o *)0x0;
  }
label_05ca08d4:
  (__this_01->fields).parentControl = explicitParentControl;
  Il2CppCodeGenWriteBarrier(&(__this_01->fields).parentControl);
  pUVar6 = (__this_01->fields).parentControl;
  if (Il2CppMethodInitialized_07547a47 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547a47 = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._returnButton;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar8 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar8) {
    pUVar11 = (__this->fields)._returnButton;
    if (pUVar11 == (UnityEngine_GameObject_o *)0x0) goto label_05ca2e80;
    UnityEngine_GameObject__SetActive(pUVar11,false,(MethodInfo *)0x0);
  }
  pSVar9 = "EditButton";
  if (Il2CppMethodInitialized_07547a4d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"MobileLayout");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547a4d = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pMVar12 = (MethodInfo *)"";
  pSVar9 = UI_UIManager__GetLocale
                     ("SettingsPopup","MobileLayout",pSVar9,"",
                      "",(MethodInfo *)0x0);
  pUVar10 = UI_MobileLayoutEditorOverlay__CreateModal(__this,pSVar9,540.0,500.0,true,pMVar12);
  if (pUVar10 != (UI_MobileLayoutEditorModal_o *)0x0) {
    pUVar11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar10,(MethodInfo *)0x0);
    ppUVar3 = &(__this_01->fields).panel;
    (__this_01->fields).panel = pUVar11;
    Il2CppCodeGenWriteBarrier(ppUVar3);
    parent = (pUVar10->fields).SinglePanel;
    pMVar12 = (MethodInfo *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
    UI_ElementStyle___ctor
              ((UI_ElementStyle_o *)pMVar12,0x14,150.0,12.0,"DefaultPanel",(MethodInfo *)0x0);
    pUVar7 = (__this_01->fields).control;
    if (pUVar7 != (UI_MobileInputControlLayout_o *)0x0) {
      bVar8 = System_String__IsNullOrEmpty((pUVar7->fields).Label,(MethodInfo *)0x0);
      local_60 = pUVar10;
      local_50 = ppUVar3;
      if (bVar8) {
        ppSVar13 = &"BTN";
      }
      else {
        if (*ppUVar1 == (UI_MobileInputControlLayout_o *)0x0) goto label_05ca2e80;
        ppSVar13 = &((*ppUVar1)->fields).Label;
      }
      pSVar9 = *ppSVar13;
      pSVar14 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
      Settings_StringSetting___ctor_5b7b730(pSVar14,pSVar9,0x20,(MethodInfo *)0x0);
      local_1c8 = &(__this_01->fields).label;
      (__this_01->fields).label = pSVar14;
      Il2CppCodeGenWriteBarrier(local_1c8);
      if (pUVar6 == (UI_MobileInputControlLayout_o *)0x0) {
        if (*ppUVar1 == (UI_MobileInputControlLayout_o *)0x0) goto label_05ca2e80;
        local_1d0 = UI_MobileInputControlLayout__GetKind(*ppUVar1,(MethodInfo *)0x0);
      }
      else {
        local_1d0 = 0;
      }
      local_1e0.monitor = (void *)0xffffffffffffffff;
      local_1e0.klass = (System_Enum_c *)TypeInfo_UI_MobileInputControlKind;
      pSVar9 = System_Enum__ToString(&local_1e0,(MethodInfo *)0x0);
      pSVar14 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
      Settings_StringSetting___ctor_5b7b730(pSVar14,pSVar9,0x7fffffff,(MethodInfo *)0x0);
      local_1c0 = &(__this_01->fields).kind;
      (__this_01->fields).kind = pSVar14;
      Il2CppCodeGenWriteBarrier(local_1c0);
      pUVar7 = (__this_01->fields).control;
      if (pUVar7 != (UI_MobileInputControlLayout_o *)0x0) {
        local_1d0 = UI_MobileInputControlLayout__GetShape(pUVar7,(MethodInfo *)0x0);
        local_1e0.klass = (System_Enum_c *)TypeInfo_UI_MobileInputControlShape;
        local_1e0.monitor = (void *)0xffffffffffffffff;
        pSVar9 = System_Enum__ToString(&local_1e0,(MethodInfo *)0x0);
        pSVar14 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
        Settings_StringSetting___ctor_5b7b730(pSVar14,pSVar9,0x7fffffff,(MethodInfo *)0x0);
        local_58 = &(__this_01->fields).shape;
        (__this_01->fields).shape = pSVar14;
        Il2CppCodeGenWriteBarrier(local_58);
        pUVar7 = (__this_01->fields).control;
        if (pUVar7 != (UI_MobileInputControlLayout_o *)0x0) {
          local_38 = UI_MobileInputControlLayout__GetPopupMode(pUVar7,(MethodInfo *)0x0);
          local_48.klass = (System_Enum_c *)TypeInfo_UI_MobileInputPopupMode;
          local_48.monitor = (void *)0xffffffffffffffff;
          pSVar9 = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
          pSVar14 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
          Settings_StringSetting___ctor_5b7b730(pSVar14,pSVar9,0x7fffffff,(MethodInfo *)0x0);
          targetAddress = &(__this_01->fields).popupMode;
          (__this_01->fields).popupMode = pSVar14;
          Il2CppCodeGenWriteBarrier(targetAddress);
          pUVar7 = (__this_01->fields).control;
          if (pUVar7 != (UI_MobileInputControlLayout_o *)0x0) {
            fVar25 = (pUVar7->fields).Width;
            pSVar15 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
            Settings_FloatSetting___ctor_5a411f0(pSVar15,fVar25,0.01,1.0,(MethodInfo *)0x0);
            ppSVar2 = &(__this_01->fields).width;
            (__this_01->fields).width = pSVar15;
            Il2CppCodeGenWriteBarrier(ppSVar2);
            pUVar7 = (__this_01->fields).control;
            if (pUVar7 != (UI_MobileInputControlLayout_o *)0x0) {
              fVar25 = (pUVar7->fields).Height;
              local_78 = targetAddress;
              local_70 = ppSVar2;
              pSVar15 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
              Settings_FloatSetting___ctor_5a411f0(pSVar15,fVar25,0.01,1.0,(MethodInfo *)0x0);
              local_68 = &(__this_01->fields).height;
              (__this_01->fields).height = pSVar15;
              Il2CppCodeGenWriteBarrier(local_68);
              pUVar7 = (__this_01->fields).control;
              if (pUVar7 != (UI_MobileInputControlLayout_o *)0x0) {
                local_80 = ppUVar1;
                pUVar16 = UI_MobileInputControlLayout__GetSkin(pUVar7,(MethodInfo *)0x0);
                pUVar17 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MobileInputSkinEditState);
                UI_MobileInputSkinEditState___ctor(pUVar17,pUVar16,method_00);
                local_88 = &(__this_01->fields).skin;
                (__this_01->fields).skin = pUVar17;
                Il2CppCodeGenWriteBarrier(local_88);
                pUVar7 = (__this_01->fields).control;
                if (pUVar7 != (UI_MobileInputControlLayout_o *)0x0) {
                  pUVar16 = UI_MobileInputControlLayout__GetOnSkin(pUVar7,(MethodInfo *)0x0);
                  pUVar17 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MobileInputSkinEditState);
                  UI_MobileInputSkinEditState___ctor(pUVar17,pUVar16,method_01);
                  ppUVar4 = &(__this_01->fields).onSkin;
                  (__this_01->fields).onSkin = pUVar17;
                  Il2CppCodeGenWriteBarrier(ppUVar4);
                  pUVar7 = (__this_01->fields).control;
                  if (pUVar7 != (UI_MobileInputControlLayout_o *)0x0) {
                    pUVar16 = UI_MobileInputControlLayout__GetIcon(pUVar7,(MethodInfo *)0x0);
                    pUVar17 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MobileInputSkinEditState);
                    UI_MobileInputSkinEditState___ctor(pUVar17,pUVar16,method_02);
                    local_90 = &(__this_01->fields).icon;
                    (__this_01->fields).icon = pUVar17;
                    Il2CppCodeGenWriteBarrier(local_90);
                    pUVar7 = (__this_01->fields).control;
                    if (pUVar7 != (UI_MobileInputControlLayout_o *)0x0) {
                      fVar25 = UI_MobileInputControlLayout__GetIconSize(pUVar7,(MethodInfo *)0x0);
                      pSVar15 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
                      Settings_FloatSetting___ctor_5a411f0(pSVar15,fVar25,0.0,2.0,(MethodInfo *)0x0);
                      local_98 = &(__this_01->fields).iconSize;
                      (__this_01->fields).iconSize = pSVar15;
                      Il2CppCodeGenWriteBarrier(local_98);
                      pUVar7 = (__this_01->fields).control;
                      if (pUVar7 != (UI_MobileInputControlLayout_o *)0x0) {
                        pUVar16 = UI_MobileInputControlLayout__GetJoystickHandleSkin(pUVar7,(MethodInfo *)0x0)
                        ;
                        pUVar17 = il2cpp_codegen_object_new
                                            ((Il2CppClass *)TypeInfo_UI_MobileInputSkinEditState);
                        UI_MobileInputSkinEditState___ctor(pUVar17,pUVar16,method_03);
                        local_a0 = &(__this_01->fields).joystickHandleSkin;
                        (__this_01->fields).joystickHandleSkin = pUVar17;
                        Il2CppCodeGenWriteBarrier(local_a0);
                        pUVar7 = (__this_01->fields).control;
                        if (pUVar7 != (UI_MobileInputControlLayout_o *)0x0) {
                          local_b0 = ppUVar4;
                          pUVar16 = UI_MobileInputControlLayout__GetJoystickActiveSkin
                                              (pUVar7,(MethodInfo *)0x0);
                          pUVar17 = il2cpp_codegen_object_new
                                              ((Il2CppClass *)TypeInfo_UI_MobileInputSkinEditState);
                          UI_MobileInputSkinEditState___ctor(pUVar17,pUVar16,method_04);
                          local_a8 = &(__this_01->fields).joystickActiveSkin;
                          (__this_01->fields).joystickActiveSkin = pUVar17;
                          Il2CppCodeGenWriteBarrier(local_a8);
                          pUVar7 = (__this_01->fields).control;
                          if (pUVar7 != (UI_MobileInputControlLayout_o *)0x0) {
                            pUVar16 = UI_MobileInputControlLayout__GetJoystickRingSkin
                                                (pUVar7,(MethodInfo *)0x0);
                            pUVar17 = il2cpp_codegen_object_new
                                                ((Il2CppClass *)TypeInfo_UI_MobileInputSkinEditState);
                            UI_MobileInputSkinEditState___ctor(pUVar17,pUVar16,method_05);
                            ppUVar4 = &(__this_01->fields).joystickRingSkin;
                            (__this_01->fields).joystickRingSkin = pUVar17;
                            Il2CppCodeGenWriteBarrier(ppUVar4);
                            pUVar7 = (__this_01->fields).control;
                            if (pUVar7 != (UI_MobileInputControlLayout_o *)0x0) {
                              pUVar16 = UI_MobileInputControlLayout__GetJoystickReelInSkin
                                                  (pUVar7,(MethodInfo *)0x0);
                              pUVar17 = il2cpp_codegen_object_new
                                                  ((Il2CppClass *)TypeInfo_UI_MobileInputSkinEditState);
                              UI_MobileInputSkinEditState___ctor(pUVar17,pUVar16,method_06);
                              targetAddress_00 = &(__this_01->fields).joystickReelInSkin;
                              (__this_01->fields).joystickReelInSkin = pUVar17;
                              Il2CppCodeGenWriteBarrier(targetAddress_00);
                              pUVar7 = (__this_01->fields).control;
                              if (pUVar7 != (UI_MobileInputControlLayout_o *)0x0) {
                                local_c0 = ppUVar4;
                                local_b8 = targetAddress_00;
                                pUVar16 = UI_MobileInputControlLayout__GetJoystickReelOutSkin
                                                    (pUVar7,(MethodInfo *)0x0);
                                pUVar17 = il2cpp_codegen_object_new
                                                    ((Il2CppClass *)TypeInfo_UI_MobileInputSkinEditState);
                                UI_MobileInputSkinEditState___ctor(pUVar17,pUVar16,method_07);
                                ppUVar4 = &(__this_01->fields).joystickReelOutSkin;
                                (__this_01->fields).joystickReelOutSkin = pUVar17;
                                Il2CppCodeGenWriteBarrier(ppUVar4);
                                pUVar7 = (__this_01->fields).control;
                                if (pUVar7 != (UI_MobileInputControlLayout_o *)0x0) {
                                  local_c8 = ppUVar4;
                                  fVar25 = UI_MobileInputControlLayout__GetJoystickBaseScale
                                                     (pUVar7,(MethodInfo *)0x0);
                                  pSVar15 = il2cpp_codegen_object_new
                                                      ((Il2CppClass *)TypeInfo_Settings_FloatSetting);
                                  Settings_FloatSetting___ctor_5a411f0
                                            (pSVar15,fVar25,0.01,2.0,(MethodInfo *)0x0);
                                  ppSVar2 = &(__this_01->fields).joystickBaseScale;
                                  (__this_01->fields).joystickBaseScale = pSVar15;
                                  Il2CppCodeGenWriteBarrier(ppSVar2);
                                  pUVar7 = (__this_01->fields).control;
                                  if (pUVar7 != (UI_MobileInputControlLayout_o *)0x0) {
                                    fVar25 = UI_MobileInputControlLayout__GetJoystickHandleScale
                                                       (pUVar7,(MethodInfo *)0x0);
                                    pSVar15 = il2cpp_codegen_object_new
                                                        ((Il2CppClass *)TypeInfo_Settings_FloatSetting);
                                    Settings_FloatSetting___ctor_5a411f0
                                              (pSVar15,fVar25,0.01,2.0,(MethodInfo *)0x0);
                                    targetAddress_01 = &(__this_01->fields).joystickHandleScale;
                                    (__this_01->fields).joystickHandleScale = pSVar15;
                                    Il2CppCodeGenWriteBarrier(targetAddress_01);
                                    pUVar7 = (__this_01->fields).control;
                                    if (pUVar7 != (UI_MobileInputControlLayout_o *)0x0) {
                                      fVar25 = UI_MobileInputControlLayout__GetJoystickReelOutRingDiameter
                                                         (pUVar7,(MethodInfo *)0x0);
                                      pSVar15 = il2cpp_codegen_object_new
                                                          ((Il2CppClass *)TypeInfo_Settings_FloatSetting);
                                      Settings_FloatSetting___ctor_5a411f0
                                                (pSVar15,fVar25,1.0,2000.0,(MethodInfo *)0x0);
                                      targetAddress_02 = &(__this_01->fields).joystickReelOutRingDiameter;
                                      (__this_01->fields).joystickReelOutRingDiameter = pSVar15;
                                      Il2CppCodeGenWriteBarrier(targetAddress_02);
                                      pUVar7 = (__this_01->fields).control;
                                      if (pUVar7 != (UI_MobileInputControlLayout_o *)0x0) {
                                        local_e8 = ppSVar2;
                                        local_e0 = targetAddress_01;
                                        local_d8 = targetAddress_02;
                                        bVar8 = UI_MobileInputControlLayout__ShouldMoveContentWithTouch
                                                          (pUVar7,(MethodInfo *)0x0);
                                        pSVar18 = il2cpp_codegen_object_new
                                                            ((Il2CppClass *)TypeInfo_Settings_BoolSetting);
                                        Settings_BoolSetting___ctor_5a412a0(pSVar18,bVar8,(MethodInfo *)0x0);
                                        local_d0 = &(__this_01->fields).moveContentWithTouch;
                                        (__this_01->fields).moveContentWithTouch = pSVar18;
                                        Il2CppCodeGenWriteBarrier(local_d0);
                                        pUVar7 = (__this_01->fields).control;
                                        if (pUVar7 != (UI_MobileInputControlLayout_o *)0x0) {
                                          bVar8 = (pUVar7->fields).AllowLookAreaThrough;
                                          pSVar18 = il2cpp_codegen_object_new
                                                              ((Il2CppClass *)TypeInfo_Settings_BoolSetting);
                                          Settings_BoolSetting___ctor_5a412a0(pSVar18,bVar8,(MethodInfo *)0x0)
                                          ;
                                          ppSVar5 = &(__this_01->fields).allowLookAreaThrough;
                                          (__this_01->fields).allowLookAreaThrough = pSVar18;
                                          Il2CppCodeGenWriteBarrier(ppSVar5);
                                          pUVar7 = (__this_01->fields).control;
                                          if (pUVar7 != (UI_MobileInputControlLayout_o *)0x0) {
                                            fVar25 = (pUVar7->fields).BindReelInAngle;
                                            pSVar15 = il2cpp_codegen_object_new
                                                                ((Il2CppClass *)TypeInfo_Settings_FloatSetting
                                                                );
                                            Settings_FloatSetting___ctor_5a411f0
                                                      (pSVar15,fVar25,0.0,180.0,(MethodInfo *)0x0);
                                            ppSVar2 = &(__this_01->fields).bindReelInAngle;
                                            (__this_01->fields).bindReelInAngle = pSVar15;
                                            Il2CppCodeGenWriteBarrier(ppSVar2);
                                            pUVar7 = (__this_01->fields).control;
                                            if (pUVar7 != (UI_MobileInputControlLayout_o *)0x0) {
                                              fVar25 = (pUVar7->fields).BindReelOutAngle;
                                              local_f8 = ppSVar5;
                                              local_f0 = ppSVar2;
                                              pSVar15 = il2cpp_codegen_object_new
                                                                  ((Il2CppClass *)
                                                                   TypeInfo_Settings_FloatSetting);
                                              Settings_FloatSetting___ctor_5a411f0
                                                        (pSVar15,fVar25,0.0,180.0,(MethodInfo *)0x0);
                                              ppSVar2 = &(__this_01->fields).bindReelOutAngle;
                                              (__this_01->fields).bindReelOutAngle = pSVar15;
                                              Il2CppCodeGenWriteBarrier(ppSVar2);
                                              pUVar7 = (__this_01->fields).control;
                                              if (pUVar7 != (UI_MobileInputControlLayout_o *)0x0) {
                                                bVar8 = (pUVar7->fields).AimAssistOnPress;
                                                pSVar18 = il2cpp_codegen_object_new
                                                                    ((Il2CppClass *)
                                                                     TypeInfo_Settings_BoolSetting);
                                                Settings_BoolSetting___ctor_5a412a0
                                                          (pSVar18,bVar8,(MethodInfo *)0x0);
                                                ppSVar5 = &(__this_01->fields).aimAssistOnPress;
                                                (__this_01->fields).aimAssistOnPress = pSVar18;
                                                Il2CppCodeGenWriteBarrier(ppSVar5);
                                                pUVar7 = (__this_01->fields).control;
                                                if (pUVar7 != (UI_MobileInputControlLayout_o *)0x0) {
                                                  bVar8 = (pUVar7->fields).AimAssistOnRelease;
                                                  pSVar18 = il2cpp_codegen_object_new
                                                                      ((Il2CppClass *)
                                                                       TypeInfo_Settings_BoolSetting);
                                                  Settings_BoolSetting___ctor_5a412a0
                                                            (pSVar18,bVar8,(MethodInfo *)0x0);
                                                  local_100 = &(__this_01->fields).aimAssistOnRelease;
                                                  (__this_01->fields).aimAssistOnRelease = pSVar18;
                                                  Il2CppCodeGenWriteBarrier(local_100);
                                                  local_190 = &(__this_01->fields).actionList;
                                                  (__this_01->fields).actionList =
                                                       (UI_MobileLayoutActionListEditor_o *)0x0;
                                                  Il2CppCodeGenWriteBarrier(local_190);
                                                  local_188 = &(__this_01->fields).shapeDropdown;
                                                  (__this_01->fields).shapeDropdown =
                                                       (UnityEngine_GameObject_o *)0x0;
                                                  Il2CppCodeGenWriteBarrier(local_188);
                                                  local_180 = &(__this_01->fields).popupModeDropdown;
                                                  (__this_01->fields).popupModeDropdown =
                                                       (UnityEngine_GameObject_o *)0x0;
                                                  Il2CppCodeGenWriteBarrier(local_180);
                                                  local_198 = &(__this_01->fields).popupChildrenObject;
                                                  (__this_01->fields).popupChildrenObject =
                                                       (UnityEngine_GameObject_o *)0x0;
                                                  Il2CppCodeGenWriteBarrier(local_198);
                                                  local_178 = &(__this_01->fields).onSkinSetting;
                                                  (__this_01->fields).onSkinSetting =
                                                       (UnityEngine_GameObject_o *)0x0;
                                                  Il2CppCodeGenWriteBarrier(local_178);
                                                  local_170 = &(__this_01->fields).joystickHandleSkinSetting;
                                                  (__this_01->fields).joystickHandleSkinSetting =
                                                       (UnityEngine_GameObject_o *)0x0;
                                                  Il2CppCodeGenWriteBarrier(local_170);
                                                  local_168 = &(__this_01->fields).joystickActiveSkinSetting;
                                                  (__this_01->fields).joystickActiveSkinSetting =
                                                       (UnityEngine_GameObject_o *)0x0;
                                                  Il2CppCodeGenWriteBarrier(local_168);
                                                  local_160 = &(__this_01->fields).joystickRingSkinSetting;
                                                  (__this_01->fields).joystickRingSkinSetting =
                                                       (UnityEngine_GameObject_o *)0x0;
                                                  Il2CppCodeGenWriteBarrier(local_160);
                                                  local_158 = &(__this_01->fields).joystickReelInSkinSetting;
                                                  (__this_01->fields).joystickReelInSkinSetting =
                                                       (UnityEngine_GameObject_o *)0x0;
                                                  Il2CppCodeGenWriteBarrier(local_158);
                                                  local_150 = &(__this_01->fields).joystickReelOutSkinSetting;
                                                  (__this_01->fields).joystickReelOutSkinSetting =
                                                       (UnityEngine_GameObject_o *)0x0;
                                                  Il2CppCodeGenWriteBarrier(local_150);
                                                  local_148 = &(__this_01->fields).joystickBaseScaleSetting;
                                                  (__this_01->fields).joystickBaseScaleSetting =
                                                       (UnityEngine_GameObject_o *)0x0;
                                                  Il2CppCodeGenWriteBarrier(local_148);
                                                  local_140 = &(__this_01->fields).joystickHandleScaleSetting;
                                                  (__this_01->fields).joystickHandleScaleSetting =
                                                       (UnityEngine_GameObject_o *)0x0;
                                                  Il2CppCodeGenWriteBarrier(local_140);
                                                  local_138 = &(__this_01->fields).
                                                               joystickReelOutRingDiameterSetting;
                                                  (__this_01->fields).joystickReelOutRingDiameterSetting =
                                                       (UnityEngine_GameObject_o *)0x0;
                                                  Il2CppCodeGenWriteBarrier(local_138);
                                                  local_130 = &(__this_01->fields).moveContentWithTouchToggle;
                                                  (__this_01->fields).moveContentWithTouchToggle =
                                                       (UnityEngine_GameObject_o *)0x0;
                                                  Il2CppCodeGenWriteBarrier(local_130);
                                                  local_128 = &(__this_01->fields).allowLookAreaThroughToggle;
                                                  (__this_01->fields).allowLookAreaThroughToggle =
                                                       (UnityEngine_GameObject_o *)0x0;
                                                  Il2CppCodeGenWriteBarrier(local_128);
                                                  local_120 = &(__this_01->fields).bindReelInAngleSetting;
                                                  (__this_01->fields).bindReelInAngleSetting =
                                                       (UnityEngine_GameObject_o *)0x0;
                                                  Il2CppCodeGenWriteBarrier(local_120);
                                                  local_118 = &(__this_01->fields).bindReelOutAngleSetting;
                                                  (__this_01->fields).bindReelOutAngleSetting =
                                                       (UnityEngine_GameObject_o *)0x0;
                                                  Il2CppCodeGenWriteBarrier(local_118);
                                                  local_110 = &(__this_01->fields).aimAssistOnPressToggle;
                                                  (__this_01->fields).aimAssistOnPressToggle =
                                                       (UnityEngine_GameObject_o *)0x0;
                                                  Il2CppCodeGenWriteBarrier(local_110);
                                                  local_108 = &(__this_01->fields).aimAssistOnReleaseToggle;
                                                  (__this_01->fields).aimAssistOnReleaseToggle =
                                                       (UnityEngine_GameObject_o *)0x0;
                                                  Il2CppCodeGenWriteBarrier(local_108);
                                                  pSVar19 = il2cpp_codegen_object_new
                                                                      ((Il2CppClass *)TypeInfo_System_Action);
                                                  System_Action___ctor
                                                            (pSVar19,(Il2CppObject *)__this_01,
                                                             (intptr_t)
                                                                                                                          
                                                       MethodInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass60_0_ShowEditPopup_b__0
                                                       ,(MethodInfo *)0x0);
                                                  local_1a0 = &(__this_01->fields).applyChanges;
                                                  (__this_01->fields).applyChanges = pSVar19;
                                                  Il2CppCodeGenWriteBarrier(local_1a0);
                                                  local_1b8 = il2cpp_codegen_object_new
                                                                        ((Il2CppClass *)TypeInfo_System_Action
                                                                        );
                                                  System_Action___ctor
                                                            (local_1b8,(Il2CppObject *)__this_01,
                                                             (intptr_t)
                                                                                                                          
                                                       MethodInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass60_0_ShowEditPopup_b__1
                                                       ,(MethodInfo *)0x0);
                                                  local_1b0 = il2cpp_codegen_object_new
                                                                        ((Il2CppClass *)TypeInfo_System_Action
                                                                        );
                                                  System_Action___ctor
                                                            (local_1b0,(Il2CppObject *)__this_01,
                                                             (intptr_t)
                                                                                                                          
                                                       MethodInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass60_0_ShowEditPopup_b__2
                                                       ,(MethodInfo *)0x0);
                                                  pSVar19 = il2cpp_codegen_object_new
                                                                      ((Il2CppClass *)TypeInfo_System_Action);
                                                  System_Action___ctor
                                                            (pSVar19,(Il2CppObject *)__this_01,
                                                             (intptr_t)
                                                                                                                          
                                                       MethodInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass60_0_ShowEditPopup_b__3
                                                       ,(MethodInfo *)0x0);
                                                  local_1a8 = &(__this_01->fields).refreshEditableOptions;
                                                  (__this_01->fields).refreshEditableOptions = pSVar19;
                                                  Il2CppCodeGenWriteBarrier(local_1a8);
                                                  pSVar9 = "Basic";
                                                  if (Il2CppMethodInitialized_07547a4d == '\0') {
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&TypeInfo_UI_UIManager);
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&"SettingsPopup");
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&"MobileLayout");
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&"");
                                                    Il2CppMethodInitialized_07547a4d = '\x01';
                                                  }
                                                  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor
                                                      == 0) {
                                                    il2cpp_codegen_runtime_class_init
                                                              ((Il2CppClass *)TypeInfo_UI_UIManager);
                                                  }
                                                  pUVar24 = (UI_MobileLayoutEditorOverlay_o *)
                                                            "SettingsPopup";
                                                  pMVar27 = (MethodInfo *)"";
                                                  pSVar9 = UI_UIManager__GetLocale
                                                                     ("SettingsPopup",
                                                                      "MobileLayout",pSVar9,
                                                                      "",
                                                                      "",(MethodInfo *)0x0)
                                                  ;
                                                  UI_MobileLayoutEditorOverlay__AddSectionHeader
                                                            (pUVar24,parent,(UI_ElementStyle_o *)pMVar12,
                                                             pSVar9,pMVar27);
                                                  pSVar9 = "Label";
                                                  pSVar14 = *local_1c8;
                                                  if (Il2CppMethodInitialized_07547a4d == '\0') {
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&TypeInfo_UI_UIManager);
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&"SettingsPopup");
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&"MobileLayout");
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&"");
                                                    Il2CppMethodInitialized_07547a4d = '\x01';
                                                  }
                                                  local_1c8 = (Settings_StringSetting_o **)ppSVar5;
                                                  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor
                                                      == 0) {
                                                    il2cpp_codegen_runtime_class_init
                                                              ((Il2CppClass *)TypeInfo_UI_UIManager);
                                                  }
                                                  pSVar9 = UI_UIManager__GetLocale
                                                                     ("SettingsPopup",
                                                                      "MobileLayout",pSVar9,
                                                                      "",
                                                                      "",(MethodInfo *)0x0)
                                                  ;
                                                  pMVar27 = (MethodInfo *)0x0;
                                                  UI_ElementFactory__CreateInputSetting
                                                            (parent,(UI_ElementStyle_o *)pMVar12,
                                                             (Settings_BaseSetting_o *)pSVar14,pSVar9,
                                                             "",220.0,34.0,false,
                                                             (UnityEngine_Events_UnityAction_o *)0x0,
                                                             (UnityEngine_Events_UnityAction_o *)0x0,
                                                             (System_Func_string__bool__o *)0x0,
                                                             (System_Func_string__string__o *)0x0,
                                                             (MethodInfo *)0x0);
                                                  pSVar9 = "Icon";
                                                  pUVar17 = *local_90;
                                                  if (Il2CppMethodInitialized_07547a4d == '\0') {
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&TypeInfo_UI_UIManager);
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&"SettingsPopup");
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&"MobileLayout");
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&"");
                                                    Il2CppMethodInitialized_07547a4d = '\x01';
                                                  }
                                                  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor
                                                      == 0) {
                                                    il2cpp_codegen_runtime_class_init
                                                              ((Il2CppClass *)TypeInfo_UI_UIManager);
                                                  }
                                                  pMVar26 = (MethodInfo *)0x0;
                                                  pSVar9 = UI_UIManager__GetLocale
                                                                     ("SettingsPopup",
                                                                      "MobileLayout",pSVar9,
                                                                      "",
                                                                      "",(MethodInfo *)0x0)
                                                  ;
                                                  UI_MobileLayoutEditorOverlay__CreateSkinSetting
                                                            (__this,parent,(UI_ElementStyle_o *)pMVar12,
                                                             pUVar17,pSVar9,pMVar26);
                                                  pSVar9 = "IconSize";
                                                  pSVar15 = *local_98;
                                                  if (Il2CppMethodInitialized_07547a4d == '\0') {
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&TypeInfo_UI_UIManager);
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&"SettingsPopup");
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&"MobileLayout");
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&"");
                                                    Il2CppMethodInitialized_07547a4d = '\x01';
                                                  }
                                                  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor
                                                      == 0) {
                                                    il2cpp_codegen_runtime_class_init
                                                              ((Il2CppClass *)TypeInfo_UI_UIManager);
                                                  }
                                                  pSVar9 = UI_UIManager__GetLocale
                                                                     ("SettingsPopup",
                                                                      "MobileLayout",pSVar9,
                                                                      "",
                                                                      "",(MethodInfo *)0x0)
                                                  ;
                                                  UI_ElementFactory__CreateSliderInputSetting
                                                            (parent,(UI_ElementStyle_o *)pMVar12,
                                                             (Settings_BaseSetting_o *)pSVar15,pSVar9,
                                                             "",170.0,16.0,70.0,34.0,2,
                                                             (MethodInfo *)0x0);
                                                  pSVar9 = "Kind";
                                                  if (pUVar6 == (UI_MobileInputControlLayout_o *)0x0) {
                                                    pSVar14 = *local_1c0;
                                                    if (Il2CppMethodInitialized_07547a4d == '\0') {
                                                      il2cpp_codegen_initialize_runtime_metadata
                                                                (&TypeInfo_UI_UIManager);
                                                      il2cpp_codegen_initialize_runtime_metadata
                                                                (&"SettingsPopup");
                                                      il2cpp_codegen_initialize_runtime_metadata
                                                                (&"MobileLayout");
                                                      il2cpp_codegen_initialize_runtime_metadata
                                                                (&"");
                                                      Il2CppMethodInitialized_07547a4d = '\x01';
                                                    }
                                                    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor
                                                        == 0) {
                                                      il2cpp_codegen_runtime_class_init
                                                                ((Il2CppClass *)TypeInfo_UI_UIManager);
                                                    }
                                                    pMVar26 = (MethodInfo *)"MobileLayout";
                                                    pSVar9 = UI_UIManager__GetLocale
                                                                       ("SettingsPopup",
                                                                        "MobileLayout",pSVar9,
                                                                        "",
                                                                        "",
                                                                        (MethodInfo *)0x0);
                                                    pSVar20 = UI_MobileLayoutEditorOverlay__GetKindOptions
                                                                        (__this,pMVar26);
                                                    __this_02 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                           TypeInfo_System_Func_string_string)
                                                    ;
                                                    System_Func_object__object____ctor
                                                              ((System_Func_object__object__o *)__this_02,
                                                               (Il2CppObject *)0x0,
                                                               (intptr_t)
                                                                                                                              
                                                       MethodInfo_UI_MobileInputLayoutManager_GetControlKindDisplayName
                                                       ,(MethodInfo_4F19B50 *)0x0);
                                                    pUVar21 = (UI_MobileLayoutEditorOverlay_o *)
                                                              il2cpp_codegen_object_new
                                                                        ((Il2CppClass *)
                                                                                                                                                  
                                                       TypeInfo_UnityEngine_Events_UnityAction);
                                                    pUVar24 = pUVar21;
                                                    UnityEngine_Events_UnityAction___ctor
                                                              ((UnityEngine_Events_UnityAction_o *)pUVar21,
                                                               (Il2CppObject *)__this_01,
                                                               (intptr_t)
                                                                                                                              
                                                       MethodInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass60_0_ShowEditPopup_b__4
                                                       ,(MethodInfo *)0x0);
                                                    pUVar11 = 
                                                       UI_MobileLayoutEditorOverlay__CreateLocalizedDropdownSetting
                                                                 (pUVar24,parent,(UI_ElementStyle_o *)pMVar12,
                                                                  (Settings_BaseSetting_o *)pSVar14,pSVar9,
                                                                  pSVar20,__this_02,"",
                                                                  220.0,34.0,300.0,
                                                                  (System_Nullable_float__o)0x0,
                                                                  (UnityEngine_Events_UnityAction_o *)pUVar21,
                                                                  pMVar27);
                                                    UI_MobileLayoutEditorOverlay__RegisterDropdown
                                                              (__this,pUVar11,method_08);
                                                  }
                                                  pSVar9 = "Shape";
                                                  pSVar14 = *local_58;
                                                  if (Il2CppMethodInitialized_07547a4d == '\0') {
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&TypeInfo_UI_UIManager);
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&"SettingsPopup");
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&"MobileLayout");
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&"");
                                                    Il2CppMethodInitialized_07547a4d = '\x01';
                                                  }
                                                  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor
                                                      == 0) {
                                                    il2cpp_codegen_runtime_class_init
                                                              ((Il2CppClass *)TypeInfo_UI_UIManager);
                                                  }
                                                  pSVar9 = UI_UIManager__GetLocale
                                                                     ("SettingsPopup",
                                                                      "MobileLayout",pSVar9,
                                                                      "",
                                                                      "",(MethodInfo *)0x0)
                                                  ;
                                                  handle = TypeRef_UI_MobileInputControlShape;
                                                  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
                                                    il2cpp_codegen_runtime_class_init(g_data_075567a8);
                                                  }
                                                  pSVar22 = System_Type__GetTypeFromHandle
                                                                      ((System_RuntimeTypeHandle_o)handle,
                                                                       (MethodInfo *)0x0);
                                                  if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
                                                    il2cpp_codegen_runtime_class_init(g_data_07556760);
                                                  }
                                                  pSVar20 = System_Enum__GetNames(pSVar22,(MethodInfo *)0x0);
                                                  pUVar21 = (UI_MobileLayoutEditorOverlay_o *)
                                                            il2cpp_codegen_object_new
                                                                      ((Il2CppClass *)
                                                                       TypeInfo_System_Func_string_string);
                                                  pUVar24 = pUVar21;
                                                  System_Func_object__object____ctor
                                                            ((System_Func_object__object__o *)pUVar21,
                                                             (Il2CppObject *)__this,
                                                             (intptr_t)
                                                                                                                          
                                                       MethodInfo_UI_MobileLayoutEditorOverlay_ShapeOptionLabel
                                                       ,(MethodInfo_4F19B50 *)0x0);
                                                  pUVar11 = 
                                                       UI_MobileLayoutEditorOverlay__CreateLocalizedDropdownSetting
                                                                 (pUVar24,parent,(UI_ElementStyle_o *)pMVar12,
                                                                  (Settings_BaseSetting_o *)pSVar14,pSVar9,
                                                                  pSVar20,(System_Func_string__string__o *)
                                                                          pUVar21,"",220.0,
                                                                  34.0,300.0,(System_Nullable_float__o)0x0,
                                                                  (UnityEngine_Events_UnityAction_o *)0x0,
                                                                  pMVar27);
                                                  ppUVar3 = local_188;
                                                  *local_188 = pUVar11;
                                                  Il2CppCodeGenWriteBarrier(local_188);
                                                  UI_MobileLayoutEditorOverlay__RegisterDropdown
                                                            (__this,*ppUVar3,method_09);
                                                  pSVar9 = "PopupMode";
                                                  pSVar14 = *local_78;
                                                  if (Il2CppMethodInitialized_07547a4d == '\0') {
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&TypeInfo_UI_UIManager);
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&"SettingsPopup");
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&"MobileLayout");
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&"");
                                                    Il2CppMethodInitialized_07547a4d = '\x01';
                                                  }
                                                  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor
                                                      == 0) {
                                                    il2cpp_codegen_runtime_class_init
                                                              ((Il2CppClass *)TypeInfo_UI_UIManager);
                                                  }
                                                  pSVar9 = UI_UIManager__GetLocale
                                                                     ("SettingsPopup",
                                                                      "MobileLayout",pSVar9,
                                                                      "",
                                                                      "",(MethodInfo *)0x0)
                                                  ;
                                                  pSVar22 = System_Type__GetTypeFromHandle
                                                                      ((System_RuntimeTypeHandle_o)
                                                                       TypeRef_UI_MobileInputPopupMode,
                                                                       (MethodInfo *)0x0);
                                                  pSVar20 = System_Enum__GetNames(pSVar22,(MethodInfo *)0x0);
                                                  pUVar21 = (UI_MobileLayoutEditorOverlay_o *)
                                                            il2cpp_codegen_object_new
                                                                      ((Il2CppClass *)
                                                                       TypeInfo_System_Func_string_string);
                                                  pUVar24 = pUVar21;
                                                  System_Func_object__object____ctor
                                                            ((System_Func_object__object__o *)pUVar21,
                                                             (Il2CppObject *)__this,
                                                             (intptr_t)
                                                                                                                          
                                                       MethodInfo_UI_MobileLayoutEditorOverlay_PopupModeOptionLabel
                                                       ,(MethodInfo_4F19B50 *)0x0);
                                                  pUVar11 = 
                                                       UI_MobileLayoutEditorOverlay__CreateLocalizedDropdownSetting
                                                                 (pUVar24,parent,(UI_ElementStyle_o *)pMVar12,
                                                                  (Settings_BaseSetting_o *)pSVar14,pSVar9,
                                                                  pSVar20,(System_Func_string__string__o *)
                                                                          pUVar21,"",220.0,
                                                                  34.0,300.0,(System_Nullable_float__o)0x0,
                                                                  (UnityEngine_Events_UnityAction_o *)0x0,
                                                                  pMVar27);
                                                  ppUVar3 = local_180;
                                                  *local_180 = pUVar11;
                                                  Il2CppCodeGenWriteBarrier(local_180);
                                                  UI_MobileLayoutEditorOverlay__RegisterDropdown
                                                            (__this,*ppUVar3,method_10);
                                                  pSVar9 = "Width";
                                                  pSVar15 = *local_70;
                                                  if (Il2CppMethodInitialized_07547a4d == '\0') {
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&TypeInfo_UI_UIManager);
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&"SettingsPopup");
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&"MobileLayout");
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&"");
                                                    Il2CppMethodInitialized_07547a4d = '\x01';
                                                  }
                                                  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor
                                                      == 0) {
                                                    il2cpp_codegen_runtime_class_init
                                                              ((Il2CppClass *)TypeInfo_UI_UIManager);
                                                  }
                                                  pSVar9 = UI_UIManager__GetLocale
                                                                     ("SettingsPopup",
                                                                      "MobileLayout",pSVar9,
                                                                      "",
                                                                      "",(MethodInfo *)0x0)
                                                  ;
                                                  UI_ElementFactory__CreateInputSetting
                                                            (parent,(UI_ElementStyle_o *)pMVar12,
                                                             (Settings_BaseSetting_o *)pSVar15,pSVar9,
                                                             "",110.0,34.0,false,
                                                             (UnityEngine_Events_UnityAction_o *)0x0,
                                                             (UnityEngine_Events_UnityAction_o *)0x0,
                                                             (System_Func_string__bool__o *)0x0,
                                                             (System_Func_string__string__o *)0x0,
                                                             (MethodInfo *)0x0);
                                                  pSVar9 = "Height";
                                                  pSVar15 = *local_68;
                                                  if (Il2CppMethodInitialized_07547a4d == '\0') {
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&TypeInfo_UI_UIManager);
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&"SettingsPopup");
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&"MobileLayout");
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&"");
                                                    Il2CppMethodInitialized_07547a4d = '\x01';
                                                  }
                                                  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor
                                                      == 0) {
                                                    il2cpp_codegen_runtime_class_init
                                                              ((Il2CppClass *)TypeInfo_UI_UIManager);
                                                  }
                                                  pSVar9 = UI_UIManager__GetLocale
                                                                     ("SettingsPopup",
                                                                      "MobileLayout",pSVar9,
                                                                      "",
                                                                      "",(MethodInfo *)0x0)
                                                  ;
                                                  pMVar27 = pMVar12;
                                                  UI_ElementFactory__CreateInputSetting
                                                            (parent,(UI_ElementStyle_o *)pMVar12,
                                                             (Settings_BaseSetting_o *)pSVar15,pSVar9,
                                                             "",110.0,34.0,false,
                                                             (UnityEngine_Events_UnityAction_o *)0x0,
                                                             (UnityEngine_Events_UnityAction_o *)0x0,
                                                             (System_Func_string__bool__o *)0x0,
                                                             (System_Func_string__string__o *)0x0,
                                                             (MethodInfo *)0x0);
                                                  UI_MobileLayoutEditorOverlay__EnsureColorPopupOnTop
                                                            (__this,pMVar27);
                                                  pSVar9 = "Appearance";
                                                  if (Il2CppMethodInitialized_07547a4d == '\0') {
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&TypeInfo_UI_UIManager);
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&"SettingsPopup");
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&"MobileLayout");
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&"");
                                                    Il2CppMethodInitialized_07547a4d = '\x01';
                                                  }
                                                  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor
                                                      == 0) {
                                                    il2cpp_codegen_runtime_class_init
                                                              ((Il2CppClass *)TypeInfo_UI_UIManager);
                                                  }
                                                  pUVar24 = (UI_MobileLayoutEditorOverlay_o *)
                                                            "SettingsPopup";
                                                  pMVar27 = (MethodInfo *)"";
                                                  pSVar9 = UI_UIManager__GetLocale
                                                                     ("SettingsPopup",
                                                                      "MobileLayout",pSVar9,
                                                                      "",
                                                                      "",(MethodInfo *)0x0)
                                                  ;
                                                  UI_MobileLayoutEditorOverlay__AddSectionHeader
                                                            (pUVar24,parent,(UI_ElementStyle_o *)pMVar12,
                                                             pSVar9,pMVar27);
                                                  pSVar9 = "Skin";
                                                  pUVar17 = *local_88;
                                                  if (Il2CppMethodInitialized_07547a4d == '\0') {
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&TypeInfo_UI_UIManager);
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&"SettingsPopup");
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&"MobileLayout");
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&"");
                                                    Il2CppMethodInitialized_07547a4d = '\x01';
                                                  }
                                                  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor
                                                      == 0) {
                                                    il2cpp_codegen_runtime_class_init
                                                              ((Il2CppClass *)TypeInfo_UI_UIManager);
                                                  }
                                                  pMVar27 = (MethodInfo *)0x0;
                                                  pSVar9 = UI_UIManager__GetLocale
                                                                     ("SettingsPopup",
                                                                      "MobileLayout",pSVar9,
                                                                      "",
                                                                      "",(MethodInfo *)0x0)
                                                  ;
                                                  UI_MobileLayoutEditorOverlay__CreateSkinSetting
                                                            (__this,parent,(UI_ElementStyle_o *)pMVar12,
                                                             pUVar17,pSVar9,pMVar27);
                                                  pSVar9 = "OnSkin";
                                                  pUVar17 = *local_b0;
                                                  if (Il2CppMethodInitialized_07547a4d == '\0') {
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&TypeInfo_UI_UIManager);
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&"SettingsPopup");
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&"MobileLayout");
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&"");
                                                    Il2CppMethodInitialized_07547a4d = '\x01';
                                                  }
                                                  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor
                                                      == 0) {
                                                    il2cpp_codegen_runtime_class_init
                                                              ((Il2CppClass *)TypeInfo_UI_UIManager);
                                                  }
                                                  pMVar27 = (MethodInfo *)0x0;
                                                  pSVar9 = UI_UIManager__GetLocale
                                                                     ("SettingsPopup",
                                                                      "MobileLayout",pSVar9,
                                                                      "",
                                                                      "",(MethodInfo *)0x0)
                                                  ;
                                                  pUVar11 = UI_MobileLayoutEditorOverlay__CreateSkinSetting
                                                                      (__this,parent,
                                                                       (UI_ElementStyle_o *)pMVar12,pUVar17,
                                                                       pSVar9,pMVar27);
                                                  *local_178 = pUVar11;
                                                  Il2CppCodeGenWriteBarrier(local_178);
                                                  pSVar9 = "JoystickHandleSkin";
                                                  pUVar17 = *local_a0;
                                                  if (Il2CppMethodInitialized_07547a4d == '\0') {
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&TypeInfo_UI_UIManager);
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&"SettingsPopup");
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&"MobileLayout");
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&"");
                                                    Il2CppMethodInitialized_07547a4d = '\x01';
                                                  }
                                                  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor
                                                      == 0) {
                                                    il2cpp_codegen_runtime_class_init
                                                              ((Il2CppClass *)TypeInfo_UI_UIManager);
                                                  }
                                                  pMVar27 = (MethodInfo *)0x0;
                                                  pSVar9 = UI_UIManager__GetLocale
                                                                     ("SettingsPopup",
                                                                      "MobileLayout",pSVar9,
                                                                      "",
                                                                      "",(MethodInfo *)0x0)
                                                  ;
                                                  pUVar11 = UI_MobileLayoutEditorOverlay__CreateSkinSetting
                                                                      (__this,parent,
                                                                       (UI_ElementStyle_o *)pMVar12,pUVar17,
                                                                       pSVar9,pMVar27);
                                                  *local_170 = pUVar11;
                                                  Il2CppCodeGenWriteBarrier(local_170);
                                                  pSVar9 = "JoystickActiveSkin";
                                                  pUVar17 = *local_a8;
                                                  if (Il2CppMethodInitialized_07547a4d == '\0') {
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&TypeInfo_UI_UIManager);
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&"SettingsPopup");
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&"MobileLayout");
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&"");
                                                    Il2CppMethodInitialized_07547a4d = '\x01';
                                                  }
                                                  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor
                                                      == 0) {
                                                    il2cpp_codegen_runtime_class_init
                                                              ((Il2CppClass *)TypeInfo_UI_UIManager);
                                                  }
                                                  pMVar27 = (MethodInfo *)0x0;
                                                  pSVar9 = UI_UIManager__GetLocale
                                                                     ("SettingsPopup",
                                                                      "MobileLayout",pSVar9,
                                                                      "",
                                                                      "",(MethodInfo *)0x0)
                                                  ;
                                                  pUVar11 = UI_MobileLayoutEditorOverlay__CreateSkinSetting
                                                                      (__this,parent,
                                                                       (UI_ElementStyle_o *)pMVar12,pUVar17,
                                                                       pSVar9,pMVar27);
                                                  *local_168 = pUVar11;
                                                  Il2CppCodeGenWriteBarrier(local_168);
                                                  pSVar9 = "JoystickRingSkin";
                                                  pUVar17 = *local_c0;
                                                  if (Il2CppMethodInitialized_07547a4d == '\0') {
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&TypeInfo_UI_UIManager);
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&"SettingsPopup");
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&"MobileLayout");
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&"");
                                                    Il2CppMethodInitialized_07547a4d = '\x01';
                                                  }
                                                  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor
                                                      == 0) {
                                                    il2cpp_codegen_runtime_class_init
                                                              ((Il2CppClass *)TypeInfo_UI_UIManager);
                                                  }
                                                  pMVar27 = (MethodInfo *)0x0;
                                                  pSVar9 = UI_UIManager__GetLocale
                                                                     ("SettingsPopup",
                                                                      "MobileLayout",pSVar9,
                                                                      "",
                                                                      "",(MethodInfo *)0x0)
                                                  ;
                                                  pUVar11 = UI_MobileLayoutEditorOverlay__CreateSkinSetting
                                                                      (__this,parent,
                                                                       (UI_ElementStyle_o *)pMVar12,pUVar17,
                                                                       pSVar9,pMVar27);
                                                  *local_160 = pUVar11;
                                                  Il2CppCodeGenWriteBarrier(local_160);
                                                  pSVar9 = "JoystickReelInSkin";
                                                  pUVar17 = *local_b8;
                                                  if (Il2CppMethodInitialized_07547a4d == '\0') {
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&TypeInfo_UI_UIManager);
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&"SettingsPopup");
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&"MobileLayout");
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&"");
                                                    Il2CppMethodInitialized_07547a4d = '\x01';
                                                  }
                                                  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor
                                                      == 0) {
                                                    il2cpp_codegen_runtime_class_init
                                                              ((Il2CppClass *)TypeInfo_UI_UIManager);
                                                  }
                                                  pMVar27 = (MethodInfo *)0x0;
                                                  pSVar9 = UI_UIManager__GetLocale
                                                                     ("SettingsPopup",
                                                                      "MobileLayout",pSVar9,
                                                                      "",
                                                                      "",(MethodInfo *)0x0)
                                                  ;
                                                  pUVar11 = UI_MobileLayoutEditorOverlay__CreateSkinSetting
                                                                      (__this,parent,
                                                                       (UI_ElementStyle_o *)pMVar12,pUVar17,
                                                                       pSVar9,pMVar27);
                                                  *local_158 = pUVar11;
                                                  Il2CppCodeGenWriteBarrier(local_158);
                                                  pSVar9 = "JoystickReelOutSkin";
                                                  pUVar17 = *local_c8;
                                                  if (Il2CppMethodInitialized_07547a4d == '\0') {
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&TypeInfo_UI_UIManager);
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&"SettingsPopup");
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&"MobileLayout");
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&"");
                                                    Il2CppMethodInitialized_07547a4d = '\x01';
                                                  }
                                                  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor
                                                      == 0) {
                                                    il2cpp_codegen_runtime_class_init
                                                              ((Il2CppClass *)TypeInfo_UI_UIManager);
                                                  }
                                                  pMVar27 = (MethodInfo *)0x0;
                                                  pSVar9 = UI_UIManager__GetLocale
                                                                     ("SettingsPopup",
                                                                      "MobileLayout",pSVar9,
                                                                      "",
                                                                      "",(MethodInfo *)0x0)
                                                  ;
                                                  pUVar11 = UI_MobileLayoutEditorOverlay__CreateSkinSetting
                                                                      (__this,parent,
                                                                       (UI_ElementStyle_o *)pMVar12,pUVar17,
                                                                       pSVar9,pMVar27);
                                                  *local_150 = pUVar11;
                                                  Il2CppCodeGenWriteBarrier(local_150);
                                                  pSVar9 = "JoystickBaseScale";
                                                  pSVar15 = *local_e8;
                                                  if (Il2CppMethodInitialized_07547a4d == '\0') {
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&TypeInfo_UI_UIManager);
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&"SettingsPopup");
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&"MobileLayout");
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&"");
                                                    Il2CppMethodInitialized_07547a4d = '\x01';
                                                  }
                                                  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor
                                                      == 0) {
                                                    il2cpp_codegen_runtime_class_init
                                                              ((Il2CppClass *)TypeInfo_UI_UIManager);
                                                  }
                                                  pSVar9 = UI_UIManager__GetLocale
                                                                     ("SettingsPopup",
                                                                      "MobileLayout",pSVar9,
                                                                      "",
                                                                      "",(MethodInfo *)0x0)
                                                  ;
                                                  pUVar11 = UI_ElementFactory__CreateSliderInputSetting
                                                                      (parent,(UI_ElementStyle_o *)pMVar12,
                                                                       (Settings_BaseSetting_o *)pSVar15,
                                                                       pSVar9,"",170.0,16.0
                                                                       ,70.0,34.0,2,(MethodInfo *)0x0);
                                                  *local_148 = pUVar11;
                                                  Il2CppCodeGenWriteBarrier(local_148);
                                                  pSVar9 = "JoystickHandleScale";
                                                  pSVar15 = *local_e0;
                                                  if (Il2CppMethodInitialized_07547a4d == '\0') {
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&TypeInfo_UI_UIManager);
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&"SettingsPopup");
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&"MobileLayout");
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&"");
                                                    Il2CppMethodInitialized_07547a4d = '\x01';
                                                  }
                                                  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor
                                                      == 0) {
                                                    il2cpp_codegen_runtime_class_init
                                                              ((Il2CppClass *)TypeInfo_UI_UIManager);
                                                  }
                                                  pSVar9 = UI_UIManager__GetLocale
                                                                     ("SettingsPopup",
                                                                      "MobileLayout",pSVar9,
                                                                      "",
                                                                      "",(MethodInfo *)0x0)
                                                  ;
                                                  pUVar11 = UI_ElementFactory__CreateSliderInputSetting
                                                                      (parent,(UI_ElementStyle_o *)pMVar12,
                                                                       (Settings_BaseSetting_o *)pSVar15,
                                                                       pSVar9,"",170.0,16.0
                                                                       ,70.0,34.0,2,(MethodInfo *)0x0);
                                                  *local_140 = pUVar11;
                                                  Il2CppCodeGenWriteBarrier(local_140);
                                                  pSVar9 = "JoystickReelOutRingDiameter";
                                                  pSVar15 = *local_d8;
                                                  if (Il2CppMethodInitialized_07547a4d == '\0') {
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&TypeInfo_UI_UIManager);
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&"SettingsPopup");
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&"MobileLayout");
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&"");
                                                    Il2CppMethodInitialized_07547a4d = '\x01';
                                                  }
                                                  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor
                                                      == 0) {
                                                    il2cpp_codegen_runtime_class_init
                                                              ((Il2CppClass *)TypeInfo_UI_UIManager);
                                                  }
                                                  pSVar9 = UI_UIManager__GetLocale
                                                                     ("SettingsPopup",
                                                                      "MobileLayout",pSVar9,
                                                                      "",
                                                                      "",(MethodInfo *)0x0)
                                                  ;
                                                  pUVar11 = UI_ElementFactory__CreateSliderInputSetting
                                                                      (parent,(UI_ElementStyle_o *)pMVar12,
                                                                       (Settings_BaseSetting_o *)pSVar15,
                                                                       pSVar9,"",170.0,16.0
                                                                       ,70.0,34.0,0,(MethodInfo *)0x0);
                                                  *local_138 = pUVar11;
                                                  Il2CppCodeGenWriteBarrier(local_138);
                                                  pSVar9 = "Behavior";
                                                  if (Il2CppMethodInitialized_07547a4d == '\0') {
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&TypeInfo_UI_UIManager);
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&"SettingsPopup");
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&"MobileLayout");
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&"");
                                                    Il2CppMethodInitialized_07547a4d = '\x01';
                                                  }
                                                  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor
                                                      == 0) {
                                                    il2cpp_codegen_runtime_class_init
                                                              ((Il2CppClass *)TypeInfo_UI_UIManager);
                                                  }
                                                  pUVar24 = (UI_MobileLayoutEditorOverlay_o *)
                                                            "SettingsPopup";
                                                  pMVar27 = (MethodInfo *)"";
                                                  pSVar9 = UI_UIManager__GetLocale
                                                                     ("SettingsPopup",
                                                                      "MobileLayout",pSVar9,
                                                                      "",
                                                                      "",(MethodInfo *)0x0)
                                                  ;
                                                  UI_MobileLayoutEditorOverlay__AddSectionHeader
                                                            (pUVar24,parent,(UI_ElementStyle_o *)pMVar12,
                                                             pSVar9,pMVar27);
                                                  pSVar9 = "MoveContentWithTouch";
                                                  pSVar18 = *local_d0;
                                                  if (Il2CppMethodInitialized_07547a4d == '\0') {
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&TypeInfo_UI_UIManager);
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&"SettingsPopup");
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&"MobileLayout");
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&"");
                                                    Il2CppMethodInitialized_07547a4d = '\x01';
                                                  }
                                                  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor
                                                      == 0) {
                                                    il2cpp_codegen_runtime_class_init
                                                              ((Il2CppClass *)TypeInfo_UI_UIManager);
                                                  }
                                                  pSVar9 = UI_UIManager__GetLocale
                                                                     ("SettingsPopup",
                                                                      "MobileLayout",pSVar9,
                                                                      "",
                                                                      "",(MethodInfo *)0x0)
                                                  ;
                                                  pUVar11 = UI_ElementFactory__CreateToggleSetting
                                                                      (parent,(UI_ElementStyle_o *)pMVar12,
                                                                       (Settings_BaseSetting_o *)pSVar18,
                                                                       pSVar9,"",30.0,34.0,
                                                                       (UnityEngine_Events_UnityAction_o *)0x0
                                                                       ,(MethodInfo *)0x0);
                                                  *local_130 = pUVar11;
                                                  Il2CppCodeGenWriteBarrier(local_130);
                                                  pSVar9 = "AllowLookAreaThrough";
                                                  pSVar18 = *local_f8;
                                                  if (Il2CppMethodInitialized_07547a4d == '\0') {
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&TypeInfo_UI_UIManager);
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&"SettingsPopup");
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&"MobileLayout");
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&"");
                                                    Il2CppMethodInitialized_07547a4d = '\x01';
                                                  }
                                                  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor
                                                      == 0) {
                                                    il2cpp_codegen_runtime_class_init
                                                              ((Il2CppClass *)TypeInfo_UI_UIManager);
                                                  }
                                                  pSVar9 = UI_UIManager__GetLocale
                                                                     ("SettingsPopup",
                                                                      "MobileLayout",pSVar9,
                                                                      "",
                                                                      "",(MethodInfo *)0x0)
                                                  ;
                                                  pUVar11 = UI_ElementFactory__CreateToggleSetting
                                                                      (parent,(UI_ElementStyle_o *)pMVar12,
                                                                       (Settings_BaseSetting_o *)pSVar18,
                                                                       pSVar9,"",30.0,34.0,
                                                                       (UnityEngine_Events_UnityAction_o *)0x0
                                                                       ,(MethodInfo *)0x0);
                                                  *local_128 = pUVar11;
                                                  Il2CppCodeGenWriteBarrier(local_128);
                                                  pSVar9 = "BindReelInAngle";
                                                  pSVar15 = *local_f0;
                                                  if (Il2CppMethodInitialized_07547a4d == '\0') {
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&TypeInfo_UI_UIManager);
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&"SettingsPopup");
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&"MobileLayout");
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&"");
                                                    Il2CppMethodInitialized_07547a4d = '\x01';
                                                  }
                                                  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor
                                                      == 0) {
                                                    il2cpp_codegen_runtime_class_init
                                                              ((Il2CppClass *)TypeInfo_UI_UIManager);
                                                  }
                                                  pSVar9 = UI_UIManager__GetLocale
                                                                     ("SettingsPopup",
                                                                      "MobileLayout",pSVar9,
                                                                      "",
                                                                      "",(MethodInfo *)0x0)
                                                  ;
                                                  pUVar11 = UI_ElementFactory__CreateSliderInputSetting
                                                                      (parent,(UI_ElementStyle_o *)pMVar12,
                                                                       (Settings_BaseSetting_o *)pSVar15,
                                                                       pSVar9,"",170.0,16.0
                                                                       ,70.0,34.0,0,(MethodInfo *)0x0);
                                                  *local_120 = pUVar11;
                                                  Il2CppCodeGenWriteBarrier(local_120);
                                                  pSVar9 = "BindReelOutAngle";
                                                  pSVar15 = *ppSVar2;
                                                  if (Il2CppMethodInitialized_07547a4d == '\0') {
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&TypeInfo_UI_UIManager);
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&"SettingsPopup");
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&"MobileLayout");
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&"");
                                                    Il2CppMethodInitialized_07547a4d = '\x01';
                                                  }
                                                  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor
                                                      == 0) {
                                                    il2cpp_codegen_runtime_class_init
                                                              ((Il2CppClass *)TypeInfo_UI_UIManager);
                                                  }
                                                  pSVar9 = UI_UIManager__GetLocale
                                                                     ("SettingsPopup",
                                                                      "MobileLayout",pSVar9,
                                                                      "",
                                                                      "",(MethodInfo *)0x0)
                                                  ;
                                                  pUVar11 = UI_ElementFactory__CreateSliderInputSetting
                                                                      (parent,(UI_ElementStyle_o *)pMVar12,
                                                                       (Settings_BaseSetting_o *)pSVar15,
                                                                       pSVar9,"",170.0,16.0
                                                                       ,70.0,34.0,0,(MethodInfo *)0x0);
                                                  *local_118 = pUVar11;
                                                  Il2CppCodeGenWriteBarrier(local_118);
                                                  pSVar9 = "AimAssistOnPress";
                                                  pSVar14 = *local_1c8;
                                                  if (Il2CppMethodInitialized_07547a4d == '\0') {
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&TypeInfo_UI_UIManager);
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&"SettingsPopup");
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&"MobileLayout");
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&"");
                                                    Il2CppMethodInitialized_07547a4d = '\x01';
                                                  }
                                                  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor
                                                      == 0) {
                                                    il2cpp_codegen_runtime_class_init
                                                              ((Il2CppClass *)TypeInfo_UI_UIManager);
                                                  }
                                                  pSVar9 = UI_UIManager__GetLocale
                                                                     ("SettingsPopup",
                                                                      "MobileLayout",pSVar9,
                                                                      "",
                                                                      "",(MethodInfo *)0x0)
                                                  ;
                                                  pUVar11 = UI_ElementFactory__CreateToggleSetting
                                                                      (parent,(UI_ElementStyle_o *)pMVar12,
                                                                       (Settings_BaseSetting_o *)pSVar14,
                                                                       pSVar9,"",30.0,34.0,
                                                                       (UnityEngine_Events_UnityAction_o *)0x0
                                                                       ,(MethodInfo *)0x0);
                                                  *local_110 = pUVar11;
                                                  Il2CppCodeGenWriteBarrier(local_110);
                                                  pSVar9 = "AimAssistOnRelease";
                                                  pSVar18 = *local_100;
                                                  if (Il2CppMethodInitialized_07547a4d == '\0') {
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&TypeInfo_UI_UIManager);
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&"SettingsPopup");
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&"MobileLayout");
                                                    il2cpp_codegen_initialize_runtime_metadata
                                                              (&"");
                                                    Il2CppMethodInitialized_07547a4d = '\x01';
                                                  }
                                                  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor
                                                      == 0) {
                                                    il2cpp_codegen_runtime_class_init
                                                              ((Il2CppClass *)TypeInfo_UI_UIManager);
                                                  }
                                                  pSVar9 = UI_UIManager__GetLocale
                                                                     ("SettingsPopup",
                                                                      "MobileLayout",pSVar9,
                                                                      "",
                                                                      "",(MethodInfo *)0x0)
                                                  ;
                                                  pMVar26 = (MethodInfo *)0x0;
                                                  pMVar27 = (MethodInfo *)"";
                                                  pUVar11 = UI_ElementFactory__CreateToggleSetting
                                                                      (parent,(UI_ElementStyle_o *)pMVar12,
                                                                       (Settings_BaseSetting_o *)pSVar18,
                                                                       pSVar9,"",30.0,34.0,
                                                                       (UnityEngine_Events_UnityAction_o *)0x0
                                                                       ,(MethodInfo *)0x0);
                                                  *local_108 = pUVar11;
                                                  Il2CppCodeGenWriteBarrier(local_108);
                                                  ppUVar1 = local_80;
                                                  if (*local_80 != (UI_MobileInputControlLayout_o *)0x0) {
                                                    pSVar20 = UI_MobileInputControlLayout__GetActionIds
                                                                        (*local_80,(MethodInfo *)0x0);
                                                    pUVar23 = 
                                                       UI_MobileLayoutEditorOverlay__CreateActionListEditor
                                                                 (__this,parent,(UI_ElementStyle_o *)pMVar12,
                                                                  pSVar20,pMVar27);
                                                    *local_190 = pUVar23;
                                                    Il2CppCodeGenWriteBarrier(local_190);
                                                    pMVar12 = (MethodInfo *)*local_50;
                                                    pUVar11 = 
                                                       UI_MobileLayoutEditorOverlay__CreatePopupChildrenEditor
                                                                 (__this,parent,style,*ppUVar1,
                                                                  (UnityEngine_GameObject_o *)pMVar12,
                                                                  *local_1a0,pMVar26);
                                                    *local_198 = pUVar11;
                                                    Il2CppCodeGenWriteBarrier(local_198);
                                                    pSVar19 = *local_1a8;
                                                    if (pSVar19 != (System_Action_o *)0x0) {
                                                      (*(code *)(pSVar19->fields).invoke_impl)
                                                                ((pSVar19->fields).method_code);
                                                      if ((TypeInfo_UI_UIManager->_2).
                                                          cctor_finished_or_no_cctor == 0) {
                                                        il2cpp_codegen_runtime_class_init
                                                                  ((Il2CppClass *)TypeInfo_UI_UIManager);
                                                      }
                                                      pUVar24 = (UI_MobileLayoutEditorOverlay_o *)
                                                                "Save";
                                                      pSVar9 = UI_UIManager__GetLocaleCommon
                                                                         ("Save",
                                                                          (MethodInfo *)0x0);
                                                      pUVar10 = local_60;
                                                      UI_MobileLayoutEditorOverlay__CreateTextButton
                                                                (pUVar24,pSVar9,(local_60->fields).BottomBar,
                                                                 (UnityEngine_Vector2_o)0x4228000042f00000,
                                                                 local_1b8,pMVar12);
                                                      pUVar24 = (UI_MobileLayoutEditorOverlay_o *)
                                                                "Cancel";
                                                      pSVar9 = UI_UIManager__GetLocaleCommon
                                                                         ("Cancel",
                                                                          (MethodInfo *)0x0);
                                                      UI_MobileLayoutEditorOverlay__CreateTextButton
                                                                (pUVar24,pSVar9,(pUVar10->fields).BottomBar,
                                                                 (UnityEngine_Vector2_o)0x4228000042f00000,
                                                                 local_1b0,pMVar12);
                                                      return;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
label_05ca2e80:
  ThrowNullReferenceException();
}


// UI.MobileLayoutEditorOverlay$$CreateSkinSetting
// il2cpp: UnityEngine_GameObject_o* UI_MobileLayoutEditorOverlay__CreateSkinSetting (UI_MobileLayoutEditorOverlay_o* __this, UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, UI_MobileInputSkinEditState_o* state, System_String_o* title, const MethodInfo* method);
// 0x5ca6140

UnityEngine_GameObject_o *
UI_MobileLayoutEditorOverlay__CreateSkinSetting
          (UI_MobileLayoutEditorOverlay_o *__this,UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,
          UI_MobileInputSkinEditState_o *state,System_String_o *title,MethodInfo *method)

{
  UI_MobileInputSkinEditState_o **targetAddress;
  UnityEngine_Vector2_Fields size;
  UnityEngine_Events_UnityEvent_o *__this_00;
  Settings_BoolSetting_o *setting;
  UI_MobileLayoutEditorOverlay___c__DisplayClass61_0_o *__this_01;
  UI_MobileLayoutEditorOverlay_o *__this_02;
  UnityEngine_UI_LayoutElement_o *pUVar1;
  UnityEngine_UI_VerticalLayoutGroup_o *__this_03;
  UnityEngine_Transform_o *pUVar2;
  UI_MobileLayoutEditorOverlay_o *pUVar3;
  UnityEngine_GameObject_o *pUVar4;
  UI_MobileLayoutEditorOverlay_o *pUVar5;
  System_String_o *pSVar6;
  UnityEngine_UI_Text_o *pUVar7;
  UnityEngine_UI_Button_o *pUVar8;
  UnityEngine_Events_UnityAction_o *__this_04;
  UnityEngine_RectTransform_c *method_00;
  MethodInfo *method_01;
  UnityEngine_Vector2_c **__this_05;
  UI_ColorPickPopup_o *colorPickPopup;
  
  if (Il2CppMethodInitialized_07547a32 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_VerticalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponentInChildren_Text)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass61_0_CreateSkinSetting_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass61_0_CreateSkinSetting_b__1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass61_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"AspectRow");
    il2cpp_codegen_initialize_runtime_metadata(&"SkinSetting");
    il2cpp_codegen_initialize_runtime_metadata(&"Clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Aspect");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"ImageRow");
    Il2CppMethodInitialized_07547a32 = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass61_0);
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  if (__this_01 != (UI_MobileLayoutEditorOverlay___c__DisplayClass61_0_o *)0x0) {
    (__this_01->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).__4__this);
    targetAddress = &(__this_01->fields).state;
    (__this_01->fields).state = state;
    __this_05 = (UnityEngine_Vector2_c **)targetAddress;
    Il2CppCodeGenWriteBarrier(targetAddress);
    pSVar6 = "SkinSetting";
    if (parent != (UnityEngine_Transform_o *)0x0) {
      method_00 = (UnityEngine_RectTransform_c *)parent->klass;
      if (method_00 != TypeInfo_UnityEngine_RectTransform) {
        __this_05 = (UnityEngine_Vector2_c **)parent;
        parent = (UnityEngine_Transform_o *)
                 UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)parent,
                            (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform)
        ;
      }
      if (Il2CppMethodInitialized_0753ecc8 == '\0') {
        __this_05 = &TypeInfo_UnityEngine_Vector2;
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
        Il2CppMethodInitialized_0753ecc8 = '\x01';
      }
      if (__this != (UI_MobileLayoutEditorOverlay_o *)0x0) {
        size = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields;
        __this_02 = (UI_MobileLayoutEditorOverlay_o *)
                    UI_MobileLayoutEditorOverlay__CreateRect
                              ((UI_MobileLayoutEditorOverlay_o *)__this_05,pSVar6,
                               (UnityEngine_RectTransform_o *)parent,(UnityEngine_Vector2_o)0x3f8000003f000000
                               ,(UnityEngine_Vector2_o)0x3f8000003f000000,(UnityEngine_Vector2_o)size,
                               (UnityEngine_Vector2_o)size,(MethodInfo *)method_00);
        if (__this_02 != (UI_MobileLayoutEditorOverlay_o *)0x0) {
          pUVar1 = UnityEngine_GameObject__AddComponent_object_
                             ((UnityEngine_GameObject_o *)__this_02,
                              (MethodInfo_353B6A0 *)
                              MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
          if (pUVar1 != (UnityEngine_UI_LayoutElement_o *)0x0) {
            (*(pUVar1->klass->vtable)._38_set_preferredHeight.methodPtr)
                      (pUVar1,78.0,(pUVar1->klass->vtable)._38_set_preferredHeight.method);
            __this_03 = UnityEngine_GameObject__AddComponent_object_
                                  ((UnityEngine_GameObject_o *)__this_02,
                                   (MethodInfo_353B6A0 *)
                                   MethodInfo_UnityEngine_GameObject_AddComponent_VerticalLayoutGroup);
            if (__this_03 != (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) {
              UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                        ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_03,4.0,(MethodInfo *)0x0);
              UnityEngine_UI_LayoutGroup__set_childAlignment
                        ((UnityEngine_UI_LayoutGroup_o *)__this_03,0,(MethodInfo *)0x0);
              UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
                        ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_03,false,(MethodInfo *)0x0
                        );
              UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth
                        ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_03,true,(MethodInfo *)0x0)
              ;
              UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlHeight
                        ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_03,true,(MethodInfo *)0x0)
              ;
              UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlWidth
                        ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_03,true,(MethodInfo *)0x0)
              ;
              pUVar3 = __this_02;
              pUVar2 = UnityEngine_GameObject__get_transform
                                 ((UnityEngine_GameObject_o *)__this_02,(MethodInfo *)0x0);
              pUVar3 = (UI_MobileLayoutEditorOverlay_o *)
                       UI_MobileLayoutEditorOverlay__CreateSkinSettingRow
                                 (pUVar3,pUVar2,"ImageRow",(MethodInfo *)&"ImageRow");
              if (pUVar3 != (UI_MobileLayoutEditorOverlay_o *)0x0) {
                pUVar2 = UnityEngine_GameObject__get_transform
                                   ((UnityEngine_GameObject_o *)pUVar3,(MethodInfo *)0x0);
                pUVar4 = UI_ElementFactory__CreateDefaultLabel(pUVar2,style,title,0,3,(MethodInfo *)0x0);
                if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                  pUVar1 = UnityEngine_GameObject__GetComponent_object_
                                     (pUVar4,(MethodInfo_353B730 *)
                                             MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
                  if (pUVar1 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                    (*(pUVar1->klass->vtable)._36_set_preferredWidth.methodPtr)
                              (pUVar1,-1.0,(pUVar1->klass->vtable)._36_set_preferredWidth.method);
                    (*(pUVar1->klass->vtable)._38_set_preferredHeight.methodPtr)
                              (pUVar1,34.0,(pUVar1->klass->vtable)._38_set_preferredHeight.method);
                    pUVar5 = (UI_MobileLayoutEditorOverlay_o *)
                             UnityEngine_GameObject__get_transform
                                       ((UnityEngine_GameObject_o *)pUVar3,(MethodInfo *)0x0);
                    if (*targetAddress != (UI_MobileInputSkinEditState_o *)0x0) {
                      colorPickPopup = (__this->fields)._colorPopup;
                      UI_ElementFactory__CreateColorSetting
                                ((UnityEngine_Transform_o *)pUVar5,style,
                                 (Settings_BaseSetting_o *)((*targetAddress)->fields).Color,
                                 (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),colorPickPopup,
                                 "",90.0,32.0,(UnityEngine_Events_UnityAction_o *)0x0,
                                 (MethodInfo *)0x0);
                      if (*targetAddress != (UI_MobileInputSkinEditState_o *)0x0) {
                        pSVar6 = UI_MobileLayoutEditorOverlay__GetSkinButtonLabel
                                           (pUVar5,((*targetAddress)->fields).Image,method_01);
                        pUVar5 = pUVar3;
                        pUVar2 = UnityEngine_GameObject__get_transform
                                           ((UnityEngine_GameObject_o *)pUVar3,(MethodInfo *)0x0);
                        pUVar4 = UI_MobileLayoutEditorOverlay__CreateTextButton
                                           (pUVar5,pSVar6,pUVar2,(UnityEngine_Vector2_o)0x42000000430c0000,
                                            (System_Action_o *)0x0,(MethodInfo *)colorPickPopup);
                        if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                          pUVar1 = UnityEngine_GameObject__GetComponent_object_
                                             (pUVar4,(MethodInfo_353B730 *)
                                                     MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement
                                             );
                          if (pUVar1 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                            (*(pUVar1->klass->vtable)._40_set_flexibleWidth.methodPtr)
                                      (pUVar1,1.0,(pUVar1->klass->vtable)._40_set_flexibleWidth.method);
                            pUVar7 = UnityEngine_GameObject__GetComponentInChildren_object_
                                               (pUVar4,(MethodInfo_353B8D0 *)
                                                       MethodInfo_UnityEngine_GameObject_GetComponentInChildren_Text
                                               );
                            (__this_01->fields).selectText = pUVar7;
                            Il2CppCodeGenWriteBarrier(&(__this_01->fields).selectText);
                            pUVar8 = UnityEngine_GameObject__GetComponent_object_
                                               (pUVar4,(MethodInfo_353B730 *)
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_Button);
                            if (pUVar8 != (UnityEngine_UI_Button_o *)0x0) {
                              __this_00 = (UnityEngine_Events_UnityEvent_o *)(pUVar8->fields).m_OnClick;
                              __this_04 = il2cpp_codegen_object_new
                                                    ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                              UnityEngine_Events_UnityAction___ctor
                                        (__this_04,(Il2CppObject *)__this_01,
                                         (intptr_t)
                                         MethodInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass61_0_CreateSkinSetting_b__0
                                         ,(MethodInfo *)0x0);
                              if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                                UnityEngine_Events_UnityEvent__AddListener
                                          (__this_00,__this_04,(MethodInfo *)0x0);
                                if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                                }
                                pSVar6 = UI_UIManager__GetLocaleCommon
                                                   ("Clear",(MethodInfo *)0x0);
                                pUVar2 = UnityEngine_GameObject__get_transform
                                                   ((UnityEngine_GameObject_o *)pUVar3,(MethodInfo *)0x0);
                                pUVar5 = (UI_MobileLayoutEditorOverlay_o *)
                                         il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
                                pUVar3 = pUVar5;
                                System_Action___ctor
                                          ((System_Action_o *)pUVar5,(Il2CppObject *)__this_01,
                                           (intptr_t)
                                           MethodInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass61_0_CreateSkinSetting_b__1
                                           ,(MethodInfo *)0x0);
                                UI_MobileLayoutEditorOverlay__CreateTextButton
                                          (pUVar3,pSVar6,pUVar2,(UnityEngine_Vector2_o)0x4200000042f00000,
                                           (System_Action_o *)pUVar5,(MethodInfo *)colorPickPopup);
                                pUVar3 = __this_02;
                                pUVar2 = UnityEngine_GameObject__get_transform
                                                   ((UnityEngine_GameObject_o *)__this_02,(MethodInfo *)0x0);
                                pUVar4 = UI_MobileLayoutEditorOverlay__CreateSkinSettingRow
                                                   (pUVar3,pUVar2,"AspectRow",
                                                    (MethodInfo *)&"AspectRow");
                                if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                                  pUVar2 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
                                  pSVar6 = "Aspect";
                                  if (*targetAddress != (UI_MobileInputSkinEditState_o *)0x0) {
                                    setting = ((*targetAddress)->fields).PreserveAspect;
                                    if (Il2CppMethodInitialized_07547a4d == '\0') {
                                      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
                                      il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup");
                                      il2cpp_codegen_initialize_runtime_metadata(&"MobileLayout");
                                      il2cpp_codegen_initialize_runtime_metadata(&"");
                                      Il2CppMethodInitialized_07547a4d = '\x01';
                                    }
                                    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                                    }
                                    pSVar6 = UI_UIManager__GetLocale
                                                       ("SettingsPopup","MobileLayout",pSVar6,
                                                        "","",
                                                        (MethodInfo *)0x0);
                                    UI_ElementFactory__CreateToggleSetting
                                              (pUVar2,style,(Settings_BaseSetting_o *)setting,pSVar6,
                                               "",30.0,30.0,
                                               (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                                    return (UnityEngine_GameObject_o *)__this_02;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
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


// UI.MobileLayoutEditorOverlay$$CreateSkinSettingRow
// il2cpp: UnityEngine_GameObject_o* UI_MobileLayoutEditorOverlay__CreateSkinSettingRow (UI_MobileLayoutEditorOverlay_o* __this, UnityEngine_Transform_o* parent, System_String_o* name, const MethodInfo* method);
// 0x5ca7360
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ca73e7: jmp 0x5ca73eb

UnityEngine_GameObject_o *
UI_MobileLayoutEditorOverlay__CreateSkinSettingRow
          (UI_MobileLayoutEditorOverlay_o *__this,UnityEngine_Transform_o *parent,System_String_o *name,
          MethodInfo *method)

{
  UnityEngine_Vector2_Fields size;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_UI_LayoutElement_o *pUVar1;
  UnityEngine_UI_HorizontalLayoutGroup_o *__this_01;
  UnityEngine_RectTransform_o *parent_00;
  UnityEngine_RectTransform_c **ppUVar2;
  UnityEngine_Vector2_c **__this_02;
  
  __this_02 = (UnityEngine_Vector2_c **)__this;
  if (Il2CppMethodInitialized_07547a33 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_HorizontalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
    ppUVar2 = &TypeInfo_UnityEngine_RectTransform;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    Il2CppMethodInitialized_07547a33 = '\x01';
    __this_02 = (UnityEngine_Vector2_c **)ppUVar2;
  }
  if (Il2CppMethodInitialized_0753ecc8 == '\0') {
    __this_02 = &TypeInfo_UnityEngine_Vector2;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_0753ecc8 = '\x01';
  }
  size = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields;
  if (parent == (UnityEngine_Transform_o *)0x0) {
    parent_00 = (UnityEngine_RectTransform_o *)0x0;
  }
  else {
    method = (MethodInfo *)parent->klass;
    parent_00 = (UnityEngine_RectTransform_o *)0x0;
    if ((UnityEngine_RectTransform_c *)method == TypeInfo_UnityEngine_RectTransform) {
      parent_00 = (UnityEngine_RectTransform_o *)parent;
    }
  }
  __this_00 = UI_MobileLayoutEditorOverlay__CreateRect
                        ((UI_MobileLayoutEditorOverlay_o *)__this_02,name,parent_00,
                         (UnityEngine_Vector2_o)0x3f80000000000000,(UnityEngine_Vector2_o)0x3f8000003f800000,
                         (UnityEngine_Vector2_o)size,(UnityEngine_Vector2_o)size,method);
  if ((__this_00 != (UnityEngine_GameObject_o *)0x0) &&
     (pUVar1 = UnityEngine_GameObject__AddComponent_object_
                         (__this_00,
                          (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement),
     pUVar1 != (UnityEngine_UI_LayoutElement_o *)0x0)) {
    (*(pUVar1->klass->vtable)._38_set_preferredHeight.methodPtr)
              (pUVar1,36.0,(pUVar1->klass->vtable)._38_set_preferredHeight.method);
    __this_01 = UnityEngine_GameObject__AddComponent_object_
                          (__this_00,
                           (MethodInfo_353B6A0 *)
                           MethodInfo_UnityEngine_GameObject_AddComponent_HorizontalLayoutGroup);
    if (__this_01 != (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) {
      UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_01,8.0,(MethodInfo *)0x0);
      UnityEngine_UI_LayoutGroup__set_childAlignment
                ((UnityEngine_UI_LayoutGroup_o *)__this_01,3,(MethodInfo *)0x0);
      UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
                ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_01,false,(MethodInfo *)0x0);
      UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth
                ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_01,false,(MethodInfo *)0x0);
      return __this_00;
    }
  }
  ThrowNullReferenceException();
}


// UI.MobileLayoutEditorOverlay$$AddSectionHeader
// il2cpp: void UI_MobileLayoutEditorOverlay__AddSectionHeader (UI_MobileLayoutEditorOverlay_o* __this, UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, System_String_o* title, const MethodInfo* method);
// 0x5ca6020

void UI_MobileLayoutEditorOverlay__AddSectionHeader
               (UI_MobileLayoutEditorOverlay_o *__this,UnityEngine_Transform_o *parent,
               UI_ElementStyle_o *style,System_String_o *title,MethodInfo *method)

{
  UI_ElementStyle_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_UI_LayoutElement_o *pUVar1;
  
  if (Il2CppMethodInitialized_07547a34 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    Il2CppMethodInitialized_07547a34 = '\x01';
  }
  UI_ElementFactory__CreateHorizontalLine(parent,style,460.0,1.0,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x12,120.0,20.0,"DefaultPanel",(MethodInfo *)0x0);
  __this_01 = UI_ElementFactory__CreateDefaultLabel(parent,__this_00,title,0,3,(MethodInfo *)0x0);
  if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
    pUVar1 = UnityEngine_GameObject__GetComponent_object_
                       (__this_01,
                        (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    if (pUVar1 != (UnityEngine_UI_LayoutElement_o *)0x0) {
      (*(pUVar1->klass->vtable)._36_set_preferredWidth.methodPtr)
                (pUVar1,460.0,(pUVar1->klass->vtable)._36_set_preferredWidth.method);
      (*(pUVar1->klass->vtable)._38_set_preferredHeight.methodPtr)
                (pUVar1,24.0,(pUVar1->klass->vtable)._38_set_preferredHeight.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MobileLayoutEditorOverlay$$GetSkinButtonLabel
// il2cpp: System_String_o* UI_MobileLayoutEditorOverlay__GetSkinButtonLabel (UI_MobileLayoutEditorOverlay_o* __this, System_String_o* image, const MethodInfo* method);
// 0x5ca74b0

System_String_o *
UI_MobileLayoutEditorOverlay__GetSkinButtonLabel
          (UI_MobileLayoutEditorOverlay_o *__this,System_String_o *image,MethodInfo *method)

{
  bool bVar1;
  System_String_o *value;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_07547a35 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileControlSkinManager);
    il2cpp_codegen_initialize_runtime_metadata(&"NoImage");
    Il2CppMethodInitialized_07547a35 = '\x01';
  }
  if ((TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager);
  }
  value = UI_MobileControlSkinManager__GetSkinDisplayName(image,(MethodInfo *)0x0);
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  pSVar2 = "NoImage";
  if (bVar1) {
    if (Il2CppMethodInitialized_07547a4d == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
      il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup");
      il2cpp_codegen_initialize_runtime_metadata(&"MobileLayout");
      il2cpp_codegen_initialize_runtime_metadata(&"");
      Il2CppMethodInitialized_07547a4d = '\x01';
    }
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar2 = UI_UIManager__GetLocale
                       ("SettingsPopup","MobileLayout",pSVar2,"",
                        "",(MethodInfo *)0x0);
    return pSVar2;
  }
  return value;
}


// UI.MobileLayoutEditorOverlay$$IsRectangleOnlyKind
// il2cpp: bool UI_MobileLayoutEditorOverlay__IsRectangleOnlyKind (UI_MobileLayoutEditorOverlay_o* __this, System_String_o* kindValue, const MethodInfo* method);
// 0x5ca75b0

bool UI_MobileLayoutEditorOverlay__IsRectangleOnlyKind
               (UI_MobileLayoutEditorOverlay_o *__this,System_String_o *kindValue,MethodInfo *method)

{
  bool bVar1;
  System_String_o *b;
  System_Enum_o local_20;
  undefined4 local_10;
  
  if (Il2CppMethodInitialized_07547a36 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputControlKind);
    Il2CppMethodInitialized_07547a36 = '\x01';
  }
  local_20.klass = (System_Enum_c *)TypeInfo_UI_MobileInputControlKind;
  local_20.monitor = (void *)0xffffffffffffffff;
  local_10 = 7;
  b = System_Enum__ToString(&local_20,(MethodInfo *)0x0);
  bVar1 = System_String__op_Equality(kindValue,b,(MethodInfo *)0x0);
  return bVar1;
}


// UI.MobileLayoutEditorOverlay$$IsActionListKind
// il2cpp: bool UI_MobileLayoutEditorOverlay__IsActionListKind (UI_MobileLayoutEditorOverlay_o* __this, System_String_o* kindValue, const MethodInfo* method);
// 0x5ca7620

bool UI_MobileLayoutEditorOverlay__IsActionListKind
               (UI_MobileLayoutEditorOverlay_o *__this,System_String_o *kindValue,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  System_String_o *pSVar3;
  System_Enum_o local_30;
  undefined4 local_20;
  
  if (Il2CppMethodInitialized_07547a37 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputControlKind);
    Il2CppMethodInitialized_07547a37 = '\x01';
  }
  local_30.klass = (System_Enum_c *)TypeInfo_UI_MobileInputControlKind;
  local_30.monitor = (void *)0xffffffffffffffff;
  local_20 = 0;
  pSVar3 = System_Enum__ToString(&local_30,(MethodInfo *)0x0);
  bVar1 = System_String__op_Equality(kindValue,pSVar3,(MethodInfo *)0x0);
  bVar2 = true;
  if (!bVar1) {
    local_30.klass = (System_Enum_c *)TypeInfo_UI_MobileInputControlKind;
    local_30.monitor = (void *)0xffffffffffffffff;
    local_20 = 1;
    pSVar3 = System_Enum__ToString(&local_30,(MethodInfo *)0x0);
    bVar1 = System_String__op_Equality(kindValue,pSVar3,(MethodInfo *)0x0);
    if (!bVar1) {
      local_30.klass = (System_Enum_c *)TypeInfo_UI_MobileInputControlKind;
      local_30.monitor = (void *)0xffffffffffffffff;
      local_20 = 4;
      pSVar3 = System_Enum__ToString(&local_30,(MethodInfo *)0x0);
      bVar2 = System_String__op_Equality(kindValue,pSVar3,(MethodInfo *)0x0);
    }
  }
  return bVar2;
}


// UI.MobileLayoutEditorOverlay$$IsSlidingContentKind
// il2cpp: bool UI_MobileLayoutEditorOverlay__IsSlidingContentKind (UI_MobileLayoutEditorOverlay_o* __this, System_String_o* kindValue, const MethodInfo* method);
// 0x5ca7700

bool UI_MobileLayoutEditorOverlay__IsSlidingContentKind
               (UI_MobileLayoutEditorOverlay_o *__this,System_String_o *kindValue,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  System_String_o *pSVar3;
  System_Enum_o SStack_28;
  undefined4 uStack_18;
  
  if (Il2CppMethodInitialized_07547a38 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputControlKind);
    Il2CppMethodInitialized_07547a38 = '\x01';
  }
  SStack_28.klass = (System_Enum_c *)TypeInfo_UI_MobileInputControlKind;
  SStack_28.monitor = (void *)0xffffffffffffffff;
  uStack_18 = 3;
  pSVar3 = System_Enum__ToString(&SStack_28,(MethodInfo *)0x0);
  bVar1 = System_String__op_Equality(kindValue,pSVar3,(MethodInfo *)0x0);
  bVar2 = true;
  if (!bVar1) {
    SStack_28.klass = (System_Enum_c *)TypeInfo_UI_MobileInputControlKind;
    SStack_28.monitor = (void *)0xffffffffffffffff;
    uStack_18 = 4;
    pSVar3 = System_Enum__ToString(&SStack_28,(MethodInfo *)0x0);
    bVar2 = System_String__op_Equality(kindValue,pSVar3,(MethodInfo *)0x0);
  }
  return bVar2;
}


// UI.MobileLayoutEditorOverlay$$CanAllowLookAreaThrough
// il2cpp: bool UI_MobileLayoutEditorOverlay__CanAllowLookAreaThrough (UI_MobileLayoutEditorOverlay_o* __this, System_String_o* kindValue, const MethodInfo* method);
// 0x5ca77a0

bool UI_MobileLayoutEditorOverlay__CanAllowLookAreaThrough
               (UI_MobileLayoutEditorOverlay_o *__this,System_String_o *kindValue,MethodInfo *method)

{
  bool bVar1;
  System_String_o *b;
  System_Enum_o local_20;
  undefined4 local_10;
  
  if (Il2CppMethodInitialized_07547a39 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputControlKind);
    Il2CppMethodInitialized_07547a39 = '\x01';
  }
  local_20.klass = (System_Enum_c *)TypeInfo_UI_MobileInputControlKind;
  local_20.monitor = (void *)0xffffffffffffffff;
  local_10 = 7;
  b = System_Enum__ToString(&local_20,(MethodInfo *)0x0);
  bVar1 = System_String__op_Inequality(kindValue,b,(MethodInfo *)0x0);
  return bVar1;
}


// UI.MobileLayoutEditorOverlay$$UsesOnSkin
// il2cpp: bool UI_MobileLayoutEditorOverlay__UsesOnSkin (UI_MobileLayoutEditorOverlay_o* __this, System_String_o* kindValue, const MethodInfo* method);
// 0x5ca7810

bool UI_MobileLayoutEditorOverlay__UsesOnSkin
               (UI_MobileLayoutEditorOverlay_o *__this,System_String_o *kindValue,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  System_String_o *pSVar3;
  System_Enum_o local_30;
  undefined4 local_20;
  
  if (Il2CppMethodInitialized_07547a3a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputControlKind);
    Il2CppMethodInitialized_07547a3a = '\x01';
  }
  local_30.klass = (System_Enum_c *)TypeInfo_UI_MobileInputControlKind;
  local_30.monitor = (void *)0xffffffffffffffff;
  local_20 = 0;
  pSVar3 = System_Enum__ToString(&local_30,(MethodInfo *)0x0);
  bVar1 = System_String__op_Equality(kindValue,pSVar3,(MethodInfo *)0x0);
  bVar2 = true;
  if (!bVar1) {
    local_30.klass = (System_Enum_c *)TypeInfo_UI_MobileInputControlKind;
    local_30.monitor = (void *)0xffffffffffffffff;
    local_20 = 1;
    pSVar3 = System_Enum__ToString(&local_30,(MethodInfo *)0x0);
    bVar1 = System_String__op_Equality(kindValue,pSVar3,(MethodInfo *)0x0);
    if (!bVar1) {
      local_30.klass = (System_Enum_c *)TypeInfo_UI_MobileInputControlKind;
      local_30.monitor = (void *)0xffffffffffffffff;
      local_20 = 2;
      pSVar3 = System_Enum__ToString(&local_30,(MethodInfo *)0x0);
      bVar1 = System_String__op_Equality(kindValue,pSVar3,(MethodInfo *)0x0);
      if (!bVar1) {
        local_30.klass = (System_Enum_c *)TypeInfo_UI_MobileInputControlKind;
        local_30.monitor = (void *)0xffffffffffffffff;
        local_20 = 3;
        pSVar3 = System_Enum__ToString(&local_30,(MethodInfo *)0x0);
        bVar1 = System_String__op_Equality(kindValue,pSVar3,(MethodInfo *)0x0);
        if (!bVar1) {
          local_30.klass = (System_Enum_c *)TypeInfo_UI_MobileInputControlKind;
          local_30.monitor = (void *)0xffffffffffffffff;
          local_20 = 4;
          pSVar3 = System_Enum__ToString(&local_30,(MethodInfo *)0x0);
          bVar1 = System_String__op_Equality(kindValue,pSVar3,(MethodInfo *)0x0);
          if (!bVar1) {
            local_30.klass = (System_Enum_c *)TypeInfo_UI_MobileInputControlKind;
            local_30.monitor = (void *)0xffffffffffffffff;
            local_20 = 5;
            pSVar3 = System_Enum__ToString(&local_30,(MethodInfo *)0x0);
            bVar2 = System_String__op_Equality(kindValue,pSVar3,(MethodInfo *)0x0);
          }
        }
      }
    }
  }
  return bVar2;
}


// UI.MobileLayoutEditorOverlay$$GetKindOptions
// il2cpp: System_String_array* UI_MobileLayoutEditorOverlay__GetKindOptions (UI_MobileLayoutEditorOverlay_o* __this, const MethodInfo* method);
// 0x5ca6790

System_String_array *
UI_MobileLayoutEditorOverlay__GetKindOptions(UI_MobileLayoutEditorOverlay_o *__this,MethodInfo *method)

{
  Il2CppType *handle;
  System_String_array *pSVar1;
  System_String_o *pSVar2;
  System_Type_o *enumType;
  System_Enum_o local_a0;
  undefined4 local_90;
  System_Enum_o local_88;
  undefined4 local_78;
  System_Enum_o local_70;
  undefined4 local_60;
  System_Enum_o local_58;
  undefined4 local_48;
  System_Enum_o local_40;
  undefined4 local_30;
  System_Enum_o local_28;
  undefined4 local_18;
  
  if (Il2CppMethodInitialized_07547a3b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UI_MobileInputControlKind);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputControlKind);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    Il2CppMethodInitialized_07547a3b = '\x01';
  }
  handle = TypeRef_UI_MobileInputControlKind;
  if ((__this->fields)._role != 5) {
    if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_075567a8);
    }
    enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
    if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_07556760);
    }
    pSVar1 = System_Enum__GetNames(enumType,(MethodInfo *)0x0);
    return pSVar1;
  }
  pSVar1 = (System_String_array *)SZArrayNew(TypeInfo_string_array,6);
  local_28.klass = (System_Enum_c *)TypeInfo_UI_MobileInputControlKind;
  local_28.monitor = (void *)0xffffffffffffffff;
  local_18 = 0;
  pSVar2 = System_Enum__ToString(&local_28,(MethodInfo *)0x0);
  if (pSVar1 == (System_String_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)pSVar1->max_length != 0) {
    pSVar1->m_Items[0] = pSVar2;
    Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
    local_40.klass = (System_Enum_c *)TypeInfo_UI_MobileInputControlKind;
    local_40.monitor = (void *)0xffffffffffffffff;
    local_30 = 1;
    pSVar2 = System_Enum__ToString(&local_40,(MethodInfo *)0x0);
    if ((pSVar1->max_length & 0xfffffffe) != 0) {
      pSVar1->m_Items[1] = pSVar2;
      Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
      local_58.klass = (System_Enum_c *)TypeInfo_UI_MobileInputControlKind;
      local_58.monitor = (void *)0xffffffffffffffff;
      local_48 = 2;
      pSVar2 = System_Enum__ToString(&local_58,(MethodInfo *)0x0);
      if (2 < (uint)pSVar1->max_length) {
        pSVar1->m_Items[2] = pSVar2;
        Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 2);
        local_70.klass = (System_Enum_c *)TypeInfo_UI_MobileInputControlKind;
        local_70.monitor = (void *)0xffffffffffffffff;
        local_60 = 4;
        pSVar2 = System_Enum__ToString(&local_70,(MethodInfo *)0x0);
        if ((pSVar1->max_length & 0xfffffffc) != 0) {
          pSVar1->m_Items[3] = pSVar2;
          Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 3);
          local_88.klass = (System_Enum_c *)TypeInfo_UI_MobileInputControlKind;
          local_88.monitor = (void *)0xffffffffffffffff;
          local_78 = 6;
          pSVar2 = System_Enum__ToString(&local_88,(MethodInfo *)0x0);
          if (4 < (uint)pSVar1->max_length) {
            pSVar1->m_Items[4] = pSVar2;
            Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 4);
            local_a0.klass = (System_Enum_c *)TypeInfo_UI_MobileInputControlKind;
            local_a0.monitor = (void *)0xffffffffffffffff;
            local_90 = 7;
            pSVar2 = System_Enum__ToString(&local_a0,(MethodInfo *)0x0);
            if (5 < (uint)pSVar1->max_length) {
              pSVar1->m_Items[5] = pSVar2;
              Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 5);
              return pSVar1;
            }
          }
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// UI.MobileLayoutEditorOverlay$$EnsureCoreControls
// il2cpp: void UI_MobileLayoutEditorOverlay__EnsureCoreControls (UI_MobileLayoutEditorOverlay_o* __this, UI_MobileInputLayout_o* layout, const MethodInfo* method);
// 0x5c9ea00
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c9eb48: jmp 0x5c9ec2c
// asm:   0x5c9eb79: jmp 0x5c9ebb9
// asm:   0x5c9eb97: jmp 0x5c9ecd1
// asm:   0x5c9eed4: jmp 0x5c9eeef

void UI_MobileLayoutEditorOverlay__EnsureCoreControls
               (UI_MobileLayoutEditorOverlay_o *__this,UI_MobileInputLayout_o *layout,MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *pIVar2;
  bool bVar3;
  int32_t iVar4;
  System_Predicate_T__o *match;
  System_Func_MobileInputControlLayout__bool__o *pSVar5;
  UI_MobileInputControlLayout_o *pUVar6;
  System_String_o *pSVar7;
  UI_MobileInputSkin_o *pUVar8;
  UI_MobileLayoutEditorOverlay___c_StaticFields *pUVar9;
  System_Predicate_MobileInputControlLayout__o **targetAddress;
  System_Collections_Generic_List_MobileInputControlLayout__o *pSVar10;
  System_Enum_o local_60;
  undefined4 local_50;
  System_Enum_o local_48;
  undefined4 local_38;
  
  if (Il2CppMethodInitialized_07547a3c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_Any_MobileInputControlLayout);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_MobileInputControlLayout_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MobileInputControlLayout_Insert);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MobileInputControlLayout_RemoveAll);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputControlKind);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputControlLayout);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputControlShape);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputSkin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Predicate_MobileInputControlLayout);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MobileLayoutEditorOverlay_c_EnsureCoreControls_b__71_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MobileLayoutEditorOverlay_c_EnsureCoreControls_b__71_1);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MobileLayoutEditorOverlay_c_EnsureCoreControls_b__71_2);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MobileLayoutEditorOverlay_c_EnsureCoreControls_b__71_3);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileLayoutEditorOverlay_c);
    il2cpp_codegen_initialize_runtime_metadata(&"LOOK");
    il2cpp_codegen_initialize_runtime_metadata(&"MOVE");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    Il2CppMethodInitialized_07547a3c = '\x01';
  }
  if (layout == (UI_MobileInputLayout_o *)0x0) {
    return;
  }
  iVar4 = UI_MobileInputLayout__GetRole(layout,(MethodInfo *)0x0);
  if (iVar4 == 0) {
    pSVar10 = (layout->fields).Controls;
    if ((TypeInfo_UI_MobileLayoutEditorOverlay_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileLayoutEditorOverlay_c);
      pUVar9 = TypeInfo_UI_MobileLayoutEditorOverlay_c->static_fields;
      match = (System_Predicate_T__o *)pUVar9->__9__71_0;
    }
    else {
      pUVar9 = TypeInfo_UI_MobileLayoutEditorOverlay_c->static_fields;
      match = (System_Predicate_T__o *)pUVar9->__9__71_0;
    }
    if (match == (System_Predicate_T__o *)0x0) {
      if ((((Il2CppClass *)TypeInfo_UI_MobileLayoutEditorOverlay_c)->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileLayoutEditorOverlay_c);
        pUVar9 = TypeInfo_UI_MobileLayoutEditorOverlay_c->static_fields;
      }
      pIVar2 = (Il2CppObject *)pUVar9->__9;
      match = (System_Predicate_T__o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_MobileInputControlLayout);
      System_Predicate_object____ctor
                ((System_Predicate_object__o *)match,pIVar2,
                 (intptr_t)MethodInfo_UI_MobileLayoutEditorOverlay_c_EnsureCoreControls_b__71_0,
                 (MethodInfo_3DC95B0 *)0x0);
      pUVar9 = TypeInfo_UI_MobileLayoutEditorOverlay_c->static_fields;
      pUVar9->__9__71_0 = (System_Predicate_MobileInputControlLayout__o *)match;
      targetAddress = &pUVar9->__9__71_0;
label_05c9ec84:
      Il2CppCodeGenWriteBarrier(targetAddress);
    }
  }
  else {
    iVar4 = UI_MobileInputLayout__GetRole(layout,(MethodInfo *)0x0);
    pSVar10 = (layout->fields).Controls;
    uVar1 = (TypeInfo_UI_MobileLayoutEditorOverlay_c->_2).cctor_finished_or_no_cctor;
    if (iVar4 != 5) {
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileLayoutEditorOverlay_c);
        pUVar9 = TypeInfo_UI_MobileLayoutEditorOverlay_c->static_fields;
        pSVar5 = pUVar9->__9__71_2;
      }
      else {
        pUVar9 = TypeInfo_UI_MobileLayoutEditorOverlay_c->static_fields;
        pSVar5 = pUVar9->__9__71_2;
      }
      if (pSVar5 == (System_Func_MobileInputControlLayout__bool__o *)0x0) {
        if ((((Il2CppClass *)TypeInfo_UI_MobileLayoutEditorOverlay_c)->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileLayoutEditorOverlay_c);
          pUVar9 = TypeInfo_UI_MobileLayoutEditorOverlay_c->static_fields;
        }
        pIVar2 = (Il2CppObject *)pUVar9->__9;
        pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_MobileInputControlLayout_bool);
        System_Func_object__bool____ctor
                  ((System_Func_object__bool__o *)pSVar5,pIVar2,
                   (intptr_t)MethodInfo_UI_MobileLayoutEditorOverlay_c_EnsureCoreControls_b__71_2,
                   (MethodInfo_4F19300 *)0x0);
        pUVar9 = TypeInfo_UI_MobileLayoutEditorOverlay_c->static_fields;
        pUVar9->__9__71_2 = pSVar5;
        Il2CppCodeGenWriteBarrier(&pUVar9->__9__71_2);
      }
      bVar3 = System_Linq_Enumerable__Any_object__34dfce0
                        ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar10,
                         (System_Func_TSource__bool__o *)pSVar5,
                         (MethodInfo_34DFCE0 *)MethodInfo_System_Linq_Enumerable_Any_MobileInputControlLayout)
      ;
      if (!bVar3) {
        pSVar10 = (layout->fields).Controls;
        pUVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MobileInputControlLayout);
        UI_MobileInputControlLayout___ctor(pUVar6,(MethodInfo *)0x0);
        if (pUVar6 == (UI_MobileInputControlLayout_o *)0x0) goto label_05c9f0ae;
        (pUVar6->fields).Label = "MOVE";
        Il2CppCodeGenWriteBarrier(&(pUVar6->fields).Label);
        (pUVar6->fields).Actions = "None";
        Il2CppCodeGenWriteBarrier(&(pUVar6->fields).Actions);
        local_48.klass = (System_Enum_c *)TypeInfo_UI_MobileInputControlKind;
        local_48.monitor = (void *)0xffffffffffffffff;
        local_38 = 6;
        pSVar7 = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
        (pUVar6->fields).Kind = pSVar7;
        Il2CppCodeGenWriteBarrier(&(pUVar6->fields).Kind);
        local_60.klass = (System_Enum_c *)TypeInfo_UI_MobileInputControlShape;
        local_60.monitor = (void *)0xffffffffffffffff;
        local_50 = 0;
        pSVar7 = System_Enum__ToString(&local_60,(MethodInfo *)0x0);
        (pUVar6->fields).Shape = pSVar7;
        Il2CppCodeGenWriteBarrier(&(pUVar6->fields).Shape);
        (pUVar6->fields).X = 0.164;
        (pUVar6->fields).Y = 0.338;
        (pUVar6->fields).Width = 0.5723;
        (pUVar6->fields).Height = 0.43456;
        (pUVar6->fields).JoystickBaseScale = 0.45;
        (pUVar6->fields).JoystickHandleScale = 0.43;
        (pUVar6->fields).JoystickReelOutRingDiameter = 380.0;
        pUVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MobileInputSkin);
        UI_MobileInputSkin___ctor(pUVar8,0.0,0.0,0.0,0.18,(MethodInfo *)0x0);
        (pUVar6->fields).Skin = pUVar8;
        Il2CppCodeGenWriteBarrier(&(pUVar6->fields).Skin);
        (pUVar6->fields).BindReelInAngle = 85.0;
        (pUVar6->fields).BindReelOutAngle = 90.0;
        if (pSVar10 == (System_Collections_Generic_List_MobileInputControlLayout__o *)0x0) goto label_05c9f0ae;
        System_Collections_Generic_List_object___Insert
                  ((System_Collections_Generic_List_object__o *)pSVar10,0,(Il2CppObject *)pUVar6,
                   (MethodInfo_395E3E0 *)
                   MethodInfo_System_Collections_Generic_List_MobileInputControlLayout_Insert);
      }
      pSVar10 = (layout->fields).Controls;
      if ((TypeInfo_UI_MobileLayoutEditorOverlay_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileLayoutEditorOverlay_c);
        pUVar9 = TypeInfo_UI_MobileLayoutEditorOverlay_c->static_fields;
        pSVar5 = pUVar9->__9__71_3;
      }
      else {
        pUVar9 = TypeInfo_UI_MobileLayoutEditorOverlay_c->static_fields;
        pSVar5 = pUVar9->__9__71_3;
      }
      if (pSVar5 == (System_Func_MobileInputControlLayout__bool__o *)0x0) {
        if ((((Il2CppClass *)TypeInfo_UI_MobileLayoutEditorOverlay_c)->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileLayoutEditorOverlay_c);
          pUVar9 = TypeInfo_UI_MobileLayoutEditorOverlay_c->static_fields;
        }
        pIVar2 = (Il2CppObject *)pUVar9->__9;
        pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_MobileInputControlLayout_bool);
        System_Func_object__bool____ctor
                  ((System_Func_object__bool__o *)pSVar5,pIVar2,
                   (intptr_t)MethodInfo_UI_MobileLayoutEditorOverlay_c_EnsureCoreControls_b__71_3,
                   (MethodInfo_4F19300 *)0x0);
        pUVar9 = TypeInfo_UI_MobileLayoutEditorOverlay_c->static_fields;
        pUVar9->__9__71_3 = pSVar5;
        Il2CppCodeGenWriteBarrier(&pUVar9->__9__71_3);
      }
      bVar3 = System_Linq_Enumerable__Any_object__34dfce0
                        ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar10,
                         (System_Func_TSource__bool__o *)pSVar5,
                         (MethodInfo_34DFCE0 *)MethodInfo_System_Linq_Enumerable_Any_MobileInputControlLayout)
      ;
      if (bVar3) {
        return;
      }
      pSVar10 = (layout->fields).Controls;
      pUVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MobileInputControlLayout);
      UI_MobileInputControlLayout___ctor(pUVar6,(MethodInfo *)0x0);
      if (pUVar6 != (UI_MobileInputControlLayout_o *)0x0) {
        (pUVar6->fields).Label = "LOOK";
        Il2CppCodeGenWriteBarrier(&(pUVar6->fields).Label);
        (pUVar6->fields).Actions = "None";
        Il2CppCodeGenWriteBarrier(&(pUVar6->fields).Actions);
        local_48.klass = (System_Enum_c *)TypeInfo_UI_MobileInputControlKind;
        local_48.monitor = (void *)0xffffffffffffffff;
        local_38 = 7;
        pSVar7 = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
        (pUVar6->fields).Kind = pSVar7;
        Il2CppCodeGenWriteBarrier(&(pUVar6->fields).Kind);
        local_60.klass = (System_Enum_c *)TypeInfo_UI_MobileInputControlShape;
        local_60.monitor = (void *)0xffffffffffffffff;
        local_50 = 0;
        pSVar7 = System_Enum__ToString(&local_60,(MethodInfo *)0x0);
        (pUVar6->fields).Shape = pSVar7;
        Il2CppCodeGenWriteBarrier(&(pUVar6->fields).Shape);
        (pUVar6->fields).X = 0.64;
        (pUVar6->fields).Y = 0.75;
        (pUVar6->fields).Width = 0.684;
        (pUVar6->fields).Height = 0.342;
        pUVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MobileInputSkin);
        UI_MobileInputSkin___ctor(pUVar8,0.0,0.0,0.0,0.1,(MethodInfo *)0x0);
        (pUVar6->fields).Skin = pUVar8;
        Il2CppCodeGenWriteBarrier(&(pUVar6->fields).Skin);
        if (pSVar10 != (System_Collections_Generic_List_MobileInputControlLayout__o *)0x0) {
          System_Collections_Generic_List_object___Insert
                    ((System_Collections_Generic_List_object__o *)pSVar10,1,(Il2CppObject *)pUVar6,
                     (MethodInfo_395E3E0 *)
                     MethodInfo_System_Collections_Generic_List_MobileInputControlLayout_Insert);
          return;
        }
      }
      goto label_05c9f0ae;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileLayoutEditorOverlay_c);
      pUVar9 = TypeInfo_UI_MobileLayoutEditorOverlay_c->static_fields;
      match = (System_Predicate_T__o *)pUVar9->__9__71_1;
    }
    else {
      pUVar9 = TypeInfo_UI_MobileLayoutEditorOverlay_c->static_fields;
      match = (System_Predicate_T__o *)pUVar9->__9__71_1;
    }
    if (match == (System_Predicate_T__o *)0x0) {
      if ((((Il2CppClass *)TypeInfo_UI_MobileLayoutEditorOverlay_c)->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileLayoutEditorOverlay_c);
        pUVar9 = TypeInfo_UI_MobileLayoutEditorOverlay_c->static_fields;
      }
      pIVar2 = (Il2CppObject *)pUVar9->__9;
      match = (System_Predicate_T__o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_MobileInputControlLayout);
      System_Predicate_object____ctor
                ((System_Predicate_object__o *)match,pIVar2,
                 (intptr_t)MethodInfo_UI_MobileLayoutEditorOverlay_c_EnsureCoreControls_b__71_1,
                 (MethodInfo_3DC95B0 *)0x0);
      pUVar9 = TypeInfo_UI_MobileLayoutEditorOverlay_c->static_fields;
      pUVar9->__9__71_1 = (System_Predicate_MobileInputControlLayout__o *)match;
      targetAddress = &pUVar9->__9__71_1;
      goto label_05c9ec84;
    }
  }
  if (pSVar10 != (System_Collections_Generic_List_MobileInputControlLayout__o *)0x0) {
    System_Collections_Generic_List_object___RemoveAll
              ((System_Collections_Generic_List_object__o *)pSVar10,match,
               (MethodInfo_395EF50 *)
               MethodInfo_System_Collections_Generic_List_MobileInputControlLayout_RemoveAll);
    return;
  }
label_05c9f0ae:
  ThrowNullReferenceException();
}


// UI.MobileLayoutEditorOverlay$$CreateModal
// il2cpp: UI_MobileLayoutEditorModal_o* UI_MobileLayoutEditorOverlay__CreateModal (UI_MobileLayoutEditorOverlay_o* __this, System_String_o* title, float width, float height, bool scrollBar, const MethodInfo* method);
// 0x5ca3700
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ca37ee: shufps xmm1, xmm1, 0x55
// asm:   0x5ca37f2: xorps xmm0, xmm0
// asm:   0x5ca37f5: ucomiss xmm1, xmm0
// asm:   0x5ca37f8: ja 0x5ca3817
// asm:   0x5ca37fa: jmp 0x5ca386f
// asm:   0x5ca3869: movss dword ptr [rsp + 8], xmm1

UI_MobileLayoutEditorModal_o *
UI_MobileLayoutEditorOverlay__CreateModal
          (UI_MobileLayoutEditorOverlay_o *__this,System_String_o *title,float width,float height,
          bool scrollBar,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  bool bVar2;
  UnityEngine_GameObject_o *__this_00;
  UI_MobileLayoutEditorModal_o *__this_01;
  float fVar3;
  float fVar4;
  UnityEngine_Rect_o UVar5;
  float local_40;
  
  if (Il2CppMethodInitialized_07547a3d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_MobileLayoutEditorModal);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Panels/HeadedPanel");
    Il2CppMethodInitialized_07547a3d = '\x01';
  }
  __this_00 = UI_ElementFactory__InstantiateAndBind
                        ((UnityEngine_Transform_o *)(__this->fields)._root,"Prefabs/Panels/HeadedPanel",
                         (MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    __this_01 = UnityEngine_GameObject__AddComponent_object_
                          (__this_00,
                           (MethodInfo_353B6A0 *)
                           MethodInfo_UnityEngine_GameObject_AddComponent_MobileLayoutEditorModal);
    pUVar1 = (__this->fields)._root;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    local_40 = height;
    if (bVar2) {
      pUVar1 = (__this->fields)._root;
      if (pUVar1 == (UnityEngine_RectTransform_o *)0x0) goto label_05ca38e0;
      UVar5 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
      }
      if (0.0 < UVar5.fields.m_Height) {
        pUVar1 = (__this->fields)._root;
        if (pUVar1 == (UnityEngine_RectTransform_o *)0x0) goto label_05ca38e0;
        UVar5 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
        }
        fVar4 = UVar5.fields.m_Height + -60.0;
        fVar3 = 260.0;
        if (260.0 <= fVar4) {
          fVar3 = fVar4;
        }
        if (fVar3 <= height) {
          local_40 = fVar3;
        }
      }
    }
    if (__this_01 != (UI_MobileLayoutEditorModal_o *)0x0) {
      (__this_01->fields)._title = title;
      Il2CppCodeGenWriteBarrier(&(__this_01->fields)._title);
      (__this_01->fields)._width = width;
      (__this_01->fields)._height = local_40;
      (__this_01->fields)._scrollBar = scrollBar;
      (*(__this_01->klass->vtable)._20_Setup.methodPtr)
                (__this_01,(UI_BasePanel_o *)0x0,(__this_01->klass->vtable)._20_Setup.method);
      UI_BasePopup__ShowImmediate((UI_BasePopup_o *)__this_01,(MethodInfo *)0x0);
      return __this_01;
    }
  }
label_05ca38e0:
  ThrowNullReferenceException();
}


// UI.MobileLayoutEditorOverlay$$EnsureColorPopupOnTop
// il2cpp: void UI_MobileLayoutEditorOverlay__EnsureColorPopupOnTop (UI_MobileLayoutEditorOverlay_o* __this, const MethodInfo* method);
// 0x5ca6a10

void UI_MobileLayoutEditorOverlay__EnsureColorPopupOnTop
               (UI_MobileLayoutEditorOverlay_o *__this,MethodInfo *method)

{
  UI_ColorPickPopup_o *pUVar1;
  bool bVar2;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Canvas_o *__this_02;
  UnityEngine_UI_GraphicRaycaster_o *x;
  
  if (Il2CppMethodInitialized_07547a3e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Canvas);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GraphicRaycaster);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Canvas);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_GraphicRaycaster);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547a3e = '\x01';
  }
  pUVar1 = (__this->fields)._colorPopup;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  pUVar1 = (__this->fields)._colorPopup;
  if (((pUVar1 != (UI_ColorPickPopup_o *)0x0) &&
      (__this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
      __this_00 != (UnityEngine_GameObject_o *)0x0)) &&
     (__this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_Transform_o *)0x0)) {
    UnityEngine_Transform__SetParent_692d510
              (__this_01,(UnityEngine_Transform_o *)(__this->fields)._root,true,(MethodInfo *)0x0);
    __this_02 = UnityEngine_GameObject__GetComponent_object_
                          (__this_00,
                           (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Canvas);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      __this_02 = UnityEngine_GameObject__AddComponent_object_
                            (__this_00,
                             (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_Canvas);
    }
    if (__this_02 != (UnityEngine_Canvas_o *)0x0) {
      UnityEngine_Canvas__set_overrideSorting(__this_02,true,(MethodInfo *)0x0);
      UnityEngine_Canvas__set_sortingOrder(__this_02,0x7532,(MethodInfo *)0x0);
      x = UnityEngine_GameObject__GetComponent_object_
                    (__this_00,
                     (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_GraphicRaycaster);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar2) {
        UnityEngine_GameObject__AddComponent_object_
                  (__this_00,
                   (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_GraphicRaycaster);
        return;
      }
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MobileLayoutEditorOverlay$$CreateActionListEditor
// il2cpp: UI_MobileLayoutActionListEditor_o* UI_MobileLayoutEditorOverlay__CreateActionListEditor (UI_MobileLayoutEditorOverlay_o* __this, UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, System_String_array* initialActionIds, const MethodInfo* method);
// 0x5ca6bc0

UI_MobileLayoutActionListEditor_o *
UI_MobileLayoutEditorOverlay__CreateActionListEditor
          (UI_MobileLayoutEditorOverlay_o *__this,UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,
          System_String_array *initialActionIds,MethodInfo *method)

{
  UnityEngine_Vector2_Fields size;
  UnityEngine_RectTransform_o *parent_00;
  UnityEngine_GameObject_o *__this_00;
  UI_MobileLayoutActionListEditor_o *__this_01;
  System_String_o *pSVar1;
  System_String_array *method_00;
  UnityEngine_Vector2_c **ppUVar2;
  MethodInfo *in_stack_ffffffffffffffc8;
  
  method_00 = initialActionIds;
  if (Il2CppMethodInitialized_07547a3f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_MobileLayoutActionListEditor);
    il2cpp_codegen_initialize_runtime_metadata(&"Actions");
    il2cpp_codegen_initialize_runtime_metadata(&"ActionList");
    Il2CppMethodInitialized_07547a3f = '\x01';
  }
  if (parent != (UnityEngine_Transform_o *)0x0) {
    parent_00 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)parent,
                           (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    if (Il2CppMethodInitialized_0753ecc8 == '\0') {
      ppUVar2 = &TypeInfo_UnityEngine_Vector2;
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_0753ecc8 = '\x01';
      parent = (UnityEngine_Transform_o *)ppUVar2;
    }
    size = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields;
    __this_00 = UI_MobileLayoutEditorOverlay__CreateRect
                          ((UI_MobileLayoutEditorOverlay_o *)parent,"ActionList",parent_00,
                           (UnityEngine_Vector2_o)0x3f8000003f000000,(UnityEngine_Vector2_o)0x3f8000003f000000
                           ,(UnityEngine_Vector2_o)size,(UnityEngine_Vector2_o)size,(MethodInfo *)method_00);
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      __this_01 = UnityEngine_GameObject__AddComponent_object_
                            (__this_00,
                             (MethodInfo_353B6A0 *)
                             MethodInfo_UnityEngine_GameObject_AddComponent_MobileLayoutActionListEditor);
      pSVar1 = "Actions";
      if (Il2CppMethodInitialized_07547a4d == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
        il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup");
        il2cpp_codegen_initialize_runtime_metadata(&"MobileLayout");
        il2cpp_codegen_initialize_runtime_metadata(&"");
        Il2CppMethodInitialized_07547a4d = '\x01';
      }
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pSVar1 = UI_UIManager__GetLocale
                         ("SettingsPopup","MobileLayout",pSVar1,"",
                          "",(MethodInfo *)0x0);
      if (__this_01 != (UI_MobileLayoutActionListEditor_o *)0x0) {
        UI_MobileLayoutActionListEditor__Setup
                  (__this_01,style,pSVar1,initialActionIds,(UnityEngine_Transform_o *)(__this->fields)._root,
                   (__this->fields)._role,in_stack_ffffffffffffffc8);
        return __this_01;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MobileLayoutEditorOverlay$$CreatePopupChildrenEditor
// il2cpp: UnityEngine_GameObject_o* UI_MobileLayoutEditorOverlay__CreatePopupChildrenEditor (UI_MobileLayoutEditorOverlay_o* __this, UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, UI_MobileInputControlLayout_o* popupControl, UnityEngine_GameObject_o* editPanel, System_Action_o* applyParentChanges, const MethodInfo* method);
// 0x5ca6d70
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ca6fe3: jmp 0x5ca7339

UnityEngine_GameObject_o *
UI_MobileLayoutEditorOverlay__CreatePopupChildrenEditor
          (UI_MobileLayoutEditorOverlay_o *__this,UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,
          UI_MobileInputControlLayout_o *popupControl,UnityEngine_GameObject_o *editPanel,
          System_Action_o *applyParentChanges,MethodInfo *method)

{
  UI_MobileInputControlLayout_o **targetAddress;
  UnityEngine_Vector2_Fields size;
  System_Collections_Generic_List_MobileInputControlLayout__o *pSVar1;
  UI_MobileLayoutEditorOverlay___c__DisplayClass75_0_o *__this_00;
  UnityEngine_RectTransform_o *pUVar2;
  UI_MobileLayoutEditorOverlay_o *__this_01;
  UnityEngine_UI_VerticalLayoutGroup_o *__this_02;
  UnityEngine_UI_LayoutElement_o *pUVar3;
  UnityEngine_GameObject_o *__this_03;
  UnityEngine_UI_HorizontalLayoutGroup_o *__this_04;
  System_String_o *pSVar4;
  UI_MobileLayoutEditorOverlay_o *__this_05;
  UI_MobileInputControlLayout_o *pUVar5;
  UI_MobileInputControlLayout_o *child;
  UnityEngine_UI_LayoutElement_c *method_00;
  MethodInfo *pMVar6;
  int32_t index;
  UnityEngine_GameObject_o **targetAddress_00;
  UnityEngine_Vector2_c **ppUVar7;
  UI_MobileLayoutEditorOverlay_o *pUVar8;
  float fVar9;
  MethodInfo *in_stack_ffffffffffffff90;
  
  pUVar5 = popupControl;
  if (Il2CppMethodInitialized_07547a40 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_HorizontalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_VerticalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MobileInputControlLayout_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MobileInputControlLayout_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass75_0_CreatePopupChildrenEditor_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass75_0);
    il2cpp_codegen_initialize_runtime_metadata(&"PopupChildren");
    il2cpp_codegen_initialize_runtime_metadata(&"AddChild");
    il2cpp_codegen_initialize_runtime_metadata(&"Header");
    Il2CppMethodInitialized_07547a40 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass75_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (UI_MobileLayoutEditorOverlay___c__DisplayClass75_0_o *)0x0) {
    (__this_00->fields).applyParentChanges = applyParentChanges;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).applyParentChanges);
    targetAddress = &(__this_00->fields).popupControl;
    (__this_00->fields).popupControl = popupControl;
    Il2CppCodeGenWriteBarrier(targetAddress);
    (__this_00->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
    targetAddress_00 = &(__this_00->fields).editPanel;
    (__this_00->fields).editPanel = editPanel;
    Il2CppCodeGenWriteBarrier(targetAddress_00);
    if (parent != (UnityEngine_Transform_o *)0x0) {
      pUVar2 = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)parent,
                          (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
      if (Il2CppMethodInitialized_0753ecc8 == '\0') {
        ppUVar7 = &TypeInfo_UnityEngine_Vector2;
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
        Il2CppMethodInitialized_0753ecc8 = '\x01';
        parent = (UnityEngine_Transform_o *)ppUVar7;
      }
      size = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields;
      __this_01 = (UI_MobileLayoutEditorOverlay_o *)
                  UI_MobileLayoutEditorOverlay__CreateRect
                            ((UI_MobileLayoutEditorOverlay_o *)parent,"PopupChildren",pUVar2,
                             (UnityEngine_Vector2_o)0x3f8000003f000000,
                             (UnityEngine_Vector2_o)0x3f8000003f000000,(UnityEngine_Vector2_o)size,
                             (UnityEngine_Vector2_o)size,(MethodInfo *)pUVar5);
      if ((__this_01 != (UI_MobileLayoutEditorOverlay_o *)0x0) &&
         (__this_02 = UnityEngine_GameObject__AddComponent_object_
                                ((UnityEngine_GameObject_o *)__this_01,
                                 (MethodInfo_353B6A0 *)
                                 MethodInfo_UnityEngine_GameObject_AddComponent_VerticalLayoutGroup),
         __this_02 != (UnityEngine_UI_VerticalLayoutGroup_o *)0x0)) {
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                  ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_02,6.0,(MethodInfo *)0x0);
        UnityEngine_UI_LayoutGroup__set_childAlignment
                  ((UnityEngine_UI_LayoutGroup_o *)__this_02,0,(MethodInfo *)0x0);
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlWidth
                  ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_02,true,(MethodInfo *)0x0);
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth
                  ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_02,true,(MethodInfo *)0x0);
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
                  ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_02,false,(MethodInfo *)0x0);
        pUVar3 = UnityEngine_GameObject__AddComponent_object_
                           ((UnityEngine_GameObject_o *)__this_01,
                            (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement
                           );
        if (*targetAddress != (UI_MobileInputControlLayout_o *)0x0) {
          pSVar1 = ((*targetAddress)->fields).Children;
          if (pSVar1 == (System_Collections_Generic_List_MobileInputControlLayout__o *)0x0) {
            fVar9 = 48.0;
          }
          else {
            fVar9 = (float)(pSVar1->fields)._size * 40.0 + 48.0;
          }
          if (pUVar3 != (UnityEngine_UI_LayoutElement_o *)0x0) {
            method_00 = pUVar3->klass;
            (*(method_00->vtable)._38_set_preferredHeight.methodPtr)
                      (pUVar3,fVar9,(method_00->vtable)._38_set_preferredHeight.method);
            ppUVar7 = (UnityEngine_Vector2_c **)__this_01;
            pUVar2 = UnityEngine_GameObject__GetComponent_object_
                               ((UnityEngine_GameObject_o *)__this_01,
                                (MethodInfo_353B730 *)
                                MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
            if (Il2CppMethodInitialized_0753ecc8 == '\0') {
              ppUVar7 = &TypeInfo_UnityEngine_Vector2;
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
              Il2CppMethodInitialized_0753ecc8 = '\x01';
            }
            __this_03 = UI_MobileLayoutEditorOverlay__CreateRect
                                  ((UI_MobileLayoutEditorOverlay_o *)ppUVar7,"Header",pUVar2,
                                   (UnityEngine_Vector2_o)0x3f8000003f000000,
                                   (UnityEngine_Vector2_o)0x3f8000003f000000,
                                   (UnityEngine_Vector2_o)0x4220000000000000,
                                   (UnityEngine_Vector2_o)
                                   (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                                   (MethodInfo *)method_00);
            if ((__this_03 != (UnityEngine_GameObject_o *)0x0) &&
               (pUVar3 = UnityEngine_GameObject__AddComponent_object_
                                   (__this_03,
                                    (MethodInfo_353B6A0 *)
                                    MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement),
               pUVar3 != (UnityEngine_UI_LayoutElement_o *)0x0)) {
              (*(pUVar3->klass->vtable)._38_set_preferredHeight.methodPtr)
                        (pUVar3,40.0,(pUVar3->klass->vtable)._38_set_preferredHeight.method);
              __this_04 = UnityEngine_GameObject__AddComponent_object_
                                    (__this_03,
                                     (MethodInfo_353B6A0 *)
                                     MethodInfo_UnityEngine_GameObject_AddComponent_HorizontalLayoutGroup);
              if (__this_04 != (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) {
                UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                          ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_04,10.0,
                           (MethodInfo *)0x0);
                UnityEngine_UI_LayoutGroup__set_childAlignment
                          ((UnityEngine_UI_LayoutGroup_o *)__this_04,3,(MethodInfo *)0x0);
                UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth
                          ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_04,false,
                           (MethodInfo *)0x0);
                pUVar2 = UnityEngine_GameObject__GetComponent_object_
                                   (__this_03,
                                    (MethodInfo_353B730 *)
                                    MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
                pSVar4 = "PopupChildren";
                if (Il2CppMethodInitialized_07547a4d == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
                  il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup");
                  il2cpp_codegen_initialize_runtime_metadata(&"MobileLayout");
                  il2cpp_codegen_initialize_runtime_metadata(&"");
                  Il2CppMethodInitialized_07547a4d = '\x01';
                }
                if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                }
                pMVar6 = (MethodInfo *)"";
                pUVar8 = (UI_MobileLayoutEditorOverlay_o *)"SettingsPopup";
                pSVar4 = UI_UIManager__GetLocale
                                   ("SettingsPopup","MobileLayout",pSVar4,"",
                                    "",(MethodInfo *)0x0);
                UI_MobileLayoutEditorOverlay__AddModalLabel(pUVar8,pUVar2,pSVar4,pMVar6);
                pSVar4 = "AddChild";
                if (Il2CppMethodInitialized_07547a4d == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
                  il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup");
                  il2cpp_codegen_initialize_runtime_metadata(&"MobileLayout");
                  il2cpp_codegen_initialize_runtime_metadata(&"");
                  Il2CppMethodInitialized_07547a4d = '\x01';
                }
                if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                }
                pMVar6 = (MethodInfo *)"";
                pSVar4 = UI_UIManager__GetLocale
                                   ("SettingsPopup","MobileLayout",pSVar4,"",
                                    "",(MethodInfo *)0x0);
                pUVar2 = UnityEngine_GameObject__GetComponent_object_
                                   (__this_03,
                                    (MethodInfo_353B730 *)
                                    MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
                __this_05 = (UI_MobileLayoutEditorOverlay_o *)
                            il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
                pUVar8 = __this_05;
                System_Action___ctor
                          ((System_Action_o *)__this_05,(Il2CppObject *)__this_00,
                           (intptr_t)
                           MethodInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass75_0_CreatePopupChildrenEditor_b__0
                           ,(MethodInfo *)0x0);
                UI_MobileLayoutEditorOverlay__CreateTextButton
                          (pUVar8,pSVar4,(UnityEngine_Transform_o *)pUVar2,
                           (UnityEngine_Vector2_o)0x4208000043020000,(System_Action_o *)__this_05,pMVar6);
                pUVar5 = (__this_00->fields).popupControl;
                if (pUVar5 != (UI_MobileInputControlLayout_o *)0x0) {
                  if ((pUVar5->fields).Children ==
                      (System_Collections_Generic_List_MobileInputControlLayout__o *)0x0) {
                    return (UnityEngine_GameObject_o *)__this_01;
                  }
                  index = 0;
                  while (pSVar1 = (pUVar5->fields).Children,
                        pSVar1 != (System_Collections_Generic_List_MobileInputControlLayout__o *)0x0) {
                    if ((pSVar1->fields)._size <= index) {
                      return (UnityEngine_GameObject_o *)__this_01;
                    }
                    pUVar2 = UnityEngine_GameObject__GetComponent_object_
                                       ((UnityEngine_GameObject_o *)__this_01,
                                        (MethodInfo_353B730 *)
                                        MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
                    pUVar5 = *targetAddress;
                    if ((pUVar5 == (UI_MobileInputControlLayout_o *)0x0) ||
                       (pSVar1 = (pUVar5->fields).Children,
                       pSVar1 == (System_Collections_Generic_List_MobileInputControlLayout__o *)0x0)) break;
                    child = System_Collections_Generic_List_object___get_Item
                                      ((System_Collections_Generic_List_object__o *)pSVar1,index,
                                       (MethodInfo_395CF20 *)
                                       MethodInfo_System_Collections_Generic_List_MobileInputControlLayout_get_Item
                                      );
                    UI_MobileLayoutEditorOverlay__CreatePopupChildRow
                              (__this,pUVar2,pUVar5,child,index,*targetAddress_00,
                               (__this_00->fields).applyParentChanges,in_stack_ffffffffffffff90);
                    index = index + 1;
                    pUVar5 = *targetAddress;
                    if (pUVar5 == (UI_MobileInputControlLayout_o *)0x0) break;
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


// UI.MobileLayoutEditorOverlay$$CreatePopupChildRow
// il2cpp: void UI_MobileLayoutEditorOverlay__CreatePopupChildRow (UI_MobileLayoutEditorOverlay_o* __this, UnityEngine_RectTransform_o* parent, UI_MobileInputControlLayout_o* popupControl, UI_MobileInputControlLayout_o* child, int32_t index, UnityEngine_GameObject_o* editPanel, System_Action_o* applyParentChanges, const MethodInfo* method);
// 0x5ca7e60

void UI_MobileLayoutEditorOverlay__CreatePopupChildRow
               (UI_MobileLayoutEditorOverlay_o *__this,UnityEngine_RectTransform_o *parent,
               UI_MobileInputControlLayout_o *popupControl,UI_MobileInputControlLayout_o *child,int32_t index,
               UnityEngine_GameObject_o *editPanel,System_Action_o *applyParentChanges,MethodInfo *method)

{
  UI_MobileInputControlLayout_o **targetAddress;
  bool bVar1;
  UI_MobileLayoutEditorOverlay___c__DisplayClass76_0_o *__this_00;
  System_String_o *pSVar2;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_UI_LayoutElement_o *pUVar3;
  UnityEngine_UI_HorizontalLayoutGroup_o *__this_02;
  UnityEngine_RectTransform_o *pUVar4;
  UI_ElementStyle_o *__this_03;
  UnityEngine_GameObject_o *__this_04;
  UI_MobileLayoutEditorOverlay_o *pUVar5;
  System_String_o **ppSVar6;
  UnityEngine_Vector2_c **__this_05;
  UI_MobileLayoutEditorOverlay_o *pUVar7;
  MethodInfo *method_00;
  int32_t local_34;
  
  if (Il2CppMethodInitialized_07547a41 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_HorizontalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass76_0_CreatePopupChildRow_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass76_0_CreatePopupChildRow_b__1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass76_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"Child");
    il2cpp_codegen_initialize_runtime_metadata(&"Delete");
    il2cpp_codegen_initialize_runtime_metadata(&"Edit");
    il2cpp_codegen_initialize_runtime_metadata(&"BTN");
    Il2CppMethodInitialized_07547a41 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass76_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (UI_MobileLayoutEditorOverlay___c__DisplayClass76_0_o *)0x0) {
    (__this_00->fields).applyParentChanges = applyParentChanges;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).applyParentChanges);
    (__this_00->fields).editPanel = editPanel;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).editPanel);
    (__this_00->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
    targetAddress = &(__this_00->fields).child;
    (__this_00->fields).child = child;
    Il2CppCodeGenWriteBarrier(targetAddress);
    (__this_00->fields).popupControl = popupControl;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).popupControl);
    pSVar2 = System_Int32__ToString(&local_34,(MethodInfo *)0x0);
    ppSVar6 = &"Child";
    __this_05 = (UnityEngine_Vector2_c **)"Child";
    pSVar2 = System_String__Concat_52f0320("Child",pSVar2,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_0753ecc8 == '\0') {
      __this_05 = &TypeInfo_UnityEngine_Vector2;
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_0753ecc8 = '\x01';
    }
    __this_01 = UI_MobileLayoutEditorOverlay__CreateRect
                          ((UI_MobileLayoutEditorOverlay_o *)__this_05,pSVar2,parent,
                           (UnityEngine_Vector2_o)0x3f8000003f000000,(UnityEngine_Vector2_o)0x3f8000003f000000
                           ,(UnityEngine_Vector2_o)0x4210000000000000,
                           (UnityEngine_Vector2_o)
                           (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                           (MethodInfo *)ppSVar6);
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      pUVar3 = UnityEngine_GameObject__AddComponent_object_
                         (__this_01,
                          (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
      if (pUVar3 != (UnityEngine_UI_LayoutElement_o *)0x0) {
        (*(pUVar3->klass->vtable)._38_set_preferredHeight.methodPtr)
                  (pUVar3,36.0,(pUVar3->klass->vtable)._38_set_preferredHeight.method);
        __this_02 = UnityEngine_GameObject__AddComponent_object_
                              (__this_01,
                               (MethodInfo_353B6A0 *)
                               MethodInfo_UnityEngine_GameObject_AddComponent_HorizontalLayoutGroup);
        if (__this_02 != (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) {
          UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                    ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_02,8.0,(MethodInfo *)0x0);
          UnityEngine_UI_LayoutGroup__set_childAlignment
                    ((UnityEngine_UI_LayoutGroup_o *)__this_02,3,(MethodInfo *)0x0);
          UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth
                    ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_02,false,(MethodInfo *)0x0);
          pUVar4 = UnityEngine_GameObject__GetComponent_object_
                             (__this_01,
                              (MethodInfo_353B730 *)
                              MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
          __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
          UI_ElementStyle___ctor(__this_03,0x12,120.0,20.0,"DefaultPanel",(MethodInfo *)0x0);
          if (*targetAddress != (UI_MobileInputControlLayout_o *)0x0) {
            bVar1 = System_String__IsNullOrEmpty(((*targetAddress)->fields).Label,(MethodInfo *)0x0);
            if (bVar1) {
              ppSVar6 = &"BTN";
            }
            else {
              if (*targetAddress == (UI_MobileInputControlLayout_o *)0x0) goto label_05ca82be;
              ppSVar6 = &((*targetAddress)->fields).Label;
            }
            method_00 = (MethodInfo *)0x3;
            __this_04 = UI_ElementFactory__CreateDefaultLabel
                                  ((UnityEngine_Transform_o *)pUVar4,__this_03,*ppSVar6,0,3,(MethodInfo *)0x0)
            ;
            if (__this_04 != (UnityEngine_GameObject_o *)0x0) {
              pUVar3 = UnityEngine_GameObject__GetComponent_object_
                                 (__this_04,
                                  (MethodInfo_353B730 *)
                                  MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar1 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
              ;
              if (bVar1) {
                if (pUVar3 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_05ca82be;
                (*(pUVar3->klass->vtable)._36_set_preferredWidth.methodPtr)
                          (pUVar3,220.0,(pUVar3->klass->vtable)._36_set_preferredWidth.method);
              }
              if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
              }
              pSVar2 = UI_UIManager__GetLocaleCommon("Edit",(MethodInfo *)0x0);
              pUVar4 = UnityEngine_GameObject__GetComponent_object_
                                 (__this_01,
                                  (MethodInfo_353B730 *)
                                  MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
              pUVar5 = (UI_MobileLayoutEditorOverlay_o *)
                       il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
              pUVar7 = pUVar5;
              System_Action___ctor
                        ((System_Action_o *)pUVar5,(Il2CppObject *)__this_00,
                         (intptr_t)
                         MethodInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass76_0_CreatePopupChildRow_b__0,
                         (MethodInfo *)0x0);
              UI_MobileLayoutEditorOverlay__CreateTextButton
                        (pUVar7,pSVar2,(UnityEngine_Transform_o *)pUVar4,
                         (UnityEngine_Vector2_o)0x4200000042a00000,(System_Action_o *)pUVar5,method_00);
              pSVar2 = UI_UIManager__GetLocaleCommon("Delete",(MethodInfo *)0x0);
              pUVar4 = UnityEngine_GameObject__GetComponent_object_
                                 (__this_01,
                                  (MethodInfo_353B730 *)
                                  MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
              pUVar5 = (UI_MobileLayoutEditorOverlay_o *)
                       il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
              pUVar7 = pUVar5;
              System_Action___ctor
                        ((System_Action_o *)pUVar5,(Il2CppObject *)__this_00,
                         (intptr_t)
                         MethodInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass76_0_CreatePopupChildRow_b__1,
                         (MethodInfo *)0x0);
              UI_MobileLayoutEditorOverlay__CreateTextButton
                        (pUVar7,pSVar2,(UnityEngine_Transform_o *)pUVar4,
                         (UnityEngine_Vector2_o)0x4200000042a00000,(System_Action_o *)pUVar5,method_00);
              return;
            }
          }
        }
      }
    }
  }
label_05ca82be:
  ThrowNullReferenceException();
}


// UI.MobileLayoutEditorOverlay$$CreateDefaultPopupChild
// il2cpp: UI_MobileInputControlLayout_o* UI_MobileLayoutEditorOverlay__CreateDefaultPopupChild (UI_MobileLayoutEditorOverlay_o* __this, int32_t index, const MethodInfo* method);
// 0x5ca82e0

UI_MobileInputControlLayout_o *
UI_MobileLayoutEditorOverlay__CreateDefaultPopupChild
          (UI_MobileLayoutEditorOverlay_o *__this,int32_t index,MethodInfo *method)

{
  UI_MobileInputControlLayout_o *__this_00;
  System_String_o *pSVar1;
  float fVar2;
  float fVar3;
  System_Enum_o local_40;
  undefined4 local_30;
  System_Enum_o local_28;
  undefined4 local_18;
  
  if (Il2CppMethodInitialized_07547a42 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputControlKind);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputControlLayout);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputControlShape);
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"BTN");
    Il2CppMethodInitialized_07547a42 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MobileInputControlLayout);
  UI_MobileInputControlLayout___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 == (UI_MobileInputControlLayout_o *)0x0) {
    ThrowNullReferenceException();
  }
  fVar2 = (float)index * -3.1415927 * 0.25 + 1.5707964;
  (__this_00->fields).Label = "BTN";
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).Label);
  local_28.klass = (System_Enum_c *)TypeInfo_UI_MobileInputControlKind;
  local_28.monitor = (void *)0xffffffffffffffff;
  local_18 = 0;
  pSVar1 = System_Enum__ToString(&local_28,(MethodInfo *)0x0);
  (__this_00->fields).Kind = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).Kind);
  (__this_00->fields).Actions = "None";
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).Actions);
  local_40.klass = (System_Enum_c *)TypeInfo_UI_MobileInputControlShape;
  local_40.monitor = (void *)0xffffffffffffffff;
  local_30 = 1;
  pSVar1 = System_Enum__ToString(&local_40,(MethodInfo *)0x0);
  (__this_00->fields).Shape = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).Shape);
  fVar3 = cosf(fVar2);
  (__this_00->fields).X = fVar3 * 0.12;
  fVar2 = sinf(fVar2);
  (__this_00->fields).Y = fVar2 * 0.12;
  (__this_00->fields).Width = 0.075;
  (__this_00->fields).Height = 0.075;
  return __this_00;
}


// UI.MobileLayoutEditorOverlay$$RegisterDropdown
// il2cpp: void UI_MobileLayoutEditorOverlay__RegisterDropdown (UI_MobileLayoutEditorOverlay_o* __this, UnityEngine_GameObject_o* dropdownObject, const MethodInfo* method);
// 0x5ca48f0

void UI_MobileLayoutEditorOverlay__RegisterDropdown
               (UI_MobileLayoutEditorOverlay_o *__this,UnityEngine_GameObject_o *dropdownObject,
               MethodInfo *method)

{
  bool bVar1;
  UI_DropdownSettingElement_o *dropdown;
  UI_MobileLayoutDropdownOverlay_o *__this_00;
  MethodInfo *in_RCX;
  
  if (Il2CppMethodInitialized_07547a43 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_MobileLayoutDropdownOverlay);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_DropdownSettingElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547a43 = '\x01';
  }
  if (dropdownObject != (UnityEngine_GameObject_o *)0x0) {
    dropdown = UnityEngine_GameObject__GetComponent_object_
                         (dropdownObject,
                          (MethodInfo_353B730 *)
                          MethodInfo_UnityEngine_GameObject_GetComponent_DropdownSettingElement);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)dropdown,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    __this_00 = UnityEngine_GameObject__AddComponent_object_
                          (dropdownObject,
                           (MethodInfo_353B6A0 *)
                           MethodInfo_UnityEngine_GameObject_AddComponent_MobileLayoutDropdownOverlay);
    if (__this_00 != (UI_MobileLayoutDropdownOverlay_o *)0x0) {
      UI_MobileLayoutDropdownOverlay__Setup
                (__this_00,dropdown,(UnityEngine_Transform_o *)(__this->fields)._root,in_RCX);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MobileLayoutEditorOverlay$$Close
// il2cpp: void UI_MobileLayoutEditorOverlay__Close (UI_MobileLayoutEditorOverlay_o* __this, const MethodInfo* method);
// 0x5ca85f0

void UI_MobileLayoutEditorOverlay__Close(UI_MobileLayoutEditorOverlay_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  
  if (Il2CppMethodInitialized_07547a44 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MobileLayoutEditorOverlay_DestroyModals_MobileLayoutActionPickerModal);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MobileLayoutEditorOverlay_DestroyModals_MobileLayoutEditorModal);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MobileLayoutEditorOverlay_DestroyModals_MobileLayoutSkinPickerModal);
    Il2CppMethodInitialized_07547a44 = '\x01';
  }
  UI_MobileLayoutEditorOverlay__DestroyModals_object_
            (__this,(MethodInfo_358DDC0 *)
                    MethodInfo_UI_MobileLayoutEditorOverlay_DestroyModals_MobileLayoutEditorModal);
  UI_MobileLayoutEditorOverlay__DestroyModals_object_
            (__this,(MethodInfo_358DDC0 *)
                    MethodInfo_UI_MobileLayoutEditorOverlay_DestroyModals_MobileLayoutSkinPickerModal);
  UI_MobileLayoutEditorOverlay__DestroyModals_object_
            (__this,(MethodInfo_358DDC0 *)
                    MethodInfo_UI_MobileLayoutEditorOverlay_DestroyModals_MobileLayoutActionPickerModal);
  __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
  return;
}


// UI.MobileLayoutEditorOverlay$$DestroyModals<object>
// il2cpp: void UI_MobileLayoutEditorOverlay__DestroyModals_object_ (UI_MobileLayoutEditorOverlay_o* __this, const MethodInfo_358DDC0* method);
// 0x368ddc0

void UI_MobileLayoutEditorOverlay__DestroyModals_object_
               (UI_MobileLayoutEditorOverlay_o *__this,MethodInfo_358DDC0 *method)

{
  UnityEngine_RectTransform_o *__this_00;
  uint uVar1;
  System_Object_array *pSVar2;
  UnityEngine_Object_o *obj;
  uint uVar3;
  
  if (method->rgctx_data == (MethodInfo_358DDC0_RGCTXs *)0x0) {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    if (method->rgctx_data == (MethodInfo_358DDC0_RGCTXs *)0x0) {
      il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
    }
  }
  __this_00 = (__this->fields)._root;
  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
    pSVar2 = UnityEngine_Component__GetComponentsInChildren_object_
                       ((UnityEngine_Component_o *)__this_00,true,
                        (MethodInfo_34B1260 *)
                        method->rgctx_data->_0_UnityEngine_Component_GetComponentsInChildren_T_);
    if (pSVar2 != (System_Object_array *)0x0) {
      uVar1 = (uint)pSVar2->max_length;
      if (0 < (int)uVar1) {
        uVar3 = 0;
        do {
          if (uVar1 <= uVar3) {
            ThrowIndexOutOfRangeException();
          }
          if ((UnityEngine_Component_o *)pSVar2->m_Items[(int)uVar3] == (UnityEngine_Component_o *)0x0)
          goto label_0368de84;
          obj = (UnityEngine_Object_o *)
                UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)pSVar2->m_Items[(int)uVar3],(MethodInfo *)0x0);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          UnityEngine_Object__Destroy_69214e0(obj,(MethodInfo *)0x0);
          uVar3 = uVar3 + 1;
          uVar1 = (uint)pSVar2->max_length;
        } while ((int)uVar3 < (int)uVar1);
      }
      return;
    }
  }
label_0368de84:
  ThrowNullReferenceException();
}


// UI.MobileLayoutEditorOverlay$$OnDisable
// il2cpp: void UI_MobileLayoutEditorOverlay__OnDisable (UI_MobileLayoutEditorOverlay_o* __this, const MethodInfo* method);
// 0x5ca8680

void UI_MobileLayoutEditorOverlay__OnDisable(UI_MobileLayoutEditorOverlay_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07547a45 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileInputBridge);
    Il2CppMethodInitialized_07547a45 = '\x01';
  }
  if ((TypeInfo_Settings_MobileInputBridge->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MobileInputBridge);
  }
  Settings_MobileInputBridge__ClearState((MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
  }
  Gisketch_Aottg2UI_Actions_GisketchInputCapture__BlockThisFrame((MethodInfo *)0x0);
  UI_MobileLayoutEditorOverlay__RestoreObject(__this,method);
  return;
}


// UI.MobileLayoutEditorOverlay$$OnDestroy
// il2cpp: void UI_MobileLayoutEditorOverlay__OnDestroy (UI_MobileLayoutEditorOverlay_o* __this, const MethodInfo* method);
// 0x5ca8700

void UI_MobileLayoutEditorOverlay__OnDestroy(UI_MobileLayoutEditorOverlay_o *__this,MethodInfo *method)

{
  UI_MobileLayoutEditorOverlay_o *x;
  bool bVar1;
  
  if (Il2CppMethodInitialized_07547a46 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileLayoutEditorOverlay);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547a46 = '\x01';
  }
  UI_MobileLayoutEditorOverlay__RestoreObject(__this,method);
  x = TypeInfo_UI_MobileLayoutEditorOverlay->static_fields->_instance;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
  if (bVar1) {
    TypeInfo_UI_MobileLayoutEditorOverlay->static_fields->_instance = (UI_MobileLayoutEditorOverlay_o *)0x0;
    Il2CppCodeGenWriteBarrier(&TypeInfo_UI_MobileLayoutEditorOverlay->static_fields->_instance);
    return;
  }
  return;
}


// UI.MobileLayoutEditorOverlay$$SetReturnVisible
// il2cpp: void UI_MobileLayoutEditorOverlay__SetReturnVisible (UI_MobileLayoutEditorOverlay_o* __this, bool visible, const MethodInfo* method);
// 0x5ca5e10

void UI_MobileLayoutEditorOverlay__SetReturnVisible
               (UI_MobileLayoutEditorOverlay_o *__this,bool visible,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_07547a47 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547a47 = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._returnButton;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    __this_00 = (__this->fields)._returnButton;
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_GameObject__SetActive(__this_00,visible,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UI.MobileLayoutEditorOverlay$$AssignLayoutIds
// il2cpp: void UI_MobileLayoutEditorOverlay__AssignLayoutIds (UI_MobileLayoutEditorOverlay_o* __this, const MethodInfo* method);
// 0x5c9f0c0

void UI_MobileLayoutEditorOverlay__AssignLayoutIds(UI_MobileLayoutEditorOverlay_o *__this,MethodInfo *method)

{
  UI_MobileInputLayout_o *__this_00;
  
  __this_00 = (__this->fields)._layout;
  if (__this_00 == (UI_MobileInputLayout_o *)0x0) {
    return;
  }
  UI_MobileInputLayout__AssignRuntimeIds(__this_00,(MethodInfo *)0x0);
  return;
}


// UI.MobileLayoutEditorOverlay$$GetParentControl
// il2cpp: UI_MobileInputControlLayout_o* UI_MobileLayoutEditorOverlay__GetParentControl (UI_MobileLayoutEditorOverlay_o* __this, UI_MobileInputControlLayout_o* control, const MethodInfo* method);
// 0x5c9ffa0

UI_MobileInputControlLayout_o *
UI_MobileLayoutEditorOverlay__GetParentControl
          (UI_MobileLayoutEditorOverlay_o *__this,UI_MobileInputControlLayout_o *control,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar1;
  UI_MobileInputControlLayout_o *pUStack_18;
  
  if (Il2CppMethodInitialized_07547a48 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_MobileInputControlLayout_MobileInputControlLayout_TryGetVa
              );
    Il2CppMethodInitialized_07547a48 = '\x01';
  }
  pUStack_18 = (UI_MobileInputControlLayout_o *)0x0;
  if (control != (UI_MobileInputControlLayout_o *)0x0) {
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._controlParents;
    if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (__this_00,(Il2CppObject *)control,(Il2CppObject **)&pUStack_18,
                       (MethodInfo_4AAF440 *)
                       MethodInfo_System_Collections_Generic_Dictionary_MobileInputControlLayout_MobileInputControlLayout_TryGetVa
                      );
    if (bVar1) {
      return pUStack_18;
    }
  }
  return (UI_MobileInputControlLayout_o *)0x0;
}


// UI.MobileLayoutEditorOverlay$$GetControlPosition
// il2cpp: UnityEngine_Vector2_o UI_MobileLayoutEditorOverlay__GetControlPosition (UI_MobileLayoutEditorOverlay_o* __this, UI_MobileInputControlLayout_o* control, UI_MobileInputControlLayout_o* parentControl, const MethodInfo* method);
// 0x5c9f6b0

UnityEngine_Vector2_o
UI_MobileLayoutEditorOverlay__GetControlPosition
          (UI_MobileLayoutEditorOverlay_o *__this,UI_MobileInputControlLayout_o *control,
          UI_MobileInputControlLayout_o *parentControl,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  UnityEngine_RectTransform_o *__this_00;
  float fVar4;
  UnityEngine_Vector2_o UVar5;
  float fVar6;
  UnityEngine_Rect_o UVar7;
  
  if (Il2CppMethodInitialized_07547a49 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_07547a49 = '\x01';
  }
  __this_00 = (__this->fields)._controlsRoot;
  if (__this_00 == (UnityEngine_RectTransform_o *)0x0) {
label_05c9f7ae:
    ThrowNullReferenceException();
  }
  UVar7 = UnityEngine_RectTransform__get_rect(__this_00,(MethodInfo *)0x0);
  fVar4 = UVar7.fields.m_Width;
  fVar6 = UVar7.fields.m_Height;
  if (parentControl == (UI_MobileInputControlLayout_o *)0x0) {
    if (control == (UI_MobileInputControlLayout_o *)0x0) goto label_05c9f7ae;
    fVar1 = (control->fields).X;
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
    fVar4 = fVar4 * (fVar1 + -0.5);
    fVar6 = fVar6 * ((control->fields).Y + -0.5);
  }
  else {
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
    UVar5 = UI_MobileLayoutEditorOverlay__GetControlPosition
                      (__this,parentControl,(UI_MobileInputControlLayout_o *)0x0,method);
    if (control == (UI_MobileInputControlLayout_o *)0x0) goto label_05c9f7ae;
    if (fVar6 <= fVar4) {
      fVar4 = fVar6;
    }
    fVar6 = 1.0;
    if (1.0 <= fVar4) {
      fVar6 = fVar4;
    }
    uVar2 = (control->fields).X;
    uVar3 = (control->fields).Y;
    fVar4 = UVar5.fields.x + fVar6 * (float)uVar2;
    fVar6 = UVar5.fields.y + fVar6 * (float)uVar3;
  }
  UVar5.fields.y = fVar6;
  UVar5.fields.x = fVar4;
  return (UnityEngine_Vector2_o)UVar5.fields;
}


// UI.MobileLayoutEditorOverlay$$GetControlSize
// il2cpp: UnityEngine_Vector2_o UI_MobileLayoutEditorOverlay__GetControlSize (UI_MobileLayoutEditorOverlay_o* __this, UI_MobileInputControlLayout_o* control, const MethodInfo* method);
// 0x5c9f620

UnityEngine_Vector2_o
UI_MobileLayoutEditorOverlay__GetControlSize
          (UI_MobileLayoutEditorOverlay_o *__this,UI_MobileInputControlLayout_o *control,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Vector2_o UVar3;
  float fVar4;
  UnityEngine_Rect_o UVar5;
  
  if (Il2CppMethodInitialized_07547a4a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_07547a4a = '\x01';
  }
  __this_00 = (__this->fields)._controlsRoot;
  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
    UVar5 = UnityEngine_RectTransform__get_rect(__this_00,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
    if (control != (UI_MobileInputControlLayout_o *)0x0) {
      fVar4 = UVar5.fields.m_Width;
      if (UVar5.fields.m_Height <= UVar5.fields.m_Width) {
        fVar4 = UVar5.fields.m_Height;
      }
      uVar1 = (control->fields).Width;
      uVar2 = (control->fields).Height;
      UVar3.fields.y = fVar4 * (float)uVar2;
      UVar3.fields.x = fVar4 * (float)uVar1;
      return (UnityEngine_Vector2_o)UVar3.fields;
    }
  }
  ThrowNullReferenceException();
}


// UI.MobileLayoutEditorOverlay$$SavePosition
// il2cpp: void UI_MobileLayoutEditorOverlay__SavePosition (UI_MobileLayoutEditorOverlay_o* __this, UI_MobileInputControlLayout_o* control, UnityEngine_Vector2_o position, UI_MobileInputControlLayout_o* parentControl, const MethodInfo* method);
// 0x5ca0010
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ca0095: jmp 0x5ca0235
// asm:   0x5ca011e: jmp 0x5ca0223
// asm:   0x5ca0215: shufps xmm3, xmm3, 0x55
// asm:   0x5ca0219: movaps xmm0, xmm3
// asm:   0x5ca021c: test al, 4

void UI_MobileLayoutEditorOverlay__SavePosition
               (UI_MobileLayoutEditorOverlay_o *__this,UI_MobileInputControlLayout_o *control,
               UnityEngine_Vector2_o position,UI_MobileInputControlLayout_o *parentControl,MethodInfo *method)

{
  float fVar1;
  UnityEngine_RectTransform_o *pUVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined4 uVar6;
  undefined4 extraout_EAX;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  float fVar10;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  float fVar11;
  undefined1 auVar12 [16];
  UnityEngine_Rect_o UVar13;
  UnityEngine_Rect_o UVar14;
  float local_58;
  float fStack_54;
  float local_48;
  float fStack_44;
  
  uVar8 = SUB84(method,0);
  auVar12._8_4_ = in_XMM0_Dc;
  auVar12._0_8_ = position.fields;
  auVar12._12_4_ = in_XMM0_Dd;
  if (Il2CppMethodInitialized_07547a4b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_07547a4b = '\x01';
  }
  pUVar2 = (__this->fields)._controlsRoot;
  if (pUVar2 == (UnityEngine_RectTransform_o *)0x0) goto label_05ca0235;
  UVar13 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
  auVar4._8_4_ = in_XMM1_Dc;
  auVar4._0_8_ = UVar13.fields._8_8_;
  auVar4._12_4_ = in_XMM1_Dd;
  if (parentControl == (UI_MobileInputControlLayout_o *)0x0) {
    uVar6 = 0x727c0c8;
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
      uVar6 = extraout_EAX;
    }
    if (control == (UI_MobileInputControlLayout_o *)0x0) goto label_05ca0235;
    auVar12 = divps(auVar12,auVar4);
    fVar11 = auVar12._0_4_ + 0.5;
    fVar10 = auVar12._4_4_ + 0.5;
    auVar5._4_4_ = -(uint)(1.0 < fVar11);
    auVar5._0_4_ = -(uint)(1.0 < fVar10);
    auVar5._8_4_ = -(uint)(0.0 < fVar10);
    auVar5._12_4_ = -(uint)(0.0 < fVar11);
    uVar9 = movmskps(uVar8,auVar5);
    auVar3._4_4_ = -(uint)(1.0 <= fVar11);
    auVar3._0_4_ = -(uint)(1.0 <= fVar10);
    auVar3._8_4_ = -(uint)(0.0 <= fVar10);
    auVar3._12_4_ = -(uint)(0.0 <= fVar11);
    uVar7 = movmskps(uVar6,auVar3);
    if ((uVar9 & 2) == 0) {
      if ((uVar7 & 8) == 0) goto label_05ca0203;
label_05ca0107:
      (control->fields).X = fVar11;
    }
    else {
      fVar11 = 1.0;
      if ((uVar7 & 8) != 0) goto label_05ca0107;
label_05ca0203:
      (control->fields).X = 0.0;
    }
    if ((uVar9 & 1) != 0) {
      fVar10 = 1.0;
    }
    if ((uVar7 & 4) == 0) {
      fVar10 = 0.0;
    }
    goto label_05ca0223;
  }
  if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    if (Il2CppMethodInitialized_07547a49 == '\0') goto label_05ca0135;
label_05ca0088:
    pUVar2 = (__this->fields)._controlsRoot;
  }
  else {
    if (Il2CppMethodInitialized_07547a49 != '\0') goto label_05ca0088;
label_05ca0135:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_07547a49 = '\x01';
    pUVar2 = (__this->fields)._controlsRoot;
  }
  if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
    UVar14 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
    fVar11 = (parentControl->fields).X;
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
    if (control != (UI_MobileInputControlLayout_o *)0x0) {
      local_58 = UVar13.fields.m_Width;
      fStack_54 = UVar13.fields.m_Height;
      if (fStack_54 <= local_58) {
        local_58 = fStack_54;
      }
      fVar10 = 1.0;
      if (1.0 <= local_58) {
        fVar10 = local_58;
      }
      local_48 = position.fields.x;
      fStack_44 = position.fields.y;
      fVar1 = (parentControl->fields).Y;
      (control->fields).X = (local_48 - (fVar11 + -0.5) * UVar14.fields.m_Width) / fVar10;
      fVar10 = (fStack_44 - (fVar1 + -0.5) * UVar14.fields.m_Height) / fVar10;
label_05ca0223:
      (control->fields).Y = fVar10;
      return;
    }
  }
label_05ca0235:
  ThrowNullReferenceException();
}


// UI.MobileLayoutEditorOverlay$$UpdatePopupChildRects
// il2cpp: void UI_MobileLayoutEditorOverlay__UpdatePopupChildRects (UI_MobileLayoutEditorOverlay_o* __this, UI_MobileInputControlLayout_o* popupControl, const MethodInfo* method);
// 0x5ca0240
// eh: try 0x5ca0313..0x5ca0399 -> pad 0x5ca03a3 (+5 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5ca03bb..0x5ca03c0 -> pad 0x5ca03e1 cleanup
// eh: try 0x5ca03e4..0x5ca03ee -> pad 0x5ca03f6 catch (...) [compiler noexcept guard]
// asm: 29 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ca0309: nop dword ptr [rax]
// asm:   0x5ca0399: jmp 0x5ca03a3
// asm:   0x5ca039b: jmp 0x5ca03a3
// asm:   0x5ca039d: jmp 0x5ca03a3
// asm:   0x5ca039f: jmp 0x5ca03a3
// asm:   0x5ca03a1: jmp 0x5ca03a3
// asm:   0x5ca03a3: mov rbx, rax
// asm:   0x5ca03a6: cmp edx, 1
// asm:   0x5ca03a9: jne 0x5ca03e4
// asm:   0x5ca03ab: mov rdi, rbx
// asm:   0x5ca03ae: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5ca03b3: mov rbx, qword ptr [rax]
// asm:   0x5ca03b6: mov qword ptr [rsp + 0x38], rbx
// asm:   0x5ca03bb: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5ca03c0: lea rax, [rip + 0x15ee1c1]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MobileInputControlLayout_Dispose
// asm:   0x5ca03c7: mov rsi, qword ptr [rax]
// asm:   0x5ca03ca: lea rdi, [rsp + 0x10]
// asm:   0x5ca03cf: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5ca03d4: test rbx, rbx
// asm:   0x5ca03d7: je 0x5ca0380
// asm:   0x5ca03d9: mov rdi, rbx
// asm:   0x5ca03dc: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5ca03e1: mov rbx, rax
// asm:   0x5ca03e4: lea rdi, [rsp + 0x38]
// asm:   0x5ca03e9: call 0x2fdaf30  ; il2cpp_runtime_helper_02fdaf30()
// asm:   0x5ca03ee: mov rdi, rbx
// asm:   0x5ca03f1: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5ca03f6: mov rdi, rax
// asm:   0x5ca03f9: call 0x2ab61e0  ; __clang_call_terminate()

void UI_MobileLayoutEditorOverlay__UpdatePopupChildRects
               (UI_MobileLayoutEditorOverlay_o *__this,UI_MobileInputControlLayout_o *popupControl,
               MethodInfo *method)

{
  System_Collections_Generic_List_MobileInputControlLayout__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  UnityEngine_Vector2_o value;
  UnityEngine_RectTransform_o *__this_02;
  Il2CppObject *control;
  bool bVar1;
  MethodInfo *method_00;
  UnityEngine_RectTransform_o *local_70;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  UI_MobileInputControlLayout_o *local_48;
  undefined8 local_40;
  System_Collections_Generic_List_Enumerator_T__o *local_38;
  
  if (Il2CppMethodInitialized_07547a4c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_MobileInputControlLayout_RectTransform_TryGetValue
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MobileInputControlLayout_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MobileInputControlLayout_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MobileInputControlLayout_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MobileInputControlLayout_GetEnumerator);
    Il2CppMethodInitialized_07547a4c = '\x01';
  }
  local_68.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_68.fields._index = 0;
  local_68.fields._version = 0;
  local_68.fields._current = (Il2CppObject *)0x0;
  local_70 = (UnityEngine_RectTransform_o *)0x0;
  if ((popupControl != (UI_MobileInputControlLayout_o *)0x0) &&
     (__this_00 = (popupControl->fields).Children,
     __this_00 != (System_Collections_Generic_List_MobileInputControlLayout__o *)0x0)) {
    local_48 = popupControl;
    System_Collections_Generic_List_object___GetEnumerator
              (&local_68,(System_Collections_Generic_List_object__o *)__this_00,
               (MethodInfo_395E050 *)
               MethodInfo_System_Collections_Generic_List_MobileInputControlLayout_GetEnumerator);
    local_40 = 0;
    local_38 = &local_68;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)&local_68,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_MobileInputControlLayout_MoveNext
                        );
      control = local_68.fields._current;
      if (!bVar1) break;
      __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._controlRects;
      if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        ThrowNullReferenceException();
      }
      method_00 = 
      MethodInfo_System_Collections_Generic_Dictionary_MobileInputControlLayout_RectTransform_TryGetValue;
      bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                        (__this_01,local_68.fields._current,(Il2CppObject **)&local_70,
                         (MethodInfo_4AAF440 *)
                         MethodInfo_System_Collections_Generic_Dictionary_MobileInputControlLayout_RectTransform_TryGetValue
                        );
      __this_02 = local_70;
      if (bVar1) {
        value = UI_MobileLayoutEditorOverlay__GetControlPosition
                          (__this,(UI_MobileInputControlLayout_o *)control,local_48,method_00);
        if (__this_02 == (UnityEngine_RectTransform_o *)0x0) {
          ThrowNullReferenceException();
        }
        UnityEngine_RectTransform__set_anchoredPosition(__this_02,value,(MethodInfo *)0x0);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)&local_68,
               (MethodInfo_4C45C40 *)
               MethodInfo_System_Collections_Generic_List_Enumerator_MobileInputControlLayout_Dispose);
  }
  return;
}


// UI.MobileLayoutEditorOverlay$$Locale
// il2cpp: System_String_o* UI_MobileLayoutEditorOverlay__Locale (UI_MobileLayoutEditorOverlay_o* __this, System_String_o* item, const MethodInfo* method);
// 0x5ca38f0

System_String_o *
UI_MobileLayoutEditorOverlay__Locale
          (UI_MobileLayoutEditorOverlay_o *__this,System_String_o *item,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07547a4d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"MobileLayout");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547a4d = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("SettingsPopup","MobileLayout",item,"",
                      "",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.MobileLayoutEditorOverlay$$CreateLocalizedDropdownSetting
// il2cpp: UnityEngine_GameObject_o* UI_MobileLayoutEditorOverlay__CreateLocalizedDropdownSetting (UI_MobileLayoutEditorOverlay_o* __this, UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, Settings_BaseSetting_o* setting, System_String_o* title, System_String_array* options, System_Func_string__string__o* optionLabel, System_String_o* tooltip, float elementWidth, float elementHeight, float maxScrollHeight, System_Nullable_float__o optionsWidth, UnityEngine_Events_UnityAction_o* onDropdownOptionSelect, const MethodInfo* method);
// 0x5ca4750

UnityEngine_GameObject_o *
UI_MobileLayoutEditorOverlay__CreateLocalizedDropdownSetting
          (UI_MobileLayoutEditorOverlay_o *__this,UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,
          Settings_BaseSetting_o *setting,System_String_o *title,System_String_array *options,
          System_Func_string__string__o *optionLabel,System_String_o *tooltip,float elementWidth,
          float elementHeight,float maxScrollHeight,System_Nullable_float__o optionsWidth,
          UnityEngine_Events_UnityAction_o *onDropdownOptionSelect,MethodInfo *method)

{
  System_Nullable_float__o SVar1;
  UnityEngine_GameObject_o *__this_00;
  UI_MobileLayoutLocalizedDropdownSettingElement_o *__this_01;
  float fVar2;
  
  SVar1.fields = optionsWidth.fields;
  if (Il2CppMethodInitialized_07547a4e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_MobileLayoutLocalizedDropdownSettingElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Elements/DropdownSetting");
    Il2CppMethodInitialized_07547a4e = '\x01';
  }
  __this_00 = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/DropdownSetting",(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    __this_01 = UnityEngine_GameObject__AddComponent_object_
                          (__this_00,
                           (MethodInfo_353B6A0 *)
                           MethodInfo_UnityEngine_GameObject_AddComponent_MobileLayoutLocalizedDropdownSettingElement
                          );
    if (SVar1.fields.hasValue == false) {
      System_Nullable_float____ctor
                (&optionsWidth,elementWidth,(MethodInfo_3CDA2B0 *)MethodInfo_System_Nullable_float_ctor);
    }
    fVar2 = System_Nullable_float___get_Value
                      (&optionsWidth,(MethodInfo_3CDA2D0 *)MethodInfo_System_Nullable_float_get_Value);
    if (__this_01 != (UI_MobileLayoutLocalizedDropdownSettingElement_o *)0x0) {
      (__this_01->fields)._optionLabel = optionLabel;
      Il2CppCodeGenWriteBarrier(&(__this_01->fields)._optionLabel);
      (*(__this_01->klass->vtable)._7_Setup.methodPtr)
                (__this_01,setting,style,title,options,tooltip,elementWidth,elementHeight,fVar2,
                 maxScrollHeight,onDropdownOptionSelect,(System_Int32_array *)0x0,
                 (__this_01->klass->vtable)._7_Setup.method);
      UI_MobileLayoutLocalizedDropdownSettingElement__RelabelOptions(__this_01,(MethodInfo *)setting);
      (*(__this_01->klass->vtable)._6_SyncElement.methodPtr)
                (__this_01,(__this_01->klass->vtable)._6_SyncElement.method);
      return __this_00;
    }
  }
  ThrowNullReferenceException();
}


// UI.MobileLayoutEditorOverlay$$ShapeOptionLabel
// il2cpp: System_String_o* UI_MobileLayoutEditorOverlay__ShapeOptionLabel (UI_MobileLayoutEditorOverlay_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5ca8880

System_String_o *
UI_MobileLayoutEditorOverlay__ShapeOptionLabel
          (UI_MobileLayoutEditorOverlay_o *__this,System_String_o *value,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07547a4f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"MobileLayout.Shape");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547a4f = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("SettingsPopup","MobileLayout.Shape",value,"",value,
                      (MethodInfo *)0x0);
  return pSVar1;
}


// UI.MobileLayoutEditorOverlay$$PopupModeOptionLabel
// il2cpp: System_String_o* UI_MobileLayoutEditorOverlay__PopupModeOptionLabel (UI_MobileLayoutEditorOverlay_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5ca8910

System_String_o *
UI_MobileLayoutEditorOverlay__PopupModeOptionLabel
          (UI_MobileLayoutEditorOverlay_o *__this,System_String_o *value,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07547a50 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"MobileLayout.PopupMode");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547a50 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("SettingsPopup","MobileLayout.PopupMode",value,"",value,
                      (MethodInfo *)0x0);
  return pSVar1;
}


// UI.MobileLayoutEditorOverlay$$RoleOptionLabel
// il2cpp: System_String_o* UI_MobileLayoutEditorOverlay__RoleOptionLabel (UI_MobileLayoutEditorOverlay_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5ca89a0

System_String_o *
UI_MobileLayoutEditorOverlay__RoleOptionLabel
          (UI_MobileLayoutEditorOverlay_o *__this,System_String_o *value,MethodInfo *method)

{
  bool bVar1;
  int32_t local_c;
  
  if (Il2CppMethodInitialized_07547a51 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Enum_TryParse_MobileInputLayoutRole);
    Il2CppMethodInitialized_07547a51 = '\x01';
  }
  local_c = 0;
  if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_07556760);
  }
  bVar1 = System_Enum__TryParse_Int32Enum_
                    (value,&local_c,
                     (MethodInfo_34DC610 *)MethodInfo_System_Enum_TryParse_MobileInputLayoutRole);
  if (bVar1) {
    value = UI_MobileInputLayoutUtil__GetRoleLabel(local_c,(MethodInfo *)0x0);
  }
  return value;
}


// UI.MobileLayoutEditorOverlay$$CreateTextButton
// il2cpp: UnityEngine_GameObject_o* UI_MobileLayoutEditorOverlay__CreateTextButton (UI_MobileLayoutEditorOverlay_o* __this, System_String_o* label, UnityEngine_Transform_o* parent, UnityEngine_Vector2_o size, System_Action_o* onClick, const MethodInfo* method);
// 0x5ca3980

UnityEngine_GameObject_o *
UI_MobileLayoutEditorOverlay__CreateTextButton
          (UI_MobileLayoutEditorOverlay_o *__this,System_String_o *label,UnityEngine_Transform_o *parent,
          UnityEngine_Vector2_o size,System_Action_o *onClick,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  UI_MobileLayoutEditorOverlay___c__DisplayClass95_0_o *__this_01;
  UI_ElementStyle_o *__this_02;
  UnityEngine_GameObject_o *__this_03;
  UnityEngine_UI_Button_o *pUVar1;
  UnityEngine_Events_UnityAction_o *__this_04;
  float local_38;
  float fStack_34;
  
  if (Il2CppMethodInitialized_07547a52 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass95_0_CreateTextButton_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass95_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    Il2CppMethodInitialized_07547a52 = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass95_0);
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  if (__this_01 != (UI_MobileLayoutEditorOverlay___c__DisplayClass95_0_o *)0x0) {
    (__this_01->fields).onClick = onClick;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).onClick);
    __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
    UI_ElementStyle___ctor(__this_02,0x12,120.0,20.0,"DefaultPanel",(MethodInfo *)0x0);
    local_38 = size.fields.x;
    fStack_34 = size.fields.y;
    __this_03 = UI_ElementFactory__CreateDefaultButton
                          (parent,__this_02,label,local_38,fStack_34,(UnityEngine_Events_UnityAction_o *)0x0,
                           (MethodInfo *)0x0);
    if ((__this_01->fields).onClick == (System_Action_o *)0x0) {
      return __this_03;
    }
    if ((__this_03 != (UnityEngine_GameObject_o *)0x0) &&
       (pUVar1 = UnityEngine_GameObject__GetComponent_object_
                           (__this_03,
                            (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Button),
       pUVar1 != (UnityEngine_UI_Button_o *)0x0)) {
      __this_00 = (UnityEngine_Events_UnityEvent_o *)(pUVar1->fields).m_OnClick;
      __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                (__this_04,(Il2CppObject *)__this_01,
                 (intptr_t)MethodInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass95_0_CreateTextButton_b__0,
                 (MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
        UnityEngine_Events_UnityEvent__AddListener(__this_00,__this_04,(MethodInfo *)0x0);
        return __this_03;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MobileLayoutEditorOverlay$$AddModalLabel
// il2cpp: void UI_MobileLayoutEditorOverlay__AddModalLabel (UI_MobileLayoutEditorOverlay_o* __this, UnityEngine_RectTransform_o* parent, System_String_o* label, const MethodInfo* method);
// 0x5ca3d60

void UI_MobileLayoutEditorOverlay__AddModalLabel
               (UI_MobileLayoutEditorOverlay_o *__this,UnityEngine_RectTransform_o *parent,
               System_String_o *label,MethodInfo *method)

{
  UI_ElementStyle_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_UI_LayoutElement_o *pUVar1;
  
  if (Il2CppMethodInitialized_07547a53 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    Il2CppMethodInitialized_07547a53 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x14,120.0,20.0,"DefaultPanel",(MethodInfo *)0x0);
  __this_01 = UI_ElementFactory__CreateDefaultLabel
                        ((UnityEngine_Transform_o *)parent,__this_00,label,0,3,(MethodInfo *)0x0);
  if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
    pUVar1 = UnityEngine_GameObject__GetComponent_object_
                       (__this_01,
                        (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    if (pUVar1 != (UnityEngine_UI_LayoutElement_o *)0x0) {
      (*(pUVar1->klass->vtable)._36_set_preferredWidth.methodPtr)
                (pUVar1,230.0,(pUVar1->klass->vtable)._36_set_preferredWidth.method);
      (*(pUVar1->klass->vtable)._38_set_preferredHeight.methodPtr)
                (pUVar1,34.0,(pUVar1->klass->vtable)._38_set_preferredHeight.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MobileLayoutEditorOverlay$$AddPresetNameLabel
// il2cpp: void UI_MobileLayoutEditorOverlay__AddPresetNameLabel (UI_MobileLayoutEditorOverlay_o* __this, UnityEngine_RectTransform_o* parent, System_String_o* label, const MethodInfo* method);
// 0x5ca5d00

void UI_MobileLayoutEditorOverlay__AddPresetNameLabel
               (UI_MobileLayoutEditorOverlay_o *__this,UnityEngine_RectTransform_o *parent,
               System_String_o *label,MethodInfo *method)

{
  UI_ElementStyle_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_UI_LayoutElement_o *pUVar1;
  
  if (Il2CppMethodInitialized_07547a54 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    Il2CppMethodInitialized_07547a54 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x14,120.0,20.0,"DefaultPanel",(MethodInfo *)0x0);
  __this_01 = UI_ElementFactory__CreateDefaultLabel
                        ((UnityEngine_Transform_o *)parent,__this_00,label,0,3,(MethodInfo *)0x0);
  if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
    pUVar1 = UnityEngine_GameObject__GetComponent_object_
                       (__this_01,
                        (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    if (pUVar1 != (UnityEngine_UI_LayoutElement_o *)0x0) {
      (*(pUVar1->klass->vtable)._40_set_flexibleWidth.methodPtr)
                (pUVar1,1.0,(pUVar1->klass->vtable)._40_set_flexibleWidth.method);
      (*(pUVar1->klass->vtable)._38_set_preferredHeight.methodPtr)
                (pUVar1,34.0,(pUVar1->klass->vtable)._38_set_preferredHeight.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MobileLayoutEditorOverlay$$AddLabel
// il2cpp: UnityEngine_UI_Text_o* UI_MobileLayoutEditorOverlay__AddLabel (UI_MobileLayoutEditorOverlay_o* __this, UnityEngine_RectTransform_o* parent, System_String_o* label, UnityEngine_Vector2_o size, const MethodInfo* method);
// 0x5ca8a30
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ca8b00: movaps xmm0, xmmword ptr [rsp]

UnityEngine_UI_Text_o *
UI_MobileLayoutEditorOverlay__AddLabel
          (UI_MobileLayoutEditorOverlay_o *__this,UnityEngine_RectTransform_o *parent,System_String_o *label,
          UnityEngine_Vector2_o size,MethodInfo *method)

{
  UnityEngine_Vector2_Fields anchorMin;
  UnityEngine_Vector2_Fields UVar1;
  uint32_t uVar2;
  double x;
  double dVar3;
  UnityEngine_Vector2_o anchorMax;
  UnityEngine_Vector2_StaticFields *pUVar4;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_UI_Text_o *__this_01;
  MethodInfo *method_00;
  System_String_o **ppSVar5;
  UnityEngine_Vector2_c **__this_02;
  MethodInfo *method_01;
  float fVar6;
  float fVar7;
  UnityEngine_Color_o UVar8;
  float local_58;
  float fStack_54;
  Il2CppMethodPointer local_40;
  UnityEngine_Vector2_Fields local_38;
  InvokerMethod pIStack_30;
  
  __this_02 = (UnityEngine_Vector2_c **)__this;
  if (Il2CppMethodInitialized_07547a55 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Text);
    ppSVar5 = &"Label";
    il2cpp_codegen_initialize_runtime_metadata(&"Label");
    Il2CppMethodInitialized_07547a55 = '\x01';
    __this_02 = (UnityEngine_Vector2_c **)ppSVar5;
  }
  if (Il2CppMethodInitialized_0753ecc8 == '\0') {
    __this_02 = &TypeInfo_UnityEngine_Vector2;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_0753ecc8 = '\x01';
  }
  pUVar4 = TypeInfo_UnityEngine_Vector2->static_fields;
  anchorMin = (pUVar4->zeroVector).fields;
  if (Il2CppMethodInitialized_07542885 == '\0') {
    __this_02 = &TypeInfo_UnityEngine_Vector2;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_07542885 = '\x01';
    pUVar4 = TypeInfo_UnityEngine_Vector2->static_fields;
    UVar1 = (pUVar4->oneVector).fields;
    fVar6 = UVar1.x;
    fVar7 = UVar1.y;
    if (Il2CppMethodInitialized_0753ecc8 == '\0') {
      __this_02 = &TypeInfo_UnityEngine_Vector2;
      pIStack_30 = (InvokerMethod)0x0;
      local_38 = UVar1;
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_0753ecc8 = '\x01';
      pUVar4 = TypeInfo_UnityEngine_Vector2->static_fields;
      fVar6 = local_38.x;
      fVar7 = local_38.y;
    }
  }
  else {
    UVar1 = (pUVar4->oneVector).fields;
    fVar6 = UVar1.x;
    fVar7 = UVar1.y;
  }
  anchorMax.fields.y = fVar7;
  anchorMax.fields.x = fVar6;
  __this_00 = UI_MobileLayoutEditorOverlay__CreateRect
                        ((UI_MobileLayoutEditorOverlay_o *)__this_02,"Label",parent,
                         (UnityEngine_Vector2_o)anchorMin,anchorMax,size,
                         (UnityEngine_Vector2_o)(pUVar4->zeroVector).fields,method);
  if ((__this_00 == (UnityEngine_GameObject_o *)0x0) ||
     (__this_01 = UnityEngine_GameObject__AddComponent_object_
                            (__this_00,
                             (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_Text),
     __this_01 == (UnityEngine_UI_Text_o *)0x0)) {
    ThrowNullReferenceException();
  }
  (*(__this_01->klass->vtable)._75_set_text.methodPtr)
            (__this_01,label,(__this_01->klass->vtable)._75_set_text.method);
  method_00 = (MethodInfo *)(__this->fields)._font;
  UnityEngine_UI_Text__set_font(__this_01,(UnityEngine_Font_o *)method_00,(MethodInfo *)0x0);
  local_58 = size.fields.x;
  fStack_54 = size.fields.y;
  if (fStack_54 <= local_58) {
    local_58 = fStack_54;
  }
  local_58 = local_58 * 0.42;
  fVar6 = 28.0;
  if (local_58 <= 28.0) {
    fVar6 = local_58;
  }
  fVar6 = (float)(~-(uint)(16.0 <= local_58) & 0x41800000 | (uint)fVar6 & -(uint)(16.0 <= local_58));
  if (Il2CppMethodInitialized_07541320 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_07541320 = '\x01';
    uVar2 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  x = (double)fVar6;
  method_01 = (MethodInfo *)&local_40;
  dVar3 = modf(x,(double *)method_01,method_00);
  if (0.0 <= fVar6) {
    if ((dVar3 != 0.5) || (NAN(dVar3))) {
      local_40 = (Il2CppMethodPointer)floor(x + 0.5,method_01);
    }
    else if (((long)(double)local_40 & 1U) != 0) {
      local_40 = (Il2CppMethodPointer)((double)local_40 + 1.0);
    }
  }
  else if ((dVar3 != -0.5) || (NAN(dVar3))) {
    local_40 = (Il2CppMethodPointer)ceil(x + -0.5,method_01);
  }
  else if (((long)(double)local_40 & 1U) != 0) {
    local_40 = (Il2CppMethodPointer)((double)local_40 + -1.0);
  }
  UnityEngine_UI_Text__set_fontSize(__this_01,(int)(double)local_40,(MethodInfo *)0x0);
  UVar8.fields.b = 1.0;
  UVar8.fields.a = 1.0;
  UVar8.fields.r = 1.0;
  UVar8.fields.g = 1.0;
  (*(__this_01->klass->vtable)._23_set_color.methodPtr)
            (__this_01,UVar8,(__this_01->klass->vtable)._23_set_color.method);
  UnityEngine_UI_Text__set_alignment(__this_01,4,(MethodInfo *)0x0);
  (*(__this_01->klass->vtable)._25_set_raycastTarget.methodPtr)
            (__this_01,false,(__this_01->klass->vtable)._25_set_raycastTarget.method);
  return __this_01;
}


// UI.MobileLayoutEditorOverlay$$AddControlIconOrLabel
// il2cpp: void UI_MobileLayoutEditorOverlay__AddControlIconOrLabel (UI_MobileLayoutEditorOverlay_o* __this, UnityEngine_RectTransform_o* parent, UI_MobileInputControlLayout_o* control, UnityEngine_Vector2_o size, const MethodInfo* method);
// 0x5c9f7c0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c9f8ae: jmp 0x5c9fa8c
// asm:   0x5c9f94e: movaps xmm0, xmmword ptr [rsp + 0x10]

void UI_MobileLayoutEditorOverlay__AddControlIconOrLabel
               (UI_MobileLayoutEditorOverlay_o *__this,UnityEngine_RectTransform_o *parent,
               UI_MobileInputControlLayout_o *control,UnityEngine_Vector2_o size,MethodInfo *method)

{
  UnityEngine_Vector2_Fields anchorMin;
  UnityEngine_Vector2_Fields UVar1;
  System_String_o *relativePath;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o anchorMax;
  bool bVar2;
  UI_MobileLayoutEditorOverlay_o *__this_00;
  UnityEngine_UI_Text_o *pUVar3;
  UnityEngine_Vector2_StaticFields *pUVar4;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_UI_Image_o *__this_02;
  UnityEngine_Sprite_o *value_00;
  UnityEngine_RectTransform_o *__this_03;
  UnityEngine_Vector2_c **__this_04;
  float fVar5;
  float fVar6;
  UnityEngine_Color_o UVar7;
  undefined8 local_58;
  
  if (Il2CppMethodInitialized_07547a56 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileControlSkinManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Icon");
    Il2CppMethodInitialized_07547a56 = '\x01';
  }
  if (control == (UI_MobileInputControlLayout_o *)0x0) goto label_05c9fa8c;
  __this_00 = (UI_MobileLayoutEditorOverlay_o *)
              UI_MobileInputControlLayout__GetIcon(control,(MethodInfo *)0x0);
  bVar2 = UI_MobileInputLayoutUtil__ShowButtonIcons((MethodInfo *)0x0);
  if (bVar2) {
    if (__this_00 == (UI_MobileLayoutEditorOverlay_o *)0x0) goto label_05c9fa8c;
    __this_04 = (UnityEngine_Vector2_c **)__this_00;
    bVar2 = UI_MobileInputSkin__HasImage((UI_MobileInputSkin_o *)__this_00,(MethodInfo *)0x0);
    if (bVar2) {
      if (Il2CppMethodInitialized_0753ecc8 == '\0') {
        __this_04 = &TypeInfo_UnityEngine_Vector2;
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
        Il2CppMethodInitialized_0753ecc8 = '\x01';
      }
      pUVar4 = TypeInfo_UnityEngine_Vector2->static_fields;
      anchorMin = (pUVar4->zeroVector).fields;
      if (Il2CppMethodInitialized_07542885 == '\0') {
        __this_04 = &TypeInfo_UnityEngine_Vector2;
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
        Il2CppMethodInitialized_07542885 = '\x01';
        pUVar4 = TypeInfo_UnityEngine_Vector2->static_fields;
        UVar1 = (pUVar4->oneVector).fields;
        fVar5 = UVar1.x;
        fVar6 = UVar1.y;
        if (Il2CppMethodInitialized_0753ecc8 == '\0') {
          __this_04 = &TypeInfo_UnityEngine_Vector2;
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
          Il2CppMethodInitialized_0753ecc8 = '\x01';
          pUVar4 = TypeInfo_UnityEngine_Vector2->static_fields;
        }
      }
      else {
        UVar1 = (pUVar4->oneVector).fields;
        fVar5 = UVar1.x;
        fVar6 = UVar1.y;
      }
      UVar1 = (pUVar4->zeroVector).fields;
      anchorMax.fields.y = fVar6;
      anchorMax.fields.x = fVar5;
      __this_01 = UI_MobileLayoutEditorOverlay__CreateRect
                            ((UI_MobileLayoutEditorOverlay_o *)__this_04,"Icon",parent,
                             (UnityEngine_Vector2_o)anchorMin,anchorMax,(UnityEngine_Vector2_o)UVar1,
                             (UnityEngine_Vector2_o)UVar1,method);
      if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
        __this_02 = UnityEngine_GameObject__AddComponent_object_
                              (__this_01,
                               (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_Image);
        relativePath = (System_String_o *)(__this_00->fields)._root;
        if ((TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager);
        }
        value_00 = UI_MobileControlSkinManager__GetSprite(relativePath,(MethodInfo *)0x0);
        if (__this_02 != (UnityEngine_UI_Image_o *)0x0) {
          UnityEngine_UI_Image__set_sprite(__this_02,value_00,(MethodInfo *)0x0);
          UnityEngine_UI_Image__set_preserveAspect
                    (__this_02,*(bool *)&(__this_00->fields)._controlsRoot,(MethodInfo *)0x0);
          UVar7 = UI_MobileInputSkin__ToColor((UI_MobileInputSkin_o *)__this_00,(MethodInfo *)0x0);
          (*(__this_02->klass->vtable)._23_set_color.methodPtr)
                    (__this_02,UVar7,(__this_02->klass->vtable)._23_set_color.method);
          (*(__this_02->klass->vtable)._25_set_raycastTarget.methodPtr)
                    (__this_02,false,(__this_02->klass->vtable)._25_set_raycastTarget.method);
          __this_03 = UnityEngine_GameObject__GetComponent_object_
                                (__this_01,
                                 (MethodInfo_353B730 *)
                                 MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
          fVar5 = UI_MobileInputControlLayout__GetIconSize(control,(MethodInfo *)0x0);
          if (__this_03 != (UnityEngine_RectTransform_o *)0x0) {
            local_58._0_4_ = size.fields.x;
            local_58._4_4_ = size.fields.y;
            if (local_58._4_4_ <= (float)local_58) {
              local_58._0_4_ = local_58._4_4_;
            }
            fVar5 = (1.0 - fVar5) * (float)local_58 * 0.5;
            local_58 = CONCAT44(fVar5,fVar5);
            value.fields.y = fVar5;
            value.fields.x = fVar5;
            UnityEngine_RectTransform__set_offsetMin(__this_03,value,(MethodInfo *)0x0);
            UnityEngine_RectTransform__set_offsetMax
                      (__this_03,(UnityEngine_Vector2_o)(local_58 ^ 0x8000000080000000),(MethodInfo *)0x0);
            return;
          }
        }
      }
      goto label_05c9fa8c;
    }
    pUVar3 = UI_MobileLayoutEditorOverlay__AddLabel(__this,parent,(control->fields).Label,size,method);
  }
  else {
    pUVar3 = UI_MobileLayoutEditorOverlay__AddLabel(__this,parent,(control->fields).Label,size,method);
    if (__this_00 == (UI_MobileLayoutEditorOverlay_o *)0x0) goto label_05c9fa8c;
  }
  UVar7 = UI_MobileInputSkin__ToColor((UI_MobileInputSkin_o *)__this_00,(MethodInfo *)0x0);
  if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
    (*(pUVar3->klass->vtable)._23_set_color.methodPtr)
              (pUVar3,UVar7,(pUVar3->klass->vtable)._23_set_color.method);
    return;
  }
label_05c9fa8c:
  ThrowNullReferenceException();
}


// UI.MobileLayoutEditorOverlay$$CreateRect
// il2cpp: UnityEngine_GameObject_o* UI_MobileLayoutEditorOverlay__CreateRect (UI_MobileLayoutEditorOverlay_o* __this, System_String_o* name, UnityEngine_RectTransform_o* parent, UnityEngine_Vector2_o anchorMin, UnityEngine_Vector2_o anchorMax, UnityEngine_Vector2_o size, UnityEngine_Vector2_o anchoredPosition, const MethodInfo* method);
// 0x5c9d1c0

UnityEngine_GameObject_o *
UI_MobileLayoutEditorOverlay__CreateRect
          (UI_MobileLayoutEditorOverlay_o *__this,System_String_o *name,UnityEngine_RectTransform_o *parent,
          UnityEngine_Vector2_o anchorMin,UnityEngine_Vector2_o anchorMax,UnityEngine_Vector2_o size,
          UnityEngine_Vector2_o anchoredPosition,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  Il2CppType *handle;
  System_Type_array *components;
  System_Type_o *obj;
  Il2CppObject *pIVar2;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_Vector2_StaticFields *pUVar3;
  float local_68;
  float fStack_64;
  float local_58;
  float fStack_54;
  
  if (Il2CppMethodInitialized_07547a57 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    Il2CppMethodInitialized_07547a57 = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  obj = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components != (System_Type_array *)0x0) {
    if (obj != (System_Type_o *)0x0) {
      pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((components->obj).klass)->_1).element_class);
      if (pIVar2 == (Il2CppObject *)0x0) {
        pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
      }
    }
    if ((int)components->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    components->m_Items[0] = obj;
    Il2CppCodeGenWriteBarrier(components->m_Items);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor_691aa60(__this_00,name,components,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      __this_01 = UnityEngine_GameObject__GetComponent_object_
                            (__this_00,
                             (MethodInfo_353B730 *)
                             MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
      if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
        UnityEngine_Transform__SetParent_692d510
                  ((UnityEngine_Transform_o *)__this_01,(UnityEngine_Transform_o *)parent,false,
                   (MethodInfo *)0x0);
        UnityEngine_RectTransform__set_anchorMin(__this_01,anchorMin,(MethodInfo *)0x0);
        UnityEngine_RectTransform__set_anchorMax(__this_01,anchorMax,(MethodInfo *)0x0);
        UnityEngine_RectTransform__set_sizeDelta(__this_01,size,(MethodInfo *)0x0);
        UnityEngine_RectTransform__set_anchoredPosition(__this_01,anchoredPosition,(MethodInfo *)0x0);
        if (Il2CppMethodInitialized_0753ecc8 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
          Il2CppMethodInitialized_0753ecc8 = '\x01';
        }
        pUVar3 = TypeInfo_UnityEngine_Vector2->static_fields;
        UVar1 = (pUVar3->zeroVector).fields;
        local_58 = anchorMin.fields.x;
        fStack_54 = anchorMin.fields.y;
        local_58 = local_58 - UVar1.x;
        fStack_54 = fStack_54 - UVar1.y;
        if (fStack_54 * fStack_54 + local_58 * local_58 < 9.9999994e-11) {
          if (Il2CppMethodInitialized_07542885 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
            Il2CppMethodInitialized_07542885 = '\x01';
            pUVar3 = TypeInfo_UnityEngine_Vector2->static_fields;
          }
          UVar1 = (pUVar3->oneVector).fields;
          local_68 = anchorMax.fields.x;
          fStack_64 = anchorMax.fields.y;
          local_68 = local_68 - UVar1.x;
          fStack_64 = fStack_64 - UVar1.y;
          if (fStack_64 * fStack_64 + local_68 * local_68 < 9.9999994e-11) {
            if (Il2CppMethodInitialized_0753ecc8 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
              Il2CppMethodInitialized_0753ecc8 = '\x01';
              pUVar3 = TypeInfo_UnityEngine_Vector2->static_fields;
            }
            UnityEngine_RectTransform__set_offsetMin
                      (__this_01,(UnityEngine_Vector2_o)(pUVar3->zeroVector).fields,(MethodInfo *)0x0);
            if (Il2CppMethodInitialized_0753ecc8 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
              Il2CppMethodInitialized_0753ecc8 = '\x01';
            }
            UnityEngine_RectTransform__set_offsetMax
                      (__this_01,
                       (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields
                       ,(MethodInfo *)0x0);
          }
        }
        return __this_00;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MobileLayoutEditorOverlay$$AddTrigger
// il2cpp: void UI_MobileLayoutEditorOverlay__AddTrigger (UI_MobileLayoutEditorOverlay_o* __this, UnityEngine_EventSystems_EventTrigger_o* trigger, int32_t type, System_Action_BaseEventData__o* action, const MethodInfo* method);
// 0x5c9e860

void UI_MobileLayoutEditorOverlay__AddTrigger
               (UI_MobileLayoutEditorOverlay_o *__this,UnityEngine_EventSystems_EventTrigger_o *trigger,
               int32_t type,System_Action_BaseEventData__o *action,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_EventSystems_EventTrigger_TriggerEvent_o *__this_00;
  UnityEngine_EventSystems_EventTrigger_Entry_array *pUVar3;
  MethodInfo *pMVar4;
  UI_MobileLayoutEditorOverlay___c__DisplayClass101_0_o *__this_01;
  UnityEngine_EventSystems_EventTrigger_Entry_o *__this_02;
  UnityEngine_Events_UnityAction_T0__o *__this_03;
  System_Collections_Generic_List_EventTrigger_Entry__o *__this_04;
  
  if (Il2CppMethodInitialized_07547a58 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_EventSystems_EventTrigger_Entry);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EventTrigger_Entry_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass101_0_AddTrigger_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass101_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction_BaseEventData);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Events_UnityEvent_BaseEventData_AddListener);
    Il2CppMethodInitialized_07547a58 = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass101_0);
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  if (__this_01 != (UI_MobileLayoutEditorOverlay___c__DisplayClass101_0_o *)0x0) {
    (__this_01->fields).action = action;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).action);
    __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventTrigger_Entry)
    ;
    UnityEngine_EventSystems_EventTrigger_Entry___ctor(__this_02,(MethodInfo *)0x0);
    if (__this_02 != (UnityEngine_EventSystems_EventTrigger_Entry_o *)0x0) {
      (__this_02->fields).eventID = type;
      __this_00 = (__this_02->fields).callback;
      __this_03 = (UnityEngine_Events_UnityAction_T0__o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction_BaseEventData);
      UnityEngine_Events_UnityAction_object____ctor
                (__this_03,(Il2CppObject *)__this_01,
                 (intptr_t)MethodInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass101_0_AddTrigger_b__0,
                 (MethodInfo_4311A10 *)0x0);
      if (__this_00 != (UnityEngine_EventSystems_EventTrigger_TriggerEvent_o *)0x0) {
        UnityEngine_Events_UnityEvent_object___AddListener
                  ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,__this_03,
                   (MethodInfo_4318F80 *)MethodInfo_UnityEngine_Events_UnityEvent_BaseEventData_AddListener);
        if (trigger != (UnityEngine_EventSystems_EventTrigger_o *)0x0) {
          __this_04 = UnityEngine_EventSystems_EventTrigger__get_triggers(trigger,(MethodInfo *)0x0);
          pMVar4 = MethodInfo_System_Collections_Generic_List_EventTrigger_Entry_Add;
          if (__this_04 != (System_Collections_Generic_List_EventTrigger_Entry__o *)0x0) {
            piVar1 = &(__this_04->fields)._version;
            *piVar1 = *piVar1 + 1;
            pUVar3 = (__this_04->fields)._items;
            if (pUVar3 != (UnityEngine_EventSystems_EventTrigger_Entry_array *)0x0) {
              uVar2 = (__this_04->fields)._size;
              if (uVar2 < (uint)pUVar3->max_length) {
                (__this_04->fields)._size = uVar2 + 1;
                pUVar3->m_Items[(int)uVar2] = __this_02;
                Il2CppCodeGenWriteBarrier(pUVar3->m_Items + (int)uVar2);
                return;
              }
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_04,(Il2CppObject *)__this_02,
                         (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
              return;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MobileLayoutEditorOverlay$$.ctor
// il2cpp: void UI_MobileLayoutEditorOverlay___ctor (UI_MobileLayoutEditorOverlay_o* __this, const MethodInfo* method);
// 0x5ca8d10

void UI_MobileLayoutEditorOverlay___ctor(UI_MobileLayoutEditorOverlay_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_MobileInputControlLayout__RectTransform__o *__this_00;
  System_Collections_Generic_Dictionary_MobileInputControlLayout__MobileInputControlLayout__o *__this_01;
  System_Collections_Generic_List_Behaviour__o *__this_02;
  
  if (Il2CppMethodInitialized_07547a59 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_MobileInputControlLayout_MobileInputControlLayout_ctor
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_MobileInputControlLayout_RectTransform_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_MobileInputControlLayout_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               TypeInfo_System_Collections_Generic_Dictionary_MobileInputControlLayout_MobileInputControlLayout
              );
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Behaviour_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Behaviour);
    Il2CppMethodInitialized_07547a59 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_MobileInputControlLayout_RectTransform
                        );
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
             (MethodInfo_4AAC8D0 *)
             MethodInfo_System_Collections_Generic_Dictionary_MobileInputControlLayout_RectTransform_ctor);
  (__this->fields)._controlRects = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._controlRects);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_MobileInputControlLayout_MobileInputControlLayout
                        );
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,
             (MethodInfo_4AAC8D0 *)
             MethodInfo_System_Collections_Generic_Dictionary_MobileInputControlLayout_MobileInputControlLayout_ctor
            );
  (__this->fields)._controlParents = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._controlParents);
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Behaviour);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_02,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_Behaviour_ctor);
  (__this->fields)._suspendedUi = __this_02;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._suspendedUi);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MobileLayoutEditorOverlay$$<CreateToolbar>b__39_0
// il2cpp: void UI_MobileLayoutEditorOverlay___CreateToolbar_b__39_0 (UI_MobileLayoutEditorOverlay_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x5ca8e30

void UI_MobileLayoutEditorOverlay___CreateToolbar_b__39_0
               (UI_MobileLayoutEditorOverlay_o *__this,UnityEngine_EventSystems_BaseEventData_o *eventData,
               MethodInfo *method)

{
  undefined8 uVar1;
  byte bVar2;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_Vector2_Fields UVar4;
  UnityEngine_Vector2_o UVar5;
  float fVar6;
  float fVar7;
  UnityEngine_Vector2_Fields local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  if (Il2CppMethodInitialized_07547a5a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_EventSystems_PointerEventData);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransformUtility);
    Il2CppMethodInitialized_07547a5a = '\x01';
  }
  local_30.x = 0.0;
  local_30.y = 0.0;
  if (eventData != (UnityEngine_EventSystems_BaseEventData_o *)0x0) {
    bVar2 = (TypeInfo_UnityEngine_EventSystems_PointerEventData->_2).typeHierarchyDepth;
    if (((eventData->klass->_2).typeHierarchyDepth < bVar2) ||
       ((eventData->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
        (Il2CppClass *)TypeInfo_UnityEngine_EventSystems_PointerEventData)) {
      il2cpp_codegen_raise_invalid_cast_exception(eventData);
    }
    pUVar3 = (__this->fields)._root;
    uVar1 = *(undefined8 *)((long)&(*(uint64_t *)((char *)eventData + 0x140)) + 4);
    fVar6 = (float)uVar1;
    fVar7 = (float)((ulong)uVar1 >> 0x20);
    if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
      uStack_20 = 0;
      local_28 = uVar1;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
      fVar6 = (float)local_28;
      fVar7 = local_28._4_4_;
    }
    UVar5.fields.y = fVar7;
    UVar5.fields.x = fVar6;
    UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
              (pUVar3,UVar5,(UnityEngine_Camera_o *)0x0,(UnityEngine_Vector2_o *)&local_30,(MethodInfo *)0x0);
    pUVar3 = (__this->fields)._toolbar;
    if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
      UVar5 = UnityEngine_RectTransform__get_anchoredPosition(pUVar3,(MethodInfo *)0x0);
      UVar4.y = UVar5.fields.y - local_30.y;
      UVar4.x = UVar5.fields.x - local_30.x;
      (__this->fields)._toolbarDragOffset.fields = UVar4;
      (__this->fields)._draggingToolbar = true;
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MobileLayoutEditorOverlay$$<CreateToolbar>b__39_1
// il2cpp: void UI_MobileLayoutEditorOverlay___CreateToolbar_b__39_1 (UI_MobileLayoutEditorOverlay_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x5ca8f20

void UI_MobileLayoutEditorOverlay___CreateToolbar_b__39_1
               (UI_MobileLayoutEditorOverlay_o *__this,UnityEngine_EventSystems_BaseEventData_o *eventData,
               MethodInfo *method)

{
  undefined8 uVar1;
  UnityEngine_Vector2_Fields UVar2;
  byte bVar3;
  UnityEngine_RectTransform_o *pUVar4;
  UnityEngine_Vector2_o screenPoint;
  UnityEngine_Vector2_o value;
  float fVar5;
  float fVar6;
  UnityEngine_Vector2_Fields UStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  if (Il2CppMethodInitialized_07547a5b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_EventSystems_PointerEventData);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransformUtility);
    Il2CppMethodInitialized_07547a5b = '\x01';
  }
  UStack_30.x = 0.0;
  UStack_30.y = 0.0;
  if ((__this->fields)._draggingToolbar == false) {
    return;
  }
  if (eventData != (UnityEngine_EventSystems_BaseEventData_o *)0x0) {
    bVar3 = (TypeInfo_UnityEngine_EventSystems_PointerEventData->_2).typeHierarchyDepth;
    if (((eventData->klass->_2).typeHierarchyDepth < bVar3) ||
       ((eventData->klass->_2).typeHierarchy[(ulong)bVar3 - 1] !=
        (Il2CppClass *)TypeInfo_UnityEngine_EventSystems_PointerEventData)) {
      il2cpp_codegen_raise_invalid_cast_exception(eventData);
    }
    pUVar4 = (__this->fields)._root;
    uVar1 = *(undefined8 *)((long)&(*(uint64_t *)((char *)eventData + 0x140)) + 4);
    fVar5 = (float)uVar1;
    fVar6 = (float)((ulong)uVar1 >> 0x20);
    if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
      uStack_20 = 0;
      uStack_28 = uVar1;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
      fVar5 = (float)uStack_28;
      fVar6 = uStack_28._4_4_;
    }
    screenPoint.fields.y = fVar6;
    screenPoint.fields.x = fVar5;
    UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
              (pUVar4,screenPoint,(UnityEngine_Camera_o *)0x0,(UnityEngine_Vector2_o *)&UStack_30,
               (MethodInfo *)0x0);
    pUVar4 = (__this->fields)._toolbar;
    if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
      UVar2 = (__this->fields)._toolbarDragOffset.fields;
      value.fields.y = UVar2.y + UStack_30.y;
      value.fields.x = UVar2.x + UStack_30.x;
      UnityEngine_RectTransform__set_anchoredPosition(pUVar4,value,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MobileLayoutEditorOverlay$$<CreateToolbar>b__39_2
// il2cpp: void UI_MobileLayoutEditorOverlay___CreateToolbar_b__39_2 (UI_MobileLayoutEditorOverlay_o* __this, UnityEngine_EventSystems_BaseEventData_o* __, const MethodInfo* method);
// 0x5ca9020

void UI_MobileLayoutEditorOverlay___CreateToolbar_b__39_2
               (UI_MobileLayoutEditorOverlay_o *__this,UnityEngine_EventSystems_BaseEventData_o *__,
               MethodInfo *method)

{
  (__this->fields)._draggingToolbar = false;
  return;
}


