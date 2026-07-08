// Type: CustomLogic.CustomLogicCameraModeEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicCameraModeEnum.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicCameraModeEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicCameraModeEnum_o* CustomLogic_CustomLogicCameraModeEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3e444a0

CustomLogic_CustomLogicCameraModeEnum_o *
CustomLogic_CustomLogicCameraModeEnum_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  uint in_EAX;
  CustomLogic_CustomLogicCameraModeEnum_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar2;
  System_ArgumentException_o *__this_00;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (DAT_05702ec2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicCameraModeEnum);
    DAT_05702ec2 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_CustomLogicCameraModeEnum_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicCameraModeEnum);
      if (DAT_05702ebc == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_05702ebc = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor
                ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
      return __this;
    }
    il2cpp_glue_01f2f1a0(args);
    uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
    pSVar1 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicCameraModeEnum constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicCameraModeEnum_CreateInstance);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCameraModeEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicCameraModeEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3e445c0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicCameraModeEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  System_String_o *str2;
  undefined8 uVar3;
  System_Exception_o *__this;
  System_Func_T__object__o *pSVar4;
  CustomLogic_CLPropertyBinding_T__o *pCVar5;
  
  if (DAT_05702ec3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"TPS");
    il2cpp_init_method_metadata(&"FPS");
    il2cpp_init_method_metadata(&"Original");
    DAT_05702ec3 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"TPS",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05702ec4 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__TPS_g____getter);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCameraModeEnum);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCameraModeEnum);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCameraModeEnum__object);
      DAT_05702ec4 = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCameraModeEnum__object);
    System_Func<object__object>___ctor();
    pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCameraModeEnum);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicCameraModeEnum);
    return (CustomLogic_ICLMemberBinding_o *)pCVar5;
  }
  bVar1 = System_String__op_Equality(name,"Original",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05702ec5 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Original_g____g);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCameraModeEnum);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCameraModeEnum);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCameraModeEnum__object);
      DAT_05702ec5 = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCameraModeEnum__object);
    System_Func<object__object>___ctor();
    pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCameraModeEnum);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicCameraModeEnum);
    return (CustomLogic_ICLMemberBinding_o *)pCVar5;
  }
  bVar1 = System_String__op_Equality(name,"FPS",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    pSVar2 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicCameraModeEnum not found");
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
  if (DAT_05702ec6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__FPS_g____getter);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCameraModeEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCameraModeEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCameraModeEnum__object);
    DAT_05702ec6 = '\x01';
  }
  pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCameraModeEnum__object);
  System_Func<object__object>___ctor();
  pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCameraModeEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicCameraModeEnum);
  return (CustomLogic_ICLMemberBinding_o *)pCVar5;
}


// CustomLogic.CustomLogicCameraModeEnum.Bindings$$__CreatePropertyBinding__TPS
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum__o* CustomLogic_CustomLogicCameraModeEnum_Bindings____CreatePropertyBinding__TPS (const MethodInfo* method);
// 0x3e44750

CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum__o *
CustomLogic_CustomLogicCameraModeEnum_Bindings____CreatePropertyBinding__TPS(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum__o *__this;
  
  if (DAT_05702ec4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__TPS_g____getter);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCameraModeEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCameraModeEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCameraModeEnum__object);
    DAT_05702ec4 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCameraModeEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCameraModeEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicCameraModeEnum);
  return __this;
}


// CustomLogic.CustomLogicCameraModeEnum.Bindings$$__CreatePropertyBinding__Original
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum__o* CustomLogic_CustomLogicCameraModeEnum_Bindings____CreatePropertyBinding__Original (const MethodInfo* method);
// 0x3e447f0

CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum__o *
CustomLogic_CustomLogicCameraModeEnum_Bindings____CreatePropertyBinding__Original
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum__o *__this;
  
  if (DAT_05702ec5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Original_g____g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCameraModeEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCameraModeEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCameraModeEnum__object);
    DAT_05702ec5 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCameraModeEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCameraModeEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicCameraModeEnum);
  return __this;
}


// CustomLogic.CustomLogicCameraModeEnum.Bindings$$__CreatePropertyBinding__FPS
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum__o* CustomLogic_CustomLogicCameraModeEnum_Bindings____CreatePropertyBinding__FPS (const MethodInfo* method);
// 0x3e44890

CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum__o *
CustomLogic_CustomLogicCameraModeEnum_Bindings____CreatePropertyBinding__FPS(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum__o *__this;
  
  if (DAT_05702ec6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__FPS_g____getter);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCameraModeEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCameraModeEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCameraModeEnum__object);
    DAT_05702ec6 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCameraModeEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCameraModeEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicCameraModeEnum);
  return __this;
}


// CustomLogic.CustomLogicCameraModeEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicCameraModeEnum_Bindings___cctor (const MethodInfo* method);
// 0x3e44930

void CustomLogic_CustomLogicCameraModeEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_05702ec7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"TPS");
    il2cpp_init_method_metadata(&"FPS");
    il2cpp_init_method_metadata(&"Original");
    DAT_05702ec7 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"TPS",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Original",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"FPS",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCameraModeEnum.Bindings$$<__CreatePropertyBinding__TPS>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraModeEnum_Bindings_____CreatePropertyBinding__TPS_g____getter_2_0 (CustomLogic_CustomLogicCameraModeEnum_o* __i, const MethodInfo* method);
// 0x3e44a40

Il2CppObject *
CustomLogic_CustomLogicCameraModeEnum_Bindings__<__CreatePropertyBinding__TPS>g____getter_2_0
          (CustomLogic_CustomLogicCameraModeEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702ec8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicCameraModeEnum);
    DAT_05702ec8 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicCameraModeEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicCameraModeEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_057030fc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicCameraModeEnum);
    DAT_057030fc = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicCameraModeEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicCameraModeEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return (Il2CppObject *)**(undefined8 **)(TypeInfo_CustomLogicCameraModeEnum + 0xb8);
  }
  il2cpp_init_class();
  return (Il2CppObject *)**(undefined8 **)(TypeInfo_CustomLogicCameraModeEnum + 0xb8);
}


// CustomLogic.CustomLogicCameraModeEnum.Bindings$$<__CreatePropertyBinding__Original>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraModeEnum_Bindings_____CreatePropertyBinding__Original_g____getter_3_0 (CustomLogic_CustomLogicCameraModeEnum_o* __i, const MethodInfo* method);
// 0x3e44af0

Il2CppObject *
CustomLogic_CustomLogicCameraModeEnum_Bindings__<__CreatePropertyBinding__Original>g____getter_3_0
          (CustomLogic_CustomLogicCameraModeEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702ec9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicCameraModeEnum);
    DAT_05702ec9 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicCameraModeEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicCameraModeEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_057030fd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicCameraModeEnum);
    DAT_057030fd = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicCameraModeEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicCameraModeEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicCameraModeEnum + 0xb8) + 8);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicCameraModeEnum + 0xb8) + 8);
}


// CustomLogic.CustomLogicCameraModeEnum.Bindings$$<__CreatePropertyBinding__FPS>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraModeEnum_Bindings_____CreatePropertyBinding__FPS_g____getter_4_0 (CustomLogic_CustomLogicCameraModeEnum_o* __i, const MethodInfo* method);
// 0x3e44ba0

Il2CppObject *
CustomLogic_CustomLogicCameraModeEnum_Bindings__<__CreatePropertyBinding__FPS>g____getter_4_0
          (CustomLogic_CustomLogicCameraModeEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702eca == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicCameraModeEnum);
    DAT_05702eca = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicCameraModeEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicCameraModeEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_057030fe == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicCameraModeEnum);
    DAT_057030fe = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicCameraModeEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicCameraModeEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicCameraModeEnum + 0xb8) + 0x10);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicCameraModeEnum + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicCameraModeEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicCameraModeEnum___ctor (CustomLogic_CustomLogicCameraModeEnum_o* __this, const MethodInfo* method);
// 0x3e44170

void CustomLogic_CustomLogicCameraModeEnum___ctor
               (CustomLogic_CustomLogicCameraModeEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702ebc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_05702ebc = '\x01';
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


// CustomLogic.CustomLogicCameraModeEnum$$get_TPS
// il2cpp: System_String_o* CustomLogic_CustomLogicCameraModeEnum__get_TPS (const MethodInfo* method);
// 0x3e441e0

System_String_o * CustomLogic_CustomLogicCameraModeEnum__get_TPS(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702ebd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicCameraModeEnum);
    DAT_05702ebd = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicCameraModeEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicCameraModeEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return (System_String_o *)**(undefined8 **)(TypeInfo_CustomLogicCameraModeEnum + 0xb8);
  }
  il2cpp_init_class();
  return (System_String_o *)**(undefined8 **)(TypeInfo_CustomLogicCameraModeEnum + 0xb8);
}


// CustomLogic.CustomLogicCameraModeEnum$$get_Original
// il2cpp: System_String_o* CustomLogic_CustomLogicCameraModeEnum__get_Original (const MethodInfo* method);
// 0x3e44250

System_String_o * CustomLogic_CustomLogicCameraModeEnum__get_Original(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702ebe == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicCameraModeEnum);
    DAT_05702ebe = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicCameraModeEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicCameraModeEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicCameraModeEnum + 0xb8) + 8);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicCameraModeEnum + 0xb8) + 8);
}


// CustomLogic.CustomLogicCameraModeEnum$$get_FPS
// il2cpp: System_String_o* CustomLogic_CustomLogicCameraModeEnum__get_FPS (const MethodInfo* method);
// 0x3e442c0

System_String_o * CustomLogic_CustomLogicCameraModeEnum__get_FPS(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702ebf == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicCameraModeEnum);
    DAT_05702ebf = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicCameraModeEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicCameraModeEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicCameraModeEnum + 0xb8) + 0x10);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicCameraModeEnum + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicCameraModeEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicCameraModeEnum__get_ClassName (CustomLogic_CustomLogicCameraModeEnum_o* __this, const MethodInfo* method);
// 0x3e44330

System_String_o *
CustomLogic_CustomLogicCameraModeEnum__get_ClassName
          (CustomLogic_CustomLogicCameraModeEnum_o *__this,MethodInfo *method)

{
  if (DAT_05702ec0 == '\0') {
    il2cpp_init_method_metadata(&"CameraModeEnum");
    DAT_05702ec0 = '\x01';
  }
  return "CameraModeEnum";
}


// CustomLogic.CustomLogicCameraModeEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicCameraModeEnum__get_IsAbstract (CustomLogic_CustomLogicCameraModeEnum_o* __this, const MethodInfo* method);
// 0x3e44360

bool_conflict
CustomLogic_CustomLogicCameraModeEnum__get_IsAbstract
          (CustomLogic_CustomLogicCameraModeEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicCameraModeEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicCameraModeEnum__get_IsStatic (CustomLogic_CustomLogicCameraModeEnum_o* __this, const MethodInfo* method);
// 0x3e44370

bool_conflict
CustomLogic_CustomLogicCameraModeEnum__get_IsStatic
          (CustomLogic_CustomLogicCameraModeEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicCameraModeEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicCameraModeEnum__get_InheritBaseMembers (CustomLogic_CustomLogicCameraModeEnum_o* __this, const MethodInfo* method);
// 0x3e44380

bool_conflict
CustomLogic_CustomLogicCameraModeEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicCameraModeEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicCameraModeEnum$$.cctor
// il2cpp: void CustomLogic_CustomLogicCameraModeEnum___cctor (const MethodInfo* method);
// 0x3e44390

void CustomLogic_CustomLogicCameraModeEnum___cctor(MethodInfo *method)

{
  long lVar1;
  System_String_o *pSVar2;
  System_Enum_o SStack_58;
  undefined4 uStack_48;
  System_Enum_o SStack_40;
  undefined4 uStack_30;
  System_Enum_o SStack_28;
  undefined4 uStack_18;
  
  if (DAT_05702ec1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CameraInputMode);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicCameraModeEnum);
    DAT_05702ec1 = '\x01';
  }
  SStack_28.klass = TypeInfo_CameraInputMode;
  SStack_28.monitor = (void *)0xffffffffffffffff;
  uStack_18 = 0;
  pSVar2 = System_Enum__ToString(&SStack_28,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_CustomLogicCameraModeEnum + 0xb8) = pSVar2;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_CustomLogicCameraModeEnum + 0xb8));
  SStack_40.klass = TypeInfo_CameraInputMode;
  SStack_40.monitor = (void *)0xffffffffffffffff;
  uStack_30 = 1;
  pSVar2 = System_Enum__ToString(&SStack_40,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_CustomLogicCameraModeEnum + 0xb8);
  *(System_String_o **)(lVar1 + 8) = pSVar2;
  il2cpp_runtime_glue(lVar1 + 8);
  SStack_58.klass = TypeInfo_CameraInputMode;
  SStack_58.monitor = (void *)0xffffffffffffffff;
  uStack_48 = 2;
  pSVar2 = System_Enum__ToString(&SStack_58,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_CustomLogicCameraModeEnum + 0xb8);
  *(System_String_o **)(lVar1 + 0x10) = pSVar2;
  il2cpp_runtime_glue(lVar1 + 0x10,pSVar2);
  return;
}


