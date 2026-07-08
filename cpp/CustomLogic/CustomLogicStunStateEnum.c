// Type: CustomLogic.CustomLogicStunStateEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicStunStateEnum.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicStunStateEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicStunStateEnum_o* CustomLogic_CustomLogicStunStateEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3e957c0

CustomLogic_CustomLogicStunStateEnum_o *
CustomLogic_CustomLogicStunStateEnum_Factory__CreateInstance
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
  if (DAT_0570362d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicStunStateEnum);
    DAT_0570362d = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicStunStateEnum);
      if (DAT_0570362b == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_0570362b = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicStunStateEnum_o *)__this;
    }
    il2cpp_glue_01f2f1a0(args);
    uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
    pSVar1 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicStunStateEnum constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicStunStateEnum_CreateInstance);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicStunStateEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicStunStateEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3e958e0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicStunStateEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  System_String_o *str2;
  undefined8 uVar3;
  System_Exception_o *__this;
  System_Func_T__object__o *pSVar4;
  CustomLogic_CLPropertyBinding_T__o *pCVar5;
  
  if (DAT_0570362e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"None");
    il2cpp_init_method_metadata(&"Stunned");
    il2cpp_init_method_metadata(&"Recovering");
    DAT_0570362e = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"None",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_0570362f == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__None_g____gette);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicStunStateEnum);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicStunStateEnum);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicStunStateEnum__object);
      DAT_0570362f = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicStunStateEnum__object);
    System_Func<object__object>___ctor();
    pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicStunStateEnum);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicStunStateEnum);
    return (CustomLogic_ICLMemberBinding_o *)pCVar5;
  }
  bVar1 = System_String__op_Equality(name,"Stunned",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05703630 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Stunned_g____ge);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicStunStateEnum);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicStunStateEnum);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicStunStateEnum__object);
      DAT_05703630 = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicStunStateEnum__object);
    System_Func<object__object>___ctor();
    pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicStunStateEnum);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicStunStateEnum);
    return (CustomLogic_ICLMemberBinding_o *)pCVar5;
  }
  bVar1 = System_String__op_Equality(name,"Recovering",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    pSVar2 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicStunStateEnum not found");
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
  if (DAT_05703631 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Recovering_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicStunStateEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicStunStateEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicStunStateEnum__object);
    DAT_05703631 = '\x01';
  }
  pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicStunStateEnum__object);
  System_Func<object__object>___ctor();
  pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicStunStateEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicStunStateEnum);
  return (CustomLogic_ICLMemberBinding_o *)pCVar5;
}


// CustomLogic.CustomLogicStunStateEnum.Bindings$$__CreatePropertyBinding__None
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicStunStateEnum__o* CustomLogic_CustomLogicStunStateEnum_Bindings____CreatePropertyBinding__None (const MethodInfo* method);
// 0x3e95a70

CustomLogic_CLPropertyBinding_CustomLogicStunStateEnum__o *
CustomLogic_CustomLogicStunStateEnum_Bindings____CreatePropertyBinding__None(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicStunStateEnum__o *__this;
  
  if (DAT_0570362f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__None_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicStunStateEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicStunStateEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicStunStateEnum__object);
    DAT_0570362f = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicStunStateEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicStunStateEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicStunStateEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicStunStateEnum);
  return __this;
}


// CustomLogic.CustomLogicStunStateEnum.Bindings$$__CreatePropertyBinding__Stunned
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicStunStateEnum__o* CustomLogic_CustomLogicStunStateEnum_Bindings____CreatePropertyBinding__Stunned (const MethodInfo* method);
// 0x3e95b10

CustomLogic_CLPropertyBinding_CustomLogicStunStateEnum__o *
CustomLogic_CustomLogicStunStateEnum_Bindings____CreatePropertyBinding__Stunned(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicStunStateEnum__o *__this;
  
  if (DAT_05703630 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Stunned_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicStunStateEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicStunStateEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicStunStateEnum__object);
    DAT_05703630 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicStunStateEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicStunStateEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicStunStateEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicStunStateEnum);
  return __this;
}


// CustomLogic.CustomLogicStunStateEnum.Bindings$$__CreatePropertyBinding__Recovering
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicStunStateEnum__o* CustomLogic_CustomLogicStunStateEnum_Bindings____CreatePropertyBinding__Recovering (const MethodInfo* method);
// 0x3e95bb0

CustomLogic_CLPropertyBinding_CustomLogicStunStateEnum__o *
CustomLogic_CustomLogicStunStateEnum_Bindings____CreatePropertyBinding__Recovering
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicStunStateEnum__o *__this;
  
  if (DAT_05703631 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Recovering_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicStunStateEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicStunStateEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicStunStateEnum__object);
    DAT_05703631 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicStunStateEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicStunStateEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicStunStateEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicStunStateEnum);
  return __this;
}


// CustomLogic.CustomLogicStunStateEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicStunStateEnum_Bindings___cctor (const MethodInfo* method);
// 0x3e95c50

void CustomLogic_CustomLogicStunStateEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_05703632 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"None");
    il2cpp_init_method_metadata(&"Stunned");
    il2cpp_init_method_metadata(&"Recovering");
    DAT_05703632 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"None",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Stunned",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Recovering",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicStunStateEnum.Bindings$$<__CreatePropertyBinding__None>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStunStateEnum_Bindings_____CreatePropertyBinding__None_g____getter_2_0 (CustomLogic_CustomLogicStunStateEnum_o* __i, const MethodInfo* method);
// 0x3e95d60

Il2CppObject *
CustomLogic_CustomLogicStunStateEnum_Bindings__<__CreatePropertyBinding__None>g____getter_2_0
          (CustomLogic_CustomLogicStunStateEnum_o *__i,MethodInfo *method)

{
  uint in_EAX;
  Il2CppObject *pIVar1;
  undefined8 uStack_8;
  
  uStack_8 = (ulong)in_EAX;
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,(long)&uStack_8 + 4);
  return pIVar1;
}


// CustomLogic.CustomLogicStunStateEnum.Bindings$$<__CreatePropertyBinding__Stunned>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStunStateEnum_Bindings_____CreatePropertyBinding__Stunned_g____getter_3_0 (CustomLogic_CustomLogicStunStateEnum_o* __i, const MethodInfo* method);
// 0x3e95d80

Il2CppObject *
CustomLogic_CustomLogicStunStateEnum_Bindings__<__CreatePropertyBinding__Stunned>g____getter_3_0
          (CustomLogic_CustomLogicStunStateEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicStunStateEnum.Bindings$$<__CreatePropertyBinding__Recovering>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStunStateEnum_Bindings_____CreatePropertyBinding__Recovering_g____getter_4_0 (CustomLogic_CustomLogicStunStateEnum_o* __i, const MethodInfo* method);
// 0x3e95da0

Il2CppObject *
CustomLogic_CustomLogicStunStateEnum_Bindings__<__CreatePropertyBinding__Recovering>g____getter_4_0
          (CustomLogic_CustomLogicStunStateEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicStunStateEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicStunStateEnum___ctor (CustomLogic_CustomLogicStunStateEnum_o* __this, const MethodInfo* method);
// 0x3e956c0

void CustomLogic_CustomLogicStunStateEnum___ctor
               (CustomLogic_CustomLogicStunStateEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570362b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_0570362b = '\x01';
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


// CustomLogic.CustomLogicStunStateEnum$$get_None
// il2cpp: int32_t CustomLogic_CustomLogicStunStateEnum__get_None (const MethodInfo* method);
// 0x3e95730

int32_t CustomLogic_CustomLogicStunStateEnum__get_None(MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicStunStateEnum$$get_Stunned
// il2cpp: int32_t CustomLogic_CustomLogicStunStateEnum__get_Stunned (const MethodInfo* method);
// 0x3e95740

int32_t CustomLogic_CustomLogicStunStateEnum__get_Stunned(MethodInfo *method)

{
  return 1;
}


// CustomLogic.CustomLogicStunStateEnum$$get_Recovering
// il2cpp: int32_t CustomLogic_CustomLogicStunStateEnum__get_Recovering (const MethodInfo* method);
// 0x3e95750

int32_t CustomLogic_CustomLogicStunStateEnum__get_Recovering(MethodInfo *method)

{
  return 2;
}


// CustomLogic.CustomLogicStunStateEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicStunStateEnum__get_ClassName (CustomLogic_CustomLogicStunStateEnum_o* __this, const MethodInfo* method);
// 0x3e95760

System_String_o *
CustomLogic_CustomLogicStunStateEnum__get_ClassName
          (CustomLogic_CustomLogicStunStateEnum_o *__this,MethodInfo *method)

{
  if (DAT_0570362c == '\0') {
    il2cpp_init_method_metadata(&"StunStateEnum");
    DAT_0570362c = '\x01';
  }
  return "StunStateEnum";
}


// CustomLogic.CustomLogicStunStateEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicStunStateEnum__get_IsAbstract (CustomLogic_CustomLogicStunStateEnum_o* __this, const MethodInfo* method);
// 0x3e95790

bool_conflict
CustomLogic_CustomLogicStunStateEnum__get_IsAbstract
          (CustomLogic_CustomLogicStunStateEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicStunStateEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicStunStateEnum__get_IsStatic (CustomLogic_CustomLogicStunStateEnum_o* __this, const MethodInfo* method);
// 0x3e957a0

bool_conflict
CustomLogic_CustomLogicStunStateEnum__get_IsStatic
          (CustomLogic_CustomLogicStunStateEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicStunStateEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicStunStateEnum__get_InheritBaseMembers (CustomLogic_CustomLogicStunStateEnum_o* __this, const MethodInfo* method);
// 0x3e957b0

bool_conflict
CustomLogic_CustomLogicStunStateEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicStunStateEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


