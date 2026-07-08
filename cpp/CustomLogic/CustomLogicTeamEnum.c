// Type: CustomLogic.CustomLogicTeamEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicTeamEnum.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicTeamEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicTeamEnum_o* CustomLogic_CustomLogicTeamEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3e972f0

CustomLogic_CustomLogicTeamEnum_o *
CustomLogic_CustomLogicTeamEnum_Factory__CreateInstance
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
  if (DAT_05703652 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicTeamEnum);
    DAT_05703652 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicTeamEnum);
      if (DAT_0570364b == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_0570364b = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicTeamEnum_o *)__this;
    }
    il2cpp_glue_01f2f1a0(args);
    uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
    pSVar1 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicTeamEnum constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicTeamEnum_CreateInstance);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTeamEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicTeamEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3e97410

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicTeamEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  System_String_o *str2;
  undefined8 uVar3;
  System_Exception_o *__this;
  System_Func_T__object__o *pSVar4;
  CustomLogic_CLPropertyBinding_T__o *pCVar5;
  
  if (DAT_05703653 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"Human");
    il2cpp_init_method_metadata(&"None");
    il2cpp_init_method_metadata(&"Red");
    il2cpp_init_method_metadata(&"Titan");
    il2cpp_init_method_metadata(&"Blue");
    DAT_05703653 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"None",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05703654 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__None_g____gette);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTeamEnum);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTeamEnum);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTeamEnum__object);
      DAT_05703654 = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTeamEnum__object);
    System_Func<object__object>___ctor();
    pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTeamEnum);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTeamEnum);
    return (CustomLogic_ICLMemberBinding_o *)pCVar5;
  }
  bVar1 = System_String__op_Equality(name,"Blue",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05703655 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Blue_g____gette);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTeamEnum);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTeamEnum);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTeamEnum__object);
      DAT_05703655 = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTeamEnum__object);
    System_Func<object__object>___ctor();
    pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTeamEnum);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTeamEnum);
    return (CustomLogic_ICLMemberBinding_o *)pCVar5;
  }
  bVar1 = System_String__op_Equality(name,"Red",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality(name,"Titan",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703657 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Titan_g____gett);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTeamEnum);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTeamEnum);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTeamEnum__object);
        DAT_05703657 = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTeamEnum__object);
      System_Func<object__object>___ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTeamEnum);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTeamEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    bVar1 = System_String__op_Equality(name,"Human",(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      pSVar2 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
      str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicTeamEnum not found");
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
    if (DAT_05703658 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Human_g____gett);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTeamEnum);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTeamEnum);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTeamEnum__object);
      DAT_05703658 = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTeamEnum__object);
    System_Func<object__object>___ctor();
    pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTeamEnum);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTeamEnum);
    return (CustomLogic_ICLMemberBinding_o *)pCVar5;
  }
  if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703656 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Red_g____getter);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTeamEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTeamEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTeamEnum__object);
    DAT_05703656 = '\x01';
  }
  pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTeamEnum__object);
  System_Func<object__object>___ctor();
  pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTeamEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTeamEnum);
  return (CustomLogic_ICLMemberBinding_o *)pCVar5;
}


// CustomLogic.CustomLogicTeamEnum.Bindings$$__CreatePropertyBinding__None
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTeamEnum__o* CustomLogic_CustomLogicTeamEnum_Bindings____CreatePropertyBinding__None (const MethodInfo* method);
// 0x3e97640

CustomLogic_CLPropertyBinding_CustomLogicTeamEnum__o *
CustomLogic_CustomLogicTeamEnum_Bindings____CreatePropertyBinding__None(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTeamEnum__o *__this;
  
  if (DAT_05703654 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__None_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTeamEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTeamEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTeamEnum__object);
    DAT_05703654 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTeamEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTeamEnum__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTeamEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTeamEnum);
  return __this;
}


// CustomLogic.CustomLogicTeamEnum.Bindings$$__CreatePropertyBinding__Blue
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTeamEnum__o* CustomLogic_CustomLogicTeamEnum_Bindings____CreatePropertyBinding__Blue (const MethodInfo* method);
// 0x3e976e0

CustomLogic_CLPropertyBinding_CustomLogicTeamEnum__o *
CustomLogic_CustomLogicTeamEnum_Bindings____CreatePropertyBinding__Blue(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTeamEnum__o *__this;
  
  if (DAT_05703655 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Blue_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTeamEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTeamEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTeamEnum__object);
    DAT_05703655 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTeamEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTeamEnum__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTeamEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTeamEnum);
  return __this;
}


// CustomLogic.CustomLogicTeamEnum.Bindings$$__CreatePropertyBinding__Red
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTeamEnum__o* CustomLogic_CustomLogicTeamEnum_Bindings____CreatePropertyBinding__Red (const MethodInfo* method);
// 0x3e97780

CustomLogic_CLPropertyBinding_CustomLogicTeamEnum__o *
CustomLogic_CustomLogicTeamEnum_Bindings____CreatePropertyBinding__Red(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTeamEnum__o *__this;
  
  if (DAT_05703656 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Red_g____getter);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTeamEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTeamEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTeamEnum__object);
    DAT_05703656 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTeamEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTeamEnum__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTeamEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTeamEnum);
  return __this;
}


// CustomLogic.CustomLogicTeamEnum.Bindings$$__CreatePropertyBinding__Titan
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTeamEnum__o* CustomLogic_CustomLogicTeamEnum_Bindings____CreatePropertyBinding__Titan (const MethodInfo* method);
// 0x3e97820

CustomLogic_CLPropertyBinding_CustomLogicTeamEnum__o *
CustomLogic_CustomLogicTeamEnum_Bindings____CreatePropertyBinding__Titan(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTeamEnum__o *__this;
  
  if (DAT_05703657 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Titan_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTeamEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTeamEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTeamEnum__object);
    DAT_05703657 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTeamEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTeamEnum__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTeamEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTeamEnum);
  return __this;
}


// CustomLogic.CustomLogicTeamEnum.Bindings$$__CreatePropertyBinding__Human
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTeamEnum__o* CustomLogic_CustomLogicTeamEnum_Bindings____CreatePropertyBinding__Human (const MethodInfo* method);
// 0x3e978c0

CustomLogic_CLPropertyBinding_CustomLogicTeamEnum__o *
CustomLogic_CustomLogicTeamEnum_Bindings____CreatePropertyBinding__Human(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTeamEnum__o *__this;
  
  if (DAT_05703658 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Human_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTeamEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTeamEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTeamEnum__object);
    DAT_05703658 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTeamEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTeamEnum__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTeamEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTeamEnum);
  return __this;
}


// CustomLogic.CustomLogicTeamEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicTeamEnum_Bindings___cctor (const MethodInfo* method);
// 0x3e97960

void CustomLogic_CustomLogicTeamEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_05703659 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"Human");
    il2cpp_init_method_metadata(&"None");
    il2cpp_init_method_metadata(&"Red");
    il2cpp_init_method_metadata(&"Titan");
    il2cpp_init_method_metadata(&"Blue");
    DAT_05703659 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"None",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Blue",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Red",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Titan",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Human",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTeamEnum.Bindings$$<__CreatePropertyBinding__None>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTeamEnum_Bindings_____CreatePropertyBinding__None_g____getter_2_0 (CustomLogic_CustomLogicTeamEnum_o* __i, const MethodInfo* method);
// 0x3e97ab0

Il2CppObject *
CustomLogic_CustomLogicTeamEnum_Bindings__<__CreatePropertyBinding__None>g____getter_2_0
          (CustomLogic_CustomLogicTeamEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703841 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TeamInfo);
    DAT_05703841 = '\x01';
    iVar1 = *(int *)(TypeInfo_TeamInfo + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TeamInfo + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 0x10);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicTeamEnum.Bindings$$<__CreatePropertyBinding__Blue>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTeamEnum_Bindings_____CreatePropertyBinding__Blue_g____getter_3_0 (CustomLogic_CustomLogicTeamEnum_o* __i, const MethodInfo* method);
// 0x3e97b20

Il2CppObject *
CustomLogic_CustomLogicTeamEnum_Bindings__<__CreatePropertyBinding__Blue>g____getter_3_0
          (CustomLogic_CustomLogicTeamEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703842 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TeamInfo);
    DAT_05703842 = '\x01';
    iVar1 = *(int *)(TypeInfo_TeamInfo + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TeamInfo + 0xe4);
  }
  if (iVar1 != 0) {
    return (Il2CppObject *)**(undefined8 **)(TypeInfo_TeamInfo + 0xb8);
  }
  il2cpp_init_class();
  return (Il2CppObject *)**(undefined8 **)(TypeInfo_TeamInfo + 0xb8);
}


// CustomLogic.CustomLogicTeamEnum.Bindings$$<__CreatePropertyBinding__Red>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTeamEnum_Bindings_____CreatePropertyBinding__Red_g____getter_4_0 (CustomLogic_CustomLogicTeamEnum_o* __i, const MethodInfo* method);
// 0x3e97b90

Il2CppObject *
CustomLogic_CustomLogicTeamEnum_Bindings__<__CreatePropertyBinding__Red>g____getter_4_0
          (CustomLogic_CustomLogicTeamEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703843 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TeamInfo);
    DAT_05703843 = '\x01';
    iVar1 = *(int *)(TypeInfo_TeamInfo + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TeamInfo + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 8);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 8);
}


// CustomLogic.CustomLogicTeamEnum.Bindings$$<__CreatePropertyBinding__Titan>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTeamEnum_Bindings_____CreatePropertyBinding__Titan_g____getter_5_0 (CustomLogic_CustomLogicTeamEnum_o* __i, const MethodInfo* method);
// 0x3e97c00

Il2CppObject *
CustomLogic_CustomLogicTeamEnum_Bindings__<__CreatePropertyBinding__Titan>g____getter_5_0
          (CustomLogic_CustomLogicTeamEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703844 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TeamInfo);
    DAT_05703844 = '\x01';
    iVar1 = *(int *)(TypeInfo_TeamInfo + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TeamInfo + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 0x18);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 0x18);
}


// CustomLogic.CustomLogicTeamEnum.Bindings$$<__CreatePropertyBinding__Human>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTeamEnum_Bindings_____CreatePropertyBinding__Human_g____getter_6_0 (CustomLogic_CustomLogicTeamEnum_o* __i, const MethodInfo* method);
// 0x3e97c70

Il2CppObject *
CustomLogic_CustomLogicTeamEnum_Bindings__<__CreatePropertyBinding__Human>g____getter_6_0
          (CustomLogic_CustomLogicTeamEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703845 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TeamInfo);
    DAT_05703845 = '\x01';
    iVar1 = *(int *)(TypeInfo_TeamInfo + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TeamInfo + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 0x20);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 0x20);
}


// CustomLogic.CustomLogicTeamEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicTeamEnum___ctor (CustomLogic_CustomLogicTeamEnum_o* __this, const MethodInfo* method);
// 0x3e96ff0

void CustomLogic_CustomLogicTeamEnum___ctor
               (CustomLogic_CustomLogicTeamEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570364b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_0570364b = '\x01';
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


// CustomLogic.CustomLogicTeamEnum$$get_None
// il2cpp: System_String_o* CustomLogic_CustomLogicTeamEnum__get_None (const MethodInfo* method);
// 0x3e97060

System_String_o * CustomLogic_CustomLogicTeamEnum__get_None(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570364c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TeamInfo);
    DAT_0570364c = '\x01';
    iVar1 = *(int *)(TypeInfo_TeamInfo + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TeamInfo + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 0x10);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicTeamEnum$$get_Blue
// il2cpp: System_String_o* CustomLogic_CustomLogicTeamEnum__get_Blue (const MethodInfo* method);
// 0x3e970d0

System_String_o * CustomLogic_CustomLogicTeamEnum__get_Blue(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570364d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TeamInfo);
    DAT_0570364d = '\x01';
    iVar1 = *(int *)(TypeInfo_TeamInfo + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TeamInfo + 0xe4);
  }
  if (iVar1 != 0) {
    return (System_String_o *)**(undefined8 **)(TypeInfo_TeamInfo + 0xb8);
  }
  il2cpp_init_class();
  return (System_String_o *)**(undefined8 **)(TypeInfo_TeamInfo + 0xb8);
}


// CustomLogic.CustomLogicTeamEnum$$get_Red
// il2cpp: System_String_o* CustomLogic_CustomLogicTeamEnum__get_Red (const MethodInfo* method);
// 0x3e97140

System_String_o * CustomLogic_CustomLogicTeamEnum__get_Red(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570364e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TeamInfo);
    DAT_0570364e = '\x01';
    iVar1 = *(int *)(TypeInfo_TeamInfo + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TeamInfo + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 8);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 8);
}


// CustomLogic.CustomLogicTeamEnum$$get_Titan
// il2cpp: System_String_o* CustomLogic_CustomLogicTeamEnum__get_Titan (const MethodInfo* method);
// 0x3e971b0

System_String_o * CustomLogic_CustomLogicTeamEnum__get_Titan(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570364f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TeamInfo);
    DAT_0570364f = '\x01';
    iVar1 = *(int *)(TypeInfo_TeamInfo + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TeamInfo + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 0x18);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 0x18);
}


// CustomLogic.CustomLogicTeamEnum$$get_Human
// il2cpp: System_String_o* CustomLogic_CustomLogicTeamEnum__get_Human (const MethodInfo* method);
// 0x3e97220

System_String_o * CustomLogic_CustomLogicTeamEnum__get_Human(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703650 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TeamInfo);
    DAT_05703650 = '\x01';
    iVar1 = *(int *)(TypeInfo_TeamInfo + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TeamInfo + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 0x20);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 0x20);
}


// CustomLogic.CustomLogicTeamEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicTeamEnum__get_ClassName (CustomLogic_CustomLogicTeamEnum_o* __this, const MethodInfo* method);
// 0x3e97290

System_String_o *
CustomLogic_CustomLogicTeamEnum__get_ClassName
          (CustomLogic_CustomLogicTeamEnum_o *__this,MethodInfo *method)

{
  if (DAT_05703651 == '\0') {
    il2cpp_init_method_metadata(&"TeamEnum");
    DAT_05703651 = '\x01';
  }
  return "TeamEnum";
}


// CustomLogic.CustomLogicTeamEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicTeamEnum__get_IsAbstract (CustomLogic_CustomLogicTeamEnum_o* __this, const MethodInfo* method);
// 0x3e972c0

bool_conflict
CustomLogic_CustomLogicTeamEnum__get_IsAbstract
          (CustomLogic_CustomLogicTeamEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicTeamEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicTeamEnum__get_IsStatic (CustomLogic_CustomLogicTeamEnum_o* __this, const MethodInfo* method);
// 0x3e972d0

bool_conflict
CustomLogic_CustomLogicTeamEnum__get_IsStatic
          (CustomLogic_CustomLogicTeamEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicTeamEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicTeamEnum__get_InheritBaseMembers (CustomLogic_CustomLogicTeamEnum_o* __this, const MethodInfo* method);
// 0x3e972e0

bool_conflict
CustomLogic_CustomLogicTeamEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicTeamEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


