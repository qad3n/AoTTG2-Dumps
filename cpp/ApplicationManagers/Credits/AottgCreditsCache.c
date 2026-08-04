// Type: ApplicationManagers.Credits.AottgCreditsCache
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers.Credits/AottgCreditsCache.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.Credits.AottgCreditsCache.<>c$$.cctor
// il2cpp: void ApplicationManagers_Credits_AottgCreditsCache___c___cctor (const MethodInfo* method);
// 0x44c5d90

void ApplicationManagers_Credits_AottgCreditsCache___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057aeacc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aeacc = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// ApplicationManagers.Credits.AottgCreditsCache.<>c$$.ctor
// il2cpp: void ApplicationManagers_Credits_AottgCreditsCache___c___ctor (ApplicationManagers_Credits_AottgCreditsCache___c_o* __this, const MethodInfo* method);
// 0x44c5e00

void ApplicationManagers_Credits_AottgCreditsCache___c___ctor
               (ApplicationManagers_Credits_AottgCreditsCache___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.Credits.AottgCreditsCache.<>c$$<.ctor>b__8_0
// il2cpp: System_DateTimeOffset_o ApplicationManagers_Credits_AottgCreditsCache___c____ctor_b__8_0 (ApplicationManagers_Credits_AottgCreditsCache___c_o* __this, const MethodInfo* method);
// 0x44c5e10

System_DateTimeOffset_o
ApplicationManagers_Credits_AottgCreditsCache___c____ctor_b__8_0
          (ApplicationManagers_Credits_AottgCreditsCache___c_o *__this,MethodInfo *method)

{
  int iVar1;
  System_DateTimeOffset_Fields SVar2;
  
  if (g_data_057aeacd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTimeOffset);
    g_data_057aeacd = '\x01';
    iVar1 = *(int *)(TypeInfo_DateTimeOffset + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_DateTimeOffset + 0xe4);
  }
  if (iVar1 != 0) {
    SVar2 = (System_DateTimeOffset_Fields)System_DateTimeOffset__get_UtcNow((MethodInfo *)0x0);
    return (System_DateTimeOffset_o)SVar2;
  }
  il2cpp_runtime_helper_02337ed0();
  SVar2 = (System_DateTimeOffset_Fields)System_DateTimeOffset__get_UtcNow((MethodInfo *)0x0);
  return (System_DateTimeOffset_o)SVar2;
}


// ApplicationManagers.Credits.AottgCreditsCache$$.ctor
// il2cpp: void ApplicationManagers_Credits_AottgCreditsCache___ctor (ApplicationManagers_Credits_AottgCreditsCache_o* __this, System_Action_Action_AottgCreditsFetchResponse___o* fetch, System_Func_DateTimeOffset__o* now, System_Nullable_TimeSpan__o ttl, const MethodInfo* method);
// 0x44c5180

void ApplicationManagers_Credits_AottgCreditsCache___ctor
               (ApplicationManagers_Credits_AottgCreditsCache_o *__this,
               System_Action_Action_AottgCreditsFetchResponse___o *fetch,System_Func_DateTimeOffset__o *now,
               System_Nullable_TimeSpan__o ttl,MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_List_Action_AottgCreditsResult___o *__this_00;
  undefined8 uVar2;
  System_ArgumentNullException_o *__this_01;
  System_String_o *paramName;
  System_TimeSpan_Fields SVar3;
  
  SVar3._ticks = (int64_t)ttl.fields.value.fields._ticks;
  if (g_data_057aeac6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsCache);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_DateTimeOffset);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Action_1_ApplicationManagers_Credits_Aottg);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Action_AottgCreditsResult);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TimeSpan_GetValueOrDefault);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_DateTimeOffset_ctor_b__8_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aeac6 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_Action_AottgCreditsResult___o *)
              il2cpp_runtime_helper_023052d0(TypeInfo_List_Action_AottgCreditsResult);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_System_Action_1_ApplicationManagers_Credits_Aottg);
  (__this->fields)._subscribers = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._subscribers);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (fetch == (System_Action_Action_AottgCreditsFetchResponse___o *)0x0) {
    uVar2 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentNullException);
    __this_01 = (System_ArgumentNullException_o *)il2cpp_runtime_helper_023052d0(uVar2);
    paramName = (System_String_o *)il2cpp_runtime_helper_023445d0(&"fetch");
    System_ArgumentNullException___ctor_3c0ad60(__this_01,paramName,(MethodInfo *)0x0);
    uVar2 = il2cpp_runtime_helper_023445d0(&MethodInfo_AottgCreditsCache);
    il2cpp_runtime_helper_022b2b10(__this_01,uVar2);
  }
  else if (__this != (ApplicationManagers_Credits_AottgCreditsCache_o *)0x0) {
    (__this->fields)._fetch = fetch;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._fetch,fetch);
    if (now == (System_Func_DateTimeOffset__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        now = *(System_Func_DateTimeOffset__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
      }
      else {
        now = *(System_Func_DateTimeOffset__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
      }
      if (now == (System_Func_DateTimeOffset__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        now = (System_Func_DateTimeOffset__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_DateTimeOffset);
        System_Func_DateTimeOffset____ctor();
        lVar1 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_DateTimeOffset__o **)(lVar1 + 8) = now;
        il2cpp_runtime_helper_022b4080(lVar1 + 8,now);
      }
    }
    (__this->fields)._now = now;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._now,now);
    if ((char)ttl.fields.hasValue == '\0') {
      if (*(int *)(TypeInfo_AottgCreditsCache + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      SVar3._ticks = **(int64_t **)(TypeInfo_AottgCreditsCache + 0xb8);
    }
    (__this->fields)._ttl.fields._ticks = SVar3._ticks;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// ApplicationManagers.Credits.AottgCreditsCache$$get_HasCache
// il2cpp: bool ApplicationManagers_Credits_AottgCreditsCache__get_HasCache (ApplicationManagers_Credits_AottgCreditsCache_o* __this, const MethodInfo* method);
// 0x44c53c0

bool_conflict
ApplicationManagers_Credits_AottgCreditsCache__get_HasCache
          (ApplicationManagers_Credits_AottgCreditsCache_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),
                  (__this->fields)._cachedCredits != (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0
                 );
}


// ApplicationManagers.Credits.AottgCreditsCache$$get_IsInFlight
// il2cpp: bool ApplicationManagers_Credits_AottgCreditsCache__get_IsInFlight (ApplicationManagers_Credits_AottgCreditsCache_o* __this, const MethodInfo* method);
// 0x44c53d0

bool_conflict
ApplicationManagers_Credits_AottgCreditsCache__get_IsInFlight
          (ApplicationManagers_Credits_AottgCreditsCache_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),(char)(__this->fields)._inFlight);
}


// ApplicationManagers.Credits.AottgCreditsCache$$Clear
// il2cpp: void ApplicationManagers_Credits_AottgCreditsCache__Clear (ApplicationManagers_Credits_AottgCreditsCache_o* __this, const MethodInfo* method);
// 0x44c53e0

void ApplicationManagers_Credits_AottgCreditsCache__Clear
               (ApplicationManagers_Credits_AottgCreditsCache_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  char cVar2;
  int32_t length;
  uint uVar3;
  ApplicationManagers_Credits_AottgCreditsResponse_o *pAVar4;
  System_Action_AottgCreditsResult__array *pSVar5;
  System_Action_Action_AottgCreditsFetchResponse___o *pSVar6;
  long lVar7;
  System_TimeSpan_o t2;
  unkuint10 Var8;
  bool_conflict bVar9;
  System_Collections_Generic_List_Action_AottgCreditsResult___o *pSVar10;
  Il2CppObject *pIVar11;
  code *vtableDispatch;
  System_TimeSpan_o t1;
  char extraout_DL;
  Il2CppType *pIVar12;
  undefined1 uVar13;
  System_Action_AottgCreditsResult__o *item;
  System_Action_AottgCreditsResult__o *method_00;
  ApplicationManagers_Credits_AottgCreditsCache_o *__this_00;
  System_Collections_Generic_List_Action_AottgCreditsResult___o *__this_01;
  void *pvVar14;
  undefined1 auVar15 [16];
  System_DateTimeOffset_o right;
  System_DateTimeOffset_o left;
  
  if (g_data_057aeac7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    g_data_057aeac7 = '\x01';
  }
  __this_00 = (ApplicationManagers_Credits_AottgCreditsCache_o *)&(__this->fields)._cachedCredits;
  (__this->fields)._cachedCredits = (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0;
  item = (System_Action_AottgCreditsResult__o *)0x0;
  il2cpp_runtime_helper_022b4080();
  (__this->fields)._cachedAt.fields._dateTime.fields._dateData = 0;
  *(undefined8 *)&(__this->fields)._cachedAt.fields._offsetMinutes = 0;
  *(undefined1 *)&(__this->fields)._inFlight = 0;
  pSVar10 = (__this->fields)._subscribers;
  if (pSVar10 != (System_Collections_Generic_List_Action_AottgCreditsResult___o *)0x0) {
    piVar1 = &(pSVar10->fields)._version;
    *piVar1 = *piVar1 + 1;
    length = (pSVar10->fields)._size;
    (pSVar10->fields)._size = 0;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar10->fields)._items,0,length,(MethodInfo *)0x0);
      return;
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  method_00 = item;
  if (g_data_057aeac8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgCreditsFetchResponse);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CompleteFetch);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057aeac8 = '\x01';
  }
  if (item == (System_Action_AottgCreditsResult__o *)0x0) {
    return;
  }
  if ((extraout_DL == '\0') &&
     (bVar9 = ApplicationManagers_Credits_AottgCreditsCache__IsFresh(__this_00,(MethodInfo *)method_00),
     (char)bVar9 != '\0')) {
    pAVar4 = (__this_00->fields)._cachedCredits;
    if (g_data_057aead2 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsResult);
      g_data_057aead2 = '\x01';
    }
    pSVar10 = (System_Collections_Generic_List_Action_AottgCreditsResult___o *)
              il2cpp_runtime_helper_023052d0(TypeInfo_AottgCreditsResult);
    System_Object___ctor((Il2CppObject *)pSVar10,(MethodInfo *)0x0);
    *(undefined4 *)&(pSVar10->fields)._items = 1;
    *(ApplicationManagers_Credits_AottgCreditsResponse_o **)&(pSVar10->fields)._size = pAVar4;
    il2cpp_runtime_helper_022b4080(&(pSVar10->fields)._size,pAVar4);
    (pSVar10->fields)._syncRoot = (Il2CppObject *)0x0;
    il2cpp_runtime_helper_022b4080(&(pSVar10->fields)._syncRoot,0);
    *(undefined2 *)&pSVar10[1].klass = 1;
    *(undefined1 *)((long)&pSVar10[1].klass + 2) = 0;
    pvVar14 = ((_union_14 *)&(item->fields).method_code)->genericMethod;
    vtableDispatch = (code *)(item->fields).invoke_impl;
    pIVar12 = (Il2CppType *)(item->fields).method;
label_044c56ed:
    (*vtableDispatch)(pvVar14,pSVar10,pIVar12);
    return;
  }
  pAVar4 = (__this_00->fields)._cachedCredits;
  if (pAVar4 == (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0) {
    if (g_data_057aead1 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsResult);
      g_data_057aead1 = '\x01';
    }
    pIVar11 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgCreditsResult);
    System_Object___ctor(pIVar11,(MethodInfo *)0x0);
    *(undefined4 *)&pIVar11[1].klass = 0;
    pIVar11[1].monitor = (void *)0x0;
    il2cpp_runtime_helper_022b4080(&pIVar11[1].monitor,0);
    pIVar11[2].klass = (Il2CppClass *)0x0;
    il2cpp_runtime_helper_022b4080(pIVar11 + 2,0);
    *(undefined2 *)&pIVar11[2].monitor = 0;
  }
  else {
    if (g_data_057aead3 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsResult);
      g_data_057aead3 = '\x01';
    }
    pIVar11 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgCreditsResult);
    System_Object___ctor(pIVar11,(MethodInfo *)0x0);
    *(undefined4 *)&pIVar11[1].klass = 2;
    pIVar11[1].monitor = pAVar4;
    il2cpp_runtime_helper_022b4080(&pIVar11[1].monitor,pAVar4);
    pIVar11[2].klass = (Il2CppClass *)0x0;
    il2cpp_runtime_helper_022b4080(pIVar11 + 2,0);
    *(undefined2 *)&pIVar11[2].monitor = 0x101;
  }
  *(undefined1 *)((long)&pIVar11[2].monitor + 2) = 1;
  (*(code *)(item->fields).invoke_impl)
            (((_union_14 *)&(item->fields).method_code)->genericMethod,pIVar11,
             (Il2CppType *)(item->fields).method);
  lVar7 = MethodInfo_Void_Add;
  uVar13 = SUB81(pIVar11,0);
  __this_01 = (__this_00->fields)._subscribers;
  if (__this_01 != (System_Collections_Generic_List_Action_AottgCreditsResult___o *)0x0) {
    piVar1 = &(__this_01->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar5 = (__this_01->fields)._items;
    if (pSVar5 != (System_Action_AottgCreditsResult__array *)0x0) {
      uVar3 = (__this_01->fields)._size;
      if (uVar3 < (uint)pSVar5->max_length) {
        (__this_01->fields)._size = uVar3 + 1;
        pSVar5->m_Items[(int)uVar3] = item;
        il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar3,item);
        cVar2 = (char)(__this_00->fields)._inFlight;
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)item,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        cVar2 = (char)(__this_00->fields)._inFlight;
      }
      if (cVar2 != '\0') {
        return;
      }
      *(undefined1 *)&(__this_00->fields)._inFlight = 1;
      pSVar6 = (__this_00->fields)._fetch;
      pSVar10 = (System_Collections_Generic_List_Action_AottgCreditsResult___o *)
                il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgCreditsFetchResponse);
      __this_01 = pSVar10;
      System_Action_object____ctor();
      uVar13 = SUB81(__this_00,0);
      if (pSVar6 != (System_Action_Action_AottgCreditsFetchResponse___o *)0x0) {
        pvVar14 = (void *)(pSVar6->fields).method_code;
        vtableDispatch = (code *)(pSVar6->fields).invoke_impl;
        pIVar12 = (Il2CppType *)(pSVar6->fields).method;
        goto label_044c56ed;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar10 = __this_01;
  if (g_data_057aeac9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTimeOffset);
    pSVar10 = (System_Collections_Generic_List_Action_AottgCreditsResult___o *)&TypeInfo_TimeSpan;
    il2cpp_runtime_helper_023445d0();
    g_data_057aeac9 = '\x01';
  }
  if (__this_01[1].monitor != (void *)0x0) {
    lVar7 = *(long *)&(__this_01->fields)._size;
    if (lVar7 != 0) {
      auVar15 = (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
      Var8 = *(unkuint10 *)&__this_01[1].fields;
      if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      right.fields._10_6_ = 0;
      right.fields._0_10_ = Var8;
      left.fields._8_8_ = auVar15._8_8_ & 0xffffffff;
      left.fields._dateTime.fields._dateData = (System_DateTime_Fields)(uint64_t)auVar15._0_8_;
      t1 = System_DateTimeOffset__op_Subtraction(left,right,(MethodInfo *)0x0);
      t2.fields._ticks = (System_TimeSpan_Fields)(__this_01->fields)._items;
      if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      System_TimeSpan__op_LessThan(t1,t2,(MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aead2 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsResult);
      g_data_057aead2 = '\x01';
    }
    pIVar11 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgCreditsResult);
    System_Object___ctor(pIVar11,(MethodInfo *)0x0);
    *(undefined4 *)&pIVar11[1].klass = 1;
    pIVar11[1].monitor = pSVar10;
    il2cpp_runtime_helper_022b4080(&pIVar11[1].monitor,pSVar10);
    pIVar11[2].klass = (Il2CppClass *)0x0;
    il2cpp_runtime_helper_022b4080(pIVar11 + 2,0);
    *(undefined1 *)&pIVar11[2].monitor = uVar13;
    *(undefined2 *)((long)&pIVar11[2].monitor + 1) = 0;
    return;
  }
  return;
}


// ApplicationManagers.Credits.AottgCreditsCache$$Get
// il2cpp: void ApplicationManagers_Credits_AottgCreditsCache__Get (ApplicationManagers_Credits_AottgCreditsCache_o* __this, System_Action_AottgCreditsResult__o* onResult, bool forceRefresh, const MethodInfo* method);
// 0x44c5450

void ApplicationManagers_Credits_AottgCreditsCache__Get
               (ApplicationManagers_Credits_AottgCreditsCache_o *__this,
               System_Action_AottgCreditsResult__o *onResult,bool_conflict forceRefresh,MethodInfo *method)

{
  int32_t *piVar1;
  char cVar2;
  uint uVar3;
  ApplicationManagers_Credits_AottgCreditsResponse_o *pAVar4;
  System_Action_AottgCreditsResult__array *pSVar5;
  System_Action_Action_AottgCreditsFetchResponse___o *pSVar6;
  long lVar7;
  System_TimeSpan_o t2;
  unkuint10 Var8;
  bool_conflict bVar9;
  System_Collections_Generic_List_Action_AottgCreditsResult___o *pSVar10;
  Il2CppObject *pIVar11;
  code *vtableDispatch;
  System_TimeSpan_o t1;
  intptr_t iVar12;
  undefined1 uVar13;
  System_Action_AottgCreditsResult__o *method_00;
  System_Collections_Generic_List_Action_AottgCreditsResult___o *__this_00;
  intptr_t iVar14;
  undefined1 auVar15 [16];
  System_DateTimeOffset_o right;
  System_DateTimeOffset_o left;
  
  method_00 = onResult;
  if (g_data_057aeac8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgCreditsFetchResponse);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CompleteFetch);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057aeac8 = '\x01';
  }
  if (onResult == (System_Action_AottgCreditsResult__o *)0x0) {
    return;
  }
  if (((char)forceRefresh == '\0') &&
     (bVar9 = ApplicationManagers_Credits_AottgCreditsCache__IsFresh(__this,(MethodInfo *)method_00),
     (char)bVar9 != '\0')) {
    pAVar4 = (__this->fields)._cachedCredits;
    if (g_data_057aead2 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsResult);
      g_data_057aead2 = '\x01';
    }
    pSVar10 = (System_Collections_Generic_List_Action_AottgCreditsResult___o *)
              il2cpp_runtime_helper_023052d0(TypeInfo_AottgCreditsResult);
    System_Object___ctor((Il2CppObject *)pSVar10,(MethodInfo *)0x0);
    *(undefined4 *)&(pSVar10->fields)._items = 1;
    *(ApplicationManagers_Credits_AottgCreditsResponse_o **)&(pSVar10->fields)._size = pAVar4;
    il2cpp_runtime_helper_022b4080(&(pSVar10->fields)._size,pAVar4);
    (pSVar10->fields)._syncRoot = (Il2CppObject *)0x0;
    il2cpp_runtime_helper_022b4080(&(pSVar10->fields)._syncRoot,0);
    *(undefined2 *)&pSVar10[1].klass = 1;
    *(undefined1 *)((long)&pSVar10[1].klass + 2) = 0;
    iVar14 = (onResult->fields).method_code;
    vtableDispatch = (code *)(onResult->fields).invoke_impl;
    iVar12 = (onResult->fields).method;
label_044c56ed:
    (*vtableDispatch)(iVar14,pSVar10,iVar12);
    return;
  }
  pAVar4 = (__this->fields)._cachedCredits;
  if (pAVar4 == (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0) {
    if (g_data_057aead1 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsResult);
      g_data_057aead1 = '\x01';
    }
    pIVar11 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgCreditsResult);
    System_Object___ctor(pIVar11,(MethodInfo *)0x0);
    *(undefined4 *)&pIVar11[1].klass = 0;
    pIVar11[1].monitor = (void *)0x0;
    il2cpp_runtime_helper_022b4080(&pIVar11[1].monitor,0);
    pIVar11[2].klass = (Il2CppClass *)0x0;
    il2cpp_runtime_helper_022b4080(pIVar11 + 2,0);
    *(undefined2 *)&pIVar11[2].monitor = 0;
  }
  else {
    if (g_data_057aead3 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsResult);
      g_data_057aead3 = '\x01';
    }
    pIVar11 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgCreditsResult);
    System_Object___ctor(pIVar11,(MethodInfo *)0x0);
    *(undefined4 *)&pIVar11[1].klass = 2;
    pIVar11[1].monitor = pAVar4;
    il2cpp_runtime_helper_022b4080(&pIVar11[1].monitor,pAVar4);
    pIVar11[2].klass = (Il2CppClass *)0x0;
    il2cpp_runtime_helper_022b4080(pIVar11 + 2,0);
    *(undefined2 *)&pIVar11[2].monitor = 0x101;
  }
  *(undefined1 *)((long)&pIVar11[2].monitor + 2) = 1;
  (*(code *)(onResult->fields).invoke_impl)((onResult->fields).method_code,pIVar11,(onResult->fields).method);
  lVar7 = MethodInfo_Void_Add;
  uVar13 = SUB81(pIVar11,0);
  __this_00 = (__this->fields)._subscribers;
  if (__this_00 != (System_Collections_Generic_List_Action_AottgCreditsResult___o *)0x0) {
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar5 = (__this_00->fields)._items;
    if (pSVar5 != (System_Action_AottgCreditsResult__array *)0x0) {
      uVar3 = (__this_00->fields)._size;
      if (uVar3 < (uint)pSVar5->max_length) {
        (__this_00->fields)._size = uVar3 + 1;
        pSVar5->m_Items[(int)uVar3] = onResult;
        il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar3,onResult);
        cVar2 = (char)(__this->fields)._inFlight;
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)onResult,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        cVar2 = (char)(__this->fields)._inFlight;
      }
      if (cVar2 != '\0') {
        return;
      }
      *(undefined1 *)&(__this->fields)._inFlight = 1;
      pSVar6 = (__this->fields)._fetch;
      pSVar10 = (System_Collections_Generic_List_Action_AottgCreditsResult___o *)
                il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgCreditsFetchResponse);
      __this_00 = pSVar10;
      System_Action_object____ctor();
      uVar13 = SUB81(__this,0);
      if (pSVar6 != (System_Action_Action_AottgCreditsFetchResponse___o *)0x0) {
        iVar14 = (pSVar6->fields).method_code;
        vtableDispatch = (code *)(pSVar6->fields).invoke_impl;
        iVar12 = (pSVar6->fields).method;
        goto label_044c56ed;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar10 = __this_00;
  if (g_data_057aeac9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTimeOffset);
    pSVar10 = (System_Collections_Generic_List_Action_AottgCreditsResult___o *)&TypeInfo_TimeSpan;
    il2cpp_runtime_helper_023445d0();
    g_data_057aeac9 = '\x01';
  }
  if (__this_00[1].monitor != (void *)0x0) {
    lVar7 = *(long *)&(__this_00->fields)._size;
    if (lVar7 != 0) {
      auVar15 = (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
      Var8 = *(unkuint10 *)&__this_00[1].fields;
      if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      right.fields._10_6_ = 0;
      right.fields._0_10_ = Var8;
      left.fields._8_8_ = auVar15._8_8_ & 0xffffffff;
      left.fields._dateTime.fields._dateData = (System_DateTime_Fields)(uint64_t)auVar15._0_8_;
      t1 = System_DateTimeOffset__op_Subtraction(left,right,(MethodInfo *)0x0);
      t2.fields._ticks = (System_TimeSpan_Fields)(__this_00->fields)._items;
      if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      System_TimeSpan__op_LessThan(t1,t2,(MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aead2 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsResult);
      g_data_057aead2 = '\x01';
    }
    pIVar11 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgCreditsResult);
    System_Object___ctor(pIVar11,(MethodInfo *)0x0);
    *(undefined4 *)&pIVar11[1].klass = 1;
    pIVar11[1].monitor = pSVar10;
    il2cpp_runtime_helper_022b4080(&pIVar11[1].monitor,pSVar10);
    pIVar11[2].klass = (Il2CppClass *)0x0;
    il2cpp_runtime_helper_022b4080(pIVar11 + 2,0);
    *(undefined1 *)&pIVar11[2].monitor = uVar13;
    *(undefined2 *)((long)&pIVar11[2].monitor + 1) = 0;
    return;
  }
  return;
}


// ApplicationManagers.Credits.AottgCreditsCache$$IsFresh
// il2cpp: bool ApplicationManagers_Credits_AottgCreditsCache__IsFresh (ApplicationManagers_Credits_AottgCreditsCache_o* __this, const MethodInfo* method);
// 0x44c5700

bool_conflict
ApplicationManagers_Credits_AottgCreditsCache__IsFresh
          (ApplicationManagers_Credits_AottgCreditsCache_o *__this,MethodInfo *method)

{
  System_Func_DateTimeOffset__o *pSVar1;
  System_TimeSpan_o t2;
  undefined8 uVar2;
  undefined2 uVar3;
  bool_conflict bVar4;
  System_TimeSpan_o t1;
  Il2CppObject *__this_00;
  undefined1 uVar5;
  ApplicationManagers_Credits_AottgCreditsCache_o *pAVar6;
  undefined1 auVar7 [16];
  System_DateTimeOffset_o right;
  System_DateTimeOffset_o left;
  
  uVar5 = SUB81(method,0);
  pAVar6 = __this;
  if (g_data_057aeac9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTimeOffset);
    pAVar6 = (ApplicationManagers_Credits_AottgCreditsCache_o *)&TypeInfo_TimeSpan;
    il2cpp_runtime_helper_023445d0();
    g_data_057aeac9 = '\x01';
  }
  if ((__this->fields)._cachedCredits != (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0) {
    pSVar1 = (__this->fields)._now;
    if (pSVar1 != (System_Func_DateTimeOffset__o *)0x0) {
      auVar7 = (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,(pSVar1->fields).method);
      uVar2 = (__this->fields)._cachedAt.fields._dateTime;
      uVar3 = (__this->fields)._cachedAt.fields._offsetMinutes;
      right.fields._offsetMinutes = uVar3;
      right.fields._dateTime.fields._dateData = (System_DateTime_Fields)(System_DateTime_Fields)uVar2;
      if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      right.fields._10_6_ = 0;
      left.fields._8_8_ = auVar7._8_8_ & 0xffffffff;
      left.fields._dateTime.fields._dateData = (System_DateTime_Fields)(uint64_t)auVar7._0_8_;
      t1 = System_DateTimeOffset__op_Subtraction(left,right,(MethodInfo *)0x0);
      t2.fields._ticks = (System_TimeSpan_Fields)(__this->fields)._ttl.fields._ticks;
      if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar4 = System_TimeSpan__op_LessThan(t1,t2,(MethodInfo *)0x0);
      return bVar4;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aead2 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsResult);
      g_data_057aead2 = '\x01';
    }
    __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgCreditsResult);
    System_Object___ctor(__this_00,(MethodInfo *)0x0);
    *(undefined4 *)&__this_00[1].klass = 1;
    __this_00[1].monitor = pAVar6;
    il2cpp_runtime_helper_022b4080(&__this_00[1].monitor,pAVar6);
    __this_00[2].klass = (Il2CppClass *)0x0;
    il2cpp_runtime_helper_022b4080(__this_00 + 2,0);
    *(undefined1 *)&__this_00[2].monitor = uVar5;
    *(undefined2 *)((long)&__this_00[2].monitor + 1) = 0;
    return (bool_conflict)__this_00;
  }
  return 0;
}


// ApplicationManagers.Credits.AottgCreditsCache$$CompleteFetch
// il2cpp: void ApplicationManagers_Credits_AottgCreditsCache__CompleteFetch (ApplicationManagers_Credits_AottgCreditsCache_o* __this, ApplicationManagers_Credits_AottgCreditsFetchResponse_o* response, const MethodInfo* method);
// 0x44c5960

void ApplicationManagers_Credits_AottgCreditsCache__CompleteFetch
               (ApplicationManagers_Credits_AottgCreditsCache_o *__this,
               ApplicationManagers_Credits_AottgCreditsFetchResponse_o *response,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  uint uVar2;
  ApplicationManagers_Credits_AottgCreditsResponse_o *pAVar3;
  System_Func_DateTimeOffset__o *pSVar4;
  System_Collections_Generic_List_Action_AottgCreditsResult___o *pSVar5;
  Il2CppClass *__this_00;
  System_Object_array *pSVar6;
  Il2CppObject *pIVar7;
  undefined1 uVar8;
  ulong uVar9;
  System_Collections_Generic_List_T__c *pSVar10;
  Il2CppClass *pIVar11;
  System_Action_AottgCreditsResult__array *__this_01;
  unkbyte10 Var12;
  
  if (g_data_057aeaca == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Action_1_ApplicationManagers_Credits_AottgCreditsResult);
    il2cpp_runtime_helper_023445d0(&"unknown_error");
    g_data_057aeaca = '\x01';
  }
  *(undefined1 *)&(__this->fields)._inFlight = 0;
  if (((response == (ApplicationManagers_Credits_AottgCreditsFetchResponse_o *)0x0) ||
      ((char)(response->fields)._Success_k__BackingField == '\0')) ||
     (pAVar3 = (response->fields)._Credits_k__BackingField,
     pAVar3 == (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0)) {
    pAVar3 = (__this->fields)._cachedCredits;
    pSVar10 = "unknown_error";
    if (response != (ApplicationManagers_Credits_AottgCreditsFetchResponse_o *)0x0) {
      pSVar10 = (System_Collections_Generic_List_T__c *)(response->fields)._Error_k__BackingField;
    }
    if (pAVar3 == (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0) {
      if (g_data_057aead4 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsResult);
        g_data_057aead4 = '\x01';
      }
      __this_00 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgCreditsResult);
      System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
      *(undefined4 *)&(__this_00->_1).name = 3;
      (__this_00->_1).namespaze = (char *)0x0;
      il2cpp_runtime_helper_022b4080(&(__this_00->_1).namespaze,0);
      (__this_00->_1).byval_arg.data = pSVar10;
      goto label_044c5b47;
    }
    if (g_data_057aead5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsResult);
      g_data_057aead5 = '\x01';
    }
    __this_00 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgCreditsResult);
    System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
    *(undefined4 *)&(__this_00->_1).name = 4;
    (__this_00->_1).namespaze = (char *)pAVar3;
    il2cpp_runtime_helper_022b4080(&(__this_00->_1).namespaze,pAVar3);
    (__this_00->_1).byval_arg.data = pSVar10;
    il2cpp_runtime_helper_022b4080(&(__this_00->_1).byval_arg,pSVar10);
    uVar8 = 1;
  }
  else {
    (__this->fields)._cachedCredits = pAVar3;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._cachedCredits);
    pSVar4 = (__this->fields)._now;
    if (pSVar4 == (System_Func_DateTimeOffset__o *)0x0) goto label_044c5c0a;
    Var12 = (*(code *)(pSVar4->fields).invoke_impl)((pSVar4->fields).method_code);
    (__this->fields)._cachedAt.fields._dateTime = (System_DateTime_o)(long)Var12;
    (__this->fields)._cachedAt.fields._offsetMinutes = (short)((unkuint10)Var12 >> 0x40);
    pAVar3 = (__this->fields)._cachedCredits;
    if (g_data_057aead2 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsResult);
      g_data_057aead2 = '\x01';
    }
    __this_00 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgCreditsResult);
    System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
    *(undefined4 *)&(__this_00->_1).name = 1;
    (__this_00->_1).namespaze = (char *)pAVar3;
    il2cpp_runtime_helper_022b4080(&(__this_00->_1).namespaze,pAVar3);
    (__this_00->_1).byval_arg.data = (System_Collections_Generic_List_T__c *)0x0;
    pSVar10 = (System_Collections_Generic_List_T__c *)0x0;
label_044c5b47:
    uVar8 = 0;
    il2cpp_runtime_helper_022b4080(&(__this_00->_1).byval_arg,pSVar10);
  }
  *(undefined1 *)&(__this_00->_1).byval_arg.bits = uVar8;
  *(undefined1 *)((long)&(__this_00->_1).byval_arg.bits + 1) = uVar8;
  *(undefined1 *)((long)&(__this_00->_1).byval_arg.bits + 2) = 0;
  __this_01 = (System_Action_AottgCreditsResult__array *)(__this->fields)._subscribers;
  if (__this_01 != (System_Action_AottgCreditsResult__array *)0x0) {
    pIVar11 = MethodInfo_Action_1_ApplicationManagers_Credits_AottgCreditsResult;
    pSVar6 = System_Collections_Generic_List_object___ToArray
                       ((System_Collections_Generic_List_object__o *)__this_01,
                        (MethodInfo_362E340 *)MethodInfo_Action_1_ApplicationManagers_Credits_AottgCreditsResult);
    pSVar5 = (__this->fields)._subscribers;
    if (pSVar5 != (System_Collections_Generic_List_Action_AottgCreditsResult___o *)0x0) {
      piVar1 = &(pSVar5->fields)._version;
      *piVar1 = *piVar1 + 1;
      length = (pSVar5->fields)._size;
      (pSVar5->fields)._size = 0;
      if (0 < length) {
        __this_01 = (pSVar5->fields)._items;
        pIVar11 = (Il2CppClass *)0x0;
        System_Array__Clear((System_Array_o *)__this_01,0,length,(MethodInfo *)0x0);
      }
      if (pSVar6 != (System_Object_array *)0x0) {
        if ((int)pSVar6->max_length < 1) {
          return;
        }
        uVar9 = 0;
        if ((pSVar6->max_length & 0xffffffff) != 0) {
          do {
            pIVar7 = pSVar6->m_Items[uVar9];
            if (pIVar7 != (Il2CppObject *)0x0) {
              if (pIVar7 == (Il2CppObject *)0x0) goto label_044c5c0a;
              __this_01 = (System_Action_AottgCreditsResult__array *)pIVar7[4].klass;
              pIVar11 = __this_00;
              (*pIVar7[1].monitor)(__this_01,__this_00,pIVar7[2].monitor);
            }
            uVar9 = uVar9 + 1;
            uVar2 = (uint)pSVar6->max_length;
            if ((long)(int)uVar2 <= (long)uVar9) {
              return;
            }
          } while (uVar9 < uVar2);
        }
        il2cpp_runtime_helper_022b2ca0();
        if (g_data_057aead5 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsResult);
          g_data_057aead5 = '\x01';
        }
        pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgCreditsResult);
        System_Object___ctor(pIVar7,(MethodInfo *)0x0);
        *(undefined4 *)&pIVar7[1].klass = 4;
        pIVar7[1].monitor = __this_01;
        il2cpp_runtime_helper_022b4080(&pIVar7[1].monitor,__this_01);
        pIVar7[2].klass = pIVar11;
        il2cpp_runtime_helper_022b4080(pIVar7 + 2,pIVar11);
        *(undefined2 *)&pIVar7[2].monitor = 0x101;
        *(undefined1 *)((long)&pIVar7[2].monitor + 2) = 0;
        return;
      }
    }
  }
label_044c5c0a:
  il2cpp_runtime_helper_022b2c90();
  return;
}


// ApplicationManagers.Credits.AottgCreditsCache$$.cctor
// il2cpp: void ApplicationManagers_Credits_AottgCreditsCache___cctor (const MethodInfo* method);
// 0x44c5d20

void ApplicationManagers_Credits_AottgCreditsCache___cctor(MethodInfo *method)

{
  System_TimeSpan_Fields SVar1;
  
  if (g_data_057aeacb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsCache);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TimeSpan);
    g_data_057aeacb = '\x01';
  }
  if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  SVar1._ticks = (int64_t)System_TimeSpan__FromMinutes(30.0,(MethodInfo *)0x0);
  (*(System_TimeSpan_Fields **)(TypeInfo_AottgCreditsCache + 0xb8))->_ticks = SVar1._ticks;
  return;
}


