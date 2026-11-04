// Type: CustomLogic.CustomLogicLineTextureModeEnum
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicLineTextureModeEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicLineTextureModeEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicLineTextureModeEnum_o* CustomLogic_CustomLogicLineTextureModeEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x181ff0c00

CustomLogic_CustomLogicLineTextureModeEnum_o *
CustomLogic_CustomLogicLineTextureModeEnum_Factory__CreateInstance
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
  
  if (Il2CppMethodInitialized_184345ea8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLineTextureModeEnum);
    Il2CppMethodInitialized_184345ea8 = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineTextureModeEnum);
      if (Il2CppMethodInitialized_184345ea6 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_184345ea6 = '\x01';
      }
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicLineTextureModeEnum_o *)__this;
    }
    NullCheck(args);
    local_res8[0] = (int32_t)args->max_length;
    pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicLineTextureModeEnum constructor found that takes ");
    pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicLineTextureModeEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineTextureModeEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicLineTextureModeEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181fd9840

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicLineTextureModeEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum__o *__this_00;
  System_String_o *pSVar2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  MethodInfo *pMVar3;
  
  if (Il2CppMethodInitialized_184345ea9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLineTextureModeEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"Tile");
    il2cpp_codegen_initialize_runtime_metadata(&"RepeatPerSegment");
    il2cpp_codegen_initialize_runtime_metadata(&"DistributePerSegment");
    Il2CppMethodInitialized_184345ea9 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Stretch",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicLineTextureModeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineTextureModeEnum_Bindings);
    }
    if (Il2CppMethodInitialized_184345eaa == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicLineTextureModeEnum_Bindings___CreatePropertyBinding__Stretch_g____getter
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLineTextureModeEnum_object);
      Il2CppMethodInitialized_184345eaa = '\x01';
    }
    __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineTextureModeEnum_object);
    pMVar3 = 
    MethodInfo_CustomLogic_CustomLogicLineTextureModeEnum_Bindings___CreatePropertyBinding__Stretch_g____getter
    ;
  }
  else {
    bVar1 = System_String__op_Equality(name,"Tile",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicLineTextureModeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineTextureModeEnum_Bindings);
      }
      if (Il2CppMethodInitialized_184345eab == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicLineTextureModeEnum_Bindings___CreatePropertyBinding__Tile_g____getter_3
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicLineTextureModeEnum_object);
        Il2CppMethodInitialized_184345eab = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineTextureModeEnum_object);
      pMVar3 = 
      MethodInfo_CustomLogic_CustomLogicLineTextureModeEnum_Bindings___CreatePropertyBinding__Tile_g____getter_3
      ;
    }
    else {
      bVar1 = System_String__op_Equality(name,"DistributePerSegment",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicLineTextureModeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineTextureModeEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345eac == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicLineTextureModeEnum_Bindings___CreatePropertyBinding__DistributePerSegmen
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicLineTextureModeEnum_object);
          Il2CppMethodInitialized_184345eac = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineTextureModeEnum_object);
        pMVar3 = 
        MethodInfo_CustomLogic_CustomLogicLineTextureModeEnum_Bindings___CreatePropertyBinding__DistributePerSegmen
        ;
      }
      else {
        bVar1 = System_String__op_Equality(name,"RepeatPerSegment",(MethodInfo *)0x0);
        if (!bVar1) {
          pSVar2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicLineTextureModeEnum not found");
          str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
          pSVar2 = System_String__Concat_1969b70(str0,name,pSVar2,(MethodInfo *)0x0);
          klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
          __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
          System_Exception___ctor_1b6abf0(__this_01,pSVar2,(MethodInfo *)0x0);
          pMVar3 = il2cpp_codegen_get_runtime_metadata
                             (&
                              MethodInfo_CustomLogic_CustomLogicLineTextureModeEnum_Bindings_CreateMemberBinding
                             );
          il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,pMVar3);
        }
        if ((TypeInfo_CustomLogic_CustomLogicLineTextureModeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineTextureModeEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345ead == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicLineTextureModeEnum_Bindings___CreatePropertyBinding__RepeatPerSegment_g
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicLineTextureModeEnum_object);
          Il2CppMethodInitialized_184345ead = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineTextureModeEnum_object);
        pMVar3 = 
        MethodInfo_CustomLogic_CustomLogicLineTextureModeEnum_Bindings___CreatePropertyBinding__RepeatPerSegment_g
        ;
      }
    }
  }
  System_Func_object__object____ctor
            (__this,(Il2CppObject *)0x0,(intptr_t)pMVar3,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum_ctor);
  return (CustomLogic_ICLMemberBinding_o *)__this_00;
}


// CustomLogic.CustomLogicLineTextureModeEnum.Bindings$$__CreatePropertyBinding__Stretch
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum__o* CustomLogic_CustomLogicLineTextureModeEnum_Bindings____CreatePropertyBinding__Stretch (const MethodInfo* method);
// 0x181fe7bc0

CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum__o *
CustomLogic_CustomLogicLineTextureModeEnum_Bindings____CreatePropertyBinding__Stretch(MethodInfo *method)

{
  System_Func_CustomLogicLineTextureModeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345eaa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineTextureModeEnum_Bindings___CreatePropertyBinding__Stretch_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLineTextureModeEnum_object);
    Il2CppMethodInitialized_184345eaa = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineTextureModeEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineTextureModeEnum_Bindings___CreatePropertyBinding__Stretch_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLineTextureModeEnum.Bindings$$__CreatePropertyBinding__Tile
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum__o* CustomLogic_CustomLogicLineTextureModeEnum_Bindings____CreatePropertyBinding__Tile (const MethodInfo* method);
// 0x181fe7ee0

CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum__o *
CustomLogic_CustomLogicLineTextureModeEnum_Bindings____CreatePropertyBinding__Tile(MethodInfo *method)

{
  System_Func_CustomLogicLineTextureModeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345eab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineTextureModeEnum_Bindings___CreatePropertyBinding__Tile_g____getter_3
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLineTextureModeEnum_object);
    Il2CppMethodInitialized_184345eab = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineTextureModeEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineTextureModeEnum_Bindings___CreatePropertyBinding__Tile_g____getter_3
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLineTextureModeEnum.Bindings$$__CreatePropertyBinding__DistributePerSegment
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum__o* CustomLogic_CustomLogicLineTextureModeEnum_Bindings____CreatePropertyBinding__DistributePerSegment (const MethodInfo* method);
// 0x181fe1400

CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum__o *
CustomLogic_CustomLogicLineTextureModeEnum_Bindings____CreatePropertyBinding__DistributePerSegment
          (MethodInfo *method)

{
  System_Func_CustomLogicLineTextureModeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345eac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineTextureModeEnum_Bindings___CreatePropertyBinding__DistributePerSegmen
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLineTextureModeEnum_object);
    Il2CppMethodInitialized_184345eac = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineTextureModeEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineTextureModeEnum_Bindings___CreatePropertyBinding__DistributePerSegmen
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLineTextureModeEnum.Bindings$$__CreatePropertyBinding__RepeatPerSegment
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum__o* CustomLogic_CustomLogicLineTextureModeEnum_Bindings____CreatePropertyBinding__RepeatPerSegment (const MethodInfo* method);
// 0x181fe6860

CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum__o *
CustomLogic_CustomLogicLineTextureModeEnum_Bindings____CreatePropertyBinding__RepeatPerSegment
          (MethodInfo *method)

{
  System_Func_CustomLogicLineTextureModeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ead == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineTextureModeEnum_Bindings___CreatePropertyBinding__RepeatPerSegment_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLineTextureModeEnum_object);
    Il2CppMethodInitialized_184345ead = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineTextureModeEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineTextureModeEnum_Bindings___CreatePropertyBinding__RepeatPerSegment_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLineTextureModeEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicLineTextureModeEnum_Bindings___cctor (const MethodInfo* method);
// 0x181feb9f0

void CustomLogic_CustomLogicLineTextureModeEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_184345eae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLineTextureModeEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"Tile");
    il2cpp_codegen_initialize_runtime_metadata(&"RepeatPerSegment");
    il2cpp_codegen_initialize_runtime_metadata(&"DistributePerSegment");
    Il2CppMethodInitialized_184345eae = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Stretch",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Tile",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"DistributePerSegment",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RepeatPerSegment",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicLineTextureModeEnum_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicLineTextureModeEnum_Bindings->static_fields->MemberNames,
               __this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLineTextureModeEnum.Bindings$$<__CreatePropertyBinding__Stretch>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineTextureModeEnum_Bindings_____CreatePropertyBinding__Stretch_g____getter_2_0 (CustomLogic_CustomLogicLineTextureModeEnum_o* __i, const MethodInfo* method);
// 0x181ef2260

Il2CppObject*
CustomLogic_CustomLogicLineTextureModeEnum_Bindings_____CreatePropertyBinding__Stretch_g____getter_2_0(CustomLogic_CustomLogicLineTextureModeEnum_o* __i, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 0;
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicLineTextureModeEnum.Bindings$$<__CreatePropertyBinding__Tile>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineTextureModeEnum_Bindings_____CreatePropertyBinding__Tile_g____getter_3_0 (CustomLogic_CustomLogicLineTextureModeEnum_o* __i, const MethodInfo* method);
// 0x181ef2200

Il2CppObject*
CustomLogic_CustomLogicLineTextureModeEnum_Bindings_____CreatePropertyBinding__Tile_g____getter_3_0(CustomLogic_CustomLogicLineTextureModeEnum_o* __i, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 1;
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicLineTextureModeEnum.Bindings$$<__CreatePropertyBinding__DistributePerSegment>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineTextureModeEnum_Bindings_____CreatePropertyBinding__DistributePerSegment_g____getter_4_0 (CustomLogic_CustomLogicLineTextureModeEnum_o* __i, const MethodInfo* method);
// 0x181ef2230

Il2CppObject*
CustomLogic_CustomLogicLineTextureModeEnum_Bindings_____CreatePropertyBinding__DistributePerSegment_g____getter_4_0(CustomLogic_CustomLogicLineTextureModeEnum_o* __i, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 2;
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicLineTextureModeEnum.Bindings$$<__CreatePropertyBinding__RepeatPerSegment>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineTextureModeEnum_Bindings_____CreatePropertyBinding__RepeatPerSegment_g____getter_5_0 (CustomLogic_CustomLogicLineTextureModeEnum_o* __i, const MethodInfo* method);
// 0x181f8d5d0

Il2CppObject*
CustomLogic_CustomLogicLineTextureModeEnum_Bindings_____CreatePropertyBinding__RepeatPerSegment_g____getter_5_0(CustomLogic_CustomLogicLineTextureModeEnum_o* __i, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 3;
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicLineTextureModeEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicLineTextureModeEnum___ctor (CustomLogic_CustomLogicLineTextureModeEnum_o* __this, const MethodInfo* method);
// 0x181fee0d0

void CustomLogic_CustomLogicLineTextureModeEnum___ctor
               (CustomLogic_CustomLogicLineTextureModeEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345ea6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_184345ea6 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicLineTextureModeEnum$$get_Stretch
// il2cpp: int32_t CustomLogic_CustomLogicLineTextureModeEnum__get_Stretch (const MethodInfo* method);
// 0x18059b2e0

int32_t
CustomLogic_CustomLogicLineTextureModeEnum__get_Stretch(MethodInfo* method)

{
  return (Unity_Collections_AllocatorManager_TryFunction_o *)0x0;
}


// CustomLogic.CustomLogicLineTextureModeEnum$$get_Tile
// il2cpp: int32_t CustomLogic_CustomLogicLineTextureModeEnum__get_Tile (const MethodInfo* method);
// 0x180564040

int32_t
CustomLogic_CustomLogicLineTextureModeEnum__get_Tile(MethodInfo* method)

{
  return 1;
}


// CustomLogic.CustomLogicLineTextureModeEnum$$get_DistributePerSegment
// il2cpp: int32_t CustomLogic_CustomLogicLineTextureModeEnum__get_DistributePerSegment (const MethodInfo* method);
// 0x180846f80

int32_t
CustomLogic_CustomLogicLineTextureModeEnum__get_DistributePerSegment(MethodInfo* method)

{
  return 2;
}


// CustomLogic.CustomLogicLineTextureModeEnum$$get_RepeatPerSegment
// il2cpp: int32_t CustomLogic_CustomLogicLineTextureModeEnum__get_RepeatPerSegment (const MethodInfo* method);
// 0x180565fb0

int32_t
CustomLogic_CustomLogicLineTextureModeEnum__get_RepeatPerSegment(MethodInfo* method)

{
  return 3;
}


// CustomLogic.CustomLogicLineTextureModeEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicLineTextureModeEnum__get_ClassName (CustomLogic_CustomLogicLineTextureModeEnum_o* __this, const MethodInfo* method);
// 0x181fee120

System_String_o *
CustomLogic_CustomLogicLineTextureModeEnum__get_ClassName
          (CustomLogic_CustomLogicLineTextureModeEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345ea7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"LineTextureModeEnum");
    Il2CppMethodInitialized_184345ea7 = '\x01';
  }
  return "LineTextureModeEnum";
}


// CustomLogic.CustomLogicLineTextureModeEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicLineTextureModeEnum__get_IsAbstract (CustomLogic_CustomLogicLineTextureModeEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicLineTextureModeEnum__get_IsAbstract(CustomLogic_CustomLogicLineTextureModeEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicLineTextureModeEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicLineTextureModeEnum__get_IsStatic (CustomLogic_CustomLogicLineTextureModeEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicLineTextureModeEnum__get_IsStatic(CustomLogic_CustomLogicLineTextureModeEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicLineTextureModeEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicLineTextureModeEnum__get_InheritBaseMembers (CustomLogic_CustomLogicLineTextureModeEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicLineTextureModeEnum__get_InheritBaseMembers(CustomLogic_CustomLogicLineTextureModeEnum_o* __this, MethodInfo* method)

{
  return true;
}


