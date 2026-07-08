// Type: CustomLogic.CustomLogicPhysicMaterialCombineEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicPhysicMaterialCombineEnum.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicPhysicMaterialCombineEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicPhysicMaterialCombineEnum_o* CustomLogic_CustomLogicPhysicMaterialCombineEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3e80890

CustomLogic_CustomLogicPhysicMaterialCombineEnum_o *
CustomLogic_CustomLogicPhysicMaterialCombineEnum_Factory__CreateInstance
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
  if (DAT_057033f4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicPhysicMaterialCombineEnum);
    DAT_057033f4 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicPhysicMaterialCombineEnum);
      if (DAT_057033f2 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_057033f2 = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicPhysicMaterialCombineEnum_o *)__this;
    }
    il2cpp_glue_01f2f1a0(args);
    uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
    pSVar1 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicPhysicMaterialCombineEnum constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicPhysicMaterialCombineEnum_CreateInsta);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPhysicMaterialCombineEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3e809b0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  System_String_o *str2;
  undefined8 uVar3;
  System_Exception_o *__this;
  System_Func_T__object__o *pSVar4;
  CustomLogic_CLPropertyBinding_T__o *pCVar5;
  
  if (DAT_057033f5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"Average");
    il2cpp_init_method_metadata(&"Minimum");
    il2cpp_init_method_metadata(&"Maximum");
    il2cpp_init_method_metadata(&"Multiply");
    DAT_057033f5 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Minimum",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_057033f6 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Minimum_g____ge);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPhysicMaterialCom);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPhysicMaterialCombi);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPhysicMaterialCombineEnum__objec);
      DAT_057033f6 = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPhysicMaterialCombineEnum__objec);
    System_Func<object__object>___ctor();
    pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPhysicMaterialCombi);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicPhysicMaterialCom);
    return (CustomLogic_ICLMemberBinding_o *)pCVar5;
  }
  bVar1 = System_String__op_Equality(name,"Multiply",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_057033f7 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Multiply_g____g);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPhysicMaterialCom);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPhysicMaterialCombi);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPhysicMaterialCombineEnum__objec);
      DAT_057033f7 = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPhysicMaterialCombineEnum__objec);
    System_Func<object__object>___ctor();
    pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPhysicMaterialCombi);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicPhysicMaterialCom);
    return (CustomLogic_ICLMemberBinding_o *)pCVar5;
  }
  bVar1 = System_String__op_Equality(name,"Maximum",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality(name,"Average",(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      pSVar2 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
      str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicPhysicMaterialCombineEnum not found");
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
    if (DAT_057033f9 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Average_g____ge);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPhysicMaterialCom);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPhysicMaterialCombi);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPhysicMaterialCombineEnum__objec);
      DAT_057033f9 = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPhysicMaterialCombineEnum__objec);
    System_Func<object__object>___ctor();
    pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPhysicMaterialCombi);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicPhysicMaterialCom);
    return (CustomLogic_ICLMemberBinding_o *)pCVar5;
  }
  if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (DAT_057033f8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Maximum_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPhysicMaterialCom);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPhysicMaterialCombi);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPhysicMaterialCombineEnum__objec);
    DAT_057033f8 = '\x01';
  }
  pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPhysicMaterialCombineEnum__objec);
  System_Func<object__object>___ctor();
  pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPhysicMaterialCombi);
  CustomLogic_CLPropertyBinding<object>___ctor
            (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicPhysicMaterialCom);
  return (CustomLogic_ICLMemberBinding_o *)pCVar5;
}


// CustomLogic.CustomLogicPhysicMaterialCombineEnum.Bindings$$__CreatePropertyBinding__Minimum
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum__o* CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings____CreatePropertyBinding__Minimum (const MethodInfo* method);
// 0x3e80b90

CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum__o *
CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings____CreatePropertyBinding__Minimum
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum__o *__this;
  
  if (DAT_057033f6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Minimum_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPhysicMaterialCom);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPhysicMaterialCombi);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPhysicMaterialCombineEnum__objec);
    DAT_057033f6 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPhysicMaterialCombineEnum__objec);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPhysicMaterialCombi);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicPhysicMaterialCom);
  return __this;
}


// CustomLogic.CustomLogicPhysicMaterialCombineEnum.Bindings$$__CreatePropertyBinding__Multiply
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum__o* CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings____CreatePropertyBinding__Multiply (const MethodInfo* method);
// 0x3e80c30

CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum__o *
CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings____CreatePropertyBinding__Multiply
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum__o *__this;
  
  if (DAT_057033f7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Multiply_g____g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPhysicMaterialCom);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPhysicMaterialCombi);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPhysicMaterialCombineEnum__objec);
    DAT_057033f7 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPhysicMaterialCombineEnum__objec);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPhysicMaterialCombi);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicPhysicMaterialCom);
  return __this;
}


// CustomLogic.CustomLogicPhysicMaterialCombineEnum.Bindings$$__CreatePropertyBinding__Maximum
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum__o* CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings____CreatePropertyBinding__Maximum (const MethodInfo* method);
// 0x3e80cd0

CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum__o *
CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings____CreatePropertyBinding__Maximum
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum__o *__this;
  
  if (DAT_057033f8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Maximum_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPhysicMaterialCom);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPhysicMaterialCombi);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPhysicMaterialCombineEnum__objec);
    DAT_057033f8 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPhysicMaterialCombineEnum__objec);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPhysicMaterialCombi);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicPhysicMaterialCom);
  return __this;
}


// CustomLogic.CustomLogicPhysicMaterialCombineEnum.Bindings$$__CreatePropertyBinding__Average
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum__o* CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings____CreatePropertyBinding__Average (const MethodInfo* method);
// 0x3e80d70

CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum__o *
CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings____CreatePropertyBinding__Average
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum__o *__this;
  
  if (DAT_057033f9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Average_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicPhysicMaterialCom);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicPhysicMaterialCombi);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPhysicMaterialCombineEnum__objec);
    DAT_057033f9 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPhysicMaterialCombineEnum__objec);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicPhysicMaterialCombineEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicPhysicMaterialCombi);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicPhysicMaterialCom);
  return __this;
}


// CustomLogic.CustomLogicPhysicMaterialCombineEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings___cctor (const MethodInfo* method);
// 0x3e80e10

void CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_057033fa == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"Average");
    il2cpp_init_method_metadata(&"Minimum");
    il2cpp_init_method_metadata(&"Maximum");
    il2cpp_init_method_metadata(&"Multiply");
    DAT_057033fa = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"Minimum",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Multiply",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Maximum",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Average",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPhysicMaterialCombineEnum.Bindings$$<__CreatePropertyBinding__Minimum>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings_____CreatePropertyBinding__Minimum_g____getter_2_0 (CustomLogic_CustomLogicPhysicMaterialCombineEnum_o* __i, const MethodInfo* method);
// 0x3e80f40

Il2CppObject *
CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings__<__CreatePropertyBinding__Minimum>g____getter_2_0
          (CustomLogic_CustomLogicPhysicMaterialCombineEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicPhysicMaterialCombineEnum.Bindings$$<__CreatePropertyBinding__Multiply>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings_____CreatePropertyBinding__Multiply_g____getter_3_0 (CustomLogic_CustomLogicPhysicMaterialCombineEnum_o* __i, const MethodInfo* method);
// 0x3e80f60

Il2CppObject *
CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings__<__CreatePropertyBinding__Multiply>g____getter_3_0
          (CustomLogic_CustomLogicPhysicMaterialCombineEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicPhysicMaterialCombineEnum.Bindings$$<__CreatePropertyBinding__Maximum>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings_____CreatePropertyBinding__Maximum_g____getter_4_0 (CustomLogic_CustomLogicPhysicMaterialCombineEnum_o* __i, const MethodInfo* method);
// 0x3e80f80

Il2CppObject *
CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings__<__CreatePropertyBinding__Maximum>g____getter_4_0
          (CustomLogic_CustomLogicPhysicMaterialCombineEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicPhysicMaterialCombineEnum.Bindings$$<__CreatePropertyBinding__Average>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings_____CreatePropertyBinding__Average_g____getter_5_0 (CustomLogic_CustomLogicPhysicMaterialCombineEnum_o* __i, const MethodInfo* method);
// 0x3e80fa0

Il2CppObject *
CustomLogic_CustomLogicPhysicMaterialCombineEnum_Bindings__<__CreatePropertyBinding__Average>g____getter_5_0
          (CustomLogic_CustomLogicPhysicMaterialCombineEnum_o *__i,MethodInfo *method)

{
  uint in_EAX;
  Il2CppObject *pIVar1;
  undefined8 uStack_8;
  
  uStack_8 = (ulong)in_EAX;
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,(long)&uStack_8 + 4);
  return pIVar1;
}


// CustomLogic.CustomLogicPhysicMaterialCombineEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicPhysicMaterialCombineEnum___ctor (CustomLogic_CustomLogicPhysicMaterialCombineEnum_o* __this, const MethodInfo* method);
// 0x3e80780

void CustomLogic_CustomLogicPhysicMaterialCombineEnum___ctor
               (CustomLogic_CustomLogicPhysicMaterialCombineEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057033f2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_057033f2 = '\x01';
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


// CustomLogic.CustomLogicPhysicMaterialCombineEnum$$get_Minimum
// il2cpp: int32_t CustomLogic_CustomLogicPhysicMaterialCombineEnum__get_Minimum (const MethodInfo* method);
// 0x3e807f0

int32_t CustomLogic_CustomLogicPhysicMaterialCombineEnum__get_Minimum(MethodInfo *method)

{
  return 2;
}


// CustomLogic.CustomLogicPhysicMaterialCombineEnum$$get_Multiply
// il2cpp: int32_t CustomLogic_CustomLogicPhysicMaterialCombineEnum__get_Multiply (const MethodInfo* method);
// 0x3e80800

int32_t CustomLogic_CustomLogicPhysicMaterialCombineEnum__get_Multiply(MethodInfo *method)

{
  return 1;
}


// CustomLogic.CustomLogicPhysicMaterialCombineEnum$$get_Maximum
// il2cpp: int32_t CustomLogic_CustomLogicPhysicMaterialCombineEnum__get_Maximum (const MethodInfo* method);
// 0x3e80810

int32_t CustomLogic_CustomLogicPhysicMaterialCombineEnum__get_Maximum(MethodInfo *method)

{
  return 3;
}


// CustomLogic.CustomLogicPhysicMaterialCombineEnum$$get_Average
// il2cpp: int32_t CustomLogic_CustomLogicPhysicMaterialCombineEnum__get_Average (const MethodInfo* method);
// 0x3e80820

int32_t CustomLogic_CustomLogicPhysicMaterialCombineEnum__get_Average(MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicPhysicMaterialCombineEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicPhysicMaterialCombineEnum__get_ClassName (CustomLogic_CustomLogicPhysicMaterialCombineEnum_o* __this, const MethodInfo* method);
// 0x3e80830

System_String_o *
CustomLogic_CustomLogicPhysicMaterialCombineEnum__get_ClassName
          (CustomLogic_CustomLogicPhysicMaterialCombineEnum_o *__this,MethodInfo *method)

{
  if (DAT_057033f3 == '\0') {
    il2cpp_init_method_metadata(&"PhysicMaterialCombineEnum");
    DAT_057033f3 = '\x01';
  }
  return "PhysicMaterialCombineEnum";
}


// CustomLogic.CustomLogicPhysicMaterialCombineEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicPhysicMaterialCombineEnum__get_IsAbstract (CustomLogic_CustomLogicPhysicMaterialCombineEnum_o* __this, const MethodInfo* method);
// 0x3e80860

bool_conflict
CustomLogic_CustomLogicPhysicMaterialCombineEnum__get_IsAbstract
          (CustomLogic_CustomLogicPhysicMaterialCombineEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicPhysicMaterialCombineEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicPhysicMaterialCombineEnum__get_IsStatic (CustomLogic_CustomLogicPhysicMaterialCombineEnum_o* __this, const MethodInfo* method);
// 0x3e80870

bool_conflict
CustomLogic_CustomLogicPhysicMaterialCombineEnum__get_IsStatic
          (CustomLogic_CustomLogicPhysicMaterialCombineEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicPhysicMaterialCombineEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicPhysicMaterialCombineEnum__get_InheritBaseMembers (CustomLogic_CustomLogicPhysicMaterialCombineEnum_o* __this, const MethodInfo* method);
// 0x3e80880

bool_conflict
CustomLogic_CustomLogicPhysicMaterialCombineEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicPhysicMaterialCombineEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


