// Type: Settings.AdvancedSettings
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Settings/AdvancedSettings.cs
// Prior real C# source: none
// --------------------------------

// Settings.AdvancedSettings$$get_FileName
// il2cpp: System_String_o* Settings_AdvancedSettings__get_FileName (Settings_AdvancedSettings_o* __this, const MethodInfo* method);
// 0x4084e70

System_String_o *
Settings_AdvancedSettings__get_FileName(Settings_AdvancedSettings_o *__this,MethodInfo *method)

{
  if (g_data_057ac3cc == '\0') {
    il2cpp_runtime_helper_023445d0(&"Advanced.json");
    g_data_057ac3cc = '\x01';
  }
  return "Advanced.json";
}


// Settings.AdvancedSettings$$get_Encrypted
// il2cpp: bool Settings_AdvancedSettings__get_Encrypted (Settings_AdvancedSettings_o* __this, const MethodInfo* method);
// 0x4084ea0

bool_conflict Settings_AdvancedSettings__get_Encrypted(Settings_AdvancedSettings_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// Settings.AdvancedSettings$$Validate
// il2cpp: bool Settings_AdvancedSettings__Validate (Settings_AdvancedSettings_o* __this, const MethodInfo* method);
// 0x4084eb0

bool_conflict Settings_AdvancedSettings__Validate(Settings_AdvancedSettings_o *__this,MethodInfo *method)

{
  Settings_ListSetting_StringSetting__o *pSVar1;
  int32_t iVar2;
  int32_t iVar3;
  bool_conflict bVar4;
  bool_conflict extraout_EAX;
  Il2CppObject *pIVar5;
  Il2CppClass *__this_00;
  Settings_ListSetting_T__o *pSVar6;
  Il2CppRGCTXData *__this_01;
  undefined8 *extraout_RDX;
  undefined8 *extraout_RDX_00;
  int iVar7;
  MethodInfo *pMVar8;
  ulong uVar9;
  MethodInfo *value;
  long lVar10;
  MethodInfo *pMVar11;
  MethodInfo *__this_02;
  MethodInfo *pMVar12;
  
  if (g_data_057ac3cd == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_GetCount);
    g_data_057ac3cd = '\x01';
  }
  pSVar1 = (__this->fields).ServiceKeys;
  if (pSVar1 != (Settings_ListSetting_StringSetting__o *)0x0) {
    method = MethodInfo_Int32_GetCount;
    iVar2 = Settings_ListSetting_object___GetCount
                      ((Settings_ListSetting_T__o *)pSVar1,(MethodInfo_3521B40 *)MethodInfo_Int32_GetCount);
    pSVar1 = (__this->fields).ServiceUrls;
    if (pSVar1 != (Settings_ListSetting_StringSetting__o *)0x0) {
      method = MethodInfo_Int32_GetCount;
      iVar3 = Settings_ListSetting_object___GetCount
                        ((Settings_ListSetting_T__o *)pSVar1,(MethodInfo_3521B40 *)MethodInfo_Int32_GetCount);
      if (iVar2 != iVar3) {
        return 0;
      }
      pSVar1 = (__this->fields).SecretKeys;
      if (pSVar1 != (Settings_ListSetting_StringSetting__o *)0x0) {
        method = MethodInfo_Int32_GetCount;
        iVar2 = Settings_ListSetting_object___GetCount
                          ((Settings_ListSetting_T__o *)pSVar1,(MethodInfo_3521B40 *)MethodInfo_Int32_GetCount);
        pSVar1 = (__this->fields).SecretValues;
        if (pSVar1 != (Settings_ListSetting_StringSetting__o *)0x0) {
          iVar3 = Settings_ListSetting_object___GetCount
                            ((Settings_ListSetting_T__o *)pSVar1,(MethodInfo_3521B40 *)MethodInfo_Int32_GetCount);
          return CONCAT31((int3)((uint)iVar3 >> 8),iVar2 == iVar3);
        }
      }
    }
  }
  lVar10 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac3ce == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_StringSetting_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Settings_StringSetting_get_Value);
    g_data_057ac3ce = '\x01';
  }
  *extraout_RDX = 0;
  il2cpp_runtime_helper_022b4080(extraout_RDX);
  value = (MethodInfo *)0x0;
  pMVar11 = method;
  bVar4 = System_String__IsNullOrEmpty((System_String_o *)method,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    if (((*(long *)(lVar10 + 0x28) == 0) || (*(long *)(lVar10 + 0x30) == 0)) ||
       (pMVar12 = *(MethodInfo **)(*(long *)(lVar10 + 0x28) + 0x18), pMVar12 == (MethodInfo *)0x0)) {
label_0408506d:
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ac3cf == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
        il2cpp_runtime_helper_023445d0(&MethodInfo_StringSetting_get_Item);
        il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Settings_StringSetting_get_Value);
        g_data_057ac3cf = '\x01';
      }
      *extraout_RDX_00 = 0;
      il2cpp_runtime_helper_022b4080(extraout_RDX_00);
      pMVar12 = value;
      bVar4 = System_String__IsNullOrEmpty((System_String_o *)value,(MethodInfo *)0x0);
      if ((char)bVar4 == '\0') {
        if ((((pMVar11->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) ||
            (((_union_148054 *)&pMVar11->field8_0x40)->genericMethod == (void *)0x0)) ||
           (pMVar8 = (pMVar11->field7_0x38).rgctx_data[3].method, pMVar8 == (MethodInfo *)0x0)) {
label_040851ad:
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057ac3d0 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_BoolSetting);
            il2cpp_runtime_helper_023445d0(&MethodInfo_ListSetting_1_StringSetting);
            il2cpp_runtime_helper_023445d0(&TypeInfo_ListSetting_StringSetting);
            g_data_057ac3d0 = '\x01';
          }
          __this_00 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
          Settings_BoolSetting___ctor_40f3960((Settings_BoolSetting_o *)__this_00,0,(MethodInfo *)0x0);
          pMVar12->klass = __this_00;
          il2cpp_runtime_helper_022b4080(&pMVar12->klass,__this_00);
          pSVar6 = (Settings_ListSetting_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_ListSetting_StringSetting);
          Settings_ListSetting_object____ctor_3521170(pSVar6,MethodInfo_ListSetting_1_StringSetting);
          pMVar12->return_type = (Il2CppType *)pSVar6;
          il2cpp_runtime_helper_022b4080(&pMVar12->return_type,pSVar6);
          pSVar6 = (Settings_ListSetting_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_ListSetting_StringSetting);
          Settings_ListSetting_object____ctor_3521170(pSVar6,MethodInfo_ListSetting_1_StringSetting);
          pMVar12->parameters = (Il2CppType **)pSVar6;
          il2cpp_runtime_helper_022b4080(&pMVar12->parameters,pSVar6);
          __this_01 = (Il2CppRGCTXData *)il2cpp_runtime_helper_023052d0(TypeInfo_ListSetting_StringSetting);
          Settings_ListSetting_object____ctor_3521170((Settings_ListSetting_T__o *)__this_01,MethodInfo_ListSetting_1_StringSetting);
          (pMVar12->field7_0x38).rgctx_data = __this_01;
          il2cpp_runtime_helper_022b4080(&pMVar12->field7_0x38,__this_01);
          pSVar6 = (Settings_ListSetting_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_ListSetting_StringSetting);
          Settings_ListSetting_object____ctor_3521170(pSVar6,MethodInfo_ListSetting_1_StringSetting);
          (pMVar12->field8_0x40).genericMethod = pSVar6;
          il2cpp_runtime_helper_022b4080(&pMVar12->field8_0x40);
          Settings_SaveableSettingsContainer___ctor
                    ((Settings_SaveableSettingsContainer_o *)pMVar12,(MethodInfo *)0x0);
          return extraout_EAX;
        }
        uVar9 = 0;
        if (0 < *(int *)&pMVar8->name) {
          pMVar11 = *(MethodInfo **)((long)((_union_148054 *)&pMVar11->field8_0x40)->genericMethod + 0x18);
          do {
            iVar7 = (int)uVar9;
            pMVar12 = pMVar8;
            pIVar5 = System_Collections_Generic_List_object___get_Item
                               ((System_Collections_Generic_List_object__o *)pMVar8,iVar7,MethodInfo_StringSetting_get_Item);
            if (pIVar5 == (Il2CppObject *)0x0) goto label_040851ad;
            pMVar12 = pIVar5[1].monitor;
            bVar4 = System_String__op_Equality
                              ((System_String_o *)pMVar12,(System_String_o *)value,(MethodInfo *)0x0);
            if ((char)bVar4 != '\0') {
              if ((pMVar11 != (MethodInfo *)0x0) &&
                 (pIVar5 = System_Collections_Generic_List_object___get_Item
                                     ((System_Collections_Generic_List_object__o *)pMVar11,iVar7,MethodInfo_StringSetting_get_Item)
                 , pMVar12 = pMVar11, pIVar5 != (Il2CppObject *)0x0)) {
                *extraout_RDX_00 = pIVar5[1].monitor;
                il2cpp_runtime_helper_022b4080(extraout_RDX_00);
                return (bool_conflict)CONCAT71((int7)(uVar9 >> 8),1);
              }
              goto label_040851ad;
            }
            uVar9 = (ulong)(iVar7 + 1U);
          } while ((int)(iVar7 + 1U) < *(int *)&pMVar8->name);
        }
      }
      return 0;
    }
    pMVar8 = (MethodInfo *)0x0;
    if (0 < *(int *)&pMVar12->name) {
      __this_02 = *(MethodInfo **)(*(long *)(lVar10 + 0x30) + 0x18);
      do {
        iVar7 = (int)pMVar8;
        value = pMVar8;
        pMVar11 = pMVar12;
        pIVar5 = System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)pMVar12,iVar7,MethodInfo_StringSetting_get_Item);
        if (pIVar5 == (Il2CppObject *)0x0) goto label_0408506d;
        pMVar11 = pIVar5[1].monitor;
        value = method;
        bVar4 = System_String__op_Equality
                          ((System_String_o *)pMVar11,(System_String_o *)method,(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if ((__this_02 != (MethodInfo *)0x0) &&
             (value = pMVar8,
             pIVar5 = System_Collections_Generic_List_object___get_Item
                                ((System_Collections_Generic_List_object__o *)__this_02,iVar7,MethodInfo_StringSetting_get_Item),
             pMVar11 = __this_02, pIVar5 != (Il2CppObject *)0x0)) {
            *extraout_RDX = pIVar5[1].monitor;
            il2cpp_runtime_helper_022b4080(extraout_RDX);
            return (bool_conflict)CONCAT71((int7)((ulong)pMVar8 >> 8),1);
          }
          goto label_0408506d;
        }
        pMVar8 = (MethodInfo *)(ulong)(iVar7 + 1U);
      } while ((int)(iVar7 + 1U) < *(int *)&pMVar12->name);
    }
  }
  return 0;
}


// Settings.AdvancedSettings$$TryGetServiceUrl
// il2cpp: bool Settings_AdvancedSettings__TryGetServiceUrl (Settings_AdvancedSettings_o* __this, System_String_o* key, System_String_o** url, const MethodInfo* method);
// 0x4084f40

bool_conflict
Settings_AdvancedSettings__TryGetServiceUrl
          (Settings_AdvancedSettings_o *__this,System_String_o *key,System_String_o **url,MethodInfo *method)

{
  Settings_ListSetting_StringSetting__o *pSVar1;
  Settings_ListSetting_StringSetting__o *pSVar2;
  long lVar3;
  bool_conflict bVar4;
  bool_conflict extraout_EAX;
  Il2CppObject *pIVar5;
  Settings_BoolSetting_o *__this_00;
  System_Collections_Generic_List_object__c *__this_01;
  Settings_ListSetting_T__o *pSVar6;
  System_Object_array *pSVar7;
  undefined8 *extraout_RDX;
  int iVar8;
  System_Collections_Generic_List_object__o *pSVar9;
  ulong uVar10;
  System_Collections_Generic_List_object__o *value;
  System_Collections_Generic_List_object__o *pSVar11;
  System_Collections_Generic_List_object__o *__this_02;
  System_Collections_Generic_List_object__o *pSVar12;
  
  if (g_data_057ac3ce == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_StringSetting_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Settings_StringSetting_get_Value);
    g_data_057ac3ce = '\x01';
  }
  *url = (System_String_o *)0x0;
  il2cpp_runtime_helper_022b4080(url);
  value = (System_Collections_Generic_List_object__o *)0x0;
  pSVar11 = (System_Collections_Generic_List_object__o *)key;
  bVar4 = System_String__IsNullOrEmpty(key,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    pSVar1 = (__this->fields).ServiceKeys;
    if (((pSVar1 == (Settings_ListSetting_StringSetting__o *)0x0) ||
        (pSVar2 = (__this->fields).ServiceUrls, pSVar2 == (Settings_ListSetting_StringSetting__o *)0x0)) ||
       (pSVar12 = (System_Collections_Generic_List_object__o *)(pSVar1->fields)._value,
       pSVar12 == (System_Collections_Generic_List_object__o *)0x0)) {
label_0408506d:
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ac3cf == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
        il2cpp_runtime_helper_023445d0(&MethodInfo_StringSetting_get_Item);
        il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Settings_StringSetting_get_Value);
        g_data_057ac3cf = '\x01';
      }
      *extraout_RDX = 0;
      il2cpp_runtime_helper_022b4080(extraout_RDX);
      pSVar12 = value;
      bVar4 = System_String__IsNullOrEmpty((System_String_o *)value,(MethodInfo *)0x0);
      if ((char)bVar4 == '\0') {
        pSVar7 = pSVar11[1].fields._items;
        if (((pSVar7 == (System_Object_array *)0x0) || (lVar3 = *(long *)&pSVar11[1].fields._size, lVar3 == 0)
            ) || (pSVar11 = (System_Collections_Generic_List_object__o *)pSVar7->max_length,
                 pSVar11 == (System_Collections_Generic_List_object__o *)0x0)) {
label_040851ad:
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057ac3d0 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_BoolSetting);
            il2cpp_runtime_helper_023445d0(&MethodInfo_ListSetting_1_StringSetting);
            il2cpp_runtime_helper_023445d0(&TypeInfo_ListSetting_StringSetting);
            g_data_057ac3d0 = '\x01';
          }
          __this_00 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
          Settings_BoolSetting___ctor_40f3960(__this_00,0,(MethodInfo *)0x0);
          (pSVar12->fields)._syncRoot = (Il2CppObject *)__this_00;
          il2cpp_runtime_helper_022b4080(&(pSVar12->fields)._syncRoot,__this_00);
          __this_01 = (System_Collections_Generic_List_object__c *)il2cpp_runtime_helper_023052d0(TypeInfo_ListSetting_StringSetting);
          Settings_ListSetting_object____ctor_3521170((Settings_ListSetting_T__o *)__this_01,MethodInfo_ListSetting_1_StringSetting);
          pSVar12[1].klass = __this_01;
          il2cpp_runtime_helper_022b4080(pSVar12 + 1,__this_01);
          pSVar6 = (Settings_ListSetting_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_ListSetting_StringSetting);
          Settings_ListSetting_object____ctor_3521170(pSVar6,MethodInfo_ListSetting_1_StringSetting);
          pSVar12[1].monitor = pSVar6;
          il2cpp_runtime_helper_022b4080(&pSVar12[1].monitor,pSVar6);
          pSVar7 = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_ListSetting_StringSetting);
          Settings_ListSetting_object____ctor_3521170((Settings_ListSetting_T__o *)pSVar7,MethodInfo_ListSetting_1_StringSetting);
          pSVar12[1].fields._items = pSVar7;
          il2cpp_runtime_helper_022b4080(&pSVar12[1].fields,pSVar7);
          pSVar6 = (Settings_ListSetting_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_ListSetting_StringSetting);
          Settings_ListSetting_object____ctor_3521170(pSVar6,MethodInfo_ListSetting_1_StringSetting);
          *(Settings_ListSetting_T__o **)&pSVar12[1].fields._size = pSVar6;
          il2cpp_runtime_helper_022b4080(&pSVar12[1].fields._size);
          Settings_SaveableSettingsContainer___ctor
                    ((Settings_SaveableSettingsContainer_o *)pSVar12,(MethodInfo *)0x0);
          return extraout_EAX;
        }
        uVar10 = 0;
        if (0 < (pSVar11->fields)._size) {
          pSVar9 = *(System_Collections_Generic_List_object__o **)(lVar3 + 0x18);
          do {
            iVar8 = (int)uVar10;
            pSVar12 = pSVar11;
            pIVar5 = System_Collections_Generic_List_object___get_Item(pSVar11,iVar8,MethodInfo_StringSetting_get_Item);
            if (pIVar5 == (Il2CppObject *)0x0) goto label_040851ad;
            pSVar12 = pIVar5[1].monitor;
            bVar4 = System_String__op_Equality
                              ((System_String_o *)pSVar12,(System_String_o *)value,(MethodInfo *)0x0);
            if ((char)bVar4 != '\0') {
              if ((pSVar9 != (System_Collections_Generic_List_object__o *)0x0) &&
                 (pIVar5 = System_Collections_Generic_List_object___get_Item(pSVar9,iVar8,MethodInfo_StringSetting_get_Item),
                 pSVar12 = pSVar9, pIVar5 != (Il2CppObject *)0x0)) {
                *extraout_RDX = pIVar5[1].monitor;
                il2cpp_runtime_helper_022b4080(extraout_RDX);
                return (bool_conflict)CONCAT71((int7)(uVar10 >> 8),1);
              }
              goto label_040851ad;
            }
            uVar10 = (ulong)(iVar8 + 1U);
          } while ((int)(iVar8 + 1U) < (pSVar11->fields)._size);
        }
      }
      return 0;
    }
    pSVar9 = (System_Collections_Generic_List_object__o *)0x0;
    if (0 < (pSVar12->fields)._size) {
      __this_02 = (System_Collections_Generic_List_object__o *)(pSVar2->fields)._value;
      do {
        iVar8 = (int)pSVar9;
        value = pSVar9;
        pSVar11 = pSVar12;
        pIVar5 = System_Collections_Generic_List_object___get_Item(pSVar12,iVar8,MethodInfo_StringSetting_get_Item);
        if (pIVar5 == (Il2CppObject *)0x0) goto label_0408506d;
        pSVar11 = pIVar5[1].monitor;
        value = (System_Collections_Generic_List_object__o *)key;
        bVar4 = System_String__op_Equality((System_String_o *)pSVar11,key,(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if ((__this_02 != (System_Collections_Generic_List_object__o *)0x0) &&
             (value = pSVar9,
             pIVar5 = System_Collections_Generic_List_object___get_Item(__this_02,iVar8,MethodInfo_StringSetting_get_Item),
             pSVar11 = __this_02, pIVar5 != (Il2CppObject *)0x0)) {
            *url = pIVar5[1].monitor;
            il2cpp_runtime_helper_022b4080(url);
            return (bool_conflict)CONCAT71((int7)((ulong)pSVar9 >> 8),1);
          }
          goto label_0408506d;
        }
        pSVar9 = (System_Collections_Generic_List_object__o *)(ulong)(iVar8 + 1U);
      } while ((int)(iVar8 + 1U) < (pSVar12->fields)._size);
    }
  }
  return 0;
}


// Settings.AdvancedSettings$$TryGetSecretValue
// il2cpp: bool Settings_AdvancedSettings__TryGetSecretValue (Settings_AdvancedSettings_o* __this, System_String_o* key, System_String_o** value, const MethodInfo* method);
// 0x4085080

bool_conflict
Settings_AdvancedSettings__TryGetSecretValue
          (Settings_AdvancedSettings_o *__this,System_String_o *key,System_String_o **value,MethodInfo *method
          )

{
  Settings_ListSetting_StringSetting__o *pSVar1;
  Settings_ListSetting_StringSetting__o *pSVar2;
  System_Collections_Generic_List_object__o *__this_00;
  bool_conflict bVar3;
  bool_conflict extraout_EAX;
  Il2CppObject *pIVar4;
  Settings_BoolSetting_o *__this_01;
  System_Collections_Generic_List_object__c *__this_02;
  Settings_ListSetting_T__o *pSVar5;
  System_Object_array *__this_03;
  int index;
  ulong uVar6;
  System_Collections_Generic_List_object__o *__this_04;
  System_Collections_Generic_List_object__o *__this_05;
  
  if (g_data_057ac3cf == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_StringSetting_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Settings_StringSetting_get_Value);
    g_data_057ac3cf = '\x01';
  }
  *value = (System_String_o *)0x0;
  il2cpp_runtime_helper_022b4080(value);
  __this_04 = (System_Collections_Generic_List_object__o *)key;
  bVar3 = System_String__IsNullOrEmpty(key,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    pSVar1 = (__this->fields).SecretKeys;
    if (((pSVar1 == (Settings_ListSetting_StringSetting__o *)0x0) ||
        (pSVar2 = (__this->fields).SecretValues, pSVar2 == (Settings_ListSetting_StringSetting__o *)0x0)) ||
       (__this_00 = (System_Collections_Generic_List_object__o *)(pSVar1->fields)._value,
       __this_00 == (System_Collections_Generic_List_object__o *)0x0)) {
label_040851ad:
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ac3d0 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_BoolSetting);
        il2cpp_runtime_helper_023445d0(&MethodInfo_ListSetting_1_StringSetting);
        il2cpp_runtime_helper_023445d0(&TypeInfo_ListSetting_StringSetting);
        g_data_057ac3d0 = '\x01';
      }
      __this_01 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
      Settings_BoolSetting___ctor_40f3960(__this_01,0,(MethodInfo *)0x0);
      (__this_04->fields)._syncRoot = (Il2CppObject *)__this_01;
      il2cpp_runtime_helper_022b4080(&(__this_04->fields)._syncRoot,__this_01);
      __this_02 = (System_Collections_Generic_List_object__c *)il2cpp_runtime_helper_023052d0(TypeInfo_ListSetting_StringSetting);
      Settings_ListSetting_object____ctor_3521170((Settings_ListSetting_T__o *)__this_02,MethodInfo_ListSetting_1_StringSetting);
      __this_04[1].klass = __this_02;
      il2cpp_runtime_helper_022b4080(__this_04 + 1,__this_02);
      pSVar5 = (Settings_ListSetting_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_ListSetting_StringSetting);
      Settings_ListSetting_object____ctor_3521170(pSVar5,MethodInfo_ListSetting_1_StringSetting);
      __this_04[1].monitor = pSVar5;
      il2cpp_runtime_helper_022b4080(&__this_04[1].monitor,pSVar5);
      __this_03 = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_ListSetting_StringSetting);
      Settings_ListSetting_object____ctor_3521170((Settings_ListSetting_T__o *)__this_03,MethodInfo_ListSetting_1_StringSetting);
      __this_04[1].fields._items = __this_03;
      il2cpp_runtime_helper_022b4080(&__this_04[1].fields,__this_03);
      pSVar5 = (Settings_ListSetting_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_ListSetting_StringSetting);
      Settings_ListSetting_object____ctor_3521170(pSVar5,MethodInfo_ListSetting_1_StringSetting);
      *(Settings_ListSetting_T__o **)&__this_04[1].fields._size = pSVar5;
      il2cpp_runtime_helper_022b4080(&__this_04[1].fields._size);
      Settings_SaveableSettingsContainer___ctor
                ((Settings_SaveableSettingsContainer_o *)__this_04,(MethodInfo *)0x0);
      return extraout_EAX;
    }
    uVar6 = 0;
    if (0 < (__this_00->fields)._size) {
      __this_05 = (System_Collections_Generic_List_object__o *)(pSVar2->fields)._value;
      do {
        index = (int)uVar6;
        __this_04 = __this_00;
        pIVar4 = System_Collections_Generic_List_object___get_Item(__this_00,index,MethodInfo_StringSetting_get_Item);
        if (pIVar4 == (Il2CppObject *)0x0) goto label_040851ad;
        __this_04 = pIVar4[1].monitor;
        bVar3 = System_String__op_Equality((System_String_o *)__this_04,key,(MethodInfo *)0x0);
        if ((char)bVar3 != '\0') {
          if ((__this_05 != (System_Collections_Generic_List_object__o *)0x0) &&
             (pIVar4 = System_Collections_Generic_List_object___get_Item(__this_05,index,MethodInfo_StringSetting_get_Item),
             __this_04 = __this_05, pIVar4 != (Il2CppObject *)0x0)) {
            *value = pIVar4[1].monitor;
            il2cpp_runtime_helper_022b4080(value);
            return (bool_conflict)CONCAT71((int7)(uVar6 >> 8),1);
          }
          goto label_040851ad;
        }
        uVar6 = (ulong)(index + 1U);
      } while ((int)(index + 1U) < (__this_00->fields)._size);
    }
  }
  return 0;
}


// Settings.AdvancedSettings$$.ctor
// il2cpp: void Settings_AdvancedSettings___ctor (Settings_AdvancedSettings_o* __this, const MethodInfo* method);
// 0x40851c0

void Settings_AdvancedSettings___ctor(Settings_AdvancedSettings_o *__this,MethodInfo *method)

{
  Settings_BoolSetting_o *__this_00;
  Settings_ListSetting_StringSetting__o *pSVar1;
  
  if (g_data_057ac3d0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BoolSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ListSetting_1_StringSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ListSetting_StringSetting);
    g_data_057ac3d0 = '\x01';
  }
  __this_00 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960(__this_00,0,(MethodInfo *)0x0);
  (__this->fields).ServicesEnabled = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields).ServicesEnabled,__this_00);
  pSVar1 = (Settings_ListSetting_StringSetting__o *)il2cpp_runtime_helper_023052d0(TypeInfo_ListSetting_StringSetting);
  Settings_ListSetting_object____ctor_3521170((Settings_ListSetting_T__o *)pSVar1,MethodInfo_ListSetting_1_StringSetting);
  (__this->fields).ServiceKeys = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields).ServiceKeys,pSVar1);
  pSVar1 = (Settings_ListSetting_StringSetting__o *)il2cpp_runtime_helper_023052d0(TypeInfo_ListSetting_StringSetting);
  Settings_ListSetting_object____ctor_3521170((Settings_ListSetting_T__o *)pSVar1,MethodInfo_ListSetting_1_StringSetting);
  (__this->fields).ServiceUrls = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields).ServiceUrls,pSVar1);
  pSVar1 = (Settings_ListSetting_StringSetting__o *)il2cpp_runtime_helper_023052d0(TypeInfo_ListSetting_StringSetting);
  Settings_ListSetting_object____ctor_3521170((Settings_ListSetting_T__o *)pSVar1,MethodInfo_ListSetting_1_StringSetting);
  (__this->fields).SecretKeys = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields).SecretKeys,pSVar1);
  pSVar1 = (Settings_ListSetting_StringSetting__o *)il2cpp_runtime_helper_023052d0(TypeInfo_ListSetting_StringSetting);
  Settings_ListSetting_object____ctor_3521170((Settings_ListSetting_T__o *)pSVar1,MethodInfo_ListSetting_1_StringSetting);
  (__this->fields).SecretValues = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields).SecretValues);
  Settings_SaveableSettingsContainer___ctor((Settings_SaveableSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


