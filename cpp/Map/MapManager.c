// Type: Map.MapManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Map/MapManager.cs
// Prior real C# source (older reference): Assets/Scripts/Map/MapManager.cs
// --------------------------------

// Map.MapManager$$Init
// il2cpp: void Map_MapManager__Init (const MethodInfo* method);
// 0x40b1e10

void Map_MapManager__Init(MethodInfo *method)

{
  long lVar1;
  Il2CppObject *pIVar2;
  Events_OnLoadScene_o *value;
  Events_OnPreLoadScene_o *value_00;
  MethodInfo *method_00;
  
  if (g_data_057ac4ce == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinMapPrefabs);
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinMapTextures);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnLoadScene);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnPreLoadScene);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapTransfer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_OnLoadScene);
    il2cpp_runtime_helper_023445d0(&TypeInfo_OnPreLoadScene);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapManager_CreateSingleton_MapManager);
    g_data_057ac4ce = '\x01';
  }
  if (*(int *)(TypeInfo_MapManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar2 = Utility_SingletonFactory__CreateSingleton_object_
                     (*(Il2CppObject **)(*(long *)(TypeInfo_MapManager + 0xb8) + 0x10),MethodInfo_MapManager_CreateSingleton_MapManager);
  lVar1 = *(long *)(TypeInfo_MapManager + 0xb8);
  *(Il2CppObject **)(lVar1 + 0x10) = pIVar2;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x10);
  method_00 = TypeInfo_MapTransfer;
  if (*(int *)((long)&TypeInfo_MapTransfer[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Map_MapTransfer__Init(method_00);
  if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Map_MapLoader__Init((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Map_BuiltinLevels__Init((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_BuiltinMapPrefabs + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Map_BuiltinMapPrefabs__Init((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_BuiltinMapTextures + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Map_BuiltinMapTextures__Init((MethodInfo *)0x0);
  value = (Events_OnLoadScene_o *)il2cpp_runtime_helper_023052d0(TypeInfo_OnLoadScene);
  Events_OnLoadScene___ctor();
  Events_EventManager__add_OnLoadScene(value,(MethodInfo *)0x0);
  value_00 = (Events_OnPreLoadScene_o *)il2cpp_runtime_helper_023052d0(TypeInfo_OnPreLoadScene);
  Events_OnPreLoadScene___ctor();
  Events_EventManager__add_OnPreLoadScene(value_00,(MethodInfo *)0x0);
  return;
}


// Map.MapManager$$TryGetRandomTagXform
// il2cpp: bool Map_MapManager__TryGetRandomTagXform (System_String_o* tag, UnityEngine_Transform_o** xform, const MethodInfo* method);
// 0x40b20d0

bool_conflict
Map_MapManager__TryGetRandomTagXform(System_String_o *tag,UnityEngine_Transform_o **xform,MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_List_Enumerator_object__o __this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar2;
  Il2CppRGCTXData *pIVar3;
  UnityEngine_Transform_o *pUVar4;
  Il2CppObject *pIVar5;
  Il2CppRGCTXData *list;
  UnityEngine_Object_o *exists;
  MethodInfo *pMVar6;
  long *plVar7;
  Il2CppRGCTXData *pIVar8;
  System_Collections_Generic_Dictionary_object__object__o *pSVar9;
  undefined1 auVar10 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar11;
  Il2CppType *pIVar12;
  System_String_o *tag_00;
  System_String_o *pSVar13;
  undefined1 auStack_78 [16];
  System_String_o *pSStack_68;
  Il2CppRGCTXData *pIStack_60;
  
  pMVar6 = (MethodInfo *)xform;
  if (g_data_057ac4cf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ac4cf = '\x01';
  }
  if (*(int *)(TypeInfo_MapManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar3 = (Il2CppRGCTXData *)Map_MapManager__GetRandomTag(tag,pMVar6);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar8 = (Il2CppRGCTXData *)0x0;
  list = pIVar3;
  bVar2 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pIVar3,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    *xform = (UnityEngine_Transform_o *)0x0;
    il2cpp_runtime_helper_022b4080(xform,0);
    return 0;
  }
  if (pIVar3 != (Il2CppRGCTXData *)0x0) {
    pUVar4 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pIVar3,(MethodInfo *)0x0);
    *xform = pUVar4;
    il2cpp_runtime_helper_022b4080(xform,pUVar4);
    return (bool_conflict)CONCAT71((int7)((ulong)pIVar3 >> 8),1);
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac4d2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Map_MapObject_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_GetRandomItem_MapObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    g_data_057ac4d2 = '\x01';
    if (*(int *)(TypeInfo_MapLoader + 0xe4) != 0) goto label_040b21b4;
label_040b222f:
    il2cpp_runtime_helper_02337ed0();
    pSVar9 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x18);
    pIVar3 = (Il2CppRGCTXData *)0x0;
    if (pSVar9 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_040b231d;
  }
  else {
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) goto label_040b222f;
label_040b21b4:
    pSVar9 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x18);
    if (pSVar9 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pIVar3 = (Il2CppRGCTXData *)0x0;
      goto label_040b231d;
    }
  }
  pIVar8 = list;
  bVar2 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                    (pSVar9,(Il2CppObject *)list,MethodInfo_Boolean_ContainsKey);
  if ((char)bVar2 == '\0') {
    return 0;
  }
  if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar3 = *(Il2CppRGCTXData **)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x18);
  if ((pIVar3 != (Il2CppRGCTXData *)0x0) &&
     (pIVar8 = list,
     pIVar5 = System_Collections_Generic_Dictionary_object__object___get_Item
                        ((System_Collections_Generic_Dictionary_object__object__o *)pIVar3,
                         (Il2CppObject *)list,MethodInfo_List_1_Map_MapObject_get_Item), pIVar5 != (Il2CppObject *)0x0)) {
    if (*(int *)&pIVar5[1].monitor < 1) {
      return 0;
    }
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar9 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x18);
    pIVar3 = (Il2CppRGCTXData *)0x0;
    if (pSVar9 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      list = (Il2CppRGCTXData *)
             System_Collections_Generic_Dictionary_object__object___get_Item
                       (pSVar9,(Il2CppObject *)list,MethodInfo_List_1_Map_MapObject_get_Item);
      if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar8 = MethodInfo_MapObject_GetRandomItem_MapObject;
      pIVar3 = list;
      pIVar5 = MiscExtensions__GetRandomItem_object_
                         ((System_Collections_Generic_List_T__o *)list,(MethodInfo_2583990 *)MethodInfo_MapObject_GetRandomItem_MapObject);
      if (pIVar5 != (Il2CppObject *)0x0) {
        return (bool_conflict)pIVar5[1].monitor;
      }
    }
  }
label_040b231d:
  il2cpp_runtime_helper_022b2c90();
  pIStack_60 = list;
  if (g_data_057ac4d0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ac4d0 = '\x01';
  }
  pSVar11 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar12 = (Il2CppType *)0x0;
  tag_00 = (System_String_o *)0x0;
  if (pIVar3 == (Il2CppRGCTXData *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_78,
               (System_Collections_Generic_List_object__o *)pIVar3,MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    pSVar11 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_78._0_8_;
    pIVar12 = (Il2CppType *)auStack_78._8_8_;
    tag_00 = pSStack_68;
    do {
      __this.fields._8_8_ = pIVar12;
      __this.fields._list = (System_Collections_Generic_List_T__o *)pSVar11;
      __this.fields._current = (Il2CppObject *)tag_00;
      pMVar6 = MethodInfo_Boolean_MoveNext;
      bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this,(MethodInfo_321A1D0 *)&stack0xffffffffffffff68);
      if ((char)bVar2 == '\0') {
        __this_01.fields._8_8_ = pIVar12;
        __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar11;
        __this_01.fields._current = (Il2CppObject *)tag_00;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffff68);
        goto label_040b2497;
      }
      pSVar13 = tag_00;
      if (*(int *)(TypeInfo_MapManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      exists = (UnityEngine_Object_o *)Map_MapManager__GetRandomTag(tag_00,pMVar6);
      tag_00 = pSVar13;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        tag_00 = pSVar13;
      }
      bVar2 = UnityEngine_Object__op_Implicit(exists,(MethodInfo *)0x0);
    } while ((char)bVar2 == '\0');
    if (exists != (UnityEngine_Object_o *)0x0) {
      pMVar6 = (MethodInfo *)
               UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)exists,(MethodInfo *)0x0);
      pIVar8->method = pMVar6;
      il2cpp_runtime_helper_022b4080(pIVar8,pMVar6);
      __this_00.fields._8_8_ = pIVar12;
      __this_00.fields._list = (System_Collections_Generic_List_T__o *)pSVar11;
      __this_00.fields._current = (Il2CppObject *)tag_00;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_00,(MethodInfo_321A1C0 *)&stack0xffffffffffffff68);
      return (bool_conflict)CONCAT71((int7)((ulong)exists >> 8),1);
    }
  }
  auVar10 = il2cpp_runtime_helper_022b2c90();
  if (auVar10._8_4_ == 1) {
    plVar7 = (long *)__cxa_begin_catch(auVar10._0_8_);
    lVar1 = *plVar7;
    __cxa_end_catch();
    __this_02.fields._8_8_ = pIVar12;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar11;
    __this_02.fields._current = (Il2CppObject *)tag_00;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff68);
    if (lVar1 == 0) {
label_040b2497:
      pIVar8->rgctxDataDummy = (void *)0x0;
      il2cpp_runtime_helper_022b4080(pIVar8,0);
      return 0;
    }
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_03.fields._8_8_ = pIVar12;
  __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar11;
  __this_03.fields._current = (Il2CppObject *)tag_00;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff68);
  _Unwind_Resume(auVar10._0_8_);
}


// Map.MapManager$$TryGetRandomTagsXform
// il2cpp: bool Map_MapManager__TryGetRandomTagsXform (System_Collections_Generic_List_string__o* tags, UnityEngine_Transform_o** xform, const MethodInfo* method);
// 0x40b2330

bool_conflict
Map_MapManager__TryGetRandomTagsXform
          (System_Collections_Generic_List_string__o *tags,UnityEngine_Transform_o **xform,MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_List_Enumerator_object__o __this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar2;
  UnityEngine_Object_o *exists;
  UnityEngine_Transform_o *pUVar3;
  long *plVar4;
  MethodInfo *method_00;
  undefined1 auVar5 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar6;
  Il2CppType *pIVar7;
  System_String_o *tag;
  System_String_o *pSVar8;
  undefined1 local_48 [16];
  System_String_o *local_38;
  
  if (g_data_057ac4d0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ac4d0 = '\x01';
  }
  pSVar6 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar7 = (Il2CppType *)0x0;
  tag = (System_String_o *)0x0;
  if (tags == (System_Collections_Generic_List_string__o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
               (System_Collections_Generic_List_object__o *)tags,MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    pSVar6 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
    pIVar7 = (Il2CppType *)local_48._8_8_;
    tag = local_38;
    do {
      __this.fields._8_8_ = pIVar7;
      __this.fields._list = (System_Collections_Generic_List_T__o *)pSVar6;
      __this.fields._current = (Il2CppObject *)tag;
      method_00 = MethodInfo_Boolean_MoveNext;
      bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98);
      if ((char)bVar2 == '\0') {
        __this_01.fields._8_8_ = pIVar7;
        __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar6;
        __this_01.fields._current = (Il2CppObject *)tag;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
        goto label_040b2497;
      }
      pSVar8 = tag;
      if (*(int *)(TypeInfo_MapManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      exists = (UnityEngine_Object_o *)Map_MapManager__GetRandomTag(tag,method_00);
      tag = pSVar8;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        tag = pSVar8;
      }
      bVar2 = UnityEngine_Object__op_Implicit(exists,(MethodInfo *)0x0);
    } while ((char)bVar2 == '\0');
    if (exists != (UnityEngine_Object_o *)0x0) {
      pUVar3 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)exists,(MethodInfo *)0x0);
      *xform = pUVar3;
      il2cpp_runtime_helper_022b4080(xform,pUVar3);
      __this_00.fields._8_8_ = pIVar7;
      __this_00.fields._list = (System_Collections_Generic_List_T__o *)pSVar6;
      __this_00.fields._current = (Il2CppObject *)tag;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_00,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
      return (bool_conflict)CONCAT71((int7)((ulong)exists >> 8),1);
    }
  }
  auVar5 = il2cpp_runtime_helper_022b2c90();
  if (auVar5._8_4_ == 1) {
    plVar4 = (long *)__cxa_begin_catch(auVar5._0_8_);
    lVar1 = *plVar4;
    __cxa_end_catch();
    __this_02.fields._8_8_ = pIVar7;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar6;
    __this_02.fields._current = (Il2CppObject *)tag;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
    if (lVar1 == 0) {
label_040b2497:
      *xform = (UnityEngine_Transform_o *)0x0;
      il2cpp_runtime_helper_022b4080(xform,0);
      return 0;
    }
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_03.fields._8_8_ = pIVar7;
  __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar6;
  __this_03.fields._current = (Il2CppObject *)tag;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  _Unwind_Resume(auVar5._0_8_);
}


// Map.MapManager$$TryGetRandomTagXforms
// il2cpp: bool Map_MapManager__TryGetRandomTagXforms (System_String_o* tag, UnityEngine_Vector3_o avoidPosition, float avoidRadius, int32_t count, System_Collections_Generic_List_Transform__o** xforms, const MethodInfo* method);
// 0x40b2580

bool_conflict
Map_MapManager__TryGetRandomTagXforms
          (System_String_o *tag,UnityEngine_Vector3_o avoidPosition,float avoidRadius,int32_t count,
          System_Collections_Generic_List_Transform__o **xforms,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_Object_array *pSVar3;
  UnityEngine_Transform_array *pUVar4;
  long lVar5;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar6;
  int32_t index;
  System_Collections_Generic_List_Transform__o *pSVar7;
  UnityEngine_Transform_o *pUVar8;
  System_Collections_Generic_List_object__o *__this_05;
  undefined8 extraout_RAX;
  undefined8 extraout_RAX_00;
  Il2CppObject *pIVar9;
  long *plVar10;
  UnityEngine_GameObject_o *__this_06;
  int iVar11;
  int iVar12;
  float fVar13;
  undefined4 in_XMM0_Dc;
  uint32_t extraout_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined4 extraout_XMM0_Dd;
  float fVar14;
  float in_XMM1_Db;
  float fVar15;
  float fVar16;
  float in_XMM1_Dc;
  float fVar17;
  float in_XMM1_Dd;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  uint32_t uVar22;
  undefined4 uVar23;
  undefined1 auVar24 [12];
  UnityEngine_Vector3_o UVar25;
  System_Collections_Generic_List_T__o *pSVar26;
  Il2CppObject *local_98;
  System_Collections_Generic_List_object__o *local_90;
  undefined1 local_88 [8];
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined1 local_68 [8];
  uint32_t uStack_60;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  local_78 = avoidPosition.fields.z;
  fStack_80 = (float)in_XMM0_Dc;
  local_88 = (undefined1  [8])avoidPosition.fields._0_8_;
  fStack_7c = (float)in_XMM0_Dd;
  fStack_74 = in_XMM1_Db;
  fStack_70 = in_XMM1_Dc;
  fStack_6c = in_XMM1_Dd;
  if (g_data_057ac4d1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Map_MapObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Transform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Transform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Transform_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Transform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    g_data_057ac4d1 = '\x01';
  }
  local_90 = (System_Collections_Generic_List_object__o *)0x0;
  pSVar26 = (System_Collections_Generic_List_T__o *)0x0;
  local_98 = (Il2CppObject *)0x0;
  *xforms = (System_Collections_Generic_List_Transform__o *)0x0;
  il2cpp_runtime_helper_022b4080();
  if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this = *(System_Collections_Generic_Dictionary_object__object__o **)
            (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x18);
  if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_040b2a9c;
  bVar6 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                    (__this,(Il2CppObject *)tag,(Il2CppObject **)&local_90,MethodInfo_Boolean_TryGetValue);
  if ((char)bVar6 == '\0') {
    bVar6 = 0;
  }
  else {
    tag = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Transform);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)tag,MethodInfo_List_1_UnityEngine_Transform);
    pSVar7 = (System_Collections_Generic_List_Transform__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Transform);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)pSVar7,MethodInfo_List_1_UnityEngine_Transform);
    *xforms = pSVar7;
    il2cpp_runtime_helper_022b4080(xforms,pSVar7);
    if (local_90 == (System_Collections_Generic_List_object__o *)0x0) goto label_040b2a9c;
    System_Collections_Generic_List_object___GetEnumerator(&local_48,local_90,MethodInfo_List_1_T_Enumerator_Map_MapObject_GetEnumerator);
    local_98 = local_48.fields._current;
    if ((System_Collections_Generic_List_object__o *)tag == (System_Collections_Generic_List_object__o *)0x0)
    {
      __this_01.fields._list._4_4_ = avoidRadius;
      __this_01.fields._list._0_4_ = count;
      __this_01.fields._8_8_ = xforms;
      __this_01.fields._current = (Il2CppObject *)local_48.fields._list;
      bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff58);
      pSVar26 = local_48.fields._list;
      if ((char)bVar6 != '\0') goto label_040b2aa6;
    }
    else {
      pSVar26 = local_48.fields._list;
      while (__this_00.fields._list._4_4_ = avoidRadius, __this_00.fields._list._0_4_ = count,
            __this_00.fields._8_8_ = xforms, __this_00.fields._current = (Il2CppObject *)pSVar26,
            bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff58), (char)bVar6 != '\0')
      {
        if (local_48.fields._current == (Il2CppObject *)0x0) goto label_040b2ab0;
        __this_06 = (UnityEngine_GameObject_o *)0x0;
        if (local_48.fields._current[1].monitor == (UnityEngine_GameObject_o *)0x0) goto label_040b2abe;
        pUVar8 = UnityEngine_GameObject__get_transform(local_48.fields._current[1].monitor,(MethodInfo *)0x0);
        lVar5 = MethodInfo_Void_Add;
        piVar1 = &(((System_Collections_Generic_List_object__o *)tag)->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar3 = (((System_Collections_Generic_List_object__o *)tag)->fields)._items;
        if (pSVar3 == (System_Object_array *)0x0) goto label_040b2aa1;
        uVar2 = (((System_Collections_Generic_List_object__o *)tag)->fields)._size;
        if (uVar2 < (uint)pSVar3->max_length) {
          (((System_Collections_Generic_List_object__o *)tag)->fields)._size = uVar2 + 1;
          pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)pUVar8;
          il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2,pUVar8);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)tag,(Il2CppObject *)pUVar8,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
    __this_02.fields._list._4_4_ = avoidRadius;
    __this_02.fields._list._0_4_ = count;
    __this_02.fields._8_8_ = xforms;
    __this_02.fields._current = (Il2CppObject *)pSVar26;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff58);
    while( true ) {
      __this_05 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Transform);
      System_Collections_Generic_List_object____ctor_362ba10
                (__this_05,(System_Collections_Generic_IEnumerable_T__o *)tag,MethodInfo_List_1_UnityEngine_Transform);
      bVar6 = (bool_conflict)CONCAT71((int7)((ulong)extraout_RAX >> 8),1);
      if (count < 1) break;
      fVar13 = (float)local_88._0_4_;
      local_88._0_4_ = local_88._4_4_;
      iVar12 = 0;
      iVar11 = 0;
      fVar16 = (float)local_88._4_4_;
      fVar17 = fStack_80;
      fVar18 = fStack_7c;
      fStack_70 = fStack_74;
      fStack_6c = (float)local_88._4_4_;
      while (fStack_74 = fVar13, __this_05 != (System_Collections_Generic_List_object__o *)0x0) {
        if ((__this_05->fields)._size < 1) {
          __this_05 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Transform);
          System_Collections_Generic_List_object____ctor_362ba10
                    (__this_05,(System_Collections_Generic_IEnumerable_T__o *)tag,MethodInfo_List_1_UnityEngine_Transform);
          if (__this_05 == (System_Collections_Generic_List_object__o *)0x0) break;
        }
        index = UnityEngine_Random__Range_4df2410(0,(__this_05->fields)._size,(MethodInfo *)0x0);
        pUVar8 = (UnityEngine_Transform_o *)
                 System_Collections_Generic_List_object___get_Item(__this_05,index,MethodInfo_Transform_get_Item);
        if (pUVar8 == (UnityEngine_Transform_o *)0x0) break;
        UVar25 = UnityEngine_Transform__get_position(pUVar8,(MethodInfo *)0x0);
        if (avoidRadius <= 0.0) {
label_040b2a20:
          pSVar7 = *xforms;
          pUVar8 = (UnityEngine_Transform_o *)
                   System_Collections_Generic_List_object___get_Item(__this_05,index,MethodInfo_Transform_get_Item);
          lVar5 = MethodInfo_Void_Add;
          if (pSVar7 == (System_Collections_Generic_List_Transform__o *)0x0) break;
          piVar1 = &(pSVar7->fields)._version;
          *piVar1 = *piVar1 + 1;
          pUVar4 = (pSVar7->fields)._items;
          if (pUVar4 == (UnityEngine_Transform_array *)0x0) break;
          uVar2 = (pSVar7->fields)._size;
          if (uVar2 < (uint)pUVar4->max_length) {
            (pSVar7->fields)._size = uVar2 + 1;
            pUVar4->m_Items[(int)uVar2] = pUVar8;
            il2cpp_runtime_helper_022b4080(pUVar4->m_Items + (int)uVar2,pUVar8);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar7,(Il2CppObject *)pUVar8,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          }
        }
        else {
          fVar13 = UVar25.fields.z;
          fVar19 = UVar25.fields.x;
          fVar21 = UVar25.fields.y;
          uVar22 = extraout_XMM0_Dc;
          uVar23 = extraout_XMM0_Dd;
          if (g_data_057a68cb == '\0') {
            uStack_60 = extraout_XMM0_Dc;
            local_68 = (undefined1  [8])UVar25.fields._0_8_;
            uStack_5c = (uint16_t)extraout_XMM0_Dd;
            uStack_5a = SUB42(extraout_XMM0_Dd,2);
            local_58 = UVar25.fields.z;
            fStack_54 = fVar16;
            fStack_50 = fVar17;
            fStack_4c = fVar18;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
            g_data_057a68cb = '\x01';
            fVar13 = local_58;
            fVar16 = fStack_54;
            fVar19 = (float)local_68._0_4_;
            fVar21 = (float)local_68._4_4_;
            uVar22 = uStack_60;
            uVar23 = _uStack_5c;
          }
          fVar14 = fVar13 - local_78;
          fVar15 = fVar19 - fStack_74;
          fVar17 = fVar16 - fStack_70;
          fVar18 = fVar21 - fStack_6c;
          fVar20 = fVar21 - (float)local_88._0_4_;
          if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
            local_68._4_4_ = fVar21;
            local_68._0_4_ = fVar21 - (float)local_88._0_4_;
            uStack_60 = uVar22;
            uStack_5c = (uint16_t)uVar23;
            uStack_5a = SUB42(uVar23,2);
            local_58 = fVar13 - local_78;
            fStack_54 = fVar19 - fStack_74;
            fStack_50 = fVar16 - fStack_70;
            fStack_4c = fVar21 - fStack_6c;
            il2cpp_runtime_helper_02337ed0();
            fVar14 = local_58;
            fVar15 = fStack_54;
            fVar17 = fStack_50;
            fVar18 = fStack_4c;
            fVar20 = (float)local_68._0_4_;
          }
          fVar16 = fVar15 * fVar15;
          fVar17 = fVar17 * fVar17;
          fVar18 = fVar18 * fVar18;
          fVar13 = fVar16 + fVar20 * fVar20 + fVar14 * fVar14;
          if (fVar13 < 0.0) {
            fVar13 = sqrtf(fVar13);
            if (iVar12 < 0x65) goto label_040b29fb;
            goto label_040b2a20;
          }
          fVar13 = SQRT(fVar13);
          if (100 < iVar12) goto label_040b2a20;
label_040b29fb:
          if (avoidRadius < fVar13) goto label_040b2a20;
          iVar11 = iVar11 + -1;
          iVar12 = iVar12 + 1;
        }
        System_Collections_Generic_List_object___RemoveAt(__this_05,index,MethodInfo_Void_RemoveAt);
        iVar11 = iVar11 + 1;
        fVar13 = fStack_74;
        if (count <= iVar11) {
          return (bool_conflict)CONCAT71((int7)((ulong)extraout_RAX_00 >> 8),1);
        }
      }
label_040b2a9c:
      il2cpp_runtime_helper_022b2c90();
label_040b2aa1:
      il2cpp_runtime_helper_022b2c90();
label_040b2aa6:
      pIVar9 = local_98;
      if (local_98 == (Il2CppObject *)0x0) {
label_040b2ab0:
        pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
      }
      __this_06 = pIVar9[1].monitor;
      if (__this_06 == (UnityEngine_GameObject_o *)0x0) {
label_040b2abe:
        il2cpp_runtime_helper_022b2c90();
      }
      UnityEngine_GameObject__get_transform(__this_06,(MethodInfo *)0x0);
      auVar24 = il2cpp_runtime_helper_022b2c90();
      if (auVar24._8_4_ != 1) goto label_040b2b48;
      plVar10 = (long *)__cxa_begin_catch(auVar24._0_8_);
      lVar5 = *plVar10;
      __cxa_end_catch();
      __this_03.fields._list._4_4_ = avoidRadius;
      __this_03.fields._list._0_4_ = count;
      __this_03.fields._8_8_ = xforms;
      __this_03.fields._current = (Il2CppObject *)pSVar26;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff58);
      if (lVar5 != 0) {
        il2cpp_runtime_helper_022fefe0(lVar5);
label_040b2b48:
        __this_04.fields._list._4_4_ = avoidRadius;
        __this_04.fields._list._0_4_ = count;
        __this_04.fields._8_8_ = xforms;
        __this_04.fields._current = (Il2CppObject *)pSVar26;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff58);
        _Unwind_Resume(auVar24._0_8_);
      }
    }
  }
  return bVar6;
}


// Map.MapManager$$GetRandomTag
// il2cpp: UnityEngine_GameObject_o* Map_MapManager__GetRandomTag (System_String_o* tag, const MethodInfo* method);
// 0x40b2190

UnityEngine_GameObject_o * Map_MapManager__GetRandomTag(System_String_o *tag,MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_List_Enumerator_object__o __this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar2;
  Il2CppObject *pIVar3;
  UnityEngine_Object_o *exists;
  UnityEngine_Transform_o *pUVar4;
  long *plVar5;
  ulong uVar6;
  MethodInfo *method_00;
  System_Collections_Generic_Dictionary_object__object__o *pSVar7;
  Il2CppRGCTXData *__this_04;
  undefined1 auVar8 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar9;
  Il2CppType *pIVar10;
  System_String_o *tag_00;
  System_String_o *pSVar11;
  undefined1 auStack_60 [16];
  System_String_o *pSStack_50;
  Il2CppRGCTXData *pIStack_48;
  
  if (g_data_057ac4d2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Map_MapObject_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_GetRandomItem_MapObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    g_data_057ac4d2 = '\x01';
    if (*(int *)(TypeInfo_MapLoader + 0xe4) != 0) goto label_040b21b4;
label_040b222f:
    il2cpp_runtime_helper_02337ed0();
    pSVar7 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x18);
    __this_04 = (Il2CppRGCTXData *)0x0;
    if (pSVar7 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_040b224b:
      method = (MethodInfo *)tag;
      bVar2 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                        (pSVar7,(Il2CppObject *)tag,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar2 == '\0') {
        return (UnityEngine_GameObject_o *)0x0;
      }
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_04 = *(Il2CppRGCTXData **)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x18);
      if ((__this_04 != (Il2CppRGCTXData *)0x0) &&
         (method = (MethodInfo *)tag,
         pIVar3 = System_Collections_Generic_Dictionary_object__object___get_Item
                            ((System_Collections_Generic_Dictionary_object__object__o *)__this_04,
                             (Il2CppObject *)tag,MethodInfo_List_1_Map_MapObject_get_Item), pIVar3 != (Il2CppObject *)0x0)) {
        if (*(int *)&pIVar3[1].monitor < 1) {
          return (UnityEngine_GameObject_o *)0x0;
        }
        if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar7 = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x18);
        __this_04 = (Il2CppRGCTXData *)0x0;
        if (pSVar7 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          tag = (System_String_o *)
                System_Collections_Generic_Dictionary_object__object___get_Item
                          (pSVar7,(Il2CppObject *)tag,MethodInfo_List_1_Map_MapObject_get_Item);
          if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          method = MethodInfo_MapObject_GetRandomItem_MapObject;
          __this_04 = (Il2CppRGCTXData *)tag;
          pIVar3 = MiscExtensions__GetRandomItem_object_
                             ((System_Collections_Generic_List_T__o *)tag,(MethodInfo_2583990 *)MethodInfo_MapObject_GetRandomItem_MapObject);
          if (pIVar3 != (Il2CppObject *)0x0) {
            return pIVar3[1].monitor;
          }
        }
      }
    }
  }
  else {
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) goto label_040b222f;
label_040b21b4:
    pSVar7 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x18);
    if (pSVar7 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_040b224b;
    __this_04 = (Il2CppRGCTXData *)0x0;
  }
  il2cpp_runtime_helper_022b2c90();
  pIStack_48 = (Il2CppRGCTXData *)tag;
  if (g_data_057ac4d0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ac4d0 = '\x01';
  }
  pSVar9 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar10 = (Il2CppType *)0x0;
  tag_00 = (System_String_o *)0x0;
  if (__this_04 == (Il2CppRGCTXData *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_60,
               (System_Collections_Generic_List_object__o *)__this_04,MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    pSVar9 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_60._0_8_;
    pIVar10 = (Il2CppType *)auStack_60._8_8_;
    tag_00 = pSStack_50;
    do {
      __this.fields._8_8_ = pIVar10;
      __this.fields._list = (System_Collections_Generic_List_T__o *)pSVar9;
      __this.fields._current = (Il2CppObject *)tag_00;
      method_00 = MethodInfo_Boolean_MoveNext;
      bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this,(MethodInfo_321A1D0 *)&stack0xffffffffffffff80);
      if ((char)bVar2 == '\0') {
        __this_01.fields._8_8_ = pIVar10;
        __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar9;
        __this_01.fields._current = (Il2CppObject *)tag_00;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffff80);
        goto label_040b2497;
      }
      pSVar11 = tag_00;
      if (*(int *)(TypeInfo_MapManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      exists = (UnityEngine_Object_o *)Map_MapManager__GetRandomTag(tag_00,method_00);
      tag_00 = pSVar11;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        tag_00 = pSVar11;
      }
      bVar2 = UnityEngine_Object__op_Implicit(exists,(MethodInfo *)0x0);
    } while ((char)bVar2 == '\0');
    if (exists != (UnityEngine_Object_o *)0x0) {
      pUVar4 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)exists,(MethodInfo *)0x0);
      method->methodPointer = (Il2CppMethodPointer)pUVar4;
      il2cpp_runtime_helper_022b4080(method,pUVar4);
      __this_00.fields._8_8_ = pIVar10;
      __this_00.fields._list = (System_Collections_Generic_List_T__o *)pSVar9;
      __this_00.fields._current = (Il2CppObject *)tag_00;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_00,(MethodInfo_321A1C0 *)&stack0xffffffffffffff80);
      uVar6 = CONCAT71((int7)((ulong)exists >> 8),1);
      goto label_040b24aa;
    }
  }
  auVar8 = il2cpp_runtime_helper_022b2c90();
  if (auVar8._8_4_ == 1) {
    plVar5 = (long *)__cxa_begin_catch(auVar8._0_8_);
    lVar1 = *plVar5;
    __cxa_end_catch();
    __this_02.fields._8_8_ = pIVar10;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar9;
    __this_02.fields._current = (Il2CppObject *)tag_00;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff80);
    if (lVar1 == 0) {
label_040b2497:
      method->methodPointer = (Il2CppMethodPointer)0x0;
      uVar6 = 0;
      il2cpp_runtime_helper_022b4080(method,0);
label_040b24aa:
      return (UnityEngine_GameObject_o *)(uVar6 & 0xffffffff);
    }
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_03.fields._8_8_ = pIVar10;
  __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar9;
  __this_03.fields._current = (Il2CppObject *)tag_00;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff80);
  _Unwind_Resume(auVar8._0_8_);
}


// Map.MapManager$$OnPreLoadScene
// il2cpp: void Map_MapManager__OnPreLoadScene (int32_t sceneName, const MethodInfo* method);
// 0x40b2b80

void Map_MapManager__OnPreLoadScene(int32_t sceneName,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ac4d3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapManager);
    g_data_057ac4d3 = '\x01';
    iVar1 = *(int *)(TypeInfo_MapManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MapManager + 0xe4);
  }
  if (iVar1 != 0) {
    **(undefined1 **)(TypeInfo_MapManager + 0xb8) = 0;
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  **(undefined1 **)(TypeInfo_MapManager + 0xb8) = 0;
  return;
}


// Map.MapManager$$OnLoadScene
// il2cpp: void Map_MapManager__OnLoadScene (int32_t sceneName, const MethodInfo* method);
// 0x40b2bf0

void Map_MapManager__OnLoadScene(int32_t sceneName,MethodInfo *method)

{
  Il2CppMethodPointer pIVar1;
  long *plVar2;
  Photon_Pun_PhotonView_o *__this;
  Il2CppObject *pIVar3;
  Il2CppClass *pIVar4;
  Map_MapScriptOptions_o *options;
  Photon_Pun_PhotonMessageInfo_o info;
  char cVar5;
  bool_conflict bVar6;
  System_Collections_Generic_List_string__o *pSVar7;
  System_Collections_Generic_List_MapScriptBaseObject__o *pSVar8;
  System_String_o *pSVar9;
  Map_MapScript_o *pMVar10;
  System_Object_array *parameters;
  long lVar11;
  long lVar12;
  Il2CppObject **a;
  System_Collections_Generic_List_TSource__o *__this_00;
  MethodInfo *pMVar13;
  System_String_Fields __this_01;
  System_Collections_Generic_List_object__o *__this_02;
  Settings_WeatherSet_o *pSVar14;
  MethodInfo *pMVar15;
  System_String_array *pSVar16;
  Il2CppMethodPointer pIStack_38;
  Il2CppMethodPointer pIStack_30;
  Photon_Pun_PhotonView_o *pPStack_28;
  char *pcStack_20;
  
  if (g_data_057ac4d4 == '\0') {
    pcStack_20 = (char *)0x40b2c0b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    pcStack_20 = (char *)0x40b2c17;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Map_MapScriptBaseObject);
    pcStack_20 = (char *)0x40b2c23;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_MapScriptBaseObject);
    pcStack_20 = (char *)0x40b2c2f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    pcStack_20 = (char *)0x40b2c3b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    pcStack_20 = (char *)0x40b2c47;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapManager);
    g_data_057ac4d4 = '\x01';
  }
  if (sceneName == 3) {
    if (*(int *)((long)&TypeInfo_MapManager[2].parameters + 4) == 0) {
      pcStack_20 = (char *)0x40b2d2d;
      pMVar15 = TypeInfo_MapManager;
      il2cpp_runtime_helper_02337ed0();
      Map_MapManager__StartMapEditor(pMVar15);
      return;
    }
    Map_MapManager__StartMapEditor(TypeInfo_MapManager);
    return;
  }
  if (sceneName != 2) {
    pcStack_20 = (char *)0x40b2cad;
    pSVar7 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    pcStack_20 = (char *)0x40b2cc2;
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)pSVar7,MethodInfo_List_1_System_String);
    pcStack_20 = (char *)0x40b2cd1;
    pSVar8 = (System_Collections_Generic_List_MapScriptBaseObject__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_MapScriptBaseObject);
    pcStack_20 = (char *)0x40b2ce6;
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)pSVar8,MethodInfo_List_1_Map_MapScriptBaseObject);
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      pcStack_20 = (char *)0x40b2cfe;
      il2cpp_runtime_helper_02337ed0();
    }
    Map_MapLoader__StartLoadObjects
              (pSVar7,pSVar8,(Map_MapScriptOptions_o *)0x0,(Settings_WeatherSet_o *)0x0,0,(MethodInfo *)0x0);
    return;
  }
  if (*(int *)((long)&TypeInfo_MapManager[2].parameters + 4) == 0) {
    pcStack_20 = (char *)0x40b2d1f;
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ac4d5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScript);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapTransfer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RPCManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    il2cpp_runtime_helper_023445d0(&"Custom");
    il2cpp_runtime_helper_023445d0(&"LoadBuiltinMapRPC");
    g_data_057ac4d5 = '\x01';
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) != 0) goto label_040b2d6b;
label_040b2e2d:
    il2cpp_runtime_helper_02337ed0();
    bVar6 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar5 = (char)bVar6;
  }
  else {
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) goto label_040b2e2d;
label_040b2d6b:
    bVar6 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar5 = (char)bVar6;
  }
  if (cVar5 == '\0') {
    return;
  }
  lVar12 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if (((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x38), lVar12 == 0)) || (*(long *)(lVar12 + 0x20) == 0))
  {
label_040b30c8:
    il2cpp_runtime_helper_022b2c90();
label_040b30cd:
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    bVar6 = System_String__op_Equality
                      (*(System_String_o **)(*(long *)(lVar12 + 0x20) + 0x18),(System_String_o *)"Custom",
                       (MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      if (*(long *)(lVar12 + 0x28) != 0) {
        pMVar15 = *(MethodInfo **)(*(long *)(lVar12 + 0x28) + 0x18);
        if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar9 = Map_BuiltinLevels__LoadMap
                           ((System_String_o *)"Custom",(System_String_o *)pMVar15,(MethodInfo *)0x0);
        pMVar10 = (Map_MapScript_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScript);
        Map_MapScript___ctor(pMVar10,pMVar15);
        if (*(int *)((long)&TypeInfo_MapManager[2].parameters + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pIVar1 = TypeInfo_MapManager[2].virtualMethodPointer;
        *(Map_MapScript_o **)(pIVar1 + 8) = pMVar10;
        il2cpp_runtime_helper_022b4080(pIVar1 + 8);
        plVar2 = *(long **)(TypeInfo_MapManager[2].virtualMethodPointer + 8);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x188))(plVar2,pSVar9,*(undefined8 *)(*plVar2 + 400));
          pMVar15 = TypeInfo_MapTransfer;
          if (*(int *)((long)&TypeInfo_MapTransfer[2].parameters + 4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          Map_MapTransfer__Start(pMVar15);
          if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pMVar15 = (MethodInfo *)&stack0xffffffffffffffc8;
          Utility_Util__CreateLocalPhotonInfo((Photon_Pun_PhotonMessageInfo_o *)pMVar15,(MethodInfo *)0x0);
          info.fields.Sender = (Photon_Realtime_Player_o *)pIStack_30;
          info.fields._0_8_ = pIStack_38;
          info.fields.photonView = pPStack_28;
          Map_MapManager__OnLoadCachedMapRPC(info,pMVar15);
          return;
        }
      }
      goto label_040b30c8;
    }
    if (*(int *)((long)&TypeInfo_MapTransfer[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    *TypeInfo_MapTransfer[2].virtualMethodPointer = (Il2CppMethodPointer)0x1;
    __this = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
    parameters = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
    if ((*(long *)(lVar12 + 0x20) == 0) || (parameters == (System_Object_array *)0x0)) goto label_040b30c8;
    pIVar3 = *(Il2CppObject **)(*(long *)(lVar12 + 0x20) + 0x18);
    if ((pIVar3 == (Il2CppObject *)0x0) || (lVar11 = il2cpp_runtime_helper_023051f0(pIVar3), lVar11 != 0)) {
      if ((int)parameters->max_length != 0) {
        parameters->m_Items[0] = pIVar3;
        il2cpp_runtime_helper_022b4080(parameters->m_Items);
        if (*(long *)(lVar12 + 0x28) != 0) {
          pIVar3 = *(Il2CppObject **)(*(long *)(lVar12 + 0x28) + 0x18);
          if ((pIVar3 != (Il2CppObject *)0x0) && (lVar12 = il2cpp_runtime_helper_023051f0(pIVar3), lVar12 == 0))
          goto label_040b30d2;
          if ((uint)parameters->max_length < 2) goto label_040b30cd;
          parameters->m_Items[1] = pIVar3;
          il2cpp_runtime_helper_022b4080(parameters->m_Items + 1);
          if (__this != (Photon_Pun_PhotonView_o *)0x0) {
            Photon_Pun_PhotonView__RPC(__this,"LoadBuiltinMapRPC",0,parameters,(MethodInfo *)0x0);
            return;
          }
        }
        goto label_040b30c8;
      }
      goto label_040b30cd;
    }
  }
label_040b30d2:
  a = (Il2CppObject **)il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ac4d6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String_ToList_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScript);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&"Custom");
    a = &"Untitled";
    il2cpp_runtime_helper_023445d0();
    g_data_057ac4d6 = '\x01';
  }
  lVar12 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x78);
  if (lVar12 == 0) goto label_040b33ed;
  pMVar15 = *(MethodInfo **)(lVar12 + 0x20);
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  a = (Il2CppObject **)Map_BuiltinLevels__GetMapNames((System_String_o *)"Custom",(MethodInfo *)0x0);
  __this_00 = System_Linq_Enumerable__ToList_object_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)a,MethodInfo_List_1_System_String_ToList_String);
  if (pMVar15 == (MethodInfo *)0x0) goto label_040b33ed;
  a = (Il2CppObject **)pMVar15->name;
  bVar6 = System_String__op_Equality
                    ((System_String_o *)a,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                     (MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    if (__this_00 == (System_Collections_Generic_List_TSource__o *)0x0) goto label_040b33ed;
    pMVar13 = (MethodInfo *)pMVar15->name;
    bVar6 = System_Collections_Generic_List_object___Contains
                      ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pMVar13,
                       MethodInfo_Boolean_Contains);
    if ((char)bVar6 == '\0') goto label_040b3268;
  }
  else {
    if (__this_00 == (System_Collections_Generic_List_TSource__o *)0x0) goto label_040b33ed;
label_040b3268:
    if ((__this_00->fields)._size < 1) {
      pMVar13 = pMVar15;
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)pMVar15,"Untitled",MethodInfo_Void_set_Value);
      pSVar9 = (System_String_o *)pMVar15->name;
      pMVar13 = (MethodInfo *)Map_MapScript__CreateDefault(pMVar13);
      if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Map_BuiltinLevels__SaveCustomMap(pSVar9,(Map_MapScript_o *)pMVar13,(MethodInfo *)0x0);
    }
    else {
      pMVar13 = (MethodInfo *)
                System_Collections_Generic_List_object___get_Item
                          ((System_Collections_Generic_List_object__o *)__this_00,0,MethodInfo_String_get_Item);
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)pMVar15,(Il2CppObject *)pMVar13,MethodInfo_Void_set_Value);
    }
  }
  pMVar10 = (Map_MapScript_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScript);
  Map_MapScript___ctor(pMVar10,pMVar13);
  if (*(int *)((long)&TypeInfo_MapManager[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar1 = TypeInfo_MapManager[2].virtualMethodPointer;
  *(Map_MapScript_o **)(pIVar1 + 8) = pMVar10;
  il2cpp_runtime_helper_022b4080(pIVar1 + 8,pMVar10);
  pSVar16 = *(System_String_array **)(TypeInfo_MapManager[2].virtualMethodPointer + 8);
  pSVar9 = (System_String_o *)pMVar15->name;
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  a = (Il2CppObject **)"Custom";
  pSVar9 = Map_BuiltinLevels__LoadMap((System_String_o *)"Custom",pSVar9,(MethodInfo *)0x0);
  if (pSVar16 != (System_String_array *)0x0) {
    pIVar4 = (pSVar16->obj).klass;
    (*(((System_String_VTable *)pIVar4->vtable)->_5_System_Collections_IEnumerable_GetEnumerator).methodPtr)
              (pSVar16,pSVar9,
               (((System_String_VTable *)pIVar4->vtable)->_5_System_Collections_IEnumerable_GetEnumerator).
               method);
    lVar12 = *(long *)(TypeInfo_MapManager[2].virtualMethodPointer + 8);
    a = (Il2CppObject **)pSVar16;
    if (((lVar12 != 0) && (*(long *)(lVar12 + 0x28) != 0)) && (*(long *)(lVar12 + 0x30) != 0)) {
      pSVar7 = *(System_Collections_Generic_List_string__o **)(*(long *)(lVar12 + 0x28) + 0x10);
      pSVar8 = *(System_Collections_Generic_List_MapScriptBaseObject__o **)(*(long *)(lVar12 + 0x30) + 0x10);
      options = *(Map_MapScriptOptions_o **)(lVar12 + 0x20);
      pSVar14 = *(Settings_WeatherSet_o **)(lVar12 + 0x38);
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Map_MapLoader__StartLoadObjects(pSVar7,pSVar8,options,pSVar14,1,(MethodInfo *)0x0);
      return;
    }
  }
label_040b33ed:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac4e3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptCustomAssets);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptObjects);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptOptions);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherSet);
    il2cpp_runtime_helper_023445d0(&"/// ");
    g_data_057ac4e3 = '\x01';
  }
  *(System_String_Fields *)&((System_String_array *)a)->bounds = "/// ";
  il2cpp_runtime_helper_022b4080((System_String_Fields *)&((System_String_array *)a)->bounds);
  *(undefined2 *)&((System_String_array *)a)->max_length = 10;
  pSVar9 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptOptions);
  if (g_data_057ac4e9 == '\0') {
    il2cpp_runtime_helper_023445d0(&"1.0");
    g_data_057ac4e9 = '\x01';
  }
  pSVar9->fields = "1.0";
  il2cpp_runtime_helper_022b4080(&pSVar9->fields);
  pSVar9[1].klass = (System_String_c *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  il2cpp_runtime_helper_022b4080(pSVar9 + 1);
  Utility_BaseCSVRow___ctor((Utility_BaseCSVRow_o *)pSVar9,(MethodInfo *)0x0);
  ((System_String_array *)a)->m_Items[0] = pSVar9;
  il2cpp_runtime_helper_022b4080(((System_String_array *)a)->m_Items,pSVar9);
  pSVar9 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptCustomAssets);
  if (g_data_057ac4e6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057ac4e6 = '\x01';
  }
  __this_01 = (System_String_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_System_String);
  pSVar9->fields = __this_01;
  il2cpp_runtime_helper_022b4080(&pSVar9->fields);
  Utility_BaseCSVContainer___ctor((Utility_BaseCSVContainer_o *)pSVar9,(MethodInfo *)0x0);
  ((System_String_array *)a)->m_Items[1] = pSVar9;
  il2cpp_runtime_helper_022b4080(((System_String_array *)a)->m_Items + 1,pSVar9);
  pSVar9 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptObjects);
  if (g_data_057ac4e8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Map_MapScriptBaseObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_MapScriptBaseObject);
    g_data_057ac4e8 = '\x01';
  }
  __this_02 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_MapScriptBaseObject);
  System_Collections_Generic_List_object____ctor(__this_02,MethodInfo_List_1_Map_MapScriptBaseObject);
  *(System_Collections_Generic_List_object__o **)&(pSVar9->fields)._stringLength = __this_02;
  il2cpp_runtime_helper_022b4080(&pSVar9->fields);
  Utility_BaseCSVContainer___ctor((Utility_BaseCSVContainer_o *)pSVar9,(MethodInfo *)0x0);
  ((System_String_array *)a)->m_Items[2] = pSVar9;
  il2cpp_runtime_helper_022b4080(((System_String_array *)a)->m_Items + 2);
  pSVar14 = (Settings_WeatherSet_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WeatherSet);
  Settings_WeatherSet___ctor(pSVar14,(MethodInfo *)0x0);
  ((System_String_array *)a)->m_Items[3] = (System_String_o *)pSVar14;
  il2cpp_runtime_helper_022b4080(((System_String_array *)a)->m_Items + 3,pSVar14);
  ((System_String_array *)a)->m_Items[4] = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  il2cpp_runtime_helper_022b4080(((System_String_array *)a)->m_Items + 4);
  ((System_String_array *)a)->m_Items[5] = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  il2cpp_runtime_helper_022b4080(((System_String_array *)a)->m_Items + 5);
  System_Object___ctor((Il2CppObject *)a,(MethodInfo *)0x0);
  return;
}


// Map.MapManager$$StartInGame
// il2cpp: void Map_MapManager__StartInGame (const MethodInfo* method);
// 0x40b2d40

void Map_MapManager__StartInGame(MethodInfo *method)

{
  long *plVar1;
  Photon_Pun_PhotonView_o *__this;
  Il2CppObject *pIVar2;
  Il2CppClass *pIVar3;
  System_Collections_Generic_List_string__o *customAssets;
  System_Collections_Generic_List_MapScriptBaseObject__o *objects;
  Map_MapScriptOptions_o *options;
  Photon_Pun_PhotonMessageInfo_o info;
  char cVar4;
  bool_conflict bVar5;
  System_String_o *pSVar6;
  Map_MapScript_o *pMVar7;
  System_Object_array *parameters;
  long lVar8;
  long lVar9;
  Il2CppObject **a;
  System_Collections_Generic_List_TSource__o *__this_00;
  MethodInfo *pMVar10;
  System_String_Fields __this_01;
  System_Collections_Generic_List_object__o *__this_02;
  Settings_WeatherSet_o *pSVar11;
  MethodInfo *pMVar12;
  System_String_array *pSVar13;
  Il2CppMethodPointer pIStack_38;
  Il2CppMethodPointer pIStack_30;
  Photon_Pun_PhotonView_o *pPStack_28;
  
  if (g_data_057ac4d5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScript);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapTransfer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RPCManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    il2cpp_runtime_helper_023445d0(&"Custom");
    il2cpp_runtime_helper_023445d0(&"LoadBuiltinMapRPC");
    g_data_057ac4d5 = '\x01';
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) != 0) goto label_040b2d6b;
label_040b2e2d:
    il2cpp_runtime_helper_02337ed0();
    bVar5 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar4 = (char)bVar5;
  }
  else {
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) goto label_040b2e2d;
label_040b2d6b:
    bVar5 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar4 = (char)bVar5;
  }
  if (cVar4 == '\0') {
    return;
  }
  lVar9 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if (((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x38), lVar9 == 0)) || (*(long *)(lVar9 + 0x20) == 0)) {
label_040b30c8:
    il2cpp_runtime_helper_022b2c90();
label_040b30cd:
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    bVar5 = System_String__op_Equality
                      (*(System_String_o **)(*(long *)(lVar9 + 0x20) + 0x18),(System_String_o *)"Custom",
                       (MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      if (*(long *)(lVar9 + 0x28) != 0) {
        pMVar12 = *(MethodInfo **)(*(long *)(lVar9 + 0x28) + 0x18);
        if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar6 = Map_BuiltinLevels__LoadMap
                           ((System_String_o *)"Custom",(System_String_o *)pMVar12,(MethodInfo *)0x0);
        pMVar7 = (Map_MapScript_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScript);
        Map_MapScript___ctor(pMVar7,pMVar12);
        if (*(int *)(TypeInfo_MapManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        lVar9 = *(long *)(TypeInfo_MapManager + 0xb8);
        *(Map_MapScript_o **)(lVar9 + 8) = pMVar7;
        il2cpp_runtime_helper_022b4080(lVar9 + 8);
        plVar1 = *(long **)(*(long *)(TypeInfo_MapManager + 0xb8) + 8);
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x188))(plVar1,pSVar6,*(undefined8 *)(*plVar1 + 400));
          pMVar12 = TypeInfo_MapTransfer;
          if (*(int *)((long)&TypeInfo_MapTransfer[2].parameters + 4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          Map_MapTransfer__Start(pMVar12);
          if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pMVar12 = (MethodInfo *)&stack0xffffffffffffffc8;
          Utility_Util__CreateLocalPhotonInfo((Photon_Pun_PhotonMessageInfo_o *)pMVar12,(MethodInfo *)0x0);
          info.fields.Sender = (Photon_Realtime_Player_o *)pIStack_30;
          info.fields._0_8_ = pIStack_38;
          info.fields.photonView = pPStack_28;
          Map_MapManager__OnLoadCachedMapRPC(info,pMVar12);
          return;
        }
      }
      goto label_040b30c8;
    }
    if (*(int *)((long)&TypeInfo_MapTransfer[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    *TypeInfo_MapTransfer[2].virtualMethodPointer = (Il2CppMethodPointer)0x1;
    __this = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
    parameters = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
    if ((*(long *)(lVar9 + 0x20) == 0) || (parameters == (System_Object_array *)0x0)) goto label_040b30c8;
    pIVar2 = *(Il2CppObject **)(*(long *)(lVar9 + 0x20) + 0x18);
    if ((pIVar2 == (Il2CppObject *)0x0) || (lVar8 = il2cpp_runtime_helper_023051f0(pIVar2), lVar8 != 0)) {
      if ((int)parameters->max_length != 0) {
        parameters->m_Items[0] = pIVar2;
        il2cpp_runtime_helper_022b4080(parameters->m_Items);
        if (*(long *)(lVar9 + 0x28) != 0) {
          pIVar2 = *(Il2CppObject **)(*(long *)(lVar9 + 0x28) + 0x18);
          if ((pIVar2 != (Il2CppObject *)0x0) && (lVar9 = il2cpp_runtime_helper_023051f0(pIVar2), lVar9 == 0))
          goto label_040b30d2;
          if ((uint)parameters->max_length < 2) goto label_040b30cd;
          parameters->m_Items[1] = pIVar2;
          il2cpp_runtime_helper_022b4080(parameters->m_Items + 1);
          if (__this != (Photon_Pun_PhotonView_o *)0x0) {
            Photon_Pun_PhotonView__RPC(__this,"LoadBuiltinMapRPC",0,parameters,(MethodInfo *)0x0);
            return;
          }
        }
        goto label_040b30c8;
      }
      goto label_040b30cd;
    }
  }
label_040b30d2:
  a = (Il2CppObject **)il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ac4d6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String_ToList_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScript);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&"Custom");
    a = &"Untitled";
    il2cpp_runtime_helper_023445d0();
    g_data_057ac4d6 = '\x01';
  }
  lVar9 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x78);
  if (lVar9 == 0) goto label_040b33ed;
  pMVar12 = *(MethodInfo **)(lVar9 + 0x20);
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  a = (Il2CppObject **)Map_BuiltinLevels__GetMapNames((System_String_o *)"Custom",(MethodInfo *)0x0);
  __this_00 = System_Linq_Enumerable__ToList_object_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)a,MethodInfo_List_1_System_String_ToList_String);
  if (pMVar12 == (MethodInfo *)0x0) goto label_040b33ed;
  a = (Il2CppObject **)pMVar12->name;
  bVar5 = System_String__op_Equality
                    ((System_String_o *)a,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                     (MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    if (__this_00 == (System_Collections_Generic_List_TSource__o *)0x0) goto label_040b33ed;
    pMVar10 = (MethodInfo *)pMVar12->name;
    bVar5 = System_Collections_Generic_List_object___Contains
                      ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pMVar10,
                       MethodInfo_Boolean_Contains);
    if ((char)bVar5 == '\0') goto label_040b3268;
  }
  else {
    if (__this_00 == (System_Collections_Generic_List_TSource__o *)0x0) goto label_040b33ed;
label_040b3268:
    if ((__this_00->fields)._size < 1) {
      pMVar10 = pMVar12;
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)pMVar12,"Untitled",MethodInfo_Void_set_Value);
      pSVar6 = (System_String_o *)pMVar12->name;
      pMVar10 = (MethodInfo *)Map_MapScript__CreateDefault(pMVar10);
      if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Map_BuiltinLevels__SaveCustomMap(pSVar6,(Map_MapScript_o *)pMVar10,(MethodInfo *)0x0);
    }
    else {
      pMVar10 = (MethodInfo *)
                System_Collections_Generic_List_object___get_Item
                          ((System_Collections_Generic_List_object__o *)__this_00,0,MethodInfo_String_get_Item);
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)pMVar12,(Il2CppObject *)pMVar10,MethodInfo_Void_set_Value);
    }
  }
  pMVar7 = (Map_MapScript_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScript);
  Map_MapScript___ctor(pMVar7,pMVar10);
  if (*(int *)(TypeInfo_MapManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar9 = *(long *)(TypeInfo_MapManager + 0xb8);
  *(Map_MapScript_o **)(lVar9 + 8) = pMVar7;
  il2cpp_runtime_helper_022b4080(lVar9 + 8,pMVar7);
  pSVar13 = *(System_String_array **)(*(long *)(TypeInfo_MapManager + 0xb8) + 8);
  pSVar6 = (System_String_o *)pMVar12->name;
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  a = (Il2CppObject **)"Custom";
  pSVar6 = Map_BuiltinLevels__LoadMap((System_String_o *)"Custom",pSVar6,(MethodInfo *)0x0);
  if (pSVar13 != (System_String_array *)0x0) {
    pIVar3 = (pSVar13->obj).klass;
    (*(((System_String_VTable *)pIVar3->vtable)->_5_System_Collections_IEnumerable_GetEnumerator).methodPtr)
              (pSVar13,pSVar6,
               (((System_String_VTable *)pIVar3->vtable)->_5_System_Collections_IEnumerable_GetEnumerator).
               method);
    lVar9 = *(long *)(*(long *)(TypeInfo_MapManager + 0xb8) + 8);
    a = (Il2CppObject **)pSVar13;
    if (((lVar9 != 0) && (*(long *)(lVar9 + 0x28) != 0)) && (*(long *)(lVar9 + 0x30) != 0)) {
      customAssets = *(System_Collections_Generic_List_string__o **)(*(long *)(lVar9 + 0x28) + 0x10);
      objects = *(System_Collections_Generic_List_MapScriptBaseObject__o **)(*(long *)(lVar9 + 0x30) + 0x10);
      options = *(Map_MapScriptOptions_o **)(lVar9 + 0x20);
      pSVar11 = *(Settings_WeatherSet_o **)(lVar9 + 0x38);
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Map_MapLoader__StartLoadObjects(customAssets,objects,options,pSVar11,1,(MethodInfo *)0x0);
      return;
    }
  }
label_040b33ed:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac4e3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptCustomAssets);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptObjects);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptOptions);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherSet);
    il2cpp_runtime_helper_023445d0(&"/// ");
    g_data_057ac4e3 = '\x01';
  }
  *(System_String_Fields *)&((System_String_array *)a)->bounds = "/// ";
  il2cpp_runtime_helper_022b4080((System_String_Fields *)&((System_String_array *)a)->bounds);
  *(undefined2 *)&((System_String_array *)a)->max_length = 10;
  pSVar6 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptOptions);
  if (g_data_057ac4e9 == '\0') {
    il2cpp_runtime_helper_023445d0(&"1.0");
    g_data_057ac4e9 = '\x01';
  }
  pSVar6->fields = "1.0";
  il2cpp_runtime_helper_022b4080(&pSVar6->fields);
  pSVar6[1].klass = (System_String_c *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  il2cpp_runtime_helper_022b4080(pSVar6 + 1);
  Utility_BaseCSVRow___ctor((Utility_BaseCSVRow_o *)pSVar6,(MethodInfo *)0x0);
  ((System_String_array *)a)->m_Items[0] = pSVar6;
  il2cpp_runtime_helper_022b4080(((System_String_array *)a)->m_Items,pSVar6);
  pSVar6 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptCustomAssets);
  if (g_data_057ac4e6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057ac4e6 = '\x01';
  }
  __this_01 = (System_String_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_System_String);
  pSVar6->fields = __this_01;
  il2cpp_runtime_helper_022b4080(&pSVar6->fields);
  Utility_BaseCSVContainer___ctor((Utility_BaseCSVContainer_o *)pSVar6,(MethodInfo *)0x0);
  ((System_String_array *)a)->m_Items[1] = pSVar6;
  il2cpp_runtime_helper_022b4080(((System_String_array *)a)->m_Items + 1,pSVar6);
  pSVar6 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptObjects);
  if (g_data_057ac4e8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Map_MapScriptBaseObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_MapScriptBaseObject);
    g_data_057ac4e8 = '\x01';
  }
  __this_02 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_MapScriptBaseObject);
  System_Collections_Generic_List_object____ctor(__this_02,MethodInfo_List_1_Map_MapScriptBaseObject);
  *(System_Collections_Generic_List_object__o **)&(pSVar6->fields)._stringLength = __this_02;
  il2cpp_runtime_helper_022b4080(&pSVar6->fields);
  Utility_BaseCSVContainer___ctor((Utility_BaseCSVContainer_o *)pSVar6,(MethodInfo *)0x0);
  ((System_String_array *)a)->m_Items[2] = pSVar6;
  il2cpp_runtime_helper_022b4080(((System_String_array *)a)->m_Items + 2);
  pSVar11 = (Settings_WeatherSet_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WeatherSet);
  Settings_WeatherSet___ctor(pSVar11,(MethodInfo *)0x0);
  ((System_String_array *)a)->m_Items[3] = (System_String_o *)pSVar11;
  il2cpp_runtime_helper_022b4080(((System_String_array *)a)->m_Items + 3,pSVar11);
  ((System_String_array *)a)->m_Items[4] = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  il2cpp_runtime_helper_022b4080(((System_String_array *)a)->m_Items + 4);
  ((System_String_array *)a)->m_Items[5] = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  il2cpp_runtime_helper_022b4080(((System_String_array *)a)->m_Items + 5);
  System_Object___ctor((Il2CppObject *)a,(MethodInfo *)0x0);
  return;
}


// Map.MapManager$$StartMapEditor
// il2cpp: void Map_MapManager__StartMapEditor (const MethodInfo* method);
// 0x40b30f0

void Map_MapManager__StartMapEditor(MethodInfo *method)

{
  long lVar1;
  MethodInfo *__this;
  Il2CppClass *pIVar2;
  System_Collections_Generic_List_string__o *customAssets;
  System_Collections_Generic_List_MapScriptBaseObject__o *objects;
  Map_MapScriptOptions_o *options;
  bool_conflict bVar3;
  System_Collections_Generic_List_TSource__o *__this_00;
  MethodInfo *pMVar4;
  Map_MapScript_o *__this_01;
  System_String_o *pSVar5;
  System_String_Fields __this_02;
  System_Collections_Generic_List_object__o *__this_03;
  Settings_WeatherSet_o *pSVar6;
  Il2CppObject **ppIVar7;
  System_String_array *pSVar8;
  
  if (g_data_057ac4d6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String_ToList_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScript);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&"Custom");
    ppIVar7 = &"Untitled";
    il2cpp_runtime_helper_023445d0();
    g_data_057ac4d6 = '\x01';
    method = (MethodInfo *)ppIVar7;
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x78);
  if (lVar1 == 0) goto label_040b33ed;
  __this = *(MethodInfo **)(lVar1 + 0x20);
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method = (MethodInfo *)Map_BuiltinLevels__GetMapNames((System_String_o *)"Custom",(MethodInfo *)0x0);
  __this_00 = System_Linq_Enumerable__ToList_object_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)method,MethodInfo_List_1_System_String_ToList_String);
  if (__this == (MethodInfo *)0x0) goto label_040b33ed;
  method = (MethodInfo *)__this->name;
  bVar3 = System_String__op_Equality
                    ((System_String_o *)method,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                     (MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    if (__this_00 == (System_Collections_Generic_List_TSource__o *)0x0) goto label_040b33ed;
    pMVar4 = (MethodInfo *)__this->name;
    bVar3 = System_Collections_Generic_List_object___Contains
                      ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pMVar4,
                       MethodInfo_Boolean_Contains);
    if ((char)bVar3 == '\0') goto label_040b3268;
  }
  else {
    if (__this_00 == (System_Collections_Generic_List_TSource__o *)0x0) goto label_040b33ed;
label_040b3268:
    if ((__this_00->fields)._size < 1) {
      pMVar4 = __this;
      Settings_TypedSetting_object___set_Value((Settings_TypedSetting_T__o *)__this,"Untitled",MethodInfo_Void_set_Value)
      ;
      pSVar5 = (System_String_o *)__this->name;
      pMVar4 = (MethodInfo *)Map_MapScript__CreateDefault(pMVar4);
      if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Map_BuiltinLevels__SaveCustomMap(pSVar5,(Map_MapScript_o *)pMVar4,(MethodInfo *)0x0);
    }
    else {
      pMVar4 = (MethodInfo *)
               System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,0,MethodInfo_String_get_Item);
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)__this,(Il2CppObject *)pMVar4,MethodInfo_Void_set_Value);
    }
  }
  __this_01 = (Map_MapScript_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScript);
  Map_MapScript___ctor(__this_01,pMVar4);
  if (*(int *)(TypeInfo_MapManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar1 = *(long *)(TypeInfo_MapManager + 0xb8);
  *(Map_MapScript_o **)(lVar1 + 8) = __this_01;
  il2cpp_runtime_helper_022b4080(lVar1 + 8,__this_01);
  pSVar8 = *(System_String_array **)(*(long *)(TypeInfo_MapManager + 0xb8) + 8);
  pSVar5 = (System_String_o *)__this->name;
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method = (MethodInfo *)"Custom";
  pSVar5 = Map_BuiltinLevels__LoadMap((System_String_o *)"Custom",pSVar5,(MethodInfo *)0x0);
  if (pSVar8 != (System_String_array *)0x0) {
    pIVar2 = (pSVar8->obj).klass;
    (*(((System_String_VTable *)pIVar2->vtable)->_5_System_Collections_IEnumerable_GetEnumerator).methodPtr)
              (pSVar8,pSVar5,
               (((System_String_VTable *)pIVar2->vtable)->_5_System_Collections_IEnumerable_GetEnumerator).
               method);
    lVar1 = *(long *)(*(long *)(TypeInfo_MapManager + 0xb8) + 8);
    method = (MethodInfo *)pSVar8;
    if (((lVar1 != 0) && (*(long *)(lVar1 + 0x28) != 0)) && (*(long *)(lVar1 + 0x30) != 0)) {
      customAssets = *(System_Collections_Generic_List_string__o **)(*(long *)(lVar1 + 0x28) + 0x10);
      objects = *(System_Collections_Generic_List_MapScriptBaseObject__o **)(*(long *)(lVar1 + 0x30) + 0x10);
      options = *(Map_MapScriptOptions_o **)(lVar1 + 0x20);
      pSVar6 = *(Settings_WeatherSet_o **)(lVar1 + 0x38);
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Map_MapLoader__StartLoadObjects(customAssets,objects,options,pSVar6,1,(MethodInfo *)0x0);
      return;
    }
  }
label_040b33ed:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac4e3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptCustomAssets);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptObjects);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptOptions);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherSet);
    il2cpp_runtime_helper_023445d0(&"/// ");
    g_data_057ac4e3 = '\x01';
  }
  *(System_String_Fields *)&((System_String_array *)method)->bounds = "/// ";
  il2cpp_runtime_helper_022b4080((System_String_Fields *)&((System_String_array *)method)->bounds);
  *(undefined2 *)&((System_String_array *)method)->max_length = 10;
  pSVar5 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptOptions);
  if (g_data_057ac4e9 == '\0') {
    il2cpp_runtime_helper_023445d0(&"1.0");
    g_data_057ac4e9 = '\x01';
  }
  pSVar5->fields = "1.0";
  il2cpp_runtime_helper_022b4080(&pSVar5->fields);
  pSVar5[1].klass = (System_String_c *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  il2cpp_runtime_helper_022b4080(pSVar5 + 1);
  Utility_BaseCSVRow___ctor((Utility_BaseCSVRow_o *)pSVar5,(MethodInfo *)0x0);
  ((System_String_array *)method)->m_Items[0] = pSVar5;
  il2cpp_runtime_helper_022b4080(((System_String_array *)method)->m_Items,pSVar5);
  pSVar5 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptCustomAssets);
  if (g_data_057ac4e6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057ac4e6 = '\x01';
  }
  __this_02 = (System_String_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_02,MethodInfo_List_1_System_String);
  pSVar5->fields = __this_02;
  il2cpp_runtime_helper_022b4080(&pSVar5->fields);
  Utility_BaseCSVContainer___ctor((Utility_BaseCSVContainer_o *)pSVar5,(MethodInfo *)0x0);
  ((System_String_array *)method)->m_Items[1] = pSVar5;
  il2cpp_runtime_helper_022b4080(((System_String_array *)method)->m_Items + 1,pSVar5);
  pSVar5 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptObjects);
  if (g_data_057ac4e8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Map_MapScriptBaseObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_MapScriptBaseObject);
    g_data_057ac4e8 = '\x01';
  }
  __this_03 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_MapScriptBaseObject);
  System_Collections_Generic_List_object____ctor(__this_03,MethodInfo_List_1_Map_MapScriptBaseObject);
  *(System_Collections_Generic_List_object__o **)&(pSVar5->fields)._stringLength = __this_03;
  il2cpp_runtime_helper_022b4080(&pSVar5->fields);
  Utility_BaseCSVContainer___ctor((Utility_BaseCSVContainer_o *)pSVar5,(MethodInfo *)0x0);
  ((System_String_array *)method)->m_Items[2] = pSVar5;
  il2cpp_runtime_helper_022b4080(((System_String_array *)method)->m_Items + 2);
  pSVar6 = (Settings_WeatherSet_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WeatherSet);
  Settings_WeatherSet___ctor(pSVar6,(MethodInfo *)0x0);
  ((System_String_array *)method)->m_Items[3] = (System_String_o *)pSVar6;
  il2cpp_runtime_helper_022b4080(((System_String_array *)method)->m_Items + 3,pSVar6);
  ((System_String_array *)method)->m_Items[4] = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  il2cpp_runtime_helper_022b4080(((System_String_array *)method)->m_Items + 4);
  ((System_String_array *)method)->m_Items[5] = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  il2cpp_runtime_helper_022b4080(((System_String_array *)method)->m_Items + 5);
  System_Object___ctor((Il2CppObject *)method,(MethodInfo *)0x0);
  return;
}


// Map.MapManager$$OnLoadBuiltinMapRPC
// il2cpp: void Map_MapManager__OnLoadBuiltinMapRPC (System_String_o* category, System_String_o* name, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x40b3e60

void Map_MapManager__OnLoadBuiltinMapRPC
               (System_String_o *category,System_String_o *name,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  int iVar1;
  long *plVar2;
  System_Threading_CancellationTokenSource_o *pSVar3;
  Il2CppObject *pIVar4;
  System_Collections_Generic_List_string__o *customAssets;
  System_Collections_Generic_List_MapScriptBaseObject__o *objects;
  Map_MapScriptOptions_o *options;
  Settings_WeatherSet_o *weather;
  System_Threading_SparselyPopulatedArray_CancellationCallbackInfo__array *__this;
  char cVar5;
  bool_conflict bVar6;
  uint uVar7;
  System_String_o *pSVar8;
  Map_MapScript_o *__this_00;
  undefined8 uVar9;
  Photon_Realtime_Player_o *player;
  long lVar10;
  long lVar11;
  Photon_Pun_PhotonView_o *pPVar12;
  Photon_Pun_MonoBehaviourPunCallbacks_o *__this_01;
  Map_MapScript_o *unaff_RBX;
  System_Object_array *parameters;
  undefined1 *puVar13;
  Photon_Realtime_Player_o *targetPlayer;
  MethodInfo *method_00;
  undefined1 uVar14;
  void **ppvVar15;
  Photon_Pun_MonoBehaviourPunCallbacks_o *__this_02;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  System_String_o *unaff_R14;
  Photon_Pun_PhotonView_o *__this_03;
  System_String_o *unaff_R15;
  
  puVar13 = &stack0xffffffffffffffe8;
  if (g_data_057ac4d7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScript);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapTransfer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    g_data_057ac4d7 = '\x01';
  }
  __this_00 = (Map_MapScript_o *)&info;
  ppvVar15 = (void **)0x0;
  if (info.fields.Sender == (Photon_Realtime_Player_o *)0x0) {
label_040b40e8:
    unaff_R15 = category;
    unaff_R14 = name;
    unaff_RBX = __this_00;
    uVar14 = SUB81(ppvVar15,0);
    uVar9 = il2cpp_runtime_helper_022b2c90();
  }
  else {
    bVar6 = Photon_Realtime_Player__get_IsMasterClient(info.fields.Sender,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
      return;
    }
    if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar8 = Map_BuiltinLevels__LoadMap(category,name,(MethodInfo *)0x0);
    __this_00 = (Map_MapScript_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScript);
    Map_MapScript___ctor(__this_00,(MethodInfo *)name);
    if (*(int *)((long)TypeInfo_MapManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar11 = (long)TypeInfo_MapManager[0x17];
    *(Map_MapScript_o **)(lVar11 + 8) = __this_00;
    il2cpp_runtime_helper_022b4080(lVar11 + 8,__this_00);
    plVar2 = *(long **)((long)TypeInfo_MapManager[0x17] + 8);
    ppvVar15 = (void **)0x0;
    name = pSVar8;
    category = (System_String_o *)&TypeInfo_MapManager;
    if (plVar2 == (long *)0x0) goto label_040b40e8;
    (**(code **)(*plVar2 + 0x188))(plVar2,pSVar8,*(undefined8 *)(*plVar2 + 400));
    __this_00 = (Map_MapScript_o *)**(long **)(g_data_057b9c00 + 0xb8);
    if (*(int *)((long)&TypeInfo_MapTransfer[5].fields.m_CancellationTokenSource + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = TypeInfo_MapTransfer[4].fields.m_CancellationTokenSource;
    pSVar3->monitor = __this_00;
    ppvVar15 = &pSVar3->monitor;
    il2cpp_runtime_helper_022b4080(ppvVar15,__this_00);
    lVar11 = *(long *)((long)TypeInfo_MapManager[0x17] + 8);
    name = (System_String_o *)&TypeInfo_MapTransfer;
    if (lVar11 == 0) goto label_040b40e8;
    bVar6 = System_String__op_Inequality
                      (*(System_String_o **)((long)TypeInfo_MapManager[0x17] + 0x20),
                       *(System_String_o **)(lVar11 + 0x48),(MethodInfo *)0x0);
    __this_00 = (Map_MapScript_o *)CONCAT71((int7)((ulong)__this_00 >> 8),1);
    if ((char)bVar6 == '\0') {
      if (*(int *)((long)TypeInfo_MapManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      lVar11 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
      ppvVar15 = TypeInfo_MapManager;
      if (((lVar11 == 0) || (lVar11 = *(long *)(lVar11 + 0x38), lVar11 == 0)) ||
         (lVar11 = *(long *)(lVar11 + 0x30), lVar11 == 0)) goto label_040b40e8;
      uVar7 = System_String__op_Inequality
                        (*(System_String_o **)((long)TypeInfo_MapManager[0x17] + 0x28),
                         *(System_String_o **)(lVar11 + 0x18),(MethodInfo *)0x0);
      __this_00 = (Map_MapScript_o *)(ulong)uVar7;
    }
    if (*(int *)((long)TypeInfo_MapManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    ppvVar15 = TypeInfo_MapManager[0x17];
    if (((System_Threading_CancellationTokenSource_Fields *)(ppvVar15 + 1))->_kernelEvent ==
        (System_Threading_ManualResetEvent_o *)0x0) goto label_040b40e8;
    ppvVar15[4] = (void *)((System_Threading_CancellationTokenSource_Fields *)(ppvVar15 + 1))->_kernelEvent[1]
                          .fields.waitHandle;
    ppvVar15 = ppvVar15 + 4;
    il2cpp_runtime_helper_022b4080();
    lVar11 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
    if (((lVar11 == 0) || (lVar11 = *(long *)(lVar11 + 0x38), lVar11 == 0)) ||
       (lVar11 = *(long *)(lVar11 + 0x30), lVar11 == 0)) goto label_040b40e8;
    lVar10 = (long)TypeInfo_MapManager[0x17];
    *(undefined8 *)(lVar10 + 0x28) = *(undefined8 *)(lVar11 + 0x18);
    uVar9 = il2cpp_runtime_helper_022b4080(lVar10 + 0x28);
    uVar14 = SUB81(__this_00,0);
    puVar13 = (undefined1 *)register0x00000020;
  }
  *(System_String_o **)(puVar13 + -8) = unaff_R15;
  *(System_String_o **)(puVar13 + -0x10) = unaff_R14;
  *(undefined8 *)(puVar13 + -0x18) = unaff_R12;
  *(Map_MapScript_o **)(puVar13 + -0x20) = unaff_RBX;
  *(undefined8 *)(puVar13 + -0x28) = uVar9;
  if (g_data_057ac4d9 == '\0') {
    *(undefined8 *)(puVar13 + -0x30) = 0x40b410f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    *(undefined8 *)(puVar13 + -0x30) = 0x40b411b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapManager);
    *(undefined8 *)(puVar13 + -0x30) = 0x40b4127;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapTransfer);
    *(undefined8 *)(puVar13 + -0x30) = 0x40b4133;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    *(undefined8 *)(puVar13 + -0x30) = 0x40b413f;
    il2cpp_runtime_helper_023445d0(&"CustomMapHash");
    g_data_057ac4d9 = '\x01';
  }
  __this_03 = (Photon_Pun_PhotonView_o *)&TypeInfo_MapManager;
  if (*(int *)((long)TypeInfo_MapManager + 0xe4) == 0) {
    *(undefined8 *)(puVar13 + -0x30) = 0x40b415e;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined1 *)((long)TypeInfo_MapManager[0x17] + 0x18) = uVar14;
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    *(undefined8 *)(puVar13 + -0x30) = 0x40b4183;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)(puVar13 + -0x30) = 0x40b418a;
  player = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  if (*(int *)((long)&TypeInfo_MapTransfer[5].fields.m_CancellationTokenSource + 4) == 0) {
    *(undefined8 *)(puVar13 + -0x30) = 0x40b41a5;
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar4 = (TypeInfo_MapTransfer[4].fields.m_CancellationTokenSource)->monitor;
  *(undefined8 *)(puVar13 + -0x30) = 0x40b41c7;
  targetPlayer = "CustomMapHash";
  PhotonExtensions__SetCustomProperty(player,(System_String_o *)"CustomMapHash",pIVar4,(MethodInfo *)0x0);
  lVar11 = *(long *)((long)TypeInfo_MapManager[0x17] + 8);
  if (((lVar11 != 0) && (*(long *)(lVar11 + 0x28) != 0)) && (*(long *)(lVar11 + 0x30) != 0)) {
    customAssets = *(System_Collections_Generic_List_string__o **)(*(long *)(lVar11 + 0x28) + 0x10);
    objects = *(System_Collections_Generic_List_MapScriptBaseObject__o **)(*(long *)(lVar11 + 0x30) + 0x10);
    options = *(Map_MapScriptOptions_o **)(lVar11 + 0x20);
    weather = *(Settings_WeatherSet_o **)(lVar11 + 0x38);
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      *(undefined8 *)(puVar13 + -0x30) = 0x40b4214;
      il2cpp_runtime_helper_02337ed0();
    }
    Map_MapLoader__StartLoadObjects(customAssets,objects,options,weather,0,(MethodInfo *)0x0);
    return;
  }
  *(undefined8 *)(puVar13 + -0x30) = 0x40b423b;
  il2cpp_runtime_helper_022b2c90();
  *(Photon_Pun_MonoBehaviourPunCallbacks_o ***)(puVar13 + -0x30) = &TypeInfo_MapTransfer;
  *(void ****)(puVar13 + -0x38) = &TypeInfo_MapManager;
  *(undefined8 *)(puVar13 + -0x40) = unaff_R13;
  *(undefined8 *)(puVar13 + -0x48) = unaff_R12;
  *(Photon_Realtime_Player_o **)(puVar13 + -0x50) = player;
  if (g_data_057ac4da == '\0') {
    *(undefined8 *)(puVar13 + -0x58) = 0x40b42b3;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapTransfer);
    *(undefined8 *)(puVar13 + -0x58) = 0x40b42bf;
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    *(undefined8 *)(puVar13 + -0x58) = 0x40b42cb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    *(undefined8 *)(puVar13 + -0x58) = 0x40b42d7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_RPCManager);
    *(undefined8 *)(puVar13 + -0x58) = 0x40b42e3;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    *(undefined8 *)(puVar13 + -0x58) = 0x40b42ef;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    *(undefined8 *)(puVar13 + -0x58) = 0x40b42fb;
    il2cpp_runtime_helper_023445d0(&"Custom");
    *(undefined8 *)(puVar13 + -0x58) = 0x40b4307;
    il2cpp_runtime_helper_023445d0(&"LoadBuiltinMapRPC");
    g_data_057ac4da = '\x01';
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) != 0) goto label_040b426c;
label_040b4325:
    *(undefined8 *)(puVar13 + -0x58) = 0x40b432a;
    il2cpp_runtime_helper_02337ed0();
    *(undefined8 *)(puVar13 + -0x58) = 0x40b4331;
    bVar6 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar5 = (char)bVar6;
  }
  else {
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) goto label_040b4325;
label_040b426c:
    *(undefined8 *)(puVar13 + -0x58) = 0x40b4273;
    bVar6 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar5 = (char)bVar6;
  }
  if (cVar5 == '\0') {
    return;
  }
  parameters = (System_Object_array *)&TypeInfo_MapTransfer;
  if (*(int *)((long)&TypeInfo_MapTransfer[5].fields.m_CancellationTokenSource + 4) == 0) {
    *(undefined8 *)(puVar13 + -0x58) = 0x40b4343;
    il2cpp_runtime_helper_02337ed0();
    cVar5 = *(char *)&(TypeInfo_MapTransfer[4].fields.m_CancellationTokenSource)->klass;
    method_00 = "Custom";
  }
  else {
    cVar5 = *(char *)&(TypeInfo_MapTransfer[4].fields.m_CancellationTokenSource)->klass;
    method_00 = "Custom";
  }
  if (cVar5 == '\0') {
    "Custom" = method_00;
    return;
  }
  lVar11 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  "Custom" = method_00;
  if (((lVar11 == 0) || (lVar11 = *(long *)(lVar11 + 0x38), lVar11 == 0)) || (*(long *)(lVar11 + 0x20) == 0))
  {
label_040b44af:
    *(undefined8 *)(puVar13 + -0x58) = 0x40b44b4;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSVar8 = *(System_String_o **)(*(long *)(lVar11 + 0x20) + 0x18);
    *(undefined8 *)(puVar13 + -0x58) = 0x40b439f;
    bVar6 = System_String__op_Equality(pSVar8,(System_String_o *)method_00,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      if (*(int *)((long)&TypeInfo_MapTransfer[5].fields.m_CancellationTokenSource + 4) == 0) {
        *(undefined8 *)(puVar13 + -0x58) = 0x40b43b4;
        il2cpp_runtime_helper_02337ed0();
      }
      Map_MapTransfer__Transfer(targetPlayer,method_00);
      return;
    }
    __this_03 = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
    *(undefined8 *)(puVar13 + -0x58) = 0x40b43f7;
    parameters = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
    if ((*(long *)(lVar11 + 0x20) == 0) || (parameters == (System_Object_array *)0x0)) goto label_040b44af;
    pIVar4 = *(Il2CppObject **)(*(long *)(lVar11 + 0x20) + 0x18);
    if (pIVar4 != (Il2CppObject *)0x0) {
      *(undefined8 *)(puVar13 + -0x58) = 0x40b4428;
      lVar10 = il2cpp_runtime_helper_023051f0(pIVar4);
      if (lVar10 == 0) goto label_040b44b9;
    }
    if ((int)parameters->max_length != 0) {
      parameters->m_Items[0] = pIVar4;
      *(undefined8 *)(puVar13 + -0x58) = 0x40b4447;
      il2cpp_runtime_helper_022b4080(parameters->m_Items);
      if (*(long *)(lVar11 + 0x28) != 0) {
        pIVar4 = *(Il2CppObject **)(*(long *)(lVar11 + 0x28) + 0x18);
        if (pIVar4 != (Il2CppObject *)0x0) {
          *(undefined8 *)(puVar13 + -0x58) = 0x40b4468;
          lVar11 = il2cpp_runtime_helper_023051f0(pIVar4);
          if (lVar11 == 0) goto label_040b44b9;
        }
        if ((uint)parameters->max_length < 2) goto label_040b44b4;
        parameters->m_Items[1] = pIVar4;
        *(undefined8 *)(puVar13 + -0x58) = 0x40b4486;
        il2cpp_runtime_helper_022b4080(parameters->m_Items + 1);
        if (__this_03 != (Photon_Pun_PhotonView_o *)0x0) {
          Photon_Pun_PhotonView__RPC_3efa220(__this_03,"LoadBuiltinMapRPC",targetPlayer,parameters,(MethodInfo *)0x0)
          ;
          return;
        }
      }
      goto label_040b44af;
    }
  }
label_040b44b4:
  *(undefined8 *)(puVar13 + -0x58) = 0x40b44b9;
  il2cpp_runtime_helper_022b2ca0();
label_040b44b9:
  *(undefined8 *)(puVar13 + -0x58) = 0x40b44be;
  pPVar12 = (Photon_Pun_PhotonView_o *)il2cpp_runtime_helper_0231b270();
  *(undefined8 *)(puVar13 + -0x58) = 0x40b44c8;
  il2cpp_runtime_helper_022b2b10();
  *(Photon_Realtime_Player_o **)(puVar13 + -0x58) = targetPlayer;
  *(Photon_Pun_PhotonView_o **)(puVar13 + -0x60) = __this_03;
  *(System_Object_array **)(puVar13 + -0x68) = parameters;
  if (g_data_057ac4f5 == '\0') {
    *(undefined8 *)(puVar13 + -0x70) = 0x40b4585;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapTransfer);
    g_data_057ac4f5 = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_MapTransfer[5].fields.m_CancellationTokenSource + 4);
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_MapTransfer[5].fields.m_CancellationTokenSource + 4);
  }
  if (iVar1 == 0) {
    *(undefined8 *)(puVar13 + -0x70) = 0x40b45a8;
    il2cpp_runtime_helper_02337ed0();
    __this = ((TypeInfo_MapTransfer[4].fields.m_CancellationTokenSource)->fields)._registeredCallbacksLists;
    __this_02 = TypeInfo_MapTransfer;
  }
  else {
    __this = ((TypeInfo_MapTransfer[4].fields.m_CancellationTokenSource)->fields)._registeredCallbacksLists;
    __this_02 = TypeInfo_MapTransfer;
  }
  TypeInfo_MapTransfer = __this_02;
  if (__this != (System_Threading_SparselyPopulatedArray_CancellationCallbackInfo__array *)0x0) {
    if (g_data_057ac4f8 == '\0') {
      *(undefined8 *)(puVar13 + -0x70) = 0x40b4525;
      il2cpp_runtime_helper_023445d0(&TypeInfo_TransferMapData_d__19);
      g_data_057ac4f8 = '\x01';
    }
    *(undefined8 *)(puVar13 + -0x70) = 0x40b453b;
    __this_01 = (Photon_Pun_MonoBehaviourPunCallbacks_o *)il2cpp_runtime_helper_023052d0(TypeInfo_TransferMapData_d__19);
    *(undefined8 *)(puVar13 + -0x70) = 0x40b4548;
    __this_02 = __this_01;
    System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
    *(undefined4 *)&(__this_01->fields).m_CachedPtr = 0;
    if (__this_01 != (Photon_Pun_MonoBehaviourPunCallbacks_o *)0x0) {
      (__this_01->fields).pvCache = pPVar12;
      *(undefined8 *)(puVar13 + -0x70) = 0x40b4567;
      il2cpp_runtime_helper_022b4080(&(__this_01->fields).pvCache,pPVar12);
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_01,
                 (MethodInfo *)0x0);
      return;
    }
  }
  *(undefined8 *)(puVar13 + -0x70) = 0x40b45c4;
  il2cpp_runtime_helper_022b2c90();
  Photon_Pun_MonoBehaviourPunCallbacks___ctor(__this_02,(MethodInfo *)0x0);
  return;
}


// Map.MapManager$$OnLoadCachedMapRPC
// il2cpp: void Map_MapManager__OnLoadCachedMapRPC (Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x40b38c0

void Map_MapManager__OnLoadCachedMapRPC(Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  Il2CppClass *pIVar4;
  System_Threading_CancellationTokenSource_o *pSVar5;
  System_Collections_Generic_List_string__o *customAssets;
  System_Collections_Generic_List_MapScriptBaseObject__o *objects;
  Map_MapScriptOptions_o *options;
  Settings_WeatherSet_o *weather;
  System_String_o *a;
  System_Threading_SparselyPopulatedArray_CancellationCallbackInfo__array *__this;
  char cVar6;
  bool_conflict bVar7;
  uint uVar8;
  undefined8 uVar9;
  System_Int32_array *__this_00;
  System_Int32_array *__this_01;
  System_Int32_array *__this_02;
  Il2CppObject *pIVar10;
  System_Int32_array *pSVar11;
  Photon_Realtime_Player_o *player;
  long lVar12;
  long lVar13;
  Photon_Pun_PhotonView_o *pPVar14;
  Photon_Pun_MonoBehaviourPunCallbacks_o *__this_03;
  System_Int32_array *unaff_RBX;
  Photon_Pun_MonoBehaviourPunCallbacks_o **parameters;
  System_Int32_array **ppSVar15;
  System_Int32_array *in_RSI;
  System_Int32_array *pSVar16;
  Photon_Realtime_Player_o *targetPlayer;
  MethodInfo *method_00;
  undefined1 uVar17;
  void **ppvVar18;
  Photon_Pun_MonoBehaviourPunCallbacks_o *__this_04;
  long *unaff_R12;
  Photon_Realtime_Player_o *unaff_R13;
  Photon_Realtime_Player_o *pPVar19;
  Photon_Pun_MonoBehaviourPunCallbacks_o **unaff_R14;
  void ***__this_05;
  void ***unaff_R15;
  long *plVar20;
  UnityEngine_Color_o color;
  UnityEngine_Quaternion_o rotation;
  UnityEngine_Vector3_o UVar21;
  UnityEngine_Vector3_o euler;
  System_Int32_array *pSStack_58;
  System_Int32_array *pSStack_50;
  System_Int32_array *pSStack_48;
  System_Int32_array *pSStack_40;
  
  __this_02 = (System_Int32_array *)&info;
  if (g_data_057ac4d8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    g_data_057ac4d8 = '\x01';
  }
  if (info.fields.Sender != (Photon_Realtime_Player_o *)0x0) {
    in_RSI = (System_Int32_array *)0x0;
    bVar7 = Photon_Realtime_Player__get_IsMasterClient(info.fields.Sender,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      return;
    }
  }
  if (*(int *)((long)TypeInfo_MapManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar13 = *(long *)((long)TypeInfo_MapManager[0x17] + 8);
  if (lVar13 == 0) {
label_040b3a50:
    il2cpp_runtime_helper_022b2c90();
    pSStack_40 = __this_02;
    if (g_data_057ac4df == '\0') {
      pSStack_48 = (System_Int32_array *)0x40b3a82;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinMapPrefabs);
      pSStack_48 = (System_Int32_array *)0x40b3a8e;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinMapTextures);
      pSStack_48 = (System_Int32_array *)0x40b3a9a;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
      pSStack_48 = (System_Int32_array *)0x40b3aa6;
      il2cpp_runtime_helper_023445d0(&MethodInfo_MapScriptBasicMaterial_get_Item);
      pSStack_48 = (System_Int32_array *)0x40b3ab2;
      il2cpp_runtime_helper_023445d0(&MethodInfo_MapScriptBaseObject_get_Item);
      pSStack_48 = (System_Int32_array *)0x40b3abe;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
      pSStack_48 = (System_Int32_array *)0x40b3aca;
      il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptBasicMaterial);
      pSStack_48 = (System_Int32_array *)0x40b3ad6;
      il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptSceneObject);
      pSStack_48 = (System_Int32_array *)0x40b3ae2;
      il2cpp_runtime_helper_023445d0(&TypeInfo_MapScript);
      pSStack_48 = (System_Int32_array *)0x40b3aee;
      il2cpp_runtime_helper_023445d0(&"Daylight");
      pSStack_48 = (System_Int32_array *)0x40b3afa;
      il2cpp_runtime_helper_023445d0(&"Grass6");
      pSStack_48 = (System_Int32_array *)0x40b3b06;
      il2cpp_runtime_helper_023445d0(&"Geometry/Cuboid");
      pSStack_48 = (System_Int32_array *)0x40b3b12;
      il2cpp_runtime_helper_023445d0(&"Basic");
      g_data_057ac4df = '\x01';
    }
    pSStack_48 = (System_Int32_array *)0x40b3b28;
    __this_00 = (System_Int32_array *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScript);
    pSStack_48 = (System_Int32_array *)0x40b3b33;
    Map_MapScript___ctor((Map_MapScript_o *)__this_00,(MethodInfo *)in_RSI);
    pPVar19 = (Photon_Realtime_Player_o *)&TypeInfo_MapScriptSceneObject;
    pSStack_48 = (System_Int32_array *)0x40b3b43;
    __this_01 = (System_Int32_array *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptSceneObject);
    pSStack_48 = (System_Int32_array *)0x40b3b4e;
    unaff_R15 = (void ***)__this_01;
    Map_MapScriptSceneObject___ctor((Map_MapScriptSceneObject_o *)__this_01,(MethodInfo *)in_RSI);
    pSVar11 = "Geometry/Cuboid";
    plVar20 = (long *)__this_01;
    if (__this_01 != (System_Int32_array *)0x0) {
      __this_01->max_length = (il2cpp_array_size_t)"Geometry/Cuboid";
      pSStack_48 = (System_Int32_array *)0x40b3b6e;
      il2cpp_runtime_helper_022b4080(&__this_01->max_length);
      __this_01->m_Items[0xc] = 0x42c80000;
      __this_01->m_Items[0xd] = 0x40a00000;
      __this_01->m_Items[0xe] = 0x42c80000;
      __this_01->m_Items[6] = 0;
      __this_01->m_Items[7] = -0x3e380000;
      __this_01->m_Items[8] = 0;
      __this_01->m_Items[0] = 0;
      pSStack_48 = (System_Int32_array *)0x40b3bb1;
      __this_02 = (System_Int32_array *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptBasicMaterial);
      pSStack_48 = (System_Int32_array *)0x40b3bbc;
      unaff_R15 = (void ***)__this_02;
      Map_MapScriptBasicMaterial___ctor((Map_MapScriptBasicMaterial_o *)__this_02,(MethodInfo *)pSVar11);
      pSVar16 = "Basic";
      in_RSI = pSVar11;
      if (__this_02 != (System_Int32_array *)0x0) {
        ((System_Collections_Generic_Dictionary_object__object__Fields *)&__this_02->bounds)->_buckets =
             "Basic";
        pSStack_48 = (System_Int32_array *)0x40b3bdc;
        il2cpp_runtime_helper_022b4080((System_Collections_Generic_Dictionary_object__object__Fields *)&__this_02->bounds)
        ;
        unaff_R12 = &TypeInfo_BuiltinMapTextures;
        if (*(int *)(TypeInfo_BuiltinMapTextures + 0xe4) == 0) {
          pSStack_48 = (System_Int32_array *)0x40b3bf5;
          il2cpp_runtime_helper_02337ed0();
        }
        unaff_R15 = *(void ****)(*(long *)(TypeInfo_BuiltinMapTextures + 0xb8) + 8);
        in_RSI = pSVar16;
        if ((System_Int32_array *)unaff_R15 != (System_Int32_array *)0x0) {
          pSStack_48 = (System_Int32_array *)0x40b3c26;
          in_RSI = "Grass6";
          pIVar10 = System_Collections_Generic_Dictionary_object__object___get_Item
                              ((System_Collections_Generic_Dictionary_object__object__o *)unaff_R15,
                               &"Grass6"->obj,MethodInfo_MapScriptBasicMaterial_get_Item);
          if (pIVar10 != (Il2CppObject *)0x0) {
            *(Il2CppClass **)__this_02->m_Items = pIVar10[2].klass;
            pSStack_48 = (System_Int32_array *)0x40b3c40;
            il2cpp_runtime_helper_022b4080(__this_02->m_Items);
            *(undefined8 *)(__this_02->m_Items + 2) = 0x41c8000041c80000;
            pSStack_48 = (System_Int32_array *)0x40b3c5d;
            unaff_R12 = (long *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
            pSStack_48 = (System_Int32_array *)0x40b3c74;
            color.fields.b = 1.0;
            color.fields.a = 1.0;
            color.fields.r = 1.0;
            color.fields.g = 1.0;
            Utility_Color255___ctor_4388bb0((Utility_Color255_o *)unaff_R12,color,(MethodInfo *)0x0);
            __this_02->max_length = (il2cpp_array_size_t)unaff_R12;
            pSStack_48 = (System_Int32_array *)0x40b3c87;
            il2cpp_runtime_helper_022b4080(&__this_02->max_length,unaff_R12);
            unaff_R15 = (void ***)(__this_01->m_Items + 0x16);
            *(System_Int32_array **)(__this_01->m_Items + 0x16) = __this_02;
            pSStack_48 = (System_Int32_array *)0x40b3c9a;
            in_RSI = __this_02;
            il2cpp_runtime_helper_022b4080();
            lVar13 = MethodInfo_Void_Add;
            if (((__this_00 != (System_Int32_array *)0x0) && (*(long *)(__this_00->m_Items + 4) != 0)) &&
               (unaff_R15 = *(void ****)(*(long *)(__this_00->m_Items + 4) + 0x10),
               (System_Int32_array *)unaff_R15 != (System_Int32_array *)0x0)) {
              unaff_R12 = &MethodInfo_Void_Add;
              piVar1 = (int *)((long)&((System_Int32_array *)unaff_R15)->max_length + 4);
              *piVar1 = *piVar1 + 1;
              pSVar11 = ((System_Collections_Generic_Dictionary_object__object__Fields *)
                        &((System_Int32_array *)unaff_R15)->bounds)->_buckets;
              if (pSVar11 != (System_Int32_array *)0x0) {
                uVar8 = *(uint *)&((System_Int32_array *)unaff_R15)->max_length;
                if (uVar8 < (uint)pSVar11->max_length) {
                  *(uint *)&((System_Int32_array *)unaff_R15)->max_length = uVar8 + 1;
                  *(System_Int32_array **)(pSVar11->m_Items + (long)(int)uVar8 * 2) = __this_01;
                  pSStack_48 = (System_Int32_array *)0x40b3cfd;
                  il2cpp_runtime_helper_022b4080(pSVar11->m_Items + (long)(int)uVar8 * 2);
                }
                else {
                  pSStack_48 = (System_Int32_array *)0x40b3d16;
                  System_Collections_Generic_List_object___AddWithResize
                            ((System_Collections_Generic_List_object__o *)unaff_R15,(Il2CppObject *)__this_01,
                             *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                }
                pSStack_48 = (System_Int32_array *)0x40b3d1f;
                __this_02 = (System_Int32_array *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptSceneObject);
                pSStack_48 = (System_Int32_array *)0x40b3d2a;
                Map_MapScriptSceneObject___ctor
                          ((Map_MapScriptSceneObject_o *)__this_02,(MethodInfo *)__this_01);
                plVar20 = &TypeInfo_BuiltinMapPrefabs;
                if (*(int *)(TypeInfo_BuiltinMapPrefabs + 0xe4) == 0) {
                  pSStack_48 = (System_Int32_array *)0x40b3d42;
                  il2cpp_runtime_helper_02337ed0();
                }
                unaff_R15 = *(void ****)(*(long *)(TypeInfo_BuiltinMapPrefabs + 0xb8) + 8);
                in_RSI = __this_01;
                if ((System_Int32_array *)unaff_R15 != (System_Int32_array *)0x0) {
                  pSStack_48 = (System_Int32_array *)0x40b3d72;
                  in_RSI = "Daylight";
                  pSVar11 = (System_Int32_array *)
                            System_Collections_Generic_Dictionary_object__object___get_Item
                                      ((System_Collections_Generic_Dictionary_object__object__o *)unaff_R15,
                                       &"Daylight"->obj,MethodInfo_MapScriptBaseObject_get_Item);
                  if (__this_02 != (System_Int32_array *)0x0) {
                    pIVar4 = (__this_02->obj).klass;
                    pSStack_48 = (System_Int32_array *)0x40b3d91;
                    (*pIVar4->vtable[10].methodPtr)(__this_02,pSVar11,pIVar4->vtable[10].method);
                    __this_02->m_Items[6] = 0;
                    __this_02->m_Items[7] = 0x41a00000;
                    __this_02->m_Items[8] = 0;
                    rotation.fields._8_8_ = (undefined8)g_data_00d19c30;
                    pSStack_48 = (System_Int32_array *)0x40b3dbb;
                    rotation.fields.x = -0.2;
                    rotation.fields.y = -0.8;
                    UVar21 = UnityEngine_Quaternion__Internal_ToEulerRad(rotation,(MethodInfo *)0x0);
                    euler.fields.x = UVar21.fields.x * 57.29578;
                    euler.fields.y = UVar21.fields.y * 57.29578;
                    euler.fields.z = UVar21.fields.z * 57.29578;
                    unaff_R15 = (void ***)0x0;
                    pSStack_48 = (System_Int32_array *)0x40b3dd1;
                    UVar21 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
                    __this_02->m_Items[9] = (int32_t)UVar21.fields.x;
                    __this_02->m_Items[10] = (int32_t)UVar21.fields.y;
                    __this_02->m_Items[0xb] = (int32_t)UVar21.fields.z;
                    __this_02->m_Items[0] = 1;
                    lVar13 = MethodInfo_Void_Add;
                    in_RSI = pSVar11;
                    if ((*(long *)(__this_00->m_Items + 4) != 0) &&
                       (unaff_R15 = *(void ****)(*(long *)(__this_00->m_Items + 4) + 0x10),
                       (System_Int32_array *)unaff_R15 != (System_Int32_array *)0x0)) {
                      piVar1 = (int *)((long)&((System_Int32_array *)unaff_R15)->max_length + 4);
                      *piVar1 = *piVar1 + 1;
                      pSVar11 = ((System_Collections_Generic_Dictionary_object__object__Fields *)
                                &((System_Int32_array *)unaff_R15)->bounds)->_buckets;
                      if (pSVar11 != (System_Int32_array *)0x0) {
                        uVar8 = *(uint *)&((System_Int32_array *)unaff_R15)->max_length;
                        if (uVar8 < (uint)pSVar11->max_length) {
                          *(uint *)&((System_Int32_array *)unaff_R15)->max_length = uVar8 + 1;
                          *(System_Int32_array **)(pSVar11->m_Items + (long)(int)uVar8 * 2) = __this_02;
                          pSStack_48 = (System_Int32_array *)0x40b3e32;
                          il2cpp_runtime_helper_022b4080(pSVar11->m_Items + (long)(int)uVar8 * 2,__this_02);
                        }
                        else {
                          pSStack_48 = (System_Int32_array *)0x40b3e4b;
                          System_Collections_Generic_List_object___AddWithResize
                                    ((System_Collections_Generic_List_object__o *)unaff_R15,
                                     (Il2CppObject *)__this_02,
                                     *(MethodInfo_362C220 **)
                                      (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                        }
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    pSStack_48 = (System_Int32_array *)0x40b3e5d;
    il2cpp_runtime_helper_022b2c90();
    ppSVar15 = &pSStack_58;
    unaff_RBX = (System_Int32_array *)&stack0xffffffffffffffc8;
    pSStack_58 = __this_02;
    pSStack_50 = __this_00;
    pSStack_48 = (System_Int32_array *)plVar20;
    if (g_data_057ac4d7 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
      il2cpp_runtime_helper_023445d0(&TypeInfo_MapManager);
      il2cpp_runtime_helper_023445d0(&TypeInfo_MapScript);
      il2cpp_runtime_helper_023445d0(&TypeInfo_MapTransfer);
      il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
      g_data_057ac4d7 = '\x01';
    }
    ppvVar18 = (void **)0x0;
    unaff_R14 = (Photon_Pun_MonoBehaviourPunCallbacks_o **)in_RSI;
    if (unaff_R13 != (Photon_Realtime_Player_o *)0x0) {
      bVar7 = Photon_Realtime_Player__get_IsMasterClient(unaff_R13,(MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
        return;
      }
      if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      unaff_R14 = (Photon_Pun_MonoBehaviourPunCallbacks_o **)
                  Map_BuiltinLevels__LoadMap
                            ((System_String_o *)unaff_R15,(System_String_o *)in_RSI,(MethodInfo *)0x0);
      unaff_RBX = (System_Int32_array *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScript);
      Map_MapScript___ctor((Map_MapScript_o *)unaff_RBX,(MethodInfo *)in_RSI);
      unaff_R15 = &TypeInfo_MapManager;
      if (*(int *)((long)TypeInfo_MapManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pvVar3 = TypeInfo_MapManager[0x17];
      *(System_Int32_array **)((long)pvVar3 + 8) = unaff_RBX;
      il2cpp_runtime_helper_022b4080((long)pvVar3 + 8,unaff_RBX);
      plVar20 = *(long **)((long)TypeInfo_MapManager[0x17] + 8);
      ppvVar18 = (void **)0x0;
      if (plVar20 != (long *)0x0) {
        (**(code **)(*plVar20 + 0x188))(plVar20,unaff_R14,*(undefined8 *)(*plVar20 + 400));
        unaff_RBX = (System_Int32_array *)**(long **)(g_data_057b9c00 + 0xb8);
        unaff_R14 = &TypeInfo_MapTransfer;
        if (*(int *)((long)&TypeInfo_MapTransfer[5].fields.m_CancellationTokenSource + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar5 = TypeInfo_MapTransfer[4].fields.m_CancellationTokenSource;
        pSVar5->monitor = unaff_RBX;
        ppvVar18 = &pSVar5->monitor;
        il2cpp_runtime_helper_022b4080(ppvVar18,unaff_RBX);
        lVar13 = *(long *)((long)TypeInfo_MapManager[0x17] + 8);
        if (lVar13 != 0) {
          bVar7 = System_String__op_Inequality
                            (*(System_String_o **)((long)TypeInfo_MapManager[0x17] + 0x20),
                             *(System_String_o **)(lVar13 + 0x48),(MethodInfo *)0x0);
          unaff_RBX = (System_Int32_array *)CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
          if ((char)bVar7 == '\0') {
            if (*(int *)((long)TypeInfo_MapManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            lVar13 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
            ppvVar18 = TypeInfo_MapManager;
            if (((lVar13 == 0) || (lVar13 = *(long *)(lVar13 + 0x38), lVar13 == 0)) ||
               (lVar13 = *(long *)(lVar13 + 0x30), lVar13 == 0)) goto label_040b40e8;
            uVar8 = System_String__op_Inequality
                              (*(System_String_o **)((long)TypeInfo_MapManager[0x17] + 0x28),
                               *(System_String_o **)(lVar13 + 0x18),(MethodInfo *)0x0);
            unaff_RBX = (System_Int32_array *)(ulong)uVar8;
          }
          if (*(int *)((long)TypeInfo_MapManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          ppvVar18 = TypeInfo_MapManager[0x17];
          if (((System_Threading_CancellationTokenSource_Fields *)(ppvVar18 + 1))->_kernelEvent !=
              (System_Threading_ManualResetEvent_o *)0x0) {
            ppvVar18[4] = (void *)((System_Threading_CancellationTokenSource_Fields *)(ppvVar18 + 1))->
                                  _kernelEvent[1].fields.waitHandle;
            ppvVar18 = ppvVar18 + 4;
            il2cpp_runtime_helper_022b4080();
            lVar13 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
            if (((lVar13 != 0) && (lVar13 = *(long *)(lVar13 + 0x38), lVar13 != 0)) &&
               (lVar13 = *(long *)(lVar13 + 0x30), lVar13 != 0)) {
              pvVar3 = TypeInfo_MapManager[0x17];
              *(undefined8 *)((long)pvVar3 + 0x28) = *(undefined8 *)(lVar13 + 0x18);
              uVar9 = il2cpp_runtime_helper_022b4080((long)pvVar3 + 0x28);
              uVar17 = SUB81(unaff_RBX,0);
              unaff_RBX = pSStack_58;
              ppSVar15 = &pSStack_40;
              unaff_R14 = (Photon_Pun_MonoBehaviourPunCallbacks_o **)pSStack_50;
              unaff_R15 = (void ***)pSStack_48;
              goto Map_MapManager__LoadMap;
            }
          }
        }
      }
    }
label_040b40e8:
    uVar17 = SUB81(ppvVar18,0);
    uVar9 = il2cpp_runtime_helper_022b2c90();
  }
  else {
    in_RSI = *(System_Int32_array **)(lVar13 + 0x48);
    bVar7 = System_String__op_Inequality
                      (*(System_String_o **)((long)TypeInfo_MapManager[0x17] + 0x20),(System_String_o *)in_RSI,
                       (MethodInfo *)0x0);
    __this_02 = (System_Int32_array *)CONCAT71((int7)((ulong)__this_02 >> 8),1);
    if ((char)bVar7 == '\0') {
      if (*(int *)((long)TypeInfo_MapManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      lVar13 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
      if (((lVar13 == 0) || (lVar13 = *(long *)(lVar13 + 0x38), lVar13 == 0)) ||
         (lVar13 = *(long *)(lVar13 + 0x30), lVar13 == 0)) goto label_040b3a50;
      in_RSI = *(System_Int32_array **)(lVar13 + 0x18);
      uVar8 = System_String__op_Inequality
                        (*(System_String_o **)((long)TypeInfo_MapManager[0x17] + 0x28),(System_String_o *)in_RSI,
                         (MethodInfo *)0x0);
      __this_02 = (System_Int32_array *)(ulong)uVar8;
    }
    if (*(int *)((long)TypeInfo_MapManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pvVar3 = TypeInfo_MapManager[0x17];
    if (*(long *)((long)pvVar3 + 8) == 0) goto label_040b3a50;
    in_RSI = *(System_Int32_array **)(*(long *)((long)pvVar3 + 8) + 0x48);
    *(System_Int32_array **)((long)pvVar3 + 0x20) = in_RSI;
    il2cpp_runtime_helper_022b4080((long)pvVar3 + 0x20);
    lVar13 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
    if (((lVar13 == 0) || (lVar13 = *(long *)(lVar13 + 0x38), lVar13 == 0)) ||
       (lVar13 = *(long *)(lVar13 + 0x30), lVar13 == 0)) goto label_040b3a50;
    pvVar3 = TypeInfo_MapManager[0x17];
    *(undefined8 *)((long)pvVar3 + 0x28) = *(undefined8 *)(lVar13 + 0x18);
    uVar9 = il2cpp_runtime_helper_022b4080((long)pvVar3 + 0x28);
    uVar17 = SUB81(__this_02,0);
    ppSVar15 = (System_Int32_array **)register0x00000020;
    pPVar19 = unaff_R13;
  }
Map_MapManager__LoadMap:
  *(void ****)((long)ppSVar15 + -8) = unaff_R15;
  *(Photon_Pun_MonoBehaviourPunCallbacks_o ***)((long)ppSVar15 + -0x10) = unaff_R14;
  *(long **)((long)ppSVar15 + -0x18) = unaff_R12;
  *(System_Int32_array **)((long)ppSVar15 + -0x20) = unaff_RBX;
  *(undefined8 *)((long)ppSVar15 + -0x28) = uVar9;
  if (g_data_057ac4d9 == '\0') {
    *(undefined8 *)((long)ppSVar15 + -0x30) = 0x40b410f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    *(undefined8 *)((long)ppSVar15 + -0x30) = 0x40b411b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapManager);
    *(undefined8 *)((long)ppSVar15 + -0x30) = 0x40b4127;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapTransfer);
    *(undefined8 *)((long)ppSVar15 + -0x30) = 0x40b4133;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    *(undefined8 *)((long)ppSVar15 + -0x30) = 0x40b413f;
    il2cpp_runtime_helper_023445d0(&"CustomMapHash");
    g_data_057ac4d9 = '\x01';
  }
  __this_05 = &TypeInfo_MapManager;
  if (*(int *)((long)TypeInfo_MapManager + 0xe4) == 0) {
    *(undefined8 *)((long)ppSVar15 + -0x30) = 0x40b415e;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined1 *)((long)TypeInfo_MapManager[0x17] + 0x18) = uVar17;
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    *(undefined8 *)((long)ppSVar15 + -0x30) = 0x40b4183;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)ppSVar15 + -0x30) = 0x40b418a;
  player = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  if (*(int *)((long)&TypeInfo_MapTransfer[5].fields.m_CancellationTokenSource + 4) == 0) {
    *(undefined8 *)((long)ppSVar15 + -0x30) = 0x40b41a5;
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar10 = (TypeInfo_MapTransfer[4].fields.m_CancellationTokenSource)->monitor;
  *(undefined8 *)((long)ppSVar15 + -0x30) = 0x40b41c7;
  targetPlayer = "CustomMapHash";
  PhotonExtensions__SetCustomProperty(player,(System_String_o *)"CustomMapHash",pIVar10,(MethodInfo *)0x0);
  lVar13 = *(long *)((long)TypeInfo_MapManager[0x17] + 8);
  if (((lVar13 != 0) && (*(long *)(lVar13 + 0x28) != 0)) && (*(long *)(lVar13 + 0x30) != 0)) {
    customAssets = *(System_Collections_Generic_List_string__o **)(*(long *)(lVar13 + 0x28) + 0x10);
    objects = *(System_Collections_Generic_List_MapScriptBaseObject__o **)(*(long *)(lVar13 + 0x30) + 0x10);
    options = *(Map_MapScriptOptions_o **)(lVar13 + 0x20);
    weather = *(Settings_WeatherSet_o **)(lVar13 + 0x38);
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      *(undefined8 *)((long)ppSVar15 + -0x30) = 0x40b4214;
      il2cpp_runtime_helper_02337ed0();
    }
    Map_MapLoader__StartLoadObjects(customAssets,objects,options,weather,0,(MethodInfo *)0x0);
    return;
  }
  *(undefined8 *)((long)ppSVar15 + -0x30) = 0x40b423b;
  il2cpp_runtime_helper_022b2c90();
  *(Photon_Pun_MonoBehaviourPunCallbacks_o ***)((long)ppSVar15 + -0x30) = &TypeInfo_MapTransfer;
  *(void ****)((long)ppSVar15 + -0x38) = &TypeInfo_MapManager;
  *(Photon_Realtime_Player_o **)((long)ppSVar15 + -0x40) = pPVar19;
  *(long **)((long)ppSVar15 + -0x48) = unaff_R12;
  *(Photon_Realtime_Player_o **)((long)ppSVar15 + -0x50) = player;
  if (g_data_057ac4da == '\0') {
    *(undefined8 *)((long)ppSVar15 + -0x58) = 0x40b42b3;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapTransfer);
    *(undefined8 *)((long)ppSVar15 + -0x58) = 0x40b42bf;
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    *(undefined8 *)((long)ppSVar15 + -0x58) = 0x40b42cb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    *(undefined8 *)((long)ppSVar15 + -0x58) = 0x40b42d7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_RPCManager);
    *(undefined8 *)((long)ppSVar15 + -0x58) = 0x40b42e3;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    *(undefined8 *)((long)ppSVar15 + -0x58) = 0x40b42ef;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    *(undefined8 *)((long)ppSVar15 + -0x58) = 0x40b42fb;
    il2cpp_runtime_helper_023445d0(&"Custom");
    *(undefined8 *)((long)ppSVar15 + -0x58) = 0x40b4307;
    il2cpp_runtime_helper_023445d0(&"LoadBuiltinMapRPC");
    g_data_057ac4da = '\x01';
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) != 0) goto label_040b426c;
label_040b4325:
    *(undefined8 *)((long)ppSVar15 + -0x58) = 0x40b432a;
    il2cpp_runtime_helper_02337ed0();
    *(undefined8 *)((long)ppSVar15 + -0x58) = 0x40b4331;
    bVar7 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar6 = (char)bVar7;
  }
  else {
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) goto label_040b4325;
label_040b426c:
    *(undefined8 *)((long)ppSVar15 + -0x58) = 0x40b4273;
    bVar7 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar6 = (char)bVar7;
  }
  if (cVar6 == '\0') {
    return;
  }
  parameters = &TypeInfo_MapTransfer;
  if (*(int *)((long)&TypeInfo_MapTransfer[5].fields.m_CancellationTokenSource + 4) == 0) {
    *(undefined8 *)((long)ppSVar15 + -0x58) = 0x40b4343;
    il2cpp_runtime_helper_02337ed0();
    cVar6 = *(char *)&(TypeInfo_MapTransfer[4].fields.m_CancellationTokenSource)->klass;
    method_00 = "Custom";
  }
  else {
    cVar6 = *(char *)&(TypeInfo_MapTransfer[4].fields.m_CancellationTokenSource)->klass;
    method_00 = "Custom";
  }
  if (cVar6 == '\0') {
    "Custom" = method_00;
    return;
  }
  lVar13 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  "Custom" = method_00;
  if (((lVar13 == 0) || (lVar13 = *(long *)(lVar13 + 0x38), lVar13 == 0)) || (*(long *)(lVar13 + 0x20) == 0))
  {
label_040b44af:
    *(undefined8 *)((long)ppSVar15 + -0x58) = 0x40b44b4;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    a = *(System_String_o **)(*(long *)(lVar13 + 0x20) + 0x18);
    *(undefined8 *)((long)ppSVar15 + -0x58) = 0x40b439f;
    bVar7 = System_String__op_Equality(a,(System_String_o *)method_00,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      if (*(int *)((long)&TypeInfo_MapTransfer[5].fields.m_CancellationTokenSource + 4) == 0) {
        *(undefined8 *)((long)ppSVar15 + -0x58) = 0x40b43b4;
        il2cpp_runtime_helper_02337ed0();
      }
      Map_MapTransfer__Transfer(targetPlayer,method_00);
      return;
    }
    __this_05 = (void ***)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
    *(undefined8 *)((long)ppSVar15 + -0x58) = 0x40b43f7;
    parameters = (Photon_Pun_MonoBehaviourPunCallbacks_o **)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
    if ((*(long *)(lVar13 + 0x20) == 0) || ((System_Object_array *)parameters == (System_Object_array *)0x0))
    goto label_040b44af;
    pIVar10 = *(Il2CppObject **)(*(long *)(lVar13 + 0x20) + 0x18);
    if (pIVar10 != (Il2CppObject *)0x0) {
      *(undefined8 *)((long)ppSVar15 + -0x58) = 0x40b4428;
      lVar12 = il2cpp_runtime_helper_023051f0(pIVar10);
      if (lVar12 == 0) goto label_040b44b9;
    }
    if ((int)((System_Object_array *)parameters)->max_length != 0) {
      ((System_Object_array *)parameters)->m_Items[0] = pIVar10;
      *(undefined8 *)((long)ppSVar15 + -0x58) = 0x40b4447;
      il2cpp_runtime_helper_022b4080(((System_Object_array *)parameters)->m_Items);
      if (*(long *)(lVar13 + 0x28) != 0) {
        pIVar10 = *(Il2CppObject **)(*(long *)(lVar13 + 0x28) + 0x18);
        if (pIVar10 != (Il2CppObject *)0x0) {
          *(undefined8 *)((long)ppSVar15 + -0x58) = 0x40b4468;
          lVar13 = il2cpp_runtime_helper_023051f0(pIVar10);
          if (lVar13 == 0) goto label_040b44b9;
        }
        if ((uint)((System_Object_array *)parameters)->max_length < 2) goto label_040b44b4;
        ((System_Object_array *)parameters)->m_Items[1] = pIVar10;
        *(undefined8 *)((long)ppSVar15 + -0x58) = 0x40b4486;
        il2cpp_runtime_helper_022b4080(((System_Object_array *)parameters)->m_Items + 1);
        if ((Photon_Pun_PhotonView_o *)__this_05 != (Photon_Pun_PhotonView_o *)0x0) {
          Photon_Pun_PhotonView__RPC_3efa220
                    ((Photon_Pun_PhotonView_o *)__this_05,"LoadBuiltinMapRPC",targetPlayer,
                     (System_Object_array *)parameters,(MethodInfo *)0x0);
          return;
        }
      }
      goto label_040b44af;
    }
  }
label_040b44b4:
  *(undefined8 *)((long)ppSVar15 + -0x58) = 0x40b44b9;
  il2cpp_runtime_helper_022b2ca0();
label_040b44b9:
  *(undefined8 *)((long)ppSVar15 + -0x58) = 0x40b44be;
  pPVar14 = (Photon_Pun_PhotonView_o *)il2cpp_runtime_helper_0231b270();
  *(undefined8 *)((long)ppSVar15 + -0x58) = 0x40b44c8;
  il2cpp_runtime_helper_022b2b10();
  *(Photon_Realtime_Player_o **)((long)ppSVar15 + -0x58) = targetPlayer;
  *(void ****)((long)ppSVar15 + -0x60) = __this_05;
  *(Photon_Pun_MonoBehaviourPunCallbacks_o ***)((long)ppSVar15 + -0x68) = parameters;
  if (g_data_057ac4f5 == '\0') {
    *(undefined8 *)((long)ppSVar15 + -0x70) = 0x40b4585;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapTransfer);
    g_data_057ac4f5 = '\x01';
    iVar2 = *(int *)((long)&TypeInfo_MapTransfer[5].fields.m_CancellationTokenSource + 4);
  }
  else {
    iVar2 = *(int *)((long)&TypeInfo_MapTransfer[5].fields.m_CancellationTokenSource + 4);
  }
  if (iVar2 == 0) {
    *(undefined8 *)((long)ppSVar15 + -0x70) = 0x40b45a8;
    il2cpp_runtime_helper_02337ed0();
    __this = ((TypeInfo_MapTransfer[4].fields.m_CancellationTokenSource)->fields)._registeredCallbacksLists;
    __this_04 = TypeInfo_MapTransfer;
  }
  else {
    __this = ((TypeInfo_MapTransfer[4].fields.m_CancellationTokenSource)->fields)._registeredCallbacksLists;
    __this_04 = TypeInfo_MapTransfer;
  }
  TypeInfo_MapTransfer = __this_04;
  if (__this != (System_Threading_SparselyPopulatedArray_CancellationCallbackInfo__array *)0x0) {
    if (g_data_057ac4f8 == '\0') {
      *(undefined8 *)((long)ppSVar15 + -0x70) = 0x40b4525;
      il2cpp_runtime_helper_023445d0(&TypeInfo_TransferMapData_d__19);
      g_data_057ac4f8 = '\x01';
    }
    *(undefined8 *)((long)ppSVar15 + -0x70) = 0x40b453b;
    __this_03 = (Photon_Pun_MonoBehaviourPunCallbacks_o *)il2cpp_runtime_helper_023052d0(TypeInfo_TransferMapData_d__19);
    *(undefined8 *)((long)ppSVar15 + -0x70) = 0x40b4548;
    __this_04 = __this_03;
    System_Object___ctor((Il2CppObject *)__this_03,(MethodInfo *)0x0);
    *(undefined4 *)&(__this_03->fields).m_CachedPtr = 0;
    if (__this_03 != (Photon_Pun_MonoBehaviourPunCallbacks_o *)0x0) {
      (__this_03->fields).pvCache = pPVar14;
      *(undefined8 *)((long)ppSVar15 + -0x70) = 0x40b4567;
      il2cpp_runtime_helper_022b4080(&(__this_03->fields).pvCache,pPVar14);
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_03,
                 (MethodInfo *)0x0);
      return;
    }
  }
  *(undefined8 *)((long)ppSVar15 + -0x70) = 0x40b45c4;
  il2cpp_runtime_helper_022b2c90();
  Photon_Pun_MonoBehaviourPunCallbacks___ctor(__this_04,(MethodInfo *)0x0);
  return;
}


// Map.MapManager$$LoadMap
// il2cpp: void Map_MapManager__LoadMap (bool mapChanged, const MethodInfo* method);
// 0x40b40f0

void Map_MapManager__LoadMap(bool_conflict mapChanged,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_string__o *customAssets;
  System_Collections_Generic_List_MapScriptBaseObject__o *objects;
  Map_MapScriptOptions_o *options;
  Settings_WeatherSet_o *weather;
  Il2CppObject *pIVar2;
  System_Threading_SparselyPopulatedArray_CancellationCallbackInfo__array *__this;
  char cVar3;
  bool_conflict bVar4;
  Photon_Realtime_Player_o *player;
  System_Object_array *parameters;
  long lVar5;
  long lVar6;
  Photon_Pun_PhotonView_o *pPVar7;
  Photon_Pun_MonoBehaviourPunCallbacks_o *__this_00;
  Photon_Realtime_Player_o *targetPlayer;
  MethodInfo *method_00;
  Photon_Pun_MonoBehaviourPunCallbacks_o *__this_01;
  
  if (g_data_057ac4d9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapTransfer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&"CustomMapHash");
    g_data_057ac4d9 = '\x01';
  }
  if (*(int *)(TypeInfo_MapManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  *(char *)(*(long *)(TypeInfo_MapManager + 0xb8) + 0x18) = (char)mapChanged;
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  player = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  if (*(int *)((long)&TypeInfo_MapTransfer[5].fields.m_CancellationTokenSource + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  targetPlayer = "CustomMapHash";
  PhotonExtensions__SetCustomProperty
            (player,(System_String_o *)"CustomMapHash",
             (TypeInfo_MapTransfer[4].fields.m_CancellationTokenSource)->monitor,(MethodInfo *)0x0);
  lVar6 = *(long *)(*(long *)(TypeInfo_MapManager + 0xb8) + 8);
  if (((lVar6 != 0) && (*(long *)(lVar6 + 0x28) != 0)) && (*(long *)(lVar6 + 0x30) != 0)) {
    customAssets = *(System_Collections_Generic_List_string__o **)(*(long *)(lVar6 + 0x28) + 0x10);
    objects = *(System_Collections_Generic_List_MapScriptBaseObject__o **)(*(long *)(lVar6 + 0x30) + 0x10);
    options = *(Map_MapScriptOptions_o **)(lVar6 + 0x20);
    weather = *(Settings_WeatherSet_o **)(lVar6 + 0x38);
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    Map_MapLoader__StartLoadObjects(customAssets,objects,options,weather,0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac4da == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapTransfer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RPCManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&"Custom");
    il2cpp_runtime_helper_023445d0(&"LoadBuiltinMapRPC");
    g_data_057ac4da = '\x01';
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) != 0) goto label_040b426c;
label_040b4325:
    il2cpp_runtime_helper_02337ed0();
    bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar3 = (char)bVar4;
  }
  else {
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) goto label_040b4325;
label_040b426c:
    bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar3 = (char)bVar4;
  }
  if (cVar3 == '\0') {
    return;
  }
  if (*(int *)((long)&TypeInfo_MapTransfer[5].fields.m_CancellationTokenSource + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    cVar3 = *(char *)&(TypeInfo_MapTransfer[4].fields.m_CancellationTokenSource)->klass;
    method_00 = "Custom";
  }
  else {
    cVar3 = *(char *)&(TypeInfo_MapTransfer[4].fields.m_CancellationTokenSource)->klass;
    method_00 = "Custom";
  }
  if (cVar3 == '\0') {
    "Custom" = method_00;
    return;
  }
  lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  "Custom" = method_00;
  if (((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x38), lVar6 == 0)) || (*(long *)(lVar6 + 0x20) == 0)) {
label_040b44af:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    bVar4 = System_String__op_Equality
                      (*(System_String_o **)(*(long *)(lVar6 + 0x20) + 0x18),(System_String_o *)method_00,
                       (MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)((long)&TypeInfo_MapTransfer[5].fields.m_CancellationTokenSource + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Map_MapTransfer__Transfer(targetPlayer,method_00);
      return;
    }
    pPVar7 = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
    parameters = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
    if ((*(long *)(lVar6 + 0x20) == 0) || (parameters == (System_Object_array *)0x0)) goto label_040b44af;
    pIVar2 = *(Il2CppObject **)(*(long *)(lVar6 + 0x20) + 0x18);
    if ((pIVar2 != (Il2CppObject *)0x0) && (lVar5 = il2cpp_runtime_helper_023051f0(pIVar2), lVar5 == 0))
    goto label_040b44b9;
    if ((int)parameters->max_length != 0) {
      parameters->m_Items[0] = pIVar2;
      il2cpp_runtime_helper_022b4080(parameters->m_Items);
      if (*(long *)(lVar6 + 0x28) != 0) {
        pIVar2 = *(Il2CppObject **)(*(long *)(lVar6 + 0x28) + 0x18);
        if ((pIVar2 != (Il2CppObject *)0x0) && (lVar6 = il2cpp_runtime_helper_023051f0(pIVar2), lVar6 == 0))
        goto label_040b44b9;
        if ((uint)parameters->max_length < 2) goto label_040b44b4;
        parameters->m_Items[1] = pIVar2;
        il2cpp_runtime_helper_022b4080(parameters->m_Items + 1);
        if (pPVar7 != (Photon_Pun_PhotonView_o *)0x0) {
          Photon_Pun_PhotonView__RPC_3efa220(pPVar7,"LoadBuiltinMapRPC",targetPlayer,parameters,(MethodInfo *)0x0);
          return;
        }
      }
      goto label_040b44af;
    }
  }
label_040b44b4:
  il2cpp_runtime_helper_022b2ca0();
label_040b44b9:
  pPVar7 = (Photon_Pun_PhotonView_o *)il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ac4f5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapTransfer);
    g_data_057ac4f5 = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_MapTransfer[5].fields.m_CancellationTokenSource + 4);
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_MapTransfer[5].fields.m_CancellationTokenSource + 4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    __this = ((TypeInfo_MapTransfer[4].fields.m_CancellationTokenSource)->fields)._registeredCallbacksLists;
    __this_01 = TypeInfo_MapTransfer;
  }
  else {
    __this = ((TypeInfo_MapTransfer[4].fields.m_CancellationTokenSource)->fields)._registeredCallbacksLists;
    __this_01 = TypeInfo_MapTransfer;
  }
  TypeInfo_MapTransfer = __this_01;
  if (__this != (System_Threading_SparselyPopulatedArray_CancellationCallbackInfo__array *)0x0) {
    if (g_data_057ac4f8 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_TransferMapData_d__19);
      g_data_057ac4f8 = '\x01';
    }
    __this_00 = (Photon_Pun_MonoBehaviourPunCallbacks_o *)il2cpp_runtime_helper_023052d0(TypeInfo_TransferMapData_d__19);
    __this_01 = __this_00;
    System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
    *(undefined4 *)&(__this_00->fields).m_CachedPtr = 0;
    if (__this_00 != (Photon_Pun_MonoBehaviourPunCallbacks_o *)0x0) {
      (__this_00->fields).pvCache = pPVar7;
      il2cpp_runtime_helper_022b4080(&(__this_00->fields).pvCache,pPVar7);
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
                 (MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  Photon_Pun_MonoBehaviourPunCallbacks___ctor(__this_01,(MethodInfo *)0x0);
  return;
}


// Map.MapManager$$OnPlayerEnteredRoom
// il2cpp: void Map_MapManager__OnPlayerEnteredRoom (Map_MapManager_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x40b4240

void Map_MapManager__OnPlayerEnteredRoom
               (Map_MapManager_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  System_Threading_SparselyPopulatedArray_CancellationCallbackInfo__array *__this_00;
  char cVar3;
  bool_conflict bVar4;
  System_Object_array *parameters;
  long lVar5;
  long lVar6;
  Photon_Pun_PhotonView_o *pPVar7;
  Photon_Pun_MonoBehaviourPunCallbacks_o *__this_01;
  MethodInfo *method_00;
  Photon_Pun_MonoBehaviourPunCallbacks_o *__this_02;
  
  if (g_data_057ac4da == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapTransfer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RPCManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&"Custom");
    il2cpp_runtime_helper_023445d0(&"LoadBuiltinMapRPC");
    g_data_057ac4da = '\x01';
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) != 0) goto label_040b426c;
label_040b4325:
    il2cpp_runtime_helper_02337ed0();
    bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar3 = (char)bVar4;
  }
  else {
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) goto label_040b4325;
label_040b426c:
    bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar3 = (char)bVar4;
  }
  if (cVar3 == '\0') {
    return;
  }
  if (*(int *)((long)&TypeInfo_MapTransfer[5].fields.m_CancellationTokenSource + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    cVar3 = *(char *)&(TypeInfo_MapTransfer[4].fields.m_CancellationTokenSource)->klass;
    method_00 = "Custom";
  }
  else {
    cVar3 = *(char *)&(TypeInfo_MapTransfer[4].fields.m_CancellationTokenSource)->klass;
    method_00 = "Custom";
  }
  if (cVar3 == '\0') {
    "Custom" = method_00;
    return;
  }
  lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  "Custom" = method_00;
  if (((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x38), lVar6 == 0)) || (*(long *)(lVar6 + 0x20) == 0)) {
label_040b44af:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    bVar4 = System_String__op_Equality
                      (*(System_String_o **)(*(long *)(lVar6 + 0x20) + 0x18),(System_String_o *)method_00,
                       (MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)((long)&TypeInfo_MapTransfer[5].fields.m_CancellationTokenSource + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Map_MapTransfer__Transfer(player,method_00);
      return;
    }
    pPVar7 = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
    parameters = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
    if ((*(long *)(lVar6 + 0x20) == 0) || (parameters == (System_Object_array *)0x0)) goto label_040b44af;
    pIVar2 = *(Il2CppObject **)(*(long *)(lVar6 + 0x20) + 0x18);
    if ((pIVar2 != (Il2CppObject *)0x0) && (lVar5 = il2cpp_runtime_helper_023051f0(pIVar2), lVar5 == 0))
    goto label_040b44b9;
    if ((int)parameters->max_length != 0) {
      parameters->m_Items[0] = pIVar2;
      il2cpp_runtime_helper_022b4080(parameters->m_Items);
      if (*(long *)(lVar6 + 0x28) != 0) {
        pIVar2 = *(Il2CppObject **)(*(long *)(lVar6 + 0x28) + 0x18);
        if ((pIVar2 != (Il2CppObject *)0x0) && (lVar6 = il2cpp_runtime_helper_023051f0(pIVar2), lVar6 == 0))
        goto label_040b44b9;
        if ((uint)parameters->max_length < 2) goto label_040b44b4;
        parameters->m_Items[1] = pIVar2;
        il2cpp_runtime_helper_022b4080(parameters->m_Items + 1);
        if (pPVar7 != (Photon_Pun_PhotonView_o *)0x0) {
          Photon_Pun_PhotonView__RPC_3efa220(pPVar7,"LoadBuiltinMapRPC",player,parameters,(MethodInfo *)0x0);
          return;
        }
      }
      goto label_040b44af;
    }
  }
label_040b44b4:
  il2cpp_runtime_helper_022b2ca0();
label_040b44b9:
  pPVar7 = (Photon_Pun_PhotonView_o *)il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ac4f5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapTransfer);
    g_data_057ac4f5 = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_MapTransfer[5].fields.m_CancellationTokenSource + 4);
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_MapTransfer[5].fields.m_CancellationTokenSource + 4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    __this_00 = ((TypeInfo_MapTransfer[4].fields.m_CancellationTokenSource)->fields)._registeredCallbacksLists;
    __this_02 = TypeInfo_MapTransfer;
  }
  else {
    __this_00 = ((TypeInfo_MapTransfer[4].fields.m_CancellationTokenSource)->fields)._registeredCallbacksLists;
    __this_02 = TypeInfo_MapTransfer;
  }
  TypeInfo_MapTransfer = __this_02;
  if (__this_00 != (System_Threading_SparselyPopulatedArray_CancellationCallbackInfo__array *)0x0) {
    if (g_data_057ac4f8 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_TransferMapData_d__19);
      g_data_057ac4f8 = '\x01';
    }
    __this_01 = (Photon_Pun_MonoBehaviourPunCallbacks_o *)il2cpp_runtime_helper_023052d0(TypeInfo_TransferMapData_d__19);
    __this_02 = __this_01;
    System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
    *(undefined4 *)&(__this_01->fields).m_CachedPtr = 0;
    if (__this_01 != (Photon_Pun_MonoBehaviourPunCallbacks_o *)0x0) {
      (__this_01->fields).pvCache = pPVar7;
      il2cpp_runtime_helper_022b4080(&(__this_01->fields).pvCache,pPVar7);
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                ((UnityEngine_MonoBehaviour_o *)__this_00,(System_Collections_IEnumerator_o *)__this_01,
                 (MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  Photon_Pun_MonoBehaviourPunCallbacks___ctor(__this_02,(MethodInfo *)0x0);
  return;
}


// Map.MapManager$$.ctor
// il2cpp: void Map_MapManager___ctor (Map_MapManager_o* __this, const MethodInfo* method);
// 0x40b45d0

void Map_MapManager___ctor(Map_MapManager_o *__this,MethodInfo *method)

{
  Photon_Pun_MonoBehaviourPunCallbacks___ctor
            ((Photon_Pun_MonoBehaviourPunCallbacks_o *)__this,(MethodInfo *)0x0);
  return;
}


// Map.MapManager$$.cctor
// il2cpp: void Map_MapManager___cctor (const MethodInfo* method);
// 0x40b45e0

void Map_MapManager___cctor(MethodInfo *method)

{
  long lVar1;
  
  if (g_data_057ac4db == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapManager);
    g_data_057ac4db = '\x01';
  }
  lVar1 = *(long *)(TypeInfo_MapManager + 0xb8);
  *(undefined1 *)(lVar1 + 0x18) = 1;
  *(undefined8 *)(lVar1 + 0x20) = **(undefined8 **)(g_data_057b9c00 + 0xb8);
  il2cpp_runtime_helper_022b4080(lVar1 + 0x20);
  lVar1 = *(long *)(TypeInfo_MapManager + 0xb8);
  *(undefined8 *)(lVar1 + 0x28) = **(undefined8 **)(g_data_057b9c00 + 0xb8);
  il2cpp_runtime_helper_022b4080(lVar1 + 0x28);
  return;
}


