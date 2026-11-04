// Type: CustomLogic.CustomLogicFontStyleEnum
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicFontStyleEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicFontStyleEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicFontStyleEnum_o* CustomLogic_CustomLogicFontStyleEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x181fa3b00

CustomLogic_CustomLogicFontStyleEnum_o *
CustomLogic_CustomLogicFontStyleEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_1843459f5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicFontStyleEnum);
    Il2CppMethodInitialized_1843459f5 = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicFontStyleEnum);
      if (Il2CppMethodInitialized_1843459f3 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_1843459f3 = '\x01';
      }
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicFontStyleEnum_o *)__this;
    }
    NullCheck(args);
    local_res8[0] = (int32_t)args->max_length;
    pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicFontStyleEnum constructor found that takes ");
    pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicFontStyleEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicFontStyleEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicFontStyleEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181f85b70

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicFontStyleEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum__o *__this_00;
  System_String_o *pSVar2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  MethodInfo *pMVar3;
  
  if (Il2CppMethodInitialized_1843459f6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicFontStyleEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Italic");
    il2cpp_codegen_initialize_runtime_metadata(&"Normal");
    il2cpp_codegen_initialize_runtime_metadata(&"Bold");
    il2cpp_codegen_initialize_runtime_metadata(&"BoldAndItalic");
    Il2CppMethodInitialized_1843459f6 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Normal",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicFontStyleEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicFontStyleEnum_Bindings)
      ;
    }
    if (Il2CppMethodInitialized_1843459f7 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicFontStyleEnum_Bindings___CreatePropertyBinding__Normal_g____getter_2_0
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicFontStyleEnum_object);
      Il2CppMethodInitialized_1843459f7 = '\x01';
    }
    __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicFontStyleEnum_object);
    pMVar3 = 
    MethodInfo_CustomLogic_CustomLogicFontStyleEnum_Bindings___CreatePropertyBinding__Normal_g____getter_2_0;
  }
  else {
    bVar1 = System_String__op_Equality(name,"Bold",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicFontStyleEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicFontStyleEnum_Bindings);
      }
      if (Il2CppMethodInitialized_1843459f8 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicFontStyleEnum_Bindings___CreatePropertyBinding__Bold_g____getter_3_0
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicFontStyleEnum_object);
        Il2CppMethodInitialized_1843459f8 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicFontStyleEnum_object);
      pMVar3 = 
      MethodInfo_CustomLogic_CustomLogicFontStyleEnum_Bindings___CreatePropertyBinding__Bold_g____getter_3_0;
    }
    else {
      bVar1 = System_String__op_Equality(name,"Italic",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicFontStyleEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicFontStyleEnum_Bindings);
        }
        if (Il2CppMethodInitialized_1843459f9 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicFontStyleEnum_Bindings___CreatePropertyBinding__Italic_g____getter_4_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicFontStyleEnum_object);
          Il2CppMethodInitialized_1843459f9 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicFontStyleEnum_object);
        pMVar3 = 
        MethodInfo_CustomLogic_CustomLogicFontStyleEnum_Bindings___CreatePropertyBinding__Italic_g____getter_4_0
        ;
      }
      else {
        bVar1 = System_String__op_Equality(name,"BoldAndItalic",(MethodInfo *)0x0);
        if (!bVar1) {
          pSVar2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicFontStyleEnum not found");
          str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
          pSVar2 = System_String__Concat_1969b70(str0,name,pSVar2,(MethodInfo *)0x0);
          klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
          __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
          System_Exception___ctor_1b6abf0(__this_01,pSVar2,(MethodInfo *)0x0);
          pMVar3 = il2cpp_codegen_get_runtime_metadata
                             (&MethodInfo_CustomLogic_CustomLogicFontStyleEnum_Bindings_CreateMemberBinding);
          il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,pMVar3);
        }
        if ((TypeInfo_CustomLogic_CustomLogicFontStyleEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicFontStyleEnum_Bindings);
        }
        if (Il2CppMethodInitialized_1843459fa == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicFontStyleEnum_Bindings___CreatePropertyBinding__BoldAndItalic_g____getter
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicFontStyleEnum_object);
          Il2CppMethodInitialized_1843459fa = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicFontStyleEnum_object);
        pMVar3 = 
        MethodInfo_CustomLogic_CustomLogicFontStyleEnum_Bindings___CreatePropertyBinding__BoldAndItalic_g____getter
        ;
      }
    }
  }
  System_Func_object__object____ctor
            (__this,(Il2CppObject *)0x0,(intptr_t)pMVar3,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum_ctor);
  return (CustomLogic_ICLMemberBinding_o *)__this_00;
}


// CustomLogic.CustomLogicFontStyleEnum.Bindings$$__CreatePropertyBinding__Normal
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum__o* CustomLogic_CustomLogicFontStyleEnum_Bindings____CreatePropertyBinding__Normal (const MethodInfo* method);
// 0x181f994b0

CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum__o *
CustomLogic_CustomLogicFontStyleEnum_Bindings____CreatePropertyBinding__Normal(MethodInfo *method)

{
  System_Func_CustomLogicFontStyleEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843459f7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicFontStyleEnum_Bindings___CreatePropertyBinding__Normal_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicFontStyleEnum_object);
    Il2CppMethodInitialized_1843459f7 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicFontStyleEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicFontStyleEnum_Bindings___CreatePropertyBinding__Normal_g____getter_2_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicFontStyleEnum.Bindings$$__CreatePropertyBinding__Bold
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum__o* CustomLogic_CustomLogicFontStyleEnum_Bindings____CreatePropertyBinding__Bold (const MethodInfo* method);
// 0x181f95400

CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum__o *
CustomLogic_CustomLogicFontStyleEnum_Bindings____CreatePropertyBinding__Bold(MethodInfo *method)

{
  System_Func_CustomLogicFontStyleEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843459f8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicFontStyleEnum_Bindings___CreatePropertyBinding__Bold_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicFontStyleEnum_object);
    Il2CppMethodInitialized_1843459f8 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicFontStyleEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicFontStyleEnum_Bindings___CreatePropertyBinding__Bold_g____getter_3_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicFontStyleEnum.Bindings$$__CreatePropertyBinding__Italic
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum__o* CustomLogic_CustomLogicFontStyleEnum_Bindings____CreatePropertyBinding__Italic (const MethodInfo* method);
// 0x181f98330

CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum__o *
CustomLogic_CustomLogicFontStyleEnum_Bindings____CreatePropertyBinding__Italic(MethodInfo *method)

{
  System_Func_CustomLogicFontStyleEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843459f9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicFontStyleEnum_Bindings___CreatePropertyBinding__Italic_g____getter_4_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicFontStyleEnum_object);
    Il2CppMethodInitialized_1843459f9 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicFontStyleEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicFontStyleEnum_Bindings___CreatePropertyBinding__Italic_g____getter_4_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicFontStyleEnum.Bindings$$__CreatePropertyBinding__BoldAndItalic
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum__o* CustomLogic_CustomLogicFontStyleEnum_Bindings____CreatePropertyBinding__BoldAndItalic (const MethodInfo* method);
// 0x181f95360

CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum__o *
CustomLogic_CustomLogicFontStyleEnum_Bindings____CreatePropertyBinding__BoldAndItalic(MethodInfo *method)

{
  System_Func_CustomLogicFontStyleEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843459fa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicFontStyleEnum_Bindings___CreatePropertyBinding__BoldAndItalic_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicFontStyleEnum_object);
    Il2CppMethodInitialized_1843459fa = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicFontStyleEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicFontStyleEnum_Bindings___CreatePropertyBinding__BoldAndItalic_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicFontStyleEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicFontStyleEnum_Bindings___cctor (const MethodInfo* method);
// 0x181f9cf40

void CustomLogic_CustomLogicFontStyleEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_1843459fb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicFontStyleEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Italic");
    il2cpp_codegen_initialize_runtime_metadata(&"Normal");
    il2cpp_codegen_initialize_runtime_metadata(&"Bold");
    il2cpp_codegen_initialize_runtime_metadata(&"BoldAndItalic");
    Il2CppMethodInitialized_1843459fb = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Normal",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Bold",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Italic",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BoldAndItalic",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicFontStyleEnum_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicFontStyleEnum_Bindings->static_fields->MemberNames,__this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicFontStyleEnum.Bindings$$<__CreatePropertyBinding__Normal>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicFontStyleEnum_Bindings_____CreatePropertyBinding__Normal_g____getter_2_0 (CustomLogic_CustomLogicFontStyleEnum_o* __i, const MethodInfo* method);
// 0x181ef2260

Il2CppObject*
CustomLogic_CustomLogicFontStyleEnum_Bindings_____CreatePropertyBinding__Normal_g____getter_2_0(CustomLogic_CustomLogicFontStyleEnum_o* __i, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 0;
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicFontStyleEnum.Bindings$$<__CreatePropertyBinding__Bold>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicFontStyleEnum_Bindings_____CreatePropertyBinding__Bold_g____getter_3_0 (CustomLogic_CustomLogicFontStyleEnum_o* __i, const MethodInfo* method);
// 0x181ef2200

Il2CppObject*
CustomLogic_CustomLogicFontStyleEnum_Bindings_____CreatePropertyBinding__Bold_g____getter_3_0(CustomLogic_CustomLogicFontStyleEnum_o* __i, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 1;
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicFontStyleEnum.Bindings$$<__CreatePropertyBinding__Italic>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicFontStyleEnum_Bindings_____CreatePropertyBinding__Italic_g____getter_4_0 (CustomLogic_CustomLogicFontStyleEnum_o* __i, const MethodInfo* method);
// 0x181ef2230

Il2CppObject*
CustomLogic_CustomLogicFontStyleEnum_Bindings_____CreatePropertyBinding__Italic_g____getter_4_0(CustomLogic_CustomLogicFontStyleEnum_o* __i, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 2;
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicFontStyleEnum.Bindings$$<__CreatePropertyBinding__BoldAndItalic>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicFontStyleEnum_Bindings_____CreatePropertyBinding__BoldAndItalic_g____getter_5_0 (CustomLogic_CustomLogicFontStyleEnum_o* __i, const MethodInfo* method);
// 0x181f8d5d0

Il2CppObject*
CustomLogic_CustomLogicFontStyleEnum_Bindings_____CreatePropertyBinding__BoldAndItalic_g____getter_5_0(CustomLogic_CustomLogicFontStyleEnum_o* __i, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 3;
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicFontStyleEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicFontStyleEnum___ctor (CustomLogic_CustomLogicFontStyleEnum_o* __this, const MethodInfo* method);
// 0x181fa0f50

void CustomLogic_CustomLogicFontStyleEnum___ctor
               (CustomLogic_CustomLogicFontStyleEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843459f3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_1843459f3 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicFontStyleEnum$$get_Normal
// il2cpp: int32_t CustomLogic_CustomLogicFontStyleEnum__get_Normal (const MethodInfo* method);
// 0x18059b2e0

int32_t
CustomLogic_CustomLogicFontStyleEnum__get_Normal(MethodInfo* method)

{
  return (Unity_Collections_AllocatorManager_TryFunction_o *)0x0;
}


// CustomLogic.CustomLogicFontStyleEnum$$get_Bold
// il2cpp: int32_t CustomLogic_CustomLogicFontStyleEnum__get_Bold (const MethodInfo* method);
// 0x180564040

int32_t
CustomLogic_CustomLogicFontStyleEnum__get_Bold(MethodInfo* method)

{
  return 1;
}


// CustomLogic.CustomLogicFontStyleEnum$$get_Italic
// il2cpp: int32_t CustomLogic_CustomLogicFontStyleEnum__get_Italic (const MethodInfo* method);
// 0x180846f80

int32_t
CustomLogic_CustomLogicFontStyleEnum__get_Italic(MethodInfo* method)

{
  return 2;
}


// CustomLogic.CustomLogicFontStyleEnum$$get_BoldAndItalic
// il2cpp: int32_t CustomLogic_CustomLogicFontStyleEnum__get_BoldAndItalic (const MethodInfo* method);
// 0x180565fb0

int32_t
CustomLogic_CustomLogicFontStyleEnum__get_BoldAndItalic(MethodInfo* method)

{
  return 3;
}


// CustomLogic.CustomLogicFontStyleEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicFontStyleEnum__get_ClassName (CustomLogic_CustomLogicFontStyleEnum_o* __this, const MethodInfo* method);
// 0x181fa0fa0

System_String_o *
CustomLogic_CustomLogicFontStyleEnum__get_ClassName
          (CustomLogic_CustomLogicFontStyleEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843459f4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"FontStyleEnum");
    Il2CppMethodInitialized_1843459f4 = '\x01';
  }
  return "FontStyleEnum";
}


// CustomLogic.CustomLogicFontStyleEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicFontStyleEnum__get_IsAbstract (CustomLogic_CustomLogicFontStyleEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicFontStyleEnum__get_IsAbstract(CustomLogic_CustomLogicFontStyleEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicFontStyleEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicFontStyleEnum__get_IsStatic (CustomLogic_CustomLogicFontStyleEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicFontStyleEnum__get_IsStatic(CustomLogic_CustomLogicFontStyleEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicFontStyleEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicFontStyleEnum__get_InheritBaseMembers (CustomLogic_CustomLogicFontStyleEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicFontStyleEnum__get_InheritBaseMembers(CustomLogic_CustomLogicFontStyleEnum_o* __this, MethodInfo* method)

{
  return true;
}


