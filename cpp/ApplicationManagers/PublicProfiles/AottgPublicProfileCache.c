// Type: ApplicationManagers.PublicProfiles.AottgPublicProfileCache
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers.PublicProfiles/AottgPublicProfileCache.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.PublicProfiles.AottgPublicProfileCache.Entry$$HasFreshValue
// il2cpp: bool ApplicationManagers_PublicProfiles_AottgPublicProfileCache_Entry__HasFreshValue (ApplicationManagers_PublicProfiles_AottgPublicProfileCache_Entry_o* __this, System_DateTimeOffset_o now, const MethodInfo* method);
// 0x44c28d0

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
  System_DateTimeOffset_o right;
  System_DateTimeOffset_o left;
  
  if (g_data_057aeab2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgPublicProfileCache);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTimeOffset);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TimeSpan);
    g_data_057aeab2 = '\x01';
  }
  pAVar1 = (__this->fields).Response;
  if (pAVar1 != (ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o *)0x0) {
    bVar5 = (pAVar1->fields)._Success_k__BackingField;
    if (*(int *)(TypeInfo_AottgPublicProfileCache + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
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
      il2cpp_runtime_helper_02337ed0();
    }
    right.fields._10_6_ = 0;
    auVar2 = now.fields._0_12_;
    left.fields._12_4_ = 0;
    left.fields._dateTime.fields._dateData = (System_DateTime_Fields)(System_DateTime_Fields)auVar2._0_8_;
    left.fields._offsetMinutes = auVar2._8_2_;
    left.fields._10_2_ = auVar2._10_2_;
    t1 = System_DateTimeOffset__op_Subtraction(left,right,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = System_TimeSpan__op_LessThan(t1,(System_TimeSpan_o)t2._ticks,(MethodInfo *)0x0);
    return bVar5;
  }
  return 0;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileCache.Entry$$.ctor
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileCache_Entry___ctor (ApplicationManagers_PublicProfiles_AottgPublicProfileCache_Entry_o* __this, const MethodInfo* method);
// 0x44c2850

void ApplicationManagers_PublicProfiles_AottgPublicProfileCache_Entry___ctor
               (ApplicationManagers_PublicProfiles_AottgPublicProfileCache_Entry_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_Action_AottgPublicProfileFetchResponse___o *__this_00;
  
  if (g_data_057aeab3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Action_1_ApplicationManagers_PublicProfile);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Action_AottgPublicProfileFetchResponse);
    g_data_057aeab3 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_Action_AottgPublicProfileFetchResponse___o *)
              il2cpp_runtime_helper_023052d0(TypeInfo_List_Action_AottgPublicProfileFetchResponse);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_System_Action_1_ApplicationManagers_PublicProfile);
  (__this->fields).Subscribers = __this_00;
  il2cpp_runtime_helper_022b4080(&__this->fields);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileCache.<>c$$.cctor
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileCache___c___cctor (const MethodInfo* method);
// 0x44c2c40

void ApplicationManagers_PublicProfiles_AottgPublicProfileCache___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057aeab4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aeab4 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileCache.<>c$$.ctor
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileCache___c___ctor (ApplicationManagers_PublicProfiles_AottgPublicProfileCache___c_o* __this, const MethodInfo* method);
// 0x44c2cb0

void ApplicationManagers_PublicProfiles_AottgPublicProfileCache___c___ctor
               (ApplicationManagers_PublicProfiles_AottgPublicProfileCache___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileCache.<>c$$<.ctor>b__5_0
// il2cpp: System_DateTimeOffset_o ApplicationManagers_PublicProfiles_AottgPublicProfileCache___c____ctor_b__5_0 (ApplicationManagers_PublicProfiles_AottgPublicProfileCache___c_o* __this, const MethodInfo* method);
// 0x44c2cc0

System_DateTimeOffset_o
ApplicationManagers_PublicProfiles_AottgPublicProfileCache___c____ctor_b__5_0
          (ApplicationManagers_PublicProfiles_AottgPublicProfileCache___c_o *__this,MethodInfo *method)

{
  int iVar1;
  System_DateTimeOffset_Fields SVar2;
  
  if (g_data_057aeab5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTimeOffset);
    g_data_057aeab5 = '\x01';
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


// ApplicationManagers.PublicProfiles.AottgPublicProfileCache.<>c__DisplayClass7_0$$.ctor
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileCache___c__DisplayClass7_0___ctor (ApplicationManagers_PublicProfiles_AottgPublicProfileCache___c__DisplayClass7_0_o* __this, const MethodInfo* method);
// 0x44c27a0

void ApplicationManagers_PublicProfiles_AottgPublicProfileCache___c__DisplayClass7_0___ctor
               (ApplicationManagers_PublicProfiles_AottgPublicProfileCache___c__DisplayClass7_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileCache.<>c__DisplayClass7_0$$<Get>b__0
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileCache___c__DisplayClass7_0___Get_b__0 (ApplicationManagers_PublicProfiles_AottgPublicProfileCache___c__DisplayClass7_0_o* __this, ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o* response, const MethodInfo* method);
// 0x44c2d20

void ApplicationManagers_PublicProfiles_AottgPublicProfileCache___c__DisplayClass7_0___Get_b__0
               (ApplicationManagers_PublicProfiles_AottgPublicProfileCache___c__DisplayClass7_0_o *__this,
               ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o *response,
               MethodInfo *method)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  MethodInfo *in_RCX;
  System_Func_DateTimeOffset__o *extraout_RDX;
  ApplicationManagers_PublicProfiles_AottgPublicProfileCache_o *__this_00;
  ApplicationManagers_PublicProfiles_AottgPublicProfileCache_c *in_R8;
  void *in_R9;
  System_Action_string__Action_AottgPublicProfileFetchResponse___o *unaff_retaddr;
  System_Func_DateTimeOffset__o *in_stack_00000008;
  System_Collections_Generic_Dictionary_string__AottgPublicProfileCache_Entry__o *in_stack_00000010;
  ApplicationManagers_PublicProfiles_AottgPublicProfileCache_c *in_stack_00000018;
  undefined2 in_stack_00000020;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (ApplicationManagers_PublicProfiles_AottgPublicProfileCache_o *)0x0) {
    ApplicationManagers_PublicProfiles_AottgPublicProfileCache__Complete
              (__this_00,(__this->fields).accountId,response,in_RCX);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeab6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_Empty_String);
    g_data_057aeab6 = '\x01';
  }
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields)._fetch = (System_Action_string__Action_AottgPublicProfileFetchResponse___o *)response;
  il2cpp_runtime_helper_022b4080(&__this_00->fields,response);
  (__this_00->fields)._now = extraout_RDX;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields)._now,extraout_RDX);
  (__this_00->fields)._entries =
       (System_Collections_Generic_Dictionary_string__AottgPublicProfileCache_Entry__o *)in_RCX;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields)._entries);
  __this_00[1].klass = in_R8;
  il2cpp_runtime_helper_022b4080(__this_00 + 1);
  lVar2 = MethodInfo_String_Empty_String;
  if (in_R9 != (void *)0x0) goto label_044c2e3f;
  if (*(long *)(MethodInfo_String_Empty_String + 0x38) == 0) {
    il2cpp_runtime_helper_02300a20(MethodInfo_String_Empty_String);
    lVar3 = *(long *)(*(long *)(lVar2 + 0x38) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) goto label_044c2ec2;
label_044c2e0a:
    if (*(int *)(lVar3 + 0xe4) != 0) goto label_044c2e17;
label_044c2ed7:
    il2cpp_runtime_helper_02337ed0();
    lVar2 = *(long *)(*(long *)(lVar2 + 0x38) + 0x10);
    bVar1 = *(byte *)(lVar2 + 0x135);
  }
  else {
    lVar3 = *(long *)(*(long *)(MethodInfo_String_Empty_String + 0x38) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) != 0) goto label_044c2e0a;
label_044c2ec2:
    lVar3 = il2cpp_runtime_helper_023009c0();
    if (*(int *)(lVar3 + 0xe4) == 0) goto label_044c2ed7;
label_044c2e17:
    lVar2 = *(long *)(*(long *)(lVar2 + 0x38) + 0x10);
    bVar1 = *(byte *)(lVar2 + 0x135);
  }
  if ((bVar1 & 1) == 0) {
    lVar2 = il2cpp_runtime_helper_023009c0(lVar2);
  }
  in_R9 = (void *)**(undefined8 **)(lVar2 + 0xb8);
label_044c2e3f:
  __this_00[1].monitor = in_R9;
  il2cpp_runtime_helper_022b4080(&__this_00[1].monitor,in_R9);
  __this_00[1].fields._fetch = unaff_retaddr;
  il2cpp_runtime_helper_022b4080(&__this_00[1].fields,unaff_retaddr);
  __this_00[1].fields._now = in_stack_00000008;
  il2cpp_runtime_helper_022b4080(&__this_00[1].fields._now,in_stack_00000008);
  __this_00[1].fields._entries = in_stack_00000010;
  il2cpp_runtime_helper_022b4080(&__this_00[1].fields._entries,in_stack_00000010);
  __this_00[2].klass = in_stack_00000018;
  *(undefined2 *)&__this_00[2].monitor = in_stack_00000020;
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileCache$$.ctor
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileCache___ctor (ApplicationManagers_PublicProfiles_AottgPublicProfileCache_o* __this, System_Action_string__Action_AottgPublicProfileFetchResponse___o* fetch, System_Func_DateTimeOffset__o* now, const MethodInfo* method);
// 0x44c2240

void ApplicationManagers_PublicProfiles_AottgPublicProfileCache___ctor
               (ApplicationManagers_PublicProfiles_AottgPublicProfileCache_o *__this,
               System_Action_string__Action_AottgPublicProfileFetchResponse___o *fetch,
               System_Func_DateTimeOffset__o *now,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **ppSVar3;
  undefined1 *puVar4;
  bool_conflict bVar5;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  undefined8 uVar6;
  System_ArgumentNullException_o *__this_01;
  System_String_o *paramName;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar7;
  System_Int32_array *pSVar8;
  ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o *pAVar9;
  System_Int32_array *pSVar10;
  System_Int32_array *pSVar11;
  Il2CppObject *item;
  MethodInfo *method_00;
  System_Int32_array *pSVar12;
  undefined1 auVar13 [16];
  System_DateTimeOffset_o now_00;
  System_Int32_array *pSStack_68;
  System_ArgumentNullException_o *pSStack_60;
  System_Action_string__Action_AottgPublicProfileFetchResponse___o *pSStack_58;
  
  if (g_data_057aeaad == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_ApplicationManagers_PublicPro);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Entry);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_DateTimeOffset);
    il2cpp_runtime_helper_023445d0(&MethodInfo_DateTimeOffset_ctor_b__5_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aeaad = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Entry);
  System_Collections_Generic_Dictionary_object__object____ctor(__this_00,MethodInfo_Dictionary_2_System_String_ApplicationManagers_PublicPro);
  (__this->fields)._entries =
       (System_Collections_Generic_Dictionary_string__AottgPublicProfileCache_Entry__o *)__this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._entries);
  pSVar7 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (fetch == (System_Action_string__Action_AottgPublicProfileFetchResponse___o *)0x0) {
    uVar6 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentNullException);
    __this_01 = (System_ArgumentNullException_o *)il2cpp_runtime_helper_023052d0(uVar6);
    paramName = (System_String_o *)il2cpp_runtime_helper_023445d0(&"fetch");
    System_ArgumentNullException___ctor_3c0ad60(__this_01,paramName,(MethodInfo *)0x0);
    pSVar7 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
             il2cpp_runtime_helper_023445d0(&MethodInfo_AottgPublicProfileCache);
    il2cpp_runtime_helper_022b2b10();
  }
  else {
    __this_01 = (System_ArgumentNullException_o *)0x0;
    if (__this != (ApplicationManagers_PublicProfiles_AottgPublicProfileCache_o *)0x0) {
      (__this->fields)._fetch = fetch;
      il2cpp_runtime_helper_022b4080(&__this->fields,fetch);
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
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_DateTimeOffset__o **)(lVar2 + 8) = now;
          il2cpp_runtime_helper_022b4080(lVar2 + 8,now);
        }
      }
      (__this->fields)._now = now;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._now,now);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeaae == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    g_data_057aeaae = '\x01';
  }
  pSVar12 = (System_Int32_array *)(__this_01->fields)._data;
  if (pSVar12 != (System_Int32_array *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Clear
              ((System_Collections_Generic_Dictionary_object__object__o *)pSVar12,MethodInfo_Void_Clear);
    return;
  }
  auVar13 = il2cpp_runtime_helper_022b2c90();
  item = auVar13._8_8_;
  pSStack_68 = auVar13._0_8_;
  pSStack_60 = __this_01;
  pSStack_58 = fetch;
  if (g_data_057aeaaf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgPublicProfileFetchResponse);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Entry);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Get_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass7_0);
    il2cpp_runtime_helper_023445d0(&"bad_account_id");
    g_data_057aeaaf = '\x01';
  }
  pSStack_68 = (System_Int32_array *)0x0;
  pSVar8 = (System_Int32_array *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass7_0);
  pSVar11 = pSVar8;
  System_Object___ctor((Il2CppObject *)pSVar8,(MethodInfo *)0x0);
  if (pSVar8 != (System_Int32_array *)0x0) {
    ((System_Collections_Generic_Dictionary_object__object__Fields *)&pSVar8->bounds)->_buckets = pSVar12;
    il2cpp_runtime_helper_022b4080((System_Collections_Generic_Dictionary_object__object__Fields *)&pSVar8->bounds,pSVar12
                      );
    ppSVar3 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)&pSVar8->max_length;
    pSVar8->max_length = (il2cpp_array_size_t)pSVar7;
    il2cpp_runtime_helper_022b4080(ppSVar3);
    method_00 = (MethodInfo *)0x0;
    bVar5 = System_String__IsNullOrEmpty((System_String_o *)pSVar8->max_length,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      if (item == (Il2CppObject *)0x0) {
        return;
      }
      pAVar9 = ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse__Fail
                         ("bad_account_id",method_00);
      (*item[1].monitor)(item[4].klass,pAVar9,item[2].monitor);
      return;
    }
    pSVar11 = *(System_Int32_array **)pSVar12->m_Items;
    if (pSVar11 != (System_Int32_array *)0x0) {
      bVar5 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                        ((System_Collections_Generic_Dictionary_object__object__o *)pSVar11,&(*ppSVar3)->obj,
                         (Il2CppObject **)&pSStack_68,MethodInfo_Boolean_TryGetValue);
      if ((char)bVar5 == '\0') {
        pSVar10 = (System_Int32_array *)il2cpp_runtime_helper_023052d0(TypeInfo_Entry);
        if (g_data_057aeab3 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Action_1_ApplicationManagers_PublicProfile);
          il2cpp_runtime_helper_023445d0(&TypeInfo_List_Action_AottgPublicProfileFetchResponse);
          g_data_057aeab3 = '\x01';
        }
        pSVar11 = (System_Int32_array *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Action_AottgPublicProfileFetchResponse);
        System_Collections_Generic_List_object____ctor
                  ((System_Collections_Generic_List_object__o *)pSVar11,MethodInfo_List_1_System_Action_1_ApplicationManagers_PublicProfile);
        ((System_Collections_Generic_Dictionary_object__object__Fields *)&pSVar10->bounds)->_buckets = pSVar11
        ;
        il2cpp_runtime_helper_022b4080((System_Collections_Generic_Dictionary_object__object__Fields *)&pSVar10->bounds);
        System_Object___ctor((Il2CppObject *)pSVar10,(MethodInfo *)0x0);
        pSVar11 = *(System_Int32_array **)pSVar12->m_Items;
        pSStack_68 = pSVar10;
        if (pSVar11 == (System_Int32_array *)0x0) goto label_044c278d;
        System_Collections_Generic_Dictionary_object__object___set_Item
                  ((System_Collections_Generic_Dictionary_object__object__o *)pSVar11,&(*ppSVar3)->obj,
                   (Il2CppObject *)pSVar10,MethodInfo_Void_set_Item);
      }
      pSVar10 = pSStack_68;
      pSVar7 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)pSVar12->max_length;
      if (pSVar7 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
        pSVar11 = (System_Int32_array *)pSVar7->m_Items[1].fields.key;
        now_00.fields = (System_DateTimeOffset_Fields)(*(code *)pSVar7->max_length)();
        if (pSVar10 != (System_Int32_array *)0x0) {
          bVar5 = ApplicationManagers_PublicProfiles_AottgPublicProfileCache_Entry__HasFreshValue
                            ((ApplicationManagers_PublicProfiles_AottgPublicProfileCache_Entry_o *)pSVar10,
                             now_00,(MethodInfo *)pSVar7);
          lVar2 = MethodInfo_Void_Add;
          pSVar11 = pSVar10;
          if ((char)bVar5 == '\0') {
            if (item != (Il2CppObject *)0x0) {
              if ((pSStack_68 == (System_Int32_array *)0x0) ||
                 (pSVar11 = ((System_Collections_Generic_Dictionary_object__object__Fields *)
                            &pSStack_68->bounds)->_buckets, pSVar11 == (System_Int32_array *)0x0))
              goto label_044c278d;
              puVar4 = (undefined1 *)((long)&pSVar11->max_length + 4);
              *(int *)puVar4 = *(int *)puVar4 + 1;
              pSVar10 = ((System_Collections_Generic_Dictionary_object__object__Fields *)&pSVar11->bounds)->
                        _buckets;
              if (pSVar10 == (System_Int32_array *)0x0) goto label_044c278d;
              uVar1 = *(uint *)&pSVar11->max_length;
              if (uVar1 < (uint)pSVar10->max_length) {
                *(uint *)&pSVar11->max_length = uVar1 + 1;
                pSVar11 = (System_Int32_array *)(pSVar10->m_Items + (long)(int)uVar1 * 2);
                *(Il2CppObject **)(pSVar10->m_Items + (long)(int)uVar1 * 2) = item;
                il2cpp_runtime_helper_022b4080();
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar11,item,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
              }
            }
            if (pSStack_68 == (System_Int32_array *)0x0) goto label_044c278d;
            if (*(char *)(pSStack_68->m_Items + 4) == '\0') {
              *(undefined1 *)(pSStack_68->m_Items + 4) = 1;
              pSVar12 = ((System_Collections_Generic_Dictionary_object__object__Fields *)&pSVar12->bounds)->
                        _buckets;
              pSVar7 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)pSVar8->max_length;
              pSVar8 = (System_Int32_array *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgPublicProfileFetchResponse);
              pSVar11 = pSVar8;
              System_Action_object____ctor();
              if (pSVar12 == (System_Int32_array *)0x0) goto label_044c278d;
              (*(code *)pSVar12->max_length)
                        (*(undefined8 *)(pSVar12->m_Items + 8),pSVar7,pSVar8,
                         *(undefined8 *)(pSVar12->m_Items + 2));
            }
          }
          else if (item != (Il2CppObject *)0x0) {
            if (pSStack_68 == (System_Int32_array *)0x0) goto label_044c278d;
            (*item[1].monitor)(item[4].klass,
                               (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                               pSStack_68->max_length,item[2].monitor);
          }
          return;
        }
      }
    }
  }
label_044c278d:
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(&pSVar11->obj,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileCache$$Clear
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileCache__Clear (ApplicationManagers_PublicProfiles_AottgPublicProfileCache_o* __this, const MethodInfo* method);
// 0x44c2420

void ApplicationManagers_PublicProfiles_AottgPublicProfileCache__Clear
               (ApplicationManagers_PublicProfiles_AottgPublicProfileCache_o *__this,MethodInfo *method)

{
  uint uVar1;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **ppSVar2;
  undefined1 *puVar3;
  long lVar4;
  bool_conflict bVar5;
  System_Int32_array *pSVar6;
  ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o *pAVar7;
  System_Int32_array *pSVar8;
  System_Int32_array *pSVar9;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar10;
  Il2CppObject *item;
  MethodInfo *method_00;
  System_Int32_array *pSVar11;
  undefined1 auVar12 [16];
  System_DateTimeOffset_o now;
  System_Int32_array *local_40;
  ApplicationManagers_PublicProfiles_AottgPublicProfileCache_o *pAStack_38;
  
  if (g_data_057aeaae == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    g_data_057aeaae = '\x01';
  }
  pSVar11 = (System_Int32_array *)(__this->fields)._entries;
  if (pSVar11 != (System_Int32_array *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Clear
              ((System_Collections_Generic_Dictionary_object__object__o *)pSVar11,MethodInfo_Void_Clear);
    return;
  }
  auVar12 = il2cpp_runtime_helper_022b2c90();
  item = auVar12._8_8_;
  local_40 = auVar12._0_8_;
  pAStack_38 = __this;
  if (g_data_057aeaaf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgPublicProfileFetchResponse);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Entry);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Get_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass7_0);
    il2cpp_runtime_helper_023445d0(&"bad_account_id");
    g_data_057aeaaf = '\x01';
  }
  local_40 = (System_Int32_array *)0x0;
  pSVar6 = (System_Int32_array *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass7_0);
  pSVar9 = pSVar6;
  System_Object___ctor((Il2CppObject *)pSVar6,(MethodInfo *)0x0);
  if (pSVar6 != (System_Int32_array *)0x0) {
    ((System_Collections_Generic_Dictionary_object__object__Fields *)&pSVar6->bounds)->_buckets = pSVar11;
    il2cpp_runtime_helper_022b4080((System_Collections_Generic_Dictionary_object__object__Fields *)&pSVar6->bounds,pSVar11
                      );
    ppSVar2 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)&pSVar6->max_length;
    pSVar6->max_length = (il2cpp_array_size_t)method;
    il2cpp_runtime_helper_022b4080(ppSVar2);
    method_00 = (MethodInfo *)0x0;
    bVar5 = System_String__IsNullOrEmpty((System_String_o *)pSVar6->max_length,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      if (item == (Il2CppObject *)0x0) {
        return;
      }
      pAVar7 = ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse__Fail
                         ("bad_account_id",method_00);
      (*item[1].monitor)(item[4].klass,pAVar7,item[2].monitor);
      return;
    }
    pSVar9 = *(System_Int32_array **)pSVar11->m_Items;
    if (pSVar9 != (System_Int32_array *)0x0) {
      bVar5 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                        ((System_Collections_Generic_Dictionary_object__object__o *)pSVar9,&(*ppSVar2)->obj,
                         (Il2CppObject **)&local_40,MethodInfo_Boolean_TryGetValue);
      if ((char)bVar5 == '\0') {
        pSVar8 = (System_Int32_array *)il2cpp_runtime_helper_023052d0(TypeInfo_Entry);
        if (g_data_057aeab3 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Action_1_ApplicationManagers_PublicProfile);
          il2cpp_runtime_helper_023445d0(&TypeInfo_List_Action_AottgPublicProfileFetchResponse);
          g_data_057aeab3 = '\x01';
        }
        pSVar9 = (System_Int32_array *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Action_AottgPublicProfileFetchResponse);
        System_Collections_Generic_List_object____ctor
                  ((System_Collections_Generic_List_object__o *)pSVar9,MethodInfo_List_1_System_Action_1_ApplicationManagers_PublicProfile);
        ((System_Collections_Generic_Dictionary_object__object__Fields *)&pSVar8->bounds)->_buckets = pSVar9;
        il2cpp_runtime_helper_022b4080((System_Collections_Generic_Dictionary_object__object__Fields *)&pSVar8->bounds);
        System_Object___ctor((Il2CppObject *)pSVar8,(MethodInfo *)0x0);
        pSVar9 = *(System_Int32_array **)pSVar11->m_Items;
        local_40 = pSVar8;
        if (pSVar9 == (System_Int32_array *)0x0) goto label_044c278d;
        System_Collections_Generic_Dictionary_object__object___set_Item
                  ((System_Collections_Generic_Dictionary_object__object__o *)pSVar9,&(*ppSVar2)->obj,
                   (Il2CppObject *)pSVar8,MethodInfo_Void_set_Item);
      }
      pSVar8 = local_40;
      pSVar10 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)pSVar11->max_length;
      if (pSVar10 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
        pSVar9 = (System_Int32_array *)pSVar10->m_Items[1].fields.key;
        now.fields = (System_DateTimeOffset_Fields)(*(code *)pSVar10->max_length)();
        if (pSVar8 != (System_Int32_array *)0x0) {
          bVar5 = ApplicationManagers_PublicProfiles_AottgPublicProfileCache_Entry__HasFreshValue
                            ((ApplicationManagers_PublicProfiles_AottgPublicProfileCache_Entry_o *)pSVar8,now,
                             (MethodInfo *)pSVar10);
          lVar4 = MethodInfo_Void_Add;
          pSVar9 = pSVar8;
          if ((char)bVar5 == '\0') {
            if (item != (Il2CppObject *)0x0) {
              if ((local_40 == (System_Int32_array *)0x0) ||
                 (pSVar9 = ((System_Collections_Generic_Dictionary_object__object__Fields *)&local_40->bounds)
                           ->_buckets, pSVar9 == (System_Int32_array *)0x0)) goto label_044c278d;
              puVar3 = (undefined1 *)((long)&pSVar9->max_length + 4);
              *(int *)puVar3 = *(int *)puVar3 + 1;
              pSVar8 = ((System_Collections_Generic_Dictionary_object__object__Fields *)&pSVar9->bounds)->
                       _buckets;
              if (pSVar8 == (System_Int32_array *)0x0) goto label_044c278d;
              uVar1 = *(uint *)&pSVar9->max_length;
              if (uVar1 < (uint)pSVar8->max_length) {
                *(uint *)&pSVar9->max_length = uVar1 + 1;
                pSVar9 = (System_Int32_array *)(pSVar8->m_Items + (long)(int)uVar1 * 2);
                *(Il2CppObject **)(pSVar8->m_Items + (long)(int)uVar1 * 2) = item;
                il2cpp_runtime_helper_022b4080();
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar9,item,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
              }
            }
            if (local_40 == (System_Int32_array *)0x0) goto label_044c278d;
            if (*(char *)(local_40->m_Items + 4) == '\0') {
              *(undefined1 *)(local_40->m_Items + 4) = 1;
              pSVar11 = ((System_Collections_Generic_Dictionary_object__object__Fields *)&pSVar11->bounds)->
                        _buckets;
              pSVar10 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)pSVar6->max_length;
              pSVar6 = (System_Int32_array *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgPublicProfileFetchResponse);
              pSVar9 = pSVar6;
              System_Action_object____ctor();
              if (pSVar11 == (System_Int32_array *)0x0) goto label_044c278d;
              (*(code *)pSVar11->max_length)
                        (*(undefined8 *)(pSVar11->m_Items + 8),pSVar10,pSVar6,
                         *(undefined8 *)(pSVar11->m_Items + 2));
            }
          }
          else if (item != (Il2CppObject *)0x0) {
            if (local_40 == (System_Int32_array *)0x0) goto label_044c278d;
            (*item[1].monitor)(item[4].klass,
                               (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                               local_40->max_length,item[2].monitor);
          }
          return;
        }
      }
    }
  }
label_044c278d:
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(&pSVar9->obj,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileCache$$Get
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileCache__Get (ApplicationManagers_PublicProfiles_AottgPublicProfileCache_o* __this, System_String_o* accountId, System_Action_AottgPublicProfileFetchResponse__o* onResult, const MethodInfo* method);
// 0x44c2460

void ApplicationManagers_PublicProfiles_AottgPublicProfileCache__Get
               (ApplicationManagers_PublicProfiles_AottgPublicProfileCache_o *__this,
               System_String_o *accountId,System_Action_AottgPublicProfileFetchResponse__o *onResult,
               MethodInfo *method)

{
  uint uVar1;
  System_Action_string__Action_AottgPublicProfileFetchResponse___o *pSVar2;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar3;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **ppSVar4;
  undefined1 *puVar5;
  long lVar6;
  bool_conflict bVar7;
  System_Int32_array *pSVar8;
  ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o *pAVar9;
  System_Int32_array *pSVar10;
  System_Int32_array *pSVar11;
  System_Func_DateTimeOffset__o *method_00;
  MethodInfo *method_01;
  System_DateTimeOffset_o now;
  System_Int32_array *pSStack_38;
  
  if (g_data_057aeaaf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgPublicProfileFetchResponse);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Entry);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Get_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass7_0);
    il2cpp_runtime_helper_023445d0(&"bad_account_id");
    g_data_057aeaaf = '\x01';
  }
  pSStack_38 = (System_Int32_array *)0x0;
  pSVar8 = (System_Int32_array *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass7_0);
  pSVar11 = pSVar8;
  System_Object___ctor((Il2CppObject *)pSVar8,(MethodInfo *)0x0);
  if (pSVar8 != (System_Int32_array *)0x0) {
    ((System_Collections_Generic_Dictionary_object__object__Fields *)&pSVar8->bounds)->_buckets =
         (System_Int32_array *)__this;
    il2cpp_runtime_helper_022b4080((System_Collections_Generic_Dictionary_object__object__Fields *)&pSVar8->bounds,__this)
    ;
    ppSVar4 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)&pSVar8->max_length;
    pSVar8->max_length = (il2cpp_array_size_t)accountId;
    il2cpp_runtime_helper_022b4080(ppSVar4);
    method_01 = (MethodInfo *)0x0;
    bVar7 = System_String__IsNullOrEmpty((System_String_o *)pSVar8->max_length,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      if (onResult == (System_Action_AottgPublicProfileFetchResponse__o *)0x0) {
        return;
      }
      pAVar9 = ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse__Fail
                         ("bad_account_id",method_01);
      (*(code *)(onResult->fields).invoke_impl)
                ((onResult->fields).method_code,pAVar9,(onResult->fields).method);
      return;
    }
    pSVar11 = (System_Int32_array *)(__this->fields)._entries;
    if (pSVar11 != (System_Int32_array *)0x0) {
      bVar7 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                        ((System_Collections_Generic_Dictionary_object__object__o *)pSVar11,&(*ppSVar4)->obj,
                         (Il2CppObject **)&pSStack_38,MethodInfo_Boolean_TryGetValue);
      if ((char)bVar7 == '\0') {
        pSVar10 = (System_Int32_array *)il2cpp_runtime_helper_023052d0(TypeInfo_Entry);
        if (g_data_057aeab3 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Action_1_ApplicationManagers_PublicProfile);
          il2cpp_runtime_helper_023445d0(&TypeInfo_List_Action_AottgPublicProfileFetchResponse);
          g_data_057aeab3 = '\x01';
        }
        pSVar11 = (System_Int32_array *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Action_AottgPublicProfileFetchResponse);
        System_Collections_Generic_List_object____ctor
                  ((System_Collections_Generic_List_object__o *)pSVar11,MethodInfo_List_1_System_Action_1_ApplicationManagers_PublicProfile);
        ((System_Collections_Generic_Dictionary_object__object__Fields *)&pSVar10->bounds)->_buckets = pSVar11
        ;
        il2cpp_runtime_helper_022b4080((System_Collections_Generic_Dictionary_object__object__Fields *)&pSVar10->bounds);
        System_Object___ctor((Il2CppObject *)pSVar10,(MethodInfo *)0x0);
        pSVar11 = (System_Int32_array *)(__this->fields)._entries;
        pSStack_38 = pSVar10;
        if (pSVar11 == (System_Int32_array *)0x0) goto label_044c278d;
        System_Collections_Generic_Dictionary_object__object___set_Item
                  ((System_Collections_Generic_Dictionary_object__object__o *)pSVar11,&(*ppSVar4)->obj,
                   (Il2CppObject *)pSVar10,MethodInfo_Void_set_Item);
      }
      pSVar10 = pSStack_38;
      method_00 = (__this->fields)._now;
      if (method_00 != (System_Func_DateTimeOffset__o *)0x0) {
        pSVar11 = ((_union_14 *)&(method_00->fields).method_code)->genericMethod;
        now.fields = (System_DateTimeOffset_Fields)(*(code *)(method_00->fields).invoke_impl)();
        if (pSVar10 != (System_Int32_array *)0x0) {
          bVar7 = ApplicationManagers_PublicProfiles_AottgPublicProfileCache_Entry__HasFreshValue
                            ((ApplicationManagers_PublicProfiles_AottgPublicProfileCache_Entry_o *)pSVar10,now
                             ,(MethodInfo *)method_00);
          lVar6 = MethodInfo_Void_Add;
          pSVar11 = pSVar10;
          if ((char)bVar7 == '\0') {
            if (onResult != (System_Action_AottgPublicProfileFetchResponse__o *)0x0) {
              if ((pSStack_38 == (System_Int32_array *)0x0) ||
                 (pSVar11 = ((System_Collections_Generic_Dictionary_object__object__Fields *)
                            &pSStack_38->bounds)->_buckets, pSVar11 == (System_Int32_array *)0x0))
              goto label_044c278d;
              puVar5 = (undefined1 *)((long)&pSVar11->max_length + 4);
              *(int *)puVar5 = *(int *)puVar5 + 1;
              pSVar10 = ((System_Collections_Generic_Dictionary_object__object__Fields *)&pSVar11->bounds)->
                        _buckets;
              if (pSVar10 == (System_Int32_array *)0x0) goto label_044c278d;
              uVar1 = *(uint *)&pSVar11->max_length;
              if (uVar1 < (uint)pSVar10->max_length) {
                *(uint *)&pSVar11->max_length = uVar1 + 1;
                pSVar11 = (System_Int32_array *)(pSVar10->m_Items + (long)(int)uVar1 * 2);
                *(System_Action_AottgPublicProfileFetchResponse__o **)
                 (pSVar10->m_Items + (long)(int)uVar1 * 2) = onResult;
                il2cpp_runtime_helper_022b4080();
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar11,(Il2CppObject *)onResult,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
              }
            }
            if (pSStack_38 == (System_Int32_array *)0x0) goto label_044c278d;
            if (*(char *)(pSStack_38->m_Items + 4) == '\0') {
              *(undefined1 *)(pSStack_38->m_Items + 4) = 1;
              pSVar2 = (__this->fields)._fetch;
              pSVar3 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)pSVar8->max_length;
              pSVar8 = (System_Int32_array *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgPublicProfileFetchResponse);
              pSVar11 = pSVar8;
              System_Action_object____ctor();
              if (pSVar2 == (System_Action_string__Action_AottgPublicProfileFetchResponse___o *)0x0)
              goto label_044c278d;
              (*(code *)(pSVar2->fields).invoke_impl)
                        ((pSVar2->fields).method_code,pSVar3,pSVar8,(pSVar2->fields).method);
            }
          }
          else if (onResult != (System_Action_AottgPublicProfileFetchResponse__o *)0x0) {
            if (pSStack_38 == (System_Int32_array *)0x0) goto label_044c278d;
            (*(code *)(onResult->fields).invoke_impl)
                      ((onResult->fields).method_code,
                       (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                       pSStack_38->max_length,(onResult->fields).method);
          }
          return;
        }
      }
    }
  }
label_044c278d:
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(&pSVar11->obj,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileCache$$Complete
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileCache__Complete (ApplicationManagers_PublicProfiles_AottgPublicProfileCache_o* __this, System_String_o* accountId, ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o* response, const MethodInfo* method);
// 0x44c29d0

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
  System_TimeSpan_Fields SVar8;
  ulong uVar9;
  unkbyte10 Var10;
  Il2CppObject *local_28;
  undefined4 local_1e;
  undefined2 local_1a;
  
  if (g_data_057aeab0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Action_1_ApplicationManagers_PublicProfiles_AottgPublicP);
    il2cpp_runtime_helper_023445d0(&"unknown_error");
    g_data_057aeab0 = '\x01';
  }
  local_28 = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._entries;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar6 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (__this_00,(Il2CppObject *)accountId,&local_28,MethodInfo_Boolean_TryGetValue);
    pIVar5 = local_28;
    if ((char)bVar6 == '\0') {
      return;
    }
    if (local_28 != (Il2CppObject *)0x0) {
      *(undefined1 *)&local_28[3].klass = 0;
      if (response == (ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse_o *)0x0) {
        response = ApplicationManagers_PublicProfiles_AottgPublicProfileFetchResponse__Fail
                             ("unknown_error",(MethodInfo *)accountId);
      }
      pIVar5[1].monitor = response;
      il2cpp_runtime_helper_022b4080(&pIVar5[1].monitor,response);
      pIVar5 = local_28;
      pSVar3 = (__this->fields)._now;
      if ((pSVar3 != (System_Func_DateTimeOffset__o *)0x0) &&
         (Var10 = (*(code *)(pSVar3->fields).invoke_impl)
                            ((pSVar3->fields).method_code,(pSVar3->fields).method),
         pIVar5 != (Il2CppObject *)0x0)) {
        *(unkbyte10 *)(pIVar5 + 2) = Var10;
        *(undefined2 *)((long)&pIVar5[2].monitor + 6) = local_1a;
        *(undefined4 *)((long)&pIVar5[2].monitor + 2) = local_1e;
        if ((local_28 != (Il2CppObject *)0x0) &&
           (((local_28[1].klass != (Il2CppClass *)0x0 &&
             (pSVar7 = System_Collections_Generic_List_object___ToArray
                                 ((System_Collections_Generic_List_object__o *)local_28[1].klass,MethodInfo_Action_1_ApplicationManagers_PublicProfiles_AottgPublicP)
             , local_28 != (Il2CppObject *)0x0)) && (pIVar4 = local_28[1].klass, pIVar4 != (Il2CppClass *)0x0)
            ))) {
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
            uVar9 = 0;
            if ((pSVar7->max_length & 0xffffffff) != 0) {
              do {
                pIVar5 = pSVar7->m_Items[uVar9];
                if (pIVar5 != (Il2CppObject *)0x0) {
                  if ((local_28 == (Il2CppObject *)0x0) || (pIVar5 == (Il2CppObject *)0x0)) goto label_044c2b9f;
                  (*pIVar5[1].monitor)(pIVar5[4].klass,local_28[1].monitor,pIVar5[2].monitor);
                }
                uVar9 = uVar9 + 1;
                uVar2 = (uint)pSVar7->max_length;
                if ((long)(int)uVar2 <= (long)uVar9) {
                  return;
                }
              } while (uVar9 < uVar2);
            }
            goto label_044c2ba4;
          }
        }
      }
    }
  }
label_044c2b9f:
  il2cpp_runtime_helper_022b2c90();
label_044c2ba4:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057aeab1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgPublicProfileCache);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TimeSpan);
    g_data_057aeab1 = '\x01';
  }
  if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  SVar8._ticks = (int64_t)System_TimeSpan__FromMinutes(10.0,(MethodInfo *)0x0);
  (*(System_TimeSpan_Fields **)(TypeInfo_AottgPublicProfileCache + 0xb8))->_ticks = SVar8._ticks;
  SVar8._ticks = (int64_t)System_TimeSpan__FromSeconds(45.0,(MethodInfo *)0x0);
  ((System_TimeSpan_Fields *)(*(long *)(TypeInfo_AottgPublicProfileCache + 0xb8) + 8))->_ticks = SVar8._ticks;
  return;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileCache$$.cctor
// il2cpp: void ApplicationManagers_PublicProfiles_AottgPublicProfileCache___cctor (const MethodInfo* method);
// 0x44c2bb0

void ApplicationManagers_PublicProfiles_AottgPublicProfileCache___cctor(MethodInfo *method)

{
  System_TimeSpan_Fields SVar1;
  
  if (g_data_057aeab1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgPublicProfileCache);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TimeSpan);
    g_data_057aeab1 = '\x01';
  }
  if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  SVar1._ticks = (int64_t)System_TimeSpan__FromMinutes(10.0,(MethodInfo *)0x0);
  (*(System_TimeSpan_Fields **)(TypeInfo_AottgPublicProfileCache + 0xb8))->_ticks = SVar1._ticks;
  SVar1._ticks = (int64_t)System_TimeSpan__FromSeconds(45.0,(MethodInfo *)0x0);
  ((System_TimeSpan_Fields *)(*(long *)(TypeInfo_AottgPublicProfileCache + 0xb8) + 8))->_ticks = SVar1._ticks;
  return;
}


