// Type: CustomLogic.CustomLogicClassInstance
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicClassInstance.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/CustomLogic/Builtin/CustomLogicClassInstance.cs  [CHANGED since prior version]
// --------------------------------

// CustomLogic.CustomLogicClassInstance$$SetContainsTypeOverride
// il2cpp: void CustomLogic_CustomLogicClassInstance__SetContainsTypeOverride (CustomLogic_CustomLogicClassInstance_o* __this, bool contains, const MethodInfo* method);
// 0x3f4ef80

void CustomLogic_CustomLogicClassInstance__SetContainsTypeOverride
               (CustomLogic_CustomLogicClassInstance_o *__this,bool_conflict contains,
               MethodInfo *method)

{
  *(char *)&(__this->fields)._containsTypeOverride = (char)contains;
  return;
}


// CustomLogic.CustomLogicClassInstance$$get_Namespace
// il2cpp: System_Nullable_CustomLogicSourceType__o CustomLogic_CustomLogicClassInstance__get_Namespace (CustomLogic_CustomLogicClassInstance_o* __this, const MethodInfo* method);
// 0x3f4ef90

System_Nullable_CustomLogicSourceType__o
CustomLogic_CustomLogicClassInstance__get_Namespace
          (CustomLogic_CustomLogicClassInstance_o *__this,MethodInfo *method)

{
  return (System_Nullable_CustomLogicSourceType__o)
         (__this->fields)._Namespace_k__BackingField.fields;
}


// CustomLogic.CustomLogicClassInstance$$set_Namespace
// il2cpp: void CustomLogic_CustomLogicClassInstance__set_Namespace (CustomLogic_CustomLogicClassInstance_o* __this, System_Nullable_CustomLogicSourceType__o value, const MethodInfo* method);
// 0x3f4efa0

void CustomLogic_CustomLogicClassInstance__set_Namespace
               (CustomLogic_CustomLogicClassInstance_o *__this,
               System_Nullable_CustomLogicSourceType__o value,MethodInfo *method)

{
  (__this->fields)._Namespace_k__BackingField.fields = value.fields;
  return;
}


// CustomLogic.CustomLogicClassInstance$$.ctor
// il2cpp: void CustomLogic_CustomLogicClassInstance___ctor (CustomLogic_CustomLogicClassInstance_o* __this, const MethodInfo* method);
// 0x3f48ea0

void CustomLogic_CustomLogicClassInstance___ctor
               (CustomLogic_CustomLogicClassInstance_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if (DAT_05703e58 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_Object);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__object);
    DAT_05703e58 = '\x01';
  }
  *(undefined1 *)&(__this->fields).Enabled = 1;
  *(undefined1 *)&(__this->fields)._LookupBaseClassForVariables_k__BackingField = 1;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_string__object);
  System_Collections_Generic_Dictionary<object__object>___ctor(__this_00,MethodInfo_Dictionary_2_System_String_System_Object);
  (__this->fields).Variables = (System_Collections_Generic_Dictionary_string__object__o *)__this_00;
  il2cpp_runtime_glue(&(__this->fields).Variables,__this_00);
  return;
}


// CustomLogic.CustomLogicClassInstance$$get_LookupBaseClassForVariables
// il2cpp: bool CustomLogic_CustomLogicClassInstance__get_LookupBaseClassForVariables (CustomLogic_CustomLogicClassInstance_o* __this, const MethodInfo* method);
// 0x3f4efb0

bool_conflict
CustomLogic_CustomLogicClassInstance__get_LookupBaseClassForVariables
          (CustomLogic_CustomLogicClassInstance_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),
                  (char)(__this->fields)._LookupBaseClassForVariables_k__BackingField);
}


// CustomLogic.CustomLogicClassInstance$$ToString
// il2cpp: System_String_o* CustomLogic_CustomLogicClassInstance__ToString (CustomLogic_CustomLogicClassInstance_o* __this, const MethodInfo* method);
// 0x3f4efc0

System_String_o *
CustomLogic_CustomLogicClassInstance__ToString
          (CustomLogic_CustomLogicClassInstance_o *__this,MethodInfo *method)

{
  int iVar1;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  
  if (DAT_05703e59 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&"__Str__");
    il2cpp_init_method_metadata(&"(CustomLogicClassInstance)");
    DAT_05703e59 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
    in_RDX = extraout_RDX;
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    in_RDX = extraout_RDX_00;
  }
  else {
    __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  if ((__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) &&
     (bVar2 = CustomLogic_CustomLogicClassInstance__HasVariable(__this,"__Str__",in_RDX),
     (char)bVar2 != '\0')) {
    pSVar3 = (System_String_o *)
             CustomLogic_CustomLogicEvaluator__EvaluateMethod
                       (__this_00,__this,"__Str__",(System_Object_array *)0x0,0,(MethodInfo *)0x0
                       );
    if ((pSVar3 != (System_String_o *)0x0) && (pSVar3->klass != DAT_057110b0)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(pSVar3);
    }
    return pSVar3;
  }
  pSVar3 = (System_String_o *)
           (*(__this->klass->vtable)._4_unknown.methodPtr)
                     (__this,(__this->klass->vtable)._4_unknown.method);
  pSVar3 = System_String__Concat("(CustomLogicClassInstance)",pSVar3,(MethodInfo *)0x0);
  return pSVar3;
}


// CustomLogic.CustomLogicClassInstance$$GetHashCode
// il2cpp: int32_t CustomLogic_CustomLogicClassInstance__GetHashCode (CustomLogic_CustomLogicClassInstance_o* __this, const MethodInfo* method);
// 0x3f4f0d0

int32_t CustomLogic_CustomLogicClassInstance__GetHashCode
                  (CustomLogic_CustomLogicClassInstance_o *__this,MethodInfo *method)

{
  int iVar1;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  bool_conflict bVar2;
  int32_t iVar3;
  Il2CppObject *pIVar4;
  int32_t *piVar5;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  
  if (DAT_05703e5a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&"__Hash__");
    DAT_05703e5a = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
    in_RDX = extraout_RDX;
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    in_RDX = extraout_RDX_00;
  }
  else {
    __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  if ((__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) ||
     (bVar2 = CustomLogic_CustomLogicClassInstance__HasVariable(__this,"__Hash__",in_RDX),
     (char)bVar2 == '\0')) {
    iVar3 = System_Object__GetHashCode((Il2CppObject *)__this,(MethodInfo *)0x0);
    return iVar3;
  }
  pIVar4 = CustomLogic_CustomLogicEvaluator__EvaluateMethod
                     (__this_00,__this,"__Hash__",(System_Object_array *)0x0,0,(MethodInfo *)0x0);
  if (pIVar4 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((pIVar4->klass->_1).element_class != *(Il2CppClass **)(DAT_05711068 + 0x40)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume(pIVar4);
  }
  piVar5 = (int32_t *)il2cpp_glue_022c7330(pIVar4);
  return *piVar5;
}


// CustomLogic.CustomLogicClassInstance$$Equals
// il2cpp: bool CustomLogic_CustomLogicClassInstance__Equals (CustomLogic_CustomLogicClassInstance_o* __this, Il2CppObject* obj, const MethodInfo* method);
// 0x3f4f1d0

bool_conflict
CustomLogic_CustomLogicClassInstance__Equals
          (CustomLogic_CustomLogicClassInstance_o *__this,Il2CppObject *obj,MethodInfo *method)

{
  int iVar1;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  bool_conflict bVar2;
  System_Object_array *parameterValues;
  long lVar3;
  Il2CppObject *pIVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  
  if (DAT_05703e5b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&"__Eq__");
    DAT_05703e5b = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
    method = extraout_RDX;
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    method = extraout_RDX_00;
  }
  else {
    __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  if ((__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) ||
     (bVar2 = CustomLogic_CustomLogicClassInstance__HasVariable(__this,"__Eq__",method),
     (char)bVar2 == '\0')) {
    bVar2 = System_Object__Equals((Il2CppObject *)__this,obj,(MethodInfo *)0x0);
    return bVar2;
  }
  parameterValues = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
  if (parameterValues != (System_Object_array *)0x0) {
    if ((obj != (Il2CppObject *)0x0) &&
       (lVar3 = il2cpp_runtime_glue(obj,(((parameterValues->obj).klass)->_1).element_class),
       lVar3 == 0)) {
      uVar6 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
      il2cpp_glue_02274a00(uVar6,0);
    }
    if ((int)parameterValues->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    parameterValues->m_Items[0] = obj;
    il2cpp_runtime_glue(parameterValues->m_Items,obj);
    pIVar4 = CustomLogic_CustomLogicEvaluator__EvaluateMethod
                       (__this_00,__this,"__Eq__",parameterValues,0,(MethodInfo *)0x0);
    if (pIVar4 != (Il2CppObject *)0x0) {
      if ((pIVar4->klass->_1).element_class != *(Il2CppClass **)(DAT_05711048 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pIVar4);
      }
      puVar5 = (undefined1 *)il2cpp_glue_022c7330(pIVar4);
      return (bool_conflict)CONCAT71((int7)((ulong)puVar5 >> 8),*puVar5);
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicClassInstance$$GetVariable
// il2cpp: Il2CppObject* CustomLogic_CustomLogicClassInstance__GetVariable (CustomLogic_CustomLogicClassInstance_o* __this, System_String_o* name, const MethodInfo* method);
// 0x3f4f360

Il2CppObject *
CustomLogic_CustomLogicClassInstance__GetVariable
          (CustomLogic_CustomLogicClassInstance_o *__this,System_String_o *name,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar3;
  System_Exception_o *__this_00;
  MethodInfo *in_RCX;
  Il2CppObject *local_20;
  
  local_20 = (Il2CppObject *)0x0;
  bVar1 = CustomLogic_CustomLogicClassInstance__TryGetVariable(__this,name,&local_20,in_RCX);
  if ((char)bVar1 != '\0') {
    return local_20;
  }
  pSVar2 = (System_String_o *)
           (*(__this->klass->vtable)._4_unknown.methodPtr)
                     (__this,(__this->klass->vtable)._4_unknown.method);
  str0 = (System_String_o *)il2cpp_init_method_metadata(&"Variable ");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&" not found in class ");
  pSVar2 = System_String__Concat(str0,name,str2,pSVar2,(MethodInfo *)0x0);
  uVar3 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this_00 = (System_Exception_o *)il2cpp_runtime_glue(uVar3);
  System_Exception___ctor(__this_00,pSVar2,(MethodInfo *)0x0);
  uVar3 = il2cpp_init_method_metadata(&MethodInfo_Object_GetVariable);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar3);
}


// CustomLogic.CustomLogicClassInstance$$TryGetVariable
// il2cpp: bool CustomLogic_CustomLogicClassInstance__TryGetVariable (CustomLogic_CustomLogicClassInstance_o* __this, System_String_o* name, Il2CppObject** variable, const MethodInfo* method);
// 0x3f4f420

bool_conflict
CustomLogic_CustomLogicClassInstance__TryGetVariable
          (CustomLogic_CustomLogicClassInstance_o *__this,System_String_o *name,
          Il2CppObject **variable,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  char cVar3;
  bool_conflict bVar4;
  System_Collections_Generic_HashSet_object__o *__this_00;
  Il2CppObject *local_50;
  CustomLogic_CustomLogicClassInstance_o *local_48;
  Il2CppObject **local_40;
  Il2CppObject *local_38;
  
  if (DAT_05703e5c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicBuiltinTypes);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String__get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    DAT_05703e5c = '\x01';
  }
  local_38 = (Il2CppObject *)0x0;
  local_50 = (Il2CppObject *)0x0;
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Variables;
  if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_03f4f6d4;
  bVar4 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                    (pSVar2,(Il2CppObject *)name,&local_38,MethodInfo_Boolean_TryGetValue);
  if ((char)bVar4 == '\0') {
    local_48 = __this;
    local_40 = variable;
    variable = (Il2CppObject **)(*(__this->klass->vtable)._4_unknown.methodPtr)(__this);
LAB_03f4f530:
    iVar1 = *(int *)(TypeInfo_CustomLogicBuiltinTypes + 0xe4);
    do {
      if (iVar1 == 0) {
        il2cpp_init_class();
      }
      bVar4 = CustomLogic_CustomLogicBuiltinTypes__IsBuiltinType
                        ((System_String_o *)variable,(MethodInfo *)0x0);
      if ((char)bVar4 == '\0') {
LAB_03f4f673:
        *local_40 = (Il2CppObject *)0x0;
        il2cpp_runtime_glue(local_40,0);
        return 0;
      }
      if (*(int *)(TypeInfo_CustomLogicBuiltinTypes + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_CustomLogicBuiltinTypes + 0xb8) + 0x18);
      if ((pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
         (__this_00 = (System_Collections_Generic_HashSet_object__o *)
                      System_Collections_Generic_Dictionary<object__object>__get_Item
                                (pSVar2,(Il2CppObject *)variable,MethodInfo_HashSet_1_System_String__get_Item),
         __this_00 == (System_Collections_Generic_HashSet_object__o *)0x0)) goto LAB_03f4f6d4;
      bVar4 = System_Collections_Generic_HashSet<object>__Contains
                        (__this_00,(Il2CppObject *)name,MethodInfo_Boolean_Contains);
      if ((char)bVar4 != '\0') goto code_r0x03f4f5a4;
      cVar3 = (*(local_48->klass->vtable)._5_get_LookupBaseClassForVariables.methodPtr)
                        (local_48,(local_48->klass->vtable)._5_get_LookupBaseClassForVariables.
                                  method);
      if (cVar3 == '\0') goto LAB_03f4f673;
      if (*(int *)(TypeInfo_CustomLogicBuiltinTypes + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_CustomLogicBuiltinTypes + 0xb8) + 0x10);
      if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
      goto LAB_03f4f6d4;
      bVar4 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                        (pSVar2,(Il2CppObject *)variable,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar4 == '\0') goto LAB_03f4f673;
      if (*(int *)(TypeInfo_CustomLogicBuiltinTypes + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_CustomLogicBuiltinTypes + 0xb8) + 0x10);
      if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
      goto LAB_03f4f6d4;
      variable = (Il2CppObject **)
                 System_Collections_Generic_Dictionary<object__object>__get_Item
                           (pSVar2,(Il2CppObject *)variable,MethodInfo_String_get_Item);
      iVar1 = *(int *)(TypeInfo_CustomLogicBuiltinTypes + 0xe4);
    } while( true );
  }
  *variable = local_38;
  il2cpp_runtime_glue(variable);
LAB_03f4f6c1:
  return (bool_conflict)CONCAT71((int7)((ulong)variable >> 8),1);
code_r0x03f4f5a4:
  bVar4 = CustomLogic_CLBindingCache__GetOrCreateBinding
                    ((System_String_o *)variable,name,(CustomLogic_ICLMemberBinding_o **)&local_50,
                     (MethodInfo *)0x0);
  if ((char)bVar4 != '\0') goto LAB_03f4f68a;
  goto LAB_03f4f530;
LAB_03f4f68a:
  *local_40 = local_50;
  il2cpp_runtime_glue();
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(local_48->fields).Variables;
  if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
LAB_03f4f6d4:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_Dictionary<object__object>__set_Item
            (pSVar2,(Il2CppObject *)name,local_50,MethodInfo_Void_set_Item);
  goto LAB_03f4f6c1;
}


// CustomLogic.CustomLogicClassInstance$$HasVariable
// il2cpp: bool CustomLogic_CustomLogicClassInstance__HasVariable (CustomLogic_CustomLogicClassInstance_o* __this, System_String_o* name, const MethodInfo* method);
// 0x3f37280

bool_conflict
CustomLogic_CustomLogicClassInstance__HasVariable
          (CustomLogic_CustomLogicClassInstance_o *__this,System_String_o *name,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  char cVar3;
  bool_conflict bVar4;
  System_String_o *typeName;
  System_Collections_Generic_HashSet_object__o *__this_00;
  undefined8 in_RCX;
  undefined8 uVar5;
  
  if (DAT_05703e5d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicBuiltinTypes);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String__get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    DAT_05703e5d = '\x01';
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Variables;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar4 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                      (pSVar2,(Il2CppObject *)name,MethodInfo_Boolean_ContainsKey);
    uVar5 = CONCAT71((int7)((ulong)in_RCX >> 8),1);
    if ((char)bVar4 != '\0') {
      return (bool_conflict)uVar5;
    }
    typeName = (System_String_o *)(*(__this->klass->vtable)._4_unknown.methodPtr)(__this);
    iVar1 = *(int *)(TypeInfo_CustomLogicBuiltinTypes + 0xe4);
    while( true ) {
      if (iVar1 == 0) {
        il2cpp_init_class();
      }
      bVar4 = CustomLogic_CustomLogicBuiltinTypes__IsBuiltinType(typeName,(MethodInfo *)0x0);
      if ((char)bVar4 == '\0') {
        return 0;
      }
      if (*(int *)(TypeInfo_CustomLogicBuiltinTypes + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_CustomLogicBuiltinTypes + 0xb8) + 0x18);
      if ((pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
         (__this_00 = (System_Collections_Generic_HashSet_object__o *)
                      System_Collections_Generic_Dictionary<object__object>__get_Item
                                (pSVar2,(Il2CppObject *)typeName,MethodInfo_HashSet_1_System_String__get_Item),
         __this_00 == (System_Collections_Generic_HashSet_object__o *)0x0)) break;
      bVar4 = System_Collections_Generic_HashSet<object>__Contains
                        (__this_00,(Il2CppObject *)name,MethodInfo_Boolean_Contains);
      if ((char)bVar4 != '\0') {
        return (bool_conflict)CONCAT71((int7)((ulong)uVar5 >> 8),1);
      }
      cVar3 = (*(__this->klass->vtable)._5_get_LookupBaseClassForVariables.methodPtr)
                        (__this,(__this->klass->vtable)._5_get_LookupBaseClassForVariables.method);
      if (cVar3 == '\0') {
        return 0;
      }
      if (*(int *)(TypeInfo_CustomLogicBuiltinTypes + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_CustomLogicBuiltinTypes + 0xb8) + 0x10);
      if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
      bVar4 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                        (pSVar2,(Il2CppObject *)typeName,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar4 == '\0') {
        return 0;
      }
      if (*(int *)(TypeInfo_CustomLogicBuiltinTypes + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_CustomLogicBuiltinTypes + 0xb8) + 0x10);
      if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
      typeName = (System_String_o *)
                 System_Collections_Generic_Dictionary<object__object>__get_Item
                           (pSVar2,(Il2CppObject *)typeName,MethodInfo_String_get_Item);
      iVar1 = *(int *)(TypeInfo_CustomLogicBuiltinTypes + 0xe4);
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicClassInstance$$ShowVariableInInspector
// il2cpp: bool CustomLogic_CustomLogicClassInstance__ShowVariableInInspector (CustomLogic_CustomLogicClassInstance_o* __this, System_String_o* name, const MethodInfo* method);
// 0x3f4b660

bool_conflict
CustomLogic_CustomLogicClassInstance__ShowVariableInInspector
          (CustomLogic_CustomLogicClassInstance_o *__this,System_String_o *name,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (DAT_05703e5e == '\0') {
    il2cpp_init_method_metadata(&"Type");
    DAT_05703e5e = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Type",(MethodInfo *)0x0);
  if (((char)bVar1 != '\0') && ((char)(__this->fields)._containsTypeOverride == '\0')) {
    return 0;
  }
  return (bool_conflict)CONCAT71((uint7)(uint3)((uint)bVar1 >> 8),1);
}


