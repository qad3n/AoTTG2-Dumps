// Type: Map.MapManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Map/MapManager.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Map/MapManager.cs  [CHANGED since prior version]
// --------------------------------

// Map.MapManager$$Init
// il2cpp: void Map_MapManager__Init (const MethodInfo* method);
// 0x3dac670

void Map_MapManager__Init(MethodInfo *method)

{
  long lVar1;
  Il2CppObject *pIVar2;
  Events_OnLoadScene_o *value;
  Events_OnPreLoadScene_o *value_00;
  MethodInfo *pMVar3;
  
  if (DAT_05702799 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinLevels);
    il2cpp_init_method_metadata(&TypeInfo_BuiltinMapPrefabs);
    il2cpp_init_method_metadata(&TypeInfo_BuiltinMapTextures);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&MethodInfo_Void_OnLoadScene);
    il2cpp_init_method_metadata(&MethodInfo_Void_OnPreLoadScene);
    il2cpp_init_method_metadata(&TypeInfo_MapManager);
    il2cpp_init_method_metadata(&TypeInfo_MapTransfer);
    il2cpp_init_method_metadata(&TypeInfo_OnLoadScene);
    il2cpp_init_method_metadata(&TypeInfo_OnPreLoadScene);
    il2cpp_init_method_metadata(&MethodInfo_MapManager_CreateSingleton_MapManager);
    DAT_05702799 = '\x01';
  }
  if (*(int *)(TypeInfo_MapManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar2 = Utility_SingletonFactory__CreateSingleton<object>
                     (*(Il2CppObject **)(*(long *)(TypeInfo_MapManager + 0xb8) + 0x10),MethodInfo_MapManager_CreateSingleton_MapManager);
  lVar1 = *(long *)(TypeInfo_MapManager + 0xb8);
  *(Il2CppObject **)(lVar1 + 0x10) = pIVar2;
  il2cpp_runtime_glue(lVar1 + 0x10);
  pMVar3 = TypeInfo_MapTransfer;
  if (*(int *)((long)&TypeInfo_MapTransfer[2].parameters + 4) == 0) {
    il2cpp_init_class();
  }
  Map_MapTransfer__Init(pMVar3);
  pMVar3 = TypeInfo_MapLoader;
  if (*(int *)((long)&TypeInfo_MapLoader[2].parameters + 4) == 0) {
    il2cpp_init_class();
  }
  Map_MapLoader__Init(pMVar3);
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Map_BuiltinLevels__Init((MethodInfo *)0x0);
  pMVar3 = TypeInfo_BuiltinMapPrefabs;
  if (*(int *)((long)&TypeInfo_BuiltinMapPrefabs[2].parameters + 4) == 0) {
    il2cpp_init_class();
  }
  Map_BuiltinMapPrefabs__Init(pMVar3);
  pMVar3 = TypeInfo_BuiltinMapTextures;
  if (*(int *)((long)&TypeInfo_BuiltinMapTextures[2].parameters + 4) == 0) {
    il2cpp_init_class();
  }
  Map_BuiltinMapTextures__Init(pMVar3);
  value = (Events_OnLoadScene_o *)il2cpp_runtime_glue(TypeInfo_OnLoadScene);
  Events_OnLoadScene___ctor();
  Events_EventManager__add_OnLoadScene(value,(MethodInfo *)0x0);
  value_00 = (Events_OnPreLoadScene_o *)il2cpp_runtime_glue(TypeInfo_OnPreLoadScene);
  Events_OnPreLoadScene___ctor();
  Events_EventManager__add_OnPreLoadScene(value_00,(MethodInfo *)0x0);
  return;
}


// Map.MapManager$$TryGetRandomTagXform
// il2cpp: bool Map_MapManager__TryGetRandomTagXform (System_String_o* tag, UnityEngine_Transform_o** xform, const MethodInfo* method);
// 0x3dac920

bool_conflict
Map_MapManager__TryGetRandomTagXform
          (System_String_o *tag,UnityEngine_Transform_o **xform,MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_Object_o *exists;
  UnityEngine_Transform_o *pUVar2;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)xform;
  if (DAT_0570279a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MapManager);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570279a = '\x01';
  }
  if (*(int *)(TypeInfo_MapManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  exists = (UnityEngine_Object_o *)Map_MapManager__GetRandomTag(tag,method_00);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Implicit(exists,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    *xform = (UnityEngine_Transform_o *)0x0;
    bVar1 = 0;
    il2cpp_runtime_glue(xform,0);
  }
  else {
    if (exists == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pUVar2 = UnityEngine_GameObject__get_transform
                       ((UnityEngine_GameObject_o *)exists,(MethodInfo *)0x0);
    *xform = pUVar2;
    il2cpp_runtime_glue(xform,pUVar2);
    bVar1 = (bool_conflict)CONCAT71((int7)((ulong)exists >> 8),1);
  }
  return bVar1;
}


// Map.MapManager$$TryGetRandomTagsXform
// il2cpp: bool Map_MapManager__TryGetRandomTagsXform (System_Collections_Generic_List_string__o* tags, UnityEngine_Transform_o** xform, const MethodInfo* method);
// 0x3dacb80

bool_conflict
Map_MapManager__TryGetRandomTagsXform
          (System_Collections_Generic_List_string__o *tags,UnityEngine_Transform_o **xform,
          MethodInfo *method)

{
  System_Collections_Generic_List_Enumerator_object__o __this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  bool_conflict bVar1;
  UnityEngine_Object_o *exists;
  UnityEngine_Transform_o *pUVar2;
  MethodInfo *method_00;
  System_Collections_Generic_List_Enumerator_T__c *pSVar3;
  Il2CppType *pIVar4;
  System_String_o *tag;
  System_String_o *pSVar5;
  undefined1 local_48 [16];
  System_String_o *local_38;
  
  if (DAT_0570279b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
    il2cpp_init_method_metadata(&TypeInfo_MapManager);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570279b = '\x01';
  }
  if (tags == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
             (System_Collections_Generic_List_object__o *)tags,MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
  pSVar3 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
  pIVar4 = (Il2CppType *)local_48._8_8_;
  tag = local_38;
  do {
    __this.fields._8_8_ = pIVar4;
    __this.fields._list = (System_Collections_Generic_List_T__o *)pSVar3;
    __this.fields._current = (Il2CppObject *)tag;
    method_00 = MethodInfo_Boolean_MoveNext;
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (__this,(MethodInfo_3185E20 *)&stack0xffffffffffffff98);
    if ((char)bVar1 == '\0') {
      __this_01.fields._8_8_ = pIVar4;
      __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar3;
      __this_01.fields._current = (Il2CppObject *)tag;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (__this_01,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
      *xform = (UnityEngine_Transform_o *)0x0;
      il2cpp_runtime_glue(xform,0);
      return 0;
    }
    pSVar5 = tag;
    if (*(int *)(TypeInfo_MapManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    exists = (UnityEngine_Object_o *)Map_MapManager__GetRandomTag(tag,method_00);
    tag = pSVar5;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
      tag = pSVar5;
    }
    bVar1 = UnityEngine_Object__op_Implicit(exists,(MethodInfo *)0x0);
  } while ((char)bVar1 == '\0');
  if (exists != (UnityEngine_Object_o *)0x0) {
    pUVar2 = UnityEngine_GameObject__get_transform
                       ((UnityEngine_GameObject_o *)exists,(MethodInfo *)0x0);
    *xform = pUVar2;
    il2cpp_runtime_glue(xform,pUVar2);
    __this_00.fields._8_8_ = pIVar4;
    __this_00.fields._list = (System_Collections_Generic_List_T__o *)pSVar3;
    __this_00.fields._current = (Il2CppObject *)tag;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_00,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
    return (bool_conflict)CONCAT71((int7)((ulong)exists >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.MapManager$$TryGetRandomTagXforms
// il2cpp: bool Map_MapManager__TryGetRandomTagXforms (System_String_o* tag, UnityEngine_Vector3_o avoidPosition, float avoidRadius, int32_t count, System_Collections_Generic_List_Transform__o** xforms, const MethodInfo* method);
// 0x3dacdd0

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
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  long lVar5;
  bool_conflict bVar6;
  int32_t index;
  System_Collections_Generic_List_object__o *__this_03;
  System_Collections_Generic_List_Transform__o *pSVar7;
  UnityEngine_Transform_o *pUVar8;
  System_Collections_Generic_List_object__o *__this_04;
  undefined8 extraout_RAX;
  undefined8 extraout_RAX_00;
  int iVar9;
  int iVar10;
  float fVar11;
  undefined4 in_XMM0_Dc;
  uint32_t extraout_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined4 extraout_XMM0_Dd;
  float fVar12;
  float in_XMM1_Db;
  float fVar13;
  float fVar14;
  float fVar15;
  float in_XMM1_Dd;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  uint32_t uVar20;
  undefined4 uVar21;
  UnityEngine_Vector3_o UVar22;
  System_Collections_Generic_List_T__o *pSVar23;
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
  fStack_6c = in_XMM1_Dd;
  if (DAT_0570279c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_MapObject_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Map_MapObject__GetEnumerato);
    il2cpp_init_method_metadata(&MethodInfo_Void_RemoveAt);
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_Transform);
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_Transform);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Transform_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_List_Transform);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    DAT_0570279c = '\x01';
  }
  local_90 = (System_Collections_Generic_List_object__o *)0x0;
  *xforms = (System_Collections_Generic_List_Transform__o *)0x0;
  il2cpp_runtime_glue(xforms,0);
  if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this = *(System_Collections_Generic_Dictionary_object__object__o **)
            (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x18);
  if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
LAB_03dad2ec:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  bVar6 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                    (__this,(Il2CppObject *)tag,(Il2CppObject **)&local_90,MethodInfo_Boolean_TryGetValue);
  if ((char)bVar6 == '\0') {
    bVar6 = 0;
  }
  else {
    __this_03 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_Transform);
    System_Collections_Generic_List<object>___ctor(__this_03,MethodInfo_List_1_UnityEngine_Transform);
    pSVar7 = (System_Collections_Generic_List_Transform__o *)il2cpp_runtime_glue(TypeInfo_List_Transform);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)pSVar7,MethodInfo_List_1_UnityEngine_Transform);
    *xforms = pSVar7;
    il2cpp_runtime_glue(xforms,pSVar7);
    if (local_90 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03dad2ec;
    System_Collections_Generic_List<object>__GetEnumerator(&local_48,local_90,MethodInfo_List_1_T__Enumerator_Map_MapObject__GetEnumerato);
    if (__this_03 == (System_Collections_Generic_List_object__o *)0x0) {
      __this_01.fields._list._4_4_ = avoidRadius;
      __this_01.fields._list._0_4_ = count;
      __this_01.fields._8_8_ = xforms;
      __this_01.fields._current = (Il2CppObject *)local_48.fields._list;
      bVar6 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffff58);
      if ((char)bVar6 != '\0') {
        if (local_48.fields._current != (Il2CppObject *)0x0) {
          if (local_48.fields._current[1].monitor != (UnityEngine_GameObject_o *)0x0) {
            UnityEngine_GameObject__get_transform
                      (local_48.fields._current[1].monitor,(MethodInfo *)0x0);
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
LAB_03dad30e:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
LAB_03dad300:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
    else {
      pSVar23 = local_48.fields._list;
      while (__this_00.fields._list._4_4_ = avoidRadius, __this_00.fields._list._0_4_ = count,
            __this_00.fields._8_8_ = xforms, __this_00.fields._current = (Il2CppObject *)pSVar23,
            bVar6 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (__this_00,(MethodInfo_3185E20 *)&stack0xffffffffffffff58),
            local_48.fields._list = pSVar23, (char)bVar6 != '\0') {
        if (local_48.fields._current == (Il2CppObject *)0x0) goto LAB_03dad300;
        if (local_48.fields._current[1].monitor == (UnityEngine_GameObject_o *)0x0)
        goto LAB_03dad30e;
        pUVar8 = UnityEngine_GameObject__get_transform
                           (local_48.fields._current[1].monitor,(MethodInfo *)0x0);
        lVar5 = MethodInfo_Void_Add;
        piVar1 = &(__this_03->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar3 = (__this_03->fields)._items;
        if (pSVar3 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        uVar2 = (__this_03->fields)._size;
        if (uVar2 < (uint)pSVar3->max_length) {
          (__this_03->fields)._size = uVar2 + 1;
          pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)pUVar8;
          il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2,pUVar8);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    (__this_03,(Il2CppObject *)pUVar8,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
    __this_02.fields._list._4_4_ = avoidRadius;
    __this_02.fields._list._0_4_ = count;
    __this_02.fields._8_8_ = xforms;
    __this_02.fields._current = (Il2CppObject *)local_48.fields._list;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffff58);
    __this_04 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_Transform);
    System_Collections_Generic_List<object>___ctor
              (__this_04,(System_Collections_Generic_IEnumerable_T__o *)__this_03,MethodInfo_List_1_UnityEngine_Transform);
    bVar6 = (bool_conflict)CONCAT71((int7)((ulong)extraout_RAX >> 8),1);
    if (0 < count) {
      fVar11 = (float)local_88._0_4_;
      local_88._0_4_ = local_88._4_4_;
      iVar10 = 0;
      iVar9 = 0;
      fVar14 = (float)local_88._4_4_;
      fVar15 = fStack_80;
      fVar16 = fStack_7c;
      fStack_70 = fStack_74;
      fStack_6c = (float)local_88._4_4_;
      do {
        fStack_74 = fVar11;
        if (__this_04 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03dad2ec;
        if ((__this_04->fields)._size < 1) {
          __this_04 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_Transform);
          System_Collections_Generic_List<object>___ctor
                    (__this_04,(System_Collections_Generic_IEnumerable_T__o *)__this_03,MethodInfo_List_1_UnityEngine_Transform
                    );
          if (__this_04 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03dad2ec;
        }
        index = UnityEngine_Random__Range(0,(__this_04->fields)._size,(MethodInfo *)0x0);
        pUVar8 = (UnityEngine_Transform_o *)
                 System_Collections_Generic_List<object>__get_Item(__this_04,index,MethodInfo_Transform_get_Item);
        if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto LAB_03dad2ec;
        UVar22 = UnityEngine_Transform__get_position(pUVar8,(MethodInfo *)0x0);
        if (avoidRadius <= 0.0) {
LAB_03dad270:
          pSVar7 = *xforms;
          pUVar8 = (UnityEngine_Transform_o *)
                   System_Collections_Generic_List<object>__get_Item(__this_04,index,MethodInfo_Transform_get_Item);
          lVar5 = MethodInfo_Void_Add;
          if (pSVar7 == (System_Collections_Generic_List_Transform__o *)0x0) goto LAB_03dad2ec;
          piVar1 = &(pSVar7->fields)._version;
          *piVar1 = *piVar1 + 1;
          pUVar4 = (pSVar7->fields)._items;
          if (pUVar4 == (UnityEngine_Transform_array *)0x0) goto LAB_03dad2ec;
          uVar2 = (pSVar7->fields)._size;
          if (uVar2 < (uint)pUVar4->max_length) {
            (pSVar7->fields)._size = uVar2 + 1;
            pUVar4->m_Items[(int)uVar2] = pUVar8;
            il2cpp_runtime_glue(pUVar4->m_Items + (int)uVar2,pUVar8);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar7,(Il2CppObject *)pUVar8,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          }
        }
        else {
          fVar11 = UVar22.fields.z;
          fVar17 = UVar22.fields.x;
          fVar19 = UVar22.fields.y;
          uVar20 = extraout_XMM0_Dc;
          uVar21 = extraout_XMM0_Dd;
          if (DAT_056fdea6 == '\0') {
            uStack_60 = extraout_XMM0_Dc;
            local_68 = (undefined1  [8])UVar22.fields._0_8_;
            uStack_5c = (uint16_t)extraout_XMM0_Dd;
            uStack_5a = SUB42(extraout_XMM0_Dd,2);
            local_58 = UVar22.fields.z;
            fStack_54 = fVar14;
            fStack_50 = fVar15;
            fStack_4c = fVar16;
            il2cpp_init_method_metadata(&TypeInfo_Math);
            DAT_056fdea6 = '\x01';
            fVar11 = local_58;
            fVar14 = fStack_54;
            fVar17 = (float)local_68._0_4_;
            fVar19 = (float)local_68._4_4_;
            uVar20 = uStack_60;
            uVar21 = _uStack_5c;
          }
          fVar12 = fVar11 - local_78;
          fVar13 = fVar17 - fStack_74;
          fVar15 = fVar14 - fStack_70;
          fVar16 = fVar19 - fStack_6c;
          fVar18 = fVar19 - (float)local_88._0_4_;
          if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
            local_68._4_4_ = fVar19;
            local_68._0_4_ = fVar19 - (float)local_88._0_4_;
            uStack_60 = uVar20;
            uStack_5c = (uint16_t)uVar21;
            uStack_5a = SUB42(uVar21,2);
            local_58 = fVar11 - local_78;
            fStack_54 = fVar17 - fStack_74;
            fStack_50 = fVar14 - fStack_70;
            fStack_4c = fVar19 - fStack_6c;
            il2cpp_init_class();
            fVar12 = local_58;
            fVar13 = fStack_54;
            fVar15 = fStack_50;
            fVar16 = fStack_4c;
            fVar18 = (float)local_68._0_4_;
          }
          fVar14 = fVar13 * fVar13;
          fVar15 = fVar15 * fVar15;
          fVar16 = fVar16 * fVar16;
          fVar11 = fVar14 + fVar18 * fVar18 + fVar12 * fVar12;
          if (fVar11 < 0.0) {
            fVar11 = sqrtf(fVar11);
            if (iVar10 < 0x65) goto LAB_03dad24b;
            goto LAB_03dad270;
          }
          fVar11 = SQRT(fVar11);
          if (100 < iVar10) goto LAB_03dad270;
LAB_03dad24b:
          if (avoidRadius < fVar11) goto LAB_03dad270;
          iVar9 = iVar9 + -1;
          iVar10 = iVar10 + 1;
        }
        System_Collections_Generic_List<object>__RemoveAt(__this_04,index,MethodInfo_Void_RemoveAt);
        iVar9 = iVar9 + 1;
        fVar11 = fStack_74;
      } while (iVar9 < count);
      bVar6 = (bool_conflict)CONCAT71((int7)((ulong)extraout_RAX_00 >> 8),1);
    }
  }
  return bVar6;
}


// Map.MapManager$$GetRandomTag
// il2cpp: UnityEngine_GameObject_o* Map_MapManager__GetRandomTag (System_String_o* tag, const MethodInfo* method);
// 0x3dac9e0

UnityEngine_GameObject_o * Map_MapManager__GetRandomTag(System_String_o *tag,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  bool_conflict bVar3;
  Il2CppObject *pIVar4;
  System_Collections_Generic_List_T__o *list;
  
  if (DAT_0570279d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Map_MapObject__get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&MethodInfo_MapObject_GetRandomItem_MapObject);
    il2cpp_init_method_metadata(&TypeInfo_MiscExtensions);
    DAT_0570279d = '\x01';
    iVar1 = *(int *)(TypeInfo_MapLoader + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MapLoader + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x18);
  }
  else {
    pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x18);
  }
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar3 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                      (pSVar2,(Il2CppObject *)tag,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar3 == '\0') {
      return (UnityEngine_GameObject_o *)0x0;
    }
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x18);
    if ((pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
       (pIVar4 = System_Collections_Generic_Dictionary<object__object>__get_Item
                           (pSVar2,(Il2CppObject *)tag,MethodInfo_List_1_Map_MapObject__get_Item), pIVar4 != (Il2CppObject *)0x0)
       ) {
      if (*(int *)&pIVar4[1].monitor < 1) {
        return (UnityEngine_GameObject_o *)0x0;
      }
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x18);
      if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        list = (System_Collections_Generic_List_T__o *)
               System_Collections_Generic_Dictionary<object__object>__get_Item
                         (pSVar2,(Il2CppObject *)tag,MethodInfo_List_1_Map_MapObject__get_Item);
        if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pIVar4 = MiscExtensions__GetRandomItem<object>(list,MethodInfo_MapObject_GetRandomItem_MapObject);
        if (pIVar4 != (Il2CppObject *)0x0) {
          return pIVar4[1].monitor;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.MapManager$$OnPreLoadScene
// il2cpp: void Map_MapManager__OnPreLoadScene (int32_t sceneName, const MethodInfo* method);
// 0x3dad3d0

void Map_MapManager__OnPreLoadScene(int32_t sceneName,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570279e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MapManager);
    DAT_0570279e = '\x01';
    iVar1 = *(int *)(TypeInfo_MapManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MapManager + 0xe4);
  }
  if (iVar1 != 0) {
    **(undefined1 **)(TypeInfo_MapManager + 0xb8) = 0;
    return;
  }
  il2cpp_init_class();
  **(undefined1 **)(TypeInfo_MapManager + 0xb8) = 0;
  return;
}


// Map.MapManager$$OnLoadScene
// il2cpp: void Map_MapManager__OnLoadScene (int32_t sceneName, const MethodInfo* method);
// 0x3dad440

void Map_MapManager__OnLoadScene(int32_t sceneName,MethodInfo *method)

{
  Il2CppMethodPointer pIVar1;
  long *plVar2;
  Photon_Pun_PhotonView_o *__this;
  Il2CppObject *pIVar3;
  Photon_Pun_PhotonMessageInfo_o info;
  char cVar4;
  bool_conflict bVar5;
  System_Collections_Generic_List_string__o *customAssets;
  System_Collections_Generic_List_MapScriptBaseObject__o *objects;
  System_String_o *pSVar6;
  Map_MapScript_o *__this_00;
  System_Object_array *parameters;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  MethodInfo *pMVar10;
  MethodInfo *in_R9;
  Il2CppMethodPointer pIStack_38;
  Il2CppMethodPointer pIStack_30;
  Photon_Pun_PhotonView_o *pPStack_28;
  char *pcStack_20;
  
  if (DAT_0570279f == '\0') {
    pcStack_20 = (char *)0x3dad45b;
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    pcStack_20 = (char *)0x3dad467;
    il2cpp_init_method_metadata(&MethodInfo_List_1_Map_MapScriptBaseObject);
    pcStack_20 = (char *)0x3dad473;
    il2cpp_init_method_metadata(&TypeInfo_List_MapScriptBaseObject);
    pcStack_20 = (char *)0x3dad47f;
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    pcStack_20 = (char *)0x3dad48b;
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    pcStack_20 = (char *)0x3dad497;
    il2cpp_init_method_metadata(&TypeInfo_MapManager);
    DAT_0570279f = '\x01';
  }
  if (sceneName == 3) {
    if (*(int *)((long)&TypeInfo_MapManager[2].parameters + 4) == 0) {
      pcStack_20 = (char *)0x3dad57a;
      pMVar10 = TypeInfo_MapManager;
      il2cpp_init_class();
      Map_MapManager__StartMapEditor(pMVar10);
      return;
    }
    Map_MapManager__StartMapEditor(TypeInfo_MapManager);
    return;
  }
  if (sceneName != 2) {
    pcStack_20 = (char *)0x3dad4fd;
    customAssets = (System_Collections_Generic_List_string__o *)il2cpp_runtime_glue(TypeInfo_List_string);
    pcStack_20 = (char *)0x3dad512;
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)customAssets,MethodInfo_List_1_System_String);
    pcStack_20 = (char *)0x3dad521;
    objects = (System_Collections_Generic_List_MapScriptBaseObject__o *)
              il2cpp_runtime_glue(TypeInfo_List_MapScriptBaseObject);
    pcStack_20 = (char *)0x3dad536;
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)objects,MethodInfo_List_1_Map_MapScriptBaseObject);
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      pcStack_20 = (char *)0x3dad54e;
      il2cpp_init_class();
    }
    Map_MapLoader__StartLoadObjects
              (customAssets,objects,(Map_MapScriptOptions_o *)0x0,(Settings_WeatherSet_o *)0x0,0,
               in_R9);
    return;
  }
  if (*(int *)((long)&TypeInfo_MapManager[2].parameters + 4) == 0) {
    pcStack_20 = (char *)0x3dad56c;
    il2cpp_init_class();
  }
  if (DAT_057027a0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinLevels);
    il2cpp_init_method_metadata(&TypeInfo_MapManager);
    il2cpp_init_method_metadata(&TypeInfo_MapScript);
    il2cpp_init_method_metadata(&TypeInfo_MapTransfer);
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_RPCManager);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    il2cpp_init_method_metadata(&"Custom");
    il2cpp_init_method_metadata(&"LoadBuiltinMapRPC");
    DAT_057027a0 = '\x01';
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) != 0) goto LAB_03dad5bb;
LAB_03dad67d:
    il2cpp_init_class();
    bVar5 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar4 = (char)bVar5;
  }
  else {
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) goto LAB_03dad67d;
LAB_03dad5bb:
    bVar5 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar4 = (char)bVar5;
  }
  if (cVar4 == '\0') {
    return;
  }
  lVar8 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if (((lVar8 != 0) && (lVar8 = *(long *)(lVar8 + 0x38), lVar8 != 0)) &&
     (*(long *)(lVar8 + 0x20) != 0)) {
    bVar5 = System_String__op_Equality
                      (*(System_String_o **)(*(long *)(lVar8 + 0x20) + 0x18),"Custom",
                       (MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      if (*(int *)((long)&TypeInfo_MapTransfer[2].parameters + 4) == 0) {
        il2cpp_init_class();
      }
      *TypeInfo_MapTransfer[2].virtualMethodPointer = (Il2CppMethodPointer)0x1;
      __this = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
      parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,2);
      if ((*(long *)(lVar8 + 0x20) != 0) && (parameters != (System_Object_array *)0x0)) {
        pIVar3 = *(Il2CppObject **)(*(long *)(lVar8 + 0x20) + 0x18);
        if ((pIVar3 != (Il2CppObject *)0x0) &&
           (lVar7 = il2cpp_runtime_glue(pIVar3,(((parameters->obj).klass)->_1).element_class),
           lVar7 == 0)) {
LAB_03dad922:
          uVar9 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
          il2cpp_glue_02274a00(uVar9,0);
        }
        if ((int)parameters->max_length == 0) {
LAB_03dad91d:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        parameters->m_Items[0] = pIVar3;
        il2cpp_runtime_glue(parameters->m_Items,pIVar3);
        if (*(long *)(lVar8 + 0x28) != 0) {
          pIVar3 = *(Il2CppObject **)(*(long *)(lVar8 + 0x28) + 0x18);
          if ((pIVar3 != (Il2CppObject *)0x0) &&
             (lVar8 = il2cpp_runtime_glue(pIVar3,(((parameters->obj).klass)->_1).element_class),
             lVar8 == 0)) goto LAB_03dad922;
          if ((uint)parameters->max_length < 2) goto LAB_03dad91d;
          parameters->m_Items[1] = pIVar3;
          il2cpp_runtime_glue(parameters->m_Items + 1,pIVar3);
          if (__this != (Photon_Pun_PhotonView_o *)0x0) {
            Photon_Pun_PhotonView__RPC(__this,"LoadBuiltinMapRPC",0,parameters,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
    else if (*(long *)(lVar8 + 0x28) != 0) {
      pMVar10 = *(MethodInfo **)(*(long *)(lVar8 + 0x28) + 0x18);
      if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar6 = Map_BuiltinLevels__LoadMap("Custom",(System_String_o *)pMVar10,(MethodInfo *)0x0)
      ;
      __this_00 = (Map_MapScript_o *)il2cpp_runtime_glue(TypeInfo_MapScript);
      Map_MapScript___ctor(__this_00,pMVar10);
      if (*(int *)((long)&TypeInfo_MapManager[2].parameters + 4) == 0) {
        il2cpp_init_class();
      }
      pIVar1 = TypeInfo_MapManager[2].virtualMethodPointer;
      *(Map_MapScript_o **)(pIVar1 + 8) = __this_00;
      il2cpp_runtime_glue(pIVar1 + 8,__this_00);
      plVar2 = *(long **)(TypeInfo_MapManager[2].virtualMethodPointer + 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x188))(plVar2,pSVar6,*(undefined8 *)(*plVar2 + 400));
        pMVar10 = TypeInfo_MapTransfer;
        if (*(int *)((long)&TypeInfo_MapTransfer[2].parameters + 4) == 0) {
          il2cpp_init_class();
        }
        Map_MapTransfer__Start(pMVar10);
        if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pMVar10 = (MethodInfo *)&stack0xffffffffffffffc8;
        Utility_Util__CreateLocalPhotonInfo
                  ((Photon_Pun_PhotonMessageInfo_o *)pMVar10,(MethodInfo *)0x0);
        info.fields.Sender = (Photon_Realtime_Player_o *)pIStack_30;
        info.fields._0_8_ = pIStack_38;
        info.fields.photonView = pPStack_28;
        Map_MapManager__OnLoadCachedMapRPC(info,pMVar10);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.MapManager$$StartInGame
// il2cpp: void Map_MapManager__StartInGame (const MethodInfo* method);
// 0x3dad590

void Map_MapManager__StartInGame(MethodInfo *method)

{
  long *plVar1;
  Photon_Pun_PhotonView_o *__this;
  Il2CppObject *pIVar2;
  Photon_Pun_PhotonMessageInfo_o info;
  char cVar3;
  bool_conflict bVar4;
  System_String_o *pSVar5;
  Map_MapScript_o *__this_00;
  System_Object_array *parameters;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  MethodInfo *pMVar9;
  Il2CppMethodPointer pIStack_38;
  Il2CppMethodPointer pIStack_30;
  Photon_Pun_PhotonView_o *pPStack_28;
  
  if (DAT_057027a0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinLevels);
    il2cpp_init_method_metadata(&TypeInfo_MapManager);
    il2cpp_init_method_metadata(&TypeInfo_MapScript);
    il2cpp_init_method_metadata(&TypeInfo_MapTransfer);
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_RPCManager);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    il2cpp_init_method_metadata(&"Custom");
    il2cpp_init_method_metadata(&"LoadBuiltinMapRPC");
    DAT_057027a0 = '\x01';
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) != 0) goto LAB_03dad5bb;
LAB_03dad67d:
    il2cpp_init_class();
    bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar3 = (char)bVar4;
  }
  else {
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) goto LAB_03dad67d;
LAB_03dad5bb:
    bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar3 = (char)bVar4;
  }
  if (cVar3 == '\0') {
    return;
  }
  lVar7 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if (((lVar7 != 0) && (lVar7 = *(long *)(lVar7 + 0x38), lVar7 != 0)) &&
     (*(long *)(lVar7 + 0x20) != 0)) {
    bVar4 = System_String__op_Equality
                      (*(System_String_o **)(*(long *)(lVar7 + 0x20) + 0x18),"Custom",
                       (MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      if (*(int *)((long)&TypeInfo_MapTransfer[2].parameters + 4) == 0) {
        il2cpp_init_class();
      }
      *TypeInfo_MapTransfer[2].virtualMethodPointer = (Il2CppMethodPointer)0x1;
      __this = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
      parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,2);
      if ((*(long *)(lVar7 + 0x20) != 0) && (parameters != (System_Object_array *)0x0)) {
        pIVar2 = *(Il2CppObject **)(*(long *)(lVar7 + 0x20) + 0x18);
        if ((pIVar2 != (Il2CppObject *)0x0) &&
           (lVar6 = il2cpp_runtime_glue(pIVar2,(((parameters->obj).klass)->_1).element_class),
           lVar6 == 0)) {
LAB_03dad922:
          uVar8 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
          il2cpp_glue_02274a00(uVar8,0);
        }
        if ((int)parameters->max_length == 0) {
LAB_03dad91d:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        parameters->m_Items[0] = pIVar2;
        il2cpp_runtime_glue(parameters->m_Items,pIVar2);
        if (*(long *)(lVar7 + 0x28) != 0) {
          pIVar2 = *(Il2CppObject **)(*(long *)(lVar7 + 0x28) + 0x18);
          if ((pIVar2 != (Il2CppObject *)0x0) &&
             (lVar7 = il2cpp_runtime_glue(pIVar2,(((parameters->obj).klass)->_1).element_class),
             lVar7 == 0)) goto LAB_03dad922;
          if ((uint)parameters->max_length < 2) goto LAB_03dad91d;
          parameters->m_Items[1] = pIVar2;
          il2cpp_runtime_glue(parameters->m_Items + 1,pIVar2);
          if (__this != (Photon_Pun_PhotonView_o *)0x0) {
            Photon_Pun_PhotonView__RPC(__this,"LoadBuiltinMapRPC",0,parameters,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
    else if (*(long *)(lVar7 + 0x28) != 0) {
      pMVar9 = *(MethodInfo **)(*(long *)(lVar7 + 0x28) + 0x18);
      if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar5 = Map_BuiltinLevels__LoadMap("Custom",(System_String_o *)pMVar9,(MethodInfo *)0x0);
      __this_00 = (Map_MapScript_o *)il2cpp_runtime_glue(TypeInfo_MapScript);
      Map_MapScript___ctor(__this_00,pMVar9);
      if (*(int *)(TypeInfo_MapManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      lVar7 = *(long *)(TypeInfo_MapManager + 0xb8);
      *(Map_MapScript_o **)(lVar7 + 8) = __this_00;
      il2cpp_runtime_glue(lVar7 + 8,__this_00);
      plVar1 = *(long **)(*(long *)(TypeInfo_MapManager + 0xb8) + 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x188))(plVar1,pSVar5,*(undefined8 *)(*plVar1 + 400));
        pMVar9 = TypeInfo_MapTransfer;
        if (*(int *)((long)&TypeInfo_MapTransfer[2].parameters + 4) == 0) {
          il2cpp_init_class();
        }
        Map_MapTransfer__Start(pMVar9);
        if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pMVar9 = (MethodInfo *)&stack0xffffffffffffffc8;
        Utility_Util__CreateLocalPhotonInfo
                  ((Photon_Pun_PhotonMessageInfo_o *)pMVar9,(MethodInfo *)0x0);
        info.fields.Sender = (Photon_Realtime_Player_o *)pIStack_30;
        info.fields._0_8_ = pIStack_38;
        info.fields.photonView = pPStack_28;
        Map_MapManager__OnLoadCachedMapRPC(info,pMVar9);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.MapManager$$StartMapEditor
// il2cpp: void Map_MapManager__StartMapEditor (const MethodInfo* method);
// 0x3dad940

void Map_MapManager__StartMapEditor(MethodInfo *method)

{
  long lVar1;
  MethodInfo *__this;
  long *plVar2;
  System_Collections_Generic_List_string__o *customAssets;
  System_Collections_Generic_List_MapScriptBaseObject__o *objects;
  Map_MapScriptOptions_o *options;
  Settings_WeatherSet_o *weather;
  bool_conflict bVar3;
  System_String_array *source;
  System_Collections_Generic_List_TSource__o *__this_00;
  MethodInfo *pMVar4;
  Map_MapScript_o *__this_01;
  System_String_o *pSVar5;
  MethodInfo *in_R9;
  
  if (DAT_057027a1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinLevels);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String__ToList_String);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&TypeInfo_MapManager);
    il2cpp_init_method_metadata(&TypeInfo_MapScript);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&"Custom");
    il2cpp_init_method_metadata(&"Untitled");
    DAT_057027a1 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x78);
  if (lVar1 == 0) goto LAB_03dadc3a;
  __this = *(MethodInfo **)(lVar1 + 0x20);
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    il2cpp_init_class();
  }
  source = Map_BuiltinLevels__GetMapNames("Custom",(MethodInfo *)0x0);
  __this_00 = System_Linq_Enumerable__ToList<object>
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,MethodInfo_List_1_System_String__ToList_String);
  if (__this == (MethodInfo *)0x0) goto LAB_03dadc3a;
  bVar3 = System_String__op_Equality
                    ((System_String_o *)__this->name,
                     (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    if (__this_00 == (System_Collections_Generic_List_TSource__o *)0x0) goto LAB_03dadc3a;
    pMVar4 = (MethodInfo *)__this->name;
    bVar3 = System_Collections_Generic_List<object>__Contains
                      ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pMVar4
                       ,MethodInfo_Boolean_Contains);
    if ((char)bVar3 == '\0') goto LAB_03dadab8;
  }
  else {
    if (__this_00 == (System_Collections_Generic_List_TSource__o *)0x0) goto LAB_03dadc3a;
LAB_03dadab8:
    if ((__this_00->fields)._size < 1) {
      pMVar4 = __this;
      Settings_TypedSetting<object>__set_Value
                ((Settings_TypedSetting_T__o *)__this,"Untitled",MethodInfo_Void_set_Value);
      pSVar5 = (System_String_o *)__this->name;
      pMVar4 = (MethodInfo *)Map_MapScript__CreateDefault(pMVar4);
      if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
        il2cpp_init_class();
      }
      Map_BuiltinLevels__SaveCustomMap(pSVar5,(Map_MapScript_o *)pMVar4,(MethodInfo *)0x0);
    }
    else {
      pMVar4 = (MethodInfo *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,0,MethodInfo_String_get_Item);
      Settings_TypedSetting<object>__set_Value
                ((Settings_TypedSetting_T__o *)__this,(Il2CppObject *)pMVar4,MethodInfo_Void_set_Value);
    }
  }
  __this_01 = (Map_MapScript_o *)il2cpp_runtime_glue(TypeInfo_MapScript);
  Map_MapScript___ctor(__this_01,pMVar4);
  if (*(int *)(TypeInfo_MapManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  lVar1 = *(long *)(TypeInfo_MapManager + 0xb8);
  *(Map_MapScript_o **)(lVar1 + 8) = __this_01;
  il2cpp_runtime_glue(lVar1 + 8,__this_01);
  plVar2 = *(long **)(*(long *)(TypeInfo_MapManager + 0xb8) + 8);
  pSVar5 = (System_String_o *)__this->name;
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar5 = Map_BuiltinLevels__LoadMap("Custom",pSVar5,(MethodInfo *)0x0);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x188))(plVar2,pSVar5,*(undefined8 *)(*plVar2 + 400));
    lVar1 = *(long *)(*(long *)(TypeInfo_MapManager + 0xb8) + 8);
    if (((lVar1 != 0) && (*(long *)(lVar1 + 0x28) != 0)) && (*(long *)(lVar1 + 0x30) != 0)) {
      customAssets = *(System_Collections_Generic_List_string__o **)(*(long *)(lVar1 + 0x28) + 0x10)
      ;
      objects = *(System_Collections_Generic_List_MapScriptBaseObject__o **)
                 (*(long *)(lVar1 + 0x30) + 0x10);
      options = *(Map_MapScriptOptions_o **)(lVar1 + 0x20);
      weather = *(Settings_WeatherSet_o **)(lVar1 + 0x38);
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_init_class();
      }
      Map_MapLoader__StartLoadObjects(customAssets,objects,options,weather,1,in_R9);
      return;
    }
  }
LAB_03dadc3a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.MapManager$$OnLoadBuiltinMapRPC
// il2cpp: void Map_MapManager__OnLoadBuiltinMapRPC (System_String_o* category, System_String_o* name, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x3dae400

void Map_MapManager__OnLoadBuiltinMapRPC
               (System_String_o *category,System_String_o *name,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  bool_conflict bVar4;
  uint uVar5;
  System_String_o *pSVar6;
  Map_MapScript_o *__this;
  MethodInfo *method_00;
  
  if (DAT_057027a2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinLevels);
    il2cpp_init_method_metadata(&TypeInfo_MapManager);
    il2cpp_init_method_metadata(&TypeInfo_MapScript);
    il2cpp_init_method_metadata(&TypeInfo_MapTransfer);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    DAT_057027a2 = '\x01';
  }
  if (info.fields.Sender != (Photon_Realtime_Player_o *)0x0) {
    bVar4 = Photon_Realtime_Player__get_IsMasterClient(info.fields.Sender,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      return;
    }
    if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar6 = Map_BuiltinLevels__LoadMap(category,name,(MethodInfo *)0x0);
    __this = (Map_MapScript_o *)il2cpp_runtime_glue(TypeInfo_MapScript);
    Map_MapScript___ctor(__this,(MethodInfo *)name);
    if (*(int *)(TypeInfo_MapManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    lVar1 = *(long *)(TypeInfo_MapManager + 0xb8);
    *(Map_MapScript_o **)(lVar1 + 8) = __this;
    il2cpp_runtime_glue(lVar1 + 8,__this);
    plVar2 = *(long **)(*(long *)(TypeInfo_MapManager + 0xb8) + 8);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x188))(plVar2,pSVar6,*(undefined8 *)(*plVar2 + 400));
      uVar3 = **(undefined8 **)(DAT_057110b0 + 0xb8);
      if (*(int *)(TypeInfo_MapTransfer + 0xe4) == 0) {
        il2cpp_init_class();
      }
      lVar1 = *(long *)(TypeInfo_MapTransfer + 0xb8);
      *(undefined8 *)(lVar1 + 8) = uVar3;
      il2cpp_runtime_glue(lVar1 + 8,uVar3);
      lVar1 = *(long *)(*(long *)(TypeInfo_MapManager + 0xb8) + 8);
      if (lVar1 != 0) {
        bVar4 = System_String__op_Inequality
                          (*(System_String_o **)(*(long *)(TypeInfo_MapManager + 0xb8) + 0x20),
                           *(System_String_o **)(lVar1 + 0x48),(MethodInfo *)0x0);
        uVar5 = 1;
        if ((char)bVar4 == '\0') {
          if (*(int *)(TypeInfo_MapManager + 0xe4) == 0) {
            il2cpp_init_class();
          }
          lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
          if (((lVar1 == 0) || (lVar1 = *(long *)(lVar1 + 0x38), lVar1 == 0)) ||
             (lVar1 = *(long *)(lVar1 + 0x30), lVar1 == 0)) goto LAB_03dae688;
          uVar5 = System_String__op_Inequality
                            (*(System_String_o **)(*(long *)(TypeInfo_MapManager + 0xb8) + 0x28),
                             *(System_String_o **)(lVar1 + 0x18),(MethodInfo *)0x0);
        }
        if (*(int *)(TypeInfo_MapManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        lVar1 = *(long *)(TypeInfo_MapManager + 0xb8);
        if (*(long *)(lVar1 + 8) != 0) {
          *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(*(long *)(lVar1 + 8) + 0x48);
          il2cpp_runtime_glue(lVar1 + 0x20);
          lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
          if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x38), lVar1 != 0)) &&
             (lVar1 = *(long *)(lVar1 + 0x30), lVar1 != 0)) {
            method_00 = *(MethodInfo **)(lVar1 + 0x18);
            lVar1 = *(long *)(TypeInfo_MapManager + 0xb8);
            *(MethodInfo **)(lVar1 + 0x28) = method_00;
            il2cpp_runtime_glue(lVar1 + 0x28);
            Map_MapManager__LoadMap(uVar5 & 0xff,method_00);
            return;
          }
        }
      }
    }
  }
LAB_03dae688:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.MapManager$$OnLoadCachedMapRPC
// il2cpp: void Map_MapManager__OnLoadCachedMapRPC (Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x3dade60

void Map_MapManager__OnLoadCachedMapRPC(Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  long lVar1;
  bool_conflict bVar2;
  uint uVar3;
  MethodInfo *method_00;
  
  if (DAT_057027a3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MapManager);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    DAT_057027a3 = '\x01';
  }
  if (info.fields.Sender != (Photon_Realtime_Player_o *)0x0) {
    bVar2 = Photon_Realtime_Player__get_IsMasterClient(info.fields.Sender,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      return;
    }
  }
  if (*(int *)(TypeInfo_MapManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_MapManager + 0xb8) + 8);
  if (lVar1 != 0) {
    bVar2 = System_String__op_Inequality
                      (*(System_String_o **)(*(long *)(TypeInfo_MapManager + 0xb8) + 0x20),
                       *(System_String_o **)(lVar1 + 0x48),(MethodInfo *)0x0);
    uVar3 = 1;
    if ((char)bVar2 == '\0') {
      if (*(int *)(TypeInfo_MapManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
      if (((lVar1 == 0) || (lVar1 = *(long *)(lVar1 + 0x38), lVar1 == 0)) ||
         (lVar1 = *(long *)(lVar1 + 0x30), lVar1 == 0)) goto LAB_03dadff0;
      uVar3 = System_String__op_Inequality
                        (*(System_String_o **)(*(long *)(TypeInfo_MapManager + 0xb8) + 0x28),
                         *(System_String_o **)(lVar1 + 0x18),(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_MapManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    lVar1 = *(long *)(TypeInfo_MapManager + 0xb8);
    if (*(long *)(lVar1 + 8) != 0) {
      *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(*(long *)(lVar1 + 8) + 0x48);
      il2cpp_runtime_glue(lVar1 + 0x20);
      lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
      if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x38), lVar1 != 0)) &&
         (lVar1 = *(long *)(lVar1 + 0x30), lVar1 != 0)) {
        method_00 = *(MethodInfo **)(lVar1 + 0x18);
        lVar1 = *(long *)(TypeInfo_MapManager + 0xb8);
        *(MethodInfo **)(lVar1 + 0x28) = method_00;
        il2cpp_runtime_glue(lVar1 + 0x28);
        Map_MapManager__LoadMap(uVar3 & 0xff,method_00);
        return;
      }
    }
  }
LAB_03dadff0:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.MapManager$$LoadMap
// il2cpp: void Map_MapManager__LoadMap (bool mapChanged, const MethodInfo* method);
// 0x3dae690

void Map_MapManager__LoadMap(bool_conflict mapChanged,MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_List_string__o *customAssets;
  System_Collections_Generic_List_MapScriptBaseObject__o *objects;
  Map_MapScriptOptions_o *options;
  Settings_WeatherSet_o *weather;
  Photon_Realtime_Player_o *player;
  MethodInfo *in_R9;
  
  if (DAT_057027a4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&TypeInfo_MapManager);
    il2cpp_init_method_metadata(&TypeInfo_MapTransfer);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&"CustomMapHash");
    DAT_057027a4 = '\x01';
  }
  if (*(int *)(TypeInfo_MapManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  *(char *)(*(long *)(TypeInfo_MapManager + 0xb8) + 0x18) = (char)mapChanged;
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
  }
  player = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_MapTransfer + 0xe4) == 0) {
    il2cpp_init_class();
  }
  PhotonExtensions__SetCustomProperty
            (player,"CustomMapHash",*(Il2CppObject **)(*(long *)(TypeInfo_MapTransfer + 0xb8) + 8),
             (MethodInfo *)0x0);
  lVar1 = *(long *)(*(long *)(TypeInfo_MapManager + 0xb8) + 8);
  if (((lVar1 != 0) && (*(long *)(lVar1 + 0x28) != 0)) && (*(long *)(lVar1 + 0x30) != 0)) {
    customAssets = *(System_Collections_Generic_List_string__o **)(*(long *)(lVar1 + 0x28) + 0x10);
    objects = *(System_Collections_Generic_List_MapScriptBaseObject__o **)
               (*(long *)(lVar1 + 0x30) + 0x10);
    options = *(Map_MapScriptOptions_o **)(lVar1 + 0x20);
    weather = *(Settings_WeatherSet_o **)(lVar1 + 0x38);
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_init_class();
    }
    Map_MapLoader__StartLoadObjects(customAssets,objects,options,weather,0,in_R9);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.MapManager$$OnPlayerEnteredRoom
// il2cpp: void Map_MapManager__OnPlayerEnteredRoom (Map_MapManager_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x3dae7e0

void Map_MapManager__OnPlayerEnteredRoom
               (Map_MapManager_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this_00;
  Il2CppObject *pIVar1;
  char cVar2;
  bool_conflict bVar3;
  System_Object_array *parameters;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  MethodInfo *method_00;
  
  if (DAT_057027a5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MapTransfer);
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_RPCManager);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&"Custom");
    il2cpp_init_method_metadata(&"LoadBuiltinMapRPC");
    DAT_057027a5 = '\x01';
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) goto LAB_03dae8c5;
LAB_03dae80c:
    bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar2 = (char)bVar3;
  }
  else {
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) != 0) goto LAB_03dae80c;
LAB_03dae8c5:
    il2cpp_init_class();
    bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar2 = (char)bVar3;
  }
  if (cVar2 != '\0') {
    if (*(int *)(TypeInfo_MapTransfer + 0xe4) == 0) {
      il2cpp_init_class();
      cVar2 = **(char **)(TypeInfo_MapTransfer + 0xb8);
      method_00 = "Custom";
    }
    else {
      cVar2 = **(char **)(TypeInfo_MapTransfer + 0xb8);
      method_00 = "Custom";
    }
    "Custom" = method_00;
    if (cVar2 != '\0') {
      lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
      if (((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x38), lVar5 != 0)) &&
         (*(long *)(lVar5 + 0x20) != 0)) {
        bVar3 = System_String__op_Equality
                          (*(System_String_o **)(*(long *)(lVar5 + 0x20) + 0x18),
                           (System_String_o *)method_00,(MethodInfo *)0x0);
        if ((char)bVar3 != '\0') {
          if (*(int *)(TypeInfo_MapTransfer + 0xe4) == 0) {
            il2cpp_init_class();
          }
          Map_MapTransfer__Transfer(player,method_00);
          return;
        }
        __this_00 = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
        parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,2);
        if ((*(long *)(lVar5 + 0x20) != 0) && (parameters != (System_Object_array *)0x0)) {
          pIVar1 = *(Il2CppObject **)(*(long *)(lVar5 + 0x20) + 0x18);
          if ((pIVar1 != (Il2CppObject *)0x0) &&
             (lVar4 = il2cpp_runtime_glue(pIVar1,(((parameters->obj).klass)->_1).element_class),
             lVar4 == 0)) {
LAB_03daea59:
            uVar6 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
            il2cpp_glue_02274a00(uVar6,0);
          }
          if ((int)parameters->max_length == 0) {
LAB_03daea54:
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          parameters->m_Items[0] = pIVar1;
          il2cpp_runtime_glue(parameters->m_Items,pIVar1);
          if (*(long *)(lVar5 + 0x28) != 0) {
            pIVar1 = *(Il2CppObject **)(*(long *)(lVar5 + 0x28) + 0x18);
            if ((pIVar1 != (Il2CppObject *)0x0) &&
               (lVar5 = il2cpp_runtime_glue(pIVar1,(((parameters->obj).klass)->_1).element_class),
               lVar5 == 0)) goto LAB_03daea59;
            if ((uint)parameters->max_length < 2) goto LAB_03daea54;
            parameters->m_Items[1] = pIVar1;
            il2cpp_runtime_glue(parameters->m_Items + 1,pIVar1);
            if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
              Photon_Pun_PhotonView__RPC(__this_00,"LoadBuiltinMapRPC",player,parameters,(MethodInfo *)0x0)
              ;
              return;
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return;
}


// Map.MapManager$$.ctor
// il2cpp: void Map_MapManager___ctor (Map_MapManager_o* __this, const MethodInfo* method);
// 0x3daeb70

void Map_MapManager___ctor(Map_MapManager_o *__this,MethodInfo *method)

{
  Photon_Pun_MonoBehaviourPunCallbacks___ctor
            ((Photon_Pun_MonoBehaviourPunCallbacks_o *)__this,(MethodInfo *)0x0);
  return;
}


// Map.MapManager$$.cctor
// il2cpp: void Map_MapManager___cctor (const MethodInfo* method);
// 0x3daeb80

void Map_MapManager___cctor(MethodInfo *method)

{
  long lVar1;
  
  if (DAT_057027a6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MapManager);
    DAT_057027a6 = '\x01';
  }
  lVar1 = *(long *)(TypeInfo_MapManager + 0xb8);
  *(undefined1 *)(lVar1 + 0x18) = 1;
  *(undefined8 *)(lVar1 + 0x20) = **(undefined8 **)(DAT_057110b0 + 0xb8);
  il2cpp_runtime_glue(lVar1 + 0x20);
  lVar1 = *(long *)(TypeInfo_MapManager + 0xb8);
  *(undefined8 *)(lVar1 + 0x28) = **(undefined8 **)(DAT_057110b0 + 0xb8);
  il2cpp_runtime_glue(lVar1 + 0x28);
  return;
}


