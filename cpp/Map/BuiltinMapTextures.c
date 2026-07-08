// Type: Map.BuiltinMapTextures
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Map/BuiltinMapTextures.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Map/BuiltinMapTextures.cs  [CHANGED since prior version]
// --------------------------------

// Map.BuiltinMapTextures$$Init
// il2cpp: void Map_BuiltinMapTextures__Init (const MethodInfo* method);
// 0x3d9af20

void Map_BuiltinMapTextures__Init(MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  System_Object_array *pSVar5;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_00;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_01;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_02;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_03;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_04;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_05;
  char cVar6;
  bool_conflict bVar7;
  UnityEngine_Object_o *__this_06;
  System_String_o *pSVar8;
  SimpleJSONFixed_JSONNode_o *pSVar9;
  long *plVar10;
  System_Collections_Generic_List_object__o *pSVar11;
  Map_MapScriptBasicMaterial_o *__this_07;
  System_String_o *str2;
  System_String_o *pSVar12;
  Il2CppObject *value;
  long lVar13;
  MethodInfo *method_00;
  float fVar14;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o aKeyValue;
  undefined1 in_stack_fffffffffffffe88 [12];
  float in_stack_fffffffffffffe94;
  System_String_o *in_stack_fffffffffffffe98;
  Il2CppMethodPointer in_stack_fffffffffffffea0;
  System_Collections_Generic_Dictionary_TKey__TValue__o *in_stack_fffffffffffffea8;
  InvokerMethod in_stack_fffffffffffffeb0;
  Il2CppObject *in_stack_fffffffffffffeb8;
  Il2CppClass *in_stack_fffffffffffffec0;
  Il2CppType *in_stack_fffffffffffffec8;
  System_Collections_Generic_List_T__o *local_130;
  _union_13 _Stack_128;
  _union_14 local_120;
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
  
  if (DAT_05702758 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinMapTextures);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Map_MapScriptBasicMaterial__get_Item);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Map_MapScriptBasicMaterial);
    il2cpp_init_method_metadata(&TypeInfo_List_MapScriptBasicMaterial);
    il2cpp_init_method_metadata(&TypeInfo_MapScriptBasicMaterial);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&TypeInfo_TextAsset);
    il2cpp_init_method_metadata(&"TilingX");
    il2cpp_init_method_metadata(&"MapTextureList");
    il2cpp_init_method_metadata(&"TilingY");
    il2cpp_init_method_metadata(&"Name");
    il2cpp_init_method_metadata(&"Texture");
    il2cpp_init_method_metadata(&"/");
    il2cpp_init_method_metadata(&"Legacy");
    DAT_05702758 = '\x01';
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
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar8 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x18);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this_06 = ApplicationManagers_ResourceManager__LoadAsset
                        (pSVar8,"MapTextureList",0,(MethodInfo *)0x0);
  if (__this_06 != (UnityEngine_Object_o *)0x0) {
    bVar2 = (TypeInfo_TextAsset->_2).naturalAligment;
    if (((__this_06->klass->_2).naturalAligment < bVar2) ||
       ((__this_06->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_TextAsset)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(__this_06);
    }
    pSVar8 = UnityEngine_TextAsset__get_text((UnityEngine_TextAsset_o *)__this_06,(MethodInfo *)0x0)
    ;
    pSVar9 = SimpleJSONFixed_JSON__Parse(pSVar8,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_BuiltinMapTextures + 0xe4) == 0) {
      il2cpp_init_class();
    }
    **(undefined8 **)(TypeInfo_BuiltinMapTextures + 0xb8) = pSVar9;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_BuiltinMapTextures + 0xb8),pSVar9);
    if ((SimpleJSONFixed_JSONNode_o *)**(undefined8 **)(TypeInfo_BuiltinMapTextures + 0xb8) !=
        (SimpleJSONFixed_JSONNode_o *)0x0) {
      SimpleJSONFixed_JSONNode__get_Keys
                ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&stack0xfffffffffffffea0,
                 (SimpleJSONFixed_JSONNode_o *)**(undefined8 **)(TypeInfo_BuiltinMapTextures + 0xb8),
                 (MethodInfo *)0x0);
      local_38 = local_120;
      local_48 = local_130;
      _Stack_40 = _Stack_128;
      __this.fields.m_Enumerator.fields.m_Object.fields._dictionary._4_4_ =
           in_stack_fffffffffffffe94;
      __this.fields.m_Enumerator.fields._0_12_ = in_stack_fffffffffffffe88;
      __this.fields.m_Enumerator.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffe98;
      __this.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
           (Il2CppObject *)in_stack_fffffffffffffea0;
      __this.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
           (Il2CppObject *)in_stack_fffffffffffffea8;
      __this.fields.m_Enumerator.fields.m_Object.fields._32_8_ = in_stack_fffffffffffffeb0;
      __this.fields.m_Enumerator.fields.m_Array.fields._list =
           (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffeb8;
      __this.fields.m_Enumerator.fields.m_Array.fields._8_8_ = in_stack_fffffffffffffec0;
      __this.fields.m_Enumerator.fields.m_Array.fields._current =
           (SimpleJSONFixed_JSONNode_o *)in_stack_fffffffffffffec8;
      local_78 = in_stack_fffffffffffffea0;
      pSStack_70 = in_stack_fffffffffffffea8;
      local_68 = in_stack_fffffffffffffeb0;
      pIStack_60 = in_stack_fffffffffffffeb8;
      local_58 = in_stack_fffffffffffffec0;
      pIStack_50 = in_stack_fffffffffffffec8;
      SimpleJSONFixed_JSONNode_KeyEnumerator__GetEnumerator
                ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&stack0xfffffffffffffea0,__this,
                 (MethodInfo *)&local_78);
      local_118._64_8_ = local_120;
      local_118._48_8_ = local_130;
      local_118._56_8_ = _Stack_128;
      __this_00.fields.m_Enumerator.fields.m_Object.fields._dictionary._4_4_ =
           in_stack_fffffffffffffe94;
      __this_00.fields.m_Enumerator.fields._0_12_ = in_stack_fffffffffffffe88;
      __this_00.fields.m_Enumerator.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffe98;
      __this_00.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
           (Il2CppObject *)in_stack_fffffffffffffea0;
      __this_00.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
           (Il2CppObject *)in_stack_fffffffffffffea8;
      __this_00.fields.m_Enumerator.fields.m_Object.fields._32_8_ = in_stack_fffffffffffffeb0;
      __this_00.fields.m_Enumerator.fields.m_Array.fields._list =
           (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffeb8;
      __this_00.fields.m_Enumerator.fields.m_Array.fields._8_8_ = in_stack_fffffffffffffec0;
      __this_00.fields.m_Enumerator.fields.m_Array.fields._current =
           (SimpleJSONFixed_JSONNode_o *)in_stack_fffffffffffffec8;
      local_118._0_8_ = in_stack_fffffffffffffea0;
      local_118._8_8_ = in_stack_fffffffffffffea8;
      local_118._16_8_ = in_stack_fffffffffffffeb0;
      local_118._24_8_ = in_stack_fffffffffffffeb8;
      local_118._32_8_ = in_stack_fffffffffffffec0;
      local_118._40_8_ = in_stack_fffffffffffffec8;
      bVar7 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext(__this_00,(MethodInfo *)local_118);
      if ((char)bVar7 != '\0') {
        do {
          __this_02.fields.m_Enumerator.fields.m_Object.fields._dictionary._4_4_ =
               in_stack_fffffffffffffe94;
          __this_02.fields.m_Enumerator.fields._0_12_ = in_stack_fffffffffffffe88;
          __this_02.fields.m_Enumerator.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffe98;
          __this_02.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
               (Il2CppObject *)in_stack_fffffffffffffea0;
          __this_02.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
               (Il2CppObject *)in_stack_fffffffffffffea8;
          __this_02.fields.m_Enumerator.fields.m_Object.fields._32_8_ = in_stack_fffffffffffffeb0;
          __this_02.fields.m_Enumerator.fields.m_Array.fields._list =
               (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffeb8;
          __this_02.fields.m_Enumerator.fields.m_Array.fields._8_8_ = in_stack_fffffffffffffec0;
          __this_02.fields.m_Enumerator.fields.m_Array.fields._current =
               (SimpleJSONFixed_JSONNode_o *)in_stack_fffffffffffffec8;
          in_stack_fffffffffffffe98 =
               SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current
                         (__this_02,(MethodInfo *)local_118);
          if (*(int *)(TypeInfo_BuiltinMapTextures + 0xe4) == 0) {
            il2cpp_init_class();
          }
          plVar10 = (long *)**(long **)(TypeInfo_BuiltinMapTextures + 0xb8);
          if (plVar10 == (long *)0x0) goto LAB_03d9b779;
          plVar10 = (long *)(**(code **)(*plVar10 + 0x1a8))
                                      (plVar10,in_stack_fffffffffffffe98,
                                       *(undefined8 *)(*plVar10 + 0x1b0));
          pSVar4 = *(System_Collections_Generic_Dictionary_object__object__o **)
                    (*(long *)(TypeInfo_BuiltinMapTextures + 0xb8) + 0x10);
          pSVar11 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_MapScriptBasicMaterial);
          System_Collections_Generic_List<object>___ctor(pSVar11,MethodInfo_List_1_Map_MapScriptBasicMaterial);
          if ((pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
             (System_Collections_Generic_Dictionary<object__object>__Add
                        (pSVar4,(Il2CppObject *)in_stack_fffffffffffffe98,(Il2CppObject *)pSVar11,
                         MethodInfo_Void_Add), plVar10 == (long *)0x0)) goto LAB_03d9b779;
          (**(code **)(*plVar10 + 0x338))
                    (&stack0xfffffffffffffea0,plVar10,*(undefined8 *)(*plVar10 + 0x340));
          local_c8._64_8_ = local_120;
          local_c8._48_8_ = local_130;
          local_c8._56_8_ = _Stack_128;
          __this_03.fields.m_Object.fields._dictionary._4_4_ = in_stack_fffffffffffffe94;
          __this_03.fields._0_12_ = in_stack_fffffffffffffe88;
          __this_03.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffe98;
          __this_03.fields.m_Object.fields._current.fields.key =
               (Il2CppObject *)in_stack_fffffffffffffea0;
          __this_03.fields.m_Object.fields._current.fields.value =
               (Il2CppObject *)in_stack_fffffffffffffea8;
          __this_03.fields.m_Object.fields._32_8_ = in_stack_fffffffffffffeb0;
          __this_03.fields.m_Array.fields._list =
               (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffeb8;
          __this_03.fields.m_Array.fields._8_8_ = in_stack_fffffffffffffec0;
          __this_03.fields.m_Array.fields._current =
               (SimpleJSONFixed_JSONNode_o *)in_stack_fffffffffffffec8;
          local_c8._0_8_ = in_stack_fffffffffffffea0;
          local_c8._8_8_ = in_stack_fffffffffffffea8;
          local_c8._16_8_ = in_stack_fffffffffffffeb0;
          local_c8._24_8_ = in_stack_fffffffffffffeb8;
          local_c8._32_8_ = in_stack_fffffffffffffec0;
          local_c8._40_8_ = in_stack_fffffffffffffec8;
          bVar7 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this_03,(MethodInfo *)local_c8);
          cVar6 = (char)bVar7;
          while (cVar6 != '\0') {
            __this_05.fields.m_Object.fields._dictionary._4_4_ = in_stack_fffffffffffffe94;
            __this_05.fields._0_12_ = in_stack_fffffffffffffe88;
            __this_05.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffe98;
            __this_05.fields.m_Object.fields._current.fields.key =
                 (Il2CppObject *)in_stack_fffffffffffffea0;
            __this_05.fields.m_Object.fields._current.fields.value =
                 (Il2CppObject *)in_stack_fffffffffffffea8;
            __this_05.fields.m_Object.fields._32_8_ = in_stack_fffffffffffffeb0;
            __this_05.fields.m_Array.fields._list =
                 (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffeb8;
            __this_05.fields.m_Array.fields._8_8_ = in_stack_fffffffffffffec0;
            __this_05.fields.m_Array.fields._current =
                 (SimpleJSONFixed_JSONNode_o *)in_stack_fffffffffffffec8;
            aKeyValue = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                                  (__this_05,(MethodInfo *)local_c8);
            method_00 = (MethodInfo *)aKeyValue.fields.value;
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar9 = SimpleJSONFixed_JSONNode__op_Implicit(aKeyValue,(MethodInfo *)0x0);
            __this_07 = (Map_MapScriptBasicMaterial_o *)il2cpp_runtime_glue(TypeInfo_MapScriptBasicMaterial);
            Map_MapScriptBasicMaterial___ctor(__this_07,method_00);
            if ((pSVar9 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
               (plVar10 = (long *)(*(pSVar9->klass->vtable)._7_get_Item.methodPtr)
                                            (pSVar9,"Name",
                                             (pSVar9->klass->vtable)._7_get_Item.method),
               plVar10 == (long *)0x0)) goto LAB_03d9b779;
            pSVar8 = in_stack_fffffffffffffe98;
            str2 = (System_String_o *)
                   (**(code **)(*plVar10 + 0x1c8))(plVar10,*(undefined8 *)(*plVar10 + 0x1d0));
            pSVar12 = System_String__Concat
                                (in_stack_fffffffffffffe98,"/",str2,(MethodInfo *)0x0);
            if (__this_07 == (Map_MapScriptBasicMaterial_o *)0x0) goto LAB_03d9b779;
            (__this_07->fields).Texture = pSVar12;
            il2cpp_runtime_glue(&(__this_07->fields).Texture,pSVar12);
            cVar6 = (*(pSVar9->klass->vtable)._28_HasKey.methodPtr)
                              (pSVar9,"TilingX",(pSVar9->klass->vtable)._28_HasKey.method);
            in_stack_fffffffffffffe94 = 1.0;
            if (cVar6 != '\0') {
              plVar10 = (long *)(*(pSVar9->klass->vtable)._7_get_Item.methodPtr)
                                          (pSVar9,"TilingX",
                                           (pSVar9->klass->vtable)._7_get_Item.method);
              if (plVar10 == (long *)0x0) goto LAB_03d9b779;
              in_stack_fffffffffffffe94 =
                   (float)(**(code **)(*plVar10 + 0x388))(plVar10,*(undefined8 *)(*plVar10 + 0x390))
              ;
            }
            cVar6 = (*(pSVar9->klass->vtable)._28_HasKey.methodPtr)
                              (pSVar9,"TilingY",(pSVar9->klass->vtable)._28_HasKey.method);
            fVar14 = 1.0;
            if (cVar6 != '\0') {
              plVar10 = (long *)(*(pSVar9->klass->vtable)._7_get_Item.methodPtr)
                                          (pSVar9,"TilingY",
                                           (pSVar9->klass->vtable)._7_get_Item.method);
              if (plVar10 == (long *)0x0) goto LAB_03d9b779;
              fVar14 = (float)(**(code **)(*plVar10 + 0x388))
                                        (plVar10,*(undefined8 *)(*plVar10 + 0x390));
            }
            (__this_07->fields).Tiling.fields.x = in_stack_fffffffffffffe94;
            (__this_07->fields).Tiling.fields.y = fVar14;
            if (*(int *)(TypeInfo_BuiltinMapTextures + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar4 = *(System_Collections_Generic_Dictionary_object__object__o **)
                      (*(long *)(TypeInfo_BuiltinMapTextures + 0xb8) + 8);
            if ((pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
               (System_Collections_Generic_Dictionary<object__object>__Add
                          (pSVar4,(Il2CppObject *)str2,(Il2CppObject *)__this_07,MethodInfo_Void_Add),
               str2 == (System_String_o *)0x0)) goto LAB_03d9b779;
            pSVar4 = *(System_Collections_Generic_Dictionary_object__object__o **)
                      (*(long *)(TypeInfo_BuiltinMapTextures + 0xb8) + 0x18);
            pSVar12 = System_String__ToLower(str2,(MethodInfo *)0x0);
            if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
            goto LAB_03d9b779;
            System_Collections_Generic_Dictionary<object__object>__Add
                      (pSVar4,(Il2CppObject *)pSVar12,(Il2CppObject *)__this_07,MethodInfo_Void_Add);
            pSVar4 = *(System_Collections_Generic_Dictionary_object__object__o **)
                      (*(long *)(TypeInfo_BuiltinMapTextures + 0xb8) + 0x10);
            if ((pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
               (in_stack_fffffffffffffe98 = pSVar8,
               pSVar11 = (System_Collections_Generic_List_object__o *)
                         System_Collections_Generic_Dictionary<object__object>__get_Item
                                   (pSVar4,(Il2CppObject *)pSVar8,MethodInfo_List_1_Map_MapScriptBasicMaterial__get_Item),
               lVar13 = MethodInfo_Void_Add, pSVar11 == (System_Collections_Generic_List_object__o *)0x0))
            goto LAB_03d9b779;
            piVar1 = &(pSVar11->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar5 = (pSVar11->fields)._items;
            if (pSVar5 == (System_Object_array *)0x0) goto LAB_03d9b779;
            uVar3 = (pSVar11->fields)._size;
            if (uVar3 < (uint)pSVar5->max_length) {
              (pSVar11->fields)._size = uVar3 + 1;
              pSVar5->m_Items[(int)uVar3] = (Il2CppObject *)__this_07;
              il2cpp_runtime_glue(pSVar5->m_Items + (int)uVar3,__this_07);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (pSVar11,(Il2CppObject *)__this_07,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70)
                        );
            }
            bVar7 = System_String__op_Equality(pSVar8,"Legacy",(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_BuiltinMapTextures + 0xe4) == 0) {
              il2cpp_init_class();
              lVar13 = *(long *)(TypeInfo_BuiltinMapTextures + 0xb8);
              if ((char)bVar7 == '\0') goto LAB_03d9b744;
LAB_03d9b6c8:
              pSVar4 = *(System_Collections_Generic_Dictionary_object__object__o **)(lVar13 + 0x28);
              plVar10 = (long *)(*(pSVar9->klass->vtable)._7_get_Item.methodPtr)
                                          (pSVar9,"Texture",
                                           (pSVar9->klass->vtable)._7_get_Item.method);
              if ((plVar10 == (long *)0x0) ||
                 (value = (Il2CppObject *)
                          (**(code **)(*plVar10 + 0x1c8))(plVar10,*(undefined8 *)(*plVar10 + 0x1d0))
                 , pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0))
              goto LAB_03d9b779;
              System_Collections_Generic_Dictionary<object__object>__Add
                        (pSVar4,(Il2CppObject *)str2,value,MethodInfo_Void_Add);
            }
            else {
              lVar13 = *(long *)(TypeInfo_BuiltinMapTextures + 0xb8);
              if ((char)bVar7 != '\0') goto LAB_03d9b6c8;
LAB_03d9b744:
              if (*(System_Collections_Generic_Dictionary_object__object__o **)(lVar13 + 0x20) ==
                  (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_03d9b779;
              System_Collections_Generic_Dictionary<object__object>__Add
                        (*(System_Collections_Generic_Dictionary_object__object__o **)
                          (lVar13 + 0x20),(Il2CppObject *)str2,(Il2CppObject *)__this_07,
                         MethodInfo_Void_Add);
            }
            __this_04.fields.m_Object.fields._dictionary._4_4_ = in_stack_fffffffffffffe94;
            __this_04.fields._0_12_ = in_stack_fffffffffffffe88;
            __this_04.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffe98;
            __this_04.fields.m_Object.fields._current.fields.key =
                 (Il2CppObject *)in_stack_fffffffffffffea0;
            __this_04.fields.m_Object.fields._current.fields.value =
                 (Il2CppObject *)in_stack_fffffffffffffea8;
            __this_04.fields.m_Object.fields._32_8_ = in_stack_fffffffffffffeb0;
            __this_04.fields.m_Array.fields._list =
                 (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffeb8;
            __this_04.fields.m_Array.fields._8_8_ = in_stack_fffffffffffffec0;
            __this_04.fields.m_Array.fields._current =
                 (SimpleJSONFixed_JSONNode_o *)in_stack_fffffffffffffec8;
            bVar7 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this_04,(MethodInfo *)local_c8);
            cVar6 = (char)bVar7;
          }
          __this_01.fields.m_Enumerator.fields.m_Object.fields._dictionary._4_4_ =
               in_stack_fffffffffffffe94;
          __this_01.fields.m_Enumerator.fields._0_12_ = in_stack_fffffffffffffe88;
          __this_01.fields.m_Enumerator.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffe98;
          __this_01.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
               (Il2CppObject *)in_stack_fffffffffffffea0;
          __this_01.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
               (Il2CppObject *)in_stack_fffffffffffffea8;
          __this_01.fields.m_Enumerator.fields.m_Object.fields._32_8_ = in_stack_fffffffffffffeb0;
          __this_01.fields.m_Enumerator.fields.m_Array.fields._list =
               (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffeb8;
          __this_01.fields.m_Enumerator.fields.m_Array.fields._8_8_ = in_stack_fffffffffffffec0;
          __this_01.fields.m_Enumerator.fields.m_Array.fields._current =
               (SimpleJSONFixed_JSONNode_o *)in_stack_fffffffffffffec8;
          bVar7 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                            (__this_01,(MethodInfo *)local_118);
        } while ((char)bVar7 != '\0');
      }
      return;
    }
  }
LAB_03d9b779:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.BuiltinMapTextures$$.ctor
// il2cpp: void Map_BuiltinMapTextures___ctor (Map_BuiltinMapTextures_o* __this, const MethodInfo* method);
// 0x3d9b840

void Map_BuiltinMapTextures___ctor(Map_BuiltinMapTextures_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Map.BuiltinMapTextures$$.cctor
// il2cpp: void Map_BuiltinMapTextures___cctor (const MethodInfo* method);
// 0x3d9b850

void Map_BuiltinMapTextures___cctor(MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  
  if (DAT_05702759 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinMapTextures);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_Map_MapScriptBasicMat);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_String);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_List_1_Map_MapScriptB);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__string);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__MapScriptBasicMaterial);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__List_MapScriptBasicMaterial);
    DAT_05702759 = '\x01';
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_string__MapScriptBasicMaterial);
  System_Collections_Generic_Dictionary<object__object>___ctor(pSVar2,MethodInfo_Dictionary_2_System_String_Map_MapScriptBasicMat);
  lVar1 = *(long *)(TypeInfo_BuiltinMapTextures + 0xb8);
  *(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 8) = pSVar2;
  il2cpp_runtime_glue(lVar1 + 8,pSVar2);
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_string__List_MapScriptBasicMaterial);
  System_Collections_Generic_Dictionary<object__object>___ctor(pSVar2,MethodInfo_Dictionary_2_System_String_List_1_Map_MapScriptB);
  lVar1 = *(long *)(TypeInfo_BuiltinMapTextures + 0xb8);
  *(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 0x10) = pSVar2;
  il2cpp_runtime_glue(lVar1 + 0x10,pSVar2);
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_string__MapScriptBasicMaterial);
  System_Collections_Generic_Dictionary<object__object>___ctor(pSVar2,MethodInfo_Dictionary_2_System_String_Map_MapScriptBasicMat);
  lVar1 = *(long *)(TypeInfo_BuiltinMapTextures + 0xb8);
  *(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 0x18) = pSVar2;
  il2cpp_runtime_glue(lVar1 + 0x18,pSVar2);
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_string__MapScriptBasicMaterial);
  System_Collections_Generic_Dictionary<object__object>___ctor(pSVar2,MethodInfo_Dictionary_2_System_String_Map_MapScriptBasicMat);
  lVar1 = *(long *)(TypeInfo_BuiltinMapTextures + 0xb8);
  *(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 0x20) = pSVar2;
  il2cpp_runtime_glue(lVar1 + 0x20,pSVar2);
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_string__string);
  System_Collections_Generic_Dictionary<object__object>___ctor(pSVar2,MethodInfo_Dictionary_2_System_String_System_String);
  lVar1 = *(long *)(TypeInfo_BuiltinMapTextures + 0xb8);
  *(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 0x28) = pSVar2;
  il2cpp_runtime_glue(lVar1 + 0x28,pSVar2);
  return;
}


