// Type: CustomLogic.BuiltinComponentInstance
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/BuiltinComponentInstance.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.BuiltinComponentInstance$$.ctor
// il2cpp: void CustomLogic_BuiltinComponentInstance___ctor (CustomLogic_BuiltinComponentInstance_o* __this, UnityEngine_Component_o* component, const MethodInfo* method);
// 0x3f491d0

void CustomLogic_BuiltinComponentInstance___ctor
               (CustomLogic_BuiltinComponentInstance_o *__this,UnityEngine_Component_o *component,
               MethodInfo *method)

{
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)component;
  if (DAT_05703e21 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_05703e21 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,method_00);
  (__this->fields).Component = component;
  il2cpp_runtime_glue(&(__this->fields).Component,component);
  return;
}


// CustomLogic.BuiltinComponentInstance$$GetOrAddComponent<object>
// il2cpp: Il2CppObject* CustomLogic_BuiltinComponentInstance__GetOrAddComponent_object_ (UnityEngine_GameObject_o* gameObject, const MethodInfo_249E140* method);
// 0x259e140

Il2CppObject *
CustomLogic_BuiltinComponentInstance__GetOrAddComponent<object>
          (UnityEngine_GameObject_o *gameObject,MethodInfo_249E140 *method)

{
  bool_conflict bVar1;
  UnityEngine_Object_o *x;
  Il2CppObject *pIVar2;
  
  if (method->rgctx_data == (MethodInfo_249E140_RGCTXs *)0x0) {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    if (method->rgctx_data == (MethodInfo_249E140_RGCTXs *)0x0) {
      il2cpp_glue_022c2910(method);
    }
  }
  if (gameObject != (UnityEngine_GameObject_o *)0x0) {
    x = (UnityEngine_Object_o *)
        UnityEngine_GameObject__GetComponent<object>
                  (gameObject,
                   (MethodInfo_24F0F80 *)
                   method->rgctx_data->_0_UnityEngine_GameObject_GetComponent_T_);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      return (Il2CppObject *)x;
    }
    pIVar2 = UnityEngine_GameObject__AddComponent<object>
                       (gameObject,
                        (MethodInfo_24F0EB0 *)
                        method->rgctx_data->_2_UnityEngine_GameObject_AddComponent_T_);
    return pIVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.BuiltinComponentInstance$$get_Enabled
// il2cpp: bool CustomLogic_BuiltinComponentInstance__get_Enabled (CustomLogic_BuiltinComponentInstance_o* __this, const MethodInfo* method);
// 0x3f49230

bool_conflict
CustomLogic_BuiltinComponentInstance__get_Enabled
          (CustomLogic_BuiltinComponentInstance_o *__this,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_Behaviour_o *__this_00;
  bool_conflict bVar2;
  
  if (DAT_05703e22 == '\0') {
    il2cpp_init_method_metadata();
    DAT_05703e22 = '\x01';
  }
  __this_00 = (UnityEngine_Behaviour_o *)(__this->fields).Component;
  if (__this_00 != (UnityEngine_Behaviour_o *)0x0) {
    bVar1 = (TypeInfo_Behaviour->_2).naturalAligment;
    if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_Behaviour)) {
      if (__this_00 == (UnityEngine_Behaviour_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      bVar2 = UnityEngine_Behaviour__get_enabled(__this_00,(MethodInfo *)0x0);
      return bVar2;
    }
  }
  return 0;
}


// CustomLogic.BuiltinComponentInstance$$set_Enabled
// il2cpp: void CustomLogic_BuiltinComponentInstance__set_Enabled (CustomLogic_BuiltinComponentInstance_o* __this, bool value, const MethodInfo* method);
// 0x3f492a0

void CustomLogic_BuiltinComponentInstance__set_Enabled
               (CustomLogic_BuiltinComponentInstance_o *__this,bool_conflict value,
               MethodInfo *method)

{
  byte bVar1;
  UnityEngine_Behaviour_o *__this_00;
  
  if (DAT_05703e23 == '\0') {
    il2cpp_init_method_metadata();
    DAT_05703e23 = '\x01';
  }
  __this_00 = (UnityEngine_Behaviour_o *)(__this->fields).Component;
  if (__this_00 != (UnityEngine_Behaviour_o *)0x0) {
    bVar1 = (TypeInfo_Behaviour->_2).naturalAligment;
    if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_Behaviour)) {
      if (__this_00 == (UnityEngine_Behaviour_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      UnityEngine_Behaviour__set_enabled(__this_00,value & 0xff,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// CustomLogic.BuiltinComponentInstance$$Unload
// il2cpp: void CustomLogic_BuiltinComponentInstance__Unload (CustomLogic_BuiltinComponentInstance_o* __this, const MethodInfo* method);
// 0x3f49320

void CustomLogic_BuiltinComponentInstance__Unload
               (CustomLogic_BuiltinComponentInstance_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  bool_conflict bVar2;
  UnityEngine_Component_o **ppUVar3;
  
  if (DAT_05703e24 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05703e24 = '\x01';
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields).Component;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    ppUVar3 = &(__this->fields).Component;
    pUVar1 = (UnityEngine_Object_o *)*ppUVar3;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy(pUVar1,(MethodInfo *)0x0);
    *ppUVar3 = (UnityEngine_Component_o *)0x0;
    il2cpp_runtime_glue(ppUVar3,0);
    return;
  }
  return;
}


