// Type: CustomLogic.CustomLogicLineTextureModeEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicLineTextureModeEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicLineTextureModeEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicLineTextureModeEnum_o* CustomLogic_CustomLogicLineTextureModeEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5a94d40

CustomLogic_CustomLogicLineTextureModeEnum_o *
CustomLogic_CustomLogicLineTextureModeEnum_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_0754681c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLineTextureModeEnum);
    Il2CppMethodInitialized_0754681c = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicLineTextureModeEnum constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicLineTextureModeEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = (CustomLogic_BuiltinClassInstance_o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineTextureModeEnum);
  if (Il2CppMethodInitialized_0754681a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_0754681a = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
  return (CustomLogic_CustomLogicLineTextureModeEnum_o *)__this;
}


// CustomLogic.CustomLogicLineTextureModeEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicLineTextureModeEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5a94e60

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicLineTextureModeEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum__o *pCVar2;
  System_String_o *pSVar3;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicLineTextureModeEnum_Bindings_c *pCVar4;
  
  if (Il2CppMethodInitialized_0754681d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLineTextureModeEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"Tile");
    il2cpp_codegen_initialize_runtime_metadata(&"RepeatPerSegment");
    il2cpp_codegen_initialize_runtime_metadata(&"DistributePerSegment");
    Il2CppMethodInitialized_0754681d = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Stretch",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicLineTextureModeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicLineTextureModeEnum_Bindings;
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineTextureModeEnum_Bindings);
      pCVar2 = CustomLogic_CustomLogicLineTextureModeEnum_Bindings____CreatePropertyBinding__Stretch
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicLineTextureModeEnum_Bindings____CreatePropertyBinding__Stretch
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicLineTextureModeEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"Tile",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicLineTextureModeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicLineTextureModeEnum_Bindings;
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineTextureModeEnum_Bindings);
      pCVar2 = CustomLogic_CustomLogicLineTextureModeEnum_Bindings____CreatePropertyBinding__Tile
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicLineTextureModeEnum_Bindings____CreatePropertyBinding__Tile
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicLineTextureModeEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"DistributePerSegment",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicLineTextureModeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicLineTextureModeEnum_Bindings;
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineTextureModeEnum_Bindings);
      pCVar2 = CustomLogic_CustomLogicLineTextureModeEnum_Bindings____CreatePropertyBinding__DistributePerSegment
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicLineTextureModeEnum_Bindings____CreatePropertyBinding__DistributePerSegment
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicLineTextureModeEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"RepeatPerSegment",(MethodInfo *)0x0);
  if (!bVar1) {
    pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
    str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicLineTextureModeEnum not found");
    pSVar3 = System_String__Concat_5301f10(pSVar3,name,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
    System_Exception___ctor_54fa440(__this,pSVar3,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicLineTextureModeEnum_Bindings_CreateMemberBinding);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
  }
  if ((TypeInfo_CustomLogic_CustomLogicLineTextureModeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
    pCVar4 = TypeInfo_CustomLogic_CustomLogicLineTextureModeEnum_Bindings;
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineTextureModeEnum_Bindings);
    pCVar2 = CustomLogic_CustomLogicLineTextureModeEnum_Bindings____CreatePropertyBinding__RepeatPerSegment
                       ((MethodInfo *)pCVar4);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  pCVar2 = CustomLogic_CustomLogicLineTextureModeEnum_Bindings____CreatePropertyBinding__RepeatPerSegment
                     ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicLineTextureModeEnum_Bindings);
  return (CustomLogic_ICLMemberBinding_o *)pCVar2;
}


// CustomLogic.CustomLogicLineTextureModeEnum.Bindings$$__CreatePropertyBinding__Stretch
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum__o* CustomLogic_CustomLogicLineTextureModeEnum_Bindings____CreatePropertyBinding__Stretch (const MethodInfo* method);
// 0x5a95040

CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum__o *
CustomLogic_CustomLogicLineTextureModeEnum_Bindings____CreatePropertyBinding__Stretch(MethodInfo *method)

{
  System_Func_CustomLogicLineTextureModeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754681e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineTextureModeEnum_Bindings___CreatePropertyBinding__Stretch_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLineTextureModeEnum_object);
    Il2CppMethodInitialized_0754681e = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineTextureModeEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineTextureModeEnum_Bindings___CreatePropertyBinding__Stretch_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLineTextureModeEnum.Bindings$$__CreatePropertyBinding__Tile
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum__o* CustomLogic_CustomLogicLineTextureModeEnum_Bindings____CreatePropertyBinding__Tile (const MethodInfo* method);
// 0x5a950e0

CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum__o *
CustomLogic_CustomLogicLineTextureModeEnum_Bindings____CreatePropertyBinding__Tile(MethodInfo *method)

{
  System_Func_CustomLogicLineTextureModeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754681f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineTextureModeEnum_Bindings___CreatePropertyBinding__Tile_g____getter_3
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLineTextureModeEnum_object);
    Il2CppMethodInitialized_0754681f = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineTextureModeEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineTextureModeEnum_Bindings___CreatePropertyBinding__Tile_g____getter_3
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLineTextureModeEnum.Bindings$$__CreatePropertyBinding__DistributePerSegment
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum__o* CustomLogic_CustomLogicLineTextureModeEnum_Bindings____CreatePropertyBinding__DistributePerSegment (const MethodInfo* method);
// 0x5a95180

CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum__o *
CustomLogic_CustomLogicLineTextureModeEnum_Bindings____CreatePropertyBinding__DistributePerSegment
          (MethodInfo *method)

{
  System_Func_CustomLogicLineTextureModeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546820 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineTextureModeEnum_Bindings___CreatePropertyBinding__DistributePerSegmen
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLineTextureModeEnum_object);
    Il2CppMethodInitialized_07546820 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineTextureModeEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineTextureModeEnum_Bindings___CreatePropertyBinding__DistributePerSegmen
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLineTextureModeEnum.Bindings$$__CreatePropertyBinding__RepeatPerSegment
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum__o* CustomLogic_CustomLogicLineTextureModeEnum_Bindings____CreatePropertyBinding__RepeatPerSegment (const MethodInfo* method);
// 0x5a95220

CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum__o *
CustomLogic_CustomLogicLineTextureModeEnum_Bindings____CreatePropertyBinding__RepeatPerSegment
          (MethodInfo *method)

{
  System_Func_CustomLogicLineTextureModeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546821 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineTextureModeEnum_Bindings___CreatePropertyBinding__RepeatPerSegment_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLineTextureModeEnum_object);
    Il2CppMethodInitialized_07546821 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineTextureModeEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineTextureModeEnum_Bindings___CreatePropertyBinding__RepeatPerSegment_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLineTextureModeEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicLineTextureModeEnum_Bindings___cctor (const MethodInfo* method);
// 0x5a952c0

void CustomLogic_CustomLogicLineTextureModeEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07546822 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLineTextureModeEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"Tile");
    il2cpp_codegen_initialize_runtime_metadata(&"RepeatPerSegment");
    il2cpp_codegen_initialize_runtime_metadata(&"DistributePerSegment");
    Il2CppMethodInitialized_07546822 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Stretch",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Tile",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"DistributePerSegment",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RepeatPerSegment",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicLineTextureModeEnum_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicLineTextureModeEnum_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicLineTextureModeEnum.Bindings$$<__CreatePropertyBinding__Stretch>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineTextureModeEnum_Bindings_____CreatePropertyBinding__Stretch_g____getter_2_0 (CustomLogic_CustomLogicLineTextureModeEnum_o* __i, const MethodInfo* method);
// 0x5a953f0

Il2CppObject *
CustomLogic_CustomLogicLineTextureModeEnum_Bindings_____CreatePropertyBinding__Stretch_g____getter_2_0
          (CustomLogic_CustomLogicLineTextureModeEnum_o *__i,MethodInfo *method)

{
  uint in_EAX;
  Il2CppObject *pIVar1;
  undefined8 uStack_8;
  
  uStack_8 = (ulong)in_EAX;
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,(void *)((long)&uStack_8 + 4));
  return pIVar1;
}


// CustomLogic.CustomLogicLineTextureModeEnum.Bindings$$<__CreatePropertyBinding__Tile>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineTextureModeEnum_Bindings_____CreatePropertyBinding__Tile_g____getter_3_0 (CustomLogic_CustomLogicLineTextureModeEnum_o* __i, const MethodInfo* method);
// 0x5a95410

Il2CppObject *
CustomLogic_CustomLogicLineTextureModeEnum_Bindings_____CreatePropertyBinding__Tile_g____getter_3_0
          (CustomLogic_CustomLogicLineTextureModeEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicLineTextureModeEnum.Bindings$$<__CreatePropertyBinding__DistributePerSegment>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineTextureModeEnum_Bindings_____CreatePropertyBinding__DistributePerSegment_g____getter_4_0 (CustomLogic_CustomLogicLineTextureModeEnum_o* __i, const MethodInfo* method);
// 0x5a95430

Il2CppObject *
CustomLogic_CustomLogicLineTextureModeEnum_Bindings_____CreatePropertyBinding__DistributePerSegment_g____getter_4_0
          (CustomLogic_CustomLogicLineTextureModeEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicLineTextureModeEnum.Bindings$$<__CreatePropertyBinding__RepeatPerSegment>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineTextureModeEnum_Bindings_____CreatePropertyBinding__RepeatPerSegment_g____getter_5_0 (CustomLogic_CustomLogicLineTextureModeEnum_o* __i, const MethodInfo* method);
// 0x5a95450

Il2CppObject *
CustomLogic_CustomLogicLineTextureModeEnum_Bindings_____CreatePropertyBinding__RepeatPerSegment_g____getter_5_0
          (CustomLogic_CustomLogicLineTextureModeEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicLineTextureModeEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicLineTextureModeEnum___ctor (CustomLogic_CustomLogicLineTextureModeEnum_o* __this, const MethodInfo* method);
// 0x5a94c30

void CustomLogic_CustomLogicLineTextureModeEnum___ctor
               (CustomLogic_CustomLogicLineTextureModeEnum_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754681a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_0754681a = '\x01';
    uVar1 = (TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    return;
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicLineTextureModeEnum$$get_Stretch
// il2cpp: int32_t CustomLogic_CustomLogicLineTextureModeEnum__get_Stretch (const MethodInfo* method);
// 0x5a94ca0

int32_t CustomLogic_CustomLogicLineTextureModeEnum__get_Stretch(MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicLineTextureModeEnum$$get_Tile
// il2cpp: int32_t CustomLogic_CustomLogicLineTextureModeEnum__get_Tile (const MethodInfo* method);
// 0x5a94cb0

int32_t CustomLogic_CustomLogicLineTextureModeEnum__get_Tile(MethodInfo *method)

{
  return 1;
}


// CustomLogic.CustomLogicLineTextureModeEnum$$get_DistributePerSegment
// il2cpp: int32_t CustomLogic_CustomLogicLineTextureModeEnum__get_DistributePerSegment (const MethodInfo* method);
// 0x5a94cc0

int32_t CustomLogic_CustomLogicLineTextureModeEnum__get_DistributePerSegment(MethodInfo *method)

{
  return 2;
}


// CustomLogic.CustomLogicLineTextureModeEnum$$get_RepeatPerSegment
// il2cpp: int32_t CustomLogic_CustomLogicLineTextureModeEnum__get_RepeatPerSegment (const MethodInfo* method);
// 0x5a94cd0

int32_t CustomLogic_CustomLogicLineTextureModeEnum__get_RepeatPerSegment(MethodInfo *method)

{
  return 3;
}


// CustomLogic.CustomLogicLineTextureModeEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicLineTextureModeEnum__get_ClassName (CustomLogic_CustomLogicLineTextureModeEnum_o* __this, const MethodInfo* method);
// 0x5a94ce0

System_String_o *
CustomLogic_CustomLogicLineTextureModeEnum__get_ClassName
          (CustomLogic_CustomLogicLineTextureModeEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754681b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"LineTextureModeEnum");
    Il2CppMethodInitialized_0754681b = '\x01';
  }
  return "LineTextureModeEnum";
}


// CustomLogic.CustomLogicLineTextureModeEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicLineTextureModeEnum__get_IsAbstract (CustomLogic_CustomLogicLineTextureModeEnum_o* __this, const MethodInfo* method);
// 0x5a94d10

bool CustomLogic_CustomLogicLineTextureModeEnum__get_IsAbstract
               (CustomLogic_CustomLogicLineTextureModeEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicLineTextureModeEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicLineTextureModeEnum__get_IsStatic (CustomLogic_CustomLogicLineTextureModeEnum_o* __this, const MethodInfo* method);
// 0x5a94d20

bool CustomLogic_CustomLogicLineTextureModeEnum__get_IsStatic
               (CustomLogic_CustomLogicLineTextureModeEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicLineTextureModeEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicLineTextureModeEnum__get_InheritBaseMembers (CustomLogic_CustomLogicLineTextureModeEnum_o* __this, const MethodInfo* method);
// 0x5a94d30

bool CustomLogic_CustomLogicLineTextureModeEnum__get_InheritBaseMembers
               (CustomLogic_CustomLogicLineTextureModeEnum_o *__this,MethodInfo *method)

{
  return true;
}


