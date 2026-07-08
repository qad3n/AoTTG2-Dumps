// Type: CustomLogic.CustomLogicHandStateEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicHandStateEnum.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicHandStateEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicHandStateEnum_o* CustomLogic_CustomLogicHandStateEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3e50720

CustomLogic_CustomLogicHandStateEnum_o *
CustomLogic_CustomLogicHandStateEnum_Factory__CreateInstance
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
  if (DAT_05702fa1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicHandStateEnum);
    DAT_05702fa1 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicHandStateEnum);
      if (DAT_05702f9f == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_05702f9f = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicHandStateEnum_o *)__this;
    }
    il2cpp_glue_01f2f1a0(args);
    uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
    pSVar1 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicHandStateEnum constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicHandStateEnum_CreateInstance);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHandStateEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicHandStateEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3e50840

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicHandStateEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  System_String_o *str2;
  undefined8 uVar3;
  System_Exception_o *__this;
  System_Func_T__object__o *pSVar4;
  CustomLogic_CLPropertyBinding_T__o *pCVar5;
  
  if (DAT_05702fa2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"Severed");
    il2cpp_init_method_metadata(&"Damaged");
    il2cpp_init_method_metadata(&"Recovering");
    il2cpp_init_method_metadata(&"Healthy");
    DAT_05702fa2 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Healthy",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05702fa3 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Healthy_g____ge);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHandStateEnum);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHandStateEnum);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHandStateEnum__object);
      DAT_05702fa3 = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHandStateEnum__object);
    System_Func<object__object>___ctor();
    pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHandStateEnum);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHandStateEnum);
    return (CustomLogic_ICLMemberBinding_o *)pCVar5;
  }
  bVar1 = System_String__op_Equality(name,"Damaged",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05702fa4 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Damaged_g____ge);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHandStateEnum);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHandStateEnum);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHandStateEnum__object);
      DAT_05702fa4 = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHandStateEnum__object);
    System_Func<object__object>___ctor();
    pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHandStateEnum);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHandStateEnum);
    return (CustomLogic_ICLMemberBinding_o *)pCVar5;
  }
  bVar1 = System_String__op_Equality(name,"Severed",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality(name,"Recovering",(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      pSVar2 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
      str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicHandStateEnum not found");
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
    if (DAT_05702fa6 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Recovering_g);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHandStateEnum);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHandStateEnum);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHandStateEnum__object);
      DAT_05702fa6 = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHandStateEnum__object);
    System_Func<object__object>___ctor();
    pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHandStateEnum);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHandStateEnum);
    return (CustomLogic_ICLMemberBinding_o *)pCVar5;
  }
  if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (DAT_05702fa5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Severed_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHandStateEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHandStateEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHandStateEnum__object);
    DAT_05702fa5 = '\x01';
  }
  pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHandStateEnum__object);
  System_Func<object__object>___ctor();
  pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHandStateEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHandStateEnum);
  return (CustomLogic_ICLMemberBinding_o *)pCVar5;
}


// CustomLogic.CustomLogicHandStateEnum.Bindings$$__CreatePropertyBinding__Healthy
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum__o* CustomLogic_CustomLogicHandStateEnum_Bindings____CreatePropertyBinding__Healthy (const MethodInfo* method);
// 0x3e50a20

CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum__o *
CustomLogic_CustomLogicHandStateEnum_Bindings____CreatePropertyBinding__Healthy(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum__o *__this;
  
  if (DAT_05702fa3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Healthy_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHandStateEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHandStateEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHandStateEnum__object);
    DAT_05702fa3 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHandStateEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHandStateEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHandStateEnum);
  return __this;
}


// CustomLogic.CustomLogicHandStateEnum.Bindings$$__CreatePropertyBinding__Damaged
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum__o* CustomLogic_CustomLogicHandStateEnum_Bindings____CreatePropertyBinding__Damaged (const MethodInfo* method);
// 0x3e50ac0

CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum__o *
CustomLogic_CustomLogicHandStateEnum_Bindings____CreatePropertyBinding__Damaged(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum__o *__this;
  
  if (DAT_05702fa4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Damaged_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHandStateEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHandStateEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHandStateEnum__object);
    DAT_05702fa4 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHandStateEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHandStateEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHandStateEnum);
  return __this;
}


// CustomLogic.CustomLogicHandStateEnum.Bindings$$__CreatePropertyBinding__Severed
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum__o* CustomLogic_CustomLogicHandStateEnum_Bindings____CreatePropertyBinding__Severed (const MethodInfo* method);
// 0x3e50b60

CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum__o *
CustomLogic_CustomLogicHandStateEnum_Bindings____CreatePropertyBinding__Severed(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum__o *__this;
  
  if (DAT_05702fa5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Severed_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHandStateEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHandStateEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHandStateEnum__object);
    DAT_05702fa5 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHandStateEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHandStateEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHandStateEnum);
  return __this;
}


// CustomLogic.CustomLogicHandStateEnum.Bindings$$__CreatePropertyBinding__Recovering
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum__o* CustomLogic_CustomLogicHandStateEnum_Bindings____CreatePropertyBinding__Recovering (const MethodInfo* method);
// 0x3e50c00

CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum__o *
CustomLogic_CustomLogicHandStateEnum_Bindings____CreatePropertyBinding__Recovering
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum__o *__this;
  
  if (DAT_05702fa6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Recovering_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHandStateEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHandStateEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHandStateEnum__object);
    DAT_05702fa6 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHandStateEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHandStateEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHandStateEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHandStateEnum);
  return __this;
}


// CustomLogic.CustomLogicHandStateEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicHandStateEnum_Bindings___cctor (const MethodInfo* method);
// 0x3e50ca0

void CustomLogic_CustomLogicHandStateEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_05702fa7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"Severed");
    il2cpp_init_method_metadata(&"Damaged");
    il2cpp_init_method_metadata(&"Recovering");
    il2cpp_init_method_metadata(&"Healthy");
    DAT_05702fa7 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"Healthy",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Damaged",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Severed",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Recovering",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHandStateEnum.Bindings$$<__CreatePropertyBinding__Healthy>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHandStateEnum_Bindings_____CreatePropertyBinding__Healthy_g____getter_2_0 (CustomLogic_CustomLogicHandStateEnum_o* __i, const MethodInfo* method);
// 0x3e50dd0

Il2CppObject *
CustomLogic_CustomLogicHandStateEnum_Bindings__<__CreatePropertyBinding__Healthy>g____getter_2_0
          (CustomLogic_CustomLogicHandStateEnum_o *__i,MethodInfo *method)

{
  uint in_EAX;
  Il2CppObject *pIVar1;
  undefined8 uStack_8;
  
  uStack_8 = (ulong)in_EAX;
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,(long)&uStack_8 + 4);
  return pIVar1;
}


// CustomLogic.CustomLogicHandStateEnum.Bindings$$<__CreatePropertyBinding__Damaged>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHandStateEnum_Bindings_____CreatePropertyBinding__Damaged_g____getter_3_0 (CustomLogic_CustomLogicHandStateEnum_o* __i, const MethodInfo* method);
// 0x3e50df0

Il2CppObject *
CustomLogic_CustomLogicHandStateEnum_Bindings__<__CreatePropertyBinding__Damaged>g____getter_3_0
          (CustomLogic_CustomLogicHandStateEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicHandStateEnum.Bindings$$<__CreatePropertyBinding__Severed>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHandStateEnum_Bindings_____CreatePropertyBinding__Severed_g____getter_4_0 (CustomLogic_CustomLogicHandStateEnum_o* __i, const MethodInfo* method);
// 0x3e50e10

Il2CppObject *
CustomLogic_CustomLogicHandStateEnum_Bindings__<__CreatePropertyBinding__Severed>g____getter_4_0
          (CustomLogic_CustomLogicHandStateEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicHandStateEnum.Bindings$$<__CreatePropertyBinding__Recovering>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHandStateEnum_Bindings_____CreatePropertyBinding__Recovering_g____getter_5_0 (CustomLogic_CustomLogicHandStateEnum_o* __i, const MethodInfo* method);
// 0x3e50e30

Il2CppObject *
CustomLogic_CustomLogicHandStateEnum_Bindings__<__CreatePropertyBinding__Recovering>g____getter_5_0
          (CustomLogic_CustomLogicHandStateEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicHandStateEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicHandStateEnum___ctor (CustomLogic_CustomLogicHandStateEnum_o* __this, const MethodInfo* method);
// 0x3e50610

void CustomLogic_CustomLogicHandStateEnum___ctor
               (CustomLogic_CustomLogicHandStateEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702f9f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_05702f9f = '\x01';
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


// CustomLogic.CustomLogicHandStateEnum$$get_Healthy
// il2cpp: int32_t CustomLogic_CustomLogicHandStateEnum__get_Healthy (const MethodInfo* method);
// 0x3e50680

int32_t CustomLogic_CustomLogicHandStateEnum__get_Healthy(MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicHandStateEnum$$get_Damaged
// il2cpp: int32_t CustomLogic_CustomLogicHandStateEnum__get_Damaged (const MethodInfo* method);
// 0x3e50690

int32_t CustomLogic_CustomLogicHandStateEnum__get_Damaged(MethodInfo *method)

{
  return 1;
}


// CustomLogic.CustomLogicHandStateEnum$$get_Severed
// il2cpp: int32_t CustomLogic_CustomLogicHandStateEnum__get_Severed (const MethodInfo* method);
// 0x3e506a0

int32_t CustomLogic_CustomLogicHandStateEnum__get_Severed(MethodInfo *method)

{
  return 2;
}


// CustomLogic.CustomLogicHandStateEnum$$get_Recovering
// il2cpp: int32_t CustomLogic_CustomLogicHandStateEnum__get_Recovering (const MethodInfo* method);
// 0x3e506b0

int32_t CustomLogic_CustomLogicHandStateEnum__get_Recovering(MethodInfo *method)

{
  return 3;
}


// CustomLogic.CustomLogicHandStateEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicHandStateEnum__get_ClassName (CustomLogic_CustomLogicHandStateEnum_o* __this, const MethodInfo* method);
// 0x3e506c0

System_String_o *
CustomLogic_CustomLogicHandStateEnum__get_ClassName
          (CustomLogic_CustomLogicHandStateEnum_o *__this,MethodInfo *method)

{
  if (DAT_05702fa0 == '\0') {
    il2cpp_init_method_metadata(&"HandStateEnum");
    DAT_05702fa0 = '\x01';
  }
  return "HandStateEnum";
}


// CustomLogic.CustomLogicHandStateEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicHandStateEnum__get_IsAbstract (CustomLogic_CustomLogicHandStateEnum_o* __this, const MethodInfo* method);
// 0x3e506f0

bool_conflict
CustomLogic_CustomLogicHandStateEnum__get_IsAbstract
          (CustomLogic_CustomLogicHandStateEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicHandStateEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicHandStateEnum__get_IsStatic (CustomLogic_CustomLogicHandStateEnum_o* __this, const MethodInfo* method);
// 0x3e50700

bool_conflict
CustomLogic_CustomLogicHandStateEnum__get_IsStatic
          (CustomLogic_CustomLogicHandStateEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicHandStateEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicHandStateEnum__get_InheritBaseMembers (CustomLogic_CustomLogicHandStateEnum_o* __this, const MethodInfo* method);
// 0x3e50710

bool_conflict
CustomLogic_CustomLogicHandStateEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicHandStateEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


