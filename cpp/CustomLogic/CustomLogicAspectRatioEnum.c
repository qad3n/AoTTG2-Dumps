// Type: CustomLogic.CustomLogicAspectRatioEnum
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicAspectRatioEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicAspectRatioEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicAspectRatioEnum_o* CustomLogic_CustomLogicAspectRatioEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x181fa39d0

CustomLogic_CustomLogicAspectRatioEnum_o *
CustomLogic_CustomLogicAspectRatioEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_184345921 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAspectRatioEnum);
    Il2CppMethodInitialized_184345921 = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAspectRatioEnum);
      if (Il2CppMethodInitialized_18434591f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_18434591f = '\x01';
      }
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicAspectRatioEnum_o *)__this;
    }
    NullCheck(args);
    local_res8[0] = (int32_t)args->max_length;
    pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicAspectRatioEnum constructor found that takes ");
    pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicAspectRatioEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAspectRatioEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicAspectRatioEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181f80a50

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicAspectRatioEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicAspectRatioEnum__o *__this_00;
  System_String_o *pSVar2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  MethodInfo *pMVar3;
  
  if (Il2CppMethodInitialized_184345922 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAspectRatioEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Width");
    il2cpp_codegen_initialize_runtime_metadata(&"Height");
    Il2CppMethodInitialized_184345922 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Height",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicAspectRatioEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAspectRatioEnum_Bindings);
    }
    if (Il2CppMethodInitialized_184345923 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicAspectRatioEnum_Bindings___CreatePropertyBinding__Height_g____getter_2_0
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAspectRatioEnum_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAspectRatioEnum);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAspectRatioEnum_object);
      Il2CppMethodInitialized_184345923 = '\x01';
    }
    __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicAspectRatioEnum_object);
    pMVar3 = 
    MethodInfo_CustomLogic_CustomLogicAspectRatioEnum_Bindings___CreatePropertyBinding__Height_g____getter_2_0
    ;
  }
  else {
    bVar1 = System_String__op_Equality(name,"Width",(MethodInfo *)0x0);
    if (!bVar1) {
      pSVar2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicAspectRatioEnum not found");
      str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
      pSVar2 = System_String__Concat_1969b70(str0,name,pSVar2,(MethodInfo *)0x0);
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
      __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
      System_Exception___ctor_1b6abf0(__this_01,pSVar2,(MethodInfo *)0x0);
      pMVar3 = il2cpp_codegen_get_runtime_metadata
                         (&MethodInfo_CustomLogic_CustomLogicAspectRatioEnum_Bindings_CreateMemberBinding);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,pMVar3);
    }
    if ((TypeInfo_CustomLogic_CustomLogicAspectRatioEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAspectRatioEnum_Bindings);
    }
    if (Il2CppMethodInitialized_184345924 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicAspectRatioEnum_Bindings___CreatePropertyBinding__Width_g____getter_3_0
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAspectRatioEnum_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAspectRatioEnum);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAspectRatioEnum_object);
      Il2CppMethodInitialized_184345924 = '\x01';
    }
    __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicAspectRatioEnum_object);
    pMVar3 = 
    MethodInfo_CustomLogic_CustomLogicAspectRatioEnum_Bindings___CreatePropertyBinding__Width_g____getter_3_0;
  }
  System_Func_object__object____ctor
            (__this,(Il2CppObject *)0x0,(intptr_t)pMVar3,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAspectRatioEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAspectRatioEnum_ctor);
  return (CustomLogic_ICLMemberBinding_o *)__this_00;
}


// CustomLogic.CustomLogicAspectRatioEnum.Bindings$$__CreatePropertyBinding__Height
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAspectRatioEnum__o* CustomLogic_CustomLogicAspectRatioEnum_Bindings____CreatePropertyBinding__Height (const MethodInfo* method);
// 0x181f97c00

CustomLogic_CLPropertyBinding_CustomLogicAspectRatioEnum__o *
CustomLogic_CustomLogicAspectRatioEnum_Bindings____CreatePropertyBinding__Height(MethodInfo *method)

{
  System_Func_CustomLogicAspectRatioEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicAspectRatioEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345923 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAspectRatioEnum_Bindings___CreatePropertyBinding__Height_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAspectRatioEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAspectRatioEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAspectRatioEnum_object);
    Il2CppMethodInitialized_184345923 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicAspectRatioEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicAspectRatioEnum_Bindings___CreatePropertyBinding__Height_g____getter_2_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAspectRatioEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAspectRatioEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicAspectRatioEnum.Bindings$$__CreatePropertyBinding__Width
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAspectRatioEnum__o* CustomLogic_CustomLogicAspectRatioEnum_Bindings____CreatePropertyBinding__Width (const MethodInfo* method);
// 0x181f9c980

CustomLogic_CLPropertyBinding_CustomLogicAspectRatioEnum__o *
CustomLogic_CustomLogicAspectRatioEnum_Bindings____CreatePropertyBinding__Width(MethodInfo *method)

{
  System_Func_CustomLogicAspectRatioEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicAspectRatioEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345924 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAspectRatioEnum_Bindings___CreatePropertyBinding__Width_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAspectRatioEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAspectRatioEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAspectRatioEnum_object);
    Il2CppMethodInitialized_184345924 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicAspectRatioEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicAspectRatioEnum_Bindings___CreatePropertyBinding__Width_g____getter_3_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAspectRatioEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAspectRatioEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicAspectRatioEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicAspectRatioEnum_Bindings___cctor (const MethodInfo* method);
// 0x181f9ec70

void CustomLogic_CustomLogicAspectRatioEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_184345925 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAspectRatioEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Width");
    il2cpp_codegen_initialize_runtime_metadata(&"Height");
    Il2CppMethodInitialized_184345925 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Height",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Width",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicAspectRatioEnum_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicAspectRatioEnum_Bindings->static_fields->MemberNames,__this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAspectRatioEnum.Bindings$$<__CreatePropertyBinding__Height>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAspectRatioEnum_Bindings_____CreatePropertyBinding__Height_g____getter_2_0 (CustomLogic_CustomLogicAspectRatioEnum_o* __i, const MethodInfo* method);
// 0x181ef2200

Il2CppObject*
CustomLogic_CustomLogicAspectRatioEnum_Bindings_____CreatePropertyBinding__Height_g____getter_2_0(CustomLogic_CustomLogicAspectRatioEnum_o* __i, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 1;
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicAspectRatioEnum.Bindings$$<__CreatePropertyBinding__Width>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAspectRatioEnum_Bindings_____CreatePropertyBinding__Width_g____getter_3_0 (CustomLogic_CustomLogicAspectRatioEnum_o* __i, const MethodInfo* method);
// 0x181ef2260

Il2CppObject*
CustomLogic_CustomLogicAspectRatioEnum_Bindings_____CreatePropertyBinding__Width_g____getter_3_0(CustomLogic_CustomLogicAspectRatioEnum_o* __i, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 0;
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicAspectRatioEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicAspectRatioEnum___ctor (CustomLogic_CustomLogicAspectRatioEnum_o* __this, const MethodInfo* method);
// 0x181f9f750

void CustomLogic_CustomLogicAspectRatioEnum___ctor
               (CustomLogic_CustomLogicAspectRatioEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434591f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_18434591f = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicAspectRatioEnum$$get_Height
// il2cpp: int32_t CustomLogic_CustomLogicAspectRatioEnum__get_Height (const MethodInfo* method);
// 0x180564040

int32_t
CustomLogic_CustomLogicAspectRatioEnum__get_Height(MethodInfo* method)

{
  return 1;
}


// CustomLogic.CustomLogicAspectRatioEnum$$get_Width
// il2cpp: int32_t CustomLogic_CustomLogicAspectRatioEnum__get_Width (const MethodInfo* method);
// 0x18059b2e0

int32_t
CustomLogic_CustomLogicAspectRatioEnum__get_Width(MethodInfo* method)

{
  return (Unity_Collections_AllocatorManager_TryFunction_o *)0x0;
}


// CustomLogic.CustomLogicAspectRatioEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicAspectRatioEnum__get_ClassName (CustomLogic_CustomLogicAspectRatioEnum_o* __this, const MethodInfo* method);
// 0x181f9f7a0

System_String_o *
CustomLogic_CustomLogicAspectRatioEnum__get_ClassName
          (CustomLogic_CustomLogicAspectRatioEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345920 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"AspectRatioEnum");
    Il2CppMethodInitialized_184345920 = '\x01';
  }
  return "AspectRatioEnum";
}


// CustomLogic.CustomLogicAspectRatioEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicAspectRatioEnum__get_IsAbstract (CustomLogic_CustomLogicAspectRatioEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicAspectRatioEnum__get_IsAbstract(CustomLogic_CustomLogicAspectRatioEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicAspectRatioEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicAspectRatioEnum__get_IsStatic (CustomLogic_CustomLogicAspectRatioEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicAspectRatioEnum__get_IsStatic(CustomLogic_CustomLogicAspectRatioEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicAspectRatioEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicAspectRatioEnum__get_InheritBaseMembers (CustomLogic_CustomLogicAspectRatioEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicAspectRatioEnum__get_InheritBaseMembers(CustomLogic_CustomLogicAspectRatioEnum_o* __this, MethodInfo* method)

{
  return true;
}


