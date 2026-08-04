// Type: CustomLogic.CustomLogicCutsceneBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicCutsceneBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicCutsceneBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicCutsceneBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicCutsceneBuiltin_o* CustomLogic_CustomLogicCutsceneBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x41b71a0

CustomLogic_CustomLogicCutsceneBuiltin_o *
CustomLogic_CustomLogicCutsceneBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

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
  CustomLogic_CustomLogicCutsceneBuiltin_o *pCVar9;
  System_ArgumentException_o **ppSVar10;
  undefined8 unaff_R15;
  System_ArgumentException_o *pSStack_30;
  System_ArgumentException_o *pSStack_28;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (g_data_057ad57a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicCutsceneBuiltin);
    g_data_057ad57a = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (args->max_length == 0) {
    __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicCutsceneBuiltin);
    if (g_data_057ad572 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ad572 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
    return (CustomLogic_CustomLogicCutsceneBuiltin_o *)__this;
  }
  il2cpp_runtime_helper_01f681a0(args);
  uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
  pSVar4 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicCutsceneBuiltin constructor found that takes ");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  pSVar4 = System_String__Concat_3af7150(pSVar5,pSVar4,str2,(MethodInfo *)0x0);
  uVar6 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar6);
  System_ArgumentException___ctor_3c12490(__this_00,pSVar4,(MethodInfo *)0x0);
  uVar6 = il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicCutsceneBuiltin_CreateInstance);
  pSVar7 = __this_00;
  pSStack_30 = (System_ArgumentException_o *)il2cpp_runtime_helper_022b2b10(__this_00,uVar6);
  ppSVar10 = &pSStack_30;
  pSStack_28 = __this_00;
  if (g_data_057ad57b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"ShowDialogue");
    il2cpp_runtime_helper_023445d0(&"Start");
    il2cpp_runtime_helper_023445d0(&"ShowDialogueForTime");
    il2cpp_runtime_helper_023445d0(&"HideDialogue");
    g_data_057ad57b = '\x01';
  }
  bVar3 = System_String__op_Equality((System_String_o *)pSVar7,"Start",(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    bVar3 = System_String__op_Equality((System_String_o *)pSVar7,"ShowDialogue",(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057ad57d == '\0') {
        pSStack_28 = (System_ArgumentException_o *)pSVar4;
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicCutsceneBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicCutsceneBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCutsceneBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__ShowDialogue_b__3_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad57d = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
        pSStack_28 = (System_ArgumentException_o *)pSVar4;
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
        pSVar8 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCutsceneBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar8;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x10,pSVar8);
      }
      pCVar9 = (CustomLogic_CustomLogicCutsceneBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicCutsceneBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                ((CustomLogic_CLMethodBinding_T__o *)pCVar9,pSVar8,MethodInfo_CLMethodBinding_1_CustomLogicCutsceneBuiltin);
      return pCVar9;
    }
    bVar3 = System_String__op_Equality((System_String_o *)pSVar7,"ShowDialogueForTime",(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057ad57e == '\0') {
        pSStack_28 = (System_ArgumentException_o *)pSVar4;
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicCutsceneBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicCutsceneBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCutsceneBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__ShowDialogueForTime_b__4_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad57e = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
        pSStack_28 = (System_ArgumentException_o *)pSVar4;
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar8 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
      }
      else {
        pSVar8 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
      }
      if (pSVar8 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar8 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCutsceneBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar8;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x18,pSVar8);
      }
      pCVar9 = (CustomLogic_CustomLogicCutsceneBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicCutsceneBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                ((CustomLogic_CLMethodBinding_T__o *)pCVar9,pSVar8,MethodInfo_CLMethodBinding_1_CustomLogicCutsceneBuiltin);
      return pCVar9;
    }
    bVar3 = System_String__op_Equality((System_String_o *)pSVar7,"HideDialogue",(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057ad57f == '\0') {
        pSStack_28 = (System_ArgumentException_o *)pSVar4;
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicCutsceneBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicCutsceneBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCutsceneBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__HideDialogue_b__5_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad57f = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
        pSStack_28 = (System_ArgumentException_o *)pSVar4;
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar8 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
      }
      else {
        pSVar8 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
      }
      if (pSVar8 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar8 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCutsceneBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar8;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x20,pSVar8);
      }
      pCVar9 = (CustomLogic_CustomLogicCutsceneBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicCutsceneBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                ((CustomLogic_CLMethodBinding_T__o *)pCVar9,pSVar8,MethodInfo_CLMethodBinding_1_CustomLogicCutsceneBuiltin);
      return pCVar9;
    }
    pSVar4 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicCutsceneBuiltin not found");
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
  if (g_data_057ad57c == '\0') {
    *(undefined8 *)((long)ppSVar10 + -0x20) = 0x41b7549;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicCutsceneBuiltin);
    *(undefined8 *)((long)ppSVar10 + -0x20) = 0x41b7555;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicCutsceneBuiltin);
    *(undefined8 *)((long)ppSVar10 + -0x20) = 0x41b7561;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCutsceneBuiltin_object_object);
    *(undefined8 *)((long)ppSVar10 + -0x20) = 0x41b756d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Start_b__2_0);
    *(undefined8 *)((long)ppSVar10 + -0x20) = 0x41b7579;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad57c = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    *(undefined8 *)((long)ppSVar10 + -0x20) = 0x41b759c;
    il2cpp_runtime_helper_02337ed0();
    pSVar8 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  else {
    pSVar8 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  if (pSVar8 == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      *(undefined8 *)((long)ppSVar10 + -0x20) = 0x41b74eb;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)ppSVar10 + -0x20) = 0x41b7507;
    pSVar8 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCutsceneBuiltin_object_object);
    *(undefined8 *)((long)ppSVar10 + -0x20) = 0x41b7521;
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar8;
    *(undefined8 *)((long)ppSVar10 + -0x20) = 0x41b753b;
    il2cpp_runtime_helper_022b4080(lVar2 + 8,pSVar8);
  }
  *(undefined8 *)((long)ppSVar10 + -0x20) = 0x41b75c2;
  pCVar9 = (CustomLogic_CustomLogicCutsceneBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicCutsceneBuiltin);
  *(undefined8 *)((long)ppSVar10 + -0x20) = 0x41b75da;
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)pCVar9,pSVar8,MethodInfo_CLMethodBinding_1_CustomLogicCutsceneBuiltin);
  return pCVar9;
}


// CustomLogic.CustomLogicCutsceneBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x41b7b10

void CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057ad581 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad581 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicCutsceneBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x41b7b80

void CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicCutsceneBuiltin.Bindings.<>c$$<__CreateMethodBinding__Start>b__2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_____CreateMethodBinding__Start_b__2_0 (CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCutsceneBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41b7b90

Il2CppObject *
CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_____CreateMethodBinding__Start_b__2_0
          (CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCutsceneBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_MonoBehaviour_o *__this_00;
  uint uVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o *content;
  MethodInfo *icon;
  System_Collections_IEnumerator_o *routine;
  Il2CppObject *pIVar4;
  long extraout_RDX;
  long extraout_RDX_00;
  MethodInfo *pMVar5;
  MethodInfo *pMVar6;
  MethodInfo *in_R8;
  float time;
  
  pMVar5 = (MethodInfo *)__c;
  if (g_data_057ad582 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad582 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      __this = (CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_o *)__a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar5 = MethodInfo_String_ConvertTo_String;
      pSVar2 = (System_String_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         ((Il2CppObject *)__this,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
      if (1 < (uint)__a->max_length) {
        __this = (CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_o *)__a->m_Items[1];
        pMVar5 = MethodInfo_Boolean_ConvertTo_Boolean;
        uVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                          ((Il2CppObject *)__this,(MethodInfo_24EE570 *)MethodInfo_Boolean_ConvertTo_Boolean);
        if (__c != (CustomLogic_CustomLogicCutsceneBuiltin_o *)0x0) {
          CustomLogic_CustomLogicCutsceneBuiltin__Start(__c,pSVar2,uVar1 & 0xff,method);
          return (Il2CppObject *)0x0;
        }
        goto label_041b7c44;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_041b7c44:
  il2cpp_runtime_helper_022b2c90();
  pMVar6 = pMVar5;
  if (g_data_057ad583 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad583 = '\x01';
  }
  if (extraout_RDX != 0) {
    if (*(int *)(extraout_RDX + 0x18) != 0) {
      __this = *(CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_o **)(extraout_RDX + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar6 = MethodInfo_String_ConvertTo_String;
      pSVar2 = (System_String_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         ((Il2CppObject *)__this,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(extraout_RDX + 0x18)) {
        __this = *(CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_o **)(extraout_RDX + 0x28);
        pMVar6 = MethodInfo_String_ConvertTo_String;
        pSVar3 = (System_String_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           ((Il2CppObject *)__this,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
        if (2 < *(uint *)(extraout_RDX + 0x18)) {
          __this = *(CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_o **)(extraout_RDX + 0x30);
          pMVar6 = MethodInfo_String_ConvertTo_String;
          content = (System_String_o *)
                    CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                              ((Il2CppObject *)__this,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
          if (pMVar5 != (MethodInfo *)0x0) {
            CustomLogic_CustomLogicCutsceneBuiltin__ShowDialogue
                      ((CustomLogic_CustomLogicCutsceneBuiltin_o *)__this,pSVar2,pSVar3,content,in_R8);
            return (Il2CppObject *)0x0;
          }
          goto label_041b7d15;
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_041b7d15:
  il2cpp_runtime_helper_022b2c90();
  pMVar5 = pMVar6;
  if (g_data_057ad584 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad584 = '\x01';
  }
  if (extraout_RDX_00 != 0) {
    if (*(int *)(extraout_RDX_00 + 0x18) != 0) {
      __this = *(CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_o **)(extraout_RDX_00 + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar5 = MethodInfo_String_ConvertTo_String;
      icon = (MethodInfo *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)__this,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(extraout_RDX_00 + 0x18)) {
        __this = *(CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_o **)(extraout_RDX_00 + 0x28);
        pMVar5 = MethodInfo_String_ConvertTo_String;
        pSVar2 = (System_String_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           ((Il2CppObject *)__this,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
        if (2 < *(uint *)(extraout_RDX_00 + 0x18)) {
          __this = *(CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_o **)(extraout_RDX_00 + 0x30);
          pMVar5 = MethodInfo_String_ConvertTo_String;
          pSVar3 = (System_String_o *)
                   CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                             ((Il2CppObject *)__this,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
          if (3 < *(uint *)(extraout_RDX_00 + 0x18)) {
            __this = *(CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_o **)(extraout_RDX_00 + 0x38);
            pMVar5 = MethodInfo_Single_ConvertTo_Single;
            time = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                             ((Il2CppObject *)__this,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
            if (pMVar6 != (MethodInfo *)0x0) {
              if (g_data_057ad575 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
                g_data_057ad575 = '\x01';
              }
              if (TypeInfo_CustomLogicManager[4].fields._Namespace_k__BackingField.fields.hasValue == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              __this_00 = (UnityEngine_MonoBehaviour_o *)
                          **(undefined8 **)&TypeInfo_CustomLogicManager[3].fields._Namespace_k__BackingField.fields.value;
              __this = (CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_o *)TypeInfo_CustomLogicManager;
              routine = CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime
                                  (TypeInfo_CustomLogicManager,(System_String_o *)icon,pSVar2,pSVar3,time,in_R8);
              pMVar5 = icon;
              if (__this_00 != (UnityEngine_MonoBehaviour_o *)0x0) {
                UnityEngine_MonoBehaviour__StartCoroutine_4dfd680(__this_00,routine,(MethodInfo *)0x0);
                return (Il2CppObject *)0x0;
              }
            }
            goto label_041b7e94;
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_041b7e94:
  il2cpp_runtime_helper_022b2c90();
  if (pMVar5 != (MethodInfo *)0x0) {
    CustomLogic_CustomLogicCutsceneBuiltin__HideDialogue
              ((CustomLogic_CustomLogicCutsceneBuiltin_o *)__this,pMVar5);
    return (Il2CppObject *)0x0;
  }
  pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
  return pIVar4;
}


// CustomLogic.CustomLogicCutsceneBuiltin.Bindings.<>c$$<__CreateMethodBinding__ShowDialogue>b__3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_____CreateMethodBinding__ShowDialogue_b__3_0 (CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCutsceneBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41b7c50

Il2CppObject *
CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_____CreateMethodBinding__ShowDialogue_b__3_0
          (CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCutsceneBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_MonoBehaviour_o *__this_00;
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  System_String_o *content;
  MethodInfo *icon;
  System_Collections_IEnumerator_o *routine;
  Il2CppObject *pIVar3;
  long extraout_RDX;
  MethodInfo *pMVar4;
  MethodInfo *method_00;
  MethodInfo *in_R8;
  float time;
  
  pMVar4 = (MethodInfo *)__c;
  if (g_data_057ad583 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad583 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      __this = (CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_o *)__a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar4 = MethodInfo_String_ConvertTo_String;
      pSVar1 = (System_String_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         ((Il2CppObject *)__this,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
      if (1 < (uint)__a->max_length) {
        __this = (CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_o *)__a->m_Items[1];
        pMVar4 = MethodInfo_String_ConvertTo_String;
        pSVar2 = (System_String_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           ((Il2CppObject *)__this,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
        if (2 < (uint)__a->max_length) {
          __this = (CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_o *)__a->m_Items[2];
          pMVar4 = MethodInfo_String_ConvertTo_String;
          content = (System_String_o *)
                    CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                              ((Il2CppObject *)__this,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
          if (__c != (CustomLogic_CustomLogicCutsceneBuiltin_o *)0x0) {
            CustomLogic_CustomLogicCutsceneBuiltin__ShowDialogue
                      ((CustomLogic_CustomLogicCutsceneBuiltin_o *)__this,pSVar1,pSVar2,content,in_R8);
            return (Il2CppObject *)0x0;
          }
          goto label_041b7d15;
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_041b7d15:
  il2cpp_runtime_helper_022b2c90();
  method_00 = pMVar4;
  if (g_data_057ad584 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad584 = '\x01';
  }
  if (extraout_RDX != 0) {
    if (*(int *)(extraout_RDX + 0x18) != 0) {
      __this = *(CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_o **)(extraout_RDX + 0x20);
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      method_00 = MethodInfo_String_ConvertTo_String;
      icon = (MethodInfo *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)__this,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
      if (1 < *(uint *)(extraout_RDX + 0x18)) {
        __this = *(CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_o **)(extraout_RDX + 0x28);
        method_00 = MethodInfo_String_ConvertTo_String;
        pSVar1 = (System_String_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           ((Il2CppObject *)__this,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
        if (2 < *(uint *)(extraout_RDX + 0x18)) {
          __this = *(CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_o **)(extraout_RDX + 0x30);
          method_00 = MethodInfo_String_ConvertTo_String;
          pSVar2 = (System_String_o *)
                   CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                             ((Il2CppObject *)__this,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
          if (3 < *(uint *)(extraout_RDX + 0x18)) {
            __this = *(CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_o **)(extraout_RDX + 0x38);
            method_00 = MethodInfo_Single_ConvertTo_Single;
            time = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                             ((Il2CppObject *)__this,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
            if (pMVar4 != (MethodInfo *)0x0) {
              if (g_data_057ad575 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
                g_data_057ad575 = '\x01';
              }
              if (TypeInfo_CustomLogicManager[4].fields._Namespace_k__BackingField.fields.hasValue == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              __this_00 = (UnityEngine_MonoBehaviour_o *)
                          **(undefined8 **)&TypeInfo_CustomLogicManager[3].fields._Namespace_k__BackingField.fields.value;
              __this = (CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_o *)TypeInfo_CustomLogicManager;
              routine = CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime
                                  (TypeInfo_CustomLogicManager,(System_String_o *)icon,pSVar1,pSVar2,time,in_R8);
              method_00 = icon;
              if (__this_00 != (UnityEngine_MonoBehaviour_o *)0x0) {
                UnityEngine_MonoBehaviour__StartCoroutine_4dfd680(__this_00,routine,(MethodInfo *)0x0);
                return (Il2CppObject *)0x0;
              }
            }
            goto label_041b7e94;
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_041b7e94:
  il2cpp_runtime_helper_022b2c90();
  if (method_00 != (MethodInfo *)0x0) {
    CustomLogic_CustomLogicCutsceneBuiltin__HideDialogue
              ((CustomLogic_CustomLogicCutsceneBuiltin_o *)__this,method_00);
    return (Il2CppObject *)0x0;
  }
  pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
  return pIVar3;
}


// CustomLogic.CustomLogicCutsceneBuiltin.Bindings.<>c$$<__CreateMethodBinding__ShowDialogueForTime>b__4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_____CreateMethodBinding__ShowDialogueForTime_b__4_0 (CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCutsceneBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41b7d20

Il2CppObject *
CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_____CreateMethodBinding__ShowDialogueForTime_b__4_0
          (CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCutsceneBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_MonoBehaviour_o *__this_00;
  MethodInfo *icon;
  System_String_o *title;
  System_String_o *content;
  System_Collections_IEnumerator_o *routine;
  Il2CppObject *pIVar1;
  MethodInfo *method_00;
  MethodInfo *in_R8;
  float time;
  
  method_00 = (MethodInfo *)__c;
  if (g_data_057ad584 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    __this = (CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_o *)&TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad584 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      __this = (CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_o *)__a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      method_00 = MethodInfo_String_ConvertTo_String;
      icon = (MethodInfo *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       ((Il2CppObject *)__this,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
      if (1 < (uint)__a->max_length) {
        __this = (CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_o *)__a->m_Items[1];
        method_00 = MethodInfo_String_ConvertTo_String;
        title = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          ((Il2CppObject *)__this,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
        if (2 < (uint)__a->max_length) {
          __this = (CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_o *)__a->m_Items[2];
          method_00 = MethodInfo_String_ConvertTo_String;
          content = (System_String_o *)
                    CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                              ((Il2CppObject *)__this,(MethodInfo_24EEB40 *)MethodInfo_String_ConvertTo_String);
          if (3 < (uint)__a->max_length) {
            __this = (CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_o *)__a->m_Items[3];
            method_00 = MethodInfo_Single_ConvertTo_Single;
            time = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                             ((Il2CppObject *)__this,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
            if (__c != (CustomLogic_CustomLogicCutsceneBuiltin_o *)0x0) {
              if (g_data_057ad575 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
                g_data_057ad575 = '\x01';
              }
              if (TypeInfo_CustomLogicManager[4].fields._Namespace_k__BackingField.fields.hasValue == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              __this_00 = (UnityEngine_MonoBehaviour_o *)
                          **(undefined8 **)&TypeInfo_CustomLogicManager[3].fields._Namespace_k__BackingField.fields.value;
              __this = (CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_o *)TypeInfo_CustomLogicManager;
              routine = CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime
                                  (TypeInfo_CustomLogicManager,(System_String_o *)icon,title,content,time,in_R8);
              method_00 = icon;
              if (__this_00 != (UnityEngine_MonoBehaviour_o *)0x0) {
                UnityEngine_MonoBehaviour__StartCoroutine_4dfd680(__this_00,routine,(MethodInfo *)0x0);
                return (Il2CppObject *)0x0;
              }
            }
            goto label_041b7e94;
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_041b7e94:
  il2cpp_runtime_helper_022b2c90();
  if (method_00 != (MethodInfo *)0x0) {
    CustomLogic_CustomLogicCutsceneBuiltin__HideDialogue
              ((CustomLogic_CustomLogicCutsceneBuiltin_o *)__this,method_00);
    return (Il2CppObject *)0x0;
  }
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
  return pIVar1;
}


// CustomLogic.CustomLogicCutsceneBuiltin.Bindings.<>c$$<__CreateMethodBinding__HideDialogue>b__5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_____CreateMethodBinding__HideDialogue_b__5_0 (CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCutsceneBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x41b7ea0

Il2CppObject *
CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_____CreateMethodBinding__HideDialogue_b__5_0
          (CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCutsceneBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if (__c != (CustomLogic_CustomLogicCutsceneBuiltin_o *)0x0) {
    CustomLogic_CustomLogicCutsceneBuiltin__HideDialogue
              ((CustomLogic_CustomLogicCutsceneBuiltin_o *)__this,(MethodInfo *)__c);
    return (Il2CppObject *)0x0;
  }
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
  return pIVar1;
}


// CustomLogic.CustomLogicCutsceneBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicCutsceneBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x41b72c0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicCutsceneBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

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
  
  if (g_data_057ad57b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"ShowDialogue");
    il2cpp_runtime_helper_023445d0(&"Start");
    il2cpp_runtime_helper_023445d0(&"ShowDialogueForTime");
    il2cpp_runtime_helper_023445d0(&"HideDialogue");
    g_data_057ad57b = '\x01';
  }
  bVar3 = System_String__op_Equality(name,"Start",(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    bVar3 = System_String__op_Equality(name,"ShowDialogue",(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad57d == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicCutsceneBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicCutsceneBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCutsceneBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__ShowDialogue_b__3_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad57d = '\x01';
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
        pSVar5 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCutsceneBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar5;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x10,pSVar5);
      }
      pCVar6 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicCutsceneBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(pCVar6,pSVar5,MethodInfo_CLMethodBinding_1_CustomLogicCutsceneBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
    bVar3 = System_String__op_Equality(name,"ShowDialogueForTime",(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad57e == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicCutsceneBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicCutsceneBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCutsceneBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__ShowDialogueForTime_b__4_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad57e = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar5 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
      }
      else {
        pSVar5 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
      }
      if (pSVar5 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar5 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCutsceneBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar5;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x18,pSVar5);
      }
      pCVar6 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicCutsceneBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(pCVar6,pSVar5,MethodInfo_CLMethodBinding_1_CustomLogicCutsceneBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
    bVar3 = System_String__op_Equality(name,"HideDialogue",(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad57f == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicCutsceneBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicCutsceneBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCutsceneBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__HideDialogue_b__5_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ad57f = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar5 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
      }
      else {
        pSVar5 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
      }
      if (pSVar5 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar5 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCutsceneBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar5;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x20,pSVar5);
      }
      pCVar6 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicCutsceneBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(pCVar6,pSVar5,MethodInfo_CLMethodBinding_1_CustomLogicCutsceneBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
    str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicCutsceneBuiltin not found");
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
  if (g_data_057ad57c == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41b7549;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicCutsceneBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41b7555;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicCutsceneBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41b7561;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCutsceneBuiltin_object_object);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41b756d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Start_b__2_0);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41b7579;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad57c = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41b759c;
    il2cpp_runtime_helper_02337ed0();
    pSVar5 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  else {
    pSVar5 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  if (pSVar5 == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41b74eb;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41b7507;
    pSVar5 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCutsceneBuiltin_object_object);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41b7521;
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar5;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41b753b;
    il2cpp_runtime_helper_022b4080(lVar2 + 8,pSVar5);
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41b75c2;
  pCVar6 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicCutsceneBuiltin);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41b75da;
  CustomLogic_CLMethodBinding_object____ctor(pCVar6,pSVar5,MethodInfo_CLMethodBinding_1_CustomLogicCutsceneBuiltin);
  return (CustomLogic_ICLMemberBinding_o *)pCVar6;
}


// CustomLogic.CustomLogicCutsceneBuiltin.Bindings$$__CreateMethodBinding__Start
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCutsceneBuiltin__o* CustomLogic_CustomLogicCutsceneBuiltin_Bindings____CreateMethodBinding__Start (const MethodInfo* method);
// 0x41b74a0

CustomLogic_CLMethodBinding_CustomLogicCutsceneBuiltin__o *
CustomLogic_CustomLogicCutsceneBuiltin_Bindings____CreateMethodBinding__Start(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicCutsceneBuiltin__o *__this;
  
  if (g_data_057ad57c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicCutsceneBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicCutsceneBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCutsceneBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__Start_b__2_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad57c = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCutsceneBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicCutsceneBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicCutsceneBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicCutsceneBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicCutsceneBuiltin.Bindings$$__CreateMethodBinding__ShowDialogue
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCutsceneBuiltin__o* CustomLogic_CustomLogicCutsceneBuiltin_Bindings____CreateMethodBinding__ShowDialogue (const MethodInfo* method);
// 0x41b75f0

CustomLogic_CLMethodBinding_CustomLogicCutsceneBuiltin__o *
CustomLogic_CustomLogicCutsceneBuiltin_Bindings____CreateMethodBinding__ShowDialogue(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicCutsceneBuiltin__o *__this;
  
  if (g_data_057ad57d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicCutsceneBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicCutsceneBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCutsceneBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__ShowDialogue_b__3_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad57d = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCutsceneBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x10) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x10,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicCutsceneBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicCutsceneBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicCutsceneBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicCutsceneBuiltin.Bindings$$__CreateMethodBinding__ShowDialogueForTime
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCutsceneBuiltin__o* CustomLogic_CustomLogicCutsceneBuiltin_Bindings____CreateMethodBinding__ShowDialogueForTime (const MethodInfo* method);
// 0x41b7740

CustomLogic_CLMethodBinding_CustomLogicCutsceneBuiltin__o *
CustomLogic_CustomLogicCutsceneBuiltin_Bindings____CreateMethodBinding__ShowDialogueForTime
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicCutsceneBuiltin__o *__this;
  
  if (g_data_057ad57e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicCutsceneBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicCutsceneBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCutsceneBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__ShowDialogueForTime_b__4_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad57e = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCutsceneBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x18) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x18,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicCutsceneBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicCutsceneBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicCutsceneBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicCutsceneBuiltin.Bindings$$__CreateMethodBinding__HideDialogue
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCutsceneBuiltin__o* CustomLogic_CustomLogicCutsceneBuiltin_Bindings____CreateMethodBinding__HideDialogue (const MethodInfo* method);
// 0x41b7890

CustomLogic_CLMethodBinding_CustomLogicCutsceneBuiltin__o *
CustomLogic_CustomLogicCutsceneBuiltin_Bindings____CreateMethodBinding__HideDialogue(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicCutsceneBuiltin__o *__this;
  
  if (g_data_057ad57f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicCutsceneBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicCutsceneBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCutsceneBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__HideDialogue_b__5_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad57f = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCutsceneBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x20) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x20,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicCutsceneBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicCutsceneBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicCutsceneBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicCutsceneBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicCutsceneBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x41b79e0

void CustomLogic_CustomLogicCutsceneBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  Il2CppObject *__this_00;
  
  if (g_data_057ad580 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&"ShowDialogue");
    il2cpp_runtime_helper_023445d0(&"Start");
    il2cpp_runtime_helper_023445d0(&"ShowDialogueForTime");
    il2cpp_runtime_helper_023445d0(&"HideDialogue");
    g_data_057ad580 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add(__this,"Start",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"ShowDialogue",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"ShowDialogueForTime",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"HideDialogue",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad581 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ad581 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this_00;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this_00);
  return;
}


// CustomLogic.CustomLogicCutsceneBuiltin.<StartCutscene>d__6$$.ctor
// il2cpp: void CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6___ctor (CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x41b7120

void CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6___ctor
               (CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// CustomLogic.CustomLogicCutsceneBuiltin.<StartCutscene>d__6$$System.IDisposable.Dispose
// il2cpp: void CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6__System_IDisposable_Dispose (CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6_o* __this, const MethodInfo* method);
// 0x41b7ec0

void CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6__System_IDisposable_Dispose
               (CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6_o *__this,MethodInfo *method)

{
  return;
}


// CustomLogic.CustomLogicCutsceneBuiltin.<StartCutscene>d__6$$MoveNext
// il2cpp: bool CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6__MoveNext (CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6_o* __this, const MethodInfo* method);
// 0x41b7ed0

bool_conflict
CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6__MoveNext
          (CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  CustomLogic_CustomLogicEvaluator_o *pCVar3;
  System_String_o *className;
  CustomLogic_CustomLogicClassInstance_o *classInstance;
  Il2CppObject *pIVar4;
  UI_InGameMenu_o *__this_00;
  
  if (g_data_057ad585 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Start");
    g_data_057ad585 = '\x01';
  }
  iVar2 = (__this->fields).__1__state;
  if (iVar2 == 1) {
    (__this->fields).__1__state = -1;
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    CustomLogic_CustomLogicManager__ToggleCutscene(0,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_00 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (__this_00 != (UI_InGameMenu_o *)0x0) {
      bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
      if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
         ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameMenu)) {
        UI_InGameMenu__HideCutsceneMenu(__this_00,(MethodInfo *)0x0);
        return 0;
      }
      goto label_041b80ab;
    }
  }
  else {
    if (iVar2 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pCVar3 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    className = (__this->fields).name;
    __this_00 = TypeInfo_CustomLogicEvaluator;
    if (*(int *)((long)&(TypeInfo_CustomLogicEvaluator->fields).TopLeftHud + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (pCVar3 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      classInstance =
           CustomLogic_CustomLogicEvaluator__CreateClassInstance
                     (pCVar3,className,(System_Object_array *)((TypeInfo_CustomLogicEvaluator->fields).StylebarHandler)->klass,
                      1,(MethodInfo *)0x0);
      CustomLogic_CustomLogicManager__ToggleCutscene((uint)(byte)(__this->fields).full,(MethodInfo *)0x0);
      pCVar3 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
      __this_00 = (UI_InGameMenu_o *)0x0;
      if (pCVar3 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        pIVar4 = CustomLogic_CustomLogicEvaluator__EvaluateMethod
                           (pCVar3,classInstance,"Start",(System_Object_array *)0x0,0,(MethodInfo *)0x0);
        (__this->fields).__2__current = pIVar4;
        il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pIVar4);
        (__this->fields).__1__state = 1;
        return (bool_conflict)CONCAT71((int7)((ulong)__this >> 8),1);
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_041b80ab:
  il2cpp_runtime_helper_022b2fd0();
  return (bool_conflict)(__this_00->fields).m_CancellationTokenSource;
}


// CustomLogic.CustomLogicCutsceneBuiltin.<StartCutscene>d__6$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6__System_Collections_Generic_IEnumerator_System_Object__get_Current (CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6_o* __this, const MethodInfo* method);
// 0x41b80b0

Il2CppObject *
CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomLogic.CustomLogicCutsceneBuiltin.<StartCutscene>d__6$$System.Collections.IEnumerator.Reset
// il2cpp: void CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6__System_Collections_IEnumerator_Reset (CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6_o* __this, const MethodInfo* method);
// 0x41b80c0

void CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6__System_Collections_IEnumerator_Reset
               (CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  return;
}


// CustomLogic.CustomLogicCutsceneBuiltin.<StartCutscene>d__6$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6__System_Collections_IEnumerator_get_Current (CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6_o* __this, const MethodInfo* method);
// 0x41b8100

Il2CppObject *
CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6__System_Collections_IEnumerator_get_Current
          (CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomLogic.CustomLogicCutsceneBuiltin.<routine_ShowDialogueForTime>d__5$$.ctor
// il2cpp: void CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5___ctor (CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x41b7100

void CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5___ctor
               (CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// CustomLogic.CustomLogicCutsceneBuiltin.<routine_ShowDialogueForTime>d__5$$System.IDisposable.Dispose
// il2cpp: void CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5__System_IDisposable_Dispose (CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5_o* __this, const MethodInfo* method);
// 0x41b8110

void CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5__System_IDisposable_Dispose
               (CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5_o *__this,
               MethodInfo *method)

{
  return;
}


// CustomLogic.CustomLogicCutsceneBuiltin.<routine_ShowDialogueForTime>d__5$$MoveNext
// il2cpp: bool CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5__MoveNext (CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5_o* __this, const MethodInfo* method);
// 0x41b8120

bool_conflict
CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5__MoveNext
          (CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5_o *__this,
          MethodInfo *method)

{
  float seconds;
  byte bVar1;
  int iVar2;
  System_String_o *icon;
  System_String_o *title;
  System_String_o *content;
  UnityEngine_WaitForSeconds_o *__this_00;
  UI_InGameMenu_o *__this_01;
  UI_InGameMenu_o *__this_02;
  
  if (g_data_057ad586 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitForSeconds);
    g_data_057ad586 = '\x01';
  }
  iVar2 = (__this->fields).__1__state;
  if (iVar2 == 1) {
    (__this->fields).__1__state = -1;
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_02 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (__this_02 != (UI_InGameMenu_o *)0x0) {
      bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
      if ((bVar1 <= (__this_02->klass->_2).naturalAligment) &&
         ((__this_02->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameMenu)) {
        UI_InGameMenu__HideCutsceneMenu(__this_02,(MethodInfo *)0x0);
        return 0;
      }
      goto label_041b8300;
    }
  }
  else {
    if (iVar2 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_01 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    icon = (__this->fields).icon;
    title = (__this->fields).title;
    content = (__this->fields).content;
    if (*(int *)((long)&(TypeInfo_CustomLogicManager->fields).TopLeftHud + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_02 = TypeInfo_CustomLogicManager;
    if (__this_01 != (UI_InGameMenu_o *)0x0) {
      bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
      if ((bVar1 <= (__this_01->klass->_2).naturalAligment) &&
         ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameMenu)) {
        UI_InGameMenu__ShowCutsceneMenu
                  (__this_01,icon,title,content,
                   (uint)*(byte *)&(((TypeInfo_CustomLogicManager->fields).StylebarHandler)->fields).PointThresholds,
                   (MethodInfo *)0x0);
        seconds = (__this->fields).time;
        __this_00 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForSeconds);
        UnityEngine_WaitForSeconds___ctor(__this_00,seconds,(MethodInfo *)0x0);
        (__this->fields).__2__current = (Il2CppObject *)__this_00;
        il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,__this_00);
        (__this->fields).__1__state = 1;
        return (bool_conflict)CONCAT71((int7)((ulong)__this_00 >> 8),1);
      }
      il2cpp_runtime_helper_022b2fd0();
      __this_02 = __this_01;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_041b8300:
  il2cpp_runtime_helper_022b2fd0();
  return (bool_conflict)(__this_02->fields).m_CancellationTokenSource;
}


// CustomLogic.CustomLogicCutsceneBuiltin.<routine_ShowDialogueForTime>d__5$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5__System_Collections_Generic_IEnumerator_System_Object__get_Current (CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5_o* __this, const MethodInfo* method);
// 0x41b8310

Il2CppObject *
CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomLogic.CustomLogicCutsceneBuiltin.<routine_ShowDialogueForTime>d__5$$System.Collections.IEnumerator.Reset
// il2cpp: void CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5__System_Collections_IEnumerator_Reset (CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5_o* __this, const MethodInfo* method);
// 0x41b8320

void CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5__System_Collections_IEnumerator_Reset
               (CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5_o *__this,
               MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  return;
}


// CustomLogic.CustomLogicCutsceneBuiltin.<routine_ShowDialogueForTime>d__5$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5__System_Collections_IEnumerator_get_Current (CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5_o* __this, const MethodInfo* method);
// 0x41b8360

Il2CppObject *
CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5__System_Collections_IEnumerator_get_Current
          (CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomLogic.CustomLogicCutsceneBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicCutsceneBuiltin___ctor (CustomLogic_CustomLogicCutsceneBuiltin_o* __this, const MethodInfo* method);
// 0x41b6c00

void CustomLogic_CustomLogicCutsceneBuiltin___ctor
               (CustomLogic_CustomLogicCutsceneBuiltin_o *__this,MethodInfo *method)

{
  int iVar1;
  
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
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicCutsceneBuiltin$$Start
// il2cpp: void CustomLogic_CustomLogicCutsceneBuiltin__Start (CustomLogic_CustomLogicCutsceneBuiltin_o* __this, System_String_o* name, bool full, const MethodInfo* method);
// 0x41b6c70

void CustomLogic_CustomLogicCutsceneBuiltin__Start
               (CustomLogic_CustomLogicCutsceneBuiltin_o *__this,System_String_o *name,bool_conflict full,
               MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  UnityEngine_MonoBehaviour_o *pUVar3;
  Il2CppObject *pIVar4;
  System_Collections_IEnumerator_o *routine;
  Il2CppClass *pIVar5;
  undefined1 extraout_DL;
  System_String_o *title;
  System_String_o *title_00;
  void *extraout_RDX;
  Il2CppClass *pIVar6;
  Il2CppClass *icon;
  UI_InGameMenu_o *pUVar7;
  MethodInfo *in_R8;
  float time;
  undefined4 uVar8;
  
  if (g_data_057ad573 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad573 = '\x01';
    iVar2 = TypeInfo_CustomLogicManager[4].fields._Namespace_k__BackingField.fields.hasValue;
  }
  else {
    iVar2 = TypeInfo_CustomLogicManager[4].fields._Namespace_k__BackingField.fields.hasValue;
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
    pUVar3 = (UnityEngine_MonoBehaviour_o *)
             **(undefined8 **)&TypeInfo_CustomLogicManager[3].fields._Namespace_k__BackingField.fields.value;
  }
  else {
    pUVar3 = (UnityEngine_MonoBehaviour_o *)
             **(undefined8 **)&TypeInfo_CustomLogicManager[3].fields._Namespace_k__BackingField.fields.value;
  }
  if (g_data_057ad578 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StartCutscene_d__6);
    g_data_057ad578 = '\x01';
  }
  pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_StartCutscene_d__6);
  pIVar5 = (Il2CppClass *)0x0;
  System_Object___ctor(pIVar4,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar4[1].klass = 0;
  if (pIVar4 != (Il2CppObject *)0x0) {
    pIVar4[2].klass = (Il2CppClass *)name;
    il2cpp_runtime_helper_022b4080(pIVar4 + 2);
    *(char *)&pIVar4[2].monitor = (char)full;
    pIVar5 = (Il2CppClass *)name;
    if (pUVar3 != (UnityEngine_MonoBehaviour_o *)0x0) {
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                (pUVar3,(System_Collections_IEnumerator_o *)pIVar4,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad578 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StartCutscene_d__6);
    g_data_057ad578 = '\x01';
  }
  pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_StartCutscene_d__6);
  pIVar6 = (Il2CppClass *)0x0;
  System_Object___ctor(pIVar4,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar4[1].klass = 0;
  if (pIVar4 != (Il2CppObject *)0x0) {
    pIVar4[2].klass = pIVar5;
    il2cpp_runtime_helper_022b4080(pIVar4 + 2,pIVar5);
    *(undefined1 *)&pIVar4[2].monitor = extraout_DL;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar5 = (Il2CppClass *)method;
  icon = pIVar6;
  if (g_data_057ad574 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ad574 = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar7 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  if (TypeInfo_CustomLogicManager[4].fields._Namespace_k__BackingField.fields.hasValue == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (pUVar7 != (UI_InGameMenu_o *)0x0) {
    bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
    pIVar5 = (Il2CppClass *)(ulong)bVar1;
    if ((bVar1 <= (pUVar7->klass->_2).naturalAligment) &&
       ((pUVar7->klass->_2).typeHierarchy[(long)((long)&pIVar5[-1].vtable[0xfe].method + 7)] == TypeInfo_InGameMenu))
    {
      UI_InGameMenu__ShowCutsceneMenu
                (pUVar7,(System_String_o *)pIVar6,title,(System_String_o *)method,
                 (uint)*(byte *)(*(long *)&TypeInfo_CustomLogicManager[3].fields._Namespace_k__BackingField.fields.value +
                                0x48),(MethodInfo *)0x0);
      return;
    }
    icon = TypeInfo_InGameMenu;
    il2cpp_runtime_helper_022b2fd0(pUVar7);
  }
  time = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad575 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad575 = '\x01';
  }
  if (TypeInfo_CustomLogicManager[4].fields._Namespace_k__BackingField.fields.hasValue == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar3 = (UnityEngine_MonoBehaviour_o *)
           **(undefined8 **)&TypeInfo_CustomLogicManager[3].fields._Namespace_k__BackingField.fields.value;
  routine = CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime
                      (TypeInfo_CustomLogicManager,(System_String_o *)icon,title_00,(System_String_o *)pIVar5,time,in_R8);
  if (pUVar3 != (UnityEngine_MonoBehaviour_o *)0x0) {
    UnityEngine_MonoBehaviour__StartCoroutine_4dfd680(pUVar3,routine,(MethodInfo *)0x0);
    return;
  }
  uVar8 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad577 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_routine_ShowDialogueForTime_d__5);
    g_data_057ad577 = '\x01';
  }
  pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_routine_ShowDialogueForTime_d__5);
  pIVar6 = (Il2CppClass *)0x0;
  System_Object___ctor(pIVar4,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar4[1].klass = 0;
  if (pIVar4 != (Il2CppObject *)0x0) {
    pIVar4[2].klass = icon;
    il2cpp_runtime_helper_022b4080(pIVar4 + 2,icon);
    pIVar4[2].monitor = extraout_RDX;
    il2cpp_runtime_helper_022b4080(&pIVar4[2].monitor,extraout_RDX);
    pIVar4[3].klass = pIVar5;
    il2cpp_runtime_helper_022b4080(pIVar4 + 3,pIVar5);
    *(undefined4 *)&pIVar4[3].monitor = uVar8;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad576 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ad576 = '\x01';
    iVar2 = *(int *)(TypeInfo_UIManager + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_UIManager + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
    pUVar7 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  else {
    pUVar7 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  if (pUVar7 == (UI_InGameMenu_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
    pIVar6 = TypeInfo_InGameMenu;
    if ((bVar1 <= (pUVar7->klass->_2).naturalAligment) &&
       ((pUVar7->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameMenu)) {
      UI_InGameMenu__HideCutsceneMenu(pUVar7,(MethodInfo *)0x0);
      return;
    }
  }
  uVar8 = SUB84(pIVar6,0);
  il2cpp_runtime_helper_022b2fd0();
  System_Object___ctor((Il2CppObject *)pUVar7,(MethodInfo *)0x0);
  *(undefined4 *)&(pUVar7->fields).m_CachedPtr = uVar8;
  return;
}


// CustomLogic.CustomLogicCutsceneBuiltin$$ShowDialogue
// il2cpp: void CustomLogic_CustomLogicCutsceneBuiltin__ShowDialogue (CustomLogic_CustomLogicCutsceneBuiltin_o* __this, System_String_o* icon, System_String_o* title, System_String_o* content, const MethodInfo* method);
// 0x41b6e00

void CustomLogic_CustomLogicCutsceneBuiltin__ShowDialogue
               (CustomLogic_CustomLogicCutsceneBuiltin_o *__this,System_String_o *icon,System_String_o *title,
               System_String_o *content,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  UnityEngine_MonoBehaviour_o *__this_00;
  System_Collections_IEnumerator_o *routine;
  Il2CppObject *__this_01;
  Il2CppClass *content_00;
  System_String_o *title_00;
  void *extraout_RDX;
  Il2CppClass *icon_00;
  Il2CppClass *pIVar3;
  UI_InGameMenu_o *pUVar4;
  float time;
  undefined4 uVar5;
  
  content_00 = (Il2CppClass *)content;
  icon_00 = (Il2CppClass *)icon;
  if (g_data_057ad574 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ad574 = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar4 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  if (TypeInfo_CustomLogicManager[4].fields._Namespace_k__BackingField.fields.hasValue == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (pUVar4 != (UI_InGameMenu_o *)0x0) {
    bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
    content_00 = (Il2CppClass *)(ulong)bVar1;
    if ((bVar1 <= (pUVar4->klass->_2).naturalAligment) &&
       ((pUVar4->klass->_2).typeHierarchy[(long)((long)&content_00[-1].vtable[0xfe].method + 7)] ==
        TypeInfo_InGameMenu)) {
      UI_InGameMenu__ShowCutsceneMenu
                (pUVar4,icon,title,content,
                 (uint)*(byte *)(*(long *)&TypeInfo_CustomLogicManager[3].fields._Namespace_k__BackingField.fields.value +
                                0x48),(MethodInfo *)0x0);
      return;
    }
    icon_00 = TypeInfo_InGameMenu;
    il2cpp_runtime_helper_022b2fd0(pUVar4);
  }
  time = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad575 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad575 = '\x01';
  }
  if (TypeInfo_CustomLogicManager[4].fields._Namespace_k__BackingField.fields.hasValue == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = (UnityEngine_MonoBehaviour_o *)
              **(undefined8 **)&TypeInfo_CustomLogicManager[3].fields._Namespace_k__BackingField.fields.value;
  routine = CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime
                      (TypeInfo_CustomLogicManager,(System_String_o *)icon_00,title_00,(System_String_o *)content_00,time,
                       method);
  if (__this_00 == (UnityEngine_MonoBehaviour_o *)0x0) {
    uVar5 = il2cpp_runtime_helper_022b2c90();
    if (g_data_057ad577 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_routine_ShowDialogueForTime_d__5);
      g_data_057ad577 = '\x01';
    }
    __this_01 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_routine_ShowDialogueForTime_d__5);
    pIVar3 = (Il2CppClass *)0x0;
    System_Object___ctor(__this_01,(MethodInfo *)0x0);
    *(undefined4 *)&__this_01[1].klass = 0;
    if (__this_01 == (Il2CppObject *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ad576 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
        il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
        g_data_057ad576 = '\x01';
        iVar2 = *(int *)(TypeInfo_UIManager + 0xe4);
      }
      else {
        iVar2 = *(int *)(TypeInfo_UIManager + 0xe4);
      }
      if (iVar2 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pUVar4 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      }
      else {
        pUVar4 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      }
      if (pUVar4 == (UI_InGameMenu_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
      }
      else {
        bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
        pIVar3 = TypeInfo_InGameMenu;
        if ((bVar1 <= (pUVar4->klass->_2).naturalAligment) &&
           ((pUVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameMenu)) {
          UI_InGameMenu__HideCutsceneMenu(pUVar4,(MethodInfo *)0x0);
          return;
        }
      }
      uVar5 = SUB84(pIVar3,0);
      il2cpp_runtime_helper_022b2fd0();
      System_Object___ctor((Il2CppObject *)pUVar4,(MethodInfo *)0x0);
      *(undefined4 *)&(pUVar4->fields).m_CachedPtr = uVar5;
      return;
    }
    __this_01[2].klass = icon_00;
    il2cpp_runtime_helper_022b4080(__this_01 + 2,icon_00);
    __this_01[2].monitor = extraout_RDX;
    il2cpp_runtime_helper_022b4080(&__this_01[2].monitor,extraout_RDX);
    __this_01[3].klass = content_00;
    il2cpp_runtime_helper_022b4080(__this_01 + 3,content_00);
    *(undefined4 *)&__this_01[3].monitor = uVar5;
    return;
  }
  UnityEngine_MonoBehaviour__StartCoroutine_4dfd680(__this_00,routine,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicCutsceneBuiltin$$ShowDialogueForTime
// il2cpp: void CustomLogic_CustomLogicCutsceneBuiltin__ShowDialogueForTime (CustomLogic_CustomLogicCutsceneBuiltin_o* __this, System_String_o* icon, System_String_o* title, System_String_o* content, float time, const MethodInfo* method);
// 0x41b6ef0

void CustomLogic_CustomLogicCutsceneBuiltin__ShowDialogueForTime
               (CustomLogic_CustomLogicCutsceneBuiltin_o *__this,System_String_o *icon,System_String_o *title,
               System_String_o *content,float time,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  UnityEngine_MonoBehaviour_o *__this_00;
  System_Collections_IEnumerator_o *routine;
  Il2CppObject *__this_01;
  void *extraout_RDX;
  Il2CppClass *pIVar3;
  UI_InGameMenu_o *__this_02;
  undefined4 uVar4;
  
  if (g_data_057ad575 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad575 = '\x01';
  }
  if (TypeInfo_CustomLogicManager[4].fields._Namespace_k__BackingField.fields.hasValue == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = (UnityEngine_MonoBehaviour_o *)
              **(undefined8 **)&TypeInfo_CustomLogicManager[3].fields._Namespace_k__BackingField.fields.value;
  routine = CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime
                      (TypeInfo_CustomLogicManager,icon,title,content,time,method);
  if (__this_00 == (UnityEngine_MonoBehaviour_o *)0x0) {
    uVar4 = il2cpp_runtime_helper_022b2c90();
    if (g_data_057ad577 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_routine_ShowDialogueForTime_d__5);
      g_data_057ad577 = '\x01';
    }
    __this_01 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_routine_ShowDialogueForTime_d__5);
    pIVar3 = (Il2CppClass *)0x0;
    System_Object___ctor(__this_01,(MethodInfo *)0x0);
    *(undefined4 *)&__this_01[1].klass = 0;
    if (__this_01 == (Il2CppObject *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ad576 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
        il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
        g_data_057ad576 = '\x01';
        iVar2 = *(int *)(TypeInfo_UIManager + 0xe4);
      }
      else {
        iVar2 = *(int *)(TypeInfo_UIManager + 0xe4);
      }
      if (iVar2 == 0) {
        il2cpp_runtime_helper_02337ed0();
        __this_02 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      }
      else {
        __this_02 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      }
      if (__this_02 == (UI_InGameMenu_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
      }
      else {
        bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
        pIVar3 = TypeInfo_InGameMenu;
        if ((bVar1 <= (__this_02->klass->_2).naturalAligment) &&
           ((__this_02->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameMenu)) {
          UI_InGameMenu__HideCutsceneMenu(__this_02,(MethodInfo *)0x0);
          return;
        }
      }
      uVar4 = SUB84(pIVar3,0);
      il2cpp_runtime_helper_022b2fd0();
      System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
      *(undefined4 *)&(__this_02->fields).m_CachedPtr = uVar4;
      return;
    }
    __this_01[2].klass = (Il2CppClass *)icon;
    il2cpp_runtime_helper_022b4080(__this_01 + 2,icon);
    __this_01[2].monitor = extraout_RDX;
    il2cpp_runtime_helper_022b4080(&__this_01[2].monitor,extraout_RDX);
    __this_01[3].klass = (Il2CppClass *)content;
    il2cpp_runtime_helper_022b4080(__this_01 + 3,content);
    *(undefined4 *)&__this_01[3].monitor = uVar4;
    return;
  }
  UnityEngine_MonoBehaviour__StartCoroutine_4dfd680(__this_00,routine,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicCutsceneBuiltin$$HideDialogue
// il2cpp: void CustomLogic_CustomLogicCutsceneBuiltin__HideDialogue (CustomLogic_CustomLogicCutsceneBuiltin_o* __this, const MethodInfo* method);
// 0x41b7040

void CustomLogic_CustomLogicCutsceneBuiltin__HideDialogue
               (CustomLogic_CustomLogicCutsceneBuiltin_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  UI_InGameMenu_o *__this_00;
  
  if (g_data_057ad576 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ad576 = '\x01';
    iVar2 = *(int *)(TypeInfo_UIManager + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_UIManager + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
    __this_00 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  else {
    __this_00 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  if (__this_00 == (UI_InGameMenu_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
    method = (MethodInfo *)TypeInfo_InGameMenu;
    if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameMenu)) {
      UI_InGameMenu__HideCutsceneMenu(__this_00,(MethodInfo *)0x0);
      return;
    }
  }
  uVar3 = SUB84(method,0);
  il2cpp_runtime_helper_022b2fd0();
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&(__this_00->fields).m_CachedPtr = uVar3;
  return;
}


// CustomLogic.CustomLogicCutsceneBuiltin$$routine_ShowDialogueForTime
// il2cpp: System_Collections_IEnumerator_o* CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime (CustomLogic_CustomLogicCutsceneBuiltin_o* __this, System_String_o* icon, System_String_o* title, System_String_o* content, float time, const MethodInfo* method);
// 0x41b6f90

System_Collections_IEnumerator_o *
CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime
          (CustomLogic_CustomLogicCutsceneBuiltin_o *__this,System_String_o *icon,System_String_o *title,
          System_String_o *content,float time,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Il2CppObject *__this_00;
  System_Collections_IEnumerator_o *extraout_RAX;
  System_Collections_IEnumerator_o *extraout_RAX_00;
  undefined4 uVar3;
  Il2CppClass *pIVar4;
  UI_InGameMenu_o *__this_01;
  
  if (g_data_057ad577 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_routine_ShowDialogueForTime_d__5);
    g_data_057ad577 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_routine_ShowDialogueForTime_d__5);
  pIVar4 = (Il2CppClass *)0x0;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 == (Il2CppObject *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ad576 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
      il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
      g_data_057ad576 = '\x01';
      iVar2 = *(int *)(TypeInfo_UIManager + 0xe4);
    }
    else {
      iVar2 = *(int *)(TypeInfo_UIManager + 0xe4);
    }
    if (iVar2 == 0) {
      il2cpp_runtime_helper_02337ed0();
      __this_01 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    }
    else {
      __this_01 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    }
    if (__this_01 == (UI_InGameMenu_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
      pIVar4 = TypeInfo_InGameMenu;
      if ((bVar1 <= (__this_01->klass->_2).naturalAligment) &&
         ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameMenu)) {
        UI_InGameMenu__HideCutsceneMenu(__this_01,(MethodInfo *)0x0);
        return extraout_RAX;
      }
    }
    uVar3 = SUB84(pIVar4,0);
    il2cpp_runtime_helper_022b2fd0();
    System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
    *(undefined4 *)&(__this_01->fields).m_CachedPtr = uVar3;
    return extraout_RAX_00;
  }
  __this_00[2].klass = (Il2CppClass *)icon;
  il2cpp_runtime_helper_022b4080(__this_00 + 2,icon);
  __this_00[2].monitor = title;
  il2cpp_runtime_helper_022b4080(&__this_00[2].monitor,title);
  __this_00[3].klass = (Il2CppClass *)content;
  il2cpp_runtime_helper_022b4080(__this_00 + 3,content);
  *(float *)&__this_00[3].monitor = time;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// CustomLogic.CustomLogicCutsceneBuiltin$$StartCutscene
// il2cpp: System_Collections_IEnumerator_o* CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene (CustomLogic_CustomLogicCutsceneBuiltin_o* __this, System_String_o* name, bool full, const MethodInfo* method);
// 0x41b6d80

System_Collections_IEnumerator_o *
CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene
          (CustomLogic_CustomLogicCutsceneBuiltin_o *__this,System_String_o *name,bool_conflict full,
          MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  UnityEngine_MonoBehaviour_o *__this_00;
  Il2CppObject *pIVar3;
  System_Collections_IEnumerator_o *extraout_RAX;
  System_Collections_IEnumerator_o *routine;
  UnityEngine_Coroutine_o *pUVar4;
  System_Collections_IEnumerator_o *extraout_RAX_00;
  System_Collections_IEnumerator_o *extraout_RAX_01;
  Il2CppClass *content;
  System_String_o *title;
  System_String_o *title_00;
  void *extraout_RDX;
  Il2CppClass *pIVar5;
  Il2CppClass *icon;
  UI_InGameMenu_o *pUVar6;
  MethodInfo *in_R8;
  float time;
  undefined4 uVar7;
  
  if (g_data_057ad578 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StartCutscene_d__6);
    g_data_057ad578 = '\x01';
  }
  pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_StartCutscene_d__6);
  pIVar5 = (Il2CppClass *)0x0;
  System_Object___ctor(pIVar3,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar3[1].klass = 0;
  if (pIVar3 != (Il2CppObject *)0x0) {
    pIVar3[2].klass = (Il2CppClass *)name;
    il2cpp_runtime_helper_022b4080(pIVar3 + 2,name);
    *(char *)&pIVar3[2].monitor = (char)full;
    return (System_Collections_IEnumerator_o *)pIVar3;
  }
  il2cpp_runtime_helper_022b2c90();
  content = (Il2CppClass *)method;
  icon = pIVar5;
  if (g_data_057ad574 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ad574 = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar6 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  if (TypeInfo_CustomLogicManager[4].fields._Namespace_k__BackingField.fields.hasValue == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (pUVar6 != (UI_InGameMenu_o *)0x0) {
    bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
    content = (Il2CppClass *)(ulong)bVar1;
    if ((bVar1 <= (pUVar6->klass->_2).naturalAligment) &&
       ((pUVar6->klass->_2).typeHierarchy[(long)((long)&content[-1].vtable[0xfe].method + 7)] == TypeInfo_InGameMenu)
       ) {
      UI_InGameMenu__ShowCutsceneMenu
                (pUVar6,(System_String_o *)pIVar5,title,(System_String_o *)method,
                 (uint)*(byte *)(*(long *)&TypeInfo_CustomLogicManager[3].fields._Namespace_k__BackingField.fields.value +
                                0x48),(MethodInfo *)0x0);
      return extraout_RAX;
    }
    icon = TypeInfo_InGameMenu;
    il2cpp_runtime_helper_022b2fd0(pUVar6);
  }
  time = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad575 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ad575 = '\x01';
  }
  if (TypeInfo_CustomLogicManager[4].fields._Namespace_k__BackingField.fields.hasValue == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = (UnityEngine_MonoBehaviour_o *)
              **(undefined8 **)&TypeInfo_CustomLogicManager[3].fields._Namespace_k__BackingField.fields.value;
  routine = CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime
                      (TypeInfo_CustomLogicManager,(System_String_o *)icon,title_00,(System_String_o *)content,time,in_R8);
  if (__this_00 == (UnityEngine_MonoBehaviour_o *)0x0) {
    uVar7 = il2cpp_runtime_helper_022b2c90();
    if (g_data_057ad577 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_routine_ShowDialogueForTime_d__5);
      g_data_057ad577 = '\x01';
    }
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_routine_ShowDialogueForTime_d__5);
    pIVar5 = (Il2CppClass *)0x0;
    System_Object___ctor(pIVar3,(MethodInfo *)0x0);
    *(undefined4 *)&pIVar3[1].klass = 0;
    if (pIVar3 == (Il2CppObject *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ad576 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
        il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
        g_data_057ad576 = '\x01';
        iVar2 = *(int *)(TypeInfo_UIManager + 0xe4);
      }
      else {
        iVar2 = *(int *)(TypeInfo_UIManager + 0xe4);
      }
      if (iVar2 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pUVar6 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      }
      else {
        pUVar6 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      }
      if (pUVar6 == (UI_InGameMenu_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
      }
      else {
        bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
        pIVar5 = TypeInfo_InGameMenu;
        if ((bVar1 <= (pUVar6->klass->_2).naturalAligment) &&
           ((pUVar6->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameMenu)) {
          UI_InGameMenu__HideCutsceneMenu(pUVar6,(MethodInfo *)0x0);
          return extraout_RAX_00;
        }
      }
      uVar7 = SUB84(pIVar5,0);
      il2cpp_runtime_helper_022b2fd0();
      System_Object___ctor((Il2CppObject *)pUVar6,(MethodInfo *)0x0);
      *(undefined4 *)&(pUVar6->fields).m_CachedPtr = uVar7;
      return extraout_RAX_01;
    }
    pIVar3[2].klass = icon;
    il2cpp_runtime_helper_022b4080(pIVar3 + 2,icon);
    pIVar3[2].monitor = extraout_RDX;
    il2cpp_runtime_helper_022b4080(&pIVar3[2].monitor,extraout_RDX);
    pIVar3[3].klass = content;
    il2cpp_runtime_helper_022b4080(pIVar3 + 3,content);
    *(undefined4 *)&pIVar3[3].monitor = uVar7;
    return (System_Collections_IEnumerator_o *)pIVar3;
  }
  pUVar4 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680(__this_00,routine,(MethodInfo *)0x0);
  return (System_Collections_IEnumerator_o *)pUVar4;
}


// CustomLogic.CustomLogicCutsceneBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicCutsceneBuiltin__get_ClassName (CustomLogic_CustomLogicCutsceneBuiltin_o* __this, const MethodInfo* method);
// 0x41b7140

System_String_o *
CustomLogic_CustomLogicCutsceneBuiltin__get_ClassName
          (CustomLogic_CustomLogicCutsceneBuiltin_o *__this,MethodInfo *method)

{
  if (g_data_057ad579 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Cutscene");
    g_data_057ad579 = '\x01';
  }
  return "Cutscene";
}


// CustomLogic.CustomLogicCutsceneBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicCutsceneBuiltin__get_IsAbstract (CustomLogic_CustomLogicCutsceneBuiltin_o* __this, const MethodInfo* method);
// 0x41b7170

bool_conflict
CustomLogic_CustomLogicCutsceneBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicCutsceneBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicCutsceneBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicCutsceneBuiltin__get_IsStatic (CustomLogic_CustomLogicCutsceneBuiltin_o* __this, const MethodInfo* method);
// 0x41b7180

bool_conflict
CustomLogic_CustomLogicCutsceneBuiltin__get_IsStatic
          (CustomLogic_CustomLogicCutsceneBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicCutsceneBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicCutsceneBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicCutsceneBuiltin_o* __this, const MethodInfo* method);
// 0x41b7190

bool_conflict
CustomLogic_CustomLogicCutsceneBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicCutsceneBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


