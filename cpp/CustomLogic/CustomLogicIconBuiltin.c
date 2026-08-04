// Type: CustomLogic.CustomLogicIconBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicIconBuiltin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicIconBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicIconBuiltin_o* CustomLogic_CustomLogicIconBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x41ea980

CustomLogic_CustomLogicIconBuiltin_o *
CustomLogic_CustomLogicIconBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  undefined4 in_EAX;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  System_String_o *str2;
  System_ArgumentException_o *message;
  undefined8 uVar6;
  System_ArgumentException_o *__this;
  System_ArgumentException_o *pSVar7;
  System_Func_T__object__o *pSVar8;
  System_Action_T__object__o *pSVar9;
  CustomLogic_CustomLogicIconBuiltin_o *pCVar10;
  System_Func_T__object____object__o *pSVar11;
  System_ArgumentException_o **ppSVar12;
  undefined8 unaff_R15;
  System_ArgumentException_o *pSStack_30;
  System_ArgumentException_o *pSStack_28;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  il2cpp_runtime_helper_01f681a0();
  uStack_18 = CONCAT44((int)args->max_length,(undefined4)uStack_18);
  pSVar4 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicIconBuiltin constructor found that takes ");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  message = (System_ArgumentException_o *)System_String__Concat_3af7150(pSVar5,pSVar4,str2,(MethodInfo *)0x0);
  uVar6 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar6);
  System_ArgumentException___ctor_3c12490(__this,(System_String_o *)message,(MethodInfo *)0x0);
  uVar6 = il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicIconBuiltin_CreateInstance);
  pSVar7 = __this;
  pSStack_30 = (System_ArgumentException_o *)il2cpp_runtime_helper_022b2b10(__this,uVar6);
  ppSVar12 = &pSStack_30;
  pSStack_28 = __this;
  if (g_data_057ad7ed == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"IconPath");
    il2cpp_runtime_helper_023445d0(&"SetTintColor");
    il2cpp_runtime_helper_023445d0(&"SetIcon");
    il2cpp_runtime_helper_023445d0(&"ScaleMode");
    g_data_057ad7ed = '\x01';
  }
  bVar3 = System_String__op_Equality((System_String_o *)pSVar7,"IconPath",(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    bVar3 = System_String__op_Equality((System_String_o *)pSVar7,"ScaleMode",(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057ad7ef == '\0') {
        pSStack_28 = message;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicIconBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ScaleMode_g____getter_3);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__ScaleMode_g____setter_3_1);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicIconBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicIconBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicIconBuiltin_object);
        g_data_057ad7ef = '\x01';
        message = pSStack_28;
      }
      pSStack_28 = message;
      pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicIconBuiltin_object);
      System_Func_object__object____ctor();
      pSVar9 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicIconBuiltin_object);
      System_Action_object__object____ctor();
      pCVar10 = (CustomLogic_CustomLogicIconBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicIconBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar10,pSVar8,pSVar9,MethodInfo_CLPropertyBinding_1_CustomLogicIconBuiltin);
      return pCVar10;
    }
    bVar3 = System_String__op_Equality((System_String_o *)pSVar7,"SetIcon",(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057ad7f0 == '\0') {
        pSStack_28 = message;
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicIconBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicIconBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicIconBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetIcon_b__4_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad7f0 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
        pSStack_28 = message;
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar11 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
      }
      else {
        pSVar11 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
      }
      if (pSVar11 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar11 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicIconBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar11;
        il2cpp_runtime_helper_022b4080(lVar2 + 8,pSVar11);
      }
      pCVar10 = (CustomLogic_CustomLogicIconBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicIconBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                ((CustomLogic_CLMethodBinding_T__o *)pCVar10,pSVar11,MethodInfo_CLMethodBinding_1_CustomLogicIconBuiltin);
      return pCVar10;
    }
    bVar3 = System_String__op_Equality((System_String_o *)pSVar7,"SetTintColor",(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057ad7f1 == '\0') {
        pSStack_28 = message;
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicIconBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicIconBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicIconBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetTintColor_b__5_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad7f1 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
        pSStack_28 = message;
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar11 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
      }
      else {
        pSVar11 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
      }
      if (pSVar11 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar11 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicIconBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar11;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x10,pSVar11);
      }
      pCVar10 = (CustomLogic_CustomLogicIconBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicIconBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                ((CustomLogic_CLMethodBinding_T__o *)pCVar10,pSVar11,MethodInfo_CLMethodBinding_1_CustomLogicIconBuiltin);
      return pCVar10;
    }
    pSVar4 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicIconBuiltin not found");
    message = (System_ArgumentException_o *)
              System_String__Concat_3af7150(pSVar4,(System_String_o *)pSVar7,pSVar5,(MethodInfo *)0x0);
    uVar6 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pSVar7 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar6);
    System_Exception___ctor_3cf6120((System_Exception_o *)pSVar7,(System_String_o *)message,(MethodInfo *)0x0)
    ;
    uVar6 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
    il2cpp_runtime_helper_022b2b10(pSVar7,uVar6);
  }
  else if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    ppSVar12 = (System_ArgumentException_o **)&uStack_18;
    pSVar7 = pSStack_28;
  }
  else {
    ppSVar12 = (System_ArgumentException_o **)&uStack_18;
    pSVar7 = pSStack_28;
  }
  *(undefined8 *)((long)ppSVar12 + -8) = unaff_R15;
  *(System_ArgumentException_o **)((long)ppSVar12 + -0x10) = message;
  *(System_ArgumentException_o **)((long)ppSVar12 + -0x18) = pSVar7;
  if (g_data_057ad7ee == '\0') {
    *(undefined8 *)((long)ppSVar12 + -0x20) = 0x41eac0a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicIconBuiltin_object);
    *(undefined8 *)((long)ppSVar12 + -0x20) = 0x41eac16;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__IconPath_g____getter_2_0);
    *(undefined8 *)((long)ppSVar12 + -0x20) = 0x41eac22;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__IconPath_g____setter_2_1);
    *(undefined8 *)((long)ppSVar12 + -0x20) = 0x41eac2e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicIconBuiltin);
    *(undefined8 *)((long)ppSVar12 + -0x20) = 0x41eac3a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicIconBuiltin);
    *(undefined8 *)((long)ppSVar12 + -0x20) = 0x41eac46;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicIconBuiltin_object);
    g_data_057ad7ee = '\x01';
  }
  *(undefined8 *)((long)ppSVar12 + -0x20) = 0x41eac5c;
  pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicIconBuiltin_object);
  *(undefined8 *)((long)ppSVar12 + -0x20) = 0x41eac75;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppSVar12 + -0x20) = 0x41eac84;
  pSVar9 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicIconBuiltin_object);
  *(undefined8 *)((long)ppSVar12 + -0x20) = 0x41eac9d;
  System_Action_object__object____ctor();
  *(undefined8 *)((long)ppSVar12 + -0x20) = 0x41eacac;
  pCVar10 = (CustomLogic_CustomLogicIconBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicIconBuiltin);
  *(undefined8 *)((long)ppSVar12 + -0x20) = 0x41eacc7;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar10,pSVar8,pSVar9,MethodInfo_CLPropertyBinding_1_CustomLogicIconBuiltin);
  return pCVar10;
}


// CustomLogic.CustomLogicIconBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicIconBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x41eb2e0

void CustomLogic_CustomLogicIconBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057ad7f5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad7f5 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicIconBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicIconBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicIconBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x41eb350

void CustomLogic_CustomLogicIconBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicIconBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicIconBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetIcon>b__4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicIconBuiltin_Bindings___c_____CreateMethodBinding__SetIcon_b__4_0 (CustomLogic_CustomLogicIconBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicIconBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41eb360

Il2CppObject *
CustomLogic_CustomLogicIconBuiltin_Bindings___c_____CreateMethodBinding__SetIcon_b__4_0
          (CustomLogic_CustomLogicIconBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicIconBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_UIElements_Image_o *__this_00;
  System_String_o *value;
  Il2CppObject *extraout_RAX;
  Il2CppObject *pIVar1;
  MethodInfo *method_00;
  long extraout_RDX;
  CustomLogic_CustomLogicIconBuiltin_o *pCVar2;
  UnityEngine_Color_o value_00;
  
  pCVar2 = __c;
  if (g_data_057ad7f6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicIconBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad7f6 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_041eb3e2:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)__a->max_length != 0) {
    __this = (CustomLogic_CustomLogicIconBuiltin_Bindings___c_o *)__a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pCVar2 = MethodInfo_String_ConvertTo_String;
    value = (System_String_o *)
            CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      ((Il2CppObject *)__this,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
    if (__c != (CustomLogic_CustomLogicIconBuiltin_o *)0x0) {
      CustomLogic_CustomLogicIconBuiltin__SetIcon(__c,value,method_00);
      return extraout_RAX;
    }
    goto label_041eb3e2;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad7f7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti);
    __this = (CustomLogic_CustomLogicIconBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad7f7 = '\x01';
  }
  if (extraout_RDX != 0) {
    if (*(int *)(extraout_RDX + 0x18) == 0) goto label_041eb498;
    __this = *(CustomLogic_CustomLogicIconBuiltin_Bindings___c_o **)(extraout_RDX + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti);
    if (((pCVar2 != (CustomLogic_CustomLogicIconBuiltin_o *)0x0) && (pIVar1 != (Il2CppObject *)0x0)) &&
       (__this = (CustomLogic_CustomLogicIconBuiltin_Bindings___c_o *)pIVar1[3].klass,
       (Il2CppClass *)__this != (Il2CppClass *)0x0)) {
      __this_00 = (pCVar2->fields)._image;
      value_00 = Utility_Color255__ToColor((Utility_Color255_o *)__this,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_UIElements_Image_o *)0x0) {
        UnityEngine_UIElements_Image__set_tintColor(__this_00,value_00,(MethodInfo *)0x0);
        return (Il2CppObject *)pCVar2;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_041eb498:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad7f8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ad7f8 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (((Il2CppClass *)__this)->_1).this_arg.data = (void *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  il2cpp_runtime_helper_022b4080(&(((Il2CppClass *)__this)->_1).this_arg);
  *(undefined8 *)&(((Il2CppClass *)__this)->_1).this_arg.bits = 0;
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(&(((Il2CppClass *)__this)->_1).this_arg.bits,0);
  return pIVar1;
}


// CustomLogic.CustomLogicIconBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetTintColor>b__5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicIconBuiltin_Bindings___c_____CreateMethodBinding__SetTintColor_b__5_0 (CustomLogic_CustomLogicIconBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicIconBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41eb3f0

Il2CppObject *
CustomLogic_CustomLogicIconBuiltin_Bindings___c_____CreateMethodBinding__SetTintColor_b__5_0
          (CustomLogic_CustomLogicIconBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicIconBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_UIElements_Image_o *__this_00;
  Il2CppObject *pIVar1;
  UnityEngine_Color_o value;
  
  if (g_data_057ad7f7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti);
    __this = (CustomLogic_CustomLogicIconBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad7f7 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) goto label_041eb498;
    __this = (CustomLogic_CustomLogicIconBuiltin_Bindings___c_o *)__a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicColorBuilti);
    if (((__c != (CustomLogic_CustomLogicIconBuiltin_o *)0x0) && (pIVar1 != (Il2CppObject *)0x0)) &&
       (__this = (CustomLogic_CustomLogicIconBuiltin_Bindings___c_o *)pIVar1[3].klass,
       (Il2CppClass *)__this != (Il2CppClass *)0x0)) {
      __this_00 = (__c->fields)._image;
      value = Utility_Color255__ToColor((Utility_Color255_o *)__this,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_UIElements_Image_o *)0x0) {
        UnityEngine_UIElements_Image__set_tintColor(__this_00,value,(MethodInfo *)0x0);
        return (Il2CppObject *)__c;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_041eb498:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad7f8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ad7f8 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (((Il2CppClass *)__this)->_1).this_arg.data = (void *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  il2cpp_runtime_helper_022b4080(&(((Il2CppClass *)__this)->_1).this_arg);
  *(undefined8 *)&(((Il2CppClass *)__this)->_1).this_arg.bits = 0;
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(&(((Il2CppClass *)__this)->_1).this_arg.bits,0);
  return pIVar1;
}


// CustomLogic.CustomLogicIconBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicIconBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x41eaa10

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicIconBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  bool_conflict bVar3;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar4;
  System_Func_T__object__o *pSVar5;
  System_Action_T__object__o *pSVar6;
  CustomLogic_CLPropertyBinding_T__o *pCVar7;
  System_Func_T__object____object__o *pSVar8;
  CustomLogic_CLMethodBinding_T__o *pCVar9;
  System_Exception_o *unaff_RBX;
  System_String_o *unaff_R14;
  undefined8 unaff_R15;
  undefined1 auStack_18 [8];
  
  if (g_data_057ad7ed == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"IconPath");
    il2cpp_runtime_helper_023445d0(&"SetTintColor");
    il2cpp_runtime_helper_023445d0(&"SetIcon");
    il2cpp_runtime_helper_023445d0(&"ScaleMode");
    g_data_057ad7ed = '\x01';
  }
  bVar3 = System_String__op_Equality(name,"IconPath",(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    bVar3 = System_String__op_Equality(name,"ScaleMode",(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad7ef == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicIconBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ScaleMode_g____getter_3);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__ScaleMode_g____setter_3_1);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicIconBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicIconBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicIconBuiltin_object);
        g_data_057ad7ef = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicIconBuiltin_object);
      System_Func_object__object____ctor();
      pSVar6 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicIconBuiltin_object);
      System_Action_object__object____ctor();
      pCVar7 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicIconBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor(pCVar7,pSVar5,pSVar6,MethodInfo_CLPropertyBinding_1_CustomLogicIconBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar7;
    }
    bVar3 = System_String__op_Equality(name,"SetIcon",(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad7f0 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicIconBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicIconBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicIconBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetIcon_b__4_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad7f0 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar8 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
      }
      else {
        pSVar8 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
      }
      if (pSVar8 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar8 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicIconBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar8;
        il2cpp_runtime_helper_022b4080(lVar2 + 8,pSVar8);
      }
      pCVar9 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicIconBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(pCVar9,pSVar8,MethodInfo_CLMethodBinding_1_CustomLogicIconBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar9;
    }
    bVar3 = System_String__op_Equality(name,"SetTintColor",(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad7f1 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicIconBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicIconBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicIconBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetTintColor_b__5_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad7f1 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar8 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
      }
      else {
        pSVar8 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
      }
      if (pSVar8 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar8 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicIconBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar8;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x10,pSVar8);
      }
      pCVar9 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicIconBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(pCVar9,pSVar8,MethodInfo_CLMethodBinding_1_CustomLogicIconBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar9;
    }
    str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicIconBuiltin not found");
    unaff_R14 = System_String__Concat_3af7150(str0,name,str2,(MethodInfo *)0x0);
    uVar4 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    unaff_RBX = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar4);
    System_Exception___ctor_3cf6120(unaff_RBX,unaff_R14,(MethodInfo *)0x0);
    uVar4 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
    il2cpp_runtime_helper_022b2b10(unaff_RBX,uVar4);
    register0x00000020 = (BADSPACEBASE *)auStack_18;
  }
  else if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)register0x00000020 + -8) = unaff_R15;
  *(System_String_o **)((long)register0x00000020 + -0x10) = unaff_R14;
  *(System_Exception_o **)((long)register0x00000020 + -0x18) = unaff_RBX;
  if (g_data_057ad7ee == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41eac0a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicIconBuiltin_object);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41eac16;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__IconPath_g____getter_2_0);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41eac22;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__IconPath_g____setter_2_1);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41eac2e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicIconBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41eac3a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicIconBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41eac46;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicIconBuiltin_object);
    g_data_057ad7ee = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41eac5c;
  pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicIconBuiltin_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41eac75;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41eac84;
  pSVar6 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicIconBuiltin_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41eac9d;
  System_Action_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41eacac;
  pCVar7 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicIconBuiltin);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41eacc7;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar7,pSVar5,pSVar6,MethodInfo_CLPropertyBinding_1_CustomLogicIconBuiltin);
  return (CustomLogic_ICLMemberBinding_o *)pCVar7;
}


// CustomLogic.CustomLogicIconBuiltin.Bindings$$__CreatePropertyBinding__IconPath
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicIconBuiltin__o* CustomLogic_CustomLogicIconBuiltin_Bindings____CreatePropertyBinding__IconPath (const MethodInfo* method);
// 0x41eabf0

CustomLogic_CLPropertyBinding_CustomLogicIconBuiltin__o *
CustomLogic_CustomLogicIconBuiltin_Bindings____CreatePropertyBinding__IconPath(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicIconBuiltin__o *__this;
  
  if (g_data_057ad7ee == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicIconBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__IconPath_g____getter_2_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__IconPath_g____setter_2_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicIconBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicIconBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicIconBuiltin_object);
    g_data_057ad7ee = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicIconBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicIconBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicIconBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicIconBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicIconBuiltin);
  return __this;
}


// CustomLogic.CustomLogicIconBuiltin.Bindings$$__CreatePropertyBinding__ScaleMode
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicIconBuiltin__o* CustomLogic_CustomLogicIconBuiltin_Bindings____CreatePropertyBinding__ScaleMode (const MethodInfo* method);
// 0x41eacd0

CustomLogic_CLPropertyBinding_CustomLogicIconBuiltin__o *
CustomLogic_CustomLogicIconBuiltin_Bindings____CreatePropertyBinding__ScaleMode(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicIconBuiltin__o *__this;
  
  if (g_data_057ad7ef == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicIconBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ScaleMode_g____getter_3);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__ScaleMode_g____setter_3_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicIconBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicIconBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicIconBuiltin_object);
    g_data_057ad7ef = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicIconBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicIconBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicIconBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicIconBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicIconBuiltin);
  return __this;
}


// CustomLogic.CustomLogicIconBuiltin.Bindings$$__CreateMethodBinding__SetIcon
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicIconBuiltin__o* CustomLogic_CustomLogicIconBuiltin_Bindings____CreateMethodBinding__SetIcon (const MethodInfo* method);
// 0x41eadb0

CustomLogic_CLMethodBinding_CustomLogicIconBuiltin__o *
CustomLogic_CustomLogicIconBuiltin_Bindings____CreateMethodBinding__SetIcon(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicIconBuiltin__o *__this;
  
  if (g_data_057ad7f0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicIconBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicIconBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicIconBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetIcon_b__4_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad7f0 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicIconBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicIconBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicIconBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicIconBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicIconBuiltin.Bindings$$__CreateMethodBinding__SetTintColor
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicIconBuiltin__o* CustomLogic_CustomLogicIconBuiltin_Bindings____CreateMethodBinding__SetTintColor (const MethodInfo* method);
// 0x41eaf00

CustomLogic_CLMethodBinding_CustomLogicIconBuiltin__o *
CustomLogic_CustomLogicIconBuiltin_Bindings____CreateMethodBinding__SetTintColor(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicIconBuiltin__o *__this;
  
  if (g_data_057ad7f1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicIconBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicIconBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicIconBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SetTintColor_b__5_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad7f1 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicIconBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x10) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x10,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicIconBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicIconBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicIconBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicIconBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicIconBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x41eb050

void CustomLogic_CustomLogicIconBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar1;
  int32_t value;
  System_Type_o *enumType;
  Il2CppObject *pIVar2;
  undefined8 uVar3;
  System_ArgumentException_o *__this;
  CustomLogic_CustomLogicIconBuiltin_o *__this_00;
  System_String_o *pSVar4;
  MethodInfo *method_00;
  MethodInfo_33E0570 *obj;
  MethodInfo_24EEB40 *obj_00;
  CustomLogic_CustomLogicIconBuiltin_o *__this_01;
  undefined8 uStack_70;
  CustomLogic_CustomLogicIconBuiltin_o *pCStack_68;
  undefined8 uStack_40;
  undefined8 uStack_38;
  CustomLogic_CustomLogicIconBuiltin_o *pCStack_30;
  
  if (g_data_057ad7f2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&"IconPath");
    il2cpp_runtime_helper_023445d0(&"SetTintColor");
    il2cpp_runtime_helper_023445d0(&"SetIcon");
    il2cpp_runtime_helper_023445d0(&"ScaleMode");
    g_data_057ad7f2 = '\x01';
  }
  __this_00 = (CustomLogic_CustomLogicIconBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  obj = MethodInfo_HashSet_1_System_String;
  __this_01 = __this_00;
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this_00,MethodInfo_HashSet_1_System_String);
  if (__this_00 != (CustomLogic_CustomLogicIconBuiltin_o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this_00,"IconPath",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this_00,"ScaleMode",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this_00,"SetIcon",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this_00,"SetTintColor",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this_00;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__this_01 != (CustomLogic_CustomLogicIconBuiltin_o *)0x0) {
    return;
  }
  uStack_38 = il2cpp_runtime_helper_022b2c90();
  pCStack_30 = __this_00;
  if (g_data_057ad7f3 == '\0') {
    uStack_40 = 0x41eb1bf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    uStack_40 = 0x41eb1cb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad7f3 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_40 = 0x41eb1ea;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_40 = 0x41eb1fc;
  obj_00 = MethodInfo_String_ConvertTo_String;
  pSVar4 = (System_String_o *)
           CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)obj,MethodInfo_String_ConvertTo_String);
  if (__this_01 != (CustomLogic_CustomLogicIconBuiltin_o *)0x0) {
    CustomLogic_CustomLogicIconBuiltin__SetIcon(__this_01,pSVar4,method_00);
    return;
  }
  uStack_40 = 0x41eb218;
  uStack_40 = il2cpp_runtime_helper_022b2c90();
  if ((obj != (MethodInfo_33E0570 *)0x0) && (obj[1].virtualMethodPointer != (Il2CppMethodPointer)0x0)) {
    uStack_40 = CONCAT44(*(undefined4 *)(obj[1].virtualMethodPointer + 0x3d8),(undefined4)uStack_40);
    il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_40 + 4);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad7f4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad7f4 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)obj_00,MethodInfo_Int32_ConvertTo_Int32);
  if (obj != (MethodInfo_33E0570 *)0x0) {
    pCStack_68 = __this_01;
    if (g_data_057ad7eb == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeRef_ScaleMode);
      g_data_057ad7eb = '\x01';
    }
    handle.fields.value = TypeRef_ScaleMode.fields.value;
    if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
    uStack_70 = CONCAT44(value,(undefined4)uStack_70);
    pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_70 + 4);
    if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar1 = System_Enum__IsDefined(enumType,pIVar2,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      uStack_70 = CONCAT44(uStack_70._4_4_,value);
      pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_70);
      pSVar4 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Invalid scale mode: {0}.");
      pSVar4 = System_String__Format(pSVar4,pIVar2,(MethodInfo *)0x0);
      uVar3 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
      __this = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar3);
      System_ArgumentException___ctor_3c12490(__this,pSVar4,(MethodInfo *)0x0);
      uVar3 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_ScaleMode);
      il2cpp_runtime_helper_022b2b10(__this,uVar3);
    }
    else if ((UnityEngine_UIElements_Image_o *)obj[1].virtualMethodPointer !=
             (UnityEngine_UIElements_Image_o *)0x0) {
      UnityEngine_UIElements_Image__set_scaleMode
                ((UnityEngine_UIElements_Image_o *)obj[1].virtualMethodPointer,value,(MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ad7ec == '\0') {
      il2cpp_runtime_helper_023445d0(&"Icon");
      g_data_057ad7ec = '\x01';
    }
    return;
  }
  uStack_70 = il2cpp_runtime_helper_022b2c90();
  pCStack_68 = (CustomLogic_CustomLogicIconBuiltin_o *)obj;
  if (g_data_057ad7f5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad7f5 = '\x01';
  }
  pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar2,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar2;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar2);
  return;
}


// CustomLogic.CustomLogicIconBuiltin.Bindings$$<__CreatePropertyBinding__IconPath>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicIconBuiltin_Bindings_____CreatePropertyBinding__IconPath_g____getter_2_0 (CustomLogic_CustomLogicIconBuiltin_o* __i, const MethodInfo* method);
// 0x41eb180

Il2CppObject *
CustomLogic_CustomLogicIconBuiltin_Bindings_____CreatePropertyBinding__IconPath_g____getter_2_0
          (CustomLogic_CustomLogicIconBuiltin_o *__i,MethodInfo *method)

{
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar1;
  int32_t value;
  System_Type_o *enumType;
  Il2CppObject *extraout_RAX;
  undefined8 uVar2;
  System_ArgumentException_o *__this;
  System_String_o *pSVar3;
  Il2CppObject *extraout_RAX_00;
  Il2CppObject *pIVar4;
  MethodInfo *method_00;
  MethodInfo_24EEB40 *obj;
  undefined8 uStack_58;
  CustomLogic_CustomLogicIconBuiltin_o *pCStack_50;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  if (__i != (CustomLogic_CustomLogicIconBuiltin_o *)0x0) {
    return (Il2CppObject *)(__i->fields)._currentIconPath;
  }
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad7f3 == '\0') {
    uStack_28 = 0x41eb1bf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    uStack_28 = 0x41eb1cb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad7f3 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_28 = 0x41eb1ea;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_28 = 0x41eb1fc;
  obj = MethodInfo_String_ConvertTo_String;
  pSVar3 = (System_String_o *)
           CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)method,MethodInfo_String_ConvertTo_String);
  if (__i != (CustomLogic_CustomLogicIconBuiltin_o *)0x0) {
    CustomLogic_CustomLogicIconBuiltin__SetIcon(__i,pSVar3,method_00);
    return extraout_RAX_00;
  }
  uStack_28 = 0x41eb218;
  uStack_28 = il2cpp_runtime_helper_022b2c90();
  if ((method != (MethodInfo *)0x0) && (method[1].virtualMethodPointer != (Il2CppMethodPointer)0x0)) {
    uStack_28 = CONCAT44(*(undefined4 *)(method[1].virtualMethodPointer + 0x3d8),(undefined4)uStack_28);
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_28 + 4);
    return pIVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad7f4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad7f4 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)obj,MethodInfo_Int32_ConvertTo_Int32);
  if (method != (MethodInfo *)0x0) {
    pCStack_50 = __i;
    if (g_data_057ad7eb == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeRef_ScaleMode);
      g_data_057ad7eb = '\x01';
    }
    handle.fields.value = TypeRef_ScaleMode.fields.value;
    if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
    uStack_58 = CONCAT44(value,(undefined4)uStack_58);
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_58 + 4);
    if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar1 = System_Enum__IsDefined(enumType,pIVar4,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      uStack_58 = CONCAT44(uStack_58._4_4_,value);
      pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_58);
      pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Invalid scale mode: {0}.");
      pSVar3 = System_String__Format(pSVar3,pIVar4,(MethodInfo *)0x0);
      uVar2 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
      __this = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar2);
      System_ArgumentException___ctor_3c12490(__this,pSVar3,(MethodInfo *)0x0);
      uVar2 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_ScaleMode);
      il2cpp_runtime_helper_022b2b10(__this,uVar2);
    }
    else if ((UnityEngine_UIElements_Image_o *)method[1].virtualMethodPointer !=
             (UnityEngine_UIElements_Image_o *)0x0) {
      UnityEngine_UIElements_Image__set_scaleMode
                ((UnityEngine_UIElements_Image_o *)method[1].virtualMethodPointer,value,(MethodInfo *)0x0);
      return extraout_RAX;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ad7ec == '\0') {
      il2cpp_runtime_helper_023445d0(&"Icon");
      g_data_057ad7ec = '\x01';
    }
    return "Icon";
  }
  uStack_58 = il2cpp_runtime_helper_022b2c90();
  pCStack_50 = (CustomLogic_CustomLogicIconBuiltin_o *)method;
  if (g_data_057ad7f5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad7f5 = '\x01';
  }
  pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar4,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar4;
  pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar4);
  return pIVar4;
}


// CustomLogic.CustomLogicIconBuiltin.Bindings$$<__CreatePropertyBinding__IconPath>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicIconBuiltin_Bindings_____CreatePropertyBinding__IconPath_g____setter_2_1 (CustomLogic_CustomLogicIconBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x41eb1a0

void CustomLogic_CustomLogicIconBuiltin_Bindings_____CreatePropertyBinding__IconPath_g____setter_2_1
               (CustomLogic_CustomLogicIconBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar1;
  int32_t value;
  System_Type_o *enumType;
  Il2CppObject *pIVar2;
  undefined8 uVar3;
  System_ArgumentException_o *__this;
  System_String_o *pSVar4;
  MethodInfo *method_00;
  MethodInfo_24EEB40 *obj;
  undefined8 uStack_50;
  CustomLogic_CustomLogicIconBuiltin_o *pCStack_48;
  undefined8 uStack_20;
  
  if (g_data_057ad7f3 == '\0') {
    uStack_20 = 0x41eb1bf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    uStack_20 = 0x41eb1cb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad7f3 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_20 = 0x41eb1ea;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_20 = 0x41eb1fc;
  obj = MethodInfo_String_ConvertTo_String;
  pSVar4 = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo_object_(__v,MethodInfo_String_ConvertTo_String);
  if (__i != (CustomLogic_CustomLogicIconBuiltin_o *)0x0) {
    CustomLogic_CustomLogicIconBuiltin__SetIcon(__i,pSVar4,method_00);
    return;
  }
  uStack_20 = 0x41eb218;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if ((__v != (Il2CppObject *)0x0) && (__v[6].klass != (Il2CppClass *)0x0)) {
    uStack_20 = CONCAT44(*(undefined4 *)&(__v[6].klass)->vtable[0x2a].methodPtr,(undefined4)uStack_20);
    il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_20 + 4);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad7f4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad7f4 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)obj,MethodInfo_Int32_ConvertTo_Int32);
  if (__v != (Il2CppObject *)0x0) {
    pCStack_48 = __i;
    if (g_data_057ad7eb == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeRef_ScaleMode);
      g_data_057ad7eb = '\x01';
    }
    handle.fields.value = TypeRef_ScaleMode.fields.value;
    if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
    uStack_50 = CONCAT44(value,(undefined4)uStack_50);
    pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_50 + 4);
    if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar1 = System_Enum__IsDefined(enumType,pIVar2,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      uStack_50 = CONCAT44(uStack_50._4_4_,value);
      pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_50);
      pSVar4 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Invalid scale mode: {0}.");
      pSVar4 = System_String__Format(pSVar4,pIVar2,(MethodInfo *)0x0);
      uVar3 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
      __this = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar3);
      System_ArgumentException___ctor_3c12490(__this,pSVar4,(MethodInfo *)0x0);
      uVar3 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_ScaleMode);
      il2cpp_runtime_helper_022b2b10(__this,uVar3);
    }
    else if (__v[6].klass != (Il2CppClass *)0x0) {
      UnityEngine_UIElements_Image__set_scaleMode
                ((UnityEngine_UIElements_Image_o *)__v[6].klass,value,(MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ad7ec == '\0') {
      il2cpp_runtime_helper_023445d0(&"Icon");
      g_data_057ad7ec = '\x01';
    }
    return;
  }
  uStack_50 = il2cpp_runtime_helper_022b2c90();
  pCStack_48 = (CustomLogic_CustomLogicIconBuiltin_o *)__v;
  if (g_data_057ad7f5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad7f5 = '\x01';
  }
  pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar2,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar2;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar2);
  return;
}


// CustomLogic.CustomLogicIconBuiltin.Bindings$$<__CreatePropertyBinding__ScaleMode>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicIconBuiltin_Bindings_____CreatePropertyBinding__ScaleMode_g____getter_3_0 (CustomLogic_CustomLogicIconBuiltin_o* __i, const MethodInfo* method);
// 0x41eb220

Il2CppObject *
CustomLogic_CustomLogicIconBuiltin_Bindings_____CreatePropertyBinding__ScaleMode_g____getter_3_0
          (CustomLogic_CustomLogicIconBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_Image_o *__this;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar1;
  int32_t value;
  System_Type_o *enumType;
  Il2CppObject *extraout_RAX;
  System_String_o *pSVar2;
  undefined8 uVar3;
  System_ArgumentException_o *__this_00;
  Il2CppObject *pIVar4;
  undefined8 uStack_38;
  CustomLogic_CustomLogicIconBuiltin_o *pCStack_30;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicIconBuiltin_o *)0x0) &&
     ((__i->fields)._image != (UnityEngine_UIElements_Image_o *)0x0)) {
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_4);
    return pIVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad7f4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad7f4 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)method,MethodInfo_Int32_ConvertTo_Int32);
  if (__i != (CustomLogic_CustomLogicIconBuiltin_o *)0x0) {
    if (g_data_057ad7eb == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeRef_ScaleMode);
      g_data_057ad7eb = '\x01';
    }
    handle.fields.value = TypeRef_ScaleMode.fields.value;
    if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
    uStack_38 = CONCAT44(value,(undefined4)uStack_38);
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_38 + 4);
    if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar1 = System_Enum__IsDefined(enumType,pIVar4,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      uStack_38 = CONCAT44(uStack_38._4_4_,value);
      pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_38);
      pSVar2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Invalid scale mode: {0}.");
      pSVar2 = System_String__Format(pSVar2,pIVar4,(MethodInfo *)0x0);
      uVar3 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
      __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar3);
      System_ArgumentException___ctor_3c12490(__this_00,pSVar2,(MethodInfo *)0x0);
      uVar3 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_ScaleMode);
      il2cpp_runtime_helper_022b2b10(__this_00,uVar3);
    }
    else {
      __this = (__i->fields)._image;
      if (__this != (UnityEngine_UIElements_Image_o *)0x0) {
        UnityEngine_UIElements_Image__set_scaleMode(__this,value,(MethodInfo *)0x0);
        return extraout_RAX;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ad7ec == '\0') {
      il2cpp_runtime_helper_023445d0(&"Icon");
      g_data_057ad7ec = '\x01';
    }
    return "Icon";
  }
  uStack_38 = il2cpp_runtime_helper_022b2c90();
  pCStack_30 = __i;
  if (g_data_057ad7f5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad7f5 = '\x01';
  }
  pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar4,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar4;
  pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar4);
  return pIVar4;
}


// CustomLogic.CustomLogicIconBuiltin.Bindings$$<__CreatePropertyBinding__ScaleMode>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicIconBuiltin_Bindings_____CreatePropertyBinding__ScaleMode_g____setter_3_1 (CustomLogic_CustomLogicIconBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x41eb260

void CustomLogic_CustomLogicIconBuiltin_Bindings_____CreatePropertyBinding__ScaleMode_g____setter_3_1
               (CustomLogic_CustomLogicIconBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_UIElements_Image_o *__this;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar1;
  int32_t value;
  System_Type_o *enumType;
  Il2CppObject *pIVar2;
  System_String_o *pSVar3;
  undefined8 uVar4;
  System_ArgumentException_o *__this_00;
  undefined8 uStack_30;
  CustomLogic_CustomLogicIconBuiltin_o *pCStack_28;
  
  if (g_data_057ad7f4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ad7f4 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_int_(__v,MethodInfo_Int32_ConvertTo_Int32);
  if (__i != (CustomLogic_CustomLogicIconBuiltin_o *)0x0) {
    if (g_data_057ad7eb == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeRef_ScaleMode);
      g_data_057ad7eb = '\x01';
    }
    handle.fields.value = TypeRef_ScaleMode.fields.value;
    if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
    uStack_30 = CONCAT44(value,(undefined4)uStack_30);
    pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_30 + 4);
    if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar1 = System_Enum__IsDefined(enumType,pIVar2,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      uStack_30 = CONCAT44(uStack_30._4_4_,value);
      pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_30);
      pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Invalid scale mode: {0}.");
      pSVar3 = System_String__Format(pSVar3,pIVar2,(MethodInfo *)0x0);
      uVar4 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
      __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar4);
      System_ArgumentException___ctor_3c12490(__this_00,pSVar3,(MethodInfo *)0x0);
      uVar4 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_ScaleMode);
      il2cpp_runtime_helper_022b2b10(__this_00,uVar4);
    }
    else {
      __this = (__i->fields)._image;
      if (__this != (UnityEngine_UIElements_Image_o *)0x0) {
        UnityEngine_UIElements_Image__set_scaleMode(__this,value,(MethodInfo *)0x0);
        return;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ad7ec == '\0') {
      il2cpp_runtime_helper_023445d0(&"Icon");
      g_data_057ad7ec = '\x01';
    }
    return;
  }
  uStack_30 = il2cpp_runtime_helper_022b2c90();
  pCStack_28 = __i;
  if (g_data_057ad7f5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad7f5 = '\x01';
  }
  pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar2,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar2;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar2);
  return;
}


// CustomLogic.CustomLogicIconBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicIconBuiltin___ctor (CustomLogic_CustomLogicIconBuiltin_o* __this, UnityEngine_UIElements_Image_o* image, const MethodInfo* method);
// 0x41ea500

void CustomLogic_CustomLogicIconBuiltin___ctor
               (CustomLogic_CustomLogicIconBuiltin_o *__this,UnityEngine_UIElements_Image_o *image,
               MethodInfo *method)

{
  CustomLogic_CustomLogicVisualElementBuiltin___ctor
            ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this,
             (UnityEngine_UIElements_VisualElement_o *)image,(MethodInfo *)0x0);
  (__this->fields)._image = image;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._image,image);
  (__this->fields)._currentIconPath = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  il2cpp_runtime_helper_022b4080(&(__this->fields)._currentIconPath);
  return;
}


// CustomLogic.CustomLogicIconBuiltin$$SetIcon
// il2cpp: CustomLogic_CustomLogicIconBuiltin_o* CustomLogic_CustomLogicIconBuiltin__SetIcon (CustomLogic_CustomLogicIconBuiltin_o* __this, System_String_o* iconPath, const MethodInfo* method);
// 0x41ea550

void CustomLogic_CustomLogicIconBuiltin__SetIcon
               (CustomLogic_CustomLogicIconBuiltin_o *__this,System_String_o *value,MethodInfo *method)

{
  UnityEngine_UIElements_Image_o *pUVar1;
  bool_conflict bVar2;
  UnityEngine_Texture_o *value_00;
  System_String_o *pSVar3;
  
  if (g_data_057ad7ea == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    il2cpp_runtime_helper_023445d0(&"Failed to load icon at path: ");
    g_data_057ad7ea = '\x01';
  }
  bVar2 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar2 = Utility_Util__IsValidResourcePath(value,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar3 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      value_00 = (UnityEngine_Texture_o *)
                 ApplicationManagers_ResourceManager__LoadAsset(pSVar3,value,1,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)value_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (((value_00 != (UnityEngine_Texture_o *)0x0) && ((char)bVar2 != '\0')) &&
         (value_00->klass == TypeInfo_Texture2D)) {
        pUVar1 = (__this->fields)._image;
        if (pUVar1 != (UnityEngine_UIElements_Image_o *)0x0) {
          UnityEngine_UIElements_Image__set_image(pUVar1,value_00,(MethodInfo *)0x0);
          (__this->fields)._currentIconPath = value;
          il2cpp_runtime_helper_022b4080(&(__this->fields)._currentIconPath,value);
          return;
        }
        goto label_041ea754;
      }
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Object__op_Inequality
                ((UnityEngine_Object_o *)value_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    }
    pSVar3 = System_String__Concat_3ae5ba0("Failed to load icon at path: ",value,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Debug__LogWarning((Il2CppObject *)pSVar3,(MethodInfo *)0x0);
  }
  else {
    pUVar1 = (__this->fields)._image;
    if (pUVar1 == (UnityEngine_UIElements_Image_o *)0x0) {
label_041ea754:
      il2cpp_runtime_helper_022b2c90();
      return;
    }
    UnityEngine_UIElements_Image__set_image(pUVar1,(UnityEngine_Texture_o *)0x0,(MethodInfo *)0x0);
    (__this->fields)._currentIconPath = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    il2cpp_runtime_helper_022b4080(&(__this->fields)._currentIconPath);
  }
  return;
}


// CustomLogic.CustomLogicIconBuiltin$$get_IconPath
// il2cpp: System_String_o* CustomLogic_CustomLogicIconBuiltin__get_IconPath (CustomLogic_CustomLogicIconBuiltin_o* __this, const MethodInfo* method);
// 0x41ea760

System_String_o *
CustomLogic_CustomLogicIconBuiltin__get_IconPath
          (CustomLogic_CustomLogicIconBuiltin_o *__this,MethodInfo *method)

{
  return (__this->fields)._currentIconPath;
}


// CustomLogic.CustomLogicIconBuiltin$$set_IconPath
// il2cpp: void CustomLogic_CustomLogicIconBuiltin__set_IconPath (CustomLogic_CustomLogicIconBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x41ea770

void CustomLogic_CustomLogicIconBuiltin__set_IconPath
               (CustomLogic_CustomLogicIconBuiltin_o *__this,System_String_o *value,MethodInfo *method)

{
  CustomLogic_CustomLogicIconBuiltin__SetIcon(__this,value,method);
  return;
}


// CustomLogic.CustomLogicIconBuiltin$$SetTintColor
// il2cpp: CustomLogic_CustomLogicIconBuiltin_o* CustomLogic_CustomLogicIconBuiltin__SetTintColor (CustomLogic_CustomLogicIconBuiltin_o* __this, CustomLogic_CustomLogicColorBuiltin_o* color, const MethodInfo* method);
// 0x41ea780

CustomLogic_CustomLogicIconBuiltin_o *
CustomLogic_CustomLogicIconBuiltin__SetTintColor
          (CustomLogic_CustomLogicIconBuiltin_o *__this,CustomLogic_CustomLogicColorBuiltin_o *color,
          MethodInfo *method)

{
  UnityEngine_UIElements_Image_o *pUVar1;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar2;
  System_Type_o *enumType;
  Il2CppObject *pIVar3;
  CustomLogic_CustomLogicIconBuiltin_o *extraout_RAX;
  System_String_o *pSVar4;
  undefined8 uVar5;
  System_ArgumentException_o *__this_00;
  undefined8 unaff_RBX;
  int32_t value;
  CustomLogic_CustomLogicIconBuiltin_o *__this_01;
  UnityEngine_Color_o value_00;
  int32_t iStack_50;
  int32_t iStack_4c;
  undefined8 uStack_48;
  
  __this_01 = __this;
  if ((color != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) &&
     (__this_01 = (CustomLogic_CustomLogicIconBuiltin_o *)(color->fields).Value,
     __this_01 != (CustomLogic_CustomLogicIconBuiltin_o *)0x0)) {
    pUVar1 = (__this->fields)._image;
    color = (CustomLogic_CustomLogicColorBuiltin_o *)0x0;
    value_00 = Utility_Color255__ToColor((Utility_Color255_o *)__this_01,(MethodInfo *)0x0);
    unaff_RBX = 0;
    if (pUVar1 != (UnityEngine_UIElements_Image_o *)0x0) {
      UnityEngine_UIElements_Image__set_tintColor(pUVar1,value_00,(MethodInfo *)0x0);
      return __this;
    }
  }
  value = (int32_t)color;
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (__this_01->fields)._image;
  if (pUVar1 != (UnityEngine_UIElements_Image_o *)0x0) {
    return (CustomLogic_CustomLogicIconBuiltin_o *)(ulong)*(uint *)&(pUVar1->fields).styleSheetList;
  }
  il2cpp_runtime_helper_022b2c90();
  uStack_48 = unaff_RBX;
  if (g_data_057ad7eb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_ScaleMode);
    g_data_057ad7eb = '\x01';
  }
  handle.fields.value = TypeRef_ScaleMode.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  iStack_4c = value;
  pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_4c);
  if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = System_Enum__IsDefined(enumType,pIVar3,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    iStack_50 = value;
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_50);
    pSVar4 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Invalid scale mode: {0}.");
    pSVar4 = System_String__Format(pSVar4,pIVar3,(MethodInfo *)0x0);
    uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar5);
    System_ArgumentException___ctor_3c12490(__this_00,pSVar4,(MethodInfo *)0x0);
    uVar5 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_ScaleMode);
    il2cpp_runtime_helper_022b2b10(__this_00,uVar5);
  }
  else {
    pUVar1 = (__this_01->fields)._image;
    if (pUVar1 != (UnityEngine_UIElements_Image_o *)0x0) {
      UnityEngine_UIElements_Image__set_scaleMode(pUVar1,value,(MethodInfo *)0x0);
      return extraout_RAX;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad7ec == '\0') {
    il2cpp_runtime_helper_023445d0(&"Icon");
    g_data_057ad7ec = '\x01';
  }
  return "Icon";
}


// CustomLogic.CustomLogicIconBuiltin$$get_ScaleMode
// il2cpp: int32_t CustomLogic_CustomLogicIconBuiltin__get_ScaleMode (CustomLogic_CustomLogicIconBuiltin_o* __this, const MethodInfo* method);
// 0x41ea7c0

int32_t CustomLogic_CustomLogicIconBuiltin__get_ScaleMode
                  (CustomLogic_CustomLogicIconBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_Image_o *pUVar1;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar2;
  int32_t extraout_EAX;
  System_Type_o *enumType;
  Il2CppObject *pIVar3;
  System_String_o *pSVar4;
  undefined8 uVar5;
  System_ArgumentException_o *__this_00;
  int32_t value;
  int32_t iStack_38;
  int32_t iStack_34;
  
  value = (int32_t)method;
  pUVar1 = (__this->fields)._image;
  if (pUVar1 != (UnityEngine_UIElements_Image_o *)0x0) {
    return *(int32_t *)&(pUVar1->fields).styleSheetList;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad7eb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_ScaleMode);
    g_data_057ad7eb = '\x01';
  }
  handle.fields.value = TypeRef_ScaleMode.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  iStack_34 = value;
  pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_34);
  if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = System_Enum__IsDefined(enumType,pIVar3,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    iStack_38 = value;
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_38);
    pSVar4 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Invalid scale mode: {0}.");
    pSVar4 = System_String__Format(pSVar4,pIVar3,(MethodInfo *)0x0);
    uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar5);
    System_ArgumentException___ctor_3c12490(__this_00,pSVar4,(MethodInfo *)0x0);
    uVar5 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_ScaleMode);
    il2cpp_runtime_helper_022b2b10(__this_00,uVar5);
  }
  else {
    pUVar1 = (__this->fields)._image;
    if (pUVar1 != (UnityEngine_UIElements_Image_o *)0x0) {
      UnityEngine_UIElements_Image__set_scaleMode(pUVar1,value,(MethodInfo *)0x0);
      return extraout_EAX;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad7ec == '\0') {
    il2cpp_runtime_helper_023445d0(&"Icon");
    g_data_057ad7ec = '\x01';
  }
  return (int32_t)"Icon";
}


// CustomLogic.CustomLogicIconBuiltin$$set_ScaleMode
// il2cpp: void CustomLogic_CustomLogicIconBuiltin__set_ScaleMode (CustomLogic_CustomLogicIconBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x41ea7e0

void CustomLogic_CustomLogicIconBuiltin__set_ScaleMode
               (CustomLogic_CustomLogicIconBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  UnityEngine_UIElements_Image_o *__this_00;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar1;
  System_Type_o *enumType;
  Il2CppObject *pIVar2;
  System_String_o *pSVar3;
  undefined8 uVar4;
  System_ArgumentException_o *__this_01;
  int32_t iStack_30;
  int32_t iStack_2c;
  
  if (g_data_057ad7eb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_ScaleMode);
    g_data_057ad7eb = '\x01';
  }
  handle.fields.value = TypeRef_ScaleMode.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  iStack_2c = value;
  pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_2c);
  if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = System_Enum__IsDefined(enumType,pIVar2,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    iStack_30 = value;
    pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_30);
    pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Invalid scale mode: {0}.");
    pSVar3 = System_String__Format(pSVar3,pIVar2,(MethodInfo *)0x0);
    uVar4 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
    __this_01 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar4);
    System_ArgumentException___ctor_3c12490(__this_01,pSVar3,(MethodInfo *)0x0);
    uVar4 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_ScaleMode);
    il2cpp_runtime_helper_022b2b10(__this_01,uVar4);
  }
  else {
    __this_00 = (__this->fields)._image;
    if (__this_00 != (UnityEngine_UIElements_Image_o *)0x0) {
      UnityEngine_UIElements_Image__set_scaleMode(__this_00,value,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad7ec == '\0') {
    il2cpp_runtime_helper_023445d0(&"Icon");
    g_data_057ad7ec = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicIconBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicIconBuiltin__get_ClassName (CustomLogic_CustomLogicIconBuiltin_o* __this, const MethodInfo* method);
// 0x41ea920

System_String_o *
CustomLogic_CustomLogicIconBuiltin__get_ClassName
          (CustomLogic_CustomLogicIconBuiltin_o *__this,MethodInfo *method)

{
  if (g_data_057ad7ec == '\0') {
    il2cpp_runtime_helper_023445d0(&"Icon");
    g_data_057ad7ec = '\x01';
  }
  return "Icon";
}


// CustomLogic.CustomLogicIconBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicIconBuiltin__get_IsAbstract (CustomLogic_CustomLogicIconBuiltin_o* __this, const MethodInfo* method);
// 0x41ea950

bool_conflict
CustomLogic_CustomLogicIconBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicIconBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicIconBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicIconBuiltin__get_IsStatic (CustomLogic_CustomLogicIconBuiltin_o* __this, const MethodInfo* method);
// 0x41ea960

bool_conflict
CustomLogic_CustomLogicIconBuiltin__get_IsStatic
          (CustomLogic_CustomLogicIconBuiltin_o *__this,MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicIconBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicIconBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicIconBuiltin_o* __this, const MethodInfo* method);
// 0x41ea970

bool_conflict
CustomLogic_CustomLogicIconBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicIconBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


