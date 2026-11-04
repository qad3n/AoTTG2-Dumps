// Type: CustomLogic.CustomLogicStunStateEnum
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicStunStateEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicStunStateEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicStunStateEnum_o* CustomLogic_CustomLogicStunStateEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x182017a70

CustomLogic_CustomLogicStunStateEnum_o *
CustomLogic_CustomLogicStunStateEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_1843460df == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicStunStateEnum);
    Il2CppMethodInitialized_1843460df = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStunStateEnum);
      if (Il2CppMethodInitialized_1843460dd == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_1843460dd = '\x01';
      }
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicStunStateEnum_o *)__this;
    }
    NullCheck(args);
    local_res8[0] = (int32_t)args->max_length;
    pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicStunStateEnum constructor found that takes ");
    pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicStunStateEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicStunStateEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicStunStateEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181ff19e0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicStunStateEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicStunStateEnum__o *__this_00;
  System_String_o *pSVar2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  MethodInfo *pMVar3;
  
  if (Il2CppMethodInitialized_1843460e0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicStunStateEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"Stunned");
    il2cpp_codegen_initialize_runtime_metadata(&"Recovering");
    Il2CppMethodInitialized_1843460e0 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"None",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicStunStateEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStunStateEnum_Bindings)
      ;
    }
    if (Il2CppMethodInitialized_1843460e1 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicStunStateEnum_Bindings___CreatePropertyBinding__None_g____getter_2_0
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicStunStateEnum_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicStunStateEnum);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicStunStateEnum_object);
      Il2CppMethodInitialized_1843460e1 = '\x01';
    }
    __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicStunStateEnum_object);
    pMVar3 = 
    MethodInfo_CustomLogic_CustomLogicStunStateEnum_Bindings___CreatePropertyBinding__None_g____getter_2_0;
  }
  else {
    bVar1 = System_String__op_Equality(name,"Stunned",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicStunStateEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStunStateEnum_Bindings);
      }
      if (Il2CppMethodInitialized_1843460e2 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicStunStateEnum_Bindings___CreatePropertyBinding__Stunned_g____getter_3_0
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicStunStateEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicStunStateEnum);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicStunStateEnum_object);
        Il2CppMethodInitialized_1843460e2 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicStunStateEnum_object);
      pMVar3 = 
      MethodInfo_CustomLogic_CustomLogicStunStateEnum_Bindings___CreatePropertyBinding__Stunned_g____getter_3_0
      ;
    }
    else {
      bVar1 = System_String__op_Equality(name,"Recovering",(MethodInfo *)0x0);
      if (!bVar1) {
        pSVar2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicStunStateEnum not found");
        str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
        pSVar2 = System_String__Concat_1969b70(str0,name,pSVar2,(MethodInfo *)0x0);
        klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
        __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
        System_Exception___ctor_1b6abf0(__this_01,pSVar2,(MethodInfo *)0x0);
        pMVar3 = il2cpp_codegen_get_runtime_metadata
                           (&MethodInfo_CustomLogic_CustomLogicStunStateEnum_Bindings_CreateMemberBinding);
        il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,pMVar3);
      }
      if ((TypeInfo_CustomLogic_CustomLogicStunStateEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStunStateEnum_Bindings);
      }
      if (Il2CppMethodInitialized_1843460e3 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicStunStateEnum_Bindings___CreatePropertyBinding__Recovering_g____getter_4
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicStunStateEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicStunStateEnum);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicStunStateEnum_object);
        Il2CppMethodInitialized_1843460e3 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicStunStateEnum_object);
      pMVar3 = 
      MethodInfo_CustomLogic_CustomLogicStunStateEnum_Bindings___CreatePropertyBinding__Recovering_g____getter_4
      ;
    }
  }
  System_Func_object__object____ctor
            (__this,(Il2CppObject *)0x0,(intptr_t)pMVar3,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicStunStateEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicStunStateEnum_ctor);
  return (CustomLogic_ICLMemberBinding_o *)__this_00;
}


// CustomLogic.CustomLogicStunStateEnum.Bindings$$__CreatePropertyBinding__None
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicStunStateEnum__o* CustomLogic_CustomLogicStunStateEnum_Bindings____CreatePropertyBinding__None (const MethodInfo* method);
// 0x1820067f0

CustomLogic_CLPropertyBinding_CustomLogicStunStateEnum__o *
CustomLogic_CustomLogicStunStateEnum_Bindings____CreatePropertyBinding__None(MethodInfo *method)

{
  System_Func_CustomLogicStunStateEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicStunStateEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843460e1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicStunStateEnum_Bindings___CreatePropertyBinding__None_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicStunStateEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicStunStateEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicStunStateEnum_object);
    Il2CppMethodInitialized_1843460e1 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicStunStateEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicStunStateEnum_Bindings___CreatePropertyBinding__None_g____getter_2_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicStunStateEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicStunStateEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicStunStateEnum.Bindings$$__CreatePropertyBinding__Stunned
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicStunStateEnum__o* CustomLogic_CustomLogicStunStateEnum_Bindings____CreatePropertyBinding__Stunned (const MethodInfo* method);
// 0x182007c40

CustomLogic_CLPropertyBinding_CustomLogicStunStateEnum__o *
CustomLogic_CustomLogicStunStateEnum_Bindings____CreatePropertyBinding__Stunned(MethodInfo *method)

{
  System_Func_CustomLogicStunStateEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicStunStateEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843460e2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicStunStateEnum_Bindings___CreatePropertyBinding__Stunned_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicStunStateEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicStunStateEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicStunStateEnum_object);
    Il2CppMethodInitialized_1843460e2 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicStunStateEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicStunStateEnum_Bindings___CreatePropertyBinding__Stunned_g____getter_3_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicStunStateEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicStunStateEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicStunStateEnum.Bindings$$__CreatePropertyBinding__Recovering
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicStunStateEnum__o* CustomLogic_CustomLogicStunStateEnum_Bindings____CreatePropertyBinding__Recovering (const MethodInfo* method);
// 0x182006bb0

CustomLogic_CLPropertyBinding_CustomLogicStunStateEnum__o *
CustomLogic_CustomLogicStunStateEnum_Bindings____CreatePropertyBinding__Recovering(MethodInfo *method)

{
  System_Func_CustomLogicStunStateEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicStunStateEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843460e3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicStunStateEnum_Bindings___CreatePropertyBinding__Recovering_g____getter_4
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicStunStateEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicStunStateEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicStunStateEnum_object);
    Il2CppMethodInitialized_1843460e3 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicStunStateEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicStunStateEnum_Bindings___CreatePropertyBinding__Recovering_g____getter_4
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicStunStateEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicStunStateEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicStunStateEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicStunStateEnum_Bindings___cctor (const MethodInfo* method);
// 0x18200a1d0

void CustomLogic_CustomLogicStunStateEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_1843460e4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicStunStateEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"Stunned");
    il2cpp_codegen_initialize_runtime_metadata(&"Recovering");
    Il2CppMethodInitialized_1843460e4 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"None",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Stunned",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Recovering",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicStunStateEnum_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicStunStateEnum_Bindings->static_fields->MemberNames,__this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicStunStateEnum.Bindings$$<__CreatePropertyBinding__None>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStunStateEnum_Bindings_____CreatePropertyBinding__None_g____getter_2_0 (CustomLogic_CustomLogicStunStateEnum_o* __i, const MethodInfo* method);
// 0x181ef2260

Il2CppObject*
CustomLogic_CustomLogicStunStateEnum_Bindings_____CreatePropertyBinding__None_g____getter_2_0(CustomLogic_CustomLogicStunStateEnum_o* __i, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 0;
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicStunStateEnum.Bindings$$<__CreatePropertyBinding__Stunned>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStunStateEnum_Bindings_____CreatePropertyBinding__Stunned_g____getter_3_0 (CustomLogic_CustomLogicStunStateEnum_o* __i, const MethodInfo* method);
// 0x181ef2200

Il2CppObject*
CustomLogic_CustomLogicStunStateEnum_Bindings_____CreatePropertyBinding__Stunned_g____getter_3_0(CustomLogic_CustomLogicStunStateEnum_o* __i, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 1;
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicStunStateEnum.Bindings$$<__CreatePropertyBinding__Recovering>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStunStateEnum_Bindings_____CreatePropertyBinding__Recovering_g____getter_4_0 (CustomLogic_CustomLogicStunStateEnum_o* __i, const MethodInfo* method);
// 0x181ef2230

Il2CppObject*
CustomLogic_CustomLogicStunStateEnum_Bindings_____CreatePropertyBinding__Recovering_g____getter_4_0(CustomLogic_CustomLogicStunStateEnum_o* __i, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 2;
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicStunStateEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicStunStateEnum___ctor (CustomLogic_CustomLogicStunStateEnum_o* __this, const MethodInfo* method);
// 0x1820149b0

void CustomLogic_CustomLogicStunStateEnum___ctor
               (CustomLogic_CustomLogicStunStateEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843460dd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_1843460dd = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicStunStateEnum$$get_None
// il2cpp: int32_t CustomLogic_CustomLogicStunStateEnum__get_None (const MethodInfo* method);
// 0x18059b2e0

int32_t
CustomLogic_CustomLogicStunStateEnum__get_None(MethodInfo* method)

{
  return (Unity_Collections_AllocatorManager_TryFunction_o *)0x0;
}


// CustomLogic.CustomLogicStunStateEnum$$get_Stunned
// il2cpp: int32_t CustomLogic_CustomLogicStunStateEnum__get_Stunned (const MethodInfo* method);
// 0x180564040

int32_t
CustomLogic_CustomLogicStunStateEnum__get_Stunned(MethodInfo* method)

{
  return 1;
}


// CustomLogic.CustomLogicStunStateEnum$$get_Recovering
// il2cpp: int32_t CustomLogic_CustomLogicStunStateEnum__get_Recovering (const MethodInfo* method);
// 0x180846f80

int32_t
CustomLogic_CustomLogicStunStateEnum__get_Recovering(MethodInfo* method)

{
  return 2;
}


// CustomLogic.CustomLogicStunStateEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicStunStateEnum__get_ClassName (CustomLogic_CustomLogicStunStateEnum_o* __this, const MethodInfo* method);
// 0x182014a00

System_String_o *
CustomLogic_CustomLogicStunStateEnum__get_ClassName
          (CustomLogic_CustomLogicStunStateEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843460de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"StunStateEnum");
    Il2CppMethodInitialized_1843460de = '\x01';
  }
  return "StunStateEnum";
}


// CustomLogic.CustomLogicStunStateEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicStunStateEnum__get_IsAbstract (CustomLogic_CustomLogicStunStateEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicStunStateEnum__get_IsAbstract(CustomLogic_CustomLogicStunStateEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicStunStateEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicStunStateEnum__get_IsStatic (CustomLogic_CustomLogicStunStateEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicStunStateEnum__get_IsStatic(CustomLogic_CustomLogicStunStateEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicStunStateEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicStunStateEnum__get_InheritBaseMembers (CustomLogic_CustomLogicStunStateEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicStunStateEnum__get_InheritBaseMembers(CustomLogic_CustomLogicStunStateEnum_o* __this, MethodInfo* method)

{
  return true;
}


