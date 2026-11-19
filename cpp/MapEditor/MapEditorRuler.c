// Type: MapEditor.MapEditorRuler
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/MapEditor/MapEditorRuler.cs
// Prior real C# source: none
// --------------------------------

// MapEditor.MapEditorRuler$$get_Measurements
// il2cpp: System_Collections_Generic_IReadOnlyList_RulerMeasurement__o* MapEditor_MapEditorRuler__get_Measurements (MapEditor_MapEditorRuler_o* __this, const MethodInfo* method);
// 0x5db6b70

System_Collections_Generic_IReadOnlyList_RulerMeasurement__o *
MapEditor_MapEditorRuler__get_Measurements(MapEditor_MapEditorRuler_o *__this,MethodInfo *method)

{
  return (System_Collections_Generic_IReadOnlyList_RulerMeasurement__o *)(__this->fields)._measurements;
}


// MapEditor.MapEditorRuler$$get_Active
// il2cpp: bool MapEditor_MapEditorRuler__get_Active (MapEditor_MapEditorRuler_o* __this, const MethodInfo* method);
// 0x5db6b80

bool MapEditor_MapEditorRuler__get_Active(MapEditor_MapEditorRuler_o *__this,MethodInfo *method)

{
  return (__this->fields)._Active_k__BackingField;
}


// MapEditor.MapEditorRuler$$set_Active
// il2cpp: void MapEditor_MapEditorRuler__set_Active (MapEditor_MapEditorRuler_o* __this, bool value, const MethodInfo* method);
// 0x5db6b90

void MapEditor_MapEditorRuler__set_Active(MapEditor_MapEditorRuler_o *__this,bool value,MethodInfo *method)

{
  (__this->fields)._Active_k__BackingField = value;
  return;
}


// MapEditor.MapEditorRuler$$get_IsCreatingMeasurement
// il2cpp: bool MapEditor_MapEditorRuler__get_IsCreatingMeasurement (MapEditor_MapEditorRuler_o* __this, const MethodInfo* method);
// 0x5db6ba0

bool MapEditor_MapEditorRuler__get_IsCreatingMeasurement
               (MapEditor_MapEditorRuler_o *__this,MethodInfo *method)

{
  return (__this->fields)._creatingMeasurement;
}


// MapEditor.MapEditorRuler$$SetActive
// il2cpp: void MapEditor_MapEditorRuler__SetActive (MapEditor_MapEditorRuler_o* __this, bool active, UI_MapEditorMenu_o* menu, const MethodInfo* method);
// 0x5db6bb0

void MapEditor_MapEditorRuler__SetActive
               (MapEditor_MapEditorRuler_o *__this,bool active,UI_MapEditorMenu_o *menu,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *method_00;
  
  (__this->fields)._menu = menu;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._menu);
  (__this->fields)._Active_k__BackingField = active;
  MapEditor_MapEditorRuler__EnsureRoot(__this,(MethodInfo *)menu);
  __this_00 = (__this->fields)._root;
  if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  method_00 = (MethodInfo *)(ulong)active;
  UnityEngine_GameObject__SetActive(__this_00,active,(MethodInfo *)0x0);
  if (active) {
    return;
  }
  MapEditor_MapEditorRuler__CancelInteraction(__this,method_00);
  return;
}


// MapEditor.MapEditorRuler$$CreateNewMeasurement
// il2cpp: void MapEditor_MapEditorRuler__CreateNewMeasurement (MapEditor_MapEditorRuler_o* __this, const MethodInfo* method);
// 0x5db6ef0

void MapEditor_MapEditorRuler__CreateNewMeasurement(MapEditor_MapEditorRuler_o *__this,MethodInfo *method)

{
  bool bVar1;
  UI_MapEditorMenu_o *__this_00;
  
  bVar1 = (__this->fields)._creatingMeasurement;
  MapEditor_MapEditorRuler__CancelInteraction(__this,method);
  if (bVar1 == false) {
    (__this->fields)._awaitingFirstPoint = true;
    (__this->fields)._creatingMeasurement = true;
    __this_00 = (__this->fields)._menu;
  }
  else {
    __this_00 = (__this->fields)._menu;
  }
  if (__this_00 == (UI_MapEditorMenu_o *)0x0) {
    return;
  }
  UI_MapEditorMenu__SyncRulerPanel(__this_00,(MethodInfo *)0x0);
  return;
}


// MapEditor.MapEditorRuler$$ChainFrom
// il2cpp: void MapEditor_MapEditorRuler__ChainFrom (MapEditor_MapEditorRuler_o* __this, int32_t index, const MethodInfo* method);
// 0x5db6f30

void MapEditor_MapEditorRuler__ChainFrom(MapEditor_MapEditorRuler_o *__this,int32_t index,MethodInfo *method)

{
  UnityEngine_Vector3_o *pUVar1;
  System_Collections_Generic_List_RulerMeasurement__o *pSVar2;
  System_Nullable_Vector3__o *pSVar3;
  MapEditor_RulerMeasurement_o *pMVar4;
  MethodInfo *method_00;
  MethodInfo *method_01;
  undefined4 in_register_00000034;
  MethodInfo *method_02;
  UnityEngine_Vector3_o value;
  System_Nullable_Vector3__Fields local_28;
  
  method_02 = (MethodInfo *)CONCAT44(in_register_00000034,index);
  if (Il2CppMethodInitialized_0754812e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_RulerMeasurement_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_RulerMeasurement_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_ctor);
    Il2CppMethodInitialized_0754812e = '\x01';
  }
  if (index < 0) {
    return;
  }
  pSVar2 = (__this->fields)._measurements;
  if (pSVar2 != (System_Collections_Generic_List_RulerMeasurement__o *)0x0) {
    if ((pSVar2->fields)._size <= index) {
      return;
    }
    MapEditor_MapEditorRuler__CancelInteraction(__this,method_02);
    pSVar2 = (__this->fields)._measurements;
    if (pSVar2 != (System_Collections_Generic_List_RulerMeasurement__o *)0x0) {
      pMVar4 = System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar2,index,
                          (MethodInfo_395CF20 *)
                          MethodInfo_System_Collections_Generic_List_RulerMeasurement_get_Item);
      value = MapEditor_MapEditorRuler__FindChainRoot(__this,pMVar4,method_00);
      local_28.hasValue = false;
      local_28._1_3_ = 0;
      local_28.value.fields.x = 0.0;
      local_28.value.fields.y = 0.0;
      local_28.value.fields.z = 0.0;
      System_Nullable_Vector3____ctor
                ((System_Nullable_Vector3__o *)&local_28,value,
                 (MethodInfo_3CDCAA0 *)MethodInfo_System_Nullable_Vector3_ctor);
      (__this->fields)._chainRoot.fields.hasValue = local_28.hasValue;
      *(undefined3 *)&(__this->fields)._chainRoot.fields.field_0x1 = local_28._1_3_;
      (__this->fields)._chainRoot.fields.value.fields.x = local_28.value.fields.x;
      pSVar3 = &(__this->fields)._chainRoot;
      (pSVar3->fields).value.fields.y = local_28.value.fields.y;
      (pSVar3->fields).value.fields.z = local_28.value.fields.z;
      if (pMVar4 != (MapEditor_RulerMeasurement_o *)0x0) {
        pUVar1 = &(pMVar4->fields).End;
        pMVar4 = MapEditor_MapEditorRuler__AddMeasurement
                           (__this,(UnityEngine_Vector3_o)pUVar1->fields,(UnityEngine_Vector3_o)pUVar1->fields
                            ,(pMVar4->fields).Color,method_01);
        (__this->fields)._pending = pMVar4;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._pending);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// MapEditor.MapEditorRuler$$Delete
// il2cpp: void MapEditor_MapEditorRuler__Delete (MapEditor_MapEditorRuler_o* __this, int32_t index, const MethodInfo* method);
// 0x5db74e0

void MapEditor_MapEditorRuler__Delete(MapEditor_MapEditorRuler_o *__this,int32_t index,MethodInfo *method)

{
  System_Collections_Generic_List_RulerMeasurement__o *pSVar1;
  UnityEngine_Object_o *pUVar2;
  bool bVar3;
  MapEditor_RulerMeasurement_o *item;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)(ulong)(uint)index;
  if (Il2CppMethodInitialized_0754812f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_RulerMeasurement_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_RulerMeasurement_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_RulerMeasurement_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754812f = '\x01';
  }
  if (-1 < index) {
    pSVar1 = (__this->fields)._measurements;
    if (pSVar1 == (System_Collections_Generic_List_RulerMeasurement__o *)0x0) {
label_05db75e9:
      ThrowNullReferenceException();
    }
    if (index < (pSVar1->fields)._size) {
      item = System_Collections_Generic_List_object___get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar1,index,
                        (MethodInfo_395CF20 *)
                        MethodInfo_System_Collections_Generic_List_RulerMeasurement_get_Item);
      if (((__this->fields)._pending == item) || ((__this->fields)._dragging == item)) {
        MapEditor_MapEditorRuler__CancelInteraction(__this,method_00);
      }
      pSVar1 = (__this->fields)._measurements;
      if (pSVar1 == (System_Collections_Generic_List_RulerMeasurement__o *)0x0) goto label_05db75e9;
      bVar3 = System_Collections_Generic_List_object___Remove
                        ((System_Collections_Generic_List_object__o *)pSVar1,(Il2CppObject *)item,
                         (MethodInfo_395ED70 *)
                         MethodInfo_System_Collections_Generic_List_RulerMeasurement_Remove);
      if (bVar3) {
        if (item == (MapEditor_RulerMeasurement_o *)0x0) goto label_05db75e9;
        pUVar2 = (UnityEngine_Object_o *)(item->fields).Root;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar3 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar3) {
          pUVar2 = (UnityEngine_Object_o *)(item->fields).Root;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          UnityEngine_Object__Destroy_69214e0(pUVar2,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  return;
}


// MapEditor.MapEditorRuler$$SetOrigin
// il2cpp: void MapEditor_MapEditorRuler__SetOrigin (MapEditor_MapEditorRuler_o* __this, int32_t index, UnityEngine_Vector3_o origin, const MethodInfo* method);
// 0x5db75f0

void MapEditor_MapEditorRuler__SetOrigin
               (MapEditor_MapEditorRuler_o *__this,int32_t index,UnityEngine_Vector3_o origin,
               MethodInfo *method)

{
  System_Collections_Generic_List_RulerMeasurement__o *__this_00;
  MapEditor_RulerMeasurement_o *pMVar1;
  MethodInfo *method_00;
  MapEditor_MapEditorRuler_o *__this_01;
  
  if (Il2CppMethodInitialized_07548130 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_RulerMeasurement_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_RulerMeasurement_get_Item);
    Il2CppMethodInitialized_07548130 = '\x01';
  }
  if (index < 0) {
    return;
  }
  __this_00 = (__this->fields)._measurements;
  if (__this_00 != (System_Collections_Generic_List_RulerMeasurement__o *)0x0) {
    if ((__this_00->fields)._size <= index) {
      return;
    }
    pMVar1 = System_Collections_Generic_List_object___get_Item
                       ((System_Collections_Generic_List_object__o *)__this_00,index,
                        (MethodInfo_395CF20 *)
                        MethodInfo_System_Collections_Generic_List_RulerMeasurement_get_Item);
    if (pMVar1 != (MapEditor_RulerMeasurement_o *)0x0) {
      (pMVar1->fields).Origin.fields.x = origin.fields.x;
      (pMVar1->fields).Origin.fields.y = origin.fields.y;
      (pMVar1->fields).Origin.fields.z = origin.fields.z;
      __this_01 = (MapEditor_MapEditorRuler_o *)(__this->fields)._measurements;
      if (__this_01 != (MapEditor_MapEditorRuler_o *)0x0) {
        pMVar1 = System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)__this_01,index,
                            (MethodInfo_395CF20 *)
                            MethodInfo_System_Collections_Generic_List_RulerMeasurement_get_Item);
        MapEditor_MapEditorRuler__RefreshVisual(__this_01,pMVar1,method_00);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// MapEditor.MapEditorRuler$$SetLength
// il2cpp: void MapEditor_MapEditorRuler__SetLength (MapEditor_MapEditorRuler_o* __this, int32_t index, float length, const MethodInfo* method);
// 0x5db7a90
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5db7bbd: jmp 0x5db7be2

void MapEditor_MapEditorRuler__SetLength
               (MapEditor_MapEditorRuler_o *__this,int32_t index,float length,MethodInfo *method)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint32_t uVar9;
  System_Collections_Generic_List_RulerMeasurement__o *__this_00;
  MapEditor_RulerMeasurement_o *measurement;
  UnityEngine_Vector3_StaticFields *pUVar10;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *pMVar11;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  Il2CppClass *klass;
  float fVar12;
  float extraout_XMM0_Db;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [12];
  float fStack_3c;
  undefined1 auStack_38 [16];
  float fStack_28;
  float fStack_24;
  undefined8 uStack_20;
  
  if (Il2CppMethodInitialized_07548131 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_RulerMeasurement_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_RulerMeasurement_get_Item);
    Il2CppMethodInitialized_07548131 = '\x01';
  }
  if (index < 0) {
    return;
  }
  __this_00 = (__this->fields)._measurements;
  if (__this_00 != (System_Collections_Generic_List_RulerMeasurement__o *)0x0) {
    if ((__this_00->fields)._size <= index) {
      return;
    }
    measurement = System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)__this_00,index,
                             (MethodInfo_395CF20 *)
                             MethodInfo_System_Collections_Generic_List_RulerMeasurement_get_Item);
    if (measurement != (MapEditor_RulerMeasurement_o *)0x0) {
      uVar1 = (measurement->fields).End.fields.x;
      uVar5 = (measurement->fields).End.fields.y;
      fVar2 = (measurement->fields).Origin.fields.x;
      fVar6 = (measurement->fields).Origin.fields.y;
      fVar13 = (measurement->fields).Origin.fields.z;
      auStack_60._12_4_ = (float)uVar5 - fVar6;
      auStack_38 = ZEXT416((uint)fVar13);
      fStack_28 = fVar2;
      fStack_24 = fVar6;
      uStack_20._0_4_ = 0.0;
      uStack_20._4_4_ = 0.0;
      fVar13 = (measurement->fields).End.fields.z - fVar13;
      fVar14 = (float)uVar1 - fVar2;
      pMVar11 = extraout_RDX;
      if (0.0001 <= fVar14 * fVar14 + auStack_60._12_4_ * auStack_60._12_4_ + fVar13 * fVar13) {
        auStack_60._8_4_ = fVar14;
        auStack_60._16_4_ = fVar14;
        auStack_60._20_4_ = fVar14;
        auStack_48._4_4_ = fVar14;
        auStack_48._0_4_ = fVar13;
        auStack_48._8_4_ = 0;
        fStack_3c = (float)uVar5 - fVar6;
      }
      else {
        if (Il2CppMethodInitialized_07544d56 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_07544d56 = '\x01';
          fStack_28 = (measurement->fields).Origin.fields.x;
          fStack_24 = (measurement->fields).Origin.fields.y;
          uStack_20._0_4_ = 0.0;
          uStack_20._4_4_ = 0.0;
          auStack_38 = ZEXT416((uint)(measurement->fields).Origin.fields.z);
          pMVar11 = extraout_RDX_00;
        }
        pUVar10 = TypeInfo_UnityEngine_Vector3->static_fields;
        uVar3 = (pUVar10->rightVector).fields.x;
        uVar7 = (pUVar10->rightVector).fields.y;
        auStack_60._12_4_ = (float)uVar7;
        auStack_60._8_4_ = uVar3;
        auStack_60._16_8_ = 0;
        fVar13 = (pUVar10->rightVector).fields.z;
        fVar14 = 0.0;
        _auStack_48 = ZEXT416((uint)fVar13);
      }
      uStack_20._0_4_ = 0.0;
      uStack_20._4_4_ = 0.0;
      if (Il2CppMethodInitialized_0753e72d == '\0') {
        uStack_20._0_4_ = 0.0;
        uStack_20._4_4_ = 0.0;
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_0753e72d = '\x01';
        pMVar11 = extraout_RDX_01;
        fVar13 = (float)auStack_48._0_4_;
        fVar14 = (float)auStack_48._4_4_;
      }
      auStack_60._0_4_ = 0.0;
      auStack_60._4_4_ = 0.0;
      if (Il2CppMethodInitialized_0753e729 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
        Il2CppMethodInitialized_0753e729 = '\x01';
        uVar9 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
        pMVar11 = extraout_RDX_03;
        fVar13 = (float)auStack_48._0_4_;
        fVar14 = (float)auStack_48._4_4_;
        klass = (Il2CppClass *)TypeInfo_System_Math;
      }
      else {
        uVar9 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
        klass = (Il2CppClass *)TypeInfo_System_Math;
      }
      TypeInfo_System_Math = (System_Math_c *)klass;
      if (uVar9 == 0) {
        il2cpp_codegen_runtime_class_init(klass);
        pMVar11 = extraout_RDX_04;
        fVar13 = (float)auStack_48._0_4_;
        fVar14 = (float)auStack_48._4_4_;
      }
      fVar12 = fVar13 * fVar13 + auStack_60._12_4_ * auStack_60._12_4_ + auStack_60._8_4_ * auStack_60._8_4_;
      if (fVar12 < 0.0) {
        fVar12 = sqrtf(fVar12);
        pMVar11 = extraout_RDX_02;
        fVar14 = extraout_XMM0_Db;
        fVar13 = (float)auStack_48._0_4_;
      }
      else {
        fVar12 = SQRT(fVar12);
      }
      if (1e-05 < fVar12) {
        fVar13 = fVar13 / fVar12;
        auVar15._4_4_ = fVar12;
        auVar15._0_4_ = fVar12;
        auVar15._8_4_ = fVar14;
        auVar15._12_4_ = fVar14;
        auVar15 = divps((undefined1  [16])auStack_60._8_16_,auVar15);
        auStack_60._0_4_ = auVar15._0_4_;
        auStack_60._4_4_ = auVar15._4_4_;
        pUVar10 = (UnityEngine_Vector3_StaticFields *)auStack_60;
      }
      else {
        pUVar10 = TypeInfo_UnityEngine_Vector3->static_fields;
        fVar13 = (pUVar10->zeroVector).fields.z;
      }
      uVar4 = (pUVar10->zeroVector).fields.x;
      uVar8 = (pUVar10->zeroVector).fields.y;
      fVar14 = 0.0;
      if (0.0 <= length) {
        fVar14 = length;
      }
      (measurement->fields).End.fields.x = fStack_28 + fVar14 * (float)uVar4;
      (measurement->fields).End.fields.y = fStack_24 + fVar14 * (float)uVar8;
      (measurement->fields).End.fields.z = (float)auStack_38._0_4_ + fVar13 * fVar14;
      MapEditor_MapEditorRuler__RefreshVisual((MapEditor_MapEditorRuler_o *)klass,measurement,pMVar11);
      return;
    }
  }
  ThrowNullReferenceException();
}


// MapEditor.MapEditorRuler$$SetColor
// il2cpp: void MapEditor_MapEditorRuler__SetColor (MapEditor_MapEditorRuler_o* __this, int32_t index, Utility_Color255_o* color, const MethodInfo* method);
// 0x5db7d30

void MapEditor_MapEditorRuler__SetColor
               (MapEditor_MapEditorRuler_o *__this,int32_t index,Utility_Color255_o *color,MethodInfo *method)

{
  int32_t r;
  int32_t g;
  int32_t b;
  int32_t a;
  System_Collections_Generic_List_RulerMeasurement__o *__this_00;
  MapEditor_RulerMeasurement_o *pMVar1;
  Utility_Color255_o *__this_01;
  MethodInfo *method_00;
  MapEditor_MapEditorRuler_o *__this_02;
  
  if (Il2CppMethodInitialized_07548132 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_RulerMeasurement_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_RulerMeasurement_get_Item);
    Il2CppMethodInitialized_07548132 = '\x01';
  }
  if (index < 0) {
    return;
  }
  __this_00 = (__this->fields)._measurements;
  if (__this_00 != (System_Collections_Generic_List_RulerMeasurement__o *)0x0) {
    if ((__this_00->fields)._size <= index) {
      return;
    }
    pMVar1 = System_Collections_Generic_List_object___get_Item
                       ((System_Collections_Generic_List_object__o *)__this_00,index,
                        (MethodInfo_395CF20 *)
                        MethodInfo_System_Collections_Generic_List_RulerMeasurement_get_Item);
    if (color != (Utility_Color255_o *)0x0) {
      r = (color->fields).R;
      g = (color->fields).G;
      b = (color->fields).B;
      a = (color->fields).A;
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
      Utility_Color255___ctor(__this_01,r,g,b,a,(MethodInfo *)0x0);
      if (pMVar1 != (MapEditor_RulerMeasurement_o *)0x0) {
        (pMVar1->fields).Color = __this_01;
        Il2CppCodeGenWriteBarrier(&(pMVar1->fields).Color);
        __this_02 = (MapEditor_MapEditorRuler_o *)(__this->fields)._measurements;
        if (__this_02 != (MapEditor_MapEditorRuler_o *)0x0) {
          pMVar1 = System_Collections_Generic_List_object___get_Item
                             ((System_Collections_Generic_List_object__o *)__this_02,index,
                              (MethodInfo_395CF20 *)
                              MethodInfo_System_Collections_Generic_List_RulerMeasurement_get_Item);
          MapEditor_MapEditorRuler__RefreshVisual(__this_02,pMVar1,method_00);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// MapEditor.MapEditorRuler$$Update
// il2cpp: void MapEditor_MapEditorRuler__Update (MapEditor_MapEditorRuler_o* __this, const MethodInfo* method);
// 0x5db7e50
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5db8182: xor esi, esi
// asm:   0x5db8184: call 0x5d96d90  ; UI_MapEditorMenu__SyncRulerPanel()
// asm:   0x5db8189: jmp 0x5db7fb8

void MapEditor_MapEditorRuler__Update(MapEditor_MapEditorRuler_o *__this,MethodInfo *method)

{
  MapEditor_RulerMeasurement_o **ppMVar1;
  Cameras_BaseCamera_o *pCVar2;
  UnityEngine_Camera_o *x;
  UI_MapEditorMenu_o *pUVar3;
  UnityEngine_Vector3_o point;
  UnityEngine_Vector3_o point_00;
  UnityEngine_Vector3_o point_01;
  System_Nullable_Vector3__o *pSVar4;
  float fVar5;
  bool bVar6;
  Utility_Color255_o *__this_00;
  MapEditor_RulerMeasurement_o *pMVar7;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *extraout_RDX;
  MethodInfo *method_06;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar8;
  MethodInfo *pMVar9;
  MapEditor_MapEditorRuler_o *__this_01;
  UnityEngine_Vector3_o UVar10;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o end;
  UnityEngine_Vector3_Fields local_78;
  UnityEngine_Vector3_Fields local_68;
  UnityEngine_Vector3_Fields local_58;
  undefined1 local_48 [16];
  System_Nullable_Vector3__Fields local_38;
  
  if (Il2CppMethodInitialized_07548133 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_07548133 = '\x01';
  }
  local_68.z = 0.0;
  local_68.x = 0.0;
  local_68.y = 0.0;
  local_58.z = 0.0;
  local_58.x = 0.0;
  local_58.y = 0.0;
  local_78.z = 0.0;
  local_78.x = 0.0;
  local_78.y = 0.0;
  if ((__this->fields)._Active_k__BackingField == false) {
    return;
  }
  pCVar2 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    return;
  }
  pCVar2 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  if (pCVar2 != (Cameras_BaseCamera_o *)0x0) {
    x = (pCVar2->fields).Camera;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    pMVar9 = (MethodInfo *)0x0;
    bVar6 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar6) {
      return;
    }
    MapEditor_MapEditorRuler__UpdateVisualScale(__this,pMVar9);
    pUVar3 = (__this->fields)._menu;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar6 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar6) {
      return;
    }
    pUVar3 = (__this->fields)._menu;
    if (pUVar3 != (UI_MapEditorMenu_o *)0x0) {
      bVar6 = UI_MapEditorMenu__IsPopupActive(pUVar3,(MethodInfo *)0x0);
      if (bVar6) {
        return;
      }
      pUVar3 = (__this->fields)._menu;
      if (pUVar3 != (UI_MapEditorMenu_o *)0x0) {
        if ((pUVar3->fields).IsMouseUI != false) {
          return;
        }
        pCVar2 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
        if (pCVar2 != (Cameras_BaseCamera_o *)0x0) {
          pMVar9 = (MethodInfo *)(pCVar2->fields).Camera;
          ppMVar1 = &(__this->fields)._pending;
          if ((__this->fields)._pending == (MapEditor_RulerMeasurement_o *)0x0) {
            if (((__this->fields)._awaitingFirstPoint != false) &&
               (bVar6 = UnityEngine_Input__GetMouseButtonDown(0,(MethodInfo *)0x0), bVar6)) {
              bVar6 = MapEditor_MapEditorRuler__TryGetPlacementPoint
                                ((UnityEngine_Camera_o *)pMVar9,(UnityEngine_Vector3_o *)&local_58,method_03);
              fVar5 = local_58.z;
              if (!bVar6) {
                return;
              }
              local_48._0_4_ = local_58.x;
              local_48._4_4_ = local_58.y;
              local_48._8_8_ = 0;
              __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
              Utility_Color255___ctor(__this_00,0xff,0xd2,0x28,0xff,(MethodInfo *)0x0);
              UVar10.fields.z = fVar5;
              UVar10.fields.x = (float)local_48._0_4_;
              UVar10.fields.y = (float)local_48._4_4_;
              end.fields.z = fVar5;
              end.fields.x = (float)local_48._0_4_;
              end.fields.y = (float)local_48._4_4_;
              pMVar7 = MapEditor_MapEditorRuler__AddMeasurement(__this,UVar10,end,__this_00,method_04);
              (__this->fields)._pending = pMVar7;
              Il2CppCodeGenWriteBarrier(ppMVar1);
              local_38.hasValue = false;
              local_38._1_3_ = 0;
              local_38.value.fields.x = 0.0;
              local_38.value.fields.y = 0.0;
              local_38.value.fields.z = 0.0;
              value.fields.z = fVar5;
              value.fields.x = (float)local_48._0_4_;
              value.fields.y = (float)local_48._4_4_;
              System_Nullable_Vector3____ctor
                        ((System_Nullable_Vector3__o *)&local_38,value,
                         (MethodInfo_3CDCAA0 *)MethodInfo_System_Nullable_Vector3_ctor);
              (__this->fields)._chainRoot.fields.hasValue = local_38.hasValue;
              *(undefined3 *)&(__this->fields)._chainRoot.fields.field_0x1 = local_38._1_3_;
              (__this->fields)._chainRoot.fields.value.fields.x = local_38.value.fields.x;
              pSVar4 = &(__this->fields)._chainRoot;
              (pSVar4->fields).value.fields.y = local_38.value.fields.y;
              (pSVar4->fields).value.fields.z = local_38.value.fields.z;
              (__this->fields)._awaitingFirstPoint = false;
              pUVar3 = (__this->fields)._menu;
              if (pUVar3 != (UI_MapEditorMenu_o *)0x0) {
                UI_MapEditorMenu__SyncRulerPanel(pUVar3,(MethodInfo *)0x0);
                return;
              }
              goto label_05db8295;
            }
            if ((__this->fields)._dragging == (MapEditor_RulerMeasurement_o *)0x0) {
              bVar6 = UnityEngine_Input__GetMouseButtonDown(0,(MethodInfo *)0x0);
              if (bVar6) {
                MapEditor_MapEditorRuler__TryBeginHandleDrag(__this,(UnityEngine_Camera_o *)pMVar9,method_06);
                return;
              }
              return;
            }
            ppMVar1 = &(__this->fields)._dragging;
            bVar6 = UnityEngine_Input__GetMouseButton(0,(MethodInfo *)0x0);
            if ((bVar6) &&
               (bVar6 = MapEditor_MapEditorRuler__TryGetPlacementPoint
                                  ((UnityEngine_Camera_o *)pMVar9,(UnityEngine_Vector3_o *)&local_78,method_05
                                  ), bVar6)) {
              pMVar7 = (__this->fields)._dragging;
              if ((__this->fields)._dragOrigin == false) {
                if (pMVar7 == (MapEditor_RulerMeasurement_o *)0x0) goto label_05db8295;
                point_00.fields.z = local_78.z;
                point_00.fields.x = local_78.x;
                point_00.fields.y = local_78.y;
                UVar10 = MapEditor_MapEditorRuler__ApplyPlacementConstraints
                                   ((UnityEngine_Vector3_o)(pMVar7->fields).Origin.fields,point_00,pMVar9);
                (pMVar7->fields).End.fields.x = UVar10.fields.x;
                (pMVar7->fields).End.fields.y = UVar10.fields.y;
                (pMVar7->fields).End.fields.z = UVar10.fields.z;
                pMVar8 = extraout_RDX_00;
              }
              else {
                if (pMVar7 == (MapEditor_RulerMeasurement_o *)0x0) goto label_05db8295;
                point.fields.z = local_78.z;
                point.fields.x = local_78.x;
                point.fields.y = local_78.y;
                UVar10 = MapEditor_MapEditorRuler__ApplyPlacementConstraints
                                   ((UnityEngine_Vector3_o)(pMVar7->fields).End.fields,point,pMVar9);
                (pMVar7->fields).Origin.fields.x = UVar10.fields.x;
                (pMVar7->fields).Origin.fields.y = UVar10.fields.y;
                (pMVar7->fields).Origin.fields.z = UVar10.fields.z;
                pMVar8 = extraout_RDX;
              }
              MapEditor_MapEditorRuler__RefreshVisual((MapEditor_MapEditorRuler_o *)pMVar9,*ppMVar1,pMVar8);
            }
            bVar6 = UnityEngine_Input__GetMouseButtonUp(0,(MethodInfo *)0x0);
            if (!bVar6) {
              return;
            }
            (__this->fields)._dragging = (MapEditor_RulerMeasurement_o *)0x0;
            Il2CppCodeGenWriteBarrier(ppMVar1);
          }
          else {
            pMVar8 = pMVar9;
            bVar6 = MapEditor_MapEditorRuler__TryGetPlacementPoint
                              ((UnityEngine_Camera_o *)pMVar9,(UnityEngine_Vector3_o *)&local_68,method_00);
            if (bVar6) {
              if (*ppMVar1 == (MapEditor_RulerMeasurement_o *)0x0) goto label_05db8295;
              point_01.fields.z = local_68.z;
              point_01.fields.x = local_68.x;
              point_01.fields.y = local_68.y;
              UVar10 = MapEditor_MapEditorRuler__ApplyPlacementConstraints
                                 ((UnityEngine_Vector3_o)((*ppMVar1)->fields).Origin.fields,point_01,pMVar8);
              local_68.z = UVar10.fields.z;
              local_68._0_8_ = UVar10.fields._0_8_;
              pMVar7 = (__this->fields)._pending;
              __this_01 = __this;
              UVar10 = MapEditor_MapEditorRuler__SnapToChainRoot
                                 (__this,(UnityEngine_Camera_o *)pMVar9,UVar10,method_01);
              if (pMVar7 == (MapEditor_RulerMeasurement_o *)0x0) goto label_05db8295;
              (pMVar7->fields).End.fields.x = UVar10.fields.x;
              (pMVar7->fields).End.fields.y = UVar10.fields.y;
              (pMVar7->fields).End.fields.z = UVar10.fields.z;
              MapEditor_MapEditorRuler__RefreshVisual(__this_01,*ppMVar1,method_02);
            }
            bVar6 = UnityEngine_Input__GetMouseButtonDown(0,(MethodInfo *)0x0);
            if (!bVar6) {
              return;
            }
            (__this->fields)._pending = (MapEditor_RulerMeasurement_o *)0x0;
            Il2CppCodeGenWriteBarrier(ppMVar1);
            (__this->fields)._chainRoot.fields.hasValue = false;
            *(undefined3 *)&(__this->fields)._chainRoot.fields.field_0x1 = 0;
            (__this->fields)._chainRoot.fields.value.fields.x = 0.0;
            pSVar4 = &(__this->fields)._chainRoot;
            (pSVar4->fields).value.fields.y = 0.0;
            (pSVar4->fields).value.fields.z = 0.0;
            (__this->fields)._creatingMeasurement = false;
          }
          pUVar3 = (__this->fields)._menu;
          if (pUVar3 != (UI_MapEditorMenu_o *)0x0) {
            UI_MapEditorMenu__SyncRulerPanel(pUVar3,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
label_05db8295:
  ThrowNullReferenceException();
}


// MapEditor.MapEditorRuler$$AddMeasurement
// il2cpp: MapEditor_RulerMeasurement_o* MapEditor_MapEditorRuler__AddMeasurement (MapEditor_MapEditorRuler_o* __this, UnityEngine_Vector3_o origin, UnityEngine_Vector3_o end, Utility_Color255_o* color, const MethodInfo* method);
// 0x5db72f0

MapEditor_RulerMeasurement_o *
MapEditor_MapEditorRuler__AddMeasurement
          (MapEditor_MapEditorRuler_o *__this,UnityEngine_Vector3_o origin,UnityEngine_Vector3_o end,
          Utility_Color255_o *color,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t r;
  int32_t g;
  int32_t b;
  int32_t a;
  uint uVar2;
  System_Collections_Generic_List_RulerMeasurement__o *__this_00;
  MapEditor_RulerMeasurement_array *pMVar3;
  MapEditor_RulerMeasurement_o *measurement;
  Utility_Color255_o *pUVar4;
  MethodInfo *method_00;
  MethodInfo *pMVar5;
  Utility_Color255_o **targetAddress;
  
  pMVar5 = (MethodInfo *)color;
  if (Il2CppMethodInitialized_07548134 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_RulerMeasurement_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MapEditor_RulerMeasurement);
    Il2CppMethodInitialized_07548134 = '\x01';
  }
  MapEditor_MapEditorRuler__EnsureRoot(__this,pMVar5);
  measurement = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_MapEditor_RulerMeasurement);
  if (Il2CppMethodInitialized_0754812d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    Il2CppMethodInitialized_0754812d = '\x01';
  }
  pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor(pUVar4,0xff,0xd2,0x28,0xff,(MethodInfo *)0x0);
  targetAddress = &(measurement->fields).Color;
  (measurement->fields).Color = pUVar4;
  Il2CppCodeGenWriteBarrier(targetAddress);
  System_Object___ctor((Il2CppObject *)measurement,(MethodInfo *)0x0);
  (measurement->fields).Origin.fields.x = origin.fields.x;
  (measurement->fields).Origin.fields.y = origin.fields.y;
  (measurement->fields).Origin.fields.z = origin.fields.z;
  (measurement->fields).End.fields.x = end.fields.x;
  (measurement->fields).End.fields.y = end.fields.y;
  (measurement->fields).End.fields.z = end.fields.z;
  if (color != (Utility_Color255_o *)0x0) {
    r = (color->fields).R;
    g = (color->fields).G;
    b = (color->fields).B;
    a = (color->fields).A;
    pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
    Utility_Color255___ctor(pUVar4,r,g,b,a,(MethodInfo *)0x0);
    (measurement->fields).Color = pUVar4;
    Il2CppCodeGenWriteBarrier(targetAddress);
    MapEditor_MapEditorRuler__CreateVisual(__this,measurement,method_00);
    pMVar5 = MethodInfo_System_Collections_Generic_List_RulerMeasurement_Add;
    __this_00 = (__this->fields)._measurements;
    if (__this_00 != (System_Collections_Generic_List_RulerMeasurement__o *)0x0) {
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pMVar3 = (__this_00->fields)._items;
      if (pMVar3 != (MapEditor_RulerMeasurement_array *)0x0) {
        uVar2 = (__this_00->fields)._size;
        if (uVar2 < (uint)pMVar3->max_length) {
          (__this_00->fields)._size = uVar2 + 1;
          pMVar3->m_Items[(int)uVar2] = measurement;
          Il2CppCodeGenWriteBarrier(pMVar3->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)measurement,
                     (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
        }
        return measurement;
      }
    }
  }
  ThrowNullReferenceException();
}


// MapEditor.MapEditorRuler$$CreateVisual
// il2cpp: void MapEditor_MapEditorRuler__CreateVisual (MapEditor_MapEditorRuler_o* __this, MapEditor_RulerMeasurement_o* measurement, const MethodInfo* method);
// 0x5db9340

void MapEditor_MapEditorRuler__CreateVisual
               (MapEditor_MapEditorRuler_o *__this,MapEditor_RulerMeasurement_o *measurement,
               MethodInfo *method)

{
  UnityEngine_GameObject_o **targetAddress;
  UnityEngine_LineRenderer_o **targetAddress_00;
  UnityEngine_TextMesh_o **targetAddress_01;
  UnityEngine_Renderer_o *__this_00;
  UnityEngine_GameObject_o *pUVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_LineRenderer_o *pUVar4;
  UnityEngine_Shader_o *shader;
  UnityEngine_Material_o *__this_01;
  UnityEngine_TextMesh_o *pUVar5;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MapEditor_MapEditorRuler_o *__this_02;
  
  if (Il2CppMethodInitialized_07548135 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LineRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_TextMesh);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material);
    il2cpp_codegen_initialize_runtime_metadata(&"Origin");
    il2cpp_codegen_initialize_runtime_metadata(&"LengthLabel");
    il2cpp_codegen_initialize_runtime_metadata(&"End");
    il2cpp_codegen_initialize_runtime_metadata(&"RulerMeasurement");
    Il2CppMethodInitialized_07548135 = '\x01';
  }
  pUVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor(pUVar1,"RulerMeasurement",(MethodInfo *)0x0);
  if (measurement != (MapEditor_RulerMeasurement_o *)0x0) {
    targetAddress = &(measurement->fields).Root;
    (measurement->fields).Root = pUVar1;
    Il2CppCodeGenWriteBarrier(targetAddress);
    pUVar1 = (measurement->fields).Root;
    if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
      pUVar2 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
      pUVar1 = (__this->fields)._root;
      if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
        pUVar3 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
        if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__SetParent_692d510(pUVar2,pUVar3,false,(MethodInfo *)0x0);
          if (*targetAddress != (UnityEngine_GameObject_o *)0x0) {
            pUVar4 = UnityEngine_GameObject__AddComponent_object_
                               (*targetAddress,
                                (MethodInfo_353B6A0 *)
                                MethodInfo_UnityEngine_GameObject_AddComponent_LineRenderer);
            targetAddress_00 = &(measurement->fields).Line;
            (measurement->fields).Line = pUVar4;
            Il2CppCodeGenWriteBarrier(targetAddress_00);
            pUVar4 = (measurement->fields).Line;
            if (pUVar4 != (UnityEngine_LineRenderer_o *)0x0) {
              UnityEngine_LineRenderer__set_useWorldSpace(pUVar4,true,(MethodInfo *)0x0);
              if (*targetAddress_00 != (UnityEngine_LineRenderer_o *)0x0) {
                UnityEngine_LineRenderer__set_positionCount(*targetAddress_00,2,(MethodInfo *)0x0);
                if (*targetAddress_00 != (UnityEngine_LineRenderer_o *)0x0) {
                  UnityEngine_LineRenderer__set_widthMultiplier(*targetAddress_00,0.12,(MethodInfo *)0x0);
                  method_01 = (MethodInfo *)*targetAddress_00;
                  if (method_01 != (MethodInfo *)0x0) {
                    UnityEngine_LineRenderer__set_numCapVertices
                              ((UnityEngine_LineRenderer_o *)method_01,4,(MethodInfo *)0x0);
                    __this_00 = (UnityEngine_Renderer_o *)*targetAddress_00;
                    shader = MapEditor_MapEditorRuler__GetVisualShader(method_01);
                    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Material);
                    UnityEngine_Material___ctor(__this_01,shader,(MethodInfo *)0x0);
                    if (__this_00 != (UnityEngine_Renderer_o *)0x0) {
                      UnityEngine_Renderer__set_material(__this_00,__this_01,(MethodInfo *)0x0);
                      if (*targetAddress != (UnityEngine_GameObject_o *)0x0) {
                        pUVar2 = UnityEngine_GameObject__get_transform(*targetAddress,(MethodInfo *)0x0);
                        pUVar2 = MapEditor_MapEditorRuler__CreateHandle
                                           (pUVar2,"Origin",3,
                                            (MethodInfo *)&"Origin");
                        (measurement->fields).OriginHandle = pUVar2;
                        Il2CppCodeGenWriteBarrier(&(measurement->fields).OriginHandle);
                        pUVar1 = (measurement->fields).Root;
                        if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
                          pUVar2 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
                          pUVar2 = MapEditor_MapEditorRuler__CreateHandle
                                             (pUVar2,"End",0,
                                              (MethodInfo *)&"End");
                          (measurement->fields).EndHandle = pUVar2;
                          Il2CppCodeGenWriteBarrier(&(measurement->fields).EndHandle);
                          pUVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
                          UnityEngine_GameObject___ctor(pUVar1,"LengthLabel",(MethodInfo *)0x0);
                          if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
                            pUVar2 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
                            if (*targetAddress != (UnityEngine_GameObject_o *)0x0) {
                              pUVar3 = UnityEngine_GameObject__get_transform(*targetAddress,(MethodInfo *)0x0)
                              ;
                              if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                                UnityEngine_Transform__SetParent_692d510
                                          (pUVar2,pUVar3,false,(MethodInfo *)0x0);
                                pUVar5 = UnityEngine_GameObject__AddComponent_object_
                                                   (pUVar1,(MethodInfo_353B6A0 *)
                                                                                                                      
                                                       MethodInfo_UnityEngine_GameObject_AddComponent_TextMesh
                                                   );
                                targetAddress_01 = &(measurement->fields).Label;
                                (measurement->fields).Label = pUVar5;
                                Il2CppCodeGenWriteBarrier(targetAddress_01);
                                pUVar5 = (measurement->fields).Label;
                                if (pUVar5 != (UnityEngine_TextMesh_o *)0x0) {
                                  UnityEngine_TextMesh__set_anchor(pUVar5,4,(MethodInfo *)0x0);
                                  if (*targetAddress_01 != (UnityEngine_TextMesh_o *)0x0) {
                                    UnityEngine_TextMesh__set_alignment(*targetAddress_01,1,(MethodInfo *)0x0)
                                    ;
                                    if (*targetAddress_01 != (UnityEngine_TextMesh_o *)0x0) {
                                      UnityEngine_TextMesh__set_fontSize
                                                (*targetAddress_01,0x30,(MethodInfo *)0x0);
                                      __this_02 = (MapEditor_MapEditorRuler_o *)*targetAddress_01;
                                      if (__this_02 != (MapEditor_MapEditorRuler_o *)0x0) {
                                        UnityEngine_TextMesh__set_characterSize
                                                  ((UnityEngine_TextMesh_o *)__this_02,0.1,(MethodInfo *)0x0);
                                        MapEditor_MapEditorRuler__RefreshVisual
                                                  (__this_02,measurement,method_00);
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


// MapEditor.MapEditorRuler$$CreateHandle
// il2cpp: UnityEngine_Transform_o* MapEditor_MapEditorRuler__CreateHandle (UnityEngine_Transform_o* parent, System_String_o* name, int32_t primitiveType, const MethodInfo* method);
// 0x5db9760

UnityEngine_Transform_o *
MapEditor_MapEditorRuler__CreateHandle
          (UnityEngine_Transform_o *parent,System_String_o *name,int32_t primitiveType,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *__this;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_Object_o *x;
  UnityEngine_Renderer_o *__this_00;
  UnityEngine_Shader_o *shader;
  UnityEngine_Material_o *__this_01;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07548136 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Collider);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Renderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07548136 = '\x01';
  }
  __this = (MethodInfo *)UnityEngine_GameObject__CreatePrimitive(primitiveType,(MethodInfo *)0x0);
  if (__this != (MethodInfo *)0x0) {
    UnityEngine_Object__set_name((UnityEngine_Object_o *)__this,name,(MethodInfo *)0x0);
    pUVar2 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)__this,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__SetParent_692d510(pUVar2,parent,false,(MethodInfo *)0x0);
      x = (UnityEngine_Object_o *)
          UnityEngine_GameObject__GetComponent_object_
                    ((UnityEngine_GameObject_o *)__this,
                     (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Collider);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_69214e0(x,(MethodInfo *)0x0);
      }
      method_00 = __this;
      __this_00 = UnityEngine_GameObject__GetComponent_object_
                            ((UnityEngine_GameObject_o *)__this,
                             (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Renderer);
      shader = MapEditor_MapEditorRuler__GetVisualShader(method_00);
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Material);
      UnityEngine_Material___ctor(__this_01,shader,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Renderer_o *)0x0) {
        UnityEngine_Renderer__set_material(__this_00,__this_01,(MethodInfo *)0x0);
        pUVar2 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)__this,(MethodInfo *)0x0);
        return pUVar2;
      }
    }
  }
  ThrowNullReferenceException();
}


// MapEditor.MapEditorRuler$$GetVisualShader
// il2cpp: UnityEngine_Shader_o* MapEditor_MapEditorRuler__GetVisualShader (const MethodInfo* method);
// 0x5db9690

UnityEngine_Shader_o * MapEditor_MapEditorRuler__GetVisualShader(MethodInfo *method)

{
  UnityEngine_Object_o *x;
  bool bVar1;
  UnityEngine_Shader_o *pUVar2;
  
  if (Il2CppMethodInitialized_07548137 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MapEditor_MapEditorRuler);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Resources_Load_Shader);
    il2cpp_codegen_initialize_runtime_metadata(&"Shaders/GizmoShader");
    Il2CppMethodInitialized_07548137 = '\x01';
  }
  x = (UnityEngine_Object_o *)TypeInfo_MapEditor_MapEditorRuler->static_fields->_visualShader;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar2 = UnityEngine_Resources__Load_object_
                       ("Shaders/GizmoShader",
                        (MethodInfo_3665C30 *)MethodInfo_UnityEngine_Resources_Load_Shader);
    TypeInfo_MapEditor_MapEditorRuler->static_fields->_visualShader = pUVar2;
    Il2CppCodeGenWriteBarrier(&TypeInfo_MapEditor_MapEditorRuler->static_fields->_visualShader);
  }
  return TypeInfo_MapEditor_MapEditorRuler->static_fields->_visualShader;
}


// MapEditor.MapEditorRuler$$RefreshVisual
// il2cpp: void MapEditor_MapEditorRuler__RefreshVisual (MapEditor_MapEditorRuler_o* __this, MapEditor_RulerMeasurement_o* measurement, const MethodInfo* method);
// 0x5db76a0

void MapEditor_MapEditorRuler__RefreshVisual
               (MapEditor_MapEditorRuler_o *__this,MapEditor_RulerMeasurement_o *measurement,
               MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar6;
  undefined8 uVar5;
  undefined4 uVar7;
  undefined4 uVar8;
  uint32_t uVar9;
  UnityEngine_Object_o *x;
  Utility_Color255_o *__this_00;
  UnityEngine_LineRenderer_o *pUVar10;
  UnityEngine_TextMesh_o *pUVar11;
  UnityEngine_Component_o *__this_01;
  bool bVar12;
  UnityEngine_Material_o *pUVar13;
  UnityEngine_Renderer_o *pUVar14;
  System_String_o *pSVar15;
  UnityEngine_Transform_o *pUVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  UnityEngine_Color_o value;
  UnityEngine_Vector3_o value_00;
  float local_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  
  if (Il2CppMethodInitialized_07548138 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Renderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"0.###");
    il2cpp_codegen_initialize_runtime_metadata(&" u");
    Il2CppMethodInitialized_07548138 = '\x01';
  }
  if (measurement != (MapEditor_RulerMeasurement_o *)0x0) {
    x = (UnityEngine_Object_o *)(measurement->fields).Root;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar12 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar12) {
      return;
    }
    __this_00 = (measurement->fields).Color;
    if (__this_00 != (Utility_Color255_o *)0x0) {
      value = Utility_Color255__ToColor(__this_00,(MethodInfo *)0x0);
      pUVar10 = (measurement->fields).Line;
      if (pUVar10 != (UnityEngine_LineRenderer_o *)0x0) {
        UnityEngine_LineRenderer__set_startColor(pUVar10,value,(MethodInfo *)0x0);
        pUVar10 = (measurement->fields).Line;
        if (pUVar10 != (UnityEngine_LineRenderer_o *)0x0) {
          UnityEngine_LineRenderer__set_endColor(pUVar10,value,(MethodInfo *)0x0);
          pUVar14 = (UnityEngine_Renderer_o *)(measurement->fields).Line;
          if ((pUVar14 != (UnityEngine_Renderer_o *)0x0) &&
             (pUVar13 = UnityEngine_Renderer__get_material(pUVar14,(MethodInfo *)0x0),
             pUVar13 != (UnityEngine_Material_o *)0x0)) {
            UnityEngine_Material__set_color(pUVar13,value,(MethodInfo *)0x0);
            pUVar10 = (measurement->fields).Line;
            if (pUVar10 != (UnityEngine_LineRenderer_o *)0x0) {
              UnityEngine_LineRenderer__SetPosition
                        (pUVar10,0,(UnityEngine_Vector3_o)(measurement->fields).Origin.fields,
                         (MethodInfo *)0x0);
              pUVar10 = (measurement->fields).Line;
              if (pUVar10 != (UnityEngine_LineRenderer_o *)0x0) {
                UnityEngine_LineRenderer__SetPosition
                          (pUVar10,1,(UnityEngine_Vector3_o)(measurement->fields).End.fields,(MethodInfo *)0x0
                          );
                pUVar16 = (measurement->fields).OriginHandle;
                if (pUVar16 != (UnityEngine_Transform_o *)0x0) {
                  UnityEngine_Transform__set_position
                            (pUVar16,(UnityEngine_Vector3_o)(measurement->fields).Origin.fields,
                             (MethodInfo *)0x0);
                  pUVar16 = (measurement->fields).EndHandle;
                  if (pUVar16 != (UnityEngine_Transform_o *)0x0) {
                    UnityEngine_Transform__set_position
                              (pUVar16,(UnityEngine_Vector3_o)(measurement->fields).End.fields,
                               (MethodInfo *)0x0);
                    pUVar16 = (measurement->fields).OriginHandle;
                    if (((pUVar16 != (UnityEngine_Transform_o *)0x0) &&
                        (pUVar14 = UnityEngine_Component__GetComponent_object_
                                             ((UnityEngine_Component_o *)pUVar16,
                                              (MethodInfo_34B0830 *)
                                              MethodInfo_UnityEngine_Component_GetComponent_Renderer),
                        pUVar14 != (UnityEngine_Renderer_o *)0x0)) &&
                       (pUVar13 = UnityEngine_Renderer__get_material(pUVar14,(MethodInfo *)0x0),
                       pUVar13 != (UnityEngine_Material_o *)0x0)) {
                      UnityEngine_Material__set_color(pUVar13,value,(MethodInfo *)0x0);
                      pUVar16 = (measurement->fields).EndHandle;
                      if (((pUVar16 != (UnityEngine_Transform_o *)0x0) &&
                          (pUVar14 = UnityEngine_Component__GetComponent_object_
                                               ((UnityEngine_Component_o *)pUVar16,
                                                (MethodInfo_34B0830 *)
                                                MethodInfo_UnityEngine_Component_GetComponent_Renderer),
                          pUVar14 != (UnityEngine_Renderer_o *)0x0)) &&
                         (pUVar13 = UnityEngine_Renderer__get_material(pUVar14,(MethodInfo *)0x0),
                         pUVar13 != (UnityEngine_Material_o *)0x0)) {
                        UnityEngine_Material__set_color(pUVar13,value,(MethodInfo *)0x0);
                        pUVar11 = (measurement->fields).Label;
                        if (pUVar11 != (UnityEngine_TextMesh_o *)0x0) {
                          UnityEngine_TextMesh__set_color(pUVar11,value,(MethodInfo *)0x0);
                          pUVar11 = (measurement->fields).Label;
                          uVar2 = (measurement->fields).Origin.fields.x;
                          uVar6 = (measurement->fields).Origin.fields.y;
                          fVar17 = (measurement->fields).Origin.fields.z;
                          uVar5._0_4_ = (measurement->fields).End.fields.x;
                          uVar5._4_4_ = (measurement->fields).End.fields.y;
                          uVar20 = 0;
                          uVar21 = 0;
                          fVar1 = (measurement->fields).End.fields.z;
                          if (Il2CppMethodInitialized_0753e7b7 == '\0') {
                            uStack_20 = 0;
                            local_28 = uVar5;
                            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
                            Il2CppMethodInitialized_0753e7b7 = '\x01';
                            uVar9 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
                            fVar18 = (float)local_28;
                            fVar19 = local_28._4_4_;
                            uVar20 = (undefined4)uStack_20;
                            uVar21 = uStack_20._4_4_;
                          }
                          else {
                            uVar9 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
                            fVar18 = (float)(undefined4)uVar5;
                            fVar19 = (float)uVar5._4_4_;
                          }
                          if (uVar9 == 0) {
                            local_28 = CONCAT44(fVar19,fVar18);
                            uStack_20 = CONCAT44(uVar21,uVar20);
                            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
                            fVar18 = (float)local_28;
                            fVar19 = local_28._4_4_;
                          }
                          fVar17 = fVar17 - fVar1;
                          local_2c = fVar17 * fVar17 +
                                     ((float)uVar6 - fVar19) * ((float)uVar6 - fVar19) +
                                     ((float)uVar2 - fVar18) * ((float)uVar2 - fVar18);
                          if (local_2c < 0.0) {
                            local_2c = sqrtf(local_2c);
                          }
                          else {
                            local_2c = SQRT(local_2c);
                          }
                          pSVar15 = System_Single__ToString_54d0a60
                                              (&local_2c,"0.###",(MethodInfo *)0x0);
                          pSVar15 = System_String__Concat_52f0320
                                              (pSVar15," u",(MethodInfo *)0x0);
                          if (pUVar11 != (UnityEngine_TextMesh_o *)0x0) {
                            UnityEngine_TextMesh__set_text(pUVar11,pSVar15,(MethodInfo *)0x0);
                            __this_01 = (UnityEngine_Component_o *)(measurement->fields).Label;
                            if ((__this_01 != (UnityEngine_Component_o *)0x0) &&
                               (pUVar16 = UnityEngine_Component__get_transform(__this_01,(MethodInfo *)0x0),
                               pUVar16 != (UnityEngine_Transform_o *)0x0)) {
                              uVar3 = (measurement->fields).Origin.fields.x;
                              uVar7 = (measurement->fields).Origin.fields.y;
                              uVar4 = (measurement->fields).End.fields.x;
                              uVar8 = (measurement->fields).End.fields.y;
                              value_00.fields.x = ((float)uVar4 - (float)uVar3) * 0.5 + (float)uVar3;
                              value_00.fields.y = ((float)uVar8 - (float)uVar7) * 0.5 + (float)uVar7;
                              fVar17 = (measurement->fields).Origin.fields.z;
                              value_00.fields.z = ((measurement->fields).End.fields.z - fVar17) * 0.5 + fVar17
                              ;
                              UnityEngine_Transform__set_position(pUVar16,value_00,(MethodInfo *)0x0);
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
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// MapEditor.MapEditorRuler$$UpdateVisualScale
// il2cpp: void MapEditor_MapEditorRuler__UpdateVisualScale (MapEditor_MapEditorRuler_o* __this, const MethodInfo* method);
// 0x5db82a0
// eh: try 0x5db83aa..0x5db8745 -> pad 0x5db8789 (+34 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5db87a1..0x5db87a6 -> pad 0x5db87cb cleanup
// eh: try 0x5db87ce..0x5db87d8 -> pad 0x5db87e0 catch (...) [compiler noexcept guard]
// asm: 58 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5db8436: jmp 0x5db845b
// asm:   0x5db8745: jmp 0x5db8789
// asm:   0x5db8747: jmp 0x5db8789
// asm:   0x5db8749: jmp 0x5db8789
// asm:   0x5db874b: jmp 0x5db8789
// asm:   0x5db874d: jmp 0x5db8789
// asm:   0x5db874f: jmp 0x5db8789
// asm:   0x5db8751: jmp 0x5db8789
// asm:   0x5db8753: jmp 0x5db8789
// asm:   0x5db8755: jmp 0x5db8789
// asm:   0x5db8757: jmp 0x5db8789
// asm:   0x5db8759: jmp 0x5db8789
// asm:   0x5db875b: jmp 0x5db8789
// asm:   0x5db875d: jmp 0x5db8789
// asm:   0x5db875f: jmp 0x5db8789
// asm:   0x5db8761: jmp 0x5db8789
// asm:   0x5db8763: jmp 0x5db8789
// asm:   0x5db8765: jmp 0x5db8789
// asm:   0x5db8767: jmp 0x5db8789
// asm:   0x5db8769: jmp 0x5db8789
// asm:   0x5db876b: jmp 0x5db8789
// asm:   0x5db876d: jmp 0x5db8789
// asm:   0x5db876f: jmp 0x5db8789
// asm:   0x5db8771: jmp 0x5db8789
// asm:   0x5db8773: jmp 0x5db8789
// asm:   0x5db8775: jmp 0x5db8789
// asm:   0x5db8777: jmp 0x5db8789
// asm:   0x5db8779: jmp 0x5db8789
// asm:   0x5db877b: jmp 0x5db8789
// asm:   0x5db877d: jmp 0x5db8789
// asm:   0x5db877f: jmp 0x5db8789
// asm:   0x5db8781: jmp 0x5db8789
// asm:   0x5db8783: jmp 0x5db8789
// asm:   0x5db8785: jmp 0x5db8789
// asm:   0x5db8787: jmp 0x5db8789
// asm:   0x5db8789: mov rbx, rax
// asm:   0x5db878c: cmp edx, 1
// asm:   0x5db878f: jne 0x5db87ce
// asm:   0x5db8791: mov rdi, rbx
// asm:   0x5db8794: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5db8799: mov rbx, qword ptr [rax]
// asm:   0x5db879c: mov qword ptr [rsp + 0x38], rbx
// asm:   0x5db87a1: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5db87a6: lea rax, [rip + 0x14d61b3]  ; MethodInfo_System_Collections_Generic_List_Enumerator_RulerMeasurement_Dispose
// asm:   0x5db87ad: mov rsi, qword ptr [rax]
// asm:   0x5db87b0: lea rdi, [rsp + 0x20]
// asm:   0x5db87b5: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5db87ba: test rbx, rbx
// asm:   0x5db87bd: je 0x5db86f0
// asm:   0x5db87c3: mov rdi, rbx
// asm:   0x5db87c6: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5db87cb: mov rbx, rax
// asm:   0x5db87ce: lea rdi, [rsp + 0x38]
// asm:   0x5db87d3: call 0x2fde050  ; il2cpp_runtime_helper_02fde050()
// asm:   0x5db87d8: mov rdi, rbx
// asm:   0x5db87db: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5db87e0: mov rdi, rax
// asm:   0x5db87e3: call 0x2ab61e0  ; __clang_call_terminate()

void MapEditor_MapEditorRuler__UpdateVisualScale(MapEditor_MapEditorRuler_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint32_t uVar7;
  Cameras_BaseCamera_o *pCVar8;
  System_Collections_Generic_List_RulerMeasurement__o *__this_00;
  UnityEngine_Camera_o *__this_01;
  Il2CppClass *__this_02;
  UnityEngine_Vector3_StaticFields *pUVar9;
  Il2CppObject *pIVar10;
  bool bVar11;
  int32_t iVar12;
  UnityEngine_Transform_o *pUVar13;
  UnityEngine_Transform_o *__this_03;
  float fVar14;
  float fVar15;
  undefined4 extraout_XMM0_Db;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Dc;
  undefined4 uVar17;
  undefined4 extraout_XMM0_Dd;
  undefined4 uVar18;
  UnityEngine_Quaternion_o value;
  UnityEngine_Vector3_o UVar19;
  UnityEngine_Vector3_o UVar20;
  UnityEngine_Vector3_o value_00;
  System_Collections_Generic_List_Enumerator_object__o local_88;
  undefined1 local_70 [16];
  Il2CppObject *local_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  float fStack_40;
  float fStack_3c;
  
  if (Il2CppMethodInitialized_07548139 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_RulerMeasurement_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_RulerMeasurement_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_RulerMeasurement_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_RulerMeasurement_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_07548139 = '\x01';
  }
  local_88.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_88.fields._index = 0;
  local_88.fields._version = 0;
  local_88.fields._current = (Il2CppObject *)0x0;
  pCVar8 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  if ((pCVar8 == (Cameras_BaseCamera_o *)0x0) ||
     (__this_00 = (__this->fields)._measurements,
     __this_00 == (System_Collections_Generic_List_RulerMeasurement__o *)0x0)) {
    ThrowNullReferenceException();
  }
  __this_01 = (pCVar8->fields).Camera;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_70,
             (System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_RulerMeasurement_GetEnumerator);
  local_88.fields._current = local_60;
  local_88.fields._list = (System_Collections_Generic_List_T__o *)local_70._0_8_;
  local_88.fields._index = local_70._8_4_;
  local_88.fields._version = local_70._12_4_;
  local_70._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_70._8_8_ = &local_88;
  if (__this_01 == (UnityEngine_Camera_o *)0x0) {
    bVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext
                       (&local_88,
                        (MethodInfo_4C45C50 *)
                        MethodInfo_System_Collections_Generic_List_Enumerator_RulerMeasurement_MoveNext);
    if (bVar11) {
      ThrowNullReferenceException();
    }
  }
  else {
    while (bVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (&local_88,
                               (MethodInfo_4C45C50 *)
                               MethodInfo_System_Collections_Generic_List_Enumerator_RulerMeasurement_MoveNext
                              ), pIVar10 = local_88.fields._current, bVar11) {
      pUVar13 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
      if (pUVar13 == (UnityEngine_Transform_o *)0x0) {
        ThrowNullReferenceException();
      }
      UVar19 = UnityEngine_Transform__get_position(pUVar13,(MethodInfo *)0x0);
      local_48 = UVar19.fields._0_8_;
      if (pIVar10 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      if (pIVar10[5].klass == (Il2CppClass *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar13 = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)pIVar10[5].klass,(MethodInfo *)0x0);
      if (pUVar13 == (UnityEngine_Transform_o *)0x0) {
        ThrowNullReferenceException();
      }
      UVar20 = UnityEngine_Transform__get_position(pUVar13,(MethodInfo *)0x0);
      local_58 = UVar20.fields._0_8_;
      if (Il2CppMethodInitialized_0753e7b7 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
        Il2CppMethodInitialized_0753e7b7 = '\x01';
        uVar7 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
      }
      else {
        uVar7 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
      }
      if (uVar7 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      }
      fVar14 = UVar19.fields.z - UVar20.fields.z;
      fVar14 = fVar14 * fVar14 +
               (local_48._4_4_ - local_58._4_4_) * (local_48._4_4_ - local_58._4_4_) +
               ((float)local_48 - (float)local_58) * ((float)local_48 - (float)local_58);
      if (fVar14 < 0.0) {
        fVar14 = sqrtf(fVar14);
      }
      else {
        fVar14 = SQRT(fVar14);
      }
      bVar11 = UnityEngine_Camera__get_orthographic(__this_01,(MethodInfo *)0x0);
      if (bVar11) {
        fVar15 = UnityEngine_Camera__get_orthographicSize(__this_01,(MethodInfo *)0x0);
        iVar12 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
        fVar14 = 1.0;
        if (1.0 <= (float)iVar12) {
          fVar14 = (float)iVar12;
        }
        fVar15 = (fVar15 / fVar14) * 3.0;
        uVar16 = extraout_XMM0_Db;
        uVar17 = extraout_XMM0_Dc;
        uVar18 = extraout_XMM0_Dd;
      }
      else {
        uVar16 = 0;
        uVar17 = 0;
        uVar18 = 0;
        fVar15 = 0.05;
        if (0.05 <= fVar14 * 0.008) {
          uVar16 = 0;
          uVar17 = 0;
          uVar18 = 0;
          fVar15 = fVar14 * 0.008;
        }
      }
      local_58 = CONCAT44(uVar16,fVar15 * 2.5);
      _uStack_50 = CONCAT44(uVar18,uVar17);
      __this_02 = pIVar10[4].klass;
      if (Il2CppMethodInitialized_0753e4b7 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_0753e4b7 = '\x01';
      }
      if (__this_02 == (Il2CppClass *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar9 = TypeInfo_UnityEngine_Vector3->static_fields;
      UVar19.fields.z = (pUVar9->oneVector).fields.z * fVar15;
      uVar1 = (pUVar9->oneVector).fields.x;
      uVar4 = (pUVar9->oneVector).fields.y;
      local_48 = CONCAT44(fVar15,fVar15);
      _fStack_40 = CONCAT44(fVar15,fVar15);
      UVar19.fields.x = (float)uVar1 * fVar15;
      UVar19.fields.y = (float)uVar4 * fVar15;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)__this_02,UVar19,(MethodInfo *)0x0);
      pUVar13 = pIVar10[4].monitor;
      if (Il2CppMethodInitialized_0753e4b7 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_0753e4b7 = '\x01';
      }
      if (pUVar13 == (UnityEngine_Transform_o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar9 = TypeInfo_UnityEngine_Vector3->static_fields;
      UVar20.fields.z = (pUVar9->oneVector).fields.z * fVar15;
      uVar2 = (pUVar9->oneVector).fields.x;
      uVar5 = (pUVar9->oneVector).fields.y;
      UVar20.fields.x = (float)local_48 * (float)uVar2;
      UVar20.fields.y = local_48._4_4_ * (float)uVar5;
      UnityEngine_Transform__set_localScale(pUVar13,UVar20,(MethodInfo *)0x0);
      if (pIVar10[3].monitor == (UnityEngine_LineRenderer_o *)0x0) {
        ThrowNullReferenceException();
      }
      UnityEngine_LineRenderer__set_widthMultiplier(pIVar10[3].monitor,fVar15 * 0.22,(MethodInfo *)0x0);
      if (pIVar10[5].klass == (Il2CppClass *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar13 = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)pIVar10[5].klass,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_0753e4b7 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_0753e4b7 = '\x01';
      }
      if (pUVar13 == (UnityEngine_Transform_o *)0x0) {
        ThrowNullReferenceException();
      }
      fVar14 = 25.0;
      if ((float)local_58 <= 25.0) {
        fVar14 = (float)local_58;
      }
      fVar14 = (float)(~-(uint)(0.15 <= (float)local_58) & 0x3e19999a |
                      (uint)fVar14 & -(uint)(0.15 <= (float)local_58));
      pUVar9 = TypeInfo_UnityEngine_Vector3->static_fields;
      value_00.fields.z = (pUVar9->oneVector).fields.z * fVar14;
      uVar3 = (pUVar9->oneVector).fields.x;
      uVar6 = (pUVar9->oneVector).fields.y;
      value_00.fields.x = fVar14 * (float)uVar3;
      value_00.fields.y = fVar14 * (float)uVar6;
      UnityEngine_Transform__set_localScale(pUVar13,value_00,(MethodInfo *)0x0);
      if (pIVar10[5].klass == (Il2CppClass *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar13 = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)pIVar10[5].klass,(MethodInfo *)0x0);
      __this_03 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0)
      ;
      if (__this_03 == (UnityEngine_Transform_o *)0x0) {
        ThrowNullReferenceException();
      }
      value = UnityEngine_Transform__get_rotation(__this_03,(MethodInfo *)0x0);
      if (pUVar13 == (UnityEngine_Transform_o *)0x0) {
        ThrowNullReferenceException();
      }
      UnityEngine_Transform__set_rotation(pUVar13,value,(MethodInfo *)0x0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose
            (&local_88,
             (MethodInfo_4C45C40 *)
             MethodInfo_System_Collections_Generic_List_Enumerator_RulerMeasurement_Dispose);
  return;
}


// MapEditor.MapEditorRuler$$ApplyPlacementConstraints
// il2cpp: UnityEngine_Vector3_o MapEditor_MapEditorRuler__ApplyPlacementConstraints (UnityEngine_Vector3_o origin, UnityEngine_Vector3_o point, const MethodInfo* method);
// 0x5db8890
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5db8bef: jmp 0x5db8cbc

UnityEngine_Vector3_o
MapEditor_MapEditorRuler__ApplyPlacementConstraints
          (UnityEngine_Vector3_o origin,UnityEngine_Vector3_o point,MethodInfo *method)

{
  uint32_t uVar1;
  Settings_InputSettings_o *pSVar2;
  Settings_MapEditorInputSettings_o *pSVar3;
  Settings_KeybindSetting_o *pSVar4;
  Settings_MapEditorSettings_o *pSVar5;
  Settings_FloatSetting_o *pSVar6;
  double dVar7;
  bool bVar8;
  MethodInfo *pMVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Db;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined1 auVar12 [16];
  float fVar13;
  undefined4 in_XMM2_Dc;
  undefined4 in_XMM2_Dd;
  UnityEngine_Vector3_o UVar14;
  double local_70;
  float local_68;
  undefined1 local_58 [8];
  float fStack_50;
  float fStack_4c;
  undefined1 local_48 [16];
  float local_2c;
  undefined1 local_28 [8];
  float fStack_20;
  float fStack_1c;
  
  local_68 = point.fields.z;
  local_2c = origin.fields.z;
  fStack_50 = (float)in_XMM2_Dc;
  local_58 = (undefined1  [8])point.fields._0_8_;
  fStack_4c = (float)in_XMM2_Dd;
  fStack_20 = (float)in_XMM0_Dc;
  local_28 = (undefined1  [8])origin.fields._0_8_;
  fStack_1c = (float)in_XMM0_Dd;
  if (Il2CppMethodInitialized_0754813a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    Il2CppMethodInitialized_0754813a = '\x01';
  }
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
  if (((pSVar2 == (Settings_InputSettings_o *)0x0) ||
      (pSVar3 = (pSVar2->fields).MapEditor, pSVar3 == (Settings_MapEditorInputSettings_o *)0x0)) ||
     (pSVar4 = (pSVar3->fields).Fast, pSVar4 == (Settings_KeybindSetting_o *)0x0)) {
label_05db8df5:
    ThrowNullReferenceException();
  }
  local_58._4_4_ = (float)local_58._4_4_ - (float)local_28._4_4_;
  local_58._0_4_ = (float)local_58._0_4_ - (float)local_28._0_4_;
  fStack_50 = fStack_50 - fStack_20;
  fStack_4c = fStack_4c - fStack_1c;
  local_68 = local_68 - local_2c;
  pMVar9 = (MethodInfo *)0x0;
  bVar8 = Settings_KeybindSetting__GetKey(pSVar4,false,(MethodInfo *)0x0);
  if (bVar8) {
    if (Il2CppMethodInitialized_0753e7b5 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_0753e7b5 = '\x01';
      uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    fVar10 = local_68 * local_68 + (float)local_58._0_4_ * (float)local_58._0_4_;
    if (fVar10 < 0.0) {
      fVar10 = sqrtf(fVar10);
    }
    else {
      fVar10 = SQRT(fVar10);
    }
    local_48._0_4_ = fVar10;
    fVar10 = atan2f(local_68,(float)local_58._0_4_);
    local_68 = (fVar10 * 57.29578) / 45.0;
    dVar7 = modf((double)local_68,&local_70,pMVar9);
    if (0.0 <= local_68) {
      if ((dVar7 != 0.5) || (NAN(dVar7))) {
        fVar10 = floorf(local_68 + 0.5);
      }
      else {
        fVar10 = (float)local_70;
        if (((long)local_70 & 1U) != 0) {
          fVar10 = fVar10 + 1.0;
        }
      }
    }
    else if ((dVar7 != -0.5) || (NAN(dVar7))) {
      fVar10 = ceilf(local_68 + -0.5);
    }
    else {
      fVar10 = (float)local_70;
      if (((long)local_70 & 1U) != 0) {
        fVar10 = fVar10 + -1.0;
      }
    }
    fVar10 = fVar10 * 45.0 * 0.017453292;
    local_58._0_4_ = fVar10;
    local_68 = cosf(fVar10);
    fVar10 = sinf((float)local_58._0_4_);
    fVar13 = local_68 * (float)local_48._0_4_;
    local_68 = fVar10 * (float)local_48._0_4_;
    _local_58 = ZEXT416((uint)fVar13);
  }
  pSVar4 = (pSVar3->fields).Slow;
  if (pSVar4 == (Settings_KeybindSetting_o *)0x0) goto label_05db8df5;
  pMVar9 = (MethodInfo *)0x0;
  bVar8 = Settings_KeybindSetting__GetKey(pSVar4,false,(MethodInfo *)0x0);
  if (!bVar8) goto label_05db8dd7;
  pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->MapEditorSettings;
  if ((pSVar5 == (Settings_MapEditorSettings_o *)0x0) ||
     (pSVar6 = (pSVar5->fields).SnapMove, pSVar6 == (Settings_FloatSetting_o *)0x0)) goto label_05db8df5;
  fVar10 = (pSVar6->fields)._value;
  if (fVar10 <= 0.0001) goto label_05db8dd7;
  local_48 = ZEXT416((uint)fVar10);
  fVar10 = local_68 * local_68 +
           (float)local_58._4_4_ * (float)local_58._4_4_ + (float)local_58._0_4_ * (float)local_58._0_4_;
  if (fVar10 <= 0.0001) goto label_05db8dd7;
  if (Il2CppMethodInitialized_0753e72d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72d = '\x01';
    if (Il2CppMethodInitialized_0753e729 != '\0') goto label_05db8b86;
label_05db8c23:
    local_70 = 0.0;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor != 0) goto label_05db8b9d;
label_05db8c53:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    if (0.0 <= fVar10) goto label_05db8ba9;
label_05db8c6a:
    fVar13 = sqrtf(fVar10);
    uVar11 = extraout_XMM0_Db;
    if (fVar13 <= 1e-05) goto label_05db8bbd;
label_05db8c85:
    local_68 = local_68 / fVar13;
    auVar12._4_4_ = fVar13;
    auVar12._0_4_ = fVar13;
    auVar12._8_4_ = uVar11;
    auVar12._12_4_ = uVar11;
    auVar12 = divps(_local_58,auVar12);
    local_70 = auVar12._0_8_;
    dVar7 = local_70;
  }
  else {
    if (Il2CppMethodInitialized_0753e729 == '\0') goto label_05db8c23;
label_05db8b86:
    local_70 = 0.0;
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) goto label_05db8c53;
label_05db8b9d:
    if (fVar10 < 0.0) goto label_05db8c6a;
label_05db8ba9:
    uVar11 = 0;
    fVar13 = SQRT(fVar10);
    if (1e-05 < fVar13) goto label_05db8c85;
label_05db8bbd:
    local_68 = (TypeInfo_UnityEngine_Vector3->static_fields->zeroVector).fields.z;
    dVar7 = *(double *)&(TypeInfo_UnityEngine_Vector3->static_fields->zeroVector).fields;
  }
  unique0x100009df = 0;
  local_58 = (undefined1  [8])dVar7;
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
  }
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    if (0.0 <= fVar10) goto label_05db8ce9;
label_05db8d05:
    fVar10 = sqrtf(fVar10);
  }
  else {
    if (fVar10 < 0.0) goto label_05db8d05;
label_05db8ce9:
    fVar10 = SQRT(fVar10);
  }
  fVar10 = fVar10 / (float)local_48._0_4_;
  dVar7 = modf((double)fVar10,&local_70,pMVar9);
  if (0.0 <= fVar10) {
    if ((dVar7 != 0.5) || (NAN(dVar7))) {
      fVar10 = floorf(fVar10 + 0.5);
    }
    else {
      fVar10 = (float)local_70;
      if (((long)local_70 & 1U) != 0) {
        fVar10 = fVar10 + 1.0;
      }
    }
  }
  else if ((dVar7 != -0.5) || (NAN(dVar7))) {
    fVar10 = ceilf(fVar10 + -0.5);
  }
  else {
    fVar10 = (float)local_70;
    if (((long)local_70 & 1U) != 0) {
      fVar10 = fVar10 + -1.0;
    }
  }
  fVar10 = (float)local_48._0_4_ * fVar10;
  local_68 = local_68 * fVar10;
  local_58._4_4_ = (float)local_58._4_4_ * fVar10;
  local_58._0_4_ = (float)local_58._0_4_ * fVar10;
label_05db8dd7:
  UVar14.fields.x = (float)local_58._0_4_ + (float)local_28._0_4_;
  UVar14.fields.y = (float)local_58._4_4_ + (float)local_28._4_4_;
  UVar14.fields.z = local_68 + local_2c;
  return (UnityEngine_Vector3_o)UVar14.fields;
}


// MapEditor.MapEditorRuler$$TryBeginHandleDrag
// il2cpp: void MapEditor_MapEditorRuler__TryBeginHandleDrag (MapEditor_MapEditorRuler_o* __this, UnityEngine_Camera_o* camera, const MethodInfo* method);
// 0x5db8f60
// eh: try 0x5db9053..0x5db92b0 -> pad 0x5db92d2 (+7 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5db92ea..0x5db92ef -> pad 0x5db9321 cleanup
// eh: try 0x5db9324..0x5db932e -> pad 0x5db9336 catch (...) [compiler noexcept guard]
// asm: 51 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5db90dc: jmp 0x5db90fa
// asm:   0x5db912f: jmp 0x5db9165
// asm:   0x5db918e: jmp 0x5db91ac
// asm:   0x5db91e5: jmp 0x5db9204
// asm:   0x5db921b: mov r15, rbp
// asm:   0x5db921e: mov rbx, qword ptr [rsp + 0x10]
// asm:   0x5db9223: mov rbp, qword ptr [rsp + 8]
// asm:   0x5db9228: jmp 0x5db9246
// asm:   0x5db9298: xor eax, eax
// asm:   0x5db929a: mov qword ptr [rsp + 0x10], rax
// asm:   0x5db929f: xor eax, eax
// asm:   0x5db92a1: mov qword ptr [rsp + 8], rax
// asm:   0x5db92b0: jmp 0x5db92b5
// asm:   0x5db92b2: mov rbp, r15
// asm:   0x5db92b5: mov rbx, rax
// asm:   0x5db92b8: xor eax, eax
// asm:   0x5db92ba: mov qword ptr [rsp + 0x10], rax
// asm:   0x5db92bf: xor eax, eax
// asm:   0x5db92c1: mov qword ptr [rsp + 8], rax
// asm:   0x5db92c6: jmp 0x5db92d5
// asm:   0x5db92c8: jmp 0x5db92d2
// asm:   0x5db92ca: jmp 0x5db92d2
// asm:   0x5db92cc: jmp 0x5db92d2
// asm:   0x5db92ce: jmp 0x5db92d2
// asm:   0x5db92d0: jmp 0x5db92d2
// asm:   0x5db92d2: mov rbx, rax
// asm:   0x5db92d5: cmp edx, 1
// asm:   0x5db92d8: jne 0x5db9324
// asm:   0x5db92da: mov rdi, rbx
// asm:   0x5db92dd: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5db92e2: mov r14, qword ptr [rax]
// asm:   0x5db92e5: mov qword ptr [rsp + 0x38], r14
// asm:   0x5db92ea: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5db92ef: lea rax, [rip + 0x14d566a]  ; MethodInfo_System_Collections_Generic_List_Enumerator_RulerMeasurement_Dispose
// asm:   0x5db92f6: mov rsi, qword ptr [rax]
// asm:   0x5db92f9: lea rdi, [rsp + 0x20]
// asm:   0x5db92fe: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5db9303: test r14, r14
// asm:   0x5db9306: mov r15, rbp
// asm:   0x5db9309: mov rbx, qword ptr [rsp + 0x10]
// asm:   0x5db930e: mov rbp, qword ptr [rsp + 8]
// asm:   0x5db9313: je 0x5db925a
// asm:   0x5db9319: mov rdi, r14
// asm:   0x5db931c: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5db9321: mov rbx, rax
// asm:   0x5db9324: lea rdi, [rsp + 0x38]
// asm:   0x5db9329: call 0x2fde080  ; il2cpp_runtime_helper_02fde080()
// asm:   0x5db932e: mov rdi, rbx
// asm:   0x5db9331: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5db9336: mov rdi, rax
// asm:   0x5db9339: call 0x2ab61e0  ; __clang_call_terminate()

void MapEditor_MapEditorRuler__TryBeginHandleDrag
               (MapEditor_MapEditorRuler_o *__this,UnityEngine_Camera_o *camera,MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_List_RulerMeasurement__o *__this_00;
  Il2CppObject *pIVar2;
  bool bVar3;
  bool bVar4;
  float fVar5;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  UnityEngine_Vector3_o UVar6;
  UnityEngine_Vector3_o UVar7;
  float fStack_b4;
  MapEditor_RulerMeasurement_o *pMStack_b0;
  System_Collections_Generic_List_Enumerator_object__o SStack_98;
  undefined1 auStack_80 [16];
  MapEditor_RulerMeasurement_o *pMStack_70;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [24];
  
  if (Il2CppMethodInitialized_0754813b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_RulerMeasurement_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_RulerMeasurement_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_RulerMeasurement_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_RulerMeasurement_GetEnumerator);
    Il2CppMethodInitialized_0754813b = '\x01';
  }
  UVar6 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
  auStack_68._8_4_ = extraout_XMM0_Dc;
  auStack_68._0_8_ = UVar6.fields._0_8_;
  auStack_68._12_4_ = extraout_XMM0_Dd;
  __this_00 = (__this->fields)._measurements;
  if (__this_00 == (System_Collections_Generic_List_RulerMeasurement__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)auStack_80,
             (System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_RulerMeasurement_GetEnumerator);
  SStack_98.fields._current = (Il2CppObject *)pMStack_70;
  SStack_98.fields._list = (System_Collections_Generic_List_T__o *)auStack_80._0_8_;
  SStack_98.fields._index = auStack_80._8_4_;
  SStack_98.fields._version = auStack_80._12_4_;
  auStack_80._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  auStack_80._8_8_ = &SStack_98;
  if (camera == (UnityEngine_Camera_o *)0x0) {
    bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (&SStack_98,
                       (MethodInfo_4C45C50 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_RulerMeasurement_MoveNext);
    if (bVar4) {
      if ((MapEditor_RulerMeasurement_o *)SStack_98.fields._current != (MapEditor_RulerMeasurement_o *)0x0) {
        ThrowNullReferenceException();
      }
label_05db92a6:
      ThrowNullReferenceException();
    }
    bVar4 = false;
    pMStack_b0 = (MapEditor_RulerMeasurement_o *)0x0;
  }
  else {
    fStack_b4 = 18.0;
    bVar4 = false;
    pMStack_b0 = (MapEditor_RulerMeasurement_o *)0x0;
    while( true ) {
      bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (&SStack_98,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_RulerMeasurement_MoveNext);
      pIVar2 = SStack_98.fields._current;
      if (!bVar3) break;
      if ((MapEditor_RulerMeasurement_o *)SStack_98.fields._current == (MapEditor_RulerMeasurement_o *)0x0)
      goto label_05db92a6;
      UVar6 = UnityEngine_Camera__WorldToScreenPoint_68c0c30
                        (camera,(UnityEngine_Vector3_o)
                                (((MapEditor_RulerMeasurement_Fields *)
                                 ((long)SStack_98.fields._current + 0x10))->Origin).fields,(MethodInfo *)0x0);
      auStack_48._8_4_ = extraout_XMM0_Dc_00;
      auStack_48._0_8_ = UVar6.fields._0_8_;
      auStack_48._12_4_ = extraout_XMM0_Dd_00;
      UVar7 = UnityEngine_Camera__WorldToScreenPoint_68c0c30
                        (camera,(UnityEngine_Vector3_o)
                                (((MapEditor_RulerMeasurement_Fields *)((long)pIVar2 + 0x10))->End).fields,
                         (MethodInfo *)0x0);
      auStack_58._8_4_ = extraout_XMM0_Dc_01;
      auStack_58._0_8_ = UVar7.fields._0_8_;
      auStack_58._12_4_ = extraout_XMM0_Dd_01;
      if (0.0 < UVar6.fields.z) {
        if (Il2CppMethodInitialized_0753e72f == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
          Il2CppMethodInitialized_0753e72f = '\x01';
          uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
        }
        else {
          uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
        }
        if (uVar1 == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
        }
        fVar5 = ((float)auStack_68._4_4_ - (float)auStack_48._4_4_) *
                ((float)auStack_68._4_4_ - (float)auStack_48._4_4_) +
                ((float)auStack_68._0_4_ - (float)auStack_48._0_4_) *
                ((float)auStack_68._0_4_ - (float)auStack_48._0_4_);
        if (fVar5 < 0.0) {
          fVar5 = sqrtf(fVar5);
        }
        else {
          fVar5 = SQRT(fVar5);
        }
        if (fVar5 < fStack_b4) {
          bVar4 = true;
          pMStack_b0 = (MapEditor_RulerMeasurement_o *)pIVar2;
          fStack_b4 = fVar5;
        }
      }
      if (0.0 < UVar7.fields.z) {
        if (Il2CppMethodInitialized_0753e72f == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
          Il2CppMethodInitialized_0753e72f = '\x01';
          uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
        }
        else {
          uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
        }
        if (uVar1 == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
        }
        fVar5 = ((float)auStack_68._4_4_ - (float)auStack_58._4_4_) *
                ((float)auStack_68._4_4_ - (float)auStack_58._4_4_) +
                ((float)auStack_68._0_4_ - (float)auStack_58._0_4_) *
                ((float)auStack_68._0_4_ - (float)auStack_58._0_4_);
        if (fVar5 < 0.0) {
          fVar5 = sqrtf(fVar5);
        }
        else {
          fVar5 = SQRT(fVar5);
        }
        if (fVar5 < fStack_b4) {
          bVar4 = false;
          pMStack_b0 = (MapEditor_RulerMeasurement_o *)pIVar2;
          fStack_b4 = fVar5;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose
            (&SStack_98,
             (MethodInfo_4C45C40 *)
             MethodInfo_System_Collections_Generic_List_Enumerator_RulerMeasurement_Dispose);
  if (pMStack_b0 != (MapEditor_RulerMeasurement_o *)0x0) {
    (__this->fields)._dragging = pMStack_b0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._dragging);
    (__this->fields)._dragOrigin = bVar4;
  }
  return;
}


// MapEditor.MapEditorRuler$$SnapToChainRoot
// il2cpp: UnityEngine_Vector3_o MapEditor_MapEditorRuler__SnapToChainRoot (MapEditor_MapEditorRuler_o* __this, UnityEngine_Camera_o* camera, UnityEngine_Vector3_o point, const MethodInfo* method);
// 0x5db8e00
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5db8f0d: jmp 0x5db8f37

UnityEngine_Vector3_o
MapEditor_MapEditorRuler__SnapToChainRoot
          (MapEditor_MapEditorRuler_o *__this,UnityEngine_Camera_o *camera,UnityEngine_Vector3_o point,
          MethodInfo *method)

{
  System_Nullable_Vector3__o *__this_00;
  float fVar1;
  UnityEngine_Vector3_o UVar2;
  UnityEngine_Vector3_o UVar3;
  float local_4c;
  float local_38;
  float fStack_34;
  undefined8 local_28;
  
  local_4c = point.fields.z;
  local_28 = point.fields._0_8_;
  if (Il2CppMethodInitialized_0754813c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_get_Value);
    Il2CppMethodInitialized_0754813c = '\x01';
  }
  if ((__this->fields)._chainRoot.fields.hasValue != false) {
    __this_00 = &(__this->fields)._chainRoot;
    UVar2 = System_Nullable_Vector3___get_Value
                      (__this_00,(MethodInfo_3CDCAC0 *)MethodInfo_System_Nullable_Vector3_get_Value);
    if (camera == (UnityEngine_Camera_o *)0x0) {
      ThrowNullReferenceException();
    }
    UVar2 = UnityEngine_Camera__WorldToScreenPoint_68c0c30(camera,UVar2,(MethodInfo *)0x0);
    if (0.0 < UVar2.fields.z) {
      UVar3 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
      if (Il2CppMethodInitialized_0753e72f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
        Il2CppMethodInitialized_0753e72f = '\x01';
      }
      local_38 = UVar2.fields.x;
      fStack_34 = UVar2.fields.y;
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      }
      local_38 = UVar3.fields.x - local_38;
      fStack_34 = UVar3.fields.y - fStack_34;
      fVar1 = fStack_34 * fStack_34 + local_38 * local_38;
      if (fVar1 < 0.0) {
        fVar1 = sqrtf(fVar1);
      }
      else {
        fVar1 = SQRT(fVar1);
      }
      if (fVar1 <= 22.0) {
        UVar2 = System_Nullable_Vector3___get_Value
                          (__this_00,(MethodInfo_3CDCAC0 *)MethodInfo_System_Nullable_Vector3_get_Value);
        local_4c = UVar2.fields.z;
        local_28 = UVar2.fields._0_8_;
      }
    }
  }
  UVar2.fields.z = local_4c;
  UVar2.fields.x = (float)(undefined4)local_28;
  UVar2.fields.y = (float)local_28._4_4_;
  return (UnityEngine_Vector3_o)UVar2.fields;
}


// MapEditor.MapEditorRuler$$FindChainRoot
// il2cpp: UnityEngine_Vector3_o MapEditor_MapEditorRuler__FindChainRoot (MapEditor_MapEditorRuler_o* __this, MapEditor_RulerMeasurement_o* source, const MethodInfo* method);
// 0x5db7020
// eh: try 0x5db7194..0x5db7288 -> pad 0x5db728e (+3 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5db72a6..0x5db72ab -> pad 0x5db72ca cleanup
// eh: try 0x5db72cd..0x5db72d7 -> pad 0x5db72df catch (...) [compiler noexcept guard]
// asm: 26 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5db7288: jmp 0x5db728e
// asm:   0x5db728a: jmp 0x5db728e
// asm:   0x5db728c: jmp 0x5db728e
// asm:   0x5db728e: mov rbx, rax
// asm:   0x5db7291: cmp edx, 1
// asm:   0x5db7294: jne 0x5db72cd
// asm:   0x5db7296: mov rdi, rbx
// asm:   0x5db7299: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5db729e: mov rbx, qword ptr [rax]
// asm:   0x5db72a1: mov qword ptr [rsp + 0x38], rbx
// asm:   0x5db72a6: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5db72ab: lea rax, [rip + 0x14d76ae]  ; MethodInfo_System_Collections_Generic_List_Enumerator_RulerMeasurement_Dispose
// asm:   0x5db72b2: mov rsi, qword ptr [rax]
// asm:   0x5db72b5: mov rdi, rsp
// asm:   0x5db72b8: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5db72bd: test rbx, rbx
// asm:   0x5db72c0: je 0x5db7267
// asm:   0x5db72c2: mov rdi, rbx
// asm:   0x5db72c5: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5db72ca: mov rbx, rax
// asm:   0x5db72cd: lea rdi, [rsp + 0x38]
// asm:   0x5db72d2: call 0x2fde0b0  ; il2cpp_runtime_helper_02fde0b0()
// asm:   0x5db72d7: mov rdi, rbx
// asm:   0x5db72da: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5db72df: mov rdi, rax
// asm:   0x5db72e2: call 0x2ab61e0  ; __clang_call_terminate()

UnityEngine_Vector3_o
MapEditor_MapEditorRuler__FindChainRoot
          (MapEditor_MapEditorRuler_o *__this,MapEditor_RulerMeasurement_o *source,MethodInfo *method)

{
  undefined8 uVar1;
  Il2CppObject *item;
  bool bVar2;
  System_Collections_Generic_HashSet_RulerMeasurement__o *__this_00;
  System_Collections_Generic_List_RulerMeasurement__o *__this_01;
  float fVar3;
  float fVar4;
  float fVar5;
  UnityEngine_Vector3_o UVar6;
  undefined1 local_b8 [8];
  undefined1 *puStack_b0;
  Il2CppObject *local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_80 [16];
  Il2CppObject *local_70;
  undefined1 local_68 [16];
  MapEditor_MapEditorRuler_o *local_50;
  float local_48;
  float fStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  if (Il2CppMethodInitialized_0754813d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_RulerMeasurement_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_RulerMeasurement_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_RulerMeasurement_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_RulerMeasurement_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_RulerMeasurement_Contains);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_RulerMeasurement_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_RulerMeasurement);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_RulerMeasurement_GetEnumerator);
    Il2CppMethodInitialized_0754813d = '\x01';
  }
  local_b8 = (undefined1  [8])0x0;
  puStack_b0 = (undefined1 *)0x0;
  local_a8 = (Il2CppObject *)0x0;
  if (source != (MapEditor_RulerMeasurement_o *)0x0) {
    local_98 = *(Il2CppClass **)&(source->fields).Origin.fields;
    uStack_90 = 0;
    local_68 = ZEXT416((uint)(source->fields).Origin.fields.z);
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_RulerMeasurement);
    System_Collections_Generic_HashSet_object____ctor
              ((System_Collections_Generic_HashSet_object__o *)__this_00,
               (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_RulerMeasurement_ctor);
    if (__this_00 != (System_Collections_Generic_HashSet_RulerMeasurement__o *)0x0) {
      System_Collections_Generic_HashSet_object___Add
                ((System_Collections_Generic_HashSet_object__o *)__this_00,(Il2CppObject *)source,
                 (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_RulerMeasurement_Add);
      __this_01 = (__this->fields)._measurements;
      local_50 = __this;
      if (__this_01 != (System_Collections_Generic_List_RulerMeasurement__o *)0x0) {
        do {
          System_Collections_Generic_List_object___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)local_80,
                     (System_Collections_Generic_List_object__o *)__this_01,
                     (MethodInfo_395E050 *)
                     MethodInfo_System_Collections_Generic_List_RulerMeasurement_GetEnumerator);
          local_a8 = local_70;
          local_b8 = (undefined1  [8])local_80._0_8_;
          puStack_b0 = (undefined1 *)local_80._8_8_;
          local_80._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
          local_48 = (float)local_68._0_4_;
          fStack_44 = (float)local_98;
          uStack_40 = local_68._4_4_;
          uStack_3c = local_98._4_4_;
          local_80._8_8_ = local_b8;
          do {
            do {
              bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                ((System_Collections_Generic_List_Enumerator_object__o *)local_b8,
                                 (MethodInfo_4C45C50 *)
                                 MethodInfo_System_Collections_Generic_List_Enumerator_RulerMeasurement_MoveNext
                                );
              item = local_a8;
              if (!bVar2) {
                System_Collections_Generic_List_Enumerator_object___Dispose
                          ((System_Collections_Generic_List_Enumerator_object__o *)local_b8,
                           (MethodInfo_4C45C40 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_RulerMeasurement_Dispose);
                UVar6.fields.z = (float)local_68._0_4_;
                UVar6.fields._0_8_ = local_98;
                return (UnityEngine_Vector3_o)UVar6.fields;
              }
              bVar2 = System_Collections_Generic_HashSet_object___Contains
                                ((System_Collections_Generic_HashSet_object__o *)__this_00,local_a8,
                                 (MethodInfo_4FB3720 *)
                                 MethodInfo_System_Collections_Generic_HashSet_RulerMeasurement_Contains);
            } while (bVar2);
            if (item == (Il2CppObject *)0x0) {
              ThrowNullReferenceException();
            }
            uVar1 = *(undefined8 *)((long)&item[1].monitor + 4);
            fVar3 = (float)((ulong)uVar1 >> 0x20) - local_98._4_4_;
            fVar4 = *(float *)((long)&item[2].klass + 4) - local_48;
            fVar5 = (float)uVar1 - fStack_44;
          } while (0.0001 <= fVar3 * fVar3 + fVar5 * fVar5 + fVar4 * fVar4);
          local_98 = item[1].klass;
          uStack_90 = 0;
          local_68 = ZEXT416(*(uint *)&item[1].monitor);
          System_Collections_Generic_HashSet_object___Add
                    ((System_Collections_Generic_HashSet_object__o *)__this_00,item,
                     (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_RulerMeasurement_Add)
          ;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    ((System_Collections_Generic_List_Enumerator_object__o *)local_b8,
                     (MethodInfo_4C45C40 *)
                     MethodInfo_System_Collections_Generic_List_Enumerator_RulerMeasurement_Dispose);
          __this_01 = (local_50->fields)._measurements;
        } while (__this_01 != (System_Collections_Generic_List_RulerMeasurement__o *)0x0);
      }
    }
  }
  ThrowNullReferenceException();
}


// MapEditor.MapEditorRuler$$TryGetPlacementPoint
// il2cpp: bool MapEditor_MapEditorRuler__TryGetPlacementPoint (UnityEngine_Camera_o* camera, UnityEngine_Vector3_o* point, const MethodInfo* method);
// 0x5db87f0

bool MapEditor_MapEditorRuler__TryGetPlacementPoint
               (UnityEngine_Camera_o *camera,UnityEngine_Vector3_o *point,MethodInfo *method)

{
  Settings_InputSettings_o *pSVar1;
  Settings_MapEditorInputSettings_o *pSVar2;
  Settings_KeybindSetting_o *__this;
  bool bVar3;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *method_01;
  
  if (Il2CppMethodInitialized_0754813e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_0754813e = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
  if (((pSVar1 == (Settings_InputSettings_o *)0x0) ||
      (pSVar2 = (pSVar1->fields).MapEditor, pSVar2 == (Settings_MapEditorInputSettings_o *)0x0)) ||
     (__this = (pSVar2->fields).VertexSnap, __this == (Settings_KeybindSetting_o *)0x0)) {
    ThrowNullReferenceException();
  }
  bVar3 = Settings_KeybindSetting__GetKey(__this,false,(MethodInfo *)0x0);
  method_01 = method_00;
  if (bVar3) {
    bVar3 = MapEditor_MapEditorRuler__TryGetNearestVertex(camera,point,method_00);
    method_01 = extraout_RDX;
    if (bVar3) {
      return true;
    }
  }
  bVar3 = MapEditor_MapEditorRuler__TryGetMapPoint(camera,point,method_01);
  return bVar3;
}


// MapEditor.MapEditorRuler$$TryGetNearestVertex
// il2cpp: bool MapEditor_MapEditorRuler__TryGetNearestVertex (UnityEngine_Camera_o* camera, UnityEngine_Vector3_o* point, const MethodInfo* method);
// 0x5db98c0
// eh: try 0x5db9a64..0x5db9d5c -> pad 0x5db9d88 (+22 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5db9da0..0x5db9da5 -> pad 0x5db9dca cleanup
// eh: try 0x5db9dcd..0x5db9dd7 -> pad 0x5db9ddf catch (...) [compiler noexcept guard]
// asm: 47 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5db9af7: nop word ptr [rax + rax]
// asm:   0x5db9cc7: jmp 0x5db9bc0
// asm:   0x5db9d5c: jmp 0x5db9d88
// asm:   0x5db9d5e: jmp 0x5db9d88
// asm:   0x5db9d60: jmp 0x5db9d88
// asm:   0x5db9d62: jmp 0x5db9d88
// asm:   0x5db9d64: jmp 0x5db9d88
// asm:   0x5db9d66: jmp 0x5db9d88
// asm:   0x5db9d68: jmp 0x5db9d88
// asm:   0x5db9d6a: jmp 0x5db9d88
// asm:   0x5db9d6c: jmp 0x5db9d88
// asm:   0x5db9d6e: jmp 0x5db9d88
// asm:   0x5db9d70: jmp 0x5db9d88
// asm:   0x5db9d72: jmp 0x5db9d88
// asm:   0x5db9d74: jmp 0x5db9d88
// asm:   0x5db9d76: jmp 0x5db9d88
// asm:   0x5db9d78: jmp 0x5db9d88
// asm:   0x5db9d7a: jmp 0x5db9d88
// asm:   0x5db9d7c: jmp 0x5db9d88
// asm:   0x5db9d7e: jmp 0x5db9d88
// asm:   0x5db9d80: jmp 0x5db9d88
// asm:   0x5db9d82: jmp 0x5db9d88
// asm:   0x5db9d84: jmp 0x5db9d88
// asm:   0x5db9d86: jmp 0x5db9d88
// asm:   0x5db9d88: mov rbx, rax
// asm:   0x5db9d8b: cmp edx, 1
// asm:   0x5db9d8e: jne 0x5db9dcd
// asm:   0x5db9d90: mov rdi, rbx
// asm:   0x5db9d93: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5db9d98: mov rbx, qword ptr [rax]
// asm:   0x5db9d9b: mov qword ptr [rsp + 0x68], rbx
// asm:   0x5db9da0: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5db9da5: lea rax, [rip + 0x14d5b5c]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_MapObject_Dispose
// asm:   0x5db9dac: mov rsi, qword ptr [rax]
// asm:   0x5db9daf: lea rdi, [rsp + 0x30]
// asm:   0x5db9db4: call 0x4da11d0  ; System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose()
// asm:   0x5db9db9: test rbx, rbx
// asm:   0x5db9dbc: je 0x5db9ce0
// asm:   0x5db9dc2: mov rdi, rbx
// asm:   0x5db9dc5: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5db9dca: mov rbx, rax
// asm:   0x5db9dcd: lea rdi, [rsp + 0x68]
// asm:   0x5db9dd2: call 0x2fde0e0  ; il2cpp_runtime_helper_02fde0e0()
// asm:   0x5db9dd7: mov rdi, rbx
// asm:   0x5db9dda: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5db9ddf: mov rdi, rax
// asm:   0x5db9de2: call 0x2ab61e0  ; __clang_call_terminate()

bool MapEditor_MapEditorRuler__TryGetNearestVertex
               (UnityEngine_Camera_o *camera,UnityEngine_Vector3_o *point,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  UnityEngine_Vector3_StaticFields *pUVar5;
  System_Collections_Generic_Dictionary_int__object__o *__this;
  UnityEngine_MeshFilter_o *__this_00;
  bool bVar6;
  bool bVar7;
  System_Object_array *pSVar8;
  UnityEngine_Object_o *pUVar9;
  UnityEngine_Mesh_o *__this_01;
  UnityEngine_Vector3_array *pUVar10;
  UnityEngine_Transform_o *pUVar11;
  il2cpp_array_size_t iVar12;
  uint uVar13;
  float *pfVar14;
  ulong uVar15;
  float fVar16;
  float fVar17;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  UnityEngine_Vector3_o UVar22;
  UnityEngine_Vector3_o UVar23;
  float local_ec;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_c8;
  UnityEngine_Vector3_o *local_a0;
  UnityEngine_Component_o *local_98;
  undefined1 local_90 [16];
  Il2CppObject *local_80;
  Il2CppObject *pIStack_78;
  int32_t local_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  if (Il2CppMethodInitialized_0754813f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_MapObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_MapObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_MapObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_MeshFilter);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_int_MapObject_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754813f = '\x01';
  }
  local_c8.fields._current.fields.key = (Il2CppObject *)0x0;
  local_c8.fields._current.fields.value = (Il2CppObject *)0x0;
  local_c8.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_c8.fields._version = 0;
  local_c8.fields._index = 0;
  local_c8.fields._getEnumeratorRetType = 0;
  local_c8.fields._36_4_ = 0;
  if (Il2CppMethodInitialized_0753e4b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e4b6 = '\x01';
  }
  pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar16 = (pUVar5->zeroVector).fields.y;
  fVar18 = (pUVar5->zeroVector).fields.z;
  (point->fields).x = (pUVar5->zeroVector).fields.x;
  (point->fields).y = fVar16;
  (point->fields).z = fVar18;
  local_a0 = point;
  UVar22 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
  local_58._8_4_ = extraout_XMM0_Dc;
  local_58._0_8_ = UVar22.fields._0_8_;
  local_58._12_4_ = extraout_XMM0_Dd;
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  __this = (System_Collections_Generic_Dictionary_int__object__o *)
           TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
  if (__this == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_int__object___GetEnumerator
            ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_90,__this,
             (MethodInfo_4A0FBD0 *)
             MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_GetEnumerator);
  local_c8.fields._getEnumeratorRetType = local_70;
  local_c8.fields._36_4_ = uStack_6c;
  local_c8.fields._current.fields.key = local_80;
  local_c8.fields._current.fields.value = pIStack_78;
  local_c8.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_90._0_8_;
  local_c8.fields._version = local_90._8_4_;
  local_c8.fields._index = local_90._12_4_;
  local_90._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_ec = 900.0;
  local_68 = 0x7f7fffff;
  uStack_60 = 0;
  bVar7 = false;
  local_90._8_8_ = &local_c8;
  do {
    do {
      do {
        do {
          bVar6 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext
                            (&local_c8,
                             (MethodInfo_4CA10B0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_MapObject_MoveNext
                            );
          if (!bVar6) {
            System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose
                      (&local_c8,
                       (MethodInfo_4CA11D0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_MapObject_Dispose);
            return bVar7;
          }
          if (local_c8.fields._current.fields.value == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          pUVar9 = local_c8.fields._current.fields.value[1].monitor;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar6 = UnityEngine_Object__op_Equality(pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        } while (bVar6);
        if (pUVar9 == (UnityEngine_Object_o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar6 = UnityEngine_GameObject__get_activeInHierarchy
                          ((UnityEngine_GameObject_o *)pUVar9,(MethodInfo *)0x0);
      } while (!bVar6);
      pSVar8 = UnityEngine_GameObject__GetComponentsInChildren_object__353c030
                         ((UnityEngine_GameObject_o *)pUVar9,
                          (MethodInfo_353C030 *)
                          MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_MeshFilter);
      if (pSVar8 == (System_Object_array *)0x0) {
        ThrowNullReferenceException();
      }
      iVar12 = pSVar8->max_length;
    } while ((int)iVar12 < 1);
    uVar13 = 0;
    do {
      if ((uint)iVar12 <= uVar13) {
        ThrowIndexOutOfRangeException();
      }
      __this_00 = (UnityEngine_MeshFilter_o *)pSVar8->m_Items[(int)uVar13];
      if (__this_00 == (UnityEngine_MeshFilter_o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar9 = (UnityEngine_Object_o *)UnityEngine_MeshFilter__get_sharedMesh(__this_00,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar6 = UnityEngine_Object__op_Equality(pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar6) {
        __this_01 = UnityEngine_MeshFilter__get_sharedMesh(__this_00,(MethodInfo *)0x0);
        if (__this_01 == (UnityEngine_Mesh_o *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar10 = UnityEngine_Mesh__get_vertices(__this_01,(MethodInfo *)0x0);
        if (pUVar10 == (UnityEngine_Vector3_array *)0x0) {
          ThrowNullReferenceException();
        }
        iVar4 = (int)pUVar10->max_length;
        if (camera == (UnityEngine_Camera_o *)0x0) {
          if (0 < iVar4) {
            pUVar11 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
            if ((int)pUVar10->max_length != 0) {
              if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
                UnityEngine_Transform__TransformPoint
                          (pUVar11,(UnityEngine_Vector3_o)pUVar10->m_Items[0].fields,(MethodInfo *)0x0);
                ThrowNullReferenceException();
              }
label_05db9d3c:
              ThrowNullReferenceException();
            }
label_05db9d32:
            ThrowIndexOutOfRangeException();
          }
        }
        else if (0 < iVar4) {
          pfVar14 = &pUVar10->m_Items[0].fields.z;
          uVar15 = 0;
          local_98 = (UnityEngine_Component_o *)__this_00;
          do {
            pUVar11 = UnityEngine_Component__get_transform(local_98,(MethodInfo *)0x0);
            if ((uint)pUVar10->max_length <= uVar15) goto label_05db9d32;
            if (pUVar11 == (UnityEngine_Transform_o *)0x0) goto label_05db9d3c;
            uVar19 = 0;
            uVar20 = 0;
            uVar21 = 0;
            uVar1 = ((UnityEngine_Vector3_Fields *)(pfVar14 + -2))->x;
            uVar2 = ((UnityEngine_Vector3_Fields *)(pfVar14 + -2))->y;
            UVar22.fields.y = (float)uVar2;
            UVar22.fields.x = (float)uVar1;
            UVar22.fields.z = *pfVar14;
            UVar22 = UnityEngine_Transform__TransformPoint(pUVar11,UVar22,(MethodInfo *)0x0);
            local_48._8_4_ = extraout_XMM0_Dc_00;
            local_48._0_8_ = UVar22.fields._0_8_;
            local_48._12_4_ = extraout_XMM0_Dd_00;
            UVar23 = UnityEngine_Camera__WorldToScreenPoint_68c0c30(camera,UVar22,(MethodInfo *)0x0);
            fVar18 = UVar23.fields.z;
            if (0.0 < fVar18) {
              fVar16 = UVar23.fields.x - (float)local_58._0_4_;
              fVar17 = UVar23.fields.y - (float)local_58._4_4_;
              fVar16 = fVar17 * fVar17 + fVar16 * fVar16;
              if ((fVar16 + 36.0 < local_ec) || (fVar18 < (float)local_68 && ABS(fVar16 - local_ec) <= 36.0))
              {
                (local_a0->fields).x = (float)local_48._0_4_;
                (local_a0->fields).y = (float)local_48._4_4_;
                (local_a0->fields).z = UVar22.fields.z;
                bVar7 = true;
                local_68 = CONCAT44(uVar19,fVar18);
                uStack_60 = CONCAT44(uVar21,uVar20);
                local_ec = fVar16;
              }
            }
            uVar15 = uVar15 + 1;
            pfVar14 = pfVar14 + 3;
          } while ((long)uVar15 < (long)(int)pUVar10->max_length);
        }
      }
      uVar13 = uVar13 + 1;
      uVar3 = (uint)pSVar8->max_length;
      iVar12 = (il2cpp_array_size_t)uVar3;
    } while ((int)uVar13 < (int)uVar3);
  } while( true );
}


// MapEditor.MapEditorRuler$$TryGetMapPoint
// il2cpp: bool MapEditor_MapEditorRuler__TryGetMapPoint (UnityEngine_Camera_o* camera, UnityEngine_Vector3_o* point, const MethodInfo* method);
// 0x5db9df0

bool MapEditor_MapEditorRuler__TryGetMapPoint
               (UnityEngine_Camera_o *camera,UnityEngine_Vector3_o *point,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  UnityEngine_Vector3_StaticFields *pUVar3;
  UnityEngine_Ray_o ray;
  bool bVar4;
  UnityEngine_LayerMask_o mask;
  int32_t layerMask;
  System_Int32_array *layers;
  float fVar5;
  UnityEngine_Vector3_o UVar6;
  UnityEngine_Ray_o local_60;
  UnityEngine_RaycastHit_o local_48;
  
  if (Il2CppMethodInitialized_07548140 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    Il2CppMethodInitialized_07548140 = '\x01';
  }
  local_48.fields.m_UV.fields.x = 0.0;
  local_48.fields.m_UV.fields.y = 0.0;
  local_48.fields.m_Collider.fields.m_Data = (UnityEngine_EntityId_Fields)0x0;
  local_48.fields.m_Normal.fields.y = 0.0;
  local_48.fields.m_Normal.fields.z = 0.0;
  local_48.fields.m_FaceID = 0;
  local_48.fields.m_Distance = 0.0;
  local_48.fields.m_Point.fields.x = 0.0;
  local_48.fields.m_Point.fields.y = 0.0;
  local_48.fields.m_Point.fields.z = 0.0;
  local_48.fields.m_Normal.fields.x = 0.0;
  UVar6 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
  if (camera != (UnityEngine_Camera_o *)0x0) {
    UnityEngine_Camera__ScreenPointToRay_68c1290(&local_60,camera,UVar6,(MethodInfo *)0x0);
    layers = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,1);
    if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
    }
    if (layers != (System_Int32_array *)0x0) {
      if ((int)layers->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      layers->m_Items[0] = TypeInfo_Utility_PhysicsLayer->static_fields->MapEditorObject;
      mask = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
      layerMask = UnityEngine_LayerMask__op_Implicit(mask,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
      }
      ray.fields.m_Origin.fields.z = local_60.fields.m_Origin.fields.z;
      ray.fields.m_Direction.fields.x = local_60.fields.m_Direction.fields.x;
      ray.fields.m_Origin.fields.x = local_60.fields.m_Origin.fields.x;
      ray.fields.m_Origin.fields.y = local_60.fields.m_Origin.fields.y;
      ray.fields.m_Direction.fields.y = local_60.fields.m_Direction.fields.y;
      ray.fields.m_Direction.fields.z = local_60.fields.m_Direction.fields.z;
      bVar4 = UnityEngine_Physics__Raycast_69da1f0(ray,&local_48,100000.0,layerMask,(MethodInfo *)0x0);
      if (bVar4) {
        UVar6 = UnityEngine_RaycastHit__get_point(&local_48,(MethodInfo *)0x0);
        fVar5 = UVar6.fields.z;
        fVar1 = UVar6.fields.x;
        fVar2 = UVar6.fields.y;
      }
      else {
        if (Il2CppMethodInitialized_0753e4b6 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_0753e4b6 = '\x01';
        }
        pUVar3 = TypeInfo_UnityEngine_Vector3->static_fields;
        fVar1 = (pUVar3->zeroVector).fields.x;
        fVar2 = (pUVar3->zeroVector).fields.y;
        fVar5 = (pUVar3->zeroVector).fields.z;
      }
      (point->fields).x = fVar1;
      (point->fields).y = fVar2;
      (point->fields).z = fVar5;
      return bVar4;
    }
  }
  ThrowNullReferenceException();
}


// MapEditor.MapEditorRuler$$CancelInteraction
// il2cpp: void MapEditor_MapEditorRuler__CancelInteraction (MapEditor_MapEditorRuler_o* __this, const MethodInfo* method);
// 0x5db6cc0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5db6d7f: jmp 0x5db6e1e

void MapEditor_MapEditorRuler__CancelInteraction(MapEditor_MapEditorRuler_o *__this,MethodInfo *method)

{
  MapEditor_RulerMeasurement_o **targetAddress;
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint32_t uVar6;
  MapEditor_RulerMeasurement_o *pMVar7;
  System_Collections_Generic_List_RulerMeasurement__o *__this_00;
  UnityEngine_Object_o *pUVar8;
  System_Nullable_Vector3__o *pSVar9;
  bool bVar10;
  float fVar11;
  
  if (Il2CppMethodInitialized_07548141 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_RulerMeasurement_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07548141 = '\x01';
  }
  targetAddress = &(__this->fields)._pending;
  pMVar7 = (__this->fields)._pending;
  if (pMVar7 == (MapEditor_RulerMeasurement_o *)0x0) goto label_05db6e1e;
  if ((__this->fields)._creatingMeasurement == false) {
    uVar2 = (pMVar7->fields).Origin.fields.x;
    uVar4 = (pMVar7->fields).Origin.fields.y;
    fVar11 = (pMVar7->fields).Origin.fields.z;
    uVar3 = (pMVar7->fields).End.fields.x;
    uVar5 = (pMVar7->fields).End.fields.y;
    fVar1 = (pMVar7->fields).End.fields.z;
    if (Il2CppMethodInitialized_0753e7b7 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_0753e7b7 = '\x01';
      uVar6 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar6 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
    }
    if (uVar6 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    fVar11 = fVar11 - fVar1;
    fVar11 = ((float)uVar4 - (float)uVar5) * ((float)uVar4 - (float)uVar5) +
             ((float)uVar2 - (float)uVar3) * ((float)uVar2 - (float)uVar3) + fVar11 * fVar11;
    if (fVar11 < 0.0) {
      fVar11 = sqrtf(fVar11);
    }
    else {
      fVar11 = SQRT(fVar11);
    }
    if (0.001 <= fVar11) goto label_05db6e1e;
  }
  __this_00 = (__this->fields)._measurements;
  if (__this_00 != (System_Collections_Generic_List_RulerMeasurement__o *)0x0) {
    System_Collections_Generic_List_object___Remove
              ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)*targetAddress,
               (MethodInfo_395ED70 *)MethodInfo_System_Collections_Generic_List_RulerMeasurement_Remove);
    if (*targetAddress != (MapEditor_RulerMeasurement_o *)0x0) {
      pUVar8 = (UnityEngine_Object_o *)((*targetAddress)->fields).Root;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar10 = UnityEngine_Object__op_Inequality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar10) {
        if (*targetAddress == (MapEditor_RulerMeasurement_o *)0x0) goto label_05db6edc;
        pUVar8 = (UnityEngine_Object_o *)((*targetAddress)->fields).Root;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_69214e0(pUVar8,(MethodInfo *)0x0);
      }
label_05db6e1e:
      (__this->fields)._pending = (MapEditor_RulerMeasurement_o *)0x0;
      Il2CppCodeGenWriteBarrier(targetAddress);
      (__this->fields)._dragging = (MapEditor_RulerMeasurement_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._dragging);
      (__this->fields)._chainRoot.fields.hasValue = false;
      *(undefined3 *)&(__this->fields)._chainRoot.fields.field_0x1 = 0;
      (__this->fields)._chainRoot.fields.value.fields.x = 0.0;
      pSVar9 = &(__this->fields)._chainRoot;
      (pSVar9->fields).value.fields.y = 0.0;
      (pSVar9->fields).value.fields.z = 0.0;
      (__this->fields)._awaitingFirstPoint = false;
      (__this->fields)._creatingMeasurement = false;
      return;
    }
  }
label_05db6edc:
  ThrowNullReferenceException();
}


// MapEditor.MapEditorRuler$$EnsureRoot
// il2cpp: void MapEditor_MapEditorRuler__EnsureRoot (MapEditor_MapEditorRuler_o* __this, const MethodInfo* method);
// 0x5db6c10

void MapEditor_MapEditorRuler__EnsureRoot(MapEditor_MapEditorRuler_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_GameObject_o **targetAddress;
  
  if (Il2CppMethodInitialized_07548142 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditorRulers");
    Il2CppMethodInitialized_07548142 = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._root;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    targetAddress = &(__this->fields)._root;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor(__this_00,"MapEditorRulers",(MethodInfo *)0x0);
    *targetAddress = __this_00;
    Il2CppCodeGenWriteBarrier(targetAddress);
    return;
  }
  return;
}


// MapEditor.MapEditorRuler$$.ctor
// il2cpp: void MapEditor_MapEditorRuler___ctor (MapEditor_MapEditorRuler_o* __this, const MethodInfo* method);
// 0x5db9f80

void MapEditor_MapEditorRuler___ctor(MapEditor_MapEditorRuler_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_RulerMeasurement__o *__this_00;
  
  if (Il2CppMethodInitialized_07548143 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_RulerMeasurement_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_RulerMeasurement);
    Il2CppMethodInitialized_07548143 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_RulerMeasurement);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_RulerMeasurement_ctor);
  (__this->fields)._measurements = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._measurements);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


