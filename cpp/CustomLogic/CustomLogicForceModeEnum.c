// Type: CustomLogic.CustomLogicForceModeEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicForceModeEnum.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicForceModeEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicForceModeEnum_o* CustomLogic_CustomLogicForceModeEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3e4f920

CustomLogic_CustomLogicForceModeEnum_o *
CustomLogic_CustomLogicForceModeEnum_Factory__CreateInstance
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
  if (DAT_05702f91 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicForceModeEnum);
    DAT_05702f91 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicForceModeEnum);
      if (DAT_05702f8f == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_05702f8f = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicForceModeEnum_o *)__this;
    }
    il2cpp_glue_01f2f1a0(args);
    uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
    pSVar1 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicForceModeEnum constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicForceModeEnum_CreateInstance);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicForceModeEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicForceModeEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3e4fa40

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicForceModeEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  System_String_o *str2;
  undefined8 uVar3;
  System_Exception_o *__this;
  System_Func_T__object__o *pSVar4;
  CustomLogic_CLPropertyBinding_T__o *pCVar5;
  
  if (DAT_05702f92 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"Acceleration");
    il2cpp_init_method_metadata(&"VelocityChange");
    il2cpp_init_method_metadata(&"Impulse");
    il2cpp_init_method_metadata(&"Force");
    DAT_05702f92 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Force",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05702f93 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Force_g____gett);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicForceModeEnum);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicForceModeEnum);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicForceModeEnum__object);
      DAT_05702f93 = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicForceModeEnum__object);
    System_Func<object__object>___ctor();
    pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicForceModeEnum);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicForceModeEnum);
    return (CustomLogic_ICLMemberBinding_o *)pCVar5;
  }
  bVar1 = System_String__op_Equality(name,"Acceleration",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05702f94 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Acceleration_g);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicForceModeEnum);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicForceModeEnum);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicForceModeEnum__object);
      DAT_05702f94 = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicForceModeEnum__object);
    System_Func<object__object>___ctor();
    pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicForceModeEnum);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicForceModeEnum);
    return (CustomLogic_ICLMemberBinding_o *)pCVar5;
  }
  bVar1 = System_String__op_Equality(name,"Impulse",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality(name,"VelocityChange",(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      pSVar2 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
      str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicForceModeEnum not found");
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
    if (DAT_05702f96 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__VelocityChange);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicForceModeEnum);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicForceModeEnum);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicForceModeEnum__object);
      DAT_05702f96 = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicForceModeEnum__object);
    System_Func<object__object>___ctor();
    pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicForceModeEnum);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicForceModeEnum);
    return (CustomLogic_ICLMemberBinding_o *)pCVar5;
  }
  if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (DAT_05702f95 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Impulse_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicForceModeEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicForceModeEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicForceModeEnum__object);
    DAT_05702f95 = '\x01';
  }
  pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicForceModeEnum__object);
  System_Func<object__object>___ctor();
  pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicForceModeEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicForceModeEnum);
  return (CustomLogic_ICLMemberBinding_o *)pCVar5;
}


// CustomLogic.CustomLogicForceModeEnum.Bindings$$__CreatePropertyBinding__Force
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum__o* CustomLogic_CustomLogicForceModeEnum_Bindings____CreatePropertyBinding__Force (const MethodInfo* method);
// 0x3e4fc20

CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum__o *
CustomLogic_CustomLogicForceModeEnum_Bindings____CreatePropertyBinding__Force(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum__o *__this;
  
  if (DAT_05702f93 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Force_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicForceModeEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicForceModeEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicForceModeEnum__object);
    DAT_05702f93 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicForceModeEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicForceModeEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicForceModeEnum);
  return __this;
}


// CustomLogic.CustomLogicForceModeEnum.Bindings$$__CreatePropertyBinding__Acceleration
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum__o* CustomLogic_CustomLogicForceModeEnum_Bindings____CreatePropertyBinding__Acceleration (const MethodInfo* method);
// 0x3e4fcc0

CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum__o *
CustomLogic_CustomLogicForceModeEnum_Bindings____CreatePropertyBinding__Acceleration
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum__o *__this;
  
  if (DAT_05702f94 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Acceleration_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicForceModeEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicForceModeEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicForceModeEnum__object);
    DAT_05702f94 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicForceModeEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicForceModeEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicForceModeEnum);
  return __this;
}


// CustomLogic.CustomLogicForceModeEnum.Bindings$$__CreatePropertyBinding__Impulse
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum__o* CustomLogic_CustomLogicForceModeEnum_Bindings____CreatePropertyBinding__Impulse (const MethodInfo* method);
// 0x3e4fd60

CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum__o *
CustomLogic_CustomLogicForceModeEnum_Bindings____CreatePropertyBinding__Impulse(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum__o *__this;
  
  if (DAT_05702f95 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Impulse_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicForceModeEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicForceModeEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicForceModeEnum__object);
    DAT_05702f95 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicForceModeEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicForceModeEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicForceModeEnum);
  return __this;
}


// CustomLogic.CustomLogicForceModeEnum.Bindings$$__CreatePropertyBinding__VelocityChange
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum__o* CustomLogic_CustomLogicForceModeEnum_Bindings____CreatePropertyBinding__VelocityChange (const MethodInfo* method);
// 0x3e4fe00

CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum__o *
CustomLogic_CustomLogicForceModeEnum_Bindings____CreatePropertyBinding__VelocityChange
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum__o *__this;
  
  if (DAT_05702f96 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__VelocityChange);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicForceModeEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicForceModeEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicForceModeEnum__object);
    DAT_05702f96 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicForceModeEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicForceModeEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicForceModeEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicForceModeEnum);
  return __this;
}


// CustomLogic.CustomLogicForceModeEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicForceModeEnum_Bindings___cctor (const MethodInfo* method);
// 0x3e4fea0

void CustomLogic_CustomLogicForceModeEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_05702f97 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"Acceleration");
    il2cpp_init_method_metadata(&"VelocityChange");
    il2cpp_init_method_metadata(&"Impulse");
    il2cpp_init_method_metadata(&"Force");
    DAT_05702f97 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"Force",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Acceleration",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Impulse",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"VelocityChange",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicForceModeEnum.Bindings$$<__CreatePropertyBinding__Force>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicForceModeEnum_Bindings_____CreatePropertyBinding__Force_g____getter_2_0 (CustomLogic_CustomLogicForceModeEnum_o* __i, const MethodInfo* method);
// 0x3e4ffd0

Il2CppObject *
CustomLogic_CustomLogicForceModeEnum_Bindings__<__CreatePropertyBinding__Force>g____getter_2_0
          (CustomLogic_CustomLogicForceModeEnum_o *__i,MethodInfo *method)

{
  uint in_EAX;
  Il2CppObject *pIVar1;
  undefined8 uStack_8;
  
  uStack_8 = (ulong)in_EAX;
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,(long)&uStack_8 + 4);
  return pIVar1;
}


// CustomLogic.CustomLogicForceModeEnum.Bindings$$<__CreatePropertyBinding__Acceleration>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicForceModeEnum_Bindings_____CreatePropertyBinding__Acceleration_g____getter_3_0 (CustomLogic_CustomLogicForceModeEnum_o* __i, const MethodInfo* method);
// 0x3e4fff0

Il2CppObject *
CustomLogic_CustomLogicForceModeEnum_Bindings__<__CreatePropertyBinding__Acceleration>g____getter_3_0
          (CustomLogic_CustomLogicForceModeEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicForceModeEnum.Bindings$$<__CreatePropertyBinding__Impulse>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicForceModeEnum_Bindings_____CreatePropertyBinding__Impulse_g____getter_4_0 (CustomLogic_CustomLogicForceModeEnum_o* __i, const MethodInfo* method);
// 0x3e50010

Il2CppObject *
CustomLogic_CustomLogicForceModeEnum_Bindings__<__CreatePropertyBinding__Impulse>g____getter_4_0
          (CustomLogic_CustomLogicForceModeEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicForceModeEnum.Bindings$$<__CreatePropertyBinding__VelocityChange>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicForceModeEnum_Bindings_____CreatePropertyBinding__VelocityChange_g____getter_5_0 (CustomLogic_CustomLogicForceModeEnum_o* __i, const MethodInfo* method);
// 0x3e50030

Il2CppObject *
CustomLogic_CustomLogicForceModeEnum_Bindings__<__CreatePropertyBinding__VelocityChange>g____getter_5_0
          (CustomLogic_CustomLogicForceModeEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicForceModeEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicForceModeEnum___ctor (CustomLogic_CustomLogicForceModeEnum_o* __this, const MethodInfo* method);
// 0x3e4f810

void CustomLogic_CustomLogicForceModeEnum___ctor
               (CustomLogic_CustomLogicForceModeEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702f8f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_05702f8f = '\x01';
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


// CustomLogic.CustomLogicForceModeEnum$$get_Force
// il2cpp: int32_t CustomLogic_CustomLogicForceModeEnum__get_Force (const MethodInfo* method);
// 0x3e4f880

int32_t CustomLogic_CustomLogicForceModeEnum__get_Force(MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicForceModeEnum$$get_Acceleration
// il2cpp: int32_t CustomLogic_CustomLogicForceModeEnum__get_Acceleration (const MethodInfo* method);
// 0x3e4f890

int32_t CustomLogic_CustomLogicForceModeEnum__get_Acceleration(MethodInfo *method)

{
  return 5;
}


// CustomLogic.CustomLogicForceModeEnum$$get_Impulse
// il2cpp: int32_t CustomLogic_CustomLogicForceModeEnum__get_Impulse (const MethodInfo* method);
// 0x3e4f8a0

int32_t CustomLogic_CustomLogicForceModeEnum__get_Impulse(MethodInfo *method)

{
  return 1;
}


// CustomLogic.CustomLogicForceModeEnum$$get_VelocityChange
// il2cpp: int32_t CustomLogic_CustomLogicForceModeEnum__get_VelocityChange (const MethodInfo* method);
// 0x3e4f8b0

int32_t CustomLogic_CustomLogicForceModeEnum__get_VelocityChange(MethodInfo *method)

{
  return 2;
}


// CustomLogic.CustomLogicForceModeEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicForceModeEnum__get_ClassName (CustomLogic_CustomLogicForceModeEnum_o* __this, const MethodInfo* method);
// 0x3e4f8c0

System_String_o *
CustomLogic_CustomLogicForceModeEnum__get_ClassName
          (CustomLogic_CustomLogicForceModeEnum_o *__this,MethodInfo *method)

{
  if (DAT_05702f90 == '\0') {
    il2cpp_init_method_metadata(&"ForceModeEnum");
    DAT_05702f90 = '\x01';
  }
  return "ForceModeEnum";
}


// CustomLogic.CustomLogicForceModeEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicForceModeEnum__get_IsAbstract (CustomLogic_CustomLogicForceModeEnum_o* __this, const MethodInfo* method);
// 0x3e4f8f0

bool_conflict
CustomLogic_CustomLogicForceModeEnum__get_IsAbstract
          (CustomLogic_CustomLogicForceModeEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicForceModeEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicForceModeEnum__get_IsStatic (CustomLogic_CustomLogicForceModeEnum_o* __this, const MethodInfo* method);
// 0x3e4f900

bool_conflict
CustomLogic_CustomLogicForceModeEnum__get_IsStatic
          (CustomLogic_CustomLogicForceModeEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicForceModeEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicForceModeEnum__get_InheritBaseMembers (CustomLogic_CustomLogicForceModeEnum_o* __this, const MethodInfo* method);
// 0x3e4f910

bool_conflict
CustomLogic_CustomLogicForceModeEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicForceModeEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


