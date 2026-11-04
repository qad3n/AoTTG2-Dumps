// Type: CustomLogic.CustomLogicSliderDirectionEnum
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicSliderDirectionEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicSliderDirectionEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicSliderDirectionEnum_o* CustomLogic_CustomLogicSliderDirectionEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x181ff0020

CustomLogic_CustomLogicSliderDirectionEnum_o *
CustomLogic_CustomLogicSliderDirectionEnum_Factory__CreateInstance
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
  
  if (Il2CppMethodInitialized_184346066 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSliderDirectionEnum);
    Il2CppMethodInitialized_184346066 = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSliderDirectionEnum);
      if (Il2CppMethodInitialized_184346064 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_184346064 = '\x01';
      }
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicSliderDirectionEnum_o *)__this;
    }
    NullCheck(args);
    local_res8[0] = (int32_t)args->max_length;
    pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicSliderDirectionEnum constructor found that takes ");
    pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicSliderDirectionEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSliderDirectionEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicSliderDirectionEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181fd5ec0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicSliderDirectionEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicSliderDirectionEnum__o *__this_00;
  System_String_o *pSVar2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  MethodInfo *pMVar3;
  
  if (Il2CppMethodInitialized_184346067 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSliderDirectionEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Vertical");
    il2cpp_codegen_initialize_runtime_metadata(&"Horizontal");
    Il2CppMethodInitialized_184346067 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Horizontal",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicSliderDirectionEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSliderDirectionEnum_Bindings);
    }
    if (Il2CppMethodInitialized_184346068 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicSliderDirectionEnum_Bindings___CreatePropertyBinding__Horizontal_g____get
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderDirectionEnum_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderDirectionEnum);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicSliderDirectionEnum_object);
      Il2CppMethodInitialized_184346068 = '\x01';
    }
    __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicSliderDirectionEnum_object);
    pMVar3 = 
    MethodInfo_CustomLogic_CustomLogicSliderDirectionEnum_Bindings___CreatePropertyBinding__Horizontal_g____get
    ;
  }
  else {
    bVar1 = System_String__op_Equality(name,"Vertical",(MethodInfo *)0x0);
    if (!bVar1) {
      pSVar2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicSliderDirectionEnum not found");
      str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
      pSVar2 = System_String__Concat_1969b70(str0,name,pSVar2,(MethodInfo *)0x0);
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
      __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
      System_Exception___ctor_1b6abf0(__this_01,pSVar2,(MethodInfo *)0x0);
      pMVar3 = il2cpp_codegen_get_runtime_metadata
                         (&MethodInfo_CustomLogic_CustomLogicSliderDirectionEnum_Bindings_CreateMemberBinding)
      ;
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,pMVar3);
    }
    if ((TypeInfo_CustomLogic_CustomLogicSliderDirectionEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSliderDirectionEnum_Bindings);
    }
    if (Il2CppMethodInitialized_184346069 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicSliderDirectionEnum_Bindings___CreatePropertyBinding__Vertical_g____gette
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderDirectionEnum_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderDirectionEnum);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicSliderDirectionEnum_object);
      Il2CppMethodInitialized_184346069 = '\x01';
    }
    __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicSliderDirectionEnum_object);
    pMVar3 = 
    MethodInfo_CustomLogic_CustomLogicSliderDirectionEnum_Bindings___CreatePropertyBinding__Vertical_g____gette
    ;
  }
  System_Func_object__object____ctor
            (__this,(Il2CppObject *)0x0,(intptr_t)pMVar3,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderDirectionEnum)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderDirectionEnum_ctor);
  return (CustomLogic_ICLMemberBinding_o *)__this_00;
}


// CustomLogic.CustomLogicSliderDirectionEnum.Bindings$$__CreatePropertyBinding__Horizontal
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSliderDirectionEnum__o* CustomLogic_CustomLogicSliderDirectionEnum_Bindings____CreatePropertyBinding__Horizontal (const MethodInfo* method);
// 0x181fe3ca0

CustomLogic_CLPropertyBinding_CustomLogicSliderDirectionEnum__o *
CustomLogic_CustomLogicSliderDirectionEnum_Bindings____CreatePropertyBinding__Horizontal(MethodInfo *method)

{
  System_Func_CustomLogicSliderDirectionEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicSliderDirectionEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346068 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicSliderDirectionEnum_Bindings___CreatePropertyBinding__Horizontal_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderDirectionEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderDirectionEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicSliderDirectionEnum_object);
    Il2CppMethodInitialized_184346068 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicSliderDirectionEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicSliderDirectionEnum_Bindings___CreatePropertyBinding__Horizontal_g____get
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderDirectionEnum)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderDirectionEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicSliderDirectionEnum.Bindings$$__CreatePropertyBinding__Vertical
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSliderDirectionEnum__o* CustomLogic_CustomLogicSliderDirectionEnum_Bindings____CreatePropertyBinding__Vertical (const MethodInfo* method);
// 0x181fe9060

CustomLogic_CLPropertyBinding_CustomLogicSliderDirectionEnum__o *
CustomLogic_CustomLogicSliderDirectionEnum_Bindings____CreatePropertyBinding__Vertical(MethodInfo *method)

{
  System_Func_CustomLogicSliderDirectionEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicSliderDirectionEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346069 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicSliderDirectionEnum_Bindings___CreatePropertyBinding__Vertical_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderDirectionEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderDirectionEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicSliderDirectionEnum_object);
    Il2CppMethodInitialized_184346069 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicSliderDirectionEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicSliderDirectionEnum_Bindings___CreatePropertyBinding__Vertical_g____gette
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderDirectionEnum)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderDirectionEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicSliderDirectionEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicSliderDirectionEnum_Bindings___cctor (const MethodInfo* method);
// 0x181feb910

void CustomLogic_CustomLogicSliderDirectionEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_18434606a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSliderDirectionEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Vertical");
    il2cpp_codegen_initialize_runtime_metadata(&"Horizontal");
    Il2CppMethodInitialized_18434606a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Horizontal",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Vertical",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicSliderDirectionEnum_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicSliderDirectionEnum_Bindings->static_fields->MemberNames,
               __this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSliderDirectionEnum.Bindings$$<__CreatePropertyBinding__Horizontal>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSliderDirectionEnum_Bindings_____CreatePropertyBinding__Horizontal_g____getter_2_0 (CustomLogic_CustomLogicSliderDirectionEnum_o* __i, const MethodInfo* method);
// 0x181ef2260

Il2CppObject*
CustomLogic_CustomLogicSliderDirectionEnum_Bindings_____CreatePropertyBinding__Horizontal_g____getter_2_0(CustomLogic_CustomLogicSliderDirectionEnum_o* __i, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 0;
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicSliderDirectionEnum.Bindings$$<__CreatePropertyBinding__Vertical>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSliderDirectionEnum_Bindings_____CreatePropertyBinding__Vertical_g____getter_3_0 (CustomLogic_CustomLogicSliderDirectionEnum_o* __i, const MethodInfo* method);
// 0x181ef2200

Il2CppObject*
CustomLogic_CustomLogicSliderDirectionEnum_Bindings_____CreatePropertyBinding__Vertical_g____getter_3_0(CustomLogic_CustomLogicSliderDirectionEnum_o* __i, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 1;
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicSliderDirectionEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicSliderDirectionEnum___ctor (CustomLogic_CustomLogicSliderDirectionEnum_o* __this, const MethodInfo* method);
// 0x181fef3f0

void CustomLogic_CustomLogicSliderDirectionEnum___ctor
               (CustomLogic_CustomLogicSliderDirectionEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346064 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_184346064 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicSliderDirectionEnum$$get_Horizontal
// il2cpp: int32_t CustomLogic_CustomLogicSliderDirectionEnum__get_Horizontal (const MethodInfo* method);
// 0x18059b2e0

int32_t
CustomLogic_CustomLogicSliderDirectionEnum__get_Horizontal(MethodInfo* method)

{
  return (Unity_Collections_AllocatorManager_TryFunction_o *)0x0;
}


// CustomLogic.CustomLogicSliderDirectionEnum$$get_Vertical
// il2cpp: int32_t CustomLogic_CustomLogicSliderDirectionEnum__get_Vertical (const MethodInfo* method);
// 0x180564040

int32_t
CustomLogic_CustomLogicSliderDirectionEnum__get_Vertical(MethodInfo* method)

{
  return 1;
}


// CustomLogic.CustomLogicSliderDirectionEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicSliderDirectionEnum__get_ClassName (CustomLogic_CustomLogicSliderDirectionEnum_o* __this, const MethodInfo* method);
// 0x181fef440

System_String_o *
CustomLogic_CustomLogicSliderDirectionEnum__get_ClassName
          (CustomLogic_CustomLogicSliderDirectionEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346065 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"SliderDirectionEnum");
    Il2CppMethodInitialized_184346065 = '\x01';
  }
  return "SliderDirectionEnum";
}


// CustomLogic.CustomLogicSliderDirectionEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicSliderDirectionEnum__get_IsAbstract (CustomLogic_CustomLogicSliderDirectionEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicSliderDirectionEnum__get_IsAbstract(CustomLogic_CustomLogicSliderDirectionEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicSliderDirectionEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicSliderDirectionEnum__get_IsStatic (CustomLogic_CustomLogicSliderDirectionEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicSliderDirectionEnum__get_IsStatic(CustomLogic_CustomLogicSliderDirectionEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicSliderDirectionEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicSliderDirectionEnum__get_InheritBaseMembers (CustomLogic_CustomLogicSliderDirectionEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicSliderDirectionEnum__get_InheritBaseMembers(CustomLogic_CustomLogicSliderDirectionEnum_o* __this, MethodInfo* method)

{
  return true;
}


