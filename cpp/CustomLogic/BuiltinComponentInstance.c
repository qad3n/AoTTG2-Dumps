// Type: CustomLogic.BuiltinComponentInstance
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/BuiltinComponentInstance.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.BuiltinComponentInstance$$.ctor
// il2cpp: void CustomLogic_BuiltinComponentInstance___ctor (CustomLogic_BuiltinComponentInstance_o* __this, UnityEngine_Component_o* component, const MethodInfo* method);
// 0x18209b2e0

void CustomLogic_BuiltinComponentInstance___ctor
               (CustomLogic_BuiltinComponentInstance_o *__this,UnityEngine_Component_o *component,
               MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434689e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_18434689e = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Component = component;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Component,component);
  return;
}


// CustomLogic.BuiltinComponentInstance$$GetOrAddComponent<object>
// il2cpp: Il2CppObject* CustomLogic_BuiltinComponentInstance__GetOrAddComponent_object_ (UnityEngine_GameObject_o* gameObject, const MethodInfo_659F10* method);
// 0x180659f10

Il2CppObject *
CustomLogic_BuiltinComponentInstance__GetOrAddComponent_object_
          (UnityEngine_GameObject_o *gameObject,MethodInfo_659F10 *method)

{
  bool bVar1;
  UnityEngine_Object_o *x;
  Il2CppObject *pIVar2;
  
  if (method->rgctx_data == (MethodInfo_659F10_RGCTXs *)0x0) {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    if (method->rgctx_data == (MethodInfo_659F10_RGCTXs *)0x0) {
      il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
    }
  }
  if (gameObject != (UnityEngine_GameObject_o *)0x0) {
    x = (UnityEngine_Object_o *)
        UnityEngine_GameObject__GetComponent_object_
                  (gameObject,
                   (MethodInfo_6F5650 *)method->rgctx_data->_0_UnityEngine_GameObject_GetComponent_T_);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      return (Il2CppObject *)x;
    }
    pIVar2 = UnityEngine_GameObject__AddComponent_object_
                       (gameObject,
                        (MethodInfo_6F4D60 *)method->rgctx_data->_2_UnityEngine_GameObject_AddComponent_T_);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.BuiltinComponentInstance$$get_Enabled
// il2cpp: bool CustomLogic_BuiltinComponentInstance__get_Enabled (CustomLogic_BuiltinComponentInstance_o* __this, const MethodInfo* method);
// 0x18209b350

bool CustomLogic_BuiltinComponentInstance__get_Enabled
               (CustomLogic_BuiltinComponentInstance_o *__this,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_Behaviour_o *__this_00;
  bool bVar2;
  
  if (Il2CppMethodInitialized_18434689f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Behaviour);
    Il2CppMethodInitialized_18434689f = '\x01';
  }
  __this_00 = (UnityEngine_Behaviour_o *)(__this->fields).Component;
  if (__this_00 != (UnityEngine_Behaviour_o *)0x0) {
    bVar1 = (TypeInfo_UnityEngine_Behaviour->_2).typeHierarchyDepth;
    if ((bVar1 <= (__this_00->klass->_2).typeHierarchyDepth) &&
       ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_UnityEngine_Behaviour)) {
      bVar2 = UnityEngine_Behaviour__get_enabled(__this_00,(MethodInfo *)0x0);
      return bVar2;
    }
  }
  return false;
}


// CustomLogic.BuiltinComponentInstance$$set_Enabled
// il2cpp: void CustomLogic_BuiltinComponentInstance__set_Enabled (CustomLogic_BuiltinComponentInstance_o* __this, bool value, const MethodInfo* method);
// 0x18209b3c0

void CustomLogic_BuiltinComponentInstance__set_Enabled
               (CustomLogic_BuiltinComponentInstance_o *__this,bool value,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_Behaviour_o *__this_00;
  
  if (Il2CppMethodInitialized_1843468a0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Behaviour);
    Il2CppMethodInitialized_1843468a0 = '\x01';
  }
  __this_00 = (UnityEngine_Behaviour_o *)(__this->fields).Component;
  if (__this_00 != (UnityEngine_Behaviour_o *)0x0) {
    bVar1 = (TypeInfo_UnityEngine_Behaviour->_2).typeHierarchyDepth;
    if ((bVar1 <= (__this_00->klass->_2).typeHierarchyDepth) &&
       ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_UnityEngine_Behaviour)) {
      UnityEngine_Behaviour__set_enabled(__this_00,value,(MethodInfo *)0x0);
    }
  }
  return;
}


// CustomLogic.BuiltinComponentInstance$$Unload
// il2cpp: void CustomLogic_BuiltinComponentInstance__Unload (CustomLogic_BuiltinComponentInstance_o* __this, const MethodInfo* method);
// 0x18209b240

void CustomLogic_BuiltinComponentInstance__Unload
               (CustomLogic_BuiltinComponentInstance_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_1843468a1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843468a1 = '\x01';
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields).Component;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (UnityEngine_Object_o *)(__this->fields).Component;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_2f1ff70(pUVar1,(MethodInfo *)0x0);
    (__this->fields).Component = (UnityEngine_Component_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields).Component,(void *)0x0);
  }
  return;
}


