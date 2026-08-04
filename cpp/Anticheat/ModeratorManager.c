// Type: Anticheat.ModeratorManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Anticheat/ModeratorManager.cs
// Prior real C# source: none
// --------------------------------

// Anticheat.ModeratorManager.<>c__DisplayClass100_0$$.ctor
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass100_0___ctor (Anticheat_ModeratorManager___c__DisplayClass100_0_o* __this, const MethodInfo* method);
// 0x44dabe0

void Anticheat_ModeratorManager___c__DisplayClass100_0___ctor
               (Anticheat_ModeratorManager___c__DisplayClass100_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass100_0$$<RequestRegionBanList>b__0
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass100_0___RequestRegionBanList_b__0 (Anticheat_ModeratorManager___c__DisplayClass100_0_o* __this, System_Collections_Generic_Dictionary_byte__object__o* data, const MethodInfo* method);
// 0x44dabf0

void Anticheat_ModeratorManager___c__DisplayClass100_0___RequestRegionBanList_b__0
               (Anticheat_ModeratorManager___c__DisplayClass100_0_o *__this,
               System_Collections_Generic_Dictionary_byte__object__o *data,MethodInfo *method)

{
  System_String_o *text;
  System_Action_string__o *localStatus;
  long lVar1;
  int32_t iVar2;
  int32_t iVar3;
  System_Collections_Generic_Dictionary_byte__object__array *entries;
  Anticheat_RegionBanEntry_array *pAVar4;
  Il2CppObject *__this_00;
  Il2CppObject *__this_01;
  
  if (g_data_057aeb86 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RegionBanPage);
    g_data_057aeb86 = '\x01';
  }
  text = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  localStatus = (__this->fields).localStatus;
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Anticheat_ModeratorManager__InvokeStatus(text,localStatus,(MethodInfo *)0x0);
  iVar2 = Anticheat_ModeratorManager__ReadInt(data,'\x01',0,(MethodInfo *)0x0);
  iVar3 = Anticheat_ModeratorManager__ReadInt(data,'\x02',-1,(MethodInfo *)0x0);
  entries = Anticheat_ModeratorManager__GetResponseEntries(data,'\x03',(MethodInfo *)0x0);
  pAVar4 = Anticheat_ModeratorManager__ParseRegionBanEntries(entries,(MethodInfo *)0x0);
  lVar1 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x40);
  if (lVar1 != 0) {
    __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_RegionBanPage);
    __this_01 = __this_00;
    System_Object___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Il2CppObject *)0x0) {
      *(int32_t *)&__this_00[1].klass = iVar2;
      *(int32_t *)((long)&__this_00[1].klass + 4) = iVar3;
      __this_00[1].monitor = pAVar4;
      il2cpp_runtime_helper_022b4080(&__this_00[1].monitor,pAVar4);
      (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),__this_00,*(undefined8 *)(lVar1 + 0x28));
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor(__this_01,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass100_0$$<RequestRegionBanList>b__1
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass100_0___RequestRegionBanList_b__1 (Anticheat_ModeratorManager___c__DisplayClass100_0_o* __this, const MethodInfo* method);
// 0x44dad50

void Anticheat_ModeratorManager___c__DisplayClass100_0___RequestRegionBanList_b__1
               (Anticheat_ModeratorManager___c__DisplayClass100_0_o *__this,MethodInfo *method)

{
  System_Action_string__o *localStatus;
  
  if (g_data_057aeb87 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    il2cpp_runtime_helper_023445d0(&"Request timed out");
    g_data_057aeb87 = '\x01';
  }
  localStatus = (__this->fields).localStatus;
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Anticheat_ModeratorManager__InvokeStatus("Request timed out",localStatus,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass106_0$$.ctor
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass106_0___ctor (Anticheat_ModeratorManager___c__DisplayClass106_0_o* __this, const MethodInfo* method);
// 0x44dadb0

void Anticheat_ModeratorManager___c__DisplayClass106_0___ctor
               (Anticheat_ModeratorManager___c__DisplayClass106_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass106_0$$<SendBatchRoomRemove>b__0
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass106_0___SendBatchRoomRemove_b__0 (Anticheat_ModeratorManager___c__DisplayClass106_0_o* __this, System_Collections_Generic_Dictionary_byte__object__o* data, const MethodInfo* method);
// 0x44dadc0

void Anticheat_ModeratorManager___c__DisplayClass106_0___SendBatchRoomRemove_b__0
               (Anticheat_ModeratorManager___c__DisplayClass106_0_o *__this,
               System_Collections_Generic_Dictionary_byte__object__o *data,MethodInfo *method)

{
  System_Action_string__o *localStatus;
  Il2CppClass *localStatus_00;
  int iVar1;
  bool_conflict bVar2;
  Il2CppObject *pIVar3;
  System_String_o *pSVar4;
  int *piVar5;
  System_String_array *values;
  int iVar6;
  int iVar7;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  
  if (g_data_057aeb88 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&" failed.");
    il2cpp_runtime_helper_023445d0(&"Rate limited. Retry in ");
    il2cpp_runtime_helper_023445d0(&"Done: ");
    il2cpp_runtime_helper_023445d0(&" processed, ");
    il2cpp_runtime_helper_023445d0(&"s.");
    g_data_057aeb88 = '\x01';
  }
  iStack_34 = 0;
  iStack_38 = 0;
  iStack_3c = 0;
  if (data == (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
label_044db1b4:
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
  }
  else {
    bVar2 = System_Collections_Generic_Dictionary_byte__object___ContainsKey(data,'\x01',MethodInfo_Boolean_ContainsKey);
    if ((char)bVar2 == '\0') {
label_044daed1:
      bVar2 = System_Collections_Generic_Dictionary_byte__object___ContainsKey(data,'\x02',MethodInfo_Boolean_ContainsKey);
      if ((char)bVar2 == '\0') {
label_044daf20:
        pSVar4 = *(System_String_o **)g_data_057b9c00->static_fields;
      }
      else {
        pSVar4 = (System_String_o *)
                 System_Collections_Generic_Dictionary_byte__object___get_Item(data,'\x02',MethodInfo_Object_get_Item);
        if ((pSVar4 != (System_String_o *)0x0) && ((Il2CppClass *)pSVar4->klass != g_data_057b9c00)) {
          il2cpp_runtime_helper_022b2fd0(pSVar4);
          goto label_044daf20;
        }
      }
      bVar2 = System_Collections_Generic_Dictionary_byte__object___ContainsKey(data,'\x03',MethodInfo_Boolean_ContainsKey);
      iVar7 = 0;
      iVar6 = 0;
      if ((char)bVar2 != '\0') {
        pIVar3 = System_Collections_Generic_Dictionary_byte__object___get_Item(data,'\x03',MethodInfo_Object_get_Item);
        if (pIVar3 == (Il2CppObject *)0x0) goto label_044db1b4;
        if ((pIVar3->klass->_1).element_class != *(Il2CppClass **)(g_data_057b9bb8 + 0x40)) goto label_044db1b9;
        piVar5 = (int *)il2cpp_runtime_helper_02305440(pIVar3);
        iVar6 = *piVar5;
      }
      iStack_34 = iVar6;
      bVar2 = System_Collections_Generic_Dictionary_byte__object___ContainsKey(data,'\x04',MethodInfo_Boolean_ContainsKey);
      if ((char)bVar2 != '\0') {
        pIVar3 = System_Collections_Generic_Dictionary_byte__object___get_Item(data,'\x04',MethodInfo_Object_get_Item);
        if (pIVar3 == (Il2CppObject *)0x0) goto label_044db1b4;
        if ((pIVar3->klass->_1).element_class != *(Il2CppClass **)(g_data_057b9bb8 + 0x40)) goto label_044db1b9;
        piVar5 = (int *)il2cpp_runtime_helper_02305440(pIVar3);
        iVar7 = *piVar5;
      }
      iStack_38 = iVar7;
      bVar2 = System_Collections_Generic_Dictionary_byte__object___ContainsKey(data,'\x05',MethodInfo_Boolean_ContainsKey);
      iVar1 = 0;
      if ((char)bVar2 != '\0') {
        pIVar3 = System_Collections_Generic_Dictionary_byte__object___get_Item(data,'\x05',MethodInfo_Object_get_Item);
        if (pIVar3 == (Il2CppObject *)0x0) goto label_044db1b4;
        if ((pIVar3->klass->_1).element_class != *(Il2CppClass **)(g_data_057b9bb8 + 0x40)) goto label_044db1b9;
        piVar5 = (int *)il2cpp_runtime_helper_02305440(pIVar3);
        iVar1 = *piVar5;
      }
      iStack_3c = iVar1;
      if (0 < iVar6) {
        pSVar4 = System_Int32__ToString((int32_t)&iStack_34,(MethodInfo *)0x0);
        pSVar4 = System_String__Concat_3af7150("Rate limited. Retry in ",pSVar4,"s.",(MethodInfo *)0x0);
label_044db17c:
        localStatus = (__this->fields).localStatus;
        if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        Anticheat_ModeratorManager__InvokeStatus(pSVar4,localStatus,(MethodInfo *)0x0);
        return;
      }
      if ((iStack_3c < 1) && (iVar7 < 1)) goto label_044db17c;
      pIVar3 = TypeInfo_string;
      values = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,5);
      if (values != (System_String_array *)0x0) {
        if ((int)values->max_length != 0) {
          values->m_Items[0] = "Done: ";
          il2cpp_runtime_helper_022b4080(values->m_Items);
          pIVar3 = (Il2CppObject *)&iStack_38;
          pSVar4 = System_Int32__ToString((int32_t)pIVar3,(MethodInfo *)0x0);
          if (1 < (uint)values->max_length) {
            pIVar3 = (Il2CppObject *)(values->m_Items + 1);
            values->m_Items[1] = pSVar4;
            il2cpp_runtime_helper_022b4080(pIVar3,pSVar4);
            if (2 < (uint)values->max_length) {
              values->m_Items[2] = " processed, ";
              il2cpp_runtime_helper_022b4080(values->m_Items + 2);
              pIVar3 = (Il2CppObject *)&iStack_3c;
              pSVar4 = System_Int32__ToString((int32_t)pIVar3,(MethodInfo *)0x0);
              if (3 < (uint)values->max_length) {
                pIVar3 = (Il2CppObject *)(values->m_Items + 3);
                values->m_Items[3] = pSVar4;
                il2cpp_runtime_helper_022b4080(pIVar3,pSVar4);
                if (4 < (uint)values->max_length) {
                  values->m_Items[4] = " failed.";
                  il2cpp_runtime_helper_022b4080(values->m_Items + 4);
                  pSVar4 = System_String__Concat_3af7570(values,(MethodInfo *)0x0);
                  goto label_044db17c;
                }
              }
            }
          }
        }
        goto label_044db1c1;
      }
      goto label_044db1b4;
    }
    pIVar3 = System_Collections_Generic_Dictionary_byte__object___get_Item(data,'\x01',MethodInfo_Object_get_Item);
    if (pIVar3 == (Il2CppObject *)0x0) goto label_044db1b4;
    if ((pIVar3->klass->_1).element_class == *(Il2CppClass **)(g_data_057b9b98 + 0x40)) {
      il2cpp_runtime_helper_02305440(pIVar3);
      goto label_044daed1;
    }
  }
label_044db1b9:
  il2cpp_runtime_helper_022b2fd0();
label_044db1c1:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057aeb89 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    il2cpp_runtime_helper_023445d0(&"Request timed out");
    g_data_057aeb89 = '\x01';
  }
  localStatus_00 = pIVar3[1].klass;
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Anticheat_ModeratorManager__InvokeStatus
            ("Request timed out",(System_Action_string__o *)localStatus_00,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass106_0$$<SendBatchRoomRemove>b__1
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass106_0___SendBatchRoomRemove_b__1 (Anticheat_ModeratorManager___c__DisplayClass106_0_o* __this, const MethodInfo* method);
// 0x44db1d0

void Anticheat_ModeratorManager___c__DisplayClass106_0___SendBatchRoomRemove_b__1
               (Anticheat_ModeratorManager___c__DisplayClass106_0_o *__this,MethodInfo *method)

{
  System_Action_string__o *localStatus;
  
  if (g_data_057aeb89 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    il2cpp_runtime_helper_023445d0(&"Request timed out");
    g_data_057aeb89 = '\x01';
  }
  localStatus = (__this->fields).localStatus;
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Anticheat_ModeratorManager__InvokeStatus("Request timed out",localStatus,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass85_0$$.ctor
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass85_0___ctor (Anticheat_ModeratorManager___c__DisplayClass85_0_o* __this, const MethodInfo* method);
// 0x44db230

void Anticheat_ModeratorManager___c__DisplayClass85_0___ctor
               (Anticheat_ModeratorManager___c__DisplayClass85_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass85_0$$<RequestPlayerList>b__0
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass85_0___RequestPlayerList_b__0 (Anticheat_ModeratorManager___c__DisplayClass85_0_o* __this, System_Collections_Generic_Dictionary_byte__object__o* data, const MethodInfo* method);
// 0x44db240

void Anticheat_ModeratorManager___c__DisplayClass85_0___RequestPlayerList_b__0
               (Anticheat_ModeratorManager___c__DisplayClass85_0_o *__this,
               System_Collections_Generic_Dictionary_byte__object__o *data,MethodInfo *method)

{
  System_String_o *text;
  System_Action_string__o *localStatus;
  
  if (g_data_057aeb8a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb8a = '\x01';
  }
  text = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  localStatus = (__this->fields).localStatus;
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Anticheat_ModeratorManager__InvokeStatus(text,localStatus,(MethodInfo *)0x0);
  Anticheat_ModeratorManager__PopulatePlayerList(data,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass85_0$$<RequestPlayerList>b__1
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass85_0___RequestPlayerList_b__1 (Anticheat_ModeratorManager___c__DisplayClass85_0_o* __this, const MethodInfo* method);
// 0x44db2c0

void Anticheat_ModeratorManager___c__DisplayClass85_0___RequestPlayerList_b__1
               (Anticheat_ModeratorManager___c__DisplayClass85_0_o *__this,MethodInfo *method)

{
  System_Action_string__o *localStatus;
  
  if (g_data_057aeb8b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    il2cpp_runtime_helper_023445d0(&"Request timed out");
    g_data_057aeb8b = '\x01';
  }
  localStatus = (__this->fields).localStatus;
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Anticheat_ModeratorManager__InvokeStatus("Request timed out",localStatus,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass89_0$$.ctor
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass89_0___ctor (Anticheat_ModeratorManager___c__DisplayClass89_0_o* __this, const MethodInfo* method);
// 0x44db320

void Anticheat_ModeratorManager___c__DisplayClass89_0___ctor
               (Anticheat_ModeratorManager___c__DisplayClass89_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass89_0$$<KickPlayer>b__0
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass89_0___KickPlayer_b__0 (Anticheat_ModeratorManager___c__DisplayClass89_0_o* __this, System_Collections_Generic_Dictionary_byte__object__o* data, const MethodInfo* method);
// 0x44db330

void Anticheat_ModeratorManager___c__DisplayClass89_0___KickPlayer_b__0
               (Anticheat_ModeratorManager___c__DisplayClass89_0_o *__this,
               System_Collections_Generic_Dictionary_byte__object__o *data,MethodInfo *method)

{
  long lVar1;
  long lVar2;
  bool_conflict bVar3;
  System_Collections_Generic_Dictionary_byte__object__array *onResponse;
  System_Action_Dictionary_byte__object___o *pSVar4;
  System_Action_o *pSVar5;
  System_Collections_Generic_Dictionary_byte__object__array *pSVar6;
  System_Collections_Generic_Dictionary_byte__object__array *value;
  Anticheat_ModeratorManager___c__DisplayClass89_0_o *__this_00;
  System_Action_string__o *pSVar7;
  System_Collections_Generic_Dictionary_byte__object__o *pSVar8;
  System_Action_string__o *pSVar9;
  System_Int32_array *pSVar10;
  System_Collections_Generic_Dictionary_byte__object__o *__this_01;
  System_Action_Dictionary_byte__object___o *pSVar11;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *value_00;
  Il2CppObject *pIVar12;
  char *pcVar13;
  System_String_o *pSVar14;
  Il2CppClass *pIVar15;
  Il2CppClass *method_00;
  Il2CppClass *in_RCX;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  System_String_o *extraout_RDX;
  MethodInfo *method_06;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  System_Int32_array *extraout_RDX_02;
  MethodInfo *method_07;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  Il2CppObject *extraout_RDX_05;
  MethodInfo *method_08;
  MethodInfo *extraout_RDX_06;
  MethodInfo *extraout_RDX_07;
  MethodInfo *pMVar16;
  System_Collections_Generic_Dictionary_byte__object__array *data_00;
  System_Collections_Generic_Dictionary_byte__object__Fields *pSVar17;
  undefined8 unaff_RBX;
  System_Action_string__o *pSVar18;
  System_Action_string__o *pSVar19;
  uint uVar20;
  uint uVar21;
  System_Collections_Generic_Dictionary_int__object__o *__this_02;
  Anticheat_ModeratorManager___c__DisplayClass89_0_o *pAVar22;
  System_Collections_Generic_Dictionary_byte__object__o *pSVar23;
  char cVar24;
  undefined8 uVar25;
  System_Collections_Generic_Dictionary_byte__object__array *unaff_R12;
  System_Action_Dictionary_byte__object___o *unaff_R13;
  int iVar26;
  Il2CppClass *pIVar27;
  ulong uVar28;
  bool bVar29;
  int iStack_15c;
  int iStack_158;
  int iStack_154;
  Il2CppObject *pIStack_150;
  System_String_o *pSStack_148;
  System_Action_string__o *pSStack_140;
  System_Collections_Generic_Dictionary_byte__object__o *pSStack_138;
  Il2CppClass *pIStack_130;
  ulong uStack_128;
  System_Int32_array *pSStack_120;
  int iStack_10c;
  int iStack_108;
  uint uStack_104;
  System_String_o *pSStack_100;
  Il2CppClass *pIStack_f8;
  System_Action_Dictionary_byte__object___o *pSStack_f0;
  Il2CppClass *pIStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  uint uStack_c8;
  uint auStack_c4 [3];
  undefined8 uStack_b8;
  System_Collections_Generic_Dictionary_byte__object__array *pSStack_b0;
  System_Action_Dictionary_byte__object___o *pSStack_a8;
  ulong uStack_a0;
  System_Collections_Generic_Dictionary_byte__object__array *pSStack_98;
  System_Action_string__o *pSStack_90;
  uint auStack_84 [3];
  System_Collections_Generic_Dictionary_byte__object__array *pSStack_78;
  System_Collections_Generic_Dictionary_byte__object__array *pSStack_70;
  undefined8 *puStack_68;
  System_Collections_Generic_Dictionary_byte__object__array *pSStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  System_Collections_Generic_Dictionary_byte__object__array *pSStack_48;
  
  if (g_data_057aeb8c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb8c = '\x01';
  }
  if (data == (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
label_044db4a7:
    pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
label_044db4ac:
    il2cpp_runtime_helper_022b2fd0();
    if (g_data_057aeb8d == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      il2cpp_runtime_helper_023445d0(&"Request timed out");
      g_data_057aeb8d = '\x01';
    }
    pIVar15 = pIVar12[1].klass;
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    Anticheat_ModeratorManager__InvokeStatus
              ("Request timed out",(System_Action_string__o *)pIVar15,(MethodInfo *)0x0);
    return;
  }
  bVar3 = System_Collections_Generic_Dictionary_byte__object___ContainsKey(data,'\x01',MethodInfo_Boolean_ContainsKey);
  cVar24 = '\0';
  if ((char)bVar3 != '\0') {
    pIVar12 = System_Collections_Generic_Dictionary_byte__object___get_Item(data,'\x01',MethodInfo_Object_get_Item);
    if (pIVar12 == (Il2CppObject *)0x0) goto label_044db4a7;
    in_RCX = (pIVar12->klass->_1).element_class;
    if (in_RCX != *(Il2CppClass **)(g_data_057b9b98 + 0x40)) goto label_044db4ac;
    pcVar13 = (char *)il2cpp_runtime_helper_02305440(pIVar12);
    cVar24 = *pcVar13;
  }
  bVar3 = System_Collections_Generic_Dictionary_byte__object___ContainsKey(data,'\x02',MethodInfo_Boolean_ContainsKey);
  if ((char)bVar3 == '\0') {
label_044db42f:
    pSVar14 = *(System_String_o **)g_data_057b9c00->static_fields;
  }
  else {
    pSVar14 = (System_String_o *)
              System_Collections_Generic_Dictionary_byte__object___get_Item(data,'\x02',MethodInfo_Object_get_Item);
    if ((pSVar14 != (System_String_o *)0x0) && ((Il2CppClass *)pSVar14->klass != g_data_057b9c00)) {
      il2cpp_runtime_helper_022b2fd0(pSVar14);
      goto label_044db42f;
    }
  }
  pSVar7 = (__this->fields).localStatus;
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Anticheat_ModeratorManager__InvokeStatus(pSVar14,pSVar7,(MethodInfo *)0x0);
  if (cVar24 == '\0') {
    return;
  }
  pSVar10 = (System_Int32_array *)(__this->fields).localStatus;
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057aeb5f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_Dictionary_byte_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Byte_System_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_byte_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RequestPlayerList_b__0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RequestPlayerList_b__1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass85_0);
    il2cpp_runtime_helper_023445d0(&"Sending request...");
    g_data_057aeb5f = '\x01';
  }
  onResponse = (System_Collections_Generic_Dictionary_byte__object__array *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass85_0);
  pSVar7 = (System_Action_string__o *)0x0;
  data_00 = onResponse;
  Anticheat_ModeratorManager___c__DisplayClass85_0___ctor
            ((Anticheat_ModeratorManager___c__DisplayClass85_0_o *)onResponse,(MethodInfo *)0x0);
  if (onResponse != (System_Collections_Generic_Dictionary_byte__object__array *)0x0) {
    ((System_Collections_Generic_Dictionary_byte__object__Fields *)&onResponse->bounds)->_buckets = pSVar10;
    il2cpp_runtime_helper_022b4080((System_Collections_Generic_Dictionary_byte__object__Fields *)&onResponse->bounds,
                       pSVar10);
    pSVar10 = ((System_Collections_Generic_Dictionary_byte__object__Fields *)&onResponse->bounds)->_buckets;
    unaff_R12 = (System_Collections_Generic_Dictionary_byte__object__array *)&TypeInfo_ModeratorManager;
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057aeb5b == '\0') goto label_044d73a0;
label_044d727e:
      uVar25 = "Sending request...";
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto label_044d728f;
label_044d73c4:
      il2cpp_runtime_helper_02337ed0();
      lVar1 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
    }
    else {
      if (g_data_057aeb5b != '\0') goto label_044d727e;
label_044d73a0:
      uVar25 = "Sending request...";
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      g_data_057aeb5b = '\x01';
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto label_044d73c4;
label_044d728f:
      lVar1 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
    }
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),uVar25,*(undefined8 *)(lVar1 + 0x28));
    }
    if (pSVar10 != (System_Int32_array *)0x0) {
      (*(code *)pSVar10->max_length)
                (*(intptr_t *)((long)pSVar10->m_Items + 0x20),uVar25,*(intptr_t *)((long)pSVar10->m_Items + 8)
                );
    }
    pSVar4 = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_Dictionary_byte_object);
    System_Action_object____ctor();
    pSVar5 = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
    in_RCX = (Il2CppClass *)0x0;
    System_Action___ctor();
    pSVar14 = Anticheat_ModeratorManager__TrackRequest(5.0,pSVar4,pSVar5,method_01);
    pSVar6 = (System_Collections_Generic_Dictionary_byte__object__array *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_byte_object);
    pSVar7 = MethodInfo_Dictionary_2_System_Byte_System_Object;
    data_00 = pSVar6;
    System_Collections_Generic_Dictionary_byte__object____ctor
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar6,
               (MethodInfo_304B1A0 *)MethodInfo_Dictionary_2_System_Byte_System_Object);
    unaff_RBX = 0;
    if (pSVar6 != (System_Collections_Generic_Dictionary_byte__object__array *)0x0) {
      System_Collections_Generic_Dictionary_byte__object___Add
                ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar6,'\0',(Il2CppObject *)pSVar14,
                 MethodInfo_Void_Add);
      Anticheat_ModeratorManager__RaiseModEvent
                (0xb6,(System_Collections_Generic_Dictionary_byte__object__o *)pSVar6,method_02);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  uStack_50 = unaff_RBX;
  pSStack_48 = unaff_R12;
  if (g_data_057aeb60 == '\0') {
    uStack_58 = 0x44d7456;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    uStack_58 = 0x44d7462;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    uStack_58 = 0x44d746e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb60 = '\x01';
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto label_044d7488;
label_044d7418:
    if (g_data_057ae4db != '\0') goto label_044d7421;
label_044d7496:
    uStack_58 = 0x44d74a2;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057ae4db = '\x01';
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto label_044d74b9;
label_044d7431:
    __this_02 = *(System_Collections_Generic_Dictionary_int__object__o **)
                 (*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x10);
    if (__this_02 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      pSVar6 = (System_Collections_Generic_Dictionary_byte__object__array *)0x0;
    }
    else {
label_044d74d5:
      uStack_58 = 0x44d74e4;
      System_Collections_Generic_Dictionary_int__object___Clear(__this_02,MethodInfo_Void_Clear);
      pSVar7 = (System_Action_string__o *)0x1;
      uStack_58 = 0x44d74f1;
      pSVar6 = data_00;
      onResponse = Anticheat_ModeratorManager__GetResponseEntries
                             ((System_Collections_Generic_Dictionary_byte__object__o *)data_00,'\x01',
                              method_03);
      if ((onResponse == (System_Collections_Generic_Dictionary_byte__object__array *)0x0) ||
         ((int)onResponse->max_length < 1)) {
label_044d75fa:
        if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
          uStack_58 = 0x44d7632;
          il2cpp_runtime_helper_02337ed0();
          lVar1 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x28);
        }
        else {
          lVar1 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x28);
        }
        if (lVar1 == 0) {
          return;
        }
        (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
        return;
      }
      data_00 = (System_Collections_Generic_Dictionary_byte__object__array *)0x0;
      unaff_R13 = (System_Action_Dictionary_byte__object___o *)&MethodInfo_Void_set_Item;
      if ((onResponse->max_length & 0xffffffff) != 0) {
        do {
          unaff_R12 = (System_Collections_Generic_Dictionary_byte__object__array *)
                      onResponse->m_Items[(long)data_00];
          value = unaff_R12;
          if (unaff_R12 != (System_Collections_Generic_Dictionary_byte__object__array *)0x0) {
            if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
              uStack_58 = 0x44d757f;
              il2cpp_runtime_helper_02337ed0();
            }
            uStack_58 = 0x44d7587;
            pSVar6 = unaff_R12;
            value = (System_Collections_Generic_Dictionary_byte__object__array *)
                    Anticheat_ModeratorManager__ParsePlayerEntry
                              ((System_Collections_Generic_Dictionary_byte__object__o *)unaff_R12,
                               (MethodInfo *)pSVar7);
            if (value == (System_Collections_Generic_Dictionary_byte__object__array *)0x0) goto label_044d7654;
            if (0 < *(int *)(value->m_Items + 1)) {
              if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
                uStack_58 = 0x44d75c5;
                il2cpp_runtime_helper_02337ed0();
                if (g_data_057ae4db == '\0') goto label_044d75ce;
label_044d75ae:
                iVar26 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
              }
              else {
                if (g_data_057ae4db != '\0') goto label_044d75ae;
label_044d75ce:
                uStack_58 = 0x44d75d6;
                il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
                g_data_057ae4db = '\x01';
                iVar26 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
              }
              if (iVar26 == 0) {
                uStack_58 = 0x44d75f2;
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar6 = *(System_Collections_Generic_Dictionary_byte__object__array **)
                        (*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x10);
              unaff_R12 = value;
              if (pSVar6 == (System_Collections_Generic_Dictionary_byte__object__array *)0x0)
              goto label_044d7654;
              pSVar7 = (System_Action_string__o *)(ulong)*(uint *)(value->m_Items + 1);
              uStack_58 = 0x44d7545;
              System_Collections_Generic_Dictionary_int__object___set_Item
                        ((System_Collections_Generic_Dictionary_int__object__o *)pSVar6,
                         *(uint *)(value->m_Items + 1),(Il2CppObject *)value,MethodInfo_Void_set_Item);
            }
          }
          data_00 = (System_Collections_Generic_Dictionary_byte__object__array *)
                    ((long)&(data_00->obj).klass + 1);
          uVar20 = (uint)onResponse->max_length;
          in_RCX = (Il2CppClass *)(long)(int)uVar20;
          if ((long)in_RCX <= (long)data_00) goto label_044d75fa;
          unaff_R12 = value;
        } while (data_00 < (System_Collections_Generic_Dictionary_byte__object__array *)(ulong)uVar20);
      }
      uStack_58 = 0x44d7654;
      il2cpp_runtime_helper_022b2ca0();
    }
  }
  else {
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto label_044d7418;
label_044d7488:
    uStack_58 = 0x44d748d;
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae4db == '\0') goto label_044d7496;
label_044d7421:
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto label_044d7431;
label_044d74b9:
    uStack_58 = 0x44d74be;
    il2cpp_runtime_helper_02337ed0();
    __this_02 = *(System_Collections_Generic_Dictionary_int__object__o **)
                 (*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x10);
    pSVar6 = (System_Collections_Generic_Dictionary_byte__object__array *)0x0;
    if (__this_02 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_044d74d5;
  }
label_044d7654:
  uVar20 = (uint)pSVar6;
  uStack_58 = 0x44d7659;
  il2cpp_runtime_helper_022b2c90();
  puStack_68 = &TypeInfo_ModeratorManager;
  pSStack_78 = data_00;
  pSStack_70 = unaff_R12;
  pSStack_60 = onResponse;
  if (g_data_057aeb63 == '\0') {
    pSStack_90 = (System_Action_string__o *)0x44d7687;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_Dictionary_byte_object);
    pSStack_90 = (System_Action_string__o *)0x44d7693;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    pSStack_90 = (System_Action_string__o *)0x44d769f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pSStack_90 = (System_Action_string__o *)0x44d76ab;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Byte_System_Object);
    pSStack_90 = (System_Action_string__o *)0x44d76b7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_byte_object);
    pSStack_90 = (System_Action_string__o *)0x44d76c3;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    pSStack_90 = (System_Action_string__o *)0x44d76cf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_KickPlayer_b__0);
    pSStack_90 = (System_Action_string__o *)0x44d76db;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_KickPlayer_b__1);
    pSStack_90 = (System_Action_string__o *)0x44d76e7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass89_0);
    pSStack_90 = (System_Action_string__o *)0x44d76f3;
    il2cpp_runtime_helper_023445d0(&"Sending request...");
    g_data_057aeb63 = '\x01';
  }
  pSStack_90 = (System_Action_string__o *)0x44d7709;
  __this_00 = (Anticheat_ModeratorManager___c__DisplayClass89_0_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass89_0);
  pSVar18 = (System_Action_string__o *)0x0;
  pSStack_90 = (System_Action_string__o *)0x44d7716;
  pAVar22 = __this_00;
  Anticheat_ModeratorManager___c__DisplayClass89_0___ctor(__this_00,(MethodInfo *)0x0);
  uVar21 = (uint)pAVar22;
  if (__this_00 != (Anticheat_ModeratorManager___c__DisplayClass89_0_o *)0x0) {
    (__this_00->fields).localStatus = pSVar7;
    pSStack_90 = (System_Action_string__o *)0x44d7732;
    il2cpp_runtime_helper_022b4080(&__this_00->fields,pSVar7);
    pSVar7 = (__this_00->fields).localStatus;
    unaff_R12 = (System_Collections_Generic_Dictionary_byte__object__array *)&TypeInfo_ModeratorManager;
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      pSStack_90 = (System_Action_string__o *)0x44d78f1;
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057aeb5b == '\0') goto label_044d7908;
label_044d7765:
      uVar25 = "Sending request...";
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto label_044d7776;
label_044d792c:
      pSStack_90 = (System_Action_string__o *)0x44d7931;
      il2cpp_runtime_helper_02337ed0();
      lVar1 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
    }
    else {
      if (g_data_057aeb5b != '\0') goto label_044d7765;
label_044d7908:
      uVar25 = "Sending request...";
      pSStack_90 = (System_Action_string__o *)0x44d7914;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      g_data_057aeb5b = '\x01';
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto label_044d792c;
label_044d7776:
      lVar1 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
    }
    if (lVar1 != 0) {
      pSStack_90 = (System_Action_string__o *)0x44d7794;
      (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),uVar25,*(undefined8 *)(lVar1 + 0x28));
    }
    if (pSVar7 != (System_Action_string__o *)0x0) {
      pSStack_90 = (System_Action_string__o *)0x44d77a7;
      (*(code *)(pSVar7->fields).invoke_impl)((pSVar7->fields).method_code,uVar25,(pSVar7->fields).method);
    }
    pSStack_90 = (System_Action_string__o *)0x44d77b6;
    onResponse = (System_Collections_Generic_Dictionary_byte__object__array *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_Dictionary_byte_object)
    ;
    pSStack_90 = (System_Action_string__o *)0x44d77d0;
    System_Action_object____ctor();
    pSStack_90 = (System_Action_string__o *)0x44d77df;
    pSVar5 = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
    in_RCX = (Il2CppClass *)0x0;
    pSStack_90 = (System_Action_string__o *)0x44d77f9;
    System_Action___ctor();
    pSStack_90 = (System_Action_string__o *)0x44d780c;
    pSVar7 = (System_Action_string__o *)
             Anticheat_ModeratorManager__TrackRequest
                       (5.0,(System_Action_Dictionary_byte__object___o *)onResponse,pSVar5,method_04);
    pSStack_90 = (System_Action_string__o *)0x44d781e;
    pSVar8 = (System_Collections_Generic_Dictionary_byte__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_byte_object);
    pSStack_90 = (System_Action_string__o *)0x44d7833;
    pSVar18 = MethodInfo_Dictionary_2_System_Byte_System_Object;
    pSVar23 = pSVar8;
    System_Collections_Generic_Dictionary_byte__object____ctor(pSVar8,(MethodInfo_304B1A0 *)MethodInfo_Dictionary_2_System_Byte_System_Object);
    uVar21 = (uint)pSVar23;
    if (pSVar8 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
      pSStack_90 = (System_Action_string__o *)0x44d7853;
      System_Collections_Generic_Dictionary_byte__object___Add
                (pSVar8,'\0',(Il2CppObject *)pSVar7,MethodInfo_Void_Add);
      auStack_84[2] = 1;
      pSStack_90 = (System_Action_string__o *)0x44d7870;
      pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_84 + 2);
      pSStack_90 = (System_Action_string__o *)0x44d7883;
      System_Collections_Generic_Dictionary_byte__object___Add(pSVar8,'\x01',pIVar12,MethodInfo_Void_Add);
      auStack_84[1] = 0;
      pSStack_90 = (System_Action_string__o *)0x44d7899;
      pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_84 + 1);
      pSStack_90 = (System_Action_string__o *)0x44d78ac;
      System_Collections_Generic_Dictionary_byte__object___Add(pSVar8,'\x02',pIVar12,MethodInfo_Void_Add);
      pSStack_90 = (System_Action_string__o *)0x44d78bf;
      auStack_84[0] = uVar20;
      pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_84);
      pSStack_90 = (System_Action_string__o *)0x44d78d2;
      System_Collections_Generic_Dictionary_byte__object___Add(pSVar8,'\x03',pIVar12,MethodInfo_Void_Add);
      pSStack_90 = (System_Action_string__o *)0x44d78df;
      Anticheat_ModeratorManager__RaiseModEvent(0xb4,pSVar8,method_05);
      return;
    }
  }
  pSStack_90 = (System_Action_string__o *)0x44d7953;
  il2cpp_runtime_helper_022b2c90();
  pIVar27 = (Il2CppClass *)(ulong)uVar21;
  pIVar15 = in_RCX;
  uStack_b8 = 0;
  pSStack_b0 = unaff_R12;
  pSStack_a8 = unaff_R13;
  uStack_a0 = (ulong)uVar20;
  pSStack_98 = onResponse;
  pSStack_90 = pSVar7;
  if (g_data_057aeb64 == '\0') {
    uStack_d8 = 0x44d798f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_Dictionary_byte_object);
    uStack_d8 = 0x44d799b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    uStack_d8 = 0x44d79a7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    uStack_d8 = 0x44d79b3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Byte_System_Object);
    uStack_d8 = 0x44d79bf;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_byte_object);
    uStack_d8 = 0x44d79cb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    uStack_d8 = 0x44d79d7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RoomBan_b__0);
    uStack_d8 = 0x44d79e3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RoomBan_b__1);
    uStack_d8 = 0x44d79ef;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass90_0);
    uStack_d8 = 0x44d79fb;
    il2cpp_runtime_helper_023445d0(&"Sending request...");
    g_data_057aeb64 = '\x01';
  }
  uStack_d8 = 0x44d7a11;
  pSVar9 = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass90_0);
  pSVar19 = (System_Action_string__o *)0x0;
  uStack_d8 = 0x44d7a1e;
  pSVar7 = pSVar9;
  Anticheat_ModeratorManager___c__DisplayClass90_0___ctor
            ((Anticheat_ModeratorManager___c__DisplayClass90_0_o *)pSVar9,(MethodInfo *)0x0);
  pSVar14 = extraout_RDX;
  if (pSVar9 != (System_Action_string__o *)0x0) {
    (pSVar9->fields).method_ptr = (intptr_t)extraout_RDX;
    uStack_d8 = 0x44d7a3f;
    uStack_c8 = uVar21;
    il2cpp_runtime_helper_022b4080(&pSVar9->fields,extraout_RDX);
    lVar1 = (pSVar9->fields).method_ptr;
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      uStack_d8 = 0x44d7c4a;
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057aeb5b == '\0') goto label_044d7c68;
label_044d7a71:
      uVar25 = "Sending request...";
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto label_044d7a81;
label_044d7c92:
      uStack_d8 = 0x44d7c9d;
      il2cpp_runtime_helper_02337ed0();
      lVar2 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
      pIVar27 = in_RCX;
    }
    else {
      if (g_data_057aeb5b != '\0') goto label_044d7a71;
label_044d7c68:
      uVar25 = "Sending request...";
      uStack_d8 = 0x44d7c74;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      g_data_057aeb5b = '\x01';
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto label_044d7c92;
label_044d7a81:
      lVar2 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
    }
    if (lVar2 != 0) {
      uStack_d8 = 0x44d7a9f;
      (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),uVar25,*(undefined8 *)(lVar2 + 0x28));
    }
    if (lVar1 != 0) {
      uStack_d8 = 0x44d7ab2;
      (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),uVar25,*(undefined8 *)(lVar1 + 0x28));
    }
    uStack_d8 = 0x44d7ac1;
    unaff_R13 = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_Dictionary_byte_object);
    uStack_d8 = 0x44d7adb;
    System_Action_object____ctor();
    uStack_d8 = 0x44d7aea;
    pSVar5 = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
    pIVar15 = (Il2CppClass *)0x0;
    uStack_d8 = 0x44d7b04;
    System_Action___ctor();
    uStack_d8 = 0x44d7b17;
    pSVar14 = Anticheat_ModeratorManager__TrackRequest(5.0,unaff_R13,pSVar5,method_06);
    uStack_d8 = 0x44d7b29;
    pSVar9 = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_byte_object);
    uStack_d8 = 0x44d7b3e;
    pSVar19 = MethodInfo_Dictionary_2_System_Byte_System_Object;
    pSVar7 = pSVar9;
    System_Collections_Generic_Dictionary_byte__object____ctor
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar9,
               (MethodInfo_304B1A0 *)MethodInfo_Dictionary_2_System_Byte_System_Object);
    if (pSVar9 != (System_Action_string__o *)0x0) {
      uStack_d8 = 0x44d7b5f;
      System_Collections_Generic_Dictionary_byte__object___Add
                ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar9,'\0',(Il2CppObject *)pSVar14,
                 MethodInfo_Void_Add);
      auStack_c4[2] = (uint)pSVar18 & 0xff | 2;
      uStack_d8 = 0x44d7b7f;
      pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_c4 + 2);
      uStack_d8 = 0x44d7b93;
      System_Collections_Generic_Dictionary_byte__object___Add
                ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar9,'\x01',pIVar12,MethodInfo_Void_Add);
      auStack_c4[1] = 0;
      uStack_d8 = 0x44d7ba9;
      pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_c4 + 1);
      uStack_d8 = 0x44d7bbd;
      System_Collections_Generic_Dictionary_byte__object___Add
                ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar9,'\x02',pIVar12,MethodInfo_Void_Add);
      auStack_c4[0] = uStack_c8;
      uStack_d8 = 0x44d7bd3;
      pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_c4);
      uStack_d8 = 0x44d7be7;
      System_Collections_Generic_Dictionary_byte__object___Add
                ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar9,'\x03',pIVar12,MethodInfo_Void_Add);
      if (in_RCX == (Il2CppClass *)0x0) {
        in_RCX = *(Il2CppClass **)g_data_057b9c00->static_fields;
      }
      uStack_d8 = 0x44d7c11;
      System_Collections_Generic_Dictionary_byte__object___Add
                ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar9,'\x04',(Il2CppObject *)in_RCX
                 ,MethodInfo_Void_Add);
      pMVar16 = extraout_RDX_00;
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        uStack_d8 = 0x44d7c29;
        il2cpp_runtime_helper_02337ed0();
        pMVar16 = extraout_RDX_01;
      }
      uStack_d8 = 0x44d7c36;
      Anticheat_ModeratorManager__RaiseModEvent
                (0xb4,(System_Collections_Generic_Dictionary_byte__object__o *)pSVar9,pMVar16);
      return;
    }
  }
  uStack_d8 = 0x44d7cc2;
  il2cpp_runtime_helper_022b2c90();
  uVar28 = (ulong)pSVar19 & 0xffffffff;
  method_00 = pIVar15;
  pSStack_100 = pSVar14;
  pIStack_f8 = in_RCX;
  pSStack_f0 = unaff_R13;
  pIStack_e8 = pIVar27;
  uStack_e0 = (ulong)pSVar18 & 0xffffffff;
  uStack_d8 = 0;
  if (g_data_057aeb65 == '\0') {
    pSStack_120 = (System_Int32_array *)0x44d7d03;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_Dictionary_byte_object);
    pSStack_120 = (System_Int32_array *)0x44d7d0f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    pSStack_120 = (System_Int32_array *)0x44d7d1b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pSStack_120 = (System_Int32_array *)0x44d7d27;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Byte_System_Object);
    pSStack_120 = (System_Int32_array *)0x44d7d33;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_byte_object);
    pSStack_120 = (System_Int32_array *)0x44d7d3f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    pSStack_120 = (System_Int32_array *)0x44d7d4b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RoomBanPlayerEntry_b__0);
    pSStack_120 = (System_Int32_array *)0x44d7d57;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RoomBanPlayerEntry_b__1);
    pSStack_120 = (System_Int32_array *)0x44d7d63;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass91_0);
    pSStack_120 = (System_Int32_array *)0x44d7d6f;
    il2cpp_runtime_helper_023445d0(&"Player has no session ID to ban.");
    pSStack_120 = (System_Int32_array *)0x44d7d7b;
    il2cpp_runtime_helper_023445d0(&"Invalid player entry.");
    pSStack_120 = (System_Int32_array *)0x44d7d87;
    il2cpp_runtime_helper_023445d0(&"Sending request...");
    pSStack_120 = (System_Int32_array *)0x44d7d93;
    il2cpp_runtime_helper_023445d0(&"Player has no IP address to ban.");
    g_data_057aeb65 = '\x01';
  }
  pSStack_120 = (System_Int32_array *)0x44d7da9;
  pSVar8 = (System_Collections_Generic_Dictionary_byte__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass91_0);
  pSVar18 = (System_Action_string__o *)0x0;
  pSStack_120 = (System_Int32_array *)0x44d7db6;
  pSVar23 = pSVar8;
  Anticheat_ModeratorManager___c__DisplayClass91_0___ctor
            ((Anticheat_ModeratorManager___c__DisplayClass91_0_o *)pSVar8,(MethodInfo *)0x0);
  pSVar10 = extraout_RDX_02;
  if (pSVar8 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
    pSVar17 = &pSVar8->fields;
    (pSVar8->fields)._buckets = extraout_RDX_02;
    pSStack_120 = (System_Int32_array *)0x44d7dd5;
    il2cpp_runtime_helper_022b4080(pSVar17);
    if (pSVar7 == (System_Action_string__o *)0x0) {
      pSVar10 = pSVar17->_buckets;
      uVar25 = "Invalid player entry.";
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        pSStack_120 = (System_Int32_array *)0x44d7e42;
        il2cpp_runtime_helper_02337ed0();
        uVar25 = "Invalid player entry.";
      }
joined_r0x044d81fe:
      if (g_data_057aeb5b == '\0') {
        pSStack_120 = (System_Int32_array *)0x44d7e61;
        il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
        g_data_057aeb5b = '\x01';
      }
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        pSStack_120 = (System_Int32_array *)0x44d7f0d;
        il2cpp_runtime_helper_02337ed0();
        lVar1 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
      }
      else {
        lVar1 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
      }
      if (lVar1 != 0) {
        pSStack_120 = (System_Int32_array *)0x44d7e96;
        (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),uVar25,*(undefined8 *)(lVar1 + 0x28));
      }
      if (pSVar10 == (System_Int32_array *)0x0) {
        return;
      }
      (*(code *)pSVar10->max_length)
                (*(intptr_t *)((long)pSVar10->m_Items + 0x20),uVar25,*(intptr_t *)((long)pSVar10->m_Items + 8)
                );
      return;
    }
    if ((char)uVar28 == '\0') {
      pSStack_120 = (System_Int32_array *)0x44d7eca;
      bVar3 = System_String__IsNullOrEmpty((System_String_o *)(pSVar7->fields).method_ptr,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        pSVar10 = pSVar17->_buckets;
        uVar25 = "Player has no session ID to ban.";
        if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
          pSStack_120 = (System_Int32_array *)0x44d81ed;
          il2cpp_runtime_helper_02337ed0();
          uVar25 = "Player has no session ID to ban.";
        }
        goto joined_r0x044d81fe;
      }
      iStack_10c = 1;
      pSVar7 = (System_Action_string__o *)(pSVar7->fields).method_ptr;
      pSVar10 = pSVar17->_buckets;
      iVar26 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
    }
    else {
      pSStack_120 = (System_Int32_array *)0x44d7def;
      bVar3 = System_String__IsNullOrEmpty((System_String_o *)(pSVar7->fields).invoke_impl,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        pSVar10 = pSVar17->_buckets;
        uVar25 = "Player has no IP address to ban.";
        if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
          pSStack_120 = (System_Int32_array *)0x44d7e12;
          il2cpp_runtime_helper_02337ed0();
          uVar25 = "Player has no IP address to ban.";
        }
        goto joined_r0x044d81fe;
      }
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        pSStack_120 = (System_Int32_array *)0x44d820e;
        il2cpp_runtime_helper_02337ed0();
        if (g_data_057ae4d9 == '\0') goto label_044d821b;
label_044d7f4e:
        iVar26 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
      }
      else {
        if (g_data_057ae4d9 != '\0') goto label_044d7f4e;
label_044d821b:
        pSStack_120 = (System_Int32_array *)0x44d8227;
        il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
        g_data_057ae4d9 = '\x01';
        iVar26 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
      }
      if (iVar26 == 0) {
        pSStack_120 = (System_Int32_array *)0x44d8244;
        il2cpp_runtime_helper_02337ed0();
      }
      iStack_10c = (uint)(*(char *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 8) == '\0') * 2 + 2;
      pSVar7 = (System_Action_string__o *)(pSVar7->fields).invoke_impl;
      pSVar10 = pSVar17->_buckets;
      iVar26 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
    }
    if (iVar26 == 0) {
      pSStack_120 = (System_Int32_array *)0x44d7fba;
      il2cpp_runtime_helper_02337ed0();
    }
    uVar25 = "Sending request...";
    if (g_data_057aeb5b == '\0') {
      pSStack_120 = (System_Int32_array *)0x44d81a2;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      g_data_057aeb5b = '\x01';
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto label_044d81c0;
label_044d7fe8:
      lVar1 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
    }
    else {
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto label_044d7fe8;
label_044d81c0:
      pSStack_120 = (System_Int32_array *)0x44d81c5;
      il2cpp_runtime_helper_02337ed0();
      lVar1 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
    }
    if (lVar1 != 0) {
      pSStack_120 = (System_Int32_array *)0x44d8006;
      (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),uVar25,*(undefined8 *)(lVar1 + 0x28));
    }
    if (pSVar10 != (System_Int32_array *)0x0) {
      pSStack_120 = (System_Int32_array *)0x44d8019;
      (*(code *)pSVar10->max_length)
                (*(intptr_t *)((long)pSVar10->m_Items + 0x20),uVar25,*(intptr_t *)((long)pSVar10->m_Items + 8)
                );
    }
    pSStack_120 = (System_Int32_array *)0x44d8028;
    pSVar4 = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_Dictionary_byte_object);
    pSStack_120 = (System_Int32_array *)0x44d8042;
    System_Action_object____ctor();
    pSStack_120 = (System_Int32_array *)0x44d8051;
    pSVar5 = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
    method_00 = (Il2CppClass *)0x0;
    pSStack_120 = (System_Int32_array *)0x44d806b;
    System_Action___ctor();
    pSStack_120 = (System_Int32_array *)0x44d807e;
    pSVar10 = (System_Int32_array *)Anticheat_ModeratorManager__TrackRequest(5.0,pSVar4,pSVar5,method_07);
    pSStack_120 = (System_Int32_array *)0x44d8090;
    __this_01 = (System_Collections_Generic_Dictionary_byte__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_byte_object);
    pSStack_120 = (System_Int32_array *)0x44d80a5;
    pSVar18 = MethodInfo_Dictionary_2_System_Byte_System_Object;
    pSVar23 = __this_01;
    System_Collections_Generic_Dictionary_byte__object____ctor(__this_01,(MethodInfo_304B1A0 *)MethodInfo_Dictionary_2_System_Byte_System_Object);
    pSVar14 = (System_String_o *)0x0;
    if (__this_01 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
      pSStack_120 = (System_Int32_array *)0x44d80c6;
      System_Collections_Generic_Dictionary_byte__object___Add
                (__this_01,'\0',(Il2CppObject *)pSVar10,MethodInfo_Void_Add);
      uStack_104 = (uint)pSVar19 & 0xff | 2;
      pSStack_120 = (System_Int32_array *)0x44d80e6;
      pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_104);
      pSStack_120 = (System_Int32_array *)0x44d80fa;
      System_Collections_Generic_Dictionary_byte__object___Add(__this_01,'\x01',pIVar12,MethodInfo_Void_Add);
      iStack_108 = iStack_10c;
      pSStack_120 = (System_Int32_array *)0x44d8110;
      pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_108);
      pSStack_120 = (System_Int32_array *)0x44d8124;
      System_Collections_Generic_Dictionary_byte__object___Add(__this_01,'\x02',pIVar12,MethodInfo_Void_Add);
      pSStack_120 = (System_Int32_array *)0x44d8138;
      System_Collections_Generic_Dictionary_byte__object___Add
                (__this_01,'\x03',(Il2CppObject *)pSVar7,MethodInfo_Void_Add);
      if (pIVar15 == (Il2CppClass *)0x0) {
        pIVar15 = *(Il2CppClass **)g_data_057b9c00->static_fields;
      }
      pSStack_120 = (System_Int32_array *)0x44d8162;
      System_Collections_Generic_Dictionary_byte__object___Add
                (__this_01,'\x04',(Il2CppObject *)pIVar15,MethodInfo_Void_Add);
      pMVar16 = extraout_RDX_03;
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        pSStack_120 = (System_Int32_array *)0x44d817a;
        il2cpp_runtime_helper_02337ed0();
        pMVar16 = extraout_RDX_04;
      }
      pSStack_120 = (System_Int32_array *)0x44d8187;
      Anticheat_ModeratorManager__RaiseModEvent(0xb4,__this_01,pMVar16);
      return;
    }
  }
  pSStack_120 = (System_Int32_array *)0x44d8252;
  il2cpp_runtime_helper_022b2c90();
  pSStack_148 = pSVar14;
  pSStack_140 = pSVar7;
  pSStack_138 = pSVar8;
  pIStack_130 = pIVar15;
  uStack_128 = uVar28;
  pSStack_120 = pSVar10;
  if (g_data_057aeb66 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_Dictionary_byte_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Byte_System_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_byte_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RoomUnban_b__0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RoomUnban_b__1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass92_0);
    il2cpp_runtime_helper_023445d0(&"Sending request...");
    g_data_057aeb66 = '\x01';
  }
  pSVar11 = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass92_0);
  pSVar4 = pSVar11;
  Anticheat_ModeratorManager___c__DisplayClass92_0___ctor
            ((Anticheat_ModeratorManager___c__DisplayClass92_0_o *)pSVar11,(MethodInfo *)0x0);
  if (pSVar11 == (System_Action_Dictionary_byte__object___o *)0x0) goto label_044d867f;
  (pSVar11->fields).method_ptr = (intptr_t)pSVar18;
  il2cpp_runtime_helper_022b4080(&pSVar11->fields,pSVar18);
  pSVar7 = (System_Action_string__o *)(pSVar11->fields).method_ptr;
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057aeb5b == '\0') goto label_044d84a5;
label_044d836a:
    uVar25 = "Sending request...";
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto label_044d837b;
label_044d84c9:
    il2cpp_runtime_helper_02337ed0();
    lVar1 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
  }
  else {
    if (g_data_057aeb5b != '\0') goto label_044d836a;
label_044d84a5:
    uVar25 = "Sending request...";
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb5b = '\x01';
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto label_044d84c9;
label_044d837b:
    lVar1 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
  }
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),uVar25,*(undefined8 *)(lVar1 + 0x28));
  }
  if (pSVar7 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar7->fields).invoke_impl)((pSVar7->fields).method_code,uVar25,(pSVar7->fields).method);
  }
  pSVar4 = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_Dictionary_byte_object);
  System_Action_object____ctor();
  pSVar5 = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
  method_00 = (Il2CppClass *)0x0;
  System_Action___ctor();
  pSVar14 = Anticheat_ModeratorManager__TrackRequest(5.0,pSVar4,pSVar5,method_08);
  if (pSVar23 == (System_Collections_Generic_Dictionary_byte__object__o *)0x0) goto label_044d867f;
  iVar26 = (pSVar23->fields)._freeCount;
  pIStack_150 = extraout_RDX_05;
  if ((char)(pSVar23->fields)._version == '\0') {
    if (0 < iVar26) goto label_044d84f3;
    value_00 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)(pSVar23->fields)._buckets;
    iVar26 = 1;
  }
  else if (iVar26 < 1) {
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057ae4d9 == '\0') goto label_044d864d;
label_044d8457:
      iVar26 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
    }
    else {
      if (g_data_057ae4d9 != '\0') goto label_044d8457;
label_044d864d:
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      g_data_057ae4d9 = '\x01';
      iVar26 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
    }
    if (iVar26 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar29 = *(char *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 8) == '\0';
    method_00 = (Il2CppClass *)(ulong)bVar29;
    iVar26 = (uint)bVar29 * 2 + 2;
    value_00 = (pSVar23->fields)._entries;
  }
  else {
label_044d84f3:
    iStack_154 = iVar26;
    value_00 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
               il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_154);
    iVar26 = 0;
  }
  pSVar11 = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_byte_object);
  pSVar4 = pSVar11;
  System_Collections_Generic_Dictionary_byte__object____ctor
            ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar11,
             (MethodInfo_304B1A0 *)MethodInfo_Dictionary_2_System_Byte_System_Object);
  if (pSVar11 != (System_Action_Dictionary_byte__object___o *)0x0) {
    System_Collections_Generic_Dictionary_byte__object___Add
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar11,'\0',(Il2CppObject *)pSVar14,
               MethodInfo_Void_Add);
    iStack_158 = 5 - (uint)((char)(pSVar23->fields)._version == '\0');
    pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_158);
    System_Collections_Generic_Dictionary_byte__object___Add
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar11,'\x01',pIVar12,MethodInfo_Void_Add);
    iStack_15c = iVar26;
    pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_15c);
    System_Collections_Generic_Dictionary_byte__object___Add
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar11,'\x02',pIVar12,MethodInfo_Void_Add);
    System_Collections_Generic_Dictionary_byte__object___Add
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar11,'\x03',&value_00->obj,
               MethodInfo_Void_Add);
    pIVar12 = pIStack_150;
    if (pIStack_150 == (Il2CppObject *)0x0) {
      pIVar12 = *(Il2CppObject **)g_data_057b9c00->static_fields;
    }
    System_Collections_Generic_Dictionary_byte__object___Add
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar11,'\x04',pIVar12,MethodInfo_Void_Add);
    pMVar16 = extraout_RDX_06;
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pMVar16 = extraout_RDX_07;
    }
    Anticheat_ModeratorManager__RaiseModEvent
              (0xb4,(System_Collections_Generic_Dictionary_byte__object__o *)pSVar11,pMVar16);
    return;
  }
label_044d867f:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeb67 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb67 = '\x01';
  }
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Anticheat_ModeratorManager__RequestRoomBanList_43d86e0
            (0,0x32,(System_Action_string__o *)pSVar4,(MethodInfo *)method_00);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass89_0$$<KickPlayer>b__1
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass89_0___KickPlayer_b__1 (Anticheat_ModeratorManager___c__DisplayClass89_0_o* __this, const MethodInfo* method);
// 0x44db4c0

void Anticheat_ModeratorManager___c__DisplayClass89_0___KickPlayer_b__1
               (Anticheat_ModeratorManager___c__DisplayClass89_0_o *__this,MethodInfo *method)

{
  System_Action_string__o *localStatus;
  
  if (g_data_057aeb8d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    il2cpp_runtime_helper_023445d0(&"Request timed out");
    g_data_057aeb8d = '\x01';
  }
  localStatus = (__this->fields).localStatus;
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Anticheat_ModeratorManager__InvokeStatus("Request timed out",localStatus,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass90_0$$.ctor
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass90_0___ctor (Anticheat_ModeratorManager___c__DisplayClass90_0_o* __this, const MethodInfo* method);
// 0x44db520

void Anticheat_ModeratorManager___c__DisplayClass90_0___ctor
               (Anticheat_ModeratorManager___c__DisplayClass90_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass90_0$$<RoomBan>b__0
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass90_0___RoomBan_b__0 (Anticheat_ModeratorManager___c__DisplayClass90_0_o* __this, System_Collections_Generic_Dictionary_byte__object__o* data, const MethodInfo* method);
// 0x44db530

void Anticheat_ModeratorManager___c__DisplayClass90_0___RoomBan_b__0
               (Anticheat_ModeratorManager___c__DisplayClass90_0_o *__this,
               System_Collections_Generic_Dictionary_byte__object__o *data,MethodInfo *method)

{
  long lVar1;
  long lVar2;
  bool_conflict bVar3;
  System_Collections_Generic_Dictionary_byte__object__array *onResponse;
  System_Action_Dictionary_byte__object___o *pSVar4;
  System_Action_o *pSVar5;
  System_Collections_Generic_Dictionary_byte__object__array *pSVar6;
  System_Collections_Generic_Dictionary_byte__object__array *value;
  Anticheat_ModeratorManager___c__DisplayClass89_0_o *__this_00;
  System_Action_string__o *pSVar7;
  System_Collections_Generic_Dictionary_byte__object__o *pSVar8;
  System_Action_string__o *pSVar9;
  System_Int32_array *pSVar10;
  System_Collections_Generic_Dictionary_byte__object__o *__this_01;
  System_Action_Dictionary_byte__object___o *pSVar11;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *value_00;
  Il2CppObject *pIVar12;
  char *pcVar13;
  System_String_o *pSVar14;
  Il2CppClass *pIVar15;
  Il2CppClass *method_00;
  Il2CppClass *in_RCX;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  System_String_o *extraout_RDX;
  MethodInfo *method_06;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  System_Int32_array *extraout_RDX_02;
  MethodInfo *method_07;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  Il2CppObject *extraout_RDX_05;
  MethodInfo *method_08;
  MethodInfo *extraout_RDX_06;
  MethodInfo *extraout_RDX_07;
  MethodInfo *pMVar16;
  System_Collections_Generic_Dictionary_byte__object__array *data_00;
  System_Collections_Generic_Dictionary_byte__object__Fields *pSVar17;
  undefined8 unaff_RBX;
  System_Action_string__o *pSVar18;
  System_Action_string__o *pSVar19;
  uint uVar20;
  uint uVar21;
  System_Collections_Generic_Dictionary_int__object__o *__this_02;
  Anticheat_ModeratorManager___c__DisplayClass89_0_o *pAVar22;
  System_Collections_Generic_Dictionary_byte__object__o *pSVar23;
  char cVar24;
  undefined8 uVar25;
  System_Collections_Generic_Dictionary_byte__object__array *unaff_R12;
  System_Action_Dictionary_byte__object___o *unaff_R13;
  int iVar26;
  Il2CppClass *pIVar27;
  ulong uVar28;
  bool bVar29;
  int iStack_15c;
  int iStack_158;
  int iStack_154;
  Il2CppObject *pIStack_150;
  System_String_o *pSStack_148;
  System_Action_string__o *pSStack_140;
  System_Collections_Generic_Dictionary_byte__object__o *pSStack_138;
  Il2CppClass *pIStack_130;
  ulong uStack_128;
  System_Int32_array *pSStack_120;
  int iStack_10c;
  int iStack_108;
  uint uStack_104;
  System_String_o *pSStack_100;
  Il2CppClass *pIStack_f8;
  System_Action_Dictionary_byte__object___o *pSStack_f0;
  Il2CppClass *pIStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  uint uStack_c8;
  uint auStack_c4 [3];
  undefined8 uStack_b8;
  System_Collections_Generic_Dictionary_byte__object__array *pSStack_b0;
  System_Action_Dictionary_byte__object___o *pSStack_a8;
  ulong uStack_a0;
  System_Collections_Generic_Dictionary_byte__object__array *pSStack_98;
  System_Action_string__o *pSStack_90;
  uint auStack_84 [3];
  System_Collections_Generic_Dictionary_byte__object__array *pSStack_78;
  System_Collections_Generic_Dictionary_byte__object__array *pSStack_70;
  undefined8 *puStack_68;
  System_Collections_Generic_Dictionary_byte__object__array *pSStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  System_Collections_Generic_Dictionary_byte__object__array *pSStack_48;
  
  if (g_data_057aeb8e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb8e = '\x01';
  }
  if (data == (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
label_044db6a7:
    pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
label_044db6ac:
    il2cpp_runtime_helper_022b2fd0();
    if (g_data_057aeb8f == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      il2cpp_runtime_helper_023445d0(&"Request timed out");
      g_data_057aeb8f = '\x01';
    }
    pIVar15 = pIVar12[1].klass;
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    Anticheat_ModeratorManager__InvokeStatus
              ("Request timed out",(System_Action_string__o *)pIVar15,(MethodInfo *)0x0);
    return;
  }
  bVar3 = System_Collections_Generic_Dictionary_byte__object___ContainsKey(data,'\x01',MethodInfo_Boolean_ContainsKey);
  cVar24 = '\0';
  if ((char)bVar3 != '\0') {
    pIVar12 = System_Collections_Generic_Dictionary_byte__object___get_Item(data,'\x01',MethodInfo_Object_get_Item);
    if (pIVar12 == (Il2CppObject *)0x0) goto label_044db6a7;
    in_RCX = (pIVar12->klass->_1).element_class;
    if (in_RCX != *(Il2CppClass **)(g_data_057b9b98 + 0x40)) goto label_044db6ac;
    pcVar13 = (char *)il2cpp_runtime_helper_02305440(pIVar12);
    cVar24 = *pcVar13;
  }
  bVar3 = System_Collections_Generic_Dictionary_byte__object___ContainsKey(data,'\x02',MethodInfo_Boolean_ContainsKey);
  if ((char)bVar3 == '\0') {
label_044db62f:
    pSVar14 = *(System_String_o **)g_data_057b9c00->static_fields;
  }
  else {
    pSVar14 = (System_String_o *)
              System_Collections_Generic_Dictionary_byte__object___get_Item(data,'\x02',MethodInfo_Object_get_Item);
    if ((pSVar14 != (System_String_o *)0x0) && ((Il2CppClass *)pSVar14->klass != g_data_057b9c00)) {
      il2cpp_runtime_helper_022b2fd0(pSVar14);
      goto label_044db62f;
    }
  }
  pSVar7 = (__this->fields).localStatus;
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Anticheat_ModeratorManager__InvokeStatus(pSVar14,pSVar7,(MethodInfo *)0x0);
  if (cVar24 == '\0') {
    return;
  }
  pSVar10 = (System_Int32_array *)(__this->fields).localStatus;
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057aeb5f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_Dictionary_byte_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Byte_System_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_byte_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RequestPlayerList_b__0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RequestPlayerList_b__1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass85_0);
    il2cpp_runtime_helper_023445d0(&"Sending request...");
    g_data_057aeb5f = '\x01';
  }
  onResponse = (System_Collections_Generic_Dictionary_byte__object__array *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass85_0);
  pSVar7 = (System_Action_string__o *)0x0;
  data_00 = onResponse;
  Anticheat_ModeratorManager___c__DisplayClass85_0___ctor
            ((Anticheat_ModeratorManager___c__DisplayClass85_0_o *)onResponse,(MethodInfo *)0x0);
  if (onResponse != (System_Collections_Generic_Dictionary_byte__object__array *)0x0) {
    ((System_Collections_Generic_Dictionary_byte__object__Fields *)&onResponse->bounds)->_buckets = pSVar10;
    il2cpp_runtime_helper_022b4080((System_Collections_Generic_Dictionary_byte__object__Fields *)&onResponse->bounds,
                       pSVar10);
    pSVar10 = ((System_Collections_Generic_Dictionary_byte__object__Fields *)&onResponse->bounds)->_buckets;
    unaff_R12 = (System_Collections_Generic_Dictionary_byte__object__array *)&TypeInfo_ModeratorManager;
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057aeb5b == '\0') goto label_044d73a0;
label_044d727e:
      uVar25 = "Sending request...";
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto label_044d728f;
label_044d73c4:
      il2cpp_runtime_helper_02337ed0();
      lVar1 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
    }
    else {
      if (g_data_057aeb5b != '\0') goto label_044d727e;
label_044d73a0:
      uVar25 = "Sending request...";
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      g_data_057aeb5b = '\x01';
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto label_044d73c4;
label_044d728f:
      lVar1 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
    }
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),uVar25,*(undefined8 *)(lVar1 + 0x28));
    }
    if (pSVar10 != (System_Int32_array *)0x0) {
      (*(code *)pSVar10->max_length)
                (*(intptr_t *)((long)pSVar10->m_Items + 0x20),uVar25,*(intptr_t *)((long)pSVar10->m_Items + 8)
                );
    }
    pSVar4 = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_Dictionary_byte_object);
    System_Action_object____ctor();
    pSVar5 = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
    in_RCX = (Il2CppClass *)0x0;
    System_Action___ctor();
    pSVar14 = Anticheat_ModeratorManager__TrackRequest(5.0,pSVar4,pSVar5,method_01);
    pSVar6 = (System_Collections_Generic_Dictionary_byte__object__array *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_byte_object);
    pSVar7 = MethodInfo_Dictionary_2_System_Byte_System_Object;
    data_00 = pSVar6;
    System_Collections_Generic_Dictionary_byte__object____ctor
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar6,
               (MethodInfo_304B1A0 *)MethodInfo_Dictionary_2_System_Byte_System_Object);
    unaff_RBX = 0;
    if (pSVar6 != (System_Collections_Generic_Dictionary_byte__object__array *)0x0) {
      System_Collections_Generic_Dictionary_byte__object___Add
                ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar6,'\0',(Il2CppObject *)pSVar14,
                 MethodInfo_Void_Add);
      Anticheat_ModeratorManager__RaiseModEvent
                (0xb6,(System_Collections_Generic_Dictionary_byte__object__o *)pSVar6,method_02);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  uStack_50 = unaff_RBX;
  pSStack_48 = unaff_R12;
  if (g_data_057aeb60 == '\0') {
    uStack_58 = 0x44d7456;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    uStack_58 = 0x44d7462;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    uStack_58 = 0x44d746e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb60 = '\x01';
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto label_044d7488;
label_044d7418:
    if (g_data_057ae4db != '\0') goto label_044d7421;
label_044d7496:
    uStack_58 = 0x44d74a2;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057ae4db = '\x01';
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto label_044d74b9;
label_044d7431:
    __this_02 = *(System_Collections_Generic_Dictionary_int__object__o **)
                 (*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x10);
    if (__this_02 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      pSVar6 = (System_Collections_Generic_Dictionary_byte__object__array *)0x0;
    }
    else {
label_044d74d5:
      uStack_58 = 0x44d74e4;
      System_Collections_Generic_Dictionary_int__object___Clear(__this_02,MethodInfo_Void_Clear);
      pSVar7 = (System_Action_string__o *)0x1;
      uStack_58 = 0x44d74f1;
      pSVar6 = data_00;
      onResponse = Anticheat_ModeratorManager__GetResponseEntries
                             ((System_Collections_Generic_Dictionary_byte__object__o *)data_00,'\x01',
                              method_03);
      if ((onResponse == (System_Collections_Generic_Dictionary_byte__object__array *)0x0) ||
         ((int)onResponse->max_length < 1)) {
label_044d75fa:
        if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
          uStack_58 = 0x44d7632;
          il2cpp_runtime_helper_02337ed0();
          lVar1 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x28);
        }
        else {
          lVar1 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x28);
        }
        if (lVar1 == 0) {
          return;
        }
        (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
        return;
      }
      data_00 = (System_Collections_Generic_Dictionary_byte__object__array *)0x0;
      unaff_R13 = (System_Action_Dictionary_byte__object___o *)&MethodInfo_Void_set_Item;
      if ((onResponse->max_length & 0xffffffff) != 0) {
        do {
          unaff_R12 = (System_Collections_Generic_Dictionary_byte__object__array *)
                      onResponse->m_Items[(long)data_00];
          value = unaff_R12;
          if (unaff_R12 != (System_Collections_Generic_Dictionary_byte__object__array *)0x0) {
            if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
              uStack_58 = 0x44d757f;
              il2cpp_runtime_helper_02337ed0();
            }
            uStack_58 = 0x44d7587;
            pSVar6 = unaff_R12;
            value = (System_Collections_Generic_Dictionary_byte__object__array *)
                    Anticheat_ModeratorManager__ParsePlayerEntry
                              ((System_Collections_Generic_Dictionary_byte__object__o *)unaff_R12,
                               (MethodInfo *)pSVar7);
            if (value == (System_Collections_Generic_Dictionary_byte__object__array *)0x0) goto label_044d7654;
            if (0 < *(int *)(value->m_Items + 1)) {
              if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
                uStack_58 = 0x44d75c5;
                il2cpp_runtime_helper_02337ed0();
                if (g_data_057ae4db == '\0') goto label_044d75ce;
label_044d75ae:
                iVar26 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
              }
              else {
                if (g_data_057ae4db != '\0') goto label_044d75ae;
label_044d75ce:
                uStack_58 = 0x44d75d6;
                il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
                g_data_057ae4db = '\x01';
                iVar26 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
              }
              if (iVar26 == 0) {
                uStack_58 = 0x44d75f2;
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar6 = *(System_Collections_Generic_Dictionary_byte__object__array **)
                        (*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x10);
              unaff_R12 = value;
              if (pSVar6 == (System_Collections_Generic_Dictionary_byte__object__array *)0x0)
              goto label_044d7654;
              pSVar7 = (System_Action_string__o *)(ulong)*(uint *)(value->m_Items + 1);
              uStack_58 = 0x44d7545;
              System_Collections_Generic_Dictionary_int__object___set_Item
                        ((System_Collections_Generic_Dictionary_int__object__o *)pSVar6,
                         *(uint *)(value->m_Items + 1),(Il2CppObject *)value,MethodInfo_Void_set_Item);
            }
          }
          data_00 = (System_Collections_Generic_Dictionary_byte__object__array *)
                    ((long)&(data_00->obj).klass + 1);
          uVar20 = (uint)onResponse->max_length;
          in_RCX = (Il2CppClass *)(long)(int)uVar20;
          if ((long)in_RCX <= (long)data_00) goto label_044d75fa;
          unaff_R12 = value;
        } while (data_00 < (System_Collections_Generic_Dictionary_byte__object__array *)(ulong)uVar20);
      }
      uStack_58 = 0x44d7654;
      il2cpp_runtime_helper_022b2ca0();
    }
  }
  else {
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto label_044d7418;
label_044d7488:
    uStack_58 = 0x44d748d;
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae4db == '\0') goto label_044d7496;
label_044d7421:
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto label_044d7431;
label_044d74b9:
    uStack_58 = 0x44d74be;
    il2cpp_runtime_helper_02337ed0();
    __this_02 = *(System_Collections_Generic_Dictionary_int__object__o **)
                 (*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x10);
    pSVar6 = (System_Collections_Generic_Dictionary_byte__object__array *)0x0;
    if (__this_02 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_044d74d5;
  }
label_044d7654:
  uVar20 = (uint)pSVar6;
  uStack_58 = 0x44d7659;
  il2cpp_runtime_helper_022b2c90();
  puStack_68 = &TypeInfo_ModeratorManager;
  pSStack_78 = data_00;
  pSStack_70 = unaff_R12;
  pSStack_60 = onResponse;
  if (g_data_057aeb63 == '\0') {
    pSStack_90 = (System_Action_string__o *)0x44d7687;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_Dictionary_byte_object);
    pSStack_90 = (System_Action_string__o *)0x44d7693;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    pSStack_90 = (System_Action_string__o *)0x44d769f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pSStack_90 = (System_Action_string__o *)0x44d76ab;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Byte_System_Object);
    pSStack_90 = (System_Action_string__o *)0x44d76b7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_byte_object);
    pSStack_90 = (System_Action_string__o *)0x44d76c3;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    pSStack_90 = (System_Action_string__o *)0x44d76cf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_KickPlayer_b__0);
    pSStack_90 = (System_Action_string__o *)0x44d76db;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_KickPlayer_b__1);
    pSStack_90 = (System_Action_string__o *)0x44d76e7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass89_0);
    pSStack_90 = (System_Action_string__o *)0x44d76f3;
    il2cpp_runtime_helper_023445d0(&"Sending request...");
    g_data_057aeb63 = '\x01';
  }
  pSStack_90 = (System_Action_string__o *)0x44d7709;
  __this_00 = (Anticheat_ModeratorManager___c__DisplayClass89_0_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass89_0);
  pSVar18 = (System_Action_string__o *)0x0;
  pSStack_90 = (System_Action_string__o *)0x44d7716;
  pAVar22 = __this_00;
  Anticheat_ModeratorManager___c__DisplayClass89_0___ctor(__this_00,(MethodInfo *)0x0);
  uVar21 = (uint)pAVar22;
  if (__this_00 != (Anticheat_ModeratorManager___c__DisplayClass89_0_o *)0x0) {
    (__this_00->fields).localStatus = pSVar7;
    pSStack_90 = (System_Action_string__o *)0x44d7732;
    il2cpp_runtime_helper_022b4080(&__this_00->fields,pSVar7);
    pSVar7 = (__this_00->fields).localStatus;
    unaff_R12 = (System_Collections_Generic_Dictionary_byte__object__array *)&TypeInfo_ModeratorManager;
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      pSStack_90 = (System_Action_string__o *)0x44d78f1;
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057aeb5b == '\0') goto label_044d7908;
label_044d7765:
      uVar25 = "Sending request...";
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto label_044d7776;
label_044d792c:
      pSStack_90 = (System_Action_string__o *)0x44d7931;
      il2cpp_runtime_helper_02337ed0();
      lVar1 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
    }
    else {
      if (g_data_057aeb5b != '\0') goto label_044d7765;
label_044d7908:
      uVar25 = "Sending request...";
      pSStack_90 = (System_Action_string__o *)0x44d7914;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      g_data_057aeb5b = '\x01';
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto label_044d792c;
label_044d7776:
      lVar1 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
    }
    if (lVar1 != 0) {
      pSStack_90 = (System_Action_string__o *)0x44d7794;
      (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),uVar25,*(undefined8 *)(lVar1 + 0x28));
    }
    if (pSVar7 != (System_Action_string__o *)0x0) {
      pSStack_90 = (System_Action_string__o *)0x44d77a7;
      (*(code *)(pSVar7->fields).invoke_impl)((pSVar7->fields).method_code,uVar25,(pSVar7->fields).method);
    }
    pSStack_90 = (System_Action_string__o *)0x44d77b6;
    onResponse = (System_Collections_Generic_Dictionary_byte__object__array *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_Dictionary_byte_object)
    ;
    pSStack_90 = (System_Action_string__o *)0x44d77d0;
    System_Action_object____ctor();
    pSStack_90 = (System_Action_string__o *)0x44d77df;
    pSVar5 = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
    in_RCX = (Il2CppClass *)0x0;
    pSStack_90 = (System_Action_string__o *)0x44d77f9;
    System_Action___ctor();
    pSStack_90 = (System_Action_string__o *)0x44d780c;
    pSVar7 = (System_Action_string__o *)
             Anticheat_ModeratorManager__TrackRequest
                       (5.0,(System_Action_Dictionary_byte__object___o *)onResponse,pSVar5,method_04);
    pSStack_90 = (System_Action_string__o *)0x44d781e;
    pSVar8 = (System_Collections_Generic_Dictionary_byte__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_byte_object);
    pSStack_90 = (System_Action_string__o *)0x44d7833;
    pSVar18 = MethodInfo_Dictionary_2_System_Byte_System_Object;
    pSVar23 = pSVar8;
    System_Collections_Generic_Dictionary_byte__object____ctor(pSVar8,(MethodInfo_304B1A0 *)MethodInfo_Dictionary_2_System_Byte_System_Object);
    uVar21 = (uint)pSVar23;
    if (pSVar8 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
      pSStack_90 = (System_Action_string__o *)0x44d7853;
      System_Collections_Generic_Dictionary_byte__object___Add
                (pSVar8,'\0',(Il2CppObject *)pSVar7,MethodInfo_Void_Add);
      auStack_84[2] = 1;
      pSStack_90 = (System_Action_string__o *)0x44d7870;
      pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_84 + 2);
      pSStack_90 = (System_Action_string__o *)0x44d7883;
      System_Collections_Generic_Dictionary_byte__object___Add(pSVar8,'\x01',pIVar12,MethodInfo_Void_Add);
      auStack_84[1] = 0;
      pSStack_90 = (System_Action_string__o *)0x44d7899;
      pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_84 + 1);
      pSStack_90 = (System_Action_string__o *)0x44d78ac;
      System_Collections_Generic_Dictionary_byte__object___Add(pSVar8,'\x02',pIVar12,MethodInfo_Void_Add);
      pSStack_90 = (System_Action_string__o *)0x44d78bf;
      auStack_84[0] = uVar20;
      pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_84);
      pSStack_90 = (System_Action_string__o *)0x44d78d2;
      System_Collections_Generic_Dictionary_byte__object___Add(pSVar8,'\x03',pIVar12,MethodInfo_Void_Add);
      pSStack_90 = (System_Action_string__o *)0x44d78df;
      Anticheat_ModeratorManager__RaiseModEvent(0xb4,pSVar8,method_05);
      return;
    }
  }
  pSStack_90 = (System_Action_string__o *)0x44d7953;
  il2cpp_runtime_helper_022b2c90();
  pIVar27 = (Il2CppClass *)(ulong)uVar21;
  pIVar15 = in_RCX;
  uStack_b8 = 0;
  pSStack_b0 = unaff_R12;
  pSStack_a8 = unaff_R13;
  uStack_a0 = (ulong)uVar20;
  pSStack_98 = onResponse;
  pSStack_90 = pSVar7;
  if (g_data_057aeb64 == '\0') {
    uStack_d8 = 0x44d798f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_Dictionary_byte_object);
    uStack_d8 = 0x44d799b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    uStack_d8 = 0x44d79a7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    uStack_d8 = 0x44d79b3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Byte_System_Object);
    uStack_d8 = 0x44d79bf;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_byte_object);
    uStack_d8 = 0x44d79cb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    uStack_d8 = 0x44d79d7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RoomBan_b__0);
    uStack_d8 = 0x44d79e3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RoomBan_b__1);
    uStack_d8 = 0x44d79ef;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass90_0);
    uStack_d8 = 0x44d79fb;
    il2cpp_runtime_helper_023445d0(&"Sending request...");
    g_data_057aeb64 = '\x01';
  }
  uStack_d8 = 0x44d7a11;
  pSVar9 = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass90_0);
  pSVar19 = (System_Action_string__o *)0x0;
  uStack_d8 = 0x44d7a1e;
  pSVar7 = pSVar9;
  Anticheat_ModeratorManager___c__DisplayClass90_0___ctor
            ((Anticheat_ModeratorManager___c__DisplayClass90_0_o *)pSVar9,(MethodInfo *)0x0);
  pSVar14 = extraout_RDX;
  if (pSVar9 != (System_Action_string__o *)0x0) {
    (pSVar9->fields).method_ptr = (intptr_t)extraout_RDX;
    uStack_d8 = 0x44d7a3f;
    uStack_c8 = uVar21;
    il2cpp_runtime_helper_022b4080(&pSVar9->fields,extraout_RDX);
    lVar1 = (pSVar9->fields).method_ptr;
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      uStack_d8 = 0x44d7c4a;
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057aeb5b == '\0') goto label_044d7c68;
label_044d7a71:
      uVar25 = "Sending request...";
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto label_044d7a81;
label_044d7c92:
      uStack_d8 = 0x44d7c9d;
      il2cpp_runtime_helper_02337ed0();
      lVar2 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
      pIVar27 = in_RCX;
    }
    else {
      if (g_data_057aeb5b != '\0') goto label_044d7a71;
label_044d7c68:
      uVar25 = "Sending request...";
      uStack_d8 = 0x44d7c74;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      g_data_057aeb5b = '\x01';
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto label_044d7c92;
label_044d7a81:
      lVar2 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
    }
    if (lVar2 != 0) {
      uStack_d8 = 0x44d7a9f;
      (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),uVar25,*(undefined8 *)(lVar2 + 0x28));
    }
    if (lVar1 != 0) {
      uStack_d8 = 0x44d7ab2;
      (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),uVar25,*(undefined8 *)(lVar1 + 0x28));
    }
    uStack_d8 = 0x44d7ac1;
    unaff_R13 = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_Dictionary_byte_object);
    uStack_d8 = 0x44d7adb;
    System_Action_object____ctor();
    uStack_d8 = 0x44d7aea;
    pSVar5 = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
    pIVar15 = (Il2CppClass *)0x0;
    uStack_d8 = 0x44d7b04;
    System_Action___ctor();
    uStack_d8 = 0x44d7b17;
    pSVar14 = Anticheat_ModeratorManager__TrackRequest(5.0,unaff_R13,pSVar5,method_06);
    uStack_d8 = 0x44d7b29;
    pSVar9 = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_byte_object);
    uStack_d8 = 0x44d7b3e;
    pSVar19 = MethodInfo_Dictionary_2_System_Byte_System_Object;
    pSVar7 = pSVar9;
    System_Collections_Generic_Dictionary_byte__object____ctor
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar9,
               (MethodInfo_304B1A0 *)MethodInfo_Dictionary_2_System_Byte_System_Object);
    if (pSVar9 != (System_Action_string__o *)0x0) {
      uStack_d8 = 0x44d7b5f;
      System_Collections_Generic_Dictionary_byte__object___Add
                ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar9,'\0',(Il2CppObject *)pSVar14,
                 MethodInfo_Void_Add);
      auStack_c4[2] = (uint)pSVar18 & 0xff | 2;
      uStack_d8 = 0x44d7b7f;
      pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_c4 + 2);
      uStack_d8 = 0x44d7b93;
      System_Collections_Generic_Dictionary_byte__object___Add
                ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar9,'\x01',pIVar12,MethodInfo_Void_Add);
      auStack_c4[1] = 0;
      uStack_d8 = 0x44d7ba9;
      pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_c4 + 1);
      uStack_d8 = 0x44d7bbd;
      System_Collections_Generic_Dictionary_byte__object___Add
                ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar9,'\x02',pIVar12,MethodInfo_Void_Add);
      auStack_c4[0] = uStack_c8;
      uStack_d8 = 0x44d7bd3;
      pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_c4);
      uStack_d8 = 0x44d7be7;
      System_Collections_Generic_Dictionary_byte__object___Add
                ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar9,'\x03',pIVar12,MethodInfo_Void_Add);
      if (in_RCX == (Il2CppClass *)0x0) {
        in_RCX = *(Il2CppClass **)g_data_057b9c00->static_fields;
      }
      uStack_d8 = 0x44d7c11;
      System_Collections_Generic_Dictionary_byte__object___Add
                ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar9,'\x04',(Il2CppObject *)in_RCX
                 ,MethodInfo_Void_Add);
      pMVar16 = extraout_RDX_00;
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        uStack_d8 = 0x44d7c29;
        il2cpp_runtime_helper_02337ed0();
        pMVar16 = extraout_RDX_01;
      }
      uStack_d8 = 0x44d7c36;
      Anticheat_ModeratorManager__RaiseModEvent
                (0xb4,(System_Collections_Generic_Dictionary_byte__object__o *)pSVar9,pMVar16);
      return;
    }
  }
  uStack_d8 = 0x44d7cc2;
  il2cpp_runtime_helper_022b2c90();
  uVar28 = (ulong)pSVar19 & 0xffffffff;
  method_00 = pIVar15;
  pSStack_100 = pSVar14;
  pIStack_f8 = in_RCX;
  pSStack_f0 = unaff_R13;
  pIStack_e8 = pIVar27;
  uStack_e0 = (ulong)pSVar18 & 0xffffffff;
  uStack_d8 = 0;
  if (g_data_057aeb65 == '\0') {
    pSStack_120 = (System_Int32_array *)0x44d7d03;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_Dictionary_byte_object);
    pSStack_120 = (System_Int32_array *)0x44d7d0f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    pSStack_120 = (System_Int32_array *)0x44d7d1b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pSStack_120 = (System_Int32_array *)0x44d7d27;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Byte_System_Object);
    pSStack_120 = (System_Int32_array *)0x44d7d33;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_byte_object);
    pSStack_120 = (System_Int32_array *)0x44d7d3f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    pSStack_120 = (System_Int32_array *)0x44d7d4b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RoomBanPlayerEntry_b__0);
    pSStack_120 = (System_Int32_array *)0x44d7d57;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RoomBanPlayerEntry_b__1);
    pSStack_120 = (System_Int32_array *)0x44d7d63;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass91_0);
    pSStack_120 = (System_Int32_array *)0x44d7d6f;
    il2cpp_runtime_helper_023445d0(&"Player has no session ID to ban.");
    pSStack_120 = (System_Int32_array *)0x44d7d7b;
    il2cpp_runtime_helper_023445d0(&"Invalid player entry.");
    pSStack_120 = (System_Int32_array *)0x44d7d87;
    il2cpp_runtime_helper_023445d0(&"Sending request...");
    pSStack_120 = (System_Int32_array *)0x44d7d93;
    il2cpp_runtime_helper_023445d0(&"Player has no IP address to ban.");
    g_data_057aeb65 = '\x01';
  }
  pSStack_120 = (System_Int32_array *)0x44d7da9;
  pSVar8 = (System_Collections_Generic_Dictionary_byte__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass91_0);
  pSVar18 = (System_Action_string__o *)0x0;
  pSStack_120 = (System_Int32_array *)0x44d7db6;
  pSVar23 = pSVar8;
  Anticheat_ModeratorManager___c__DisplayClass91_0___ctor
            ((Anticheat_ModeratorManager___c__DisplayClass91_0_o *)pSVar8,(MethodInfo *)0x0);
  pSVar10 = extraout_RDX_02;
  if (pSVar8 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
    pSVar17 = &pSVar8->fields;
    (pSVar8->fields)._buckets = extraout_RDX_02;
    pSStack_120 = (System_Int32_array *)0x44d7dd5;
    il2cpp_runtime_helper_022b4080(pSVar17);
    if (pSVar7 == (System_Action_string__o *)0x0) {
      pSVar10 = pSVar17->_buckets;
      uVar25 = "Invalid player entry.";
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        pSStack_120 = (System_Int32_array *)0x44d7e42;
        il2cpp_runtime_helper_02337ed0();
        uVar25 = "Invalid player entry.";
      }
joined_r0x044d81fe:
      if (g_data_057aeb5b == '\0') {
        pSStack_120 = (System_Int32_array *)0x44d7e61;
        il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
        g_data_057aeb5b = '\x01';
      }
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        pSStack_120 = (System_Int32_array *)0x44d7f0d;
        il2cpp_runtime_helper_02337ed0();
        lVar1 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
      }
      else {
        lVar1 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
      }
      if (lVar1 != 0) {
        pSStack_120 = (System_Int32_array *)0x44d7e96;
        (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),uVar25,*(undefined8 *)(lVar1 + 0x28));
      }
      if (pSVar10 == (System_Int32_array *)0x0) {
        return;
      }
      (*(code *)pSVar10->max_length)
                (*(intptr_t *)((long)pSVar10->m_Items + 0x20),uVar25,*(intptr_t *)((long)pSVar10->m_Items + 8)
                );
      return;
    }
    if ((char)uVar28 == '\0') {
      pSStack_120 = (System_Int32_array *)0x44d7eca;
      bVar3 = System_String__IsNullOrEmpty((System_String_o *)(pSVar7->fields).method_ptr,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        pSVar10 = pSVar17->_buckets;
        uVar25 = "Player has no session ID to ban.";
        if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
          pSStack_120 = (System_Int32_array *)0x44d81ed;
          il2cpp_runtime_helper_02337ed0();
          uVar25 = "Player has no session ID to ban.";
        }
        goto joined_r0x044d81fe;
      }
      iStack_10c = 1;
      pSVar7 = (System_Action_string__o *)(pSVar7->fields).method_ptr;
      pSVar10 = pSVar17->_buckets;
      iVar26 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
    }
    else {
      pSStack_120 = (System_Int32_array *)0x44d7def;
      bVar3 = System_String__IsNullOrEmpty((System_String_o *)(pSVar7->fields).invoke_impl,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        pSVar10 = pSVar17->_buckets;
        uVar25 = "Player has no IP address to ban.";
        if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
          pSStack_120 = (System_Int32_array *)0x44d7e12;
          il2cpp_runtime_helper_02337ed0();
          uVar25 = "Player has no IP address to ban.";
        }
        goto joined_r0x044d81fe;
      }
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        pSStack_120 = (System_Int32_array *)0x44d820e;
        il2cpp_runtime_helper_02337ed0();
        if (g_data_057ae4d9 == '\0') goto label_044d821b;
label_044d7f4e:
        iVar26 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
      }
      else {
        if (g_data_057ae4d9 != '\0') goto label_044d7f4e;
label_044d821b:
        pSStack_120 = (System_Int32_array *)0x44d8227;
        il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
        g_data_057ae4d9 = '\x01';
        iVar26 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
      }
      if (iVar26 == 0) {
        pSStack_120 = (System_Int32_array *)0x44d8244;
        il2cpp_runtime_helper_02337ed0();
      }
      iStack_10c = (uint)(*(char *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 8) == '\0') * 2 + 2;
      pSVar7 = (System_Action_string__o *)(pSVar7->fields).invoke_impl;
      pSVar10 = pSVar17->_buckets;
      iVar26 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
    }
    if (iVar26 == 0) {
      pSStack_120 = (System_Int32_array *)0x44d7fba;
      il2cpp_runtime_helper_02337ed0();
    }
    uVar25 = "Sending request...";
    if (g_data_057aeb5b == '\0') {
      pSStack_120 = (System_Int32_array *)0x44d81a2;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      g_data_057aeb5b = '\x01';
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto label_044d81c0;
label_044d7fe8:
      lVar1 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
    }
    else {
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto label_044d7fe8;
label_044d81c0:
      pSStack_120 = (System_Int32_array *)0x44d81c5;
      il2cpp_runtime_helper_02337ed0();
      lVar1 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
    }
    if (lVar1 != 0) {
      pSStack_120 = (System_Int32_array *)0x44d8006;
      (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),uVar25,*(undefined8 *)(lVar1 + 0x28));
    }
    if (pSVar10 != (System_Int32_array *)0x0) {
      pSStack_120 = (System_Int32_array *)0x44d8019;
      (*(code *)pSVar10->max_length)
                (*(intptr_t *)((long)pSVar10->m_Items + 0x20),uVar25,*(intptr_t *)((long)pSVar10->m_Items + 8)
                );
    }
    pSStack_120 = (System_Int32_array *)0x44d8028;
    pSVar4 = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_Dictionary_byte_object);
    pSStack_120 = (System_Int32_array *)0x44d8042;
    System_Action_object____ctor();
    pSStack_120 = (System_Int32_array *)0x44d8051;
    pSVar5 = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
    method_00 = (Il2CppClass *)0x0;
    pSStack_120 = (System_Int32_array *)0x44d806b;
    System_Action___ctor();
    pSStack_120 = (System_Int32_array *)0x44d807e;
    pSVar10 = (System_Int32_array *)Anticheat_ModeratorManager__TrackRequest(5.0,pSVar4,pSVar5,method_07);
    pSStack_120 = (System_Int32_array *)0x44d8090;
    __this_01 = (System_Collections_Generic_Dictionary_byte__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_byte_object);
    pSStack_120 = (System_Int32_array *)0x44d80a5;
    pSVar18 = MethodInfo_Dictionary_2_System_Byte_System_Object;
    pSVar23 = __this_01;
    System_Collections_Generic_Dictionary_byte__object____ctor(__this_01,(MethodInfo_304B1A0 *)MethodInfo_Dictionary_2_System_Byte_System_Object);
    pSVar14 = (System_String_o *)0x0;
    if (__this_01 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
      pSStack_120 = (System_Int32_array *)0x44d80c6;
      System_Collections_Generic_Dictionary_byte__object___Add
                (__this_01,'\0',(Il2CppObject *)pSVar10,MethodInfo_Void_Add);
      uStack_104 = (uint)pSVar19 & 0xff | 2;
      pSStack_120 = (System_Int32_array *)0x44d80e6;
      pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_104);
      pSStack_120 = (System_Int32_array *)0x44d80fa;
      System_Collections_Generic_Dictionary_byte__object___Add(__this_01,'\x01',pIVar12,MethodInfo_Void_Add);
      iStack_108 = iStack_10c;
      pSStack_120 = (System_Int32_array *)0x44d8110;
      pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_108);
      pSStack_120 = (System_Int32_array *)0x44d8124;
      System_Collections_Generic_Dictionary_byte__object___Add(__this_01,'\x02',pIVar12,MethodInfo_Void_Add);
      pSStack_120 = (System_Int32_array *)0x44d8138;
      System_Collections_Generic_Dictionary_byte__object___Add
                (__this_01,'\x03',(Il2CppObject *)pSVar7,MethodInfo_Void_Add);
      if (pIVar15 == (Il2CppClass *)0x0) {
        pIVar15 = *(Il2CppClass **)g_data_057b9c00->static_fields;
      }
      pSStack_120 = (System_Int32_array *)0x44d8162;
      System_Collections_Generic_Dictionary_byte__object___Add
                (__this_01,'\x04',(Il2CppObject *)pIVar15,MethodInfo_Void_Add);
      pMVar16 = extraout_RDX_03;
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        pSStack_120 = (System_Int32_array *)0x44d817a;
        il2cpp_runtime_helper_02337ed0();
        pMVar16 = extraout_RDX_04;
      }
      pSStack_120 = (System_Int32_array *)0x44d8187;
      Anticheat_ModeratorManager__RaiseModEvent(0xb4,__this_01,pMVar16);
      return;
    }
  }
  pSStack_120 = (System_Int32_array *)0x44d8252;
  il2cpp_runtime_helper_022b2c90();
  pSStack_148 = pSVar14;
  pSStack_140 = pSVar7;
  pSStack_138 = pSVar8;
  pIStack_130 = pIVar15;
  uStack_128 = uVar28;
  pSStack_120 = pSVar10;
  if (g_data_057aeb66 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_Dictionary_byte_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Byte_System_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_byte_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RoomUnban_b__0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RoomUnban_b__1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass92_0);
    il2cpp_runtime_helper_023445d0(&"Sending request...");
    g_data_057aeb66 = '\x01';
  }
  pSVar11 = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass92_0);
  pSVar4 = pSVar11;
  Anticheat_ModeratorManager___c__DisplayClass92_0___ctor
            ((Anticheat_ModeratorManager___c__DisplayClass92_0_o *)pSVar11,(MethodInfo *)0x0);
  if (pSVar11 == (System_Action_Dictionary_byte__object___o *)0x0) goto label_044d867f;
  (pSVar11->fields).method_ptr = (intptr_t)pSVar18;
  il2cpp_runtime_helper_022b4080(&pSVar11->fields,pSVar18);
  pSVar7 = (System_Action_string__o *)(pSVar11->fields).method_ptr;
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057aeb5b == '\0') goto label_044d84a5;
label_044d836a:
    uVar25 = "Sending request...";
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto label_044d837b;
label_044d84c9:
    il2cpp_runtime_helper_02337ed0();
    lVar1 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
  }
  else {
    if (g_data_057aeb5b != '\0') goto label_044d836a;
label_044d84a5:
    uVar25 = "Sending request...";
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb5b = '\x01';
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto label_044d84c9;
label_044d837b:
    lVar1 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
  }
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),uVar25,*(undefined8 *)(lVar1 + 0x28));
  }
  if (pSVar7 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar7->fields).invoke_impl)((pSVar7->fields).method_code,uVar25,(pSVar7->fields).method);
  }
  pSVar4 = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_Dictionary_byte_object);
  System_Action_object____ctor();
  pSVar5 = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
  method_00 = (Il2CppClass *)0x0;
  System_Action___ctor();
  pSVar14 = Anticheat_ModeratorManager__TrackRequest(5.0,pSVar4,pSVar5,method_08);
  if (pSVar23 == (System_Collections_Generic_Dictionary_byte__object__o *)0x0) goto label_044d867f;
  iVar26 = (pSVar23->fields)._freeCount;
  pIStack_150 = extraout_RDX_05;
  if ((char)(pSVar23->fields)._version == '\0') {
    if (0 < iVar26) goto label_044d84f3;
    value_00 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)(pSVar23->fields)._buckets;
    iVar26 = 1;
  }
  else if (iVar26 < 1) {
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057ae4d9 == '\0') goto label_044d864d;
label_044d8457:
      iVar26 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
    }
    else {
      if (g_data_057ae4d9 != '\0') goto label_044d8457;
label_044d864d:
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      g_data_057ae4d9 = '\x01';
      iVar26 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
    }
    if (iVar26 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar29 = *(char *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 8) == '\0';
    method_00 = (Il2CppClass *)(ulong)bVar29;
    iVar26 = (uint)bVar29 * 2 + 2;
    value_00 = (pSVar23->fields)._entries;
  }
  else {
label_044d84f3:
    iStack_154 = iVar26;
    value_00 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
               il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_154);
    iVar26 = 0;
  }
  pSVar11 = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_byte_object);
  pSVar4 = pSVar11;
  System_Collections_Generic_Dictionary_byte__object____ctor
            ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar11,
             (MethodInfo_304B1A0 *)MethodInfo_Dictionary_2_System_Byte_System_Object);
  if (pSVar11 != (System_Action_Dictionary_byte__object___o *)0x0) {
    System_Collections_Generic_Dictionary_byte__object___Add
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar11,'\0',(Il2CppObject *)pSVar14,
               MethodInfo_Void_Add);
    iStack_158 = 5 - (uint)((char)(pSVar23->fields)._version == '\0');
    pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_158);
    System_Collections_Generic_Dictionary_byte__object___Add
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar11,'\x01',pIVar12,MethodInfo_Void_Add);
    iStack_15c = iVar26;
    pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_15c);
    System_Collections_Generic_Dictionary_byte__object___Add
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar11,'\x02',pIVar12,MethodInfo_Void_Add);
    System_Collections_Generic_Dictionary_byte__object___Add
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar11,'\x03',&value_00->obj,
               MethodInfo_Void_Add);
    pIVar12 = pIStack_150;
    if (pIStack_150 == (Il2CppObject *)0x0) {
      pIVar12 = *(Il2CppObject **)g_data_057b9c00->static_fields;
    }
    System_Collections_Generic_Dictionary_byte__object___Add
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar11,'\x04',pIVar12,MethodInfo_Void_Add);
    pMVar16 = extraout_RDX_06;
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pMVar16 = extraout_RDX_07;
    }
    Anticheat_ModeratorManager__RaiseModEvent
              (0xb4,(System_Collections_Generic_Dictionary_byte__object__o *)pSVar11,pMVar16);
    return;
  }
label_044d867f:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeb67 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb67 = '\x01';
  }
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Anticheat_ModeratorManager__RequestRoomBanList_43d86e0
            (0,0x32,(System_Action_string__o *)pSVar4,(MethodInfo *)method_00);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass90_0$$<RoomBan>b__1
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass90_0___RoomBan_b__1 (Anticheat_ModeratorManager___c__DisplayClass90_0_o* __this, const MethodInfo* method);
// 0x44db6c0

void Anticheat_ModeratorManager___c__DisplayClass90_0___RoomBan_b__1
               (Anticheat_ModeratorManager___c__DisplayClass90_0_o *__this,MethodInfo *method)

{
  System_Action_string__o *localStatus;
  
  if (g_data_057aeb8f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    il2cpp_runtime_helper_023445d0(&"Request timed out");
    g_data_057aeb8f = '\x01';
  }
  localStatus = (__this->fields).localStatus;
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Anticheat_ModeratorManager__InvokeStatus("Request timed out",localStatus,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass91_0$$.ctor
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass91_0___ctor (Anticheat_ModeratorManager___c__DisplayClass91_0_o* __this, const MethodInfo* method);
// 0x44db720

void Anticheat_ModeratorManager___c__DisplayClass91_0___ctor
               (Anticheat_ModeratorManager___c__DisplayClass91_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass91_0$$<RoomBanPlayerEntry>b__0
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass91_0___RoomBanPlayerEntry_b__0 (Anticheat_ModeratorManager___c__DisplayClass91_0_o* __this, System_Collections_Generic_Dictionary_byte__object__o* data, const MethodInfo* method);
// 0x44db730

void Anticheat_ModeratorManager___c__DisplayClass91_0___RoomBanPlayerEntry_b__0
               (Anticheat_ModeratorManager___c__DisplayClass91_0_o *__this,
               System_Collections_Generic_Dictionary_byte__object__o *data,MethodInfo *method)

{
  long lVar1;
  long lVar2;
  bool_conflict bVar3;
  System_Collections_Generic_Dictionary_byte__object__array *onResponse;
  System_Action_Dictionary_byte__object___o *pSVar4;
  System_Action_o *pSVar5;
  System_Collections_Generic_Dictionary_byte__object__array *pSVar6;
  System_Collections_Generic_Dictionary_byte__object__array *value;
  Anticheat_ModeratorManager___c__DisplayClass89_0_o *__this_00;
  System_Action_string__o *pSVar7;
  System_Collections_Generic_Dictionary_byte__object__o *pSVar8;
  System_Action_string__o *pSVar9;
  System_Int32_array *pSVar10;
  System_Collections_Generic_Dictionary_byte__object__o *__this_01;
  System_Action_Dictionary_byte__object___o *pSVar11;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *value_00;
  Il2CppObject *pIVar12;
  char *pcVar13;
  System_String_o *pSVar14;
  Il2CppClass *pIVar15;
  Il2CppClass *method_00;
  Il2CppClass *in_RCX;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  System_String_o *extraout_RDX;
  MethodInfo *method_06;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  System_Int32_array *extraout_RDX_02;
  MethodInfo *method_07;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  Il2CppObject *extraout_RDX_05;
  MethodInfo *method_08;
  MethodInfo *extraout_RDX_06;
  MethodInfo *extraout_RDX_07;
  MethodInfo *pMVar16;
  System_Collections_Generic_Dictionary_byte__object__array *data_00;
  System_Collections_Generic_Dictionary_byte__object__Fields *pSVar17;
  undefined8 unaff_RBX;
  System_Action_string__o *pSVar18;
  System_Action_string__o *pSVar19;
  uint uVar20;
  uint uVar21;
  System_Collections_Generic_Dictionary_int__object__o *__this_02;
  Anticheat_ModeratorManager___c__DisplayClass89_0_o *pAVar22;
  System_Collections_Generic_Dictionary_byte__object__o *pSVar23;
  char cVar24;
  undefined8 uVar25;
  System_Collections_Generic_Dictionary_byte__object__array *unaff_R12;
  System_Action_Dictionary_byte__object___o *unaff_R13;
  int iVar26;
  Il2CppClass *pIVar27;
  ulong uVar28;
  bool bVar29;
  int iStack_15c;
  int iStack_158;
  int iStack_154;
  Il2CppObject *pIStack_150;
  System_String_o *pSStack_148;
  System_Action_string__o *pSStack_140;
  System_Collections_Generic_Dictionary_byte__object__o *pSStack_138;
  Il2CppClass *pIStack_130;
  ulong uStack_128;
  System_Int32_array *pSStack_120;
  int iStack_10c;
  int iStack_108;
  uint uStack_104;
  System_String_o *pSStack_100;
  Il2CppClass *pIStack_f8;
  System_Action_Dictionary_byte__object___o *pSStack_f0;
  Il2CppClass *pIStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  uint uStack_c8;
  uint auStack_c4 [3];
  undefined8 uStack_b8;
  System_Collections_Generic_Dictionary_byte__object__array *pSStack_b0;
  System_Action_Dictionary_byte__object___o *pSStack_a8;
  ulong uStack_a0;
  System_Collections_Generic_Dictionary_byte__object__array *pSStack_98;
  System_Action_string__o *pSStack_90;
  uint auStack_84 [3];
  System_Collections_Generic_Dictionary_byte__object__array *pSStack_78;
  System_Collections_Generic_Dictionary_byte__object__array *pSStack_70;
  undefined8 *puStack_68;
  System_Collections_Generic_Dictionary_byte__object__array *pSStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  System_Collections_Generic_Dictionary_byte__object__array *pSStack_48;
  
  if (g_data_057aeb90 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb90 = '\x01';
  }
  if (data == (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
label_044db8a7:
    pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
label_044db8ac:
    il2cpp_runtime_helper_022b2fd0();
    if (g_data_057aeb91 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      il2cpp_runtime_helper_023445d0(&"Request timed out");
      g_data_057aeb91 = '\x01';
    }
    pIVar15 = pIVar12[1].klass;
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    Anticheat_ModeratorManager__InvokeStatus
              ("Request timed out",(System_Action_string__o *)pIVar15,(MethodInfo *)0x0);
    return;
  }
  bVar3 = System_Collections_Generic_Dictionary_byte__object___ContainsKey(data,'\x01',MethodInfo_Boolean_ContainsKey);
  cVar24 = '\0';
  if ((char)bVar3 != '\0') {
    pIVar12 = System_Collections_Generic_Dictionary_byte__object___get_Item(data,'\x01',MethodInfo_Object_get_Item);
    if (pIVar12 == (Il2CppObject *)0x0) goto label_044db8a7;
    in_RCX = (pIVar12->klass->_1).element_class;
    if (in_RCX != *(Il2CppClass **)(g_data_057b9b98 + 0x40)) goto label_044db8ac;
    pcVar13 = (char *)il2cpp_runtime_helper_02305440(pIVar12);
    cVar24 = *pcVar13;
  }
  bVar3 = System_Collections_Generic_Dictionary_byte__object___ContainsKey(data,'\x02',MethodInfo_Boolean_ContainsKey);
  if ((char)bVar3 == '\0') {
label_044db82f:
    pSVar14 = *(System_String_o **)g_data_057b9c00->static_fields;
  }
  else {
    pSVar14 = (System_String_o *)
              System_Collections_Generic_Dictionary_byte__object___get_Item(data,'\x02',MethodInfo_Object_get_Item);
    if ((pSVar14 != (System_String_o *)0x0) && ((Il2CppClass *)pSVar14->klass != g_data_057b9c00)) {
      il2cpp_runtime_helper_022b2fd0(pSVar14);
      goto label_044db82f;
    }
  }
  pSVar7 = (__this->fields).localStatus;
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Anticheat_ModeratorManager__InvokeStatus(pSVar14,pSVar7,(MethodInfo *)0x0);
  if (cVar24 == '\0') {
    return;
  }
  pSVar10 = (System_Int32_array *)(__this->fields).localStatus;
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057aeb5f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_Dictionary_byte_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Byte_System_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_byte_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RequestPlayerList_b__0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RequestPlayerList_b__1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass85_0);
    il2cpp_runtime_helper_023445d0(&"Sending request...");
    g_data_057aeb5f = '\x01';
  }
  onResponse = (System_Collections_Generic_Dictionary_byte__object__array *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass85_0);
  pSVar7 = (System_Action_string__o *)0x0;
  data_00 = onResponse;
  Anticheat_ModeratorManager___c__DisplayClass85_0___ctor
            ((Anticheat_ModeratorManager___c__DisplayClass85_0_o *)onResponse,(MethodInfo *)0x0);
  if (onResponse != (System_Collections_Generic_Dictionary_byte__object__array *)0x0) {
    ((System_Collections_Generic_Dictionary_byte__object__Fields *)&onResponse->bounds)->_buckets = pSVar10;
    il2cpp_runtime_helper_022b4080((System_Collections_Generic_Dictionary_byte__object__Fields *)&onResponse->bounds,
                       pSVar10);
    pSVar10 = ((System_Collections_Generic_Dictionary_byte__object__Fields *)&onResponse->bounds)->_buckets;
    unaff_R12 = (System_Collections_Generic_Dictionary_byte__object__array *)&TypeInfo_ModeratorManager;
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057aeb5b == '\0') goto label_044d73a0;
label_044d727e:
      uVar25 = "Sending request...";
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto label_044d728f;
label_044d73c4:
      il2cpp_runtime_helper_02337ed0();
      lVar1 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
    }
    else {
      if (g_data_057aeb5b != '\0') goto label_044d727e;
label_044d73a0:
      uVar25 = "Sending request...";
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      g_data_057aeb5b = '\x01';
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto label_044d73c4;
label_044d728f:
      lVar1 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
    }
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),uVar25,*(undefined8 *)(lVar1 + 0x28));
    }
    if (pSVar10 != (System_Int32_array *)0x0) {
      (*(code *)pSVar10->max_length)
                (*(intptr_t *)((long)pSVar10->m_Items + 0x20),uVar25,*(intptr_t *)((long)pSVar10->m_Items + 8)
                );
    }
    pSVar4 = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_Dictionary_byte_object);
    System_Action_object____ctor();
    pSVar5 = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
    in_RCX = (Il2CppClass *)0x0;
    System_Action___ctor();
    pSVar14 = Anticheat_ModeratorManager__TrackRequest(5.0,pSVar4,pSVar5,method_01);
    pSVar6 = (System_Collections_Generic_Dictionary_byte__object__array *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_byte_object);
    pSVar7 = MethodInfo_Dictionary_2_System_Byte_System_Object;
    data_00 = pSVar6;
    System_Collections_Generic_Dictionary_byte__object____ctor
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar6,
               (MethodInfo_304B1A0 *)MethodInfo_Dictionary_2_System_Byte_System_Object);
    unaff_RBX = 0;
    if (pSVar6 != (System_Collections_Generic_Dictionary_byte__object__array *)0x0) {
      System_Collections_Generic_Dictionary_byte__object___Add
                ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar6,'\0',(Il2CppObject *)pSVar14,
                 MethodInfo_Void_Add);
      Anticheat_ModeratorManager__RaiseModEvent
                (0xb6,(System_Collections_Generic_Dictionary_byte__object__o *)pSVar6,method_02);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  uStack_50 = unaff_RBX;
  pSStack_48 = unaff_R12;
  if (g_data_057aeb60 == '\0') {
    uStack_58 = 0x44d7456;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    uStack_58 = 0x44d7462;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    uStack_58 = 0x44d746e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb60 = '\x01';
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto label_044d7488;
label_044d7418:
    if (g_data_057ae4db != '\0') goto label_044d7421;
label_044d7496:
    uStack_58 = 0x44d74a2;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057ae4db = '\x01';
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto label_044d74b9;
label_044d7431:
    __this_02 = *(System_Collections_Generic_Dictionary_int__object__o **)
                 (*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x10);
    if (__this_02 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      pSVar6 = (System_Collections_Generic_Dictionary_byte__object__array *)0x0;
    }
    else {
label_044d74d5:
      uStack_58 = 0x44d74e4;
      System_Collections_Generic_Dictionary_int__object___Clear(__this_02,MethodInfo_Void_Clear);
      pSVar7 = (System_Action_string__o *)0x1;
      uStack_58 = 0x44d74f1;
      pSVar6 = data_00;
      onResponse = Anticheat_ModeratorManager__GetResponseEntries
                             ((System_Collections_Generic_Dictionary_byte__object__o *)data_00,'\x01',
                              method_03);
      if ((onResponse == (System_Collections_Generic_Dictionary_byte__object__array *)0x0) ||
         ((int)onResponse->max_length < 1)) {
label_044d75fa:
        if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
          uStack_58 = 0x44d7632;
          il2cpp_runtime_helper_02337ed0();
          lVar1 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x28);
        }
        else {
          lVar1 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x28);
        }
        if (lVar1 == 0) {
          return;
        }
        (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
        return;
      }
      data_00 = (System_Collections_Generic_Dictionary_byte__object__array *)0x0;
      unaff_R13 = (System_Action_Dictionary_byte__object___o *)&MethodInfo_Void_set_Item;
      if ((onResponse->max_length & 0xffffffff) != 0) {
        do {
          unaff_R12 = (System_Collections_Generic_Dictionary_byte__object__array *)
                      onResponse->m_Items[(long)data_00];
          value = unaff_R12;
          if (unaff_R12 != (System_Collections_Generic_Dictionary_byte__object__array *)0x0) {
            if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
              uStack_58 = 0x44d757f;
              il2cpp_runtime_helper_02337ed0();
            }
            uStack_58 = 0x44d7587;
            pSVar6 = unaff_R12;
            value = (System_Collections_Generic_Dictionary_byte__object__array *)
                    Anticheat_ModeratorManager__ParsePlayerEntry
                              ((System_Collections_Generic_Dictionary_byte__object__o *)unaff_R12,
                               (MethodInfo *)pSVar7);
            if (value == (System_Collections_Generic_Dictionary_byte__object__array *)0x0) goto label_044d7654;
            if (0 < *(int *)(value->m_Items + 1)) {
              if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
                uStack_58 = 0x44d75c5;
                il2cpp_runtime_helper_02337ed0();
                if (g_data_057ae4db == '\0') goto label_044d75ce;
label_044d75ae:
                iVar26 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
              }
              else {
                if (g_data_057ae4db != '\0') goto label_044d75ae;
label_044d75ce:
                uStack_58 = 0x44d75d6;
                il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
                g_data_057ae4db = '\x01';
                iVar26 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
              }
              if (iVar26 == 0) {
                uStack_58 = 0x44d75f2;
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar6 = *(System_Collections_Generic_Dictionary_byte__object__array **)
                        (*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x10);
              unaff_R12 = value;
              if (pSVar6 == (System_Collections_Generic_Dictionary_byte__object__array *)0x0)
              goto label_044d7654;
              pSVar7 = (System_Action_string__o *)(ulong)*(uint *)(value->m_Items + 1);
              uStack_58 = 0x44d7545;
              System_Collections_Generic_Dictionary_int__object___set_Item
                        ((System_Collections_Generic_Dictionary_int__object__o *)pSVar6,
                         *(uint *)(value->m_Items + 1),(Il2CppObject *)value,MethodInfo_Void_set_Item);
            }
          }
          data_00 = (System_Collections_Generic_Dictionary_byte__object__array *)
                    ((long)&(data_00->obj).klass + 1);
          uVar20 = (uint)onResponse->max_length;
          in_RCX = (Il2CppClass *)(long)(int)uVar20;
          if ((long)in_RCX <= (long)data_00) goto label_044d75fa;
          unaff_R12 = value;
        } while (data_00 < (System_Collections_Generic_Dictionary_byte__object__array *)(ulong)uVar20);
      }
      uStack_58 = 0x44d7654;
      il2cpp_runtime_helper_022b2ca0();
    }
  }
  else {
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto label_044d7418;
label_044d7488:
    uStack_58 = 0x44d748d;
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae4db == '\0') goto label_044d7496;
label_044d7421:
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto label_044d7431;
label_044d74b9:
    uStack_58 = 0x44d74be;
    il2cpp_runtime_helper_02337ed0();
    __this_02 = *(System_Collections_Generic_Dictionary_int__object__o **)
                 (*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x10);
    pSVar6 = (System_Collections_Generic_Dictionary_byte__object__array *)0x0;
    if (__this_02 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_044d74d5;
  }
label_044d7654:
  uVar20 = (uint)pSVar6;
  uStack_58 = 0x44d7659;
  il2cpp_runtime_helper_022b2c90();
  puStack_68 = &TypeInfo_ModeratorManager;
  pSStack_78 = data_00;
  pSStack_70 = unaff_R12;
  pSStack_60 = onResponse;
  if (g_data_057aeb63 == '\0') {
    pSStack_90 = (System_Action_string__o *)0x44d7687;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_Dictionary_byte_object);
    pSStack_90 = (System_Action_string__o *)0x44d7693;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    pSStack_90 = (System_Action_string__o *)0x44d769f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pSStack_90 = (System_Action_string__o *)0x44d76ab;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Byte_System_Object);
    pSStack_90 = (System_Action_string__o *)0x44d76b7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_byte_object);
    pSStack_90 = (System_Action_string__o *)0x44d76c3;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    pSStack_90 = (System_Action_string__o *)0x44d76cf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_KickPlayer_b__0);
    pSStack_90 = (System_Action_string__o *)0x44d76db;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_KickPlayer_b__1);
    pSStack_90 = (System_Action_string__o *)0x44d76e7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass89_0);
    pSStack_90 = (System_Action_string__o *)0x44d76f3;
    il2cpp_runtime_helper_023445d0(&"Sending request...");
    g_data_057aeb63 = '\x01';
  }
  pSStack_90 = (System_Action_string__o *)0x44d7709;
  __this_00 = (Anticheat_ModeratorManager___c__DisplayClass89_0_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass89_0);
  pSVar18 = (System_Action_string__o *)0x0;
  pSStack_90 = (System_Action_string__o *)0x44d7716;
  pAVar22 = __this_00;
  Anticheat_ModeratorManager___c__DisplayClass89_0___ctor(__this_00,(MethodInfo *)0x0);
  uVar21 = (uint)pAVar22;
  if (__this_00 != (Anticheat_ModeratorManager___c__DisplayClass89_0_o *)0x0) {
    (__this_00->fields).localStatus = pSVar7;
    pSStack_90 = (System_Action_string__o *)0x44d7732;
    il2cpp_runtime_helper_022b4080(&__this_00->fields,pSVar7);
    pSVar7 = (__this_00->fields).localStatus;
    unaff_R12 = (System_Collections_Generic_Dictionary_byte__object__array *)&TypeInfo_ModeratorManager;
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      pSStack_90 = (System_Action_string__o *)0x44d78f1;
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057aeb5b == '\0') goto label_044d7908;
label_044d7765:
      uVar25 = "Sending request...";
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto label_044d7776;
label_044d792c:
      pSStack_90 = (System_Action_string__o *)0x44d7931;
      il2cpp_runtime_helper_02337ed0();
      lVar1 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
    }
    else {
      if (g_data_057aeb5b != '\0') goto label_044d7765;
label_044d7908:
      uVar25 = "Sending request...";
      pSStack_90 = (System_Action_string__o *)0x44d7914;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      g_data_057aeb5b = '\x01';
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto label_044d792c;
label_044d7776:
      lVar1 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
    }
    if (lVar1 != 0) {
      pSStack_90 = (System_Action_string__o *)0x44d7794;
      (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),uVar25,*(undefined8 *)(lVar1 + 0x28));
    }
    if (pSVar7 != (System_Action_string__o *)0x0) {
      pSStack_90 = (System_Action_string__o *)0x44d77a7;
      (*(code *)(pSVar7->fields).invoke_impl)((pSVar7->fields).method_code,uVar25,(pSVar7->fields).method);
    }
    pSStack_90 = (System_Action_string__o *)0x44d77b6;
    onResponse = (System_Collections_Generic_Dictionary_byte__object__array *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_Dictionary_byte_object)
    ;
    pSStack_90 = (System_Action_string__o *)0x44d77d0;
    System_Action_object____ctor();
    pSStack_90 = (System_Action_string__o *)0x44d77df;
    pSVar5 = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
    in_RCX = (Il2CppClass *)0x0;
    pSStack_90 = (System_Action_string__o *)0x44d77f9;
    System_Action___ctor();
    pSStack_90 = (System_Action_string__o *)0x44d780c;
    pSVar7 = (System_Action_string__o *)
             Anticheat_ModeratorManager__TrackRequest
                       (5.0,(System_Action_Dictionary_byte__object___o *)onResponse,pSVar5,method_04);
    pSStack_90 = (System_Action_string__o *)0x44d781e;
    pSVar8 = (System_Collections_Generic_Dictionary_byte__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_byte_object);
    pSStack_90 = (System_Action_string__o *)0x44d7833;
    pSVar18 = MethodInfo_Dictionary_2_System_Byte_System_Object;
    pSVar23 = pSVar8;
    System_Collections_Generic_Dictionary_byte__object____ctor(pSVar8,(MethodInfo_304B1A0 *)MethodInfo_Dictionary_2_System_Byte_System_Object);
    uVar21 = (uint)pSVar23;
    if (pSVar8 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
      pSStack_90 = (System_Action_string__o *)0x44d7853;
      System_Collections_Generic_Dictionary_byte__object___Add
                (pSVar8,'\0',(Il2CppObject *)pSVar7,MethodInfo_Void_Add);
      auStack_84[2] = 1;
      pSStack_90 = (System_Action_string__o *)0x44d7870;
      pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_84 + 2);
      pSStack_90 = (System_Action_string__o *)0x44d7883;
      System_Collections_Generic_Dictionary_byte__object___Add(pSVar8,'\x01',pIVar12,MethodInfo_Void_Add);
      auStack_84[1] = 0;
      pSStack_90 = (System_Action_string__o *)0x44d7899;
      pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_84 + 1);
      pSStack_90 = (System_Action_string__o *)0x44d78ac;
      System_Collections_Generic_Dictionary_byte__object___Add(pSVar8,'\x02',pIVar12,MethodInfo_Void_Add);
      pSStack_90 = (System_Action_string__o *)0x44d78bf;
      auStack_84[0] = uVar20;
      pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_84);
      pSStack_90 = (System_Action_string__o *)0x44d78d2;
      System_Collections_Generic_Dictionary_byte__object___Add(pSVar8,'\x03',pIVar12,MethodInfo_Void_Add);
      pSStack_90 = (System_Action_string__o *)0x44d78df;
      Anticheat_ModeratorManager__RaiseModEvent(0xb4,pSVar8,method_05);
      return;
    }
  }
  pSStack_90 = (System_Action_string__o *)0x44d7953;
  il2cpp_runtime_helper_022b2c90();
  pIVar27 = (Il2CppClass *)(ulong)uVar21;
  pIVar15 = in_RCX;
  uStack_b8 = 0;
  pSStack_b0 = unaff_R12;
  pSStack_a8 = unaff_R13;
  uStack_a0 = (ulong)uVar20;
  pSStack_98 = onResponse;
  pSStack_90 = pSVar7;
  if (g_data_057aeb64 == '\0') {
    uStack_d8 = 0x44d798f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_Dictionary_byte_object);
    uStack_d8 = 0x44d799b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    uStack_d8 = 0x44d79a7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    uStack_d8 = 0x44d79b3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Byte_System_Object);
    uStack_d8 = 0x44d79bf;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_byte_object);
    uStack_d8 = 0x44d79cb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    uStack_d8 = 0x44d79d7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RoomBan_b__0);
    uStack_d8 = 0x44d79e3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RoomBan_b__1);
    uStack_d8 = 0x44d79ef;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass90_0);
    uStack_d8 = 0x44d79fb;
    il2cpp_runtime_helper_023445d0(&"Sending request...");
    g_data_057aeb64 = '\x01';
  }
  uStack_d8 = 0x44d7a11;
  pSVar9 = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass90_0);
  pSVar19 = (System_Action_string__o *)0x0;
  uStack_d8 = 0x44d7a1e;
  pSVar7 = pSVar9;
  Anticheat_ModeratorManager___c__DisplayClass90_0___ctor
            ((Anticheat_ModeratorManager___c__DisplayClass90_0_o *)pSVar9,(MethodInfo *)0x0);
  pSVar14 = extraout_RDX;
  if (pSVar9 != (System_Action_string__o *)0x0) {
    (pSVar9->fields).method_ptr = (intptr_t)extraout_RDX;
    uStack_d8 = 0x44d7a3f;
    uStack_c8 = uVar21;
    il2cpp_runtime_helper_022b4080(&pSVar9->fields,extraout_RDX);
    lVar1 = (pSVar9->fields).method_ptr;
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      uStack_d8 = 0x44d7c4a;
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057aeb5b == '\0') goto label_044d7c68;
label_044d7a71:
      uVar25 = "Sending request...";
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto label_044d7a81;
label_044d7c92:
      uStack_d8 = 0x44d7c9d;
      il2cpp_runtime_helper_02337ed0();
      lVar2 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
      pIVar27 = in_RCX;
    }
    else {
      if (g_data_057aeb5b != '\0') goto label_044d7a71;
label_044d7c68:
      uVar25 = "Sending request...";
      uStack_d8 = 0x44d7c74;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      g_data_057aeb5b = '\x01';
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto label_044d7c92;
label_044d7a81:
      lVar2 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
    }
    if (lVar2 != 0) {
      uStack_d8 = 0x44d7a9f;
      (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),uVar25,*(undefined8 *)(lVar2 + 0x28));
    }
    if (lVar1 != 0) {
      uStack_d8 = 0x44d7ab2;
      (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),uVar25,*(undefined8 *)(lVar1 + 0x28));
    }
    uStack_d8 = 0x44d7ac1;
    unaff_R13 = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_Dictionary_byte_object);
    uStack_d8 = 0x44d7adb;
    System_Action_object____ctor();
    uStack_d8 = 0x44d7aea;
    pSVar5 = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
    pIVar15 = (Il2CppClass *)0x0;
    uStack_d8 = 0x44d7b04;
    System_Action___ctor();
    uStack_d8 = 0x44d7b17;
    pSVar14 = Anticheat_ModeratorManager__TrackRequest(5.0,unaff_R13,pSVar5,method_06);
    uStack_d8 = 0x44d7b29;
    pSVar9 = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_byte_object);
    uStack_d8 = 0x44d7b3e;
    pSVar19 = MethodInfo_Dictionary_2_System_Byte_System_Object;
    pSVar7 = pSVar9;
    System_Collections_Generic_Dictionary_byte__object____ctor
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar9,
               (MethodInfo_304B1A0 *)MethodInfo_Dictionary_2_System_Byte_System_Object);
    if (pSVar9 != (System_Action_string__o *)0x0) {
      uStack_d8 = 0x44d7b5f;
      System_Collections_Generic_Dictionary_byte__object___Add
                ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar9,'\0',(Il2CppObject *)pSVar14,
                 MethodInfo_Void_Add);
      auStack_c4[2] = (uint)pSVar18 & 0xff | 2;
      uStack_d8 = 0x44d7b7f;
      pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_c4 + 2);
      uStack_d8 = 0x44d7b93;
      System_Collections_Generic_Dictionary_byte__object___Add
                ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar9,'\x01',pIVar12,MethodInfo_Void_Add);
      auStack_c4[1] = 0;
      uStack_d8 = 0x44d7ba9;
      pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_c4 + 1);
      uStack_d8 = 0x44d7bbd;
      System_Collections_Generic_Dictionary_byte__object___Add
                ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar9,'\x02',pIVar12,MethodInfo_Void_Add);
      auStack_c4[0] = uStack_c8;
      uStack_d8 = 0x44d7bd3;
      pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_c4);
      uStack_d8 = 0x44d7be7;
      System_Collections_Generic_Dictionary_byte__object___Add
                ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar9,'\x03',pIVar12,MethodInfo_Void_Add);
      if (in_RCX == (Il2CppClass *)0x0) {
        in_RCX = *(Il2CppClass **)g_data_057b9c00->static_fields;
      }
      uStack_d8 = 0x44d7c11;
      System_Collections_Generic_Dictionary_byte__object___Add
                ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar9,'\x04',(Il2CppObject *)in_RCX
                 ,MethodInfo_Void_Add);
      pMVar16 = extraout_RDX_00;
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        uStack_d8 = 0x44d7c29;
        il2cpp_runtime_helper_02337ed0();
        pMVar16 = extraout_RDX_01;
      }
      uStack_d8 = 0x44d7c36;
      Anticheat_ModeratorManager__RaiseModEvent
                (0xb4,(System_Collections_Generic_Dictionary_byte__object__o *)pSVar9,pMVar16);
      return;
    }
  }
  uStack_d8 = 0x44d7cc2;
  il2cpp_runtime_helper_022b2c90();
  uVar28 = (ulong)pSVar19 & 0xffffffff;
  method_00 = pIVar15;
  pSStack_100 = pSVar14;
  pIStack_f8 = in_RCX;
  pSStack_f0 = unaff_R13;
  pIStack_e8 = pIVar27;
  uStack_e0 = (ulong)pSVar18 & 0xffffffff;
  uStack_d8 = 0;
  if (g_data_057aeb65 == '\0') {
    pSStack_120 = (System_Int32_array *)0x44d7d03;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_Dictionary_byte_object);
    pSStack_120 = (System_Int32_array *)0x44d7d0f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    pSStack_120 = (System_Int32_array *)0x44d7d1b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pSStack_120 = (System_Int32_array *)0x44d7d27;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Byte_System_Object);
    pSStack_120 = (System_Int32_array *)0x44d7d33;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_byte_object);
    pSStack_120 = (System_Int32_array *)0x44d7d3f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    pSStack_120 = (System_Int32_array *)0x44d7d4b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RoomBanPlayerEntry_b__0);
    pSStack_120 = (System_Int32_array *)0x44d7d57;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RoomBanPlayerEntry_b__1);
    pSStack_120 = (System_Int32_array *)0x44d7d63;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass91_0);
    pSStack_120 = (System_Int32_array *)0x44d7d6f;
    il2cpp_runtime_helper_023445d0(&"Player has no session ID to ban.");
    pSStack_120 = (System_Int32_array *)0x44d7d7b;
    il2cpp_runtime_helper_023445d0(&"Invalid player entry.");
    pSStack_120 = (System_Int32_array *)0x44d7d87;
    il2cpp_runtime_helper_023445d0(&"Sending request...");
    pSStack_120 = (System_Int32_array *)0x44d7d93;
    il2cpp_runtime_helper_023445d0(&"Player has no IP address to ban.");
    g_data_057aeb65 = '\x01';
  }
  pSStack_120 = (System_Int32_array *)0x44d7da9;
  pSVar8 = (System_Collections_Generic_Dictionary_byte__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass91_0);
  pSVar18 = (System_Action_string__o *)0x0;
  pSStack_120 = (System_Int32_array *)0x44d7db6;
  pSVar23 = pSVar8;
  Anticheat_ModeratorManager___c__DisplayClass91_0___ctor
            ((Anticheat_ModeratorManager___c__DisplayClass91_0_o *)pSVar8,(MethodInfo *)0x0);
  pSVar10 = extraout_RDX_02;
  if (pSVar8 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
    pSVar17 = &pSVar8->fields;
    (pSVar8->fields)._buckets = extraout_RDX_02;
    pSStack_120 = (System_Int32_array *)0x44d7dd5;
    il2cpp_runtime_helper_022b4080(pSVar17);
    if (pSVar7 == (System_Action_string__o *)0x0) {
      pSVar10 = pSVar17->_buckets;
      uVar25 = "Invalid player entry.";
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        pSStack_120 = (System_Int32_array *)0x44d7e42;
        il2cpp_runtime_helper_02337ed0();
        uVar25 = "Invalid player entry.";
      }
joined_r0x044d81fe:
      if (g_data_057aeb5b == '\0') {
        pSStack_120 = (System_Int32_array *)0x44d7e61;
        il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
        g_data_057aeb5b = '\x01';
      }
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        pSStack_120 = (System_Int32_array *)0x44d7f0d;
        il2cpp_runtime_helper_02337ed0();
        lVar1 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
      }
      else {
        lVar1 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
      }
      if (lVar1 != 0) {
        pSStack_120 = (System_Int32_array *)0x44d7e96;
        (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),uVar25,*(undefined8 *)(lVar1 + 0x28));
      }
      if (pSVar10 == (System_Int32_array *)0x0) {
        return;
      }
      (*(code *)pSVar10->max_length)
                (*(intptr_t *)((long)pSVar10->m_Items + 0x20),uVar25,*(intptr_t *)((long)pSVar10->m_Items + 8)
                );
      return;
    }
    if ((char)uVar28 == '\0') {
      pSStack_120 = (System_Int32_array *)0x44d7eca;
      bVar3 = System_String__IsNullOrEmpty((System_String_o *)(pSVar7->fields).method_ptr,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        pSVar10 = pSVar17->_buckets;
        uVar25 = "Player has no session ID to ban.";
        if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
          pSStack_120 = (System_Int32_array *)0x44d81ed;
          il2cpp_runtime_helper_02337ed0();
          uVar25 = "Player has no session ID to ban.";
        }
        goto joined_r0x044d81fe;
      }
      iStack_10c = 1;
      pSVar7 = (System_Action_string__o *)(pSVar7->fields).method_ptr;
      pSVar10 = pSVar17->_buckets;
      iVar26 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
    }
    else {
      pSStack_120 = (System_Int32_array *)0x44d7def;
      bVar3 = System_String__IsNullOrEmpty((System_String_o *)(pSVar7->fields).invoke_impl,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        pSVar10 = pSVar17->_buckets;
        uVar25 = "Player has no IP address to ban.";
        if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
          pSStack_120 = (System_Int32_array *)0x44d7e12;
          il2cpp_runtime_helper_02337ed0();
          uVar25 = "Player has no IP address to ban.";
        }
        goto joined_r0x044d81fe;
      }
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        pSStack_120 = (System_Int32_array *)0x44d820e;
        il2cpp_runtime_helper_02337ed0();
        if (g_data_057ae4d9 == '\0') goto label_044d821b;
label_044d7f4e:
        iVar26 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
      }
      else {
        if (g_data_057ae4d9 != '\0') goto label_044d7f4e;
label_044d821b:
        pSStack_120 = (System_Int32_array *)0x44d8227;
        il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
        g_data_057ae4d9 = '\x01';
        iVar26 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
      }
      if (iVar26 == 0) {
        pSStack_120 = (System_Int32_array *)0x44d8244;
        il2cpp_runtime_helper_02337ed0();
      }
      iStack_10c = (uint)(*(char *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 8) == '\0') * 2 + 2;
      pSVar7 = (System_Action_string__o *)(pSVar7->fields).invoke_impl;
      pSVar10 = pSVar17->_buckets;
      iVar26 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
    }
    if (iVar26 == 0) {
      pSStack_120 = (System_Int32_array *)0x44d7fba;
      il2cpp_runtime_helper_02337ed0();
    }
    uVar25 = "Sending request...";
    if (g_data_057aeb5b == '\0') {
      pSStack_120 = (System_Int32_array *)0x44d81a2;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      g_data_057aeb5b = '\x01';
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto label_044d81c0;
label_044d7fe8:
      lVar1 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
    }
    else {
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto label_044d7fe8;
label_044d81c0:
      pSStack_120 = (System_Int32_array *)0x44d81c5;
      il2cpp_runtime_helper_02337ed0();
      lVar1 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
    }
    if (lVar1 != 0) {
      pSStack_120 = (System_Int32_array *)0x44d8006;
      (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),uVar25,*(undefined8 *)(lVar1 + 0x28));
    }
    if (pSVar10 != (System_Int32_array *)0x0) {
      pSStack_120 = (System_Int32_array *)0x44d8019;
      (*(code *)pSVar10->max_length)
                (*(intptr_t *)((long)pSVar10->m_Items + 0x20),uVar25,*(intptr_t *)((long)pSVar10->m_Items + 8)
                );
    }
    pSStack_120 = (System_Int32_array *)0x44d8028;
    pSVar4 = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_Dictionary_byte_object);
    pSStack_120 = (System_Int32_array *)0x44d8042;
    System_Action_object____ctor();
    pSStack_120 = (System_Int32_array *)0x44d8051;
    pSVar5 = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
    method_00 = (Il2CppClass *)0x0;
    pSStack_120 = (System_Int32_array *)0x44d806b;
    System_Action___ctor();
    pSStack_120 = (System_Int32_array *)0x44d807e;
    pSVar10 = (System_Int32_array *)Anticheat_ModeratorManager__TrackRequest(5.0,pSVar4,pSVar5,method_07);
    pSStack_120 = (System_Int32_array *)0x44d8090;
    __this_01 = (System_Collections_Generic_Dictionary_byte__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_byte_object);
    pSStack_120 = (System_Int32_array *)0x44d80a5;
    pSVar18 = MethodInfo_Dictionary_2_System_Byte_System_Object;
    pSVar23 = __this_01;
    System_Collections_Generic_Dictionary_byte__object____ctor(__this_01,(MethodInfo_304B1A0 *)MethodInfo_Dictionary_2_System_Byte_System_Object);
    pSVar14 = (System_String_o *)0x0;
    if (__this_01 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
      pSStack_120 = (System_Int32_array *)0x44d80c6;
      System_Collections_Generic_Dictionary_byte__object___Add
                (__this_01,'\0',(Il2CppObject *)pSVar10,MethodInfo_Void_Add);
      uStack_104 = (uint)pSVar19 & 0xff | 2;
      pSStack_120 = (System_Int32_array *)0x44d80e6;
      pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_104);
      pSStack_120 = (System_Int32_array *)0x44d80fa;
      System_Collections_Generic_Dictionary_byte__object___Add(__this_01,'\x01',pIVar12,MethodInfo_Void_Add);
      iStack_108 = iStack_10c;
      pSStack_120 = (System_Int32_array *)0x44d8110;
      pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_108);
      pSStack_120 = (System_Int32_array *)0x44d8124;
      System_Collections_Generic_Dictionary_byte__object___Add(__this_01,'\x02',pIVar12,MethodInfo_Void_Add);
      pSStack_120 = (System_Int32_array *)0x44d8138;
      System_Collections_Generic_Dictionary_byte__object___Add
                (__this_01,'\x03',(Il2CppObject *)pSVar7,MethodInfo_Void_Add);
      if (pIVar15 == (Il2CppClass *)0x0) {
        pIVar15 = *(Il2CppClass **)g_data_057b9c00->static_fields;
      }
      pSStack_120 = (System_Int32_array *)0x44d8162;
      System_Collections_Generic_Dictionary_byte__object___Add
                (__this_01,'\x04',(Il2CppObject *)pIVar15,MethodInfo_Void_Add);
      pMVar16 = extraout_RDX_03;
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        pSStack_120 = (System_Int32_array *)0x44d817a;
        il2cpp_runtime_helper_02337ed0();
        pMVar16 = extraout_RDX_04;
      }
      pSStack_120 = (System_Int32_array *)0x44d8187;
      Anticheat_ModeratorManager__RaiseModEvent(0xb4,__this_01,pMVar16);
      return;
    }
  }
  pSStack_120 = (System_Int32_array *)0x44d8252;
  il2cpp_runtime_helper_022b2c90();
  pSStack_148 = pSVar14;
  pSStack_140 = pSVar7;
  pSStack_138 = pSVar8;
  pIStack_130 = pIVar15;
  uStack_128 = uVar28;
  pSStack_120 = pSVar10;
  if (g_data_057aeb66 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_Dictionary_byte_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Byte_System_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_byte_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RoomUnban_b__0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RoomUnban_b__1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass92_0);
    il2cpp_runtime_helper_023445d0(&"Sending request...");
    g_data_057aeb66 = '\x01';
  }
  pSVar11 = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass92_0);
  pSVar4 = pSVar11;
  Anticheat_ModeratorManager___c__DisplayClass92_0___ctor
            ((Anticheat_ModeratorManager___c__DisplayClass92_0_o *)pSVar11,(MethodInfo *)0x0);
  if (pSVar11 == (System_Action_Dictionary_byte__object___o *)0x0) goto label_044d867f;
  (pSVar11->fields).method_ptr = (intptr_t)pSVar18;
  il2cpp_runtime_helper_022b4080(&pSVar11->fields,pSVar18);
  pSVar7 = (System_Action_string__o *)(pSVar11->fields).method_ptr;
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057aeb5b == '\0') goto label_044d84a5;
label_044d836a:
    uVar25 = "Sending request...";
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto label_044d837b;
label_044d84c9:
    il2cpp_runtime_helper_02337ed0();
    lVar1 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
  }
  else {
    if (g_data_057aeb5b != '\0') goto label_044d836a;
label_044d84a5:
    uVar25 = "Sending request...";
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb5b = '\x01';
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto label_044d84c9;
label_044d837b:
    lVar1 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
  }
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),uVar25,*(undefined8 *)(lVar1 + 0x28));
  }
  if (pSVar7 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar7->fields).invoke_impl)((pSVar7->fields).method_code,uVar25,(pSVar7->fields).method);
  }
  pSVar4 = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_Dictionary_byte_object);
  System_Action_object____ctor();
  pSVar5 = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
  method_00 = (Il2CppClass *)0x0;
  System_Action___ctor();
  pSVar14 = Anticheat_ModeratorManager__TrackRequest(5.0,pSVar4,pSVar5,method_08);
  if (pSVar23 == (System_Collections_Generic_Dictionary_byte__object__o *)0x0) goto label_044d867f;
  iVar26 = (pSVar23->fields)._freeCount;
  pIStack_150 = extraout_RDX_05;
  if ((char)(pSVar23->fields)._version == '\0') {
    if (0 < iVar26) goto label_044d84f3;
    value_00 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)(pSVar23->fields)._buckets;
    iVar26 = 1;
  }
  else if (iVar26 < 1) {
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057ae4d9 == '\0') goto label_044d864d;
label_044d8457:
      iVar26 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
    }
    else {
      if (g_data_057ae4d9 != '\0') goto label_044d8457;
label_044d864d:
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      g_data_057ae4d9 = '\x01';
      iVar26 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
    }
    if (iVar26 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar29 = *(char *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 8) == '\0';
    method_00 = (Il2CppClass *)(ulong)bVar29;
    iVar26 = (uint)bVar29 * 2 + 2;
    value_00 = (pSVar23->fields)._entries;
  }
  else {
label_044d84f3:
    iStack_154 = iVar26;
    value_00 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
               il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_154);
    iVar26 = 0;
  }
  pSVar11 = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_byte_object);
  pSVar4 = pSVar11;
  System_Collections_Generic_Dictionary_byte__object____ctor
            ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar11,
             (MethodInfo_304B1A0 *)MethodInfo_Dictionary_2_System_Byte_System_Object);
  if (pSVar11 != (System_Action_Dictionary_byte__object___o *)0x0) {
    System_Collections_Generic_Dictionary_byte__object___Add
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar11,'\0',(Il2CppObject *)pSVar14,
               MethodInfo_Void_Add);
    iStack_158 = 5 - (uint)((char)(pSVar23->fields)._version == '\0');
    pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_158);
    System_Collections_Generic_Dictionary_byte__object___Add
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar11,'\x01',pIVar12,MethodInfo_Void_Add);
    iStack_15c = iVar26;
    pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_15c);
    System_Collections_Generic_Dictionary_byte__object___Add
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar11,'\x02',pIVar12,MethodInfo_Void_Add);
    System_Collections_Generic_Dictionary_byte__object___Add
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar11,'\x03',&value_00->obj,
               MethodInfo_Void_Add);
    pIVar12 = pIStack_150;
    if (pIStack_150 == (Il2CppObject *)0x0) {
      pIVar12 = *(Il2CppObject **)g_data_057b9c00->static_fields;
    }
    System_Collections_Generic_Dictionary_byte__object___Add
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar11,'\x04',pIVar12,MethodInfo_Void_Add);
    pMVar16 = extraout_RDX_06;
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pMVar16 = extraout_RDX_07;
    }
    Anticheat_ModeratorManager__RaiseModEvent
              (0xb4,(System_Collections_Generic_Dictionary_byte__object__o *)pSVar11,pMVar16);
    return;
  }
label_044d867f:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeb67 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb67 = '\x01';
  }
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Anticheat_ModeratorManager__RequestRoomBanList_43d86e0
            (0,0x32,(System_Action_string__o *)pSVar4,(MethodInfo *)method_00);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass91_0$$<RoomBanPlayerEntry>b__1
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass91_0___RoomBanPlayerEntry_b__1 (Anticheat_ModeratorManager___c__DisplayClass91_0_o* __this, const MethodInfo* method);
// 0x44db8c0

void Anticheat_ModeratorManager___c__DisplayClass91_0___RoomBanPlayerEntry_b__1
               (Anticheat_ModeratorManager___c__DisplayClass91_0_o *__this,MethodInfo *method)

{
  System_Action_string__o *localStatus;
  
  if (g_data_057aeb91 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    il2cpp_runtime_helper_023445d0(&"Request timed out");
    g_data_057aeb91 = '\x01';
  }
  localStatus = (__this->fields).localStatus;
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Anticheat_ModeratorManager__InvokeStatus("Request timed out",localStatus,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass92_0$$.ctor
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass92_0___ctor (Anticheat_ModeratorManager___c__DisplayClass92_0_o* __this, const MethodInfo* method);
// 0x44db920

void Anticheat_ModeratorManager___c__DisplayClass92_0___ctor
               (Anticheat_ModeratorManager___c__DisplayClass92_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass92_0$$<RoomUnban>b__0
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass92_0___RoomUnban_b__0 (Anticheat_ModeratorManager___c__DisplayClass92_0_o* __this, System_Collections_Generic_Dictionary_byte__object__o* data, const MethodInfo* method);
// 0x44db930

void Anticheat_ModeratorManager___c__DisplayClass92_0___RoomUnban_b__0
               (Anticheat_ModeratorManager___c__DisplayClass92_0_o *__this,
               System_Collections_Generic_Dictionary_byte__object__o *data,MethodInfo *method)

{
  System_Action_string__o *pSVar1;
  Il2CppClass *localStatus;
  bool_conflict bVar2;
  Il2CppObject *pIVar3;
  char *pcVar4;
  System_String_o *text;
  char cVar5;
  
  if (g_data_057aeb92 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb92 = '\x01';
  }
  if (data == (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
label_044dbaa7:
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
label_044dbaac:
    il2cpp_runtime_helper_022b2fd0();
    if (g_data_057aeb93 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      il2cpp_runtime_helper_023445d0(&"Request timed out");
      g_data_057aeb93 = '\x01';
    }
    localStatus = pIVar3[1].klass;
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    Anticheat_ModeratorManager__InvokeStatus
              ("Request timed out",(System_Action_string__o *)localStatus,(MethodInfo *)0x0);
    return;
  }
  bVar2 = System_Collections_Generic_Dictionary_byte__object___ContainsKey(data,'\x01',MethodInfo_Boolean_ContainsKey);
  cVar5 = '\0';
  if ((char)bVar2 != '\0') {
    pIVar3 = System_Collections_Generic_Dictionary_byte__object___get_Item(data,'\x01',MethodInfo_Object_get_Item);
    if (pIVar3 == (Il2CppObject *)0x0) goto label_044dbaa7;
    if ((pIVar3->klass->_1).element_class != *(Il2CppClass **)(g_data_057b9b98 + 0x40)) goto label_044dbaac;
    pcVar4 = (char *)il2cpp_runtime_helper_02305440(pIVar3);
    cVar5 = *pcVar4;
  }
  bVar2 = System_Collections_Generic_Dictionary_byte__object___ContainsKey(data,'\x02',MethodInfo_Boolean_ContainsKey);
  if ((char)bVar2 != '\0') {
    text = (System_String_o *)
           System_Collections_Generic_Dictionary_byte__object___get_Item(data,'\x02',MethodInfo_Object_get_Item);
    if ((text == (System_String_o *)0x0) || ((Il2CppClass *)text->klass == g_data_057b9c00)) goto label_044dba47;
    il2cpp_runtime_helper_022b2fd0(text);
  }
  text = *(System_String_o **)g_data_057b9c00->static_fields;
label_044dba47:
  pSVar1 = (__this->fields).localStatus;
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Anticheat_ModeratorManager__InvokeStatus(text,pSVar1,(MethodInfo *)0x0);
  if (cVar5 != '\0') {
    pSVar1 = (__this->fields).localStatus;
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    Anticheat_ModeratorManager__RequestRoomBanList(pSVar1,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass92_0$$<RoomUnban>b__1
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass92_0___RoomUnban_b__1 (Anticheat_ModeratorManager___c__DisplayClass92_0_o* __this, const MethodInfo* method);
// 0x44dbac0

void Anticheat_ModeratorManager___c__DisplayClass92_0___RoomUnban_b__1
               (Anticheat_ModeratorManager___c__DisplayClass92_0_o *__this,MethodInfo *method)

{
  System_Action_string__o *localStatus;
  
  if (g_data_057aeb93 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    il2cpp_runtime_helper_023445d0(&"Request timed out");
    g_data_057aeb93 = '\x01';
  }
  localStatus = (__this->fields).localStatus;
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Anticheat_ModeratorManager__InvokeStatus("Request timed out",localStatus,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass94_0$$.ctor
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass94_0___ctor (Anticheat_ModeratorManager___c__DisplayClass94_0_o* __this, const MethodInfo* method);
// 0x44dbb20

void Anticheat_ModeratorManager___c__DisplayClass94_0___ctor
               (Anticheat_ModeratorManager___c__DisplayClass94_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass94_0$$<RequestRoomBanList>b__0
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass94_0___RequestRoomBanList_b__0 (Anticheat_ModeratorManager___c__DisplayClass94_0_o* __this, System_Collections_Generic_Dictionary_byte__object__o* data, const MethodInfo* method);
// 0x44dbb30

void Anticheat_ModeratorManager___c__DisplayClass94_0___RequestRoomBanList_b__0
               (Anticheat_ModeratorManager___c__DisplayClass94_0_o *__this,
               System_Collections_Generic_Dictionary_byte__object__o *data,MethodInfo *method)

{
  System_String_o *text;
  System_Action_string__o *localStatus;
  long lVar1;
  int32_t iVar2;
  int32_t iVar3;
  System_Collections_Generic_Dictionary_byte__object__array *entries;
  Anticheat_RoomBanEntry_array *pAVar4;
  Il2CppObject *__this_00;
  Il2CppObject *__this_01;
  
  if (g_data_057aeb94 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RoomBanPage);
    g_data_057aeb94 = '\x01';
  }
  text = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  localStatus = (__this->fields).localStatus;
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Anticheat_ModeratorManager__InvokeStatus(text,localStatus,(MethodInfo *)0x0);
  iVar2 = Anticheat_ModeratorManager__ReadInt(data,'\x01',0,(MethodInfo *)0x0);
  iVar3 = Anticheat_ModeratorManager__ReadInt(data,'\x02',-1,(MethodInfo *)0x0);
  entries = Anticheat_ModeratorManager__GetResponseEntries(data,'\x03',(MethodInfo *)0x0);
  pAVar4 = Anticheat_ModeratorManager__ParseRoomBanEntries(entries,(MethodInfo *)0x0);
  lVar1 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x38);
  if (lVar1 != 0) {
    __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_RoomBanPage);
    __this_01 = __this_00;
    System_Object___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Il2CppObject *)0x0) {
      *(int32_t *)&__this_00[1].klass = iVar2;
      *(int32_t *)((long)&__this_00[1].klass + 4) = iVar3;
      __this_00[1].monitor = pAVar4;
      il2cpp_runtime_helper_022b4080(&__this_00[1].monitor,pAVar4);
      (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),__this_00,*(undefined8 *)(lVar1 + 0x28));
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor(__this_01,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass94_0$$<RequestRoomBanList>b__1
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass94_0___RequestRoomBanList_b__1 (Anticheat_ModeratorManager___c__DisplayClass94_0_o* __this, const MethodInfo* method);
// 0x44dbc90

void Anticheat_ModeratorManager___c__DisplayClass94_0___RequestRoomBanList_b__1
               (Anticheat_ModeratorManager___c__DisplayClass94_0_o *__this,MethodInfo *method)

{
  System_Action_string__o *localStatus;
  
  if (g_data_057aeb95 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    il2cpp_runtime_helper_023445d0(&"Request timed out");
    g_data_057aeb95 = '\x01';
  }
  localStatus = (__this->fields).localStatus;
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Anticheat_ModeratorManager__InvokeStatus("Request timed out",localStatus,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass96_0$$.ctor
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass96_0___ctor (Anticheat_ModeratorManager___c__DisplayClass96_0_o* __this, const MethodInfo* method);
// 0x44dbcf0

void Anticheat_ModeratorManager___c__DisplayClass96_0___ctor
               (Anticheat_ModeratorManager___c__DisplayClass96_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass96_0$$<RegionBan>b__0
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass96_0___RegionBan_b__0 (Anticheat_ModeratorManager___c__DisplayClass96_0_o* __this, System_Collections_Generic_Dictionary_byte__object__o* data, const MethodInfo* method);
// 0x44dbd00

void Anticheat_ModeratorManager___c__DisplayClass96_0___RegionBan_b__0
               (Anticheat_ModeratorManager___c__DisplayClass96_0_o *__this,
               System_Collections_Generic_Dictionary_byte__object__o *data,MethodInfo *method)

{
  System_Action_string__o *pSVar1;
  Il2CppClass *localStatus;
  bool_conflict bVar2;
  Il2CppObject *pIVar3;
  char *pcVar4;
  System_String_o *text;
  char cVar5;
  
  if (g_data_057aeb96 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb96 = '\x01';
  }
  if (data == (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
label_044dbe77:
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
label_044dbe7c:
    il2cpp_runtime_helper_022b2fd0();
    if (g_data_057aeb97 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      il2cpp_runtime_helper_023445d0(&"Request timed out");
      g_data_057aeb97 = '\x01';
    }
    localStatus = pIVar3[1].klass;
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    Anticheat_ModeratorManager__InvokeStatus
              ("Request timed out",(System_Action_string__o *)localStatus,(MethodInfo *)0x0);
    return;
  }
  bVar2 = System_Collections_Generic_Dictionary_byte__object___ContainsKey(data,'\x01',MethodInfo_Boolean_ContainsKey);
  cVar5 = '\0';
  if ((char)bVar2 != '\0') {
    pIVar3 = System_Collections_Generic_Dictionary_byte__object___get_Item(data,'\x01',MethodInfo_Object_get_Item);
    if (pIVar3 == (Il2CppObject *)0x0) goto label_044dbe77;
    if ((pIVar3->klass->_1).element_class != *(Il2CppClass **)(g_data_057b9b98 + 0x40)) goto label_044dbe7c;
    pcVar4 = (char *)il2cpp_runtime_helper_02305440(pIVar3);
    cVar5 = *pcVar4;
  }
  bVar2 = System_Collections_Generic_Dictionary_byte__object___ContainsKey(data,'\x02',MethodInfo_Boolean_ContainsKey);
  if ((char)bVar2 != '\0') {
    text = (System_String_o *)
           System_Collections_Generic_Dictionary_byte__object___get_Item(data,'\x02',MethodInfo_Object_get_Item);
    if ((text == (System_String_o *)0x0) || ((Il2CppClass *)text->klass == g_data_057b9c00)) goto label_044dbe17;
    il2cpp_runtime_helper_022b2fd0(text);
  }
  text = *(System_String_o **)g_data_057b9c00->static_fields;
label_044dbe17:
  pSVar1 = (__this->fields).localStatus;
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Anticheat_ModeratorManager__InvokeStatus(text,pSVar1,(MethodInfo *)0x0);
  if (cVar5 != '\0') {
    pSVar1 = (__this->fields).localStatus;
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    Anticheat_ModeratorManager__RequestRegionBanList(pSVar1,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass96_0$$<RegionBan>b__1
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass96_0___RegionBan_b__1 (Anticheat_ModeratorManager___c__DisplayClass96_0_o* __this, const MethodInfo* method);
// 0x44dbe90

void Anticheat_ModeratorManager___c__DisplayClass96_0___RegionBan_b__1
               (Anticheat_ModeratorManager___c__DisplayClass96_0_o *__this,MethodInfo *method)

{
  System_Action_string__o *localStatus;
  
  if (g_data_057aeb97 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    il2cpp_runtime_helper_023445d0(&"Request timed out");
    g_data_057aeb97 = '\x01';
  }
  localStatus = (__this->fields).localStatus;
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Anticheat_ModeratorManager__InvokeStatus("Request timed out",localStatus,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass97_0$$.ctor
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass97_0___ctor (Anticheat_ModeratorManager___c__DisplayClass97_0_o* __this, const MethodInfo* method);
// 0x44dbef0

void Anticheat_ModeratorManager___c__DisplayClass97_0___ctor
               (Anticheat_ModeratorManager___c__DisplayClass97_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass97_0$$<RegionBanPlayerEntry>b__0
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass97_0___RegionBanPlayerEntry_b__0 (Anticheat_ModeratorManager___c__DisplayClass97_0_o* __this, System_Collections_Generic_Dictionary_byte__object__o* data, const MethodInfo* method);
// 0x44dbf00

void Anticheat_ModeratorManager___c__DisplayClass97_0___RegionBanPlayerEntry_b__0
               (Anticheat_ModeratorManager___c__DisplayClass97_0_o *__this,
               System_Collections_Generic_Dictionary_byte__object__o *data,MethodInfo *method)

{
  System_Action_string__o *pSVar1;
  Il2CppClass *localStatus;
  bool_conflict bVar2;
  Il2CppObject *pIVar3;
  char *pcVar4;
  System_String_o *text;
  char cVar5;
  
  if (g_data_057aeb98 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb98 = '\x01';
  }
  if (data == (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
label_044dc077:
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
label_044dc07c:
    il2cpp_runtime_helper_022b2fd0();
    if (g_data_057aeb99 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      il2cpp_runtime_helper_023445d0(&"Request timed out");
      g_data_057aeb99 = '\x01';
    }
    localStatus = pIVar3[1].klass;
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    Anticheat_ModeratorManager__InvokeStatus
              ("Request timed out",(System_Action_string__o *)localStatus,(MethodInfo *)0x0);
    return;
  }
  bVar2 = System_Collections_Generic_Dictionary_byte__object___ContainsKey(data,'\x01',MethodInfo_Boolean_ContainsKey);
  cVar5 = '\0';
  if ((char)bVar2 != '\0') {
    pIVar3 = System_Collections_Generic_Dictionary_byte__object___get_Item(data,'\x01',MethodInfo_Object_get_Item);
    if (pIVar3 == (Il2CppObject *)0x0) goto label_044dc077;
    if ((pIVar3->klass->_1).element_class != *(Il2CppClass **)(g_data_057b9b98 + 0x40)) goto label_044dc07c;
    pcVar4 = (char *)il2cpp_runtime_helper_02305440(pIVar3);
    cVar5 = *pcVar4;
  }
  bVar2 = System_Collections_Generic_Dictionary_byte__object___ContainsKey(data,'\x02',MethodInfo_Boolean_ContainsKey);
  if ((char)bVar2 != '\0') {
    text = (System_String_o *)
           System_Collections_Generic_Dictionary_byte__object___get_Item(data,'\x02',MethodInfo_Object_get_Item);
    if ((text == (System_String_o *)0x0) || ((Il2CppClass *)text->klass == g_data_057b9c00)) goto label_044dc017;
    il2cpp_runtime_helper_022b2fd0(text);
  }
  text = *(System_String_o **)g_data_057b9c00->static_fields;
label_044dc017:
  pSVar1 = (__this->fields).localStatus;
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Anticheat_ModeratorManager__InvokeStatus(text,pSVar1,(MethodInfo *)0x0);
  if (cVar5 != '\0') {
    pSVar1 = (__this->fields).localStatus;
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    Anticheat_ModeratorManager__RequestRegionBanList(pSVar1,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass97_0$$<RegionBanPlayerEntry>b__1
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass97_0___RegionBanPlayerEntry_b__1 (Anticheat_ModeratorManager___c__DisplayClass97_0_o* __this, const MethodInfo* method);
// 0x44dc090

void Anticheat_ModeratorManager___c__DisplayClass97_0___RegionBanPlayerEntry_b__1
               (Anticheat_ModeratorManager___c__DisplayClass97_0_o *__this,MethodInfo *method)

{
  System_Action_string__o *localStatus;
  
  if (g_data_057aeb99 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    il2cpp_runtime_helper_023445d0(&"Request timed out");
    g_data_057aeb99 = '\x01';
  }
  localStatus = (__this->fields).localStatus;
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Anticheat_ModeratorManager__InvokeStatus("Request timed out",localStatus,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass98_0$$.ctor
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass98_0___ctor (Anticheat_ModeratorManager___c__DisplayClass98_0_o* __this, const MethodInfo* method);
// 0x44dc0f0

void Anticheat_ModeratorManager___c__DisplayClass98_0___ctor
               (Anticheat_ModeratorManager___c__DisplayClass98_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass98_0$$<RegionUnban>b__0
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass98_0___RegionUnban_b__0 (Anticheat_ModeratorManager___c__DisplayClass98_0_o* __this, System_Collections_Generic_Dictionary_byte__object__o* data, const MethodInfo* method);
// 0x44dc100

void Anticheat_ModeratorManager___c__DisplayClass98_0___RegionUnban_b__0
               (Anticheat_ModeratorManager___c__DisplayClass98_0_o *__this,
               System_Collections_Generic_Dictionary_byte__object__o *data,MethodInfo *method)

{
  System_Action_string__o *pSVar1;
  Il2CppClass *localStatus;
  bool_conflict bVar2;
  Il2CppObject *pIVar3;
  char *pcVar4;
  System_String_o *text;
  char cVar5;
  
  if (g_data_057aeb9a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb9a = '\x01';
  }
  if (data == (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
label_044dc277:
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
label_044dc27c:
    il2cpp_runtime_helper_022b2fd0();
    if (g_data_057aeb9b == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      il2cpp_runtime_helper_023445d0(&"Request timed out");
      g_data_057aeb9b = '\x01';
    }
    localStatus = pIVar3[1].klass;
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    Anticheat_ModeratorManager__InvokeStatus
              ("Request timed out",(System_Action_string__o *)localStatus,(MethodInfo *)0x0);
    return;
  }
  bVar2 = System_Collections_Generic_Dictionary_byte__object___ContainsKey(data,'\x01',MethodInfo_Boolean_ContainsKey);
  cVar5 = '\0';
  if ((char)bVar2 != '\0') {
    pIVar3 = System_Collections_Generic_Dictionary_byte__object___get_Item(data,'\x01',MethodInfo_Object_get_Item);
    if (pIVar3 == (Il2CppObject *)0x0) goto label_044dc277;
    if ((pIVar3->klass->_1).element_class != *(Il2CppClass **)(g_data_057b9b98 + 0x40)) goto label_044dc27c;
    pcVar4 = (char *)il2cpp_runtime_helper_02305440(pIVar3);
    cVar5 = *pcVar4;
  }
  bVar2 = System_Collections_Generic_Dictionary_byte__object___ContainsKey(data,'\x02',MethodInfo_Boolean_ContainsKey);
  if ((char)bVar2 != '\0') {
    text = (System_String_o *)
           System_Collections_Generic_Dictionary_byte__object___get_Item(data,'\x02',MethodInfo_Object_get_Item);
    if ((text == (System_String_o *)0x0) || ((Il2CppClass *)text->klass == g_data_057b9c00)) goto label_044dc217;
    il2cpp_runtime_helper_022b2fd0(text);
  }
  text = *(System_String_o **)g_data_057b9c00->static_fields;
label_044dc217:
  pSVar1 = (__this->fields).localStatus;
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Anticheat_ModeratorManager__InvokeStatus(text,pSVar1,(MethodInfo *)0x0);
  if (cVar5 != '\0') {
    pSVar1 = (__this->fields).localStatus;
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    Anticheat_ModeratorManager__RequestRegionBanList(pSVar1,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass98_0$$<RegionUnban>b__1
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass98_0___RegionUnban_b__1 (Anticheat_ModeratorManager___c__DisplayClass98_0_o* __this, const MethodInfo* method);
// 0x44dc290

void Anticheat_ModeratorManager___c__DisplayClass98_0___RegionUnban_b__1
               (Anticheat_ModeratorManager___c__DisplayClass98_0_o *__this,MethodInfo *method)

{
  System_Action_string__o *localStatus;
  
  if (g_data_057aeb9b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    il2cpp_runtime_helper_023445d0(&"Request timed out");
    g_data_057aeb9b = '\x01';
  }
  localStatus = (__this->fields).localStatus;
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Anticheat_ModeratorManager__InvokeStatus("Request timed out",localStatus,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager$$get_IsAuthenticated
// il2cpp: bool Anticheat_ModeratorManager__get_IsAuthenticated (const MethodInfo* method);
// 0x44d39c0

bool_conflict Anticheat_ModeratorManager__get_IsAuthenticated(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057aeb3c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb3c = '\x01';
    iVar1 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
  }
  if (iVar1 != 0) {
    return (bool_conflict)
           CONCAT71((int7)((ulong)*(long *)(TypeInfo_ModeratorManager + 0xb8) >> 8),
                    *(undefined1 *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 8));
  }
  il2cpp_runtime_helper_02337ed0();
  return (bool_conflict)
         CONCAT71((int7)((ulong)*(long *)(TypeInfo_ModeratorManager + 0xb8) >> 8),
                  *(undefined1 *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 8));
}


// Anticheat.ModeratorManager$$set_IsAuthenticated
// il2cpp: void Anticheat_ModeratorManager__set_IsAuthenticated (bool value, const MethodInfo* method);
// 0x44d3a30

void Anticheat_ModeratorManager__set_IsAuthenticated(bool_conflict value,MethodInfo *method)

{
  if (g_data_057aeb3d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb3d = '\x01';
  }
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  *(char *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 8) = (char)value;
  return;
}


// Anticheat.ModeratorManager$$get_AuthLevel
// il2cpp: int32_t Anticheat_ModeratorManager__get_AuthLevel (const MethodInfo* method);
// 0x44d3a80

int32_t Anticheat_ModeratorManager__get_AuthLevel(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057aeb3e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb3e = '\x01';
    iVar1 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
  }
  if (iVar1 != 0) {
    return *(int32_t *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0xc);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(int32_t *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0xc);
}


// Anticheat.ModeratorManager$$set_AuthLevel
// il2cpp: void Anticheat_ModeratorManager__set_AuthLevel (int32_t value, const MethodInfo* method);
// 0x44d3af0

void Anticheat_ModeratorManager__set_AuthLevel(int32_t value,MethodInfo *method)

{
  if (g_data_057aeb3f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb3f = '\x01';
  }
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  *(int32_t *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0xc) = value;
  return;
}


// Anticheat.ModeratorManager$$get_AuthUsername
// il2cpp: System_String_o* Anticheat_ModeratorManager__get_AuthUsername (const MethodInfo* method);
// 0x44d3b40

System_String_o * Anticheat_ModeratorManager__get_AuthUsername(MethodInfo *method)

{
  int iVar1;
  System_String_o *pSVar2;
  
  if (g_data_057aeb40 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057aeb40 = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    pSVar2 = ApplicationManagers_AccountManager__get_Username((MethodInfo *)0x0);
  }
  else {
    pSVar2 = ApplicationManagers_AccountManager__get_Username((MethodInfo *)0x0);
  }
  if (pSVar2 != (System_String_o *)0x0) {
    return pSVar2;
  }
  return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
}


// Anticheat.ModeratorManager$$get_ActivePlayers
// il2cpp: System_Collections_Generic_Dictionary_int__PlayerEntry__o* Anticheat_ModeratorManager__get_ActivePlayers (const MethodInfo* method);
// 0x44d3bc0

System_Collections_Generic_Dictionary_int__PlayerEntry__o *
Anticheat_ModeratorManager__get_ActivePlayers(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057aeb41 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb41 = '\x01';
    iVar1 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_Collections_Generic_Dictionary_int__PlayerEntry__o **)
            (*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x10);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_Collections_Generic_Dictionary_int__PlayerEntry__o **)
          (*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x10);
}


// Anticheat.ModeratorManager$$set_ActivePlayers
// il2cpp: void Anticheat_ModeratorManager__set_ActivePlayers (System_Collections_Generic_Dictionary_int__PlayerEntry__o* value, const MethodInfo* method);
// 0x44d3c30

void Anticheat_ModeratorManager__set_ActivePlayers
               (System_Collections_Generic_Dictionary_int__PlayerEntry__o *value,MethodInfo *method)

{
  long lVar1;
  
  if (g_data_057aeb42 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb42 = '\x01';
  }
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar1 = *(long *)(TypeInfo_ModeratorManager + 0xb8);
  *(System_Collections_Generic_Dictionary_int__PlayerEntry__o **)(lVar1 + 0x10) = value;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x10,value);
  return;
}


// Anticheat.ModeratorManager$$get_PastPlayers
// il2cpp: System_Collections_Generic_List_PlayerEntry__o* Anticheat_ModeratorManager__get_PastPlayers (const MethodInfo* method);
// 0x44d3c90

System_Collections_Generic_List_PlayerEntry__o *
Anticheat_ModeratorManager__get_PastPlayers(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057aeb43 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb43 = '\x01';
    iVar1 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_Collections_Generic_List_PlayerEntry__o **)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x18);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_Collections_Generic_List_PlayerEntry__o **)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x18);
}


// Anticheat.ModeratorManager$$set_PastPlayers
// il2cpp: void Anticheat_ModeratorManager__set_PastPlayers (System_Collections_Generic_List_PlayerEntry__o* value, const MethodInfo* method);
// 0x44d3d00

void Anticheat_ModeratorManager__set_PastPlayers
               (System_Collections_Generic_List_PlayerEntry__o *value,MethodInfo *method)

{
  long lVar1;
  
  if (g_data_057aeb44 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb44 = '\x01';
  }
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar1 = *(long *)(TypeInfo_ModeratorManager + 0xb8);
  *(System_Collections_Generic_List_PlayerEntry__o **)(lVar1 + 0x18) = value;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x18,value);
  return;
}


// Anticheat.ModeratorManager$$add_AuthChanged
// il2cpp: void Anticheat_ModeratorManager__add_AuthChanged (System_Action_o* value, const MethodInfo* method);
// 0x44d3d60

void Anticheat_ModeratorManager__add_AuthChanged(System_Action_o *value,MethodInfo *method)

{
  undefined8 uVar1;
  System_Delegate_o *pSVar2;
  System_Delegate_o *pSVar3;
  Il2CppObject *pIVar4;
  long lVar5;
  System_Delegate_o *pSVar6;
  bool bVar7;
  
  if (g_data_057aeb45 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb45 = '\x01';
  }
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar6 = *(System_Delegate_o **)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x20);
  do {
    pSVar2 = System_Delegate__Combine(pSVar6,(System_Delegate_o *)value,(MethodInfo *)0x0);
    if ((pSVar2 != (System_Delegate_o *)0x0) && (pSVar2->klass != TypeInfo_Action)) {
      il2cpp_runtime_helper_022b2fd0();
      if (g_data_057aeb46 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
        il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
        g_data_057aeb46 = '\x01';
      }
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar6 = *(System_Delegate_o **)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x20);
      do {
        pSVar3 = System_Delegate__Remove(pSVar6,pSVar2,(MethodInfo *)0x0);
        if ((pSVar3 != (System_Delegate_o *)0x0) && (pSVar3->klass != TypeInfo_Action)) {
          il2cpp_runtime_helper_022b2fd0();
          if (g_data_057aeb47 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
            il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
            g_data_057aeb47 = '\x01';
          }
          if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar6 = *(System_Delegate_o **)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x28);
          do {
            pSVar2 = System_Delegate__Combine(pSVar6,pSVar3,(MethodInfo *)0x0);
            if ((pSVar2 != (System_Delegate_o *)0x0) && (pSVar2->klass != TypeInfo_Action)) {
              il2cpp_runtime_helper_022b2fd0();
              if (g_data_057aeb48 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
                il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
                g_data_057aeb48 = '\x01';
              }
              if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar6 = *(System_Delegate_o **)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x28);
              do {
                pSVar3 = System_Delegate__Remove(pSVar6,pSVar2,(MethodInfo *)0x0);
                if ((pSVar3 != (System_Delegate_o *)0x0) && (pSVar3->klass != TypeInfo_Action)) {
                  il2cpp_runtime_helper_022b2fd0();
                  if (g_data_057aeb49 == '\0') {
                    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
                    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
                    g_data_057aeb49 = '\x01';
                  }
                  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pSVar6 = *(System_Delegate_o **)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
                  do {
                    pSVar2 = System_Delegate__Combine(pSVar6,pSVar3,(MethodInfo *)0x0);
                    uVar1 = TypeInfo_Action_string;
                    lVar5 = 0;
                    if (pSVar2 != (System_Delegate_o *)0x0) {
                      lVar5 = il2cpp_runtime_helper_023051f0(pSVar2,TypeInfo_Action_string);
                      if (lVar5 == 0) {
                        il2cpp_runtime_helper_022b2fd0(pSVar2,uVar1);
                        if (g_data_057aeb4a == '\0') {
                          il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
                          il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
                          g_data_057aeb4a = '\x01';
                        }
                        if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
                          il2cpp_runtime_helper_02337ed0();
                        }
                        pSVar6 = *(System_Delegate_o **)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
                        do {
                          pSVar3 = System_Delegate__Remove(pSVar6,pSVar2,(MethodInfo *)0x0);
                          uVar1 = TypeInfo_Action_string;
                          lVar5 = 0;
                          if (pSVar3 != (System_Delegate_o *)0x0) {
                            lVar5 = il2cpp_runtime_helper_023051f0(pSVar3,TypeInfo_Action_string);
                            if (lVar5 == 0) {
                              il2cpp_runtime_helper_022b2fd0(pSVar3,uVar1);
                              if (g_data_057aeb4b == '\0') {
                                il2cpp_runtime_helper_023445d0(&TypeInfo_Action_RoomBanPage);
                                il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
                                g_data_057aeb4b = '\x01';
                              }
                              if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
                                il2cpp_runtime_helper_02337ed0();
                              }
                              pSVar6 = *(System_Delegate_o **)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x38);
                              do {
                                pSVar2 = System_Delegate__Combine(pSVar6,pSVar3,(MethodInfo *)0x0);
                                uVar1 = TypeInfo_Action_RoomBanPage;
                                lVar5 = 0;
                                if (pSVar2 != (System_Delegate_o *)0x0) {
                                  lVar5 = il2cpp_runtime_helper_023051f0(pSVar2,TypeInfo_Action_RoomBanPage);
                                  if (lVar5 == 0) {
                                    il2cpp_runtime_helper_022b2fd0(pSVar2,uVar1);
                                    if (g_data_057aeb4c == '\0') {
                                      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_RoomBanPage);
                                      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
                                      g_data_057aeb4c = '\x01';
                                    }
                                    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
                                      il2cpp_runtime_helper_02337ed0();
                                    }
                                    pSVar6 = *(System_Delegate_o **)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x38);
                                    do {
                                      pSVar3 = System_Delegate__Remove(pSVar6,pSVar2,(MethodInfo *)0x0);
                                      uVar1 = TypeInfo_Action_RoomBanPage;
                                      lVar5 = 0;
                                      if (pSVar3 != (System_Delegate_o *)0x0) {
                                        lVar5 = il2cpp_runtime_helper_023051f0(pSVar3,TypeInfo_Action_RoomBanPage);
                                        if (lVar5 == 0) {
                                          il2cpp_runtime_helper_022b2fd0(pSVar3,uVar1);
                                          if (g_data_057aeb4d == '\0') {
                                            il2cpp_runtime_helper_023445d0(&TypeInfo_Action_RegionBanPage);
                                            il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
                                            g_data_057aeb4d = '\x01';
                                          }
                                          if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
                                            il2cpp_runtime_helper_02337ed0();
                                          }
                                          pSVar6 = *(System_Delegate_o **)
                                                    (*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x40);
                                          do {
                                            pSVar2 = System_Delegate__Combine(pSVar6,pSVar3,(MethodInfo *)0x0)
                                            ;
                                            uVar1 = TypeInfo_Action_RegionBanPage;
                                            lVar5 = 0;
                                            if (pSVar2 != (System_Delegate_o *)0x0) {
                                              lVar5 = il2cpp_runtime_helper_023051f0(pSVar2,TypeInfo_Action_RegionBanPage);
                                              if (lVar5 == 0) {
                                                il2cpp_runtime_helper_022b2fd0(pSVar2,uVar1);
                                                if (g_data_057aeb4e == '\0') {
                                                  il2cpp_runtime_helper_023445d0(&TypeInfo_Action_RegionBanPage);
                                                  il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
                                                  g_data_057aeb4e = '\x01';
                                                }
                                                if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
                                                  il2cpp_runtime_helper_02337ed0();
                                                }
                                                pSVar6 = *(System_Delegate_o **)
                                                          (*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x40);
                                                do {
                                                  pSVar3 = System_Delegate__Remove
                                                                     (pSVar6,pSVar2,(MethodInfo *)0x0);
                                                  uVar1 = TypeInfo_Action_RegionBanPage;
                                                  lVar5 = 0;
                                                  if (pSVar3 != (System_Delegate_o *)0x0) {
                                                    lVar5 = il2cpp_runtime_helper_023051f0(pSVar3,TypeInfo_Action_RegionBanPage);
                                                    if (lVar5 == 0) {
                                                      il2cpp_runtime_helper_022b2fd0(pSVar3,uVar1);
                                                      if (g_data_057aeb4f == '\0') {
                                                        il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
                                                        il2cpp_runtime_helper_023445d0(&MethodInfo_ModeratorManager_CreateSingleton_ModeratorManager);
                                                        g_data_057aeb4f = '\x01';
                                                      }
                                                      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
                                                        il2cpp_runtime_helper_02337ed0();
                                                      }
                                                      pIVar4 = 
                                                       Utility_SingletonFactory__CreateSingleton_object_
                                                                 ((Il2CppObject *)
                                                                  **(undefined8 **)(TypeInfo_ModeratorManager + 0xb8),
                                                                  MethodInfo_ModeratorManager_CreateSingleton_ModeratorManager);
                                                      **(undefined8 **)(TypeInfo_ModeratorManager + 0xb8) = pIVar4;
                                                      il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_ModeratorManager + 0xb8),
                                                                         pIVar4);
                                                      return;
                                                    }
                                                  }
                                                  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
                                                    il2cpp_runtime_helper_02337ed0();
                                                  }
                                                  pSVar3 = (System_Delegate_o *)
                                                           il2cpp_runtime_helper_02300640(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x40,
                                                                        lVar5,pSVar6);
                                                  bVar7 = pSVar6 != pSVar3;
                                                  pSVar6 = pSVar3;
                                                } while (bVar7);
                                                return;
                                              }
                                            }
                                            if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
                                              il2cpp_runtime_helper_02337ed0();
                                            }
                                            pSVar2 = (System_Delegate_o *)
                                                     il2cpp_runtime_helper_02300640(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x40,lVar5,
                                                                  pSVar6);
                                            bVar7 = pSVar6 != pSVar2;
                                            pSVar6 = pSVar2;
                                          } while (bVar7);
                                          return;
                                        }
                                      }
                                      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
                                        il2cpp_runtime_helper_02337ed0();
                                      }
                                      pSVar3 = (System_Delegate_o *)
                                               il2cpp_runtime_helper_02300640(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x38,lVar5,pSVar6
                                                           );
                                      bVar7 = pSVar6 != pSVar3;
                                      pSVar6 = pSVar3;
                                    } while (bVar7);
                                    return;
                                  }
                                }
                                if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
                                  il2cpp_runtime_helper_02337ed0();
                                }
                                pSVar2 = (System_Delegate_o *)
                                         il2cpp_runtime_helper_02300640(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x38,lVar5,pSVar6);
                                bVar7 = pSVar6 != pSVar2;
                                pSVar6 = pSVar2;
                              } while (bVar7);
                              return;
                            }
                          }
                          if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
                            il2cpp_runtime_helper_02337ed0();
                          }
                          pSVar3 = (System_Delegate_o *)
                                   il2cpp_runtime_helper_02300640(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30,lVar5,pSVar6);
                          bVar7 = pSVar6 != pSVar3;
                          pSVar6 = pSVar3;
                        } while (bVar7);
                        return;
                      }
                    }
                    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pSVar2 = (System_Delegate_o *)
                             il2cpp_runtime_helper_02300640(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30,lVar5,pSVar6);
                    bVar7 = pSVar6 != pSVar2;
                    pSVar6 = pSVar2;
                  } while (bVar7);
                  return;
                }
                if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar3 = (System_Delegate_o *)
                         il2cpp_runtime_helper_02300640(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x28,pSVar3,pSVar6);
                bVar7 = pSVar6 != pSVar3;
                pSVar6 = pSVar3;
              } while (bVar7);
              return;
            }
            if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar2 = (System_Delegate_o *)il2cpp_runtime_helper_02300640(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x28,pSVar2,pSVar6);
            bVar7 = pSVar6 != pSVar2;
            pSVar6 = pSVar2;
          } while (bVar7);
          return;
        }
        if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar3 = (System_Delegate_o *)il2cpp_runtime_helper_02300640(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x20,pSVar3,pSVar6);
        bVar7 = pSVar6 != pSVar3;
        pSVar6 = pSVar3;
      } while (bVar7);
      return;
    }
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar2 = (System_Delegate_o *)il2cpp_runtime_helper_02300640(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x20,pSVar2,pSVar6);
    bVar7 = pSVar6 != pSVar2;
    pSVar6 = pSVar2;
  } while (bVar7);
  return;
}


// Anticheat.ModeratorManager$$remove_AuthChanged
// il2cpp: void Anticheat_ModeratorManager__remove_AuthChanged (System_Action_o* value, const MethodInfo* method);
// 0x44d3e40

void Anticheat_ModeratorManager__remove_AuthChanged(System_Action_o *value,MethodInfo *method)

{
  undefined8 uVar1;
  System_Delegate_o *pSVar2;
  System_Delegate_o *pSVar3;
  Il2CppObject *pIVar4;
  long lVar5;
  System_Delegate_o *pSVar6;
  bool bVar7;
  
  if (g_data_057aeb46 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb46 = '\x01';
  }
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar6 = *(System_Delegate_o **)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x20);
  do {
    pSVar2 = System_Delegate__Remove(pSVar6,(System_Delegate_o *)value,(MethodInfo *)0x0);
    if ((pSVar2 != (System_Delegate_o *)0x0) && (pSVar2->klass != TypeInfo_Action)) {
      il2cpp_runtime_helper_022b2fd0();
      if (g_data_057aeb47 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
        il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
        g_data_057aeb47 = '\x01';
      }
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar6 = *(System_Delegate_o **)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x28);
      do {
        pSVar3 = System_Delegate__Combine(pSVar6,pSVar2,(MethodInfo *)0x0);
        if ((pSVar3 != (System_Delegate_o *)0x0) && (pSVar3->klass != TypeInfo_Action)) {
          il2cpp_runtime_helper_022b2fd0();
          if (g_data_057aeb48 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
            il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
            g_data_057aeb48 = '\x01';
          }
          if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar6 = *(System_Delegate_o **)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x28);
          do {
            pSVar2 = System_Delegate__Remove(pSVar6,pSVar3,(MethodInfo *)0x0);
            if ((pSVar2 != (System_Delegate_o *)0x0) && (pSVar2->klass != TypeInfo_Action)) {
              il2cpp_runtime_helper_022b2fd0();
              if (g_data_057aeb49 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
                il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
                g_data_057aeb49 = '\x01';
              }
              if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar6 = *(System_Delegate_o **)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
              do {
                pSVar3 = System_Delegate__Combine(pSVar6,pSVar2,(MethodInfo *)0x0);
                uVar1 = TypeInfo_Action_string;
                lVar5 = 0;
                if (pSVar3 != (System_Delegate_o *)0x0) {
                  lVar5 = il2cpp_runtime_helper_023051f0(pSVar3,TypeInfo_Action_string);
                  if (lVar5 == 0) {
                    il2cpp_runtime_helper_022b2fd0(pSVar3,uVar1);
                    if (g_data_057aeb4a == '\0') {
                      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
                      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
                      g_data_057aeb4a = '\x01';
                    }
                    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pSVar6 = *(System_Delegate_o **)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
                    do {
                      pSVar2 = System_Delegate__Remove(pSVar6,pSVar3,(MethodInfo *)0x0);
                      uVar1 = TypeInfo_Action_string;
                      lVar5 = 0;
                      if (pSVar2 != (System_Delegate_o *)0x0) {
                        lVar5 = il2cpp_runtime_helper_023051f0(pSVar2,TypeInfo_Action_string);
                        if (lVar5 == 0) {
                          il2cpp_runtime_helper_022b2fd0(pSVar2,uVar1);
                          if (g_data_057aeb4b == '\0') {
                            il2cpp_runtime_helper_023445d0(&TypeInfo_Action_RoomBanPage);
                            il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
                            g_data_057aeb4b = '\x01';
                          }
                          if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
                            il2cpp_runtime_helper_02337ed0();
                          }
                          pSVar6 = *(System_Delegate_o **)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x38);
                          do {
                            pSVar3 = System_Delegate__Combine(pSVar6,pSVar2,(MethodInfo *)0x0);
                            uVar1 = TypeInfo_Action_RoomBanPage;
                            lVar5 = 0;
                            if (pSVar3 != (System_Delegate_o *)0x0) {
                              lVar5 = il2cpp_runtime_helper_023051f0(pSVar3,TypeInfo_Action_RoomBanPage);
                              if (lVar5 == 0) {
                                il2cpp_runtime_helper_022b2fd0(pSVar3,uVar1);
                                if (g_data_057aeb4c == '\0') {
                                  il2cpp_runtime_helper_023445d0(&TypeInfo_Action_RoomBanPage);
                                  il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
                                  g_data_057aeb4c = '\x01';
                                }
                                if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
                                  il2cpp_runtime_helper_02337ed0();
                                }
                                pSVar6 = *(System_Delegate_o **)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x38);
                                do {
                                  pSVar2 = System_Delegate__Remove(pSVar6,pSVar3,(MethodInfo *)0x0);
                                  uVar1 = TypeInfo_Action_RoomBanPage;
                                  lVar5 = 0;
                                  if (pSVar2 != (System_Delegate_o *)0x0) {
                                    lVar5 = il2cpp_runtime_helper_023051f0(pSVar2,TypeInfo_Action_RoomBanPage);
                                    if (lVar5 == 0) {
                                      il2cpp_runtime_helper_022b2fd0(pSVar2,uVar1);
                                      if (g_data_057aeb4d == '\0') {
                                        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_RegionBanPage);
                                        il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
                                        g_data_057aeb4d = '\x01';
                                      }
                                      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
                                        il2cpp_runtime_helper_02337ed0();
                                      }
                                      pSVar6 = *(System_Delegate_o **)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x40);
                                      do {
                                        pSVar3 = System_Delegate__Combine(pSVar6,pSVar2,(MethodInfo *)0x0);
                                        uVar1 = TypeInfo_Action_RegionBanPage;
                                        lVar5 = 0;
                                        if (pSVar3 != (System_Delegate_o *)0x0) {
                                          lVar5 = il2cpp_runtime_helper_023051f0(pSVar3,TypeInfo_Action_RegionBanPage);
                                          if (lVar5 == 0) {
                                            il2cpp_runtime_helper_022b2fd0(pSVar3,uVar1);
                                            if (g_data_057aeb4e == '\0') {
                                              il2cpp_runtime_helper_023445d0(&TypeInfo_Action_RegionBanPage);
                                              il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
                                              g_data_057aeb4e = '\x01';
                                            }
                                            if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
                                              il2cpp_runtime_helper_02337ed0();
                                            }
                                            pSVar6 = *(System_Delegate_o **)
                                                      (*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x40);
                                            do {
                                              pSVar2 = System_Delegate__Remove
                                                                 (pSVar6,pSVar3,(MethodInfo *)0x0);
                                              uVar1 = TypeInfo_Action_RegionBanPage;
                                              lVar5 = 0;
                                              if (pSVar2 != (System_Delegate_o *)0x0) {
                                                lVar5 = il2cpp_runtime_helper_023051f0(pSVar2,TypeInfo_Action_RegionBanPage);
                                                if (lVar5 == 0) {
                                                  il2cpp_runtime_helper_022b2fd0(pSVar2,uVar1);
                                                  if (g_data_057aeb4f == '\0') {
                                                    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
                                                    il2cpp_runtime_helper_023445d0(&MethodInfo_ModeratorManager_CreateSingleton_ModeratorManager);
                                                    g_data_057aeb4f = '\x01';
                                                  }
                                                  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
                                                    il2cpp_runtime_helper_02337ed0();
                                                  }
                                                  pIVar4 = Utility_SingletonFactory__CreateSingleton_object_
                                                                     ((Il2CppObject *)
                                                                      **(undefined8 **)(TypeInfo_ModeratorManager + 0xb8),
                                                                      MethodInfo_ModeratorManager_CreateSingleton_ModeratorManager);
                                                  **(undefined8 **)(TypeInfo_ModeratorManager + 0xb8) = pIVar4;
                                                  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_ModeratorManager + 0xb8),
                                                                     pIVar4);
                                                  return;
                                                }
                                              }
                                              if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
                                                il2cpp_runtime_helper_02337ed0();
                                              }
                                              pSVar2 = (System_Delegate_o *)
                                                       il2cpp_runtime_helper_02300640(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x40,
                                                                    lVar5,pSVar6);
                                              bVar7 = pSVar6 != pSVar2;
                                              pSVar6 = pSVar2;
                                            } while (bVar7);
                                            return;
                                          }
                                        }
                                        if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
                                          il2cpp_runtime_helper_02337ed0();
                                        }
                                        pSVar3 = (System_Delegate_o *)
                                                 il2cpp_runtime_helper_02300640(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x40,lVar5,
                                                              pSVar6);
                                        bVar7 = pSVar6 != pSVar3;
                                        pSVar6 = pSVar3;
                                      } while (bVar7);
                                      return;
                                    }
                                  }
                                  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
                                    il2cpp_runtime_helper_02337ed0();
                                  }
                                  pSVar2 = (System_Delegate_o *)
                                           il2cpp_runtime_helper_02300640(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x38,lVar5,pSVar6);
                                  bVar7 = pSVar6 != pSVar2;
                                  pSVar6 = pSVar2;
                                } while (bVar7);
                                return;
                              }
                            }
                            if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
                              il2cpp_runtime_helper_02337ed0();
                            }
                            pSVar3 = (System_Delegate_o *)
                                     il2cpp_runtime_helper_02300640(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x38,lVar5,pSVar6);
                            bVar7 = pSVar6 != pSVar3;
                            pSVar6 = pSVar3;
                          } while (bVar7);
                          return;
                        }
                      }
                      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      pSVar2 = (System_Delegate_o *)
                               il2cpp_runtime_helper_02300640(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30,lVar5,pSVar6);
                      bVar7 = pSVar6 != pSVar2;
                      pSVar6 = pSVar2;
                    } while (bVar7);
                    return;
                  }
                }
                if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar3 = (System_Delegate_o *)il2cpp_runtime_helper_02300640(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30,lVar5,pSVar6)
                ;
                bVar7 = pSVar6 != pSVar3;
                pSVar6 = pSVar3;
              } while (bVar7);
              return;
            }
            if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar2 = (System_Delegate_o *)il2cpp_runtime_helper_02300640(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x28,pSVar2,pSVar6);
            bVar7 = pSVar6 != pSVar2;
            pSVar6 = pSVar2;
          } while (bVar7);
          return;
        }
        if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar3 = (System_Delegate_o *)il2cpp_runtime_helper_02300640(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x28,pSVar3,pSVar6);
        bVar7 = pSVar6 != pSVar3;
        pSVar6 = pSVar3;
      } while (bVar7);
      return;
    }
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar2 = (System_Delegate_o *)il2cpp_runtime_helper_02300640(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x20,pSVar2,pSVar6);
    bVar7 = pSVar6 != pSVar2;
    pSVar6 = pSVar2;
  } while (bVar7);
  return;
}


// Anticheat.ModeratorManager$$add_PlayerListChanged
// il2cpp: void Anticheat_ModeratorManager__add_PlayerListChanged (System_Action_o* value, const MethodInfo* method);
// 0x44d3f20

void Anticheat_ModeratorManager__add_PlayerListChanged(System_Action_o *value,MethodInfo *method)

{
  undefined8 uVar1;
  System_Delegate_o *pSVar2;
  System_Delegate_o *pSVar3;
  Il2CppObject *pIVar4;
  long lVar5;
  System_Delegate_o *pSVar6;
  bool bVar7;
  
  if (g_data_057aeb47 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb47 = '\x01';
  }
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar6 = *(System_Delegate_o **)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x28);
  do {
    pSVar2 = System_Delegate__Combine(pSVar6,(System_Delegate_o *)value,(MethodInfo *)0x0);
    if ((pSVar2 != (System_Delegate_o *)0x0) && (pSVar2->klass != TypeInfo_Action)) {
      il2cpp_runtime_helper_022b2fd0();
      if (g_data_057aeb48 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
        il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
        g_data_057aeb48 = '\x01';
      }
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar6 = *(System_Delegate_o **)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x28);
      do {
        pSVar3 = System_Delegate__Remove(pSVar6,pSVar2,(MethodInfo *)0x0);
        if ((pSVar3 != (System_Delegate_o *)0x0) && (pSVar3->klass != TypeInfo_Action)) {
          il2cpp_runtime_helper_022b2fd0();
          if (g_data_057aeb49 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
            il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
            g_data_057aeb49 = '\x01';
          }
          if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar6 = *(System_Delegate_o **)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
          do {
            pSVar2 = System_Delegate__Combine(pSVar6,pSVar3,(MethodInfo *)0x0);
            uVar1 = TypeInfo_Action_string;
            lVar5 = 0;
            if (pSVar2 != (System_Delegate_o *)0x0) {
              lVar5 = il2cpp_runtime_helper_023051f0(pSVar2,TypeInfo_Action_string);
              if (lVar5 == 0) {
                il2cpp_runtime_helper_022b2fd0(pSVar2,uVar1);
                if (g_data_057aeb4a == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
                  il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
                  g_data_057aeb4a = '\x01';
                }
                if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar6 = *(System_Delegate_o **)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
                do {
                  pSVar3 = System_Delegate__Remove(pSVar6,pSVar2,(MethodInfo *)0x0);
                  uVar1 = TypeInfo_Action_string;
                  lVar5 = 0;
                  if (pSVar3 != (System_Delegate_o *)0x0) {
                    lVar5 = il2cpp_runtime_helper_023051f0(pSVar3,TypeInfo_Action_string);
                    if (lVar5 == 0) {
                      il2cpp_runtime_helper_022b2fd0(pSVar3,uVar1);
                      if (g_data_057aeb4b == '\0') {
                        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_RoomBanPage);
                        il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
                        g_data_057aeb4b = '\x01';
                      }
                      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      pSVar6 = *(System_Delegate_o **)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x38);
                      do {
                        pSVar2 = System_Delegate__Combine(pSVar6,pSVar3,(MethodInfo *)0x0);
                        uVar1 = TypeInfo_Action_RoomBanPage;
                        lVar5 = 0;
                        if (pSVar2 != (System_Delegate_o *)0x0) {
                          lVar5 = il2cpp_runtime_helper_023051f0(pSVar2,TypeInfo_Action_RoomBanPage);
                          if (lVar5 == 0) {
                            il2cpp_runtime_helper_022b2fd0(pSVar2,uVar1);
                            if (g_data_057aeb4c == '\0') {
                              il2cpp_runtime_helper_023445d0(&TypeInfo_Action_RoomBanPage);
                              il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
                              g_data_057aeb4c = '\x01';
                            }
                            if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
                              il2cpp_runtime_helper_02337ed0();
                            }
                            pSVar6 = *(System_Delegate_o **)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x38);
                            do {
                              pSVar3 = System_Delegate__Remove(pSVar6,pSVar2,(MethodInfo *)0x0);
                              uVar1 = TypeInfo_Action_RoomBanPage;
                              lVar5 = 0;
                              if (pSVar3 != (System_Delegate_o *)0x0) {
                                lVar5 = il2cpp_runtime_helper_023051f0(pSVar3,TypeInfo_Action_RoomBanPage);
                                if (lVar5 == 0) {
                                  il2cpp_runtime_helper_022b2fd0(pSVar3,uVar1);
                                  if (g_data_057aeb4d == '\0') {
                                    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_RegionBanPage);
                                    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
                                    g_data_057aeb4d = '\x01';
                                  }
                                  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
                                    il2cpp_runtime_helper_02337ed0();
                                  }
                                  pSVar6 = *(System_Delegate_o **)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x40);
                                  do {
                                    pSVar2 = System_Delegate__Combine(pSVar6,pSVar3,(MethodInfo *)0x0);
                                    uVar1 = TypeInfo_Action_RegionBanPage;
                                    lVar5 = 0;
                                    if (pSVar2 != (System_Delegate_o *)0x0) {
                                      lVar5 = il2cpp_runtime_helper_023051f0(pSVar2,TypeInfo_Action_RegionBanPage);
                                      if (lVar5 == 0) {
                                        il2cpp_runtime_helper_022b2fd0(pSVar2,uVar1);
                                        if (g_data_057aeb4e == '\0') {
                                          il2cpp_runtime_helper_023445d0(&TypeInfo_Action_RegionBanPage);
                                          il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
                                          g_data_057aeb4e = '\x01';
                                        }
                                        if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
                                          il2cpp_runtime_helper_02337ed0();
                                        }
                                        pSVar6 = *(System_Delegate_o **)
                                                  (*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x40);
                                        do {
                                          pSVar3 = System_Delegate__Remove(pSVar6,pSVar2,(MethodInfo *)0x0);
                                          uVar1 = TypeInfo_Action_RegionBanPage;
                                          lVar5 = 0;
                                          if (pSVar3 != (System_Delegate_o *)0x0) {
                                            lVar5 = il2cpp_runtime_helper_023051f0(pSVar3,TypeInfo_Action_RegionBanPage);
                                            if (lVar5 == 0) {
                                              il2cpp_runtime_helper_022b2fd0(pSVar3,uVar1);
                                              if (g_data_057aeb4f == '\0') {
                                                il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
                                                il2cpp_runtime_helper_023445d0(&MethodInfo_ModeratorManager_CreateSingleton_ModeratorManager);
                                                g_data_057aeb4f = '\x01';
                                              }
                                              if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
                                                il2cpp_runtime_helper_02337ed0();
                                              }
                                              pIVar4 = Utility_SingletonFactory__CreateSingleton_object_
                                                                 ((Il2CppObject *)
                                                                  **(undefined8 **)(TypeInfo_ModeratorManager + 0xb8),
                                                                  MethodInfo_ModeratorManager_CreateSingleton_ModeratorManager);
                                              **(undefined8 **)(TypeInfo_ModeratorManager + 0xb8) = pIVar4;
                                              il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_ModeratorManager + 0xb8),pIVar4);
                                              return;
                                            }
                                          }
                                          if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
                                            il2cpp_runtime_helper_02337ed0();
                                          }
                                          pSVar3 = (System_Delegate_o *)
                                                   il2cpp_runtime_helper_02300640(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x40,lVar5,
                                                                pSVar6);
                                          bVar7 = pSVar6 != pSVar3;
                                          pSVar6 = pSVar3;
                                        } while (bVar7);
                                        return;
                                      }
                                    }
                                    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
                                      il2cpp_runtime_helper_02337ed0();
                                    }
                                    pSVar2 = (System_Delegate_o *)
                                             il2cpp_runtime_helper_02300640(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x40,lVar5,pSVar6);
                                    bVar7 = pSVar6 != pSVar2;
                                    pSVar6 = pSVar2;
                                  } while (bVar7);
                                  return;
                                }
                              }
                              if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
                                il2cpp_runtime_helper_02337ed0();
                              }
                              pSVar3 = (System_Delegate_o *)
                                       il2cpp_runtime_helper_02300640(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x38,lVar5,pSVar6);
                              bVar7 = pSVar6 != pSVar3;
                              pSVar6 = pSVar3;
                            } while (bVar7);
                            return;
                          }
                        }
                        if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
                          il2cpp_runtime_helper_02337ed0();
                        }
                        pSVar2 = (System_Delegate_o *)
                                 il2cpp_runtime_helper_02300640(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x38,lVar5,pSVar6);
                        bVar7 = pSVar6 != pSVar2;
                        pSVar6 = pSVar2;
                      } while (bVar7);
                      return;
                    }
                  }
                  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pSVar3 = (System_Delegate_o *)
                           il2cpp_runtime_helper_02300640(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30,lVar5,pSVar6);
                  bVar7 = pSVar6 != pSVar3;
                  pSVar6 = pSVar3;
                } while (bVar7);
                return;
              }
            }
            if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar2 = (System_Delegate_o *)il2cpp_runtime_helper_02300640(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30,lVar5,pSVar6);
            bVar7 = pSVar6 != pSVar2;
            pSVar6 = pSVar2;
          } while (bVar7);
          return;
        }
        if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar3 = (System_Delegate_o *)il2cpp_runtime_helper_02300640(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x28,pSVar3,pSVar6);
        bVar7 = pSVar6 != pSVar3;
        pSVar6 = pSVar3;
      } while (bVar7);
      return;
    }
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar2 = (System_Delegate_o *)il2cpp_runtime_helper_02300640(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x28,pSVar2,pSVar6);
    bVar7 = pSVar6 != pSVar2;
    pSVar6 = pSVar2;
  } while (bVar7);
  return;
}


// Anticheat.ModeratorManager$$remove_PlayerListChanged
// il2cpp: void Anticheat_ModeratorManager__remove_PlayerListChanged (System_Action_o* value, const MethodInfo* method);
// 0x44d4000

void Anticheat_ModeratorManager__remove_PlayerListChanged(System_Action_o *value,MethodInfo *method)

{
  undefined8 uVar1;
  System_Delegate_o *pSVar2;
  System_Delegate_o *pSVar3;
  Il2CppObject *pIVar4;
  long lVar5;
  System_Delegate_o *pSVar6;
  bool bVar7;
  
  if (g_data_057aeb48 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb48 = '\x01';
  }
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar6 = *(System_Delegate_o **)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x28);
  do {
    pSVar2 = System_Delegate__Remove(pSVar6,(System_Delegate_o *)value,(MethodInfo *)0x0);
    if ((pSVar2 != (System_Delegate_o *)0x0) && (pSVar2->klass != TypeInfo_Action)) {
      il2cpp_runtime_helper_022b2fd0();
      if (g_data_057aeb49 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
        il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
        g_data_057aeb49 = '\x01';
      }
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar6 = *(System_Delegate_o **)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
      do {
        pSVar3 = System_Delegate__Combine(pSVar6,pSVar2,(MethodInfo *)0x0);
        uVar1 = TypeInfo_Action_string;
        lVar5 = 0;
        if (pSVar3 != (System_Delegate_o *)0x0) {
          lVar5 = il2cpp_runtime_helper_023051f0(pSVar3,TypeInfo_Action_string);
          if (lVar5 == 0) {
            il2cpp_runtime_helper_022b2fd0(pSVar3,uVar1);
            if (g_data_057aeb4a == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
              il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
              g_data_057aeb4a = '\x01';
            }
            if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar6 = *(System_Delegate_o **)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
            do {
              pSVar2 = System_Delegate__Remove(pSVar6,pSVar3,(MethodInfo *)0x0);
              uVar1 = TypeInfo_Action_string;
              lVar5 = 0;
              if (pSVar2 != (System_Delegate_o *)0x0) {
                lVar5 = il2cpp_runtime_helper_023051f0(pSVar2,TypeInfo_Action_string);
                if (lVar5 == 0) {
                  il2cpp_runtime_helper_022b2fd0(pSVar2,uVar1);
                  if (g_data_057aeb4b == '\0') {
                    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_RoomBanPage);
                    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
                    g_data_057aeb4b = '\x01';
                  }
                  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pSVar6 = *(System_Delegate_o **)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x38);
                  do {
                    pSVar3 = System_Delegate__Combine(pSVar6,pSVar2,(MethodInfo *)0x0);
                    uVar1 = TypeInfo_Action_RoomBanPage;
                    lVar5 = 0;
                    if (pSVar3 != (System_Delegate_o *)0x0) {
                      lVar5 = il2cpp_runtime_helper_023051f0(pSVar3,TypeInfo_Action_RoomBanPage);
                      if (lVar5 == 0) {
                        il2cpp_runtime_helper_022b2fd0(pSVar3,uVar1);
                        if (g_data_057aeb4c == '\0') {
                          il2cpp_runtime_helper_023445d0(&TypeInfo_Action_RoomBanPage);
                          il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
                          g_data_057aeb4c = '\x01';
                        }
                        if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
                          il2cpp_runtime_helper_02337ed0();
                        }
                        pSVar6 = *(System_Delegate_o **)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x38);
                        do {
                          pSVar2 = System_Delegate__Remove(pSVar6,pSVar3,(MethodInfo *)0x0);
                          uVar1 = TypeInfo_Action_RoomBanPage;
                          lVar5 = 0;
                          if (pSVar2 != (System_Delegate_o *)0x0) {
                            lVar5 = il2cpp_runtime_helper_023051f0(pSVar2,TypeInfo_Action_RoomBanPage);
                            if (lVar5 == 0) {
                              il2cpp_runtime_helper_022b2fd0(pSVar2,uVar1);
                              if (g_data_057aeb4d == '\0') {
                                il2cpp_runtime_helper_023445d0(&TypeInfo_Action_RegionBanPage);
                                il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
                                g_data_057aeb4d = '\x01';
                              }
                              if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
                                il2cpp_runtime_helper_02337ed0();
                              }
                              pSVar6 = *(System_Delegate_o **)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x40);
                              do {
                                pSVar3 = System_Delegate__Combine(pSVar6,pSVar2,(MethodInfo *)0x0);
                                uVar1 = TypeInfo_Action_RegionBanPage;
                                lVar5 = 0;
                                if (pSVar3 != (System_Delegate_o *)0x0) {
                                  lVar5 = il2cpp_runtime_helper_023051f0(pSVar3,TypeInfo_Action_RegionBanPage);
                                  if (lVar5 == 0) {
                                    il2cpp_runtime_helper_022b2fd0(pSVar3,uVar1);
                                    if (g_data_057aeb4e == '\0') {
                                      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_RegionBanPage);
                                      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
                                      g_data_057aeb4e = '\x01';
                                    }
                                    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
                                      il2cpp_runtime_helper_02337ed0();
                                    }
                                    pSVar6 = *(System_Delegate_o **)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x40);
                                    do {
                                      pSVar2 = System_Delegate__Remove(pSVar6,pSVar3,(MethodInfo *)0x0);
                                      uVar1 = TypeInfo_Action_RegionBanPage;
                                      lVar5 = 0;
                                      if (pSVar2 != (System_Delegate_o *)0x0) {
                                        lVar5 = il2cpp_runtime_helper_023051f0(pSVar2,TypeInfo_Action_RegionBanPage);
                                        if (lVar5 == 0) {
                                          il2cpp_runtime_helper_022b2fd0(pSVar2,uVar1);
                                          if (g_data_057aeb4f == '\0') {
                                            il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
                                            il2cpp_runtime_helper_023445d0(&MethodInfo_ModeratorManager_CreateSingleton_ModeratorManager);
                                            g_data_057aeb4f = '\x01';
                                          }
                                          if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
                                            il2cpp_runtime_helper_02337ed0();
                                          }
                                          pIVar4 = Utility_SingletonFactory__CreateSingleton_object_
                                                             ((Il2CppObject *)
                                                              **(undefined8 **)(TypeInfo_ModeratorManager + 0xb8),
                                                              MethodInfo_ModeratorManager_CreateSingleton_ModeratorManager);
                                          **(undefined8 **)(TypeInfo_ModeratorManager + 0xb8) = pIVar4;
                                          il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_ModeratorManager + 0xb8),pIVar4);
                                          return;
                                        }
                                      }
                                      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
                                        il2cpp_runtime_helper_02337ed0();
                                      }
                                      pSVar2 = (System_Delegate_o *)
                                               il2cpp_runtime_helper_02300640(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x40,lVar5,pSVar6
                                                           );
                                      bVar7 = pSVar6 != pSVar2;
                                      pSVar6 = pSVar2;
                                    } while (bVar7);
                                    return;
                                  }
                                }
                                if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
                                  il2cpp_runtime_helper_02337ed0();
                                }
                                pSVar3 = (System_Delegate_o *)
                                         il2cpp_runtime_helper_02300640(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x40,lVar5,pSVar6);
                                bVar7 = pSVar6 != pSVar3;
                                pSVar6 = pSVar3;
                              } while (bVar7);
                              return;
                            }
                          }
                          if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
                            il2cpp_runtime_helper_02337ed0();
                          }
                          pSVar2 = (System_Delegate_o *)
                                   il2cpp_runtime_helper_02300640(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x38,lVar5,pSVar6);
                          bVar7 = pSVar6 != pSVar2;
                          pSVar6 = pSVar2;
                        } while (bVar7);
                        return;
                      }
                    }
                    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pSVar3 = (System_Delegate_o *)
                             il2cpp_runtime_helper_02300640(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x38,lVar5,pSVar6);
                    bVar7 = pSVar6 != pSVar3;
                    pSVar6 = pSVar3;
                  } while (bVar7);
                  return;
                }
              }
              if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar2 = (System_Delegate_o *)il2cpp_runtime_helper_02300640(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30,lVar5,pSVar6);
              bVar7 = pSVar6 != pSVar2;
              pSVar6 = pSVar2;
            } while (bVar7);
            return;
          }
        }
        if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar3 = (System_Delegate_o *)il2cpp_runtime_helper_02300640(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30,lVar5,pSVar6);
        bVar7 = pSVar6 != pSVar3;
        pSVar6 = pSVar3;
      } while (bVar7);
      return;
    }
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar2 = (System_Delegate_o *)il2cpp_runtime_helper_02300640(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x28,pSVar2,pSVar6);
    bVar7 = pSVar6 != pSVar2;
    pSVar6 = pSVar2;
  } while (bVar7);
  return;
}


// Anticheat.ModeratorManager$$add_StatusMessage
// il2cpp: void Anticheat_ModeratorManager__add_StatusMessage (System_Action_string__o* value, const MethodInfo* method);
// 0x44d40e0

void Anticheat_ModeratorManager__add_StatusMessage(System_Action_string__o *value,MethodInfo *method)

{
  undefined8 uVar1;
  System_Delegate_o *pSVar2;
  System_Delegate_o *pSVar3;
  Il2CppObject *pIVar4;
  long lVar5;
  System_Delegate_o *pSVar6;
  bool bVar7;
  
  if (g_data_057aeb49 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb49 = '\x01';
  }
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar6 = *(System_Delegate_o **)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
  do {
    pSVar2 = System_Delegate__Combine(pSVar6,(System_Delegate_o *)value,(MethodInfo *)0x0);
    uVar1 = TypeInfo_Action_string;
    lVar5 = 0;
    if (pSVar2 != (System_Delegate_o *)0x0) {
      lVar5 = il2cpp_runtime_helper_023051f0(pSVar2,TypeInfo_Action_string);
      if (lVar5 == 0) {
        il2cpp_runtime_helper_022b2fd0(pSVar2,uVar1);
        if (g_data_057aeb4a == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
          il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
          g_data_057aeb4a = '\x01';
        }
        if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar6 = *(System_Delegate_o **)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
        do {
          pSVar3 = System_Delegate__Remove(pSVar6,pSVar2,(MethodInfo *)0x0);
          uVar1 = TypeInfo_Action_string;
          lVar5 = 0;
          if (pSVar3 != (System_Delegate_o *)0x0) {
            lVar5 = il2cpp_runtime_helper_023051f0(pSVar3,TypeInfo_Action_string);
            if (lVar5 == 0) {
              il2cpp_runtime_helper_022b2fd0(pSVar3,uVar1);
              if (g_data_057aeb4b == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_Action_RoomBanPage);
                il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
                g_data_057aeb4b = '\x01';
              }
              if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar6 = *(System_Delegate_o **)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x38);
              do {
                pSVar2 = System_Delegate__Combine(pSVar6,pSVar3,(MethodInfo *)0x0);
                uVar1 = TypeInfo_Action_RoomBanPage;
                lVar5 = 0;
                if (pSVar2 != (System_Delegate_o *)0x0) {
                  lVar5 = il2cpp_runtime_helper_023051f0(pSVar2,TypeInfo_Action_RoomBanPage);
                  if (lVar5 == 0) {
                    il2cpp_runtime_helper_022b2fd0(pSVar2,uVar1);
                    if (g_data_057aeb4c == '\0') {
                      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_RoomBanPage);
                      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
                      g_data_057aeb4c = '\x01';
                    }
                    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pSVar6 = *(System_Delegate_o **)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x38);
                    do {
                      pSVar3 = System_Delegate__Remove(pSVar6,pSVar2,(MethodInfo *)0x0);
                      uVar1 = TypeInfo_Action_RoomBanPage;
                      lVar5 = 0;
                      if (pSVar3 != (System_Delegate_o *)0x0) {
                        lVar5 = il2cpp_runtime_helper_023051f0(pSVar3,TypeInfo_Action_RoomBanPage);
                        if (lVar5 == 0) {
                          il2cpp_runtime_helper_022b2fd0(pSVar3,uVar1);
                          if (g_data_057aeb4d == '\0') {
                            il2cpp_runtime_helper_023445d0(&TypeInfo_Action_RegionBanPage);
                            il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
                            g_data_057aeb4d = '\x01';
                          }
                          if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
                            il2cpp_runtime_helper_02337ed0();
                          }
                          pSVar6 = *(System_Delegate_o **)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x40);
                          do {
                            pSVar2 = System_Delegate__Combine(pSVar6,pSVar3,(MethodInfo *)0x0);
                            uVar1 = TypeInfo_Action_RegionBanPage;
                            lVar5 = 0;
                            if (pSVar2 != (System_Delegate_o *)0x0) {
                              lVar5 = il2cpp_runtime_helper_023051f0(pSVar2,TypeInfo_Action_RegionBanPage);
                              if (lVar5 == 0) {
                                il2cpp_runtime_helper_022b2fd0(pSVar2,uVar1);
                                if (g_data_057aeb4e == '\0') {
                                  il2cpp_runtime_helper_023445d0(&TypeInfo_Action_RegionBanPage);
                                  il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
                                  g_data_057aeb4e = '\x01';
                                }
                                if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
                                  il2cpp_runtime_helper_02337ed0();
                                }
                                pSVar6 = *(System_Delegate_o **)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x40);
                                do {
                                  pSVar3 = System_Delegate__Remove(pSVar6,pSVar2,(MethodInfo *)0x0);
                                  uVar1 = TypeInfo_Action_RegionBanPage;
                                  lVar5 = 0;
                                  if (pSVar3 != (System_Delegate_o *)0x0) {
                                    lVar5 = il2cpp_runtime_helper_023051f0(pSVar3,TypeInfo_Action_RegionBanPage);
                                    if (lVar5 == 0) {
                                      il2cpp_runtime_helper_022b2fd0(pSVar3,uVar1);
                                      if (g_data_057aeb4f == '\0') {
                                        il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
                                        il2cpp_runtime_helper_023445d0(&MethodInfo_ModeratorManager_CreateSingleton_ModeratorManager);
                                        g_data_057aeb4f = '\x01';
                                      }
                                      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
                                        il2cpp_runtime_helper_02337ed0();
                                      }
                                      pIVar4 = Utility_SingletonFactory__CreateSingleton_object_
                                                         ((Il2CppObject *)
                                                          **(undefined8 **)(TypeInfo_ModeratorManager + 0xb8),MethodInfo_ModeratorManager_CreateSingleton_ModeratorManager)
                                      ;
                                      **(undefined8 **)(TypeInfo_ModeratorManager + 0xb8) = pIVar4;
                                      il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_ModeratorManager + 0xb8),pIVar4);
                                      return;
                                    }
                                  }
                                  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
                                    il2cpp_runtime_helper_02337ed0();
                                  }
                                  pSVar3 = (System_Delegate_o *)
                                           il2cpp_runtime_helper_02300640(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x40,lVar5,pSVar6);
                                  bVar7 = pSVar6 != pSVar3;
                                  pSVar6 = pSVar3;
                                } while (bVar7);
                                return;
                              }
                            }
                            if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
                              il2cpp_runtime_helper_02337ed0();
                            }
                            pSVar2 = (System_Delegate_o *)
                                     il2cpp_runtime_helper_02300640(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x40,lVar5,pSVar6);
                            bVar7 = pSVar6 != pSVar2;
                            pSVar6 = pSVar2;
                          } while (bVar7);
                          return;
                        }
                      }
                      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      pSVar3 = (System_Delegate_o *)
                               il2cpp_runtime_helper_02300640(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x38,lVar5,pSVar6);
                      bVar7 = pSVar6 != pSVar3;
                      pSVar6 = pSVar3;
                    } while (bVar7);
                    return;
                  }
                }
                if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar2 = (System_Delegate_o *)il2cpp_runtime_helper_02300640(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x38,lVar5,pSVar6)
                ;
                bVar7 = pSVar6 != pSVar2;
                pSVar6 = pSVar2;
              } while (bVar7);
              return;
            }
          }
          if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar3 = (System_Delegate_o *)il2cpp_runtime_helper_02300640(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30,lVar5,pSVar6);
          bVar7 = pSVar6 != pSVar3;
          pSVar6 = pSVar3;
        } while (bVar7);
        return;
      }
    }
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar2 = (System_Delegate_o *)il2cpp_runtime_helper_02300640(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30,lVar5,pSVar6);
    bVar7 = pSVar6 != pSVar2;
    pSVar6 = pSVar2;
  } while (bVar7);
  return;
}


// Anticheat.ModeratorManager$$remove_StatusMessage
// il2cpp: void Anticheat_ModeratorManager__remove_StatusMessage (System_Action_string__o* value, const MethodInfo* method);
// 0x44d41e0

void Anticheat_ModeratorManager__remove_StatusMessage(System_Action_string__o *value,MethodInfo *method)

{
  undefined8 uVar1;
  System_Delegate_o *pSVar2;
  System_Delegate_o *pSVar3;
  Il2CppObject *pIVar4;
  long lVar5;
  System_Delegate_o *pSVar6;
  bool bVar7;
  
  if (g_data_057aeb4a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb4a = '\x01';
  }
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar6 = *(System_Delegate_o **)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
  do {
    pSVar2 = System_Delegate__Remove(pSVar6,(System_Delegate_o *)value,(MethodInfo *)0x0);
    uVar1 = TypeInfo_Action_string;
    lVar5 = 0;
    if (pSVar2 != (System_Delegate_o *)0x0) {
      lVar5 = il2cpp_runtime_helper_023051f0(pSVar2,TypeInfo_Action_string);
      if (lVar5 == 0) {
        il2cpp_runtime_helper_022b2fd0(pSVar2,uVar1);
        if (g_data_057aeb4b == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Action_RoomBanPage);
          il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
          g_data_057aeb4b = '\x01';
        }
        if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar6 = *(System_Delegate_o **)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x38);
        do {
          pSVar3 = System_Delegate__Combine(pSVar6,pSVar2,(MethodInfo *)0x0);
          uVar1 = TypeInfo_Action_RoomBanPage;
          lVar5 = 0;
          if (pSVar3 != (System_Delegate_o *)0x0) {
            lVar5 = il2cpp_runtime_helper_023051f0(pSVar3,TypeInfo_Action_RoomBanPage);
            if (lVar5 == 0) {
              il2cpp_runtime_helper_022b2fd0(pSVar3,uVar1);
              if (g_data_057aeb4c == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_Action_RoomBanPage);
                il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
                g_data_057aeb4c = '\x01';
              }
              if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar6 = *(System_Delegate_o **)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x38);
              do {
                pSVar2 = System_Delegate__Remove(pSVar6,pSVar3,(MethodInfo *)0x0);
                uVar1 = TypeInfo_Action_RoomBanPage;
                lVar5 = 0;
                if (pSVar2 != (System_Delegate_o *)0x0) {
                  lVar5 = il2cpp_runtime_helper_023051f0(pSVar2,TypeInfo_Action_RoomBanPage);
                  if (lVar5 == 0) {
                    il2cpp_runtime_helper_022b2fd0(pSVar2,uVar1);
                    if (g_data_057aeb4d == '\0') {
                      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_RegionBanPage);
                      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
                      g_data_057aeb4d = '\x01';
                    }
                    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pSVar6 = *(System_Delegate_o **)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x40);
                    do {
                      pSVar3 = System_Delegate__Combine(pSVar6,pSVar2,(MethodInfo *)0x0);
                      uVar1 = TypeInfo_Action_RegionBanPage;
                      lVar5 = 0;
                      if (pSVar3 != (System_Delegate_o *)0x0) {
                        lVar5 = il2cpp_runtime_helper_023051f0(pSVar3,TypeInfo_Action_RegionBanPage);
                        if (lVar5 == 0) {
                          il2cpp_runtime_helper_022b2fd0(pSVar3,uVar1);
                          if (g_data_057aeb4e == '\0') {
                            il2cpp_runtime_helper_023445d0(&TypeInfo_Action_RegionBanPage);
                            il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
                            g_data_057aeb4e = '\x01';
                          }
                          if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
                            il2cpp_runtime_helper_02337ed0();
                          }
                          pSVar6 = *(System_Delegate_o **)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x40);
                          do {
                            pSVar2 = System_Delegate__Remove(pSVar6,pSVar3,(MethodInfo *)0x0);
                            uVar1 = TypeInfo_Action_RegionBanPage;
                            lVar5 = 0;
                            if (pSVar2 != (System_Delegate_o *)0x0) {
                              lVar5 = il2cpp_runtime_helper_023051f0(pSVar2,TypeInfo_Action_RegionBanPage);
                              if (lVar5 == 0) {
                                il2cpp_runtime_helper_022b2fd0(pSVar2,uVar1);
                                if (g_data_057aeb4f == '\0') {
                                  il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
                                  il2cpp_runtime_helper_023445d0(&MethodInfo_ModeratorManager_CreateSingleton_ModeratorManager);
                                  g_data_057aeb4f = '\x01';
                                }
                                if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
                                  il2cpp_runtime_helper_02337ed0();
                                }
                                pIVar4 = Utility_SingletonFactory__CreateSingleton_object_
                                                   ((Il2CppObject *)**(undefined8 **)(TypeInfo_ModeratorManager + 0xb8),
                                                    MethodInfo_ModeratorManager_CreateSingleton_ModeratorManager);
                                **(undefined8 **)(TypeInfo_ModeratorManager + 0xb8) = pIVar4;
                                il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_ModeratorManager + 0xb8),pIVar4);
                                return;
                              }
                            }
                            if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
                              il2cpp_runtime_helper_02337ed0();
                            }
                            pSVar2 = (System_Delegate_o *)
                                     il2cpp_runtime_helper_02300640(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x40,lVar5,pSVar6);
                            bVar7 = pSVar6 != pSVar2;
                            pSVar6 = pSVar2;
                          } while (bVar7);
                          return;
                        }
                      }
                      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      pSVar3 = (System_Delegate_o *)
                               il2cpp_runtime_helper_02300640(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x40,lVar5,pSVar6);
                      bVar7 = pSVar6 != pSVar3;
                      pSVar6 = pSVar3;
                    } while (bVar7);
                    return;
                  }
                }
                if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar2 = (System_Delegate_o *)il2cpp_runtime_helper_02300640(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x38,lVar5,pSVar6)
                ;
                bVar7 = pSVar6 != pSVar2;
                pSVar6 = pSVar2;
              } while (bVar7);
              return;
            }
          }
          if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar3 = (System_Delegate_o *)il2cpp_runtime_helper_02300640(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x38,lVar5,pSVar6);
          bVar7 = pSVar6 != pSVar3;
          pSVar6 = pSVar3;
        } while (bVar7);
        return;
      }
    }
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar2 = (System_Delegate_o *)il2cpp_runtime_helper_02300640(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30,lVar5,pSVar6);
    bVar7 = pSVar6 != pSVar2;
    pSVar6 = pSVar2;
  } while (bVar7);
  return;
}


// Anticheat.ModeratorManager$$add_RoomBanListReceived
// il2cpp: void Anticheat_ModeratorManager__add_RoomBanListReceived (System_Action_RoomBanPage__o* value, const MethodInfo* method);
// 0x44d42e0

void Anticheat_ModeratorManager__add_RoomBanListReceived
               (System_Action_RoomBanPage__o *value,MethodInfo *method)

{
  undefined8 uVar1;
  System_Delegate_o *pSVar2;
  System_Delegate_o *pSVar3;
  Il2CppObject *pIVar4;
  long lVar5;
  System_Delegate_o *pSVar6;
  bool bVar7;
  
  if (g_data_057aeb4b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_RoomBanPage);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb4b = '\x01';
  }
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar6 = *(System_Delegate_o **)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x38);
  do {
    pSVar2 = System_Delegate__Combine(pSVar6,(System_Delegate_o *)value,(MethodInfo *)0x0);
    uVar1 = TypeInfo_Action_RoomBanPage;
    lVar5 = 0;
    if (pSVar2 != (System_Delegate_o *)0x0) {
      lVar5 = il2cpp_runtime_helper_023051f0(pSVar2,TypeInfo_Action_RoomBanPage);
      if (lVar5 == 0) {
        il2cpp_runtime_helper_022b2fd0(pSVar2,uVar1);
        if (g_data_057aeb4c == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Action_RoomBanPage);
          il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
          g_data_057aeb4c = '\x01';
        }
        if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar6 = *(System_Delegate_o **)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x38);
        do {
          pSVar3 = System_Delegate__Remove(pSVar6,pSVar2,(MethodInfo *)0x0);
          uVar1 = TypeInfo_Action_RoomBanPage;
          lVar5 = 0;
          if (pSVar3 != (System_Delegate_o *)0x0) {
            lVar5 = il2cpp_runtime_helper_023051f0(pSVar3,TypeInfo_Action_RoomBanPage);
            if (lVar5 == 0) {
              il2cpp_runtime_helper_022b2fd0(pSVar3,uVar1);
              if (g_data_057aeb4d == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_Action_RegionBanPage);
                il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
                g_data_057aeb4d = '\x01';
              }
              if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar6 = *(System_Delegate_o **)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x40);
              do {
                pSVar2 = System_Delegate__Combine(pSVar6,pSVar3,(MethodInfo *)0x0);
                uVar1 = TypeInfo_Action_RegionBanPage;
                lVar5 = 0;
                if (pSVar2 != (System_Delegate_o *)0x0) {
                  lVar5 = il2cpp_runtime_helper_023051f0(pSVar2,TypeInfo_Action_RegionBanPage);
                  if (lVar5 == 0) {
                    il2cpp_runtime_helper_022b2fd0(pSVar2,uVar1);
                    if (g_data_057aeb4e == '\0') {
                      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_RegionBanPage);
                      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
                      g_data_057aeb4e = '\x01';
                    }
                    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pSVar6 = *(System_Delegate_o **)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x40);
                    do {
                      pSVar3 = System_Delegate__Remove(pSVar6,pSVar2,(MethodInfo *)0x0);
                      uVar1 = TypeInfo_Action_RegionBanPage;
                      lVar5 = 0;
                      if (pSVar3 != (System_Delegate_o *)0x0) {
                        lVar5 = il2cpp_runtime_helper_023051f0(pSVar3,TypeInfo_Action_RegionBanPage);
                        if (lVar5 == 0) {
                          il2cpp_runtime_helper_022b2fd0(pSVar3,uVar1);
                          if (g_data_057aeb4f == '\0') {
                            il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
                            il2cpp_runtime_helper_023445d0(&MethodInfo_ModeratorManager_CreateSingleton_ModeratorManager);
                            g_data_057aeb4f = '\x01';
                          }
                          if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
                            il2cpp_runtime_helper_02337ed0();
                          }
                          pIVar4 = Utility_SingletonFactory__CreateSingleton_object_
                                             ((Il2CppObject *)**(undefined8 **)(TypeInfo_ModeratorManager + 0xb8),
                                              MethodInfo_ModeratorManager_CreateSingleton_ModeratorManager);
                          **(undefined8 **)(TypeInfo_ModeratorManager + 0xb8) = pIVar4;
                          il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_ModeratorManager + 0xb8),pIVar4);
                          return;
                        }
                      }
                      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      pSVar3 = (System_Delegate_o *)
                               il2cpp_runtime_helper_02300640(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x40,lVar5,pSVar6);
                      bVar7 = pSVar6 != pSVar3;
                      pSVar6 = pSVar3;
                    } while (bVar7);
                    return;
                  }
                }
                if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar2 = (System_Delegate_o *)il2cpp_runtime_helper_02300640(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x40,lVar5,pSVar6)
                ;
                bVar7 = pSVar6 != pSVar2;
                pSVar6 = pSVar2;
              } while (bVar7);
              return;
            }
          }
          if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar3 = (System_Delegate_o *)il2cpp_runtime_helper_02300640(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x38,lVar5,pSVar6);
          bVar7 = pSVar6 != pSVar3;
          pSVar6 = pSVar3;
        } while (bVar7);
        return;
      }
    }
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar2 = (System_Delegate_o *)il2cpp_runtime_helper_02300640(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x38,lVar5,pSVar6);
    bVar7 = pSVar6 != pSVar2;
    pSVar6 = pSVar2;
  } while (bVar7);
  return;
}


// Anticheat.ModeratorManager$$remove_RoomBanListReceived
// il2cpp: void Anticheat_ModeratorManager__remove_RoomBanListReceived (System_Action_RoomBanPage__o* value, const MethodInfo* method);
// 0x44d43e0

void Anticheat_ModeratorManager__remove_RoomBanListReceived
               (System_Action_RoomBanPage__o *value,MethodInfo *method)

{
  undefined8 uVar1;
  System_Delegate_o *pSVar2;
  System_Delegate_o *pSVar3;
  Il2CppObject *pIVar4;
  long lVar5;
  System_Delegate_o *pSVar6;
  bool bVar7;
  
  if (g_data_057aeb4c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_RoomBanPage);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb4c = '\x01';
  }
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar6 = *(System_Delegate_o **)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x38);
  do {
    pSVar2 = System_Delegate__Remove(pSVar6,(System_Delegate_o *)value,(MethodInfo *)0x0);
    uVar1 = TypeInfo_Action_RoomBanPage;
    lVar5 = 0;
    if (pSVar2 != (System_Delegate_o *)0x0) {
      lVar5 = il2cpp_runtime_helper_023051f0(pSVar2,TypeInfo_Action_RoomBanPage);
      if (lVar5 == 0) {
        il2cpp_runtime_helper_022b2fd0(pSVar2,uVar1);
        if (g_data_057aeb4d == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Action_RegionBanPage);
          il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
          g_data_057aeb4d = '\x01';
        }
        if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar6 = *(System_Delegate_o **)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x40);
        do {
          pSVar3 = System_Delegate__Combine(pSVar6,pSVar2,(MethodInfo *)0x0);
          uVar1 = TypeInfo_Action_RegionBanPage;
          lVar5 = 0;
          if (pSVar3 != (System_Delegate_o *)0x0) {
            lVar5 = il2cpp_runtime_helper_023051f0(pSVar3,TypeInfo_Action_RegionBanPage);
            if (lVar5 == 0) {
              il2cpp_runtime_helper_022b2fd0(pSVar3,uVar1);
              if (g_data_057aeb4e == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_Action_RegionBanPage);
                il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
                g_data_057aeb4e = '\x01';
              }
              if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar6 = *(System_Delegate_o **)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x40);
              do {
                pSVar2 = System_Delegate__Remove(pSVar6,pSVar3,(MethodInfo *)0x0);
                uVar1 = TypeInfo_Action_RegionBanPage;
                lVar5 = 0;
                if (pSVar2 != (System_Delegate_o *)0x0) {
                  lVar5 = il2cpp_runtime_helper_023051f0(pSVar2,TypeInfo_Action_RegionBanPage);
                  if (lVar5 == 0) {
                    il2cpp_runtime_helper_022b2fd0(pSVar2,uVar1);
                    if (g_data_057aeb4f == '\0') {
                      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
                      il2cpp_runtime_helper_023445d0(&MethodInfo_ModeratorManager_CreateSingleton_ModeratorManager);
                      g_data_057aeb4f = '\x01';
                    }
                    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pIVar4 = Utility_SingletonFactory__CreateSingleton_object_
                                       ((Il2CppObject *)**(undefined8 **)(TypeInfo_ModeratorManager + 0xb8),MethodInfo_ModeratorManager_CreateSingleton_ModeratorManager);
                    **(undefined8 **)(TypeInfo_ModeratorManager + 0xb8) = pIVar4;
                    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_ModeratorManager + 0xb8),pIVar4);
                    return;
                  }
                }
                if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar2 = (System_Delegate_o *)il2cpp_runtime_helper_02300640(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x40,lVar5,pSVar6)
                ;
                bVar7 = pSVar6 != pSVar2;
                pSVar6 = pSVar2;
              } while (bVar7);
              return;
            }
          }
          if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar3 = (System_Delegate_o *)il2cpp_runtime_helper_02300640(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x40,lVar5,pSVar6);
          bVar7 = pSVar6 != pSVar3;
          pSVar6 = pSVar3;
        } while (bVar7);
        return;
      }
    }
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar2 = (System_Delegate_o *)il2cpp_runtime_helper_02300640(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x38,lVar5,pSVar6);
    bVar7 = pSVar6 != pSVar2;
    pSVar6 = pSVar2;
  } while (bVar7);
  return;
}


// Anticheat.ModeratorManager$$add_RegionBanListReceived
// il2cpp: void Anticheat_ModeratorManager__add_RegionBanListReceived (System_Action_RegionBanPage__o* value, const MethodInfo* method);
// 0x44d44e0

void Anticheat_ModeratorManager__add_RegionBanListReceived
               (System_Action_RegionBanPage__o *value,MethodInfo *method)

{
  undefined8 uVar1;
  System_Delegate_o *pSVar2;
  System_Delegate_o *pSVar3;
  Il2CppObject *pIVar4;
  long lVar5;
  System_Delegate_o *pSVar6;
  bool bVar7;
  
  if (g_data_057aeb4d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_RegionBanPage);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb4d = '\x01';
  }
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar6 = *(System_Delegate_o **)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x40);
  do {
    pSVar2 = System_Delegate__Combine(pSVar6,(System_Delegate_o *)value,(MethodInfo *)0x0);
    uVar1 = TypeInfo_Action_RegionBanPage;
    lVar5 = 0;
    if (pSVar2 != (System_Delegate_o *)0x0) {
      lVar5 = il2cpp_runtime_helper_023051f0(pSVar2,TypeInfo_Action_RegionBanPage);
      if (lVar5 == 0) {
        il2cpp_runtime_helper_022b2fd0(pSVar2,uVar1);
        if (g_data_057aeb4e == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Action_RegionBanPage);
          il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
          g_data_057aeb4e = '\x01';
        }
        if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar6 = *(System_Delegate_o **)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x40);
        do {
          pSVar3 = System_Delegate__Remove(pSVar6,pSVar2,(MethodInfo *)0x0);
          uVar1 = TypeInfo_Action_RegionBanPage;
          lVar5 = 0;
          if (pSVar3 != (System_Delegate_o *)0x0) {
            lVar5 = il2cpp_runtime_helper_023051f0(pSVar3,TypeInfo_Action_RegionBanPage);
            if (lVar5 == 0) {
              il2cpp_runtime_helper_022b2fd0(pSVar3,uVar1);
              if (g_data_057aeb4f == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
                il2cpp_runtime_helper_023445d0(&MethodInfo_ModeratorManager_CreateSingleton_ModeratorManager);
                g_data_057aeb4f = '\x01';
              }
              if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pIVar4 = Utility_SingletonFactory__CreateSingleton_object_
                                 ((Il2CppObject *)**(undefined8 **)(TypeInfo_ModeratorManager + 0xb8),MethodInfo_ModeratorManager_CreateSingleton_ModeratorManager);
              **(undefined8 **)(TypeInfo_ModeratorManager + 0xb8) = pIVar4;
              il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_ModeratorManager + 0xb8),pIVar4);
              return;
            }
          }
          if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar3 = (System_Delegate_o *)il2cpp_runtime_helper_02300640(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x40,lVar5,pSVar6);
          bVar7 = pSVar6 != pSVar3;
          pSVar6 = pSVar3;
        } while (bVar7);
        return;
      }
    }
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar2 = (System_Delegate_o *)il2cpp_runtime_helper_02300640(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x40,lVar5,pSVar6);
    bVar7 = pSVar6 != pSVar2;
    pSVar6 = pSVar2;
  } while (bVar7);
  return;
}


// Anticheat.ModeratorManager$$remove_RegionBanListReceived
// il2cpp: void Anticheat_ModeratorManager__remove_RegionBanListReceived (System_Action_RegionBanPage__o* value, const MethodInfo* method);
// 0x44d45e0

void Anticheat_ModeratorManager__remove_RegionBanListReceived
               (System_Action_RegionBanPage__o *value,MethodInfo *method)

{
  undefined8 uVar1;
  System_Delegate_o *pSVar2;
  Il2CppObject *pIVar3;
  long lVar4;
  System_Delegate_o *source;
  bool bVar5;
  
  if (g_data_057aeb4e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_RegionBanPage);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb4e = '\x01';
  }
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  source = *(System_Delegate_o **)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x40);
  do {
    pSVar2 = System_Delegate__Remove(source,(System_Delegate_o *)value,(MethodInfo *)0x0);
    uVar1 = TypeInfo_Action_RegionBanPage;
    lVar4 = 0;
    if (pSVar2 != (System_Delegate_o *)0x0) {
      lVar4 = il2cpp_runtime_helper_023051f0(pSVar2,TypeInfo_Action_RegionBanPage);
      if (lVar4 == 0) {
        il2cpp_runtime_helper_022b2fd0(pSVar2,uVar1);
        if (g_data_057aeb4f == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
          il2cpp_runtime_helper_023445d0(&MethodInfo_ModeratorManager_CreateSingleton_ModeratorManager);
          g_data_057aeb4f = '\x01';
        }
        if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pIVar3 = Utility_SingletonFactory__CreateSingleton_object_
                           ((Il2CppObject *)**(undefined8 **)(TypeInfo_ModeratorManager + 0xb8),MethodInfo_ModeratorManager_CreateSingleton_ModeratorManager);
        **(undefined8 **)(TypeInfo_ModeratorManager + 0xb8) = pIVar3;
        il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_ModeratorManager + 0xb8),pIVar3);
        return;
      }
    }
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar2 = (System_Delegate_o *)il2cpp_runtime_helper_02300640(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x40,lVar4,source);
    bVar5 = source != pSVar2;
    source = pSVar2;
  } while (bVar5);
  return;
}


// Anticheat.ModeratorManager$$Init
// il2cpp: void Anticheat_ModeratorManager__Init (const MethodInfo* method);
// 0x44d46e0

void Anticheat_ModeratorManager__Init(MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if (g_data_057aeb4f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ModeratorManager_CreateSingleton_ModeratorManager);
    g_data_057aeb4f = '\x01';
  }
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar1 = Utility_SingletonFactory__CreateSingleton_object_
                     ((Il2CppObject *)**(undefined8 **)(TypeInfo_ModeratorManager + 0xb8),MethodInfo_ModeratorManager_CreateSingleton_ModeratorManager);
  **(undefined8 **)(TypeInfo_ModeratorManager + 0xb8) = pIVar1;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_ModeratorManager + 0xb8),pIVar1);
  return;
}


// Anticheat.ModeratorManager$$OnEnable
// il2cpp: void Anticheat_ModeratorManager__OnEnable (Anticheat_ModeratorManager_o* __this, const MethodInfo* method);
// 0x44d4760

void Anticheat_ModeratorManager__OnEnable(Anticheat_ModeratorManager_o *__this,MethodInfo *method)

{
  System_Action_o *pSVar1;
  
  if (g_data_057aeb50 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ClearAuth);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_UpdateAuthFromRoles);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    g_data_057aeb50 = '\x01';
  }
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Photon_Pun_PhotonNetwork__AddCallbackTarget((Il2CppObject *)__this,(MethodInfo *)0x0);
  pSVar1 = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
  System_Action___ctor();
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ApplicationManagers_AccountManager__add_OnLoggedIn(pSVar1,(MethodInfo *)0x0);
  pSVar1 = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
  System_Action___ctor();
  ApplicationManagers_AccountManager__add_OnLoggedOut(pSVar1,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager$$OnDisable
// il2cpp: void Anticheat_ModeratorManager__OnDisable (Anticheat_ModeratorManager_o* __this, const MethodInfo* method);
// 0x44d4860

void Anticheat_ModeratorManager__OnDisable(Anticheat_ModeratorManager_o *__this,MethodInfo *method)

{
  System_Action_o *pSVar1;
  
  if (g_data_057aeb51 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ClearAuth);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_UpdateAuthFromRoles);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    g_data_057aeb51 = '\x01';
  }
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Photon_Pun_PhotonNetwork__RemoveCallbackTarget((Il2CppObject *)__this,(MethodInfo *)0x0);
  pSVar1 = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
  System_Action___ctor();
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ApplicationManagers_AccountManager__remove_OnLoggedIn(pSVar1,(MethodInfo *)0x0);
  pSVar1 = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
  System_Action___ctor();
  ApplicationManagers_AccountManager__remove_OnLoggedOut(pSVar1,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager$$Update
// il2cpp: void Anticheat_ModeratorManager__Update (Anticheat_ModeratorManager_o* __this, const MethodInfo* method);
// 0x44d4960

void Anticheat_ModeratorManager__Update(Anticheat_ModeratorManager_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_string__float__o *pSVar3;
  System_Object_array *pSVar4;
  System_Collections_Generic_Dictionary_object__object__o *pSVar5;
  long lVar6;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o __this_03;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o __this_04;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o __this_05;
  int32_t iVar7;
  bool_conflict bVar8;
  Il2CppObject *key;
  long *plVar9;
  float extraout_XMM0_Da;
  float fVar10;
  undefined1 auVar11 [12];
  System_Collections_Generic_List_object__o *__this_06;
  float in_stack_ffffffffffffff50;
  float in_stack_ffffffffffffff54;
  System_Collections_Generic_List_Enumerator_T__c *pSVar12;
  Il2CppRGCTXData *pIVar13;
  _union_231613 key_00;
  _union_231613 _Var14;
  Il2CppObject *pIStack_90;
  undefined1 auStack_88 [48];
  undefined1 auStack_58 [16];
  _union_231613 _Stack_48;
  Il2CppRGCTXData *pIStack_40;
  _union_249689 _Stack_38;
  
  if (g_data_057aeb58 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_String_System);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_String_System_Single_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Key);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057aeb58 = '\x01';
  }
  auStack_88._16_8_ = (Il2CppObject *)0x0;
  auStack_88._24_8_ = (Il2CppRGCTXData *)0x0;
  auStack_88._0_8_ = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  auStack_88._8_8_ = (Il2CppRGCTXData *)0x0;
  auStack_88._32_8_ = (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *)0x0;
  pSVar12 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar13 = (Il2CppRGCTXData *)0x0;
  key_00.genericMethod = (Il2CppObject *)0x0;
  pIStack_90 = (Il2CppObject *)0x0;
  pSVar3 = (__this->fields)._pendingTimestamps;
  if (pSVar3 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) goto label_044d4dae;
  iVar7 = System_Collections_Generic_Dictionary_object__float___get_Count
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,MethodInfo_Int32_get_Count);
  if (iVar7 == 0) {
    return;
  }
  in_stack_ffffffffffffff50 = UnityEngine_Time__get_realtimeSinceStartup((MethodInfo *)0x0);
  pSVar3 = (__this->fields)._pendingTimestamps;
  if (pSVar3 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) goto label_044d4dae;
  System_Collections_Generic_Dictionary_object__float___GetEnumerator
            ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)auStack_58,
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_String_System);
  auStack_88._32_8_ = _Stack_38;
  auStack_88._16_8_ = _Stack_48;
  auStack_88._24_8_ = pIStack_40;
  auStack_88._0_8_ = auStack_58._0_8_;
  auStack_88._8_8_ = auStack_58._8_8_;
  __this_06 = (System_Collections_Generic_List_object__o *)0x0;
  while( true ) {
    do {
      __this_02.fields._version = (int32_t)in_stack_ffffffffffffff50;
      __this_02.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_06;
      __this_02.fields._index = (int32_t)in_stack_ffffffffffffff54;
      __this_02.fields._current.fields.key = (Il2CppObject *)pSVar12;
      __this_02.fields._current.fields.value = (Il2CppObject *)pIVar13;
      __this_02.fields._32_8_ = key_00.genericMethod;
      bVar8 = System_Collections_Generic_Dictionary_Enumerator_object__float___MoveNext
                        (__this_02,(MethodInfo_32526E0 *)auStack_88);
      if ((char)bVar8 == '\0') {
        __this_03.fields._version = (int32_t)in_stack_ffffffffffffff50;
        __this_03.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_06;
        __this_03.fields._index = (int32_t)in_stack_ffffffffffffff54;
        __this_03.fields._current.fields.key = (Il2CppObject *)pSVar12;
        __this_03.fields._current.fields.value = (Il2CppObject *)pIVar13;
        __this_03.fields._32_8_ = key_00.genericMethod;
        System_Collections_Generic_Dictionary_Enumerator_object__float___Dispose
                  (__this_03,(MethodInfo_3252810 *)auStack_88);
        goto label_044d4c46;
      }
      key = (Il2CppObject *)il2cpp_runtime_helper_044dabd0((MethodInfo_32526E0 *)auStack_88,MethodInfo_KeyValuePair_2_System_String_System_Single_get_Current);
      pSVar3 = (__this->fields)._pendingTimeouts;
      in_stack_ffffffffffffff54 = extraout_XMM0_Da;
      if (pSVar3 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        goto label_044d4d95;
      }
      fVar10 = System_Collections_Generic_Dictionary_object__float___get_Item
                         ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,key,MethodInfo_Single_get_Item);
    } while (in_stack_ffffffffffffff50 - in_stack_ffffffffffffff54 < fVar10);
    if (__this_06 == (System_Collections_Generic_List_object__o *)0x0) {
      __this_06 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
      System_Collections_Generic_List_object____ctor(__this_06,MethodInfo_List_1_System_String);
      if (__this_06 == (System_Collections_Generic_List_object__o *)0x0) goto label_044d4db3;
    }
    lVar6 = MethodInfo_Void_Add;
    piVar1 = &(__this_06->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar4 = (__this_06->fields)._items;
    if (pSVar4 == (System_Object_array *)0x0) break;
    uVar2 = (__this_06->fields)._size;
    if (uVar2 < (uint)pSVar4->max_length) {
      (__this_06->fields)._size = uVar2 + 1;
      pSVar4->m_Items[(int)uVar2] = key;
      il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar2,key);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                (__this_06,key,*(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
    }
  }
label_044d4dbe:
  auVar11 = il2cpp_runtime_helper_022b2c90();
  if (auVar11._8_4_ == 1) {
    plVar9 = (long *)__cxa_begin_catch(auVar11._0_8_);
    lVar6 = *plVar9;
    __cxa_end_catch();
    __this_04.fields._version = (int32_t)in_stack_ffffffffffffff50;
    __this_04.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_06;
    __this_04.fields._index = (int32_t)in_stack_ffffffffffffff54;
    __this_04.fields._current.fields.key = (Il2CppObject *)pSVar12;
    __this_04.fields._current.fields.value = (Il2CppObject *)pIVar13;
    __this_04.fields._32_8_ = key_00.genericMethod;
    System_Collections_Generic_Dictionary_Enumerator_object__float___Dispose
              (__this_04,(MethodInfo_3252810 *)auStack_88);
    if (lVar6 == 0) {
label_044d4c46:
      if (__this_06 == (System_Collections_Generic_List_object__o *)0x0) {
        return;
      }
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)auStack_58,__this_06,MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
      pSVar12 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_58._0_8_;
      pIVar13 = (Il2CppRGCTXData *)auStack_58._8_8_;
      key_00 = _Stack_48;
      while( true ) {
        __this_00.fields._index = (int32_t)in_stack_ffffffffffffff50;
        __this_00.fields._list = (System_Collections_Generic_List_T__o *)__this_06;
        __this_00.fields._version = (int32_t)in_stack_ffffffffffffff54;
        __this_00.fields._current = (Il2CppObject *)pSVar12;
        bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff58);
        if ((char)bVar8 == '\0') {
          __this_01.fields._index = (int32_t)in_stack_ffffffffffffff50;
          __this_01.fields._list = (System_Collections_Generic_List_T__o *)__this_06;
          __this_01.fields._version = (int32_t)in_stack_ffffffffffffff54;
          __this_01.fields._current = (Il2CppObject *)pSVar12;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffff58);
          return;
        }
        pSVar3 = (__this->fields)._pendingTimestamps;
        if (pSVar3 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) goto label_044d4d95;
        _Var14 = key_00;
        System_Collections_Generic_Dictionary_object__float___Remove
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,key_00.genericMethod,
                   MethodInfo_Boolean_Remove);
        pSVar3 = (__this->fields)._pendingTimeouts;
        if (pSVar3 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) goto label_044d4d9a;
        System_Collections_Generic_Dictionary_object__float___Remove
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,key_00.genericMethod,
                   MethodInfo_Boolean_Remove);
        pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._pendingCallbacks
        ;
        if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_044d4d9f;
        System_Collections_Generic_Dictionary_object__object___Remove
                  (pSVar5,key_00.genericMethod,MethodInfo_Boolean_Remove);
        pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
                 (__this->fields)._pendingTimeoutCallbacks;
        if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_044d4da4;
        System_Collections_Generic_Dictionary_object__object___TryGetValue
                  (pSVar5,key_00.genericMethod,&pIStack_90,MethodInfo_Boolean_TryGetValue);
        pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
                 (__this->fields)._pendingTimeoutCallbacks;
        if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
        System_Collections_Generic_Dictionary_object__object___Remove
                  (pSVar5,key_00.genericMethod,MethodInfo_Boolean_Remove);
        key_00 = _Var14;
        if (pIStack_90 != (Il2CppObject *)0x0) {
          (*pIStack_90[1].monitor)(pIStack_90[4].klass,pIStack_90[2].monitor);
          key_00 = _Var14;
        }
      }
      goto label_044d4da9;
    }
    il2cpp_runtime_helper_022fefe0(lVar6);
  }
  __this_05.fields._version = (int32_t)in_stack_ffffffffffffff50;
  __this_05.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_06;
  __this_05.fields._index = (int32_t)in_stack_ffffffffffffff54;
  __this_05.fields._current.fields.key = (Il2CppObject *)pSVar12;
  __this_05.fields._current.fields.value = (Il2CppObject *)pIVar13;
  __this_05.fields._32_8_ = key_00.genericMethod;
  System_Collections_Generic_Dictionary_Enumerator_object__float___Dispose
            (__this_05,(MethodInfo_3252810 *)auStack_88);
  _Unwind_Resume(auVar11._0_8_);
label_044d4d95:
  il2cpp_runtime_helper_022b2c90();
  _Var14 = key_00;
label_044d4d9a:
  il2cpp_runtime_helper_022b2c90();
label_044d4d9f:
  il2cpp_runtime_helper_022b2c90();
label_044d4da4:
  il2cpp_runtime_helper_022b2c90();
label_044d4da9:
  il2cpp_runtime_helper_022b2c90();
  key_00 = _Var14;
label_044d4dae:
  il2cpp_runtime_helper_022b2c90();
label_044d4db3:
  __this_06 = (System_Collections_Generic_List_object__o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  goto label_044d4dbe;
}


// Anticheat.ModeratorManager$$OnEvent
// il2cpp: void Anticheat_ModeratorManager__OnEvent (Anticheat_ModeratorManager_o* __this, ExitGames_Client_Photon_EventData_o* photonEvent, const MethodInfo* method);
// 0x44d4f90

void Anticheat_ModeratorManager__OnEvent
               (Anticheat_ModeratorManager_o *__this,ExitGames_Client_Photon_EventData_o *photonEvent,
               MethodInfo *method)

{
  uint8_t uVar1;
  ExitGames_Client_Photon_ParameterDictionary_o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  System_Collections_Generic_Dictionary_string__float__o *pSVar3;
  long lVar4;
  int32_t iVar5;
  bool_conflict bVar6;
  long *plVar7;
  MethodInfo_3855510 *method_00;
  MethodInfo_3855480 *method_01;
  MethodInfo_3855510 *extraout_RDX;
  MethodInfo_3855570 *extraout_RDX_00;
  MethodInfo_3855480 *pMVar8;
  MethodInfo_3855480 *extraout_RDX_01;
  MethodInfo_3855570 *method_02;
  MethodInfo_3855570 *extraout_RDX_02;
  MethodInfo_3855570 *method_03;
  MethodInfo *method_04;
  System_Collections_Generic_Dictionary_byte__object__o *unaff_R15;
  ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__o EVar9;
  System_Collections_Generic_KeyValuePair_K__V__o SVar10;
  undefined1 auVar11 [16];
  ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__o __this_01;
  ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__o __this_02;
  ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__o __this_03;
  ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__o __this_04;
  ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__o __this_05;
  ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__o __this_06;
  undefined8 uStack_48;
  MethodInfo_3855510 *pMStack_40;
  Il2CppObject *pIStack_38;
  
  if (g_data_057aeb52 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Byte_System_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_byte_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Byte_get_Key);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_Byte_System_Object_get_Current);
    g_data_057aeb52 = '\x01';
  }
  pIStack_38 = (Il2CppObject *)0x0;
  uStack_48 = 0;
  pMStack_40 = (MethodInfo_3855510 *)0x0;
  if (photonEvent == (ExitGames_Client_Photon_EventData_o *)0x0) goto label_044d52c5;
  method_04 = (MethodInfo *)0x0;
  iVar5 = ExitGames_Client_Photon_EventData__get_Sender(photonEvent,(MethodInfo *)0x0);
  if (iVar5 == -1) {
    uVar1 = (photonEvent->fields).Code;
    if (uVar1 == 0xbe) {
      unaff_R15 = (System_Collections_Generic_Dictionary_byte__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_byte_object);
      System_Collections_Generic_Dictionary_byte__object____ctor(unaff_R15,MethodInfo_Dictionary_2_System_Byte_System_Object);
      __this_00 = (photonEvent->fields).Parameters;
      if (__this_00 == (ExitGames_Client_Photon_ParameterDictionary_o *)0x0) goto label_044d52c5;
      EVar9 = ExitGames_Client_Photon_ParameterDictionary__GetEnumerator(__this_00,(MethodInfo *)0x0);
      method_00 = (MethodInfo_3855510 *)EVar9.fields._dict;
      uStack_48 = CONCAT44(uStack_48._4_4_,EVar9.fields._index);
      pMStack_40 = method_00;
      if (unaff_R15 == (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
        EVar9.fields._dict = MethodInfo_Boolean_MoveNext;
        EVar9.fields._0_8_ = &uStack_48;
        bVar6 = ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object___MoveNext
                          (EVar9,method_00);
        pMVar8 = (MethodInfo_3855480 *)extraout_RDX_00;
        if ((char)bVar6 != '\0') goto label_044d52ca;
      }
      else {
        while (__this_01.fields._dict = MethodInfo_Boolean_MoveNext, __this_01.fields._0_8_ = &uStack_48,
              bVar6 = ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object___MoveNext
                                (__this_01,method_00), pMVar8 = method_01, (char)bVar6 != '\0') {
          __this_02.fields._dict = MethodInfo_KeyValuePair_2_System_Byte_System_Object_get_Current;
          __this_02.fields._0_8_ = &uStack_48;
          SVar10 = ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object___get_Current
                             (__this_02,method_01);
          System_Collections_Generic_Dictionary_byte__object___set_Item
                    (unaff_R15,(uint8_t)SVar10.fields.key,SVar10.fields.value,MethodInfo_Void_set_Item);
          method_00 = extraout_RDX;
        }
      }
      __this_03.fields._dict = MethodInfo_Void_Dispose;
      __this_03.fields._0_8_ = &uStack_48;
      ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object___Dispose
                (__this_03,(MethodInfo_3855570 *)pMVar8);
      do {
        if (unaff_R15 == (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
          return;
        }
        bVar6 = System_Collections_Generic_Dictionary_byte__object___ContainsKey(unaff_R15,'\0',MethodInfo_Boolean_ContainsKey);
        if ((char)bVar6 == '\0') {
          return;
        }
        photonEvent = (ExitGames_Client_Photon_EventData_o *)
                      System_Collections_Generic_Dictionary_byte__object___get_Item
                                (unaff_R15,'\0',MethodInfo_Object_get_Item);
        if ((photonEvent == (ExitGames_Client_Photon_EventData_o *)0x0) ||
           ((Il2CppClass *)photonEvent->klass == g_data_057b9c00)) {
          pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                   (__this->fields)._pendingCallbacks;
          if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            bVar6 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                              (pSVar2,(Il2CppObject *)photonEvent,&pIStack_38,MethodInfo_Boolean_TryGetValue);
            if ((char)bVar6 == '\0') {
              return;
            }
            pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                     (__this->fields)._pendingCallbacks;
            if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              System_Collections_Generic_Dictionary_object__object___Remove
                        (pSVar2,(Il2CppObject *)photonEvent,MethodInfo_Boolean_Remove);
              pSVar3 = (__this->fields)._pendingTimestamps;
              if (pSVar3 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
                System_Collections_Generic_Dictionary_object__float___Remove
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,
                           (Il2CppObject *)photonEvent,MethodInfo_Boolean_Remove);
                pSVar3 = (__this->fields)._pendingTimeouts;
                if (pSVar3 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
                  System_Collections_Generic_Dictionary_object__float___Remove
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,
                             (Il2CppObject *)photonEvent,MethodInfo_Boolean_Remove);
                  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                           (__this->fields)._pendingTimeoutCallbacks;
                  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    System_Collections_Generic_Dictionary_object__object___Remove
                              (pSVar2,(Il2CppObject *)photonEvent,MethodInfo_Boolean_Remove);
                    if (pIStack_38 == (Il2CppObject *)0x0) {
                      return;
                    }
                    (*pIStack_38[1].monitor)(pIStack_38[4].klass,unaff_R15,pIStack_38[2].monitor);
                    return;
                  }
                }
              }
            }
          }
label_044d52c5:
          il2cpp_runtime_helper_022b2c90();
          pMVar8 = extraout_RDX_01;
label_044d52ca:
          __this_04.fields._dict = MethodInfo_KeyValuePair_2_System_Byte_System_Object_get_Current;
          __this_04.fields._0_8_ = &uStack_48;
          ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object___get_Current(__this_04,pMVar8)
          ;
          il2cpp_runtime_helper_022b2c90();
        }
        auVar11 = il2cpp_runtime_helper_022b2fd0(photonEvent);
        method_03 = auVar11._8_8_;
        if (auVar11._8_4_ != 1) goto label_044d5356;
        plVar7 = (long *)__cxa_begin_catch(auVar11._0_8_);
        lVar4 = *plVar7;
        __cxa_end_catch();
        __this_05.fields._dict = MethodInfo_Void_Dispose;
        __this_05.fields._0_8_ = &uStack_48;
        ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object___Dispose(__this_05,method_02);
      } while (lVar4 == 0);
      il2cpp_runtime_helper_022fefe0(lVar4);
      method_03 = extraout_RDX_02;
label_044d5356:
      __this_06.fields._dict = MethodInfo_Void_Dispose;
      __this_06.fields._0_8_ = &uStack_48;
      ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object___Dispose(__this_06,method_03);
      _Unwind_Resume(auVar11._0_8_);
    }
    if (uVar1 == 0xbd) {
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Anticheat_ModeratorManager__HandlePlayerJoinNotification(photonEvent,method_04);
    }
    else if (uVar1 == 0xbc) {
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Anticheat_ModeratorManager__HandlePlayerListNotification(photonEvent,method_04);
    }
  }
  return;
}


// Anticheat.ModeratorManager$$OnPlayerEnteredRoom
// il2cpp: void Anticheat_ModeratorManager__OnPlayerEnteredRoom (Anticheat_ModeratorManager_o* __this, Photon_Realtime_Player_o* newPlayer, const MethodInfo* method);
// 0x44d5b60

void Anticheat_ModeratorManager__OnPlayerEnteredRoom
               (Anticheat_ModeratorManager_o *__this,Photon_Realtime_Player_o *newPlayer,MethodInfo *method)

{
  return;
}


// Anticheat.ModeratorManager$$OnPlayerLeftRoom
// il2cpp: void Anticheat_ModeratorManager__OnPlayerLeftRoom (Anticheat_ModeratorManager_o* __this, Photon_Realtime_Player_o* otherPlayer, const MethodInfo* method);
// 0x44d5b70

void Anticheat_ModeratorManager__OnPlayerLeftRoom
               (Anticheat_ModeratorManager_o *__this,Photon_Realtime_Player_o *otherPlayer,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t key;
  uint uVar2;
  System_Collections_Generic_Dictionary_int__object__o *pSVar3;
  System_Collections_Generic_List_object__o *__this_00;
  System_Object_array *pSVar4;
  long lVar5;
  bool_conflict bVar6;
  Il2CppObject *pIStack_18;
  
  if (g_data_057aeb53 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb53 = '\x01';
  }
  pIStack_18 = (Il2CppObject *)0x0;
  if (otherPlayer == (Photon_Realtime_Player_o *)0x0) goto label_044d5dd6;
  key = (otherPlayer->fields).actorNumber;
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae4db != '\0') goto label_044d5be7;
label_044d5c16:
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057ae4db = '\x01';
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto label_044d5bf3;
label_044d5c35:
    il2cpp_runtime_helper_02337ed0();
    pSVar3 = *(System_Collections_Generic_Dictionary_int__object__o **)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x10)
    ;
  }
  else {
    if (g_data_057ae4db == '\0') goto label_044d5c16;
label_044d5be7:
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto label_044d5c35;
label_044d5bf3:
    pSVar3 = *(System_Collections_Generic_Dictionary_int__object__o **)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x10)
    ;
  }
  if (pSVar3 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_044d5dd6;
  bVar6 = System_Collections_Generic_Dictionary_int__object___TryGetValue(pSVar3,key,&pIStack_18,MethodInfo_Boolean_TryGetValue)
  ;
  if ((char)bVar6 == '\0') {
    return;
  }
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae4db != '\0') goto label_044d5c82;
label_044d5cb1:
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057ae4db = '\x01';
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto label_044d5c8e;
label_044d5cd0:
    il2cpp_runtime_helper_02337ed0();
    pSVar3 = *(System_Collections_Generic_Dictionary_int__object__o **)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x10)
    ;
  }
  else {
    if (g_data_057ae4db == '\0') goto label_044d5cb1;
label_044d5c82:
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto label_044d5cd0;
label_044d5c8e:
    pSVar3 = *(System_Collections_Generic_Dictionary_int__object__o **)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x10)
    ;
  }
  if (pSVar3 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_044d5dd6;
  System_Collections_Generic_Dictionary_int__object___Remove(pSVar3,key,MethodInfo_Boolean_Remove);
  if (g_data_057ae4dc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057ae4dc = '\x01';
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto label_044d5d12;
label_044d5d46:
    il2cpp_runtime_helper_02337ed0();
    __this_00 = *(System_Collections_Generic_List_object__o **)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x18);
    lVar5 = MethodInfo_Void_Add;
  }
  else {
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto label_044d5d46;
label_044d5d12:
    __this_00 = *(System_Collections_Generic_List_object__o **)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x18);
    lVar5 = MethodInfo_Void_Add;
  }
  MethodInfo_Void_Add = lVar5;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar4 = (__this_00->fields)._items;
    if (pSVar4 != (System_Object_array *)0x0) {
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pSVar4->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        pSVar4->m_Items[(int)uVar2] = pIStack_18;
        il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  (__this_00,pIStack_18,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
      }
      lVar5 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x28);
      if (lVar5 != 0) {
        (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
      }
      return;
    }
  }
label_044d5dd6:
  il2cpp_runtime_helper_022b2c90();
  return;
}


// Anticheat.ModeratorManager$$OnRoomPropertiesUpdate
// il2cpp: void Anticheat_ModeratorManager__OnRoomPropertiesUpdate (Anticheat_ModeratorManager_o* __this, ExitGames_Client_Photon_Hashtable_o* propertiesThatChanged, const MethodInfo* method);
// 0x44d5de0

void Anticheat_ModeratorManager__OnRoomPropertiesUpdate
               (Anticheat_ModeratorManager_o *__this,
               ExitGames_Client_Photon_Hashtable_o *propertiesThatChanged,MethodInfo *method)

{
  return;
}


// Anticheat.ModeratorManager$$OnPlayerPropertiesUpdate
// il2cpp: void Anticheat_ModeratorManager__OnPlayerPropertiesUpdate (Anticheat_ModeratorManager_o* __this, Photon_Realtime_Player_o* targetPlayer, ExitGames_Client_Photon_Hashtable_o* changedProps, const MethodInfo* method);
// 0x44d5df0

void Anticheat_ModeratorManager__OnPlayerPropertiesUpdate
               (Anticheat_ModeratorManager_o *__this,Photon_Realtime_Player_o *targetPlayer,
               ExitGames_Client_Photon_Hashtable_o *changedProps,MethodInfo *method)

{
  return;
}


// Anticheat.ModeratorManager$$OnMasterClientSwitched
// il2cpp: void Anticheat_ModeratorManager__OnMasterClientSwitched (Anticheat_ModeratorManager_o* __this, Photon_Realtime_Player_o* newMasterClient, const MethodInfo* method);
// 0x44d5e00

void Anticheat_ModeratorManager__OnMasterClientSwitched
               (Anticheat_ModeratorManager_o *__this,Photon_Realtime_Player_o *newMasterClient,
               MethodInfo *method)

{
  return;
}


// Anticheat.ModeratorManager$$OnJoinedRoom
// il2cpp: void Anticheat_ModeratorManager__OnJoinedRoom (Anticheat_ModeratorManager_o* __this, const MethodInfo* method);
// 0x44d5e10

void Anticheat_ModeratorManager__OnJoinedRoom(Anticheat_ModeratorManager_o *__this,MethodInfo *method)

{
  int iVar1;
  Il2CppMethodPointer pIVar2;
  long lVar3;
  bool_conflict bVar4;
  System_String_array *source;
  MethodInfo *pMVar5;
  
  if (g_data_057aeb54 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb54 = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_ModeratorManager[2].parameters + 4);
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_ModeratorManager[2].parameters + 4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057aeb56 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    il2cpp_runtime_helper_023445d0(&"admin");
    il2cpp_runtime_helper_023445d0(&"moderator");
    il2cpp_runtime_helper_023445d0(&"trusted");
    g_data_057aeb56 = '\x01';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto label_044d5e80;
label_044d5ef3:
    il2cpp_runtime_helper_02337ed0();
    source = ApplicationManagers_AccountManager__get_Roles((MethodInfo *)0x0);
  }
  else {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto label_044d5ef3;
label_044d5e80:
    source = ApplicationManagers_AccountManager__get_Roles((MethodInfo *)0x0);
  }
  if (source == (System_String_array *)0x0) {
label_044d60df:
    if (*(int *)((long)&TypeInfo_ModeratorManager[2].parameters + 4) == 0) {
      pMVar5 = TypeInfo_ModeratorManager;
      il2cpp_runtime_helper_02337ed0();
      Anticheat_ModeratorManager__ClearAuth(pMVar5);
      return;
    }
    Anticheat_ModeratorManager__ClearAuth(TypeInfo_ModeratorManager);
    return;
  }
  bVar4 = System_Linq_Enumerable__Contains_object_
                    ((System_Collections_Generic_IEnumerable_TSource__o *)source,"admin",MethodInfo_Boolean_Contains_String);
  if ((char)bVar4 == '\0') {
    bVar4 = System_Linq_Enumerable__Contains_object_
                      ((System_Collections_Generic_IEnumerable_TSource__o *)source,"moderator",MethodInfo_Boolean_Contains_String);
    if ((char)bVar4 == '\0') {
      bVar4 = System_Linq_Enumerable__Contains_object_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,"trusted",MethodInfo_Boolean_Contains_String
                        );
      if ((char)bVar4 == '\0') goto label_044d60df;
      if (*(int *)((long)&TypeInfo_ModeratorManager[2].parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        if (g_data_057aeb84 != '\0') goto label_044d608a;
label_044d6223:
        il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
        g_data_057aeb84 = '\x01';
        if (*(int *)((long)&TypeInfo_ModeratorManager[2].parameters + 4) != 0) goto label_044d609a;
label_044d6246:
        il2cpp_runtime_helper_02337ed0();
        pMVar5 = TypeInfo_ModeratorManager;
        TypeInfo_ModeratorManager[2].virtualMethodPointer[8] = (code)0x1;
        if (g_data_057aeb85 != '\0') goto label_044d60b2;
label_044d6266:
        il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
        g_data_057aeb85 = '\x01';
        iVar1 = *(int *)((long)&TypeInfo_ModeratorManager[2].parameters + 4);
        pMVar5 = TypeInfo_ModeratorManager;
      }
      else {
        if (g_data_057aeb84 == '\0') goto label_044d6223;
label_044d608a:
        if (*(int *)((long)&TypeInfo_ModeratorManager[2].parameters + 4) == 0) goto label_044d6246;
label_044d609a:
        pMVar5 = TypeInfo_ModeratorManager;
        TypeInfo_ModeratorManager[2].virtualMethodPointer[8] = (code)0x1;
        if (g_data_057aeb85 == '\0') goto label_044d6266;
label_044d60b2:
        iVar1 = *(int *)((long)&pMVar5[2].parameters + 4);
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pMVar5 = TypeInfo_ModeratorManager;
      }
      pIVar2 = pMVar5[2].virtualMethodPointer;
      *(undefined4 *)(pIVar2 + 0xc) = 0;
      lVar3 = *(long *)(pIVar2 + 0x20);
      goto joined_r0x044d60d4;
    }
    if (*(int *)((long)&TypeInfo_ModeratorManager[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057aeb84 != '\0') goto label_044d5ff5;
label_044d61a2:
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      g_data_057aeb84 = '\x01';
      if (*(int *)((long)&TypeInfo_ModeratorManager[2].parameters + 4) != 0) goto label_044d6005;
label_044d61c5:
      il2cpp_runtime_helper_02337ed0();
      pMVar5 = TypeInfo_ModeratorManager;
      TypeInfo_ModeratorManager[2].virtualMethodPointer[8] = (code)0x1;
      if (g_data_057aeb85 != '\0') goto label_044d601d;
label_044d61e5:
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      g_data_057aeb85 = '\x01';
      iVar1 = *(int *)((long)&TypeInfo_ModeratorManager[2].parameters + 4);
      pMVar5 = TypeInfo_ModeratorManager;
    }
    else {
      if (g_data_057aeb84 == '\0') goto label_044d61a2;
label_044d5ff5:
      if (*(int *)((long)&TypeInfo_ModeratorManager[2].parameters + 4) == 0) goto label_044d61c5;
label_044d6005:
      pMVar5 = TypeInfo_ModeratorManager;
      TypeInfo_ModeratorManager[2].virtualMethodPointer[8] = (code)0x1;
      if (g_data_057aeb85 == '\0') goto label_044d61e5;
label_044d601d:
      iVar1 = *(int *)((long)&pMVar5[2].parameters + 4);
    }
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
      pMVar5 = TypeInfo_ModeratorManager;
    }
    pIVar2 = pMVar5[2].virtualMethodPointer;
    *(undefined4 *)(pIVar2 + 0xc) = 1;
    lVar3 = *(long *)(pIVar2 + 0x20);
    goto joined_r0x044d60d4;
  }
  if (*(int *)((long)&TypeInfo_ModeratorManager[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057aeb84 != '\0') goto label_044d5f53;
label_044d6121:
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb84 = '\x01';
    if (*(int *)((long)&TypeInfo_ModeratorManager[2].parameters + 4) != 0) goto label_044d5f63;
label_044d6144:
    il2cpp_runtime_helper_02337ed0();
    pMVar5 = TypeInfo_ModeratorManager;
    TypeInfo_ModeratorManager[2].virtualMethodPointer[8] = (code)0x1;
    if (g_data_057aeb85 != '\0') goto label_044d5f7b;
label_044d6164:
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb85 = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_ModeratorManager[2].parameters + 4);
    pMVar5 = TypeInfo_ModeratorManager;
  }
  else {
    if (g_data_057aeb84 == '\0') goto label_044d6121;
label_044d5f53:
    if (*(int *)((long)&TypeInfo_ModeratorManager[2].parameters + 4) == 0) goto label_044d6144;
label_044d5f63:
    pMVar5 = TypeInfo_ModeratorManager;
    TypeInfo_ModeratorManager[2].virtualMethodPointer[8] = (code)0x1;
    if (g_data_057aeb85 == '\0') goto label_044d6164;
label_044d5f7b:
    iVar1 = *(int *)((long)&pMVar5[2].parameters + 4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    pMVar5 = TypeInfo_ModeratorManager;
  }
  pIVar2 = pMVar5[2].virtualMethodPointer;
  *(undefined4 *)(pIVar2 + 0xc) = 2;
  lVar3 = *(long *)(pIVar2 + 0x20);
joined_r0x044d60d4:
  if (lVar3 != 0) {
    (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
    return;
  }
  return;
}


// Anticheat.ModeratorManager$$OnLeftRoom
// il2cpp: void Anticheat_ModeratorManager__OnLeftRoom (Anticheat_ModeratorManager_o* __this, const MethodInfo* method);
// 0x44d62a0

void Anticheat_ModeratorManager__OnLeftRoom(Anticheat_ModeratorManager_o *__this,MethodInfo *method)

{
  code cVar1;
  int32_t length;
  int iVar2;
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  System_Collections_Generic_Dictionary_string__float__o *pSVar4;
  long lVar5;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 extraout_RDX_05;
  undefined8 extraout_RDX_06;
  undefined8 extraout_RDX_07;
  undefined8 extraout_RDX_08;
  undefined8 extraout_RDX_09;
  undefined8 extraout_RDX_10;
  undefined8 uVar6;
  undefined8 extraout_RDX_11;
  undefined8 extraout_RDX_12;
  undefined8 extraout_RDX_13;
  undefined8 extraout_RDX_14;
  undefined8 extraout_RDX_15;
  undefined8 extraout_RDX_16;
  MethodInfo *pMVar7;
  bool bVar8;
  
  if (g_data_057aeb55 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb55 = '\x01';
    if (*(int *)((long)&TypeInfo_ModeratorManager[2].parameters + 4) != 0) goto label_044d62c8;
label_044d6369:
    pMVar7 = TypeInfo_ModeratorManager;
    il2cpp_runtime_helper_02337ed0();
    Anticheat_ModeratorManager__ClearAuth(pMVar7);
    if (g_data_057ae4db != '\0') goto label_044d62da;
label_044d6380:
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057ae4db = '\x01';
    if (*(int *)((long)&TypeInfo_ModeratorManager[2].parameters + 4) != 0) goto label_044d62ea;
label_044d63a3:
    il2cpp_runtime_helper_02337ed0();
    __this_00 = *(System_Collections_Generic_Dictionary_int__object__o **)
                 (TypeInfo_ModeratorManager[2].virtualMethodPointer + 0x10);
  }
  else {
    if (*(int *)((long)&TypeInfo_ModeratorManager[2].parameters + 4) == 0) goto label_044d6369;
label_044d62c8:
    Anticheat_ModeratorManager__ClearAuth(TypeInfo_ModeratorManager);
    if (g_data_057ae4db == '\0') goto label_044d6380;
label_044d62da:
    if (*(int *)((long)&TypeInfo_ModeratorManager[2].parameters + 4) == 0) goto label_044d63a3;
label_044d62ea:
    __this_00 = *(System_Collections_Generic_Dictionary_int__object__o **)
                 (TypeInfo_ModeratorManager[2].virtualMethodPointer + 0x10);
  }
  if (__this_00 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    System_Collections_Generic_Dictionary_int__object___Clear(__this_00,MethodInfo_Void_Clear);
    if (g_data_057ae4dc == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      g_data_057ae4dc = '\x01';
      if (*(int *)((long)&TypeInfo_ModeratorManager[2].parameters + 4) != 0) goto label_044d63e3;
label_044d6417:
      il2cpp_runtime_helper_02337ed0();
      lVar5 = *(long *)(TypeInfo_ModeratorManager[2].virtualMethodPointer + 0x18);
    }
    else {
      if (*(int *)((long)&TypeInfo_ModeratorManager[2].parameters + 4) == 0) goto label_044d6417;
label_044d63e3:
      lVar5 = *(long *)(TypeInfo_ModeratorManager[2].virtualMethodPointer + 0x18);
    }
    if (lVar5 != 0) {
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      length = *(int32_t *)(lVar5 + 0x18);
      *(undefined4 *)(lVar5 + 0x18) = 0;
      if (0 < length) {
        System_Array__Clear(*(System_Array_o **)(lVar5 + 0x10),0,length,(MethodInfo *)0x0);
      }
      pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._pendingCallbacks;
      if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___Clear(pSVar3,MethodInfo_Void_Clear);
        pSVar4 = (__this->fields)._pendingTimestamps;
        if (pSVar4 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
          System_Collections_Generic_Dictionary_object__float___Clear
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar4,MethodInfo_Void_Clear);
          pSVar4 = (__this->fields)._pendingTimeouts;
          if (pSVar4 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
            System_Collections_Generic_Dictionary_object__float___Clear
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar4,MethodInfo_Void_Clear);
            pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                     (__this->fields)._pendingTimeoutCallbacks;
            if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              System_Collections_Generic_Dictionary_object__object___Clear(pSVar3,MethodInfo_Void_Clear);
              return;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeb57 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb57 = '\x01';
    uVar6 = extraout_RDX_00;
    if (*(int *)((long)&TypeInfo_ModeratorManager[2].parameters + 4) != 0) goto label_044d64e8;
label_044d65a5:
    il2cpp_runtime_helper_02337ed0();
    uVar6 = extraout_RDX_01;
    if (g_data_057ae4d9 != '\0') goto label_044d64f5;
label_044d65b7:
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057ae4d9 = '\x01';
    uVar6 = extraout_RDX_02;
    if (*(int *)((long)&TypeInfo_ModeratorManager[2].parameters + 4) != 0) goto label_044d6506;
label_044d65db:
    il2cpp_runtime_helper_02337ed0();
    cVar1 = TypeInfo_ModeratorManager[2].virtualMethodPointer[8];
    uVar6 = extraout_RDX_03;
    if (*(int *)((long)&TypeInfo_ModeratorManager[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      uVar6 = extraout_RDX_08;
    }
  }
  else {
    uVar6 = extraout_RDX;
    if (*(int *)((long)&TypeInfo_ModeratorManager[2].parameters + 4) == 0) goto label_044d65a5;
label_044d64e8:
    if (g_data_057ae4d9 == '\0') goto label_044d65b7;
label_044d64f5:
    if (*(int *)((long)&TypeInfo_ModeratorManager[2].parameters + 4) == 0) goto label_044d65db;
label_044d6506:
    cVar1 = TypeInfo_ModeratorManager[2].virtualMethodPointer[8];
  }
  if (cVar1 == (code)0x0) {
    if (g_data_057ae4da == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      g_data_057ae4da = '\x01';
      uVar6 = extraout_RDX_09;
      if (*(int *)((long)&TypeInfo_ModeratorManager[2].parameters + 4) != 0) goto label_044d6621;
label_044d66ea:
      il2cpp_runtime_helper_02337ed0();
      bVar8 = *(int *)(TypeInfo_ModeratorManager[2].virtualMethodPointer + 0xc) == -1;
      if (*(int *)((long)&TypeInfo_ModeratorManager[2].parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        uVar6 = extraout_RDX_12;
        goto joined_r0x044d6636;
      }
      uVar6 = extraout_RDX_10;
      if (g_data_057aeb84 == '\0') goto label_044d67c8;
label_044d671b:
      if (*(int *)((long)&TypeInfo_ModeratorManager[2].parameters + 4) == 0) goto label_044d67ec;
label_044d672c:
      pMVar7 = TypeInfo_ModeratorManager;
      TypeInfo_ModeratorManager[2].virtualMethodPointer[8] = (code)0x0;
      if (g_data_057aeb85 == '\0') goto label_044d680d;
label_044d6744:
      if (*(int *)((long)&pMVar7[2].parameters + 4) == 0) goto label_044d682d;
label_044d6751:
      *(undefined4 *)(pMVar7[2].virtualMethodPointer + 0xc) = 0xffffffff;
      if (bVar8) {
        return;
      }
    }
    else {
      if (*(int *)((long)&TypeInfo_ModeratorManager[2].parameters + 4) == 0) goto label_044d66ea;
label_044d6621:
      bVar8 = *(int *)(TypeInfo_ModeratorManager[2].virtualMethodPointer + 0xc) == -1;
joined_r0x044d6636:
      if (g_data_057aeb84 != '\0') goto label_044d671b;
label_044d67c8:
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      g_data_057aeb84 = '\x01';
      uVar6 = extraout_RDX_13;
      if (*(int *)((long)&TypeInfo_ModeratorManager[2].parameters + 4) != 0) goto label_044d672c;
label_044d67ec:
      il2cpp_runtime_helper_02337ed0();
      pMVar7 = TypeInfo_ModeratorManager;
      TypeInfo_ModeratorManager[2].virtualMethodPointer[8] = (code)0x0;
      uVar6 = extraout_RDX_14;
      if (g_data_057aeb85 != '\0') goto label_044d6744;
label_044d680d:
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      g_data_057aeb85 = '\x01';
      uVar6 = extraout_RDX_15;
      pMVar7 = TypeInfo_ModeratorManager;
      if (*(int *)((long)&TypeInfo_ModeratorManager[2].parameters + 4) != 0) goto label_044d6751;
label_044d682d:
      il2cpp_runtime_helper_02337ed0();
      pMVar7 = TypeInfo_ModeratorManager;
      *(undefined4 *)(TypeInfo_ModeratorManager[2].virtualMethodPointer + 0xc) = 0xffffffff;
      uVar6 = extraout_RDX_16;
      if (bVar8) {
        return;
      }
    }
    iVar2 = *(int *)((long)&pMVar7[2].parameters + 4);
    goto joined_r0x044d656f;
  }
  if (g_data_057aeb84 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb84 = '\x01';
    uVar6 = extraout_RDX_04;
    if (*(int *)((long)&TypeInfo_ModeratorManager[2].parameters + 4) != 0) goto label_044d6535;
label_044d6665:
    il2cpp_runtime_helper_02337ed0();
    pMVar7 = TypeInfo_ModeratorManager;
    TypeInfo_ModeratorManager[2].virtualMethodPointer[8] = (code)0x0;
    uVar6 = extraout_RDX_05;
    if (g_data_057aeb85 != '\0') goto label_044d654d;
label_044d6686:
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb85 = '\x01';
    iVar2 = *(int *)((long)&TypeInfo_ModeratorManager[2].parameters + 4);
    uVar6 = extraout_RDX_06;
    pMVar7 = TypeInfo_ModeratorManager;
  }
  else {
    if (*(int *)((long)&TypeInfo_ModeratorManager[2].parameters + 4) == 0) goto label_044d6665;
label_044d6535:
    pMVar7 = TypeInfo_ModeratorManager;
    TypeInfo_ModeratorManager[2].virtualMethodPointer[8] = (code)0x0;
    if (g_data_057aeb85 == '\0') goto label_044d6686;
label_044d654d:
    iVar2 = *(int *)((long)&pMVar7[2].parameters + 4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
    uVar6 = extraout_RDX_07;
    pMVar7 = TypeInfo_ModeratorManager;
  }
  *(undefined4 *)(pMVar7[2].virtualMethodPointer + 0xc) = 0xffffffff;
  iVar2 = *(int *)((long)&pMVar7[2].parameters + 4);
joined_r0x044d656f:
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar5 = *(long *)(TypeInfo_ModeratorManager[2].virtualMethodPointer + 0x20);
    uVar6 = extraout_RDX_11;
  }
  else {
    lVar5 = *(long *)(pMVar7[2].virtualMethodPointer + 0x20);
  }
  if (lVar5 == 0) {
    return;
  }
  (**(code **)(lVar5 + 0x18))
            (*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28),uVar6,*(code **)(lVar5 + 0x18));
  return;
}


// Anticheat.ModeratorManager$$UpdateAuthFromRoles
// il2cpp: void Anticheat_ModeratorManager__UpdateAuthFromRoles (const MethodInfo* method);
// 0x44d5e60

void Anticheat_ModeratorManager__UpdateAuthFromRoles(MethodInfo *method)

{
  int iVar1;
  Il2CppMethodPointer pIVar2;
  long lVar3;
  bool_conflict bVar4;
  System_String_array *source;
  MethodInfo *pMVar5;
  
  if (g_data_057aeb56 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    il2cpp_runtime_helper_023445d0(&"admin");
    il2cpp_runtime_helper_023445d0(&"moderator");
    il2cpp_runtime_helper_023445d0(&"trusted");
    g_data_057aeb56 = '\x01';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto label_044d5ef3;
label_044d5e80:
    source = ApplicationManagers_AccountManager__get_Roles((MethodInfo *)0x0);
  }
  else {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto label_044d5e80;
label_044d5ef3:
    il2cpp_runtime_helper_02337ed0();
    source = ApplicationManagers_AccountManager__get_Roles((MethodInfo *)0x0);
  }
  if (source == (System_String_array *)0x0) {
label_044d60df:
    if (*(int *)((long)&TypeInfo_ModeratorManager[2].parameters + 4) != 0) {
      Anticheat_ModeratorManager__ClearAuth(TypeInfo_ModeratorManager);
      return;
    }
    pMVar5 = TypeInfo_ModeratorManager;
    il2cpp_runtime_helper_02337ed0();
    Anticheat_ModeratorManager__ClearAuth(pMVar5);
    return;
  }
  bVar4 = System_Linq_Enumerable__Contains_object_
                    ((System_Collections_Generic_IEnumerable_TSource__o *)source,"admin",MethodInfo_Boolean_Contains_String);
  if ((char)bVar4 == '\0') {
    bVar4 = System_Linq_Enumerable__Contains_object_
                      ((System_Collections_Generic_IEnumerable_TSource__o *)source,"moderator",MethodInfo_Boolean_Contains_String);
    if ((char)bVar4 == '\0') {
      bVar4 = System_Linq_Enumerable__Contains_object_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,"trusted",MethodInfo_Boolean_Contains_String
                        );
      if ((char)bVar4 == '\0') goto label_044d60df;
      if (*(int *)((long)&TypeInfo_ModeratorManager[2].parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        if (g_data_057aeb84 == '\0') goto label_044d6223;
label_044d608a:
        if (*(int *)((long)&TypeInfo_ModeratorManager[2].parameters + 4) != 0) goto label_044d609a;
label_044d6246:
        il2cpp_runtime_helper_02337ed0();
        pMVar5 = TypeInfo_ModeratorManager;
        TypeInfo_ModeratorManager[2].virtualMethodPointer[8] = (code)0x1;
        if (g_data_057aeb85 == '\0') goto label_044d6266;
label_044d60b2:
        iVar1 = *(int *)((long)&pMVar5[2].parameters + 4);
      }
      else {
        if (g_data_057aeb84 != '\0') goto label_044d608a;
label_044d6223:
        il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
        g_data_057aeb84 = '\x01';
        if (*(int *)((long)&TypeInfo_ModeratorManager[2].parameters + 4) == 0) goto label_044d6246;
label_044d609a:
        pMVar5 = TypeInfo_ModeratorManager;
        TypeInfo_ModeratorManager[2].virtualMethodPointer[8] = (code)0x1;
        if (g_data_057aeb85 != '\0') goto label_044d60b2;
label_044d6266:
        il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
        g_data_057aeb85 = '\x01';
        iVar1 = *(int *)((long)&TypeInfo_ModeratorManager[2].parameters + 4);
        pMVar5 = TypeInfo_ModeratorManager;
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pMVar5 = TypeInfo_ModeratorManager;
      }
      pIVar2 = pMVar5[2].virtualMethodPointer;
      *(undefined4 *)(pIVar2 + 0xc) = 0;
      lVar3 = *(long *)(pIVar2 + 0x20);
      goto joined_r0x044d60d4;
    }
    if (*(int *)((long)&TypeInfo_ModeratorManager[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057aeb84 == '\0') goto label_044d61a2;
label_044d5ff5:
      if (*(int *)((long)&TypeInfo_ModeratorManager[2].parameters + 4) != 0) goto label_044d6005;
label_044d61c5:
      il2cpp_runtime_helper_02337ed0();
      pMVar5 = TypeInfo_ModeratorManager;
      TypeInfo_ModeratorManager[2].virtualMethodPointer[8] = (code)0x1;
      if (g_data_057aeb85 == '\0') goto label_044d61e5;
label_044d601d:
      iVar1 = *(int *)((long)&pMVar5[2].parameters + 4);
    }
    else {
      if (g_data_057aeb84 != '\0') goto label_044d5ff5;
label_044d61a2:
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      g_data_057aeb84 = '\x01';
      if (*(int *)((long)&TypeInfo_ModeratorManager[2].parameters + 4) == 0) goto label_044d61c5;
label_044d6005:
      pMVar5 = TypeInfo_ModeratorManager;
      TypeInfo_ModeratorManager[2].virtualMethodPointer[8] = (code)0x1;
      if (g_data_057aeb85 != '\0') goto label_044d601d;
label_044d61e5:
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      g_data_057aeb85 = '\x01';
      iVar1 = *(int *)((long)&TypeInfo_ModeratorManager[2].parameters + 4);
      pMVar5 = TypeInfo_ModeratorManager;
    }
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
      pMVar5 = TypeInfo_ModeratorManager;
    }
    pIVar2 = pMVar5[2].virtualMethodPointer;
    *(undefined4 *)(pIVar2 + 0xc) = 1;
    lVar3 = *(long *)(pIVar2 + 0x20);
    goto joined_r0x044d60d4;
  }
  if (*(int *)((long)&TypeInfo_ModeratorManager[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057aeb84 == '\0') goto label_044d6121;
label_044d5f53:
    if (*(int *)((long)&TypeInfo_ModeratorManager[2].parameters + 4) != 0) goto label_044d5f63;
label_044d6144:
    il2cpp_runtime_helper_02337ed0();
    pMVar5 = TypeInfo_ModeratorManager;
    TypeInfo_ModeratorManager[2].virtualMethodPointer[8] = (code)0x1;
    if (g_data_057aeb85 == '\0') goto label_044d6164;
label_044d5f7b:
    iVar1 = *(int *)((long)&pMVar5[2].parameters + 4);
  }
  else {
    if (g_data_057aeb84 != '\0') goto label_044d5f53;
label_044d6121:
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb84 = '\x01';
    if (*(int *)((long)&TypeInfo_ModeratorManager[2].parameters + 4) == 0) goto label_044d6144;
label_044d5f63:
    pMVar5 = TypeInfo_ModeratorManager;
    TypeInfo_ModeratorManager[2].virtualMethodPointer[8] = (code)0x1;
    if (g_data_057aeb85 != '\0') goto label_044d5f7b;
label_044d6164:
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb85 = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_ModeratorManager[2].parameters + 4);
    pMVar5 = TypeInfo_ModeratorManager;
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    pMVar5 = TypeInfo_ModeratorManager;
  }
  pIVar2 = pMVar5[2].virtualMethodPointer;
  *(undefined4 *)(pIVar2 + 0xc) = 2;
  lVar3 = *(long *)(pIVar2 + 0x20);
joined_r0x044d60d4:
  if (lVar3 == 0) {
    return;
  }
  (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
  return;
}


// Anticheat.ModeratorManager$$ClearAuth
// il2cpp: void Anticheat_ModeratorManager__ClearAuth (const MethodInfo* method);
// 0x44d64c0

void Anticheat_ModeratorManager__ClearAuth(MethodInfo *method)

{
  char cVar1;
  int iVar2;
  undefined8 in_RDX;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 extraout_RDX_05;
  undefined8 extraout_RDX_06;
  undefined8 extraout_RDX_07;
  undefined8 extraout_RDX_08;
  undefined8 extraout_RDX_09;
  undefined8 extraout_RDX_10;
  undefined8 extraout_RDX_11;
  undefined8 extraout_RDX_12;
  undefined8 extraout_RDX_13;
  undefined8 extraout_RDX_14;
  undefined8 extraout_RDX_15;
  long lVar3;
  bool bVar4;
  
  if (g_data_057aeb57 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb57 = '\x01';
    in_RDX = extraout_RDX;
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto label_044d64e8;
label_044d65a5:
    il2cpp_runtime_helper_02337ed0();
    in_RDX = extraout_RDX_00;
    if (g_data_057ae4d9 != '\0') goto label_044d64f5;
label_044d65b7:
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057ae4d9 = '\x01';
    in_RDX = extraout_RDX_01;
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto label_044d6506;
label_044d65db:
    il2cpp_runtime_helper_02337ed0();
    cVar1 = *(char *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 8);
    in_RDX = extraout_RDX_02;
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      in_RDX = extraout_RDX_07;
    }
  }
  else {
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto label_044d65a5;
label_044d64e8:
    if (g_data_057ae4d9 == '\0') goto label_044d65b7;
label_044d64f5:
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto label_044d65db;
label_044d6506:
    cVar1 = *(char *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 8);
  }
  if (cVar1 == '\0') {
    if (g_data_057ae4da == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      g_data_057ae4da = '\x01';
      in_RDX = extraout_RDX_08;
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto label_044d6621;
label_044d66ea:
      il2cpp_runtime_helper_02337ed0();
      bVar4 = *(int *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0xc) == -1;
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        in_RDX = extraout_RDX_11;
        goto joined_r0x044d6636;
      }
      in_RDX = extraout_RDX_09;
      if (g_data_057aeb84 == '\0') goto label_044d67c8;
label_044d671b:
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto label_044d67ec;
label_044d672c:
      lVar3 = TypeInfo_ModeratorManager;
      *(undefined1 *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 8) = 0;
      if (g_data_057aeb85 == '\0') goto label_044d680d;
label_044d6744:
      if (*(int *)(lVar3 + 0xe4) == 0) goto label_044d682d;
label_044d6751:
      *(undefined4 *)(*(long *)(lVar3 + 0xb8) + 0xc) = 0xffffffff;
      if (bVar4) {
        return;
      }
    }
    else {
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto label_044d66ea;
label_044d6621:
      bVar4 = *(int *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0xc) == -1;
joined_r0x044d6636:
      if (g_data_057aeb84 != '\0') goto label_044d671b;
label_044d67c8:
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      g_data_057aeb84 = '\x01';
      in_RDX = extraout_RDX_12;
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto label_044d672c;
label_044d67ec:
      il2cpp_runtime_helper_02337ed0();
      lVar3 = TypeInfo_ModeratorManager;
      *(undefined1 *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 8) = 0;
      in_RDX = extraout_RDX_13;
      if (g_data_057aeb85 != '\0') goto label_044d6744;
label_044d680d:
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      g_data_057aeb85 = '\x01';
      lVar3 = TypeInfo_ModeratorManager;
      in_RDX = extraout_RDX_14;
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto label_044d6751;
label_044d682d:
      il2cpp_runtime_helper_02337ed0();
      lVar3 = TypeInfo_ModeratorManager;
      *(undefined4 *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0xc) = 0xffffffff;
      in_RDX = extraout_RDX_15;
      if (bVar4) {
        return;
      }
    }
    iVar2 = *(int *)(lVar3 + 0xe4);
    goto joined_r0x044d656f;
  }
  if (g_data_057aeb84 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb84 = '\x01';
    in_RDX = extraout_RDX_03;
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto label_044d6535;
label_044d6665:
    il2cpp_runtime_helper_02337ed0();
    lVar3 = TypeInfo_ModeratorManager;
    *(undefined1 *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 8) = 0;
    in_RDX = extraout_RDX_04;
    if (g_data_057aeb85 != '\0') goto label_044d654d;
label_044d6686:
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb85 = '\x01';
    iVar2 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
    lVar3 = TypeInfo_ModeratorManager;
    in_RDX = extraout_RDX_05;
  }
  else {
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto label_044d6665;
label_044d6535:
    lVar3 = TypeInfo_ModeratorManager;
    *(undefined1 *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 8) = 0;
    if (g_data_057aeb85 == '\0') goto label_044d6686;
label_044d654d:
    iVar2 = *(int *)(lVar3 + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar3 = TypeInfo_ModeratorManager;
    in_RDX = extraout_RDX_06;
  }
  *(undefined4 *)(*(long *)(lVar3 + 0xb8) + 0xc) = 0xffffffff;
  iVar2 = *(int *)(lVar3 + 0xe4);
joined_r0x044d656f:
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x20);
    in_RDX = extraout_RDX_10;
  }
  else {
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x20);
  }
  if (lVar3 == 0) {
    return;
  }
  (**(code **)(lVar3 + 0x18))
            (*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28),in_RDX,*(code **)(lVar3 + 0x18));
  return;
}


// Anticheat.ModeratorManager$$OnFriendListUpdate
// il2cpp: void Anticheat_ModeratorManager__OnFriendListUpdate (Anticheat_ModeratorManager_o* __this, System_Collections_Generic_List_FriendInfo__o* friendList, const MethodInfo* method);
// 0x44d6860

void Anticheat_ModeratorManager__OnFriendListUpdate
               (Anticheat_ModeratorManager_o *__this,System_Collections_Generic_List_FriendInfo__o *friendList
               ,MethodInfo *method)

{
  return;
}


// Anticheat.ModeratorManager$$OnCreatedRoom
// il2cpp: void Anticheat_ModeratorManager__OnCreatedRoom (Anticheat_ModeratorManager_o* __this, const MethodInfo* method);
// 0x44d6870

void Anticheat_ModeratorManager__OnCreatedRoom(Anticheat_ModeratorManager_o *__this,MethodInfo *method)

{
  return;
}


// Anticheat.ModeratorManager$$OnCreateRoomFailed
// il2cpp: void Anticheat_ModeratorManager__OnCreateRoomFailed (Anticheat_ModeratorManager_o* __this, int16_t returnCode, System_String_o* message, const MethodInfo* method);
// 0x44d6880

void Anticheat_ModeratorManager__OnCreateRoomFailed
               (Anticheat_ModeratorManager_o *__this,int16_t returnCode,System_String_o *message,
               MethodInfo *method)

{
  return;
}


// Anticheat.ModeratorManager$$OnJoinRoomFailed
// il2cpp: void Anticheat_ModeratorManager__OnJoinRoomFailed (Anticheat_ModeratorManager_o* __this, int16_t returnCode, System_String_o* message, const MethodInfo* method);
// 0x44d6890

void Anticheat_ModeratorManager__OnJoinRoomFailed
               (Anticheat_ModeratorManager_o *__this,int16_t returnCode,System_String_o *message,
               MethodInfo *method)

{
  return;
}


// Anticheat.ModeratorManager$$OnJoinRandomFailed
// il2cpp: void Anticheat_ModeratorManager__OnJoinRandomFailed (Anticheat_ModeratorManager_o* __this, int16_t returnCode, System_String_o* message, const MethodInfo* method);
// 0x44d68a0

void Anticheat_ModeratorManager__OnJoinRandomFailed
               (Anticheat_ModeratorManager_o *__this,int16_t returnCode,System_String_o *message,
               MethodInfo *method)

{
  return;
}


// Anticheat.ModeratorManager$$TickTimeouts
// il2cpp: void Anticheat_ModeratorManager__TickTimeouts (Anticheat_ModeratorManager_o* __this, const MethodInfo* method);
// 0x44d4970

void Anticheat_ModeratorManager__TickTimeouts(Anticheat_ModeratorManager_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_string__float__o *pSVar3;
  System_Object_array *pSVar4;
  System_Collections_Generic_Dictionary_object__object__o *pSVar5;
  long lVar6;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o __this_03;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o __this_04;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o __this_05;
  int32_t iVar7;
  bool_conflict bVar8;
  Il2CppObject *key;
  long *plVar9;
  float extraout_XMM0_Da;
  float fVar10;
  undefined1 auVar11 [12];
  System_Collections_Generic_List_object__o *__this_06;
  float in_stack_ffffffffffffff50;
  float in_stack_ffffffffffffff54;
  System_Collections_Generic_List_Enumerator_T__c *pSVar12;
  Il2CppRGCTXData *pIVar13;
  _union_231613 key_00;
  _union_231613 _Var14;
  Il2CppObject *pIStack_90;
  undefined1 auStack_88 [48];
  undefined1 auStack_58 [16];
  _union_231613 _Stack_48;
  Il2CppRGCTXData *pIStack_40;
  _union_249689 _Stack_38;
  
  if (g_data_057aeb58 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_String_System);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_String_System_Single_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Key);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057aeb58 = '\x01';
  }
  auStack_88._16_8_ = (Il2CppObject *)0x0;
  auStack_88._24_8_ = (Il2CppRGCTXData *)0x0;
  auStack_88._0_8_ = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  auStack_88._8_8_ = (Il2CppRGCTXData *)0x0;
  auStack_88._32_8_ = (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *)0x0;
  pSVar12 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar13 = (Il2CppRGCTXData *)0x0;
  key_00.genericMethod = (Il2CppObject *)0x0;
  pIStack_90 = (Il2CppObject *)0x0;
  pSVar3 = (__this->fields)._pendingTimestamps;
  if (pSVar3 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) goto label_044d4dae;
  iVar7 = System_Collections_Generic_Dictionary_object__float___get_Count
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,MethodInfo_Int32_get_Count);
  if (iVar7 == 0) {
    return;
  }
  in_stack_ffffffffffffff50 = UnityEngine_Time__get_realtimeSinceStartup((MethodInfo *)0x0);
  pSVar3 = (__this->fields)._pendingTimestamps;
  if (pSVar3 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) goto label_044d4dae;
  System_Collections_Generic_Dictionary_object__float___GetEnumerator
            ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)auStack_58,
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_String_System);
  auStack_88._32_8_ = _Stack_38;
  auStack_88._16_8_ = _Stack_48;
  auStack_88._24_8_ = pIStack_40;
  auStack_88._0_8_ = auStack_58._0_8_;
  auStack_88._8_8_ = auStack_58._8_8_;
  __this_06 = (System_Collections_Generic_List_object__o *)0x0;
  while( true ) {
    do {
      __this_02.fields._version = (int32_t)in_stack_ffffffffffffff50;
      __this_02.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_06;
      __this_02.fields._index = (int32_t)in_stack_ffffffffffffff54;
      __this_02.fields._current.fields.key = (Il2CppObject *)pSVar12;
      __this_02.fields._current.fields.value = (Il2CppObject *)pIVar13;
      __this_02.fields._32_8_ = key_00.genericMethod;
      bVar8 = System_Collections_Generic_Dictionary_Enumerator_object__float___MoveNext
                        (__this_02,(MethodInfo_32526E0 *)auStack_88);
      if ((char)bVar8 == '\0') {
        __this_03.fields._version = (int32_t)in_stack_ffffffffffffff50;
        __this_03.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_06;
        __this_03.fields._index = (int32_t)in_stack_ffffffffffffff54;
        __this_03.fields._current.fields.key = (Il2CppObject *)pSVar12;
        __this_03.fields._current.fields.value = (Il2CppObject *)pIVar13;
        __this_03.fields._32_8_ = key_00.genericMethod;
        System_Collections_Generic_Dictionary_Enumerator_object__float___Dispose
                  (__this_03,(MethodInfo_3252810 *)auStack_88);
        goto label_044d4c46;
      }
      key = (Il2CppObject *)il2cpp_runtime_helper_044dabd0((MethodInfo_32526E0 *)auStack_88,MethodInfo_KeyValuePair_2_System_String_System_Single_get_Current);
      pSVar3 = (__this->fields)._pendingTimeouts;
      in_stack_ffffffffffffff54 = extraout_XMM0_Da;
      if (pSVar3 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        goto label_044d4d95;
      }
      fVar10 = System_Collections_Generic_Dictionary_object__float___get_Item
                         ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,key,MethodInfo_Single_get_Item);
    } while (in_stack_ffffffffffffff50 - in_stack_ffffffffffffff54 < fVar10);
    if (__this_06 == (System_Collections_Generic_List_object__o *)0x0) {
      __this_06 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
      System_Collections_Generic_List_object____ctor(__this_06,MethodInfo_List_1_System_String);
      if (__this_06 == (System_Collections_Generic_List_object__o *)0x0) goto label_044d4db3;
    }
    lVar6 = MethodInfo_Void_Add;
    piVar1 = &(__this_06->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar4 = (__this_06->fields)._items;
    if (pSVar4 == (System_Object_array *)0x0) break;
    uVar2 = (__this_06->fields)._size;
    if (uVar2 < (uint)pSVar4->max_length) {
      (__this_06->fields)._size = uVar2 + 1;
      pSVar4->m_Items[(int)uVar2] = key;
      il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar2,key);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                (__this_06,key,*(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
    }
  }
label_044d4dbe:
  auVar11 = il2cpp_runtime_helper_022b2c90();
  if (auVar11._8_4_ == 1) {
    plVar9 = (long *)__cxa_begin_catch(auVar11._0_8_);
    lVar6 = *plVar9;
    __cxa_end_catch();
    __this_04.fields._version = (int32_t)in_stack_ffffffffffffff50;
    __this_04.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_06;
    __this_04.fields._index = (int32_t)in_stack_ffffffffffffff54;
    __this_04.fields._current.fields.key = (Il2CppObject *)pSVar12;
    __this_04.fields._current.fields.value = (Il2CppObject *)pIVar13;
    __this_04.fields._32_8_ = key_00.genericMethod;
    System_Collections_Generic_Dictionary_Enumerator_object__float___Dispose
              (__this_04,(MethodInfo_3252810 *)auStack_88);
    if (lVar6 == 0) {
label_044d4c46:
      if (__this_06 == (System_Collections_Generic_List_object__o *)0x0) {
        return;
      }
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)auStack_58,__this_06,MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
      pSVar12 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_58._0_8_;
      pIVar13 = (Il2CppRGCTXData *)auStack_58._8_8_;
      key_00 = _Stack_48;
      while( true ) {
        __this_00.fields._index = (int32_t)in_stack_ffffffffffffff50;
        __this_00.fields._list = (System_Collections_Generic_List_T__o *)__this_06;
        __this_00.fields._version = (int32_t)in_stack_ffffffffffffff54;
        __this_00.fields._current = (Il2CppObject *)pSVar12;
        bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff58);
        if ((char)bVar8 == '\0') {
          __this_01.fields._index = (int32_t)in_stack_ffffffffffffff50;
          __this_01.fields._list = (System_Collections_Generic_List_T__o *)__this_06;
          __this_01.fields._version = (int32_t)in_stack_ffffffffffffff54;
          __this_01.fields._current = (Il2CppObject *)pSVar12;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffff58);
          return;
        }
        pSVar3 = (__this->fields)._pendingTimestamps;
        if (pSVar3 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) goto label_044d4d95;
        _Var14 = key_00;
        System_Collections_Generic_Dictionary_object__float___Remove
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,key_00.genericMethod,
                   MethodInfo_Boolean_Remove);
        pSVar3 = (__this->fields)._pendingTimeouts;
        if (pSVar3 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) goto label_044d4d9a;
        System_Collections_Generic_Dictionary_object__float___Remove
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,key_00.genericMethod,
                   MethodInfo_Boolean_Remove);
        pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._pendingCallbacks
        ;
        if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_044d4d9f;
        System_Collections_Generic_Dictionary_object__object___Remove
                  (pSVar5,key_00.genericMethod,MethodInfo_Boolean_Remove);
        pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
                 (__this->fields)._pendingTimeoutCallbacks;
        if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_044d4da4;
        System_Collections_Generic_Dictionary_object__object___TryGetValue
                  (pSVar5,key_00.genericMethod,&pIStack_90,MethodInfo_Boolean_TryGetValue);
        pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
                 (__this->fields)._pendingTimeoutCallbacks;
        if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
        System_Collections_Generic_Dictionary_object__object___Remove
                  (pSVar5,key_00.genericMethod,MethodInfo_Boolean_Remove);
        key_00 = _Var14;
        if (pIStack_90 != (Il2CppObject *)0x0) {
          (*pIStack_90[1].monitor)(pIStack_90[4].klass,pIStack_90[2].monitor);
          key_00 = _Var14;
        }
      }
      goto label_044d4da9;
    }
    il2cpp_runtime_helper_022fefe0(lVar6);
  }
  __this_05.fields._version = (int32_t)in_stack_ffffffffffffff50;
  __this_05.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_06;
  __this_05.fields._index = (int32_t)in_stack_ffffffffffffff54;
  __this_05.fields._current.fields.key = (Il2CppObject *)pSVar12;
  __this_05.fields._current.fields.value = (Il2CppObject *)pIVar13;
  __this_05.fields._32_8_ = key_00.genericMethod;
  System_Collections_Generic_Dictionary_Enumerator_object__float___Dispose
            (__this_05,(MethodInfo_3252810 *)auStack_88);
  _Unwind_Resume(auVar11._0_8_);
label_044d4d95:
  il2cpp_runtime_helper_022b2c90();
  _Var14 = key_00;
label_044d4d9a:
  il2cpp_runtime_helper_022b2c90();
label_044d4d9f:
  il2cpp_runtime_helper_022b2c90();
label_044d4da4:
  il2cpp_runtime_helper_022b2c90();
label_044d4da9:
  il2cpp_runtime_helper_022b2c90();
  key_00 = _Var14;
label_044d4dae:
  il2cpp_runtime_helper_022b2c90();
label_044d4db3:
  __this_06 = (System_Collections_Generic_List_object__o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  goto label_044d4dbe;
}


// Anticheat.ModeratorManager$$TrackRequest
// il2cpp: System_String_o* Anticheat_ModeratorManager__TrackRequest (float timeoutSec, System_Action_Dictionary_byte__object___o* onResponse, System_Action_o* onTimeout, const MethodInfo* method);
// 0x44d68b0

System_String_o *
Anticheat_ModeratorManager__TrackRequest
          (float timeoutSec,System_Action_Dictionary_byte__object___o *onResponse,System_Action_o *onTimeout,
          MethodInfo *method)

{
  Il2CppClass *pIVar1;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this;
  bool_conflict bVar2;
  System_String_o *key;
  Photon_Realtime_RaiseEventOptions_o *__this_00;
  System_Int32_array *pSVar3;
  Photon_Realtime_Player_o *pPVar4;
  undefined4 extraout_var;
  Il2CppObject *pIVar5;
  System_String_o *pSVar6;
  long lVar7;
  uint8_t eventCode;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  System_Collections_Generic_Dictionary_object__object__o *pSVar8;
  undefined8 uVar9;
  MethodInfo *in_R9;
  float value;
  System_Guid_o __this_02;
  ExitGames_Client_Photon_SendOptions_o sendOptions;
  System_Guid_Fields local_38;
  
  if (g_data_057aeb59 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0();
    g_data_057aeb59 = '\x01';
  }
  local_38 = (System_Guid_Fields)System_Guid__NewGuid((MethodInfo *)0x0);
  pSVar6 = (System_String_o *)0x0;
  __this_02.fields._d = '\0';
  __this_02.fields._e = '\0';
  __this_02.fields._f = '\0';
  __this_02.fields._g = '\0';
  __this_02.fields._h = '\0';
  __this_02.fields._i = '\0';
  __this_02.fields._j = '\0';
  __this_02.fields._k = '\0';
  __this_02.fields._0_8_ = &local_38;
  key = System_Guid__ToString(__this_02,local_38._8_8_);
  if (*(int *)((long)&TypeInfo_ModeratorManager[2].fields._values + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar1 = ((TypeInfo_ModeratorManager[2].fields._entries)->obj).klass;
  __this_01 = TypeInfo_ModeratorManager;
  if ((pIVar1 != (Il2CppClass *)0x0) &&
     (__this_01 = (pIVar1->_1).byval_arg.data,
     __this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
    pSVar6 = key;
    System_Collections_Generic_Dictionary_object__object___set_Item
              (__this_01,(Il2CppObject *)key,(Il2CppObject *)onResponse,MethodInfo_Void_set_Item);
    pIVar1 = ((TypeInfo_ModeratorManager[2].fields._entries)->obj).klass;
    if (pIVar1 != (Il2CppClass *)0x0) {
      pSVar8 = *(System_Collections_Generic_Dictionary_object__object__o **)&(pIVar1->_1).byval_arg.bits;
      __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
      value = UnityEngine_Time__get_realtimeSinceStartup((MethodInfo *)0x0);
      if (pSVar8 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        pSVar6 = key;
        System_Collections_Generic_Dictionary_object__float___set_Item
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar8,(Il2CppObject *)key,value,
                   MethodInfo_Void_set_Item);
        pIVar1 = ((TypeInfo_ModeratorManager[2].fields._entries)->obj).klass;
        __this_01 = pSVar8;
        if (pIVar1 != (Il2CppClass *)0x0) {
          __this = (pIVar1->_1).this_arg.data;
          __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
          if (__this != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
            pSVar6 = key;
            System_Collections_Generic_Dictionary_object__float___set_Item
                      (__this,(Il2CppObject *)key,timeoutSec,MethodInfo_Void_set_Item);
            if (onTimeout == (System_Action_o *)0x0) {
              return key;
            }
            if (*(int *)((long)&TypeInfo_ModeratorManager[2].fields._values + 4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pIVar1 = ((TypeInfo_ModeratorManager[2].fields._entries)->obj).klass;
            __this_01 = TypeInfo_ModeratorManager;
            if (pIVar1 != (Il2CppClass *)0x0) {
              pSVar8 = *(System_Collections_Generic_Dictionary_object__object__o **)
                        &(pIVar1->_1).this_arg.bits;
              __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
              if (pSVar8 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                System_Collections_Generic_Dictionary_object__object___set_Item
                          (pSVar8,(Il2CppObject *)key,(Il2CppObject *)onTimeout,MethodInfo_Void_set_Item);
                return key;
              }
            }
          }
        }
      }
    }
  }
  eventCode = (uint8_t)__this_01;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeb5a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RaiseEventOptions);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SendOptions);
    g_data_057aeb5a = '\x01';
  }
  __this_00 = (Photon_Realtime_RaiseEventOptions_o *)il2cpp_runtime_helper_023052d0(TypeInfo_RaiseEventOptions);
  Photon_Realtime_RaiseEventOptions___ctor(__this_00,(MethodInfo *)0x0);
  lVar7 = 1;
  pSVar3 = (System_Int32_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_int);
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar9 = 0;
  pPVar4 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  if ((pPVar4 == (Photon_Realtime_Player_o *)0x0) || (pSVar3 == (System_Int32_array *)0x0)) {
label_044d6b60:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)pSVar3->max_length != 0) {
    pSVar3->m_Items[0] = (pPVar4->fields).actorNumber;
    if (__this_00 != (Photon_Realtime_RaiseEventOptions_o *)0x0) {
      (__this_00->fields).TargetActors = pSVar3;
      il2cpp_runtime_helper_022b4080(&(__this_00->fields).TargetActors,pSVar3);
      if (*(int *)(TypeInfo_SendOptions + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      sendOptions.fields._8_4_ = 0;
      sendOptions.fields._0_8_ = **(ulong **)(TypeInfo_SendOptions + 0xb8);
      bVar2 = Photon_Pun_PhotonNetwork__RaiseEvent
                        (eventCode,(Il2CppObject *)pSVar6,__this_00,sendOptions,in_R9);
      return (System_String_o *)CONCAT44(extraout_var,bVar2);
    }
    goto label_044d6b60;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057aeb5b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb5b = '\x01';
    if (*(int *)((long)&TypeInfo_ModeratorManager[2].fields._values + 4) != 0) goto label_044d6b97;
label_044d6bf6:
    il2cpp_runtime_helper_02337ed0();
    pIVar5 = (TypeInfo_ModeratorManager[2].fields._entries)->m_Items[0].fields.value;
    if (pIVar5 == (Il2CppObject *)0x0) {
      pSVar6 = (System_String_o *)0x0;
      goto label_044d6bb5;
    }
  }
  else {
    if (*(int *)((long)&TypeInfo_ModeratorManager[2].fields._values + 4) == 0) goto label_044d6bf6;
label_044d6b97:
    pIVar5 = (TypeInfo_ModeratorManager[2].fields._entries)->m_Items[0].fields.value;
    pSVar6 = (System_String_o *)0x0;
    if (pIVar5 == (Il2CppObject *)0x0) goto label_044d6bb5;
  }
  pSVar6 = (System_String_o *)(*pIVar5[1].monitor)(pIVar5[4].klass,uVar9,pIVar5[2].monitor);
label_044d6bb5:
  if (lVar7 == 0) {
    return pSVar6;
  }
  pSVar6 = (System_String_o *)
           (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40),uVar9,*(undefined8 *)(lVar7 + 0x28));
  return pSVar6;
}


// Anticheat.ModeratorManager$$RaiseModEvent
// il2cpp: void Anticheat_ModeratorManager__RaiseModEvent (uint8_t code, System_Collections_Generic_Dictionary_byte__object__o* data, const MethodInfo* method);
// 0x44d6a50

void Anticheat_ModeratorManager__RaiseModEvent
               (uint8_t code,System_Collections_Generic_Dictionary_byte__object__o *data,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  Photon_Realtime_RaiseEventOptions_o *__this;
  System_Int32_array *pSVar3;
  Photon_Realtime_Player_o *pPVar4;
  long lVar5;
  undefined8 uVar6;
  MethodInfo *in_R9;
  ExitGames_Client_Photon_SendOptions_o sendOptions;
  
  if (g_data_057aeb5a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RaiseEventOptions);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SendOptions);
    g_data_057aeb5a = '\x01';
  }
  __this = (Photon_Realtime_RaiseEventOptions_o *)il2cpp_runtime_helper_023052d0(TypeInfo_RaiseEventOptions);
  Photon_Realtime_RaiseEventOptions___ctor(__this,(MethodInfo *)0x0);
  lVar5 = 1;
  pSVar3 = (System_Int32_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_int);
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar6 = 0;
  pPVar4 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  if ((pPVar4 != (Photon_Realtime_Player_o *)0x0) && (pSVar3 != (System_Int32_array *)0x0)) {
    if ((int)pSVar3->max_length == 0) goto label_044d6b65;
    pSVar3->m_Items[0] = (pPVar4->fields).actorNumber;
    if (__this != (Photon_Realtime_RaiseEventOptions_o *)0x0) {
      (__this->fields).TargetActors = pSVar3;
      il2cpp_runtime_helper_022b4080(&(__this->fields).TargetActors,pSVar3);
      if (*(int *)(TypeInfo_SendOptions + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      sendOptions.fields._8_4_ = 0;
      sendOptions.fields._0_8_ = **(ulong **)(TypeInfo_SendOptions + 0xb8);
      Photon_Pun_PhotonNetwork__RaiseEvent(code,(Il2CppObject *)data,__this,sendOptions,in_R9);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_044d6b65:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057aeb5b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb5b = '\x01';
    iVar1 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar2 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
  }
  else {
    lVar2 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
  }
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),uVar6,*(undefined8 *)(lVar2 + 0x28));
  }
  if (lVar5 == 0) {
    return;
  }
  (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),uVar6,*(undefined8 *)(lVar5 + 0x28));
  return;
}


// Anticheat.ModeratorManager$$InvokeStatus
// il2cpp: void Anticheat_ModeratorManager__InvokeStatus (System_String_o* text, System_Action_string__o* localStatus, const MethodInfo* method);
// 0x44d6b70

void Anticheat_ModeratorManager__InvokeStatus
               (System_String_o *text,System_Action_string__o *localStatus,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  
  if (g_data_057aeb5b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb5b = '\x01';
    iVar1 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar2 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
  }
  else {
    lVar2 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
  }
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),text,*(undefined8 *)(lVar2 + 0x28));
  }
  if (localStatus == (System_Action_string__o *)0x0) {
    return;
  }
  (*(code *)(localStatus->fields).invoke_impl)
            ((localStatus->fields).method_code,text,(localStatus->fields).method);
  return;
}


// Anticheat.ModeratorManager$$GetResponseEntries
// il2cpp: System_Collections_Generic_Dictionary_byte__object__array* Anticheat_ModeratorManager__GetResponseEntries (System_Collections_Generic_Dictionary_byte__object__o* data, uint8_t entriesKey, const MethodInfo* method);
// 0x44d6c20

System_Collections_Generic_Dictionary_byte__object__array *
Anticheat_ModeratorManager__GetResponseEntries
          (System_Collections_Generic_Dictionary_byte__object__o *data,uint8_t entriesKey,MethodInfo *method)

{
  byte bVar1;
  System_String_c *pSVar2;
  bool_conflict bVar3;
  System_Collections_Generic_Dictionary_byte__object__o *pSVar4;
  System_Collections_Generic_Dictionary_byte__object__array *pSVar5;
  undefined8 *puVar6;
  long lVar7;
  System_Collections_Generic_Dictionary_byte__object__o *__this;
  Il2CppObject *pIVar8;
  System_String_o *s;
  uint *puVar9;
  short *psVar10;
  byte *pbVar11;
  Il2CppClass *pIVar12;
  undefined8 *puVar13;
  uint8_t key;
  undefined7 in_register_00000031;
  System_Collections_Generic_Dictionary_byte__object__o **ppSVar14;
  long *plVar15;
  long unaff_R14;
  System_Collections_Generic_Dictionary_byte__object__array *unaff_R15;
  undefined1 auVar16 [16];
  undefined8 uStack_60;
  System_Collections_Generic_Dictionary_byte__object__o *pSStack_58;
  long lStack_50;
  System_Collections_Generic_Dictionary_byte__object__array *pSStack_48;
  undefined8 *puStack_40;
  
  puVar13 = (undefined8 *)(CONCAT71(in_register_00000031,entriesKey) & 0xffffffff);
  if (g_data_057aeb5c == '\0') {
    puStack_40 = (undefined8 *)0x44d6c45;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_byte_object);
    puStack_40 = (undefined8 *)0x44d6c51;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    puStack_40 = (undefined8 *)0x44d6c5d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Item);
    puStack_40 = (undefined8 *)0x44d6c69;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_byte_object);
    puStack_40 = (undefined8 *)0x44d6c75;
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057aeb5c = '\x01';
  }
  pSVar4 = (System_Collections_Generic_Dictionary_byte__object__o *)0x0;
  if (data == (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
label_044d6e22:
    puStack_40 = (undefined8 *)0x44d6e27;
    il2cpp_runtime_helper_022b2c90();
label_044d6e27:
    puStack_40 = (undefined8 *)0x44d6e2c;
    __this = (System_Collections_Generic_Dictionary_byte__object__o *)il2cpp_runtime_helper_0231b270();
    key = '\0';
    puStack_40 = (undefined8 *)0x44d6e36;
    auVar16 = il2cpp_runtime_helper_022b2b10();
    uStack_60 = auVar16._0_8_;
    pSVar5 = (System_Collections_Generic_Dictionary_byte__object__array *)(auVar16._8_8_ & 0xffffffff);
    pSStack_58 = pSVar4;
    lStack_50 = unaff_R14;
    pSStack_48 = unaff_R15;
    puStack_40 = puVar13;
    if (g_data_057aeb5d == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Item);
      g_data_057aeb5d = '\x01';
    }
    uStack_60 = uStack_60 & 0xffffffff;
    if ((((__this != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) &&
         (bVar3 = System_Collections_Generic_Dictionary_byte__object___ContainsKey(__this,key,MethodInfo_Boolean_ContainsKey),
         (char)bVar3 != '\0')) &&
        (pIVar8 = System_Collections_Generic_Dictionary_byte__object___get_Item(__this,key,MethodInfo_Object_get_Item),
        pIVar8 != (Il2CppObject *)0x0)) &&
       (s = (System_String_o *)
            System_Collections_Generic_Dictionary_byte__object___get_Item(__this,key,MethodInfo_Object_get_Item),
       s != (System_String_o *)0x0)) {
      pSVar2 = s->klass;
      if ((pSVar2 == g_data_057b9bb8) || (pSVar2 == g_data_057b9bd8)) {
        puVar9 = (uint *)il2cpp_runtime_helper_02305440(s);
        pSVar5 = (System_Collections_Generic_Dictionary_byte__object__array *)(ulong)*puVar9;
      }
      else if (pSVar2 == g_data_057b9ba8) {
        psVar10 = (short *)il2cpp_runtime_helper_02305440(s);
        pSVar5 = (System_Collections_Generic_Dictionary_byte__object__array *)(ulong)(uint)(int)*psVar10;
      }
      else if (pSVar2 == g_data_057b9b88) {
        pbVar11 = (byte *)il2cpp_runtime_helper_02305440(s);
        pSVar5 = (System_Collections_Generic_Dictionary_byte__object__array *)(ulong)*pbVar11;
      }
      else if ((pSVar2 == g_data_057b9c00) &&
              (bVar3 = System_Int32__TryParse(s,(int32_t *)((long)&uStack_60 + 4),(MethodInfo *)0x0),
              (char)bVar3 != '\0')) {
        pSVar5 = (System_Collections_Generic_Dictionary_byte__object__array *)(uStack_60 >> 0x20);
      }
    }
    return pSVar5;
  }
  puStack_40 = (undefined8 *)0x44d6c9d;
  bVar3 = System_Collections_Generic_Dictionary_byte__object___ContainsKey(data,(uint8_t)puVar13,MethodInfo_Boolean_ContainsKey)
  ;
  if ((char)bVar3 != '\0') {
    puStack_40 = (undefined8 *)0x44d6cb9;
    pSVar4 = (System_Collections_Generic_Dictionary_byte__object__o *)
             System_Collections_Generic_Dictionary_byte__object___get_Item(data,(uint8_t)puVar13,MethodInfo_Object_get_Item)
    ;
    puVar13 = &TypeInfo_Dictionary_byte_object;
    puStack_40 = (undefined8 *)0x44d6ccf;
    pSVar5 = (System_Collections_Generic_Dictionary_byte__object__array *)
             il2cpp_runtime_helper_023051f0(pSVar4,TypeInfo_Dictionary_byte_object);
    if (pSVar5 != (System_Collections_Generic_Dictionary_byte__object__array *)0x0) {
      return pSVar5;
    }
    puStack_40 = (undefined8 *)0x44d6ced;
    unaff_R14 = il2cpp_runtime_helper_023051f0(pSVar4,TypeInfo_object);
    if (unaff_R14 != 0) {
      puStack_40 = (undefined8 *)0x44d6d05;
      unaff_R15 = (System_Collections_Generic_Dictionary_byte__object__array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Dictionary_byte_object);
      if ((int)*(ulong *)(unaff_R14 + 0x18) < 1) {
        return unaff_R15;
      }
      if (unaff_R15 != (System_Collections_Generic_Dictionary_byte__object__array *)0x0) {
        puVar6 = (undefined8 *)(*(ulong *)(unaff_R14 + 0x18) & 0xffffffff);
        plVar15 = (long *)(unaff_R14 + 0x20);
        ppSVar14 = unaff_R15->m_Items;
        puVar13 = (undefined8 *)0x0;
        while (puVar13 < puVar6) {
          pSVar4 = (System_Collections_Generic_Dictionary_byte__object__o *)*plVar15;
          if (pSVar4 == (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
label_044d6dd0:
            pSVar4 = (System_Collections_Generic_Dictionary_byte__object__o *)0x0;
          }
          else {
            bVar1 = (TypeInfo_Dictionary_byte_object->_2).naturalAligment;
            if ((bVar1 <= (((Il2CppClass *)pSVar4->klass)->_2).naturalAligment) &&
               ((((Il2CppClass *)pSVar4->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_Dictionary_byte_object)) {
              puStack_40 = (undefined8 *)0x44d6da3;
              lVar7 = il2cpp_runtime_helper_023051f0(pSVar4);
              if (lVar7 != 0) {
                pIVar12 = (Il2CppClass *)pSVar4->klass;
                bVar1 = (TypeInfo_Dictionary_byte_object->_2).naturalAligment;
                if (bVar1 <= (pIVar12->_2).naturalAligment) goto label_044d6d84;
                goto label_044d6dd0;
              }
              goto label_044d6e27;
            }
            pIVar12 = (Il2CppClass *)pSVar4->klass;
            bVar1 = (TypeInfo_Dictionary_byte_object->_2).naturalAligment;
            if ((pIVar12->_2).naturalAligment < bVar1) goto label_044d6dd0;
label_044d6d84:
            if ((pIVar12->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_Dictionary_byte_object) goto label_044d6dd0;
          }
          if ((undefined8 *)(ulong)(uint)unaff_R15->max_length <= puVar13) break;
          *ppSVar14 = pSVar4;
          puStack_40 = (undefined8 *)0x44d6dea;
          il2cpp_runtime_helper_022b4080(ppSVar14);
          puVar13 = (undefined8 *)((long)puVar13 + 1);
          puVar6 = (undefined8 *)(ulong)*(uint *)(unaff_R14 + 0x18);
          plVar15 = plVar15 + 1;
          ppSVar14 = ppSVar14 + 1;
          if ((long)(int)*(uint *)(unaff_R14 + 0x18) <= (long)puVar13) {
            return unaff_R15;
          }
        }
        puStack_40 = (undefined8 *)0x44d6e22;
        il2cpp_runtime_helper_022b2ca0();
      }
      goto label_044d6e22;
    }
  }
  return (System_Collections_Generic_Dictionary_byte__object__array *)0x0;
}


// Anticheat.ModeratorManager$$ReadInt
// il2cpp: int32_t Anticheat_ModeratorManager__ReadInt (System_Collections_Generic_Dictionary_byte__object__o* data, uint8_t key, int32_t defaultValue, const MethodInfo* method);
// 0x44d6e40

int32_t Anticheat_ModeratorManager__ReadInt
                  (System_Collections_Generic_Dictionary_byte__object__o *data,uint8_t key,
                  int32_t defaultValue,MethodInfo *method)

{
  System_String_c *pSVar1;
  uint in_EAX;
  bool_conflict bVar2;
  Il2CppObject *pIVar3;
  System_String_o *s;
  uint *puVar4;
  short *psVar5;
  byte *pbVar6;
  undefined8 uStack_28;
  
  uStack_28._0_4_ = in_EAX;
  if (g_data_057aeb5d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Item);
    g_data_057aeb5d = '\x01';
  }
  uStack_28 = (ulong)(uint)uStack_28;
  if (data != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary_byte__object___ContainsKey(data,key,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar2 != '\0') {
      pIVar3 = System_Collections_Generic_Dictionary_byte__object___get_Item(data,key,MethodInfo_Object_get_Item);
      if (pIVar3 != (Il2CppObject *)0x0) {
        s = (System_String_o *)
            System_Collections_Generic_Dictionary_byte__object___get_Item(data,key,MethodInfo_Object_get_Item);
        if (s != (System_String_o *)0x0) {
          pSVar1 = s->klass;
          if ((pSVar1 == g_data_057b9bb8) || (pSVar1 == g_data_057b9bd8)) {
            puVar4 = (uint *)il2cpp_runtime_helper_02305440(s);
            defaultValue = *puVar4;
          }
          else if (pSVar1 == g_data_057b9ba8) {
            psVar5 = (short *)il2cpp_runtime_helper_02305440(s);
            defaultValue = (int32_t)*psVar5;
          }
          else if (pSVar1 == g_data_057b9b88) {
            pbVar6 = (byte *)il2cpp_runtime_helper_02305440(s);
            defaultValue = (int32_t)*pbVar6;
          }
          else if (pSVar1 == g_data_057b9c00) {
            bVar2 = System_Int32__TryParse(s,(int32_t *)((long)&uStack_28 + 4),(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              defaultValue = uStack_28._4_4_;
            }
          }
        }
      }
    }
  }
  return defaultValue;
}


// Anticheat.ModeratorManager$$ParsePlayerEntry
// il2cpp: Anticheat_PlayerEntry_o* Anticheat_ModeratorManager__ParsePlayerEntry (System_Collections_Generic_Dictionary_byte__object__o* entry, const MethodInfo* method);
// 0x44d6f50

Anticheat_PlayerEntry_o *
Anticheat_ModeratorManager__ParsePlayerEntry
          (System_Collections_Generic_Dictionary_byte__object__o *entry,MethodInfo *method)

{
  long lVar1;
  bool_conflict bVar2;
  Anticheat_PlayerEntry_o *pAVar3;
  System_String_o *pSVar4;
  System_Int32_array *pSVar5;
  int32_t *piVar6;
  System_Collections_Generic_Dictionary_byte__object__array *onResponse;
  System_Action_Dictionary_byte__object___o *pSVar7;
  System_Action_o *pSVar8;
  System_Collections_Generic_Dictionary_byte__object__array *pSVar9;
  Anticheat_PlayerEntry_o *extraout_RAX;
  System_Collections_Generic_Dictionary_byte__object__array *value;
  Anticheat_ModeratorManager___c__DisplayClass89_0_o *__this;
  System_Action_string__o *pSVar10;
  System_Collections_Generic_Dictionary_byte__object__o *pSVar11;
  Il2CppObject *pIVar12;
  Anticheat_PlayerEntry_o *extraout_RAX_00;
  System_Action_string__o *pSVar13;
  Anticheat_PlayerEntry_o *extraout_RAX_01;
  long lVar14;
  System_Collections_Generic_Dictionary_byte__object__o *__this_00;
  Anticheat_PlayerEntry_o *extraout_RAX_02;
  System_Action_Dictionary_byte__object___o *pSVar15;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *value_00;
  Anticheat_PlayerEntry_o *extraout_RAX_03;
  Anticheat_PlayerEntry_o *extraout_RAX_04;
  int32_t iVar16;
  Il2CppClass *in_RCX;
  Il2CppClass *value_01;
  Il2CppClass *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  System_String_o *extraout_RDX;
  MethodInfo *method_06;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  System_Int32_array *extraout_RDX_02;
  MethodInfo *method_07;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  System_String_o *extraout_RDX_05;
  MethodInfo *method_08;
  MethodInfo *extraout_RDX_06;
  MethodInfo *extraout_RDX_07;
  MethodInfo *pMVar17;
  System_Collections_Generic_Dictionary_byte__object__array *data;
  System_Collections_Generic_Dictionary_byte__object__Fields *pSVar18;
  System_Action_string__o *pSVar19;
  System_Action_string__o *pSVar20;
  uint uVar21;
  uint uVar22;
  System_Collections_Generic_Dictionary_int__object__o *__this_01;
  Anticheat_ModeratorManager___c__DisplayClass89_0_o *pAVar23;
  System_Collections_Generic_Dictionary_byte__object__o *pSVar24;
  System_Collections_Generic_Dictionary_byte__object__array *unaff_R12;
  undefined8 uVar25;
  System_Action_Dictionary_byte__object___o *unaff_R13;
  int iVar26;
  Il2CppClass *pIVar27;
  ulong uVar28;
  bool bVar29;
  int iStack_174;
  int iStack_170;
  int iStack_16c;
  System_String_o *pSStack_168;
  System_String_o *pSStack_160;
  System_Action_string__o *pSStack_158;
  System_Collections_Generic_Dictionary_byte__object__o *pSStack_150;
  Il2CppClass *pIStack_148;
  ulong uStack_140;
  System_Int32_array *pSStack_138;
  int iStack_124;
  int iStack_120;
  uint uStack_11c;
  System_String_o *pSStack_118;
  Il2CppClass *pIStack_110;
  System_Action_Dictionary_byte__object___o *pSStack_108;
  Il2CppClass *pIStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  uint uStack_e0;
  uint auStack_dc [3];
  undefined8 uStack_d0;
  System_Collections_Generic_Dictionary_byte__object__array *pSStack_c8;
  System_Action_Dictionary_byte__object___o *pSStack_c0;
  ulong uStack_b8;
  System_Collections_Generic_Dictionary_byte__object__array *pSStack_b0;
  System_Action_string__o *pSStack_a8;
  uint auStack_9c [3];
  System_Collections_Generic_Dictionary_byte__object__array *pSStack_90;
  System_Collections_Generic_Dictionary_byte__object__array *pSStack_88;
  undefined8 *puStack_80;
  System_Collections_Generic_Dictionary_byte__object__array *pSStack_78;
  
  if (g_data_057aeb5e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerEntry);
    g_data_057aeb5e = '\x01';
  }
  pAVar3 = (Anticheat_PlayerEntry_o *)il2cpp_runtime_helper_023052d0(TypeInfo_PlayerEntry);
  Anticheat_PlayerEntry___ctor(pAVar3,(MethodInfo *)0x0);
  if (entry == (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
label_044d7171:
    pSVar5 = (System_Int32_array *)il2cpp_runtime_helper_022b2c90();
  }
  else {
    bVar2 = System_Collections_Generic_Dictionary_byte__object___ContainsKey(entry,'\0',MethodInfo_Boolean_ContainsKey);
    if ((char)bVar2 == '\0') {
      pSVar4 = g_data_057b9c00->static_fields->Empty;
label_044d7015:
      if (pAVar3 == (Anticheat_PlayerEntry_o *)0x0) goto label_044d7171;
      (pAVar3->fields).SessionId = pSVar4;
      il2cpp_runtime_helper_022b4080(&pAVar3->fields);
      bVar2 = System_Collections_Generic_Dictionary_byte__object___ContainsKey(entry,'\x01',MethodInfo_Boolean_ContainsKey);
      if ((char)bVar2 == '\0') {
        pSVar4 = g_data_057b9c00->static_fields->Empty;
      }
      else {
        pSVar4 = (System_String_o *)
                 System_Collections_Generic_Dictionary_byte__object___get_Item(entry,'\x01',MethodInfo_Object_get_Item);
        if ((pSVar4 != (System_String_o *)0x0) && (pSVar4->klass != g_data_057b9c00)) goto label_044d70de;
      }
      (pAVar3->fields).IPAddress = pSVar4;
      il2cpp_runtime_helper_022b4080(&(pAVar3->fields).IPAddress);
      bVar2 = System_Collections_Generic_Dictionary_byte__object___ContainsKey(entry,'\x02',MethodInfo_Boolean_ContainsKey);
      if ((char)bVar2 == '\0') goto label_044d70e9;
      pSVar4 = (System_String_o *)
               System_Collections_Generic_Dictionary_byte__object___get_Item(entry,'\x02',MethodInfo_Object_get_Item);
      if ((pSVar4 != (System_String_o *)0x0) && (pSVar4->klass != g_data_057b9c00)) goto label_044d70de;
    }
    else {
      pSVar4 = (System_String_o *)
               System_Collections_Generic_Dictionary_byte__object___get_Item(entry,'\0',MethodInfo_Object_get_Item);
      if ((pSVar4 == (System_String_o *)0x0) || (pSVar4->klass == g_data_057b9c00)) goto label_044d7015;
label_044d70de:
      il2cpp_runtime_helper_022b2fd0(pSVar4,g_data_057b9c00);
label_044d70e9:
      pSVar4 = g_data_057b9c00->static_fields->Empty;
    }
    (pAVar3->fields).Username = pSVar4;
    il2cpp_runtime_helper_022b4080(&(pAVar3->fields).Username);
    bVar2 = System_Collections_Generic_Dictionary_byte__object___ContainsKey(entry,'\x03',MethodInfo_Boolean_ContainsKey);
    in_RCX = (Il2CppClass *)0x0;
    iVar16 = 0;
    if ((char)bVar2 == '\0') {
label_044d7165:
      (pAVar3->fields).ActorNumber = iVar16;
      return pAVar3;
    }
    pSVar5 = (System_Int32_array *)
             System_Collections_Generic_Dictionary_byte__object___get_Item(entry,'\x03',MethodInfo_Object_get_Item);
    if (pSVar5 == (System_Int32_array *)0x0) goto label_044d7171;
    in_RCX = (((pSVar5->obj).klass)->_1).element_class;
    if (in_RCX == *(Il2CppClass **)(g_data_057b9bb8 + 0x40)) {
      piVar6 = (int32_t *)il2cpp_runtime_helper_02305440(pSVar5);
      iVar16 = *piVar6;
      goto label_044d7165;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057aeb5f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_Dictionary_byte_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Byte_System_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_byte_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RequestPlayerList_b__0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RequestPlayerList_b__1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass85_0);
    il2cpp_runtime_helper_023445d0(&"Sending request...");
    g_data_057aeb5f = '\x01';
  }
  onResponse = (System_Collections_Generic_Dictionary_byte__object__array *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass85_0);
  pSVar10 = (System_Action_string__o *)0x0;
  data = onResponse;
  Anticheat_ModeratorManager___c__DisplayClass85_0___ctor
            ((Anticheat_ModeratorManager___c__DisplayClass85_0_o *)onResponse,(MethodInfo *)0x0);
  if (onResponse != (System_Collections_Generic_Dictionary_byte__object__array *)0x0) {
    ((System_Collections_Generic_Dictionary_byte__object__Fields *)&onResponse->bounds)->_buckets = pSVar5;
    il2cpp_runtime_helper_022b4080((System_Collections_Generic_Dictionary_byte__object__Fields *)&onResponse->bounds,
                       pSVar5);
    pSVar5 = ((System_Collections_Generic_Dictionary_byte__object__Fields *)&onResponse->bounds)->_buckets;
    unaff_R12 = (System_Collections_Generic_Dictionary_byte__object__array *)&TypeInfo_ModeratorManager;
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057aeb5b == '\0') goto label_044d73a0;
label_044d727e:
      uVar25 = "Sending request...";
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto label_044d728f;
label_044d73c4:
      il2cpp_runtime_helper_02337ed0();
      lVar14 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
    }
    else {
      if (g_data_057aeb5b != '\0') goto label_044d727e;
label_044d73a0:
      uVar25 = "Sending request...";
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      g_data_057aeb5b = '\x01';
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto label_044d73c4;
label_044d728f:
      lVar14 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
    }
    if (lVar14 != 0) {
      (**(code **)(lVar14 + 0x18))(*(undefined8 *)(lVar14 + 0x40),uVar25,*(undefined8 *)(lVar14 + 0x28));
    }
    if (pSVar5 != (System_Int32_array *)0x0) {
      (*(code *)pSVar5->max_length)
                (*(intptr_t *)((long)pSVar5->m_Items + 0x20),uVar25,*(intptr_t *)((long)pSVar5->m_Items + 8));
    }
    pSVar7 = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_Dictionary_byte_object);
    System_Action_object____ctor();
    pSVar8 = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
    in_RCX = (Il2CppClass *)0x0;
    System_Action___ctor();
    pSVar4 = Anticheat_ModeratorManager__TrackRequest(5.0,pSVar7,pSVar8,method_01);
    pSVar9 = (System_Collections_Generic_Dictionary_byte__object__array *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_byte_object);
    pSVar10 = MethodInfo_Dictionary_2_System_Byte_System_Object;
    data = pSVar9;
    System_Collections_Generic_Dictionary_byte__object____ctor
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar9,
               (MethodInfo_304B1A0 *)MethodInfo_Dictionary_2_System_Byte_System_Object);
    if (pSVar9 != (System_Collections_Generic_Dictionary_byte__object__array *)0x0) {
      System_Collections_Generic_Dictionary_byte__object___Add
                ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar9,'\0',(Il2CppObject *)pSVar4,
                 MethodInfo_Void_Add);
      Anticheat_ModeratorManager__RaiseModEvent
                (0xb6,(System_Collections_Generic_Dictionary_byte__object__o *)pSVar9,method_02);
      return extraout_RAX;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeb60 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb60 = '\x01';
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto label_044d7488;
label_044d7418:
    if (g_data_057ae4db != '\0') goto label_044d7421;
label_044d7496:
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057ae4db = '\x01';
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto label_044d74b9;
label_044d7431:
    __this_01 = *(System_Collections_Generic_Dictionary_int__object__o **)
                 (*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x10);
    if (__this_01 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      pSVar9 = (System_Collections_Generic_Dictionary_byte__object__array *)0x0;
    }
    else {
label_044d74d5:
      System_Collections_Generic_Dictionary_int__object___Clear(__this_01,MethodInfo_Void_Clear);
      pSVar10 = (System_Action_string__o *)0x1;
      pSVar9 = data;
      onResponse = Anticheat_ModeratorManager__GetResponseEntries
                             ((System_Collections_Generic_Dictionary_byte__object__o *)data,'\x01',method_03);
      if ((onResponse == (System_Collections_Generic_Dictionary_byte__object__array *)0x0) ||
         ((int)onResponse->max_length < 1)) {
label_044d75fa:
        if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          lVar14 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x28);
        }
        else {
          lVar14 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x28);
        }
        if (lVar14 == 0) {
          return (Anticheat_PlayerEntry_o *)0x0;
        }
        pAVar3 = (Anticheat_PlayerEntry_o *)
                 (**(code **)(lVar14 + 0x18))(*(undefined8 *)(lVar14 + 0x40),*(undefined8 *)(lVar14 + 0x28));
        return pAVar3;
      }
      data = (System_Collections_Generic_Dictionary_byte__object__array *)0x0;
      unaff_R13 = (System_Action_Dictionary_byte__object___o *)&MethodInfo_Void_set_Item;
      if ((onResponse->max_length & 0xffffffff) != 0) {
        do {
          unaff_R12 = (System_Collections_Generic_Dictionary_byte__object__array *)
                      onResponse->m_Items[(long)data];
          value = unaff_R12;
          if (unaff_R12 != (System_Collections_Generic_Dictionary_byte__object__array *)0x0) {
            if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar9 = unaff_R12;
            value = (System_Collections_Generic_Dictionary_byte__object__array *)
                    Anticheat_ModeratorManager__ParsePlayerEntry
                              ((System_Collections_Generic_Dictionary_byte__object__o *)unaff_R12,
                               (MethodInfo *)pSVar10);
            if (value == (System_Collections_Generic_Dictionary_byte__object__array *)0x0) goto label_044d7654;
            if (0 < *(int *)(value->m_Items + 1)) {
              if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
                if (g_data_057ae4db == '\0') goto label_044d75ce;
label_044d75ae:
                iVar26 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
              }
              else {
                if (g_data_057ae4db != '\0') goto label_044d75ae;
label_044d75ce:
                il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
                g_data_057ae4db = '\x01';
                iVar26 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
              }
              if (iVar26 == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar9 = *(System_Collections_Generic_Dictionary_byte__object__array **)
                        (*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x10);
              unaff_R12 = value;
              if (pSVar9 == (System_Collections_Generic_Dictionary_byte__object__array *)0x0)
              goto label_044d7654;
              pSVar10 = (System_Action_string__o *)(ulong)*(uint *)(value->m_Items + 1);
              System_Collections_Generic_Dictionary_int__object___set_Item
                        ((System_Collections_Generic_Dictionary_int__object__o *)pSVar9,
                         *(uint *)(value->m_Items + 1),(Il2CppObject *)value,MethodInfo_Void_set_Item);
            }
          }
          data = (System_Collections_Generic_Dictionary_byte__object__array *)((long)&(data->obj).klass + 1);
          uVar21 = (uint)onResponse->max_length;
          in_RCX = (Il2CppClass *)(long)(int)uVar21;
          if ((long)in_RCX <= (long)data) goto label_044d75fa;
          unaff_R12 = value;
        } while (data < (System_Collections_Generic_Dictionary_byte__object__array *)(ulong)uVar21);
      }
      il2cpp_runtime_helper_022b2ca0();
    }
  }
  else {
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto label_044d7418;
label_044d7488:
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae4db == '\0') goto label_044d7496;
label_044d7421:
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto label_044d7431;
label_044d74b9:
    il2cpp_runtime_helper_02337ed0();
    __this_01 = *(System_Collections_Generic_Dictionary_int__object__o **)
                 (*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x10);
    pSVar9 = (System_Collections_Generic_Dictionary_byte__object__array *)0x0;
    if (__this_01 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_044d74d5;
  }
label_044d7654:
  uVar21 = (uint)pSVar9;
  il2cpp_runtime_helper_022b2c90();
  puStack_80 = &TypeInfo_ModeratorManager;
  pSStack_90 = data;
  pSStack_88 = unaff_R12;
  pSStack_78 = onResponse;
  if (g_data_057aeb63 == '\0') {
    pSStack_a8 = (System_Action_string__o *)0x44d7687;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_Dictionary_byte_object);
    pSStack_a8 = (System_Action_string__o *)0x44d7693;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    pSStack_a8 = (System_Action_string__o *)0x44d769f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pSStack_a8 = (System_Action_string__o *)0x44d76ab;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Byte_System_Object);
    pSStack_a8 = (System_Action_string__o *)0x44d76b7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_byte_object);
    pSStack_a8 = (System_Action_string__o *)0x44d76c3;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    pSStack_a8 = (System_Action_string__o *)0x44d76cf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_KickPlayer_b__0);
    pSStack_a8 = (System_Action_string__o *)0x44d76db;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_KickPlayer_b__1);
    pSStack_a8 = (System_Action_string__o *)0x44d76e7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass89_0);
    pSStack_a8 = (System_Action_string__o *)0x44d76f3;
    il2cpp_runtime_helper_023445d0(&"Sending request...");
    g_data_057aeb63 = '\x01';
  }
  pSStack_a8 = (System_Action_string__o *)0x44d7709;
  __this = (Anticheat_ModeratorManager___c__DisplayClass89_0_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass89_0);
  pSVar19 = (System_Action_string__o *)0x0;
  pSStack_a8 = (System_Action_string__o *)0x44d7716;
  pAVar23 = __this;
  Anticheat_ModeratorManager___c__DisplayClass89_0___ctor(__this,(MethodInfo *)0x0);
  uVar22 = (uint)pAVar23;
  if (__this != (Anticheat_ModeratorManager___c__DisplayClass89_0_o *)0x0) {
    (__this->fields).localStatus = pSVar10;
    pSStack_a8 = (System_Action_string__o *)0x44d7732;
    il2cpp_runtime_helper_022b4080(&__this->fields,pSVar10);
    pSVar10 = (__this->fields).localStatus;
    unaff_R12 = (System_Collections_Generic_Dictionary_byte__object__array *)&TypeInfo_ModeratorManager;
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      pSStack_a8 = (System_Action_string__o *)0x44d78f1;
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057aeb5b == '\0') goto label_044d7908;
label_044d7765:
      uVar25 = "Sending request...";
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto label_044d7776;
label_044d792c:
      pSStack_a8 = (System_Action_string__o *)0x44d7931;
      il2cpp_runtime_helper_02337ed0();
      lVar14 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
    }
    else {
      if (g_data_057aeb5b != '\0') goto label_044d7765;
label_044d7908:
      uVar25 = "Sending request...";
      pSStack_a8 = (System_Action_string__o *)0x44d7914;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      g_data_057aeb5b = '\x01';
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto label_044d792c;
label_044d7776:
      lVar14 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
    }
    if (lVar14 != 0) {
      pSStack_a8 = (System_Action_string__o *)0x44d7794;
      (**(code **)(lVar14 + 0x18))(*(undefined8 *)(lVar14 + 0x40),uVar25,*(undefined8 *)(lVar14 + 0x28));
    }
    if (pSVar10 != (System_Action_string__o *)0x0) {
      pSStack_a8 = (System_Action_string__o *)0x44d77a7;
      (*(code *)(pSVar10->fields).invoke_impl)((pSVar10->fields).method_code,uVar25,(pSVar10->fields).method);
    }
    pSStack_a8 = (System_Action_string__o *)0x44d77b6;
    onResponse = (System_Collections_Generic_Dictionary_byte__object__array *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_Dictionary_byte_object)
    ;
    pSStack_a8 = (System_Action_string__o *)0x44d77d0;
    System_Action_object____ctor();
    pSStack_a8 = (System_Action_string__o *)0x44d77df;
    pSVar8 = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
    in_RCX = (Il2CppClass *)0x0;
    pSStack_a8 = (System_Action_string__o *)0x44d77f9;
    System_Action___ctor();
    pSStack_a8 = (System_Action_string__o *)0x44d780c;
    pSVar10 = (System_Action_string__o *)
              Anticheat_ModeratorManager__TrackRequest
                        (5.0,(System_Action_Dictionary_byte__object___o *)onResponse,pSVar8,method_04);
    pSStack_a8 = (System_Action_string__o *)0x44d781e;
    pSVar11 = (System_Collections_Generic_Dictionary_byte__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_byte_object);
    pSStack_a8 = (System_Action_string__o *)0x44d7833;
    pSVar19 = MethodInfo_Dictionary_2_System_Byte_System_Object;
    pSVar24 = pSVar11;
    System_Collections_Generic_Dictionary_byte__object____ctor(pSVar11,(MethodInfo_304B1A0 *)MethodInfo_Dictionary_2_System_Byte_System_Object);
    uVar22 = (uint)pSVar24;
    if (pSVar11 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
      pSStack_a8 = (System_Action_string__o *)0x44d7853;
      System_Collections_Generic_Dictionary_byte__object___Add
                (pSVar11,'\0',(Il2CppObject *)pSVar10,MethodInfo_Void_Add);
      auStack_9c[2] = 1;
      pSStack_a8 = (System_Action_string__o *)0x44d7870;
      pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_9c + 2);
      pSStack_a8 = (System_Action_string__o *)0x44d7883;
      System_Collections_Generic_Dictionary_byte__object___Add(pSVar11,'\x01',pIVar12,MethodInfo_Void_Add);
      auStack_9c[1] = 0;
      pSStack_a8 = (System_Action_string__o *)0x44d7899;
      pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_9c + 1);
      pSStack_a8 = (System_Action_string__o *)0x44d78ac;
      System_Collections_Generic_Dictionary_byte__object___Add(pSVar11,'\x02',pIVar12,MethodInfo_Void_Add);
      pSStack_a8 = (System_Action_string__o *)0x44d78bf;
      auStack_9c[0] = uVar21;
      pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_9c);
      pSStack_a8 = (System_Action_string__o *)0x44d78d2;
      System_Collections_Generic_Dictionary_byte__object___Add(pSVar11,'\x03',pIVar12,MethodInfo_Void_Add);
      pSStack_a8 = (System_Action_string__o *)0x44d78df;
      Anticheat_ModeratorManager__RaiseModEvent(0xb4,pSVar11,method_05);
      return extraout_RAX_00;
    }
  }
  pSStack_a8 = (System_Action_string__o *)0x44d7953;
  il2cpp_runtime_helper_022b2c90();
  pIVar27 = (Il2CppClass *)(ulong)uVar22;
  value_01 = in_RCX;
  uStack_d0 = 0;
  pSStack_c8 = unaff_R12;
  pSStack_c0 = unaff_R13;
  uStack_b8 = (ulong)uVar21;
  pSStack_b0 = onResponse;
  pSStack_a8 = pSVar10;
  if (g_data_057aeb64 == '\0') {
    uStack_f0 = 0x44d798f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_Dictionary_byte_object);
    uStack_f0 = 0x44d799b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    uStack_f0 = 0x44d79a7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    uStack_f0 = 0x44d79b3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Byte_System_Object);
    uStack_f0 = 0x44d79bf;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_byte_object);
    uStack_f0 = 0x44d79cb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    uStack_f0 = 0x44d79d7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RoomBan_b__0);
    uStack_f0 = 0x44d79e3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RoomBan_b__1);
    uStack_f0 = 0x44d79ef;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass90_0);
    uStack_f0 = 0x44d79fb;
    il2cpp_runtime_helper_023445d0(&"Sending request...");
    g_data_057aeb64 = '\x01';
  }
  uStack_f0 = 0x44d7a11;
  pSVar13 = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass90_0);
  pSVar20 = (System_Action_string__o *)0x0;
  uStack_f0 = 0x44d7a1e;
  pSVar10 = pSVar13;
  Anticheat_ModeratorManager___c__DisplayClass90_0___ctor
            ((Anticheat_ModeratorManager___c__DisplayClass90_0_o *)pSVar13,(MethodInfo *)0x0);
  pSVar4 = extraout_RDX;
  if (pSVar13 != (System_Action_string__o *)0x0) {
    (pSVar13->fields).method_ptr = (intptr_t)extraout_RDX;
    uStack_f0 = 0x44d7a3f;
    uStack_e0 = uVar22;
    il2cpp_runtime_helper_022b4080(&pSVar13->fields,extraout_RDX);
    lVar14 = (pSVar13->fields).method_ptr;
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      uStack_f0 = 0x44d7c4a;
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057aeb5b == '\0') goto label_044d7c68;
label_044d7a71:
      uVar25 = "Sending request...";
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto label_044d7a81;
label_044d7c92:
      uStack_f0 = 0x44d7c9d;
      il2cpp_runtime_helper_02337ed0();
      lVar1 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
      pIVar27 = in_RCX;
    }
    else {
      if (g_data_057aeb5b != '\0') goto label_044d7a71;
label_044d7c68:
      uVar25 = "Sending request...";
      uStack_f0 = 0x44d7c74;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      g_data_057aeb5b = '\x01';
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto label_044d7c92;
label_044d7a81:
      lVar1 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
    }
    if (lVar1 != 0) {
      uStack_f0 = 0x44d7a9f;
      (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),uVar25,*(undefined8 *)(lVar1 + 0x28));
    }
    if (lVar14 != 0) {
      uStack_f0 = 0x44d7ab2;
      (**(code **)(lVar14 + 0x18))(*(undefined8 *)(lVar14 + 0x40),uVar25,*(undefined8 *)(lVar14 + 0x28));
    }
    uStack_f0 = 0x44d7ac1;
    unaff_R13 = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_Dictionary_byte_object);
    uStack_f0 = 0x44d7adb;
    System_Action_object____ctor();
    uStack_f0 = 0x44d7aea;
    pSVar8 = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
    value_01 = (Il2CppClass *)0x0;
    uStack_f0 = 0x44d7b04;
    System_Action___ctor();
    uStack_f0 = 0x44d7b17;
    pSVar4 = Anticheat_ModeratorManager__TrackRequest(5.0,unaff_R13,pSVar8,method_06);
    uStack_f0 = 0x44d7b29;
    pSVar13 = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_byte_object);
    uStack_f0 = 0x44d7b3e;
    pSVar20 = MethodInfo_Dictionary_2_System_Byte_System_Object;
    pSVar10 = pSVar13;
    System_Collections_Generic_Dictionary_byte__object____ctor
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar13,
               (MethodInfo_304B1A0 *)MethodInfo_Dictionary_2_System_Byte_System_Object);
    if (pSVar13 != (System_Action_string__o *)0x0) {
      uStack_f0 = 0x44d7b5f;
      System_Collections_Generic_Dictionary_byte__object___Add
                ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar13,'\0',(Il2CppObject *)pSVar4,
                 MethodInfo_Void_Add);
      auStack_dc[2] = (uint)pSVar19 & 0xff | 2;
      uStack_f0 = 0x44d7b7f;
      pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_dc + 2);
      uStack_f0 = 0x44d7b93;
      System_Collections_Generic_Dictionary_byte__object___Add
                ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar13,'\x01',pIVar12,MethodInfo_Void_Add)
      ;
      auStack_dc[1] = 0;
      uStack_f0 = 0x44d7ba9;
      pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_dc + 1);
      uStack_f0 = 0x44d7bbd;
      System_Collections_Generic_Dictionary_byte__object___Add
                ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar13,'\x02',pIVar12,MethodInfo_Void_Add)
      ;
      auStack_dc[0] = uStack_e0;
      uStack_f0 = 0x44d7bd3;
      pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_dc);
      uStack_f0 = 0x44d7be7;
      System_Collections_Generic_Dictionary_byte__object___Add
                ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar13,'\x03',pIVar12,MethodInfo_Void_Add)
      ;
      if (in_RCX == (Il2CppClass *)0x0) {
        in_RCX = (Il2CppClass *)g_data_057b9c00->static_fields->Empty;
      }
      uStack_f0 = 0x44d7c11;
      System_Collections_Generic_Dictionary_byte__object___Add
                ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar13,'\x04',
                 (Il2CppObject *)in_RCX,MethodInfo_Void_Add);
      pMVar17 = extraout_RDX_00;
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        uStack_f0 = 0x44d7c29;
        il2cpp_runtime_helper_02337ed0();
        pMVar17 = extraout_RDX_01;
      }
      uStack_f0 = 0x44d7c36;
      Anticheat_ModeratorManager__RaiseModEvent
                (0xb4,(System_Collections_Generic_Dictionary_byte__object__o *)pSVar13,pMVar17);
      return extraout_RAX_01;
    }
  }
  uStack_f0 = 0x44d7cc2;
  il2cpp_runtime_helper_022b2c90();
  uVar28 = (ulong)pSVar20 & 0xffffffff;
  method_00 = value_01;
  pSStack_118 = pSVar4;
  pIStack_110 = in_RCX;
  pSStack_108 = unaff_R13;
  pIStack_100 = pIVar27;
  uStack_f8 = (ulong)pSVar19 & 0xffffffff;
  uStack_f0 = 0;
  if (g_data_057aeb65 == '\0') {
    pSStack_138 = (System_Int32_array *)0x44d7d03;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_Dictionary_byte_object);
    pSStack_138 = (System_Int32_array *)0x44d7d0f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    pSStack_138 = (System_Int32_array *)0x44d7d1b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pSStack_138 = (System_Int32_array *)0x44d7d27;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Byte_System_Object);
    pSStack_138 = (System_Int32_array *)0x44d7d33;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_byte_object);
    pSStack_138 = (System_Int32_array *)0x44d7d3f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    pSStack_138 = (System_Int32_array *)0x44d7d4b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RoomBanPlayerEntry_b__0);
    pSStack_138 = (System_Int32_array *)0x44d7d57;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RoomBanPlayerEntry_b__1);
    pSStack_138 = (System_Int32_array *)0x44d7d63;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass91_0);
    pSStack_138 = (System_Int32_array *)0x44d7d6f;
    il2cpp_runtime_helper_023445d0(&"Player has no session ID to ban.");
    pSStack_138 = (System_Int32_array *)0x44d7d7b;
    il2cpp_runtime_helper_023445d0(&"Invalid player entry.");
    pSStack_138 = (System_Int32_array *)0x44d7d87;
    il2cpp_runtime_helper_023445d0(&"Sending request...");
    pSStack_138 = (System_Int32_array *)0x44d7d93;
    il2cpp_runtime_helper_023445d0(&"Player has no IP address to ban.");
    g_data_057aeb65 = '\x01';
  }
  pSStack_138 = (System_Int32_array *)0x44d7da9;
  pSVar11 = (System_Collections_Generic_Dictionary_byte__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass91_0);
  pSVar19 = (System_Action_string__o *)0x0;
  pSStack_138 = (System_Int32_array *)0x44d7db6;
  pSVar24 = pSVar11;
  Anticheat_ModeratorManager___c__DisplayClass91_0___ctor
            ((Anticheat_ModeratorManager___c__DisplayClass91_0_o *)pSVar11,(MethodInfo *)0x0);
  pSVar5 = extraout_RDX_02;
  if (pSVar11 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
    pSVar18 = &pSVar11->fields;
    (pSVar11->fields)._buckets = extraout_RDX_02;
    pSStack_138 = (System_Int32_array *)0x44d7dd5;
    il2cpp_runtime_helper_022b4080(pSVar18);
    if (pSVar10 == (System_Action_string__o *)0x0) {
      pSVar5 = pSVar18->_buckets;
      uVar25 = "Invalid player entry.";
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        pSStack_138 = (System_Int32_array *)0x44d7e42;
        il2cpp_runtime_helper_02337ed0();
        uVar25 = "Invalid player entry.";
      }
joined_r0x044d81fe:
      if (g_data_057aeb5b == '\0') {
        pSStack_138 = (System_Int32_array *)0x44d7e61;
        il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
        g_data_057aeb5b = '\x01';
      }
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        pSStack_138 = (System_Int32_array *)0x44d7f0d;
        il2cpp_runtime_helper_02337ed0();
        lVar14 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
        if (lVar14 == 0) {
          pAVar3 = (Anticheat_PlayerEntry_o *)0x0;
          goto label_044d7e96;
        }
      }
      else {
        lVar14 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
        pAVar3 = (Anticheat_PlayerEntry_o *)0x0;
        if (lVar14 == 0) goto label_044d7e96;
      }
      pSStack_138 = (System_Int32_array *)0x44d7e96;
      pAVar3 = (Anticheat_PlayerEntry_o *)
               (**(code **)(lVar14 + 0x18))
                         (*(undefined8 *)(lVar14 + 0x40),uVar25,*(undefined8 *)(lVar14 + 0x28));
label_044d7e96:
      if (pSVar5 == (System_Int32_array *)0x0) {
        return pAVar3;
      }
      pAVar3 = (Anticheat_PlayerEntry_o *)
               (*(code *)pSVar5->max_length)
                         (*(intptr_t *)((long)pSVar5->m_Items + 0x20),uVar25,
                          *(intptr_t *)((long)pSVar5->m_Items + 8));
      return pAVar3;
    }
    if ((char)uVar28 == '\0') {
      pSStack_138 = (System_Int32_array *)0x44d7eca;
      bVar2 = System_String__IsNullOrEmpty((System_String_o *)(pSVar10->fields).method_ptr,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        pSVar5 = pSVar18->_buckets;
        uVar25 = "Player has no session ID to ban.";
        if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
          pSStack_138 = (System_Int32_array *)0x44d81ed;
          il2cpp_runtime_helper_02337ed0();
          uVar25 = "Player has no session ID to ban.";
        }
        goto joined_r0x044d81fe;
      }
      iStack_124 = 1;
      pSVar10 = (System_Action_string__o *)(pSVar10->fields).method_ptr;
      pSVar5 = pSVar18->_buckets;
      iVar26 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
    }
    else {
      pSStack_138 = (System_Int32_array *)0x44d7def;
      bVar2 = System_String__IsNullOrEmpty((System_String_o *)(pSVar10->fields).invoke_impl,(MethodInfo *)0x0)
      ;
      if ((char)bVar2 != '\0') {
        pSVar5 = pSVar18->_buckets;
        uVar25 = "Player has no IP address to ban.";
        if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
          pSStack_138 = (System_Int32_array *)0x44d7e12;
          il2cpp_runtime_helper_02337ed0();
          uVar25 = "Player has no IP address to ban.";
        }
        goto joined_r0x044d81fe;
      }
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        pSStack_138 = (System_Int32_array *)0x44d820e;
        il2cpp_runtime_helper_02337ed0();
        if (g_data_057ae4d9 == '\0') goto label_044d821b;
label_044d7f4e:
        iVar26 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
      }
      else {
        if (g_data_057ae4d9 != '\0') goto label_044d7f4e;
label_044d821b:
        pSStack_138 = (System_Int32_array *)0x44d8227;
        il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
        g_data_057ae4d9 = '\x01';
        iVar26 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
      }
      if (iVar26 == 0) {
        pSStack_138 = (System_Int32_array *)0x44d8244;
        il2cpp_runtime_helper_02337ed0();
      }
      iStack_124 = (uint)(*(char *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 8) == '\0') * 2 + 2;
      pSVar10 = (System_Action_string__o *)(pSVar10->fields).invoke_impl;
      pSVar5 = pSVar18->_buckets;
      iVar26 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
    }
    if (iVar26 == 0) {
      pSStack_138 = (System_Int32_array *)0x44d7fba;
      il2cpp_runtime_helper_02337ed0();
    }
    uVar25 = "Sending request...";
    if (g_data_057aeb5b == '\0') {
      pSStack_138 = (System_Int32_array *)0x44d81a2;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      g_data_057aeb5b = '\x01';
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto label_044d81c0;
label_044d7fe8:
      lVar14 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
    }
    else {
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto label_044d7fe8;
label_044d81c0:
      pSStack_138 = (System_Int32_array *)0x44d81c5;
      il2cpp_runtime_helper_02337ed0();
      lVar14 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
    }
    if (lVar14 != 0) {
      pSStack_138 = (System_Int32_array *)0x44d8006;
      (**(code **)(lVar14 + 0x18))(*(undefined8 *)(lVar14 + 0x40),uVar25,*(undefined8 *)(lVar14 + 0x28));
    }
    if (pSVar5 != (System_Int32_array *)0x0) {
      pSStack_138 = (System_Int32_array *)0x44d8019;
      (*(code *)pSVar5->max_length)
                (*(intptr_t *)((long)pSVar5->m_Items + 0x20),uVar25,*(intptr_t *)((long)pSVar5->m_Items + 8));
    }
    pSStack_138 = (System_Int32_array *)0x44d8028;
    pSVar7 = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_Dictionary_byte_object);
    pSStack_138 = (System_Int32_array *)0x44d8042;
    System_Action_object____ctor();
    pSStack_138 = (System_Int32_array *)0x44d8051;
    pSVar8 = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
    method_00 = (Il2CppClass *)0x0;
    pSStack_138 = (System_Int32_array *)0x44d806b;
    System_Action___ctor();
    pSStack_138 = (System_Int32_array *)0x44d807e;
    pSVar5 = (System_Int32_array *)Anticheat_ModeratorManager__TrackRequest(5.0,pSVar7,pSVar8,method_07);
    pSStack_138 = (System_Int32_array *)0x44d8090;
    __this_00 = (System_Collections_Generic_Dictionary_byte__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_byte_object);
    pSStack_138 = (System_Int32_array *)0x44d80a5;
    pSVar19 = MethodInfo_Dictionary_2_System_Byte_System_Object;
    pSVar24 = __this_00;
    System_Collections_Generic_Dictionary_byte__object____ctor(__this_00,(MethodInfo_304B1A0 *)MethodInfo_Dictionary_2_System_Byte_System_Object);
    pSVar4 = (System_String_o *)0x0;
    if (__this_00 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
      pSStack_138 = (System_Int32_array *)0x44d80c6;
      System_Collections_Generic_Dictionary_byte__object___Add
                (__this_00,'\0',(Il2CppObject *)pSVar5,MethodInfo_Void_Add);
      uStack_11c = (uint)pSVar20 & 0xff | 2;
      pSStack_138 = (System_Int32_array *)0x44d80e6;
      pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_11c);
      pSStack_138 = (System_Int32_array *)0x44d80fa;
      System_Collections_Generic_Dictionary_byte__object___Add(__this_00,'\x01',pIVar12,MethodInfo_Void_Add);
      iStack_120 = iStack_124;
      pSStack_138 = (System_Int32_array *)0x44d8110;
      pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_120);
      pSStack_138 = (System_Int32_array *)0x44d8124;
      System_Collections_Generic_Dictionary_byte__object___Add(__this_00,'\x02',pIVar12,MethodInfo_Void_Add);
      pSStack_138 = (System_Int32_array *)0x44d8138;
      System_Collections_Generic_Dictionary_byte__object___Add
                (__this_00,'\x03',(Il2CppObject *)pSVar10,MethodInfo_Void_Add);
      if (value_01 == (Il2CppClass *)0x0) {
        value_01 = (Il2CppClass *)g_data_057b9c00->static_fields->Empty;
      }
      pSStack_138 = (System_Int32_array *)0x44d8162;
      System_Collections_Generic_Dictionary_byte__object___Add
                (__this_00,'\x04',(Il2CppObject *)value_01,MethodInfo_Void_Add);
      pMVar17 = extraout_RDX_03;
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        pSStack_138 = (System_Int32_array *)0x44d817a;
        il2cpp_runtime_helper_02337ed0();
        pMVar17 = extraout_RDX_04;
      }
      pSStack_138 = (System_Int32_array *)0x44d8187;
      Anticheat_ModeratorManager__RaiseModEvent(0xb4,__this_00,pMVar17);
      return extraout_RAX_02;
    }
  }
  pSStack_138 = (System_Int32_array *)0x44d8252;
  il2cpp_runtime_helper_022b2c90();
  pSStack_160 = pSVar4;
  pSStack_158 = pSVar10;
  pSStack_150 = pSVar11;
  pIStack_148 = value_01;
  uStack_140 = uVar28;
  pSStack_138 = pSVar5;
  if (g_data_057aeb66 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_Dictionary_byte_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Byte_System_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_byte_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RoomUnban_b__0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RoomUnban_b__1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass92_0);
    il2cpp_runtime_helper_023445d0(&"Sending request...");
    g_data_057aeb66 = '\x01';
  }
  pSVar15 = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass92_0);
  pSVar7 = pSVar15;
  Anticheat_ModeratorManager___c__DisplayClass92_0___ctor
            ((Anticheat_ModeratorManager___c__DisplayClass92_0_o *)pSVar15,(MethodInfo *)0x0);
  if (pSVar15 == (System_Action_Dictionary_byte__object___o *)0x0) goto label_044d867f;
  (pSVar15->fields).method_ptr = (intptr_t)pSVar19;
  il2cpp_runtime_helper_022b4080(&pSVar15->fields,pSVar19);
  pSVar10 = (System_Action_string__o *)(pSVar15->fields).method_ptr;
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057aeb5b == '\0') goto label_044d84a5;
label_044d836a:
    uVar25 = "Sending request...";
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto label_044d837b;
label_044d84c9:
    il2cpp_runtime_helper_02337ed0();
    lVar14 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
  }
  else {
    if (g_data_057aeb5b != '\0') goto label_044d836a;
label_044d84a5:
    uVar25 = "Sending request...";
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb5b = '\x01';
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto label_044d84c9;
label_044d837b:
    lVar14 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
  }
  if (lVar14 != 0) {
    (**(code **)(lVar14 + 0x18))(*(undefined8 *)(lVar14 + 0x40),uVar25,*(undefined8 *)(lVar14 + 0x28));
  }
  if (pSVar10 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar10->fields).invoke_impl)((pSVar10->fields).method_code,uVar25,(pSVar10->fields).method);
  }
  pSVar7 = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_Dictionary_byte_object);
  System_Action_object____ctor();
  pSVar8 = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
  method_00 = (Il2CppClass *)0x0;
  System_Action___ctor();
  pSVar4 = Anticheat_ModeratorManager__TrackRequest(5.0,pSVar7,pSVar8,method_08);
  if (pSVar24 == (System_Collections_Generic_Dictionary_byte__object__o *)0x0) goto label_044d867f;
  iVar26 = (pSVar24->fields)._freeCount;
  pSStack_168 = extraout_RDX_05;
  if ((char)(pSVar24->fields)._version == '\0') {
    if (0 < iVar26) goto label_044d84f3;
    value_00 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)(pSVar24->fields)._buckets;
    iVar26 = 1;
  }
  else if (iVar26 < 1) {
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057ae4d9 == '\0') goto label_044d864d;
label_044d8457:
      iVar26 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
    }
    else {
      if (g_data_057ae4d9 != '\0') goto label_044d8457;
label_044d864d:
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      g_data_057ae4d9 = '\x01';
      iVar26 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
    }
    if (iVar26 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar29 = *(char *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 8) == '\0';
    method_00 = (Il2CppClass *)(ulong)bVar29;
    iVar26 = (uint)bVar29 * 2 + 2;
    value_00 = (pSVar24->fields)._entries;
  }
  else {
label_044d84f3:
    iStack_16c = iVar26;
    value_00 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
               il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_16c);
    iVar26 = 0;
  }
  pSVar15 = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_byte_object);
  pSVar7 = pSVar15;
  System_Collections_Generic_Dictionary_byte__object____ctor
            ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar15,
             (MethodInfo_304B1A0 *)MethodInfo_Dictionary_2_System_Byte_System_Object);
  if (pSVar15 != (System_Action_Dictionary_byte__object___o *)0x0) {
    System_Collections_Generic_Dictionary_byte__object___Add
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar15,'\0',(Il2CppObject *)pSVar4,
               MethodInfo_Void_Add);
    iStack_170 = 5 - (uint)((char)(pSVar24->fields)._version == '\0');
    pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_170);
    System_Collections_Generic_Dictionary_byte__object___Add
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar15,'\x01',pIVar12,MethodInfo_Void_Add);
    iStack_174 = iVar26;
    pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_174);
    System_Collections_Generic_Dictionary_byte__object___Add
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar15,'\x02',pIVar12,MethodInfo_Void_Add);
    System_Collections_Generic_Dictionary_byte__object___Add
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar15,'\x03',&value_00->obj,
               MethodInfo_Void_Add);
    pSVar4 = pSStack_168;
    if (pSStack_168 == (System_String_o *)0x0) {
      pSVar4 = g_data_057b9c00->static_fields->Empty;
    }
    System_Collections_Generic_Dictionary_byte__object___Add
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar15,'\x04',(Il2CppObject *)pSVar4,
               MethodInfo_Void_Add);
    pMVar17 = extraout_RDX_06;
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pMVar17 = extraout_RDX_07;
    }
    Anticheat_ModeratorManager__RaiseModEvent
              (0xb4,(System_Collections_Generic_Dictionary_byte__object__o *)pSVar15,pMVar17);
    return extraout_RAX_03;
  }
label_044d867f:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeb67 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb67 = '\x01';
  }
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Anticheat_ModeratorManager__RequestRoomBanList_43d86e0
            (0,0x32,(System_Action_string__o *)pSVar7,(MethodInfo *)method_00);
  return extraout_RAX_04;
}


// Anticheat.ModeratorManager$$RequestPlayerList
// il2cpp: void Anticheat_ModeratorManager__RequestPlayerList (System_Action_string__o* localStatus, const MethodInfo* method);
// 0x44d7180

void Anticheat_ModeratorManager__RequestPlayerList(System_Action_string__o *localStatus,MethodInfo *method)

{
  long lVar1;
  long lVar2;
  bool_conflict bVar3;
  System_Collections_Generic_Dictionary_byte__object__array *onResponse;
  System_Action_Dictionary_byte__object___o *pSVar4;
  System_Action_o *pSVar5;
  System_String_o *pSVar6;
  System_Collections_Generic_Dictionary_byte__object__array *pSVar7;
  System_Collections_Generic_Dictionary_byte__object__array *value;
  Anticheat_ModeratorManager___c__DisplayClass89_0_o *__this;
  System_Action_string__o *pSVar8;
  System_Collections_Generic_Dictionary_byte__object__o *pSVar9;
  Il2CppObject *pIVar10;
  System_Action_string__o *pSVar11;
  System_Int32_array *pSVar12;
  System_Collections_Generic_Dictionary_byte__object__o *__this_00;
  System_Action_Dictionary_byte__object___o *pSVar13;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *value_00;
  MethodInfo *in_RCX;
  MethodInfo *pMVar14;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  System_String_o *extraout_RDX;
  MethodInfo *method_06;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  System_Int32_array *extraout_RDX_02;
  MethodInfo *method_07;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  Il2CppObject *extraout_RDX_05;
  MethodInfo *method_08;
  MethodInfo *extraout_RDX_06;
  MethodInfo *extraout_RDX_07;
  System_Collections_Generic_Dictionary_byte__object__array *data;
  System_Collections_Generic_Dictionary_byte__object__Fields *pSVar15;
  System_Action_string__o *pSVar16;
  System_Action_string__o *pSVar17;
  uint uVar18;
  uint uVar19;
  System_Collections_Generic_Dictionary_int__object__o *__this_01;
  Anticheat_ModeratorManager___c__DisplayClass89_0_o *pAVar20;
  System_Collections_Generic_Dictionary_byte__object__o *pSVar21;
  System_Collections_Generic_Dictionary_byte__object__array *unaff_R12;
  undefined8 uVar22;
  System_Action_Dictionary_byte__object___o *unaff_R13;
  int iVar23;
  MethodInfo *pMVar24;
  ulong uVar25;
  bool bVar26;
  int iStack_15c;
  int iStack_158;
  int iStack_154;
  Il2CppObject *pIStack_150;
  System_String_o *pSStack_148;
  System_Action_string__o *pSStack_140;
  System_Collections_Generic_Dictionary_byte__object__o *pSStack_138;
  MethodInfo *pMStack_130;
  ulong uStack_128;
  System_Int32_array *pSStack_120;
  int iStack_10c;
  int iStack_108;
  uint uStack_104;
  System_String_o *pSStack_100;
  MethodInfo *pMStack_f8;
  System_Action_Dictionary_byte__object___o *pSStack_f0;
  MethodInfo *pMStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  uint uStack_c8;
  uint auStack_c4 [3];
  undefined8 uStack_b8;
  System_Collections_Generic_Dictionary_byte__object__array *pSStack_b0;
  System_Action_Dictionary_byte__object___o *pSStack_a8;
  ulong uStack_a0;
  System_Collections_Generic_Dictionary_byte__object__array *pSStack_98;
  System_Action_string__o *pSStack_90;
  uint auStack_84 [3];
  System_Collections_Generic_Dictionary_byte__object__array *pSStack_78;
  System_Collections_Generic_Dictionary_byte__object__array *pSStack_70;
  undefined8 *puStack_68;
  System_Collections_Generic_Dictionary_byte__object__array *pSStack_60;
  
  if (g_data_057aeb5f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_Dictionary_byte_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Byte_System_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_byte_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RequestPlayerList_b__0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RequestPlayerList_b__1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass85_0);
    il2cpp_runtime_helper_023445d0(&"Sending request...");
    g_data_057aeb5f = '\x01';
  }
  onResponse = (System_Collections_Generic_Dictionary_byte__object__array *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass85_0);
  pSVar8 = (System_Action_string__o *)0x0;
  data = onResponse;
  Anticheat_ModeratorManager___c__DisplayClass85_0___ctor
            ((Anticheat_ModeratorManager___c__DisplayClass85_0_o *)onResponse,(MethodInfo *)0x0);
  if (onResponse != (System_Collections_Generic_Dictionary_byte__object__array *)0x0) {
    ((System_Collections_Generic_Dictionary_byte__object__Fields *)&onResponse->bounds)->_buckets =
         (System_Int32_array *)localStatus;
    il2cpp_runtime_helper_022b4080((System_Collections_Generic_Dictionary_byte__object__Fields *)&onResponse->bounds,
                       localStatus);
    pSVar12 = ((System_Collections_Generic_Dictionary_byte__object__Fields *)&onResponse->bounds)->_buckets;
    unaff_R12 = (System_Collections_Generic_Dictionary_byte__object__array *)&TypeInfo_ModeratorManager;
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057aeb5b == '\0') goto label_044d73a0;
label_044d727e:
      uVar22 = "Sending request...";
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto label_044d728f;
label_044d73c4:
      il2cpp_runtime_helper_02337ed0();
      lVar1 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
    }
    else {
      if (g_data_057aeb5b != '\0') goto label_044d727e;
label_044d73a0:
      uVar22 = "Sending request...";
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      g_data_057aeb5b = '\x01';
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto label_044d73c4;
label_044d728f:
      lVar1 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
    }
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),uVar22,*(undefined8 *)(lVar1 + 0x28));
    }
    if (pSVar12 != (System_Int32_array *)0x0) {
      (*(code *)pSVar12->max_length)
                (*(intptr_t *)((long)pSVar12->m_Items + 0x20),uVar22,*(intptr_t *)((long)pSVar12->m_Items + 8)
                );
    }
    pSVar4 = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_Dictionary_byte_object);
    System_Action_object____ctor();
    pSVar5 = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
    in_RCX = (MethodInfo *)0x0;
    System_Action___ctor();
    pSVar6 = Anticheat_ModeratorManager__TrackRequest(5.0,pSVar4,pSVar5,method_01);
    pSVar7 = (System_Collections_Generic_Dictionary_byte__object__array *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_byte_object);
    pSVar8 = MethodInfo_Dictionary_2_System_Byte_System_Object;
    data = pSVar7;
    System_Collections_Generic_Dictionary_byte__object____ctor
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar7,
               (MethodInfo_304B1A0 *)MethodInfo_Dictionary_2_System_Byte_System_Object);
    if (pSVar7 != (System_Collections_Generic_Dictionary_byte__object__array *)0x0) {
      System_Collections_Generic_Dictionary_byte__object___Add
                ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar7,'\0',(Il2CppObject *)pSVar6,
                 MethodInfo_Void_Add);
      Anticheat_ModeratorManager__RaiseModEvent
                (0xb6,(System_Collections_Generic_Dictionary_byte__object__o *)pSVar7,method_02);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeb60 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb60 = '\x01';
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto label_044d7488;
label_044d7418:
    if (g_data_057ae4db != '\0') goto label_044d7421;
label_044d7496:
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057ae4db = '\x01';
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto label_044d74b9;
label_044d7431:
    __this_01 = *(System_Collections_Generic_Dictionary_int__object__o **)
                 (*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x10);
    if (__this_01 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      pSVar7 = (System_Collections_Generic_Dictionary_byte__object__array *)0x0;
    }
    else {
label_044d74d5:
      System_Collections_Generic_Dictionary_int__object___Clear(__this_01,MethodInfo_Void_Clear);
      pSVar8 = (System_Action_string__o *)0x1;
      pSVar7 = data;
      onResponse = Anticheat_ModeratorManager__GetResponseEntries
                             ((System_Collections_Generic_Dictionary_byte__object__o *)data,'\x01',method_03);
      if ((onResponse == (System_Collections_Generic_Dictionary_byte__object__array *)0x0) ||
         ((int)onResponse->max_length < 1)) {
label_044d75fa:
        if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          lVar1 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x28);
        }
        else {
          lVar1 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x28);
        }
        if (lVar1 == 0) {
          return;
        }
        (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
        return;
      }
      data = (System_Collections_Generic_Dictionary_byte__object__array *)0x0;
      unaff_R13 = (System_Action_Dictionary_byte__object___o *)&MethodInfo_Void_set_Item;
      if ((onResponse->max_length & 0xffffffff) != 0) {
        do {
          unaff_R12 = (System_Collections_Generic_Dictionary_byte__object__array *)
                      onResponse->m_Items[(long)data];
          value = unaff_R12;
          if (unaff_R12 != (System_Collections_Generic_Dictionary_byte__object__array *)0x0) {
            if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar7 = unaff_R12;
            value = (System_Collections_Generic_Dictionary_byte__object__array *)
                    Anticheat_ModeratorManager__ParsePlayerEntry
                              ((System_Collections_Generic_Dictionary_byte__object__o *)unaff_R12,
                               (MethodInfo *)pSVar8);
            if (value == (System_Collections_Generic_Dictionary_byte__object__array *)0x0) goto label_044d7654;
            if (0 < *(int *)(value->m_Items + 1)) {
              if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
                if (g_data_057ae4db == '\0') goto label_044d75ce;
label_044d75ae:
                iVar23 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
              }
              else {
                if (g_data_057ae4db != '\0') goto label_044d75ae;
label_044d75ce:
                il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
                g_data_057ae4db = '\x01';
                iVar23 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
              }
              if (iVar23 == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar7 = *(System_Collections_Generic_Dictionary_byte__object__array **)
                        (*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x10);
              unaff_R12 = value;
              if (pSVar7 == (System_Collections_Generic_Dictionary_byte__object__array *)0x0)
              goto label_044d7654;
              pSVar8 = (System_Action_string__o *)(ulong)*(uint *)(value->m_Items + 1);
              System_Collections_Generic_Dictionary_int__object___set_Item
                        ((System_Collections_Generic_Dictionary_int__object__o *)pSVar7,
                         *(uint *)(value->m_Items + 1),(Il2CppObject *)value,MethodInfo_Void_set_Item);
            }
          }
          data = (System_Collections_Generic_Dictionary_byte__object__array *)((long)&(data->obj).klass + 1);
          uVar18 = (uint)onResponse->max_length;
          in_RCX = (MethodInfo *)(long)(int)uVar18;
          if ((long)in_RCX <= (long)data) goto label_044d75fa;
          unaff_R12 = value;
        } while (data < (System_Collections_Generic_Dictionary_byte__object__array *)(ulong)uVar18);
      }
      il2cpp_runtime_helper_022b2ca0();
    }
  }
  else {
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto label_044d7418;
label_044d7488:
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae4db == '\0') goto label_044d7496;
label_044d7421:
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto label_044d7431;
label_044d74b9:
    il2cpp_runtime_helper_02337ed0();
    __this_01 = *(System_Collections_Generic_Dictionary_int__object__o **)
                 (*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x10);
    pSVar7 = (System_Collections_Generic_Dictionary_byte__object__array *)0x0;
    if (__this_01 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_044d74d5;
  }
label_044d7654:
  uVar18 = (uint)pSVar7;
  il2cpp_runtime_helper_022b2c90();
  puStack_68 = &TypeInfo_ModeratorManager;
  pSStack_78 = data;
  pSStack_70 = unaff_R12;
  pSStack_60 = onResponse;
  if (g_data_057aeb63 == '\0') {
    pSStack_90 = (System_Action_string__o *)0x44d7687;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_Dictionary_byte_object);
    pSStack_90 = (System_Action_string__o *)0x44d7693;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    pSStack_90 = (System_Action_string__o *)0x44d769f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pSStack_90 = (System_Action_string__o *)0x44d76ab;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Byte_System_Object);
    pSStack_90 = (System_Action_string__o *)0x44d76b7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_byte_object);
    pSStack_90 = (System_Action_string__o *)0x44d76c3;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    pSStack_90 = (System_Action_string__o *)0x44d76cf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_KickPlayer_b__0);
    pSStack_90 = (System_Action_string__o *)0x44d76db;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_KickPlayer_b__1);
    pSStack_90 = (System_Action_string__o *)0x44d76e7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass89_0);
    pSStack_90 = (System_Action_string__o *)0x44d76f3;
    il2cpp_runtime_helper_023445d0(&"Sending request...");
    g_data_057aeb63 = '\x01';
  }
  pSStack_90 = (System_Action_string__o *)0x44d7709;
  __this = (Anticheat_ModeratorManager___c__DisplayClass89_0_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass89_0);
  pSVar16 = (System_Action_string__o *)0x0;
  pSStack_90 = (System_Action_string__o *)0x44d7716;
  pAVar20 = __this;
  Anticheat_ModeratorManager___c__DisplayClass89_0___ctor(__this,(MethodInfo *)0x0);
  uVar19 = (uint)pAVar20;
  if (__this != (Anticheat_ModeratorManager___c__DisplayClass89_0_o *)0x0) {
    (__this->fields).localStatus = pSVar8;
    pSStack_90 = (System_Action_string__o *)0x44d7732;
    il2cpp_runtime_helper_022b4080(&__this->fields,pSVar8);
    pSVar8 = (__this->fields).localStatus;
    unaff_R12 = (System_Collections_Generic_Dictionary_byte__object__array *)&TypeInfo_ModeratorManager;
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      pSStack_90 = (System_Action_string__o *)0x44d78f1;
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057aeb5b == '\0') goto label_044d7908;
label_044d7765:
      uVar22 = "Sending request...";
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto label_044d7776;
label_044d792c:
      pSStack_90 = (System_Action_string__o *)0x44d7931;
      il2cpp_runtime_helper_02337ed0();
      lVar1 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
    }
    else {
      if (g_data_057aeb5b != '\0') goto label_044d7765;
label_044d7908:
      uVar22 = "Sending request...";
      pSStack_90 = (System_Action_string__o *)0x44d7914;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      g_data_057aeb5b = '\x01';
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto label_044d792c;
label_044d7776:
      lVar1 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
    }
    if (lVar1 != 0) {
      pSStack_90 = (System_Action_string__o *)0x44d7794;
      (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),uVar22,*(undefined8 *)(lVar1 + 0x28));
    }
    if (pSVar8 != (System_Action_string__o *)0x0) {
      pSStack_90 = (System_Action_string__o *)0x44d77a7;
      (*(code *)(pSVar8->fields).invoke_impl)((pSVar8->fields).method_code,uVar22,(pSVar8->fields).method);
    }
    pSStack_90 = (System_Action_string__o *)0x44d77b6;
    onResponse = (System_Collections_Generic_Dictionary_byte__object__array *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_Dictionary_byte_object)
    ;
    pSStack_90 = (System_Action_string__o *)0x44d77d0;
    System_Action_object____ctor();
    pSStack_90 = (System_Action_string__o *)0x44d77df;
    pSVar5 = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
    in_RCX = (MethodInfo *)0x0;
    pSStack_90 = (System_Action_string__o *)0x44d77f9;
    System_Action___ctor();
    pSStack_90 = (System_Action_string__o *)0x44d780c;
    pSVar8 = (System_Action_string__o *)
             Anticheat_ModeratorManager__TrackRequest
                       (5.0,(System_Action_Dictionary_byte__object___o *)onResponse,pSVar5,method_04);
    pSStack_90 = (System_Action_string__o *)0x44d781e;
    pSVar9 = (System_Collections_Generic_Dictionary_byte__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_byte_object);
    pSStack_90 = (System_Action_string__o *)0x44d7833;
    pSVar16 = MethodInfo_Dictionary_2_System_Byte_System_Object;
    pSVar21 = pSVar9;
    System_Collections_Generic_Dictionary_byte__object____ctor(pSVar9,(MethodInfo_304B1A0 *)MethodInfo_Dictionary_2_System_Byte_System_Object);
    uVar19 = (uint)pSVar21;
    if (pSVar9 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
      pSStack_90 = (System_Action_string__o *)0x44d7853;
      System_Collections_Generic_Dictionary_byte__object___Add
                (pSVar9,'\0',(Il2CppObject *)pSVar8,MethodInfo_Void_Add);
      auStack_84[2] = 1;
      pSStack_90 = (System_Action_string__o *)0x44d7870;
      pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_84 + 2);
      pSStack_90 = (System_Action_string__o *)0x44d7883;
      System_Collections_Generic_Dictionary_byte__object___Add(pSVar9,'\x01',pIVar10,MethodInfo_Void_Add);
      auStack_84[1] = 0;
      pSStack_90 = (System_Action_string__o *)0x44d7899;
      pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_84 + 1);
      pSStack_90 = (System_Action_string__o *)0x44d78ac;
      System_Collections_Generic_Dictionary_byte__object___Add(pSVar9,'\x02',pIVar10,MethodInfo_Void_Add);
      pSStack_90 = (System_Action_string__o *)0x44d78bf;
      auStack_84[0] = uVar18;
      pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_84);
      pSStack_90 = (System_Action_string__o *)0x44d78d2;
      System_Collections_Generic_Dictionary_byte__object___Add(pSVar9,'\x03',pIVar10,MethodInfo_Void_Add);
      pSStack_90 = (System_Action_string__o *)0x44d78df;
      Anticheat_ModeratorManager__RaiseModEvent(0xb4,pSVar9,method_05);
      return;
    }
  }
  pSStack_90 = (System_Action_string__o *)0x44d7953;
  il2cpp_runtime_helper_022b2c90();
  pMVar24 = (MethodInfo *)(ulong)uVar19;
  pMVar14 = in_RCX;
  uStack_b8 = 0;
  pSStack_b0 = unaff_R12;
  pSStack_a8 = unaff_R13;
  uStack_a0 = (ulong)uVar18;
  pSStack_98 = onResponse;
  pSStack_90 = pSVar8;
  if (g_data_057aeb64 == '\0') {
    uStack_d8 = 0x44d798f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_Dictionary_byte_object);
    uStack_d8 = 0x44d799b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    uStack_d8 = 0x44d79a7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    uStack_d8 = 0x44d79b3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Byte_System_Object);
    uStack_d8 = 0x44d79bf;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_byte_object);
    uStack_d8 = 0x44d79cb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    uStack_d8 = 0x44d79d7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RoomBan_b__0);
    uStack_d8 = 0x44d79e3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RoomBan_b__1);
    uStack_d8 = 0x44d79ef;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass90_0);
    uStack_d8 = 0x44d79fb;
    il2cpp_runtime_helper_023445d0(&"Sending request...");
    g_data_057aeb64 = '\x01';
  }
  uStack_d8 = 0x44d7a11;
  pSVar11 = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass90_0);
  pSVar17 = (System_Action_string__o *)0x0;
  uStack_d8 = 0x44d7a1e;
  pSVar8 = pSVar11;
  Anticheat_ModeratorManager___c__DisplayClass90_0___ctor
            ((Anticheat_ModeratorManager___c__DisplayClass90_0_o *)pSVar11,(MethodInfo *)0x0);
  pSVar6 = extraout_RDX;
  if (pSVar11 != (System_Action_string__o *)0x0) {
    (pSVar11->fields).method_ptr = (intptr_t)extraout_RDX;
    uStack_d8 = 0x44d7a3f;
    uStack_c8 = uVar19;
    il2cpp_runtime_helper_022b4080(&pSVar11->fields,extraout_RDX);
    lVar1 = (pSVar11->fields).method_ptr;
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      uStack_d8 = 0x44d7c4a;
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057aeb5b == '\0') goto label_044d7c68;
label_044d7a71:
      uVar22 = "Sending request...";
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto label_044d7a81;
label_044d7c92:
      uStack_d8 = 0x44d7c9d;
      il2cpp_runtime_helper_02337ed0();
      lVar2 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
      pMVar24 = in_RCX;
    }
    else {
      if (g_data_057aeb5b != '\0') goto label_044d7a71;
label_044d7c68:
      uVar22 = "Sending request...";
      uStack_d8 = 0x44d7c74;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      g_data_057aeb5b = '\x01';
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto label_044d7c92;
label_044d7a81:
      lVar2 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
    }
    if (lVar2 != 0) {
      uStack_d8 = 0x44d7a9f;
      (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),uVar22,*(undefined8 *)(lVar2 + 0x28));
    }
    if (lVar1 != 0) {
      uStack_d8 = 0x44d7ab2;
      (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),uVar22,*(undefined8 *)(lVar1 + 0x28));
    }
    uStack_d8 = 0x44d7ac1;
    unaff_R13 = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_Dictionary_byte_object);
    uStack_d8 = 0x44d7adb;
    System_Action_object____ctor();
    uStack_d8 = 0x44d7aea;
    pSVar5 = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
    pMVar14 = (MethodInfo *)0x0;
    uStack_d8 = 0x44d7b04;
    System_Action___ctor();
    uStack_d8 = 0x44d7b17;
    pSVar6 = Anticheat_ModeratorManager__TrackRequest(5.0,unaff_R13,pSVar5,method_06);
    uStack_d8 = 0x44d7b29;
    pSVar11 = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_byte_object);
    uStack_d8 = 0x44d7b3e;
    pSVar17 = MethodInfo_Dictionary_2_System_Byte_System_Object;
    pSVar8 = pSVar11;
    System_Collections_Generic_Dictionary_byte__object____ctor
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar11,
               (MethodInfo_304B1A0 *)MethodInfo_Dictionary_2_System_Byte_System_Object);
    if (pSVar11 != (System_Action_string__o *)0x0) {
      uStack_d8 = 0x44d7b5f;
      System_Collections_Generic_Dictionary_byte__object___Add
                ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar11,'\0',(Il2CppObject *)pSVar6,
                 MethodInfo_Void_Add);
      auStack_c4[2] = (uint)pSVar16 & 0xff | 2;
      uStack_d8 = 0x44d7b7f;
      pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_c4 + 2);
      uStack_d8 = 0x44d7b93;
      System_Collections_Generic_Dictionary_byte__object___Add
                ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar11,'\x01',pIVar10,MethodInfo_Void_Add)
      ;
      auStack_c4[1] = 0;
      uStack_d8 = 0x44d7ba9;
      pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_c4 + 1);
      uStack_d8 = 0x44d7bbd;
      System_Collections_Generic_Dictionary_byte__object___Add
                ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar11,'\x02',pIVar10,MethodInfo_Void_Add)
      ;
      auStack_c4[0] = uStack_c8;
      uStack_d8 = 0x44d7bd3;
      pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_c4);
      uStack_d8 = 0x44d7be7;
      System_Collections_Generic_Dictionary_byte__object___Add
                ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar11,'\x03',pIVar10,MethodInfo_Void_Add)
      ;
      if (in_RCX == (MethodInfo *)0x0) {
        in_RCX = (MethodInfo *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      }
      uStack_d8 = 0x44d7c11;
      System_Collections_Generic_Dictionary_byte__object___Add
                ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar11,'\x04',
                 (Il2CppObject *)in_RCX,MethodInfo_Void_Add);
      pMVar14 = extraout_RDX_00;
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        uStack_d8 = 0x44d7c29;
        il2cpp_runtime_helper_02337ed0();
        pMVar14 = extraout_RDX_01;
      }
      uStack_d8 = 0x44d7c36;
      Anticheat_ModeratorManager__RaiseModEvent
                (0xb4,(System_Collections_Generic_Dictionary_byte__object__o *)pSVar11,pMVar14);
      return;
    }
  }
  uStack_d8 = 0x44d7cc2;
  il2cpp_runtime_helper_022b2c90();
  uVar25 = (ulong)pSVar17 & 0xffffffff;
  method_00 = pMVar14;
  pSStack_100 = pSVar6;
  pMStack_f8 = in_RCX;
  pSStack_f0 = unaff_R13;
  pMStack_e8 = pMVar24;
  uStack_e0 = (ulong)pSVar16 & 0xffffffff;
  uStack_d8 = 0;
  if (g_data_057aeb65 == '\0') {
    pSStack_120 = (System_Int32_array *)0x44d7d03;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_Dictionary_byte_object);
    pSStack_120 = (System_Int32_array *)0x44d7d0f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    pSStack_120 = (System_Int32_array *)0x44d7d1b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pSStack_120 = (System_Int32_array *)0x44d7d27;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Byte_System_Object);
    pSStack_120 = (System_Int32_array *)0x44d7d33;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_byte_object);
    pSStack_120 = (System_Int32_array *)0x44d7d3f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    pSStack_120 = (System_Int32_array *)0x44d7d4b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RoomBanPlayerEntry_b__0);
    pSStack_120 = (System_Int32_array *)0x44d7d57;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RoomBanPlayerEntry_b__1);
    pSStack_120 = (System_Int32_array *)0x44d7d63;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass91_0);
    pSStack_120 = (System_Int32_array *)0x44d7d6f;
    il2cpp_runtime_helper_023445d0(&"Player has no session ID to ban.");
    pSStack_120 = (System_Int32_array *)0x44d7d7b;
    il2cpp_runtime_helper_023445d0(&"Invalid player entry.");
    pSStack_120 = (System_Int32_array *)0x44d7d87;
    il2cpp_runtime_helper_023445d0(&"Sending request...");
    pSStack_120 = (System_Int32_array *)0x44d7d93;
    il2cpp_runtime_helper_023445d0(&"Player has no IP address to ban.");
    g_data_057aeb65 = '\x01';
  }
  pSStack_120 = (System_Int32_array *)0x44d7da9;
  pSVar9 = (System_Collections_Generic_Dictionary_byte__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass91_0);
  pSVar16 = (System_Action_string__o *)0x0;
  pSStack_120 = (System_Int32_array *)0x44d7db6;
  pSVar21 = pSVar9;
  Anticheat_ModeratorManager___c__DisplayClass91_0___ctor
            ((Anticheat_ModeratorManager___c__DisplayClass91_0_o *)pSVar9,(MethodInfo *)0x0);
  pSVar12 = extraout_RDX_02;
  if (pSVar9 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
    pSVar15 = &pSVar9->fields;
    (pSVar9->fields)._buckets = extraout_RDX_02;
    pSStack_120 = (System_Int32_array *)0x44d7dd5;
    il2cpp_runtime_helper_022b4080(pSVar15);
    if (pSVar8 == (System_Action_string__o *)0x0) {
      pSVar12 = pSVar15->_buckets;
      uVar22 = "Invalid player entry.";
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        pSStack_120 = (System_Int32_array *)0x44d7e42;
        il2cpp_runtime_helper_02337ed0();
        uVar22 = "Invalid player entry.";
      }
joined_r0x044d81fe:
      if (g_data_057aeb5b == '\0') {
        pSStack_120 = (System_Int32_array *)0x44d7e61;
        il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
        g_data_057aeb5b = '\x01';
      }
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        pSStack_120 = (System_Int32_array *)0x44d7f0d;
        il2cpp_runtime_helper_02337ed0();
        lVar1 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
      }
      else {
        lVar1 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
      }
      if (lVar1 != 0) {
        pSStack_120 = (System_Int32_array *)0x44d7e96;
        (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),uVar22,*(undefined8 *)(lVar1 + 0x28));
      }
      if (pSVar12 == (System_Int32_array *)0x0) {
        return;
      }
      (*(code *)pSVar12->max_length)
                (*(intptr_t *)((long)pSVar12->m_Items + 0x20),uVar22,*(intptr_t *)((long)pSVar12->m_Items + 8)
                );
      return;
    }
    if ((char)uVar25 == '\0') {
      pSStack_120 = (System_Int32_array *)0x44d7eca;
      bVar3 = System_String__IsNullOrEmpty((System_String_o *)(pSVar8->fields).method_ptr,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        pSVar12 = pSVar15->_buckets;
        uVar22 = "Player has no session ID to ban.";
        if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
          pSStack_120 = (System_Int32_array *)0x44d81ed;
          il2cpp_runtime_helper_02337ed0();
          uVar22 = "Player has no session ID to ban.";
        }
        goto joined_r0x044d81fe;
      }
      iStack_10c = 1;
      pSVar8 = (System_Action_string__o *)(pSVar8->fields).method_ptr;
      pSVar12 = pSVar15->_buckets;
      iVar23 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
    }
    else {
      pSStack_120 = (System_Int32_array *)0x44d7def;
      bVar3 = System_String__IsNullOrEmpty((System_String_o *)(pSVar8->fields).invoke_impl,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        pSVar12 = pSVar15->_buckets;
        uVar22 = "Player has no IP address to ban.";
        if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
          pSStack_120 = (System_Int32_array *)0x44d7e12;
          il2cpp_runtime_helper_02337ed0();
          uVar22 = "Player has no IP address to ban.";
        }
        goto joined_r0x044d81fe;
      }
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        pSStack_120 = (System_Int32_array *)0x44d820e;
        il2cpp_runtime_helper_02337ed0();
        if (g_data_057ae4d9 == '\0') goto label_044d821b;
label_044d7f4e:
        iVar23 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
      }
      else {
        if (g_data_057ae4d9 != '\0') goto label_044d7f4e;
label_044d821b:
        pSStack_120 = (System_Int32_array *)0x44d8227;
        il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
        g_data_057ae4d9 = '\x01';
        iVar23 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
      }
      if (iVar23 == 0) {
        pSStack_120 = (System_Int32_array *)0x44d8244;
        il2cpp_runtime_helper_02337ed0();
      }
      iStack_10c = (uint)(*(char *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 8) == '\0') * 2 + 2;
      pSVar8 = (System_Action_string__o *)(pSVar8->fields).invoke_impl;
      pSVar12 = pSVar15->_buckets;
      iVar23 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
    }
    if (iVar23 == 0) {
      pSStack_120 = (System_Int32_array *)0x44d7fba;
      il2cpp_runtime_helper_02337ed0();
    }
    uVar22 = "Sending request...";
    if (g_data_057aeb5b == '\0') {
      pSStack_120 = (System_Int32_array *)0x44d81a2;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      g_data_057aeb5b = '\x01';
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto label_044d81c0;
label_044d7fe8:
      lVar1 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
    }
    else {
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto label_044d7fe8;
label_044d81c0:
      pSStack_120 = (System_Int32_array *)0x44d81c5;
      il2cpp_runtime_helper_02337ed0();
      lVar1 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
    }
    if (lVar1 != 0) {
      pSStack_120 = (System_Int32_array *)0x44d8006;
      (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),uVar22,*(undefined8 *)(lVar1 + 0x28));
    }
    if (pSVar12 != (System_Int32_array *)0x0) {
      pSStack_120 = (System_Int32_array *)0x44d8019;
      (*(code *)pSVar12->max_length)
                (*(intptr_t *)((long)pSVar12->m_Items + 0x20),uVar22,*(intptr_t *)((long)pSVar12->m_Items + 8)
                );
    }
    pSStack_120 = (System_Int32_array *)0x44d8028;
    pSVar4 = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_Dictionary_byte_object);
    pSStack_120 = (System_Int32_array *)0x44d8042;
    System_Action_object____ctor();
    pSStack_120 = (System_Int32_array *)0x44d8051;
    pSVar5 = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
    method_00 = (MethodInfo *)0x0;
    pSStack_120 = (System_Int32_array *)0x44d806b;
    System_Action___ctor();
    pSStack_120 = (System_Int32_array *)0x44d807e;
    pSVar12 = (System_Int32_array *)Anticheat_ModeratorManager__TrackRequest(5.0,pSVar4,pSVar5,method_07);
    pSStack_120 = (System_Int32_array *)0x44d8090;
    __this_00 = (System_Collections_Generic_Dictionary_byte__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_byte_object);
    pSStack_120 = (System_Int32_array *)0x44d80a5;
    pSVar16 = MethodInfo_Dictionary_2_System_Byte_System_Object;
    pSVar21 = __this_00;
    System_Collections_Generic_Dictionary_byte__object____ctor(__this_00,(MethodInfo_304B1A0 *)MethodInfo_Dictionary_2_System_Byte_System_Object);
    pSVar6 = (System_String_o *)0x0;
    if (__this_00 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
      pSStack_120 = (System_Int32_array *)0x44d80c6;
      System_Collections_Generic_Dictionary_byte__object___Add
                (__this_00,'\0',(Il2CppObject *)pSVar12,MethodInfo_Void_Add);
      uStack_104 = (uint)pSVar17 & 0xff | 2;
      pSStack_120 = (System_Int32_array *)0x44d80e6;
      pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_104);
      pSStack_120 = (System_Int32_array *)0x44d80fa;
      System_Collections_Generic_Dictionary_byte__object___Add(__this_00,'\x01',pIVar10,MethodInfo_Void_Add);
      iStack_108 = iStack_10c;
      pSStack_120 = (System_Int32_array *)0x44d8110;
      pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_108);
      pSStack_120 = (System_Int32_array *)0x44d8124;
      System_Collections_Generic_Dictionary_byte__object___Add(__this_00,'\x02',pIVar10,MethodInfo_Void_Add);
      pSStack_120 = (System_Int32_array *)0x44d8138;
      System_Collections_Generic_Dictionary_byte__object___Add
                (__this_00,'\x03',(Il2CppObject *)pSVar8,MethodInfo_Void_Add);
      if (pMVar14 == (MethodInfo *)0x0) {
        pMVar14 = (MethodInfo *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      }
      pSStack_120 = (System_Int32_array *)0x44d8162;
      System_Collections_Generic_Dictionary_byte__object___Add
                (__this_00,'\x04',(Il2CppObject *)pMVar14,MethodInfo_Void_Add);
      pMVar14 = extraout_RDX_03;
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        pSStack_120 = (System_Int32_array *)0x44d817a;
        il2cpp_runtime_helper_02337ed0();
        pMVar14 = extraout_RDX_04;
      }
      pSStack_120 = (System_Int32_array *)0x44d8187;
      Anticheat_ModeratorManager__RaiseModEvent(0xb4,__this_00,pMVar14);
      return;
    }
  }
  pSStack_120 = (System_Int32_array *)0x44d8252;
  il2cpp_runtime_helper_022b2c90();
  pSStack_148 = pSVar6;
  pSStack_140 = pSVar8;
  pSStack_138 = pSVar9;
  pMStack_130 = pMVar14;
  uStack_128 = uVar25;
  pSStack_120 = pSVar12;
  if (g_data_057aeb66 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_Dictionary_byte_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Byte_System_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_byte_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RoomUnban_b__0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RoomUnban_b__1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass92_0);
    il2cpp_runtime_helper_023445d0(&"Sending request...");
    g_data_057aeb66 = '\x01';
  }
  pSVar13 = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass92_0);
  pSVar4 = pSVar13;
  Anticheat_ModeratorManager___c__DisplayClass92_0___ctor
            ((Anticheat_ModeratorManager___c__DisplayClass92_0_o *)pSVar13,(MethodInfo *)0x0);
  if (pSVar13 == (System_Action_Dictionary_byte__object___o *)0x0) goto label_044d867f;
  (pSVar13->fields).method_ptr = (intptr_t)pSVar16;
  il2cpp_runtime_helper_022b4080(&pSVar13->fields,pSVar16);
  pSVar8 = (System_Action_string__o *)(pSVar13->fields).method_ptr;
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057aeb5b == '\0') goto label_044d84a5;
label_044d836a:
    uVar22 = "Sending request...";
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto label_044d837b;
label_044d84c9:
    il2cpp_runtime_helper_02337ed0();
    lVar1 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
  }
  else {
    if (g_data_057aeb5b != '\0') goto label_044d836a;
label_044d84a5:
    uVar22 = "Sending request...";
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb5b = '\x01';
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto label_044d84c9;
label_044d837b:
    lVar1 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
  }
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),uVar22,*(undefined8 *)(lVar1 + 0x28));
  }
  if (pSVar8 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar8->fields).invoke_impl)((pSVar8->fields).method_code,uVar22,(pSVar8->fields).method);
  }
  pSVar4 = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_Dictionary_byte_object);
  System_Action_object____ctor();
  pSVar5 = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
  method_00 = (MethodInfo *)0x0;
  System_Action___ctor();
  pSVar6 = Anticheat_ModeratorManager__TrackRequest(5.0,pSVar4,pSVar5,method_08);
  if (pSVar21 == (System_Collections_Generic_Dictionary_byte__object__o *)0x0) goto label_044d867f;
  iVar23 = (pSVar21->fields)._freeCount;
  pIStack_150 = extraout_RDX_05;
  if ((char)(pSVar21->fields)._version == '\0') {
    if (0 < iVar23) goto label_044d84f3;
    value_00 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)(pSVar21->fields)._buckets;
    iVar23 = 1;
  }
  else if (iVar23 < 1) {
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057ae4d9 == '\0') goto label_044d864d;
label_044d8457:
      iVar23 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
    }
    else {
      if (g_data_057ae4d9 != '\0') goto label_044d8457;
label_044d864d:
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      g_data_057ae4d9 = '\x01';
      iVar23 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
    }
    if (iVar23 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar26 = *(char *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 8) == '\0';
    method_00 = (MethodInfo *)(ulong)bVar26;
    iVar23 = (uint)bVar26 * 2 + 2;
    value_00 = (pSVar21->fields)._entries;
  }
  else {
label_044d84f3:
    iStack_154 = iVar23;
    value_00 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
               il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_154);
    iVar23 = 0;
  }
  pSVar13 = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_byte_object);
  pSVar4 = pSVar13;
  System_Collections_Generic_Dictionary_byte__object____ctor
            ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar13,
             (MethodInfo_304B1A0 *)MethodInfo_Dictionary_2_System_Byte_System_Object);
  if (pSVar13 != (System_Action_Dictionary_byte__object___o *)0x0) {
    System_Collections_Generic_Dictionary_byte__object___Add
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar13,'\0',(Il2CppObject *)pSVar6,
               MethodInfo_Void_Add);
    iStack_158 = 5 - (uint)((char)(pSVar21->fields)._version == '\0');
    pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_158);
    System_Collections_Generic_Dictionary_byte__object___Add
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar13,'\x01',pIVar10,MethodInfo_Void_Add);
    iStack_15c = iVar23;
    pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_15c);
    System_Collections_Generic_Dictionary_byte__object___Add
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar13,'\x02',pIVar10,MethodInfo_Void_Add);
    System_Collections_Generic_Dictionary_byte__object___Add
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar13,'\x03',&value_00->obj,
               MethodInfo_Void_Add);
    pIVar10 = pIStack_150;
    if (pIStack_150 == (Il2CppObject *)0x0) {
      pIVar10 = (Il2CppObject *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    System_Collections_Generic_Dictionary_byte__object___Add
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar13,'\x04',pIVar10,MethodInfo_Void_Add);
    pMVar14 = extraout_RDX_06;
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pMVar14 = extraout_RDX_07;
    }
    Anticheat_ModeratorManager__RaiseModEvent
              (0xb4,(System_Collections_Generic_Dictionary_byte__object__o *)pSVar13,pMVar14);
    return;
  }
label_044d867f:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeb67 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb67 = '\x01';
  }
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Anticheat_ModeratorManager__RequestRoomBanList_43d86e0(0,0x32,(System_Action_string__o *)pSVar4,method_00);
  return;
}


// Anticheat.ModeratorManager$$PopulatePlayerList
// il2cpp: void Anticheat_ModeratorManager__PopulatePlayerList (System_Collections_Generic_Dictionary_byte__object__o* data, const MethodInfo* method);
// 0x44d73f0

void Anticheat_ModeratorManager__PopulatePlayerList
               (System_Collections_Generic_Dictionary_byte__object__o *data,MethodInfo *method)

{
  long lVar1;
  long lVar2;
  bool_conflict bVar3;
  System_Collections_Generic_Dictionary_byte__object__o *pSVar4;
  Anticheat_ModeratorManager___c__DisplayClass89_0_o *__this;
  System_Action_o *pSVar5;
  System_Collections_Generic_Dictionary_byte__object__o *pSVar6;
  Il2CppObject *pIVar7;
  System_Action_string__o *pSVar8;
  System_String_o *pSVar9;
  System_Action_Dictionary_byte__object___o *pSVar10;
  System_Int32_array *pSVar11;
  System_Collections_Generic_Dictionary_byte__object__o *__this_00;
  System_Action_Dictionary_byte__object___o *pSVar12;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *value;
  MethodInfo *in_RCX;
  MethodInfo *pMVar13;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  System_String_o *extraout_RDX;
  MethodInfo *method_04;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  System_Int32_array *extraout_RDX_02;
  MethodInfo *method_05;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  Il2CppObject *extraout_RDX_05;
  MethodInfo *method_06;
  MethodInfo *extraout_RDX_06;
  MethodInfo *extraout_RDX_07;
  System_Collections_Generic_Dictionary_byte__object__Fields *pSVar14;
  System_Action_string__o *pSVar15;
  System_Action_string__o *pSVar16;
  uint uVar17;
  uint uVar18;
  System_Collections_Generic_Dictionary_int__object__o *__this_01;
  System_Collections_Generic_Dictionary_int__object__o *__this_02;
  Anticheat_ModeratorManager___c__DisplayClass89_0_o *pAVar19;
  System_Action_string__o *value_00;
  System_Collections_Generic_Dictionary_byte__object__o *unaff_R12;
  undefined8 uVar20;
  System_Action_Dictionary_byte__object___o *unaff_R13;
  int iVar21;
  MethodInfo *pMVar22;
  System_Collections_Generic_Dictionary_byte__object__array *unaff_R15;
  ulong uVar23;
  bool bVar24;
  int local_134;
  int local_130;
  int local_12c;
  Il2CppObject *local_128;
  System_String_o *pSStack_120;
  System_Action_string__o *pSStack_118;
  System_Collections_Generic_Dictionary_byte__object__o *pSStack_110;
  MethodInfo *pMStack_108;
  ulong uStack_100;
  System_Int32_array *pSStack_f8;
  int local_e4;
  int local_e0;
  uint local_dc;
  System_String_o *pSStack_d8;
  MethodInfo *pMStack_d0;
  System_Action_Dictionary_byte__object___o *pSStack_c8;
  MethodInfo *pMStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  uint local_a0;
  uint local_9c [3];
  undefined8 uStack_90;
  System_Collections_Generic_Dictionary_byte__object__o *pSStack_88;
  System_Action_Dictionary_byte__object___o *pSStack_80;
  ulong uStack_78;
  System_Collections_Generic_Dictionary_byte__object__array *pSStack_70;
  System_Action_string__o *pSStack_68;
  uint local_5c [3];
  System_Collections_Generic_Dictionary_byte__object__o *pSStack_50;
  System_Collections_Generic_Dictionary_byte__object__o *pSStack_48;
  undefined8 *puStack_40;
  System_Collections_Generic_Dictionary_byte__object__array *pSStack_38;
  
  if (g_data_057aeb60 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb60 = '\x01';
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto label_044d7488;
label_044d7418:
    if (g_data_057ae4db != '\0') goto label_044d7421;
label_044d7496:
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057ae4db = '\x01';
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto label_044d74b9;
label_044d7431:
    __this_01 = *(System_Collections_Generic_Dictionary_int__object__o **)
                 (*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x10);
    if (__this_01 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      __this_02 = (System_Collections_Generic_Dictionary_int__object__o *)0x0;
    }
    else {
label_044d74d5:
      System_Collections_Generic_Dictionary_int__object___Clear(__this_01,MethodInfo_Void_Clear);
      method = (MethodInfo *)0x1;
      __this_02 = (System_Collections_Generic_Dictionary_int__object__o *)data;
      unaff_R15 = Anticheat_ModeratorManager__GetResponseEntries(data,'\x01',method_01);
      if ((unaff_R15 == (System_Collections_Generic_Dictionary_byte__object__array *)0x0) ||
         ((int)unaff_R15->max_length < 1)) {
label_044d75fa:
        if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          lVar1 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x28);
        }
        else {
          lVar1 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x28);
        }
        if (lVar1 == 0) {
          return;
        }
        (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
        return;
      }
      data = (System_Collections_Generic_Dictionary_byte__object__o *)0x0;
      unaff_R13 = (System_Action_Dictionary_byte__object___o *)&MethodInfo_Void_set_Item;
      if ((unaff_R15->max_length & 0xffffffff) != 0) {
        do {
          unaff_R12 = unaff_R15->m_Items[(long)data];
          pSVar4 = unaff_R12;
          if (unaff_R12 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
            if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            __this_02 = (System_Collections_Generic_Dictionary_int__object__o *)unaff_R12;
            pSVar4 = (System_Collections_Generic_Dictionary_byte__object__o *)
                     Anticheat_ModeratorManager__ParsePlayerEntry(unaff_R12,method);
            if (pSVar4 == (System_Collections_Generic_Dictionary_byte__object__o *)0x0) goto label_044d7654;
            if (0 < (pSVar4->fields)._freeCount) {
              if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
                if (g_data_057ae4db == '\0') goto label_044d75ce;
label_044d75ae:
                iVar21 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
              }
              else {
                if (g_data_057ae4db != '\0') goto label_044d75ae;
label_044d75ce:
                il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
                g_data_057ae4db = '\x01';
                iVar21 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
              }
              if (iVar21 == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              __this_02 = *(System_Collections_Generic_Dictionary_int__object__o **)
                           (*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x10);
              unaff_R12 = pSVar4;
              if (__this_02 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_044d7654;
              uVar17 = (pSVar4->fields)._freeCount;
              method = (MethodInfo *)(ulong)uVar17;
              System_Collections_Generic_Dictionary_int__object___set_Item
                        (__this_02,uVar17,(Il2CppObject *)pSVar4,MethodInfo_Void_set_Item);
            }
          }
          data = (System_Collections_Generic_Dictionary_byte__object__o *)((long)&data->klass + 1);
          uVar17 = (uint)unaff_R15->max_length;
          in_RCX = (MethodInfo *)(long)(int)uVar17;
          if ((long)in_RCX <= (long)data) goto label_044d75fa;
          unaff_R12 = pSVar4;
        } while (data < (System_Collections_Generic_Dictionary_byte__object__o *)(ulong)uVar17);
      }
      il2cpp_runtime_helper_022b2ca0();
    }
  }
  else {
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto label_044d7418;
label_044d7488:
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae4db == '\0') goto label_044d7496;
label_044d7421:
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto label_044d7431;
label_044d74b9:
    il2cpp_runtime_helper_02337ed0();
    __this_01 = *(System_Collections_Generic_Dictionary_int__object__o **)
                 (*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x10);
    __this_02 = (System_Collections_Generic_Dictionary_int__object__o *)0x0;
    if (__this_01 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_044d74d5;
  }
label_044d7654:
  uVar17 = (uint)__this_02;
  il2cpp_runtime_helper_022b2c90();
  puStack_40 = &TypeInfo_ModeratorManager;
  pSStack_50 = data;
  pSStack_48 = unaff_R12;
  pSStack_38 = unaff_R15;
  if (g_data_057aeb63 == '\0') {
    pSStack_68 = (System_Action_string__o *)0x44d7687;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_Dictionary_byte_object);
    pSStack_68 = (System_Action_string__o *)0x44d7693;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    pSStack_68 = (System_Action_string__o *)0x44d769f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pSStack_68 = (System_Action_string__o *)0x44d76ab;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Byte_System_Object);
    pSStack_68 = (System_Action_string__o *)0x44d76b7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_byte_object);
    pSStack_68 = (System_Action_string__o *)0x44d76c3;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    pSStack_68 = (System_Action_string__o *)0x44d76cf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_KickPlayer_b__0);
    pSStack_68 = (System_Action_string__o *)0x44d76db;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_KickPlayer_b__1);
    pSStack_68 = (System_Action_string__o *)0x44d76e7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass89_0);
    pSStack_68 = (System_Action_string__o *)0x44d76f3;
    il2cpp_runtime_helper_023445d0(&"Sending request...");
    g_data_057aeb63 = '\x01';
  }
  pSStack_68 = (System_Action_string__o *)0x44d7709;
  __this = (Anticheat_ModeratorManager___c__DisplayClass89_0_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass89_0);
  pSVar15 = (System_Action_string__o *)0x0;
  pSStack_68 = (System_Action_string__o *)0x44d7716;
  pAVar19 = __this;
  Anticheat_ModeratorManager___c__DisplayClass89_0___ctor(__this,(MethodInfo *)0x0);
  uVar18 = (uint)pAVar19;
  if (__this != (Anticheat_ModeratorManager___c__DisplayClass89_0_o *)0x0) {
    (__this->fields).localStatus = (System_Action_string__o *)method;
    pSStack_68 = (System_Action_string__o *)0x44d7732;
    il2cpp_runtime_helper_022b4080(&__this->fields,method);
    pSVar15 = (__this->fields).localStatus;
    unaff_R12 = (System_Collections_Generic_Dictionary_byte__object__o *)&TypeInfo_ModeratorManager;
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      pSStack_68 = (System_Action_string__o *)0x44d78f1;
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057aeb5b == '\0') goto label_044d7908;
label_044d7765:
      uVar20 = "Sending request...";
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto label_044d7776;
label_044d792c:
      pSStack_68 = (System_Action_string__o *)0x44d7931;
      il2cpp_runtime_helper_02337ed0();
      lVar1 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
    }
    else {
      if (g_data_057aeb5b != '\0') goto label_044d7765;
label_044d7908:
      uVar20 = "Sending request...";
      pSStack_68 = (System_Action_string__o *)0x44d7914;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      g_data_057aeb5b = '\x01';
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto label_044d792c;
label_044d7776:
      lVar1 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
    }
    if (lVar1 != 0) {
      pSStack_68 = (System_Action_string__o *)0x44d7794;
      (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),uVar20,*(undefined8 *)(lVar1 + 0x28));
    }
    if (pSVar15 != (System_Action_string__o *)0x0) {
      pSStack_68 = (System_Action_string__o *)0x44d77a7;
      (*(code *)(pSVar15->fields).invoke_impl)((pSVar15->fields).method_code,uVar20,(pSVar15->fields).method);
    }
    pSStack_68 = (System_Action_string__o *)0x44d77b6;
    unaff_R15 = (System_Collections_Generic_Dictionary_byte__object__array *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_Dictionary_byte_object);
    pSStack_68 = (System_Action_string__o *)0x44d77d0;
    System_Action_object____ctor();
    pSStack_68 = (System_Action_string__o *)0x44d77df;
    pSVar5 = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
    in_RCX = (MethodInfo *)0x0;
    pSStack_68 = (System_Action_string__o *)0x44d77f9;
    System_Action___ctor();
    pSStack_68 = (System_Action_string__o *)0x44d780c;
    method = (MethodInfo *)
             Anticheat_ModeratorManager__TrackRequest
                       (5.0,(System_Action_Dictionary_byte__object___o *)unaff_R15,pSVar5,method_02);
    pSStack_68 = (System_Action_string__o *)0x44d781e;
    pSVar6 = (System_Collections_Generic_Dictionary_byte__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_byte_object);
    pSStack_68 = (System_Action_string__o *)0x44d7833;
    pSVar15 = MethodInfo_Dictionary_2_System_Byte_System_Object;
    pSVar4 = pSVar6;
    System_Collections_Generic_Dictionary_byte__object____ctor(pSVar6,(MethodInfo_304B1A0 *)MethodInfo_Dictionary_2_System_Byte_System_Object);
    uVar18 = (uint)pSVar4;
    if (pSVar6 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
      pSStack_68 = (System_Action_string__o *)0x44d7853;
      System_Collections_Generic_Dictionary_byte__object___Add
                (pSVar6,'\0',(Il2CppObject *)method,MethodInfo_Void_Add);
      local_5c[2] = 1;
      pSStack_68 = (System_Action_string__o *)0x44d7870;
      pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,local_5c + 2);
      pSStack_68 = (System_Action_string__o *)0x44d7883;
      System_Collections_Generic_Dictionary_byte__object___Add(pSVar6,'\x01',pIVar7,MethodInfo_Void_Add);
      local_5c[1] = 0;
      pSStack_68 = (System_Action_string__o *)0x44d7899;
      pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,local_5c + 1);
      pSStack_68 = (System_Action_string__o *)0x44d78ac;
      System_Collections_Generic_Dictionary_byte__object___Add(pSVar6,'\x02',pIVar7,MethodInfo_Void_Add);
      pSStack_68 = (System_Action_string__o *)0x44d78bf;
      local_5c[0] = uVar17;
      pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,local_5c);
      pSStack_68 = (System_Action_string__o *)0x44d78d2;
      System_Collections_Generic_Dictionary_byte__object___Add(pSVar6,'\x03',pIVar7,MethodInfo_Void_Add);
      pSStack_68 = (System_Action_string__o *)0x44d78df;
      Anticheat_ModeratorManager__RaiseModEvent(0xb4,pSVar6,method_03);
      return;
    }
  }
  pSStack_68 = (System_Action_string__o *)0x44d7953;
  il2cpp_runtime_helper_022b2c90();
  pMVar22 = (MethodInfo *)(ulong)uVar18;
  pMVar13 = in_RCX;
  uStack_90 = 0;
  pSStack_88 = unaff_R12;
  pSStack_80 = unaff_R13;
  uStack_78 = (ulong)uVar17;
  pSStack_70 = unaff_R15;
  pSStack_68 = (System_Action_string__o *)method;
  if (g_data_057aeb64 == '\0') {
    uStack_b0 = 0x44d798f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_Dictionary_byte_object);
    uStack_b0 = 0x44d799b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    uStack_b0 = 0x44d79a7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    uStack_b0 = 0x44d79b3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Byte_System_Object);
    uStack_b0 = 0x44d79bf;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_byte_object);
    uStack_b0 = 0x44d79cb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    uStack_b0 = 0x44d79d7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RoomBan_b__0);
    uStack_b0 = 0x44d79e3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RoomBan_b__1);
    uStack_b0 = 0x44d79ef;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass90_0);
    uStack_b0 = 0x44d79fb;
    il2cpp_runtime_helper_023445d0(&"Sending request...");
    g_data_057aeb64 = '\x01';
  }
  uStack_b0 = 0x44d7a11;
  pSVar8 = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass90_0);
  pSVar16 = (System_Action_string__o *)0x0;
  uStack_b0 = 0x44d7a1e;
  value_00 = pSVar8;
  Anticheat_ModeratorManager___c__DisplayClass90_0___ctor
            ((Anticheat_ModeratorManager___c__DisplayClass90_0_o *)pSVar8,(MethodInfo *)0x0);
  pSVar9 = extraout_RDX;
  if (pSVar8 != (System_Action_string__o *)0x0) {
    (pSVar8->fields).method_ptr = (intptr_t)extraout_RDX;
    uStack_b0 = 0x44d7a3f;
    local_a0 = uVar18;
    il2cpp_runtime_helper_022b4080(&pSVar8->fields,extraout_RDX);
    lVar1 = (pSVar8->fields).method_ptr;
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      uStack_b0 = 0x44d7c4a;
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057aeb5b == '\0') goto label_044d7c68;
label_044d7a71:
      uVar20 = "Sending request...";
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto label_044d7a81;
label_044d7c92:
      uStack_b0 = 0x44d7c9d;
      il2cpp_runtime_helper_02337ed0();
      lVar2 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
      pMVar22 = in_RCX;
    }
    else {
      if (g_data_057aeb5b != '\0') goto label_044d7a71;
label_044d7c68:
      uVar20 = "Sending request...";
      uStack_b0 = 0x44d7c74;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      g_data_057aeb5b = '\x01';
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto label_044d7c92;
label_044d7a81:
      lVar2 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
    }
    if (lVar2 != 0) {
      uStack_b0 = 0x44d7a9f;
      (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),uVar20,*(undefined8 *)(lVar2 + 0x28));
    }
    if (lVar1 != 0) {
      uStack_b0 = 0x44d7ab2;
      (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),uVar20,*(undefined8 *)(lVar1 + 0x28));
    }
    uStack_b0 = 0x44d7ac1;
    unaff_R13 = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_Dictionary_byte_object);
    uStack_b0 = 0x44d7adb;
    System_Action_object____ctor();
    uStack_b0 = 0x44d7aea;
    pSVar5 = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
    pMVar13 = (MethodInfo *)0x0;
    uStack_b0 = 0x44d7b04;
    System_Action___ctor();
    uStack_b0 = 0x44d7b17;
    pSVar9 = Anticheat_ModeratorManager__TrackRequest(5.0,unaff_R13,pSVar5,method_04);
    uStack_b0 = 0x44d7b29;
    pSVar8 = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_byte_object);
    uStack_b0 = 0x44d7b3e;
    pSVar16 = MethodInfo_Dictionary_2_System_Byte_System_Object;
    value_00 = pSVar8;
    System_Collections_Generic_Dictionary_byte__object____ctor
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar8,
               (MethodInfo_304B1A0 *)MethodInfo_Dictionary_2_System_Byte_System_Object);
    if (pSVar8 != (System_Action_string__o *)0x0) {
      uStack_b0 = 0x44d7b5f;
      System_Collections_Generic_Dictionary_byte__object___Add
                ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar8,'\0',(Il2CppObject *)pSVar9,
                 MethodInfo_Void_Add);
      local_9c[2] = (uint)pSVar15 & 0xff | 2;
      uStack_b0 = 0x44d7b7f;
      pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,local_9c + 2);
      uStack_b0 = 0x44d7b93;
      System_Collections_Generic_Dictionary_byte__object___Add
                ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar8,'\x01',pIVar7,MethodInfo_Void_Add);
      local_9c[1] = 0;
      uStack_b0 = 0x44d7ba9;
      pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,local_9c + 1);
      uStack_b0 = 0x44d7bbd;
      System_Collections_Generic_Dictionary_byte__object___Add
                ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar8,'\x02',pIVar7,MethodInfo_Void_Add);
      local_9c[0] = local_a0;
      uStack_b0 = 0x44d7bd3;
      pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,local_9c);
      uStack_b0 = 0x44d7be7;
      System_Collections_Generic_Dictionary_byte__object___Add
                ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar8,'\x03',pIVar7,MethodInfo_Void_Add);
      if (in_RCX == (MethodInfo *)0x0) {
        in_RCX = (MethodInfo *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      }
      uStack_b0 = 0x44d7c11;
      System_Collections_Generic_Dictionary_byte__object___Add
                ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar8,'\x04',(Il2CppObject *)in_RCX
                 ,MethodInfo_Void_Add);
      pMVar13 = extraout_RDX_00;
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        uStack_b0 = 0x44d7c29;
        il2cpp_runtime_helper_02337ed0();
        pMVar13 = extraout_RDX_01;
      }
      uStack_b0 = 0x44d7c36;
      Anticheat_ModeratorManager__RaiseModEvent
                (0xb4,(System_Collections_Generic_Dictionary_byte__object__o *)pSVar8,pMVar13);
      return;
    }
  }
  uStack_b0 = 0x44d7cc2;
  il2cpp_runtime_helper_022b2c90();
  uVar23 = (ulong)pSVar16 & 0xffffffff;
  method_00 = pMVar13;
  pSStack_d8 = pSVar9;
  pMStack_d0 = in_RCX;
  pSStack_c8 = unaff_R13;
  pMStack_c0 = pMVar22;
  uStack_b8 = (ulong)pSVar15 & 0xffffffff;
  uStack_b0 = 0;
  if (g_data_057aeb65 == '\0') {
    pSStack_f8 = (System_Int32_array *)0x44d7d03;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_Dictionary_byte_object);
    pSStack_f8 = (System_Int32_array *)0x44d7d0f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    pSStack_f8 = (System_Int32_array *)0x44d7d1b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pSStack_f8 = (System_Int32_array *)0x44d7d27;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Byte_System_Object);
    pSStack_f8 = (System_Int32_array *)0x44d7d33;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_byte_object);
    pSStack_f8 = (System_Int32_array *)0x44d7d3f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    pSStack_f8 = (System_Int32_array *)0x44d7d4b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RoomBanPlayerEntry_b__0);
    pSStack_f8 = (System_Int32_array *)0x44d7d57;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RoomBanPlayerEntry_b__1);
    pSStack_f8 = (System_Int32_array *)0x44d7d63;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass91_0);
    pSStack_f8 = (System_Int32_array *)0x44d7d6f;
    il2cpp_runtime_helper_023445d0(&"Player has no session ID to ban.");
    pSStack_f8 = (System_Int32_array *)0x44d7d7b;
    il2cpp_runtime_helper_023445d0(&"Invalid player entry.");
    pSStack_f8 = (System_Int32_array *)0x44d7d87;
    il2cpp_runtime_helper_023445d0(&"Sending request...");
    pSStack_f8 = (System_Int32_array *)0x44d7d93;
    il2cpp_runtime_helper_023445d0(&"Player has no IP address to ban.");
    g_data_057aeb65 = '\x01';
  }
  pSStack_f8 = (System_Int32_array *)0x44d7da9;
  pSVar6 = (System_Collections_Generic_Dictionary_byte__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass91_0);
  pSVar15 = (System_Action_string__o *)0x0;
  pSStack_f8 = (System_Int32_array *)0x44d7db6;
  pSVar4 = pSVar6;
  Anticheat_ModeratorManager___c__DisplayClass91_0___ctor
            ((Anticheat_ModeratorManager___c__DisplayClass91_0_o *)pSVar6,(MethodInfo *)0x0);
  pSVar11 = extraout_RDX_02;
  if (pSVar6 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
    pSVar14 = &pSVar6->fields;
    (pSVar6->fields)._buckets = extraout_RDX_02;
    pSStack_f8 = (System_Int32_array *)0x44d7dd5;
    il2cpp_runtime_helper_022b4080(pSVar14);
    if (value_00 == (System_Action_string__o *)0x0) {
      pSVar11 = pSVar14->_buckets;
      uVar20 = "Invalid player entry.";
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        pSStack_f8 = (System_Int32_array *)0x44d7e42;
        il2cpp_runtime_helper_02337ed0();
        uVar20 = "Invalid player entry.";
      }
joined_r0x044d81fe:
      if (g_data_057aeb5b == '\0') {
        pSStack_f8 = (System_Int32_array *)0x44d7e61;
        il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
        g_data_057aeb5b = '\x01';
      }
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        pSStack_f8 = (System_Int32_array *)0x44d7f0d;
        il2cpp_runtime_helper_02337ed0();
        lVar1 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
      }
      else {
        lVar1 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
      }
      if (lVar1 != 0) {
        pSStack_f8 = (System_Int32_array *)0x44d7e96;
        (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),uVar20,*(undefined8 *)(lVar1 + 0x28));
      }
      if (pSVar11 == (System_Int32_array *)0x0) {
        return;
      }
      (*(code *)pSVar11->max_length)
                (*(intptr_t *)((long)pSVar11->m_Items + 0x20),uVar20,*(intptr_t *)((long)pSVar11->m_Items + 8)
                );
      return;
    }
    if ((char)uVar23 == '\0') {
      pSStack_f8 = (System_Int32_array *)0x44d7eca;
      bVar3 = System_String__IsNullOrEmpty((System_String_o *)(value_00->fields).method_ptr,(MethodInfo *)0x0)
      ;
      if ((char)bVar3 != '\0') {
        pSVar11 = pSVar14->_buckets;
        uVar20 = "Player has no session ID to ban.";
        if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
          pSStack_f8 = (System_Int32_array *)0x44d81ed;
          il2cpp_runtime_helper_02337ed0();
          uVar20 = "Player has no session ID to ban.";
        }
        goto joined_r0x044d81fe;
      }
      local_e4 = 1;
      value_00 = (System_Action_string__o *)(value_00->fields).method_ptr;
      pSVar11 = pSVar14->_buckets;
      iVar21 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
    }
    else {
      pSStack_f8 = (System_Int32_array *)0x44d7def;
      bVar3 = System_String__IsNullOrEmpty
                        ((System_String_o *)(value_00->fields).invoke_impl,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        pSVar11 = pSVar14->_buckets;
        uVar20 = "Player has no IP address to ban.";
        if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
          pSStack_f8 = (System_Int32_array *)0x44d7e12;
          il2cpp_runtime_helper_02337ed0();
          uVar20 = "Player has no IP address to ban.";
        }
        goto joined_r0x044d81fe;
      }
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        pSStack_f8 = (System_Int32_array *)0x44d820e;
        il2cpp_runtime_helper_02337ed0();
        if (g_data_057ae4d9 == '\0') goto label_044d821b;
label_044d7f4e:
        iVar21 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
      }
      else {
        if (g_data_057ae4d9 != '\0') goto label_044d7f4e;
label_044d821b:
        pSStack_f8 = (System_Int32_array *)0x44d8227;
        il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
        g_data_057ae4d9 = '\x01';
        iVar21 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
      }
      if (iVar21 == 0) {
        pSStack_f8 = (System_Int32_array *)0x44d8244;
        il2cpp_runtime_helper_02337ed0();
      }
      local_e4 = (uint)(*(char *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 8) == '\0') * 2 + 2;
      value_00 = (System_Action_string__o *)(value_00->fields).invoke_impl;
      pSVar11 = pSVar14->_buckets;
      iVar21 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
    }
    if (iVar21 == 0) {
      pSStack_f8 = (System_Int32_array *)0x44d7fba;
      il2cpp_runtime_helper_02337ed0();
    }
    uVar20 = "Sending request...";
    if (g_data_057aeb5b == '\0') {
      pSStack_f8 = (System_Int32_array *)0x44d81a2;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      g_data_057aeb5b = '\x01';
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto label_044d81c0;
label_044d7fe8:
      lVar1 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
    }
    else {
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto label_044d7fe8;
label_044d81c0:
      pSStack_f8 = (System_Int32_array *)0x44d81c5;
      il2cpp_runtime_helper_02337ed0();
      lVar1 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
    }
    if (lVar1 != 0) {
      pSStack_f8 = (System_Int32_array *)0x44d8006;
      (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),uVar20,*(undefined8 *)(lVar1 + 0x28));
    }
    if (pSVar11 != (System_Int32_array *)0x0) {
      pSStack_f8 = (System_Int32_array *)0x44d8019;
      (*(code *)pSVar11->max_length)
                (*(intptr_t *)((long)pSVar11->m_Items + 0x20),uVar20,*(intptr_t *)((long)pSVar11->m_Items + 8)
                );
    }
    pSStack_f8 = (System_Int32_array *)0x44d8028;
    pSVar10 = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_Dictionary_byte_object);
    pSStack_f8 = (System_Int32_array *)0x44d8042;
    System_Action_object____ctor();
    pSStack_f8 = (System_Int32_array *)0x44d8051;
    pSVar5 = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
    method_00 = (MethodInfo *)0x0;
    pSStack_f8 = (System_Int32_array *)0x44d806b;
    System_Action___ctor();
    pSStack_f8 = (System_Int32_array *)0x44d807e;
    pSVar11 = (System_Int32_array *)Anticheat_ModeratorManager__TrackRequest(5.0,pSVar10,pSVar5,method_05);
    pSStack_f8 = (System_Int32_array *)0x44d8090;
    __this_00 = (System_Collections_Generic_Dictionary_byte__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_byte_object);
    pSStack_f8 = (System_Int32_array *)0x44d80a5;
    pSVar15 = MethodInfo_Dictionary_2_System_Byte_System_Object;
    pSVar4 = __this_00;
    System_Collections_Generic_Dictionary_byte__object____ctor(__this_00,(MethodInfo_304B1A0 *)MethodInfo_Dictionary_2_System_Byte_System_Object);
    pSVar9 = (System_String_o *)0x0;
    if (__this_00 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
      pSStack_f8 = (System_Int32_array *)0x44d80c6;
      System_Collections_Generic_Dictionary_byte__object___Add
                (__this_00,'\0',(Il2CppObject *)pSVar11,MethodInfo_Void_Add);
      local_dc = (uint)pSVar16 & 0xff | 2;
      pSStack_f8 = (System_Int32_array *)0x44d80e6;
      pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&local_dc);
      pSStack_f8 = (System_Int32_array *)0x44d80fa;
      System_Collections_Generic_Dictionary_byte__object___Add(__this_00,'\x01',pIVar7,MethodInfo_Void_Add);
      local_e0 = local_e4;
      pSStack_f8 = (System_Int32_array *)0x44d8110;
      pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&local_e0);
      pSStack_f8 = (System_Int32_array *)0x44d8124;
      System_Collections_Generic_Dictionary_byte__object___Add(__this_00,'\x02',pIVar7,MethodInfo_Void_Add);
      pSStack_f8 = (System_Int32_array *)0x44d8138;
      System_Collections_Generic_Dictionary_byte__object___Add
                (__this_00,'\x03',(Il2CppObject *)value_00,MethodInfo_Void_Add);
      if (pMVar13 == (MethodInfo *)0x0) {
        pMVar13 = (MethodInfo *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      }
      pSStack_f8 = (System_Int32_array *)0x44d8162;
      System_Collections_Generic_Dictionary_byte__object___Add
                (__this_00,'\x04',(Il2CppObject *)pMVar13,MethodInfo_Void_Add);
      pMVar13 = extraout_RDX_03;
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        pSStack_f8 = (System_Int32_array *)0x44d817a;
        il2cpp_runtime_helper_02337ed0();
        pMVar13 = extraout_RDX_04;
      }
      pSStack_f8 = (System_Int32_array *)0x44d8187;
      Anticheat_ModeratorManager__RaiseModEvent(0xb4,__this_00,pMVar13);
      return;
    }
  }
  pSStack_f8 = (System_Int32_array *)0x44d8252;
  il2cpp_runtime_helper_022b2c90();
  pSStack_120 = pSVar9;
  pSStack_118 = value_00;
  pSStack_110 = pSVar6;
  pMStack_108 = pMVar13;
  uStack_100 = uVar23;
  pSStack_f8 = pSVar11;
  if (g_data_057aeb66 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_Dictionary_byte_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Byte_System_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_byte_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RoomUnban_b__0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RoomUnban_b__1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass92_0);
    il2cpp_runtime_helper_023445d0(&"Sending request...");
    g_data_057aeb66 = '\x01';
  }
  pSVar12 = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass92_0);
  pSVar10 = pSVar12;
  Anticheat_ModeratorManager___c__DisplayClass92_0___ctor
            ((Anticheat_ModeratorManager___c__DisplayClass92_0_o *)pSVar12,(MethodInfo *)0x0);
  if (pSVar12 == (System_Action_Dictionary_byte__object___o *)0x0) goto label_044d867f;
  (pSVar12->fields).method_ptr = (intptr_t)pSVar15;
  il2cpp_runtime_helper_022b4080(&pSVar12->fields,pSVar15);
  pSVar15 = (System_Action_string__o *)(pSVar12->fields).method_ptr;
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057aeb5b == '\0') goto label_044d84a5;
label_044d836a:
    uVar20 = "Sending request...";
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto label_044d837b;
label_044d84c9:
    il2cpp_runtime_helper_02337ed0();
    lVar1 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
  }
  else {
    if (g_data_057aeb5b != '\0') goto label_044d836a;
label_044d84a5:
    uVar20 = "Sending request...";
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb5b = '\x01';
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto label_044d84c9;
label_044d837b:
    lVar1 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
  }
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),uVar20,*(undefined8 *)(lVar1 + 0x28));
  }
  if (pSVar15 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar15->fields).invoke_impl)((pSVar15->fields).method_code,uVar20,(pSVar15->fields).method);
  }
  pSVar10 = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_Dictionary_byte_object);
  System_Action_object____ctor();
  pSVar5 = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
  method_00 = (MethodInfo *)0x0;
  System_Action___ctor();
  pSVar9 = Anticheat_ModeratorManager__TrackRequest(5.0,pSVar10,pSVar5,method_06);
  if (pSVar4 == (System_Collections_Generic_Dictionary_byte__object__o *)0x0) goto label_044d867f;
  iVar21 = (pSVar4->fields)._freeCount;
  local_128 = extraout_RDX_05;
  if ((char)(pSVar4->fields)._version == '\0') {
    if (0 < iVar21) goto label_044d84f3;
    value = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)(pSVar4->fields)._buckets;
    iVar21 = 1;
  }
  else if (iVar21 < 1) {
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057ae4d9 == '\0') goto label_044d864d;
label_044d8457:
      iVar21 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
    }
    else {
      if (g_data_057ae4d9 != '\0') goto label_044d8457;
label_044d864d:
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      g_data_057ae4d9 = '\x01';
      iVar21 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
    }
    if (iVar21 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar24 = *(char *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 8) == '\0';
    method_00 = (MethodInfo *)(ulong)bVar24;
    iVar21 = (uint)bVar24 * 2 + 2;
    value = (pSVar4->fields)._entries;
  }
  else {
label_044d84f3:
    local_12c = iVar21;
    value = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
            il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&local_12c);
    iVar21 = 0;
  }
  pSVar12 = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_byte_object);
  pSVar10 = pSVar12;
  System_Collections_Generic_Dictionary_byte__object____ctor
            ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar12,
             (MethodInfo_304B1A0 *)MethodInfo_Dictionary_2_System_Byte_System_Object);
  if (pSVar12 != (System_Action_Dictionary_byte__object___o *)0x0) {
    System_Collections_Generic_Dictionary_byte__object___Add
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar12,'\0',(Il2CppObject *)pSVar9,
               MethodInfo_Void_Add);
    local_130 = 5 - (uint)((char)(pSVar4->fields)._version == '\0');
    pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&local_130);
    System_Collections_Generic_Dictionary_byte__object___Add
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar12,'\x01',pIVar7,MethodInfo_Void_Add);
    local_134 = iVar21;
    pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&local_134);
    System_Collections_Generic_Dictionary_byte__object___Add
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar12,'\x02',pIVar7,MethodInfo_Void_Add);
    System_Collections_Generic_Dictionary_byte__object___Add
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar12,'\x03',&value->obj,
               MethodInfo_Void_Add);
    pIVar7 = local_128;
    if (local_128 == (Il2CppObject *)0x0) {
      pIVar7 = (Il2CppObject *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    System_Collections_Generic_Dictionary_byte__object___Add
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar12,'\x04',pIVar7,MethodInfo_Void_Add);
    pMVar13 = extraout_RDX_06;
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pMVar13 = extraout_RDX_07;
    }
    Anticheat_ModeratorManager__RaiseModEvent
              (0xb4,(System_Collections_Generic_Dictionary_byte__object__o *)pSVar12,pMVar13);
    return;
  }
label_044d867f:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeb67 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb67 = '\x01';
  }
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Anticheat_ModeratorManager__RequestRoomBanList_43d86e0(0,0x32,(System_Action_string__o *)pSVar10,method_00);
  return;
}


// Anticheat.ModeratorManager$$HandlePlayerListNotification
// il2cpp: void Anticheat_ModeratorManager__HandlePlayerListNotification (ExitGames_Client_Photon_EventData_o* photonEvent, const MethodInfo* method);
// 0x44d5390

void Anticheat_ModeratorManager__HandlePlayerListNotification
               (ExitGames_Client_Photon_EventData_o *photonEvent,MethodInfo *method)

{
  uint uVar1;
  ExitGames_Client_Photon_ParameterDictionary_o *__this;
  long lVar2;
  bool_conflict bVar3;
  System_Collections_Generic_Dictionary_byte__object__o *__this_00;
  System_Collections_Generic_Dictionary_byte__object__array *pSVar4;
  System_Collections_Generic_Dictionary_byte__object__o *value;
  long *plVar5;
  MethodInfo_3855510 *method_00;
  MethodInfo_3855480 *method_01;
  MethodInfo_3855510 *extraout_RDX;
  MethodInfo_3855570 *extraout_RDX_00;
  MethodInfo_3855480 *pMVar6;
  MethodInfo *method_02;
  MethodInfo_3855480 *extraout_RDX_01;
  MethodInfo_3855570 *method_03;
  MethodInfo_3855570 *extraout_RDX_02;
  MethodInfo_3855570 *method_04;
  ulong uVar7;
  MethodInfo *method_05;
  System_Collections_Generic_Dictionary_int__object__o *pSVar8;
  ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__o EVar9;
  System_Collections_Generic_KeyValuePair_K__V__o SVar10;
  undefined1 auVar11 [16];
  ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__o __this_01;
  ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__o __this_02;
  ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__o __this_03;
  ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__o __this_04;
  ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__o __this_05;
  ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__o __this_06;
  undefined8 local_38;
  MethodInfo_3855510 *pMStack_30;
  
  if (g_data_057aeb61 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Byte_System_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_byte_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Byte_get_Key);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_Byte_System_Object_get_Current);
    g_data_057aeb61 = '\x01';
  }
  local_38 = 0;
  pMStack_30 = (MethodInfo_3855510 *)0x0;
  __this_00 = (System_Collections_Generic_Dictionary_byte__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_byte_object);
  System_Collections_Generic_Dictionary_byte__object____ctor(__this_00,MethodInfo_Dictionary_2_System_Byte_System_Object);
  if (photonEvent == (ExitGames_Client_Photon_EventData_o *)0x0) goto label_044d56fe;
  __this = (photonEvent->fields).Parameters;
  if (__this == (ExitGames_Client_Photon_ParameterDictionary_o *)0x0) goto label_044d56fe;
  EVar9 = ExitGames_Client_Photon_ParameterDictionary__GetEnumerator(__this,(MethodInfo *)0x0);
  method_00 = (MethodInfo_3855510 *)EVar9.fields._dict;
  local_38 = CONCAT44(local_38._4_4_,EVar9.fields._index);
  pMStack_30 = method_00;
  if (__this_00 == (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
    EVar9.fields._dict = MethodInfo_Boolean_MoveNext;
    EVar9.fields._0_8_ = &local_38;
    bVar3 = ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object___MoveNext(EVar9,method_00);
    pMVar6 = (MethodInfo_3855480 *)extraout_RDX_00;
    if ((char)bVar3 != '\0') goto label_044d5708;
  }
  else {
    while (__this_01.fields._dict = MethodInfo_Boolean_MoveNext, __this_01.fields._0_8_ = &local_38,
          bVar3 = ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object___MoveNext
                            (__this_01,method_00), pMVar6 = method_01, (char)bVar3 != '\0') {
      __this_02.fields._dict = MethodInfo_KeyValuePair_2_System_Byte_System_Object_get_Current;
      __this_02.fields._0_8_ = &local_38;
      SVar10 = ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object___get_Current
                         (__this_02,method_01);
      System_Collections_Generic_Dictionary_byte__object___set_Item
                (__this_00,(uint8_t)SVar10.fields.key,SVar10.fields.value,MethodInfo_Void_set_Item);
      method_00 = extraout_RDX;
    }
  }
  __this_03.fields._dict = MethodInfo_Void_Dispose;
  __this_03.fields._0_8_ = &local_38;
  ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object___Dispose
            (__this_03,(MethodInfo_3855570 *)pMVar6);
  do {
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057ae4db != '\0') goto label_044d5523;
label_044d5552:
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      g_data_057ae4db = '\x01';
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto label_044d552f;
label_044d5571:
      il2cpp_runtime_helper_02337ed0();
      pSVar8 = *(System_Collections_Generic_Dictionary_int__object__o **)
                (*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x10);
      if (pSVar8 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_044d558d;
label_044d56fe:
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      if (g_data_057ae4db == '\0') goto label_044d5552;
label_044d5523:
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto label_044d5571;
label_044d552f:
      pSVar8 = *(System_Collections_Generic_Dictionary_int__object__o **)
                (*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x10);
      if (pSVar8 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_044d56fe;
label_044d558d:
      System_Collections_Generic_Dictionary_int__object___Clear(pSVar8,MethodInfo_Void_Clear);
      method_05 = (MethodInfo *)0x0;
      pSVar4 = Anticheat_ModeratorManager__GetResponseEntries(__this_00,'\0',method_02);
      if ((pSVar4 == (System_Collections_Generic_Dictionary_byte__object__array *)0x0) ||
         ((int)pSVar4->max_length < 1)) {
label_044d56c1:
        if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        lVar2 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x28);
        if (lVar2 != 0) {
          (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
        }
        return;
      }
      uVar7 = 0;
      if ((pSVar4->max_length & 0xffffffff) != 0) {
        do {
          __this_00 = pSVar4->m_Items[uVar7];
          value = __this_00;
          if (__this_00 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
            if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            value = (System_Collections_Generic_Dictionary_byte__object__o *)
                    Anticheat_ModeratorManager__ParsePlayerEntry(__this_00,method_05);
            if (value == (System_Collections_Generic_Dictionary_byte__object__o *)0x0) goto label_044d56fe;
            if (0 < (value->fields)._freeCount) {
              if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
                if (g_data_057ae4db != '\0') goto label_044d5649;
label_044d5678:
                il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
                g_data_057ae4db = '\x01';
                if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto label_044d5655;
label_044d5693:
                il2cpp_runtime_helper_02337ed0();
                pSVar8 = *(System_Collections_Generic_Dictionary_int__object__o **)
                          (*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x10);
              }
              else {
                if (g_data_057ae4db == '\0') goto label_044d5678;
label_044d5649:
                if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto label_044d5693;
label_044d5655:
                pSVar8 = *(System_Collections_Generic_Dictionary_int__object__o **)
                          (*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x10);
              }
              __this_00 = value;
              if (pSVar8 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_044d56fe;
              uVar1 = (value->fields)._freeCount;
              method_05 = (MethodInfo *)(ulong)uVar1;
              System_Collections_Generic_Dictionary_int__object___set_Item
                        (pSVar8,uVar1,(Il2CppObject *)value,MethodInfo_Void_set_Item);
            }
          }
          uVar7 = uVar7 + 1;
          uVar1 = (uint)pSVar4->max_length;
          if ((long)(int)uVar1 <= (long)uVar7) goto label_044d56c1;
          __this_00 = value;
        } while (uVar7 < uVar1);
      }
    }
    il2cpp_runtime_helper_022b2ca0();
    pMVar6 = extraout_RDX_01;
label_044d5708:
    __this_04.fields._dict = MethodInfo_KeyValuePair_2_System_Byte_System_Object_get_Current;
    __this_04.fields._0_8_ = &local_38;
    ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object___get_Current(__this_04,pMVar6);
    auVar11 = il2cpp_runtime_helper_022b2c90();
    method_04 = auVar11._8_8_;
    if (auVar11._8_4_ != 1) goto label_044d578c;
    plVar5 = (long *)__cxa_begin_catch(auVar11._0_8_);
    lVar2 = *plVar5;
    __cxa_end_catch();
    __this_05.fields._dict = MethodInfo_Void_Dispose;
    __this_05.fields._0_8_ = &local_38;
    ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object___Dispose(__this_05,method_03);
  } while (lVar2 == 0);
  il2cpp_runtime_helper_022fefe0(lVar2);
  method_04 = extraout_RDX_02;
label_044d578c:
  __this_06.fields._dict = MethodInfo_Void_Dispose;
  __this_06.fields._0_8_ = &local_38;
  ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object___Dispose(__this_06,method_04);
  _Unwind_Resume(auVar11._0_8_);
}


// Anticheat.ModeratorManager$$HandlePlayerJoinNotification
// il2cpp: void Anticheat_ModeratorManager__HandlePlayerJoinNotification (ExitGames_Client_Photon_EventData_o* photonEvent, const MethodInfo* method);
// 0x44d57d0

void Anticheat_ModeratorManager__HandlePlayerJoinNotification
               (ExitGames_Client_Photon_EventData_o *photonEvent,MethodInfo *method)

{
  ExitGames_Client_Photon_ParameterDictionary_o *__this;
  System_Collections_Generic_Dictionary_byte__object__o *entry;
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  long lVar1;
  bool_conflict bVar2;
  System_Collections_Generic_Dictionary_byte__object__o *__this_01;
  System_Collections_Generic_Dictionary_byte__object__array *pSVar3;
  Anticheat_PlayerEntry_o *value;
  long *plVar4;
  MethodInfo_3855510 *method_00;
  MethodInfo_3855480 *method_01;
  MethodInfo_3855510 *extraout_RDX;
  MethodInfo_3855570 *extraout_RDX_00;
  MethodInfo_3855480 *pMVar5;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_02;
  MethodInfo *extraout_RDX_02;
  MethodInfo_3855480 *extraout_RDX_03;
  MethodInfo_3855570 *method_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo_3855570 *extraout_RDX_05;
  MethodInfo_3855570 *method_04;
  MethodInfo *method_05;
  ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__o EVar6;
  System_Collections_Generic_KeyValuePair_K__V__o SVar7;
  undefined1 auVar8 [16];
  ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__o __this_02;
  ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__o __this_03;
  ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__o __this_04;
  ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__o __this_05;
  ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__o __this_06;
  ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__o __this_07;
  undefined8 local_38;
  MethodInfo_3855510 *pMStack_30;
  
  if (g_data_057aeb62 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Byte_System_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_byte_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Byte_get_Key);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_Byte_System_Object_get_Current);
    g_data_057aeb62 = '\x01';
  }
  local_38 = 0;
  pMStack_30 = (MethodInfo_3855510 *)0x0;
  __this_01 = (System_Collections_Generic_Dictionary_byte__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_byte_object);
  System_Collections_Generic_Dictionary_byte__object____ctor(__this_01,MethodInfo_Dictionary_2_System_Byte_System_Object);
  if (photonEvent == (ExitGames_Client_Photon_EventData_o *)0x0) goto label_044d5a93;
  __this = (photonEvent->fields).Parameters;
  if (__this == (ExitGames_Client_Photon_ParameterDictionary_o *)0x0) goto label_044d5a93;
  EVar6 = ExitGames_Client_Photon_ParameterDictionary__GetEnumerator(__this,(MethodInfo *)0x0);
  method_00 = (MethodInfo_3855510 *)EVar6.fields._dict;
  local_38 = CONCAT44(local_38._4_4_,EVar6.fields._index);
  pMStack_30 = method_00;
  if (__this_01 == (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
    EVar6.fields._dict = MethodInfo_Boolean_MoveNext;
    EVar6.fields._0_8_ = &local_38;
    bVar2 = ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object___MoveNext(EVar6,method_00);
    pMVar5 = (MethodInfo_3855480 *)extraout_RDX_00;
    if ((char)bVar2 != '\0') goto label_044d5a9d;
  }
  else {
    while (__this_02.fields._dict = MethodInfo_Boolean_MoveNext, __this_02.fields._0_8_ = &local_38,
          bVar2 = ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object___MoveNext
                            (__this_02,method_00), pMVar5 = method_01, (char)bVar2 != '\0') {
      __this_03.fields._dict = MethodInfo_KeyValuePair_2_System_Byte_System_Object_get_Current;
      __this_03.fields._0_8_ = &local_38;
      SVar7 = ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object___get_Current
                        (__this_03,method_01);
      System_Collections_Generic_Dictionary_byte__object___set_Item
                (__this_01,(uint8_t)SVar7.fields.key,SVar7.fields.value,MethodInfo_Void_set_Item);
      method_00 = extraout_RDX;
    }
  }
  __this_04.fields._dict = MethodInfo_Void_Dispose;
  __this_04.fields._0_8_ = &local_38;
  ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object___Dispose
            (__this_04,(MethodInfo_3855570 *)pMVar5);
  method_02 = extraout_RDX_01;
  do {
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      method_02 = extraout_RDX_02;
    }
    method_05 = (MethodInfo *)0x0;
    pSVar3 = Anticheat_ModeratorManager__GetResponseEntries(__this_01,'\0',method_02);
    if (pSVar3 == (System_Collections_Generic_Dictionary_byte__object__array *)0x0) {
      return;
    }
    if (pSVar3->max_length == 0) {
      return;
    }
    if ((int)pSVar3->max_length != 0) {
      entry = pSVar3->m_Items[0];
      if (entry == (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
        return;
      }
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      value = Anticheat_ModeratorManager__ParsePlayerEntry(entry,method_05);
      if (value != (Anticheat_PlayerEntry_o *)0x0) {
        if ((value->fields).ActorNumber < 1) goto label_044d5a05;
        if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          if (g_data_057ae4db == '\0') goto label_044d5a54;
label_044d59cc:
          if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto label_044d59dc;
label_044d5a77:
          il2cpp_runtime_helper_02337ed0();
          __this_00 = *(System_Collections_Generic_Dictionary_int__object__o **)
                       (*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x10);
        }
        else {
          if (g_data_057ae4db != '\0') goto label_044d59cc;
label_044d5a54:
          il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
          g_data_057ae4db = '\x01';
          if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto label_044d5a77;
label_044d59dc:
          __this_00 = *(System_Collections_Generic_Dictionary_int__object__o **)
                       (*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x10);
        }
        if (__this_00 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
          System_Collections_Generic_Dictionary_int__object___set_Item
                    (__this_00,(value->fields).ActorNumber,(Il2CppObject *)value,MethodInfo_Void_set_Item);
label_044d5a05:
          if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          lVar1 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x28);
          if (lVar1 != 0) {
            (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
          }
          return;
        }
      }
label_044d5a93:
      il2cpp_runtime_helper_022b2c90();
    }
    il2cpp_runtime_helper_022b2ca0();
    pMVar5 = extraout_RDX_03;
label_044d5a9d:
    __this_05.fields._dict = MethodInfo_KeyValuePair_2_System_Byte_System_Object_get_Current;
    __this_05.fields._0_8_ = &local_38;
    ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object___get_Current(__this_05,pMVar5);
    auVar8 = il2cpp_runtime_helper_022b2c90();
    method_04 = auVar8._8_8_;
    if (auVar8._8_4_ != 1) goto label_044d5b21;
    plVar4 = (long *)__cxa_begin_catch(auVar8._0_8_);
    lVar1 = *plVar4;
    __cxa_end_catch();
    __this_06.fields._dict = MethodInfo_Void_Dispose;
    __this_06.fields._0_8_ = &local_38;
    ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object___Dispose(__this_06,method_03);
    method_02 = extraout_RDX_04;
  } while (lVar1 == 0);
  il2cpp_runtime_helper_022fefe0(lVar1);
  method_04 = extraout_RDX_05;
label_044d5b21:
  __this_07.fields._dict = MethodInfo_Void_Dispose;
  __this_07.fields._0_8_ = &local_38;
  ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object___Dispose(__this_07,method_04);
  _Unwind_Resume(auVar8._0_8_);
}


// Anticheat.ModeratorManager$$KickPlayer
// il2cpp: void Anticheat_ModeratorManager__KickPlayer (int32_t actorNumber, System_Action_string__o* localStatus, const MethodInfo* method);
// 0x44d7660

void Anticheat_ModeratorManager__KickPlayer
               (int32_t actorNumber,System_Action_string__o *localStatus,MethodInfo *method)

{
  long lVar1;
  long lVar2;
  bool_conflict bVar3;
  Anticheat_ModeratorManager___c__DisplayClass89_0_o *__this;
  System_Action_Dictionary_byte__object___o *pSVar4;
  System_Action_o *pSVar5;
  System_String_o *pSVar6;
  System_Collections_Generic_Dictionary_byte__object__o *pSVar7;
  Il2CppObject *pIVar8;
  System_Action_string__o *pSVar9;
  System_Int32_array *pSVar10;
  System_Collections_Generic_Dictionary_byte__object__o *__this_00;
  System_Action_Dictionary_byte__object___o *pSVar11;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *value;
  MethodInfo *in_RCX;
  MethodInfo *pMVar12;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  System_String_o *extraout_RDX;
  MethodInfo *method_03;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  System_Int32_array *extraout_RDX_02;
  MethodInfo *method_04;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  Il2CppObject *extraout_RDX_05;
  MethodInfo *method_05;
  MethodInfo *extraout_RDX_06;
  MethodInfo *extraout_RDX_07;
  System_Collections_Generic_Dictionary_byte__object__Fields *pSVar13;
  System_Action_string__o *pSVar14;
  System_Action_string__o *pSVar15;
  uint uVar16;
  Anticheat_ModeratorManager___c__DisplayClass89_0_o *pAVar17;
  System_Collections_Generic_Dictionary_byte__object__o *pSVar18;
  System_Action_string__o *value_00;
  undefined8 *unaff_R12;
  undefined8 uVar19;
  System_Action_Dictionary_byte__object___o *unaff_R13;
  int iVar20;
  MethodInfo *pMVar21;
  ulong uVar22;
  bool bVar23;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  Il2CppObject *pIStack_100;
  System_String_o *pSStack_f8;
  System_Action_string__o *pSStack_f0;
  System_Collections_Generic_Dictionary_byte__object__o *pSStack_e8;
  MethodInfo *pMStack_e0;
  ulong uStack_d8;
  System_Int32_array *pSStack_d0;
  int iStack_bc;
  int iStack_b8;
  uint uStack_b4;
  System_String_o *pSStack_b0;
  MethodInfo *pMStack_a8;
  System_Action_Dictionary_byte__object___o *pSStack_a0;
  MethodInfo *pMStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  uint uStack_78;
  uint auStack_74 [3];
  undefined8 uStack_68;
  undefined8 *puStack_60;
  int32_t aiStack_34 [3];
  
  if (g_data_057aeb63 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_Dictionary_byte_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Byte_System_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_byte_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_KickPlayer_b__0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_KickPlayer_b__1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass89_0);
    il2cpp_runtime_helper_023445d0(&"Sending request...");
    g_data_057aeb63 = '\x01';
  }
  __this = (Anticheat_ModeratorManager___c__DisplayClass89_0_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass89_0);
  pSVar14 = (System_Action_string__o *)0x0;
  pAVar17 = __this;
  Anticheat_ModeratorManager___c__DisplayClass89_0___ctor(__this,(MethodInfo *)0x0);
  uVar16 = (uint)pAVar17;
  if (__this != (Anticheat_ModeratorManager___c__DisplayClass89_0_o *)0x0) {
    (__this->fields).localStatus = localStatus;
    il2cpp_runtime_helper_022b4080(&__this->fields,localStatus);
    pSVar14 = (__this->fields).localStatus;
    unaff_R12 = &TypeInfo_ModeratorManager;
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057aeb5b == '\0') goto label_044d7908;
label_044d7765:
      uVar19 = "Sending request...";
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto label_044d7776;
label_044d792c:
      il2cpp_runtime_helper_02337ed0();
      lVar1 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
    }
    else {
      if (g_data_057aeb5b != '\0') goto label_044d7765;
label_044d7908:
      uVar19 = "Sending request...";
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      g_data_057aeb5b = '\x01';
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto label_044d792c;
label_044d7776:
      lVar1 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
    }
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),uVar19,*(undefined8 *)(lVar1 + 0x28));
    }
    if (pSVar14 != (System_Action_string__o *)0x0) {
      (*(code *)(pSVar14->fields).invoke_impl)((pSVar14->fields).method_code,uVar19,(pSVar14->fields).method);
    }
    pSVar4 = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_Dictionary_byte_object);
    System_Action_object____ctor();
    pSVar5 = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
    in_RCX = (MethodInfo *)0x0;
    System_Action___ctor();
    pSVar6 = Anticheat_ModeratorManager__TrackRequest(5.0,pSVar4,pSVar5,method_01);
    pSVar7 = (System_Collections_Generic_Dictionary_byte__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_byte_object);
    pSVar14 = MethodInfo_Dictionary_2_System_Byte_System_Object;
    pSVar18 = pSVar7;
    System_Collections_Generic_Dictionary_byte__object____ctor(pSVar7,(MethodInfo_304B1A0 *)MethodInfo_Dictionary_2_System_Byte_System_Object);
    uVar16 = (uint)pSVar18;
    if (pSVar7 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
      System_Collections_Generic_Dictionary_byte__object___Add
                (pSVar7,'\0',(Il2CppObject *)pSVar6,MethodInfo_Void_Add);
      aiStack_34[2] = 1;
      pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,aiStack_34 + 2);
      System_Collections_Generic_Dictionary_byte__object___Add(pSVar7,'\x01',pIVar8,MethodInfo_Void_Add);
      aiStack_34[1] = 0;
      pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,aiStack_34 + 1);
      System_Collections_Generic_Dictionary_byte__object___Add(pSVar7,'\x02',pIVar8,MethodInfo_Void_Add);
      aiStack_34[0] = actorNumber;
      pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,aiStack_34);
      System_Collections_Generic_Dictionary_byte__object___Add(pSVar7,'\x03',pIVar8,MethodInfo_Void_Add);
      Anticheat_ModeratorManager__RaiseModEvent(0xb4,pSVar7,method_02);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar21 = (MethodInfo *)(ulong)uVar16;
  pMVar12 = in_RCX;
  uStack_68 = 0;
  puStack_60 = unaff_R12;
  if (g_data_057aeb64 == '\0') {
    uStack_88 = 0x44d798f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_Dictionary_byte_object);
    uStack_88 = 0x44d799b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    uStack_88 = 0x44d79a7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    uStack_88 = 0x44d79b3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Byte_System_Object);
    uStack_88 = 0x44d79bf;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_byte_object);
    uStack_88 = 0x44d79cb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    uStack_88 = 0x44d79d7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RoomBan_b__0);
    uStack_88 = 0x44d79e3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RoomBan_b__1);
    uStack_88 = 0x44d79ef;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass90_0);
    uStack_88 = 0x44d79fb;
    il2cpp_runtime_helper_023445d0(&"Sending request...");
    g_data_057aeb64 = '\x01';
  }
  uStack_88 = 0x44d7a11;
  pSVar9 = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass90_0);
  pSVar15 = (System_Action_string__o *)0x0;
  uStack_88 = 0x44d7a1e;
  value_00 = pSVar9;
  Anticheat_ModeratorManager___c__DisplayClass90_0___ctor
            ((Anticheat_ModeratorManager___c__DisplayClass90_0_o *)pSVar9,(MethodInfo *)0x0);
  pSVar6 = extraout_RDX;
  if (pSVar9 != (System_Action_string__o *)0x0) {
    (pSVar9->fields).method_ptr = (intptr_t)extraout_RDX;
    uStack_88 = 0x44d7a3f;
    uStack_78 = uVar16;
    il2cpp_runtime_helper_022b4080(&pSVar9->fields,extraout_RDX);
    lVar1 = (pSVar9->fields).method_ptr;
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      uStack_88 = 0x44d7c4a;
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057aeb5b == '\0') goto label_044d7c68;
label_044d7a71:
      uVar19 = "Sending request...";
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto label_044d7a81;
label_044d7c92:
      uStack_88 = 0x44d7c9d;
      il2cpp_runtime_helper_02337ed0();
      lVar2 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
      pMVar21 = in_RCX;
    }
    else {
      if (g_data_057aeb5b != '\0') goto label_044d7a71;
label_044d7c68:
      uVar19 = "Sending request...";
      uStack_88 = 0x44d7c74;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      g_data_057aeb5b = '\x01';
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto label_044d7c92;
label_044d7a81:
      lVar2 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
    }
    if (lVar2 != 0) {
      uStack_88 = 0x44d7a9f;
      (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),uVar19,*(undefined8 *)(lVar2 + 0x28));
    }
    if (lVar1 != 0) {
      uStack_88 = 0x44d7ab2;
      (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),uVar19,*(undefined8 *)(lVar1 + 0x28));
    }
    uStack_88 = 0x44d7ac1;
    unaff_R13 = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_Dictionary_byte_object);
    uStack_88 = 0x44d7adb;
    System_Action_object____ctor();
    uStack_88 = 0x44d7aea;
    pSVar5 = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
    pMVar12 = (MethodInfo *)0x0;
    uStack_88 = 0x44d7b04;
    System_Action___ctor();
    uStack_88 = 0x44d7b17;
    pSVar6 = Anticheat_ModeratorManager__TrackRequest(5.0,unaff_R13,pSVar5,method_03);
    uStack_88 = 0x44d7b29;
    pSVar9 = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_byte_object);
    uStack_88 = 0x44d7b3e;
    pSVar15 = MethodInfo_Dictionary_2_System_Byte_System_Object;
    value_00 = pSVar9;
    System_Collections_Generic_Dictionary_byte__object____ctor
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar9,
               (MethodInfo_304B1A0 *)MethodInfo_Dictionary_2_System_Byte_System_Object);
    if (pSVar9 != (System_Action_string__o *)0x0) {
      uStack_88 = 0x44d7b5f;
      System_Collections_Generic_Dictionary_byte__object___Add
                ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar9,'\0',(Il2CppObject *)pSVar6,
                 MethodInfo_Void_Add);
      auStack_74[2] = (uint)pSVar14 & 0xff | 2;
      uStack_88 = 0x44d7b7f;
      pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_74 + 2);
      uStack_88 = 0x44d7b93;
      System_Collections_Generic_Dictionary_byte__object___Add
                ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar9,'\x01',pIVar8,MethodInfo_Void_Add);
      auStack_74[1] = 0;
      uStack_88 = 0x44d7ba9;
      pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_74 + 1);
      uStack_88 = 0x44d7bbd;
      System_Collections_Generic_Dictionary_byte__object___Add
                ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar9,'\x02',pIVar8,MethodInfo_Void_Add);
      auStack_74[0] = uStack_78;
      uStack_88 = 0x44d7bd3;
      pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_74);
      uStack_88 = 0x44d7be7;
      System_Collections_Generic_Dictionary_byte__object___Add
                ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar9,'\x03',pIVar8,MethodInfo_Void_Add);
      if (in_RCX == (MethodInfo *)0x0) {
        in_RCX = (MethodInfo *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      }
      uStack_88 = 0x44d7c11;
      System_Collections_Generic_Dictionary_byte__object___Add
                ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar9,'\x04',(Il2CppObject *)in_RCX
                 ,MethodInfo_Void_Add);
      pMVar12 = extraout_RDX_00;
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        uStack_88 = 0x44d7c29;
        il2cpp_runtime_helper_02337ed0();
        pMVar12 = extraout_RDX_01;
      }
      uStack_88 = 0x44d7c36;
      Anticheat_ModeratorManager__RaiseModEvent
                (0xb4,(System_Collections_Generic_Dictionary_byte__object__o *)pSVar9,pMVar12);
      return;
    }
  }
  uStack_88 = 0x44d7cc2;
  il2cpp_runtime_helper_022b2c90();
  uVar22 = (ulong)pSVar15 & 0xffffffff;
  method_00 = pMVar12;
  pSStack_b0 = pSVar6;
  pMStack_a8 = in_RCX;
  pSStack_a0 = unaff_R13;
  pMStack_98 = pMVar21;
  uStack_90 = (ulong)pSVar14 & 0xffffffff;
  uStack_88 = 0;
  if (g_data_057aeb65 == '\0') {
    pSStack_d0 = (System_Int32_array *)0x44d7d03;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_Dictionary_byte_object);
    pSStack_d0 = (System_Int32_array *)0x44d7d0f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    pSStack_d0 = (System_Int32_array *)0x44d7d1b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pSStack_d0 = (System_Int32_array *)0x44d7d27;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Byte_System_Object);
    pSStack_d0 = (System_Int32_array *)0x44d7d33;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_byte_object);
    pSStack_d0 = (System_Int32_array *)0x44d7d3f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    pSStack_d0 = (System_Int32_array *)0x44d7d4b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RoomBanPlayerEntry_b__0);
    pSStack_d0 = (System_Int32_array *)0x44d7d57;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RoomBanPlayerEntry_b__1);
    pSStack_d0 = (System_Int32_array *)0x44d7d63;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass91_0);
    pSStack_d0 = (System_Int32_array *)0x44d7d6f;
    il2cpp_runtime_helper_023445d0(&"Player has no session ID to ban.");
    pSStack_d0 = (System_Int32_array *)0x44d7d7b;
    il2cpp_runtime_helper_023445d0(&"Invalid player entry.");
    pSStack_d0 = (System_Int32_array *)0x44d7d87;
    il2cpp_runtime_helper_023445d0(&"Sending request...");
    pSStack_d0 = (System_Int32_array *)0x44d7d93;
    il2cpp_runtime_helper_023445d0(&"Player has no IP address to ban.");
    g_data_057aeb65 = '\x01';
  }
  pSStack_d0 = (System_Int32_array *)0x44d7da9;
  pSVar7 = (System_Collections_Generic_Dictionary_byte__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass91_0);
  pSVar14 = (System_Action_string__o *)0x0;
  pSStack_d0 = (System_Int32_array *)0x44d7db6;
  pSVar18 = pSVar7;
  Anticheat_ModeratorManager___c__DisplayClass91_0___ctor
            ((Anticheat_ModeratorManager___c__DisplayClass91_0_o *)pSVar7,(MethodInfo *)0x0);
  pSVar10 = extraout_RDX_02;
  if (pSVar7 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
    pSVar13 = &pSVar7->fields;
    (pSVar7->fields)._buckets = extraout_RDX_02;
    pSStack_d0 = (System_Int32_array *)0x44d7dd5;
    il2cpp_runtime_helper_022b4080(pSVar13);
    if (value_00 == (System_Action_string__o *)0x0) {
      pSVar10 = pSVar13->_buckets;
      uVar19 = "Invalid player entry.";
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        pSStack_d0 = (System_Int32_array *)0x44d7e42;
        il2cpp_runtime_helper_02337ed0();
        uVar19 = "Invalid player entry.";
      }
joined_r0x044d81fe:
      if (g_data_057aeb5b == '\0') {
        pSStack_d0 = (System_Int32_array *)0x44d7e61;
        il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
        g_data_057aeb5b = '\x01';
      }
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        pSStack_d0 = (System_Int32_array *)0x44d7f0d;
        il2cpp_runtime_helper_02337ed0();
        lVar1 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
      }
      else {
        lVar1 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
      }
      if (lVar1 != 0) {
        pSStack_d0 = (System_Int32_array *)0x44d7e96;
        (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),uVar19,*(undefined8 *)(lVar1 + 0x28));
      }
      if (pSVar10 == (System_Int32_array *)0x0) {
        return;
      }
      (*(code *)pSVar10->max_length)
                (*(intptr_t *)((long)pSVar10->m_Items + 0x20),uVar19,*(intptr_t *)((long)pSVar10->m_Items + 8)
                );
      return;
    }
    if ((char)uVar22 == '\0') {
      pSStack_d0 = (System_Int32_array *)0x44d7eca;
      bVar3 = System_String__IsNullOrEmpty((System_String_o *)(value_00->fields).method_ptr,(MethodInfo *)0x0)
      ;
      if ((char)bVar3 != '\0') {
        pSVar10 = pSVar13->_buckets;
        uVar19 = "Player has no session ID to ban.";
        if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
          pSStack_d0 = (System_Int32_array *)0x44d81ed;
          il2cpp_runtime_helper_02337ed0();
          uVar19 = "Player has no session ID to ban.";
        }
        goto joined_r0x044d81fe;
      }
      iStack_bc = 1;
      value_00 = (System_Action_string__o *)(value_00->fields).method_ptr;
      pSVar10 = pSVar13->_buckets;
      iVar20 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
    }
    else {
      pSStack_d0 = (System_Int32_array *)0x44d7def;
      bVar3 = System_String__IsNullOrEmpty
                        ((System_String_o *)(value_00->fields).invoke_impl,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        pSVar10 = pSVar13->_buckets;
        uVar19 = "Player has no IP address to ban.";
        if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
          pSStack_d0 = (System_Int32_array *)0x44d7e12;
          il2cpp_runtime_helper_02337ed0();
          uVar19 = "Player has no IP address to ban.";
        }
        goto joined_r0x044d81fe;
      }
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        pSStack_d0 = (System_Int32_array *)0x44d820e;
        il2cpp_runtime_helper_02337ed0();
        if (g_data_057ae4d9 == '\0') goto label_044d821b;
label_044d7f4e:
        iVar20 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
      }
      else {
        if (g_data_057ae4d9 != '\0') goto label_044d7f4e;
label_044d821b:
        pSStack_d0 = (System_Int32_array *)0x44d8227;
        il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
        g_data_057ae4d9 = '\x01';
        iVar20 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
      }
      if (iVar20 == 0) {
        pSStack_d0 = (System_Int32_array *)0x44d8244;
        il2cpp_runtime_helper_02337ed0();
      }
      iStack_bc = (uint)(*(char *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 8) == '\0') * 2 + 2;
      value_00 = (System_Action_string__o *)(value_00->fields).invoke_impl;
      pSVar10 = pSVar13->_buckets;
      iVar20 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
    }
    if (iVar20 == 0) {
      pSStack_d0 = (System_Int32_array *)0x44d7fba;
      il2cpp_runtime_helper_02337ed0();
    }
    uVar19 = "Sending request...";
    if (g_data_057aeb5b == '\0') {
      pSStack_d0 = (System_Int32_array *)0x44d81a2;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      g_data_057aeb5b = '\x01';
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto label_044d81c0;
label_044d7fe8:
      lVar1 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
    }
    else {
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto label_044d7fe8;
label_044d81c0:
      pSStack_d0 = (System_Int32_array *)0x44d81c5;
      il2cpp_runtime_helper_02337ed0();
      lVar1 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
    }
    if (lVar1 != 0) {
      pSStack_d0 = (System_Int32_array *)0x44d8006;
      (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),uVar19,*(undefined8 *)(lVar1 + 0x28));
    }
    if (pSVar10 != (System_Int32_array *)0x0) {
      pSStack_d0 = (System_Int32_array *)0x44d8019;
      (*(code *)pSVar10->max_length)
                (*(intptr_t *)((long)pSVar10->m_Items + 0x20),uVar19,*(intptr_t *)((long)pSVar10->m_Items + 8)
                );
    }
    pSStack_d0 = (System_Int32_array *)0x44d8028;
    pSVar4 = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_Dictionary_byte_object);
    pSStack_d0 = (System_Int32_array *)0x44d8042;
    System_Action_object____ctor();
    pSStack_d0 = (System_Int32_array *)0x44d8051;
    pSVar5 = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
    method_00 = (MethodInfo *)0x0;
    pSStack_d0 = (System_Int32_array *)0x44d806b;
    System_Action___ctor();
    pSStack_d0 = (System_Int32_array *)0x44d807e;
    pSVar10 = (System_Int32_array *)Anticheat_ModeratorManager__TrackRequest(5.0,pSVar4,pSVar5,method_04);
    pSStack_d0 = (System_Int32_array *)0x44d8090;
    __this_00 = (System_Collections_Generic_Dictionary_byte__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_byte_object);
    pSStack_d0 = (System_Int32_array *)0x44d80a5;
    pSVar14 = MethodInfo_Dictionary_2_System_Byte_System_Object;
    pSVar18 = __this_00;
    System_Collections_Generic_Dictionary_byte__object____ctor(__this_00,(MethodInfo_304B1A0 *)MethodInfo_Dictionary_2_System_Byte_System_Object);
    pSVar6 = (System_String_o *)0x0;
    if (__this_00 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
      pSStack_d0 = (System_Int32_array *)0x44d80c6;
      System_Collections_Generic_Dictionary_byte__object___Add
                (__this_00,'\0',(Il2CppObject *)pSVar10,MethodInfo_Void_Add);
      uStack_b4 = (uint)pSVar15 & 0xff | 2;
      pSStack_d0 = (System_Int32_array *)0x44d80e6;
      pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_b4);
      pSStack_d0 = (System_Int32_array *)0x44d80fa;
      System_Collections_Generic_Dictionary_byte__object___Add(__this_00,'\x01',pIVar8,MethodInfo_Void_Add);
      iStack_b8 = iStack_bc;
      pSStack_d0 = (System_Int32_array *)0x44d8110;
      pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_b8);
      pSStack_d0 = (System_Int32_array *)0x44d8124;
      System_Collections_Generic_Dictionary_byte__object___Add(__this_00,'\x02',pIVar8,MethodInfo_Void_Add);
      pSStack_d0 = (System_Int32_array *)0x44d8138;
      System_Collections_Generic_Dictionary_byte__object___Add
                (__this_00,'\x03',(Il2CppObject *)value_00,MethodInfo_Void_Add);
      if (pMVar12 == (MethodInfo *)0x0) {
        pMVar12 = (MethodInfo *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      }
      pSStack_d0 = (System_Int32_array *)0x44d8162;
      System_Collections_Generic_Dictionary_byte__object___Add
                (__this_00,'\x04',(Il2CppObject *)pMVar12,MethodInfo_Void_Add);
      pMVar12 = extraout_RDX_03;
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        pSStack_d0 = (System_Int32_array *)0x44d817a;
        il2cpp_runtime_helper_02337ed0();
        pMVar12 = extraout_RDX_04;
      }
      pSStack_d0 = (System_Int32_array *)0x44d8187;
      Anticheat_ModeratorManager__RaiseModEvent(0xb4,__this_00,pMVar12);
      return;
    }
  }
  pSStack_d0 = (System_Int32_array *)0x44d8252;
  il2cpp_runtime_helper_022b2c90();
  pSStack_f8 = pSVar6;
  pSStack_f0 = value_00;
  pSStack_e8 = pSVar7;
  pMStack_e0 = pMVar12;
  uStack_d8 = uVar22;
  pSStack_d0 = pSVar10;
  if (g_data_057aeb66 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_Dictionary_byte_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Byte_System_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_byte_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RoomUnban_b__0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RoomUnban_b__1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass92_0);
    il2cpp_runtime_helper_023445d0(&"Sending request...");
    g_data_057aeb66 = '\x01';
  }
  pSVar11 = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass92_0);
  pSVar4 = pSVar11;
  Anticheat_ModeratorManager___c__DisplayClass92_0___ctor
            ((Anticheat_ModeratorManager___c__DisplayClass92_0_o *)pSVar11,(MethodInfo *)0x0);
  if (pSVar11 == (System_Action_Dictionary_byte__object___o *)0x0) goto label_044d867f;
  (pSVar11->fields).method_ptr = (intptr_t)pSVar14;
  il2cpp_runtime_helper_022b4080(&pSVar11->fields,pSVar14);
  pSVar14 = (System_Action_string__o *)(pSVar11->fields).method_ptr;
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057aeb5b == '\0') goto label_044d84a5;
label_044d836a:
    uVar19 = "Sending request...";
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto label_044d837b;
label_044d84c9:
    il2cpp_runtime_helper_02337ed0();
    lVar1 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
  }
  else {
    if (g_data_057aeb5b != '\0') goto label_044d836a;
label_044d84a5:
    uVar19 = "Sending request...";
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb5b = '\x01';
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto label_044d84c9;
label_044d837b:
    lVar1 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
  }
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),uVar19,*(undefined8 *)(lVar1 + 0x28));
  }
  if (pSVar14 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar14->fields).invoke_impl)((pSVar14->fields).method_code,uVar19,(pSVar14->fields).method);
  }
  pSVar4 = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_Dictionary_byte_object);
  System_Action_object____ctor();
  pSVar5 = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
  method_00 = (MethodInfo *)0x0;
  System_Action___ctor();
  pSVar6 = Anticheat_ModeratorManager__TrackRequest(5.0,pSVar4,pSVar5,method_05);
  if (pSVar18 == (System_Collections_Generic_Dictionary_byte__object__o *)0x0) goto label_044d867f;
  iVar20 = (pSVar18->fields)._freeCount;
  pIStack_100 = extraout_RDX_05;
  if ((char)(pSVar18->fields)._version == '\0') {
    if (0 < iVar20) goto label_044d84f3;
    value = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)(pSVar18->fields)._buckets;
    iVar20 = 1;
  }
  else if (iVar20 < 1) {
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057ae4d9 == '\0') goto label_044d864d;
label_044d8457:
      iVar20 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
    }
    else {
      if (g_data_057ae4d9 != '\0') goto label_044d8457;
label_044d864d:
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      g_data_057ae4d9 = '\x01';
      iVar20 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
    }
    if (iVar20 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar23 = *(char *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 8) == '\0';
    method_00 = (MethodInfo *)(ulong)bVar23;
    iVar20 = (uint)bVar23 * 2 + 2;
    value = (pSVar18->fields)._entries;
  }
  else {
label_044d84f3:
    iStack_104 = iVar20;
    value = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
            il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_104);
    iVar20 = 0;
  }
  pSVar11 = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_byte_object);
  pSVar4 = pSVar11;
  System_Collections_Generic_Dictionary_byte__object____ctor
            ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar11,
             (MethodInfo_304B1A0 *)MethodInfo_Dictionary_2_System_Byte_System_Object);
  if (pSVar11 != (System_Action_Dictionary_byte__object___o *)0x0) {
    System_Collections_Generic_Dictionary_byte__object___Add
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar11,'\0',(Il2CppObject *)pSVar6,
               MethodInfo_Void_Add);
    iStack_108 = 5 - (uint)((char)(pSVar18->fields)._version == '\0');
    pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_108);
    System_Collections_Generic_Dictionary_byte__object___Add
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar11,'\x01',pIVar8,MethodInfo_Void_Add);
    iStack_10c = iVar20;
    pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_10c);
    System_Collections_Generic_Dictionary_byte__object___Add
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar11,'\x02',pIVar8,MethodInfo_Void_Add);
    System_Collections_Generic_Dictionary_byte__object___Add
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar11,'\x03',&value->obj,
               MethodInfo_Void_Add);
    pIVar8 = pIStack_100;
    if (pIStack_100 == (Il2CppObject *)0x0) {
      pIVar8 = (Il2CppObject *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    System_Collections_Generic_Dictionary_byte__object___Add
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar11,'\x04',pIVar8,MethodInfo_Void_Add);
    pMVar12 = extraout_RDX_06;
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pMVar12 = extraout_RDX_07;
    }
    Anticheat_ModeratorManager__RaiseModEvent
              (0xb4,(System_Collections_Generic_Dictionary_byte__object__o *)pSVar11,pMVar12);
    return;
  }
label_044d867f:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeb67 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb67 = '\x01';
  }
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Anticheat_ModeratorManager__RequestRoomBanList_43d86e0(0,0x32,(System_Action_string__o *)pSVar4,method_00);
  return;
}


// Anticheat.ModeratorManager$$RoomBan
// il2cpp: void Anticheat_ModeratorManager__RoomBan (int32_t actorNumber, bool ipBan, System_Action_string__o* localStatus, System_String_o* reason, const MethodInfo* method);
// 0x44d7960

void Anticheat_ModeratorManager__RoomBan
               (int32_t actorNumber,bool_conflict ipBan,System_Action_string__o *localStatus,
               System_String_o *reason,MethodInfo *method)

{
  long lVar1;
  long lVar2;
  bool_conflict bVar3;
  System_Action_string__o *pSVar4;
  System_Action_o *pSVar5;
  Il2CppObject *pIVar6;
  System_Collections_Generic_Dictionary_byte__object__o *__this;
  System_Action_Dictionary_byte__object___o *pSVar7;
  System_Int32_array *pSVar8;
  System_Collections_Generic_Dictionary_byte__object__o *__this_00;
  System_Action_Dictionary_byte__object___o *pSVar9;
  System_String_o *pSVar10;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *value;
  MethodInfo *pMVar11;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  System_Int32_array *extraout_RDX_01;
  MethodInfo *method_02;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  Il2CppObject *extraout_RDX_04;
  MethodInfo *method_03;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  System_Collections_Generic_Dictionary_byte__object__Fields *pSVar12;
  System_Action_string__o *pSVar13;
  System_Action_string__o *pSVar14;
  System_Collections_Generic_Dictionary_byte__object__o *pSVar15;
  undefined8 uVar16;
  System_Action_Dictionary_byte__object___o *unaff_R13;
  int iVar17;
  ulong uVar18;
  bool bVar19;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  Il2CppObject *pIStack_c8;
  System_Action_string__o *pSStack_c0;
  System_Action_string__o *pSStack_b8;
  System_Collections_Generic_Dictionary_byte__object__o *pSStack_b0;
  MethodInfo *pMStack_a8;
  ulong uStack_a0;
  System_Int32_array *pSStack_98;
  int iStack_84;
  int iStack_80;
  uint uStack_7c;
  System_Action_string__o *pSStack_78;
  System_String_o *pSStack_70;
  System_Action_Dictionary_byte__object___o *pSStack_68;
  System_String_o *pSStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  int32_t iStack_40;
  int32_t aiStack_3c [3];
  
  pSVar10 = (System_String_o *)(ulong)(uint)actorNumber;
  pMVar11 = (MethodInfo *)reason;
  if (g_data_057aeb64 == '\0') {
    uStack_50 = 0x44d798f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_Dictionary_byte_object);
    uStack_50 = 0x44d799b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    uStack_50 = 0x44d79a7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    uStack_50 = 0x44d79b3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Byte_System_Object);
    uStack_50 = 0x44d79bf;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_byte_object);
    uStack_50 = 0x44d79cb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    uStack_50 = 0x44d79d7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RoomBan_b__0);
    uStack_50 = 0x44d79e3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RoomBan_b__1);
    uStack_50 = 0x44d79ef;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass90_0);
    uStack_50 = 0x44d79fb;
    il2cpp_runtime_helper_023445d0(&"Sending request...");
    g_data_057aeb64 = '\x01';
  }
  uStack_50 = 0x44d7a11;
  pSVar4 = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass90_0);
  pSVar13 = (System_Action_string__o *)0x0;
  uStack_50 = 0x44d7a1e;
  pSVar14 = pSVar4;
  Anticheat_ModeratorManager___c__DisplayClass90_0___ctor
            ((Anticheat_ModeratorManager___c__DisplayClass90_0_o *)pSVar4,(MethodInfo *)0x0);
  if (pSVar4 != (System_Action_string__o *)0x0) {
    (pSVar4->fields).method_ptr = (intptr_t)localStatus;
    uStack_50 = 0x44d7a3f;
    iStack_40 = actorNumber;
    il2cpp_runtime_helper_022b4080(&pSVar4->fields,localStatus);
    lVar1 = (pSVar4->fields).method_ptr;
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      uStack_50 = 0x44d7c4a;
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057aeb5b == '\0') goto label_044d7c68;
label_044d7a71:
      uVar16 = "Sending request...";
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto label_044d7a81;
label_044d7c92:
      uStack_50 = 0x44d7c9d;
      il2cpp_runtime_helper_02337ed0();
      lVar2 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
      pSVar10 = reason;
    }
    else {
      if (g_data_057aeb5b != '\0') goto label_044d7a71;
label_044d7c68:
      uVar16 = "Sending request...";
      uStack_50 = 0x44d7c74;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      g_data_057aeb5b = '\x01';
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto label_044d7c92;
label_044d7a81:
      lVar2 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
    }
    if (lVar2 != 0) {
      uStack_50 = 0x44d7a9f;
      (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),uVar16,*(undefined8 *)(lVar2 + 0x28));
    }
    if (lVar1 != 0) {
      uStack_50 = 0x44d7ab2;
      (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),uVar16,*(undefined8 *)(lVar1 + 0x28));
    }
    uStack_50 = 0x44d7ac1;
    unaff_R13 = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_Dictionary_byte_object);
    uStack_50 = 0x44d7adb;
    System_Action_object____ctor();
    uStack_50 = 0x44d7aea;
    pSVar5 = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
    pMVar11 = (MethodInfo *)0x0;
    uStack_50 = 0x44d7b04;
    System_Action___ctor();
    uStack_50 = 0x44d7b17;
    localStatus = (System_Action_string__o *)
                  Anticheat_ModeratorManager__TrackRequest(5.0,unaff_R13,pSVar5,method_01);
    uStack_50 = 0x44d7b29;
    pSVar4 = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_byte_object);
    uStack_50 = 0x44d7b3e;
    pSVar13 = MethodInfo_Dictionary_2_System_Byte_System_Object;
    pSVar14 = pSVar4;
    System_Collections_Generic_Dictionary_byte__object____ctor
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar4,
               (MethodInfo_304B1A0 *)MethodInfo_Dictionary_2_System_Byte_System_Object);
    if (pSVar4 != (System_Action_string__o *)0x0) {
      uStack_50 = 0x44d7b5f;
      System_Collections_Generic_Dictionary_byte__object___Add
                ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar4,'\0',
                 (Il2CppObject *)localStatus,MethodInfo_Void_Add);
      aiStack_3c[2] = ipBan & 0xffU | 2;
      uStack_50 = 0x44d7b7f;
      pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,aiStack_3c + 2);
      uStack_50 = 0x44d7b93;
      System_Collections_Generic_Dictionary_byte__object___Add
                ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar4,'\x01',pIVar6,MethodInfo_Void_Add);
      aiStack_3c[1] = 0;
      uStack_50 = 0x44d7ba9;
      pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,aiStack_3c + 1);
      uStack_50 = 0x44d7bbd;
      System_Collections_Generic_Dictionary_byte__object___Add
                ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar4,'\x02',pIVar6,MethodInfo_Void_Add);
      aiStack_3c[0] = iStack_40;
      uStack_50 = 0x44d7bd3;
      pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,aiStack_3c);
      uStack_50 = 0x44d7be7;
      System_Collections_Generic_Dictionary_byte__object___Add
                ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar4,'\x03',pIVar6,MethodInfo_Void_Add);
      if (reason == (System_String_o *)0x0) {
        reason = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      }
      uStack_50 = 0x44d7c11;
      System_Collections_Generic_Dictionary_byte__object___Add
                ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar4,'\x04',(Il2CppObject *)reason
                 ,MethodInfo_Void_Add);
      pMVar11 = extraout_RDX;
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        uStack_50 = 0x44d7c29;
        il2cpp_runtime_helper_02337ed0();
        pMVar11 = extraout_RDX_00;
      }
      uStack_50 = 0x44d7c36;
      Anticheat_ModeratorManager__RaiseModEvent
                (0xb4,(System_Collections_Generic_Dictionary_byte__object__o *)pSVar4,pMVar11);
      return;
    }
  }
  uStack_50 = 0x44d7cc2;
  il2cpp_runtime_helper_022b2c90();
  uVar18 = (ulong)pSVar13 & 0xffffffff;
  method_00 = pMVar11;
  pSStack_78 = localStatus;
  pSStack_70 = reason;
  pSStack_68 = unaff_R13;
  pSStack_60 = pSVar10;
  uStack_58 = (ulong)(uint)ipBan;
  uStack_50 = 0;
  if (g_data_057aeb65 == '\0') {
    pSStack_98 = (System_Int32_array *)0x44d7d03;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_Dictionary_byte_object);
    pSStack_98 = (System_Int32_array *)0x44d7d0f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    pSStack_98 = (System_Int32_array *)0x44d7d1b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pSStack_98 = (System_Int32_array *)0x44d7d27;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Byte_System_Object);
    pSStack_98 = (System_Int32_array *)0x44d7d33;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_byte_object);
    pSStack_98 = (System_Int32_array *)0x44d7d3f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    pSStack_98 = (System_Int32_array *)0x44d7d4b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RoomBanPlayerEntry_b__0);
    pSStack_98 = (System_Int32_array *)0x44d7d57;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RoomBanPlayerEntry_b__1);
    pSStack_98 = (System_Int32_array *)0x44d7d63;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass91_0);
    pSStack_98 = (System_Int32_array *)0x44d7d6f;
    il2cpp_runtime_helper_023445d0(&"Player has no session ID to ban.");
    pSStack_98 = (System_Int32_array *)0x44d7d7b;
    il2cpp_runtime_helper_023445d0(&"Invalid player entry.");
    pSStack_98 = (System_Int32_array *)0x44d7d87;
    il2cpp_runtime_helper_023445d0(&"Sending request...");
    pSStack_98 = (System_Int32_array *)0x44d7d93;
    il2cpp_runtime_helper_023445d0(&"Player has no IP address to ban.");
    g_data_057aeb65 = '\x01';
  }
  pSStack_98 = (System_Int32_array *)0x44d7da9;
  __this = (System_Collections_Generic_Dictionary_byte__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass91_0);
  pSVar4 = (System_Action_string__o *)0x0;
  pSStack_98 = (System_Int32_array *)0x44d7db6;
  pSVar15 = __this;
  Anticheat_ModeratorManager___c__DisplayClass91_0___ctor
            ((Anticheat_ModeratorManager___c__DisplayClass91_0_o *)__this,(MethodInfo *)0x0);
  pSVar8 = extraout_RDX_01;
  if (__this != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
    pSVar12 = &__this->fields;
    (__this->fields)._buckets = extraout_RDX_01;
    pSStack_98 = (System_Int32_array *)0x44d7dd5;
    il2cpp_runtime_helper_022b4080(pSVar12);
    if (pSVar14 == (System_Action_string__o *)0x0) {
      pSVar8 = pSVar12->_buckets;
      uVar16 = "Invalid player entry.";
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        pSStack_98 = (System_Int32_array *)0x44d7e42;
        il2cpp_runtime_helper_02337ed0();
        uVar16 = "Invalid player entry.";
      }
joined_r0x044d81fe:
      if (g_data_057aeb5b == '\0') {
        pSStack_98 = (System_Int32_array *)0x44d7e61;
        il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
        g_data_057aeb5b = '\x01';
      }
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        pSStack_98 = (System_Int32_array *)0x44d7f0d;
        il2cpp_runtime_helper_02337ed0();
        lVar1 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
      }
      else {
        lVar1 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
      }
      if (lVar1 != 0) {
        pSStack_98 = (System_Int32_array *)0x44d7e96;
        (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),uVar16,*(undefined8 *)(lVar1 + 0x28));
      }
      if (pSVar8 == (System_Int32_array *)0x0) {
        return;
      }
      (*(code *)pSVar8->max_length)
                (*(intptr_t *)((long)pSVar8->m_Items + 0x20),uVar16,*(intptr_t *)((long)pSVar8->m_Items + 8));
      return;
    }
    if ((char)uVar18 == '\0') {
      pSStack_98 = (System_Int32_array *)0x44d7eca;
      bVar3 = System_String__IsNullOrEmpty((System_String_o *)(pSVar14->fields).method_ptr,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        pSVar8 = pSVar12->_buckets;
        uVar16 = "Player has no session ID to ban.";
        if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
          pSStack_98 = (System_Int32_array *)0x44d81ed;
          il2cpp_runtime_helper_02337ed0();
          uVar16 = "Player has no session ID to ban.";
        }
        goto joined_r0x044d81fe;
      }
      iStack_84 = 1;
      pSVar14 = (System_Action_string__o *)(pSVar14->fields).method_ptr;
      pSVar8 = pSVar12->_buckets;
      iVar17 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
    }
    else {
      pSStack_98 = (System_Int32_array *)0x44d7def;
      bVar3 = System_String__IsNullOrEmpty((System_String_o *)(pSVar14->fields).invoke_impl,(MethodInfo *)0x0)
      ;
      if ((char)bVar3 != '\0') {
        pSVar8 = pSVar12->_buckets;
        uVar16 = "Player has no IP address to ban.";
        if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
          pSStack_98 = (System_Int32_array *)0x44d7e12;
          il2cpp_runtime_helper_02337ed0();
          uVar16 = "Player has no IP address to ban.";
        }
        goto joined_r0x044d81fe;
      }
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        pSStack_98 = (System_Int32_array *)0x44d820e;
        il2cpp_runtime_helper_02337ed0();
        if (g_data_057ae4d9 == '\0') goto label_044d821b;
label_044d7f4e:
        iVar17 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
      }
      else {
        if (g_data_057ae4d9 != '\0') goto label_044d7f4e;
label_044d821b:
        pSStack_98 = (System_Int32_array *)0x44d8227;
        il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
        g_data_057ae4d9 = '\x01';
        iVar17 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
      }
      if (iVar17 == 0) {
        pSStack_98 = (System_Int32_array *)0x44d8244;
        il2cpp_runtime_helper_02337ed0();
      }
      iStack_84 = (uint)(*(char *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 8) == '\0') * 2 + 2;
      pSVar14 = (System_Action_string__o *)(pSVar14->fields).invoke_impl;
      pSVar8 = pSVar12->_buckets;
      iVar17 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
    }
    if (iVar17 == 0) {
      pSStack_98 = (System_Int32_array *)0x44d7fba;
      il2cpp_runtime_helper_02337ed0();
    }
    uVar16 = "Sending request...";
    if (g_data_057aeb5b == '\0') {
      pSStack_98 = (System_Int32_array *)0x44d81a2;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      g_data_057aeb5b = '\x01';
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto label_044d81c0;
label_044d7fe8:
      lVar1 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
    }
    else {
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto label_044d7fe8;
label_044d81c0:
      pSStack_98 = (System_Int32_array *)0x44d81c5;
      il2cpp_runtime_helper_02337ed0();
      lVar1 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
    }
    if (lVar1 != 0) {
      pSStack_98 = (System_Int32_array *)0x44d8006;
      (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),uVar16,*(undefined8 *)(lVar1 + 0x28));
    }
    if (pSVar8 != (System_Int32_array *)0x0) {
      pSStack_98 = (System_Int32_array *)0x44d8019;
      (*(code *)pSVar8->max_length)
                (*(intptr_t *)((long)pSVar8->m_Items + 0x20),uVar16,*(intptr_t *)((long)pSVar8->m_Items + 8));
    }
    pSStack_98 = (System_Int32_array *)0x44d8028;
    pSVar7 = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_Dictionary_byte_object);
    pSStack_98 = (System_Int32_array *)0x44d8042;
    System_Action_object____ctor();
    pSStack_98 = (System_Int32_array *)0x44d8051;
    pSVar5 = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
    method_00 = (MethodInfo *)0x0;
    pSStack_98 = (System_Int32_array *)0x44d806b;
    System_Action___ctor();
    pSStack_98 = (System_Int32_array *)0x44d807e;
    pSVar8 = (System_Int32_array *)Anticheat_ModeratorManager__TrackRequest(5.0,pSVar7,pSVar5,method_02);
    pSStack_98 = (System_Int32_array *)0x44d8090;
    __this_00 = (System_Collections_Generic_Dictionary_byte__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_byte_object);
    pSStack_98 = (System_Int32_array *)0x44d80a5;
    pSVar4 = MethodInfo_Dictionary_2_System_Byte_System_Object;
    pSVar15 = __this_00;
    System_Collections_Generic_Dictionary_byte__object____ctor(__this_00,(MethodInfo_304B1A0 *)MethodInfo_Dictionary_2_System_Byte_System_Object);
    localStatus = (System_Action_string__o *)0x0;
    if (__this_00 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
      pSStack_98 = (System_Int32_array *)0x44d80c6;
      System_Collections_Generic_Dictionary_byte__object___Add
                (__this_00,'\0',(Il2CppObject *)pSVar8,MethodInfo_Void_Add);
      uStack_7c = (uint)pSVar13 & 0xff | 2;
      pSStack_98 = (System_Int32_array *)0x44d80e6;
      pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_7c);
      pSStack_98 = (System_Int32_array *)0x44d80fa;
      System_Collections_Generic_Dictionary_byte__object___Add(__this_00,'\x01',pIVar6,MethodInfo_Void_Add);
      iStack_80 = iStack_84;
      pSStack_98 = (System_Int32_array *)0x44d8110;
      pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_80);
      pSStack_98 = (System_Int32_array *)0x44d8124;
      System_Collections_Generic_Dictionary_byte__object___Add(__this_00,'\x02',pIVar6,MethodInfo_Void_Add);
      pSStack_98 = (System_Int32_array *)0x44d8138;
      System_Collections_Generic_Dictionary_byte__object___Add
                (__this_00,'\x03',(Il2CppObject *)pSVar14,MethodInfo_Void_Add);
      if (pMVar11 == (MethodInfo *)0x0) {
        pMVar11 = (MethodInfo *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      }
      pSStack_98 = (System_Int32_array *)0x44d8162;
      System_Collections_Generic_Dictionary_byte__object___Add
                (__this_00,'\x04',(Il2CppObject *)pMVar11,MethodInfo_Void_Add);
      pMVar11 = extraout_RDX_02;
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        pSStack_98 = (System_Int32_array *)0x44d817a;
        il2cpp_runtime_helper_02337ed0();
        pMVar11 = extraout_RDX_03;
      }
      pSStack_98 = (System_Int32_array *)0x44d8187;
      Anticheat_ModeratorManager__RaiseModEvent(0xb4,__this_00,pMVar11);
      return;
    }
  }
  pSStack_98 = (System_Int32_array *)0x44d8252;
  il2cpp_runtime_helper_022b2c90();
  pSStack_c0 = localStatus;
  pSStack_b8 = pSVar14;
  pSStack_b0 = __this;
  pMStack_a8 = pMVar11;
  uStack_a0 = uVar18;
  pSStack_98 = pSVar8;
  if (g_data_057aeb66 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_Dictionary_byte_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Byte_System_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_byte_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RoomUnban_b__0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RoomUnban_b__1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass92_0);
    il2cpp_runtime_helper_023445d0(&"Sending request...");
    g_data_057aeb66 = '\x01';
  }
  pSVar9 = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass92_0);
  pSVar7 = pSVar9;
  Anticheat_ModeratorManager___c__DisplayClass92_0___ctor
            ((Anticheat_ModeratorManager___c__DisplayClass92_0_o *)pSVar9,(MethodInfo *)0x0);
  if (pSVar9 == (System_Action_Dictionary_byte__object___o *)0x0) goto label_044d867f;
  (pSVar9->fields).method_ptr = (intptr_t)pSVar4;
  il2cpp_runtime_helper_022b4080(&pSVar9->fields,pSVar4);
  pSVar14 = (System_Action_string__o *)(pSVar9->fields).method_ptr;
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057aeb5b == '\0') goto label_044d84a5;
label_044d836a:
    uVar16 = "Sending request...";
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto label_044d837b;
label_044d84c9:
    il2cpp_runtime_helper_02337ed0();
    lVar1 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
  }
  else {
    if (g_data_057aeb5b != '\0') goto label_044d836a;
label_044d84a5:
    uVar16 = "Sending request...";
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb5b = '\x01';
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto label_044d84c9;
label_044d837b:
    lVar1 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
  }
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),uVar16,*(undefined8 *)(lVar1 + 0x28));
  }
  if (pSVar14 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar14->fields).invoke_impl)((pSVar14->fields).method_code,uVar16,(pSVar14->fields).method);
  }
  pSVar7 = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_Dictionary_byte_object);
  System_Action_object____ctor();
  pSVar5 = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
  method_00 = (MethodInfo *)0x0;
  System_Action___ctor();
  pSVar10 = Anticheat_ModeratorManager__TrackRequest(5.0,pSVar7,pSVar5,method_03);
  if (pSVar15 == (System_Collections_Generic_Dictionary_byte__object__o *)0x0) goto label_044d867f;
  iVar17 = (pSVar15->fields)._freeCount;
  pIStack_c8 = extraout_RDX_04;
  if ((char)(pSVar15->fields)._version == '\0') {
    if (0 < iVar17) goto label_044d84f3;
    value = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)(pSVar15->fields)._buckets;
    iVar17 = 1;
  }
  else if (iVar17 < 1) {
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057ae4d9 == '\0') goto label_044d864d;
label_044d8457:
      iVar17 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
    }
    else {
      if (g_data_057ae4d9 != '\0') goto label_044d8457;
label_044d864d:
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      g_data_057ae4d9 = '\x01';
      iVar17 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
    }
    if (iVar17 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar19 = *(char *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 8) == '\0';
    method_00 = (MethodInfo *)(ulong)bVar19;
    iVar17 = (uint)bVar19 * 2 + 2;
    value = (pSVar15->fields)._entries;
  }
  else {
label_044d84f3:
    iStack_cc = iVar17;
    value = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
            il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_cc);
    iVar17 = 0;
  }
  pSVar9 = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_byte_object);
  pSVar7 = pSVar9;
  System_Collections_Generic_Dictionary_byte__object____ctor
            ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar9,
             (MethodInfo_304B1A0 *)MethodInfo_Dictionary_2_System_Byte_System_Object);
  if (pSVar9 != (System_Action_Dictionary_byte__object___o *)0x0) {
    System_Collections_Generic_Dictionary_byte__object___Add
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar9,'\0',(Il2CppObject *)pSVar10,
               MethodInfo_Void_Add);
    iStack_d0 = 5 - (uint)((char)(pSVar15->fields)._version == '\0');
    pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_d0);
    System_Collections_Generic_Dictionary_byte__object___Add
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar9,'\x01',pIVar6,MethodInfo_Void_Add);
    iStack_d4 = iVar17;
    pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_d4);
    System_Collections_Generic_Dictionary_byte__object___Add
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar9,'\x02',pIVar6,MethodInfo_Void_Add);
    System_Collections_Generic_Dictionary_byte__object___Add
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar9,'\x03',&value->obj,MethodInfo_Void_Add
              );
    pIVar6 = pIStack_c8;
    if (pIStack_c8 == (Il2CppObject *)0x0) {
      pIVar6 = (Il2CppObject *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    System_Collections_Generic_Dictionary_byte__object___Add
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar9,'\x04',pIVar6,MethodInfo_Void_Add);
    pMVar11 = extraout_RDX_05;
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pMVar11 = extraout_RDX_06;
    }
    Anticheat_ModeratorManager__RaiseModEvent
              (0xb4,(System_Collections_Generic_Dictionary_byte__object__o *)pSVar9,pMVar11);
    return;
  }
label_044d867f:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeb67 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb67 = '\x01';
  }
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Anticheat_ModeratorManager__RequestRoomBanList_43d86e0(0,0x32,(System_Action_string__o *)pSVar7,method_00);
  return;
}


// Anticheat.ModeratorManager$$RoomBanPlayerEntry
// il2cpp: void Anticheat_ModeratorManager__RoomBanPlayerEntry (Anticheat_PlayerEntry_o* player, bool ipBan, System_Action_string__o* localStatus, System_String_o* reason, const MethodInfo* method);
// 0x44d7cd0

void Anticheat_ModeratorManager__RoomBanPlayerEntry
               (Anticheat_PlayerEntry_o *player,bool_conflict ipBan,System_Action_string__o *localStatus,
               System_String_o *reason,MethodInfo *method)

{
  System_Int32_array *pSVar1;
  long lVar2;
  bool_conflict bVar3;
  System_Collections_Generic_Dictionary_byte__object__o *__this;
  System_Action_Dictionary_byte__object___o *pSVar4;
  System_Action_o *pSVar5;
  System_Collections_Generic_Dictionary_byte__object__o *__this_00;
  Il2CppObject *pIVar6;
  System_Action_Dictionary_byte__object___o *pSVar7;
  System_String_o *value;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *value_00;
  MethodInfo *pMVar8;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  Il2CppObject *extraout_RDX_01;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  undefined8 unaff_RBX;
  System_Collections_Generic_Dictionary_byte__object__Fields *pSVar9;
  System_Action_string__o *pSVar10;
  System_Collections_Generic_Dictionary_byte__object__o *pSVar11;
  undefined8 uVar12;
  int iVar13;
  bool bVar14;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  Il2CppObject *pIStack_80;
  undefined8 uStack_78;
  Anticheat_PlayerEntry_o *pAStack_70;
  System_Collections_Generic_Dictionary_byte__object__o *pSStack_68;
  System_String_o *pSStack_60;
  ulong uStack_58;
  System_Action_string__o *pSStack_50;
  int iStack_3c;
  int iStack_38;
  uint uStack_34;
  
  pMVar8 = (MethodInfo *)reason;
  if (g_data_057aeb65 == '\0') {
    pSStack_50 = (System_Action_string__o *)0x44d7d03;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_Dictionary_byte_object);
    pSStack_50 = (System_Action_string__o *)0x44d7d0f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    pSStack_50 = (System_Action_string__o *)0x44d7d1b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pSStack_50 = (System_Action_string__o *)0x44d7d27;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Byte_System_Object);
    pSStack_50 = (System_Action_string__o *)0x44d7d33;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_byte_object);
    pSStack_50 = (System_Action_string__o *)0x44d7d3f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    pSStack_50 = (System_Action_string__o *)0x44d7d4b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RoomBanPlayerEntry_b__0);
    pSStack_50 = (System_Action_string__o *)0x44d7d57;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RoomBanPlayerEntry_b__1);
    pSStack_50 = (System_Action_string__o *)0x44d7d63;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass91_0);
    pSStack_50 = (System_Action_string__o *)0x44d7d6f;
    il2cpp_runtime_helper_023445d0(&"Player has no session ID to ban.");
    pSStack_50 = (System_Action_string__o *)0x44d7d7b;
    il2cpp_runtime_helper_023445d0(&"Invalid player entry.");
    pSStack_50 = (System_Action_string__o *)0x44d7d87;
    il2cpp_runtime_helper_023445d0(&"Sending request...");
    pSStack_50 = (System_Action_string__o *)0x44d7d93;
    il2cpp_runtime_helper_023445d0(&"Player has no IP address to ban.");
    g_data_057aeb65 = '\x01';
  }
  pSStack_50 = (System_Action_string__o *)0x44d7da9;
  __this = (System_Collections_Generic_Dictionary_byte__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass91_0);
  pSVar10 = (System_Action_string__o *)0x0;
  pSStack_50 = (System_Action_string__o *)0x44d7db6;
  pSVar11 = __this;
  Anticheat_ModeratorManager___c__DisplayClass91_0___ctor
            ((Anticheat_ModeratorManager___c__DisplayClass91_0_o *)__this,(MethodInfo *)0x0);
  if (__this != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
    pSVar9 = &__this->fields;
    (__this->fields)._buckets = (System_Int32_array *)localStatus;
    pSStack_50 = (System_Action_string__o *)0x44d7dd5;
    il2cpp_runtime_helper_022b4080(pSVar9);
    if (player == (Anticheat_PlayerEntry_o *)0x0) {
      pSVar1 = pSVar9->_buckets;
      uVar12 = "Invalid player entry.";
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        pSStack_50 = (System_Action_string__o *)0x44d7e42;
        il2cpp_runtime_helper_02337ed0();
        uVar12 = "Invalid player entry.";
      }
joined_r0x044d81fe:
      if (g_data_057aeb5b == '\0') {
        pSStack_50 = (System_Action_string__o *)0x44d7e61;
        il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
        g_data_057aeb5b = '\x01';
      }
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        pSStack_50 = (System_Action_string__o *)0x44d7f0d;
        il2cpp_runtime_helper_02337ed0();
        lVar2 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
      }
      else {
        lVar2 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
      }
      if (lVar2 != 0) {
        pSStack_50 = (System_Action_string__o *)0x44d7e96;
        (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),uVar12,*(undefined8 *)(lVar2 + 0x28));
      }
      if (pSVar1 == (System_Int32_array *)0x0) {
        return;
      }
      (*(code *)pSVar1->max_length)
                (*(intptr_t *)((long)pSVar1->m_Items + 0x20),uVar12,*(intptr_t *)((long)pSVar1->m_Items + 8));
      return;
    }
    if ((char)ipBan == '\0') {
      pSStack_50 = (System_Action_string__o *)0x44d7eca;
      bVar3 = System_String__IsNullOrEmpty((player->fields).SessionId,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        pSVar1 = pSVar9->_buckets;
        uVar12 = "Player has no session ID to ban.";
        if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
          pSStack_50 = (System_Action_string__o *)0x44d81ed;
          il2cpp_runtime_helper_02337ed0();
          uVar12 = "Player has no session ID to ban.";
        }
        goto joined_r0x044d81fe;
      }
      iStack_3c = 1;
      player = (Anticheat_PlayerEntry_o *)(player->fields).SessionId;
      pSVar1 = pSVar9->_buckets;
      iVar13 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
    }
    else {
      pSStack_50 = (System_Action_string__o *)0x44d7def;
      bVar3 = System_String__IsNullOrEmpty((player->fields).IPAddress,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        pSVar1 = pSVar9->_buckets;
        uVar12 = "Player has no IP address to ban.";
        if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
          pSStack_50 = (System_Action_string__o *)0x44d7e12;
          il2cpp_runtime_helper_02337ed0();
          uVar12 = "Player has no IP address to ban.";
        }
        goto joined_r0x044d81fe;
      }
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        pSStack_50 = (System_Action_string__o *)0x44d820e;
        il2cpp_runtime_helper_02337ed0();
        if (g_data_057ae4d9 == '\0') goto label_044d821b;
label_044d7f4e:
        iVar13 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
      }
      else {
        if (g_data_057ae4d9 != '\0') goto label_044d7f4e;
label_044d821b:
        pSStack_50 = (System_Action_string__o *)0x44d8227;
        il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
        g_data_057ae4d9 = '\x01';
        iVar13 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
      }
      if (iVar13 == 0) {
        pSStack_50 = (System_Action_string__o *)0x44d8244;
        il2cpp_runtime_helper_02337ed0();
      }
      iStack_3c = (uint)(*(char *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 8) == '\0') * 2 + 2;
      player = (Anticheat_PlayerEntry_o *)(player->fields).IPAddress;
      pSVar1 = pSVar9->_buckets;
      iVar13 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
    }
    if (iVar13 == 0) {
      pSStack_50 = (System_Action_string__o *)0x44d7fba;
      il2cpp_runtime_helper_02337ed0();
    }
    uVar12 = "Sending request...";
    if (g_data_057aeb5b == '\0') {
      pSStack_50 = (System_Action_string__o *)0x44d81a2;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      g_data_057aeb5b = '\x01';
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto label_044d81c0;
label_044d7fe8:
      lVar2 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
    }
    else {
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto label_044d7fe8;
label_044d81c0:
      pSStack_50 = (System_Action_string__o *)0x44d81c5;
      il2cpp_runtime_helper_02337ed0();
      lVar2 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
    }
    if (lVar2 != 0) {
      pSStack_50 = (System_Action_string__o *)0x44d8006;
      (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),uVar12,*(undefined8 *)(lVar2 + 0x28));
    }
    if (pSVar1 != (System_Int32_array *)0x0) {
      pSStack_50 = (System_Action_string__o *)0x44d8019;
      (*(code *)pSVar1->max_length)
                (*(intptr_t *)((long)pSVar1->m_Items + 0x20),uVar12,*(intptr_t *)((long)pSVar1->m_Items + 8));
    }
    pSStack_50 = (System_Action_string__o *)0x44d8028;
    pSVar4 = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_Dictionary_byte_object);
    pSStack_50 = (System_Action_string__o *)0x44d8042;
    System_Action_object____ctor();
    pSStack_50 = (System_Action_string__o *)0x44d8051;
    pSVar5 = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
    pMVar8 = (MethodInfo *)0x0;
    pSStack_50 = (System_Action_string__o *)0x44d806b;
    System_Action___ctor();
    pSStack_50 = (System_Action_string__o *)0x44d807e;
    localStatus = (System_Action_string__o *)
                  Anticheat_ModeratorManager__TrackRequest(5.0,pSVar4,pSVar5,method_00);
    pSStack_50 = (System_Action_string__o *)0x44d8090;
    __this_00 = (System_Collections_Generic_Dictionary_byte__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_byte_object);
    pSStack_50 = (System_Action_string__o *)0x44d80a5;
    pSVar10 = MethodInfo_Dictionary_2_System_Byte_System_Object;
    pSVar11 = __this_00;
    System_Collections_Generic_Dictionary_byte__object____ctor(__this_00,(MethodInfo_304B1A0 *)MethodInfo_Dictionary_2_System_Byte_System_Object);
    unaff_RBX = 0;
    if (__this_00 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
      pSStack_50 = (System_Action_string__o *)0x44d80c6;
      System_Collections_Generic_Dictionary_byte__object___Add
                (__this_00,'\0',(Il2CppObject *)localStatus,MethodInfo_Void_Add);
      uStack_34 = ipBan & 0xffU | 2;
      pSStack_50 = (System_Action_string__o *)0x44d80e6;
      pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_34);
      pSStack_50 = (System_Action_string__o *)0x44d80fa;
      System_Collections_Generic_Dictionary_byte__object___Add(__this_00,'\x01',pIVar6,MethodInfo_Void_Add);
      iStack_38 = iStack_3c;
      pSStack_50 = (System_Action_string__o *)0x44d8110;
      pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_38);
      pSStack_50 = (System_Action_string__o *)0x44d8124;
      System_Collections_Generic_Dictionary_byte__object___Add(__this_00,'\x02',pIVar6,MethodInfo_Void_Add);
      pSStack_50 = (System_Action_string__o *)0x44d8138;
      System_Collections_Generic_Dictionary_byte__object___Add
                (__this_00,'\x03',(Il2CppObject *)player,MethodInfo_Void_Add);
      if (reason == (System_String_o *)0x0) {
        reason = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      }
      pSStack_50 = (System_Action_string__o *)0x44d8162;
      System_Collections_Generic_Dictionary_byte__object___Add
                (__this_00,'\x04',(Il2CppObject *)reason,MethodInfo_Void_Add);
      pMVar8 = extraout_RDX;
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        pSStack_50 = (System_Action_string__o *)0x44d817a;
        il2cpp_runtime_helper_02337ed0();
        pMVar8 = extraout_RDX_00;
      }
      pSStack_50 = (System_Action_string__o *)0x44d8187;
      Anticheat_ModeratorManager__RaiseModEvent(0xb4,__this_00,pMVar8);
      return;
    }
  }
  pSStack_50 = (System_Action_string__o *)0x44d8252;
  il2cpp_runtime_helper_022b2c90();
  uStack_78 = unaff_RBX;
  pAStack_70 = player;
  pSStack_68 = __this;
  pSStack_60 = reason;
  uStack_58 = (ulong)(uint)ipBan;
  pSStack_50 = localStatus;
  if (g_data_057aeb66 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_Dictionary_byte_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Byte_System_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_byte_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RoomUnban_b__0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RoomUnban_b__1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass92_0);
    il2cpp_runtime_helper_023445d0(&"Sending request...");
    g_data_057aeb66 = '\x01';
  }
  pSVar7 = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass92_0);
  pSVar4 = pSVar7;
  Anticheat_ModeratorManager___c__DisplayClass92_0___ctor
            ((Anticheat_ModeratorManager___c__DisplayClass92_0_o *)pSVar7,(MethodInfo *)0x0);
  if (pSVar7 == (System_Action_Dictionary_byte__object___o *)0x0) goto label_044d867f;
  (pSVar7->fields).method_ptr = (intptr_t)pSVar10;
  il2cpp_runtime_helper_022b4080(&pSVar7->fields,pSVar10);
  pSVar10 = (System_Action_string__o *)(pSVar7->fields).method_ptr;
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057aeb5b == '\0') goto label_044d84a5;
label_044d836a:
    uVar12 = "Sending request...";
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto label_044d837b;
label_044d84c9:
    il2cpp_runtime_helper_02337ed0();
    lVar2 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
  }
  else {
    if (g_data_057aeb5b != '\0') goto label_044d836a;
label_044d84a5:
    uVar12 = "Sending request...";
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb5b = '\x01';
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto label_044d84c9;
label_044d837b:
    lVar2 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
  }
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),uVar12,*(undefined8 *)(lVar2 + 0x28));
  }
  if (pSVar10 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar10->fields).invoke_impl)((pSVar10->fields).method_code,uVar12,(pSVar10->fields).method);
  }
  pSVar4 = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_Dictionary_byte_object);
  System_Action_object____ctor();
  pSVar5 = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
  pMVar8 = (MethodInfo *)0x0;
  System_Action___ctor();
  value = Anticheat_ModeratorManager__TrackRequest(5.0,pSVar4,pSVar5,method_01);
  if (pSVar11 == (System_Collections_Generic_Dictionary_byte__object__o *)0x0) goto label_044d867f;
  iVar13 = (pSVar11->fields)._freeCount;
  pIStack_80 = extraout_RDX_01;
  if ((char)(pSVar11->fields)._version == '\0') {
    if (0 < iVar13) goto label_044d84f3;
    value_00 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)(pSVar11->fields)._buckets;
    iVar13 = 1;
  }
  else if (iVar13 < 1) {
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057ae4d9 == '\0') goto label_044d864d;
label_044d8457:
      iVar13 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
    }
    else {
      if (g_data_057ae4d9 != '\0') goto label_044d8457;
label_044d864d:
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      g_data_057ae4d9 = '\x01';
      iVar13 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
    }
    if (iVar13 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar14 = *(char *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 8) == '\0';
    pMVar8 = (MethodInfo *)(ulong)bVar14;
    iVar13 = (uint)bVar14 * 2 + 2;
    value_00 = (pSVar11->fields)._entries;
  }
  else {
label_044d84f3:
    iStack_84 = iVar13;
    value_00 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
               il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_84);
    iVar13 = 0;
  }
  pSVar7 = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_byte_object);
  pSVar4 = pSVar7;
  System_Collections_Generic_Dictionary_byte__object____ctor
            ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar7,
             (MethodInfo_304B1A0 *)MethodInfo_Dictionary_2_System_Byte_System_Object);
  if (pSVar7 != (System_Action_Dictionary_byte__object___o *)0x0) {
    System_Collections_Generic_Dictionary_byte__object___Add
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar7,'\0',(Il2CppObject *)value,
               MethodInfo_Void_Add);
    iStack_88 = 5 - (uint)((char)(pSVar11->fields)._version == '\0');
    pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_88);
    System_Collections_Generic_Dictionary_byte__object___Add
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar7,'\x01',pIVar6,MethodInfo_Void_Add);
    iStack_8c = iVar13;
    pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_8c);
    System_Collections_Generic_Dictionary_byte__object___Add
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar7,'\x02',pIVar6,MethodInfo_Void_Add);
    System_Collections_Generic_Dictionary_byte__object___Add
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar7,'\x03',&value_00->obj,
               MethodInfo_Void_Add);
    pIVar6 = pIStack_80;
    if (pIStack_80 == (Il2CppObject *)0x0) {
      pIVar6 = (Il2CppObject *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    System_Collections_Generic_Dictionary_byte__object___Add
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar7,'\x04',pIVar6,MethodInfo_Void_Add);
    pMVar8 = extraout_RDX_02;
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pMVar8 = extraout_RDX_03;
    }
    Anticheat_ModeratorManager__RaiseModEvent
              (0xb4,(System_Collections_Generic_Dictionary_byte__object__o *)pSVar7,pMVar8);
    return;
  }
label_044d867f:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeb67 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb67 = '\x01';
  }
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Anticheat_ModeratorManager__RequestRoomBanList_43d86e0(0,0x32,(System_Action_string__o *)pSVar4,pMVar8);
  return;
}


// Anticheat.ModeratorManager$$RoomUnban
// il2cpp: void Anticheat_ModeratorManager__RoomUnban (Anticheat_RoomBanEntry_o* banEntry, System_Action_string__o* localStatus, System_String_o* reason, const MethodInfo* method);
// 0x44d8260

void Anticheat_ModeratorManager__RoomUnban
               (Anticheat_RoomBanEntry_o *banEntry,System_Action_string__o *localStatus,
               System_String_o *reason,MethodInfo *method)

{
  System_Action_string__o *pSVar1;
  long lVar2;
  System_Action_Dictionary_byte__object___o *pSVar3;
  System_Action_Dictionary_byte__object___o *onResponse;
  System_Action_o *onTimeout;
  System_String_o *pSVar4;
  System_String_o *value;
  Il2CppObject *pIVar5;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_01;
  undefined8 uVar6;
  int iVar7;
  bool bVar8;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  System_String_o *pSStack_38;
  
  if (g_data_057aeb66 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_Dictionary_byte_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Byte_System_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_byte_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RoomUnban_b__0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RoomUnban_b__1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass92_0);
    il2cpp_runtime_helper_023445d0(&"Sending request...");
    g_data_057aeb66 = '\x01';
  }
  pSVar3 = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass92_0);
  onResponse = pSVar3;
  Anticheat_ModeratorManager___c__DisplayClass92_0___ctor
            ((Anticheat_ModeratorManager___c__DisplayClass92_0_o *)pSVar3,(MethodInfo *)0x0);
  if (pSVar3 == (System_Action_Dictionary_byte__object___o *)0x0) goto label_044d867f;
  (pSVar3->fields).method_ptr = (intptr_t)localStatus;
  il2cpp_runtime_helper_022b4080(&pSVar3->fields,localStatus);
  pSVar1 = (System_Action_string__o *)(pSVar3->fields).method_ptr;
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057aeb5b != '\0') goto label_044d836a;
label_044d84a5:
    uVar6 = "Sending request...";
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb5b = '\x01';
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto label_044d837b;
label_044d84c9:
    il2cpp_runtime_helper_02337ed0();
    lVar2 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
  }
  else {
    if (g_data_057aeb5b == '\0') goto label_044d84a5;
label_044d836a:
    uVar6 = "Sending request...";
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto label_044d84c9;
label_044d837b:
    lVar2 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
  }
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),uVar6,*(undefined8 *)(lVar2 + 0x28));
  }
  if (pSVar1 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,uVar6,(pSVar1->fields).method);
  }
  onResponse = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_Dictionary_byte_object);
  System_Action_object____ctor();
  onTimeout = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
  method = (MethodInfo *)0x0;
  System_Action___ctor();
  pSVar4 = Anticheat_ModeratorManager__TrackRequest(5.0,onResponse,onTimeout,method_00);
  if (banEntry == (Anticheat_RoomBanEntry_o *)0x0) goto label_044d867f;
  iVar7 = (banEntry->fields).ActorNumber;
  pSStack_38 = reason;
  if ((char)(banEntry->fields).IsIPBan == '\0') {
    if (0 < iVar7) goto label_044d84f3;
    value = (banEntry->fields).SessionId;
    iVar7 = 1;
  }
  else if (iVar7 < 1) {
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057ae4d9 != '\0') goto label_044d8457;
label_044d864d:
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      g_data_057ae4d9 = '\x01';
      iVar7 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
    }
    else {
      if (g_data_057ae4d9 == '\0') goto label_044d864d;
label_044d8457:
      iVar7 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
    }
    if (iVar7 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar8 = *(char *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 8) == '\0';
    method = (MethodInfo *)(ulong)bVar8;
    iVar7 = (uint)bVar8 * 2 + 2;
    value = (banEntry->fields).IPAddress;
  }
  else {
label_044d84f3:
    iStack_3c = iVar7;
    value = (System_String_o *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_3c);
    iVar7 = 0;
  }
  pSVar3 = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_byte_object);
  onResponse = pSVar3;
  System_Collections_Generic_Dictionary_byte__object____ctor
            ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar3,MethodInfo_Dictionary_2_System_Byte_System_Object);
  if (pSVar3 != (System_Action_Dictionary_byte__object___o *)0x0) {
    System_Collections_Generic_Dictionary_byte__object___Add
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar3,'\0',(Il2CppObject *)pSVar4,
               MethodInfo_Void_Add);
    iStack_40 = 5 - (uint)((char)(banEntry->fields).IsIPBan == '\0');
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_40);
    System_Collections_Generic_Dictionary_byte__object___Add
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar3,'\x01',pIVar5,MethodInfo_Void_Add);
    iStack_44 = iVar7;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_44);
    System_Collections_Generic_Dictionary_byte__object___Add
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar3,'\x02',pIVar5,MethodInfo_Void_Add);
    System_Collections_Generic_Dictionary_byte__object___Add
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar3,'\x03',(Il2CppObject *)value,
               MethodInfo_Void_Add);
    pSVar4 = pSStack_38;
    if (pSStack_38 == (System_String_o *)0x0) {
      pSVar4 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    System_Collections_Generic_Dictionary_byte__object___Add
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar3,'\x04',(Il2CppObject *)pSVar4,
               MethodInfo_Void_Add);
    method_01 = extraout_RDX;
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      method_01 = extraout_RDX_00;
    }
    Anticheat_ModeratorManager__RaiseModEvent
              (0xb4,(System_Collections_Generic_Dictionary_byte__object__o *)pSVar3,method_01);
    return;
  }
label_044d867f:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeb67 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb67 = '\x01';
  }
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Anticheat_ModeratorManager__RequestRoomBanList_43d86e0(0,0x32,(System_Action_string__o *)onResponse,method);
  return;
}


// Anticheat.ModeratorManager$$RequestRoomBanList
// il2cpp: void Anticheat_ModeratorManager__RequestRoomBanList (System_Action_string__o* localStatus, const MethodInfo* method);
// 0x44d8690

void Anticheat_ModeratorManager__RequestRoomBanList(System_Action_string__o *localStatus,MethodInfo *method)

{
  MethodInfo *in_RCX;
  
  if (g_data_057aeb67 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb67 = '\x01';
  }
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Anticheat_ModeratorManager__RequestRoomBanList_43d86e0(0,0x32,localStatus,in_RCX);
  return;
}


// Anticheat.ModeratorManager$$RequestRoomBanList
// il2cpp: void Anticheat_ModeratorManager__RequestRoomBanList (int32_t startIndex, int32_t amount, System_Action_string__o* localStatus, const MethodInfo* method);
// 0x44d86e0

void Anticheat_ModeratorManager__RequestRoomBanList_43d86e0
               (int32_t startIndex,int32_t amount,System_Action_string__o *localStatus,MethodInfo *method)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar4;
  undefined1 *puVar5;
  uint uVar6;
  bool_conflict bVar7;
  System_Collections_Generic_Dictionary_byte__object__o *pSVar8;
  System_Action_o *pSVar9;
  Il2CppObject *pIVar10;
  System_Collections_Generic_Dictionary_byte__object__c *__this;
  System_Collections_Generic_Dictionary_byte__object__c *pSVar11;
  System_Collections_Generic_Dictionary_byte__object__c *pSVar12;
  uint *puVar13;
  System_Collections_Generic_Dictionary_byte__object__c *pSVar14;
  long lVar15;
  System_Action_string__o *pSVar16;
  System_Collections_Generic_Dictionary_byte__object__c *pSVar17;
  System_String_o *pSVar18;
  System_Action_Dictionary_byte__object___o *pSVar19;
  System_Int32_array *pSVar20;
  System_Collections_Generic_Dictionary_byte__object__o *__this_00;
  Il2CppObject *pIVar21;
  Il2CppClass *pIVar22;
  Il2CppClass *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  System_String_o *extraout_RDX;
  MethodInfo *method_03;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  System_Int32_array *extraout_RDX_02;
  MethodInfo *method_04;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *method_05;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  MethodInfo *pMVar23;
  System_Collections_Generic_Dictionary_byte__object__Fields *pSVar24;
  int32_t iVar25;
  System_Collections_Generic_Dictionary_byte__object__c *pSVar26;
  System_Int32_array *pSVar27;
  System_Int32_array *pSVar28;
  System_Action_string__o *pSVar29;
  System_Collections_Generic_Dictionary_byte__object__c *unaff_R12;
  System_Collections_Generic_Dictionary_byte__object__c *pSVar30;
  undefined8 uVar31;
  System_Collections_Generic_Dictionary_byte__object__c *unaff_R13;
  System_Collections_Generic_Dictionary_byte__object__o *pSVar32;
  Il2CppClass *pIVar33;
  byte bVar34;
  undefined8 *puVar35;
  ulong uVar36;
  undefined1 auVar37 [16];
  undefined8 uStack_168;
  System_String_o *pSStack_160;
  System_Action_string__o *pSStack_158;
  System_Collections_Generic_Dictionary_byte__object__o *pSStack_150;
  Il2CppClass *pIStack_148;
  ulong uStack_140;
  System_Int32_array *pSStack_138;
  int iStack_124;
  int iStack_120;
  uint uStack_11c;
  System_String_o *pSStack_118;
  Il2CppClass *pIStack_110;
  System_Collections_Generic_Dictionary_byte__object__c *pSStack_108;
  Il2CppClass *pIStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  uint uStack_d4;
  System_Collections_Generic_Dictionary_byte__object__c *pSStack_d0;
  System_Collections_Generic_Dictionary_byte__object__c *pSStack_c8;
  System_Collections_Generic_Dictionary_byte__object__c *pSStack_c0;
  System_Collections_Generic_Dictionary_byte__object__o *pSStack_b8;
  undefined8 *puStack_b0;
  System_Collections_Generic_Dictionary_byte__object__c *pSStack_a8;
  uint uStack_9c;
  System_Collections_Generic_Dictionary_byte__object__c *pSStack_98;
  System_Collections_Generic_Dictionary_byte__object__c *pSStack_90;
  System_Collections_Generic_Dictionary_byte__object__c *pSStack_88;
  System_Collections_Generic_Dictionary_byte__object__o *pSStack_80;
  System_Collections_Generic_Dictionary_byte__object__c *pSStack_78;
  System_Collections_Generic_Dictionary_byte__object__c *pSStack_70;
  System_Collections_Generic_Dictionary_byte__object__c *pSStack_68;
  System_Collections_Generic_Dictionary_byte__object__c *pSStack_60;
  System_Collections_Generic_Dictionary_byte__object__c *pSStack_58;
  ulong uStack_50;
  undefined8 *puStack_48;
  System_Action_string__o *pSStack_40;
  int32_t local_38;
  int32_t local_34;
  
  puVar35 = (undefined8 *)(ulong)(uint)startIndex;
  if (g_data_057aeb68 == '\0') {
    pSStack_40 = (System_Action_string__o *)0x44d8709;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_Dictionary_byte_object);
    pSStack_40 = (System_Action_string__o *)0x44d8715;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    pSStack_40 = (System_Action_string__o *)0x44d8721;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pSStack_40 = (System_Action_string__o *)0x44d872d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Byte_System_Object);
    pSStack_40 = (System_Action_string__o *)0x44d8739;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_byte_object);
    pSStack_40 = (System_Action_string__o *)0x44d8745;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    pSStack_40 = (System_Action_string__o *)0x44d8751;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RequestRoomBanList_b__0);
    pSStack_40 = (System_Action_string__o *)0x44d875d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RequestRoomBanList_b__1);
    pSStack_40 = (System_Action_string__o *)0x44d8769;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass94_0);
    pSStack_40 = (System_Action_string__o *)0x44d8775;
    il2cpp_runtime_helper_023445d0(&"Sending request...");
    g_data_057aeb68 = '\x01';
  }
  pSStack_40 = (System_Action_string__o *)0x44d878b;
  pSVar8 = (System_Collections_Generic_Dictionary_byte__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass94_0);
  pSStack_40 = (System_Action_string__o *)0x44d8798;
  pSVar32 = pSVar8;
  Anticheat_ModeratorManager___c__DisplayClass94_0___ctor
            ((Anticheat_ModeratorManager___c__DisplayClass94_0_o *)pSVar8,(MethodInfo *)0x0);
  if (pSVar8 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
    (pSVar8->fields)._buckets = (System_Int32_array *)localStatus;
    pSStack_40 = (System_Action_string__o *)0x44d87b4;
    il2cpp_runtime_helper_022b4080(&pSVar8->fields,localStatus);
    pSVar27 = (pSVar8->fields)._buckets;
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      pSStack_40 = (System_Action_string__o *)0x44d895e;
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057aeb5b == '\0') goto label_044d8975;
label_044d87e7:
      uVar31 = "Sending request...";
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto label_044d87f8;
label_044d8999:
      pSStack_40 = (System_Action_string__o *)0x44d899e;
      il2cpp_runtime_helper_02337ed0();
      lVar3 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
    }
    else {
      if (g_data_057aeb5b != '\0') goto label_044d87e7;
label_044d8975:
      uVar31 = "Sending request...";
      pSStack_40 = (System_Action_string__o *)0x44d8981;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      g_data_057aeb5b = '\x01';
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto label_044d8999;
label_044d87f8:
      lVar3 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
    }
    if (lVar3 != 0) {
      pSStack_40 = (System_Action_string__o *)0x44d8816;
      (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),uVar31,*(undefined8 *)(lVar3 + 0x28));
    }
    if (pSVar27 != (System_Int32_array *)0x0) {
      pSStack_40 = (System_Action_string__o *)0x44d8829;
      (*(code *)pSVar27->max_length)
                (*(intptr_t *)((long)pSVar27->m_Items + 0x20),uVar31,*(intptr_t *)((long)pSVar27->m_Items + 8)
                );
    }
    pSStack_40 = (System_Action_string__o *)0x44d8838;
    unaff_R12 = (System_Collections_Generic_Dictionary_byte__object__c *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_Dictionary_byte_object);
    unaff_R13 = (System_Collections_Generic_Dictionary_byte__object__c *)0x0;
    pSStack_40 = (System_Action_string__o *)0x44d8855;
    System_Action_object____ctor();
    pSStack_40 = (System_Action_string__o *)0x44d8864;
    pSVar9 = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
    method = (MethodInfo *)0x0;
    pSStack_40 = (System_Action_string__o *)0x44d887e;
    System_Action___ctor();
    pSStack_40 = (System_Action_string__o *)0x44d8891;
    localStatus = (System_Action_string__o *)
                  Anticheat_ModeratorManager__TrackRequest
                            (5.0,(System_Action_Dictionary_byte__object___o *)unaff_R12,pSVar9,method_01);
    pSStack_40 = (System_Action_string__o *)0x44d88a3;
    pSVar8 = (System_Collections_Generic_Dictionary_byte__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_byte_object);
    pSStack_40 = (System_Action_string__o *)0x44d88b8;
    pSVar32 = pSVar8;
    System_Collections_Generic_Dictionary_byte__object____ctor(pSVar8,(MethodInfo_304B1A0 *)MethodInfo_Dictionary_2_System_Byte_System_Object);
    if (pSVar8 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
      pSStack_40 = (System_Action_string__o *)0x44d88d9;
      System_Collections_Generic_Dictionary_byte__object___Add
                (pSVar8,'\0',(Il2CppObject *)localStatus,(MethodInfo_304BE20 *)MethodInfo_Void_Add);
      local_34 = 0;
      if (-1 < startIndex) {
        local_34 = startIndex;
      }
      pSStack_40 = (System_Action_string__o *)0x44d88fa;
      pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&local_34);
      pSStack_40 = (System_Action_string__o *)0x44d8913;
      System_Collections_Generic_Dictionary_byte__object___Add
                (pSVar8,'\x01',pIVar10,(MethodInfo_304BE20 *)MethodInfo_Void_Add);
      iVar25 = 1;
      if (0 < amount) {
        iVar25 = amount;
      }
      _local_38 = CONCAT44(local_34,iVar25);
      pSStack_40 = (System_Action_string__o *)0x44d8929;
      pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&local_38);
      pSStack_40 = (System_Action_string__o *)0x44d893d;
      System_Collections_Generic_Dictionary_byte__object___Add
                (pSVar8,'\x02',pIVar10,(MethodInfo_304BE20 *)MethodInfo_Void_Add);
      pSStack_40 = (System_Action_string__o *)0x44d894a;
      Anticheat_ModeratorManager__RaiseModEvent(0xb5,pSVar8,method_02);
      return;
    }
  }
  pSVar14 = (System_Collections_Generic_Dictionary_byte__object__c *)0x0;
  pSStack_40 = (System_Action_string__o *)Anticheat_ModeratorManager__ParseRoomBanEntries;
  il2cpp_runtime_helper_022b2c90();
  pSStack_68 = pSVar14;
  pSStack_60 = unaff_R12;
  pSStack_58 = unaff_R13;
  uStack_50 = (ulong)(uint)amount;
  puStack_48 = puVar35;
  pSStack_40 = localStatus;
  if (g_data_057aeb69 == '\0') {
    pSStack_a8 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d89e6;
    il2cpp_runtime_helper_023445d0(&MethodInfo_RoomBanEntry_Empty_RoomBanEntry);
    pSStack_a8 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d89f2;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    pSStack_a8 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d89fe;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Item);
    pSStack_a8 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d8a0a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pSStack_a8 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d8a16;
    il2cpp_runtime_helper_023445d0(&MethodInfo_RoomBanEntry_ToArray);
    pSStack_a8 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d8a22;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Anticheat_RoomBanEntry);
    pSStack_a8 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d8a2e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_RoomBanEntry);
    pSStack_a8 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d8a3a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_RoomBanEntry);
    g_data_057aeb69 = '\x01';
  }
  lVar3 = MethodInfo_RoomBanEntry_Empty_RoomBanEntry;
  if (pSVar32 == (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
    if (*(long *)(MethodInfo_RoomBanEntry_Empty_RoomBanEntry + 0x38) == 0) {
      pSStack_a8 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d8efb;
      il2cpp_runtime_helper_02300a20(MethodInfo_RoomBanEntry_Empty_RoomBanEntry);
      lVar15 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
      bVar34 = *(byte *)(lVar15 + 0x135);
    }
    else {
      lVar15 = *(long *)(*(long *)(MethodInfo_RoomBanEntry_Empty_RoomBanEntry + 0x38) + 0x10);
      bVar34 = *(byte *)(lVar15 + 0x135);
    }
    if ((bVar34 & 1) == 0) {
      pSStack_a8 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d8f11;
      lVar15 = il2cpp_runtime_helper_023009c0();
      iVar2 = *(int *)(lVar15 + 0xe4);
    }
    else {
      iVar2 = *(int *)(lVar15 + 0xe4);
    }
    if (iVar2 == 0) {
      pSStack_a8 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d8f22;
      il2cpp_runtime_helper_02337ed0();
      lVar3 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
      bVar34 = *(byte *)(lVar3 + 0x135);
    }
    else {
      lVar3 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
      bVar34 = *(byte *)(lVar3 + 0x135);
    }
    if ((bVar34 & 1) == 0) {
      pSStack_a8 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d8eda;
      il2cpp_runtime_helper_023009c0(lVar3);
    }
    return;
  }
  pSStack_a8 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d8a59;
  __this = (System_Collections_Generic_Dictionary_byte__object__c *)il2cpp_runtime_helper_023052d0(TypeInfo_List_RoomBanEntry);
  pSStack_a8 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d8a6e;
  pSVar26 = MethodInfo_List_1_Anticheat_RoomBanEntry;
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this,(MethodInfo_362B8B0 *)MethodInfo_List_1_Anticheat_RoomBanEntry);
  pSVar4 = (pSVar32->fields)._entries;
  if ((int)pSVar4 < 1) {
label_044d8e6f:
    pSVar11 = (System_Collections_Generic_Dictionary_byte__object__c *)0x0;
    if (__this != (System_Collections_Generic_Dictionary_byte__object__c *)0x0) {
      System_Collections_Generic_List_object___ToArray
                ((System_Collections_Generic_List_object__o *)__this,MethodInfo_RoomBanEntry_ToArray);
      return;
    }
label_044d8f35:
    pSStack_a8 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d8f3a;
    il2cpp_runtime_helper_022b2c90();
    __this = pSVar11;
    pSVar17 = unaff_R13;
  }
  else {
    unaff_R12 = (System_Collections_Generic_Dictionary_byte__object__c *)0x0;
    puVar35 = &MethodInfo_Boolean_ContainsKey;
    pSVar30 = unaff_R12;
    pSVar17 = unaff_R13;
    pSVar8 = pSVar32;
    pSStack_88 = __this;
    pSStack_80 = pSVar32;
    if (((ulong)pSVar4 & 0xffffffff) != 0) {
      do {
        puVar35 = &MethodInfo_Boolean_ContainsKey;
        pSVar14 = *(System_Collections_Generic_Dictionary_byte__object__c **)
                   (&(pSVar8->fields)._count + (long)pSVar30 * 2);
        if (pSVar14 != (System_Collections_Generic_Dictionary_byte__object__c *)0x0) {
          pSStack_a8 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d8af0;
          bVar7 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                            ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar14,'\0',
                             MethodInfo_Boolean_ContainsKey);
          if ((char)bVar7 == '\0') {
            pSVar17 = *(System_Collections_Generic_Dictionary_byte__object__c **)g_data_057b9c00->static_fields;
          }
          else {
            pSVar32 = (System_Collections_Generic_Dictionary_byte__object__o *)&MethodInfo_Object_get_Item;
            pSStack_a8 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d8b08;
            pSVar17 = (System_Collections_Generic_Dictionary_byte__object__c *)
                      System_Collections_Generic_Dictionary_byte__object___get_Item
                                ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar14,'\0',
                                 MethodInfo_Object_get_Item);
            if ((pSVar17 != (System_Collections_Generic_Dictionary_byte__object__c *)0x0) &&
               (pSVar11 = __this, pSVar26 = g_data_057b9c00, (pSVar17->_1).image != g_data_057b9c00))
            goto label_044d8f47;
          }
          __this = pSVar17;
          pSVar32 = (System_Collections_Generic_Dictionary_byte__object__o *)&MethodInfo_Object_get_Item;
          pSStack_a8 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d8b5f;
          bVar7 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                            ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar14,'\x01',
                             MethodInfo_Boolean_ContainsKey);
          pSVar17 = __this;
          if ((char)bVar7 == '\0') {
            pSVar11 = *(System_Collections_Generic_Dictionary_byte__object__c **)g_data_057b9c00->static_fields;
          }
          else {
            pSStack_a8 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d8b73;
            pSVar11 = (System_Collections_Generic_Dictionary_byte__object__c *)
                      System_Collections_Generic_Dictionary_byte__object___get_Item
                                ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar14,'\x01',
                                 MethodInfo_Object_get_Item);
            if ((pSVar11 != (System_Collections_Generic_Dictionary_byte__object__c *)0x0) &&
               (pSVar26 = g_data_057b9c00, pSVar12 = pSVar11, (pSVar11->_1).image != g_data_057b9c00))
            goto label_044d8f52;
          }
          pSStack_a8 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d8bc8;
          bVar7 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                            ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar14,'\x02',
                             MethodInfo_Boolean_ContainsKey);
          pSStack_70 = pSVar11;
          if ((char)bVar7 == '\0') {
            pSVar12 = *(System_Collections_Generic_Dictionary_byte__object__c **)g_data_057b9c00->static_fields;
          }
          else {
            pSStack_a8 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d8be1;
            pSVar12 = (System_Collections_Generic_Dictionary_byte__object__c *)
                      System_Collections_Generic_Dictionary_byte__object___get_Item
                                ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar14,'\x02',
                                 MethodInfo_Object_get_Item);
            if ((pSVar12 != (System_Collections_Generic_Dictionary_byte__object__c *)0x0) &&
               (pSVar26 = g_data_057b9c00, (pSVar12->_1).image != g_data_057b9c00)) goto label_044d8f52;
          }
          pSStack_90 = pSVar12;
          pSStack_a8 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d8c40;
          bVar7 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                            ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar14,'\x03',
                             MethodInfo_Boolean_ContainsKey);
          pSVar17 = (System_Collections_Generic_Dictionary_byte__object__c *)0x0;
          uStack_9c = 0;
          unaff_R13 = pSVar17;
          pSVar11 = __this;
          unaff_R12 = pSVar30;
          if ((char)bVar7 != '\0') {
            pSVar26 = (System_Collections_Generic_Dictionary_byte__object__c *)0x3;
            pSStack_a8 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d8c5f;
            pIVar10 = System_Collections_Generic_Dictionary_byte__object___get_Item
                                ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar14,'\x03',
                                 MethodInfo_Object_get_Item);
            if (pIVar10 == (Il2CppObject *)0x0) goto label_044d8f35;
            method = (MethodInfo *)(pIVar10->klass->_1).element_class;
            pSVar26 = g_data_057b9bb8;
            if ((Il2CppClass *)method != (g_data_057b9bb8->_1).element_class) goto label_044d8f3f;
            pSStack_a8 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d8c8c;
            puVar13 = (uint *)il2cpp_runtime_helper_02305440(pIVar10);
            uStack_9c = *puVar13;
          }
          pSStack_a8 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d8ca2;
          bVar7 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                            ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar14,'\x04',
                             MethodInfo_Boolean_ContainsKey);
          if ((char)bVar7 != '\0') {
            pSVar26 = (System_Collections_Generic_Dictionary_byte__object__c *)&g_data_00000004;
            pSStack_a8 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d8cb6;
            pIVar10 = System_Collections_Generic_Dictionary_byte__object___get_Item
                                ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar14,'\x04',
                                 MethodInfo_Object_get_Item);
            if (pIVar10 == (Il2CppObject *)0x0) goto label_044d8f35;
            method = (MethodInfo *)(pIVar10->klass->_1).element_class;
            pSVar26 = g_data_057b9bb8;
            if ((Il2CppClass *)method != (g_data_057b9bb8->_1).element_class) goto label_044d8f3f;
            pSStack_a8 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d8ce3;
            puVar13 = (uint *)il2cpp_runtime_helper_02305440(pIVar10);
            pSVar17 = (System_Collections_Generic_Dictionary_byte__object__c *)(ulong)*puVar13;
          }
          pSStack_a8 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d8cf6;
          bVar7 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                            ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar14,'\x06',
                             MethodInfo_Boolean_ContainsKey);
          pSStack_78 = pSVar30;
          if ((char)bVar7 == '\0') {
            pSVar12 = *(System_Collections_Generic_Dictionary_byte__object__c **)g_data_057b9c00->static_fields;
          }
          else {
            pSStack_a8 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d8d0f;
            pSVar12 = (System_Collections_Generic_Dictionary_byte__object__c *)
                      System_Collections_Generic_Dictionary_byte__object___get_Item
                                ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar14,'\x06',
                                 MethodInfo_Object_get_Item);
            if ((pSVar12 != (System_Collections_Generic_Dictionary_byte__object__c *)0x0) &&
               (pSVar26 = g_data_057b9c00, (pSVar12->_1).image != g_data_057b9c00)) goto label_044d8f52;
          }
          pSStack_98 = pSVar12;
          unaff_R13 = pSStack_70;
          pSVar14 = __this;
          if ((int)pSVar17 == 1) {
            pSVar14 = pSStack_70;
          }
          pSStack_a8 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d8d77;
          uVar6 = System_String__IsNullOrEmpty((System_String_o *)pSVar14,(MethodInfo *)0x0);
          puVar35 = (undefined8 *)(ulong)uVar6;
          pSStack_a8 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d8d89;
          pSVar14 = (System_Collections_Generic_Dictionary_byte__object__c *)il2cpp_runtime_helper_023052d0(TypeInfo_RoomBanEntry);
          pSVar26 = (System_Collections_Generic_Dictionary_byte__object__c *)0x0;
          pSStack_a8 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d8d96;
          Anticheat_RoomBanEntry___ctor((Anticheat_RoomBanEntry_o *)pSVar14,(MethodInfo *)0x0);
          uVar1 = uStack_9c;
          unaff_R12 = pSVar17;
          if (pSVar14 == (System_Collections_Generic_Dictionary_byte__object__c *)0x0) goto label_044d8f35;
          pSVar32 = (System_Collections_Generic_Dictionary_byte__object__o *)(ulong)uStack_9c;
          bVar34 = (byte)uVar6 ^ 1 | 0 < (int)uStack_9c;
          puVar35 = (undefined8 *)(ulong)CONCAT31((int3)(uVar6 >> 8),bVar34);
          (pSVar14->_1).name = (char *)__this;
          pSStack_a8 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d8dc1;
          il2cpp_runtime_helper_022b4080(&(pSVar14->_1).name,__this);
          (pSVar14->_1).namespaze = (char *)unaff_R13;
          pSStack_a8 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d8dd1;
          il2cpp_runtime_helper_022b4080(&(pSVar14->_1).namespaze,unaff_R13);
          (pSVar14->_1).byval_arg.data = pSStack_90;
          pSStack_a8 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d8de3;
          il2cpp_runtime_helper_022b4080(&(pSVar14->_1).byval_arg);
          (pSVar14->_1).byval_arg.bits = uVar1;
          (pSVar14->_1).byval_arg.field_0xc = (int)pSVar17 == 1;
          (pSVar14->_1).this_arg.data = pSStack_98;
          pSStack_a8 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d8e04;
          pSVar26 = pSStack_98;
          il2cpp_runtime_helper_022b4080(&(pSVar14->_1).this_arg);
          pSVar30 = pSStack_78;
          pSVar8 = pSStack_80;
          __this = pSStack_88;
          *(byte *)&(pSVar14->_1).this_arg.bits = bVar34;
          pIVar22 = MethodInfo_Void_Add;
          pSVar11 = pSStack_88;
          if (pSStack_88 == (System_Collections_Generic_Dictionary_byte__object__c *)0x0) goto label_044d8f35;
          puVar5 = (undefined1 *)((long)&(pSStack_88->_1).namespaze + 4);
          *(int *)puVar5 = *(int *)puVar5 + 1;
          pSVar27 = ((System_Collections_Generic_Dictionary_byte__object__Fields *)&(pSStack_88->_1).name)->
                    _buckets;
          puVar35 = &MethodInfo_Boolean_ContainsKey;
          method = (MethodInfo *)pIVar22;
          unaff_R12 = pSStack_78;
          pSVar32 = pSStack_80;
          if (pSVar27 == (System_Int32_array *)0x0) goto label_044d8f35;
          uVar1 = *(uint *)&(pSStack_88->_1).namespaze;
          pSVar26 = pSVar14;
          if (uVar1 < (uint)pSVar27->max_length) {
            *(uint *)&(pSStack_88->_1).namespaze = uVar1 + 1;
            *(System_Collections_Generic_Dictionary_byte__object__c **)
             (pSVar27->m_Items + (long)(int)uVar1 * 2) = pSVar14;
            pSStack_a8 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d8e6a;
            il2cpp_runtime_helper_022b4080(pSVar27->m_Items + (long)(int)uVar1 * 2);
          }
          else {
            pSStack_a8 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d8aba;
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSStack_88,(Il2CppObject *)pSVar14,
                       *(MethodInfo_362C220 **)(*(long *)((long)(pIVar22->_1).byval_arg.data + 0xc0) + 0x70));
          }
        }
        puVar35 = &MethodInfo_Boolean_ContainsKey;
        unaff_R12 = (System_Collections_Generic_Dictionary_byte__object__c *)((long)&(pSVar30->_1).image + 1);
        uVar1 = *(uint *)&(pSVar8->fields)._entries;
        method = (MethodInfo *)(long)(int)uVar1;
        pSVar32 = pSVar8;
        if ((long)method <= (long)unaff_R12) goto label_044d8e6f;
        pSVar30 = unaff_R12;
        pSVar17 = unaff_R13;
      } while (unaff_R12 < (System_Collections_Generic_Dictionary_byte__object__c *)(ulong)uVar1);
    }
  }
  pSStack_a8 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d8f3f;
  pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_022b2ca0();
  pSVar30 = unaff_R12;
label_044d8f3f:
  pSStack_a8 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d8f47;
  il2cpp_runtime_helper_022b2fd0(pIVar10);
  pSVar11 = __this;
label_044d8f47:
  pSStack_a8 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d8f4f;
  il2cpp_runtime_helper_022b2fd0(pSVar17);
  pSVar12 = pSVar11;
label_044d8f52:
  pSStack_a8 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d8f57;
  il2cpp_runtime_helper_022b2fd0();
  pIVar33 = (Il2CppClass *)((ulong)pSVar12 & 0xffffffff);
  pIVar22 = (Il2CppClass *)method;
  pSStack_d0 = pSVar14;
  pSStack_c8 = pSVar30;
  pSStack_c0 = pSVar17;
  pSStack_b8 = pSVar32;
  puStack_b0 = puVar35;
  pSStack_a8 = pSVar11;
  if (g_data_057aeb6a == '\0') {
    uStack_f0 = 0x44d8f8f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_Dictionary_byte_object);
    uStack_f0 = 0x44d8f9b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    uStack_f0 = 0x44d8fa7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    uStack_f0 = 0x44d8fb3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Byte_System_Object);
    uStack_f0 = 0x44d8fbf;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_byte_object);
    uStack_f0 = 0x44d8fcb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    uStack_f0 = 0x44d8fd7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RegionBan_b__0);
    uStack_f0 = 0x44d8fe3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RegionBan_b__1);
    uStack_f0 = 0x44d8fef;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass96_0);
    uStack_f0 = 0x44d8ffb;
    il2cpp_runtime_helper_023445d0(&"Sending request...");
    g_data_057aeb6a = '\x01';
  }
  uStack_f0 = 0x44d9011;
  pSVar16 = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass96_0);
  pSVar27 = (System_Int32_array *)0x0;
  uStack_f0 = 0x44d901e;
  pSVar29 = pSVar16;
  Anticheat_ModeratorManager___c__DisplayClass96_0___ctor
            ((Anticheat_ModeratorManager___c__DisplayClass96_0_o *)pSVar16,(MethodInfo *)0x0);
  pSVar18 = extraout_RDX;
  if (pSVar16 != (System_Action_string__o *)0x0) {
    uStack_e0 = SUB84(pSVar12,0);
    (pSVar16->fields).method_ptr = (intptr_t)extraout_RDX;
    uStack_f0 = 0x44d903f;
    il2cpp_runtime_helper_022b4080(&pSVar16->fields,extraout_RDX);
    lVar3 = (pSVar16->fields).method_ptr;
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      uStack_f0 = 0x44d924a;
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057aeb5b == '\0') goto label_044d9268;
label_044d9071:
      uVar31 = "Sending request...";
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto label_044d9081;
label_044d9292:
      uStack_f0 = 0x44d929d;
      il2cpp_runtime_helper_02337ed0();
      lVar15 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
      pIVar33 = (Il2CppClass *)method;
    }
    else {
      if (g_data_057aeb5b != '\0') goto label_044d9071;
label_044d9268:
      uVar31 = "Sending request...";
      uStack_f0 = 0x44d9274;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      g_data_057aeb5b = '\x01';
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto label_044d9292;
label_044d9081:
      lVar15 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
    }
    if (lVar15 != 0) {
      uStack_f0 = 0x44d909f;
      (**(code **)(lVar15 + 0x18))(*(undefined8 *)(lVar15 + 0x40),uVar31,*(undefined8 *)(lVar15 + 0x28));
    }
    if (lVar3 != 0) {
      uStack_f0 = 0x44d90b2;
      (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),uVar31,*(undefined8 *)(lVar3 + 0x28));
    }
    uStack_f0 = 0x44d90c1;
    pSVar17 = (System_Collections_Generic_Dictionary_byte__object__c *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_Dictionary_byte_object);
    uStack_f0 = 0x44d90db;
    System_Action_object____ctor();
    uStack_f0 = 0x44d90ea;
    pSVar9 = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
    pIVar22 = (Il2CppClass *)0x0;
    uStack_f0 = 0x44d9104;
    System_Action___ctor();
    uStack_f0 = 0x44d9117;
    pSVar18 = Anticheat_ModeratorManager__TrackRequest
                        (10.0,(System_Action_Dictionary_byte__object___o *)pSVar17,pSVar9,method_03);
    uStack_f0 = 0x44d9129;
    pSVar16 = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_byte_object);
    uStack_f0 = 0x44d913e;
    pSVar27 = MethodInfo_Dictionary_2_System_Byte_System_Object;
    pSVar29 = pSVar16;
    System_Collections_Generic_Dictionary_byte__object____ctor
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar16,
               (MethodInfo_304B1A0 *)MethodInfo_Dictionary_2_System_Byte_System_Object);
    if (pSVar16 != (System_Action_string__o *)0x0) {
      uStack_f0 = 0x44d915f;
      System_Collections_Generic_Dictionary_byte__object___Add
                ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar16,'\0',(Il2CppObject *)pSVar18
                 ,(MethodInfo_304BE20 *)MethodInfo_Void_Add);
      uStack_d4 = (uint)pSVar26 & 0xff | 2;
      uStack_f0 = 0x44d917f;
      pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_d4);
      uStack_f0 = 0x44d9193;
      System_Collections_Generic_Dictionary_byte__object___Add
                ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar16,'\x01',pIVar10,
                 (MethodInfo_304BE20 *)MethodInfo_Void_Add);
      uStack_d8 = 0;
      uStack_f0 = 0x44d91a9;
      pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_d8);
      uStack_f0 = 0x44d91bd;
      System_Collections_Generic_Dictionary_byte__object___Add
                ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar16,'\x02',pIVar10,
                 (MethodInfo_304BE20 *)MethodInfo_Void_Add);
      uStack_dc = uStack_e0;
      uStack_f0 = 0x44d91d3;
      pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_dc);
      uStack_f0 = 0x44d91e7;
      System_Collections_Generic_Dictionary_byte__object___Add
                ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar16,'\x03',pIVar10,
                 (MethodInfo_304BE20 *)MethodInfo_Void_Add);
      if ((Il2CppClass *)method == (Il2CppClass *)0x0) {
        method = *(MethodInfo **)g_data_057b9c00->static_fields;
      }
      uStack_f0 = 0x44d9211;
      System_Collections_Generic_Dictionary_byte__object___Add
                ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar16,'\x04',
                 (Il2CppObject *)method,(MethodInfo_304BE20 *)MethodInfo_Void_Add);
      pMVar23 = extraout_RDX_00;
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        uStack_f0 = 0x44d9229;
        il2cpp_runtime_helper_02337ed0();
        pMVar23 = extraout_RDX_01;
      }
      uStack_f0 = 0x44d9236;
      Anticheat_ModeratorManager__RaiseModEvent
                (0xb7,(System_Collections_Generic_Dictionary_byte__object__o *)pSVar16,pMVar23);
      return;
    }
  }
  uStack_f0 = 0x44d92c2;
  il2cpp_runtime_helper_022b2c90();
  uVar36 = (ulong)pSVar27 & 0xffffffff;
  method_00 = pIVar22;
  pSStack_118 = pSVar18;
  pIStack_110 = (Il2CppClass *)method;
  pSStack_108 = pSVar17;
  pIStack_100 = pIVar33;
  uStack_f8 = (ulong)pSVar26 & 0xffffffff;
  uStack_f0 = 0;
  if (g_data_057aeb6b == '\0') {
    pSStack_138 = (System_Int32_array *)0x44d9303;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_Dictionary_byte_object);
    pSStack_138 = (System_Int32_array *)0x44d930f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    pSStack_138 = (System_Int32_array *)0x44d931b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pSStack_138 = (System_Int32_array *)0x44d9327;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Byte_System_Object);
    pSStack_138 = (System_Int32_array *)0x44d9333;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_byte_object);
    pSStack_138 = (System_Int32_array *)0x44d933f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    pSStack_138 = (System_Int32_array *)0x44d934b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RegionBanPlayerEntry_b__0);
    pSStack_138 = (System_Int32_array *)0x44d9357;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RegionBanPlayerEntry_b__1);
    pSStack_138 = (System_Int32_array *)0x44d9363;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass97_0);
    pSStack_138 = (System_Int32_array *)0x44d936f;
    il2cpp_runtime_helper_023445d0(&"Player has no session ID to ban.");
    pSStack_138 = (System_Int32_array *)0x44d937b;
    il2cpp_runtime_helper_023445d0(&"Invalid player entry.");
    pSStack_138 = (System_Int32_array *)0x44d9387;
    il2cpp_runtime_helper_023445d0(&"Sending request...");
    pSStack_138 = (System_Int32_array *)0x44d9393;
    il2cpp_runtime_helper_023445d0(&"Player has no IP address to ban.");
    g_data_057aeb6b = '\x01';
  }
  pSStack_138 = (System_Int32_array *)0x44d93a9;
  pSVar8 = (System_Collections_Generic_Dictionary_byte__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass97_0);
  pSVar28 = (System_Int32_array *)0x0;
  pSStack_138 = (System_Int32_array *)0x44d93b6;
  pSVar32 = pSVar8;
  Anticheat_ModeratorManager___c__DisplayClass97_0___ctor
            ((Anticheat_ModeratorManager___c__DisplayClass97_0_o *)pSVar8,(MethodInfo *)0x0);
  pSVar20 = extraout_RDX_02;
  if (pSVar8 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
    pSVar24 = &pSVar8->fields;
    (pSVar8->fields)._buckets = extraout_RDX_02;
    pSStack_138 = (System_Int32_array *)0x44d93d5;
    il2cpp_runtime_helper_022b4080(pSVar24);
    if (pSVar29 == (System_Action_string__o *)0x0) {
      pSVar27 = pSVar24->_buckets;
      uVar31 = "Invalid player entry.";
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        pSStack_138 = (System_Int32_array *)0x44d9442;
        il2cpp_runtime_helper_02337ed0();
        uVar31 = "Invalid player entry.";
      }
joined_r0x044d97fe:
      if (g_data_057aeb5b == '\0') {
        pSStack_138 = (System_Int32_array *)0x44d9461;
        il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
        g_data_057aeb5b = '\x01';
      }
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        pSStack_138 = (System_Int32_array *)0x44d950d;
        il2cpp_runtime_helper_02337ed0();
        lVar3 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
      }
      else {
        lVar3 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
      }
      if (lVar3 != 0) {
        pSStack_138 = (System_Int32_array *)0x44d9496;
        (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),uVar31,*(undefined8 *)(lVar3 + 0x28));
      }
      if (pSVar27 == (System_Int32_array *)0x0) {
        return;
      }
      (*(code *)pSVar27->max_length)
                (*(intptr_t *)((long)pSVar27->m_Items + 0x20),uVar31,*(intptr_t *)((long)pSVar27->m_Items + 8)
                );
      return;
    }
    if ((char)uVar36 == '\0') {
      pSStack_138 = (System_Int32_array *)0x44d94ca;
      bVar7 = System_String__IsNullOrEmpty((System_String_o *)(pSVar29->fields).method_ptr,(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') {
        pSVar27 = pSVar24->_buckets;
        uVar31 = "Player has no session ID to ban.";
        if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
          pSStack_138 = (System_Int32_array *)0x44d97ed;
          il2cpp_runtime_helper_02337ed0();
          uVar31 = "Player has no session ID to ban.";
        }
        goto joined_r0x044d97fe;
      }
      iStack_124 = 1;
      pSVar29 = (System_Action_string__o *)(pSVar29->fields).method_ptr;
      pSVar20 = pSVar24->_buckets;
      iVar2 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
    }
    else {
      pSStack_138 = (System_Int32_array *)0x44d93ef;
      bVar7 = System_String__IsNullOrEmpty((System_String_o *)(pSVar29->fields).invoke_impl,(MethodInfo *)0x0)
      ;
      if ((char)bVar7 != '\0') {
        pSVar27 = pSVar24->_buckets;
        uVar31 = "Player has no IP address to ban.";
        if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
          pSStack_138 = (System_Int32_array *)0x44d9412;
          il2cpp_runtime_helper_02337ed0();
          uVar31 = "Player has no IP address to ban.";
        }
        goto joined_r0x044d97fe;
      }
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        pSStack_138 = (System_Int32_array *)0x44d980e;
        il2cpp_runtime_helper_02337ed0();
        if (g_data_057ae4d9 == '\0') goto label_044d981b;
label_044d954e:
        iVar2 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
      }
      else {
        if (g_data_057ae4d9 != '\0') goto label_044d954e;
label_044d981b:
        pSStack_138 = (System_Int32_array *)0x44d9827;
        il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
        g_data_057ae4d9 = '\x01';
        iVar2 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
      }
      if (iVar2 == 0) {
        pSStack_138 = (System_Int32_array *)0x44d9844;
        il2cpp_runtime_helper_02337ed0();
      }
      iStack_124 = (uint)(*(char *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 8) == '\0') * 2 + 2;
      pSVar29 = (System_Action_string__o *)(pSVar29->fields).invoke_impl;
      pSVar20 = pSVar24->_buckets;
      iVar2 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
    }
    if (iVar2 == 0) {
      pSStack_138 = (System_Int32_array *)0x44d95ba;
      il2cpp_runtime_helper_02337ed0();
    }
    uVar31 = "Sending request...";
    if (g_data_057aeb5b == '\0') {
      pSStack_138 = (System_Int32_array *)0x44d97a2;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      g_data_057aeb5b = '\x01';
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto label_044d97c0;
label_044d95e8:
      lVar3 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
    }
    else {
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto label_044d95e8;
label_044d97c0:
      pSStack_138 = (System_Int32_array *)0x44d97c5;
      il2cpp_runtime_helper_02337ed0();
      lVar3 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
    }
    if (lVar3 != 0) {
      pSStack_138 = (System_Int32_array *)0x44d9606;
      (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),uVar31,*(undefined8 *)(lVar3 + 0x28));
    }
    if (pSVar20 != (System_Int32_array *)0x0) {
      pSStack_138 = (System_Int32_array *)0x44d9619;
      (*(code *)pSVar20->max_length)
                (*(intptr_t *)((long)pSVar20->m_Items + 0x20),uVar31,*(intptr_t *)((long)pSVar20->m_Items + 8)
                );
    }
    pSStack_138 = (System_Int32_array *)0x44d9628;
    pSVar19 = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_Dictionary_byte_object);
    pSStack_138 = (System_Int32_array *)0x44d9642;
    System_Action_object____ctor();
    pSStack_138 = (System_Int32_array *)0x44d9651;
    pSVar9 = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
    method_00 = (Il2CppClass *)0x0;
    pSStack_138 = (System_Int32_array *)0x44d966b;
    System_Action___ctor();
    pSStack_138 = (System_Int32_array *)0x44d967e;
    pSVar20 = (System_Int32_array *)Anticheat_ModeratorManager__TrackRequest(10.0,pSVar19,pSVar9,method_04);
    pSStack_138 = (System_Int32_array *)0x44d9690;
    __this_00 = (System_Collections_Generic_Dictionary_byte__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_byte_object);
    pSStack_138 = (System_Int32_array *)0x44d96a5;
    pSVar28 = MethodInfo_Dictionary_2_System_Byte_System_Object;
    pSVar32 = __this_00;
    System_Collections_Generic_Dictionary_byte__object____ctor(__this_00,(MethodInfo_304B1A0 *)MethodInfo_Dictionary_2_System_Byte_System_Object);
    pSVar18 = (System_String_o *)0x0;
    if (__this_00 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
      pSStack_138 = (System_Int32_array *)0x44d96c6;
      System_Collections_Generic_Dictionary_byte__object___Add
                (__this_00,'\0',(Il2CppObject *)pSVar20,(MethodInfo_304BE20 *)MethodInfo_Void_Add);
      uStack_11c = (uint)pSVar27 & 0xff | 2;
      pSStack_138 = (System_Int32_array *)0x44d96e6;
      pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_11c);
      pSStack_138 = (System_Int32_array *)0x44d96fa;
      System_Collections_Generic_Dictionary_byte__object___Add
                (__this_00,'\x01',pIVar10,(MethodInfo_304BE20 *)MethodInfo_Void_Add);
      iStack_120 = iStack_124;
      pSStack_138 = (System_Int32_array *)0x44d9710;
      pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_120);
      pSStack_138 = (System_Int32_array *)0x44d9724;
      System_Collections_Generic_Dictionary_byte__object___Add
                (__this_00,'\x02',pIVar10,(MethodInfo_304BE20 *)MethodInfo_Void_Add);
      pSStack_138 = (System_Int32_array *)0x44d9738;
      System_Collections_Generic_Dictionary_byte__object___Add
                (__this_00,'\x03',(Il2CppObject *)pSVar29,(MethodInfo_304BE20 *)MethodInfo_Void_Add);
      if (pIVar22 == (Il2CppClass *)0x0) {
        pIVar22 = *(Il2CppClass **)g_data_057b9c00->static_fields;
      }
      pSStack_138 = (System_Int32_array *)0x44d9762;
      System_Collections_Generic_Dictionary_byte__object___Add
                (__this_00,'\x04',(Il2CppObject *)pIVar22,(MethodInfo_304BE20 *)MethodInfo_Void_Add);
      pMVar23 = extraout_RDX_03;
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        pSStack_138 = (System_Int32_array *)0x44d977a;
        il2cpp_runtime_helper_02337ed0();
        pMVar23 = extraout_RDX_04;
      }
      pSStack_138 = (System_Int32_array *)0x44d9787;
      Anticheat_ModeratorManager__RaiseModEvent(0xb7,__this_00,pMVar23);
      return;
    }
  }
  pSStack_138 = (System_Int32_array *)0x44d9852;
  auVar37 = il2cpp_runtime_helper_022b2c90();
  pIVar10 = auVar37._8_8_;
  uStack_168 = auVar37._0_8_;
  pSStack_160 = pSVar18;
  pSStack_158 = pSVar29;
  pSStack_150 = pSVar8;
  pIStack_148 = pIVar22;
  uStack_140 = uVar36;
  pSStack_138 = pSVar20;
  if (g_data_057aeb6c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_Dictionary_byte_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Byte_System_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_byte_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RegionUnban_b__0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RegionUnban_b__1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass98_0);
    il2cpp_runtime_helper_023445d0(&"Sending request...");
    g_data_057aeb6c = '\x01';
  }
  pSVar16 = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass98_0);
  pSVar29 = pSVar16;
  Anticheat_ModeratorManager___c__DisplayClass98_0___ctor
            ((Anticheat_ModeratorManager___c__DisplayClass98_0_o *)pSVar16,(MethodInfo *)0x0);
  if (pSVar16 == (System_Action_string__o *)0x0) goto label_044d9b98;
  (pSVar16->fields).method_ptr = (intptr_t)pSVar28;
  il2cpp_runtime_helper_022b4080(&pSVar16->fields,pSVar28);
  pSVar27 = (System_Int32_array *)(pSVar16->fields).method_ptr;
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057aeb5b == '\0') goto label_044d9b52;
label_044d9967:
    uVar31 = "Sending request...";
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto label_044d9978;
label_044d9b76:
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
  }
  else {
    if (g_data_057aeb5b != '\0') goto label_044d9967;
label_044d9b52:
    uVar31 = "Sending request...";
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb5b = '\x01';
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto label_044d9b76;
label_044d9978:
    lVar3 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
  }
  if (lVar3 != 0) {
    (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),uVar31,*(undefined8 *)(lVar3 + 0x28));
  }
  if (pSVar27 != (System_Int32_array *)0x0) {
    (*(code *)pSVar27->max_length)
              (*(intptr_t *)((long)pSVar27->m_Items + 0x20),uVar31,*(intptr_t *)((long)pSVar27->m_Items + 8));
  }
  pSVar19 = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_Dictionary_byte_object);
  System_Action_object____ctor();
  pSVar9 = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
  method_00 = (Il2CppClass *)0x0;
  System_Action___ctor();
  pSVar18 = Anticheat_ModeratorManager__TrackRequest(10.0,pSVar19,pSVar9,method_05);
  pSVar16 = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_byte_object);
  pSVar29 = pSVar16;
  System_Collections_Generic_Dictionary_byte__object____ctor
            ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar16,
             (MethodInfo_304B1A0 *)MethodInfo_Dictionary_2_System_Byte_System_Object);
  if ((pSVar16 != (System_Action_string__o *)0x0) &&
     (method_00 = MethodInfo_Void_Add, pSVar29 = pSVar16,
     System_Collections_Generic_Dictionary_byte__object___Add
               ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar16,'\0',(Il2CppObject *)pSVar18,
                (MethodInfo_304BE20 *)MethodInfo_Void_Add),
     pSVar32 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0)) {
    uStack_168._4_4_ = 5 - (uint)((char)(pSVar32->fields)._count == '\0');
    pIVar21 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_168 + 4);
    System_Collections_Generic_Dictionary_byte__object___Add
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar16,'\x01',pIVar21,
               (MethodInfo_304BE20 *)MethodInfo_Void_Add);
    uStack_168 = CONCAT44(uStack_168._4_4_,3);
    pIVar21 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_168);
    System_Collections_Generic_Dictionary_byte__object___Add
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar16,'\x02',pIVar21,
               (MethodInfo_304BE20 *)MethodInfo_Void_Add);
    System_Collections_Generic_Dictionary_byte__object___Add
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar16,'\x03',
               &((pSVar32->fields)._buckets)->obj,(MethodInfo_304BE20 *)MethodInfo_Void_Add);
    if (pIVar10 == (Il2CppObject *)0x0) {
      pIVar10 = *(Il2CppObject **)g_data_057b9c00->static_fields;
    }
    System_Collections_Generic_Dictionary_byte__object___Add
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar16,'\x04',pIVar10,
               (MethodInfo_304BE20 *)MethodInfo_Void_Add);
    pMVar23 = extraout_RDX_05;
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pMVar23 = extraout_RDX_06;
    }
    Anticheat_ModeratorManager__RaiseModEvent
              (0xb7,(System_Collections_Generic_Dictionary_byte__object__o *)pSVar16,pMVar23);
    return;
  }
label_044d9b98:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeb6d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb6d = '\x01';
  }
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Anticheat_ModeratorManager__RequestRegionBanList_43d9bf0(0,0x32,pSVar29,(MethodInfo *)method_00);
  return;
}


// Anticheat.ModeratorManager$$ParseRoomBanEntries
// il2cpp: Anticheat_RoomBanEntry_array* Anticheat_ModeratorManager__ParseRoomBanEntries (System_Collections_Generic_Dictionary_byte__object__array* entries, const MethodInfo* method);
// 0x44d89c0

Anticheat_RoomBanEntry_array *
Anticheat_ModeratorManager__ParseRoomBanEntries
          (System_Collections_Generic_Dictionary_byte__object__array *entries,MethodInfo *method)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  bool_conflict bVar5;
  System_Collections_Generic_Dictionary_byte__object__c *__this;
  System_Collections_Generic_Dictionary_byte__object__c *pSVar6;
  System_Collections_Generic_Dictionary_byte__object__c *pSVar7;
  uint *puVar8;
  long lVar9;
  long lVar10;
  Il2CppObject *pIVar11;
  System_Action_string__o *pSVar12;
  System_Collections_Generic_Dictionary_byte__object__c *pSVar13;
  System_Action_o *pSVar14;
  System_String_o *pSVar15;
  Anticheat_RoomBanEntry_array *extraout_RAX;
  System_Collections_Generic_Dictionary_byte__object__o *__this_00;
  Anticheat_RoomBanEntry_array *pAVar16;
  System_Action_Dictionary_byte__object___o *pSVar17;
  System_Int32_array *pSVar18;
  System_Collections_Generic_Dictionary_byte__object__o *__this_01;
  Anticheat_RoomBanEntry_array *extraout_RAX_00;
  Il2CppObject *pIVar19;
  Anticheat_RoomBanEntry_array *extraout_RAX_01;
  Anticheat_RoomBanEntry_array *extraout_RAX_02;
  Il2CppClass *in_RCX;
  Il2CppClass *pIVar20;
  Il2CppClass *method_00;
  System_String_o *extraout_RDX;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  System_Int32_array *extraout_RDX_02;
  MethodInfo *method_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *method_03;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  MethodInfo *pMVar21;
  System_Collections_Generic_Dictionary_byte__object__c *unaff_RBX;
  System_Collections_Generic_Dictionary_byte__object__Fields *pSVar22;
  System_Collections_Generic_Dictionary_byte__object__c *pSVar23;
  System_Int32_array *pSVar24;
  System_Int32_array *pSVar25;
  System_Action_string__o *pSVar26;
  System_Collections_Generic_Dictionary_byte__object__o *pSVar27;
  System_Collections_Generic_Dictionary_byte__object__c *unaff_R12;
  System_Collections_Generic_Dictionary_byte__object__c *pSVar28;
  undefined8 uVar29;
  System_Collections_Generic_Dictionary_byte__object__c *unaff_R13;
  System_Collections_Generic_Dictionary_byte__object__array *pSVar30;
  Il2CppClass *pIVar31;
  byte bVar32;
  undefined8 *unaff_R15;
  ulong uVar33;
  undefined1 auVar34 [16];
  undefined8 local_130;
  System_String_o *pSStack_128;
  System_Action_string__o *pSStack_120;
  System_Collections_Generic_Dictionary_byte__object__o *pSStack_118;
  Il2CppClass *pIStack_110;
  ulong uStack_108;
  System_Int32_array *pSStack_100;
  int local_ec;
  int local_e8;
  uint local_e4;
  System_String_o *pSStack_e0;
  Il2CppClass *pIStack_d8;
  System_Collections_Generic_Dictionary_byte__object__c *pSStack_d0;
  Il2CppClass *pIStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  uint local_9c;
  System_Collections_Generic_Dictionary_byte__object__c *pSStack_98;
  System_Collections_Generic_Dictionary_byte__object__c *pSStack_90;
  System_Collections_Generic_Dictionary_byte__object__c *pSStack_88;
  System_Collections_Generic_Dictionary_byte__object__array *pSStack_80;
  undefined8 *puStack_78;
  System_Collections_Generic_Dictionary_byte__object__c *pSStack_70;
  uint local_64;
  System_Collections_Generic_Dictionary_byte__object__c *local_60;
  System_Collections_Generic_Dictionary_byte__object__c *local_58;
  System_Collections_Generic_Dictionary_byte__object__c *local_50;
  System_Collections_Generic_Dictionary_byte__object__array *local_48;
  System_Collections_Generic_Dictionary_byte__object__c *local_40;
  System_Collections_Generic_Dictionary_byte__object__c *local_38;
  
  if (g_data_057aeb69 == '\0') {
    pSStack_70 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d89e6;
    il2cpp_runtime_helper_023445d0(&MethodInfo_RoomBanEntry_Empty_RoomBanEntry);
    pSStack_70 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d89f2;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    pSStack_70 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d89fe;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Item);
    pSStack_70 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d8a0a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pSStack_70 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d8a16;
    il2cpp_runtime_helper_023445d0(&MethodInfo_RoomBanEntry_ToArray);
    pSStack_70 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d8a22;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Anticheat_RoomBanEntry);
    pSStack_70 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d8a2e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_RoomBanEntry);
    pSStack_70 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d8a3a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_RoomBanEntry);
    g_data_057aeb69 = '\x01';
  }
  lVar9 = MethodInfo_RoomBanEntry_Empty_RoomBanEntry;
  if (entries == (System_Collections_Generic_Dictionary_byte__object__array *)0x0) {
    if (*(long *)(MethodInfo_RoomBanEntry_Empty_RoomBanEntry + 0x38) == 0) {
      pSStack_70 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d8efb;
      il2cpp_runtime_helper_02300a20(MethodInfo_RoomBanEntry_Empty_RoomBanEntry);
      lVar10 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
      bVar32 = *(byte *)(lVar10 + 0x135);
    }
    else {
      lVar10 = *(long *)(*(long *)(MethodInfo_RoomBanEntry_Empty_RoomBanEntry + 0x38) + 0x10);
      bVar32 = *(byte *)(lVar10 + 0x135);
    }
    if ((bVar32 & 1) == 0) {
      pSStack_70 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d8f11;
      lVar10 = il2cpp_runtime_helper_023009c0();
      iVar2 = *(int *)(lVar10 + 0xe4);
    }
    else {
      iVar2 = *(int *)(lVar10 + 0xe4);
    }
    if (iVar2 == 0) {
      pSStack_70 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d8f22;
      il2cpp_runtime_helper_02337ed0();
      lVar9 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
      bVar32 = *(byte *)(lVar9 + 0x135);
    }
    else {
      lVar9 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
      bVar32 = *(byte *)(lVar9 + 0x135);
    }
    if ((bVar32 & 1) == 0) {
      pSStack_70 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d8eda;
      lVar9 = il2cpp_runtime_helper_023009c0(lVar9);
    }
    return (Anticheat_RoomBanEntry_array *)**(undefined8 **)(lVar9 + 0xb8);
  }
  pSStack_70 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d8a59;
  __this = (System_Collections_Generic_Dictionary_byte__object__c *)il2cpp_runtime_helper_023052d0(TypeInfo_List_RoomBanEntry);
  pSStack_70 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d8a6e;
  pSVar23 = MethodInfo_List_1_Anticheat_RoomBanEntry;
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this,(MethodInfo_362B8B0 *)MethodInfo_List_1_Anticheat_RoomBanEntry);
  if ((int)entries->max_length < 1) {
label_044d8e6f:
    pSVar6 = (System_Collections_Generic_Dictionary_byte__object__c *)0x0;
    if (__this != (System_Collections_Generic_Dictionary_byte__object__c *)0x0) {
      pAVar16 = (Anticheat_RoomBanEntry_array *)
                System_Collections_Generic_List_object___ToArray
                          ((System_Collections_Generic_List_object__o *)__this,MethodInfo_RoomBanEntry_ToArray);
      return pAVar16;
    }
label_044d8f35:
    pSStack_70 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d8f3a;
    il2cpp_runtime_helper_022b2c90();
    __this = pSVar6;
    pSVar13 = unaff_R13;
  }
  else {
    unaff_R12 = (System_Collections_Generic_Dictionary_byte__object__c *)0x0;
    unaff_R15 = &MethodInfo_Boolean_ContainsKey;
    pSVar28 = unaff_R12;
    pSVar13 = unaff_R13;
    pSVar30 = entries;
    local_50 = __this;
    local_48 = entries;
    if ((entries->max_length & 0xffffffff) != 0) {
      do {
        unaff_R15 = &MethodInfo_Boolean_ContainsKey;
        unaff_RBX = (System_Collections_Generic_Dictionary_byte__object__c *)pSVar30->m_Items[(long)pSVar28];
        if (unaff_RBX != (System_Collections_Generic_Dictionary_byte__object__c *)0x0) {
          pSStack_70 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d8af0;
          bVar5 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                            ((System_Collections_Generic_Dictionary_byte__object__o *)unaff_RBX,'\0',
                             MethodInfo_Boolean_ContainsKey);
          if ((char)bVar5 == '\0') {
            pSVar13 = *(System_Collections_Generic_Dictionary_byte__object__c **)g_data_057b9c00->static_fields;
          }
          else {
            entries = (System_Collections_Generic_Dictionary_byte__object__array *)&MethodInfo_Object_get_Item;
            pSStack_70 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d8b08;
            pSVar13 = (System_Collections_Generic_Dictionary_byte__object__c *)
                      System_Collections_Generic_Dictionary_byte__object___get_Item
                                ((System_Collections_Generic_Dictionary_byte__object__o *)unaff_RBX,'\0',
                                 MethodInfo_Object_get_Item);
            if ((pSVar13 != (System_Collections_Generic_Dictionary_byte__object__c *)0x0) &&
               (pSVar6 = __this, pSVar23 = g_data_057b9c00, (pSVar13->_1).image != g_data_057b9c00))
            goto label_044d8f47;
          }
          __this = pSVar13;
          entries = (System_Collections_Generic_Dictionary_byte__object__array *)&MethodInfo_Object_get_Item;
          pSStack_70 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d8b5f;
          bVar5 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                            ((System_Collections_Generic_Dictionary_byte__object__o *)unaff_RBX,'\x01',
                             MethodInfo_Boolean_ContainsKey);
          pSVar13 = __this;
          if ((char)bVar5 == '\0') {
            pSVar6 = *(System_Collections_Generic_Dictionary_byte__object__c **)g_data_057b9c00->static_fields;
          }
          else {
            pSStack_70 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d8b73;
            pSVar6 = (System_Collections_Generic_Dictionary_byte__object__c *)
                     System_Collections_Generic_Dictionary_byte__object___get_Item
                               ((System_Collections_Generic_Dictionary_byte__object__o *)unaff_RBX,'\x01',
                                MethodInfo_Object_get_Item);
            if ((pSVar6 != (System_Collections_Generic_Dictionary_byte__object__c *)0x0) &&
               (pSVar23 = g_data_057b9c00, pSVar7 = pSVar6, (pSVar6->_1).image != g_data_057b9c00))
            goto label_044d8f52;
          }
          pSStack_70 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d8bc8;
          bVar5 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                            ((System_Collections_Generic_Dictionary_byte__object__o *)unaff_RBX,'\x02',
                             MethodInfo_Boolean_ContainsKey);
          local_38 = pSVar6;
          if ((char)bVar5 == '\0') {
            pSVar7 = *(System_Collections_Generic_Dictionary_byte__object__c **)g_data_057b9c00->static_fields;
          }
          else {
            pSStack_70 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d8be1;
            pSVar7 = (System_Collections_Generic_Dictionary_byte__object__c *)
                     System_Collections_Generic_Dictionary_byte__object___get_Item
                               ((System_Collections_Generic_Dictionary_byte__object__o *)unaff_RBX,'\x02',
                                MethodInfo_Object_get_Item);
            if ((pSVar7 != (System_Collections_Generic_Dictionary_byte__object__c *)0x0) &&
               (pSVar23 = g_data_057b9c00, (pSVar7->_1).image != g_data_057b9c00)) goto label_044d8f52;
          }
          local_58 = pSVar7;
          pSStack_70 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d8c40;
          bVar5 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                            ((System_Collections_Generic_Dictionary_byte__object__o *)unaff_RBX,'\x03',
                             MethodInfo_Boolean_ContainsKey);
          pSVar13 = (System_Collections_Generic_Dictionary_byte__object__c *)0x0;
          local_64 = 0;
          unaff_R13 = pSVar13;
          pSVar6 = __this;
          unaff_R12 = pSVar28;
          if ((char)bVar5 != '\0') {
            pSVar23 = (System_Collections_Generic_Dictionary_byte__object__c *)0x3;
            pSStack_70 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d8c5f;
            pIVar11 = System_Collections_Generic_Dictionary_byte__object___get_Item
                                ((System_Collections_Generic_Dictionary_byte__object__o *)unaff_RBX,'\x03',
                                 MethodInfo_Object_get_Item);
            if (pIVar11 == (Il2CppObject *)0x0) goto label_044d8f35;
            in_RCX = (pIVar11->klass->_1).element_class;
            pSVar23 = g_data_057b9bb8;
            if (in_RCX != (g_data_057b9bb8->_1).element_class) goto label_044d8f3f;
            pSStack_70 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d8c8c;
            puVar8 = (uint *)il2cpp_runtime_helper_02305440(pIVar11);
            local_64 = *puVar8;
          }
          pSStack_70 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d8ca2;
          bVar5 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                            ((System_Collections_Generic_Dictionary_byte__object__o *)unaff_RBX,'\x04',
                             MethodInfo_Boolean_ContainsKey);
          if ((char)bVar5 != '\0') {
            pSVar23 = (System_Collections_Generic_Dictionary_byte__object__c *)&g_data_00000004;
            pSStack_70 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d8cb6;
            pIVar11 = System_Collections_Generic_Dictionary_byte__object___get_Item
                                ((System_Collections_Generic_Dictionary_byte__object__o *)unaff_RBX,'\x04',
                                 MethodInfo_Object_get_Item);
            if (pIVar11 == (Il2CppObject *)0x0) goto label_044d8f35;
            in_RCX = (pIVar11->klass->_1).element_class;
            pSVar23 = g_data_057b9bb8;
            if (in_RCX != (g_data_057b9bb8->_1).element_class) goto label_044d8f3f;
            pSStack_70 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d8ce3;
            puVar8 = (uint *)il2cpp_runtime_helper_02305440(pIVar11);
            pSVar13 = (System_Collections_Generic_Dictionary_byte__object__c *)(ulong)*puVar8;
          }
          pSStack_70 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d8cf6;
          bVar5 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                            ((System_Collections_Generic_Dictionary_byte__object__o *)unaff_RBX,'\x06',
                             MethodInfo_Boolean_ContainsKey);
          local_40 = pSVar28;
          if ((char)bVar5 == '\0') {
            pSVar7 = *(System_Collections_Generic_Dictionary_byte__object__c **)g_data_057b9c00->static_fields;
          }
          else {
            pSStack_70 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d8d0f;
            pSVar7 = (System_Collections_Generic_Dictionary_byte__object__c *)
                     System_Collections_Generic_Dictionary_byte__object___get_Item
                               ((System_Collections_Generic_Dictionary_byte__object__o *)unaff_RBX,'\x06',
                                MethodInfo_Object_get_Item);
            if ((pSVar7 != (System_Collections_Generic_Dictionary_byte__object__c *)0x0) &&
               (pSVar23 = g_data_057b9c00, (pSVar7->_1).image != g_data_057b9c00)) goto label_044d8f52;
          }
          local_60 = pSVar7;
          unaff_R13 = local_38;
          pSVar23 = __this;
          if ((int)pSVar13 == 1) {
            pSVar23 = local_38;
          }
          pSStack_70 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d8d77;
          uVar4 = System_String__IsNullOrEmpty((System_String_o *)pSVar23,(MethodInfo *)0x0);
          unaff_R15 = (undefined8 *)(ulong)uVar4;
          pSStack_70 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d8d89;
          unaff_RBX = (System_Collections_Generic_Dictionary_byte__object__c *)
                      il2cpp_runtime_helper_023052d0(TypeInfo_RoomBanEntry);
          pSVar23 = (System_Collections_Generic_Dictionary_byte__object__c *)0x0;
          pSStack_70 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d8d96;
          Anticheat_RoomBanEntry___ctor((Anticheat_RoomBanEntry_o *)unaff_RBX,(MethodInfo *)0x0);
          uVar1 = local_64;
          unaff_R12 = pSVar13;
          if (unaff_RBX == (System_Collections_Generic_Dictionary_byte__object__c *)0x0) goto label_044d8f35;
          entries = (System_Collections_Generic_Dictionary_byte__object__array *)(ulong)local_64;
          bVar32 = (byte)uVar4 ^ 1 | 0 < (int)local_64;
          unaff_R15 = (undefined8 *)(ulong)CONCAT31((int3)(uVar4 >> 8),bVar32);
          (unaff_RBX->_1).name = (char *)__this;
          pSStack_70 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d8dc1;
          il2cpp_runtime_helper_022b4080(&(unaff_RBX->_1).name,__this);
          (unaff_RBX->_1).namespaze = (char *)unaff_R13;
          pSStack_70 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d8dd1;
          il2cpp_runtime_helper_022b4080(&(unaff_RBX->_1).namespaze,unaff_R13);
          (unaff_RBX->_1).byval_arg.data = local_58;
          pSStack_70 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d8de3;
          il2cpp_runtime_helper_022b4080(&(unaff_RBX->_1).byval_arg);
          (unaff_RBX->_1).byval_arg.bits = uVar1;
          (unaff_RBX->_1).byval_arg.field_0xc = (int)pSVar13 == 1;
          (unaff_RBX->_1).this_arg.data = local_60;
          pSStack_70 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d8e04;
          pSVar23 = local_60;
          il2cpp_runtime_helper_022b4080(&(unaff_RBX->_1).this_arg);
          pSVar28 = local_40;
          pSVar30 = local_48;
          __this = local_50;
          *(byte *)&(unaff_RBX->_1).this_arg.bits = bVar32;
          pIVar20 = MethodInfo_Void_Add;
          pSVar6 = local_50;
          if (local_50 == (System_Collections_Generic_Dictionary_byte__object__c *)0x0) goto label_044d8f35;
          puVar3 = (undefined1 *)((long)&(local_50->_1).namespaze + 4);
          *(int *)puVar3 = *(int *)puVar3 + 1;
          pSVar24 = ((System_Collections_Generic_Dictionary_byte__object__Fields *)&(local_50->_1).name)->
                    _buckets;
          unaff_R15 = &MethodInfo_Boolean_ContainsKey;
          in_RCX = pIVar20;
          unaff_R12 = local_40;
          entries = local_48;
          if (pSVar24 == (System_Int32_array *)0x0) goto label_044d8f35;
          uVar1 = *(uint *)&(local_50->_1).namespaze;
          pSVar23 = unaff_RBX;
          if (uVar1 < (uint)pSVar24->max_length) {
            *(uint *)&(local_50->_1).namespaze = uVar1 + 1;
            *(System_Collections_Generic_Dictionary_byte__object__c **)
             (pSVar24->m_Items + (long)(int)uVar1 * 2) = unaff_RBX;
            pSStack_70 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d8e6a;
            il2cpp_runtime_helper_022b4080(pSVar24->m_Items + (long)(int)uVar1 * 2);
          }
          else {
            pSStack_70 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d8aba;
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)local_50,(Il2CppObject *)unaff_RBX,
                       *(MethodInfo_362C220 **)(*(long *)((long)(pIVar20->_1).byval_arg.data + 0xc0) + 0x70));
          }
        }
        unaff_R15 = &MethodInfo_Boolean_ContainsKey;
        unaff_R12 = (System_Collections_Generic_Dictionary_byte__object__c *)((long)&(pSVar28->_1).image + 1);
        uVar1 = (uint)pSVar30->max_length;
        in_RCX = (Il2CppClass *)(long)(int)uVar1;
        entries = pSVar30;
        if ((long)in_RCX <= (long)unaff_R12) goto label_044d8e6f;
        pSVar28 = unaff_R12;
        pSVar13 = unaff_R13;
      } while (unaff_R12 < (System_Collections_Generic_Dictionary_byte__object__c *)(ulong)uVar1);
    }
  }
  pSStack_70 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d8f3f;
  pIVar11 = (Il2CppObject *)il2cpp_runtime_helper_022b2ca0();
  pSVar28 = unaff_R12;
label_044d8f3f:
  pSStack_70 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d8f47;
  il2cpp_runtime_helper_022b2fd0(pIVar11);
  pSVar6 = __this;
label_044d8f47:
  pSStack_70 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d8f4f;
  il2cpp_runtime_helper_022b2fd0(pSVar13);
  pSVar7 = pSVar6;
label_044d8f52:
  pSStack_70 = (System_Collections_Generic_Dictionary_byte__object__c *)0x44d8f57;
  il2cpp_runtime_helper_022b2fd0();
  pIVar31 = (Il2CppClass *)((ulong)pSVar7 & 0xffffffff);
  pIVar20 = in_RCX;
  pSStack_98 = unaff_RBX;
  pSStack_90 = pSVar28;
  pSStack_88 = pSVar13;
  pSStack_80 = entries;
  puStack_78 = unaff_R15;
  pSStack_70 = pSVar6;
  if (g_data_057aeb6a == '\0') {
    uStack_b8 = 0x44d8f8f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_Dictionary_byte_object);
    uStack_b8 = 0x44d8f9b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    uStack_b8 = 0x44d8fa7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    uStack_b8 = 0x44d8fb3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Byte_System_Object);
    uStack_b8 = 0x44d8fbf;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_byte_object);
    uStack_b8 = 0x44d8fcb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    uStack_b8 = 0x44d8fd7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RegionBan_b__0);
    uStack_b8 = 0x44d8fe3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RegionBan_b__1);
    uStack_b8 = 0x44d8fef;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass96_0);
    uStack_b8 = 0x44d8ffb;
    il2cpp_runtime_helper_023445d0(&"Sending request...");
    g_data_057aeb6a = '\x01';
  }
  uStack_b8 = 0x44d9011;
  pSVar12 = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass96_0);
  pSVar24 = (System_Int32_array *)0x0;
  uStack_b8 = 0x44d901e;
  pSVar26 = pSVar12;
  Anticheat_ModeratorManager___c__DisplayClass96_0___ctor
            ((Anticheat_ModeratorManager___c__DisplayClass96_0_o *)pSVar12,(MethodInfo *)0x0);
  pSVar15 = extraout_RDX;
  if (pSVar12 != (System_Action_string__o *)0x0) {
    local_a8 = SUB84(pSVar7,0);
    (pSVar12->fields).method_ptr = (intptr_t)extraout_RDX;
    uStack_b8 = 0x44d903f;
    il2cpp_runtime_helper_022b4080(&pSVar12->fields,extraout_RDX);
    lVar9 = (pSVar12->fields).method_ptr;
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      uStack_b8 = 0x44d924a;
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057aeb5b == '\0') goto label_044d9268;
label_044d9071:
      uVar29 = "Sending request...";
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto label_044d9081;
label_044d9292:
      uStack_b8 = 0x44d929d;
      il2cpp_runtime_helper_02337ed0();
      lVar10 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
      pIVar31 = in_RCX;
    }
    else {
      if (g_data_057aeb5b != '\0') goto label_044d9071;
label_044d9268:
      uVar29 = "Sending request...";
      uStack_b8 = 0x44d9274;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      g_data_057aeb5b = '\x01';
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto label_044d9292;
label_044d9081:
      lVar10 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
    }
    if (lVar10 != 0) {
      uStack_b8 = 0x44d909f;
      (**(code **)(lVar10 + 0x18))(*(undefined8 *)(lVar10 + 0x40),uVar29,*(undefined8 *)(lVar10 + 0x28));
    }
    if (lVar9 != 0) {
      uStack_b8 = 0x44d90b2;
      (**(code **)(lVar9 + 0x18))(*(undefined8 *)(lVar9 + 0x40),uVar29,*(undefined8 *)(lVar9 + 0x28));
    }
    uStack_b8 = 0x44d90c1;
    pSVar13 = (System_Collections_Generic_Dictionary_byte__object__c *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_Dictionary_byte_object);
    uStack_b8 = 0x44d90db;
    System_Action_object____ctor();
    uStack_b8 = 0x44d90ea;
    pSVar14 = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
    pIVar20 = (Il2CppClass *)0x0;
    uStack_b8 = 0x44d9104;
    System_Action___ctor();
    uStack_b8 = 0x44d9117;
    pSVar15 = Anticheat_ModeratorManager__TrackRequest
                        (10.0,(System_Action_Dictionary_byte__object___o *)pSVar13,pSVar14,method_01);
    uStack_b8 = 0x44d9129;
    pSVar12 = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_byte_object);
    uStack_b8 = 0x44d913e;
    pSVar24 = MethodInfo_Dictionary_2_System_Byte_System_Object;
    pSVar26 = pSVar12;
    System_Collections_Generic_Dictionary_byte__object____ctor
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar12,
               (MethodInfo_304B1A0 *)MethodInfo_Dictionary_2_System_Byte_System_Object);
    if (pSVar12 != (System_Action_string__o *)0x0) {
      uStack_b8 = 0x44d915f;
      System_Collections_Generic_Dictionary_byte__object___Add
                ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar12,'\0',(Il2CppObject *)pSVar15
                 ,(MethodInfo_304BE20 *)MethodInfo_Void_Add);
      local_9c = (uint)pSVar23 & 0xff | 2;
      uStack_b8 = 0x44d917f;
      pIVar11 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&local_9c);
      uStack_b8 = 0x44d9193;
      System_Collections_Generic_Dictionary_byte__object___Add
                ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar12,'\x01',pIVar11,
                 (MethodInfo_304BE20 *)MethodInfo_Void_Add);
      local_a0 = 0;
      uStack_b8 = 0x44d91a9;
      pIVar11 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&local_a0);
      uStack_b8 = 0x44d91bd;
      System_Collections_Generic_Dictionary_byte__object___Add
                ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar12,'\x02',pIVar11,
                 (MethodInfo_304BE20 *)MethodInfo_Void_Add);
      local_a4 = local_a8;
      uStack_b8 = 0x44d91d3;
      pIVar11 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&local_a4);
      uStack_b8 = 0x44d91e7;
      System_Collections_Generic_Dictionary_byte__object___Add
                ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar12,'\x03',pIVar11,
                 (MethodInfo_304BE20 *)MethodInfo_Void_Add);
      if (in_RCX == (Il2CppClass *)0x0) {
        in_RCX = *(Il2CppClass **)g_data_057b9c00->static_fields;
      }
      uStack_b8 = 0x44d9211;
      System_Collections_Generic_Dictionary_byte__object___Add
                ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar12,'\x04',
                 (Il2CppObject *)in_RCX,(MethodInfo_304BE20 *)MethodInfo_Void_Add);
      pMVar21 = extraout_RDX_00;
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        uStack_b8 = 0x44d9229;
        il2cpp_runtime_helper_02337ed0();
        pMVar21 = extraout_RDX_01;
      }
      uStack_b8 = 0x44d9236;
      Anticheat_ModeratorManager__RaiseModEvent
                (0xb7,(System_Collections_Generic_Dictionary_byte__object__o *)pSVar12,pMVar21);
      return extraout_RAX;
    }
  }
  uStack_b8 = 0x44d92c2;
  il2cpp_runtime_helper_022b2c90();
  uVar33 = (ulong)pSVar24 & 0xffffffff;
  method_00 = pIVar20;
  pSStack_e0 = pSVar15;
  pIStack_d8 = in_RCX;
  pSStack_d0 = pSVar13;
  pIStack_c8 = pIVar31;
  uStack_c0 = (ulong)pSVar23 & 0xffffffff;
  uStack_b8 = 0;
  if (g_data_057aeb6b == '\0') {
    pSStack_100 = (System_Int32_array *)0x44d9303;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_Dictionary_byte_object);
    pSStack_100 = (System_Int32_array *)0x44d930f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    pSStack_100 = (System_Int32_array *)0x44d931b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pSStack_100 = (System_Int32_array *)0x44d9327;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Byte_System_Object);
    pSStack_100 = (System_Int32_array *)0x44d9333;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_byte_object);
    pSStack_100 = (System_Int32_array *)0x44d933f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    pSStack_100 = (System_Int32_array *)0x44d934b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RegionBanPlayerEntry_b__0);
    pSStack_100 = (System_Int32_array *)0x44d9357;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RegionBanPlayerEntry_b__1);
    pSStack_100 = (System_Int32_array *)0x44d9363;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass97_0);
    pSStack_100 = (System_Int32_array *)0x44d936f;
    il2cpp_runtime_helper_023445d0(&"Player has no session ID to ban.");
    pSStack_100 = (System_Int32_array *)0x44d937b;
    il2cpp_runtime_helper_023445d0(&"Invalid player entry.");
    pSStack_100 = (System_Int32_array *)0x44d9387;
    il2cpp_runtime_helper_023445d0(&"Sending request...");
    pSStack_100 = (System_Int32_array *)0x44d9393;
    il2cpp_runtime_helper_023445d0(&"Player has no IP address to ban.");
    g_data_057aeb6b = '\x01';
  }
  pSStack_100 = (System_Int32_array *)0x44d93a9;
  __this_00 = (System_Collections_Generic_Dictionary_byte__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass97_0);
  pSVar25 = (System_Int32_array *)0x0;
  pSStack_100 = (System_Int32_array *)0x44d93b6;
  pSVar27 = __this_00;
  Anticheat_ModeratorManager___c__DisplayClass97_0___ctor
            ((Anticheat_ModeratorManager___c__DisplayClass97_0_o *)__this_00,(MethodInfo *)0x0);
  pSVar18 = extraout_RDX_02;
  if (__this_00 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
    pSVar22 = &__this_00->fields;
    (__this_00->fields)._buckets = extraout_RDX_02;
    pSStack_100 = (System_Int32_array *)0x44d93d5;
    il2cpp_runtime_helper_022b4080(pSVar22);
    if (pSVar26 == (System_Action_string__o *)0x0) {
      pSVar24 = pSVar22->_buckets;
      uVar29 = "Invalid player entry.";
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        pSStack_100 = (System_Int32_array *)0x44d9442;
        il2cpp_runtime_helper_02337ed0();
        uVar29 = "Invalid player entry.";
      }
joined_r0x044d97fe:
      if (g_data_057aeb5b == '\0') {
        pSStack_100 = (System_Int32_array *)0x44d9461;
        il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
        g_data_057aeb5b = '\x01';
      }
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        pSStack_100 = (System_Int32_array *)0x44d950d;
        il2cpp_runtime_helper_02337ed0();
        lVar9 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
        if (lVar9 == 0) {
          pAVar16 = (Anticheat_RoomBanEntry_array *)0x0;
          goto label_044d9496;
        }
      }
      else {
        lVar9 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
        pAVar16 = (Anticheat_RoomBanEntry_array *)0x0;
        if (lVar9 == 0) goto label_044d9496;
      }
      pSStack_100 = (System_Int32_array *)0x44d9496;
      pAVar16 = (Anticheat_RoomBanEntry_array *)
                (**(code **)(lVar9 + 0x18))
                          (*(undefined8 *)(lVar9 + 0x40),uVar29,*(undefined8 *)(lVar9 + 0x28));
label_044d9496:
      if (pSVar24 == (System_Int32_array *)0x0) {
        return pAVar16;
      }
      pAVar16 = (Anticheat_RoomBanEntry_array *)
                (*(code *)pSVar24->max_length)
                          (*(intptr_t *)((long)pSVar24->m_Items + 0x20),uVar29,
                           *(intptr_t *)((long)pSVar24->m_Items + 8));
      return pAVar16;
    }
    if ((char)uVar33 == '\0') {
      pSStack_100 = (System_Int32_array *)0x44d94ca;
      bVar5 = System_String__IsNullOrEmpty((System_String_o *)(pSVar26->fields).method_ptr,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        pSVar24 = pSVar22->_buckets;
        uVar29 = "Player has no session ID to ban.";
        if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
          pSStack_100 = (System_Int32_array *)0x44d97ed;
          il2cpp_runtime_helper_02337ed0();
          uVar29 = "Player has no session ID to ban.";
        }
        goto joined_r0x044d97fe;
      }
      local_ec = 1;
      pSVar26 = (System_Action_string__o *)(pSVar26->fields).method_ptr;
      pSVar18 = pSVar22->_buckets;
      iVar2 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
    }
    else {
      pSStack_100 = (System_Int32_array *)0x44d93ef;
      bVar5 = System_String__IsNullOrEmpty((System_String_o *)(pSVar26->fields).invoke_impl,(MethodInfo *)0x0)
      ;
      if ((char)bVar5 != '\0') {
        pSVar24 = pSVar22->_buckets;
        uVar29 = "Player has no IP address to ban.";
        if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
          pSStack_100 = (System_Int32_array *)0x44d9412;
          il2cpp_runtime_helper_02337ed0();
          uVar29 = "Player has no IP address to ban.";
        }
        goto joined_r0x044d97fe;
      }
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        pSStack_100 = (System_Int32_array *)0x44d980e;
        il2cpp_runtime_helper_02337ed0();
        if (g_data_057ae4d9 == '\0') goto label_044d981b;
label_044d954e:
        iVar2 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
      }
      else {
        if (g_data_057ae4d9 != '\0') goto label_044d954e;
label_044d981b:
        pSStack_100 = (System_Int32_array *)0x44d9827;
        il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
        g_data_057ae4d9 = '\x01';
        iVar2 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
      }
      if (iVar2 == 0) {
        pSStack_100 = (System_Int32_array *)0x44d9844;
        il2cpp_runtime_helper_02337ed0();
      }
      local_ec = (uint)(*(char *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 8) == '\0') * 2 + 2;
      pSVar26 = (System_Action_string__o *)(pSVar26->fields).invoke_impl;
      pSVar18 = pSVar22->_buckets;
      iVar2 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
    }
    if (iVar2 == 0) {
      pSStack_100 = (System_Int32_array *)0x44d95ba;
      il2cpp_runtime_helper_02337ed0();
    }
    uVar29 = "Sending request...";
    if (g_data_057aeb5b == '\0') {
      pSStack_100 = (System_Int32_array *)0x44d97a2;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      g_data_057aeb5b = '\x01';
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto label_044d97c0;
label_044d95e8:
      lVar9 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
    }
    else {
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto label_044d95e8;
label_044d97c0:
      pSStack_100 = (System_Int32_array *)0x44d97c5;
      il2cpp_runtime_helper_02337ed0();
      lVar9 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
    }
    if (lVar9 != 0) {
      pSStack_100 = (System_Int32_array *)0x44d9606;
      (**(code **)(lVar9 + 0x18))(*(undefined8 *)(lVar9 + 0x40),uVar29,*(undefined8 *)(lVar9 + 0x28));
    }
    if (pSVar18 != (System_Int32_array *)0x0) {
      pSStack_100 = (System_Int32_array *)0x44d9619;
      (*(code *)pSVar18->max_length)
                (*(intptr_t *)((long)pSVar18->m_Items + 0x20),uVar29,*(intptr_t *)((long)pSVar18->m_Items + 8)
                );
    }
    pSStack_100 = (System_Int32_array *)0x44d9628;
    pSVar17 = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_Dictionary_byte_object);
    pSStack_100 = (System_Int32_array *)0x44d9642;
    System_Action_object____ctor();
    pSStack_100 = (System_Int32_array *)0x44d9651;
    pSVar14 = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
    method_00 = (Il2CppClass *)0x0;
    pSStack_100 = (System_Int32_array *)0x44d966b;
    System_Action___ctor();
    pSStack_100 = (System_Int32_array *)0x44d967e;
    pSVar18 = (System_Int32_array *)Anticheat_ModeratorManager__TrackRequest(10.0,pSVar17,pSVar14,method_02);
    pSStack_100 = (System_Int32_array *)0x44d9690;
    __this_01 = (System_Collections_Generic_Dictionary_byte__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_byte_object);
    pSStack_100 = (System_Int32_array *)0x44d96a5;
    pSVar25 = MethodInfo_Dictionary_2_System_Byte_System_Object;
    pSVar27 = __this_01;
    System_Collections_Generic_Dictionary_byte__object____ctor(__this_01,(MethodInfo_304B1A0 *)MethodInfo_Dictionary_2_System_Byte_System_Object);
    pSVar15 = (System_String_o *)0x0;
    if (__this_01 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
      pSStack_100 = (System_Int32_array *)0x44d96c6;
      System_Collections_Generic_Dictionary_byte__object___Add
                (__this_01,'\0',(Il2CppObject *)pSVar18,(MethodInfo_304BE20 *)MethodInfo_Void_Add);
      local_e4 = (uint)pSVar24 & 0xff | 2;
      pSStack_100 = (System_Int32_array *)0x44d96e6;
      pIVar11 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&local_e4);
      pSStack_100 = (System_Int32_array *)0x44d96fa;
      System_Collections_Generic_Dictionary_byte__object___Add
                (__this_01,'\x01',pIVar11,(MethodInfo_304BE20 *)MethodInfo_Void_Add);
      local_e8 = local_ec;
      pSStack_100 = (System_Int32_array *)0x44d9710;
      pIVar11 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&local_e8);
      pSStack_100 = (System_Int32_array *)0x44d9724;
      System_Collections_Generic_Dictionary_byte__object___Add
                (__this_01,'\x02',pIVar11,(MethodInfo_304BE20 *)MethodInfo_Void_Add);
      pSStack_100 = (System_Int32_array *)0x44d9738;
      System_Collections_Generic_Dictionary_byte__object___Add
                (__this_01,'\x03',(Il2CppObject *)pSVar26,(MethodInfo_304BE20 *)MethodInfo_Void_Add);
      if (pIVar20 == (Il2CppClass *)0x0) {
        pIVar20 = *(Il2CppClass **)g_data_057b9c00->static_fields;
      }
      pSStack_100 = (System_Int32_array *)0x44d9762;
      System_Collections_Generic_Dictionary_byte__object___Add
                (__this_01,'\x04',(Il2CppObject *)pIVar20,(MethodInfo_304BE20 *)MethodInfo_Void_Add);
      pMVar21 = extraout_RDX_03;
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        pSStack_100 = (System_Int32_array *)0x44d977a;
        il2cpp_runtime_helper_02337ed0();
        pMVar21 = extraout_RDX_04;
      }
      pSStack_100 = (System_Int32_array *)0x44d9787;
      Anticheat_ModeratorManager__RaiseModEvent(0xb7,__this_01,pMVar21);
      return extraout_RAX_00;
    }
  }
  pSStack_100 = (System_Int32_array *)0x44d9852;
  auVar34 = il2cpp_runtime_helper_022b2c90();
  pIVar11 = auVar34._8_8_;
  local_130 = auVar34._0_8_;
  pSStack_128 = pSVar15;
  pSStack_120 = pSVar26;
  pSStack_118 = __this_00;
  pIStack_110 = pIVar20;
  uStack_108 = uVar33;
  pSStack_100 = pSVar18;
  if (g_data_057aeb6c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_Dictionary_byte_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Byte_System_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_byte_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RegionUnban_b__0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RegionUnban_b__1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass98_0);
    il2cpp_runtime_helper_023445d0(&"Sending request...");
    g_data_057aeb6c = '\x01';
  }
  pSVar12 = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass98_0);
  pSVar26 = pSVar12;
  Anticheat_ModeratorManager___c__DisplayClass98_0___ctor
            ((Anticheat_ModeratorManager___c__DisplayClass98_0_o *)pSVar12,(MethodInfo *)0x0);
  if (pSVar12 == (System_Action_string__o *)0x0) goto label_044d9b98;
  (pSVar12->fields).method_ptr = (intptr_t)pSVar25;
  il2cpp_runtime_helper_022b4080(&pSVar12->fields,pSVar25);
  pSVar24 = (System_Int32_array *)(pSVar12->fields).method_ptr;
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057aeb5b == '\0') goto label_044d9b52;
label_044d9967:
    uVar29 = "Sending request...";
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto label_044d9978;
label_044d9b76:
    il2cpp_runtime_helper_02337ed0();
    lVar9 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
  }
  else {
    if (g_data_057aeb5b != '\0') goto label_044d9967;
label_044d9b52:
    uVar29 = "Sending request...";
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb5b = '\x01';
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto label_044d9b76;
label_044d9978:
    lVar9 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
  }
  if (lVar9 != 0) {
    (**(code **)(lVar9 + 0x18))(*(undefined8 *)(lVar9 + 0x40),uVar29,*(undefined8 *)(lVar9 + 0x28));
  }
  if (pSVar24 != (System_Int32_array *)0x0) {
    (*(code *)pSVar24->max_length)
              (*(intptr_t *)((long)pSVar24->m_Items + 0x20),uVar29,*(intptr_t *)((long)pSVar24->m_Items + 8));
  }
  pSVar17 = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_Dictionary_byte_object);
  System_Action_object____ctor();
  pSVar14 = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
  method_00 = (Il2CppClass *)0x0;
  System_Action___ctor();
  pSVar15 = Anticheat_ModeratorManager__TrackRequest(10.0,pSVar17,pSVar14,method_03);
  pSVar12 = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_byte_object);
  pSVar26 = pSVar12;
  System_Collections_Generic_Dictionary_byte__object____ctor
            ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar12,
             (MethodInfo_304B1A0 *)MethodInfo_Dictionary_2_System_Byte_System_Object);
  if ((pSVar12 != (System_Action_string__o *)0x0) &&
     (method_00 = MethodInfo_Void_Add, pSVar26 = pSVar12,
     System_Collections_Generic_Dictionary_byte__object___Add
               ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar12,'\0',(Il2CppObject *)pSVar15,
                (MethodInfo_304BE20 *)MethodInfo_Void_Add),
     pSVar27 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0)) {
    local_130._4_4_ = 5 - (uint)((char)(pSVar27->fields)._count == '\0');
    pIVar19 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&local_130 + 4);
    System_Collections_Generic_Dictionary_byte__object___Add
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar12,'\x01',pIVar19,
               (MethodInfo_304BE20 *)MethodInfo_Void_Add);
    local_130 = CONCAT44(local_130._4_4_,3);
    pIVar19 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&local_130);
    System_Collections_Generic_Dictionary_byte__object___Add
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar12,'\x02',pIVar19,
               (MethodInfo_304BE20 *)MethodInfo_Void_Add);
    System_Collections_Generic_Dictionary_byte__object___Add
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar12,'\x03',
               &((pSVar27->fields)._buckets)->obj,(MethodInfo_304BE20 *)MethodInfo_Void_Add);
    if (pIVar11 == (Il2CppObject *)0x0) {
      pIVar11 = *(Il2CppObject **)g_data_057b9c00->static_fields;
    }
    System_Collections_Generic_Dictionary_byte__object___Add
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar12,'\x04',pIVar11,
               (MethodInfo_304BE20 *)MethodInfo_Void_Add);
    pMVar21 = extraout_RDX_05;
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pMVar21 = extraout_RDX_06;
    }
    Anticheat_ModeratorManager__RaiseModEvent
              (0xb7,(System_Collections_Generic_Dictionary_byte__object__o *)pSVar12,pMVar21);
    return extraout_RAX_01;
  }
label_044d9b98:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeb6d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb6d = '\x01';
  }
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Anticheat_ModeratorManager__RequestRegionBanList_43d9bf0(0,0x32,pSVar26,(MethodInfo *)method_00);
  return extraout_RAX_02;
}


// Anticheat.ModeratorManager$$RegionBan
// il2cpp: void Anticheat_ModeratorManager__RegionBan (int32_t actorNumber, bool ipBan, System_Action_string__o* localStatus, System_String_o* reason, const MethodInfo* method);
// 0x44d8f60

void Anticheat_ModeratorManager__RegionBan
               (int32_t actorNumber,bool_conflict ipBan,System_Action_string__o *localStatus,
               System_String_o *reason,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  long lVar3;
  bool_conflict bVar4;
  System_Action_string__o *pSVar5;
  System_Action_o *pSVar6;
  Il2CppObject *pIVar7;
  System_Collections_Generic_Dictionary_byte__object__o *__this;
  System_Action_Dictionary_byte__object___o *pSVar8;
  System_Int32_array *pSVar9;
  System_Collections_Generic_Dictionary_byte__object__o *__this_00;
  System_String_o *pSVar10;
  Il2CppObject *pIVar11;
  MethodInfo *pMVar12;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  System_Int32_array *extraout_RDX_01;
  MethodInfo *method_02;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *method_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  System_Collections_Generic_Dictionary_byte__object__Fields *pSVar13;
  System_Int32_array *pSVar14;
  System_Int32_array *pSVar15;
  System_Action_string__o *pSVar16;
  System_Collections_Generic_Dictionary_byte__object__o *pSVar17;
  undefined8 uVar18;
  System_Action_Dictionary_byte__object___o *unaff_R13;
  ulong uVar19;
  undefined1 auVar20 [16];
  undefined8 uStack_c8;
  System_Action_string__o *pSStack_c0;
  System_Action_string__o *pSStack_b8;
  System_Collections_Generic_Dictionary_byte__object__o *pSStack_b0;
  MethodInfo *pMStack_a8;
  ulong uStack_a0;
  System_Int32_array *pSStack_98;
  int iStack_84;
  int iStack_80;
  uint uStack_7c;
  System_Action_string__o *pSStack_78;
  System_String_o *pSStack_70;
  System_Action_Dictionary_byte__object___o *pSStack_68;
  System_String_o *pSStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  int32_t iStack_40;
  int32_t aiStack_3c [3];
  
  pSVar10 = (System_String_o *)(ulong)(uint)actorNumber;
  pMVar12 = (MethodInfo *)reason;
  if (g_data_057aeb6a == '\0') {
    uStack_50 = 0x44d8f8f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_Dictionary_byte_object);
    uStack_50 = 0x44d8f9b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    uStack_50 = 0x44d8fa7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    uStack_50 = 0x44d8fb3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Byte_System_Object);
    uStack_50 = 0x44d8fbf;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_byte_object);
    uStack_50 = 0x44d8fcb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    uStack_50 = 0x44d8fd7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RegionBan_b__0);
    uStack_50 = 0x44d8fe3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RegionBan_b__1);
    uStack_50 = 0x44d8fef;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass96_0);
    uStack_50 = 0x44d8ffb;
    il2cpp_runtime_helper_023445d0(&"Sending request...");
    g_data_057aeb6a = '\x01';
  }
  uStack_50 = 0x44d9011;
  pSVar5 = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass96_0);
  pSVar14 = (System_Int32_array *)0x0;
  uStack_50 = 0x44d901e;
  pSVar16 = pSVar5;
  Anticheat_ModeratorManager___c__DisplayClass96_0___ctor
            ((Anticheat_ModeratorManager___c__DisplayClass96_0_o *)pSVar5,(MethodInfo *)0x0);
  if (pSVar5 != (System_Action_string__o *)0x0) {
    (pSVar5->fields).method_ptr = (intptr_t)localStatus;
    uStack_50 = 0x44d903f;
    iStack_40 = actorNumber;
    il2cpp_runtime_helper_022b4080(&pSVar5->fields,localStatus);
    lVar2 = (pSVar5->fields).method_ptr;
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      uStack_50 = 0x44d924a;
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057aeb5b == '\0') goto label_044d9268;
label_044d9071:
      uVar18 = "Sending request...";
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto label_044d9081;
label_044d9292:
      uStack_50 = 0x44d929d;
      il2cpp_runtime_helper_02337ed0();
      lVar3 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
      pSVar10 = reason;
    }
    else {
      if (g_data_057aeb5b != '\0') goto label_044d9071;
label_044d9268:
      uVar18 = "Sending request...";
      uStack_50 = 0x44d9274;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      g_data_057aeb5b = '\x01';
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto label_044d9292;
label_044d9081:
      lVar3 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
    }
    if (lVar3 != 0) {
      uStack_50 = 0x44d909f;
      (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),uVar18,*(undefined8 *)(lVar3 + 0x28));
    }
    if (lVar2 != 0) {
      uStack_50 = 0x44d90b2;
      (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),uVar18,*(undefined8 *)(lVar2 + 0x28));
    }
    uStack_50 = 0x44d90c1;
    unaff_R13 = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_Dictionary_byte_object);
    uStack_50 = 0x44d90db;
    System_Action_object____ctor();
    uStack_50 = 0x44d90ea;
    pSVar6 = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
    pMVar12 = (MethodInfo *)0x0;
    uStack_50 = 0x44d9104;
    System_Action___ctor();
    uStack_50 = 0x44d9117;
    localStatus = (System_Action_string__o *)
                  Anticheat_ModeratorManager__TrackRequest(10.0,unaff_R13,pSVar6,method_01);
    uStack_50 = 0x44d9129;
    pSVar5 = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_byte_object);
    uStack_50 = 0x44d913e;
    pSVar14 = MethodInfo_Dictionary_2_System_Byte_System_Object;
    pSVar16 = pSVar5;
    System_Collections_Generic_Dictionary_byte__object____ctor
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar5,
               (MethodInfo_304B1A0 *)MethodInfo_Dictionary_2_System_Byte_System_Object);
    if (pSVar5 != (System_Action_string__o *)0x0) {
      uStack_50 = 0x44d915f;
      System_Collections_Generic_Dictionary_byte__object___Add
                ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar5,'\0',
                 (Il2CppObject *)localStatus,(MethodInfo_304BE20 *)MethodInfo_Void_Add);
      aiStack_3c[2] = ipBan & 0xffU | 2;
      uStack_50 = 0x44d917f;
      pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,aiStack_3c + 2);
      uStack_50 = 0x44d9193;
      System_Collections_Generic_Dictionary_byte__object___Add
                ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar5,'\x01',pIVar7,
                 (MethodInfo_304BE20 *)MethodInfo_Void_Add);
      aiStack_3c[1] = 0;
      uStack_50 = 0x44d91a9;
      pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,aiStack_3c + 1);
      uStack_50 = 0x44d91bd;
      System_Collections_Generic_Dictionary_byte__object___Add
                ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar5,'\x02',pIVar7,
                 (MethodInfo_304BE20 *)MethodInfo_Void_Add);
      aiStack_3c[0] = iStack_40;
      uStack_50 = 0x44d91d3;
      pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,aiStack_3c);
      uStack_50 = 0x44d91e7;
      System_Collections_Generic_Dictionary_byte__object___Add
                ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar5,'\x03',pIVar7,
                 (MethodInfo_304BE20 *)MethodInfo_Void_Add);
      if (reason == (System_String_o *)0x0) {
        reason = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      }
      uStack_50 = 0x44d9211;
      System_Collections_Generic_Dictionary_byte__object___Add
                ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar5,'\x04',(Il2CppObject *)reason
                 ,(MethodInfo_304BE20 *)MethodInfo_Void_Add);
      pMVar12 = extraout_RDX;
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        uStack_50 = 0x44d9229;
        il2cpp_runtime_helper_02337ed0();
        pMVar12 = extraout_RDX_00;
      }
      uStack_50 = 0x44d9236;
      Anticheat_ModeratorManager__RaiseModEvent
                (0xb7,(System_Collections_Generic_Dictionary_byte__object__o *)pSVar5,pMVar12);
      return;
    }
  }
  uStack_50 = 0x44d92c2;
  il2cpp_runtime_helper_022b2c90();
  uVar19 = (ulong)pSVar14 & 0xffffffff;
  method_00 = pMVar12;
  pSStack_78 = localStatus;
  pSStack_70 = reason;
  pSStack_68 = unaff_R13;
  pSStack_60 = pSVar10;
  uStack_58 = (ulong)(uint)ipBan;
  uStack_50 = 0;
  if (g_data_057aeb6b == '\0') {
    pSStack_98 = (System_Int32_array *)0x44d9303;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_Dictionary_byte_object);
    pSStack_98 = (System_Int32_array *)0x44d930f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    pSStack_98 = (System_Int32_array *)0x44d931b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pSStack_98 = (System_Int32_array *)0x44d9327;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Byte_System_Object);
    pSStack_98 = (System_Int32_array *)0x44d9333;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_byte_object);
    pSStack_98 = (System_Int32_array *)0x44d933f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    pSStack_98 = (System_Int32_array *)0x44d934b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RegionBanPlayerEntry_b__0);
    pSStack_98 = (System_Int32_array *)0x44d9357;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RegionBanPlayerEntry_b__1);
    pSStack_98 = (System_Int32_array *)0x44d9363;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass97_0);
    pSStack_98 = (System_Int32_array *)0x44d936f;
    il2cpp_runtime_helper_023445d0(&"Player has no session ID to ban.");
    pSStack_98 = (System_Int32_array *)0x44d937b;
    il2cpp_runtime_helper_023445d0(&"Invalid player entry.");
    pSStack_98 = (System_Int32_array *)0x44d9387;
    il2cpp_runtime_helper_023445d0(&"Sending request...");
    pSStack_98 = (System_Int32_array *)0x44d9393;
    il2cpp_runtime_helper_023445d0(&"Player has no IP address to ban.");
    g_data_057aeb6b = '\x01';
  }
  pSStack_98 = (System_Int32_array *)0x44d93a9;
  __this = (System_Collections_Generic_Dictionary_byte__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass97_0);
  pSVar15 = (System_Int32_array *)0x0;
  pSStack_98 = (System_Int32_array *)0x44d93b6;
  pSVar17 = __this;
  Anticheat_ModeratorManager___c__DisplayClass97_0___ctor
            ((Anticheat_ModeratorManager___c__DisplayClass97_0_o *)__this,(MethodInfo *)0x0);
  pSVar9 = extraout_RDX_01;
  if (__this != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
    pSVar13 = &__this->fields;
    (__this->fields)._buckets = extraout_RDX_01;
    pSStack_98 = (System_Int32_array *)0x44d93d5;
    il2cpp_runtime_helper_022b4080(pSVar13);
    if (pSVar16 == (System_Action_string__o *)0x0) {
      pSVar14 = pSVar13->_buckets;
      uVar18 = "Invalid player entry.";
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        pSStack_98 = (System_Int32_array *)0x44d9442;
        il2cpp_runtime_helper_02337ed0();
        uVar18 = "Invalid player entry.";
      }
joined_r0x044d97fe:
      if (g_data_057aeb5b == '\0') {
        pSStack_98 = (System_Int32_array *)0x44d9461;
        il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
        g_data_057aeb5b = '\x01';
      }
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        pSStack_98 = (System_Int32_array *)0x44d950d;
        il2cpp_runtime_helper_02337ed0();
        lVar2 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
      }
      else {
        lVar2 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
      }
      if (lVar2 != 0) {
        pSStack_98 = (System_Int32_array *)0x44d9496;
        (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),uVar18,*(undefined8 *)(lVar2 + 0x28));
      }
      if (pSVar14 == (System_Int32_array *)0x0) {
        return;
      }
      (*(code *)pSVar14->max_length)
                (*(intptr_t *)((long)pSVar14->m_Items + 0x20),uVar18,*(intptr_t *)((long)pSVar14->m_Items + 8)
                );
      return;
    }
    if ((char)uVar19 == '\0') {
      pSStack_98 = (System_Int32_array *)0x44d94ca;
      bVar4 = System_String__IsNullOrEmpty((System_String_o *)(pSVar16->fields).method_ptr,(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        pSVar14 = pSVar13->_buckets;
        uVar18 = "Player has no session ID to ban.";
        if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
          pSStack_98 = (System_Int32_array *)0x44d97ed;
          il2cpp_runtime_helper_02337ed0();
          uVar18 = "Player has no session ID to ban.";
        }
        goto joined_r0x044d97fe;
      }
      iStack_84 = 1;
      pSVar16 = (System_Action_string__o *)(pSVar16->fields).method_ptr;
      pSVar9 = pSVar13->_buckets;
      iVar1 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
    }
    else {
      pSStack_98 = (System_Int32_array *)0x44d93ef;
      bVar4 = System_String__IsNullOrEmpty((System_String_o *)(pSVar16->fields).invoke_impl,(MethodInfo *)0x0)
      ;
      if ((char)bVar4 != '\0') {
        pSVar14 = pSVar13->_buckets;
        uVar18 = "Player has no IP address to ban.";
        if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
          pSStack_98 = (System_Int32_array *)0x44d9412;
          il2cpp_runtime_helper_02337ed0();
          uVar18 = "Player has no IP address to ban.";
        }
        goto joined_r0x044d97fe;
      }
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        pSStack_98 = (System_Int32_array *)0x44d980e;
        il2cpp_runtime_helper_02337ed0();
        if (g_data_057ae4d9 == '\0') goto label_044d981b;
label_044d954e:
        iVar1 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
      }
      else {
        if (g_data_057ae4d9 != '\0') goto label_044d954e;
label_044d981b:
        pSStack_98 = (System_Int32_array *)0x44d9827;
        il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
        g_data_057ae4d9 = '\x01';
        iVar1 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
      }
      if (iVar1 == 0) {
        pSStack_98 = (System_Int32_array *)0x44d9844;
        il2cpp_runtime_helper_02337ed0();
      }
      iStack_84 = (uint)(*(char *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 8) == '\0') * 2 + 2;
      pSVar16 = (System_Action_string__o *)(pSVar16->fields).invoke_impl;
      pSVar9 = pSVar13->_buckets;
      iVar1 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
    }
    if (iVar1 == 0) {
      pSStack_98 = (System_Int32_array *)0x44d95ba;
      il2cpp_runtime_helper_02337ed0();
    }
    uVar18 = "Sending request...";
    if (g_data_057aeb5b == '\0') {
      pSStack_98 = (System_Int32_array *)0x44d97a2;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      g_data_057aeb5b = '\x01';
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto label_044d97c0;
label_044d95e8:
      lVar2 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
    }
    else {
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto label_044d95e8;
label_044d97c0:
      pSStack_98 = (System_Int32_array *)0x44d97c5;
      il2cpp_runtime_helper_02337ed0();
      lVar2 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
    }
    if (lVar2 != 0) {
      pSStack_98 = (System_Int32_array *)0x44d9606;
      (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),uVar18,*(undefined8 *)(lVar2 + 0x28));
    }
    if (pSVar9 != (System_Int32_array *)0x0) {
      pSStack_98 = (System_Int32_array *)0x44d9619;
      (*(code *)pSVar9->max_length)
                (*(intptr_t *)((long)pSVar9->m_Items + 0x20),uVar18,*(intptr_t *)((long)pSVar9->m_Items + 8));
    }
    pSStack_98 = (System_Int32_array *)0x44d9628;
    pSVar8 = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_Dictionary_byte_object);
    pSStack_98 = (System_Int32_array *)0x44d9642;
    System_Action_object____ctor();
    pSStack_98 = (System_Int32_array *)0x44d9651;
    pSVar6 = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
    method_00 = (MethodInfo *)0x0;
    pSStack_98 = (System_Int32_array *)0x44d966b;
    System_Action___ctor();
    pSStack_98 = (System_Int32_array *)0x44d967e;
    pSVar9 = (System_Int32_array *)Anticheat_ModeratorManager__TrackRequest(10.0,pSVar8,pSVar6,method_02);
    pSStack_98 = (System_Int32_array *)0x44d9690;
    __this_00 = (System_Collections_Generic_Dictionary_byte__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_byte_object);
    pSStack_98 = (System_Int32_array *)0x44d96a5;
    pSVar15 = MethodInfo_Dictionary_2_System_Byte_System_Object;
    pSVar17 = __this_00;
    System_Collections_Generic_Dictionary_byte__object____ctor(__this_00,(MethodInfo_304B1A0 *)MethodInfo_Dictionary_2_System_Byte_System_Object);
    localStatus = (System_Action_string__o *)0x0;
    if (__this_00 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
      pSStack_98 = (System_Int32_array *)0x44d96c6;
      System_Collections_Generic_Dictionary_byte__object___Add
                (__this_00,'\0',(Il2CppObject *)pSVar9,(MethodInfo_304BE20 *)MethodInfo_Void_Add);
      uStack_7c = (uint)pSVar14 & 0xff | 2;
      pSStack_98 = (System_Int32_array *)0x44d96e6;
      pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_7c);
      pSStack_98 = (System_Int32_array *)0x44d96fa;
      System_Collections_Generic_Dictionary_byte__object___Add
                (__this_00,'\x01',pIVar7,(MethodInfo_304BE20 *)MethodInfo_Void_Add);
      iStack_80 = iStack_84;
      pSStack_98 = (System_Int32_array *)0x44d9710;
      pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_80);
      pSStack_98 = (System_Int32_array *)0x44d9724;
      System_Collections_Generic_Dictionary_byte__object___Add
                (__this_00,'\x02',pIVar7,(MethodInfo_304BE20 *)MethodInfo_Void_Add);
      pSStack_98 = (System_Int32_array *)0x44d9738;
      System_Collections_Generic_Dictionary_byte__object___Add
                (__this_00,'\x03',(Il2CppObject *)pSVar16,(MethodInfo_304BE20 *)MethodInfo_Void_Add);
      if (pMVar12 == (MethodInfo *)0x0) {
        pMVar12 = (MethodInfo *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      }
      pSStack_98 = (System_Int32_array *)0x44d9762;
      System_Collections_Generic_Dictionary_byte__object___Add
                (__this_00,'\x04',(Il2CppObject *)pMVar12,(MethodInfo_304BE20 *)MethodInfo_Void_Add);
      pMVar12 = extraout_RDX_02;
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        pSStack_98 = (System_Int32_array *)0x44d977a;
        il2cpp_runtime_helper_02337ed0();
        pMVar12 = extraout_RDX_03;
      }
      pSStack_98 = (System_Int32_array *)0x44d9787;
      Anticheat_ModeratorManager__RaiseModEvent(0xb7,__this_00,pMVar12);
      return;
    }
  }
  pSStack_98 = (System_Int32_array *)0x44d9852;
  auVar20 = il2cpp_runtime_helper_022b2c90();
  pIVar7 = auVar20._8_8_;
  uStack_c8 = auVar20._0_8_;
  pSStack_c0 = localStatus;
  pSStack_b8 = pSVar16;
  pSStack_b0 = __this;
  pMStack_a8 = pMVar12;
  uStack_a0 = uVar19;
  pSStack_98 = pSVar9;
  if (g_data_057aeb6c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_Dictionary_byte_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Byte_System_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_byte_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RegionUnban_b__0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RegionUnban_b__1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass98_0);
    il2cpp_runtime_helper_023445d0(&"Sending request...");
    g_data_057aeb6c = '\x01';
  }
  pSVar5 = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass98_0);
  pSVar16 = pSVar5;
  Anticheat_ModeratorManager___c__DisplayClass98_0___ctor
            ((Anticheat_ModeratorManager___c__DisplayClass98_0_o *)pSVar5,(MethodInfo *)0x0);
  if (pSVar5 == (System_Action_string__o *)0x0) goto label_044d9b98;
  (pSVar5->fields).method_ptr = (intptr_t)pSVar15;
  il2cpp_runtime_helper_022b4080(&pSVar5->fields,pSVar15);
  pSVar14 = (System_Int32_array *)(pSVar5->fields).method_ptr;
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057aeb5b == '\0') goto label_044d9b52;
label_044d9967:
    uVar18 = "Sending request...";
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto label_044d9978;
label_044d9b76:
    il2cpp_runtime_helper_02337ed0();
    lVar2 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
  }
  else {
    if (g_data_057aeb5b != '\0') goto label_044d9967;
label_044d9b52:
    uVar18 = "Sending request...";
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb5b = '\x01';
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto label_044d9b76;
label_044d9978:
    lVar2 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
  }
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),uVar18,*(undefined8 *)(lVar2 + 0x28));
  }
  if (pSVar14 != (System_Int32_array *)0x0) {
    (*(code *)pSVar14->max_length)
              (*(intptr_t *)((long)pSVar14->m_Items + 0x20),uVar18,*(intptr_t *)((long)pSVar14->m_Items + 8));
  }
  pSVar8 = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_Dictionary_byte_object);
  System_Action_object____ctor();
  pSVar6 = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
  method_00 = (MethodInfo *)0x0;
  System_Action___ctor();
  pSVar10 = Anticheat_ModeratorManager__TrackRequest(10.0,pSVar8,pSVar6,method_03);
  pSVar5 = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_byte_object);
  pSVar16 = pSVar5;
  System_Collections_Generic_Dictionary_byte__object____ctor
            ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar5,
             (MethodInfo_304B1A0 *)MethodInfo_Dictionary_2_System_Byte_System_Object);
  if ((pSVar5 != (System_Action_string__o *)0x0) &&
     (method_00 = MethodInfo_Void_Add, pSVar16 = pSVar5,
     System_Collections_Generic_Dictionary_byte__object___Add
               ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar5,'\0',(Il2CppObject *)pSVar10,
                (MethodInfo_304BE20 *)MethodInfo_Void_Add),
     pSVar17 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0)) {
    uStack_c8._4_4_ = 5 - (uint)((char)(pSVar17->fields)._count == '\0');
    pIVar11 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_c8 + 4);
    System_Collections_Generic_Dictionary_byte__object___Add
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar5,'\x01',pIVar11,
               (MethodInfo_304BE20 *)MethodInfo_Void_Add);
    uStack_c8 = CONCAT44(uStack_c8._4_4_,3);
    pIVar11 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_c8);
    System_Collections_Generic_Dictionary_byte__object___Add
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar5,'\x02',pIVar11,
               (MethodInfo_304BE20 *)MethodInfo_Void_Add);
    System_Collections_Generic_Dictionary_byte__object___Add
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar5,'\x03',
               &((pSVar17->fields)._buckets)->obj,(MethodInfo_304BE20 *)MethodInfo_Void_Add);
    if (pIVar7 == (Il2CppObject *)0x0) {
      pIVar7 = (Il2CppObject *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    System_Collections_Generic_Dictionary_byte__object___Add
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar5,'\x04',pIVar7,
               (MethodInfo_304BE20 *)MethodInfo_Void_Add);
    pMVar12 = extraout_RDX_04;
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pMVar12 = extraout_RDX_05;
    }
    Anticheat_ModeratorManager__RaiseModEvent
              (0xb7,(System_Collections_Generic_Dictionary_byte__object__o *)pSVar5,pMVar12);
    return;
  }
label_044d9b98:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeb6d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb6d = '\x01';
  }
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Anticheat_ModeratorManager__RequestRegionBanList_43d9bf0(0,0x32,pSVar16,method_00);
  return;
}


// Anticheat.ModeratorManager$$RegionBanPlayerEntry
// il2cpp: void Anticheat_ModeratorManager__RegionBanPlayerEntry (Anticheat_PlayerEntry_o* player, bool ipBan, System_Action_string__o* localStatus, System_String_o* reason, const MethodInfo* method);
// 0x44d92d0

void Anticheat_ModeratorManager__RegionBanPlayerEntry
               (Anticheat_PlayerEntry_o *player,bool_conflict ipBan,System_Action_string__o *localStatus,
               System_String_o *reason,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  bool_conflict bVar3;
  System_Collections_Generic_Dictionary_byte__object__o *__this;
  System_Action_Dictionary_byte__object___o *pSVar4;
  System_Action_o *pSVar5;
  System_Collections_Generic_Dictionary_byte__object__o *__this_00;
  Il2CppObject *pIVar6;
  System_Action_string__o *pSVar7;
  System_String_o *value;
  Il2CppObject *pIVar8;
  MethodInfo *pMVar9;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  undefined8 unaff_RBX;
  System_Collections_Generic_Dictionary_byte__object__Fields *pSVar10;
  System_Int32_array *pSVar11;
  System_Collections_Generic_Dictionary_byte__object__o *pSVar12;
  System_Action_string__o *localStatus_00;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  Anticheat_PlayerEntry_o *pAStack_70;
  System_Collections_Generic_Dictionary_byte__object__o *pSStack_68;
  System_String_o *pSStack_60;
  ulong uStack_58;
  System_Action_string__o *pSStack_50;
  int iStack_3c;
  int iStack_38;
  uint uStack_34;
  
  pMVar9 = (MethodInfo *)reason;
  if (g_data_057aeb6b == '\0') {
    pSStack_50 = (System_Action_string__o *)0x44d9303;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_Dictionary_byte_object);
    pSStack_50 = (System_Action_string__o *)0x44d930f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    pSStack_50 = (System_Action_string__o *)0x44d931b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pSStack_50 = (System_Action_string__o *)0x44d9327;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Byte_System_Object);
    pSStack_50 = (System_Action_string__o *)0x44d9333;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_byte_object);
    pSStack_50 = (System_Action_string__o *)0x44d933f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    pSStack_50 = (System_Action_string__o *)0x44d934b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RegionBanPlayerEntry_b__0);
    pSStack_50 = (System_Action_string__o *)0x44d9357;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RegionBanPlayerEntry_b__1);
    pSStack_50 = (System_Action_string__o *)0x44d9363;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass97_0);
    pSStack_50 = (System_Action_string__o *)0x44d936f;
    il2cpp_runtime_helper_023445d0(&"Player has no session ID to ban.");
    pSStack_50 = (System_Action_string__o *)0x44d937b;
    il2cpp_runtime_helper_023445d0(&"Invalid player entry.");
    pSStack_50 = (System_Action_string__o *)0x44d9387;
    il2cpp_runtime_helper_023445d0(&"Sending request...");
    pSStack_50 = (System_Action_string__o *)0x44d9393;
    il2cpp_runtime_helper_023445d0(&"Player has no IP address to ban.");
    g_data_057aeb6b = '\x01';
  }
  pSStack_50 = (System_Action_string__o *)0x44d93a9;
  __this = (System_Collections_Generic_Dictionary_byte__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass97_0);
  pSVar11 = (System_Int32_array *)0x0;
  pSStack_50 = (System_Action_string__o *)0x44d93b6;
  pSVar12 = __this;
  Anticheat_ModeratorManager___c__DisplayClass97_0___ctor
            ((Anticheat_ModeratorManager___c__DisplayClass97_0_o *)__this,(MethodInfo *)0x0);
  if (__this != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
    pSVar10 = &__this->fields;
    (__this->fields)._buckets = (System_Int32_array *)localStatus;
    pSStack_50 = (System_Action_string__o *)0x44d93d5;
    il2cpp_runtime_helper_022b4080(pSVar10);
    if (player == (Anticheat_PlayerEntry_o *)0x0) {
      pSVar11 = pSVar10->_buckets;
      uVar13 = "Invalid player entry.";
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        pSStack_50 = (System_Action_string__o *)0x44d9442;
        il2cpp_runtime_helper_02337ed0();
        uVar13 = "Invalid player entry.";
      }
joined_r0x044d97fe:
      if (g_data_057aeb5b == '\0') {
        pSStack_50 = (System_Action_string__o *)0x44d9461;
        il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
        g_data_057aeb5b = '\x01';
      }
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        pSStack_50 = (System_Action_string__o *)0x44d950d;
        il2cpp_runtime_helper_02337ed0();
        lVar2 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
      }
      else {
        lVar2 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
      }
      if (lVar2 != 0) {
        pSStack_50 = (System_Action_string__o *)0x44d9496;
        (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),uVar13,*(undefined8 *)(lVar2 + 0x28));
      }
      if (pSVar11 == (System_Int32_array *)0x0) {
        return;
      }
      (*(code *)pSVar11->max_length)
                (*(intptr_t *)((long)pSVar11->m_Items + 0x20),uVar13,*(intptr_t *)((long)pSVar11->m_Items + 8)
                );
      return;
    }
    if ((char)ipBan == '\0') {
      pSStack_50 = (System_Action_string__o *)0x44d94ca;
      bVar3 = System_String__IsNullOrEmpty((player->fields).SessionId,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        pSVar11 = pSVar10->_buckets;
        uVar13 = "Player has no session ID to ban.";
        if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
          pSStack_50 = (System_Action_string__o *)0x44d97ed;
          il2cpp_runtime_helper_02337ed0();
          uVar13 = "Player has no session ID to ban.";
        }
        goto joined_r0x044d97fe;
      }
      iStack_3c = 1;
      player = (Anticheat_PlayerEntry_o *)(player->fields).SessionId;
      pSVar11 = pSVar10->_buckets;
      iVar1 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
    }
    else {
      pSStack_50 = (System_Action_string__o *)0x44d93ef;
      bVar3 = System_String__IsNullOrEmpty((player->fields).IPAddress,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        pSVar11 = pSVar10->_buckets;
        uVar13 = "Player has no IP address to ban.";
        if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
          pSStack_50 = (System_Action_string__o *)0x44d9412;
          il2cpp_runtime_helper_02337ed0();
          uVar13 = "Player has no IP address to ban.";
        }
        goto joined_r0x044d97fe;
      }
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        pSStack_50 = (System_Action_string__o *)0x44d980e;
        il2cpp_runtime_helper_02337ed0();
        if (g_data_057ae4d9 == '\0') goto label_044d981b;
label_044d954e:
        iVar1 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
      }
      else {
        if (g_data_057ae4d9 != '\0') goto label_044d954e;
label_044d981b:
        pSStack_50 = (System_Action_string__o *)0x44d9827;
        il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
        g_data_057ae4d9 = '\x01';
        iVar1 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
      }
      if (iVar1 == 0) {
        pSStack_50 = (System_Action_string__o *)0x44d9844;
        il2cpp_runtime_helper_02337ed0();
      }
      iStack_3c = (uint)(*(char *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 8) == '\0') * 2 + 2;
      player = (Anticheat_PlayerEntry_o *)(player->fields).IPAddress;
      pSVar11 = pSVar10->_buckets;
      iVar1 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
    }
    if (iVar1 == 0) {
      pSStack_50 = (System_Action_string__o *)0x44d95ba;
      il2cpp_runtime_helper_02337ed0();
    }
    uVar13 = "Sending request...";
    if (g_data_057aeb5b == '\0') {
      pSStack_50 = (System_Action_string__o *)0x44d97a2;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      g_data_057aeb5b = '\x01';
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto label_044d97c0;
label_044d95e8:
      lVar2 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
    }
    else {
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto label_044d95e8;
label_044d97c0:
      pSStack_50 = (System_Action_string__o *)0x44d97c5;
      il2cpp_runtime_helper_02337ed0();
      lVar2 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
    }
    if (lVar2 != 0) {
      pSStack_50 = (System_Action_string__o *)0x44d9606;
      (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),uVar13,*(undefined8 *)(lVar2 + 0x28));
    }
    if (pSVar11 != (System_Int32_array *)0x0) {
      pSStack_50 = (System_Action_string__o *)0x44d9619;
      (*(code *)pSVar11->max_length)
                (*(intptr_t *)((long)pSVar11->m_Items + 0x20),uVar13,*(intptr_t *)((long)pSVar11->m_Items + 8)
                );
    }
    pSStack_50 = (System_Action_string__o *)0x44d9628;
    pSVar4 = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_Dictionary_byte_object);
    pSStack_50 = (System_Action_string__o *)0x44d9642;
    System_Action_object____ctor();
    pSStack_50 = (System_Action_string__o *)0x44d9651;
    pSVar5 = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
    pMVar9 = (MethodInfo *)0x0;
    pSStack_50 = (System_Action_string__o *)0x44d966b;
    System_Action___ctor();
    pSStack_50 = (System_Action_string__o *)0x44d967e;
    localStatus = (System_Action_string__o *)
                  Anticheat_ModeratorManager__TrackRequest(10.0,pSVar4,pSVar5,method_00);
    pSStack_50 = (System_Action_string__o *)0x44d9690;
    __this_00 = (System_Collections_Generic_Dictionary_byte__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_byte_object);
    pSStack_50 = (System_Action_string__o *)0x44d96a5;
    pSVar11 = MethodInfo_Dictionary_2_System_Byte_System_Object;
    pSVar12 = __this_00;
    System_Collections_Generic_Dictionary_byte__object____ctor(__this_00,(MethodInfo_304B1A0 *)MethodInfo_Dictionary_2_System_Byte_System_Object);
    unaff_RBX = 0;
    if (__this_00 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
      pSStack_50 = (System_Action_string__o *)0x44d96c6;
      System_Collections_Generic_Dictionary_byte__object___Add
                (__this_00,'\0',(Il2CppObject *)localStatus,(MethodInfo_304BE20 *)MethodInfo_Void_Add);
      uStack_34 = ipBan & 0xffU | 2;
      pSStack_50 = (System_Action_string__o *)0x44d96e6;
      pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_34);
      pSStack_50 = (System_Action_string__o *)0x44d96fa;
      System_Collections_Generic_Dictionary_byte__object___Add
                (__this_00,'\x01',pIVar6,(MethodInfo_304BE20 *)MethodInfo_Void_Add);
      iStack_38 = iStack_3c;
      pSStack_50 = (System_Action_string__o *)0x44d9710;
      pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_38);
      pSStack_50 = (System_Action_string__o *)0x44d9724;
      System_Collections_Generic_Dictionary_byte__object___Add
                (__this_00,'\x02',pIVar6,(MethodInfo_304BE20 *)MethodInfo_Void_Add);
      pSStack_50 = (System_Action_string__o *)0x44d9738;
      System_Collections_Generic_Dictionary_byte__object___Add
                (__this_00,'\x03',(Il2CppObject *)player,(MethodInfo_304BE20 *)MethodInfo_Void_Add);
      if (reason == (System_String_o *)0x0) {
        reason = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      }
      pSStack_50 = (System_Action_string__o *)0x44d9762;
      System_Collections_Generic_Dictionary_byte__object___Add
                (__this_00,'\x04',(Il2CppObject *)reason,(MethodInfo_304BE20 *)MethodInfo_Void_Add);
      pMVar9 = extraout_RDX;
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        pSStack_50 = (System_Action_string__o *)0x44d977a;
        il2cpp_runtime_helper_02337ed0();
        pMVar9 = extraout_RDX_00;
      }
      pSStack_50 = (System_Action_string__o *)0x44d9787;
      Anticheat_ModeratorManager__RaiseModEvent(0xb7,__this_00,pMVar9);
      return;
    }
  }
  pSStack_50 = (System_Action_string__o *)0x44d9852;
  auVar14 = il2cpp_runtime_helper_022b2c90();
  pIVar6 = auVar14._8_8_;
  uStack_80 = auVar14._0_8_;
  uStack_78 = unaff_RBX;
  pAStack_70 = player;
  pSStack_68 = __this;
  pSStack_60 = reason;
  uStack_58 = (ulong)(uint)ipBan;
  pSStack_50 = localStatus;
  if (g_data_057aeb6c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_Dictionary_byte_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Byte_System_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_byte_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RegionUnban_b__0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RegionUnban_b__1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass98_0);
    il2cpp_runtime_helper_023445d0(&"Sending request...");
    g_data_057aeb6c = '\x01';
  }
  pSVar7 = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass98_0);
  localStatus_00 = pSVar7;
  Anticheat_ModeratorManager___c__DisplayClass98_0___ctor
            ((Anticheat_ModeratorManager___c__DisplayClass98_0_o *)pSVar7,(MethodInfo *)0x0);
  if (pSVar7 == (System_Action_string__o *)0x0) goto label_044d9b98;
  (pSVar7->fields).method_ptr = (intptr_t)pSVar11;
  il2cpp_runtime_helper_022b4080(&pSVar7->fields,pSVar11);
  pSVar11 = (System_Int32_array *)(pSVar7->fields).method_ptr;
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057aeb5b == '\0') goto label_044d9b52;
label_044d9967:
    uVar13 = "Sending request...";
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto label_044d9978;
label_044d9b76:
    il2cpp_runtime_helper_02337ed0();
    lVar2 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
  }
  else {
    if (g_data_057aeb5b != '\0') goto label_044d9967;
label_044d9b52:
    uVar13 = "Sending request...";
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb5b = '\x01';
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto label_044d9b76;
label_044d9978:
    lVar2 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
  }
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),uVar13,*(undefined8 *)(lVar2 + 0x28));
  }
  if (pSVar11 != (System_Int32_array *)0x0) {
    (*(code *)pSVar11->max_length)
              (*(intptr_t *)((long)pSVar11->m_Items + 0x20),uVar13,*(intptr_t *)((long)pSVar11->m_Items + 8));
  }
  pSVar4 = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_Dictionary_byte_object);
  System_Action_object____ctor();
  pSVar5 = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
  pMVar9 = (MethodInfo *)0x0;
  System_Action___ctor();
  value = Anticheat_ModeratorManager__TrackRequest(10.0,pSVar4,pSVar5,method_01);
  pSVar7 = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_byte_object);
  localStatus_00 = pSVar7;
  System_Collections_Generic_Dictionary_byte__object____ctor
            ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar7,
             (MethodInfo_304B1A0 *)MethodInfo_Dictionary_2_System_Byte_System_Object);
  if ((pSVar7 != (System_Action_string__o *)0x0) &&
     (pMVar9 = MethodInfo_Void_Add, localStatus_00 = pSVar7,
     System_Collections_Generic_Dictionary_byte__object___Add
               ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar7,'\0',(Il2CppObject *)value,
                (MethodInfo_304BE20 *)MethodInfo_Void_Add),
     pSVar12 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0)) {
    uStack_80._4_4_ = 5 - (uint)((char)(pSVar12->fields)._count == '\0');
    pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_80 + 4);
    System_Collections_Generic_Dictionary_byte__object___Add
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar7,'\x01',pIVar8,
               (MethodInfo_304BE20 *)MethodInfo_Void_Add);
    uStack_80 = CONCAT44(uStack_80._4_4_,3);
    pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_80);
    System_Collections_Generic_Dictionary_byte__object___Add
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar7,'\x02',pIVar8,
               (MethodInfo_304BE20 *)MethodInfo_Void_Add);
    System_Collections_Generic_Dictionary_byte__object___Add
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar7,'\x03',
               &((pSVar12->fields)._buckets)->obj,(MethodInfo_304BE20 *)MethodInfo_Void_Add);
    if (pIVar6 == (Il2CppObject *)0x0) {
      pIVar6 = (Il2CppObject *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    System_Collections_Generic_Dictionary_byte__object___Add
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar7,'\x04',pIVar6,
               (MethodInfo_304BE20 *)MethodInfo_Void_Add);
    pMVar9 = extraout_RDX_01;
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pMVar9 = extraout_RDX_02;
    }
    Anticheat_ModeratorManager__RaiseModEvent
              (0xb7,(System_Collections_Generic_Dictionary_byte__object__o *)pSVar7,pMVar9);
    return;
  }
label_044d9b98:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeb6d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb6d = '\x01';
  }
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Anticheat_ModeratorManager__RequestRegionBanList_43d9bf0(0,0x32,localStatus_00,pMVar9);
  return;
}


// Anticheat.ModeratorManager$$RegionUnban
// il2cpp: void Anticheat_ModeratorManager__RegionUnban (Anticheat_RegionBanEntry_o* banEntry, System_Action_string__o* localStatus, System_String_o* reason, const MethodInfo* method);
// 0x44d9860

void Anticheat_ModeratorManager__RegionUnban
               (Anticheat_RegionBanEntry_o *banEntry,System_Action_string__o *localStatus,
               System_String_o *reason,MethodInfo *method)

{
  System_Int32_array *pSVar1;
  long lVar2;
  System_Action_string__o *pSVar3;
  System_Action_Dictionary_byte__object___o *onResponse;
  System_Action_o *onTimeout;
  System_String_o *value;
  Il2CppObject *pIVar4;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_01;
  System_Action_string__o *localStatus_00;
  undefined8 uVar5;
  undefined4 uStack_38;
  int iStack_34;
  
  if (g_data_057aeb6c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_Dictionary_byte_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Byte_System_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_byte_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RegionUnban_b__0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RegionUnban_b__1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass98_0);
    il2cpp_runtime_helper_023445d0(&"Sending request...");
    g_data_057aeb6c = '\x01';
  }
  pSVar3 = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass98_0);
  localStatus_00 = pSVar3;
  Anticheat_ModeratorManager___c__DisplayClass98_0___ctor
            ((Anticheat_ModeratorManager___c__DisplayClass98_0_o *)pSVar3,(MethodInfo *)0x0);
  if (pSVar3 == (System_Action_string__o *)0x0) goto label_044d9b98;
  (pSVar3->fields).method_ptr = (intptr_t)localStatus;
  il2cpp_runtime_helper_022b4080(&pSVar3->fields,localStatus);
  pSVar1 = (System_Int32_array *)(pSVar3->fields).method_ptr;
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057aeb5b == '\0') goto label_044d9b52;
label_044d9967:
    uVar5 = "Sending request...";
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto label_044d9978;
label_044d9b76:
    il2cpp_runtime_helper_02337ed0();
    lVar2 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
  }
  else {
    if (g_data_057aeb5b != '\0') goto label_044d9967;
label_044d9b52:
    uVar5 = "Sending request...";
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb5b = '\x01';
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto label_044d9b76;
label_044d9978:
    lVar2 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
  }
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),uVar5,*(undefined8 *)(lVar2 + 0x28));
  }
  if (pSVar1 != (System_Int32_array *)0x0) {
    (*(code *)pSVar1->max_length)
              (*(intptr_t *)((long)pSVar1->m_Items + 0x20),uVar5,*(intptr_t *)((long)pSVar1->m_Items + 8));
  }
  onResponse = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_Dictionary_byte_object);
  System_Action_object____ctor();
  onTimeout = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
  method = (MethodInfo *)0x0;
  System_Action___ctor();
  value = Anticheat_ModeratorManager__TrackRequest(10.0,onResponse,onTimeout,method_00);
  pSVar3 = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_byte_object);
  localStatus_00 = pSVar3;
  System_Collections_Generic_Dictionary_byte__object____ctor
            ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar3,MethodInfo_Dictionary_2_System_Byte_System_Object);
  if ((pSVar3 != (System_Action_string__o *)0x0) &&
     (method = MethodInfo_Void_Add, localStatus_00 = pSVar3,
     System_Collections_Generic_Dictionary_byte__object___Add
               ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar3,'\0',(Il2CppObject *)value,
                (MethodInfo_304BE20 *)MethodInfo_Void_Add), banEntry != (Anticheat_RegionBanEntry_o *)0x0)) {
    iStack_34 = 5 - (uint)((char)(banEntry->fields).IsIPBan == '\0');
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_34);
    System_Collections_Generic_Dictionary_byte__object___Add
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar3,'\x01',pIVar4,
               (MethodInfo_304BE20 *)MethodInfo_Void_Add);
    _uStack_38 = CONCAT44(iStack_34,3);
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_38);
    System_Collections_Generic_Dictionary_byte__object___Add
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar3,'\x02',pIVar4,
               (MethodInfo_304BE20 *)MethodInfo_Void_Add);
    System_Collections_Generic_Dictionary_byte__object___Add
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar3,'\x03',
               (Il2CppObject *)(banEntry->fields).TargetId,(MethodInfo_304BE20 *)MethodInfo_Void_Add);
    if (reason == (System_String_o *)0x0) {
      reason = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    System_Collections_Generic_Dictionary_byte__object___Add
              ((System_Collections_Generic_Dictionary_byte__object__o *)pSVar3,'\x04',(Il2CppObject *)reason,
               (MethodInfo_304BE20 *)MethodInfo_Void_Add);
    method_01 = extraout_RDX;
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      method_01 = extraout_RDX_00;
    }
    Anticheat_ModeratorManager__RaiseModEvent
              (0xb7,(System_Collections_Generic_Dictionary_byte__object__o *)pSVar3,method_01);
    return;
  }
label_044d9b98:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeb6d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb6d = '\x01';
  }
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Anticheat_ModeratorManager__RequestRegionBanList_43d9bf0(0,0x32,localStatus_00,method);
  return;
}


// Anticheat.ModeratorManager$$RequestRegionBanList
// il2cpp: void Anticheat_ModeratorManager__RequestRegionBanList (System_Action_string__o* localStatus, const MethodInfo* method);
// 0x44d9ba0

void Anticheat_ModeratorManager__RequestRegionBanList(System_Action_string__o *localStatus,MethodInfo *method)

{
  MethodInfo *in_RCX;
  
  if (g_data_057aeb6d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb6d = '\x01';
  }
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Anticheat_ModeratorManager__RequestRegionBanList_43d9bf0(0,0x32,localStatus,in_RCX);
  return;
}


// Anticheat.ModeratorManager$$RequestRegionBanList
// il2cpp: void Anticheat_ModeratorManager__RequestRegionBanList (int32_t startIndex, int32_t amount, System_Action_string__o* localStatus, const MethodInfo* method);
// 0x44d9bf0

void Anticheat_ModeratorManager__RequestRegionBanList_43d9bf0
               (int32_t startIndex,int32_t amount,System_Action_string__o *localStatus,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  System_Int32_array *pSVar4;
  long lVar5;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar6;
  System_Object_array *pSVar7;
  bool_conflict bVar8;
  System_Collections_Generic_Dictionary_byte__object__o *pSVar9;
  System_Action_o *onTimeout;
  System_String_o *pSVar10;
  Il2CppObject *pIVar11;
  System_Collections_Generic_List_object__o *__this;
  int *piVar12;
  System_Collections_Generic_List_object__o *pSVar13;
  System_Collections_Generic_Dictionary_byte__object__o *__this_00;
  Anticheat_RegionBanEntry_o *__this_01;
  long lVar14;
  int iVar15;
  MethodInfo *method_00;
  MethodInfo *method_01;
  int32_t iVar16;
  System_Collections_Generic_Dictionary_byte__object__o *pSVar17;
  MethodInfo *in_R8;
  System_Action_Dictionary_byte__object___o *unaff_R12;
  undefined8 uVar18;
  System_String_o *unaff_R13;
  ulong uVar19;
  int32_t local_38;
  int32_t local_34;
  
  if (g_data_057aeb6e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_Dictionary_byte_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Byte_System_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_byte_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RequestRegionBanList_b__0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RequestRegionBanList_b__1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass100_0);
    il2cpp_runtime_helper_023445d0(&"Sending request...");
    g_data_057aeb6e = '\x01';
  }
  pSVar9 = (System_Collections_Generic_Dictionary_byte__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass100_0);
  pSVar17 = pSVar9;
  Anticheat_ModeratorManager___c__DisplayClass100_0___ctor
            ((Anticheat_ModeratorManager___c__DisplayClass100_0_o *)pSVar9,(MethodInfo *)0x0);
  if (pSVar9 == (System_Collections_Generic_Dictionary_byte__object__o *)0x0) goto label_044d9ecb;
  (pSVar9->fields)._buckets = (System_Int32_array *)localStatus;
  il2cpp_runtime_helper_022b4080(&pSVar9->fields,localStatus);
  pSVar4 = (pSVar9->fields)._buckets;
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057aeb5b == '\0') goto label_044d9e85;
label_044d9cf7:
    uVar18 = "Sending request...";
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto label_044d9d08;
label_044d9ea9:
    il2cpp_runtime_helper_02337ed0();
    lVar5 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
  }
  else {
    if (g_data_057aeb5b != '\0') goto label_044d9cf7;
label_044d9e85:
    uVar18 = "Sending request...";
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb5b = '\x01';
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto label_044d9ea9;
label_044d9d08:
    lVar5 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
  }
  if (lVar5 != 0) {
    (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),uVar18,*(undefined8 *)(lVar5 + 0x28));
  }
  if (pSVar4 != (System_Int32_array *)0x0) {
    (*(code *)pSVar4->max_length)
              (*(intptr_t *)((long)pSVar4->m_Items + 0x20),uVar18,*(intptr_t *)((long)pSVar4->m_Items + 8));
  }
  unaff_R12 = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_Dictionary_byte_object);
  unaff_R13 = (System_String_o *)0x0;
  System_Action_object____ctor();
  onTimeout = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
  System_Action___ctor();
  pSVar10 = Anticheat_ModeratorManager__TrackRequest(15.0,unaff_R12,onTimeout,method_00);
  pSVar9 = (System_Collections_Generic_Dictionary_byte__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_byte_object);
  pSVar17 = pSVar9;
  System_Collections_Generic_Dictionary_byte__object____ctor(pSVar9,MethodInfo_Dictionary_2_System_Byte_System_Object);
  if (pSVar9 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
    System_Collections_Generic_Dictionary_byte__object___Add(pSVar9,'\0',(Il2CppObject *)pSVar10,MethodInfo_Void_Add)
    ;
    local_34 = 0;
    if (-1 < startIndex) {
      local_34 = startIndex;
    }
    pIVar11 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&local_34);
    System_Collections_Generic_Dictionary_byte__object___Add(pSVar9,'\x01',pIVar11,MethodInfo_Void_Add);
    iVar16 = 1;
    if (0 < amount) {
      iVar16 = amount;
    }
    _local_38 = CONCAT44(local_34,iVar16);
    pIVar11 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&local_38);
    System_Collections_Generic_Dictionary_byte__object___Add(pSVar9,'\x02',pIVar11,MethodInfo_Void_Add);
    Anticheat_ModeratorManager__RaiseModEvent(0xb8,pSVar9,method_01);
    return;
  }
label_044d9ecb:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeb6f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RegionBanEntry_Empty_RegionBanEntry);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RegionBanEntry_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Anticheat_RegionBanEntry);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_RegionBanEntry);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RegionBanEntry);
    g_data_057aeb6f = '\x01';
  }
  lVar5 = MethodInfo_RegionBanEntry_Empty_RegionBanEntry;
  if (pSVar17 == (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
    if (*(long *)(MethodInfo_RegionBanEntry_Empty_RegionBanEntry + 0x38) == 0) {
      il2cpp_runtime_helper_02300a20(MethodInfo_RegionBanEntry_Empty_RegionBanEntry);
      lVar14 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
      bVar2 = *(byte *)(lVar14 + 0x135);
    }
    else {
      lVar14 = *(long *)(*(long *)(MethodInfo_RegionBanEntry_Empty_RegionBanEntry + 0x38) + 0x10);
      bVar2 = *(byte *)(lVar14 + 0x135);
    }
    if ((bVar2 & 1) == 0) {
      lVar14 = il2cpp_runtime_helper_023009c0();
      iVar15 = *(int *)(lVar14 + 0xe4);
    }
    else {
      iVar15 = *(int *)(lVar14 + 0xe4);
    }
    if (iVar15 == 0) {
      il2cpp_runtime_helper_02337ed0();
      lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
      bVar2 = *(byte *)(lVar5 + 0x135);
    }
    else {
      lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
      bVar2 = *(byte *)(lVar5 + 0x135);
    }
    if ((bVar2 & 1) == 0) {
      il2cpp_runtime_helper_023009c0(lVar5);
    }
    return;
  }
  __this = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_RegionBanEntry);
  System_Collections_Generic_List_object____ctor(__this,MethodInfo_List_1_Anticheat_RegionBanEntry);
  pSVar6 = (pSVar17->fields)._entries;
  if ((int)pSVar6 < 1) {
label_044da2e4:
    pSVar13 = __this;
    __this_00 = pSVar17;
    if (__this != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List_object___ToArray(__this,MethodInfo_RegionBanEntry_ToArray);
      return;
    }
label_044da3aa:
    il2cpp_runtime_helper_022b2c90();
    __this = pSVar13;
    pSVar17 = __this_00;
  }
  else {
    uVar19 = 0;
    if (((ulong)pSVar6 & 0xffffffff) != 0) {
      do {
        pSVar9 = *(System_Collections_Generic_Dictionary_byte__object__o **)
                  (&(pSVar17->fields)._count + uVar19 * 2);
        if (pSVar9 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
          bVar8 = System_Collections_Generic_Dictionary_byte__object___ContainsKey(pSVar9,'\0',MethodInfo_Boolean_ContainsKey);
          if ((char)bVar8 == '\0') {
            unaff_R12 = *(System_Action_Dictionary_byte__object___o **)g_data_057b9c00->static_fields;
          }
          else {
            unaff_R12 = (System_Action_Dictionary_byte__object___o *)
                        System_Collections_Generic_Dictionary_byte__object___get_Item
                                  (pSVar9,'\0',MethodInfo_Object_get_Item);
            if ((unaff_R12 != (System_Action_Dictionary_byte__object___o *)0x0) &&
               ((Il2CppClass *)unaff_R12->klass != g_data_057b9c00)) goto label_044da3bc;
          }
          bVar8 = System_Collections_Generic_Dictionary_byte__object___ContainsKey(pSVar9,'\x01',MethodInfo_Boolean_ContainsKey)
          ;
          iVar15 = 0;
          if ((char)bVar8 != '\0') {
            pIVar11 = System_Collections_Generic_Dictionary_byte__object___get_Item
                                (pSVar9,'\x01',MethodInfo_Object_get_Item);
            pSVar13 = __this;
            __this_00 = pSVar17;
            if (pIVar11 == (Il2CppObject *)0x0) goto label_044da3aa;
            if ((pIVar11->klass->_1).element_class != *(Il2CppClass **)(g_data_057b9bb8 + 0x40))
            goto label_044da3b4;
            piVar12 = (int *)il2cpp_runtime_helper_02305440(pIVar11);
            iVar15 = *piVar12;
          }
          bVar8 = System_Collections_Generic_Dictionary_byte__object___ContainsKey(pSVar9,'\x02',MethodInfo_Boolean_ContainsKey)
          ;
          if ((char)bVar8 == '\0') {
            unaff_R13 = *(System_String_o **)g_data_057b9c00->static_fields;
          }
          else {
            unaff_R13 = (System_String_o *)
                        System_Collections_Generic_Dictionary_byte__object___get_Item
                                  (pSVar9,'\x02',MethodInfo_Object_get_Item);
            if ((unaff_R13 != (System_String_o *)0x0) &&
               (pSVar13 = __this, (Il2CppClass *)unaff_R13->klass != g_data_057b9c00)) goto label_044da3c4;
          }
          bVar8 = System_Collections_Generic_Dictionary_byte__object___ContainsKey(pSVar9,'\x05',MethodInfo_Boolean_ContainsKey)
          ;
          if ((char)bVar8 == '\0') {
            pSVar13 = *(System_Collections_Generic_List_object__o **)g_data_057b9c00->static_fields;
          }
          else {
            pSVar13 = (System_Collections_Generic_List_object__o *)
                      System_Collections_Generic_Dictionary_byte__object___get_Item
                                (pSVar9,'\x05',MethodInfo_Object_get_Item);
            if ((pSVar13 != (System_Collections_Generic_List_object__o *)0x0) &&
               (__this_00 = pSVar17, (Il2CppClass *)pSVar13->klass != g_data_057b9c00)) goto label_044da3cc;
          }
          bVar8 = System_Collections_Generic_Dictionary_byte__object___ContainsKey(pSVar9,'\x06',MethodInfo_Boolean_ContainsKey)
          ;
          if ((char)bVar8 == '\0') {
            __this_00 = *(System_Collections_Generic_Dictionary_byte__object__o **)g_data_057b9c00->static_fields
            ;
          }
          else {
            __this_00 = (System_Collections_Generic_Dictionary_byte__object__o *)
                        System_Collections_Generic_Dictionary_byte__object___get_Item
                                  (pSVar9,'\x06',MethodInfo_Object_get_Item);
            if ((__this_00 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) &&
               ((Il2CppClass *)__this_00->klass != g_data_057b9c00)) goto label_044da3d4;
          }
          __this_01 = (Anticheat_RegionBanEntry_o *)il2cpp_runtime_helper_023052d0(TypeInfo_RegionBanEntry);
          Anticheat_RegionBanEntry___ctor(__this_01,(MethodInfo *)0x0);
          if (__this_01 == (Anticheat_RegionBanEntry_o *)0x0) goto label_044da3aa;
          (__this_01->fields).TargetId = (System_String_o *)unaff_R12;
          il2cpp_runtime_helper_022b4080(&__this_01->fields,unaff_R12);
          (__this_01->fields).Username = unaff_R13;
          il2cpp_runtime_helper_022b4080(&(__this_01->fields).Username,unaff_R13);
          *(bool *)&(__this_01->fields).IsIPBan = iVar15 == 3;
          (__this_01->fields).Reason = (System_String_o *)pSVar13;
          il2cpp_runtime_helper_022b4080(&(__this_01->fields).Reason,pSVar13);
          (__this_01->fields).BannedBy = (System_String_o *)__this_00;
          il2cpp_runtime_helper_022b4080(&(__this_01->fields).BannedBy);
          lVar5 = MethodInfo_Void_Add;
          pSVar13 = __this;
          if (__this == (System_Collections_Generic_List_object__o *)0x0) goto label_044da3aa;
          piVar1 = &(__this->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar7 = (__this->fields)._items;
          __this_00 = pSVar17;
          if (pSVar7 == (System_Object_array *)0x0) goto label_044da3aa;
          uVar3 = (__this->fields)._size;
          if (uVar3 < (uint)pSVar7->max_length) {
            (__this->fields)._size = uVar3 + 1;
            pSVar7->m_Items[(int)uVar3] = (Il2CppObject *)__this_01;
            il2cpp_runtime_helper_022b4080(pSVar7->m_Items + (int)uVar3);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this,(Il2CppObject *)__this_01,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar19 = uVar19 + 1;
        uVar3 = *(uint *)&(pSVar17->fields)._entries;
        if ((long)(int)uVar3 <= (long)uVar19) goto label_044da2e4;
      } while (uVar19 < uVar3);
    }
  }
  pIVar11 = (Il2CppObject *)il2cpp_runtime_helper_022b2ca0();
label_044da3b4:
  il2cpp_runtime_helper_022b2fd0(pIVar11);
label_044da3bc:
  il2cpp_runtime_helper_022b2fd0(unaff_R12);
  pSVar13 = __this;
label_044da3c4:
  il2cpp_runtime_helper_022b2fd0(unaff_R13);
  __this_00 = pSVar17;
label_044da3cc:
  il2cpp_runtime_helper_022b2fd0(pSVar13);
label_044da3d4:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057aeb70 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb70 = '\x01';
  }
  if (__this_00 == (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
    pSVar10 = (System_String_o *)0x0;
  }
  else {
    pSVar10 = System_String__Trim((System_String_o *)__this_00,(MethodInfo *)0x0);
  }
  bVar8 = System_String__IsNullOrEmpty(pSVar10,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Anticheat_ModeratorManager__SendBatchRoomRemove(2,1,pSVar10,(System_Action_string__o *)0x0,in_R8);
  return;
}


// Anticheat.ModeratorManager$$ParseRegionBanEntries
// il2cpp: Anticheat_RegionBanEntry_array* Anticheat_ModeratorManager__ParseRegionBanEntries (System_Collections_Generic_Dictionary_byte__object__array* entries, const MethodInfo* method);
// 0x44d9ed0

Anticheat_RegionBanEntry_array *
Anticheat_ModeratorManager__ParseRegionBanEntries
          (System_Collections_Generic_Dictionary_byte__object__array *entries,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_byte__object__o *__this;
  Il2CppArrayBounds *pIVar3;
  undefined1 *puVar4;
  bool_conflict bVar5;
  System_Object_array *__this_00;
  int *piVar6;
  System_Object_array *pSVar7;
  System_Collections_Generic_Dictionary_byte__object__array *__this_01;
  Anticheat_RegionBanEntry_o *__this_02;
  Anticheat_RegionBanEntry_array *pAVar8;
  long lVar9;
  long lVar10;
  Il2CppObject *pIVar11;
  System_String_o *value;
  undefined4 extraout_var;
  Anticheat_RegionBanEntry_array *extraout_RAX;
  int iVar12;
  MethodInfo *in_R8;
  System_Object_array *unaff_R12;
  System_Object_array *unaff_R13;
  ulong uVar13;
  
  if (g_data_057aeb6f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RegionBanEntry_Empty_RegionBanEntry);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RegionBanEntry_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Anticheat_RegionBanEntry);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_RegionBanEntry);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RegionBanEntry);
    g_data_057aeb6f = '\x01';
  }
  lVar9 = MethodInfo_RegionBanEntry_Empty_RegionBanEntry;
  if (entries == (System_Collections_Generic_Dictionary_byte__object__array *)0x0) {
    if (*(long *)(MethodInfo_RegionBanEntry_Empty_RegionBanEntry + 0x38) == 0) {
      il2cpp_runtime_helper_02300a20(MethodInfo_RegionBanEntry_Empty_RegionBanEntry);
      lVar10 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
      bVar1 = *(byte *)(lVar10 + 0x135);
    }
    else {
      lVar10 = *(long *)(*(long *)(MethodInfo_RegionBanEntry_Empty_RegionBanEntry + 0x38) + 0x10);
      bVar1 = *(byte *)(lVar10 + 0x135);
    }
    if ((bVar1 & 1) == 0) {
      lVar10 = il2cpp_runtime_helper_023009c0();
      iVar12 = *(int *)(lVar10 + 0xe4);
    }
    else {
      iVar12 = *(int *)(lVar10 + 0xe4);
    }
    if (iVar12 == 0) {
      il2cpp_runtime_helper_02337ed0();
      lVar9 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
      bVar1 = *(byte *)(lVar9 + 0x135);
    }
    else {
      lVar9 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
      bVar1 = *(byte *)(lVar9 + 0x135);
    }
    if ((bVar1 & 1) == 0) {
      lVar9 = il2cpp_runtime_helper_023009c0(lVar9);
    }
    return (Anticheat_RegionBanEntry_array *)**(undefined8 **)(lVar9 + 0xb8);
  }
  __this_00 = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_List_RegionBanEntry);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_Anticheat_RegionBanEntry);
  if ((int)entries->max_length < 1) {
label_044da2e4:
    pSVar7 = __this_00;
    __this_01 = entries;
    if (__this_00 != (System_Object_array *)0x0) {
      pAVar8 = (Anticheat_RegionBanEntry_array *)
               System_Collections_Generic_List_object___ToArray
                         ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_RegionBanEntry_ToArray);
      return pAVar8;
    }
label_044da3aa:
    il2cpp_runtime_helper_022b2c90();
    __this_00 = pSVar7;
    entries = __this_01;
  }
  else {
    uVar13 = 0;
    if ((entries->max_length & 0xffffffff) != 0) {
      do {
        __this = entries->m_Items[uVar13];
        if (__this != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
          bVar5 = System_Collections_Generic_Dictionary_byte__object___ContainsKey(__this,'\0',MethodInfo_Boolean_ContainsKey);
          if ((char)bVar5 == '\0') {
            unaff_R12 = g_data_057b9c00->static_fields->s_emptyArray;
          }
          else {
            unaff_R12 = (System_Object_array *)
                        System_Collections_Generic_Dictionary_byte__object___get_Item
                                  (__this,'\0',MethodInfo_Object_get_Item);
            if ((unaff_R12 != (System_Object_array *)0x0) && ((unaff_R12->obj).klass != g_data_057b9c00))
            goto label_044da3bc;
          }
          bVar5 = System_Collections_Generic_Dictionary_byte__object___ContainsKey(__this,'\x01',MethodInfo_Boolean_ContainsKey)
          ;
          iVar12 = 0;
          if ((char)bVar5 != '\0') {
            pIVar11 = System_Collections_Generic_Dictionary_byte__object___get_Item
                                (__this,'\x01',MethodInfo_Object_get_Item);
            pSVar7 = __this_00;
            __this_01 = entries;
            if (pIVar11 == (Il2CppObject *)0x0) goto label_044da3aa;
            if ((pIVar11->klass->_1).element_class != *(Il2CppClass **)(g_data_057b9bb8 + 0x40))
            goto label_044da3b4;
            piVar6 = (int *)il2cpp_runtime_helper_02305440(pIVar11);
            iVar12 = *piVar6;
          }
          bVar5 = System_Collections_Generic_Dictionary_byte__object___ContainsKey(__this,'\x02',MethodInfo_Boolean_ContainsKey)
          ;
          if ((char)bVar5 == '\0') {
            unaff_R13 = g_data_057b9c00->static_fields->s_emptyArray;
          }
          else {
            unaff_R13 = (System_Object_array *)
                        System_Collections_Generic_Dictionary_byte__object___get_Item
                                  (__this,'\x02',MethodInfo_Object_get_Item);
            if ((unaff_R13 != (System_Object_array *)0x0) &&
               (pSVar7 = __this_00, (unaff_R13->obj).klass != g_data_057b9c00)) goto label_044da3c4;
          }
          bVar5 = System_Collections_Generic_Dictionary_byte__object___ContainsKey(__this,'\x05',MethodInfo_Boolean_ContainsKey)
          ;
          if ((char)bVar5 == '\0') {
            pSVar7 = g_data_057b9c00->static_fields->s_emptyArray;
          }
          else {
            pSVar7 = (System_Object_array *)
                     System_Collections_Generic_Dictionary_byte__object___get_Item(__this,'\x05',MethodInfo_Object_get_Item)
            ;
            if ((pSVar7 != (System_Object_array *)0x0) &&
               (__this_01 = entries, (pSVar7->obj).klass != g_data_057b9c00)) goto label_044da3cc;
          }
          bVar5 = System_Collections_Generic_Dictionary_byte__object___ContainsKey(__this,'\x06',MethodInfo_Boolean_ContainsKey)
          ;
          if ((char)bVar5 == '\0') {
            __this_01 = *(System_Collections_Generic_Dictionary_byte__object__array **)
                         g_data_057b9c00->static_fields;
          }
          else {
            __this_01 = (System_Collections_Generic_Dictionary_byte__object__array *)
                        System_Collections_Generic_Dictionary_byte__object___get_Item
                                  (__this,'\x06',MethodInfo_Object_get_Item);
            if ((__this_01 != (System_Collections_Generic_Dictionary_byte__object__array *)0x0) &&
               ((__this_01->obj).klass != g_data_057b9c00)) goto label_044da3d4;
          }
          __this_02 = (Anticheat_RegionBanEntry_o *)il2cpp_runtime_helper_023052d0(TypeInfo_RegionBanEntry);
          Anticheat_RegionBanEntry___ctor(__this_02,(MethodInfo *)0x0);
          if (__this_02 == (Anticheat_RegionBanEntry_o *)0x0) goto label_044da3aa;
          (__this_02->fields).TargetId = (System_String_o *)unaff_R12;
          il2cpp_runtime_helper_022b4080(&__this_02->fields,unaff_R12);
          (__this_02->fields).Username = (System_String_o *)unaff_R13;
          il2cpp_runtime_helper_022b4080(&(__this_02->fields).Username,unaff_R13);
          *(bool *)&(__this_02->fields).IsIPBan = iVar12 == 3;
          (__this_02->fields).Reason = (System_String_o *)pSVar7;
          il2cpp_runtime_helper_022b4080(&(__this_02->fields).Reason,pSVar7);
          (__this_02->fields).BannedBy = (System_String_o *)__this_01;
          il2cpp_runtime_helper_022b4080(&(__this_02->fields).BannedBy);
          lVar9 = MethodInfo_Void_Add;
          pSVar7 = __this_00;
          if (__this_00 == (System_Object_array *)0x0) goto label_044da3aa;
          puVar4 = (undefined1 *)((long)&__this_00->max_length + 4);
          *(int *)puVar4 = *(int *)puVar4 + 1;
          pIVar3 = __this_00->bounds;
          __this_01 = entries;
          if (pIVar3 == (Il2CppArrayBounds *)0x0) goto label_044da3aa;
          uVar2 = (uint)__this_00->max_length;
          if (uVar2 < (uint)pIVar3[1].lower_bound) {
            *(uint *)&__this_00->max_length = uVar2 + 1;
            (&pIVar3[2].length)[(int)uVar2] = (il2cpp_array_size_t)__this_02;
            il2cpp_runtime_helper_022b4080(&pIVar3[2].length + (int)uVar2);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)__this_02,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar13 = uVar13 + 1;
        uVar2 = (uint)entries->max_length;
        if ((long)(int)uVar2 <= (long)uVar13) goto label_044da2e4;
      } while (uVar13 < uVar2);
    }
  }
  pIVar11 = (Il2CppObject *)il2cpp_runtime_helper_022b2ca0();
label_044da3b4:
  il2cpp_runtime_helper_022b2fd0(pIVar11);
label_044da3bc:
  il2cpp_runtime_helper_022b2fd0(unaff_R12);
  pSVar7 = __this_00;
label_044da3c4:
  il2cpp_runtime_helper_022b2fd0(unaff_R13);
  __this_01 = entries;
label_044da3cc:
  il2cpp_runtime_helper_022b2fd0(pSVar7);
label_044da3d4:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057aeb70 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb70 = '\x01';
  }
  if (__this_01 == (System_Collections_Generic_Dictionary_byte__object__array *)0x0) {
    value = (System_String_o *)0x0;
  }
  else {
    value = System_String__Trim((System_String_o *)__this_01,(MethodInfo *)0x0);
  }
  bVar5 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return (Anticheat_RegionBanEntry_array *)CONCAT44(extraout_var,bVar5);
  }
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Anticheat_ModeratorManager__SendBatchRoomRemove(2,1,value,(System_Action_string__o *)0x0,in_R8);
  return extraout_RAX;
}


// Anticheat.ModeratorManager$$BatchSessionBan
// il2cpp: void Anticheat_ModeratorManager__BatchSessionBan (System_String_o* targets, const MethodInfo* method);
// 0x44da3e0

void Anticheat_ModeratorManager__BatchSessionBan(System_String_o *targets,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *value;
  MethodInfo *in_R8;
  
  if (g_data_057aeb70 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb70 = '\x01';
  }
  if (targets == (System_String_o *)0x0) {
    value = (System_String_o *)0x0;
  }
  else {
    value = System_String__Trim(targets,(MethodInfo *)0x0);
  }
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Anticheat_ModeratorManager__SendBatchRoomRemove(2,1,value,(System_Action_string__o *)0x0,in_R8);
  return;
}


// Anticheat.ModeratorManager$$BatchIPBan
// il2cpp: void Anticheat_ModeratorManager__BatchIPBan (System_String_o* targets, const MethodInfo* method);
// 0x44da740

void Anticheat_ModeratorManager__BatchIPBan(System_String_o *targets,MethodInfo *method)

{
  System_Int32_array *pSVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  intptr_t iVar6;
  intptr_t iVar7;
  bool_conflict bVar8;
  int iVar9;
  System_Collections_Generic_Dictionary_byte__object__o *pSVar10;
  System_Action_o *onTimeout;
  Il2CppObject *pIVar11;
  undefined8 in_RAX;
  System_String_o *value;
  MethodInfo *method_00;
  MethodInfo *method_01;
  undefined8 unaff_RBX;
  uint uVar12;
  System_String_o *unaff_RBP;
  undefined8 unaff_R12;
  undefined8 uVar13;
  System_Action_Dictionary_byte__object___o *unaff_R13;
  undefined8 *puVar14;
  undefined8 *unaff_R14;
  System_String_o *unaff_R15;
  
  do {
    *(System_String_o **)((long)register0x00000020 + -8) = unaff_RBP;
    *(undefined8 *)((long)register0x00000020 + -0x10) = unaff_RBX;
    *(undefined8 *)((long)register0x00000020 + -0x18) = in_RAX;
    if (g_data_057aeb71 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x44da75b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      g_data_057aeb71 = '\x01';
    }
    if ((System_Collections_Generic_Dictionary_byte__object__o *)targets ==
        (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
      value = (System_String_o *)0x0;
    }
    else {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x44da771;
      value = System_String__Trim(targets,(MethodInfo *)0x0);
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x44da782;
    bVar8 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      return;
    }
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x44da7f3;
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057ae4d9 != '\0') goto label_044da7aa;
label_044da7fc:
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x44da808;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      g_data_057ae4d9 = '\x01';
      iVar9 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
    }
    else {
      if (g_data_057ae4d9 == '\0') goto label_044da7fc;
label_044da7aa:
      iVar9 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
    }
    if (iVar9 == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x44da822;
      il2cpp_runtime_helper_02337ed0();
      iVar9 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
    }
    uVar12 = (uint)(*(char *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 8) == '\0') * 2 + 2;
    if (iVar9 == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x44da7d7;
      il2cpp_runtime_helper_02337ed0();
    }
    puVar14 = (undefined8 *)(ulong)uVar12;
    uVar13 = *(undefined8 *)((long)register0x00000020 + -0x10);
    *(undefined8 *)((long)register0x00000020 + -8) = *(undefined8 *)((long)register0x00000020 + -8);
    *(System_String_o **)((long)register0x00000020 + -0x10) = unaff_R15;
    *(undefined8 **)((long)register0x00000020 + -0x18) = unaff_R14;
    *(System_Action_Dictionary_byte__object___o **)((long)register0x00000020 + -0x20) = unaff_R13;
    *(undefined8 *)((long)register0x00000020 + -0x28) = unaff_R12;
    *(undefined8 *)((long)register0x00000020 + -0x30) = uVar13;
    unaff_R12 = 3;
    if (g_data_057aeb74 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da47f;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_Dictionary_byte_object);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da48b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da497;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da4a3;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Byte_System_Object);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da4af;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_byte_object);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da4bb;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da4c7;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SendBatchRoomRemove_b__0);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da4d3;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SendBatchRoomRemove_b__1);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da4df;
      il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass106_0);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da4eb;
      il2cpp_runtime_helper_023445d0(&"Sending request...");
      g_data_057aeb74 = '\x01';
    }
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da501;
    pSVar10 = (System_Collections_Generic_Dictionary_byte__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass106_0);
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da50e;
    targets = (System_String_o *)pSVar10;
    Anticheat_ModeratorManager___c__DisplayClass106_0___ctor
              ((Anticheat_ModeratorManager___c__DisplayClass106_0_o *)pSVar10,(MethodInfo *)0x0);
    unaff_RBP = (System_String_o *)0x0;
    if (pSVar10 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
      *(uint *)((long)register0x00000020 + -0x3c) = uVar12;
      (pSVar10->fields)._buckets = (System_Int32_array *)0x0;
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da52f;
      il2cpp_runtime_helper_022b4080(&pSVar10->fields,0);
      pSVar1 = (pSVar10->fields)._buckets;
      puVar14 = &TypeInfo_ModeratorManager;
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da6dc;
        il2cpp_runtime_helper_02337ed0();
        if (g_data_057aeb5b != '\0') goto label_044da561;
label_044da6f3:
        uVar13 = "Sending request...";
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da6ff;
        il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
        g_data_057aeb5b = '\x01';
        if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto label_044da571;
label_044da716:
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da71b;
        il2cpp_runtime_helper_02337ed0();
        lVar2 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
      }
      else {
        if (g_data_057aeb5b == '\0') goto label_044da6f3;
label_044da561:
        uVar13 = "Sending request...";
        if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto label_044da716;
label_044da571:
        lVar2 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
      }
      if (lVar2 != 0) {
        uVar3 = *(undefined8 *)(lVar2 + 0x28);
        uVar4 = *(undefined8 *)(lVar2 + 0x40);
        pcVar5 = *(code **)(lVar2 + 0x18);
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da58f;
        (*pcVar5)(uVar4,uVar13,uVar3);
      }
      if (pSVar1 != (System_Int32_array *)0x0) {
        iVar6 = *(intptr_t *)((long)pSVar1->m_Items + 8);
        iVar7 = *(intptr_t *)((long)pSVar1->m_Items + 0x20);
        pcVar5 = (code *)pSVar1->max_length;
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da5a2;
        (*pcVar5)(iVar7,uVar13,iVar6);
      }
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da5b1;
      unaff_R13 = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_Dictionary_byte_object);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da5cb;
      System_Action_object____ctor();
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da5da;
      onTimeout = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da5f4;
      System_Action___ctor();
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da607;
      unaff_RBP = Anticheat_ModeratorManager__TrackRequest(15.0,unaff_R13,onTimeout,method_00);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da619;
      pSVar10 = (System_Collections_Generic_Dictionary_byte__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_byte_object);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da62e;
      targets = (System_String_o *)pSVar10;
      System_Collections_Generic_Dictionary_byte__object____ctor(pSVar10,MethodInfo_Dictionary_2_System_Byte_System_Object);
      if (pSVar10 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da64f;
        System_Collections_Generic_Dictionary_byte__object___Add
                  (pSVar10,'\0',(Il2CppObject *)unaff_RBP,MethodInfo_Void_Add);
        *(undefined4 *)((long)register0x00000020 + -0x34) = 3;
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da669;
        pIVar11 = (Il2CppObject *)
                  il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(undefined1 *)((long)register0x00000020 + -0x34));
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da67d;
        System_Collections_Generic_Dictionary_byte__object___Add(pSVar10,'\x01',pIVar11,MethodInfo_Void_Add);
        *(undefined4 *)((long)register0x00000020 + -0x38) = *(undefined4 *)((long)register0x00000020 + -0x3c);
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da693;
        pIVar11 = (Il2CppObject *)
                  il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(undefined1 *)((long)register0x00000020 + -0x38));
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da6a7;
        System_Collections_Generic_Dictionary_byte__object___Add(pSVar10,'\x02',pIVar11,MethodInfo_Void_Add);
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da6bb;
        System_Collections_Generic_Dictionary_byte__object___Add
                  (pSVar10,'\x03',(Il2CppObject *)value,MethodInfo_Void_Add);
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da6c8;
        Anticheat_ModeratorManager__RaiseModEvent(0xb4,pSVar10,method_01);
        return;
      }
    }
    unaff_RBX = 0;
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da73c;
    in_RAX = il2cpp_runtime_helper_022b2c90();
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x48);
    unaff_R14 = puVar14;
    unaff_R15 = value;
  } while( true );
}


// Anticheat.ModeratorManager$$BatchSessionUnban
// il2cpp: void Anticheat_ModeratorManager__BatchSessionUnban (System_String_o* targets, const MethodInfo* method);
// 0x44da830

void Anticheat_ModeratorManager__BatchSessionUnban(System_String_o *targets,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *value;
  MethodInfo *in_R8;
  
  if (g_data_057aeb72 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb72 = '\x01';
  }
  if (targets == (System_String_o *)0x0) {
    value = (System_String_o *)0x0;
  }
  else {
    value = System_String__Trim(targets,(MethodInfo *)0x0);
  }
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Anticheat_ModeratorManager__SendBatchRoomRemove(4,1,value,(System_Action_string__o *)0x0,in_R8);
  return;
}


// Anticheat.ModeratorManager$$BatchIPUnban
// il2cpp: void Anticheat_ModeratorManager__BatchIPUnban (System_String_o* targets, const MethodInfo* method);
// 0x44da8b0

void Anticheat_ModeratorManager__BatchIPUnban(System_String_o *targets,MethodInfo *method)

{
  char cVar1;
  bool_conflict bVar2;
  int iVar3;
  System_String_o *value;
  MethodInfo *in_R8;
  
  if (g_data_057aeb73 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb73 = '\x01';
  }
  if (targets == (System_String_o *)0x0) {
    value = (System_String_o *)0x0;
  }
  else {
    value = System_String__Trim(targets,(MethodInfo *)0x0);
  }
  bVar2 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ae4d9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057ae4d9 = '\x01';
    iVar3 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
  }
  else {
    iVar3 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
    iVar3 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
  }
  cVar1 = *(char *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 8);
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Anticheat_ModeratorManager__SendBatchRoomRemove
            (5,(uint)(cVar1 == '\0') * 2 + 2,value,(System_Action_string__o *)0x0,in_R8);
  return;
}


// Anticheat.ModeratorManager$$SendBatchRoomRemove
// il2cpp: void Anticheat_ModeratorManager__SendBatchRoomRemove (int32_t removeType, int32_t targetBy, System_String_o* targets, System_Action_string__o* localStatus, const MethodInfo* method);
// 0x44da450

void Anticheat_ModeratorManager__SendBatchRoomRemove
               (int32_t removeType,int32_t targetBy,System_String_o *targets,
               System_Action_string__o *localStatus,MethodInfo *method)

{
  System_Int32_array *pSVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  intptr_t iVar6;
  intptr_t iVar7;
  bool_conflict bVar8;
  int iVar9;
  System_Collections_Generic_Dictionary_byte__object__o *pSVar10;
  System_Action_o *onTimeout;
  System_String_o *value;
  Il2CppObject *pIVar11;
  undefined8 uVar12;
  System_String_o *value_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  System_Collections_Generic_Dictionary_byte__object__o *__this;
  ulong unaff_R12;
  System_Action_Dictionary_byte__object___o *unaff_R13;
  undefined8 *unaff_R14;
  System_String_o *unaff_R15;
  
  do {
    value_00 = targets;
    *(undefined8 *)((long)register0x00000020 + -8) = unaff_RBP;
    *(System_String_o **)((long)register0x00000020 + -0x10) = unaff_R15;
    *(undefined8 **)((long)register0x00000020 + -0x18) = unaff_R14;
    *(System_Action_Dictionary_byte__object___o **)((long)register0x00000020 + -0x20) = unaff_R13;
    *(ulong *)((long)register0x00000020 + -0x28) = unaff_R12;
    *(undefined8 *)((long)register0x00000020 + -0x30) = unaff_RBX;
    unaff_R14 = (undefined8 *)(ulong)(uint)targetBy;
    unaff_R12 = (ulong)(uint)removeType;
    if (g_data_057aeb74 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da47f;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_Dictionary_byte_object);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da48b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da497;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da4a3;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Byte_System_Object);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da4af;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_byte_object);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da4bb;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da4c7;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SendBatchRoomRemove_b__0);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da4d3;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SendBatchRoomRemove_b__1);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da4df;
      il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass106_0);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da4eb;
      il2cpp_runtime_helper_023445d0(&"Sending request...");
      g_data_057aeb74 = '\x01';
    }
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da501;
    pSVar10 = (System_Collections_Generic_Dictionary_byte__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass106_0);
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da50e;
    __this = pSVar10;
    Anticheat_ModeratorManager___c__DisplayClass106_0___ctor
              ((Anticheat_ModeratorManager___c__DisplayClass106_0_o *)pSVar10,(MethodInfo *)0x0);
    value = (System_String_o *)0x0;
    if (pSVar10 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
      *(int32_t *)((long)register0x00000020 + -0x3c) = targetBy;
      (pSVar10->fields)._buckets = (System_Int32_array *)localStatus;
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da52f;
      il2cpp_runtime_helper_022b4080(&pSVar10->fields,localStatus);
      pSVar1 = (pSVar10->fields)._buckets;
      unaff_R14 = &TypeInfo_ModeratorManager;
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da6dc;
        il2cpp_runtime_helper_02337ed0();
        if (g_data_057aeb5b != '\0') goto label_044da561;
label_044da6f3:
        uVar12 = "Sending request...";
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da6ff;
        il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
        g_data_057aeb5b = '\x01';
        if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto label_044da571;
label_044da716:
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da71b;
        il2cpp_runtime_helper_02337ed0();
        lVar2 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
      }
      else {
        if (g_data_057aeb5b == '\0') goto label_044da6f3;
label_044da561:
        uVar12 = "Sending request...";
        if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto label_044da716;
label_044da571:
        lVar2 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
      }
      if (lVar2 != 0) {
        uVar3 = *(undefined8 *)(lVar2 + 0x28);
        uVar4 = *(undefined8 *)(lVar2 + 0x40);
        pcVar5 = *(code **)(lVar2 + 0x18);
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da58f;
        (*pcVar5)(uVar4,uVar12,uVar3);
      }
      if (pSVar1 != (System_Int32_array *)0x0) {
        iVar6 = *(intptr_t *)((long)pSVar1->m_Items + 8);
        iVar7 = *(intptr_t *)((long)pSVar1->m_Items + 0x20);
        pcVar5 = (code *)pSVar1->max_length;
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da5a2;
        (*pcVar5)(iVar7,uVar12,iVar6);
      }
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da5b1;
      unaff_R13 = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_Dictionary_byte_object);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da5cb;
      System_Action_object____ctor();
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da5da;
      onTimeout = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da5f4;
      System_Action___ctor();
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da607;
      value = Anticheat_ModeratorManager__TrackRequest(15.0,unaff_R13,onTimeout,method_00);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da619;
      pSVar10 = (System_Collections_Generic_Dictionary_byte__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_byte_object);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da62e;
      __this = pSVar10;
      System_Collections_Generic_Dictionary_byte__object____ctor(pSVar10,MethodInfo_Dictionary_2_System_Byte_System_Object);
      localStatus = (System_Action_string__o *)0x0;
      if (pSVar10 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da64f;
        System_Collections_Generic_Dictionary_byte__object___Add
                  (pSVar10,'\0',(Il2CppObject *)value,MethodInfo_Void_Add);
        *(int32_t *)((long)register0x00000020 + -0x34) = removeType;
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da669;
        pIVar11 = (Il2CppObject *)
                  il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(undefined1 *)((long)register0x00000020 + -0x34));
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da67d;
        System_Collections_Generic_Dictionary_byte__object___Add(pSVar10,'\x01',pIVar11,MethodInfo_Void_Add);
        *(undefined4 *)((long)register0x00000020 + -0x38) = *(undefined4 *)((long)register0x00000020 + -0x3c);
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da693;
        pIVar11 = (Il2CppObject *)
                  il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(undefined1 *)((long)register0x00000020 + -0x38));
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da6a7;
        System_Collections_Generic_Dictionary_byte__object___Add(pSVar10,'\x02',pIVar11,MethodInfo_Void_Add);
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da6bb;
        System_Collections_Generic_Dictionary_byte__object___Add
                  (pSVar10,'\x03',(Il2CppObject *)value_00,MethodInfo_Void_Add);
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da6c8;
        Anticheat_ModeratorManager__RaiseModEvent(0xb4,pSVar10,method_01);
        return;
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da73c;
    uVar12 = il2cpp_runtime_helper_022b2c90();
    *(System_String_o **)((long)register0x00000020 + -0x50) = value;
    *(System_Action_string__o **)((long)register0x00000020 + -0x58) = localStatus;
    *(undefined8 *)((long)register0x00000020 + -0x60) = uVar12;
    if (g_data_057aeb71 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x68) = 0x44da75b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      g_data_057aeb71 = '\x01';
    }
    if (__this == (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
      targets = (System_String_o *)0x0;
    }
    else {
      *(undefined8 *)((long)register0x00000020 + -0x68) = 0x44da771;
      targets = System_String__Trim((System_String_o *)__this,(MethodInfo *)0x0);
    }
    *(undefined8 *)((long)register0x00000020 + -0x68) = 0x44da782;
    bVar8 = System_String__IsNullOrEmpty(targets,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      return;
    }
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x68) = 0x44da7f3;
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057ae4d9 != '\0') goto label_044da7aa;
label_044da7fc:
      *(undefined8 *)((long)register0x00000020 + -0x68) = 0x44da808;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      g_data_057ae4d9 = '\x01';
      iVar9 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
    }
    else {
      if (g_data_057ae4d9 == '\0') goto label_044da7fc;
label_044da7aa:
      iVar9 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
    }
    if (iVar9 == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x68) = 0x44da822;
      il2cpp_runtime_helper_02337ed0();
      iVar9 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
    }
    targetBy = (uint)(*(char *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 8) == '\0') * 2 + 2;
    if (iVar9 == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x68) = 0x44da7d7;
      il2cpp_runtime_helper_02337ed0();
    }
    removeType = 3;
    localStatus = (System_Action_string__o *)0x0;
    unaff_RBX = *(undefined8 *)((long)register0x00000020 + -0x58);
    unaff_RBP = *(undefined8 *)((long)register0x00000020 + -0x50);
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x48);
    unaff_R15 = value_00;
  } while( true );
}


// Anticheat.ModeratorManager$$.ctor
// il2cpp: void Anticheat_ModeratorManager___ctor (Anticheat_ModeratorManager_o* __this, const MethodInfo* method);
// 0x44da9a0

void Anticheat_ModeratorManager___ctor(Anticheat_ModeratorManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_Collections_Generic_Dictionary_string__float__o *pSVar2;
  
  if (g_data_057aeb75 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Single);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Action_1_System_Collec);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Action);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Action);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Action_Dictionary_byte_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_float);
    g_data_057aeb75 = '\x01';
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Action_Dictionary_byte_object);
  System_Collections_Generic_Dictionary_object__object____ctor(pSVar1,MethodInfo_Dictionary_2_System_String_System_Action_1_System_Collec);
  (__this->fields)._pendingCallbacks =
       (System_Collections_Generic_Dictionary_string__Action_Dictionary_byte__object____o *)pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._pendingCallbacks,pSVar1);
  pSVar2 = (System_Collections_Generic_Dictionary_string__float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_float);
  System_Collections_Generic_Dictionary_object__float____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,MethodInfo_Dictionary_2_System_String_System_Single);
  (__this->fields)._pendingTimestamps = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._pendingTimestamps,pSVar2);
  pSVar2 = (System_Collections_Generic_Dictionary_string__float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_float);
  System_Collections_Generic_Dictionary_object__float____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,MethodInfo_Dictionary_2_System_String_System_Single);
  (__this->fields)._pendingTimeouts = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._pendingTimeouts,pSVar2);
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Action);
  System_Collections_Generic_Dictionary_object__object____ctor(pSVar1,MethodInfo_Dictionary_2_System_String_System_Action);
  (__this->fields)._pendingTimeoutCallbacks =
       (System_Collections_Generic_Dictionary_string__Action__o *)pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._pendingTimeoutCallbacks);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager$$.cctor
// il2cpp: void Anticheat_ModeratorManager___cctor (const MethodInfo* method);
// 0x44daae0

void Anticheat_ModeratorManager___cctor(MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_Dictionary_int__object__o *__this;
  System_Collections_Generic_List_object__o *__this_00;
  
  if (g_data_057aeb76 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Int32_Anticheat_PlayerEntry);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_int_PlayerEntry);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Anticheat_PlayerEntry);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_PlayerEntry);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    g_data_057aeb76 = '\x01';
  }
  *(undefined4 *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0xc) = 0xffffffff;
  __this = (System_Collections_Generic_Dictionary_int__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_int_PlayerEntry);
  System_Collections_Generic_Dictionary_int__object____ctor(__this,MethodInfo_Dictionary_2_System_Int32_Anticheat_PlayerEntry);
  lVar1 = *(long *)(TypeInfo_ModeratorManager + 0xb8);
  *(System_Collections_Generic_Dictionary_int__object__o **)(lVar1 + 0x10) = __this;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x10,__this);
  __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_PlayerEntry);
  System_Collections_Generic_List_object____ctor(__this_00,MethodInfo_List_1_Anticheat_PlayerEntry);
  lVar1 = *(long *)(TypeInfo_ModeratorManager + 0xb8);
  *(System_Collections_Generic_List_object__o **)(lVar1 + 0x18) = __this_00;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x18,__this_00);
  return;
}


