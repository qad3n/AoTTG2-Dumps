// Type: CustomLogic.CustomLogicGradientModeEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/CustomLogic/CustomLogicGradientModeEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicGradientModeEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicGradientModeEnum_o* CustomLogic_CustomLogicGradientModeEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5a65420

CustomLogic_CustomLogicGradientModeEnum_o *
CustomLogic_CustomLogicGradientModeEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_075463c0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicGradientModeEnum);
    Il2CppMethodInitialized_075463c0 = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicGradientModeEnum constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicGradientModeEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = (CustomLogic_BuiltinClassInstance_o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGradientModeEnum);
  if (Il2CppMethodInitialized_075463be == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_075463be = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
  return (CustomLogic_CustomLogicGradientModeEnum_o *)__this;
}


// CustomLogic.CustomLogicGradientModeEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicGradientModeEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5a65540

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicGradientModeEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  CustomLogic_CLPropertyBinding_CustomLogicGradientModeEnum__o *pCVar2;
  System_String_o *pSVar3;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicGradientModeEnum_Bindings_c *pCVar4;
  
  if (Il2CppMethodInitialized_075463c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicGradientModeEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Blend");
    il2cpp_codegen_initialize_runtime_metadata(&"Fixed");
    Il2CppMethodInitialized_075463c1 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Blend",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicGradientModeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicGradientModeEnum_Bindings;
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGradientModeEnum_Bindings);
      pCVar2 = CustomLogic_CustomLogicGradientModeEnum_Bindings____CreatePropertyBinding__Blend
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicGradientModeEnum_Bindings____CreatePropertyBinding__Blend
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicGradientModeEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"Fixed",(MethodInfo *)0x0);
  if (!bVar1) {
    pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
    str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicGradientModeEnum not found");
    pSVar3 = System_String__Concat_5301f10(pSVar3,name,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
    System_Exception___ctor_54fa440(__this,pSVar3,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicGradientModeEnum_Bindings_CreateMemberBinding);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
  }
  if ((TypeInfo_CustomLogic_CustomLogicGradientModeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
    pCVar4 = TypeInfo_CustomLogic_CustomLogicGradientModeEnum_Bindings;
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGradientModeEnum_Bindings);
    pCVar2 = CustomLogic_CustomLogicGradientModeEnum_Bindings____CreatePropertyBinding__Fixed
                       ((MethodInfo *)pCVar4);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  pCVar2 = CustomLogic_CustomLogicGradientModeEnum_Bindings____CreatePropertyBinding__Fixed
                     ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicGradientModeEnum_Bindings);
  return (CustomLogic_ICLMemberBinding_o *)pCVar2;
}


// CustomLogic.CustomLogicGradientModeEnum.Bindings$$__CreatePropertyBinding__Blend
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicGradientModeEnum__o* CustomLogic_CustomLogicGradientModeEnum_Bindings____CreatePropertyBinding__Blend (const MethodInfo* method);
// 0x5a65680

CustomLogic_CLPropertyBinding_CustomLogicGradientModeEnum__o *
CustomLogic_CustomLogicGradientModeEnum_Bindings____CreatePropertyBinding__Blend(MethodInfo *method)

{
  System_Func_CustomLogicGradientModeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicGradientModeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075463c2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGradientModeEnum_Bindings___CreatePropertyBinding__Blend_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGradientModeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGradientModeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicGradientModeEnum_object);
    Il2CppMethodInitialized_075463c2 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicGradientModeEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicGradientModeEnum_Bindings___CreatePropertyBinding__Blend_g____getter_2_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGradientModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGradientModeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicGradientModeEnum.Bindings$$__CreatePropertyBinding__Fixed
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicGradientModeEnum__o* CustomLogic_CustomLogicGradientModeEnum_Bindings____CreatePropertyBinding__Fixed (const MethodInfo* method);
// 0x5a65720

CustomLogic_CLPropertyBinding_CustomLogicGradientModeEnum__o *
CustomLogic_CustomLogicGradientModeEnum_Bindings____CreatePropertyBinding__Fixed(MethodInfo *method)

{
  System_Func_CustomLogicGradientModeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicGradientModeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075463c3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGradientModeEnum_Bindings___CreatePropertyBinding__Fixed_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGradientModeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGradientModeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicGradientModeEnum_object);
    Il2CppMethodInitialized_075463c3 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicGradientModeEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicGradientModeEnum_Bindings___CreatePropertyBinding__Fixed_g____getter_3_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGradientModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGradientModeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicGradientModeEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicGradientModeEnum_Bindings___cctor (const MethodInfo* method);
// 0x5a657c0

void CustomLogic_CustomLogicGradientModeEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_075463c4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicGradientModeEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Blend");
    il2cpp_codegen_initialize_runtime_metadata(&"Fixed");
    Il2CppMethodInitialized_075463c4 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Blend",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Fixed",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicGradientModeEnum_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicGradientModeEnum_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicGradientModeEnum.Bindings$$<__CreatePropertyBinding__Blend>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGradientModeEnum_Bindings_____CreatePropertyBinding__Blend_g____getter_2_0 (CustomLogic_CustomLogicGradientModeEnum_o* __i, const MethodInfo* method);
// 0x5a658b0

Il2CppObject *
CustomLogic_CustomLogicGradientModeEnum_Bindings_____CreatePropertyBinding__Blend_g____getter_2_0
          (CustomLogic_CustomLogicGradientModeEnum_o *__i,MethodInfo *method)

{
  uint in_EAX;
  Il2CppObject *pIVar1;
  undefined8 uStack_8;
  
  uStack_8 = (ulong)in_EAX;
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,(void *)((long)&uStack_8 + 4));
  return pIVar1;
}


// CustomLogic.CustomLogicGradientModeEnum.Bindings$$<__CreatePropertyBinding__Fixed>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGradientModeEnum_Bindings_____CreatePropertyBinding__Fixed_g____getter_3_0 (CustomLogic_CustomLogicGradientModeEnum_o* __i, const MethodInfo* method);
// 0x5a658d0

Il2CppObject *
CustomLogic_CustomLogicGradientModeEnum_Bindings_____CreatePropertyBinding__Fixed_g____getter_3_0
          (CustomLogic_CustomLogicGradientModeEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicGradientModeEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicGradientModeEnum___ctor (CustomLogic_CustomLogicGradientModeEnum_o* __this, const MethodInfo* method);
// 0x5a65330

void CustomLogic_CustomLogicGradientModeEnum___ctor
               (CustomLogic_CustomLogicGradientModeEnum_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075463be == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_075463be = '\x01';
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


// CustomLogic.CustomLogicGradientModeEnum$$get_Blend
// il2cpp: int32_t CustomLogic_CustomLogicGradientModeEnum__get_Blend (const MethodInfo* method);
// 0x5a653a0

int32_t CustomLogic_CustomLogicGradientModeEnum__get_Blend(MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicGradientModeEnum$$get_Fixed
// il2cpp: int32_t CustomLogic_CustomLogicGradientModeEnum__get_Fixed (const MethodInfo* method);
// 0x5a653b0

int32_t CustomLogic_CustomLogicGradientModeEnum__get_Fixed(MethodInfo *method)

{
  return 1;
}


// CustomLogic.CustomLogicGradientModeEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicGradientModeEnum__get_ClassName (CustomLogic_CustomLogicGradientModeEnum_o* __this, const MethodInfo* method);
// 0x5a653c0

System_String_o *
CustomLogic_CustomLogicGradientModeEnum__get_ClassName
          (CustomLogic_CustomLogicGradientModeEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075463bf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"GradientModeEnum");
    Il2CppMethodInitialized_075463bf = '\x01';
  }
  return "GradientModeEnum";
}


// CustomLogic.CustomLogicGradientModeEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicGradientModeEnum__get_IsAbstract (CustomLogic_CustomLogicGradientModeEnum_o* __this, const MethodInfo* method);
// 0x5a653f0

bool CustomLogic_CustomLogicGradientModeEnum__get_IsAbstract
               (CustomLogic_CustomLogicGradientModeEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicGradientModeEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicGradientModeEnum__get_IsStatic (CustomLogic_CustomLogicGradientModeEnum_o* __this, const MethodInfo* method);
// 0x5a65400

bool CustomLogic_CustomLogicGradientModeEnum__get_IsStatic
               (CustomLogic_CustomLogicGradientModeEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicGradientModeEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicGradientModeEnum__get_InheritBaseMembers (CustomLogic_CustomLogicGradientModeEnum_o* __this, const MethodInfo* method);
// 0x5a65410

bool CustomLogic_CustomLogicGradientModeEnum__get_InheritBaseMembers
               (CustomLogic_CustomLogicGradientModeEnum_o *__this,MethodInfo *method)

{
  return true;
}


