// Type: Map.BuiltinMapTextures
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Map/BuiltinMapTextures.cs
// Prior real C# source (older reference): Assets/Scripts/Map/BuiltinMapTextures.cs
// --------------------------------

// Map.BuiltinMapTextures$$Init
// il2cpp: void Map_BuiltinMapTextures__Init (const MethodInfo* method);
// 0x59772f0
// asm: 7 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x597763c: lea rbx, [rsp + 0x10]
// asm:   0x5977641: lea rbp, [rsp + 0x60]
// asm:   0x5977646: jmp 0x5977667
// asm:   0x597779c: lea rax, [rip + 0x19142bd]  ; MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBasicMaterial_Add
// asm:   0x59777a3: mov rcx, qword ptr [rax]
// asm:   0x59777a6: mov rsi, r15
// asm:   0x59777a9: mov rdx, r14

void Map_BuiltinMapTextures__Init(MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  uint32_t uVar4;
  System_Collections_Generic_Dictionary_object__object__o *pSVar5;
  System_Object_array *pSVar6;
  bool bVar7;
  UnityEngine_Object_o *__this;
  System_String_o *pSVar8;
  SimpleJSONFixed_JSONNode_o *pSVar9;
  System_Collections_Generic_List_MapScriptBasicMaterial__o *__this_00;
  Map_MapScriptBasicMaterial_o *__this_01;
  SimpleJSONFixed_JSONNode_o *pSVar10;
  System_String_o *str2;
  System_String_o *pSVar11;
  System_Collections_Generic_List_object__o *__this_02;
  MethodInfo *pMVar12;
  System_Collections_Generic_Dictionary_string__string__o *__this_03;
  float fVar13;
  float fVar14;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o aKeyValue;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_1a8;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_158;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_110;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_c8;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_78;
  
  if (Il2CppMethodInitialized_075459cd == '\0') {
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
    Il2CppMethodInitialized_075459cd = '\x01';
  }
  local_1a8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_1a8.m_Array.fields._index = 0;
  local_1a8.m_Array.fields._version = 0;
  local_1a8.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_1a8.m_Object.fields._getEnumeratorRetType = 0;
  local_1a8.m_Object.fields._36_4_ = 0;
  local_1a8.m_Object.fields._version = 0;
  local_1a8.m_Object.fields._index = 0;
  local_1a8.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_1a8.type = 0;
  local_1a8._4_4_ = 0;
  local_1a8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_1a8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
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
  local_158.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_158.m_Array.fields._index = 0;
  local_158.m_Array.fields._version = 0;
  local_158.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_158.m_Object.fields._getEnumeratorRetType = 0;
  local_158.m_Object.fields._36_4_ = 0;
  local_158.m_Object.fields._version = 0;
  local_158.m_Object.fields._index = 0;
  local_158.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_158.type = 0;
  local_158._4_4_ = 0;
  local_158.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_158.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  pSVar8 = TypeInfo_Utility_ResourcePaths->static_fields->Info;
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  __this = ApplicationManagers_ResourceManager__LoadAsset
                     (pSVar8,"MapTextureList",false,false,(MethodInfo *)0x0);
  if (__this != (UnityEngine_Object_o *)0x0) {
    bVar2 = (TypeInfo_UnityEngine_TextAsset->_2).typeHierarchyDepth;
    if (((__this->klass->_2).typeHierarchyDepth < bVar2) ||
       ((__this->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_UnityEngine_TextAsset))
    {
      il2cpp_codegen_raise_invalid_cast_exception(__this);
    }
    pSVar8 = UnityEngine_TextAsset__get_text((UnityEngine_TextAsset_o *)__this,(MethodInfo *)0x0);
    pSVar9 = SimpleJSONFixed_JSON__Parse(pSVar8,(MethodInfo *)0x0);
    if ((TypeInfo_Map_BuiltinMapTextures->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapTextures);
    }
    TypeInfo_Map_BuiltinMapTextures->static_fields->_textureList = pSVar9;
    Il2CppCodeGenWriteBarrier(&TypeInfo_Map_BuiltinMapTextures->static_fields->_textureList);
    pSVar9 = TypeInfo_Map_BuiltinMapTextures->static_fields->_textureList;
    if (pSVar9 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      SimpleJSONFixed_JSONNode__get_Keys
                ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_110,pSVar9,(MethodInfo *)0x0);
      local_c8.m_Array.fields._current = local_110.m_Array.fields._current;
      local_c8.m_Array.fields._list = local_110.m_Array.fields._list;
      local_c8.m_Array.fields._index = local_110.m_Array.fields._index;
      local_c8.m_Array.fields._version = local_110.m_Array.fields._version;
      local_c8.m_Object.fields._current.fields.value = local_110.m_Object.fields._current.fields.value;
      local_c8.m_Object.fields._getEnumeratorRetType = local_110.m_Object.fields._getEnumeratorRetType;
      local_c8.m_Object.fields._36_4_ = local_110.m_Object.fields._36_4_;
      local_c8.m_Object.fields._version = local_110.m_Object.fields._version;
      local_c8.m_Object.fields._index = local_110.m_Object.fields._index;
      local_c8.m_Object.fields._current.fields.key = local_110.m_Object.fields._current.fields.key;
      local_c8.type = local_110.type;
      local_c8._4_4_ = local_110._4_4_;
      local_c8.m_Object.fields._dictionary = local_110.m_Object.fields._dictionary;
      SimpleJSONFixed_JSONNode_KeyEnumerator__GetEnumerator
                ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_78,
                 (SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_c8,(MethodInfo *)0x0);
      local_1a8.m_Array.fields._current = local_78.m_Array.fields._current;
      local_1a8.m_Array.fields._list = local_78.m_Array.fields._list;
      local_1a8.m_Array.fields._index = local_78.m_Array.fields._index;
      local_1a8.m_Array.fields._version = local_78.m_Array.fields._version;
      local_1a8.m_Object.fields._current.fields.value = local_78.m_Object.fields._current.fields.value;
      local_1a8.m_Object.fields._getEnumeratorRetType = local_78.m_Object.fields._getEnumeratorRetType;
      local_1a8.m_Object.fields._36_4_ = local_78.m_Object.fields._36_4_;
      local_1a8.m_Object.fields._version = local_78.m_Object.fields._version;
      local_1a8.m_Object.fields._index = local_78.m_Object.fields._index;
      local_1a8.m_Object.fields._current.fields.key = local_78.m_Object.fields._current.fields.key;
      local_1a8.type = local_78.type;
      local_1a8._4_4_ = local_78._4_4_;
      local_1a8.m_Object.fields._dictionary = local_78.m_Object.fields._dictionary;
      bVar7 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                        ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_1a8,(MethodInfo *)0x0);
      if (bVar7) {
        do {
          pSVar8 = SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current
                             ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_1a8,(MethodInfo *)0x0);
          if ((TypeInfo_Map_BuiltinMapTextures->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapTextures);
          }
          pSVar9 = TypeInfo_Map_BuiltinMapTextures->static_fields->_textureList;
          if (pSVar9 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05977b48;
          pSVar9 = (*(pSVar9->klass->vtable)._7_get_Item.methodPtr)
                             (pSVar9,pSVar8,(pSVar9->klass->vtable)._7_get_Item.method);
          pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
                   TypeInfo_Map_BuiltinMapTextures->static_fields->TextureCategories;
          __this_00 = il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_System_Collections_Generic_List_MapScriptBasicMaterial);
          System_Collections_Generic_List_object____ctor
                    ((System_Collections_Generic_List_object__o *)__this_00,
                     (MethodInfo_395C910 *)
                     MethodInfo_System_Collections_Generic_List_MapScriptBasicMaterial_ctor);
          if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05977b48;
          System_Collections_Generic_Dictionary_object__object___Add
                    (pSVar5,(Il2CppObject *)pSVar8,(Il2CppObject *)__this_00,
                     (MethodInfo_4AAD4E0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_List_MapScriptBasicMaterial_Add);
          if (pSVar9 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05977b48;
          (*(pSVar9->klass->vtable)._32_unknown.methodPtr)
                    (&local_110,pSVar9,(pSVar9->klass->vtable)._32_unknown.method);
          local_158.m_Array.fields._current = local_110.m_Array.fields._current;
          local_158.m_Array.fields._list = local_110.m_Array.fields._list;
          local_158.m_Array.fields._index = local_110.m_Array.fields._index;
          local_158.m_Array.fields._version = local_110.m_Array.fields._version;
          local_158.m_Object.fields._current.fields.value = local_110.m_Object.fields._current.fields.value;
          local_158.m_Object.fields._getEnumeratorRetType = local_110.m_Object.fields._getEnumeratorRetType;
          local_158.m_Object.fields._36_4_ = local_110.m_Object.fields._36_4_;
          local_158.m_Object.fields._version = local_110.m_Object.fields._version;
          local_158.m_Object.fields._index = local_110.m_Object.fields._index;
          local_158.m_Object.fields._current.fields.key = local_110.m_Object.fields._current.fields.key;
          local_158.type = local_110.type;
          local_158._4_4_ = local_110._4_4_;
          local_158.m_Object.fields._dictionary = local_110.m_Object.fields._dictionary;
          while( true ) {
            bVar7 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                              ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_158,(MethodInfo *)0x0);
            if (!bVar7) break;
            aKeyValue = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                                  ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_158,(MethodInfo *)0x0);
            if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
            }
            pSVar9 = SimpleJSONFixed_JSONNode__op_Implicit_57641c0(aKeyValue,(MethodInfo *)0x0);
            __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptBasicMaterial);
            Map_MapScriptBasicMaterial___ctor(__this_01,(MethodInfo *)0x0);
            if (pSVar9 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05977b48;
            pSVar10 = (*(pSVar9->klass->vtable)._7_get_Item.methodPtr)
                                (pSVar9,"Name",(pSVar9->klass->vtable)._7_get_Item.method);
            if (pSVar10 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05977b48;
            str2 = (*(pSVar10->klass->vtable)._9_get_Value.methodPtr)
                             (pSVar10,(pSVar10->klass->vtable)._9_get_Value.method);
            pSVar11 = System_String__Concat_5301f10(pSVar8,"/",str2,(MethodInfo *)0x0);
            if (__this_01 == (Map_MapScriptBasicMaterial_o *)0x0) goto label_05977b48;
            (__this_01->fields).Texture = pSVar11;
            Il2CppCodeGenWriteBarrier(&(__this_01->fields).Texture);
            bVar7 = (*(pSVar9->klass->vtable)._28_HasKey.methodPtr)
                              (pSVar9,"TilingX",(pSVar9->klass->vtable)._28_HasKey.method);
            fVar13 = 1.0;
            if (bVar7) {
              pSVar10 = (*(pSVar9->klass->vtable)._7_get_Item.methodPtr)
                                  (pSVar9,"TilingX",(pSVar9->klass->vtable)._7_get_Item.method);
              if (pSVar10 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05977b48;
              fVar13 = (*(pSVar10->klass->vtable)._37_get_AsFloat.methodPtr)
                                 (pSVar10,(pSVar10->klass->vtable)._37_get_AsFloat.method);
            }
            bVar7 = (*(pSVar9->klass->vtable)._28_HasKey.methodPtr)
                              (pSVar9,"TilingY",(pSVar9->klass->vtable)._28_HasKey.method);
            fVar14 = 1.0;
            if (bVar7) {
              pSVar10 = (*(pSVar9->klass->vtable)._7_get_Item.methodPtr)
                                  (pSVar9,"TilingY",(pSVar9->klass->vtable)._7_get_Item.method);
              if (pSVar10 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05977b48;
              fVar14 = (*(pSVar10->klass->vtable)._37_get_AsFloat.methodPtr)
                                 (pSVar10,(pSVar10->klass->vtable)._37_get_AsFloat.method);
            }
            (__this_01->fields).Tiling.fields.x = fVar13;
            (__this_01->fields).Tiling.fields.y = fVar14;
            if ((TypeInfo_Map_BuiltinMapTextures->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapTextures);
            }
            pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
                     TypeInfo_Map_BuiltinMapTextures->static_fields->AllTextures;
            if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05977b48;
            System_Collections_Generic_Dictionary_object__object___Add
                      (pSVar5,(Il2CppObject *)str2,(Il2CppObject *)__this_01,
                       (MethodInfo_4AAD4E0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBasicMaterial_Add);
            if (str2 == (System_String_o *)0x0) goto label_05977b48;
            pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
                     TypeInfo_Map_BuiltinMapTextures->static_fields->AllTexturesLower;
            pSVar11 = System_String__ToLower(str2,(MethodInfo *)0x0);
            if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05977b48;
            System_Collections_Generic_Dictionary_object__object___Add
                      (pSVar5,(Il2CppObject *)pSVar11,(Il2CppObject *)__this_01,
                       (MethodInfo_4AAD4E0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBasicMaterial_Add);
            pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
                     TypeInfo_Map_BuiltinMapTextures->static_fields->TextureCategories;
            if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05977b48;
            __this_02 = (System_Collections_Generic_List_object__o *)
                        System_Collections_Generic_Dictionary_object__object___get_Item
                                  (pSVar5,(Il2CppObject *)pSVar8,
                                   (MethodInfo_4AAD450 *)
                                   MethodInfo_System_Collections_Generic_Dictionary_string_List_MapScriptBasicMaterial_get_Item
                                  );
            pMVar12 = MethodInfo_System_Collections_Generic_List_MapScriptBasicMaterial_Add;
            if (__this_02 == (System_Collections_Generic_List_object__o *)0x0) goto label_05977b48;
            piVar1 = &(__this_02->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar6 = (__this_02->fields)._items;
            if (pSVar6 == (System_Object_array *)0x0) goto label_05977b48;
            uVar3 = (__this_02->fields)._size;
            if (uVar3 < (uint)pSVar6->max_length) {
              (__this_02->fields)._size = uVar3 + 1;
              pSVar6->m_Items[(int)uVar3] = (Il2CppObject *)__this_01;
              Il2CppCodeGenWriteBarrier(pSVar6->m_Items + (int)uVar3);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        (__this_02,(Il2CppObject *)__this_01,
                         (MethodInfo_395D230 *)pMVar12->klass->rgctx_data[0xe].method);
            }
            bVar7 = System_String__op_Equality(pSVar8,"Legacy",(MethodInfo *)0x0);
            uVar4 = (TypeInfo_Map_BuiltinMapTextures->_2).cctor_finished_or_no_cctor;
            if (bVar7) {
              if (uVar4 == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapTextures);
              }
              __this_03 = TypeInfo_Map_BuiltinMapTextures->static_fields->LegacyTexturePaths;
              pSVar9 = (*(pSVar9->klass->vtable)._7_get_Item.methodPtr)
                                 (pSVar9,"Texture",(pSVar9->klass->vtable)._7_get_Item.method);
              if (pSVar9 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05977b48;
              __this_01 = (Map_MapScriptBasicMaterial_o *)
                          (*(pSVar9->klass->vtable)._9_get_Value.methodPtr)
                                    (pSVar9,(pSVar9->klass->vtable)._9_get_Value.method);
              if (__this_03 == (System_Collections_Generic_Dictionary_string__string__o *)0x0)
              goto label_05977b48;
              pMVar12 = MethodInfo_System_Collections_Generic_Dictionary_string_string_Add;
            }
            else {
              if (uVar4 == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapTextures);
                __this_03 = (System_Collections_Generic_Dictionary_string__string__o *)
                            TypeInfo_Map_BuiltinMapTextures->static_fields->AllTexturesNoLegacy;
                pMVar12 = MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBasicMaterial_Add;
              }
              else {
                __this_03 = (System_Collections_Generic_Dictionary_string__string__o *)
                            TypeInfo_Map_BuiltinMapTextures->static_fields->AllTexturesNoLegacy;
                pMVar12 = MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBasicMaterial_Add;
              }
              MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBasicMaterial_Add = pMVar12;
              if (__this_03 == (System_Collections_Generic_Dictionary_string__string__o *)0x0)
              goto label_05977b48;
            }
            System_Collections_Generic_Dictionary_object__object___Add
                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                       (Il2CppObject *)str2,(Il2CppObject *)__this_01,(MethodInfo_4AAD4E0 *)pMVar12);
          }
          bVar7 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                            ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_1a8,(MethodInfo *)0x0);
        } while (bVar7);
      }
      return;
    }
  }
label_05977b48:
  ThrowNullReferenceException();
}


// Map.BuiltinMapTextures$$.ctor
// il2cpp: void Map_BuiltinMapTextures___ctor (Map_BuiltinMapTextures_o* __this, const MethodInfo* method);
// 0x5977b70

void Map_BuiltinMapTextures___ctor(Map_BuiltinMapTextures_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Map.BuiltinMapTextures$$.cctor
// il2cpp: void Map_BuiltinMapTextures___cctor (const MethodInfo* method);
// 0x5977b80

void Map_BuiltinMapTextures___cctor(MethodInfo *method)

{
  Map_BuiltinMapTextures_StaticFields *pMVar1;
  System_Collections_Generic_Dictionary_string__MapScriptBasicMaterial__o *pSVar2;
  System_Collections_Generic_Dictionary_string__List_MapScriptBasicMaterial___o *__this;
  System_Collections_Generic_Dictionary_string__string__o *__this_00;
  
  if (Il2CppMethodInitialized_075459ce == '\0') {
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
    Il2CppMethodInitialized_075459ce = '\x01';
  }
  pSVar2 = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_System_Collections_Generic_Dictionary_string_MapScriptBasicMaterial);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)pSVar2,
             (MethodInfo_4AAC8D0 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBasicMaterial_ctor);
  pMVar1 = TypeInfo_Map_BuiltinMapTextures->static_fields;
  pMVar1->AllTextures = pSVar2;
  Il2CppCodeGenWriteBarrier(&pMVar1->AllTextures);
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_System_Collections_Generic_Dictionary_string_List_MapScriptBasicMaterial);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this,
             (MethodInfo_4AAC8D0 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_List_MapScriptBasicMaterial_ctor);
  pMVar1 = TypeInfo_Map_BuiltinMapTextures->static_fields;
  pMVar1->TextureCategories = __this;
  Il2CppCodeGenWriteBarrier(&pMVar1->TextureCategories);
  pSVar2 = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_System_Collections_Generic_Dictionary_string_MapScriptBasicMaterial);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)pSVar2,
             (MethodInfo_4AAC8D0 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBasicMaterial_ctor);
  pMVar1 = TypeInfo_Map_BuiltinMapTextures->static_fields;
  pMVar1->AllTexturesLower = pSVar2;
  Il2CppCodeGenWriteBarrier(&pMVar1->AllTexturesLower);
  pSVar2 = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_System_Collections_Generic_Dictionary_string_MapScriptBasicMaterial);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)pSVar2,
             (MethodInfo_4AAC8D0 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBasicMaterial_ctor);
  pMVar1 = TypeInfo_Map_BuiltinMapTextures->static_fields;
  pMVar1->AllTexturesNoLegacy = pSVar2;
  Il2CppCodeGenWriteBarrier(&pMVar1->AllTexturesNoLegacy);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
  pMVar1 = TypeInfo_Map_BuiltinMapTextures->static_fields;
  pMVar1->LegacyTexturePaths = __this_00;
  Il2CppCodeGenWriteBarrier(&pMVar1->LegacyTexturePaths);
  return;
}


