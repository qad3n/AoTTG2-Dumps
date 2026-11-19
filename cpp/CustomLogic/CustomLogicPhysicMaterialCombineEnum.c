// Type: CustomLogic.CustomLogicPhysicMaterialCombineEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/CustomLogic/CustomLogicPhysicMaterialCombineEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicPhysicMaterialCombineEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicPhysicMaterialCombineEnum_o* CustomLogic_CustomLogicPhysicMaterialCombineEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5a98610

CustomLogic_CustomLogicPhysicMaterialCombineEnum_o *
CustomLogic_CustomLogicPhysicMaterialCombineEnum_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_07546865 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPhysicMaterialCombineEnum);
    Il2CppMethodInitialized_07546865 = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicPhysicMaterialCombineEnum constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicPhysicMaterialCombineEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = (CustomLogic_BuiltinClassInstance_o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicMaterialCombineEnum)
  ;
  if (Il2CppMethodInitialized_07546863 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546863 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
  return (CustomLogic_CustomLogicPhysicMaterialCombineEnum_o *)__this;
}


// CustomLogic.CustomLogicPhysicMaterialCombineEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5a98730

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum__o *pCVar2;
  System_String_o *pSVar3;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings_c *pCVar4;
  
  if (Il2CppMethodInitialized_07546866 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Average");
    il2cpp_codegen_initialize_runtime_metadata(&"Minimum");
    il2cpp_codegen_initialize_runtime_metadata(&"Maximum");
    il2cpp_codegen_initialize_runtime_metadata(&"Multiply");
    Il2CppMethodInitialized_07546866 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Minimum",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings->_2).cctor_finished_or_no_cctor ==
        0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings;
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings);
      pCVar2 = CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings____CreatePropertyBinding__Minimum
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings____CreatePropertyBinding__Minimum
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"Multiply",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings->_2).cctor_finished_or_no_cctor ==
        0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings;
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings);
      pCVar2 = CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings____CreatePropertyBinding__Multiply
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings____CreatePropertyBinding__Multiply
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"Maximum",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings->_2).cctor_finished_or_no_cctor ==
        0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings;
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings);
      pCVar2 = CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings____CreatePropertyBinding__Maximum
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings____CreatePropertyBinding__Maximum
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"Average",(MethodInfo *)0x0);
  if (!bVar1) {
    pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
    str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicPhysicMaterialCombineEnum not found");
    pSVar3 = System_String__Concat_5301f10(pSVar3,name,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
    System_Exception___ctor_54fa440(__this,pSVar3,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings_CreateMemberBinding)
    ;
    il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
  }
  if ((TypeInfo_CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings->_2).cctor_finished_or_no_cctor == 0
     ) {
    pCVar4 = TypeInfo_CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings;
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings);
    pCVar2 = CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings____CreatePropertyBinding__Average
                       ((MethodInfo *)pCVar4);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  pCVar2 = CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings____CreatePropertyBinding__Average
                     ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings);
  return (CustomLogic_ICLMemberBinding_o *)pCVar2;
}


// CustomLogic.CustomLogicPhysicMaterialCombineEnum.Bindings$$__CreatePropertyBinding__Minimum
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum__o* CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings____CreatePropertyBinding__Minimum (const MethodInfo* method);
// 0x5a98910

CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum__o *
CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings____CreatePropertyBinding__Minimum
          (MethodInfo *method)

{
  System_Func_CustomLogicPhysicMaterialCombineEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546867 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings___CreatePropertyBinding__Minimum_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicPhysicMaterialCombineEnum_object);
    Il2CppMethodInitialized_07546867 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPhysicMaterialCombineEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings___CreatePropertyBinding__Minimum_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicPhysicMaterialCombineEnum.Bindings$$__CreatePropertyBinding__Multiply
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum__o* CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings____CreatePropertyBinding__Multiply (const MethodInfo* method);
// 0x5a989b0

CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum__o *
CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings____CreatePropertyBinding__Multiply
          (MethodInfo *method)

{
  System_Func_CustomLogicPhysicMaterialCombineEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546868 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings___CreatePropertyBinding__Multiply_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicPhysicMaterialCombineEnum_object);
    Il2CppMethodInitialized_07546868 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPhysicMaterialCombineEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings___CreatePropertyBinding__Multiply_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicPhysicMaterialCombineEnum.Bindings$$__CreatePropertyBinding__Maximum
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum__o* CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings____CreatePropertyBinding__Maximum (const MethodInfo* method);
// 0x5a98a50

CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum__o *
CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings____CreatePropertyBinding__Maximum
          (MethodInfo *method)

{
  System_Func_CustomLogicPhysicMaterialCombineEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546869 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings___CreatePropertyBinding__Maximum_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicPhysicMaterialCombineEnum_object);
    Il2CppMethodInitialized_07546869 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPhysicMaterialCombineEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings___CreatePropertyBinding__Maximum_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicPhysicMaterialCombineEnum.Bindings$$__CreatePropertyBinding__Average
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum__o* CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings____CreatePropertyBinding__Average (const MethodInfo* method);
// 0x5a98af0

CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum__o *
CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings____CreatePropertyBinding__Average
          (MethodInfo *method)

{
  System_Func_CustomLogicPhysicMaterialCombineEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754686a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings___CreatePropertyBinding__Average_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicPhysicMaterialCombineEnum_object);
    Il2CppMethodInitialized_0754686a = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPhysicMaterialCombineEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings___CreatePropertyBinding__Average_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicPhysicMaterialCombineEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings___cctor (const MethodInfo* method);
// 0x5a98b90

void CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_0754686b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Average");
    il2cpp_codegen_initialize_runtime_metadata(&"Minimum");
    il2cpp_codegen_initialize_runtime_metadata(&"Maximum");
    il2cpp_codegen_initialize_runtime_metadata(&"Multiply");
    Il2CppMethodInitialized_0754686b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Minimum",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Multiply",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Maximum",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Average",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicPhysicMaterialCombineEnum.Bindings$$<__CreatePropertyBinding__Minimum>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings_____CreatePropertyBinding__Minimum_g____getter_2_0 (CustomLogic_CustomLogicPhysicMaterialCombineEnum_o* __i, const MethodInfo* method);
// 0x5a98cc0

Il2CppObject *
CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings_____CreatePropertyBinding__Minimum_g____getter_2_0
          (CustomLogic_CustomLogicPhysicMaterialCombineEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicPhysicMaterialCombineEnum.Bindings$$<__CreatePropertyBinding__Multiply>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings_____CreatePropertyBinding__Multiply_g____getter_3_0 (CustomLogic_CustomLogicPhysicMaterialCombineEnum_o* __i, const MethodInfo* method);
// 0x5a98ce0

Il2CppObject *
CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings_____CreatePropertyBinding__Multiply_g____getter_3_0
          (CustomLogic_CustomLogicPhysicMaterialCombineEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicPhysicMaterialCombineEnum.Bindings$$<__CreatePropertyBinding__Maximum>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings_____CreatePropertyBinding__Maximum_g____getter_4_0 (CustomLogic_CustomLogicPhysicMaterialCombineEnum_o* __i, const MethodInfo* method);
// 0x5a98d00

Il2CppObject *
CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings_____CreatePropertyBinding__Maximum_g____getter_4_0
          (CustomLogic_CustomLogicPhysicMaterialCombineEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicPhysicMaterialCombineEnum.Bindings$$<__CreatePropertyBinding__Average>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings_____CreatePropertyBinding__Average_g____getter_5_0 (CustomLogic_CustomLogicPhysicMaterialCombineEnum_o* __i, const MethodInfo* method);
// 0x5a98d20

Il2CppObject *
CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings_____CreatePropertyBinding__Average_g____getter_5_0
          (CustomLogic_CustomLogicPhysicMaterialCombineEnum_o *__i,MethodInfo *method)

{
  uint in_EAX;
  Il2CppObject *pIVar1;
  undefined8 uStack_8;
  
  uStack_8 = (ulong)in_EAX;
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,(void *)((long)&uStack_8 + 4));
  return pIVar1;
}


// CustomLogic.CustomLogicPhysicMaterialCombineEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicPhysicMaterialCombineEnum___ctor (CustomLogic_CustomLogicPhysicMaterialCombineEnum_o* __this, const MethodInfo* method);
// 0x5a98500

void CustomLogic_CustomLogicPhysicMaterialCombineEnum___ctor
               (CustomLogic_CustomLogicPhysicMaterialCombineEnum_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546863 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546863 = '\x01';
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


// CustomLogic.CustomLogicPhysicMaterialCombineEnum$$get_Minimum
// il2cpp: int32_t CustomLogic_CustomLogicPhysicMaterialCombineEnum__get_Minimum (const MethodInfo* method);
// 0x5a98570

int32_t CustomLogic_CustomLogicPhysicMaterialCombineEnum__get_Minimum(MethodInfo *method)

{
  return 2;
}


// CustomLogic.CustomLogicPhysicMaterialCombineEnum$$get_Multiply
// il2cpp: int32_t CustomLogic_CustomLogicPhysicMaterialCombineEnum__get_Multiply (const MethodInfo* method);
// 0x5a98580

int32_t CustomLogic_CustomLogicPhysicMaterialCombineEnum__get_Multiply(MethodInfo *method)

{
  return 1;
}


// CustomLogic.CustomLogicPhysicMaterialCombineEnum$$get_Maximum
// il2cpp: int32_t CustomLogic_CustomLogicPhysicMaterialCombineEnum__get_Maximum (const MethodInfo* method);
// 0x5a98590

int32_t CustomLogic_CustomLogicPhysicMaterialCombineEnum__get_Maximum(MethodInfo *method)

{
  return 3;
}


// CustomLogic.CustomLogicPhysicMaterialCombineEnum$$get_Average
// il2cpp: int32_t CustomLogic_CustomLogicPhysicMaterialCombineEnum__get_Average (const MethodInfo* method);
// 0x5a985a0

int32_t CustomLogic_CustomLogicPhysicMaterialCombineEnum__get_Average(MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicPhysicMaterialCombineEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicPhysicMaterialCombineEnum__get_ClassName (CustomLogic_CustomLogicPhysicMaterialCombineEnum_o* __this, const MethodInfo* method);
// 0x5a985b0

System_String_o *
CustomLogic_CustomLogicPhysicMaterialCombineEnum__get_ClassName
          (CustomLogic_CustomLogicPhysicMaterialCombineEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546864 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"PhysicMaterialCombineEnum");
    Il2CppMethodInitialized_07546864 = '\x01';
  }
  return "PhysicMaterialCombineEnum";
}


// CustomLogic.CustomLogicPhysicMaterialCombineEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicPhysicMaterialCombineEnum__get_IsAbstract (CustomLogic_CustomLogicPhysicMaterialCombineEnum_o* __this, const MethodInfo* method);
// 0x5a985e0

bool CustomLogic_CustomLogicPhysicMaterialCombineEnum__get_IsAbstract
               (CustomLogic_CustomLogicPhysicMaterialCombineEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicPhysicMaterialCombineEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicPhysicMaterialCombineEnum__get_IsStatic (CustomLogic_CustomLogicPhysicMaterialCombineEnum_o* __this, const MethodInfo* method);
// 0x5a985f0

bool CustomLogic_CustomLogicPhysicMaterialCombineEnum__get_IsStatic
               (CustomLogic_CustomLogicPhysicMaterialCombineEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicPhysicMaterialCombineEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicPhysicMaterialCombineEnum__get_InheritBaseMembers (CustomLogic_CustomLogicPhysicMaterialCombineEnum_o* __this, const MethodInfo* method);
// 0x5a98600

bool CustomLogic_CustomLogicPhysicMaterialCombineEnum__get_InheritBaseMembers
               (CustomLogic_CustomLogicPhysicMaterialCombineEnum_o *__this,MethodInfo *method)

{
  return true;
}


