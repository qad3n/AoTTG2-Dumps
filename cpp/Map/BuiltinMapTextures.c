// Type: Map.BuiltinMapTextures
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Map/BuiltinMapTextures.cs
// Prior real C# source (older reference): Assets/Scripts/Map/BuiltinMapTextures.cs
// --------------------------------

// Map.BuiltinMapTextures$$Init
// il2cpp: void Map_BuiltinMapTextures__Init (const MethodInfo* method);
// 0x181e85f30
// asm: 8 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e86241: movss xmm7, dword ptr [rip + 0x14d29bf]
// asm:   0x181e86249: nop dword ptr [rax]
// asm:   0x181e865f2: mov r9, qword ptr [rip + 0x225308f]  ; MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBasicMaterial_Add
// asm:   0x181e865f9: mov r8, rdi
// asm:   0x181e865fc: jmp 0x181e8666a
// asm:   0x181e8665d: mov r9, qword ptr [rip + 0x225732c]  ; MethodInfo_System_Collections_Generic_Dictionary_string_string_Add
// asm:   0x181e86664: mov r8, rax
// asm:   0x181e86667: mov rcx, rdi

void Map_BuiltinMapTextures__Init(MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  System_Xml_Schema_XmlSchema_c *pSVar3;
  SimpleJSONFixed_JSONNode_Enumerator_o *pSVar4;
  MethodInfo *method_00;
  bool bVar5;
  UnityEngine_Object_o *__this;
  System_String_o *pSVar6;
  SimpleJSONFixed_JSONNode_o *pSVar7;
  SimpleJSONFixed_JSONNode_ValueEnumerator_o *pSVar8;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o *pSVar9;
  MethodInfo *str0;
  System_Xml_Schema_XmlSchema_o *pSVar10;
  System_Collections_Generic_List_MapScriptBasicMaterial__o *__this_00;
  undefined8 *puVar11;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o *pSVar12;
  Map_MapScriptBasicMaterial_o *__this_01;
  System_String_o *pSVar13;
  Il2CppObject *pIVar14;
  float fVar15;
  float fVar16;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_198;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_148;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_f8;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_a8;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_98;
  SimpleJSONFixed_JSONNode_ValueEnumerator_o local_88;
  
  if (Il2CppMethodInitialized_184345039 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinMapTextures);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_MapScriptBasicMaterial_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBasicMaterial_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_MapScriptBasicMaterial_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapScriptBasicMaterial_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapScriptBasicMaterial_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_MapScriptBasicMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptBasicMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_TextAsset);
    il2cpp_codegen_initialize_runtime_metadata(&"TilingX");
    il2cpp_codegen_initialize_runtime_metadata(&"MapTextureList");
    il2cpp_codegen_initialize_runtime_metadata(&"TilingY");
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    il2cpp_codegen_initialize_runtime_metadata(&"Texture");
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    il2cpp_codegen_initialize_runtime_metadata(&"Legacy");
    Il2CppMethodInitialized_184345039 = '\x01';
  }
  local_148.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_f8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_198.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
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
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  pSVar6 = TypeInfo_Utility_ResourcePaths->static_fields->Info;
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  __this = ApplicationManagers_ResourceManager__LoadAsset
                     (pSVar6,"MapTextureList",false,(MethodInfo *)0x0);
  if (__this != (UnityEngine_Object_o *)0x0) {
    bVar1 = (TypeInfo_UnityEngine_TextAsset->_2).typeHierarchyDepth;
    if (((__this->klass->_2).typeHierarchyDepth < bVar1) ||
       ((__this->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_UnityEngine_TextAsset)) {
      il2cpp_codegen_raise_invalid_cast_exception(__this,TypeInfo_UnityEngine_TextAsset);
    }
    pSVar6 = UnityEngine_TextAsset__ToString((UnityEngine_TextAsset_o *)__this,(MethodInfo *)0x0);
    pSVar7 = SimpleJSONFixed_JSON__Parse(pSVar6,(MethodInfo *)0x0);
    if ((TypeInfo_Map_BuiltinMapTextures->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapTextures);
    }
    TypeInfo_Map_BuiltinMapTextures->static_fields->_textureList = pSVar7;
    Il2CppCodeGenWriteBarrier(&TypeInfo_Map_BuiltinMapTextures->static_fields->_textureList,pSVar7);
    pSVar7 = TypeInfo_Map_BuiltinMapTextures->static_fields->_textureList;
    if (pSVar7 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar8 = SimpleJSONFixed_JSONNode__get_Values(&local_88,pSVar7,(MethodInfo *)0x0);
      local_f8.type = (pSVar8->fields).m_Enumerator.fields.type;
      local_f8._4_4_ = *(undefined4 *)&(pSVar8->fields).m_Enumerator.fields.field_0x4;
      local_f8.m_Object.fields._dictionary = (pSVar8->fields).m_Enumerator.fields.m_Object.fields._dictionary;
      pSVar4 = &(pSVar8->fields).m_Enumerator;
      local_f8.m_Object.fields._version = (pSVar4->fields).m_Object.fields._version;
      local_f8.m_Object.fields._index = (pSVar4->fields).m_Object.fields._index;
      local_f8.m_Object.fields._current.fields.key =
           (pSVar8->fields).m_Enumerator.fields.m_Object.fields._current.fields.key;
      local_f8.m_Object.fields._current.fields.value =
           (pSVar8->fields).m_Enumerator.fields.m_Object.fields._current.fields.value;
      pSVar4 = &(pSVar8->fields).m_Enumerator;
      local_f8.m_Object.fields._getEnumeratorRetType = (pSVar4->fields).m_Object.fields._getEnumeratorRetType;
      local_f8.m_Object.fields._36_4_ = *(undefined4 *)&(pSVar4->fields).m_Object.fields.field_0x24;
      local_f8.m_Array.fields._list = (pSVar8->fields).m_Enumerator.fields.m_Array.fields._list;
      pSVar4 = &(pSVar8->fields).m_Enumerator;
      local_f8.m_Array.fields._index = (pSVar4->fields).m_Array.fields._index;
      local_f8.m_Array.fields._version = (pSVar4->fields).m_Array.fields._version;
      local_f8.m_Array.fields._current = (pSVar8->fields).m_Enumerator.fields.m_Array.fields._current;
      pSVar9 = SimpleJSONFixed_JSONNode_KeyEnumerator__GetEnumerator
                         ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_88,
                          (SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_f8,(MethodInfo *)0x0);
      local_148.type = (pSVar9->fields).m_Enumerator.fields.type;
      local_148._4_4_ = *(undefined4 *)&(pSVar9->fields).m_Enumerator.fields.field_0x4;
      local_148.m_Object.fields._dictionary = (pSVar9->fields).m_Enumerator.fields.m_Object.fields._dictionary
      ;
      pSVar4 = &(pSVar9->fields).m_Enumerator;
      local_148.m_Object.fields._version = (pSVar4->fields).m_Object.fields._version;
      local_148.m_Object.fields._index = (pSVar4->fields).m_Object.fields._index;
      local_148.m_Object.fields._current.fields.key =
           (pSVar9->fields).m_Enumerator.fields.m_Object.fields._current.fields.key;
      local_148.m_Object.fields._current.fields.value =
           (pSVar9->fields).m_Enumerator.fields.m_Object.fields._current.fields.value;
      pSVar4 = &(pSVar9->fields).m_Enumerator;
      local_148.m_Object.fields._getEnumeratorRetType = (pSVar4->fields).m_Object.fields._getEnumeratorRetType
      ;
      local_148.m_Object.fields._36_4_ = *(undefined4 *)&(pSVar4->fields).m_Object.fields.field_0x24;
      local_148.m_Array.fields._list = (pSVar9->fields).m_Enumerator.fields.m_Array.fields._list;
      pSVar4 = &(pSVar9->fields).m_Enumerator;
      local_148.m_Array.fields._index = (pSVar4->fields).m_Array.fields._index;
      local_148.m_Array.fields._version = (pSVar4->fields).m_Array.fields._version;
      local_148.m_Array.fields._current = (pSVar9->fields).m_Enumerator.fields.m_Array.fields._current;
      bVar5 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                        ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_148,(MethodInfo *)0x0);
      if (bVar5) {
        do {
          str0 = (MethodInfo *)
                 SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current
                           ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_148,(MethodInfo *)0x0);
          if ((TypeInfo_Map_BuiltinMapTextures->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapTextures);
          }
          pSVar7 = TypeInfo_Map_BuiltinMapTextures->static_fields->_textureList;
          if (pSVar7 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_181e866d4;
          pSVar10 = (*(pSVar7->klass->vtable)._7_get_Item.methodPtr)(pSVar7,str0);
          pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                   TypeInfo_Map_BuiltinMapTextures->static_fields->TextureCategories;
          __this_00 = il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_System_Collections_Generic_List_MapScriptBasicMaterial);
          System_Collections_Generic_List_object____ctor
                    ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
                     (MethodInfo_92A240 *)
                     MethodInfo_System_Collections_Generic_List_MapScriptBasicMaterial_ctor);
          if ((pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
             (System_Collections_Generic_Dictionary_object__object___Add
                        (pSVar2,(Il2CppObject *)str0,(Il2CppObject *)__this_00,
                         (MethodInfo_146B4B0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_List_MapScriptBasicMaterial_Add
                        ), pSVar10 == (System_Xml_Schema_XmlSchema_o *)0x0)) goto label_181e866d4;
          puVar11 = (undefined8 *)(**(code **)&((Il2CppClass *)pSVar10->klass)->vtable[32].methodPtr)(&local_88);
          local_198._0_8_ = *puVar11;
          local_198.m_Object.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)puVar11[1];
          local_198.m_Object.fields._8_8_ = puVar11[2];
          local_198.m_Object.fields._current.fields.key = (Il2CppObject *)puVar11[3];
          local_198.m_Object.fields._current.fields.value = (Il2CppObject *)puVar11[4];
          local_198.m_Object.fields._32_8_ = puVar11[5];
          local_198.m_Array.fields._list = (System_Collections_Generic_List_T__o *)puVar11[6];
          local_198.m_Array.fields._8_8_ = puVar11[7];
          local_198.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)puVar11[8];
          bVar5 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                            ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_198,(MethodInfo *)0x0);
          if (bVar5) {
            do {
              pSVar12 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                                  (&local_98,(SimpleJSONFixed_JSONNode_Enumerator_o *)&local_198,
                                   (MethodInfo *)0x0);
              pSVar6 = (pSVar12->fields).key;
              pSVar7 = (pSVar12->fields).value;
              if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
              }
              local_a8.fields.key = pSVar6;
              local_a8.fields.value = pSVar7;
              pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4410(&local_a8,(MethodInfo *)0x0);
              __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptBasicMaterial);
              Map_MapScriptBasicMaterial___ctor(__this_01,(MethodInfo *)0x0);
              if ((pSVar7 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
                 (pSVar10 = (*(pSVar7->klass->vtable)._7_get_Item.methodPtr)
                                      (pSVar7,(MethodInfo *)"Name"),
                 pSVar10 == (System_Xml_Schema_XmlSchema_o *)0x0)) goto label_181e866d4;
              pSVar3 = pSVar10->klass;
              pSVar6 = (System_String_o *)
                       (*(pSVar3->vtable)._9_SetUnhandledAttributes.methodPtr)
                                 (pSVar10,(UnityEngine_GameObject_o *)
                                          (pSVar3->vtable)._9_SetUnhandledAttributes.method,
                                  (MethodInfo *)pSVar3);
              pSVar13 = System_String__Concat_1969b70
                                  ((System_String_o *)str0,"/",pSVar6,(MethodInfo *)0x0);
              if (__this_01 == (Map_MapScriptBasicMaterial_o *)0x0) goto label_181e866d4;
              (__this_01->fields).Texture = pSVar13;
              Il2CppCodeGenWriteBarrier(&(__this_01->fields).Texture,pSVar13);
              bVar5 = (*(pSVar7->klass->vtable)._28_HasKey.methodPtr)
                                (pSVar7,(MethodInfo *)"TilingX");
              if (bVar5) {
                pSVar10 = (*(pSVar7->klass->vtable)._7_get_Item.methodPtr)
                                    (pSVar7,(MethodInfo *)"TilingX");
                if (pSVar10 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_181e866d4;
                fVar15 = (float)(*(code *)((Il2CppClass *)pSVar10->klass)->vtable[37].methodPtr)
                                          (pSVar10,((Il2CppClass *)pSVar10->klass)->vtable[37].method);
              }
              else {
                fVar15 = 1.0;
              }
              bVar5 = (*(pSVar7->klass->vtable)._28_HasKey.methodPtr)
                                (pSVar7,(MethodInfo *)"TilingY");
              if (bVar5) {
                pSVar10 = (*(pSVar7->klass->vtable)._7_get_Item.methodPtr)
                                    (pSVar7,(MethodInfo *)"TilingY");
                if (pSVar10 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_181e866d4;
                fVar16 = (float)(*(code *)((Il2CppClass *)pSVar10->klass)->vtable[37].methodPtr)
                                          (pSVar10,((Il2CppClass *)pSVar10->klass)->vtable[37].method);
              }
              else {
                fVar16 = 1.0;
              }
              (__this_01->fields).Tiling.fields.x = fVar15;
              (__this_01->fields).Tiling.fields.y = fVar16;
              if ((TypeInfo_Map_BuiltinMapTextures->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapTextures);
              }
              pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                       TypeInfo_Map_BuiltinMapTextures->static_fields->AllTextures;
              if ((pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
                 (System_Collections_Generic_Dictionary_object__object___Add
                            (pSVar2,(Il2CppObject *)pSVar6,(Il2CppObject *)__this_01,
                             (MethodInfo_146B4B0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBasicMaterial_Add
                            ), pSVar6 == (System_String_o *)0x0)) goto label_181e866d4;
              pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                       TypeInfo_Map_BuiltinMapTextures->static_fields->AllTexturesLower;
              pSVar13 = System_String__ToLower(pSVar6,(MethodInfo *)0x0);
              if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
              goto label_181e866d4;
              System_Collections_Generic_Dictionary_object__object___Add
                        (pSVar2,(Il2CppObject *)pSVar13,(Il2CppObject *)__this_01,
                         (MethodInfo_146B4B0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBasicMaterial_Add);
              pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                       TypeInfo_Map_BuiltinMapTextures->static_fields->TextureCategories;
              if ((pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
                 (pIVar14 = System_Collections_Generic_Dictionary_object__object___get_Item
                                      (pSVar2,(Il2CppObject *)str0,
                                       (MethodInfo_147A5B0 *)
                                       MethodInfo_System_Collections_Generic_Dictionary_string_List_MapScriptBasicMaterial_get_Item
                                      ), pIVar14 == (Il2CppObject *)0x0)) goto label_181e866d4;
              il2cpp_runtime_helper_180012890(pIVar14,__this_01);
              bVar5 = System_String__op_Equality
                                ((System_String_o *)str0,"Legacy",(MethodInfo *)0x0);
              if (bVar5) {
                if ((TypeInfo_Map_BuiltinMapTextures->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapTextures);
                }
                pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                         TypeInfo_Map_BuiltinMapTextures->static_fields->LegacyTexturePaths;
                pSVar10 = (*(pSVar7->klass->vtable)._7_get_Item.methodPtr)
                                    (pSVar7,(MethodInfo *)"Texture");
                if (pSVar10 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_181e866d4;
                pSVar3 = pSVar10->klass;
                __this_01 = (Map_MapScriptBasicMaterial_o *)
                            (*(pSVar3->vtable)._9_SetUnhandledAttributes.methodPtr)
                                      (pSVar10,(UnityEngine_GameObject_o *)
                                               (pSVar3->vtable)._9_SetUnhandledAttributes.method,
                                       (MethodInfo *)pSVar3);
                method_00 = MethodInfo_System_Collections_Generic_Dictionary_string_string_Add;
              }
              else {
                if ((TypeInfo_Map_BuiltinMapTextures->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapTextures);
                }
                pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                         TypeInfo_Map_BuiltinMapTextures->static_fields->AllTexturesNoLegacy;
                method_00 = MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBasicMaterial_Add
                ;
              }
              if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
              goto label_181e866d4;
              System_Collections_Generic_Dictionary_object__object___Add
                        (pSVar2,(Il2CppObject *)pSVar6,(Il2CppObject *)__this_01,
                         (MethodInfo_146B4B0 *)method_00);
              bVar5 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                                ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_198,(MethodInfo *)0x0);
            } while (bVar5);
          }
          bVar5 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                            ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_148,(MethodInfo *)0x0);
        } while (bVar5);
      }
      return;
    }
  }
label_181e866d4:
  ThrowNullReferenceException();
}


// Map.BuiltinMapTextures$$.ctor
// il2cpp: void Map_BuiltinMapTextures___ctor (Map_BuiltinMapTextures_o* __this, const MethodInfo* method);
// 0x18054c890

void
Map_BuiltinMapTextures___ctor(Map_BuiltinMapTextures_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Map.BuiltinMapTextures$$.cctor
// il2cpp: void Map_BuiltinMapTextures___cctor (const MethodInfo* method);
// 0x181e866f0

void Map_BuiltinMapTextures___cctor(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__MapScriptBasicMaterial__o *pSVar1;
  System_Collections_Generic_Dictionary_string__List_MapScriptBasicMaterial___o *__this;
  System_Collections_Generic_Dictionary_string__string__o *__this_00;
  
  if (Il2CppMethodInitialized_18434503a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinMapTextures);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBasicMaterial_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_MapScriptBasicMaterial_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_MapScriptBasicMaterial);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_List_MapScriptBasicMaterial);
    Il2CppMethodInitialized_18434503a = '\x01';
  }
  pSVar1 = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_System_Collections_Generic_Dictionary_string_MapScriptBasicMaterial);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
             (MethodInfo_1454140 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBasicMaterial_ctor);
  TypeInfo_Map_BuiltinMapTextures->static_fields->AllTextures = pSVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_BuiltinMapTextures->static_fields->AllTextures,pSVar1);
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_System_Collections_Generic_Dictionary_string_List_MapScriptBasicMaterial);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
             (MethodInfo_1454140 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_List_MapScriptBasicMaterial_ctor);
  TypeInfo_Map_BuiltinMapTextures->static_fields->TextureCategories = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_BuiltinMapTextures->static_fields->TextureCategories,__this);
  pSVar1 = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_System_Collections_Generic_Dictionary_string_MapScriptBasicMaterial);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
             (MethodInfo_1454140 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBasicMaterial_ctor);
  TypeInfo_Map_BuiltinMapTextures->static_fields->AllTexturesLower = pSVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_BuiltinMapTextures->static_fields->AllTexturesLower,pSVar1);
  pSVar1 = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_System_Collections_Generic_Dictionary_string_MapScriptBasicMaterial);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
             (MethodInfo_1454140 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBasicMaterial_ctor);
  TypeInfo_Map_BuiltinMapTextures->static_fields->AllTexturesNoLegacy = pSVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_BuiltinMapTextures->static_fields->AllTexturesNoLegacy,pSVar1);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
  TypeInfo_Map_BuiltinMapTextures->static_fields->LegacyTexturePaths = __this_00;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_BuiltinMapTextures->static_fields->LegacyTexturePaths,__this_00);
  return;
}


