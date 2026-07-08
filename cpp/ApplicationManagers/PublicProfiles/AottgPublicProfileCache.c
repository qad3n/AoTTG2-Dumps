// Type: ApplicationManagers.PublicProfiles.AottgPublicProfileCache
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/ApplicationManagers.PublicProfiles/AottgPublicProfileCache.cs
// Prior source: NEW in this update
// --------------------------------

// ApplicationManagers.PublicProfiles.AottgPublicProfileCache.Entry$$HasFreshValue
// il2cpp: bool ApplicationManagers_PublicProfiles_AottgPublicProfileCache_Entry__HasFreshValue (ApplicationManagers_PublicProfiles_AottgPublicProfileCache_Entry_o* __this, System_DateTimeOffset_o now, const MethodInfo* method);
// 0x41a98d0

/* WARNING: Type propagation algorithm not settling */

bool_conflict
ApplicationManagers_PublicProfiles_AottgPublicProfileCache_Entry__HasFreshValue
          (ApplicationManagers_PublicProfiles_AottgPublicProfileCache_Entry_o *__this,
          System_DateTimeOffset_o now,MethodInfo *method)

{
  ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o *pAVar1;
  System_TimeSpan_Fields t2;
  undefined1 auVar2 [12];
  undefined8 uVar3;
  undefined2 uVar4;
  bool_conflict bVar5;
  System_TimeSpan_o t1;
  System_TimeSpan_Fields *pSVar6;
  System_DateTimeOffset_o left;
  System_DateTimeOffset_o right;
  
  if (DAT_05704ce4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgPublicProfileCache);
    il2cpp_init_method_metadata(&TypeInfo_DateTimeOffset);
    il2cpp_init_method_metadata(&TypeInfo_TimeSpan);
    DAT_05704ce4 = '\x01';
  }
  pAVar1 = (__this->fields).Response;
  if (pAVar1 != (ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o *)0x0) {
    bVar5 = (pAVar1->fields)._Success_k__BackingField;
    if (*(int *)(TypeInfo_AottgPublicProfileCache + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar6 = *(System_TimeSpan_Fields **)(TypeInfo_AottgPublicProfileCache + 0xb8) + 1;
    if ((char)bVar5 != '\0') {
      pSVar6 = *(System_TimeSpan_Fields **)(TypeInfo_AottgPublicProfileCache + 0xb8);
    }
    t2._ticks = pSVar6->_ticks;
    uVar3 = (__this->fields).CachedAt.fields._dateTime;
    uVar4 = (__this->fields).CachedAt.fields._offsetMinutes;
    right.fields._offsetMinutes = uVar4;
    right.fields._dateTime.fields._dateData = (System_DateTime_Fields)(System_DateTime_Fields)uVar3;
    if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
      il2cpp_init_class();
    }
    auVar2 = now.fields._0_12_;
    left.fields._12_4_ = 0;
    left.fields._dateTime.fields._dateData =
         (System_DateTime_Fields)(System_DateTime_Fields)auVar2._0_8_;
    left.fields._offsetMinutes = auVar2._8_2_;
    left.fields._10_2_ = auVar2._10_2_;
    right.fields._10_6_ = 0;
    t1 = System_DateTimeOffset__op_Subtraction(left,right,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar5 = System_TimeSpan__op_LessThan(t1,(System_TimeSpan_o)t2._ticks,(MethodInfo *)0x0);
    return bVar5;
  }
  return 0;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileCache.Entry$$.ctor
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileCache_Entry___ctor (ApplicationManagers_PublicProfiles_AottgPublicProfileCache_Entry_o* __this, const MethodInfo* method);
// 0x41a9850

void ApplicationManagers_PublicProfiles_AottgPublicProfileCache_Entry___ctor
               (ApplicationManagers_PublicProfiles_AottgPublicProfileCache_Entry_o *__this,
               MethodInfo *method)

{
  System_Collections_Generic_List_Action_AottgPublicProfileFetchResponse___o *__this_00;
  
  if (DAT_05704ce5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_Action_1_ApplicationManagers_Publi);
    il2cpp_init_method_metadata(&TypeInfo_List_Action_AottgPublicProfileFetchResponse);
    DAT_05704ce5 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_Action_AottgPublicProfileFetchResponse___o *)
              il2cpp_runtime_glue(TypeInfo_List_Action_AottgPublicProfileFetchResponse);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_System_Action_1_ApplicationManagers_Publi);
  (__this->fields).Subscribers = __this_00;
  il2cpp_runtime_glue(&__this->fields);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileCache.<>c$$.cctor
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileCache___c___cctor (const MethodInfo* method);
// 0x41a9c40

void ApplicationManagers_PublicProfiles_AottgPublicProfileCache_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05704ce6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05704ce6 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileCache.<>c$$.ctor
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileCache___c___ctor (ApplicationManagers_PublicProfiles_AottgPublicProfileCache___c_o* __this, const MethodInfo* method);
// 0x41a9cb0

void ApplicationManagers_PublicProfiles_AottgPublicProfileCache_<>c___ctor
               (ApplicationManagers_PublicProfiles_AottgPublicProfileCache___c_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileCache.<>c$$<.ctor>b__5_0
// il2cpp: System_DateTimeOffset_o ApplicationManagers_PublicProfiles_AottgPublicProfileCache___c____ctor_b__5_0 (ApplicationManagers_PublicProfiles_AottgPublicProfileCache___c_o* __this, const MethodInfo* method);
// 0x41a9cc0

System_DateTimeOffset_o
ApplicationManagers_PublicProfiles_AottgPublicProfileCache_<>c__<_ctor>b__5_0
          (ApplicationManagers_PublicProfiles_AottgPublicProfileCache___c_o *__this,
          MethodInfo *method)

{
  int iVar1;
  System_DateTimeOffset_Fields SVar2;
  
  if (DAT_05704ce7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_DateTimeOffset);
    DAT_05704ce7 = '\x01';
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


// ApplicationManagers.PublicProfiles.AottgPublicProfileCache.<>c__DisplayClass7_0$$.ctor
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileCache___c__DisplayClass7_0___ctor (ApplicationManagers_PublicProfiles_AottgPublicProfileCache___c__DisplayClass7_0_o* __this, const MethodInfo* method);
// 0x41a97a0

void ApplicationManagers_PublicProfiles_AottgPublicProfileCache_<>c__DisplayClass7_0___ctor
               (ApplicationManagers_PublicProfiles_AottgPublicProfileCache___c__DisplayClass7_0_o
                *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileCache.<>c__DisplayClass7_0$$<Get>b__0
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileCache___c__DisplayClass7_0___Get_b__0 (ApplicationManagers_PublicProfiles_AottgPublicProfileCache___c__DisplayClass7_0_o* __this, ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o* response, const MethodInfo* method);
// 0x41a9d20

void ApplicationManagers_PublicProfiles_AottgPublicProfileCache_<>c__DisplayClass7_0__<Get>b__0
               (ApplicationManagers_PublicProfiles_AottgPublicProfileCache___c__DisplayClass7_0_o
                *__this,ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o
                        *response,MethodInfo *method)

{
  int *piVar1;
  int32_t length;
  uint uVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Func_DateTimeOffset__o *pSVar3;
  Il2CppClass *pIVar4;
  Il2CppObject *pIVar5;
  ApplicationManagers_PublicProfiles_AottgPublicProfileCache_o *pAVar6;
  bool_conflict bVar7;
  System_Object_array *pSVar8;
  ulong uVar9;
  MethodInfo *method_00;
  unkbyte10 Var10;
  Il2CppObject *pIStack_28;
  undefined4 uStack_1e;
  undefined2 uStack_1a;
  
  pAVar6 = (__this->fields).__4__this;
  if (pAVar6 == (ApplicationManagers_PublicProfiles_AottgPublicProfileCache_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  method_00 = (MethodInfo *)(__this->fields).accountId;
  if (DAT_05704ce2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Action_1_ApplicationManagers_PublicProfiles_Aott);
    il2cpp_init_method_metadata(&"unknown_error");
    DAT_05704ce2 = '\x01';
  }
  pIStack_28 = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(pAVar6->fields)._entries;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar7 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                      (__this_00,(Il2CppObject *)method_00,&pIStack_28,MethodInfo_Boolean_TryGetValue);
    pIVar5 = pIStack_28;
    if ((char)bVar7 == '\0') {
      return;
    }
    if (pIStack_28 != (Il2CppObject *)0x0) {
      *(undefined1 *)&pIStack_28[3].klass = 0;
      if (response == (ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o *)0x0) {
        response = ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse__Fail
                             ("unknown_error",method_00);
      }
      pIVar5[1].monitor = response;
      il2cpp_runtime_glue(&pIVar5[1].monitor,response);
      pIVar5 = pIStack_28;
      pSVar3 = (pAVar6->fields)._now;
      if ((pSVar3 != (System_Func_DateTimeOffset__o *)0x0) &&
         (Var10 = (*(code *)(pSVar3->fields).invoke_impl)
                            ((pSVar3->fields).method_code,(pSVar3->fields).method),
         pIVar5 != (Il2CppObject *)0x0)) {
        *(unkbyte10 *)(pIVar5 + 2) = Var10;
        *(undefined2 *)((long)&pIVar5[2].monitor + 6) = uStack_1a;
        *(undefined4 *)((long)&pIVar5[2].monitor + 2) = uStack_1e;
        if ((pIStack_28 != (Il2CppObject *)0x0) &&
           (((pIStack_28[1].klass != (Il2CppClass *)0x0 &&
             (pSVar8 = System_Collections_Generic_List<object>__ToArray
                                 ((System_Collections_Generic_List_object__o *)pIStack_28[1].klass,
                                  MethodInfo_Action_1_ApplicationManagers_PublicProfiles_Aott), pIStack_28 != (Il2CppObject *)0x0)) &&
            (pIVar4 = pIStack_28[1].klass, pIVar4 != (Il2CppClass *)0x0)))) {
          piVar1 = (int *)((long)&(pIVar4->_1).namespaze + 4);
          *piVar1 = *piVar1 + 1;
          length = *(int32_t *)&(pIVar4->_1).namespaze;
          *(undefined4 *)&(pIVar4->_1).namespaze = 0;
          if (0 < length) {
            System_Array__Clear((System_Array_o *)(pIVar4->_1).name,0,length,(MethodInfo *)0x0);
          }
          if (pSVar8 != (System_Object_array *)0x0) {
            if ((int)pSVar8->max_length < 1) {
              return;
            }
            uVar9 = 0;
            if ((pSVar8->max_length & 0xffffffff) != 0) {
              do {
                pIVar5 = pSVar8->m_Items[uVar9];
                if (pIVar5 != (Il2CppObject *)0x0) {
                  if ((pIStack_28 == (Il2CppObject *)0x0) || (pIVar5 == (Il2CppObject *)0x0))
                  goto LAB_041a9b9f;
                  (*pIVar5[1].monitor)(pIVar5[4].klass,pIStack_28[1].monitor,pIVar5[2].monitor);
                }
                uVar9 = uVar9 + 1;
                uVar2 = (uint)pSVar8->max_length;
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
    }
  }
LAB_041a9b9f:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileCache$$.ctor
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileCache___ctor (ApplicationManagers_PublicProfiles_AottgPublicProfileCache_o* __this, System_Action_string__Action_AottgPublicProfileFetchResponse___o* fetch, System_Func_DateTimeOffset__o* now, const MethodInfo* method);
// 0x41a9240

void ApplicationManagers_PublicProfiles_AottgPublicProfileCache___ctor
               (ApplicationManagers_PublicProfiles_AottgPublicProfileCache_o *__this,
               System_Action_string__Action_AottgPublicProfileFetchResponse___o *fetch,
               System_Func_DateTimeOffset__o *now,MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  undefined8 uVar2;
  System_ArgumentNullException_o *__this_01;
  System_String_o *paramName;
  
  if (DAT_05704cdf == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_ApplicationManagers_P);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__Entry);
    il2cpp_init_method_metadata(&TypeInfo_Func_DateTimeOffset);
    il2cpp_init_method_metadata(&MethodInfo_DateTimeOffset___ctor_b__5_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05704cdf = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_string__Entry);
  System_Collections_Generic_Dictionary<object__object>___ctor(__this_00,MethodInfo_Dictionary_2_System_String_ApplicationManagers_P);
  (__this->fields)._entries =
       (System_Collections_Generic_Dictionary_string__AottgPublicProfileCache_Entry__o *)__this_00;
  il2cpp_runtime_glue(&(__this->fields)._entries);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (fetch != (System_Action_string__Action_AottgPublicProfileFetchResponse___o *)0x0) {
    if (__this != (ApplicationManagers_PublicProfiles_AottgPublicProfileCache_o *)0x0) {
      (__this->fields)._fetch = fetch;
      il2cpp_runtime_glue(&__this->fields,fetch);
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
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentNullException);
  __this_01 = (System_ArgumentNullException_o *)il2cpp_runtime_glue(uVar2);
  paramName = (System_String_o *)il2cpp_init_method_metadata(&"fetch");
  System_ArgumentNullException___ctor(__this_01,paramName,(MethodInfo *)0x0);
  uVar2 = il2cpp_init_method_metadata(&MethodInfo_AottgPublicProfileCache);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_01,uVar2);
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileCache$$Clear
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileCache__Clear (ApplicationManagers_PublicProfiles_AottgPublicProfileCache_o* __this, const MethodInfo* method);
// 0x41a9420

void ApplicationManagers_PublicProfiles_AottgPublicProfileCache__Clear
               (ApplicationManagers_PublicProfiles_AottgPublicProfileCache_o *__this,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if (DAT_05704ce0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    DAT_05704ce0 = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._entries;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object__object>__Clear(__this_00,MethodInfo_Void_Clear);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileCache$$Get
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileCache__Get (ApplicationManagers_PublicProfiles_AottgPublicProfileCache_o* __this, System_String_o* accountId, System_Action_AottgPublicProfileFetchResponse__o* onResult, const MethodInfo* method);
// 0x41a9460

void ApplicationManagers_PublicProfiles_AottgPublicProfileCache__Get
               (ApplicationManagers_PublicProfiles_AottgPublicProfileCache_o *__this,
               System_String_o *accountId,System_Action_AottgPublicProfileFetchResponse__o *onResult
               ,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  System_Action_AottgPublicProfileFetchResponse__array *pSVar4;
  System_Action_string__Action_AottgPublicProfileFetchResponse___o *pSVar5;
  void *pvVar6;
  long lVar7;
  bool_conflict bVar8;
  Il2CppObject *__this_00;
  ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o *pAVar9;
  ApplicationManagers_PublicProfiles_AottgPublicProfileCache_Entry_o *pAVar10;
  System_Collections_Generic_List_Action_AottgPublicProfileFetchResponse___o *pSVar11;
  undefined8 uVar12;
  System_Func_DateTimeOffset__o *method_00;
  void **ppvVar13;
  MethodInfo *method_01;
  System_DateTimeOffset_o now;
  ApplicationManagers_PublicProfiles_AottgPublicProfileCache_Entry_o *pAStack_38;
  
  if (DAT_05704ce1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgPublicProfileFetchResponse);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&TypeInfo_Entry);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void__Get_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass7_0);
    il2cpp_init_method_metadata(&"bad_account_id");
    DAT_05704ce1 = '\x01';
  }
  pAStack_38 = (ApplicationManagers_PublicProfiles_AottgPublicProfileCache_Entry_o *)0x0;
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass7_0);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_00 + 1,__this);
    ppvVar13 = &__this_00[1].monitor;
    __this_00[1].monitor = accountId;
    il2cpp_runtime_glue(ppvVar13);
    method_01 = (MethodInfo *)0x0;
    bVar8 = System_String__IsNullOrEmpty(__this_00[1].monitor,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      if (onResult == (System_Action_AottgPublicProfileFetchResponse__o *)0x0) {
        return;
      }
      pAVar9 = ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse__Fail
                         ("bad_account_id",method_01);
      (*(code *)(onResult->fields).invoke_impl)
                ((onResult->fields).method_code,pAVar9,(onResult->fields).method);
      return;
    }
    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._entries;
    if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      bVar8 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                        (pSVar3,*ppvVar13,(Il2CppObject **)&pAStack_38,MethodInfo_Boolean_TryGetValue);
      if ((char)bVar8 == '\0') {
        pAVar10 = (ApplicationManagers_PublicProfiles_AottgPublicProfileCache_Entry_o *)
                  il2cpp_runtime_glue(TypeInfo_Entry);
        if (DAT_05704ce5 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_List_1_System_Action_1_ApplicationManagers_Publi);
          il2cpp_init_method_metadata(&TypeInfo_List_Action_AottgPublicProfileFetchResponse);
          DAT_05704ce5 = '\x01';
        }
        pSVar11 = (System_Collections_Generic_List_Action_AottgPublicProfileFetchResponse___o *)
                  il2cpp_runtime_glue(TypeInfo_List_Action_AottgPublicProfileFetchResponse);
        System_Collections_Generic_List<object>___ctor
                  ((System_Collections_Generic_List_object__o *)pSVar11,MethodInfo_List_1_System_Action_1_ApplicationManagers_Publi);
        (pAVar10->fields).Subscribers = pSVar11;
        il2cpp_runtime_glue(&pAVar10->fields);
        System_Object___ctor((Il2CppObject *)pAVar10,(MethodInfo *)0x0);
        pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                 (__this->fields)._entries;
        pAStack_38 = pAVar10;
        if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
        goto LAB_041a978d;
        System_Collections_Generic_Dictionary<object__object>__set_Item
                  (pSVar3,*ppvVar13,(Il2CppObject *)pAVar10,MethodInfo_Void_set_Item);
      }
      pAVar10 = pAStack_38;
      method_00 = (__this->fields)._now;
      if ((method_00 != (System_Func_DateTimeOffset__o *)0x0) &&
         (now.fields = (System_DateTimeOffset_Fields)
                       (*(code *)(method_00->fields).invoke_impl)
                                 (((_union_14 *)&(method_00->fields).method_code)->genericMethod,
                                  (Il2CppType *)(method_00->fields).method),
         pAVar10 != (ApplicationManagers_PublicProfiles_AottgPublicProfileCache_Entry_o *)0x0)) {
        bVar8 = ApplicationManagers_PublicProfiles_AottgPublicProfileCache_Entry__HasFreshValue
                          (pAVar10,now,(MethodInfo *)method_00);
        lVar7 = MethodInfo_Void_Add;
        if ((char)bVar8 == '\0') {
          if (onResult != (System_Action_AottgPublicProfileFetchResponse__o *)0x0) {
            if ((pAStack_38 ==
                 (ApplicationManagers_PublicProfiles_AottgPublicProfileCache_Entry_o *)0x0) ||
               (pSVar11 = (pAStack_38->fields).Subscribers,
               pSVar11 ==
               (System_Collections_Generic_List_Action_AottgPublicProfileFetchResponse___o *)0x0))
            goto LAB_041a978d;
            piVar1 = &(pSVar11->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar4 = (pSVar11->fields)._items;
            if (pSVar4 == (System_Action_AottgPublicProfileFetchResponse__array *)0x0)
            goto LAB_041a978d;
            uVar2 = (pSVar11->fields)._size;
            if (uVar2 < (uint)pSVar4->max_length) {
              (pSVar11->fields)._size = uVar2 + 1;
              pSVar4->m_Items[(int)uVar2] = onResult;
              il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar2,onResult);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar11,
                         (Il2CppObject *)onResult,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70))
              ;
            }
          }
          if (pAStack_38 ==
              (ApplicationManagers_PublicProfiles_AottgPublicProfileCache_Entry_o *)0x0)
          goto LAB_041a978d;
          if ((char)(pAStack_38->fields).InFlight == '\0') {
            *(undefined1 *)&(pAStack_38->fields).InFlight = 1;
            pSVar5 = (__this->fields)._fetch;
            pvVar6 = __this_00[1].monitor;
            uVar12 = il2cpp_runtime_glue(TypeInfo_Action_AottgPublicProfileFetchResponse);
            System_Action<object>___ctor();
            if (pSVar5 == (System_Action_string__Action_AottgPublicProfileFetchResponse___o *)0x0)
            goto LAB_041a978d;
            (*(code *)(pSVar5->fields).invoke_impl)
                      ((pSVar5->fields).method_code,pvVar6,uVar12,(pSVar5->fields).method);
          }
        }
        else if (onResult != (System_Action_AottgPublicProfileFetchResponse__o *)0x0) {
          if (pAStack_38 ==
              (ApplicationManagers_PublicProfiles_AottgPublicProfileCache_Entry_o *)0x0)
          goto LAB_041a978d;
          (*(code *)(onResult->fields).invoke_impl)
                    ((onResult->fields).method_code,(pAStack_38->fields).Response,
                     (onResult->fields).method);
        }
        return;
      }
    }
  }
LAB_041a978d:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileCache$$Complete
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileCache__Complete (ApplicationManagers_PublicProfiles_AottgPublicProfileCache_o* __this, System_String_o* accountId, ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o* response, const MethodInfo* method);
// 0x41a99d0

void ApplicationManagers_PublicProfiles_AottgPublicProfileCache__Complete
               (ApplicationManagers_PublicProfiles_AottgPublicProfileCache_o *__this,
               System_String_o *accountId,
               ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o *response,
               MethodInfo *method)

{
  int *piVar1;
  int32_t length;
  uint uVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Func_DateTimeOffset__o *pSVar3;
  Il2CppClass *pIVar4;
  Il2CppObject *pIVar5;
  bool_conflict bVar6;
  System_Object_array *pSVar7;
  ulong uVar8;
  unkbyte10 Var9;
  Il2CppObject *pIStack_28;
  undefined4 uStack_1e;
  undefined2 uStack_1a;
  
  if (DAT_05704ce2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Action_1_ApplicationManagers_PublicProfiles_Aott);
    il2cpp_init_method_metadata(&"unknown_error");
    DAT_05704ce2 = '\x01';
  }
  pIStack_28 = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._entries;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar6 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                      (__this_00,(Il2CppObject *)accountId,&pIStack_28,MethodInfo_Boolean_TryGetValue);
    pIVar5 = pIStack_28;
    if ((char)bVar6 == '\0') {
      return;
    }
    if (pIStack_28 != (Il2CppObject *)0x0) {
      *(undefined1 *)&pIStack_28[3].klass = 0;
      if (response == (ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o *)0x0) {
        response = ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse__Fail
                             ("unknown_error",(MethodInfo *)accountId);
      }
      pIVar5[1].monitor = response;
      il2cpp_runtime_glue(&pIVar5[1].monitor,response);
      pIVar5 = pIStack_28;
      pSVar3 = (__this->fields)._now;
      if ((pSVar3 != (System_Func_DateTimeOffset__o *)0x0) &&
         (Var9 = (*(code *)(pSVar3->fields).invoke_impl)
                           ((pSVar3->fields).method_code,(pSVar3->fields).method),
         pIVar5 != (Il2CppObject *)0x0)) {
        *(unkbyte10 *)(pIVar5 + 2) = Var9;
        *(undefined2 *)((long)&pIVar5[2].monitor + 6) = uStack_1a;
        *(undefined4 *)((long)&pIVar5[2].monitor + 2) = uStack_1e;
        if ((pIStack_28 != (Il2CppObject *)0x0) &&
           (((pIStack_28[1].klass != (Il2CppClass *)0x0 &&
             (pSVar7 = System_Collections_Generic_List<object>__ToArray
                                 ((System_Collections_Generic_List_object__o *)pIStack_28[1].klass,
                                  MethodInfo_Action_1_ApplicationManagers_PublicProfiles_Aott), pIStack_28 != (Il2CppObject *)0x0)) &&
            (pIVar4 = pIStack_28[1].klass, pIVar4 != (Il2CppClass *)0x0)))) {
          piVar1 = (int *)((long)&(pIVar4->_1).namespaze + 4);
          *piVar1 = *piVar1 + 1;
          length = *(int32_t *)&(pIVar4->_1).namespaze;
          *(undefined4 *)&(pIVar4->_1).namespaze = 0;
          if (0 < length) {
            System_Array__Clear((System_Array_o *)(pIVar4->_1).name,0,length,(MethodInfo *)0x0);
          }
          if (pSVar7 != (System_Object_array *)0x0) {
            if ((int)pSVar7->max_length < 1) {
              return;
            }
            uVar8 = 0;
            if ((pSVar7->max_length & 0xffffffff) != 0) {
              do {
                pIVar5 = pSVar7->m_Items[uVar8];
                if (pIVar5 != (Il2CppObject *)0x0) {
                  if ((pIStack_28 == (Il2CppObject *)0x0) || (pIVar5 == (Il2CppObject *)0x0))
                  goto LAB_041a9b9f;
                  (*pIVar5[1].monitor)(pIVar5[4].klass,pIStack_28[1].monitor,pIVar5[2].monitor);
                }
                uVar8 = uVar8 + 1;
                uVar2 = (uint)pSVar7->max_length;
                if ((long)(int)uVar2 <= (long)uVar8) {
                  return;
                }
              } while (uVar8 < uVar2);
            }
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
        }
      }
    }
  }
LAB_041a9b9f:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileCache$$.cctor
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileCache___cctor (const MethodInfo* method);
// 0x41a9bb0

/* WARNING: Type propagation algorithm not settling */

void ApplicationManagers_PublicProfiles_AottgPublicProfileCache___cctor(MethodInfo *method)

{
  System_TimeSpan_Fields SVar1;
  
  if (DAT_05704ce3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgPublicProfileCache);
    il2cpp_init_method_metadata(&TypeInfo_TimeSpan);
    DAT_05704ce3 = '\x01';
  }
  if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
    il2cpp_init_class();
  }
  SVar1._ticks = (int64_t)System_TimeSpan__FromMinutes(10.0,(MethodInfo *)0x0);
  (*(System_TimeSpan_Fields **)(TypeInfo_AottgPublicProfileCache + 0xb8))->_ticks = SVar1._ticks;
  SVar1._ticks = (int64_t)System_TimeSpan__FromSeconds(45.0,(MethodInfo *)0x0);
  ((System_TimeSpan_Fields *)(*(long *)(TypeInfo_AottgPublicProfileCache + 0xb8) + 8))->_ticks = SVar1._ticks;
  return;
}


