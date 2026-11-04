// Type: CustomLogic.CustomLogicHandStateEnum
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicHandStateEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicHandStateEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicHandStateEnum_o* CustomLogic_CustomLogicHandStateEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x181fce130

CustomLogic_CustomLogicHandStateEnum_o *
CustomLogic_CustomLogicHandStateEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_184345a41 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHandStateEnum);
    Il2CppMethodInitialized_184345a41 = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHandStateEnum);
      if (Il2CppMethodInitialized_184345a3f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_184345a3f = '\x01';
      }
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicHandStateEnum_o *)__this;
    }
    NullCheck(args);
    local_res8[0] = (int32_t)args->max_length;
    pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicHandStateEnum constructor found that takes ");
    pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicHandStateEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHandStateEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicHandStateEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181fa8950

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicHandStateEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum__o *__this_00;
  System_String_o *pSVar2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  MethodInfo *pMVar3;
  
  if (Il2CppMethodInitialized_184345a42 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHandStateEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Severed");
    il2cpp_codegen_initialize_runtime_metadata(&"Damaged");
    il2cpp_codegen_initialize_runtime_metadata(&"Recovering");
    il2cpp_codegen_initialize_runtime_metadata(&"Healthy");
    Il2CppMethodInitialized_184345a42 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Healthy",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicHandStateEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHandStateEnum_Bindings)
      ;
    }
    if (Il2CppMethodInitialized_184345a43 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicHandStateEnum_Bindings___CreatePropertyBinding__Healthy_g____getter_2_0
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHandStateEnum_object);
      Il2CppMethodInitialized_184345a43 = '\x01';
    }
    __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHandStateEnum_object);
    pMVar3 = 
    MethodInfo_CustomLogic_CustomLogicHandStateEnum_Bindings___CreatePropertyBinding__Healthy_g____getter_2_0;
  }
  else {
    bVar1 = System_String__op_Equality(name,"Damaged",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicHandStateEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHandStateEnum_Bindings);
      }
      if (Il2CppMethodInitialized_184345a44 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicHandStateEnum_Bindings___CreatePropertyBinding__Damaged_g____getter_3_0
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHandStateEnum_object);
        Il2CppMethodInitialized_184345a44 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHandStateEnum_object);
      pMVar3 = 
      MethodInfo_CustomLogic_CustomLogicHandStateEnum_Bindings___CreatePropertyBinding__Damaged_g____getter_3_0
      ;
    }
    else {
      bVar1 = System_String__op_Equality(name,"Severed",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicHandStateEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHandStateEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345a45 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicHandStateEnum_Bindings___CreatePropertyBinding__Severed_g____getter_4_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHandStateEnum_object);
          Il2CppMethodInitialized_184345a45 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHandStateEnum_object);
        pMVar3 = 
        MethodInfo_CustomLogic_CustomLogicHandStateEnum_Bindings___CreatePropertyBinding__Severed_g____getter_4_0
        ;
      }
      else {
        bVar1 = System_String__op_Equality(name,"Recovering",(MethodInfo *)0x0);
        if (!bVar1) {
          pSVar2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicHandStateEnum not found");
          str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
          pSVar2 = System_String__Concat_1969b70(str0,name,pSVar2,(MethodInfo *)0x0);
          klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
          __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
          System_Exception___ctor_1b6abf0(__this_01,pSVar2,(MethodInfo *)0x0);
          pMVar3 = il2cpp_codegen_get_runtime_metadata
                             (&MethodInfo_CustomLogic_CustomLogicHandStateEnum_Bindings_CreateMemberBinding);
          il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,pMVar3);
        }
        if ((TypeInfo_CustomLogic_CustomLogicHandStateEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHandStateEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345a46 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicHandStateEnum_Bindings___CreatePropertyBinding__Recovering_g____getter_5
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHandStateEnum_object);
          Il2CppMethodInitialized_184345a46 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHandStateEnum_object);
        pMVar3 = 
        MethodInfo_CustomLogic_CustomLogicHandStateEnum_Bindings___CreatePropertyBinding__Recovering_g____getter_5
        ;
      }
    }
  }
  System_Func_object__object____ctor
            (__this,(Il2CppObject *)0x0,(intptr_t)pMVar3,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum_ctor);
  return (CustomLogic_ICLMemberBinding_o *)__this_00;
}


// CustomLogic.CustomLogicHandStateEnum.Bindings$$__CreatePropertyBinding__Healthy
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum__o* CustomLogic_CustomLogicHandStateEnum_Bindings____CreatePropertyBinding__Healthy (const MethodInfo* method);
// 0x181fbe2b0

CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum__o *
CustomLogic_CustomLogicHandStateEnum_Bindings____CreatePropertyBinding__Healthy(MethodInfo *method)

{
  System_Func_CustomLogicHandStateEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345a43 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHandStateEnum_Bindings___CreatePropertyBinding__Healthy_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHandStateEnum_object);
    Il2CppMethodInitialized_184345a43 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHandStateEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHandStateEnum_Bindings___CreatePropertyBinding__Healthy_g____getter_2_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHandStateEnum.Bindings$$__CreatePropertyBinding__Damaged
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum__o* CustomLogic_CustomLogicHandStateEnum_Bindings____CreatePropertyBinding__Damaged (const MethodInfo* method);
// 0x181fbc910

CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum__o *
CustomLogic_CustomLogicHandStateEnum_Bindings____CreatePropertyBinding__Damaged(MethodInfo *method)

{
  System_Func_CustomLogicHandStateEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345a44 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHandStateEnum_Bindings___CreatePropertyBinding__Damaged_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHandStateEnum_object);
    Il2CppMethodInitialized_184345a44 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHandStateEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHandStateEnum_Bindings___CreatePropertyBinding__Damaged_g____getter_3_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHandStateEnum.Bindings$$__CreatePropertyBinding__Severed
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum__o* CustomLogic_CustomLogicHandStateEnum_Bindings____CreatePropertyBinding__Severed (const MethodInfo* method);
// 0x181fc1b90

CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum__o *
CustomLogic_CustomLogicHandStateEnum_Bindings____CreatePropertyBinding__Severed(MethodInfo *method)

{
  System_Func_CustomLogicHandStateEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345a45 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHandStateEnum_Bindings___CreatePropertyBinding__Severed_g____getter_4_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHandStateEnum_object);
    Il2CppMethodInitialized_184345a45 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHandStateEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHandStateEnum_Bindings___CreatePropertyBinding__Severed_g____getter_4_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHandStateEnum.Bindings$$__CreatePropertyBinding__Recovering
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum__o* CustomLogic_CustomLogicHandStateEnum_Bindings____CreatePropertyBinding__Recovering (const MethodInfo* method);
// 0x181fc1050

CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum__o *
CustomLogic_CustomLogicHandStateEnum_Bindings____CreatePropertyBinding__Recovering(MethodInfo *method)

{
  System_Func_CustomLogicHandStateEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345a46 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHandStateEnum_Bindings___CreatePropertyBinding__Recovering_g____getter_5
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHandStateEnum_object);
    Il2CppMethodInitialized_184345a46 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHandStateEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHandStateEnum_Bindings___CreatePropertyBinding__Recovering_g____getter_5
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHandStateEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicHandStateEnum_Bindings___cctor (const MethodInfo* method);
// 0x181fc37b0

void CustomLogic_CustomLogicHandStateEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_184345a47 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHandStateEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Severed");
    il2cpp_codegen_initialize_runtime_metadata(&"Damaged");
    il2cpp_codegen_initialize_runtime_metadata(&"Recovering");
    il2cpp_codegen_initialize_runtime_metadata(&"Healthy");
    Il2CppMethodInitialized_184345a47 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Healthy",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Damaged",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Severed",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Recovering",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicHandStateEnum_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicHandStateEnum_Bindings->static_fields->MemberNames,__this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHandStateEnum.Bindings$$<__CreatePropertyBinding__Healthy>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHandStateEnum_Bindings_____CreatePropertyBinding__Healthy_g____getter_2_0 (CustomLogic_CustomLogicHandStateEnum_o* __i, const MethodInfo* method);
// 0x181ef2260

Il2CppObject*
CustomLogic_CustomLogicHandStateEnum_Bindings_____CreatePropertyBinding__Healthy_g____getter_2_0(CustomLogic_CustomLogicHandStateEnum_o* __i, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 0;
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicHandStateEnum.Bindings$$<__CreatePropertyBinding__Damaged>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHandStateEnum_Bindings_____CreatePropertyBinding__Damaged_g____getter_3_0 (CustomLogic_CustomLogicHandStateEnum_o* __i, const MethodInfo* method);
// 0x181ef2200

Il2CppObject*
CustomLogic_CustomLogicHandStateEnum_Bindings_____CreatePropertyBinding__Damaged_g____getter_3_0(CustomLogic_CustomLogicHandStateEnum_o* __i, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 1;
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicHandStateEnum.Bindings$$<__CreatePropertyBinding__Severed>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHandStateEnum_Bindings_____CreatePropertyBinding__Severed_g____getter_4_0 (CustomLogic_CustomLogicHandStateEnum_o* __i, const MethodInfo* method);
// 0x181ef2230

Il2CppObject*
CustomLogic_CustomLogicHandStateEnum_Bindings_____CreatePropertyBinding__Severed_g____getter_4_0(CustomLogic_CustomLogicHandStateEnum_o* __i, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 2;
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicHandStateEnum.Bindings$$<__CreatePropertyBinding__Recovering>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHandStateEnum_Bindings_____CreatePropertyBinding__Recovering_g____getter_5_0 (CustomLogic_CustomLogicHandStateEnum_o* __i, const MethodInfo* method);
// 0x181f8d5d0

Il2CppObject*
CustomLogic_CustomLogicHandStateEnum_Bindings_____CreatePropertyBinding__Recovering_g____getter_5_0(CustomLogic_CustomLogicHandStateEnum_o* __i, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 3;
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicHandStateEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicHandStateEnum___ctor (CustomLogic_CustomLogicHandStateEnum_o* __this, const MethodInfo* method);
// 0x181fc63f0

void CustomLogic_CustomLogicHandStateEnum___ctor
               (CustomLogic_CustomLogicHandStateEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a3f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_184345a3f = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicHandStateEnum$$get_Healthy
// il2cpp: int32_t CustomLogic_CustomLogicHandStateEnum__get_Healthy (const MethodInfo* method);
// 0x18059b2e0

int32_t
CustomLogic_CustomLogicHandStateEnum__get_Healthy(MethodInfo* method)

{
  return (Unity_Collections_AllocatorManager_TryFunction_o *)0x0;
}


// CustomLogic.CustomLogicHandStateEnum$$get_Damaged
// il2cpp: int32_t CustomLogic_CustomLogicHandStateEnum__get_Damaged (const MethodInfo* method);
// 0x180564040

int32_t
CustomLogic_CustomLogicHandStateEnum__get_Damaged(MethodInfo* method)

{
  return 1;
}


// CustomLogic.CustomLogicHandStateEnum$$get_Severed
// il2cpp: int32_t CustomLogic_CustomLogicHandStateEnum__get_Severed (const MethodInfo* method);
// 0x180846f80

int32_t
CustomLogic_CustomLogicHandStateEnum__get_Severed(MethodInfo* method)

{
  return 2;
}


// CustomLogic.CustomLogicHandStateEnum$$get_Recovering
// il2cpp: int32_t CustomLogic_CustomLogicHandStateEnum__get_Recovering (const MethodInfo* method);
// 0x180565fb0

int32_t
CustomLogic_CustomLogicHandStateEnum__get_Recovering(MethodInfo* method)

{
  return 3;
}


// CustomLogic.CustomLogicHandStateEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicHandStateEnum__get_ClassName (CustomLogic_CustomLogicHandStateEnum_o* __this, const MethodInfo* method);
// 0x181fc6440

System_String_o *
CustomLogic_CustomLogicHandStateEnum__get_ClassName
          (CustomLogic_CustomLogicHandStateEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a40 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"HandStateEnum");
    Il2CppMethodInitialized_184345a40 = '\x01';
  }
  return "HandStateEnum";
}


// CustomLogic.CustomLogicHandStateEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicHandStateEnum__get_IsAbstract (CustomLogic_CustomLogicHandStateEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicHandStateEnum__get_IsAbstract(CustomLogic_CustomLogicHandStateEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicHandStateEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicHandStateEnum__get_IsStatic (CustomLogic_CustomLogicHandStateEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicHandStateEnum__get_IsStatic(CustomLogic_CustomLogicHandStateEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicHandStateEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicHandStateEnum__get_InheritBaseMembers (CustomLogic_CustomLogicHandStateEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicHandStateEnum__get_InheritBaseMembers(CustomLogic_CustomLogicHandStateEnum_o* __this, MethodInfo* method)

{
  return true;
}


