// Type: Gisketch.Aottg2UI.Game.AottgInGameWheelView
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgInGameWheelView.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgInGameWheelView$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgInGameWheelView___ctor (Gisketch_Aottg2UI_Game_AottgInGameWheelView_o* __this, UnityEngine_Transform_o* parent, const MethodInfo* method);
// 0x58b2850

void Gisketch_Aottg2UI_Game_AottgInGameWheelView___ctor
               (Gisketch_Aottg2UI_Game_AottgInGameWheelView_o *__this,UnityEngine_Transform_o *parent,
               MethodInfo *method)

{
  TMPro_TMP_FontAsset_o *obj;
  UnityEngine_Vector2_o position;
  UnityEngine_Vector2_o position_00;
  bool bVar1;
  uint uVar2;
  UnityEngine_UI_Button_array *pUVar3;
  TMPro_TMP_Text_array *pTVar4;
  TMPro_TMP_FontAsset_array *pTVar5;
  Gisketch_Aottg2UI_Game_AottgInGameView_o *pGVar6;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_Transform_o *parent_00;
  TMPro_TMP_Text_o *pTVar8;
  Il2CppObject *pIVar9;
  System_String_o *pSVar10;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  System_String_o *pSVar11;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar12;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar13;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar14;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar15;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar16;
  UnityEngine_Vector2_Fields UVar17;
  UnityEngine_UI_Button_o *obj_00;
  System_Object_array *pSVar18;
  MethodInfo *pMVar19;
  TMPro_TMP_Text_o **ppTVar20;
  MethodInfo *in_R9;
  long lVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  uint local_9c;
  UnityEngine_Vector2_Fields local_98;
  undefined8 uStack_90;
  Gisketch_Aottg2UI_Game_AottgInGameView_o *local_80;
  MethodInfo *local_78;
  TMPro_TMP_Text_array **local_70;
  Il2CppObject *local_68;
  TMPro_TMP_FontAsset_array **local_60;
  Gisketch_Aottg2UI_Game_AottgInGameWheelView_Fields *local_58;
  TMPro_TMP_Text_array **local_50;
  System_Enum_o local_48;
  undefined4 local_38;
  
  local_78 = (MethodInfo *)parent;
  if (Il2CppMethodInitialized_0754533e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_AottgButtonVariant);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UI_Button_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_TMP_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_TMPro_TMP_FontAsset_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_TMPro_TMP_Text_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2_array);
    il2cpp_codegen_initialize_runtime_metadata(&"inGameWheelText");
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Wheel Shortcut ");
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    il2cpp_codegen_initialize_runtime_metadata(&"inGameSurface");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&" ");
    il2cpp_codegen_initialize_runtime_metadata(&"ingame.wheel.select");
    il2cpp_codegen_initialize_runtime_metadata(&"inGameWheelHeader");
    il2cpp_codegen_initialize_runtime_metadata(&"button");
    il2cpp_codegen_initialize_runtime_metadata(&"inGameWheelShortcut");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Wheel Action ");
    il2cpp_codegen_initialize_runtime_metadata(&"Button");
    il2cpp_codegen_initialize_runtime_metadata(&"inGameWheelHint");
    il2cpp_codegen_initialize_runtime_metadata(&"inGameTitle");
    Il2CppMethodInitialized_0754533e = '\x01';
  }
  local_9c = 0;
  pUVar3 = (UnityEngine_UI_Button_array *)SZArrayNew(TypeInfo_UnityEngine_UI_Button_array,8);
  local_58 = &__this->fields;
  (__this->fields)._buttons = pUVar3;
  Il2CppCodeGenWriteBarrier(&local_58->_buttons);
  pTVar4 = (TMPro_TMP_Text_array *)SZArrayNew(TypeInfo_TMPro_TMP_Text_array,8);
  local_50 = &(__this->fields)._shortcuts;
  (__this->fields)._shortcuts = pTVar4;
  Il2CppCodeGenWriteBarrier(local_50);
  pTVar4 = (TMPro_TMP_Text_array *)SZArrayNew(TypeInfo_TMPro_TMP_Text_array,8);
  local_70 = &(__this->fields)._labels;
  (__this->fields)._labels = pTVar4;
  Il2CppCodeGenWriteBarrier(local_70);
  pTVar5 = (TMPro_TMP_FontAsset_array *)SZArrayNew(TypeInfo_TMPro_TMP_FontAsset_array,8);
  local_60 = &(__this->fields)._labelFonts;
  (__this->fields)._labelFonts = pTVar5;
  Il2CppCodeGenWriteBarrier(local_60);
  pMVar19 = (MethodInfo *)0x0;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  pGVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
  Gisketch_Aottg2UI_Game_AottgInGameView___ctor(pGVar6,pMVar19);
  if (pGVar6 != (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) {
    pMVar19 = local_78;
    local_80 = pGVar6;
    pUVar7 = Gisketch_Aottg2UI_Game_AottgInGameView__Panel
                       (pGVar6,(UnityEngine_Transform_o *)local_78,"inGameSurface",250.0,150.0,false,
                        (System_Nullable_float__o)0x0,in_R9);
    if (Il2CppMethodInitialized_0753ecc8 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_0753ecc8 = '\x01';
    }
    UVar17 = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields;
    fVar23 = UVar17.x;
    fVar24 = UVar17.y;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView->_2).cctor_finished_or_no_cctor == 0) {
      uStack_90 = 0;
      local_98 = UVar17;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
      fVar23 = local_98.x;
      fVar24 = local_98.y;
    }
    position.fields.y = fVar24;
    position.fields.x = fVar23;
    Gisketch_Aottg2UI_Game_AottgInGameView__Position(pUVar7,position,pMVar19);
    pGVar6 = local_80;
    pMVar19 = (MethodInfo *)0x0;
    parent_00 = Gisketch_Aottg2UI_Game_AottgInGameView__Panel
                          (local_80,pUVar7,"inGameWheelHeader",250.0,48.0,false,
                           (System_Nullable_float__o)0x0,in_R9);
    pTVar8 = Gisketch_Aottg2UI_Game_AottgInGameView__Text
                       (pGVar6,parent_00,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),230.0,42.0,
                        "inGameTitle",pMVar19);
    (__this->fields)._title = pTVar8;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._title);
    pTVar8 = Gisketch_Aottg2UI_Game_AottgInGameView__Text
                       (pGVar6,pUVar7,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),230.0,102.0,
                        "inGameWheelHint",pMVar19);
    (__this->fields)._hint = pTVar8;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._hint);
    pIVar9 = SZArrayNew(TypeInfo_UnityEngine_Vector2_array,8);
    if (pIVar9 != (Il2CppObject *)0x0) {
      uVar2 = *(uint *)&pIVar9[1].monitor;
      if (((((uVar2 == 0) || (pIVar9[2].klass = (Il2CppClass *)0x4361000000000000, uVar2 == 1)) ||
           (pIVar9[2].monitor = (void *)0x43070000437a0000, uVar2 < 3)) ||
          ((pIVar9[3].klass = (Il2CppClass *)0x43938000, uVar2 == 3 ||
           (pIVar9[3].monitor = (void *)0xc3070000437a0000, uVar2 < 5)))) ||
         ((pIVar9[4].klass = (Il2CppClass *)0xc361000000000000, uVar2 == 5 ||
          ((pIVar9[4].monitor = (void *)0xc3070000c37a0000, uVar2 < 7 ||
           (pIVar9[5].klass = (Il2CppClass *)0xc3938000, uVar2 == 7)))))) {
label_058b346f:
        ThrowIndexOutOfRangeException();
      }
      pIVar9[5].monitor = (void *)0x43070000c37a0000;
      local_9c = 0;
      local_68 = pIVar9;
      while( true ) {
        pSVar10 = System_Int32__ToString((int32_t *)&local_9c,(MethodInfo *)0x0);
        pSVar10 = System_String__Concat_52f0320("AoTTG Wheel Shortcut ",pSVar10,(MethodInfo *)0x0);
        __this_00 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
        Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
        if (__this_00 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) break;
        (__this_00->fields).type = "Button";
        Il2CppCodeGenWriteBarrier(&(__this_00->fields).type);
        local_48.klass = (System_Enum_c *)TypeInfo_Gisketch_Aottg2UI_Code_AottgButtonVariant;
        local_48.monitor = (void *)0xffffffffffffffff;
        local_38 = 3;
        pSVar11 = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
        pSVar11 = System_String__Concat_52f0320("button",pSVar11,(MethodInfo *)0x0);
        (__this_00->fields).style = pSVar11;
        Il2CppCodeGenWriteBarrier(&(__this_00->fields).style);
        (__this_00->fields).action = "ingame.wheel.select";
        Il2CppCodeGenWriteBarrier(&(__this_00->fields).action);
        pSVar11 = System_Int32__ToString((int32_t *)&local_9c,(MethodInfo *)0x0);
        (__this_00->fields).value = pSVar11;
        Il2CppCodeGenWriteBarrier(&(__this_00->fields).value);
        pGVar12 = Gisketch_Aottg2UI_Code_AottgUi__Points(220.0,(MethodInfo *)0x0);
        pGVar13 = Gisketch_Aottg2UI_Code_AottgUi__Points(76.0,(MethodInfo *)0x0);
        pGVar14 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                            ("Column","Center","Center",
                             (System_String_o *)0x0,(System_String_o *)0x0,2.0,pGVar12,pGVar13,
                             (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                             (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                             (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                             (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,6.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                             0.0,0.0,0.0,(MethodInfo *)0x0);
        (__this_00->fields).layout = pGVar14;
        Il2CppCodeGenWriteBarrier(&(__this_00->fields).layout);
        pGVar15 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                  SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array,2);
        pGVar16 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
        Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar16,(MethodInfo *)0x0);
        if (pGVar16 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) break;
        (pGVar16->fields).type = "Text";
        Il2CppCodeGenWriteBarrier(&(pGVar16->fields).type);
        (pGVar16->fields).id = pSVar10;
        Il2CppCodeGenWriteBarrier(&(pGVar16->fields).id);
        (pGVar16->fields).style = "inGameWheelShortcut";
        Il2CppCodeGenWriteBarrier(&(pGVar16->fields).style);
        (pGVar16->fields).text = " ";
        Il2CppCodeGenWriteBarrier(&(pGVar16->fields).text);
        pGVar12 = Gisketch_Aottg2UI_Code_AottgUi__Points(200.0,(MethodInfo *)0x0);
        pGVar13 = Gisketch_Aottg2UI_Code_AottgUi__Points(20.0,(MethodInfo *)0x0);
        pGVar14 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                            ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                             (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar12,pGVar13,
                             (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                             (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                             (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                             (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                             0.0,0.0,0.0,(MethodInfo *)0x0);
        (pGVar16->fields).layout = pGVar14;
        Il2CppCodeGenWriteBarrier(&(pGVar16->fields).layout);
        if (pGVar15 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) break;
        if ((int)pGVar15->max_length == 0) goto label_058b346f;
        pGVar15->m_Items[0] = pGVar16;
        Il2CppCodeGenWriteBarrier(pGVar15->m_Items);
        pGVar16 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
        Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar16,(MethodInfo *)0x0);
        if (pGVar16 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) break;
        (pGVar16->fields).type = "Text";
        Il2CppCodeGenWriteBarrier(&(pGVar16->fields).type);
        pSVar11 = System_Int32__ToString((int32_t *)&local_9c,(MethodInfo *)0x0);
        pSVar11 = System_String__Concat_52f0320("AoTTG Wheel Action ",pSVar11,(MethodInfo *)0x0);
        (pGVar16->fields).id = pSVar11;
        Il2CppCodeGenWriteBarrier(&(pGVar16->fields).id);
        (pGVar16->fields).style = "inGameWheelText";
        Il2CppCodeGenWriteBarrier(&(pGVar16->fields).style);
        (pGVar16->fields).text = " ";
        Il2CppCodeGenWriteBarrier(&(pGVar16->fields).text);
        pGVar12 = Gisketch_Aottg2UI_Code_AottgUi__Points(200.0,(MethodInfo *)0x0);
        pGVar13 = Gisketch_Aottg2UI_Code_AottgUi__Points(38.0,(MethodInfo *)0x0);
        pMVar19 = (MethodInfo *)0x0;
        pGVar14 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                            ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                             (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar12,pGVar13,
                             (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                             (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                             (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                             (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                             0.0,0.0,0.0,(MethodInfo *)0x0);
        (pGVar16->fields).layout = pGVar14;
        Il2CppCodeGenWriteBarrier(&(pGVar16->fields).layout);
        if ((pGVar15->max_length & 0xfffffffe) == 0) goto label_058b346f;
        pGVar15->m_Items[1] = pGVar16;
        Il2CppCodeGenWriteBarrier(pGVar15->m_Items + 1);
        (__this_00->fields).children = pGVar15;
        Il2CppCodeGenWriteBarrier(&(__this_00->fields).children);
        UVar17 = (UnityEngine_Vector2_Fields)
                 Gisketch_Aottg2UI_Game_AottgInGameView__Build
                           (local_80,(UnityEngine_Transform_o *)local_78,__this_00,pMVar19);
        uVar2 = local_9c;
        if (UVar17 == (UnityEngine_Vector2_Fields)0x0) break;
        pUVar3 = local_58->_buttons;
        lVar21 = (long)(int)local_9c;
        obj_00 = UnityEngine_GameObject__GetComponent_object_
                           ((UnityEngine_GameObject_o *)UVar17,
                            (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Button);
        if (pUVar3 == (UnityEngine_UI_Button_array *)0x0) break;
        if (obj_00 != (UnityEngine_UI_Button_o *)0x0) {
          pIVar9 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj_00,(((pUVar3->obj).klass)->_1).element_class);
          if (pIVar9 == (Il2CppObject *)0x0) goto label_058b3474;
        }
        if ((uint)pUVar3->max_length <= uVar2) goto label_058b346f;
        pUVar3->m_Items[lVar21] = obj_00;
        Il2CppCodeGenWriteBarrier(pUVar3->m_Items + lVar21);
        local_98 = UVar17;
        pSVar18 = UnityEngine_GameObject__GetComponentsInChildren_object_
                            ((UnityEngine_GameObject_o *)UVar17,true,
                             (MethodInfo_353C0B0 *)
                             MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_TMP_Text);
        if (pSVar18 == (System_Object_array *)0x0) break;
        uVar2 = (uint)pSVar18->max_length;
        if (0 < (int)uVar2) {
          uVar22 = 0;
          do {
            if (uVar2 <= uVar22) goto label_058b346f;
            pTVar8 = (TMPro_TMP_Text_o *)pSVar18->m_Items[(int)uVar22];
            if (pTVar8 == (TMPro_TMP_Text_o *)0x0) goto label_058b346a;
            pSVar11 = UnityEngine_Object__get_name((UnityEngine_Object_o *)pTVar8,(MethodInfo *)0x0);
            bVar1 = System_String__op_Equality(pSVar11,pSVar10,(MethodInfo *)0x0);
            uVar2 = local_9c;
            if (bVar1) {
              pTVar4 = *local_50;
              if (pTVar4 == (TMPro_TMP_Text_array *)0x0) goto label_058b346a;
              lVar21 = (long)(int)local_9c;
              pIVar9 = il2cpp_vm_Object_IsInst
                                 ((Il2CppObject *)pTVar8,(((pTVar4->obj).klass)->_1).element_class);
              if (pIVar9 == (Il2CppObject *)0x0) goto label_058b3474;
              if ((uint)pTVar4->max_length <= uVar2) goto label_058b346f;
              ppTVar20 = pTVar4->m_Items + lVar21 + -4;
              pTVar4->m_Items[lVar21] = pTVar8;
            }
            else {
              pTVar4 = *local_70;
              if (pTVar4 == (TMPro_TMP_Text_array *)0x0) goto label_058b346a;
              lVar21 = (long)(int)local_9c;
              pIVar9 = il2cpp_vm_Object_IsInst
                                 ((Il2CppObject *)pTVar8,(((pTVar4->obj).klass)->_1).element_class);
              if (pIVar9 == (Il2CppObject *)0x0) goto label_058b3474;
              if ((uint)pTVar4->max_length <= uVar2) goto label_058b346f;
              ppTVar20 = pTVar4->m_Items + lVar21 + -4;
              pTVar4->m_Items[lVar21] = pTVar8;
            }
            Il2CppCodeGenWriteBarrier(ppTVar20 + 4);
            TMPro_TMP_Text__set_enableAutoSizing(pTVar8,true,(MethodInfo *)0x0);
            TMPro_TMP_Text__set_fontSizeMin(pTVar8,14.0,(MethodInfo *)0x0);
            TMPro_TMP_Text__set_fontSizeMax(pTVar8,(pTVar8->fields).m_fontSize,(MethodInfo *)0x0);
            uVar22 = uVar22 + 1;
            uVar2 = (uint)pSVar18->max_length;
          } while ((int)uVar22 < (int)uVar2);
        }
        uVar2 = local_9c;
        pTVar4 = *local_70;
        if (pTVar4 == (TMPro_TMP_Text_array *)0x0) break;
        lVar21 = (long)(int)local_9c;
        if ((uint)pTVar4->max_length <= local_9c) goto label_058b346f;
        if ((pTVar4->m_Items[lVar21] == (TMPro_TMP_Text_o *)0x0) ||
           (pTVar5 = *local_60, pTVar5 == (TMPro_TMP_FontAsset_array *)0x0)) break;
        obj = (pTVar4->m_Items[lVar21]->fields).m_fontAsset;
        if (obj != (TMPro_TMP_FontAsset_o *)0x0) {
          pIVar9 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((pTVar5->obj).klass)->_1).element_class);
          if (pIVar9 == (Il2CppObject *)0x0) {
label_058b3474:
            pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
          }
        }
        if ((uint)pTVar5->max_length <= uVar2) goto label_058b346f;
        pTVar5->m_Items[lVar21] = obj;
        Il2CppCodeGenWriteBarrier(pTVar5->m_Items + lVar21);
        pMVar19 = (MethodInfo *)0x0;
        pUVar7 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)local_98,(MethodInfo *)0x0)
        ;
        if (*(uint *)&local_68[1].monitor <= local_9c) goto label_058b346f;
        UVar17 = *(UnityEngine_Vector2_Fields *)(&local_68[2].klass + (int)local_9c);
        fVar23 = UVar17.x;
        fVar24 = UVar17.y;
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView->_2).cctor_finished_or_no_cctor == 0) {
          uStack_90 = 0;
          local_98 = UVar17;
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
          fVar23 = local_98.x;
          fVar24 = local_98.y;
        }
        position_00.fields.y = fVar24;
        position_00.fields.x = fVar23;
        Gisketch_Aottg2UI_Game_AottgInGameView__Position(pUVar7,position_00,pMVar19);
        local_9c = local_9c + 1;
        if (7 < (int)local_9c) {
          return;
        }
      }
    }
  }
label_058b346a:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgInGameWheelView$$Show
// il2cpp: void Gisketch_Aottg2UI_Game_AottgInGameWheelView__Show (Gisketch_Aottg2UI_Game_AottgInGameWheelView_o* __this, System_String_o* title, System_String_o* hint, System_Collections_Generic_IReadOnlyList_string__o* options, System_Collections_Generic_IReadOnlyList_string__o* shortcuts, const MethodInfo* method);
// 0x58b3490

void Gisketch_Aottg2UI_Game_AottgInGameWheelView__Show
               (Gisketch_Aottg2UI_Game_AottgInGameWheelView_o *__this,System_String_o *title,
               System_String_o *hint,System_Collections_Generic_IReadOnlyList_string__o *options,
               System_Collections_Generic_IReadOnlyList_string__o *shortcuts,MethodInfo *method)

{
  TMPro_TMP_Text_o *pTVar1;
  System_Collections_Generic_IReadOnlyList_string__c *pSVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  UnityEngine_UI_Button_array *pUVar4;
  TMPro_TMP_Text_array *pTVar5;
  TMPro_TMP_FontAsset_array *pTVar6;
  int32_t iVar7;
  VirtualInvokeData *pVVar8;
  UnityEngine_GameObject_o *__this_00;
  System_String_o *pSVar9;
  TMPro_TMP_FontAsset_o *value;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  
  if (Il2CppMethodInitialized_0754533f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyCollection_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IReadOnlyList_string);
    Il2CppMethodInitialized_0754533f = '\x01';
  }
  pTVar1 = (__this->fields)._title;
  if (pTVar1 != (TMPro_TMP_Text_o *)0x0) {
    (*(pTVar1->klass->vtable)._66_set_text.methodPtr)
              (pTVar1,title,(pTVar1->klass->vtable)._66_set_text.method);
    pTVar1 = (__this->fields)._hint;
    if (pTVar1 != (TMPro_TMP_Text_o *)0x0) {
      (*(pTVar1->klass->vtable)._66_set_text.methodPtr)
                (pTVar1,hint,(pTVar1->klass->vtable)._66_set_text.method);
      if (options != (System_Collections_Generic_IReadOnlyList_string__o *)0x0) {
        uVar11 = 0;
        do {
          pSVar2 = options->klass;
          uVar10 = (ulong)(pSVar2->_2).interface_offsets_count;
          if (uVar10 != 0) {
            pIVar3 = (pSVar2->_1).interfaceOffsets;
            lVar12 = 0;
            do {
              if (*(System_Collections_Generic_IReadOnlyCollection_string__c **)
                   ((long)&pIVar3->interfaceType + lVar12) ==
                  TypeInfo_System_Collections_Generic_IReadOnlyCollection_string) {
                pVVar8 = pSVar2->vtable + *(int *)((long)&pIVar3->offset + lVar12);
                goto label_058b35c3;
              }
              lVar12 = lVar12 + 0x10;
            } while (uVar10 * 0x10 != lVar12);
          }
          pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                             ((Il2CppObject *)options,
                              (Il2CppClass *)TypeInfo_System_Collections_Generic_IReadOnlyCollection_string,0)
          ;
label_058b35c3:
          iVar7 = (*pVVar8->methodPtr)((Il2CppObject *)options,pVVar8->method);
          pUVar4 = (__this->fields)._buttons;
          if (pUVar4 == (UnityEngine_UI_Button_array *)0x0) break;
          if ((uint)pUVar4->max_length <= uVar11) goto label_058b37f5;
          if (pUVar4->m_Items[(int)uVar11] == (UnityEngine_UI_Button_o *)0x0) break;
          __this_00 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar4->m_Items[(int)uVar11],(MethodInfo *)0x0);
          if (__this_00 == (UnityEngine_GameObject_o *)0x0) break;
          UnityEngine_GameObject__SetActive(__this_00,(int)uVar11 < iVar7,(MethodInfo *)0x0);
          if ((int)uVar11 < iVar7) {
            pTVar5 = (__this->fields)._shortcuts;
            if (pTVar5 == (TMPro_TMP_Text_array *)0x0) break;
            if ((uint)pTVar5->max_length <= uVar11) {
label_058b37f5:
              ThrowIndexOutOfRangeException();
            }
            if (shortcuts == (System_Collections_Generic_IReadOnlyList_string__o *)0x0) break;
            pTVar1 = pTVar5->m_Items[(int)uVar11];
            pSVar2 = shortcuts->klass;
            uVar10 = (ulong)(pSVar2->_2).interface_offsets_count;
            if (uVar10 != 0) {
              pIVar3 = (pSVar2->_1).interfaceOffsets;
              lVar12 = 0;
              do {
                if (*(System_Collections_Generic_IReadOnlyList_string__c **)
                     ((long)&pIVar3->interfaceType + lVar12) ==
                    TypeInfo_System_Collections_Generic_IReadOnlyList_string) {
                  pVVar8 = pSVar2->vtable + *(int *)((long)&pIVar3->offset + lVar12);
                  goto label_058b36b3;
                }
                lVar12 = lVar12 + 0x10;
              } while (uVar10 * 0x10 != lVar12);
            }
            pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                               ((Il2CppObject *)shortcuts,
                                (Il2CppClass *)TypeInfo_System_Collections_Generic_IReadOnlyList_string,0);
label_058b36b3:
            pSVar9 = (*pVVar8->methodPtr)((Il2CppObject *)shortcuts,uVar11,pVVar8->method);
            if (pTVar1 == (TMPro_TMP_Text_o *)0x0) break;
            (*(pTVar1->klass->vtable)._66_set_text.methodPtr)
                      (pTVar1,pSVar9,(pTVar1->klass->vtable)._66_set_text.method);
            pSVar2 = options->klass;
            uVar10 = (ulong)(pSVar2->_2).interface_offsets_count;
            if (uVar10 != 0) {
              pIVar3 = (pSVar2->_1).interfaceOffsets;
              lVar12 = 0;
              do {
                if (*(System_Collections_Generic_IReadOnlyList_string__c **)
                     ((long)&pIVar3->interfaceType + lVar12) ==
                    TypeInfo_System_Collections_Generic_IReadOnlyList_string) {
                  pVVar8 = pSVar2->vtable + *(int *)((long)&pIVar3->offset + lVar12);
                  goto label_058b374b;
                }
                lVar12 = lVar12 + 0x10;
              } while (uVar10 * 0x10 != lVar12);
            }
            pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                               ((Il2CppObject *)options,
                                (Il2CppClass *)TypeInfo_System_Collections_Generic_IReadOnlyList_string,0);
label_058b374b:
            pSVar9 = (*pVVar8->methodPtr)((Il2CppObject *)options,uVar11,pVVar8->method);
            if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
            }
            pSVar9 = Gisketch_Aottg2UI_Styling_GisketchArabicText__ToVisual(pSVar9,false,(MethodInfo *)0x0);
            pTVar5 = (__this->fields)._labels;
            if (pTVar5 == (TMPro_TMP_Text_array *)0x0) break;
            if ((uint)pTVar5->max_length <= uVar11) goto label_058b37f5;
            pTVar6 = (__this->fields)._labelFonts;
            if (pTVar6 == (TMPro_TMP_FontAsset_array *)0x0) break;
            if ((uint)pTVar6->max_length <= uVar11) goto label_058b37f5;
            pTVar1 = pTVar5->m_Items[(int)uVar11];
            value = Gisketch_Aottg2UI_Styling_GisketchTypography__ForText
                              (pSVar9,pTVar6->m_Items[(int)uVar11],(MethodInfo *)0x0);
            if (pTVar1 == (TMPro_TMP_Text_o *)0x0) break;
            TMPro_TMP_Text__set_font(pTVar1,value,(MethodInfo *)0x0);
            pTVar5 = (__this->fields)._labels;
            if (pTVar5 == (TMPro_TMP_Text_array *)0x0) break;
            if ((uint)pTVar5->max_length <= uVar11) goto label_058b37f5;
            pTVar1 = pTVar5->m_Items[(int)uVar11];
            if (pTVar1 == (TMPro_TMP_Text_o *)0x0) break;
            (*(pTVar1->klass->vtable)._66_set_text.methodPtr)
                      (pTVar1,pSVar9,(pTVar1->klass->vtable)._66_set_text.method);
          }
          uVar11 = uVar11 + 1;
          if (uVar11 == 8) {
            return;
          }
        } while( true );
      }
    }
  }
  ThrowNullReferenceException();
}


