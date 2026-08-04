// Type: CustomLogic.Editor.XmlDocumentUtils
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic.Editor/XmlDocumentUtils.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.Editor.XmlDocumentUtils.<>c$$.cctor
// il2cpp: void CustomLogic_Editor_XmlDocumentUtils___c___cctor (const MethodInfo* method);
// 0x4284770

void CustomLogic_Editor_XmlDocumentUtils___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057adca3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057adca3 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.Editor.XmlDocumentUtils.<>c$$.ctor
// il2cpp: void CustomLogic_Editor_XmlDocumentUtils___c___ctor (CustomLogic_Editor_XmlDocumentUtils___c_o* __this, const MethodInfo* method);
// 0x42847e0

void CustomLogic_Editor_XmlDocumentUtils___c___ctor
               (CustomLogic_Editor_XmlDocumentUtils___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.Editor.XmlDocumentUtils.<>c$$<GetConstructorNodeText>b__7_0
// il2cpp: System_String_o* CustomLogic_Editor_XmlDocumentUtils___c___GetConstructorNodeText_b__7_0 (CustomLogic_Editor_XmlDocumentUtils___c_o* __this, System_Reflection_ParameterInfo_o* x, const MethodInfo* method);
// 0x42847f0

System_String_o *
CustomLogic_Editor_XmlDocumentUtils___c___GetConstructorNodeText_b__7_0
          (CustomLogic_Editor_XmlDocumentUtils___c_o *__this,System_Reflection_ParameterInfo_o *x,
          MethodInfo *method)

{
  code *UNRECOVERED_JUMPTABLE_00;
  long *plVar1;
  System_String_o *pSVar2;
  System_String_o *extraout_RAX;
  MethodInfo *pMVar3;
  MethodInfo *pMVar4;
  
  pMVar3 = (MethodInfo *)x;
  if (x != (System_Reflection_ParameterInfo_o *)0x0) {
    pMVar3 = (x->klass->vtable)._11_get_ParameterType.method;
    plVar1 = (long *)(*(x->klass->vtable)._11_get_ParameterType.methodPtr)();
    __this = (CustomLogic_Editor_XmlDocumentUtils___c_o *)x;
    if (plVar1 != (long *)0x0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x2d8);
      pSVar2 = (System_String_o *)
               (*UNRECOVERED_JUMPTABLE_00)(plVar1,*(undefined8 *)(*plVar1 + 0x2e0),UNRECOVERED_JUMPTABLE_00);
      return pSVar2;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar4 = pMVar3;
  if (pMVar3 != (MethodInfo *)0x0) {
    pMVar4 = *(MethodInfo **)(pMVar3->methodPointer + 0x1f0);
    plVar1 = (long *)(**(code **)(pMVar3->methodPointer + 0x1e8))();
    __this = (CustomLogic_Editor_XmlDocumentUtils___c_o *)pMVar3;
    if (plVar1 != (long *)0x0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x2d8);
      pSVar2 = (System_String_o *)
               (*UNRECOVERED_JUMPTABLE_00)(plVar1,*(undefined8 *)(*plVar1 + 0x2e0),UNRECOVERED_JUMPTABLE_00);
      return pSVar2;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar3 = pMVar4;
  if (pMVar4 != (MethodInfo *)0x0) {
    pMVar3 = (((System_Reflection_ParameterInfo_c *)pMVar4->methodPointer)->vtable)._11_get_ParameterType.
             method;
    plVar1 = (long *)(*(((System_Reflection_ParameterInfo_c *)pMVar4->methodPointer)->vtable).
                       _11_get_ParameterType.methodPtr)();
    __this = (CustomLogic_Editor_XmlDocumentUtils___c_o *)pMVar4;
    if (plVar1 != (long *)0x0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x2d8);
      pSVar2 = (System_String_o *)
               (*UNRECOVERED_JUMPTABLE_00)(plVar1,*(undefined8 *)(*plVar1 + 0x2e0),UNRECOVERED_JUMPTABLE_00);
      return pSVar2;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (pMVar3 != (MethodInfo *)0x0) {
    plVar1 = (long *)(*(((System_Reflection_ParameterInfo_c *)pMVar3->methodPointer)->vtable).
                       _11_get_ParameterType.methodPtr)();
    __this = (CustomLogic_Editor_XmlDocumentUtils___c_o *)pMVar3;
    if (plVar1 != (long *)0x0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x2d8);
      pSVar2 = (System_String_o *)
               (*UNRECOVERED_JUMPTABLE_00)(plVar1,*(undefined8 *)(*plVar1 + 0x2e0),UNRECOVERED_JUMPTABLE_00);
      return pSVar2;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return extraout_RAX;
}


// CustomLogic.Editor.XmlDocumentUtils.<>c$$<GetMethodNodeText>b__8_0
// il2cpp: System_String_o* CustomLogic_Editor_XmlDocumentUtils___c___GetMethodNodeText_b__8_0 (CustomLogic_Editor_XmlDocumentUtils___c_o* __this, System_Reflection_ParameterInfo_o* x, const MethodInfo* method);
// 0x4284830

System_String_o *
CustomLogic_Editor_XmlDocumentUtils___c___GetMethodNodeText_b__8_0
          (CustomLogic_Editor_XmlDocumentUtils___c_o *__this,System_Reflection_ParameterInfo_o *x,
          MethodInfo *method)

{
  code *vtableDispatch;
  long *plVar1;
  System_String_o *pSVar2;
  System_String_o *extraout_RAX;
  MethodInfo *pMVar3;
  MethodInfo *pMVar4;
  
  pMVar3 = (MethodInfo *)x;
  if (x != (System_Reflection_ParameterInfo_o *)0x0) {
    pMVar3 = (x->klass->vtable)._11_get_ParameterType.method;
    plVar1 = (long *)(*(x->klass->vtable)._11_get_ParameterType.methodPtr)();
    __this = (CustomLogic_Editor_XmlDocumentUtils___c_o *)x;
    if (plVar1 != (long *)0x0) {
      vtableDispatch = *(code **)(*plVar1 + 0x2d8);
      pSVar2 = (System_String_o *)
               (*vtableDispatch)(plVar1,*(undefined8 *)(*plVar1 + 0x2e0),vtableDispatch);
      return pSVar2;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar4 = pMVar3;
  if (pMVar3 != (MethodInfo *)0x0) {
    pMVar4 = (((System_Reflection_ParameterInfo_c *)pMVar3->methodPointer)->vtable)._11_get_ParameterType.
             method;
    plVar1 = (long *)(*(((System_Reflection_ParameterInfo_c *)pMVar3->methodPointer)->vtable).
                       _11_get_ParameterType.methodPtr)();
    __this = (CustomLogic_Editor_XmlDocumentUtils___c_o *)pMVar3;
    if (plVar1 != (long *)0x0) {
      vtableDispatch = *(code **)(*plVar1 + 0x2d8);
      pSVar2 = (System_String_o *)
               (*vtableDispatch)(plVar1,*(undefined8 *)(*plVar1 + 0x2e0),vtableDispatch);
      return pSVar2;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (pMVar4 != (MethodInfo *)0x0) {
    plVar1 = (long *)(*(((System_Reflection_ParameterInfo_c *)pMVar4->methodPointer)->vtable).
                       _11_get_ParameterType.methodPtr)();
    __this = (CustomLogic_Editor_XmlDocumentUtils___c_o *)pMVar4;
    if (plVar1 != (long *)0x0) {
      vtableDispatch = *(code **)(*plVar1 + 0x2d8);
      pSVar2 = (System_String_o *)
               (*vtableDispatch)(plVar1,*(undefined8 *)(*plVar1 + 0x2e0),vtableDispatch);
      return pSVar2;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return extraout_RAX;
}


// CustomLogic.Editor.XmlDocumentUtils.<>c$$<GetMethodParamTexts>b__9_0
// il2cpp: System_String_o* CustomLogic_Editor_XmlDocumentUtils___c___GetMethodParamTexts_b__9_0 (CustomLogic_Editor_XmlDocumentUtils___c_o* __this, System_Reflection_ParameterInfo_o* x, const MethodInfo* method);
// 0x4284870

System_String_o *
CustomLogic_Editor_XmlDocumentUtils___c___GetMethodParamTexts_b__9_0
          (CustomLogic_Editor_XmlDocumentUtils___c_o *__this,System_Reflection_ParameterInfo_o *x,
          MethodInfo *method)

{
  code *UNRECOVERED_JUMPTABLE_00;
  long *plVar1;
  System_String_o *pSVar2;
  System_String_o *extraout_RAX;
  MethodInfo *pMVar3;
  
  pMVar3 = (MethodInfo *)x;
  if (x != (System_Reflection_ParameterInfo_o *)0x0) {
    pMVar3 = (x->klass->vtable)._11_get_ParameterType.method;
    plVar1 = (long *)(*(x->klass->vtable)._11_get_ParameterType.methodPtr)();
    __this = (CustomLogic_Editor_XmlDocumentUtils___c_o *)x;
    if (plVar1 != (long *)0x0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x2d8);
      pSVar2 = (System_String_o *)
               (*UNRECOVERED_JUMPTABLE_00)(plVar1,*(undefined8 *)(*plVar1 + 0x2e0),UNRECOVERED_JUMPTABLE_00);
      return pSVar2;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (pMVar3 != (MethodInfo *)0x0) {
    plVar1 = (long *)(*(((System_Reflection_ParameterInfo_c *)pMVar3->methodPointer)->vtable).
                       _11_get_ParameterType.methodPtr)();
    __this = (CustomLogic_Editor_XmlDocumentUtils___c_o *)pMVar3;
    if (plVar1 != (long *)0x0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x2d8);
      pSVar2 = (System_String_o *)
               (*UNRECOVERED_JUMPTABLE_00)(plVar1,*(undefined8 *)(*plVar1 + 0x2e0),UNRECOVERED_JUMPTABLE_00);
      return pSVar2;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return extraout_RAX;
}


// CustomLogic.Editor.XmlDocumentUtils.<>c$$<GetConstructorParamTexts>b__10_0
// il2cpp: System_String_o* CustomLogic_Editor_XmlDocumentUtils___c___GetConstructorParamTexts_b__10_0 (CustomLogic_Editor_XmlDocumentUtils___c_o* __this, System_Reflection_ParameterInfo_o* x, const MethodInfo* method);
// 0x42848b0

System_String_o *
CustomLogic_Editor_XmlDocumentUtils___c___GetConstructorParamTexts_b__10_0
          (CustomLogic_Editor_XmlDocumentUtils___c_o *__this,System_Reflection_ParameterInfo_o *x,
          MethodInfo *method)

{
  code *vtableDispatch;
  long *plVar1;
  System_String_o *pSVar2;
  System_String_o *extraout_RAX;
  
  if (x != (System_Reflection_ParameterInfo_o *)0x0) {
    plVar1 = (long *)(*(x->klass->vtable)._11_get_ParameterType.methodPtr)();
    __this = (CustomLogic_Editor_XmlDocumentUtils___c_o *)x;
    if (plVar1 != (long *)0x0) {
      vtableDispatch = *(code **)(*plVar1 + 0x2d8);
      pSVar2 = (System_String_o *)
               (*vtableDispatch)(plVar1,*(undefined8 *)(*plVar1 + 0x2e0),vtableDispatch);
      return pSVar2;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return extraout_RAX;
}


// CustomLogic.Editor.XmlDocumentUtils.<>c__DisplayClass11_0$$.ctor
// il2cpp: void CustomLogic_Editor_XmlDocumentUtils___c__DisplayClass11_0___ctor (CustomLogic_Editor_XmlDocumentUtils___c__DisplayClass11_0_o* __this, const MethodInfo* method);
// 0x42848f0

void CustomLogic_Editor_XmlDocumentUtils___c__DisplayClass11_0___ctor
               (CustomLogic_Editor_XmlDocumentUtils___c__DisplayClass11_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.Editor.XmlDocumentUtils.<>c__DisplayClass11_0$$<GetParameterNodeText>b__0
// il2cpp: bool CustomLogic_Editor_XmlDocumentUtils___c__DisplayClass11_0___GetParameterNodeText_b__0 (CustomLogic_Editor_XmlDocumentUtils___c__DisplayClass11_0_o* __this, System_Collections_Generic_KeyValuePair_string__string__o p, const MethodInfo* method);
// 0x4284900

bool_conflict
CustomLogic_Editor_XmlDocumentUtils___c__DisplayClass11_0___GetParameterNodeText_b__0
          (CustomLogic_Editor_XmlDocumentUtils___c__DisplayClass11_0_o *__this,
          System_Collections_Generic_KeyValuePair_string__string__o p,MethodInfo *method)

{
  bool_conflict bVar1;
  bool_conflict extraout_EAX;
  System_String_o *b;
  System_Reflection_ParameterInfo_o *__this_00;
  
  if (g_data_057adca4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Key,p.fields.key,p.fields.value);
    g_data_057adca4 = '\x01';
  }
  __this_00 = (__this->fields).parameterInfo;
  if (__this_00 != (System_Reflection_ParameterInfo_o *)0x0) {
    b = (System_String_o *)
        (*(__this_00->klass->vtable)._10_get_Name.methodPtr)
                  (__this_00,(__this_00->klass->vtable)._10_get_Name.method);
    bVar1 = System_String__op_Equality(p.fields.key,b,(MethodInfo *)0x0);
    return bVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  return extraout_EAX;
}


// CustomLogic.Editor.XmlDocumentUtils.<>c__DisplayClass12_0$$.ctor
// il2cpp: void CustomLogic_Editor_XmlDocumentUtils___c__DisplayClass12_0___ctor (CustomLogic_Editor_XmlDocumentUtils___c__DisplayClass12_0_o* __this, const MethodInfo* method);
// 0x4284960

void CustomLogic_Editor_XmlDocumentUtils___c__DisplayClass12_0___ctor
               (CustomLogic_Editor_XmlDocumentUtils___c__DisplayClass12_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.Editor.XmlDocumentUtils.<>c__DisplayClass12_0$$<GetParameterNodeText>b__0
// il2cpp: bool CustomLogic_Editor_XmlDocumentUtils___c__DisplayClass12_0___GetParameterNodeText_b__0 (CustomLogic_Editor_XmlDocumentUtils___c__DisplayClass12_0_o* __this, System_Collections_Generic_KeyValuePair_string__string__o p, const MethodInfo* method);
// 0x4284970

bool_conflict
CustomLogic_Editor_XmlDocumentUtils___c__DisplayClass12_0___GetParameterNodeText_b__0
          (CustomLogic_Editor_XmlDocumentUtils___c__DisplayClass12_0_o *__this,
          System_Collections_Generic_KeyValuePair_string__string__o p,MethodInfo *method)

{
  bool_conflict bVar1;
  int32_t iVar2;
  System_String_o *pSVar3;
  System_String_o *a;
  System_Reflection_ParameterInfo_o *__this_00;
  
  a = p.fields.key;
  pSVar3 = a;
  if (g_data_057adca5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Key,a,p.fields.value);
    g_data_057adca5 = '\x01';
  }
  iVar2 = (int32_t)pSVar3;
  __this_00 = (__this->fields).parameterInfo;
  if (__this_00 != (System_Reflection_ParameterInfo_o *)0x0) {
    pSVar3 = (System_String_o *)
             (*(__this_00->klass->vtable)._10_get_Name.methodPtr)
                       (__this_00,(__this_00->klass->vtable)._10_get_Name.method);
    bVar1 = System_String__op_Equality(a,pSVar3,(MethodInfo *)0x0);
    return bVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).AttrsImpl = iVar2;
  iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  *(int32_t *)&(__this_00->fields).MemberImpl = iVar2;
  return iVar2;
}


// CustomLogic.Editor.XmlDocumentUtils.<GetConstructorParamTexts>d__10$$.ctor
// il2cpp: void CustomLogic_Editor_XmlDocumentUtils__GetConstructorParamTexts_d__10___ctor (CustomLogic_Editor_XmlDocumentUtils__GetConstructorParamTexts_d__10_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x42849d0

void CustomLogic_Editor_XmlDocumentUtils__GetConstructorParamTexts_d__10___ctor
               (CustomLogic_Editor_XmlDocumentUtils__GetConstructorParamTexts_d__10_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  int32_t iVar1;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  iVar1 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this->fields).__l__initialThreadId = iVar1;
  return;
}


// CustomLogic.Editor.XmlDocumentUtils.<GetConstructorParamTexts>d__10$$System.IDisposable.Dispose
// il2cpp: void CustomLogic_Editor_XmlDocumentUtils__GetConstructorParamTexts_d__10__System_IDisposable_Dispose (CustomLogic_Editor_XmlDocumentUtils__GetConstructorParamTexts_d__10_o* __this, const MethodInfo* method);
// 0x4284a00

void CustomLogic_Editor_XmlDocumentUtils__GetConstructorParamTexts_d__10__System_IDisposable_Dispose
               (CustomLogic_Editor_XmlDocumentUtils__GetConstructorParamTexts_d__10_o *__this,
               MethodInfo *method)

{
  int iVar1;
  long lVar2;
  long lVar3;
  code *vtableDispatch;
  long *plVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  iVar1 = (__this->fields).__1__state;
  if ((iVar1 == 1) || (iVar1 == -3)) {
    if (g_data_057adca7 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
      g_data_057adca7 = '\x01';
    }
    (__this->fields).__1__state = -1;
    plVar4 = (long *)il2cpp_runtime_helper_023051f0((__this->fields).__7__wrap1,TypeInfo_IDisposable);
    if (plVar4 != (long *)0x0) {
      lVar2 = *plVar4;
      if ((ulong)*(ushort *)(lVar2 + 0x12e) != 0) {
        lVar3 = *(long *)(lVar2 + 0xb0);
        lVar5 = 0;
        do {
          if (*(long *)(lVar3 + lVar5) == TypeInfo_IDisposable) {
            auVar6._8_8_ = lVar3;
            auVar6._0_8_ = lVar2 + (long)*(int *)(lVar3 + 8 + lVar5) * 0x10 + 0x138;
            goto label_04284ab5;
          }
          lVar5 = lVar5 + 0x10;
        } while ((ulong)*(ushort *)(lVar2 + 0x12e) << 4 != lVar5);
      }
      auVar6 = il2cpp_runtime_helper_02300d20(plVar4,TypeInfo_IDisposable,0);
label_04284ab5:
      vtableDispatch = (code *)*auVar6._0_8_;
      (*vtableDispatch)(plVar4,auVar6._0_8_[1],auVar6._8_8_,vtableDispatch);
      return;
    }
  }
  return;
}


// CustomLogic.Editor.XmlDocumentUtils.<GetConstructorParamTexts>d__10$$MoveNext
// il2cpp: bool CustomLogic_Editor_XmlDocumentUtils__GetConstructorParamTexts_d__10__MoveNext (CustomLogic_Editor_XmlDocumentUtils__GetConstructorParamTexts_d__10_o* __this, const MethodInfo* method);
// 0x4284ad0

bool_conflict
CustomLogic_Editor_XmlDocumentUtils__GetConstructorParamTexts_d__10__MoveNext
          (CustomLogic_Editor_XmlDocumentUtils__GetConstructorParamTexts_d__10_o *__this,MethodInfo *method)

{
  System_Collections_IEnumerator_o **ppSVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  System_Reflection_ConstructorInfo_o *pSVar5;
  System_Xml_XmlDocument_o *__this_00;
  System_Collections_IEnumerator_o *pSVar6;
  System_Collections_IEnumerator_c *pSVar7;
  Il2CppRuntimeInterfaceOffsetPair *pIVar8;
  System_String_c *pSVar9;
  code *vtableDispatch;
  char cVar10;
  bool_conflict bVar11;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Func_TSource__TResult__o *selector;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  System_String_array *value;
  System_String_o *pSVar12;
  System_String_o *str0;
  System_Xml_XmlNode_o *__this_01;
  System_Xml_XmlNodeList_o *pSVar13;
  Il2CppMethodPointer *ppIVar14;
  undefined8 *puVar15;
  long *plVar16;
  System_Xml_XmlAttributeCollection_o *__this_02;
  System_Xml_XmlAttribute_o *pSVar17;
  Il2CppObject *pIVar18;
  Il2CppObject *key;
  undefined8 uVar19;
  System_Type_o *pSVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  MethodInfo_3503420 *in_R8;
  undefined1 auVar24 [12];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  System_Collections_Generic_KeyValuePair_object__object__o __this_03;
  Il2CppObject local_38;
  
  if (g_data_057adca6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Select_ParameterInfo_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_ParameterInfo_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_String_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetConstructorParamTexts_b__10_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&TypeInfo_XmlNode);
    il2cpp_runtime_helper_023445d0(&"param");
    il2cpp_runtime_helper_023445d0(&".#ctor");
    il2cpp_runtime_helper_023445d0(&"(");
    il2cpp_runtime_helper_023445d0(&")");
    il2cpp_runtime_helper_023445d0(&"//member[@name=\"M:");
    il2cpp_runtime_helper_023445d0(&",");
    il2cpp_runtime_helper_023445d0(&"name");
    il2cpp_runtime_helper_023445d0();
    g_data_057adca6 = '\x01';
  }
  iVar4 = (__this->fields).__1__state;
  if (iVar4 == 1) {
label_04284db5:
    (__this->fields).__1__state = -3;
    pSVar6 = (__this->fields).__7__wrap1;
    if (pSVar6 == (System_Collections_IEnumerator_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      plVar16 = (long *)0x0;
label_04285087:
      il2cpp_runtime_helper_022b2fd0(plVar16);
label_0428508f:
      il2cpp_runtime_helper_022b2c90();
label_04285094:
      il2cpp_runtime_helper_022b2c90();
      goto label_04285099;
    }
    pSVar7 = pSVar6->klass;
    uVar2._0_1_ = (pSVar7->_2).rank;
    uVar2._1_1_ = (pSVar7->_2).minimumAlignment;
    if ((ulong)uVar2 != 0) {
      pIVar8 = (pSVar7->_1).interfaceOffsets;
      lVar21 = 0;
      do {
        if (*(long *)((long)&pIVar8->interfaceType + lVar21) == TypeInfo_IEnumerator) {
          ppIVar14 = &pSVar7->vtable[*(int *)((long)&pIVar8->offset + lVar21)].methodPtr;
          goto label_04284e31;
        }
        lVar21 = lVar21 + 0x10;
      } while ((ulong)uVar2 << 4 != lVar21);
    }
    ppIVar14 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar6,TypeInfo_IEnumerator,0);
label_04284e31:
    method = (MethodInfo *)ppIVar14[1];
    cVar10 = (**ppIVar14)();
    ppSVar1 = &(__this->fields).__7__wrap1;
    if (cVar10 == '\0') {
      if (g_data_057adca7 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
        g_data_057adca7 = '\x01';
      }
      (__this->fields).__1__state = -1;
      plVar16 = (long *)il2cpp_runtime_helper_023051f0((__this->fields).__7__wrap1,TypeInfo_IDisposable);
      if (plVar16 != (long *)0x0) {
        lVar21 = *plVar16;
        if ((ulong)*(ushort *)(lVar21 + 0x12e) != 0) {
          lVar22 = 0;
          do {
            if (*(long *)(*(long *)(lVar21 + 0xb0) + lVar22) == TypeInfo_IDisposable) {
              puVar15 = (undefined8 *)
                        (lVar21 + (long)*(int *)(*(long *)(lVar21 + 0xb0) + 8 + lVar22) * 0x10 + 0x138);
              goto label_04285061;
            }
            lVar22 = lVar22 + 0x10;
          } while ((ulong)*(ushort *)(lVar21 + 0x12e) << 4 != lVar22);
        }
        puVar15 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar16,TypeInfo_IDisposable,0);
label_04285061:
        (*(code *)*puVar15)(plVar16,puVar15[1]);
      }
      *ppSVar1 = (System_Collections_IEnumerator_o *)0x0;
      il2cpp_runtime_helper_022b4080(ppSVar1,0);
      return 0;
    }
    pSVar12 = (System_String_o *)*ppSVar1;
    if (pSVar12 == (System_String_o *)0x0) goto label_0428509e;
    pSVar9 = pSVar12->klass;
    uVar3._0_1_ = (pSVar9->_2).rank;
    uVar3._1_1_ = (pSVar9->_2).minimumAlignment;
    if ((ulong)uVar3 != 0) {
      pIVar8 = (pSVar9->_1).interfaceOffsets;
      auVar25._8_8_ = pIVar8;
      auVar25._0_8_ = pSVar9;
      lVar21 = 0;
      do {
        if (*(long *)((long)&pIVar8->interfaceType + lVar21) == TypeInfo_IEnumerator) goto label_04284f4c;
        lVar21 = lVar21 + 0x10;
      } while ((ulong)uVar3 << 4 != lVar21);
    }
    puVar15 = (undefined8 *)il2cpp_runtime_helper_02300d20(pSVar12,TypeInfo_IEnumerator,1);
label_04284f64:
    method = (MethodInfo *)puVar15[1];
    plVar16 = (long *)(*(code *)*puVar15)(pSVar12);
    if (plVar16 == (long *)0x0) goto label_042850a3;
    method = TypeInfo_XmlNode;
    if ((*(byte *)(*plVar16 + 0x130) < *(byte *)&TypeInfo_XmlNode[3].return_type) ||
       (*(MethodInfo **)(*(long *)(*plVar16 + 200) + -8 + (ulong)*(byte *)&TypeInfo_XmlNode[3].return_type * 8) !=
        TypeInfo_XmlNode)) goto label_04285087;
    method = *(MethodInfo **)(*plVar16 + 0x240);
    __this_02 = (System_Xml_XmlAttributeCollection_o *)(**(code **)(*plVar16 + 0x238))(plVar16);
    if (__this_02 == (System_Xml_XmlAttributeCollection_o *)0x0) goto label_042850a8;
    method = "name";
    pSVar17 = System_Xml_XmlAttributeCollection__get_ItemOf_47c9740
                        (__this_02,(System_String_o *)"name",(MethodInfo *)0x0);
    if (pSVar17 != (System_Xml_XmlAttribute_o *)0x0) {
      pIVar18 = (Il2CppObject *)
                (*(pSVar17->klass->vtable)._9_get_Value.methodPtr)
                          (pSVar17,(pSVar17->klass->vtable)._9_get_Value.method);
      key = (Il2CppObject *)(**(code **)(*plVar16 + 0x3c8))(plVar16,*(undefined8 *)(*plVar16 + 0x3d0));
      local_38.klass = (Il2CppClass *)0x0;
      local_38.monitor = (void *)0x0;
      __this_03.fields.value = pIVar18;
      __this_03.fields.key = &local_38;
      System_Collections_Generic_KeyValuePair_object__object____ctor(__this_03,key,MethodInfo_KeyValuePair_2_System_String_System_String,in_R8);
      *(undefined4 *)&(__this->fields).__2__current.fields.key = local_38.klass._0_4_;
      *(undefined4 *)((long)&(__this->fields).__2__current.fields.key + 4) = local_38.klass._4_4_;
      *(undefined4 *)&(__this->fields).__2__current.fields.value = local_38.monitor._0_4_;
      *(undefined4 *)((long)&(__this->fields).__2__current.fields.value + 4) = local_38.monitor._4_4_;
      il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,0);
      (__this->fields).__1__state = 1;
      return (bool_conflict)CONCAT71((int7)((ulong)plVar16 >> 8),1);
    }
  }
  else {
    if (iVar4 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
    pSVar5 = (__this->fields).ctorInfo;
    if (pSVar5 == (System_Reflection_ConstructorInfo_o *)0x0) goto label_0428508f;
    source = (System_Collections_Generic_IEnumerable_TSource__o *)
             (*(pSVar5->klass->vtable)._16_unknown.methodPtr)
                       (pSVar5,(pSVar5->klass->vtable)._16_unknown.method);
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      selector = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
    }
    else {
      selector = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
    }
    if (selector == (System_Func_TSource__TResult__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      selector = (System_Func_TSource__TResult__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_ParameterInfo_string);
      System_Func_object__object____ctor();
      lVar21 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_TSource__TResult__o **)(lVar21 + 0x20) = selector;
      il2cpp_runtime_helper_022b4080(lVar21 + 0x20,selector);
    }
    source_00 = System_Linq_Enumerable__Select_object__object_(source,selector,MethodInfo_IEnumerable_1_System_String_Select_ParameterInfo_String);
    value = (System_String_array *)
            System_Linq_Enumerable__ToArray_object_
                      ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,MethodInfo_String_ToArray_String);
    method = (MethodInfo *)0x0;
    if (value == (System_String_array *)0x0) goto label_04285094;
    if (value->max_length != 0) {
      pSVar12 = System_String__Join(",",value,(MethodInfo *)0x0);
      pSVar12 = System_String__Concat_3af7150("(",pSVar12,")",(MethodInfo *)0x0);
      pSVar20 = (__this->fields).type;
      if (pSVar20 != (System_Type_o *)0x0) goto label_04284d0d;
label_04284f47:
      lVar21 = 0;
      auVar25 = il2cpp_runtime_helper_022b2c90();
label_04284f4c:
      puVar15 = (undefined8 *)
                ((long)(*(int *)(auVar25._8_8_ + 8 + lVar21) + 1) * 0x10 + auVar25._0_8_ + 0x138);
      goto label_04284f64;
    }
    pSVar12 = (System_String_o *)**(long **)(g_data_057b9c00 + 0xb8);
    pSVar20 = (__this->fields).type;
    if (pSVar20 == (System_Type_o *)0x0) goto label_04284f47;
label_04284d0d:
    str0 = (System_String_o *)
           (*(pSVar20->klass->vtable)._26_unknown.methodPtr)
                     (pSVar20,(pSVar20->klass->vtable)._26_unknown.method);
    method = (MethodInfo *)System_String__Concat_3af7150(str0,".#ctor",pSVar12,(MethodInfo *)0x0);
    __this_00 = (__this->fields).xmlDocument;
    pSVar12 = System_String__Concat_3af7150
                        (_DAT_055be8a0,(System_String_o *)method,"\"]",(MethodInfo *)0x0);
    if (__this_00 != (System_Xml_XmlDocument_o *)0x0) {
      __this_01 = System_Xml_XmlNode__SelectSingleNode
                            ((System_Xml_XmlNode_o *)__this_00,pSVar12,(MethodInfo *)0x0);
      if (__this_01 == (System_Xml_XmlNode_o *)0x0) {
        return 0;
      }
      method = "param";
      pSVar13 = System_Xml_XmlNode__SelectNodes(__this_01,(System_String_o *)"param",(MethodInfo *)0x0);
      if (pSVar13 == (System_Xml_XmlNodeList_o *)0x0) goto label_042850b2;
      method = (MethodInfo *)
               (*(pSVar13->klass->vtable)._8_GetEnumerator.methodPtr)
                         (pSVar13,(pSVar13->klass->vtable)._8_GetEnumerator.method);
      (__this->fields).__7__wrap1 = (System_Collections_IEnumerator_o *)method;
      il2cpp_runtime_helper_022b4080();
      goto label_04284db5;
    }
label_04285099:
    il2cpp_runtime_helper_022b2c90();
label_0428509e:
    il2cpp_runtime_helper_022b2c90();
label_042850a3:
    il2cpp_runtime_helper_022b2c90();
label_042850a8:
    il2cpp_runtime_helper_022b2c90();
  }
  il2cpp_runtime_helper_022b2c90();
label_042850b2:
  auVar24 = il2cpp_runtime_helper_022b2c90();
  uVar19 = auVar24._0_8_;
  if (auVar24._8_4_ == 1) {
    plVar16 = (long *)__cxa_begin_catch(uVar19);
    lVar21 = *plVar16;
    __cxa_end_catch();
    if (lVar21 == 0) {
      return 0;
    }
    CustomLogic_Editor_XmlDocumentUtils__GetConstructorParamTexts_d__10__System_IDisposable_Dispose
              (__this,method);
    uVar19 = il2cpp_runtime_helper_022fefe0(lVar21);
    if (lVar21 != 0) {
      CustomLogic_Editor_XmlDocumentUtils__GetConstructorParamTexts_d__10__System_IDisposable_Dispose
                (__this,method);
      lVar21 = il2cpp_runtime_helper_022fefe0(lVar21);
      il2cpp_runtime_helper_01f66400();
      if (g_data_057adca7 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
        g_data_057adca7 = '\x01';
      }
      *(undefined4 *)(lVar21 + 0x10) = 0xffffffff;
      plVar16 = (long *)il2cpp_runtime_helper_023051f0(*(undefined8 *)(lVar21 + 0x60),TypeInfo_IDisposable);
      if (plVar16 == (long *)0x0) {
        return 0;
      }
      lVar21 = *plVar16;
      if ((ulong)*(ushort *)(lVar21 + 0x12e) != 0) {
        lVar22 = *(long *)(lVar21 + 0xb0);
        lVar23 = 0;
        do {
          if (*(long *)(lVar22 + lVar23) == TypeInfo_IDisposable) {
            auVar26._8_8_ = lVar22;
            auVar26._0_8_ = lVar21 + (long)*(int *)(lVar22 + 8 + lVar23) * 0x10 + 0x138;
            goto label_042852d5;
          }
          lVar23 = lVar23 + 0x10;
        } while ((ulong)*(ushort *)(lVar21 + 0x12e) << 4 != lVar23);
      }
      auVar26 = il2cpp_runtime_helper_02300d20(plVar16,TypeInfo_IDisposable,0);
label_042852d5:
      vtableDispatch = (code *)*auVar26._0_8_;
      bVar11 = (*vtableDispatch)(plVar16,auVar26._0_8_[1],auVar26._8_8_,vtableDispatch);
      return bVar11;
    }
  }
  _Unwind_Resume(uVar19);
}


// CustomLogic.Editor.XmlDocumentUtils.<GetConstructorParamTexts>d__10$$<>m__Finally1
// il2cpp: void CustomLogic_Editor_XmlDocumentUtils__GetConstructorParamTexts_d__10____m__Finally1 (CustomLogic_Editor_XmlDocumentUtils__GetConstructorParamTexts_d__10_o* __this, const MethodInfo* method);
// 0x4285230

void CustomLogic_Editor_XmlDocumentUtils__GetConstructorParamTexts_d__10____m__Finally1
               (CustomLogic_Editor_XmlDocumentUtils__GetConstructorParamTexts_d__10_o *__this,
               MethodInfo *method)

{
  long lVar1;
  long lVar2;
  code *vtableDispatch;
  long *plVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  if (g_data_057adca7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    g_data_057adca7 = '\x01';
  }
  (__this->fields).__1__state = -1;
  plVar3 = (long *)il2cpp_runtime_helper_023051f0((__this->fields).__7__wrap1,TypeInfo_IDisposable);
  if (plVar3 == (long *)0x0) {
    return;
  }
  lVar1 = *plVar3;
  if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
    lVar2 = *(long *)(lVar1 + 0xb0);
    lVar4 = 0;
    do {
      if (*(long *)(lVar2 + lVar4) == TypeInfo_IDisposable) {
        auVar5._8_8_ = lVar2;
        auVar5._0_8_ = lVar1 + (long)*(int *)(lVar2 + 8 + lVar4) * 0x10 + 0x138;
        goto label_042852d5;
      }
      lVar4 = lVar4 + 0x10;
    } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar4);
  }
  auVar5 = il2cpp_runtime_helper_02300d20(plVar3,TypeInfo_IDisposable,0);
label_042852d5:
  vtableDispatch = (code *)*auVar5._0_8_;
  (*vtableDispatch)(plVar3,auVar5._0_8_[1],auVar5._8_8_,vtableDispatch);
  return;
}


// CustomLogic.Editor.XmlDocumentUtils.<GetConstructorParamTexts>d__10$$System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<System.String,System.String>>.get_Current
// il2cpp: System_Collections_Generic_KeyValuePair_string__string__o CustomLogic_Editor_XmlDocumentUtils__GetConstructorParamTexts_d__10__System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_System_String___get_Current (CustomLogic_Editor_XmlDocumentUtils__GetConstructorParamTexts_d__10_o* __this, const MethodInfo* method);
// 0x42852f0

System_Collections_Generic_KeyValuePair_string__string__o
CustomLogic_Editor_XmlDocumentUtils__GetConstructorParamTexts_d__10__System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_System_String___get_Current
          (CustomLogic_Editor_XmlDocumentUtils__GetConstructorParamTexts_d__10_o *__this,MethodInfo *method)

{
  return (System_Collections_Generic_KeyValuePair_string__string__o)(__this->fields).__2__current.fields;
}


// CustomLogic.Editor.XmlDocumentUtils.<GetConstructorParamTexts>d__10$$System.Collections.IEnumerator.Reset
// il2cpp: void CustomLogic_Editor_XmlDocumentUtils__GetConstructorParamTexts_d__10__System_Collections_IEnumerator_Reset (CustomLogic_Editor_XmlDocumentUtils__GetConstructorParamTexts_d__10_o* __this, const MethodInfo* method);
// 0x4285300

void CustomLogic_Editor_XmlDocumentUtils__GetConstructorParamTexts_d__10__System_Collections_IEnumerator_Reset
               (CustomLogic_Editor_XmlDocumentUtils__GetConstructorParamTexts_d__10_o *__this,
               MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  System_NotSupportedException_o *pSVar2;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  System_NotSupportedException_o *pSStack_10;
  
  pSStack_10 = (System_NotSupportedException_o *)0x428530d;
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  pSStack_10 = (System_NotSupportedException_o *)0x4285315;
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  pSStack_10 = (System_NotSupportedException_o *)0x4285322;
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  pSStack_10 = (System_NotSupportedException_o *)0x428532e;
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  pSStack_10 = (System_NotSupportedException_o *)0x4285339;
  pSVar2 = __this_00;
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  pSStack_10 = __this_00;
  if (g_data_057adca8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_KeyValuePair_string_string);
    g_data_057adca8 = '\x01';
  }
  uStack_20 = *(undefined4 *)&(pSVar2->fields)._message;
  uStack_1c = *(undefined4 *)((long)&(pSVar2->fields)._message + 4);
  uStack_18 = *(undefined4 *)&(pSVar2->fields)._data;
  uStack_14 = *(undefined4 *)((long)&(pSVar2->fields)._data + 4);
  il2cpp_runtime_helper_02304f30(TypeInfo_KeyValuePair_string_string,&uStack_20);
  return;
}


// CustomLogic.Editor.XmlDocumentUtils.<GetConstructorParamTexts>d__10$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* CustomLogic_Editor_XmlDocumentUtils__GetConstructorParamTexts_d__10__System_Collections_IEnumerator_get_Current (CustomLogic_Editor_XmlDocumentUtils__GetConstructorParamTexts_d__10_o* __this, const MethodInfo* method);
// 0x4285340

Il2CppObject *
CustomLogic_Editor_XmlDocumentUtils__GetConstructorParamTexts_d__10__System_Collections_IEnumerator_get_Current
          (CustomLogic_Editor_XmlDocumentUtils__GetConstructorParamTexts_d__10_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (g_data_057adca8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_KeyValuePair_string_string);
    g_data_057adca8 = '\x01';
  }
  local_18 = *(undefined4 *)&(__this->fields).__2__current.fields.key;
  uStack_14 = *(undefined4 *)((long)&(__this->fields).__2__current.fields.key + 4);
  uStack_10 = *(undefined4 *)&(__this->fields).__2__current.fields.value;
  uStack_c = *(undefined4 *)((long)&(__this->fields).__2__current.fields.value + 4);
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(TypeInfo_KeyValuePair_string_string,&local_18);
  return pIVar1;
}


// CustomLogic.Editor.XmlDocumentUtils.<GetConstructorParamTexts>d__10$$System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<System.String,System.String>>.GetEnumerator
// il2cpp: System_Collections_Generic_IEnumerator_KeyValuePair_string__string___o* CustomLogic_Editor_XmlDocumentUtils__GetConstructorParamTexts_d__10__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_System_String___GetEnumerator (CustomLogic_Editor_XmlDocumentUtils__GetConstructorParamTexts_d__10_o* __this, const MethodInfo* method);
// 0x4285390

System_Collections_IEnumerator_o *
CustomLogic_Editor_XmlDocumentUtils__GetConstructorParamTexts_d__10__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_System_String___GetEnumerator
          (CustomLogic_Editor_XmlDocumentUtils__GetConstructorParamTexts_d__10_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  undefined8 in_RAX;
  CustomLogic_Editor_XmlDocumentUtils__GetConstructorParamTexts_d__10_o *__this_00;
  undefined8 unaff_RBX;
  CustomLogic_Editor_XmlDocumentUtils__GetConstructorParamTexts_d__10_o *pCVar3;
  CustomLogic_Editor_XmlDocumentUtils__GetConstructorParamTexts_d__10_o *unaff_R14;
  
  do {
    pCVar3 = __this;
    *(CustomLogic_Editor_XmlDocumentUtils__GetConstructorParamTexts_d__10_o **)((long)register0x00000020 + -8)
         = unaff_R14;
    *(undefined8 *)((long)register0x00000020 + -0x10) = unaff_RBX;
    *(undefined8 *)((long)register0x00000020 + -0x18) = in_RAX;
    if (g_data_057adca9 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x42853ac;
      il2cpp_runtime_helper_023445d0();
      g_data_057adca9 = '\x01';
    }
    if ((pCVar3->fields).__1__state == -2) {
      iVar1 = (pCVar3->fields).__l__initialThreadId;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x42853c5;
      iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
      if (iVar1 == iVar2) {
        (pCVar3->fields).__1__state = 0;
        __this_00 = pCVar3;
label_04285408:
        (__this_00->fields).xmlDocument = (pCVar3->fields).__3__xmlDocument;
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4285419;
        il2cpp_runtime_helper_022b4080(&(__this_00->fields).xmlDocument);
        (__this_00->fields).type = (pCVar3->fields).__3__type;
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x428542a;
        il2cpp_runtime_helper_022b4080(&(__this_00->fields).type);
        (__this_00->fields).ctorInfo = (pCVar3->fields).__3__ctorInfo;
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x428543b;
        il2cpp_runtime_helper_022b4080(&(__this_00->fields).ctorInfo);
        return (System_Collections_IEnumerator_o *)__this_00;
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x42853e5;
    __this_00 = (CustomLogic_Editor_XmlDocumentUtils__GetConstructorParamTexts_d__10_o *)
                il2cpp_runtime_helper_023052d0(TypeInfo_GetConstructorParamTexts_d__10);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x42853f2;
    System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
    (__this_00->fields).__1__state = 0;
    __this = (CustomLogic_Editor_XmlDocumentUtils__GetConstructorParamTexts_d__10_o *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4285400;
    iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
    (__this_00->fields).__l__initialThreadId = iVar2;
    if (__this_00 != (CustomLogic_Editor_XmlDocumentUtils__GetConstructorParamTexts_d__10_o *)0x0)
    goto label_04285408;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x428544b;
    in_RAX = il2cpp_runtime_helper_022b2c90();
    unaff_RBX = 0;
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x18);
    unaff_R14 = pCVar3;
  } while( true );
}


// CustomLogic.Editor.XmlDocumentUtils.<GetConstructorParamTexts>d__10$$System.Collections.IEnumerable.GetEnumerator
// il2cpp: System_Collections_IEnumerator_o* CustomLogic_Editor_XmlDocumentUtils__GetConstructorParamTexts_d__10__System_Collections_IEnumerable_GetEnumerator (CustomLogic_Editor_XmlDocumentUtils__GetConstructorParamTexts_d__10_o* __this, const MethodInfo* method);
// 0x4285450

System_Collections_IEnumerator_o *
CustomLogic_Editor_XmlDocumentUtils__GetConstructorParamTexts_d__10__System_Collections_IEnumerable_GetEnumerator
          (CustomLogic_Editor_XmlDocumentUtils__GetConstructorParamTexts_d__10_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  CustomLogic_Editor_XmlDocumentUtils__GetConstructorParamTexts_d__10_o *__this_00;
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  CustomLogic_Editor_XmlDocumentUtils__GetConstructorParamTexts_d__10_o *pCVar3;
  CustomLogic_Editor_XmlDocumentUtils__GetConstructorParamTexts_d__10_o *unaff_R14;
  
  do {
    pCVar3 = __this;
    *(CustomLogic_Editor_XmlDocumentUtils__GetConstructorParamTexts_d__10_o **)((long)register0x00000020 + -8)
         = unaff_R14;
    *(undefined8 *)((long)register0x00000020 + -0x10) = unaff_RBX;
    *(undefined8 *)((long)register0x00000020 + -0x18) = in_RAX;
    if (g_data_057adca9 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x42853ac;
      il2cpp_runtime_helper_023445d0();
      g_data_057adca9 = '\x01';
    }
    if ((pCVar3->fields).__1__state == -2) {
      iVar1 = (pCVar3->fields).__l__initialThreadId;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x42853c5;
      iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
      if (iVar1 == iVar2) {
        (pCVar3->fields).__1__state = 0;
        __this_00 = pCVar3;
label_04285408:
        (__this_00->fields).xmlDocument = (pCVar3->fields).__3__xmlDocument;
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4285419;
        il2cpp_runtime_helper_022b4080(&(__this_00->fields).xmlDocument);
        (__this_00->fields).type = (pCVar3->fields).__3__type;
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x428542a;
        il2cpp_runtime_helper_022b4080(&(__this_00->fields).type);
        (__this_00->fields).ctorInfo = (pCVar3->fields).__3__ctorInfo;
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x428543b;
        il2cpp_runtime_helper_022b4080(&(__this_00->fields).ctorInfo);
        return (System_Collections_IEnumerator_o *)__this_00;
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x42853e5;
    __this_00 = (CustomLogic_Editor_XmlDocumentUtils__GetConstructorParamTexts_d__10_o *)
                il2cpp_runtime_helper_023052d0(TypeInfo_GetConstructorParamTexts_d__10);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x42853f2;
    System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
    (__this_00->fields).__1__state = 0;
    __this = (CustomLogic_Editor_XmlDocumentUtils__GetConstructorParamTexts_d__10_o *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4285400;
    iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
    (__this_00->fields).__l__initialThreadId = iVar2;
    if (__this_00 != (CustomLogic_Editor_XmlDocumentUtils__GetConstructorParamTexts_d__10_o *)0x0)
    goto label_04285408;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x428544b;
    in_RAX = il2cpp_runtime_helper_022b2c90();
    unaff_RBX = 0;
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x18);
    unaff_R14 = pCVar3;
  } while( true );
}


// CustomLogic.Editor.XmlDocumentUtils.<GetMethodParamTexts>d__9$$.ctor
// il2cpp: void CustomLogic_Editor_XmlDocumentUtils__GetMethodParamTexts_d__9___ctor (CustomLogic_Editor_XmlDocumentUtils__GetMethodParamTexts_d__9_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4285460

void CustomLogic_Editor_XmlDocumentUtils__GetMethodParamTexts_d__9___ctor
               (CustomLogic_Editor_XmlDocumentUtils__GetMethodParamTexts_d__9_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  int32_t iVar1;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  iVar1 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this->fields).__l__initialThreadId = iVar1;
  return;
}


// CustomLogic.Editor.XmlDocumentUtils.<GetMethodParamTexts>d__9$$System.IDisposable.Dispose
// il2cpp: void CustomLogic_Editor_XmlDocumentUtils__GetMethodParamTexts_d__9__System_IDisposable_Dispose (CustomLogic_Editor_XmlDocumentUtils__GetMethodParamTexts_d__9_o* __this, const MethodInfo* method);
// 0x4285490

void CustomLogic_Editor_XmlDocumentUtils__GetMethodParamTexts_d__9__System_IDisposable_Dispose
               (CustomLogic_Editor_XmlDocumentUtils__GetMethodParamTexts_d__9_o *__this,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  long lVar3;
  code *vtableDispatch;
  long *plVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  iVar1 = (__this->fields).__1__state;
  if ((iVar1 == 1) || (iVar1 == -3)) {
    if (g_data_057adcab == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
      g_data_057adcab = '\x01';
    }
    (__this->fields).__1__state = -1;
    plVar4 = (long *)il2cpp_runtime_helper_023051f0((__this->fields).__7__wrap1,TypeInfo_IDisposable);
    if (plVar4 != (long *)0x0) {
      lVar2 = *plVar4;
      if ((ulong)*(ushort *)(lVar2 + 0x12e) != 0) {
        lVar3 = *(long *)(lVar2 + 0xb0);
        lVar5 = 0;
        do {
          if (*(long *)(lVar3 + lVar5) == TypeInfo_IDisposable) {
            auVar6._8_8_ = lVar3;
            auVar6._0_8_ = lVar2 + (long)*(int *)(lVar3 + 8 + lVar5) * 0x10 + 0x138;
            goto label_04285545;
          }
          lVar5 = lVar5 + 0x10;
        } while ((ulong)*(ushort *)(lVar2 + 0x12e) << 4 != lVar5);
      }
      auVar6 = il2cpp_runtime_helper_02300d20(plVar4,TypeInfo_IDisposable,0);
label_04285545:
      vtableDispatch = (code *)*auVar6._0_8_;
      (*vtableDispatch)(plVar4,auVar6._0_8_[1],auVar6._8_8_,vtableDispatch);
      return;
    }
  }
  return;
}


// CustomLogic.Editor.XmlDocumentUtils.<GetMethodParamTexts>d__9$$MoveNext
// il2cpp: bool CustomLogic_Editor_XmlDocumentUtils__GetMethodParamTexts_d__9__MoveNext (CustomLogic_Editor_XmlDocumentUtils__GetMethodParamTexts_d__9_o* __this, const MethodInfo* method);
// 0x4285560

bool_conflict
CustomLogic_Editor_XmlDocumentUtils__GetMethodParamTexts_d__9__MoveNext
          (CustomLogic_Editor_XmlDocumentUtils__GetMethodParamTexts_d__9_o *__this,MethodInfo *method)

{
  System_Collections_IEnumerator_o **ppSVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  System_Reflection_MethodInfo_o *pSVar5;
  System_Xml_XmlDocument_o *__this_00;
  System_Collections_IEnumerator_o *pSVar6;
  System_Collections_IEnumerator_c *pSVar7;
  Il2CppRuntimeInterfaceOffsetPair *pIVar8;
  System_Func_TSource__TResult__c *pSVar9;
  code *vtableDispatch;
  char cVar10;
  bool_conflict bVar11;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Func_TSource__TResult__o *selector;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  System_String_array *value;
  System_String_o *pSVar12;
  System_String_o *str0;
  System_String_o *str2;
  System_Xml_XmlNode_o *__this_01;
  System_Xml_XmlNodeList_o *pSVar13;
  Il2CppMethodPointer *ppIVar14;
  undefined8 *puVar15;
  long *plVar16;
  System_Xml_XmlAttributeCollection_o *__this_02;
  System_Xml_XmlAttribute_o *pSVar17;
  Il2CppObject *pIVar18;
  Il2CppObject *key;
  undefined8 uVar19;
  System_Type_o *pSVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  MethodInfo_3503420 *in_R8;
  undefined1 auVar24 [12];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  System_Collections_Generic_KeyValuePair_object__object__o __this_03;
  Il2CppObject local_38;
  
  if (g_data_057adcaa == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Select_ParameterInfo_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_ParameterInfo_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_String_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetMethodParamTexts_b__9_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&TypeInfo_XmlNode);
    il2cpp_runtime_helper_023445d0(&"param");
    il2cpp_runtime_helper_023445d0(&"(");
    il2cpp_runtime_helper_023445d0(&")");
    il2cpp_runtime_helper_023445d0(&"//member[@name=\"M:");
    il2cpp_runtime_helper_023445d0(&",");
    il2cpp_runtime_helper_023445d0(&"name");
    il2cpp_runtime_helper_023445d0(&"\"]");
    il2cpp_runtime_helper_023445d0();
    g_data_057adcaa = '\x01';
  }
  iVar4 = (__this->fields).__1__state;
  if (iVar4 == 1) {
label_04285869:
    (__this->fields).__1__state = -3;
    pSVar6 = (__this->fields).__7__wrap1;
    if (pSVar6 == (System_Collections_IEnumerator_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      plVar16 = (long *)0x0;
label_04285b37:
      il2cpp_runtime_helper_022b2fd0(plVar16);
label_04285b3f:
      il2cpp_runtime_helper_022b2c90();
label_04285b44:
      il2cpp_runtime_helper_022b2c90();
label_04285b49:
      il2cpp_runtime_helper_022b2c90();
      goto label_04285b4e;
    }
    pSVar7 = pSVar6->klass;
    uVar2._0_1_ = (pSVar7->_2).rank;
    uVar2._1_1_ = (pSVar7->_2).minimumAlignment;
    if ((ulong)uVar2 != 0) {
      pIVar8 = (pSVar7->_1).interfaceOffsets;
      lVar21 = 0;
      do {
        if (*(long *)((long)&pIVar8->interfaceType + lVar21) == TypeInfo_IEnumerator) {
          ppIVar14 = &pSVar7->vtable[*(int *)((long)&pIVar8->offset + lVar21)].methodPtr;
          goto label_042858e1;
        }
        lVar21 = lVar21 + 0x10;
      } while ((ulong)uVar2 << 4 != lVar21);
    }
    ppIVar14 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar6,TypeInfo_IEnumerator,0);
label_042858e1:
    method = (MethodInfo *)ppIVar14[1];
    cVar10 = (**ppIVar14)();
    ppSVar1 = &(__this->fields).__7__wrap1;
    if (cVar10 == '\0') {
      if (g_data_057adcab == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
        g_data_057adcab = '\x01';
      }
      (__this->fields).__1__state = -1;
      plVar16 = (long *)il2cpp_runtime_helper_023051f0((__this->fields).__7__wrap1,TypeInfo_IDisposable);
      if (plVar16 != (long *)0x0) {
        lVar21 = *plVar16;
        if ((ulong)*(ushort *)(lVar21 + 0x12e) != 0) {
          lVar22 = 0;
          do {
            if (*(long *)(*(long *)(lVar21 + 0xb0) + lVar22) == TypeInfo_IDisposable) {
              puVar15 = (undefined8 *)
                        (lVar21 + (long)*(int *)(*(long *)(lVar21 + 0xb0) + 8 + lVar22) * 0x10 + 0x138);
              goto label_04285b11;
            }
            lVar22 = lVar22 + 0x10;
          } while ((ulong)*(ushort *)(lVar21 + 0x12e) << 4 != lVar22);
        }
        puVar15 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar16,TypeInfo_IDisposable,0);
label_04285b11:
        (*(code *)*puVar15)(plVar16,puVar15[1]);
      }
      *ppSVar1 = (System_Collections_IEnumerator_o *)0x0;
      il2cpp_runtime_helper_022b4080(ppSVar1,0);
      return 0;
    }
    selector = (System_Func_TSource__TResult__o *)*ppSVar1;
    if (selector == (System_Func_TSource__TResult__o *)0x0) goto label_04285b53;
    pSVar9 = selector->klass;
    uVar3._0_1_ = (pSVar9->_2).rank;
    uVar3._1_1_ = (pSVar9->_2).minimumAlignment;
    if ((ulong)uVar3 != 0) {
      pIVar8 = (pSVar9->_1).interfaceOffsets;
      auVar25._8_8_ = pIVar8;
      auVar25._0_8_ = pSVar9;
      lVar21 = 0;
      do {
        if (*(long *)((long)&pIVar8->interfaceType + lVar21) == TypeInfo_IEnumerator) goto label_042859fc;
        lVar21 = lVar21 + 0x10;
      } while ((ulong)uVar3 << 4 != lVar21);
    }
    puVar15 = (undefined8 *)il2cpp_runtime_helper_02300d20(selector,TypeInfo_IEnumerator,1);
label_04285a14:
    method = (MethodInfo *)puVar15[1];
    plVar16 = (long *)(*(code *)*puVar15)(selector);
    if (plVar16 == (long *)0x0) goto label_04285b58;
    method = TypeInfo_XmlNode;
    if ((*(byte *)(*plVar16 + 0x130) < *(byte *)&TypeInfo_XmlNode[3].return_type) ||
       (*(MethodInfo **)(*(long *)(*plVar16 + 200) + -8 + (ulong)*(byte *)&TypeInfo_XmlNode[3].return_type * 8) !=
        TypeInfo_XmlNode)) goto label_04285b37;
    method = *(MethodInfo **)(*plVar16 + 0x240);
    __this_02 = (System_Xml_XmlAttributeCollection_o *)(**(code **)(*plVar16 + 0x238))(plVar16);
    if (__this_02 == (System_Xml_XmlAttributeCollection_o *)0x0) goto label_04285b5d;
    method = "name";
    pSVar17 = System_Xml_XmlAttributeCollection__get_ItemOf_47c9740
                        (__this_02,(System_String_o *)"name",(MethodInfo *)0x0);
    if (pSVar17 != (System_Xml_XmlAttribute_o *)0x0) {
      pIVar18 = (Il2CppObject *)
                (*(pSVar17->klass->vtable)._9_get_Value.methodPtr)
                          (pSVar17,(pSVar17->klass->vtable)._9_get_Value.method);
      key = (Il2CppObject *)(**(code **)(*plVar16 + 0x3c8))(plVar16,*(undefined8 *)(*plVar16 + 0x3d0));
      local_38.klass = (Il2CppClass *)0x0;
      local_38.monitor = (void *)0x0;
      __this_03.fields.value = pIVar18;
      __this_03.fields.key = &local_38;
      System_Collections_Generic_KeyValuePair_object__object____ctor(__this_03,key,MethodInfo_KeyValuePair_2_System_String_System_String,in_R8);
      *(undefined4 *)&(__this->fields).__2__current.fields.key = local_38.klass._0_4_;
      *(undefined4 *)((long)&(__this->fields).__2__current.fields.key + 4) = local_38.klass._4_4_;
      *(undefined4 *)&(__this->fields).__2__current.fields.value = local_38.monitor._0_4_;
      *(undefined4 *)((long)&(__this->fields).__2__current.fields.value + 4) = local_38.monitor._4_4_;
      il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,0);
      (__this->fields).__1__state = 1;
      return (bool_conflict)CONCAT71((int7)((ulong)plVar16 >> 8),1);
    }
  }
  else {
    if (iVar4 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
    pSVar5 = (__this->fields).methodInfo;
    if (pSVar5 == (System_Reflection_MethodInfo_o *)0x0) goto label_04285b3f;
    source = (System_Collections_Generic_IEnumerable_TSource__o *)
             (*(pSVar5->klass->vtable)._16_unknown.methodPtr)
                       (pSVar5,(pSVar5->klass->vtable)._16_unknown.method);
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      selector = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
    }
    else {
      selector = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
    }
    if (selector == (System_Func_TSource__TResult__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      selector = (System_Func_TSource__TResult__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_ParameterInfo_string);
      System_Func_object__object____ctor();
      lVar21 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_TSource__TResult__o **)(lVar21 + 0x18) = selector;
      il2cpp_runtime_helper_022b4080(lVar21 + 0x18,selector);
    }
    source_00 = System_Linq_Enumerable__Select_object__object_(source,selector,MethodInfo_IEnumerable_1_System_String_Select_ParameterInfo_String);
    value = (System_String_array *)
            System_Linq_Enumerable__ToArray_object_
                      ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,MethodInfo_String_ToArray_String);
    method = (MethodInfo *)0x0;
    if (value == (System_String_array *)0x0) goto label_04285b44;
    if (value->max_length != 0) {
      pSVar12 = System_String__Join(",",value,(MethodInfo *)0x0);
      pSVar12 = System_String__Concat_3af7150("(",pSVar12,")",(MethodInfo *)0x0);
      pSVar20 = (__this->fields).type;
      if (pSVar20 != (System_Type_o *)0x0) goto label_0428579d;
label_042859f7:
      lVar21 = 0;
      auVar25 = il2cpp_runtime_helper_022b2c90();
label_042859fc:
      puVar15 = (undefined8 *)
                ((long)(*(int *)(auVar25._8_8_ + 8 + lVar21) + 1) * 0x10 + auVar25._0_8_ + 0x138);
      goto label_04285a14;
    }
    pSVar12 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    pSVar20 = (__this->fields).type;
    if (pSVar20 == (System_Type_o *)0x0) goto label_042859f7;
label_0428579d:
    method = (pSVar20->klass->vtable)._26_unknown.method;
    str0 = (System_String_o *)(*(pSVar20->klass->vtable)._26_unknown.methodPtr)();
    pSVar5 = (__this->fields).methodInfo;
    if (pSVar5 == (System_Reflection_MethodInfo_o *)0x0) goto label_04285b49;
    str2 = (System_String_o *)
           (*(pSVar5->klass->vtable)._8_unknown.methodPtr)(pSVar5,(pSVar5->klass->vtable)._8_unknown.method);
    in_R8 = (MethodInfo_3503420 *)0x0;
    method = (MethodInfo *)System_String__Concat_3af7470(str0,".",str2,pSVar12,(MethodInfo *)0x0);
    __this_00 = (__this->fields).xmlDocument;
    pSVar12 = System_String__Concat_3af7150
                        (_DAT_055be8a0,(System_String_o *)method,"\"]",(MethodInfo *)0x0);
    if (__this_00 != (System_Xml_XmlDocument_o *)0x0) {
      __this_01 = System_Xml_XmlNode__SelectSingleNode
                            ((System_Xml_XmlNode_o *)__this_00,pSVar12,(MethodInfo *)0x0);
      if (__this_01 == (System_Xml_XmlNode_o *)0x0) {
        return 0;
      }
      method = "param";
      pSVar13 = System_Xml_XmlNode__SelectNodes(__this_01,(System_String_o *)"param",(MethodInfo *)0x0);
      if (pSVar13 == (System_Xml_XmlNodeList_o *)0x0) goto label_04285b67;
      method = (MethodInfo *)
               (*(pSVar13->klass->vtable)._8_GetEnumerator.methodPtr)
                         (pSVar13,(pSVar13->klass->vtable)._8_GetEnumerator.method);
      (__this->fields).__7__wrap1 = (System_Collections_IEnumerator_o *)method;
      il2cpp_runtime_helper_022b4080();
      goto label_04285869;
    }
label_04285b4e:
    il2cpp_runtime_helper_022b2c90();
label_04285b53:
    il2cpp_runtime_helper_022b2c90();
label_04285b58:
    il2cpp_runtime_helper_022b2c90();
label_04285b5d:
    il2cpp_runtime_helper_022b2c90();
  }
  il2cpp_runtime_helper_022b2c90();
label_04285b67:
  auVar24 = il2cpp_runtime_helper_022b2c90();
  uVar19 = auVar24._0_8_;
  if (auVar24._8_4_ == 1) {
    plVar16 = (long *)__cxa_begin_catch(uVar19);
    lVar21 = *plVar16;
    __cxa_end_catch();
    if (lVar21 == 0) {
      return 0;
    }
    CustomLogic_Editor_XmlDocumentUtils__GetMethodParamTexts_d__9__System_IDisposable_Dispose(__this,method);
    uVar19 = il2cpp_runtime_helper_022fefe0(lVar21);
    if (lVar21 != 0) {
      CustomLogic_Editor_XmlDocumentUtils__GetMethodParamTexts_d__9__System_IDisposable_Dispose(__this,method)
      ;
      lVar21 = il2cpp_runtime_helper_022fefe0(lVar21);
      il2cpp_runtime_helper_01f66400();
      if (g_data_057adcab == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
        g_data_057adcab = '\x01';
      }
      *(undefined4 *)(lVar21 + 0x10) = 0xffffffff;
      plVar16 = (long *)il2cpp_runtime_helper_023051f0(*(undefined8 *)(lVar21 + 0x60),TypeInfo_IDisposable);
      if (plVar16 == (long *)0x0) {
        return 0;
      }
      lVar21 = *plVar16;
      if ((ulong)*(ushort *)(lVar21 + 0x12e) != 0) {
        lVar22 = *(long *)(lVar21 + 0xb0);
        lVar23 = 0;
        do {
          if (*(long *)(lVar22 + lVar23) == TypeInfo_IDisposable) {
            auVar26._8_8_ = lVar22;
            auVar26._0_8_ = lVar21 + (long)*(int *)(lVar22 + 8 + lVar23) * 0x10 + 0x138;
            goto label_04285da5;
          }
          lVar23 = lVar23 + 0x10;
        } while ((ulong)*(ushort *)(lVar21 + 0x12e) << 4 != lVar23);
      }
      auVar26 = il2cpp_runtime_helper_02300d20(plVar16,TypeInfo_IDisposable,0);
label_04285da5:
      vtableDispatch = (code *)*auVar26._0_8_;
      bVar11 = (*vtableDispatch)(plVar16,auVar26._0_8_[1],auVar26._8_8_,vtableDispatch);
      return bVar11;
    }
  }
  _Unwind_Resume(uVar19);
}


// CustomLogic.Editor.XmlDocumentUtils.<GetMethodParamTexts>d__9$$<>m__Finally1
// il2cpp: void CustomLogic_Editor_XmlDocumentUtils__GetMethodParamTexts_d__9____m__Finally1 (CustomLogic_Editor_XmlDocumentUtils__GetMethodParamTexts_d__9_o* __this, const MethodInfo* method);
// 0x4285d00

void CustomLogic_Editor_XmlDocumentUtils__GetMethodParamTexts_d__9____m__Finally1
               (CustomLogic_Editor_XmlDocumentUtils__GetMethodParamTexts_d__9_o *__this,MethodInfo *method)

{
  long lVar1;
  long lVar2;
  code *vtableDispatch;
  long *plVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  if (g_data_057adcab == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    g_data_057adcab = '\x01';
  }
  (__this->fields).__1__state = -1;
  plVar3 = (long *)il2cpp_runtime_helper_023051f0((__this->fields).__7__wrap1,TypeInfo_IDisposable);
  if (plVar3 == (long *)0x0) {
    return;
  }
  lVar1 = *plVar3;
  if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
    lVar2 = *(long *)(lVar1 + 0xb0);
    lVar4 = 0;
    do {
      if (*(long *)(lVar2 + lVar4) == TypeInfo_IDisposable) {
        auVar5._8_8_ = lVar2;
        auVar5._0_8_ = lVar1 + (long)*(int *)(lVar2 + 8 + lVar4) * 0x10 + 0x138;
        goto label_04285da5;
      }
      lVar4 = lVar4 + 0x10;
    } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar4);
  }
  auVar5 = il2cpp_runtime_helper_02300d20(plVar3,TypeInfo_IDisposable,0);
label_04285da5:
  vtableDispatch = (code *)*auVar5._0_8_;
  (*vtableDispatch)(plVar3,auVar5._0_8_[1],auVar5._8_8_,vtableDispatch);
  return;
}


// CustomLogic.Editor.XmlDocumentUtils.<GetMethodParamTexts>d__9$$System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<System.String,System.String>>.get_Current
// il2cpp: System_Collections_Generic_KeyValuePair_string__string__o CustomLogic_Editor_XmlDocumentUtils__GetMethodParamTexts_d__9__System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_System_String___get_Current (CustomLogic_Editor_XmlDocumentUtils__GetMethodParamTexts_d__9_o* __this, const MethodInfo* method);
// 0x4285dc0

System_Collections_Generic_KeyValuePair_string__string__o
CustomLogic_Editor_XmlDocumentUtils__GetMethodParamTexts_d__9__System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_System_String___get_Current
          (CustomLogic_Editor_XmlDocumentUtils__GetMethodParamTexts_d__9_o *__this,MethodInfo *method)

{
  return (System_Collections_Generic_KeyValuePair_string__string__o)(__this->fields).__2__current.fields;
}


// CustomLogic.Editor.XmlDocumentUtils.<GetMethodParamTexts>d__9$$System.Collections.IEnumerator.Reset
// il2cpp: void CustomLogic_Editor_XmlDocumentUtils__GetMethodParamTexts_d__9__System_Collections_IEnumerator_Reset (CustomLogic_Editor_XmlDocumentUtils__GetMethodParamTexts_d__9_o* __this, const MethodInfo* method);
// 0x4285dd0

void CustomLogic_Editor_XmlDocumentUtils__GetMethodParamTexts_d__9__System_Collections_IEnumerator_Reset
               (CustomLogic_Editor_XmlDocumentUtils__GetMethodParamTexts_d__9_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  System_NotSupportedException_o *pSVar2;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  System_NotSupportedException_o *pSStack_10;
  
  pSStack_10 = (System_NotSupportedException_o *)0x4285ddd;
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  pSStack_10 = (System_NotSupportedException_o *)0x4285de5;
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  pSStack_10 = (System_NotSupportedException_o *)0x4285df2;
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  pSStack_10 = (System_NotSupportedException_o *)0x4285dfe;
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  pSStack_10 = (System_NotSupportedException_o *)0x4285e09;
  pSVar2 = __this_00;
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  pSStack_10 = __this_00;
  if (g_data_057adcac == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_KeyValuePair_string_string);
    g_data_057adcac = '\x01';
  }
  uStack_20 = *(undefined4 *)&(pSVar2->fields)._message;
  uStack_1c = *(undefined4 *)((long)&(pSVar2->fields)._message + 4);
  uStack_18 = *(undefined4 *)&(pSVar2->fields)._data;
  uStack_14 = *(undefined4 *)((long)&(pSVar2->fields)._data + 4);
  il2cpp_runtime_helper_02304f30(TypeInfo_KeyValuePair_string_string,&uStack_20);
  return;
}


// CustomLogic.Editor.XmlDocumentUtils.<GetMethodParamTexts>d__9$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* CustomLogic_Editor_XmlDocumentUtils__GetMethodParamTexts_d__9__System_Collections_IEnumerator_get_Current (CustomLogic_Editor_XmlDocumentUtils__GetMethodParamTexts_d__9_o* __this, const MethodInfo* method);
// 0x4285e10

Il2CppObject *
CustomLogic_Editor_XmlDocumentUtils__GetMethodParamTexts_d__9__System_Collections_IEnumerator_get_Current
          (CustomLogic_Editor_XmlDocumentUtils__GetMethodParamTexts_d__9_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (g_data_057adcac == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_KeyValuePair_string_string);
    g_data_057adcac = '\x01';
  }
  local_18 = *(undefined4 *)&(__this->fields).__2__current.fields.key;
  uStack_14 = *(undefined4 *)((long)&(__this->fields).__2__current.fields.key + 4);
  uStack_10 = *(undefined4 *)&(__this->fields).__2__current.fields.value;
  uStack_c = *(undefined4 *)((long)&(__this->fields).__2__current.fields.value + 4);
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(TypeInfo_KeyValuePair_string_string,&local_18);
  return pIVar1;
}


// CustomLogic.Editor.XmlDocumentUtils.<GetMethodParamTexts>d__9$$System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<System.String,System.String>>.GetEnumerator
// il2cpp: System_Collections_Generic_IEnumerator_KeyValuePair_string__string___o* CustomLogic_Editor_XmlDocumentUtils__GetMethodParamTexts_d__9__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_System_String___GetEnumerator (CustomLogic_Editor_XmlDocumentUtils__GetMethodParamTexts_d__9_o* __this, const MethodInfo* method);
// 0x4285e60

System_Collections_IEnumerator_o *
CustomLogic_Editor_XmlDocumentUtils__GetMethodParamTexts_d__9__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_System_String___GetEnumerator
          (CustomLogic_Editor_XmlDocumentUtils__GetMethodParamTexts_d__9_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  undefined8 in_RAX;
  CustomLogic_Editor_XmlDocumentUtils__GetMethodParamTexts_d__9_o *__this_00;
  undefined8 unaff_RBX;
  CustomLogic_Editor_XmlDocumentUtils__GetMethodParamTexts_d__9_o *pCVar3;
  CustomLogic_Editor_XmlDocumentUtils__GetMethodParamTexts_d__9_o *unaff_R14;
  
  do {
    pCVar3 = __this;
    *(CustomLogic_Editor_XmlDocumentUtils__GetMethodParamTexts_d__9_o **)((long)register0x00000020 + -8) =
         unaff_R14;
    *(undefined8 *)((long)register0x00000020 + -0x10) = unaff_RBX;
    *(undefined8 *)((long)register0x00000020 + -0x18) = in_RAX;
    if (g_data_057adcad == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4285e7c;
      il2cpp_runtime_helper_023445d0();
      g_data_057adcad = '\x01';
    }
    if ((pCVar3->fields).__1__state == -2) {
      iVar1 = (pCVar3->fields).__l__initialThreadId;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4285e95;
      iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
      if (iVar1 == iVar2) {
        (pCVar3->fields).__1__state = 0;
        __this_00 = pCVar3;
label_04285ed8:
        (__this_00->fields).xmlDocument = (pCVar3->fields).__3__xmlDocument;
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4285ee9;
        il2cpp_runtime_helper_022b4080(&(__this_00->fields).xmlDocument);
        (__this_00->fields).type = (pCVar3->fields).__3__type;
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4285efa;
        il2cpp_runtime_helper_022b4080(&(__this_00->fields).type);
        (__this_00->fields).methodInfo = (pCVar3->fields).__3__methodInfo;
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4285f0b;
        il2cpp_runtime_helper_022b4080(&(__this_00->fields).methodInfo);
        return (System_Collections_IEnumerator_o *)__this_00;
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4285eb5;
    __this_00 = (CustomLogic_Editor_XmlDocumentUtils__GetMethodParamTexts_d__9_o *)
                il2cpp_runtime_helper_023052d0(TypeInfo_GetMethodParamTexts_d__9);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4285ec2;
    System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
    (__this_00->fields).__1__state = 0;
    __this = (CustomLogic_Editor_XmlDocumentUtils__GetMethodParamTexts_d__9_o *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4285ed0;
    iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
    (__this_00->fields).__l__initialThreadId = iVar2;
    if (__this_00 != (CustomLogic_Editor_XmlDocumentUtils__GetMethodParamTexts_d__9_o *)0x0)
    goto label_04285ed8;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4285f1b;
    in_RAX = il2cpp_runtime_helper_022b2c90();
    unaff_RBX = 0;
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x18);
    unaff_R14 = pCVar3;
  } while( true );
}


// CustomLogic.Editor.XmlDocumentUtils.<GetMethodParamTexts>d__9$$System.Collections.IEnumerable.GetEnumerator
// il2cpp: System_Collections_IEnumerator_o* CustomLogic_Editor_XmlDocumentUtils__GetMethodParamTexts_d__9__System_Collections_IEnumerable_GetEnumerator (CustomLogic_Editor_XmlDocumentUtils__GetMethodParamTexts_d__9_o* __this, const MethodInfo* method);
// 0x4285f20

System_Collections_IEnumerator_o *
CustomLogic_Editor_XmlDocumentUtils__GetMethodParamTexts_d__9__System_Collections_IEnumerable_GetEnumerator
          (CustomLogic_Editor_XmlDocumentUtils__GetMethodParamTexts_d__9_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  CustomLogic_Editor_XmlDocumentUtils__GetMethodParamTexts_d__9_o *__this_00;
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  CustomLogic_Editor_XmlDocumentUtils__GetMethodParamTexts_d__9_o *pCVar3;
  CustomLogic_Editor_XmlDocumentUtils__GetMethodParamTexts_d__9_o *unaff_R14;
  
  do {
    pCVar3 = __this;
    *(CustomLogic_Editor_XmlDocumentUtils__GetMethodParamTexts_d__9_o **)((long)register0x00000020 + -8) =
         unaff_R14;
    *(undefined8 *)((long)register0x00000020 + -0x10) = unaff_RBX;
    *(undefined8 *)((long)register0x00000020 + -0x18) = in_RAX;
    if (g_data_057adcad == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4285e7c;
      il2cpp_runtime_helper_023445d0();
      g_data_057adcad = '\x01';
    }
    if ((pCVar3->fields).__1__state == -2) {
      iVar1 = (pCVar3->fields).__l__initialThreadId;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4285e95;
      iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
      if (iVar1 == iVar2) {
        (pCVar3->fields).__1__state = 0;
        __this_00 = pCVar3;
label_04285ed8:
        (__this_00->fields).xmlDocument = (pCVar3->fields).__3__xmlDocument;
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4285ee9;
        il2cpp_runtime_helper_022b4080(&(__this_00->fields).xmlDocument);
        (__this_00->fields).type = (pCVar3->fields).__3__type;
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4285efa;
        il2cpp_runtime_helper_022b4080(&(__this_00->fields).type);
        (__this_00->fields).methodInfo = (pCVar3->fields).__3__methodInfo;
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4285f0b;
        il2cpp_runtime_helper_022b4080(&(__this_00->fields).methodInfo);
        return (System_Collections_IEnumerator_o *)__this_00;
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4285eb5;
    __this_00 = (CustomLogic_Editor_XmlDocumentUtils__GetMethodParamTexts_d__9_o *)
                il2cpp_runtime_helper_023052d0(TypeInfo_GetMethodParamTexts_d__9);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4285ec2;
    System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
    (__this_00->fields).__1__state = 0;
    __this = (CustomLogic_Editor_XmlDocumentUtils__GetMethodParamTexts_d__9_o *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4285ed0;
    iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
    (__this_00->fields).__l__initialThreadId = iVar2;
    if (__this_00 != (CustomLogic_Editor_XmlDocumentUtils__GetMethodParamTexts_d__9_o *)0x0)
    goto label_04285ed8;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4285f1b;
    in_RAX = il2cpp_runtime_helper_022b2c90();
    unaff_RBX = 0;
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x18);
    unaff_R14 = pCVar3;
  } while( true );
}


// CustomLogic.Editor.XmlDocumentUtils.<ResolveAndReplaceInheritDocNodeAsync>d__4$$MoveNext
// il2cpp: void CustomLogic_Editor_XmlDocumentUtils__ResolveAndReplaceInheritDocNodeAsync_d__4__MoveNext (CustomLogic_Editor_XmlDocumentUtils__ResolveAndReplaceInheritDocNodeAsync_d__4_o __this, const MethodInfo* method);
// 0x4285f30

void CustomLogic_Editor_XmlDocumentUtils__ResolveAndReplaceInheritDocNodeAsync_d__4__MoveNext
               (CustomLogic_Editor_XmlDocumentUtils__ResolveAndReplaceInheritDocNodeAsync_d__4_o __this,
               MethodInfo *method)

{
  MethodInfo *method_00;
  Il2CppType *pIVar1;
  System_Threading_Tasks_Task_o *__this_00;
  void *pvVar2;
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_o __this_01;
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_o __this_02;
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_o __this_03;
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_o __this_04;
  char cVar3;
  bool_conflict bVar4;
  Il2CppClass *pIVar5;
  System_Xml_XmlNodeList_o *pSVar6;
  Il2CppType **ppIVar7;
  undefined8 *puVar8;
  uint *puVar9;
  System_Xml_XmlAttributeCollection_o *pSVar10;
  System_Xml_XmlAttribute_o *pSVar11;
  System_String_o *pSVar12;
  System_Xml_XmlNode_o *pSVar13;
  long *plVar14;
  System_String_c *str3;
  undefined8 uVar15;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 *puVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  System_String_o **ppSVar20;
  long *unaff_R13;
  undefined1 auVar21 [12];
  undefined1 auVar22 [16];
  undefined8 in_stack_ffffffffffffff98;
  undefined1 uVar23;
  undefined7 in_stack_ffffffffffffffa1;
  undefined1 uVar24;
  undefined7 in_stack_ffffffffffffffa9;
  int local_44;
  _union_14 local_40;
  System_Xml_XmlDocument_o *local_38;
  
  if (g_data_057adcae == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AwaitUnsafeOnCompleted_TaskAwaiter_XmlDocumentUtils);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AwaitUnsafeOnCompleted_YieldAwaitable_YieldAwaiter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AsyncTaskMethodBuilder);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_LogError);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Task);
    il2cpp_runtime_helper_023445d0(&TypeInfo_XmlDocumentUtils);
    il2cpp_runtime_helper_023445d0(&TypeInfo_XmlNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_YieldAwaiter);
    il2cpp_runtime_helper_023445d0(&"Could not resolve cref ");
    il2cpp_runtime_helper_023445d0(&"cref");
    il2cpp_runtime_helper_023445d0(&"//inheritdoc");
    g_data_057adcae = '\x01';
  }
  uVar23 = 0;
  uVar24 = 0;
  local_40.genericMethod = (void *)0x0;
  local_44 = *(int *)&method->methodPointer;
  if (local_44 == 0) {
    uVar23 = *(undefined1 *)&method->field7_0x38;
    *(undefined1 *)&method->field7_0x38 = 0;
    *(undefined4 *)&method->methodPointer = 0xffffffff;
    local_44 = -1;
    if (*(int *)(TypeInfo_YieldAwaiter + 0xe4) != 0) goto label_0428654b;
    goto label_04286546;
  }
  if (local_44 == 1) {
    local_40 = method->field8_0x40;
    (method->field8_0x40).genericMethod = (void *)0x0;
    *(undefined4 *)&method->methodPointer = 0xffffffff;
label_04286628:
    System_Runtime_CompilerServices_TaskAwaiter__GetResult
              ((System_Runtime_CompilerServices_TaskAwaiter_o)&local_40,(MethodInfo *)0x0);
    *(undefined4 *)&method->methodPointer = 0xfffffffe;
    if (*(int *)(TypeInfo_AsyncTaskMethodBuilder + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_02.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._0_1_ = uVar23;
    __this_02.fields.m_builder.fields.m_coreState.fields.m_stateMachine =
         (System_Runtime_CompilerServices_IAsyncStateMachine_o *)in_stack_ffffffffffffff98;
    __this_02.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._1_7_ =
         in_stack_ffffffffffffffa1;
    __this_02.fields.m_builder.fields.m_task._0_1_ = uVar24;
    __this_02.fields.m_builder.fields.m_task._1_7_ = in_stack_ffffffffffffffa9;
    System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetResult
              (__this_02,(MethodInfo *)&method->virtualMethodPointer);
  }
  else {
    if (method->klass == (Il2CppClass *)0x0) {
      pIVar5 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_string);
      System_Action_object____ctor();
      method->klass = pIVar5;
      il2cpp_runtime_helper_022b4080(&method->klass,pIVar5);
    }
    if ((System_Xml_XmlNode_o *)method->return_type == (System_Xml_XmlNode_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      pSVar6 = System_Xml_XmlNode__SelectNodes
                         ((System_Xml_XmlNode_o *)method->return_type,"//inheritdoc",(MethodInfo *)0x0);
      if (pSVar6 != (System_Xml_XmlNodeList_o *)0x0) {
        ppIVar7 = (Il2CppType **)
                  (*(pSVar6->klass->vtable)._8_GetEnumerator.methodPtr)
                            (pSVar6,(pSVar6->klass->vtable)._8_GetEnumerator.method);
        method->parameters = ppIVar7;
        il2cpp_runtime_helper_022b4080();
        do {
          local_38 = (System_Xml_XmlDocument_o *)0x0;
          ppSVar20 = &"cref";
          while (ppIVar7 = method->parameters, ppIVar7 != (Il2CppType **)0x0) {
            pIVar1 = *ppIVar7;
            if ((ulong)*(ushort *)&pIVar1[0x12].field_0xe != 0) {
              lVar18 = 0;
              do {
                if (*(long *)((long)pIVar1[0xb].data + lVar18) == TypeInfo_IEnumerator) {
                  puVar9 = &pIVar1[(long)*(int *)((long)pIVar1[0xb].data + lVar18 + 8) + 0x13].bits;
                  goto label_04286243;
                }
                lVar18 = lVar18 + 0x10;
              } while ((ulong)*(ushort *)&pIVar1[0x12].field_0xe << 4 != lVar18);
            }
            puVar9 = (uint *)il2cpp_runtime_helper_02300d20(ppIVar7,TypeInfo_IEnumerator,0);
label_04286243:
            cVar3 = (**(code **)puVar9)();
            if (cVar3 == '\0') {
              iVar17 = 0xe;
              goto label_042863cf;
            }
            ppIVar7 = method->parameters;
            if (ppIVar7 == (Il2CppType **)0x0) goto label_0428676f;
            pIVar1 = *ppIVar7;
            if ((ulong)*(ushort *)&pIVar1[0x12].field_0xe != 0) {
              lVar18 = 0;
              do {
                if (*(long *)((long)pIVar1[0xb].data + lVar18) == TypeInfo_IEnumerator) {
                  puVar9 = &pIVar1[(long)(*(int *)((long)pIVar1[0xb].data + lVar18 + 8) + 1) + 0x13].bits;
                  goto label_042862d8;
                }
                lVar18 = lVar18 + 0x10;
              } while ((ulong)*(ushort *)&pIVar1[0x12].field_0xe << 4 != lVar18);
            }
            puVar9 = (uint *)il2cpp_runtime_helper_02300d20(ppIVar7,TypeInfo_IEnumerator,1);
label_042862d8:
            unaff_R13 = (long *)(**(code **)puVar9)(ppIVar7);
            if (unaff_R13 == (long *)0x0) goto label_04286765;
            if ((*(byte *)(*unaff_R13 + 0x130) < *(byte *)(TypeInfo_XmlNode + 0x130)) ||
               (*(long *)(*(long *)(*unaff_R13 + 200) + -8 + (ulong)*(byte *)(TypeInfo_XmlNode + 0x130) * 8) !=
                TypeInfo_XmlNode)) {
              il2cpp_runtime_helper_022b2fd0(unaff_R13);
              break;
            }
            pSVar10 = (System_Xml_XmlAttributeCollection_o *)(**(code **)(*unaff_R13 + 0x238))(unaff_R13);
            if (pSVar10 == (System_Xml_XmlAttributeCollection_o *)0x0) goto label_0428676a;
            pSVar11 = System_Xml_XmlAttributeCollection__get_ItemOf_47c9740
                                (pSVar10,"cref",(MethodInfo *)0x0);
            if (pSVar11 == (System_Xml_XmlAttribute_o *)0x0) goto label_0428675b;
            pSVar12 = (System_String_o *)(*(pSVar11->klass->vtable)._9_get_Value.methodPtr)(pSVar11);
            if (*(int *)(TypeInfo_XmlDocumentUtils + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar13 = CustomLogic_Editor_XmlDocumentUtils__ResolveInheritDoc(pSVar12,(MethodInfo *)0x0);
            if (pSVar13 != (System_Xml_XmlNode_o *)0x0) {
              plVar14 = (long *)(**(code **)(*unaff_R13 + 0x1f8))(unaff_R13);
              if (plVar14 == (long *)0x0) goto label_04286779;
              plVar14 = (long *)(**(code **)(*plVar14 + 0x248))(plVar14);
              if (plVar14 == (long *)0x0) goto label_0428677e;
              uVar15 = (**(code **)(*plVar14 + 0x608))(plVar14,pSVar13,1,*(undefined8 *)(*plVar14 + 0x610));
              plVar14 = (long *)(**(code **)(*unaff_R13 + 0x1f8))(unaff_R13);
              if (plVar14 == (long *)0x0) goto label_04286783;
              (**(code **)(*plVar14 + 0x2c8))(plVar14,uVar15,unaff_R13,*(undefined8 *)(*plVar14 + 0x2d0));
              goto label_042864d4;
            }
            pIVar5 = method->klass;
            pSVar12 = System_String__Concat_3ae5ba0("Could not resolve cref ",pSVar12,(MethodInfo *)0x0);
            if (pIVar5 == (Il2CppClass *)0x0) goto label_04286760;
            (*(code *)(pIVar5->_1).namespaze)
                      ((pIVar5->_1).element_class,pSVar12,*(undefined8 *)&(pIVar5->_1).byval_arg.bits);
          }
          il2cpp_runtime_helper_022b2c90();
label_0428675b:
          il2cpp_runtime_helper_022b2c90();
label_04286760:
          il2cpp_runtime_helper_022b2c90();
label_04286765:
          il2cpp_runtime_helper_022b2c90();
label_0428676a:
          il2cpp_runtime_helper_022b2c90();
label_0428676f:
          il2cpp_runtime_helper_022b2c90();
          while( true ) {
            il2cpp_runtime_helper_022fefe0();
label_04286779:
            il2cpp_runtime_helper_022b2c90();
label_0428677e:
            il2cpp_runtime_helper_022b2c90();
label_04286783:
            auVar22 = il2cpp_runtime_helper_022b2c90();
            ppSVar20 = auVar22._0_8_;
            if (auVar22._8_4_ == 1) break;
            iVar17 = 0;
            if (auVar22._8_4_ != 1) {
              local_38 = (System_Xml_XmlDocument_o *)0x0;
              goto joined_r0x04286874;
            }
            plVar14 = (long *)__cxa_begin_catch(ppSVar20);
            local_38 = (System_Xml_XmlDocument_o *)*plVar14;
            __cxa_end_catch();
label_042863cf:
            if ((local_44 < 0) && (plVar14 = (long *)il2cpp_runtime_helper_023051f0(), plVar14 != (long *)0x0)) {
              lVar18 = *plVar14;
              if ((ulong)*(ushort *)(lVar18 + 0x12e) != 0) {
                lVar19 = 0;
                do {
                  if (*(long *)(*(long *)(lVar18 + 0xb0) + lVar19) == TypeInfo_IDisposable) {
                    puVar16 = (undefined8 *)
                              (lVar18 + (long)*(int *)(*(long *)(lVar18 + 0xb0) + 8 + lVar19) * 0x10 + 0x138);
                    goto label_0428658a;
                  }
                  lVar19 = lVar19 + 0x10;
                } while ((ulong)*(ushort *)(lVar18 + 0x12e) << 4 != lVar19);
              }
              puVar16 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar14,TypeInfo_IDisposable,0);
label_0428658a:
              (*(code *)*puVar16)(plVar14);
            }
            if (local_38 == (System_Xml_XmlDocument_o *)0x0) {
              if ((iVar17 != 0xe) && (iVar17 != 0)) {
                return;
              }
              method->parameters = (Il2CppType **)0x0;
              il2cpp_runtime_helper_022b4080(&method->parameters);
              if (*(int *)(TypeInfo_Task + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              if (g_data_057aa291 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_Task);
                g_data_057aa291 = '\x01';
                if (*(int *)(TypeInfo_Task + 0xe4) != 0) goto label_042865f8;
label_042866e2:
                il2cpp_runtime_helper_02337ed0();
                __this_00 = *(System_Threading_Tasks_Task_o **)(*(long *)(TypeInfo_Task + 0xb8) + 0x30);
              }
              else {
                if (*(int *)(TypeInfo_Task + 0xe4) == 0) goto label_042866e2;
label_042865f8:
                __this_00 = *(System_Threading_Tasks_Task_o **)(*(long *)(TypeInfo_Task + 0xb8) + 0x30);
              }
              if (__this_00 != (System_Threading_Tasks_Task_o *)0x0) {
                local_40 = (_union_14)System_Threading_Tasks_Task__GetAwaiter(__this_00,(MethodInfo *)0x0);
                bVar4 = System_Runtime_CompilerServices_TaskAwaiter__get_IsCompleted
                                  ((System_Runtime_CompilerServices_TaskAwaiter_o)&local_40,(MethodInfo *)0x0)
                ;
                if ((char)bVar4 == '\0') {
                  *(undefined4 *)&method->methodPointer = 1;
                  method->field8_0x40 = local_40;
                  il2cpp_runtime_helper_022b4080(&method->field8_0x40,0);
                  if (*(int *)(TypeInfo_AsyncTaskMethodBuilder + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  __this_03.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._0_1_ = uVar23;
                  __this_03.fields.m_builder.fields.m_coreState.fields.m_stateMachine =
                       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)in_stack_ffffffffffffff98;
                  __this_03.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._1_7_ =
                       in_stack_ffffffffffffffa1;
                  __this_03.fields.m_builder.fields.m_task._0_1_ = uVar24;
                  __this_03.fields.m_builder.fields.m_task._1_7_ = in_stack_ffffffffffffffa9;
                  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__AwaitUnsafeOnCompleted_TaskAwaiter__XmlDocumentUtils__ResolveAndReplaceInheritDocNodeAsync_d__4_
                            (__this_03,
                             (System_Runtime_CompilerServices_TaskAwaiter_o *)&method->virtualMethodPointer,
                             (CustomLogic_Editor_XmlDocumentUtils__ResolveAndReplaceInheritDocNodeAsync_d__4_o
                              *)&local_40,(MethodInfo_24B0B90 *)method);
                  return;
                }
                goto label_04286628;
              }
              il2cpp_runtime_helper_022b2c90();
              method = (MethodInfo *)ppSVar20;
              goto label_04286704;
            }
          }
          str3 = (System_String_c *)__cxa_begin_catch(ppSVar20);
          uVar15 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
          cVar3 = il2cpp_runtime_helper_0233e000(uVar15,(((str3->_1).image)->_1).image);
          if (cVar3 == '\0') goto label_04286a4e;
          str3 = (str3->_1).image;
          __cxa_end_catch();
          pIVar5 = method->klass;
          pSVar10 = (System_Xml_XmlAttributeCollection_o *)
                    (**(code **)(*unaff_R13 + 0x238))(unaff_R13,*(undefined8 *)(*unaff_R13 + 0x240));
          if (pSVar10 == (System_Xml_XmlAttributeCollection_o *)0x0) {
label_04286a49:
            il2cpp_runtime_helper_022b2c90();
label_04286a4e:
            puVar16 = (undefined8 *)__cxa_allocate_exception(8);
            *puVar16 = (str3->_1).image;
            __cxa_throw(puVar16,&PTR_PTR_05215060,0);
          }
          pSVar12 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"cref");
          pSVar11 = System_Xml_XmlAttributeCollection__get_ItemOf_47c9740(pSVar10,pSVar12,(MethodInfo *)0x0);
          if (pSVar11 == (System_Xml_XmlAttribute_o *)0x0) {
label_04286a3a:
            il2cpp_runtime_helper_022b2c90();
            il2cpp_runtime_helper_022b2c90();
label_04286a44:
            il2cpp_runtime_helper_022b2c90();
            goto label_04286a49;
          }
          pSVar12 = (System_String_o *)
                    (*(pSVar11->klass->vtable)._9_get_Value.methodPtr)
                              (pSVar11,(pSVar11->klass->vtable)._9_get_Value.method);
          if (str3 == (System_String_c *)0x0) goto label_04286a44;
          pvVar2 = (str3->_1).image;
          str3 = (System_String_c *)
                 (**(code **)((long)pvVar2 + 0x188))(str3,*(undefined8 *)((long)pvVar2 + 400));
          str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Error resolving cref=");
          str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" ");
          pSVar12 = System_String__Concat_3af7470(str0,pSVar12,str2,(System_String_o *)str3,(MethodInfo *)0x0)
          ;
          if (pIVar5 == (Il2CppClass *)0x0) {
            il2cpp_runtime_helper_022b2c90();
            goto label_04286a3a;
          }
          (*(code *)(pIVar5->_1).namespaze)
                    ((pIVar5->_1).element_class,pSVar12,*(undefined8 *)&(pIVar5->_1).byval_arg.bits);
label_042864d4:
          if (*(int *)(TypeInfo_Task + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          uVar24 = System_Threading_Tasks_Task__Yield((MethodInfo *)0x0);
          uVar23 = System_Runtime_CompilerServices_YieldAwaitable__GetAwaiter(&stack0xffffffffffffffa8);
          if (*(int *)(TypeInfo_YieldAwaiter + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar4 = System_Runtime_CompilerServices_YieldAwaitable_YieldAwaiter__get_IsCompleted
                            (&stack0xffffffffffffffa0);
          if ((char)bVar4 == '\0') {
label_04286704:
            *(undefined4 *)&method->methodPointer = 0;
            *(undefined1 *)&method->field7_0x38 = uVar23;
            if (*(int *)(TypeInfo_AsyncTaskMethodBuilder + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            __this_04.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._0_1_ = uVar23;
            __this_04.fields.m_builder.fields.m_coreState.fields.m_stateMachine =
                 (System_Runtime_CompilerServices_IAsyncStateMachine_o *)in_stack_ffffffffffffff98;
            __this_04.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._1_7_ =
                 in_stack_ffffffffffffffa1;
            __this_04.fields.m_builder.fields.m_task._0_1_ = uVar24;
            __this_04.fields.m_builder.fields.m_task._1_7_ = in_stack_ffffffffffffffa9;
            System_Runtime_CompilerServices_AsyncTaskMethodBuilder__AwaitUnsafeOnCompleted_YieldAwaitable_YieldAwaiter__XmlDocumentUtils__ResolveAndReplaceInheritDocNodeAsync_d__4_
                      (__this_04,
                       (System_Runtime_CompilerServices_YieldAwaitable_YieldAwaiter_o *)
                       &method->virtualMethodPointer,
                       (CustomLogic_Editor_XmlDocumentUtils__ResolveAndReplaceInheritDocNodeAsync_d__4_o *)
                       &stack0xffffffffffffffa0,(MethodInfo_24B3A40 *)method);
            return;
          }
          if (*(int *)(TypeInfo_YieldAwaiter + 0xe4) == 0) {
label_04286546:
            il2cpp_runtime_helper_02337ed0();
          }
label_0428654b:
          System_Runtime_CompilerServices_YieldAwaitable_YieldAwaiter__GetResult();
        } while( true );
      }
    }
    auVar21 = il2cpp_runtime_helper_022b2c90();
label_04286112:
    if (auVar21._8_4_ != 1) {
      _Unwind_Resume(auVar21._0_8_);
    }
    puVar16 = (undefined8 *)__cxa_begin_catch(auVar21._0_8_);
    uVar15 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    cVar3 = il2cpp_runtime_helper_0233e000(uVar15,*(undefined8 *)*puVar16);
    if (cVar3 == '\0') {
      puVar8 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar8 = *puVar16;
      __cxa_throw(puVar8,&PTR_PTR_05215060,0);
    }
    method_00 = (MethodInfo *)*puVar16;
    __cxa_end_catch();
    *(undefined4 *)&method->methodPointer = 0xfffffffe;
    lVar18 = il2cpp_runtime_helper_023445d0(&TypeInfo_AsyncTaskMethodBuilder);
    if (*(int *)(lVar18 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0(lVar18);
    }
    __this_01.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._0_1_ = uVar23;
    __this_01.fields.m_builder.fields.m_coreState.fields.m_stateMachine =
         (System_Runtime_CompilerServices_IAsyncStateMachine_o *)in_stack_ffffffffffffff98;
    __this_01.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._1_7_ =
         in_stack_ffffffffffffffa1;
    __this_01.fields.m_builder.fields.m_task._0_1_ = uVar24;
    __this_01.fields.m_builder.fields.m_task._1_7_ = in_stack_ffffffffffffffa9;
    System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetException
              (__this_01,(System_Exception_o *)&method->virtualMethodPointer,method_00);
  }
  return;
joined_r0x04286874:
  if ((local_44 < 0) &&
     (plVar14 = (long *)il2cpp_runtime_helper_023051f0(method->parameters,TypeInfo_IDisposable), plVar14 != (long *)0x0)) {
    lVar18 = *plVar14;
    if ((ulong)*(ushort *)(lVar18 + 0x12e) != 0) {
      lVar19 = 0;
      do {
        if (*(long *)(*(long *)(lVar18 + 0xb0) + lVar19) == TypeInfo_IDisposable) {
          puVar16 = (undefined8 *)
                    (lVar18 + (long)*(int *)(*(long *)(lVar18 + 0xb0) + 8 + lVar19) * 0x10 + 0x138);
          goto label_042868e4;
        }
        lVar19 = lVar19 + 0x10;
      } while ((ulong)*(ushort *)(lVar18 + 0x12e) << 4 != lVar19);
    }
    puVar16 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar14,TypeInfo_IDisposable,0);
label_042868e4:
    (*(code *)*puVar16)(plVar14,puVar16[1]);
  }
  auVar21 = auVar22._0_12_;
  if (local_38 == (System_Xml_XmlDocument_o *)0x0) goto label_04286112;
  auVar22 = il2cpp_runtime_helper_022fefe0(local_38);
  goto joined_r0x04286874;
}


// CustomLogic.Editor.XmlDocumentUtils.<ResolveAndReplaceInheritDocNodeAsync>d__4$$SetStateMachine
// il2cpp: void CustomLogic_Editor_XmlDocumentUtils__ResolveAndReplaceInheritDocNodeAsync_d__4__SetStateMachine (CustomLogic_Editor_XmlDocumentUtils__ResolveAndReplaceInheritDocNodeAsync_d__4_o __this, System_Runtime_CompilerServices_IAsyncStateMachine_o* stateMachine, const MethodInfo* method);
// 0x4286ab0

void CustomLogic_Editor_XmlDocumentUtils__ResolveAndReplaceInheritDocNodeAsync_d__4__SetStateMachine
               (CustomLogic_Editor_XmlDocumentUtils__ResolveAndReplaceInheritDocNodeAsync_d__4_o __this,
               System_Runtime_CompilerServices_IAsyncStateMachine_o *stateMachine,MethodInfo *method)

{
  if (g_data_057adcaf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AsyncTaskMethodBuilder);
    g_data_057adcaf = '\x01';
  }
  if (*(int *)(TypeInfo_AsyncTaskMethodBuilder + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetStateMachine
            ((System_Runtime_CompilerServices_AsyncTaskMethodBuilder_o)__this.fields._0_24_,
             (System_Runtime_CompilerServices_IAsyncStateMachine_o *)&stateMachine->monitor,method);
  return;
}


// CustomLogic.Editor.XmlDocumentUtils$$LoadXml
// il2cpp: System_Xml_XmlDocument_o* CustomLogic_Editor_XmlDocumentUtils__LoadXml (System_String_o* path, const MethodInfo* method);
// 0x4282f70

System_Xml_XmlDocument_o *
CustomLogic_Editor_XmlDocumentUtils__LoadXml(System_String_o *path,MethodInfo *method)

{
  int iVar1;
  System_Xml_XmlDocument_c *pSVar2;
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_o __this;
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_o __this_00;
  System_Xml_XmlDocument_o *__this_01;
  Il2CppClass *__this_02;
  System_String_o *xpath;
  System_Xml_XmlDocument_o *pSVar3;
  undefined8 uVar4;
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_c *pSVar5;
  Il2CppClass *pIVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_c *pSStack_a8;
  Il2CppClass *pIStack_a0;
  Il2CppType *pIStack_98;
  MethodInfo_24B95D0_RGCTXs *pMStack_90;
  _union_215005 _Stack_88;
  _union_14 _Stack_80;
  uint32_t uStack_78;
  uint16_t uStack_74;
  uint16_t uStack_72;
  uint16_t uStack_70;
  uint8_t uStack_6e;
  uint8_t uStack_6d;
  undefined4 uStack_6c;
  uint32_t uStack_68;
  uint16_t uStack_64;
  uint16_t uStack_62;
  uint32_t uStack_60;
  uint16_t uStack_5c;
  uint16_t uStack_5a;
  uint16_t uStack_58;
  uint8_t uStack_56;
  uint8_t uStack_55;
  undefined4 uStack_54;
  Il2CppClass *pIStack_48;
  System_Xml_XmlDocument_o *pSStack_40;
  undefined8 uStack_38;
  System_Xml_XmlDocument_o *pSStack_30;
  System_String_o *pSStack_28;
  
  if (g_data_057adc94 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_XmlDocument);
    g_data_057adc94 = '\x01';
  }
  __this_01 = (System_Xml_XmlDocument_o *)il2cpp_runtime_helper_023052d0(TypeInfo_XmlDocument);
  uVar4 = 0;
  pSVar3 = __this_01;
  System_Xml_XmlDocument___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 != (System_Xml_XmlDocument_o *)0x0) {
    (*(__this_01->klass->vtable)._82_Load.methodPtr)
              (__this_01,path,(__this_01->klass->vtable)._82_Load.method);
    return __this_01;
  }
  il2cpp_runtime_helper_022b2c90();
  pSStack_30 = __this_01;
  pSStack_28 = path;
  if (g_data_057adc95 == '\0') {
    uStack_38 = 0x42830a2;
    il2cpp_runtime_helper_023445d0(&TypeInfo_XmlDocumentUtils);
    uStack_38 = 0x42830ae;
    il2cpp_runtime_helper_023445d0(&"']");
    uStack_38 = 0x42830ba;
    il2cpp_runtime_helper_023445d0(&"//member[@name='");
    g_data_057adc95 = '\x01';
    iVar1 = *(int *)(TypeInfo_XmlDocumentUtils + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_XmlDocumentUtils + 0xe4);
  }
  if (iVar1 == 0) {
    uStack_38 = 0x42830dd;
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057adc94 == '\0') {
    uStack_38 = 0x4283024;
    il2cpp_runtime_helper_023445d0(&TypeInfo_XmlDocument);
    g_data_057adc94 = '\x01';
  }
  uStack_38 = 0x428303a;
  __this_02 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_XmlDocument);
  pSVar5 = (System_Runtime_CompilerServices_AsyncTaskMethodBuilder_c *)0x0;
  uStack_38 = 0x4283047;
  pIVar6 = __this_02;
  System_Xml_XmlDocument___ctor((System_Xml_XmlDocument_o *)__this_02,(MethodInfo *)0x0);
  if (__this_02 != (Il2CppClass *)0x0) {
    pSVar2 = (__this_02->_1).image;
    uStack_38 = 0x4283066;
    (*(pSVar2->vtable)._82_Load.methodPtr)(__this_02,uVar4,(pSVar2->vtable)._82_Load.method);
    uStack_38 = 0x4283084;
    xpath = System_String__Concat_3af7150
                      ("//member[@name='",(System_String_o *)pSVar3,"']",(MethodInfo *)0x0);
    pSVar3 = (System_Xml_XmlDocument_o *)
             System_Xml_XmlNode__SelectSingleNode((System_Xml_XmlNode_o *)__this_02,xpath,(MethodInfo *)0x0);
    return pSVar3;
  }
  uStack_38 = 0x42830f4;
  il2cpp_runtime_helper_022b2c90();
  pIStack_48 = __this_02;
  pSStack_40 = pSVar3;
  uStack_38 = uVar4;
  if (g_data_057adc96 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Start_XmlDocumentUtils_ResolveAndReplaceInheritDocN);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AsyncTaskMethodBuilder);
    g_data_057adc96 = '\x01';
  }
  pIStack_98 = (Il2CppType *)0x0;
  pMStack_90 = (MethodInfo_24B95D0_RGCTXs *)0x0;
  pSStack_a8 = (System_Runtime_CompilerServices_AsyncTaskMethodBuilder_c *)0x0;
  pIStack_a0 = (Il2CppClass *)0x0;
  uVar8 = 0;
  _Stack_88.genericMethod = (void *)0x0;
  if (*(int *)(TypeInfo_AsyncTaskMethodBuilder + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__Create
            ((System_Runtime_CompilerServices_AsyncTaskMethodBuilder_o *)&_Stack_80,(MethodInfo *)0x0);
  uStack_58 = uStack_70;
  uStack_56 = uStack_6e;
  uStack_55 = uStack_6d;
  uStack_54 = uStack_6c;
  uStack_68 = _Stack_80._0_4_;
  uStack_64 = _Stack_80._4_2_;
  uStack_62 = _Stack_80._6_2_;
  uStack_60 = uStack_78;
  uStack_5c = uStack_74;
  uStack_5a = uStack_72;
  il2cpp_runtime_helper_022b4080((MethodInfo *)&stack0xffffffffffffff40,0);
  pIStack_a0 = pIVar6;
  il2cpp_runtime_helper_022b4080(&pIStack_a0,pIVar6);
  pSStack_a8 = pSVar5;
  il2cpp_runtime_helper_022b4080(&pSStack_a8,pSVar5);
  uVar7 = 0xffffffff;
  __this.fields.m_builder.fields.m_coreState.fields.m_stateMachine._4_4_ = uVar8;
  __this.fields.m_builder.fields.m_coreState.fields.m_stateMachine._0_4_ = 0xffffffff;
  __this.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._0_4_ = _Stack_80._0_4_;
  __this.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._4_2_ = (uint16_t)_Stack_80._4_4_;
  __this.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._6_2_ = SUB42(_Stack_80._4_4_,2);
  __this.fields.m_builder.fields.m_task._0_4_ = uStack_78;
  __this.fields.m_builder.fields.m_task._4_2_ = (uint16_t)_uStack_74;
  __this.fields.m_builder.fields.m_task._6_2_ = SUB42(_uStack_74,2);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__Start_XmlDocumentUtils__ResolveAndReplaceInheritDocNodeAsync_d__4_
            (__this,(CustomLogic_Editor_XmlDocumentUtils__ResolveAndReplaceInheritDocNodeAsync_d__4_o *)
                    &stack0xffffffffffffff40,(MethodInfo_24B95D0 *)&stack0xffffffffffffff38);
  __this_00.fields.m_builder.fields.m_coreState.fields.m_stateMachine._4_4_ = uVar8;
  __this_00.fields.m_builder.fields.m_coreState.fields.m_stateMachine._0_4_ = uVar7;
  __this_00.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._0_4_ = _Stack_80._0_4_;
  __this_00.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._4_2_ =
       (uint16_t)_Stack_80._4_4_;
  __this_00.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._6_2_ = SUB42(_Stack_80._4_4_,2)
  ;
  __this_00.fields.m_builder.fields.m_task._0_4_ = uStack_78;
  __this_00.fields.m_builder.fields.m_task._4_2_ = (uint16_t)_uStack_74;
  __this_00.fields.m_builder.fields.m_task._6_2_ = SUB42(_uStack_74,2);
  pSVar3 = (System_Xml_XmlDocument_o *)
           System_Runtime_CompilerServices_AsyncTaskMethodBuilder__get_Task
                     (__this_00,(MethodInfo *)&stack0xffffffffffffff40);
  return pSVar3;
}


// CustomLogic.Editor.XmlDocumentUtils$$TryResolve
// il2cpp: System_Xml_XmlNode_o* CustomLogic_Editor_XmlDocumentUtils__TryResolve (System_String_o* cref, System_String_o* file, const MethodInfo* method);
// 0x4282fe0

System_Xml_XmlNode_o *
CustomLogic_Editor_XmlDocumentUtils__TryResolve
          (System_String_o *cref,System_String_o *file,MethodInfo *method)

{
  int iVar1;
  System_Xml_XmlDocument_c *pSVar2;
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_o __this;
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_o __this_00;
  Il2CppClass *__this_01;
  System_String_o *xpath;
  System_Xml_XmlNode_o *pSVar3;
  System_Threading_Tasks_Task_o *pSVar4;
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_c *pSVar5;
  Il2CppClass *pIVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_c *local_90;
  Il2CppClass *pIStack_88;
  Il2CppType *local_80;
  MethodInfo_24B95D0_RGCTXs *pMStack_78;
  _union_215005 local_70;
  _union_14 local_68;
  uint32_t uStack_60;
  uint16_t uStack_5c;
  uint16_t uStack_5a;
  uint16_t local_58;
  uint8_t uStack_56;
  uint8_t uStack_55;
  undefined4 uStack_54;
  uint32_t local_50;
  uint16_t uStack_4c;
  uint16_t uStack_4a;
  uint32_t uStack_48;
  uint16_t uStack_44;
  uint16_t uStack_42;
  uint16_t local_40;
  uint8_t uStack_3e;
  uint8_t uStack_3d;
  undefined4 uStack_3c;
  Il2CppClass *pIStack_30;
  System_String_o *pSStack_28;
  System_String_o *pSStack_20;
  
  if (g_data_057adc95 == '\0') {
    pSStack_20 = (System_String_o *)0x42830a2;
    il2cpp_runtime_helper_023445d0(&TypeInfo_XmlDocumentUtils);
    pSStack_20 = (System_String_o *)0x42830ae;
    il2cpp_runtime_helper_023445d0(&"']");
    pSStack_20 = (System_String_o *)0x42830ba;
    il2cpp_runtime_helper_023445d0(&"//member[@name='");
    g_data_057adc95 = '\x01';
    iVar1 = *(int *)(TypeInfo_XmlDocumentUtils + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_XmlDocumentUtils + 0xe4);
  }
  if (iVar1 == 0) {
    pSStack_20 = (System_String_o *)0x42830dd;
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057adc94 == '\0') {
    pSStack_20 = (System_String_o *)0x4283024;
    il2cpp_runtime_helper_023445d0(&TypeInfo_XmlDocument);
    g_data_057adc94 = '\x01';
  }
  pSStack_20 = (System_String_o *)0x428303a;
  __this_01 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_XmlDocument);
  pSVar5 = (System_Runtime_CompilerServices_AsyncTaskMethodBuilder_c *)0x0;
  pSStack_20 = (System_String_o *)0x4283047;
  pIVar6 = __this_01;
  System_Xml_XmlDocument___ctor((System_Xml_XmlDocument_o *)__this_01,(MethodInfo *)0x0);
  if (__this_01 != (Il2CppClass *)0x0) {
    pSVar2 = (__this_01->_1).image;
    pSStack_20 = (System_String_o *)0x4283066;
    (*(pSVar2->vtable)._82_Load.methodPtr)(__this_01,file,(pSVar2->vtable)._82_Load.method);
    pSStack_20 = (System_String_o *)0x4283084;
    xpath = System_String__Concat_3af7150("//member[@name='",cref,"']",(MethodInfo *)0x0);
    pSVar3 = System_Xml_XmlNode__SelectSingleNode((System_Xml_XmlNode_o *)__this_01,xpath,(MethodInfo *)0x0);
    return pSVar3;
  }
  pSStack_20 = (System_String_o *)0x42830f4;
  il2cpp_runtime_helper_022b2c90();
  pIStack_30 = __this_01;
  pSStack_28 = cref;
  pSStack_20 = file;
  if (g_data_057adc96 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Start_XmlDocumentUtils_ResolveAndReplaceInheritDocN);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AsyncTaskMethodBuilder);
    g_data_057adc96 = '\x01';
  }
  local_80 = (Il2CppType *)0x0;
  pMStack_78 = (MethodInfo_24B95D0_RGCTXs *)0x0;
  local_90 = (System_Runtime_CompilerServices_AsyncTaskMethodBuilder_c *)0x0;
  pIStack_88 = (Il2CppClass *)0x0;
  uVar8 = 0;
  local_70.genericMethod = (void *)0x0;
  if (*(int *)(TypeInfo_AsyncTaskMethodBuilder + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__Create
            ((System_Runtime_CompilerServices_AsyncTaskMethodBuilder_o *)&local_68,(MethodInfo *)0x0);
  local_40 = local_58;
  uStack_3e = uStack_56;
  uStack_3d = uStack_55;
  uStack_3c = uStack_54;
  local_50 = local_68._0_4_;
  uStack_4c = local_68._4_2_;
  uStack_4a = local_68._6_2_;
  uStack_48 = uStack_60;
  uStack_44 = uStack_5c;
  uStack_42 = uStack_5a;
  il2cpp_runtime_helper_022b4080((MethodInfo *)&stack0xffffffffffffff58,0);
  pIStack_88 = pIVar6;
  il2cpp_runtime_helper_022b4080(&pIStack_88,pIVar6);
  local_90 = pSVar5;
  il2cpp_runtime_helper_022b4080(&local_90,pSVar5);
  uVar7 = 0xffffffff;
  __this.fields.m_builder.fields.m_coreState.fields.m_stateMachine._4_4_ = uVar8;
  __this.fields.m_builder.fields.m_coreState.fields.m_stateMachine._0_4_ = 0xffffffff;
  __this.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._0_4_ = local_68._0_4_;
  __this.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._4_2_ = (uint16_t)local_68._4_4_;
  __this.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._6_2_ = SUB42(local_68._4_4_,2);
  __this.fields.m_builder.fields.m_task._0_4_ = uStack_60;
  __this.fields.m_builder.fields.m_task._4_2_ = (uint16_t)_uStack_5c;
  __this.fields.m_builder.fields.m_task._6_2_ = SUB42(_uStack_5c,2);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__Start_XmlDocumentUtils__ResolveAndReplaceInheritDocNodeAsync_d__4_
            (__this,(CustomLogic_Editor_XmlDocumentUtils__ResolveAndReplaceInheritDocNodeAsync_d__4_o *)
                    &stack0xffffffffffffff58,(MethodInfo_24B95D0 *)&stack0xffffffffffffff50);
  __this_00.fields.m_builder.fields.m_coreState.fields.m_stateMachine._4_4_ = uVar8;
  __this_00.fields.m_builder.fields.m_coreState.fields.m_stateMachine._0_4_ = uVar7;
  __this_00.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._0_4_ = local_68._0_4_;
  __this_00.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._4_2_ = (uint16_t)local_68._4_4_
  ;
  __this_00.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._6_2_ = SUB42(local_68._4_4_,2);
  __this_00.fields.m_builder.fields.m_task._0_4_ = uStack_60;
  __this_00.fields.m_builder.fields.m_task._4_2_ = (uint16_t)_uStack_5c;
  __this_00.fields.m_builder.fields.m_task._6_2_ = SUB42(_uStack_5c,2);
  pSVar4 = System_Runtime_CompilerServices_AsyncTaskMethodBuilder__get_Task
                     (__this_00,(MethodInfo *)&stack0xffffffffffffff58);
  return (System_Xml_XmlNode_o *)pSVar4;
}


// CustomLogic.Editor.XmlDocumentUtils$$ResolveAndReplaceInheritDocNodeAsync
// il2cpp: System_Threading_Tasks_Task_o* CustomLogic_Editor_XmlDocumentUtils__ResolveAndReplaceInheritDocNodeAsync (System_Xml_XmlDocument_o* xmlDocument, System_Action_string__o* logError, const MethodInfo* method);
// 0x4283100

System_Threading_Tasks_Task_o *
CustomLogic_Editor_XmlDocumentUtils__ResolveAndReplaceInheritDocNodeAsync
          (System_Xml_XmlDocument_o *xmlDocument,System_Action_string__o *logError,MethodInfo *method)

{
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_o __this;
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_o __this_00;
  System_Threading_Tasks_Task_o *pSVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_c *pSStack_78;
  Il2CppClass *pIStack_70;
  Il2CppType *pIStack_68;
  MethodInfo_24B95D0_RGCTXs *pMStack_60;
  _union_215005 _Stack_58;
  _union_14 _Stack_50;
  uint32_t uStack_48;
  uint16_t uStack_44;
  uint16_t uStack_42;
  uint16_t uStack_40;
  uint8_t uStack_3e;
  uint8_t uStack_3d;
  undefined4 uStack_3c;
  uint32_t uStack_38;
  uint16_t uStack_34;
  uint16_t uStack_32;
  uint32_t uStack_30;
  uint16_t uStack_2c;
  uint16_t uStack_2a;
  uint16_t uStack_28;
  uint8_t uStack_26;
  uint8_t uStack_25;
  undefined4 uStack_24;
  
  if (g_data_057adc96 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Start_XmlDocumentUtils_ResolveAndReplaceInheritDocN);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AsyncTaskMethodBuilder);
    g_data_057adc96 = '\x01';
  }
  pIStack_68 = (Il2CppType *)0x0;
  pMStack_60 = (MethodInfo_24B95D0_RGCTXs *)0x0;
  pSStack_78 = (System_Runtime_CompilerServices_AsyncTaskMethodBuilder_c *)0x0;
  pIStack_70 = (Il2CppClass *)0x0;
  uVar3 = 0;
  _Stack_58.genericMethod = (void *)0x0;
  if (*(int *)(TypeInfo_AsyncTaskMethodBuilder + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__Create
            ((System_Runtime_CompilerServices_AsyncTaskMethodBuilder_o *)&_Stack_50,(MethodInfo *)0x0);
  uStack_28 = uStack_40;
  uStack_26 = uStack_3e;
  uStack_25 = uStack_3d;
  uStack_24 = uStack_3c;
  uStack_38 = _Stack_50._0_4_;
  uStack_34 = _Stack_50._4_2_;
  uStack_32 = _Stack_50._6_2_;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_2a = uStack_42;
  il2cpp_runtime_helper_022b4080((MethodInfo *)&stack0xffffffffffffff70,0);
  pIStack_70 = (Il2CppClass *)xmlDocument;
  il2cpp_runtime_helper_022b4080(&pIStack_70,xmlDocument);
  pSStack_78 = (System_Runtime_CompilerServices_AsyncTaskMethodBuilder_c *)logError;
  il2cpp_runtime_helper_022b4080(&pSStack_78,logError);
  uVar2 = 0xffffffff;
  __this.fields.m_builder.fields.m_coreState.fields.m_stateMachine._4_4_ = uVar3;
  __this.fields.m_builder.fields.m_coreState.fields.m_stateMachine._0_4_ = 0xffffffff;
  __this.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._0_4_ = _Stack_50._0_4_;
  __this.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._4_2_ = (uint16_t)_Stack_50._4_4_;
  __this.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._6_2_ = SUB42(_Stack_50._4_4_,2);
  __this.fields.m_builder.fields.m_task._0_4_ = uStack_48;
  __this.fields.m_builder.fields.m_task._4_2_ = (uint16_t)_uStack_44;
  __this.fields.m_builder.fields.m_task._6_2_ = SUB42(_uStack_44,2);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__Start_XmlDocumentUtils__ResolveAndReplaceInheritDocNodeAsync_d__4_
            (__this,(CustomLogic_Editor_XmlDocumentUtils__ResolveAndReplaceInheritDocNodeAsync_d__4_o *)
                    &stack0xffffffffffffff70,(MethodInfo_24B95D0 *)&stack0xffffffffffffff68);
  __this_00.fields.m_builder.fields.m_coreState.fields.m_stateMachine._4_4_ = uVar3;
  __this_00.fields.m_builder.fields.m_coreState.fields.m_stateMachine._0_4_ = uVar2;
  __this_00.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._0_4_ = _Stack_50._0_4_;
  __this_00.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._4_2_ =
       (uint16_t)_Stack_50._4_4_;
  __this_00.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._6_2_ = SUB42(_Stack_50._4_4_,2)
  ;
  __this_00.fields.m_builder.fields.m_task._0_4_ = uStack_48;
  __this_00.fields.m_builder.fields.m_task._4_2_ = (uint16_t)_uStack_44;
  __this_00.fields.m_builder.fields.m_task._6_2_ = SUB42(_uStack_44,2);
  pSVar1 = System_Runtime_CompilerServices_AsyncTaskMethodBuilder__get_Task
                     (__this_00,(MethodInfo *)&stack0xffffffffffffff70);
  return pSVar1;
}


// CustomLogic.Editor.XmlDocumentUtils$$ResolveInheritDoc
// il2cpp: System_Xml_XmlNode_o* CustomLogic_Editor_XmlDocumentUtils__ResolveInheritDoc (System_String_o* cref, const MethodInfo* method);
// 0x4283210

System_Xml_XmlNode_o *
CustomLogic_Editor_XmlDocumentUtils__ResolveInheritDoc(System_String_o *cref,MethodInfo *method)

{
  uint uVar1;
  System_Collections_Generic_List_object__o *__this;
  long lVar2;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  System_Xml_XmlNode_o *pSVar5;
  System_String_array *pSVar6;
  System_String_o *item;
  long *plVar7;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar8;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  ulong uVar9;
  undefined1 auVar10 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar11;
  Il2CppType *pIVar12;
  System_String_o *str1;
  undefined1 local_48 [16];
  System_String_o *local_38;
  
  if (g_data_057adc97 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Path);
    il2cpp_runtime_helper_023445d0(&TypeInfo_XmlDocumentUtils);
    il2cpp_runtime_helper_023445d0(&"UnityEngine*.xml");
    il2cpp_runtime_helper_023445d0(&"Temp/Bin/Debug");
    il2cpp_runtime_helper_023445d0(&"Temp/Bin/Debug/");
    g_data_057adc97 = '\x01';
  }
  pSVar11 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar12 = (Il2CppType *)0x0;
  str1 = (System_String_o *)0x0;
  if (*(int *)(TypeInfo_XmlDocumentUtils + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if ((System_Collections_Generic_List_object__o *)**(undefined8 **)(TypeInfo_XmlDocumentUtils + 0xb8) ==
      (System_Collections_Generic_List_object__o *)0x0) goto label_042834c0;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
             (System_Collections_Generic_List_object__o *)**(undefined8 **)(TypeInfo_XmlDocumentUtils + 0xb8),MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator)
  ;
  pSVar11 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
  pIVar12 = (Il2CppType *)local_48._8_8_;
  str1 = local_38;
  while (__this_00.fields._8_8_ = pIVar12,
        __this_00.fields._list = (System_Collections_Generic_List_T__o *)pSVar11,
        __this_00.fields._current = (Il2CppObject *)str1,
        bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98), (char)bVar3 != '\0') {
    pSVar4 = System_String__Concat_3ae5ba0("Temp/Bin/Debug/",str1,(MethodInfo *)0x0);
    pMVar8 = extraout_RDX;
    if (*(int *)(TypeInfo_XmlDocumentUtils + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pMVar8 = extraout_RDX_00;
    }
    pSVar5 = CustomLogic_Editor_XmlDocumentUtils__TryResolve(cref,pSVar4,pMVar8);
    if (pSVar5 != (System_Xml_XmlNode_o *)0x0) {
      __this_01.fields._8_8_ = pIVar12;
      __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar11;
      __this_01.fields._current = (Il2CppObject *)str1;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
      return pSVar5;
    }
  }
  __this_02.fields._8_8_ = pIVar12;
  __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar11;
  __this_02.fields._current = (Il2CppObject *)str1;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  do {
    pSVar6 = System_IO_Directory__GetFiles("Temp/Bin/Debug","UnityEngine*.xml",(MethodInfo *)0x0);
    if (pSVar6 == (System_String_array *)0x0) {
label_042834c0:
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      if ((int)pSVar6->max_length < 1) {
        return (System_Xml_XmlNode_o *)0x0;
      }
      uVar9 = 0;
      if ((pSVar6->max_length & 0xffffffff) != 0) {
        do {
          pSVar4 = pSVar6->m_Items[uVar9];
          if (*(int *)(TypeInfo_XmlDocumentUtils + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          __this = (System_Collections_Generic_List_object__o *)**(undefined8 **)(TypeInfo_XmlDocumentUtils + 0xb8);
          if (*(int *)(TypeInfo_Path + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          item = System_IO_Path__GetFileName(pSVar4,(MethodInfo *)0x0);
          if (__this == (System_Collections_Generic_List_object__o *)0x0) goto label_042834c0;
          bVar3 = System_Collections_Generic_List_object___Contains(__this,(Il2CppObject *)item,MethodInfo_Boolean_Contains);
          if ((char)bVar3 == '\0') {
            pMVar8 = extraout_RDX_01;
            if (*(int *)(TypeInfo_XmlDocumentUtils + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
              pMVar8 = extraout_RDX_02;
            }
            pSVar5 = CustomLogic_Editor_XmlDocumentUtils__TryResolve(cref,pSVar4,pMVar8);
            if (pSVar5 != (System_Xml_XmlNode_o *)0x0) {
              return pSVar5;
            }
          }
          uVar9 = uVar9 + 1;
          uVar1 = (uint)pSVar6->max_length;
          if ((long)(int)uVar1 <= (long)uVar9) {
            return (System_Xml_XmlNode_o *)0x0;
          }
        } while (uVar9 < uVar1);
      }
    }
    auVar10 = il2cpp_runtime_helper_022b2ca0();
    if (auVar10._8_4_ != 1) goto label_04283519;
    plVar7 = (long *)__cxa_begin_catch(auVar10._0_8_);
    lVar2 = *plVar7;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar12;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar11;
    __this_03.fields._current = (Il2CppObject *)str1;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  } while (lVar2 == 0);
  il2cpp_runtime_helper_022fefe0(lVar2);
label_04283519:
  __this_04.fields._8_8_ = pIVar12;
  __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar11;
  __this_04.fields._current = (Il2CppObject *)str1;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  _Unwind_Resume(auVar10._0_8_);
}


// CustomLogic.Editor.XmlDocumentUtils$$GetTypeNodeText
// il2cpp: System_String_o* CustomLogic_Editor_XmlDocumentUtils__GetTypeNodeText (System_Xml_XmlDocument_o* xmlDocument, System_Type_o* type, System_String_o* nodeType, System_String_o* defaultText, const MethodInfo* method);
// 0x4283550

System_String_o *
CustomLogic_Editor_XmlDocumentUtils__GetTypeNodeText
          (System_Xml_XmlDocument_o *xmlDocument,System_Type_o *type,System_String_o *nodeType,
          System_String_o *defaultText,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  System_Type_o *str1;
  System_Xml_XmlNode_o *node;
  undefined8 uVar3;
  MethodInfo *method_00;
  undefined8 *extraout_RDX;
  System_Xml_XmlDocument_o **__this;
  System_Xml_XmlNode_o *pSStack_48;
  System_Type_o *pSStack_40;
  System_String_o *pSStack_38;
  System_String_o *pSStack_30;
  System_String_o *local_28;
  
  str1 = type;
  __this = (System_Xml_XmlDocument_o **)xmlDocument;
  if (g_data_057adc98 == '\0') {
    pSStack_30 = (System_String_o *)0x4283579;
    il2cpp_runtime_helper_023445d0(&TypeInfo_XmlDocumentUtils);
    pSStack_30 = (System_String_o *)0x4283585;
    il2cpp_runtime_helper_023445d0(&"T:");
    pSStack_30 = (System_String_o *)0x4283591;
    il2cpp_runtime_helper_023445d0(&"\"]");
    __this = &"//member[@name=\"";
    pSStack_30 = (System_String_o *)0x428359d;
    il2cpp_runtime_helper_023445d0();
    g_data_057adc98 = '\x01';
  }
  local_28 = (System_String_o *)0x0;
  if (type != (System_Type_o *)0x0) {
    pSStack_30 = (System_String_o *)0x42835c8;
    pSVar2 = (System_String_o *)
             (*(type->klass->vtable)._26_unknown.methodPtr)(type,(type->klass->vtable)._26_unknown.method);
    pSStack_30 = (System_String_o *)0x42835dc;
    str1 = (System_Type_o *)System_String__Concat_3ae5ba0("T:",pSVar2,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)0x0;
    pSStack_30 = (System_String_o *)0x42835fa;
    __this = (System_Xml_XmlDocument_o **)"//member[@name=\"";
    pSVar2 = System_String__Concat_3af7150
                       ((System_String_o *)"//member[@name=\"",(System_String_o *)str1,"\"]",(MethodInfo *)0x0
                       );
    if (xmlDocument != (System_Xml_XmlDocument_o *)0x0) {
      pSStack_30 = (System_String_o *)0x428360c;
      node = System_Xml_XmlNode__SelectSingleNode
                       ((System_Xml_XmlNode_o *)xmlDocument,pSVar2,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_XmlDocumentUtils + 0xe4) == 0) {
        pSStack_30 = (System_String_o *)0x4283627;
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = (System_String_o *)0x4283635;
      bVar1 = CustomLogic_Editor_XmlDocumentUtils__TryGetInnerText(node,nodeType,&local_28,method_00);
      if ((char)bVar1 != '\0') {
        defaultText = local_28;
      }
      return defaultText;
    }
  }
  pSStack_30 = (System_String_o *)0x4283651;
  il2cpp_runtime_helper_022b2c90();
  pSStack_40 = type;
  pSStack_38 = nodeType;
  pSStack_30 = defaultText;
  if (g_data_057adca1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_XmlDocumentUtils);
    il2cpp_runtime_helper_023445d0(&".//");
    g_data_057adca1 = '\x01';
  }
  pSStack_48 = (System_Xml_XmlNode_o *)0x0;
  if ((System_Xml_XmlDocument_o *)__this != (System_Xml_XmlDocument_o *)0x0) {
    pSVar2 = System_String__Concat_3ae5ba0(".//",(System_String_o *)str1,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_XmlDocumentUtils + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_48 = System_Xml_XmlNode__SelectSingleNode((System_Xml_XmlNode_o *)__this,pSVar2,(MethodInfo *)0x0)
    ;
    il2cpp_runtime_helper_022b4080(&pSStack_48,pSStack_48);
    if (pSStack_48 != (System_Xml_XmlNode_o *)0x0) {
      uVar3 = (*(pSStack_48->klass->vtable)._41_get_InnerText.methodPtr)
                        (pSStack_48,(pSStack_48->klass->vtable)._41_get_InnerText.method);
      *extraout_RDX = uVar3;
      uVar3 = il2cpp_runtime_helper_022b4080(extraout_RDX,uVar3);
      return (System_String_o *)CONCAT71((int7)((ulong)uVar3 >> 8),1);
    }
  }
  *extraout_RDX = **(undefined8 **)(g_data_057b9c00 + 0xb8);
  il2cpp_runtime_helper_022b4080(extraout_RDX);
  return (System_String_o *)0x0;
}


// CustomLogic.Editor.XmlDocumentUtils$$GetConstructorNodeText
// il2cpp: System_String_o* CustomLogic_Editor_XmlDocumentUtils__GetConstructorNodeText (System_Xml_XmlDocument_o* xmlDocument, System_Type_o* type, System_Reflection_ConstructorInfo_o* ctorInfo, System_String_o* nodeType, System_String_o* defaultText, const MethodInfo* method);
// 0x4283760

System_String_o *
CustomLogic_Editor_XmlDocumentUtils__GetConstructorNodeText
          (System_Xml_XmlDocument_o *xmlDocument,System_Type_o *type,
          System_Reflection_ConstructorInfo_o *ctorInfo,System_String_o *nodeType,System_String_o *defaultText
          ,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  long lVar3;
  System_Xml_Schema_SchemaInfo_c *pSVar4;
  Il2CppClass *pIVar5;
  System_Object_array *pSVar6;
  code *pcVar7;
  Il2CppObject *pIVar8;
  bool_conflict bVar9;
  System_String_o *pSVar10;
  System_String_array *pSVar11;
  System_Xml_Schema_SchemaInfo_o *str1;
  System_String_o *pSVar12;
  System_Xml_XmlDocument_o *pSVar13;
  System_Xml_XmlDocument_o *pSVar14;
  System_Xml_XmlDocument_o *pSVar15;
  System_Collections_Generic_IEnumerable_KeyValuePair_string__string___o *pSVar16;
  System_Func_TSource__bool__o *pSVar17;
  System_String_array *pSVar18;
  System_String_array *values;
  System_String_array *pSVar19;
  System_String_o *pSVar20;
  System_Xml_XmlNode_o *pSVar21;
  System_String_array *pSVar22;
  undefined8 uVar23;
  System_Collections_Generic_List_object__o *__this;
  System_Xml_Schema_SchemaInfo_o **method_00;
  MethodInfo *pMVar24;
  MethodInfo *method_01;
  MethodInfo *method_02;
  long *extraout_RDX;
  System_Collections_Hashtable_o *pSVar25;
  System_Collections_Hashtable_o *pSVar26;
  System_Reflection_MethodInfo_o *methodInfo;
  System_Reflection_ConstructorInfo_o *ctorInfo_00;
  long *plVar27;
  long *extraout_RDX_00;
  System_Func_TSource__TResult__o *unaff_RBP;
  System_Xml_Schema_SchemaInfo_o *pSVar28;
  System_Type_o *type_00;
  System_Type_o *type_01;
  System_String_array *pSVar29;
  System_String_array *pSVar30;
  System_String_o **__this_00;
  System_String_array **ppSVar31;
  System_String_array **__this_01;
  long *unaff_R15;
  undefined1 auVar32 [16];
  System_Collections_Generic_KeyValuePair_object__object__o SVar33;
  System_String_o *pSStack_1d0;
  System_String_array *pSStack_1c8;
  System_String_array *pSStack_1c0;
  System_String_array *pSStack_1b8;
  MethodInfo *pMStack_1b0;
  System_String_o *pSStack_1a8;
  System_String_array *pSStack_1a0;
  System_String_o *pSStack_198;
  MethodInfo *pMStack_190;
  System_Xml_XmlDocument_o *pSStack_188;
  System_String_o *pSStack_180;
  System_Reflection_ConstructorInfo_o *pSStack_178;
  System_Type_o *pSStack_170;
  System_String_array *pSStack_168;
  undefined8 uStack_160;
  MethodInfo *pMStack_158;
  System_Xml_XmlDocument_o *pSStack_150;
  System_String_o *pSStack_148;
  System_Reflection_MethodInfo_o *pSStack_140;
  System_Type_o *pSStack_138;
  System_Xml_XmlDocument_o *pSStack_130;
  undefined8 uStack_128;
  System_Xml_XmlDocument_o *pSStack_120;
  System_Xml_XmlDocument_o *pSStack_118;
  System_Type_o *pSStack_110;
  System_Collections_Hashtable_o *pSStack_108;
  System_Xml_Schema_SchemaInfo_o *pSStack_100;
  System_Func_TSource__TResult__o *pSStack_f8;
  undefined8 uStack_f0;
  System_Xml_XmlDocument_o *pSStack_e8;
  System_Xml_XmlDocument_o *pSStack_e0;
  System_Collections_Hashtable_o *pSStack_d8;
  System_Xml_Schema_SchemaInfo_o *pSStack_d0;
  undefined8 uStack_c8;
  System_Xml_XmlDocument_o *pSStack_c0;
  long *plStack_b8;
  System_Xml_XmlDocument_o *pSStack_b0;
  System_String_o *pSStack_a8;
  System_Xml_Schema_SchemaInfo_o *pSStack_98;
  System_String_o *pSStack_90;
  System_String_o *pSStack_88;
  MethodInfo *pMStack_80;
  System_String_o *pSStack_78;
  System_Xml_XmlDocument_o *pSStack_70;
  System_Type_o *pSStack_68;
  System_Xml_XmlDocument_o *pSStack_60;
  long *plStack_58;
  System_Func_TSource__TResult__o *pSStack_50;
  System_Xml_XmlDocument_o *local_48;
  System_Xml_XmlDocument_o *local_40;
  System_String_o *local_38;
  
  method_00 = (System_Xml_Schema_SchemaInfo_o **)nodeType;
  str1 = (System_Xml_Schema_SchemaInfo_o *)type;
  __this_00 = (System_String_o **)xmlDocument;
  pSVar20 = defaultText;
  local_38 = nodeType;
  if (g_data_057adc99 == '\0') {
    pSStack_50 = (System_Func_TSource__TResult__o *)0x4283798;
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Select_ParameterInfo_String);
    pSStack_50 = (System_Func_TSource__TResult__o *)0x42837a4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray_String);
    pSStack_50 = (System_Func_TSource__TResult__o *)0x42837b0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_ParameterInfo_string);
    pSStack_50 = (System_Func_TSource__TResult__o *)0x42837bc;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetConstructorNodeText_b__7_0);
    pSStack_50 = (System_Func_TSource__TResult__o *)0x42837c8;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    pSStack_50 = (System_Func_TSource__TResult__o *)0x42837d4;
    il2cpp_runtime_helper_023445d0(&TypeInfo_XmlDocumentUtils);
    pSStack_50 = (System_Func_TSource__TResult__o *)0x42837e0;
    il2cpp_runtime_helper_023445d0(&".#ctor");
    pSStack_50 = (System_Func_TSource__TResult__o *)0x42837ec;
    il2cpp_runtime_helper_023445d0(&"(");
    pSStack_50 = (System_Func_TSource__TResult__o *)0x42837f8;
    il2cpp_runtime_helper_023445d0(&")");
    pSStack_50 = (System_Func_TSource__TResult__o *)0x4283804;
    il2cpp_runtime_helper_023445d0(&"//member[@name=\"M:");
    pSStack_50 = (System_Func_TSource__TResult__o *)0x4283810;
    il2cpp_runtime_helper_023445d0(&",");
    __this_00 = &"\"]";
    pSStack_50 = (System_Func_TSource__TResult__o *)0x428381c;
    il2cpp_runtime_helper_023445d0();
    g_data_057adc99 = '\x01';
    method_00 = (System_Xml_Schema_SchemaInfo_o **)nodeType;
  }
  local_48 = (System_Xml_XmlDocument_o *)0x0;
  pSVar10 = (System_String_o *)0x0;
  if (ctorInfo != (System_Reflection_ConstructorInfo_o *)0x0) {
    pSStack_50 = (System_Func_TSource__TResult__o *)0x4283847;
    pSVar10 = (System_String_o *)
              (*(ctorInfo->klass->vtable)._16_unknown.methodPtr)
                        (ctorInfo,(ctorInfo->klass->vtable)._16_unknown.method);
    unaff_R15 = &TypeInfo_c;
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      pSStack_50 = (System_Func_TSource__TResult__o *)0x42838e0;
      il2cpp_runtime_helper_02337ed0();
      unaff_RBP = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    else {
      unaff_RBP = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    if (unaff_RBP == (System_Func_TSource__TResult__o *)0x0) {
      local_40 = (System_Xml_XmlDocument_o *)defaultText;
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        pSStack_50 = (System_Func_TSource__TResult__o *)0x4283884;
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_50 = (System_Func_TSource__TResult__o *)0x42838a0;
      unaff_RBP = (System_Func_TSource__TResult__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_ParameterInfo_string);
      pSStack_50 = (System_Func_TSource__TResult__o *)0x42838ba;
      System_Func_object__object____ctor();
      lVar3 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_TSource__TResult__o **)(lVar3 + 8) = unaff_RBP;
      pSStack_50 = (System_Func_TSource__TResult__o *)0x42838d4;
      il2cpp_runtime_helper_022b4080(lVar3 + 8,unaff_RBP);
      defaultText = (System_String_o *)local_40;
    }
    pSStack_50 = (System_Func_TSource__TResult__o *)0x428390c;
    __this_00 = (System_String_o **)
                System_Linq_Enumerable__Select_object__object_
                          ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar10,unaff_RBP,MethodInfo_IEnumerable_1_System_String_Select_ParameterInfo_String
                          );
    method_00 = &MethodInfo_String_ToArray_String;
    pSStack_50 = (System_Func_TSource__TResult__o *)0x428391e;
    str1 = MethodInfo_String_ToArray_String;
    pSVar11 = (System_String_array *)
              System_Linq_Enumerable__ToArray_object_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)__this_00,
                         (MethodInfo_2522A10 *)MethodInfo_String_ToArray_String);
    if (pSVar11 != (System_String_array *)0x0) {
      if (pSVar11->max_length == 0) {
        pSVar10 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      }
      else {
        pSStack_50 = (System_Func_TSource__TResult__o *)0x4283942;
        str1 = (System_Xml_Schema_SchemaInfo_o *)System_String__Join(",",pSVar11,(MethodInfo *)0x0);
        method_00 = (System_Xml_Schema_SchemaInfo_o **)0x0;
        pSStack_50 = (System_Func_TSource__TResult__o *)0x4283960;
        __this_00 = (System_String_o **)"(";
        pSVar10 = System_String__Concat_3af7150
                            ((System_String_o *)"(",(System_String_o *)str1,")",
                             (MethodInfo *)0x0);
      }
      if (type != (System_Type_o *)0x0) {
        pSStack_50 = (System_Func_TSource__TResult__o *)0x42839a2;
        pSVar12 = (System_String_o *)
                  (*(type->klass->vtable)._26_unknown.methodPtr)
                            (type,(type->klass->vtable)._26_unknown.method);
        pSStack_50 = (System_Func_TSource__TResult__o *)0x42839b9;
        str1 = (System_Xml_Schema_SchemaInfo_o *)
               System_String__Concat_3af7150(pSVar12,".#ctor",pSVar10,(MethodInfo *)0x0);
        method_00 = (System_Xml_Schema_SchemaInfo_o **)0x0;
        pSStack_50 = (System_Func_TSource__TResult__o *)0x42839d7;
        __this_00 = (System_String_o **)_DAT_055be8a0;
        pSVar12 = System_String__Concat_3af7150
                            ((System_String_o *)_DAT_055be8a0,(System_String_o *)str1,"\"]",
                             (MethodInfo *)0x0);
        if (xmlDocument != (System_Xml_XmlDocument_o *)0x0) {
          pSStack_50 = (System_Func_TSource__TResult__o *)0x42839e9;
          pSVar21 = System_Xml_XmlNode__SelectSingleNode
                              ((System_Xml_XmlNode_o *)xmlDocument,pSVar12,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_XmlDocumentUtils + 0xe4) == 0) {
            pSStack_50 = (System_Func_TSource__TResult__o *)0x4283a04;
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_50 = (System_Func_TSource__TResult__o *)0x4283a14;
          bVar9 = CustomLogic_Editor_XmlDocumentUtils__TryGetInnerText
                            (pSVar21,local_38,(System_String_o **)&local_48,(MethodInfo *)method_00);
          if ((char)bVar9 != '\0') {
            defaultText = (System_String_o *)local_48;
          }
          return (System_String_o *)(System_Xml_XmlDocument_o *)defaultText;
        }
      }
    }
  }
  pSStack_50 = (System_Func_TSource__TResult__o *)0x4283a33;
  il2cpp_runtime_helper_022b2c90();
  ppSVar31 = (System_String_array **)__this_00;
  pSVar12 = pSVar20;
  pSStack_98 = str1;
  pMStack_80 = (MethodInfo *)method_00;
  pSStack_78 = pSVar10;
  pSStack_70 = xmlDocument;
  pSStack_68 = type;
  pSStack_60 = (System_Xml_XmlDocument_o *)defaultText;
  plStack_58 = unaff_R15;
  pSStack_50 = unaff_RBP;
  if (g_data_057adc9a == '\0') {
    pSStack_a8 = (System_String_o *)0x4283a7a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Select_ParameterInfo_String);
    pSStack_a8 = (System_String_o *)0x4283a86;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray_String);
    pSStack_a8 = (System_String_o *)0x4283a92;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_ParameterInfo_string);
    pSStack_a8 = (System_String_o *)0x4283a9e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetMethodNodeText_b__8_0);
    pSStack_a8 = (System_String_o *)0x4283aaa;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    pSStack_a8 = (System_String_o *)0x4283ab6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_XmlDocumentUtils);
    pSStack_a8 = (System_String_o *)0x4283ac2;
    il2cpp_runtime_helper_023445d0(&"(");
    pSStack_a8 = (System_String_o *)0x4283ace;
    il2cpp_runtime_helper_023445d0(&")");
    pSStack_a8 = (System_String_o *)0x4283ada;
    il2cpp_runtime_helper_023445d0(&"//member[@name=\"M:");
    pSStack_a8 = (System_String_o *)0x4283ae6;
    il2cpp_runtime_helper_023445d0(&",");
    pSStack_a8 = (System_String_o *)0x4283af2;
    il2cpp_runtime_helper_023445d0(&"\"]");
    ppSVar31 = &".";
    pSStack_a8 = (System_String_o *)0x4283afe;
    il2cpp_runtime_helper_023445d0();
    g_data_057adc9a = '\x01';
  }
  pSStack_90 = (System_String_o *)0x0;
  pSVar13 = (System_Xml_XmlDocument_o *)__this_00;
  if (extraout_RDX != (long *)0x0) {
    pSStack_a8 = (System_String_o *)0x4283b2b;
    unaff_RBP = (System_Func_TSource__TResult__o *)
                (**(code **)(*extraout_RDX + 0x238))(extraout_RDX,*(undefined8 *)(*extraout_RDX + 0x240));
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      pSStack_a8 = (System_String_o *)0x4283bcb;
      il2cpp_runtime_helper_02337ed0();
      defaultText = *(System_String_o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
    }
    else {
      defaultText = *(System_String_o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
    }
    if ((System_Xml_XmlDocument_o *)defaultText == (System_Xml_XmlDocument_o *)0x0) {
      pSStack_88 = pSVar20;
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        pSStack_a8 = (System_String_o *)0x4283b6d;
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_a8 = (System_String_o *)0x4283b8a;
      defaultText = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_ParameterInfo_string);
      pSStack_a8 = (System_String_o *)0x4283ba4;
      System_Func_object__object____ctor();
      lVar3 = *(long *)(TypeInfo_c + 0xb8);
      *(System_String_o **)(lVar3 + 0x10) = defaultText;
      pSStack_a8 = (System_String_o *)0x4283bbf;
      il2cpp_runtime_helper_022b4080(lVar3 + 0x10,defaultText);
      pSVar20 = pSStack_88;
    }
    pSStack_a8 = (System_String_o *)0x4283bf8;
    ppSVar31 = (System_String_array **)
               System_Linq_Enumerable__Select_object__object_
                         ((System_Collections_Generic_IEnumerable_TSource__o *)unaff_RBP,
                          (System_Func_TSource__TResult__o *)defaultText,MethodInfo_IEnumerable_1_System_String_Select_ParameterInfo_String);
    method_00 = &MethodInfo_String_ToArray_String;
    pSStack_a8 = (System_String_o *)0x4283c0a;
    str1 = MethodInfo_String_ToArray_String;
    pSVar11 = (System_String_array *)
              System_Linq_Enumerable__ToArray_object_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)ppSVar31,
                         (MethodInfo_2522A10 *)MethodInfo_String_ToArray_String);
    type = (System_Type_o *)&TypeInfo_c;
    if (pSVar11 != (System_String_array *)0x0) {
      defaultText = (System_String_o *)__this_00;
      if (pSVar11->max_length == 0) {
        unaff_RBP = (System_Func_TSource__TResult__o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
        ppSVar31 = (System_String_array **)0x0;
        if (pSStack_98 != (System_Xml_Schema_SchemaInfo_o *)0x0) goto label_04283c87;
      }
      else {
        pSStack_a8 = (System_String_o *)0x4283c31;
        str1 = (System_Xml_Schema_SchemaInfo_o *)System_String__Join(",",pSVar11,(MethodInfo *)0x0);
        method_00 = (System_Xml_Schema_SchemaInfo_o **)0x0;
        pSStack_a8 = (System_String_o *)0x4283c4f;
        unaff_RBP = (System_Func_TSource__TResult__o *)
                    System_String__Concat_3af7150
                              ((System_String_o *)"(",(System_String_o *)str1,")",
                               (MethodInfo *)0x0);
        if (pSStack_98 == (System_Xml_Schema_SchemaInfo_o *)0x0) {
          ppSVar31 = (System_String_array **)0x0;
        }
        else {
label_04283c87:
          pSVar4 = pSStack_98->klass;
          uVar23._0_4_ = pSVar4[1]._2.static_fields_size;
          uVar23._4_4_ = pSVar4[1]._2.thread_static_fields_size;
          pSStack_a8 = (System_String_o *)0x4283c97;
          pSVar13 = (System_Xml_XmlDocument_o *)(**(code **)&pSVar4[1]._2.element_size)(pSStack_98,uVar23);
          pSStack_a8 = (System_String_o *)0x4283cae;
          pSVar10 = (System_String_o *)
                    (**(code **)(*extraout_RDX + 0x1b8))(extraout_RDX,*(undefined8 *)(*extraout_RDX + 0x1c0));
          pSVar12 = (System_String_o *)0x0;
          pSStack_a8 = (System_String_o *)0x4283cc9;
          str1 = (System_Xml_Schema_SchemaInfo_o *)
                 System_String__Concat_3af7470
                           ((System_String_o *)pSVar13,(System_String_o *)".",pSVar10,
                            (System_String_o *)unaff_RBP,(MethodInfo *)0x0);
          method_00 = (System_Xml_Schema_SchemaInfo_o **)0x0;
          pSStack_a8 = (System_String_o *)0x4283ce7;
          ppSVar31 = (System_String_array **)_DAT_055be8a0;
          pSVar10 = System_String__Concat_3af7150
                              ((System_String_o *)_DAT_055be8a0,(System_String_o *)str1,"\"]",
                               (MethodInfo *)0x0);
          if ((System_Xml_XmlDocument_o *)__this_00 != (System_Xml_XmlDocument_o *)0x0) {
            pSStack_a8 = (System_String_o *)0x4283cf9;
            pSVar21 = System_Xml_XmlNode__SelectSingleNode
                                ((System_Xml_XmlNode_o *)__this_00,pSVar10,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_XmlDocumentUtils + 0xe4) == 0) {
              pSStack_a8 = (System_String_o *)0x4283d14;
              il2cpp_runtime_helper_02337ed0();
            }
            pSStack_a8 = (System_String_o *)0x4283d26;
            bVar9 = CustomLogic_Editor_XmlDocumentUtils__TryGetInnerText
                              (pSVar21,(System_String_o *)pMStack_80,&pSStack_90,(MethodInfo *)method_00);
            if ((char)bVar9 != '\0') {
              pSVar20 = pSStack_90;
            }
            return pSVar20;
          }
        }
      }
    }
  }
  pSStack_a8 = (System_String_o *)0x4283d46;
  auVar32 = il2cpp_runtime_helper_022b2c90();
  pSVar25 = auVar32._8_8_;
  uStack_c8 = auVar32._0_8_;
  pSStack_c0 = pSVar13;
  plStack_b8 = extraout_RDX;
  pSStack_b0 = (System_Xml_XmlDocument_o *)defaultText;
  pSStack_a8 = pSVar20;
  if (g_data_057adc9b == '\0') {
    pSStack_d0 = (System_Xml_Schema_SchemaInfo_o *)0x4283d76;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GetMethodParamTexts_d__9);
    g_data_057adc9b = '\x01';
  }
  pSStack_d0 = (System_Xml_Schema_SchemaInfo_o *)0x4283d8c;
  pSVar14 = (System_Xml_XmlDocument_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GetMethodParamTexts_d__9);
  pSVar28 = (System_Xml_Schema_SchemaInfo_o *)&g_data_fffffffe;
  pSStack_d0 = (System_Xml_Schema_SchemaInfo_o *)0x4283d9e;
  pSVar13 = pSVar14;
  CustomLogic_Editor_XmlDocumentUtils__GetMethodParamTexts_d__9___ctor
            ((CustomLogic_Editor_XmlDocumentUtils__GetMethodParamTexts_d__9_o *)pSVar14,-2,(MethodInfo *)0x0);
  if (pSVar14 != (System_Xml_XmlDocument_o *)0x0) {
    *(System_String_array ***)&(pSVar14->fields).reportValidity = ppSVar31;
    pSStack_d0 = (System_Xml_Schema_SchemaInfo_o *)0x4283db3;
    il2cpp_runtime_helper_022b4080(&(pSVar14->fields).reportValidity,ppSVar31);
    (pSVar14->fields).schemaInfo = str1;
    pSStack_d0 = (System_Xml_Schema_SchemaInfo_o *)0x4283dc3;
    il2cpp_runtime_helper_022b4080(&(pSVar14->fields).schemaInfo,str1);
    (pSVar14->fields).htElementIdMap = pSVar25;
    pSStack_d0 = (System_Xml_Schema_SchemaInfo_o *)0x4283dd6;
    il2cpp_runtime_helper_022b4080(&(pSVar14->fields).htElementIdMap,pSVar25);
    return (System_String_o *)pSVar14;
  }
  pSStack_d0 = (System_Xml_Schema_SchemaInfo_o *)0x4283dea;
  auVar32 = il2cpp_runtime_helper_022b2c90();
  pSVar26 = auVar32._8_8_;
  uStack_f0 = auVar32._0_8_;
  pSStack_e8 = pSVar14;
  pSStack_e0 = (System_Xml_XmlDocument_o *)ppSVar31;
  pSStack_d8 = pSVar25;
  pSStack_d0 = str1;
  if (g_data_057adc9c == '\0') {
    pSStack_f8 = (System_Func_TSource__TResult__o *)0x4283e16;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GetConstructorParamTexts_d__10);
    g_data_057adc9c = '\x01';
  }
  pSStack_f8 = (System_Func_TSource__TResult__o *)0x4283e2c;
  pSVar15 = (System_Xml_XmlDocument_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GetConstructorParamTexts_d__10);
  type_00 = (System_Type_o *)&g_data_fffffffe;
  pSStack_f8 = (System_Func_TSource__TResult__o *)0x4283e3e;
  pSVar14 = pSVar15;
  CustomLogic_Editor_XmlDocumentUtils__GetConstructorParamTexts_d__10___ctor
            ((CustomLogic_Editor_XmlDocumentUtils__GetConstructorParamTexts_d__10_o *)pSVar15,-2,
             (MethodInfo *)0x0);
  if (pSVar15 != (System_Xml_XmlDocument_o *)0x0) {
    *(System_Xml_XmlDocument_o **)&(pSVar15->fields).reportValidity = pSVar13;
    pSStack_f8 = (System_Func_TSource__TResult__o *)0x4283e53;
    il2cpp_runtime_helper_022b4080(&(pSVar15->fields).reportValidity,pSVar13);
    (pSVar15->fields).schemaInfo = pSVar28;
    pSStack_f8 = (System_Func_TSource__TResult__o *)0x4283e63;
    il2cpp_runtime_helper_022b4080(&(pSVar15->fields).schemaInfo,pSVar28);
    (pSVar15->fields).htElementIdMap = pSVar26;
    pSStack_f8 = (System_Func_TSource__TResult__o *)0x4283e76;
    il2cpp_runtime_helper_022b4080(&(pSVar15->fields).htElementIdMap,pSVar26);
    return (System_String_o *)pSVar15;
  }
  pSStack_f8 = (System_Func_TSource__TResult__o *)0x4283e8a;
  auVar32 = il2cpp_runtime_helper_022b2c90();
  methodInfo = auVar32._8_8_;
  uStack_128 = auVar32._0_8_;
  pMVar24 = (MethodInfo *)method_00;
  pSVar20 = pSVar12;
  pSStack_120 = pSVar15;
  pSStack_118 = pSVar13;
  pSStack_110 = type;
  pSStack_108 = pSVar26;
  pSStack_100 = pSVar28;
  pSStack_f8 = unaff_RBP;
  if (g_data_057adc9d == '\0') {
    pSStack_130 = (System_Xml_XmlDocument_o *)0x4283ebf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_String_System_String_FirstOrDefaul);
    pSStack_130 = (System_Xml_XmlDocument_o *)0x4283ecb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_KeyValuePair_string_string_bool);
    pSStack_130 = (System_Xml_XmlDocument_o *)0x4283ed7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    pSStack_130 = (System_Xml_XmlDocument_o *)0x4283ee3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_GetParameterNodeText_b__0);
    pSStack_130 = (System_Xml_XmlDocument_o *)0x4283eef;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass11_0);
    pSStack_130 = (System_Xml_XmlDocument_o *)0x4283efb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_XmlDocumentUtils);
    g_data_057adc9d = '\x01';
  }
  pSStack_130 = (System_Xml_XmlDocument_o *)0x4283f11;
  pSVar15 = (System_Xml_XmlDocument_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass11_0);
  type_01 = (System_Type_o *)0x0;
  pSStack_130 = (System_Xml_XmlDocument_o *)0x4283f1e;
  pSVar13 = pSVar15;
  CustomLogic_Editor_XmlDocumentUtils___c__DisplayClass11_0___ctor
            ((CustomLogic_Editor_XmlDocumentUtils___c__DisplayClass11_0_o *)pSVar15,(MethodInfo *)0x0);
  if (pSVar15 != (System_Xml_XmlDocument_o *)0x0) {
    (pSVar15->fields).parentNode = (System_Xml_XmlNode_o *)method_00;
    pSStack_130 = (System_Xml_XmlDocument_o *)0x4283f3a;
    il2cpp_runtime_helper_022b4080(&pSVar15->fields,method_00);
    if (*(int *)(TypeInfo_XmlDocumentUtils + 0xe4) == 0) {
      pSStack_130 = (System_Xml_XmlDocument_o *)0x4283f52;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_130 = (System_Xml_XmlDocument_o *)0x4283f60;
    pSVar16 = CustomLogic_Editor_XmlDocumentUtils__GetMethodParamTexts(pSVar14,type_00,methodInfo,pMVar24);
    pSStack_130 = (System_Xml_XmlDocument_o *)0x4283f72;
    pSVar17 = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_KeyValuePair_string_string_bool);
    pSStack_130 = (System_Xml_XmlDocument_o *)0x4283f8c;
    System_Func_KeyValuePair_object__object___bool____ctor();
    pSStack_130 = (System_Xml_XmlDocument_o *)0x4283fa1;
    SVar33 = System_Linq_Enumerable__FirstOrDefault_KeyValuePair_object__object__
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar16,pSVar17,MethodInfo_KeyValuePair_2_System_String_System_String_FirstOrDefaul);
    if ((System_String_o *)SVar33.fields.value != (System_String_o *)0x0) {
      pSVar12 = (System_String_o *)SVar33.fields.value;
    }
    return pSVar12;
  }
  pSStack_130 = (System_Xml_XmlDocument_o *)0x4283fbf;
  auVar32 = il2cpp_runtime_helper_022b2c90();
  ctorInfo_00 = auVar32._8_8_;
  uStack_160 = auVar32._0_8_;
  method_01 = pMVar24;
  pSVar10 = pSVar20;
  pMStack_158 = (MethodInfo *)method_00;
  pSStack_150 = pSVar14;
  pSStack_148 = pSVar12;
  pSStack_140 = methodInfo;
  pSStack_138 = type_00;
  pSStack_130 = pSVar15;
  if (g_data_057adc9e == '\0') {
    pSStack_168 = (System_String_array *)0x4283fef;
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_String_System_String_FirstOrDefaul);
    pSStack_168 = (System_String_array *)0x4283ffb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_KeyValuePair_string_string_bool);
    pSStack_168 = (System_String_array *)0x4284007;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    pSStack_168 = (System_String_array *)0x4284013;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_GetParameterNodeText_b__0);
    pSStack_168 = (System_String_array *)0x428401f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass12_0);
    pSStack_168 = (System_String_array *)0x428402b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_XmlDocumentUtils);
    g_data_057adc9e = '\x01';
  }
  pSStack_168 = (System_String_array *)0x4284041;
  pSVar18 = (System_String_array *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass12_0);
  pSVar22 = (System_String_array *)0x0;
  pSStack_168 = (System_String_array *)0x428404e;
  pSVar11 = pSVar18;
  CustomLogic_Editor_XmlDocumentUtils___c__DisplayClass12_0___ctor
            ((CustomLogic_Editor_XmlDocumentUtils___c__DisplayClass12_0_o *)pSVar18,(MethodInfo *)0x0);
  if (pSVar18 != (System_String_array *)0x0) {
    pSVar18->bounds = (Il2CppArrayBounds *)pMVar24;
    pSStack_168 = (System_String_array *)0x428406a;
    il2cpp_runtime_helper_022b4080(&pSVar18->bounds,pMVar24);
    if (*(int *)(TypeInfo_XmlDocumentUtils + 0xe4) == 0) {
      pSStack_168 = (System_String_array *)0x4284082;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_168 = (System_String_array *)0x4284090;
    pSVar16 = CustomLogic_Editor_XmlDocumentUtils__GetConstructorParamTexts
                        (pSVar13,type_01,ctorInfo_00,method_01);
    pSStack_168 = (System_String_array *)0x42840a2;
    pSVar17 = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_KeyValuePair_string_string_bool);
    pSStack_168 = (System_String_array *)0x42840bc;
    System_Func_KeyValuePair_object__object___bool____ctor();
    pSStack_168 = (System_String_array *)0x42840d1;
    SVar33 = System_Linq_Enumerable__FirstOrDefault_KeyValuePair_object__object__
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar16,pSVar17,MethodInfo_KeyValuePair_2_System_String_System_String_FirstOrDefaul);
    if ((System_String_o *)SVar33.fields.value != (System_String_o *)0x0) {
      pSVar20 = (System_String_o *)SVar33.fields.value;
    }
    return pSVar20;
  }
  pSStack_168 = (System_String_array *)0x42840ef;
  auVar32 = il2cpp_runtime_helper_022b2c90();
  pSStack_1c8 = auVar32._8_8_;
  pSStack_198 = auVar32._0_8_;
  method_02 = method_01;
  pSVar29 = pSVar22;
  ppSVar31 = (System_String_array **)pSVar11;
  pSVar12 = pSVar10;
  pMStack_190 = pMVar24;
  pSStack_188 = pSVar13;
  pSStack_180 = pSVar20;
  pSStack_178 = ctorInfo_00;
  pSStack_170 = type_01;
  pSStack_168 = pSVar18;
  if (g_data_057adc9f == '\0') {
    pSStack_1a0 = (System_String_array *)0x428411f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    pSStack_1a0 = (System_String_array *)0x428412b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_XmlDocumentUtils);
    pSStack_1a0 = (System_String_array *)0x4284137;
    il2cpp_runtime_helper_023445d0(&"//member[@name=\"P:");
    pSStack_1a0 = (System_String_array *)0x4284143;
    il2cpp_runtime_helper_023445d0(&"\"]");
    ppSVar31 = &".";
    pSStack_1a0 = (System_String_array *)0x428414f;
    il2cpp_runtime_helper_023445d0();
    g_data_057adc9f = '\x01';
  }
  pSStack_198 = (System_String_o *)0x0;
  pSVar18 = (System_String_array *)0x0;
  if (pSStack_1c8 != (System_String_array *)0x0) {
    pIVar5 = (pSStack_1c8->obj).klass;
    pSStack_1a0 = (System_String_array *)0x428417a;
    pSVar18 = (System_String_array *)(*pIVar5->vtable[8].methodPtr)(pSStack_1c8,pIVar5->vtable[8].method);
    pSVar29 = (System_String_array *)&g_data_00000005;
    pSStack_1a0 = (System_String_array *)0x4284191;
    ppSVar31 = (System_String_array **)TypeInfo_string;
    values = (System_String_array *)il2cpp_runtime_helper_022b2a40();
    pSVar19 = "//member[@name=\"P:";
    if (values != (System_String_array *)0x0) {
      pSStack_1c8 = values;
      if ((int)values->max_length != 0) {
        ppSVar31 = (System_String_array **)values->m_Items;
        values->m_Items[0] = (System_String_o *)"//member[@name=\"P:";
        pSStack_1a0 = (System_String_array *)0x42841be;
        il2cpp_runtime_helper_022b4080();
        pSVar29 = pSVar19;
        if (pSVar22 == (System_String_array *)0x0) goto label_042842b4;
        pIVar5 = (pSVar22->obj).klass;
        pSVar29 = (System_String_array *)pIVar5->vtable[0x1a].method;
        pSStack_1a0 = (System_String_array *)0x42841db;
        ppSVar31 = (System_String_array **)pSVar22;
        pSVar19 = (System_String_array *)(*pIVar5->vtable[0x1a].methodPtr)();
        if (1 < (uint)values->max_length) {
          ppSVar31 = (System_String_array **)(values->m_Items + 1);
          values->m_Items[1] = (System_String_o *)pSVar19;
          pSStack_1a0 = (System_String_array *)0x42841f5;
          il2cpp_runtime_helper_022b4080();
          pSVar30 = ".";
          pSVar29 = pSVar19;
          if (2 < (uint)values->max_length) {
            ppSVar31 = (System_String_array **)(values->m_Items + 2);
            values->m_Items[2] = (System_String_o *)".";
            pSStack_1a0 = (System_String_array *)0x4284216;
            il2cpp_runtime_helper_022b4080();
            pSVar29 = pSVar30;
            if (3 < (uint)values->max_length) {
              ppSVar31 = (System_String_array **)(values->m_Items + 3);
              values->m_Items[3] = (System_String_o *)pSVar18;
              pSStack_1a0 = (System_String_array *)0x4284230;
              pSVar29 = pSVar18;
              il2cpp_runtime_helper_022b4080();
              if (4 < (uint)values->max_length) {
                values->m_Items[4] = "\"]";
                pSStack_1a0 = (System_String_array *)0x4284250;
                il2cpp_runtime_helper_022b4080(values->m_Items + 4);
                pSVar29 = (System_String_array *)0x0;
                pSStack_1a0 = (System_String_array *)0x428425a;
                ppSVar31 = (System_String_array **)values;
                pSVar20 = System_String__Concat_3af7570(values,(MethodInfo *)0x0);
                if (pSVar11 != (System_String_array *)0x0) {
                  pSStack_1a0 = (System_String_array *)0x428426c;
                  pSVar21 = System_Xml_XmlNode__SelectSingleNode
                                      ((System_Xml_XmlNode_o *)pSVar11,pSVar20,(MethodInfo *)0x0);
                  if (*(int *)(TypeInfo_XmlDocumentUtils + 0xe4) == 0) {
                    pSStack_1a0 = (System_String_array *)0x4284287;
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pSStack_1a0 = (System_String_array *)0x4284295;
                  bVar9 = CustomLogic_Editor_XmlDocumentUtils__TryGetInnerText
                                    (pSVar21,(System_String_o *)method_01,&pSStack_198,method_02);
                  if ((char)bVar9 != '\0') {
                    pSVar10 = pSStack_198;
                  }
                  return pSVar10;
                }
                goto label_042842b4;
              }
            }
          }
        }
      }
      pSStack_1a0 = (System_String_array *)0x42842b4;
      il2cpp_runtime_helper_022b2ca0();
    }
  }
label_042842b4:
  pSStack_1a0 = (System_String_array *)0x42842b9;
  auVar32 = il2cpp_runtime_helper_022b2c90();
  plVar27 = auVar32._8_8_;
  pSStack_1d0 = auVar32._0_8_;
  pMVar24 = method_02;
  pSVar19 = pSVar29;
  __this_01 = ppSVar31;
  pSStack_1c0 = pSVar11;
  pSStack_1b8 = pSVar22;
  pMStack_1b0 = method_01;
  pSStack_1a8 = pSVar10;
  pSStack_1a0 = pSVar18;
  if (g_data_057adca0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_XmlDocumentUtils);
    il2cpp_runtime_helper_023445d0(&"//member[@name=\"P:");
    il2cpp_runtime_helper_023445d0(&"\"]");
    __this_01 = &".";
    il2cpp_runtime_helper_023445d0();
    g_data_057adca0 = '\x01';
  }
  pSStack_1d0 = (System_String_o *)0x0;
  if (plVar27 != (long *)0x0) {
    pSVar18 = (System_String_array *)
              (**(code **)(*plVar27 + 0x1b8))(plVar27,*(undefined8 *)(*plVar27 + 0x1c0));
    pSVar19 = (System_String_array *)&g_data_00000005;
    __this_01 = (System_String_array **)TypeInfo_string;
    pSVar22 = (System_String_array *)il2cpp_runtime_helper_022b2a40();
    pSVar11 = "//member[@name=\"P:";
    if (pSVar22 != (System_String_array *)0x0) {
      if ((int)pSVar22->max_length != 0) {
        __this_01 = (System_String_array **)pSVar22->m_Items;
        pSVar22->m_Items[0] = (System_String_o *)"//member[@name=\"P:";
        il2cpp_runtime_helper_022b4080();
        pSVar19 = pSVar11;
        if (pSVar29 == (System_String_array *)0x0) goto label_04284484;
        pIVar5 = (pSVar29->obj).klass;
        pSVar19 = (System_String_array *)pIVar5->vtable[0x1a].method;
        pSVar11 = (System_String_array *)(*pIVar5->vtable[0x1a].methodPtr)();
        __this_01 = (System_String_array **)pSVar29;
        if (1 < (uint)pSVar22->max_length) {
          __this_01 = (System_String_array **)(pSVar22->m_Items + 1);
          pSVar22->m_Items[1] = (System_String_o *)pSVar11;
          il2cpp_runtime_helper_022b4080();
          pSVar29 = ".";
          pSVar19 = pSVar11;
          if (2 < (uint)pSVar22->max_length) {
            __this_01 = (System_String_array **)(pSVar22->m_Items + 2);
            pSVar22->m_Items[2] = (System_String_o *)".";
            il2cpp_runtime_helper_022b4080();
            pSVar19 = pSVar29;
            if (3 < (uint)pSVar22->max_length) {
              __this_01 = (System_String_array **)(pSVar22->m_Items + 3);
              pSVar22->m_Items[3] = (System_String_o *)pSVar18;
              il2cpp_runtime_helper_022b4080();
              pSVar19 = pSVar18;
              if (4 < (uint)pSVar22->max_length) {
                pSVar22->m_Items[4] = "\"]";
                il2cpp_runtime_helper_022b4080(pSVar22->m_Items + 4);
                pSVar19 = (System_String_array *)0x0;
                pSVar20 = System_String__Concat_3af7570(pSVar22,(MethodInfo *)0x0);
                __this_01 = (System_String_array **)pSVar22;
                if ((System_String_array *)ppSVar31 != (System_String_array *)0x0) {
                  pSVar21 = System_Xml_XmlNode__SelectSingleNode
                                      ((System_Xml_XmlNode_o *)ppSVar31,pSVar20,(MethodInfo *)0x0);
                  if (*(int *)(TypeInfo_XmlDocumentUtils + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  bVar9 = CustomLogic_Editor_XmlDocumentUtils__TryGetInnerText
                                    (pSVar21,(System_String_o *)method_02,&pSStack_1d0,pMVar24);
                  if ((char)bVar9 != '\0') {
                    pSVar12 = pSStack_1d0;
                  }
                  return pSVar12;
                }
                goto label_04284484;
              }
            }
          }
        }
      }
      il2cpp_runtime_helper_022b2ca0();
    }
  }
label_04284484:
  il2cpp_runtime_helper_022b2c90();
  if ((System_String_array *)__this_01 != (System_String_array *)0x0) {
    pSVar21 = System_Xml_XmlNode__SelectSingleNode
                        ((System_Xml_XmlNode_o *)__this_01,(System_String_o *)pSVar19,(MethodInfo *)0x0);
    *extraout_RDX_00 = (long)pSVar21;
    uVar23 = il2cpp_runtime_helper_022b4080(extraout_RDX_00,pSVar21);
    return (System_String_o *)CONCAT71((int7)((ulong)uVar23 >> 8),*extraout_RDX_00 != 0);
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adca2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_XmlDocumentUtils);
    il2cpp_runtime_helper_023445d0(&"UnityEngine.xml");
    il2cpp_runtime_helper_023445d0(&"Scripts.xml");
    il2cpp_runtime_helper_023445d0(&"UnityEngine.PhysicsModule.xml");
    il2cpp_runtime_helper_023445d0(&"UnityEditor.CoreModule.xml");
    il2cpp_runtime_helper_023445d0(&"Photon3Unity3D.xml");
    g_data_057adca2 = '\x01';
  }
  __this = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor(__this,MethodInfo_List_1_System_String);
  pIVar8 = "Scripts.xml";
  lVar3 = MethodInfo_Void_Add;
  if (__this != (System_Collections_Generic_List_object__o *)0x0) {
    piVar1 = &(__this->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar6 = (__this->fields)._items;
    if (pSVar6 != (System_Object_array *)0x0) {
      uVar2 = (__this->fields)._size;
      if (uVar2 < (uint)pSVar6->max_length) {
        (__this->fields)._size = uVar2 + 1;
        pSVar6->m_Items[(int)uVar2] = pIVar8;
        il2cpp_runtime_helper_022b4080(pSVar6->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  (__this,pIVar8,*(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
      }
      pIVar8 = "UnityEngine.xml";
      lVar3 = MethodInfo_Void_Add;
      piVar1 = &(__this->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar6 = (__this->fields)._items;
      if (pSVar6 != (System_Object_array *)0x0) {
        uVar2 = (__this->fields)._size;
        if (uVar2 < (uint)pSVar6->max_length) {
          (__this->fields)._size = uVar2 + 1;
          pSVar6->m_Items[(int)uVar2] = pIVar8;
          il2cpp_runtime_helper_022b4080(pSVar6->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (__this,pIVar8,*(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70))
          ;
        }
        pIVar8 = "UnityEngine.PhysicsModule.xml";
        lVar3 = MethodInfo_Void_Add;
        piVar1 = &(__this->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar6 = (__this->fields)._items;
        if (pSVar6 != (System_Object_array *)0x0) {
          uVar2 = (__this->fields)._size;
          if (uVar2 < (uint)pSVar6->max_length) {
            (__this->fields)._size = uVar2 + 1;
            pSVar6->m_Items[(int)uVar2] = pIVar8;
            il2cpp_runtime_helper_022b4080(pSVar6->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this,pIVar8,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
          }
          pIVar8 = "UnityEditor.CoreModule.xml";
          lVar3 = MethodInfo_Void_Add;
          piVar1 = &(__this->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar6 = (__this->fields)._items;
          if (pSVar6 != (System_Object_array *)0x0) {
            uVar2 = (__this->fields)._size;
            if (uVar2 < (uint)pSVar6->max_length) {
              (__this->fields)._size = uVar2 + 1;
              pSVar6->m_Items[(int)uVar2] = pIVar8;
              il2cpp_runtime_helper_022b4080(pSVar6->m_Items + (int)uVar2);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        (__this,pIVar8,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
            }
            pIVar8 = "Photon3Unity3D.xml";
            lVar3 = MethodInfo_Void_Add;
            piVar1 = &(__this->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar6 = (__this->fields)._items;
            if (pSVar6 != (System_Object_array *)0x0) {
              uVar2 = (__this->fields)._size;
              if (uVar2 < (uint)pSVar6->max_length) {
                (__this->fields)._size = uVar2 + 1;
                pSVar6->m_Items[(int)uVar2] = pIVar8;
                il2cpp_runtime_helper_022b4080(pSVar6->m_Items + (int)uVar2);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          (__this,pIVar8,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
              }
              **(undefined8 **)(TypeInfo_XmlDocumentUtils + 0xb8) = __this;
              pSVar20 = (System_String_o *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_XmlDocumentUtils + 0xb8),__this);
              return pSVar20;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pcVar7 = (code *)swi(3);
  pSVar20 = (System_String_o *)(*pcVar7)();
  return pSVar20;
}


// CustomLogic.Editor.XmlDocumentUtils$$GetMethodNodeText
// il2cpp: System_String_o* CustomLogic_Editor_XmlDocumentUtils__GetMethodNodeText (System_Xml_XmlDocument_o* xmlDocument, System_Type_o* type, System_Reflection_MethodInfo_o* methodInfo, System_String_o* nodeType, System_String_o* defaultText, const MethodInfo* method);
// 0x4283a40

System_String_o *
CustomLogic_Editor_XmlDocumentUtils__GetMethodNodeText
          (System_Xml_XmlDocument_o *xmlDocument,System_Type_o *type,
          System_Reflection_MethodInfo_o *methodInfo,System_String_o *nodeType,System_String_o *defaultText,
          MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  long lVar3;
  Il2CppClass *pIVar4;
  System_Object_array *pSVar5;
  code *pcVar6;
  Il2CppObject *pIVar7;
  bool_conflict bVar8;
  System_String_array *pSVar9;
  System_Xml_XmlDocument_o *pSVar10;
  System_Xml_XmlDocument_o *pSVar11;
  System_Xml_XmlDocument_o *pSVar12;
  System_Collections_Generic_IEnumerable_KeyValuePair_string__string___o *pSVar13;
  System_Func_TSource__bool__o *pSVar14;
  System_String_array *pSVar15;
  System_String_array *values;
  System_String_array *pSVar16;
  System_String_o *pSVar17;
  System_Xml_XmlNode_o *pSVar18;
  System_String_array *pSVar19;
  undefined8 uVar20;
  System_Collections_Generic_List_object__o *__this;
  System_String_o *pSVar21;
  System_Xml_Schema_SchemaInfo_o **method_00;
  MethodInfo *pMVar22;
  MethodInfo *method_01;
  MethodInfo *method_02;
  System_Collections_Hashtable_o *pSVar23;
  System_Collections_Hashtable_o *pSVar24;
  System_Reflection_MethodInfo_o *methodInfo_00;
  System_Reflection_ConstructorInfo_o *ctorInfo;
  long *plVar25;
  long *extraout_RDX;
  System_String_o *unaff_RBP;
  System_Xml_Schema_SchemaInfo_o *pSVar26;
  System_Type_o *type_00;
  System_Type_o *type_01;
  System_String_array *pSVar27;
  System_String_array *pSVar28;
  System_String_array **ppSVar29;
  System_String_array **__this_00;
  System_String_o *pSVar30;
  long *unaff_R13;
  System_Xml_XmlDocument_o *unaff_R14;
  undefined1 auVar31 [16];
  System_Collections_Generic_KeyValuePair_object__object__o SVar32;
  System_String_o *pSStack_188;
  System_String_array *pSStack_180;
  System_String_array *pSStack_178;
  System_String_array *pSStack_170;
  MethodInfo *pMStack_168;
  System_String_o *pSStack_160;
  System_String_array *pSStack_158;
  System_String_o *pSStack_150;
  MethodInfo *pMStack_148;
  System_Xml_XmlDocument_o *pSStack_140;
  System_String_o *pSStack_138;
  System_Reflection_ConstructorInfo_o *pSStack_130;
  System_Type_o *pSStack_128;
  System_String_array *pSStack_120;
  undefined8 uStack_118;
  MethodInfo *pMStack_110;
  System_Xml_XmlDocument_o *pSStack_108;
  System_String_o *pSStack_100;
  System_Reflection_MethodInfo_o *pSStack_f8;
  System_Type_o *pSStack_f0;
  System_Xml_XmlDocument_o *pSStack_e8;
  undefined8 uStack_e0;
  System_Xml_XmlDocument_o *pSStack_d8;
  System_Xml_XmlDocument_o *pSStack_d0;
  long *plStack_c8;
  System_Collections_Hashtable_o *pSStack_c0;
  System_Xml_Schema_SchemaInfo_o *pSStack_b8;
  System_String_o *pSStack_b0;
  undefined8 uStack_a8;
  System_Xml_XmlDocument_o *pSStack_a0;
  System_Xml_XmlDocument_o *pSStack_98;
  System_Collections_Hashtable_o *pSStack_90;
  System_Xml_Schema_SchemaInfo_o *pSStack_88;
  undefined8 uStack_80;
  System_Xml_XmlDocument_o *pSStack_78;
  System_Reflection_MethodInfo_o *pSStack_70;
  System_Xml_XmlDocument_o *pSStack_68;
  System_String_o *pSStack_60;
  System_Type_o *local_50;
  System_String_o *local_48;
  System_String_o *local_40;
  System_String_o *local_38;
  
  method_00 = (System_Xml_Schema_SchemaInfo_o **)nodeType;
  ppSVar29 = (System_String_array **)xmlDocument;
  pSVar21 = defaultText;
  local_50 = type;
  local_38 = nodeType;
  if (g_data_057adc9a == '\0') {
    pSStack_60 = (System_String_o *)0x4283a7a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Select_ParameterInfo_String);
    pSStack_60 = (System_String_o *)0x4283a86;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray_String);
    pSStack_60 = (System_String_o *)0x4283a92;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_ParameterInfo_string);
    pSStack_60 = (System_String_o *)0x4283a9e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetMethodNodeText_b__8_0);
    pSStack_60 = (System_String_o *)0x4283aaa;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    pSStack_60 = (System_String_o *)0x4283ab6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_XmlDocumentUtils);
    pSStack_60 = (System_String_o *)0x4283ac2;
    il2cpp_runtime_helper_023445d0(&"(");
    pSStack_60 = (System_String_o *)0x4283ace;
    il2cpp_runtime_helper_023445d0(&")");
    pSStack_60 = (System_String_o *)0x4283ada;
    il2cpp_runtime_helper_023445d0(&"//member[@name=\"M:");
    pSStack_60 = (System_String_o *)0x4283ae6;
    il2cpp_runtime_helper_023445d0(&",");
    pSStack_60 = (System_String_o *)0x4283af2;
    il2cpp_runtime_helper_023445d0(&"\"]");
    ppSVar29 = &".";
    pSStack_60 = (System_String_o *)0x4283afe;
    il2cpp_runtime_helper_023445d0();
    g_data_057adc9a = '\x01';
    method_00 = (System_Xml_Schema_SchemaInfo_o **)nodeType;
  }
  local_48 = (System_String_o *)0x0;
  pSVar10 = xmlDocument;
  if (methodInfo != (System_Reflection_MethodInfo_o *)0x0) {
    pSStack_60 = (System_String_o *)0x4283b2b;
    unaff_RBP = (System_String_o *)
                (*(methodInfo->klass->vtable)._16_unknown.methodPtr)
                          (methodInfo,(methodInfo->klass->vtable)._16_unknown.method);
    unaff_R13 = &TypeInfo_c;
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      pSStack_60 = (System_String_o *)0x4283bcb;
      il2cpp_runtime_helper_02337ed0();
      unaff_R14 = *(System_Xml_XmlDocument_o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
    }
    else {
      unaff_R14 = *(System_Xml_XmlDocument_o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
    }
    if (unaff_R14 == (System_Xml_XmlDocument_o *)0x0) {
      local_40 = defaultText;
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        pSStack_60 = (System_String_o *)0x4283b6d;
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_60 = (System_String_o *)0x4283b8a;
      unaff_R14 = (System_Xml_XmlDocument_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_ParameterInfo_string);
      pSStack_60 = (System_String_o *)0x4283ba4;
      System_Func_object__object____ctor();
      lVar3 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Xml_XmlDocument_o **)(lVar3 + 0x10) = unaff_R14;
      pSStack_60 = (System_String_o *)0x4283bbf;
      il2cpp_runtime_helper_022b4080(lVar3 + 0x10,unaff_R14);
      defaultText = local_40;
    }
    pSStack_60 = (System_String_o *)0x4283bf8;
    ppSVar29 = (System_String_array **)
               System_Linq_Enumerable__Select_object__object_
                         ((System_Collections_Generic_IEnumerable_TSource__o *)unaff_RBP,
                          (System_Func_TSource__TResult__o *)unaff_R14,MethodInfo_IEnumerable_1_System_String_Select_ParameterInfo_String);
    method_00 = &MethodInfo_String_ToArray_String;
    pSStack_60 = (System_String_o *)0x4283c0a;
    type = (System_Type_o *)MethodInfo_String_ToArray_String;
    pSVar9 = (System_String_array *)
             System_Linq_Enumerable__ToArray_object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)ppSVar29,
                        (MethodInfo_2522A10 *)MethodInfo_String_ToArray_String);
    if (pSVar9 != (System_String_array *)0x0) {
      unaff_R14 = xmlDocument;
      if (pSVar9->max_length == 0) {
        unaff_RBP = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
        ppSVar29 = (System_String_array **)0x0;
        if (local_50 != (System_Type_o *)0x0) goto label_04283c87;
      }
      else {
        pSStack_60 = (System_String_o *)0x4283c31;
        type = (System_Type_o *)System_String__Join(",",pSVar9,(MethodInfo *)0x0);
        method_00 = (System_Xml_Schema_SchemaInfo_o **)0x0;
        pSStack_60 = (System_String_o *)0x4283c4f;
        unaff_RBP = System_String__Concat_3af7150
                              ("(",(System_String_o *)type,")",(MethodInfo *)0x0);
        if (local_50 == (System_Type_o *)0x0) {
          ppSVar29 = (System_String_array **)0x0;
        }
        else {
label_04283c87:
          pSStack_60 = (System_String_o *)0x4283c97;
          pSVar10 = (System_Xml_XmlDocument_o *)
                    (*(local_50->klass->vtable)._26_unknown.methodPtr)
                              (local_50,(local_50->klass->vtable)._26_unknown.method);
          pSStack_60 = (System_String_o *)0x4283cae;
          pSVar17 = (System_String_o *)
                    (*(methodInfo->klass->vtable)._8_unknown.methodPtr)
                              (methodInfo,(methodInfo->klass->vtable)._8_unknown.method);
          pSVar21 = (System_String_o *)0x0;
          pSStack_60 = (System_String_o *)0x4283cc9;
          type = (System_Type_o *)
                 System_String__Concat_3af7470
                           ((System_String_o *)pSVar10,(System_String_o *)".",pSVar17,unaff_RBP,
                            (MethodInfo *)0x0);
          method_00 = (System_Xml_Schema_SchemaInfo_o **)0x0;
          pSStack_60 = (System_String_o *)0x4283ce7;
          ppSVar29 = (System_String_array **)_DAT_055be8a0;
          pSVar17 = System_String__Concat_3af7150
                              ((System_String_o *)_DAT_055be8a0,(System_String_o *)type,"\"]",
                               (MethodInfo *)0x0);
          if (xmlDocument != (System_Xml_XmlDocument_o *)0x0) {
            pSStack_60 = (System_String_o *)0x4283cf9;
            pSVar18 = System_Xml_XmlNode__SelectSingleNode
                                ((System_Xml_XmlNode_o *)xmlDocument,pSVar17,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_XmlDocumentUtils + 0xe4) == 0) {
              pSStack_60 = (System_String_o *)0x4283d14;
              il2cpp_runtime_helper_02337ed0();
            }
            pSStack_60 = (System_String_o *)0x4283d26;
            bVar8 = CustomLogic_Editor_XmlDocumentUtils__TryGetInnerText
                              (pSVar18,local_38,&local_48,(MethodInfo *)method_00);
            if ((char)bVar8 != '\0') {
              defaultText = local_48;
            }
            return defaultText;
          }
        }
      }
    }
  }
  pSStack_60 = (System_String_o *)0x4283d46;
  auVar31 = il2cpp_runtime_helper_022b2c90();
  pSVar23 = auVar31._8_8_;
  uStack_80 = auVar31._0_8_;
  pSStack_78 = pSVar10;
  pSStack_70 = methodInfo;
  pSStack_68 = unaff_R14;
  pSStack_60 = defaultText;
  if (g_data_057adc9b == '\0') {
    pSStack_88 = (System_Xml_Schema_SchemaInfo_o *)0x4283d76;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GetMethodParamTexts_d__9);
    g_data_057adc9b = '\x01';
  }
  pSStack_88 = (System_Xml_Schema_SchemaInfo_o *)0x4283d8c;
  pSVar11 = (System_Xml_XmlDocument_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GetMethodParamTexts_d__9);
  pSVar26 = (System_Xml_Schema_SchemaInfo_o *)&g_data_fffffffe;
  pSStack_88 = (System_Xml_Schema_SchemaInfo_o *)0x4283d9e;
  pSVar10 = pSVar11;
  CustomLogic_Editor_XmlDocumentUtils__GetMethodParamTexts_d__9___ctor
            ((CustomLogic_Editor_XmlDocumentUtils__GetMethodParamTexts_d__9_o *)pSVar11,-2,(MethodInfo *)0x0);
  if (pSVar11 != (System_Xml_XmlDocument_o *)0x0) {
    *(System_String_array ***)&(pSVar11->fields).reportValidity = ppSVar29;
    pSStack_88 = (System_Xml_Schema_SchemaInfo_o *)0x4283db3;
    il2cpp_runtime_helper_022b4080(&(pSVar11->fields).reportValidity,ppSVar29);
    (pSVar11->fields).schemaInfo = (System_Xml_Schema_SchemaInfo_o *)type;
    pSStack_88 = (System_Xml_Schema_SchemaInfo_o *)0x4283dc3;
    il2cpp_runtime_helper_022b4080(&(pSVar11->fields).schemaInfo,type);
    (pSVar11->fields).htElementIdMap = pSVar23;
    pSStack_88 = (System_Xml_Schema_SchemaInfo_o *)0x4283dd6;
    il2cpp_runtime_helper_022b4080(&(pSVar11->fields).htElementIdMap,pSVar23);
    return (System_String_o *)pSVar11;
  }
  pSStack_88 = (System_Xml_Schema_SchemaInfo_o *)0x4283dea;
  auVar31 = il2cpp_runtime_helper_022b2c90();
  pSVar24 = auVar31._8_8_;
  uStack_a8 = auVar31._0_8_;
  pSStack_a0 = pSVar11;
  pSStack_98 = (System_Xml_XmlDocument_o *)ppSVar29;
  pSStack_90 = pSVar23;
  pSStack_88 = (System_Xml_Schema_SchemaInfo_o *)type;
  if (g_data_057adc9c == '\0') {
    pSStack_b0 = (System_String_o *)0x4283e16;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GetConstructorParamTexts_d__10);
    g_data_057adc9c = '\x01';
  }
  pSStack_b0 = (System_String_o *)0x4283e2c;
  pSVar12 = (System_Xml_XmlDocument_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GetConstructorParamTexts_d__10);
  type_00 = (System_Type_o *)&g_data_fffffffe;
  pSStack_b0 = (System_String_o *)0x4283e3e;
  pSVar11 = pSVar12;
  CustomLogic_Editor_XmlDocumentUtils__GetConstructorParamTexts_d__10___ctor
            ((CustomLogic_Editor_XmlDocumentUtils__GetConstructorParamTexts_d__10_o *)pSVar12,-2,
             (MethodInfo *)0x0);
  if (pSVar12 != (System_Xml_XmlDocument_o *)0x0) {
    *(System_Xml_XmlDocument_o **)&(pSVar12->fields).reportValidity = pSVar10;
    pSStack_b0 = (System_String_o *)0x4283e53;
    il2cpp_runtime_helper_022b4080(&(pSVar12->fields).reportValidity,pSVar10);
    (pSVar12->fields).schemaInfo = pSVar26;
    pSStack_b0 = (System_String_o *)0x4283e63;
    il2cpp_runtime_helper_022b4080(&(pSVar12->fields).schemaInfo,pSVar26);
    (pSVar12->fields).htElementIdMap = pSVar24;
    pSStack_b0 = (System_String_o *)0x4283e76;
    il2cpp_runtime_helper_022b4080(&(pSVar12->fields).htElementIdMap,pSVar24);
    return (System_String_o *)pSVar12;
  }
  pSStack_b0 = (System_String_o *)0x4283e8a;
  auVar31 = il2cpp_runtime_helper_022b2c90();
  methodInfo_00 = auVar31._8_8_;
  uStack_e0 = auVar31._0_8_;
  pMVar22 = (MethodInfo *)method_00;
  pSVar17 = pSVar21;
  pSStack_d8 = pSVar12;
  pSStack_d0 = pSVar10;
  plStack_c8 = unaff_R13;
  pSStack_c0 = pSVar24;
  pSStack_b8 = pSVar26;
  pSStack_b0 = unaff_RBP;
  if (g_data_057adc9d == '\0') {
    pSStack_e8 = (System_Xml_XmlDocument_o *)0x4283ebf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_String_System_String_FirstOrDefaul);
    pSStack_e8 = (System_Xml_XmlDocument_o *)0x4283ecb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_KeyValuePair_string_string_bool);
    pSStack_e8 = (System_Xml_XmlDocument_o *)0x4283ed7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    pSStack_e8 = (System_Xml_XmlDocument_o *)0x4283ee3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_GetParameterNodeText_b__0);
    pSStack_e8 = (System_Xml_XmlDocument_o *)0x4283eef;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass11_0);
    pSStack_e8 = (System_Xml_XmlDocument_o *)0x4283efb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_XmlDocumentUtils);
    g_data_057adc9d = '\x01';
  }
  pSStack_e8 = (System_Xml_XmlDocument_o *)0x4283f11;
  pSVar12 = (System_Xml_XmlDocument_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass11_0);
  type_01 = (System_Type_o *)0x0;
  pSStack_e8 = (System_Xml_XmlDocument_o *)0x4283f1e;
  pSVar10 = pSVar12;
  CustomLogic_Editor_XmlDocumentUtils___c__DisplayClass11_0___ctor
            ((CustomLogic_Editor_XmlDocumentUtils___c__DisplayClass11_0_o *)pSVar12,(MethodInfo *)0x0);
  if (pSVar12 != (System_Xml_XmlDocument_o *)0x0) {
    (pSVar12->fields).parentNode = (System_Xml_XmlNode_o *)method_00;
    pSStack_e8 = (System_Xml_XmlDocument_o *)0x4283f3a;
    il2cpp_runtime_helper_022b4080(&pSVar12->fields,method_00);
    if (*(int *)(TypeInfo_XmlDocumentUtils + 0xe4) == 0) {
      pSStack_e8 = (System_Xml_XmlDocument_o *)0x4283f52;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_e8 = (System_Xml_XmlDocument_o *)0x4283f60;
    pSVar13 = CustomLogic_Editor_XmlDocumentUtils__GetMethodParamTexts(pSVar11,type_00,methodInfo_00,pMVar22);
    pSStack_e8 = (System_Xml_XmlDocument_o *)0x4283f72;
    pSVar14 = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_KeyValuePair_string_string_bool);
    pSStack_e8 = (System_Xml_XmlDocument_o *)0x4283f8c;
    System_Func_KeyValuePair_object__object___bool____ctor();
    pSStack_e8 = (System_Xml_XmlDocument_o *)0x4283fa1;
    SVar32 = System_Linq_Enumerable__FirstOrDefault_KeyValuePair_object__object__
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar13,pSVar14,MethodInfo_KeyValuePair_2_System_String_System_String_FirstOrDefaul);
    if ((System_String_o *)SVar32.fields.value != (System_String_o *)0x0) {
      pSVar21 = (System_String_o *)SVar32.fields.value;
    }
    return pSVar21;
  }
  pSStack_e8 = (System_Xml_XmlDocument_o *)0x4283fbf;
  auVar31 = il2cpp_runtime_helper_022b2c90();
  ctorInfo = auVar31._8_8_;
  uStack_118 = auVar31._0_8_;
  method_01 = pMVar22;
  pSVar30 = pSVar17;
  pMStack_110 = (MethodInfo *)method_00;
  pSStack_108 = pSVar11;
  pSStack_100 = pSVar21;
  pSStack_f8 = methodInfo_00;
  pSStack_f0 = type_00;
  pSStack_e8 = pSVar12;
  if (g_data_057adc9e == '\0') {
    pSStack_120 = (System_String_array *)0x4283fef;
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_String_System_String_FirstOrDefaul);
    pSStack_120 = (System_String_array *)0x4283ffb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_KeyValuePair_string_string_bool);
    pSStack_120 = (System_String_array *)0x4284007;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    pSStack_120 = (System_String_array *)0x4284013;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_GetParameterNodeText_b__0);
    pSStack_120 = (System_String_array *)0x428401f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass12_0);
    pSStack_120 = (System_String_array *)0x428402b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_XmlDocumentUtils);
    g_data_057adc9e = '\x01';
  }
  pSStack_120 = (System_String_array *)0x4284041;
  pSVar15 = (System_String_array *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass12_0);
  pSVar19 = (System_String_array *)0x0;
  pSStack_120 = (System_String_array *)0x428404e;
  pSVar9 = pSVar15;
  CustomLogic_Editor_XmlDocumentUtils___c__DisplayClass12_0___ctor
            ((CustomLogic_Editor_XmlDocumentUtils___c__DisplayClass12_0_o *)pSVar15,(MethodInfo *)0x0);
  if (pSVar15 != (System_String_array *)0x0) {
    pSVar15->bounds = (Il2CppArrayBounds *)pMVar22;
    pSStack_120 = (System_String_array *)0x428406a;
    il2cpp_runtime_helper_022b4080(&pSVar15->bounds,pMVar22);
    if (*(int *)(TypeInfo_XmlDocumentUtils + 0xe4) == 0) {
      pSStack_120 = (System_String_array *)0x4284082;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_120 = (System_String_array *)0x4284090;
    pSVar13 = CustomLogic_Editor_XmlDocumentUtils__GetConstructorParamTexts
                        (pSVar10,type_01,ctorInfo,method_01);
    pSStack_120 = (System_String_array *)0x42840a2;
    pSVar14 = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_KeyValuePair_string_string_bool);
    pSStack_120 = (System_String_array *)0x42840bc;
    System_Func_KeyValuePair_object__object___bool____ctor();
    pSStack_120 = (System_String_array *)0x42840d1;
    SVar32 = System_Linq_Enumerable__FirstOrDefault_KeyValuePair_object__object__
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar13,pSVar14,MethodInfo_KeyValuePair_2_System_String_System_String_FirstOrDefaul);
    if ((System_String_o *)SVar32.fields.value != (System_String_o *)0x0) {
      pSVar17 = (System_String_o *)SVar32.fields.value;
    }
    return pSVar17;
  }
  pSStack_120 = (System_String_array *)0x42840ef;
  auVar31 = il2cpp_runtime_helper_022b2c90();
  pSStack_180 = auVar31._8_8_;
  pSStack_150 = auVar31._0_8_;
  method_02 = method_01;
  pSVar27 = pSVar19;
  ppSVar29 = (System_String_array **)pSVar9;
  pSVar21 = pSVar30;
  pMStack_148 = pMVar22;
  pSStack_140 = pSVar10;
  pSStack_138 = pSVar17;
  pSStack_130 = ctorInfo;
  pSStack_128 = type_01;
  pSStack_120 = pSVar15;
  if (g_data_057adc9f == '\0') {
    pSStack_158 = (System_String_array *)0x428411f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    pSStack_158 = (System_String_array *)0x428412b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_XmlDocumentUtils);
    pSStack_158 = (System_String_array *)0x4284137;
    il2cpp_runtime_helper_023445d0(&"//member[@name=\"P:");
    pSStack_158 = (System_String_array *)0x4284143;
    il2cpp_runtime_helper_023445d0(&"\"]");
    ppSVar29 = &".";
    pSStack_158 = (System_String_array *)0x428414f;
    il2cpp_runtime_helper_023445d0();
    g_data_057adc9f = '\x01';
  }
  pSStack_150 = (System_String_o *)0x0;
  pSVar15 = (System_String_array *)0x0;
  if (pSStack_180 != (System_String_array *)0x0) {
    pIVar4 = (pSStack_180->obj).klass;
    pSStack_158 = (System_String_array *)0x428417a;
    pSVar15 = (System_String_array *)(*pIVar4->vtable[8].methodPtr)(pSStack_180,pIVar4->vtable[8].method);
    pSVar27 = (System_String_array *)&g_data_00000005;
    pSStack_158 = (System_String_array *)0x4284191;
    ppSVar29 = (System_String_array **)TypeInfo_string;
    values = (System_String_array *)il2cpp_runtime_helper_022b2a40();
    pSVar16 = "//member[@name=\"P:";
    if (values != (System_String_array *)0x0) {
      pSStack_180 = values;
      if ((int)values->max_length != 0) {
        ppSVar29 = (System_String_array **)values->m_Items;
        values->m_Items[0] = (System_String_o *)"//member[@name=\"P:";
        pSStack_158 = (System_String_array *)0x42841be;
        il2cpp_runtime_helper_022b4080();
        pSVar27 = pSVar16;
        if (pSVar19 == (System_String_array *)0x0) goto label_042842b4;
        pIVar4 = (pSVar19->obj).klass;
        pSVar27 = (System_String_array *)pIVar4->vtable[0x1a].method;
        pSStack_158 = (System_String_array *)0x42841db;
        ppSVar29 = (System_String_array **)pSVar19;
        pSVar16 = (System_String_array *)(*pIVar4->vtable[0x1a].methodPtr)();
        if (1 < (uint)values->max_length) {
          ppSVar29 = (System_String_array **)(values->m_Items + 1);
          values->m_Items[1] = (System_String_o *)pSVar16;
          pSStack_158 = (System_String_array *)0x42841f5;
          il2cpp_runtime_helper_022b4080();
          pSVar28 = ".";
          pSVar27 = pSVar16;
          if (2 < (uint)values->max_length) {
            ppSVar29 = (System_String_array **)(values->m_Items + 2);
            values->m_Items[2] = (System_String_o *)".";
            pSStack_158 = (System_String_array *)0x4284216;
            il2cpp_runtime_helper_022b4080();
            pSVar27 = pSVar28;
            if (3 < (uint)values->max_length) {
              ppSVar29 = (System_String_array **)(values->m_Items + 3);
              values->m_Items[3] = (System_String_o *)pSVar15;
              pSStack_158 = (System_String_array *)0x4284230;
              pSVar27 = pSVar15;
              il2cpp_runtime_helper_022b4080();
              if (4 < (uint)values->max_length) {
                values->m_Items[4] = "\"]";
                pSStack_158 = (System_String_array *)0x4284250;
                il2cpp_runtime_helper_022b4080(values->m_Items + 4);
                pSVar27 = (System_String_array *)0x0;
                pSStack_158 = (System_String_array *)0x428425a;
                ppSVar29 = (System_String_array **)values;
                pSVar17 = System_String__Concat_3af7570(values,(MethodInfo *)0x0);
                if (pSVar9 != (System_String_array *)0x0) {
                  pSStack_158 = (System_String_array *)0x428426c;
                  pSVar18 = System_Xml_XmlNode__SelectSingleNode
                                      ((System_Xml_XmlNode_o *)pSVar9,pSVar17,(MethodInfo *)0x0);
                  if (*(int *)(TypeInfo_XmlDocumentUtils + 0xe4) == 0) {
                    pSStack_158 = (System_String_array *)0x4284287;
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pSStack_158 = (System_String_array *)0x4284295;
                  bVar8 = CustomLogic_Editor_XmlDocumentUtils__TryGetInnerText
                                    (pSVar18,(System_String_o *)method_01,&pSStack_150,method_02);
                  if ((char)bVar8 != '\0') {
                    pSVar30 = pSStack_150;
                  }
                  return pSVar30;
                }
                goto label_042842b4;
              }
            }
          }
        }
      }
      pSStack_158 = (System_String_array *)0x42842b4;
      il2cpp_runtime_helper_022b2ca0();
    }
  }
label_042842b4:
  pSStack_158 = (System_String_array *)0x42842b9;
  auVar31 = il2cpp_runtime_helper_022b2c90();
  plVar25 = auVar31._8_8_;
  pSStack_188 = auVar31._0_8_;
  pMVar22 = method_02;
  pSVar16 = pSVar27;
  __this_00 = ppSVar29;
  pSStack_178 = pSVar9;
  pSStack_170 = pSVar19;
  pMStack_168 = method_01;
  pSStack_160 = pSVar30;
  pSStack_158 = pSVar15;
  if (g_data_057adca0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_XmlDocumentUtils);
    il2cpp_runtime_helper_023445d0(&"//member[@name=\"P:");
    il2cpp_runtime_helper_023445d0(&"\"]");
    __this_00 = &".";
    il2cpp_runtime_helper_023445d0();
    g_data_057adca0 = '\x01';
  }
  pSStack_188 = (System_String_o *)0x0;
  if (plVar25 != (long *)0x0) {
    pSVar15 = (System_String_array *)
              (**(code **)(*plVar25 + 0x1b8))(plVar25,*(undefined8 *)(*plVar25 + 0x1c0));
    pSVar16 = (System_String_array *)&g_data_00000005;
    __this_00 = (System_String_array **)TypeInfo_string;
    pSVar19 = (System_String_array *)il2cpp_runtime_helper_022b2a40();
    pSVar9 = "//member[@name=\"P:";
    if (pSVar19 != (System_String_array *)0x0) {
      if ((int)pSVar19->max_length != 0) {
        __this_00 = (System_String_array **)pSVar19->m_Items;
        pSVar19->m_Items[0] = (System_String_o *)"//member[@name=\"P:";
        il2cpp_runtime_helper_022b4080();
        pSVar16 = pSVar9;
        if (pSVar27 == (System_String_array *)0x0) goto label_04284484;
        pIVar4 = (pSVar27->obj).klass;
        pSVar16 = (System_String_array *)pIVar4->vtable[0x1a].method;
        pSVar9 = (System_String_array *)(*pIVar4->vtable[0x1a].methodPtr)();
        __this_00 = (System_String_array **)pSVar27;
        if (1 < (uint)pSVar19->max_length) {
          __this_00 = (System_String_array **)(pSVar19->m_Items + 1);
          pSVar19->m_Items[1] = (System_String_o *)pSVar9;
          il2cpp_runtime_helper_022b4080();
          pSVar27 = ".";
          pSVar16 = pSVar9;
          if (2 < (uint)pSVar19->max_length) {
            __this_00 = (System_String_array **)(pSVar19->m_Items + 2);
            pSVar19->m_Items[2] = (System_String_o *)".";
            il2cpp_runtime_helper_022b4080();
            pSVar16 = pSVar27;
            if (3 < (uint)pSVar19->max_length) {
              __this_00 = (System_String_array **)(pSVar19->m_Items + 3);
              pSVar19->m_Items[3] = (System_String_o *)pSVar15;
              il2cpp_runtime_helper_022b4080();
              pSVar16 = pSVar15;
              if (4 < (uint)pSVar19->max_length) {
                pSVar19->m_Items[4] = "\"]";
                il2cpp_runtime_helper_022b4080(pSVar19->m_Items + 4);
                pSVar16 = (System_String_array *)0x0;
                pSVar17 = System_String__Concat_3af7570(pSVar19,(MethodInfo *)0x0);
                __this_00 = (System_String_array **)pSVar19;
                if ((System_String_array *)ppSVar29 != (System_String_array *)0x0) {
                  pSVar18 = System_Xml_XmlNode__SelectSingleNode
                                      ((System_Xml_XmlNode_o *)ppSVar29,pSVar17,(MethodInfo *)0x0);
                  if (*(int *)(TypeInfo_XmlDocumentUtils + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  bVar8 = CustomLogic_Editor_XmlDocumentUtils__TryGetInnerText
                                    (pSVar18,(System_String_o *)method_02,&pSStack_188,pMVar22);
                  if ((char)bVar8 != '\0') {
                    pSVar21 = pSStack_188;
                  }
                  return pSVar21;
                }
                goto label_04284484;
              }
            }
          }
        }
      }
      il2cpp_runtime_helper_022b2ca0();
    }
  }
label_04284484:
  il2cpp_runtime_helper_022b2c90();
  if ((System_String_array *)__this_00 != (System_String_array *)0x0) {
    pSVar18 = System_Xml_XmlNode__SelectSingleNode
                        ((System_Xml_XmlNode_o *)__this_00,(System_String_o *)pSVar16,(MethodInfo *)0x0);
    *extraout_RDX = (long)pSVar18;
    uVar20 = il2cpp_runtime_helper_022b4080(extraout_RDX,pSVar18);
    return (System_String_o *)CONCAT71((int7)((ulong)uVar20 >> 8),*extraout_RDX != 0);
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adca2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_XmlDocumentUtils);
    il2cpp_runtime_helper_023445d0(&"UnityEngine.xml");
    il2cpp_runtime_helper_023445d0(&"Scripts.xml");
    il2cpp_runtime_helper_023445d0(&"UnityEngine.PhysicsModule.xml");
    il2cpp_runtime_helper_023445d0(&"UnityEditor.CoreModule.xml");
    il2cpp_runtime_helper_023445d0(&"Photon3Unity3D.xml");
    g_data_057adca2 = '\x01';
  }
  __this = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor(__this,MethodInfo_List_1_System_String);
  pIVar7 = "Scripts.xml";
  lVar3 = MethodInfo_Void_Add;
  if (__this != (System_Collections_Generic_List_object__o *)0x0) {
    piVar1 = &(__this->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar5 = (__this->fields)._items;
    if (pSVar5 != (System_Object_array *)0x0) {
      uVar2 = (__this->fields)._size;
      if (uVar2 < (uint)pSVar5->max_length) {
        (__this->fields)._size = uVar2 + 1;
        pSVar5->m_Items[(int)uVar2] = pIVar7;
        il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  (__this,pIVar7,*(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
      }
      pIVar7 = "UnityEngine.xml";
      lVar3 = MethodInfo_Void_Add;
      piVar1 = &(__this->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar5 = (__this->fields)._items;
      if (pSVar5 != (System_Object_array *)0x0) {
        uVar2 = (__this->fields)._size;
        if (uVar2 < (uint)pSVar5->max_length) {
          (__this->fields)._size = uVar2 + 1;
          pSVar5->m_Items[(int)uVar2] = pIVar7;
          il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (__this,pIVar7,*(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70))
          ;
        }
        pIVar7 = "UnityEngine.PhysicsModule.xml";
        lVar3 = MethodInfo_Void_Add;
        piVar1 = &(__this->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar5 = (__this->fields)._items;
        if (pSVar5 != (System_Object_array *)0x0) {
          uVar2 = (__this->fields)._size;
          if (uVar2 < (uint)pSVar5->max_length) {
            (__this->fields)._size = uVar2 + 1;
            pSVar5->m_Items[(int)uVar2] = pIVar7;
            il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this,pIVar7,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
          }
          pIVar7 = "UnityEditor.CoreModule.xml";
          lVar3 = MethodInfo_Void_Add;
          piVar1 = &(__this->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar5 = (__this->fields)._items;
          if (pSVar5 != (System_Object_array *)0x0) {
            uVar2 = (__this->fields)._size;
            if (uVar2 < (uint)pSVar5->max_length) {
              (__this->fields)._size = uVar2 + 1;
              pSVar5->m_Items[(int)uVar2] = pIVar7;
              il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar2);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        (__this,pIVar7,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
            }
            pIVar7 = "Photon3Unity3D.xml";
            lVar3 = MethodInfo_Void_Add;
            piVar1 = &(__this->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar5 = (__this->fields)._items;
            if (pSVar5 != (System_Object_array *)0x0) {
              uVar2 = (__this->fields)._size;
              if (uVar2 < (uint)pSVar5->max_length) {
                (__this->fields)._size = uVar2 + 1;
                pSVar5->m_Items[(int)uVar2] = pIVar7;
                il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar2);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          (__this,pIVar7,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
              }
              **(undefined8 **)(TypeInfo_XmlDocumentUtils + 0xb8) = __this;
              pSVar21 = (System_String_o *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_XmlDocumentUtils + 0xb8),__this);
              return pSVar21;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pcVar6 = (code *)swi(3);
  pSVar21 = (System_String_o *)(*pcVar6)();
  return pSVar21;
}


// CustomLogic.Editor.XmlDocumentUtils$$GetMethodParamTexts
// il2cpp: System_Collections_Generic_IEnumerable_KeyValuePair_string__string___o* CustomLogic_Editor_XmlDocumentUtils__GetMethodParamTexts (System_Xml_XmlDocument_o* xmlDocument, System_Type_o* type, System_Reflection_MethodInfo_o* methodInfo, const MethodInfo* method);
// 0x4283d50

System_Collections_Generic_IEnumerable_KeyValuePair_string__string___o *
CustomLogic_Editor_XmlDocumentUtils__GetMethodParamTexts
          (System_Xml_XmlDocument_o *xmlDocument,System_Type_o *type,
          System_Reflection_MethodInfo_o *methodInfo,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  code *pcVar4;
  long lVar5;
  Il2CppObject *pIVar6;
  bool_conflict bVar7;
  System_Xml_XmlDocument_o *pSVar8;
  System_Xml_XmlDocument_o *pSVar9;
  System_Collections_Generic_IEnumerable_KeyValuePair_string__string___o *pSVar10;
  System_Func_TSource__bool__o *pSVar11;
  System_String_Fields SVar12;
  System_String_Fields SVar13;
  System_String_Fields SVar14;
  System_String_o *xpath;
  System_Xml_XmlNode_o *pSVar15;
  System_String_Fields SVar16;
  System_String_Fields SVar17;
  System_String_o *pSVar18;
  undefined8 uVar19;
  System_Collections_Generic_List_object__o *__this;
  MethodInfo *pMVar20;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_Collections_Hashtable_o *extraout_RDX;
  System_Reflection_MethodInfo_o *methodInfo_00;
  System_Reflection_ConstructorInfo_o *ctorInfo;
  long *plVar21;
  long *extraout_RDX_00;
  System_String_Fields SVar22;
  System_Xml_Schema_SchemaInfo_o *pSVar23;
  System_Type_o *type_00;
  System_Type_o *type_01;
  System_String_Fields SVar24;
  System_String_Fields SVar25;
  System_Xml_XmlDocument_o *pSVar26;
  System_String_Fields __this_00;
  System_String_o *in_R8;
  System_String_o *pSVar27;
  undefined1 auVar28 [16];
  System_Collections_Generic_KeyValuePair_object__object__o SVar29;
  System_String_o *pSStack_130;
  System_String_Fields SStack_128;
  System_String_Fields SStack_120;
  System_String_Fields SStack_118;
  MethodInfo *pMStack_110;
  System_String_Fields SStack_100;
  System_String_o *pSStack_f8;
  MethodInfo *pMStack_f0;
  System_Xml_XmlDocument_o *pSStack_e8;
  System_Reflection_ConstructorInfo_o *pSStack_d8;
  System_Type_o *pSStack_d0;
  System_String_Fields SStack_c8;
  undefined8 uStack_c0;
  MethodInfo *pMStack_b8;
  System_Xml_XmlDocument_o *pSStack_b0;
  System_Reflection_MethodInfo_o *pSStack_a0;
  System_Type_o *pSStack_98;
  System_Xml_XmlDocument_o *pSStack_90;
  undefined8 uStack_88;
  System_Xml_XmlDocument_o *pSStack_80;
  System_Xml_XmlDocument_o *pSStack_78;
  
  if (g_data_057adc9b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GetMethodParamTexts_d__9);
    g_data_057adc9b = '\x01';
  }
  pSVar8 = (System_Xml_XmlDocument_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GetMethodParamTexts_d__9);
  pSVar23 = (System_Xml_Schema_SchemaInfo_o *)&g_data_fffffffe;
  pSVar26 = pSVar8;
  CustomLogic_Editor_XmlDocumentUtils__GetMethodParamTexts_d__9___ctor
            ((CustomLogic_Editor_XmlDocumentUtils__GetMethodParamTexts_d__9_o *)pSVar8,-2,(MethodInfo *)0x0);
  if (pSVar8 != (System_Xml_XmlDocument_o *)0x0) {
    *(System_Xml_XmlDocument_o **)&(pSVar8->fields).reportValidity = xmlDocument;
    il2cpp_runtime_helper_022b4080(&(pSVar8->fields).reportValidity,xmlDocument);
    (pSVar8->fields).schemaInfo = (System_Xml_Schema_SchemaInfo_o *)type;
    il2cpp_runtime_helper_022b4080(&(pSVar8->fields).schemaInfo,type);
    (pSVar8->fields).htElementIdMap = (System_Collections_Hashtable_o *)methodInfo;
    il2cpp_runtime_helper_022b4080(&(pSVar8->fields).htElementIdMap,methodInfo);
    return (System_Collections_Generic_IEnumerable_KeyValuePair_string__string___o *)pSVar8;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adc9c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GetConstructorParamTexts_d__10);
    g_data_057adc9c = '\x01';
  }
  pSVar9 = (System_Xml_XmlDocument_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GetConstructorParamTexts_d__10);
  type_00 = (System_Type_o *)&g_data_fffffffe;
  pSVar8 = pSVar9;
  CustomLogic_Editor_XmlDocumentUtils__GetConstructorParamTexts_d__10___ctor
            ((CustomLogic_Editor_XmlDocumentUtils__GetConstructorParamTexts_d__10_o *)pSVar9,-2,
             (MethodInfo *)0x0);
  if (pSVar9 != (System_Xml_XmlDocument_o *)0x0) {
    *(System_Xml_XmlDocument_o **)&(pSVar9->fields).reportValidity = pSVar26;
    il2cpp_runtime_helper_022b4080(&(pSVar9->fields).reportValidity,pSVar26);
    (pSVar9->fields).schemaInfo = pSVar23;
    il2cpp_runtime_helper_022b4080(&(pSVar9->fields).schemaInfo,pSVar23);
    (pSVar9->fields).htElementIdMap = extraout_RDX;
    il2cpp_runtime_helper_022b4080(&(pSVar9->fields).htElementIdMap,extraout_RDX);
    return (System_Collections_Generic_IEnumerable_KeyValuePair_string__string___o *)pSVar9;
  }
  auVar28 = il2cpp_runtime_helper_022b2c90();
  methodInfo_00 = auVar28._8_8_;
  uStack_88 = auVar28._0_8_;
  pMVar20 = method;
  pSVar27 = in_R8;
  pSStack_80 = pSVar9;
  pSStack_78 = pSVar26;
  if (g_data_057adc9d == '\0') {
    pSStack_90 = (System_Xml_XmlDocument_o *)0x4283ebf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_String_System_String_FirstOrDefaul);
    pSStack_90 = (System_Xml_XmlDocument_o *)0x4283ecb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_KeyValuePair_string_string_bool);
    pSStack_90 = (System_Xml_XmlDocument_o *)0x4283ed7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    pSStack_90 = (System_Xml_XmlDocument_o *)0x4283ee3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_GetParameterNodeText_b__0);
    pSStack_90 = (System_Xml_XmlDocument_o *)0x4283eef;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass11_0);
    pSStack_90 = (System_Xml_XmlDocument_o *)0x4283efb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_XmlDocumentUtils);
    g_data_057adc9d = '\x01';
  }
  pSStack_90 = (System_Xml_XmlDocument_o *)0x4283f11;
  pSVar9 = (System_Xml_XmlDocument_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass11_0);
  type_01 = (System_Type_o *)0x0;
  pSStack_90 = (System_Xml_XmlDocument_o *)0x4283f1e;
  pSVar26 = pSVar9;
  CustomLogic_Editor_XmlDocumentUtils___c__DisplayClass11_0___ctor
            ((CustomLogic_Editor_XmlDocumentUtils___c__DisplayClass11_0_o *)pSVar9,(MethodInfo *)0x0);
  if (pSVar9 != (System_Xml_XmlDocument_o *)0x0) {
    (pSVar9->fields).parentNode = (System_Xml_XmlNode_o *)method;
    pSStack_90 = (System_Xml_XmlDocument_o *)0x4283f3a;
    il2cpp_runtime_helper_022b4080(&pSVar9->fields,method);
    if (*(int *)(TypeInfo_XmlDocumentUtils + 0xe4) == 0) {
      pSStack_90 = (System_Xml_XmlDocument_o *)0x4283f52;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_90 = (System_Xml_XmlDocument_o *)0x4283f60;
    pSVar10 = CustomLogic_Editor_XmlDocumentUtils__GetMethodParamTexts(pSVar8,type_00,methodInfo_00,pMVar20);
    pSStack_90 = (System_Xml_XmlDocument_o *)0x4283f72;
    pSVar11 = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_KeyValuePair_string_string_bool);
    pSStack_90 = (System_Xml_XmlDocument_o *)0x4283f8c;
    System_Func_KeyValuePair_object__object___bool____ctor();
    pSStack_90 = (System_Xml_XmlDocument_o *)0x4283fa1;
    SVar29 = System_Linq_Enumerable__FirstOrDefault_KeyValuePair_object__object__
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar10,pSVar11,MethodInfo_KeyValuePair_2_System_String_System_String_FirstOrDefaul);
    if ((System_String_o *)SVar29.fields.value != (System_String_o *)0x0) {
      in_R8 = (System_String_o *)SVar29.fields.value;
    }
    return (System_Collections_Generic_IEnumerable_KeyValuePair_string__string___o *)in_R8;
  }
  pSStack_90 = (System_Xml_XmlDocument_o *)0x4283fbf;
  auVar28 = il2cpp_runtime_helper_022b2c90();
  ctorInfo = auVar28._8_8_;
  uStack_c0 = auVar28._0_8_;
  method_00 = pMVar20;
  pSVar18 = pSVar27;
  pMStack_b8 = method;
  pSStack_b0 = pSVar8;
  pSStack_a0 = methodInfo_00;
  pSStack_98 = type_00;
  pSStack_90 = pSVar9;
  if (g_data_057adc9e == '\0') {
    SStack_c8._stringLength = 0x4283fef;
    SStack_c8._firstChar = 0;
    SStack_c8._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_String_System_String_FirstOrDefaul);
    SStack_c8._stringLength = 0x4283ffb;
    SStack_c8._firstChar = 0;
    SStack_c8._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_KeyValuePair_string_string_bool);
    SStack_c8._stringLength = 0x4284007;
    SStack_c8._firstChar = 0;
    SStack_c8._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    SStack_c8._stringLength = 0x4284013;
    SStack_c8._firstChar = 0;
    SStack_c8._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_GetParameterNodeText_b__0);
    SStack_c8._stringLength = 0x428401f;
    SStack_c8._firstChar = 0;
    SStack_c8._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass12_0);
    SStack_c8._stringLength = 0x428402b;
    SStack_c8._firstChar = 0;
    SStack_c8._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_XmlDocumentUtils);
    g_data_057adc9e = '\x01';
  }
  SStack_c8._stringLength = 0x4284041;
  SStack_c8._firstChar = 0;
  SStack_c8._6_2_ = 0;
  SVar12 = (System_String_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass12_0);
  SVar16._stringLength = 0;
  SVar16._firstChar = 0;
  SVar16._6_2_ = 0;
  SStack_c8._stringLength = 0x428404e;
  SStack_c8._firstChar = 0;
  SStack_c8._6_2_ = 0;
  SVar17 = SVar12;
  CustomLogic_Editor_XmlDocumentUtils___c__DisplayClass12_0___ctor
            ((CustomLogic_Editor_XmlDocumentUtils___c__DisplayClass12_0_o *)SVar12,(MethodInfo *)0x0);
  if (SVar12 != (System_String_Fields)0x0) {
    ((CustomLogic_Editor_XmlDocumentUtils___c__DisplayClass12_0_Fields *)((long)SVar12 + 0x10))->parameterInfo
         = (System_Reflection_ParameterInfo_o *)pMVar20;
    SStack_c8._stringLength = 0x428406a;
    SStack_c8._firstChar = 0;
    SStack_c8._6_2_ = 0;
    il2cpp_runtime_helper_022b4080((CustomLogic_Editor_XmlDocumentUtils___c__DisplayClass12_0_Fields *)
                       ((long)SVar12 + 0x10),pMVar20);
    if (*(int *)(TypeInfo_XmlDocumentUtils + 0xe4) == 0) {
      SStack_c8._stringLength = 0x4284082;
      SStack_c8._firstChar = 0;
      SStack_c8._6_2_ = 0;
      il2cpp_runtime_helper_02337ed0();
    }
    SStack_c8._stringLength = 0x4284090;
    SStack_c8._firstChar = 0;
    SStack_c8._6_2_ = 0;
    pSVar10 = CustomLogic_Editor_XmlDocumentUtils__GetConstructorParamTexts
                        (pSVar26,type_01,ctorInfo,method_00);
    SStack_c8._stringLength = 0x42840a2;
    SStack_c8._firstChar = 0;
    SStack_c8._6_2_ = 0;
    pSVar11 = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_KeyValuePair_string_string_bool);
    SStack_c8._stringLength = 0x42840bc;
    SStack_c8._firstChar = 0;
    SStack_c8._6_2_ = 0;
    System_Func_KeyValuePair_object__object___bool____ctor();
    SStack_c8._stringLength = 0x42840d1;
    SStack_c8._firstChar = 0;
    SStack_c8._6_2_ = 0;
    SVar29 = System_Linq_Enumerable__FirstOrDefault_KeyValuePair_object__object__
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar10,pSVar11,MethodInfo_KeyValuePair_2_System_String_System_String_FirstOrDefaul);
    if ((System_String_o *)SVar29.fields.value != (System_String_o *)0x0) {
      pSVar27 = (System_String_o *)SVar29.fields.value;
    }
    return (System_Collections_Generic_IEnumerable_KeyValuePair_string__string___o *)pSVar27;
  }
  SStack_c8._stringLength = 0x42840ef;
  SStack_c8._firstChar = 0;
  SStack_c8._6_2_ = 0;
  auVar28 = il2cpp_runtime_helper_022b2c90();
  SVar22 = auVar28._8_8_;
  pSStack_f8 = auVar28._0_8_;
  method_01 = method_00;
  SVar24 = SVar16;
  __this_00 = SVar17;
  pSVar27 = pSVar18;
  pMStack_f0 = pMVar20;
  pSStack_e8 = pSVar26;
  pSStack_d8 = ctorInfo;
  pSStack_d0 = type_01;
  SStack_c8 = SVar12;
  if (g_data_057adc9f == '\0') {
    SStack_100._stringLength = 0x428411f;
    SStack_100._firstChar = 0;
    SStack_100._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    SStack_100._stringLength = 0x428412b;
    SStack_100._firstChar = 0;
    SStack_100._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_XmlDocumentUtils);
    SStack_100._stringLength = 0x4284137;
    SStack_100._firstChar = 0;
    SStack_100._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&"//member[@name=\"P:");
    SStack_100._stringLength = 0x4284143;
    SStack_100._firstChar = 0;
    SStack_100._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&"\"]");
    __this_00 = (System_String_Fields)&".";
    SStack_100._stringLength = 0x428414f;
    SStack_100._firstChar = 0;
    SStack_100._6_2_ = 0;
    il2cpp_runtime_helper_023445d0();
    g_data_057adc9f = '\x01';
  }
  pSStack_f8 = (System_String_o *)0x0;
  SVar12._stringLength = 0;
  SVar12._firstChar = 0;
  SVar12._6_2_ = 0;
  if (SVar22 != (System_String_Fields)0x0) {
    SStack_100._stringLength = 0x428417a;
    SStack_100._firstChar = 0;
    SStack_100._6_2_ = 0;
    SVar12 = (System_String_Fields)
             (**(code **)(*(long *)SVar22 + 0x1b8))(SVar22,*(undefined8 *)(*(long *)SVar22 + 0x1c0));
    SVar24._stringLength = 5;
    SVar24._firstChar = 0;
    SVar24._6_2_ = 0;
    SStack_100._stringLength = 0x4284191;
    SStack_100._firstChar = 0;
    SStack_100._6_2_ = 0;
    __this_00 = TypeInfo_string;
    SVar13 = (System_String_Fields)il2cpp_runtime_helper_022b2a40();
    SVar14 = "//member[@name=\"P:";
    if (SVar13 != (System_String_Fields)0x0) {
      SVar22 = SVar13;
      if (*(int *)((long)SVar13 + 0x18) != 0) {
        __this_00 = (System_String_Fields)((long)SVar13 + 0x20);
        *(System_String_Fields *)((long)SVar13 + 0x20) = "//member[@name=\"P:";
        SStack_100._stringLength = 0x42841be;
        SStack_100._firstChar = 0;
        SStack_100._6_2_ = 0;
        il2cpp_runtime_helper_022b4080();
        SVar24 = SVar14;
        if (SVar16 == (System_String_Fields)0x0) goto label_042842b4;
        SVar24 = *(System_String_Fields *)(*(long *)SVar16 + 0x2e0);
        SStack_100._stringLength = 0x42841db;
        SStack_100._firstChar = 0;
        SStack_100._6_2_ = 0;
        __this_00 = SVar16;
        SVar14 = (System_String_Fields)(**(code **)(*(long *)SVar16 + 0x2d8))();
        if (1 < *(uint *)((long)SVar13 + 0x18)) {
          __this_00 = (System_String_Fields)((long)SVar13 + 0x28);
          *(System_String_Fields *)((long)SVar13 + 0x28) = SVar14;
          SStack_100._stringLength = 0x42841f5;
          SStack_100._firstChar = 0;
          SStack_100._6_2_ = 0;
          il2cpp_runtime_helper_022b4080();
          SVar25 = ".";
          SVar24 = SVar14;
          if (2 < *(uint *)((long)SVar13 + 0x18)) {
            __this_00 = (System_String_Fields)((long)SVar13 + 0x30);
            *(System_String_Fields *)((long)SVar13 + 0x30) = ".";
            SStack_100._stringLength = 0x4284216;
            SStack_100._firstChar = 0;
            SStack_100._6_2_ = 0;
            il2cpp_runtime_helper_022b4080();
            SVar24 = SVar25;
            if (3 < *(uint *)((long)SVar13 + 0x18)) {
              __this_00 = (System_String_Fields)((long)SVar13 + 0x38);
              *(System_String_Fields *)((long)SVar13 + 0x38) = SVar12;
              SStack_100._stringLength = 0x4284230;
              SStack_100._firstChar = 0;
              SStack_100._6_2_ = 0;
              SVar24 = SVar12;
              il2cpp_runtime_helper_022b4080();
              if (4 < *(uint *)((long)SVar13 + 0x18)) {
                *(undefined8 *)((long)SVar13 + 0x40) = "\"]";
                SStack_100._stringLength = 0x4284250;
                SStack_100._firstChar = 0;
                SStack_100._6_2_ = 0;
                il2cpp_runtime_helper_022b4080((long)SVar13 + 0x40);
                SVar24._stringLength = 0;
                SVar24._firstChar = 0;
                SVar24._6_2_ = 0;
                SStack_100._stringLength = 0x428425a;
                SStack_100._firstChar = 0;
                SStack_100._6_2_ = 0;
                __this_00 = SVar13;
                xpath = System_String__Concat_3af7570((System_String_array *)SVar13,(MethodInfo *)0x0);
                if (SVar17 != (System_String_Fields)0x0) {
                  SStack_100._stringLength = 0x428426c;
                  SStack_100._firstChar = 0;
                  SStack_100._6_2_ = 0;
                  pSVar15 = System_Xml_XmlNode__SelectSingleNode
                                      ((System_Xml_XmlNode_o *)SVar17,xpath,(MethodInfo *)0x0);
                  if (*(int *)(TypeInfo_XmlDocumentUtils + 0xe4) == 0) {
                    SStack_100._stringLength = 0x4284287;
                    SStack_100._firstChar = 0;
                    SStack_100._6_2_ = 0;
                    il2cpp_runtime_helper_02337ed0();
                  }
                  SStack_100._stringLength = 0x4284295;
                  SStack_100._firstChar = 0;
                  SStack_100._6_2_ = 0;
                  bVar7 = CustomLogic_Editor_XmlDocumentUtils__TryGetInnerText
                                    (pSVar15,(System_String_o *)method_00,&pSStack_f8,method_01);
                  if ((char)bVar7 != '\0') {
                    pSVar18 = pSStack_f8;
                  }
                  return (System_Collections_Generic_IEnumerable_KeyValuePair_string__string___o *)pSVar18;
                }
                goto label_042842b4;
              }
            }
          }
        }
      }
      SStack_100._stringLength = 0x42842b4;
      SStack_100._firstChar = 0;
      SStack_100._6_2_ = 0;
      il2cpp_runtime_helper_022b2ca0();
    }
  }
label_042842b4:
  SStack_100._stringLength = 0x42842b9;
  SStack_100._firstChar = 0;
  SStack_100._6_2_ = 0;
  auVar28 = il2cpp_runtime_helper_022b2c90();
  plVar21 = auVar28._8_8_;
  pSStack_130 = auVar28._0_8_;
  pMVar20 = method_01;
  SVar13 = SVar24;
  SVar14 = __this_00;
  SStack_128 = SVar22;
  SStack_120 = SVar17;
  SStack_118 = SVar16;
  pMStack_110 = method_00;
  SStack_100 = SVar12;
  if (g_data_057adca0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_XmlDocumentUtils);
    il2cpp_runtime_helper_023445d0(&"//member[@name=\"P:");
    il2cpp_runtime_helper_023445d0(&"\"]");
    SVar14 = (System_String_Fields)&".";
    il2cpp_runtime_helper_023445d0();
    g_data_057adca0 = '\x01';
  }
  pSStack_130 = (System_String_o *)0x0;
  if (plVar21 != (long *)0x0) {
    SVar12 = (System_String_Fields)(**(code **)(*plVar21 + 0x1b8))(plVar21,*(undefined8 *)(*plVar21 + 0x1c0));
    SVar13._stringLength = 5;
    SVar13._firstChar = 0;
    SVar13._6_2_ = 0;
    SVar14 = TypeInfo_string;
    SVar16 = (System_String_Fields)il2cpp_runtime_helper_022b2a40();
    SVar17 = "//member[@name=\"P:";
    if (SVar16 != (System_String_Fields)0x0) {
      if (*(int *)((long)SVar16 + 0x18) != 0) {
        SVar14 = (System_String_Fields)((long)SVar16 + 0x20);
        *(System_String_Fields *)((long)SVar16 + 0x20) = "//member[@name=\"P:";
        il2cpp_runtime_helper_022b4080();
        SVar13 = SVar17;
        if (SVar24 == (System_String_Fields)0x0) goto label_04284484;
        SVar13 = (*(System_String_o **)SVar24)[0x1e].fields;
        SVar17 = (System_String_Fields)(*(*(System_String_o **)SVar24)[0x1e].monitor)();
        SVar14 = SVar24;
        if (1 < *(uint *)((long)SVar16 + 0x18)) {
          SVar14 = (System_String_Fields)((long)SVar16 + 0x28);
          *(System_String_Fields *)((long)SVar16 + 0x28) = SVar17;
          il2cpp_runtime_helper_022b4080();
          SVar24 = ".";
          SVar13 = SVar17;
          if (2 < *(uint *)((long)SVar16 + 0x18)) {
            SVar14 = (System_String_Fields)((long)SVar16 + 0x30);
            *(System_String_Fields *)((long)SVar16 + 0x30) = ".";
            il2cpp_runtime_helper_022b4080();
            SVar13 = SVar24;
            if (3 < *(uint *)((long)SVar16 + 0x18)) {
              SVar14 = (System_String_Fields)((long)SVar16 + 0x38);
              *(System_String_Fields *)((long)SVar16 + 0x38) = SVar12;
              il2cpp_runtime_helper_022b4080();
              SVar13 = SVar12;
              if (4 < *(uint *)((long)SVar16 + 0x18)) {
                *(undefined8 *)((long)SVar16 + 0x40) = "\"]";
                il2cpp_runtime_helper_022b4080((long)SVar16 + 0x40);
                SVar13._stringLength = 0;
                SVar13._firstChar = 0;
                SVar13._6_2_ = 0;
                pSVar18 = System_String__Concat_3af7570((System_String_array *)SVar16,(MethodInfo *)0x0);
                SVar14 = SVar16;
                if (__this_00 != (System_String_Fields)0x0) {
                  pSVar15 = System_Xml_XmlNode__SelectSingleNode
                                      ((System_Xml_XmlNode_o *)__this_00,pSVar18,(MethodInfo *)0x0);
                  if (*(int *)(TypeInfo_XmlDocumentUtils + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  bVar7 = CustomLogic_Editor_XmlDocumentUtils__TryGetInnerText
                                    (pSVar15,(System_String_o *)method_01,&pSStack_130,pMVar20);
                  if ((char)bVar7 != '\0') {
                    pSVar27 = pSStack_130;
                  }
                  return (System_Collections_Generic_IEnumerable_KeyValuePair_string__string___o *)pSVar27;
                }
                goto label_04284484;
              }
            }
          }
        }
      }
      il2cpp_runtime_helper_022b2ca0();
    }
  }
label_04284484:
  il2cpp_runtime_helper_022b2c90();
  if (SVar14 != (System_String_Fields)0x0) {
    pSVar15 = System_Xml_XmlNode__SelectSingleNode
                        ((System_Xml_XmlNode_o *)SVar14,(System_String_o *)SVar13,(MethodInfo *)0x0);
    *extraout_RDX_00 = (long)pSVar15;
    uVar19 = il2cpp_runtime_helper_022b4080(extraout_RDX_00,pSVar15);
    return (System_Collections_Generic_IEnumerable_KeyValuePair_string__string___o *)
           CONCAT71((int7)((ulong)uVar19 >> 8),*extraout_RDX_00 != 0);
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adca2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_XmlDocumentUtils);
    il2cpp_runtime_helper_023445d0(&"UnityEngine.xml");
    il2cpp_runtime_helper_023445d0(&"Scripts.xml");
    il2cpp_runtime_helper_023445d0(&"UnityEngine.PhysicsModule.xml");
    il2cpp_runtime_helper_023445d0(&"UnityEditor.CoreModule.xml");
    il2cpp_runtime_helper_023445d0(&"Photon3Unity3D.xml");
    g_data_057adca2 = '\x01';
  }
  __this = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor(__this,MethodInfo_List_1_System_String);
  pIVar6 = "Scripts.xml";
  lVar5 = MethodInfo_Void_Add;
  if (__this != (System_Collections_Generic_List_object__o *)0x0) {
    piVar1 = &(__this->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (__this->fields)._items;
    if (pSVar3 != (System_Object_array *)0x0) {
      uVar2 = (__this->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        (__this->fields)._size = uVar2 + 1;
        pSVar3->m_Items[(int)uVar2] = pIVar6;
        il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  (__this,pIVar6,*(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
      }
      pIVar6 = "UnityEngine.xml";
      lVar5 = MethodInfo_Void_Add;
      piVar1 = &(__this->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar3 = (__this->fields)._items;
      if (pSVar3 != (System_Object_array *)0x0) {
        uVar2 = (__this->fields)._size;
        if (uVar2 < (uint)pSVar3->max_length) {
          (__this->fields)._size = uVar2 + 1;
          pSVar3->m_Items[(int)uVar2] = pIVar6;
          il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (__this,pIVar6,*(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70))
          ;
        }
        pIVar6 = "UnityEngine.PhysicsModule.xml";
        lVar5 = MethodInfo_Void_Add;
        piVar1 = &(__this->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar3 = (__this->fields)._items;
        if (pSVar3 != (System_Object_array *)0x0) {
          uVar2 = (__this->fields)._size;
          if (uVar2 < (uint)pSVar3->max_length) {
            (__this->fields)._size = uVar2 + 1;
            pSVar3->m_Items[(int)uVar2] = pIVar6;
            il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this,pIVar6,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          }
          pIVar6 = "UnityEditor.CoreModule.xml";
          lVar5 = MethodInfo_Void_Add;
          piVar1 = &(__this->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar3 = (__this->fields)._items;
          if (pSVar3 != (System_Object_array *)0x0) {
            uVar2 = (__this->fields)._size;
            if (uVar2 < (uint)pSVar3->max_length) {
              (__this->fields)._size = uVar2 + 1;
              pSVar3->m_Items[(int)uVar2] = pIVar6;
              il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        (__this,pIVar6,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
            }
            pIVar6 = "Photon3Unity3D.xml";
            lVar5 = MethodInfo_Void_Add;
            piVar1 = &(__this->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar3 = (__this->fields)._items;
            if (pSVar3 != (System_Object_array *)0x0) {
              uVar2 = (__this->fields)._size;
              if (uVar2 < (uint)pSVar3->max_length) {
                (__this->fields)._size = uVar2 + 1;
                pSVar3->m_Items[(int)uVar2] = pIVar6;
                il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          (__this,pIVar6,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
              }
              **(undefined8 **)(TypeInfo_XmlDocumentUtils + 0xb8) = __this;
              pSVar10 = (System_Collections_Generic_IEnumerable_KeyValuePair_string__string___o *)
                        il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_XmlDocumentUtils + 0xb8),__this);
              return pSVar10;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pcVar4 = (code *)swi(3);
  pSVar10 = (System_Collections_Generic_IEnumerable_KeyValuePair_string__string___o *)(*pcVar4)();
  return pSVar10;
}


// CustomLogic.Editor.XmlDocumentUtils$$GetConstructorParamTexts
// il2cpp: System_Collections_Generic_IEnumerable_KeyValuePair_string__string___o* CustomLogic_Editor_XmlDocumentUtils__GetConstructorParamTexts (System_Xml_XmlDocument_o* xmlDocument, System_Type_o* type, System_Reflection_ConstructorInfo_o* ctorInfo, const MethodInfo* method);
// 0x4283df0

System_Collections_Generic_IEnumerable_KeyValuePair_string__string___o *
CustomLogic_Editor_XmlDocumentUtils__GetConstructorParamTexts
          (System_Xml_XmlDocument_o *xmlDocument,System_Type_o *type,
          System_Reflection_ConstructorInfo_o *ctorInfo,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  code *pcVar4;
  long lVar5;
  Il2CppObject *pIVar6;
  bool_conflict bVar7;
  System_Xml_XmlDocument_o *pSVar8;
  System_Xml_XmlDocument_o *__this;
  System_Collections_Generic_IEnumerable_KeyValuePair_string__string___o *pSVar9;
  System_Func_TSource__bool__o *pSVar10;
  System_String_Fields SVar11;
  System_String_Fields SVar12;
  System_String_Fields SVar13;
  System_String_o *xpath;
  System_Xml_XmlNode_o *pSVar14;
  System_String_Fields SVar15;
  System_String_Fields SVar16;
  System_String_o *pSVar17;
  undefined8 uVar18;
  System_Collections_Generic_List_object__o *__this_00;
  MethodInfo *pMVar19;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_Reflection_MethodInfo_o *methodInfo;
  System_Reflection_ConstructorInfo_o *ctorInfo_00;
  long *plVar20;
  long *extraout_RDX;
  System_String_Fields SVar21;
  System_Type_o *type_00;
  System_Type_o *type_01;
  System_String_Fields SVar22;
  System_String_Fields SVar23;
  System_Xml_XmlDocument_o *xmlDocument_00;
  System_String_Fields __this_01;
  System_String_o *in_R8;
  System_String_o *pSVar24;
  undefined1 auVar25 [16];
  System_Collections_Generic_KeyValuePair_object__object__o SVar26;
  System_String_o *pSStack_108;
  System_String_Fields SStack_100;
  System_String_Fields SStack_f8;
  System_String_Fields SStack_f0;
  MethodInfo *pMStack_e8;
  System_String_Fields SStack_d8;
  System_String_o *pSStack_d0;
  MethodInfo *pMStack_c8;
  System_Xml_XmlDocument_o *pSStack_c0;
  System_Reflection_ConstructorInfo_o *pSStack_b0;
  System_Type_o *pSStack_a8;
  System_String_Fields SStack_a0;
  undefined8 uStack_98;
  MethodInfo *pMStack_90;
  System_Xml_XmlDocument_o *pSStack_88;
  System_Reflection_MethodInfo_o *pSStack_78;
  System_Type_o *pSStack_70;
  System_Xml_XmlDocument_o *pSStack_68;
  undefined8 uStack_60;
  System_Xml_XmlDocument_o *pSStack_58;
  System_Xml_XmlDocument_o *pSStack_50;
  
  if (g_data_057adc9c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GetConstructorParamTexts_d__10);
    g_data_057adc9c = '\x01';
  }
  pSVar8 = (System_Xml_XmlDocument_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GetConstructorParamTexts_d__10);
  type_00 = (System_Type_o *)&g_data_fffffffe;
  xmlDocument_00 = pSVar8;
  CustomLogic_Editor_XmlDocumentUtils__GetConstructorParamTexts_d__10___ctor
            ((CustomLogic_Editor_XmlDocumentUtils__GetConstructorParamTexts_d__10_o *)pSVar8,-2,
             (MethodInfo *)0x0);
  if (pSVar8 != (System_Xml_XmlDocument_o *)0x0) {
    *(System_Xml_XmlDocument_o **)&(pSVar8->fields).reportValidity = xmlDocument;
    il2cpp_runtime_helper_022b4080(&(pSVar8->fields).reportValidity,xmlDocument);
    (pSVar8->fields).schemaInfo = (System_Xml_Schema_SchemaInfo_o *)type;
    il2cpp_runtime_helper_022b4080(&(pSVar8->fields).schemaInfo,type);
    (pSVar8->fields).htElementIdMap = (System_Collections_Hashtable_o *)ctorInfo;
    il2cpp_runtime_helper_022b4080(&(pSVar8->fields).htElementIdMap,ctorInfo);
    return (System_Collections_Generic_IEnumerable_KeyValuePair_string__string___o *)pSVar8;
  }
  auVar25 = il2cpp_runtime_helper_022b2c90();
  methodInfo = auVar25._8_8_;
  uStack_60 = auVar25._0_8_;
  pMVar19 = method;
  pSVar24 = in_R8;
  pSStack_58 = pSVar8;
  pSStack_50 = xmlDocument;
  if (g_data_057adc9d == '\0') {
    pSStack_68 = (System_Xml_XmlDocument_o *)0x4283ebf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_String_System_String_FirstOrDefaul);
    pSStack_68 = (System_Xml_XmlDocument_o *)0x4283ecb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_KeyValuePair_string_string_bool);
    pSStack_68 = (System_Xml_XmlDocument_o *)0x4283ed7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    pSStack_68 = (System_Xml_XmlDocument_o *)0x4283ee3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_GetParameterNodeText_b__0);
    pSStack_68 = (System_Xml_XmlDocument_o *)0x4283eef;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass11_0);
    pSStack_68 = (System_Xml_XmlDocument_o *)0x4283efb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_XmlDocumentUtils);
    g_data_057adc9d = '\x01';
  }
  pSStack_68 = (System_Xml_XmlDocument_o *)0x4283f11;
  __this = (System_Xml_XmlDocument_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass11_0);
  type_01 = (System_Type_o *)0x0;
  pSStack_68 = (System_Xml_XmlDocument_o *)0x4283f1e;
  pSVar8 = __this;
  CustomLogic_Editor_XmlDocumentUtils___c__DisplayClass11_0___ctor
            ((CustomLogic_Editor_XmlDocumentUtils___c__DisplayClass11_0_o *)__this,(MethodInfo *)0x0);
  if (__this != (System_Xml_XmlDocument_o *)0x0) {
    (__this->fields).parentNode = (System_Xml_XmlNode_o *)method;
    pSStack_68 = (System_Xml_XmlDocument_o *)0x4283f3a;
    il2cpp_runtime_helper_022b4080(&__this->fields,method);
    if (*(int *)(TypeInfo_XmlDocumentUtils + 0xe4) == 0) {
      pSStack_68 = (System_Xml_XmlDocument_o *)0x4283f52;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_68 = (System_Xml_XmlDocument_o *)0x4283f60;
    pSVar9 = CustomLogic_Editor_XmlDocumentUtils__GetMethodParamTexts
                       (xmlDocument_00,type_00,methodInfo,pMVar19);
    pSStack_68 = (System_Xml_XmlDocument_o *)0x4283f72;
    pSVar10 = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_KeyValuePair_string_string_bool);
    pSStack_68 = (System_Xml_XmlDocument_o *)0x4283f8c;
    System_Func_KeyValuePair_object__object___bool____ctor();
    pSStack_68 = (System_Xml_XmlDocument_o *)0x4283fa1;
    SVar26 = System_Linq_Enumerable__FirstOrDefault_KeyValuePair_object__object__
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar9,pSVar10,MethodInfo_KeyValuePair_2_System_String_System_String_FirstOrDefaul);
    if ((System_String_o *)SVar26.fields.value != (System_String_o *)0x0) {
      in_R8 = (System_String_o *)SVar26.fields.value;
    }
    return (System_Collections_Generic_IEnumerable_KeyValuePair_string__string___o *)in_R8;
  }
  pSStack_68 = (System_Xml_XmlDocument_o *)0x4283fbf;
  auVar25 = il2cpp_runtime_helper_022b2c90();
  ctorInfo_00 = auVar25._8_8_;
  uStack_98 = auVar25._0_8_;
  method_00 = pMVar19;
  pSVar17 = pSVar24;
  pMStack_90 = method;
  pSStack_88 = xmlDocument_00;
  pSStack_78 = methodInfo;
  pSStack_70 = type_00;
  pSStack_68 = __this;
  if (g_data_057adc9e == '\0') {
    SStack_a0._stringLength = 0x4283fef;
    SStack_a0._firstChar = 0;
    SStack_a0._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_String_System_String_FirstOrDefaul);
    SStack_a0._stringLength = 0x4283ffb;
    SStack_a0._firstChar = 0;
    SStack_a0._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_KeyValuePair_string_string_bool);
    SStack_a0._stringLength = 0x4284007;
    SStack_a0._firstChar = 0;
    SStack_a0._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    SStack_a0._stringLength = 0x4284013;
    SStack_a0._firstChar = 0;
    SStack_a0._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_GetParameterNodeText_b__0);
    SStack_a0._stringLength = 0x428401f;
    SStack_a0._firstChar = 0;
    SStack_a0._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass12_0);
    SStack_a0._stringLength = 0x428402b;
    SStack_a0._firstChar = 0;
    SStack_a0._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_XmlDocumentUtils);
    g_data_057adc9e = '\x01';
  }
  SStack_a0._stringLength = 0x4284041;
  SStack_a0._firstChar = 0;
  SStack_a0._6_2_ = 0;
  SVar11 = (System_String_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass12_0);
  SVar15._stringLength = 0;
  SVar15._firstChar = 0;
  SVar15._6_2_ = 0;
  SStack_a0._stringLength = 0x428404e;
  SStack_a0._firstChar = 0;
  SStack_a0._6_2_ = 0;
  SVar16 = SVar11;
  CustomLogic_Editor_XmlDocumentUtils___c__DisplayClass12_0___ctor
            ((CustomLogic_Editor_XmlDocumentUtils___c__DisplayClass12_0_o *)SVar11,(MethodInfo *)0x0);
  if (SVar11 != (System_String_Fields)0x0) {
    ((CustomLogic_Editor_XmlDocumentUtils___c__DisplayClass12_0_Fields *)((long)SVar11 + 0x10))->parameterInfo
         = (System_Reflection_ParameterInfo_o *)pMVar19;
    SStack_a0._stringLength = 0x428406a;
    SStack_a0._firstChar = 0;
    SStack_a0._6_2_ = 0;
    il2cpp_runtime_helper_022b4080((CustomLogic_Editor_XmlDocumentUtils___c__DisplayClass12_0_Fields *)
                       ((long)SVar11 + 0x10),pMVar19);
    if (*(int *)(TypeInfo_XmlDocumentUtils + 0xe4) == 0) {
      SStack_a0._stringLength = 0x4284082;
      SStack_a0._firstChar = 0;
      SStack_a0._6_2_ = 0;
      il2cpp_runtime_helper_02337ed0();
    }
    SStack_a0._stringLength = 0x4284090;
    SStack_a0._firstChar = 0;
    SStack_a0._6_2_ = 0;
    pSVar9 = CustomLogic_Editor_XmlDocumentUtils__GetConstructorParamTexts
                       (pSVar8,type_01,ctorInfo_00,method_00);
    SStack_a0._stringLength = 0x42840a2;
    SStack_a0._firstChar = 0;
    SStack_a0._6_2_ = 0;
    pSVar10 = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_KeyValuePair_string_string_bool);
    SStack_a0._stringLength = 0x42840bc;
    SStack_a0._firstChar = 0;
    SStack_a0._6_2_ = 0;
    System_Func_KeyValuePair_object__object___bool____ctor();
    SStack_a0._stringLength = 0x42840d1;
    SStack_a0._firstChar = 0;
    SStack_a0._6_2_ = 0;
    SVar26 = System_Linq_Enumerable__FirstOrDefault_KeyValuePair_object__object__
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar9,pSVar10,MethodInfo_KeyValuePair_2_System_String_System_String_FirstOrDefaul);
    if ((System_String_o *)SVar26.fields.value != (System_String_o *)0x0) {
      pSVar24 = (System_String_o *)SVar26.fields.value;
    }
    return (System_Collections_Generic_IEnumerable_KeyValuePair_string__string___o *)pSVar24;
  }
  SStack_a0._stringLength = 0x42840ef;
  SStack_a0._firstChar = 0;
  SStack_a0._6_2_ = 0;
  auVar25 = il2cpp_runtime_helper_022b2c90();
  SVar21 = auVar25._8_8_;
  pSStack_d0 = auVar25._0_8_;
  method_01 = method_00;
  SVar22 = SVar15;
  __this_01 = SVar16;
  pSVar24 = pSVar17;
  pMStack_c8 = pMVar19;
  pSStack_c0 = pSVar8;
  pSStack_b0 = ctorInfo_00;
  pSStack_a8 = type_01;
  SStack_a0 = SVar11;
  if (g_data_057adc9f == '\0') {
    SStack_d8._stringLength = 0x428411f;
    SStack_d8._firstChar = 0;
    SStack_d8._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    SStack_d8._stringLength = 0x428412b;
    SStack_d8._firstChar = 0;
    SStack_d8._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_XmlDocumentUtils);
    SStack_d8._stringLength = 0x4284137;
    SStack_d8._firstChar = 0;
    SStack_d8._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&"//member[@name=\"P:");
    SStack_d8._stringLength = 0x4284143;
    SStack_d8._firstChar = 0;
    SStack_d8._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&"\"]");
    __this_01 = (System_String_Fields)&".";
    SStack_d8._stringLength = 0x428414f;
    SStack_d8._firstChar = 0;
    SStack_d8._6_2_ = 0;
    il2cpp_runtime_helper_023445d0();
    g_data_057adc9f = '\x01';
  }
  pSStack_d0 = (System_String_o *)0x0;
  SVar11._stringLength = 0;
  SVar11._firstChar = 0;
  SVar11._6_2_ = 0;
  if (SVar21 != (System_String_Fields)0x0) {
    SStack_d8._stringLength = 0x428417a;
    SStack_d8._firstChar = 0;
    SStack_d8._6_2_ = 0;
    SVar11 = (System_String_Fields)
             (**(code **)(*(long *)SVar21 + 0x1b8))(SVar21,*(undefined8 *)(*(long *)SVar21 + 0x1c0));
    SVar22._stringLength = 5;
    SVar22._firstChar = 0;
    SVar22._6_2_ = 0;
    SStack_d8._stringLength = 0x4284191;
    SStack_d8._firstChar = 0;
    SStack_d8._6_2_ = 0;
    __this_01 = TypeInfo_string;
    SVar12 = (System_String_Fields)il2cpp_runtime_helper_022b2a40();
    SVar13 = "//member[@name=\"P:";
    if (SVar12 != (System_String_Fields)0x0) {
      SVar21 = SVar12;
      if (*(int *)((long)SVar12 + 0x18) != 0) {
        __this_01 = (System_String_Fields)((long)SVar12 + 0x20);
        *(System_String_Fields *)((long)SVar12 + 0x20) = "//member[@name=\"P:";
        SStack_d8._stringLength = 0x42841be;
        SStack_d8._firstChar = 0;
        SStack_d8._6_2_ = 0;
        il2cpp_runtime_helper_022b4080();
        SVar22 = SVar13;
        if (SVar15 == (System_String_Fields)0x0) goto label_042842b4;
        SVar22 = *(System_String_Fields *)(*(long *)SVar15 + 0x2e0);
        SStack_d8._stringLength = 0x42841db;
        SStack_d8._firstChar = 0;
        SStack_d8._6_2_ = 0;
        __this_01 = SVar15;
        SVar13 = (System_String_Fields)(**(code **)(*(long *)SVar15 + 0x2d8))();
        if (1 < *(uint *)((long)SVar12 + 0x18)) {
          __this_01 = (System_String_Fields)((long)SVar12 + 0x28);
          *(System_String_Fields *)((long)SVar12 + 0x28) = SVar13;
          SStack_d8._stringLength = 0x42841f5;
          SStack_d8._firstChar = 0;
          SStack_d8._6_2_ = 0;
          il2cpp_runtime_helper_022b4080();
          SVar23 = ".";
          SVar22 = SVar13;
          if (2 < *(uint *)((long)SVar12 + 0x18)) {
            __this_01 = (System_String_Fields)((long)SVar12 + 0x30);
            *(System_String_Fields *)((long)SVar12 + 0x30) = ".";
            SStack_d8._stringLength = 0x4284216;
            SStack_d8._firstChar = 0;
            SStack_d8._6_2_ = 0;
            il2cpp_runtime_helper_022b4080();
            SVar22 = SVar23;
            if (3 < *(uint *)((long)SVar12 + 0x18)) {
              __this_01 = (System_String_Fields)((long)SVar12 + 0x38);
              *(System_String_Fields *)((long)SVar12 + 0x38) = SVar11;
              SStack_d8._stringLength = 0x4284230;
              SStack_d8._firstChar = 0;
              SStack_d8._6_2_ = 0;
              SVar22 = SVar11;
              il2cpp_runtime_helper_022b4080();
              if (4 < *(uint *)((long)SVar12 + 0x18)) {
                *(undefined8 *)((long)SVar12 + 0x40) = "\"]";
                SStack_d8._stringLength = 0x4284250;
                SStack_d8._firstChar = 0;
                SStack_d8._6_2_ = 0;
                il2cpp_runtime_helper_022b4080((long)SVar12 + 0x40);
                SVar22._stringLength = 0;
                SVar22._firstChar = 0;
                SVar22._6_2_ = 0;
                SStack_d8._stringLength = 0x428425a;
                SStack_d8._firstChar = 0;
                SStack_d8._6_2_ = 0;
                __this_01 = SVar12;
                xpath = System_String__Concat_3af7570((System_String_array *)SVar12,(MethodInfo *)0x0);
                if (SVar16 != (System_String_Fields)0x0) {
                  SStack_d8._stringLength = 0x428426c;
                  SStack_d8._firstChar = 0;
                  SStack_d8._6_2_ = 0;
                  pSVar14 = System_Xml_XmlNode__SelectSingleNode
                                      ((System_Xml_XmlNode_o *)SVar16,xpath,(MethodInfo *)0x0);
                  if (*(int *)(TypeInfo_XmlDocumentUtils + 0xe4) == 0) {
                    SStack_d8._stringLength = 0x4284287;
                    SStack_d8._firstChar = 0;
                    SStack_d8._6_2_ = 0;
                    il2cpp_runtime_helper_02337ed0();
                  }
                  SStack_d8._stringLength = 0x4284295;
                  SStack_d8._firstChar = 0;
                  SStack_d8._6_2_ = 0;
                  bVar7 = CustomLogic_Editor_XmlDocumentUtils__TryGetInnerText
                                    (pSVar14,(System_String_o *)method_00,&pSStack_d0,method_01);
                  if ((char)bVar7 != '\0') {
                    pSVar17 = pSStack_d0;
                  }
                  return (System_Collections_Generic_IEnumerable_KeyValuePair_string__string___o *)pSVar17;
                }
                goto label_042842b4;
              }
            }
          }
        }
      }
      SStack_d8._stringLength = 0x42842b4;
      SStack_d8._firstChar = 0;
      SStack_d8._6_2_ = 0;
      il2cpp_runtime_helper_022b2ca0();
    }
  }
label_042842b4:
  SStack_d8._stringLength = 0x42842b9;
  SStack_d8._firstChar = 0;
  SStack_d8._6_2_ = 0;
  auVar25 = il2cpp_runtime_helper_022b2c90();
  plVar20 = auVar25._8_8_;
  pSStack_108 = auVar25._0_8_;
  pMVar19 = method_01;
  SVar12 = SVar22;
  SVar13 = __this_01;
  SStack_100 = SVar21;
  SStack_f8 = SVar16;
  SStack_f0 = SVar15;
  pMStack_e8 = method_00;
  SStack_d8 = SVar11;
  if (g_data_057adca0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_XmlDocumentUtils);
    il2cpp_runtime_helper_023445d0(&"//member[@name=\"P:");
    il2cpp_runtime_helper_023445d0(&"\"]");
    SVar13 = (System_String_Fields)&".";
    il2cpp_runtime_helper_023445d0();
    g_data_057adca0 = '\x01';
  }
  pSStack_108 = (System_String_o *)0x0;
  if (plVar20 != (long *)0x0) {
    SVar11 = (System_String_Fields)(**(code **)(*plVar20 + 0x1b8))(plVar20,*(undefined8 *)(*plVar20 + 0x1c0));
    SVar12._stringLength = 5;
    SVar12._firstChar = 0;
    SVar12._6_2_ = 0;
    SVar13 = TypeInfo_string;
    SVar15 = (System_String_Fields)il2cpp_runtime_helper_022b2a40();
    SVar16 = "//member[@name=\"P:";
    if (SVar15 != (System_String_Fields)0x0) {
      if (*(int *)((long)SVar15 + 0x18) != 0) {
        SVar13 = (System_String_Fields)((long)SVar15 + 0x20);
        *(System_String_Fields *)((long)SVar15 + 0x20) = "//member[@name=\"P:";
        il2cpp_runtime_helper_022b4080();
        SVar12 = SVar16;
        if (SVar22 == (System_String_Fields)0x0) goto label_04284484;
        SVar12 = (*(System_String_o **)SVar22)[0x1e].fields;
        SVar16 = (System_String_Fields)(*(*(System_String_o **)SVar22)[0x1e].monitor)();
        SVar13 = SVar22;
        if (1 < *(uint *)((long)SVar15 + 0x18)) {
          SVar13 = (System_String_Fields)((long)SVar15 + 0x28);
          *(System_String_Fields *)((long)SVar15 + 0x28) = SVar16;
          il2cpp_runtime_helper_022b4080();
          SVar22 = ".";
          SVar12 = SVar16;
          if (2 < *(uint *)((long)SVar15 + 0x18)) {
            SVar13 = (System_String_Fields)((long)SVar15 + 0x30);
            *(System_String_Fields *)((long)SVar15 + 0x30) = ".";
            il2cpp_runtime_helper_022b4080();
            SVar12 = SVar22;
            if (3 < *(uint *)((long)SVar15 + 0x18)) {
              SVar13 = (System_String_Fields)((long)SVar15 + 0x38);
              *(System_String_Fields *)((long)SVar15 + 0x38) = SVar11;
              il2cpp_runtime_helper_022b4080();
              SVar12 = SVar11;
              if (4 < *(uint *)((long)SVar15 + 0x18)) {
                *(undefined8 *)((long)SVar15 + 0x40) = "\"]";
                il2cpp_runtime_helper_022b4080((long)SVar15 + 0x40);
                SVar12._stringLength = 0;
                SVar12._firstChar = 0;
                SVar12._6_2_ = 0;
                pSVar17 = System_String__Concat_3af7570((System_String_array *)SVar15,(MethodInfo *)0x0);
                SVar13 = SVar15;
                if (__this_01 != (System_String_Fields)0x0) {
                  pSVar14 = System_Xml_XmlNode__SelectSingleNode
                                      ((System_Xml_XmlNode_o *)__this_01,pSVar17,(MethodInfo *)0x0);
                  if (*(int *)(TypeInfo_XmlDocumentUtils + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  bVar7 = CustomLogic_Editor_XmlDocumentUtils__TryGetInnerText
                                    (pSVar14,(System_String_o *)method_01,&pSStack_108,pMVar19);
                  if ((char)bVar7 != '\0') {
                    pSVar24 = pSStack_108;
                  }
                  return (System_Collections_Generic_IEnumerable_KeyValuePair_string__string___o *)pSVar24;
                }
                goto label_04284484;
              }
            }
          }
        }
      }
      il2cpp_runtime_helper_022b2ca0();
    }
  }
label_04284484:
  il2cpp_runtime_helper_022b2c90();
  if (SVar13 != (System_String_Fields)0x0) {
    pSVar14 = System_Xml_XmlNode__SelectSingleNode
                        ((System_Xml_XmlNode_o *)SVar13,(System_String_o *)SVar12,(MethodInfo *)0x0);
    *extraout_RDX = (long)pSVar14;
    uVar18 = il2cpp_runtime_helper_022b4080(extraout_RDX,pSVar14);
    return (System_Collections_Generic_IEnumerable_KeyValuePair_string__string___o *)
           CONCAT71((int7)((ulong)uVar18 >> 8),*extraout_RDX != 0);
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adca2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_XmlDocumentUtils);
    il2cpp_runtime_helper_023445d0(&"UnityEngine.xml");
    il2cpp_runtime_helper_023445d0(&"Scripts.xml");
    il2cpp_runtime_helper_023445d0(&"UnityEngine.PhysicsModule.xml");
    il2cpp_runtime_helper_023445d0(&"UnityEditor.CoreModule.xml");
    il2cpp_runtime_helper_023445d0(&"Photon3Unity3D.xml");
    g_data_057adca2 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor(__this_00,MethodInfo_List_1_System_String);
  pIVar6 = "Scripts.xml";
  lVar5 = MethodInfo_Void_Add;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (__this_00->fields)._items;
    if (pSVar3 != (System_Object_array *)0x0) {
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        pSVar3->m_Items[(int)uVar2] = pIVar6;
        il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  (__this_00,pIVar6,*(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70)
                  );
      }
      pIVar6 = "UnityEngine.xml";
      lVar5 = MethodInfo_Void_Add;
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar3 = (__this_00->fields)._items;
      if (pSVar3 != (System_Object_array *)0x0) {
        uVar2 = (__this_00->fields)._size;
        if (uVar2 < (uint)pSVar3->max_length) {
          (__this_00->fields)._size = uVar2 + 1;
          pSVar3->m_Items[(int)uVar2] = pIVar6;
          il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (__this_00,pIVar6,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        }
        pIVar6 = "UnityEngine.PhysicsModule.xml";
        lVar5 = MethodInfo_Void_Add;
        piVar1 = &(__this_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar3 = (__this_00->fields)._items;
        if (pSVar3 != (System_Object_array *)0x0) {
          uVar2 = (__this_00->fields)._size;
          if (uVar2 < (uint)pSVar3->max_length) {
            (__this_00->fields)._size = uVar2 + 1;
            pSVar3->m_Items[(int)uVar2] = pIVar6;
            il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this_00,pIVar6,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          }
          pIVar6 = "UnityEditor.CoreModule.xml";
          lVar5 = MethodInfo_Void_Add;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar3 = (__this_00->fields)._items;
          if (pSVar3 != (System_Object_array *)0x0) {
            uVar2 = (__this_00->fields)._size;
            if (uVar2 < (uint)pSVar3->max_length) {
              (__this_00->fields)._size = uVar2 + 1;
              pSVar3->m_Items[(int)uVar2] = pIVar6;
              il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        (__this_00,pIVar6,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
            }
            pIVar6 = "Photon3Unity3D.xml";
            lVar5 = MethodInfo_Void_Add;
            piVar1 = &(__this_00->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar3 = (__this_00->fields)._items;
            if (pSVar3 != (System_Object_array *)0x0) {
              uVar2 = (__this_00->fields)._size;
              if (uVar2 < (uint)pSVar3->max_length) {
                (__this_00->fields)._size = uVar2 + 1;
                pSVar3->m_Items[(int)uVar2] = pIVar6;
                il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          (__this_00,pIVar6,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
              }
              **(undefined8 **)(TypeInfo_XmlDocumentUtils + 0xb8) = __this_00;
              pSVar9 = (System_Collections_Generic_IEnumerable_KeyValuePair_string__string___o *)
                       il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_XmlDocumentUtils + 0xb8),__this_00);
              return pSVar9;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pcVar4 = (code *)swi(3);
  pSVar9 = (System_Collections_Generic_IEnumerable_KeyValuePair_string__string___o *)(*pcVar4)();
  return pSVar9;
}


// CustomLogic.Editor.XmlDocumentUtils$$GetParameterNodeText
// il2cpp: System_String_o* CustomLogic_Editor_XmlDocumentUtils__GetParameterNodeText (System_Xml_XmlDocument_o* xmlDocument, System_Type_o* type, System_Reflection_MethodInfo_o* methodInfo, System_Reflection_ParameterInfo_o* parameterInfo, System_String_o* defaultText, const MethodInfo* method);
// 0x4283e90

System_String_o *
CustomLogic_Editor_XmlDocumentUtils__GetParameterNodeText
          (System_Xml_XmlDocument_o *xmlDocument,System_Type_o *type,
          System_Reflection_MethodInfo_o *methodInfo,System_Reflection_ParameterInfo_o *parameterInfo,
          System_String_o *defaultText,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  code *pcVar4;
  long lVar5;
  Il2CppObject *pIVar6;
  bool_conflict bVar7;
  System_Xml_XmlDocument_o *__this;
  System_Collections_Generic_IEnumerable_KeyValuePair_string__string___o *pSVar8;
  System_Func_TSource__bool__o *pSVar9;
  System_String_Fields SVar10;
  System_String_Fields SVar11;
  System_String_Fields SVar12;
  System_String_o *pSVar13;
  System_Xml_XmlNode_o *pSVar14;
  System_String_Fields SVar15;
  System_String_Fields SVar16;
  undefined8 uVar17;
  System_Collections_Generic_List_object__o *__this_00;
  MethodInfo *pMVar18;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_Reflection_ConstructorInfo_o *ctorInfo;
  long *plVar19;
  long *extraout_RDX;
  System_String_Fields SVar20;
  System_Type_o *type_00;
  System_String_Fields SVar21;
  System_String_Fields SVar22;
  System_Xml_XmlDocument_o *xmlDocument_00;
  System_String_Fields __this_01;
  System_String_o *pSVar23;
  System_String_o *pSVar24;
  System_Collections_Generic_KeyValuePair_object__object__o SVar25;
  undefined1 auVar26 [16];
  System_String_o *pSStack_e0;
  System_String_Fields SStack_d8;
  System_String_Fields SStack_d0;
  System_String_Fields SStack_c8;
  MethodInfo *pMStack_c0;
  System_String_o *pSStack_b8;
  System_String_Fields SStack_b0;
  System_String_o *pSStack_a8;
  MethodInfo *pMStack_a0;
  System_Xml_XmlDocument_o *pSStack_98;
  System_String_o *pSStack_90;
  System_Reflection_ConstructorInfo_o *pSStack_88;
  System_Type_o *pSStack_80;
  System_String_Fields SStack_78;
  undefined8 uStack_70;
  System_Reflection_ParameterInfo_o *pSStack_68;
  System_Xml_XmlDocument_o *pSStack_60;
  System_String_o *pSStack_58;
  System_Reflection_MethodInfo_o *pSStack_50;
  System_Type_o *pSStack_48;
  System_Xml_XmlDocument_o *pSStack_40;
  
  pMVar18 = (MethodInfo *)parameterInfo;
  pSVar13 = defaultText;
  if (g_data_057adc9d == '\0') {
    pSStack_40 = (System_Xml_XmlDocument_o *)0x4283ebf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_String_System_String_FirstOrDefaul);
    pSStack_40 = (System_Xml_XmlDocument_o *)0x4283ecb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_KeyValuePair_string_string_bool);
    pSStack_40 = (System_Xml_XmlDocument_o *)0x4283ed7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    pSStack_40 = (System_Xml_XmlDocument_o *)0x4283ee3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_GetParameterNodeText_b__0);
    pSStack_40 = (System_Xml_XmlDocument_o *)0x4283eef;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass11_0);
    pSStack_40 = (System_Xml_XmlDocument_o *)0x4283efb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_XmlDocumentUtils);
    g_data_057adc9d = '\x01';
  }
  pSStack_40 = (System_Xml_XmlDocument_o *)0x4283f11;
  __this = (System_Xml_XmlDocument_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass11_0);
  type_00 = (System_Type_o *)0x0;
  pSStack_40 = (System_Xml_XmlDocument_o *)0x4283f1e;
  xmlDocument_00 = __this;
  CustomLogic_Editor_XmlDocumentUtils___c__DisplayClass11_0___ctor
            ((CustomLogic_Editor_XmlDocumentUtils___c__DisplayClass11_0_o *)__this,(MethodInfo *)0x0);
  if (__this != (System_Xml_XmlDocument_o *)0x0) {
    (__this->fields).parentNode = (System_Xml_XmlNode_o *)parameterInfo;
    pSStack_40 = (System_Xml_XmlDocument_o *)0x4283f3a;
    il2cpp_runtime_helper_022b4080(&__this->fields,parameterInfo);
    if (*(int *)(TypeInfo_XmlDocumentUtils + 0xe4) == 0) {
      pSStack_40 = (System_Xml_XmlDocument_o *)0x4283f52;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_40 = (System_Xml_XmlDocument_o *)0x4283f60;
    pSVar8 = CustomLogic_Editor_XmlDocumentUtils__GetMethodParamTexts(xmlDocument,type,methodInfo,pMVar18);
    pSStack_40 = (System_Xml_XmlDocument_o *)0x4283f72;
    pSVar9 = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_KeyValuePair_string_string_bool);
    pSStack_40 = (System_Xml_XmlDocument_o *)0x4283f8c;
    System_Func_KeyValuePair_object__object___bool____ctor();
    pSStack_40 = (System_Xml_XmlDocument_o *)0x4283fa1;
    SVar25 = System_Linq_Enumerable__FirstOrDefault_KeyValuePair_object__object__
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar8,pSVar9,MethodInfo_KeyValuePair_2_System_String_System_String_FirstOrDefaul);
    if ((System_String_o *)SVar25.fields.value != (System_String_o *)0x0) {
      defaultText = (System_String_o *)SVar25.fields.value;
    }
    return defaultText;
  }
  pSStack_40 = (System_Xml_XmlDocument_o *)0x4283fbf;
  auVar26 = il2cpp_runtime_helper_022b2c90();
  ctorInfo = auVar26._8_8_;
  uStack_70 = auVar26._0_8_;
  method_00 = pMVar18;
  pSVar23 = pSVar13;
  pSStack_68 = parameterInfo;
  pSStack_60 = xmlDocument;
  pSStack_58 = defaultText;
  pSStack_50 = methodInfo;
  pSStack_48 = type;
  pSStack_40 = __this;
  if (g_data_057adc9e == '\0') {
    SStack_78._stringLength = 0x4283fef;
    SStack_78._firstChar = 0;
    SStack_78._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_String_System_String_FirstOrDefaul);
    SStack_78._stringLength = 0x4283ffb;
    SStack_78._firstChar = 0;
    SStack_78._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_KeyValuePair_string_string_bool);
    SStack_78._stringLength = 0x4284007;
    SStack_78._firstChar = 0;
    SStack_78._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    SStack_78._stringLength = 0x4284013;
    SStack_78._firstChar = 0;
    SStack_78._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_GetParameterNodeText_b__0);
    SStack_78._stringLength = 0x428401f;
    SStack_78._firstChar = 0;
    SStack_78._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass12_0);
    SStack_78._stringLength = 0x428402b;
    SStack_78._firstChar = 0;
    SStack_78._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_XmlDocumentUtils);
    g_data_057adc9e = '\x01';
  }
  SStack_78._stringLength = 0x4284041;
  SStack_78._firstChar = 0;
  SStack_78._6_2_ = 0;
  SVar10 = (System_String_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass12_0);
  SVar15._stringLength = 0;
  SVar15._firstChar = 0;
  SVar15._6_2_ = 0;
  SStack_78._stringLength = 0x428404e;
  SStack_78._firstChar = 0;
  SStack_78._6_2_ = 0;
  SVar16 = SVar10;
  CustomLogic_Editor_XmlDocumentUtils___c__DisplayClass12_0___ctor
            ((CustomLogic_Editor_XmlDocumentUtils___c__DisplayClass12_0_o *)SVar10,(MethodInfo *)0x0);
  if (SVar10 != (System_String_Fields)0x0) {
    ((CustomLogic_Editor_XmlDocumentUtils___c__DisplayClass12_0_Fields *)((long)SVar10 + 0x10))->parameterInfo
         = (System_Reflection_ParameterInfo_o *)pMVar18;
    SStack_78._stringLength = 0x428406a;
    SStack_78._firstChar = 0;
    SStack_78._6_2_ = 0;
    il2cpp_runtime_helper_022b4080((CustomLogic_Editor_XmlDocumentUtils___c__DisplayClass12_0_Fields *)
                       ((long)SVar10 + 0x10),pMVar18);
    if (*(int *)(TypeInfo_XmlDocumentUtils + 0xe4) == 0) {
      SStack_78._stringLength = 0x4284082;
      SStack_78._firstChar = 0;
      SStack_78._6_2_ = 0;
      il2cpp_runtime_helper_02337ed0();
    }
    SStack_78._stringLength = 0x4284090;
    SStack_78._firstChar = 0;
    SStack_78._6_2_ = 0;
    pSVar8 = CustomLogic_Editor_XmlDocumentUtils__GetConstructorParamTexts
                       (xmlDocument_00,type_00,ctorInfo,method_00);
    SStack_78._stringLength = 0x42840a2;
    SStack_78._firstChar = 0;
    SStack_78._6_2_ = 0;
    pSVar9 = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_KeyValuePair_string_string_bool);
    SStack_78._stringLength = 0x42840bc;
    SStack_78._firstChar = 0;
    SStack_78._6_2_ = 0;
    System_Func_KeyValuePair_object__object___bool____ctor();
    SStack_78._stringLength = 0x42840d1;
    SStack_78._firstChar = 0;
    SStack_78._6_2_ = 0;
    SVar25 = System_Linq_Enumerable__FirstOrDefault_KeyValuePair_object__object__
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar8,pSVar9,MethodInfo_KeyValuePair_2_System_String_System_String_FirstOrDefaul);
    if ((System_String_o *)SVar25.fields.value != (System_String_o *)0x0) {
      pSVar13 = (System_String_o *)SVar25.fields.value;
    }
    return pSVar13;
  }
  SStack_78._stringLength = 0x42840ef;
  SStack_78._firstChar = 0;
  SStack_78._6_2_ = 0;
  auVar26 = il2cpp_runtime_helper_022b2c90();
  SVar20 = auVar26._8_8_;
  pSStack_a8 = auVar26._0_8_;
  method_01 = method_00;
  SVar21 = SVar15;
  __this_01 = SVar16;
  pSVar24 = pSVar23;
  pMStack_a0 = pMVar18;
  pSStack_98 = xmlDocument_00;
  pSStack_90 = pSVar13;
  pSStack_88 = ctorInfo;
  pSStack_80 = type_00;
  SStack_78 = SVar10;
  if (g_data_057adc9f == '\0') {
    SStack_b0._stringLength = 0x428411f;
    SStack_b0._firstChar = 0;
    SStack_b0._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    SStack_b0._stringLength = 0x428412b;
    SStack_b0._firstChar = 0;
    SStack_b0._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_XmlDocumentUtils);
    SStack_b0._stringLength = 0x4284137;
    SStack_b0._firstChar = 0;
    SStack_b0._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&"//member[@name=\"P:");
    SStack_b0._stringLength = 0x4284143;
    SStack_b0._firstChar = 0;
    SStack_b0._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&"\"]");
    __this_01 = (System_String_Fields)&".";
    SStack_b0._stringLength = 0x428414f;
    SStack_b0._firstChar = 0;
    SStack_b0._6_2_ = 0;
    il2cpp_runtime_helper_023445d0();
    g_data_057adc9f = '\x01';
  }
  pSStack_a8 = (System_String_o *)0x0;
  SVar10._stringLength = 0;
  SVar10._firstChar = 0;
  SVar10._6_2_ = 0;
  if (SVar20 != (System_String_Fields)0x0) {
    SStack_b0._stringLength = 0x428417a;
    SStack_b0._firstChar = 0;
    SStack_b0._6_2_ = 0;
    SVar10 = (System_String_Fields)
             (**(code **)(*(long *)SVar20 + 0x1b8))(SVar20,*(undefined8 *)(*(long *)SVar20 + 0x1c0));
    SVar21._stringLength = 5;
    SVar21._firstChar = 0;
    SVar21._6_2_ = 0;
    SStack_b0._stringLength = 0x4284191;
    SStack_b0._firstChar = 0;
    SStack_b0._6_2_ = 0;
    __this_01 = TypeInfo_string;
    SVar11 = (System_String_Fields)il2cpp_runtime_helper_022b2a40();
    SVar12 = "//member[@name=\"P:";
    if (SVar11 != (System_String_Fields)0x0) {
      SVar20 = SVar11;
      if (*(int *)((long)SVar11 + 0x18) != 0) {
        __this_01 = (System_String_Fields)((long)SVar11 + 0x20);
        *(System_String_Fields *)((long)SVar11 + 0x20) = "//member[@name=\"P:";
        SStack_b0._stringLength = 0x42841be;
        SStack_b0._firstChar = 0;
        SStack_b0._6_2_ = 0;
        il2cpp_runtime_helper_022b4080();
        SVar21 = SVar12;
        if (SVar15 == (System_String_Fields)0x0) goto label_042842b4;
        SVar21 = *(System_String_Fields *)(*(long *)SVar15 + 0x2e0);
        SStack_b0._stringLength = 0x42841db;
        SStack_b0._firstChar = 0;
        SStack_b0._6_2_ = 0;
        __this_01 = SVar15;
        SVar12 = (System_String_Fields)(**(code **)(*(long *)SVar15 + 0x2d8))();
        if (1 < *(uint *)((long)SVar11 + 0x18)) {
          __this_01 = (System_String_Fields)((long)SVar11 + 0x28);
          *(System_String_Fields *)((long)SVar11 + 0x28) = SVar12;
          SStack_b0._stringLength = 0x42841f5;
          SStack_b0._firstChar = 0;
          SStack_b0._6_2_ = 0;
          il2cpp_runtime_helper_022b4080();
          SVar22 = ".";
          SVar21 = SVar12;
          if (2 < *(uint *)((long)SVar11 + 0x18)) {
            __this_01 = (System_String_Fields)((long)SVar11 + 0x30);
            *(System_String_Fields *)((long)SVar11 + 0x30) = ".";
            SStack_b0._stringLength = 0x4284216;
            SStack_b0._firstChar = 0;
            SStack_b0._6_2_ = 0;
            il2cpp_runtime_helper_022b4080();
            SVar21 = SVar22;
            if (3 < *(uint *)((long)SVar11 + 0x18)) {
              __this_01 = (System_String_Fields)((long)SVar11 + 0x38);
              *(System_String_Fields *)((long)SVar11 + 0x38) = SVar10;
              SStack_b0._stringLength = 0x4284230;
              SStack_b0._firstChar = 0;
              SStack_b0._6_2_ = 0;
              SVar21 = SVar10;
              il2cpp_runtime_helper_022b4080();
              if (4 < *(uint *)((long)SVar11 + 0x18)) {
                *(undefined8 *)((long)SVar11 + 0x40) = "\"]";
                SStack_b0._stringLength = 0x4284250;
                SStack_b0._firstChar = 0;
                SStack_b0._6_2_ = 0;
                il2cpp_runtime_helper_022b4080((long)SVar11 + 0x40);
                SVar21._stringLength = 0;
                SVar21._firstChar = 0;
                SVar21._6_2_ = 0;
                SStack_b0._stringLength = 0x428425a;
                SStack_b0._firstChar = 0;
                SStack_b0._6_2_ = 0;
                __this_01 = SVar11;
                pSVar13 = System_String__Concat_3af7570((System_String_array *)SVar11,(MethodInfo *)0x0);
                if (SVar16 != (System_String_Fields)0x0) {
                  SStack_b0._stringLength = 0x428426c;
                  SStack_b0._firstChar = 0;
                  SStack_b0._6_2_ = 0;
                  pSVar14 = System_Xml_XmlNode__SelectSingleNode
                                      ((System_Xml_XmlNode_o *)SVar16,pSVar13,(MethodInfo *)0x0);
                  if (*(int *)(TypeInfo_XmlDocumentUtils + 0xe4) == 0) {
                    SStack_b0._stringLength = 0x4284287;
                    SStack_b0._firstChar = 0;
                    SStack_b0._6_2_ = 0;
                    il2cpp_runtime_helper_02337ed0();
                  }
                  SStack_b0._stringLength = 0x4284295;
                  SStack_b0._firstChar = 0;
                  SStack_b0._6_2_ = 0;
                  bVar7 = CustomLogic_Editor_XmlDocumentUtils__TryGetInnerText
                                    (pSVar14,(System_String_o *)method_00,&pSStack_a8,method_01);
                  if ((char)bVar7 != '\0') {
                    pSVar23 = pSStack_a8;
                  }
                  return pSVar23;
                }
                goto label_042842b4;
              }
            }
          }
        }
      }
      SStack_b0._stringLength = 0x42842b4;
      SStack_b0._firstChar = 0;
      SStack_b0._6_2_ = 0;
      il2cpp_runtime_helper_022b2ca0();
    }
  }
label_042842b4:
  SStack_b0._stringLength = 0x42842b9;
  SStack_b0._firstChar = 0;
  SStack_b0._6_2_ = 0;
  auVar26 = il2cpp_runtime_helper_022b2c90();
  plVar19 = auVar26._8_8_;
  pSStack_e0 = auVar26._0_8_;
  pMVar18 = method_01;
  SVar11 = SVar21;
  SVar12 = __this_01;
  SStack_d8 = SVar20;
  SStack_d0 = SVar16;
  SStack_c8 = SVar15;
  pMStack_c0 = method_00;
  pSStack_b8 = pSVar23;
  SStack_b0 = SVar10;
  if (g_data_057adca0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_XmlDocumentUtils);
    il2cpp_runtime_helper_023445d0(&"//member[@name=\"P:");
    il2cpp_runtime_helper_023445d0(&"\"]");
    SVar12 = (System_String_Fields)&".";
    il2cpp_runtime_helper_023445d0();
    g_data_057adca0 = '\x01';
  }
  pSStack_e0 = (System_String_o *)0x0;
  if (plVar19 != (long *)0x0) {
    SVar10 = (System_String_Fields)(**(code **)(*plVar19 + 0x1b8))(plVar19,*(undefined8 *)(*plVar19 + 0x1c0));
    SVar11._stringLength = 5;
    SVar11._firstChar = 0;
    SVar11._6_2_ = 0;
    SVar12 = TypeInfo_string;
    SVar15 = (System_String_Fields)il2cpp_runtime_helper_022b2a40();
    SVar16 = "//member[@name=\"P:";
    if (SVar15 != (System_String_Fields)0x0) {
      if (*(int *)((long)SVar15 + 0x18) != 0) {
        SVar12 = (System_String_Fields)((long)SVar15 + 0x20);
        *(System_String_Fields *)((long)SVar15 + 0x20) = "//member[@name=\"P:";
        il2cpp_runtime_helper_022b4080();
        SVar11 = SVar16;
        if (SVar21 == (System_String_Fields)0x0) goto label_04284484;
        SVar11 = (*(System_String_o **)SVar21)[0x1e].fields;
        SVar16 = (System_String_Fields)(*(*(System_String_o **)SVar21)[0x1e].monitor)();
        SVar12 = SVar21;
        if (1 < *(uint *)((long)SVar15 + 0x18)) {
          SVar12 = (System_String_Fields)((long)SVar15 + 0x28);
          *(System_String_Fields *)((long)SVar15 + 0x28) = SVar16;
          il2cpp_runtime_helper_022b4080();
          SVar21 = ".";
          SVar11 = SVar16;
          if (2 < *(uint *)((long)SVar15 + 0x18)) {
            SVar12 = (System_String_Fields)((long)SVar15 + 0x30);
            *(System_String_Fields *)((long)SVar15 + 0x30) = ".";
            il2cpp_runtime_helper_022b4080();
            SVar11 = SVar21;
            if (3 < *(uint *)((long)SVar15 + 0x18)) {
              SVar12 = (System_String_Fields)((long)SVar15 + 0x38);
              *(System_String_Fields *)((long)SVar15 + 0x38) = SVar10;
              il2cpp_runtime_helper_022b4080();
              SVar11 = SVar10;
              if (4 < *(uint *)((long)SVar15 + 0x18)) {
                *(undefined8 *)((long)SVar15 + 0x40) = "\"]";
                il2cpp_runtime_helper_022b4080((long)SVar15 + 0x40);
                SVar11._stringLength = 0;
                SVar11._firstChar = 0;
                SVar11._6_2_ = 0;
                pSVar13 = System_String__Concat_3af7570((System_String_array *)SVar15,(MethodInfo *)0x0);
                SVar12 = SVar15;
                if (__this_01 != (System_String_Fields)0x0) {
                  pSVar14 = System_Xml_XmlNode__SelectSingleNode
                                      ((System_Xml_XmlNode_o *)__this_01,pSVar13,(MethodInfo *)0x0);
                  if (*(int *)(TypeInfo_XmlDocumentUtils + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  bVar7 = CustomLogic_Editor_XmlDocumentUtils__TryGetInnerText
                                    (pSVar14,(System_String_o *)method_01,&pSStack_e0,pMVar18);
                  if ((char)bVar7 != '\0') {
                    pSVar24 = pSStack_e0;
                  }
                  return pSVar24;
                }
                goto label_04284484;
              }
            }
          }
        }
      }
      il2cpp_runtime_helper_022b2ca0();
    }
  }
label_04284484:
  il2cpp_runtime_helper_022b2c90();
  if (SVar12 != (System_String_Fields)0x0) {
    pSVar14 = System_Xml_XmlNode__SelectSingleNode
                        ((System_Xml_XmlNode_o *)SVar12,(System_String_o *)SVar11,(MethodInfo *)0x0);
    *extraout_RDX = (long)pSVar14;
    uVar17 = il2cpp_runtime_helper_022b4080(extraout_RDX,pSVar14);
    return (System_String_o *)CONCAT71((int7)((ulong)uVar17 >> 8),*extraout_RDX != 0);
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adca2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_XmlDocumentUtils);
    il2cpp_runtime_helper_023445d0(&"UnityEngine.xml");
    il2cpp_runtime_helper_023445d0(&"Scripts.xml");
    il2cpp_runtime_helper_023445d0(&"UnityEngine.PhysicsModule.xml");
    il2cpp_runtime_helper_023445d0(&"UnityEditor.CoreModule.xml");
    il2cpp_runtime_helper_023445d0(&"Photon3Unity3D.xml");
    g_data_057adca2 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor(__this_00,MethodInfo_List_1_System_String);
  pIVar6 = "Scripts.xml";
  lVar5 = MethodInfo_Void_Add;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (__this_00->fields)._items;
    if (pSVar3 != (System_Object_array *)0x0) {
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        pSVar3->m_Items[(int)uVar2] = pIVar6;
        il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  (__this_00,pIVar6,*(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70)
                  );
      }
      pIVar6 = "UnityEngine.xml";
      lVar5 = MethodInfo_Void_Add;
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar3 = (__this_00->fields)._items;
      if (pSVar3 != (System_Object_array *)0x0) {
        uVar2 = (__this_00->fields)._size;
        if (uVar2 < (uint)pSVar3->max_length) {
          (__this_00->fields)._size = uVar2 + 1;
          pSVar3->m_Items[(int)uVar2] = pIVar6;
          il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (__this_00,pIVar6,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        }
        pIVar6 = "UnityEngine.PhysicsModule.xml";
        lVar5 = MethodInfo_Void_Add;
        piVar1 = &(__this_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar3 = (__this_00->fields)._items;
        if (pSVar3 != (System_Object_array *)0x0) {
          uVar2 = (__this_00->fields)._size;
          if (uVar2 < (uint)pSVar3->max_length) {
            (__this_00->fields)._size = uVar2 + 1;
            pSVar3->m_Items[(int)uVar2] = pIVar6;
            il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this_00,pIVar6,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          }
          pIVar6 = "UnityEditor.CoreModule.xml";
          lVar5 = MethodInfo_Void_Add;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar3 = (__this_00->fields)._items;
          if (pSVar3 != (System_Object_array *)0x0) {
            uVar2 = (__this_00->fields)._size;
            if (uVar2 < (uint)pSVar3->max_length) {
              (__this_00->fields)._size = uVar2 + 1;
              pSVar3->m_Items[(int)uVar2] = pIVar6;
              il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        (__this_00,pIVar6,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
            }
            pIVar6 = "Photon3Unity3D.xml";
            lVar5 = MethodInfo_Void_Add;
            piVar1 = &(__this_00->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar3 = (__this_00->fields)._items;
            if (pSVar3 != (System_Object_array *)0x0) {
              uVar2 = (__this_00->fields)._size;
              if (uVar2 < (uint)pSVar3->max_length) {
                (__this_00->fields)._size = uVar2 + 1;
                pSVar3->m_Items[(int)uVar2] = pIVar6;
                il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          (__this_00,pIVar6,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
              }
              **(undefined8 **)(TypeInfo_XmlDocumentUtils + 0xb8) = __this_00;
              pSVar13 = (System_String_o *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_XmlDocumentUtils + 0xb8),__this_00);
              return pSVar13;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pcVar4 = (code *)swi(3);
  pSVar13 = (System_String_o *)(*pcVar4)();
  return pSVar13;
}


// CustomLogic.Editor.XmlDocumentUtils$$GetParameterNodeText
// il2cpp: System_String_o* CustomLogic_Editor_XmlDocumentUtils__GetParameterNodeText (System_Xml_XmlDocument_o* xmlDocument, System_Type_o* type, System_Reflection_ConstructorInfo_o* ctorInfo, System_Reflection_ParameterInfo_o* parameterInfo, System_String_o* defaultText, const MethodInfo* method);
// 0x4283fc0

System_String_o *
CustomLogic_Editor_XmlDocumentUtils__GetParameterNodeText_4183fc0
          (System_Xml_XmlDocument_o *xmlDocument,System_Type_o *type,
          System_Reflection_ConstructorInfo_o *ctorInfo,System_Reflection_ParameterInfo_o *parameterInfo,
          System_String_o *defaultText,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  code *pcVar4;
  long lVar5;
  Il2CppObject *pIVar6;
  bool_conflict bVar7;
  System_String_Fields SVar8;
  System_Collections_Generic_IEnumerable_KeyValuePair_string__string___o *source;
  System_Func_TSource__bool__o *predicate;
  System_String_Fields SVar9;
  System_String_Fields SVar10;
  System_String_o *xpath;
  System_Xml_XmlNode_o *pSVar11;
  System_String_Fields SVar12;
  System_String_Fields SVar13;
  System_String_o *pSVar14;
  undefined8 uVar15;
  System_Collections_Generic_List_object__o *__this;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  long *plVar16;
  long *extraout_RDX;
  System_String_Fields SVar17;
  System_String_Fields SVar18;
  System_String_Fields SVar19;
  System_String_Fields __this_00;
  System_String_o *pSVar20;
  System_Collections_Generic_KeyValuePair_object__object__o SVar21;
  undefined1 auVar22 [16];
  System_String_o *pSStack_a8;
  System_String_Fields SStack_a0;
  System_String_Fields SStack_98;
  System_String_Fields SStack_90;
  MethodInfo *pMStack_88;
  System_String_o *pSStack_80;
  System_String_Fields SStack_78;
  System_String_o *pSStack_70;
  System_Reflection_ParameterInfo_o *pSStack_68;
  System_Xml_XmlDocument_o *pSStack_60;
  System_String_o *pSStack_58;
  System_Reflection_ConstructorInfo_o *pSStack_50;
  System_Type_o *pSStack_48;
  System_String_Fields SStack_40;
  
  method_00 = (MethodInfo *)parameterInfo;
  pSVar14 = defaultText;
  if (g_data_057adc9e == '\0') {
    SStack_40._stringLength = 0x4283fef;
    SStack_40._firstChar = 0;
    SStack_40._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_String_System_String_FirstOrDefaul);
    SStack_40._stringLength = 0x4283ffb;
    SStack_40._firstChar = 0;
    SStack_40._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_KeyValuePair_string_string_bool);
    SStack_40._stringLength = 0x4284007;
    SStack_40._firstChar = 0;
    SStack_40._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    SStack_40._stringLength = 0x4284013;
    SStack_40._firstChar = 0;
    SStack_40._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_GetParameterNodeText_b__0);
    SStack_40._stringLength = 0x428401f;
    SStack_40._firstChar = 0;
    SStack_40._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass12_0);
    SStack_40._stringLength = 0x428402b;
    SStack_40._firstChar = 0;
    SStack_40._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_XmlDocumentUtils);
    g_data_057adc9e = '\x01';
  }
  SStack_40._stringLength = 0x4284041;
  SStack_40._firstChar = 0;
  SStack_40._6_2_ = 0;
  SVar8 = (System_String_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass12_0);
  SVar12._stringLength = 0;
  SVar12._firstChar = 0;
  SVar12._6_2_ = 0;
  SStack_40._stringLength = 0x428404e;
  SStack_40._firstChar = 0;
  SStack_40._6_2_ = 0;
  SVar13 = SVar8;
  CustomLogic_Editor_XmlDocumentUtils___c__DisplayClass12_0___ctor
            ((CustomLogic_Editor_XmlDocumentUtils___c__DisplayClass12_0_o *)SVar8,(MethodInfo *)0x0);
  if (SVar8 != (System_String_Fields)0x0) {
    ((CustomLogic_Editor_XmlDocumentUtils___c__DisplayClass12_0_Fields *)((long)SVar8 + 0x10))->parameterInfo
         = parameterInfo;
    SStack_40._stringLength = 0x428406a;
    SStack_40._firstChar = 0;
    SStack_40._6_2_ = 0;
    il2cpp_runtime_helper_022b4080((CustomLogic_Editor_XmlDocumentUtils___c__DisplayClass12_0_Fields *)
                       ((long)SVar8 + 0x10),parameterInfo);
    if (*(int *)(TypeInfo_XmlDocumentUtils + 0xe4) == 0) {
      SStack_40._stringLength = 0x4284082;
      SStack_40._firstChar = 0;
      SStack_40._6_2_ = 0;
      il2cpp_runtime_helper_02337ed0();
    }
    SStack_40._stringLength = 0x4284090;
    SStack_40._firstChar = 0;
    SStack_40._6_2_ = 0;
    source = CustomLogic_Editor_XmlDocumentUtils__GetConstructorParamTexts
                       (xmlDocument,type,ctorInfo,method_00);
    SStack_40._stringLength = 0x42840a2;
    SStack_40._firstChar = 0;
    SStack_40._6_2_ = 0;
    predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_KeyValuePair_string_string_bool);
    SStack_40._stringLength = 0x42840bc;
    SStack_40._firstChar = 0;
    SStack_40._6_2_ = 0;
    System_Func_KeyValuePair_object__object___bool____ctor();
    SStack_40._stringLength = 0x42840d1;
    SStack_40._firstChar = 0;
    SStack_40._6_2_ = 0;
    SVar21 = System_Linq_Enumerable__FirstOrDefault_KeyValuePair_object__object__
                       ((System_Collections_Generic_IEnumerable_TSource__o *)source,predicate,MethodInfo_KeyValuePair_2_System_String_System_String_FirstOrDefaul);
    if ((System_String_o *)SVar21.fields.value != (System_String_o *)0x0) {
      defaultText = (System_String_o *)SVar21.fields.value;
    }
    return defaultText;
  }
  SStack_40._stringLength = 0x42840ef;
  SStack_40._firstChar = 0;
  SStack_40._6_2_ = 0;
  auVar22 = il2cpp_runtime_helper_022b2c90();
  SVar17 = auVar22._8_8_;
  pSStack_70 = auVar22._0_8_;
  method_01 = method_00;
  SVar18 = SVar12;
  __this_00 = SVar13;
  pSVar20 = pSVar14;
  pSStack_68 = parameterInfo;
  pSStack_60 = xmlDocument;
  pSStack_58 = defaultText;
  pSStack_50 = ctorInfo;
  pSStack_48 = type;
  SStack_40 = SVar8;
  if (g_data_057adc9f == '\0') {
    SStack_78._stringLength = 0x428411f;
    SStack_78._firstChar = 0;
    SStack_78._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    SStack_78._stringLength = 0x428412b;
    SStack_78._firstChar = 0;
    SStack_78._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_XmlDocumentUtils);
    SStack_78._stringLength = 0x4284137;
    SStack_78._firstChar = 0;
    SStack_78._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&"//member[@name=\"P:");
    SStack_78._stringLength = 0x4284143;
    SStack_78._firstChar = 0;
    SStack_78._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&"\"]");
    __this_00 = (System_String_Fields)&".";
    SStack_78._stringLength = 0x428414f;
    SStack_78._firstChar = 0;
    SStack_78._6_2_ = 0;
    il2cpp_runtime_helper_023445d0();
    g_data_057adc9f = '\x01';
  }
  pSStack_70 = (System_String_o *)0x0;
  SVar8._stringLength = 0;
  SVar8._firstChar = 0;
  SVar8._6_2_ = 0;
  if (SVar17 != (System_String_Fields)0x0) {
    SStack_78._stringLength = 0x428417a;
    SStack_78._firstChar = 0;
    SStack_78._6_2_ = 0;
    SVar8 = (System_String_Fields)
            (**(code **)(*(long *)SVar17 + 0x1b8))(SVar17,*(undefined8 *)(*(long *)SVar17 + 0x1c0));
    SVar18._stringLength = 5;
    SVar18._firstChar = 0;
    SVar18._6_2_ = 0;
    SStack_78._stringLength = 0x4284191;
    SStack_78._firstChar = 0;
    SStack_78._6_2_ = 0;
    __this_00 = TypeInfo_string;
    SVar9 = (System_String_Fields)il2cpp_runtime_helper_022b2a40();
    SVar10 = "//member[@name=\"P:";
    if (SVar9 != (System_String_Fields)0x0) {
      SVar17 = SVar9;
      if (*(int *)((long)SVar9 + 0x18) != 0) {
        __this_00 = (System_String_Fields)((long)SVar9 + 0x20);
        *(System_String_Fields *)((long)SVar9 + 0x20) = "//member[@name=\"P:";
        SStack_78._stringLength = 0x42841be;
        SStack_78._firstChar = 0;
        SStack_78._6_2_ = 0;
        il2cpp_runtime_helper_022b4080();
        SVar18 = SVar10;
        if (SVar12 == (System_String_Fields)0x0) goto label_042842b4;
        SVar18 = *(System_String_Fields *)(*(long *)SVar12 + 0x2e0);
        SStack_78._stringLength = 0x42841db;
        SStack_78._firstChar = 0;
        SStack_78._6_2_ = 0;
        __this_00 = SVar12;
        SVar10 = (System_String_Fields)(**(code **)(*(long *)SVar12 + 0x2d8))();
        if (1 < *(uint *)((long)SVar9 + 0x18)) {
          __this_00 = (System_String_Fields)((long)SVar9 + 0x28);
          *(System_String_Fields *)((long)SVar9 + 0x28) = SVar10;
          SStack_78._stringLength = 0x42841f5;
          SStack_78._firstChar = 0;
          SStack_78._6_2_ = 0;
          il2cpp_runtime_helper_022b4080();
          SVar19 = ".";
          SVar18 = SVar10;
          if (2 < *(uint *)((long)SVar9 + 0x18)) {
            __this_00 = (System_String_Fields)((long)SVar9 + 0x30);
            *(System_String_Fields *)((long)SVar9 + 0x30) = ".";
            SStack_78._stringLength = 0x4284216;
            SStack_78._firstChar = 0;
            SStack_78._6_2_ = 0;
            il2cpp_runtime_helper_022b4080();
            SVar18 = SVar19;
            if (3 < *(uint *)((long)SVar9 + 0x18)) {
              __this_00 = (System_String_Fields)((long)SVar9 + 0x38);
              *(System_String_Fields *)((long)SVar9 + 0x38) = SVar8;
              SStack_78._stringLength = 0x4284230;
              SStack_78._firstChar = 0;
              SStack_78._6_2_ = 0;
              SVar18 = SVar8;
              il2cpp_runtime_helper_022b4080();
              if (4 < *(uint *)((long)SVar9 + 0x18)) {
                *(undefined8 *)((long)SVar9 + 0x40) = "\"]";
                SStack_78._stringLength = 0x4284250;
                SStack_78._firstChar = 0;
                SStack_78._6_2_ = 0;
                il2cpp_runtime_helper_022b4080((long)SVar9 + 0x40);
                SVar18._stringLength = 0;
                SVar18._firstChar = 0;
                SVar18._6_2_ = 0;
                SStack_78._stringLength = 0x428425a;
                SStack_78._firstChar = 0;
                SStack_78._6_2_ = 0;
                __this_00 = SVar9;
                xpath = System_String__Concat_3af7570((System_String_array *)SVar9,(MethodInfo *)0x0);
                if (SVar13 != (System_String_Fields)0x0) {
                  SStack_78._stringLength = 0x428426c;
                  SStack_78._firstChar = 0;
                  SStack_78._6_2_ = 0;
                  pSVar11 = System_Xml_XmlNode__SelectSingleNode
                                      ((System_Xml_XmlNode_o *)SVar13,xpath,(MethodInfo *)0x0);
                  if (*(int *)(TypeInfo_XmlDocumentUtils + 0xe4) == 0) {
                    SStack_78._stringLength = 0x4284287;
                    SStack_78._firstChar = 0;
                    SStack_78._6_2_ = 0;
                    il2cpp_runtime_helper_02337ed0();
                  }
                  SStack_78._stringLength = 0x4284295;
                  SStack_78._firstChar = 0;
                  SStack_78._6_2_ = 0;
                  bVar7 = CustomLogic_Editor_XmlDocumentUtils__TryGetInnerText
                                    (pSVar11,(System_String_o *)method_00,&pSStack_70,method_01);
                  if ((char)bVar7 != '\0') {
                    pSVar14 = pSStack_70;
                  }
                  return pSVar14;
                }
                goto label_042842b4;
              }
            }
          }
        }
      }
      SStack_78._stringLength = 0x42842b4;
      SStack_78._firstChar = 0;
      SStack_78._6_2_ = 0;
      il2cpp_runtime_helper_022b2ca0();
    }
  }
label_042842b4:
  SStack_78._stringLength = 0x42842b9;
  SStack_78._firstChar = 0;
  SStack_78._6_2_ = 0;
  auVar22 = il2cpp_runtime_helper_022b2c90();
  plVar16 = auVar22._8_8_;
  pSStack_a8 = auVar22._0_8_;
  method_02 = method_01;
  SVar9 = SVar18;
  SVar10 = __this_00;
  SStack_a0 = SVar17;
  SStack_98 = SVar13;
  SStack_90 = SVar12;
  pMStack_88 = method_00;
  pSStack_80 = pSVar14;
  SStack_78 = SVar8;
  if (g_data_057adca0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_XmlDocumentUtils);
    il2cpp_runtime_helper_023445d0(&"//member[@name=\"P:");
    il2cpp_runtime_helper_023445d0(&"\"]");
    SVar10 = (System_String_Fields)&".";
    il2cpp_runtime_helper_023445d0();
    g_data_057adca0 = '\x01';
  }
  pSStack_a8 = (System_String_o *)0x0;
  if (plVar16 != (long *)0x0) {
    SVar8 = (System_String_Fields)(**(code **)(*plVar16 + 0x1b8))(plVar16,*(undefined8 *)(*plVar16 + 0x1c0));
    SVar9._stringLength = 5;
    SVar9._firstChar = 0;
    SVar9._6_2_ = 0;
    SVar10 = TypeInfo_string;
    SVar12 = (System_String_Fields)il2cpp_runtime_helper_022b2a40();
    SVar13 = "//member[@name=\"P:";
    if (SVar12 != (System_String_Fields)0x0) {
      if (*(int *)((long)SVar12 + 0x18) != 0) {
        SVar10 = (System_String_Fields)((long)SVar12 + 0x20);
        *(System_String_Fields *)((long)SVar12 + 0x20) = "//member[@name=\"P:";
        il2cpp_runtime_helper_022b4080();
        SVar9 = SVar13;
        if (SVar18 == (System_String_Fields)0x0) goto label_04284484;
        SVar9 = (*(System_String_o **)SVar18)[0x1e].fields;
        SVar13 = (System_String_Fields)(*(*(System_String_o **)SVar18)[0x1e].monitor)();
        SVar10 = SVar18;
        if (1 < *(uint *)((long)SVar12 + 0x18)) {
          SVar10 = (System_String_Fields)((long)SVar12 + 0x28);
          *(System_String_Fields *)((long)SVar12 + 0x28) = SVar13;
          il2cpp_runtime_helper_022b4080();
          SVar18 = ".";
          SVar9 = SVar13;
          if (2 < *(uint *)((long)SVar12 + 0x18)) {
            SVar10 = (System_String_Fields)((long)SVar12 + 0x30);
            *(System_String_Fields *)((long)SVar12 + 0x30) = ".";
            il2cpp_runtime_helper_022b4080();
            SVar9 = SVar18;
            if (3 < *(uint *)((long)SVar12 + 0x18)) {
              SVar10 = (System_String_Fields)((long)SVar12 + 0x38);
              *(System_String_Fields *)((long)SVar12 + 0x38) = SVar8;
              il2cpp_runtime_helper_022b4080();
              SVar9 = SVar8;
              if (4 < *(uint *)((long)SVar12 + 0x18)) {
                *(undefined8 *)((long)SVar12 + 0x40) = "\"]";
                il2cpp_runtime_helper_022b4080((long)SVar12 + 0x40);
                SVar9._stringLength = 0;
                SVar9._firstChar = 0;
                SVar9._6_2_ = 0;
                pSVar14 = System_String__Concat_3af7570((System_String_array *)SVar12,(MethodInfo *)0x0);
                SVar10 = SVar12;
                if (__this_00 != (System_String_Fields)0x0) {
                  pSVar11 = System_Xml_XmlNode__SelectSingleNode
                                      ((System_Xml_XmlNode_o *)__this_00,pSVar14,(MethodInfo *)0x0);
                  if (*(int *)(TypeInfo_XmlDocumentUtils + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  bVar7 = CustomLogic_Editor_XmlDocumentUtils__TryGetInnerText
                                    (pSVar11,(System_String_o *)method_01,&pSStack_a8,method_02);
                  if ((char)bVar7 != '\0') {
                    pSVar20 = pSStack_a8;
                  }
                  return pSVar20;
                }
                goto label_04284484;
              }
            }
          }
        }
      }
      il2cpp_runtime_helper_022b2ca0();
    }
  }
label_04284484:
  il2cpp_runtime_helper_022b2c90();
  if (SVar10 != (System_String_Fields)0x0) {
    pSVar11 = System_Xml_XmlNode__SelectSingleNode
                        ((System_Xml_XmlNode_o *)SVar10,(System_String_o *)SVar9,(MethodInfo *)0x0);
    *extraout_RDX = (long)pSVar11;
    uVar15 = il2cpp_runtime_helper_022b4080(extraout_RDX,pSVar11);
    return (System_String_o *)CONCAT71((int7)((ulong)uVar15 >> 8),*extraout_RDX != 0);
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adca2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_XmlDocumentUtils);
    il2cpp_runtime_helper_023445d0(&"UnityEngine.xml");
    il2cpp_runtime_helper_023445d0(&"Scripts.xml");
    il2cpp_runtime_helper_023445d0(&"UnityEngine.PhysicsModule.xml");
    il2cpp_runtime_helper_023445d0(&"UnityEditor.CoreModule.xml");
    il2cpp_runtime_helper_023445d0(&"Photon3Unity3D.xml");
    g_data_057adca2 = '\x01';
  }
  __this = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor(__this,MethodInfo_List_1_System_String);
  pIVar6 = "Scripts.xml";
  lVar5 = MethodInfo_Void_Add;
  if (__this != (System_Collections_Generic_List_object__o *)0x0) {
    piVar1 = &(__this->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (__this->fields)._items;
    if (pSVar3 != (System_Object_array *)0x0) {
      uVar2 = (__this->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        (__this->fields)._size = uVar2 + 1;
        pSVar3->m_Items[(int)uVar2] = pIVar6;
        il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  (__this,pIVar6,*(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
      }
      pIVar6 = "UnityEngine.xml";
      lVar5 = MethodInfo_Void_Add;
      piVar1 = &(__this->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar3 = (__this->fields)._items;
      if (pSVar3 != (System_Object_array *)0x0) {
        uVar2 = (__this->fields)._size;
        if (uVar2 < (uint)pSVar3->max_length) {
          (__this->fields)._size = uVar2 + 1;
          pSVar3->m_Items[(int)uVar2] = pIVar6;
          il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (__this,pIVar6,*(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70))
          ;
        }
        pIVar6 = "UnityEngine.PhysicsModule.xml";
        lVar5 = MethodInfo_Void_Add;
        piVar1 = &(__this->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar3 = (__this->fields)._items;
        if (pSVar3 != (System_Object_array *)0x0) {
          uVar2 = (__this->fields)._size;
          if (uVar2 < (uint)pSVar3->max_length) {
            (__this->fields)._size = uVar2 + 1;
            pSVar3->m_Items[(int)uVar2] = pIVar6;
            il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this,pIVar6,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          }
          pIVar6 = "UnityEditor.CoreModule.xml";
          lVar5 = MethodInfo_Void_Add;
          piVar1 = &(__this->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar3 = (__this->fields)._items;
          if (pSVar3 != (System_Object_array *)0x0) {
            uVar2 = (__this->fields)._size;
            if (uVar2 < (uint)pSVar3->max_length) {
              (__this->fields)._size = uVar2 + 1;
              pSVar3->m_Items[(int)uVar2] = pIVar6;
              il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        (__this,pIVar6,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
            }
            pIVar6 = "Photon3Unity3D.xml";
            lVar5 = MethodInfo_Void_Add;
            piVar1 = &(__this->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar3 = (__this->fields)._items;
            if (pSVar3 != (System_Object_array *)0x0) {
              uVar2 = (__this->fields)._size;
              if (uVar2 < (uint)pSVar3->max_length) {
                (__this->fields)._size = uVar2 + 1;
                pSVar3->m_Items[(int)uVar2] = pIVar6;
                il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          (__this,pIVar6,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
              }
              **(undefined8 **)(TypeInfo_XmlDocumentUtils + 0xb8) = __this;
              pSVar14 = (System_String_o *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_XmlDocumentUtils + 0xb8),__this);
              return pSVar14;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pcVar4 = (code *)swi(3);
  pSVar14 = (System_String_o *)(*pcVar4)();
  return pSVar14;
}


// CustomLogic.Editor.XmlDocumentUtils$$GetPropertyNodeText
// il2cpp: System_String_o* CustomLogic_Editor_XmlDocumentUtils__GetPropertyNodeText (System_Xml_XmlDocument_o* xmlDocument, System_Type_o* type, System_Reflection_PropertyInfo_o* property, System_String_o* nodeType, System_String_o* defaultText, const MethodInfo* method);
// 0x42840f0

System_String_o *
CustomLogic_Editor_XmlDocumentUtils__GetPropertyNodeText
          (System_Xml_XmlDocument_o *xmlDocument,System_Type_o *type,
          System_Reflection_PropertyInfo_o *property,System_String_o *nodeType,System_String_o *defaultText,
          MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  code *pcVar4;
  long lVar5;
  Il2CppObject *pIVar6;
  bool_conflict bVar7;
  System_String_Fields SVar8;
  System_String_Fields SVar9;
  System_String_o *pSVar10;
  System_Xml_XmlNode_o *pSVar11;
  System_String_Fields SVar12;
  System_String_Fields values;
  undefined8 uVar13;
  System_Collections_Generic_List_object__o *__this;
  System_String_o *pSVar14;
  MethodInfo *method_00;
  MethodInfo *method_01;
  long *plVar15;
  long *extraout_RDX;
  System_String_Fields unaff_RBP;
  System_String_Fields SVar16;
  System_String_Fields *__this_00;
  System_String_Fields *__this_01;
  undefined1 auVar17 [16];
  System_String_o *pSStack_70;
  System_String_Fields SStack_68;
  System_Xml_XmlDocument_o *pSStack_60;
  System_Type_o *pSStack_58;
  System_String_o *pSStack_50;
  System_String_o *pSStack_48;
  System_String_Fields SStack_40;
  System_String_o *local_38;
  
  method_00 = (MethodInfo *)nodeType;
  SVar16 = (System_String_Fields)type;
  __this_00 = (System_String_Fields *)xmlDocument;
  pSVar14 = defaultText;
  if (g_data_057adc9f == '\0') {
    SStack_40._stringLength = 0x428411f;
    SStack_40._firstChar = 0;
    SStack_40._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    SStack_40._stringLength = 0x428412b;
    SStack_40._firstChar = 0;
    SStack_40._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_XmlDocumentUtils);
    SStack_40._stringLength = 0x4284137;
    SStack_40._firstChar = 0;
    SStack_40._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&"//member[@name=\"P:");
    SStack_40._stringLength = 0x4284143;
    SStack_40._firstChar = 0;
    SStack_40._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&"\"]");
    __this_00 = &".";
    SStack_40._stringLength = 0x428414f;
    SStack_40._firstChar = 0;
    SStack_40._6_2_ = 0;
    il2cpp_runtime_helper_023445d0();
    g_data_057adc9f = '\x01';
  }
  local_38 = (System_String_o *)0x0;
  if (property != (System_Reflection_PropertyInfo_o *)0x0) {
    SStack_40._stringLength = 0x428417a;
    SStack_40._firstChar = 0;
    SStack_40._6_2_ = 0;
    unaff_RBP = (System_String_Fields)
                (*(property->klass->vtable)._8_unknown.methodPtr)
                          (property,(property->klass->vtable)._8_unknown.method);
    SVar16._stringLength = 5;
    SVar16._firstChar = 0;
    SVar16._6_2_ = 0;
    SStack_40._stringLength = 0x4284191;
    SStack_40._firstChar = 0;
    SStack_40._6_2_ = 0;
    __this_00 = (System_String_Fields *)TypeInfo_string;
    SVar8 = (System_String_Fields)il2cpp_runtime_helper_022b2a40();
    SVar9 = "//member[@name=\"P:";
    if (SVar8 != (System_String_Fields)0x0) {
      property = (System_Reflection_PropertyInfo_o *)SVar8;
      if (*(int *)((long)SVar8 + 0x18) != 0) {
        __this_00 = (System_String_Fields *)((long)SVar8 + 0x20);
        *(System_String_Fields *)((long)SVar8 + 0x20) = "//member[@name=\"P:";
        SStack_40._stringLength = 0x42841be;
        SStack_40._firstChar = 0;
        SStack_40._6_2_ = 0;
        il2cpp_runtime_helper_022b4080();
        SVar16 = SVar9;
        if (type == (System_Type_o *)0x0) goto label_042842b4;
        SVar16 = (System_String_Fields)(type->klass->vtable)._26_unknown.method;
        SStack_40._stringLength = 0x42841db;
        SStack_40._firstChar = 0;
        SStack_40._6_2_ = 0;
        __this_00 = (System_String_Fields *)type;
        SVar9 = (System_String_Fields)(*(type->klass->vtable)._26_unknown.methodPtr)();
        if (1 < *(uint *)((long)SVar8 + 0x18)) {
          __this_00 = (System_String_Fields *)((long)SVar8 + 0x28);
          *(System_String_Fields *)((long)SVar8 + 0x28) = SVar9;
          SStack_40._stringLength = 0x42841f5;
          SStack_40._firstChar = 0;
          SStack_40._6_2_ = 0;
          il2cpp_runtime_helper_022b4080();
          SVar12 = ".";
          SVar16 = SVar9;
          if (2 < *(uint *)((long)SVar8 + 0x18)) {
            __this_00 = (System_String_Fields *)((long)SVar8 + 0x30);
            *(System_String_Fields *)((long)SVar8 + 0x30) = ".";
            SStack_40._stringLength = 0x4284216;
            SStack_40._firstChar = 0;
            SStack_40._6_2_ = 0;
            il2cpp_runtime_helper_022b4080();
            SVar16 = SVar12;
            if (3 < *(uint *)((long)SVar8 + 0x18)) {
              __this_00 = (System_String_Fields *)((long)SVar8 + 0x38);
              *(System_String_Fields *)((long)SVar8 + 0x38) = unaff_RBP;
              SStack_40._stringLength = 0x4284230;
              SStack_40._firstChar = 0;
              SStack_40._6_2_ = 0;
              SVar16 = unaff_RBP;
              il2cpp_runtime_helper_022b4080();
              if (4 < *(uint *)((long)SVar8 + 0x18)) {
                *(System_String_o **)((long)SVar8 + 0x40) = "\"]";
                SStack_40._stringLength = 0x4284250;
                SStack_40._firstChar = 0;
                SStack_40._6_2_ = 0;
                il2cpp_runtime_helper_022b4080((long)SVar8 + 0x40);
                SVar16._stringLength = 0;
                SVar16._firstChar = 0;
                SVar16._6_2_ = 0;
                SStack_40._stringLength = 0x428425a;
                SStack_40._firstChar = 0;
                SStack_40._6_2_ = 0;
                __this_00 = (System_String_Fields *)SVar8;
                pSVar10 = System_String__Concat_3af7570((System_String_array *)SVar8,(MethodInfo *)0x0);
                if (xmlDocument != (System_Xml_XmlDocument_o *)0x0) {
                  SStack_40._stringLength = 0x428426c;
                  SStack_40._firstChar = 0;
                  SStack_40._6_2_ = 0;
                  pSVar11 = System_Xml_XmlNode__SelectSingleNode
                                      ((System_Xml_XmlNode_o *)xmlDocument,pSVar10,(MethodInfo *)0x0);
                  if (*(int *)(TypeInfo_XmlDocumentUtils + 0xe4) == 0) {
                    SStack_40._stringLength = 0x4284287;
                    SStack_40._firstChar = 0;
                    SStack_40._6_2_ = 0;
                    il2cpp_runtime_helper_02337ed0();
                  }
                  SStack_40._stringLength = 0x4284295;
                  SStack_40._firstChar = 0;
                  SStack_40._6_2_ = 0;
                  bVar7 = CustomLogic_Editor_XmlDocumentUtils__TryGetInnerText
                                    (pSVar11,nodeType,&local_38,method_00);
                  if ((char)bVar7 != '\0') {
                    defaultText = local_38;
                  }
                  return defaultText;
                }
                goto label_042842b4;
              }
            }
          }
        }
      }
      SStack_40._stringLength = 0x42842b4;
      SStack_40._firstChar = 0;
      SStack_40._6_2_ = 0;
      il2cpp_runtime_helper_022b2ca0();
    }
  }
label_042842b4:
  SStack_40._stringLength = 0x42842b9;
  SStack_40._firstChar = 0;
  SStack_40._6_2_ = 0;
  auVar17 = il2cpp_runtime_helper_022b2c90();
  plVar15 = auVar17._8_8_;
  pSStack_70 = auVar17._0_8_;
  method_01 = method_00;
  SVar9 = SVar16;
  __this_01 = __this_00;
  SStack_68 = (System_String_Fields)property;
  pSStack_60 = xmlDocument;
  pSStack_58 = type;
  pSStack_50 = nodeType;
  pSStack_48 = defaultText;
  SStack_40 = unaff_RBP;
  if (g_data_057adca0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_XmlDocumentUtils);
    il2cpp_runtime_helper_023445d0(&"//member[@name=\"P:");
    il2cpp_runtime_helper_023445d0(&"\"]");
    __this_01 = &".";
    il2cpp_runtime_helper_023445d0();
    g_data_057adca0 = '\x01';
  }
  pSStack_70 = (System_String_o *)0x0;
  if (plVar15 != (long *)0x0) {
    SVar12 = (System_String_Fields)(**(code **)(*plVar15 + 0x1b8))(plVar15,*(undefined8 *)(*plVar15 + 0x1c0));
    SVar9._stringLength = 5;
    SVar9._firstChar = 0;
    SVar9._6_2_ = 0;
    __this_01 = (System_String_Fields *)TypeInfo_string;
    values = (System_String_Fields)il2cpp_runtime_helper_022b2a40();
    SVar8 = "//member[@name=\"P:";
    if (values != (System_String_Fields)0x0) {
      if (*(int *)((long)values + 0x18) != 0) {
        __this_01 = (System_String_Fields *)((long)values + 0x20);
        *(System_String_Fields *)((long)values + 0x20) = "//member[@name=\"P:";
        il2cpp_runtime_helper_022b4080();
        SVar9 = SVar8;
        if (SVar16 == (System_String_Fields)0x0) goto label_04284484;
        SVar9 = *(System_String_Fields *)(*(long *)SVar16 + 0x2e0);
        SVar8 = (System_String_Fields)(**(code **)(*(long *)SVar16 + 0x2d8))();
        __this_01 = (System_String_Fields *)SVar16;
        if (1 < *(uint *)((long)values + 0x18)) {
          __this_01 = (System_String_Fields *)((long)values + 0x28);
          *(System_String_Fields *)((long)values + 0x28) = SVar8;
          il2cpp_runtime_helper_022b4080();
          SVar16 = ".";
          SVar9 = SVar8;
          if (2 < *(uint *)((long)values + 0x18)) {
            __this_01 = (System_String_Fields *)((long)values + 0x30);
            *(System_String_Fields *)((long)values + 0x30) = ".";
            il2cpp_runtime_helper_022b4080();
            SVar9 = SVar16;
            if (3 < *(uint *)((long)values + 0x18)) {
              __this_01 = (System_String_Fields *)((long)values + 0x38);
              *(System_String_Fields *)((long)values + 0x38) = SVar12;
              il2cpp_runtime_helper_022b4080();
              SVar9 = SVar12;
              if (4 < *(uint *)((long)values + 0x18)) {
                *(System_String_o **)((long)values + 0x40) = "\"]";
                il2cpp_runtime_helper_022b4080((long)values + 0x40);
                SVar9._stringLength = 0;
                SVar9._firstChar = 0;
                SVar9._6_2_ = 0;
                pSVar10 = System_String__Concat_3af7570((System_String_array *)values,(MethodInfo *)0x0);
                __this_01 = (System_String_Fields *)values;
                if ((System_String_Fields)__this_00 != (System_String_Fields)0x0) {
                  pSVar11 = System_Xml_XmlNode__SelectSingleNode
                                      ((System_Xml_XmlNode_o *)__this_00,pSVar10,(MethodInfo *)0x0);
                  if (*(int *)(TypeInfo_XmlDocumentUtils + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  bVar7 = CustomLogic_Editor_XmlDocumentUtils__TryGetInnerText
                                    (pSVar11,(System_String_o *)method_00,&pSStack_70,method_01);
                  if ((char)bVar7 != '\0') {
                    pSVar14 = pSStack_70;
                  }
                  return pSVar14;
                }
                goto label_04284484;
              }
            }
          }
        }
      }
      il2cpp_runtime_helper_022b2ca0();
    }
  }
label_04284484:
  il2cpp_runtime_helper_022b2c90();
  if ((System_String_Fields)__this_01 != (System_String_Fields)0x0) {
    pSVar11 = System_Xml_XmlNode__SelectSingleNode
                        ((System_Xml_XmlNode_o *)__this_01,(System_String_o *)SVar9,(MethodInfo *)0x0);
    *extraout_RDX = (long)pSVar11;
    uVar13 = il2cpp_runtime_helper_022b4080(extraout_RDX,pSVar11);
    return (System_String_o *)CONCAT71((int7)((ulong)uVar13 >> 8),*extraout_RDX != 0);
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adca2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_XmlDocumentUtils);
    il2cpp_runtime_helper_023445d0(&"UnityEngine.xml");
    il2cpp_runtime_helper_023445d0(&"Scripts.xml");
    il2cpp_runtime_helper_023445d0(&"UnityEngine.PhysicsModule.xml");
    il2cpp_runtime_helper_023445d0(&"UnityEditor.CoreModule.xml");
    il2cpp_runtime_helper_023445d0(&"Photon3Unity3D.xml");
    g_data_057adca2 = '\x01';
  }
  __this = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor(__this,MethodInfo_List_1_System_String);
  pIVar6 = "Scripts.xml";
  lVar5 = MethodInfo_Void_Add;
  if (__this != (System_Collections_Generic_List_object__o *)0x0) {
    piVar1 = &(__this->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (__this->fields)._items;
    if (pSVar3 != (System_Object_array *)0x0) {
      uVar2 = (__this->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        (__this->fields)._size = uVar2 + 1;
        pSVar3->m_Items[(int)uVar2] = pIVar6;
        il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  (__this,pIVar6,*(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
      }
      pIVar6 = "UnityEngine.xml";
      lVar5 = MethodInfo_Void_Add;
      piVar1 = &(__this->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar3 = (__this->fields)._items;
      if (pSVar3 != (System_Object_array *)0x0) {
        uVar2 = (__this->fields)._size;
        if (uVar2 < (uint)pSVar3->max_length) {
          (__this->fields)._size = uVar2 + 1;
          pSVar3->m_Items[(int)uVar2] = pIVar6;
          il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (__this,pIVar6,*(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70))
          ;
        }
        pIVar6 = "UnityEngine.PhysicsModule.xml";
        lVar5 = MethodInfo_Void_Add;
        piVar1 = &(__this->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar3 = (__this->fields)._items;
        if (pSVar3 != (System_Object_array *)0x0) {
          uVar2 = (__this->fields)._size;
          if (uVar2 < (uint)pSVar3->max_length) {
            (__this->fields)._size = uVar2 + 1;
            pSVar3->m_Items[(int)uVar2] = pIVar6;
            il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this,pIVar6,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          }
          pIVar6 = "UnityEditor.CoreModule.xml";
          lVar5 = MethodInfo_Void_Add;
          piVar1 = &(__this->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar3 = (__this->fields)._items;
          if (pSVar3 != (System_Object_array *)0x0) {
            uVar2 = (__this->fields)._size;
            if (uVar2 < (uint)pSVar3->max_length) {
              (__this->fields)._size = uVar2 + 1;
              pSVar3->m_Items[(int)uVar2] = pIVar6;
              il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        (__this,pIVar6,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
            }
            pIVar6 = "Photon3Unity3D.xml";
            lVar5 = MethodInfo_Void_Add;
            piVar1 = &(__this->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar3 = (__this->fields)._items;
            if (pSVar3 != (System_Object_array *)0x0) {
              uVar2 = (__this->fields)._size;
              if (uVar2 < (uint)pSVar3->max_length) {
                (__this->fields)._size = uVar2 + 1;
                pSVar3->m_Items[(int)uVar2] = pIVar6;
                il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          (__this,pIVar6,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
              }
              **(undefined8 **)(TypeInfo_XmlDocumentUtils + 0xb8) = __this;
              pSVar14 = (System_String_o *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_XmlDocumentUtils + 0xb8),__this);
              return pSVar14;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pcVar4 = (code *)swi(3);
  pSVar14 = (System_String_o *)(*pcVar4)();
  return pSVar14;
}


// CustomLogic.Editor.XmlDocumentUtils$$GetFieldNodeText
// il2cpp: System_String_o* CustomLogic_Editor_XmlDocumentUtils__GetFieldNodeText (System_Xml_XmlDocument_o* xmlDocument, System_Type_o* type, System_Reflection_FieldInfo_o* field, System_String_o* nodeType, System_String_o* defaultText, const MethodInfo* method);
// 0x42842c0

System_String_o *
CustomLogic_Editor_XmlDocumentUtils__GetFieldNodeText
          (System_Xml_XmlDocument_o *xmlDocument,System_Type_o *type,System_Reflection_FieldInfo_o *field,
          System_String_o *nodeType,System_String_o *defaultText,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  code *pcVar4;
  long lVar5;
  Il2CppObject *pIVar6;
  bool_conflict bVar7;
  MethodInfo *pMVar8;
  System_String_array *values;
  MethodInfo *pMVar9;
  System_String_o *pSVar10;
  System_Xml_XmlNode_o *pSVar11;
  undefined8 uVar12;
  System_Collections_Generic_List_object__o *__this;
  MethodInfo *method_00;
  long *extraout_RDX;
  MethodInfo *xpath;
  MethodInfo *pMVar13;
  MethodInfo **__this_00;
  System_String_o *local_38;
  
  method_00 = (MethodInfo *)nodeType;
  xpath = (MethodInfo *)type;
  __this_00 = (MethodInfo **)xmlDocument;
  if (g_data_057adca0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_XmlDocumentUtils);
    il2cpp_runtime_helper_023445d0(&"//member[@name=\"P:");
    il2cpp_runtime_helper_023445d0(&"\"]");
    __this_00 = &".";
    il2cpp_runtime_helper_023445d0();
    g_data_057adca0 = '\x01';
  }
  local_38 = (System_String_o *)0x0;
  if (field != (System_Reflection_FieldInfo_o *)0x0) {
    pMVar8 = (MethodInfo *)
             (*(field->klass->vtable)._8_unknown.methodPtr)(field,(field->klass->vtable)._8_unknown.method);
    xpath = (MethodInfo *)&g_data_00000005;
    __this_00 = (MethodInfo **)TypeInfo_string;
    values = (System_String_array *)il2cpp_runtime_helper_022b2a40();
    pMVar9 = "//member[@name=\"P:";
    if (values != (System_String_array *)0x0) {
      if ((int)values->max_length != 0) {
        __this_00 = (MethodInfo **)values->m_Items;
        values->m_Items[0] = (System_String_o *)"//member[@name=\"P:";
        il2cpp_runtime_helper_022b4080();
        xpath = pMVar9;
        if (type == (System_Type_o *)0x0) goto label_04284484;
        xpath = (type->klass->vtable)._26_unknown.method;
        pMVar9 = (MethodInfo *)(*(type->klass->vtable)._26_unknown.methodPtr)();
        __this_00 = (MethodInfo **)type;
        if (1 < (uint)values->max_length) {
          __this_00 = (MethodInfo **)(values->m_Items + 1);
          values->m_Items[1] = (System_String_o *)pMVar9;
          il2cpp_runtime_helper_022b4080();
          pMVar13 = ".";
          xpath = pMVar9;
          if (2 < (uint)values->max_length) {
            __this_00 = (MethodInfo **)(values->m_Items + 2);
            values->m_Items[2] = (System_String_o *)".";
            il2cpp_runtime_helper_022b4080();
            xpath = pMVar13;
            if (3 < (uint)values->max_length) {
              __this_00 = (MethodInfo **)(values->m_Items + 3);
              values->m_Items[3] = (System_String_o *)pMVar8;
              il2cpp_runtime_helper_022b4080();
              xpath = pMVar8;
              if (4 < (uint)values->max_length) {
                values->m_Items[4] = "\"]";
                il2cpp_runtime_helper_022b4080(values->m_Items + 4);
                xpath = (MethodInfo *)0x0;
                pSVar10 = System_String__Concat_3af7570(values,(MethodInfo *)0x0);
                __this_00 = (MethodInfo **)values;
                if (xmlDocument != (System_Xml_XmlDocument_o *)0x0) {
                  pSVar11 = System_Xml_XmlNode__SelectSingleNode
                                      ((System_Xml_XmlNode_o *)xmlDocument,pSVar10,(MethodInfo *)0x0);
                  if (*(int *)(TypeInfo_XmlDocumentUtils + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  bVar7 = CustomLogic_Editor_XmlDocumentUtils__TryGetInnerText
                                    (pSVar11,nodeType,&local_38,method_00);
                  if ((char)bVar7 != '\0') {
                    defaultText = local_38;
                  }
                  return defaultText;
                }
                goto label_04284484;
              }
            }
          }
        }
      }
      il2cpp_runtime_helper_022b2ca0();
    }
  }
label_04284484:
  il2cpp_runtime_helper_022b2c90();
  if ((System_String_array *)__this_00 != (System_String_array *)0x0) {
    pSVar11 = System_Xml_XmlNode__SelectSingleNode
                        ((System_Xml_XmlNode_o *)__this_00,(System_String_o *)xpath,(MethodInfo *)0x0);
    *extraout_RDX = (long)pSVar11;
    uVar12 = il2cpp_runtime_helper_022b4080(extraout_RDX,pSVar11);
    return (System_String_o *)CONCAT71((int7)((ulong)uVar12 >> 8),*extraout_RDX != 0);
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adca2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_XmlDocumentUtils);
    il2cpp_runtime_helper_023445d0(&"UnityEngine.xml");
    il2cpp_runtime_helper_023445d0(&"Scripts.xml");
    il2cpp_runtime_helper_023445d0(&"UnityEngine.PhysicsModule.xml");
    il2cpp_runtime_helper_023445d0(&"UnityEditor.CoreModule.xml");
    il2cpp_runtime_helper_023445d0(&"Photon3Unity3D.xml");
    g_data_057adca2 = '\x01';
  }
  __this = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor(__this,MethodInfo_List_1_System_String);
  pIVar6 = "Scripts.xml";
  lVar5 = MethodInfo_Void_Add;
  if (__this != (System_Collections_Generic_List_object__o *)0x0) {
    piVar1 = &(__this->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (__this->fields)._items;
    if (pSVar3 != (System_Object_array *)0x0) {
      uVar2 = (__this->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        (__this->fields)._size = uVar2 + 1;
        pSVar3->m_Items[(int)uVar2] = pIVar6;
        il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  (__this,pIVar6,*(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
      }
      pIVar6 = "UnityEngine.xml";
      lVar5 = MethodInfo_Void_Add;
      piVar1 = &(__this->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar3 = (__this->fields)._items;
      if (pSVar3 != (System_Object_array *)0x0) {
        uVar2 = (__this->fields)._size;
        if (uVar2 < (uint)pSVar3->max_length) {
          (__this->fields)._size = uVar2 + 1;
          pSVar3->m_Items[(int)uVar2] = pIVar6;
          il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (__this,pIVar6,*(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70))
          ;
        }
        pIVar6 = "UnityEngine.PhysicsModule.xml";
        lVar5 = MethodInfo_Void_Add;
        piVar1 = &(__this->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar3 = (__this->fields)._items;
        if (pSVar3 != (System_Object_array *)0x0) {
          uVar2 = (__this->fields)._size;
          if (uVar2 < (uint)pSVar3->max_length) {
            (__this->fields)._size = uVar2 + 1;
            pSVar3->m_Items[(int)uVar2] = pIVar6;
            il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this,pIVar6,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          }
          pIVar6 = "UnityEditor.CoreModule.xml";
          lVar5 = MethodInfo_Void_Add;
          piVar1 = &(__this->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar3 = (__this->fields)._items;
          if (pSVar3 != (System_Object_array *)0x0) {
            uVar2 = (__this->fields)._size;
            if (uVar2 < (uint)pSVar3->max_length) {
              (__this->fields)._size = uVar2 + 1;
              pSVar3->m_Items[(int)uVar2] = pIVar6;
              il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        (__this,pIVar6,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
            }
            pIVar6 = "Photon3Unity3D.xml";
            lVar5 = MethodInfo_Void_Add;
            piVar1 = &(__this->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar3 = (__this->fields)._items;
            if (pSVar3 != (System_Object_array *)0x0) {
              uVar2 = (__this->fields)._size;
              if (uVar2 < (uint)pSVar3->max_length) {
                (__this->fields)._size = uVar2 + 1;
                pSVar3->m_Items[(int)uVar2] = pIVar6;
                il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          (__this,pIVar6,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
              }
              **(undefined8 **)(TypeInfo_XmlDocumentUtils + 0xb8) = __this;
              pSVar10 = (System_String_o *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_XmlDocumentUtils + 0xb8),__this);
              return pSVar10;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pcVar4 = (code *)swi(3);
  pSVar10 = (System_String_o *)(*pcVar4)();
  return pSVar10;
}


// CustomLogic.Editor.XmlDocumentUtils$$TryGetInnerText
// il2cpp: bool CustomLogic_Editor_XmlDocumentUtils__TryGetInnerText (System_Xml_XmlNode_o* node, System_String_o* nodeType, System_String_o** innerText, const MethodInfo* method);
// 0x4283660

bool_conflict
CustomLogic_Editor_XmlDocumentUtils__TryGetInnerText
          (System_Xml_XmlNode_o *node,System_String_o *nodeType,System_String_o **innerText,MethodInfo *method
          )

{
  System_String_o *pSVar1;
  undefined8 uVar2;
  System_Xml_XmlNode_o *local_20;
  
  if (g_data_057adca1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_XmlDocumentUtils);
    il2cpp_runtime_helper_023445d0(&".//");
    g_data_057adca1 = '\x01';
  }
  local_20 = (System_Xml_XmlNode_o *)0x0;
  if (node != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = System_String__Concat_3ae5ba0(".//",nodeType,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_XmlDocumentUtils + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    local_20 = System_Xml_XmlNode__SelectSingleNode(node,pSVar1,(MethodInfo *)0x0);
    il2cpp_runtime_helper_022b4080(&local_20,local_20);
    if (local_20 != (System_Xml_XmlNode_o *)0x0) {
      pSVar1 = (System_String_o *)
               (*(local_20->klass->vtable)._41_get_InnerText.methodPtr)
                         (local_20,(local_20->klass->vtable)._41_get_InnerText.method);
      *innerText = pSVar1;
      uVar2 = il2cpp_runtime_helper_022b4080(innerText,pSVar1);
      return (bool_conflict)CONCAT71((int7)((ulong)uVar2 >> 8),1);
    }
  }
  *innerText = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  il2cpp_runtime_helper_022b4080(innerText);
  return 0;
}


// CustomLogic.Editor.XmlDocumentUtils$$TrySelectSingleNode
// il2cpp: bool CustomLogic_Editor_XmlDocumentUtils__TrySelectSingleNode (System_Xml_XmlNode_o* node, System_String_o* xpath, System_Xml_XmlNode_o** xNode, const MethodInfo* method);
// 0x4284490

bool_conflict
CustomLogic_Editor_XmlDocumentUtils__TrySelectSingleNode
          (System_Xml_XmlNode_o *node,System_String_o *xpath,System_Xml_XmlNode_o **xNode,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  code *pcVar4;
  long lVar5;
  Il2CppObject *pIVar6;
  bool_conflict bVar7;
  System_Xml_XmlNode_o *pSVar8;
  undefined8 uVar9;
  System_Collections_Generic_List_object__o *__this;
  
  if (node != (System_Xml_XmlNode_o *)0x0) {
    pSVar8 = System_Xml_XmlNode__SelectSingleNode(node,xpath,(MethodInfo *)0x0);
    *xNode = pSVar8;
    uVar9 = il2cpp_runtime_helper_022b4080(xNode,pSVar8);
    return (bool_conflict)CONCAT71((int7)((ulong)uVar9 >> 8),*xNode != (System_Xml_XmlNode_o *)0x0);
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adca2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_XmlDocumentUtils);
    il2cpp_runtime_helper_023445d0(&"UnityEngine.xml");
    il2cpp_runtime_helper_023445d0(&"Scripts.xml");
    il2cpp_runtime_helper_023445d0(&"UnityEngine.PhysicsModule.xml");
    il2cpp_runtime_helper_023445d0(&"UnityEditor.CoreModule.xml");
    il2cpp_runtime_helper_023445d0(&"Photon3Unity3D.xml");
    g_data_057adca2 = '\x01';
  }
  __this = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor(__this,MethodInfo_List_1_System_String);
  pIVar6 = "Scripts.xml";
  lVar5 = MethodInfo_Void_Add;
  if (__this != (System_Collections_Generic_List_object__o *)0x0) {
    piVar1 = &(__this->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (__this->fields)._items;
    if (pSVar3 != (System_Object_array *)0x0) {
      uVar2 = (__this->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        (__this->fields)._size = uVar2 + 1;
        pSVar3->m_Items[(int)uVar2] = pIVar6;
        il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  (__this,pIVar6,*(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
      }
      pIVar6 = "UnityEngine.xml";
      lVar5 = MethodInfo_Void_Add;
      piVar1 = &(__this->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar3 = (__this->fields)._items;
      if (pSVar3 != (System_Object_array *)0x0) {
        uVar2 = (__this->fields)._size;
        if (uVar2 < (uint)pSVar3->max_length) {
          (__this->fields)._size = uVar2 + 1;
          pSVar3->m_Items[(int)uVar2] = pIVar6;
          il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (__this,pIVar6,*(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70))
          ;
        }
        pIVar6 = "UnityEngine.PhysicsModule.xml";
        lVar5 = MethodInfo_Void_Add;
        piVar1 = &(__this->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar3 = (__this->fields)._items;
        if (pSVar3 != (System_Object_array *)0x0) {
          uVar2 = (__this->fields)._size;
          if (uVar2 < (uint)pSVar3->max_length) {
            (__this->fields)._size = uVar2 + 1;
            pSVar3->m_Items[(int)uVar2] = pIVar6;
            il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this,pIVar6,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          }
          pIVar6 = "UnityEditor.CoreModule.xml";
          lVar5 = MethodInfo_Void_Add;
          piVar1 = &(__this->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar3 = (__this->fields)._items;
          if (pSVar3 != (System_Object_array *)0x0) {
            uVar2 = (__this->fields)._size;
            if (uVar2 < (uint)pSVar3->max_length) {
              (__this->fields)._size = uVar2 + 1;
              pSVar3->m_Items[(int)uVar2] = pIVar6;
              il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        (__this,pIVar6,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
            }
            pIVar6 = "Photon3Unity3D.xml";
            lVar5 = MethodInfo_Void_Add;
            piVar1 = &(__this->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar3 = (__this->fields)._items;
            if (pSVar3 != (System_Object_array *)0x0) {
              uVar2 = (__this->fields)._size;
              if (uVar2 < (uint)pSVar3->max_length) {
                (__this->fields)._size = uVar2 + 1;
                pSVar3->m_Items[(int)uVar2] = pIVar6;
                il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          (__this,pIVar6,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
              }
              **(undefined8 **)(TypeInfo_XmlDocumentUtils + 0xb8) = __this;
              bVar7 = il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_XmlDocumentUtils + 0xb8),__this);
              return bVar7;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pcVar4 = (code *)swi(3);
  bVar7 = (*pcVar4)();
  return bVar7;
}


// CustomLogic.Editor.XmlDocumentUtils$$.cctor
// il2cpp: void CustomLogic_Editor_XmlDocumentUtils___cctor (const MethodInfo* method);
// 0x42844c0

void CustomLogic_Editor_XmlDocumentUtils___cctor(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  code *pcVar4;
  long lVar5;
  Il2CppObject *pIVar6;
  System_Collections_Generic_List_object__o *__this;
  
  if (g_data_057adca2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_XmlDocumentUtils);
    il2cpp_runtime_helper_023445d0(&"UnityEngine.xml");
    il2cpp_runtime_helper_023445d0(&"Scripts.xml");
    il2cpp_runtime_helper_023445d0(&"UnityEngine.PhysicsModule.xml");
    il2cpp_runtime_helper_023445d0(&"UnityEditor.CoreModule.xml");
    il2cpp_runtime_helper_023445d0(&"Photon3Unity3D.xml");
    g_data_057adca2 = '\x01';
  }
  __this = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor(__this,MethodInfo_List_1_System_String);
  pIVar6 = "Scripts.xml";
  lVar5 = MethodInfo_Void_Add;
  if (__this != (System_Collections_Generic_List_object__o *)0x0) {
    piVar1 = &(__this->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (__this->fields)._items;
    if (pSVar3 != (System_Object_array *)0x0) {
      uVar2 = (__this->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        (__this->fields)._size = uVar2 + 1;
        pSVar3->m_Items[(int)uVar2] = pIVar6;
        il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  (__this,pIVar6,*(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
      }
      pIVar6 = "UnityEngine.xml";
      lVar5 = MethodInfo_Void_Add;
      piVar1 = &(__this->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar3 = (__this->fields)._items;
      if (pSVar3 != (System_Object_array *)0x0) {
        uVar2 = (__this->fields)._size;
        if (uVar2 < (uint)pSVar3->max_length) {
          (__this->fields)._size = uVar2 + 1;
          pSVar3->m_Items[(int)uVar2] = pIVar6;
          il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (__this,pIVar6,*(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70))
          ;
        }
        pIVar6 = "UnityEngine.PhysicsModule.xml";
        lVar5 = MethodInfo_Void_Add;
        piVar1 = &(__this->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar3 = (__this->fields)._items;
        if (pSVar3 != (System_Object_array *)0x0) {
          uVar2 = (__this->fields)._size;
          if (uVar2 < (uint)pSVar3->max_length) {
            (__this->fields)._size = uVar2 + 1;
            pSVar3->m_Items[(int)uVar2] = pIVar6;
            il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this,pIVar6,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          }
          pIVar6 = "UnityEditor.CoreModule.xml";
          lVar5 = MethodInfo_Void_Add;
          piVar1 = &(__this->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar3 = (__this->fields)._items;
          if (pSVar3 != (System_Object_array *)0x0) {
            uVar2 = (__this->fields)._size;
            if (uVar2 < (uint)pSVar3->max_length) {
              (__this->fields)._size = uVar2 + 1;
              pSVar3->m_Items[(int)uVar2] = pIVar6;
              il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        (__this,pIVar6,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
            }
            pIVar6 = "Photon3Unity3D.xml";
            lVar5 = MethodInfo_Void_Add;
            piVar1 = &(__this->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar3 = (__this->fields)._items;
            if (pSVar3 != (System_Object_array *)0x0) {
              uVar2 = (__this->fields)._size;
              if (uVar2 < (uint)pSVar3->max_length) {
                (__this->fields)._size = uVar2 + 1;
                pSVar3->m_Items[(int)uVar2] = pIVar6;
                il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          (__this,pIVar6,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
              }
              **(undefined8 **)(TypeInfo_XmlDocumentUtils + 0xb8) = __this;
              il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_XmlDocumentUtils + 0xb8),__this);
              return;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


