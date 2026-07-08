// Type: CustomLogic.CustomLogicPlayerStatusEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicPlayerStatusEnum.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicPlayerStatusEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicPlayerStatusEnum_o* CustomLogic_CustomLogicPlayerStatusEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3e811e0

CustomLogic_CustomLogicPlayerStatusEnum_o *
CustomLogic_CustomLogicPlayerStatusEnum_Factory__CreateInstance
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
  if (DAT_05703400 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicPlayerStatusEnum);
    DAT_05703400 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicPlayerStatusEnum);
      if (DAT_057033fb == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_057033fb = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicPlayerStatusEnum_o *)__this;
    }
    il2cpp_glue_01f2f1a0(args);
    uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
    pSVar1 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicPlayerStatusEnum constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicPlayerStatusEnum_CreateInstance);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPlayerStatusEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicPlayerStatusEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3e81300

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicPlayerStatusEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  System_String_o *str2;
  undefined8 uVar3;
  System_Exception_o *__this;
  System_Func_T__object__o *pSVar4;
  CustomLogic_CLPropertyBinding_T__o *pCVar5;
  
  if (DAT_05703401 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"Dead");
    il2cpp_init_method_metadata(&"Alive");
    il2cpp_init_method_metadata(&"Spectating");
    DAT_05703401 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Alive",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05703402 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Alive_g____gett);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerStatusEnum);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPlayerStatusEnum);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPlayerStatusEnum__object);
      DAT_05703402 = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPlayerStatusEnum__object);
    System_Func<object__object>___ctor();
    pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPlayerStatusEnum);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicPlayerStatusEnum);
    return (CustomLogic_ICLMemberBinding_o *)pCVar5;
  }
  bVar1 = System_String__op_Equality(name,"Dead",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05703403 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Dead_g____gette);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerStatusEnum);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPlayerStatusEnum);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPlayerStatusEnum__object);
      DAT_05703403 = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPlayerStatusEnum__object);
    System_Func<object__object>___ctor();
    pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPlayerStatusEnum);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicPlayerStatusEnum);
    return (CustomLogic_ICLMemberBinding_o *)pCVar5;
  }
  bVar1 = System_String__op_Equality(name,"Spectating",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    pSVar2 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicPlayerStatusEnum not found");
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
  if (DAT_05703404 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Spectating_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerStatusEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPlayerStatusEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPlayerStatusEnum__object);
    DAT_05703404 = '\x01';
  }
  pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPlayerStatusEnum__object);
  System_Func<object__object>___ctor();
  pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPlayerStatusEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicPlayerStatusEnum);
  return (CustomLogic_ICLMemberBinding_o *)pCVar5;
}


// CustomLogic.CustomLogicPlayerStatusEnum.Bindings$$__CreatePropertyBinding__Alive
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerStatusEnum__o* CustomLogic_CustomLogicPlayerStatusEnum_Bindings____CreatePropertyBinding__Alive (const MethodInfo* method);
// 0x3e81490

CustomLogic_CLPropertyBinding_CustomLogicPlayerStatusEnum__o *
CustomLogic_CustomLogicPlayerStatusEnum_Bindings____CreatePropertyBinding__Alive(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerStatusEnum__o *__this;
  
  if (DAT_05703402 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Alive_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerStatusEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPlayerStatusEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPlayerStatusEnum__object);
    DAT_05703402 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPlayerStatusEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPlayerStatusEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPlayerStatusEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicPlayerStatusEnum);
  return __this;
}


// CustomLogic.CustomLogicPlayerStatusEnum.Bindings$$__CreatePropertyBinding__Dead
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerStatusEnum__o* CustomLogic_CustomLogicPlayerStatusEnum_Bindings____CreatePropertyBinding__Dead (const MethodInfo* method);
// 0x3e81530

CustomLogic_CLPropertyBinding_CustomLogicPlayerStatusEnum__o *
CustomLogic_CustomLogicPlayerStatusEnum_Bindings____CreatePropertyBinding__Dead(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerStatusEnum__o *__this;
  
  if (DAT_05703403 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Dead_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerStatusEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPlayerStatusEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPlayerStatusEnum__object);
    DAT_05703403 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPlayerStatusEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPlayerStatusEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPlayerStatusEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicPlayerStatusEnum);
  return __this;
}


// CustomLogic.CustomLogicPlayerStatusEnum.Bindings$$__CreatePropertyBinding__Spectating
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerStatusEnum__o* CustomLogic_CustomLogicPlayerStatusEnum_Bindings____CreatePropertyBinding__Spectating (const MethodInfo* method);
// 0x3e815d0

CustomLogic_CLPropertyBinding_CustomLogicPlayerStatusEnum__o *
CustomLogic_CustomLogicPlayerStatusEnum_Bindings____CreatePropertyBinding__Spectating
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerStatusEnum__o *__this;
  
  if (DAT_05703404 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Spectating_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPlayerStatusEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPlayerStatusEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPlayerStatusEnum__object);
    DAT_05703404 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPlayerStatusEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPlayerStatusEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPlayerStatusEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicPlayerStatusEnum);
  return __this;
}


// CustomLogic.CustomLogicPlayerStatusEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicPlayerStatusEnum_Bindings___cctor (const MethodInfo* method);
// 0x3e81670

void CustomLogic_CustomLogicPlayerStatusEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_05703405 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"Dead");
    il2cpp_init_method_metadata(&"Alive");
    il2cpp_init_method_metadata(&"Spectating");
    DAT_05703405 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"Alive",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Dead",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Spectating",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPlayerStatusEnum.Bindings$$<__CreatePropertyBinding__Alive>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerStatusEnum_Bindings_____CreatePropertyBinding__Alive_g____getter_2_0 (CustomLogic_CustomLogicPlayerStatusEnum_o* __i, const MethodInfo* method);
// 0x3e81780

Il2CppObject *
CustomLogic_CustomLogicPlayerStatusEnum_Bindings__<__CreatePropertyBinding__Alive>g____getter_2_0
          (CustomLogic_CustomLogicPlayerStatusEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057035a0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PlayerStatus);
    DAT_057035a0 = '\x01';
    iVar1 = *(int *)(TypeInfo_PlayerStatus + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_PlayerStatus + 0xe4);
  }
  if (iVar1 != 0) {
    return (Il2CppObject *)**(undefined8 **)(TypeInfo_PlayerStatus + 0xb8);
  }
  il2cpp_init_class();
  return (Il2CppObject *)**(undefined8 **)(TypeInfo_PlayerStatus + 0xb8);
}


// CustomLogic.CustomLogicPlayerStatusEnum.Bindings$$<__CreatePropertyBinding__Dead>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerStatusEnum_Bindings_____CreatePropertyBinding__Dead_g____getter_3_0 (CustomLogic_CustomLogicPlayerStatusEnum_o* __i, const MethodInfo* method);
// 0x3e817f0

Il2CppObject *
CustomLogic_CustomLogicPlayerStatusEnum_Bindings__<__CreatePropertyBinding__Dead>g____getter_3_0
          (CustomLogic_CustomLogicPlayerStatusEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057035a1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PlayerStatus);
    DAT_057035a1 = '\x01';
    iVar1 = *(int *)(TypeInfo_PlayerStatus + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_PlayerStatus + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_PlayerStatus + 0xb8) + 8);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_PlayerStatus + 0xb8) + 8);
}


// CustomLogic.CustomLogicPlayerStatusEnum.Bindings$$<__CreatePropertyBinding__Spectating>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerStatusEnum_Bindings_____CreatePropertyBinding__Spectating_g____getter_4_0 (CustomLogic_CustomLogicPlayerStatusEnum_o* __i, const MethodInfo* method);
// 0x3e81860

Il2CppObject *
CustomLogic_CustomLogicPlayerStatusEnum_Bindings__<__CreatePropertyBinding__Spectating>g____getter_4_0
          (CustomLogic_CustomLogicPlayerStatusEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057035a2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PlayerStatus);
    DAT_057035a2 = '\x01';
    iVar1 = *(int *)(TypeInfo_PlayerStatus + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_PlayerStatus + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_PlayerStatus + 0xb8) + 0x10);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_PlayerStatus + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicPlayerStatusEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicPlayerStatusEnum___ctor (CustomLogic_CustomLogicPlayerStatusEnum_o* __this, const MethodInfo* method);
// 0x3e80fc0

void CustomLogic_CustomLogicPlayerStatusEnum___ctor
               (CustomLogic_CustomLogicPlayerStatusEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057033fb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_057033fb = '\x01';
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


// CustomLogic.CustomLogicPlayerStatusEnum$$get_Alive
// il2cpp: System_String_o* CustomLogic_CustomLogicPlayerStatusEnum__get_Alive (const MethodInfo* method);
// 0x3e81030

System_String_o * CustomLogic_CustomLogicPlayerStatusEnum__get_Alive(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057033fc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PlayerStatus);
    DAT_057033fc = '\x01';
    iVar1 = *(int *)(TypeInfo_PlayerStatus + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_PlayerStatus + 0xe4);
  }
  if (iVar1 != 0) {
    return (System_String_o *)**(undefined8 **)(TypeInfo_PlayerStatus + 0xb8);
  }
  il2cpp_init_class();
  return (System_String_o *)**(undefined8 **)(TypeInfo_PlayerStatus + 0xb8);
}


// CustomLogic.CustomLogicPlayerStatusEnum$$get_Dead
// il2cpp: System_String_o* CustomLogic_CustomLogicPlayerStatusEnum__get_Dead (const MethodInfo* method);
// 0x3e810a0

System_String_o * CustomLogic_CustomLogicPlayerStatusEnum__get_Dead(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057033fd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PlayerStatus);
    DAT_057033fd = '\x01';
    iVar1 = *(int *)(TypeInfo_PlayerStatus + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_PlayerStatus + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_PlayerStatus + 0xb8) + 8);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_PlayerStatus + 0xb8) + 8);
}


// CustomLogic.CustomLogicPlayerStatusEnum$$get_Spectating
// il2cpp: System_String_o* CustomLogic_CustomLogicPlayerStatusEnum__get_Spectating (const MethodInfo* method);
// 0x3e81110

System_String_o * CustomLogic_CustomLogicPlayerStatusEnum__get_Spectating(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057033fe == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PlayerStatus);
    DAT_057033fe = '\x01';
    iVar1 = *(int *)(TypeInfo_PlayerStatus + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_PlayerStatus + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_PlayerStatus + 0xb8) + 0x10);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_PlayerStatus + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicPlayerStatusEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicPlayerStatusEnum__get_ClassName (CustomLogic_CustomLogicPlayerStatusEnum_o* __this, const MethodInfo* method);
// 0x3e81180

System_String_o *
CustomLogic_CustomLogicPlayerStatusEnum__get_ClassName
          (CustomLogic_CustomLogicPlayerStatusEnum_o *__this,MethodInfo *method)

{
  if (DAT_057033ff == '\0') {
    il2cpp_init_method_metadata(&"PlayerStatusEnum");
    DAT_057033ff = '\x01';
  }
  return "PlayerStatusEnum";
}


// CustomLogic.CustomLogicPlayerStatusEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicPlayerStatusEnum__get_IsAbstract (CustomLogic_CustomLogicPlayerStatusEnum_o* __this, const MethodInfo* method);
// 0x3e811b0

bool_conflict
CustomLogic_CustomLogicPlayerStatusEnum__get_IsAbstract
          (CustomLogic_CustomLogicPlayerStatusEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicPlayerStatusEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicPlayerStatusEnum__get_IsStatic (CustomLogic_CustomLogicPlayerStatusEnum_o* __this, const MethodInfo* method);
// 0x3e811c0

bool_conflict
CustomLogic_CustomLogicPlayerStatusEnum__get_IsStatic
          (CustomLogic_CustomLogicPlayerStatusEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicPlayerStatusEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicPlayerStatusEnum__get_InheritBaseMembers (CustomLogic_CustomLogicPlayerStatusEnum_o* __this, const MethodInfo* method);
// 0x3e811d0

bool_conflict
CustomLogic_CustomLogicPlayerStatusEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicPlayerStatusEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


