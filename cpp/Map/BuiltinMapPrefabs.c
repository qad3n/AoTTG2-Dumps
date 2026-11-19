// Type: Map.BuiltinMapPrefabs
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Map/BuiltinMapPrefabs.cs
// Prior real C# source (older reference): Assets/Scripts/Map/BuiltinMapPrefabs.cs
// --------------------------------

// Map.BuiltinMapPrefabs$$Init
// il2cpp: void Map_BuiltinMapPrefabs__Init (const MethodInfo* method);
// 0x5975c70
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5976153: lea rbx, [rsp + 0x100]
// asm:   0x597615b: lea r13, [rsp + 0xb0]
// asm:   0x5976163: lea r12, [rsp + 0x60]
// asm:   0x5976168: jmp 0x597618a
// asm:   0x597672e: mov rbp, rax

void Map_BuiltinMapPrefabs__Init(MethodInfo *method)

{
  System_String_o **targetAddress;
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  System_Collections_Generic_List_MapScriptComponent__o *__this;
  Map_MapScriptComponent_array *pMVar5;
  System_Object_array *pSVar6;
  MethodInfo *pMVar7;
  bool bVar8;
  UnityEngine_Object_o *__this_00;
  System_String_o *pSVar9;
  SimpleJSONFixed_JSONNode_o *pSVar10;
  SimpleJSONFixed_JSONNode_o *pSVar11;
  SimpleJSONFixed_JSONNode_o *pSVar12;
  System_Collections_Generic_List_MapScriptBaseObject__o *__this_01;
  Map_MapScriptSceneObject_o *__this_02;
  Map_MapScriptBaseMaterial_o *pMVar13;
  Map_MapScriptComponent_o *__this_03;
  System_String_o *pSVar14;
  System_Collections_Generic_List_string__o *__this_04;
  System_Collections_Generic_List_object__o *pSVar15;
  float fVar16;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar17;
  System_String_o *local_218;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_200;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_1b8;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_168;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_118;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_c8;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_78;
  
  if (Il2CppMethodInitialized_075459cb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinMapPrefabs);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBaseObject_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_MapScriptBaseObject_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_MapScriptBaseObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_string_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_MapScriptBaseObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapScriptComponent_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_MapScriptBaseObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptComponent);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptSceneObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_TextAsset);
    il2cpp_codegen_initialize_runtime_metadata(&"AssetBasePath");
    il2cpp_codegen_initialize_runtime_metadata(&"Asset");
    il2cpp_codegen_initialize_runtime_metadata(&"Preview");
    il2cpp_codegen_initialize_runtime_metadata(&"CollideMode");
    il2cpp_codegen_initialize_runtime_metadata(&"AssetPrefix");
    il2cpp_codegen_initialize_runtime_metadata(&"ScaleY");
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs");
    il2cpp_codegen_initialize_runtime_metadata(&"Networked");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    il2cpp_codegen_initialize_runtime_metadata(&"Visible");
    il2cpp_codegen_initialize_runtime_metadata(&"Info");
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    il2cpp_codegen_initialize_runtime_metadata(&"Category");
    il2cpp_codegen_initialize_runtime_metadata(&"ScaleX");
    il2cpp_codegen_initialize_runtime_metadata(&"Type");
    il2cpp_codegen_initialize_runtime_metadata(&"Static");
    il2cpp_codegen_initialize_runtime_metadata(&"ScaleZ");
    il2cpp_codegen_initialize_runtime_metadata(&"CollideWith");
    il2cpp_codegen_initialize_runtime_metadata(&"Variant");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"AssetSameAsName");
    il2cpp_codegen_initialize_runtime_metadata(&"Material");
    il2cpp_codegen_initialize_runtime_metadata(&"Hidden");
    il2cpp_codegen_initialize_runtime_metadata(&"MapPrefabList");
    il2cpp_codegen_initialize_runtime_metadata(&"Components");
    Il2CppMethodInitialized_075459cb = '\x01';
  }
  local_118.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_118.m_Array.fields._index = 0;
  local_118.m_Array.fields._version = 0;
  local_118.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_118.m_Object.fields._getEnumeratorRetType = 0;
  local_118.m_Object.fields._36_4_ = 0;
  local_118.m_Object.fields._version = 0;
  local_118.m_Object.fields._index = 0;
  local_118.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_118.type = 0;
  local_118._4_4_ = 0;
  local_118.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_118.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_c8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_c8.m_Array.fields._index = 0;
  local_c8.m_Array.fields._version = 0;
  local_c8.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_c8.m_Object.fields._getEnumeratorRetType = 0;
  local_c8.m_Object.fields._36_4_ = 0;
  local_c8.m_Object.fields._version = 0;
  local_c8.m_Object.fields._index = 0;
  local_c8.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_c8.type = 0;
  local_c8._4_4_ = 0;
  local_c8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_c8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_168.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_168.m_Array.fields._index = 0;
  local_168.m_Array.fields._version = 0;
  local_168.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_168.m_Object.fields._getEnumeratorRetType = 0;
  local_168.m_Object.fields._36_4_ = 0;
  local_168.m_Object.fields._version = 0;
  local_168.m_Object.fields._index = 0;
  local_168.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_168.type = 0;
  local_168._4_4_ = 0;
  local_168.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_168.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_1b8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_1b8.m_Array.fields._index = 0;
  local_1b8.m_Array.fields._version = 0;
  local_1b8.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_1b8.m_Object.fields._getEnumeratorRetType = 0;
  local_1b8.m_Object.fields._36_4_ = 0;
  local_1b8.m_Object.fields._version = 0;
  local_1b8.m_Object.fields._index = 0;
  local_1b8.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_1b8.type = 0;
  local_1b8._4_4_ = 0;
  local_1b8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_1b8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  pSVar9 = TypeInfo_Utility_ResourcePaths->static_fields->Info;
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  __this_00 = ApplicationManagers_ResourceManager__LoadAsset
                        (pSVar9,"MapPrefabList",false,false,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_Object_o *)0x0) {
    bVar2 = (TypeInfo_UnityEngine_TextAsset->_2).typeHierarchyDepth;
    if (((__this_00->klass->_2).typeHierarchyDepth < bVar2) ||
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
        (Il2CppClass *)TypeInfo_UnityEngine_TextAsset)) {
      il2cpp_codegen_raise_invalid_cast_exception(__this_00);
    }
    pSVar9 = UnityEngine_TextAsset__get_text((UnityEngine_TextAsset_o *)__this_00,(MethodInfo *)0x0);
    pSVar10 = SimpleJSONFixed_JSON__Parse(pSVar9,(MethodInfo *)0x0);
    if ((TypeInfo_Map_BuiltinMapPrefabs->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
    }
    TypeInfo_Map_BuiltinMapPrefabs->static_fields->_prefabList = pSVar10;
    Il2CppCodeGenWriteBarrier(&TypeInfo_Map_BuiltinMapPrefabs->static_fields->_prefabList);
    pSVar10 = TypeInfo_Map_BuiltinMapPrefabs->static_fields->_prefabList;
    if (pSVar10 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      SimpleJSONFixed_JSONNode__get_Keys
                ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_200,pSVar10,(MethodInfo *)0x0);
      local_c8.m_Array.fields._current = local_200.m_Array.fields._current;
      local_c8.m_Array.fields._list = local_200.m_Array.fields._list;
      local_c8.m_Array.fields._index = local_200.m_Array.fields._index;
      local_c8.m_Array.fields._version = local_200.m_Array.fields._version;
      local_c8.m_Object.fields._current.fields.value = local_200.m_Object.fields._current.fields.value;
      local_c8.m_Object.fields._getEnumeratorRetType = local_200.m_Object.fields._getEnumeratorRetType;
      local_c8.m_Object.fields._36_4_ = local_200.m_Object.fields._36_4_;
      local_c8.m_Object.fields._version = local_200.m_Object.fields._version;
      local_c8.m_Object.fields._index = local_200.m_Object.fields._index;
      local_c8.m_Object.fields._current.fields.key = local_200.m_Object.fields._current.fields.key;
      local_c8.type = local_200.type;
      local_c8._4_4_ = local_200._4_4_;
      local_c8.m_Object.fields._dictionary = local_200.m_Object.fields._dictionary;
      SimpleJSONFixed_JSONNode_KeyEnumerator__GetEnumerator
                ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_78,
                 (SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_c8,(MethodInfo *)0x0);
      local_118.m_Array.fields._current = local_78.m_Array.fields._current;
      local_118.m_Array.fields._list = local_78.m_Array.fields._list;
      local_118.m_Array.fields._index = local_78.m_Array.fields._index;
      local_118.m_Array.fields._version = local_78.m_Array.fields._version;
      local_118.m_Object.fields._current.fields.value = local_78.m_Object.fields._current.fields.value;
      local_118.m_Object.fields._getEnumeratorRetType = local_78.m_Object.fields._getEnumeratorRetType;
      local_118.m_Object.fields._36_4_ = local_78.m_Object.fields._36_4_;
      local_118.m_Object.fields._version = local_78.m_Object.fields._version;
      local_118.m_Object.fields._index = local_78.m_Object.fields._index;
      local_118.m_Object.fields._current.fields.key = local_78.m_Object.fields._current.fields.key;
      local_118.type = local_78.type;
      local_118._4_4_ = local_78._4_4_;
      local_118.m_Object.fields._dictionary = local_78.m_Object.fields._dictionary;
      bVar8 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                        ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_118,(MethodInfo *)0x0);
      if (bVar8) {
        do {
          local_218 = SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current
                                ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_118,(MethodInfo *)0x0);
          if ((TypeInfo_Map_BuiltinMapPrefabs->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
          }
          pSVar10 = TypeInfo_Map_BuiltinMapPrefabs->static_fields->_prefabList;
          if (((pSVar10 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
              (pSVar10 = (*(pSVar10->klass->vtable)._7_get_Item.methodPtr)
                                   (pSVar10,local_218,(pSVar10->klass->vtable)._7_get_Item.method),
              pSVar10 == (SimpleJSONFixed_JSONNode_o *)0x0)) ||
             (pSVar11 = (*(pSVar10->klass->vtable)._7_get_Item.methodPtr)
                                  (pSVar10,"Info",(pSVar10->klass->vtable)._7_get_Item.method),
             pSVar11 == (SimpleJSONFixed_JSONNode_o *)0x0)) goto label_059770c9;
          bVar8 = (*(pSVar11->klass->vtable)._28_HasKey.methodPtr)
                            (pSVar11,"Category",(pSVar11->klass->vtable)._28_HasKey.method);
          if (bVar8) {
            pSVar12 = (*(pSVar11->klass->vtable)._7_get_Item.methodPtr)
                                (pSVar11,"Category",(pSVar11->klass->vtable)._7_get_Item.method);
            if (pSVar12 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_059770c9;
            local_218 = (*(pSVar12->klass->vtable)._9_get_Value.methodPtr)
                                  (pSVar12,(pSVar12->klass->vtable)._9_get_Value.method);
          }
          if ((TypeInfo_Map_BuiltinMapPrefabs->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
          }
          pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                   TypeInfo_Map_BuiltinMapPrefabs->static_fields->PrefabCategories;
          if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_059770c9;
          bVar8 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                            (pSVar4,(Il2CppObject *)local_218,
                             (MethodInfo_4AAD6F0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_List_MapScriptBaseObject_ContainsKey
                            );
          if (!bVar8) {
            if ((TypeInfo_Map_BuiltinMapPrefabs->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
            }
            pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                     TypeInfo_Map_BuiltinMapPrefabs->static_fields->PrefabCategories;
            __this_01 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MapScriptBaseObject
                                  );
            System_Collections_Generic_List_object____ctor
                      ((System_Collections_Generic_List_object__o *)__this_01,
                       (MethodInfo_395C910 *)
                       MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_ctor);
            if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_059770c9;
            System_Collections_Generic_Dictionary_object__object___Add
                      (pSVar4,(Il2CppObject *)local_218,(Il2CppObject *)__this_01,
                       (MethodInfo_4AAD4E0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_List_MapScriptBaseObject_Add);
          }
          pSVar10 = (*(pSVar10->klass->vtable)._7_get_Item.methodPtr)
                              (pSVar10,"Prefabs",(pSVar10->klass->vtable)._7_get_Item.method);
          if (pSVar10 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_059770c9;
          (*(pSVar10->klass->vtable)._32_unknown.methodPtr)
                    (&local_200,pSVar10,(pSVar10->klass->vtable)._32_unknown.method);
          local_168.m_Array.fields._current = local_200.m_Array.fields._current;
          local_168.m_Array.fields._list = local_200.m_Array.fields._list;
          local_168.m_Array.fields._index = local_200.m_Array.fields._index;
          local_168.m_Array.fields._version = local_200.m_Array.fields._version;
          local_168.m_Object.fields._current.fields.value = local_200.m_Object.fields._current.fields.value;
          local_168.m_Object.fields._getEnumeratorRetType = local_200.m_Object.fields._getEnumeratorRetType;
          local_168.m_Object.fields._36_4_ = local_200.m_Object.fields._36_4_;
          local_168.m_Object.fields._version = local_200.m_Object.fields._version;
          local_168.m_Object.fields._index = local_200.m_Object.fields._index;
          local_168.m_Object.fields._current.fields.key = local_200.m_Object.fields._current.fields.key;
          local_168.type = local_200.type;
          local_168._4_4_ = local_200._4_4_;
          local_168.m_Object.fields._dictionary = local_200.m_Object.fields._dictionary;
label_059763ba:
          bVar8 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                            ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_168,(MethodInfo *)0x0);
          if (bVar8) {
            SVar17 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                               ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_168,(MethodInfo *)0x0);
            if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
            }
            pSVar10 = SimpleJSONFixed_JSONNode__op_Implicit_57641c0(SVar17,(MethodInfo *)0x0);
            __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptSceneObject);
            Map_MapScriptSceneObject___ctor(__this_02,(MethodInfo *)0x0);
            pSVar12 = (*(pSVar11->klass->vtable)._7_get_Item.methodPtr)
                                (pSVar11,"Type",(pSVar11->klass->vtable)._7_get_Item.method);
            if ((pSVar12 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
               (pSVar9 = (*(pSVar12->klass->vtable)._9_get_Value.methodPtr)
                                   (pSVar12,(pSVar12->klass->vtable)._9_get_Value.method),
               __this_02 != (Map_MapScriptSceneObject_o *)0x0)) {
              (__this_02->fields).Type = pSVar9;
              Il2CppCodeGenWriteBarrier(&(__this_02->fields).Type);
              if ((pSVar10 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
                 (pSVar12 = (*(pSVar10->klass->vtable)._7_get_Item.methodPtr)
                                      (pSVar10,"Name",
                                       (pSVar10->klass->vtable)._7_get_Item.method),
                 pSVar12 == (SimpleJSONFixed_JSONNode_o *)0x0)) goto label_059770c9;
              pSVar9 = (*(pSVar12->klass->vtable)._9_get_Value.methodPtr)
                                 (pSVar12,(pSVar12->klass->vtable)._9_get_Value.method);
              targetAddress = &(__this_02->fields).Name;
              (__this_02->fields).Name = pSVar9;
              Il2CppCodeGenWriteBarrier(targetAddress);
              pSVar9 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
              bVar8 = (*(pSVar11->klass->vtable)._28_HasKey.methodPtr)
                                (pSVar11,"AssetSameAsName",(pSVar11->klass->vtable)._28_HasKey.method);
              if (bVar8) {
                pSVar12 = (*(pSVar11->klass->vtable)._7_get_Item.methodPtr)
                                    (pSVar11,"AssetSameAsName",(pSVar11->klass->vtable)._7_get_Item.method
                                    );
                if (pSVar12 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_059770c9;
                bVar8 = (*(pSVar12->klass->vtable)._39_get_AsBool.methodPtr)
                                  (pSVar12,(pSVar12->klass->vtable)._39_get_AsBool.method);
                if (bVar8) {
                  pSVar12 = (*(pSVar10->klass->vtable)._7_get_Item.methodPtr)
                                      (pSVar10,"Name",
                                       (pSVar10->klass->vtable)._7_get_Item.method);
                  if (pSVar12 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_059770c9;
                  pSVar9 = (*(pSVar12->klass->vtable)._9_get_Value.methodPtr)
                                     (pSVar12,(pSVar12->klass->vtable)._9_get_Value.method);
                }
              }
              bVar8 = (*(pSVar10->klass->vtable)._28_HasKey.methodPtr)
                                (pSVar10,"Asset",(pSVar10->klass->vtable)._28_HasKey.method);
              if (bVar8) {
                pSVar12 = (*(pSVar10->klass->vtable)._7_get_Item.methodPtr)
                                    (pSVar10,"Asset",(pSVar10->klass->vtable)._7_get_Item.method
                                    );
                if (pSVar12 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_059770c9;
                pSVar9 = (*(pSVar12->klass->vtable)._9_get_Value.methodPtr)
                                   (pSVar12,(pSVar12->klass->vtable)._9_get_Value.method);
              }
              bVar8 = System_String__op_Equality
                                (pSVar9,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),
                                 (MethodInfo *)0x0);
              if (bVar8) {
label_05976618:
                pSVar9 = "None";
              }
              else {
                bVar8 = System_String__op_Equality(pSVar9,"None",(MethodInfo *)0x0);
                pSVar14 = "";
                if (bVar8) goto label_05976618;
                bVar8 = (*(pSVar11->klass->vtable)._28_HasKey.methodPtr)
                                  (pSVar11,"AssetBasePath",(pSVar11->klass->vtable)._28_HasKey.method);
                if (bVar8) {
                  pSVar12 = (*(pSVar11->klass->vtable)._7_get_Item.methodPtr)
                                      (pSVar11,"AssetBasePath",
                                       (pSVar11->klass->vtable)._7_get_Item.method);
                  if ((pSVar12 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
                     (pSVar14 = (*(pSVar12->klass->vtable)._9_get_Value.methodPtr)
                                          (pSVar12,(pSVar12->klass->vtable)._9_get_Value.method),
                     pSVar14 == (System_String_o *)0x0)) goto label_059770c9;
                  bVar8 = System_String__EndsWith(pSVar14,"/",(MethodInfo *)0x0);
                  if (!bVar8) {
                    pSVar14 = System_String__Concat_52f0320(pSVar14,"/",(MethodInfo *)0x0);
                  }
                }
                else {
                  bVar8 = (*(pSVar11->klass->vtable)._28_HasKey.methodPtr)
                                    (pSVar11,"AssetPrefix",(pSVar11->klass->vtable)._28_HasKey.method)
                  ;
                  if (bVar8) {
                    pSVar12 = (*(pSVar11->klass->vtable)._7_get_Item.methodPtr)
                                        (pSVar11,"AssetPrefix",
                                         (pSVar11->klass->vtable)._7_get_Item.method);
                    if (pSVar12 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_059770c9;
                    pSVar14 = (*(pSVar12->klass->vtable)._9_get_Value.methodPtr)
                                        (pSVar12,(pSVar12->klass->vtable)._9_get_Value.method);
                  }
                }
                pSVar9 = System_String__Concat_52f0320(pSVar14,pSVar9,(MethodInfo *)0x0);
              }
              (__this_02->fields).Asset = pSVar9;
              Il2CppCodeGenWriteBarrier(&(__this_02->fields).Asset);
              bVar8 = (*(pSVar10->klass->vtable)._28_HasKey.methodPtr)
                                (pSVar10,"Static",(pSVar10->klass->vtable)._28_HasKey.method);
              if (bVar8) {
                pSVar12 = (*(pSVar10->klass->vtable)._7_get_Item.methodPtr)
                                    (pSVar10,"Static",(pSVar10->klass->vtable)._7_get_Item.method
                                    );
                if (pSVar12 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_059770c9;
                bVar8 = (*(pSVar12->klass->vtable)._39_get_AsBool.methodPtr)
                                  (pSVar12,(pSVar12->klass->vtable)._39_get_AsBool.method);
                (__this_02->fields).Static = bVar8;
              }
              bVar8 = (*(pSVar10->klass->vtable)._28_HasKey.methodPtr)
                                (pSVar10,"Networked",(pSVar10->klass->vtable)._28_HasKey.method);
              if (bVar8) {
                pSVar12 = (*(pSVar10->klass->vtable)._7_get_Item.methodPtr)
                                    (pSVar10,"Networked",(pSVar10->klass->vtable)._7_get_Item.method
                                    );
                if (pSVar12 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_059770c9;
                bVar8 = (*(pSVar12->klass->vtable)._39_get_AsBool.methodPtr)
                                  (pSVar12,(pSVar12->klass->vtable)._39_get_AsBool.method);
                (__this_02->fields).Networked = bVar8;
              }
              bVar8 = (*(pSVar10->klass->vtable)._28_HasKey.methodPtr)
                                (pSVar10,"Visible",(pSVar10->klass->vtable)._28_HasKey.method);
              if (bVar8) {
                pSVar12 = (*(pSVar10->klass->vtable)._7_get_Item.methodPtr)
                                    (pSVar10,"Visible",(pSVar10->klass->vtable)._7_get_Item.method
                                    );
                if (pSVar12 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_059770c9;
                bVar8 = (*(pSVar12->klass->vtable)._39_get_AsBool.methodPtr)
                                  (pSVar12,(pSVar12->klass->vtable)._39_get_AsBool.method);
                (__this_02->fields).Visible = bVar8;
              }
              bVar8 = (*(pSVar10->klass->vtable)._28_HasKey.methodPtr)
                                (pSVar10,"CollideMode",(pSVar10->klass->vtable)._28_HasKey.method);
              if (bVar8) {
                pSVar12 = (*(pSVar10->klass->vtable)._7_get_Item.methodPtr)
                                    (pSVar10,"CollideMode",(pSVar10->klass->vtable)._7_get_Item.method
                                    );
                if (pSVar12 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_059770c9;
                pSVar9 = (*(pSVar12->klass->vtable)._9_get_Value.methodPtr)
                                   (pSVar12,(pSVar12->klass->vtable)._9_get_Value.method);
                (__this_02->fields).CollideMode = pSVar9;
                Il2CppCodeGenWriteBarrier(&(__this_02->fields).CollideMode);
              }
              bVar8 = (*(pSVar10->klass->vtable)._28_HasKey.methodPtr)
                                (pSVar10,"CollideWith",(pSVar10->klass->vtable)._28_HasKey.method);
              if (bVar8) {
                pSVar12 = (*(pSVar10->klass->vtable)._7_get_Item.methodPtr)
                                    (pSVar10,"CollideWith",(pSVar10->klass->vtable)._7_get_Item.method
                                    );
                if (pSVar12 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_059770c9;
                pSVar9 = (*(pSVar12->klass->vtable)._9_get_Value.methodPtr)
                                   (pSVar12,(pSVar12->klass->vtable)._9_get_Value.method);
                (__this_02->fields).CollideWith = pSVar9;
                Il2CppCodeGenWriteBarrier(&(__this_02->fields).CollideWith);
              }
              bVar8 = (*(pSVar10->klass->vtable)._28_HasKey.methodPtr)
                                (pSVar10,"Material",(pSVar10->klass->vtable)._28_HasKey.method);
              if (bVar8) {
                pSVar12 = (*(pSVar10->klass->vtable)._7_get_Item.methodPtr)
                                    (pSVar10,"Material",(pSVar10->klass->vtable)._7_get_Item.method
                                    );
                if (pSVar12 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_059770c9;
                pSVar9 = (*(pSVar12->klass->vtable)._9_get_Value.methodPtr)
                                   (pSVar12,(pSVar12->klass->vtable)._9_get_Value.method);
                pMVar13 = Map_MapScriptSceneObject__DeserializeMaterial(pSVar9,(MethodInfo *)0x0);
                (__this_02->fields).Material = pMVar13;
                Il2CppCodeGenWriteBarrier(&(__this_02->fields).Material);
              }
              bVar8 = (*(pSVar10->klass->vtable)._28_HasKey.methodPtr)
                                (pSVar10,"Components",(pSVar10->klass->vtable)._28_HasKey.method);
              if (bVar8) {
                pSVar12 = (*(pSVar10->klass->vtable)._7_get_Item.methodPtr)
                                    (pSVar10,"Components",(pSVar10->klass->vtable)._7_get_Item.method
                                    );
                if (pSVar12 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_059770c9;
                (*(pSVar12->klass->vtable)._32_unknown.methodPtr)
                          (&local_200,pSVar12,(pSVar12->klass->vtable)._32_unknown.method);
                local_1b8.m_Array.fields._current = local_200.m_Array.fields._current;
                local_1b8.m_Array.fields._list = local_200.m_Array.fields._list;
                local_1b8.m_Array.fields._index = local_200.m_Array.fields._index;
                local_1b8.m_Array.fields._version = local_200.m_Array.fields._version;
                local_1b8.m_Object.fields._current.fields.value =
                     local_200.m_Object.fields._current.fields.value;
                local_1b8.m_Object.fields._getEnumeratorRetType =
                     local_200.m_Object.fields._getEnumeratorRetType;
                local_1b8.m_Object.fields._36_4_ = local_200.m_Object.fields._36_4_;
                local_1b8.m_Object.fields._version = local_200.m_Object.fields._version;
                local_1b8.m_Object.fields._index = local_200.m_Object.fields._index;
                local_1b8.m_Object.fields._current.fields.key = local_200.m_Object.fields._current.fields.key;
                local_1b8.type = local_200.type;
                local_1b8._4_4_ = local_200._4_4_;
                local_1b8.m_Object.fields._dictionary = local_200.m_Object.fields._dictionary;
                while (bVar8 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                                         ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_1b8,
                                          (MethodInfo *)0x0), bVar8) {
                  SVar17 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                                     ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_1b8,(MethodInfo *)0x0);
                  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
                  }
                  pSVar12 = SimpleJSONFixed_JSONNode__op_Implicit_57641c0(SVar17,(MethodInfo *)0x0);
                  __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptComponent);
                  Map_MapScriptComponent___ctor(__this_03,(MethodInfo *)0x0);
                  if ((pSVar12 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
                     (pSVar9 = (*(pSVar12->klass->vtable)._9_get_Value.methodPtr)
                                         (pSVar12,(pSVar12->klass->vtable)._9_get_Value.method),
                     __this_03 == (Map_MapScriptComponent_o *)0x0)) goto label_059770c9;
                  (*(__this_03->klass->vtable)._9_Deserialize.methodPtr)
                            (__this_03,pSVar9,(__this_03->klass->vtable)._9_Deserialize.method);
                  pMVar7 = MethodInfo_System_Collections_Generic_List_MapScriptComponent_Add;
                  __this = (__this_02->fields).Components;
                  if (__this == (System_Collections_Generic_List_MapScriptComponent__o *)0x0)
                  goto label_059770c9;
                  piVar1 = &(__this->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pMVar5 = (__this->fields)._items;
                  if (pMVar5 == (Map_MapScriptComponent_array *)0x0) goto label_059770c9;
                  uVar3 = (__this->fields)._size;
                  if (uVar3 < (uint)pMVar5->max_length) {
                    (__this->fields)._size = uVar3 + 1;
                    pMVar5->m_Items[(int)uVar3] = __this_03;
                    Il2CppCodeGenWriteBarrier(pMVar5->m_Items + (int)uVar3);
                  }
                  else {
                    System_Collections_Generic_List_object___AddWithResize
                              ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)__this_03,
                               (MethodInfo_395D230 *)pMVar7->klass->rgctx_data[0xe].method);
                  }
                }
              }
              bVar8 = (*(pSVar10->klass->vtable)._28_HasKey.methodPtr)
                                (pSVar10,"ScaleX",(pSVar10->klass->vtable)._28_HasKey.method);
              if (bVar8) {
                pSVar12 = (*(pSVar10->klass->vtable)._7_get_Item.methodPtr)
                                    (pSVar10,"ScaleX",(pSVar10->klass->vtable)._7_get_Item.method
                                    );
                if (pSVar12 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_059770c9;
                fVar16 = (*(pSVar12->klass->vtable)._37_get_AsFloat.methodPtr)
                                   (pSVar12,(pSVar12->klass->vtable)._37_get_AsFloat.method);
                (__this_02->fields).ScaleX = fVar16;
              }
              bVar8 = (*(pSVar10->klass->vtable)._28_HasKey.methodPtr)
                                (pSVar10,"ScaleY",(pSVar10->klass->vtable)._28_HasKey.method);
              if (bVar8) {
                pSVar12 = (*(pSVar10->klass->vtable)._7_get_Item.methodPtr)
                                    (pSVar10,"ScaleY",(pSVar10->klass->vtable)._7_get_Item.method
                                    );
                if (pSVar12 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_059770c9;
                fVar16 = (*(pSVar12->klass->vtable)._37_get_AsFloat.methodPtr)
                                   (pSVar12,(pSVar12->klass->vtable)._37_get_AsFloat.method);
                (__this_02->fields).ScaleX = fVar16;
              }
              bVar8 = (*(pSVar10->klass->vtable)._28_HasKey.methodPtr)
                                (pSVar10,"ScaleZ",(pSVar10->klass->vtable)._28_HasKey.method);
              if (bVar8) {
                pSVar12 = (*(pSVar10->klass->vtable)._7_get_Item.methodPtr)
                                    (pSVar10,"ScaleZ",(pSVar10->klass->vtable)._7_get_Item.method
                                    );
                if (pSVar12 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_059770c9;
                fVar16 = (*(pSVar12->klass->vtable)._37_get_AsFloat.methodPtr)
                                   (pSVar12,(pSVar12->klass->vtable)._37_get_AsFloat.method);
                (__this_02->fields).ScaleX = fVar16;
              }
              bVar8 = (*(pSVar10->klass->vtable)._28_HasKey.methodPtr)
                                (pSVar10,"Preview",(pSVar10->klass->vtable)._28_HasKey.method);
              if (bVar8) {
                if ((TypeInfo_Map_BuiltinMapPrefabs->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
                }
                pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                         TypeInfo_Map_BuiltinMapPrefabs->static_fields->PrefabPreviews;
                pSVar9 = *targetAddress;
                pSVar12 = (*(pSVar10->klass->vtable)._7_get_Item.methodPtr)
                                    (pSVar10,"Preview",(pSVar10->klass->vtable)._7_get_Item.method
                                    );
                if ((pSVar12 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
                   (pSVar14 = (*(pSVar12->klass->vtable)._9_get_Value.methodPtr)
                                        (pSVar12,(pSVar12->klass->vtable)._9_get_Value.method),
                   pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0))
                goto label_059770c9;
                System_Collections_Generic_Dictionary_object__object___Add
                          (pSVar4,(Il2CppObject *)pSVar9,(Il2CppObject *)pSVar14,
                           (MethodInfo_4AAD4E0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
              }
              bVar8 = (*(pSVar10->klass->vtable)._28_HasKey.methodPtr)
                                (pSVar10,"Variant",(pSVar10->klass->vtable)._28_HasKey.method);
              if (bVar8) {
                pSVar12 = (*(pSVar10->klass->vtable)._7_get_Item.methodPtr)
                                    (pSVar10,"Variant",(pSVar10->klass->vtable)._7_get_Item.method
                                    );
                if (pSVar12 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_059770c9;
                pSVar9 = (*(pSVar12->klass->vtable)._9_get_Value.methodPtr)
                                   (pSVar12,(pSVar12->klass->vtable)._9_get_Value.method);
                bVar8 = System_String__op_Inequality(pSVar9,*targetAddress,(MethodInfo *)0x0);
                if (bVar8) {
                  if ((TypeInfo_Map_BuiltinMapPrefabs->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
                  }
                  pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                           TypeInfo_Map_BuiltinMapPrefabs->static_fields->PrefabVariants;
                  if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
                  goto label_059770c9;
                  bVar8 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                                    (pSVar4,(Il2CppObject *)pSVar9,
                                     (MethodInfo_4AAD6F0 *)
                                     MethodInfo_System_Collections_Generic_Dictionary_string_List_string_ContainsKey
                                    );
                  if (!bVar8) {
                    if ((TypeInfo_Map_BuiltinMapPrefabs->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
                    }
                    pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                             TypeInfo_Map_BuiltinMapPrefabs->static_fields->PrefabVariants;
                    __this_04 = il2cpp_codegen_object_new
                                          ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
                    System_Collections_Generic_List_object____ctor
                              ((System_Collections_Generic_List_object__o *)__this_04,
                               (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
                    if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
                    goto label_059770c9;
                    System_Collections_Generic_Dictionary_object__object___Add
                              (pSVar4,(Il2CppObject *)pSVar9,(Il2CppObject *)__this_04,
                               (MethodInfo_4AAD4E0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_List_string_Add);
                  }
                  if ((TypeInfo_Map_BuiltinMapPrefabs->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
                  }
                  pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                           TypeInfo_Map_BuiltinMapPrefabs->static_fields->PrefabVariants;
                  if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
                  goto label_059770c9;
                  pSVar15 = (System_Collections_Generic_List_object__o *)
                            System_Collections_Generic_Dictionary_object__object___get_Item
                                      (pSVar4,(Il2CppObject *)pSVar9,
                                       (MethodInfo_4AAD450 *)
                                       MethodInfo_System_Collections_Generic_Dictionary_string_List_string_get_Item
                                      );
                  pMVar7 = MethodInfo_System_Collections_Generic_List_string_Add;
                  if (pSVar15 == (System_Collections_Generic_List_object__o *)0x0) goto label_059770c9;
                  pSVar14 = *targetAddress;
                  piVar1 = &(pSVar15->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pSVar6 = (pSVar15->fields)._items;
                  if (pSVar6 == (System_Object_array *)0x0) goto label_059770c9;
                  uVar3 = (pSVar15->fields)._size;
                  if (uVar3 < (uint)pSVar6->max_length) {
                    (pSVar15->fields)._size = uVar3 + 1;
                    pSVar6->m_Items[(int)uVar3] = (Il2CppObject *)pSVar14;
                    Il2CppCodeGenWriteBarrier(pSVar6->m_Items + (int)uVar3);
                  }
                  else {
                    System_Collections_Generic_List_object___AddWithResize
                              (pSVar15,(Il2CppObject *)pSVar14,
                               (MethodInfo_395D230 *)pMVar7->klass->rgctx_data[0xe].method);
                  }
                  pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                           TypeInfo_Map_BuiltinMapPrefabs->static_fields->VariantToBasePrefab;
                  if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
                  goto label_059770c9;
                  System_Collections_Generic_Dictionary_object__object___set_Item
                            (pSVar4,(Il2CppObject *)*targetAddress,(Il2CppObject *)pSVar9,
                             (MethodInfo_4AAD4C0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
                }
              }
              if ((TypeInfo_Map_BuiltinMapPrefabs->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
              }
              pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                       TypeInfo_Map_BuiltinMapPrefabs->static_fields->AllPrefabs;
              if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                System_Collections_Generic_Dictionary_object__object___Add
                          (pSVar4,(Il2CppObject *)(__this_02->fields).Name,(Il2CppObject *)__this_02,
                           (MethodInfo_4AAD4E0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBaseObject_Add);
                pSVar9 = (__this_02->fields).Name;
                if (pSVar9 != (System_String_o *)0x0) {
                  pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                           TypeInfo_Map_BuiltinMapPrefabs->static_fields->AllPrefabsLower;
                  pSVar9 = System_String__ToLower(pSVar9,(MethodInfo *)0x0);
                  if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    System_Collections_Generic_Dictionary_object__object___Add
                              (pSVar4,(Il2CppObject *)pSVar9,(Il2CppObject *)__this_02,
                               (MethodInfo_4AAD4E0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBaseObject_Add
                              );
                    bVar8 = (*(pSVar10->klass->vtable)._28_HasKey.methodPtr)
                                      (pSVar10,"Hidden",
                                       (pSVar10->klass->vtable)._28_HasKey.method);
                    if (!bVar8) goto label_05977036;
                    pSVar10 = (*(pSVar10->klass->vtable)._7_get_Item.methodPtr)
                                        (pSVar10,"Hidden",
                                         (pSVar10->klass->vtable)._7_get_Item.method);
                    if (pSVar10 != (SimpleJSONFixed_JSONNode_o *)0x0) goto code_r0x0597701b;
                  }
                }
              }
            }
            goto label_059770c9;
          }
          bVar8 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                            ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_118,(MethodInfo *)0x0);
        } while (bVar8);
      }
      return;
    }
  }
label_059770c9:
  ThrowNullReferenceException();
code_r0x0597701b:
  bVar8 = (*(pSVar10->klass->vtable)._39_get_AsBool.methodPtr)
                    (pSVar10,(pSVar10->klass->vtable)._39_get_AsBool.method);
  if (!bVar8) {
label_05977036:
    if ((TypeInfo_Map_BuiltinMapPrefabs->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
    }
    pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Map_BuiltinMapPrefabs->static_fields->PrefabCategories;
    if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_059770c9;
    pSVar15 = (System_Collections_Generic_List_object__o *)
              System_Collections_Generic_Dictionary_object__object___get_Item
                        (pSVar4,(Il2CppObject *)local_218,
                         (MethodInfo_4AAD450 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_List_MapScriptBaseObject_get_Item
                        );
    pMVar7 = MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_Add;
    if (pSVar15 == (System_Collections_Generic_List_object__o *)0x0) goto label_059770c9;
    piVar1 = &(pSVar15->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar6 = (pSVar15->fields)._items;
    if (pSVar6 == (System_Object_array *)0x0) goto label_059770c9;
    uVar3 = (pSVar15->fields)._size;
    if (uVar3 < (uint)pSVar6->max_length) {
      (pSVar15->fields)._size = uVar3 + 1;
      pSVar6->m_Items[(int)uVar3] = (Il2CppObject *)__this_02;
      Il2CppCodeGenWriteBarrier(pSVar6->m_Items + (int)uVar3);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                (pSVar15,(Il2CppObject *)__this_02,(MethodInfo_395D230 *)pMVar7->klass->rgctx_data[0xe].method
                );
    }
  }
  goto label_059763ba;
}


// Map.BuiltinMapPrefabs$$.ctor
// il2cpp: void Map_BuiltinMapPrefabs___ctor (Map_BuiltinMapPrefabs_o* __this, const MethodInfo* method);
// 0x59770e0

void Map_BuiltinMapPrefabs___ctor(Map_BuiltinMapPrefabs_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Map.BuiltinMapPrefabs$$.cctor
// il2cpp: void Map_BuiltinMapPrefabs___cctor (const MethodInfo* method);
// 0x59770f0

void Map_BuiltinMapPrefabs___cctor(MethodInfo *method)

{
  Map_BuiltinMapPrefabs_StaticFields *pMVar1;
  System_Collections_Generic_Dictionary_string__MapScriptBaseObject__o *pSVar2;
  System_Collections_Generic_Dictionary_string__List_MapScriptBaseObject___o *__this;
  System_Collections_Generic_Dictionary_string__string__o *pSVar3;
  System_Collections_Generic_Dictionary_string__List_string___o *__this_00;
  
  if (Il2CppMethodInitialized_075459cc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinMapPrefabs);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_MapScriptBaseObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBaseObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_List_MapScriptBaseObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_MapScriptBaseObject);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_List_string);
    Il2CppMethodInitialized_075459cc = '\x01';
  }
  pSVar2 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_MapScriptBaseObject
                     );
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)pSVar2,
             (MethodInfo_4AAC8D0 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBaseObject_ctor);
  pMVar1 = TypeInfo_Map_BuiltinMapPrefabs->static_fields;
  pMVar1->AllPrefabs = pSVar2;
  Il2CppCodeGenWriteBarrier(&pMVar1->AllPrefabs);
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_System_Collections_Generic_Dictionary_string_List_MapScriptBaseObject);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this,
             (MethodInfo_4AAC8D0 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_List_MapScriptBaseObject_ctor);
  pMVar1 = TypeInfo_Map_BuiltinMapPrefabs->static_fields;
  pMVar1->PrefabCategories = __this;
  Il2CppCodeGenWriteBarrier(&pMVar1->PrefabCategories);
  pSVar2 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_MapScriptBaseObject
                     );
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)pSVar2,
             (MethodInfo_4AAC8D0 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBaseObject_ctor);
  pMVar1 = TypeInfo_Map_BuiltinMapPrefabs->static_fields;
  pMVar1->AllPrefabsLower = pSVar2;
  Il2CppCodeGenWriteBarrier(&pMVar1->AllPrefabsLower);
  pSVar3 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)pSVar3,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
  pMVar1 = TypeInfo_Map_BuiltinMapPrefabs->static_fields;
  pMVar1->PrefabPreviews = pSVar3;
  Il2CppCodeGenWriteBarrier(&pMVar1->PrefabPreviews);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_List_string);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_List_string_ctor);
  pMVar1 = TypeInfo_Map_BuiltinMapPrefabs->static_fields;
  pMVar1->PrefabVariants = __this_00;
  Il2CppCodeGenWriteBarrier(&pMVar1->PrefabVariants);
  pSVar3 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)pSVar3,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
  pMVar1 = TypeInfo_Map_BuiltinMapPrefabs->static_fields;
  pMVar1->VariantToBasePrefab = pSVar3;
  Il2CppCodeGenWriteBarrier(&pMVar1->VariantToBasePrefab);
  return;
}


