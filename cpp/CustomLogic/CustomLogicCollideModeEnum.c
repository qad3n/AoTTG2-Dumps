// Type: CustomLogic.CustomLogicCollideModeEnum
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicCollideModeEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicCollideModeEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicCollideModeEnum_o* CustomLogic_CustomLogicCollideModeEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x181fa3c30

CustomLogic_CustomLogicCollideModeEnum_o *
CustomLogic_CustomLogicCollideModeEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_184345948 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCollideModeEnum);
    Il2CppMethodInitialized_184345948 = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollideModeEnum);
      if (Il2CppMethodInitialized_184345943 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_184345943 = '\x01';
      }
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicCollideModeEnum_o *)__this;
    }
    NullCheck(args);
    local_res8[0] = (int32_t)args->max_length;
    pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicCollideModeEnum constructor found that takes ");
    pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicCollideModeEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCollideModeEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicCollideModeEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181f83240

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicCollideModeEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCollideModeEnum__o *__this_00;
  System_String_o *pSVar2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  MethodInfo *pMVar3;
  
  if (Il2CppMethodInitialized_184345949 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCollideModeEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Physical");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"Region");
    Il2CppMethodInitialized_184345949 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Region",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicCollideModeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollideModeEnum_Bindings);
    }
    if (Il2CppMethodInitialized_18434594a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicCollideModeEnum_Bindings___CreatePropertyBinding__Region_g____getter_2_0
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideModeEnum_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideModeEnum);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCollideModeEnum_object);
      Il2CppMethodInitialized_18434594a = '\x01';
    }
    __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCollideModeEnum_object);
    pMVar3 = 
    MethodInfo_CustomLogic_CustomLogicCollideModeEnum_Bindings___CreatePropertyBinding__Region_g____getter_2_0
    ;
  }
  else {
    bVar1 = System_String__op_Equality(name,"Physical",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicCollideModeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollideModeEnum_Bindings);
      }
      if (Il2CppMethodInitialized_18434594b == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicCollideModeEnum_Bindings___CreatePropertyBinding__Physical_g____getter_3
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideModeEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideModeEnum);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCollideModeEnum_object);
        Il2CppMethodInitialized_18434594b = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCollideModeEnum_object);
      pMVar3 = 
      MethodInfo_CustomLogic_CustomLogicCollideModeEnum_Bindings___CreatePropertyBinding__Physical_g____getter_3
      ;
    }
    else {
      bVar1 = System_String__op_Equality(name,"None",(MethodInfo *)0x0);
      if (!bVar1) {
        pSVar2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicCollideModeEnum not found");
        str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
        pSVar2 = System_String__Concat_1969b70(str0,name,pSVar2,(MethodInfo *)0x0);
        klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
        __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
        System_Exception___ctor_1b6abf0(__this_01,pSVar2,(MethodInfo *)0x0);
        pMVar3 = il2cpp_codegen_get_runtime_metadata
                           (&MethodInfo_CustomLogic_CustomLogicCollideModeEnum_Bindings_CreateMemberBinding);
        il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,pMVar3);
      }
      if ((TypeInfo_CustomLogic_CustomLogicCollideModeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollideModeEnum_Bindings);
      }
      if (Il2CppMethodInitialized_18434594c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicCollideModeEnum_Bindings___CreatePropertyBinding__None_g____getter_4_0
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideModeEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideModeEnum);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCollideModeEnum_object);
        Il2CppMethodInitialized_18434594c = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCollideModeEnum_object);
      pMVar3 = 
      MethodInfo_CustomLogic_CustomLogicCollideModeEnum_Bindings___CreatePropertyBinding__None_g____getter_4_0
      ;
    }
  }
  System_Func_object__object____ctor
            (__this,(Il2CppObject *)0x0,(intptr_t)pMVar3,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideModeEnum_ctor);
  return (CustomLogic_ICLMemberBinding_o *)__this_00;
}


// CustomLogic.CustomLogicCollideModeEnum.Bindings$$__CreatePropertyBinding__Region
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCollideModeEnum__o* CustomLogic_CustomLogicCollideModeEnum_Bindings____CreatePropertyBinding__Region (const MethodInfo* method);
// 0x181f99e10

CustomLogic_CLPropertyBinding_CustomLogicCollideModeEnum__o *
CustomLogic_CustomLogicCollideModeEnum_Bindings____CreatePropertyBinding__Region(MethodInfo *method)

{
  System_Func_CustomLogicCollideModeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCollideModeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_18434594a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCollideModeEnum_Bindings___CreatePropertyBinding__Region_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideModeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideModeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCollideModeEnum_object);
    Il2CppMethodInitialized_18434594a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCollideModeEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCollideModeEnum_Bindings___CreatePropertyBinding__Region_g____getter_2_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideModeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCollideModeEnum.Bindings$$__CreatePropertyBinding__Physical
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCollideModeEnum__o* CustomLogic_CustomLogicCollideModeEnum_Bindings____CreatePropertyBinding__Physical (const MethodInfo* method);
// 0x181f996e0

CustomLogic_CLPropertyBinding_CustomLogicCollideModeEnum__o *
CustomLogic_CustomLogicCollideModeEnum_Bindings____CreatePropertyBinding__Physical(MethodInfo *method)

{
  System_Func_CustomLogicCollideModeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCollideModeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_18434594b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCollideModeEnum_Bindings___CreatePropertyBinding__Physical_g____getter_3
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideModeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideModeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCollideModeEnum_object);
    Il2CppMethodInitialized_18434594b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCollideModeEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCollideModeEnum_Bindings___CreatePropertyBinding__Physical_g____getter_3
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideModeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCollideModeEnum.Bindings$$__CreatePropertyBinding__None
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCollideModeEnum__o* CustomLogic_CustomLogicCollideModeEnum_Bindings____CreatePropertyBinding__None (const MethodInfo* method);
// 0x181f99410

CustomLogic_CLPropertyBinding_CustomLogicCollideModeEnum__o *
CustomLogic_CustomLogicCollideModeEnum_Bindings____CreatePropertyBinding__None(MethodInfo *method)

{
  System_Func_CustomLogicCollideModeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCollideModeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_18434594c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCollideModeEnum_Bindings___CreatePropertyBinding__None_g____getter_4_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideModeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideModeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCollideModeEnum_object);
    Il2CppMethodInitialized_18434594c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCollideModeEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCollideModeEnum_Bindings___CreatePropertyBinding__None_g____getter_4_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideModeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCollideModeEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicCollideModeEnum_Bindings___cctor (const MethodInfo* method);
// 0x181f9ed50

void CustomLogic_CustomLogicCollideModeEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_18434594d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCollideModeEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Physical");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"Region");
    Il2CppMethodInitialized_18434594d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Region",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Physical",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"None",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicCollideModeEnum_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicCollideModeEnum_Bindings->static_fields->MemberNames,__this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCollideModeEnum.Bindings$$<__CreatePropertyBinding__Region>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollideModeEnum_Bindings_____CreatePropertyBinding__Region_g____getter_2_0 (CustomLogic_CustomLogicCollideModeEnum_o* __i, const MethodInfo* method);
// 0x181f900c0

Il2CppObject *
CustomLogic_CustomLogicCollideModeEnum_Bindings_____CreatePropertyBinding__Region_g____getter_2_0
          (CustomLogic_CustomLogicCollideModeEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a13 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectCollideMode);
    Il2CppMethodInitialized_184345a13 = '\x01';
  }
  if ((TypeInfo_Map_MapObjectCollideMode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideMode);
  }
  return (Il2CppObject *)TypeInfo_Map_MapObjectCollideMode->static_fields->Region;
}


// CustomLogic.CustomLogicCollideModeEnum.Bindings$$<__CreatePropertyBinding__Physical>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollideModeEnum_Bindings_____CreatePropertyBinding__Physical_g____getter_3_0 (CustomLogic_CustomLogicCollideModeEnum_o* __i, const MethodInfo* method);
// 0x181f8fb40

Il2CppObject *
CustomLogic_CustomLogicCollideModeEnum_Bindings_____CreatePropertyBinding__Physical_g____getter_3_0
          (CustomLogic_CustomLogicCollideModeEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a14 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectCollideMode);
    Il2CppMethodInitialized_184345a14 = '\x01';
  }
  if ((TypeInfo_Map_MapObjectCollideMode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideMode);
  }
  return (Il2CppObject *)TypeInfo_Map_MapObjectCollideMode->static_fields->Physical;
}


// CustomLogic.CustomLogicCollideModeEnum.Bindings$$<__CreatePropertyBinding__None>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollideModeEnum_Bindings_____CreatePropertyBinding__None_g____getter_4_0 (CustomLogic_CustomLogicCollideModeEnum_o* __i, const MethodInfo* method);
// 0x181f8f8f0

Il2CppObject *
CustomLogic_CustomLogicCollideModeEnum_Bindings_____CreatePropertyBinding__None_g____getter_4_0
          (CustomLogic_CustomLogicCollideModeEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a15 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectCollideMode);
    Il2CppMethodInitialized_184345a15 = '\x01';
  }
  if ((TypeInfo_Map_MapObjectCollideMode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideMode);
  }
  return (Il2CppObject *)TypeInfo_Map_MapObjectCollideMode->static_fields->None;
}


// CustomLogic.CustomLogicCollideModeEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicCollideModeEnum___ctor (CustomLogic_CustomLogicCollideModeEnum_o* __this, const MethodInfo* method);
// 0x181f9fc90

void CustomLogic_CustomLogicCollideModeEnum___ctor
               (CustomLogic_CustomLogicCollideModeEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345943 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_184345943 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicCollideModeEnum$$get_Region
// il2cpp: System_String_o* CustomLogic_CustomLogicCollideModeEnum__get_Region (const MethodInfo* method);
// 0x181f9fdb0

System_String_o * CustomLogic_CustomLogicCollideModeEnum__get_Region(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345944 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectCollideMode);
    Il2CppMethodInitialized_184345944 = '\x01';
  }
  if ((TypeInfo_Map_MapObjectCollideMode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideMode);
  }
  return TypeInfo_Map_MapObjectCollideMode->static_fields->Region;
}


// CustomLogic.CustomLogicCollideModeEnum$$get_Physical
// il2cpp: System_String_o* CustomLogic_CustomLogicCollideModeEnum__get_Physical (const MethodInfo* method);
// 0x181f9fd60

System_String_o * CustomLogic_CustomLogicCollideModeEnum__get_Physical(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345945 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectCollideMode);
    Il2CppMethodInitialized_184345945 = '\x01';
  }
  if ((TypeInfo_Map_MapObjectCollideMode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideMode);
  }
  return TypeInfo_Map_MapObjectCollideMode->static_fields->Physical;
}


// CustomLogic.CustomLogicCollideModeEnum$$get_None
// il2cpp: System_String_o* CustomLogic_CustomLogicCollideModeEnum__get_None (const MethodInfo* method);
// 0x181f9fd10

System_String_o * CustomLogic_CustomLogicCollideModeEnum__get_None(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345946 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectCollideMode);
    Il2CppMethodInitialized_184345946 = '\x01';
  }
  if ((TypeInfo_Map_MapObjectCollideMode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideMode);
  }
  return TypeInfo_Map_MapObjectCollideMode->static_fields->None;
}


// CustomLogic.CustomLogicCollideModeEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicCollideModeEnum__get_ClassName (CustomLogic_CustomLogicCollideModeEnum_o* __this, const MethodInfo* method);
// 0x181f9fce0

System_String_o *
CustomLogic_CustomLogicCollideModeEnum__get_ClassName
          (CustomLogic_CustomLogicCollideModeEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345947 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"CollideModeEnum");
    Il2CppMethodInitialized_184345947 = '\x01';
  }
  return "CollideModeEnum";
}


// CustomLogic.CustomLogicCollideModeEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicCollideModeEnum__get_IsAbstract (CustomLogic_CustomLogicCollideModeEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicCollideModeEnum__get_IsAbstract(CustomLogic_CustomLogicCollideModeEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicCollideModeEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicCollideModeEnum__get_IsStatic (CustomLogic_CustomLogicCollideModeEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicCollideModeEnum__get_IsStatic(CustomLogic_CustomLogicCollideModeEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicCollideModeEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicCollideModeEnum__get_InheritBaseMembers (CustomLogic_CustomLogicCollideModeEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicCollideModeEnum__get_InheritBaseMembers(CustomLogic_CustomLogicCollideModeEnum_o* __this, MethodInfo* method)

{
  return true;
}


