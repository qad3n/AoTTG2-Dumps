// Type: CustomLogic.CustomLogicWrapEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicWrapEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicWrapEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicWrapEnum_o* CustomLogic_CustomLogicWrapEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5ac4360

CustomLogic_CustomLogicWrapEnum_o *
CustomLogic_CustomLogicWrapEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_07546c57 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicWrapEnum);
    Il2CppMethodInitialized_07546c57 = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicWrapEnum constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicWrapEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = (CustomLogic_BuiltinClassInstance_o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWrapEnum);
  if (Il2CppMethodInitialized_07546c55 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546c55 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
  return (CustomLogic_CustomLogicWrapEnum_o *)__this;
}


// CustomLogic.CustomLogicWrapEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicWrapEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5ac4480

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicWrapEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  CustomLogic_CLPropertyBinding_CustomLogicWrapEnum__o *pCVar2;
  System_String_o *pSVar3;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicWrapEnum_Bindings_c *pCVar4;
  
  if (Il2CppMethodInitialized_07546c58 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicWrapEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"NoWrap");
    il2cpp_codegen_initialize_runtime_metadata(&"WrapReverse");
    il2cpp_codegen_initialize_runtime_metadata(&"Wrap");
    Il2CppMethodInitialized_07546c58 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"NoWrap",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicWrapEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicWrapEnum_Bindings;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWrapEnum_Bindings);
      pCVar2 = CustomLogic_CustomLogicWrapEnum_Bindings____CreatePropertyBinding__NoWrap((MethodInfo *)pCVar4)
      ;
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicWrapEnum_Bindings____CreatePropertyBinding__NoWrap
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicWrapEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"Wrap",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicWrapEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicWrapEnum_Bindings;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWrapEnum_Bindings);
      pCVar2 = CustomLogic_CustomLogicWrapEnum_Bindings____CreatePropertyBinding__Wrap((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicWrapEnum_Bindings____CreatePropertyBinding__Wrap
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicWrapEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"WrapReverse",(MethodInfo *)0x0);
  if (!bVar1) {
    pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
    str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicWrapEnum not found");
    pSVar3 = System_String__Concat_5301f10(pSVar3,name,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
    System_Exception___ctor_54fa440(__this,pSVar3,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicWrapEnum_Bindings_CreateMemberBinding);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
  }
  if ((TypeInfo_CustomLogic_CustomLogicWrapEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
    pCVar4 = TypeInfo_CustomLogic_CustomLogicWrapEnum_Bindings;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWrapEnum_Bindings);
    pCVar2 = CustomLogic_CustomLogicWrapEnum_Bindings____CreatePropertyBinding__WrapReverse
                       ((MethodInfo *)pCVar4);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  pCVar2 = CustomLogic_CustomLogicWrapEnum_Bindings____CreatePropertyBinding__WrapReverse
                     ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicWrapEnum_Bindings);
  return (CustomLogic_ICLMemberBinding_o *)pCVar2;
}


// CustomLogic.CustomLogicWrapEnum.Bindings$$__CreatePropertyBinding__NoWrap
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWrapEnum__o* CustomLogic_CustomLogicWrapEnum_Bindings____CreatePropertyBinding__NoWrap (const MethodInfo* method);
// 0x5ac4610

CustomLogic_CLPropertyBinding_CustomLogicWrapEnum__o *
CustomLogic_CustomLogicWrapEnum_Bindings____CreatePropertyBinding__NoWrap(MethodInfo *method)

{
  System_Func_CustomLogicWrapEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicWrapEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546c59 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWrapEnum_Bindings___CreatePropertyBinding__NoWrap_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWrapEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWrapEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicWrapEnum_object);
    Il2CppMethodInitialized_07546c59 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicWrapEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWrapEnum_Bindings___CreatePropertyBinding__NoWrap_g____getter_2_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWrapEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWrapEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicWrapEnum.Bindings$$__CreatePropertyBinding__Wrap
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWrapEnum__o* CustomLogic_CustomLogicWrapEnum_Bindings____CreatePropertyBinding__Wrap (const MethodInfo* method);
// 0x5ac46b0

CustomLogic_CLPropertyBinding_CustomLogicWrapEnum__o *
CustomLogic_CustomLogicWrapEnum_Bindings____CreatePropertyBinding__Wrap(MethodInfo *method)

{
  System_Func_CustomLogicWrapEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicWrapEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546c5a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWrapEnum_Bindings___CreatePropertyBinding__Wrap_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWrapEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWrapEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicWrapEnum_object);
    Il2CppMethodInitialized_07546c5a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicWrapEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWrapEnum_Bindings___CreatePropertyBinding__Wrap_g____getter_3_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWrapEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWrapEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicWrapEnum.Bindings$$__CreatePropertyBinding__WrapReverse
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWrapEnum__o* CustomLogic_CustomLogicWrapEnum_Bindings____CreatePropertyBinding__WrapReverse (const MethodInfo* method);
// 0x5ac4750

CustomLogic_CLPropertyBinding_CustomLogicWrapEnum__o *
CustomLogic_CustomLogicWrapEnum_Bindings____CreatePropertyBinding__WrapReverse(MethodInfo *method)

{
  System_Func_CustomLogicWrapEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicWrapEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546c5b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWrapEnum_Bindings___CreatePropertyBinding__WrapReverse_g____getter_4_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWrapEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWrapEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicWrapEnum_object);
    Il2CppMethodInitialized_07546c5b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicWrapEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWrapEnum_Bindings___CreatePropertyBinding__WrapReverse_g____getter_4_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWrapEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWrapEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicWrapEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicWrapEnum_Bindings___cctor (const MethodInfo* method);
// 0x5ac47f0

void CustomLogic_CustomLogicWrapEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07546c5c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicWrapEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"NoWrap");
    il2cpp_codegen_initialize_runtime_metadata(&"WrapReverse");
    il2cpp_codegen_initialize_runtime_metadata(&"Wrap");
    Il2CppMethodInitialized_07546c5c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"NoWrap",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Wrap",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"WrapReverse",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicWrapEnum_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicWrapEnum_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicWrapEnum.Bindings$$<__CreatePropertyBinding__NoWrap>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWrapEnum_Bindings_____CreatePropertyBinding__NoWrap_g____getter_2_0 (CustomLogic_CustomLogicWrapEnum_o* __i, const MethodInfo* method);
// 0x5ac4900

Il2CppObject *
CustomLogic_CustomLogicWrapEnum_Bindings_____CreatePropertyBinding__NoWrap_g____getter_2_0
          (CustomLogic_CustomLogicWrapEnum_o *__i,MethodInfo *method)

{
  uint in_EAX;
  Il2CppObject *pIVar1;
  undefined8 uStack_8;
  
  uStack_8 = (ulong)in_EAX;
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,(void *)((long)&uStack_8 + 4));
  return pIVar1;
}


// CustomLogic.CustomLogicWrapEnum.Bindings$$<__CreatePropertyBinding__Wrap>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWrapEnum_Bindings_____CreatePropertyBinding__Wrap_g____getter_3_0 (CustomLogic_CustomLogicWrapEnum_o* __i, const MethodInfo* method);
// 0x5ac4920

Il2CppObject *
CustomLogic_CustomLogicWrapEnum_Bindings_____CreatePropertyBinding__Wrap_g____getter_3_0
          (CustomLogic_CustomLogicWrapEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicWrapEnum.Bindings$$<__CreatePropertyBinding__WrapReverse>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWrapEnum_Bindings_____CreatePropertyBinding__WrapReverse_g____getter_4_0 (CustomLogic_CustomLogicWrapEnum_o* __i, const MethodInfo* method);
// 0x5ac4940

Il2CppObject *
CustomLogic_CustomLogicWrapEnum_Bindings_____CreatePropertyBinding__WrapReverse_g____getter_4_0
          (CustomLogic_CustomLogicWrapEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicWrapEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicWrapEnum___ctor (CustomLogic_CustomLogicWrapEnum_o* __this, const MethodInfo* method);
// 0x5ac4260

void CustomLogic_CustomLogicWrapEnum___ctor(CustomLogic_CustomLogicWrapEnum_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546c55 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546c55 = '\x01';
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


// CustomLogic.CustomLogicWrapEnum$$get_NoWrap
// il2cpp: int32_t CustomLogic_CustomLogicWrapEnum__get_NoWrap (const MethodInfo* method);
// 0x5ac42d0

int32_t CustomLogic_CustomLogicWrapEnum__get_NoWrap(MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicWrapEnum$$get_Wrap
// il2cpp: int32_t CustomLogic_CustomLogicWrapEnum__get_Wrap (const MethodInfo* method);
// 0x5ac42e0

int32_t CustomLogic_CustomLogicWrapEnum__get_Wrap(MethodInfo *method)

{
  return 1;
}


// CustomLogic.CustomLogicWrapEnum$$get_WrapReverse
// il2cpp: int32_t CustomLogic_CustomLogicWrapEnum__get_WrapReverse (const MethodInfo* method);
// 0x5ac42f0

int32_t CustomLogic_CustomLogicWrapEnum__get_WrapReverse(MethodInfo *method)

{
  return 2;
}


// CustomLogic.CustomLogicWrapEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicWrapEnum__get_ClassName (CustomLogic_CustomLogicWrapEnum_o* __this, const MethodInfo* method);
// 0x5ac4300

System_String_o *
CustomLogic_CustomLogicWrapEnum__get_ClassName(CustomLogic_CustomLogicWrapEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546c56 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"WrapEnum");
    Il2CppMethodInitialized_07546c56 = '\x01';
  }
  return "WrapEnum";
}


// CustomLogic.CustomLogicWrapEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicWrapEnum__get_IsAbstract (CustomLogic_CustomLogicWrapEnum_o* __this, const MethodInfo* method);
// 0x5ac4330

bool CustomLogic_CustomLogicWrapEnum__get_IsAbstract
               (CustomLogic_CustomLogicWrapEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicWrapEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicWrapEnum__get_IsStatic (CustomLogic_CustomLogicWrapEnum_o* __this, const MethodInfo* method);
// 0x5ac4340

bool CustomLogic_CustomLogicWrapEnum__get_IsStatic
               (CustomLogic_CustomLogicWrapEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicWrapEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicWrapEnum__get_InheritBaseMembers (CustomLogic_CustomLogicWrapEnum_o* __this, const MethodInfo* method);
// 0x5ac4350

bool CustomLogic_CustomLogicWrapEnum__get_InheritBaseMembers
               (CustomLogic_CustomLogicWrapEnum_o *__this,MethodInfo *method)

{
  return true;
}


