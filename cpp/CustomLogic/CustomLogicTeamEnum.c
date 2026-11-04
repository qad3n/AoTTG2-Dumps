// Type: CustomLogic.CustomLogicTeamEnum
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicTeamEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicTeamEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicTeamEnum_o* CustomLogic_CustomLogicTeamEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x182016b00

CustomLogic_CustomLogicTeamEnum_o *
CustomLogic_CustomLogicTeamEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_184346104 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTeamEnum);
    Il2CppMethodInitialized_184346104 = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTeamEnum);
      if (Il2CppMethodInitialized_1843460fd == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_1843460fd = '\x01';
      }
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicTeamEnum_o *)__this;
    }
    NullCheck(args);
    local_res8[0] = (int32_t)args->max_length;
    pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicTeamEnum constructor found that takes ");
    pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicTeamEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTeamEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicTeamEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181ff4a80

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicTeamEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTeamEnum__o *__this_00;
  System_String_o *pSVar2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  MethodInfo *pMVar3;
  
  if (Il2CppMethodInitialized_184346105 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTeamEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Human");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"Red");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan");
    il2cpp_codegen_initialize_runtime_metadata(&"Blue");
    Il2CppMethodInitialized_184346105 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"None",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicTeamEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTeamEnum_Bindings);
    }
    if (Il2CppMethodInitialized_184346106 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicTeamEnum_Bindings___CreatePropertyBinding__None_g____getter_2_0
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTeamEnum_ctor);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTeamEnum);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTeamEnum_object);
      Il2CppMethodInitialized_184346106 = '\x01';
    }
    __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTeamEnum_object);
    pMVar3 = MethodInfo_CustomLogic_CustomLogicTeamEnum_Bindings___CreatePropertyBinding__None_g____getter_2_0
    ;
  }
  else {
    bVar1 = System_String__op_Equality(name,"Blue",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicTeamEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTeamEnum_Bindings);
      }
      if (Il2CppMethodInitialized_184346107 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicTeamEnum_Bindings___CreatePropertyBinding__Blue_g____getter_3_0
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTeamEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTeamEnum);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTeamEnum_object);
        Il2CppMethodInitialized_184346107 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTeamEnum_object);
      pMVar3 = 
      MethodInfo_CustomLogic_CustomLogicTeamEnum_Bindings___CreatePropertyBinding__Blue_g____getter_3_0;
    }
    else {
      bVar1 = System_String__op_Equality(name,"Red",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicTeamEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTeamEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184346108 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicTeamEnum_Bindings___CreatePropertyBinding__Red_g____getter_4_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTeamEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTeamEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTeamEnum_object);
          Il2CppMethodInitialized_184346108 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTeamEnum_object);
        pMVar3 = 
        MethodInfo_CustomLogic_CustomLogicTeamEnum_Bindings___CreatePropertyBinding__Red_g____getter_4_0;
      }
      else {
        bVar1 = System_String__op_Equality(name,"Titan",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicTeamEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTeamEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184346109 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicTeamEnum_Bindings___CreatePropertyBinding__Titan_g____getter_5_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTeamEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTeamEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTeamEnum_object);
            Il2CppMethodInitialized_184346109 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTeamEnum_object);
          pMVar3 = 
          MethodInfo_CustomLogic_CustomLogicTeamEnum_Bindings___CreatePropertyBinding__Titan_g____getter_5_0;
        }
        else {
          bVar1 = System_String__op_Equality(name,"Human",(MethodInfo *)0x0);
          if (!bVar1) {
            pSVar2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicTeamEnum not found");
            str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
            pSVar2 = System_String__Concat_1969b70(str0,name,pSVar2,(MethodInfo *)0x0);
            klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
            __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
            System_Exception___ctor_1b6abf0(__this_01,pSVar2,(MethodInfo *)0x0);
            pMVar3 = il2cpp_codegen_get_runtime_metadata
                               (&MethodInfo_CustomLogic_CustomLogicTeamEnum_Bindings_CreateMemberBinding);
            il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,pMVar3);
          }
          if ((TypeInfo_CustomLogic_CustomLogicTeamEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTeamEnum_Bindings);
          }
          if (Il2CppMethodInitialized_18434610a == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicTeamEnum_Bindings___CreatePropertyBinding__Human_g____getter_6_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTeamEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTeamEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTeamEnum_object);
            Il2CppMethodInitialized_18434610a = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTeamEnum_object);
          pMVar3 = 
          MethodInfo_CustomLogic_CustomLogicTeamEnum_Bindings___CreatePropertyBinding__Human_g____getter_6_0;
        }
      }
    }
  }
  System_Func_object__object____ctor
            (__this,(Il2CppObject *)0x0,(intptr_t)pMVar3,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTeamEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTeamEnum_ctor);
  return (CustomLogic_ICLMemberBinding_o *)__this_00;
}


// CustomLogic.CustomLogicTeamEnum.Bindings$$__CreatePropertyBinding__None
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTeamEnum__o* CustomLogic_CustomLogicTeamEnum_Bindings____CreatePropertyBinding__None (const MethodInfo* method);
// 0x182006750

CustomLogic_CLPropertyBinding_CustomLogicTeamEnum__o *
CustomLogic_CustomLogicTeamEnum_Bindings____CreatePropertyBinding__None(MethodInfo *method)

{
  System_Func_CustomLogicTeamEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTeamEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346106 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTeamEnum_Bindings___CreatePropertyBinding__None_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTeamEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTeamEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTeamEnum_object);
    Il2CppMethodInitialized_184346106 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTeamEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTeamEnum_Bindings___CreatePropertyBinding__None_g____getter_2_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTeamEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTeamEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTeamEnum.Bindings$$__CreatePropertyBinding__Blue
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTeamEnum__o* CustomLogic_CustomLogicTeamEnum_Bindings____CreatePropertyBinding__Blue (const MethodInfo* method);
// 0x182002f10

CustomLogic_CLPropertyBinding_CustomLogicTeamEnum__o *
CustomLogic_CustomLogicTeamEnum_Bindings____CreatePropertyBinding__Blue(MethodInfo *method)

{
  System_Func_CustomLogicTeamEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTeamEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346107 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTeamEnum_Bindings___CreatePropertyBinding__Blue_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTeamEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTeamEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTeamEnum_object);
    Il2CppMethodInitialized_184346107 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTeamEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTeamEnum_Bindings___CreatePropertyBinding__Blue_g____getter_3_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTeamEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTeamEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTeamEnum.Bindings$$__CreatePropertyBinding__Red
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTeamEnum__o* CustomLogic_CustomLogicTeamEnum_Bindings____CreatePropertyBinding__Red (const MethodInfo* method);
// 0x182006c50

CustomLogic_CLPropertyBinding_CustomLogicTeamEnum__o *
CustomLogic_CustomLogicTeamEnum_Bindings____CreatePropertyBinding__Red(MethodInfo *method)

{
  System_Func_CustomLogicTeamEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTeamEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346108 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTeamEnum_Bindings___CreatePropertyBinding__Red_g____getter_4_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTeamEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTeamEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTeamEnum_object);
    Il2CppMethodInitialized_184346108 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTeamEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTeamEnum_Bindings___CreatePropertyBinding__Red_g____getter_4_0,
             (MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTeamEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTeamEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTeamEnum.Bindings$$__CreatePropertyBinding__Titan
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTeamEnum__o* CustomLogic_CustomLogicTeamEnum_Bindings____CreatePropertyBinding__Titan (const MethodInfo* method);
// 0x1820080a0

CustomLogic_CLPropertyBinding_CustomLogicTeamEnum__o *
CustomLogic_CustomLogicTeamEnum_Bindings____CreatePropertyBinding__Titan(MethodInfo *method)

{
  System_Func_CustomLogicTeamEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTeamEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346109 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTeamEnum_Bindings___CreatePropertyBinding__Titan_g____getter_5_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTeamEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTeamEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTeamEnum_object);
    Il2CppMethodInitialized_184346109 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTeamEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTeamEnum_Bindings___CreatePropertyBinding__Titan_g____getter_5_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTeamEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTeamEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTeamEnum.Bindings$$__CreatePropertyBinding__Human
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTeamEnum__o* CustomLogic_CustomLogicTeamEnum_Bindings____CreatePropertyBinding__Human (const MethodInfo* method);
// 0x182005210

CustomLogic_CLPropertyBinding_CustomLogicTeamEnum__o *
CustomLogic_CustomLogicTeamEnum_Bindings____CreatePropertyBinding__Human(MethodInfo *method)

{
  System_Func_CustomLogicTeamEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTeamEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_18434610a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTeamEnum_Bindings___CreatePropertyBinding__Human_g____getter_6_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTeamEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTeamEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTeamEnum_object);
    Il2CppMethodInitialized_18434610a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTeamEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTeamEnum_Bindings___CreatePropertyBinding__Human_g____getter_6_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTeamEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTeamEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTeamEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicTeamEnum_Bindings___cctor (const MethodInfo* method);
// 0x182009d90

void CustomLogic_CustomLogicTeamEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_18434610b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTeamEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Human");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"Red");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan");
    il2cpp_codegen_initialize_runtime_metadata(&"Blue");
    Il2CppMethodInitialized_18434610b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"None",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Blue",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Red",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Titan",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Human",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicTeamEnum_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicTeamEnum_Bindings->static_fields->MemberNames,__this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTeamEnum.Bindings$$<__CreatePropertyBinding__None>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTeamEnum_Bindings_____CreatePropertyBinding__None_g____getter_2_0 (CustomLogic_CustomLogicTeamEnum_o* __i, const MethodInfo* method);
// 0x181ffe0d0

Il2CppObject *
CustomLogic_CustomLogicTeamEnum_Bindings_____CreatePropertyBinding__None_g____getter_2_0
          (CustomLogic_CustomLogicTeamEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346364 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    Il2CppMethodInitialized_184346364 = '\x01';
  }
  if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
  }
  return (Il2CppObject *)TypeInfo_GameManagers_TeamInfo->static_fields->None;
}


// CustomLogic.CustomLogicTeamEnum.Bindings$$<__CreatePropertyBinding__Blue>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTeamEnum_Bindings_____CreatePropertyBinding__Blue_g____getter_3_0 (CustomLogic_CustomLogicTeamEnum_o* __i, const MethodInfo* method);
// 0x181ffc6d0

Il2CppObject *
CustomLogic_CustomLogicTeamEnum_Bindings_____CreatePropertyBinding__Blue_g____getter_3_0
          (CustomLogic_CustomLogicTeamEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346365 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    Il2CppMethodInitialized_184346365 = '\x01';
  }
  if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
  }
  return (Il2CppObject *)TypeInfo_GameManagers_TeamInfo->static_fields->Blue;
}


// CustomLogic.CustomLogicTeamEnum.Bindings$$<__CreatePropertyBinding__Red>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTeamEnum_Bindings_____CreatePropertyBinding__Red_g____getter_4_0 (CustomLogic_CustomLogicTeamEnum_o* __i, const MethodInfo* method);
// 0x181ffe260

Il2CppObject *
CustomLogic_CustomLogicTeamEnum_Bindings_____CreatePropertyBinding__Red_g____getter_4_0
          (CustomLogic_CustomLogicTeamEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346366 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    Il2CppMethodInitialized_184346366 = '\x01';
  }
  if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
  }
  return (Il2CppObject *)TypeInfo_GameManagers_TeamInfo->static_fields->Red;
}


// CustomLogic.CustomLogicTeamEnum.Bindings$$<__CreatePropertyBinding__Titan>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTeamEnum_Bindings_____CreatePropertyBinding__Titan_g____getter_5_0 (CustomLogic_CustomLogicTeamEnum_o* __i, const MethodInfo* method);
// 0x181ffed30

Il2CppObject *
CustomLogic_CustomLogicTeamEnum_Bindings_____CreatePropertyBinding__Titan_g____getter_5_0
          (CustomLogic_CustomLogicTeamEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346367 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    Il2CppMethodInitialized_184346367 = '\x01';
  }
  if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
  }
  return (Il2CppObject *)TypeInfo_GameManagers_TeamInfo->static_fields->Titan;
}


// CustomLogic.CustomLogicTeamEnum.Bindings$$<__CreatePropertyBinding__Human>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTeamEnum_Bindings_____CreatePropertyBinding__Human_g____getter_6_0 (CustomLogic_CustomLogicTeamEnum_o* __i, const MethodInfo* method);
// 0x181ffd910

Il2CppObject *
CustomLogic_CustomLogicTeamEnum_Bindings_____CreatePropertyBinding__Human_g____getter_6_0
          (CustomLogic_CustomLogicTeamEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346368 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    Il2CppMethodInitialized_184346368 = '\x01';
  }
  if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
  }
  return (Il2CppObject *)TypeInfo_GameManagers_TeamInfo->static_fields->Human;
}


// CustomLogic.CustomLogicTeamEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicTeamEnum___ctor (CustomLogic_CustomLogicTeamEnum_o* __this, const MethodInfo* method);
// 0x182014eb0

void CustomLogic_CustomLogicTeamEnum___ctor(CustomLogic_CustomLogicTeamEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843460fd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_1843460fd = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicTeamEnum$$get_None
// il2cpp: System_String_o* CustomLogic_CustomLogicTeamEnum__get_None (const MethodInfo* method);
// 0x182014fd0

System_String_o * CustomLogic_CustomLogicTeamEnum__get_None(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843460fe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    Il2CppMethodInitialized_1843460fe = '\x01';
  }
  if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
  }
  return TypeInfo_GameManagers_TeamInfo->static_fields->None;
}


// CustomLogic.CustomLogicTeamEnum$$get_Blue
// il2cpp: System_String_o* CustomLogic_CustomLogicTeamEnum__get_Blue (const MethodInfo* method);
// 0x182014f00

System_String_o * CustomLogic_CustomLogicTeamEnum__get_Blue(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843460ff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    Il2CppMethodInitialized_1843460ff = '\x01';
  }
  if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
  }
  return TypeInfo_GameManagers_TeamInfo->static_fields->Blue;
}


// CustomLogic.CustomLogicTeamEnum$$get_Red
// il2cpp: System_String_o* CustomLogic_CustomLogicTeamEnum__get_Red (const MethodInfo* method);
// 0x182015020

System_String_o * CustomLogic_CustomLogicTeamEnum__get_Red(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346100 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    Il2CppMethodInitialized_184346100 = '\x01';
  }
  if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
  }
  return TypeInfo_GameManagers_TeamInfo->static_fields->Red;
}


// CustomLogic.CustomLogicTeamEnum$$get_Titan
// il2cpp: System_String_o* CustomLogic_CustomLogicTeamEnum__get_Titan (const MethodInfo* method);
// 0x182015070

System_String_o * CustomLogic_CustomLogicTeamEnum__get_Titan(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346101 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    Il2CppMethodInitialized_184346101 = '\x01';
  }
  if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
  }
  return TypeInfo_GameManagers_TeamInfo->static_fields->Titan;
}


// CustomLogic.CustomLogicTeamEnum$$get_Human
// il2cpp: System_String_o* CustomLogic_CustomLogicTeamEnum__get_Human (const MethodInfo* method);
// 0x182014f80

System_String_o * CustomLogic_CustomLogicTeamEnum__get_Human(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346102 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    Il2CppMethodInitialized_184346102 = '\x01';
  }
  if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
  }
  return TypeInfo_GameManagers_TeamInfo->static_fields->Human;
}


// CustomLogic.CustomLogicTeamEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicTeamEnum__get_ClassName (CustomLogic_CustomLogicTeamEnum_o* __this, const MethodInfo* method);
// 0x182014f50

System_String_o *
CustomLogic_CustomLogicTeamEnum__get_ClassName(CustomLogic_CustomLogicTeamEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346103 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"TeamEnum");
    Il2CppMethodInitialized_184346103 = '\x01';
  }
  return "TeamEnum";
}


// CustomLogic.CustomLogicTeamEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicTeamEnum__get_IsAbstract (CustomLogic_CustomLogicTeamEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicTeamEnum__get_IsAbstract(CustomLogic_CustomLogicTeamEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicTeamEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicTeamEnum__get_IsStatic (CustomLogic_CustomLogicTeamEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicTeamEnum__get_IsStatic(CustomLogic_CustomLogicTeamEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicTeamEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicTeamEnum__get_InheritBaseMembers (CustomLogic_CustomLogicTeamEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicTeamEnum__get_InheritBaseMembers(CustomLogic_CustomLogicTeamEnum_o* __this, MethodInfo* method)

{
  return true;
}


