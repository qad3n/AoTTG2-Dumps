// Type: Map.BuiltinMapPrefabs
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Map/BuiltinMapPrefabs.cs
// Prior real C# source (older reference): Assets/Scripts/Map/BuiltinMapPrefabs.cs
// --------------------------------

// Map.BuiltinMapPrefabs$$Init
// il2cpp: void Map_BuiltinMapPrefabs__Init (const MethodInfo* method);
// 0x409f1c0

void Map_BuiltinMapPrefabs__Init(MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  System_Object_array *pSVar5;
  Il2CppObject *pIVar6;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_00;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_01;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_02;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_03;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_04;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_05;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_06;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_07;
  long lVar7;
  char cVar8;
  undefined1 uVar9;
  bool_conflict bVar10;
  UnityEngine_Object_o *__this_08;
  System_String_o *pSVar11;
  SimpleJSONFixed_JSONNode_o *pSVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  System_Collections_Generic_List_object__o *pSVar16;
  Map_MapScriptSceneObject_o *__this_09;
  undefined8 uVar17;
  System_String_o *__this_10;
  System_String_o *pSVar18;
  Map_MapScriptBaseMaterial_o *pMVar19;
  SimpleJSONFixed_JSONNode_o *pSVar20;
  Map_MapScriptComponent_o *__this_11;
  Il2CppObject *value;
  bool_conflict *pbVar21;
  float fVar22;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar23;
  undefined8 in_stack_fffffffffffffe28;
  System_String_o *in_stack_fffffffffffffe30;
  long *in_stack_fffffffffffffe38;
  bool_conflict *in_stack_fffffffffffffe40;
  Il2CppMethodPointer in_stack_fffffffffffffe48;
  System_Collections_Generic_Dictionary_TKey__TValue__o *in_stack_fffffffffffffe50;
  InvokerMethod in_stack_fffffffffffffe58;
  Il2CppObject *in_stack_fffffffffffffe60;
  Il2CppClass *in_stack_fffffffffffffe68;
  Il2CppType *pIStack_190;
  System_Collections_Generic_List_T__o *local_188;
  _union_13 _Stack_180;
  _union_14 local_178;
  undefined1 local_168 [80];
  undefined1 local_118 [80];
  undefined1 local_c8 [80];
  Il2CppMethodPointer local_78;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_70;
  InvokerMethod local_68;
  Il2CppObject *pIStack_60;
  Il2CppClass *local_58;
  Il2CppType *pIStack_50;
  System_Collections_Generic_List_T__o *local_48;
  _union_13 _Stack_40;
  _union_14 local_38;
  
  if (g_data_057ac48a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinMapPrefabs);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Map_MapScriptBaseObject_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Map_MapScriptBaseObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_MapScriptBaseObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptComponent);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptSceneObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TextAsset);
    il2cpp_runtime_helper_023445d0(&"AssetBasePath");
    il2cpp_runtime_helper_023445d0(&"Asset");
    il2cpp_runtime_helper_023445d0(&"Preview");
    il2cpp_runtime_helper_023445d0(&"CollideMode");
    il2cpp_runtime_helper_023445d0(&"AssetPrefix");
    il2cpp_runtime_helper_023445d0(&"ScaleY");
    il2cpp_runtime_helper_023445d0(&"Prefabs");
    il2cpp_runtime_helper_023445d0(&"Networked");
    il2cpp_runtime_helper_023445d0(&"None");
    il2cpp_runtime_helper_023445d0(&"Name");
    il2cpp_runtime_helper_023445d0(&"Visible");
    il2cpp_runtime_helper_023445d0(&"Info");
    il2cpp_runtime_helper_023445d0(&"/");
    il2cpp_runtime_helper_023445d0(&"Category");
    il2cpp_runtime_helper_023445d0(&"ScaleX");
    il2cpp_runtime_helper_023445d0(&"Type");
    il2cpp_runtime_helper_023445d0(&"Static");
    il2cpp_runtime_helper_023445d0(&"ScaleZ");
    il2cpp_runtime_helper_023445d0(&"CollideWith");
    il2cpp_runtime_helper_023445d0(&"Variant");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"AssetSameAsName");
    il2cpp_runtime_helper_023445d0(&"Material");
    il2cpp_runtime_helper_023445d0(&"Hidden");
    il2cpp_runtime_helper_023445d0(&"MapPrefabList");
    il2cpp_runtime_helper_023445d0(&"Components");
    g_data_057ac48a = '\x01';
  }
  local_118._48_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_118._56_8_ = (Il2CppRGCTXData *)0x0;
  local_118._32_8_ = (Il2CppClass *)0x0;
  local_118._40_8_ = (Il2CppType *)0x0;
  local_118._16_8_ = (InvokerMethod)0x0;
  local_118._24_8_ = (Il2CppObject *)0x0;
  local_118._0_8_ = (Il2CppMethodPointer)0x0;
  local_118._8_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_118._64_8_ = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_48 = (System_Collections_Generic_List_T__o *)0x0;
  _Stack_40.rgctx_data = (Il2CppRGCTXData *)0x0;
  local_58 = (Il2CppClass *)0x0;
  pIStack_50 = (Il2CppType *)0x0;
  local_68 = (InvokerMethod)0x0;
  pIStack_60 = (Il2CppObject *)0x0;
  local_78 = (Il2CppMethodPointer)0x0;
  pSStack_70 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_38.genericMethod = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_c8._48_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_c8._56_8_ = (Il2CppRGCTXData *)0x0;
  local_c8._32_8_ = (Il2CppClass *)0x0;
  local_c8._40_8_ = (Il2CppType *)0x0;
  local_c8._16_8_ = (InvokerMethod)0x0;
  local_c8._24_8_ = (Il2CppObject *)0x0;
  local_c8._0_8_ = (Il2CppMethodPointer)0x0;
  local_c8._8_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_c8._64_8_ = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_168._48_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_168._56_8_ = (Il2CppRGCTXData *)0x0;
  local_168._32_8_ = (Il2CppClass *)0x0;
  local_168._40_8_ = (Il2CppType *)0x0;
  local_168._16_8_ = (InvokerMethod)0x0;
  local_168._24_8_ = (Il2CppObject *)0x0;
  local_168._0_8_ = (Il2CppMethodPointer)0x0;
  local_168._8_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_168._64_8_ = (SimpleJSONFixed_JSONNode_o *)0x0;
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar11 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x18);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_08 = ApplicationManagers_ResourceManager__LoadAsset(pSVar11,"MapPrefabList",0,(MethodInfo *)0x0);
  if (__this_08 != (UnityEngine_Object_o *)0x0) {
    bVar2 = (TypeInfo_TextAsset->_2).naturalAligment;
    if (((__this_08->klass->_2).naturalAligment < bVar2) ||
       ((__this_08->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_TextAsset)) goto label_040a0635;
    pSVar11 = UnityEngine_TextAsset__get_text((UnityEngine_TextAsset_o *)__this_08,(MethodInfo *)0x0);
    pSVar12 = SimpleJSONFixed_JSON__Parse(pSVar11,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_BuiltinMapPrefabs + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    **(undefined8 **)(TypeInfo_BuiltinMapPrefabs + 0xb8) = pSVar12;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_BuiltinMapPrefabs + 0xb8),pSVar12);
    if ((SimpleJSONFixed_JSONNode_o *)**(undefined8 **)(TypeInfo_BuiltinMapPrefabs + 0xb8) !=
        (SimpleJSONFixed_JSONNode_o *)0x0) {
      SimpleJSONFixed_JSONNode__get_Keys
                ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&stack0xfffffffffffffe48,
                 (SimpleJSONFixed_JSONNode_o *)**(undefined8 **)(TypeInfo_BuiltinMapPrefabs + 0xb8),(MethodInfo *)0x0);
      local_38 = local_178;
      local_48 = local_188;
      _Stack_40 = _Stack_180;
      pIStack_50 = pIStack_190;
      __this.fields.m_Enumerator.fields.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffe30;
      __this.fields.m_Enumerator.fields._0_8_ = in_stack_fffffffffffffe28;
      __this.fields.m_Enumerator.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffe38;
      __this.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
           (Il2CppObject *)in_stack_fffffffffffffe40;
      __this.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
           (Il2CppObject *)in_stack_fffffffffffffe48;
      __this.fields.m_Enumerator.fields.m_Object.fields._32_8_ = in_stack_fffffffffffffe50;
      __this.fields.m_Enumerator.fields.m_Array.fields._list =
           (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe58;
      __this.fields.m_Enumerator.fields.m_Array.fields._8_8_ = in_stack_fffffffffffffe60;
      __this.fields.m_Enumerator.fields.m_Array.fields._current =
           (SimpleJSONFixed_JSONNode_o *)in_stack_fffffffffffffe68;
      local_78 = in_stack_fffffffffffffe48;
      pSStack_70 = in_stack_fffffffffffffe50;
      local_68 = in_stack_fffffffffffffe58;
      pIStack_60 = in_stack_fffffffffffffe60;
      local_58 = in_stack_fffffffffffffe68;
      SimpleJSONFixed_JSONNode_KeyEnumerator__GetEnumerator
                ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&stack0xfffffffffffffe48,__this,
                 (MethodInfo *)&local_78);
      local_118._64_8_ = local_178;
      local_118._48_8_ = local_188;
      local_118._56_8_ = _Stack_180;
      local_118._40_8_ = pIStack_190;
      __this_00.fields.m_Enumerator.fields.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffe30;
      __this_00.fields.m_Enumerator.fields._0_8_ = in_stack_fffffffffffffe28;
      __this_00.fields.m_Enumerator.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffe38;
      __this_00.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
           (Il2CppObject *)in_stack_fffffffffffffe40;
      __this_00.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
           (Il2CppObject *)in_stack_fffffffffffffe48;
      __this_00.fields.m_Enumerator.fields.m_Object.fields._32_8_ = in_stack_fffffffffffffe50;
      __this_00.fields.m_Enumerator.fields.m_Array.fields._list =
           (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe58;
      __this_00.fields.m_Enumerator.fields.m_Array.fields._8_8_ = in_stack_fffffffffffffe60;
      __this_00.fields.m_Enumerator.fields.m_Array.fields._current =
           (SimpleJSONFixed_JSONNode_o *)in_stack_fffffffffffffe68;
      local_118._0_8_ = in_stack_fffffffffffffe48;
      local_118._8_8_ = in_stack_fffffffffffffe50;
      local_118._16_8_ = in_stack_fffffffffffffe58;
      local_118._24_8_ = in_stack_fffffffffffffe60;
      local_118._32_8_ = in_stack_fffffffffffffe68;
      bVar10 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext(__this_00,(MethodInfo *)local_118);
      cVar8 = (char)bVar10;
      do {
        if (cVar8 == '\0') {
          return;
        }
        __this_02.fields.m_Enumerator.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffe30;
        __this_02.fields.m_Enumerator.fields._0_8_ = in_stack_fffffffffffffe28;
        __this_02.fields.m_Enumerator.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffe38;
        __this_02.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
             (Il2CppObject *)in_stack_fffffffffffffe40;
        __this_02.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
             (Il2CppObject *)in_stack_fffffffffffffe48;
        __this_02.fields.m_Enumerator.fields.m_Object.fields._32_8_ = in_stack_fffffffffffffe50;
        __this_02.fields.m_Enumerator.fields.m_Array.fields._list =
             (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe58;
        __this_02.fields.m_Enumerator.fields.m_Array.fields._8_8_ = in_stack_fffffffffffffe60;
        __this_02.fields.m_Enumerator.fields.m_Array.fields._current =
             (SimpleJSONFixed_JSONNode_o *)in_stack_fffffffffffffe68;
        in_stack_fffffffffffffe30 =
             SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current(__this_02,(MethodInfo *)local_118);
        if (*(int *)(TypeInfo_BuiltinMapPrefabs + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        plVar13 = (long *)**(long **)(TypeInfo_BuiltinMapPrefabs + 0xb8);
        if (((plVar13 == (long *)0x0) ||
            (plVar13 = (long *)(**(code **)(*plVar13 + 0x1a8))
                                         (plVar13,in_stack_fffffffffffffe30,*(undefined8 *)(*plVar13 + 0x1b0))
            , plVar13 == (long *)0x0)) ||
           (plVar14 = (long *)(**(code **)(*plVar13 + 0x1a8))
                                        (plVar13,"Info",*(undefined8 *)(*plVar13 + 0x1b0)),
           plVar14 == (long *)0x0)) break;
        cVar8 = (**(code **)(*plVar14 + 0x2f8))(plVar14,"Category",*(undefined8 *)(*plVar14 + 0x300));
        if (cVar8 != '\0') {
          plVar15 = (long *)(**(code **)(*plVar14 + 0x1a8))
                                      (plVar14,"Category",*(undefined8 *)(*plVar14 + 0x1b0));
          if (plVar15 == (long *)0x0) break;
          in_stack_fffffffffffffe30 = (System_String_o *)(**(code **)(*plVar15 + 0x1c8))(plVar15);
        }
        if (*(int *)(TypeInfo_BuiltinMapPrefabs + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar4 = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (*(long *)(TypeInfo_BuiltinMapPrefabs + 0xb8) + 0x10);
        if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
        bVar10 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                           (pSVar4,(Il2CppObject *)in_stack_fffffffffffffe30,MethodInfo_Boolean_ContainsKey);
        if ((char)bVar10 == '\0') {
          if (*(int *)(TypeInfo_BuiltinMapPrefabs + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar4 = *(System_Collections_Generic_Dictionary_object__object__o **)
                    (*(long *)(TypeInfo_BuiltinMapPrefabs + 0xb8) + 0x10);
          pSVar16 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_MapScriptBaseObject);
          System_Collections_Generic_List_object____ctor(pSVar16,MethodInfo_List_1_Map_MapScriptBaseObject);
          if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
          System_Collections_Generic_Dictionary_object__object___Add
                    (pSVar4,(Il2CppObject *)in_stack_fffffffffffffe30,(Il2CppObject *)pSVar16,MethodInfo_Void_Add);
        }
        plVar13 = (long *)(**(code **)(*plVar13 + 0x1a8))
                                    (plVar13,"Prefabs",*(undefined8 *)(*plVar13 + 0x1b0));
        if (plVar13 == (long *)0x0) break;
        (**(code **)(*plVar13 + 0x338))(&stack0xfffffffffffffe48,plVar13,*(undefined8 *)(*plVar13 + 0x340));
        local_c8._64_8_ = local_178;
        local_c8._48_8_ = local_188;
        local_c8._56_8_ = _Stack_180;
        local_c8._40_8_ = pIStack_190;
        __this_03.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffe30;
        __this_03.fields._0_8_ = in_stack_fffffffffffffe28;
        __this_03.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffe38;
        __this_03.fields.m_Object.fields._current.fields.key = (Il2CppObject *)in_stack_fffffffffffffe40;
        __this_03.fields.m_Object.fields._current.fields.value = (Il2CppObject *)in_stack_fffffffffffffe48;
        __this_03.fields.m_Object.fields._32_8_ = in_stack_fffffffffffffe50;
        __this_03.fields.m_Array.fields._list =
             (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe58;
        __this_03.fields.m_Array.fields._8_8_ = in_stack_fffffffffffffe60;
        __this_03.fields.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)in_stack_fffffffffffffe68;
        local_c8._0_8_ = in_stack_fffffffffffffe48;
        local_c8._8_8_ = in_stack_fffffffffffffe50;
        local_c8._16_8_ = in_stack_fffffffffffffe58;
        local_c8._24_8_ = in_stack_fffffffffffffe60;
        local_c8._32_8_ = in_stack_fffffffffffffe68;
        bVar10 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this_03,(MethodInfo *)local_c8);
        cVar8 = (char)bVar10;
        plVar13 = plVar14;
        while (plVar15 = plVar14, cVar8 != '\0') {
          __this_05.fields.m_Object.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffe30;
          __this_05.fields._0_8_ = in_stack_fffffffffffffe28;
          __this_05.fields.m_Object.fields._8_8_ = plVar15;
          __this_05.fields.m_Object.fields._current.fields.key = (Il2CppObject *)in_stack_fffffffffffffe40;
          __this_05.fields.m_Object.fields._current.fields.value = (Il2CppObject *)in_stack_fffffffffffffe48;
          __this_05.fields.m_Object.fields._32_8_ = in_stack_fffffffffffffe50;
          __this_05.fields.m_Array.fields._list =
               (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe58;
          __this_05.fields.m_Array.fields._8_8_ = in_stack_fffffffffffffe60;
          __this_05.fields.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)in_stack_fffffffffffffe68;
          SVar23 = SimpleJSONFixed_JSONNode_Enumerator__get_Current(__this_05,(MethodInfo *)local_c8);
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar12 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(SVar23,(MethodInfo *)0x0);
          __this_09 = (Map_MapScriptSceneObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptSceneObject);
          Map_MapScriptSceneObject___ctor(__this_09,(MethodInfo *)0x0);
          plVar14 = (long *)(**(code **)(*plVar13 + 0x1a8))
                                      (plVar13,"Type",*(undefined8 *)(*plVar13 + 0x1b0));
          if ((plVar14 == (long *)0x0) ||
             (pSVar11 = (System_String_o *)(**(code **)(*plVar14 + 0x1c8))(plVar14),
             __this_09 == (Map_MapScriptSceneObject_o *)0x0)) goto label_040a0630;
          (__this_09->fields).Type = pSVar11;
          il2cpp_runtime_helper_022b4080(&__this_09->fields);
          if ((pSVar12 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
             (plVar14 = (long *)(*(pSVar12->klass->vtable)._7_get_Item.methodPtr)
                                          (pSVar12,"Name",(pSVar12->klass->vtable)._7_get_Item.method),
             plVar14 == (long *)0x0)) goto label_040a0630;
          uVar17 = (**(code **)(*plVar14 + 0x1c8))(plVar14,*(undefined8 *)(*plVar14 + 0x1d0));
          pbVar21 = &(__this_09->fields).Visible;
          (__this_09->fields).Visible = (int)uVar17;
          (__this_09->fields).Networked = (int)((ulong)uVar17 >> 0x20);
          il2cpp_runtime_helper_022b4080(pbVar21,uVar17);
          pSVar11 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
          cVar8 = (**(code **)(*plVar13 + 0x2f8))(plVar13,"AssetSameAsName",*(undefined8 *)(*plVar13 + 0x300));
          if (cVar8 != '\0') {
            plVar13 = (long *)(**(code **)(*plVar13 + 0x1a8))
                                        (plVar13,"AssetSameAsName",*(undefined8 *)(*plVar13 + 0x1b0));
            if (plVar13 == (long *)0x0) goto label_040a0630;
            cVar8 = (**(code **)(*plVar13 + 0x3a8))(plVar13,*(undefined8 *)(*plVar13 + 0x3b0));
            if (cVar8 != '\0') {
              plVar13 = (long *)(*(pSVar12->klass->vtable)._7_get_Item.methodPtr)
                                          (pSVar12,"Name",(pSVar12->klass->vtable)._7_get_Item.method);
              if (plVar13 == (long *)0x0) goto label_040a0630;
              pSVar11 = (System_String_o *)
                        (**(code **)(*plVar13 + 0x1c8))(plVar13,*(undefined8 *)(*plVar13 + 0x1d0));
            }
          }
          cVar8 = (*(pSVar12->klass->vtable)._28_HasKey.methodPtr)
                            (pSVar12,"Asset",(pSVar12->klass->vtable)._28_HasKey.method);
          if (cVar8 != '\0') {
            plVar13 = (long *)(*(pSVar12->klass->vtable)._7_get_Item.methodPtr)
                                        (pSVar12,"Asset",(pSVar12->klass->vtable)._7_get_Item.method);
            if (plVar13 == (long *)0x0) goto label_040a0630;
            pSVar11 = (System_String_o *)
                      (**(code **)(*plVar13 + 0x1c8))(plVar13,*(undefined8 *)(*plVar13 + 0x1d0));
          }
          bVar10 = System_String__op_Equality
                             (pSVar11,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                              (MethodInfo *)0x0);
          pSVar18 = "None";
          if (((char)bVar10 == '\0') &&
             (bVar10 = System_String__op_Equality(pSVar11,"None",(MethodInfo *)0x0),
             __this_10 = "", pSVar18 = "None", (char)bVar10 == '\0')) {
            plVar13 = plVar15;
            cVar8 = (**(code **)(*plVar15 + 0x2f8))(plVar15,"AssetBasePath",*(undefined8 *)(*plVar15 + 0x300));
            if (cVar8 == '\0') {
              cVar8 = (**(code **)(*plVar15 + 0x2f8))(plVar15,"AssetPrefix",*(undefined8 *)(*plVar15 + 0x300));
              in_stack_fffffffffffffe40 = pbVar21;
              if (cVar8 != '\0') {
                plVar14 = (long *)(**(code **)(*plVar13 + 0x1a8))
                                            (plVar13,"AssetPrefix",*(undefined8 *)(*plVar13 + 0x1b0));
                if (plVar14 == (long *)0x0) goto label_040a0630;
                __this_10 = (System_String_o *)
                            (**(code **)(*plVar14 + 0x1c8))(plVar14,*(undefined8 *)(*plVar14 + 0x1d0));
              }
            }
            else {
              plVar14 = (long *)(**(code **)(*plVar15 + 0x1a8))
                                          (plVar15,"AssetBasePath",*(undefined8 *)(*plVar15 + 0x1b0));
              if ((plVar14 == (long *)0x0) ||
                 (__this_10 = (System_String_o *)(**(code **)(*plVar14 + 0x1c8))(plVar14),
                 __this_10 == (System_String_o *)0x0)) goto label_040a0630;
              in_stack_fffffffffffffe40 = pbVar21;
              bVar10 = System_String__EndsWith(__this_10,"/",(MethodInfo *)0x0);
              if ((char)bVar10 == '\0') {
                __this_10 = System_String__Concat_3ae5ba0(__this_10,"/",(MethodInfo *)0x0);
              }
            }
            pSVar18 = System_String__Concat_3ae5ba0(__this_10,pSVar11,(MethodInfo *)0x0);
            plVar15 = plVar13;
          }
          (__this_09->fields).Asset = pSVar18;
          il2cpp_runtime_helper_022b4080(&(__this_09->fields).Asset);
          cVar8 = (*(pSVar12->klass->vtable)._28_HasKey.methodPtr)
                            (pSVar12,"Static",(pSVar12->klass->vtable)._28_HasKey.method);
          if (cVar8 != '\0') {
            plVar13 = (long *)(*(pSVar12->klass->vtable)._7_get_Item.methodPtr)
                                        (pSVar12,"Static",(pSVar12->klass->vtable)._7_get_Item.method);
            if (plVar13 == (long *)0x0) goto label_040a0630;
            uVar9 = (**(code **)(*plVar13 + 0x3a8))(plVar13,*(undefined8 *)(*plVar13 + 0x3b0));
            *(undefined1 *)((long)&(__this_09->fields).Active + 1) = uVar9;
          }
          cVar8 = (*(pSVar12->klass->vtable)._28_HasKey.methodPtr)
                            (pSVar12,"Networked",(pSVar12->klass->vtable)._28_HasKey.method);
          if (cVar8 != '\0') {
            plVar13 = (long *)(*(pSVar12->klass->vtable)._7_get_Item.methodPtr)
                                        (pSVar12,"Networked",(pSVar12->klass->vtable)._7_get_Item.method);
            if (plVar13 == (long *)0x0) goto label_040a0630;
            uVar9 = (**(code **)(*plVar13 + 0x3a8))(plVar13,*(undefined8 *)(*plVar13 + 0x3b0));
            *(undefined1 *)((long)&(__this_09->fields).Active + 3) = uVar9;
          }
          cVar8 = (*(pSVar12->klass->vtable)._28_HasKey.methodPtr)
                            (pSVar12,"Visible",(pSVar12->klass->vtable)._28_HasKey.method);
          if (cVar8 != '\0') {
            plVar13 = (long *)(*(pSVar12->klass->vtable)._7_get_Item.methodPtr)
                                        (pSVar12,"Visible",(pSVar12->klass->vtable)._7_get_Item.method);
            if (plVar13 == (long *)0x0) goto label_040a0630;
            uVar9 = (**(code **)(*plVar13 + 0x3a8))(plVar13,*(undefined8 *)(*plVar13 + 0x3b0));
            *(undefined1 *)((long)&(__this_09->fields).Active + 2) = uVar9;
          }
          cVar8 = (*(pSVar12->klass->vtable)._28_HasKey.methodPtr)
                            (pSVar12,"CollideMode",(pSVar12->klass->vtable)._28_HasKey.method);
          if (cVar8 != '\0') {
            plVar13 = (long *)(*(pSVar12->klass->vtable)._7_get_Item.methodPtr)
                                        (pSVar12,"CollideMode",(pSVar12->klass->vtable)._7_get_Item.method);
            if (plVar13 == (long *)0x0) goto label_040a0630;
            uVar17 = (**(code **)(*plVar13 + 0x1c8))(plVar13,*(undefined8 *)(*plVar13 + 0x1d0));
            *(undefined8 *)&(__this_09->fields).ScaleZ = uVar17;
            il2cpp_runtime_helper_022b4080(&(__this_09->fields).ScaleZ,uVar17);
          }
          cVar8 = (*(pSVar12->klass->vtable)._28_HasKey.methodPtr)
                            (pSVar12,"CollideWith",(pSVar12->klass->vtable)._28_HasKey.method);
          if (cVar8 != '\0') {
            plVar13 = (long *)(*(pSVar12->klass->vtable)._7_get_Item.methodPtr)
                                        (pSVar12,"CollideWith",(pSVar12->klass->vtable)._7_get_Item.method);
            if (plVar13 == (long *)0x0) goto label_040a0630;
            pSVar11 = (System_String_o *)
                      (**(code **)(*plVar13 + 0x1c8))(plVar13,*(undefined8 *)(*plVar13 + 0x1d0));
            (__this_09->fields).CollideMode = pSVar11;
            il2cpp_runtime_helper_022b4080(&(__this_09->fields).CollideMode,pSVar11);
          }
          cVar8 = (*(pSVar12->klass->vtable)._28_HasKey.methodPtr)
                            (pSVar12,"Material",(pSVar12->klass->vtable)._28_HasKey.method);
          if (cVar8 != '\0') {
            plVar13 = (long *)(*(pSVar12->klass->vtable)._7_get_Item.methodPtr)
                                        (pSVar12,"Material",(pSVar12->klass->vtable)._7_get_Item.method);
            if (plVar13 == (long *)0x0) goto label_040a0630;
            pSVar11 = (System_String_o *)(**(code **)(*plVar13 + 0x1c8))(plVar13);
            pMVar19 = Map_MapScriptSceneObject__DeserializeMaterial(pSVar11,(MethodInfo *)0x0);
            (__this_09->fields).PhysicsMaterial = (System_String_o *)pMVar19;
            il2cpp_runtime_helper_022b4080(&(__this_09->fields).PhysicsMaterial,pMVar19);
          }
          cVar8 = (*(pSVar12->klass->vtable)._28_HasKey.methodPtr)
                            (pSVar12,"Components",(pSVar12->klass->vtable)._28_HasKey.method);
          if (cVar8 != '\0') {
            plVar13 = (long *)(*(pSVar12->klass->vtable)._7_get_Item.methodPtr)
                                        (pSVar12,"Components",(pSVar12->klass->vtable)._7_get_Item.method);
            if (plVar13 == (long *)0x0) goto label_040a0630;
            (**(code **)(*plVar13 + 0x338))
                      (&stack0xfffffffffffffe48,plVar13,*(undefined8 *)(*plVar13 + 0x340));
            local_168._64_8_ = local_178;
            local_168._48_8_ = local_188;
            local_168._56_8_ = _Stack_180;
            local_168._40_8_ = pIStack_190;
            local_168._0_8_ = in_stack_fffffffffffffe48;
            local_168._8_8_ = in_stack_fffffffffffffe50;
            local_168._16_8_ = in_stack_fffffffffffffe58;
            local_168._24_8_ = in_stack_fffffffffffffe60;
            local_168._32_8_ = in_stack_fffffffffffffe68;
            while( true ) {
              __this_06.fields.m_Object.fields._dictionary =
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffe30;
              __this_06.fields._0_8_ = in_stack_fffffffffffffe28;
              __this_06.fields.m_Object.fields._8_8_ = plVar15;
              __this_06.fields.m_Object.fields._current.fields.key = (Il2CppObject *)in_stack_fffffffffffffe40
              ;
              __this_06.fields.m_Object.fields._current.fields.value =
                   (Il2CppObject *)in_stack_fffffffffffffe48;
              __this_06.fields.m_Object.fields._32_8_ = in_stack_fffffffffffffe50;
              __this_06.fields.m_Array.fields._list =
                   (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe58;
              __this_06.fields.m_Array.fields._8_8_ = in_stack_fffffffffffffe60;
              __this_06.fields.m_Array.fields._current =
                   (SimpleJSONFixed_JSONNode_o *)in_stack_fffffffffffffe68;
              bVar10 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this_06,(MethodInfo *)local_168);
              if ((char)bVar10 == '\0') break;
              __this_07.fields.m_Object.fields._dictionary =
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffe30;
              __this_07.fields._0_8_ = in_stack_fffffffffffffe28;
              __this_07.fields.m_Object.fields._8_8_ = plVar15;
              __this_07.fields.m_Object.fields._current.fields.key = (Il2CppObject *)in_stack_fffffffffffffe40
              ;
              __this_07.fields.m_Object.fields._current.fields.value =
                   (Il2CppObject *)in_stack_fffffffffffffe48;
              __this_07.fields.m_Object.fields._32_8_ = in_stack_fffffffffffffe50;
              __this_07.fields.m_Array.fields._list =
                   (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe58;
              __this_07.fields.m_Array.fields._8_8_ = in_stack_fffffffffffffe60;
              __this_07.fields.m_Array.fields._current =
                   (SimpleJSONFixed_JSONNode_o *)in_stack_fffffffffffffe68;
              SVar23 = SimpleJSONFixed_JSONNode_Enumerator__get_Current(__this_07,(MethodInfo *)local_168);
              if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar20 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(SVar23,(MethodInfo *)0x0);
              __this_11 = (Map_MapScriptComponent_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptComponent);
              Map_MapScriptComponent___ctor(__this_11,(MethodInfo *)0x0);
              if ((pSVar20 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
                 (uVar17 = (*(pSVar20->klass->vtable)._9_get_Value.methodPtr)(pSVar20),
                 __this_11 == (Map_MapScriptComponent_o *)0x0)) goto label_040a0630;
              (*(__this_11->klass->vtable)._9_Deserialize.methodPtr)
                        (__this_11,uVar17,(__this_11->klass->vtable)._9_Deserialize.method);
              lVar7 = MethodInfo_Void_Add;
              pSVar16 = (System_Collections_Generic_List_object__o *)(__this_09->fields).Material;
              if (pSVar16 == (System_Collections_Generic_List_object__o *)0x0) goto label_040a0630;
              piVar1 = &(pSVar16->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar5 = (pSVar16->fields)._items;
              if (pSVar5 == (System_Object_array *)0x0) goto label_040a0630;
              uVar3 = (pSVar16->fields)._size;
              if (uVar3 < (uint)pSVar5->max_length) {
                (pSVar16->fields)._size = uVar3 + 1;
                pSVar5->m_Items[(int)uVar3] = (Il2CppObject *)__this_11;
                il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar3,__this_11);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          (pSVar16,(Il2CppObject *)__this_11,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
          cVar8 = (*(pSVar12->klass->vtable)._28_HasKey.methodPtr)
                            (pSVar12,"ScaleX",(pSVar12->klass->vtable)._28_HasKey.method);
          if (cVar8 != '\0') {
            plVar13 = (long *)(*(pSVar12->klass->vtable)._7_get_Item.methodPtr)
                                        (pSVar12,"ScaleX",(pSVar12->klass->vtable)._7_get_Item.method);
            if (plVar13 == (long *)0x0) goto label_040a0630;
            fVar22 = (float)(**(code **)(*plVar13 + 0x388))(plVar13,*(undefined8 *)(*plVar13 + 0x390));
            (__this_09->fields).RotationY = fVar22;
          }
          cVar8 = (*(pSVar12->klass->vtable)._28_HasKey.methodPtr)
                            (pSVar12,"ScaleY",(pSVar12->klass->vtable)._28_HasKey.method);
          if (cVar8 != '\0') {
            plVar13 = (long *)(*(pSVar12->klass->vtable)._7_get_Item.methodPtr)
                                        (pSVar12,"ScaleY",(pSVar12->klass->vtable)._7_get_Item.method);
            if (plVar13 == (long *)0x0) goto label_040a0630;
            fVar22 = (float)(**(code **)(*plVar13 + 0x388))(plVar13,*(undefined8 *)(*plVar13 + 0x390));
            (__this_09->fields).RotationY = fVar22;
          }
          cVar8 = (*(pSVar12->klass->vtable)._28_HasKey.methodPtr)
                            (pSVar12,"ScaleZ",(pSVar12->klass->vtable)._28_HasKey.method);
          if (cVar8 != '\0') {
            plVar13 = (long *)(*(pSVar12->klass->vtable)._7_get_Item.methodPtr)
                                        (pSVar12,"ScaleZ",(pSVar12->klass->vtable)._7_get_Item.method);
            if (plVar13 == (long *)0x0) goto label_040a0630;
            fVar22 = (float)(**(code **)(*plVar13 + 0x388))(plVar13,*(undefined8 *)(*plVar13 + 0x390));
            (__this_09->fields).RotationY = fVar22;
          }
          cVar8 = (*(pSVar12->klass->vtable)._28_HasKey.methodPtr)
                            (pSVar12,"Preview",(pSVar12->klass->vtable)._28_HasKey.method);
          if (cVar8 != '\0') {
            if (*(int *)(TypeInfo_BuiltinMapPrefabs + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar4 = *(System_Collections_Generic_Dictionary_object__object__o **)
                      (*(long *)(TypeInfo_BuiltinMapPrefabs + 0xb8) + 0x20);
            pIVar6 = *(Il2CppObject **)pbVar21;
            plVar13 = (long *)(*(pSVar12->klass->vtable)._7_get_Item.methodPtr)
                                        (pSVar12,"Preview",(pSVar12->klass->vtable)._7_get_Item.method);
            if ((plVar13 == (long *)0x0) ||
               (value = (Il2CppObject *)(**(code **)(*plVar13 + 0x1c8))(plVar13),
               pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)) goto label_040a0630;
            System_Collections_Generic_Dictionary_object__object___Add(pSVar4,pIVar6,value,MethodInfo_Void_Add);
          }
          cVar8 = (*(pSVar12->klass->vtable)._28_HasKey.methodPtr)
                            (pSVar12,"Variant",(pSVar12->klass->vtable)._28_HasKey.method);
          if (cVar8 != '\0') {
            plVar13 = (long *)(*(pSVar12->klass->vtable)._7_get_Item.methodPtr)
                                        (pSVar12,"Variant",(pSVar12->klass->vtable)._7_get_Item.method);
            if (plVar13 == (long *)0x0) goto label_040a0630;
            pSVar11 = (System_String_o *)
                      (**(code **)(*plVar13 + 0x1c8))(plVar13,*(undefined8 *)(*plVar13 + 0x1d0));
            bVar10 = System_String__op_Inequality(pSVar11,*(System_String_o **)pbVar21,(MethodInfo *)0x0);
            if ((char)bVar10 != '\0') {
              if (*(int *)(TypeInfo_BuiltinMapPrefabs + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar4 = *(System_Collections_Generic_Dictionary_object__object__o **)
                        (*(long *)(TypeInfo_BuiltinMapPrefabs + 0xb8) + 0x28);
              if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_040a0630;
              bVar10 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                                 (pSVar4,(Il2CppObject *)pSVar11,MethodInfo_Boolean_ContainsKey);
              if ((char)bVar10 == '\0') {
                if (*(int *)(TypeInfo_BuiltinMapPrefabs + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar4 = *(System_Collections_Generic_Dictionary_object__object__o **)
                          (*(long *)(TypeInfo_BuiltinMapPrefabs + 0xb8) + 0x28);
                pSVar16 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
                System_Collections_Generic_List_object____ctor(pSVar16,MethodInfo_List_1_System_String);
                if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
                goto label_040a0630;
                System_Collections_Generic_Dictionary_object__object___Add
                          (pSVar4,(Il2CppObject *)pSVar11,(Il2CppObject *)pSVar16,MethodInfo_Void_Add);
              }
              if (*(int *)(TypeInfo_BuiltinMapPrefabs + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar4 = *(System_Collections_Generic_Dictionary_object__object__o **)
                        (*(long *)(TypeInfo_BuiltinMapPrefabs + 0xb8) + 0x28);
              if ((pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
                 (pSVar16 = (System_Collections_Generic_List_object__o *)
                            System_Collections_Generic_Dictionary_object__object___get_Item
                                      (pSVar4,(Il2CppObject *)pSVar11,MethodInfo_List_1_System_String_get_Item), lVar7 = MethodInfo_Void_Add,
                 pSVar16 == (System_Collections_Generic_List_object__o *)0x0)) goto label_040a0630;
              pIVar6 = *(Il2CppObject **)pbVar21;
              piVar1 = &(pSVar16->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar5 = (pSVar16->fields)._items;
              if (pSVar5 == (System_Object_array *)0x0) goto label_040a0630;
              uVar3 = (pSVar16->fields)._size;
              if (uVar3 < (uint)pSVar5->max_length) {
                (pSVar16->fields)._size = uVar3 + 1;
                pSVar5->m_Items[(int)uVar3] = pIVar6;
                il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar3);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          (pSVar16,pIVar6,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
              }
              pSVar4 = *(System_Collections_Generic_Dictionary_object__object__o **)
                        (*(long *)(TypeInfo_BuiltinMapPrefabs + 0xb8) + 0x30);
              if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_040a0630;
              System_Collections_Generic_Dictionary_object__object___set_Item
                        (pSVar4,*(Il2CppObject **)pbVar21,(Il2CppObject *)pSVar11,MethodInfo_Void_set_Item);
            }
          }
          if (*(int *)(TypeInfo_BuiltinMapPrefabs + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar4 = *(System_Collections_Generic_Dictionary_object__object__o **)
                    (*(long *)(TypeInfo_BuiltinMapPrefabs + 0xb8) + 8);
          if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_040a0630;
          in_stack_fffffffffffffe38 = plVar15;
          System_Collections_Generic_Dictionary_object__object___Add
                    (pSVar4,*(Il2CppObject **)&(__this_09->fields).Visible,(Il2CppObject *)__this_09,
                     MethodInfo_Void_Add);
          pSVar11 = *(System_String_o **)&(__this_09->fields).Visible;
          if (pSVar11 == (System_String_o *)0x0) goto label_040a0630;
          pSVar4 = *(System_Collections_Generic_Dictionary_object__object__o **)
                    (*(long *)(TypeInfo_BuiltinMapPrefabs + 0xb8) + 0x18);
          pSVar11 = System_String__ToLower(pSVar11,(MethodInfo *)0x0);
          if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_040a0630;
          System_Collections_Generic_Dictionary_object__object___Add
                    (pSVar4,(Il2CppObject *)pSVar11,(Il2CppObject *)__this_09,MethodInfo_Void_Add);
          cVar8 = (*(pSVar12->klass->vtable)._28_HasKey.methodPtr)
                            (pSVar12,"Hidden",(pSVar12->klass->vtable)._28_HasKey.method);
          if (cVar8 == '\0') {
label_040a059b:
            if (*(int *)(TypeInfo_BuiltinMapPrefabs + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar4 = *(System_Collections_Generic_Dictionary_object__object__o **)
                      (*(long *)(TypeInfo_BuiltinMapPrefabs + 0xb8) + 0x10);
            if ((pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
               (pSVar16 = (System_Collections_Generic_List_object__o *)
                          System_Collections_Generic_Dictionary_object__object___get_Item
                                    (pSVar4,(Il2CppObject *)in_stack_fffffffffffffe30,MethodInfo_List_1_Map_MapScriptBaseObject_get_Item),
               lVar7 = MethodInfo_Void_Add, pSVar16 == (System_Collections_Generic_List_object__o *)0x0))
            goto label_040a0630;
            piVar1 = &(pSVar16->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar5 = (pSVar16->fields)._items;
            if (pSVar5 == (System_Object_array *)0x0) goto label_040a0630;
            uVar3 = (pSVar16->fields)._size;
            if (uVar3 < (uint)pSVar5->max_length) {
              (pSVar16->fields)._size = uVar3 + 1;
              pSVar5->m_Items[(int)uVar3] = (Il2CppObject *)__this_09;
              il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar3);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        (pSVar16,(Il2CppObject *)__this_09,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
            }
          }
          else {
            plVar13 = (long *)(*(pSVar12->klass->vtable)._7_get_Item.methodPtr)
                                        (pSVar12,"Hidden",(pSVar12->klass->vtable)._7_get_Item.method);
            if (plVar13 == (long *)0x0) goto label_040a0630;
            cVar8 = (**(code **)(*plVar13 + 0x3a8))(plVar13);
            if (cVar8 == '\0') goto label_040a059b;
          }
          __this_04.fields.m_Object.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffe30;
          __this_04.fields._0_8_ = in_stack_fffffffffffffe28;
          __this_04.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffe38;
          __this_04.fields.m_Object.fields._current.fields.key = (Il2CppObject *)in_stack_fffffffffffffe40;
          __this_04.fields.m_Object.fields._current.fields.value = (Il2CppObject *)in_stack_fffffffffffffe48;
          __this_04.fields.m_Object.fields._32_8_ = in_stack_fffffffffffffe50;
          __this_04.fields.m_Array.fields._list =
               (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe58;
          __this_04.fields.m_Array.fields._8_8_ = in_stack_fffffffffffffe60;
          __this_04.fields.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)in_stack_fffffffffffffe68;
          bVar10 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this_04,(MethodInfo *)local_c8);
          plVar14 = in_stack_fffffffffffffe38;
          plVar13 = plVar15;
          cVar8 = (char)bVar10;
        }
        __this_01.fields.m_Enumerator.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffe30;
        __this_01.fields.m_Enumerator.fields._0_8_ = in_stack_fffffffffffffe28;
        __this_01.fields.m_Enumerator.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffe38;
        __this_01.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
             (Il2CppObject *)in_stack_fffffffffffffe40;
        __this_01.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
             (Il2CppObject *)in_stack_fffffffffffffe48;
        __this_01.fields.m_Enumerator.fields.m_Object.fields._32_8_ = in_stack_fffffffffffffe50;
        __this_01.fields.m_Enumerator.fields.m_Array.fields._list =
             (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe58;
        __this_01.fields.m_Enumerator.fields.m_Array.fields._8_8_ = in_stack_fffffffffffffe60;
        __this_01.fields.m_Enumerator.fields.m_Array.fields._current =
             (SimpleJSONFixed_JSONNode_o *)in_stack_fffffffffffffe68;
        bVar10 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext(__this_01,(MethodInfo *)local_118);
        cVar8 = (char)bVar10;
      } while( true );
    }
  }
label_040a0630:
  __this_08 = (UnityEngine_Object_o *)il2cpp_runtime_helper_022b2c90();
label_040a0635:
  il2cpp_runtime_helper_022b2fd0();
  System_Object___ctor((Il2CppObject *)__this_08,(MethodInfo *)0x0);
  return;
}


// Map.BuiltinMapPrefabs$$.ctor
// il2cpp: void Map_BuiltinMapPrefabs___ctor (Map_BuiltinMapPrefabs_o* __this, const MethodInfo* method);
// 0x40a0640

void Map_BuiltinMapPrefabs___ctor(Map_BuiltinMapPrefabs_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Map.BuiltinMapPrefabs$$.cctor
// il2cpp: void Map_BuiltinMapPrefabs___cctor (const MethodInfo* method);
// 0x40a0650

void Map_BuiltinMapPrefabs___cctor(MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  
  if (g_data_057ac48b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinMapPrefabs);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_List_1_Map_MapScriptBaseObjec);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_Map_MapScriptBaseObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_List_MapScriptBaseObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_MapScriptBaseObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_List_string);
    g_data_057ac48b = '\x01';
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_MapScriptBaseObject);
  System_Collections_Generic_Dictionary_object__object____ctor(pSVar2,MethodInfo_Dictionary_2_System_String_Map_MapScriptBaseObject);
  lVar1 = *(long *)(TypeInfo_BuiltinMapPrefabs + 0xb8);
  *(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 8) = pSVar2;
  il2cpp_runtime_helper_022b4080(lVar1 + 8,pSVar2);
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_List_MapScriptBaseObject);
  System_Collections_Generic_Dictionary_object__object____ctor(pSVar2,MethodInfo_Dictionary_2_System_String_List_1_Map_MapScriptBaseObjec);
  lVar1 = *(long *)(TypeInfo_BuiltinMapPrefabs + 0xb8);
  *(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 0x10) = pSVar2;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x10,pSVar2);
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_MapScriptBaseObject);
  System_Collections_Generic_Dictionary_object__object____ctor(pSVar2,MethodInfo_Dictionary_2_System_String_Map_MapScriptBaseObject);
  lVar1 = *(long *)(TypeInfo_BuiltinMapPrefabs + 0xb8);
  *(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 0x18) = pSVar2;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x18,pSVar2);
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor(pSVar2,MethodInfo_Dictionary_2_System_String_System_String);
  lVar1 = *(long *)(TypeInfo_BuiltinMapPrefabs + 0xb8);
  *(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 0x20) = pSVar2;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x20,pSVar2);
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_List_string);
  System_Collections_Generic_Dictionary_object__object____ctor(pSVar2,MethodInfo_Dictionary_2_System_String_List_1_System_String);
  lVar1 = *(long *)(TypeInfo_BuiltinMapPrefabs + 0xb8);
  *(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 0x28) = pSVar2;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x28,pSVar2);
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor(pSVar2,MethodInfo_Dictionary_2_System_String_System_String);
  lVar1 = *(long *)(TypeInfo_BuiltinMapPrefabs + 0xb8);
  *(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 0x30) = pSVar2;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x30,pSVar2);
  return;
}


