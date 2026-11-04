// Type: Characters.BasicTitanSetup
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Characters/BasicTitanSetup.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Titan/BasicTitanSetup.cs
// --------------------------------

// Characters.BasicTitanSetup$$Init
// il2cpp: void Characters_BasicTitanSetup__Init (const MethodInfo* method);
// 0x18219eef0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18219f667: nop word ptr [rax + rax]
// asm:   0x18219f6f0: mov ebx, r13d
// asm:   0x18219f6f3: nop dword ptr [rax]
// asm:   0x18219f6f7: nop word ptr [rax + rax]

void Characters_BasicTitanSetup__Init(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_Color255__o *__this;
  Utility_Color255_array *pUVar3;
  System_Collections_Generic_List_int__o *pSVar4;
  MethodInfo *pMVar5;
  bool bVar6;
  int32_t iVar7;
  int32_t tryEnd;
  int32_t finallyStart;
  int32_t finallyEnd;
  System_String_o *pSVar8;
  SimpleJSONFixed_JSONNode_o *pSVar9;
  System_Xml_Schema_XmlSchema_o *pSVar10;
  undefined8 uVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o *pSVar14;
  Utility_Color255_o *__this_00;
  System_Collections_Generic_HashSet_int__o *__this_01;
  int item;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_f8;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_a8;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_98;
  undefined1 local_88 [96];
  
  if (Il2CppMethodInitialized_184346e38 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitanSetup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Color255_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&"HeadCount");
    il2cpp_codegen_initialize_runtime_metadata(&"TitanSetupInfo");
    il2cpp_codegen_initialize_runtime_metadata(&"BodyCount");
    il2cpp_codegen_initialize_runtime_metadata(&"HairColors");
    il2cpp_codegen_initialize_runtime_metadata(&"EyeCount");
    il2cpp_codegen_initialize_runtime_metadata(&"AIExcludedEyes");
    il2cpp_codegen_initialize_runtime_metadata(&"HairF");
    il2cpp_codegen_initialize_runtime_metadata(&"HairM");
    Il2CppMethodInitialized_184346e38 = '\x01';
  }
  local_f8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
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
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  pSVar8 = TypeInfo_Utility_ResourcePaths->static_fields->CharacterData;
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  pSVar8 = ApplicationManagers_ResourceManager__TryLoadText(pSVar8,"TitanSetupInfo",(MethodInfo *)0x0);
  pSVar9 = SimpleJSONFixed_JSON__Parse(pSVar8,(MethodInfo *)0x0);
  if ((TypeInfo_Characters_BasicTitanSetup->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitanSetup);
  }
  TypeInfo_Characters_BasicTitanSetup->static_fields->Info = pSVar9;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_BasicTitanSetup->static_fields->Info,pSVar9);
  pSVar9 = TypeInfo_Characters_BasicTitanSetup->static_fields->Info;
  if ((pSVar9 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
     (pSVar10 = (*(pSVar9->klass->vtable)._7_get_Item.methodPtr)(pSVar9,(MethodInfo *)"BodyCount"),
     pSVar10 != (System_Xml_Schema_XmlSchema_o *)0x0)) {
    iVar7 = (*(code *)*(MethodInfo **)((longlong)&((Il2CppClass *)pSVar10->klass)->vtable[34].method + 8))
                      (pSVar10,((Il2CppClass *)pSVar10->klass)->vtable[35].method);
    TypeInfo_Characters_BasicTitanSetup->static_fields->BodyCount = iVar7;
    pSVar9 = TypeInfo_Characters_BasicTitanSetup->static_fields->Info;
    if ((pSVar9 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
       (pSVar10 = (*(pSVar9->klass->vtable)._7_get_Item.methodPtr)(pSVar9,(MethodInfo *)"HeadCount")
       , pSVar10 != (System_Xml_Schema_XmlSchema_o *)0x0)) {
      iVar7 = (*(code *)*(MethodInfo **)((longlong)&((Il2CppClass *)pSVar10->klass)->vtable[34].method + 8))
                        (pSVar10,((Il2CppClass *)pSVar10->klass)->vtable[35].method);
      TypeInfo_Characters_BasicTitanSetup->static_fields->HeadCount = iVar7;
      pSVar9 = TypeInfo_Characters_BasicTitanSetup->static_fields->Info;
      if ((pSVar9 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
         (pSVar10 = (*(pSVar9->klass->vtable)._7_get_Item.methodPtr)
                              (pSVar9,(MethodInfo *)"EyeCount"),
         pSVar10 != (System_Xml_Schema_XmlSchema_o *)0x0)) {
        iVar7 = (*(code *)*(MethodInfo **)((longlong)&((Il2CppClass *)pSVar10->klass)->vtable[34].method + 8))
                          (pSVar10,((Il2CppClass *)pSVar10->klass)->vtable[35].method);
        TypeInfo_Characters_BasicTitanSetup->static_fields->EyeCount = iVar7;
        pSVar9 = TypeInfo_Characters_BasicTitanSetup->static_fields->Info;
        if ((pSVar9 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
           (pSVar10 = (*(pSVar9->klass->vtable)._7_get_Item.methodPtr)
                                (pSVar9,(MethodInfo *)"HairM"),
           pSVar10 != (System_Xml_Schema_XmlSchema_o *)0x0)) {
          uVar11 = (*(pSVar10->klass->vtable)._11_get_NameAttribute.methodPtr)
                             (pSVar10,*(MethodInfo **)
                                       ((longlong)&(pSVar10->klass->vtable)._11_get_NameAttribute + 8));
          TypeInfo_Characters_BasicTitanSetup->static_fields->HairMCount = (int32_t)uVar11;
          pSVar9 = TypeInfo_Characters_BasicTitanSetup->static_fields->Info;
          if ((pSVar9 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
             (pSVar10 = (*(pSVar9->klass->vtable)._7_get_Item.methodPtr)
                                  (pSVar9,(MethodInfo *)"HairF"),
             pSVar10 != (System_Xml_Schema_XmlSchema_o *)0x0)) {
            uVar11 = (*(pSVar10->klass->vtable)._11_get_NameAttribute.methodPtr)
                               (pSVar10,*(MethodInfo **)
                                         ((longlong)&(pSVar10->klass->vtable)._11_get_NameAttribute + 8));
            TypeInfo_Characters_BasicTitanSetup->static_fields->HairFCount = (int32_t)uVar11;
            Characters_BasicTitanSetup__LoadHairs("HairM",(MethodInfo *)0x0);
            Characters_BasicTitanSetup__LoadHairs("HairF",(MethodInfo *)0x0);
            pSVar9 = TypeInfo_Characters_BasicTitanSetup->static_fields->Info;
            if ((pSVar9 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
               ((pSVar10 = (*(pSVar9->klass->vtable)._7_get_Item.methodPtr)
                                     (pSVar9,(MethodInfo *)"HairColors"),
                pSVar10 != (System_Xml_Schema_XmlSchema_o *)0x0 &&
                (plVar12 = (longlong *)
                           (*(code *)*(MethodInfo **)
                                      ((longlong)&((Il2CppClass *)pSVar10->klass)->vtable[44].method + 8))
                                     (pSVar10,((Il2CppClass *)pSVar10->klass)->vtable[45].method),
                plVar12 != (longlong *)0x0)))) {
              puVar13 = (undefined8 *)(**(code **)(*plVar12 + 0x338))(local_88);
              local_f8._0_8_ = *puVar13;
              local_f8.m_Object.fields._dictionary =
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)puVar13[1];
              local_f8.m_Object.fields._8_8_ = puVar13[2];
              local_f8.m_Object.fields._current.fields.key = (Il2CppObject *)puVar13[3];
              local_f8.m_Object.fields._current.fields.value = (Il2CppObject *)puVar13[4];
              local_f8.m_Object.fields._32_8_ = puVar13[5];
              local_f8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)puVar13[6];
              local_f8.m_Array.fields._8_8_ = puVar13[7];
              local_f8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)puVar13[8];
              bVar6 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                                ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_f8,(MethodInfo *)0x0);
              item = 0;
              if (bVar6) {
                do {
                  pSVar14 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                                      (&local_98,(SimpleJSONFixed_JSONNode_Enumerator_o *)&local_f8,
                                       (MethodInfo *)0x0);
                  pSVar8 = (pSVar14->fields).key;
                  pSVar9 = (pSVar14->fields).value;
                  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
                  }
                  local_a8.fields.key = pSVar8;
                  local_a8.fields.value = pSVar9;
                  pSVar9 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4410(&local_a8,(MethodInfo *)0x0);
                  if ((TypeInfo_Characters_BasicTitanSetup->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitanSetup);
                  }
                  if (pSVar9 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_18219f7d5;
                  __this = TypeInfo_Characters_BasicTitanSetup->static_fields->AIHairColors;
                  pSVar10 = (*(pSVar9->klass->vtable)._5_get_Item.methodPtr)(pSVar9,(MethodInfo *)0x0);
                  if (pSVar10 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_18219f7d5;
                  iVar7 = (*(code *)((Il2CppClass *)pSVar10->klass)->vtable[35].methodPtr)
                                    (pSVar10,((Il2CppClass *)pSVar10->klass)->vtable[35].method);
                  pSVar10 = (*(pSVar9->klass->vtable)._5_get_Item.methodPtr)(pSVar9,(MethodInfo *)0x1);
                  if (pSVar10 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_18219f7d5;
                  tryEnd = (*(code *)((Il2CppClass *)pSVar10->klass)->vtable[35].methodPtr)
                                     (pSVar10,((Il2CppClass *)pSVar10->klass)->vtable[35].method);
                  pSVar10 = (*(pSVar9->klass->vtable)._5_get_Item.methodPtr)(pSVar9,(MethodInfo *)0x2);
                  if (pSVar10 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_18219f7d5;
                  finallyStart = (*(code *)((Il2CppClass *)pSVar10->klass)->vtable[35].methodPtr)
                                           (pSVar10,((Il2CppClass *)pSVar10->klass)->vtable[35].method);
                  pSVar10 = (*(pSVar9->klass->vtable)._5_get_Item.methodPtr)(pSVar9,(MethodInfo *)0x3);
                  if (pSVar10 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_18219f7d5;
                  finallyEnd = (*(code *)((Il2CppClass *)pSVar10->klass)->vtable[35].methodPtr)
                                         (pSVar10,((Il2CppClass *)pSVar10->klass)->vtable[35].method);
                  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
                  Utility_Color255___ctor
                            ((System_Linq_Expressions_Interpreter_TryFaultHandler_o *)__this_00,iVar7,tryEnd,
                             finallyStart,finallyEnd,(MethodInfo *)0x0);
                  pMVar5 = MethodInfo_System_Collections_Generic_List_Color255_Add;
                  if (__this == (System_Collections_Generic_List_Color255__o *)0x0) goto label_18219f7d5;
                  piVar1 = &(__this->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pUVar3 = (__this->fields)._items;
                  if (pUVar3 == (Utility_Color255_array *)0x0) goto label_18219f7d5;
                  uVar2 = (__this->fields)._size;
                  if (uVar2 < (uint)pUVar3->max_length) {
                    (__this->fields)._size = uVar2 + 1;
                    if ((uint)pUVar3->max_length <= uVar2) {
                      ThrowIndexOutOfRangeException();
                    }
                    pUVar3->m_Items[(int)uVar2] = __this_00;
                    Il2CppCodeGenWriteBarrier(pUVar3->m_Items + (int)uVar2,__this_00);
                  }
                  else {
                    System_Collections_Generic_List_object___AddWithResize
                              ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)__this_00,
                               (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
                  }
                  bVar6 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                                    ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_f8,(MethodInfo *)0x0);
                } while (bVar6);
              }
              __this_01 = il2cpp_codegen_object_new
                                    ((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
              System_Collections_Generic_HashSet_int____ctor
                        (__this_01,
                         (MethodInfo_176CDF0 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor);
              if ((TypeInfo_Characters_BasicTitanSetup->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitanSetup);
              }
              pSVar9 = TypeInfo_Characters_BasicTitanSetup->static_fields->Info;
              if (((pSVar9 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
                  (pSVar10 = (*(pSVar9->klass->vtable)._7_get_Item.methodPtr)
                                       (pSVar9,(MethodInfo *)"AIExcludedEyes"),
                  pSVar10 != (System_Xml_Schema_XmlSchema_o *)0x0)) &&
                 (plVar12 = (longlong *)
                            (*(code *)*(MethodInfo **)
                                       ((longlong)&((Il2CppClass *)pSVar10->klass)->vtable[44].method + 8))
                                      (pSVar10,((Il2CppClass *)pSVar10->klass)->vtable[45].method),
                 plVar12 != (longlong *)0x0)) {
                puVar13 = (undefined8 *)(**(code **)(*plVar12 + 0x338))(local_88);
                local_f8._0_8_ = *puVar13;
                local_f8.m_Object.fields._dictionary =
                     (System_Collections_Generic_Dictionary_TKey__TValue__o *)puVar13[1];
                local_f8.m_Object.fields._8_8_ = puVar13[2];
                local_f8.m_Object.fields._current.fields.key = (Il2CppObject *)puVar13[3];
                local_f8.m_Object.fields._current.fields.value = (Il2CppObject *)puVar13[4];
                local_f8.m_Object.fields._32_8_ = puVar13[5];
                local_f8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)puVar13[6];
                local_f8.m_Array.fields._8_8_ = puVar13[7];
                local_f8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)puVar13[8];
                bVar6 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                                  ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_f8,(MethodInfo *)0x0);
                if (bVar6) {
                  do {
                    pSVar14 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                                        (&local_98,(SimpleJSONFixed_JSONNode_Enumerator_o *)&local_f8,
                                         (MethodInfo *)0x0);
                    pSVar8 = (pSVar14->fields).key;
                    pSVar9 = (pSVar14->fields).value;
                    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
                    }
                    local_a8.fields.key = pSVar8;
                    local_a8.fields.value = pSVar9;
                    pSVar9 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4410(&local_a8,(MethodInfo *)0x0);
                    if ((pSVar9 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
                       (iVar7 = (*(pSVar9->klass->vtable)._35_get_AsInt.methodPtr)
                                          (pSVar9,(pSVar9->klass->vtable)._35_get_AsInt.method),
                       __this_01 == (System_Collections_Generic_HashSet_int__o *)0x0)) goto label_18219f7d5;
                    System_Collections_Generic_HashSet_int___Add
                              (__this_01,iVar7,
                               (MethodInfo_1757D20 *)MethodInfo_System_Collections_Generic_HashSet_int_Add);
                    bVar6 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                                      ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_f8,(MethodInfo *)0x0
                                      );
                  } while (bVar6);
                }
                do {
                  if ((TypeInfo_Characters_BasicTitanSetup->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitanSetup);
                  }
                  if (TypeInfo_Characters_BasicTitanSetup->static_fields->EyeCount <= item) {
                    return;
                  }
                  if (__this_01 == (System_Collections_Generic_HashSet_int__o *)0x0) break;
                  bVar6 = System_Collections_Generic_HashSet_int___Contains
                                    ((System_Collections_Generic_HashSet_T__o *)__this_01,item,
                                     (MethodInfo_1759C90 *)
                                     MethodInfo_System_Collections_Generic_HashSet_int_Contains);
                  if (!bVar6) {
                    if ((TypeInfo_Characters_BasicTitanSetup->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitanSetup);
                    }
                    pSVar4 = TypeInfo_Characters_BasicTitanSetup->static_fields->AIEyes;
                    if (pSVar4 == (System_Collections_Generic_List_int__o *)0x0) break;
                    il2cpp_runtime_helper_180026690(pSVar4,item,MethodInfo_System_Collections_Generic_List_int_Add);
                  }
                  item = item + 1;
                } while( true );
              }
            }
          }
        }
      }
    }
  }
label_18219f7d5:
  ThrowNullReferenceException();
}


// Characters.BasicTitanSetup$$LoadHairs
// il2cpp: void Characters_BasicTitanSetup__LoadHairs (System_String_o* key, const MethodInfo* method);
// 0x18219f7e0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18219f983: nop dword ptr [rax]
// asm:   0x18219f987: nop word ptr [rax + rax]

void Characters_BasicTitanSetup__LoadHairs(System_String_o *key,MethodInfo *method)

{
  int32_t *piVar1;
  System_Collections_Generic_List_string__o *pSVar2;
  System_String_array *pSVar3;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  bool bVar4;
  System_Collections_Generic_HashSet_string__o *__this_00;
  MethodInfo *pMVar5;
  System_Xml_Schema_XmlSchema_o *pSVar6;
  undefined8 *puVar7;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o *pSVar8;
  SimpleJSONFixed_JSONNode_o *pSVar9;
  System_String_o *pSVar10;
  System_String_o *value;
  uint uVar11;
  uint local_res8 [2];
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_d8;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_88;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_78;
  undefined1 local_68 [96];
  
  if (Il2CppMethodInitialized_184346e39 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitanSetup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&"AIExcluded");
    Il2CppMethodInitialized_184346e39 = '\x01';
  }
  local_d8.type = 0;
  local_d8._4_4_ = 0;
  local_d8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_d8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_d8.m_Object.fields._version = 0;
  local_d8.m_Object.fields._index = 0;
  local_d8.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_res8[0] = 0;
  local_d8.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_d8.m_Object.fields._getEnumeratorRetType = 0;
  local_d8.m_Object.fields._36_4_ = 0;
  local_d8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_d8.m_Array.fields._index = 0;
  local_d8.m_Array.fields._version = 0;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this_00,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if ((TypeInfo_Characters_BasicTitanSetup->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitanSetup);
  }
  pSVar9 = TypeInfo_Characters_BasicTitanSetup->static_fields->Info;
  pMVar5 = (MethodInfo *)System_String__Concat_1969e50("AIExcluded",key,(MethodInfo *)0x0);
  if ((pSVar9 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
     (pSVar6 = (*(pSVar9->klass->vtable)._7_get_Item.methodPtr)(pSVar9,pMVar5),
     pSVar6 != (System_Xml_Schema_XmlSchema_o *)0x0)) {
    puVar7 = (undefined8 *)(**(code **)&((Il2CppClass *)pSVar6->klass)->vtable[32].methodPtr)(local_68);
    local_d8._0_8_ = *puVar7;
    local_d8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)puVar7[1];
    local_d8.m_Object.fields._8_8_ = puVar7[2];
    local_d8.m_Object.fields._current.fields.key = (Il2CppObject *)puVar7[3];
    local_d8.m_Object.fields._current.fields.value = (Il2CppObject *)puVar7[4];
    local_d8.m_Object.fields._32_8_ = puVar7[5];
    local_d8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)puVar7[6];
    local_d8.m_Array.fields._8_8_ = puVar7[7];
    local_d8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)puVar7[8];
    bVar4 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                      ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_d8,(MethodInfo *)0x0);
    if (bVar4) {
      do {
        pSVar8 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                           (&local_78,(SimpleJSONFixed_JSONNode_Enumerator_o *)&local_d8,(MethodInfo *)0x0);
        pSVar10 = (pSVar8->fields).key;
        pSVar9 = (pSVar8->fields).value;
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        local_88.fields.key = pSVar10;
        local_88.fields.value = pSVar9;
        pSVar9 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4410(&local_88,(MethodInfo *)0x0);
        if ((pSVar9 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
           (pSVar10 = (*(pSVar9->klass->vtable)._9_get_Value.methodPtr)
                                (pSVar9,(pSVar9->klass->vtable)._9_get_Value.method),
           __this_00 == (System_Collections_Generic_HashSet_string__o *)0x0)) goto label_18219fc83;
        System_Collections_Generic_HashSet_object___Add
                  ((System_Collections_Generic_HashSet_object__o *)__this_00,(Il2CppObject *)pSVar10,
                   (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
        bVar4 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                          ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_d8,(MethodInfo *)0x0);
      } while (bVar4);
    }
    uVar11 = 0;
    while( true ) {
      local_res8[0] = uVar11;
      if ((TypeInfo_Characters_BasicTitanSetup->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitanSetup);
      }
      pSVar9 = TypeInfo_Characters_BasicTitanSetup->static_fields->Info;
      if ((pSVar9 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
         (pSVar6 = (*(pSVar9->klass->vtable)._7_get_Item.methodPtr)(pSVar9,(MethodInfo *)key),
         pSVar6 == (System_Xml_Schema_XmlSchema_o *)0x0)) break;
      pSVar6 = (*(pSVar6->klass->vtable)._11_get_NameAttribute.methodPtr)
                         (pSVar6,(pSVar6->klass->vtable)._11_get_NameAttribute.method);
      if ((int)pSVar6 <= (int)uVar11) {
        return;
      }
      pSVar10 = System_Int32__ToString((int32_t *)local_res8,(MethodInfo *)0x0);
      pSVar10 = System_String__Concat_1969e50(key,pSVar10,(MethodInfo *)0x0);
      if ((TypeInfo_Characters_BasicTitanSetup->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitanSetup);
      }
      pSVar9 = TypeInfo_Characters_BasicTitanSetup->static_fields->Info;
      if ((pSVar9 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
         (pSVar6 = (*(pSVar9->klass->vtable)._7_get_Item.methodPtr)(pSVar9,(MethodInfo *)key),
         pSVar6 == (System_Xml_Schema_XmlSchema_o *)0x0)) break;
      pSVar9 = (SimpleJSONFixed_JSONNode_o *)
               (*(pSVar6->klass->vtable)._5_OnRemove.methodPtr)
                         (pSVar6,(System_Type_o *)(ulonglong)local_res8[0],
                          (pSVar6->klass->vtable)._5_OnRemove.method);
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      value = SimpleJSONFixed_JSONNode__op_Implicit_1dc4450(pSVar9,(MethodInfo *)0x0);
      pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
      pSVar2 = TypeInfo_Characters_BasicTitanSetup->static_fields->AllHairs;
      if (pSVar2 == (System_Collections_Generic_List_string__o *)0x0) break;
      piVar1 = &(pSVar2->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar3 = (pSVar2->fields)._items;
      if (pSVar3 == (System_String_array *)0x0) break;
      uVar11 = (pSVar2->fields)._size;
      if (uVar11 < (uint)pSVar3->max_length) {
        (pSVar2->fields)._size = uVar11 + 1;
        if ((uint)pSVar3->max_length <= uVar11) {
          ThrowIndexOutOfRangeException();
        }
        pSVar3->m_Items[(int)uVar11] = pSVar10;
        Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar11,pSVar10);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar2,(Il2CppObject *)pSVar10,
                   (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
      }
      __this = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_Characters_BasicTitanSetup->static_fields->HairPrefabs;
      if ((__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
         (System_Collections_Generic_Dictionary_object__object___set_Item
                    (__this,(Il2CppObject *)pSVar10,(Il2CppObject *)value,
                     (MethodInfo_147A7F0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item),
         __this_00 == (System_Collections_Generic_HashSet_string__o *)0x0)) break;
      bVar4 = System_Collections_Generic_HashSet_object___Contains
                        ((System_Collections_Generic_HashSet_object__o *)__this_00,(Il2CppObject *)value,
                         (MethodInfo_1759E40 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
      if (!bVar4) {
        if ((TypeInfo_Characters_BasicTitanSetup->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitanSetup);
        }
        pSVar2 = TypeInfo_Characters_BasicTitanSetup->static_fields->AIHairs;
        if (pSVar2 == (System_Collections_Generic_List_string__o *)0x0) break;
        il2cpp_runtime_helper_180012890(pSVar2,pSVar10,MethodInfo_System_Collections_Generic_List_string_Add);
      }
      uVar11 = local_res8[0] + 1;
    }
  }
label_18219fc83:
  ThrowNullReferenceException();
}


// Characters.BasicTitanSetup$$GetRandomBodyHeadCombo
// il2cpp: System_Int32_array* Characters_BasicTitanSetup__GetRandomBodyHeadCombo (SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x18219e960

System_Int32_array *
Characters_BasicTitanSetup__GetRandomBodyHeadCombo(SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  Settings_InGameSet_o *pSVar4;
  Settings_InGameTitanSettings_o *pSVar5;
  Settings_BoolSetting_o *pSVar6;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_Object_array *pSVar7;
  System_Single_array *pSVar8;
  Il2CppClass *pIVar9;
  System_String_o *pSVar10;
  MethodInfo *pMVar11;
  bool bVar12;
  int32_t iVar13;
  System_Int32_array *pSVar14;
  SimpleJSONFixed_JSONNode_o *pSVar15;
  System_Xml_Schema_XmlSchema_o *pSVar16;
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_List_float__o *__this_01;
  undefined8 *puVar17;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o *pSVar18;
  Il2CppObject *pIVar19;
  longlong *plVar20;
  float item;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_d8;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_88;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_78;
  undefined1 local_68 [96];
  
  if (Il2CppMethodInitialized_184346e3a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_CharacterData);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_float_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    il2cpp_codegen_initialize_runtime_metadata(&"Chance");
    il2cpp_codegen_initialize_runtime_metadata(&"Body");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan");
    il2cpp_codegen_initialize_runtime_metadata(&"Head");
    il2cpp_codegen_initialize_runtime_metadata(&"Default");
    il2cpp_codegen_initialize_runtime_metadata(&"BodyHeadCombos");
    Il2CppMethodInitialized_184346e3a = '\x01';
  }
  local_d8.type = 0;
  local_d8._4_4_ = 0;
  local_d8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_d8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_d8.m_Object.fields._version = 0;
  local_d8.m_Object.fields._index = 0;
  local_d8.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_d8.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_d8.m_Object.fields._getEnumeratorRetType = 0;
  local_d8.m_Object.fields._36_4_ = 0;
  local_d8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_d8.m_Array.fields._index = 0;
  local_d8.m_Array.fields._version = 0;
  pSVar14 = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,2);
  pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if (((pSVar4 == (Settings_InGameSet_o *)0x0) ||
      (pSVar5 = (pSVar4->fields).Titan, pSVar5 == (Settings_InGameTitanSettings_o *)0x0)) ||
     (pSVar6 = (pSVar5->fields).TitanStandardModels, pSVar6 == (Settings_BoolSetting_o *)0x0))
  goto label_18219eed3;
  if ((pSVar6->fields)._value == false) {
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar12 = SimpleJSONFixed_JSONNode__op_Equality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (bVar12) {
      if ((TypeInfo_Characters_CharacterData->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterData);
      }
      __this = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_Characters_CharacterData->static_fields->TitanAIInfos;
      if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_18219eed3;
      pSVar15 = System_Collections_Generic_Dictionary_object__object___get_Item
                          (__this,(Il2CppObject *)"Titan",
                           (MethodInfo_147A5B0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_get_Item);
      if (pSVar15 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_18219eed3;
      node = (SimpleJSONFixed_JSONNode_o *)
             (*(pSVar15->klass->vtable)._7_get_Item.methodPtr)(pSVar15,(MethodInfo *)"Default");
    }
    if ((System_Xml_Schema_XmlSchema_o *)node == (System_Xml_Schema_XmlSchema_o *)0x0) {
label_18219eed3:
      ThrowNullReferenceException();
    }
    pSVar16 = (*(((System_Xml_Schema_XmlSchema_o *)node)->klass->vtable)._7_get_IdAttribute.methodPtr)
                        (node,(MethodInfo *)"BodyHeadCombos");
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_object);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
               (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_object_ctor);
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_float);
    System_Collections_Generic_List_float____ctor
              ((System_Collections_Generic_LowLevelList_T__o *)__this_01,
               (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_float_ctor);
    if (pSVar16 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_18219eed3;
    puVar17 = (undefined8 *)(**(code **)&((Il2CppClass *)pSVar16->klass)->vtable[32].methodPtr)(local_68);
    local_d8._0_8_ = *puVar17;
    local_d8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)puVar17[1]
    ;
    local_d8.m_Object.fields._8_8_ = puVar17[2];
    local_d8.m_Object.fields._current.fields.key = (Il2CppObject *)puVar17[3];
    local_d8.m_Object.fields._current.fields.value = (Il2CppObject *)puVar17[4];
    local_d8.m_Object.fields._32_8_ = puVar17[5];
    local_d8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)puVar17[6];
    local_d8.m_Array.fields._8_8_ = puVar17[7];
    local_d8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)puVar17[8];
    bVar12 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                       ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_d8,(MethodInfo *)0x0);
    if (bVar12) {
      do {
        pSVar18 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                            (&local_78,(SimpleJSONFixed_JSONNode_Enumerator_o *)&local_d8,(MethodInfo *)0x0);
        pSVar10 = (pSVar18->fields).key;
        pSVar15 = (pSVar18->fields).value;
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        local_88.fields.key = pSVar10;
        local_88.fields.value = pSVar15;
        pIVar19 = (Il2CppObject *)SimpleJSONFixed_JSONNode__op_Implicit_1dc4410(&local_88,(MethodInfo *)0x0);
        pMVar11 = MethodInfo_System_Collections_Generic_List_object_Add;
        if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto label_18219eed3;
        piVar1 = &(__this_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar7 = (__this_00->fields)._items;
        if (pSVar7 == (System_Object_array *)0x0) goto label_18219eed3;
        uVar3 = (__this_00->fields)._size;
        if (uVar3 < (uint)pSVar7->max_length) {
          (__this_00->fields)._size = uVar3 + 1;
          if ((uint)pSVar7->max_length <= uVar3) goto label_18219eee5;
          pSVar7->m_Items[(int)uVar3] = pIVar19;
          Il2CppCodeGenWriteBarrier(pSVar7->m_Items + (int)uVar3,pIVar19);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (__this_00,pIVar19,(MethodInfo_93DD50 *)pMVar11->klass->rgctx_data[0xe].method);
        }
        if (pIVar19 == (Il2CppObject *)0x0) goto label_18219eed3;
        plVar20 = (longlong *)
                  (*pIVar19->klass->vtable[7].methodPtr)
                            (pIVar19,"Chance",pIVar19->klass->vtable[7].method);
        if (plVar20 == (longlong *)0x0) goto label_18219eed3;
        item = (float)(**(code **)(*plVar20 + 0x388))(plVar20,*(undefined8 *)(*plVar20 + 0x390));
        pMVar11 = MethodInfo_System_Collections_Generic_List_float_Add;
        if (__this_01 == (System_Collections_Generic_List_float__o *)0x0) goto label_18219eed3;
        piVar1 = &(__this_01->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar8 = (__this_01->fields)._items;
        if (pSVar8 == (System_Single_array *)0x0) goto label_18219eed3;
        uVar3 = (__this_01->fields)._size;
        if (uVar3 < (uint)pSVar8->max_length) {
          (__this_01->fields)._size = uVar3 + 1;
          if ((uint)pSVar8->max_length <= uVar3) goto label_18219eee5;
          pSVar8->m_Items[(int)uVar3] = item;
        }
        else {
          System_Collections_Generic_List_float___AddWithResize
                    (__this_01,item,(MethodInfo_973B40 *)pMVar11->klass->rgctx_data[0xe].method);
        }
        bVar12 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                           ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_d8,(MethodInfo *)0x0);
      } while (bVar12);
    }
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    }
    pIVar19 = Utility_Util__GetRandomFromWeightedList(__this_00,__this_01,(MethodInfo *)0x0);
    if (pIVar19 == (Il2CppObject *)0x0) goto label_18219eed3;
    pIVar9 = pIVar19->klass;
    bVar2 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).typeHierarchyDepth;
    if (((pIVar9->_2).typeHierarchyDepth < bVar2) ||
       ((pIVar9->_2).typeHierarchy[(ulonglong)bVar2 - 1] != (Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode))
    {
      il2cpp_codegen_raise_invalid_cast_exception(pIVar19,TypeInfo_SimpleJSONFixed_JSONNode);
    }
    plVar20 = (longlong *)
              (*pIVar9->vtable[7].methodPtr)(pIVar19,"Body",pIVar9->vtable[7].method);
    if (plVar20 == (longlong *)0x0) goto label_18219eed3;
    iVar13 = (**(code **)(*plVar20 + 0x368))(plVar20,*(undefined8 *)(*plVar20 + 0x370));
    if (pSVar14 == (System_Int32_array *)0x0) goto label_18219eed3;
    if ((int)pSVar14->max_length == 0) goto label_18219eee5;
    pSVar14->m_Items[0] = iVar13;
    plVar20 = (longlong *)
              (*pIVar19->klass->vtable[7].methodPtr)
                        (pIVar19,"Head",pIVar19->klass->vtable[7].method);
    if (plVar20 == (longlong *)0x0) goto label_18219eed3;
    iVar13 = (**(code **)(*plVar20 + 0x368))(plVar20,*(undefined8 *)(*plVar20 + 0x370));
  }
  else {
    if (pSVar14 == (System_Int32_array *)0x0) goto label_18219eed3;
    if ((int)pSVar14->max_length == 0) goto label_18219eee5;
    iVar13 = 0;
    pSVar14->m_Items[0] = 0;
  }
  if (1 < (uint)pSVar14->max_length) {
    pSVar14->m_Items[1] = iVar13;
    return pSVar14;
  }
label_18219eee5:
  ThrowIndexOutOfRangeException();
}


// Characters.BasicTitanSetup$$CreateRandomSet
// il2cpp: Settings_TitanCustomSet_o* Characters_BasicTitanSetup__CreateRandomSet (Characters_BasicTitanSetup_o* __this, int32_t headPrefab, const MethodInfo* method);
// 0x18219e720

Settings_TitanCustomSet_o *
Characters_BasicTitanSetup__CreateRandomSet
          (Characters_BasicTitanSetup_o *__this,int32_t headPrefab,MethodInfo *method)

{
  Settings_IntSetting_o *pSVar1;
  Settings_StringSetting_o *__this_00;
  System_Collections_Generic_List_string__o *items;
  Settings_ColorSetting_o *pSVar2;
  int32_t iVar3;
  Settings_TitanCustomSet_o *__this_01;
  System_String_o *value;
  Utility_Color255_o *pUVar4;
  
  if (Il2CppMethodInitialized_184346e3b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitanSetup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_MiscExtensions_GetRandomItem_Color255);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_MiscExtensions_GetRandomItem_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_MiscExtensions_GetRandomItem_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_TitanCustomSet);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_184346e3b = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_TitanCustomSet);
  Settings_TitanCustomSet___ctor(__this_01,(MethodInfo *)0x0);
  if ((__this_01 != (Settings_TitanCustomSet_o *)0x0) &&
     (pSVar1 = (__this_01->fields).Head, pSVar1 != (Settings_IntSetting_o *)0x0)) {
    Settings_TypedSetting_int___set_Value
              ((Settings_TypedSetting_int__o *)pSVar1,headPrefab,
               (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
    __this_00 = (__this_01->fields).Hair;
    if ((TypeInfo_Characters_BasicTitanSetup->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitanSetup);
    }
    items = TypeInfo_Characters_BasicTitanSetup->static_fields->AIHairs;
    if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
    }
    value = Utility_RandomGen__ChooseRandom_object_
                      ((System_Collections_Generic_List_T__o *)items,
                       (MethodInfo_732DC0 *)MethodInfo_MiscExtensions_GetRandomItem_string);
    if (__this_00 != (Settings_StringSetting_o *)0x0) {
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)value,
                 (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
      pSVar2 = (__this_01->fields).HairColor;
      pUVar4 = Utility_RandomGen__ChooseRandom_object_
                         ((System_Collections_Generic_List_T__o *)
                          TypeInfo_Characters_BasicTitanSetup->static_fields->AIHairColors,
                          (MethodInfo_732DC0 *)MethodInfo_MiscExtensions_GetRandomItem_Color255);
      if (pSVar2 != (Settings_ColorSetting_o *)0x0) {
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)pSVar2,(Il2CppObject *)pUVar4,
                   (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_Color255_set_Value);
        pSVar1 = (__this_01->fields).Eye;
        iVar3 = MiscExtensions__GetRandomItem_int_
                          ((System_Collections_Generic_List_T__o *)
                           TypeInfo_Characters_BasicTitanSetup->static_fields->AIEyes,
                           (MethodInfo_732D60 *)MethodInfo_MiscExtensions_GetRandomItem_int);
        if (pSVar1 != (Settings_IntSetting_o *)0x0) {
          Settings_TypedSetting_int___set_Value
                    ((Settings_TypedSetting_int__o *)pSVar1,iVar3,
                     (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
          iVar3 = UnityEngine_Random__RandomRangeInt(0xa0,0x100,(MethodInfo *)0x0);
          pSVar2 = (__this_01->fields).SkinColor;
          pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
          Utility_Color255___ctor
                    ((System_Linq_Expressions_Interpreter_TryFaultHandler_o *)pUVar4,iVar3,iVar3,iVar3,0xff,
                     (MethodInfo *)0x0);
          if (pSVar2 != (Settings_ColorSetting_o *)0x0) {
            Settings_TypedSetting_object___set_Value
                      ((Settings_TypedSetting_T__o *)pSVar2,(Il2CppObject *)pUVar4,
                       (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_Color255_set_Value);
            return __this_01;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BasicTitanSetup$$Load
// il2cpp: void Characters_BasicTitanSetup__Load (Characters_BasicTitanSetup_o* __this, Settings_TitanCustomSet_o* set, const MethodInfo* method);
// 0x18219fc90
// eh: try 0x1821a0ea0..0x1821a0fd2 -> pad 0x183320de0 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 21 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821a004d: nop dword ptr [rax]
// asm:   0x1821a02ac: nop dword ptr [rax]
// asm:   0x1821a0f35: mov rdx, qword ptr [rip + 0x1eeba8c]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Material_Dispose
// asm:   0x1821a0f3c: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1821a0f41: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821a0f46: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x1821a0f4b: test rcx, rcx
// asm:   0x1821a0f4e: jne 0x1821a0fd2
// asm:   0x1821a0f54: mov r14, qword ptr [rsp + 0xc0]
// asm:   0x1821a0fd2: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183320de0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183320de5: push rbp
// asm:   0x183320de6: sub rsp, 0x20
// asm:   0x183320dea: mov rbp, rdx
// asm:   0x183320ded: mov rax, qword ptr [rbp + 0x88]
// asm:   0x183320df4: mov rcx, qword ptr [rax]
// asm:   0x183320df7: mov qword ptr [rbp + 0x20], rcx
// asm:   0x183320dfb: movabs rax, 0
// asm:   0x183320e05: add rsp, 0x20
// asm:   0x183320e09: pop rbp
// asm:   0x183320e0a: ret 

void Characters_BasicTitanSetup__Load
               (Characters_BasicTitanSetup_o *__this,Settings_TitanCustomSet_o *set,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  System_Collections_Generic_HashSet_Material__o *collection;
  System_Collections_Generic_HashSet_BallotBox_Ballot__o *__this_00;
  System_Collections_Generic_HashSet_object__o *pSVar31;
  Settings_ColorSetting_o *pSVar32;
  Utility_Color255_o *pUVar33;
  System_Collections_Generic_Dictionary_object__object__o *pSVar34;
  UnityEngine_Vector3_StaticFields *pUVar35;
  UnityEngine_Renderer_o *__this_01;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  Il2CppObject *x;
  bool bVar60;
  int index;
  UnityEngine_Transform_o *pUVar61;
  UnityEngine_Transform_o *pUVar62;
  UnityEngine_SkinnedMeshRenderer_o *pUVar63;
  UnityEngine_Material_o *pUVar64;
  UnityEngine_Color_o *pUVar65;
  UnityEngine_Object_o *pUVar66;
  System_String_o *pSVar67;
  System_String_o *pSVar68;
  UnityEngine_GameObject_o *pUVar69;
  UnityEngine_Quaternion_o *pUVar70;
  System_Object_array *pSVar71;
  System_String_o *pSVar72;
  UnityEngine_SkinnedMeshRenderer_o *__this_02;
  UnityEngine_Mesh_o *pUVar73;
  UnityEngine_CapsuleCollider_o *__this_03;
  UnityEngine_CapsuleCollider_o *__this_04;
  UnityEngine_Vector3_o *pUVar74;
  UnityEngine_Transform_o *pUVar75;
  UnityEngine_Transform_o *pUVar76;
  UnityEngine_BoxCollider_o *pUVar77;
  UnityEngine_BoxCollider_o *pUVar78;
  UnityEngine_MeshFilter_o *__this_05;
  UnityEngine_MeshFilter_o *__this_06;
  UnityEngine_MeshRenderer_o *__this_07;
  Characters_BaseCharacter_o *__this_08;
  UnityEngine_Object_o *pUVar79;
  uint uVar80;
  float fVar81;
  int32_t local_res20 [2];
  undefined1 local_98 [12];
  float fStack_8c;
  UnityEngine_Transform_o *local_88 [2];
  int32_t local_78 [2];
  System_Collections_Generic_List_Enumerator_T__o local_70;
  System_Collections_Generic_List_Enumerator_object__o local_58;
  UnityEngine_Material_o *local_40;
  System_Collections_Generic_List_Material__o *local_38;
  
  if (Il2CppMethodInitialized_184346e3c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitanSetup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_BaseCharacter);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_MeshFilter);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_MeshRenderer);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_SkinnedMeshRenderer);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Material_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Material_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Material_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_BoxCollider);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Material_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Material_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSetupMaterials);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Material_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Material_ctor_40be668);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"EyesHurtbox");
    il2cpp_codegen_initialize_runtime_metadata(&"TitanHeadCollider");
    il2cpp_codegen_initialize_runtime_metadata(&"TitanEyes");
    il2cpp_codegen_initialize_runtime_metadata(&"Eyes");
    il2cpp_codegen_initialize_runtime_metadata(&"Bone");
    il2cpp_codegen_initialize_runtime_metadata(&"Titans/Hairs/Prefabs/");
    il2cpp_codegen_initialize_runtime_metadata(&"Nose");
    il2cpp_codegen_initialize_runtime_metadata(&"Titans/Heads/Prefabs/");
    il2cpp_codegen_initialize_runtime_metadata(&"TitanHead");
    il2cpp_codegen_initialize_runtime_metadata(&"Body");
    il2cpp_codegen_initialize_runtime_metadata(&"Head");
    il2cpp_codegen_initialize_runtime_metadata(&"Eye");
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2/Core/Controller.Body/hip/spine/chest/neck/head");
    il2cpp_codegen_initialize_runtime_metadata(&"HairSocket");
    Il2CppMethodInitialized_184346e3c = '\x01';
  }
  local_res20[0] = 0;
  local_78[0] = 0;
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  collection = (__this->fields)._ownedMaterials;
  local_38 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Material);
  System_Collections_Generic_List_object____ctor_94fb10
            ((System_Collections_Generic_List_object__o *)local_38,
             (System_Collections_Generic_IEnumerable_T__o *)collection,
             (MethodInfo_94FB10 *)MethodInfo_System_Collections_Generic_List_Material_ctor_40be668);
  __this_00 = (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)(__this->fields)._ownedMaterials;
  if (__this_00 == (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) {
label_1821a0fc0:
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_BallotBox_Ballot___Clear
            (__this_00,(MethodInfo_17592A0 *)MethodInfo_System_Collections_Generic_HashSet_Material_Clear);
  pUVar61 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if ((pUVar61 == (UnityEngine_Transform_o *)0x0) ||
     (pUVar61 = UnityEngine_Transform__Find(pUVar61,"Amarture_VER2/Core/Controller.Body/hip/spine/chest/neck/head",(MethodInfo *)0x0),
     local_88[0] = pUVar61, set == (Settings_TitanCustomSet_o *)0x0)) goto label_1821a0fc0;
  local_res20[0] = Settings_TitanCustomSet__GetHead(set,(MethodInfo *)0x0);
  pUVar62 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if ((pUVar62 == (UnityEngine_Transform_o *)0x0) ||
     (pUVar62 = UnityEngine_Transform__Find(pUVar62,"Body",(MethodInfo *)0x0),
     pUVar62 == (UnityEngine_Transform_o *)0x0)) goto label_1821a0fc0;
  pUVar63 = UnityEngine_Component__GetComponent_object_
                      ((UnityEngine_Component_o *)pUVar62,
                       (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_SkinnedMeshRenderer)
  ;
  if (Il2CppMethodInitialized_184346e3d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Material_Add);
    Il2CppMethodInitialized_184346e3d = '\x01';
  }
  if (pUVar63 == (UnityEngine_SkinnedMeshRenderer_o *)0x0) goto label_1821a0fc0;
  pUVar64 = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)pUVar63,(MethodInfo *)0x0);
  pSVar31 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._ownedMaterials;
  local_40 = pUVar64;
  if (pSVar31 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_1821a0fc0;
  System_Collections_Generic_HashSet_object___Add
            (pSVar31,(Il2CppObject *)pUVar64,
             (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_Material_Add);
  pSVar32 = (set->fields).SkinColor;
  if (((pSVar32 == (Settings_ColorSetting_o *)0x0) ||
      (pUVar33 = (pSVar32->fields)._value, pUVar33 == (Utility_Color255_o *)0x0)) ||
     (pUVar65 = Utility_Color255__ToColor((UnityEngine_Color_o *)local_98,pUVar33,(MethodInfo *)0x0),
     pUVar64 == (UnityEngine_Material_o *)0x0)) goto label_1821a0fc0;
  uVar36 = (pUVar65->fields).r;
  uVar37 = (pUVar65->fields).g;
  uVar38 = (pUVar65->fields).b;
  uVar39 = (pUVar65->fields).a;
  local_98._0_4_ = uVar36;
  local_98._4_4_ = uVar37;
  local_98._8_4_ = uVar38;
  fStack_8c = (float)uVar39;
  UnityEngine_Material__set_color(pUVar64,(UnityEngine_Color_o *)local_98,(MethodInfo *)0x0);
  if ((pUVar61 == (UnityEngine_Transform_o *)0x0) ||
     (pUVar61 = UnityEngine_Transform__Find(pUVar61,"HairSocket",(MethodInfo *)0x0),
     pUVar61 == (UnityEngine_Transform_o *)0x0)) goto label_1821a0fc0;
  index = UnityEngine_Transform__get_childCount(pUVar61,(MethodInfo *)0x0);
  while (index = index + -1, -1 < index) {
    pUVar62 = UnityEngine_Transform__GetChild(pUVar61,index,(MethodInfo *)0x0);
    if (pUVar62 == (UnityEngine_Transform_o *)0x0) goto label_1821a0fc0;
    pUVar66 = (UnityEngine_Object_o *)
              UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar62,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__DestroyImmediate_2f1fb90(pUVar66,(MethodInfo *)0x0);
  }
  pSVar67 = Settings_TitanCustomSet__GetHair(set,(MethodInfo *)0x0);
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  pSVar72 = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
  if ((TypeInfo_Characters_BasicTitanSetup->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitanSetup);
  }
  pSVar34 = (System_Collections_Generic_Dictionary_object__object__o *)
            TypeInfo_Characters_BasicTitanSetup->static_fields->HairPrefabs;
  if (pSVar34 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_1821a0fc0;
  pSVar68 = System_Collections_Generic_Dictionary_object__object___get_Item
                      (pSVar34,(Il2CppObject *)pSVar67,
                       (MethodInfo_147A5B0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
  pSVar68 = System_String__Concat_1969e50("Titans/Hairs/Prefabs/",pSVar68,(MethodInfo *)0x0);
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  pUVar69 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                      (pSVar72,pSVar68,true,
                       (MethodInfo_795F00 *)
                       MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
  if ((pUVar69 == (UnityEngine_GameObject_o *)0x0) ||
     (pUVar62 = UnityEngine_GameObject__get_transform(pUVar69,(MethodInfo *)0x0),
     pUVar62 == (UnityEngine_Transform_o *)0x0)) goto label_1821a0fc0;
  UnityEngine_Transform__SetParent(pUVar62,pUVar61,(MethodInfo *)0x0);
  pUVar61 = UnityEngine_GameObject__get_transform(pUVar69,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_18433dbea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433dbea = '\x01';
  }
  if (pUVar61 == (UnityEngine_Transform_o *)0x0) goto label_1821a0fc0;
  pUVar35 = TypeInfo_UnityEngine_Vector3->static_fields;
  uVar1 = (pUVar35->zeroVector).fields.x;
  uVar16 = (pUVar35->zeroVector).fields.y;
  local_98._8_4_ = (pUVar35->zeroVector).fields.z;
  local_98._0_4_ = uVar1;
  local_98._4_4_ = uVar16;
  UnityEngine_Transform__set_localPosition(pUVar61,(UnityEngine_Vector3_o *)local_98,(MethodInfo *)0x0);
  pUVar61 = UnityEngine_GameObject__get_transform(pUVar69,(MethodInfo *)0x0);
  local_98._0_4_ = -1.5707964;
  local_98._4_4_ = 0.0;
  local_98._8_4_ = 0.0;
  pUVar70 = UnityEngine_Quaternion__Internal_FromEulerRad
                      ((UnityEngine_Quaternion_o *)&local_70,(UnityEngine_Vector3_o *)local_98,
                       (MethodInfo *)0x0);
  if (pUVar61 == (UnityEngine_Transform_o *)0x0) goto label_1821a0fc0;
  uVar40 = (pUVar70->fields).x;
  uVar41 = (pUVar70->fields).y;
  uVar42 = (pUVar70->fields).z;
  uVar43 = (pUVar70->fields).w;
  local_98._0_4_ = uVar40;
  local_98._4_4_ = uVar41;
  local_98._8_4_ = uVar42;
  fStack_8c = (float)uVar43;
  UnityEngine_Transform__set_localRotation(pUVar61,(UnityEngine_Quaternion_o *)local_98,(MethodInfo *)0x0);
  pUVar61 = UnityEngine_GameObject__get_transform(pUVar69,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_18433dbeb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433dbeb = '\x01';
  }
  if (pUVar61 == (UnityEngine_Transform_o *)0x0) goto label_1821a0fc0;
  pUVar35 = TypeInfo_UnityEngine_Vector3->static_fields;
  uVar2 = (pUVar35->oneVector).fields.x;
  uVar17 = (pUVar35->oneVector).fields.y;
  local_98._8_4_ = (pUVar35->oneVector).fields.z;
  local_98._0_4_ = uVar2;
  local_98._4_4_ = uVar17;
  UnityEngine_Transform__set_localScale(pUVar61,(UnityEngine_Vector3_o *)local_98,(MethodInfo *)0x0);
  pSVar71 = UnityEngine_GameObject__GetComponentsInChildren_object__6f5810
                      (pUVar69,(MethodInfo_6F5810 *)
                               MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer);
  if (pSVar71 == (System_Object_array *)0x0) goto label_1821a0fc0;
  for (uVar80 = 0; (int)uVar80 < (int)pSVar71->max_length; uVar80 = uVar80 + 1) {
    if ((uint)pSVar71->max_length <= uVar80) {
      ThrowIndexOutOfRangeException();
    }
    __this_01 = (UnityEngine_Renderer_o *)pSVar71->m_Items[(int)uVar80];
    if ((TypeInfo_Characters_BasicTitanSetup->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitanSetup);
    }
    pSVar34 = (System_Collections_Generic_Dictionary_object__object__o *)
              TypeInfo_Characters_BasicTitanSetup->static_fields->HairPrefabs;
    if (pSVar34 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_1821a0fc0;
    pSVar72 = System_Collections_Generic_Dictionary_object__object___get_Item
                        (pSVar34,(Il2CppObject *)pSVar67,
                         (MethodInfo_147A5B0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
    if ((TypeInfo_Characters_HumanSetupMaterials->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetupMaterials);
    }
    pUVar64 = Characters_HumanSetupMaterials__GetHairMaterial(pSVar72,(MethodInfo *)0x0);
    if (__this_01 == (UnityEngine_Renderer_o *)0x0) goto label_1821a0fc0;
    UnityEngine_Renderer__set_sharedMaterial(__this_01,pUVar64,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_184346e3d == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Material_Add);
      Il2CppMethodInitialized_184346e3d = '\x01';
    }
    pUVar64 = UnityEngine_Renderer__get_material(__this_01,(MethodInfo *)0x0);
    pSVar31 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._ownedMaterials;
    if (pSVar31 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_1821a0fc0;
    System_Collections_Generic_HashSet_object___Add
              (pSVar31,(Il2CppObject *)pUVar64,
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_Material_Add);
    pSVar32 = (set->fields).HairColor;
    if (((pSVar32 == (Settings_ColorSetting_o *)0x0) ||
        (pUVar33 = (pSVar32->fields)._value, pUVar33 == (Utility_Color255_o *)0x0)) ||
       (pUVar65 = Utility_Color255__ToColor((UnityEngine_Color_o *)&local_70,pUVar33,(MethodInfo *)0x0),
       pUVar64 == (UnityEngine_Material_o *)0x0)) goto label_1821a0fc0;
    uVar44 = (pUVar65->fields).r;
    uVar45 = (pUVar65->fields).g;
    uVar46 = (pUVar65->fields).b;
    uVar47 = (pUVar65->fields).a;
    local_98._0_4_ = uVar44;
    local_98._4_4_ = uVar45;
    local_98._8_4_ = uVar46;
    fStack_8c = (float)uVar47;
    UnityEngine_Material__set_color(pUVar64,(UnityEngine_Color_o *)local_98,(MethodInfo *)0x0);
  }
  pSVar67 = System_Int32__ToString(local_res20,(MethodInfo *)0x0);
  pSVar67 = System_String__Concat_1969e50("TitanHead",pSVar67,(MethodInfo *)0x0);
  pUVar61 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar61 == (UnityEngine_Transform_o *)0x0) goto label_1821a0fc0;
  pUVar61 = UnityEngine_Transform__Find(pUVar61,"Head",(MethodInfo *)0x0);
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  pSVar72 = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
  pSVar67 = System_String__Concat_1969e50("Titans/Heads/Prefabs/",pSVar67,(MethodInfo *)0x0);
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  pUVar66 = ApplicationManagers_ResourceManager__LoadAsset(pSVar72,pSVar67,true,(MethodInfo *)0x0);
  if (pUVar66 == (UnityEngine_Object_o *)0x0) goto label_1821a0fc0;
  pUVar79 = (UnityEngine_Object_o *)0x0;
  if (pUVar66->klass == (UnityEngine_Object_c *)TypeInfo_UnityEngine_GameObject) {
    pUVar79 = pUVar66;
  }
  if (pUVar79 == (UnityEngine_Object_o *)0x0) {
    il2cpp_codegen_raise_invalid_cast_exception(pUVar66);
  }
  pUVar79 = (UnityEngine_Object_o *)0x0;
  if (pUVar66->klass == (UnityEngine_Object_c *)TypeInfo_UnityEngine_GameObject) {
    pUVar79 = pUVar66;
  }
  pUVar62 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar79,(MethodInfo *)0x0);
  if ((pUVar61 == (UnityEngine_Transform_o *)0x0) ||
     (pUVar63 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pUVar61,
                           (MethodInfo_6651A0 *)
                           MethodInfo_UnityEngine_Component_GetComponent_SkinnedMeshRenderer),
     pUVar63 == (UnityEngine_SkinnedMeshRenderer_o *)0x0)) goto label_1821a0fc0;
  UnityEngine_Renderer__set_sharedMaterial((UnityEngine_Renderer_o *)pUVar63,local_40,(MethodInfo *)0x0);
  pUVar63 = UnityEngine_Component__GetComponent_object_
                      ((UnityEngine_Component_o *)pUVar61,
                       (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_SkinnedMeshRenderer)
  ;
  if ((pUVar62 == (UnityEngine_Transform_o *)0x0) ||
     ((__this_02 = UnityEngine_Component__GetComponent_object_
                             ((UnityEngine_Component_o *)pUVar62,
                              (MethodInfo_6651A0 *)
                              MethodInfo_UnityEngine_Component_GetComponent_SkinnedMeshRenderer),
      __this_02 == (UnityEngine_SkinnedMeshRenderer_o *)0x0 ||
      (pUVar73 = UnityEngine_SkinnedMeshRenderer__get_sharedMesh(__this_02,(MethodInfo *)0x0),
      pUVar63 == (UnityEngine_SkinnedMeshRenderer_o *)0x0)))) goto label_1821a0fc0;
  UnityEngine_SkinnedMeshRenderer__set_sharedMesh(pUVar63,pUVar73,(MethodInfo *)0x0);
  pSVar67 = System_Int32__ToString(local_res20,(MethodInfo *)0x0);
  pSVar72 = System_String__Concat_1969e50("TitanHeadCollider",pSVar67,(MethodInfo *)0x0);
  pSVar67 = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
  pSVar72 = System_String__Concat_1969e50("Titans/Heads/Prefabs/",pSVar72,(MethodInfo *)0x0);
  pUVar66 = ApplicationManagers_ResourceManager__LoadAsset(pSVar67,pSVar72,true,(MethodInfo *)0x0);
  if (pUVar66 == (UnityEngine_Object_o *)0x0) goto label_1821a0fc0;
  pUVar79 = (UnityEngine_Object_o *)0x0;
  if (pUVar66->klass == (UnityEngine_Object_c *)TypeInfo_UnityEngine_GameObject) {
    pUVar79 = pUVar66;
  }
  if (pUVar79 == (UnityEngine_Object_o *)0x0) {
    il2cpp_codegen_raise_invalid_cast_exception(pUVar66);
  }
  pUVar79 = (UnityEngine_Object_o *)0x0;
  if (pUVar66->klass == (UnityEngine_Object_c *)TypeInfo_UnityEngine_GameObject) {
    pUVar79 = pUVar66;
  }
  pUVar61 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar79,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_184346e3f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_BoxCollider);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_CapsuleCollider)
    ;
    Il2CppMethodInitialized_184346e3f = '\x01';
  }
  if (pUVar61 == (UnityEngine_Transform_o *)0x0) goto label_1821a0fc0;
  __this_03 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar61,
                         (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_CapsuleCollider);
  pUVar62 = local_88[0];
  __this_04 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)local_88[0],
                         (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_CapsuleCollider);
  if ((__this_03 == (UnityEngine_CapsuleCollider_o *)0x0) ||
     (pUVar74 = UnityEngine_CapsuleCollider__get_center
                          ((UnityEngine_Vector3_o *)local_88,__this_03,(MethodInfo *)0x0),
     __this_04 == (UnityEngine_CapsuleCollider_o *)0x0)) goto label_1821a0fc0;
  uVar3 = (pUVar74->fields).x;
  uVar18 = (pUVar74->fields).y;
  local_98._8_4_ = (pUVar74->fields).z;
  local_98._0_4_ = uVar3;
  local_98._4_4_ = uVar18;
  UnityEngine_CapsuleCollider__set_center(__this_04,(UnityEngine_Vector3_o *)local_98,(MethodInfo *)0x0);
  fVar81 = UnityEngine_CapsuleCollider__get_radius(__this_03,(MethodInfo *)0x0);
  UnityEngine_CapsuleCollider__set_radius(__this_04,fVar81,(MethodInfo *)0x0);
  fVar81 = UnityEngine_CapsuleCollider__get_height(__this_03,(MethodInfo *)0x0);
  UnityEngine_CapsuleCollider__set_height(__this_04,fVar81,(MethodInfo *)0x0);
  pUVar75 = UnityEngine_Transform__Find(pUVar61,"Bone",(MethodInfo *)0x0);
  pUVar76 = UnityEngine_Transform__Find(pUVar62,"Bone",(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_184346e3f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_BoxCollider);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_CapsuleCollider)
    ;
    Il2CppMethodInitialized_184346e3f = '\x01';
  }
  if ((((pUVar75 == (UnityEngine_Transform_o *)0x0) ||
       (pUVar77 = UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)pUVar75,
                             (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_BoxCollider),
       pUVar76 == (UnityEngine_Transform_o *)0x0)) ||
      (pUVar78 = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)pUVar76,
                            (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_BoxCollider),
      pUVar77 == (UnityEngine_BoxCollider_o *)0x0)) ||
     (pUVar74 = UnityEngine_BoxCollider__get_center
                          ((UnityEngine_Vector3_o *)local_88,pUVar77,(MethodInfo *)0x0),
     pUVar78 == (UnityEngine_BoxCollider_o *)0x0)) goto label_1821a0fc0;
  uVar4 = (pUVar74->fields).x;
  uVar19 = (pUVar74->fields).y;
  local_98._8_4_ = (pUVar74->fields).z;
  local_98._0_4_ = uVar4;
  local_98._4_4_ = uVar19;
  UnityEngine_BoxCollider__set_center(pUVar78,(UnityEngine_Vector3_o *)local_98,(MethodInfo *)0x0);
  pUVar74 = UnityEngine_BoxCollider__get_size((UnityEngine_Vector3_o *)local_88,pUVar77,(MethodInfo *)0x0);
  uVar5 = (pUVar74->fields).x;
  uVar20 = (pUVar74->fields).y;
  local_98._8_4_ = (pUVar74->fields).z;
  local_98._0_4_ = uVar5;
  local_98._4_4_ = uVar20;
  UnityEngine_BoxCollider__set_size(pUVar78,(UnityEngine_Vector3_o *)local_98,(MethodInfo *)0x0);
  pUVar75 = UnityEngine_Transform__Find(pUVar61,"EyesHurtbox",(MethodInfo *)0x0);
  pUVar76 = UnityEngine_Transform__Find(pUVar62,"EyesHurtbox",(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_184346e3f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_BoxCollider);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_CapsuleCollider)
    ;
    Il2CppMethodInitialized_184346e3f = '\x01';
  }
  if (((pUVar75 == (UnityEngine_Transform_o *)0x0) ||
      (pUVar77 = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)pUVar75,
                            (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_BoxCollider),
      pUVar76 == (UnityEngine_Transform_o *)0x0)) ||
     ((pUVar78 = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)pUVar76,
                            (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_BoxCollider),
      pUVar77 == (UnityEngine_BoxCollider_o *)0x0 ||
      (pUVar74 = UnityEngine_BoxCollider__get_center
                           ((UnityEngine_Vector3_o *)local_88,pUVar77,(MethodInfo *)0x0),
      pUVar78 == (UnityEngine_BoxCollider_o *)0x0)))) goto label_1821a0fc0;
  uVar6 = (pUVar74->fields).x;
  uVar21 = (pUVar74->fields).y;
  local_98._8_4_ = (pUVar74->fields).z;
  local_98._0_4_ = uVar6;
  local_98._4_4_ = uVar21;
  UnityEngine_BoxCollider__set_center(pUVar78,(UnityEngine_Vector3_o *)local_98,(MethodInfo *)0x0);
  pUVar74 = UnityEngine_BoxCollider__get_size((UnityEngine_Vector3_o *)local_88,pUVar77,(MethodInfo *)0x0);
  uVar7 = (pUVar74->fields).x;
  uVar22 = (pUVar74->fields).y;
  local_98._8_4_ = (pUVar74->fields).z;
  local_98._0_4_ = uVar7;
  local_98._4_4_ = uVar22;
  UnityEngine_BoxCollider__set_size(pUVar78,(UnityEngine_Vector3_o *)local_98,(MethodInfo *)0x0);
  pUVar75 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar78,(MethodInfo *)0x0);
  pUVar76 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar77,(MethodInfo *)0x0);
  if ((pUVar76 == (UnityEngine_Transform_o *)0x0) ||
     (pUVar74 = UnityEngine_Transform__get_localPosition
                          ((UnityEngine_Vector3_o *)local_88,pUVar76,(MethodInfo *)0x0),
     pUVar75 == (UnityEngine_Transform_o *)0x0)) goto label_1821a0fc0;
  uVar8 = (pUVar74->fields).x;
  uVar23 = (pUVar74->fields).y;
  local_98._8_4_ = (pUVar74->fields).z;
  local_98._0_4_ = uVar8;
  local_98._4_4_ = uVar23;
  UnityEngine_Transform__set_localPosition(pUVar75,(UnityEngine_Vector3_o *)local_98,(MethodInfo *)0x0);
  pUVar75 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar78,(MethodInfo *)0x0);
  pUVar76 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar77,(MethodInfo *)0x0);
  if ((pUVar76 == (UnityEngine_Transform_o *)0x0) ||
     (pUVar70 = UnityEngine_Transform__get_localRotation
                          ((UnityEngine_Quaternion_o *)&local_70,pUVar76,(MethodInfo *)0x0),
     pUVar75 == (UnityEngine_Transform_o *)0x0)) goto label_1821a0fc0;
  uVar48 = (pUVar70->fields).x;
  uVar49 = (pUVar70->fields).y;
  uVar50 = (pUVar70->fields).z;
  uVar51 = (pUVar70->fields).w;
  local_98._0_4_ = uVar48;
  local_98._4_4_ = uVar49;
  local_98._8_4_ = uVar50;
  fStack_8c = (float)uVar51;
  UnityEngine_Transform__set_localRotation(pUVar75,(UnityEngine_Quaternion_o *)local_98,(MethodInfo *)0x0);
  pUVar75 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar78,(MethodInfo *)0x0);
  pUVar76 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar77,(MethodInfo *)0x0);
  if ((pUVar76 == (UnityEngine_Transform_o *)0x0) ||
     (pUVar74 = UnityEngine_Transform__get_localScale
                          ((UnityEngine_Vector3_o *)local_88,pUVar76,(MethodInfo *)0x0),
     pUVar75 == (UnityEngine_Transform_o *)0x0)) goto label_1821a0fc0;
  uVar9 = (pUVar74->fields).x;
  uVar24 = (pUVar74->fields).y;
  local_98._8_4_ = (pUVar74->fields).z;
  local_98._0_4_ = uVar9;
  local_98._4_4_ = uVar24;
  UnityEngine_Transform__set_localScale(pUVar75,(UnityEngine_Vector3_o *)local_98,(MethodInfo *)0x0);
  pUVar75 = UnityEngine_Transform__Find(pUVar61,"HairSocket",(MethodInfo *)0x0);
  pUVar76 = UnityEngine_Transform__Find(pUVar62,"HairSocket",(MethodInfo *)0x0);
  if ((pUVar75 == (UnityEngine_Transform_o *)0x0) ||
     (pUVar74 = UnityEngine_Transform__get_localPosition
                          ((UnityEngine_Vector3_o *)local_88,pUVar75,(MethodInfo *)0x0),
     pUVar76 == (UnityEngine_Transform_o *)0x0)) goto label_1821a0fc0;
  uVar10 = (pUVar74->fields).x;
  uVar25 = (pUVar74->fields).y;
  local_98._8_4_ = (pUVar74->fields).z;
  local_98._0_4_ = uVar10;
  local_98._4_4_ = uVar25;
  UnityEngine_Transform__set_localPosition(pUVar76,(UnityEngine_Vector3_o *)local_98,(MethodInfo *)0x0);
  pUVar70 = UnityEngine_Transform__get_localRotation
                      ((UnityEngine_Quaternion_o *)&local_70,pUVar75,(MethodInfo *)0x0);
  uVar52 = (pUVar70->fields).x;
  uVar53 = (pUVar70->fields).y;
  uVar54 = (pUVar70->fields).z;
  uVar55 = (pUVar70->fields).w;
  local_98._0_4_ = uVar52;
  local_98._4_4_ = uVar53;
  local_98._8_4_ = uVar54;
  fStack_8c = (float)uVar55;
  UnityEngine_Transform__set_localRotation(pUVar76,(UnityEngine_Quaternion_o *)local_98,(MethodInfo *)0x0);
  pUVar74 = UnityEngine_Transform__get_localScale((UnityEngine_Vector3_o *)local_88,pUVar75,(MethodInfo *)0x0)
  ;
  uVar11 = (pUVar74->fields).x;
  uVar26 = (pUVar74->fields).y;
  local_98._8_4_ = (pUVar74->fields).z;
  local_98._0_4_ = uVar11;
  local_98._4_4_ = uVar26;
  UnityEngine_Transform__set_localScale(pUVar76,(UnityEngine_Vector3_o *)local_98,(MethodInfo *)0x0);
  pUVar75 = UnityEngine_Transform__Find(pUVar61,"Nose",(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar60 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pUVar75,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar60) {
    pUVar61 = UnityEngine_Transform__Find(pUVar61,"Nose",(MethodInfo *)0x0);
    pUVar69 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor_2f1ad20(pUVar69,(MethodInfo *)0x0);
    if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
    }
    if (pUVar69 == (UnityEngine_GameObject_o *)0x0) goto label_1821a0fe1;
    UnityEngine_GameObject__set_layer
              (pUVar69,TypeInfo_Utility_PhysicsLayer->static_fields->TitanPushbox,(MethodInfo *)0x0);
    pUVar75 = UnityEngine_GameObject__get_transform(pUVar69,(MethodInfo *)0x0);
    if (pUVar75 == (UnityEngine_Transform_o *)0x0) goto label_1821a0fe1;
    UnityEngine_Transform__SetParent(pUVar75,pUVar62,(MethodInfo *)0x0);
    pUVar75 = UnityEngine_GameObject__get_transform(pUVar69,(MethodInfo *)0x0);
    if (pUVar61 == (UnityEngine_Transform_o *)0x0) goto label_1821a0fe1;
    pUVar74 = UnityEngine_Transform__get_localPosition
                        ((UnityEngine_Vector3_o *)local_88,pUVar61,(MethodInfo *)0x0);
    if (pUVar75 == (UnityEngine_Transform_o *)0x0) goto label_1821a0fe1;
    uVar12 = (pUVar74->fields).x;
    uVar27 = (pUVar74->fields).y;
    local_98._8_4_ = (pUVar74->fields).z;
    local_98._0_4_ = uVar12;
    local_98._4_4_ = uVar27;
    UnityEngine_Transform__set_localPosition(pUVar75,(UnityEngine_Vector3_o *)local_98,(MethodInfo *)0x0);
    pUVar75 = UnityEngine_GameObject__get_transform(pUVar69,(MethodInfo *)0x0);
    pUVar70 = UnityEngine_Transform__get_localRotation
                        ((UnityEngine_Quaternion_o *)&local_70,pUVar61,(MethodInfo *)0x0);
    if (pUVar75 == (UnityEngine_Transform_o *)0x0) goto label_1821a0fe1;
    uVar56 = (pUVar70->fields).x;
    uVar57 = (pUVar70->fields).y;
    uVar58 = (pUVar70->fields).z;
    uVar59 = (pUVar70->fields).w;
    local_98._0_4_ = uVar56;
    local_98._4_4_ = uVar57;
    local_98._8_4_ = uVar58;
    fStack_8c = (float)uVar59;
    UnityEngine_Transform__set_localRotation(pUVar75,(UnityEngine_Quaternion_o *)local_98,(MethodInfo *)0x0);
    pUVar75 = UnityEngine_GameObject__get_transform(pUVar69,(MethodInfo *)0x0);
    pUVar74 = UnityEngine_Transform__get_localScale
                        ((UnityEngine_Vector3_o *)local_88,pUVar61,(MethodInfo *)0x0);
    if (pUVar75 == (UnityEngine_Transform_o *)0x0) goto label_1821a0fe1;
    uVar13 = (pUVar74->fields).x;
    uVar28 = (pUVar74->fields).y;
    local_98._8_4_ = (pUVar74->fields).z;
    local_98._0_4_ = uVar13;
    local_98._4_4_ = uVar28;
    UnityEngine_Transform__set_localScale(pUVar75,(UnityEngine_Vector3_o *)local_98,(MethodInfo *)0x0);
    pUVar77 = UnityEngine_GameObject__AddComponent_object_
                        (pUVar69,(MethodInfo_6F4D60 *)
                                 MethodInfo_UnityEngine_GameObject_AddComponent_BoxCollider);
    if (Il2CppMethodInitialized_18433dbea == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433dbea = '\x01';
    }
    if (pUVar77 == (UnityEngine_BoxCollider_o *)0x0) goto label_1821a0fe1;
    pUVar35 = TypeInfo_UnityEngine_Vector3->static_fields;
    uVar14 = (pUVar35->zeroVector).fields.x;
    uVar29 = (pUVar35->zeroVector).fields.y;
    local_98._8_4_ = (pUVar35->zeroVector).fields.z;
    local_98._0_4_ = uVar14;
    local_98._4_4_ = uVar29;
    UnityEngine_BoxCollider__set_center(pUVar77,(UnityEngine_Vector3_o *)local_98,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_18433dbeb == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433dbeb = '\x01';
    }
    pUVar35 = TypeInfo_UnityEngine_Vector3->static_fields;
    uVar15 = (pUVar35->oneVector).fields.x;
    uVar30 = (pUVar35->oneVector).fields.y;
    local_98._8_4_ = (pUVar35->oneVector).fields.z;
    local_98._0_4_ = uVar15;
    local_98._4_4_ = uVar30;
    UnityEngine_BoxCollider__set_size(pUVar77,(UnityEngine_Vector3_o *)local_98,(MethodInfo *)0x0);
  }
  pSVar67 = System_Int32__ToString(local_res20,(MethodInfo *)0x0);
  pSVar67 = System_String__Concat_1969e50("TitanEyes",pSVar67,(MethodInfo *)0x0);
  local_78[0] = Settings_TitanCustomSet__GetEye(set,(MethodInfo *)0x0);
  pUVar61 = UnityEngine_Transform__Find(pUVar62,"Eyes",(MethodInfo *)0x0);
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  pSVar72 = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
  pSVar67 = System_String__Concat_1969e50("Titans/Heads/Prefabs/",pSVar67,(MethodInfo *)0x0);
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  pUVar66 = ApplicationManagers_ResourceManager__LoadAsset(pSVar72,pSVar67,true,(MethodInfo *)0x0);
  if (pUVar66 != (UnityEngine_Object_o *)0x0) {
    pUVar79 = (UnityEngine_Object_o *)0x0;
    if (pUVar66->klass == (UnityEngine_Object_c *)TypeInfo_UnityEngine_GameObject) {
      pUVar79 = pUVar66;
    }
    if (pUVar79 == (UnityEngine_Object_o *)0x0) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar66);
    }
    pUVar79 = (UnityEngine_Object_o *)0x0;
    if (pUVar66->klass == (UnityEngine_Object_c *)TypeInfo_UnityEngine_GameObject) {
      pUVar79 = pUVar66;
    }
    pUVar62 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar79,(MethodInfo *)0x0);
    if (pUVar61 != (UnityEngine_Transform_o *)0x0) {
      __this_05 = UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)pUVar61,
                             (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_MeshFilter);
      if (pUVar62 != (UnityEngine_Transform_o *)0x0) {
        __this_06 = UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)pUVar62,
                               (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_MeshFilter);
        if (__this_06 != (UnityEngine_MeshFilter_o *)0x0) {
          pUVar73 = UnityEngine_MeshFilter__get_sharedMesh(__this_06,(MethodInfo *)0x0);
          if (__this_05 != (UnityEngine_MeshFilter_o *)0x0) {
            UnityEngine_MeshFilter__set_sharedMesh(__this_05,pUVar73,(MethodInfo *)0x0);
            __this_07 = UnityEngine_Component__GetComponent_object_
                                  ((UnityEngine_Component_o *)pUVar61,
                                   (MethodInfo_6651A0 *)
                                   MethodInfo_UnityEngine_Component_GetComponent_MeshRenderer);
            pSVar67 = System_Int32__ToString(local_78,(MethodInfo *)0x0);
            pSVar67 = System_String__Concat_1969e50("Eye",pSVar67,(MethodInfo *)0x0);
            if ((TypeInfo_Characters_HumanSetupMaterials->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetupMaterials);
            }
            pUVar64 = Characters_HumanSetupMaterials__GetTitanEyeMaterial(pSVar67,(MethodInfo *)0x0);
            if (__this_07 != (UnityEngine_MeshRenderer_o *)0x0) {
              UnityEngine_Renderer__set_sharedMaterial
                        ((UnityEngine_Renderer_o *)__this_07,pUVar64,(MethodInfo *)0x0);
              if (local_38 != (System_Collections_Generic_List_Material__o *)0x0) {
                System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                          (&local_70,(System_Collections_Generic_List_T__o *)local_38,
                           (MethodInfo_91F180 *)
                           MethodInfo_System_Collections_Generic_List_Material_GetEnumerator);
                local_58.fields._list = local_70.fields._list;
                local_58.fields._index = local_70.fields._index;
                local_58.fields._version = local_70.fields._version;
                local_58.fields._current = local_70.fields._current;
                local_98._0_4_ = 0.0;
                local_98._4_4_ = 0.0;
                unique0x1000291c = &local_58;
                while( true ) {
                  bVar60 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                     (&local_58,
                                      (MethodInfo_153A2A0 *)
                                      MethodInfo_System_Collections_Generic_List_Enumerator_Material_MoveNext)
                  ;
                  x = local_58.fields._current;
                  if (!bVar60) break;
                  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                  }
                  bVar60 = UnityEngine_Object__op_Inequality
                                     ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
                  ;
                  if (bVar60) {
                    pSVar31 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._ownedMaterials
                    ;
                    if (pSVar31 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    bVar60 = System_Collections_Generic_HashSet_object___Contains
                                       (pSVar31,x,
                                        (MethodInfo_1759E40 *)
                                        MethodInfo_System_Collections_Generic_HashSet_Material_Contains);
                    if (!bVar60) {
                      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                      }
                      UnityEngine_Object__Destroy_2f1ff70((UnityEngine_Object_o *)x,(MethodInfo *)0x0);
                    }
                  }
                }
                System_Collections_Generic_List_Enumerator_object___Dispose
                          ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_58,
                           MethodInfo_System_Collections_Generic_List_Enumerator_Material_Dispose);
                __this_08 = UnityEngine_Component__GetComponent_object_
                                      ((UnityEngine_Component_o *)__this,
                                       (MethodInfo_6651A0 *)
                                       MethodInfo_UnityEngine_Component_GetComponent_BaseCharacter);
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                bVar60 = UnityEngine_Object__op_Inequality
                                   ((UnityEngine_Object_o *)__this_08,(UnityEngine_Object_o *)0x0,
                                    (MethodInfo *)0x0);
                if (bVar60) {
                  if (__this_08 == (Characters_BaseCharacter_o *)0x0) goto label_1821a0fe1;
                  Characters_BaseCharacter__RefreshRenderers(__this_08,(MethodInfo *)0x0);
                }
                return;
              }
            }
          }
        }
      }
    }
  }
label_1821a0fe1:
  ThrowNullReferenceException();
}


// Characters.BasicTitanSetup$$OwnInstance
// il2cpp: UnityEngine_Material_o* Characters_BasicTitanSetup__OwnInstance (Characters_BasicTitanSetup_o* __this, UnityEngine_Renderer_o* renderer, const MethodInfo* method);
// 0x1821a1160

UnityEngine_Material_o *
Characters_BasicTitanSetup__OwnInstance
          (Characters_BasicTitanSetup_o *__this,UnityEngine_Renderer_o *renderer,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  UnityEngine_Material_o *item;
  
  if (Il2CppMethodInitialized_184346e3d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Material_Add);
    Il2CppMethodInitialized_184346e3d = '\x01';
  }
  if (renderer != (UnityEngine_Renderer_o *)0x0) {
    item = UnityEngine_Renderer__get_material(renderer,(MethodInfo *)0x0);
    __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._ownedMaterials;
    if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___Add
                (__this_00,(Il2CppObject *)item,
                 (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_Material_Add);
      return item;
    }
  }
  ThrowNullReferenceException();
}


// Characters.BasicTitanSetup$$OnDestroy
// il2cpp: void Characters_BasicTitanSetup__OnDestroy (Characters_BasicTitanSetup_o* __this, const MethodInfo* method);
// 0x1821a1000
// eh: try 0x1821a10b0..0x1821a1111 -> pad 0x183315930 catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821a10af: nop 
// asm:   0x1821a1122: mov rdx, qword ptr [rip + 0x1eeb5ff]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_Material_Dispose
// asm:   0x1821a1129: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1821a112e: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821a1133: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1821a1138: test rcx, rcx
// asm:   0x1821a113b: jne 0x1821a1148
// asm:   0x1821a1148: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

void Characters_BasicTitanSetup__OnDestroy(Characters_BasicTitanSetup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_Vector2Int__o *__this_00;
  Il2CppObject *x;
  bool bVar1;
  undefined1 local_40 [16];
  UnityEngine_Object_o *local_30;
  System_Collections_Generic_HashSet_Enumerator_T__o local_28;
  
  if (Il2CppMethodInitialized_184346e3e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Material_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Material_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Material_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Material_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346e3e = '\x01';
  }
  local_28.fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._current = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_HashSet_Vector2Int__o *)(__this->fields)._ownedMaterials;
  if (__this_00 != (System_Collections_Generic_HashSet_Vector2Int__o *)0x0) {
    System_Collections_Generic_HashSet_Vector2Int___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_40,__this_00,
               (MethodInfo_175C200 *)MethodInfo_System_Collections_Generic_HashSet_Material_GetEnumerator);
    local_28.fields._set = (System_Collections_Generic_HashSet_T__o *)local_40._0_8_;
    local_28.fields._index = local_40._8_4_;
    local_28.fields._version = local_40._12_4_;
    local_28.fields._current = (Il2CppObject *)local_30;
    local_40._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
    local_40._8_8_ = &local_28;
    while( true ) {
      bVar1 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                        (&local_28,
                         (MethodInfo_15381F0 *)
                         MethodInfo_System_Collections_Generic_HashSet_Enumerator_Material_MoveNext);
      x = local_28.fields._current;
      if (!bVar1) break;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_2f1ff70((UnityEngine_Object_o *)x,(MethodInfo *)0x0);
      }
    }
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
               MethodInfo_System_Collections_Generic_HashSet_Enumerator_Material_Dispose);
    return;
  }
  ThrowNullReferenceException();
}


// Characters.BasicTitanSetup$$CopyColliders
// il2cpp: void Characters_BasicTitanSetup__CopyColliders (Characters_BasicTitanSetup_o* __this, UnityEngine_Transform_o* from, UnityEngine_Transform_o* to, bool capsule, bool moveTransform, const MethodInfo* method);
// 0x18219e490

void Characters_BasicTitanSetup__CopyColliders
               (Characters_BasicTitanSetup_o *__this,UnityEngine_Transform_o *from,UnityEngine_Transform_o *to
               ,bool capsule,bool moveTransform,MethodInfo *method)

{
  UnityEngine_BoxCollider_o *__this_00;
  UnityEngine_BoxCollider_o *__this_01;
  UnityEngine_Vector3_o *pUVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_Quaternion_o *pUVar4;
  float fVar5;
  UnityEngine_Vector3_Fields local_48;
  UnityEngine_Quaternion_Fields local_38;
  
  if (Il2CppMethodInitialized_184346e3f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_BoxCollider);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_CapsuleCollider)
    ;
    Il2CppMethodInitialized_184346e3f = '\x01';
  }
  if (from != (UnityEngine_Transform_o *)0x0) {
    if (capsule) {
      __this_00 = (UnityEngine_BoxCollider_o *)
                  UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)from,
                             (MethodInfo_6651A0 *)
                             MethodInfo_UnityEngine_Component_GetComponent_CapsuleCollider);
      if (((to == (UnityEngine_Transform_o *)0x0) ||
          (__this_01 = (UnityEngine_BoxCollider_o *)
                       UnityEngine_Component__GetComponent_object_
                                 ((UnityEngine_Component_o *)to,
                                  (MethodInfo_6651A0 *)
                                  MethodInfo_UnityEngine_Component_GetComponent_CapsuleCollider),
          __this_00 == (UnityEngine_BoxCollider_o *)0x0)) ||
         (pUVar1 = UnityEngine_CapsuleCollider__get_center
                             ((UnityEngine_Vector3_o *)&local_38,(UnityEngine_CapsuleCollider_o *)__this_00,
                              (MethodInfo *)0x0), __this_01 == (UnityEngine_BoxCollider_o *)0x0))
      goto label_18219e718;
      local_48.x = (pUVar1->fields).x;
      local_48.y = (pUVar1->fields).y;
      local_48.z = (pUVar1->fields).z;
      UnityEngine_CapsuleCollider__set_center
                ((UnityEngine_CapsuleCollider_o *)__this_01,(UnityEngine_Vector3_o *)&local_48,
                 (MethodInfo *)0x0);
      fVar5 = UnityEngine_CapsuleCollider__get_radius
                        ((UnityEngine_CapsuleCollider_o *)__this_00,(MethodInfo *)0x0);
      UnityEngine_CapsuleCollider__set_radius
                ((UnityEngine_CapsuleCollider_o *)__this_01,fVar5,(MethodInfo *)0x0);
      fVar5 = UnityEngine_CapsuleCollider__get_height
                        ((UnityEngine_CapsuleCollider_o *)__this_00,(MethodInfo *)0x0);
      UnityEngine_CapsuleCollider__set_height
                ((UnityEngine_CapsuleCollider_o *)__this_01,fVar5,(MethodInfo *)0x0);
    }
    else {
      __this_00 = UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)from,
                             (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_BoxCollider);
      if (((to == (UnityEngine_Transform_o *)0x0) ||
          (__this_01 = UnityEngine_Component__GetComponent_object_
                                 ((UnityEngine_Component_o *)to,
                                  (MethodInfo_6651A0 *)
                                  MethodInfo_UnityEngine_Component_GetComponent_BoxCollider),
          __this_00 == (UnityEngine_BoxCollider_o *)0x0)) ||
         (pUVar1 = UnityEngine_BoxCollider__get_center
                             ((UnityEngine_Vector3_o *)&local_38,__this_00,(MethodInfo *)0x0),
         __this_01 == (UnityEngine_BoxCollider_o *)0x0)) goto label_18219e718;
      local_48.x = (pUVar1->fields).x;
      local_48.y = (pUVar1->fields).y;
      local_48.z = (pUVar1->fields).z;
      UnityEngine_BoxCollider__set_center(__this_01,(UnityEngine_Vector3_o *)&local_48,(MethodInfo *)0x0);
      pUVar1 = UnityEngine_BoxCollider__get_size
                         ((UnityEngine_Vector3_o *)&local_38,__this_00,(MethodInfo *)0x0);
      local_48.x = (pUVar1->fields).x;
      local_48.y = (pUVar1->fields).y;
      local_48.z = (pUVar1->fields).z;
      UnityEngine_BoxCollider__set_size(__this_01,(UnityEngine_Vector3_o *)&local_48,(MethodInfo *)0x0);
    }
    if (!moveTransform) {
      return;
    }
    pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
    pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    if ((pUVar3 != (UnityEngine_Transform_o *)0x0) &&
       (pUVar1 = UnityEngine_Transform__get_localPosition
                           ((UnityEngine_Vector3_o *)&local_38,pUVar3,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_Transform_o *)0x0)) {
      local_48.x = (pUVar1->fields).x;
      local_48.y = (pUVar1->fields).y;
      local_48.z = (pUVar1->fields).z;
      UnityEngine_Transform__set_localPosition(pUVar2,(UnityEngine_Vector3_o *)&local_48,(MethodInfo *)0x0);
      pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
      pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
      if ((pUVar3 != (UnityEngine_Transform_o *)0x0) &&
         (pUVar4 = UnityEngine_Transform__get_localRotation
                             ((UnityEngine_Quaternion_o *)&local_38,pUVar3,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_Transform_o *)0x0)) {
        local_38.x = (pUVar4->fields).x;
        local_38.y = (pUVar4->fields).y;
        local_38.z = (pUVar4->fields).z;
        local_38.w = (pUVar4->fields).w;
        UnityEngine_Transform__set_localRotation
                  (pUVar2,(UnityEngine_Quaternion_o *)&local_38,(MethodInfo *)0x0);
        pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
        pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
        if ((pUVar3 != (UnityEngine_Transform_o *)0x0) &&
           (pUVar1 = UnityEngine_Transform__get_localScale
                               ((UnityEngine_Vector3_o *)&local_38,pUVar3,(MethodInfo *)0x0),
           pUVar2 != (UnityEngine_Transform_o *)0x0)) {
          local_48.x = (pUVar1->fields).x;
          local_48.y = (pUVar1->fields).y;
          local_48.z = (pUVar1->fields).z;
          UnityEngine_Transform__set_localScale(pUVar2,(UnityEngine_Vector3_o *)&local_48,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_18219e718:
  ThrowNullReferenceException();
}


// Characters.BasicTitanSetup$$.ctor
// il2cpp: void Characters_BasicTitanSetup___ctor (Characters_BasicTitanSetup_o* __this, const MethodInfo* method);
// 0x1821a13d0

void Characters_BasicTitanSetup___ctor(Characters_BasicTitanSetup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_Material__o *__this_00;
  
  if (Il2CppMethodInitialized_184346e40 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Material_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_Material);
    Il2CppMethodInitialized_184346e40 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_Material);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this_00,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_Material_ctor);
  (__this->fields)._ownedMaterials = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._ownedMaterials,__this_00);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.BasicTitanSetup$$.cctor
// il2cpp: void Characters_BasicTitanSetup___cctor (const MethodInfo* method);
// 0x1821a11d0

void Characters_BasicTitanSetup___cctor(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__string__o *__this;
  System_Collections_Generic_List_string__o *pSVar1;
  System_Collections_Generic_List_int__o *__this_00;
  System_Collections_Generic_List_Color255__o *__this_01;
  
  if (Il2CppMethodInitialized_184346e41 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitanSetup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Color255_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Color255);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    Il2CppMethodInitialized_184346e41 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
  TypeInfo_Characters_BasicTitanSetup->static_fields->HairPrefabs = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_BasicTitanSetup->static_fields->HairPrefabs,__this);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar1,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  TypeInfo_Characters_BasicTitanSetup->static_fields->AllHairs = pSVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_BasicTitanSetup->static_fields->AllHairs,pSVar1);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar1,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  TypeInfo_Characters_BasicTitanSetup->static_fields->AIHairs = pSVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_BasicTitanSetup->static_fields->AIHairs,pSVar1);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
  System_Collections_Generic_List_int____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_int_ctor);
  TypeInfo_Characters_BasicTitanSetup->static_fields->AIEyes = __this_00;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_BasicTitanSetup->static_fields->AIEyes,__this_00);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Color255);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_01,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Color255_ctor);
  TypeInfo_Characters_BasicTitanSetup->static_fields->AIHairColors = __this_01;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_BasicTitanSetup->static_fields->AIHairColors,__this_01);
  return;
}


