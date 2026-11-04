// Type: CustomLogic.CustomLogicFlexDirectionEnum
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicFlexDirectionEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicFlexDirectionEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicFlexDirectionEnum_o* CustomLogic_CustomLogicFlexDirectionEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x181fa3d60

CustomLogic_CustomLogicFlexDirectionEnum_o *
CustomLogic_CustomLogicFlexDirectionEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_1843459e5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicFlexDirectionEnum);
    Il2CppMethodInitialized_1843459e5 = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicFlexDirectionEnum);
      if (Il2CppMethodInitialized_1843459e3 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_1843459e3 = '\x01';
      }
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicFlexDirectionEnum_o *)__this;
    }
    NullCheck(args);
    local_res8[0] = (int32_t)args->max_length;
    pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicFlexDirectionEnum constructor found that takes ");
    pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicFlexDirectionEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicFlexDirectionEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicFlexDirectionEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181f814e0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicFlexDirectionEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum__o *__this_00;
  System_String_o *pSVar2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  MethodInfo *pMVar3;
  
  if (Il2CppMethodInitialized_1843459e6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicFlexDirectionEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"RowReverse");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"ColumnReverse");
    Il2CppMethodInitialized_1843459e6 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Row",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicFlexDirectionEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicFlexDirectionEnum_Bindings);
    }
    if (Il2CppMethodInitialized_1843459e7 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicFlexDirectionEnum_Bindings___CreatePropertyBinding__Row_g____getter_2_0
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicFlexDirectionEnum_object);
      Il2CppMethodInitialized_1843459e7 = '\x01';
    }
    __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicFlexDirectionEnum_object);
    pMVar3 = 
    MethodInfo_CustomLogic_CustomLogicFlexDirectionEnum_Bindings___CreatePropertyBinding__Row_g____getter_2_0;
  }
  else {
    bVar1 = System_String__op_Equality(name,"Column",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicFlexDirectionEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicFlexDirectionEnum_Bindings);
      }
      if (Il2CppMethodInitialized_1843459e8 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicFlexDirectionEnum_Bindings___CreatePropertyBinding__Column_g____getter_3
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicFlexDirectionEnum_object);
        Il2CppMethodInitialized_1843459e8 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicFlexDirectionEnum_object);
      pMVar3 = 
      MethodInfo_CustomLogic_CustomLogicFlexDirectionEnum_Bindings___CreatePropertyBinding__Column_g____getter_3
      ;
    }
    else {
      bVar1 = System_String__op_Equality(name,"RowReverse",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicFlexDirectionEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicFlexDirectionEnum_Bindings);
        }
        if (Il2CppMethodInitialized_1843459e9 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicFlexDirectionEnum_Bindings___CreatePropertyBinding__RowReverse_g____gette
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicFlexDirectionEnum_object);
          Il2CppMethodInitialized_1843459e9 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicFlexDirectionEnum_object);
        pMVar3 = 
        MethodInfo_CustomLogic_CustomLogicFlexDirectionEnum_Bindings___CreatePropertyBinding__RowReverse_g____gette
        ;
      }
      else {
        bVar1 = System_String__op_Equality(name,"ColumnReverse",(MethodInfo *)0x0);
        if (!bVar1) {
          pSVar2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicFlexDirectionEnum not found");
          str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
          pSVar2 = System_String__Concat_1969b70(str0,name,pSVar2,(MethodInfo *)0x0);
          klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
          __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
          System_Exception___ctor_1b6abf0(__this_01,pSVar2,(MethodInfo *)0x0);
          pMVar3 = il2cpp_codegen_get_runtime_metadata
                             (&
                              MethodInfo_CustomLogic_CustomLogicFlexDirectionEnum_Bindings_CreateMemberBinding
                             );
          il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,pMVar3);
        }
        if ((TypeInfo_CustomLogic_CustomLogicFlexDirectionEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicFlexDirectionEnum_Bindings);
        }
        if (Il2CppMethodInitialized_1843459ea == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicFlexDirectionEnum_Bindings___CreatePropertyBinding__ColumnReverse_g____ge
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicFlexDirectionEnum_object);
          Il2CppMethodInitialized_1843459ea = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicFlexDirectionEnum_object);
        pMVar3 = 
        MethodInfo_CustomLogic_CustomLogicFlexDirectionEnum_Bindings___CreatePropertyBinding__ColumnReverse_g____ge
        ;
      }
    }
  }
  System_Func_object__object____ctor
            (__this,(Il2CppObject *)0x0,(intptr_t)pMVar3,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum_ctor)
  ;
  return (CustomLogic_ICLMemberBinding_o *)__this_00;
}


// CustomLogic.CustomLogicFlexDirectionEnum.Bindings$$__CreatePropertyBinding__Row
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum__o* CustomLogic_CustomLogicFlexDirectionEnum_Bindings____CreatePropertyBinding__Row (const MethodInfo* method);
// 0x181f9a7c0

CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum__o *
CustomLogic_CustomLogicFlexDirectionEnum_Bindings____CreatePropertyBinding__Row(MethodInfo *method)

{
  System_Func_CustomLogicFlexDirectionEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843459e7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicFlexDirectionEnum_Bindings___CreatePropertyBinding__Row_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicFlexDirectionEnum_object);
    Il2CppMethodInitialized_1843459e7 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicFlexDirectionEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicFlexDirectionEnum_Bindings___CreatePropertyBinding__Row_g____getter_2_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum_ctor)
  ;
  return __this_00;
}


// CustomLogic.CustomLogicFlexDirectionEnum.Bindings$$__CreatePropertyBinding__Column
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum__o* CustomLogic_CustomLogicFlexDirectionEnum_Bindings____CreatePropertyBinding__Column (const MethodInfo* method);
// 0x181f960d0

CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum__o *
CustomLogic_CustomLogicFlexDirectionEnum_Bindings____CreatePropertyBinding__Column(MethodInfo *method)

{
  System_Func_CustomLogicFlexDirectionEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843459e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicFlexDirectionEnum_Bindings___CreatePropertyBinding__Column_g____getter_3
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicFlexDirectionEnum_object);
    Il2CppMethodInitialized_1843459e8 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicFlexDirectionEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicFlexDirectionEnum_Bindings___CreatePropertyBinding__Column_g____getter_3
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum_ctor)
  ;
  return __this_00;
}


// CustomLogic.CustomLogicFlexDirectionEnum.Bindings$$__CreatePropertyBinding__RowReverse
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum__o* CustomLogic_CustomLogicFlexDirectionEnum_Bindings____CreatePropertyBinding__RowReverse (const MethodInfo* method);
// 0x181f9a720

CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum__o *
CustomLogic_CustomLogicFlexDirectionEnum_Bindings____CreatePropertyBinding__RowReverse(MethodInfo *method)

{
  System_Func_CustomLogicFlexDirectionEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843459e9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicFlexDirectionEnum_Bindings___CreatePropertyBinding__RowReverse_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicFlexDirectionEnum_object);
    Il2CppMethodInitialized_1843459e9 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicFlexDirectionEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicFlexDirectionEnum_Bindings___CreatePropertyBinding__RowReverse_g____gette
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum_ctor)
  ;
  return __this_00;
}


// CustomLogic.CustomLogicFlexDirectionEnum.Bindings$$__CreatePropertyBinding__ColumnReverse
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum__o* CustomLogic_CustomLogicFlexDirectionEnum_Bindings____CreatePropertyBinding__ColumnReverse (const MethodInfo* method);
// 0x181f96030

CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum__o *
CustomLogic_CustomLogicFlexDirectionEnum_Bindings____CreatePropertyBinding__ColumnReverse(MethodInfo *method)

{
  System_Func_CustomLogicFlexDirectionEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843459ea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicFlexDirectionEnum_Bindings___CreatePropertyBinding__ColumnReverse_g____ge
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicFlexDirectionEnum_object);
    Il2CppMethodInitialized_1843459ea = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicFlexDirectionEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicFlexDirectionEnum_Bindings___CreatePropertyBinding__ColumnReverse_g____ge
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum_ctor)
  ;
  return __this_00;
}


// CustomLogic.CustomLogicFlexDirectionEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicFlexDirectionEnum_Bindings___cctor (const MethodInfo* method);
// 0x181f9ee60

void CustomLogic_CustomLogicFlexDirectionEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_1843459eb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicFlexDirectionEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"RowReverse");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"ColumnReverse");
    Il2CppMethodInitialized_1843459eb = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Row",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Column",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RowReverse",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ColumnReverse",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicFlexDirectionEnum_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicFlexDirectionEnum_Bindings->static_fields->MemberNames,__this)
    ;
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicFlexDirectionEnum.Bindings$$<__CreatePropertyBinding__Row>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicFlexDirectionEnum_Bindings_____CreatePropertyBinding__Row_g____getter_2_0 (CustomLogic_CustomLogicFlexDirectionEnum_o* __i, const MethodInfo* method);
// 0x181ef2230

Il2CppObject*
CustomLogic_CustomLogicFlexDirectionEnum_Bindings_____CreatePropertyBinding__Row_g____getter_2_0(CustomLogic_CustomLogicFlexDirectionEnum_o* __i, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 2;
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicFlexDirectionEnum.Bindings$$<__CreatePropertyBinding__Column>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicFlexDirectionEnum_Bindings_____CreatePropertyBinding__Column_g____getter_3_0 (CustomLogic_CustomLogicFlexDirectionEnum_o* __i, const MethodInfo* method);
// 0x181ef2260

Il2CppObject*
CustomLogic_CustomLogicFlexDirectionEnum_Bindings_____CreatePropertyBinding__Column_g____getter_3_0(CustomLogic_CustomLogicFlexDirectionEnum_o* __i, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 0;
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicFlexDirectionEnum.Bindings$$<__CreatePropertyBinding__RowReverse>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicFlexDirectionEnum_Bindings_____CreatePropertyBinding__RowReverse_g____getter_4_0 (CustomLogic_CustomLogicFlexDirectionEnum_o* __i, const MethodInfo* method);
// 0x181f8d5d0

Il2CppObject*
CustomLogic_CustomLogicFlexDirectionEnum_Bindings_____CreatePropertyBinding__RowReverse_g____getter_4_0(CustomLogic_CustomLogicFlexDirectionEnum_o* __i, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 3;
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicFlexDirectionEnum.Bindings$$<__CreatePropertyBinding__ColumnReverse>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicFlexDirectionEnum_Bindings_____CreatePropertyBinding__ColumnReverse_g____getter_5_0 (CustomLogic_CustomLogicFlexDirectionEnum_o* __i, const MethodInfo* method);
// 0x181ef2200

Il2CppObject*
CustomLogic_CustomLogicFlexDirectionEnum_Bindings_____CreatePropertyBinding__ColumnReverse_g____getter_5_0(CustomLogic_CustomLogicFlexDirectionEnum_o* __i, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 1;
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicFlexDirectionEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicFlexDirectionEnum___ctor (CustomLogic_CustomLogicFlexDirectionEnum_o* __this, const MethodInfo* method);
// 0x181fa0e50

void CustomLogic_CustomLogicFlexDirectionEnum___ctor
               (CustomLogic_CustomLogicFlexDirectionEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843459e3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_1843459e3 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicFlexDirectionEnum$$get_Row
// il2cpp: int32_t CustomLogic_CustomLogicFlexDirectionEnum__get_Row (const MethodInfo* method);
// 0x180846f80

int32_t
CustomLogic_CustomLogicFlexDirectionEnum__get_Row(MethodInfo* method)

{
  return 2;
}


// CustomLogic.CustomLogicFlexDirectionEnum$$get_Column
// il2cpp: int32_t CustomLogic_CustomLogicFlexDirectionEnum__get_Column (const MethodInfo* method);
// 0x18059b2e0

int32_t
CustomLogic_CustomLogicFlexDirectionEnum__get_Column(MethodInfo* method)

{
  return (Unity_Collections_AllocatorManager_TryFunction_o *)0x0;
}


// CustomLogic.CustomLogicFlexDirectionEnum$$get_RowReverse
// il2cpp: int32_t CustomLogic_CustomLogicFlexDirectionEnum__get_RowReverse (const MethodInfo* method);
// 0x180565fb0

int32_t
CustomLogic_CustomLogicFlexDirectionEnum__get_RowReverse(MethodInfo* method)

{
  return 3;
}


// CustomLogic.CustomLogicFlexDirectionEnum$$get_ColumnReverse
// il2cpp: int32_t CustomLogic_CustomLogicFlexDirectionEnum__get_ColumnReverse (const MethodInfo* method);
// 0x180564040

int32_t
CustomLogic_CustomLogicFlexDirectionEnum__get_ColumnReverse(MethodInfo* method)

{
  return 1;
}


// CustomLogic.CustomLogicFlexDirectionEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicFlexDirectionEnum__get_ClassName (CustomLogic_CustomLogicFlexDirectionEnum_o* __this, const MethodInfo* method);
// 0x181fa0ea0

System_String_o *
CustomLogic_CustomLogicFlexDirectionEnum__get_ClassName
          (CustomLogic_CustomLogicFlexDirectionEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843459e4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"FlexDirectionEnum");
    Il2CppMethodInitialized_1843459e4 = '\x01';
  }
  return "FlexDirectionEnum";
}


// CustomLogic.CustomLogicFlexDirectionEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicFlexDirectionEnum__get_IsAbstract (CustomLogic_CustomLogicFlexDirectionEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicFlexDirectionEnum__get_IsAbstract(CustomLogic_CustomLogicFlexDirectionEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicFlexDirectionEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicFlexDirectionEnum__get_IsStatic (CustomLogic_CustomLogicFlexDirectionEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicFlexDirectionEnum__get_IsStatic(CustomLogic_CustomLogicFlexDirectionEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicFlexDirectionEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicFlexDirectionEnum__get_InheritBaseMembers (CustomLogic_CustomLogicFlexDirectionEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicFlexDirectionEnum__get_InheritBaseMembers(CustomLogic_CustomLogicFlexDirectionEnum_o* __this, MethodInfo* method)

{
  return true;
}


