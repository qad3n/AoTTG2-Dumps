// Type: CustomLogic.CustomLogicLineAlignmentEnum
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicLineAlignmentEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicLineAlignmentEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicLineAlignmentEnum_o* CustomLogic_CustomLogicLineAlignmentEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x181fefdc0

CustomLogic_CustomLogicLineAlignmentEnum_o *
CustomLogic_CustomLogicLineAlignmentEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_184345ea0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLineAlignmentEnum);
    Il2CppMethodInitialized_184345ea0 = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineAlignmentEnum);
      if (Il2CppMethodInitialized_184345e9e == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_184345e9e = '\x01';
      }
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicLineAlignmentEnum_o *)__this;
    }
    NullCheck(args);
    local_res8[0] = (int32_t)args->max_length;
    pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicLineAlignmentEnum constructor found that takes ");
    pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicLineAlignmentEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineAlignmentEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicLineAlignmentEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181fd9b60

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicLineAlignmentEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLineAlignmentEnum__o *__this_00;
  System_String_o *pSVar2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  MethodInfo *pMVar3;
  
  if (Il2CppMethodInitialized_184345ea1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLineAlignmentEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"TransformZ");
    il2cpp_codegen_initialize_runtime_metadata(&"Local");
    il2cpp_codegen_initialize_runtime_metadata(&"View");
    Il2CppMethodInitialized_184345ea1 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"View",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicLineAlignmentEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineAlignmentEnum_Bindings);
    }
    if (Il2CppMethodInitialized_184345ea2 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicLineAlignmentEnum_Bindings___CreatePropertyBinding__View_g____getter_2_0
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineAlignmentEnum_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineAlignmentEnum);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLineAlignmentEnum_object);
      Il2CppMethodInitialized_184345ea2 = '\x01';
    }
    __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineAlignmentEnum_object);
    pMVar3 = 
    MethodInfo_CustomLogic_CustomLogicLineAlignmentEnum_Bindings___CreatePropertyBinding__View_g____getter_2_0
    ;
  }
  else {
    bVar1 = System_String__op_Equality(name,"Local",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicLineAlignmentEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineAlignmentEnum_Bindings);
      }
      if (Il2CppMethodInitialized_184345ea3 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicLineAlignmentEnum_Bindings___CreatePropertyBinding__Local_g____getter_3_0
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineAlignmentEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineAlignmentEnum);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLineAlignmentEnum_object);
        Il2CppMethodInitialized_184345ea3 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineAlignmentEnum_object);
      pMVar3 = 
      MethodInfo_CustomLogic_CustomLogicLineAlignmentEnum_Bindings___CreatePropertyBinding__Local_g____getter_3_0
      ;
    }
    else {
      bVar1 = System_String__op_Equality(name,"TransformZ",(MethodInfo *)0x0);
      if (!bVar1) {
        pSVar2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicLineAlignmentEnum not found");
        str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
        pSVar2 = System_String__Concat_1969b70(str0,name,pSVar2,(MethodInfo *)0x0);
        klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
        __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
        System_Exception___ctor_1b6abf0(__this_01,pSVar2,(MethodInfo *)0x0);
        pMVar3 = il2cpp_codegen_get_runtime_metadata
                           (&MethodInfo_CustomLogic_CustomLogicLineAlignmentEnum_Bindings_CreateMemberBinding)
        ;
        il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,pMVar3);
      }
      if ((TypeInfo_CustomLogic_CustomLogicLineAlignmentEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineAlignmentEnum_Bindings);
      }
      if (Il2CppMethodInitialized_184345ea4 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicLineAlignmentEnum_Bindings___CreatePropertyBinding__TransformZ_g____gette
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineAlignmentEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineAlignmentEnum);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLineAlignmentEnum_object);
        Il2CppMethodInitialized_184345ea4 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineAlignmentEnum_object);
      pMVar3 = 
      MethodInfo_CustomLogic_CustomLogicLineAlignmentEnum_Bindings___CreatePropertyBinding__TransformZ_g____gette
      ;
    }
  }
  System_Func_object__object____ctor
            (__this,(Il2CppObject *)0x0,(intptr_t)pMVar3,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineAlignmentEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineAlignmentEnum_ctor)
  ;
  return (CustomLogic_ICLMemberBinding_o *)__this_00;
}


// CustomLogic.CustomLogicLineAlignmentEnum.Bindings$$__CreatePropertyBinding__View
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineAlignmentEnum__o* CustomLogic_CustomLogicLineAlignmentEnum_Bindings____CreatePropertyBinding__View (const MethodInfo* method);
// 0x181fe9100

CustomLogic_CLPropertyBinding_CustomLogicLineAlignmentEnum__o *
CustomLogic_CustomLogicLineAlignmentEnum_Bindings____CreatePropertyBinding__View(MethodInfo *method)

{
  System_Func_CustomLogicLineAlignmentEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLineAlignmentEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ea2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineAlignmentEnum_Bindings___CreatePropertyBinding__View_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineAlignmentEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineAlignmentEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLineAlignmentEnum_object);
    Il2CppMethodInitialized_184345ea2 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineAlignmentEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineAlignmentEnum_Bindings___CreatePropertyBinding__View_g____getter_2_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineAlignmentEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineAlignmentEnum_ctor)
  ;
  return __this_00;
}


// CustomLogic.CustomLogicLineAlignmentEnum.Bindings$$__CreatePropertyBinding__Local
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineAlignmentEnum__o* CustomLogic_CustomLogicLineAlignmentEnum_Bindings____CreatePropertyBinding__Local (const MethodInfo* method);
// 0x181fe5500

CustomLogic_CLPropertyBinding_CustomLogicLineAlignmentEnum__o *
CustomLogic_CustomLogicLineAlignmentEnum_Bindings____CreatePropertyBinding__Local(MethodInfo *method)

{
  System_Func_CustomLogicLineAlignmentEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLineAlignmentEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ea3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineAlignmentEnum_Bindings___CreatePropertyBinding__Local_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineAlignmentEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineAlignmentEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLineAlignmentEnum_object);
    Il2CppMethodInitialized_184345ea3 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineAlignmentEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineAlignmentEnum_Bindings___CreatePropertyBinding__Local_g____getter_3_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineAlignmentEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineAlignmentEnum_ctor)
  ;
  return __this_00;
}


// CustomLogic.CustomLogicLineAlignmentEnum.Bindings$$__CreatePropertyBinding__TransformZ
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineAlignmentEnum__o* CustomLogic_CustomLogicLineAlignmentEnum_Bindings____CreatePropertyBinding__TransformZ (const MethodInfo* method);
// 0x181fe8ca0

CustomLogic_CLPropertyBinding_CustomLogicLineAlignmentEnum__o *
CustomLogic_CustomLogicLineAlignmentEnum_Bindings____CreatePropertyBinding__TransformZ(MethodInfo *method)

{
  System_Func_CustomLogicLineAlignmentEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLineAlignmentEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ea4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineAlignmentEnum_Bindings___CreatePropertyBinding__TransformZ_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineAlignmentEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineAlignmentEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLineAlignmentEnum_object);
    Il2CppMethodInitialized_184345ea4 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineAlignmentEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineAlignmentEnum_Bindings___CreatePropertyBinding__TransformZ_g____gette
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineAlignmentEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineAlignmentEnum_ctor)
  ;
  return __this_00;
}


// CustomLogic.CustomLogicLineAlignmentEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicLineAlignmentEnum_Bindings___cctor (const MethodInfo* method);
// 0x181fea1a0

void CustomLogic_CustomLogicLineAlignmentEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_184345ea5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLineAlignmentEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"TransformZ");
    il2cpp_codegen_initialize_runtime_metadata(&"Local");
    il2cpp_codegen_initialize_runtime_metadata(&"View");
    Il2CppMethodInitialized_184345ea5 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"View",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Local",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TransformZ",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicLineAlignmentEnum_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicLineAlignmentEnum_Bindings->static_fields->MemberNames,__this)
    ;
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineAlignmentEnum.Bindings$$<__CreatePropertyBinding__View>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineAlignmentEnum_Bindings_____CreatePropertyBinding__View_g____getter_2_0 (CustomLogic_CustomLogicLineAlignmentEnum_o* __i, const MethodInfo* method);
// 0x181ef2260

Il2CppObject*
CustomLogic_CustomLogicLineAlignmentEnum_Bindings_____CreatePropertyBinding__View_g____getter_2_0(CustomLogic_CustomLogicLineAlignmentEnum_o* __i, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 0;
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicLineAlignmentEnum.Bindings$$<__CreatePropertyBinding__Local>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineAlignmentEnum_Bindings_____CreatePropertyBinding__Local_g____getter_3_0 (CustomLogic_CustomLogicLineAlignmentEnum_o* __i, const MethodInfo* method);
// 0x181ef2200

Il2CppObject*
CustomLogic_CustomLogicLineAlignmentEnum_Bindings_____CreatePropertyBinding__Local_g____getter_3_0(CustomLogic_CustomLogicLineAlignmentEnum_o* __i, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 1;
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicLineAlignmentEnum.Bindings$$<__CreatePropertyBinding__TransformZ>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineAlignmentEnum_Bindings_____CreatePropertyBinding__TransformZ_g____getter_4_0 (CustomLogic_CustomLogicLineAlignmentEnum_o* __i, const MethodInfo* method);
// 0x181ef2200

Il2CppObject*
CustomLogic_CustomLogicLineAlignmentEnum_Bindings_____CreatePropertyBinding__TransformZ_g____getter_4_0(CustomLogic_CustomLogicLineAlignmentEnum_o* __i, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 1;
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicLineAlignmentEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicLineAlignmentEnum___ctor (CustomLogic_CustomLogicLineAlignmentEnum_o* __this, const MethodInfo* method);
// 0x181fee050

void CustomLogic_CustomLogicLineAlignmentEnum___ctor
               (CustomLogic_CustomLogicLineAlignmentEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e9e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_184345e9e = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicLineAlignmentEnum$$get_View
// il2cpp: int32_t CustomLogic_CustomLogicLineAlignmentEnum__get_View (const MethodInfo* method);
// 0x18059b2e0

int32_t
CustomLogic_CustomLogicLineAlignmentEnum__get_View(MethodInfo* method)

{
  return (Unity_Collections_AllocatorManager_TryFunction_o *)0x0;
}


// CustomLogic.CustomLogicLineAlignmentEnum$$get_Local
// il2cpp: int32_t CustomLogic_CustomLogicLineAlignmentEnum__get_Local (const MethodInfo* method);
// 0x180564040

int32_t
CustomLogic_CustomLogicLineAlignmentEnum__get_Local(MethodInfo* method)

{
  return 1;
}


// CustomLogic.CustomLogicLineAlignmentEnum$$get_TransformZ
// il2cpp: int32_t CustomLogic_CustomLogicLineAlignmentEnum__get_TransformZ (const MethodInfo* method);
// 0x180564040

int32_t
CustomLogic_CustomLogicLineAlignmentEnum__get_TransformZ(MethodInfo* method)

{
  return 1;
}


// CustomLogic.CustomLogicLineAlignmentEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicLineAlignmentEnum__get_ClassName (CustomLogic_CustomLogicLineAlignmentEnum_o* __this, const MethodInfo* method);
// 0x181fee0a0

System_String_o *
CustomLogic_CustomLogicLineAlignmentEnum__get_ClassName
          (CustomLogic_CustomLogicLineAlignmentEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e9f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"LineAlignmentEnum");
    Il2CppMethodInitialized_184345e9f = '\x01';
  }
  return "LineAlignmentEnum";
}


// CustomLogic.CustomLogicLineAlignmentEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicLineAlignmentEnum__get_IsAbstract (CustomLogic_CustomLogicLineAlignmentEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicLineAlignmentEnum__get_IsAbstract(CustomLogic_CustomLogicLineAlignmentEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicLineAlignmentEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicLineAlignmentEnum__get_IsStatic (CustomLogic_CustomLogicLineAlignmentEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicLineAlignmentEnum__get_IsStatic(CustomLogic_CustomLogicLineAlignmentEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicLineAlignmentEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicLineAlignmentEnum__get_InheritBaseMembers (CustomLogic_CustomLogicLineAlignmentEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicLineAlignmentEnum__get_InheritBaseMembers(CustomLogic_CustomLogicLineAlignmentEnum_o* __this, MethodInfo* method)

{
  return true;
}


