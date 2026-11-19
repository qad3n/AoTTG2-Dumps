// Type: Gisketch.Aottg2UI.Game.AottgGameCreateCardPreview
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgGameCreateCardPreview.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgGameCreateCardPreview.StarRest$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_StarRest___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_StarRest_o __this, UnityEngine_RectTransform_o* rect, const MethodInfo* method);
// 0x5e87ee0

void Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_StarRest___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_StarRest_o *__this,
               UnityEngine_RectTransform_o *rect,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Quaternion_Fields UVar2;
  
  (__this->fields).Rect = rect;
  Il2CppCodeGenWriteBarrier((void **)__this);
  if (rect == (UnityEngine_RectTransform_o *)0x0) {
    ThrowNullReferenceException();
  }
  UVar1 = (UnityEngine_Vector2_Fields)UnityEngine_RectTransform__get_anchoredPosition(rect,(MethodInfo *)0x0);
  (__this->fields).Position.fields = UVar1;
  UVar2 = (UnityEngine_Quaternion_Fields)
          UnityEngine_Transform__get_localRotation((UnityEngine_Transform_o *)rect,(MethodInfo *)0x0);
  (__this->fields).Rotation.fields = UVar2;
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCardPreview.GearRest$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_GearRest___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_GearRest_o __this, UnityEngine_RectTransform_o* rect, const MethodInfo* method);
// 0x5e87f30

void Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_GearRest___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_GearRest_o *__this,
               UnityEngine_RectTransform_o *rect,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Quaternion_Fields UVar2;
  
  (__this->fields).Rect = rect;
  Il2CppCodeGenWriteBarrier((void **)__this);
  if (rect == (UnityEngine_RectTransform_o *)0x0) {
    ThrowNullReferenceException();
  }
  UVar1 = (UnityEngine_Vector2_Fields)UnityEngine_RectTransform__get_anchoredPosition(rect,(MethodInfo *)0x0);
  (__this->fields).Position.fields = UVar1;
  UVar2 = (UnityEngine_Quaternion_Fields)
          UnityEngine_Transform__get_localRotation((UnityEngine_Transform_o *)rect,(MethodInfo *)0x0);
  (__this->fields).Rotation.fields = UVar2;
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCardPreview$$Setup
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__Setup (Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_o* __this, UnityEngine_UI_Image_o* fallback, bool favorites, bool sandbox, const MethodInfo* method);
// 0x5e877c0

void Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__Setup
               (Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_o *__this,UnityEngine_UI_Image_o *fallback,
               bool favorites,bool sandbox,MethodInfo *method)

{
  int32_t *piVar1;
  UnityEngine_Object_o *x;
  Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_StarRest_o item;
  Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_GearRest_o item_00;
  Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_StarRest_Fields *pGVar2;
  Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_GearRest_Fields *pGVar3;
  UnityEngine_RectTransform_c *pUVar4;
  bool bVar5;
  uint uVar6;
  UnityEngine_RectTransform_o *pUVar7;
  System_Collections_Generic_List_AottgGameCreateCardPreview_StarRest__o *__this_00;
  System_Object_array *pSVar8;
  System_String_o *pSVar9;
  System_Collections_Generic_List_AottgGameCreateCardPreview_GearRest__o *__this_01;
  Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_StarRest_array *pGVar10;
  Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_GearRest_array *pGVar11;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar12;
  long lVar13;
  UnityEngine_UI_Graphic_o *pUVar14;
  Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_StarRest_array **targetAddress;
  uint uVar15;
  UnityEngine_RectTransform_o *local_80;
  UnityEngine_Vector2_Fields UStack_78;
  UnityEngine_Quaternion_o UStack_70;
  Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_o *local_60;
  UnityEngine_RectTransform_o *local_58;
  UnityEngine_Vector2_Fields UStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  if (Il2CppMethodInitialized_07548865 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_Image);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgGameCreateCardPreview_GearRest_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgGameCreateCardPreview_StarRest_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgGameCreateCardPreview_StarRest_ToArray);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgGameCreateCardPreview_GearRest_ToArray);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgGameCreateCardPreview_StarRest_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgGameCreateCardPreview_GearRest_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_AottgGameCreateCardPreview_StarRest);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_AottgGameCreateCardPreview_GearRest);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-root-favorites-star-sandbox-");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-root-favorites-star-");
    il2cpp_codegen_initialize_runtime_metadata(&"The category reference sprite is missing.");
    Il2CppMethodInitialized_07548865 = '\x01';
  }
  pUVar7 = (UnityEngine_RectTransform_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar4 = TypeInfo_UnityEngine_RectTransform;
  if (pUVar7 == (UnityEngine_RectTransform_o *)0x0) {
    (__this->fields)._rect = (UnityEngine_RectTransform_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._rect);
    if (!favorites) goto label_05e87abb;
label_05e878e8:
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)
                           TypeInfo_System_Collections_Generic_List_AottgGameCreateCardPreview_StarRest);
    System_Collections_Generic_List_AottgGameCreateCardPreview_StarRest____ctor
              (__this_00,
               (MethodInfo_3A5C530 *)
               MethodInfo_System_Collections_Generic_List_AottgGameCreateCardPreview_StarRest_ctor);
    pSVar8 = UnityEngine_Component__GetComponentsInChildren_object_
                       ((UnityEngine_Component_o *)__this,true,
                        (MethodInfo_34B1260 *)MethodInfo_UnityEngine_Component_GetComponentsInChildren_Image);
    if (pSVar8 == (System_Object_array *)0x0) {
label_05e87ea6:
      ThrowNullReferenceException();
    }
    if (__this_00 == (System_Collections_Generic_List_AottgGameCreateCardPreview_StarRest__o *)0x0) {
      uVar6 = (uint)pSVar8->max_length;
      local_60 = __this;
      if ((int)uVar6 < 1) goto label_05e87ea6;
      lVar13 = 0;
      do {
        if (uVar6 <= (uint)lVar13) goto label_05e87e6c;
        pUVar14 = (UnityEngine_UI_Graphic_o *)pSVar8->m_Items[lVar13];
        if (pUVar14 == (UnityEngine_UI_Graphic_o *)0x0) goto label_05e87ea6;
        pSVar9 = UnityEngine_Object__get_name((UnityEngine_Object_o *)pUVar14,(MethodInfo *)0x0);
        if (pSVar9 == (System_String_o *)0x0) goto label_05e87ea6;
        bVar5 = System_String__StartsWith(pSVar9,"game-create-root-favorites-star-",(MethodInfo *)0x0);
        if (bVar5) goto label_05e87e71;
        uVar6 = (uint)pSVar8->max_length;
        lVar13 = lVar13 + 1;
      } while ((int)lVar13 < (int)uVar6);
    }
    else {
      uVar6 = (uint)pSVar8->max_length;
      local_60 = __this;
      if (0 < (int)uVar6) {
        uVar15 = 0;
        do {
          if (uVar6 <= uVar15) {
label_05e87e6c:
            ThrowIndexOutOfRangeException();
          }
          pUVar14 = (UnityEngine_UI_Graphic_o *)pSVar8->m_Items[(int)uVar15];
          if (pUVar14 == (UnityEngine_UI_Graphic_o *)0x0) goto label_05e87ea6;
          pSVar9 = UnityEngine_Object__get_name((UnityEngine_Object_o *)pUVar14,(MethodInfo *)0x0);
          if (pSVar9 == (System_String_o *)0x0) goto label_05e87ea6;
          bVar5 = System_String__StartsWith(pSVar9,"game-create-root-favorites-star-",(MethodInfo *)0x0);
          if (bVar5) {
            pUVar7 = UnityEngine_UI_Graphic__get_rectTransform(pUVar14,(MethodInfo *)0x0);
            UStack_78.x = 0.0;
            UStack_78.y = 0.0;
            UStack_70.fields = (UnityEngine_Quaternion_Fields)ZEXT816(0);
            local_80 = pUVar7;
            Il2CppCodeGenWriteBarrier(&local_80);
            if (pUVar7 == (UnityEngine_RectTransform_o *)0x0) goto label_05e87ea6;
            UStack_78 = (UnityEngine_Vector2_Fields)
                        UnityEngine_RectTransform__get_anchoredPosition(pUVar7,(MethodInfo *)0x0);
            UStack_70 = UnityEngine_Transform__get_localRotation
                                  ((UnityEngine_Transform_o *)pUVar7,(MethodInfo *)0x0);
            pMVar12 = MethodInfo_System_Collections_Generic_List_AottgGameCreateCardPreview_StarRest_Add;
            local_48._0_4_ = UStack_70.fields.x;
            local_48._4_4_ = UStack_70.fields.y;
            uStack_40._0_4_ = UStack_70.fields.z;
            uStack_40._4_4_ = UStack_70.fields.w;
            local_58 = local_80;
            UStack_50 = UStack_78;
            piVar1 = &(__this_00->fields)._version;
            *piVar1 = *piVar1 + 1;
            pGVar10 = (__this_00->fields)._items;
            if (pGVar10 == (Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_StarRest_array *)0x0)
            goto label_05e87ea6;
            uVar6 = (__this_00->fields)._size;
            if (uVar6 < (uint)pGVar10->max_length) {
              (__this_00->fields)._size = uVar6 + 1;
              pGVar2 = &pGVar10->m_Items[(int)uVar6].fields;
              (pGVar2->Rotation).fields.x = UStack_70.fields.x;
              (pGVar2->Rotation).fields.y = UStack_70.fields.y;
              (pGVar2->Rotation).fields.z = UStack_70.fields.z;
              (pGVar2->Rotation).fields.w = UStack_70.fields.w;
              pGVar10->m_Items[(int)uVar6].fields.Rect = local_80;
              pGVar10->m_Items[(int)uVar6].fields.Position.fields = UStack_78;
              Il2CppCodeGenWriteBarrier((void **)(pGVar10->m_Items + (int)uVar6));
            }
            else {
              item.fields.Position.fields = UStack_78;
              item.fields.Rect = local_80;
              item.fields.Rotation.fields.x = UStack_70.fields.x;
              item.fields.Rotation.fields.y = UStack_70.fields.y;
              item.fields.Rotation.fields.z = UStack_70.fields.z;
              item.fields.Rotation.fields.w = UStack_70.fields.w;
              System_Collections_Generic_List_AottgGameCreateCardPreview_StarRest___AddWithResize
                        (__this_00,item,(MethodInfo_3A5CEE0 *)pMVar12->klass->rgctx_data[0xe].method);
            }
          }
          uVar15 = uVar15 + 1;
          uVar6 = (uint)pSVar8->max_length;
        } while ((int)uVar15 < (int)uVar6);
      }
    }
    if (__this_00 == (System_Collections_Generic_List_AottgGameCreateCardPreview_StarRest__o *)0x0)
    goto label_05e87ea6;
    pGVar10 = System_Collections_Generic_List_AottgGameCreateCardPreview_StarRest___ToArray
                        (__this_00,
                         (MethodInfo_3A5F5E0 *)
                         MethodInfo_System_Collections_Generic_List_AottgGameCreateCardPreview_StarRest_ToArray
                        );
    targetAddress = &(local_60->fields)._stars;
    (local_60->fields)._stars = pGVar10;
  }
  else {
    if ((pUVar7->klass != TypeInfo_UnityEngine_RectTransform) ||
       ((__this->fields)._rect = pUVar7, pUVar7->klass != pUVar4)) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar7);
    }
    Il2CppCodeGenWriteBarrier(&(__this->fields)._rect);
    if (favorites) goto label_05e878e8;
label_05e87abb:
    if (!sandbox) {
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar5 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)fallback,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar5) {
        if (fallback == (UnityEngine_UI_Image_o *)0x0) goto label_05e87ea6;
        x = (UnityEngine_Object_o *)(fallback->fields).m_Sprite;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar5 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar5) {
          Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__BuildLayers(__this,fallback,method_00);
          goto label_05e87e51;
        }
      }
      pSVar9 = UnityEngine_Object__get_name((UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
      pMVar12 = extraout_RDX;
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview);
        pMVar12 = extraout_RDX_00;
      }
      Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__ReportFallback(pSVar9,"The category reference sprite is missing.",pMVar12);
      goto label_05e87e51;
    }
    __this_01 = il2cpp_codegen_object_new
                          ((Il2CppClass *)
                           TypeInfo_System_Collections_Generic_List_AottgGameCreateCardPreview_GearRest);
    System_Collections_Generic_List_AottgGameCreateCardPreview_GearRest____ctor
              (__this_01,
               (MethodInfo_3A58E90 *)
               MethodInfo_System_Collections_Generic_List_AottgGameCreateCardPreview_GearRest_ctor);
    pSVar8 = UnityEngine_Component__GetComponentsInChildren_object_
                       ((UnityEngine_Component_o *)__this,true,
                        (MethodInfo_34B1260 *)MethodInfo_UnityEngine_Component_GetComponentsInChildren_Image);
    if (pSVar8 == (System_Object_array *)0x0) goto label_05e87ea6;
    if (__this_01 == (System_Collections_Generic_List_AottgGameCreateCardPreview_GearRest__o *)0x0) {
      uVar6 = (uint)pSVar8->max_length;
      local_60 = __this;
      if ((int)uVar6 < 1) goto label_05e87ea6;
      lVar13 = 0;
      do {
        if (uVar6 <= (uint)lVar13) goto label_05e87e6c;
        pUVar14 = (UnityEngine_UI_Graphic_o *)pSVar8->m_Items[lVar13];
        if (pUVar14 == (UnityEngine_UI_Graphic_o *)0x0) goto label_05e87ea6;
        pSVar9 = UnityEngine_Object__get_name((UnityEngine_Object_o *)pUVar14,(MethodInfo *)0x0);
        if (pSVar9 == (System_String_o *)0x0) goto label_05e87ea6;
        bVar5 = System_String__StartsWith(pSVar9,"game-create-root-favorites-star-sandbox-",(MethodInfo *)0x0);
        if (bVar5) goto label_05e87e71;
        uVar6 = (uint)pSVar8->max_length;
        lVar13 = lVar13 + 1;
      } while ((int)lVar13 < (int)uVar6);
    }
    else {
      uVar6 = (uint)pSVar8->max_length;
      local_60 = __this;
      if (0 < (int)uVar6) {
        uVar15 = 0;
        do {
          if (uVar6 <= uVar15) goto label_05e87e6c;
          pUVar14 = (UnityEngine_UI_Graphic_o *)pSVar8->m_Items[(int)uVar15];
          if (pUVar14 == (UnityEngine_UI_Graphic_o *)0x0) goto label_05e87ea6;
          pSVar9 = UnityEngine_Object__get_name((UnityEngine_Object_o *)pUVar14,(MethodInfo *)0x0);
          if (pSVar9 == (System_String_o *)0x0) goto label_05e87ea6;
          bVar5 = System_String__StartsWith(pSVar9,"game-create-root-favorites-star-sandbox-",(MethodInfo *)0x0);
          if (bVar5) {
            pUVar7 = UnityEngine_UI_Graphic__get_rectTransform(pUVar14,(MethodInfo *)0x0);
            UStack_78.x = 0.0;
            UStack_78.y = 0.0;
            UStack_70.fields = (UnityEngine_Quaternion_Fields)ZEXT816(0);
            local_80 = pUVar7;
            Il2CppCodeGenWriteBarrier(&local_80);
            if (pUVar7 == (UnityEngine_RectTransform_o *)0x0) goto label_05e87ea6;
            UStack_78 = (UnityEngine_Vector2_Fields)
                        UnityEngine_RectTransform__get_anchoredPosition(pUVar7,(MethodInfo *)0x0);
            UStack_70 = UnityEngine_Transform__get_localRotation
                                  ((UnityEngine_Transform_o *)pUVar7,(MethodInfo *)0x0);
            pMVar12 = MethodInfo_System_Collections_Generic_List_AottgGameCreateCardPreview_GearRest_Add;
            local_48._0_4_ = UStack_70.fields.x;
            local_48._4_4_ = UStack_70.fields.y;
            uStack_40._0_4_ = UStack_70.fields.z;
            uStack_40._4_4_ = UStack_70.fields.w;
            local_58 = local_80;
            UStack_50 = UStack_78;
            piVar1 = &(__this_01->fields)._version;
            *piVar1 = *piVar1 + 1;
            pGVar11 = (__this_01->fields)._items;
            if (pGVar11 == (Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_GearRest_array *)0x0)
            goto label_05e87ea6;
            uVar6 = (__this_01->fields)._size;
            if (uVar6 < (uint)pGVar11->max_length) {
              (__this_01->fields)._size = uVar6 + 1;
              pGVar3 = &pGVar11->m_Items[(int)uVar6].fields;
              (pGVar3->Rotation).fields.x = UStack_70.fields.x;
              (pGVar3->Rotation).fields.y = UStack_70.fields.y;
              (pGVar3->Rotation).fields.z = UStack_70.fields.z;
              (pGVar3->Rotation).fields.w = UStack_70.fields.w;
              pGVar11->m_Items[(int)uVar6].fields.Rect = local_80;
              pGVar11->m_Items[(int)uVar6].fields.Position.fields = UStack_78;
              Il2CppCodeGenWriteBarrier((void **)(pGVar11->m_Items + (int)uVar6));
            }
            else {
              item_00.fields.Position.fields = UStack_78;
              item_00.fields.Rect = local_80;
              item_00.fields.Rotation.fields.x = UStack_70.fields.x;
              item_00.fields.Rotation.fields.y = UStack_70.fields.y;
              item_00.fields.Rotation.fields.z = UStack_70.fields.z;
              item_00.fields.Rotation.fields.w = UStack_70.fields.w;
              System_Collections_Generic_List_AottgGameCreateCardPreview_GearRest___AddWithResize
                        (__this_01,item_00,(MethodInfo_3A59840 *)pMVar12->klass->rgctx_data[0xe].method);
            }
          }
          uVar15 = uVar15 + 1;
          uVar6 = (uint)pSVar8->max_length;
        } while ((int)uVar15 < (int)uVar6);
      }
    }
    if (__this_01 == (System_Collections_Generic_List_AottgGameCreateCardPreview_GearRest__o *)0x0)
    goto label_05e87ea6;
    pGVar11 = System_Collections_Generic_List_AottgGameCreateCardPreview_GearRest___ToArray
                        (__this_01,
                         (MethodInfo_3A5BF40 *)
                         MethodInfo_System_Collections_Generic_List_AottgGameCreateCardPreview_GearRest_ToArray
                        );
    targetAddress =
         (Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_StarRest_array **)&(local_60->fields)._gears;
    (local_60->fields)._gears = pGVar11;
  }
  __this = local_60;
  Il2CppCodeGenWriteBarrier(targetAddress);
label_05e87e51:
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this,false,(MethodInfo *)0x0);
  return;
label_05e87e71:
  pUVar7 = UnityEngine_UI_Graphic__get_rectTransform(pUVar14,(MethodInfo *)0x0);
  UStack_78.x = 0.0;
  UStack_78.y = 0.0;
  UStack_70.fields = (UnityEngine_Quaternion_Fields)ZEXT816(0);
  local_80 = pUVar7;
  Il2CppCodeGenWriteBarrier(&local_80);
  if (pUVar7 != (UnityEngine_RectTransform_o *)0x0) {
    UStack_78 = (UnityEngine_Vector2_Fields)
                UnityEngine_RectTransform__get_anchoredPosition(pUVar7,(MethodInfo *)0x0);
    UStack_70 = UnityEngine_Transform__get_localRotation((UnityEngine_Transform_o *)pUVar7,(MethodInfo *)0x0);
    ThrowNullReferenceException();
  }
  goto label_05e87ea6;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCardPreview$$BuildLayers
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__BuildLayers (Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_o* __this, UnityEngine_UI_Image_o* fallback, const MethodInfo* method);
// 0x5e87f80
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e887e7: xor eax, eax
// asm:   0x5e887e9: nop dword ptr [rax]

void Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__BuildLayers
               (Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_o *__this,UnityEngine_UI_Image_o *fallback,
               MethodInfo *method)

{
  void **targetAddress;
  UnityEngine_Material_o **targetAddress_00;
  Il2CppType *pIVar1;
  Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_o *pGVar2;
  bool bVar3;
  bool bVar4;
  int32_t iVar5;
  System_String_o *pSVar6;
  Il2CppObject *pIVar7;
  System_String_o *pSVar8;
  Il2CppClass *pIVar9;
  UnityEngine_Sprite_o *pUVar10;
  UnityEngine_Object_o *pUVar11;
  MethodInfo *pMVar12;
  UnityEngine_Material_o *pUVar13;
  Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane_array *pGVar14;
  Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane_o *pGVar15;
  System_Type_array *pSVar16;
  System_Type_o *pSVar17;
  Il2CppObject *pIVar18;
  UnityEngine_GameObject_o *pUVar19;
  UnityEngine_Transform_o *pUVar20;
  UnityEngine_UI_LayoutElement_o *pUVar21;
  UnityEngine_RectTransform_o *rect;
  UnityEngine_UI_Image_o *pUVar22;
  uint uVar23;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  MethodInfo *extraout_RDX_07;
  long lVar24;
  Il2CppObject *targetAddress_01;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane_array **targetAddress_02;
  undefined4 in_XMM1_Dc;
  undefined4 uVar25;
  undefined4 in_XMM1_Dd;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  UnityEngine_Rect_o UVar29;
  uint local_64;
  UnityEngine_UI_Image_o *local_60;
  undefined1 local_58 [24];
  Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_o *local_40;
  MethodInfo *local_38;
  
  if (Il2CppMethodInitialized_07548866 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Resources_Load_Shader);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Resources_Load_Sprite);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Sprite_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"Foreground");
    il2cpp_codegen_initialize_runtime_metadata(&"Shaders/PreviewPerspective");
    il2cpp_codegen_initialize_runtime_metadata(&"Midground");
    il2cpp_codegen_initialize_runtime_metadata(&"Depth layers are missing or have mismatched dimensions; using the original image.");
    il2cpp_codegen_initialize_runtime_metadata(&"PreviewPerspective");
    il2cpp_codegen_initialize_runtime_metadata(&"Background");
    il2cpp_codegen_initialize_runtime_metadata(&"-depth");
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    il2cpp_codegen_initialize_runtime_metadata(&"-depth-");
    il2cpp_codegen_initialize_runtime_metadata(&"The category perspective shader is unavailable; using the static original image.");
    il2cpp_codegen_initialize_runtime_metadata(&"Data/ExperiencePreview/Layers/");
    Il2CppMethodInitialized_07548866 = '\x01';
  }
  local_64 = 0;
  if (fallback == (UnityEngine_UI_Image_o *)0x0) goto label_05e88a88;
  pUVar11 = (UnityEngine_Object_o *)(fallback->fields).m_Sprite;
  local_60 = fallback;
  if (pUVar11 == (UnityEngine_Object_o *)0x0) goto label_05e88a88;
  pSVar6 = UnityEngine_Object__get_name(pUVar11,(MethodInfo *)0x0);
  pSVar6 = System_String__Concat_5301f10("Data/ExperiencePreview/Layers/",pSVar6,"/",(MethodInfo *)0x0)
  ;
  pIVar7 = SZArrayNew(TypeInfo_UnityEngine_Sprite_array,3);
  pSVar8 = System_String__Concat_52f0320(pSVar6,"Background",(MethodInfo *)0x0);
  pIVar9 = (Il2CppClass *)
           UnityEngine_Resources__Load_object_
                     (pSVar8,(MethodInfo_3665C30 *)MethodInfo_UnityEngine_Resources_Load_Sprite);
  if (pIVar7 == (Il2CppObject *)0x0) goto label_05e88a88;
  local_40 = __this;
  if (*(int *)&pIVar7[1].monitor == 0) goto label_05e88a8d;
  pIVar18 = pIVar7 + 2;
  pIVar7[2].klass = pIVar9;
  Il2CppCodeGenWriteBarrier(&pIVar18->klass);
  pSVar8 = System_String__Concat_52f0320(pSVar6,"Midground",(MethodInfo *)0x0);
  pUVar10 = UnityEngine_Resources__Load_object_
                      (pSVar8,(MethodInfo_3665C30 *)MethodInfo_UnityEngine_Resources_Load_Sprite);
  if (((ulong)pIVar7[1].monitor & 0xfffffffe) == 0) goto label_05e88a8d;
  targetAddress = &pIVar7[2].monitor;
  pIVar7[2].monitor = pUVar10;
  Il2CppCodeGenWriteBarrier(targetAddress);
  pSVar8 = System_String__Concat_52f0320(pSVar6,"Foreground",(MethodInfo *)0x0);
  pIVar9 = (Il2CppClass *)
           UnityEngine_Resources__Load_object_
                     (pSVar8,(MethodInfo_3665C30 *)MethodInfo_UnityEngine_Resources_Load_Sprite);
  if (*(uint *)&pIVar7[1].monitor < 3) goto label_05e88a8d;
  targetAddress_01 = pIVar7 + 3;
  pIVar7[3].klass = pIVar9;
  Il2CppCodeGenWriteBarrier(&targetAddress_01->klass);
  if (*(int *)&pIVar7[1].monitor == 0) goto label_05e88a8d;
  pIVar9 = pIVar18->klass;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pIVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pMVar12 = extraout_RDX;
  if (bVar3) {
    if (((ulong)pIVar7[1].monitor & 0xfffffffe) == 0) goto label_05e88a8d;
    pUVar11 = *targetAddress;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality(pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    pMVar12 = extraout_RDX_00;
    if (!bVar3) goto label_05e883cd;
    if (*(uint *)&pIVar7[1].monitor < 3) goto label_05e88a8d;
    pIVar9 = targetAddress_01->klass;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pIVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    pMVar12 = extraout_RDX_01;
    if (!bVar3) goto label_05e883cd;
    if (*(int *)&pIVar7[1].monitor == 0) goto label_05e88a8d;
    if (pIVar18->klass == (Il2CppClass *)0x0) goto label_05e88a88;
    UVar29 = UnityEngine_Sprite__get_rect((UnityEngine_Sprite_o *)pIVar18->klass,(MethodInfo *)0x0);
    local_58._8_4_ = in_XMM1_Dc;
    local_58._0_8_ = UVar29.fields._8_8_;
    local_58._12_4_ = in_XMM1_Dd;
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
    if (((ulong)pIVar7[1].monitor & 0xfffffffe) == 0) goto label_05e88a8d;
    if (*targetAddress == (UnityEngine_Sprite_o *)0x0) goto label_05e88a88;
    UVar29 = UnityEngine_Sprite__get_rect(*targetAddress,(MethodInfo *)0x0);
    fVar27 = (float)local_58._0_4_ - UVar29.fields.m_Width;
    fVar28 = (float)local_58._4_4_ - UVar29.fields.m_Height;
    uVar25 = 0;
    uVar26 = 0;
    pMVar12 = extraout_RDX_02;
    if (9.9999994e-11 <= fVar28 * fVar28 + fVar27 * fVar27) goto label_05e883cd;
    if (*(int *)&pIVar7[1].monitor == 0) goto label_05e88a8d;
    if (pIVar18->klass == (Il2CppClass *)0x0) goto label_05e88a88;
    UVar29 = UnityEngine_Sprite__get_rect((UnityEngine_Sprite_o *)pIVar18->klass,(MethodInfo *)0x0);
    local_58._8_4_ = uVar25;
    local_58._0_8_ = UVar29.fields._8_8_;
    local_58._12_4_ = uVar26;
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
    if (*(uint *)&pIVar7[1].monitor < 3) goto label_05e88a8d;
    if (targetAddress_01->klass == (Il2CppClass *)0x0) goto label_05e88a88;
    bVar3 = false;
    UVar29 = UnityEngine_Sprite__get_rect((UnityEngine_Sprite_o *)targetAddress_01->klass,(MethodInfo *)0x0);
    fVar27 = (float)local_58._0_4_ - UVar29.fields.m_Width;
    fVar28 = (float)local_58._4_4_ - UVar29.fields.m_Height;
    pMVar12 = extraout_RDX_03;
    if (9.9999994e-11 <= fVar28 * fVar28 + fVar27 * fVar27) goto label_05e883cd;
  }
  else {
label_05e883cd:
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview);
      pMVar12 = extraout_RDX_04;
    }
    Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__ReportFallback(pSVar6,"Depth layers are missing or have mismatched dimensions; using the original image.",pMVar12);
    bVar3 = true;
  }
  pUVar11 = (UnityEngine_Object_o *)
            UnityEngine_Resources__Load_object_
                      ("Shaders/PreviewPerspective",
                       (MethodInfo_3665C30 *)MethodInfo_UnityEngine_Resources_Load_Shader);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Equality(pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pGVar2 = local_40;
  pMVar12 = extraout_RDX_05;
  if (!bVar4) {
    if (pUVar11 != (UnityEngine_Object_o *)0x0) {
      bVar4 = UnityEngine_Shader__get_isSupported((UnityEngine_Shader_o *)pUVar11,(MethodInfo *)0x0);
      pMVar12 = extraout_RDX_06;
      if (!bVar4) goto label_05e88579;
      pMVar12 = (MethodInfo *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Material);
      UnityEngine_Material___ctor
                ((UnityEngine_Material_o *)pMVar12,(UnityEngine_Shader_o *)pUVar11,(MethodInfo *)0x0);
      targetAddress_00 = &(pGVar2->fields)._material;
      (pGVar2->fields)._material = (UnityEngine_Material_o *)pMVar12;
      local_58._0_8_ = targetAddress_00;
      Il2CppCodeGenWriteBarrier(targetAddress_00);
      Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__EnsureCanvas(pGVar2,pMVar12);
      pUVar22 = local_60;
      if (bVar3) {
        (pGVar2->fields)._fallback = local_60;
        Il2CppCodeGenWriteBarrier(&(pGVar2->fields)._fallback);
        pUVar13 = (*(pUVar22->klass->vtable)._32_get_material.methodPtr)
                            (pUVar22,(pUVar22->klass->vtable)._32_get_material.method);
        (pGVar2->fields)._fallbackMaterial = pUVar13;
        Il2CppCodeGenWriteBarrier(&(pGVar2->fields)._fallbackMaterial);
        (*(pUVar22->klass->vtable)._33_set_material.methodPtr)
                  (pUVar22,(pGVar2->fields)._material,(pUVar22->klass->vtable)._33_set_material.method);
        pMVar12 = (MethodInfo *)0x1;
        pGVar14 = (Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane_array *)
                  SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane_array,1);
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview);
        }
        pGVar15 = Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__AddPlane(pUVar22,0.0,pMVar12);
        if (pGVar14 != (Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane_array *)0x0) {
          if ((int)pGVar14->max_length != 0) {
            pGVar14->m_Items[0] = pGVar15;
            Il2CppCodeGenWriteBarrier(pGVar14->m_Items);
            (pGVar2->fields)._planes = pGVar14;
            Il2CppCodeGenWriteBarrier(&(pGVar2->fields)._planes);
            return;
          }
          goto label_05e88a8d;
        }
      }
      else {
        pSVar6 = UnityEngine_Object__get_name((UnityEngine_Object_o *)pGVar2,(MethodInfo *)0x0);
        pSVar6 = System_String__Concat_52f0320(pSVar6,"-depth",(MethodInfo *)0x0);
        pSVar16 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,2);
        pIVar1 = TypeRef_UnityEngine_RectTransform;
        if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(g_data_075567a8);
        }
        pSVar17 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)pIVar1,(MethodInfo *)0x0);
        if (pSVar16 != (System_Type_array *)0x0) {
          if ((pSVar17 != (System_Type_o *)0x0) &&
             (pIVar18 = il2cpp_vm_Object_IsInst
                                  ((Il2CppObject *)pSVar17,(((pSVar16->obj).klass)->_1).element_class),
             pIVar18 == (Il2CppObject *)0x0)) {
label_05e88a92:
            pIVar7 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar7,(MethodInfo *)0x0);
          }
          if ((int)pSVar16->max_length != 0) {
            pSVar16->m_Items[0] = pSVar17;
            Il2CppCodeGenWriteBarrier(pSVar16->m_Items);
            pSVar17 = System_Type__GetTypeFromHandle
                                ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_LayoutElement,
                                 (MethodInfo *)0x0);
            if ((pSVar17 != (System_Type_o *)0x0) &&
               (pIVar18 = il2cpp_vm_Object_IsInst
                                    ((Il2CppObject *)pSVar17,(((pSVar16->obj).klass)->_1).element_class),
               pIVar18 == (Il2CppObject *)0x0)) goto label_05e88a92;
            if ((pSVar16->max_length & 0xfffffffe) != 0) {
              pSVar16->m_Items[1] = pSVar17;
              Il2CppCodeGenWriteBarrier(pSVar16->m_Items + 1);
              pUVar19 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
              UnityEngine_GameObject___ctor_691aa60(pUVar19,pSVar6,pSVar16,(MethodInfo *)0x0);
              if (pUVar19 != (UnityEngine_GameObject_o *)0x0) {
                pMVar12 = (MethodInfo *)UnityEngine_GameObject__get_transform(pUVar19,(MethodInfo *)0x0);
                pGVar2 = local_40;
                if (pMVar12 == (MethodInfo *)0x0) {
                  UnityEngine_Component__get_transform((UnityEngine_Component_o *)local_40,(MethodInfo *)0x0);
                  ThrowNullReferenceException();
                }
                if ((UnityEngine_RectTransform_c *)pMVar12->methodPointer !=
                    TypeInfo_UnityEngine_RectTransform) {
                  il2cpp_codegen_raise_invalid_cast_exception(pMVar12);
                }
                pUVar20 = UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)local_40,(MethodInfo *)0x0);
                UnityEngine_Transform__SetParent_692d510
                          ((UnityEngine_Transform_o *)pMVar12,pUVar20,false,(MethodInfo *)0x0);
                pUVar20 = UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)local_60,(MethodInfo *)0x0);
                if (pUVar20 != (UnityEngine_Transform_o *)0x0) {
                  iVar5 = UnityEngine_Transform__GetSiblingIndex(pUVar20,(MethodInfo *)0x0);
                  method_00 = (MethodInfo *)(ulong)(iVar5 + 1U);
                  UnityEngine_Transform__SetSiblingIndex
                            ((UnityEngine_Transform_o *)pMVar12,iVar5 + 1U,(MethodInfo *)0x0);
                  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview->_2).
                      cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview);
                  }
                  local_38 = pMVar12;
                  Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__Stretch
                            ((UnityEngine_RectTransform_o *)pMVar12,method_00);
                  pUVar21 = UnityEngine_GameObject__GetComponent_object_
                                      (pUVar19,(MethodInfo_353B730 *)
                                               MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
                  if (pUVar21 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                    (*(pUVar21->klass->vtable)._28_set_ignoreLayout.methodPtr)
                              (pUVar21,true,(pUVar21->klass->vtable)._28_set_ignoreLayout.method);
                    pGVar14 = (Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane_array *)
                              SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane_array,
                                         *(uint32_t *)&pIVar7[1].monitor);
                    (pGVar2->fields)._planes = pGVar14;
                    targetAddress_02 = &(pGVar2->fields)._planes;
                    Il2CppCodeGenWriteBarrier(targetAddress_02);
                    local_64 = 0;
                    uVar23 = *(uint *)&pIVar7[1].monitor;
                    if (0 < (int)uVar23) {
                      do {
                        if (uVar23 <= local_64) goto label_05e88a8d;
                        if ((&pIVar7[2].klass)[(int)local_64] == (Il2CppClass *)0x0) goto label_05e88a88;
                        pSVar6 = UnityEngine_Object__get_name
                                           ((UnityEngine_Object_o *)(&pIVar7[2].klass)[(int)local_64],
                                            (MethodInfo *)0x0);
                        pSVar8 = System_Int32__ToString((int32_t *)&local_64,(MethodInfo *)0x0);
                        pSVar6 = System_String__Concat_5301f10
                                           (pSVar6,"-depth-",pSVar8,(MethodInfo *)0x0);
                        pSVar16 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,2);
                        pIVar1 = TypeRef_UnityEngine_RectTransform;
                        if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
                          il2cpp_codegen_runtime_class_init(g_data_075567a8);
                        }
                        pSVar17 = System_Type__GetTypeFromHandle
                                            ((System_RuntimeTypeHandle_o)pIVar1,(MethodInfo *)0x0);
                        if (pSVar16 == (System_Type_array *)0x0) goto label_05e88a88;
                        if ((pSVar17 != (System_Type_o *)0x0) &&
                           (pIVar18 = il2cpp_vm_Object_IsInst
                                                ((Il2CppObject *)pSVar17,
                                                 (((pSVar16->obj).klass)->_1).element_class),
                           pIVar18 == (Il2CppObject *)0x0)) goto label_05e88a92;
                        if ((int)pSVar16->max_length == 0) goto label_05e88a8d;
                        pSVar16->m_Items[0] = pSVar17;
                        Il2CppCodeGenWriteBarrier(pSVar16->m_Items);
                        pSVar17 = System_Type__GetTypeFromHandle
                                            ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_Image,
                                             (MethodInfo *)0x0);
                        if ((pSVar17 != (System_Type_o *)0x0) &&
                           (pIVar18 = il2cpp_vm_Object_IsInst
                                                ((Il2CppObject *)pSVar17,
                                                 (((pSVar16->obj).klass)->_1).element_class),
                           pIVar18 == (Il2CppObject *)0x0)) goto label_05e88a92;
                        if ((pSVar16->max_length & 0xfffffffe) == 0) goto label_05e88a8d;
                        pSVar16->m_Items[1] = pSVar17;
                        Il2CppCodeGenWriteBarrier(pSVar16->m_Items + 1);
                        pUVar19 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
                        UnityEngine_GameObject___ctor_691aa60(pUVar19,pSVar6,pSVar16,(MethodInfo *)0x0);
                        if ((pUVar19 == (UnityEngine_GameObject_o *)0x0) ||
                           (rect = (UnityEngine_RectTransform_o *)
                                   UnityEngine_GameObject__get_transform(pUVar19,(MethodInfo *)0x0),
                           rect == (UnityEngine_RectTransform_o *)0x0)) goto label_05e88a88;
                        if (rect->klass != TypeInfo_UnityEngine_RectTransform) {
                          il2cpp_codegen_raise_invalid_cast_exception(rect);
                        }
                        pMVar12 = local_38;
                        UnityEngine_Transform__SetParent_692d510
                                  ((UnityEngine_Transform_o *)rect,(UnityEngine_Transform_o *)local_38,false,
                                   (MethodInfo *)0x0);
                        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview->_2).
                            cctor_finished_or_no_cctor == 0) {
                          il2cpp_codegen_runtime_class_init
                                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview
                                    );
                        }
                        Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__Stretch(rect,pMVar12);
                        pUVar22 = UnityEngine_GameObject__GetComponent_object_
                                            (pUVar19,(MethodInfo_353B730 *)
                                                     MethodInfo_UnityEngine_GameObject_GetComponent_Image);
                        if (*(uint *)&pIVar7[1].monitor <= local_64) goto label_05e88a8d;
                        if (pUVar22 == (UnityEngine_UI_Image_o *)0x0) goto label_05e88a88;
                        UnityEngine_UI_Image__set_sprite
                                  (pUVar22,(UnityEngine_Sprite_o *)(&pIVar7[2].klass)[(int)local_64],
                                   (MethodInfo *)0x0);
                        UnityEngine_UI_Image__set_preserveAspect(pUVar22,true,(MethodInfo *)0x0);
                        (*(pUVar22->klass->vtable)._33_set_material.methodPtr)
                                  (pUVar22,*(UnityEngine_Material_o **)local_58._0_8_,
                                   (pUVar22->klass->vtable)._33_set_material.method);
                        pMVar12 = (MethodInfo *)0x0;
                        (*(pUVar22->klass->vtable)._25_set_raycastTarget.methodPtr)
                                  (pUVar22,false,(pUVar22->klass->vtable)._25_set_raycastTarget.method);
                        uVar23 = local_64;
                        pGVar14 = *targetAddress_02;
                        lVar24 = (long)(int)local_64;
                        pGVar15 = Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__AddPlane
                                            (pUVar22,(float)(int)local_64 * 0.5,pMVar12);
                        if (pGVar14 == (Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane_array *)0x0)
                        goto label_05e88a88;
                        if ((uint)pGVar14->max_length <= uVar23) goto label_05e88a8d;
                        pGVar14->m_Items[lVar24] = pGVar15;
                        Il2CppCodeGenWriteBarrier(pGVar14->m_Items + lVar24);
                        local_64 = local_64 + 1;
                        uVar23 = *(uint *)&pIVar7[1].monitor;
                      } while ((int)local_64 < (int)uVar23);
                    }
                    UnityEngine_Behaviour__set_enabled
                              ((UnityEngine_Behaviour_o *)local_60,false,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
              goto label_05e88a88;
            }
          }
label_05e88a8d:
          ThrowIndexOutOfRangeException();
        }
      }
    }
label_05e88a88:
    ThrowNullReferenceException();
  }
label_05e88579:
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview);
    pMVar12 = extraout_RDX_07;
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__ReportFallback
            ("PreviewPerspective","The category perspective shader is unavailable; using the static original image.",pMVar12);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCardPreview$$Stretch
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__Stretch (UnityEngine_RectTransform_o* rect, const MethodInfo* method);
// 0x5e88d40

void Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__Stretch
               (UnityEngine_RectTransform_o *rect,MethodInfo *method)

{
  if (Il2CppMethodInitialized_0753ecc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_0753ecc8 = '\x01';
  }
  if (rect == (UnityEngine_RectTransform_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_RectTransform__set_anchorMin
            (rect,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
             (MethodInfo *)0x0);
  if (Il2CppMethodInitialized_07542885 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_07542885 = '\x01';
  }
  UnityEngine_RectTransform__set_anchorMax
            (rect,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields,
             (MethodInfo *)0x0);
  UnityEngine_RectTransform__set_pivot(rect,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_0753ecc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_0753ecc8 = '\x01';
  }
  UnityEngine_RectTransform__set_sizeDelta
            (rect,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
             (MethodInfo *)0x0);
  if (Il2CppMethodInitialized_0753ecc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_0753ecc8 = '\x01';
  }
  UnityEngine_RectTransform__set_anchoredPosition
            (rect,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
             (MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCardPreview$$AddPlane
// il2cpp: Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane_o* Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__AddPlane (UnityEngine_UI_Image_o* image, float depth, const MethodInfo* method);
// 0x5e88ca0

Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane_o *
Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__AddPlane
          (UnityEngine_UI_Image_o *image,float depth,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane_o *__this_00;
  UnityEngine_UI_Graphic_o *pUVar1;
  
  if (Il2CppMethodInitialized_07548867 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgGameCreatePreviewPlane);
    Il2CppMethodInitialized_07548867 = '\x01';
  }
  if (image != (UnityEngine_UI_Image_o *)0x0) {
    __this = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)image,(MethodInfo *)0x0);
    if (__this != (UnityEngine_GameObject_o *)0x0) {
      __this_00 = UnityEngine_GameObject__AddComponent_object_
                            (__this,(MethodInfo_353B6A0 *)
                                    MethodInfo_UnityEngine_GameObject_AddComponent_AottgGameCreatePreviewPlane
                            );
      if (__this_00 != (Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane_o *)0x0) {
        (__this_00->fields)._depth = depth;
        pUVar1 = UnityEngine_UI_BaseMeshEffect__get_graphic
                           ((UnityEngine_UI_BaseMeshEffect_o *)__this_00,(MethodInfo *)0x0);
        if (pUVar1 != (UnityEngine_UI_Graphic_o *)0x0) {
          (*(pUVar1->klass->vtable)._28_SetVerticesDirty.methodPtr)
                    (pUVar1,(pUVar1->klass->vtable)._28_SetVerticesDirty.method);
          return __this_00;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCardPreview$$EnsureCanvas
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__EnsureCanvas (Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_o* __this, const MethodInfo* method);
// 0x5e88bb0

void Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__EnsureCanvas
               (Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_o *__this,MethodInfo *method)

{
  UnityEngine_Canvas_o **targetAddress;
  bool bVar1;
  uint uVar2;
  UnityEngine_Canvas_o *pUVar3;
  
  if (Il2CppMethodInitialized_07548868 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponentInParent_Canvas);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07548868 = '\x01';
  }
  pUVar3 = (__this->fields)._canvas;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  targetAddress = &(__this->fields)._canvas;
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar3 = UnityEngine_Component__GetComponentInParent_object__34b0d00
                       ((UnityEngine_Component_o *)__this,
                        (MethodInfo_34B0D00 *)MethodInfo_UnityEngine_Component_GetComponentInParent_Canvas);
    (__this->fields)._canvas = pUVar3;
    Il2CppCodeGenWriteBarrier(targetAddress);
  }
  pUVar3 = *targetAddress;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar3 = *targetAddress;
    if (pUVar3 == (UnityEngine_Canvas_o *)0x0) {
      ThrowNullReferenceException();
    }
    uVar2 = UnityEngine_Canvas__get_additionalShaderChannels(pUVar3,(MethodInfo *)0x0);
    UnityEngine_Canvas__set_additionalShaderChannels(pUVar3,uVar2 | 1,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCardPreview$$SetPointer
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__SetPointer (Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_o* __this, bool hovered, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5e88e80

void Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__SetPointer
               (Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_o *__this,bool hovered,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_Fields UVar2;
  char cVar3;
  bool bVar4;
  UnityEngine_Camera_o *pUVar5;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *method_00;
  float fVar6;
  float fVar7;
  
  if (Il2CppMethodInitialized_07548869 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    Il2CppMethodInitialized_07548869 = '\x01';
  }
  (__this->fields)._hovered = hovered;
  if (eventData != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    (__this->fields)._pointerPosition.fields = (eventData->fields)._position_k__BackingField.fields;
    (__this->fields)._pointerId = (eventData->fields)._pointerId_k__BackingField;
    pUVar5 = UnityEngine_EventSystems_PointerEventData__get_enterEventCamera(eventData,(MethodInfo *)0x0);
    (__this->fields)._eventCamera = pUVar5;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._eventCamera);
  }
  __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  method_00 = (MethodInfo *)0x0;
  bVar4 = UnityEngine_GameObject__get_activeInHierarchy(__this_00,(MethodInfo *)0x0);
  if (bVar4) {
    if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
      cVar3 = TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->static_fields->Enabled;
    }
    else {
      cVar3 = TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->static_fields->Enabled;
    }
    if (cVar3 != '\0') {
      if (hovered) {
        Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__EnsureCanvas(__this,method_00);
        bVar4 = true;
      }
      else {
        UVar1 = (__this->fields)._tilt.fields;
        if (Il2CppMethodInitialized_0753ecc8 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
          Il2CppMethodInitialized_0753ecc8 = '\x01';
        }
        UVar2 = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields;
        fVar6 = UVar1.x - UVar2.x;
        fVar7 = UVar1.y - UVar2.y;
        bVar4 = true;
        if ((fVar7 * fVar7 + fVar6 * fVar6 < 9.9999994e-11) && ((__this->fields)._starStrength <= 0.0)) {
          bVar4 = 0.0 < (__this->fields)._gearStrength;
        }
      }
      goto label_05e88f57;
    }
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__ResetMotion(__this,method_00);
  bVar4 = false;
label_05e88f57:
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this,bVar4,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCardPreview$$MovePointer
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__MovePointer (Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5e89000

void Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__MovePointer
               (Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  UnityEngine_Camera_o *pUVar1;
  
  if (eventData == (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields)._pointerPosition.fields = (eventData->fields)._position_k__BackingField.fields;
  (__this->fields)._pointerId = (eventData->fields)._pointerId_k__BackingField;
  pUVar1 = UnityEngine_EventSystems_PointerEventData__get_enterEventCamera(eventData,(MethodInfo *)0x0);
  (__this->fields)._eventCamera = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._eventCamera);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCardPreview$$Update
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__Update (Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_o* __this, const MethodInfo* method);
// 0x5e89370
// asm: 10 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e894b3: xorps xmm0, xmm0
// asm:   0x5e894b6: ucomiss xmm1, xmm0
// asm:   0x5e894b9: ja 0x5e8950b
// asm:   0x5e894bb: jmp 0x5e89649
// asm:   0x5e8952b: shufps xmm1, xmm1, 0x55
// asm:   0x5e8952f: xorps xmm0, xmm0
// asm:   0x5e89532: ucomiss xmm1, xmm0
// asm:   0x5e89535: ja 0x5e89559
// asm:   0x5e89537: jmp 0x5e89649
// asm:   0x5e8976f: jmp 0x5e898ad

void Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__Update
               (Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_o *__this,MethodInfo *method)

{
  float *pfVar1;
  UnityEngine_Vector2_Fields UVar2;
  char cVar3;
  UnityEngine_RectTransform_o *pUVar4;
  Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane_array *pGVar5;
  Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane_o *__this_00;
  Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_StarRest_array *pGVar6;
  Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_GearRest_array *pGVar7;
  bool bVar8;
  il2cpp_array_size_t iVar9;
  UnityEngine_UI_Graphic_o *pUVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar17 [12];
  undefined1 auVar18 [12];
  UnityEngine_Vector2_Fields UVar16;
  float fVar15;
  float fVar20;
  undefined1 auVar19 [16];
  float fVar21;
  undefined1 auVar22 [16];
  UnityEngine_Rect_o UVar23;
  UnityEngine_Rect_o UVar24;
  UnityEngine_Vector3_o UVar25;
  float local_78;
  float fStack_74;
  UnityEngine_Vector2_Fields local_68;
  UnityEngine_Vector2_Fields local_50;
  undefined8 local_48;
  float fStack_40;
  float fStack_3c;
  undefined8 local_38;
  float fStack_30;
  float fStack_2c;
  
  if (Il2CppMethodInitialized_0754886a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransformUtility);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_0754886a = '\x01';
  }
  local_50.x = 0.0;
  local_50.y = 0.0;
  if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    cVar3 = TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->static_fields->Enabled;
  }
  else {
    cVar3 = TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->static_fields->Enabled;
  }
  if (cVar3 == '\0') {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this,false,(MethodInfo *)0x0);
    return;
  }
  if (Il2CppMethodInitialized_0753ecc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_0753ecc8 = '\x01';
  }
  local_68 = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields;
  if ((__this->fields)._hovered != false) {
    if (((__this->fields)._pointerId < 0) &&
       (bVar8 = UnityEngine_Input__get_mousePresent((MethodInfo *)0x0), bVar8)) {
      UVar25 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
      (__this->fields)._pointerPosition.fields = UVar25.fields._0_8_;
    }
    pUVar4 = (__this->fields)._rect;
    method = (MethodInfo *)(__this->fields)._eventCamera;
    UVar16 = (__this->fields)._pointerPosition.fields;
    if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
    }
    bVar8 = UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                      (pUVar4,(UnityEngine_Vector2_o)UVar16,(UnityEngine_Camera_o *)method,
                       (UnityEngine_Vector2_o *)&local_50,(MethodInfo *)0x0);
    if (bVar8) {
      pUVar4 = (__this->fields)._rect;
      if (pUVar4 == (UnityEngine_RectTransform_o *)0x0) goto label_05e898ad;
      method = (MethodInfo *)0x0;
      UVar23 = UnityEngine_RectTransform__get_rect(pUVar4,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
      }
      if (0.0 < UVar23.fields.m_Width) {
        pUVar4 = (__this->fields)._rect;
        if (pUVar4 == (UnityEngine_RectTransform_o *)0x0) goto label_05e898ad;
        method = (MethodInfo *)0x0;
        UVar23 = UnityEngine_RectTransform__get_rect(pUVar4,(MethodInfo *)0x0);
        fVar13 = UVar23.fields.m_Height;
        UVar16 = local_50;
        if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
          UVar16 = local_50;
        }
        local_50 = UVar16;
        if (0.0 < fVar13) {
          pUVar4 = (__this->fields)._rect;
          if (pUVar4 == (UnityEngine_RectTransform_o *)0x0) goto label_05e898ad;
          fVar15 = fVar13;
          UVar23 = UnityEngine_RectTransform__get_rect(pUVar4,(MethodInfo *)0x0);
          local_38 = UVar23.fields._8_8_;
          fStack_30 = fVar13;
          fStack_2c = fVar15;
          if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
          }
          pUVar4 = (__this->fields)._rect;
          if (pUVar4 == (UnityEngine_RectTransform_o *)0x0) goto label_05e898ad;
          UVar24 = UnityEngine_RectTransform__get_rect(pUVar4,(MethodInfo *)0x0);
          local_48 = UVar24.fields._8_8_;
          pUVar4 = (__this->fields)._rect;
          fStack_40 = fVar13;
          fStack_3c = fVar15;
          if (pUVar4 == (UnityEngine_RectTransform_o *)0x0) goto label_05e898ad;
          local_78 = UVar23.fields.m_XMin;
          fStack_74 = UVar23.fields.m_YMin;
          local_68.x = UVar16.x;
          local_68.y = UVar16.y;
          fVar13 = local_68.y - (local_38._4_4_ * 0.5 + fStack_74);
          local_68.x = local_68.x - ((float)local_38 * 0.5 + local_78);
          method = (MethodInfo *)0x0;
          UVar23 = UnityEngine_RectTransform__get_rect(pUVar4,(MethodInfo *)0x0);
          auVar22._0_4_ = local_68.x + local_68.x;
          auVar22._4_4_ = fVar13 + fVar13;
          auVar22._8_4_ = local_68.y + local_68.y;
          auVar22._12_4_ = local_68.y + local_68.y;
          auVar19._4_4_ = UVar23.fields.m_Height;
          auVar19._0_4_ = (undefined4)local_48;
          auVar19._8_4_ = fStack_40;
          auVar19._12_4_ = fStack_3c;
          auVar22 = divps(auVar22,auVar19);
          auVar19 = minps(_DAT_01005870,auVar22);
          uVar11 = -(uint)(-1.0 <= auVar22._0_4_);
          uVar12 = -(uint)(-1.0 <= auVar22._4_4_);
          local_68.y = (float)(~uVar12 & 0xbf800000 | auVar19._4_4_ & uVar12);
          local_68.x = (float)(~uVar11 & 0xbf800000 | auVar19._0_4_ & uVar11);
        }
      }
    }
  }
  fVar13 = UnityEngine_Time__get_unscaledDeltaTime((MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
  }
  auVar17 = ZEXT812(0x3c23d70a);
  fVar15 = TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->static_fields->DurationScale;
  if (auVar17._0_4_ <= fVar15) {
    auVar17._4_8_ = auVar17._4_8_;
    auVar17._0_4_ = fVar15;
  }
  fVar13 = expf((CustomLogic_CustomLogicMathBuiltin_o *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion,
                fVar13 / (auVar17._0_4_ * -0.09),method);
  auVar18 = ZEXT812(0x3f800000);
  fVar13 = auVar18._0_4_ - fVar13;
  UVar16 = (__this->fields)._tilt.fields;
  fVar15 = UVar16.x;
  fVar20 = UVar16.y;
  if (fVar13 <= auVar18._0_4_) {
    auVar18._4_8_ = auVar18._4_8_;
    auVar18._0_4_ = fVar13;
  }
  fVar13 = (float)(-(uint)(0.0 <= fVar13) & auVar18._0_4_);
  UVar16.x = fVar13 * (local_68.x - fVar15) + fVar15;
  UVar16.y = fVar13 * (local_68.y - fVar20) + fVar20;
  (__this->fields)._tilt.fields = UVar16;
  pGVar5 = (__this->fields)._planes;
  if (pGVar5 != (Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane_array *)0x0) {
    iVar9 = pGVar5->max_length;
    if (0 < (int)iVar9) {
      uVar11 = 0;
      do {
        if ((uint)iVar9 <= uVar11) {
          ThrowIndexOutOfRangeException();
        }
        __this_00 = pGVar5->m_Items[(int)uVar11];
        if (__this_00 == (Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane_o *)0x0) goto label_05e898ad;
        UVar16 = (__this->fields)._tilt.fields;
        UVar2 = (__this_00->fields)._tilt.fields;
        fVar15 = UVar2.x - UVar16.x;
        fVar20 = UVar2.y - UVar16.y;
        if (9.9999994e-11 <= fVar20 * fVar20 + fVar15 * fVar15) {
          (__this_00->fields)._tilt.fields = UVar16;
          pUVar10 = UnityEngine_UI_BaseMeshEffect__get_graphic
                              ((UnityEngine_UI_BaseMeshEffect_o *)__this_00,(MethodInfo *)0x0);
          if (pUVar10 == (UnityEngine_UI_Graphic_o *)0x0) goto label_05e898ad;
          method = (pUVar10->klass->vtable)._28_SetVerticesDirty.method;
          (*(pUVar10->klass->vtable)._28_SetVerticesDirty.methodPtr)(pUVar10,method);
          iVar9 = pGVar5->max_length;
        }
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < (int)iVar9);
    }
    pGVar6 = (__this->fields)._stars;
    if (pGVar6 != (Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_StarRest_array *)0x0) {
      if (pGVar6->max_length != 0) {
        fVar15 = (__this->fields)._phase;
        fVar20 = UnityEngine_Time__get_unscaledDeltaTime((MethodInfo *)0x0);
        (__this->fields)._phase = fVar20 + fVar15;
        fVar15 = (__this->fields)._starStrength;
        fVar20 = 0.0;
        if ((__this->fields)._hovered != false) {
          fVar20 = 1.0;
        }
        (__this->fields)._starStrength = (fVar20 - fVar15) * fVar13 + fVar15;
        Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__AnimateStars(__this,method);
      }
      pGVar7 = (__this->fields)._gears;
      if (pGVar7 != (Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_GearRest_array *)0x0) {
        if (pGVar7->max_length != 0) {
          fVar15 = (__this->fields)._phase;
          fVar14 = UnityEngine_Time__get_unscaledDeltaTime((MethodInfo *)0x0);
          fVar20 = (__this->fields)._gearStrength;
          fVar21 = 0.0;
          if ((__this->fields)._hovered != false) {
            fVar21 = 1.0;
          }
          (__this->fields)._gearStrength = fVar13 * (fVar21 - fVar20) + fVar20;
          (__this->fields)._phase = fVar14 + fVar15;
          Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__AnimateGears(__this,method);
        }
        if (((((__this->fields)._hovered == false) &&
             (UVar16 = (__this->fields)._tilt.fields, fVar13 = UVar16.x, fVar15 = UVar16.y,
             fVar15 * fVar15 + fVar13 * fVar13 < 1e-06)) &&
            (pfVar1 = &(__this->fields)._starStrength, *pfVar1 <= 0.001 && *pfVar1 != 0.001)) &&
           (pfVar1 = &(__this->fields)._gearStrength, *pfVar1 <= 0.001 && *pfVar1 != 0.001)) {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this,false,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
label_05e898ad:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCardPreview$$AnimateStars
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__AnimateStars (Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_o* __this, const MethodInfo* method);
// 0x5e89920

void Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__AnimateStars
               (Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_o *__this,MethodInfo *method)

{
  uint uVar1;
  UnityEngine_Vector2_Fields UVar2;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Vector2_o value;
  Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_StarRest_array *pGVar3;
  uint uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  UnityEngine_Quaternion_o UVar9;
  UnityEngine_Vector3_Fields local_88;
  undefined1 local_78 [16];
  float local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  pGVar3 = (__this->fields)._stars;
  if (pGVar3 != (Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_StarRest_array *)0x0) {
    uVar4 = 0;
    lVar5 = 0x38;
    do {
      uVar1 = (uint)pGVar3->max_length;
      if ((int)uVar1 <= (int)uVar4) {
        return;
      }
      if (uVar1 <= uVar4) {
        ThrowIndexOutOfRangeException();
      }
      __this_00 = *(UnityEngine_RectTransform_o **)((long)pGVar3->m_Items + lVar5 + -0x38);
      local_58 = *(undefined8 *)((long)pGVar3->m_Items + lVar5 + -0x30);
      uStack_50 = 0;
      local_38 = *(undefined8 *)((long)pGVar3->m_Items + lVar5 + -0x28);
      uStack_30 = 0;
      local_78 = ZEXT416((uint)(float)(int)uVar4);
      fVar7 = (float)(int)uVar4 * 0.65 + (__this->fields)._phase;
      local_48 = *(undefined8 *)
                  ((long)&(((Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_StarRest_array *)
                           (pGVar3->m_Items + -1))->obj).klass + lVar5);
      uStack_40 = 0;
      local_68 = sinf(fVar7 * 1.3);
      fVar7 = cosf(fVar7 * 0.9);
      if (__this_00 == (UnityEngine_RectTransform_o *)0x0) break;
      UVar9.fields.y = 9.0;
      if (uVar4 < 4) {
        UVar9.fields.y = (float)local_78._0_4_ + 2.0;
      }
      UVar2 = (__this->fields)._tilt.fields;
      fVar6 = (__this->fields)._starStrength;
      value.fields.y =
           local_58._4_4_ + fVar6 * (((float)local_78._0_4_ + 3.0) * UVar2.y + fVar7 * UVar9.fields.y);
      value.fields.x =
           (float)local_58 + fVar6 * (((float)local_78._0_4_ + 3.0) * UVar2.x + local_68 * UVar9.fields.y);
      UnityEngine_RectTransform__set_anchoredPosition(__this_00,value,(MethodInfo *)0x0);
      fVar7 = (__this->fields)._phase;
      if (uVar4 < 4) {
        fVar7 = sinf(fVar7 * 1.3);
        fVar7 = fVar7 * 8.0;
      }
      else if ((uVar4 & 1) == 0) {
        fVar7 = fVar7 * 35.0;
      }
      else {
        fVar7 = fVar7 * -28.0;
      }
      local_88.x = 0.0;
      local_88.y = 0.0;
      local_88.z = fVar7 * (__this->fields)._starStrength * 0.017453292;
      UVar9 = UnityEngine_Quaternion__Internal_FromEulerRad
                        ((UnityEngine_Vector3_o *)&local_88,(MethodInfo *)0x0);
      fVar7 = UVar9.fields.x;
      UVar9.fields.y = UVar9.fields.y;
      fVar6 = UVar9.fields.z;
      fVar8 = UVar9.fields.w;
      UVar9.fields.z =
           ((float)local_48 * fVar8 + local_48._4_4_ * fVar6 + UVar9.fields.y * (float)local_38) -
           fVar7 * local_38._4_4_;
      UVar9.fields.w =
           ((fVar8 * local_48._4_4_ - (float)local_38 * fVar7) - local_38._4_4_ * UVar9.fields.y) -
           (float)local_48 * fVar6;
      UVar9.fields.y =
           (local_48._4_4_ * UVar9.fields.y + local_38._4_4_ * fVar8 + (float)local_48 * fVar7) -
           fVar6 * (float)local_38;
      UVar9.fields.x =
           (local_48._4_4_ * fVar7 + (float)local_38 * fVar8 + local_38._4_4_ * fVar6) -
           UVar9.fields.y * (float)local_48;
      UnityEngine_Transform__set_localRotation((UnityEngine_Transform_o *)__this_00,UVar9,(MethodInfo *)0x0);
      uVar4 = uVar4 + 1;
      pGVar3 = (__this->fields)._stars;
      lVar5 = lVar5 + 0x20;
    } while (pGVar3 != (Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_StarRest_array *)0x0);
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCardPreview$$AnimateGears
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__AnimateGears (Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_o* __this, const MethodInfo* method);
// 0x5e89bb0

void Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__AnimateGears
               (Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_o *__this,MethodInfo *method)

{
  float fVar1;
  uint uVar2;
  undefined8 uVar3;
  UnityEngine_RectTransform_o *__this_00;
  Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_GearRest_array *pGVar4;
  long lVar5;
  uint uVar6;
  float fVar7;
  UnityEngine_Vector2_o value;
  float fVar8;
  UnityEngine_Quaternion_o UVar9;
  UnityEngine_Vector3_Fields local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  pGVar4 = (__this->fields)._gears;
  if (pGVar4 != (Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_GearRest_array *)0x0) {
    uVar6 = 0;
    lVar5 = 0x38;
    do {
      uVar2 = (uint)pGVar4->max_length;
      if ((int)uVar2 <= (int)uVar6) {
        return;
      }
      if (uVar2 <= uVar6) {
        ThrowIndexOutOfRangeException();
      }
      __this_00 = *(UnityEngine_RectTransform_o **)((long)pGVar4->m_Items + lVar5 + -0x38);
      if (__this_00 == (UnityEngine_RectTransform_o *)0x0) break;
      fVar8 = (float)(int)uVar6 + 2.0;
      fVar7 = ((float)(int)uVar6 * 6.0 + 28.0) * (__this->fields)._phase;
      if ((uVar6 & 1) != 0) {
        fVar7 = -fVar7;
      }
      UVar9.fields.z = (__this->fields)._gearStrength;
      UVar9.fields.w = (__this->fields)._tilt.fields.x;
      fVar1 = (__this->fields)._tilt.fields.y;
      uVar3 = *(undefined8 *)((long)pGVar4->m_Items + lVar5 + -0x30);
      value.fields.x = (float)uVar3 + UVar9.fields.z * UVar9.fields.w * fVar8;
      value.fields.y = (float)((ulong)uVar3 >> 0x20) + UVar9.fields.z * fVar8 * fVar1 * 0.5;
      local_38 = *(undefined8 *)((long)pGVar4->m_Items + lVar5 + -0x28);
      uStack_30 = 0;
      local_48 = *(undefined8 *)
                  ((long)&(((Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_GearRest_array *)
                           (pGVar4->m_Items + -1))->obj).klass + lVar5);
      uStack_40 = 0;
      UnityEngine_RectTransform__set_anchoredPosition(__this_00,value,(MethodInfo *)0x0);
      local_58.x = 0.0;
      local_58.y = 0.0;
      local_58.z = (fVar1 * -8.0 + UVar9.fields.w * 24.0 + fVar7) * UVar9.fields.z * 0.017453292;
      UVar9 = UnityEngine_Quaternion__Internal_FromEulerRad
                        ((UnityEngine_Vector3_o *)&local_58,(MethodInfo *)0x0);
      UVar9.fields.z = UVar9.fields.z;
      UVar9.fields.w = UVar9.fields.w;
      fVar7 = UVar9.fields.x;
      fVar8 = UVar9.fields.y;
      UVar9.fields.z =
           ((float)local_48 * UVar9.fields.w + local_48._4_4_ * UVar9.fields.z + fVar8 * (float)local_38) -
           fVar7 * local_38._4_4_;
      UVar9.fields.y =
           (local_48._4_4_ * fVar8 + local_38._4_4_ * UVar9.fields.w + (float)local_48 * fVar7) -
           UVar9.fields.z * (float)local_38;
      UVar9.fields.x =
           (local_48._4_4_ * fVar7 + (float)local_38 * UVar9.fields.w + local_38._4_4_ * UVar9.fields.z) -
           fVar8 * (float)local_48;
      UVar9.fields.w =
           ((UVar9.fields.w * local_48._4_4_ - (float)local_38 * fVar7) - local_38._4_4_ * fVar8) -
           (float)local_48 * UVar9.fields.z;
      UnityEngine_Transform__set_localRotation((UnityEngine_Transform_o *)__this_00,UVar9,(MethodInfo *)0x0);
      uVar6 = uVar6 + 1;
      pGVar4 = (__this->fields)._gears;
      lVar5 = lVar5 + 0x20;
    } while (pGVar4 != (Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_GearRest_array *)0x0);
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCardPreview$$ResetMotion
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__ResetMotion (Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_o* __this, const MethodInfo* method);
// 0x5e89050
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e891c8: jmp 0x5e89348
// asm:   0x5e8928c: jmp 0x5e89348

void Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__ResetMotion
               (Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_o *__this,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_Fields UVar2;
  undefined8 uVar3;
  uint uVar4;
  Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane_array *pGVar5;
  Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane_o *__this_00;
  Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_StarRest_array *pGVar6;
  UnityEngine_RectTransform_o *pUVar7;
  Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_GearRest_array *pGVar8;
  bool bVar9;
  ulong uVar10;
  UnityEngine_UI_Graphic_o *pUVar11;
  ulong uVar12;
  float *pfVar13;
  float fVar14;
  float fVar15;
  UnityEngine_Quaternion_o value;
  UnityEngine_Quaternion_o value_00;
  
  if (Il2CppMethodInitialized_0754886b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754886b = '\x01';
  }
  if (Il2CppMethodInitialized_0753ecc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_0753ecc8 = '\x01';
  }
  (__this->fields)._tilt.fields = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields;
  (__this->fields)._starStrength = 0.0;
  (__this->fields)._gearStrength = 0.0;
  (__this->fields)._phase = 0.0;
  pGVar5 = (__this->fields)._planes;
  if (pGVar5 != (Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane_array *)0x0) {
    if (0 < (int)pGVar5->max_length) {
      uVar10 = pGVar5->max_length & 0xffffffff;
      uVar12 = 0;
      do {
        if (uVar10 <= uVar12) goto label_05e8935c;
        __this_00 = pGVar5->m_Items[uVar12];
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar9 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar9) {
          if (Il2CppMethodInitialized_0753ecc8 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
            Il2CppMethodInitialized_0753ecc8 = '\x01';
          }
          if (__this_00 == (Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane_o *)0x0) goto label_05e89348;
          UVar1 = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields;
          UVar2 = (__this_00->fields)._tilt.fields;
          fVar14 = UVar2.x - UVar1.x;
          fVar15 = UVar2.y - UVar1.y;
          if (9.9999994e-11 <= fVar15 * fVar15 + fVar14 * fVar14) {
            (__this_00->fields)._tilt.fields = UVar1;
            pUVar11 = UnityEngine_UI_BaseMeshEffect__get_graphic
                                ((UnityEngine_UI_BaseMeshEffect_o *)__this_00,(MethodInfo *)0x0);
            if (pUVar11 == (UnityEngine_UI_Graphic_o *)0x0) goto label_05e89348;
            (*(pUVar11->klass->vtable)._28_SetVerticesDirty.methodPtr)
                      (pUVar11,(pUVar11->klass->vtable)._28_SetVerticesDirty.method);
          }
        }
        uVar12 = uVar12 + 1;
        uVar4 = (uint)pGVar5->max_length;
        uVar10 = (ulong)uVar4;
      } while ((long)uVar12 < (long)(int)uVar4);
    }
    pGVar6 = (__this->fields)._stars;
    if (pGVar6 != (Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_StarRest_array *)0x0) {
      if (0 < (int)pGVar6->max_length) {
        uVar10 = pGVar6->max_length & 0xffffffff;
        pfVar13 = &pGVar6->m_Items[0].fields.Rotation.fields.z;
        uVar12 = 0;
        do {
          if (uVar10 <= uVar12) goto label_05e8935c;
          pUVar7 = *(UnityEngine_RectTransform_o **)(pfVar13 + -6);
          UVar1 = *(UnityEngine_Vector2_Fields *)(pfVar13 + -4);
          uVar3 = *(undefined8 *)pfVar13;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar9 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (!bVar9) {
            if (pUVar7 == (UnityEngine_RectTransform_o *)0x0) goto label_05e89348;
            UnityEngine_RectTransform__set_anchoredPosition
                      (pUVar7,(UnityEngine_Vector2_o)UVar1,(MethodInfo *)0x0);
            value.fields._8_8_ = uVar3;
            value.fields.x = ((UnityEngine_Quaternion_Fields *)(pfVar13 + -2))->x;
            value.fields.y = ((UnityEngine_Quaternion_Fields *)(pfVar13 + -2))->y;
            UnityEngine_Transform__set_localRotation
                      ((UnityEngine_Transform_o *)pUVar7,value,(MethodInfo *)0x0);
          }
          uVar12 = uVar12 + 1;
          uVar4 = (uint)pGVar6->max_length;
          uVar10 = (ulong)uVar4;
          pfVar13 = pfVar13 + 8;
        } while ((long)uVar12 < (long)(int)uVar4);
      }
      pGVar8 = (__this->fields)._gears;
      if (pGVar8 != (Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_GearRest_array *)0x0) {
        if (0 < (int)pGVar8->max_length) {
          uVar10 = pGVar8->max_length & 0xffffffff;
          pfVar13 = &pGVar8->m_Items[0].fields.Rotation.fields.z;
          uVar12 = 0;
          do {
            if (uVar10 <= uVar12) {
label_05e8935c:
              ThrowIndexOutOfRangeException();
            }
            pUVar7 = *(UnityEngine_RectTransform_o **)(pfVar13 + -6);
            UVar1 = *(UnityEngine_Vector2_Fields *)(pfVar13 + -4);
            uVar3 = *(undefined8 *)pfVar13;
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar9 = UnityEngine_Object__op_Equality
                              ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if (!bVar9) {
              if (pUVar7 == (UnityEngine_RectTransform_o *)0x0) goto label_05e89348;
              UnityEngine_RectTransform__set_anchoredPosition
                        (pUVar7,(UnityEngine_Vector2_o)UVar1,(MethodInfo *)0x0);
              value_00.fields._8_8_ = uVar3;
              value_00.fields.x = ((UnityEngine_Quaternion_Fields *)(pfVar13 + -2))->x;
              value_00.fields.y = ((UnityEngine_Quaternion_Fields *)(pfVar13 + -2))->y;
              UnityEngine_Transform__set_localRotation
                        ((UnityEngine_Transform_o *)pUVar7,value_00,(MethodInfo *)0x0);
            }
            uVar12 = uVar12 + 1;
            uVar4 = (uint)pGVar8->max_length;
            uVar10 = (ulong)uVar4;
            pfVar13 = pfVar13 + 8;
          } while ((long)uVar12 < (long)(int)uVar4);
        }
        return;
      }
    }
  }
label_05e89348:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCardPreview$$OnDisable
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__OnDisable (Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_o* __this, const MethodInfo* method);
// 0x5e89dc0

void Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__OnDisable
               (Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_o *__this,MethodInfo *method)

{
  (__this->fields)._hovered = false;
  Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__ResetMotion(__this,method);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCardPreview$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__OnDestroy (Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_o* __this, const MethodInfo* method);
// 0x5e89dd0

void Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__OnDestroy
               (Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  UnityEngine_UI_Image_o *pUVar2;
  UnityEngine_Material_o *pUVar3;
  bool bVar4;
  
  if (Il2CppMethodInitialized_0754886c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754886c = '\x01';
  }
  pUVar2 = (__this->fields)._fallback;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    pUVar2 = (__this->fields)._fallback;
    if (pUVar2 == (UnityEngine_UI_Image_o *)0x0) {
      ThrowNullReferenceException();
    }
    (*(pUVar2->klass->vtable)._33_set_material.methodPtr)
              (pUVar2,(__this->fields)._fallbackMaterial,(pUVar2->klass->vtable)._33_set_material.method);
  }
  pUVar3 = (__this->fields)._material;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    return;
  }
  if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
  }
  bVar4 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  pUVar3 = (__this->fields)._material;
  uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  if (bVar4) {
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0((UnityEngine_Object_o *)pUVar3,(MethodInfo *)0x0);
    return;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  UnityEngine_Object__DestroyImmediate_6921750((UnityEngine_Object_o *)pUVar3,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCardPreview$$ReportFallback
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__ReportFallback (System_String_o* key, System_String_o* message, const MethodInfo* method);
// 0x5e88ac0

void Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__ReportFallback
               (System_String_o *key,System_String_o *message,MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_HashSet_object__o *__this;
  bool bVar2;
  
  if (Il2CppMethodInitialized_0754886d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    Il2CppMethodInitialized_0754886d = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview);
    __this = (System_Collections_Generic_HashSet_object__o *)
             TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview->static_fields->ReportedFallbacks;
  }
  else {
    __this = *(System_Collections_Generic_HashSet_object__o **)
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview)->static_fields;
  }
  if (__this == (System_Collections_Generic_HashSet_object__o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar2 = System_Collections_Generic_HashSet_object___Add
                    (__this,(Il2CppObject *)key,
                     (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  if (!bVar2) {
    return;
  }
  if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
  }
  UnityEngine_Debug__LogWarning((Il2CppObject *)message,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCardPreview$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_o* __this, const MethodInfo* method);
// 0x5e89ee0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e8a0a7: jmp 0x5e89f69
// asm:   0x5e8a0f8: jmp 0x5e89fce
// asm:   0x5e8a149: jmp 0x5e8a033

void Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_o *__this,MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  MethodInfo *pMVar3;
  Il2CppClass *pIVar4;
  
  if (Il2CppMethodInitialized_0754886e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_Empty_AottgGameCreatePreviewPlane);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Array_Empty_AottgGameCreateCardPreview_GearRest);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Array_Empty_AottgGameCreateCardPreview_StarRest);
    Il2CppMethodInitialized_0754886e = '\x01';
  }
  pMVar3 = MethodInfo_System_Array_Empty_AottgGameCreatePreviewPlane;
  if ((MethodInfo_System_Array_Empty_AottgGameCreatePreviewPlane->field7_0x38).methodMetadataHandle ==
      (void *)0x0) {
    il2cpp_codegen_rgctx_method_init(MethodInfo_System_Array_Empty_AottgGameCreatePreviewPlane);
    pIVar4 = *(Il2CppClass **)((long)(pMVar3->field7_0x38).methodMetadataHandle + 0x10);
    bVar1 = (pIVar4->_2).bitflags1;
  }
  else {
    pIVar4 = *(Il2CppClass **)
              ((long)(MethodInfo_System_Array_Empty_AottgGameCreatePreviewPlane->field7_0x38).
                     methodMetadataHandle + 0x10);
    bVar1 = (pIVar4->_2).bitflags1;
  }
  if ((bVar1 & 1) == 0) {
    pIVar4 = il2cpp_codegen_class_init_checked(pIVar4);
    uVar2 = (pIVar4->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = *(uint32_t *)((long)pIVar4 + 0xe4);
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init(pIVar4);
    pIVar4 = (pMVar3->field7_0x38).rgctx_data[2].klass;
    bVar1 = (pIVar4->_2).bitflags1;
  }
  else {
    pIVar4 = (pMVar3->field7_0x38).rgctx_data[2].klass;
    bVar1 = (pIVar4->_2).bitflags1;
  }
  if ((bVar1 & 1) == 0) {
    pIVar4 = il2cpp_codegen_class_init_checked(pIVar4);
  }
  (__this->fields)._planes =
       *(Gisketch_Aottg2UI_Game_AottgGameCreatePreviewPlane_array **)pIVar4->static_fields;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._planes);
  pMVar3 = MethodInfo_System_Array_Empty_AottgGameCreateCardPreview_StarRest;
  if ((MethodInfo_System_Array_Empty_AottgGameCreateCardPreview_StarRest->field7_0x38).methodMetadataHandle ==
      (void *)0x0) {
    il2cpp_codegen_rgctx_method_init(MethodInfo_System_Array_Empty_AottgGameCreateCardPreview_StarRest);
    pIVar4 = *(Il2CppClass **)((long)(pMVar3->field7_0x38).methodMetadataHandle + 0x10);
    bVar1 = (pIVar4->_2).bitflags1;
  }
  else {
    pIVar4 = *(Il2CppClass **)
              ((long)(MethodInfo_System_Array_Empty_AottgGameCreateCardPreview_StarRest->field7_0x38).
                     methodMetadataHandle + 0x10);
    bVar1 = (pIVar4->_2).bitflags1;
  }
  if ((bVar1 & 1) == 0) {
    pIVar4 = il2cpp_codegen_class_init_checked(pIVar4);
    uVar2 = (pIVar4->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = *(uint32_t *)((long)pIVar4 + 0xe4);
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init(pIVar4);
    pIVar4 = (pMVar3->field7_0x38).rgctx_data[2].klass;
    bVar1 = (pIVar4->_2).bitflags1;
  }
  else {
    pIVar4 = (pMVar3->field7_0x38).rgctx_data[2].klass;
    bVar1 = (pIVar4->_2).bitflags1;
  }
  if ((bVar1 & 1) == 0) {
    pIVar4 = il2cpp_codegen_class_init_checked(pIVar4);
  }
  (__this->fields)._stars =
       *(Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_StarRest_array **)pIVar4->static_fields;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._stars);
  pMVar3 = MethodInfo_System_Array_Empty_AottgGameCreateCardPreview_GearRest;
  if ((MethodInfo_System_Array_Empty_AottgGameCreateCardPreview_GearRest->field7_0x38).methodMetadataHandle ==
      (void *)0x0) {
    il2cpp_codegen_rgctx_method_init(MethodInfo_System_Array_Empty_AottgGameCreateCardPreview_GearRest);
    pIVar4 = *(Il2CppClass **)((long)(pMVar3->field7_0x38).methodMetadataHandle + 0x10);
    bVar1 = (pIVar4->_2).bitflags1;
  }
  else {
    pIVar4 = *(Il2CppClass **)
              ((long)(MethodInfo_System_Array_Empty_AottgGameCreateCardPreview_GearRest->field7_0x38).
                     methodMetadataHandle + 0x10);
    bVar1 = (pIVar4->_2).bitflags1;
  }
  if ((bVar1 & 1) == 0) {
    pIVar4 = il2cpp_codegen_class_init_checked(pIVar4);
    uVar2 = (pIVar4->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (pIVar4->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init(pIVar4);
    pIVar4 = (pMVar3->field7_0x38).rgctx_data[2].klass;
    bVar1 = (pIVar4->_2).bitflags1;
  }
  else {
    pIVar4 = (pMVar3->field7_0x38).rgctx_data[2].klass;
    bVar1 = (pIVar4->_2).bitflags1;
  }
  if ((bVar1 & 1) == 0) {
    pIVar4 = il2cpp_codegen_class_init_checked(pIVar4);
  }
  (__this->fields)._gears =
       *(Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_GearRest_array **)pIVar4->static_fields;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._gears);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateCardPreview$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview___cctor (const MethodInfo* method);
// 0x5e8a150

void Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_0754886f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    Il2CppMethodInitialized_0754886f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview->static_fields->ReportedFallbacks = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview->static_fields->ReportedFallbacks);
  return;
}


