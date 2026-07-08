// Type: CustomLogic.CustomLogicScrollElasticityEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicScrollElasticityEnum.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicScrollElasticityEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicScrollElasticityEnum_o* CustomLogic_CustomLogicScrollElasticityEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3e90190

CustomLogic_CustomLogicScrollElasticityEnum_o *
CustomLogic_CustomLogicScrollElasticityEnum_Factory__CreateInstance
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
  if (DAT_057035c0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicScrollElasticityEnum);
    DAT_057035c0 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicScrollElasticityEnum);
      if (DAT_057035be == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_057035be = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicScrollElasticityEnum_o *)__this;
    }
    il2cpp_glue_01f2f1a0(args);
    uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
    pSVar1 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicScrollElasticityEnum constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicScrollElasticityEnum_CreateInstance);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicScrollElasticityEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicScrollElasticityEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3e902b0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicScrollElasticityEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  System_String_o *str2;
  undefined8 uVar3;
  System_Exception_o *__this;
  System_Func_T__object__o *pSVar4;
  CustomLogic_CLPropertyBinding_T__o *pCVar5;
  
  if (DAT_057035c1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"Clamped");
    il2cpp_init_method_metadata(&"Unrestricted");
    il2cpp_init_method_metadata(&"Elastic");
    DAT_057035c1 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Clamped",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_057035c2 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Clamped_g____ge);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicScrollElasticityE);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicScrollElasticityEnu);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicScrollElasticityEnum__object);
      DAT_057035c2 = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicScrollElasticityEnum__object);
    System_Func<object__object>___ctor();
    pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicScrollElasticityEnu);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicScrollElasticityE);
    return (CustomLogic_ICLMemberBinding_o *)pCVar5;
  }
  bVar1 = System_String__op_Equality(name,"Elastic",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_057035c3 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Elastic_g____ge);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicScrollElasticityE);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicScrollElasticityEnu);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicScrollElasticityEnum__object);
      DAT_057035c3 = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicScrollElasticityEnum__object);
    System_Func<object__object>___ctor();
    pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicScrollElasticityEnu);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicScrollElasticityE);
    return (CustomLogic_ICLMemberBinding_o *)pCVar5;
  }
  bVar1 = System_String__op_Equality(name,"Unrestricted",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    pSVar2 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicScrollElasticityEnum not found");
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
  if (DAT_057035c4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Unrestricted_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicScrollElasticityE);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicScrollElasticityEnu);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicScrollElasticityEnum__object);
    DAT_057035c4 = '\x01';
  }
  pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicScrollElasticityEnum__object);
  System_Func<object__object>___ctor();
  pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicScrollElasticityEnu);
  CustomLogic_CLPropertyBinding<object>___ctor
            (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicScrollElasticityE);
  return (CustomLogic_ICLMemberBinding_o *)pCVar5;
}


// CustomLogic.CustomLogicScrollElasticityEnum.Bindings$$__CreatePropertyBinding__Clamped
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicScrollElasticityEnum__o* CustomLogic_CustomLogicScrollElasticityEnum_Bindings____CreatePropertyBinding__Clamped (const MethodInfo* method);
// 0x3e90440

CustomLogic_CLPropertyBinding_CustomLogicScrollElasticityEnum__o *
CustomLogic_CustomLogicScrollElasticityEnum_Bindings____CreatePropertyBinding__Clamped
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicScrollElasticityEnum__o *__this;
  
  if (DAT_057035c2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Clamped_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicScrollElasticityE);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicScrollElasticityEnu);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicScrollElasticityEnum__object);
    DAT_057035c2 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicScrollElasticityEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicScrollElasticityEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicScrollElasticityEnu);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicScrollElasticityE);
  return __this;
}


// CustomLogic.CustomLogicScrollElasticityEnum.Bindings$$__CreatePropertyBinding__Elastic
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicScrollElasticityEnum__o* CustomLogic_CustomLogicScrollElasticityEnum_Bindings____CreatePropertyBinding__Elastic (const MethodInfo* method);
// 0x3e904e0

CustomLogic_CLPropertyBinding_CustomLogicScrollElasticityEnum__o *
CustomLogic_CustomLogicScrollElasticityEnum_Bindings____CreatePropertyBinding__Elastic
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicScrollElasticityEnum__o *__this;
  
  if (DAT_057035c3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Elastic_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicScrollElasticityE);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicScrollElasticityEnu);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicScrollElasticityEnum__object);
    DAT_057035c3 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicScrollElasticityEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicScrollElasticityEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicScrollElasticityEnu);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicScrollElasticityE);
  return __this;
}


// CustomLogic.CustomLogicScrollElasticityEnum.Bindings$$__CreatePropertyBinding__Unrestricted
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicScrollElasticityEnum__o* CustomLogic_CustomLogicScrollElasticityEnum_Bindings____CreatePropertyBinding__Unrestricted (const MethodInfo* method);
// 0x3e90580

CustomLogic_CLPropertyBinding_CustomLogicScrollElasticityEnum__o *
CustomLogic_CustomLogicScrollElasticityEnum_Bindings____CreatePropertyBinding__Unrestricted
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicScrollElasticityEnum__o *__this;
  
  if (DAT_057035c4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Unrestricted_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicScrollElasticityE);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicScrollElasticityEnu);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicScrollElasticityEnum__object);
    DAT_057035c4 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicScrollElasticityEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicScrollElasticityEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicScrollElasticityEnu);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicScrollElasticityE);
  return __this;
}


// CustomLogic.CustomLogicScrollElasticityEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicScrollElasticityEnum_Bindings___cctor (const MethodInfo* method);
// 0x3e90620

void CustomLogic_CustomLogicScrollElasticityEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_057035c5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"Clamped");
    il2cpp_init_method_metadata(&"Unrestricted");
    il2cpp_init_method_metadata(&"Elastic");
    DAT_057035c5 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"Clamped",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Elastic",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Unrestricted",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicScrollElasticityEnum.Bindings$$<__CreatePropertyBinding__Clamped>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicScrollElasticityEnum_Bindings_____CreatePropertyBinding__Clamped_g____getter_2_0 (CustomLogic_CustomLogicScrollElasticityEnum_o* __i, const MethodInfo* method);
// 0x3e90730

Il2CppObject *
CustomLogic_CustomLogicScrollElasticityEnum_Bindings__<__CreatePropertyBinding__Clamped>g____getter_2_0
          (CustomLogic_CustomLogicScrollElasticityEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicScrollElasticityEnum.Bindings$$<__CreatePropertyBinding__Elastic>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicScrollElasticityEnum_Bindings_____CreatePropertyBinding__Elastic_g____getter_3_0 (CustomLogic_CustomLogicScrollElasticityEnum_o* __i, const MethodInfo* method);
// 0x3e90750

Il2CppObject *
CustomLogic_CustomLogicScrollElasticityEnum_Bindings__<__CreatePropertyBinding__Elastic>g____getter_3_0
          (CustomLogic_CustomLogicScrollElasticityEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicScrollElasticityEnum.Bindings$$<__CreatePropertyBinding__Unrestricted>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicScrollElasticityEnum_Bindings_____CreatePropertyBinding__Unrestricted_g____getter_4_0 (CustomLogic_CustomLogicScrollElasticityEnum_o* __i, const MethodInfo* method);
// 0x3e90770

Il2CppObject *
CustomLogic_CustomLogicScrollElasticityEnum_Bindings__<__CreatePropertyBinding__Unrestricted>g____getter_4_0
          (CustomLogic_CustomLogicScrollElasticityEnum_o *__i,MethodInfo *method)

{
  uint in_EAX;
  Il2CppObject *pIVar1;
  undefined8 uStack_8;
  
  uStack_8 = (ulong)in_EAX;
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,(long)&uStack_8 + 4);
  return pIVar1;
}


// CustomLogic.CustomLogicScrollElasticityEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicScrollElasticityEnum___ctor (CustomLogic_CustomLogicScrollElasticityEnum_o* __this, const MethodInfo* method);
// 0x3e90090

void CustomLogic_CustomLogicScrollElasticityEnum___ctor
               (CustomLogic_CustomLogicScrollElasticityEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057035be == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_057035be = '\x01';
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


// CustomLogic.CustomLogicScrollElasticityEnum$$get_Clamped
// il2cpp: int32_t CustomLogic_CustomLogicScrollElasticityEnum__get_Clamped (const MethodInfo* method);
// 0x3e90100

int32_t CustomLogic_CustomLogicScrollElasticityEnum__get_Clamped(MethodInfo *method)

{
  return 2;
}


// CustomLogic.CustomLogicScrollElasticityEnum$$get_Elastic
// il2cpp: int32_t CustomLogic_CustomLogicScrollElasticityEnum__get_Elastic (const MethodInfo* method);
// 0x3e90110

int32_t CustomLogic_CustomLogicScrollElasticityEnum__get_Elastic(MethodInfo *method)

{
  return 1;
}


// CustomLogic.CustomLogicScrollElasticityEnum$$get_Unrestricted
// il2cpp: int32_t CustomLogic_CustomLogicScrollElasticityEnum__get_Unrestricted (const MethodInfo* method);
// 0x3e90120

int32_t CustomLogic_CustomLogicScrollElasticityEnum__get_Unrestricted(MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicScrollElasticityEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicScrollElasticityEnum__get_ClassName (CustomLogic_CustomLogicScrollElasticityEnum_o* __this, const MethodInfo* method);
// 0x3e90130

System_String_o *
CustomLogic_CustomLogicScrollElasticityEnum__get_ClassName
          (CustomLogic_CustomLogicScrollElasticityEnum_o *__this,MethodInfo *method)

{
  if (DAT_057035bf == '\0') {
    il2cpp_init_method_metadata(&"ScrollElasticityEnum");
    DAT_057035bf = '\x01';
  }
  return "ScrollElasticityEnum";
}


// CustomLogic.CustomLogicScrollElasticityEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicScrollElasticityEnum__get_IsAbstract (CustomLogic_CustomLogicScrollElasticityEnum_o* __this, const MethodInfo* method);
// 0x3e90160

bool_conflict
CustomLogic_CustomLogicScrollElasticityEnum__get_IsAbstract
          (CustomLogic_CustomLogicScrollElasticityEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicScrollElasticityEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicScrollElasticityEnum__get_IsStatic (CustomLogic_CustomLogicScrollElasticityEnum_o* __this, const MethodInfo* method);
// 0x3e90170

bool_conflict
CustomLogic_CustomLogicScrollElasticityEnum__get_IsStatic
          (CustomLogic_CustomLogicScrollElasticityEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicScrollElasticityEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicScrollElasticityEnum__get_InheritBaseMembers (CustomLogic_CustomLogicScrollElasticityEnum_o* __this, const MethodInfo* method);
// 0x3e90180

bool_conflict
CustomLogic_CustomLogicScrollElasticityEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicScrollElasticityEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


