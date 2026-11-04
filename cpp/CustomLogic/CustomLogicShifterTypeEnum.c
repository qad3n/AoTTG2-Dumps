// Type: CustomLogic.CustomLogicShifterTypeEnum
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicShifterTypeEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicShifterTypeEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicShifterTypeEnum_o* CustomLogic_CustomLogicShifterTypeEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x181ff0ad0

CustomLogic_CustomLogicShifterTypeEnum_o *
CustomLogic_CustomLogicShifterTypeEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_18434605d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicShifterTypeEnum);
    Il2CppMethodInitialized_18434605d = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterTypeEnum);
      if (Il2CppMethodInitialized_184346057 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_184346057 = '\x01';
      }
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicShifterTypeEnum_o *)__this;
    }
    NullCheck(args);
    local_res8[0] = (int32_t)args->max_length;
    pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicShifterTypeEnum constructor found that takes ");
    pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicShifterTypeEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterTypeEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicShifterTypeEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181fd60c0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicShifterTypeEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum__o *__this_00;
  System_String_o *pSVar2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  MethodInfo *pMVar3;
  
  if (Il2CppMethodInitialized_18434605e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicShifterTypeEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Eren");
    il2cpp_codegen_initialize_runtime_metadata(&"Annie");
    il2cpp_codegen_initialize_runtime_metadata(&"WallColossal");
    il2cpp_codegen_initialize_runtime_metadata(&"Armored");
    Il2CppMethodInitialized_18434605e = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Annie",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicShifterTypeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterTypeEnum_Bindings);
    }
    if (Il2CppMethodInitialized_18434605f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicShifterTypeEnum_Bindings___CreatePropertyBinding__Annie_g____getter_2_0
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicShifterTypeEnum_object);
      Il2CppMethodInitialized_18434605f = '\x01';
    }
    __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterTypeEnum_object);
    pMVar3 = 
    MethodInfo_CustomLogic_CustomLogicShifterTypeEnum_Bindings___CreatePropertyBinding__Annie_g____getter_2_0;
  }
  else {
    bVar1 = System_String__op_Equality(name,"Armored",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicShifterTypeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterTypeEnum_Bindings);
      }
      if (Il2CppMethodInitialized_184346060 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicShifterTypeEnum_Bindings___CreatePropertyBinding__Armored_g____getter_3_0
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicShifterTypeEnum_object);
        Il2CppMethodInitialized_184346060 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterTypeEnum_object);
      pMVar3 = 
      MethodInfo_CustomLogic_CustomLogicShifterTypeEnum_Bindings___CreatePropertyBinding__Armored_g____getter_3_0
      ;
    }
    else {
      bVar1 = System_String__op_Equality(name,"Eren",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicShifterTypeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterTypeEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184346061 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicShifterTypeEnum_Bindings___CreatePropertyBinding__Eren_g____getter_4_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicShifterTypeEnum_object);
          Il2CppMethodInitialized_184346061 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterTypeEnum_object);
        pMVar3 = 
        MethodInfo_CustomLogic_CustomLogicShifterTypeEnum_Bindings___CreatePropertyBinding__Eren_g____getter_4_0
        ;
      }
      else {
        bVar1 = System_String__op_Equality(name,"WallColossal",(MethodInfo *)0x0);
        if (!bVar1) {
          pSVar2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicShifterTypeEnum not found");
          str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
          pSVar2 = System_String__Concat_1969b70(str0,name,pSVar2,(MethodInfo *)0x0);
          klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
          __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
          System_Exception___ctor_1b6abf0(__this_01,pSVar2,(MethodInfo *)0x0);
          pMVar3 = il2cpp_codegen_get_runtime_metadata
                             (&MethodInfo_CustomLogic_CustomLogicShifterTypeEnum_Bindings_CreateMemberBinding)
          ;
          il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,pMVar3);
        }
        if ((TypeInfo_CustomLogic_CustomLogicShifterTypeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterTypeEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184346062 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicShifterTypeEnum_Bindings___CreatePropertyBinding__WallColossal_g____gette
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicShifterTypeEnum_object);
          Il2CppMethodInitialized_184346062 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterTypeEnum_object);
        pMVar3 = 
        MethodInfo_CustomLogic_CustomLogicShifterTypeEnum_Bindings___CreatePropertyBinding__WallColossal_g____gette
        ;
      }
    }
  }
  System_Func_object__object____ctor
            (__this,(Il2CppObject *)0x0,(intptr_t)pMVar3,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum_ctor);
  return (CustomLogic_ICLMemberBinding_o *)__this_00;
}


// CustomLogic.CustomLogicShifterTypeEnum.Bindings$$__CreatePropertyBinding__Annie
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum__o* CustomLogic_CustomLogicShifterTypeEnum_Bindings____CreatePropertyBinding__Annie (const MethodInfo* method);
// 0x181fdf240

CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum__o *
CustomLogic_CustomLogicShifterTypeEnum_Bindings____CreatePropertyBinding__Annie(MethodInfo *method)

{
  System_Func_CustomLogicShifterTypeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_18434605f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicShifterTypeEnum_Bindings___CreatePropertyBinding__Annie_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicShifterTypeEnum_object);
    Il2CppMethodInitialized_18434605f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterTypeEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterTypeEnum_Bindings___CreatePropertyBinding__Annie_g____getter_2_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicShifterTypeEnum.Bindings$$__CreatePropertyBinding__Armored
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum__o* CustomLogic_CustomLogicShifterTypeEnum_Bindings____CreatePropertyBinding__Armored (const MethodInfo* method);
// 0x181fdf560

CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum__o *
CustomLogic_CustomLogicShifterTypeEnum_Bindings____CreatePropertyBinding__Armored(MethodInfo *method)

{
  System_Func_CustomLogicShifterTypeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346060 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicShifterTypeEnum_Bindings___CreatePropertyBinding__Armored_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicShifterTypeEnum_object);
    Il2CppMethodInitialized_184346060 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterTypeEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterTypeEnum_Bindings___CreatePropertyBinding__Armored_g____getter_3_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicShifterTypeEnum.Bindings$$__CreatePropertyBinding__Eren
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum__o* CustomLogic_CustomLogicShifterTypeEnum_Bindings____CreatePropertyBinding__Eren (const MethodInfo* method);
// 0x181fe2260

CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum__o *
CustomLogic_CustomLogicShifterTypeEnum_Bindings____CreatePropertyBinding__Eren(MethodInfo *method)

{
  System_Func_CustomLogicShifterTypeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346061 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicShifterTypeEnum_Bindings___CreatePropertyBinding__Eren_g____getter_4_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicShifterTypeEnum_object);
    Il2CppMethodInitialized_184346061 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterTypeEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterTypeEnum_Bindings___CreatePropertyBinding__Eren_g____getter_4_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicShifterTypeEnum.Bindings$$__CreatePropertyBinding__WallColossal
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum__o* CustomLogic_CustomLogicShifterTypeEnum_Bindings____CreatePropertyBinding__WallColossal (const MethodInfo* method);
// 0x181fe92e0

CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum__o *
CustomLogic_CustomLogicShifterTypeEnum_Bindings____CreatePropertyBinding__WallColossal(MethodInfo *method)

{
  System_Func_CustomLogicShifterTypeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346062 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicShifterTypeEnum_Bindings___CreatePropertyBinding__WallColossal_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicShifterTypeEnum_object);
    Il2CppMethodInitialized_184346062 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterTypeEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterTypeEnum_Bindings___CreatePropertyBinding__WallColossal_g____gette
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicShifterTypeEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicShifterTypeEnum_Bindings___cctor (const MethodInfo* method);
// 0x181febb20

void CustomLogic_CustomLogicShifterTypeEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_184346063 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicShifterTypeEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Eren");
    il2cpp_codegen_initialize_runtime_metadata(&"Annie");
    il2cpp_codegen_initialize_runtime_metadata(&"WallColossal");
    il2cpp_codegen_initialize_runtime_metadata(&"Armored");
    Il2CppMethodInitialized_184346063 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Annie",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Armored",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Eren",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"WallColossal",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicShifterTypeEnum_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicShifterTypeEnum_Bindings->static_fields->MemberNames,__this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterTypeEnum.Bindings$$<__CreatePropertyBinding__Annie>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterTypeEnum_Bindings_____CreatePropertyBinding__Annie_g____getter_2_0 (CustomLogic_CustomLogicShifterTypeEnum_o* __i, const MethodInfo* method);
// 0x181fdae90

Il2CppObject*
CustomLogic_CustomLogicShifterTypeEnum_Bindings_____CreatePropertyBinding__Annie_g____getter_2_0(CustomLogic_CustomLogicShifterTypeEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184346058 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Annie");
    Il2CppMethodInitialized_184346058 = '\x01';
  }
  return "Annie";
}


// CustomLogic.CustomLogicShifterTypeEnum.Bindings$$<__CreatePropertyBinding__Armored>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterTypeEnum_Bindings_____CreatePropertyBinding__Armored_g____getter_3_0 (CustomLogic_CustomLogicShifterTypeEnum_o* __i, const MethodInfo* method);
// 0x181fdaf50

Il2CppObject*
CustomLogic_CustomLogicShifterTypeEnum_Bindings_____CreatePropertyBinding__Armored_g____getter_3_0(CustomLogic_CustomLogicShifterTypeEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184346059 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armored");
    Il2CppMethodInitialized_184346059 = '\x01';
  }
  return "Armored";
}


// CustomLogic.CustomLogicShifterTypeEnum.Bindings$$<__CreatePropertyBinding__Eren>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterTypeEnum_Bindings_____CreatePropertyBinding__Eren_g____getter_4_0 (CustomLogic_CustomLogicShifterTypeEnum_o* __i, const MethodInfo* method);
// 0x181fdc630

Il2CppObject*
CustomLogic_CustomLogicShifterTypeEnum_Bindings_____CreatePropertyBinding__Eren_g____getter_4_0(CustomLogic_CustomLogicShifterTypeEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_18434605a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Eren");
    Il2CppMethodInitialized_18434605a = '\x01';
  }
  return "Eren";
}


// CustomLogic.CustomLogicShifterTypeEnum.Bindings$$<__CreatePropertyBinding__WallColossal>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterTypeEnum_Bindings_____CreatePropertyBinding__WallColossal_g____getter_5_0 (CustomLogic_CustomLogicShifterTypeEnum_o* __i, const MethodInfo* method);
// 0x181fdea50

Il2CppObject*
CustomLogic_CustomLogicShifterTypeEnum_Bindings_____CreatePropertyBinding__WallColossal_g____getter_5_0(CustomLogic_CustomLogicShifterTypeEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_18434605b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"WallColossal");
    Il2CppMethodInitialized_18434605b = '\x01';
  }
  return "WallColossal";
}


// CustomLogic.CustomLogicShifterTypeEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicShifterTypeEnum___ctor (CustomLogic_CustomLogicShifterTypeEnum_o* __this, const MethodInfo* method);
// 0x181fef370

void CustomLogic_CustomLogicShifterTypeEnum___ctor
               (CustomLogic_CustomLogicShifterTypeEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346057 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_184346057 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicShifterTypeEnum$$get_Annie
// il2cpp: System_String_o* CustomLogic_CustomLogicShifterTypeEnum__get_Annie (const MethodInfo* method);
// 0x181fdae90

System_String_o * CustomLogic_CustomLogicShifterTypeEnum__get_Annie(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346058 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Annie");
    Il2CppMethodInitialized_184346058 = '\x01';
  }
  return "Annie";
}


// CustomLogic.CustomLogicShifterTypeEnum$$get_Armored
// il2cpp: System_String_o* CustomLogic_CustomLogicShifterTypeEnum__get_Armored (const MethodInfo* method);
// 0x181fdaf50

System_String_o * CustomLogic_CustomLogicShifterTypeEnum__get_Armored(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346059 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armored");
    Il2CppMethodInitialized_184346059 = '\x01';
  }
  return "Armored";
}


// CustomLogic.CustomLogicShifterTypeEnum$$get_Eren
// il2cpp: System_String_o* CustomLogic_CustomLogicShifterTypeEnum__get_Eren (const MethodInfo* method);
// 0x181fdc630

System_String_o * CustomLogic_CustomLogicShifterTypeEnum__get_Eren(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434605a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Eren");
    Il2CppMethodInitialized_18434605a = '\x01';
  }
  return "Eren";
}


// CustomLogic.CustomLogicShifterTypeEnum$$get_WallColossal
// il2cpp: System_String_o* CustomLogic_CustomLogicShifterTypeEnum__get_WallColossal (const MethodInfo* method);
// 0x181fdea50

System_String_o * CustomLogic_CustomLogicShifterTypeEnum__get_WallColossal(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434605b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"WallColossal");
    Il2CppMethodInitialized_18434605b = '\x01';
  }
  return "WallColossal";
}


// CustomLogic.CustomLogicShifterTypeEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicShifterTypeEnum__get_ClassName (CustomLogic_CustomLogicShifterTypeEnum_o* __this, const MethodInfo* method);
// 0x181fef3c0

System_String_o *
CustomLogic_CustomLogicShifterTypeEnum__get_ClassName
          (CustomLogic_CustomLogicShifterTypeEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434605c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ShifterTypeEnum");
    Il2CppMethodInitialized_18434605c = '\x01';
  }
  return "ShifterTypeEnum";
}


// CustomLogic.CustomLogicShifterTypeEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicShifterTypeEnum__get_IsAbstract (CustomLogic_CustomLogicShifterTypeEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicShifterTypeEnum__get_IsAbstract(CustomLogic_CustomLogicShifterTypeEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicShifterTypeEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicShifterTypeEnum__get_IsStatic (CustomLogic_CustomLogicShifterTypeEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicShifterTypeEnum__get_IsStatic(CustomLogic_CustomLogicShifterTypeEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicShifterTypeEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicShifterTypeEnum__get_InheritBaseMembers (CustomLogic_CustomLogicShifterTypeEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicShifterTypeEnum__get_InheritBaseMembers(CustomLogic_CustomLogicShifterTypeEnum_o* __this, MethodInfo* method)

{
  return true;
}


