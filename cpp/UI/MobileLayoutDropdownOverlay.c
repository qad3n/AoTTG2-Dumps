// Type: UI.MobileLayoutDropdownOverlay
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp_body_deref/Scripts/UI/MobileLayoutDropdownOverlay.cs
// Prior real C# source: none
// --------------------------------

// UI.MobileLayoutDropdownOverlay$$Setup
// il2cpp: void UI_MobileLayoutDropdownOverlay__Setup (UI_MobileLayoutDropdownOverlay_o* __this, UI_DropdownSettingElement_o* dropdown, UnityEngine_Transform_o* overlayRoot, const MethodInfo* method);
// 0x5ca8470
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ca8502: jmp 0x5ca857a

void UI_MobileLayoutDropdownOverlay__Setup
               (UI_MobileLayoutDropdownOverlay_o *__this,UI_DropdownSettingElement_o *dropdown,
               UnityEngine_Transform_o *overlayRoot,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_GameObject_o *pUVar3;
  System_Reflection_FieldInfo_o *pSVar4;
  
  if (Il2CppMethodInitialized_07547a9a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileLayoutDropdownOverlay);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547a9a = '\x01';
    if ((TypeInfo_UI_MobileLayoutDropdownOverlay->_2).cctor_finished_or_no_cctor != 0) goto label_05ca84a1;
label_05ca8546:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileLayoutDropdownOverlay);
    pSVar4 = TypeInfo_UI_MobileLayoutDropdownOverlay->static_fields->OptionsPanelField;
    if (pSVar4 != (System_Reflection_FieldInfo_o *)0x0) goto label_05ca84b4;
label_05ca8561:
    if (__this == (UI_MobileLayoutDropdownOverlay_o *)0x0) goto label_05ca85eb;
label_05ca856a:
    (__this->fields)._optionsPanel = (UnityEngine_GameObject_o *)0x0;
  }
  else {
    if ((TypeInfo_UI_MobileLayoutDropdownOverlay->_2).cctor_finished_or_no_cctor == 0) goto label_05ca8546;
label_05ca84a1:
    pSVar4 = TypeInfo_UI_MobileLayoutDropdownOverlay->static_fields->OptionsPanelField;
    if (pSVar4 == (System_Reflection_FieldInfo_o *)0x0) goto label_05ca8561;
label_05ca84b4:
    pUVar2 = (UnityEngine_GameObject_o *)
             (*(pSVar4->klass->vtable)._26_unknown.methodPtr)
                       (pSVar4,dropdown,(pSVar4->klass->vtable)._26_unknown.method);
    if (__this == (UI_MobileLayoutDropdownOverlay_o *)0x0) goto label_05ca85eb;
    if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto label_05ca856a;
    pUVar3 = (UnityEngine_GameObject_o *)0x0;
    if (pUVar2->klass == TypeInfo_UnityEngine_GameObject) {
      pUVar3 = pUVar2;
    }
    (__this->fields)._optionsPanel = pUVar3;
  }
  Il2CppCodeGenWriteBarrier(&(__this->fields)._optionsPanel);
  x = (UnityEngine_Object_o *)(__this->fields)._optionsPanel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  pUVar2 = (__this->fields)._optionsPanel;
  if ((pUVar2 != (UnityEngine_GameObject_o *)0x0) &&
     (__this_00 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_Transform_o *)0x0)) {
    UnityEngine_Transform__SetParent_692d510(__this_00,overlayRoot,true,(MethodInfo *)0x0);
    return;
  }
label_05ca85eb:
  ThrowNullReferenceException();
}


// UI.MobileLayoutDropdownOverlay$$LateUpdate
// il2cpp: void UI_MobileLayoutDropdownOverlay__LateUpdate (UI_MobileLayoutDropdownOverlay_o* __this, const MethodInfo* method);
// 0x5cb07c0

void UI_MobileLayoutDropdownOverlay__LateUpdate(UI_MobileLayoutDropdownOverlay_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *pUVar1;
  bool bVar2;
  UnityEngine_Transform_o *__this_00;
  
  if (Il2CppMethodInitialized_07547a9b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547a9b = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._optionsPanel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    return;
  }
  pUVar1 = (__this->fields)._optionsPanel;
  if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
    bVar2 = UnityEngine_GameObject__get_activeSelf(pUVar1,(MethodInfo *)0x0);
    if (!bVar2) {
      return;
    }
    pUVar1 = (__this->fields)._optionsPanel;
    if ((pUVar1 != (UnityEngine_GameObject_o *)0x0) &&
       (__this_00 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__SetAsLastSibling(__this_00,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MobileLayoutDropdownOverlay$$.ctor
// il2cpp: void UI_MobileLayoutDropdownOverlay___ctor (UI_MobileLayoutDropdownOverlay_o* __this, const MethodInfo* method);
// 0x5cb0860

void UI_MobileLayoutDropdownOverlay___ctor(UI_MobileLayoutDropdownOverlay_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MobileLayoutDropdownOverlay$$.cctor
// il2cpp: void UI_MobileLayoutDropdownOverlay___cctor (const MethodInfo* method);
// 0x5cb0870

void UI_MobileLayoutDropdownOverlay___cctor(MethodInfo *method)

{
  Il2CppType *handle;
  System_Type_o *pSVar1;
  System_Reflection_FieldInfo_o *pSVar2;
  
  if (Il2CppMethodInitialized_07547a9c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UI_DropdownSettingElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileLayoutDropdownOverlay);
    il2cpp_codegen_initialize_runtime_metadata(&"_optionsPanel");
    Il2CppMethodInitialized_07547a9c = '\x01';
  }
  handle = TypeRef_UI_DropdownSettingElement;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  pSVar1 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (pSVar1 == (System_Type_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar2 = (System_Reflection_FieldInfo_o *)
           (*(pSVar1->klass->vtable)._90_unknown.methodPtr)
                     (pSVar1,"_optionsPanel",0x24,(pSVar1->klass->vtable)._90_unknown.method);
  TypeInfo_UI_MobileLayoutDropdownOverlay->static_fields->OptionsPanelField = pSVar2;
  Il2CppCodeGenWriteBarrier(&TypeInfo_UI_MobileLayoutDropdownOverlay->static_fields->OptionsPanelField);
  return;
}


