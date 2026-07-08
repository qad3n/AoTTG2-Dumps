// Type: CustomLogic.CustomLogicTimeBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicTimeBuiltin.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/CustomLogic/Builtin/CustomLogicTimeBuiltin.cs  [CHANGED since prior version]
// --------------------------------

// CustomLogic.CustomLogicTimeBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicTimeBuiltin_o* CustomLogic_CustomLogicTimeBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3edbd70

CustomLogic_CustomLogicTimeBuiltin_o *
CustomLogic_CustomLogicTimeBuiltin_Factory__CreateInstance
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
  if (DAT_05703a45 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicTimeBuiltin);
    DAT_05703a45 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicTimeBuiltin);
      if (DAT_05703a42 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_05703a42 = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicTimeBuiltin_o *)__this;
    }
    il2cpp_glue_01f2f1a0(args);
    uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
    pSVar1 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicTimeBuiltin constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicTimeBuiltin_CreateInstance);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTimeBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicTimeBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3edbe90

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicTimeBuiltin_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  System_String_o *str2;
  undefined8 uVar3;
  System_Exception_o *__this;
  System_Func_T__object__o *pSVar4;
  CustomLogic_CLPropertyBinding_T__o *pCVar5;
  System_Action_T__object__o *setter;
  
  if (DAT_05703a46 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"TickTime");
    il2cpp_init_method_metadata(&"GameTime");
    il2cpp_init_method_metadata(&"EngineTime");
    il2cpp_init_method_metadata(&"FrameTime");
    il2cpp_init_method_metadata(&"TimeScale");
    DAT_05703a46 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"TickTime",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05703a47 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__TickTime_g____g);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTimeBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTimeBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTimeBuiltin__object);
      DAT_05703a47 = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTimeBuiltin__object);
    System_Func<object__object>___ctor();
    pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTimeBuiltin);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTimeBuiltin);
    return (CustomLogic_ICLMemberBinding_o *)pCVar5;
  }
  bVar1 = System_String__op_Equality(name,"FrameTime",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05703a48 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__FrameTime_g);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTimeBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTimeBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTimeBuiltin__object);
      DAT_05703a48 = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTimeBuiltin__object);
    System_Func<object__object>___ctor();
    pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTimeBuiltin);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTimeBuiltin);
    return (CustomLogic_ICLMemberBinding_o *)pCVar5;
  }
  bVar1 = System_String__op_Equality(name,"GameTime",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality(name,"EngineTime",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703a4a == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__EngineTime_g);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTimeBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTimeBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTimeBuiltin__object);
        DAT_05703a4a = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTimeBuiltin__object);
      System_Func<object__object>___ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTimeBuiltin);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTimeBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    bVar1 = System_String__op_Equality(name,"TimeScale",(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      pSVar2 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
      str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicTimeBuiltin not found");
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
    if (DAT_05703a4b == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicTimeBuiltin__object);
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__TimeScale_g);
      il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__TimeScale_g____se);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTimeBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTimeBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTimeBuiltin__object);
      DAT_05703a4b = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTimeBuiltin__object);
    System_Func<object__object>___ctor();
    setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicTimeBuiltin__object);
    System_Action<object__object>___ctor();
    pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTimeBuiltin);
    CustomLogic_CLPropertyBinding<object>___ctor(pCVar5,pSVar4,setter,MethodInfo_CLPropertyBinding_1_CustomLogicTimeBuiltin);
    return (CustomLogic_ICLMemberBinding_o *)pCVar5;
  }
  if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703a49 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__GameTime_g____g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTimeBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTimeBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTimeBuiltin__object);
    DAT_05703a49 = '\x01';
  }
  pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTimeBuiltin__object);
  System_Func<object__object>___ctor();
  pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTimeBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTimeBuiltin);
  return (CustomLogic_ICLMemberBinding_o *)pCVar5;
}


// CustomLogic.CustomLogicTimeBuiltin.Bindings$$__CreatePropertyBinding__TickTime
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin__o* CustomLogic_CustomLogicTimeBuiltin_Bindings____CreatePropertyBinding__TickTime (const MethodInfo* method);
// 0x3edc0c0

CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin__o *
CustomLogic_CustomLogicTimeBuiltin_Bindings____CreatePropertyBinding__TickTime(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin__o *__this;
  
  if (DAT_05703a47 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__TickTime_g____g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTimeBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTimeBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTimeBuiltin__object);
    DAT_05703a47 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTimeBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTimeBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTimeBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTimeBuiltin.Bindings$$__CreatePropertyBinding__FrameTime
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin__o* CustomLogic_CustomLogicTimeBuiltin_Bindings____CreatePropertyBinding__FrameTime (const MethodInfo* method);
// 0x3edc160

CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin__o *
CustomLogic_CustomLogicTimeBuiltin_Bindings____CreatePropertyBinding__FrameTime(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin__o *__this;
  
  if (DAT_05703a48 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__FrameTime_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTimeBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTimeBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTimeBuiltin__object);
    DAT_05703a48 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTimeBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTimeBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTimeBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTimeBuiltin.Bindings$$__CreatePropertyBinding__GameTime
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin__o* CustomLogic_CustomLogicTimeBuiltin_Bindings____CreatePropertyBinding__GameTime (const MethodInfo* method);
// 0x3edc200

CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin__o *
CustomLogic_CustomLogicTimeBuiltin_Bindings____CreatePropertyBinding__GameTime(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin__o *__this;
  
  if (DAT_05703a49 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__GameTime_g____g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTimeBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTimeBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTimeBuiltin__object);
    DAT_05703a49 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTimeBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTimeBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTimeBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTimeBuiltin.Bindings$$__CreatePropertyBinding__EngineTime
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin__o* CustomLogic_CustomLogicTimeBuiltin_Bindings____CreatePropertyBinding__EngineTime (const MethodInfo* method);
// 0x3edc2a0

CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin__o *
CustomLogic_CustomLogicTimeBuiltin_Bindings____CreatePropertyBinding__EngineTime(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin__o *__this;
  
  if (DAT_05703a4a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__EngineTime_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTimeBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTimeBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTimeBuiltin__object);
    DAT_05703a4a = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTimeBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTimeBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTimeBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTimeBuiltin.Bindings$$__CreatePropertyBinding__TimeScale
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin__o* CustomLogic_CustomLogicTimeBuiltin_Bindings____CreatePropertyBinding__TimeScale (const MethodInfo* method);
// 0x3edc340

CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin__o *
CustomLogic_CustomLogicTimeBuiltin_Bindings____CreatePropertyBinding__TimeScale(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin__o *__this;
  
  if (DAT_05703a4b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicTimeBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__TimeScale_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__TimeScale_g____se);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTimeBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTimeBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTimeBuiltin__object);
    DAT_05703a4b = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTimeBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicTimeBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTimeBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicTimeBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTimeBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicTimeBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x3edc420

void CustomLogic_CustomLogicTimeBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_05703a4c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"TickTime");
    il2cpp_init_method_metadata(&"GameTime");
    il2cpp_init_method_metadata(&"EngineTime");
    il2cpp_init_method_metadata(&"FrameTime");
    il2cpp_init_method_metadata(&"TimeScale");
    DAT_05703a4c = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"TickTime",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"FrameTime",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"GameTime",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"EngineTime",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"TimeScale",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTimeBuiltin.Bindings$$<__CreatePropertyBinding__TickTime>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTimeBuiltin_Bindings_____CreatePropertyBinding__TickTime_g____getter_2_0 (CustomLogic_CustomLogicTimeBuiltin_o* __i, const MethodInfo* method);
// 0x3edc570

Il2CppObject *
CustomLogic_CustomLogicTimeBuiltin_Bindings__<__CreatePropertyBinding__TickTime>g____getter_2_0
          (CustomLogic_CustomLogicTimeBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicTimeBuiltin.Bindings$$<__CreatePropertyBinding__FrameTime>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTimeBuiltin_Bindings_____CreatePropertyBinding__FrameTime_g____getter_3_0 (CustomLogic_CustomLogicTimeBuiltin_o* __i, const MethodInfo* method);
// 0x3edc5a0

Il2CppObject *
CustomLogic_CustomLogicTimeBuiltin_Bindings__<__CreatePropertyBinding__FrameTime>g____getter_3_0
          (CustomLogic_CustomLogicTimeBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicTimeBuiltin.Bindings$$<__CreatePropertyBinding__GameTime>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTimeBuiltin_Bindings_____CreatePropertyBinding__GameTime_g____getter_4_0 (CustomLogic_CustomLogicTimeBuiltin_o* __i, const MethodInfo* method);
// 0x3edc5d0

Il2CppObject *
CustomLogic_CustomLogicTimeBuiltin_Bindings__<__CreatePropertyBinding__GameTime>g____getter_4_0
          (CustomLogic_CustomLogicTimeBuiltin_o *__i,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  Il2CppObject *pIVar3;
  undefined4 local_c;
  
  if (DAT_05703a43 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    DAT_05703a43 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  else {
    lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  if (lVar2 != 0) {
    local_c = *(undefined4 *)(lVar2 + 0x20);
    pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&local_c);
    return pIVar3;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTimeBuiltin.Bindings$$<__CreatePropertyBinding__EngineTime>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTimeBuiltin_Bindings_____CreatePropertyBinding__EngineTime_g____getter_5_0 (CustomLogic_CustomLogicTimeBuiltin_o* __i, const MethodInfo* method);
// 0x3edc670

Il2CppObject *
CustomLogic_CustomLogicTimeBuiltin_Bindings__<__CreatePropertyBinding__EngineTime>g____getter_5_0
          (CustomLogic_CustomLogicTimeBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  UnityEngine_Time__get_time((MethodInfo *)0x0);
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicTimeBuiltin.Bindings$$<__CreatePropertyBinding__TimeScale>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTimeBuiltin_Bindings_____CreatePropertyBinding__TimeScale_g____getter_6_0 (CustomLogic_CustomLogicTimeBuiltin_o* __i, const MethodInfo* method);
// 0x3edc6a0

Il2CppObject *
CustomLogic_CustomLogicTimeBuiltin_Bindings__<__CreatePropertyBinding__TimeScale>g____getter_6_0
          (CustomLogic_CustomLogicTimeBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  UnityEngine_Time__get_timeScale((MethodInfo *)0x0);
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicTimeBuiltin.Bindings$$<__CreatePropertyBinding__TimeScale>g____setter|6_1
// il2cpp: void CustomLogic_CustomLogicTimeBuiltin_Bindings_____CreatePropertyBinding__TimeScale_g____setter_6_1 (CustomLogic_CustomLogicTimeBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3edc6d0

void CustomLogic_CustomLogicTimeBuiltin_Bindings__<__CreatePropertyBinding__TimeScale>g____setter_6_1
               (CustomLogic_CustomLogicTimeBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  float value;
  
  if (DAT_05703a4d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703a4d = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  UnityEngine_Time__set_timeScale(value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicTimeBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicTimeBuiltin___ctor (CustomLogic_CustomLogicTimeBuiltin_o* __this, const MethodInfo* method);
// 0x3edbbd0

void CustomLogic_CustomLogicTimeBuiltin___ctor
               (CustomLogic_CustomLogicTimeBuiltin_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703a42 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_05703a42 = '\x01';
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


// CustomLogic.CustomLogicTimeBuiltin$$get_TickTime
// il2cpp: float CustomLogic_CustomLogicTimeBuiltin__get_TickTime (const MethodInfo* method);
// 0x3edbc40

float CustomLogic_CustomLogicTimeBuiltin__get_TickTime(MethodInfo *method)

{
  float fVar1;
  
  fVar1 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
  return fVar1;
}


// CustomLogic.CustomLogicTimeBuiltin$$get_FrameTime
// il2cpp: float CustomLogic_CustomLogicTimeBuiltin__get_FrameTime (const MethodInfo* method);
// 0x3edbc50

float CustomLogic_CustomLogicTimeBuiltin__get_FrameTime(MethodInfo *method)

{
  float fVar1;
  
  fVar1 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  return fVar1;
}


// CustomLogic.CustomLogicTimeBuiltin$$get_GameTime
// il2cpp: float CustomLogic_CustomLogicTimeBuiltin__get_GameTime (const MethodInfo* method);
// 0x3edbc60

float CustomLogic_CustomLogicTimeBuiltin__get_GameTime(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  
  if (DAT_05703a43 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    DAT_05703a43 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  else {
    lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  if (lVar2 != 0) {
    return *(float *)(lVar2 + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTimeBuiltin$$get_EngineTime
// il2cpp: float CustomLogic_CustomLogicTimeBuiltin__get_EngineTime (const MethodInfo* method);
// 0x3edbce0

float CustomLogic_CustomLogicTimeBuiltin__get_EngineTime(MethodInfo *method)

{
  float fVar1;
  
  fVar1 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  return fVar1;
}


// CustomLogic.CustomLogicTimeBuiltin$$get_TimeScale
// il2cpp: float CustomLogic_CustomLogicTimeBuiltin__get_TimeScale (const MethodInfo* method);
// 0x3edbcf0

float CustomLogic_CustomLogicTimeBuiltin__get_TimeScale(MethodInfo *method)

{
  float fVar1;
  
  fVar1 = UnityEngine_Time__get_timeScale((MethodInfo *)0x0);
  return fVar1;
}


// CustomLogic.CustomLogicTimeBuiltin$$set_TimeScale
// il2cpp: void CustomLogic_CustomLogicTimeBuiltin__set_TimeScale (float value, const MethodInfo* method);
// 0x3edbd00

void CustomLogic_CustomLogicTimeBuiltin__set_TimeScale(float value,MethodInfo *method)

{
  UnityEngine_Time__set_timeScale(value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicTimeBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicTimeBuiltin__get_ClassName (CustomLogic_CustomLogicTimeBuiltin_o* __this, const MethodInfo* method);
// 0x3edbd10

System_String_o *
CustomLogic_CustomLogicTimeBuiltin__get_ClassName
          (CustomLogic_CustomLogicTimeBuiltin_o *__this,MethodInfo *method)

{
  if (DAT_05703a44 == '\0') {
    il2cpp_init_method_metadata(&"Time");
    DAT_05703a44 = '\x01';
  }
  return "Time";
}


// CustomLogic.CustomLogicTimeBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicTimeBuiltin__get_IsAbstract (CustomLogic_CustomLogicTimeBuiltin_o* __this, const MethodInfo* method);
// 0x3edbd40

bool_conflict
CustomLogic_CustomLogicTimeBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicTimeBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicTimeBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicTimeBuiltin__get_IsStatic (CustomLogic_CustomLogicTimeBuiltin_o* __this, const MethodInfo* method);
// 0x3edbd50

bool_conflict
CustomLogic_CustomLogicTimeBuiltin__get_IsStatic
          (CustomLogic_CustomLogicTimeBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicTimeBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicTimeBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicTimeBuiltin_o* __this, const MethodInfo* method);
// 0x3edbd60

bool_conflict
CustomLogic_CustomLogicTimeBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicTimeBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


