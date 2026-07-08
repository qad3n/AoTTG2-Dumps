// Type: CustomLogic.CustomLogicOverflowEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicOverflowEnum.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicOverflowEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicOverflowEnum_o* CustomLogic_CustomLogicOverflowEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3e802b0

CustomLogic_CustomLogicOverflowEnum_o *
CustomLogic_CustomLogicOverflowEnum_Factory__CreateInstance
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
  if (DAT_057033ed == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicOverflowEnum);
    DAT_057033ed = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicOverflowEnum);
      if (DAT_057033eb == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_057033eb = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicOverflowEnum_o *)__this;
    }
    il2cpp_glue_01f2f1a0(args);
    uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
    pSVar1 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicOverflowEnum constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicOverflowEnum_CreateInstance);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicOverflowEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicOverflowEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3e803d0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicOverflowEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  System_String_o *str2;
  undefined8 uVar3;
  System_Exception_o *__this;
  System_Func_T__object__o *pSVar4;
  CustomLogic_CLPropertyBinding_T__o *pCVar5;
  
  if (DAT_057033ee == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"Visible");
    il2cpp_init_method_metadata(&"Hidden");
    DAT_057033ee = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Visible",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality(name,"Hidden",(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      pSVar2 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
      str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicOverflowEnum not found");
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
    if (DAT_057033f0 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Hidden_g____get);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicOverflowEnum);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicOverflowEnum);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicOverflowEnum__object);
      DAT_057033f0 = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicOverflowEnum__object);
    System_Func<object__object>___ctor();
    pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicOverflowEnum);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicOverflowEnum);
    return (CustomLogic_ICLMemberBinding_o *)pCVar5;
  }
  if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (DAT_057033ef == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Visible_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicOverflowEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicOverflowEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicOverflowEnum__object);
    DAT_057033ef = '\x01';
  }
  pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicOverflowEnum__object);
  System_Func<object__object>___ctor();
  pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicOverflowEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicOverflowEnum);
  return (CustomLogic_ICLMemberBinding_o *)pCVar5;
}


// CustomLogic.CustomLogicOverflowEnum.Bindings$$__CreatePropertyBinding__Visible
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicOverflowEnum__o* CustomLogic_CustomLogicOverflowEnum_Bindings____CreatePropertyBinding__Visible (const MethodInfo* method);
// 0x3e80510

CustomLogic_CLPropertyBinding_CustomLogicOverflowEnum__o *
CustomLogic_CustomLogicOverflowEnum_Bindings____CreatePropertyBinding__Visible(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicOverflowEnum__o *__this;
  
  if (DAT_057033ef == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Visible_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicOverflowEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicOverflowEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicOverflowEnum__object);
    DAT_057033ef = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicOverflowEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicOverflowEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicOverflowEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicOverflowEnum);
  return __this;
}


// CustomLogic.CustomLogicOverflowEnum.Bindings$$__CreatePropertyBinding__Hidden
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicOverflowEnum__o* CustomLogic_CustomLogicOverflowEnum_Bindings____CreatePropertyBinding__Hidden (const MethodInfo* method);
// 0x3e805b0

CustomLogic_CLPropertyBinding_CustomLogicOverflowEnum__o *
CustomLogic_CustomLogicOverflowEnum_Bindings____CreatePropertyBinding__Hidden(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicOverflowEnum__o *__this;
  
  if (DAT_057033f0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Hidden_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicOverflowEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicOverflowEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicOverflowEnum__object);
    DAT_057033f0 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicOverflowEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicOverflowEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicOverflowEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicOverflowEnum);
  return __this;
}


// CustomLogic.CustomLogicOverflowEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicOverflowEnum_Bindings___cctor (const MethodInfo* method);
// 0x3e80650

void CustomLogic_CustomLogicOverflowEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_057033f1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"Visible");
    il2cpp_init_method_metadata(&"Hidden");
    DAT_057033f1 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"Visible",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Hidden",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicOverflowEnum.Bindings$$<__CreatePropertyBinding__Visible>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicOverflowEnum_Bindings_____CreatePropertyBinding__Visible_g____getter_2_0 (CustomLogic_CustomLogicOverflowEnum_o* __i, const MethodInfo* method);
// 0x3e80740

Il2CppObject *
CustomLogic_CustomLogicOverflowEnum_Bindings__<__CreatePropertyBinding__Visible>g____getter_2_0
          (CustomLogic_CustomLogicOverflowEnum_o *__i,MethodInfo *method)

{
  uint in_EAX;
  Il2CppObject *pIVar1;
  undefined8 uStack_8;
  
  uStack_8 = (ulong)in_EAX;
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,(long)&uStack_8 + 4);
  return pIVar1;
}


// CustomLogic.CustomLogicOverflowEnum.Bindings$$<__CreatePropertyBinding__Hidden>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicOverflowEnum_Bindings_____CreatePropertyBinding__Hidden_g____getter_3_0 (CustomLogic_CustomLogicOverflowEnum_o* __i, const MethodInfo* method);
// 0x3e80760

Il2CppObject *
CustomLogic_CustomLogicOverflowEnum_Bindings__<__CreatePropertyBinding__Hidden>g____getter_3_0
          (CustomLogic_CustomLogicOverflowEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicOverflowEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicOverflowEnum___ctor (CustomLogic_CustomLogicOverflowEnum_o* __this, const MethodInfo* method);
// 0x3e801c0

void CustomLogic_CustomLogicOverflowEnum___ctor
               (CustomLogic_CustomLogicOverflowEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057033eb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_057033eb = '\x01';
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


// CustomLogic.CustomLogicOverflowEnum$$get_Visible
// il2cpp: int32_t CustomLogic_CustomLogicOverflowEnum__get_Visible (const MethodInfo* method);
// 0x3e80230

int32_t CustomLogic_CustomLogicOverflowEnum__get_Visible(MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicOverflowEnum$$get_Hidden
// il2cpp: int32_t CustomLogic_CustomLogicOverflowEnum__get_Hidden (const MethodInfo* method);
// 0x3e80240

int32_t CustomLogic_CustomLogicOverflowEnum__get_Hidden(MethodInfo *method)

{
  return 1;
}


// CustomLogic.CustomLogicOverflowEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicOverflowEnum__get_ClassName (CustomLogic_CustomLogicOverflowEnum_o* __this, const MethodInfo* method);
// 0x3e80250

System_String_o *
CustomLogic_CustomLogicOverflowEnum__get_ClassName
          (CustomLogic_CustomLogicOverflowEnum_o *__this,MethodInfo *method)

{
  if (DAT_057033ec == '\0') {
    il2cpp_init_method_metadata(&"OverflowEnum");
    DAT_057033ec = '\x01';
  }
  return "OverflowEnum";
}


// CustomLogic.CustomLogicOverflowEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicOverflowEnum__get_IsAbstract (CustomLogic_CustomLogicOverflowEnum_o* __this, const MethodInfo* method);
// 0x3e80280

bool_conflict
CustomLogic_CustomLogicOverflowEnum__get_IsAbstract
          (CustomLogic_CustomLogicOverflowEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicOverflowEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicOverflowEnum__get_IsStatic (CustomLogic_CustomLogicOverflowEnum_o* __this, const MethodInfo* method);
// 0x3e80290

bool_conflict
CustomLogic_CustomLogicOverflowEnum__get_IsStatic
          (CustomLogic_CustomLogicOverflowEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicOverflowEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicOverflowEnum__get_InheritBaseMembers (CustomLogic_CustomLogicOverflowEnum_o* __this, const MethodInfo* method);
// 0x3e802a0

bool_conflict
CustomLogic_CustomLogicOverflowEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicOverflowEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


