// Type: CustomLogic.CustomLogicCommandsBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicCommandsBuiltin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicCommandsBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicCommandsBuiltin_o* CustomLogic_CustomLogicCommandsBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x41b6310

CustomLogic_CustomLogicCommandsBuiltin_o *
CustomLogic_CustomLogicCommandsBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  uint in_EAX;
  bool_conflict bVar3;
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  System_String_o *str2;
  undefined8 uVar6;
  System_ArgumentException_o *__this_00;
  System_ArgumentException_o *pSVar7;
  System_Func_T__object____object__o *pSVar8;
  CustomLogic_CustomLogicCommandsBuiltin_o *pCVar9;
  System_ArgumentException_o **ppSVar10;
  undefined8 unaff_R15;
  System_ArgumentException_o *pSStack_30;
  System_ArgumentException_o *pSStack_28;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (g_data_057ad56a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicCommandsBuiltin);
    g_data_057ad56a = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (args->max_length == 0) {
    __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicCommandsBuiltin);
    if (g_data_057ad565 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ad565 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
    return (CustomLogic_CustomLogicCommandsBuiltin_o *)__this;
  }
  il2cpp_runtime_helper_01f681a0(args);
  uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
  pSVar4 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicCommandsBuiltin constructor found that takes ");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  pSVar4 = System_String__Concat_3af7150(pSVar5,pSVar4,str2,(MethodInfo *)0x0);
  uVar6 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar6);
  System_ArgumentException___ctor_3c12490(__this_00,pSVar4,(MethodInfo *)0x0);
  uVar6 = il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicCommandsBuiltin_CreateInstance);
  pSVar7 = __this_00;
  pSStack_30 = (System_ArgumentException_o *)il2cpp_runtime_helper_022b2b10(__this_00,uVar6);
  ppSVar10 = &pSStack_30;
  pSStack_28 = __this_00;
  if (g_data_057ad56b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"ParseCommands");
    il2cpp_runtime_helper_023445d0(&"RegisterCommand");
    g_data_057ad56b = '\x01';
  }
  bVar3 = System_String__op_Equality((System_String_o *)pSVar7,"RegisterCommand",(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    bVar3 = System_String__op_Equality((System_String_o *)pSVar7,"ParseCommands",(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      pSStack_28 = (System_ArgumentException_o *)pSVar4;
      if (g_data_057ad56d == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicCommandsBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicCommandsBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCommandsBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__ParseCommands_b__3_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad56d = '\x01';
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
        pSVar8 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCommandsBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar8;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x10,pSVar8);
      }
      pCVar9 = (CustomLogic_CustomLogicCommandsBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicCommandsBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                ((CustomLogic_CLMethodBinding_T__o *)pCVar9,pSVar8,MethodInfo_CLMethodBinding_1_CustomLogicCommandsBuiltin);
      return pCVar9;
    }
    pSVar4 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicCommandsBuiltin not found");
    pSVar4 = System_String__Concat_3af7150(pSVar4,(System_String_o *)pSVar7,pSVar5,(MethodInfo *)0x0);
    uVar6 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pSVar7 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar6);
    System_Exception___ctor_3cf6120((System_Exception_o *)pSVar7,pSVar4,(MethodInfo *)0x0);
    uVar6 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
    il2cpp_runtime_helper_022b2b10(pSVar7,uVar6);
  }
  else if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    ppSVar10 = (System_ArgumentException_o **)&uStack_18;
    pSVar7 = pSStack_28;
  }
  else {
    ppSVar10 = (System_ArgumentException_o **)&uStack_18;
    pSVar7 = pSStack_28;
  }
  *(undefined8 *)((long)ppSVar10 + -8) = unaff_R15;
  *(System_String_o **)((long)ppSVar10 + -0x10) = pSVar4;
  *(System_ArgumentException_o **)((long)ppSVar10 + -0x18) = pSVar7;
  if (g_data_057ad56c == '\0') {
    *(undefined8 *)((long)ppSVar10 + -0x20) = 0x41b6619;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicCommandsBuiltin);
    *(undefined8 *)((long)ppSVar10 + -0x20) = 0x41b6625;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicCommandsBuiltin);
    *(undefined8 *)((long)ppSVar10 + -0x20) = 0x41b6631;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCommandsBuiltin_object_object);
    *(undefined8 *)((long)ppSVar10 + -0x20) = 0x41b663d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__RegisterCommand_b__2_0);
    *(undefined8 *)((long)ppSVar10 + -0x20) = 0x41b6649;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad56c = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    *(undefined8 *)((long)ppSVar10 + -0x20) = 0x41b666c;
    il2cpp_runtime_helper_02337ed0();
    pSVar8 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  else {
    pSVar8 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  if (pSVar8 == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      *(undefined8 *)((long)ppSVar10 + -0x20) = 0x41b65bb;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)ppSVar10 + -0x20) = 0x41b65d7;
    pSVar8 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCommandsBuiltin_object_object);
    *(undefined8 *)((long)ppSVar10 + -0x20) = 0x41b65f1;
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar8;
    *(undefined8 *)((long)ppSVar10 + -0x20) = 0x41b660b;
    il2cpp_runtime_helper_022b4080(lVar2 + 8,pSVar8);
  }
  *(undefined8 *)((long)ppSVar10 + -0x20) = 0x41b6692;
  pCVar9 = (CustomLogic_CustomLogicCommandsBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicCommandsBuiltin);
  *(undefined8 *)((long)ppSVar10 + -0x20) = 0x41b66aa;
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)pCVar9,pSVar8,MethodInfo_CLMethodBinding_1_CustomLogicCommandsBuiltin);
  return pCVar9;
}


// CustomLogic.CustomLogicCommandsBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicCommandsBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x41b6900

void CustomLogic_CustomLogicCommandsBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057ad56f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad56f = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicCommandsBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicCommandsBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicCommandsBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x41b6970

void CustomLogic_CustomLogicCommandsBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicCommandsBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicCommandsBuiltin.Bindings.<>c$$<__CreateMethodBinding__RegisterCommand>b__2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCommandsBuiltin_Bindings___c_____CreateMethodBinding__RegisterCommand_b__2_0 (CustomLogic_CustomLogicCommandsBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCommandsBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41b6980

Il2CppObject *
CustomLogic_CustomLogicCommandsBuiltin_Bindings___c_____CreateMethodBinding__RegisterCommand_b__2_0
          (CustomLogic_CustomLogicCommandsBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCommandsBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  undefined8 in_RAX;
  Il2CppObject *pIVar3;
  System_String_o *text;
  System_String_array *parameterValues;
  CustomLogic_CustomLogicListBuiltin_o *__this_00;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  long extraout_RDX;
  undefined8 uStack_38;
  
  uStack_38 = in_RAX;
  if (g_data_057ad570 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    il2cpp_runtime_helper_023445d0(&"None");
    __this = (CustomLogic_CustomLogicCommandsBuiltin_Bindings___c_o *)&"";
    il2cpp_runtime_helper_023445d0();
    g_data_057ad570 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      __this = (CustomLogic_CustomLogicCommandsBuiltin_Bindings___c_o *)__a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)__this,MethodInfo_String_ConvertTo_String);
      if (1 < (uint)__a->max_length) {
        CustomLogic_CustomLogicEvaluator__ConvertTo_object_(__a->m_Items[1],MethodInfo_UserMethod_ConvertTo_UserMethod);
        if (2 < (int)__a->max_length) {
          pIVar3 = __a->m_Items[2];
          if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar3,MethodInfo_String_ConvertTo_String);
          if (3 < (int)__a->max_length) {
            pIVar3 = __a->m_Items[3];
            if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar3,MethodInfo_String_ConvertTo_String);
          }
        }
        bVar2 = CustomLogic_CustomLogicCommandsBuiltin__RegisterCommand();
        uStack_38 = CONCAT17((char)bVar2,(undefined7)uStack_38);
        pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_38 + 7);
        return pIVar3;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad571 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicCommandsBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad571 = '\x01';
  }
  if (extraout_RDX == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(extraout_RDX + 0x18) != 0) {
    pIVar3 = *(Il2CppObject **)(extraout_RDX + 0x20);
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    text = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar3,MethodInfo_String_ConvertTo_String);
    if (g_data_057ad567 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
      g_data_057ad567 = '\x01';
    }
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    parameterValues = GameManagers_ChatManager__ParseCommandArgs(text,(MethodInfo *)0x0);
    __this_00 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
    CustomLogic_CustomLogicListBuiltin___ctor_3fc0a50
              (__this_00,(System_Object_array *)parameterValues,(MethodInfo *)0x0);
    return (Il2CppObject *)__this_00;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad572 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ad572 = '\x01';
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    return extraout_RAX_00;
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return extraout_RAX;
}


// CustomLogic.CustomLogicCommandsBuiltin.Bindings.<>c$$<__CreateMethodBinding__ParseCommands>b__3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCommandsBuiltin_Bindings___c_____CreateMethodBinding__ParseCommands_b__3_0 (CustomLogic_CustomLogicCommandsBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCommandsBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41b6b00

Il2CppObject *
CustomLogic_CustomLogicCommandsBuiltin_Bindings___c_____CreateMethodBinding__ParseCommands_b__3_0
          (CustomLogic_CustomLogicCommandsBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCommandsBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *obj;
  System_String_o *text;
  System_String_array *parameterValues;
  CustomLogic_CustomLogicListBuiltin_o *__this_00;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  
  if (g_data_057ad571 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicCommandsBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad571 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    text = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo_object_(obj,MethodInfo_String_ConvertTo_String);
    if (g_data_057ad567 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
      g_data_057ad567 = '\x01';
    }
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    parameterValues = GameManagers_ChatManager__ParseCommandArgs(text,(MethodInfo *)0x0);
    __this_00 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
    CustomLogic_CustomLogicListBuiltin___ctor_3fc0a50
              (__this_00,(System_Object_array *)parameterValues,(MethodInfo *)0x0);
    return (Il2CppObject *)__this_00;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ad572 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ad572 = '\x01';
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  if (iVar1 != 0) {
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  il2cpp_runtime_helper_02337ed0();
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return extraout_RAX_00;
}


// CustomLogic.CustomLogicCommandsBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicCommandsBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x41b6430

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicCommandsBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  bool_conflict bVar3;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar4;
  System_Func_T__object____object__o *pSVar5;
  CustomLogic_CLMethodBinding_T__o *pCVar6;
  System_Exception_o *unaff_RBX;
  System_String_o *unaff_R14;
  undefined8 unaff_R15;
  undefined1 auStack_18 [8];
  
  if (g_data_057ad56b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"ParseCommands");
    il2cpp_runtime_helper_023445d0(&"RegisterCommand");
    g_data_057ad56b = '\x01';
  }
  bVar3 = System_String__op_Equality(name,"RegisterCommand",(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    bVar3 = System_String__op_Equality(name,"ParseCommands",(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad56d == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicCommandsBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicCommandsBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCommandsBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__ParseCommands_b__3_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad56d = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar5 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
      }
      else {
        pSVar5 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
      }
      if (pSVar5 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar5 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCommandsBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar5;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x10,pSVar5);
      }
      pCVar6 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicCommandsBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(pCVar6,pSVar5,MethodInfo_CLMethodBinding_1_CustomLogicCommandsBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
    str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicCommandsBuiltin not found");
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
  if (g_data_057ad56c == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41b6619;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicCommandsBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41b6625;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicCommandsBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41b6631;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCommandsBuiltin_object_object);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41b663d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__RegisterCommand_b__2_0);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41b6649;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad56c = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41b666c;
    il2cpp_runtime_helper_02337ed0();
    pSVar5 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  else {
    pSVar5 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  if (pSVar5 == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41b65bb;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41b65d7;
    pSVar5 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCommandsBuiltin_object_object);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41b65f1;
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar5;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41b660b;
    il2cpp_runtime_helper_022b4080(lVar2 + 8,pSVar5);
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41b6692;
  pCVar6 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicCommandsBuiltin);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41b66aa;
  CustomLogic_CLMethodBinding_object____ctor(pCVar6,pSVar5,MethodInfo_CLMethodBinding_1_CustomLogicCommandsBuiltin);
  return (CustomLogic_ICLMemberBinding_o *)pCVar6;
}


// CustomLogic.CustomLogicCommandsBuiltin.Bindings$$__CreateMethodBinding__RegisterCommand
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCommandsBuiltin__o* CustomLogic_CustomLogicCommandsBuiltin_Bindings____CreateMethodBinding__RegisterCommand (const MethodInfo* method);
// 0x41b6570

CustomLogic_CLMethodBinding_CustomLogicCommandsBuiltin__o *
CustomLogic_CustomLogicCommandsBuiltin_Bindings____CreateMethodBinding__RegisterCommand(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicCommandsBuiltin__o *__this;
  
  if (g_data_057ad56c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicCommandsBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicCommandsBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCommandsBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__RegisterCommand_b__2_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad56c = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCommandsBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicCommandsBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicCommandsBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicCommandsBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicCommandsBuiltin.Bindings$$__CreateMethodBinding__ParseCommands
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCommandsBuiltin__o* CustomLogic_CustomLogicCommandsBuiltin_Bindings____CreateMethodBinding__ParseCommands (const MethodInfo* method);
// 0x41b66c0

CustomLogic_CLMethodBinding_CustomLogicCommandsBuiltin__o *
CustomLogic_CustomLogicCommandsBuiltin_Bindings____CreateMethodBinding__ParseCommands(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicCommandsBuiltin__o *__this;
  
  if (g_data_057ad56d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicCommandsBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicCommandsBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCommandsBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__ParseCommands_b__3_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad56d = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCommandsBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x10) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x10,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicCommandsBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicCommandsBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicCommandsBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicCommandsBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicCommandsBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x41b6810

void CustomLogic_CustomLogicCommandsBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  Il2CppObject *__this_00;
  
  if (g_data_057ad56e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&"ParseCommands");
    il2cpp_runtime_helper_023445d0(&"RegisterCommand");
    g_data_057ad56e = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add(__this,"RegisterCommand",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"ParseCommands",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad56f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad56f = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this_00;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this_00);
  return;
}


// CustomLogic.CustomLogicCommandsBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicCommandsBuiltin___ctor (CustomLogic_CustomLogicCommandsBuiltin_o* __this, const MethodInfo* method);
// 0x41b6070

void CustomLogic_CustomLogicCommandsBuiltin___ctor
               (CustomLogic_CustomLogicCommandsBuiltin_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad565 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ad565 = '\x01';
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  if (iVar1 != 0) {
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicCommandsBuiltin$$RegisterCommand
// il2cpp: bool CustomLogic_CustomLogicCommandsBuiltin__RegisterCommand (System_String_o* command, CustomLogic_UserMethod_o* method, System_String_o* description, System_String_o* autofill, const MethodInfo* method);
// 0x41b60e0

bool_conflict CustomLogic_CustomLogicCommandsBuiltin__RegisterCommand(void)

{
  byte bVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  System_Collections_Generic_HashSet_object__o *pSVar3;
  long lVar4;
  System_Collections_Generic_HashSet_Enumerator_T__o __this;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  bool_conflict bVar5;
  uint uVar6;
  bool_conflict extraout_EAX;
  System_String_array *parameterValues;
  CustomLogic_CustomLogicListBuiltin_o *__this_03;
  System_String_o *name;
  GameManagers_ChatManager_CLCommandAttribute_o *__this_04;
  long *plVar7;
  System_String_o *in_RCX;
  System_String_o *in_RDX;
  int autofillType;
  CustomLogic_UserMethod_o *in_RSI;
  System_String_o *in_RDI;
  System_String_o *pSVar8;
  undefined1 auVar9 [12];
  System_Collections_Generic_HashSet_T__o *pSVar10;
  Il2CppMethodPointer pIVar11;
  Il2CppObject *pIVar12;
  Il2CppObject *key;
  System_String_o *pSStack_38;
  undefined8 uStack_30;
  
  pSVar8 = in_RDI;
  if (g_data_057ad566 == '\0') {
    uStack_30 = 0x41b610a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
    uStack_30 = 0x41b6116;
    il2cpp_runtime_helper_023445d0(&"playeridlist");
    pSVar8 = (System_String_o *)&"playerid";
    uStack_30 = 0x41b6122;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad566 = '\x01';
  }
  if ((in_RCX == (System_String_o *)0x0) &&
     (in_RCX = (System_String_o *)**(long **)(g_data_057b9c00 + 0xb8), in_RCX == (System_String_o *)0x0)) {
    uStack_30 = 0x41b61c7;
    il2cpp_runtime_helper_022b2c90();
    pSStack_38 = in_RCX;
    if (g_data_057ad567 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
      g_data_057ad567 = '\x01';
    }
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    parameterValues = GameManagers_ChatManager__ParseCommandArgs(pSVar8,(MethodInfo *)0x0);
    __this_03 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
    CustomLogic_CustomLogicListBuiltin___ctor_3fc0a50
              (__this_03,(System_Object_array *)parameterValues,(MethodInfo *)0x0);
    return (bool_conflict)__this_03;
  }
  uStack_30 = 0x41b6155;
  pSVar8 = System_String__ToLower(in_RCX,(MethodInfo *)0x0);
  uStack_30 = 0x41b616c;
  bVar5 = System_String__op_Equality(pSVar8,"playerid",(MethodInfo *)0x0);
  autofillType = 1;
  if ((char)bVar5 == '\0') {
    uStack_30 = 0x41b6189;
    uVar6 = System_String__op_Equality(pSVar8,"playeridlist",(MethodInfo *)0x0);
    autofillType = (uVar6 & 0xff) * 2;
  }
  if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
    uStack_30 = 0x41b61a6;
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057aef65 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLCommandAttribute);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    g_data_057aef65 = '\x01';
  }
  pSStack_38 = (System_String_o *)0x0;
  bVar5 = System_String__IsNullOrWhiteSpace(in_RDI,(MethodInfo *)0x0);
  if (in_RSI == (CustomLogic_UserMethod_o *)0x0) {
    return 0;
  }
  if ((char)bVar5 != '\0') {
    return 0;
  }
  if ((in_RDI != (System_String_o *)0x0) &&
     (pSVar8 = System_String__Trim(in_RDI,(MethodInfo *)0x0), pSVar8 != (System_String_o *)0x0)) {
    pSVar8 = System_String__ToLower(pSVar8,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_ChatManager + 0xb8) + 0x70);
    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      bVar5 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                        (pSVar2,(Il2CppObject *)pSVar8,(Il2CppObject **)&pSStack_38,MethodInfo_Boolean_TryGetValue);
      if ((char)bVar5 != '\0') {
        if (pSStack_38 == (System_String_o *)0x0) {
          return 0;
        }
        bVar1 = (TypeInfo_CLCommandAttribute->_2).naturalAligment;
        if ((pSStack_38->klass->_2).naturalAligment < bVar1) {
          return 0;
        }
        if ((pSStack_38->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CLCommandAttribute) {
          return 0;
        }
      }
      if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_ChatManager + 0xb8) + 0x70);
      name = System_String__Trim(in_RDI,(MethodInfo *)0x0);
      if (in_RDX == (System_String_o *)0x0) {
        in_RDX = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      }
      __this_04 = (GameManagers_ChatManager_CLCommandAttribute_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLCommandAttribute);
      GameManagers_ChatManager_CLCommandAttribute___ctor
                (__this_04,name,in_RDX,in_RSI,autofillType,(MethodInfo *)0x0);
      if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (pSVar2,(Il2CppObject *)pSVar8,(Il2CppObject *)__this_04,MethodInfo_Void_set_Item);
        if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar3 = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_ChatManager + 0xb8) + 0xf8);
        if (pSVar3 != (System_Collections_Generic_HashSet_object__o *)0x0) {
          System_Collections_Generic_HashSet_object___Add(pSVar3,(Il2CppObject *)pSVar8,MethodInfo_Boolean_Add);
          return 0x5577701;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aef66 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_System_String_GetEnumerator);
    g_data_057aef66 = '\x01';
  }
  pSVar10 = (System_Collections_Generic_HashSet_T__o *)0x0;
  pIVar11 = (Il2CppMethodPointer)0x0;
  pIVar12 = (Il2CppObject *)0x0;
  if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar3 = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_ChatManager + 0xb8) + 0xf8);
  if (pSVar3 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)&stack0xffffffffffffff70,pSVar3,
               MethodInfo_HashSet_1_T_Enumerator_System_String_GetEnumerator);
    key = pIVar12;
    while( true ) {
      __this.fields._8_8_ = pIVar11;
      __this.fields._set = pSVar10;
      __this.fields._current = key;
      bVar5 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                        (__this,(MethodInfo_3219C40 *)&stack0xffffffffffffff70);
      if ((char)bVar5 == '\0') {
        __this_00.fields._8_8_ = pIVar11;
        __this_00.fields._set = pSVar10;
        __this_00.fields._current = key;
        System_Collections_Generic_HashSet_Enumerator_object___Dispose
                  (__this_00,(MethodInfo_3219C30 *)&stack0xffffffffffffff70);
        goto label_0454aa79;
      }
      pIVar12 = key;
      if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_ChatManager + 0xb8) + 0x70);
      if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
      System_Collections_Generic_Dictionary_object__object___Remove(pSVar2,key,MethodInfo_Boolean_Remove);
      key = pIVar12;
    }
    il2cpp_runtime_helper_022b2c90();
  }
  do {
    auVar9 = il2cpp_runtime_helper_022b2c90();
    if (auVar9._8_4_ != 1) {
label_0454ab20:
      __this_02.fields._8_8_ = pIVar11;
      __this_02.fields._set = pSVar10;
      __this_02.fields._current = pIVar12;
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                (__this_02,(MethodInfo_3219C30 *)&stack0xffffffffffffff70);
      _Unwind_Resume(auVar9._0_8_);
    }
    plVar7 = (long *)__cxa_begin_catch(auVar9._0_8_);
    lVar4 = *plVar7;
    __cxa_end_catch();
    __this_01.fields._8_8_ = pIVar11;
    __this_01.fields._set = pSVar10;
    __this_01.fields._current = pIVar12;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_01,(MethodInfo_3219C30 *)&stack0xffffffffffffff70);
    key = pIVar12;
    if (lVar4 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar4);
      goto label_0454ab20;
    }
label_0454aa79:
    pIVar12 = key;
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pIVar12 = key;
    }
    pSVar3 = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_ChatManager + 0xb8) + 0xf8);
    if (pSVar3 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___Clear(pSVar3,MethodInfo_Void_Clear);
      return extraout_EAX;
    }
  } while( true );
}


// CustomLogic.CustomLogicCommandsBuiltin$$ParseCommands
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicCommandsBuiltin__ParseCommands (System_String_o* text, const MethodInfo* method);
// 0x41b61d0

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicCommandsBuiltin__ParseCommands(System_String_o *text,MethodInfo *method)

{
  System_String_array *parameterValues;
  CustomLogic_CustomLogicListBuiltin_o *__this;
  
  if (g_data_057ad567 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
    g_data_057ad567 = '\x01';
  }
  if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  parameterValues = GameManagers_ChatManager__ParseCommandArgs(text,(MethodInfo *)0x0);
  __this = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor_3fc0a50
            (__this,(System_Object_array *)parameterValues,(MethodInfo *)0x0);
  return __this;
}


// CustomLogic.CustomLogicCommandsBuiltin$$ClearCommands
// il2cpp: void CustomLogic_CustomLogicCommandsBuiltin__ClearCommands (const MethodInfo* method);
// 0x41b6250

void CustomLogic_CustomLogicCommandsBuiltin__ClearCommands(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad568 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
    g_data_057ad568 = '\x01';
    iVar1 = *(int *)(TypeInfo_ChatManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ChatManager + 0xe4);
  }
  if (iVar1 != 0) {
    GameManagers_ChatManager__ClearCustomCommands((MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  GameManagers_ChatManager__ClearCustomCommands((MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicCommandsBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicCommandsBuiltin__get_ClassName (CustomLogic_CustomLogicCommandsBuiltin_o* __this, const MethodInfo* method);
// 0x41b62b0

System_String_o *
CustomLogic_CustomLogicCommandsBuiltin__get_ClassName
          (CustomLogic_CustomLogicCommandsBuiltin_o *__this,MethodInfo *method)

{
  if (g_data_057ad569 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Commands");
    g_data_057ad569 = '\x01';
  }
  return "Commands";
}


// CustomLogic.CustomLogicCommandsBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicCommandsBuiltin__get_IsAbstract (CustomLogic_CustomLogicCommandsBuiltin_o* __this, const MethodInfo* method);
// 0x41b62e0

bool_conflict
CustomLogic_CustomLogicCommandsBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicCommandsBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicCommandsBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicCommandsBuiltin__get_IsStatic (CustomLogic_CustomLogicCommandsBuiltin_o* __this, const MethodInfo* method);
// 0x41b62f0

bool_conflict
CustomLogic_CustomLogicCommandsBuiltin__get_IsStatic
          (CustomLogic_CustomLogicCommandsBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicCommandsBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicCommandsBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicCommandsBuiltin_o* __this, const MethodInfo* method);
// 0x41b6300

bool_conflict
CustomLogic_CustomLogicCommandsBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicCommandsBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


