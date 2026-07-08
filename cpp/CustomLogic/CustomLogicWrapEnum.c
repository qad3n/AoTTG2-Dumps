// Type: CustomLogic.CustomLogicWrapEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicWrapEnum.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicWrapEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicWrapEnum_o* CustomLogic_CustomLogicWrapEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3eab160

CustomLogic_CustomLogicWrapEnum_o *
CustomLogic_CustomLogicWrapEnum_Factory__CreateInstance
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
  if (DAT_057037d6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicWrapEnum);
    DAT_057037d6 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicWrapEnum);
      if (DAT_057037d4 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_057037d4 = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicWrapEnum_o *)__this;
    }
    il2cpp_glue_01f2f1a0(args);
    uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
    pSVar1 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicWrapEnum constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicWrapEnum_CreateInstance);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWrapEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicWrapEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3eab280

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicWrapEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  System_String_o *str2;
  undefined8 uVar3;
  System_Exception_o *__this;
  System_Func_T__object__o *pSVar4;
  CustomLogic_CLPropertyBinding_T__o *pCVar5;
  
  if (DAT_057037d7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"NoWrap");
    il2cpp_init_method_metadata(&"WrapReverse");
    il2cpp_init_method_metadata(&"Wrap");
    DAT_057037d7 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"NoWrap",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_057037d8 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__NoWrap_g____get);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicWrapEnum);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicWrapEnum);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicWrapEnum__object);
      DAT_057037d8 = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicWrapEnum__object);
    System_Func<object__object>___ctor();
    pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicWrapEnum);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicWrapEnum);
    return (CustomLogic_ICLMemberBinding_o *)pCVar5;
  }
  bVar1 = System_String__op_Equality(name,"Wrap",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_057037d9 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Wrap_g____gette);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicWrapEnum);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicWrapEnum);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicWrapEnum__object);
      DAT_057037d9 = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicWrapEnum__object);
    System_Func<object__object>___ctor();
    pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicWrapEnum);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicWrapEnum);
    return (CustomLogic_ICLMemberBinding_o *)pCVar5;
  }
  bVar1 = System_String__op_Equality(name,"WrapReverse",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    pSVar2 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicWrapEnum not found");
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
  if (DAT_057037da == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__WrapReverse_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicWrapEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicWrapEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicWrapEnum__object);
    DAT_057037da = '\x01';
  }
  pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicWrapEnum__object);
  System_Func<object__object>___ctor();
  pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicWrapEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicWrapEnum);
  return (CustomLogic_ICLMemberBinding_o *)pCVar5;
}


// CustomLogic.CustomLogicWrapEnum.Bindings$$__CreatePropertyBinding__NoWrap
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWrapEnum__o* CustomLogic_CustomLogicWrapEnum_Bindings____CreatePropertyBinding__NoWrap (const MethodInfo* method);
// 0x3eab410

CustomLogic_CLPropertyBinding_CustomLogicWrapEnum__o *
CustomLogic_CustomLogicWrapEnum_Bindings____CreatePropertyBinding__NoWrap(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicWrapEnum__o *__this;
  
  if (DAT_057037d8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__NoWrap_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicWrapEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicWrapEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicWrapEnum__object);
    DAT_057037d8 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicWrapEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicWrapEnum__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicWrapEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicWrapEnum);
  return __this;
}


// CustomLogic.CustomLogicWrapEnum.Bindings$$__CreatePropertyBinding__Wrap
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWrapEnum__o* CustomLogic_CustomLogicWrapEnum_Bindings____CreatePropertyBinding__Wrap (const MethodInfo* method);
// 0x3eab4b0

CustomLogic_CLPropertyBinding_CustomLogicWrapEnum__o *
CustomLogic_CustomLogicWrapEnum_Bindings____CreatePropertyBinding__Wrap(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicWrapEnum__o *__this;
  
  if (DAT_057037d9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Wrap_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicWrapEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicWrapEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicWrapEnum__object);
    DAT_057037d9 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicWrapEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicWrapEnum__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicWrapEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicWrapEnum);
  return __this;
}


// CustomLogic.CustomLogicWrapEnum.Bindings$$__CreatePropertyBinding__WrapReverse
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWrapEnum__o* CustomLogic_CustomLogicWrapEnum_Bindings____CreatePropertyBinding__WrapReverse (const MethodInfo* method);
// 0x3eab550

CustomLogic_CLPropertyBinding_CustomLogicWrapEnum__o *
CustomLogic_CustomLogicWrapEnum_Bindings____CreatePropertyBinding__WrapReverse(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicWrapEnum__o *__this;
  
  if (DAT_057037da == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__WrapReverse_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicWrapEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicWrapEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicWrapEnum__object);
    DAT_057037da = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicWrapEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicWrapEnum__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicWrapEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicWrapEnum);
  return __this;
}


// CustomLogic.CustomLogicWrapEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicWrapEnum_Bindings___cctor (const MethodInfo* method);
// 0x3eab5f0

void CustomLogic_CustomLogicWrapEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_057037db == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"NoWrap");
    il2cpp_init_method_metadata(&"WrapReverse");
    il2cpp_init_method_metadata(&"Wrap");
    DAT_057037db = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"NoWrap",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Wrap",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"WrapReverse",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWrapEnum.Bindings$$<__CreatePropertyBinding__NoWrap>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWrapEnum_Bindings_____CreatePropertyBinding__NoWrap_g____getter_2_0 (CustomLogic_CustomLogicWrapEnum_o* __i, const MethodInfo* method);
// 0x3eab700

Il2CppObject *
CustomLogic_CustomLogicWrapEnum_Bindings__<__CreatePropertyBinding__NoWrap>g____getter_2_0
          (CustomLogic_CustomLogicWrapEnum_o *__i,MethodInfo *method)

{
  uint in_EAX;
  Il2CppObject *pIVar1;
  undefined8 uStack_8;
  
  uStack_8 = (ulong)in_EAX;
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,(long)&uStack_8 + 4);
  return pIVar1;
}


// CustomLogic.CustomLogicWrapEnum.Bindings$$<__CreatePropertyBinding__Wrap>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWrapEnum_Bindings_____CreatePropertyBinding__Wrap_g____getter_3_0 (CustomLogic_CustomLogicWrapEnum_o* __i, const MethodInfo* method);
// 0x3eab720

Il2CppObject *
CustomLogic_CustomLogicWrapEnum_Bindings__<__CreatePropertyBinding__Wrap>g____getter_3_0
          (CustomLogic_CustomLogicWrapEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicWrapEnum.Bindings$$<__CreatePropertyBinding__WrapReverse>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWrapEnum_Bindings_____CreatePropertyBinding__WrapReverse_g____getter_4_0 (CustomLogic_CustomLogicWrapEnum_o* __i, const MethodInfo* method);
// 0x3eab740

Il2CppObject *
CustomLogic_CustomLogicWrapEnum_Bindings__<__CreatePropertyBinding__WrapReverse>g____getter_4_0
          (CustomLogic_CustomLogicWrapEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicWrapEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicWrapEnum___ctor (CustomLogic_CustomLogicWrapEnum_o* __this, const MethodInfo* method);
// 0x3eab060

void CustomLogic_CustomLogicWrapEnum___ctor
               (CustomLogic_CustomLogicWrapEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057037d4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_057037d4 = '\x01';
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


// CustomLogic.CustomLogicWrapEnum$$get_NoWrap
// il2cpp: int32_t CustomLogic_CustomLogicWrapEnum__get_NoWrap (const MethodInfo* method);
// 0x3eab0d0

int32_t CustomLogic_CustomLogicWrapEnum__get_NoWrap(MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicWrapEnum$$get_Wrap
// il2cpp: int32_t CustomLogic_CustomLogicWrapEnum__get_Wrap (const MethodInfo* method);
// 0x3eab0e0

int32_t CustomLogic_CustomLogicWrapEnum__get_Wrap(MethodInfo *method)

{
  return 1;
}


// CustomLogic.CustomLogicWrapEnum$$get_WrapReverse
// il2cpp: int32_t CustomLogic_CustomLogicWrapEnum__get_WrapReverse (const MethodInfo* method);
// 0x3eab0f0

int32_t CustomLogic_CustomLogicWrapEnum__get_WrapReverse(MethodInfo *method)

{
  return 2;
}


// CustomLogic.CustomLogicWrapEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicWrapEnum__get_ClassName (CustomLogic_CustomLogicWrapEnum_o* __this, const MethodInfo* method);
// 0x3eab100

System_String_o *
CustomLogic_CustomLogicWrapEnum__get_ClassName
          (CustomLogic_CustomLogicWrapEnum_o *__this,MethodInfo *method)

{
  if (DAT_057037d5 == '\0') {
    il2cpp_init_method_metadata(&"WrapEnum");
    DAT_057037d5 = '\x01';
  }
  return "WrapEnum";
}


// CustomLogic.CustomLogicWrapEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicWrapEnum__get_IsAbstract (CustomLogic_CustomLogicWrapEnum_o* __this, const MethodInfo* method);
// 0x3eab130

bool_conflict
CustomLogic_CustomLogicWrapEnum__get_IsAbstract
          (CustomLogic_CustomLogicWrapEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicWrapEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicWrapEnum__get_IsStatic (CustomLogic_CustomLogicWrapEnum_o* __this, const MethodInfo* method);
// 0x3eab140

bool_conflict
CustomLogic_CustomLogicWrapEnum__get_IsStatic
          (CustomLogic_CustomLogicWrapEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicWrapEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicWrapEnum__get_InheritBaseMembers (CustomLogic_CustomLogicWrapEnum_o* __this, const MethodInfo* method);
// 0x3eab150

bool_conflict
CustomLogic_CustomLogicWrapEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicWrapEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


