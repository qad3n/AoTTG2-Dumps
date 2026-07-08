// Type: CustomLogic.CustomLogicAlignEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicAlignEnum.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicAlignEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicAlignEnum_o* CustomLogic_CustomLogicAlignEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3e3f540

CustomLogic_CustomLogicAlignEnum_o *
CustomLogic_CustomLogicAlignEnum_Factory__CreateInstance
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
  if (DAT_05702e5b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicAlignEnum);
    DAT_05702e5b = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicAlignEnum);
      if (DAT_05702e59 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_05702e59 = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicAlignEnum_o *)__this;
    }
    il2cpp_glue_01f2f1a0(args);
    uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
    pSVar1 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicAlignEnum constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicAlignEnum_CreateInstance);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAlignEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicAlignEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3e3f660

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicAlignEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  System_String_o *str2;
  undefined8 uVar3;
  System_Exception_o *__this;
  System_Func_T__object__o *pSVar4;
  CustomLogic_CLPropertyBinding_T__o *pCVar5;
  
  if (DAT_05702e5c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"FlexEnd");
    il2cpp_init_method_metadata(&"Stretch");
    il2cpp_init_method_metadata(&"Center");
    il2cpp_init_method_metadata(&"Auto");
    il2cpp_init_method_metadata(&"FlexStart");
    DAT_05702e5c = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Auto",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05702e5d == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Auto_g____gette);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAlignEnum);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAlignEnum);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAlignEnum__object);
      DAT_05702e5d = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAlignEnum__object);
    System_Func<object__object>___ctor();
    pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAlignEnum);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAlignEnum);
    return (CustomLogic_ICLMemberBinding_o *)pCVar5;
  }
  bVar1 = System_String__op_Equality(name,"FlexStart",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05702e5e == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__FlexStart_g);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAlignEnum);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAlignEnum);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAlignEnum__object);
      DAT_05702e5e = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAlignEnum__object);
    System_Func<object__object>___ctor();
    pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAlignEnum);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAlignEnum);
    return (CustomLogic_ICLMemberBinding_o *)pCVar5;
  }
  bVar1 = System_String__op_Equality(name,"Center",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality(name,"FlexEnd",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702e60 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__FlexEnd_g____ge);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAlignEnum);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAlignEnum);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAlignEnum__object);
        DAT_05702e60 = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAlignEnum__object);
      System_Func<object__object>___ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAlignEnum);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAlignEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    bVar1 = System_String__op_Equality(name,"Stretch",(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      pSVar2 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
      str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicAlignEnum not found");
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
    if (DAT_05702e61 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Stretch_g____ge);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAlignEnum);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAlignEnum);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAlignEnum__object);
      DAT_05702e61 = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAlignEnum__object);
    System_Func<object__object>___ctor();
    pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAlignEnum);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAlignEnum);
    return (CustomLogic_ICLMemberBinding_o *)pCVar5;
  }
  if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (DAT_05702e5f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Center_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAlignEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAlignEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAlignEnum__object);
    DAT_05702e5f = '\x01';
  }
  pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAlignEnum__object);
  System_Func<object__object>___ctor();
  pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAlignEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAlignEnum);
  return (CustomLogic_ICLMemberBinding_o *)pCVar5;
}


// CustomLogic.CustomLogicAlignEnum.Bindings$$__CreatePropertyBinding__Auto
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAlignEnum__o* CustomLogic_CustomLogicAlignEnum_Bindings____CreatePropertyBinding__Auto (const MethodInfo* method);
// 0x3e3f890

CustomLogic_CLPropertyBinding_CustomLogicAlignEnum__o *
CustomLogic_CustomLogicAlignEnum_Bindings____CreatePropertyBinding__Auto(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAlignEnum__o *__this;
  
  if (DAT_05702e5d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Auto_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAlignEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAlignEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAlignEnum__object);
    DAT_05702e5d = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAlignEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAlignEnum__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAlignEnum)
  ;
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAlignEnum);
  return __this;
}


// CustomLogic.CustomLogicAlignEnum.Bindings$$__CreatePropertyBinding__FlexStart
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAlignEnum__o* CustomLogic_CustomLogicAlignEnum_Bindings____CreatePropertyBinding__FlexStart (const MethodInfo* method);
// 0x3e3f930

CustomLogic_CLPropertyBinding_CustomLogicAlignEnum__o *
CustomLogic_CustomLogicAlignEnum_Bindings____CreatePropertyBinding__FlexStart(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAlignEnum__o *__this;
  
  if (DAT_05702e5e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__FlexStart_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAlignEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAlignEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAlignEnum__object);
    DAT_05702e5e = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAlignEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAlignEnum__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAlignEnum)
  ;
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAlignEnum);
  return __this;
}


// CustomLogic.CustomLogicAlignEnum.Bindings$$__CreatePropertyBinding__Center
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAlignEnum__o* CustomLogic_CustomLogicAlignEnum_Bindings____CreatePropertyBinding__Center (const MethodInfo* method);
// 0x3e3f9d0

CustomLogic_CLPropertyBinding_CustomLogicAlignEnum__o *
CustomLogic_CustomLogicAlignEnum_Bindings____CreatePropertyBinding__Center(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAlignEnum__o *__this;
  
  if (DAT_05702e5f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Center_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAlignEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAlignEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAlignEnum__object);
    DAT_05702e5f = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAlignEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAlignEnum__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAlignEnum)
  ;
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAlignEnum);
  return __this;
}


// CustomLogic.CustomLogicAlignEnum.Bindings$$__CreatePropertyBinding__FlexEnd
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAlignEnum__o* CustomLogic_CustomLogicAlignEnum_Bindings____CreatePropertyBinding__FlexEnd (const MethodInfo* method);
// 0x3e3fa70

CustomLogic_CLPropertyBinding_CustomLogicAlignEnum__o *
CustomLogic_CustomLogicAlignEnum_Bindings____CreatePropertyBinding__FlexEnd(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAlignEnum__o *__this;
  
  if (DAT_05702e60 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__FlexEnd_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAlignEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAlignEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAlignEnum__object);
    DAT_05702e60 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAlignEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAlignEnum__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAlignEnum)
  ;
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAlignEnum);
  return __this;
}


// CustomLogic.CustomLogicAlignEnum.Bindings$$__CreatePropertyBinding__Stretch
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAlignEnum__o* CustomLogic_CustomLogicAlignEnum_Bindings____CreatePropertyBinding__Stretch (const MethodInfo* method);
// 0x3e3fb10

CustomLogic_CLPropertyBinding_CustomLogicAlignEnum__o *
CustomLogic_CustomLogicAlignEnum_Bindings____CreatePropertyBinding__Stretch(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAlignEnum__o *__this;
  
  if (DAT_05702e61 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Stretch_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAlignEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAlignEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAlignEnum__object);
    DAT_05702e61 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAlignEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAlignEnum__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAlignEnum)
  ;
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAlignEnum);
  return __this;
}


// CustomLogic.CustomLogicAlignEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicAlignEnum_Bindings___cctor (const MethodInfo* method);
// 0x3e3fbb0

void CustomLogic_CustomLogicAlignEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_05702e62 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"FlexEnd");
    il2cpp_init_method_metadata(&"Stretch");
    il2cpp_init_method_metadata(&"Center");
    il2cpp_init_method_metadata(&"Auto");
    il2cpp_init_method_metadata(&"FlexStart");
    DAT_05702e62 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"Auto",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"FlexStart",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Center",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"FlexEnd",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Stretch",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAlignEnum.Bindings$$<__CreatePropertyBinding__Auto>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAlignEnum_Bindings_____CreatePropertyBinding__Auto_g____getter_2_0 (CustomLogic_CustomLogicAlignEnum_o* __i, const MethodInfo* method);
// 0x3e3fd00

Il2CppObject *
CustomLogic_CustomLogicAlignEnum_Bindings__<__CreatePropertyBinding__Auto>g____getter_2_0
          (CustomLogic_CustomLogicAlignEnum_o *__i,MethodInfo *method)

{
  uint in_EAX;
  Il2CppObject *pIVar1;
  undefined8 uStack_8;
  
  uStack_8 = (ulong)in_EAX;
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,(long)&uStack_8 + 4);
  return pIVar1;
}


// CustomLogic.CustomLogicAlignEnum.Bindings$$<__CreatePropertyBinding__FlexStart>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAlignEnum_Bindings_____CreatePropertyBinding__FlexStart_g____getter_3_0 (CustomLogic_CustomLogicAlignEnum_o* __i, const MethodInfo* method);
// 0x3e3fd20

Il2CppObject *
CustomLogic_CustomLogicAlignEnum_Bindings__<__CreatePropertyBinding__FlexStart>g____getter_3_0
          (CustomLogic_CustomLogicAlignEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicAlignEnum.Bindings$$<__CreatePropertyBinding__Center>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAlignEnum_Bindings_____CreatePropertyBinding__Center_g____getter_4_0 (CustomLogic_CustomLogicAlignEnum_o* __i, const MethodInfo* method);
// 0x3e3fd40

Il2CppObject *
CustomLogic_CustomLogicAlignEnum_Bindings__<__CreatePropertyBinding__Center>g____getter_4_0
          (CustomLogic_CustomLogicAlignEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicAlignEnum.Bindings$$<__CreatePropertyBinding__FlexEnd>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAlignEnum_Bindings_____CreatePropertyBinding__FlexEnd_g____getter_5_0 (CustomLogic_CustomLogicAlignEnum_o* __i, const MethodInfo* method);
// 0x3e3fd60

Il2CppObject *
CustomLogic_CustomLogicAlignEnum_Bindings__<__CreatePropertyBinding__FlexEnd>g____getter_5_0
          (CustomLogic_CustomLogicAlignEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicAlignEnum.Bindings$$<__CreatePropertyBinding__Stretch>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAlignEnum_Bindings_____CreatePropertyBinding__Stretch_g____getter_6_0 (CustomLogic_CustomLogicAlignEnum_o* __i, const MethodInfo* method);
// 0x3e3fd80

Il2CppObject *
CustomLogic_CustomLogicAlignEnum_Bindings__<__CreatePropertyBinding__Stretch>g____getter_6_0
          (CustomLogic_CustomLogicAlignEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicAlignEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicAlignEnum___ctor (CustomLogic_CustomLogicAlignEnum_o* __this, const MethodInfo* method);
// 0x3e3f420

void CustomLogic_CustomLogicAlignEnum___ctor
               (CustomLogic_CustomLogicAlignEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702e59 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_05702e59 = '\x01';
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


// CustomLogic.CustomLogicAlignEnum$$get_Auto
// il2cpp: int32_t CustomLogic_CustomLogicAlignEnum__get_Auto (const MethodInfo* method);
// 0x3e3f490

int32_t CustomLogic_CustomLogicAlignEnum__get_Auto(MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicAlignEnum$$get_FlexStart
// il2cpp: int32_t CustomLogic_CustomLogicAlignEnum__get_FlexStart (const MethodInfo* method);
// 0x3e3f4a0

int32_t CustomLogic_CustomLogicAlignEnum__get_FlexStart(MethodInfo *method)

{
  return 1;
}


// CustomLogic.CustomLogicAlignEnum$$get_Center
// il2cpp: int32_t CustomLogic_CustomLogicAlignEnum__get_Center (const MethodInfo* method);
// 0x3e3f4b0

int32_t CustomLogic_CustomLogicAlignEnum__get_Center(MethodInfo *method)

{
  return 2;
}


// CustomLogic.CustomLogicAlignEnum$$get_FlexEnd
// il2cpp: int32_t CustomLogic_CustomLogicAlignEnum__get_FlexEnd (const MethodInfo* method);
// 0x3e3f4c0

int32_t CustomLogic_CustomLogicAlignEnum__get_FlexEnd(MethodInfo *method)

{
  return 3;
}


// CustomLogic.CustomLogicAlignEnum$$get_Stretch
// il2cpp: int32_t CustomLogic_CustomLogicAlignEnum__get_Stretch (const MethodInfo* method);
// 0x3e3f4d0

int32_t CustomLogic_CustomLogicAlignEnum__get_Stretch(MethodInfo *method)

{
  return 4;
}


// CustomLogic.CustomLogicAlignEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicAlignEnum__get_ClassName (CustomLogic_CustomLogicAlignEnum_o* __this, const MethodInfo* method);
// 0x3e3f4e0

System_String_o *
CustomLogic_CustomLogicAlignEnum__get_ClassName
          (CustomLogic_CustomLogicAlignEnum_o *__this,MethodInfo *method)

{
  if (DAT_05702e5a == '\0') {
    il2cpp_init_method_metadata(&"AlignEnum");
    DAT_05702e5a = '\x01';
  }
  return "AlignEnum";
}


// CustomLogic.CustomLogicAlignEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicAlignEnum__get_IsAbstract (CustomLogic_CustomLogicAlignEnum_o* __this, const MethodInfo* method);
// 0x3e3f510

bool_conflict
CustomLogic_CustomLogicAlignEnum__get_IsAbstract
          (CustomLogic_CustomLogicAlignEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicAlignEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicAlignEnum__get_IsStatic (CustomLogic_CustomLogicAlignEnum_o* __this, const MethodInfo* method);
// 0x3e3f520

bool_conflict
CustomLogic_CustomLogicAlignEnum__get_IsStatic
          (CustomLogic_CustomLogicAlignEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicAlignEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicAlignEnum__get_InheritBaseMembers (CustomLogic_CustomLogicAlignEnum_o* __this, const MethodInfo* method);
// 0x3e3f530

bool_conflict
CustomLogic_CustomLogicAlignEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicAlignEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


