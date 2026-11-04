// Type: Gisketch.Aottg2UI.Game.AottgInGameWheelView
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgInGameWheelView.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgInGameWheelView$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgInGameWheelView___ctor (Gisketch_Aottg2UI_Game_AottgInGameWheelView_o* __this, UnityEngine_Transform_o* parent, const MethodInfo* method);
// 0x181ddfa50
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181ddff2c: nop dword ptr [rax]
// asm:   0x181de053a: jmp 0x181de0569
// asm:   0x181de062d: mov r14, qword ptr [rsp + 0xc0]
// asm:   0x181de0635: xor edi, edi
// asm:   0x181de0637: jmp 0x181ddff30

void Gisketch_Aottg2UI_Game_AottgInGameWheelView___ctor
               (Gisketch_Aottg2UI_Game_AottgInGameWheelView_o *__this,UnityEngine_Transform_o *parent,
               MethodInfo *method)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  UnityEngine_Vector2_Fields position;
  UnityEngine_Vector2_o position_00;
  bool bVar4;
  UnityEngine_UI_Button_array *pUVar5;
  TMPro_TMP_Text_array *pTVar6;
  Gisketch_Aottg2UI_Game_AottgInGameView_o *__this_00;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_Transform_o *parent_00;
  TMPro_TMP_Text_o *pTVar8;
  Il2CppObject *pIVar9;
  System_String_o *pSVar10;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_01;
  System_String_o *pSVar11;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar12;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar13;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar14;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *value;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar15;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_UI_Button_o *obj;
  Il2CppObject *pIVar16;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *pUVar17;
  uint uVar18;
  longlong lVar19;
  uint local_res8 [2];
  UnityEngine_Transform_o *local_res10;
  System_Enum_o local_f0;
  undefined4 local_e0;
  
  local_res10 = parent;
  if (Il2CppMethodInitialized_184344a96 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_AottgButtonVariant);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UI_Button_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_TMP_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
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
    Il2CppMethodInitialized_184344a96 = '\x01';
  }
  local_res8[0] = 0;
  pUVar5 = (UnityEngine_UI_Button_array *)SZArrayNew(TypeInfo_UnityEngine_UI_Button_array,8);
  (__this->fields)._buttons = pUVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._buttons,pUVar5);
  pTVar6 = (TMPro_TMP_Text_array *)SZArrayNew(TypeInfo_TMPro_TMP_Text_array,8);
  (__this->fields)._shortcuts = pTVar6;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._shortcuts,pTVar6);
  pTVar6 = (TMPro_TMP_Text_array *)SZArrayNew(TypeInfo_TMPro_TMP_Text_array,8);
  (__this->fields)._labels = pTVar6;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._labels,pTVar6);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
  Gisketch_Aottg2UI_Game_AottgInGameView___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) {
    pUVar7 = Gisketch_Aottg2UI_Game_AottgInGameView__Panel
                       (__this_00,parent,"inGameSurface",250.0,150.0,false,(System_Nullable_float__o)0x0
                        ,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_18433e3c9 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_18433e3c9 = '\x01';
    }
    position = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
    }
    Gisketch_Aottg2UI_Game_AottgInGameView__Position(pUVar7,(UnityEngine_Vector2_o)position,(MethodInfo *)0x0)
    ;
    parent_00 = Gisketch_Aottg2UI_Game_AottgInGameView__Panel
                          (__this_00,pUVar7,"inGameWheelHeader",250.0,48.0,false,
                           (System_Nullable_float__o)0x0,(MethodInfo *)0x0);
    pTVar8 = Gisketch_Aottg2UI_Game_AottgInGameView__Text
                       (__this_00,parent_00,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),230.0,
                        42.0,"inGameTitle",(MethodInfo *)0x0);
    (__this->fields)._title = pTVar8;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._title,pTVar8);
    pTVar8 = Gisketch_Aottg2UI_Game_AottgInGameView__Text
                       (__this_00,pUVar7,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),230.0,
                        102.0,"inGameWheelHint",(MethodInfo *)0x0);
    (__this->fields)._hint = pTVar8;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._hint,pTVar8);
    pIVar9 = SZArrayNew(TypeInfo_UnityEngine_Vector2_array,8);
    if (pIVar9 != (Il2CppObject *)0x0) {
      if (*(int *)&pIVar9[1].monitor != 0) {
        *(undefined4 *)&pIVar9[2].klass = 0;
        *(undefined4 *)((longlong)&pIVar9[2].klass + 4) = 0x43610000;
        if (1 < *(uint *)&pIVar9[1].monitor) {
          *(undefined4 *)&pIVar9[2].monitor = 0x437a0000;
          *(undefined4 *)((longlong)&pIVar9[2].monitor + 4) = 0x43070000;
          if ((2 < *(uint *)&pIVar9[1].monitor) &&
             (pIVar9[3].klass = (Il2CppClass *)0x43938000, 3 < *(uint *)&pIVar9[1].monitor)) {
            *(undefined4 *)&pIVar9[3].monitor = 0x437a0000;
            *(undefined4 *)((longlong)&pIVar9[3].monitor + 4) = 0xc3070000;
            if (4 < *(uint *)&pIVar9[1].monitor) {
              *(undefined4 *)&pIVar9[4].klass = 0;
              *(undefined4 *)((longlong)&pIVar9[4].klass + 4) = 0xc3610000;
              if (5 < *(uint *)&pIVar9[1].monitor) {
                *(undefined4 *)&pIVar9[4].monitor = 0xc37a0000;
                *(undefined4 *)((longlong)&pIVar9[4].monitor + 4) = 0xc3070000;
                if (6 < *(uint *)&pIVar9[1].monitor) {
                  *(undefined4 *)&pIVar9[5].klass = 0xc3938000;
                  *(undefined4 *)((longlong)&pIVar9[5].klass + 4) = 0;
                  if (7 < *(uint *)&pIVar9[1].monitor) {
                    *(undefined4 *)&pIVar9[5].monitor = 0xc37a0000;
                    *(undefined4 *)((longlong)&pIVar9[5].monitor + 4) = 0x43070000;
                    local_res8[0] = 0;
                    do {
                      pSVar10 = System_Int32__ToString((int32_t *)local_res8,(MethodInfo *)0x0);
                      pSVar10 = System_String__Concat_1969e50("AoTTG Wheel Shortcut ",pSVar10,(MethodInfo *)0x0)
                      ;
                      __this_01 = il2cpp_codegen_object_new
                                            ((Il2CppClass *)
                                             TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
                      Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_01,(MethodInfo *)0x0);
                      if (__this_01 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
label_181de06f8:
                        ThrowNullReferenceException();
                      }
                      (__this_01->fields).type = "Button";
                      Il2CppCodeGenWriteBarrier(&(__this_01->fields).type,"Button");
                      local_f0.klass = (System_Enum_c *)TypeInfo_Gisketch_Aottg2UI_Code_AottgButtonVariant;
                      local_f0.monitor = &g_data_ffffffffffffffff;
                      local_e0 = 3;
                      pSVar11 = System_Enum__ToString(&local_f0,(MethodInfo *)0x0);
                      pSVar11 = System_String__Concat_1969e50("button",pSVar11,(MethodInfo *)0x0)
                      ;
                      (__this_01->fields).style = pSVar11;
                      Il2CppCodeGenWriteBarrier(&(__this_01->fields).style,pSVar11);
                      (__this_01->fields).action = "ingame.wheel.select";
                      Il2CppCodeGenWriteBarrier(&(__this_01->fields).action,"ingame.wheel.select");
                      pSVar11 = System_Int32__ToString((int32_t *)local_res8,(MethodInfo *)0x0);
                      (__this_01->fields).value = pSVar11;
                      Il2CppCodeGenWriteBarrier(&(__this_01->fields).value,pSVar11);
                      pGVar12 = Gisketch_Aottg2UI_Code_AottgUi__Points(220.0,(MethodInfo *)0x0);
                      pGVar13 = Gisketch_Aottg2UI_Code_AottgUi__Points(76.0,(MethodInfo *)0x0);
                      pGVar14 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                          ("Column","Center","Center",
                                           (System_String_o *)0x0,(System_String_o *)0x0,2.0,pGVar12,pGVar13,
                                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,6.0,0.0,0.0,0.0,0.0,
                                           0.0,0.0,0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
                      (__this_01->fields).layout = pGVar14;
                      Il2CppCodeGenWriteBarrier(&(__this_01->fields).layout,pGVar14);
                      value = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                              SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array,2);
                      pGVar15 = il2cpp_codegen_object_new
                                          ((Il2CppClass *)
                                           TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
                      Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar15,(MethodInfo *)0x0);
                      if (pGVar15 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)
                      goto label_181de06f8;
                      (pGVar15->fields).type = "Text";
                      Il2CppCodeGenWriteBarrier(&(pGVar15->fields).type,"Text");
                      (pGVar15->fields).id = pSVar10;
                      Il2CppCodeGenWriteBarrier(&(pGVar15->fields).id,pSVar10);
                      (pGVar15->fields).style = "inGameWheelShortcut";
                      Il2CppCodeGenWriteBarrier(&(pGVar15->fields).style,"inGameWheelShortcut");
                      (pGVar15->fields).text = " ";
                      Il2CppCodeGenWriteBarrier(&(pGVar15->fields).text," ");
                      pGVar12 = Gisketch_Aottg2UI_Code_AottgUi__Points(200.0,(MethodInfo *)0x0);
                      pGVar13 = Gisketch_Aottg2UI_Code_AottgUi__Points(20.0,(MethodInfo *)0x0);
                      pGVar14 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                          ("Column",(System_String_o *)0x0,(System_String_o *)0x0
                                           ,(System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar12,pGVar13,
                                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,
                                           0.0,0.0,0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
                      (pGVar15->fields).layout = pGVar14;
                      Il2CppCodeGenWriteBarrier(&(pGVar15->fields).layout,pGVar14);
                      if (value == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0)
                      goto label_181de06f8;
                      if ((int)value->max_length == 0) {
label_181de06f2:
                        ThrowIndexOutOfRangeException();
                      }
                      value->m_Items[0] = pGVar15;
                      Il2CppCodeGenWriteBarrier(value->m_Items,pGVar15);
                      pGVar15 = il2cpp_codegen_object_new
                                          ((Il2CppClass *)
                                           TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
                      Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar15,(MethodInfo *)0x0);
                      if (pGVar15 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)
                      goto label_181de06f8;
                      (pGVar15->fields).type = "Text";
                      Il2CppCodeGenWriteBarrier(&(pGVar15->fields).type,"Text");
                      pSVar11 = System_Int32__ToString((int32_t *)local_res8,(MethodInfo *)0x0);
                      pSVar11 = System_String__Concat_1969e50("AoTTG Wheel Action ",pSVar11,(MethodInfo *)0x0)
                      ;
                      (pGVar15->fields).id = pSVar11;
                      Il2CppCodeGenWriteBarrier(&(pGVar15->fields).id,pSVar11);
                      (pGVar15->fields).style = "inGameWheelText";
                      Il2CppCodeGenWriteBarrier(&(pGVar15->fields).style,"inGameWheelText");
                      (pGVar15->fields).text = " ";
                      Il2CppCodeGenWriteBarrier(&(pGVar15->fields).text," ");
                      pGVar12 = Gisketch_Aottg2UI_Code_AottgUi__Points(200.0,(MethodInfo *)0x0);
                      pGVar13 = Gisketch_Aottg2UI_Code_AottgUi__Points(38.0,(MethodInfo *)0x0);
                      pGVar14 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                          ("Column",(System_String_o *)0x0,(System_String_o *)0x0
                                           ,(System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar12,pGVar13,
                                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,
                                           0.0,0.0,0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
                      (pGVar15->fields).layout = pGVar14;
                      Il2CppCodeGenWriteBarrier(&(pGVar15->fields).layout,pGVar14);
                      if ((uint)value->max_length < 2) goto label_181de06f2;
                      value->m_Items[1] = pGVar15;
                      Il2CppCodeGenWriteBarrier(value->m_Items + 1,pGVar15);
                      (__this_01->fields).children = value;
                      Il2CppCodeGenWriteBarrier(&(__this_01->fields).children,value);
                      __this_02 = Gisketch_Aottg2UI_Game_AottgInGameView__Build
                                            (__this_00,local_res10,__this_01,(MethodInfo *)0x0);
                      uVar18 = local_res8[0];
                      if (__this_02 == (UnityEngine_GameObject_o *)0x0) goto label_181de06f8;
                      pUVar5 = (__this->fields)._buttons;
                      lVar19 = (longlong)(int)local_res8[0];
                      obj = UnityEngine_GameObject__GetComponent_object_
                                      (__this_02,
                                       (MethodInfo_6F5650 *)
                                       MethodInfo_UnityEngine_GameObject_GetComponent_Button);
                      if (pUVar5 == (UnityEngine_UI_Button_array *)0x0) goto label_181de06f8;
                      if ((obj != (UnityEngine_UI_Button_o *)0x0) &&
                         (pIVar16 = il2cpp_vm_Object_IsInst
                                              ((Il2CppObject *)obj,(((pUVar5->obj).klass)->_1).element_class),
                         pIVar16 == (Il2CppObject *)0x0)) {
                        pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
                        il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
                      }
                      if ((uint)pUVar5->max_length <= uVar18) goto label_181de06f2;
                      pUVar5->m_Items[lVar19] = obj;
                      Il2CppCodeGenWriteBarrier(pUVar5->m_Items + lVar19,obj);
                      pUVar17 = UnityEngine_GameObject__GetComponentsInChildren___Il2CppFullySharedGenericType_
                                          (__this_02,true,
                                           (MethodInfo_6F5750 *)
                                           MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_TMP_Text)
                      ;
                      uVar18 = 0;
                      if (pUVar17 == (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *)0x0)
                      goto label_181de0704;
                      for (; uVar1 = (uint)pUVar17->max_length, (int)uVar18 < (int)uVar1; uVar18 = uVar18 + 1)
                      {
                        if (uVar1 <= uVar18) goto label_181de06fe;
                        pTVar8 = (TMPro_TMP_Text_o *)(&pUVar17->m_Items[0].klass)[(int)uVar18];
                        if (pTVar8 == (TMPro_TMP_Text_o *)0x0) goto label_181de0704;
                        pSVar11 = UnityEngine_Object__get_name
                                            ((UnityEngine_Object_o *)pTVar8,(MethodInfo *)0x0);
                        bVar4 = System_String__op_Equality(pSVar11,pSVar10,(MethodInfo *)0x0);
                        uVar1 = local_res8[0];
                        if (bVar4) {
                          pTVar6 = (__this->fields)._shortcuts;
                          if (pTVar6 == (TMPro_TMP_Text_array *)0x0) goto label_181de0704;
                          pIVar16 = il2cpp_vm_Object_IsInst
                                              ((Il2CppObject *)pTVar8,
                                               (((pTVar6->obj).klass)->_1).element_class);
                          if (pIVar16 == (Il2CppObject *)0x0) {
                            pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
                            il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
                          }
                        }
                        else {
                          pTVar6 = (__this->fields)._labels;
                          if (pTVar6 == (TMPro_TMP_Text_array *)0x0) goto label_181de0704;
                          pIVar16 = il2cpp_vm_Object_IsInst
                                              ((Il2CppObject *)pTVar8,
                                               (((pTVar6->obj).klass)->_1).element_class);
                          if (pIVar16 == (Il2CppObject *)0x0) {
                            pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
                            il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
                          }
                        }
                        if ((uint)pTVar6->max_length <= uVar1) goto label_181de06fe;
                        pTVar6->m_Items[(int)uVar1] = pTVar8;
                        Il2CppCodeGenWriteBarrier(pTVar6->m_Items + (int)uVar1,pTVar8);
                        TMPro_TMP_Text__set_enableAutoSizing(pTVar8,true,(MethodInfo *)0x0);
                        TMPro_TMP_Text__set_fontSizeMin(pTVar8,14.0,(MethodInfo *)0x0);
                        TMPro_TMP_Text__set_fontSizeMax(pTVar8,(pTVar8->fields).m_fontSize,(MethodInfo *)0x0);
                      }
                      pUVar7 = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0);
                      if (*(uint *)&pIVar9[1].monitor <= local_res8[0]) break;
                      fVar2 = *(float *)(&pIVar9[2].klass + (int)local_res8[0]);
                      fVar3 = *(float *)((longlong)&pIVar9[2].klass + (longlong)(int)local_res8[0] * 8 + 4);
                      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView->_2).cctor_finished_or_no_cctor ==
                          0) {
                        il2cpp_codegen_runtime_class_init
                                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
                      }
                      position_00.fields.y = fVar3;
                      position_00.fields.x = fVar2;
                      Gisketch_Aottg2UI_Game_AottgInGameView__Position(pUVar7,position_00,(MethodInfo *)0x0);
                      local_res8[0] = local_res8[0] + 1;
                      if (7 < (int)local_res8[0]) {
                        return;
                      }
                    } while( true );
                  }
                }
              }
            }
          }
        }
      }
label_181de06fe:
      ThrowIndexOutOfRangeException();
    }
  }
label_181de0704:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgInGameWheelView$$Show
// il2cpp: void Gisketch_Aottg2UI_Game_AottgInGameWheelView__Show (Gisketch_Aottg2UI_Game_AottgInGameWheelView_o* __this, System_String_o* title, System_String_o* hint, System_Collections_Generic_IReadOnlyList_string__o* options, System_Collections_Generic_IReadOnlyList_string__o* shortcuts, const MethodInfo* method);
// 0x181ddf820
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181ddf8ad: mov r14, qword ptr [rsp + 0x70]

void Gisketch_Aottg2UI_Game_AottgInGameWheelView__Show
               (Gisketch_Aottg2UI_Game_AottgInGameWheelView_o *__this,System_String_o *title,
               System_String_o *hint,System_Collections_Generic_IReadOnlyList_string__o *options,
               System_Collections_Generic_IReadOnlyList_string__o *shortcuts,MethodInfo *method)

{
  ushort uVar1;
  TMPro_TMP_Text_o *pTVar2;
  System_Collections_Generic_IReadOnlyList_string__c *pSVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  UnityEngine_UI_Button_array *pUVar5;
  TMPro_TMP_Text_array *pTVar6;
  ushort uVar7;
  int32_t iVar8;
  VirtualInvokeData *pVVar9;
  UnityEngine_GameObject_o *__this_00;
  System_String_o *pSVar10;
  uint uVar11;
  
  if (Il2CppMethodInitialized_184344a97 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyCollection_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IReadOnlyList_string);
    Il2CppMethodInitialized_184344a97 = '\x01';
  }
  pTVar2 = (__this->fields)._title;
  if (pTVar2 != (TMPro_TMP_Text_o *)0x0) {
    (*(pTVar2->klass->vtable)._66_set_text.methodPtr)
              (pTVar2,title,(pTVar2->klass->vtable)._66_set_text.method);
    pTVar2 = (__this->fields)._hint;
    if (pTVar2 != (TMPro_TMP_Text_o *)0x0) {
      (*(pTVar2->klass->vtable)._66_set_text.methodPtr)
                (pTVar2,hint,(pTVar2->klass->vtable)._66_set_text.method);
      uVar11 = 0;
      if (options != (System_Collections_Generic_IReadOnlyList_string__o *)0x0) {
        do {
          pSVar3 = options->klass;
          uVar7 = 0;
          uVar1 = (pSVar3->_2).interface_offsets_count;
          if (uVar1 != 0) {
            pIVar4 = (pSVar3->_1).interfaceOffsets;
            do {
              if (pIVar4[uVar7].interfaceType ==
                  (Il2CppClass *)TypeInfo_System_Collections_Generic_IReadOnlyCollection_string) {
                pVVar9 = (VirtualInvokeData *)&pSVar3->vtable[pIVar4[uVar7].offset].methodPtr;
                goto label_181ddf906;
              }
              uVar7 = uVar7 + 1;
            } while (uVar7 < uVar1);
          }
          pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                             ((Il2CppObject *)options,
                              (Il2CppClass *)TypeInfo_System_Collections_Generic_IReadOnlyCollection_string,0)
          ;
label_181ddf906:
          iVar8 = (*pVVar9->methodPtr)((Il2CppObject *)options,pVVar9->method);
          pUVar5 = (__this->fields)._buttons;
          if (pUVar5 == (UnityEngine_UI_Button_array *)0x0) break;
          if ((uint)pUVar5->max_length <= uVar11) goto label_181ddfa3d;
          if ((pUVar5->m_Items[(int)uVar11] == (UnityEngine_UI_Button_o *)0x0) ||
             (__this_00 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pUVar5->m_Items[(int)uVar11],(MethodInfo *)0x0
                                    ), __this_00 == (UnityEngine_GameObject_o *)0x0)) break;
          UnityEngine_GameObject__SetActive(__this_00,(int)uVar11 < iVar8,(MethodInfo *)0x0);
          if ((int)uVar11 < iVar8) {
            pTVar6 = (__this->fields)._shortcuts;
            if (pTVar6 == (TMPro_TMP_Text_array *)0x0) break;
            if ((uint)pTVar6->max_length <= uVar11) {
label_181ddfa3d:
              ThrowIndexOutOfRangeException();
            }
            if (shortcuts == (System_Collections_Generic_IReadOnlyList_string__o *)0x0) break;
            pTVar2 = pTVar6->m_Items[(int)uVar11];
            pSVar10 = (System_String_o *)
                      il2cpp_runtime_helper_180026600(0,TypeInfo_System_Collections_Generic_IReadOnlyList_string,shortcuts,
                                    uVar11);
            if (pTVar2 == (TMPro_TMP_Text_o *)0x0) break;
            (*(pTVar2->klass->vtable)._66_set_text.methodPtr)
                      (pTVar2,pSVar10,(pTVar2->klass->vtable)._66_set_text.method);
            pTVar6 = (__this->fields)._labels;
            if (pTVar6 == (TMPro_TMP_Text_array *)0x0) break;
            if ((uint)pTVar6->max_length <= uVar11) goto label_181ddfa3d;
            pTVar2 = pTVar6->m_Items[(int)uVar11];
            pSVar10 = (System_String_o *)
                      il2cpp_runtime_helper_180026600(0,TypeInfo_System_Collections_Generic_IReadOnlyList_string,options,uVar11)
            ;
            if (pTVar2 == (TMPro_TMP_Text_o *)0x0) break;
            (*(pTVar2->klass->vtable)._66_set_text.methodPtr)
                      (pTVar2,pSVar10,(pTVar2->klass->vtable)._66_set_text.method);
          }
          uVar11 = uVar11 + 1;
          if (7 < (int)uVar11) {
            return;
          }
        } while( true );
      }
    }
  }
  ThrowNullReferenceException();
}


