// Type: CustomLogic.CustomLogicAlignEnum
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicAlignEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicAlignEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicAlignEnum_o* CustomLogic_CustomLogicAlignEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x181fa48b0

CustomLogic_CustomLogicAlignEnum_o *
CustomLogic_CustomLogicAlignEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_1843458c5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAlignEnum);
    Il2CppMethodInitialized_1843458c5 = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAlignEnum);
      if (Il2CppMethodInitialized_1843458c3 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_1843458c3 = '\x01';
      }
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicAlignEnum_o *)__this;
    }
    NullCheck(args);
    local_res8[0] = (int32_t)args->max_length;
    pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicAlignEnum constructor found that takes ");
    pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicAlignEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAlignEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicAlignEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181f82e90

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicAlignEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicAlignEnum__o *__this_00;
  System_String_o *pSVar2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  MethodInfo *pMVar3;
  
  if (Il2CppMethodInitialized_1843458c6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAlignEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"FlexEnd");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Auto");
    il2cpp_codegen_initialize_runtime_metadata(&"FlexStart");
    Il2CppMethodInitialized_1843458c6 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Auto",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicAlignEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAlignEnum_Bindings);
    }
    if (Il2CppMethodInitialized_1843458c7 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicAlignEnum_Bindings___CreatePropertyBinding__Auto_g____getter_2_0
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAlignEnum_ctor);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAlignEnum)
      ;
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAlignEnum_object);
      Il2CppMethodInitialized_1843458c7 = '\x01';
    }
    __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicAlignEnum_object);
    pMVar3 = 
    MethodInfo_CustomLogic_CustomLogicAlignEnum_Bindings___CreatePropertyBinding__Auto_g____getter_2_0;
  }
  else {
    bVar1 = System_String__op_Equality(name,"FlexStart",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicAlignEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAlignEnum_Bindings);
      }
      if (Il2CppMethodInitialized_1843458c8 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicAlignEnum_Bindings___CreatePropertyBinding__FlexStart_g____getter_3_0
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAlignEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAlignEnum);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAlignEnum_object);
        Il2CppMethodInitialized_1843458c8 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicAlignEnum_object);
      pMVar3 = 
      MethodInfo_CustomLogic_CustomLogicAlignEnum_Bindings___CreatePropertyBinding__FlexStart_g____getter_3_0;
    }
    else {
      bVar1 = System_String__op_Equality(name,"Center",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicAlignEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAlignEnum_Bindings)
          ;
        }
        if (Il2CppMethodInitialized_1843458c9 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicAlignEnum_Bindings___CreatePropertyBinding__Center_g____getter_4_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAlignEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAlignEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAlignEnum_object);
          Il2CppMethodInitialized_1843458c9 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicAlignEnum_object);
        pMVar3 = 
        MethodInfo_CustomLogic_CustomLogicAlignEnum_Bindings___CreatePropertyBinding__Center_g____getter_4_0;
      }
      else {
        bVar1 = System_String__op_Equality(name,"FlexEnd",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicAlignEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAlignEnum_Bindings);
          }
          if (Il2CppMethodInitialized_1843458ca == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicAlignEnum_Bindings___CreatePropertyBinding__FlexEnd_g____getter_5_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAlignEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAlignEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAlignEnum_object);
            Il2CppMethodInitialized_1843458ca = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicAlignEnum_object);
          pMVar3 = 
          MethodInfo_CustomLogic_CustomLogicAlignEnum_Bindings___CreatePropertyBinding__FlexEnd_g____getter_5_0
          ;
        }
        else {
          bVar1 = System_String__op_Equality(name,"Stretch",(MethodInfo *)0x0);
          if (!bVar1) {
            pSVar2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicAlignEnum not found");
            str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
            pSVar2 = System_String__Concat_1969b70(str0,name,pSVar2,(MethodInfo *)0x0);
            klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
            __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
            System_Exception___ctor_1b6abf0(__this_01,pSVar2,(MethodInfo *)0x0);
            pMVar3 = il2cpp_codegen_get_runtime_metadata
                               (&MethodInfo_CustomLogic_CustomLogicAlignEnum_Bindings_CreateMemberBinding);
            il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,pMVar3);
          }
          if ((TypeInfo_CustomLogic_CustomLogicAlignEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAlignEnum_Bindings);
          }
          if (Il2CppMethodInitialized_1843458cb == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicAlignEnum_Bindings___CreatePropertyBinding__Stretch_g____getter_6_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAlignEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAlignEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAlignEnum_object);
            Il2CppMethodInitialized_1843458cb = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicAlignEnum_object);
          pMVar3 = 
          MethodInfo_CustomLogic_CustomLogicAlignEnum_Bindings___CreatePropertyBinding__Stretch_g____getter_6_0
          ;
        }
      }
    }
  }
  System_Func_object__object____ctor
            (__this,(Il2CppObject *)0x0,(intptr_t)pMVar3,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAlignEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAlignEnum_ctor);
  return (CustomLogic_ICLMemberBinding_o *)__this_00;
}


// CustomLogic.CustomLogicAlignEnum.Bindings$$__CreatePropertyBinding__Auto
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAlignEnum__o* CustomLogic_CustomLogicAlignEnum_Bindings____CreatePropertyBinding__Auto (const MethodInfo* method);
// 0x181f95040

CustomLogic_CLPropertyBinding_CustomLogicAlignEnum__o *
CustomLogic_CustomLogicAlignEnum_Bindings____CreatePropertyBinding__Auto(MethodInfo *method)

{
  System_Func_CustomLogicAlignEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicAlignEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843458c7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAlignEnum_Bindings___CreatePropertyBinding__Auto_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAlignEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAlignEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAlignEnum_object);
    Il2CppMethodInitialized_1843458c7 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicAlignEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicAlignEnum_Bindings___CreatePropertyBinding__Auto_g____getter_2_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAlignEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAlignEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicAlignEnum.Bindings$$__CreatePropertyBinding__FlexStart
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAlignEnum__o* CustomLogic_CustomLogicAlignEnum_Bindings____CreatePropertyBinding__FlexStart (const MethodInfo* method);
// 0x181f97160

CustomLogic_CLPropertyBinding_CustomLogicAlignEnum__o *
CustomLogic_CustomLogicAlignEnum_Bindings____CreatePropertyBinding__FlexStart(MethodInfo *method)

{
  System_Func_CustomLogicAlignEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicAlignEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843458c8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAlignEnum_Bindings___CreatePropertyBinding__FlexStart_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAlignEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAlignEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAlignEnum_object);
    Il2CppMethodInitialized_1843458c8 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicAlignEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicAlignEnum_Bindings___CreatePropertyBinding__FlexStart_g____getter_3_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAlignEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAlignEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicAlignEnum.Bindings$$__CreatePropertyBinding__Center
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAlignEnum__o* CustomLogic_CustomLogicAlignEnum_Bindings____CreatePropertyBinding__Center (const MethodInfo* method);
// 0x181f95c70

CustomLogic_CLPropertyBinding_CustomLogicAlignEnum__o *
CustomLogic_CustomLogicAlignEnum_Bindings____CreatePropertyBinding__Center(MethodInfo *method)

{
  System_Func_CustomLogicAlignEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicAlignEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843458c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAlignEnum_Bindings___CreatePropertyBinding__Center_g____getter_4_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAlignEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAlignEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAlignEnum_object);
    Il2CppMethodInitialized_1843458c9 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicAlignEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicAlignEnum_Bindings___CreatePropertyBinding__Center_g____getter_4_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAlignEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAlignEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicAlignEnum.Bindings$$__CreatePropertyBinding__FlexEnd
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAlignEnum__o* CustomLogic_CustomLogicAlignEnum_Bindings____CreatePropertyBinding__FlexEnd (const MethodInfo* method);
// 0x181f970c0

CustomLogic_CLPropertyBinding_CustomLogicAlignEnum__o *
CustomLogic_CustomLogicAlignEnum_Bindings____CreatePropertyBinding__FlexEnd(MethodInfo *method)

{
  System_Func_CustomLogicAlignEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicAlignEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843458ca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAlignEnum_Bindings___CreatePropertyBinding__FlexEnd_g____getter_5_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAlignEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAlignEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAlignEnum_object);
    Il2CppMethodInitialized_1843458ca = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicAlignEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicAlignEnum_Bindings___CreatePropertyBinding__FlexEnd_g____getter_5_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAlignEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAlignEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicAlignEnum.Bindings$$__CreatePropertyBinding__Stretch
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAlignEnum__o* CustomLogic_CustomLogicAlignEnum_Bindings____CreatePropertyBinding__Stretch (const MethodInfo* method);
// 0x181f9b530

CustomLogic_CLPropertyBinding_CustomLogicAlignEnum__o *
CustomLogic_CustomLogicAlignEnum_Bindings____CreatePropertyBinding__Stretch(MethodInfo *method)

{
  System_Func_CustomLogicAlignEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicAlignEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843458cb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAlignEnum_Bindings___CreatePropertyBinding__Stretch_g____getter_6_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAlignEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAlignEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAlignEnum_object);
    Il2CppMethodInitialized_1843458cb = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicAlignEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicAlignEnum_Bindings___CreatePropertyBinding__Stretch_g____getter_6_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAlignEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAlignEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicAlignEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicAlignEnum_Bindings___cctor (const MethodInfo* method);
// 0x181f9cce0

void CustomLogic_CustomLogicAlignEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_1843458cc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAlignEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"FlexEnd");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Auto");
    il2cpp_codegen_initialize_runtime_metadata(&"FlexStart");
    Il2CppMethodInitialized_1843458cc = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Auto",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FlexStart",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Center",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FlexEnd",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Stretch",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicAlignEnum_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicAlignEnum_Bindings->static_fields->MemberNames,__this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAlignEnum.Bindings$$<__CreatePropertyBinding__Auto>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAlignEnum_Bindings_____CreatePropertyBinding__Auto_g____getter_2_0 (CustomLogic_CustomLogicAlignEnum_o* __i, const MethodInfo* method);
// 0x181ef2260

Il2CppObject*
CustomLogic_CustomLogicAlignEnum_Bindings_____CreatePropertyBinding__Auto_g____getter_2_0(CustomLogic_CustomLogicAlignEnum_o* __i, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 0;
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicAlignEnum.Bindings$$<__CreatePropertyBinding__FlexStart>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAlignEnum_Bindings_____CreatePropertyBinding__FlexStart_g____getter_3_0 (CustomLogic_CustomLogicAlignEnum_o* __i, const MethodInfo* method);
// 0x181ef2200

Il2CppObject*
CustomLogic_CustomLogicAlignEnum_Bindings_____CreatePropertyBinding__FlexStart_g____getter_3_0(CustomLogic_CustomLogicAlignEnum_o* __i, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 1;
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicAlignEnum.Bindings$$<__CreatePropertyBinding__Center>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAlignEnum_Bindings_____CreatePropertyBinding__Center_g____getter_4_0 (CustomLogic_CustomLogicAlignEnum_o* __i, const MethodInfo* method);
// 0x181ef2230

Il2CppObject*
CustomLogic_CustomLogicAlignEnum_Bindings_____CreatePropertyBinding__Center_g____getter_4_0(CustomLogic_CustomLogicAlignEnum_o* __i, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 2;
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicAlignEnum.Bindings$$<__CreatePropertyBinding__FlexEnd>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAlignEnum_Bindings_____CreatePropertyBinding__FlexEnd_g____getter_5_0 (CustomLogic_CustomLogicAlignEnum_o* __i, const MethodInfo* method);
// 0x181f8d5d0

Il2CppObject*
CustomLogic_CustomLogicAlignEnum_Bindings_____CreatePropertyBinding__FlexEnd_g____getter_5_0(CustomLogic_CustomLogicAlignEnum_o* __i, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 3;
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicAlignEnum.Bindings$$<__CreatePropertyBinding__Stretch>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAlignEnum_Bindings_____CreatePropertyBinding__Stretch_g____getter_6_0 (CustomLogic_CustomLogicAlignEnum_o* __i, const MethodInfo* method);
// 0x181f90f40

Il2CppObject*
CustomLogic_CustomLogicAlignEnum_Bindings_____CreatePropertyBinding__Stretch_g____getter_6_0(CustomLogic_CustomLogicAlignEnum_o* __i, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 4;
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicAlignEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicAlignEnum___ctor (CustomLogic_CustomLogicAlignEnum_o* __this, const MethodInfo* method);
// 0x181f9f5d0

void CustomLogic_CustomLogicAlignEnum___ctor(CustomLogic_CustomLogicAlignEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843458c3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_1843458c3 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicAlignEnum$$get_Auto
// il2cpp: int32_t CustomLogic_CustomLogicAlignEnum__get_Auto (const MethodInfo* method);
// 0x18059b2e0

int32_t
CustomLogic_CustomLogicAlignEnum__get_Auto(MethodInfo* method)

{
  return (Unity_Collections_AllocatorManager_TryFunction_o *)0x0;
}


// CustomLogic.CustomLogicAlignEnum$$get_FlexStart
// il2cpp: int32_t CustomLogic_CustomLogicAlignEnum__get_FlexStart (const MethodInfo* method);
// 0x180564040

int32_t
CustomLogic_CustomLogicAlignEnum__get_FlexStart(MethodInfo* method)

{
  return 1;
}


// CustomLogic.CustomLogicAlignEnum$$get_Center
// il2cpp: int32_t CustomLogic_CustomLogicAlignEnum__get_Center (const MethodInfo* method);
// 0x180846f80

int32_t
CustomLogic_CustomLogicAlignEnum__get_Center(MethodInfo* method)

{
  return 2;
}


// CustomLogic.CustomLogicAlignEnum$$get_FlexEnd
// il2cpp: int32_t CustomLogic_CustomLogicAlignEnum__get_FlexEnd (const MethodInfo* method);
// 0x180565fb0

int32_t
CustomLogic_CustomLogicAlignEnum__get_FlexEnd(MethodInfo* method)

{
  return 3;
}


// CustomLogic.CustomLogicAlignEnum$$get_Stretch
// il2cpp: int32_t CustomLogic_CustomLogicAlignEnum__get_Stretch (const MethodInfo* method);
// 0x180846f40

int32_t
CustomLogic_CustomLogicAlignEnum__get_Stretch(MethodInfo* method)

{
  return 4;
}


// CustomLogic.CustomLogicAlignEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicAlignEnum__get_ClassName (CustomLogic_CustomLogicAlignEnum_o* __this, const MethodInfo* method);
// 0x181f9f620

System_String_o *
CustomLogic_CustomLogicAlignEnum__get_ClassName(CustomLogic_CustomLogicAlignEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843458c4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"AlignEnum");
    Il2CppMethodInitialized_1843458c4 = '\x01';
  }
  return "AlignEnum";
}


// CustomLogic.CustomLogicAlignEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicAlignEnum__get_IsAbstract (CustomLogic_CustomLogicAlignEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicAlignEnum__get_IsAbstract(CustomLogic_CustomLogicAlignEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicAlignEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicAlignEnum__get_IsStatic (CustomLogic_CustomLogicAlignEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicAlignEnum__get_IsStatic(CustomLogic_CustomLogicAlignEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicAlignEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicAlignEnum__get_InheritBaseMembers (CustomLogic_CustomLogicAlignEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicAlignEnum__get_InheritBaseMembers(CustomLogic_CustomLogicAlignEnum_o* __this, MethodInfo* method)

{
  return true;
}


