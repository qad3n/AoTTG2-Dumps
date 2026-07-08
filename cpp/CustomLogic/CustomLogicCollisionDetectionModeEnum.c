// Type: CustomLogic.CustomLogicCollisionDetectionModeEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicCollisionDetectionModeEnum.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicCollisionDetectionModeEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicCollisionDetectionModeEnum_o* CustomLogic_CustomLogicCollisionDetectionModeEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3e47530

CustomLogic_CustomLogicCollisionDetectionModeEnum_o *
CustomLogic_CustomLogicCollisionDetectionModeEnum_Factory__CreateInstance
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
  if (DAT_05702efa == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicCollisionDetectionModeEnum);
    DAT_05702efa = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicCollisionDetectionModeEnum);
      if (DAT_05702ef8 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_05702ef8 = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicCollisionDetectionModeEnum_o *)__this;
    }
    il2cpp_glue_01f2f1a0(args);
    uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
    pSVar1 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicCollisionDetectionModeEnum constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicCollisionDetectionModeEnum_CreateInst);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCollisionDetectionModeEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3e47650

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  System_String_o *str2;
  undefined8 uVar3;
  System_Exception_o *__this;
  System_Func_T__object__o *pSVar4;
  CustomLogic_CLPropertyBinding_T__o *pCVar5;
  
  if (DAT_05702efb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"Discrete");
    il2cpp_init_method_metadata(&"ContinuousSpeculative");
    il2cpp_init_method_metadata(&"Continuous");
    il2cpp_init_method_metadata(&"ContinuousDynamic");
    DAT_05702efb = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Discrete",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05702efc == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Discrete_g____g);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCollisionDetectio);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCollisionDetectionM);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCollisionDetectionModeEnum__obje);
      DAT_05702efc = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCollisionDetectionModeEnum__obje);
    System_Func<object__object>___ctor();
    pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCollisionDetectionM);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicCollisionDetectio);
    return (CustomLogic_ICLMemberBinding_o *)pCVar5;
  }
  bVar1 = System_String__op_Equality(name,"Continuous",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05702efd == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Continuous_g);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCollisionDetectio);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCollisionDetectionM);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCollisionDetectionModeEnum__obje);
      DAT_05702efd = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCollisionDetectionModeEnum__obje);
    System_Func<object__object>___ctor();
    pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCollisionDetectionM);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicCollisionDetectio);
    return (CustomLogic_ICLMemberBinding_o *)pCVar5;
  }
  bVar1 = System_String__op_Equality(name,"ContinuousDynamic",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality(name,"ContinuousSpeculative",(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      pSVar2 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
      str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicCollisionDetectionModeEnum not found");
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
    if (DAT_05702eff == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ContinuousSpecu);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCollisionDetectio);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCollisionDetectionM);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCollisionDetectionModeEnum__obje);
      DAT_05702eff = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCollisionDetectionModeEnum__obje);
    System_Func<object__object>___ctor();
    pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCollisionDetectionM);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicCollisionDetectio);
    return (CustomLogic_ICLMemberBinding_o *)pCVar5;
  }
  if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (DAT_05702efe == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ContinuousDynam);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCollisionDetectio);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCollisionDetectionM);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCollisionDetectionModeEnum__obje);
    DAT_05702efe = '\x01';
  }
  pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCollisionDetectionModeEnum__obje);
  System_Func<object__object>___ctor();
  pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCollisionDetectionM);
  CustomLogic_CLPropertyBinding<object>___ctor
            (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicCollisionDetectio);
  return (CustomLogic_ICLMemberBinding_o *)pCVar5;
}


// CustomLogic.CustomLogicCollisionDetectionModeEnum.Bindings$$__CreatePropertyBinding__Discrete
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum__o* CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings____CreatePropertyBinding__Discrete (const MethodInfo* method);
// 0x3e47830

CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum__o *
CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings____CreatePropertyBinding__Discrete
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum__o *__this;
  
  if (DAT_05702efc == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Discrete_g____g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCollisionDetectio);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCollisionDetectionM);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCollisionDetectionModeEnum__obje);
    DAT_05702efc = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCollisionDetectionModeEnum__obje);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCollisionDetectionM);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicCollisionDetectio);
  return __this;
}


// CustomLogic.CustomLogicCollisionDetectionModeEnum.Bindings$$__CreatePropertyBinding__Continuous
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum__o* CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings____CreatePropertyBinding__Continuous (const MethodInfo* method);
// 0x3e478d0

CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum__o *
CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings____CreatePropertyBinding__Continuous
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum__o *__this;
  
  if (DAT_05702efd == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Continuous_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCollisionDetectio);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCollisionDetectionM);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCollisionDetectionModeEnum__obje);
    DAT_05702efd = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCollisionDetectionModeEnum__obje);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCollisionDetectionM);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicCollisionDetectio);
  return __this;
}


// CustomLogic.CustomLogicCollisionDetectionModeEnum.Bindings$$__CreatePropertyBinding__ContinuousDynamic
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum__o* CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings____CreatePropertyBinding__ContinuousDynamic (const MethodInfo* method);
// 0x3e47970

CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum__o *
CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings____CreatePropertyBinding__ContinuousDynamic
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum__o *__this;
  
  if (DAT_05702efe == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ContinuousDynam);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCollisionDetectio);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCollisionDetectionM);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCollisionDetectionModeEnum__obje);
    DAT_05702efe = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCollisionDetectionModeEnum__obje);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCollisionDetectionM);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicCollisionDetectio);
  return __this;
}


// CustomLogic.CustomLogicCollisionDetectionModeEnum.Bindings$$__CreatePropertyBinding__ContinuousSpeculative
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum__o* CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings____CreatePropertyBinding__ContinuousSpeculative (const MethodInfo* method);
// 0x3e47a10

CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum__o *
CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings____CreatePropertyBinding__ContinuousSpeculative
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum__o *__this;
  
  if (DAT_05702eff == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ContinuousSpecu);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCollisionDetectio);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCollisionDetectionM);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCollisionDetectionModeEnum__obje);
    DAT_05702eff = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCollisionDetectionModeEnum__obje);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCollisionDetectionModeEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCollisionDetectionM);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicCollisionDetectio);
  return __this;
}


// CustomLogic.CustomLogicCollisionDetectionModeEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings___cctor (const MethodInfo* method);
// 0x3e47ab0

void CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_05702f00 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"Discrete");
    il2cpp_init_method_metadata(&"ContinuousSpeculative");
    il2cpp_init_method_metadata(&"Continuous");
    il2cpp_init_method_metadata(&"ContinuousDynamic");
    DAT_05702f00 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"Discrete",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Continuous",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ContinuousDynamic",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ContinuousSpeculative",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCollisionDetectionModeEnum.Bindings$$<__CreatePropertyBinding__Discrete>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings_____CreatePropertyBinding__Discrete_g____getter_2_0 (CustomLogic_CustomLogicCollisionDetectionModeEnum_o* __i, const MethodInfo* method);
// 0x3e47be0

Il2CppObject *
CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings__<__CreatePropertyBinding__Discrete>g____getter_2_0
          (CustomLogic_CustomLogicCollisionDetectionModeEnum_o *__i,MethodInfo *method)

{
  uint in_EAX;
  Il2CppObject *pIVar1;
  undefined8 uStack_8;
  
  uStack_8 = (ulong)in_EAX;
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,(long)&uStack_8 + 4);
  return pIVar1;
}


// CustomLogic.CustomLogicCollisionDetectionModeEnum.Bindings$$<__CreatePropertyBinding__Continuous>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings_____CreatePropertyBinding__Continuous_g____getter_3_0 (CustomLogic_CustomLogicCollisionDetectionModeEnum_o* __i, const MethodInfo* method);
// 0x3e47c00

Il2CppObject *
CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings__<__CreatePropertyBinding__Continuous>g____getter_3_0
          (CustomLogic_CustomLogicCollisionDetectionModeEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicCollisionDetectionModeEnum.Bindings$$<__CreatePropertyBinding__ContinuousDynamic>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings_____CreatePropertyBinding__ContinuousDynamic_g____getter_4_0 (CustomLogic_CustomLogicCollisionDetectionModeEnum_o* __i, const MethodInfo* method);
// 0x3e47c20

Il2CppObject *
CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings__<__CreatePropertyBinding__ContinuousDynamic>g____getter_4_0
          (CustomLogic_CustomLogicCollisionDetectionModeEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicCollisionDetectionModeEnum.Bindings$$<__CreatePropertyBinding__ContinuousSpeculative>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings_____CreatePropertyBinding__ContinuousSpeculative_g____getter_5_0 (CustomLogic_CustomLogicCollisionDetectionModeEnum_o* __i, const MethodInfo* method);
// 0x3e47c40

Il2CppObject *
CustomLogic_CustomLogicCollisionDetectionModeEnum_Bindings__<__CreatePropertyBinding__ContinuousSpeculative>g____getter_5_0
          (CustomLogic_CustomLogicCollisionDetectionModeEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicCollisionDetectionModeEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicCollisionDetectionModeEnum___ctor (CustomLogic_CustomLogicCollisionDetectionModeEnum_o* __this, const MethodInfo* method);
// 0x3e47420

void CustomLogic_CustomLogicCollisionDetectionModeEnum___ctor
               (CustomLogic_CustomLogicCollisionDetectionModeEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702ef8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_05702ef8 = '\x01';
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


// CustomLogic.CustomLogicCollisionDetectionModeEnum$$get_Discrete
// il2cpp: int32_t CustomLogic_CustomLogicCollisionDetectionModeEnum__get_Discrete (const MethodInfo* method);
// 0x3e47490

int32_t CustomLogic_CustomLogicCollisionDetectionModeEnum__get_Discrete(MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicCollisionDetectionModeEnum$$get_Continuous
// il2cpp: int32_t CustomLogic_CustomLogicCollisionDetectionModeEnum__get_Continuous (const MethodInfo* method);
// 0x3e474a0

int32_t CustomLogic_CustomLogicCollisionDetectionModeEnum__get_Continuous(MethodInfo *method)

{
  return 1;
}


// CustomLogic.CustomLogicCollisionDetectionModeEnum$$get_ContinuousDynamic
// il2cpp: int32_t CustomLogic_CustomLogicCollisionDetectionModeEnum__get_ContinuousDynamic (const MethodInfo* method);
// 0x3e474b0

int32_t CustomLogic_CustomLogicCollisionDetectionModeEnum__get_ContinuousDynamic(MethodInfo *method)

{
  return 2;
}


// CustomLogic.CustomLogicCollisionDetectionModeEnum$$get_ContinuousSpeculative
// il2cpp: int32_t CustomLogic_CustomLogicCollisionDetectionModeEnum__get_ContinuousSpeculative (const MethodInfo* method);
// 0x3e474c0

int32_t CustomLogic_CustomLogicCollisionDetectionModeEnum__get_ContinuousSpeculative
                  (MethodInfo *method)

{
  return 3;
}


// CustomLogic.CustomLogicCollisionDetectionModeEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicCollisionDetectionModeEnum__get_ClassName (CustomLogic_CustomLogicCollisionDetectionModeEnum_o* __this, const MethodInfo* method);
// 0x3e474d0

System_String_o *
CustomLogic_CustomLogicCollisionDetectionModeEnum__get_ClassName
          (CustomLogic_CustomLogicCollisionDetectionModeEnum_o *__this,MethodInfo *method)

{
  if (DAT_05702ef9 == '\0') {
    il2cpp_init_method_metadata(&"CollisionDetectionModeEnum");
    DAT_05702ef9 = '\x01';
  }
  return "CollisionDetectionModeEnum";
}


// CustomLogic.CustomLogicCollisionDetectionModeEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicCollisionDetectionModeEnum__get_IsAbstract (CustomLogic_CustomLogicCollisionDetectionModeEnum_o* __this, const MethodInfo* method);
// 0x3e47500

bool_conflict
CustomLogic_CustomLogicCollisionDetectionModeEnum__get_IsAbstract
          (CustomLogic_CustomLogicCollisionDetectionModeEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicCollisionDetectionModeEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicCollisionDetectionModeEnum__get_IsStatic (CustomLogic_CustomLogicCollisionDetectionModeEnum_o* __this, const MethodInfo* method);
// 0x3e47510

bool_conflict
CustomLogic_CustomLogicCollisionDetectionModeEnum__get_IsStatic
          (CustomLogic_CustomLogicCollisionDetectionModeEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicCollisionDetectionModeEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicCollisionDetectionModeEnum__get_InheritBaseMembers (CustomLogic_CustomLogicCollisionDetectionModeEnum_o* __this, const MethodInfo* method);
// 0x3e47520

bool_conflict
CustomLogic_CustomLogicCollisionDetectionModeEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicCollisionDetectionModeEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


