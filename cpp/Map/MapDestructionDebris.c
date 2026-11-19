// Type: Map.MapDestructionDebris
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Map/MapDestructionDebris.cs
// Prior real C# source: none
// --------------------------------

// Map.MapDestructionDebris.Piece$$.ctor
// il2cpp: void Map_MapDestructionDebris_Piece___ctor (Map_MapDestructionDebris_Piece_o* __this, const MethodInfo* method);
// 0x5987600

void Map_MapDestructionDebris_Piece___ctor(Map_MapDestructionDebris_Piece_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Map.MapDestructionDebris.<>c__DisplayClass37_0$$.ctor
// il2cpp: void Map_MapDestructionDebris___c__DisplayClass37_0___ctor (Map_MapDestructionDebris___c__DisplayClass37_0_o* __this, const MethodInfo* method);
// 0x5983700

void Map_MapDestructionDebris___c__DisplayClass37_0___ctor
               (Map_MapDestructionDebris___c__DisplayClass37_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Map.MapDestructionDebris.<>c__DisplayClass37_0$$<Shatter>b__0
// il2cpp: System_Collections_Generic_List_List_MapFracture_Triangle___o* Map_MapDestructionDebris___c__DisplayClass37_0___Shatter_b__0 (Map_MapDestructionDebris___c__DisplayClass37_0_o* __this, const MethodInfo* method);
// 0x5987e80
// fidelity: the machine code has facts this C leaves out:
//   tail call to Map_MapFracture__Shatter

System_Collections_Generic_List_List_MapFracture_Triangle___o *
Map_MapDestructionDebris___c__DisplayClass37_0___Shatter_b__0
          (Map_MapDestructionDebris___c__DisplayClass37_0_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  float fVar2;
  float fVar3;
  int32_t Seed;
  int32_t capacity;
  uint32_t uVar4;
  Map_MapFracture_o *__this_00;
  System_Int32_array *pSVar5;
  UnityEngine_Vector3_StaticFields *pUVar6;
  System_Collections_Generic_List_MapFracture_Triangle__array *pSVar7;
  undefined1 auVar8 [16];
  UnityEngine_Bounds_o bounds;
  bool bVar9;
  int32_t iVar10;
  Il2CppClass *__this_01;
  System_Collections_Generic_List_List_MapFracture_Triangle___o *__this_02;
  System_Collections_Generic_List_MapFracture_Triangle__o *__this_03;
  System_Random_o *__this_04;
  System_Collections_Generic_List_Vector3__o *pSVar11;
  System_Collections_Generic_List_int__o *__this_05;
  System_Collections_Generic_List_MapFracture_Triangle__o *pSVar12;
  System_Collections_Generic_List_MapFracture_Triangle__o *__this_06;
  char *pcVar13;
  Il2CppObject *pIVar14;
  Il2CppClass *pIVar15;
  System_Comparison_T__o *comparison;
  System_Collections_Generic_List_MapFracture_Triangle__o *pSVar16;
  Map_MapDestructionDebris_o *method_00;
  MethodInfo **method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  int item;
  int index;
  char **targetAddress;
  MethodInfo *pMVar17;
  Il2CppObject *targetAddress_00;
  uint uVar18;
  System_Collections_Generic_List_MapFracture_Triangle__o *source;
  undefined4 extraout_XMM0_Db;
  undefined4 uVar19;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dd;
  float fVar20;
  undefined1 auVar21 [16];
  UnityEngine_Vector3_o UVar22;
  UnityEngine_Vector3_o normal;
  float fStack_c8;
  float fStack_c4;
  float fStack_68;
  float fStack_64;
  UnityEngine_Bounds_o UStack_48;
  
  method_00 = (__this->fields).__4__this;
  if ((method_00 == (Map_MapDestructionDebris_o *)0x0) ||
     (__this_00 = (__this->fields).fracture, __this_00 == (Map_MapFracture_o *)0x0)) {
    ThrowNullReferenceException();
  }
  iVar10 = (__this->fields).pieces;
  fVar20 = (__this->fields).ground;
  Seed = (method_00->fields)._seed;
  if (Il2CppMethodInitialized_07545a16 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Comparison_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_List_MapFracture_Triangle_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Sort_7195140);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_List_MapFracture_Triangle_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_ctor_71950c8);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapFracture_Triangle_ctor_7198628);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapFracture_Triangle_ctor_7198620);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapFracture_Triangle_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_MapFracture_Triangle)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_List_MapFracture_Triangle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Random);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapFracture_c__DisplayClass16_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Map_MapFracture_c__DisplayClass16_1_Shatter_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapFracture_c__DisplayClass16_1);
    Il2CppMethodInitialized_07545a16 = '\x01';
  }
  __this_01 = (Il2CppClass *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapFracture_c__DisplayClass16_0);
  pMVar17 = (MethodInfo *)0x0;
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  Map_MapFracture__CloseOpenings(__this_00,pMVar17);
  __this_02 = (System_Collections_Generic_List_List_MapFracture_Triangle___o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_List_MapFracture_Triangle);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_02,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_List_MapFracture_Triangle_ctor);
  pSVar12 = (__this_00->fields)._triangles;
  if (pSVar12 != (System_Collections_Generic_List_MapFracture_Triangle__o *)0x0) {
    capacity = (pSVar12->fields)._size;
    __this_03 = (System_Collections_Generic_List_MapFracture_Triangle__o *)
                il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MapFracture_Triangle);
    System_Collections_Generic_List_MapFracture_Triangle____ctor_3ab1540
              (__this_03,capacity,
               (MethodInfo_3AB1540 *)
               MethodInfo_System_Collections_Generic_List_MapFracture_Triangle_ctor_7198628);
    pSVar12 = (__this_00->fields)._triangles;
    if (Il2CppMethodInitialized_0753e72c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e72c = '\x01';
    }
    bVar9 = Map_MapFracture__Clip
                      (__this_00,pSVar12,__this_03,
                       (UnityEngine_Vector3_o)(TypeInfo_UnityEngine_Vector3->static_fields->upVector).fields,
                       fVar20,(MethodInfo *)method_00);
    if (!bVar9) {
      __this_03 = (__this_00->fields)._triangles;
    }
    if (__this_03 != (System_Collections_Generic_List_MapFracture_Triangle__o *)0x0) {
      if ((__this_03->fields)._size == 0) {
        return __this_02;
      }
      Map_MapFracture__GetBounds(&UStack_48,__this_03,method_02);
      __this_04 = (System_Random_o *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Random);
      System_Random___ctor_54cebf0(__this_04,Seed,(MethodInfo *)0x0);
      bounds.fields.m_Center.fields.z = UStack_48.fields.m_Center.fields.z;
      bounds.fields.m_Extents.fields.x = UStack_48.fields.m_Extents.fields.x;
      bounds.fields.m_Center.fields.x = UStack_48.fields.m_Center.fields.x;
      bounds.fields.m_Center.fields.y = UStack_48.fields.m_Center.fields.y;
      bounds.fields.m_Extents.fields.y = UStack_48.fields.m_Extents.fields.y;
      bounds.fields.m_Extents.fields.z = UStack_48.fields.m_Extents.fields.z;
      pSVar11 = Map_MapFracture__CreateSeeds(bounds,iVar10,__this_04,method_03);
      if (__this_01 != (Il2CppClass *)0x0) {
        targetAddress = &(__this_01->_1).name;
        (__this_01->_1).name = (char *)pSVar11;
        Il2CppCodeGenWriteBarrier(targetAddress);
        pcVar13 = (__this_01->_1).name;
        if (pcVar13 != (char *)0x0) {
          iVar10 = *(int32_t *)(pcVar13 + 0x18);
          __this_05 = (System_Collections_Generic_List_int__o *)
                      il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
          System_Collections_Generic_List_int____ctor_3916240
                    (__this_05,iVar10,
                     (MethodInfo_3916240 *)MethodInfo_System_Collections_Generic_List_int_ctor_71950c8);
          iVar10 = (__this_03->fields)._size;
          pSVar12 = (System_Collections_Generic_List_MapFracture_Triangle__o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MapFracture_Triangle);
          System_Collections_Generic_List_MapFracture_Triangle____ctor_3ab1540
                    (pSVar12,iVar10,
                     (MethodInfo_3AB1540 *)
                     MethodInfo_System_Collections_Generic_List_MapFracture_Triangle_ctor_7198628);
          iVar10 = (__this_03->fields)._size;
          __this_06 = (System_Collections_Generic_List_MapFracture_Triangle__o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MapFracture_Triangle)
          ;
          System_Collections_Generic_List_MapFracture_Triangle____ctor_3ab1540
                    (__this_06,iVar10,
                     (MethodInfo_3AB1540 *)
                     MethodInfo_System_Collections_Generic_List_MapFracture_Triangle_ctor_7198628);
          pcVar13 = *targetAddress;
          if (pcVar13 != (char *)0x0) {
            if (__this_05 == (System_Collections_Generic_List_int__o *)0x0) {
              if (*(int *)(pcVar13 + 0x18) < 1) {
                return __this_02;
              }
              pIVar14 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapFracture_c__DisplayClass16_1)
              ;
              System_Object___ctor(pIVar14,(MethodInfo *)0x0);
              if (pIVar14 != (Il2CppObject *)0x0) {
                pIVar14[2].klass = __this_01;
                Il2CppCodeGenWriteBarrier(&pIVar14[2].klass);
                if ((pIVar14[2].klass != (Il2CppClass *)0x0) &&
                   (pSVar11 = (System_Collections_Generic_List_Vector3__o *)((pIVar14[2].klass)->_1).name,
                   pSVar11 != (System_Collections_Generic_List_Vector3__o *)0x0)) {
                  UVar22 = System_Collections_Generic_List_Vector3___get_Item
                                     (pSVar11,0,
                                      (MethodInfo_39FF5D0 *)
                                      MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
                  pIVar14[1].klass = UVar22.fields._0_8_;
                  *(float *)&pIVar14[1].monitor = UVar22.fields.z;
                  ThrowNullReferenceException();
                }
              }
            }
            else {
              index = 0;
              while( true ) {
                if (*(int *)(pcVar13 + 0x18) <= index) {
                  return __this_02;
                }
                pIVar14 = il2cpp_codegen_object_new
                                    ((Il2CppClass *)TypeInfo_Map_MapFracture_c__DisplayClass16_1);
                System_Object___ctor(pIVar14,(MethodInfo *)0x0);
                if (pIVar14 == (Il2CppObject *)0x0) break;
                targetAddress_00 = pIVar14 + 2;
                pIVar14[2].klass = __this_01;
                Il2CppCodeGenWriteBarrier(&targetAddress_00->klass);
                if ((pIVar14[2].klass == (Il2CppClass *)0x0) ||
                   (pSVar11 = (System_Collections_Generic_List_Vector3__o *)((pIVar14[2].klass)->_1).name,
                   pSVar11 == (System_Collections_Generic_List_Vector3__o *)0x0)) break;
                UVar22 = System_Collections_Generic_List_Vector3___get_Item
                                   (pSVar11,index,
                                    (MethodInfo_39FF5D0 *)
                                    MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
                pIVar14[1].klass = UVar22.fields._0_8_;
                *(float *)&pIVar14[1].monitor = UVar22.fields.z;
                piVar1 = &(__this_05->fields)._version;
                *piVar1 = *piVar1 + 1;
                (__this_05->fields)._size = 0;
                pIVar15 = pIVar14[2].klass;
                if (pIVar15 == (Il2CppClass *)0x0) break;
                item = 0;
                while( true ) {
                  pMVar17 = MethodInfo_System_Collections_Generic_List_int_Add;
                  pcVar13 = (pIVar15->_1).name;
                  if (pcVar13 == (char *)0x0) goto label_05988743;
                  if (*(int *)(pcVar13 + 0x18) <= item) break;
                  if (index != item) {
                    piVar1 = &(__this_05->fields)._version;
                    *piVar1 = *piVar1 + 1;
                    pSVar5 = (__this_05->fields)._items;
                    if (pSVar5 == (System_Int32_array *)0x0) goto label_05988743;
                    uVar18 = (__this_05->fields)._size;
                    if (uVar18 < (uint)pSVar5->max_length) {
                      (__this_05->fields)._size = uVar18 + 1;
                      pSVar5->m_Items[(int)uVar18] = item;
                    }
                    else {
                      System_Collections_Generic_List_int___AddWithResize
                                (__this_05,item,(MethodInfo_3916AC0 *)pMVar17->klass->rgctx_data[0xe].method);
                      pIVar15 = targetAddress_00->klass;
                    }
                  }
                  item = item + 1;
                  if (pIVar15 == (Il2CppClass *)0x0) goto label_05988743;
                }
                comparison = (System_Comparison_T__o *)
                             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Comparison_int);
                System_Comparison_int____ctor
                          ((System_Comparison_int__o *)comparison,pIVar14,
                           (intptr_t)MethodInfo_Map_MapFracture_c__DisplayClass16_1_Shatter_b__0,
                           (MethodInfo_48E1930 *)0x0);
                System_Collections_Generic_List_int___Sort_3918cc0
                          (__this_05,comparison,
                           (MethodInfo_3918CC0 *)MethodInfo_System_Collections_Generic_List_int_Sort_7195140);
                source = __this_03;
                if (0 < (__this_05->fields)._size) {
                  uVar18 = 0;
                  do {
                    if (source == (System_Collections_Generic_List_MapFracture_Triangle__o *)0x0)
                    goto label_05988743;
                    if ((source->fields)._size < 1) goto label_05988227;
                    if (targetAddress_00->klass == (Il2CppClass *)0x0) goto label_05988743;
                    pSVar11 = (System_Collections_Generic_List_Vector3__o *)(targetAddress_00->klass->_1).name
                    ;
                    iVar10 = System_Collections_Generic_List_int___get_Item
                                       (__this_05,uVar18,
                                        (MethodInfo_39167D0 *)
                                        MethodInfo_System_Collections_Generic_List_int_get_Item);
                    if (pSVar11 == (System_Collections_Generic_List_Vector3__o *)0x0) goto label_05988743;
                    method_01 = &MethodInfo_System_Collections_Generic_List_Vector3_get_Item;
                    UVar22 = System_Collections_Generic_List_Vector3___get_Item
                                       (pSVar11,iVar10,
                                        (MethodInfo_39FF5D0 *)
                                        MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
                    pIVar15 = pIVar14[1].klass;
                    fVar20 = *(float *)&pIVar14[1].monitor;
                    fStack_c8 = SUB84(pIVar15,0);
                    fStack_c4 = (float)((ulong)pIVar15 >> 0x20);
                    if (Il2CppMethodInitialized_0753e72d == '\0') {
                      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                      Il2CppMethodInitialized_0753e72d = '\x01';
                      fVar2 = fStack_c8;
                      fVar3 = fStack_c4;
                      if (g_data_0753e729 == '\0') goto label_05988603;
label_05988467:
                      uVar4 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
                    }
                    else {
                      fVar2 = *(float *)&pIVar14[1].klass;
                      fVar3 = *(float *)((long)&pIVar14[1].klass + 4);
                      if (g_data_0753e729 != '\0') goto label_05988467;
label_05988603:
                      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
                      g_data_0753e729 = '\x01';
                      uVar4 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
                      fVar2 = fStack_c8;
                      fVar3 = fStack_c4;
                    }
                    if (uVar4 == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
                      fVar2 = fStack_c8;
                      fVar3 = fStack_c4;
                    }
                    uVar19 = 0;
                    fStack_68 = UVar22.fields.x;
                    fStack_64 = UVar22.fields.y;
                    auVar21._0_4_ = fVar2 - fStack_68;
                    auVar21._4_4_ = fVar3 - fStack_64;
                    auVar21._8_4_ = 0.0 - extraout_XMM0_Dc;
                    auVar21._12_4_ = 0.0 - extraout_XMM0_Dd;
                    fVar20 = fVar20 - UVar22.fields.z;
                    fVar2 = fVar20 * fVar20 + auVar21._4_4_ * auVar21._4_4_ + auVar21._0_4_ * auVar21._0_4_;
                    if (fVar2 < 0.0) {
                      fVar2 = sqrtf(fVar2);
                      uVar19 = extraout_XMM0_Db;
                      if (1e-05 < fVar2) goto label_05988512;
label_059884c1:
                      pUVar6 = TypeInfo_UnityEngine_Vector3->static_fields;
                      fVar20 = (pUVar6->zeroVector).fields.z;
                      fVar2 = (pUVar6->zeroVector).fields.x;
                      fVar3 = (pUVar6->zeroVector).fields.y;
                    }
                    else {
                      fVar2 = SQRT(fVar2);
                      if (fVar2 <= 1e-05) goto label_059884c1;
label_05988512:
                      fVar20 = fVar20 / fVar2;
                      auVar8._4_4_ = fVar2;
                      auVar8._0_4_ = fVar2;
                      auVar8._8_4_ = uVar19;
                      auVar8._12_4_ = uVar19;
                      auVar21 = divps(auVar21,auVar8);
                      fVar2 = auVar21._0_4_;
                      fVar3 = auVar21._4_4_;
                    }
                    pSVar16 = __this_06;
                    if (source != pSVar12) {
                      pSVar16 = pSVar12;
                    }
                    normal.fields.y = fVar3;
                    normal.fields.x = fVar2;
                    normal.fields.z = fVar20;
                    bVar9 = Map_MapFracture__Clip
                                      (__this_00,source,pSVar16,normal,
                                       fVar2 * (SUB84(pIVar14[1].klass,0) + fStack_68) * 0.5 +
                                       fVar3 * (fStack_64 + (float)((ulong)pIVar14[1].klass >> 0x20)) * 0.5 +
                                       fVar20 * (*(float *)&pIVar14[1].monitor + UVar22.fields.z) * 0.5,
                                       (MethodInfo *)method_01);
                    if (!bVar9) {
                      pSVar16 = source;
                    }
                    source = pSVar16;
                  } while ((uVar18 < 0x13) && (uVar18 = uVar18 + 1, (int)uVar18 < (__this_05->fields)._size));
                }
                if (source == (System_Collections_Generic_List_MapFracture_Triangle__o *)0x0) break;
                if (0 < (source->fields)._size) {
                  pSVar16 = (System_Collections_Generic_List_MapFracture_Triangle__o *)
                            il2cpp_codegen_object_new
                                      ((Il2CppClass *)
                                       TypeInfo_System_Collections_Generic_List_MapFracture_Triangle);
                  System_Collections_Generic_List_MapFracture_Triangle____ctor_3ab1620
                            (pSVar16,(System_Collections_Generic_IEnumerable_T__o *)source,
                             (MethodInfo_3AB1620 *)
                             MethodInfo_System_Collections_Generic_List_MapFracture_Triangle_ctor_7198620);
                  pMVar17 = MethodInfo_System_Collections_Generic_List_List_MapFracture_Triangle_Add;
                  if (__this_02 == (System_Collections_Generic_List_List_MapFracture_Triangle___o *)0x0)
                  break;
                  piVar1 = &(__this_02->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pSVar7 = (__this_02->fields)._items;
                  if (pSVar7 == (System_Collections_Generic_List_MapFracture_Triangle__array *)0x0) break;
                  uVar18 = (__this_02->fields)._size;
                  if (uVar18 < (uint)pSVar7->max_length) {
                    (__this_02->fields)._size = uVar18 + 1;
                    pSVar7->m_Items[(int)uVar18] = pSVar16;
                    Il2CppCodeGenWriteBarrier(pSVar7->m_Items + (int)uVar18);
                  }
                  else {
                    System_Collections_Generic_List_object___AddWithResize
                              ((System_Collections_Generic_List_object__o *)__this_02,(Il2CppObject *)pSVar16,
                               (MethodInfo_395D230 *)pMVar17->klass->rgctx_data[0xe].method);
                  }
                }
label_05988227:
                index = index + 1;
                pcVar13 = *targetAddress;
                if (pcVar13 == (char *)0x0) break;
              }
            }
          }
        }
      }
    }
  }
label_05988743:
  ThrowNullReferenceException();
}


// Map.MapDestructionDebris.<>c__DisplayClass45_0$$.ctor
// il2cpp: void Map_MapDestructionDebris___c__DisplayClass45_0___ctor (Map_MapDestructionDebris___c__DisplayClass45_0_o* __this, const MethodInfo* method);
// 0x59862b0

void Map_MapDestructionDebris___c__DisplayClass45_0___ctor
               (Map_MapDestructionDebris___c__DisplayClass45_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Map.MapDestructionDebris.<>c__DisplayClass45_0$$<CreateFragments>b__0
// il2cpp: void Map_MapDestructionDebris___c__DisplayClass45_0___CreateFragments_b__0 (Map_MapDestructionDebris___c__DisplayClass45_0_o* __this, const MethodInfo* method);
// 0x5988770
// eh: try 0x5988820..0x5988852 -> pad 0x5988878 (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5988890..0x5988895 -> pad 0x59888b4 cleanup
// eh: try 0x59888b7..0x59888c1 -> pad 0x59888c9 catch (...) [compiler noexcept guard]
// asm: 24 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5988876: jmp 0x5988878
// asm:   0x5988878: mov rbx, rax
// asm:   0x598887b: cmp edx, 1
// asm:   0x598887e: jne 0x59888b7
// asm:   0x5988880: mov rdi, rbx
// asm:   0x5988883: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5988888: mov rbx, qword ptr [rax]
// asm:   0x598888b: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5988890: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5988895: lea rax, [rip + 0x19053a4]  ; MethodInfo_System_Collections_Generic_List_Enumerator_EntityId_Dispose
// asm:   0x598889c: mov rsi, qword ptr [rax]
// asm:   0x598889f: mov rdi, rsp
// asm:   0x59888a2: call 0x4d33570  ; System_Collections_Generic_List_Enumerator_EntityId___Dispose()
// asm:   0x59888a7: test rbx, rbx
// asm:   0x59888aa: je 0x5988866
// asm:   0x59888ac: mov rdi, rbx
// asm:   0x59888af: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x59888b4: mov rbx, rax
// asm:   0x59888b7: lea rdi, [rsp + 0x18]
// asm:   0x59888bc: call 0x2fd4380  ; il2cpp_runtime_helper_02fd4380()
// asm:   0x59888c1: mov rdi, rbx
// asm:   0x59888c4: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x59888c9: mov rdi, rax
// asm:   0x59888cc: call 0x2ab61e0  ; __clang_call_terminate()

void Map_MapDestructionDebris___c__DisplayClass45_0___CreateFragments_b__0
               (Map_MapDestructionDebris___c__DisplayClass45_0_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_EntityId__o *__this_00;
  UnityEngine_EntityId_o meshEntityId;
  bool bVar1;
  undefined1 auStack_48 [16];
  Il2CppObject *pIStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (Il2CppMethodInitialized_07545a11 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_EntityId_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_EntityId_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_EntityId_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EntityId_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    Il2CppMethodInitialized_07545a11 = '\x01';
  }
  auStack_48._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  auStack_48._8_4_ = 0;
  auStack_48._12_4_ = 0;
  pIStack_38 = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).convex;
  if (__this_00 == (System_Collections_Generic_List_EntityId__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_EntityId___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)auStack_48,__this_00,
             (MethodInfo_520CFB0 *)MethodInfo_System_Collections_Generic_List_EntityId_GetEnumerator);
  uStack_30 = 0;
  puStack_28 = auStack_48;
  while( true ) {
    bVar1 = System_Collections_Generic_List_Enumerator_EntityId___MoveNext
                      ((System_Collections_Generic_List_Enumerator_T__o *)auStack_48,
                       (MethodInfo_4C33580 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_EntityId_MoveNext);
    if (!bVar1) break;
    meshEntityId.fields.m_Data = pIStack_38._0_4_;
    if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
    }
    UnityEngine_Physics__BakeMesh_69de2d0(meshEntityId,true,(MethodInfo *)0x0);
  }
  System_Collections_Generic_List_Enumerator_EntityId___Dispose
            ((System_Collections_Generic_List_Enumerator_T__o *)auStack_48,
             (MethodInfo_4C33570 *)MethodInfo_System_Collections_Generic_List_Enumerator_EntityId_Dispose);
  return;
}


// Map.MapDestructionDebris$$Spawn
// il2cpp: void Map_MapDestructionDebris__Spawn (Map_DestructibleMapObject_o* target, const MethodInfo* method);
// 0x5981de0

void Map_MapDestructionDebris__Spawn(Map_DestructibleMapObject_o *target,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_MeshFilter_array *pUVar3;
  Map_MapDestructionDebris_array *pMVar4;
  MethodInfo *pMVar5;
  int32_t iVar6;
  System_Collections_Generic_List_MapDestructionDebris__o *pSVar7;
  Map_MapDestructionDebris_o *pMVar8;
  UnityEngine_Object_o *obj;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_MeshRenderer_o *__this_01;
  MethodInfo *method_00;
  Map_MapDestructionDebris_c *method_01;
  
  if (Il2CppMethodInitialized_07545a00 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_MeshRenderer);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_MapDestructionDebris);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapDestructionDebris_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapDestructionDebris_RemoveAt);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapDestructionDebris_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapDestructionDebris_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestructionDebris);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    il2cpp_codegen_initialize_runtime_metadata(&"Map destruction debris");
    Il2CppMethodInitialized_07545a00 = '\x01';
  }
  if ((target != (Map_DestructibleMapObject_o *)0x0) &&
     (pUVar3 = (target->fields).Filters, pUVar3 != (UnityEngine_MeshFilter_array *)0x0)) {
    if (pUVar3->max_length == 0) {
      return;
    }
    if ((TypeInfo_Map_MapDestructionDebris->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestructionDebris);
    }
    pSVar7 = TypeInfo_Map_MapDestructionDebris->static_fields->Active;
    if (pSVar7 != (System_Collections_Generic_List_MapDestructionDebris__o *)0x0) {
      if (7 < (pSVar7->fields)._size) {
        if ((TypeInfo_Map_MapDestructionDebris->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestructionDebris);
          pSVar7 = TypeInfo_Map_MapDestructionDebris->static_fields->Active;
          if (pSVar7 == (System_Collections_Generic_List_MapDestructionDebris__o *)0x0) goto label_05982114;
        }
        pMVar8 = System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar7,0,
                            (MethodInfo_395CF20 *)
                            MethodInfo_System_Collections_Generic_List_MapDestructionDebris_get_Item);
        if (pMVar8 == (Map_MapDestructionDebris_o *)0x0) goto label_05982114;
        obj = (UnityEngine_Object_o *)
              UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pMVar8,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_69214e0(obj,(MethodInfo *)0x0);
        pSVar7 = TypeInfo_Map_MapDestructionDebris->static_fields->Active;
        if (pSVar7 == (System_Collections_Generic_List_MapDestructionDebris__o *)0x0) goto label_05982114;
        System_Collections_Generic_List_object___RemoveAt
                  ((System_Collections_Generic_List_object__o *)pSVar7,0,
                   (MethodInfo_395F100 *)
                   MethodInfo_System_Collections_Generic_List_MapDestructionDebris_RemoveAt);
      }
      method_01 = TypeInfo_Map_MapDestructionDebris;
      if ((TypeInfo_Map_MapDestructionDebris->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestructionDebris);
      }
      Map_MapDestructionDebris__LoadAssets((MethodInfo *)method_01);
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
      UnityEngine_GameObject___ctor(__this,"Map destruction debris",(MethodInfo *)0x0);
      if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
      }
      if (__this != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__set_layer
                  (__this,TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectMapObjects,(MethodInfo *)0x0)
        ;
        __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
        if (__this_00 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__set_position
                    (__this_00,(UnityEngine_Vector3_o)(target->fields).Bounds.fields.m_Center.fields,
                     (MethodInfo *)0x0);
          pMVar8 = UnityEngine_GameObject__AddComponent_object_
                             (__this,(MethodInfo_353B6A0 *)
                                     MethodInfo_UnityEngine_GameObject_AddComponent_MapDestructionDebris);
          if (pMVar8 != (Map_MapDestructionDebris_o *)0x0) {
            (pMVar8->fields)._seed = (target->fields).Id;
            pUVar3 = (target->fields).Filters;
            if (pUVar3 != (UnityEngine_MeshFilter_array *)0x0) {
              if ((int)pUVar3->max_length == 0) {
                ThrowIndexOutOfRangeException();
              }
              if ((UnityEngine_Component_o *)pUVar3->m_Items[0] != (UnityEngine_Component_o *)0x0) {
                __this_01 = UnityEngine_Component__GetComponent_object_
                                      ((UnityEngine_Component_o *)pUVar3->m_Items[0],
                                       (MethodInfo_34B0830 *)
                                       MethodInfo_UnityEngine_Component_GetComponent_MeshRenderer);
                if (__this_01 != (UnityEngine_MeshRenderer_o *)0x0) {
                  iVar6 = UnityEngine_Renderer__get_shadowCastingMode
                                    ((UnityEngine_Renderer_o *)__this_01,(MethodInfo *)0x0);
                  (pMVar8->fields)._shadows = iVar6;
                  Map_MapDestructionDebris__Shatter(pMVar8,target,method_00);
                  pMVar5 = MethodInfo_System_Collections_Generic_List_MapDestructionDebris_Add;
                  pSVar7 = TypeInfo_Map_MapDestructionDebris->static_fields->Active;
                  if (pSVar7 != (System_Collections_Generic_List_MapDestructionDebris__o *)0x0) {
                    piVar1 = &(pSVar7->fields)._version;
                    *piVar1 = *piVar1 + 1;
                    pMVar4 = (pSVar7->fields)._items;
                    if (pMVar4 != (Map_MapDestructionDebris_array *)0x0) {
                      uVar2 = (pSVar7->fields)._size;
                      if (uVar2 < (uint)pMVar4->max_length) {
                        (pSVar7->fields)._size = uVar2 + 1;
                        pMVar4->m_Items[(int)uVar2] = pMVar8;
                        Il2CppCodeGenWriteBarrier(pMVar4->m_Items + (int)uVar2);
                        return;
                      }
                      System_Collections_Generic_List_object___AddWithResize
                                ((System_Collections_Generic_List_object__o *)pSVar7,(Il2CppObject *)pMVar8,
                                 (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
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
label_05982114:
  ThrowNullReferenceException();
}


// Map.MapDestructionDebris$$LoadAssets
// il2cpp: void Map_MapDestructionDebris__LoadAssets (const MethodInfo* method);
// 0x5982d70

void Map_MapDestructionDebris__LoadAssets(MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  Map_MapDestructionDebris_StaticFields *pMVar2;
  bool bVar3;
  UnityEngine_Shader_o *pUVar4;
  UnityEngine_PhysicsMaterial_o *__this;
  
  if (Il2CppMethodInitialized_07545a01 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestructionDebris);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_PhysicsMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Resources_Load_Shader);
    il2cpp_codegen_initialize_runtime_metadata(&"Shaders/MapDebris");
    il2cpp_codegen_initialize_runtime_metadata(&"Rubble");
    Il2CppMethodInitialized_07545a01 = '\x01';
  }
  if ((TypeInfo_Map_MapDestructionDebris->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestructionDebris);
  }
  pUVar1 = (UnityEngine_Object_o *)TypeInfo_Map_MapDestructionDebris->static_fields->_shader;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pUVar4 = UnityEngine_Resources__Load_object_
                       ("Shaders/MapDebris",
                        (MethodInfo_3665C30 *)MethodInfo_UnityEngine_Resources_Load_Shader);
    if ((TypeInfo_Map_MapDestructionDebris->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestructionDebris);
    }
    pMVar2 = TypeInfo_Map_MapDestructionDebris->static_fields;
    pMVar2->_shader = pUVar4;
    Il2CppCodeGenWriteBarrier(&pMVar2->_shader);
  }
  if ((TypeInfo_Map_MapDestructionDebris->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestructionDebris);
  }
  pUVar1 = (UnityEngine_Object_o *)TypeInfo_Map_MapDestructionDebris->static_fields->_rubble;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_PhysicsMaterial);
    UnityEngine_PhysicsMaterial___ctor_69e0540(__this,"Rubble",(MethodInfo *)0x0);
    if (__this == (UnityEngine_PhysicsMaterial_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_PhysicsMaterial__set_staticFriction(__this,0.1,(MethodInfo *)0x0);
    UnityEngine_PhysicsMaterial__set_dynamicFriction(__this,0.1,(MethodInfo *)0x0);
    UnityEngine_PhysicsMaterial__set_frictionCombine(__this,2,(MethodInfo *)0x0);
    UnityEngine_PhysicsMaterial__set_bounceCombine(__this,2,(MethodInfo *)0x0);
    if ((TypeInfo_Map_MapDestructionDebris->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestructionDebris);
    }
    pMVar2 = TypeInfo_Map_MapDestructionDebris->static_fields;
    pMVar2->_rubble = __this;
    Il2CppCodeGenWriteBarrier(&pMVar2->_rubble);
    return;
  }
  return;
}


// Map.MapDestructionDebris$$FindGround
// il2cpp: float Map_MapDestructionDebris__FindGround (UnityEngine_Bounds_o bounds, const MethodInfo* method);
// 0x5983440
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5983636: movaps xmmword ptr [rsp], xmm1

float Map_MapDestructionDebris__FindGround(UnityEngine_Bounds_o bounds,MethodInfo *method)

{
  int32_t layerMask;
  UnityEngine_RaycastHit_array *pUVar1;
  UnityEngine_Vector3_Fields direction;
  float fVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  float fVar6;
  UnityEngine_Vector3_o UVar7;
  
  if (Il2CppMethodInitialized_07545a02 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestructionDebris);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestruction);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    Il2CppMethodInitialized_07545a02 = '\x01';
  }
  if (Il2CppMethodInitialized_075450a5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_075450a5 = '\x01';
  }
  direction = (TypeInfo_UnityEngine_Vector3->static_fields->downVector).fields;
  if ((TypeInfo_Map_MapDestructionDebris->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestructionDebris);
  }
  pUVar1 = TypeInfo_Map_MapDestructionDebris->static_fields->GroundHits;
  if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
  }
  UVar7.fields.y = bounds.fields.m_Center.fields.y + bounds.fields.m_Extents.fields.y + 1.0;
  UVar7.fields.x = bounds.fields.m_Center.fields.x;
  layerMask = TypeInfo_Map_MapDestruction->static_fields->MapMask;
  if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
  }
  UVar7.fields.z = bounds.fields.m_Center.fields.z;
  uVar3 = UnityEngine_Physics__RaycastNonAlloc_69dc1f0
                    (UVar7,(UnityEngine_Vector3_o)direction,pUVar1,
                     bounds.fields.m_Extents.fields.y + bounds.fields.m_Extents.fields.y + 2.0,layerMask,1,
                     (MethodInfo *)0x0);
  fVar6 = bounds.fields.m_Center.fields.y - bounds.fields.m_Extents.fields.y;
  if ((int)uVar3 < 1) {
    fVar2 = 3.4028235e+38;
  }
  else {
    fVar2 = 3.4028235e+38;
    lVar4 = 0x20;
    uVar5 = 0;
    do {
      if ((TypeInfo_Map_MapDestructionDebris->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestructionDebris);
      }
      pUVar1 = TypeInfo_Map_MapDestructionDebris->static_fields->GroundHits;
      if (pUVar1 == (UnityEngine_RaycastHit_array *)0x0) {
label_059836fa:
        ThrowNullReferenceException();
      }
      if ((uint)pUVar1->max_length <= uVar5) {
label_059836bf:
        ThrowIndexOutOfRangeException();
      }
      UVar7 = UnityEngine_RaycastHit__get_point
                        ((UnityEngine_RaycastHit_o *)((long)pUVar1->m_Items + lVar4 + -0x20),(MethodInfo *)0x0
                        );
      if (fVar6 <= UVar7.fields.y) {
        if ((TypeInfo_Map_MapDestructionDebris->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestructionDebris);
        }
        pUVar1 = TypeInfo_Map_MapDestructionDebris->static_fields->GroundHits;
        if (pUVar1 == (UnityEngine_RaycastHit_array *)0x0) goto label_059836fa;
        if ((uint)pUVar1->max_length <= uVar5) goto label_059836bf;
        UVar7 = UnityEngine_RaycastHit__get_point
                          ((UnityEngine_RaycastHit_o *)((long)pUVar1->m_Items + lVar4 + -0x20),
                           (MethodInfo *)0x0);
        if (UVar7.fields.y <= fVar2) {
          fVar2 = UVar7.fields.y;
        }
      }
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 0x2c;
    } while (uVar3 != uVar5);
  }
  return (float)(~-(uint)(fVar2 == 3.4028235e+38) & (uint)fVar2 |
                (uint)fVar6 & -(uint)(fVar2 == 3.4028235e+38));
}


// Map.MapDestructionDebris$$Shatter
// il2cpp: void Map_MapDestructionDebris__Shatter (Map_MapDestructionDebris_o* __this, Map_DestructibleMapObject_o* target, const MethodInfo* method);
// 0x5982f50

void Map_MapDestructionDebris__Shatter
               (Map_MapDestructionDebris_o *__this,Map_DestructibleMapObject_o *target,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_MeshFilter_array *pUVar3;
  System_Collections_Generic_List_GameObject__o *__this_00;
  UnityEngine_GameObject_array *pUVar4;
  UnityEngine_Material_array *pUVar5;
  double x;
  double dVar6;
  UnityEngine_Bounds_o bounds;
  Il2CppClass *pIVar7;
  int32_t iVar8;
  Map_MapDestructionDebris___c__DisplayClass37_0_o *pMVar9;
  System_Collections_Generic_List_Material__o *materials;
  UnityEngine_Transform_o *root;
  Map_MapFracture_o *pMVar10;
  UnityEngine_GameObject_o *item;
  UnityEngine_Material_array *method_00;
  UnityEngine_Material_o *source;
  Il2CppObject *pIVar11;
  System_Func_TResult__o *function;
  System_Threading_Tasks_Task_List_List_MapFracture_Triangle____o *pSVar12;
  int iVar13;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar14;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_01;
  Map_MapDestructionDebris_c *method_02;
  MethodInfo *in_R8;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  float fVar18;
  Il2CppMethodPointer local_58;
  Il2CppMethodPointer pIStack_50;
  InvokerMethod local_48;
  Map_MapDestructionDebris___c__DisplayClass37_0_o *local_40;
  Il2CppClass *local_38;
  
  if (Il2CppMethodInitialized_07545a03 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_List_List_MapFracture_Triangle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_get_Count)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestructionDebris);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Threading_Tasks_Task_Run_List_List_MapFracture_Triangle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Threading_Tasks_Task);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Map_MapDestructionDebris_c__DisplayClass37_0_Shatter_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestructionDebris_c__DisplayClass37_0);
    Il2CppMethodInitialized_07545a03 = '\x01';
  }
  pMVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapDestructionDebris_c__DisplayClass37_0);
  System_Object___ctor((Il2CppObject *)pMVar9,(MethodInfo *)0x0);
  if (pMVar9 != (Map_MapDestructionDebris___c__DisplayClass37_0_o *)0x0) {
    (pMVar9->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(pMVar9->fields).__4__this);
    materials = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Material);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)materials,
               (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_Material_ctor);
    if (target != (Map_DestructibleMapObject_o *)0x0) {
      pUVar3 = (target->fields).Filters;
      root = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      pMVar10 = Map_MapFracture__Read(pUVar3,root,materials,20000,in_R8);
      (pMVar9->fields).fracture = pMVar10;
      local_40 = pMVar9;
      Il2CppCodeGenWriteBarrier(&(pMVar9->fields).fracture);
      pUVar3 = (target->fields).Filters;
      local_38 = (Il2CppClass *)target;
      if (pUVar3 != (UnityEngine_MeshFilter_array *)0x0) {
        if (0 < (int)pUVar3->max_length) {
          uVar15 = pUVar3->max_length & 0xffffffff;
          uVar16 = 0;
          pMVar14 = extraout_RDX;
          do {
            if (uVar15 <= uVar16) goto label_05983420;
            __this_00 = (__this->fields)._sectionVisuals;
            item = Map_MapDestructionDebris__CreateVisual(__this,pUVar3->m_Items[uVar16],pMVar14);
            pMVar14 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
            if (__this_00 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_0598341b;
            piVar1 = &(__this_00->fields)._version;
            *piVar1 = *piVar1 + 1;
            pUVar4 = (__this_00->fields)._items;
            if (pUVar4 == (UnityEngine_GameObject_array *)0x0) goto label_0598341b;
            uVar2 = (__this_00->fields)._size;
            if (uVar2 < (uint)pUVar4->max_length) {
              (__this_00->fields)._size = uVar2 + 1;
              pUVar4->m_Items[(int)uVar2] = item;
              Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2);
              pMVar14 = extraout_RDX_01;
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                         (MethodInfo_395D230 *)pMVar14->klass->rgctx_data[0xe].method);
              pMVar14 = extraout_RDX_00;
            }
            uVar16 = uVar16 + 1;
            uVar2 = (uint)pUVar3->max_length;
            uVar15 = (ulong)uVar2;
          } while ((long)uVar16 < (long)(int)uVar2);
        }
        if ((pMVar9->fields).fracture != (Map_MapFracture_o *)0x0) {
          if (materials == (System_Collections_Generic_List_Material__o *)0x0) goto label_0598341b;
          method_00 = (UnityEngine_Material_array *)
                      SZArrayNew(TypeInfo_UnityEngine_Material_array,(materials->fields)._size);
          (__this->fields)._fragmentMaterials = method_00;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._fragmentMaterials);
          if (0 < (materials->fields)._size) {
            lVar17 = 0x20;
            uVar15 = 0;
            do {
              pUVar5 = (__this->fields)._fragmentMaterials;
              source = System_Collections_Generic_List_object___get_Item
                                 ((System_Collections_Generic_List_object__o *)materials,(int32_t)uVar15,
                                  (MethodInfo_395CF20 *)
                                  MethodInfo_System_Collections_Generic_List_Material_get_Item);
              method_00 = (UnityEngine_Material_array *)
                          Map_MapDestructionDebris__GetMaterial(__this,source,method_01);
              if (pUVar5 == (UnityEngine_Material_array *)0x0) goto label_0598341b;
              if (method_00 != (UnityEngine_Material_array *)0x0) {
                pIVar11 = il2cpp_vm_Object_IsInst
                                    ((Il2CppObject *)method_00,(((pUVar5->obj).klass)->_1).element_class);
                if (pIVar11 == (Il2CppObject *)0x0) {
                  pIVar11 = il2cpp_codegen_get_array_type_mismatch_exception();
                  il2cpp_codegen_raise_exception(pIVar11,(MethodInfo *)0x0);
                }
              }
              if ((uint)pUVar5->max_length <= uVar15) {
label_05983420:
                ThrowIndexOutOfRangeException();
              }
              *(UnityEngine_Material_array **)((long)pUVar5->m_Items + lVar17 + -0x20) = method_00;
              Il2CppCodeGenWriteBarrier((void **)((long)pUVar5->m_Items + lVar17 + -0x20));
              uVar15 = uVar15 + 1;
              lVar17 = lVar17 + 8;
            } while ((long)uVar15 < (long)(materials->fields)._size);
          }
          pIVar7 = local_38;
          fVar18 = (float)(local_38->_1).this_arg.bits;
          if (Il2CppMethodInitialized_07541320 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
            Il2CppMethodInitialized_07541320 = '\x01';
          }
          pMVar9 = local_40;
          fVar18 = fVar18 / 3.0;
          if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
          }
          x = (double)fVar18;
          pMVar14 = (MethodInfo *)&local_58;
          dVar6 = modf(x,(double *)pMVar14,(MethodInfo *)method_00);
          if (0.0 <= fVar18) {
            if ((dVar6 != 0.5) || (NAN(dVar6))) {
              local_58 = (Il2CppMethodPointer)floor(x + 0.5,pMVar14);
            }
            else if (((long)(double)local_58 & 1U) != 0) {
              local_58 = (Il2CppMethodPointer)((double)local_58 + 1.0);
            }
          }
          else if ((dVar6 != -0.5) || (NAN(dVar6))) {
            local_58 = (Il2CppMethodPointer)ceil(x + -0.5,pMVar14);
          }
          else if (((long)(double)local_58 & 1U) != 0) {
            local_58 = (Il2CppMethodPointer)((double)local_58 + -1.0);
          }
          iVar13 = 0x28;
          if ((int)(double)local_58 < 0x28) {
            iVar13 = (int)(double)local_58;
          }
          iVar8 = 6;
          if (6 < iVar13) {
            iVar8 = iVar13;
          }
          (pMVar9->fields).pieces = iVar8;
          local_48 = (pIVar7->_1).this_arg.data;
          local_58 = *(Il2CppMethodPointer *)
                      &(((UnityEngine_Bounds_o *)&(pIVar7->_1).byval_arg)->fields).m_Center.fields;
          pIStack_50 = *(Il2CppMethodPointer *)
                        &(((UnityEngine_Bounds_o *)&(pIVar7->_1).byval_arg)->fields).m_Center.fields.z;
          method_02 = TypeInfo_Map_MapDestructionDebris;
          if ((TypeInfo_Map_MapDestructionDebris->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestructionDebris);
          }
          bounds.fields._8_8_ = pIStack_50;
          bounds.fields.m_Center.fields._0_8_ = local_58;
          bounds.fields.m_Extents.fields._4_8_ = local_48;
          fVar18 = Map_MapDestructionDebris__FindGround(bounds,(MethodInfo *)method_02);
          (pMVar9->fields).ground =
               (fVar18 + 0.05) - (((UnityEngine_Bounds_o *)&(pIVar7->_1).byval_arg)->fields).m_Center.fields.y
          ;
          function = (System_Func_TResult__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_List_List_MapFracture_Triangle);
          System_Func_object____ctor
                    ((System_Func_object__o *)function,(Il2CppObject *)pMVar9,
                     (intptr_t)MethodInfo_Map_MapDestructionDebris_c__DisplayClass37_0_Shatter_b__0,
                     (MethodInfo_4F0C6A0 *)0x0);
          if ((TypeInfo_System_Threading_Tasks_Task->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Threading_Tasks_Task);
          }
          pSVar12 = (System_Threading_Tasks_Task_List_List_MapFracture_Triangle____o *)
                    System_Threading_Tasks_Task__Run_object_
                              (function,(MethodInfo_36A18D0 *)
                                        MethodInfo_System_Threading_Tasks_Task_Run_List_List_MapFracture_Triangle
                              );
          (__this->fields)._fracture = pSVar12;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._fracture);
        }
        return;
      }
    }
  }
label_0598341b:
  ThrowNullReferenceException();
}


// Map.MapDestructionDebris$$CreateVisual
// il2cpp: UnityEngine_GameObject_o* Map_MapDestructionDebris__CreateVisual (Map_MapDestructionDebris_o* __this, UnityEngine_MeshFilter_o* source, const MethodInfo* method);
// 0x5984480
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59846bd: nop dword ptr [rax]

UnityEngine_GameObject_o *
Map_MapDestructionDebris__CreateVisual
          (Map_MapDestructionDebris_o *__this,UnityEngine_MeshFilter_o *source,MethodInfo *method)

{
  uint uVar1;
  int32_t value;
  System_String_o *name;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_MeshFilter_o *__this_02;
  UnityEngine_Mesh_o *value_00;
  UnityEngine_MeshRenderer_o *pUVar4;
  UnityEngine_Material_array *pUVar5;
  UnityEngine_Material_array *value_01;
  ulong uVar6;
  UnityEngine_Material_o *obj;
  Il2CppObject *pIVar7;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX;
  long lVar8;
  ulong uVar9;
  UnityEngine_Quaternion_o rotation;
  UnityEngine_Vector3_o UVar10;
  
  if (Il2CppMethodInitialized_07545a04 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_MeshRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_MeshFilter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material_array);
    Il2CppMethodInitialized_07545a04 = '\x01';
  }
  if (source != (UnityEngine_MeshFilter_o *)0x0) {
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)source,(MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor(__this_00,name,(MethodInfo *)0x0);
    __this_01 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      value = UnityEngine_GameObject__get_layer(__this_01,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__set_layer(__this_00,value,(MethodInfo *)0x0);
        pUVar2 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
        pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__SetParent_692d510(pUVar2,pUVar3,false,(MethodInfo *)0x0);
          pUVar2 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
          pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)source,(MethodInfo *)0x0);
          if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
            UVar10 = UnityEngine_Transform__get_position(pUVar3,(MethodInfo *)0x0);
            pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)source,(MethodInfo *)0x0)
            ;
            if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
              rotation = UnityEngine_Transform__get_rotation(pUVar3,(MethodInfo *)0x0);
              if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                UnityEngine_Transform__SetPositionAndRotation(pUVar2,UVar10,rotation,(MethodInfo *)0x0);
                pUVar2 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
                pUVar3 = UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)source,(MethodInfo *)0x0);
                if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
                  UVar10 = UnityEngine_Transform__get_lossyScale(pUVar3,(MethodInfo *)0x0);
                  if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                    UnityEngine_Transform__set_localScale(pUVar2,UVar10,(MethodInfo *)0x0);
                    __this_02 = UnityEngine_GameObject__AddComponent_object_
                                          (__this_00,
                                           (MethodInfo_353B6A0 *)
                                           MethodInfo_UnityEngine_GameObject_AddComponent_MeshFilter);
                    value_00 = UnityEngine_MeshFilter__get_sharedMesh(source,(MethodInfo *)0x0);
                    if (__this_02 != (UnityEngine_MeshFilter_o *)0x0) {
                      UnityEngine_MeshFilter__set_sharedMesh(__this_02,value_00,(MethodInfo *)0x0);
                      pUVar4 = UnityEngine_Component__GetComponent_object_
                                         ((UnityEngine_Component_o *)source,
                                          (MethodInfo_34B0830 *)
                                          MethodInfo_UnityEngine_Component_GetComponent_MeshRenderer);
                      if (pUVar4 != (UnityEngine_MeshRenderer_o *)0x0) {
                        pUVar5 = UnityEngine_Renderer__get_sharedMaterials
                                           ((UnityEngine_Renderer_o *)pUVar4,(MethodInfo *)0x0);
                        if (pUVar5 != (UnityEngine_Material_array *)0x0) {
                          value_01 = (UnityEngine_Material_array *)
                                     SZArrayNew(TypeInfo_UnityEngine_Material_array,
                                                (uint32_t)pUVar5->max_length);
                          if (0 < (int)pUVar5->max_length) {
                            if (value_01 == (UnityEngine_Material_array *)0x0) {
                              Map_MapDestructionDebris__GetMaterial(__this,pUVar5->m_Items[0],method_00);
                              ThrowNullReferenceException();
                            }
                            uVar6 = pUVar5->max_length & 0xffffffff;
                            lVar8 = 0x20;
                            uVar9 = 0;
                            method_01 = method_00;
                            do {
                              if (uVar6 <= uVar9) {
label_05984794:
                                ThrowIndexOutOfRangeException();
                              }
                              obj = Map_MapDestructionDebris__GetMaterial
                                              (__this,*(UnityEngine_Material_o **)
                                                       ((long)pUVar5->m_Items + lVar8 + -0x20),method_01);
                              if (obj != (UnityEngine_Material_o *)0x0) {
                                pIVar7 = il2cpp_vm_Object_IsInst
                                                   ((Il2CppObject *)obj,
                                                    (((value_01->obj).klass)->_1).element_class);
                                if (pIVar7 == (Il2CppObject *)0x0) {
                                  pIVar7 = il2cpp_codegen_get_array_type_mismatch_exception();
                                  il2cpp_codegen_raise_exception(pIVar7,(MethodInfo *)0x0);
                                }
                              }
                              if ((uint)value_01->max_length <= uVar9) goto label_05984794;
                              *(UnityEngine_Material_o **)((long)value_01->m_Items + lVar8 + -0x20) = obj;
                              Il2CppCodeGenWriteBarrier((void **)((long)value_01->m_Items + lVar8 + -0x20));
                              uVar9 = uVar9 + 1;
                              uVar1 = (uint)pUVar5->max_length;
                              uVar6 = (ulong)uVar1;
                              lVar8 = lVar8 + 8;
                              method_01 = extraout_RDX;
                            } while ((long)uVar9 < (long)(int)uVar1);
                          }
                          if (Il2CppMethodInitialized_07545a05 == '\0') {
                            il2cpp_codegen_initialize_runtime_metadata
                                      (&MethodInfo_UnityEngine_GameObject_AddComponent_MeshRenderer);
                            Il2CppMethodInitialized_07545a05 = '\x01';
                          }
                          pUVar4 = UnityEngine_GameObject__AddComponent_object_
                                             (__this_00,
                                              (MethodInfo_353B6A0 *)
                                              MethodInfo_UnityEngine_GameObject_AddComponent_MeshRenderer);
                          if (pUVar4 != (UnityEngine_MeshRenderer_o *)0x0) {
                            UnityEngine_Renderer__set_sharedMaterials
                                      ((UnityEngine_Renderer_o *)pUVar4,value_01,(MethodInfo *)0x0);
                            UnityEngine_Renderer__set_shadowCastingMode
                                      ((UnityEngine_Renderer_o *)pUVar4,(__this->fields)._shadows,
                                       (MethodInfo *)0x0);
                            return __this_00;
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
      }
    }
  }
  ThrowNullReferenceException();
}


// Map.MapDestructionDebris$$AddRenderer
// il2cpp: void Map_MapDestructionDebris__AddRenderer (Map_MapDestructionDebris_o* __this, UnityEngine_GameObject_o* visual, UnityEngine_Material_array* materials, const MethodInfo* method);
// 0x59848c0

void Map_MapDestructionDebris__AddRenderer
               (Map_MapDestructionDebris_o *__this,UnityEngine_GameObject_o *visual,
               UnityEngine_Material_array *materials,MethodInfo *method)

{
  UnityEngine_MeshRenderer_o *__this_00;
  
  if (Il2CppMethodInitialized_07545a05 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_MeshRenderer);
    Il2CppMethodInitialized_07545a05 = '\x01';
  }
  if (visual != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = UnityEngine_GameObject__AddComponent_object_
                          (visual,(MethodInfo_353B6A0 *)
                                  MethodInfo_UnityEngine_GameObject_AddComponent_MeshRenderer);
    if (__this_00 != (UnityEngine_MeshRenderer_o *)0x0) {
      UnityEngine_Renderer__set_sharedMaterials
                ((UnityEngine_Renderer_o *)__this_00,materials,(MethodInfo *)0x0);
      UnityEngine_Renderer__set_shadowCastingMode
                ((UnityEngine_Renderer_o *)__this_00,(__this->fields)._shadows,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Map.MapDestructionDebris$$GetMaterial
// il2cpp: UnityEngine_Material_o* Map_MapDestructionDebris__GetMaterial (Map_MapDestructionDebris_o* __this, UnityEngine_Material_o* source, const MethodInfo* method);
// 0x59847c0

UnityEngine_Material_o *
Map_MapDestructionDebris__GetMaterial
          (Map_MapDestructionDebris_o *__this,UnityEngine_Material_o *source,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool bVar2;
  UnityEngine_Material_o *pUVar3;
  MethodInfo *method_00;
  UnityEngine_Material_o *local_20;
  
  if (Il2CppMethodInitialized_07545a06 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Material_Material_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Material_Material_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestructionDebris);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545a06 = '\x01';
  }
  local_20 = (UnityEngine_Material_o *)0x0;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pUVar3 = (UnityEngine_Material_o *)0x0;
  if (!bVar2) {
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._rubbleMaterials;
    if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_059848bb:
      ThrowNullReferenceException();
    }
    method_00 = (MethodInfo *)source;
    bVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (pSVar1,(Il2CppObject *)source,(Il2CppObject **)&local_20,
                       (MethodInfo_4AAF440 *)
                       MethodInfo_System_Collections_Generic_Dictionary_Material_Material_TryGetValue);
    if (!bVar2) {
      if ((TypeInfo_Map_MapDestructionDebris->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestructionDebris);
      }
      local_20 = Map_MapDestructionDebris__CreateMaterial(source,method_00);
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._rubbleMaterials;
      if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_059848bb;
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar1,(Il2CppObject *)source,(Il2CppObject *)local_20,
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_Material_Material_Add)
      ;
    }
    pUVar3 = local_20;
  }
  return pUVar3;
}


// Map.MapDestructionDebris$$CreateMaterial
// il2cpp: UnityEngine_Material_o* Map_MapDestructionDebris__CreateMaterial (UnityEngine_Material_o* source, const MethodInfo* method);
// 0x5984930
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5984bf6: jmp 0x5984b5d

UnityEngine_Material_o *
Map_MapDestructionDebris__CreateMaterial(UnityEngine_Material_o *source,MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  UnityEngine_Shader_o *shader;
  MethodInfo *pMVar3;
  bool bVar4;
  UnityEngine_Material_o *__this;
  System_String_o *pSVar5;
  UnityEngine_Texture_o *value;
  Il2CppClass *pIVar6;
  MethodInfo *in_R8;
  UnityEngine_Vector2_o UVar7;
  UnityEngine_Color_o value_00;
  
  if (Il2CppMethodInitialized_07545a07 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_Empty_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestructionDebris);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material);
    il2cpp_codegen_initialize_runtime_metadata(&"_Color");
    il2cpp_codegen_initialize_runtime_metadata(&"_MainTex");
    il2cpp_codegen_initialize_runtime_metadata(&"_BaseColor");
    il2cpp_codegen_initialize_runtime_metadata(&"_BaseMap");
    Il2CppMethodInitialized_07545a07 = '\x01';
  }
  if ((TypeInfo_Map_MapDestructionDebris->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestructionDebris);
  }
  shader = TypeInfo_Map_MapDestructionDebris->static_fields->_shader;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Material);
  UnityEngine_Material___ctor(__this,shader,(MethodInfo *)0x0);
  if ((__this == (UnityEngine_Material_o *)0x0) ||
     (UnityEngine_Material__CopyPropertiesFromMaterial(__this,source,(MethodInfo *)0x0),
     source == (UnityEngine_Material_o *)0x0)) {
    ThrowNullReferenceException();
  }
  bVar4 = UnityEngine_Material__HasProperty_68dd940(source,"_BaseMap",(MethodInfo *)0x0);
  if (!bVar4) {
    if ((TypeInfo_Map_MapDestructionDebris->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestructionDebris);
    }
    pSVar5 = Map_MapDestructionDebris__FindProperty(source,0x80,4,"_MainTex",in_R8);
    if (pSVar5 != (System_String_o *)0x0) {
      value = UnityEngine_Material__GetTexture(source,pSVar5,(MethodInfo *)0x0);
      UnityEngine_Material__SetTexture(__this,"_BaseMap",value,(MethodInfo *)0x0);
      UVar7 = UnityEngine_Material__GetTextureScale(source,pSVar5,(MethodInfo *)0x0);
      UnityEngine_Material__SetTextureScale(__this,"_BaseMap",UVar7,(MethodInfo *)0x0);
      UVar7 = UnityEngine_Material__GetTextureOffset(source,pSVar5,(MethodInfo *)0x0);
      UnityEngine_Material__SetTextureOffset(__this,"_BaseMap",UVar7,(MethodInfo *)0x0);
    }
  }
  bVar4 = UnityEngine_Material__HasProperty_68dd940(source,"_BaseColor",(MethodInfo *)0x0);
  if (!bVar4) {
    if ((TypeInfo_Map_MapDestructionDebris->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestructionDebris);
    }
    pSVar5 = Map_MapDestructionDebris__FindProperty(source,0x100,0,"_Color",in_R8);
    if (pSVar5 != (System_String_o *)0x0) {
      value_00 = UnityEngine_Material__GetColor(source,pSVar5,(MethodInfo *)0x0);
      UnityEngine_Material__SetColor(__this,"_BaseColor",value_00,(MethodInfo *)0x0);
    }
  }
  pMVar3 = MethodInfo_System_Array_Empty_string;
  if ((MethodInfo_System_Array_Empty_string->field7_0x38).methodMetadataHandle == (void *)0x0) {
    il2cpp_codegen_rgctx_method_init(MethodInfo_System_Array_Empty_string);
    pIVar6 = *(Il2CppClass **)((long)(pMVar3->field7_0x38).methodMetadataHandle + 0x10);
    bVar1 = (pIVar6->_2).bitflags1;
  }
  else {
    pIVar6 = *(Il2CppClass **)
              ((long)(MethodInfo_System_Array_Empty_string->field7_0x38).methodMetadataHandle + 0x10);
    bVar1 = (pIVar6->_2).bitflags1;
  }
  if ((bVar1 & 1) == 0) {
    pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
    uVar2 = (pIVar6->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (pIVar6->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init(pIVar6);
    pIVar6 = (pMVar3->field7_0x38).rgctx_data[2].klass;
    bVar1 = (pIVar6->_2).bitflags1;
  }
  else {
    pIVar6 = (pMVar3->field7_0x38).rgctx_data[2].klass;
    bVar1 = (pIVar6->_2).bitflags1;
  }
  if ((bVar1 & 1) == 0) {
    pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
  }
  UnityEngine_Material__set_shaderKeywords
            (__this,*(System_String_array **)pIVar6->static_fields,(MethodInfo *)0x0);
  if ((TypeInfo_Map_MapDestructionDebris->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestructionDebris);
  }
  UnityEngine_Material__SetFloat_68e0ad0
            (__this,TypeInfo_Map_MapDestructionDebris->static_fields->FadeId,0.0,(MethodInfo *)0x0);
  return __this;
}


// Map.MapDestructionDebris$$FindProperty
// il2cpp: System_String_o* Map_MapDestructionDebris__FindProperty (UnityEngine_Material_o* source, int32_t flag, int32_t type, System_String_o* fallback, const MethodInfo* method);
// 0x5984c00
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5984c66: mov r15d, eax
// asm:   0x5984c69: nop dword ptr [rax]
// asm:   0x5984ca0: jne 0x5984d45
// asm:   0x5984d59: nop dword ptr [rax]

System_String_o *
Map_MapDestructionDebris__FindProperty
          (UnityEngine_Material_o *source,int32_t flag,int32_t type,System_String_o *fallback,
          MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  uint uVar3;
  int32_t iVar4;
  UnityEngine_Shader_o *__this;
  System_String_o *pSVar5;
  UnityEngine_Texture_o *x;
  int32_t propertyIndex;
  
  if (Il2CppMethodInitialized_07545a08 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545a08 = '\x01';
  }
  if ((source == (UnityEngine_Material_o *)0x0) ||
     (__this = UnityEngine_Material__get_shader(source,(MethodInfo *)0x0),
     __this == (UnityEngine_Shader_o *)0x0)) {
    ThrowNullReferenceException();
  }
  propertyIndex = 0;
  iVar2 = UnityEngine_Shader__GetPropertyCount(__this,(MethodInfo *)0x0);
  if (iVar2 < 1) {
    bVar1 = UnityEngine_Material__HasProperty_68dd940(source,fallback,(MethodInfo *)0x0);
    pSVar5 = (System_String_o *)0x0;
    if (bVar1) {
      pSVar5 = fallback;
    }
  }
  else {
    do {
      uVar3 = UnityEngine_Shader__GetPropertyFlags_68dccd0(__this,propertyIndex,(MethodInfo *)0x0);
      if ((uVar3 & flag) != 0) goto label_05984d7b;
      propertyIndex = propertyIndex + 1;
    } while (iVar2 != propertyIndex);
    bVar1 = UnityEngine_Material__HasProperty_68dd940(source,fallback,(MethodInfo *)0x0);
    if (bVar1) {
      pSVar5 = fallback;
    }
    else {
      pSVar5 = (System_String_o *)0x0;
      if (0 < iVar2) {
        if (type == 4) {
          propertyIndex = 0;
          do {
            iVar4 = UnityEngine_Shader__GetPropertyType_68dccb0(__this,propertyIndex,(MethodInfo *)0x0);
            if (iVar4 == 4) {
              pSVar5 = UnityEngine_Shader__GetPropertyName_68dcc90(__this,propertyIndex,(MethodInfo *)0x0);
              x = UnityEngine_Material__GetTexture(source,pSVar5,(MethodInfo *)0x0);
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar1 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if (bVar1) {
label_05984d7b:
                pSVar5 = UnityEngine_Shader__GetPropertyName_68dcc90(__this,propertyIndex,(MethodInfo *)0x0);
                return pSVar5;
              }
            }
            propertyIndex = propertyIndex + 1;
          } while (iVar2 != propertyIndex);
        }
        else {
          propertyIndex = 0;
          do {
            iVar4 = UnityEngine_Shader__GetPropertyType_68dccb0(__this,propertyIndex,(MethodInfo *)0x0);
            if (iVar4 == type) goto label_05984d7b;
            propertyIndex = propertyIndex + 1;
          } while (iVar2 != propertyIndex);
        }
        pSVar5 = (System_String_o *)0x0;
      }
    }
  }
  return pSVar5;
}


// Map.MapDestructionDebris$$Update
// il2cpp: void Map_MapDestructionDebris__Update (Map_MapDestructionDebris_o* __this, const MethodInfo* method);
// 0x5984da0
// eh: try 0x59851c9..0x598544b -> pad 0x5985450 (+14 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x598547c..0x5985481 -> pad 0x59854a0 cleanup
// eh: try 0x59854a3..0x59854ad -> pad 0x598550a catch (...) [compiler noexcept guard]
// eh: try 0x59854cb..0x59854d0 -> pad 0x59854f5 cleanup
// eh: try 0x59854f8..0x5985502 -> pad 0x598550a catch (...) [compiler noexcept guard]
// asm: 55 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59852c6: jmp 0x59851b2
// asm:   0x5985450: jmp 0x5985464
// asm:   0x5985452: jmp 0x5985464
// asm:   0x5985454: jmp 0x5985464
// asm:   0x5985456: jmp 0x5985464
// asm:   0x5985458: jmp 0x5985464
// asm:   0x598545a: jmp 0x5985464
// asm:   0x598545c: jmp 0x5985464
// asm:   0x598545e: jmp 0x59854b3
// asm:   0x5985460: jmp 0x5985464
// asm:   0x5985462: jmp 0x5985464
// asm:   0x5985464: mov rbx, rax
// asm:   0x5985467: cmp edx, 1
// asm:   0x598546a: jne 0x59854a3
// asm:   0x598546c: mov rdi, rbx
// asm:   0x598546f: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5985474: mov rbx, qword ptr [rax]
// asm:   0x5985477: mov qword ptr [rsp + 0x18], rbx
// asm:   0x598547c: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5985481: lea rax, [rip + 0x1909e20]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapDestructionDebris_Piece_Dispose
// asm:   0x5985488: mov rsi, qword ptr [rax]
// asm:   0x598548b: lea rdi, [rsp + 0x30]
// asm:   0x5985490: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5985495: test rbx, rbx
// asm:   0x5985498: je 0x59852e9
// asm:   0x598549e: jmp 0x59854ed
// asm:   0x59854a0: mov rbx, rax
// asm:   0x59854a3: lea rdi, [rsp + 0x18]
// asm:   0x59854a8: call 0x2fd4260  ; il2cpp_runtime_helper_02fd4260()
// asm:   0x59854ad: jmp 0x5985502
// asm:   0x59854af: jmp 0x59854b3
// asm:   0x59854b1: jmp 0x59854b3
// asm:   0x59854b3: mov rbx, rax
// asm:   0x59854b6: cmp edx, 1
// asm:   0x59854b9: jne 0x59854f8
// asm:   0x59854bb: mov rdi, rbx
// asm:   0x59854be: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x59854c3: mov rbx, qword ptr [rax]
// asm:   0x59854c6: mov qword ptr [rsp + 0x18], rbx
// asm:   0x59854cb: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x59854d0: lea rax, [rip + 0x190a6e1]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Material_Material_Dispose
// asm:   0x59854d7: mov rsi, qword ptr [rax]
// asm:   0x59854da: lea rdi, [rsp + 0x50]
// asm:   0x59854df: call 0x4de71f0  ; System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose()
// asm:   0x59854e4: test rbx, rbx
// asm:   0x59854e7: je 0x59853ec
// asm:   0x59854ed: mov rdi, rbx
// asm:   0x59854f0: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x59854f5: mov rbx, rax
// asm:   0x59854f8: lea rdi, [rsp + 0x18]
// asm:   0x59854fd: call 0x2fd4290  ; il2cpp_runtime_helper_02fd4290()
// asm:   0x5985502: mov rdi, rbx
// asm:   0x5985505: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x598550a: mov rdi, rax
// asm:   0x598550d: call 0x2ab61e0  ; __clang_call_terminate()

void Map_MapDestructionDebris__Update(Map_MapDestructionDebris_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  int iVar2;
  System_Threading_Tasks_Task_List_List_MapFracture_Triangle____o *pSVar3;
  System_Threading_Tasks_Task_o *__this_00;
  System_Collections_Generic_List_MapDestructionDebris_Piece__o *__this_01;
  UnityEngine_Rigidbody_o *pUVar4;
  System_Collections_Generic_Dictionary_object__object__o *__this_02;
  Map_MapDestructionDebris_Piece_o *piece;
  Il2CppObject *__this_03;
  bool bVar5;
  int32_t iVar6;
  System_AggregateException_o *pSVar7;
  System_Collections_Generic_List_List_MapFracture_Triangle___o *cells;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_04;
  UnityEngine_Object_o *pUVar8;
  MethodInfo *method_00;
  MethodInfo *pMVar9;
  System_Threading_Tasks_Task_List_List_MapFracture_Triangle____o **targetAddress;
  float fVar10;
  float fVar11;
  UnityEngine_Vector3_o UVar12;
  undefined1 auStack_80 [16];
  Map_MapDestructionDebris_Piece_o *pMStack_70;
  undefined1 auStack_68 [8];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_60;
  Map_MapDestructionDebris_Piece_o *pMStack_58;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o SStack_48;
  
  if (Il2CppMethodInitialized_07545a09 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Material_Material_get_Values);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Material_Material_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapDestructionDebris_Piece_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapDestructionDebris_Piece_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Material_Material_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapDestructionDebris_Piece_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Material_Material_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapDestructionDebris_Piece_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestructionDebris);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Threading_Tasks_Task_List_List_MapFracture_Triangle_get_Result);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Material_Material_GetEnumerator
              );
    Il2CppMethodInitialized_07545a09 = '\x01';
  }
  auStack_68 = (undefined1  [8])0x0;
  pSStack_60 = (System_Collections_Generic_List_Enumerator_object__o *)0x0;
  pMStack_58 = (Map_MapDestructionDebris_Piece_o *)0x0;
  SStack_48.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  SStack_48.fields._index = 0;
  SStack_48.fields._version = 0;
  SStack_48.fields._currentValue = (Il2CppObject *)0x0;
  fVar11 = (__this->fields)._age;
  fVar10 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  (__this->fields)._age = fVar10 + fVar11;
  pSVar3 = (__this->fields)._fracture;
  if ((pSVar3 == (System_Threading_Tasks_Task_List_List_MapFracture_Triangle____o *)0x0) ||
     (bVar5 = System_Threading_Tasks_Task__get_IsCompleted
                        ((System_Threading_Tasks_Task_o *)pSVar3,(MethodInfo *)0x0), !bVar5)) {
label_05984efc:
    __this_00 = (__this->fields)._baking;
    if ((__this_00 != (System_Threading_Tasks_Task_o *)0x0) &&
       (bVar5 = System_Threading_Tasks_Task__get_IsCompleted(__this_00,(MethodInfo *)0x0), bVar5)) {
      if ((TypeInfo_Map_MapDestructionDebris->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestructionDebris);
        if (Il2CppMethodInitialized_07545a0a != '\0') goto label_05984f3c;
label_059850b2:
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestructionDebris);
        Il2CppMethodInitialized_07545a0a = '\x01';
        uVar1 = (TypeInfo_Map_MapDestructionDebris->_2).cctor_finished_or_no_cctor;
      }
      else {
        if (Il2CppMethodInitialized_07545a0a == '\0') goto label_059850b2;
label_05984f3c:
        uVar1 = (TypeInfo_Map_MapDestructionDebris->_2).cctor_finished_or_no_cctor;
      }
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestructionDebris);
      }
      iVar2 = TypeInfo_Map_MapDestructionDebris->static_fields->_workFrame;
      iVar6 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
      if (iVar2 != iVar6) {
        targetAddress =
             (System_Threading_Tasks_Task_List_List_MapFracture_Triangle____o **)&(__this->fields)._baking;
        iVar6 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
        if ((TypeInfo_Map_MapDestructionDebris->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestructionDebris);
        }
        TypeInfo_Map_MapDestructionDebris->static_fields->_workFrame = iVar6;
        if ((System_Threading_Tasks_Task_o *)*targetAddress == (System_Threading_Tasks_Task_o *)0x0)
        goto label_0598544b;
        pMVar9 = (MethodInfo *)0x0;
        bVar5 = System_Threading_Tasks_Task__get_IsFaulted
                          ((System_Threading_Tasks_Task_o *)*targetAddress,(MethodInfo *)0x0);
        if (bVar5) {
          if ((System_Threading_Tasks_Task_o *)*targetAddress == (System_Threading_Tasks_Task_o *)0x0)
          goto label_0598544b;
          pSVar7 = System_Threading_Tasks_Task__get_Exception
                             ((System_Threading_Tasks_Task_o *)*targetAddress,(MethodInfo *)0x0);
          if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
          }
          pMVar9 = (MethodInfo *)0x0;
          UnityEngine_Debug__LogException((System_Exception_o *)pSVar7,(MethodInfo *)0x0);
        }
        Map_MapDestructionDebris__ActivateFragments(__this,pMVar9);
        goto label_0598512e;
      }
    }
  }
  else {
    if ((TypeInfo_Map_MapDestructionDebris->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestructionDebris);
      if (Il2CppMethodInitialized_07545a0a != '\0') goto label_05984ed3;
label_05985070:
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestructionDebris);
      Il2CppMethodInitialized_07545a0a = '\x01';
      uVar1 = (TypeInfo_Map_MapDestructionDebris->_2).cctor_finished_or_no_cctor;
    }
    else {
      if (Il2CppMethodInitialized_07545a0a == '\0') goto label_05985070;
label_05984ed3:
      uVar1 = (TypeInfo_Map_MapDestructionDebris->_2).cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestructionDebris);
    }
    iVar2 = TypeInfo_Map_MapDestructionDebris->static_fields->_workFrame;
    iVar6 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
    if (iVar2 == iVar6) goto label_05984efc;
    targetAddress = &(__this->fields)._fracture;
    iVar6 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
    if ((TypeInfo_Map_MapDestructionDebris->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestructionDebris);
    }
    TypeInfo_Map_MapDestructionDebris->static_fields->_workFrame = iVar6;
    if (*targetAddress == (System_Threading_Tasks_Task_List_List_MapFracture_Triangle____o *)0x0)
    goto label_0598544b;
    iVar6 = System_Threading_Tasks_Task__get_Status
                      ((System_Threading_Tasks_Task_o *)*targetAddress,(MethodInfo *)0x0);
    pSVar3 = *targetAddress;
    if (iVar6 == 5) {
      if (pSVar3 == (System_Threading_Tasks_Task_List_List_MapFracture_Triangle____o *)0x0) goto label_0598544b;
      cells = (System_Collections_Generic_List_List_MapFracture_Triangle___o *)
              System_Threading_Tasks_Task_object___get_Result
                        ((System_Threading_Tasks_Task_object__o *)pSVar3,
                         (MethodInfo_41B4760 *)
                         MethodInfo_System_Threading_Tasks_Task_List_List_MapFracture_Triangle_get_Result);
      Map_MapDestructionDebris__CreateFragments(__this,cells,method_00);
    }
    else {
      if (pSVar3 == (System_Threading_Tasks_Task_List_List_MapFracture_Triangle____o *)0x0) goto label_0598544b;
      bVar5 = System_Threading_Tasks_Task__get_IsFaulted
                        ((System_Threading_Tasks_Task_o *)pSVar3,(MethodInfo *)0x0);
      if (bVar5) {
        if (*targetAddress == (System_Threading_Tasks_Task_List_List_MapFracture_Triangle____o *)0x0)
        goto label_0598544b;
        pSVar7 = System_Threading_Tasks_Task__get_Exception
                           ((System_Threading_Tasks_Task_o *)*targetAddress,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
        }
        UnityEngine_Debug__LogException((System_Exception_o *)pSVar7,(MethodInfo *)0x0);
      }
    }
label_0598512e:
    *targetAddress = (System_Threading_Tasks_Task_List_List_MapFracture_Triangle____o *)0x0;
    Il2CppCodeGenWriteBarrier(targetAddress);
  }
  if (0.5 <= (__this->fields)._age - (__this->fields)._activeAge) {
    __this_01 = (__this->fields)._pieces;
    if (__this_01 == (System_Collections_Generic_List_MapDestructionDebris_Piece__o *)0x0) goto label_0598544b;
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_80,
               (System_Collections_Generic_List_object__o *)__this_01,
               (MethodInfo_395E050 *)
               MethodInfo_System_Collections_Generic_List_MapDestructionDebris_Piece_GetEnumerator);
    pMStack_58 = pMStack_70;
    auStack_68 = (undefined1  [8])auStack_80._0_8_;
    pSStack_60 = (System_Collections_Generic_List_Enumerator_object__o *)auStack_80._8_8_;
    auStack_80._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    auStack_80._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)auStack_68;
    while (bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                             ((System_Collections_Generic_List_Enumerator_object__o *)auStack_68,
                              (MethodInfo_4C45C50 *)
                              MethodInfo_System_Collections_Generic_List_Enumerator_MapDestructionDebris_Piece_MoveNext
                             ), piece = pMStack_58, bVar5) {
      if (pMStack_58 == (Map_MapDestructionDebris_Piece_o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar8 = (UnityEngine_Object_o *)(pMStack_58->fields).Body;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar5 = UnityEngine_Object__op_Inequality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar5) {
        pUVar4 = (piece->fields).Body;
        if (pUVar4 == (UnityEngine_Rigidbody_o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar5 = UnityEngine_Rigidbody__get_isKinematic(pUVar4,(MethodInfo *)0x0);
        if (!bVar5) {
          pUVar4 = (piece->fields).Body;
          if ((TypeInfo_Map_MapDestructionDebris->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestructionDebris);
          }
          if (pUVar4 == (UnityEngine_Rigidbody_o *)0x0) {
            ThrowNullReferenceException();
          }
          UVar12 = UnityEngine_Rigidbody__get_linearVelocity(pUVar4,(MethodInfo *)0x0);
          if (UVar12.fields.z * UVar12.fields.z +
              UVar12.fields.y * UVar12.fields.y + UVar12.fields.x * UVar12.fields.x < 1.0) {
            pMVar9 = (MethodInfo *)0x0;
            UVar12 = UnityEngine_Rigidbody__get_angularVelocity(pUVar4,(MethodInfo *)0x0);
            if (UVar12.fields.z * UVar12.fields.z +
                UVar12.fields.y * UVar12.fields.y + UVar12.fields.x * UVar12.fields.x < 1.0) {
              if ((TypeInfo_Map_MapDestructionDebris->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestructionDebris);
              }
              Map_MapDestructionDebris__Freeze(piece,pMVar9);
            }
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)auStack_68,
               (MethodInfo_4C45C40 *)
               MethodInfo_System_Collections_Generic_List_Enumerator_MapDestructionDebris_Piece_Dispose);
  }
  __this_02 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._rubbleMaterials;
  if (__this_02 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    fVar11 = (__this->fields)._age;
    __this_04 = System_Collections_Generic_Dictionary_object__object___get_Values
                          (__this_02,
                           (MethodInfo_4AAD2A0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_Material_Material_get_Values);
    if (__this_04 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
      fVar10 = (fVar11 + -3.0) / 1.5;
      fVar11 = 1.0;
      if (fVar10 <= 1.0) {
        fVar11 = fVar10;
      }
      fVar11 = (float)(-(uint)(0.0 <= fVar10) & (uint)fVar11);
      System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator
                (&SStack_48,__this_04,
                 (MethodInfo_43F93D0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Material_Material_GetEnumerator
                );
      auStack_80._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      auStack_80._8_8_ = &SStack_48;
      while( true ) {
        bVar5 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext
                          (&SStack_48,
                           (MethodInfo_4CE7200 *)
                           MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Material_Material_MoveNext
                          );
        __this_03 = SStack_48.fields._currentValue;
        if (!bVar5) {
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
                    (&SStack_48,
                     (MethodInfo_4CE71F0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Material_Material_Dispose
                    );
          if (1.0 <= fVar11) {
            pUVar8 = (UnityEngine_Object_o *)
                     UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            UnityEngine_Object__Destroy_69214e0(pUVar8,(MethodInfo *)0x0);
          }
          return;
        }
        if ((TypeInfo_Map_MapDestructionDebris->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestructionDebris);
        }
        if ((UnityEngine_Material_o *)__this_03 == (UnityEngine_Material_o *)0x0) break;
        UnityEngine_Material__SetFloat_68e0ad0
                  ((UnityEngine_Material_o *)__this_03,
                   TypeInfo_Map_MapDestructionDebris->static_fields->FadeId,fVar11,(MethodInfo *)0x0);
      }
      ThrowNullReferenceException();
    }
  }
label_0598544b:
  ThrowNullReferenceException();
}


// Map.MapDestructionDebris$$TryClaimFrame
// il2cpp: bool Map_MapDestructionDebris__TryClaimFrame (const MethodInfo* method);
// 0x5985520

bool Map_MapDestructionDebris__TryClaimFrame(MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  int32_t iVar3;
  
  if (Il2CppMethodInitialized_07545a0a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestructionDebris);
    Il2CppMethodInitialized_07545a0a = '\x01';
  }
  if ((TypeInfo_Map_MapDestructionDebris->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestructionDebris);
  }
  iVar1 = TypeInfo_Map_MapDestructionDebris->static_fields->_workFrame;
  iVar2 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
  if (iVar1 != iVar2) {
    iVar3 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
    if ((TypeInfo_Map_MapDestructionDebris->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestructionDebris);
    }
    TypeInfo_Map_MapDestructionDebris->static_fields->_workFrame = iVar3;
  }
  return iVar1 != iVar2;
}


// Map.MapDestructionDebris$$CreateFragments
// il2cpp: void Map_MapDestructionDebris__CreateFragments (Map_MapDestructionDebris_o* __this, System_Collections_Generic_List_List_MapFracture_Triangle___o* cells, const MethodInfo* method);
// 0x59855b0
// eh: try 0x5985c00..0x5985c2f -> pad 0x5985ce9 (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5985d01..0x5985d06 -> pad 0x5985d2b cleanup
// eh: try 0x5985d2e..0x5985d38 -> pad 0x5985d40 catch (...) [compiler noexcept guard]
// asm: 24 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5985ce7: jmp 0x5985ce9
// asm:   0x5985ce9: mov rbx, rax
// asm:   0x5985cec: cmp edx, 1
// asm:   0x5985cef: jne 0x5985d2e
// asm:   0x5985cf1: mov rdi, rbx
// asm:   0x5985cf4: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5985cf9: mov rbx, qword ptr [rax]
// asm:   0x5985cfc: mov qword ptr [rsp + 0x50], rbx
// asm:   0x5985d01: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5985d06: lea rax, [rip + 0x190806b]  ; MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose
// asm:   0x5985d0d: mov rsi, qword ptr [rax]
// asm:   0x5985d10: lea rdi, [rsp + 0x20]
// asm:   0x5985d15: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5985d1a: test rbx, rbx
// asm:   0x5985d1d: je 0x5985c45
// asm:   0x5985d23: mov rdi, rbx
// asm:   0x5985d26: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5985d2b: mov rbx, rax
// asm:   0x5985d2e: lea rdi, [rsp + 0x50]
// asm:   0x5985d33: call 0x2fd42c0  ; il2cpp_runtime_helper_02fd42c0()
// asm:   0x5985d38: mov rdi, rbx
// asm:   0x5985d3b: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5985d40: mov rdi, rax
// asm:   0x5985d43: call 0x2ab61e0  ; __clang_call_terminate()

void Map_MapDestructionDebris__CreateFragments
               (Map_MapDestructionDebris_o *__this,
               System_Collections_Generic_List_List_MapFracture_Triangle___o *cells,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_Material_array *pUVar3;
  System_Collections_Generic_List_Mesh__o *pSVar4;
  UnityEngine_Mesh_array *pUVar5;
  UnityEngine_EntityId_array *pUVar6;
  System_Collections_Generic_List_MapDestructionDebris_Piece__o *__this_00;
  Map_MapDestructionDebris_Piece_array *pMVar7;
  System_Collections_Generic_List_GameObject__o *pSVar8;
  UnityEngine_Vector3_o value;
  float fVar9;
  Il2CppObject *obj;
  bool bVar10;
  int32_t iVar11;
  UnityEngine_EntityId_o item;
  Map_MapDestructionDebris___c__DisplayClass45_0_o *pMVar12;
  System_Collections_Generic_List_EntityId__o *pSVar13;
  System_Collections_Generic_List_MapFracture_Triangle__o *pSVar14;
  UnityEngine_Mesh_o *value_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_Transform_o *pUVar15;
  UnityEngine_Transform_o *parent;
  UnityEngine_MeshFilter_o *__this_03;
  UnityEngine_MeshRenderer_o *__this_04;
  Map_MapDestructionDebris_Piece_o *__this_05;
  System_Action_o *__this_06;
  System_Threading_Tasks_Task_o *pSVar16;
  MethodInfo *pMVar17;
  UnityEngine_Object_o *x;
  uint index;
  UnityEngine_Vector3_o center;
  UnityEngine_Vector3_Fields local_98;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  Map_MapDestructionDebris___c__DisplayClass45_0_o *local_68;
  Map_MapDestructionDebris___c__DisplayClass45_0_Fields *local_60;
  undefined8 local_58;
  System_Collections_Generic_List_Enumerator_T__o *local_50;
  undefined1 local_48 [24];
  
  if (Il2CppMethodInitialized_07545a0b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_MeshFilter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Mesh_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapDestructionDebris_Piece_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_EntityId_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_EntityId_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_List_MapFracture_Triangle_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_List_MapFracture_Triangle_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_EntityId);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestructionDebris_Piece);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Threading_Tasks_Task);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Map_MapDestructionDebris_c__DisplayClass45_0_CreateFragments_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestructionDebris_c__DisplayClass45_0);
    il2cpp_codegen_initialize_runtime_metadata(&"Map debris fragment");
    Il2CppMethodInitialized_07545a0b = '\x01';
  }
  local_98.z = 0.0;
  local_98.x = 0.0;
  local_98.y = 0.0;
  local_88.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_88.fields._index = 0;
  local_88.fields._version = 0;
  local_88.fields._current = (Il2CppObject *)0x0;
  pMVar12 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapDestructionDebris_c__DisplayClass45_0);
  System_Object___ctor((Il2CppObject *)pMVar12,(MethodInfo *)0x0);
  if (cells != (System_Collections_Generic_List_List_MapFracture_Triangle___o *)0x0) {
    iVar11 = (cells->fields)._size;
    if (iVar11 == 0) {
      return;
    }
    pSVar13 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_EntityId);
    System_Collections_Generic_List_EntityId____ctor_520b970
              (pSVar13,iVar11,(MethodInfo_520B970 *)MethodInfo_System_Collections_Generic_List_EntityId_ctor);
    if (pMVar12 != (Map_MapDestructionDebris___c__DisplayClass45_0_o *)0x0) {
      local_60 = &pMVar12->fields;
      (pMVar12->fields).convex = pSVar13;
      local_68 = pMVar12;
      Il2CppCodeGenWriteBarrier(&local_60->convex);
      if (0 < (cells->fields)._size) {
        index = 0;
        do {
          while( true ) {
            pSVar14 = (System_Collections_Generic_List_MapFracture_Triangle__o *)
                      System_Collections_Generic_List_object___get_Item
                                ((System_Collections_Generic_List_object__o *)cells,index,
                                 (MethodInfo_395CF20 *)
                                 MethodInfo_System_Collections_Generic_List_List_MapFracture_Triangle_get_Item
                                );
            pUVar3 = (__this->fields)._fragmentMaterials;
            if (pUVar3 == (UnityEngine_Material_array *)0x0) goto label_05985ce2;
            value_00 = Map_MapFracture__CreateMesh
                                 (pSVar14,*(int32_t *)&pUVar3->max_length,(UnityEngine_Vector3_o *)&local_98,
                                  (MethodInfo *)pUVar3);
            pMVar17 = MethodInfo_System_Collections_Generic_List_Mesh_Add;
            pSVar4 = (__this->fields)._meshes;
            if (pSVar4 == (System_Collections_Generic_List_Mesh__o *)0x0) goto label_05985ce2;
            piVar1 = &(pSVar4->fields)._version;
            *piVar1 = *piVar1 + 1;
            pUVar5 = (pSVar4->fields)._items;
            if (pUVar5 == (UnityEngine_Mesh_array *)0x0) goto label_05985ce2;
            uVar2 = (pSVar4->fields)._size;
            if (uVar2 < (uint)pUVar5->max_length) {
              (pSVar4->fields)._size = uVar2 + 1;
              pUVar5->m_Items[(int)uVar2] = value_00;
              Il2CppCodeGenWriteBarrier(pUVar5->m_Items + (int)uVar2);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)value_00,
                         (MethodInfo_395D230 *)pMVar17->klass->rgctx_data[0xe].method);
            }
            __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
            UnityEngine_GameObject___ctor(__this_01,"Map debris fragment",(MethodInfo *)0x0);
            __this_02 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
            if ((__this_02 == (UnityEngine_GameObject_o *)0x0) ||
               (iVar11 = UnityEngine_GameObject__get_layer(__this_02,(MethodInfo *)0x0),
               __this_01 == (UnityEngine_GameObject_o *)0x0)) goto label_05985ce2;
            UnityEngine_GameObject__set_layer(__this_01,iVar11,(MethodInfo *)0x0);
            pUVar15 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
            parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
            ;
            if (pUVar15 == (UnityEngine_Transform_o *)0x0) goto label_05985ce2;
            UnityEngine_Transform__SetParent_692d510(pUVar15,parent,false,(MethodInfo *)0x0);
            pUVar15 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
            fVar9 = local_98.z;
            if (pUVar15 == (UnityEngine_Transform_o *)0x0) goto label_05985ce2;
            value.fields.z = local_98.z;
            value.fields.x = local_98.x;
            value.fields.y = local_98.y;
            local_48._0_4_ = local_98.x;
            local_48._4_4_ = local_98.y;
            local_48._8_8_ = 0;
            UnityEngine_Transform__set_localPosition(pUVar15,value,(MethodInfo *)0x0);
            __this_03 = UnityEngine_GameObject__AddComponent_object_
                                  (__this_01,
                                   (MethodInfo_353B6A0 *)
                                   MethodInfo_UnityEngine_GameObject_AddComponent_MeshFilter);
            if (__this_03 == (UnityEngine_MeshFilter_o *)0x0) goto label_05985ce2;
            UnityEngine_MeshFilter__set_sharedMesh(__this_03,value_00,(MethodInfo *)0x0);
            pUVar3 = (__this->fields)._fragmentMaterials;
            if (Il2CppMethodInitialized_07545a05 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_UnityEngine_GameObject_AddComponent_MeshRenderer);
              Il2CppMethodInitialized_07545a05 = '\x01';
            }
            __this_04 = UnityEngine_GameObject__AddComponent_object_
                                  (__this_01,
                                   (MethodInfo_353B6A0 *)
                                   MethodInfo_UnityEngine_GameObject_AddComponent_MeshRenderer);
            if (__this_04 == (UnityEngine_MeshRenderer_o *)0x0) goto label_05985ce2;
            UnityEngine_Renderer__set_sharedMaterials
                      ((UnityEngine_Renderer_o *)__this_04,pUVar3,(MethodInfo *)0x0);
            UnityEngine_Renderer__set_shadowCastingMode
                      ((UnityEngine_Renderer_o *)__this_04,(__this->fields)._shadows,(MethodInfo *)0x0);
            pMVar17 = (MethodInfo *)(ulong)index;
            pSVar14 = (System_Collections_Generic_List_MapFracture_Triangle__o *)
                      System_Collections_Generic_List_object___get_Item
                                ((System_Collections_Generic_List_object__o *)cells,index,
                                 (MethodInfo_395CF20 *)
                                 MethodInfo_System_Collections_Generic_List_List_MapFracture_Triangle_get_Item
                                );
            bVar10 = Map_MapFracture__HasVolume(pSVar14,0.1,pMVar17);
            x = (UnityEngine_Object_o *)0x0;
            if (bVar10) {
              pMVar17 = (MethodInfo *)(ulong)index;
              pSVar14 = (System_Collections_Generic_List_MapFracture_Triangle__o *)
                        System_Collections_Generic_List_object___get_Item
                                  ((System_Collections_Generic_List_object__o *)cells,index,
                                   (MethodInfo_395CF20 *)
                                   MethodInfo_System_Collections_Generic_List_List_MapFracture_Triangle_get_Item
                                  );
              center.fields.z = fVar9;
              center.fields.x = (float)local_48._0_4_;
              center.fields.y = (float)local_48._4_4_;
              x = (UnityEngine_Object_o *)Map_MapFracture__CreateCollisionMesh(pSVar14,center,0.75,pMVar17);
            }
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar10 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            pMVar17 = MethodInfo_System_Collections_Generic_List_Mesh_Add;
            if (bVar10) {
              pSVar4 = (__this->fields)._meshes;
              if (pSVar4 == (System_Collections_Generic_List_Mesh__o *)0x0) goto label_05985ce2;
              piVar1 = &(pSVar4->fields)._version;
              *piVar1 = *piVar1 + 1;
              pUVar5 = (pSVar4->fields)._items;
              if (pUVar5 == (UnityEngine_Mesh_array *)0x0) goto label_05985ce2;
              uVar2 = (pSVar4->fields)._size;
              if (uVar2 < (uint)pUVar5->max_length) {
                (pSVar4->fields)._size = uVar2 + 1;
                pUVar5->m_Items[(int)uVar2] = (UnityEngine_Mesh_o *)x;
                Il2CppCodeGenWriteBarrier(pUVar5->m_Items + (int)uVar2);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)x,
                           (MethodInfo_395D230 *)pMVar17->klass->rgctx_data[0xe].method);
              }
              if (x == (UnityEngine_Object_o *)0x0) goto label_05985ce2;
              pSVar13 = local_60->convex;
              item = UnityEngine_Object__GetEntityId(x,(MethodInfo *)0x0);
              pMVar17 = MethodInfo_System_Collections_Generic_List_EntityId_Add;
              if (pSVar13 == (System_Collections_Generic_List_EntityId__o *)0x0) goto label_05985ce2;
              piVar1 = &(pSVar13->fields)._version;
              *piVar1 = *piVar1 + 1;
              pUVar6 = (pSVar13->fields)._items;
              if (pUVar6 == (UnityEngine_EntityId_array *)0x0) goto label_05985ce2;
              uVar2 = (pSVar13->fields)._size;
              if (uVar2 < (uint)pUVar6->max_length) {
                (pSVar13->fields)._size = uVar2 + 1;
                pUVar6->m_Items[(int)uVar2].fields.m_Data = (int32_t)item.fields.m_Data;
              }
              else {
                System_Collections_Generic_List_EntityId___AddWithResize
                          (pSVar13,item,(MethodInfo_520C1F0 *)pMVar17->klass->rgctx_data[0xe].method);
              }
            }
            __this_00 = (__this->fields)._pieces;
            __this_05 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapDestructionDebris_Piece);
            System_Object___ctor((Il2CppObject *)__this_05,(MethodInfo *)0x0);
            if (__this_05 == (Map_MapDestructionDebris_Piece_o *)0x0) goto label_05985ce2;
            (__this_05->fields).Fragment = __this_01;
            Il2CppCodeGenWriteBarrier(&(__this_05->fields).Fragment);
            (__this_05->fields).Collision = (UnityEngine_Mesh_o *)x;
            Il2CppCodeGenWriteBarrier(&(__this_05->fields).Collision);
            pMVar17 = MethodInfo_System_Collections_Generic_List_MapDestructionDebris_Piece_Add;
            if (__this_00 == (System_Collections_Generic_List_MapDestructionDebris_Piece__o *)0x0)
            goto label_05985ce2;
            piVar1 = &(__this_00->fields)._version;
            *piVar1 = *piVar1 + 1;
            pMVar7 = (__this_00->fields)._items;
            if (pMVar7 == (Map_MapDestructionDebris_Piece_array *)0x0) goto label_05985ce2;
            uVar2 = (__this_00->fields)._size;
            if ((uint)pMVar7->max_length <= uVar2) break;
            (__this_00->fields)._size = uVar2 + 1;
            pMVar7->m_Items[(int)uVar2] = __this_05;
            Il2CppCodeGenWriteBarrier(pMVar7->m_Items + (int)uVar2);
            index = index + 1;
            if ((cells->fields)._size <= (int)index) goto label_05985bb1;
          }
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)__this_05,
                     (MethodInfo_395D230 *)pMVar17->klass->rgctx_data[0xe].method);
          index = index + 1;
        } while ((int)index < (cells->fields)._size);
      }
label_05985bb1:
      pSVar8 = (__this->fields)._sectionVisuals;
      if (pSVar8 != (System_Collections_Generic_List_GameObject__o *)0x0) {
        System_Collections_Generic_List_object___GetEnumerator
                  (&local_88,(System_Collections_Generic_List_object__o *)pSVar8,
                   (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
        local_58 = 0;
        local_50 = &local_88;
        while (bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                  ((System_Collections_Generic_List_Enumerator_object__o *)&local_88,
                                   (MethodInfo_4C45C50 *)
                                   MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext),
              obj = local_88.fields._current, bVar10) {
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          UnityEngine_Object__Destroy_69214e0((UnityEngine_Object_o *)obj,(MethodInfo *)0x0);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((System_Collections_Generic_List_Enumerator_object__o *)&local_88,
                   (MethodInfo_4C45C40 *)
                   MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
        pMVar12 = local_68;
        pSVar8 = (__this->fields)._sectionVisuals;
        if (pSVar8 != (System_Collections_Generic_List_GameObject__o *)0x0) {
          piVar1 = &(pSVar8->fields)._version;
          *piVar1 = *piVar1 + 1;
          iVar11 = (pSVar8->fields)._size;
          (pSVar8->fields)._size = 0;
          if (0 < iVar11) {
            System_Array__Clear((System_Array_o *)(pSVar8->fields)._items,0,iVar11,(MethodInfo *)0x0);
          }
          __this_06 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
          System_Action___ctor
                    (__this_06,(Il2CppObject *)pMVar12,
                     (intptr_t)MethodInfo_Map_MapDestructionDebris_c__DisplayClass45_0_CreateFragments_b__0,
                     (MethodInfo *)0x0);
          if ((TypeInfo_System_Threading_Tasks_Task->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Threading_Tasks_Task);
          }
          pSVar16 = System_Threading_Tasks_Task__Run(__this_06,(MethodInfo *)0x0);
          (__this->fields)._baking = pSVar16;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._baking);
          return;
        }
      }
    }
  }
label_05985ce2:
  ThrowNullReferenceException();
}


// Map.MapDestructionDebris$$ActivateFragments
// il2cpp: void Map_MapDestructionDebris__ActivateFragments (Map_MapDestructionDebris_o* __this, const MethodInfo* method);
// 0x5985d50
// eh: try 0x5985e8a..0x598613c -> pad 0x5986177 (+29 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5986193..0x5986198 -> pad 0x59861bd cleanup
// eh: try 0x59861c0..0x59861ca -> pad 0x59861d2 catch (...) [compiler noexcept guard]
// asm: 52 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5986141: jmp 0x598617b
// asm:   0x5986143: jmp 0x598617b
// asm:   0x5986145: jmp 0x598617b
// asm:   0x5986147: jmp 0x598617b
// asm:   0x5986149: jmp 0x598617b
// asm:   0x598614b: jmp 0x598617b
// asm:   0x598614d: jmp 0x598617b
// asm:   0x598614f: jmp 0x598617b
// asm:   0x5986151: jmp 0x598617b
// asm:   0x5986153: jmp 0x598617b
// asm:   0x5986155: jmp 0x598617b
// asm:   0x5986157: jmp 0x598617b
// asm:   0x5986159: jmp 0x598617b
// asm:   0x598615b: jmp 0x598617b
// asm:   0x598615d: jmp 0x598617b
// asm:   0x598615f: jmp 0x598617b
// asm:   0x5986161: jmp 0x598617b
// asm:   0x5986163: jmp 0x598617b
// asm:   0x5986165: jmp 0x598617b
// asm:   0x5986167: jmp 0x598617b
// asm:   0x5986169: jmp 0x598617b
// asm:   0x598616b: jmp 0x598617b
// asm:   0x598616d: jmp 0x598617b
// asm:   0x598616f: jmp 0x598617b
// asm:   0x5986171: jmp 0x598617b
// asm:   0x5986173: jmp 0x598617b
// asm:   0x5986175: jmp 0x598617b
// asm:   0x5986177: jmp 0x598617b
// asm:   0x5986179: jmp 0x598617b
// asm:   0x598617b: mov rbx, rax
// asm:   0x598617e: cmp edx, 1
// asm:   0x5986181: jne 0x59861c0
// asm:   0x5986183: mov rdi, rbx
// asm:   0x5986186: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x598618b: mov rbx, qword ptr [rax]
// asm:   0x598618e: mov qword ptr [rsp + 0x28], rbx
// asm:   0x5986193: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5986198: lea rax, [rip + 0x1909109]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapDestructionDebris_Piece_Dispose
// asm:   0x598619f: mov rsi, qword ptr [rax]
// asm:   0x59861a2: lea rdi, [rsp + 0x10]
// asm:   0x59861a7: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x59861ac: test rbx, rbx
// asm:   0x59861af: je 0x59860fb
// asm:   0x59861b5: mov rdi, rbx
// asm:   0x59861b8: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x59861bd: mov rbx, rax
// asm:   0x59861c0: lea rdi, [rsp + 0x28]
// asm:   0x59861c5: call 0x2fd42f0  ; il2cpp_runtime_helper_02fd42f0()
// asm:   0x59861ca: mov rdi, rbx
// asm:   0x59861cd: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x59861d2: mov rdi, rax
// asm:   0x59861d5: call 0x2ab61e0  ; __clang_call_terminate()

void Map_MapDestructionDebris__ActivateFragments(Map_MapDestructionDebris_o *__this,MethodInfo *method)

{
  Il2CppObject *targetAddress;
  int32_t Seed;
  System_Collections_Generic_List_MapDestructionDebris_Piece__o *__this_00;
  Il2CppClass *__this_01;
  UnityEngine_Mesh_o *collision;
  double dVar1;
  double dVar2;
  Il2CppObject *pIVar3;
  bool bVar4;
  System_Random_o *__this_02;
  UnityEngine_MeshFilter_o *__this_03;
  UnityEngine_Mesh_o *mesh;
  UnityEngine_Collider_o *__this_04;
  Il2CppClass *pIVar5;
  UnityEngine_ConstantForce_o *pUVar6;
  MethodInfo *in_RCX;
  float fVar7;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o UVar8;
  UnityEngine_Vector3_o value_00;
  System_Collections_Generic_List_Enumerator_object__o local_78;
  undefined1 local_60 [16];
  Il2CppObject *local_50;
  undefined1 local_48 [24];
  
  if (Il2CppMethodInitialized_07545a0c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapDestructionDebris_Piece_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapDestructionDebris_Piece_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapDestructionDebris_Piece_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_ConstantForce);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Rigidbody);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_MeshFilter);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapDestructionDebris_Piece_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestructionDebris);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Random);
    Il2CppMethodInitialized_07545a0c = '\x01';
  }
  local_78.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_78.fields._index = 0;
  local_78.fields._version = 0;
  local_78.fields._current = (Il2CppObject *)0x0;
  (__this->fields)._activeAge = (__this->fields)._age;
  Seed = (__this->fields)._seed;
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Random);
  System_Random___ctor_54cebf0(__this_02,Seed,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._pieces;
  if (__this_00 == (System_Collections_Generic_List_MapDestructionDebris_Piece__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_60,
             (System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395E050 *)
             MethodInfo_System_Collections_Generic_List_MapDestructionDebris_Piece_GetEnumerator);
  local_78.fields._current = local_50;
  local_78.fields._list = (System_Collections_Generic_List_T__o *)local_60._0_8_;
  local_78.fields._index = local_60._8_4_;
  local_78.fields._version = local_60._12_4_;
  local_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_60._8_8_ = &local_78;
  while( true ) {
    bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (&local_78,
                       (MethodInfo_4C45C50 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_MapDestructionDebris_Piece_MoveNext
                      );
    pIVar3 = local_78.fields._current;
    if (!bVar4) {
      System_Collections_Generic_List_Enumerator_object___Dispose
                (&local_78,
                 (MethodInfo_4C45C40 *)
                 MethodInfo_System_Collections_Generic_List_Enumerator_MapDestructionDebris_Piece_Dispose);
      return;
    }
    if (local_78.fields._current == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    __this_01 = local_78.fields._current[1].klass;
    if (__this_01 == (Il2CppClass *)0x0) {
      ThrowNullReferenceException();
    }
    __this_03 = UnityEngine_GameObject__GetComponent_object_
                          ((UnityEngine_GameObject_o *)__this_01,
                           (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_MeshFilter);
    if (__this_03 == (UnityEngine_MeshFilter_o *)0x0) break;
    mesh = UnityEngine_MeshFilter__get_sharedMesh(__this_03,(MethodInfo *)0x0);
    collision = pIVar3[1].monitor;
    if ((TypeInfo_Map_MapDestructionDebris->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestructionDebris);
    }
    __this_04 = Map_MapDestructionDebris__AddCollider
                          ((UnityEngine_GameObject_o *)__this_01,mesh,collision,in_RCX);
    if (__this_04 == (UnityEngine_Collider_o *)0x0) {
      ThrowNullReferenceException();
    }
    in_RCX = (MethodInfo *)TypeInfo_Map_MapDestructionDebris->static_fields;
    UnityEngine_Collider__set_sharedMaterial
              (__this_04,(UnityEngine_PhysicsMaterial_o *)in_RCX->klass,(MethodInfo *)0x0);
    pIVar5 = (Il2CppClass *)
             UnityEngine_GameObject__AddComponent_object_
                       ((UnityEngine_GameObject_o *)__this_01,
                        (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_Rigidbody);
    targetAddress = pIVar3 + 2;
    pIVar3[2].klass = pIVar5;
    Il2CppCodeGenWriteBarrier(&targetAddress->klass);
    if (targetAddress->klass == (Il2CppClass *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_Rigidbody__set_interpolation
              ((UnityEngine_Rigidbody_o *)targetAddress->klass,1,(MethodInfo *)0x0);
    if (__this_02 == (System_Random_o *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar5 = targetAddress->klass;
    dVar1 = (*(__this_02->klass->vtable)._8_NextDouble.methodPtr)
                      (__this_02,(__this_02->klass->vtable)._8_NextDouble.method);
    dVar2 = (*(__this_02->klass->vtable)._8_NextDouble.methodPtr)
                      (__this_02,(__this_02->klass->vtable)._8_NextDouble.method);
    if (pIVar5 == (Il2CppClass *)0x0) {
      ThrowNullReferenceException();
    }
    UVar8.fields.z = (float)dVar2 + -0.5;
    UVar8.fields.y = 0.0;
    UVar8.fields.x = (float)dVar1 + -0.5;
    UnityEngine_Rigidbody__set_linearVelocity((UnityEngine_Rigidbody_o *)pIVar5,UVar8,(MethodInfo *)0x0);
    pIVar5 = targetAddress->klass;
    dVar1 = (*(__this_02->klass->vtable)._8_NextDouble.methodPtr)
                      (__this_02,(__this_02->klass->vtable)._8_NextDouble.method);
    dVar2 = (*(__this_02->klass->vtable)._8_NextDouble.methodPtr)
                      (__this_02,(__this_02->klass->vtable)._8_NextDouble.method);
    local_48._8_4_ = extraout_XMM0_Dc;
    local_48._0_8_ = dVar2;
    local_48._12_4_ = extraout_XMM0_Dd;
    dVar2 = (*(__this_02->klass->vtable)._8_NextDouble.methodPtr)
                      (__this_02,(__this_02->klass->vtable)._8_NextDouble.method);
    if (pIVar5 == (Il2CppClass *)0x0) {
      ThrowNullReferenceException();
    }
    value.fields.z = ((float)dVar2 + -0.5) * 1.2;
    value.fields.x = ((float)dVar1 + -0.5) * 1.2;
    value.fields.y = ((float)(double)local_48._0_8_ + -0.5) * 1.2;
    UnityEngine_Rigidbody__set_angularVelocity((UnityEngine_Rigidbody_o *)pIVar5,value,(MethodInfo *)0x0);
    pUVar6 = UnityEngine_GameObject__AddComponent_object_
                       ((UnityEngine_GameObject_o *)__this_01,
                        (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_ConstantForce);
    pIVar3[2].monitor = pUVar6;
    Il2CppCodeGenWriteBarrier(&pIVar3[2].monitor);
    pUVar6 = pIVar3[2].monitor;
    if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
    }
    UVar8 = UnityEngine_Physics__get_gravity((MethodInfo *)0x0);
    local_48._8_4_ = extraout_XMM0_Dc_00;
    local_48._0_8_ = UVar8.fields._0_8_;
    local_48._12_4_ = extraout_XMM0_Dd_00;
    if (targetAddress->klass == (Il2CppClass *)0x0) {
      ThrowNullReferenceException();
    }
    fVar7 = UnityEngine_Rigidbody__get_mass((UnityEngine_Rigidbody_o *)targetAddress->klass,(MethodInfo *)0x0)
    ;
    if (pUVar6 == (UnityEngine_ConstantForce_o *)0x0) {
      ThrowNullReferenceException();
    }
    value_00.fields.z = UVar8.fields.z * fVar7;
    value_00.fields.x = fVar7 * (float)local_48._0_4_;
    value_00.fields.y = fVar7 * (float)local_48._4_4_;
    UnityEngine_ConstantForce__set_force(pUVar6,value_00,(MethodInfo *)0x0);
  }
  ThrowNullReferenceException();
}


// Map.MapDestructionDebris$$AddCollider
// il2cpp: UnityEngine_Collider_o* Map_MapDestructionDebris__AddCollider (UnityEngine_GameObject_o* fragment, UnityEngine_Mesh_o* mesh, UnityEngine_Mesh_o* collision, const MethodInfo* method);
// 0x5987610

UnityEngine_Collider_o *
Map_MapDestructionDebris__AddCollider
          (UnityEngine_GameObject_o *fragment,UnityEngine_Mesh_o *mesh,UnityEngine_Mesh_o *collision,
          MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  UnityEngine_Vector3_StaticFields *pUVar3;
  undefined1 auVar4 [16];
  bool bVar5;
  int32_t value;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Transform_o *parent;
  UnityEngine_MeshCollider_o *__this_01;
  UnityEngine_BoxCollider_o *__this_02;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Bounds_o local_50;
  undefined1 local_38 [16];
  
  if (Il2CppMethodInitialized_07545a0d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_BoxCollider);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_MeshCollider);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"Collider");
    Il2CppMethodInitialized_07545a0d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor(__this,"Collider",(MethodInfo *)0x0);
  if ((fragment != (UnityEngine_GameObject_o *)0x0) &&
     (value = UnityEngine_GameObject__get_layer(fragment,(MethodInfo *)0x0),
     __this != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__set_layer(__this,value,(MethodInfo *)0x0);
    __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
    parent = UnityEngine_GameObject__get_transform(fragment,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__SetParent_692d510(__this_00,parent,false,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar5 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)collision,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar5) {
        __this_01 = UnityEngine_GameObject__AddComponent_object_
                              (__this,(MethodInfo_353B6A0 *)
                                      MethodInfo_UnityEngine_GameObject_AddComponent_MeshCollider);
        if (__this_01 != (UnityEngine_MeshCollider_o *)0x0) {
          UnityEngine_MeshCollider__set_sharedMesh(__this_01,collision,(MethodInfo *)0x0);
          UnityEngine_MeshCollider__set_convex(__this_01,true,(MethodInfo *)0x0);
          return (UnityEngine_Collider_o *)__this_01;
        }
      }
      else {
        __this_02 = UnityEngine_GameObject__AddComponent_object_
                              (__this,(MethodInfo_353B6A0 *)
                                      MethodInfo_UnityEngine_GameObject_AddComponent_BoxCollider);
        if ((mesh != (UnityEngine_Mesh_o *)0x0) &&
           (UnityEngine_Mesh__get_bounds(&local_50,mesh,(MethodInfo *)0x0),
           __this_02 != (UnityEngine_BoxCollider_o *)0x0)) {
          UnityEngine_BoxCollider__set_center(__this_02,local_50.fields.m_Center,(MethodInfo *)0x0);
          UnityEngine_Mesh__get_bounds(&local_50,mesh,(MethodInfo *)0x0);
          auVar6._0_4_ = (local_50.fields.m_Extents.fields.x + local_50.fields.m_Extents.fields.x) * 0.75;
          auVar6._4_4_ = (local_50.fields.m_Extents.fields.y + local_50.fields.m_Extents.fields.y) * 0.75;
          auVar6._8_8_ = 0;
          fVar7 = (local_50.fields.m_Extents.fields.z + local_50.fields.m_Extents.fields.z) * 0.75;
          if (g_data_0753e4b7 == '\0') {
            local_38 = auVar6;
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            g_data_0753e4b7 = '\x01';
            auVar6 = local_38;
          }
          pUVar3 = TypeInfo_UnityEngine_Vector3->static_fields;
          uVar1 = (pUVar3->oneVector).fields.x;
          uVar2 = (pUVar3->oneVector).fields.y;
          fVar8 = (pUVar3->oneVector).fields.z * 0.1;
          if (fVar7 <= fVar8) {
            fVar7 = fVar8;
          }
          auVar4._4_4_ = (float)uVar2 * 0.1;
          auVar4._0_4_ = (float)uVar1 * 0.1;
          auVar4._8_8_ = 0;
          auVar6 = maxps(auVar6,auVar4);
          value_00.fields._0_8_ = auVar6._0_8_;
          value_00.fields.z = fVar7;
          UnityEngine_BoxCollider__set_size(__this_02,value_00,(MethodInfo *)0x0);
          return (UnityEngine_Collider_o *)__this_02;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Map.MapDestructionDebris$$IsSettled
// il2cpp: bool Map_MapDestructionDebris__IsSettled (UnityEngine_Rigidbody_o* body, const MethodInfo* method);
// 0x59861e0

bool Map_MapDestructionDebris__IsSettled(UnityEngine_Rigidbody_o *body,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Vector3_o UVar2;
  
  if (body == (UnityEngine_Rigidbody_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = false;
  UVar2 = UnityEngine_Rigidbody__get_linearVelocity(body,(MethodInfo *)0x0);
  if (UVar2.fields.z * UVar2.fields.z + UVar2.fields.y * UVar2.fields.y + UVar2.fields.x * UVar2.fields.x <
      1.0) {
    UVar2 = UnityEngine_Rigidbody__get_angularVelocity(body,(MethodInfo *)0x0);
    bVar1 = UVar2.fields.z * UVar2.fields.z +
            UVar2.fields.y * UVar2.fields.y + UVar2.fields.x * UVar2.fields.x < 1.0;
  }
  return bVar1;
}


// Map.MapDestructionDebris$$Freeze
// il2cpp: void Map_MapDestructionDebris__Freeze (Map_MapDestructionDebris_Piece_o* piece, const MethodInfo* method);
// 0x5986260

void Map_MapDestructionDebris__Freeze(Map_MapDestructionDebris_Piece_o *piece,MethodInfo *method)

{
  UnityEngine_Behaviour_o *__this;
  UnityEngine_Rigidbody_o *pUVar1;
  
  if ((piece != (Map_MapDestructionDebris_Piece_o *)0x0) &&
     (__this = (UnityEngine_Behaviour_o *)(piece->fields).Force, __this != (UnityEngine_Behaviour_o *)0x0)) {
    UnityEngine_Behaviour__set_enabled(__this,false,(MethodInfo *)0x0);
    pUVar1 = (piece->fields).Body;
    if (pUVar1 != (UnityEngine_Rigidbody_o *)0x0) {
      UnityEngine_Rigidbody__set_isKinematic(pUVar1,true,(MethodInfo *)0x0);
      pUVar1 = (piece->fields).Body;
      if (pUVar1 != (UnityEngine_Rigidbody_o *)0x0) {
        UnityEngine_Rigidbody__set_interpolation(pUVar1,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Map.MapDestructionDebris$$OnDestroy
// il2cpp: void Map_MapDestructionDebris__OnDestroy (Map_MapDestructionDebris_o* __this, const MethodInfo* method);
// 0x5987860
// eh: try 0x5987a80..0x5987b40 -> pad 0x5987bc8 (+5 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5987b99..0x5987b9e -> pad 0x5987bb9 cleanup
// eh: try 0x5987bbc..0x5987bc6 -> pad 0x5987c1f catch (...) [compiler noexcept guard]
// eh: try 0x5987be0..0x5987be5 -> pad 0x5987c0a cleanup
// eh: try 0x5987c0d..0x5987c17 -> pad 0x5987c1f catch (...) [compiler noexcept guard]
// asm: 44 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5987b7d: jmp 0x5987b81
// asm:   0x5987b7f: jmp 0x5987bc8
// asm:   0x5987b81: mov r14, rax
// asm:   0x5987b84: cmp edx, 1
// asm:   0x5987b87: jne 0x5987bbc
// asm:   0x5987b89: mov rdi, r14
// asm:   0x5987b8c: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5987b91: mov rbx, qword ptr [rax]
// asm:   0x5987b94: mov qword ptr [rsp + 8], rbx
// asm:   0x5987b99: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5987b9e: lea rax, [rip + 0x1906953]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Mesh_Dispose
// asm:   0x5987ba5: mov rsi, qword ptr [rax]
// asm:   0x5987ba8: lea rdi, [rsp + 0x20]
// asm:   0x5987bad: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5987bb2: test rbx, rbx
// asm:   0x5987bb5: je 0x5987b56
// asm:   0x5987bb7: jmp 0x5987c02
// asm:   0x5987bb9: mov r14, rax
// asm:   0x5987bbc: lea rdi, [rsp + 8]
// asm:   0x5987bc1: call 0x2fd4350  ; il2cpp_runtime_helper_02fd4350()
// asm:   0x5987bc6: jmp 0x5987c17
// asm:   0x5987bc8: mov r14, rax
// asm:   0x5987bcb: cmp edx, 1
// asm:   0x5987bce: jne 0x5987c0d
// asm:   0x5987bd0: mov rdi, r14
// asm:   0x5987bd3: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5987bd8: mov rbx, qword ptr [rax]
// asm:   0x5987bdb: mov qword ptr [rsp + 8], rbx
// asm:   0x5987be0: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5987be5: lea rax, [rip + 0x1907fcc]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Material_Material_Dispose
// asm:   0x5987bec: mov rsi, qword ptr [rax]
// asm:   0x5987bef: lea rdi, [rsp + 0x40]
// asm:   0x5987bf4: call 0x4de71f0  ; System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose()
// asm:   0x5987bf9: test rbx, rbx
// asm:   0x5987bfc: je 0x5987ac7
// asm:   0x5987c02: mov rdi, rbx
// asm:   0x5987c05: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5987c0a: mov r14, rax
// asm:   0x5987c0d: lea rdi, [rsp + 8]
// asm:   0x5987c12: call 0x2fd4320  ; il2cpp_runtime_helper_02fd4320()
// asm:   0x5987c17: mov rdi, r14
// asm:   0x5987c1a: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5987c1f: mov rdi, rax
// asm:   0x5987c22: call 0x2ab61e0  ; __clang_call_terminate()

void Map_MapDestructionDebris__OnDestroy(Map_MapDestructionDebris_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_MapDestructionDebris__o *__this_00;
  System_Threading_Tasks_Task_o *obj;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  System_Collections_Generic_List_Mesh__o *__this_02;
  UnityEngine_Object_o *obj_00;
  bool bVar1;
  System_Threading_Tasks_Task_array *tasks;
  Il2CppObject *pIVar2;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_03;
  undefined1 local_80 [16];
  UnityEngine_Object_o *local_70;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  undefined1 local_48 [16];
  UnityEngine_Object_o *local_38;
  
  if (Il2CppMethodInitialized_07545a0e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Material_Material_get_Values);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Mesh_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Material_Material_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Mesh_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Material_Material_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Mesh_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Material_Material_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Mesh_GetEnumerator)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapDestructionDebris_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestructionDebris);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Threading_Tasks_Task_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Threading_Tasks_Task);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Material_Material_GetEnumerator
              );
    Il2CppMethodInitialized_07545a0e = '\x01';
  }
  local_68.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_68.fields._index = 0;
  local_68.fields._version = 0;
  local_68.fields._current = (Il2CppObject *)0x0;
  if ((TypeInfo_Map_MapDestructionDebris->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestructionDebris);
  }
  __this_00 = TypeInfo_Map_MapDestructionDebris->static_fields->Active;
  if (__this_00 != (System_Collections_Generic_List_MapDestructionDebris__o *)0x0) {
    System_Collections_Generic_List_object___Remove
              ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)__this,
               (MethodInfo_395ED70 *)MethodInfo_System_Collections_Generic_List_MapDestructionDebris_Remove);
    if ((__this->fields)._baking != (System_Threading_Tasks_Task_o *)0x0) {
      tasks = (System_Threading_Tasks_Task_array *)SZArrayNew(TypeInfo_System_Threading_Tasks_Task_array,1);
      if (tasks == (System_Threading_Tasks_Task_array *)0x0) goto label_05987b64;
      obj = (__this->fields)._baking;
      if (obj != (System_Threading_Tasks_Task_o *)0x0) {
        pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((tasks->obj).klass)->_1).element_class);
        if (pIVar2 == (Il2CppObject *)0x0) {
          pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
        }
      }
      if ((int)tasks->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      tasks->m_Items[0] = obj;
      Il2CppCodeGenWriteBarrier(tasks->m_Items);
      if ((TypeInfo_System_Threading_Tasks_Task->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Threading_Tasks_Task);
      }
      System_Threading_Tasks_Task__WaitAny(tasks,(MethodInfo *)0x0);
    }
    __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._rubbleMaterials;
    if (__this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      __this_03 = System_Collections_Generic_Dictionary_object__object___get_Values
                            (__this_01,
                             (MethodInfo_4AAD2A0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_Material_Material_get_Values);
      if (__this_03 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
        System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator
                  ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                   local_80,__this_03,
                   (MethodInfo_43F93D0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Material_Material_GetEnumerator
                  );
        local_38 = local_70;
        local_48._0_8_ = local_80._0_8_;
        local_48._8_8_ = local_80._8_8_;
        local_80._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
        local_80._8_8_ =
             (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_48;
        while( true ) {
          bVar1 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext
                            ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o
                              *)local_48,
                             (MethodInfo_4CE7200 *)
                             MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Material_Material_MoveNext
                            );
          obj_00 = local_38;
          if (!bVar1) break;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          UnityEngine_Object__Destroy_69214e0(obj_00,(MethodInfo *)0x0);
        }
        System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
                  ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                   local_48,(MethodInfo_4CE71F0 *)
                            MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Material_Material_Dispose
                  );
        __this_02 = (__this->fields)._meshes;
        if (__this_02 != (System_Collections_Generic_List_Mesh__o *)0x0) {
          System_Collections_Generic_List_object___GetEnumerator
                    (&local_68,(System_Collections_Generic_List_object__o *)__this_02,
                     (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_Mesh_GetEnumerator);
          local_80._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
          local_80._8_8_ = &local_68;
          while( true ) {
            bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              ((System_Collections_Generic_List_Enumerator_object__o *)&local_68,
                               (MethodInfo_4C45C50 *)
                               MethodInfo_System_Collections_Generic_List_Enumerator_Mesh_MoveNext);
            pIVar2 = local_68.fields._current;
            if (!bVar1) break;
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            UnityEngine_Object__Destroy_69214e0((UnityEngine_Object_o *)pIVar2,(MethodInfo *)0x0);
          }
          System_Collections_Generic_List_Enumerator_object___Dispose
                    ((System_Collections_Generic_List_Enumerator_object__o *)&local_68,
                     (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_Mesh_Dispose)
          ;
          return;
        }
      }
    }
  }
label_05987b64:
  ThrowNullReferenceException();
}


// Map.MapDestructionDebris$$.ctor
// il2cpp: void Map_MapDestructionDebris___ctor (Map_MapDestructionDebris_o* __this, const MethodInfo* method);
// 0x5987c30

void Map_MapDestructionDebris___ctor(Map_MapDestructionDebris_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_Material__Material__o *__this_00;
  System_Collections_Generic_List_Mesh__o *__this_01;
  System_Collections_Generic_List_MapDestructionDebris_Piece__o *__this_02;
  System_Collections_Generic_List_GameObject__o *__this_03;
  
  if (Il2CppMethodInitialized_07545a0f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Material_Material_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_Material_Material);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Mesh_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapDestructionDebris_Piece_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_MapDestructionDebris_Piece);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Mesh);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_GameObject);
    Il2CppMethodInitialized_07545a0f = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_Material_Material);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_Material_Material_ctor);
  (__this->fields)._rubbleMaterials = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._rubbleMaterials);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Mesh);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_Mesh_ctor);
  (__this->fields)._meshes = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._meshes);
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MapDestructionDebris_Piece);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_02,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_MapDestructionDebris_Piece_ctor)
  ;
  (__this->fields)._pieces = __this_02;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._pieces);
  __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_03,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_GameObject_ctor);
  (__this->fields)._sectionVisuals = __this_03;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._sectionVisuals);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Map.MapDestructionDebris$$.cctor
// il2cpp: void Map_MapDestructionDebris___cctor (const MethodInfo* method);
// 0x5987d90

void Map_MapDestructionDebris___cctor(MethodInfo *method)

{
  Map_MapDestructionDebris_StaticFields *pMVar1;
  int32_t iVar2;
  System_Collections_Generic_List_MapDestructionDebris__o *__this;
  UnityEngine_RaycastHit_array *pUVar3;
  
  if (Il2CppMethodInitialized_07545a10 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapDestructionDebris_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_MapDestructionDebris)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestructionDebris);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RaycastHit_array);
    il2cpp_codegen_initialize_runtime_metadata(&"_Fade");
    Il2CppMethodInitialized_07545a10 = '\x01';
  }
  iVar2 = UnityEngine_Shader__PropertyToID("_Fade",(MethodInfo *)0x0);
  TypeInfo_Map_MapDestructionDebris->static_fields->FadeId = iVar2;
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MapDestructionDebris);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_MapDestructionDebris_ctor);
  pMVar1 = TypeInfo_Map_MapDestructionDebris->static_fields;
  pMVar1->Active = __this;
  Il2CppCodeGenWriteBarrier(&pMVar1->Active);
  pUVar3 = (UnityEngine_RaycastHit_array *)SZArrayNew(TypeInfo_UnityEngine_RaycastHit_array,0x10);
  pMVar1 = TypeInfo_Map_MapDestructionDebris->static_fields;
  pMVar1->GroundHits = pUVar3;
  Il2CppCodeGenWriteBarrier(&pMVar1->GroundHits);
  return;
}


