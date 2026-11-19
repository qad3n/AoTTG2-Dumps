// Type: CustomLogic.CustomLogicAspectRatioEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicAspectRatioEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicAspectRatioEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicAspectRatioEnum_o* CustomLogic_CustomLogicAspectRatioEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5a58d10

CustomLogic_CustomLogicAspectRatioEnum_o *
CustomLogic_CustomLogicAspectRatioEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_075462da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAspectRatioEnum);
    Il2CppMethodInitialized_075462da = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicAspectRatioEnum constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicAspectRatioEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = (CustomLogic_BuiltinClassInstance_o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAspectRatioEnum);
  if (Il2CppMethodInitialized_075462d8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_075462d8 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
  return (CustomLogic_CustomLogicAspectRatioEnum_o *)__this;
}


// CustomLogic.CustomLogicAspectRatioEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicAspectRatioEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5a58e30

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicAspectRatioEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  CustomLogic_CLPropertyBinding_CustomLogicAspectRatioEnum__o *pCVar2;
  System_String_o *pSVar3;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicAspectRatioEnum_Bindings_c *pCVar4;
  
  if (Il2CppMethodInitialized_075462db == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAspectRatioEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Width");
    il2cpp_codegen_initialize_runtime_metadata(&"Height");
    Il2CppMethodInitialized_075462db = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Height",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicAspectRatioEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicAspectRatioEnum_Bindings;
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAspectRatioEnum_Bindings);
      pCVar2 = CustomLogic_CustomLogicAspectRatioEnum_Bindings____CreatePropertyBinding__Height
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicAspectRatioEnum_Bindings____CreatePropertyBinding__Height
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicAspectRatioEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"Width",(MethodInfo *)0x0);
  if (!bVar1) {
    pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
    str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicAspectRatioEnum not found");
    pSVar3 = System_String__Concat_5301f10(pSVar3,name,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
    System_Exception___ctor_54fa440(__this,pSVar3,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicAspectRatioEnum_Bindings_CreateMemberBinding);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
  }
  if ((TypeInfo_CustomLogic_CustomLogicAspectRatioEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
    pCVar4 = TypeInfo_CustomLogic_CustomLogicAspectRatioEnum_Bindings;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAspectRatioEnum_Bindings)
    ;
    pCVar2 = CustomLogic_CustomLogicAspectRatioEnum_Bindings____CreatePropertyBinding__Width
                       ((MethodInfo *)pCVar4);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  pCVar2 = CustomLogic_CustomLogicAspectRatioEnum_Bindings____CreatePropertyBinding__Width
                     ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicAspectRatioEnum_Bindings);
  return (CustomLogic_ICLMemberBinding_o *)pCVar2;
}


// CustomLogic.CustomLogicAspectRatioEnum.Bindings$$__CreatePropertyBinding__Height
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAspectRatioEnum__o* CustomLogic_CustomLogicAspectRatioEnum_Bindings____CreatePropertyBinding__Height (const MethodInfo* method);
// 0x5a58f70

CustomLogic_CLPropertyBinding_CustomLogicAspectRatioEnum__o *
CustomLogic_CustomLogicAspectRatioEnum_Bindings____CreatePropertyBinding__Height(MethodInfo *method)

{
  System_Func_CustomLogicAspectRatioEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicAspectRatioEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075462dc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAspectRatioEnum_Bindings___CreatePropertyBinding__Height_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAspectRatioEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAspectRatioEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAspectRatioEnum_object);
    Il2CppMethodInitialized_075462dc = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicAspectRatioEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicAspectRatioEnum_Bindings___CreatePropertyBinding__Height_g____getter_2_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAspectRatioEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAspectRatioEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicAspectRatioEnum.Bindings$$__CreatePropertyBinding__Width
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAspectRatioEnum__o* CustomLogic_CustomLogicAspectRatioEnum_Bindings____CreatePropertyBinding__Width (const MethodInfo* method);
// 0x5a59010

CustomLogic_CLPropertyBinding_CustomLogicAspectRatioEnum__o *
CustomLogic_CustomLogicAspectRatioEnum_Bindings____CreatePropertyBinding__Width(MethodInfo *method)

{
  System_Func_CustomLogicAspectRatioEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicAspectRatioEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075462dd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAspectRatioEnum_Bindings___CreatePropertyBinding__Width_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAspectRatioEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAspectRatioEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAspectRatioEnum_object);
    Il2CppMethodInitialized_075462dd = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicAspectRatioEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicAspectRatioEnum_Bindings___CreatePropertyBinding__Width_g____getter_3_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAspectRatioEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAspectRatioEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicAspectRatioEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicAspectRatioEnum_Bindings___cctor (const MethodInfo* method);
// 0x5a590b0

void CustomLogic_CustomLogicAspectRatioEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_075462de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAspectRatioEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Width");
    il2cpp_codegen_initialize_runtime_metadata(&"Height");
    Il2CppMethodInitialized_075462de = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Height",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Width",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicAspectRatioEnum_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicAspectRatioEnum_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicAspectRatioEnum.Bindings$$<__CreatePropertyBinding__Height>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAspectRatioEnum_Bindings_____CreatePropertyBinding__Height_g____getter_2_0 (CustomLogic_CustomLogicAspectRatioEnum_o* __i, const MethodInfo* method);
// 0x5a591a0

Il2CppObject *
CustomLogic_CustomLogicAspectRatioEnum_Bindings_____CreatePropertyBinding__Height_g____getter_2_0
          (CustomLogic_CustomLogicAspectRatioEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicAspectRatioEnum.Bindings$$<__CreatePropertyBinding__Width>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAspectRatioEnum_Bindings_____CreatePropertyBinding__Width_g____getter_3_0 (CustomLogic_CustomLogicAspectRatioEnum_o* __i, const MethodInfo* method);
// 0x5a591c0

Il2CppObject *
CustomLogic_CustomLogicAspectRatioEnum_Bindings_____CreatePropertyBinding__Width_g____getter_3_0
          (CustomLogic_CustomLogicAspectRatioEnum_o *__i,MethodInfo *method)

{
  uint in_EAX;
  Il2CppObject *pIVar1;
  undefined8 uStack_8;
  
  uStack_8 = (ulong)in_EAX;
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,(void *)((long)&uStack_8 + 4));
  return pIVar1;
}


// CustomLogic.CustomLogicAspectRatioEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicAspectRatioEnum___ctor (CustomLogic_CustomLogicAspectRatioEnum_o* __this, const MethodInfo* method);
// 0x5a58c20

void CustomLogic_CustomLogicAspectRatioEnum___ctor
               (CustomLogic_CustomLogicAspectRatioEnum_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075462d8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_075462d8 = '\x01';
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


// CustomLogic.CustomLogicAspectRatioEnum$$get_Height
// il2cpp: int32_t CustomLogic_CustomLogicAspectRatioEnum__get_Height (const MethodInfo* method);
// 0x5a58c90

int32_t CustomLogic_CustomLogicAspectRatioEnum__get_Height(MethodInfo *method)

{
  return 1;
}


// CustomLogic.CustomLogicAspectRatioEnum$$get_Width
// il2cpp: int32_t CustomLogic_CustomLogicAspectRatioEnum__get_Width (const MethodInfo* method);
// 0x5a58ca0

int32_t CustomLogic_CustomLogicAspectRatioEnum__get_Width(MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicAspectRatioEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicAspectRatioEnum__get_ClassName (CustomLogic_CustomLogicAspectRatioEnum_o* __this, const MethodInfo* method);
// 0x5a58cb0

System_String_o *
CustomLogic_CustomLogicAspectRatioEnum__get_ClassName
          (CustomLogic_CustomLogicAspectRatioEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075462d9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"AspectRatioEnum");
    Il2CppMethodInitialized_075462d9 = '\x01';
  }
  return "AspectRatioEnum";
}


// CustomLogic.CustomLogicAspectRatioEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicAspectRatioEnum__get_IsAbstract (CustomLogic_CustomLogicAspectRatioEnum_o* __this, const MethodInfo* method);
// 0x5a58ce0

bool CustomLogic_CustomLogicAspectRatioEnum__get_IsAbstract
               (CustomLogic_CustomLogicAspectRatioEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicAspectRatioEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicAspectRatioEnum__get_IsStatic (CustomLogic_CustomLogicAspectRatioEnum_o* __this, const MethodInfo* method);
// 0x5a58cf0

bool CustomLogic_CustomLogicAspectRatioEnum__get_IsStatic
               (CustomLogic_CustomLogicAspectRatioEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicAspectRatioEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicAspectRatioEnum__get_InheritBaseMembers (CustomLogic_CustomLogicAspectRatioEnum_o* __this, const MethodInfo* method);
// 0x5a58d00

bool CustomLogic_CustomLogicAspectRatioEnum__get_InheritBaseMembers
               (CustomLogic_CustomLogicAspectRatioEnum_o *__this,MethodInfo *method)

{
  return true;
}


