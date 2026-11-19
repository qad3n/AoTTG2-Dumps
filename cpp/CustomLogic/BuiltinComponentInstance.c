// Type: CustomLogic.BuiltinComponentInstance
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/CustomLogic/BuiltinComponentInstance.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.BuiltinComponentInstance$$.ctor
// il2cpp: void CustomLogic_BuiltinComponentInstance___ctor (CustomLogic_BuiltinComponentInstance_o* __this, UnityEngine_Component_o* component, const MethodInfo* method);
// 0x5b6a660

void CustomLogic_BuiltinComponentInstance___ctor
               (CustomLogic_BuiltinComponentInstance_o *__this,UnityEngine_Component_o *component,
               MethodInfo *method)

{
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)component;
  if (Il2CppMethodInitialized_07547313 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07547313 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,method_00);
  (__this->fields).Component = component;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Component);
  return;
}


// CustomLogic.BuiltinComponentInstance$$GetOrAddComponent<object>
// il2cpp: Il2CppObject* CustomLogic_BuiltinComponentInstance__GetOrAddComponent_object_ (UnityEngine_GameObject_o* gameObject, const MethodInfo_3479500* method);
// 0x3579500

Il2CppObject *
CustomLogic_BuiltinComponentInstance__GetOrAddComponent_object_
          (UnityEngine_GameObject_o *gameObject,MethodInfo_3479500 *method)

{
  bool bVar1;
  UnityEngine_Object_o *x;
  Il2CppObject *pIVar2;
  
  if (method->rgctx_data == (MethodInfo_3479500_RGCTXs *)0x0) {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    if (method->rgctx_data == (MethodInfo_3479500_RGCTXs *)0x0) {
      il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
    }
  }
  if (gameObject == (UnityEngine_GameObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  x = (UnityEngine_Object_o *)
      UnityEngine_GameObject__GetComponent_object_
                (gameObject,
                 (MethodInfo_353B730 *)method->rgctx_data->_0_UnityEngine_GameObject_GetComponent_T_);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return (Il2CppObject *)x;
  }
  pIVar2 = UnityEngine_GameObject__AddComponent_object_
                     (gameObject,
                      (MethodInfo_353B6A0 *)method->rgctx_data->_2_UnityEngine_GameObject_AddComponent_T_);
  return pIVar2;
}


// CustomLogic.BuiltinComponentInstance$$get_Enabled
// il2cpp: bool CustomLogic_BuiltinComponentInstance__get_Enabled (CustomLogic_BuiltinComponentInstance_o* __this, const MethodInfo* method);
// 0x5b6a6c0

bool CustomLogic_BuiltinComponentInstance__get_Enabled
               (CustomLogic_BuiltinComponentInstance_o *__this,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_Behaviour_o *__this_00;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07547314 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Behaviour);
    Il2CppMethodInitialized_07547314 = '\x01';
  }
  __this_00 = (UnityEngine_Behaviour_o *)(__this->fields).Component;
  if (__this_00 != (UnityEngine_Behaviour_o *)0x0) {
    bVar1 = (TypeInfo_UnityEngine_Behaviour->_2).typeHierarchyDepth;
    if ((bVar1 <= (__this_00->klass->_2).typeHierarchyDepth) &&
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_UnityEngine_Behaviour)) {
      bVar2 = UnityEngine_Behaviour__get_enabled(__this_00,(MethodInfo *)0x0);
      return bVar2;
    }
  }
  return false;
}


// CustomLogic.BuiltinComponentInstance$$set_Enabled
// il2cpp: void CustomLogic_BuiltinComponentInstance__set_Enabled (CustomLogic_BuiltinComponentInstance_o* __this, bool value, const MethodInfo* method);
// 0x5b6a720

void CustomLogic_BuiltinComponentInstance__set_Enabled
               (CustomLogic_BuiltinComponentInstance_o *__this,bool value,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_Behaviour_o *__this_00;
  
  if (Il2CppMethodInitialized_07547315 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Behaviour);
    Il2CppMethodInitialized_07547315 = '\x01';
  }
  __this_00 = (UnityEngine_Behaviour_o *)(__this->fields).Component;
  if (__this_00 != (UnityEngine_Behaviour_o *)0x0) {
    bVar1 = (TypeInfo_UnityEngine_Behaviour->_2).typeHierarchyDepth;
    if ((bVar1 <= (__this_00->klass->_2).typeHierarchyDepth) &&
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_UnityEngine_Behaviour)) {
      UnityEngine_Behaviour__set_enabled(__this_00,value,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// CustomLogic.BuiltinComponentInstance$$Unload
// il2cpp: void CustomLogic_BuiltinComponentInstance__Unload (CustomLogic_BuiltinComponentInstance_o* __this, const MethodInfo* method);
// 0x5b6a790

void CustomLogic_BuiltinComponentInstance__Unload
               (CustomLogic_BuiltinComponentInstance_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  bool bVar2;
  UnityEngine_Component_o **targetAddress;
  
  if (Il2CppMethodInitialized_07547316 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547316 = '\x01';
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields).Component;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    targetAddress = &(__this->fields).Component;
    pUVar1 = (UnityEngine_Object_o *)*targetAddress;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0(pUVar1,(MethodInfo *)0x0);
    *targetAddress = (UnityEngine_Component_o *)0x0;
    Il2CppCodeGenWriteBarrier(targetAddress);
    return;
  }
  return;
}


