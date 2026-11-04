// Type: CustomLogic.CustomLogicForceModeEnum
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicForceModeEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicForceModeEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicForceModeEnum_o* CustomLogic_CustomLogicForceModeEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x181fa3fc0

CustomLogic_CustomLogicForceModeEnum_o *
CustomLogic_CustomLogicForceModeEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_1843459fe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicForceModeEnum);
    Il2CppMethodInitialized_1843459fe = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicForceModeEnum);
      if (Il2CppMethodInitialized_1843459fc == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_1843459fc = '\x01';
      }
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicForceModeEnum_o *)__this;
    }
    NullCheck(args);
    local_res8[0] = (int32_t)args->max_length;
    pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicForceModeEnum constructor found that takes ");
    pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicForceModeEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicForceModeEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicForceModeEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181f87dc0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicForceModeEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum__o *__this_00;
  System_String_o *pSVar2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  MethodInfo *pMVar3;
  
  if (Il2CppMethodInitialized_1843459ff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicForceModeEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Acceleration");
    il2cpp_codegen_initialize_runtime_metadata(&"VelocityChange");
    il2cpp_codegen_initialize_runtime_metadata(&"Impulse");
    il2cpp_codegen_initialize_runtime_metadata(&"Force");
    Il2CppMethodInitialized_1843459ff = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Force",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicForceModeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicForceModeEnum_Bindings)
      ;
    }
    if (Il2CppMethodInitialized_184345a00 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicForceModeEnum_Bindings___CreatePropertyBinding__Force_g____getter_2_0
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicForceModeEnum_object);
      Il2CppMethodInitialized_184345a00 = '\x01';
    }
    __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicForceModeEnum_object);
    pMVar3 = 
    MethodInfo_CustomLogic_CustomLogicForceModeEnum_Bindings___CreatePropertyBinding__Force_g____getter_2_0;
  }
  else {
    bVar1 = System_String__op_Equality(name,"Acceleration",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicForceModeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicForceModeEnum_Bindings);
      }
      if (Il2CppMethodInitialized_184345a01 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicForceModeEnum_Bindings___CreatePropertyBinding__Acceleration_g____getter
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicForceModeEnum_object);
        Il2CppMethodInitialized_184345a01 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicForceModeEnum_object);
      pMVar3 = 
      MethodInfo_CustomLogic_CustomLogicForceModeEnum_Bindings___CreatePropertyBinding__Acceleration_g____getter
      ;
    }
    else {
      bVar1 = System_String__op_Equality(name,"Impulse",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicForceModeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicForceModeEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345a02 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicForceModeEnum_Bindings___CreatePropertyBinding__Impulse_g____getter_4_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicForceModeEnum_object);
          Il2CppMethodInitialized_184345a02 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicForceModeEnum_object);
        pMVar3 = 
        MethodInfo_CustomLogic_CustomLogicForceModeEnum_Bindings___CreatePropertyBinding__Impulse_g____getter_4_0
        ;
      }
      else {
        bVar1 = System_String__op_Equality(name,"VelocityChange",(MethodInfo *)0x0);
        if (!bVar1) {
          pSVar2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicForceModeEnum not found");
          str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
          pSVar2 = System_String__Concat_1969b70(str0,name,pSVar2,(MethodInfo *)0x0);
          klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
          __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
          System_Exception___ctor_1b6abf0(__this_01,pSVar2,(MethodInfo *)0x0);
          pMVar3 = il2cpp_codegen_get_runtime_metadata
                             (&MethodInfo_CustomLogic_CustomLogicForceModeEnum_Bindings_CreateMemberBinding);
          il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,pMVar3);
        }
        if ((TypeInfo_CustomLogic_CustomLogicForceModeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicForceModeEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345a03 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicForceModeEnum_Bindings___CreatePropertyBinding__VelocityChange_g____gette
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicForceModeEnum_object);
          Il2CppMethodInitialized_184345a03 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicForceModeEnum_object);
        pMVar3 = 
        MethodInfo_CustomLogic_CustomLogicForceModeEnum_Bindings___CreatePropertyBinding__VelocityChange_g____gette
        ;
      }
    }
  }
  System_Func_object__object____ctor
            (__this,(Il2CppObject *)0x0,(intptr_t)pMVar3,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum_ctor);
  return (CustomLogic_ICLMemberBinding_o *)__this_00;
}


// CustomLogic.CustomLogicForceModeEnum.Bindings$$__CreatePropertyBinding__Force
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum__o* CustomLogic_CustomLogicForceModeEnum_Bindings____CreatePropertyBinding__Force (const MethodInfo* method);
// 0x181f973e0

CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum__o *
CustomLogic_CustomLogicForceModeEnum_Bindings____CreatePropertyBinding__Force(MethodInfo *method)

{
  System_Func_CustomLogicForceModeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345a00 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicForceModeEnum_Bindings___CreatePropertyBinding__Force_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicForceModeEnum_object);
    Il2CppMethodInitialized_184345a00 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicForceModeEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicForceModeEnum_Bindings___CreatePropertyBinding__Force_g____getter_2_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicForceModeEnum.Bindings$$__CreatePropertyBinding__Acceleration
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum__o* CustomLogic_CustomLogicForceModeEnum_Bindings____CreatePropertyBinding__Acceleration (const MethodInfo* method);
// 0x181f93c40

CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum__o *
CustomLogic_CustomLogicForceModeEnum_Bindings____CreatePropertyBinding__Acceleration(MethodInfo *method)

{
  System_Func_CustomLogicForceModeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345a01 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicForceModeEnum_Bindings___CreatePropertyBinding__Acceleration_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicForceModeEnum_object);
    Il2CppMethodInitialized_184345a01 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicForceModeEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicForceModeEnum_Bindings___CreatePropertyBinding__Acceleration_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicForceModeEnum.Bindings$$__CreatePropertyBinding__Impulse
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum__o* CustomLogic_CustomLogicForceModeEnum_Bindings____CreatePropertyBinding__Impulse (const MethodInfo* method);
// 0x181f98060

CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum__o *
CustomLogic_CustomLogicForceModeEnum_Bindings____CreatePropertyBinding__Impulse(MethodInfo *method)

{
  System_Func_CustomLogicForceModeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345a02 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicForceModeEnum_Bindings___CreatePropertyBinding__Impulse_g____getter_4_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicForceModeEnum_object);
    Il2CppMethodInitialized_184345a02 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicForceModeEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicForceModeEnum_Bindings___CreatePropertyBinding__Impulse_g____getter_4_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicForceModeEnum.Bindings$$__CreatePropertyBinding__VelocityChange
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum__o* CustomLogic_CustomLogicForceModeEnum_Bindings____CreatePropertyBinding__VelocityChange (const MethodInfo* method);
// 0x181f9c200

CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum__o *
CustomLogic_CustomLogicForceModeEnum_Bindings____CreatePropertyBinding__VelocityChange(MethodInfo *method)

{
  System_Func_CustomLogicForceModeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345a03 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicForceModeEnum_Bindings___CreatePropertyBinding__VelocityChange_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicForceModeEnum_object);
    Il2CppMethodInitialized_184345a03 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicForceModeEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicForceModeEnum_Bindings___CreatePropertyBinding__VelocityChange_g____gette
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicForceModeEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicForceModeEnum_Bindings___cctor (const MethodInfo* method);
// 0x181f9e650

void CustomLogic_CustomLogicForceModeEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_184345a04 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicForceModeEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Acceleration");
    il2cpp_codegen_initialize_runtime_metadata(&"VelocityChange");
    il2cpp_codegen_initialize_runtime_metadata(&"Impulse");
    il2cpp_codegen_initialize_runtime_metadata(&"Force");
    Il2CppMethodInitialized_184345a04 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Force",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Acceleration",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Impulse",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"VelocityChange",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicForceModeEnum_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicForceModeEnum_Bindings->static_fields->MemberNames,__this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicForceModeEnum.Bindings$$<__CreatePropertyBinding__Force>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicForceModeEnum_Bindings_____CreatePropertyBinding__Force_g____getter_2_0 (CustomLogic_CustomLogicForceModeEnum_o* __i, const MethodInfo* method);
// 0x181ef2260

Il2CppObject*
CustomLogic_CustomLogicForceModeEnum_Bindings_____CreatePropertyBinding__Force_g____getter_2_0(CustomLogic_CustomLogicForceModeEnum_o* __i, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 0;
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicForceModeEnum.Bindings$$<__CreatePropertyBinding__Acceleration>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicForceModeEnum_Bindings_____CreatePropertyBinding__Acceleration_g____getter_3_0 (CustomLogic_CustomLogicForceModeEnum_o* __i, const MethodInfo* method);
// 0x181f8cd20

Il2CppObject*
CustomLogic_CustomLogicForceModeEnum_Bindings_____CreatePropertyBinding__Acceleration_g____getter_3_0(CustomLogic_CustomLogicForceModeEnum_o* __i, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 5;
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicForceModeEnum.Bindings$$<__CreatePropertyBinding__Impulse>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicForceModeEnum_Bindings_____CreatePropertyBinding__Impulse_g____getter_4_0 (CustomLogic_CustomLogicForceModeEnum_o* __i, const MethodInfo* method);
// 0x181ef2200

Il2CppObject*
CustomLogic_CustomLogicForceModeEnum_Bindings_____CreatePropertyBinding__Impulse_g____getter_4_0(CustomLogic_CustomLogicForceModeEnum_o* __i, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 1;
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicForceModeEnum.Bindings$$<__CreatePropertyBinding__VelocityChange>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicForceModeEnum_Bindings_____CreatePropertyBinding__VelocityChange_g____getter_5_0 (CustomLogic_CustomLogicForceModeEnum_o* __i, const MethodInfo* method);
// 0x181ef2230

Il2CppObject*
CustomLogic_CustomLogicForceModeEnum_Bindings_____CreatePropertyBinding__VelocityChange_g____getter_5_0(CustomLogic_CustomLogicForceModeEnum_o* __i, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 2;
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicForceModeEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicForceModeEnum___ctor (CustomLogic_CustomLogicForceModeEnum_o* __this, const MethodInfo* method);
// 0x181fa0fd0

void CustomLogic_CustomLogicForceModeEnum___ctor
               (CustomLogic_CustomLogicForceModeEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843459fc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_1843459fc = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicForceModeEnum$$get_Force
// il2cpp: int32_t CustomLogic_CustomLogicForceModeEnum__get_Force (const MethodInfo* method);
// 0x18059b2e0

int32_t
CustomLogic_CustomLogicForceModeEnum__get_Force(MethodInfo* method)

{
  return (Unity_Collections_AllocatorManager_TryFunction_o *)0x0;
}


// CustomLogic.CustomLogicForceModeEnum$$get_Acceleration
// il2cpp: int32_t CustomLogic_CustomLogicForceModeEnum__get_Acceleration (const MethodInfo* method);
// 0x1808680a0

int32_t
CustomLogic_CustomLogicForceModeEnum__get_Acceleration(MethodInfo* method)

{
  return 5;
}


// CustomLogic.CustomLogicForceModeEnum$$get_Impulse
// il2cpp: int32_t CustomLogic_CustomLogicForceModeEnum__get_Impulse (const MethodInfo* method);
// 0x180564040

int32_t
CustomLogic_CustomLogicForceModeEnum__get_Impulse(MethodInfo* method)

{
  return 1;
}


// CustomLogic.CustomLogicForceModeEnum$$get_VelocityChange
// il2cpp: int32_t CustomLogic_CustomLogicForceModeEnum__get_VelocityChange (const MethodInfo* method);
// 0x180846f80

int32_t
CustomLogic_CustomLogicForceModeEnum__get_VelocityChange(MethodInfo* method)

{
  return 2;
}


// CustomLogic.CustomLogicForceModeEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicForceModeEnum__get_ClassName (CustomLogic_CustomLogicForceModeEnum_o* __this, const MethodInfo* method);
// 0x181fa1020

System_String_o *
CustomLogic_CustomLogicForceModeEnum__get_ClassName
          (CustomLogic_CustomLogicForceModeEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843459fd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ForceModeEnum");
    Il2CppMethodInitialized_1843459fd = '\x01';
  }
  return "ForceModeEnum";
}


// CustomLogic.CustomLogicForceModeEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicForceModeEnum__get_IsAbstract (CustomLogic_CustomLogicForceModeEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicForceModeEnum__get_IsAbstract(CustomLogic_CustomLogicForceModeEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicForceModeEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicForceModeEnum__get_IsStatic (CustomLogic_CustomLogicForceModeEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicForceModeEnum__get_IsStatic(CustomLogic_CustomLogicForceModeEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicForceModeEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicForceModeEnum__get_InheritBaseMembers (CustomLogic_CustomLogicForceModeEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicForceModeEnum__get_InheritBaseMembers(CustomLogic_CustomLogicForceModeEnum_o* __this, MethodInfo* method)

{
  return true;
}


