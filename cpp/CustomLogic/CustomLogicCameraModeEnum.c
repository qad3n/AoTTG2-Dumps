// Type: CustomLogic.CustomLogicCameraModeEnum
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicCameraModeEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicCameraModeEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicCameraModeEnum_o* CustomLogic_CustomLogicCameraModeEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x181fa42c0

CustomLogic_CustomLogicCameraModeEnum_o *
CustomLogic_CustomLogicCameraModeEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_CustomLogicCameraModeEnum_o *__this;
  System_String_o *pSVar1;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_18434592d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCameraModeEnum);
    Il2CppMethodInitialized_18434592d = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraModeEnum);
      if (Il2CppMethodInitialized_184345926 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_184345926 = '\x01';
      }
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
      return __this;
    }
    NullCheck(args);
    local_res8[0] = (int32_t)args->max_length;
    pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicCameraModeEnum constructor found that takes ");
    pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicCameraModeEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCameraModeEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicCameraModeEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181f8b0b0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicCameraModeEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum__o *__this_00;
  System_String_o *pSVar2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  MethodInfo *pMVar3;
  
  if (Il2CppMethodInitialized_18434592e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCameraModeEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"TPS");
    il2cpp_codegen_initialize_runtime_metadata(&"WOW");
    il2cpp_codegen_initialize_runtime_metadata(&"FPS");
    il2cpp_codegen_initialize_runtime_metadata(&"Original");
    Il2CppMethodInitialized_18434592e = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"TPS",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicCameraModeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraModeEnum_Bindings);
    }
    if (Il2CppMethodInitialized_18434592f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicCameraModeEnum_Bindings___CreatePropertyBinding__TPS_g____getter_2_0
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCameraModeEnum_object);
      Il2CppMethodInitialized_18434592f = '\x01';
    }
    __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCameraModeEnum_object);
    pMVar3 = 
    MethodInfo_CustomLogic_CustomLogicCameraModeEnum_Bindings___CreatePropertyBinding__TPS_g____getter_2_0;
  }
  else {
    bVar1 = System_String__op_Equality(name,"Original",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicCameraModeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraModeEnum_Bindings);
      }
      if (Il2CppMethodInitialized_184345930 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicCameraModeEnum_Bindings___CreatePropertyBinding__Original_g____getter_3_0
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCameraModeEnum_object);
        Il2CppMethodInitialized_184345930 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCameraModeEnum_object)
      ;
      pMVar3 = 
      MethodInfo_CustomLogic_CustomLogicCameraModeEnum_Bindings___CreatePropertyBinding__Original_g____getter_3_0
      ;
    }
    else {
      bVar1 = System_String__op_Equality(name,"FPS",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicCameraModeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraModeEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345931 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicCameraModeEnum_Bindings___CreatePropertyBinding__FPS_g____getter_4_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCameraModeEnum_object);
          Il2CppMethodInitialized_184345931 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCameraModeEnum_object);
        pMVar3 = 
        MethodInfo_CustomLogic_CustomLogicCameraModeEnum_Bindings___CreatePropertyBinding__FPS_g____getter_4_0
        ;
      }
      else {
        bVar1 = System_String__op_Equality(name,"WOW",(MethodInfo *)0x0);
        if (!bVar1) {
          pSVar2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicCameraModeEnum not found");
          str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
          pSVar2 = System_String__Concat_1969b70(str0,name,pSVar2,(MethodInfo *)0x0);
          klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
          __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
          System_Exception___ctor_1b6abf0(__this_01,pSVar2,(MethodInfo *)0x0);
          pMVar3 = il2cpp_codegen_get_runtime_metadata
                             (&MethodInfo_CustomLogic_CustomLogicCameraModeEnum_Bindings_CreateMemberBinding);
          il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,pMVar3);
        }
        if ((TypeInfo_CustomLogic_CustomLogicCameraModeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraModeEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345932 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicCameraModeEnum_Bindings___CreatePropertyBinding__WOW_g____getter_5_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCameraModeEnum_object);
          Il2CppMethodInitialized_184345932 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCameraModeEnum_object);
        pMVar3 = 
        MethodInfo_CustomLogic_CustomLogicCameraModeEnum_Bindings___CreatePropertyBinding__WOW_g____getter_5_0
        ;
      }
    }
  }
  System_Func_object__object____ctor
            (__this,(Il2CppObject *)0x0,(intptr_t)pMVar3,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum_ctor);
  return (CustomLogic_ICLMemberBinding_o *)__this_00;
}


// CustomLogic.CustomLogicCameraModeEnum.Bindings$$__CreatePropertyBinding__TPS
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum__o* CustomLogic_CustomLogicCameraModeEnum_Bindings____CreatePropertyBinding__TPS (const MethodInfo* method);
// 0x181f9b990

CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum__o *
CustomLogic_CustomLogicCameraModeEnum_Bindings____CreatePropertyBinding__TPS(MethodInfo *method)

{
  System_Func_CustomLogicCameraModeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_18434592f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCameraModeEnum_Bindings___CreatePropertyBinding__TPS_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCameraModeEnum_object);
    Il2CppMethodInitialized_18434592f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCameraModeEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCameraModeEnum_Bindings___CreatePropertyBinding__TPS_g____getter_2_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCameraModeEnum.Bindings$$__CreatePropertyBinding__Original
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum__o* CustomLogic_CustomLogicCameraModeEnum_Bindings____CreatePropertyBinding__Original (const MethodInfo* method);
// 0x181f99550

CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum__o *
CustomLogic_CustomLogicCameraModeEnum_Bindings____CreatePropertyBinding__Original(MethodInfo *method)

{
  System_Func_CustomLogicCameraModeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345930 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCameraModeEnum_Bindings___CreatePropertyBinding__Original_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCameraModeEnum_object);
    Il2CppMethodInitialized_184345930 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCameraModeEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCameraModeEnum_Bindings___CreatePropertyBinding__Original_g____getter_3_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCameraModeEnum.Bindings$$__CreatePropertyBinding__FPS
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum__o* CustomLogic_CustomLogicCameraModeEnum_Bindings____CreatePropertyBinding__FPS (const MethodInfo* method);
// 0x181f96cb0

CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum__o *
CustomLogic_CustomLogicCameraModeEnum_Bindings____CreatePropertyBinding__FPS(MethodInfo *method)

{
  System_Func_CustomLogicCameraModeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345931 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCameraModeEnum_Bindings___CreatePropertyBinding__FPS_g____getter_4_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCameraModeEnum_object);
    Il2CppMethodInitialized_184345931 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCameraModeEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCameraModeEnum_Bindings___CreatePropertyBinding__FPS_g____getter_4_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCameraModeEnum.Bindings$$__CreatePropertyBinding__WOW
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum__o* CustomLogic_CustomLogicCameraModeEnum_Bindings____CreatePropertyBinding__WOW (const MethodInfo* method);
// 0x181f9c2a0

CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum__o *
CustomLogic_CustomLogicCameraModeEnum_Bindings____CreatePropertyBinding__WOW(MethodInfo *method)

{
  System_Func_CustomLogicCameraModeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345932 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCameraModeEnum_Bindings___CreatePropertyBinding__WOW_g____getter_5_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCameraModeEnum_object);
    Il2CppMethodInitialized_184345932 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCameraModeEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCameraModeEnum_Bindings___CreatePropertyBinding__WOW_g____getter_5_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCameraModeEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicCameraModeEnum_Bindings___cctor (const MethodInfo* method);
// 0x181f9da60

void CustomLogic_CustomLogicCameraModeEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_184345933 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCameraModeEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"TPS");
    il2cpp_codegen_initialize_runtime_metadata(&"WOW");
    il2cpp_codegen_initialize_runtime_metadata(&"FPS");
    il2cpp_codegen_initialize_runtime_metadata(&"Original");
    Il2CppMethodInitialized_184345933 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TPS",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Original",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FPS",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"WOW",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicCameraModeEnum_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicCameraModeEnum_Bindings->static_fields->MemberNames,__this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCameraModeEnum.Bindings$$<__CreatePropertyBinding__TPS>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraModeEnum_Bindings_____CreatePropertyBinding__TPS_g____getter_2_0 (CustomLogic_CustomLogicCameraModeEnum_o* __i, const MethodInfo* method);
// 0x181f91220

Il2CppObject *
CustomLogic_CustomLogicCameraModeEnum_Bindings_____CreatePropertyBinding__TPS_g____getter_2_0
          (CustomLogic_CustomLogicCameraModeEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345934 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCameraModeEnum);
    Il2CppMethodInitialized_184345934 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicCameraModeEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraModeEnum);
  }
  if (Il2CppMethodInitialized_184345a0c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCameraModeEnum);
    Il2CppMethodInitialized_184345a0c = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicCameraModeEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraModeEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicCameraModeEnum->static_fields->_tps;
}


// CustomLogic.CustomLogicCameraModeEnum.Bindings$$<__CreatePropertyBinding__Original>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraModeEnum_Bindings_____CreatePropertyBinding__Original_g____getter_3_0 (CustomLogic_CustomLogicCameraModeEnum_o* __i, const MethodInfo* method);
// 0x181f8f940

Il2CppObject *
CustomLogic_CustomLogicCameraModeEnum_Bindings_____CreatePropertyBinding__Original_g____getter_3_0
          (CustomLogic_CustomLogicCameraModeEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345935 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCameraModeEnum);
    Il2CppMethodInitialized_184345935 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicCameraModeEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraModeEnum);
  }
  if (Il2CppMethodInitialized_184345a0d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCameraModeEnum);
    Il2CppMethodInitialized_184345a0d = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicCameraModeEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraModeEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicCameraModeEnum->static_fields->_original;
}


// CustomLogic.CustomLogicCameraModeEnum.Bindings$$<__CreatePropertyBinding__FPS>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraModeEnum_Bindings_____CreatePropertyBinding__FPS_g____getter_4_0 (CustomLogic_CustomLogicCameraModeEnum_o* __i, const MethodInfo* method);
// 0x181f8e0f0

Il2CppObject *
CustomLogic_CustomLogicCameraModeEnum_Bindings_____CreatePropertyBinding__FPS_g____getter_4_0
          (CustomLogic_CustomLogicCameraModeEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345936 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCameraModeEnum);
    Il2CppMethodInitialized_184345936 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicCameraModeEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraModeEnum);
  }
  if (Il2CppMethodInitialized_184345a0e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCameraModeEnum);
    Il2CppMethodInitialized_184345a0e = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicCameraModeEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraModeEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicCameraModeEnum->static_fields->_fps;
}


// CustomLogic.CustomLogicCameraModeEnum.Bindings$$<__CreatePropertyBinding__WOW>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraModeEnum_Bindings_____CreatePropertyBinding__WOW_g____getter_5_0 (CustomLogic_CustomLogicCameraModeEnum_o* __i, const MethodInfo* method);
// 0x181f91760

Il2CppObject *
CustomLogic_CustomLogicCameraModeEnum_Bindings_____CreatePropertyBinding__WOW_g____getter_5_0
          (CustomLogic_CustomLogicCameraModeEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345937 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCameraModeEnum);
    Il2CppMethodInitialized_184345937 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicCameraModeEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraModeEnum);
  }
  if (Il2CppMethodInitialized_184345a0f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCameraModeEnum);
    Il2CppMethodInitialized_184345a0f = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicCameraModeEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraModeEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicCameraModeEnum->static_fields->_wow;
}


// CustomLogic.CustomLogicCameraModeEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicCameraModeEnum___ctor (CustomLogic_CustomLogicCameraModeEnum_o* __this, const MethodInfo* method);
// 0x181f9f960

void CustomLogic_CustomLogicCameraModeEnum___ctor
               (CustomLogic_CustomLogicCameraModeEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345926 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_184345926 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicCameraModeEnum$$get_TPS
// il2cpp: System_String_o* CustomLogic_CustomLogicCameraModeEnum__get_TPS (const MethodInfo* method);
// 0x181f9fa80

System_String_o * CustomLogic_CustomLogicCameraModeEnum__get_TPS(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345927 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCameraModeEnum);
    Il2CppMethodInitialized_184345927 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicCameraModeEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraModeEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicCameraModeEnum->static_fields->_tps;
}


// CustomLogic.CustomLogicCameraModeEnum$$get_Original
// il2cpp: System_String_o* CustomLogic_CustomLogicCameraModeEnum__get_Original (const MethodInfo* method);
// 0x181f9fa30

System_String_o * CustomLogic_CustomLogicCameraModeEnum__get_Original(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345928 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCameraModeEnum);
    Il2CppMethodInitialized_184345928 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicCameraModeEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraModeEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicCameraModeEnum->static_fields->_original;
}


// CustomLogic.CustomLogicCameraModeEnum$$get_FPS
// il2cpp: System_String_o* CustomLogic_CustomLogicCameraModeEnum__get_FPS (const MethodInfo* method);
// 0x181f9f9e0

System_String_o * CustomLogic_CustomLogicCameraModeEnum__get_FPS(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345929 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCameraModeEnum);
    Il2CppMethodInitialized_184345929 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicCameraModeEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraModeEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicCameraModeEnum->static_fields->_fps;
}


// CustomLogic.CustomLogicCameraModeEnum$$get_WOW
// il2cpp: System_String_o* CustomLogic_CustomLogicCameraModeEnum__get_WOW (const MethodInfo* method);
// 0x181f9fad0

System_String_o * CustomLogic_CustomLogicCameraModeEnum__get_WOW(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434592a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCameraModeEnum);
    Il2CppMethodInitialized_18434592a = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicCameraModeEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraModeEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicCameraModeEnum->static_fields->_wow;
}


// CustomLogic.CustomLogicCameraModeEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicCameraModeEnum__get_ClassName (CustomLogic_CustomLogicCameraModeEnum_o* __this, const MethodInfo* method);
// 0x181f9f9b0

System_String_o *
CustomLogic_CustomLogicCameraModeEnum__get_ClassName
          (CustomLogic_CustomLogicCameraModeEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434592b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"CameraModeEnum");
    Il2CppMethodInitialized_18434592b = '\x01';
  }
  return "CameraModeEnum";
}


// CustomLogic.CustomLogicCameraModeEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicCameraModeEnum__get_IsAbstract (CustomLogic_CustomLogicCameraModeEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicCameraModeEnum__get_IsAbstract(CustomLogic_CustomLogicCameraModeEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicCameraModeEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicCameraModeEnum__get_IsStatic (CustomLogic_CustomLogicCameraModeEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicCameraModeEnum__get_IsStatic(CustomLogic_CustomLogicCameraModeEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicCameraModeEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicCameraModeEnum__get_InheritBaseMembers (CustomLogic_CustomLogicCameraModeEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicCameraModeEnum__get_InheritBaseMembers(CustomLogic_CustomLogicCameraModeEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicCameraModeEnum$$.cctor
// il2cpp: void CustomLogic_CustomLogicCameraModeEnum___cctor (const MethodInfo* method);
// 0x181f9f7d0

void CustomLogic_CustomLogicCameraModeEnum___cctor(MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Enum_o local_68;
  undefined4 local_58;
  System_Enum_o local_50;
  undefined4 local_40;
  System_Enum_o local_38;
  undefined4 local_28;
  System_Enum_o local_20;
  undefined4 local_10;
  
  if (Il2CppMethodInitialized_18434592c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_CameraInputMode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCameraModeEnum);
    Il2CppMethodInitialized_18434592c = '\x01';
  }
  local_68.klass = (System_Enum_c *)TypeInfo_Settings_CameraInputMode;
  local_68.monitor = &g_data_ffffffffffffffff;
  local_58 = 0;
  pSVar1 = System_Enum__ToString(&local_68,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicCameraModeEnum->static_fields->_tps = pSVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicCameraModeEnum->static_fields->_tps,pSVar1);
  local_50.klass = (System_Enum_c *)TypeInfo_Settings_CameraInputMode;
  local_50.monitor = &g_data_ffffffffffffffff;
  local_40 = 1;
  pSVar1 = System_Enum__ToString(&local_50,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicCameraModeEnum->static_fields->_original = pSVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicCameraModeEnum->static_fields->_original,pSVar1);
  local_38.klass = (System_Enum_c *)TypeInfo_Settings_CameraInputMode;
  local_38.monitor = &g_data_ffffffffffffffff;
  local_28 = 2;
  pSVar1 = System_Enum__ToString(&local_38,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicCameraModeEnum->static_fields->_fps = pSVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicCameraModeEnum->static_fields->_fps,pSVar1);
  local_20.klass = (System_Enum_c *)TypeInfo_Settings_CameraInputMode;
  local_20.monitor = &g_data_ffffffffffffffff;
  local_10 = 3;
  pSVar1 = System_Enum__ToString(&local_20,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicCameraModeEnum->static_fields->_wow = pSVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicCameraModeEnum->static_fields->_wow,pSVar1);
  return;
}


