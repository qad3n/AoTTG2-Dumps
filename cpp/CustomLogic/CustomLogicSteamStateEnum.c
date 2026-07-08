// Type: CustomLogic.CustomLogicSteamStateEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicSteamStateEnum.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicSteamStateEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicSteamStateEnum_o* CustomLogic_CustomLogicSteamStateEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3e950c0

CustomLogic_CustomLogicSteamStateEnum_o *
CustomLogic_CustomLogicSteamStateEnum_Factory__CreateInstance
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
  if (DAT_05703625 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicSteamStateEnum);
    DAT_05703625 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicSteamStateEnum);
      if (DAT_05703623 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_05703623 = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicSteamStateEnum_o *)__this;
    }
    il2cpp_glue_01f2f1a0(args);
    uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
    pSVar1 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicSteamStateEnum constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicSteamStateEnum_CreateInstance);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicSteamStateEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicSteamStateEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3e951e0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicSteamStateEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  System_String_o *str2;
  undefined8 uVar3;
  System_Exception_o *__this;
  System_Func_T__object__o *pSVar4;
  CustomLogic_CLPropertyBinding_T__o *pCVar5;
  
  if (DAT_05703626 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"Damage");
    il2cpp_init_method_metadata(&"Warning");
    il2cpp_init_method_metadata(&"Off");
    DAT_05703626 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Off",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05703627 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Off_g____getter);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicSteamStateEnum);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicSteamStateEnum);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSteamStateEnum__object);
      DAT_05703627 = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSteamStateEnum__object);
    System_Func<object__object>___ctor();
    pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicSteamStateEnum);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicSteamStateEnum);
    return (CustomLogic_ICLMemberBinding_o *)pCVar5;
  }
  bVar1 = System_String__op_Equality(name,"Warning",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05703628 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Warning_g____ge);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicSteamStateEnum);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicSteamStateEnum);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSteamStateEnum__object);
      DAT_05703628 = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSteamStateEnum__object);
    System_Func<object__object>___ctor();
    pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicSteamStateEnum);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicSteamStateEnum);
    return (CustomLogic_ICLMemberBinding_o *)pCVar5;
  }
  bVar1 = System_String__op_Equality(name,"Damage",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    pSVar2 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicSteamStateEnum not found");
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
  if (DAT_05703629 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Damage_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicSteamStateEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicSteamStateEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSteamStateEnum__object);
    DAT_05703629 = '\x01';
  }
  pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSteamStateEnum__object);
  System_Func<object__object>___ctor();
  pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicSteamStateEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicSteamStateEnum);
  return (CustomLogic_ICLMemberBinding_o *)pCVar5;
}


// CustomLogic.CustomLogicSteamStateEnum.Bindings$$__CreatePropertyBinding__Off
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSteamStateEnum__o* CustomLogic_CustomLogicSteamStateEnum_Bindings____CreatePropertyBinding__Off (const MethodInfo* method);
// 0x3e95370

CustomLogic_CLPropertyBinding_CustomLogicSteamStateEnum__o *
CustomLogic_CustomLogicSteamStateEnum_Bindings____CreatePropertyBinding__Off(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicSteamStateEnum__o *__this;
  
  if (DAT_05703627 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Off_g____getter);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicSteamStateEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicSteamStateEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSteamStateEnum__object);
    DAT_05703627 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSteamStateEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicSteamStateEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicSteamStateEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicSteamStateEnum);
  return __this;
}


// CustomLogic.CustomLogicSteamStateEnum.Bindings$$__CreatePropertyBinding__Warning
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSteamStateEnum__o* CustomLogic_CustomLogicSteamStateEnum_Bindings____CreatePropertyBinding__Warning (const MethodInfo* method);
// 0x3e95410

CustomLogic_CLPropertyBinding_CustomLogicSteamStateEnum__o *
CustomLogic_CustomLogicSteamStateEnum_Bindings____CreatePropertyBinding__Warning(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicSteamStateEnum__o *__this;
  
  if (DAT_05703628 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Warning_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicSteamStateEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicSteamStateEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSteamStateEnum__object);
    DAT_05703628 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSteamStateEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicSteamStateEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicSteamStateEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicSteamStateEnum);
  return __this;
}


// CustomLogic.CustomLogicSteamStateEnum.Bindings$$__CreatePropertyBinding__Damage
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSteamStateEnum__o* CustomLogic_CustomLogicSteamStateEnum_Bindings____CreatePropertyBinding__Damage (const MethodInfo* method);
// 0x3e954b0

CustomLogic_CLPropertyBinding_CustomLogicSteamStateEnum__o *
CustomLogic_CustomLogicSteamStateEnum_Bindings____CreatePropertyBinding__Damage(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicSteamStateEnum__o *__this;
  
  if (DAT_05703629 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Damage_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicSteamStateEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicSteamStateEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSteamStateEnum__object);
    DAT_05703629 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSteamStateEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicSteamStateEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicSteamStateEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicSteamStateEnum);
  return __this;
}


// CustomLogic.CustomLogicSteamStateEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicSteamStateEnum_Bindings___cctor (const MethodInfo* method);
// 0x3e95550

void CustomLogic_CustomLogicSteamStateEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_0570362a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"Damage");
    il2cpp_init_method_metadata(&"Warning");
    il2cpp_init_method_metadata(&"Off");
    DAT_0570362a = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"Off",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Warning",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Damage",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicSteamStateEnum.Bindings$$<__CreatePropertyBinding__Off>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSteamStateEnum_Bindings_____CreatePropertyBinding__Off_g____getter_2_0 (CustomLogic_CustomLogicSteamStateEnum_o* __i, const MethodInfo* method);
// 0x3e95660

Il2CppObject *
CustomLogic_CustomLogicSteamStateEnum_Bindings__<__CreatePropertyBinding__Off>g____getter_2_0
          (CustomLogic_CustomLogicSteamStateEnum_o *__i,MethodInfo *method)

{
  uint in_EAX;
  Il2CppObject *pIVar1;
  undefined8 uStack_8;
  
  uStack_8 = (ulong)in_EAX;
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,(long)&uStack_8 + 4);
  return pIVar1;
}


// CustomLogic.CustomLogicSteamStateEnum.Bindings$$<__CreatePropertyBinding__Warning>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSteamStateEnum_Bindings_____CreatePropertyBinding__Warning_g____getter_3_0 (CustomLogic_CustomLogicSteamStateEnum_o* __i, const MethodInfo* method);
// 0x3e95680

Il2CppObject *
CustomLogic_CustomLogicSteamStateEnum_Bindings__<__CreatePropertyBinding__Warning>g____getter_3_0
          (CustomLogic_CustomLogicSteamStateEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicSteamStateEnum.Bindings$$<__CreatePropertyBinding__Damage>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSteamStateEnum_Bindings_____CreatePropertyBinding__Damage_g____getter_4_0 (CustomLogic_CustomLogicSteamStateEnum_o* __i, const MethodInfo* method);
// 0x3e956a0

Il2CppObject *
CustomLogic_CustomLogicSteamStateEnum_Bindings__<__CreatePropertyBinding__Damage>g____getter_4_0
          (CustomLogic_CustomLogicSteamStateEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicSteamStateEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicSteamStateEnum___ctor (CustomLogic_CustomLogicSteamStateEnum_o* __this, const MethodInfo* method);
// 0x3e94fc0

void CustomLogic_CustomLogicSteamStateEnum___ctor
               (CustomLogic_CustomLogicSteamStateEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703623 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_05703623 = '\x01';
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


// CustomLogic.CustomLogicSteamStateEnum$$get_Off
// il2cpp: int32_t CustomLogic_CustomLogicSteamStateEnum__get_Off (const MethodInfo* method);
// 0x3e95030

int32_t CustomLogic_CustomLogicSteamStateEnum__get_Off(MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicSteamStateEnum$$get_Warning
// il2cpp: int32_t CustomLogic_CustomLogicSteamStateEnum__get_Warning (const MethodInfo* method);
// 0x3e95040

int32_t CustomLogic_CustomLogicSteamStateEnum__get_Warning(MethodInfo *method)

{
  return 1;
}


// CustomLogic.CustomLogicSteamStateEnum$$get_Damage
// il2cpp: int32_t CustomLogic_CustomLogicSteamStateEnum__get_Damage (const MethodInfo* method);
// 0x3e95050

int32_t CustomLogic_CustomLogicSteamStateEnum__get_Damage(MethodInfo *method)

{
  return 2;
}


// CustomLogic.CustomLogicSteamStateEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicSteamStateEnum__get_ClassName (CustomLogic_CustomLogicSteamStateEnum_o* __this, const MethodInfo* method);
// 0x3e95060

System_String_o *
CustomLogic_CustomLogicSteamStateEnum__get_ClassName
          (CustomLogic_CustomLogicSteamStateEnum_o *__this,MethodInfo *method)

{
  if (DAT_05703624 == '\0') {
    il2cpp_init_method_metadata(&"SteamStateEnum");
    DAT_05703624 = '\x01';
  }
  return "SteamStateEnum";
}


// CustomLogic.CustomLogicSteamStateEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicSteamStateEnum__get_IsAbstract (CustomLogic_CustomLogicSteamStateEnum_o* __this, const MethodInfo* method);
// 0x3e95090

bool_conflict
CustomLogic_CustomLogicSteamStateEnum__get_IsAbstract
          (CustomLogic_CustomLogicSteamStateEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicSteamStateEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicSteamStateEnum__get_IsStatic (CustomLogic_CustomLogicSteamStateEnum_o* __this, const MethodInfo* method);
// 0x3e950a0

bool_conflict
CustomLogic_CustomLogicSteamStateEnum__get_IsStatic
          (CustomLogic_CustomLogicSteamStateEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicSteamStateEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicSteamStateEnum__get_InheritBaseMembers (CustomLogic_CustomLogicSteamStateEnum_o* __this, const MethodInfo* method);
// 0x3e950b0

bool_conflict
CustomLogic_CustomLogicSteamStateEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicSteamStateEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


