// Type: CustomLogic.CustomLogicHumanParticleEffectEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicHumanParticleEffectEnum.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicHumanParticleEffectEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicHumanParticleEffectEnum_o* CustomLogic_CustomLogicHumanParticleEffectEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3e5b590

CustomLogic_CustomLogicHumanParticleEffectEnum_o *
CustomLogic_CustomLogicHumanParticleEffectEnum_Factory__CreateInstance
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
  if (DAT_05703057 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicHumanParticleEffectEnum);
    DAT_05703057 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicHumanParticleEffectEnum);
      if (DAT_05703052 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_05703052 = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicHumanParticleEffectEnum_o *)__this;
    }
    il2cpp_glue_01f2f1a0(args);
    uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
    pSVar1 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicHumanParticleEffectEnum constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicHumanParticleEffectEnum_CreateInstanc);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanParticleEffectEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicHumanParticleEffectEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3e5b6b0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicHumanParticleEffectEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  System_String_o *str2;
  undefined8 uVar3;
  System_Exception_o *__this;
  System_Func_T__object__o *pSVar4;
  CustomLogic_CLPropertyBinding_T__o *pCVar5;
  
  if (DAT_05703058 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"Buff2");
    il2cpp_init_method_metadata(&"Buff1");
    il2cpp_init_method_metadata(&"Fire1");
    DAT_05703058 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Buff1",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05703059 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Buff1_g____gett);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanParticleEffe);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanParticleEffect);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanParticleEffectEnum__object);
      DAT_05703059 = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanParticleEffectEnum__object);
    System_Func<object__object>___ctor();
    pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanParticleEffect);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanParticleEffe);
    return (CustomLogic_ICLMemberBinding_o *)pCVar5;
  }
  bVar1 = System_String__op_Equality(name,"Buff2",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_0570305a == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Buff2_g____gett);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanParticleEffe);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanParticleEffect);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanParticleEffectEnum__object);
      DAT_0570305a = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanParticleEffectEnum__object);
    System_Func<object__object>___ctor();
    pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanParticleEffect);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanParticleEffe);
    return (CustomLogic_ICLMemberBinding_o *)pCVar5;
  }
  bVar1 = System_String__op_Equality(name,"Fire1",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    pSVar2 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicHumanParticleEffectEnum not found");
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
  if (DAT_0570305b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Fire1_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanParticleEffe);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanParticleEffect);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanParticleEffectEnum__object);
    DAT_0570305b = '\x01';
  }
  pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanParticleEffectEnum__object);
  System_Func<object__object>___ctor();
  pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanParticleEffect);
  CustomLogic_CLPropertyBinding<object>___ctor
            (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanParticleEffe);
  return (CustomLogic_ICLMemberBinding_o *)pCVar5;
}


// CustomLogic.CustomLogicHumanParticleEffectEnum.Bindings$$__CreatePropertyBinding__Buff1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanParticleEffectEnum__o* CustomLogic_CustomLogicHumanParticleEffectEnum_Bindings____CreatePropertyBinding__Buff1 (const MethodInfo* method);
// 0x3e5b840

CustomLogic_CLPropertyBinding_CustomLogicHumanParticleEffectEnum__o *
CustomLogic_CustomLogicHumanParticleEffectEnum_Bindings____CreatePropertyBinding__Buff1
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanParticleEffectEnum__o *__this;
  
  if (DAT_05703059 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Buff1_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanParticleEffe);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanParticleEffect);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanParticleEffectEnum__object);
    DAT_05703059 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanParticleEffectEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanParticleEffectEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanParticleEffect);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanParticleEffe);
  return __this;
}


// CustomLogic.CustomLogicHumanParticleEffectEnum.Bindings$$__CreatePropertyBinding__Buff2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanParticleEffectEnum__o* CustomLogic_CustomLogicHumanParticleEffectEnum_Bindings____CreatePropertyBinding__Buff2 (const MethodInfo* method);
// 0x3e5b8e0

CustomLogic_CLPropertyBinding_CustomLogicHumanParticleEffectEnum__o *
CustomLogic_CustomLogicHumanParticleEffectEnum_Bindings____CreatePropertyBinding__Buff2
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanParticleEffectEnum__o *__this;
  
  if (DAT_0570305a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Buff2_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanParticleEffe);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanParticleEffect);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanParticleEffectEnum__object);
    DAT_0570305a = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanParticleEffectEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanParticleEffectEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanParticleEffect);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanParticleEffe);
  return __this;
}


// CustomLogic.CustomLogicHumanParticleEffectEnum.Bindings$$__CreatePropertyBinding__Fire1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanParticleEffectEnum__o* CustomLogic_CustomLogicHumanParticleEffectEnum_Bindings____CreatePropertyBinding__Fire1 (const MethodInfo* method);
// 0x3e5b980

CustomLogic_CLPropertyBinding_CustomLogicHumanParticleEffectEnum__o *
CustomLogic_CustomLogicHumanParticleEffectEnum_Bindings____CreatePropertyBinding__Fire1
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanParticleEffectEnum__o *__this;
  
  if (DAT_0570305b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Fire1_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanParticleEffe);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanParticleEffect);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanParticleEffectEnum__object);
    DAT_0570305b = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanParticleEffectEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanParticleEffectEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanParticleEffect);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanParticleEffe);
  return __this;
}


// CustomLogic.CustomLogicHumanParticleEffectEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicHumanParticleEffectEnum_Bindings___cctor (const MethodInfo* method);
// 0x3e5ba20

void CustomLogic_CustomLogicHumanParticleEffectEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_0570305c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"Buff2");
    il2cpp_init_method_metadata(&"Buff1");
    il2cpp_init_method_metadata(&"Fire1");
    DAT_0570305c = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"Buff1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Buff2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Fire1",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanParticleEffectEnum.Bindings$$<__CreatePropertyBinding__Buff1>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanParticleEffectEnum_Bindings_____CreatePropertyBinding__Buff1_g____getter_2_0 (CustomLogic_CustomLogicHumanParticleEffectEnum_o* __i, const MethodInfo* method);
// 0x3e5bb30

Il2CppObject *
CustomLogic_CustomLogicHumanParticleEffectEnum_Bindings__<__CreatePropertyBinding__Buff1>g____getter_2_0
          (CustomLogic_CustomLogicHumanParticleEffectEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703053 == '\0') {
    il2cpp_init_method_metadata(&"Buff1");
    DAT_05703053 = '\x01';
  }
  return "Buff1";
}


// CustomLogic.CustomLogicHumanParticleEffectEnum.Bindings$$<__CreatePropertyBinding__Buff2>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanParticleEffectEnum_Bindings_____CreatePropertyBinding__Buff2_g____getter_3_0 (CustomLogic_CustomLogicHumanParticleEffectEnum_o* __i, const MethodInfo* method);
// 0x3e5bb60

Il2CppObject *
CustomLogic_CustomLogicHumanParticleEffectEnum_Bindings__<__CreatePropertyBinding__Buff2>g____getter_3_0
          (CustomLogic_CustomLogicHumanParticleEffectEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703054 == '\0') {
    il2cpp_init_method_metadata(&"Buff2");
    DAT_05703054 = '\x01';
  }
  return "Buff2";
}


// CustomLogic.CustomLogicHumanParticleEffectEnum.Bindings$$<__CreatePropertyBinding__Fire1>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanParticleEffectEnum_Bindings_____CreatePropertyBinding__Fire1_g____getter_4_0 (CustomLogic_CustomLogicHumanParticleEffectEnum_o* __i, const MethodInfo* method);
// 0x3e5bb90

Il2CppObject *
CustomLogic_CustomLogicHumanParticleEffectEnum_Bindings__<__CreatePropertyBinding__Fire1>g____getter_4_0
          (CustomLogic_CustomLogicHumanParticleEffectEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703055 == '\0') {
    il2cpp_init_method_metadata(&"Fire1");
    DAT_05703055 = '\x01';
  }
  return "Fire1";
}


// CustomLogic.CustomLogicHumanParticleEffectEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicHumanParticleEffectEnum___ctor (CustomLogic_CustomLogicHumanParticleEffectEnum_o* __this, const MethodInfo* method);
// 0x3e5b430

void CustomLogic_CustomLogicHumanParticleEffectEnum___ctor
               (CustomLogic_CustomLogicHumanParticleEffectEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703052 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_05703052 = '\x01';
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


// CustomLogic.CustomLogicHumanParticleEffectEnum$$get_Buff1
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanParticleEffectEnum__get_Buff1 (const MethodInfo* method);
// 0x3e5b4a0

System_String_o * CustomLogic_CustomLogicHumanParticleEffectEnum__get_Buff1(MethodInfo *method)

{
  if (DAT_05703053 == '\0') {
    il2cpp_init_method_metadata(&"Buff1");
    DAT_05703053 = '\x01';
  }
  return "Buff1";
}


// CustomLogic.CustomLogicHumanParticleEffectEnum$$get_Buff2
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanParticleEffectEnum__get_Buff2 (const MethodInfo* method);
// 0x3e5b4d0

System_String_o * CustomLogic_CustomLogicHumanParticleEffectEnum__get_Buff2(MethodInfo *method)

{
  if (DAT_05703054 == '\0') {
    il2cpp_init_method_metadata(&"Buff2");
    DAT_05703054 = '\x01';
  }
  return "Buff2";
}


// CustomLogic.CustomLogicHumanParticleEffectEnum$$get_Fire1
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanParticleEffectEnum__get_Fire1 (const MethodInfo* method);
// 0x3e5b500

System_String_o * CustomLogic_CustomLogicHumanParticleEffectEnum__get_Fire1(MethodInfo *method)

{
  if (DAT_05703055 == '\0') {
    il2cpp_init_method_metadata(&"Fire1");
    DAT_05703055 = '\x01';
  }
  return "Fire1";
}


// CustomLogic.CustomLogicHumanParticleEffectEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanParticleEffectEnum__get_ClassName (CustomLogic_CustomLogicHumanParticleEffectEnum_o* __this, const MethodInfo* method);
// 0x3e5b530

System_String_o *
CustomLogic_CustomLogicHumanParticleEffectEnum__get_ClassName
          (CustomLogic_CustomLogicHumanParticleEffectEnum_o *__this,MethodInfo *method)

{
  if (DAT_05703056 == '\0') {
    il2cpp_init_method_metadata(&"HumanParticleEffectEnum");
    DAT_05703056 = '\x01';
  }
  return "HumanParticleEffectEnum";
}


// CustomLogic.CustomLogicHumanParticleEffectEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicHumanParticleEffectEnum__get_IsAbstract (CustomLogic_CustomLogicHumanParticleEffectEnum_o* __this, const MethodInfo* method);
// 0x3e5b560

bool_conflict
CustomLogic_CustomLogicHumanParticleEffectEnum__get_IsAbstract
          (CustomLogic_CustomLogicHumanParticleEffectEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicHumanParticleEffectEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicHumanParticleEffectEnum__get_IsStatic (CustomLogic_CustomLogicHumanParticleEffectEnum_o* __this, const MethodInfo* method);
// 0x3e5b570

bool_conflict
CustomLogic_CustomLogicHumanParticleEffectEnum__get_IsStatic
          (CustomLogic_CustomLogicHumanParticleEffectEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicHumanParticleEffectEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicHumanParticleEffectEnum__get_InheritBaseMembers (CustomLogic_CustomLogicHumanParticleEffectEnum_o* __this, const MethodInfo* method);
// 0x3e5b580

bool_conflict
CustomLogic_CustomLogicHumanParticleEffectEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicHumanParticleEffectEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


