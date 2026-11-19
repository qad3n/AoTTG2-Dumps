// Type: CustomLogic.CustomLogicLodBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/CustomLogic/CustomLogicLodBuiltin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicLodBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicLodBuiltin_o* CustomLogic_CustomLogicLodBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x59ff3a0

CustomLogic_CustomLogicLodBuiltin_o *
CustomLogic_CustomLogicLodBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_CustomLogicLodBuiltin_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_07545e65 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLodBuiltin);
    Il2CppMethodInitialized_07545e65 = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicLodBuiltin constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicLodBuiltin_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLodBuiltin);
  (__this->fields)._detailPriority = 1.0;
  CustomLogic_BuiltinComponentInstance___ctor
            ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)0x0,(MethodInfo *)0x0
            );
  return __this;
}


// CustomLogic.CustomLogicLodBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicLodBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x59ff490

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicLodBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  CustomLogic_CLPropertyBinding_CustomLogicLodBuiltin__o *pCVar2;
  System_String_o *pSVar3;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicLodBuiltin_Bindings_c *pCVar4;
  
  if (Il2CppMethodInitialized_07545e66 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLodBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"DetailPriority");
    il2cpp_codegen_initialize_runtime_metadata(&"DistanceThreshold");
    Il2CppMethodInitialized_07545e66 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"DistanceThreshold",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicLodBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicLodBuiltin_Bindings;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLodBuiltin_Bindings);
      pCVar2 = CustomLogic_CustomLogicLodBuiltin_Bindings____CreatePropertyBinding__DistanceThreshold
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicLodBuiltin_Bindings____CreatePropertyBinding__DistanceThreshold
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicLodBuiltin_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"DetailPriority",(MethodInfo *)0x0);
  if (!bVar1) {
    pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
    str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicLodBuiltin not found");
    pSVar3 = System_String__Concat_5301f10(pSVar3,name,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
    System_Exception___ctor_54fa440(__this,pSVar3,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicLodBuiltin_Bindings_CreateMemberBinding);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
  }
  if ((TypeInfo_CustomLogic_CustomLogicLodBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
    pCVar4 = TypeInfo_CustomLogic_CustomLogicLodBuiltin_Bindings;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLodBuiltin_Bindings);
    pCVar2 = CustomLogic_CustomLogicLodBuiltin_Bindings____CreatePropertyBinding__DetailPriority
                       ((MethodInfo *)pCVar4);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  pCVar2 = CustomLogic_CustomLogicLodBuiltin_Bindings____CreatePropertyBinding__DetailPriority
                     ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicLodBuiltin_Bindings);
  return (CustomLogic_ICLMemberBinding_o *)pCVar2;
}


// CustomLogic.CustomLogicLodBuiltin.Bindings$$__CreatePropertyBinding__DistanceThreshold
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLodBuiltin__o* CustomLogic_CustomLogicLodBuiltin_Bindings____CreatePropertyBinding__DistanceThreshold (const MethodInfo* method);
// 0x59ff5d0

CustomLogic_CLPropertyBinding_CustomLogicLodBuiltin__o *
CustomLogic_CustomLogicLodBuiltin_Bindings____CreatePropertyBinding__DistanceThreshold(MethodInfo *method)

{
  System_Func_CustomLogicLodBuiltin__object__o *__this;
  System_Action_CustomLogicLodBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicLodBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545e67 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicLodBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLodBuiltin_Bindings___CreatePropertyBinding__DistanceThreshold_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLodBuiltin_Bindings___CreatePropertyBinding__DistanceThreshold_g____sette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLodBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLodBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLodBuiltin_object);
    Il2CppMethodInitialized_07545e67 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLodBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLodBuiltin_Bindings___CreatePropertyBinding__DistanceThreshold_g____gette
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicLodBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLodBuiltin_Bindings___CreatePropertyBinding__DistanceThreshold_g____sette
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLodBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLodBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicLodBuiltin.Bindings$$__CreatePropertyBinding__DetailPriority
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLodBuiltin__o* CustomLogic_CustomLogicLodBuiltin_Bindings____CreatePropertyBinding__DetailPriority (const MethodInfo* method);
// 0x59ff6b0

CustomLogic_CLPropertyBinding_CustomLogicLodBuiltin__o *
CustomLogic_CustomLogicLodBuiltin_Bindings____CreatePropertyBinding__DetailPriority(MethodInfo *method)

{
  System_Func_CustomLogicLodBuiltin__object__o *__this;
  System_Action_CustomLogicLodBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicLodBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545e68 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicLodBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLodBuiltin_Bindings___CreatePropertyBinding__DetailPriority_g____getter_3
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLodBuiltin_Bindings___CreatePropertyBinding__DetailPriority_g____setter_3
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLodBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLodBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLodBuiltin_object);
    Il2CppMethodInitialized_07545e68 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLodBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLodBuiltin_Bindings___CreatePropertyBinding__DetailPriority_g____getter_3
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicLodBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLodBuiltin_Bindings___CreatePropertyBinding__DetailPriority_g____setter_3
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLodBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLodBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicLodBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicLodBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x59ff790

void CustomLogic_CustomLogicLodBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07545e69 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLodBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"DetailPriority");
    il2cpp_codegen_initialize_runtime_metadata(&"DistanceThreshold");
    Il2CppMethodInitialized_07545e69 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"DistanceThreshold",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"DetailPriority",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicLodBuiltin_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicLodBuiltin_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicLodBuiltin.Bindings$$<__CreatePropertyBinding__DistanceThreshold>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLodBuiltin_Bindings_____CreatePropertyBinding__DistanceThreshold_g____getter_2_0 (CustomLogic_CustomLogicLodBuiltin_o* __i, const MethodInfo* method);
// 0x59ff880

Il2CppObject *
CustomLogic_CustomLogicLodBuiltin_Bindings_____CreatePropertyBinding__DistanceThreshold_g____getter_2_0
          (CustomLogic_CustomLogicLodBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_LODGroup_o *__this;
  UnityEngine_LOD_array *pUVar1;
  Il2CppObject *pIVar2;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicLodBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_LODGroup_o *)0x0)) {
    pUVar1 = UnityEngine_LODGroup__GetLODs(__this,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_LOD_array *)0x0) {
      if ((int)pUVar1->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      pIVar2 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
      return pIVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLodBuiltin.Bindings$$<__CreatePropertyBinding__DistanceThreshold>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicLodBuiltin_Bindings_____CreatePropertyBinding__DistanceThreshold_g____setter_2_1 (CustomLogic_CustomLogicLodBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x59ff8d0

void CustomLogic_CustomLogicLodBuiltin_Bindings_____CreatePropertyBinding__DistanceThreshold_g____setter_2_1
               (CustomLogic_CustomLogicLodBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  MethodInfo *method_00;
  float value;
  
  if (Il2CppMethodInitialized_07545e6a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545e6a = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  method_00 = MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float;
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i == (CustomLogic_CustomLogicLodBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicLodBuiltin__set_DistanceThreshold(__i,value,method_00);
  return;
}


// CustomLogic.CustomLogicLodBuiltin.Bindings$$<__CreatePropertyBinding__DetailPriority>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLodBuiltin_Bindings_____CreatePropertyBinding__DetailPriority_g____getter_3_0 (CustomLogic_CustomLogicLodBuiltin_o* __i, const MethodInfo* method);
// 0x59ff950

Il2CppObject *
CustomLogic_CustomLogicLodBuiltin_Bindings_____CreatePropertyBinding__DetailPriority_g____getter_3_0
          (CustomLogic_CustomLogicLodBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if (__i == (CustomLogic_CustomLogicLodBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicLodBuiltin.Bindings$$<__CreatePropertyBinding__DetailPriority>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicLodBuiltin_Bindings_____CreatePropertyBinding__DetailPriority_g____setter_3_1 (CustomLogic_CustomLogicLodBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x59ff980

void CustomLogic_CustomLogicLodBuiltin_Bindings_____CreatePropertyBinding__DetailPriority_g____setter_3_1
               (CustomLogic_CustomLogicLodBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  MethodInfo *method_00;
  float value;
  
  if (Il2CppMethodInitialized_07545e6b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545e6b = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  method_00 = MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float;
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i == (CustomLogic_CustomLogicLodBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicLodBuiltin__set_DetailPriority(__i,value,method_00);
  return;
}


// CustomLogic.CustomLogicLodBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicLodBuiltin___ctor (CustomLogic_CustomLogicLodBuiltin_o* __this, const MethodInfo* method);
// 0x59fee50

void CustomLogic_CustomLogicLodBuiltin___ctor(CustomLogic_CustomLogicLodBuiltin_o *__this,MethodInfo *method)

{
  (__this->fields)._detailPriority = 1.0;
  CustomLogic_BuiltinComponentInstance___ctor
            ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)0x0,(MethodInfo *)0x0
            );
  return;
}


// CustomLogic.CustomLogicLodBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicLodBuiltin___ctor (CustomLogic_CustomLogicLodBuiltin_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* owner, const MethodInfo* method);
// 0x59fee60
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59fef4d: lea rdi, [rbx + 0x38]
// asm:   0x59fef51: jmp 0x59fef5f

void CustomLogic_CustomLogicLodBuiltin___ctor_58fee60
               (CustomLogic_CustomLogicLodBuiltin_o *__this,CustomLogic_CustomLogicMapObjectBuiltin_o *owner,
               MethodInfo *method)

{
  code cVar1;
  Map_MapObject_o *pMVar2;
  UnityEngine_LODGroup_c *pUVar3;
  UnityEngine_LODGroup_o *component;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545e60 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_BuiltinComponentInstance_GetOrAddComponent_LODGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_LODGroup);
    Il2CppMethodInitialized_07545e60 = '\x01';
  }
  (__this->fields)._detailPriority = 1.0;
  if ((owner != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
     (pMVar2 = (owner->fields).Value, pMVar2 != (Map_MapObject_o *)0x0)) {
    component = CustomLogic_BuiltinComponentInstance__GetOrAddComponent_object_
                          ((pMVar2->fields).GameObject,
                           (MethodInfo_3479500 *)
                           MethodInfo_CustomLogic_BuiltinComponentInstance_GetOrAddComponent_LODGroup);
    CustomLogic_BuiltinComponentInstance___ctor
              ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)component,
               (MethodInfo *)0x0);
    (__this->fields).OwnerMapObject = owner;
    Il2CppCodeGenWriteBarrier(&(__this->fields).OwnerMapObject);
    pMVar2 = (owner->fields).Value;
    if (pMVar2 != (Map_MapObject_o *)0x0) {
      (__this->fields).Owner = (pMVar2->fields).GameObject;
      Il2CppCodeGenWriteBarrier(&(__this->fields).Owner);
      pUVar3 = TypeInfo_UnityEngine_LODGroup;
      method_00 = (MethodInfo *)(__this->fields).Component;
      if (method_00 == (MethodInfo *)0x0) {
        (__this->fields).Value = (UnityEngine_LODGroup_o *)0x0;
label_059fef5f:
        Il2CppCodeGenWriteBarrier(&(__this->fields).Value);
        CustomLogic_CustomLogicLodBuiltin__SetupSingleLod(__this,1.0,method_00);
        return;
      }
      cVar1 = (code)(TypeInfo_UnityEngine_LODGroup->_2).typeHierarchyDepth;
      if (((byte)cVar1 <= (byte)method_00->methodPointer[0x130]) &&
         (*(UnityEngine_LODGroup_c **)
           (*(long *)(method_00->methodPointer + 200) + -8 + (ulong)(byte)cVar1 * 8) ==
          TypeInfo_UnityEngine_LODGroup)) {
        (__this->fields).Value = (UnityEngine_LODGroup_o *)method_00;
        if (((byte)cVar1 <= (byte)method_00->methodPointer[0x130]) &&
           (*(UnityEngine_LODGroup_c **)
             (*(long *)(method_00->methodPointer + 200) + -8 + (ulong)(byte)cVar1 * 8) == pUVar3))
        goto label_059fef5f;
      }
      il2cpp_codegen_raise_invalid_cast_exception(method_00,pUVar3);
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLodBuiltin$$get_DistanceThreshold
// il2cpp: float CustomLogic_CustomLogicLodBuiltin__get_DistanceThreshold (CustomLogic_CustomLogicLodBuiltin_o* __this, const MethodInfo* method);
// 0x59ff0f0

float CustomLogic_CustomLogicLodBuiltin__get_DistanceThreshold
                (CustomLogic_CustomLogicLodBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_LODGroup_o *__this_00;
  UnityEngine_LOD_array *pUVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_LODGroup_o *)0x0) {
    pUVar1 = UnityEngine_LODGroup__GetLODs(__this_00,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_LOD_array *)0x0) {
      if ((int)pUVar1->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      return pUVar1->m_Items[0].fields.screenRelativeTransitionHeight;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLodBuiltin$$set_DistanceThreshold
// il2cpp: void CustomLogic_CustomLogicLodBuiltin__set_DistanceThreshold (CustomLogic_CustomLogicLodBuiltin_o* __this, float value, const MethodInfo* method);
// 0x59ff120

void CustomLogic_CustomLogicLodBuiltin__set_DistanceThreshold
               (CustomLogic_CustomLogicLodBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_LODGroup_o *pUVar1;
  UnityEngine_LOD_array *lods;
  
  pUVar1 = (__this->fields).Value;
  if (pUVar1 != (UnityEngine_LODGroup_o *)0x0) {
    lods = UnityEngine_LODGroup__GetLODs(pUVar1,(MethodInfo *)0x0);
    if (lods != (UnityEngine_LOD_array *)0x0) {
      if (lods->max_length == 0) {
        return;
      }
      if ((int)lods->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      lods->m_Items[0].fields.screenRelativeTransitionHeight = value;
      pUVar1 = (__this->fields).Value;
      if (pUVar1 != (UnityEngine_LODGroup_o *)0x0) {
        UnityEngine_LODGroup__SetLODs(pUVar1,lods,(MethodInfo *)0x0);
        pUVar1 = (__this->fields).Value;
        if (pUVar1 != (UnityEngine_LODGroup_o *)0x0) {
          UnityEngine_LODGroup__RecalculateBounds(pUVar1,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLodBuiltin$$get_DetailPriority
// il2cpp: float CustomLogic_CustomLogicLodBuiltin__get_DetailPriority (CustomLogic_CustomLogicLodBuiltin_o* __this, const MethodInfo* method);
// 0x59ff1a0

float CustomLogic_CustomLogicLodBuiltin__get_DetailPriority
                (CustomLogic_CustomLogicLodBuiltin_o *__this,MethodInfo *method)

{
  return (__this->fields)._detailPriority;
}


// CustomLogic.CustomLogicLodBuiltin$$set_DetailPriority
// il2cpp: void CustomLogic_CustomLogicLodBuiltin__set_DetailPriority (CustomLogic_CustomLogicLodBuiltin_o* __this, float value, const MethodInfo* method);
// 0x59ff1b0

void CustomLogic_CustomLogicLodBuiltin__set_DetailPriority
               (CustomLogic_CustomLogicLodBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  uint uVar1;
  System_Object_array *pSVar2;
  uint uVar3;
  MethodInfo **method_00;
  float fVar4;
  float fVar5;
  
  method_00 = (MethodInfo **)__this;
  if (g_data_07545e61 == '\0') {
    method_00 = &MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer);
    g_data_07545e61 = '\x01';
  }
  fVar5 = 1.0;
  if (value <= 1.0) {
    fVar5 = value;
  }
  fVar5 = (float)(-(uint)(0.0 <= value) & (uint)fVar5);
  (__this->fields)._detailPriority = fVar5;
  fVar4 = CustomLogic_CustomLogicLodBuiltin__GetDetailThreshold((MethodInfo *)method_00);
  __this_00 = (__this->fields).Owner;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pSVar2 = UnityEngine_GameObject__GetComponentsInChildren_object__353c030
                       (__this_00,
                        (MethodInfo_353C030 *)
                        MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer);
    if (pSVar2 != (System_Object_array *)0x0) {
      uVar1 = (uint)pSVar2->max_length;
      if (0 < (int)uVar1) {
        uVar3 = 0;
        do {
          if (uVar1 <= uVar3) {
            ThrowIndexOutOfRangeException();
          }
          if ((UnityEngine_Renderer_o *)pSVar2->m_Items[(int)uVar3] == (UnityEngine_Renderer_o *)0x0)
          goto label_059ff27f;
          UnityEngine_Renderer__set_enabled
                    ((UnityEngine_Renderer_o *)pSVar2->m_Items[(int)uVar3],fVar4 <= fVar5,(MethodInfo *)0x0);
          uVar3 = uVar3 + 1;
          uVar1 = (uint)pSVar2->max_length;
        } while ((int)uVar3 < (int)uVar1);
      }
      return;
    }
  }
label_059ff27f:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLodBuiltin$$GetDetailThreshold
// il2cpp: float CustomLogic_CustomLogicLodBuiltin__GetDetailThreshold (const MethodInfo* method);
// 0x59ff290

float CustomLogic_CustomLogicLodBuiltin__GetDetailThreshold(MethodInfo *method)

{
  Settings_GraphicsSettings_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  int32_t iVar3;
  
  if (Il2CppMethodInitialized_07545e62 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_Util_EnumMaxValue_PresetQualityLevel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_07545e62 = '\x01';
  }
  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
  }
  iVar3 = Utility_Util__EnumMaxValue_Int32Enum_
                    ((MethodInfo_377C030 *)MethodInfo_Utility_Util_EnumMaxValue_PresetQualityLevel);
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->GraphicsSettings;
  if ((pSVar1 == (Settings_GraphicsSettings_o *)0x0) ||
     (pSVar2 = (pSVar1->fields).PresetQuality, pSVar2 == (Settings_IntSetting_o *)0x0)) {
    ThrowNullReferenceException();
  }
  return 1.0 - (float)(pSVar2->fields)._value / (float)iVar3;
}


// CustomLogic.CustomLogicLodBuiltin$$SetupSingleLod
// il2cpp: void CustomLogic_CustomLogicLodBuiltin__SetupSingleLod (CustomLogic_CustomLogicLodBuiltin_o* __this, float threshold, const MethodInfo* method);
// 0x59fef90

void CustomLogic_CustomLogicLodBuiltin__SetupSingleLod
               (CustomLogic_CustomLogicLodBuiltin_o *__this,float threshold,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_LODGroup_o *pUVar1;
  bool bVar2;
  UnityEngine_Renderer_array *renderers;
  UnityEngine_LOD_array *lods;
  UnityEngine_LOD_Fields UStack_28;
  
  if (Il2CppMethodInitialized_07545e63 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_LOD_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545e63 = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields).Value;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  __this_00 = (__this->fields).Owner;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    renderers = (UnityEngine_Renderer_array *)
                UnityEngine_GameObject__GetComponentsInChildren_object__353c030
                          (__this_00,
                           (MethodInfo_353C030 *)
                           MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer);
    lods = (UnityEngine_LOD_array *)SZArrayNew(TypeInfo_UnityEngine_LOD_array,1);
    UStack_28.screenRelativeTransitionHeight = 0.0;
    UStack_28.fadeTransitionWidth = 0.0;
    UStack_28.renderers = (UnityEngine_Renderer_array *)0x0;
    UnityEngine_LOD___ctor((UnityEngine_LOD_o *)&UStack_28,threshold,renderers,(MethodInfo *)0x0);
    if (lods != (UnityEngine_LOD_array *)0x0) {
      if ((int)lods->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      lods->m_Items[0].fields.screenRelativeTransitionHeight = UStack_28.screenRelativeTransitionHeight;
      lods->m_Items[0].fields.fadeTransitionWidth = UStack_28.fadeTransitionWidth;
      lods->m_Items[0].fields.renderers = UStack_28.renderers;
      Il2CppCodeGenWriteBarrier(&lods->m_Items[0].fields.renderers);
      pUVar1 = (__this->fields).Value;
      if (pUVar1 != (UnityEngine_LODGroup_o *)0x0) {
        UnityEngine_LODGroup__SetLODs(pUVar1,lods,(MethodInfo *)0x0);
        pUVar1 = (__this->fields).Value;
        if (pUVar1 != (UnityEngine_LODGroup_o *)0x0) {
          UnityEngine_LODGroup__set_fadeMode(pUVar1,0,(MethodInfo *)0x0);
          pUVar1 = (__this->fields).Value;
          if (pUVar1 != (UnityEngine_LODGroup_o *)0x0) {
            UnityEngine_LODGroup__set_animateCrossFading(pUVar1,false,(MethodInfo *)0x0);
            pUVar1 = (__this->fields).Value;
            if (pUVar1 != (UnityEngine_LODGroup_o *)0x0) {
              UnityEngine_LODGroup__RecalculateBounds(pUVar1,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLodBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicLodBuiltin__get_ClassName (CustomLogic_CustomLogicLodBuiltin_o* __this, const MethodInfo* method);
// 0x59ff340

System_String_o *
CustomLogic_CustomLogicLodBuiltin__get_ClassName
          (CustomLogic_CustomLogicLodBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545e64 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"LodBuiltin");
    Il2CppMethodInitialized_07545e64 = '\x01';
  }
  return "LodBuiltin";
}


// CustomLogic.CustomLogicLodBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicLodBuiltin__get_IsAbstract (CustomLogic_CustomLogicLodBuiltin_o* __this, const MethodInfo* method);
// 0x59ff370

bool CustomLogic_CustomLogicLodBuiltin__get_IsAbstract
               (CustomLogic_CustomLogicLodBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicLodBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicLodBuiltin__get_IsStatic (CustomLogic_CustomLogicLodBuiltin_o* __this, const MethodInfo* method);
// 0x59ff380

bool CustomLogic_CustomLogicLodBuiltin__get_IsStatic
               (CustomLogic_CustomLogicLodBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicLodBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicLodBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicLodBuiltin_o* __this, const MethodInfo* method);
// 0x59ff390

bool CustomLogic_CustomLogicLodBuiltin__get_InheritBaseMembers
               (CustomLogic_CustomLogicLodBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


