// Type: CustomLogic.CustomLogicAngleUnitEnum
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicAngleUnitEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicAngleUnitEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicAngleUnitEnum_o* CustomLogic_CustomLogicAngleUnitEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x181fa3e90

CustomLogic_CustomLogicAngleUnitEnum_o *
CustomLogic_CustomLogicAngleUnitEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_1843458cf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAngleUnitEnum);
    Il2CppMethodInitialized_1843458cf = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAngleUnitEnum);
      if (Il2CppMethodInitialized_1843458cd == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_1843458cd = '\x01';
      }
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicAngleUnitEnum_o *)__this;
    }
    NullCheck(args);
    local_res8[0] = (int32_t)args->max_length;
    pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicAngleUnitEnum constructor found that takes ");
    pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicAngleUnitEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAngleUnitEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicAngleUnitEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181f85850

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicAngleUnitEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum__o *__this_00;
  System_String_o *pSVar2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  MethodInfo *pMVar3;
  
  if (Il2CppMethodInitialized_1843458d0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAngleUnitEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Radian");
    il2cpp_codegen_initialize_runtime_metadata(&"Turn");
    il2cpp_codegen_initialize_runtime_metadata(&"Degree");
    il2cpp_codegen_initialize_runtime_metadata(&"Gradian");
    Il2CppMethodInitialized_1843458d0 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Degree",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicAngleUnitEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAngleUnitEnum_Bindings)
      ;
    }
    if (Il2CppMethodInitialized_1843458d1 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicAngleUnitEnum_Bindings___CreatePropertyBinding__Degree_g____getter_2_0
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAngleUnitEnum_object);
      Il2CppMethodInitialized_1843458d1 = '\x01';
    }
    __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicAngleUnitEnum_object);
    pMVar3 = 
    MethodInfo_CustomLogic_CustomLogicAngleUnitEnum_Bindings___CreatePropertyBinding__Degree_g____getter_2_0;
  }
  else {
    bVar1 = System_String__op_Equality(name,"Gradian",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicAngleUnitEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAngleUnitEnum_Bindings);
      }
      if (Il2CppMethodInitialized_1843458d2 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicAngleUnitEnum_Bindings___CreatePropertyBinding__Gradian_g____getter_3_0
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAngleUnitEnum_object);
        Il2CppMethodInitialized_1843458d2 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicAngleUnitEnum_object);
      pMVar3 = 
      MethodInfo_CustomLogic_CustomLogicAngleUnitEnum_Bindings___CreatePropertyBinding__Gradian_g____getter_3_0
      ;
    }
    else {
      bVar1 = System_String__op_Equality(name,"Radian",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicAngleUnitEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAngleUnitEnum_Bindings);
        }
        if (Il2CppMethodInitialized_1843458d3 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicAngleUnitEnum_Bindings___CreatePropertyBinding__Radian_g____getter_4_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAngleUnitEnum_object);
          Il2CppMethodInitialized_1843458d3 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAngleUnitEnum_object);
        pMVar3 = 
        MethodInfo_CustomLogic_CustomLogicAngleUnitEnum_Bindings___CreatePropertyBinding__Radian_g____getter_4_0
        ;
      }
      else {
        bVar1 = System_String__op_Equality(name,"Turn",(MethodInfo *)0x0);
        if (!bVar1) {
          pSVar2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicAngleUnitEnum not found");
          str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
          pSVar2 = System_String__Concat_1969b70(str0,name,pSVar2,(MethodInfo *)0x0);
          klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
          __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
          System_Exception___ctor_1b6abf0(__this_01,pSVar2,(MethodInfo *)0x0);
          pMVar3 = il2cpp_codegen_get_runtime_metadata
                             (&MethodInfo_CustomLogic_CustomLogicAngleUnitEnum_Bindings_CreateMemberBinding);
          il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,pMVar3);
        }
        if ((TypeInfo_CustomLogic_CustomLogicAngleUnitEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAngleUnitEnum_Bindings);
        }
        if (Il2CppMethodInitialized_1843458d4 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicAngleUnitEnum_Bindings___CreatePropertyBinding__Turn_g____getter_5_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAngleUnitEnum_object);
          Il2CppMethodInitialized_1843458d4 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAngleUnitEnum_object);
        pMVar3 = 
        MethodInfo_CustomLogic_CustomLogicAngleUnitEnum_Bindings___CreatePropertyBinding__Turn_g____getter_5_0
        ;
      }
    }
  }
  System_Func_object__object____ctor
            (__this,(Il2CppObject *)0x0,(intptr_t)pMVar3,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum_ctor);
  return (CustomLogic_ICLMemberBinding_o *)__this_00;
}


// CustomLogic.CustomLogicAngleUnitEnum.Bindings$$__CreatePropertyBinding__Degree
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum__o* CustomLogic_CustomLogicAngleUnitEnum_Bindings____CreatePropertyBinding__Degree (const MethodInfo* method);
// 0x181f965d0

CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum__o *
CustomLogic_CustomLogicAngleUnitEnum_Bindings____CreatePropertyBinding__Degree(MethodInfo *method)

{
  System_Func_CustomLogicAngleUnitEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843458d1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAngleUnitEnum_Bindings___CreatePropertyBinding__Degree_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAngleUnitEnum_object);
    Il2CppMethodInitialized_1843458d1 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicAngleUnitEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicAngleUnitEnum_Bindings___CreatePropertyBinding__Degree_g____getter_2_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicAngleUnitEnum.Bindings$$__CreatePropertyBinding__Gradian
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum__o* CustomLogic_CustomLogicAngleUnitEnum_Bindings____CreatePropertyBinding__Gradian (const MethodInfo* method);
// 0x181f97610

CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum__o *
CustomLogic_CustomLogicAngleUnitEnum_Bindings____CreatePropertyBinding__Gradian(MethodInfo *method)

{
  System_Func_CustomLogicAngleUnitEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843458d2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAngleUnitEnum_Bindings___CreatePropertyBinding__Gradian_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAngleUnitEnum_object);
    Il2CppMethodInitialized_1843458d2 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicAngleUnitEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicAngleUnitEnum_Bindings___CreatePropertyBinding__Gradian_g____getter_3_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicAngleUnitEnum.Bindings$$__CreatePropertyBinding__Radian
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum__o* CustomLogic_CustomLogicAngleUnitEnum_Bindings____CreatePropertyBinding__Radian (const MethodInfo* method);
// 0x181f99b90

CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum__o *
CustomLogic_CustomLogicAngleUnitEnum_Bindings____CreatePropertyBinding__Radian(MethodInfo *method)

{
  System_Func_CustomLogicAngleUnitEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843458d3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAngleUnitEnum_Bindings___CreatePropertyBinding__Radian_g____getter_4_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAngleUnitEnum_object);
    Il2CppMethodInitialized_1843458d3 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicAngleUnitEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicAngleUnitEnum_Bindings___CreatePropertyBinding__Radian_g____getter_4_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicAngleUnitEnum.Bindings$$__CreatePropertyBinding__Turn
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum__o* CustomLogic_CustomLogicAngleUnitEnum_Bindings____CreatePropertyBinding__Turn (const MethodInfo* method);
// 0x181f9c070

CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum__o *
CustomLogic_CustomLogicAngleUnitEnum_Bindings____CreatePropertyBinding__Turn(MethodInfo *method)

{
  System_Func_CustomLogicAngleUnitEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843458d4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAngleUnitEnum_Bindings___CreatePropertyBinding__Turn_g____getter_5_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAngleUnitEnum_object);
    Il2CppMethodInitialized_1843458d4 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicAngleUnitEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicAngleUnitEnum_Bindings___CreatePropertyBinding__Turn_g____getter_5_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicAngleUnitEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicAngleUnitEnum_Bindings___cctor (const MethodInfo* method);
// 0x181f9d070

void CustomLogic_CustomLogicAngleUnitEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_1843458d5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAngleUnitEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Radian");
    il2cpp_codegen_initialize_runtime_metadata(&"Turn");
    il2cpp_codegen_initialize_runtime_metadata(&"Degree");
    il2cpp_codegen_initialize_runtime_metadata(&"Gradian");
    Il2CppMethodInitialized_1843458d5 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Degree",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Gradian",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Radian",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Turn",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicAngleUnitEnum_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicAngleUnitEnum_Bindings->static_fields->MemberNames,__this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAngleUnitEnum.Bindings$$<__CreatePropertyBinding__Degree>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAngleUnitEnum_Bindings_____CreatePropertyBinding__Degree_g____getter_2_0 (CustomLogic_CustomLogicAngleUnitEnum_o* __i, const MethodInfo* method);
// 0x181ef2260

Il2CppObject*
CustomLogic_CustomLogicAngleUnitEnum_Bindings_____CreatePropertyBinding__Degree_g____getter_2_0(CustomLogic_CustomLogicAngleUnitEnum_o* __i, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 0;
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicAngleUnitEnum.Bindings$$<__CreatePropertyBinding__Gradian>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAngleUnitEnum_Bindings_____CreatePropertyBinding__Gradian_g____getter_3_0 (CustomLogic_CustomLogicAngleUnitEnum_o* __i, const MethodInfo* method);
// 0x181ef2200

Il2CppObject*
CustomLogic_CustomLogicAngleUnitEnum_Bindings_____CreatePropertyBinding__Gradian_g____getter_3_0(CustomLogic_CustomLogicAngleUnitEnum_o* __i, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 1;
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicAngleUnitEnum.Bindings$$<__CreatePropertyBinding__Radian>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAngleUnitEnum_Bindings_____CreatePropertyBinding__Radian_g____getter_4_0 (CustomLogic_CustomLogicAngleUnitEnum_o* __i, const MethodInfo* method);
// 0x181ef2230

Il2CppObject*
CustomLogic_CustomLogicAngleUnitEnum_Bindings_____CreatePropertyBinding__Radian_g____getter_4_0(CustomLogic_CustomLogicAngleUnitEnum_o* __i, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 2;
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicAngleUnitEnum.Bindings$$<__CreatePropertyBinding__Turn>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAngleUnitEnum_Bindings_____CreatePropertyBinding__Turn_g____getter_5_0 (CustomLogic_CustomLogicAngleUnitEnum_o* __i, const MethodInfo* method);
// 0x181f8d5d0

Il2CppObject*
CustomLogic_CustomLogicAngleUnitEnum_Bindings_____CreatePropertyBinding__Turn_g____getter_5_0(CustomLogic_CustomLogicAngleUnitEnum_o* __i, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 3;
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicAngleUnitEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicAngleUnitEnum___ctor (CustomLogic_CustomLogicAngleUnitEnum_o* __this, const MethodInfo* method);
// 0x181f9f650

void CustomLogic_CustomLogicAngleUnitEnum___ctor
               (CustomLogic_CustomLogicAngleUnitEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843458cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_1843458cd = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicAngleUnitEnum$$get_Degree
// il2cpp: int32_t CustomLogic_CustomLogicAngleUnitEnum__get_Degree (const MethodInfo* method);
// 0x18059b2e0

int32_t
CustomLogic_CustomLogicAngleUnitEnum__get_Degree(MethodInfo* method)

{
  return (Unity_Collections_AllocatorManager_TryFunction_o *)0x0;
}


// CustomLogic.CustomLogicAngleUnitEnum$$get_Gradian
// il2cpp: int32_t CustomLogic_CustomLogicAngleUnitEnum__get_Gradian (const MethodInfo* method);
// 0x180564040

int32_t
CustomLogic_CustomLogicAngleUnitEnum__get_Gradian(MethodInfo* method)

{
  return 1;
}


// CustomLogic.CustomLogicAngleUnitEnum$$get_Radian
// il2cpp: int32_t CustomLogic_CustomLogicAngleUnitEnum__get_Radian (const MethodInfo* method);
// 0x180846f80

int32_t
CustomLogic_CustomLogicAngleUnitEnum__get_Radian(MethodInfo* method)

{
  return 2;
}


// CustomLogic.CustomLogicAngleUnitEnum$$get_Turn
// il2cpp: int32_t CustomLogic_CustomLogicAngleUnitEnum__get_Turn (const MethodInfo* method);
// 0x180565fb0

int32_t
CustomLogic_CustomLogicAngleUnitEnum__get_Turn(MethodInfo* method)

{
  return 3;
}


// CustomLogic.CustomLogicAngleUnitEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicAngleUnitEnum__get_ClassName (CustomLogic_CustomLogicAngleUnitEnum_o* __this, const MethodInfo* method);
// 0x181f9f6a0

System_String_o *
CustomLogic_CustomLogicAngleUnitEnum__get_ClassName
          (CustomLogic_CustomLogicAngleUnitEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843458ce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"AngleUnitEnum");
    Il2CppMethodInitialized_1843458ce = '\x01';
  }
  return "AngleUnitEnum";
}


// CustomLogic.CustomLogicAngleUnitEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicAngleUnitEnum__get_IsAbstract (CustomLogic_CustomLogicAngleUnitEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicAngleUnitEnum__get_IsAbstract(CustomLogic_CustomLogicAngleUnitEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicAngleUnitEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicAngleUnitEnum__get_IsStatic (CustomLogic_CustomLogicAngleUnitEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicAngleUnitEnum__get_IsStatic(CustomLogic_CustomLogicAngleUnitEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicAngleUnitEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicAngleUnitEnum__get_InheritBaseMembers (CustomLogic_CustomLogicAngleUnitEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicAngleUnitEnum__get_InheritBaseMembers(CustomLogic_CustomLogicAngleUnitEnum_o* __this, MethodInfo* method)

{
  return true;
}


