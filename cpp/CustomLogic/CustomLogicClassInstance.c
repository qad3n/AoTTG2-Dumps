// Type: CustomLogic.CustomLogicClassInstance
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicClassInstance.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicClassInstance.cs
// --------------------------------

// CustomLogic.CustomLogicClassInstance$$get_Enabled
// il2cpp: bool CustomLogic_CustomLogicClassInstance__get_Enabled (CustomLogic_CustomLogicClassInstance_o* __this, const MethodInfo* method);
// 0x5b725c0

bool CustomLogic_CustomLogicClassInstance__get_Enabled
               (CustomLogic_CustomLogicClassInstance_o *__this,MethodInfo *method)

{
  return (__this->fields)._Enabled_k__BackingField;
}


// CustomLogic.CustomLogicClassInstance$$set_Enabled
// il2cpp: void CustomLogic_CustomLogicClassInstance__set_Enabled (CustomLogic_CustomLogicClassInstance_o* __this, bool value, const MethodInfo* method);
// 0x5b725d0

void CustomLogic_CustomLogicClassInstance__set_Enabled
               (CustomLogic_CustomLogicClassInstance_o *__this,bool value,MethodInfo *method)

{
  (__this->fields)._Enabled_k__BackingField = value;
  return;
}


// CustomLogic.CustomLogicClassInstance$$SetContainsTypeOverride
// il2cpp: void CustomLogic_CustomLogicClassInstance__SetContainsTypeOverride (CustomLogic_CustomLogicClassInstance_o* __this, bool contains, const MethodInfo* method);
// 0x5b725e0

void CustomLogic_CustomLogicClassInstance__SetContainsTypeOverride
               (CustomLogic_CustomLogicClassInstance_o *__this,bool contains,MethodInfo *method)

{
  (__this->fields)._containsTypeOverride = contains;
  return;
}


// CustomLogic.CustomLogicClassInstance$$get_Namespace
// il2cpp: System_Nullable_CustomLogicSourceType__o CustomLogic_CustomLogicClassInstance__get_Namespace (CustomLogic_CustomLogicClassInstance_o* __this, const MethodInfo* method);
// 0x5b725f0

System_Nullable_CustomLogicSourceType__o
CustomLogic_CustomLogicClassInstance__get_Namespace
          (CustomLogic_CustomLogicClassInstance_o *__this,MethodInfo *method)

{
  return (System_Nullable_CustomLogicSourceType__o)(__this->fields)._Namespace_k__BackingField.fields;
}


// CustomLogic.CustomLogicClassInstance$$set_Namespace
// il2cpp: void CustomLogic_CustomLogicClassInstance__set_Namespace (CustomLogic_CustomLogicClassInstance_o* __this, System_Nullable_CustomLogicSourceType__o value, const MethodInfo* method);
// 0x5b72600

void CustomLogic_CustomLogicClassInstance__set_Namespace
               (CustomLogic_CustomLogicClassInstance_o *__this,System_Nullable_CustomLogicSourceType__o value,
               MethodInfo *method)

{
  (__this->fields)._Namespace_k__BackingField.fields = value.fields;
  return;
}


// CustomLogic.CustomLogicClassInstance$$.ctor
// il2cpp: void CustomLogic_CustomLogicClassInstance___ctor (CustomLogic_CustomLogicClassInstance_o* __this, const MethodInfo* method);
// 0x5b6a330

void CustomLogic_CustomLogicClassInstance___ctor
               (CustomLogic_CustomLogicClassInstance_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__object__o *__this_00;
  
  if (Il2CppMethodInitialized_07547350 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_object);
    Il2CppMethodInitialized_07547350 = '\x01';
  }
  (__this->fields)._Enabled_k__BackingField = true;
  (__this->fields)._LookupBaseClassForVariables_k__BackingField = true;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_object);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_ctor);
  (__this->fields).Variables = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Variables);
  return;
}


// CustomLogic.CustomLogicClassInstance$$get_LookupBaseClassForVariables
// il2cpp: bool CustomLogic_CustomLogicClassInstance__get_LookupBaseClassForVariables (CustomLogic_CustomLogicClassInstance_o* __this, const MethodInfo* method);
// 0x5b72610

bool CustomLogic_CustomLogicClassInstance__get_LookupBaseClassForVariables
               (CustomLogic_CustomLogicClassInstance_o *__this,MethodInfo *method)

{
  return (__this->fields)._LookupBaseClassForVariables_k__BackingField;
}


// CustomLogic.CustomLogicClassInstance$$ToString
// il2cpp: System_String_o* CustomLogic_CustomLogicClassInstance__ToString (CustomLogic_CustomLogicClassInstance_o* __this, const MethodInfo* method);
// 0x5b72620
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b72654: jmp 0x5b726ff

System_String_o *
CustomLogic_CustomLogicClassInstance__ToString
          (CustomLogic_CustomLogicClassInstance_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  bool bVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *in_R9;
  
  if (Il2CppMethodInitialized_07547351 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&"__Str__");
    il2cpp_codegen_initialize_runtime_metadata(&"(CustomLogicClassInstance)");
    Il2CppMethodInitialized_07547351 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
    in_RDX = extraout_RDX;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    in_RDX = extraout_RDX_00;
  }
  else {
    __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)
                 ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->static_fields + 8);
  }
  if ((__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) &&
     (bVar2 = CustomLogic_CustomLogicClassInstance__HasVariable(__this,"__Str__",in_RDX), bVar2))
  {
    pSVar3 = (System_String_o *)
             CustomLogic_CustomLogicEvaluator__EvaluateMethod
                       (__this_00,__this,"__Str__",(System_Object_array *)0x0,0,in_R9);
    pSVar4 = (System_String_o *)0x0;
    if (pSVar3 != (System_String_o *)0x0) {
      if ((Il2CppClass *)pSVar3->klass != g_data_07556758) {
        il2cpp_codegen_raise_invalid_cast_exception(pSVar3);
      }
      pSVar4 = pSVar3;
    }
    return pSVar4;
  }
  pSVar4 = (System_String_o *)
           (*(__this->klass->vtable)._6_unknown.methodPtr)(__this,(__this->klass->vtable)._6_unknown.method);
  pSVar4 = System_String__Concat_52f0320("(CustomLogicClassInstance)",pSVar4,(MethodInfo *)0x0);
  return pSVar4;
}


// CustomLogic.CustomLogicClassInstance$$GetHashCode
// il2cpp: int32_t CustomLogic_CustomLogicClassInstance__GetHashCode (CustomLogic_CustomLogicClassInstance_o* __this, const MethodInfo* method);
// 0x5b72940
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b72974: jmp 0x5b72a19

int32_t CustomLogic_CustomLogicClassInstance__GetHashCode
                  (CustomLogic_CustomLogicClassInstance_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  bool bVar2;
  int32_t iVar3;
  Il2CppObject *obj;
  int32_t *piVar4;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *in_R9;
  
  if (Il2CppMethodInitialized_07547352 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&"__Hash__");
    Il2CppMethodInitialized_07547352 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
    in_RDX = extraout_RDX;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    in_RDX = extraout_RDX_00;
  }
  else {
    __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)
                 ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->static_fields + 8);
  }
  if ((__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) ||
     (bVar2 = CustomLogic_CustomLogicClassInstance__HasVariable(__this,"__Hash__",in_RDX), !bVar2))
  {
    iVar3 = System_Object__GetHashCode((Il2CppObject *)__this,(MethodInfo *)0x0);
    return iVar3;
  }
  obj = CustomLogic_CustomLogicEvaluator__EvaluateMethod
                  (__this_00,__this,"__Hash__",(System_Object_array *)0x0,0,in_R9);
  if (obj == (Il2CppObject *)0x0) {
    ThrowNullReferenceException();
  }
  if ((obj->klass->_1).element_class != *(Il2CppClass **)(g_data_07556710 + 0x40)) {
    il2cpp_codegen_raise_invalid_cast_exception(obj);
  }
  piVar4 = il2cpp_vm_Object_Unbox(obj);
  return *piVar4;
}


// CustomLogic.CustomLogicClassInstance$$Equals
// il2cpp: bool CustomLogic_CustomLogicClassInstance__Equals (CustomLogic_CustomLogicClassInstance_o* __this, Il2CppObject* obj, const MethodInfo* method);
// 0x5b72a40
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b72a7b: jmp 0x5b72b92

bool CustomLogic_CustomLogicClassInstance__Equals
               (CustomLogic_CustomLogicClassInstance_o *__this,Il2CppObject *obj,MethodInfo *method)

{
  uint32_t uVar1;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  bool bVar2;
  System_Object_array *parameterValues;
  Il2CppObject *pIVar3;
  undefined1 *puVar4;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *in_R9;
  
  if (Il2CppMethodInitialized_07547353 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"__Eq__");
    Il2CppMethodInitialized_07547353 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
    method = extraout_RDX;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    method = extraout_RDX_00;
  }
  else {
    __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)
                 ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->static_fields + 8);
  }
  if ((__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) ||
     (bVar2 = CustomLogic_CustomLogicClassInstance__HasVariable(__this,"__Eq__",method), !bVar2))
  {
    bVar2 = System_Object__Equals((Il2CppObject *)__this,obj,(MethodInfo *)0x0);
    return bVar2;
  }
  parameterValues = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
  if (parameterValues != (System_Object_array *)0x0) {
    if ((obj != (Il2CppObject *)0x0) &&
       (pIVar3 = il2cpp_vm_Object_IsInst(obj,(((parameterValues->obj).klass)->_1).element_class),
       pIVar3 == (Il2CppObject *)0x0)) {
      pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
    }
    if ((int)parameterValues->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    parameterValues->m_Items[0] = obj;
    Il2CppCodeGenWriteBarrier(parameterValues->m_Items);
    pIVar3 = CustomLogic_CustomLogicEvaluator__EvaluateMethod
                       (__this_00,__this,"__Eq__",parameterValues,0,in_R9);
    if (pIVar3 != (Il2CppObject *)0x0) {
      if ((pIVar3->klass->_1).element_class != *(Il2CppClass **)(g_data_075566f0 + 0x40)) {
        il2cpp_codegen_raise_invalid_cast_exception(pIVar3);
      }
      puVar4 = il2cpp_vm_Object_Unbox(pIVar3);
      return (bool)*puVar4;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicClassInstance$$GetVariable
// il2cpp: Il2CppObject* CustomLogic_CustomLogicClassInstance__GetVariable (CustomLogic_CustomLogicClassInstance_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5b72bd0

Il2CppObject *
CustomLogic_CustomLogicClassInstance__GetVariable
          (CustomLogic_CustomLogicClassInstance_o *__this,System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this_00;
  MethodInfo *lastManagedFrame;
  MethodInfo *in_RCX;
  Il2CppObject *local_20;
  
  local_20 = (Il2CppObject *)0x0;
  bVar1 = CustomLogic_CustomLogicClassInstance__TryGetVariable(__this,name,&local_20,in_RCX);
  if (bVar1) {
    return local_20;
  }
  pSVar2 = (System_String_o *)
           (*(__this->klass->vtable)._6_unknown.methodPtr)(__this,(__this->klass->vtable)._6_unknown.method);
  str0 = il2cpp_codegen_get_runtime_metadata(&"Variable ");
  str2 = il2cpp_codegen_get_runtime_metadata(&" not found in class ");
  pSVar2 = System_String__Concat_5302810(str0,name,str2,pSVar2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this_00 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this_00,pSVar2,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicClassInstance_GetVariable);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// CustomLogic.CustomLogicClassInstance$$TryGetVariable
// il2cpp: bool CustomLogic_CustomLogicClassInstance__TryGetVariable (CustomLogic_CustomLogicClassInstance_o* __this, System_String_o* name, Il2CppObject** variable, const MethodInfo* method);
// 0x5b72c90

bool CustomLogic_CustomLogicClassInstance__TryGetVariable
               (CustomLogic_CustomLogicClassInstance_o *__this,System_String_o *name,Il2CppObject **variable,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool bVar2;
  System_String_o *typeName;
  System_Collections_Generic_HashSet_object__o *__this_00;
  Il2CppObject *local_50;
  CustomLogic_CustomLogicClassInstance_o *local_48;
  Il2CppObject **local_40;
  Il2CppObject *local_38;
  
  if (Il2CppMethodInitialized_07547354 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicBuiltinTypes);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_HashSet_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    Il2CppMethodInitialized_07547354 = '\x01';
  }
  local_38 = (Il2CppObject *)0x0;
  local_50 = (Il2CppObject *)0x0;
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Variables;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (pSVar1,(Il2CppObject *)name,&local_38,
                       (MethodInfo_4AAF440 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_object_TryGetValue);
    if (bVar2) {
      *variable = local_38;
      Il2CppCodeGenWriteBarrier(variable);
      return true;
    }
    local_48 = __this;
    local_40 = variable;
    typeName = (System_String_o *)(*(__this->klass->vtable)._6_unknown.methodPtr)(__this);
label_05b72da0:
    if ((TypeInfo_CustomLogic_CustomLogicBuiltinTypes->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBuiltinTypes);
    }
    bVar2 = CustomLogic_CustomLogicBuiltinTypes__IsBuiltinType(typeName,(MethodInfo *)0x0);
    if (bVar2) {
      if ((TypeInfo_CustomLogic_CustomLogicBuiltinTypes->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBuiltinTypes);
      }
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_CustomLogic_CustomLogicBuiltinTypes->static_fields->MemberNames;
      if ((pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
         (__this_00 = (System_Collections_Generic_HashSet_object__o *)
                      System_Collections_Generic_Dictionary_object__object___get_Item
                                (pSVar1,(Il2CppObject *)typeName,
                                 (MethodInfo_4AAD450 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_string_HashSet_string_get_Item
                                ), __this_00 == (System_Collections_Generic_HashSet_object__o *)0x0))
      goto label_05b72f2f;
      bVar2 = System_Collections_Generic_HashSet_object___Contains
                        (__this_00,(Il2CppObject *)name,
                         (MethodInfo_4FB3720 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
      if (bVar2) {
        bVar2 = CustomLogic_CLBindingCache__GetOrCreateBinding
                          (typeName,name,(CustomLogic_ICLMemberBinding_o **)&local_50,(MethodInfo *)0x0);
        if (bVar2) goto label_05b72ee5;
        goto label_05b72da0;
      }
      bVar2 = (*(local_48->klass->vtable)._7_get_LookupBaseClassForVariables.methodPtr)
                        (local_48,(local_48->klass->vtable)._7_get_LookupBaseClassForVariables.method);
      if (bVar2) {
        if ((TypeInfo_CustomLogic_CustomLogicBuiltinTypes->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBuiltinTypes);
        }
        pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                 TypeInfo_CustomLogic_CustomLogicBuiltinTypes->static_fields->BaseTypeNames;
        if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05b72f2f;
        bVar2 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                          (pSVar1,(Il2CppObject *)typeName,
                           (MethodInfo_4AAD6F0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_string_ContainsKey);
        if (!bVar2) goto label_05b72ece;
        if ((TypeInfo_CustomLogic_CustomLogicBuiltinTypes->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBuiltinTypes);
        }
        pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                 TypeInfo_CustomLogic_CustomLogicBuiltinTypes->static_fields->BaseTypeNames;
        if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05b72f2f;
        typeName = System_Collections_Generic_Dictionary_object__object___get_Item
                             (pSVar1,(Il2CppObject *)typeName,
                              (MethodInfo_4AAD450 *)
                              MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
        goto label_05b72da0;
      }
    }
label_05b72ece:
    *local_40 = (Il2CppObject *)0x0;
    Il2CppCodeGenWriteBarrier(local_40);
    return false;
  }
label_05b72f2f:
  ThrowNullReferenceException();
label_05b72ee5:
  *local_40 = local_50;
  Il2CppCodeGenWriteBarrier(local_40);
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(local_48->fields).Variables;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___set_Item
              (pSVar1,(Il2CppObject *)name,local_50,
               (MethodInfo_4AAD4C0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
    return true;
  }
  goto label_05b72f2f;
}


// CustomLogic.CustomLogicClassInstance$$HasVariable
// il2cpp: bool CustomLogic_CustomLogicClassInstance__HasVariable (CustomLogic_CustomLogicClassInstance_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5b72740
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b7280b: nop dword ptr [rax + rax]
// asm:   0x5b72919: jmp 0x5b72810

bool CustomLogic_CustomLogicClassInstance__HasVariable
               (CustomLogic_CustomLogicClassInstance_o *__this,System_String_o *name,MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  bool bVar3;
  System_String_o *typeName;
  System_Collections_Generic_HashSet_object__o *__this_00;
  
  if (Il2CppMethodInitialized_07547355 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicBuiltinTypes);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_HashSet_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    Il2CppMethodInitialized_07547355 = '\x01';
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Variables;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar2,(Il2CppObject *)name,
                       (MethodInfo_4AAD6F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_object_ContainsKey);
    if (bVar3) {
      return true;
    }
    typeName = (System_String_o *)(*(__this->klass->vtable)._6_unknown.methodPtr)(__this);
    uVar1 = (TypeInfo_CustomLogic_CustomLogicBuiltinTypes->_2).cctor_finished_or_no_cctor;
    while( true ) {
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBuiltinTypes);
      }
      bVar3 = CustomLogic_CustomLogicBuiltinTypes__IsBuiltinType(typeName,(MethodInfo *)0x0);
      if (!bVar3) {
        return false;
      }
      if ((TypeInfo_CustomLogic_CustomLogicBuiltinTypes->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBuiltinTypes);
      }
      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_CustomLogic_CustomLogicBuiltinTypes->static_fields->MemberNames;
      if ((pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
         (__this_00 = (System_Collections_Generic_HashSet_object__o *)
                      System_Collections_Generic_Dictionary_object__object___get_Item
                                (pSVar2,(Il2CppObject *)typeName,
                                 (MethodInfo_4AAD450 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_string_HashSet_string_get_Item
                                ), __this_00 == (System_Collections_Generic_HashSet_object__o *)0x0)) break;
      bVar3 = System_Collections_Generic_HashSet_object___Contains
                        (__this_00,(Il2CppObject *)name,
                         (MethodInfo_4FB3720 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
      if (bVar3) {
        return true;
      }
      bVar3 = (*(__this->klass->vtable)._7_get_LookupBaseClassForVariables.methodPtr)
                        (__this,(__this->klass->vtable)._7_get_LookupBaseClassForVariables.method);
      if (!bVar3) {
        return false;
      }
      if ((TypeInfo_CustomLogic_CustomLogicBuiltinTypes->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBuiltinTypes);
      }
      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_CustomLogic_CustomLogicBuiltinTypes->static_fields->BaseTypeNames;
      if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
      bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                        (pSVar2,(Il2CppObject *)typeName,
                         (MethodInfo_4AAD6F0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_string_ContainsKey);
      if (!bVar3) {
        return false;
      }
      if ((TypeInfo_CustomLogic_CustomLogicBuiltinTypes->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBuiltinTypes);
      }
      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_CustomLogic_CustomLogicBuiltinTypes->static_fields->BaseTypeNames;
      if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
      typeName = System_Collections_Generic_Dictionary_object__object___get_Item
                           (pSVar2,(Il2CppObject *)typeName,
                            (MethodInfo_4AAD450 *)
                            MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
      uVar1 = (TypeInfo_CustomLogic_CustomLogicBuiltinTypes->_2).cctor_finished_or_no_cctor;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicClassInstance$$ShowVariableInInspector
// il2cpp: bool CustomLogic_CustomLogicClassInstance__ShowVariableInInspector (CustomLogic_CustomLogicClassInstance_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5b6cdf0

bool CustomLogic_CustomLogicClassInstance__ShowVariableInInspector
               (CustomLogic_CustomLogicClassInstance_o *__this,System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_07547356 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Type");
    Il2CppMethodInitialized_07547356 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Type",(MethodInfo *)0x0);
  if ((bVar1) && ((__this->fields)._containsTypeOverride == false)) {
    return false;
  }
  return true;
}


