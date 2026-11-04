// Type: CustomLogic.CustomLogicScrollElasticityEnum
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicScrollElasticityEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicScrollElasticityEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicScrollElasticityEnum_o* CustomLogic_CustomLogicScrollElasticityEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x181ff09a0

CustomLogic_CustomLogicScrollElasticityEnum_o *
CustomLogic_CustomLogicScrollElasticityEnum_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_184346037 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicScrollElasticityEnum);
    Il2CppMethodInitialized_184346037 = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicScrollElasticityEnum);
      if (Il2CppMethodInitialized_184346035 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_184346035 = '\x01';
      }
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicScrollElasticityEnum_o *)__this;
    }
    NullCheck(args);
    local_res8[0] = (int32_t)args->max_length;
    pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicScrollElasticityEnum constructor found that takes ");
    pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicScrollElasticityEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicScrollElasticityEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicScrollElasticityEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181fcff70

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicScrollElasticityEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicScrollElasticityEnum__o *__this_00;
  System_String_o *pSVar2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  MethodInfo *pMVar3;
  
  if (Il2CppMethodInitialized_184346038 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicScrollElasticityEnum_Bindings)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"Clamped");
    il2cpp_codegen_initialize_runtime_metadata(&"Unrestricted");
    il2cpp_codegen_initialize_runtime_metadata(&"Elastic");
    Il2CppMethodInitialized_184346038 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Clamped",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicScrollElasticityEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicScrollElasticityEnum_Bindings);
    }
    if (Il2CppMethodInitialized_184346039 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicScrollElasticityEnum_Bindings___CreatePropertyBinding__Clamped_g____gette
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicScrollElasticityEnum_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicScrollElasticityEnum);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicScrollElasticityEnum_object)
      ;
      Il2CppMethodInitialized_184346039 = '\x01';
    }
    __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicScrollElasticityEnum_object);
    pMVar3 = 
    MethodInfo_CustomLogic_CustomLogicScrollElasticityEnum_Bindings___CreatePropertyBinding__Clamped_g____gette
    ;
  }
  else {
    bVar1 = System_String__op_Equality(name,"Elastic",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicScrollElasticityEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicScrollElasticityEnum_Bindings);
      }
      if (Il2CppMethodInitialized_18434603a == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicScrollElasticityEnum_Bindings___CreatePropertyBinding__Elastic_g____gette
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicScrollElasticityEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicScrollElasticityEnum);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicScrollElasticityEnum_object);
        Il2CppMethodInitialized_18434603a = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicScrollElasticityEnum_object);
      pMVar3 = 
      MethodInfo_CustomLogic_CustomLogicScrollElasticityEnum_Bindings___CreatePropertyBinding__Elastic_g____gette
      ;
    }
    else {
      bVar1 = System_String__op_Equality(name,"Unrestricted",(MethodInfo *)0x0);
      if (!bVar1) {
        pSVar2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicScrollElasticityEnum not found");
        str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
        pSVar2 = System_String__Concat_1969b70(str0,name,pSVar2,(MethodInfo *)0x0);
        klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
        __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
        System_Exception___ctor_1b6abf0(__this_01,pSVar2,(MethodInfo *)0x0);
        pMVar3 = il2cpp_codegen_get_runtime_metadata
                           (&
                            MethodInfo_CustomLogic_CustomLogicScrollElasticityEnum_Bindings_CreateMemberBinding
                           );
        il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,pMVar3);
      }
      if ((TypeInfo_CustomLogic_CustomLogicScrollElasticityEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicScrollElasticityEnum_Bindings);
      }
      if (Il2CppMethodInitialized_18434603b == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicScrollElasticityEnum_Bindings___CreatePropertyBinding__Unrestricted_g
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicScrollElasticityEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicScrollElasticityEnum);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicScrollElasticityEnum_object);
        Il2CppMethodInitialized_18434603b = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicScrollElasticityEnum_object);
      pMVar3 = 
      MethodInfo_CustomLogic_CustomLogicScrollElasticityEnum_Bindings___CreatePropertyBinding__Unrestricted_g;
    }
  }
  System_Func_object__object____ctor
            (__this,(Il2CppObject *)0x0,(intptr_t)pMVar3,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicScrollElasticityEnum
                        );
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicScrollElasticityEnum_ctor);
  return (CustomLogic_ICLMemberBinding_o *)__this_00;
}


// CustomLogic.CustomLogicScrollElasticityEnum.Bindings$$__CreatePropertyBinding__Clamped
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicScrollElasticityEnum__o* CustomLogic_CustomLogicScrollElasticityEnum_Bindings____CreatePropertyBinding__Clamped (const MethodInfo* method);
// 0x181fe0be0

CustomLogic_CLPropertyBinding_CustomLogicScrollElasticityEnum__o *
CustomLogic_CustomLogicScrollElasticityEnum_Bindings____CreatePropertyBinding__Clamped(MethodInfo *method)

{
  System_Func_CustomLogicScrollElasticityEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicScrollElasticityEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346039 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicScrollElasticityEnum_Bindings___CreatePropertyBinding__Clamped_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicScrollElasticityEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicScrollElasticityEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicScrollElasticityEnum_object);
    Il2CppMethodInitialized_184346039 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicScrollElasticityEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicScrollElasticityEnum_Bindings___CreatePropertyBinding__Clamped_g____gette
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicScrollElasticityEnum
                        );
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicScrollElasticityEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicScrollElasticityEnum.Bindings$$__CreatePropertyBinding__Elastic
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicScrollElasticityEnum__o* CustomLogic_CustomLogicScrollElasticityEnum_Bindings____CreatePropertyBinding__Elastic (const MethodInfo* method);
// 0x181fe15e0

CustomLogic_CLPropertyBinding_CustomLogicScrollElasticityEnum__o *
CustomLogic_CustomLogicScrollElasticityEnum_Bindings____CreatePropertyBinding__Elastic(MethodInfo *method)

{
  System_Func_CustomLogicScrollElasticityEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicScrollElasticityEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_18434603a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicScrollElasticityEnum_Bindings___CreatePropertyBinding__Elastic_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicScrollElasticityEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicScrollElasticityEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicScrollElasticityEnum_object);
    Il2CppMethodInitialized_18434603a = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicScrollElasticityEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicScrollElasticityEnum_Bindings___CreatePropertyBinding__Elastic_g____gette
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicScrollElasticityEnum
                        );
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicScrollElasticityEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicScrollElasticityEnum.Bindings$$__CreatePropertyBinding__Unrestricted
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicScrollElasticityEnum__o* CustomLogic_CustomLogicScrollElasticityEnum_Bindings____CreatePropertyBinding__Unrestricted (const MethodInfo* method);
// 0x181fe8f20

CustomLogic_CLPropertyBinding_CustomLogicScrollElasticityEnum__o *
CustomLogic_CustomLogicScrollElasticityEnum_Bindings____CreatePropertyBinding__Unrestricted
          (MethodInfo *method)

{
  System_Func_CustomLogicScrollElasticityEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicScrollElasticityEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_18434603b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicScrollElasticityEnum_Bindings___CreatePropertyBinding__Unrestricted_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicScrollElasticityEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicScrollElasticityEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicScrollElasticityEnum_object);
    Il2CppMethodInitialized_18434603b = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicScrollElasticityEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicScrollElasticityEnum_Bindings___CreatePropertyBinding__Unrestricted_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicScrollElasticityEnum
                        );
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicScrollElasticityEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicScrollElasticityEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicScrollElasticityEnum_Bindings___cctor (const MethodInfo* method);
// 0x181febc50

void CustomLogic_CustomLogicScrollElasticityEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_18434603c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicScrollElasticityEnum_Bindings)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Clamped");
    il2cpp_codegen_initialize_runtime_metadata(&"Unrestricted");
    il2cpp_codegen_initialize_runtime_metadata(&"Elastic");
    Il2CppMethodInitialized_18434603c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Clamped",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Elastic",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Unrestricted",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicScrollElasticityEnum_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicScrollElasticityEnum_Bindings->static_fields->MemberNames,
               __this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicScrollElasticityEnum.Bindings$$<__CreatePropertyBinding__Clamped>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicScrollElasticityEnum_Bindings_____CreatePropertyBinding__Clamped_g____getter_2_0 (CustomLogic_CustomLogicScrollElasticityEnum_o* __i, const MethodInfo* method);
// 0x181ef2230

Il2CppObject*
CustomLogic_CustomLogicScrollElasticityEnum_Bindings_____CreatePropertyBinding__Clamped_g____getter_2_0(CustomLogic_CustomLogicScrollElasticityEnum_o* __i, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 2;
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicScrollElasticityEnum.Bindings$$<__CreatePropertyBinding__Elastic>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicScrollElasticityEnum_Bindings_____CreatePropertyBinding__Elastic_g____getter_3_0 (CustomLogic_CustomLogicScrollElasticityEnum_o* __i, const MethodInfo* method);
// 0x181ef2200

Il2CppObject*
CustomLogic_CustomLogicScrollElasticityEnum_Bindings_____CreatePropertyBinding__Elastic_g____getter_3_0(CustomLogic_CustomLogicScrollElasticityEnum_o* __i, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 1;
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicScrollElasticityEnum.Bindings$$<__CreatePropertyBinding__Unrestricted>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicScrollElasticityEnum_Bindings_____CreatePropertyBinding__Unrestricted_g____getter_4_0 (CustomLogic_CustomLogicScrollElasticityEnum_o* __i, const MethodInfo* method);
// 0x181ef2260

Il2CppObject*
CustomLogic_CustomLogicScrollElasticityEnum_Bindings_____CreatePropertyBinding__Unrestricted_g____getter_4_0(CustomLogic_CustomLogicScrollElasticityEnum_o* __i, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 0;
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicScrollElasticityEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicScrollElasticityEnum___ctor (CustomLogic_CustomLogicScrollElasticityEnum_o* __this, const MethodInfo* method);
// 0x181fef010

void CustomLogic_CustomLogicScrollElasticityEnum___ctor
               (CustomLogic_CustomLogicScrollElasticityEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346035 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_184346035 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicScrollElasticityEnum$$get_Clamped
// il2cpp: int32_t CustomLogic_CustomLogicScrollElasticityEnum__get_Clamped (const MethodInfo* method);
// 0x180846f80

int32_t
CustomLogic_CustomLogicScrollElasticityEnum__get_Clamped(MethodInfo* method)

{
  return 2;
}


// CustomLogic.CustomLogicScrollElasticityEnum$$get_Elastic
// il2cpp: int32_t CustomLogic_CustomLogicScrollElasticityEnum__get_Elastic (const MethodInfo* method);
// 0x180564040

int32_t
CustomLogic_CustomLogicScrollElasticityEnum__get_Elastic(MethodInfo* method)

{
  return 1;
}


// CustomLogic.CustomLogicScrollElasticityEnum$$get_Unrestricted
// il2cpp: int32_t CustomLogic_CustomLogicScrollElasticityEnum__get_Unrestricted (const MethodInfo* method);
// 0x18059b2e0

int32_t
CustomLogic_CustomLogicScrollElasticityEnum__get_Unrestricted(MethodInfo* method)

{
  return (Unity_Collections_AllocatorManager_TryFunction_o *)0x0;
}


// CustomLogic.CustomLogicScrollElasticityEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicScrollElasticityEnum__get_ClassName (CustomLogic_CustomLogicScrollElasticityEnum_o* __this, const MethodInfo* method);
// 0x181fef060

System_String_o *
CustomLogic_CustomLogicScrollElasticityEnum__get_ClassName
          (CustomLogic_CustomLogicScrollElasticityEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346036 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ScrollElasticityEnum");
    Il2CppMethodInitialized_184346036 = '\x01';
  }
  return "ScrollElasticityEnum";
}


// CustomLogic.CustomLogicScrollElasticityEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicScrollElasticityEnum__get_IsAbstract (CustomLogic_CustomLogicScrollElasticityEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicScrollElasticityEnum__get_IsAbstract(CustomLogic_CustomLogicScrollElasticityEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicScrollElasticityEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicScrollElasticityEnum__get_IsStatic (CustomLogic_CustomLogicScrollElasticityEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicScrollElasticityEnum__get_IsStatic(CustomLogic_CustomLogicScrollElasticityEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicScrollElasticityEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicScrollElasticityEnum__get_InheritBaseMembers (CustomLogic_CustomLogicScrollElasticityEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicScrollElasticityEnum__get_InheritBaseMembers(CustomLogic_CustomLogicScrollElasticityEnum_o* __this, MethodInfo* method)

{
  return true;
}


