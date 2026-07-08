// Type: ApplicationManagers.Credits.AottgCreditsCache
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/ApplicationManagers.Credits/AottgCreditsCache.cs
// Prior source: NEW in this update
// --------------------------------

// ApplicationManagers.Credits.AottgCreditsCache.<>c$$.cctor
// il2cpp: void ApplicationManagers_Credits_AottgCreditsCache___c___cctor (const MethodInfo* method);
// 0x41ace60

void ApplicationManagers_Credits_AottgCreditsCache_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05704cfe == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05704cfe = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// ApplicationManagers.Credits.AottgCreditsCache.<>c$$.ctor
// il2cpp: void ApplicationManagers_Credits_AottgCreditsCache___c___ctor (ApplicationManagers_Credits_AottgCreditsCache___c_o* __this, const MethodInfo* method);
// 0x41aced0

void ApplicationManagers_Credits_AottgCreditsCache_<>c___ctor
               (ApplicationManagers_Credits_AottgCreditsCache___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.Credits.AottgCreditsCache.<>c$$<.ctor>b__8_0
// il2cpp: System_DateTimeOffset_o ApplicationManagers_Credits_AottgCreditsCache___c____ctor_b__8_0 (ApplicationManagers_Credits_AottgCreditsCache___c_o* __this, const MethodInfo* method);
// 0x41acee0

System_DateTimeOffset_o
ApplicationManagers_Credits_AottgCreditsCache_<>c__<_ctor>b__8_0
          (ApplicationManagers_Credits_AottgCreditsCache___c_o *__this,MethodInfo *method)

{
  int iVar1;
  System_DateTimeOffset_Fields SVar2;
  
  if (DAT_05704cff == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_DateTimeOffset);
    DAT_05704cff = '\x01';
    iVar1 = *(int *)(TypeInfo_DateTimeOffset + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_DateTimeOffset + 0xe4);
  }
  if (iVar1 != 0) {
    SVar2 = (System_DateTimeOffset_Fields)System_DateTimeOffset__get_UtcNow((MethodInfo *)0x0);
    return (System_DateTimeOffset_o)SVar2;
  }
  il2cpp_init_class();
  SVar2 = (System_DateTimeOffset_Fields)System_DateTimeOffset__get_UtcNow((MethodInfo *)0x0);
  return (System_DateTimeOffset_o)SVar2;
}


// ApplicationManagers.Credits.AottgCreditsCache$$.ctor
// il2cpp: void ApplicationManagers_Credits_AottgCreditsCache___ctor (ApplicationManagers_Credits_AottgCreditsCache_o* __this, System_Action_Action_AottgCreditsFetchResponse___o* fetch, System_Func_DateTimeOffset__o* now, System_Nullable_TimeSpan__o ttl, const MethodInfo* method);
// 0x41ac250

void ApplicationManagers_Credits_AottgCreditsCache___ctor
               (ApplicationManagers_Credits_AottgCreditsCache_o *__this,
               System_Action_Action_AottgCreditsFetchResponse___o *fetch,
               System_Func_DateTimeOffset__o *now,System_Nullable_TimeSpan__o ttl,MethodInfo *method
               )

{
  long lVar1;
  System_Collections_Generic_List_Action_AottgCreditsResult___o *__this_00;
  undefined8 uVar2;
  System_ArgumentNullException_o *__this_01;
  System_String_o *paramName;
  System_TimeSpan_Fields SVar3;
  
  SVar3._ticks = (int64_t)ttl.fields.value.fields._ticks;
  if (DAT_05704cf8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgCreditsCache);
    il2cpp_init_method_metadata(&TypeInfo_Func_DateTimeOffset);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_Action_1_ApplicationManagers_Credi);
    il2cpp_init_method_metadata(&TypeInfo_List_Action_AottgCreditsResult);
    il2cpp_init_method_metadata(&MethodInfo_TimeSpan_GetValueOrDefault);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_HasValue);
    il2cpp_init_method_metadata(&MethodInfo_DateTimeOffset___ctor_b__8_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05704cf8 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_Action_AottgCreditsResult___o *)
              il2cpp_runtime_glue(TypeInfo_List_Action_AottgCreditsResult);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_System_Action_1_ApplicationManagers_Credi);
  (__this->fields)._subscribers = __this_00;
  il2cpp_runtime_glue(&(__this->fields)._subscribers);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (fetch != (System_Action_Action_AottgCreditsFetchResponse___o *)0x0) {
    if (__this != (ApplicationManagers_Credits_AottgCreditsCache_o *)0x0) {
      (__this->fields)._fetch = fetch;
      il2cpp_runtime_glue(&(__this->fields)._fetch,fetch);
      if (now == (System_Func_DateTimeOffset__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
          now = *(System_Func_DateTimeOffset__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
        }
        else {
          now = *(System_Func_DateTimeOffset__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
        }
        if (now == (System_Func_DateTimeOffset__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          now = (System_Func_DateTimeOffset__o *)il2cpp_runtime_glue(TypeInfo_Func_DateTimeOffset);
          System_Func<DateTimeOffset>___ctor();
          lVar1 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_DateTimeOffset__o **)(lVar1 + 8) = now;
          il2cpp_runtime_glue(lVar1 + 8,now);
        }
      }
      (__this->fields)._now = now;
      il2cpp_runtime_glue(&(__this->fields)._now,now);
      if ((char)ttl.fields.hasValue == '\0') {
        if (*(int *)(TypeInfo_AottgCreditsCache + 0xe4) == 0) {
          il2cpp_init_class();
        }
        SVar3._ticks = **(int64_t **)(TypeInfo_AottgCreditsCache + 0xb8);
      }
      (__this->fields)._ttl.fields._ticks = SVar3._ticks;
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentNullException);
  __this_01 = (System_ArgumentNullException_o *)il2cpp_runtime_glue(uVar2);
  paramName = (System_String_o *)il2cpp_init_method_metadata(&"fetch");
  System_ArgumentNullException___ctor(__this_01,paramName,(MethodInfo *)0x0);
  uVar2 = il2cpp_init_method_metadata(&MethodInfo_AottgCreditsCache);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_01,uVar2);
}


// ApplicationManagers.Credits.AottgCreditsCache$$get_HasCache
// il2cpp: bool ApplicationManagers_Credits_AottgCreditsCache__get_HasCache (ApplicationManagers_Credits_AottgCreditsCache_o* __this, const MethodInfo* method);
// 0x41ac490

bool_conflict
ApplicationManagers_Credits_AottgCreditsCache__get_HasCache
          (ApplicationManagers_Credits_AottgCreditsCache_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),
                  (__this->fields)._cachedCredits !=
                  (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0);
}


// ApplicationManagers.Credits.AottgCreditsCache$$get_IsInFlight
// il2cpp: bool ApplicationManagers_Credits_AottgCreditsCache__get_IsInFlight (ApplicationManagers_Credits_AottgCreditsCache_o* __this, const MethodInfo* method);
// 0x41ac4a0

bool_conflict
ApplicationManagers_Credits_AottgCreditsCache__get_IsInFlight
          (ApplicationManagers_Credits_AottgCreditsCache_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),(char)(__this->fields)._inFlight);
}


// ApplicationManagers.Credits.AottgCreditsCache$$Clear
// il2cpp: void ApplicationManagers_Credits_AottgCreditsCache__Clear (ApplicationManagers_Credits_AottgCreditsCache_o* __this, const MethodInfo* method);
// 0x41ac4b0

void ApplicationManagers_Credits_AottgCreditsCache__Clear
               (ApplicationManagers_Credits_AottgCreditsCache_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  System_Collections_Generic_List_Action_AottgCreditsResult___o *pSVar2;
  
  if (DAT_05704cf9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    DAT_05704cf9 = '\x01';
  }
  (__this->fields)._cachedCredits = (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0;
  il2cpp_runtime_glue(&(__this->fields)._cachedCredits);
  (__this->fields)._cachedAt.fields._dateTime.fields._dateData = 0;
  *(undefined8 *)&(__this->fields)._cachedAt.fields._offsetMinutes = 0;
  *(undefined1 *)&(__this->fields)._inFlight = 0;
  pSVar2 = (__this->fields)._subscribers;
  if (pSVar2 != (System_Collections_Generic_List_Action_AottgCreditsResult___o *)0x0) {
    piVar1 = &(pSVar2->fields)._version;
    *piVar1 = *piVar1 + 1;
    length = (pSVar2->fields)._size;
    (pSVar2->fields)._size = 0;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.Credits.AottgCreditsCache$$Get
// il2cpp: void ApplicationManagers_Credits_AottgCreditsCache__Get (ApplicationManagers_Credits_AottgCreditsCache_o* __this, System_Action_AottgCreditsResult__o* onResult, bool forceRefresh, const MethodInfo* method);
// 0x41ac520

void ApplicationManagers_Credits_AottgCreditsCache__Get
               (ApplicationManagers_Credits_AottgCreditsCache_o *__this,
               System_Action_AottgCreditsResult__o *onResult,bool_conflict forceRefresh,
               MethodInfo *method)

{
  int32_t *piVar1;
  char cVar2;
  uint uVar3;
  ApplicationManagers_Credits_AottgCreditsResponse_o *pAVar4;
  System_Collections_Generic_List_Action_AottgCreditsResult___o *__this_00;
  System_Action_AottgCreditsResult__array *pSVar5;
  System_Action_Action_AottgCreditsFetchResponse___o *pSVar6;
  long lVar7;
  bool_conflict bVar8;
  Il2CppObject *pIVar9;
  code *vtable_dispatch;
  intptr_t iVar10;
  System_Action_AottgCreditsResult__o *method_00;
  intptr_t iVar11;
  
  method_00 = onResult;
  if (DAT_05704cfa == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgCreditsFetchResponse);
    il2cpp_init_method_metadata(&MethodInfo_Void_CompleteFetch);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    DAT_05704cfa = '\x01';
  }
  if (onResult == (System_Action_AottgCreditsResult__o *)0x0) {
    return;
  }
  if (((char)forceRefresh == '\0') &&
     (bVar8 = ApplicationManagers_Credits_AottgCreditsCache__IsFresh(__this,(MethodInfo *)method_00)
     , (char)bVar8 != '\0')) {
    pAVar4 = (__this->fields)._cachedCredits;
    if (DAT_05704d04 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_AottgCreditsResult);
      DAT_05704d04 = '\x01';
    }
    pIVar9 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_AottgCreditsResult);
    System_Object___ctor(pIVar9,(MethodInfo *)0x0);
    *(undefined4 *)&pIVar9[1].klass = 1;
    pIVar9[1].monitor = pAVar4;
    il2cpp_runtime_glue(&pIVar9[1].monitor,pAVar4);
    pIVar9[2].klass = (Il2CppClass *)0x0;
    il2cpp_runtime_glue(pIVar9 + 2,0);
    *(undefined2 *)&pIVar9[2].monitor = 1;
    *(undefined1 *)((long)&pIVar9[2].monitor + 2) = 0;
    iVar11 = (onResult->fields).method_code;
    vtable_dispatch = (code *)(onResult->fields).invoke_impl;
    iVar10 = (onResult->fields).method;
LAB_041ac7bd:
    (*vtable_dispatch)(iVar11,pIVar9,iVar10);
    return;
  }
  pAVar4 = (__this->fields)._cachedCredits;
  if (pAVar4 == (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0) {
    if (DAT_05704d03 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_AottgCreditsResult);
      DAT_05704d03 = '\x01';
    }
    pIVar9 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_AottgCreditsResult);
    System_Object___ctor(pIVar9,(MethodInfo *)0x0);
    *(undefined4 *)&pIVar9[1].klass = 0;
    pIVar9[1].monitor = (void *)0x0;
    il2cpp_runtime_glue(&pIVar9[1].monitor,0);
    pIVar9[2].klass = (Il2CppClass *)0x0;
    il2cpp_runtime_glue(pIVar9 + 2,0);
    *(undefined2 *)&pIVar9[2].monitor = 0;
  }
  else {
    if (DAT_05704d05 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_AottgCreditsResult);
      DAT_05704d05 = '\x01';
    }
    pIVar9 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_AottgCreditsResult);
    System_Object___ctor(pIVar9,(MethodInfo *)0x0);
    *(undefined4 *)&pIVar9[1].klass = 2;
    pIVar9[1].monitor = pAVar4;
    il2cpp_runtime_glue(&pIVar9[1].monitor,pAVar4);
    pIVar9[2].klass = (Il2CppClass *)0x0;
    il2cpp_runtime_glue(pIVar9 + 2,0);
    *(undefined2 *)&pIVar9[2].monitor = 0x101;
  }
  *(undefined1 *)((long)&pIVar9[2].monitor + 2) = 1;
  (*(code *)(onResult->fields).invoke_impl)
            ((onResult->fields).method_code,pIVar9,(onResult->fields).method);
  lVar7 = MethodInfo_Void_Add;
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
        il2cpp_runtime_glue(pSVar5->m_Items + (int)uVar3,onResult);
        cVar2 = (char)(__this->fields)._inFlight;
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)onResult,
                   *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        cVar2 = (char)(__this->fields)._inFlight;
      }
      if (cVar2 != '\0') {
        return;
      }
      *(undefined1 *)&(__this->fields)._inFlight = 1;
      pSVar6 = (__this->fields)._fetch;
      pIVar9 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_Action_AottgCreditsFetchResponse);
      System_Action<object>___ctor();
      if (pSVar6 != (System_Action_Action_AottgCreditsFetchResponse___o *)0x0) {
        iVar11 = (pSVar6->fields).method_code;
        vtable_dispatch = (code *)(pSVar6->fields).invoke_impl;
        iVar10 = (pSVar6->fields).method;
        goto LAB_041ac7bd;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.Credits.AottgCreditsCache$$IsFresh
// il2cpp: bool ApplicationManagers_Credits_AottgCreditsCache__IsFresh (ApplicationManagers_Credits_AottgCreditsCache_o* __this, const MethodInfo* method);
// 0x41ac7d0

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
  undefined1 auVar5 [16];
  System_DateTimeOffset_o left;
  System_DateTimeOffset_o right;
  
  if (DAT_05704cfb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_DateTimeOffset);
    il2cpp_init_method_metadata(&TypeInfo_TimeSpan);
    DAT_05704cfb = '\x01';
  }
  if ((__this->fields)._cachedCredits != (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0)
  {
    pSVar1 = (__this->fields)._now;
    if (pSVar1 != (System_Func_DateTimeOffset__o *)0x0) {
      auVar5 = (*(code *)(pSVar1->fields).invoke_impl)
                         ((pSVar1->fields).method_code,(pSVar1->fields).method);
      uVar2 = (__this->fields)._cachedAt.fields._dateTime;
      uVar3 = (__this->fields)._cachedAt.fields._offsetMinutes;
      right.fields._offsetMinutes = uVar3;
      right.fields._dateTime.fields._dateData =
           (System_DateTime_Fields)(System_DateTime_Fields)uVar2;
      if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
        il2cpp_init_class();
      }
      left.fields._8_8_ = auVar5._8_8_ & 0xffffffff;
      left.fields._dateTime.fields._dateData = (System_DateTime_Fields)(uint64_t)auVar5._0_8_;
      right.fields._10_6_ = 0;
      t1 = System_DateTimeOffset__op_Subtraction(left,right,(MethodInfo *)0x0);
      t2.fields._ticks = (System_TimeSpan_Fields)(__this->fields)._ttl.fields._ticks;
      if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar4 = System_TimeSpan__op_LessThan(t1,t2,(MethodInfo *)0x0);
      return bVar4;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return 0;
}


// ApplicationManagers.Credits.AottgCreditsCache$$CompleteFetch
// il2cpp: void ApplicationManagers_Credits_AottgCreditsCache__CompleteFetch (ApplicationManagers_Credits_AottgCreditsCache_o* __this, ApplicationManagers_Credits_AottgCreditsFetchResponse_o* response, const MethodInfo* method);
// 0x41aca30

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
  Il2CppObject *pIVar6;
  Il2CppObject *__this_00;
  System_Object_array *pSVar7;
  undefined1 uVar8;
  ulong uVar9;
  Il2CppClass *pIVar10;
  unkbyte10 Var11;
  
  if (DAT_05704cfc == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Action_1_ApplicationManagers_Credits_AottgCredit);
    il2cpp_init_method_metadata(&"unknown_error");
    DAT_05704cfc = '\x01';
  }
  *(undefined1 *)&(__this->fields)._inFlight = 0;
  if (((response == (ApplicationManagers_Credits_AottgCreditsFetchResponse_o *)0x0) ||
      ((char)(response->fields)._Success_k__BackingField == '\0')) ||
     (pAVar3 = (response->fields)._Credits_k__BackingField,
     pAVar3 == (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0)) {
    pAVar3 = (__this->fields)._cachedCredits;
    pIVar10 = "unknown_error";
    if (response != (ApplicationManagers_Credits_AottgCreditsFetchResponse_o *)0x0) {
      pIVar10 = (Il2CppClass *)(response->fields)._Error_k__BackingField;
    }
    if (pAVar3 == (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0) {
      if (DAT_05704d06 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_AottgCreditsResult);
        DAT_05704d06 = '\x01';
      }
      __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_AottgCreditsResult);
      System_Object___ctor(__this_00,(MethodInfo *)0x0);
      *(undefined4 *)&__this_00[1].klass = 3;
      __this_00[1].monitor = (void *)0x0;
      il2cpp_runtime_glue(&__this_00[1].monitor,0);
      __this_00[2].klass = pIVar10;
      goto LAB_041acc17;
    }
    if (DAT_05704d07 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_AottgCreditsResult);
      DAT_05704d07 = '\x01';
    }
    __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_AottgCreditsResult);
    System_Object___ctor(__this_00,(MethodInfo *)0x0);
    *(undefined4 *)&__this_00[1].klass = 4;
    __this_00[1].monitor = pAVar3;
    il2cpp_runtime_glue(&__this_00[1].monitor,pAVar3);
    __this_00[2].klass = pIVar10;
    il2cpp_runtime_glue(__this_00 + 2,pIVar10);
    uVar8 = 1;
  }
  else {
    (__this->fields)._cachedCredits = pAVar3;
    il2cpp_runtime_glue(&(__this->fields)._cachedCredits);
    pSVar4 = (__this->fields)._now;
    if (pSVar4 == (System_Func_DateTimeOffset__o *)0x0) goto LAB_041accda;
    Var11 = (*(code *)(pSVar4->fields).invoke_impl)((pSVar4->fields).method_code);
    (__this->fields)._cachedAt.fields._dateTime = (System_DateTime_o)(long)Var11;
    (__this->fields)._cachedAt.fields._offsetMinutes = (short)((unkuint10)Var11 >> 0x40);
    pAVar3 = (__this->fields)._cachedCredits;
    if (DAT_05704d04 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_AottgCreditsResult);
      DAT_05704d04 = '\x01';
    }
    __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_AottgCreditsResult);
    System_Object___ctor(__this_00,(MethodInfo *)0x0);
    *(undefined4 *)&__this_00[1].klass = 1;
    __this_00[1].monitor = pAVar3;
    il2cpp_runtime_glue(&__this_00[1].monitor,pAVar3);
    __this_00[2].klass = (Il2CppClass *)0x0;
    pIVar10 = (Il2CppClass *)0x0;
LAB_041acc17:
    uVar8 = 0;
    il2cpp_runtime_glue(__this_00 + 2,pIVar10);
  }
  *(undefined1 *)&__this_00[2].monitor = uVar8;
  *(undefined1 *)((long)&__this_00[2].monitor + 1) = uVar8;
  *(undefined1 *)((long)&__this_00[2].monitor + 2) = 0;
  pSVar5 = (__this->fields)._subscribers;
  if (pSVar5 != (System_Collections_Generic_List_Action_AottgCreditsResult___o *)0x0) {
    pSVar7 = System_Collections_Generic_List<object>__ToArray
                       ((System_Collections_Generic_List_object__o *)pSVar5,MethodInfo_Action_1_ApplicationManagers_Credits_AottgCredit);
    pSVar5 = (__this->fields)._subscribers;
    if (pSVar5 != (System_Collections_Generic_List_Action_AottgCreditsResult___o *)0x0) {
      piVar1 = &(pSVar5->fields)._version;
      *piVar1 = *piVar1 + 1;
      length = (pSVar5->fields)._size;
      (pSVar5->fields)._size = 0;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar5->fields)._items,0,length,(MethodInfo *)0x0);
      }
      if (pSVar7 != (System_Object_array *)0x0) {
        if ((int)pSVar7->max_length < 1) {
          return;
        }
        uVar9 = 0;
        if ((pSVar7->max_length & 0xffffffff) != 0) {
          do {
            pIVar6 = pSVar7->m_Items[uVar9];
            if (pIVar6 != (Il2CppObject *)0x0) {
              if (pIVar6 == (Il2CppObject *)0x0) goto LAB_041accda;
              (*pIVar6[1].monitor)(pIVar6[4].klass,__this_00,pIVar6[2].monitor);
            }
            uVar9 = uVar9 + 1;
            uVar2 = (uint)pSVar7->max_length;
            if ((long)(int)uVar2 <= (long)uVar9) {
              return;
            }
          } while (uVar9 < uVar2);
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
  }
LAB_041accda:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.Credits.AottgCreditsCache$$.cctor
// il2cpp: void ApplicationManagers_Credits_AottgCreditsCache___cctor (const MethodInfo* method);
// 0x41acdf0

/* WARNING: Type propagation algorithm not settling */

void ApplicationManagers_Credits_AottgCreditsCache___cctor(MethodInfo *method)

{
  System_TimeSpan_Fields SVar1;
  
  if (DAT_05704cfd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgCreditsCache);
    il2cpp_init_method_metadata(&TypeInfo_TimeSpan);
    DAT_05704cfd = '\x01';
  }
  if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
    il2cpp_init_class();
  }
  SVar1._ticks = (int64_t)System_TimeSpan__FromMinutes(30.0,(MethodInfo *)0x0);
  (*(System_TimeSpan_Fields **)(TypeInfo_AottgCreditsCache + 0xb8))->_ticks = SVar1._ticks;
  return;
}


