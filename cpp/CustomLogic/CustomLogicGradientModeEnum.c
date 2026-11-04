// Type: CustomLogic.CustomLogicGradientModeEnum
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicGradientModeEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicGradientModeEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicGradientModeEnum_o* CustomLogic_CustomLogicGradientModeEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x181fa4c40

CustomLogic_CustomLogicGradientModeEnum_o *
CustomLogic_CustomLogicGradientModeEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_184345a07 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicGradientModeEnum);
    Il2CppMethodInitialized_184345a07 = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGradientModeEnum);
      if (Il2CppMethodInitialized_184345a05 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_184345a05 = '\x01';
      }
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicGradientModeEnum_o *)__this;
    }
    NullCheck(args);
    local_res8[0] = (int32_t)args->max_length;
    pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicGradientModeEnum constructor found that takes ");
    pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicGradientModeEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGradientModeEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicGradientModeEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181f8aeb0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicGradientModeEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicGradientModeEnum__o *__this_00;
  System_String_o *pSVar2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  MethodInfo *pMVar3;
  
  if (Il2CppMethodInitialized_184345a08 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicGradientModeEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Blend");
    il2cpp_codegen_initialize_runtime_metadata(&"Fixed");
    Il2CppMethodInitialized_184345a08 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Blend",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicGradientModeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGradientModeEnum_Bindings);
    }
    if (Il2CppMethodInitialized_184345a09 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicGradientModeEnum_Bindings___CreatePropertyBinding__Blend_g____getter_2_0
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGradientModeEnum_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGradientModeEnum);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicGradientModeEnum_object);
      Il2CppMethodInitialized_184345a09 = '\x01';
    }
    __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicGradientModeEnum_object)
    ;
    pMVar3 = 
    MethodInfo_CustomLogic_CustomLogicGradientModeEnum_Bindings___CreatePropertyBinding__Blend_g____getter_2_0
    ;
  }
  else {
    bVar1 = System_String__op_Equality(name,"Fixed",(MethodInfo *)0x0);
    if (!bVar1) {
      pSVar2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicGradientModeEnum not found");
      str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
      pSVar2 = System_String__Concat_1969b70(str0,name,pSVar2,(MethodInfo *)0x0);
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
      __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
      System_Exception___ctor_1b6abf0(__this_01,pSVar2,(MethodInfo *)0x0);
      pMVar3 = il2cpp_codegen_get_runtime_metadata
                         (&MethodInfo_CustomLogic_CustomLogicGradientModeEnum_Bindings_CreateMemberBinding);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,pMVar3);
    }
    if ((TypeInfo_CustomLogic_CustomLogicGradientModeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicGradientModeEnum_Bindings);
    }
    if (Il2CppMethodInitialized_184345a0a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicGradientModeEnum_Bindings___CreatePropertyBinding__Fixed_g____getter_3_0
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGradientModeEnum_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGradientModeEnum);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicGradientModeEnum_object);
      Il2CppMethodInitialized_184345a0a = '\x01';
    }
    __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicGradientModeEnum_object)
    ;
    pMVar3 = 
    MethodInfo_CustomLogic_CustomLogicGradientModeEnum_Bindings___CreatePropertyBinding__Fixed_g____getter_3_0
    ;
  }
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            (__this,(Il2CppObject *)0x0,(intptr_t)pMVar3,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGradientModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGradientModeEnum_ctor);
  return (CustomLogic_ICLMemberBinding_o *)__this_00;
}


// CustomLogic.CustomLogicGradientModeEnum.Bindings$$__CreatePropertyBinding__Blend
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicGradientModeEnum__o* CustomLogic_CustomLogicGradientModeEnum_Bindings____CreatePropertyBinding__Blend (const MethodInfo* method);
// 0x181f95180

CustomLogic_CLPropertyBinding_CustomLogicGradientModeEnum__o *
CustomLogic_CustomLogicGradientModeEnum_Bindings____CreatePropertyBinding__Blend(MethodInfo *method)

{
  System_Func_CustomLogicGradientModeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicGradientModeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345a09 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGradientModeEnum_Bindings___CreatePropertyBinding__Blend_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGradientModeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGradientModeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicGradientModeEnum_object);
    Il2CppMethodInitialized_184345a09 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicGradientModeEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicGradientModeEnum_Bindings___CreatePropertyBinding__Blend_g____getter_2_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGradientModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGradientModeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicGradientModeEnum.Bindings$$__CreatePropertyBinding__Fixed
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicGradientModeEnum__o* CustomLogic_CustomLogicGradientModeEnum_Bindings____CreatePropertyBinding__Fixed (const MethodInfo* method);
// 0x181f97020

CustomLogic_CLPropertyBinding_CustomLogicGradientModeEnum__o *
CustomLogic_CustomLogicGradientModeEnum_Bindings____CreatePropertyBinding__Fixed(MethodInfo *method)

{
  System_Func_CustomLogicGradientModeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicGradientModeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345a0a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicGradientModeEnum_Bindings___CreatePropertyBinding__Fixed_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGradientModeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGradientModeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicGradientModeEnum_object);
    Il2CppMethodInitialized_184345a0a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicGradientModeEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicGradientModeEnum_Bindings___CreatePropertyBinding__Fixed_g____getter_3_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicGradientModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicGradientModeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicGradientModeEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicGradientModeEnum_Bindings___cctor (const MethodInfo* method);
// 0x181f9d1a0

void CustomLogic_CustomLogicGradientModeEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_184345a0b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicGradientModeEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Blend");
    il2cpp_codegen_initialize_runtime_metadata(&"Fixed");
    Il2CppMethodInitialized_184345a0b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Blend",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Fixed",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicGradientModeEnum_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicGradientModeEnum_Bindings->static_fields->MemberNames,__this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicGradientModeEnum.Bindings$$<__CreatePropertyBinding__Blend>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGradientModeEnum_Bindings_____CreatePropertyBinding__Blend_g____getter_2_0 (CustomLogic_CustomLogicGradientModeEnum_o* __i, const MethodInfo* method);
// 0x181ef2260

Il2CppObject*
CustomLogic_CustomLogicGradientModeEnum_Bindings_____CreatePropertyBinding__Blend_g____getter_2_0(CustomLogic_CustomLogicGradientModeEnum_o* __i, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 0;
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicGradientModeEnum.Bindings$$<__CreatePropertyBinding__Fixed>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicGradientModeEnum_Bindings_____CreatePropertyBinding__Fixed_g____getter_3_0 (CustomLogic_CustomLogicGradientModeEnum_o* __i, const MethodInfo* method);
// 0x181ef2200

Il2CppObject*
CustomLogic_CustomLogicGradientModeEnum_Bindings_____CreatePropertyBinding__Fixed_g____getter_3_0(CustomLogic_CustomLogicGradientModeEnum_o* __i, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 1;
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicGradientModeEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicGradientModeEnum___ctor (CustomLogic_CustomLogicGradientModeEnum_o* __this, const MethodInfo* method);
// 0x181fa1050

void CustomLogic_CustomLogicGradientModeEnum___ctor
               (CustomLogic_CustomLogicGradientModeEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a05 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_184345a05 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicGradientModeEnum$$get_Blend
// il2cpp: int32_t CustomLogic_CustomLogicGradientModeEnum__get_Blend (const MethodInfo* method);
// 0x18059b2e0

int32_t
CustomLogic_CustomLogicGradientModeEnum__get_Blend(MethodInfo* method)

{
  return (Unity_Collections_AllocatorManager_TryFunction_o *)0x0;
}


// CustomLogic.CustomLogicGradientModeEnum$$get_Fixed
// il2cpp: int32_t CustomLogic_CustomLogicGradientModeEnum__get_Fixed (const MethodInfo* method);
// 0x180564040

int32_t
CustomLogic_CustomLogicGradientModeEnum__get_Fixed(MethodInfo* method)

{
  return 1;
}


// CustomLogic.CustomLogicGradientModeEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicGradientModeEnum__get_ClassName (CustomLogic_CustomLogicGradientModeEnum_o* __this, const MethodInfo* method);
// 0x181fa10a0

System_String_o *
CustomLogic_CustomLogicGradientModeEnum__get_ClassName
          (CustomLogic_CustomLogicGradientModeEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a06 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"GradientModeEnum");
    Il2CppMethodInitialized_184345a06 = '\x01';
  }
  return "GradientModeEnum";
}


// CustomLogic.CustomLogicGradientModeEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicGradientModeEnum__get_IsAbstract (CustomLogic_CustomLogicGradientModeEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicGradientModeEnum__get_IsAbstract(CustomLogic_CustomLogicGradientModeEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicGradientModeEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicGradientModeEnum__get_IsStatic (CustomLogic_CustomLogicGradientModeEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicGradientModeEnum__get_IsStatic(CustomLogic_CustomLogicGradientModeEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicGradientModeEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicGradientModeEnum__get_InheritBaseMembers (CustomLogic_CustomLogicGradientModeEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicGradientModeEnum__get_InheritBaseMembers(CustomLogic_CustomLogicGradientModeEnum_o* __this, MethodInfo* method)

{
  return true;
}


