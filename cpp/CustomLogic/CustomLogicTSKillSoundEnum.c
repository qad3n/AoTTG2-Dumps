// Type: CustomLogic.CustomLogicTSKillSoundEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicTSKillSoundEnum.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicTSKillSoundEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicTSKillSoundEnum_o* CustomLogic_CustomLogicTSKillSoundEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3e96310

CustomLogic_CustomLogicTSKillSoundEnum_o *
CustomLogic_CustomLogicTSKillSoundEnum_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  uint in_EAX;
  CustomLogic_CustomLogicTSKillSoundEnum_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar2;
  System_ArgumentException_o *__this_00;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (DAT_0570363c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicTSKillSoundEnum);
    DAT_0570363c = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_CustomLogicTSKillSoundEnum_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicTSKillSoundEnum);
      if (DAT_05703633 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_05703633 = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor
                ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
      return __this;
    }
    il2cpp_glue_01f2f1a0(args);
    uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
    pSVar1 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicTSKillSoundEnum constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicTSKillSoundEnum_CreateInstance);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTSKillSoundEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicTSKillSoundEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3e96430

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicTSKillSoundEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  System_String_o *str2;
  undefined8 uVar3;
  System_Exception_o *__this;
  System_Func_T__object__o *pSVar4;
  CustomLogic_CLPropertyBinding_T__o *pCVar5;
  
  if (DAT_0570363d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"ArmorHit");
    il2cpp_init_method_metadata(&"MaxRangeShot");
    il2cpp_init_method_metadata(&"Air");
    il2cpp_init_method_metadata(&"Ground");
    il2cpp_init_method_metadata(&"CloseShot");
    il2cpp_init_method_metadata(&"Kill");
    DAT_0570363d = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Kill",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_0570363e == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Kill_g____gette);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTSKillSoundEnum);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTSKillSoundEnum);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTSKillSoundEnum__object);
      DAT_0570363e = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTSKillSoundEnum__object);
    System_Func<object__object>___ctor();
    pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTSKillSoundEnum);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTSKillSoundEnum);
    return (CustomLogic_ICLMemberBinding_o *)pCVar5;
  }
  bVar1 = System_String__op_Equality(name,"Air",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_0570363f == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Air_g____getter);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTSKillSoundEnum);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTSKillSoundEnum);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTSKillSoundEnum__object);
      DAT_0570363f = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTSKillSoundEnum__object);
    System_Func<object__object>___ctor();
    pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTSKillSoundEnum);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTSKillSoundEnum);
    return (CustomLogic_ICLMemberBinding_o *)pCVar5;
  }
  bVar1 = System_String__op_Equality(name,"Ground",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality(name,"ArmorHit",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703641 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ArmorHit_g____g);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTSKillSoundEnum);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTSKillSoundEnum);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTSKillSoundEnum__object);
        DAT_05703641 = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTSKillSoundEnum__object);
      System_Func<object__object>___ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTSKillSoundEnum);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTSKillSoundEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    bVar1 = System_String__op_Equality(name,"CloseShot",(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      bVar1 = System_String__op_Equality(name,"MaxRangeShot",(MethodInfo *)0x0);
      if ((char)bVar1 == '\0') {
        pSVar2 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
        str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicTSKillSoundEnum not found");
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
      if (DAT_05703643 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__MaxRangeShot_g);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTSKillSoundEnum);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTSKillSoundEnum);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTSKillSoundEnum__object);
        DAT_05703643 = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTSKillSoundEnum__object);
      System_Func<object__object>___ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTSKillSoundEnum);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTSKillSoundEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05703642 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__CloseShot_g);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTSKillSoundEnum);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTSKillSoundEnum);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTSKillSoundEnum__object);
      DAT_05703642 = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTSKillSoundEnum__object);
    System_Func<object__object>___ctor();
    pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTSKillSoundEnum);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTSKillSoundEnum);
    return (CustomLogic_ICLMemberBinding_o *)pCVar5;
  }
  if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703640 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Ground_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTSKillSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTSKillSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTSKillSoundEnum__object);
    DAT_05703640 = '\x01';
  }
  pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTSKillSoundEnum__object);
  System_Func<object__object>___ctor();
  pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTSKillSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTSKillSoundEnum);
  return (CustomLogic_ICLMemberBinding_o *)pCVar5;
}


// CustomLogic.CustomLogicTSKillSoundEnum.Bindings$$__CreatePropertyBinding__Kill
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o* CustomLogic_CustomLogicTSKillSoundEnum_Bindings____CreatePropertyBinding__Kill (const MethodInfo* method);
// 0x3e966a0

CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o *
CustomLogic_CustomLogicTSKillSoundEnum_Bindings____CreatePropertyBinding__Kill(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o *__this;
  
  if (DAT_0570363e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Kill_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTSKillSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTSKillSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTSKillSoundEnum__object);
    DAT_0570363e = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTSKillSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTSKillSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTSKillSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTSKillSoundEnum.Bindings$$__CreatePropertyBinding__Air
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o* CustomLogic_CustomLogicTSKillSoundEnum_Bindings____CreatePropertyBinding__Air (const MethodInfo* method);
// 0x3e96740

CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o *
CustomLogic_CustomLogicTSKillSoundEnum_Bindings____CreatePropertyBinding__Air(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o *__this;
  
  if (DAT_0570363f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Air_g____getter);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTSKillSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTSKillSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTSKillSoundEnum__object);
    DAT_0570363f = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTSKillSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTSKillSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTSKillSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTSKillSoundEnum.Bindings$$__CreatePropertyBinding__Ground
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o* CustomLogic_CustomLogicTSKillSoundEnum_Bindings____CreatePropertyBinding__Ground (const MethodInfo* method);
// 0x3e967e0

CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o *
CustomLogic_CustomLogicTSKillSoundEnum_Bindings____CreatePropertyBinding__Ground(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o *__this;
  
  if (DAT_05703640 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Ground_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTSKillSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTSKillSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTSKillSoundEnum__object);
    DAT_05703640 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTSKillSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTSKillSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTSKillSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTSKillSoundEnum.Bindings$$__CreatePropertyBinding__ArmorHit
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o* CustomLogic_CustomLogicTSKillSoundEnum_Bindings____CreatePropertyBinding__ArmorHit (const MethodInfo* method);
// 0x3e96880

CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o *
CustomLogic_CustomLogicTSKillSoundEnum_Bindings____CreatePropertyBinding__ArmorHit
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o *__this;
  
  if (DAT_05703641 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ArmorHit_g____g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTSKillSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTSKillSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTSKillSoundEnum__object);
    DAT_05703641 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTSKillSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTSKillSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTSKillSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTSKillSoundEnum.Bindings$$__CreatePropertyBinding__CloseShot
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o* CustomLogic_CustomLogicTSKillSoundEnum_Bindings____CreatePropertyBinding__CloseShot (const MethodInfo* method);
// 0x3e96920

CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o *
CustomLogic_CustomLogicTSKillSoundEnum_Bindings____CreatePropertyBinding__CloseShot
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o *__this;
  
  if (DAT_05703642 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__CloseShot_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTSKillSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTSKillSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTSKillSoundEnum__object);
    DAT_05703642 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTSKillSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTSKillSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTSKillSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTSKillSoundEnum.Bindings$$__CreatePropertyBinding__MaxRangeShot
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o* CustomLogic_CustomLogicTSKillSoundEnum_Bindings____CreatePropertyBinding__MaxRangeShot (const MethodInfo* method);
// 0x3e969c0

CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o *
CustomLogic_CustomLogicTSKillSoundEnum_Bindings____CreatePropertyBinding__MaxRangeShot
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o *__this;
  
  if (DAT_05703643 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__MaxRangeShot_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTSKillSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTSKillSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTSKillSoundEnum__object);
    DAT_05703643 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTSKillSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTSKillSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTSKillSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicTSKillSoundEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicTSKillSoundEnum_Bindings___cctor (const MethodInfo* method);
// 0x3e96a60

void CustomLogic_CustomLogicTSKillSoundEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_05703644 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"ArmorHit");
    il2cpp_init_method_metadata(&"MaxRangeShot");
    il2cpp_init_method_metadata(&"Air");
    il2cpp_init_method_metadata(&"Ground");
    il2cpp_init_method_metadata(&"CloseShot");
    il2cpp_init_method_metadata(&"Kill");
    DAT_05703644 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"Kill",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Air",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Ground",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ArmorHit",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"CloseShot",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"MaxRangeShot",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTSKillSoundEnum.Bindings$$<__CreatePropertyBinding__Kill>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTSKillSoundEnum_Bindings_____CreatePropertyBinding__Kill_g____getter_2_0 (CustomLogic_CustomLogicTSKillSoundEnum_o* __i, const MethodInfo* method);
// 0x3e96bd0

Il2CppObject *
CustomLogic_CustomLogicTSKillSoundEnum_Bindings__<__CreatePropertyBinding__Kill>g____getter_2_0
          (CustomLogic_CustomLogicTSKillSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703645 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicTSKillSoundEnum);
    DAT_05703645 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_0570383b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicTSKillSoundEnum);
    DAT_0570383b = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return (Il2CppObject *)**(undefined8 **)(TypeInfo_CustomLogicTSKillSoundEnum + 0xb8);
  }
  il2cpp_init_class();
  return (Il2CppObject *)**(undefined8 **)(TypeInfo_CustomLogicTSKillSoundEnum + 0xb8);
}


// CustomLogic.CustomLogicTSKillSoundEnum.Bindings$$<__CreatePropertyBinding__Air>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTSKillSoundEnum_Bindings_____CreatePropertyBinding__Air_g____getter_3_0 (CustomLogic_CustomLogicTSKillSoundEnum_o* __i, const MethodInfo* method);
// 0x3e96c80

Il2CppObject *
CustomLogic_CustomLogicTSKillSoundEnum_Bindings__<__CreatePropertyBinding__Air>g____getter_3_0
          (CustomLogic_CustomLogicTSKillSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703646 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicTSKillSoundEnum);
    DAT_05703646 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_0570383c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicTSKillSoundEnum);
    DAT_0570383c = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xb8) + 8);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xb8) + 8);
}


// CustomLogic.CustomLogicTSKillSoundEnum.Bindings$$<__CreatePropertyBinding__Ground>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTSKillSoundEnum_Bindings_____CreatePropertyBinding__Ground_g____getter_4_0 (CustomLogic_CustomLogicTSKillSoundEnum_o* __i, const MethodInfo* method);
// 0x3e96d30

Il2CppObject *
CustomLogic_CustomLogicTSKillSoundEnum_Bindings__<__CreatePropertyBinding__Ground>g____getter_4_0
          (CustomLogic_CustomLogicTSKillSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703647 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicTSKillSoundEnum);
    DAT_05703647 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_0570383d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicTSKillSoundEnum);
    DAT_0570383d = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xb8) + 0x10);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicTSKillSoundEnum.Bindings$$<__CreatePropertyBinding__ArmorHit>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTSKillSoundEnum_Bindings_____CreatePropertyBinding__ArmorHit_g____getter_5_0 (CustomLogic_CustomLogicTSKillSoundEnum_o* __i, const MethodInfo* method);
// 0x3e96de0

Il2CppObject *
CustomLogic_CustomLogicTSKillSoundEnum_Bindings__<__CreatePropertyBinding__ArmorHit>g____getter_5_0
          (CustomLogic_CustomLogicTSKillSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703648 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicTSKillSoundEnum);
    DAT_05703648 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_0570383e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicTSKillSoundEnum);
    DAT_0570383e = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xb8) + 0x18);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xb8) + 0x18);
}


// CustomLogic.CustomLogicTSKillSoundEnum.Bindings$$<__CreatePropertyBinding__CloseShot>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTSKillSoundEnum_Bindings_____CreatePropertyBinding__CloseShot_g____getter_6_0 (CustomLogic_CustomLogicTSKillSoundEnum_o* __i, const MethodInfo* method);
// 0x3e96e90

Il2CppObject *
CustomLogic_CustomLogicTSKillSoundEnum_Bindings__<__CreatePropertyBinding__CloseShot>g____getter_6_0
          (CustomLogic_CustomLogicTSKillSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703649 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicTSKillSoundEnum);
    DAT_05703649 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_0570383f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicTSKillSoundEnum);
    DAT_0570383f = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xb8) + 0x20);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xb8) + 0x20);
}


// CustomLogic.CustomLogicTSKillSoundEnum.Bindings$$<__CreatePropertyBinding__MaxRangeShot>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTSKillSoundEnum_Bindings_____CreatePropertyBinding__MaxRangeShot_g____getter_7_0 (CustomLogic_CustomLogicTSKillSoundEnum_o* __i, const MethodInfo* method);
// 0x3e96f40

Il2CppObject *
CustomLogic_CustomLogicTSKillSoundEnum_Bindings__<__CreatePropertyBinding__MaxRangeShot>g____getter_7_0
          (CustomLogic_CustomLogicTSKillSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570364a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicTSKillSoundEnum);
    DAT_0570364a = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703840 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicTSKillSoundEnum);
    DAT_05703840 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xb8) + 0x28);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xb8) + 0x28);
}


// CustomLogic.CustomLogicTSKillSoundEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicTSKillSoundEnum___ctor (CustomLogic_CustomLogicTSKillSoundEnum_o* __this, const MethodInfo* method);
// 0x3e95dc0

void CustomLogic_CustomLogicTSKillSoundEnum___ctor
               (CustomLogic_CustomLogicTSKillSoundEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703633 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_05703633 = '\x01';
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


// CustomLogic.CustomLogicTSKillSoundEnum$$get_Kill
// il2cpp: System_String_o* CustomLogic_CustomLogicTSKillSoundEnum__get_Kill (const MethodInfo* method);
// 0x3e95e30

System_String_o * CustomLogic_CustomLogicTSKillSoundEnum__get_Kill(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703634 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicTSKillSoundEnum);
    DAT_05703634 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return (System_String_o *)**(undefined8 **)(TypeInfo_CustomLogicTSKillSoundEnum + 0xb8);
  }
  il2cpp_init_class();
  return (System_String_o *)**(undefined8 **)(TypeInfo_CustomLogicTSKillSoundEnum + 0xb8);
}


// CustomLogic.CustomLogicTSKillSoundEnum$$get_Air
// il2cpp: System_String_o* CustomLogic_CustomLogicTSKillSoundEnum__get_Air (const MethodInfo* method);
// 0x3e95ea0

System_String_o * CustomLogic_CustomLogicTSKillSoundEnum__get_Air(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703635 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicTSKillSoundEnum);
    DAT_05703635 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xb8) + 8);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xb8) + 8);
}


// CustomLogic.CustomLogicTSKillSoundEnum$$get_Ground
// il2cpp: System_String_o* CustomLogic_CustomLogicTSKillSoundEnum__get_Ground (const MethodInfo* method);
// 0x3e95f10

System_String_o * CustomLogic_CustomLogicTSKillSoundEnum__get_Ground(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703636 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicTSKillSoundEnum);
    DAT_05703636 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xb8) + 0x10);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicTSKillSoundEnum$$get_ArmorHit
// il2cpp: System_String_o* CustomLogic_CustomLogicTSKillSoundEnum__get_ArmorHit (const MethodInfo* method);
// 0x3e95f80

System_String_o * CustomLogic_CustomLogicTSKillSoundEnum__get_ArmorHit(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703637 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicTSKillSoundEnum);
    DAT_05703637 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xb8) + 0x18);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xb8) + 0x18);
}


// CustomLogic.CustomLogicTSKillSoundEnum$$get_CloseShot
// il2cpp: System_String_o* CustomLogic_CustomLogicTSKillSoundEnum__get_CloseShot (const MethodInfo* method);
// 0x3e95ff0

System_String_o * CustomLogic_CustomLogicTSKillSoundEnum__get_CloseShot(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703638 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicTSKillSoundEnum);
    DAT_05703638 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xb8) + 0x20);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xb8) + 0x20);
}


// CustomLogic.CustomLogicTSKillSoundEnum$$get_MaxRangeShot
// il2cpp: System_String_o* CustomLogic_CustomLogicTSKillSoundEnum__get_MaxRangeShot (const MethodInfo* method);
// 0x3e96060

System_String_o * CustomLogic_CustomLogicTSKillSoundEnum__get_MaxRangeShot(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703639 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicTSKillSoundEnum);
    DAT_05703639 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xb8) + 0x28);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xb8) + 0x28);
}


// CustomLogic.CustomLogicTSKillSoundEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicTSKillSoundEnum__get_ClassName (CustomLogic_CustomLogicTSKillSoundEnum_o* __this, const MethodInfo* method);
// 0x3e960d0

System_String_o *
CustomLogic_CustomLogicTSKillSoundEnum__get_ClassName
          (CustomLogic_CustomLogicTSKillSoundEnum_o *__this,MethodInfo *method)

{
  if (DAT_0570363a == '\0') {
    il2cpp_init_method_metadata(&"TSKillSoundEnum");
    DAT_0570363a = '\x01';
  }
  return "TSKillSoundEnum";
}


// CustomLogic.CustomLogicTSKillSoundEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicTSKillSoundEnum__get_IsAbstract (CustomLogic_CustomLogicTSKillSoundEnum_o* __this, const MethodInfo* method);
// 0x3e96100

bool_conflict
CustomLogic_CustomLogicTSKillSoundEnum__get_IsAbstract
          (CustomLogic_CustomLogicTSKillSoundEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicTSKillSoundEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicTSKillSoundEnum__get_IsStatic (CustomLogic_CustomLogicTSKillSoundEnum_o* __this, const MethodInfo* method);
// 0x3e96110

bool_conflict
CustomLogic_CustomLogicTSKillSoundEnum__get_IsStatic
          (CustomLogic_CustomLogicTSKillSoundEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicTSKillSoundEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicTSKillSoundEnum__get_InheritBaseMembers (CustomLogic_CustomLogicTSKillSoundEnum_o* __this, const MethodInfo* method);
// 0x3e96120

bool_conflict
CustomLogic_CustomLogicTSKillSoundEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicTSKillSoundEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicTSKillSoundEnum$$.cctor
// il2cpp: void CustomLogic_CustomLogicTSKillSoundEnum___cctor (const MethodInfo* method);
// 0x3e96130

void CustomLogic_CustomLogicTSKillSoundEnum___cctor(MethodInfo *method)

{
  long lVar1;
  System_String_o *pSVar2;
  System_Enum_o SStack_a0;
  undefined4 uStack_90;
  System_Enum_o SStack_88;
  undefined4 uStack_78;
  System_Enum_o SStack_70;
  undefined4 uStack_60;
  System_Enum_o SStack_58;
  undefined4 uStack_48;
  System_Enum_o SStack_40;
  undefined4 uStack_30;
  System_Enum_o SStack_28;
  undefined4 uStack_18;
  
  if (DAT_0570363b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicTSKillSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_TSKillType);
    DAT_0570363b = '\x01';
  }
  SStack_28.klass = TypeInfo_TSKillType;
  SStack_28.monitor = (void *)0xffffffffffffffff;
  uStack_18 = 2;
  pSVar2 = System_Enum__ToString(&SStack_28,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_CustomLogicTSKillSoundEnum + 0xb8) = pSVar2;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xb8));
  SStack_40.klass = TypeInfo_TSKillType;
  SStack_40.monitor = (void *)0xffffffffffffffff;
  uStack_30 = 0;
  pSVar2 = System_Enum__ToString(&SStack_40,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xb8);
  *(System_String_o **)(lVar1 + 8) = pSVar2;
  il2cpp_runtime_glue(lVar1 + 8);
  SStack_58.klass = TypeInfo_TSKillType;
  SStack_58.monitor = (void *)0xffffffffffffffff;
  uStack_48 = 1;
  pSVar2 = System_Enum__ToString(&SStack_58,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xb8);
  *(System_String_o **)(lVar1 + 0x10) = pSVar2;
  il2cpp_runtime_glue(lVar1 + 0x10);
  SStack_70.klass = TypeInfo_TSKillType;
  SStack_70.monitor = (void *)0xffffffffffffffff;
  uStack_60 = 3;
  pSVar2 = System_Enum__ToString(&SStack_70,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xb8);
  *(System_String_o **)(lVar1 + 0x18) = pSVar2;
  il2cpp_runtime_glue(lVar1 + 0x18);
  SStack_88.klass = TypeInfo_TSKillType;
  SStack_88.monitor = (void *)0xffffffffffffffff;
  uStack_78 = 4;
  pSVar2 = System_Enum__ToString(&SStack_88,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xb8);
  *(System_String_o **)(lVar1 + 0x20) = pSVar2;
  il2cpp_runtime_glue(lVar1 + 0x20);
  SStack_a0.klass = TypeInfo_TSKillType;
  SStack_a0.monitor = (void *)0xffffffffffffffff;
  uStack_90 = 5;
  pSVar2 = System_Enum__ToString(&SStack_a0,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_CustomLogicTSKillSoundEnum + 0xb8);
  *(System_String_o **)(lVar1 + 0x28) = pSVar2;
  il2cpp_runtime_glue(lVar1 + 0x28,pSVar2);
  return;
}


