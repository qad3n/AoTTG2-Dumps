// Type: CustomLogic.CustomLogicLineTextureModeEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicLineTextureModeEnum.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicLineTextureModeEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicLineTextureModeEnum_o* CustomLogic_CustomLogicLineTextureModeEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3e7d480

CustomLogic_CustomLogicLineTextureModeEnum_o *
CustomLogic_CustomLogicLineTextureModeEnum_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  uint in_EAX;
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar2;
  System_ArgumentException_o *__this_00;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (DAT_057033b1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicLineTextureModeEnum);
    DAT_057033b1 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicLineTextureModeEnum);
      if (DAT_057033af == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_057033af = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicLineTextureModeEnum_o *)__this;
    }
    il2cpp_glue_01f2f1a0(args);
    uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
    pSVar1 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicLineTextureModeEnum constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicLineTextureModeEnum_CreateInstance);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineTextureModeEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicLineTextureModeEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3e7d5a0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicLineTextureModeEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  System_String_o *str2;
  undefined8 uVar3;
  System_Exception_o *__this;
  System_Func_T__object__o *pSVar4;
  CustomLogic_CLPropertyBinding_T__o *pCVar5;
  
  if (DAT_057033b2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"Stretch");
    il2cpp_init_method_metadata(&"Tile");
    il2cpp_init_method_metadata(&"RepeatPerSegment");
    il2cpp_init_method_metadata(&"DistributePerSegment");
    DAT_057033b2 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Stretch",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_057033b3 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Stretch_g____ge);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLineTextureModeEn);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLineTextureModeEnum);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLineTextureModeEnum__object);
      DAT_057033b3 = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLineTextureModeEnum__object);
    System_Func<object__object>___ctor();
    pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLineTextureModeEnum);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLineTextureModeEn);
    return (CustomLogic_ICLMemberBinding_o *)pCVar5;
  }
  bVar1 = System_String__op_Equality(name,"Tile",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_057033b4 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Tile_g____gette);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLineTextureModeEn);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLineTextureModeEnum);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLineTextureModeEnum__object);
      DAT_057033b4 = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLineTextureModeEnum__object);
    System_Func<object__object>___ctor();
    pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLineTextureModeEnum);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLineTextureModeEn);
    return (CustomLogic_ICLMemberBinding_o *)pCVar5;
  }
  bVar1 = System_String__op_Equality(name,"DistributePerSegment",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality(name,"RepeatPerSegment",(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      pSVar2 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
      str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicLineTextureModeEnum not found");
      pSVar2 = System_String__Concat(pSVar2,name,str2,(MethodInfo *)0x0);
      uVar3 = il2cpp_init_method_metadata(&TypeInfo_Exception);
      __this = (System_Exception_o *)il2cpp_runtime_glue(uVar3);
      System_Exception___ctor(__this,pSVar2,(MethodInfo *)0x0);
      uVar3 = il2cpp_init_method_metadata(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
                    /* WARNING: Subroutine does not return */
      il2cpp_glue_02274a00(__this,uVar3);
    }
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_057033b6 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__RepeatPerSegmen);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLineTextureModeEn);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLineTextureModeEnum);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLineTextureModeEnum__object);
      DAT_057033b6 = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLineTextureModeEnum__object);
    System_Func<object__object>___ctor();
    pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLineTextureModeEnum);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLineTextureModeEn);
    return (CustomLogic_ICLMemberBinding_o *)pCVar5;
  }
  if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (DAT_057033b5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__DistributePerSe);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLineTextureModeEn);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLineTextureModeEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLineTextureModeEnum__object);
    DAT_057033b5 = '\x01';
  }
  pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLineTextureModeEnum__object);
  System_Func<object__object>___ctor();
  pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLineTextureModeEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLineTextureModeEn);
  return (CustomLogic_ICLMemberBinding_o *)pCVar5;
}


// CustomLogic.CustomLogicLineTextureModeEnum.Bindings$$__CreatePropertyBinding__Stretch
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum__o* CustomLogic_CustomLogicLineTextureModeEnum_Bindings____CreatePropertyBinding__Stretch (const MethodInfo* method);
// 0x3e7d780

CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum__o *
CustomLogic_CustomLogicLineTextureModeEnum_Bindings____CreatePropertyBinding__Stretch
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum__o *__this;
  
  if (DAT_057033b3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Stretch_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLineTextureModeEn);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLineTextureModeEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLineTextureModeEnum__object);
    DAT_057033b3 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLineTextureModeEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLineTextureModeEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLineTextureModeEn);
  return __this;
}


// CustomLogic.CustomLogicLineTextureModeEnum.Bindings$$__CreatePropertyBinding__Tile
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum__o* CustomLogic_CustomLogicLineTextureModeEnum_Bindings____CreatePropertyBinding__Tile (const MethodInfo* method);
// 0x3e7d820

CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum__o *
CustomLogic_CustomLogicLineTextureModeEnum_Bindings____CreatePropertyBinding__Tile
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum__o *__this;
  
  if (DAT_057033b4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Tile_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLineTextureModeEn);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLineTextureModeEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLineTextureModeEnum__object);
    DAT_057033b4 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLineTextureModeEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLineTextureModeEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLineTextureModeEn);
  return __this;
}


// CustomLogic.CustomLogicLineTextureModeEnum.Bindings$$__CreatePropertyBinding__DistributePerSegment
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum__o* CustomLogic_CustomLogicLineTextureModeEnum_Bindings____CreatePropertyBinding__DistributePerSegment (const MethodInfo* method);
// 0x3e7d8c0

CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum__o *
CustomLogic_CustomLogicLineTextureModeEnum_Bindings____CreatePropertyBinding__DistributePerSegment
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum__o *__this;
  
  if (DAT_057033b5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__DistributePerSe);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLineTextureModeEn);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLineTextureModeEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLineTextureModeEnum__object);
    DAT_057033b5 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLineTextureModeEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLineTextureModeEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLineTextureModeEn);
  return __this;
}


// CustomLogic.CustomLogicLineTextureModeEnum.Bindings$$__CreatePropertyBinding__RepeatPerSegment
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum__o* CustomLogic_CustomLogicLineTextureModeEnum_Bindings____CreatePropertyBinding__RepeatPerSegment (const MethodInfo* method);
// 0x3e7d960

CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum__o *
CustomLogic_CustomLogicLineTextureModeEnum_Bindings____CreatePropertyBinding__RepeatPerSegment
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum__o *__this;
  
  if (DAT_057033b6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__RepeatPerSegmen);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLineTextureModeEn);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLineTextureModeEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLineTextureModeEnum__object);
    DAT_057033b6 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLineTextureModeEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLineTextureModeEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLineTextureModeEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLineTextureModeEn);
  return __this;
}


// CustomLogic.CustomLogicLineTextureModeEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicLineTextureModeEnum_Bindings___cctor (const MethodInfo* method);
// 0x3e7da00

void CustomLogic_CustomLogicLineTextureModeEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_057033b7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"Stretch");
    il2cpp_init_method_metadata(&"Tile");
    il2cpp_init_method_metadata(&"RepeatPerSegment");
    il2cpp_init_method_metadata(&"DistributePerSegment");
    DAT_057033b7 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"Stretch",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Tile",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"DistributePerSegment",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"RepeatPerSegment",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLineTextureModeEnum.Bindings$$<__CreatePropertyBinding__Stretch>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineTextureModeEnum_Bindings_____CreatePropertyBinding__Stretch_g____getter_2_0 (CustomLogic_CustomLogicLineTextureModeEnum_o* __i, const MethodInfo* method);
// 0x3e7db30

Il2CppObject *
CustomLogic_CustomLogicLineTextureModeEnum_Bindings__<__CreatePropertyBinding__Stretch>g____getter_2_0
          (CustomLogic_CustomLogicLineTextureModeEnum_o *__i,MethodInfo *method)

{
  uint in_EAX;
  Il2CppObject *pIVar1;
  undefined8 uStack_8;
  
  uStack_8 = (ulong)in_EAX;
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,(long)&uStack_8 + 4);
  return pIVar1;
}


// CustomLogic.CustomLogicLineTextureModeEnum.Bindings$$<__CreatePropertyBinding__Tile>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineTextureModeEnum_Bindings_____CreatePropertyBinding__Tile_g____getter_3_0 (CustomLogic_CustomLogicLineTextureModeEnum_o* __i, const MethodInfo* method);
// 0x3e7db50

Il2CppObject *
CustomLogic_CustomLogicLineTextureModeEnum_Bindings__<__CreatePropertyBinding__Tile>g____getter_3_0
          (CustomLogic_CustomLogicLineTextureModeEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicLineTextureModeEnum.Bindings$$<__CreatePropertyBinding__DistributePerSegment>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineTextureModeEnum_Bindings_____CreatePropertyBinding__DistributePerSegment_g____getter_4_0 (CustomLogic_CustomLogicLineTextureModeEnum_o* __i, const MethodInfo* method);
// 0x3e7db70

Il2CppObject *
CustomLogic_CustomLogicLineTextureModeEnum_Bindings__<__CreatePropertyBinding__DistributePerSegment>g____getter_4_0
          (CustomLogic_CustomLogicLineTextureModeEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicLineTextureModeEnum.Bindings$$<__CreatePropertyBinding__RepeatPerSegment>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineTextureModeEnum_Bindings_____CreatePropertyBinding__RepeatPerSegment_g____getter_5_0 (CustomLogic_CustomLogicLineTextureModeEnum_o* __i, const MethodInfo* method);
// 0x3e7db90

Il2CppObject *
CustomLogic_CustomLogicLineTextureModeEnum_Bindings__<__CreatePropertyBinding__RepeatPerSegment>g____getter_5_0
          (CustomLogic_CustomLogicLineTextureModeEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicLineTextureModeEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicLineTextureModeEnum___ctor (CustomLogic_CustomLogicLineTextureModeEnum_o* __this, const MethodInfo* method);
// 0x3e7d370

void CustomLogic_CustomLogicLineTextureModeEnum___ctor
               (CustomLogic_CustomLogicLineTextureModeEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057033af == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_057033af = '\x01';
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  if (iVar1 != 0) {
    CustomLogic_BuiltinClassInstance___ctor
              ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    return;
  }
  il2cpp_init_class();
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicLineTextureModeEnum$$get_Stretch
// il2cpp: int32_t CustomLogic_CustomLogicLineTextureModeEnum__get_Stretch (const MethodInfo* method);
// 0x3e7d3e0

int32_t CustomLogic_CustomLogicLineTextureModeEnum__get_Stretch(MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicLineTextureModeEnum$$get_Tile
// il2cpp: int32_t CustomLogic_CustomLogicLineTextureModeEnum__get_Tile (const MethodInfo* method);
// 0x3e7d3f0

int32_t CustomLogic_CustomLogicLineTextureModeEnum__get_Tile(MethodInfo *method)

{
  return 1;
}


// CustomLogic.CustomLogicLineTextureModeEnum$$get_DistributePerSegment
// il2cpp: int32_t CustomLogic_CustomLogicLineTextureModeEnum__get_DistributePerSegment (const MethodInfo* method);
// 0x3e7d400

int32_t CustomLogic_CustomLogicLineTextureModeEnum__get_DistributePerSegment(MethodInfo *method)

{
  return 2;
}


// CustomLogic.CustomLogicLineTextureModeEnum$$get_RepeatPerSegment
// il2cpp: int32_t CustomLogic_CustomLogicLineTextureModeEnum__get_RepeatPerSegment (const MethodInfo* method);
// 0x3e7d410

int32_t CustomLogic_CustomLogicLineTextureModeEnum__get_RepeatPerSegment(MethodInfo *method)

{
  return 3;
}


// CustomLogic.CustomLogicLineTextureModeEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicLineTextureModeEnum__get_ClassName (CustomLogic_CustomLogicLineTextureModeEnum_o* __this, const MethodInfo* method);
// 0x3e7d420

System_String_o *
CustomLogic_CustomLogicLineTextureModeEnum__get_ClassName
          (CustomLogic_CustomLogicLineTextureModeEnum_o *__this,MethodInfo *method)

{
  if (DAT_057033b0 == '\0') {
    il2cpp_init_method_metadata(&"LineTextureModeEnum");
    DAT_057033b0 = '\x01';
  }
  return "LineTextureModeEnum";
}


// CustomLogic.CustomLogicLineTextureModeEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicLineTextureModeEnum__get_IsAbstract (CustomLogic_CustomLogicLineTextureModeEnum_o* __this, const MethodInfo* method);
// 0x3e7d450

bool_conflict
CustomLogic_CustomLogicLineTextureModeEnum__get_IsAbstract
          (CustomLogic_CustomLogicLineTextureModeEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicLineTextureModeEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicLineTextureModeEnum__get_IsStatic (CustomLogic_CustomLogicLineTextureModeEnum_o* __this, const MethodInfo* method);
// 0x3e7d460

bool_conflict
CustomLogic_CustomLogicLineTextureModeEnum__get_IsStatic
          (CustomLogic_CustomLogicLineTextureModeEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicLineTextureModeEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicLineTextureModeEnum__get_InheritBaseMembers (CustomLogic_CustomLogicLineTextureModeEnum_o* __this, const MethodInfo* method);
// 0x3e7d470

bool_conflict
CustomLogic_CustomLogicLineTextureModeEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicLineTextureModeEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


