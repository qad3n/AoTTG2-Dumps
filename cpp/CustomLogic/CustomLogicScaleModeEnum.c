// Type: CustomLogic.CustomLogicScaleModeEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicScaleModeEnum.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicScaleModeEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicScaleModeEnum_o* CustomLogic_CustomLogicScaleModeEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3e8fa90

CustomLogic_CustomLogicScaleModeEnum_o *
CustomLogic_CustomLogicScaleModeEnum_Factory__CreateInstance
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
  if (DAT_057035b8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicScaleModeEnum);
    DAT_057035b8 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicScaleModeEnum);
      if (DAT_057035b6 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_057035b6 = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicScaleModeEnum_o *)__this;
    }
    il2cpp_glue_01f2f1a0(args);
    uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
    pSVar1 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicScaleModeEnum constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicScaleModeEnum_CreateInstance);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicScaleModeEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicScaleModeEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3e8fbb0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicScaleModeEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  System_String_o *str2;
  undefined8 uVar3;
  System_Exception_o *__this;
  System_Func_T__object__o *pSVar4;
  CustomLogic_CLPropertyBinding_T__o *pCVar5;
  
  if (DAT_057035b9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"StretchToFill");
    il2cpp_init_method_metadata(&"ScaleToFit");
    il2cpp_init_method_metadata(&"ScaleAndCrop");
    DAT_057035b9 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"StretchToFill",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_057035ba == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__StretchToFill_g);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicScaleModeEnum);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicScaleModeEnum);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicScaleModeEnum__object);
      DAT_057035ba = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicScaleModeEnum__object);
    System_Func<object__object>___ctor();
    pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicScaleModeEnum);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicScaleModeEnum);
    return (CustomLogic_ICLMemberBinding_o *)pCVar5;
  }
  bVar1 = System_String__op_Equality(name,"ScaleAndCrop",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_057035bb == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ScaleAndCrop_g);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicScaleModeEnum);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicScaleModeEnum);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicScaleModeEnum__object);
      DAT_057035bb = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicScaleModeEnum__object);
    System_Func<object__object>___ctor();
    pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicScaleModeEnum);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicScaleModeEnum);
    return (CustomLogic_ICLMemberBinding_o *)pCVar5;
  }
  bVar1 = System_String__op_Equality(name,"ScaleToFit",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    pSVar2 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicScaleModeEnum not found");
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
  if (DAT_057035bc == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ScaleToFit_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicScaleModeEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicScaleModeEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicScaleModeEnum__object);
    DAT_057035bc = '\x01';
  }
  pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicScaleModeEnum__object);
  System_Func<object__object>___ctor();
  pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicScaleModeEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicScaleModeEnum);
  return (CustomLogic_ICLMemberBinding_o *)pCVar5;
}


// CustomLogic.CustomLogicScaleModeEnum.Bindings$$__CreatePropertyBinding__StretchToFill
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicScaleModeEnum__o* CustomLogic_CustomLogicScaleModeEnum_Bindings____CreatePropertyBinding__StretchToFill (const MethodInfo* method);
// 0x3e8fd40

CustomLogic_CLPropertyBinding_CustomLogicScaleModeEnum__o *
CustomLogic_CustomLogicScaleModeEnum_Bindings____CreatePropertyBinding__StretchToFill
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicScaleModeEnum__o *__this;
  
  if (DAT_057035ba == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__StretchToFill_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicScaleModeEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicScaleModeEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicScaleModeEnum__object);
    DAT_057035ba = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicScaleModeEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicScaleModeEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicScaleModeEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicScaleModeEnum);
  return __this;
}


// CustomLogic.CustomLogicScaleModeEnum.Bindings$$__CreatePropertyBinding__ScaleAndCrop
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicScaleModeEnum__o* CustomLogic_CustomLogicScaleModeEnum_Bindings____CreatePropertyBinding__ScaleAndCrop (const MethodInfo* method);
// 0x3e8fde0

CustomLogic_CLPropertyBinding_CustomLogicScaleModeEnum__o *
CustomLogic_CustomLogicScaleModeEnum_Bindings____CreatePropertyBinding__ScaleAndCrop
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicScaleModeEnum__o *__this;
  
  if (DAT_057035bb == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ScaleAndCrop_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicScaleModeEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicScaleModeEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicScaleModeEnum__object);
    DAT_057035bb = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicScaleModeEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicScaleModeEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicScaleModeEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicScaleModeEnum);
  return __this;
}


// CustomLogic.CustomLogicScaleModeEnum.Bindings$$__CreatePropertyBinding__ScaleToFit
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicScaleModeEnum__o* CustomLogic_CustomLogicScaleModeEnum_Bindings____CreatePropertyBinding__ScaleToFit (const MethodInfo* method);
// 0x3e8fe80

CustomLogic_CLPropertyBinding_CustomLogicScaleModeEnum__o *
CustomLogic_CustomLogicScaleModeEnum_Bindings____CreatePropertyBinding__ScaleToFit
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicScaleModeEnum__o *__this;
  
  if (DAT_057035bc == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ScaleToFit_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicScaleModeEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicScaleModeEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicScaleModeEnum__object);
    DAT_057035bc = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicScaleModeEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicScaleModeEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicScaleModeEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicScaleModeEnum);
  return __this;
}


// CustomLogic.CustomLogicScaleModeEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicScaleModeEnum_Bindings___cctor (const MethodInfo* method);
// 0x3e8ff20

void CustomLogic_CustomLogicScaleModeEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_057035bd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"StretchToFill");
    il2cpp_init_method_metadata(&"ScaleToFit");
    il2cpp_init_method_metadata(&"ScaleAndCrop");
    DAT_057035bd = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"StretchToFill",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ScaleAndCrop",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ScaleToFit",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicScaleModeEnum.Bindings$$<__CreatePropertyBinding__StretchToFill>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicScaleModeEnum_Bindings_____CreatePropertyBinding__StretchToFill_g____getter_2_0 (CustomLogic_CustomLogicScaleModeEnum_o* __i, const MethodInfo* method);
// 0x3e90030

Il2CppObject *
CustomLogic_CustomLogicScaleModeEnum_Bindings__<__CreatePropertyBinding__StretchToFill>g____getter_2_0
          (CustomLogic_CustomLogicScaleModeEnum_o *__i,MethodInfo *method)

{
  uint in_EAX;
  Il2CppObject *pIVar1;
  undefined8 uStack_8;
  
  uStack_8 = (ulong)in_EAX;
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,(long)&uStack_8 + 4);
  return pIVar1;
}


// CustomLogic.CustomLogicScaleModeEnum.Bindings$$<__CreatePropertyBinding__ScaleAndCrop>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicScaleModeEnum_Bindings_____CreatePropertyBinding__ScaleAndCrop_g____getter_3_0 (CustomLogic_CustomLogicScaleModeEnum_o* __i, const MethodInfo* method);
// 0x3e90050

Il2CppObject *
CustomLogic_CustomLogicScaleModeEnum_Bindings__<__CreatePropertyBinding__ScaleAndCrop>g____getter_3_0
          (CustomLogic_CustomLogicScaleModeEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicScaleModeEnum.Bindings$$<__CreatePropertyBinding__ScaleToFit>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicScaleModeEnum_Bindings_____CreatePropertyBinding__ScaleToFit_g____getter_4_0 (CustomLogic_CustomLogicScaleModeEnum_o* __i, const MethodInfo* method);
// 0x3e90070

Il2CppObject *
CustomLogic_CustomLogicScaleModeEnum_Bindings__<__CreatePropertyBinding__ScaleToFit>g____getter_4_0
          (CustomLogic_CustomLogicScaleModeEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicScaleModeEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicScaleModeEnum___ctor (CustomLogic_CustomLogicScaleModeEnum_o* __this, const MethodInfo* method);
// 0x3e8f990

void CustomLogic_CustomLogicScaleModeEnum___ctor
               (CustomLogic_CustomLogicScaleModeEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057035b6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_057035b6 = '\x01';
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


// CustomLogic.CustomLogicScaleModeEnum$$get_StretchToFill
// il2cpp: int32_t CustomLogic_CustomLogicScaleModeEnum__get_StretchToFill (const MethodInfo* method);
// 0x3e8fa00

int32_t CustomLogic_CustomLogicScaleModeEnum__get_StretchToFill(MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicScaleModeEnum$$get_ScaleAndCrop
// il2cpp: int32_t CustomLogic_CustomLogicScaleModeEnum__get_ScaleAndCrop (const MethodInfo* method);
// 0x3e8fa10

int32_t CustomLogic_CustomLogicScaleModeEnum__get_ScaleAndCrop(MethodInfo *method)

{
  return 1;
}


// CustomLogic.CustomLogicScaleModeEnum$$get_ScaleToFit
// il2cpp: int32_t CustomLogic_CustomLogicScaleModeEnum__get_ScaleToFit (const MethodInfo* method);
// 0x3e8fa20

int32_t CustomLogic_CustomLogicScaleModeEnum__get_ScaleToFit(MethodInfo *method)

{
  return 2;
}


// CustomLogic.CustomLogicScaleModeEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicScaleModeEnum__get_ClassName (CustomLogic_CustomLogicScaleModeEnum_o* __this, const MethodInfo* method);
// 0x3e8fa30

System_String_o *
CustomLogic_CustomLogicScaleModeEnum__get_ClassName
          (CustomLogic_CustomLogicScaleModeEnum_o *__this,MethodInfo *method)

{
  if (DAT_057035b7 == '\0') {
    il2cpp_init_method_metadata(&"ScaleModeEnum");
    DAT_057035b7 = '\x01';
  }
  return "ScaleModeEnum";
}


// CustomLogic.CustomLogicScaleModeEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicScaleModeEnum__get_IsAbstract (CustomLogic_CustomLogicScaleModeEnum_o* __this, const MethodInfo* method);
// 0x3e8fa60

bool_conflict
CustomLogic_CustomLogicScaleModeEnum__get_IsAbstract
          (CustomLogic_CustomLogicScaleModeEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicScaleModeEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicScaleModeEnum__get_IsStatic (CustomLogic_CustomLogicScaleModeEnum_o* __this, const MethodInfo* method);
// 0x3e8fa70

bool_conflict
CustomLogic_CustomLogicScaleModeEnum__get_IsStatic
          (CustomLogic_CustomLogicScaleModeEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicScaleModeEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicScaleModeEnum__get_InheritBaseMembers (CustomLogic_CustomLogicScaleModeEnum_o* __this, const MethodInfo* method);
// 0x3e8fa80

bool_conflict
CustomLogic_CustomLogicScaleModeEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicScaleModeEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


