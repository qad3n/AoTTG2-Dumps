// Type: CustomLogic.CustomLogicCollisionDetectionModeEnum
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicCollisionDetectionModeEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicCollisionDetectionModeEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicCollisionDetectionModeEnum_o* CustomLogic_CustomLogicCollisionDetectionModeEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x181fa43f0

CustomLogic_CustomLogicCollisionDetectionModeEnum_o *
CustomLogic_CustomLogicCollisionDetectionModeEnum_Factory__CreateInstance
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
  
  if (Il2CppMethodInitialized_184345967 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCollisionDetectionModeEnum);
    Il2CppMethodInitialized_184345967 = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollisionDetectionModeEnum);
      if (Il2CppMethodInitialized_184345965 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_184345965 = '\x01';
      }
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicCollisionDetectionModeEnum_o *)__this;
    }
    NullCheck(args);
    local_res8[0] = (int32_t)args->max_length;
    pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicCollisionDetectionModeEnum constructor found that takes ");
    pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicCollisionDetectionModeEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCollisionDetectionModeEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181f84a20

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum__o *__this_00;
  System_String_o *pSVar2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  MethodInfo *pMVar3;
  
  if (Il2CppMethodInitialized_184345968 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Discrete");
    il2cpp_codegen_initialize_runtime_metadata(&"ContinuousSpeculative");
    il2cpp_codegen_initialize_runtime_metadata(&"Continuous");
    il2cpp_codegen_initialize_runtime_metadata(&"ContinuousDynamic");
    Il2CppMethodInitialized_184345968 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Discrete",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings->_2).cctor_finished_or_no_cctor
        == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings);
    }
    if (Il2CppMethodInitialized_184345969 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings___CreatePropertyBinding__Discrete_g
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_System_Func_CustomLogicCollisionDetectionModeEnum_object);
      Il2CppMethodInitialized_184345969 = '\x01';
    }
    __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCollisionDetectionModeEnum_object);
    pMVar3 = 
    MethodInfo_CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings___CreatePropertyBinding__Discrete_g;
  }
  else {
    bVar1 = System_String__op_Equality(name,"Continuous",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings->_2).cctor_finished_or_no_cctor
          == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings);
      }
      if (Il2CppMethodInitialized_18434596a == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings___CreatePropertyBinding__Continuous_g
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicCollisionDetectionModeEnum_object);
        Il2CppMethodInitialized_18434596a = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCollisionDetectionModeEnum_object);
      pMVar3 = 
      MethodInfo_CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings___CreatePropertyBinding__Continuous_g
      ;
    }
    else {
      bVar1 = System_String__op_Equality(name,"ContinuousDynamic",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings->_2).
            cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings);
        }
        if (Il2CppMethodInitialized_18434596b == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings___CreatePropertyBinding__ContinuousDy
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicCollisionDetectionModeEnum_object);
          Il2CppMethodInitialized_18434596b = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCollisionDetectionModeEnum_object);
        pMVar3 = 
        MethodInfo_CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings___CreatePropertyBinding__ContinuousDy
        ;
      }
      else {
        bVar1 = System_String__op_Equality(name,"ContinuousSpeculative",(MethodInfo *)0x0);
        if (!bVar1) {
          pSVar2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicCollisionDetectionModeEnum not found");
          str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
          pSVar2 = System_String__Concat_1969b70(str0,name,pSVar2,(MethodInfo *)0x0);
          klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
          __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
          System_Exception___ctor_1b6abf0(__this_01,pSVar2,(MethodInfo *)0x0);
          pMVar3 = il2cpp_codegen_get_runtime_metadata
                             (&
                              MethodInfo_CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings_CreateMemberBinding
                             );
          il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,pMVar3);
        }
        if ((TypeInfo_CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings->_2).
            cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings);
        }
        if (Il2CppMethodInitialized_18434596c == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings___CreatePropertyBinding__ContinuousSp
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicCollisionDetectionModeEnum_object);
          Il2CppMethodInitialized_18434596c = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCollisionDetectionModeEnum_object);
        pMVar3 = 
        MethodInfo_CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings___CreatePropertyBinding__ContinuousSp
        ;
      }
    }
  }
  System_Func_object__object____ctor
            (__this,(Il2CppObject *)0x0,(intptr_t)pMVar3,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum_ctor);
  return (CustomLogic_ICLMemberBinding_o *)__this_00;
}


// CustomLogic.CustomLogicCollisionDetectionModeEnum.Bindings$$__CreatePropertyBinding__Discrete
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum__o* CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings____CreatePropertyBinding__Discrete (const MethodInfo* method);
// 0x181f967b0

CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum__o *
CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings____CreatePropertyBinding__Discrete
          (MethodInfo *method)

{
  System_Func_CustomLogicCollisionDetectionModeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345969 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings___CreatePropertyBinding__Discrete_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicCollisionDetectionModeEnum_object);
    Il2CppMethodInitialized_184345969 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCollisionDetectionModeEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings___CreatePropertyBinding__Discrete_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCollisionDetectionModeEnum.Bindings$$__CreatePropertyBinding__Continuous
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum__o* CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings____CreatePropertyBinding__Continuous (const MethodInfo* method);
// 0x181f962b0

CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum__o *
CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings____CreatePropertyBinding__Continuous
          (MethodInfo *method)

{
  System_Func_CustomLogicCollisionDetectionModeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_18434596a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings___CreatePropertyBinding__Continuous_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicCollisionDetectionModeEnum_object);
    Il2CppMethodInitialized_18434596a = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCollisionDetectionModeEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings___CreatePropertyBinding__Continuous_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCollisionDetectionModeEnum.Bindings$$__CreatePropertyBinding__ContinuousDynamic
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum__o* CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings____CreatePropertyBinding__ContinuousDynamic (const MethodInfo* method);
// 0x181f96170

CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum__o *
CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings____CreatePropertyBinding__ContinuousDynamic
          (MethodInfo *method)

{
  System_Func_CustomLogicCollisionDetectionModeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_18434596b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings___CreatePropertyBinding__ContinuousDy
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicCollisionDetectionModeEnum_object);
    Il2CppMethodInitialized_18434596b = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCollisionDetectionModeEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings___CreatePropertyBinding__ContinuousDy
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCollisionDetectionModeEnum.Bindings$$__CreatePropertyBinding__ContinuousSpeculative
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum__o* CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings____CreatePropertyBinding__ContinuousSpeculative (const MethodInfo* method);
// 0x181f96210

CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum__o *
CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings____CreatePropertyBinding__ContinuousSpeculative
          (MethodInfo *method)

{
  System_Func_CustomLogicCollisionDetectionModeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_18434596c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings___CreatePropertyBinding__ContinuousSp
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicCollisionDetectionModeEnum_object);
    Il2CppMethodInitialized_18434596c = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCollisionDetectionModeEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings___CreatePropertyBinding__ContinuousSp
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCollisionDetectionModeEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings___cctor (const MethodInfo* method);
// 0x181f9db90

void CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_18434596d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Discrete");
    il2cpp_codegen_initialize_runtime_metadata(&"ContinuousSpeculative");
    il2cpp_codegen_initialize_runtime_metadata(&"Continuous");
    il2cpp_codegen_initialize_runtime_metadata(&"ContinuousDynamic");
    Il2CppMethodInitialized_18434596d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Discrete",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Continuous",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ContinuousDynamic",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ContinuousSpeculative",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings->static_fields->
                MemberNames,__this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCollisionDetectionModeEnum.Bindings$$<__CreatePropertyBinding__Discrete>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings_____CreatePropertyBinding__Discrete_g____getter_2_0 (CustomLogic_CustomLogicCollisionDetectionModeEnum_o* __i, const MethodInfo* method);
// 0x181ef2260

Il2CppObject*
CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings_____CreatePropertyBinding__Discrete_g____getter_2_0(CustomLogic_CustomLogicCollisionDetectionModeEnum_o* __i, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 0;
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicCollisionDetectionModeEnum.Bindings$$<__CreatePropertyBinding__Continuous>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings_____CreatePropertyBinding__Continuous_g____getter_3_0 (CustomLogic_CustomLogicCollisionDetectionModeEnum_o* __i, const MethodInfo* method);
// 0x181ef2200

Il2CppObject*
CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings_____CreatePropertyBinding__Continuous_g____getter_3_0(CustomLogic_CustomLogicCollisionDetectionModeEnum_o* __i, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 1;
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicCollisionDetectionModeEnum.Bindings$$<__CreatePropertyBinding__ContinuousDynamic>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings_____CreatePropertyBinding__ContinuousDynamic_g____getter_4_0 (CustomLogic_CustomLogicCollisionDetectionModeEnum_o* __i, const MethodInfo* method);
// 0x181ef2230

Il2CppObject*
CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings_____CreatePropertyBinding__ContinuousDynamic_g____getter_4_0(CustomLogic_CustomLogicCollisionDetectionModeEnum_o* __i, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 2;
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicCollisionDetectionModeEnum.Bindings$$<__CreatePropertyBinding__ContinuousSpeculative>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings_____CreatePropertyBinding__ContinuousSpeculative_g____getter_5_0 (CustomLogic_CustomLogicCollisionDetectionModeEnum_o* __i, const MethodInfo* method);
// 0x181f8d5d0

Il2CppObject*
CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings_____CreatePropertyBinding__ContinuousSpeculative_g____getter_5_0(CustomLogic_CustomLogicCollisionDetectionModeEnum_o* __i, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 3;
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicCollisionDetectionModeEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicCollisionDetectionModeEnum___ctor (CustomLogic_CustomLogicCollisionDetectionModeEnum_o* __this, const MethodInfo* method);
// 0x181fa0150

void CustomLogic_CustomLogicCollisionDetectionModeEnum___ctor
               (CustomLogic_CustomLogicCollisionDetectionModeEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345965 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_184345965 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicCollisionDetectionModeEnum$$get_Discrete
// il2cpp: int32_t CustomLogic_CustomLogicCollisionDetectionModeEnum__get_Discrete (const MethodInfo* method);
// 0x18059b2e0

int32_t
CustomLogic_CustomLogicCollisionDetectionModeEnum__get_Discrete(MethodInfo* method)

{
  return (Unity_Collections_AllocatorManager_TryFunction_o *)0x0;
}


// CustomLogic.CustomLogicCollisionDetectionModeEnum$$get_Continuous
// il2cpp: int32_t CustomLogic_CustomLogicCollisionDetectionModeEnum__get_Continuous (const MethodInfo* method);
// 0x180564040

int32_t
CustomLogic_CustomLogicCollisionDetectionModeEnum__get_Continuous(MethodInfo* method)

{
  return 1;
}


// CustomLogic.CustomLogicCollisionDetectionModeEnum$$get_ContinuousDynamic
// il2cpp: int32_t CustomLogic_CustomLogicCollisionDetectionModeEnum__get_ContinuousDynamic (const MethodInfo* method);
// 0x180846f80

int32_t
CustomLogic_CustomLogicCollisionDetectionModeEnum__get_ContinuousDynamic(MethodInfo* method)

{
  return 2;
}


// CustomLogic.CustomLogicCollisionDetectionModeEnum$$get_ContinuousSpeculative
// il2cpp: int32_t CustomLogic_CustomLogicCollisionDetectionModeEnum__get_ContinuousSpeculative (const MethodInfo* method);
// 0x180565fb0

int32_t
CustomLogic_CustomLogicCollisionDetectionModeEnum__get_ContinuousSpeculative(MethodInfo* method)

{
  return 3;
}


// CustomLogic.CustomLogicCollisionDetectionModeEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicCollisionDetectionModeEnum__get_ClassName (CustomLogic_CustomLogicCollisionDetectionModeEnum_o* __this, const MethodInfo* method);
// 0x181fa01a0

System_String_o *
CustomLogic_CustomLogicCollisionDetectionModeEnum__get_ClassName
          (CustomLogic_CustomLogicCollisionDetectionModeEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345966 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"CollisionDetectionModeEnum");
    Il2CppMethodInitialized_184345966 = '\x01';
  }
  return "CollisionDetectionModeEnum";
}


// CustomLogic.CustomLogicCollisionDetectionModeEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicCollisionDetectionModeEnum__get_IsAbstract (CustomLogic_CustomLogicCollisionDetectionModeEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicCollisionDetectionModeEnum__get_IsAbstract(CustomLogic_CustomLogicCollisionDetectionModeEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicCollisionDetectionModeEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicCollisionDetectionModeEnum__get_IsStatic (CustomLogic_CustomLogicCollisionDetectionModeEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicCollisionDetectionModeEnum__get_IsStatic(CustomLogic_CustomLogicCollisionDetectionModeEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicCollisionDetectionModeEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicCollisionDetectionModeEnum__get_InheritBaseMembers (CustomLogic_CustomLogicCollisionDetectionModeEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicCollisionDetectionModeEnum__get_InheritBaseMembers(CustomLogic_CustomLogicCollisionDetectionModeEnum_o* __this, MethodInfo* method)

{
  return true;
}


