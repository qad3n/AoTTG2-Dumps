// Type: CustomLogic.CustomLogicOverflowEnum
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicOverflowEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicOverflowEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicOverflowEnum_o* CustomLogic_CustomLogicOverflowEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x181fefb60

CustomLogic_CustomLogicOverflowEnum_o *
CustomLogic_CustomLogicOverflowEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_184345eea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicOverflowEnum);
    Il2CppMethodInitialized_184345eea = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicOverflowEnum);
      if (Il2CppMethodInitialized_184345ee8 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_184345ee8 = '\x01';
      }
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicOverflowEnum_o *)__this;
    }
    NullCheck(args);
    local_res8[0] = (int32_t)args->max_length;
    pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicOverflowEnum constructor found that takes ");
    pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicOverflowEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicOverflowEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicOverflowEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181fd5cc0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicOverflowEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicOverflowEnum__o *__this_00;
  System_String_o *pSVar2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  MethodInfo *pMVar3;
  
  if (Il2CppMethodInitialized_184345eeb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicOverflowEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Visible");
    il2cpp_codegen_initialize_runtime_metadata(&"Hidden");
    Il2CppMethodInitialized_184345eeb = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Visible",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicOverflowEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicOverflowEnum_Bindings);
    }
    if (Il2CppMethodInitialized_184345eec == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicOverflowEnum_Bindings___CreatePropertyBinding__Visible_g____getter_2_0
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicOverflowEnum_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicOverflowEnum);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicOverflowEnum_object);
      Il2CppMethodInitialized_184345eec = '\x01';
    }
    __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicOverflowEnum_object);
    pMVar3 = 
    MethodInfo_CustomLogic_CustomLogicOverflowEnum_Bindings___CreatePropertyBinding__Visible_g____getter_2_0;
  }
  else {
    bVar1 = System_String__op_Equality(name,"Hidden",(MethodInfo *)0x0);
    if (!bVar1) {
      pSVar2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicOverflowEnum not found");
      str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
      pSVar2 = System_String__Concat_1969b70(str0,name,pSVar2,(MethodInfo *)0x0);
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
      __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
      System_Exception___ctor_1b6abf0(__this_01,pSVar2,(MethodInfo *)0x0);
      pMVar3 = il2cpp_codegen_get_runtime_metadata
                         (&MethodInfo_CustomLogic_CustomLogicOverflowEnum_Bindings_CreateMemberBinding);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,pMVar3);
    }
    if ((TypeInfo_CustomLogic_CustomLogicOverflowEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicOverflowEnum_Bindings);
    }
    if (Il2CppMethodInitialized_184345eed == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicOverflowEnum_Bindings___CreatePropertyBinding__Hidden_g____getter_3_0
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicOverflowEnum_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicOverflowEnum);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicOverflowEnum_object);
      Il2CppMethodInitialized_184345eed = '\x01';
    }
    __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicOverflowEnum_object);
    pMVar3 = 
    MethodInfo_CustomLogic_CustomLogicOverflowEnum_Bindings___CreatePropertyBinding__Hidden_g____getter_3_0;
  }
  System_Func_object__object____ctor
            (__this,(Il2CppObject *)0x0,(intptr_t)pMVar3,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicOverflowEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicOverflowEnum_ctor);
  return (CustomLogic_ICLMemberBinding_o *)__this_00;
}


// CustomLogic.CustomLogicOverflowEnum.Bindings$$__CreatePropertyBinding__Visible
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicOverflowEnum__o* CustomLogic_CustomLogicOverflowEnum_Bindings____CreatePropertyBinding__Visible (const MethodInfo* method);
// 0x181fe91a0

CustomLogic_CLPropertyBinding_CustomLogicOverflowEnum__o *
CustomLogic_CustomLogicOverflowEnum_Bindings____CreatePropertyBinding__Visible(MethodInfo *method)

{
  System_Func_CustomLogicOverflowEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicOverflowEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345eec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicOverflowEnum_Bindings___CreatePropertyBinding__Visible_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicOverflowEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicOverflowEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicOverflowEnum_object);
    Il2CppMethodInitialized_184345eec = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicOverflowEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicOverflowEnum_Bindings___CreatePropertyBinding__Visible_g____getter_2_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicOverflowEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicOverflowEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicOverflowEnum.Bindings$$__CreatePropertyBinding__Hidden
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicOverflowEnum__o* CustomLogic_CustomLogicOverflowEnum_Bindings____CreatePropertyBinding__Hidden (const MethodInfo* method);
// 0x181fe3660

CustomLogic_CLPropertyBinding_CustomLogicOverflowEnum__o *
CustomLogic_CustomLogicOverflowEnum_Bindings____CreatePropertyBinding__Hidden(MethodInfo *method)

{
  System_Func_CustomLogicOverflowEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicOverflowEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345eed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicOverflowEnum_Bindings___CreatePropertyBinding__Hidden_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicOverflowEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicOverflowEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicOverflowEnum_object);
    Il2CppMethodInitialized_184345eed = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicOverflowEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicOverflowEnum_Bindings___CreatePropertyBinding__Hidden_g____getter_3_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicOverflowEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicOverflowEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicOverflowEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicOverflowEnum_Bindings___cctor (const MethodInfo* method);
// 0x181fea3e0

void CustomLogic_CustomLogicOverflowEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_184345eee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicOverflowEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Visible");
    il2cpp_codegen_initialize_runtime_metadata(&"Hidden");
    Il2CppMethodInitialized_184345eee = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Visible",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Hidden",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicOverflowEnum_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicOverflowEnum_Bindings->static_fields->MemberNames,__this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicOverflowEnum.Bindings$$<__CreatePropertyBinding__Visible>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicOverflowEnum_Bindings_____CreatePropertyBinding__Visible_g____getter_2_0 (CustomLogic_CustomLogicOverflowEnum_o* __i, const MethodInfo* method);
// 0x181ef2260

Il2CppObject*
CustomLogic_CustomLogicOverflowEnum_Bindings_____CreatePropertyBinding__Visible_g____getter_2_0(CustomLogic_CustomLogicOverflowEnum_o* __i, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 0;
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicOverflowEnum.Bindings$$<__CreatePropertyBinding__Hidden>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicOverflowEnum_Bindings_____CreatePropertyBinding__Hidden_g____getter_3_0 (CustomLogic_CustomLogicOverflowEnum_o* __i, const MethodInfo* method);
// 0x181ef2200

Il2CppObject*
CustomLogic_CustomLogicOverflowEnum_Bindings_____CreatePropertyBinding__Hidden_g____getter_3_0(CustomLogic_CustomLogicOverflowEnum_o* __i, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 1;
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicOverflowEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicOverflowEnum___ctor (CustomLogic_CustomLogicOverflowEnum_o* __this, const MethodInfo* method);
// 0x181fee9f0

void CustomLogic_CustomLogicOverflowEnum___ctor
               (CustomLogic_CustomLogicOverflowEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345ee8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_184345ee8 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicOverflowEnum$$get_Visible
// il2cpp: int32_t CustomLogic_CustomLogicOverflowEnum__get_Visible (const MethodInfo* method);
// 0x18059b2e0

int32_t
CustomLogic_CustomLogicOverflowEnum__get_Visible(MethodInfo* method)

{
  return (Unity_Collections_AllocatorManager_TryFunction_o *)0x0;
}


// CustomLogic.CustomLogicOverflowEnum$$get_Hidden
// il2cpp: int32_t CustomLogic_CustomLogicOverflowEnum__get_Hidden (const MethodInfo* method);
// 0x180564040

int32_t
CustomLogic_CustomLogicOverflowEnum__get_Hidden(MethodInfo* method)

{
  return 1;
}


// CustomLogic.CustomLogicOverflowEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicOverflowEnum__get_ClassName (CustomLogic_CustomLogicOverflowEnum_o* __this, const MethodInfo* method);
// 0x181feea40

System_String_o *
CustomLogic_CustomLogicOverflowEnum__get_ClassName
          (CustomLogic_CustomLogicOverflowEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345ee9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"OverflowEnum");
    Il2CppMethodInitialized_184345ee9 = '\x01';
  }
  return "OverflowEnum";
}


// CustomLogic.CustomLogicOverflowEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicOverflowEnum__get_IsAbstract (CustomLogic_CustomLogicOverflowEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicOverflowEnum__get_IsAbstract(CustomLogic_CustomLogicOverflowEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicOverflowEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicOverflowEnum__get_IsStatic (CustomLogic_CustomLogicOverflowEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicOverflowEnum__get_IsStatic(CustomLogic_CustomLogicOverflowEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicOverflowEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicOverflowEnum__get_InheritBaseMembers (CustomLogic_CustomLogicOverflowEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicOverflowEnum__get_InheritBaseMembers(CustomLogic_CustomLogicOverflowEnum_o* __this, MethodInfo* method)

{
  return true;
}


