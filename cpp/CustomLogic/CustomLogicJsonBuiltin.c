// Type: CustomLogic.CustomLogicJsonBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicJsonBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicJsonBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicJsonBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicJsonBuiltin_o* CustomLogic_CustomLogicJsonBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x4235f90

CustomLogic_CustomLogicJsonBuiltin_o *
CustomLogic_CustomLogicJsonBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

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
  CustomLogic_CustomLogicJsonBuiltin_o *pCVar9;
  System_ArgumentException_o **ppSVar10;
  undefined8 unaff_R15;
  System_ArgumentException_o *pSStack_30;
  System_ArgumentException_o *pSStack_28;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (g_data_057adadf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicJsonBuiltin);
    g_data_057adadf = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (args->max_length == 0) {
    __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicJsonBuiltin);
    if (g_data_057adadb == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057adadb = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
    return (CustomLogic_CustomLogicJsonBuiltin_o *)__this;
  }
  il2cpp_runtime_helper_01f681a0(args);
  uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
  pSVar4 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicJsonBuiltin constructor found that takes ");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  pSVar4 = System_String__Concat_3af7150(pSVar5,pSVar4,str2,(MethodInfo *)0x0);
  uVar6 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar6);
  System_ArgumentException___ctor_3c12490(__this_00,pSVar4,(MethodInfo *)0x0);
  uVar6 = il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicJsonBuiltin_CreateInstance);
  pSVar7 = __this_00;
  pSStack_30 = (System_ArgumentException_o *)il2cpp_runtime_helper_022b2b10(__this_00,uVar6);
  ppSVar10 = &pSStack_30;
  pSStack_28 = __this_00;
  if (g_data_057adae0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"LoadFromString");
    il2cpp_runtime_helper_023445d0(&"SaveToString");
    g_data_057adae0 = '\x01';
  }
  bVar3 = System_String__op_Equality((System_String_o *)pSVar7,"LoadFromString",(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    bVar3 = System_String__op_Equality((System_String_o *)pSVar7,"SaveToString",(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      pSStack_28 = (System_ArgumentException_o *)pSVar4;
      if (g_data_057adae2 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicJsonBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicJsonBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicJsonBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SaveToString_b__3_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057adae2 = '\x01';
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
        pSVar8 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicJsonBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar8;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x10,pSVar8);
      }
      pCVar9 = (CustomLogic_CustomLogicJsonBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicJsonBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                ((CustomLogic_CLMethodBinding_T__o *)pCVar9,pSVar8,MethodInfo_CLMethodBinding_1_CustomLogicJsonBuiltin);
      return pCVar9;
    }
    pSVar4 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicJsonBuiltin not found");
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
  if (g_data_057adae1 == '\0') {
    *(undefined8 *)((long)ppSVar10 + -0x20) = 0x4236299;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicJsonBuiltin);
    *(undefined8 *)((long)ppSVar10 + -0x20) = 0x42362a5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicJsonBuiltin);
    *(undefined8 *)((long)ppSVar10 + -0x20) = 0x42362b1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicJsonBuiltin_object_object);
    *(undefined8 *)((long)ppSVar10 + -0x20) = 0x42362bd;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__LoadFromString_b__2_0);
    *(undefined8 *)((long)ppSVar10 + -0x20) = 0x42362c9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057adae1 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    *(undefined8 *)((long)ppSVar10 + -0x20) = 0x42362ec;
    il2cpp_runtime_helper_02337ed0();
    pSVar8 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  else {
    pSVar8 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  if (pSVar8 == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      *(undefined8 *)((long)ppSVar10 + -0x20) = 0x423623b;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)ppSVar10 + -0x20) = 0x4236257;
    pSVar8 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicJsonBuiltin_object_object);
    *(undefined8 *)((long)ppSVar10 + -0x20) = 0x4236271;
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar8;
    *(undefined8 *)((long)ppSVar10 + -0x20) = 0x423628b;
    il2cpp_runtime_helper_022b4080(lVar2 + 8,pSVar8);
  }
  *(undefined8 *)((long)ppSVar10 + -0x20) = 0x4236312;
  pCVar9 = (CustomLogic_CustomLogicJsonBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicJsonBuiltin);
  *(undefined8 *)((long)ppSVar10 + -0x20) = 0x423632a;
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)pCVar9,pSVar8,MethodInfo_CLMethodBinding_1_CustomLogicJsonBuiltin);
  return pCVar9;
}


// CustomLogic.CustomLogicJsonBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicJsonBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x4247090

void CustomLogic_CustomLogicJsonBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057adaec == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057adaec = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicJsonBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicJsonBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicJsonBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x4247100

void CustomLogic_CustomLogicJsonBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicJsonBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicJsonBuiltin.Bindings.<>c$$<__CreateMethodBinding__LoadFromString>b__2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicJsonBuiltin_Bindings___c_____CreateMethodBinding__LoadFromString_b__2_0 (CustomLogic_CustomLogicJsonBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicJsonBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x4247110

Il2CppObject *
CustomLogic_CustomLogicJsonBuiltin_Bindings___c_____CreateMethodBinding__LoadFromString_b__2_0
          (CustomLogic_CustomLogicJsonBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicJsonBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  SimpleJSONFixed_JSONNode_c *pSVar5;
  Il2CppMethodPointer vtableDispatch;
  System_Exception_c *pSVar6;
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *pSVar7;
  long lVar8;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  bool_conflict bVar9;
  SimpleJSONFixed_JSONNode_o *pSVar10;
  System_String_array *values;
  CustomLogic_CustomLogicListBuiltin_o *pCVar11;
  undefined4 *puVar12;
  SimpleJSONFixed_JSONString_o *__this_08;
  char *pcVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  Il2CppClass *__this_09;
  System_Type_o *pSVar16;
  System_String_o *str0;
  System_Exception_o *__this_10;
  MethodInfo *pMVar17;
  System_String_o *pSVar18;
  Il2CppObject *pIVar19;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  long extraout_RDX;
  System_String_o **ppSVar20;
  Il2CppClass *method_00;
  long *plVar21;
  SimpleJSONFixed_JSONObject_o *unaff_R12;
  float fVar22;
  float __this_11;
  undefined1 auVar23 [12];
  _union_249689 _Var24;
  Il2CppClass *pIVar25;
  Il2CppClass *pIVar26;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  System_Collections_Generic_List_Enumerator_T__c *pSStack_78;
  undefined4 uStack_70;
  System_Collections_Generic_Dictionary_object__object__o *pSStack_68;
  Il2CppRGCTXData *pIStack_60;
  _union_249689 _Stack_58;
  Il2CppClass *pIStack_50;
  Il2CppClass *pIStack_48;
  _union_13 _Stack_40;
  
  if (g_data_057adaed == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ConvertTo_String);
    plVar21 = &TypeInfo_CustomLogicEvaluator;
    il2cpp_runtime_helper_023445d0();
    g_data_057adaed = '\x01';
    __this = (CustomLogic_CustomLogicJsonBuiltin_Bindings___c_o *)plVar21;
  }
  if (__a == (System_Object_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)__a->max_length != 0) {
    pIVar19 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar18 = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo_object_(pIVar19,MethodInfo_String_ConvertTo_String);
    pIVar19 = CustomLogic_CustomLogicJsonBuiltin__LoadFromString(pSVar18,(MethodInfo *)0x0);
    return pIVar19;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (extraout_RDX == 0) {
    il2cpp_runtime_helper_022b2c90();
label_042471ad:
    il2cpp_runtime_helper_022b2ca0();
    if (g_data_057adaee == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057adaee = '\x01';
      iVar4 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
    }
    else {
      iVar4 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
    }
    if (iVar4 != 0) {
      CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)__c);
      return extraout_RAX;
    }
    il2cpp_runtime_helper_02337ed0();
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)__c);
    return extraout_RAX_00;
  }
  if (*(int *)(extraout_RDX + 0x18) == 0) goto label_042471ad;
  ppSVar20 = *(System_String_o ***)(extraout_RDX + 0x20);
  pSVar10 = CustomLogic_CustomLogicJsonBuiltin__SaveJSON((Il2CppObject *)ppSVar20,(MethodInfo *)0x0);
  if (pSVar10 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar5 = pSVar10->klass;
    vtableDispatch = (pSVar5->vtable)._30_ToString.methodPtr;
    pIVar19 = (Il2CppObject *)
              (*vtableDispatch)
                        (pSVar10,4,(pSVar5->vtable)._30_ToString.method,pSVar5,vtableDispatch);
    return pIVar19;
  }
  il2cpp_runtime_helper_022b2c90();
  _Stack_40 = (_union_13)__a;
  if (g_data_057adadd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicDictBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicQuaternionBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONArray);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONString);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_Object_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"int:");
    il2cpp_runtime_helper_023445d0(&"null:null");
    il2cpp_runtime_helper_023445d0(&"bool:");
    il2cpp_runtime_helper_023445d0(&"float:");
    il2cpp_runtime_helper_023445d0(&"string:");
    il2cpp_runtime_helper_023445d0(&"quaternion:");
    il2cpp_runtime_helper_023445d0(&",");
    il2cpp_runtime_helper_023445d0(&"color:");
    il2cpp_runtime_helper_023445d0(&"vector3:");
    il2cpp_runtime_helper_023445d0(&"1");
    il2cpp_runtime_helper_023445d0(&"0");
    g_data_057adadd = '\x01';
  }
  _Var24.genericMethod = (Il2CppMethodPointer)0x0;
  pIVar25 = (Il2CppClass *)0x0;
  pIVar26 = (Il2CppClass *)0x0;
  uStack_7c = 0;
  uStack_80 = 0;
  uStack_70 = 0;
  pSStack_78 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pSStack_68 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
  pIStack_60 = (Il2CppRGCTXData *)0x0;
  if ((CustomLogic_CustomLogicDictBuiltin_o *)ppSVar20 == (CustomLogic_CustomLogicDictBuiltin_o *)0x0) {
    __this_08 = (SimpleJSONFixed_JSONString_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONString);
    pSVar18 = "null:null";
    goto label_04235a00;
  }
  pSVar6 = (System_Exception_c *)((CustomLogic_CustomLogicDictBuiltin_o *)ppSVar20)->klass;
  bVar1 = (pSVar6->_2).naturalAligment;
  bVar2 = (TypeInfo_CustomLogicDictBuiltin->_2).naturalAligment;
  if ((bVar1 < bVar2) || ((pSVar6->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_CustomLogicDictBuiltin)) {
    bVar2 = (TypeInfo_CustomLogicListBuiltin->_2).naturalAligment;
    if ((bVar2 <= bVar1) && ((pSVar6->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_CustomLogicListBuiltin)) {
      unaff_R12 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONArray);
      SimpleJSONFixed_JSONArray___ctor((SimpleJSONFixed_JSONArray_o *)unaff_R12,(MethodInfo *)0x0);
      bVar1 = (TypeInfo_CustomLogicListBuiltin->_2).naturalAligment;
      if ((bVar1 <= (((CustomLogic_CustomLogicDictBuiltin_o *)ppSVar20)->klass->_2).naturalAligment) &&
         ((((CustomLogic_CustomLogicDictBuiltin_o *)ppSVar20)->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
          TypeInfo_CustomLogicListBuiltin)) {
        pSVar7 = (((CustomLogic_CustomLogicDictBuiltin_o *)ppSVar20)->fields)._dict;
        if (pSVar7 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_List_object___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)&_Stack_58,
                     (System_Collections_Generic_List_object__o *)pSVar7,MethodInfo_List_1_T_Enumerator_System_Object_GetEnumerator);
          _Var24 = _Stack_58;
          pIVar25 = pIStack_50;
          pIVar26 = pIStack_48;
          if (unaff_R12 != (SimpleJSONFixed_JSONObject_o *)0x0) {
            while (__this_02.fields._8_8_ = pIVar25, __this_02.fields._list = _Var24.genericMethod,
                  __this_02.fields._current = (Il2CppObject *)pIVar26, pMVar17 = MethodInfo_Boolean_MoveNext,
                  bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                    (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffff68),
                  _Stack_58 = _Var24, pIStack_50 = pIVar25, pIStack_48 = pIVar26, (char)bVar9 != '\0') {
              pSVar10 = CustomLogic_CustomLogicJsonBuiltin__SaveJSON((Il2CppObject *)pIVar26,pMVar17);
              (*(unaff_R12->klass->vtable)._21_Add.methodPtr)
                        (unaff_R12,pSVar10,(unaff_R12->klass->vtable)._21_Add.method);
            }
            goto label_04235a9a;
          }
          __this_04.fields._8_8_ = pIStack_50;
          __this_04.fields._list = _Stack_58.genericMethod;
          __this_04.fields._current = (Il2CppObject *)pIStack_48;
          pMVar17 = MethodInfo_Boolean_MoveNext;
          bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_04,(MethodInfo_321A1D0 *)&stack0xffffffffffffff68);
          _Var24 = _Stack_58;
          pIVar25 = pIStack_50;
          pIVar26 = pIStack_48;
          if ((char)bVar9 == '\0') goto label_04235a9a;
          goto label_04235dd5;
        }
        goto label_04235d46;
      }
      goto label_04235d3e;
    }
    pSVar18 = "string:";
    if (pSVar6 == g_data_057b9c00) {
label_042359de:
      pSVar18 = System_String__Concat_3ae5ba0(pSVar18,(System_String_o *)ppSVar20,(MethodInfo *)0x0);
label_042359e5:
      __this_08 = (SimpleJSONFixed_JSONString_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONString);
label_04235a00:
      SimpleJSONFixed_JSONString___ctor(__this_08,pSVar18,(MethodInfo *)0x0);
      return (Il2CppObject *)__this_08;
    }
    if (pSVar6 == g_data_057b9be8) {
      puVar12 = (undefined4 *)il2cpp_runtime_helper_02305440(ppSVar20);
      uStack_7c = *puVar12;
      ppSVar20 = (System_String_o **)System_Single__ToString(__this_11,(MethodInfo *)&uStack_7c);
      puVar14 = &"float:";
label_042359d8:
      pSVar18 = (System_String_o *)*puVar14;
      goto label_042359de;
    }
    if (pSVar6 == g_data_057b9bb8) {
      puVar12 = (undefined4 *)il2cpp_runtime_helper_02305440(ppSVar20);
      uStack_80 = *puVar12;
      ppSVar20 = (System_String_o **)System_Int32__ToString((int32_t)&uStack_80,(MethodInfo *)0x0);
      puVar14 = &"int:";
      goto label_042359d8;
    }
    if (pSVar6 == g_data_057b9b98) {
label_04235a60:
      pcVar13 = (char *)il2cpp_runtime_helper_02305440(ppSVar20);
      if (*pcVar13 == '\0') {
        puVar14 = &"0";
      }
      else {
        puVar14 = &"1";
      }
      ppSVar20 = (System_String_o **)*puVar14;
      pSVar18 = "bool:";
      goto label_042359de;
    }
    bVar2 = (TypeInfo_CustomLogicVector3Builtin->_2).naturalAligment;
    if ((bVar2 <= bVar1) && ((pSVar6->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_CustomLogicVector3Builtin)) {
      uStack_70 = *(undefined4 *)&(((CustomLogic_CustomLogicDictBuiltin_o *)ppSVar20)->fields)._cachedKeys;
      pSStack_78 = (System_Collections_Generic_List_Enumerator_T__c *)
                   (((CustomLogic_CustomLogicDictBuiltin_o *)ppSVar20)->fields)._dict;
      values = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string);
      if (values == (System_String_array *)0x0) goto label_04235d46;
      if ((int)values->max_length == 0) {
label_04235cea:
        il2cpp_runtime_helper_022b2ca0();
        goto label_04235cef;
      }
      values->m_Items[0] = "vector3:";
      fVar22 = (float)il2cpp_runtime_helper_022b4080(values->m_Items);
      pSVar18 = System_Single__ToString(fVar22,(MethodInfo *)&pSStack_78);
      if ((uint)values->max_length < 2) goto label_04235cea;
      values->m_Items[1] = pSVar18;
      il2cpp_runtime_helper_022b4080(values->m_Items + 1,pSVar18);
      if ((uint)values->max_length < 3) goto label_04235cea;
      ppSVar20 = &",";
      values->m_Items[2] = ",";
      fVar22 = (float)il2cpp_runtime_helper_022b4080(values->m_Items + 2);
      pSVar18 = System_Single__ToString(fVar22,(MethodInfo *)((long)&pSStack_78 + 4));
      if ((uint)values->max_length < 4) goto label_04235cea;
      values->m_Items[3] = pSVar18;
      il2cpp_runtime_helper_022b4080(values->m_Items + 3,pSVar18);
      if ((uint)values->max_length < 5) goto label_04235cea;
      values->m_Items[4] = ",";
      fVar22 = (float)il2cpp_runtime_helper_022b4080(values->m_Items + 4);
      pSVar18 = System_Single__ToString(fVar22,(MethodInfo *)&uStack_70);
      if ((uint)values->max_length < 6) goto label_04235cea;
      ppSVar20 = values->m_Items + 5;
      values->m_Items[5] = pSVar18;
label_04235751:
      il2cpp_runtime_helper_022b4080(ppSVar20);
      pSVar18 = System_String__Concat_3af7570(values,(MethodInfo *)0x0);
      goto label_042359e5;
    }
    bVar2 = (TypeInfo_CustomLogicColorBuiltin->_2).naturalAligment;
    if ((bVar2 <= bVar1) && ((pSVar6->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_CustomLogicColorBuiltin)) {
      pSVar7 = (((CustomLogic_CustomLogicDictBuiltin_o *)ppSVar20)->fields)._dict;
      values = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string);
      if (values != (System_String_array *)0x0) {
        if ((int)values->max_length != 0) {
          values->m_Items[0] = "color:";
          il2cpp_runtime_helper_022b4080(values->m_Items);
          if (pSVar7 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04235d46;
          iVar4 = (int)pSVar7;
          pSVar18 = System_Int32__ToString(iVar4 + 0x10,(MethodInfo *)0x0);
          if (1 < (uint)values->max_length) {
            values->m_Items[1] = pSVar18;
            il2cpp_runtime_helper_022b4080(values->m_Items + 1,pSVar18);
            if (2 < (uint)values->max_length) {
              ppSVar20 = &",";
              values->m_Items[2] = ",";
              il2cpp_runtime_helper_022b4080(values->m_Items + 2);
              pSVar18 = System_Int32__ToString(iVar4 + 0x14,(MethodInfo *)0x0);
              if (3 < (uint)values->max_length) {
                values->m_Items[3] = pSVar18;
                il2cpp_runtime_helper_022b4080(values->m_Items + 3,pSVar18);
                if (4 < (uint)values->max_length) {
                  values->m_Items[4] = ",";
                  il2cpp_runtime_helper_022b4080(values->m_Items + 4);
                  pSVar18 = System_Int32__ToString(iVar4 + 0x18,(MethodInfo *)0x0);
                  if (5 < (uint)values->max_length) {
                    values->m_Items[5] = pSVar18;
                    il2cpp_runtime_helper_022b4080(values->m_Items + 5,pSVar18);
                    if (6 < (uint)values->max_length) {
                      values->m_Items[6] = ",";
                      il2cpp_runtime_helper_022b4080(values->m_Items + 6);
                      pSVar18 = System_Int32__ToString(iVar4 + 0x1c,(MethodInfo *)0x0);
                      uVar3 = (uint)values->max_length;
joined_r0x04235740:
                      ppSVar20 = &",";
                      if (7 < uVar3) {
                        ppSVar20 = values->m_Items + 7;
                        values->m_Items[7] = pSVar18;
                        goto label_04235751;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto label_04235cea;
      }
      goto label_04235d46;
    }
    bVar2 = (TypeInfo_CustomLogicQuaternionBuiltin->_2).naturalAligment;
    if ((bVar2 <= bVar1) && ((pSVar6->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_CustomLogicQuaternionBuiltin)) {
      pSStack_68 = (((CustomLogic_CustomLogicDictBuiltin_o *)ppSVar20)->fields)._dict;
      pIStack_60 = (Il2CppRGCTXData *)(((CustomLogic_CustomLogicDictBuiltin_o *)ppSVar20)->fields)._cachedKeys
      ;
      values = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string);
      if (values != (System_String_array *)0x0) {
        if ((int)values->max_length != 0) {
          values->m_Items[0] = "quaternion:";
          fVar22 = (float)il2cpp_runtime_helper_022b4080(values->m_Items);
          pSVar18 = System_Single__ToString(fVar22,(MethodInfo *)&pSStack_68);
          if (1 < (uint)values->max_length) {
            values->m_Items[1] = pSVar18;
            il2cpp_runtime_helper_022b4080(values->m_Items + 1,pSVar18);
            if (2 < (uint)values->max_length) {
              ppSVar20 = &",";
              values->m_Items[2] = ",";
              fVar22 = (float)il2cpp_runtime_helper_022b4080(values->m_Items + 2);
              pSVar18 = System_Single__ToString(fVar22,(MethodInfo *)((long)&pSStack_68 + 4));
              if (3 < (uint)values->max_length) {
                values->m_Items[3] = pSVar18;
                il2cpp_runtime_helper_022b4080(values->m_Items + 3,pSVar18);
                if (4 < (uint)values->max_length) {
                  values->m_Items[4] = ",";
                  fVar22 = (float)il2cpp_runtime_helper_022b4080(values->m_Items + 4);
                  pSVar18 = System_Single__ToString(fVar22,(MethodInfo *)&pIStack_60);
                  if (5 < (uint)values->max_length) {
                    values->m_Items[5] = pSVar18;
                    il2cpp_runtime_helper_022b4080(values->m_Items + 5,pSVar18);
                    if (6 < (uint)values->max_length) {
                      values->m_Items[6] = ",";
                      fVar22 = (float)il2cpp_runtime_helper_022b4080(values->m_Items + 6);
                      pSVar18 = System_Single__ToString(fVar22,(MethodInfo *)((long)&pIStack_60 + 4));
                      uVar3 = (uint)values->max_length;
                      goto joined_r0x04235740;
                    }
                  }
                }
              }
            }
          }
        }
        goto label_04235cea;
      }
      goto label_04235d46;
    }
  }
  else {
    unaff_R12 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONObject);
    SimpleJSONFixed_JSONObject___ctor(unaff_R12,(MethodInfo *)0x0);
    bVar1 = (TypeInfo_CustomLogicDictBuiltin->_2).naturalAligment;
    if (((((CustomLogic_CustomLogicDictBuiltin_o *)ppSVar20)->klass->_2).naturalAligment < bVar1) ||
       ((((CustomLogic_CustomLogicDictBuiltin_o *)ppSVar20)->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        TypeInfo_CustomLogicDictBuiltin)) goto label_04235d3e;
    pCVar11 = CustomLogic_CustomLogicDictBuiltin__get_Keys
                        ((CustomLogic_CustomLogicDictBuiltin_o *)ppSVar20,(MethodInfo *)0x0);
    if ((pCVar11 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) ||
       (__this_00 = (pCVar11->fields).List, __this_00 == (System_Collections_Generic_List_object__o *)0x0))
    goto label_04235d46;
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&_Stack_58,__this_00,MethodInfo_List_1_T_Enumerator_System_Object_GetEnumerator);
    _Var24 = _Stack_58;
    pIVar25 = pIStack_50;
    __this_09 = pIStack_48;
    if (unaff_R12 != (SimpleJSONFixed_JSONObject_o *)0x0) {
      while (__this_01.fields._8_8_ = pIVar25, __this_01.fields._list = _Var24.genericMethod,
            __this_01.fields._current = (Il2CppObject *)__this_09,
            bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff68), _Stack_58 = _Var24,
            pIStack_50 = pIVar25, pIStack_48 = __this_09, (char)bVar9 != '\0') {
        pIVar26 = __this_09;
        if ((__this_09 == (Il2CppClass *)0x0) || ((__this_09->_1).image != g_data_057b9c00)) goto label_04235cef;
        method_00 = __this_09;
        pIVar19 = CustomLogic_CustomLogicDictBuiltin__Get
                            ((CustomLogic_CustomLogicDictBuiltin_o *)ppSVar20,(Il2CppObject *)__this_09,
                             (Il2CppObject *)0x0,(MethodInfo *)0x0);
        pSVar10 = CustomLogic_CustomLogicJsonBuiltin__SaveJSON(pIVar19,(MethodInfo *)method_00);
        if ((__this_09->_1).image != g_data_057b9c00) goto label_04235d36;
        (*(unaff_R12->klass->vtable)._20_Add.methodPtr)(unaff_R12,__this_09,pSVar10);
        __this_09 = pIVar26;
      }
label_04235a9a:
      __this_05.fields._8_8_ = pIStack_50;
      __this_05.fields._list = _Stack_58.genericMethod;
      __this_05.fields._current = (Il2CppObject *)pIStack_48;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffff68);
      return (Il2CppObject *)unaff_R12;
    }
    __this_03.fields._8_8_ = pIStack_50;
    __this_03.fields._list = _Stack_58.genericMethod;
    __this_03.fields._current = (Il2CppObject *)pIStack_48;
    bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_03,(MethodInfo_321A1D0 *)&stack0xffffffffffffff68);
    if ((char)bVar9 == '\0') goto label_04235a9a;
    _Var24 = _Stack_58;
    pIVar25 = pIStack_50;
    pIVar26 = pIStack_48;
    if ((pIStack_48 != (Il2CppClass *)0x0) && ((pIStack_48->_1).image == g_data_057b9c00)) {
      pIVar19 = CustomLogic_CustomLogicDictBuiltin__Get
                          ((CustomLogic_CustomLogicDictBuiltin_o *)ppSVar20,(Il2CppObject *)pIStack_48,
                           (Il2CppObject *)0x0,(MethodInfo *)0x0);
      CustomLogic_CustomLogicJsonBuiltin__SaveJSON(pIVar19,(MethodInfo *)pIStack_48);
      il2cpp_runtime_helper_022b2c90();
      goto label_04235a60;
    }
label_04235cef:
    uVar15 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    __this_09 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(uVar15);
    pSVar18 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Saving invalid json type: dict must have string keys.");
    System_Exception___ctor_3cf6120((System_Exception_o *)__this_09,pSVar18,(MethodInfo *)0x0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNode_SaveJSON);
    il2cpp_runtime_helper_022b2b10(__this_09);
label_04235d36:
    il2cpp_runtime_helper_022b2fd0(__this_09);
label_04235d3e:
    il2cpp_runtime_helper_022b2fd0(ppSVar20);
label_04235d46:
    il2cpp_runtime_helper_022b2c90();
  }
  il2cpp_runtime_helper_01f681a0(ppSVar20);
  pSVar16 = System_Object__GetType((Il2CppObject *)ppSVar20,(MethodInfo *)0x0);
  il2cpp_runtime_helper_01f681a0(pSVar16);
  pSVar18 = (System_String_o *)
            (*(pSVar16->klass->vtable)._3_ToString.methodPtr)
                      (pSVar16,(pSVar16->klass->vtable)._3_ToString.method);
  str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Saving invalid json type: only list, dict, structs, and primitives allowed, got ");
  pSVar18 = System_String__Concat_3ae5ba0(str0,pSVar18,(MethodInfo *)0x0);
  uVar15 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  __this_10 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar15);
  System_Exception___ctor_3cf6120(__this_10,pSVar18,(MethodInfo *)0x0);
  pMVar17 = (MethodInfo *)il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNode_SaveJSON);
  il2cpp_runtime_helper_022b2b10(__this_10);
label_04235dd5:
  CustomLogic_CustomLogicJsonBuiltin__SaveJSON((Il2CppObject *)pIVar26,pMVar17);
  auVar23 = il2cpp_runtime_helper_022b2c90();
  if (auVar23._8_4_ == 1) {
    plVar21 = (long *)__cxa_begin_catch(auVar23._0_8_);
    lVar8 = *plVar21;
    __cxa_end_catch();
    __this_06.fields._8_8_ = pIVar25;
    __this_06.fields._list = _Var24.genericMethod;
    __this_06.fields._current = (Il2CppObject *)pIVar26;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_06,(MethodInfo_321A1C0 *)&stack0xffffffffffffff68);
    if (lVar8 == 0) {
      return (Il2CppObject *)unaff_R12;
    }
    il2cpp_runtime_helper_022fefe0(lVar8);
  }
  __this_07.fields._8_8_ = pIVar25;
  __this_07.fields._list = _Var24.genericMethod;
  __this_07.fields._current = (Il2CppObject *)pIVar26;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_07,(MethodInfo_321A1C0 *)&stack0xffffffffffffff68);
  _Unwind_Resume(auVar23._0_8_);
}


// CustomLogic.CustomLogicJsonBuiltin.Bindings.<>c$$<__CreateMethodBinding__SaveToString>b__3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicJsonBuiltin_Bindings___c_____CreateMethodBinding__SaveToString_b__3_0 (CustomLogic_CustomLogicJsonBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicJsonBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x4247190

Il2CppObject *
CustomLogic_CustomLogicJsonBuiltin_Bindings___c_____CreateMethodBinding__SaveToString_b__3_0
          (CustomLogic_CustomLogicJsonBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicJsonBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  SimpleJSONFixed_JSONNode_c *pSVar5;
  Il2CppMethodPointer vtableDispatch;
  System_Exception_c *pSVar6;
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *pSVar7;
  long lVar8;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  bool_conflict bVar9;
  SimpleJSONFixed_JSONNode_o *pSVar10;
  Il2CppObject *pIVar11;
  System_String_array *values;
  System_String_o *pSVar12;
  CustomLogic_CustomLogicListBuiltin_o *pCVar13;
  undefined4 *puVar14;
  SimpleJSONFixed_JSONString_o *__this_08;
  char *pcVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  Il2CppClass *__this_09;
  System_Type_o *pSVar18;
  System_String_o *str0;
  System_Exception_o *__this_10;
  MethodInfo *pMVar19;
  long *plVar20;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  System_String_o **ppSVar21;
  Il2CppClass *method_00;
  SimpleJSONFixed_JSONObject_o *unaff_R12;
  float fVar22;
  float __this_11;
  undefined1 auVar23 [12];
  _union_249689 _Var24;
  Il2CppClass *pIVar25;
  Il2CppClass *pIVar26;
  undefined4 uStack_78;
  undefined4 uStack_74;
  System_Collections_Generic_List_Enumerator_T__c *pSStack_70;
  undefined4 uStack_68;
  System_Collections_Generic_Dictionary_object__object__o *pSStack_60;
  undefined1 auStack_58 [8];
  _union_249689 _Stack_50;
  Il2CppClass *pIStack_48;
  Il2CppClass *pIStack_40;
  
  if (__a == (System_Object_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
label_042471ad:
    il2cpp_runtime_helper_022b2ca0();
    if (g_data_057adaee == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057adaee = '\x01';
      iVar4 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
    }
    else {
      iVar4 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
    }
    if (iVar4 != 0) {
      CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)__c);
      return extraout_RAX;
    }
    il2cpp_runtime_helper_02337ed0();
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)__c);
    return extraout_RAX_00;
  }
  if ((int)__a->max_length == 0) goto label_042471ad;
  ppSVar21 = (System_String_o **)__a->m_Items[0];
  pSVar10 = CustomLogic_CustomLogicJsonBuiltin__SaveJSON((Il2CppObject *)ppSVar21,(MethodInfo *)0x0);
  if (pSVar10 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar5 = pSVar10->klass;
    vtableDispatch = (pSVar5->vtable)._30_ToString.methodPtr;
    pIVar11 = (Il2CppObject *)
              (*vtableDispatch)
                        (pSVar10,4,(pSVar5->vtable)._30_ToString.method,pSVar5,vtableDispatch);
    return pIVar11;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adadd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicDictBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicQuaternionBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONArray);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONString);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_Object_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"int:");
    il2cpp_runtime_helper_023445d0(&"null:null");
    il2cpp_runtime_helper_023445d0(&"bool:");
    il2cpp_runtime_helper_023445d0(&"float:");
    il2cpp_runtime_helper_023445d0(&"string:");
    il2cpp_runtime_helper_023445d0(&"quaternion:");
    il2cpp_runtime_helper_023445d0(&",");
    il2cpp_runtime_helper_023445d0(&"color:");
    il2cpp_runtime_helper_023445d0(&"vector3:");
    il2cpp_runtime_helper_023445d0(&"1");
    il2cpp_runtime_helper_023445d0(&"0");
    g_data_057adadd = '\x01';
  }
  _Var24.genericMethod = (Il2CppMethodPointer)0x0;
  pIVar25 = (Il2CppClass *)0x0;
  pIVar26 = (Il2CppClass *)0x0;
  uStack_74 = 0;
  uStack_78 = 0;
  uStack_68 = 0;
  pSStack_70 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pSStack_60 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
  auStack_58 = (undefined1  [8])0x0;
  if ((CustomLogic_CustomLogicDictBuiltin_o *)ppSVar21 == (CustomLogic_CustomLogicDictBuiltin_o *)0x0) {
    __this_08 = (SimpleJSONFixed_JSONString_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONString);
    pSVar12 = "null:null";
    goto label_04235a00;
  }
  pSVar6 = (System_Exception_c *)((CustomLogic_CustomLogicDictBuiltin_o *)ppSVar21)->klass;
  bVar1 = (pSVar6->_2).naturalAligment;
  bVar2 = (TypeInfo_CustomLogicDictBuiltin->_2).naturalAligment;
  if ((bVar1 < bVar2) || ((pSVar6->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_CustomLogicDictBuiltin)) {
    bVar2 = (TypeInfo_CustomLogicListBuiltin->_2).naturalAligment;
    if ((bVar2 <= bVar1) && ((pSVar6->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_CustomLogicListBuiltin)) {
      unaff_R12 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONArray);
      SimpleJSONFixed_JSONArray___ctor((SimpleJSONFixed_JSONArray_o *)unaff_R12,(MethodInfo *)0x0);
      bVar1 = (TypeInfo_CustomLogicListBuiltin->_2).naturalAligment;
      if ((bVar1 <= (((CustomLogic_CustomLogicDictBuiltin_o *)ppSVar21)->klass->_2).naturalAligment) &&
         ((((CustomLogic_CustomLogicDictBuiltin_o *)ppSVar21)->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
          TypeInfo_CustomLogicListBuiltin)) {
        pSVar7 = (((CustomLogic_CustomLogicDictBuiltin_o *)ppSVar21)->fields)._dict;
        if (pSVar7 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_List_object___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)&_Stack_50,
                     (System_Collections_Generic_List_object__o *)pSVar7,MethodInfo_List_1_T_Enumerator_System_Object_GetEnumerator);
          _Var24 = _Stack_50;
          pIVar25 = pIStack_48;
          pIVar26 = pIStack_40;
          if (unaff_R12 != (SimpleJSONFixed_JSONObject_o *)0x0) {
            while (__this_02.fields._8_8_ = pIVar25, __this_02.fields._list = _Var24.genericMethod,
                  __this_02.fields._current = (Il2CppObject *)pIVar26, pMVar19 = MethodInfo_Boolean_MoveNext,
                  bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                    (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffff70),
                  _Stack_50 = _Var24, pIStack_48 = pIVar25, pIStack_40 = pIVar26, (char)bVar9 != '\0') {
              pSVar10 = CustomLogic_CustomLogicJsonBuiltin__SaveJSON((Il2CppObject *)pIVar26,pMVar19);
              (*(unaff_R12->klass->vtable)._21_Add.methodPtr)
                        (unaff_R12,pSVar10,(unaff_R12->klass->vtable)._21_Add.method);
            }
            goto label_04235a9a;
          }
          __this_04.fields._8_8_ = pIStack_48;
          __this_04.fields._list = _Stack_50.genericMethod;
          __this_04.fields._current = (Il2CppObject *)pIStack_40;
          pMVar19 = MethodInfo_Boolean_MoveNext;
          bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_04,(MethodInfo_321A1D0 *)&stack0xffffffffffffff70);
          _Var24 = _Stack_50;
          pIVar25 = pIStack_48;
          pIVar26 = pIStack_40;
          if ((char)bVar9 == '\0') goto label_04235a9a;
          goto label_04235dd5;
        }
        goto label_04235d46;
      }
      goto label_04235d3e;
    }
    pSVar12 = "string:";
    if (pSVar6 == g_data_057b9c00) {
label_042359de:
      pSVar12 = System_String__Concat_3ae5ba0(pSVar12,(System_String_o *)ppSVar21,(MethodInfo *)0x0);
label_042359e5:
      __this_08 = (SimpleJSONFixed_JSONString_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONString);
label_04235a00:
      SimpleJSONFixed_JSONString___ctor(__this_08,pSVar12,(MethodInfo *)0x0);
      return (Il2CppObject *)__this_08;
    }
    if (pSVar6 == g_data_057b9be8) {
      puVar14 = (undefined4 *)il2cpp_runtime_helper_02305440(ppSVar21);
      uStack_74 = *puVar14;
      ppSVar21 = (System_String_o **)System_Single__ToString(__this_11,(MethodInfo *)&uStack_74);
      puVar16 = &"float:";
label_042359d8:
      pSVar12 = (System_String_o *)*puVar16;
      goto label_042359de;
    }
    if (pSVar6 == g_data_057b9bb8) {
      puVar14 = (undefined4 *)il2cpp_runtime_helper_02305440(ppSVar21);
      uStack_78 = *puVar14;
      ppSVar21 = (System_String_o **)System_Int32__ToString((int32_t)&uStack_78,(MethodInfo *)0x0);
      puVar16 = &"int:";
      goto label_042359d8;
    }
    if (pSVar6 == g_data_057b9b98) {
label_04235a60:
      pcVar15 = (char *)il2cpp_runtime_helper_02305440(ppSVar21);
      if (*pcVar15 == '\0') {
        puVar16 = &"0";
      }
      else {
        puVar16 = &"1";
      }
      ppSVar21 = (System_String_o **)*puVar16;
      pSVar12 = "bool:";
      goto label_042359de;
    }
    bVar2 = (TypeInfo_CustomLogicVector3Builtin->_2).naturalAligment;
    if ((bVar2 <= bVar1) && ((pSVar6->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_CustomLogicVector3Builtin)) {
      uStack_68 = *(undefined4 *)&(((CustomLogic_CustomLogicDictBuiltin_o *)ppSVar21)->fields)._cachedKeys;
      pSStack_70 = (System_Collections_Generic_List_Enumerator_T__c *)
                   (((CustomLogic_CustomLogicDictBuiltin_o *)ppSVar21)->fields)._dict;
      values = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string);
      if (values == (System_String_array *)0x0) goto label_04235d46;
      if ((int)values->max_length == 0) {
label_04235cea:
        il2cpp_runtime_helper_022b2ca0();
        goto label_04235cef;
      }
      values->m_Items[0] = "vector3:";
      fVar22 = (float)il2cpp_runtime_helper_022b4080(values->m_Items);
      pSVar12 = System_Single__ToString(fVar22,(MethodInfo *)&pSStack_70);
      if ((uint)values->max_length < 2) goto label_04235cea;
      values->m_Items[1] = pSVar12;
      il2cpp_runtime_helper_022b4080(values->m_Items + 1,pSVar12);
      if ((uint)values->max_length < 3) goto label_04235cea;
      ppSVar21 = &",";
      values->m_Items[2] = ",";
      fVar22 = (float)il2cpp_runtime_helper_022b4080(values->m_Items + 2);
      pSVar12 = System_Single__ToString(fVar22,(MethodInfo *)((long)&pSStack_70 + 4));
      if ((uint)values->max_length < 4) goto label_04235cea;
      values->m_Items[3] = pSVar12;
      il2cpp_runtime_helper_022b4080(values->m_Items + 3,pSVar12);
      if ((uint)values->max_length < 5) goto label_04235cea;
      values->m_Items[4] = ",";
      fVar22 = (float)il2cpp_runtime_helper_022b4080(values->m_Items + 4);
      pSVar12 = System_Single__ToString(fVar22,(MethodInfo *)&uStack_68);
      if ((uint)values->max_length < 6) goto label_04235cea;
      ppSVar21 = values->m_Items + 5;
      values->m_Items[5] = pSVar12;
label_04235751:
      il2cpp_runtime_helper_022b4080(ppSVar21);
      pSVar12 = System_String__Concat_3af7570(values,(MethodInfo *)0x0);
      goto label_042359e5;
    }
    bVar2 = (TypeInfo_CustomLogicColorBuiltin->_2).naturalAligment;
    if ((bVar2 <= bVar1) && ((pSVar6->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_CustomLogicColorBuiltin)) {
      pSVar7 = (((CustomLogic_CustomLogicDictBuiltin_o *)ppSVar21)->fields)._dict;
      values = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string);
      if (values != (System_String_array *)0x0) {
        if ((int)values->max_length != 0) {
          values->m_Items[0] = "color:";
          il2cpp_runtime_helper_022b4080(values->m_Items);
          if (pSVar7 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04235d46;
          iVar4 = (int)pSVar7;
          pSVar12 = System_Int32__ToString(iVar4 + 0x10,(MethodInfo *)0x0);
          if (1 < (uint)values->max_length) {
            values->m_Items[1] = pSVar12;
            il2cpp_runtime_helper_022b4080(values->m_Items + 1,pSVar12);
            if (2 < (uint)values->max_length) {
              ppSVar21 = &",";
              values->m_Items[2] = ",";
              il2cpp_runtime_helper_022b4080(values->m_Items + 2);
              pSVar12 = System_Int32__ToString(iVar4 + 0x14,(MethodInfo *)0x0);
              if (3 < (uint)values->max_length) {
                values->m_Items[3] = pSVar12;
                il2cpp_runtime_helper_022b4080(values->m_Items + 3,pSVar12);
                if (4 < (uint)values->max_length) {
                  values->m_Items[4] = ",";
                  il2cpp_runtime_helper_022b4080(values->m_Items + 4);
                  pSVar12 = System_Int32__ToString(iVar4 + 0x18,(MethodInfo *)0x0);
                  if (5 < (uint)values->max_length) {
                    values->m_Items[5] = pSVar12;
                    il2cpp_runtime_helper_022b4080(values->m_Items + 5,pSVar12);
                    if (6 < (uint)values->max_length) {
                      values->m_Items[6] = ",";
                      il2cpp_runtime_helper_022b4080(values->m_Items + 6);
                      pSVar12 = System_Int32__ToString(iVar4 + 0x1c,(MethodInfo *)0x0);
                      uVar3 = (uint)values->max_length;
joined_r0x04235740:
                      ppSVar21 = &",";
                      if (7 < uVar3) {
                        ppSVar21 = values->m_Items + 7;
                        values->m_Items[7] = pSVar12;
                        goto label_04235751;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto label_04235cea;
      }
      goto label_04235d46;
    }
    bVar2 = (TypeInfo_CustomLogicQuaternionBuiltin->_2).naturalAligment;
    if ((bVar2 <= bVar1) && ((pSVar6->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_CustomLogicQuaternionBuiltin)) {
      pSStack_60 = (((CustomLogic_CustomLogicDictBuiltin_o *)ppSVar21)->fields)._dict;
      auStack_58 = (undefined1  [8])(((CustomLogic_CustomLogicDictBuiltin_o *)ppSVar21)->fields)._cachedKeys;
      values = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string);
      if (values != (System_String_array *)0x0) {
        if ((int)values->max_length != 0) {
          values->m_Items[0] = "quaternion:";
          fVar22 = (float)il2cpp_runtime_helper_022b4080(values->m_Items);
          pSVar12 = System_Single__ToString(fVar22,(MethodInfo *)&pSStack_60);
          if (1 < (uint)values->max_length) {
            values->m_Items[1] = pSVar12;
            il2cpp_runtime_helper_022b4080(values->m_Items + 1,pSVar12);
            if (2 < (uint)values->max_length) {
              ppSVar21 = &",";
              values->m_Items[2] = ",";
              fVar22 = (float)il2cpp_runtime_helper_022b4080(values->m_Items + 2);
              pSVar12 = System_Single__ToString(fVar22,(MethodInfo *)((long)&pSStack_60 + 4));
              if (3 < (uint)values->max_length) {
                values->m_Items[3] = pSVar12;
                il2cpp_runtime_helper_022b4080(values->m_Items + 3,pSVar12);
                if (4 < (uint)values->max_length) {
                  values->m_Items[4] = ",";
                  fVar22 = (float)il2cpp_runtime_helper_022b4080(values->m_Items + 4);
                  pSVar12 = System_Single__ToString(fVar22,(MethodInfo *)auStack_58);
                  if (5 < (uint)values->max_length) {
                    values->m_Items[5] = pSVar12;
                    il2cpp_runtime_helper_022b4080(values->m_Items + 5,pSVar12);
                    if (6 < (uint)values->max_length) {
                      values->m_Items[6] = ",";
                      fVar22 = (float)il2cpp_runtime_helper_022b4080(values->m_Items + 6);
                      pSVar12 = System_Single__ToString(fVar22,(MethodInfo *)(auStack_58 + 4));
                      uVar3 = (uint)values->max_length;
                      goto joined_r0x04235740;
                    }
                  }
                }
              }
            }
          }
        }
        goto label_04235cea;
      }
      goto label_04235d46;
    }
  }
  else {
    unaff_R12 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONObject);
    SimpleJSONFixed_JSONObject___ctor(unaff_R12,(MethodInfo *)0x0);
    bVar1 = (TypeInfo_CustomLogicDictBuiltin->_2).naturalAligment;
    if (((((CustomLogic_CustomLogicDictBuiltin_o *)ppSVar21)->klass->_2).naturalAligment < bVar1) ||
       ((((CustomLogic_CustomLogicDictBuiltin_o *)ppSVar21)->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        TypeInfo_CustomLogicDictBuiltin)) goto label_04235d3e;
    pCVar13 = CustomLogic_CustomLogicDictBuiltin__get_Keys
                        ((CustomLogic_CustomLogicDictBuiltin_o *)ppSVar21,(MethodInfo *)0x0);
    if ((pCVar13 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) ||
       (__this_00 = (pCVar13->fields).List, __this_00 == (System_Collections_Generic_List_object__o *)0x0))
    goto label_04235d46;
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&_Stack_50,__this_00,MethodInfo_List_1_T_Enumerator_System_Object_GetEnumerator);
    _Var24 = _Stack_50;
    pIVar25 = pIStack_48;
    __this_09 = pIStack_40;
    if (unaff_R12 != (SimpleJSONFixed_JSONObject_o *)0x0) {
      while (__this_01.fields._8_8_ = pIVar25, __this_01.fields._list = _Var24.genericMethod,
            __this_01.fields._current = (Il2CppObject *)__this_09,
            bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff70), _Stack_50 = _Var24,
            pIStack_48 = pIVar25, pIStack_40 = __this_09, (char)bVar9 != '\0') {
        pIVar26 = __this_09;
        if ((__this_09 == (Il2CppClass *)0x0) || ((__this_09->_1).image != g_data_057b9c00)) goto label_04235cef;
        method_00 = __this_09;
        pIVar11 = CustomLogic_CustomLogicDictBuiltin__Get
                            ((CustomLogic_CustomLogicDictBuiltin_o *)ppSVar21,(Il2CppObject *)__this_09,
                             (Il2CppObject *)0x0,(MethodInfo *)0x0);
        pSVar10 = CustomLogic_CustomLogicJsonBuiltin__SaveJSON(pIVar11,(MethodInfo *)method_00);
        if ((__this_09->_1).image != g_data_057b9c00) goto label_04235d36;
        (*(unaff_R12->klass->vtable)._20_Add.methodPtr)(unaff_R12,__this_09,pSVar10);
        __this_09 = pIVar26;
      }
label_04235a9a:
      __this_05.fields._8_8_ = pIStack_48;
      __this_05.fields._list = _Stack_50.genericMethod;
      __this_05.fields._current = (Il2CppObject *)pIStack_40;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffff70);
      return (Il2CppObject *)unaff_R12;
    }
    __this_03.fields._8_8_ = pIStack_48;
    __this_03.fields._list = _Stack_50.genericMethod;
    __this_03.fields._current = (Il2CppObject *)pIStack_40;
    bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_03,(MethodInfo_321A1D0 *)&stack0xffffffffffffff70);
    if ((char)bVar9 == '\0') goto label_04235a9a;
    _Var24 = _Stack_50;
    pIVar25 = pIStack_48;
    pIVar26 = pIStack_40;
    if ((pIStack_40 != (Il2CppClass *)0x0) && ((pIStack_40->_1).image == g_data_057b9c00)) {
      pIVar11 = CustomLogic_CustomLogicDictBuiltin__Get
                          ((CustomLogic_CustomLogicDictBuiltin_o *)ppSVar21,(Il2CppObject *)pIStack_40,
                           (Il2CppObject *)0x0,(MethodInfo *)0x0);
      CustomLogic_CustomLogicJsonBuiltin__SaveJSON(pIVar11,(MethodInfo *)pIStack_40);
      il2cpp_runtime_helper_022b2c90();
      goto label_04235a60;
    }
label_04235cef:
    uVar17 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    __this_09 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(uVar17);
    pSVar12 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Saving invalid json type: dict must have string keys.");
    System_Exception___ctor_3cf6120((System_Exception_o *)__this_09,pSVar12,(MethodInfo *)0x0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNode_SaveJSON);
    il2cpp_runtime_helper_022b2b10(__this_09);
label_04235d36:
    il2cpp_runtime_helper_022b2fd0(__this_09);
label_04235d3e:
    il2cpp_runtime_helper_022b2fd0(ppSVar21);
label_04235d46:
    il2cpp_runtime_helper_022b2c90();
  }
  il2cpp_runtime_helper_01f681a0(ppSVar21);
  pSVar18 = System_Object__GetType((Il2CppObject *)ppSVar21,(MethodInfo *)0x0);
  il2cpp_runtime_helper_01f681a0(pSVar18);
  pSVar12 = (System_String_o *)
            (*(pSVar18->klass->vtable)._3_ToString.methodPtr)
                      (pSVar18,(pSVar18->klass->vtable)._3_ToString.method);
  str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Saving invalid json type: only list, dict, structs, and primitives allowed, got ");
  pSVar12 = System_String__Concat_3ae5ba0(str0,pSVar12,(MethodInfo *)0x0);
  uVar17 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  __this_10 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar17);
  System_Exception___ctor_3cf6120(__this_10,pSVar12,(MethodInfo *)0x0);
  pMVar19 = (MethodInfo *)il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNode_SaveJSON);
  il2cpp_runtime_helper_022b2b10(__this_10);
label_04235dd5:
  CustomLogic_CustomLogicJsonBuiltin__SaveJSON((Il2CppObject *)pIVar26,pMVar19);
  auVar23 = il2cpp_runtime_helper_022b2c90();
  if (auVar23._8_4_ == 1) {
    plVar20 = (long *)__cxa_begin_catch(auVar23._0_8_);
    lVar8 = *plVar20;
    __cxa_end_catch();
    __this_06.fields._8_8_ = pIVar25;
    __this_06.fields._list = _Var24.genericMethod;
    __this_06.fields._current = (Il2CppObject *)pIVar26;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_06,(MethodInfo_321A1C0 *)&stack0xffffffffffffff70);
    if (lVar8 == 0) {
      return (Il2CppObject *)unaff_R12;
    }
    il2cpp_runtime_helper_022fefe0(lVar8);
  }
  __this_07.fields._8_8_ = pIVar25;
  __this_07.fields._list = _Var24.genericMethod;
  __this_07.fields._current = (Il2CppObject *)pIVar26;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_07,(MethodInfo_321A1C0 *)&stack0xffffffffffffff70);
  _Unwind_Resume(auVar23._0_8_);
}


// CustomLogic.CustomLogicJsonBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicJsonBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x42360b0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicJsonBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

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
  
  if (g_data_057adae0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"LoadFromString");
    il2cpp_runtime_helper_023445d0(&"SaveToString");
    g_data_057adae0 = '\x01';
  }
  bVar3 = System_String__op_Equality(name,"LoadFromString",(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    bVar3 = System_String__op_Equality(name,"SaveToString",(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057adae2 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicJsonBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicJsonBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicJsonBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SaveToString_b__3_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057adae2 = '\x01';
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
        pSVar5 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicJsonBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar5;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x10,pSVar5);
      }
      pCVar6 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicJsonBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(pCVar6,pSVar5,MethodInfo_CLMethodBinding_1_CustomLogicJsonBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
    str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicJsonBuiltin not found");
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
  if (g_data_057adae1 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4236299;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicJsonBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x42362a5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicJsonBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x42362b1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicJsonBuiltin_object_object);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x42362bd;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__LoadFromString_b__2_0);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x42362c9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057adae1 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x42362ec;
    il2cpp_runtime_helper_02337ed0();
    pSVar5 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  else {
    pSVar5 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  if (pSVar5 == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x423623b;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4236257;
    pSVar5 = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicJsonBuiltin_object_object);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4236271;
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar5;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x423628b;
    il2cpp_runtime_helper_022b4080(lVar2 + 8,pSVar5);
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4236312;
  pCVar6 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicJsonBuiltin);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x423632a;
  CustomLogic_CLMethodBinding_object____ctor(pCVar6,pSVar5,MethodInfo_CLMethodBinding_1_CustomLogicJsonBuiltin);
  return (CustomLogic_ICLMemberBinding_o *)pCVar6;
}


// CustomLogic.CustomLogicJsonBuiltin.Bindings$$__CreateMethodBinding__LoadFromString
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicJsonBuiltin__o* CustomLogic_CustomLogicJsonBuiltin_Bindings____CreateMethodBinding__LoadFromString (const MethodInfo* method);
// 0x42361f0

CustomLogic_CLMethodBinding_CustomLogicJsonBuiltin__o *
CustomLogic_CustomLogicJsonBuiltin_Bindings____CreateMethodBinding__LoadFromString(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicJsonBuiltin__o *__this;
  
  if (g_data_057adae1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicJsonBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicJsonBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicJsonBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__LoadFromString_b__2_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057adae1 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicJsonBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicJsonBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicJsonBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicJsonBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicJsonBuiltin.Bindings$$__CreateMethodBinding__SaveToString
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicJsonBuiltin__o* CustomLogic_CustomLogicJsonBuiltin_Bindings____CreateMethodBinding__SaveToString (const MethodInfo* method);
// 0x4236340

CustomLogic_CLMethodBinding_CustomLogicJsonBuiltin__o *
CustomLogic_CustomLogicJsonBuiltin_Bindings____CreateMethodBinding__SaveToString(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicJsonBuiltin__o *__this;
  
  if (g_data_057adae2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicJsonBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicJsonBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicJsonBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__SaveToString_b__3_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057adae2 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicJsonBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x10) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x10,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicJsonBuiltin__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicJsonBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicJsonBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicJsonBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicJsonBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x4236490

void CustomLogic_CustomLogicJsonBuiltin_Bindings___cctor(MethodInfo *method)

{
  code *pcVar1;
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (g_data_057adae3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&"LoadFromString");
    il2cpp_runtime_helper_023445d0(&"SaveToString");
    g_data_057adae3 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add(__this,"LoadFromString",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"SaveToString",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// CustomLogic.CustomLogicJsonBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicJsonBuiltin___ctor (CustomLogic_CustomLogicJsonBuiltin_o* __this, const MethodInfo* method);
// 0x4234830

void CustomLogic_CustomLogicJsonBuiltin___ctor
               (CustomLogic_CustomLogicJsonBuiltin_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057adadb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057adadb = '\x01';
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


// CustomLogic.CustomLogicJsonBuiltin$$LoadFromString
// il2cpp: Il2CppObject* CustomLogic_CustomLogicJsonBuiltin__LoadFromString (System_String_o* json, const MethodInfo* method);
// 0x42348a0

Il2CppObject * CustomLogic_CustomLogicJsonBuiltin__LoadFromString(System_String_o *json,MethodInfo *method)

{
  char cVar1;
  SimpleJSONFixed_JSONNode_o *json_00;
  Il2CppObject *pIVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  MethodInfo *method_00;
  undefined1 auVar5 [12];
  
  if (json != (System_String_o *)0x0) {
    System_String__Trim(json,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)0x0;
    json_00 = SimpleJSONFixed_JSON__Parse(json,(MethodInfo *)0x0);
    pIVar2 = CustomLogic_CustomLogicJsonBuiltin__LoadJSON(json_00,method_00);
    return pIVar2;
  }
  auVar5 = il2cpp_runtime_helper_022b2c90();
  if (auVar5._8_4_ == 1) {
    puVar3 = (undefined8 *)__cxa_begin_catch(auVar5._0_8_);
    cVar1 = il2cpp_runtime_helper_0233e000(g_data_057b9b80,*(undefined8 *)*puVar3);
    if (cVar1 != '\0') {
      __cxa_end_catch();
      return (Il2CppObject *)0x0;
    }
    puVar4 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar4 = *puVar3;
    __cxa_throw(puVar4,&PTR_PTR_05215060,0);
  }
  _Unwind_Resume(auVar5._0_8_);
}


// CustomLogic.CustomLogicJsonBuiltin$$SaveToString
// il2cpp: System_String_o* CustomLogic_CustomLogicJsonBuiltin__SaveToString (Il2CppObject* obj, const MethodInfo* method);
// 0x4235360

System_String_o * CustomLogic_CustomLogicJsonBuiltin__SaveToString(Il2CppObject *obj,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  SimpleJSONFixed_JSONNode_c *pSVar4;
  Il2CppMethodPointer vtableDispatch;
  System_Exception_c *pSVar5;
  System_Collections_Generic_List_object__o *__this;
  System_Collections_Generic_Dictionary_object__object__o *pSVar6;
  long lVar7;
  int iVar8;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  bool_conflict bVar9;
  SimpleJSONFixed_JSONNode_o *pSVar10;
  System_String_o *pSVar11;
  System_String_array *values;
  CustomLogic_CustomLogicListBuiltin_o *pCVar12;
  Il2CppObject *pIVar13;
  undefined4 *puVar14;
  SimpleJSONFixed_JSONString_o *__this_07;
  char *pcVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  Il2CppClass *__this_08;
  System_Type_o *pSVar18;
  System_String_o *str0;
  System_Exception_o *__this_09;
  MethodInfo *pMVar19;
  long *plVar20;
  System_String_o **ppSVar21;
  Il2CppClass *method_00;
  SimpleJSONFixed_JSONObject_o *unaff_R12;
  float fVar22;
  float __this_10;
  undefined1 auVar23 [12];
  _union_249689 _Var24;
  Il2CppClass *pIVar25;
  Il2CppClass *pIVar26;
  undefined4 uStack_78;
  undefined4 uStack_74;
  System_Collections_Generic_List_Enumerator_T__c *pSStack_70;
  undefined4 uStack_68;
  System_Collections_Generic_Dictionary_object__object__o *pSStack_60;
  undefined1 auStack_58 [8];
  _union_249689 _Stack_50;
  Il2CppClass *pIStack_48;
  Il2CppClass *pIStack_40;
  
  pSVar10 = CustomLogic_CustomLogicJsonBuiltin__SaveJSON(obj,method);
  if (pSVar10 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar4 = pSVar10->klass;
    vtableDispatch = (pSVar4->vtable)._30_ToString.methodPtr;
    pSVar11 = (System_String_o *)
              (*vtableDispatch)
                        (pSVar10,4,(pSVar4->vtable)._30_ToString.method,pSVar4,vtableDispatch);
    return pSVar11;
  }
  ppSVar21 = (System_String_o **)obj;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adadd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicDictBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicQuaternionBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONArray);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONString);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_Object_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"int:");
    il2cpp_runtime_helper_023445d0(&"null:null");
    il2cpp_runtime_helper_023445d0(&"bool:");
    il2cpp_runtime_helper_023445d0(&"float:");
    il2cpp_runtime_helper_023445d0(&"string:");
    il2cpp_runtime_helper_023445d0(&"quaternion:");
    il2cpp_runtime_helper_023445d0(&",");
    il2cpp_runtime_helper_023445d0(&"color:");
    il2cpp_runtime_helper_023445d0(&"vector3:");
    il2cpp_runtime_helper_023445d0(&"1");
    il2cpp_runtime_helper_023445d0(&"0");
    g_data_057adadd = '\x01';
  }
  _Var24.genericMethod = (Il2CppMethodPointer)0x0;
  pIVar25 = (Il2CppClass *)0x0;
  pIVar26 = (Il2CppClass *)0x0;
  uStack_74 = 0;
  uStack_78 = 0;
  uStack_68 = 0;
  pSStack_70 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pSStack_60 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
  auStack_58 = (undefined1  [8])0x0;
  if ((CustomLogic_CustomLogicDictBuiltin_o *)ppSVar21 == (CustomLogic_CustomLogicDictBuiltin_o *)0x0) {
    __this_07 = (SimpleJSONFixed_JSONString_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONString);
    pSVar11 = "null:null";
    goto label_04235a00;
  }
  pSVar5 = (System_Exception_c *)((CustomLogic_CustomLogicDictBuiltin_o *)ppSVar21)->klass;
  bVar1 = (pSVar5->_2).naturalAligment;
  bVar2 = (TypeInfo_CustomLogicDictBuiltin->_2).naturalAligment;
  if ((bVar1 < bVar2) || ((pSVar5->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_CustomLogicDictBuiltin)) {
    bVar2 = (TypeInfo_CustomLogicListBuiltin->_2).naturalAligment;
    if ((bVar2 <= bVar1) && ((pSVar5->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_CustomLogicListBuiltin)) {
      unaff_R12 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONArray);
      SimpleJSONFixed_JSONArray___ctor((SimpleJSONFixed_JSONArray_o *)unaff_R12,(MethodInfo *)0x0);
      bVar1 = (TypeInfo_CustomLogicListBuiltin->_2).naturalAligment;
      if ((bVar1 <= (((CustomLogic_CustomLogicDictBuiltin_o *)ppSVar21)->klass->_2).naturalAligment) &&
         ((((CustomLogic_CustomLogicDictBuiltin_o *)ppSVar21)->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
          TypeInfo_CustomLogicListBuiltin)) {
        pSVar6 = (((CustomLogic_CustomLogicDictBuiltin_o *)ppSVar21)->fields)._dict;
        if (pSVar6 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_List_object___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)&_Stack_50,
                     (System_Collections_Generic_List_object__o *)pSVar6,MethodInfo_List_1_T_Enumerator_System_Object_GetEnumerator);
          _Var24 = _Stack_50;
          pIVar25 = pIStack_48;
          pIVar26 = pIStack_40;
          if (unaff_R12 != (SimpleJSONFixed_JSONObject_o *)0x0) {
            while (__this_01.fields._8_8_ = pIVar25, __this_01.fields._list = _Var24.genericMethod,
                  __this_01.fields._current = (Il2CppObject *)pIVar26, pMVar19 = MethodInfo_Boolean_MoveNext,
                  bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                    (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff70),
                  _Stack_50 = _Var24, pIStack_48 = pIVar25, pIStack_40 = pIVar26, (char)bVar9 != '\0') {
              pSVar10 = CustomLogic_CustomLogicJsonBuiltin__SaveJSON((Il2CppObject *)pIVar26,pMVar19);
              (*(unaff_R12->klass->vtable)._21_Add.methodPtr)
                        (unaff_R12,pSVar10,(unaff_R12->klass->vtable)._21_Add.method);
            }
            goto label_04235a9a;
          }
          __this_03.fields._8_8_ = pIStack_48;
          __this_03.fields._list = _Stack_50.genericMethod;
          __this_03.fields._current = (Il2CppObject *)pIStack_40;
          pMVar19 = MethodInfo_Boolean_MoveNext;
          bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_03,(MethodInfo_321A1D0 *)&stack0xffffffffffffff70);
          _Var24 = _Stack_50;
          pIVar25 = pIStack_48;
          pIVar26 = pIStack_40;
          if ((char)bVar9 == '\0') goto label_04235a9a;
          goto label_04235dd5;
        }
        goto label_04235d46;
      }
      goto label_04235d3e;
    }
    pSVar11 = "string:";
    if (pSVar5 == g_data_057b9c00) {
label_042359de:
      pSVar11 = System_String__Concat_3ae5ba0(pSVar11,(System_String_o *)ppSVar21,(MethodInfo *)0x0);
label_042359e5:
      __this_07 = (SimpleJSONFixed_JSONString_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONString);
label_04235a00:
      SimpleJSONFixed_JSONString___ctor(__this_07,pSVar11,(MethodInfo *)0x0);
      return (System_String_o *)__this_07;
    }
    if (pSVar5 == g_data_057b9be8) {
      puVar14 = (undefined4 *)il2cpp_runtime_helper_02305440(ppSVar21);
      uStack_74 = *puVar14;
      ppSVar21 = (System_String_o **)System_Single__ToString(__this_10,(MethodInfo *)&uStack_74);
      puVar16 = &"float:";
label_042359d8:
      pSVar11 = (System_String_o *)*puVar16;
      goto label_042359de;
    }
    if (pSVar5 == g_data_057b9bb8) {
      puVar14 = (undefined4 *)il2cpp_runtime_helper_02305440(ppSVar21);
      uStack_78 = *puVar14;
      ppSVar21 = (System_String_o **)System_Int32__ToString((int32_t)&uStack_78,(MethodInfo *)0x0);
      puVar16 = &"int:";
      goto label_042359d8;
    }
    if (pSVar5 == g_data_057b9b98) {
label_04235a60:
      pcVar15 = (char *)il2cpp_runtime_helper_02305440(ppSVar21);
      if (*pcVar15 == '\0') {
        puVar16 = &"0";
      }
      else {
        puVar16 = &"1";
      }
      ppSVar21 = (System_String_o **)*puVar16;
      pSVar11 = "bool:";
      goto label_042359de;
    }
    bVar2 = (TypeInfo_CustomLogicVector3Builtin->_2).naturalAligment;
    if ((bVar2 <= bVar1) && ((pSVar5->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_CustomLogicVector3Builtin)) {
      uStack_68 = *(undefined4 *)&(((CustomLogic_CustomLogicDictBuiltin_o *)ppSVar21)->fields)._cachedKeys;
      pSStack_70 = (System_Collections_Generic_List_Enumerator_T__c *)
                   (((CustomLogic_CustomLogicDictBuiltin_o *)ppSVar21)->fields)._dict;
      values = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string);
      if (values == (System_String_array *)0x0) goto label_04235d46;
      if ((int)values->max_length == 0) {
label_04235cea:
        il2cpp_runtime_helper_022b2ca0();
        goto label_04235cef;
      }
      values->m_Items[0] = "vector3:";
      fVar22 = (float)il2cpp_runtime_helper_022b4080(values->m_Items);
      pSVar11 = System_Single__ToString(fVar22,(MethodInfo *)&pSStack_70);
      if ((uint)values->max_length < 2) goto label_04235cea;
      values->m_Items[1] = pSVar11;
      il2cpp_runtime_helper_022b4080(values->m_Items + 1,pSVar11);
      if ((uint)values->max_length < 3) goto label_04235cea;
      ppSVar21 = &",";
      values->m_Items[2] = ",";
      fVar22 = (float)il2cpp_runtime_helper_022b4080(values->m_Items + 2);
      pSVar11 = System_Single__ToString(fVar22,(MethodInfo *)((long)&pSStack_70 + 4));
      if ((uint)values->max_length < 4) goto label_04235cea;
      values->m_Items[3] = pSVar11;
      il2cpp_runtime_helper_022b4080(values->m_Items + 3,pSVar11);
      if ((uint)values->max_length < 5) goto label_04235cea;
      values->m_Items[4] = ",";
      fVar22 = (float)il2cpp_runtime_helper_022b4080(values->m_Items + 4);
      pSVar11 = System_Single__ToString(fVar22,(MethodInfo *)&uStack_68);
      if ((uint)values->max_length < 6) goto label_04235cea;
      ppSVar21 = values->m_Items + 5;
      values->m_Items[5] = pSVar11;
label_04235751:
      il2cpp_runtime_helper_022b4080(ppSVar21);
      pSVar11 = System_String__Concat_3af7570(values,(MethodInfo *)0x0);
      goto label_042359e5;
    }
    bVar2 = (TypeInfo_CustomLogicColorBuiltin->_2).naturalAligment;
    if ((bVar2 <= bVar1) && ((pSVar5->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_CustomLogicColorBuiltin)) {
      pSVar6 = (((CustomLogic_CustomLogicDictBuiltin_o *)ppSVar21)->fields)._dict;
      values = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string);
      if (values != (System_String_array *)0x0) {
        if ((int)values->max_length != 0) {
          values->m_Items[0] = "color:";
          il2cpp_runtime_helper_022b4080(values->m_Items);
          if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04235d46;
          iVar8 = (int)pSVar6;
          pSVar11 = System_Int32__ToString(iVar8 + 0x10,(MethodInfo *)0x0);
          if (1 < (uint)values->max_length) {
            values->m_Items[1] = pSVar11;
            il2cpp_runtime_helper_022b4080(values->m_Items + 1,pSVar11);
            if (2 < (uint)values->max_length) {
              ppSVar21 = &",";
              values->m_Items[2] = ",";
              il2cpp_runtime_helper_022b4080(values->m_Items + 2);
              pSVar11 = System_Int32__ToString(iVar8 + 0x14,(MethodInfo *)0x0);
              if (3 < (uint)values->max_length) {
                values->m_Items[3] = pSVar11;
                il2cpp_runtime_helper_022b4080(values->m_Items + 3,pSVar11);
                if (4 < (uint)values->max_length) {
                  values->m_Items[4] = ",";
                  il2cpp_runtime_helper_022b4080(values->m_Items + 4);
                  pSVar11 = System_Int32__ToString(iVar8 + 0x18,(MethodInfo *)0x0);
                  if (5 < (uint)values->max_length) {
                    values->m_Items[5] = pSVar11;
                    il2cpp_runtime_helper_022b4080(values->m_Items + 5,pSVar11);
                    if (6 < (uint)values->max_length) {
                      values->m_Items[6] = ",";
                      il2cpp_runtime_helper_022b4080(values->m_Items + 6);
                      pSVar11 = System_Int32__ToString(iVar8 + 0x1c,(MethodInfo *)0x0);
                      uVar3 = (uint)values->max_length;
joined_r0x04235740:
                      ppSVar21 = &",";
                      if (7 < uVar3) {
                        ppSVar21 = values->m_Items + 7;
                        values->m_Items[7] = pSVar11;
                        goto label_04235751;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto label_04235cea;
      }
      goto label_04235d46;
    }
    bVar2 = (TypeInfo_CustomLogicQuaternionBuiltin->_2).naturalAligment;
    if ((bVar2 <= bVar1) && ((pSVar5->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_CustomLogicQuaternionBuiltin)) {
      pSStack_60 = (((CustomLogic_CustomLogicDictBuiltin_o *)ppSVar21)->fields)._dict;
      auStack_58 = (undefined1  [8])(((CustomLogic_CustomLogicDictBuiltin_o *)ppSVar21)->fields)._cachedKeys;
      values = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string);
      if (values != (System_String_array *)0x0) {
        if ((int)values->max_length != 0) {
          values->m_Items[0] = "quaternion:";
          fVar22 = (float)il2cpp_runtime_helper_022b4080(values->m_Items);
          pSVar11 = System_Single__ToString(fVar22,(MethodInfo *)&pSStack_60);
          if (1 < (uint)values->max_length) {
            values->m_Items[1] = pSVar11;
            il2cpp_runtime_helper_022b4080(values->m_Items + 1,pSVar11);
            if (2 < (uint)values->max_length) {
              ppSVar21 = &",";
              values->m_Items[2] = ",";
              fVar22 = (float)il2cpp_runtime_helper_022b4080(values->m_Items + 2);
              pSVar11 = System_Single__ToString(fVar22,(MethodInfo *)((long)&pSStack_60 + 4));
              if (3 < (uint)values->max_length) {
                values->m_Items[3] = pSVar11;
                il2cpp_runtime_helper_022b4080(values->m_Items + 3,pSVar11);
                if (4 < (uint)values->max_length) {
                  values->m_Items[4] = ",";
                  fVar22 = (float)il2cpp_runtime_helper_022b4080(values->m_Items + 4);
                  pSVar11 = System_Single__ToString(fVar22,(MethodInfo *)auStack_58);
                  if (5 < (uint)values->max_length) {
                    values->m_Items[5] = pSVar11;
                    il2cpp_runtime_helper_022b4080(values->m_Items + 5,pSVar11);
                    if (6 < (uint)values->max_length) {
                      values->m_Items[6] = ",";
                      fVar22 = (float)il2cpp_runtime_helper_022b4080(values->m_Items + 6);
                      pSVar11 = System_Single__ToString(fVar22,(MethodInfo *)(auStack_58 + 4));
                      uVar3 = (uint)values->max_length;
                      goto joined_r0x04235740;
                    }
                  }
                }
              }
            }
          }
        }
        goto label_04235cea;
      }
      goto label_04235d46;
    }
  }
  else {
    unaff_R12 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONObject);
    SimpleJSONFixed_JSONObject___ctor(unaff_R12,(MethodInfo *)0x0);
    bVar1 = (TypeInfo_CustomLogicDictBuiltin->_2).naturalAligment;
    if (((((CustomLogic_CustomLogicDictBuiltin_o *)ppSVar21)->klass->_2).naturalAligment < bVar1) ||
       ((((CustomLogic_CustomLogicDictBuiltin_o *)ppSVar21)->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        TypeInfo_CustomLogicDictBuiltin)) goto label_04235d3e;
    pCVar12 = CustomLogic_CustomLogicDictBuiltin__get_Keys
                        ((CustomLogic_CustomLogicDictBuiltin_o *)ppSVar21,(MethodInfo *)0x0);
    if ((pCVar12 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) ||
       (__this = (pCVar12->fields).List, __this == (System_Collections_Generic_List_object__o *)0x0))
    goto label_04235d46;
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&_Stack_50,__this,MethodInfo_List_1_T_Enumerator_System_Object_GetEnumerator);
    _Var24 = _Stack_50;
    pIVar25 = pIStack_48;
    __this_08 = pIStack_40;
    if (unaff_R12 != (SimpleJSONFixed_JSONObject_o *)0x0) {
      while (__this_00.fields._8_8_ = pIVar25, __this_00.fields._list = _Var24.genericMethod,
            __this_00.fields._current = (Il2CppObject *)__this_08,
            bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff70), _Stack_50 = _Var24,
            pIStack_48 = pIVar25, pIStack_40 = __this_08, (char)bVar9 != '\0') {
        pIVar26 = __this_08;
        if ((__this_08 == (Il2CppClass *)0x0) || ((__this_08->_1).image != g_data_057b9c00)) goto label_04235cef;
        method_00 = __this_08;
        pIVar13 = CustomLogic_CustomLogicDictBuiltin__Get
                            ((CustomLogic_CustomLogicDictBuiltin_o *)ppSVar21,(Il2CppObject *)__this_08,
                             (Il2CppObject *)0x0,(MethodInfo *)0x0);
        pSVar10 = CustomLogic_CustomLogicJsonBuiltin__SaveJSON(pIVar13,(MethodInfo *)method_00);
        if ((__this_08->_1).image != g_data_057b9c00) goto label_04235d36;
        (*(unaff_R12->klass->vtable)._20_Add.methodPtr)(unaff_R12,__this_08,pSVar10);
        __this_08 = pIVar26;
      }
label_04235a9a:
      __this_04.fields._8_8_ = pIStack_48;
      __this_04.fields._list = _Stack_50.genericMethod;
      __this_04.fields._current = (Il2CppObject *)pIStack_40;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff70);
      return (System_String_o *)unaff_R12;
    }
    __this_02.fields._8_8_ = pIStack_48;
    __this_02.fields._list = _Stack_50.genericMethod;
    __this_02.fields._current = (Il2CppObject *)pIStack_40;
    bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffff70);
    if ((char)bVar9 == '\0') goto label_04235a9a;
    _Var24 = _Stack_50;
    pIVar25 = pIStack_48;
    pIVar26 = pIStack_40;
    if ((pIStack_40 != (Il2CppClass *)0x0) && ((pIStack_40->_1).image == g_data_057b9c00)) {
      pIVar13 = CustomLogic_CustomLogicDictBuiltin__Get
                          ((CustomLogic_CustomLogicDictBuiltin_o *)ppSVar21,(Il2CppObject *)pIStack_40,
                           (Il2CppObject *)0x0,(MethodInfo *)0x0);
      CustomLogic_CustomLogicJsonBuiltin__SaveJSON(pIVar13,(MethodInfo *)pIStack_40);
      il2cpp_runtime_helper_022b2c90();
      goto label_04235a60;
    }
label_04235cef:
    uVar17 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    __this_08 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(uVar17);
    pSVar11 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Saving invalid json type: dict must have string keys.");
    System_Exception___ctor_3cf6120((System_Exception_o *)__this_08,pSVar11,(MethodInfo *)0x0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNode_SaveJSON);
    il2cpp_runtime_helper_022b2b10(__this_08);
label_04235d36:
    il2cpp_runtime_helper_022b2fd0(__this_08);
label_04235d3e:
    il2cpp_runtime_helper_022b2fd0(ppSVar21);
label_04235d46:
    il2cpp_runtime_helper_022b2c90();
  }
  il2cpp_runtime_helper_01f681a0(ppSVar21);
  pSVar18 = System_Object__GetType((Il2CppObject *)ppSVar21,(MethodInfo *)0x0);
  il2cpp_runtime_helper_01f681a0(pSVar18);
  pSVar11 = (System_String_o *)
            (*(pSVar18->klass->vtable)._3_ToString.methodPtr)
                      (pSVar18,(pSVar18->klass->vtable)._3_ToString.method);
  str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Saving invalid json type: only list, dict, structs, and primitives allowed, got ");
  pSVar11 = System_String__Concat_3ae5ba0(str0,pSVar11,(MethodInfo *)0x0);
  uVar17 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  __this_09 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar17);
  System_Exception___ctor_3cf6120(__this_09,pSVar11,(MethodInfo *)0x0);
  pMVar19 = (MethodInfo *)il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNode_SaveJSON);
  il2cpp_runtime_helper_022b2b10(__this_09);
label_04235dd5:
  CustomLogic_CustomLogicJsonBuiltin__SaveJSON((Il2CppObject *)pIVar26,pMVar19);
  auVar23 = il2cpp_runtime_helper_022b2c90();
  if (auVar23._8_4_ == 1) {
    plVar20 = (long *)__cxa_begin_catch(auVar23._0_8_);
    lVar7 = *plVar20;
    __cxa_end_catch();
    __this_05.fields._8_8_ = pIVar25;
    __this_05.fields._list = _Var24.genericMethod;
    __this_05.fields._current = (Il2CppObject *)pIVar26;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffff70);
    if (lVar7 == 0) {
      return (System_String_o *)unaff_R12;
    }
    il2cpp_runtime_helper_022fefe0(lVar7);
  }
  __this_06.fields._8_8_ = pIVar25;
  __this_06.fields._list = _Var24.genericMethod;
  __this_06.fields._current = (Il2CppObject *)pIVar26;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_06,(MethodInfo_321A1C0 *)&stack0xffffffffffffff70);
  _Unwind_Resume(auVar23._0_8_);
}


// CustomLogic.CustomLogicJsonBuiltin$$LoadJSON
// il2cpp: Il2CppObject* CustomLogic_CustomLogicJsonBuiltin__LoadJSON (SimpleJSONFixed_JSONNode_o* json, const MethodInfo* method);
// 0x42349e0

Il2CppObject *
CustomLogic_CustomLogicJsonBuiltin__LoadJSON(SimpleJSONFixed_JSONNode_o *json,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  System_Collections_Generic_List_object__o *pSVar3;
  System_Object_array *pSVar4;
  SimpleJSONFixed_JSONNode_c *pSVar5;
  Il2CppMethodPointer vtableDispatch;
  System_Collections_Generic_Dictionary_object__object__o *pSVar6;
  long lVar7;
  int iVar8;
  System_Collections_Generic_List_Enumerator_object__o __this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  SimpleJSONFixed_JSONNode_ValueEnumerator_o __this_06;
  SimpleJSONFixed_JSONNode_ValueEnumerator_o __this_07;
  SimpleJSONFixed_JSONNode_ValueEnumerator_o __this_08;
  SimpleJSONFixed_JSONNode_ValueEnumerator_o __this_09;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_10;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_11;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_12;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_13;
  SimpleJSONFixed_JSONNode_ValueEnumerator_o __this_14;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_15;
  int32_t *piVar9;
  char cVar10;
  bool_conflict bVar11;
  int32_t r;
  uint uVar12;
  int32_t b;
  int32_t a;
  CustomLogic_CustomLogicListBuiltin_o *pCVar13;
  SimpleJSONFixed_JSONNode_o *pSVar14;
  Il2CppObject *pIVar15;
  CustomLogic_CustomLogicDictBuiltin_o *__this_16;
  MethodInfo *key;
  CustomLogic_CustomLogicVector3Builtin_o *__this_17;
  CustomLogic_CustomLogicQuaternionBuiltin_o *__this_18;
  Utility_Color255_o *__this_19;
  CustomLogic_CustomLogicColorBuiltin_o *__this_20;
  undefined8 uVar16;
  System_String_o *pSVar17;
  MethodInfo *pMVar18;
  System_String_o **ppSVar19;
  System_String_array *pSVar20;
  System_String_o *pSVar21;
  undefined4 *puVar22;
  SimpleJSONFixed_JSONString_o *__this_21;
  char *pcVar23;
  Il2CppClass *__this_22;
  System_Type_o *pSVar24;
  System_Exception_o *__this_23;
  long *plVar25;
  undefined8 *puVar26;
  _union_13 unaff_RBX;
  Il2CppClass *method_00;
  System_Exception_c *pSVar27;
  SimpleJSONFixed_JSONObject_o *unaff_R12;
  float fVar28;
  float fVar29;
  float __this_24;
  UnityEngine_Quaternion_o value;
  undefined1 auVar30 [12];
  UnityEngine_Vector3_o value_00;
  _union_249689 _Var31;
  Il2CppClass *pIVar32;
  Il2CppClass *pIVar33;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  System_Collections_Generic_List_Enumerator_T__c *pSStack_268;
  undefined4 uStack_260;
  System_Collections_Generic_Dictionary_object__object__o *pSStack_258;
  Il2CppRGCTXData *pIStack_250;
  _union_249689 _Stack_248;
  Il2CppClass *pIStack_240;
  Il2CppClass *pIStack_238;
  _union_13 _Stack_230;
  undefined8 in_stack_fffffffffffffe08;
  int32_t in_stack_fffffffffffffe10;
  undefined4 in_stack_fffffffffffffe14;
  System_Collections_Generic_Dictionary_TKey__TValue__o *in_stack_fffffffffffffe18;
  InvokerMethod in_stack_fffffffffffffe20;
  Il2CppObject *in_stack_fffffffffffffe28;
  Il2CppClass *in_stack_fffffffffffffe30;
  Il2CppType *in_stack_fffffffffffffe38;
  System_Collections_Generic_List_T__o *in_stack_fffffffffffffe40;
  _union_13 in_stack_fffffffffffffe48;
  _union_14 local_1b0;
  undefined1 local_178 [80];
  undefined1 local_128 [80];
  undefined1 local_d8 [80];
  undefined1 local_88 [96];
  
  if (g_data_057adadc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicDictBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicQuaternionBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&"int");
    il2cpp_runtime_helper_023445d0(&"string");
    il2cpp_runtime_helper_023445d0(&"null");
    il2cpp_runtime_helper_023445d0(&"quaternion");
    il2cpp_runtime_helper_023445d0(&"bool");
    il2cpp_runtime_helper_023445d0(&"vector3");
    il2cpp_runtime_helper_023445d0(&"color");
    il2cpp_runtime_helper_023445d0(&"float");
    il2cpp_runtime_helper_023445d0(&"1");
    g_data_057adadc = '\x01';
  }
  local_128._48_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_128._56_8_ = (Il2CppRGCTXData *)0x0;
  local_128._32_8_ = (Il2CppClass *)0x0;
  local_128._40_8_ = (Il2CppType *)0x0;
  local_128._16_8_ = (InvokerMethod)0x0;
  local_128._24_8_ = (Il2CppObject *)0x0;
  local_128._0_8_ = (Il2CppMethodPointer)0x0;
  local_128._8_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_128._64_8_ = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_88._48_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_88._56_8_ = (Il2CppRGCTXData *)0x0;
  local_88._32_8_ = (Il2CppClass *)0x0;
  local_88._40_8_ = (Il2CppType *)0x0;
  local_88._16_8_ = (InvokerMethod)0x0;
  local_88._24_8_ = (Il2CppObject *)0x0;
  local_88._0_8_ = (Il2CppMethodPointer)0x0;
  local_88._8_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_88._64_8_ = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_178._48_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_178._56_8_ = (Il2CppRGCTXData *)0x0;
  local_178._32_8_ = (Il2CppClass *)0x0;
  local_178._40_8_ = (Il2CppType *)0x0;
  local_178._16_8_ = (InvokerMethod)0x0;
  local_178._24_8_ = (Il2CppObject *)0x0;
  local_178._0_8_ = (Il2CppMethodPointer)0x0;
  local_178._8_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_178._64_8_ = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_d8._48_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_d8._56_8_ = (Il2CppRGCTXData *)0x0;
  local_d8._32_8_ = (Il2CppClass *)0x0;
  local_d8._40_8_ = (Il2CppType *)0x0;
  local_d8._16_8_ = (InvokerMethod)0x0;
  local_d8._24_8_ = (Il2CppObject *)0x0;
  local_d8._0_8_ = (Il2CppMethodPointer)0x0;
  local_d8._8_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_d8._64_8_ = (SimpleJSONFixed_JSONNode_o *)0x0;
  if (json == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_042352c5:
    pSVar21 = (System_String_o *)json;
    il2cpp_runtime_helper_022b2c90();
label_042352ca:
    il2cpp_runtime_helper_022b2ca0();
label_042352cf:
    uVar16 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    unaff_RBX.rgctx_data = (Il2CppRGCTXData *)il2cpp_runtime_helper_023052d0(uVar16);
    pSVar17 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Loading invalid json format.");
    System_Exception___ctor_3cf6120((System_Exception_o *)unaff_RBX.rgctx_data,pSVar17,(MethodInfo *)0x0);
    uVar16 = il2cpp_runtime_helper_023445d0(&MethodInfo_Object_LoadJSON);
    il2cpp_runtime_helper_022b2b10(unaff_RBX.rgctx_data,uVar16);
label_04235316:
    __this_14.fields.m_Enumerator.fields.m_Object.fields._dictionary._0_4_ = in_stack_fffffffffffffe10;
    __this_14.fields.m_Enumerator.fields._0_8_ = in_stack_fffffffffffffe08;
    __this_14.fields.m_Enumerator.fields.m_Object.fields._dictionary._4_4_ = in_stack_fffffffffffffe14;
    __this_14.fields.m_Enumerator.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffe18;
    __this_14.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
         (Il2CppObject *)in_stack_fffffffffffffe20;
    __this_14.fields.m_Enumerator.fields.m_Object.fields._current.fields.value = in_stack_fffffffffffffe28;
    __this_14.fields.m_Enumerator.fields.m_Object.fields._32_8_ = in_stack_fffffffffffffe30;
    __this_14.fields.m_Enumerator.fields.m_Array.fields._list =
         (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe38;
    __this_14.fields.m_Enumerator.fields.m_Array.fields._8_8_ = in_stack_fffffffffffffe40;
    __this_14.fields.m_Enumerator.fields.m_Array.fields._current =
         (SimpleJSONFixed_JSONNode_o *)in_stack_fffffffffffffe48.rgctx_data;
    SimpleJSONFixed_JSONNode_ValueEnumerator__get_Current(__this_14,(MethodInfo *)local_128);
    il2cpp_runtime_helper_022b2c90();
    json = (SimpleJSONFixed_JSONNode_o *)pSVar21;
  }
  else {
    cVar10 = (*(json->klass->vtable)._16_get_IsArray.methodPtr)(json);
    pSVar21 = (System_String_o *)json;
    if (cVar10 != '\0') {
      pCVar13 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
      CustomLogic_CustomLogicListBuiltin___ctor(pCVar13,(MethodInfo *)0x0);
      SimpleJSONFixed_JSONNode__get_Values
                ((SimpleJSONFixed_JSONNode_ValueEnumerator_o *)&stack0xfffffffffffffe10,json,(MethodInfo *)0x0
                );
      local_88._64_8_ = local_1b0;
      local_88._0_8_ = CONCAT44(in_stack_fffffffffffffe14,in_stack_fffffffffffffe10);
      __this_06.fields.m_Enumerator.fields.m_Object.fields._dictionary._0_4_ = in_stack_fffffffffffffe10;
      __this_06.fields.m_Enumerator.fields._0_8_ = in_stack_fffffffffffffe08;
      __this_06.fields.m_Enumerator.fields.m_Object.fields._dictionary._4_4_ = in_stack_fffffffffffffe14;
      __this_06.fields.m_Enumerator.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffe18;
      __this_06.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
           (Il2CppObject *)in_stack_fffffffffffffe20;
      __this_06.fields.m_Enumerator.fields.m_Object.fields._current.fields.value = in_stack_fffffffffffffe28;
      __this_06.fields.m_Enumerator.fields.m_Object.fields._32_8_ = in_stack_fffffffffffffe30;
      __this_06.fields.m_Enumerator.fields.m_Array.fields._list =
           (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe38;
      __this_06.fields.m_Enumerator.fields.m_Array.fields._8_8_ = in_stack_fffffffffffffe40;
      __this_06.fields.m_Enumerator.fields.m_Array.fields._current =
           (SimpleJSONFixed_JSONNode_o *)in_stack_fffffffffffffe48.rgctx_data;
      local_88._8_8_ = in_stack_fffffffffffffe18;
      local_88._16_8_ = in_stack_fffffffffffffe20;
      local_88._24_8_ = in_stack_fffffffffffffe28;
      local_88._32_8_ = in_stack_fffffffffffffe30;
      local_88._40_8_ = in_stack_fffffffffffffe38;
      local_88._48_8_ = in_stack_fffffffffffffe40;
      local_88._56_8_ = in_stack_fffffffffffffe48;
      SimpleJSONFixed_JSONNode_ValueEnumerator__GetEnumerator
                ((SimpleJSONFixed_JSONNode_ValueEnumerator_o *)&stack0xfffffffffffffe10,__this_06,
                 (MethodInfo *)local_88);
      local_128._64_8_ = local_1b0;
      local_128._0_8_ = CONCAT44(in_stack_fffffffffffffe14,in_stack_fffffffffffffe10);
      __this_07.fields.m_Enumerator.fields.m_Object.fields._dictionary._0_4_ = in_stack_fffffffffffffe10;
      __this_07.fields.m_Enumerator.fields._0_8_ = in_stack_fffffffffffffe08;
      __this_07.fields.m_Enumerator.fields.m_Object.fields._dictionary._4_4_ = in_stack_fffffffffffffe14;
      __this_07.fields.m_Enumerator.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffe18;
      __this_07.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
           (Il2CppObject *)in_stack_fffffffffffffe20;
      __this_07.fields.m_Enumerator.fields.m_Object.fields._current.fields.value = in_stack_fffffffffffffe28;
      __this_07.fields.m_Enumerator.fields.m_Object.fields._32_8_ = in_stack_fffffffffffffe30;
      __this_07.fields.m_Enumerator.fields.m_Array.fields._list =
           (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe38;
      __this_07.fields.m_Enumerator.fields.m_Array.fields._8_8_ = in_stack_fffffffffffffe40;
      __this_07.fields.m_Enumerator.fields.m_Array.fields._current =
           (SimpleJSONFixed_JSONNode_o *)in_stack_fffffffffffffe48.rgctx_data;
      local_128._8_8_ = in_stack_fffffffffffffe18;
      local_128._16_8_ = in_stack_fffffffffffffe20;
      local_128._24_8_ = in_stack_fffffffffffffe28;
      local_128._32_8_ = in_stack_fffffffffffffe30;
      local_128._40_8_ = in_stack_fffffffffffffe38;
      local_128._48_8_ = in_stack_fffffffffffffe40;
      local_128._56_8_ = in_stack_fffffffffffffe48;
      bVar11 = SimpleJSONFixed_JSONNode_ValueEnumerator__MoveNext(__this_07,(MethodInfo *)local_128);
      if ((char)bVar11 == '\0') {
        return (Il2CppObject *)pCVar13;
      }
      if (pCVar13 != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
        while( true ) {
          pMVar18 = (MethodInfo *)0x0;
          __this_09.fields.m_Enumerator.fields.m_Object.fields._dictionary._0_4_ = in_stack_fffffffffffffe10;
          __this_09.fields.m_Enumerator.fields._0_8_ = in_stack_fffffffffffffe08;
          __this_09.fields.m_Enumerator.fields.m_Object.fields._dictionary._4_4_ = in_stack_fffffffffffffe14;
          __this_09.fields.m_Enumerator.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffe18;
          __this_09.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
               (Il2CppObject *)in_stack_fffffffffffffe20;
          __this_09.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
               in_stack_fffffffffffffe28;
          __this_09.fields.m_Enumerator.fields.m_Object.fields._32_8_ = in_stack_fffffffffffffe30;
          __this_09.fields.m_Enumerator.fields.m_Array.fields._list =
               (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe38;
          __this_09.fields.m_Enumerator.fields.m_Array.fields._8_8_ = in_stack_fffffffffffffe40;
          __this_09.fields.m_Enumerator.fields.m_Array.fields._current =
               (SimpleJSONFixed_JSONNode_o *)in_stack_fffffffffffffe48.rgctx_data;
          pSVar14 = SimpleJSONFixed_JSONNode_ValueEnumerator__get_Current(__this_09,(MethodInfo *)local_128);
          pSVar3 = (pCVar13->fields).List;
          pIVar15 = CustomLogic_CustomLogicJsonBuiltin__LoadJSON(pSVar14,pMVar18);
          lVar7 = MethodInfo_Void_Add;
          json = (SimpleJSONFixed_JSONNode_o *)&MethodInfo_Void_Add;
          if (pSVar3 == (System_Collections_Generic_List_object__o *)0x0) break;
          piVar9 = &(pSVar3->fields)._version;
          *piVar9 = *piVar9 + 1;
          pSVar4 = (pSVar3->fields)._items;
          json = (SimpleJSONFixed_JSONNode_o *)&MethodInfo_Void_Add;
          if (pSVar4 == (System_Object_array *)0x0) break;
          uVar12 = (pSVar3->fields)._size;
          if (uVar12 < (uint)pSVar4->max_length) {
            (pSVar3->fields)._size = uVar12 + 1;
            pSVar4->m_Items[(int)uVar12] = pIVar15;
            il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar12);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (pSVar3,pIVar15,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
          }
          __this_08.fields.m_Enumerator.fields.m_Object.fields._dictionary._0_4_ = in_stack_fffffffffffffe10;
          __this_08.fields.m_Enumerator.fields._0_8_ = in_stack_fffffffffffffe08;
          __this_08.fields.m_Enumerator.fields.m_Object.fields._dictionary._4_4_ = in_stack_fffffffffffffe14;
          __this_08.fields.m_Enumerator.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffe18;
          __this_08.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
               (Il2CppObject *)in_stack_fffffffffffffe20;
          __this_08.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
               in_stack_fffffffffffffe28;
          __this_08.fields.m_Enumerator.fields.m_Object.fields._32_8_ = in_stack_fffffffffffffe30;
          __this_08.fields.m_Enumerator.fields.m_Array.fields._list =
               (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe38;
          __this_08.fields.m_Enumerator.fields.m_Array.fields._8_8_ = in_stack_fffffffffffffe40;
          __this_08.fields.m_Enumerator.fields.m_Array.fields._current =
               (SimpleJSONFixed_JSONNode_o *)in_stack_fffffffffffffe48.rgctx_data;
          bVar11 = SimpleJSONFixed_JSONNode_ValueEnumerator__MoveNext(__this_08,(MethodInfo *)local_128);
          if ((char)bVar11 == '\0') {
            return (Il2CppObject *)pCVar13;
          }
        }
        goto label_042352c5;
      }
      goto label_04235316;
    }
    cVar10 = (*(json->klass->vtable)._17_get_IsObject.methodPtr)(json);
    if (cVar10 == '\0') {
      cVar10 = (*(json->klass->vtable)._13_get_IsString.methodPtr)
                         (json,(json->klass->vtable)._13_get_IsString.method);
      if (cVar10 != '\0') {
        pSVar21 = (System_String_o *)
                  (*(json->klass->vtable)._9_get_Value.methodPtr)
                            (json,(json->klass->vtable)._9_get_Value.method);
        if ((pSVar21 == (System_String_o *)0x0) ||
           (pSVar20 = System_String__Split(pSVar21,0x3a,0,(MethodInfo *)0x0),
           json = (SimpleJSONFixed_JSONNode_o *)pSVar21, pSVar20 == (System_String_array *)0x0))
        goto label_042352c5;
        if ((int)pSVar20->max_length == 0) goto label_042352ca;
        pSVar17 = pSVar20->m_Items[0];
        bVar11 = System_String__op_Equality(pSVar17,"float",(MethodInfo *)0x0);
        if ((char)bVar11 != '\0') {
          pSVar21 = System_String__Substring(pSVar21,6,(MethodInfo *)0x0);
          System_Single__Parse(pSVar21,(MethodInfo *)0x0);
          pSVar27 = g_data_057b9be8;
label_04234f54:
          pIVar15 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(pSVar27,&stack0xfffffffffffffe10);
          return pIVar15;
        }
        bVar11 = System_String__op_Equality(pSVar17,"int",(MethodInfo *)0x0);
        if ((char)bVar11 != '\0') {
          pSVar21 = System_String__Substring(pSVar21,4,(MethodInfo *)0x0);
          System_Int32__Parse(pSVar21,(MethodInfo *)0x0);
          pSVar27 = g_data_057b9bb8;
          goto label_04234f54;
        }
        bVar11 = System_String__op_Equality(pSVar17,"string",(MethodInfo *)0x0);
        if ((char)bVar11 != '\0') {
          pSVar21 = System_String__Substring(pSVar21,7,(MethodInfo *)0x0);
          return (Il2CppObject *)pSVar21;
        }
        bVar11 = System_String__op_Equality(pSVar17,"bool",(MethodInfo *)0x0);
        if ((char)bVar11 != '\0') {
          pSVar21 = System_String__Substring(pSVar21,5,(MethodInfo *)0x0);
          System_String__op_Equality(pSVar21,"1",(MethodInfo *)0x0);
          pSVar27 = g_data_057b9b98;
          goto label_04234f54;
        }
        bVar11 = System_String__op_Equality(pSVar17,"null",(MethodInfo *)0x0);
        if ((char)bVar11 != '\0') {
          return (Il2CppObject *)0x0;
        }
        bVar11 = System_String__op_Equality(pSVar17,"vector3",(MethodInfo *)0x0);
        if ((char)bVar11 == '\0') {
          bVar11 = System_String__op_Equality(pSVar17,"quaternion",(MethodInfo *)0x0);
          if ((char)bVar11 == '\0') {
            bVar11 = System_String__op_Equality(pSVar17,"color",(MethodInfo *)0x0);
            if ((char)bVar11 == '\0') goto label_042352cf;
            pSVar17 = System_String__Substring(pSVar21,6,(MethodInfo *)0x0);
            if ((pSVar17 == (System_String_o *)0x0) ||
               (pSVar20 = System_String__Split(pSVar17,0x2c,0,(MethodInfo *)0x0),
               pSVar20 == (System_String_array *)0x0)) goto label_042352c5;
            if (((int)pSVar20->max_length != 0) &&
               ((r = System_Int32__Parse(pSVar20->m_Items[0],(MethodInfo *)0x0), 1 < (uint)pSVar20->max_length
                && (uVar12 = System_Int32__Parse(pSVar20->m_Items[1],(MethodInfo *)0x0),
                   2 < (uint)pSVar20->max_length)))) {
              pSVar21 = (System_String_o *)(ulong)uVar12;
              b = System_Int32__Parse(pSVar20->m_Items[2],(MethodInfo *)0x0);
              if (3 < (uint)pSVar20->max_length) {
                a = System_Int32__Parse(pSVar20->m_Items[3],(MethodInfo *)0x0);
                __this_19 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
                Utility_Color255___ctor(__this_19,r,uVar12,b,a,(MethodInfo *)0x0);
                __this_20 = (CustomLogic_CustomLogicColorBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicColorBuiltin);
                CustomLogic_CustomLogicColorBuiltin___ctor_3fb9d30(__this_20,__this_19,(MethodInfo *)0x0);
                return (Il2CppObject *)__this_20;
              }
            }
          }
          else {
            pSVar17 = System_String__Substring(pSVar21,0xb,(MethodInfo *)0x0);
            if ((pSVar17 == (System_String_o *)0x0) ||
               (pSVar20 = System_String__Split(pSVar17,0x2c,0,(MethodInfo *)0x0),
               pSVar20 == (System_String_array *)0x0)) goto label_042352c5;
            if (((int)pSVar20->max_length != 0) &&
               (((value.fields.x = System_Single__Parse(pSVar20->m_Items[0],(MethodInfo *)0x0),
                 1 < (uint)pSVar20->max_length &&
                 (fVar29 = System_Single__Parse(pSVar20->m_Items[1],(MethodInfo *)0x0),
                 2 < (uint)pSVar20->max_length)) &&
                (fVar28 = System_Single__Parse(pSVar20->m_Items[2],(MethodInfo *)0x0),
                3 < (uint)pSVar20->max_length)))) {
              local_88._80_4_ = System_Single__Parse(pSVar20->m_Items[3],(MethodInfo *)0x0);
              __this_18 = (CustomLogic_CustomLogicQuaternionBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicQuaternionBuiltin);
              value.fields.y = fVar29;
              value.fields.w = (float)local_88._80_4_;
              value.fields.z = fVar28;
              CustomLogic_CustomLogicQuaternionBuiltin___ctor_3fc4b20(__this_18,value,(MethodInfo *)0x0);
              return (Il2CppObject *)__this_18;
            }
          }
        }
        else {
          pSVar17 = System_String__Substring(pSVar21,8,(MethodInfo *)0x0);
          if ((pSVar17 == (System_String_o *)0x0) ||
             (pSVar20 = System_String__Split(pSVar17,0x2c,0,(MethodInfo *)0x0),
             pSVar20 == (System_String_array *)0x0)) goto label_042352c5;
          if (((int)pSVar20->max_length != 0) &&
             ((value_00.fields.x = System_Single__Parse(pSVar20->m_Items[0],(MethodInfo *)0x0),
              1 < (uint)pSVar20->max_length &&
              (fVar29 = System_Single__Parse(pSVar20->m_Items[1],(MethodInfo *)0x0),
              2 < (uint)pSVar20->max_length)))) {
            fVar28 = System_Single__Parse(pSVar20->m_Items[2],(MethodInfo *)0x0);
            __this_17 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
            value_00.fields.y = fVar29;
            value_00.fields.z = fVar28;
            CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(__this_17,value_00,(MethodInfo *)0x0);
            return (Il2CppObject *)__this_17;
          }
        }
        goto label_042352ca;
      }
      goto label_042352cf;
    }
    __this_16 = (CustomLogic_CustomLogicDictBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicDictBuiltin);
    CustomLogic_CustomLogicDictBuiltin___ctor(__this_16,(MethodInfo *)0x0);
    SimpleJSONFixed_JSONNode__get_Keys
              ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&stack0xfffffffffffffe10,json,(MethodInfo *)0x0);
    local_d8._64_8_ = local_1b0;
    local_d8._0_8_ = CONCAT44(in_stack_fffffffffffffe14,in_stack_fffffffffffffe10);
    __this_10.fields.m_Enumerator.fields.m_Object.fields._dictionary._0_4_ = in_stack_fffffffffffffe10;
    __this_10.fields.m_Enumerator.fields._0_8_ = in_stack_fffffffffffffe08;
    __this_10.fields.m_Enumerator.fields.m_Object.fields._dictionary._4_4_ = in_stack_fffffffffffffe14;
    __this_10.fields.m_Enumerator.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffe18;
    __this_10.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
         (Il2CppObject *)in_stack_fffffffffffffe20;
    __this_10.fields.m_Enumerator.fields.m_Object.fields._current.fields.value = in_stack_fffffffffffffe28;
    __this_10.fields.m_Enumerator.fields.m_Object.fields._32_8_ = in_stack_fffffffffffffe30;
    __this_10.fields.m_Enumerator.fields.m_Array.fields._list =
         (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe38;
    __this_10.fields.m_Enumerator.fields.m_Array.fields._8_8_ = in_stack_fffffffffffffe40;
    __this_10.fields.m_Enumerator.fields.m_Array.fields._current =
         (SimpleJSONFixed_JSONNode_o *)in_stack_fffffffffffffe48.rgctx_data;
    local_d8._8_8_ = in_stack_fffffffffffffe18;
    local_d8._16_8_ = in_stack_fffffffffffffe20;
    local_d8._24_8_ = in_stack_fffffffffffffe28;
    local_d8._32_8_ = in_stack_fffffffffffffe30;
    local_d8._40_8_ = in_stack_fffffffffffffe38;
    local_d8._48_8_ = in_stack_fffffffffffffe40;
    local_d8._56_8_ = in_stack_fffffffffffffe48;
    SimpleJSONFixed_JSONNode_KeyEnumerator__GetEnumerator
              ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&stack0xfffffffffffffe10,__this_10,
               (MethodInfo *)local_d8);
    local_178._64_8_ = local_1b0;
    local_178._0_8_ = CONCAT44(in_stack_fffffffffffffe14,in_stack_fffffffffffffe10);
    __this_11.fields.m_Enumerator.fields.m_Object.fields._dictionary._0_4_ = in_stack_fffffffffffffe10;
    __this_11.fields.m_Enumerator.fields._0_8_ = in_stack_fffffffffffffe08;
    __this_11.fields.m_Enumerator.fields.m_Object.fields._dictionary._4_4_ = in_stack_fffffffffffffe14;
    __this_11.fields.m_Enumerator.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffe18;
    __this_11.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
         (Il2CppObject *)in_stack_fffffffffffffe20;
    __this_11.fields.m_Enumerator.fields.m_Object.fields._current.fields.value = in_stack_fffffffffffffe28;
    __this_11.fields.m_Enumerator.fields.m_Object.fields._32_8_ = in_stack_fffffffffffffe30;
    __this_11.fields.m_Enumerator.fields.m_Array.fields._list =
         (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe38;
    __this_11.fields.m_Enumerator.fields.m_Array.fields._8_8_ = in_stack_fffffffffffffe40;
    __this_11.fields.m_Enumerator.fields.m_Array.fields._current =
         (SimpleJSONFixed_JSONNode_o *)in_stack_fffffffffffffe48.rgctx_data;
    local_178._8_8_ = in_stack_fffffffffffffe18;
    local_178._16_8_ = in_stack_fffffffffffffe20;
    local_178._24_8_ = in_stack_fffffffffffffe28;
    local_178._32_8_ = in_stack_fffffffffffffe30;
    local_178._40_8_ = in_stack_fffffffffffffe38;
    local_178._48_8_ = in_stack_fffffffffffffe40;
    local_178._56_8_ = in_stack_fffffffffffffe48;
    bVar11 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext(__this_11,(MethodInfo *)local_178);
    if ((char)bVar11 == '\0') {
      return (Il2CppObject *)__this_16;
    }
    if (__this_16 != (CustomLogic_CustomLogicDictBuiltin_o *)0x0) {
      do {
        __this_12.fields.m_Enumerator.fields.m_Object.fields._dictionary._0_4_ = in_stack_fffffffffffffe10;
        __this_12.fields.m_Enumerator.fields._0_8_ = in_stack_fffffffffffffe08;
        __this_12.fields.m_Enumerator.fields.m_Object.fields._dictionary._4_4_ = in_stack_fffffffffffffe14;
        __this_12.fields.m_Enumerator.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffe18;
        __this_12.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
             (Il2CppObject *)in_stack_fffffffffffffe20;
        __this_12.fields.m_Enumerator.fields.m_Object.fields._current.fields.value = in_stack_fffffffffffffe28
        ;
        __this_12.fields.m_Enumerator.fields.m_Object.fields._32_8_ = in_stack_fffffffffffffe30;
        __this_12.fields.m_Enumerator.fields.m_Array.fields._list =
             (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe38;
        __this_12.fields.m_Enumerator.fields.m_Array.fields._8_8_ = in_stack_fffffffffffffe40;
        __this_12.fields.m_Enumerator.fields.m_Array.fields._current =
             (SimpleJSONFixed_JSONNode_o *)in_stack_fffffffffffffe48.rgctx_data;
        key = (MethodInfo *)
              SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current(__this_12,(MethodInfo *)local_178);
        pMVar18 = key;
        pSVar14 = (SimpleJSONFixed_JSONNode_o *)
                  (*(json->klass->vtable)._7_get_Item.methodPtr)
                            (json,key,(json->klass->vtable)._7_get_Item.method);
        pIVar15 = CustomLogic_CustomLogicJsonBuiltin__LoadJSON(pSVar14,pMVar18);
        CustomLogic_CustomLogicDictBuiltin__Set(__this_16,(Il2CppObject *)key,pIVar15,(MethodInfo *)0x0);
        __this_13.fields.m_Enumerator.fields.m_Object.fields._dictionary._0_4_ = in_stack_fffffffffffffe10;
        __this_13.fields.m_Enumerator.fields._0_8_ = in_stack_fffffffffffffe08;
        __this_13.fields.m_Enumerator.fields.m_Object.fields._dictionary._4_4_ = in_stack_fffffffffffffe14;
        __this_13.fields.m_Enumerator.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffe18;
        __this_13.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
             (Il2CppObject *)in_stack_fffffffffffffe20;
        __this_13.fields.m_Enumerator.fields.m_Object.fields._current.fields.value = in_stack_fffffffffffffe28
        ;
        __this_13.fields.m_Enumerator.fields.m_Object.fields._32_8_ = in_stack_fffffffffffffe30;
        __this_13.fields.m_Enumerator.fields.m_Array.fields._list =
             (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe38;
        __this_13.fields.m_Enumerator.fields.m_Array.fields._8_8_ = in_stack_fffffffffffffe40;
        __this_13.fields.m_Enumerator.fields.m_Array.fields._current =
             (SimpleJSONFixed_JSONNode_o *)in_stack_fffffffffffffe48.rgctx_data;
        bVar11 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext(__this_13,(MethodInfo *)local_178);
      } while ((char)bVar11 != '\0');
      return (Il2CppObject *)__this_16;
    }
  }
  __this_15.fields.m_Enumerator.fields.m_Object.fields._dictionary._0_4_ = in_stack_fffffffffffffe10;
  __this_15.fields.m_Enumerator.fields._0_8_ = in_stack_fffffffffffffe08;
  __this_15.fields.m_Enumerator.fields.m_Object.fields._dictionary._4_4_ = in_stack_fffffffffffffe14;
  __this_15.fields.m_Enumerator.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffe18;
  __this_15.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
       (Il2CppObject *)in_stack_fffffffffffffe20;
  __this_15.fields.m_Enumerator.fields.m_Object.fields._current.fields.value = in_stack_fffffffffffffe28;
  __this_15.fields.m_Enumerator.fields.m_Object.fields._32_8_ = in_stack_fffffffffffffe30;
  __this_15.fields.m_Enumerator.fields.m_Array.fields._list =
       (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe38;
  __this_15.fields.m_Enumerator.fields.m_Array.fields._8_8_ = in_stack_fffffffffffffe40;
  __this_15.fields.m_Enumerator.fields.m_Array.fields._current =
       (SimpleJSONFixed_JSONNode_o *)in_stack_fffffffffffffe48.rgctx_data;
  pMVar18 = (MethodInfo *)
            SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current(__this_15,(MethodInfo *)local_178);
  ppSVar19 = (System_String_o **)
             (*(((System_String_o *)json)->klass->vtable)._7_CompareTo.methodPtr)
                       (json,pMVar18,(((System_String_o *)json)->klass->vtable)._7_CompareTo.method);
  CustomLogic_CustomLogicJsonBuiltin__LoadJSON((SimpleJSONFixed_JSONNode_o *)ppSVar19,pMVar18);
  il2cpp_runtime_helper_022b2c90();
  pSVar14 = CustomLogic_CustomLogicJsonBuiltin__SaveJSON((Il2CppObject *)ppSVar19,pMVar18);
  if (pSVar14 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar5 = pSVar14->klass;
    vtableDispatch = (pSVar5->vtable)._30_ToString.methodPtr;
    pIVar15 = (Il2CppObject *)
              (*vtableDispatch)
                        (pSVar14,4,(pSVar5->vtable)._30_ToString.method,pSVar5,vtableDispatch);
    return pIVar15;
  }
  il2cpp_runtime_helper_022b2c90();
  _Stack_230 = unaff_RBX;
  if (g_data_057adadd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicDictBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicQuaternionBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONArray);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONString);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_Object_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"int:");
    il2cpp_runtime_helper_023445d0(&"null:null");
    il2cpp_runtime_helper_023445d0(&"bool:");
    il2cpp_runtime_helper_023445d0(&"float:");
    il2cpp_runtime_helper_023445d0(&"string:");
    il2cpp_runtime_helper_023445d0(&"quaternion:");
    il2cpp_runtime_helper_023445d0(&",");
    il2cpp_runtime_helper_023445d0(&"color:");
    il2cpp_runtime_helper_023445d0(&"vector3:");
    il2cpp_runtime_helper_023445d0(&"1");
    il2cpp_runtime_helper_023445d0(&"0");
    g_data_057adadd = '\x01';
  }
  _Var31.genericMethod = (Il2CppMethodPointer)0x0;
  pIVar32 = (Il2CppClass *)0x0;
  pIVar33 = (Il2CppClass *)0x0;
  uStack_26c = 0;
  uStack_270 = 0;
  uStack_260 = 0;
  pSStack_268 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pSStack_258 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
  pIStack_250 = (Il2CppRGCTXData *)0x0;
  if ((CustomLogic_CustomLogicDictBuiltin_o *)ppSVar19 == (CustomLogic_CustomLogicDictBuiltin_o *)0x0) {
    __this_21 = (SimpleJSONFixed_JSONString_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONString);
    pSVar21 = "null:null";
    goto label_04235a00;
  }
  pSVar27 = (System_Exception_c *)((CustomLogic_CustomLogicDictBuiltin_o *)ppSVar19)->klass;
  bVar1 = (pSVar27->_2).naturalAligment;
  bVar2 = (TypeInfo_CustomLogicDictBuiltin->_2).naturalAligment;
  if ((bVar1 < bVar2) || ((pSVar27->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_CustomLogicDictBuiltin)) {
    bVar2 = (TypeInfo_CustomLogicListBuiltin->_2).naturalAligment;
    if ((bVar2 <= bVar1) && ((pSVar27->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_CustomLogicListBuiltin)) {
      unaff_R12 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONArray);
      SimpleJSONFixed_JSONArray___ctor((SimpleJSONFixed_JSONArray_o *)unaff_R12,(MethodInfo *)0x0);
      bVar1 = (TypeInfo_CustomLogicListBuiltin->_2).naturalAligment;
      if ((bVar1 <= (((CustomLogic_CustomLogicDictBuiltin_o *)ppSVar19)->klass->_2).naturalAligment) &&
         ((((CustomLogic_CustomLogicDictBuiltin_o *)ppSVar19)->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
          TypeInfo_CustomLogicListBuiltin)) {
        pSVar6 = (((CustomLogic_CustomLogicDictBuiltin_o *)ppSVar19)->fields)._dict;
        if (pSVar6 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_List_object___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)&_Stack_248,
                     (System_Collections_Generic_List_object__o *)pSVar6,MethodInfo_List_1_T_Enumerator_System_Object_GetEnumerator);
          _Var31 = _Stack_248;
          pIVar32 = pIStack_240;
          pIVar33 = pIStack_238;
          if (unaff_R12 != (SimpleJSONFixed_JSONObject_o *)0x0) {
            while (__this_00.fields._8_8_ = pIVar32, __this_00.fields._list = _Var31.genericMethod,
                  __this_00.fields._current = (Il2CppObject *)pIVar33, pMVar18 = MethodInfo_Boolean_MoveNext,
                  bVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                     (__this_00,(MethodInfo_321A1D0 *)&stack0xfffffffffffffd78),
                  _Stack_248 = _Var31, pIStack_240 = pIVar32, pIStack_238 = pIVar33, (char)bVar11 != '\0') {
              pSVar14 = CustomLogic_CustomLogicJsonBuiltin__SaveJSON((Il2CppObject *)pIVar33,pMVar18);
              (*(unaff_R12->klass->vtable)._21_Add.methodPtr)
                        (unaff_R12,pSVar14,(unaff_R12->klass->vtable)._21_Add.method);
            }
            goto label_04235a9a;
          }
          __this_02.fields._8_8_ = pIStack_240;
          __this_02.fields._list = _Stack_248.genericMethod;
          __this_02.fields._current = (Il2CppObject *)pIStack_238;
          pMVar18 = MethodInfo_Boolean_MoveNext;
          bVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext
                             (__this_02,(MethodInfo_321A1D0 *)&stack0xfffffffffffffd78);
          _Var31 = _Stack_248;
          pIVar32 = pIStack_240;
          pIVar33 = pIStack_238;
          if ((char)bVar11 == '\0') goto label_04235a9a;
          goto label_04235dd5;
        }
        goto label_04235d46;
      }
      goto label_04235d3e;
    }
    pSVar21 = "string:";
    if (pSVar27 == g_data_057b9c00) {
label_042359de:
      pSVar21 = System_String__Concat_3ae5ba0(pSVar21,(System_String_o *)ppSVar19,(MethodInfo *)0x0);
label_042359e5:
      __this_21 = (SimpleJSONFixed_JSONString_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONString);
label_04235a00:
      SimpleJSONFixed_JSONString___ctor(__this_21,pSVar21,(MethodInfo *)0x0);
      return (Il2CppObject *)__this_21;
    }
    if (pSVar27 == g_data_057b9be8) {
      puVar22 = (undefined4 *)il2cpp_runtime_helper_02305440(ppSVar19);
      uStack_26c = *puVar22;
      ppSVar19 = (System_String_o **)System_Single__ToString(__this_24,(MethodInfo *)&uStack_26c);
      puVar26 = &"float:";
label_042359d8:
      pSVar21 = (System_String_o *)*puVar26;
      goto label_042359de;
    }
    if (pSVar27 == g_data_057b9bb8) {
      puVar22 = (undefined4 *)il2cpp_runtime_helper_02305440(ppSVar19);
      uStack_270 = *puVar22;
      ppSVar19 = (System_String_o **)System_Int32__ToString((int32_t)&uStack_270,(MethodInfo *)0x0);
      puVar26 = &"int:";
      goto label_042359d8;
    }
    if (pSVar27 == g_data_057b9b98) {
label_04235a60:
      pcVar23 = (char *)il2cpp_runtime_helper_02305440(ppSVar19);
      if (*pcVar23 == '\0') {
        ppSVar19 = (System_String_o **)&"0";
      }
      else {
        ppSVar19 = &"1";
      }
      ppSVar19 = (System_String_o **)*ppSVar19;
      pSVar21 = "bool:";
      goto label_042359de;
    }
    bVar2 = (TypeInfo_CustomLogicVector3Builtin->_2).naturalAligment;
    if ((bVar2 <= bVar1) && ((pSVar27->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_CustomLogicVector3Builtin)) {
      uStack_260 = *(undefined4 *)&(((CustomLogic_CustomLogicDictBuiltin_o *)ppSVar19)->fields)._cachedKeys;
      pSStack_268 = (System_Collections_Generic_List_Enumerator_T__c *)
                    (((CustomLogic_CustomLogicDictBuiltin_o *)ppSVar19)->fields)._dict;
      pSVar20 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string);
      if (pSVar20 == (System_String_array *)0x0) goto label_04235d46;
      if ((int)pSVar20->max_length == 0) {
label_04235cea:
        il2cpp_runtime_helper_022b2ca0();
        goto label_04235cef;
      }
      pSVar20->m_Items[0] = "vector3:";
      fVar29 = (float)il2cpp_runtime_helper_022b4080(pSVar20->m_Items);
      pSVar21 = System_Single__ToString(fVar29,(MethodInfo *)&pSStack_268);
      if ((uint)pSVar20->max_length < 2) goto label_04235cea;
      pSVar20->m_Items[1] = pSVar21;
      il2cpp_runtime_helper_022b4080(pSVar20->m_Items + 1,pSVar21);
      if ((uint)pSVar20->max_length < 3) goto label_04235cea;
      ppSVar19 = &",";
      pSVar20->m_Items[2] = ",";
      fVar29 = (float)il2cpp_runtime_helper_022b4080(pSVar20->m_Items + 2);
      pSVar21 = System_Single__ToString(fVar29,(MethodInfo *)((long)&pSStack_268 + 4));
      if ((uint)pSVar20->max_length < 4) goto label_04235cea;
      pSVar20->m_Items[3] = pSVar21;
      il2cpp_runtime_helper_022b4080(pSVar20->m_Items + 3,pSVar21);
      if ((uint)pSVar20->max_length < 5) goto label_04235cea;
      pSVar20->m_Items[4] = ",";
      fVar29 = (float)il2cpp_runtime_helper_022b4080(pSVar20->m_Items + 4);
      pSVar21 = System_Single__ToString(fVar29,(MethodInfo *)&uStack_260);
      if ((uint)pSVar20->max_length < 6) goto label_04235cea;
      ppSVar19 = pSVar20->m_Items + 5;
      pSVar20->m_Items[5] = pSVar21;
label_04235751:
      il2cpp_runtime_helper_022b4080(ppSVar19);
      pSVar21 = System_String__Concat_3af7570(pSVar20,(MethodInfo *)0x0);
      goto label_042359e5;
    }
    bVar2 = (TypeInfo_CustomLogicColorBuiltin->_2).naturalAligment;
    if ((bVar2 <= bVar1) && ((pSVar27->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_CustomLogicColorBuiltin)) {
      pSVar6 = (((CustomLogic_CustomLogicDictBuiltin_o *)ppSVar19)->fields)._dict;
      pSVar20 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string);
      if (pSVar20 != (System_String_array *)0x0) {
        if ((int)pSVar20->max_length != 0) {
          pSVar20->m_Items[0] = "color:";
          il2cpp_runtime_helper_022b4080(pSVar20->m_Items);
          if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04235d46;
          iVar8 = (int)pSVar6;
          pSVar21 = System_Int32__ToString(iVar8 + 0x10,(MethodInfo *)0x0);
          if (1 < (uint)pSVar20->max_length) {
            pSVar20->m_Items[1] = pSVar21;
            il2cpp_runtime_helper_022b4080(pSVar20->m_Items + 1,pSVar21);
            if (2 < (uint)pSVar20->max_length) {
              ppSVar19 = &",";
              pSVar20->m_Items[2] = ",";
              il2cpp_runtime_helper_022b4080(pSVar20->m_Items + 2);
              pSVar21 = System_Int32__ToString(iVar8 + 0x14,(MethodInfo *)0x0);
              if (3 < (uint)pSVar20->max_length) {
                pSVar20->m_Items[3] = pSVar21;
                il2cpp_runtime_helper_022b4080(pSVar20->m_Items + 3,pSVar21);
                if (4 < (uint)pSVar20->max_length) {
                  pSVar20->m_Items[4] = ",";
                  il2cpp_runtime_helper_022b4080(pSVar20->m_Items + 4);
                  pSVar21 = System_Int32__ToString(iVar8 + 0x18,(MethodInfo *)0x0);
                  if (5 < (uint)pSVar20->max_length) {
                    pSVar20->m_Items[5] = pSVar21;
                    il2cpp_runtime_helper_022b4080(pSVar20->m_Items + 5,pSVar21);
                    if (6 < (uint)pSVar20->max_length) {
                      pSVar20->m_Items[6] = ",";
                      il2cpp_runtime_helper_022b4080(pSVar20->m_Items + 6);
                      pSVar21 = System_Int32__ToString(iVar8 + 0x1c,(MethodInfo *)0x0);
                      uVar12 = (uint)pSVar20->max_length;
joined_r0x04235740:
                      ppSVar19 = &",";
                      if (7 < uVar12) {
                        ppSVar19 = pSVar20->m_Items + 7;
                        pSVar20->m_Items[7] = pSVar21;
                        goto label_04235751;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto label_04235cea;
      }
      goto label_04235d46;
    }
    bVar2 = (TypeInfo_CustomLogicQuaternionBuiltin->_2).naturalAligment;
    if ((bVar2 <= bVar1) && ((pSVar27->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_CustomLogicQuaternionBuiltin)) {
      pSStack_258 = (((CustomLogic_CustomLogicDictBuiltin_o *)ppSVar19)->fields)._dict;
      pIStack_250 = (Il2CppRGCTXData *)
                    (((CustomLogic_CustomLogicDictBuiltin_o *)ppSVar19)->fields)._cachedKeys;
      pSVar20 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string);
      if (pSVar20 != (System_String_array *)0x0) {
        if ((int)pSVar20->max_length != 0) {
          pSVar20->m_Items[0] = "quaternion:";
          fVar29 = (float)il2cpp_runtime_helper_022b4080(pSVar20->m_Items);
          pSVar21 = System_Single__ToString(fVar29,(MethodInfo *)&pSStack_258);
          if (1 < (uint)pSVar20->max_length) {
            pSVar20->m_Items[1] = pSVar21;
            il2cpp_runtime_helper_022b4080(pSVar20->m_Items + 1,pSVar21);
            if (2 < (uint)pSVar20->max_length) {
              ppSVar19 = &",";
              pSVar20->m_Items[2] = ",";
              fVar29 = (float)il2cpp_runtime_helper_022b4080(pSVar20->m_Items + 2);
              pSVar21 = System_Single__ToString(fVar29,(MethodInfo *)((long)&pSStack_258 + 4));
              if (3 < (uint)pSVar20->max_length) {
                pSVar20->m_Items[3] = pSVar21;
                il2cpp_runtime_helper_022b4080(pSVar20->m_Items + 3,pSVar21);
                if (4 < (uint)pSVar20->max_length) {
                  pSVar20->m_Items[4] = ",";
                  fVar29 = (float)il2cpp_runtime_helper_022b4080(pSVar20->m_Items + 4);
                  pSVar21 = System_Single__ToString(fVar29,(MethodInfo *)&pIStack_250);
                  if (5 < (uint)pSVar20->max_length) {
                    pSVar20->m_Items[5] = pSVar21;
                    il2cpp_runtime_helper_022b4080(pSVar20->m_Items + 5,pSVar21);
                    if (6 < (uint)pSVar20->max_length) {
                      pSVar20->m_Items[6] = ",";
                      fVar29 = (float)il2cpp_runtime_helper_022b4080(pSVar20->m_Items + 6);
                      pSVar21 = System_Single__ToString(fVar29,(MethodInfo *)((long)&pIStack_250 + 4));
                      uVar12 = (uint)pSVar20->max_length;
                      goto joined_r0x04235740;
                    }
                  }
                }
              }
            }
          }
        }
        goto label_04235cea;
      }
      goto label_04235d46;
    }
  }
  else {
    unaff_R12 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONObject);
    SimpleJSONFixed_JSONObject___ctor(unaff_R12,(MethodInfo *)0x0);
    bVar1 = (TypeInfo_CustomLogicDictBuiltin->_2).naturalAligment;
    if (((((CustomLogic_CustomLogicDictBuiltin_o *)ppSVar19)->klass->_2).naturalAligment < bVar1) ||
       ((((CustomLogic_CustomLogicDictBuiltin_o *)ppSVar19)->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        TypeInfo_CustomLogicDictBuiltin)) goto label_04235d3e;
    pCVar13 = CustomLogic_CustomLogicDictBuiltin__get_Keys
                        ((CustomLogic_CustomLogicDictBuiltin_o *)ppSVar19,(MethodInfo *)0x0);
    if ((pCVar13 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) ||
       (pSVar3 = (pCVar13->fields).List, pSVar3 == (System_Collections_Generic_List_object__o *)0x0))
    goto label_04235d46;
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&_Stack_248,pSVar3,MethodInfo_List_1_T_Enumerator_System_Object_GetEnumerator);
    _Var31 = _Stack_248;
    pIVar32 = pIStack_240;
    __this_22 = pIStack_238;
    if (unaff_R12 != (SimpleJSONFixed_JSONObject_o *)0x0) {
      while (__this.fields._8_8_ = pIVar32, __this.fields._list = _Var31.genericMethod,
            __this.fields._current = (Il2CppObject *)__this_22,
            bVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext
                               (__this,(MethodInfo_321A1D0 *)&stack0xfffffffffffffd78), _Stack_248 = _Var31,
            pIStack_240 = pIVar32, pIStack_238 = __this_22, (char)bVar11 != '\0') {
        pIVar33 = __this_22;
        if ((__this_22 == (Il2CppClass *)0x0) || ((__this_22->_1).image != g_data_057b9c00)) goto label_04235cef;
        method_00 = __this_22;
        pIVar15 = CustomLogic_CustomLogicDictBuiltin__Get
                            ((CustomLogic_CustomLogicDictBuiltin_o *)ppSVar19,(Il2CppObject *)__this_22,
                             (Il2CppObject *)0x0,(MethodInfo *)0x0);
        pSVar14 = CustomLogic_CustomLogicJsonBuiltin__SaveJSON(pIVar15,(MethodInfo *)method_00);
        if ((__this_22->_1).image != g_data_057b9c00) goto label_04235d36;
        (*(unaff_R12->klass->vtable)._20_Add.methodPtr)(unaff_R12,__this_22,pSVar14);
        __this_22 = pIVar33;
      }
label_04235a9a:
      __this_03.fields._8_8_ = pIStack_240;
      __this_03.fields._list = _Stack_248.genericMethod;
      __this_03.fields._current = (Il2CppObject *)pIStack_238;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_03,(MethodInfo_321A1C0 *)&stack0xfffffffffffffd78);
      return (Il2CppObject *)unaff_R12;
    }
    __this_01.fields._8_8_ = pIStack_240;
    __this_01.fields._list = _Stack_248.genericMethod;
    __this_01.fields._current = (Il2CppObject *)pIStack_238;
    bVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext
                       (__this_01,(MethodInfo_321A1D0 *)&stack0xfffffffffffffd78);
    if ((char)bVar11 == '\0') goto label_04235a9a;
    _Var31 = _Stack_248;
    pIVar32 = pIStack_240;
    pIVar33 = pIStack_238;
    if ((pIStack_238 != (Il2CppClass *)0x0) && ((pIStack_238->_1).image == g_data_057b9c00)) {
      pIVar15 = CustomLogic_CustomLogicDictBuiltin__Get
                          ((CustomLogic_CustomLogicDictBuiltin_o *)ppSVar19,(Il2CppObject *)pIStack_238,
                           (Il2CppObject *)0x0,(MethodInfo *)0x0);
      CustomLogic_CustomLogicJsonBuiltin__SaveJSON(pIVar15,(MethodInfo *)pIStack_238);
      il2cpp_runtime_helper_022b2c90();
      goto label_04235a60;
    }
label_04235cef:
    uVar16 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    __this_22 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(uVar16);
    pSVar21 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Saving invalid json type: dict must have string keys.");
    System_Exception___ctor_3cf6120((System_Exception_o *)__this_22,pSVar21,(MethodInfo *)0x0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNode_SaveJSON);
    il2cpp_runtime_helper_022b2b10(__this_22);
label_04235d36:
    il2cpp_runtime_helper_022b2fd0(__this_22);
label_04235d3e:
    il2cpp_runtime_helper_022b2fd0(ppSVar19);
label_04235d46:
    il2cpp_runtime_helper_022b2c90();
  }
  il2cpp_runtime_helper_01f681a0(ppSVar19);
  pSVar24 = System_Object__GetType((Il2CppObject *)ppSVar19,(MethodInfo *)0x0);
  il2cpp_runtime_helper_01f681a0(pSVar24);
  pSVar21 = (System_String_o *)
            (*(pSVar24->klass->vtable)._3_ToString.methodPtr)
                      (pSVar24,(pSVar24->klass->vtable)._3_ToString.method);
  pSVar17 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Saving invalid json type: only list, dict, structs, and primitives allowed, got ");
  pSVar21 = System_String__Concat_3ae5ba0(pSVar17,pSVar21,(MethodInfo *)0x0);
  uVar16 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  __this_23 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar16);
  System_Exception___ctor_3cf6120(__this_23,pSVar21,(MethodInfo *)0x0);
  pMVar18 = (MethodInfo *)il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNode_SaveJSON);
  il2cpp_runtime_helper_022b2b10(__this_23);
label_04235dd5:
  CustomLogic_CustomLogicJsonBuiltin__SaveJSON((Il2CppObject *)pIVar33,pMVar18);
  auVar30 = il2cpp_runtime_helper_022b2c90();
  if (auVar30._8_4_ == 1) {
    plVar25 = (long *)__cxa_begin_catch(auVar30._0_8_);
    lVar7 = *plVar25;
    __cxa_end_catch();
    __this_04.fields._8_8_ = pIVar32;
    __this_04.fields._list = _Var31.genericMethod;
    __this_04.fields._current = (Il2CppObject *)pIVar33;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_04,(MethodInfo_321A1C0 *)&stack0xfffffffffffffd78);
    if (lVar7 == 0) {
      return (Il2CppObject *)unaff_R12;
    }
    il2cpp_runtime_helper_022fefe0(lVar7);
  }
  __this_05.fields._8_8_ = pIVar32;
  __this_05.fields._list = _Var31.genericMethod;
  __this_05.fields._current = (Il2CppObject *)pIVar33;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_05,(MethodInfo_321A1C0 *)&stack0xfffffffffffffd78);
  _Unwind_Resume(auVar30._0_8_);
}


// CustomLogic.CustomLogicJsonBuiltin$$SaveJSON
// il2cpp: SimpleJSONFixed_JSONNode_o* CustomLogic_CustomLogicJsonBuiltin__SaveJSON (Il2CppObject* obj, const MethodInfo* method);
// 0x4235390

SimpleJSONFixed_JSONNode_o *
CustomLogic_CustomLogicJsonBuiltin__SaveJSON(Il2CppObject *obj,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  System_Collections_Generic_List_object__o *__this;
  long lVar4;
  int iVar5;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  bool_conflict bVar6;
  System_String_array *values;
  System_String_o *pSVar7;
  CustomLogic_CustomLogicListBuiltin_o *pCVar8;
  Il2CppObject *pIVar9;
  SimpleJSONFixed_JSONNode_o *pSVar10;
  undefined4 *puVar11;
  SimpleJSONFixed_JSONString_o *__this_07;
  char *pcVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  Il2CppClass *pIVar15;
  System_Type_o *pSVar16;
  System_String_o *str0;
  System_Exception_o *__this_08;
  MethodInfo *pMVar17;
  long *plVar18;
  Il2CppClass *method_00;
  System_String_o **ppSVar19;
  SimpleJSONFixed_JSONObject_o *unaff_R12;
  float fVar20;
  float __this_09;
  undefined1 auVar21 [12];
  _union_249689 _Var22;
  Il2CppClass *pIVar23;
  Il2CppClass *pIVar24;
  undefined4 local_70;
  undefined4 local_6c;
  Il2CppClass *local_68;
  undefined4 local_60;
  undefined1 local_58 [8];
  undefined1 auStack_50 [8];
  _union_249689 local_48;
  Il2CppClass *pIStack_40;
  Il2CppClass *local_38;
  
  if (g_data_057adadd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicColorBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicDictBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicQuaternionBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONArray);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONString);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_Object_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"int:");
    il2cpp_runtime_helper_023445d0(&"null:null");
    il2cpp_runtime_helper_023445d0(&"bool:");
    il2cpp_runtime_helper_023445d0(&"float:");
    il2cpp_runtime_helper_023445d0(&"string:");
    il2cpp_runtime_helper_023445d0(&"quaternion:");
    il2cpp_runtime_helper_023445d0(&",");
    il2cpp_runtime_helper_023445d0(&"color:");
    il2cpp_runtime_helper_023445d0(&"vector3:");
    il2cpp_runtime_helper_023445d0(&"1");
    il2cpp_runtime_helper_023445d0(&"0");
    g_data_057adadd = '\x01';
  }
  _Var22.genericMethod = (Il2CppMethodPointer)0x0;
  pIVar23 = (Il2CppClass *)0x0;
  pIVar24 = (Il2CppClass *)0x0;
  local_6c = 0;
  local_70 = 0;
  local_60 = 0;
  local_68 = (Il2CppClass *)0x0;
  local_58 = (undefined1  [8])0x0;
  auStack_50 = (undefined1  [8])0x0;
  if (obj == (Il2CppObject *)0x0) {
    __this_07 = (SimpleJSONFixed_JSONString_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONString);
    pSVar7 = "null:null";
    goto label_04235a00;
  }
  pIVar15 = obj->klass;
  bVar1 = (pIVar15->_2).naturalAligment;
  bVar2 = (TypeInfo_CustomLogicDictBuiltin->_2).naturalAligment;
  if ((bVar1 < bVar2) || ((pIVar15->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_CustomLogicDictBuiltin)) {
    bVar2 = (TypeInfo_CustomLogicListBuiltin->_2).naturalAligment;
    if ((bVar2 <= bVar1) && ((pIVar15->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_CustomLogicListBuiltin)) {
      unaff_R12 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONArray);
      SimpleJSONFixed_JSONArray___ctor((SimpleJSONFixed_JSONArray_o *)unaff_R12,(MethodInfo *)0x0);
      bVar1 = (TypeInfo_CustomLogicListBuiltin->_2).naturalAligment;
      if ((bVar1 <= (obj->klass->_2).naturalAligment) &&
         ((obj->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicListBuiltin)) {
        if (obj[3].klass != (Il2CppClass *)0x0) {
          System_Collections_Generic_List_object___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)&local_48,
                     (System_Collections_Generic_List_object__o *)obj[3].klass,MethodInfo_List_1_T_Enumerator_System_Object_GetEnumerator);
          _Var22 = local_48;
          pIVar23 = pIStack_40;
          pIVar24 = local_38;
          if (unaff_R12 != (SimpleJSONFixed_JSONObject_o *)0x0) {
            while (__this_01.fields._8_8_ = pIVar23, __this_01.fields._list = _Var22.genericMethod,
                  __this_01.fields._current = (Il2CppObject *)pIVar24, pMVar17 = MethodInfo_Boolean_MoveNext,
                  bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                    (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff78),
                  local_48 = _Var22, pIStack_40 = pIVar23, local_38 = pIVar24, (char)bVar6 != '\0') {
              pSVar10 = CustomLogic_CustomLogicJsonBuiltin__SaveJSON((Il2CppObject *)pIVar24,pMVar17);
              (*(unaff_R12->klass->vtable)._21_Add.methodPtr)
                        (unaff_R12,pSVar10,(unaff_R12->klass->vtable)._21_Add.method);
            }
            goto label_04235a9a;
          }
          __this_03.fields._8_8_ = pIStack_40;
          __this_03.fields._list = local_48.genericMethod;
          __this_03.fields._current = (Il2CppObject *)local_38;
          pMVar17 = MethodInfo_Boolean_MoveNext;
          bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_03,(MethodInfo_321A1D0 *)&stack0xffffffffffffff78);
          _Var22 = local_48;
          pIVar23 = pIStack_40;
          pIVar24 = local_38;
          if ((char)bVar6 == '\0') goto label_04235a9a;
          goto label_04235dd5;
        }
        goto label_04235d46;
      }
      goto label_04235d3e;
    }
    pSVar7 = "string:";
    if (pIVar15 == g_data_057b9c00) {
label_042359de:
      pSVar7 = System_String__Concat_3ae5ba0(pSVar7,(System_String_o *)obj,(MethodInfo *)0x0);
label_042359e5:
      __this_07 = (SimpleJSONFixed_JSONString_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONString);
label_04235a00:
      SimpleJSONFixed_JSONString___ctor(__this_07,pSVar7,(MethodInfo *)0x0);
      return (SimpleJSONFixed_JSONNode_o *)__this_07;
    }
    if (pIVar15 == g_data_057b9be8) {
      puVar11 = (undefined4 *)il2cpp_runtime_helper_02305440(obj);
      local_6c = *puVar11;
      obj = (Il2CppObject *)System_Single__ToString(__this_09,(MethodInfo *)&local_6c);
      puVar13 = &"float:";
label_042359d8:
      pSVar7 = (System_String_o *)*puVar13;
      goto label_042359de;
    }
    if (pIVar15 == g_data_057b9bb8) {
      puVar11 = (undefined4 *)il2cpp_runtime_helper_02305440(obj);
      local_70 = *puVar11;
      obj = (Il2CppObject *)System_Int32__ToString((int32_t)&local_70,(MethodInfo *)0x0);
      puVar13 = &"int:";
      goto label_042359d8;
    }
    if (pIVar15 == g_data_057b9b98) {
label_04235a60:
      pcVar12 = (char *)il2cpp_runtime_helper_02305440(obj);
      if (*pcVar12 == '\0') {
        puVar13 = &"0";
      }
      else {
        puVar13 = &"1";
      }
      obj = (Il2CppObject *)*puVar13;
      pSVar7 = "bool:";
      goto label_042359de;
    }
    bVar2 = (TypeInfo_CustomLogicVector3Builtin->_2).naturalAligment;
    if ((bVar2 <= bVar1) && ((pIVar15->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_CustomLogicVector3Builtin)) {
      local_60 = *(undefined4 *)&obj[3].monitor;
      local_68 = obj[3].klass;
      values = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string);
      if (values == (System_String_array *)0x0) goto label_04235d46;
      if ((int)values->max_length == 0) {
label_04235cea:
        il2cpp_runtime_helper_022b2ca0();
        goto label_04235cef;
      }
      values->m_Items[0] = "vector3:";
      fVar20 = (float)il2cpp_runtime_helper_022b4080(values->m_Items);
      pSVar7 = System_Single__ToString(fVar20,(MethodInfo *)&local_68);
      if ((uint)values->max_length < 2) goto label_04235cea;
      values->m_Items[1] = pSVar7;
      il2cpp_runtime_helper_022b4080(values->m_Items + 1,pSVar7);
      if ((uint)values->max_length < 3) goto label_04235cea;
      values->m_Items[2] = ",";
      fVar20 = (float)il2cpp_runtime_helper_022b4080(values->m_Items + 2);
      pSVar7 = System_Single__ToString(fVar20,(MethodInfo *)((long)&local_68 + 4));
      obj = (Il2CppObject *)&",";
      if ((uint)values->max_length < 4) goto label_04235cea;
      values->m_Items[3] = pSVar7;
      il2cpp_runtime_helper_022b4080(values->m_Items + 3,pSVar7);
      if ((uint)values->max_length < 5) goto label_04235cea;
      values->m_Items[4] = ",";
      fVar20 = (float)il2cpp_runtime_helper_022b4080(values->m_Items + 4);
      pSVar7 = System_Single__ToString(fVar20,(MethodInfo *)&local_60);
      if ((uint)values->max_length < 6) goto label_04235cea;
      ppSVar19 = values->m_Items + 5;
      values->m_Items[5] = pSVar7;
label_04235751:
      il2cpp_runtime_helper_022b4080(ppSVar19);
      pSVar7 = System_String__Concat_3af7570(values,(MethodInfo *)0x0);
      goto label_042359e5;
    }
    bVar2 = (TypeInfo_CustomLogicColorBuiltin->_2).naturalAligment;
    if ((bVar2 <= bVar1) && ((pIVar15->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_CustomLogicColorBuiltin)) {
      pIVar15 = obj[3].klass;
      values = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string);
      if (values != (System_String_array *)0x0) {
        if ((int)values->max_length != 0) {
          values->m_Items[0] = "color:";
          il2cpp_runtime_helper_022b4080(values->m_Items);
          if (pIVar15 == (Il2CppClass *)0x0) goto label_04235d46;
          iVar5 = (int)pIVar15;
          pSVar7 = System_Int32__ToString(iVar5 + 0x10,(MethodInfo *)0x0);
          if (1 < (uint)values->max_length) {
            values->m_Items[1] = pSVar7;
            il2cpp_runtime_helper_022b4080(values->m_Items + 1,pSVar7);
            if (2 < (uint)values->max_length) {
              values->m_Items[2] = ",";
              il2cpp_runtime_helper_022b4080(values->m_Items + 2);
              pSVar7 = System_Int32__ToString(iVar5 + 0x14,(MethodInfo *)0x0);
              obj = (Il2CppObject *)&",";
              if (3 < (uint)values->max_length) {
                values->m_Items[3] = pSVar7;
                il2cpp_runtime_helper_022b4080(values->m_Items + 3,pSVar7);
                if (4 < (uint)values->max_length) {
                  values->m_Items[4] = ",";
                  il2cpp_runtime_helper_022b4080(values->m_Items + 4);
                  pSVar7 = System_Int32__ToString(iVar5 + 0x18,(MethodInfo *)0x0);
                  if (5 < (uint)values->max_length) {
                    values->m_Items[5] = pSVar7;
                    il2cpp_runtime_helper_022b4080(values->m_Items + 5,pSVar7);
                    if (6 < (uint)values->max_length) {
                      values->m_Items[6] = ",";
                      il2cpp_runtime_helper_022b4080(values->m_Items + 6);
                      pSVar7 = System_Int32__ToString(iVar5 + 0x1c,(MethodInfo *)0x0);
                      uVar3 = (uint)values->max_length;
joined_r0x04235740:
                      obj = (Il2CppObject *)&",";
                      if (7 < uVar3) {
                        ppSVar19 = values->m_Items + 7;
                        values->m_Items[7] = pSVar7;
                        goto label_04235751;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto label_04235cea;
      }
      goto label_04235d46;
    }
    bVar2 = (TypeInfo_CustomLogicQuaternionBuiltin->_2).naturalAligment;
    if ((bVar2 <= bVar1) && ((pIVar15->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_CustomLogicQuaternionBuiltin)) {
      local_58 = (undefined1  [8])obj[3].klass;
      auStack_50 = (undefined1  [8])obj[3].monitor;
      values = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string);
      if (values != (System_String_array *)0x0) {
        if ((int)values->max_length != 0) {
          values->m_Items[0] = "quaternion:";
          fVar20 = (float)il2cpp_runtime_helper_022b4080(values->m_Items);
          pSVar7 = System_Single__ToString(fVar20,(MethodInfo *)local_58);
          if (1 < (uint)values->max_length) {
            values->m_Items[1] = pSVar7;
            il2cpp_runtime_helper_022b4080(values->m_Items + 1,pSVar7);
            if (2 < (uint)values->max_length) {
              values->m_Items[2] = ",";
              fVar20 = (float)il2cpp_runtime_helper_022b4080(values->m_Items + 2);
              pSVar7 = System_Single__ToString(fVar20,(MethodInfo *)(local_58 + 4));
              obj = (Il2CppObject *)&",";
              if (3 < (uint)values->max_length) {
                values->m_Items[3] = pSVar7;
                il2cpp_runtime_helper_022b4080(values->m_Items + 3,pSVar7);
                if (4 < (uint)values->max_length) {
                  values->m_Items[4] = ",";
                  fVar20 = (float)il2cpp_runtime_helper_022b4080(values->m_Items + 4);
                  pSVar7 = System_Single__ToString(fVar20,(MethodInfo *)auStack_50);
                  if (5 < (uint)values->max_length) {
                    values->m_Items[5] = pSVar7;
                    il2cpp_runtime_helper_022b4080(values->m_Items + 5,pSVar7);
                    if (6 < (uint)values->max_length) {
                      values->m_Items[6] = ",";
                      fVar20 = (float)il2cpp_runtime_helper_022b4080(values->m_Items + 6);
                      pSVar7 = System_Single__ToString(fVar20,(MethodInfo *)(auStack_50 + 4));
                      uVar3 = (uint)values->max_length;
                      goto joined_r0x04235740;
                    }
                  }
                }
              }
            }
          }
        }
        goto label_04235cea;
      }
      goto label_04235d46;
    }
  }
  else {
    unaff_R12 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONObject);
    SimpleJSONFixed_JSONObject___ctor(unaff_R12,(MethodInfo *)0x0);
    bVar1 = (TypeInfo_CustomLogicDictBuiltin->_2).naturalAligment;
    if (((obj->klass->_2).naturalAligment < bVar1) ||
       ((obj->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicDictBuiltin)) goto label_04235d3e;
    pCVar8 = CustomLogic_CustomLogicDictBuiltin__get_Keys
                       ((CustomLogic_CustomLogicDictBuiltin_o *)obj,(MethodInfo *)0x0);
    if ((pCVar8 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) ||
       (__this = (pCVar8->fields).List, __this == (System_Collections_Generic_List_object__o *)0x0))
    goto label_04235d46;
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&local_48,__this,MethodInfo_List_1_T_Enumerator_System_Object_GetEnumerator);
    _Var22 = local_48;
    pIVar23 = pIStack_40;
    pIVar15 = local_38;
    if (unaff_R12 != (SimpleJSONFixed_JSONObject_o *)0x0) {
      while (__this_00.fields._8_8_ = pIVar23, __this_00.fields._list = _Var22.genericMethod,
            __this_00.fields._current = (Il2CppObject *)pIVar15,
            bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff78), local_48 = _Var22,
            pIStack_40 = pIVar23, local_38 = pIVar15, (char)bVar6 != '\0') {
        pIVar24 = pIVar15;
        if ((pIVar15 == (Il2CppClass *)0x0) || ((pIVar15->_1).image != g_data_057b9c00)) goto label_04235cef;
        method_00 = pIVar15;
        pIVar9 = CustomLogic_CustomLogicDictBuiltin__Get
                           ((CustomLogic_CustomLogicDictBuiltin_o *)obj,(Il2CppObject *)pIVar15,
                            (Il2CppObject *)0x0,(MethodInfo *)0x0);
        pSVar10 = CustomLogic_CustomLogicJsonBuiltin__SaveJSON(pIVar9,(MethodInfo *)method_00);
        if ((pIVar15->_1).image != g_data_057b9c00) goto label_04235d36;
        (*(unaff_R12->klass->vtable)._20_Add.methodPtr)(unaff_R12,pIVar15,pSVar10);
        pIVar15 = pIVar24;
      }
label_04235a9a:
      __this_04.fields._8_8_ = pIStack_40;
      __this_04.fields._list = local_48.genericMethod;
      __this_04.fields._current = (Il2CppObject *)local_38;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff78);
      return (SimpleJSONFixed_JSONNode_o *)unaff_R12;
    }
    __this_02.fields._8_8_ = pIStack_40;
    __this_02.fields._list = local_48.genericMethod;
    __this_02.fields._current = (Il2CppObject *)local_38;
    bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffff78);
    if ((char)bVar6 == '\0') goto label_04235a9a;
    _Var22 = local_48;
    pIVar23 = pIStack_40;
    pIVar24 = local_38;
    if ((local_38 != (Il2CppClass *)0x0) && ((local_38->_1).image == g_data_057b9c00)) {
      pIVar9 = CustomLogic_CustomLogicDictBuiltin__Get
                         ((CustomLogic_CustomLogicDictBuiltin_o *)obj,(Il2CppObject *)local_38,
                          (Il2CppObject *)0x0,(MethodInfo *)0x0);
      CustomLogic_CustomLogicJsonBuiltin__SaveJSON(pIVar9,(MethodInfo *)local_38);
      il2cpp_runtime_helper_022b2c90();
      goto label_04235a60;
    }
label_04235cef:
    uVar14 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pIVar15 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(uVar14);
    pSVar7 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Saving invalid json type: dict must have string keys.");
    System_Exception___ctor_3cf6120((System_Exception_o *)pIVar15,pSVar7,(MethodInfo *)0x0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNode_SaveJSON);
    il2cpp_runtime_helper_022b2b10(pIVar15);
label_04235d36:
    il2cpp_runtime_helper_022b2fd0(pIVar15);
label_04235d3e:
    il2cpp_runtime_helper_022b2fd0(obj);
label_04235d46:
    il2cpp_runtime_helper_022b2c90();
  }
  il2cpp_runtime_helper_01f681a0(obj);
  pSVar16 = System_Object__GetType(obj,(MethodInfo *)0x0);
  il2cpp_runtime_helper_01f681a0(pSVar16);
  pSVar7 = (System_String_o *)
           (*(pSVar16->klass->vtable)._3_ToString.methodPtr)
                     (pSVar16,(pSVar16->klass->vtable)._3_ToString.method);
  str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Saving invalid json type: only list, dict, structs, and primitives allowed, got ");
  pSVar7 = System_String__Concat_3ae5ba0(str0,pSVar7,(MethodInfo *)0x0);
  uVar14 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  __this_08 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar14);
  System_Exception___ctor_3cf6120(__this_08,pSVar7,(MethodInfo *)0x0);
  pMVar17 = (MethodInfo *)il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNode_SaveJSON);
  il2cpp_runtime_helper_022b2b10(__this_08);
label_04235dd5:
  CustomLogic_CustomLogicJsonBuiltin__SaveJSON((Il2CppObject *)pIVar24,pMVar17);
  auVar21 = il2cpp_runtime_helper_022b2c90();
  if (auVar21._8_4_ == 1) {
    plVar18 = (long *)__cxa_begin_catch(auVar21._0_8_);
    lVar4 = *plVar18;
    __cxa_end_catch();
    __this_05.fields._8_8_ = pIVar23;
    __this_05.fields._list = _Var22.genericMethod;
    __this_05.fields._current = (Il2CppObject *)pIVar24;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffff78);
    if (lVar4 == 0) {
      return (SimpleJSONFixed_JSONNode_o *)unaff_R12;
    }
    il2cpp_runtime_helper_022fefe0(lVar4);
  }
  __this_06.fields._8_8_ = pIVar23;
  __this_06.fields._list = _Var22.genericMethod;
  __this_06.fields._current = (Il2CppObject *)pIVar24;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_06,(MethodInfo_321A1C0 *)&stack0xffffffffffffff78);
  _Unwind_Resume(auVar21._0_8_);
}


// CustomLogic.CustomLogicJsonBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicJsonBuiltin__get_ClassName (CustomLogic_CustomLogicJsonBuiltin_o* __this, const MethodInfo* method);
// 0x4235f30

System_String_o *
CustomLogic_CustomLogicJsonBuiltin__get_ClassName
          (CustomLogic_CustomLogicJsonBuiltin_o *__this,MethodInfo *method)

{
  if (g_data_057adade == '\0') {
    il2cpp_runtime_helper_023445d0(&"Json");
    g_data_057adade = '\x01';
  }
  return "Json";
}


// CustomLogic.CustomLogicJsonBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicJsonBuiltin__get_IsAbstract (CustomLogic_CustomLogicJsonBuiltin_o* __this, const MethodInfo* method);
// 0x4235f60

bool_conflict
CustomLogic_CustomLogicJsonBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicJsonBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicJsonBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicJsonBuiltin__get_IsStatic (CustomLogic_CustomLogicJsonBuiltin_o* __this, const MethodInfo* method);
// 0x4235f70

bool_conflict
CustomLogic_CustomLogicJsonBuiltin__get_IsStatic
          (CustomLogic_CustomLogicJsonBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicJsonBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicJsonBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicJsonBuiltin_o* __this, const MethodInfo* method);
// 0x4235f80

bool_conflict
CustomLogic_CustomLogicJsonBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicJsonBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


