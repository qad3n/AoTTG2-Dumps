// Type: CustomLogic.CustomLogicScaleModeEnum
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicScaleModeEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicScaleModeEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicScaleModeEnum_o* CustomLogic_CustomLogicScaleModeEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x181fef900

CustomLogic_CustomLogicScaleModeEnum_o *
CustomLogic_CustomLogicScaleModeEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_18434602f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicScaleModeEnum);
    Il2CppMethodInitialized_18434602f = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicScaleModeEnum);
      if (Il2CppMethodInitialized_18434602d == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_18434602d = '\x01';
      }
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicScaleModeEnum_o *)__this;
    }
    NullCheck(args);
    local_res8[0] = (int32_t)args->max_length;
    pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicScaleModeEnum constructor found that takes ");
    pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicScaleModeEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicScaleModeEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicScaleModeEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181fd8ae0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicScaleModeEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicScaleModeEnum__o *__this_00;
  System_String_o *pSVar2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  MethodInfo *pMVar3;
  
  if (Il2CppMethodInitialized_184346030 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicScaleModeEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"StretchToFill");
    il2cpp_codegen_initialize_runtime_metadata(&"ScaleToFit");
    il2cpp_codegen_initialize_runtime_metadata(&"ScaleAndCrop");
    Il2CppMethodInitialized_184346030 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"StretchToFill",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicScaleModeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicScaleModeEnum_Bindings)
      ;
    }
    if (Il2CppMethodInitialized_184346031 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicScaleModeEnum_Bindings___CreatePropertyBinding__StretchToFill_g____getter
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicScaleModeEnum_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicScaleModeEnum);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicScaleModeEnum_object);
      Il2CppMethodInitialized_184346031 = '\x01';
    }
    __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicScaleModeEnum_object);
    pMVar3 = 
    MethodInfo_CustomLogic_CustomLogicScaleModeEnum_Bindings___CreatePropertyBinding__StretchToFill_g____getter
    ;
  }
  else {
    bVar1 = System_String__op_Equality(name,"ScaleAndCrop",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicScaleModeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicScaleModeEnum_Bindings);
      }
      if (Il2CppMethodInitialized_184346032 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicScaleModeEnum_Bindings___CreatePropertyBinding__ScaleAndCrop_g____getter
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicScaleModeEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicScaleModeEnum);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicScaleModeEnum_object);
        Il2CppMethodInitialized_184346032 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicScaleModeEnum_object);
      pMVar3 = 
      MethodInfo_CustomLogic_CustomLogicScaleModeEnum_Bindings___CreatePropertyBinding__ScaleAndCrop_g____getter
      ;
    }
    else {
      bVar1 = System_String__op_Equality(name,"ScaleToFit",(MethodInfo *)0x0);
      if (!bVar1) {
        pSVar2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicScaleModeEnum not found");
        str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
        pSVar2 = System_String__Concat_1969b70(str0,name,pSVar2,(MethodInfo *)0x0);
        klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
        __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
        System_Exception___ctor_1b6abf0(__this_01,pSVar2,(MethodInfo *)0x0);
        pMVar3 = il2cpp_codegen_get_runtime_metadata
                           (&MethodInfo_CustomLogic_CustomLogicScaleModeEnum_Bindings_CreateMemberBinding);
        il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,pMVar3);
      }
      if ((TypeInfo_CustomLogic_CustomLogicScaleModeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicScaleModeEnum_Bindings);
      }
      if (Il2CppMethodInitialized_184346033 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicScaleModeEnum_Bindings___CreatePropertyBinding__ScaleToFit_g____getter_4
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicScaleModeEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicScaleModeEnum);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicScaleModeEnum_object);
        Il2CppMethodInitialized_184346033 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicScaleModeEnum_object);
      pMVar3 = 
      MethodInfo_CustomLogic_CustomLogicScaleModeEnum_Bindings___CreatePropertyBinding__ScaleToFit_g____getter_4
      ;
    }
  }
  System_Func_object__object____ctor
            (__this,(Il2CppObject *)0x0,(intptr_t)pMVar3,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicScaleModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicScaleModeEnum_ctor);
  return (CustomLogic_ICLMemberBinding_o *)__this_00;
}


// CustomLogic.CustomLogicScaleModeEnum.Bindings$$__CreatePropertyBinding__StretchToFill
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicScaleModeEnum__o* CustomLogic_CustomLogicScaleModeEnum_Bindings____CreatePropertyBinding__StretchToFill (const MethodInfo* method);
// 0x181fe7b20

CustomLogic_CLPropertyBinding_CustomLogicScaleModeEnum__o *
CustomLogic_CustomLogicScaleModeEnum_Bindings____CreatePropertyBinding__StretchToFill(MethodInfo *method)

{
  System_Func_CustomLogicScaleModeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicScaleModeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346031 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicScaleModeEnum_Bindings___CreatePropertyBinding__StretchToFill_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicScaleModeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicScaleModeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicScaleModeEnum_object);
    Il2CppMethodInitialized_184346031 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicScaleModeEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicScaleModeEnum_Bindings___CreatePropertyBinding__StretchToFill_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicScaleModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicScaleModeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicScaleModeEnum.Bindings$$__CreatePropertyBinding__ScaleAndCrop
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicScaleModeEnum__o* CustomLogic_CustomLogicScaleModeEnum_Bindings____CreatePropertyBinding__ScaleAndCrop (const MethodInfo* method);
// 0x181fe6fe0

CustomLogic_CLPropertyBinding_CustomLogicScaleModeEnum__o *
CustomLogic_CustomLogicScaleModeEnum_Bindings____CreatePropertyBinding__ScaleAndCrop(MethodInfo *method)

{
  System_Func_CustomLogicScaleModeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicScaleModeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346032 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicScaleModeEnum_Bindings___CreatePropertyBinding__ScaleAndCrop_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicScaleModeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicScaleModeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicScaleModeEnum_object);
    Il2CppMethodInitialized_184346032 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicScaleModeEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicScaleModeEnum_Bindings___CreatePropertyBinding__ScaleAndCrop_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicScaleModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicScaleModeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicScaleModeEnum.Bindings$$__CreatePropertyBinding__ScaleToFit
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicScaleModeEnum__o* CustomLogic_CustomLogicScaleModeEnum_Bindings____CreatePropertyBinding__ScaleToFit (const MethodInfo* method);
// 0x181fe7080

CustomLogic_CLPropertyBinding_CustomLogicScaleModeEnum__o *
CustomLogic_CustomLogicScaleModeEnum_Bindings____CreatePropertyBinding__ScaleToFit(MethodInfo *method)

{
  System_Func_CustomLogicScaleModeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicScaleModeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346033 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicScaleModeEnum_Bindings___CreatePropertyBinding__ScaleToFit_g____getter_4
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicScaleModeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicScaleModeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicScaleModeEnum_object);
    Il2CppMethodInitialized_184346033 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicScaleModeEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicScaleModeEnum_Bindings___CreatePropertyBinding__ScaleToFit_g____getter_4
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicScaleModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicScaleModeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicScaleModeEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicScaleModeEnum_Bindings___cctor (const MethodInfo* method);
// 0x181fec750

void CustomLogic_CustomLogicScaleModeEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_184346034 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicScaleModeEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"StretchToFill");
    il2cpp_codegen_initialize_runtime_metadata(&"ScaleToFit");
    il2cpp_codegen_initialize_runtime_metadata(&"ScaleAndCrop");
    Il2CppMethodInitialized_184346034 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"StretchToFill",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ScaleAndCrop",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ScaleToFit",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicScaleModeEnum_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicScaleModeEnum_Bindings->static_fields->MemberNames,__this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicScaleModeEnum.Bindings$$<__CreatePropertyBinding__StretchToFill>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicScaleModeEnum_Bindings_____CreatePropertyBinding__StretchToFill_g____getter_2_0 (CustomLogic_CustomLogicScaleModeEnum_o* __i, const MethodInfo* method);
// 0x181ef2260

Il2CppObject*
CustomLogic_CustomLogicScaleModeEnum_Bindings_____CreatePropertyBinding__StretchToFill_g____getter_2_0(CustomLogic_CustomLogicScaleModeEnum_o* __i, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 0;
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicScaleModeEnum.Bindings$$<__CreatePropertyBinding__ScaleAndCrop>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicScaleModeEnum_Bindings_____CreatePropertyBinding__ScaleAndCrop_g____getter_3_0 (CustomLogic_CustomLogicScaleModeEnum_o* __i, const MethodInfo* method);
// 0x181ef2200

Il2CppObject*
CustomLogic_CustomLogicScaleModeEnum_Bindings_____CreatePropertyBinding__ScaleAndCrop_g____getter_3_0(CustomLogic_CustomLogicScaleModeEnum_o* __i, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 1;
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicScaleModeEnum.Bindings$$<__CreatePropertyBinding__ScaleToFit>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicScaleModeEnum_Bindings_____CreatePropertyBinding__ScaleToFit_g____getter_4_0 (CustomLogic_CustomLogicScaleModeEnum_o* __i, const MethodInfo* method);
// 0x181ef2230

Il2CppObject*
CustomLogic_CustomLogicScaleModeEnum_Bindings_____CreatePropertyBinding__ScaleToFit_g____getter_4_0(CustomLogic_CustomLogicScaleModeEnum_o* __i, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 2;
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicScaleModeEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicScaleModeEnum___ctor (CustomLogic_CustomLogicScaleModeEnum_o* __this, const MethodInfo* method);
// 0x181feef90

void CustomLogic_CustomLogicScaleModeEnum___ctor
               (CustomLogic_CustomLogicScaleModeEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434602d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_18434602d = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicScaleModeEnum$$get_StretchToFill
// il2cpp: int32_t CustomLogic_CustomLogicScaleModeEnum__get_StretchToFill (const MethodInfo* method);
// 0x18059b2e0

int32_t
CustomLogic_CustomLogicScaleModeEnum__get_StretchToFill(MethodInfo* method)

{
  return (Unity_Collections_AllocatorManager_TryFunction_o *)0x0;
}


// CustomLogic.CustomLogicScaleModeEnum$$get_ScaleAndCrop
// il2cpp: int32_t CustomLogic_CustomLogicScaleModeEnum__get_ScaleAndCrop (const MethodInfo* method);
// 0x180564040

int32_t
CustomLogic_CustomLogicScaleModeEnum__get_ScaleAndCrop(MethodInfo* method)

{
  return 1;
}


// CustomLogic.CustomLogicScaleModeEnum$$get_ScaleToFit
// il2cpp: int32_t CustomLogic_CustomLogicScaleModeEnum__get_ScaleToFit (const MethodInfo* method);
// 0x180846f80

int32_t
CustomLogic_CustomLogicScaleModeEnum__get_ScaleToFit(MethodInfo* method)

{
  return 2;
}


// CustomLogic.CustomLogicScaleModeEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicScaleModeEnum__get_ClassName (CustomLogic_CustomLogicScaleModeEnum_o* __this, const MethodInfo* method);
// 0x181feefe0

System_String_o *
CustomLogic_CustomLogicScaleModeEnum__get_ClassName
          (CustomLogic_CustomLogicScaleModeEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434602e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ScaleModeEnum");
    Il2CppMethodInitialized_18434602e = '\x01';
  }
  return "ScaleModeEnum";
}


// CustomLogic.CustomLogicScaleModeEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicScaleModeEnum__get_IsAbstract (CustomLogic_CustomLogicScaleModeEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicScaleModeEnum__get_IsAbstract(CustomLogic_CustomLogicScaleModeEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicScaleModeEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicScaleModeEnum__get_IsStatic (CustomLogic_CustomLogicScaleModeEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicScaleModeEnum__get_IsStatic(CustomLogic_CustomLogicScaleModeEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicScaleModeEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicScaleModeEnum__get_InheritBaseMembers (CustomLogic_CustomLogicScaleModeEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicScaleModeEnum__get_InheritBaseMembers(CustomLogic_CustomLogicScaleModeEnum_o* __this, MethodInfo* method)

{
  return true;
}


