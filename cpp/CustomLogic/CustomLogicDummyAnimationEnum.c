// Type: CustomLogic.CustomLogicDummyAnimationEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicDummyAnimationEnum.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicDummyAnimationEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicDummyAnimationEnum_o* CustomLogic_CustomLogicDummyAnimationEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3e47dc0

CustomLogic_CustomLogicDummyAnimationEnum_o *
CustomLogic_CustomLogicDummyAnimationEnum_Factory__CreateInstance
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
  if (DAT_05702f06 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicDummyAnimationEnum);
    DAT_05702f06 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicDummyAnimationEnum);
      if (DAT_05702f01 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_05702f01 = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicDummyAnimationEnum_o *)__this;
    }
    il2cpp_glue_01f2f1a0(args);
    uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
    pSVar1 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicDummyAnimationEnum constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicDummyAnimationEnum_CreateInstance);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicDummyAnimationEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicDummyAnimationEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3e47ee0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicDummyAnimationEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  System_String_o *str2;
  undefined8 uVar3;
  System_Exception_o *__this;
  System_Func_T__object__o *pSVar4;
  CustomLogic_CLPropertyBinding_T__o *pCVar5;
  
  if (DAT_05702f07 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"Idle");
    il2cpp_init_method_metadata(&"Fall");
    il2cpp_init_method_metadata(&"Rise");
    DAT_05702f07 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Idle",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05702f08 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Idle_g____gette);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicDummyAnimationEnu);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicDummyAnimationEnum);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicDummyAnimationEnum__object);
      DAT_05702f08 = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicDummyAnimationEnum__object);
    System_Func<object__object>___ctor();
    pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicDummyAnimationEnum);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicDummyAnimationEnu);
    return (CustomLogic_ICLMemberBinding_o *)pCVar5;
  }
  bVar1 = System_String__op_Equality(name,"Fall",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05702f09 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Fall_g____gette);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicDummyAnimationEnu);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicDummyAnimationEnum);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicDummyAnimationEnum__object);
      DAT_05702f09 = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicDummyAnimationEnum__object);
    System_Func<object__object>___ctor();
    pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicDummyAnimationEnum);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicDummyAnimationEnu);
    return (CustomLogic_ICLMemberBinding_o *)pCVar5;
  }
  bVar1 = System_String__op_Equality(name,"Rise",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    pSVar2 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicDummyAnimationEnum not found");
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
  if (DAT_05702f0a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Rise_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicDummyAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicDummyAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicDummyAnimationEnum__object);
    DAT_05702f0a = '\x01';
  }
  pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicDummyAnimationEnum__object);
  System_Func<object__object>___ctor();
  pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicDummyAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicDummyAnimationEnu);
  return (CustomLogic_ICLMemberBinding_o *)pCVar5;
}


// CustomLogic.CustomLogicDummyAnimationEnum.Bindings$$__CreatePropertyBinding__Idle
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicDummyAnimationEnum__o* CustomLogic_CustomLogicDummyAnimationEnum_Bindings____CreatePropertyBinding__Idle (const MethodInfo* method);
// 0x3e48070

CustomLogic_CLPropertyBinding_CustomLogicDummyAnimationEnum__o *
CustomLogic_CustomLogicDummyAnimationEnum_Bindings____CreatePropertyBinding__Idle
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicDummyAnimationEnum__o *__this;
  
  if (DAT_05702f08 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Idle_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicDummyAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicDummyAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicDummyAnimationEnum__object);
    DAT_05702f08 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicDummyAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicDummyAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicDummyAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicDummyAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicDummyAnimationEnum.Bindings$$__CreatePropertyBinding__Fall
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicDummyAnimationEnum__o* CustomLogic_CustomLogicDummyAnimationEnum_Bindings____CreatePropertyBinding__Fall (const MethodInfo* method);
// 0x3e48110

CustomLogic_CLPropertyBinding_CustomLogicDummyAnimationEnum__o *
CustomLogic_CustomLogicDummyAnimationEnum_Bindings____CreatePropertyBinding__Fall
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicDummyAnimationEnum__o *__this;
  
  if (DAT_05702f09 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Fall_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicDummyAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicDummyAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicDummyAnimationEnum__object);
    DAT_05702f09 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicDummyAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicDummyAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicDummyAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicDummyAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicDummyAnimationEnum.Bindings$$__CreatePropertyBinding__Rise
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicDummyAnimationEnum__o* CustomLogic_CustomLogicDummyAnimationEnum_Bindings____CreatePropertyBinding__Rise (const MethodInfo* method);
// 0x3e481b0

CustomLogic_CLPropertyBinding_CustomLogicDummyAnimationEnum__o *
CustomLogic_CustomLogicDummyAnimationEnum_Bindings____CreatePropertyBinding__Rise
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicDummyAnimationEnum__o *__this;
  
  if (DAT_05702f0a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Rise_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicDummyAnimationEnu);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicDummyAnimationEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicDummyAnimationEnum__object);
    DAT_05702f0a = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicDummyAnimationEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicDummyAnimationEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicDummyAnimationEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicDummyAnimationEnu);
  return __this;
}


// CustomLogic.CustomLogicDummyAnimationEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicDummyAnimationEnum_Bindings___cctor (const MethodInfo* method);
// 0x3e48250

void CustomLogic_CustomLogicDummyAnimationEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_05702f0b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"Idle");
    il2cpp_init_method_metadata(&"Fall");
    il2cpp_init_method_metadata(&"Rise");
    DAT_05702f0b = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"Idle",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Fall",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Rise",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicDummyAnimationEnum.Bindings$$<__CreatePropertyBinding__Idle>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicDummyAnimationEnum_Bindings_____CreatePropertyBinding__Idle_g____getter_2_0 (CustomLogic_CustomLogicDummyAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e48360

Il2CppObject *
CustomLogic_CustomLogicDummyAnimationEnum_Bindings__<__CreatePropertyBinding__Idle>g____getter_2_0
          (CustomLogic_CustomLogicDummyAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_05702f02 == '\0') {
    il2cpp_init_method_metadata(&"Armature|dummy_idle");
    DAT_05702f02 = '\x01';
  }
  return "Armature|dummy_idle";
}


// CustomLogic.CustomLogicDummyAnimationEnum.Bindings$$<__CreatePropertyBinding__Fall>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicDummyAnimationEnum_Bindings_____CreatePropertyBinding__Fall_g____getter_3_0 (CustomLogic_CustomLogicDummyAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e48390

Il2CppObject *
CustomLogic_CustomLogicDummyAnimationEnum_Bindings__<__CreatePropertyBinding__Fall>g____getter_3_0
          (CustomLogic_CustomLogicDummyAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_05702f03 == '\0') {
    il2cpp_init_method_metadata(&"Armature|dummy_fall");
    DAT_05702f03 = '\x01';
  }
  return "Armature|dummy_fall";
}


// CustomLogic.CustomLogicDummyAnimationEnum.Bindings$$<__CreatePropertyBinding__Rise>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicDummyAnimationEnum_Bindings_____CreatePropertyBinding__Rise_g____getter_4_0 (CustomLogic_CustomLogicDummyAnimationEnum_o* __i, const MethodInfo* method);
// 0x3e483c0

Il2CppObject *
CustomLogic_CustomLogicDummyAnimationEnum_Bindings__<__CreatePropertyBinding__Rise>g____getter_4_0
          (CustomLogic_CustomLogicDummyAnimationEnum_o *__i,MethodInfo *method)

{
  if (DAT_05702f04 == '\0') {
    il2cpp_init_method_metadata(&"Armature|dummy_rise");
    DAT_05702f04 = '\x01';
  }
  return "Armature|dummy_rise";
}


// CustomLogic.CustomLogicDummyAnimationEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicDummyAnimationEnum___ctor (CustomLogic_CustomLogicDummyAnimationEnum_o* __this, const MethodInfo* method);
// 0x3e47c60

void CustomLogic_CustomLogicDummyAnimationEnum___ctor
               (CustomLogic_CustomLogicDummyAnimationEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702f01 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_05702f01 = '\x01';
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


// CustomLogic.CustomLogicDummyAnimationEnum$$get_Idle
// il2cpp: System_String_o* CustomLogic_CustomLogicDummyAnimationEnum__get_Idle (const MethodInfo* method);
// 0x3e47cd0

System_String_o * CustomLogic_CustomLogicDummyAnimationEnum__get_Idle(MethodInfo *method)

{
  if (DAT_05702f02 == '\0') {
    il2cpp_init_method_metadata(&"Armature|dummy_idle");
    DAT_05702f02 = '\x01';
  }
  return "Armature|dummy_idle";
}


// CustomLogic.CustomLogicDummyAnimationEnum$$get_Fall
// il2cpp: System_String_o* CustomLogic_CustomLogicDummyAnimationEnum__get_Fall (const MethodInfo* method);
// 0x3e47d00

System_String_o * CustomLogic_CustomLogicDummyAnimationEnum__get_Fall(MethodInfo *method)

{
  if (DAT_05702f03 == '\0') {
    il2cpp_init_method_metadata(&"Armature|dummy_fall");
    DAT_05702f03 = '\x01';
  }
  return "Armature|dummy_fall";
}


// CustomLogic.CustomLogicDummyAnimationEnum$$get_Rise
// il2cpp: System_String_o* CustomLogic_CustomLogicDummyAnimationEnum__get_Rise (const MethodInfo* method);
// 0x3e47d30

System_String_o * CustomLogic_CustomLogicDummyAnimationEnum__get_Rise(MethodInfo *method)

{
  if (DAT_05702f04 == '\0') {
    il2cpp_init_method_metadata(&"Armature|dummy_rise");
    DAT_05702f04 = '\x01';
  }
  return "Armature|dummy_rise";
}


// CustomLogic.CustomLogicDummyAnimationEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicDummyAnimationEnum__get_ClassName (CustomLogic_CustomLogicDummyAnimationEnum_o* __this, const MethodInfo* method);
// 0x3e47d60

System_String_o *
CustomLogic_CustomLogicDummyAnimationEnum__get_ClassName
          (CustomLogic_CustomLogicDummyAnimationEnum_o *__this,MethodInfo *method)

{
  if (DAT_05702f05 == '\0') {
    il2cpp_init_method_metadata(&"DummyAnimationEnum");
    DAT_05702f05 = '\x01';
  }
  return "DummyAnimationEnum";
}


// CustomLogic.CustomLogicDummyAnimationEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicDummyAnimationEnum__get_IsAbstract (CustomLogic_CustomLogicDummyAnimationEnum_o* __this, const MethodInfo* method);
// 0x3e47d90

bool_conflict
CustomLogic_CustomLogicDummyAnimationEnum__get_IsAbstract
          (CustomLogic_CustomLogicDummyAnimationEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicDummyAnimationEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicDummyAnimationEnum__get_IsStatic (CustomLogic_CustomLogicDummyAnimationEnum_o* __this, const MethodInfo* method);
// 0x3e47da0

bool_conflict
CustomLogic_CustomLogicDummyAnimationEnum__get_IsStatic
          (CustomLogic_CustomLogicDummyAnimationEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicDummyAnimationEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicDummyAnimationEnum__get_InheritBaseMembers (CustomLogic_CustomLogicDummyAnimationEnum_o* __this, const MethodInfo* method);
// 0x3e47db0

bool_conflict
CustomLogic_CustomLogicDummyAnimationEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicDummyAnimationEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


