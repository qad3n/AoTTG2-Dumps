// Type: CustomLogic.CustomLogicJsonBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/CustomLogic/CustomLogicJsonBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicJsonBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicJsonBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicJsonBuiltin_o* CustomLogic_CustomLogicJsonBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5b2c9e0

CustomLogic_CustomLogicJsonBuiltin_o *
CustomLogic_CustomLogicJsonBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_075471b8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicJsonBuiltin);
    Il2CppMethodInitialized_075471b8 = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicJsonBuiltin constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicJsonBuiltin_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = (CustomLogic_BuiltinClassInstance_o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicJsonBuiltin);
  if (Il2CppMethodInitialized_075471b4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_075471b4 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
  return (CustomLogic_CustomLogicJsonBuiltin_o *)__this;
}


// CustomLogic.CustomLogicJsonBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicJsonBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x5b2cfb0

void CustomLogic_CustomLogicJsonBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_075471bd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings_c);
    Il2CppMethodInitialized_075471bd = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings_c->static_fields->__9 =
       (CustomLogic_CustomLogicJsonBuiltin_Bindings___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings_c->static_fields->__9);
  return;
}


// CustomLogic.CustomLogicJsonBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicJsonBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicJsonBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x5b2d020

void CustomLogic_CustomLogicJsonBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicJsonBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicJsonBuiltin.Bindings.<>c$$<__CreateMethodBinding__LoadFromString>b__2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicJsonBuiltin_Bindings___c_____CreateMethodBinding__LoadFromString_b__2_0 (CustomLogic_CustomLogicJsonBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicJsonBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b2d030

Il2CppObject *
CustomLogic_CustomLogicJsonBuiltin_Bindings___c_____CreateMethodBinding__LoadFromString_b__2_0
          (CustomLogic_CustomLogicJsonBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicJsonBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *pSVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075471be == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075471be = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  obj = __a->m_Items[0];
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  method_00 = MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string;
  pSVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (obj,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  pSVar1 = CustomLogic_CustomLogicJsonBuiltin__LoadFromString(pSVar1,method_00);
  return (Il2CppObject *)pSVar1;
}


// CustomLogic.CustomLogicJsonBuiltin.Bindings.<>c$$<__CreateMethodBinding__SaveToString>b__3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicJsonBuiltin_Bindings___c_____CreateMethodBinding__SaveToString_b__3_0 (CustomLogic_CustomLogicJsonBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicJsonBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b2d0b0

Il2CppObject *
CustomLogic_CustomLogicJsonBuiltin_Bindings___c_____CreateMethodBinding__SaveToString_b__3_0
          (CustomLogic_CustomLogicJsonBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicJsonBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_o *pSVar1;
  System_String_o *pSVar2;
  
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pSVar1 = CustomLogic_CustomLogicJsonBuiltin__SaveJSON(__a->m_Items[0],(MethodInfo *)__c);
    if (pSVar1 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar2 = (*(pSVar1->klass->vtable)._30_ToString.methodPtr)
                         (pSVar1,4,(pSVar1->klass->vtable)._30_ToString.method);
      return (Il2CppObject *)pSVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicJsonBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicJsonBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5b2cb00

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicJsonBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  CustomLogic_CLMethodBinding_CustomLogicJsonBuiltin__o *pCVar2;
  System_String_o *pSVar3;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicJsonBuiltin_Bindings_c *pCVar4;
  
  if (Il2CppMethodInitialized_075471b9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"LoadFromString");
    il2cpp_codegen_initialize_runtime_metadata(&"SaveToString");
    Il2CppMethodInitialized_075471b9 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"LoadFromString",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings);
      pCVar2 = CustomLogic_CustomLogicJsonBuiltin_Bindings____CreateMethodBinding__LoadFromString
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicJsonBuiltin_Bindings____CreateMethodBinding__LoadFromString
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"SaveToString",(MethodInfo *)0x0);
  if (!bVar1) {
    pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
    str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicJsonBuiltin not found");
    pSVar3 = System_String__Concat_5301f10(pSVar3,name,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
    System_Exception___ctor_54fa440(__this,pSVar3,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings_CreateMemberBinding);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
  }
  if ((TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
    pCVar4 = TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings);
    pCVar2 = CustomLogic_CustomLogicJsonBuiltin_Bindings____CreateMethodBinding__SaveToString
                       ((MethodInfo *)pCVar4);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  pCVar2 = CustomLogic_CustomLogicJsonBuiltin_Bindings____CreateMethodBinding__SaveToString
                     ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings);
  return (CustomLogic_ICLMemberBinding_o *)pCVar2;
}


// CustomLogic.CustomLogicJsonBuiltin.Bindings$$__CreateMethodBinding__LoadFromString
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicJsonBuiltin__o* CustomLogic_CustomLogicJsonBuiltin_Bindings____CreateMethodBinding__LoadFromString (const MethodInfo* method);
// 0x5b2cc40
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b2cc75: jmp 0x5b2cce5

CustomLogic_CLMethodBinding_CustomLogicJsonBuiltin__o *
CustomLogic_CustomLogicJsonBuiltin_Bindings____CreateMethodBinding__LoadFromString(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicJsonBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicJsonBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicJsonBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075471ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicJsonBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicJsonBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicJsonBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings_c___CreateMethodBinding__LoadFromString_b__2_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings_c);
    Il2CppMethodInitialized_075471ba = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__2_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__2_0;
  }
  if (__this == (System_Func_CustomLogicJsonBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicJsonBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings_c___CreateMethodBinding__LoadFromString_b__2_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings_c->static_fields;
    pCVar2->__9__2_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__2_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicJsonBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicJsonBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicJsonBuiltin.Bindings$$__CreateMethodBinding__SaveToString
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicJsonBuiltin__o* CustomLogic_CustomLogicJsonBuiltin_Bindings____CreateMethodBinding__SaveToString (const MethodInfo* method);
// 0x5b2cd80
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b2cdb5: jmp 0x5b2ce25

CustomLogic_CLMethodBinding_CustomLogicJsonBuiltin__o *
CustomLogic_CustomLogicJsonBuiltin_Bindings____CreateMethodBinding__SaveToString(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicJsonBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicJsonBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicJsonBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075471bb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicJsonBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicJsonBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicJsonBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings_c___CreateMethodBinding__SaveToString_b__3_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings_c);
    Il2CppMethodInitialized_075471bb = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__3_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__3_0;
  }
  if (__this == (System_Func_CustomLogicJsonBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicJsonBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings_c___CreateMethodBinding__SaveToString_b__3_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings_c->static_fields;
    pCVar2->__9__3_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__3_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicJsonBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicJsonBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicJsonBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicJsonBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x5b2cec0

void CustomLogic_CustomLogicJsonBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_075471bc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"LoadFromString");
    il2cpp_codegen_initialize_runtime_metadata(&"SaveToString");
    Il2CppMethodInitialized_075471bc = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"LoadFromString",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SaveToString",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings->static_fields->MemberNames)
  ;
  return;
}


// CustomLogic.CustomLogicJsonBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicJsonBuiltin___ctor (CustomLogic_CustomLogicJsonBuiltin_o* __this, const MethodInfo* method);
// 0x5b2b2e0

void CustomLogic_CustomLogicJsonBuiltin___ctor
               (CustomLogic_CustomLogicJsonBuiltin_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075471b4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_075471b4 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    return;
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicJsonBuiltin$$LoadFromString
// il2cpp: Il2CppObject* CustomLogic_CustomLogicJsonBuiltin__LoadFromString (System_String_o* json, const MethodInfo* method);
// 0x5b2b350
// eh: try 0x5b2b367..0x5b2b37c -> pad 0x5b2b3f8 (+1 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: runtime default class]
// eh: try 0x5b2b3af..0x5b2b3e6 -> pad 0x5b2b3eb (+1 call sites) cleanup
// eh: try 0x5b2b3ee..0x5b2b3f3 -> pad 0x5b2b484 catch (...) [compiler noexcept guard]
// eh: try 0x5b2b41c..0x5b2b474 -> pad 0x5b2b474 (+1 call sites) cleanup
// eh: try 0x5b2b477..0x5b2b47c -> pad 0x5b2b484 catch (...) [compiler noexcept guard]
// asm: 69 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b2b387: mov r14, rax
// asm:   0x5b2b38a: cmp edx, 1
// asm:   0x5b2b38d: jne 0x5b2b47c
// asm:   0x5b2b393: mov rdi, r14
// asm:   0x5b2b396: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b2b39b: mov rbx, rax
// asm:   0x5b2b39e: lea rax, [rip + 0x1a2b323]
// asm:   0x5b2b3a5: mov rdi, qword ptr [rax + 0x10]
// asm:   0x5b2b3a9: mov rax, qword ptr [rbx]
// asm:   0x5b2b3ac: mov rsi, qword ptr [rax]
// asm:   0x5b2b3af: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5b2b3b4: test al, al
// asm:   0x5b2b3b6: je 0x5b2b3c5
// asm:   0x5b2b3b8: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b2b3bd: xor eax, eax
// asm:   0x5b2b3bf: pop rbx
// asm:   0x5b2b3c0: pop r14
// asm:   0x5b2b3c2: pop r15
// asm:   0x5b2b3c4: ret 
// asm:   0x5b2b3c5: mov edi, 8
// asm:   0x5b2b3ca: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5b2b3cf: mov rcx, qword ptr [rbx]
// asm:   0x5b2b3d2: mov qword ptr [rax], rcx
// asm:   0x5b2b3d5: lea rsi, [rip + 0x1302124]
// asm:   0x5b2b3dc: mov rdi, rax
// asm:   0x5b2b3df: xor edx, edx
// asm:   0x5b2b3e1: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5b2b3e6: jmp 0x5b2b474
// asm:   0x5b2b3eb: mov r14, rax
// asm:   0x5b2b3ee: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b2b3f3: jmp 0x5b2b47c
// asm:   0x5b2b3f8: mov r14, rax
// asm:   0x5b2b3fb: cmp edx, 1
// asm:   0x5b2b3fe: jne 0x5b2b47c
// asm:   0x5b2b400: mov rdi, r14
// asm:   0x5b2b403: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b2b408: mov r14, rax
// asm:   0x5b2b40b: lea rax, [rip + 0x1a2b2b6]
// asm:   0x5b2b412: mov rdi, qword ptr [rax + 0x10]
// asm:   0x5b2b416: mov rax, qword ptr [r14]
// asm:   0x5b2b419: mov rsi, qword ptr [rax]
// asm:   0x5b2b41c: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5b2b421: test al, al
// asm:   0x5b2b423: je 0x5b2b453
// asm:   0x5b2b425: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b2b42a: lea rdi, [rip + 0x174ec6f]  ; TypeInfo_SimpleJSONFixed_JSONString
// asm:   0x5b2b431: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b2b436: mov rdi, rax
// asm:   0x5b2b439: call 0x30d6370  ; il2cpp_runtime_helper_030d6370()
// asm:   0x5b2b43e: mov rbx, rax
// asm:   0x5b2b441: mov rdi, rax
// asm:   0x5b2b444: mov rsi, r15
// asm:   0x5b2b447: xor edx, edx
// asm:   0x5b2b449: call 0x5863600  ; SimpleJSONFixed_JSONString___ctor()
// asm:   0x5b2b44e: jmp 0x5b2b374
// asm:   0x5b2b453: mov edi, 8
// asm:   0x5b2b458: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5b2b45d: mov rcx, qword ptr [r14]
// asm:   0x5b2b460: mov qword ptr [rax], rcx
// asm:   0x5b2b463: lea rsi, [rip + 0x1302096]
// asm:   0x5b2b46a: mov rdi, rax
// asm:   0x5b2b46d: xor edx, edx
// asm:   0x5b2b46f: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5b2b474: mov r14, rax
// asm:   0x5b2b477: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b2b47c: mov rdi, r14
// asm:   0x5b2b47f: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5b2b484: mov rdi, rax
// asm:   0x5b2b487: call 0x2ab61e0  ; __clang_call_terminate()

Il2CppObject * CustomLogic_CustomLogicJsonBuiltin__LoadFromString(System_String_o *json,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_o *json_00;
  Il2CppObject *pIVar1;
  MethodInfo *method_00;
  
  if (json == (System_String_o *)0x0) {
    ThrowNullReferenceException();
  }
  System_String__Trim(json,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)0x0;
  json_00 = SimpleJSONFixed_JSON__Parse(json,(MethodInfo *)0x0);
  pIVar1 = CustomLogic_CustomLogicJsonBuiltin__LoadJSON(json_00,method_00);
  return pIVar1;
}


// CustomLogic.CustomLogicJsonBuiltin$$SaveToString
// il2cpp: System_String_o* CustomLogic_CustomLogicJsonBuiltin__SaveToString (Il2CppObject* obj, const MethodInfo* method);
// 0x5b2be10

System_String_o * CustomLogic_CustomLogicJsonBuiltin__SaveToString(Il2CppObject *obj,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_o *pSVar1;
  System_String_o *pSVar2;
  
  pSVar1 = CustomLogic_CustomLogicJsonBuiltin__SaveJSON(obj,method);
  if (pSVar1 == (SimpleJSONFixed_JSONNode_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar2 = (*(pSVar1->klass->vtable)._30_ToString.methodPtr)
                     (pSVar1,4,(pSVar1->klass->vtable)._30_ToString.method);
  return pSVar2;
}


// CustomLogic.CustomLogicJsonBuiltin$$LoadJSON
// il2cpp: Il2CppObject* CustomLogic_CustomLogicJsonBuiltin__LoadJSON (SimpleJSONFixed_JSONNode_o* json, const MethodInfo* method);
// 0x5b2b490
// asm: 58 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b2b859: nop dword ptr [rax]
// asm:   0x5b2b8a9: jmp 0x5b2ba73
// asm:   0x5b2bb33: mov rdi, qword ptr [rbx + 0x30]
// asm:   0x5b2bb37: xor esi, esi
// asm:   0x5b2bb39: call 0x55d0c00  ; System_Single__Parse()
// asm:   0x5b2bb3e: movss dword ptr [rsp + 0x50], xmm0
// asm:   0x5b2bb44: lea rax, [rip + 0x174b615]  ; TypeInfo_CustomLogic_CustomLogicVector3Builtin
// asm:   0x5b2bb4b: mov rdi, qword ptr [rax]
// asm:   0x5b2bb4e: call 0x30d6370  ; il2cpp_runtime_helper_030d6370()
// asm:   0x5b2bb53: mov r12, rax
// asm:   0x5b2bb56: movaps xmm0, xmmword ptr [rsp + 0x70]
// asm:   0x5b2bb5b: unpcklps xmm0, xmmword ptr [rsp + 0x60]
// asm:   0x5b2bb60: mov rdi, rax
// asm:   0x5b2bb63: movss xmm1, dword ptr [rsp + 0x50]
// asm:   0x5b2bb69: xor esi, esi
// asm:   0x5b2bb6b: call 0x59df850  ; CustomLogic_CustomLogicVector3Builtin___ctor()
// asm:   0x5b2bb70: jmp 0x5b2ba73
// asm:   0x5b2bc24: mov rdi, qword ptr [rbx + 0x38]
// asm:   0x5b2bc28: xor esi, esi
// asm:   0x5b2bc2a: call 0x55d0c00  ; System_Single__Parse()
// asm:   0x5b2bc2f: movaps xmmword ptr [rsp + 0x120], xmm0
// asm:   0x5b2bc37: lea rax, [rip + 0x174b39a]  ; TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin
// asm:   0x5b2bc3e: mov rdi, qword ptr [rax]
// asm:   0x5b2bc41: call 0x30d6370  ; il2cpp_runtime_helper_030d6370()
// asm:   0x5b2bc46: mov r12, rax
// asm:   0x5b2bc49: movaps xmm0, xmmword ptr [rsp + 0x70]
// asm:   0x5b2bc4e: unpcklps xmm0, xmmword ptr [rsp + 0x60]
// asm:   0x5b2bc53: movaps xmm1, xmmword ptr [rsp + 0x50]
// asm:   0x5b2bc58: unpcklps xmm1, xmmword ptr [rsp + 0x120]
// asm:   0x5b2bc60: mov rdi, rax
// asm:   0x5b2bc63: xor esi, esi
// asm:   0x5b2bc65: call 0x59b4df0  ; CustomLogic_CustomLogicQuaternionBuiltin___ctor()
// asm:   0x5b2bc6a: jmp 0x5b2ba73
// asm:   0x5b2bd15: mov r12d, eax
// asm:   0x5b2bd18: mov rdi, qword ptr [rbx + 0x38]
// asm:   0x5b2bd1c: xor esi, esi
// asm:   0x5b2bd1e: call 0x55b7710  ; System_Int32__Parse()
// asm:   0x5b2bd23: mov ebx, eax
// asm:   0x5b2bd25: lea rax, [rip + 0x174a9e4]  ; TypeInfo_Utility_Color255
// asm:   0x5b2bd2c: mov rdi, qword ptr [rax]
// asm:   0x5b2bd2f: call 0x30d6370  ; il2cpp_runtime_helper_030d6370()
// asm:   0x5b2bd34: mov rbp, rax
// asm:   0x5b2bd37: mov rdi, rax
// asm:   0x5b2bd3a: mov esi, r14d
// asm:   0x5b2bd3d: mov edx, r15d
// asm:   0x5b2bd40: mov ecx, r12d
// asm:   0x5b2bd43: mov r8d, ebx
// asm:   0x5b2bd46: xor r9d, r9d
// asm:   0x5b2bd49: call 0x5de7730  ; Utility_Color255___ctor()
// asm:   0x5b2bd4e: lea rax, [rip + 0x174aff3]  ; TypeInfo_CustomLogic_CustomLogicColorBuiltin
// asm:   0x5b2bd55: mov rdi, qword ptr [rax]
// asm:   0x5b2bd58: call 0x30d6370  ; il2cpp_runtime_helper_030d6370()
// asm:   0x5b2bd5d: mov r12, rax
// asm:   0x5b2bd60: mov rdi, rax
// asm:   0x5b2bd63: mov rsi, rbp
// asm:   0x5b2bd66: xor edx, edx
// asm:   0x5b2bd68: call 0x59aa2e0  ; CustomLogic_CustomLogicColorBuiltin___ctor()
// asm:   0x5b2bd6d: jmp 0x5b2ba73

Il2CppObject *
CustomLogic_CustomLogicJsonBuiltin__LoadJSON(SimpleJSONFixed_JSONNode_o *json,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_Object_array *pSVar3;
  System_String_o *a;
  bool bVar4;
  int32_t r;
  int32_t g;
  int32_t b;
  int32_t a_00;
  CustomLogic_CustomLogicDictBuiltin_o *__this_00;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  Il2CppObject *pIVar6;
  MethodInfo *key;
  System_String_o *pSVar7;
  System_String_array *pSVar8;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  CustomLogic_CustomLogicQuaternionBuiltin_o *__this_02;
  Utility_Color255_o *__this_03;
  CustomLogic_CustomLogicColorBuiltin_o *__this_04;
  Il2CppClass *pIVar9;
  System_Exception_o *__this_05;
  MethodInfo *pMVar10;
  UnityEngine_Quaternion_o value;
  UnityEngine_Vector3_o value_00;
  SimpleJSONFixed_JSONNode_ValueEnumerator_o local_1f0;
  float local_1a8;
  float local_198;
  float local_188;
  double local_178;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_170;
  undefined8 local_168;
  Il2CppObject *pIStack_160;
  Il2CppObject *local_158;
  undefined8 uStack_150;
  System_Collections_Generic_List_T__o *local_148;
  undefined8 uStack_140;
  SimpleJSONFixed_JSONNode_o *local_138;
  double local_128;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_120;
  undefined8 local_118;
  Il2CppObject *pIStack_110;
  Il2CppObject *local_108;
  undefined8 uStack_100;
  System_Collections_Generic_List_T__o *local_f8;
  undefined8 uStack_f0;
  SimpleJSONFixed_JSONNode_o *local_e8;
  float local_d8;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_c8;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_78;
  
  if (Il2CppMethodInitialized_075471b5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicDictBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_Add);
    il2cpp_codegen_initialize_runtime_metadata(&"double");
    il2cpp_codegen_initialize_runtime_metadata(&"int");
    il2cpp_codegen_initialize_runtime_metadata(&"string");
    il2cpp_codegen_initialize_runtime_metadata(&"null");
    il2cpp_codegen_initialize_runtime_metadata(&"quaternion");
    il2cpp_codegen_initialize_runtime_metadata(&"bool");
    il2cpp_codegen_initialize_runtime_metadata(&"vector3");
    il2cpp_codegen_initialize_runtime_metadata(&"color");
    il2cpp_codegen_initialize_runtime_metadata(&"float");
    il2cpp_codegen_initialize_runtime_metadata(&"1");
    Il2CppMethodInitialized_075471b5 = '\x01';
  }
  local_78.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_78.m_Array.fields._index = 0;
  local_78.m_Array.fields._version = 0;
  local_78.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_78.m_Object.fields._getEnumeratorRetType = 0;
  local_78.m_Object.fields._36_4_ = 0;
  local_78.m_Object.fields._version = 0;
  local_78.m_Object.fields._index = 0;
  local_78.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_78.type = 0;
  local_78._4_4_ = 0;
  local_78.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_78.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_f8 = (System_Collections_Generic_List_T__o *)0x0;
  uStack_f0._0_4_ = 0;
  uStack_f0._4_4_ = 0;
  local_108 = (Il2CppObject *)0x0;
  uStack_100._0_4_ = 0;
  uStack_100._4_4_ = 0;
  local_118._0_4_ = 0;
  local_118._4_4_ = 0;
  pIStack_110 = (Il2CppObject *)0x0;
  local_128 = 0.0;
  pSStack_120 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_e8 = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_c8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_c8.m_Array.fields._index = 0;
  local_c8.m_Array.fields._version = 0;
  local_c8.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_c8.m_Object.fields._getEnumeratorRetType = 0;
  local_c8.m_Object.fields._36_4_ = 0;
  local_c8.m_Object.fields._version = 0;
  local_c8.m_Object.fields._index = 0;
  local_c8.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_c8.type = 0;
  local_c8._4_4_ = 0;
  local_c8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_c8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_148 = (System_Collections_Generic_List_T__o *)0x0;
  uStack_140._0_4_ = 0;
  uStack_140._4_4_ = 0;
  local_158 = (Il2CppObject *)0x0;
  uStack_150._0_4_ = 0;
  uStack_150._4_4_ = 0;
  local_168._0_4_ = 0;
  local_168._4_4_ = 0;
  pIStack_160 = (Il2CppObject *)0x0;
  local_178 = 0.0;
  pSStack_170 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_138 = (SimpleJSONFixed_JSONNode_o *)0x0;
  if (json == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05b2bd72;
  bVar4 = (*(json->klass->vtable)._16_get_IsArray.methodPtr)
                    (json,(json->klass->vtable)._16_get_IsArray.method);
  if (bVar4) {
    __this_00 = (CustomLogic_CustomLogicDictBuiltin_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
    CustomLogic_CustomLogicListBuiltin___ctor
              ((CustomLogic_CustomLogicListBuiltin_o *)__this_00,(MethodInfo *)0x0);
    SimpleJSONFixed_JSONNode__get_Values(&local_1f0,json,(MethodInfo *)0x0);
    local_e8 = local_1f0.fields.m_Enumerator.fields.m_Array.fields._current;
    local_f8 = local_1f0.fields.m_Enumerator.fields.m_Array.fields._list;
    uStack_f0._0_4_ = local_1f0.fields.m_Enumerator.fields.m_Array.fields._index;
    uStack_f0._4_4_ = local_1f0.fields.m_Enumerator.fields.m_Array.fields._version;
    local_108 = local_1f0.fields.m_Enumerator.fields.m_Object.fields._current.fields.value;
    uStack_100._0_4_ = local_1f0.fields.m_Enumerator.fields.m_Object.fields._getEnumeratorRetType;
    uStack_100._4_4_ = local_1f0.fields.m_Enumerator.fields.m_Object.fields._36_4_;
    local_118._0_4_ = local_1f0.fields.m_Enumerator.fields.m_Object.fields._version;
    local_118._4_4_ = local_1f0.fields.m_Enumerator.fields.m_Object.fields._index;
    pIStack_110 = local_1f0.fields.m_Enumerator.fields.m_Object.fields._current.fields.key;
    local_128 = (double)local_1f0.fields.m_Enumerator.fields._0_8_;
    pSStack_120 = local_1f0.fields.m_Enumerator.fields.m_Object.fields._dictionary;
    SimpleJSONFixed_JSONNode_ValueEnumerator__GetEnumerator
              ((SimpleJSONFixed_JSONNode_ValueEnumerator_o *)&local_78,
               (SimpleJSONFixed_JSONNode_ValueEnumerator_o *)&local_128,(MethodInfo *)0x0);
    bVar4 = SimpleJSONFixed_JSONNode_ValueEnumerator__MoveNext
                      ((SimpleJSONFixed_JSONNode_ValueEnumerator_o *)&local_78,(MethodInfo *)0x0);
    if (bVar4) {
      if (__this_00 == (CustomLogic_CustomLogicDictBuiltin_o *)0x0) {
        SimpleJSONFixed_JSONNode_ValueEnumerator__get_Current
                  ((SimpleJSONFixed_JSONNode_ValueEnumerator_o *)&local_78,(MethodInfo *)0x0);
        ThrowNullReferenceException();
      }
      do {
        pMVar10 = (MethodInfo *)0x0;
        pSVar5 = SimpleJSONFixed_JSONNode_ValueEnumerator__get_Current
                           ((SimpleJSONFixed_JSONNode_ValueEnumerator_o *)&local_78,(MethodInfo *)0x0);
        __this = (__this_00->fields)._dict;
        pIVar6 = CustomLogic_CustomLogicJsonBuiltin__LoadJSON(pSVar5,pMVar10);
        pMVar10 = MethodInfo_System_Collections_Generic_List_object_Add;
        if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05b2bd72;
        piVar1 = (int32_t *)((long)&(__this->fields)._entries + 4);
        *piVar1 = *piVar1 + 1;
        pSVar3 = (System_Object_array *)(__this->fields)._buckets;
        if (pSVar3 == (System_Object_array *)0x0) goto label_05b2bd72;
        uVar2 = *(uint *)&(__this->fields)._entries;
        if (uVar2 < (uint)pSVar3->max_length) {
          *(uint *)&(__this->fields)._entries = uVar2 + 1;
          pSVar3->m_Items[(int)uVar2] = pIVar6;
          Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this,pIVar6,
                     (MethodInfo_395D230 *)pMVar10->klass->rgctx_data[0xe].method);
        }
        bVar4 = SimpleJSONFixed_JSONNode_ValueEnumerator__MoveNext
                          ((SimpleJSONFixed_JSONNode_ValueEnumerator_o *)&local_78,(MethodInfo *)0x0);
      } while (bVar4);
    }
  }
  else {
    bVar4 = (*(json->klass->vtable)._17_get_IsObject.methodPtr)
                      (json,(json->klass->vtable)._17_get_IsObject.method);
    if (bVar4) {
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDictBuiltin);
      CustomLogic_CustomLogicDictBuiltin___ctor(__this_00,(MethodInfo *)0x0);
      SimpleJSONFixed_JSONNode__get_Keys
                ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_1f0,json,(MethodInfo *)0x0);
      local_138 = local_1f0.fields.m_Enumerator.fields.m_Array.fields._current;
      local_148 = local_1f0.fields.m_Enumerator.fields.m_Array.fields._list;
      uStack_140._0_4_ = local_1f0.fields.m_Enumerator.fields.m_Array.fields._index;
      uStack_140._4_4_ = local_1f0.fields.m_Enumerator.fields.m_Array.fields._version;
      local_158 = local_1f0.fields.m_Enumerator.fields.m_Object.fields._current.fields.value;
      uStack_150._0_4_ = local_1f0.fields.m_Enumerator.fields.m_Object.fields._getEnumeratorRetType;
      uStack_150._4_4_ = local_1f0.fields.m_Enumerator.fields.m_Object.fields._36_4_;
      local_168._0_4_ = local_1f0.fields.m_Enumerator.fields.m_Object.fields._version;
      local_168._4_4_ = local_1f0.fields.m_Enumerator.fields.m_Object.fields._index;
      pIStack_160 = local_1f0.fields.m_Enumerator.fields.m_Object.fields._current.fields.key;
      local_178 = (double)local_1f0.fields.m_Enumerator.fields._0_8_;
      pSStack_170 = local_1f0.fields.m_Enumerator.fields.m_Object.fields._dictionary;
      SimpleJSONFixed_JSONNode_KeyEnumerator__GetEnumerator
                ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_c8,
                 (SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_178,(MethodInfo *)0x0);
      bVar4 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                        ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_c8,(MethodInfo *)0x0);
      if (bVar4) {
        if (__this_00 == (CustomLogic_CustomLogicDictBuiltin_o *)0x0) {
          pMVar10 = (MethodInfo *)
                    SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current
                              ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_c8,(MethodInfo *)0x0);
          pSVar5 = (*(json->klass->vtable)._7_get_Item.methodPtr)
                             (json,(System_String_o *)pMVar10,(json->klass->vtable)._7_get_Item.method);
          CustomLogic_CustomLogicJsonBuiltin__LoadJSON(pSVar5,pMVar10);
          ThrowNullReferenceException();
        }
        do {
          key = (MethodInfo *)
                SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current
                          ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_c8,(MethodInfo *)0x0);
          pMVar10 = key;
          pSVar5 = (*(json->klass->vtable)._7_get_Item.methodPtr)
                             (json,(System_String_o *)key,(json->klass->vtable)._7_get_Item.method);
          pIVar6 = CustomLogic_CustomLogicJsonBuiltin__LoadJSON(pSVar5,pMVar10);
          CustomLogic_CustomLogicDictBuiltin__Set(__this_00,(Il2CppObject *)key,pIVar6,(MethodInfo *)0x0);
          bVar4 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                            ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_c8,(MethodInfo *)0x0);
        } while (bVar4);
      }
    }
    else {
      bVar4 = (*(json->klass->vtable)._13_get_IsString.methodPtr)
                        (json,(json->klass->vtable)._13_get_IsString.method);
      if (!bVar4) {
label_05b2bd77:
        pIVar9 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
        __this_05 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar9);
        pSVar7 = il2cpp_codegen_get_runtime_metadata(&"Loading invalid json format.");
        System_Exception___ctor_54fa440(__this_05,pSVar7,(MethodInfo *)0x0);
        pMVar10 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicJsonBuiltin_LoadJSON)
        ;
        il2cpp_codegen_raise_exception((Il2CppObject *)__this_05,pMVar10);
      }
      pSVar7 = (*(json->klass->vtable)._9_get_Value.methodPtr)(json,(json->klass->vtable)._9_get_Value.method)
      ;
      if ((pSVar7 == (System_String_o *)0x0) ||
         (pSVar8 = System_String__Split(pSVar7,0x3a,0,(MethodInfo *)0x0), pSVar8 == (System_String_array *)0x0
         )) goto label_05b2bd72;
      if ((int)pSVar8->max_length == 0) goto label_05b2bdbe;
      a = pSVar8->m_Items[0];
      bVar4 = System_String__op_Equality(a,"float",(MethodInfo *)0x0);
      if (bVar4) {
        pSVar7 = System_String__Substring(pSVar7,6,(MethodInfo *)0x0);
        local_1f0.fields.m_Enumerator.fields.type = (int32_t)System_Single__Parse(pSVar7,(MethodInfo *)0x0);
        pIVar9 = g_data_07556740;
      }
      else {
        bVar4 = System_String__op_Equality(a,"double",(MethodInfo *)0x0);
        if (bVar4) {
          pSVar7 = System_String__Substring(pSVar7,7,(MethodInfo *)0x0);
          local_1f0.fields.m_Enumerator.fields._0_8_ = System_Double__Parse(pSVar7,(MethodInfo *)0x0);
          pIVar9 = g_data_07556748;
        }
        else {
          bVar4 = System_String__op_Equality(a,"int",(MethodInfo *)0x0);
          if (bVar4) {
            pSVar7 = System_String__Substring(pSVar7,4,(MethodInfo *)0x0);
            local_1f0.fields.m_Enumerator.fields.type = System_Int32__Parse(pSVar7,(MethodInfo *)0x0);
            pIVar9 = g_data_07556710;
          }
          else {
            bVar4 = System_String__op_Equality(a,"string",(MethodInfo *)0x0);
            if (bVar4) {
              pSVar7 = System_String__Substring(pSVar7,7,(MethodInfo *)0x0);
              return (Il2CppObject *)pSVar7;
            }
            bVar4 = System_String__op_Equality(a,"bool",(MethodInfo *)0x0);
            if (!bVar4) {
              bVar4 = System_String__op_Equality(a,"null",(MethodInfo *)0x0);
              if (bVar4) {
                return (Il2CppObject *)0x0;
              }
              bVar4 = System_String__op_Equality(a,"vector3",(MethodInfo *)0x0);
              if (bVar4) {
                pSVar7 = System_String__Substring(pSVar7,8,(MethodInfo *)0x0);
                if ((pSVar7 != (System_String_o *)0x0) &&
                   (pSVar8 = System_String__Split(pSVar7,0x2c,0,(MethodInfo *)0x0),
                   pSVar8 != (System_String_array *)0x0)) {
                  if (((int)pSVar8->max_length != 0) &&
                     ((local_188 = System_Single__Parse(pSVar8->m_Items[0],(MethodInfo *)0x0),
                      (pSVar8->max_length & 0xfffffffe) != 0 &&
                      (local_198 = System_Single__Parse(pSVar8->m_Items[1],(MethodInfo *)0x0),
                      2 < (uint)pSVar8->max_length)))) {
                    local_1a8 = System_Single__Parse(pSVar8->m_Items[2],(MethodInfo *)0x0);
                    __this_01 = il2cpp_codegen_object_new
                                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
                    value_00.fields.y = local_198;
                    value_00.fields.x = local_188;
                    value_00.fields.z = local_1a8;
                    CustomLogic_CustomLogicVector3Builtin___ctor_58df850(__this_01,value_00,(MethodInfo *)0x0)
                    ;
                    return (Il2CppObject *)__this_01;
                  }
label_05b2bdbe:
                  ThrowIndexOutOfRangeException();
                }
              }
              else {
                bVar4 = System_String__op_Equality(a,"quaternion",(MethodInfo *)0x0);
                if (bVar4) {
                  pSVar7 = System_String__Substring(pSVar7,0xb,(MethodInfo *)0x0);
                  if ((pSVar7 != (System_String_o *)0x0) &&
                     (pSVar8 = System_String__Split(pSVar7,0x2c,0,(MethodInfo *)0x0),
                     pSVar8 != (System_String_array *)0x0)) {
                    if ((((int)pSVar8->max_length != 0) &&
                        ((local_188 = System_Single__Parse(pSVar8->m_Items[0],(MethodInfo *)0x0),
                         (pSVar8->max_length & 0xfffffffe) != 0 &&
                         (local_198 = System_Single__Parse(pSVar8->m_Items[1],(MethodInfo *)0x0),
                         2 < (uint)pSVar8->max_length)))) &&
                       (local_1a8 = System_Single__Parse(pSVar8->m_Items[2],(MethodInfo *)0x0),
                       (pSVar8->max_length & 0xfffffffc) != 0)) {
                      local_d8 = System_Single__Parse(pSVar8->m_Items[3],(MethodInfo *)0x0);
                      __this_02 = il2cpp_codegen_object_new
                                            ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin)
                      ;
                      value.fields.y = local_198;
                      value.fields.x = local_188;
                      value.fields.w = local_d8;
                      value.fields.z = local_1a8;
                      CustomLogic_CustomLogicQuaternionBuiltin___ctor_58b4df0
                                (__this_02,value,(MethodInfo *)0x0);
                      return (Il2CppObject *)__this_02;
                    }
                    goto label_05b2bdbe;
                  }
                }
                else {
                  bVar4 = System_String__op_Equality(a,"color",(MethodInfo *)0x0);
                  if (!bVar4) goto label_05b2bd77;
                  pSVar7 = System_String__Substring(pSVar7,6,(MethodInfo *)0x0);
                  if ((pSVar7 != (System_String_o *)0x0) &&
                     (pSVar8 = System_String__Split(pSVar7,0x2c,0,(MethodInfo *)0x0),
                     pSVar8 != (System_String_array *)0x0)) {
                    if (((int)pSVar8->max_length != 0) &&
                       (((r = System_Int32__Parse(pSVar8->m_Items[0],(MethodInfo *)0x0),
                         (pSVar8->max_length & 0xfffffffe) != 0 &&
                         (g = System_Int32__Parse(pSVar8->m_Items[1],(MethodInfo *)0x0),
                         2 < (uint)pSVar8->max_length)) &&
                        (b = System_Int32__Parse(pSVar8->m_Items[2],(MethodInfo *)0x0),
                        (pSVar8->max_length & 0xfffffffc) != 0)))) {
                      a_00 = System_Int32__Parse(pSVar8->m_Items[3],(MethodInfo *)0x0);
                      __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
                      Utility_Color255___ctor(__this_03,r,g,b,a_00,(MethodInfo *)0x0);
                      __this_04 = il2cpp_codegen_object_new
                                            ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin);
                      CustomLogic_CustomLogicColorBuiltin___ctor_58aa2e0
                                (__this_04,__this_03,(MethodInfo *)0x0);
                      return (Il2CppObject *)__this_04;
                    }
                    goto label_05b2bdbe;
                  }
                }
              }
label_05b2bd72:
              ThrowNullReferenceException();
            }
            pSVar7 = System_String__Substring(pSVar7,5,(MethodInfo *)0x0);
            bVar4 = System_String__op_Equality(pSVar7,"1",(MethodInfo *)0x0);
            local_1f0.fields.m_Enumerator.fields.type._0_1_ = bVar4;
            pIVar9 = g_data_075566f0;
          }
        }
      }
      __this_00 = (CustomLogic_CustomLogicDictBuiltin_o *)il2cpp_vm_Object_Box(pIVar9,&local_1f0);
    }
  }
  return (Il2CppObject *)__this_00;
}


// CustomLogic.CustomLogicJsonBuiltin$$SaveJSON
// il2cpp: SimpleJSONFixed_JSONNode_o* CustomLogic_CustomLogicJsonBuiltin__SaveJSON (Il2CppObject* obj, const MethodInfo* method);
// 0x5b2be40
// eh: try 0x5b2c314..0x5b2c8d1 -> pad 0x5b2c8e3 (+13 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5b2c8fd..0x5b2c902 -> pad 0x5b2c904 cleanup
// eh: try 0x5b2c907..0x5b2c911 -> pad 0x5b2c96c catch (...) [compiler noexcept guard]
// eh: try 0x5b2c92d..0x5b2c932 -> pad 0x5b2c957 cleanup
// eh: try 0x5b2c95a..0x5b2c964 -> pad 0x5b2c96c catch (...) [compiler noexcept guard]
// asm: 47 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b2c8d1: jmp 0x5b2c915
// asm:   0x5b2c8d3: jmp 0x5b2c915
// asm:   0x5b2c8d5: jmp 0x5b2c8e5
// asm:   0x5b2c8d7: jmp 0x5b2c8e5
// asm:   0x5b2c8d9: jmp 0x5b2c8e5
// asm:   0x5b2c8db: jmp 0x5b2c915
// asm:   0x5b2c8dd: jmp 0x5b2c8e5
// asm:   0x5b2c8df: jmp 0x5b2c915
// asm:   0x5b2c8e1: jmp 0x5b2c915
// asm:   0x5b2c8e3: jmp 0x5b2c915
// asm:   0x5b2c8e5: mov r14, rax
// asm:   0x5b2c8e8: cmp edx, 1
// asm:   0x5b2c8eb: jne 0x5b2c907
// asm:   0x5b2c8ed: mov rdi, r14
// asm:   0x5b2c8f0: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b2c8f5: mov rbx, qword ptr [rax]
// asm:   0x5b2c8f8: mov qword ptr [rsp + 0x38], rbx
// asm:   0x5b2c8fd: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b2c902: jmp 0x5b2c932
// asm:   0x5b2c904: mov r14, rax
// asm:   0x5b2c907: lea rdi, [rsp + 0x38]
// asm:   0x5b2c90c: call 0x2fd69f0  ; il2cpp_runtime_helper_02fd69f0()
// asm:   0x5b2c911: jmp 0x5b2c964
// asm:   0x5b2c913: jmp 0x5b2c915
// asm:   0x5b2c915: mov r14, rax
// asm:   0x5b2c918: cmp edx, 1
// asm:   0x5b2c91b: jne 0x5b2c95a
// asm:   0x5b2c91d: mov rdi, r14
// asm:   0x5b2c920: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b2c925: mov rbx, qword ptr [rax]
// asm:   0x5b2c928: mov qword ptr [rsp + 0x38], rbx
// asm:   0x5b2c92d: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b2c932: lea rax, [rip + 0x1761cdf]  ; MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose
// asm:   0x5b2c939: mov rsi, qword ptr [rax]
// asm:   0x5b2c93c: lea rdi, [rsp + 0x10]
// asm:   0x5b2c941: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5b2c946: test rbx, rbx
// asm:   0x5b2c949: je 0x5b2c5b0
// asm:   0x5b2c94f: mov rdi, rbx
// asm:   0x5b2c952: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b2c957: mov r14, rax
// asm:   0x5b2c95a: lea rdi, [rsp + 0x38]
// asm:   0x5b2c95f: call 0x2fd69c0  ; il2cpp_runtime_helper_02fd69c0()
// asm:   0x5b2c964: mov rdi, r14
// asm:   0x5b2c967: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5b2c96c: mov rdi, rax
// asm:   0x5b2c96f: call 0x2ab61e0  ; __clang_call_terminate()

SimpleJSONFixed_JSONNode_o *
CustomLogic_CustomLogicJsonBuiltin__SaveJSON(Il2CppObject *obj,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  System_Collections_Generic_List_object__o *__this;
  bool bVar3;
  Il2CppObject *pIVar4;
  System_String_array *values;
  System_String_o *pSVar5;
  CustomLogic_CustomLogicListBuiltin_o *pCVar6;
  Il2CppObject *obj_00;
  float *pfVar7;
  SimpleJSONFixed_JSONNode_o *pSVar8;
  double *pdVar9;
  int32_t *piVar10;
  SimpleJSONFixed_JSONObject_o *__this_00;
  char *pcVar11;
  System_String_o **ppSVar12;
  System_Type_o *p;
  System_String_o *str0;
  Il2CppClass *pIVar13;
  System_Exception_o *pSVar14;
  MethodInfo *pMVar15;
  int32_t index;
  System_Collections_Generic_List_Enumerator_object__o local_98;
  int32_t local_78;
  float local_74;
  undefined1 local_70 [16];
  MethodInfo *local_60;
  undefined8 local_58;
  float local_50 [2];
  undefined8 local_48;
  undefined8 uStack_40;
  double local_38;
  
  if (Il2CppMethodInitialized_075471b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicDictBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_object_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_object_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONArray);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONString);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_object_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"int:");
    il2cpp_codegen_initialize_runtime_metadata(&"null:null");
    il2cpp_codegen_initialize_runtime_metadata(&"bool:");
    il2cpp_codegen_initialize_runtime_metadata(&"float:");
    il2cpp_codegen_initialize_runtime_metadata(&"string:");
    il2cpp_codegen_initialize_runtime_metadata(&"quaternion:");
    il2cpp_codegen_initialize_runtime_metadata(&"double:");
    il2cpp_codegen_initialize_runtime_metadata(&",");
    il2cpp_codegen_initialize_runtime_metadata(&"color:");
    il2cpp_codegen_initialize_runtime_metadata(&"vector3:");
    il2cpp_codegen_initialize_runtime_metadata(&"1");
    il2cpp_codegen_initialize_runtime_metadata(&"0");
    Il2CppMethodInitialized_075471b6 = '\x01';
  }
  local_98.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_98.fields._index = 0;
  local_98.fields._version = 0;
  local_98.fields._current = (Il2CppObject *)0x0;
  local_74 = 0.0;
  local_38 = 0.0;
  local_78 = 0;
  local_50[0] = 0.0;
  local_58 = (Il2CppClass *)0x0;
  local_48 = (Il2CppClass *)0x0;
  uStack_40 = (void *)0x0;
  if (obj == (Il2CppObject *)0x0) {
    __this_00 = (SimpleJSONFixed_JSONObject_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONString);
    pSVar5 = "null:null";
label_05b2c577:
    SimpleJSONFixed_JSONString___ctor((SimpleJSONFixed_JSONString_o *)__this_00,pSVar5,(MethodInfo *)0x0);
  }
  else {
    pIVar13 = obj->klass;
    bVar1 = (pIVar13->_2).typeHierarchyDepth;
    bVar2 = (TypeInfo_CustomLogic_CustomLogicDictBuiltin->_2).typeHierarchyDepth;
    if ((bVar1 < bVar2) ||
       ((pIVar13->_2).typeHierarchy[(ulong)bVar2 - 1] !=
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDictBuiltin)) {
      bVar2 = (TypeInfo_CustomLogic_CustomLogicListBuiltin->_2).typeHierarchyDepth;
      if ((bVar1 < bVar2) ||
         ((pIVar13->_2).typeHierarchy[(ulong)bVar2 - 1] !=
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin)) {
        if (pIVar13 == g_data_07556758) {
          pSVar5 = "string:";
label_05b2c555:
          pSVar5 = System_String__Concat_52f0320(pSVar5,(System_String_o *)obj,(MethodInfo *)0x0);
        }
        else {
          if (pIVar13 == g_data_07556740) {
            pfVar7 = il2cpp_vm_Object_Unbox(obj);
            local_74 = *pfVar7;
            obj = (Il2CppObject *)System_Single__ToString(&local_74,(MethodInfo *)0x0);
            ppSVar12 = &"float:";
label_05b2c54f:
            pSVar5 = *ppSVar12;
            goto label_05b2c555;
          }
          if (pIVar13 == g_data_07556748) {
            pdVar9 = (double *)il2cpp_runtime_helper_02abd3a0(obj);
            local_38 = *pdVar9;
            obj = (Il2CppObject *)System_Double__ToString(&local_38,(MethodInfo *)0x0);
            ppSVar12 = &"double:";
            goto label_05b2c54f;
          }
          if (pIVar13 == g_data_07556710) {
            piVar10 = (int32_t *)il2cpp_runtime_helper_02abd3a0(obj);
            local_78 = *piVar10;
            obj = (Il2CppObject *)System_Int32__ToString(&local_78,(MethodInfo *)0x0);
            ppSVar12 = &"int:";
            goto label_05b2c54f;
          }
          if (pIVar13 == g_data_075566f0) {
            pcVar11 = (char *)il2cpp_runtime_helper_02abd3a0(obj);
            if (*pcVar11 == '\0') {
              ppSVar12 = &"0";
            }
            else {
              ppSVar12 = &"1";
            }
            obj = (Il2CppObject *)*ppSVar12;
            pSVar5 = "bool:";
            goto label_05b2c555;
          }
          bVar2 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin->_2).typeHierarchyDepth;
          if ((bVar1 < bVar2) ||
             ((pIVar13->_2).typeHierarchy[(ulong)bVar2 - 1] !=
              (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin)) {
            bVar2 = (TypeInfo_CustomLogic_CustomLogicColorBuiltin->_2).typeHierarchyDepth;
            if ((bVar1 < bVar2) ||
               ((pIVar13->_2).typeHierarchy[(ulong)bVar2 - 1] !=
                (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin)) {
              bVar2 = (TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin->_2).typeHierarchyDepth;
              if ((bVar1 < bVar2) ||
                 ((pIVar13->_2).typeHierarchy[(ulong)bVar2 - 1] !=
                  (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin)) {
                NullCheck(obj);
                p = System_Object__GetType(obj,(MethodInfo *)0x0);
                NullCheck(p);
                pSVar5 = (*(p->klass->vtable)._3_ToString.methodPtr)(p,(p->klass->vtable)._3_ToString.method);
                str0 = il2cpp_codegen_get_runtime_metadata(&"Saving invalid json type: only list, dict, structs, and primitives allowed, got ");
                pSVar5 = System_String__Concat_52f0320(str0,pSVar5,(MethodInfo *)0x0);
                pIVar13 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
                pSVar14 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar13);
                System_Exception___ctor_54fa440(pSVar14,pSVar5,(MethodInfo *)0x0);
                pMVar15 = il2cpp_codegen_get_runtime_metadata
                                    (&MethodInfo_CustomLogic_CustomLogicJsonBuiltin_SaveJSON);
                il2cpp_codegen_raise_exception((Il2CppObject *)pSVar14,pMVar15);
              }
              pIVar4 = il2cpp_codegen_is_inst_class
                                 (obj,(Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin);
              if (pIVar4 == (Il2CppObject *)0x0) goto label_05b2c82e;
              pIVar4 = il2cpp_codegen_is_inst_class
                                 (obj,(Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin);
              local_48 = pIVar4[3].klass;
              uStack_40 = pIVar4[3].monitor;
              values = (System_String_array *)SZArrayNew(TypeInfo_string_array,8);
              if (values == (System_String_array *)0x0) goto label_05b2c82e;
              il2cpp_codegen_array_set_ref((System_Array_o *)values,0,(Il2CppObject *)"quaternion:");
              pSVar5 = System_Single__ToString((float *)&local_48,(MethodInfo *)0x0);
              il2cpp_codegen_array_set_ref((System_Array_o *)values,1,(Il2CppObject *)pSVar5);
              il2cpp_codegen_array_set_ref((System_Array_o *)values,2,(Il2CppObject *)",");
              pSVar5 = System_Single__ToString((float *)((long)&local_48 + 4),(MethodInfo *)0x0);
              il2cpp_codegen_array_set_ref((System_Array_o *)values,3,(Il2CppObject *)pSVar5);
              il2cpp_codegen_array_set_ref((System_Array_o *)values,4,(Il2CppObject *)",");
              pSVar5 = System_Single__ToString((float *)&uStack_40,(MethodInfo *)0x0);
              il2cpp_codegen_array_set_ref((System_Array_o *)values,5,(Il2CppObject *)pSVar5);
              il2cpp_codegen_array_set_ref((System_Array_o *)values,6,(Il2CppObject *)",");
              pSVar5 = System_Single__ToString((float *)((long)&uStack_40 + 4),(MethodInfo *)0x0);
            }
            else {
              pIVar4 = il2cpp_codegen_is_inst_class
                                 (obj,(Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin);
              if (pIVar4 == (Il2CppObject *)0x0) goto label_05b2c82e;
              pIVar4 = il2cpp_codegen_is_inst_class
                                 (obj,(Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin);
              pIVar13 = pIVar4[3].klass;
              values = (System_String_array *)SZArrayNew(TypeInfo_string_array,8);
              if (values == (System_String_array *)0x0) goto label_05b2c82e;
              il2cpp_codegen_array_set_ref((System_Array_o *)values,0,(Il2CppObject *)"color:");
              if (pIVar13 == (Il2CppClass *)0x0) goto label_05b2c82e;
              pSVar5 = System_Int32__ToString((int32_t *)&(pIVar13->_1).name,(MethodInfo *)0x0);
              il2cpp_codegen_array_set_ref((System_Array_o *)values,1,(Il2CppObject *)pSVar5);
              il2cpp_codegen_array_set_ref((System_Array_o *)values,2,(Il2CppObject *)",");
              pSVar5 = System_Int32__ToString((int32_t *)((long)&(pIVar13->_1).name + 4),(MethodInfo *)0x0);
              il2cpp_codegen_array_set_ref((System_Array_o *)values,3,(Il2CppObject *)pSVar5);
              il2cpp_codegen_array_set_ref((System_Array_o *)values,4,(Il2CppObject *)",");
              pSVar5 = System_Int32__ToString((int32_t *)&(pIVar13->_1).namespaze,(MethodInfo *)0x0);
              il2cpp_codegen_array_set_ref((System_Array_o *)values,5,(Il2CppObject *)pSVar5);
              il2cpp_codegen_array_set_ref((System_Array_o *)values,6,(Il2CppObject *)",");
              pSVar5 = System_Int32__ToString
                                 ((int32_t *)((long)&(pIVar13->_1).namespaze + 4),(MethodInfo *)0x0);
            }
            index = 7;
          }
          else {
            pIVar4 = il2cpp_codegen_is_inst_class
                               (obj,(Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
            if (pIVar4 == (Il2CppObject *)0x0) {
label_05b2c82e:
              ThrowNullReferenceException();
            }
            pIVar4 = il2cpp_codegen_is_inst_class
                               (obj,(Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
            local_58 = pIVar4[3].klass;
            local_50[0] = *(float *)&pIVar4[3].monitor;
            values = (System_String_array *)SZArrayNew(TypeInfo_string_array,6);
            if (values == (System_String_array *)0x0) goto label_05b2c82e;
            il2cpp_codegen_array_set_ref((System_Array_o *)values,0,(Il2CppObject *)"vector3:");
            pSVar5 = System_Single__ToString((float *)&local_58,(MethodInfo *)0x0);
            il2cpp_codegen_array_set_ref((System_Array_o *)values,1,(Il2CppObject *)pSVar5);
            il2cpp_codegen_array_set_ref((System_Array_o *)values,2,(Il2CppObject *)",");
            pSVar5 = System_Single__ToString((float *)((long)&local_58 + 4),(MethodInfo *)0x0);
            il2cpp_codegen_array_set_ref((System_Array_o *)values,3,(Il2CppObject *)pSVar5);
            il2cpp_codegen_array_set_ref((System_Array_o *)values,4,(Il2CppObject *)",");
            pSVar5 = System_Single__ToString(local_50,(MethodInfo *)0x0);
            index = 5;
          }
          il2cpp_codegen_array_set_ref((System_Array_o *)values,index,(Il2CppObject *)pSVar5);
          pSVar5 = System_String__Concat_5302910(values,(MethodInfo *)0x0);
        }
        __this_00 = (SimpleJSONFixed_JSONObject_o *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONString);
        goto label_05b2c577;
      }
      __this_00 = (SimpleJSONFixed_JSONObject_o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONArray);
      SimpleJSONFixed_JSONArray___ctor((SimpleJSONFixed_JSONArray_o *)__this_00,(MethodInfo *)0x0);
      bVar1 = (TypeInfo_CustomLogic_CustomLogicListBuiltin->_2).typeHierarchyDepth;
      if (((obj->klass->_2).typeHierarchyDepth < bVar1) ||
         ((obj->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin)) goto label_05b2c824;
      if (obj[3].klass == (Il2CppClass *)0x0) goto label_05b2c82e;
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_70,
                 (System_Collections_Generic_List_object__o *)obj[3].klass,
                 (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_object_GetEnumerator);
      local_98.fields._current = (Il2CppObject *)local_60;
      local_98.fields._list = (System_Collections_Generic_List_T__o *)local_70._0_8_;
      local_98.fields._index = local_70._8_4_;
      local_98.fields._version = local_70._12_4_;
      local_70._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_70._8_8_ = &local_98;
      if (__this_00 == (SimpleJSONFixed_JSONObject_o *)0x0) {
        pMVar15 = MethodInfo_System_Collections_Generic_List_Enumerator_object_MoveNext;
        bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (&local_98,
                           (MethodInfo_4C45C50 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_object_MoveNext);
        if (bVar3) {
          CustomLogic_CustomLogicJsonBuiltin__SaveJSON(local_98.fields._current,pMVar15);
          ThrowNullReferenceException();
        }
      }
      else {
        while( true ) {
          pMVar15 = MethodInfo_System_Collections_Generic_List_Enumerator_object_MoveNext;
          bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (&local_98,
                             (MethodInfo_4C45C50 *)
                             MethodInfo_System_Collections_Generic_List_Enumerator_object_MoveNext);
          if (!bVar3) break;
          pSVar8 = CustomLogic_CustomLogicJsonBuiltin__SaveJSON(local_98.fields._current,pMVar15);
          (*(__this_00->klass->vtable)._21_Add.methodPtr)
                    (__this_00,pSVar8,(__this_00->klass->vtable)._21_Add.method);
        }
      }
    }
    else {
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject);
      SimpleJSONFixed_JSONObject___ctor(__this_00,(MethodInfo *)0x0);
      bVar1 = (TypeInfo_CustomLogic_CustomLogicDictBuiltin->_2).typeHierarchyDepth;
      if (((obj->klass->_2).typeHierarchyDepth < bVar1) ||
         ((obj->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDictBuiltin)) {
label_05b2c824:
        il2cpp_codegen_raise_invalid_cast_exception(obj);
      }
      pCVar6 = CustomLogic_CustomLogicDictBuiltin__get_Keys
                         ((CustomLogic_CustomLogicDictBuiltin_o *)obj,(MethodInfo *)0x0);
      if ((pCVar6 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) ||
         (__this = (pCVar6->fields).List, __this == (System_Collections_Generic_List_object__o *)0x0))
      goto label_05b2c82e;
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_70,__this,
                 (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_object_GetEnumerator);
      local_98.fields._current = (Il2CppObject *)local_60;
      local_98.fields._list = (System_Collections_Generic_List_T__o *)local_70._0_8_;
      local_98.fields._index = local_70._8_4_;
      local_98.fields._version = local_70._12_4_;
      local_70._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_70._8_8_ = &local_98;
      if (__this_00 == (SimpleJSONFixed_JSONObject_o *)0x0) {
        bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (&local_98,
                           (MethodInfo_4C45C50 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_object_MoveNext);
        if (bVar3) {
          if (((MethodInfo *)local_98.fields._current != (MethodInfo *)0x0) &&
             ((local_98.fields._current)->klass == g_data_07556758)) {
            pMVar15 = (MethodInfo *)local_98.fields._current;
            pIVar4 = CustomLogic_CustomLogicDictBuiltin__Get
                               ((CustomLogic_CustomLogicDictBuiltin_o *)obj,local_98.fields._current,
                                (Il2CppObject *)0x0,(MethodInfo *)0x0);
            CustomLogic_CustomLogicJsonBuiltin__SaveJSON(pIVar4,pMVar15);
            ThrowNullReferenceException();
          }
label_05b2c7d5:
          pIVar13 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
          pSVar14 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar13);
          pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Saving invalid json type: dict must have string keys.");
          System_Exception___ctor_54fa440(pSVar14,pSVar5,(MethodInfo *)0x0);
          pMVar15 = il2cpp_codegen_get_runtime_metadata
                              (&MethodInfo_CustomLogic_CustomLogicJsonBuiltin_SaveJSON);
          il2cpp_codegen_raise_exception((Il2CppObject *)pSVar14,pMVar15);
        }
      }
      else {
        while( true ) {
          bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (&local_98,
                             (MethodInfo_4C45C50 *)
                             MethodInfo_System_Collections_Generic_List_Enumerator_object_MoveNext);
          pIVar4 = local_98.fields._current;
          if (!bVar3) break;
          if (((MethodInfo *)local_98.fields._current == (MethodInfo *)0x0) ||
             ((local_98.fields._current)->klass != g_data_07556758)) goto label_05b2c7d5;
          pMVar15 = (MethodInfo *)local_98.fields._current;
          obj_00 = CustomLogic_CustomLogicDictBuiltin__Get
                             ((CustomLogic_CustomLogicDictBuiltin_o *)obj,local_98.fields._current,
                              (Il2CppObject *)0x0,(MethodInfo *)0x0);
          pSVar8 = CustomLogic_CustomLogicJsonBuiltin__SaveJSON(obj_00,pMVar15);
          if (pIVar4->klass != g_data_07556758) {
            il2cpp_codegen_raise_invalid_cast_exception(pIVar4);
          }
          (*(__this_00->klass->vtable)._20_Add.methodPtr)
                    (__this_00,(System_String_o *)pIVar4,pSVar8,(__this_00->klass->vtable)._20_Add.method);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              (&local_98,
               (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose);
  }
  return (SimpleJSONFixed_JSONNode_o *)__this_00;
}


// CustomLogic.CustomLogicJsonBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicJsonBuiltin__get_ClassName (CustomLogic_CustomLogicJsonBuiltin_o* __this, const MethodInfo* method);
// 0x5b2c980

System_String_o *
CustomLogic_CustomLogicJsonBuiltin__get_ClassName
          (CustomLogic_CustomLogicJsonBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075471b7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Json");
    Il2CppMethodInitialized_075471b7 = '\x01';
  }
  return "Json";
}


// CustomLogic.CustomLogicJsonBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicJsonBuiltin__get_IsAbstract (CustomLogic_CustomLogicJsonBuiltin_o* __this, const MethodInfo* method);
// 0x5b2c9b0

bool CustomLogic_CustomLogicJsonBuiltin__get_IsAbstract
               (CustomLogic_CustomLogicJsonBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicJsonBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicJsonBuiltin__get_IsStatic (CustomLogic_CustomLogicJsonBuiltin_o* __this, const MethodInfo* method);
// 0x5b2c9c0

bool CustomLogic_CustomLogicJsonBuiltin__get_IsStatic
               (CustomLogic_CustomLogicJsonBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicJsonBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicJsonBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicJsonBuiltin_o* __this, const MethodInfo* method);
// 0x5b2c9d0

bool CustomLogic_CustomLogicJsonBuiltin__get_InheritBaseMembers
               (CustomLogic_CustomLogicJsonBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


