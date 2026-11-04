// Type: Map.BuiltinMapPrefabs
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Map/BuiltinMapPrefabs.cs
// Prior real C# source (older reference): Assets/Scripts/Map/BuiltinMapPrefabs.cs
// --------------------------------

// Map.BuiltinMapPrefabs$$Init
// il2cpp: void Map_BuiltinMapPrefabs__Init (const MethodInfo* method);
// 0x181e84a30
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e84ebc: nop dword ptr [rax]
// asm:   0x181e850c5: nop word ptr [rax + rax]
// asm:   0x181e853e7: mov rsi, rax
// asm:   0x181e853fa: mov rax, qword ptr [rip + 0x22185c7]  ; "None"
// asm:   0x181e856f4: nop dword ptr [rax]
// asm:   0x181e856f8: nop dword ptr [rax + rax]

void Map_BuiltinMapPrefabs__Init(MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_Dictionary_string__List_MapScriptBaseObject___o *__this;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  System_Xml_Schema_XmlSchema_c *pSVar3;
  System_String_c *pSVar4;
  System_Collections_Generic_Dictionary_string__List_string___o *__this_00;
  SimpleJSONFixed_JSONNode_Enumerator_o *pSVar5;
  bool bVar6;
  char cVar7;
  int32_t iVar8;
  UnityEngine_Object_o *__this_01;
  System_String_o *pSVar9;
  SimpleJSONFixed_JSONNode_o *pSVar10;
  SimpleJSONFixed_JSONNode_ValueEnumerator_o *pSVar11;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o *pSVar12;
  MethodInfo *key;
  System_Xml_Schema_XmlSchema_o *pSVar13;
  undefined4 extraout_var;
  System_Collections_Generic_List_MapScriptBaseObject__o *__this_02;
  System_String_o *pSVar15;
  undefined8 *puVar16;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o *pSVar17;
  Map_MapScriptSceneObject_o *__this_03;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  System_String_o *__this_04;
  undefined4 extraout_var_03;
  System_String_o *value;
  Map_MapScriptBaseMaterial_o *value_00;
  SimpleJSONFixed_JSONNode_o *pSVar18;
  Map_MapScriptComponent_o *__this_05;
  Il2CppObject *pIVar19;
  System_Collections_Generic_List_string__o *__this_06;
  float fVar20;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_1f8;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_1e8;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_198;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_148;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_f8;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_a8;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_98;
  SimpleJSONFixed_JSONNode_ValueEnumerator_o local_88;
  longlong *plVar14;
  
  if (Il2CppMethodInitialized_184345037 == '\0') {
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
    Il2CppMethodInitialized_184345037 = '\x01';
  }
  local_148.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_f8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_198.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_1e8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_148.type = 0;
  local_148._4_4_ = 0;
  local_148.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_148.m_Object.fields._version = 0;
  local_148.m_Object.fields._index = 0;
  local_148.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_148.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_148.m_Object.fields._getEnumeratorRetType = 0;
  local_148.m_Object.fields._36_4_ = 0;
  local_148.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_148.m_Array.fields._index = 0;
  local_148.m_Array.fields._version = 0;
  local_f8.type = 0;
  local_f8._4_4_ = 0;
  local_f8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_f8.m_Object.fields._version = 0;
  local_f8.m_Object.fields._index = 0;
  local_f8.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_f8.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_f8.m_Object.fields._getEnumeratorRetType = 0;
  local_f8.m_Object.fields._36_4_ = 0;
  local_f8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_f8.m_Array.fields._index = 0;
  local_f8.m_Array.fields._version = 0;
  local_198.type = 0;
  local_198._4_4_ = 0;
  local_198.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_198.m_Object.fields._version = 0;
  local_198.m_Object.fields._index = 0;
  local_198.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_198.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_198.m_Object.fields._getEnumeratorRetType = 0;
  local_198.m_Object.fields._36_4_ = 0;
  local_198.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_198.m_Array.fields._index = 0;
  local_198.m_Array.fields._version = 0;
  local_1e8.type = 0;
  local_1e8._4_4_ = 0;
  local_1e8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_1e8.m_Object.fields._version = 0;
  local_1e8.m_Object.fields._index = 0;
  local_1e8.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_1e8.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_1e8.m_Object.fields._getEnumeratorRetType = 0;
  local_1e8.m_Object.fields._36_4_ = 0;
  local_1e8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_1e8.m_Array.fields._index = 0;
  local_1e8.m_Array.fields._version = 0;
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  pSVar9 = TypeInfo_Utility_ResourcePaths->static_fields->Info;
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  __this_01 = ApplicationManagers_ResourceManager__LoadAsset
                        (pSVar9,"MapPrefabList",false,(MethodInfo *)0x0);
  if (__this_01 != (UnityEngine_Object_o *)0x0) {
    bVar1 = (TypeInfo_UnityEngine_TextAsset->_2).typeHierarchyDepth;
    if (((__this_01->klass->_2).typeHierarchyDepth < bVar1) ||
       ((__this_01->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_UnityEngine_TextAsset)) {
      il2cpp_codegen_raise_invalid_cast_exception(__this_01,TypeInfo_UnityEngine_TextAsset);
    }
    pSVar9 = UnityEngine_TextAsset__ToString((UnityEngine_TextAsset_o *)__this_01,(MethodInfo *)0x0);
    pSVar10 = SimpleJSONFixed_JSON__Parse(pSVar9,(MethodInfo *)0x0);
    if ((TypeInfo_Map_BuiltinMapPrefabs->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
    }
    TypeInfo_Map_BuiltinMapPrefabs->static_fields->_prefabList = pSVar10;
    Il2CppCodeGenWriteBarrier(&TypeInfo_Map_BuiltinMapPrefabs->static_fields->_prefabList,pSVar10);
    pSVar10 = TypeInfo_Map_BuiltinMapPrefabs->static_fields->_prefabList;
    if (pSVar10 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar11 = SimpleJSONFixed_JSONNode__get_Values(&local_88,pSVar10,(MethodInfo *)0x0);
      local_f8.type = (pSVar11->fields).m_Enumerator.fields.type;
      local_f8._4_4_ = *(undefined4 *)&(pSVar11->fields).m_Enumerator.fields.field_0x4;
      local_f8.m_Object.fields._dictionary = (pSVar11->fields).m_Enumerator.fields.m_Object.fields._dictionary
      ;
      pSVar5 = &(pSVar11->fields).m_Enumerator;
      local_f8.m_Object.fields._version = (pSVar5->fields).m_Object.fields._version;
      local_f8.m_Object.fields._index = (pSVar5->fields).m_Object.fields._index;
      local_f8.m_Object.fields._current.fields.key =
           (pSVar11->fields).m_Enumerator.fields.m_Object.fields._current.fields.key;
      local_f8.m_Object.fields._current.fields.value =
           (pSVar11->fields).m_Enumerator.fields.m_Object.fields._current.fields.value;
      pSVar5 = &(pSVar11->fields).m_Enumerator;
      local_f8.m_Object.fields._getEnumeratorRetType = (pSVar5->fields).m_Object.fields._getEnumeratorRetType;
      local_f8.m_Object.fields._36_4_ = *(undefined4 *)&(pSVar5->fields).m_Object.fields.field_0x24;
      local_f8.m_Array.fields._list = (pSVar11->fields).m_Enumerator.fields.m_Array.fields._list;
      pSVar5 = &(pSVar11->fields).m_Enumerator;
      local_f8.m_Array.fields._index = (pSVar5->fields).m_Array.fields._index;
      local_f8.m_Array.fields._version = (pSVar5->fields).m_Array.fields._version;
      local_f8.m_Array.fields._current = (pSVar11->fields).m_Enumerator.fields.m_Array.fields._current;
      pSVar12 = SimpleJSONFixed_JSONNode_KeyEnumerator__GetEnumerator
                          ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_88,
                           (SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_f8,(MethodInfo *)0x0);
      local_148.type = (pSVar12->fields).m_Enumerator.fields.type;
      local_148._4_4_ = *(undefined4 *)&(pSVar12->fields).m_Enumerator.fields.field_0x4;
      local_148.m_Object.fields._dictionary =
           (pSVar12->fields).m_Enumerator.fields.m_Object.fields._dictionary;
      pSVar5 = &(pSVar12->fields).m_Enumerator;
      local_148.m_Object.fields._version = (pSVar5->fields).m_Object.fields._version;
      local_148.m_Object.fields._index = (pSVar5->fields).m_Object.fields._index;
      local_148.m_Object.fields._current.fields.key =
           (pSVar12->fields).m_Enumerator.fields.m_Object.fields._current.fields.key;
      local_148.m_Object.fields._current.fields.value =
           (pSVar12->fields).m_Enumerator.fields.m_Object.fields._current.fields.value;
      pSVar5 = &(pSVar12->fields).m_Enumerator;
      local_148.m_Object.fields._getEnumeratorRetType = (pSVar5->fields).m_Object.fields._getEnumeratorRetType
      ;
      local_148.m_Object.fields._36_4_ = *(undefined4 *)&(pSVar5->fields).m_Object.fields.field_0x24;
      local_148.m_Array.fields._list = (pSVar12->fields).m_Enumerator.fields.m_Array.fields._list;
      pSVar5 = &(pSVar12->fields).m_Enumerator;
      local_148.m_Array.fields._index = (pSVar5->fields).m_Array.fields._index;
      local_148.m_Array.fields._version = (pSVar5->fields).m_Array.fields._version;
      local_148.m_Array.fields._current = (pSVar12->fields).m_Enumerator.fields.m_Array.fields._current;
      bVar6 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                        ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_148,(MethodInfo *)0x0);
      if (bVar6) {
        do {
          key = (MethodInfo *)
                SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current
                          ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_148,(MethodInfo *)0x0);
          if ((TypeInfo_Map_BuiltinMapPrefabs->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
          }
          pSVar10 = TypeInfo_Map_BuiltinMapPrefabs->static_fields->_prefabList;
          if (((pSVar10 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
              (pSVar13 = (*(pSVar10->klass->vtable)._7_get_Item.methodPtr)(pSVar10,key),
              pSVar13 == (System_Xml_Schema_XmlSchema_o *)0x0)) ||
             (pSVar9 = (*(pSVar13->klass->vtable)._7_get_IdAttribute.methodPtr)
                                 (pSVar13,(MethodInfo *)"Info"),
             pSVar9 == (System_String_o *)0x0)) goto label_181e85ccc;
          cVar7 = (*(code *)((Il2CppClass *)pSVar9->klass)->vtable[28].methodPtr)
                            (pSVar9,"Category",((Il2CppClass *)pSVar9->klass)->vtable[28].method);
          if (cVar7 != '\0') {
            iVar8 = (*(pSVar9->klass->vtable)._7_CompareTo.methodPtr)
                              (pSVar9,"Category",(pSVar9->klass->vtable)._7_CompareTo.method);
            plVar14 = (longlong *)CONCAT44(extraout_var,iVar8);
            if (plVar14 == (longlong *)0x0) goto label_181e85ccc;
            key = (MethodInfo *)(**(code **)(*plVar14 + 0x1c8))(plVar14,*(undefined8 *)(*plVar14 + 0x1d0));
          }
          if ((TypeInfo_Map_BuiltinMapPrefabs->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
          }
          __this = TypeInfo_Map_BuiltinMapPrefabs->static_fields->PrefabCategories;
          if (__this == (System_Collections_Generic_Dictionary_string__List_MapScriptBaseObject___o *)0x0)
          goto label_181e85ccc;
          bVar6 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
                             (Il2CppObject *)key,
                             (MethodInfo_1455450 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_List_MapScriptBaseObject_ContainsKey
                            );
          if (!bVar6) {
            if ((TypeInfo_Map_BuiltinMapPrefabs->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
            }
            pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                     TypeInfo_Map_BuiltinMapPrefabs->static_fields->PrefabCategories;
            __this_02 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MapScriptBaseObject
                                  );
            System_Collections_Generic_List_object____ctor
                      ((System_Collections_Generic_LowLevelList_T__o *)__this_02,
                       (MethodInfo_92A240 *)
                       MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_ctor);
            if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_181e85ccc;
            System_Collections_Generic_Dictionary_object__object___Add
                      (pSVar2,(Il2CppObject *)key,(Il2CppObject *)__this_02,
                       (MethodInfo_146B4B0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_List_MapScriptBaseObject_Add);
          }
          pSVar15 = (*(pSVar13->klass->vtable)._7_get_IdAttribute.methodPtr)
                              (pSVar13,(MethodInfo *)"Prefabs");
          if (pSVar15 == (System_String_o *)0x0) goto label_181e85ccc;
          puVar16 = (undefined8 *)(*(code *)((Il2CppClass *)pSVar15->klass)->vtable[32].methodPtr)(&local_88);
          local_198._0_8_ = *puVar16;
          local_198.m_Object.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)puVar16[1];
          local_198.m_Object.fields._8_8_ = puVar16[2];
          local_198.m_Object.fields._current.fields.key = (Il2CppObject *)puVar16[3];
          local_198.m_Object.fields._current.fields.value = (Il2CppObject *)puVar16[4];
          local_198.m_Object.fields._32_8_ = puVar16[5];
          local_198.m_Array.fields._list = (System_Collections_Generic_List_T__o *)puVar16[6];
          local_198.m_Array.fields._8_8_ = puVar16[7];
          local_198.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)puVar16[8];
          bVar6 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                            ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_198,(MethodInfo *)0x0);
          if (bVar6) {
            do {
              pSVar17 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                                  (&local_a8,(SimpleJSONFixed_JSONNode_Enumerator_o *)&local_198,
                                   (MethodInfo *)0x0);
              pSVar15 = (pSVar17->fields).key;
              pSVar10 = (pSVar17->fields).value;
              if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
              }
              local_1f8.fields.key = pSVar15;
              local_1f8.fields.value = pSVar10;
              pSVar10 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4410(&local_1f8,(MethodInfo *)0x0);
              __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptSceneObject);
              Map_MapScriptSceneObject___ctor(__this_03,(MethodInfo *)0x0);
              iVar8 = (*(pSVar9->klass->vtable)._7_CompareTo.methodPtr)
                                (pSVar9,"Type",(pSVar9->klass->vtable)._7_CompareTo.method);
              plVar14 = (longlong *)CONCAT44(extraout_var_00,iVar8);
              if ((plVar14 == (longlong *)0x0) ||
                 (pSVar15 = (System_String_o *)
                            (**(code **)(*plVar14 + 0x1c8))(plVar14,*(undefined8 *)(*plVar14 + 0x1d0)),
                 __this_03 == (Map_MapScriptSceneObject_o *)0x0)) goto label_181e85ccc;
              (__this_03->fields).Type = pSVar15;
              Il2CppCodeGenWriteBarrier(&(__this_03->fields).Type,pSVar15);
              if ((pSVar10 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
                 (pSVar13 = (*(pSVar10->klass->vtable)._7_get_Item.methodPtr)
                                      (pSVar10,(MethodInfo *)"Name"),
                 pSVar13 == (System_Xml_Schema_XmlSchema_o *)0x0)) goto label_181e85ccc;
              pSVar3 = pSVar13->klass;
              pSVar15 = (System_String_o *)
                        (*(pSVar3->vtable)._9_SetUnhandledAttributes.methodPtr)
                                  (pSVar13,(UnityEngine_GameObject_o *)
                                           (pSVar3->vtable)._9_SetUnhandledAttributes.method,
                                   (MethodInfo *)pSVar3);
              (__this_03->fields).Name = pSVar15;
              Il2CppCodeGenWriteBarrier(&(__this_03->fields).Name,pSVar15);
              pSVar15 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
              cVar7 = (*(code *)((Il2CppClass *)pSVar9->klass)->vtable[28].methodPtr)
                                (pSVar9,"AssetSameAsName",((Il2CppClass *)pSVar9->klass)->vtable[28].method);
              if (cVar7 != '\0') {
                iVar8 = (*(pSVar9->klass->vtable)._7_CompareTo.methodPtr)
                                  (pSVar9,"AssetSameAsName",(pSVar9->klass->vtable)._7_CompareTo.method);
                plVar14 = (longlong *)CONCAT44(extraout_var_01,iVar8);
                if (plVar14 == (longlong *)0x0) goto label_181e85ccc;
                cVar7 = (**(code **)(*plVar14 + 0x3a8))(plVar14,*(undefined8 *)(*plVar14 + 0x3b0));
                if (cVar7 != '\0') {
                  pSVar13 = (*(pSVar10->klass->vtable)._7_get_Item.methodPtr)
                                      (pSVar10,(MethodInfo *)"Name");
                  if (pSVar13 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_181e85ccc;
                  pSVar3 = pSVar13->klass;
                  pSVar15 = (System_String_o *)
                            (*(pSVar3->vtable)._9_SetUnhandledAttributes.methodPtr)
                                      (pSVar13,(UnityEngine_GameObject_o *)
                                               (pSVar3->vtable)._9_SetUnhandledAttributes.method,
                                       (MethodInfo *)pSVar3);
                }
              }
              bVar6 = (*(pSVar10->klass->vtable)._28_HasKey.methodPtr)
                                (pSVar10,(MethodInfo *)"Asset");
              if (bVar6) {
                pSVar13 = (*(pSVar10->klass->vtable)._7_get_Item.methodPtr)
                                    (pSVar10,(MethodInfo *)"Asset");
                if (pSVar13 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_181e85ccc;
                pSVar3 = pSVar13->klass;
                pSVar15 = (System_String_o *)
                          (*(pSVar3->vtable)._9_SetUnhandledAttributes.methodPtr)
                                    (pSVar13,(UnityEngine_GameObject_o *)
                                             (pSVar3->vtable)._9_SetUnhandledAttributes.method,
                                     (MethodInfo *)pSVar3);
              }
              bVar6 = System_String__op_Equality
                                (pSVar15,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),
                                 (MethodInfo *)0x0);
              value = "None";
              if ((!bVar6) &&
                 (bVar6 = System_String__op_Equality(pSVar15,"None",(MethodInfo *)0x0),
                 __this_04 = "", value = "None", !bVar6)) {
                cVar7 = (*(code *)((Il2CppClass *)pSVar9->klass)->vtable[28].methodPtr)
                                  (pSVar9,"AssetBasePath",((Il2CppClass *)pSVar9->klass)->vtable[28].method);
                pSVar4 = pSVar9->klass;
                if (cVar7 == '\0') {
                  cVar7 = (*(code *)((Il2CppClass *)pSVar4)->vtable[28].methodPtr)(pSVar9,"AssetPrefix");
                  if (cVar7 != '\0') {
                    iVar8 = (*(pSVar9->klass->vtable)._7_CompareTo.methodPtr)
                                      (pSVar9,"AssetPrefix",
                                       (pSVar9->klass->vtable)._7_CompareTo.method);
                    plVar14 = (longlong *)CONCAT44(extraout_var_02,iVar8);
                    if (plVar14 == (longlong *)0x0) goto label_181e85ccc;
                    __this_04 = (System_String_o *)
                                (**(code **)(*plVar14 + 0x1c8))(plVar14,*(undefined8 *)(*plVar14 + 0x1d0));
                  }
                }
                else {
                  iVar8 = (*(pSVar4->vtable)._7_CompareTo.methodPtr)
                                    (pSVar9,"AssetBasePath",(pSVar4->vtable)._7_CompareTo.method);
                  plVar14 = (longlong *)CONCAT44(extraout_var_03,iVar8);
                  if ((plVar14 == (longlong *)0x0) ||
                     (__this_04 = (System_String_o *)
                                  (**(code **)(*plVar14 + 0x1c8))(plVar14,*(undefined8 *)(*plVar14 + 0x1d0)),
                     __this_04 == (System_String_o *)0x0)) goto label_181e85ccc;
                  bVar6 = System_String__EndsWith(__this_04,"/",(MethodInfo *)0x0);
                  if (!bVar6) {
                    __this_04 = System_String__Concat_1969e50
                                          (__this_04,"/",(MethodInfo *)0x0);
                  }
                }
                value = System_String__Concat_1969e50(__this_04,pSVar15,(MethodInfo *)0x0);
              }
              (__this_03->fields).Asset = value;
              Il2CppCodeGenWriteBarrier(&(__this_03->fields).Asset,value);
              bVar6 = (*(pSVar10->klass->vtable)._28_HasKey.methodPtr)
                                (pSVar10,(MethodInfo *)"Static");
              if (bVar6) {
                pSVar13 = (*(pSVar10->klass->vtable)._7_get_Item.methodPtr)
                                    (pSVar10,(MethodInfo *)"Static");
                if (pSVar13 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_181e85ccc;
                bVar6 = (bool)(*(code *)((Il2CppClass *)pSVar13->klass)->vtable[39].methodPtr)
                                        (pSVar13,((Il2CppClass *)pSVar13->klass)->vtable[39].method);
                (__this_03->fields).Static = bVar6;
              }
              bVar6 = (*(pSVar10->klass->vtable)._28_HasKey.methodPtr)
                                (pSVar10,(MethodInfo *)"Networked");
              if (bVar6) {
                pSVar13 = (*(pSVar10->klass->vtable)._7_get_Item.methodPtr)
                                    (pSVar10,(MethodInfo *)"Networked");
                if (pSVar13 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_181e85ccc;
                bVar6 = (bool)(*(code *)((Il2CppClass *)pSVar13->klass)->vtable[39].methodPtr)
                                        (pSVar13,((Il2CppClass *)pSVar13->klass)->vtable[39].method);
                (__this_03->fields).Networked = bVar6;
              }
              bVar6 = (*(pSVar10->klass->vtable)._28_HasKey.methodPtr)
                                (pSVar10,(MethodInfo *)"Visible");
              if (bVar6) {
                pSVar13 = (*(pSVar10->klass->vtable)._7_get_Item.methodPtr)
                                    (pSVar10,(MethodInfo *)"Visible");
                if (pSVar13 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_181e85ccc;
                bVar6 = (bool)(*(code *)((Il2CppClass *)pSVar13->klass)->vtable[39].methodPtr)
                                        (pSVar13,((Il2CppClass *)pSVar13->klass)->vtable[39].method);
                (__this_03->fields).Visible = bVar6;
              }
              bVar6 = (*(pSVar10->klass->vtable)._28_HasKey.methodPtr)
                                (pSVar10,(MethodInfo *)"CollideMode");
              if (bVar6) {
                pSVar13 = (*(pSVar10->klass->vtable)._7_get_Item.methodPtr)
                                    (pSVar10,(MethodInfo *)"CollideMode");
                if (pSVar13 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_181e85ccc;
                pSVar3 = pSVar13->klass;
                pSVar15 = (System_String_o *)
                          (*(pSVar3->vtable)._9_SetUnhandledAttributes.methodPtr)
                                    (pSVar13,(UnityEngine_GameObject_o *)
                                             (pSVar3->vtable)._9_SetUnhandledAttributes.method,
                                     (MethodInfo *)pSVar3);
                (__this_03->fields).CollideMode = pSVar15;
                Il2CppCodeGenWriteBarrier(&(__this_03->fields).CollideMode,pSVar15);
              }
              bVar6 = (*(pSVar10->klass->vtable)._28_HasKey.methodPtr)
                                (pSVar10,(MethodInfo *)"CollideWith");
              if (bVar6) {
                pSVar13 = (*(pSVar10->klass->vtable)._7_get_Item.methodPtr)
                                    (pSVar10,(MethodInfo *)"CollideWith");
                if (pSVar13 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_181e85ccc;
                pSVar3 = pSVar13->klass;
                pSVar15 = (System_String_o *)
                          (*(pSVar3->vtable)._9_SetUnhandledAttributes.methodPtr)
                                    (pSVar13,(UnityEngine_GameObject_o *)
                                             (pSVar3->vtable)._9_SetUnhandledAttributes.method,
                                     (MethodInfo *)pSVar3);
                (__this_03->fields).CollideWith = pSVar15;
                Il2CppCodeGenWriteBarrier(&(__this_03->fields).CollideWith,pSVar15);
              }
              bVar6 = (*(pSVar10->klass->vtable)._28_HasKey.methodPtr)
                                (pSVar10,(MethodInfo *)"Material");
              if (bVar6) {
                pSVar13 = (*(pSVar10->klass->vtable)._7_get_Item.methodPtr)
                                    (pSVar10,(MethodInfo *)"Material");
                if (pSVar13 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_181e85ccc;
                pSVar3 = pSVar13->klass;
                pSVar15 = (System_String_o *)
                          (*(pSVar3->vtable)._9_SetUnhandledAttributes.methodPtr)
                                    (pSVar13,(UnityEngine_GameObject_o *)
                                             (pSVar3->vtable)._9_SetUnhandledAttributes.method,
                                     (MethodInfo *)pSVar3);
                value_00 = Map_MapScriptSceneObject__DeserializeMaterial(pSVar15,(MethodInfo *)0x0);
                (__this_03->fields).Material = value_00;
                Il2CppCodeGenWriteBarrier(&(__this_03->fields).Material,value_00);
              }
              bVar6 = (*(pSVar10->klass->vtable)._28_HasKey.methodPtr)
                                (pSVar10,(MethodInfo *)"Components");
              if (bVar6) {
                pSVar13 = (*(pSVar10->klass->vtable)._7_get_Item.methodPtr)
                                    (pSVar10,(MethodInfo *)"Components");
                if (pSVar13 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_181e85ccc;
                puVar16 = (undefined8 *)(**(code **)&((Il2CppClass *)pSVar13->klass)->vtable[32].methodPtr)(&local_88);
                local_1e8._0_8_ = *puVar16;
                local_1e8.m_Object.fields._dictionary =
                     (System_Collections_Generic_Dictionary_TKey__TValue__o *)puVar16[1];
                local_1e8.m_Object.fields._8_8_ = puVar16[2];
                local_1e8.m_Object.fields._current.fields.key = (Il2CppObject *)puVar16[3];
                local_1e8.m_Object.fields._current.fields.value = (Il2CppObject *)puVar16[4];
                local_1e8.m_Object.fields._32_8_ = puVar16[5];
                local_1e8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)puVar16[6];
                local_1e8.m_Array.fields._8_8_ = puVar16[7];
                local_1e8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)puVar16[8];
                bVar6 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                                  ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_1e8,(MethodInfo *)0x0);
                if (bVar6) {
                  do {
                    pSVar17 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                                        (&local_98,(SimpleJSONFixed_JSONNode_Enumerator_o *)&local_1e8,
                                         (MethodInfo *)0x0);
                    pSVar15 = (pSVar17->fields).key;
                    pSVar18 = (pSVar17->fields).value;
                    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
                    }
                    local_1f8.fields.key = pSVar15;
                    local_1f8.fields.value = pSVar18;
                    pSVar18 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4410(&local_1f8,(MethodInfo *)0x0);
                    __this_05 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptComponent);
                    Map_MapScriptComponent___ctor(__this_05,(MethodInfo *)0x0);
                    if (((pSVar18 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
                        (pSVar15 = (*(pSVar18->klass->vtable)._9_get_Value.methodPtr)
                                             (pSVar18,(pSVar18->klass->vtable)._9_get_Value.method),
                        __this_05 == (Map_MapScriptComponent_o *)0x0)) ||
                       ((*(__this_05->klass->vtable)._9_Deserialize.methodPtr)
                                  (__this_05,pSVar15,(__this_05->klass->vtable)._9_Deserialize.method),
                       (__this_03->fields).Components ==
                       (System_Collections_Generic_List_MapScriptComponent__o *)0x0)) goto label_181e85ccc;
                    il2cpp_runtime_helper_180012890();
                    bVar6 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                                      ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_1e8,
                                       (MethodInfo *)0x0);
                  } while (bVar6);
                }
              }
              bVar6 = (*(pSVar10->klass->vtable)._28_HasKey.methodPtr)
                                (pSVar10,(MethodInfo *)"ScaleX");
              if (bVar6) {
                pSVar13 = (*(pSVar10->klass->vtable)._7_get_Item.methodPtr)
                                    (pSVar10,(MethodInfo *)"ScaleX");
                if (pSVar13 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_181e85ccc;
                fVar20 = (float)(*(code *)((Il2CppClass *)pSVar13->klass)->vtable[37].methodPtr)
                                          (pSVar13,((Il2CppClass *)pSVar13->klass)->vtable[37].method);
                (__this_03->fields).ScaleX = fVar20;
              }
              bVar6 = (*(pSVar10->klass->vtable)._28_HasKey.methodPtr)
                                (pSVar10,(MethodInfo *)"ScaleY");
              if (bVar6) {
                pSVar13 = (*(pSVar10->klass->vtable)._7_get_Item.methodPtr)
                                    (pSVar10,(MethodInfo *)"ScaleY");
                if (pSVar13 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_181e85ccc;
                fVar20 = (float)(*(code *)((Il2CppClass *)pSVar13->klass)->vtable[37].methodPtr)
                                          (pSVar13,((Il2CppClass *)pSVar13->klass)->vtable[37].method);
                (__this_03->fields).ScaleX = fVar20;
              }
              bVar6 = (*(pSVar10->klass->vtable)._28_HasKey.methodPtr)
                                (pSVar10,(MethodInfo *)"ScaleZ");
              if (bVar6) {
                pSVar13 = (*(pSVar10->klass->vtable)._7_get_Item.methodPtr)
                                    (pSVar10,(MethodInfo *)"ScaleZ");
                if (pSVar13 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_181e85ccc;
                fVar20 = (float)(*(code *)((Il2CppClass *)pSVar13->klass)->vtable[37].methodPtr)
                                          (pSVar13,((Il2CppClass *)pSVar13->klass)->vtable[37].method);
                (__this_03->fields).ScaleX = fVar20;
              }
              bVar6 = (*(pSVar10->klass->vtable)._28_HasKey.methodPtr)
                                (pSVar10,(MethodInfo *)"Preview");
              if (bVar6) {
                if ((TypeInfo_Map_BuiltinMapPrefabs->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
                }
                pSVar15 = (__this_03->fields).Name;
                pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                         TypeInfo_Map_BuiltinMapPrefabs->static_fields->PrefabPreviews;
                pSVar13 = (*(pSVar10->klass->vtable)._7_get_Item.methodPtr)
                                    (pSVar10,(MethodInfo *)"Preview");
                if (pSVar13 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_181e85ccc;
                pSVar3 = pSVar13->klass;
                pIVar19 = (Il2CppObject *)
                          (*(pSVar3->vtable)._9_SetUnhandledAttributes.methodPtr)
                                    (pSVar13,(UnityEngine_GameObject_o *)
                                             (pSVar3->vtable)._9_SetUnhandledAttributes.method,
                                     (MethodInfo *)pSVar3);
                if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
                goto label_181e85ccc;
                System_Collections_Generic_Dictionary_object__object___Add
                          (pSVar2,(Il2CppObject *)pSVar15,pIVar19,
                           (MethodInfo_146B4B0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
              }
              bVar6 = (*(pSVar10->klass->vtable)._28_HasKey.methodPtr)
                                (pSVar10,(MethodInfo *)"Variant");
              if (bVar6) {
                pSVar13 = (*(pSVar10->klass->vtable)._7_get_Item.methodPtr)
                                    (pSVar10,(MethodInfo *)"Variant");
                if (pSVar13 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_181e85ccc;
                pSVar3 = pSVar13->klass;
                pSVar15 = (System_String_o *)
                          (*(pSVar3->vtable)._9_SetUnhandledAttributes.methodPtr)
                                    (pSVar13,(UnityEngine_GameObject_o *)
                                             (pSVar3->vtable)._9_SetUnhandledAttributes.method,
                                     (MethodInfo *)pSVar3);
                bVar6 = System_String__op_Inequality(pSVar15,(__this_03->fields).Name,(MethodInfo *)0x0);
                if (bVar6) {
                  if ((TypeInfo_Map_BuiltinMapPrefabs->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
                  }
                  __this_00 = TypeInfo_Map_BuiltinMapPrefabs->static_fields->PrefabVariants;
                  if (__this_00 == (System_Collections_Generic_Dictionary_string__List_string___o *)0x0)
                  goto label_181e85ccc;
                  bVar6 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                                     (Il2CppObject *)pSVar15,
                                     (MethodInfo_1455450 *)
                                     MethodInfo_System_Collections_Generic_Dictionary_string_List_string_ContainsKey
                                    );
                  if (!bVar6) {
                    if ((TypeInfo_Map_BuiltinMapPrefabs->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
                    }
                    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                             TypeInfo_Map_BuiltinMapPrefabs->static_fields->PrefabVariants;
                    __this_06 = il2cpp_codegen_object_new
                                          ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
                    System_Collections_Generic_List_object____ctor
                              ((System_Collections_Generic_LowLevelList_T__o *)__this_06,
                               (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
                    if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
                    goto label_181e85ccc;
                    System_Collections_Generic_Dictionary_object__object___Add
                              (pSVar2,(Il2CppObject *)pSVar15,(Il2CppObject *)__this_06,
                               (MethodInfo_146B4B0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_List_string_Add);
                  }
                  if ((TypeInfo_Map_BuiltinMapPrefabs->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
                  }
                  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                           TypeInfo_Map_BuiltinMapPrefabs->static_fields->PrefabVariants;
                  if ((pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
                     (pIVar19 = System_Collections_Generic_Dictionary_object__object___get_Item
                                          (pSVar2,(Il2CppObject *)pSVar15,
                                           (MethodInfo_147A5B0 *)
                                           MethodInfo_System_Collections_Generic_Dictionary_string_List_string_get_Item
                                          ), pIVar19 == (Il2CppObject *)0x0)) goto label_181e85ccc;
                  il2cpp_runtime_helper_180012890(pIVar19,(__this_03->fields).Name,
                                MethodInfo_System_Collections_Generic_List_string_Add);
                  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                           TypeInfo_Map_BuiltinMapPrefabs->static_fields->VariantToBasePrefab;
                  if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
                  goto label_181e85ccc;
                  System_Collections_Generic_Dictionary_object__object___set_Item
                            (pSVar2,(Il2CppObject *)(__this_03->fields).Name,(Il2CppObject *)pSVar15,
                             (MethodInfo_147A7F0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
                }
              }
              if ((TypeInfo_Map_BuiltinMapPrefabs->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
              }
              pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                       TypeInfo_Map_BuiltinMapPrefabs->static_fields->AllPrefabs;
              if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
              goto label_181e85ccc;
              System_Collections_Generic_Dictionary_object__object___Add
                        (pSVar2,(Il2CppObject *)(__this_03->fields).Name,(Il2CppObject *)__this_03,
                         (MethodInfo_146B4B0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBaseObject_Add);
              pSVar15 = (__this_03->fields).Name;
              if (pSVar15 == (System_String_o *)0x0) goto label_181e85ccc;
              pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                       TypeInfo_Map_BuiltinMapPrefabs->static_fields->AllPrefabsLower;
              pSVar15 = System_String__ToLower(pSVar15,(MethodInfo *)0x0);
              if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
              goto label_181e85ccc;
              System_Collections_Generic_Dictionary_object__object___Add
                        (pSVar2,(Il2CppObject *)pSVar15,(Il2CppObject *)__this_03,
                         (MethodInfo_146B4B0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBaseObject_Add);
              bVar6 = (*(pSVar10->klass->vtable)._28_HasKey.methodPtr)
                                (pSVar10,(MethodInfo *)"Hidden");
              if (bVar6) {
                pSVar13 = (*(pSVar10->klass->vtable)._7_get_Item.methodPtr)
                                    (pSVar10,(MethodInfo *)"Hidden");
                if (pSVar13 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_181e85ccc;
                cVar7 = (*(code *)((Il2CppClass *)pSVar13->klass)->vtable[39].methodPtr)(pSVar13);
                if (cVar7 == '\0') goto label_181e85c0b;
              }
              else {
label_181e85c0b:
                if ((TypeInfo_Map_BuiltinMapPrefabs->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
                }
                pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                         TypeInfo_Map_BuiltinMapPrefabs->static_fields->PrefabCategories;
                if ((pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
                   (pIVar19 = System_Collections_Generic_Dictionary_object__object___get_Item
                                        (pSVar2,(Il2CppObject *)key,
                                         (MethodInfo_147A5B0 *)
                                         MethodInfo_System_Collections_Generic_Dictionary_string_List_MapScriptBaseObject_get_Item
                                        ), pIVar19 == (Il2CppObject *)0x0)) goto label_181e85ccc;
                il2cpp_runtime_helper_180012890(pIVar19);
              }
              bVar6 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                                ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_198,(MethodInfo *)0x0);
            } while (bVar6);
          }
          bVar6 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                            ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_148,(MethodInfo *)0x0);
        } while (bVar6);
      }
      return;
    }
  }
label_181e85ccc:
  ThrowNullReferenceException();
}


// Map.BuiltinMapPrefabs$$.ctor
// il2cpp: void Map_BuiltinMapPrefabs___ctor (Map_BuiltinMapPrefabs_o* __this, const MethodInfo* method);
// 0x18054c890

void
Map_BuiltinMapPrefabs___ctor(Map_BuiltinMapPrefabs_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Map.BuiltinMapPrefabs$$.cctor
// il2cpp: void Map_BuiltinMapPrefabs___cctor (const MethodInfo* method);
// 0x181e85ce0

void Map_BuiltinMapPrefabs___cctor(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__MapScriptBaseObject__o *pSVar1;
  System_Collections_Generic_Dictionary_string__List_MapScriptBaseObject___o *__this;
  System_Collections_Generic_Dictionary_string__string__o *pSVar2;
  System_Collections_Generic_Dictionary_string__List_string___o *__this_00;
  
  if (Il2CppMethodInitialized_184345038 == '\0') {
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
    Il2CppMethodInitialized_184345038 = '\x01';
  }
  pSVar1 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_MapScriptBaseObject
                     );
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
             (MethodInfo_1454140 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBaseObject_ctor);
  TypeInfo_Map_BuiltinMapPrefabs->static_fields->AllPrefabs = pSVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_BuiltinMapPrefabs->static_fields->AllPrefabs,pSVar1);
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_System_Collections_Generic_Dictionary_string_List_MapScriptBaseObject);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
             (MethodInfo_1454140 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_List_MapScriptBaseObject_ctor);
  TypeInfo_Map_BuiltinMapPrefabs->static_fields->PrefabCategories = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_BuiltinMapPrefabs->static_fields->PrefabCategories,__this);
  pSVar1 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_MapScriptBaseObject
                     );
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
             (MethodInfo_1454140 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBaseObject_ctor);
  TypeInfo_Map_BuiltinMapPrefabs->static_fields->AllPrefabsLower = pSVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_BuiltinMapPrefabs->static_fields->AllPrefabsLower,pSVar1);
  pSVar2 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
  TypeInfo_Map_BuiltinMapPrefabs->static_fields->PrefabPreviews = pSVar2;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_BuiltinMapPrefabs->static_fields->PrefabPreviews,pSVar2);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_List_string);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_List_string_ctor);
  TypeInfo_Map_BuiltinMapPrefabs->static_fields->PrefabVariants = __this_00;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_BuiltinMapPrefabs->static_fields->PrefabVariants,__this_00);
  pSVar2 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
  TypeInfo_Map_BuiltinMapPrefabs->static_fields->VariantToBasePrefab = pSVar2;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_BuiltinMapPrefabs->static_fields->VariantToBasePrefab,pSVar2);
  return;
}


