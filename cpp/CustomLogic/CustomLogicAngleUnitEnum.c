// Type: CustomLogic.CustomLogicAngleUnitEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicAngleUnitEnum.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicAngleUnitEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicAngleUnitEnum_o* CustomLogic_CustomLogicAngleUnitEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3e3feb0

CustomLogic_CustomLogicAngleUnitEnum_o *
CustomLogic_CustomLogicAngleUnitEnum_Factory__CreateInstance
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
  if (DAT_05702e65 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicAngleUnitEnum);
    DAT_05702e65 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicAngleUnitEnum);
      if (DAT_05702e63 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_05702e63 = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicAngleUnitEnum_o *)__this;
    }
    il2cpp_glue_01f2f1a0(args);
    uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
    pSVar1 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicAngleUnitEnum constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicAngleUnitEnum_CreateInstance);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAngleUnitEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicAngleUnitEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3e3ffd0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicAngleUnitEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  System_String_o *str2;
  undefined8 uVar3;
  System_Exception_o *__this;
  System_Func_T__object__o *pSVar4;
  CustomLogic_CLPropertyBinding_T__o *pCVar5;
  
  if (DAT_05702e66 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"Radian");
    il2cpp_init_method_metadata(&"Turn");
    il2cpp_init_method_metadata(&"Degree");
    il2cpp_init_method_metadata(&"Gradian");
    DAT_05702e66 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Degree",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05702e67 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Degree_g____get);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAngleUnitEnum);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAngleUnitEnum);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAngleUnitEnum__object);
      DAT_05702e67 = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAngleUnitEnum__object);
    System_Func<object__object>___ctor();
    pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAngleUnitEnum);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAngleUnitEnum);
    return (CustomLogic_ICLMemberBinding_o *)pCVar5;
  }
  bVar1 = System_String__op_Equality(name,"Gradian",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05702e68 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Gradian_g____ge);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAngleUnitEnum);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAngleUnitEnum);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAngleUnitEnum__object);
      DAT_05702e68 = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAngleUnitEnum__object);
    System_Func<object__object>___ctor();
    pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAngleUnitEnum);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAngleUnitEnum);
    return (CustomLogic_ICLMemberBinding_o *)pCVar5;
  }
  bVar1 = System_String__op_Equality(name,"Radian",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality(name,"Turn",(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      pSVar2 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
      str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicAngleUnitEnum not found");
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
    if (DAT_05702e6a == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Turn_g____gette);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAngleUnitEnum);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAngleUnitEnum);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAngleUnitEnum__object);
      DAT_05702e6a = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAngleUnitEnum__object);
    System_Func<object__object>___ctor();
    pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAngleUnitEnum);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAngleUnitEnum);
    return (CustomLogic_ICLMemberBinding_o *)pCVar5;
  }
  if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (DAT_05702e69 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Radian_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAngleUnitEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAngleUnitEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAngleUnitEnum__object);
    DAT_05702e69 = '\x01';
  }
  pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAngleUnitEnum__object);
  System_Func<object__object>___ctor();
  pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAngleUnitEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAngleUnitEnum);
  return (CustomLogic_ICLMemberBinding_o *)pCVar5;
}


// CustomLogic.CustomLogicAngleUnitEnum.Bindings$$__CreatePropertyBinding__Degree
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum__o* CustomLogic_CustomLogicAngleUnitEnum_Bindings____CreatePropertyBinding__Degree (const MethodInfo* method);
// 0x3e401b0

CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum__o *
CustomLogic_CustomLogicAngleUnitEnum_Bindings____CreatePropertyBinding__Degree(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum__o *__this;
  
  if (DAT_05702e67 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Degree_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAngleUnitEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAngleUnitEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAngleUnitEnum__object);
    DAT_05702e67 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAngleUnitEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAngleUnitEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAngleUnitEnum);
  return __this;
}


// CustomLogic.CustomLogicAngleUnitEnum.Bindings$$__CreatePropertyBinding__Gradian
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum__o* CustomLogic_CustomLogicAngleUnitEnum_Bindings____CreatePropertyBinding__Gradian (const MethodInfo* method);
// 0x3e40250

CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum__o *
CustomLogic_CustomLogicAngleUnitEnum_Bindings____CreatePropertyBinding__Gradian(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum__o *__this;
  
  if (DAT_05702e68 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Gradian_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAngleUnitEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAngleUnitEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAngleUnitEnum__object);
    DAT_05702e68 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAngleUnitEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAngleUnitEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAngleUnitEnum);
  return __this;
}


// CustomLogic.CustomLogicAngleUnitEnum.Bindings$$__CreatePropertyBinding__Radian
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum__o* CustomLogic_CustomLogicAngleUnitEnum_Bindings____CreatePropertyBinding__Radian (const MethodInfo* method);
// 0x3e402f0

CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum__o *
CustomLogic_CustomLogicAngleUnitEnum_Bindings____CreatePropertyBinding__Radian(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum__o *__this;
  
  if (DAT_05702e69 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Radian_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAngleUnitEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAngleUnitEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAngleUnitEnum__object);
    DAT_05702e69 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAngleUnitEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAngleUnitEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAngleUnitEnum);
  return __this;
}


// CustomLogic.CustomLogicAngleUnitEnum.Bindings$$__CreatePropertyBinding__Turn
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum__o* CustomLogic_CustomLogicAngleUnitEnum_Bindings____CreatePropertyBinding__Turn (const MethodInfo* method);
// 0x3e40390

CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum__o *
CustomLogic_CustomLogicAngleUnitEnum_Bindings____CreatePropertyBinding__Turn(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum__o *__this;
  
  if (DAT_05702e6a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Turn_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAngleUnitEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAngleUnitEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAngleUnitEnum__object);
    DAT_05702e6a = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAngleUnitEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAngleUnitEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAngleUnitEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAngleUnitEnum);
  return __this;
}


// CustomLogic.CustomLogicAngleUnitEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicAngleUnitEnum_Bindings___cctor (const MethodInfo* method);
// 0x3e40430

void CustomLogic_CustomLogicAngleUnitEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_05702e6b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"Radian");
    il2cpp_init_method_metadata(&"Turn");
    il2cpp_init_method_metadata(&"Degree");
    il2cpp_init_method_metadata(&"Gradian");
    DAT_05702e6b = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"Degree",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Gradian",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Radian",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Turn",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAngleUnitEnum.Bindings$$<__CreatePropertyBinding__Degree>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAngleUnitEnum_Bindings_____CreatePropertyBinding__Degree_g____getter_2_0 (CustomLogic_CustomLogicAngleUnitEnum_o* __i, const MethodInfo* method);
// 0x3e40560

Il2CppObject *
CustomLogic_CustomLogicAngleUnitEnum_Bindings__<__CreatePropertyBinding__Degree>g____getter_2_0
          (CustomLogic_CustomLogicAngleUnitEnum_o *__i,MethodInfo *method)

{
  uint in_EAX;
  Il2CppObject *pIVar1;
  undefined8 uStack_8;
  
  uStack_8 = (ulong)in_EAX;
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,(long)&uStack_8 + 4);
  return pIVar1;
}


// CustomLogic.CustomLogicAngleUnitEnum.Bindings$$<__CreatePropertyBinding__Gradian>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAngleUnitEnum_Bindings_____CreatePropertyBinding__Gradian_g____getter_3_0 (CustomLogic_CustomLogicAngleUnitEnum_o* __i, const MethodInfo* method);
// 0x3e40580

Il2CppObject *
CustomLogic_CustomLogicAngleUnitEnum_Bindings__<__CreatePropertyBinding__Gradian>g____getter_3_0
          (CustomLogic_CustomLogicAngleUnitEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicAngleUnitEnum.Bindings$$<__CreatePropertyBinding__Radian>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAngleUnitEnum_Bindings_____CreatePropertyBinding__Radian_g____getter_4_0 (CustomLogic_CustomLogicAngleUnitEnum_o* __i, const MethodInfo* method);
// 0x3e405a0

Il2CppObject *
CustomLogic_CustomLogicAngleUnitEnum_Bindings__<__CreatePropertyBinding__Radian>g____getter_4_0
          (CustomLogic_CustomLogicAngleUnitEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicAngleUnitEnum.Bindings$$<__CreatePropertyBinding__Turn>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAngleUnitEnum_Bindings_____CreatePropertyBinding__Turn_g____getter_5_0 (CustomLogic_CustomLogicAngleUnitEnum_o* __i, const MethodInfo* method);
// 0x3e405c0

Il2CppObject *
CustomLogic_CustomLogicAngleUnitEnum_Bindings__<__CreatePropertyBinding__Turn>g____getter_5_0
          (CustomLogic_CustomLogicAngleUnitEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicAngleUnitEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicAngleUnitEnum___ctor (CustomLogic_CustomLogicAngleUnitEnum_o* __this, const MethodInfo* method);
// 0x3e3fda0

void CustomLogic_CustomLogicAngleUnitEnum___ctor
               (CustomLogic_CustomLogicAngleUnitEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702e63 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_05702e63 = '\x01';
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


// CustomLogic.CustomLogicAngleUnitEnum$$get_Degree
// il2cpp: int32_t CustomLogic_CustomLogicAngleUnitEnum__get_Degree (const MethodInfo* method);
// 0x3e3fe10

int32_t CustomLogic_CustomLogicAngleUnitEnum__get_Degree(MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicAngleUnitEnum$$get_Gradian
// il2cpp: int32_t CustomLogic_CustomLogicAngleUnitEnum__get_Gradian (const MethodInfo* method);
// 0x3e3fe20

int32_t CustomLogic_CustomLogicAngleUnitEnum__get_Gradian(MethodInfo *method)

{
  return 1;
}


// CustomLogic.CustomLogicAngleUnitEnum$$get_Radian
// il2cpp: int32_t CustomLogic_CustomLogicAngleUnitEnum__get_Radian (const MethodInfo* method);
// 0x3e3fe30

int32_t CustomLogic_CustomLogicAngleUnitEnum__get_Radian(MethodInfo *method)

{
  return 2;
}


// CustomLogic.CustomLogicAngleUnitEnum$$get_Turn
// il2cpp: int32_t CustomLogic_CustomLogicAngleUnitEnum__get_Turn (const MethodInfo* method);
// 0x3e3fe40

int32_t CustomLogic_CustomLogicAngleUnitEnum__get_Turn(MethodInfo *method)

{
  return 3;
}


// CustomLogic.CustomLogicAngleUnitEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicAngleUnitEnum__get_ClassName (CustomLogic_CustomLogicAngleUnitEnum_o* __this, const MethodInfo* method);
// 0x3e3fe50

System_String_o *
CustomLogic_CustomLogicAngleUnitEnum__get_ClassName
          (CustomLogic_CustomLogicAngleUnitEnum_o *__this,MethodInfo *method)

{
  if (DAT_05702e64 == '\0') {
    il2cpp_init_method_metadata(&"AngleUnitEnum");
    DAT_05702e64 = '\x01';
  }
  return "AngleUnitEnum";
}


// CustomLogic.CustomLogicAngleUnitEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicAngleUnitEnum__get_IsAbstract (CustomLogic_CustomLogicAngleUnitEnum_o* __this, const MethodInfo* method);
// 0x3e3fe80

bool_conflict
CustomLogic_CustomLogicAngleUnitEnum__get_IsAbstract
          (CustomLogic_CustomLogicAngleUnitEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicAngleUnitEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicAngleUnitEnum__get_IsStatic (CustomLogic_CustomLogicAngleUnitEnum_o* __this, const MethodInfo* method);
// 0x3e3fe90

bool_conflict
CustomLogic_CustomLogicAngleUnitEnum__get_IsStatic
          (CustomLogic_CustomLogicAngleUnitEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicAngleUnitEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicAngleUnitEnum__get_InheritBaseMembers (CustomLogic_CustomLogicAngleUnitEnum_o* __this, const MethodInfo* method);
// 0x3e3fea0

bool_conflict
CustomLogic_CustomLogicAngleUnitEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicAngleUnitEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


