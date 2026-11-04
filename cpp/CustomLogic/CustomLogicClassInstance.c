// Type: CustomLogic.CustomLogicClassInstance
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicClassInstance.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicClassInstance.cs
// --------------------------------

// CustomLogic.CustomLogicClassInstance$$get_Enabled
// il2cpp: bool CustomLogic_CustomLogicClassInstance__get_Enabled (CustomLogic_CustomLogicClassInstance_o* __this, const MethodInfo* method);
// 0x180e5a320

bool
CustomLogic_CustomLogicClassInstance__get_Enabled(CustomLogic_CustomLogicClassInstance_o* __this, MethodInfo* method)

{
  return (__this->fields)._Enabled_k__BackingField;
}


// CustomLogic.CustomLogicClassInstance$$set_Enabled
// il2cpp: void CustomLogic_CustomLogicClassInstance__set_Enabled (CustomLogic_CustomLogicClassInstance_o* __this, bool value, const MethodInfo* method);
// 0x1811124d0

void
CustomLogic_CustomLogicClassInstance__set_Enabled(CustomLogic_CustomLogicClassInstance_o* __this, bool value, MethodInfo* method)

{
  (__this->fields)._Enabled_k__BackingField = value;
  return;
}


// CustomLogic.CustomLogicClassInstance$$SetContainsTypeOverride
// il2cpp: void CustomLogic_CustomLogicClassInstance__SetContainsTypeOverride (CustomLogic_CustomLogicClassInstance_o* __this, bool contains, const MethodInfo* method);
// 0x18138baa0

void
CustomLogic_CustomLogicClassInstance__SetContainsTypeOverride(CustomLogic_CustomLogicClassInstance_o* __this, bool contains, MethodInfo* method)

{
  (__this->fields)._containsTypeOverride = value;
  return;
}


// CustomLogic.CustomLogicClassInstance$$get_Namespace
// il2cpp: System_Nullable_CustomLogicSourceType__o CustomLogic_CustomLogicClassInstance__get_Namespace (CustomLogic_CustomLogicClassInstance_o* __this, const MethodInfo* method);
// 0x18209be50

System_Nullable_CustomLogicSourceType__o
CustomLogic_CustomLogicClassInstance__get_Namespace
          (CustomLogic_CustomLogicClassInstance_o *__this,MethodInfo *method)

{
  return (System_Nullable_CustomLogicSourceType__o)(__this->fields)._Namespace_k__BackingField.fields;
}


// CustomLogic.CustomLogicClassInstance$$set_Namespace
// il2cpp: void CustomLogic_CustomLogicClassInstance__set_Namespace (CustomLogic_CustomLogicClassInstance_o* __this, System_Nullable_CustomLogicSourceType__o value, const MethodInfo* method);
// 0x18209be60

void CustomLogic_CustomLogicClassInstance__set_Namespace
               (CustomLogic_CustomLogicClassInstance_o *__this,System_Nullable_CustomLogicSourceType__o value,
               MethodInfo *method)

{
  (__this->fields)._Namespace_k__BackingField.fields = value.fields;
  return;
}


// CustomLogic.CustomLogicClassInstance$$.ctor
// il2cpp: void CustomLogic_CustomLogicClassInstance___ctor (CustomLogic_CustomLogicClassInstance_o* __this, const MethodInfo* method);
// 0x18209bdd0

void CustomLogic_CustomLogicClassInstance___ctor
               (CustomLogic_CustomLogicClassInstance_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__object__o *__this_00;
  
  if (Il2CppMethodInitialized_1843468da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_object);
    Il2CppMethodInitialized_1843468da = '\x01';
  }
  (__this->fields)._Enabled_k__BackingField = true;
  (__this->fields)._LookupBaseClassForVariables_k__BackingField = true;
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_object);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_ctor);
  (__this->fields).Variables = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Variables,__this_00);
  return;
}


// CustomLogic.CustomLogicClassInstance$$get_LookupBaseClassForVariables
// il2cpp: bool CustomLogic_CustomLogicClassInstance__get_LookupBaseClassForVariables (CustomLogic_CustomLogicClassInstance_o* __this, const MethodInfo* method);
// 0x180584ab0

bool
CustomLogic_CustomLogicClassInstance__get_LookupBaseClassForVariables(CustomLogic_CustomLogicClassInstance_o* __this, MethodInfo* method)

{
  return (__this->fields)._LookupBaseClassForVariables_k__BackingField;
}


// CustomLogic.CustomLogicClassInstance$$ToString
// il2cpp: System_String_o* CustomLogic_CustomLogicClassInstance__ToString (CustomLogic_CustomLogicClassInstance_o* __this, const MethodInfo* method);
// 0x18209ba10
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18209bae4: jmp 0x18209bb0b

System_String_o *
CustomLogic_CustomLogicClassInstance__ToString
          (CustomLogic_CustomLogicClassInstance_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  bool bVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_1843468db == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&"__Str__");
    il2cpp_codegen_initialize_runtime_metadata(&"(CustomLogicClassInstance)");
    Il2CppMethodInitialized_1843468db = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  if ((__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) ||
     (bVar1 = CustomLogic_CustomLogicClassInstance__HasVariable
                        (__this,"__Str__",(MethodInfo *)0x0), !bVar1)) {
    pSVar2 = (System_String_o *)
             (*(__this->klass->vtable)._6_unknown.methodPtr)(__this,(__this->klass->vtable)._6_unknown.method)
    ;
    pSVar3 = System_String__Concat_1969e50("(CustomLogicClassInstance)",pSVar2,(MethodInfo *)0x0);
  }
  else {
    pSVar2 = (System_String_o *)
             CustomLogic_CustomLogicEvaluator__EvaluateMethod
                       (__this_00,__this,"__Str__",(System_Object_array *)0x0,0,(MethodInfo *)0x0)
    ;
    if (pSVar2 == (System_String_o *)0x0) {
      return (System_String_o *)0x0;
    }
    pSVar3 = (System_String_o *)0x0;
    if ((Il2CppClass *)pSVar2->klass == g_data_184354e50) {
      pSVar3 = pSVar2;
    }
    if (pSVar3 == (System_String_o *)0x0) {
      il2cpp_codegen_raise_invalid_cast_exception();
    }
  }
  return pSVar3;
}


// CustomLogic.CustomLogicClassInstance$$GetHashCode
// il2cpp: int32_t CustomLogic_CustomLogicClassInstance__GetHashCode (CustomLogic_CustomLogicClassInstance_o* __this, const MethodInfo* method);
// 0x18209b5d0

int32_t CustomLogic_CustomLogicClassInstance__GetHashCode
                  (CustomLogic_CustomLogicClassInstance_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  bool bVar1;
  int32_t iVar2;
  Il2CppObject *obj;
  int32_t *piVar3;
  
  if (Il2CppMethodInitialized_1843468dc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&"__Hash__");
    Il2CppMethodInitialized_1843468dc = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    bVar1 = CustomLogic_CustomLogicClassInstance__HasVariable(__this,"__Hash__",(MethodInfo *)0x0);
    if (bVar1) {
      obj = CustomLogic_CustomLogicEvaluator__EvaluateMethod
                      (__this_00,__this,"__Hash__",(System_Object_array *)0x0,0,(MethodInfo *)0x0);
      if (obj == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      if ((obj->klass->_1).element_class == *(Il2CppClass **)(g_data_184354e08 + 0x40)) {
        piVar3 = il2cpp_object_unbox(obj);
        return *piVar3;
      }
      il2cpp_codegen_raise_invalid_cast_exception(obj,g_data_184354e08);
    }
  }
  iVar2 = System_Object__InternalGetHashCode((Il2CppObject *)__this,(MethodInfo *)0x0);
  return iVar2;
}


// CustomLogic.CustomLogicClassInstance$$Equals
// il2cpp: bool CustomLogic_CustomLogicClassInstance__Equals (CustomLogic_CustomLogicClassInstance_o* __this, Il2CppObject* obj, const MethodInfo* method);
// 0x18209b440

bool CustomLogic_CustomLogicClassInstance__Equals
               (CustomLogic_CustomLogicClassInstance_o *__this,Il2CppObject *obj,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  bool bVar1;
  System_Object_array *parameterValues;
  Il2CppObject *pIVar2;
  undefined1 *puVar3;
  
  if (Il2CppMethodInitialized_1843468dd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"__Eq__");
    Il2CppMethodInitialized_1843468dd = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    bVar1 = CustomLogic_CustomLogicClassInstance__HasVariable(__this,"__Eq__",(MethodInfo *)0x0);
    if (bVar1) {
      parameterValues = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
      if (parameterValues != (System_Object_array *)0x0) {
        if (obj != (Il2CppObject *)0x0) {
          pIVar2 = il2cpp_vm_Object_IsInst(obj,(((parameterValues->obj).klass)->_1).element_class);
          if (pIVar2 == (Il2CppObject *)0x0) {
            pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
          }
        }
        if ((int)parameterValues->max_length == 0) {
          ThrowIndexOutOfRangeException();
        }
        parameterValues->m_Items[0] = obj;
        Il2CppCodeGenWriteBarrier(parameterValues->m_Items,obj);
        pIVar2 = CustomLogic_CustomLogicEvaluator__EvaluateMethod
                           (__this_00,__this,"__Eq__",parameterValues,0,(MethodInfo *)0x0);
        if (pIVar2 != (Il2CppObject *)0x0) {
          if ((pIVar2->klass->_1).element_class == *(Il2CppClass **)(g_data_184354de8 + 0x40)) {
            puVar3 = il2cpp_object_unbox(pIVar2);
            return (bool)*puVar3;
          }
          il2cpp_codegen_raise_invalid_cast_exception(pIVar2,g_data_184354de8);
        }
      }
      ThrowNullReferenceException();
    }
  }
  bVar1 = Unity_Burst_Unsafe__AreSame___Il2CppFullySharedGenericType_
                    ((Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)__this,
                     (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)obj,(MethodInfo_841F20 *)0x0);
  return bVar1;
}


// CustomLogic.CustomLogicClassInstance$$GetVariable
// il2cpp: Il2CppObject* CustomLogic_CustomLogicClassInstance__GetVariable (CustomLogic_CustomLogicClassInstance_o* __this, System_String_o* name, const MethodInfo* method);
// 0x18209b6c0

Il2CppObject *
CustomLogic_CustomLogicClassInstance__GetVariable
          (CustomLogic_CustomLogicClassInstance_o *__this,System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_00;
  MethodInfo *lastManagedFrame;
  Il2CppObject *local_res10;
  
  local_res10 = (Il2CppObject *)0x0;
  bVar1 = CustomLogic_CustomLogicClassInstance__TryGetVariable(__this,name,&local_res10,(MethodInfo *)0x0);
  if (bVar1) {
    return local_res10;
  }
  pSVar2 = (System_String_o *)il2cpp_runtime_helper_180003110(6,__this);
  str2 = il2cpp_codegen_get_runtime_metadata(&" not found in class ");
  str0 = il2cpp_codegen_get_runtime_metadata(&"Variable ");
  pSVar2 = System_String__Concat_1969590(str0,name,str2,pSVar2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this_00 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_1b6abf0(__this_00,pSVar2,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicClassInstance_GetVariable);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// CustomLogic.CustomLogicClassInstance$$TryGetVariable
// il2cpp: bool CustomLogic_CustomLogicClassInstance__TryGetVariable (CustomLogic_CustomLogicClassInstance_o* __this, System_String_o* name, Il2CppObject** variable, const MethodInfo* method);
// 0x18209bb20
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18209bbe8: mov rbx, rax
// asm:   0x18209bbeb: nop dword ptr [rax + rax]

bool CustomLogic_CustomLogicClassInstance__TryGetVariable
               (CustomLogic_CustomLogicClassInstance_o *__this,System_String_o *name,Il2CppObject **variable,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_Collections_Generic_Dictionary_string__string__o *__this_00;
  bool bVar2;
  System_String_o *typeName;
  System_Collections_Generic_HashSet_object__o *__this_01;
  Il2CppObject *local_res8;
  Il2CppObject *local_res10;
  
  if (Il2CppMethodInitialized_1843468de == '\0') {
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
    Il2CppMethodInitialized_1843468de = '\x01';
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Variables;
  local_res10 = (Il2CppObject *)0x0;
  local_res8 = (Il2CppObject *)0x0;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (pSVar1,(Il2CppObject *)name,&local_res10,
                       (MethodInfo_14769C0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_object_TryGetValue);
    if (bVar2) {
      *variable = local_res10;
      Il2CppCodeGenWriteBarrier(variable,local_res10);
      return true;
    }
    typeName = (System_String_o *)(*(__this->klass->vtable)._6_unknown.methodPtr)(__this);
label_18209bbf0:
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
         (__this_01 = (System_Collections_Generic_HashSet_object__o *)
                      System_Collections_Generic_Dictionary_object__object___get_Item
                                (pSVar1,(Il2CppObject *)typeName,
                                 (MethodInfo_147A5B0 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_string_HashSet_string_get_Item
                                ), __this_01 == (System_Collections_Generic_HashSet_object__o *)0x0))
      goto label_18209bdbe;
      bVar2 = System_Collections_Generic_HashSet_object___Contains
                        (__this_01,(Il2CppObject *)name,
                         (MethodInfo_1759E40 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
      if (bVar2) {
        bVar2 = CustomLogic_CLBindingCache__GetOrCreateBinding
                          (typeName,name,(CustomLogic_ICLMemberBinding_o **)&local_res8,(MethodInfo *)0x0);
        if (bVar2) goto code_r0x00018209bd43;
        goto label_18209bbf0;
      }
      bVar2 = (*(__this->klass->vtable)._7_get_LookupBaseClassForVariables.methodPtr)
                        (__this,(__this->klass->vtable)._7_get_LookupBaseClassForVariables.method);
      if (bVar2) {
        if ((TypeInfo_CustomLogic_CustomLogicBuiltinTypes->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBuiltinTypes);
        }
        __this_00 = TypeInfo_CustomLogic_CustomLogicBuiltinTypes->static_fields->BaseTypeNames;
        if (__this_00 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_18209bdbe;
        bVar2 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                           (Il2CppObject *)typeName,
                           (MethodInfo_1455450 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_string_ContainsKey);
        if (!bVar2) goto label_18209bd7f;
        if ((TypeInfo_CustomLogic_CustomLogicBuiltinTypes->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBuiltinTypes);
        }
        pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                 TypeInfo_CustomLogic_CustomLogicBuiltinTypes->static_fields->BaseTypeNames;
        if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_18209bdbe;
        typeName = System_Collections_Generic_Dictionary_object__object___get_Item
                             (pSVar1,(Il2CppObject *)typeName,
                              (MethodInfo_147A5B0 *)
                              MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
        goto label_18209bbf0;
      }
    }
label_18209bd7f:
    *variable = (Il2CppObject *)0x0;
    Il2CppCodeGenWriteBarrier(variable,(void *)0x0);
    return false;
  }
label_18209bdbe:
  ThrowNullReferenceException();
code_r0x00018209bd43:
  *variable = local_res8;
  Il2CppCodeGenWriteBarrier(variable,local_res8);
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Variables;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___set_Item
              (pSVar1,(Il2CppObject *)name,local_res8,
               (MethodInfo_147A7F0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
    return true;
  }
  goto label_18209bdbe;
}


// CustomLogic.CustomLogicClassInstance$$HasVariable
// il2cpp: bool CustomLogic_CustomLogicClassInstance__HasVariable (CustomLogic_CustomLogicClassInstance_o* __this, System_String_o* name, const MethodInfo* method);
// 0x18209b790

bool CustomLogic_CustomLogicClassInstance__HasVariable
               (CustomLogic_CustomLogicClassInstance_o *__this,System_String_o *name,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__object__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_Collections_Generic_Dictionary_string__string__o *__this_01;
  bool bVar2;
  System_String_o *typeName;
  System_Collections_Generic_HashSet_object__o *__this_02;
  
  if (Il2CppMethodInitialized_1843468df == '\0') {
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
    Il2CppMethodInitialized_1843468df = '\x01';
  }
  __this_00 = (__this->fields).Variables;
  if (__this_00 != (System_Collections_Generic_Dictionary_string__object__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,(Il2CppObject *)name
                       ,(MethodInfo_1455450 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_object_ContainsKey);
    if (bVar2) {
      return true;
    }
    typeName = (System_String_o *)(*(__this->klass->vtable)._6_unknown.methodPtr)(__this);
    while( true ) {
      if ((TypeInfo_CustomLogic_CustomLogicBuiltinTypes->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBuiltinTypes);
      }
      bVar2 = CustomLogic_CustomLogicBuiltinTypes__IsBuiltinType(typeName,(MethodInfo *)0x0);
      if (!bVar2) {
        return false;
      }
      if ((TypeInfo_CustomLogic_CustomLogicBuiltinTypes->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBuiltinTypes);
      }
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_CustomLogic_CustomLogicBuiltinTypes->static_fields->MemberNames;
      if ((pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
         (__this_02 = (System_Collections_Generic_HashSet_object__o *)
                      System_Collections_Generic_Dictionary_object__object___get_Item
                                (pSVar1,(Il2CppObject *)typeName,
                                 (MethodInfo_147A5B0 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_string_HashSet_string_get_Item
                                ), __this_02 == (System_Collections_Generic_HashSet_object__o *)0x0)) break;
      bVar2 = System_Collections_Generic_HashSet_object___Contains
                        (__this_02,(Il2CppObject *)name,
                         (MethodInfo_1759E40 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
      if (bVar2) {
        return true;
      }
      bVar2 = (*(__this->klass->vtable)._7_get_LookupBaseClassForVariables.methodPtr)
                        (__this,(__this->klass->vtable)._7_get_LookupBaseClassForVariables.method);
      if (!bVar2) {
        return false;
      }
      if ((TypeInfo_CustomLogic_CustomLogicBuiltinTypes->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBuiltinTypes);
      }
      __this_01 = TypeInfo_CustomLogic_CustomLogicBuiltinTypes->static_fields->BaseTypeNames;
      if (__this_01 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) break;
      bVar2 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
                         (Il2CppObject *)typeName,
                         (MethodInfo_1455450 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_string_ContainsKey);
      if (!bVar2) {
        return false;
      }
      if ((TypeInfo_CustomLogic_CustomLogicBuiltinTypes->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBuiltinTypes);
      }
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_CustomLogic_CustomLogicBuiltinTypes->static_fields->BaseTypeNames;
      if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
      typeName = System_Collections_Generic_Dictionary_object__object___get_Item
                           (pSVar1,(Il2CppObject *)typeName,
                            (MethodInfo_147A5B0 *)
                            MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicClassInstance$$ShowVariableInInspector
// il2cpp: bool CustomLogic_CustomLogicClassInstance__ShowVariableInInspector (CustomLogic_CustomLogicClassInstance_o* __this, System_String_o* name, const MethodInfo* method);
// 0x18209b9a0

bool CustomLogic_CustomLogicClassInstance__ShowVariableInInspector
               (CustomLogic_CustomLogicClassInstance_o *__this,System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_1843468e0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Type");
    Il2CppMethodInitialized_1843468e0 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Type",(MethodInfo *)0x0);
  if (bVar1) {
    return (__this->fields)._containsTypeOverride != false;
  }
  return true;
}


