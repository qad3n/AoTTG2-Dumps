// Type: CustomLogic.CustomLogicWeaponEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicWeaponEnum.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicWeaponEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicWeaponEnum_o* CustomLogic_CustomLogicWeaponEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3eaa7f0

CustomLogic_CustomLogicWeaponEnum_o *
CustomLogic_CustomLogicWeaponEnum_Factory__CreateInstance
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
  if (DAT_057037cd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicWeaponEnum);
    DAT_057037cd = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicWeaponEnum);
      if (DAT_057037c7 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_057037c7 = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicWeaponEnum_o *)__this;
    }
    il2cpp_glue_01f2f1a0(args);
    uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
    pSVar1 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicWeaponEnum constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicWeaponEnum_CreateInstance);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWeaponEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicWeaponEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3eaa910

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicWeaponEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  System_String_o *str2;
  undefined8 uVar3;
  System_Exception_o *__this;
  System_Func_T__object__o *pSVar4;
  CustomLogic_CLPropertyBinding_T__o *pCVar5;
  
  if (DAT_057037ce == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"Blade");
    il2cpp_init_method_metadata(&"APG");
    il2cpp_init_method_metadata(&"AHSS");
    il2cpp_init_method_metadata(&"Thunderspear");
    DAT_057037ce = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Blade",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_057037cf == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Blade_g____gett);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicWeaponEnum);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicWeaponEnum);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicWeaponEnum__object);
      DAT_057037cf = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicWeaponEnum__object);
    System_Func<object__object>___ctor();
    pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicWeaponEnum);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicWeaponEnum);
    return (CustomLogic_ICLMemberBinding_o *)pCVar5;
  }
  bVar1 = System_String__op_Equality(name,"AHSS",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_057037d0 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AHSS_g____gette);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicWeaponEnum);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicWeaponEnum);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicWeaponEnum__object);
      DAT_057037d0 = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicWeaponEnum__object);
    System_Func<object__object>___ctor();
    pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicWeaponEnum);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicWeaponEnum);
    return (CustomLogic_ICLMemberBinding_o *)pCVar5;
  }
  bVar1 = System_String__op_Equality(name,"APG",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality(name,"Thunderspear",(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      pSVar2 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
      str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicWeaponEnum not found");
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
    if (DAT_057037d2 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Thunderspear_g);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicWeaponEnum);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicWeaponEnum);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicWeaponEnum__object);
      DAT_057037d2 = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicWeaponEnum__object);
    System_Func<object__object>___ctor();
    pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicWeaponEnum);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicWeaponEnum);
    return (CustomLogic_ICLMemberBinding_o *)pCVar5;
  }
  if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (DAT_057037d1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__APG_g____getter);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicWeaponEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicWeaponEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicWeaponEnum__object);
    DAT_057037d1 = '\x01';
  }
  pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicWeaponEnum__object);
  System_Func<object__object>___ctor();
  pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicWeaponEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicWeaponEnum);
  return (CustomLogic_ICLMemberBinding_o *)pCVar5;
}


// CustomLogic.CustomLogicWeaponEnum.Bindings$$__CreatePropertyBinding__Blade
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum__o* CustomLogic_CustomLogicWeaponEnum_Bindings____CreatePropertyBinding__Blade (const MethodInfo* method);
// 0x3eaaaf0

CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum__o *
CustomLogic_CustomLogicWeaponEnum_Bindings____CreatePropertyBinding__Blade(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum__o *__this;
  
  if (DAT_057037cf == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Blade_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicWeaponEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicWeaponEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicWeaponEnum__object);
    DAT_057037cf = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicWeaponEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicWeaponEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicWeaponEnum);
  return __this;
}


// CustomLogic.CustomLogicWeaponEnum.Bindings$$__CreatePropertyBinding__AHSS
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum__o* CustomLogic_CustomLogicWeaponEnum_Bindings____CreatePropertyBinding__AHSS (const MethodInfo* method);
// 0x3eaab90

CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum__o *
CustomLogic_CustomLogicWeaponEnum_Bindings____CreatePropertyBinding__AHSS(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum__o *__this;
  
  if (DAT_057037d0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AHSS_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicWeaponEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicWeaponEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicWeaponEnum__object);
    DAT_057037d0 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicWeaponEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicWeaponEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicWeaponEnum);
  return __this;
}


// CustomLogic.CustomLogicWeaponEnum.Bindings$$__CreatePropertyBinding__APG
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum__o* CustomLogic_CustomLogicWeaponEnum_Bindings____CreatePropertyBinding__APG (const MethodInfo* method);
// 0x3eaac30

CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum__o *
CustomLogic_CustomLogicWeaponEnum_Bindings____CreatePropertyBinding__APG(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum__o *__this;
  
  if (DAT_057037d1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__APG_g____getter);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicWeaponEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicWeaponEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicWeaponEnum__object);
    DAT_057037d1 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicWeaponEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicWeaponEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicWeaponEnum);
  return __this;
}


// CustomLogic.CustomLogicWeaponEnum.Bindings$$__CreatePropertyBinding__Thunderspear
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum__o* CustomLogic_CustomLogicWeaponEnum_Bindings____CreatePropertyBinding__Thunderspear (const MethodInfo* method);
// 0x3eaacd0

CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum__o *
CustomLogic_CustomLogicWeaponEnum_Bindings____CreatePropertyBinding__Thunderspear
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum__o *__this;
  
  if (DAT_057037d2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Thunderspear_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicWeaponEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicWeaponEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicWeaponEnum__object);
    DAT_057037d2 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicWeaponEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicWeaponEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicWeaponEnum);
  return __this;
}


// CustomLogic.CustomLogicWeaponEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicWeaponEnum_Bindings___cctor (const MethodInfo* method);
// 0x3eaad70

void CustomLogic_CustomLogicWeaponEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_057037d3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"Blade");
    il2cpp_init_method_metadata(&"APG");
    il2cpp_init_method_metadata(&"AHSS");
    il2cpp_init_method_metadata(&"Thunderspear");
    DAT_057037d3 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"Blade",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AHSS",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"APG",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Thunderspear",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWeaponEnum.Bindings$$<__CreatePropertyBinding__Blade>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWeaponEnum_Bindings_____CreatePropertyBinding__Blade_g____getter_2_0 (CustomLogic_CustomLogicWeaponEnum_o* __i, const MethodInfo* method);
// 0x3eaaea0

Il2CppObject *
CustomLogic_CustomLogicWeaponEnum_Bindings__<__CreatePropertyBinding__Blade>g____getter_2_0
          (CustomLogic_CustomLogicWeaponEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702cbe == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanLoadout);
    DAT_05702cbe = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanLoadout + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanLoadout + 0xe4);
  }
  if (iVar1 != 0) {
    return (Il2CppObject *)**(undefined8 **)(TypeInfo_HumanLoadout + 0xb8);
  }
  il2cpp_init_class();
  return (Il2CppObject *)**(undefined8 **)(TypeInfo_HumanLoadout + 0xb8);
}


// CustomLogic.CustomLogicWeaponEnum.Bindings$$<__CreatePropertyBinding__AHSS>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWeaponEnum_Bindings_____CreatePropertyBinding__AHSS_g____getter_3_0 (CustomLogic_CustomLogicWeaponEnum_o* __i, const MethodInfo* method);
// 0x3eaaf10

Il2CppObject *
CustomLogic_CustomLogicWeaponEnum_Bindings__<__CreatePropertyBinding__AHSS>g____getter_3_0
          (CustomLogic_CustomLogicWeaponEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703871 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanLoadout);
    DAT_05703871 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanLoadout + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanLoadout + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 8);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 8);
}


// CustomLogic.CustomLogicWeaponEnum.Bindings$$<__CreatePropertyBinding__APG>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWeaponEnum_Bindings_____CreatePropertyBinding__APG_g____getter_4_0 (CustomLogic_CustomLogicWeaponEnum_o* __i, const MethodInfo* method);
// 0x3eaaf80

Il2CppObject *
CustomLogic_CustomLogicWeaponEnum_Bindings__<__CreatePropertyBinding__APG>g____getter_4_0
          (CustomLogic_CustomLogicWeaponEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703872 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanLoadout);
    DAT_05703872 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanLoadout + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanLoadout + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 0x18);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 0x18);
}


// CustomLogic.CustomLogicWeaponEnum.Bindings$$<__CreatePropertyBinding__Thunderspear>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWeaponEnum_Bindings_____CreatePropertyBinding__Thunderspear_g____getter_5_0 (CustomLogic_CustomLogicWeaponEnum_o* __i, const MethodInfo* method);
// 0x3eaaff0

Il2CppObject *
CustomLogic_CustomLogicWeaponEnum_Bindings__<__CreatePropertyBinding__Thunderspear>g____getter_5_0
          (CustomLogic_CustomLogicWeaponEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702cbf == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanLoadout);
    DAT_05702cbf = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanLoadout + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanLoadout + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 0x10);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicWeaponEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicWeaponEnum___ctor (CustomLogic_CustomLogicWeaponEnum_o* __this, const MethodInfo* method);
// 0x3eaa560

void CustomLogic_CustomLogicWeaponEnum___ctor
               (CustomLogic_CustomLogicWeaponEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057037c7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_057037c7 = '\x01';
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


// CustomLogic.CustomLogicWeaponEnum$$get_Blade
// il2cpp: System_String_o* CustomLogic_CustomLogicWeaponEnum__get_Blade (const MethodInfo* method);
// 0x3eaa5d0

System_String_o * CustomLogic_CustomLogicWeaponEnum__get_Blade(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057037c8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanLoadout);
    DAT_057037c8 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanLoadout + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanLoadout + 0xe4);
  }
  if (iVar1 != 0) {
    return (System_String_o *)**(undefined8 **)(TypeInfo_HumanLoadout + 0xb8);
  }
  il2cpp_init_class();
  return (System_String_o *)**(undefined8 **)(TypeInfo_HumanLoadout + 0xb8);
}


// CustomLogic.CustomLogicWeaponEnum$$get_AHSS
// il2cpp: System_String_o* CustomLogic_CustomLogicWeaponEnum__get_AHSS (const MethodInfo* method);
// 0x3eaa640

System_String_o * CustomLogic_CustomLogicWeaponEnum__get_AHSS(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057037c9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanLoadout);
    DAT_057037c9 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanLoadout + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanLoadout + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 8);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 8);
}


// CustomLogic.CustomLogicWeaponEnum$$get_APG
// il2cpp: System_String_o* CustomLogic_CustomLogicWeaponEnum__get_APG (const MethodInfo* method);
// 0x3eaa6b0

System_String_o * CustomLogic_CustomLogicWeaponEnum__get_APG(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057037ca == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanLoadout);
    DAT_057037ca = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanLoadout + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanLoadout + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 0x18);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 0x18);
}


// CustomLogic.CustomLogicWeaponEnum$$get_Thunderspear
// il2cpp: System_String_o* CustomLogic_CustomLogicWeaponEnum__get_Thunderspear (const MethodInfo* method);
// 0x3eaa720

System_String_o * CustomLogic_CustomLogicWeaponEnum__get_Thunderspear(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057037cb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanLoadout);
    DAT_057037cb = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanLoadout + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanLoadout + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 0x10);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicWeaponEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicWeaponEnum__get_ClassName (CustomLogic_CustomLogicWeaponEnum_o* __this, const MethodInfo* method);
// 0x3eaa790

System_String_o *
CustomLogic_CustomLogicWeaponEnum__get_ClassName
          (CustomLogic_CustomLogicWeaponEnum_o *__this,MethodInfo *method)

{
  if (DAT_057037cc == '\0') {
    il2cpp_init_method_metadata(&"WeaponEnum");
    DAT_057037cc = '\x01';
  }
  return "WeaponEnum";
}


// CustomLogic.CustomLogicWeaponEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicWeaponEnum__get_IsAbstract (CustomLogic_CustomLogicWeaponEnum_o* __this, const MethodInfo* method);
// 0x3eaa7c0

bool_conflict
CustomLogic_CustomLogicWeaponEnum__get_IsAbstract
          (CustomLogic_CustomLogicWeaponEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicWeaponEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicWeaponEnum__get_IsStatic (CustomLogic_CustomLogicWeaponEnum_o* __this, const MethodInfo* method);
// 0x3eaa7d0

bool_conflict
CustomLogic_CustomLogicWeaponEnum__get_IsStatic
          (CustomLogic_CustomLogicWeaponEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicWeaponEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicWeaponEnum__get_InheritBaseMembers (CustomLogic_CustomLogicWeaponEnum_o* __this, const MethodInfo* method);
// 0x3eaa7e0

bool_conflict
CustomLogic_CustomLogicWeaponEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicWeaponEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


