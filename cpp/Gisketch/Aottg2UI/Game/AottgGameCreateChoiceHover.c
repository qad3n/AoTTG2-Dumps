// Type: Gisketch.Aottg2UI.Game.AottgGameCreateChoiceHover
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgGameCreateChoiceHover.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgGameCreateChoiceHover.AottgGameCreateChoiceFocus$$Setup
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_AottgGameCreateChoiceFocus__Setup (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_AottgGameCreateChoiceFocus_o* __this, Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_o* hover, const MethodInfo* method);
// 0x180ace2f0

void
Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_AottgGameCreateChoiceFocus__Setup(Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_AottgGameCreateChoiceFocus_o* __this, Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_o* hover, MethodInfo* method)

{
  (__this->fields)._hover = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._hover,value);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateChoiceHover.AottgGameCreateChoiceFocus$$OnSelect
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_AottgGameCreateChoiceFocus__OnSelect (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_AottgGameCreateChoiceFocus_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x1823c2130

void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_AottgGameCreateChoiceFocus__OnSelect
               (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_AottgGameCreateChoiceFocus_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_o *__this_00;
  bool bVar1;
  
  __this_00 = (__this->fields)._hover;
  if (__this_00 != (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_o *)0x0) {
    bVar1 = Il2CppMethodInitialized_184347d79 == '\0';
    (__this_00->fields)._selected = true;
    if (bVar1) {
      il2cpp_codegen_initialize_runtime_metadata(&"game-create-choice-detail-description");
      il2cpp_codegen_initialize_runtime_metadata(&"game-create-choice-detail-title");
      Il2CppMethodInitialized_184347d79 = '\x01';
    }
    Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__SetHovered(__this_00,true,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__SetText
              (__this_00,"game-create-choice-detail-title",(__this_00->fields)._title,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__SetText
              (__this_00,"game-create-choice-detail-description",(__this_00->fields)._description,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateChoiceHover.AottgGameCreateChoiceFocus$$OnDeselect
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_AottgGameCreateChoiceFocus__OnDeselect (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_AottgGameCreateChoiceFocus_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x1823c2100

void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_AottgGameCreateChoiceFocus__OnDeselect
               (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_AottgGameCreateChoiceFocus_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_o *__this_00;
  
  __this_00 = (__this->fields)._hover;
  if (__this_00 != (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_o *)0x0) {
    (__this_00->fields)._selected = false;
    Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__SetHovered
              (__this_00,(__this_00->fields)._hovered,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateChoiceHover.AottgGameCreateChoiceFocus$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_AottgGameCreateChoiceFocus___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_AottgGameCreateChoiceFocus_o* __this, const MethodInfo* method);
// 0x180528540

void
Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_AottgGameCreateChoiceFocus___ctor(Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_AottgGameCreateChoiceFocus_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateChoiceHover$$Setup
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__Setup (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_o* __this, System_String_o* title, System_String_o* description, System_String_o* previewId, System_String_o* labelId, bool framed, bool mutedBackground, const MethodInfo* method);
// 0x1823c2c30
// eh: try 0x1823c2f70..0x1823c305a -> pad 0x183317fd0 catch Il2CppExceptionWrapper
// eh: try 0x1823c305a..0x1823c30d4 -> pad 0x18022ee70 cleanup
// eh: try 0x1823c30d4..0x1823c369a -> pad 0x183317fd0 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 28 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823c3097: mov rdx, qword ptr [rip + 0x1cc17a2]  ; TypeInfo_UnityEngine_Transform
// asm:   0x1823c309e: mov r8, qword ptr [rax]
// asm:   0x1823c30a1: movzx eax, byte ptr [rdx + 0x130]
// asm:   0x1823c30a8: cmp byte ptr [r8 + 0x130], al
// asm:   0x1823c30af: jb 0x1823c3687
// asm:   0x1823c3139: lea rcx, [rsp + 0x38]
// asm:   0x1823c313e: call 0x1818789e0  ; il2cpp_runtime_helper_1818789e0()
// asm:   0x1823c3143: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1823c3148: test rcx, rcx
// asm:   0x1823c314b: jne 0x1823c369a
// asm:   0x1823c3151: xor r14d, r14d
// asm:   0x1823c3154: mov rbx, qword ptr [rsp + 0xb0]
// asm:   0x1823c315c: movss xmm8, dword ptr [rip + 0xf95ab3]
// asm:   0x1823c358e: mov edi, r14d
// asm:   0x1823c3591: mov eax, r14d
// asm:   0x1823c35ea: mov rsi, r14
// asm:   0x1823c369a: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183317fd0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317fd5: push rbp
// asm:   0x183317fd6: sub rsp, 0x20
// asm:   0x183317fda: mov rbp, rdx
// asm:   0x183317fdd: mov rax, qword ptr [rbp + 0x28]
// asm:   0x183317fe1: mov rcx, qword ptr [rax]
// asm:   0x183317fe4: mov qword ptr [rbp + 0x30], rcx
// asm:   0x183317fe8: movabs rax, 0
// asm:   0x183317ff2: add rsp, 0x20
// asm:   0x183317ff6: pop rbp
// asm:   0x183317ff7: ret 

void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__Setup
               (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_o *__this,System_String_o *title,
               System_String_o *description,System_String_o *previewId,System_String_o *labelId,bool framed,
               bool mutedBackground,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  ushort uVar4;
  UnityEngine_UI_Shadow_o *pUVar5;
  Il2CppClass *pIVar6;
  Il2CppRuntimeInterfaceOffsetPair *pIVar7;
  bool bVar8;
  uint uVar9;
  UnityEngine_GameObject_o *pUVar10;
  UnityEngine_UI_Outline_o *pUVar11;
  UnityEngine_Transform_o *pUVar12;
  System_String_o *pSVar13;
  VirtualInvokeData *pVVar14;
  UnityEngine_Component_o *__this_00;
  UnityEngine_UI_RectMask2D_o *x;
  UnityEngine_UI_Image_o *fallback;
  UnityEngine_Object_o *pUVar15;
  Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *pGVar16;
  Unity_Hierarchy_ReadOnlyNativeVector_HierarchyFlattenedNode__o *pUVar17;
  Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_o *pGVar18;
  UnityEngine_UI_Button_o *x_00;
  Il2CppObject *pIVar19;
  UnityEngine_UI_Image_o *x_01;
  System_Object_array *pSVar20;
  System_String_o *a;
  ushort uVar21;
  ushort uVar22;
  TMPro_TMP_Text_o *pTVar23;
  TMPro_TMP_Text_o *pTVar24;
  Il2CppObject *local_res10;
  undefined8 local_88 [2];
  undefined1 local_78 [8];
  undefined8 uStack_70;
  undefined8 *local_68;
  
  if (Il2CppMethodInitialized_184347d75 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentInChildren_Button);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_GisketchLogoMotionBlur);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectMask2D);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgGameCreateCardPreview);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_UnityEngine_GameObject_AddComponent_AottgGameCreateChoiceHover_AottgGameCreateChoiceFocus
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchLogoMotionBlur);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_Outline_40b23a8);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_RectMask2D);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Outline);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Transform);
    il2cpp_codegen_initialize_runtime_metadata(&"-title");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-category-");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-root-favorites-tile");
    il2cpp_codegen_initialize_runtime_metadata(&"-grid");
    Il2CppMethodInitialized_184347d75 = '\x01';
  }
  pTVar24 = (TMPro_TMP_Text_o *)0x0;
  local_res10 = (Il2CppObject *)0x0;
  local_88[0] = 0;
  if (title == (System_String_o *)0x0) {
    title = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  if (__this == (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_o *)0x0) goto label_1823c3676;
  (__this->fields)._title = title;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._title,title);
  if (description == (System_String_o *)0x0) {
    description = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  (__this->fields)._description = description;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._description,description);
  (__this->fields)._previewId = previewId;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._previewId,previewId);
  (__this->fields)._labelId = labelId;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._labelId,labelId);
  (__this->fields)._framed = framed;
  (__this->fields)._mutedBackground = mutedBackground;
  if (!framed) {
    return;
  }
  pUVar10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar10 == (UnityEngine_GameObject_o *)0x0) goto label_1823c3676;
  pUVar11 = UnityEngine_GameObject__GetComponent_object_
                      (pUVar10,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Outline);
  if (pUVar11 == (UnityEngine_UI_Outline_o *)0x0) {
    pUVar10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar10 == (UnityEngine_GameObject_o *)0x0) goto label_1823c3676;
    pUVar11 = UnityEngine_GameObject__AddComponent_object_
                        (pUVar10,(MethodInfo_6F4D60 *)
                                 MethodInfo_UnityEngine_GameObject_AddComponent_Outline_40b23a8);
  }
  (__this->fields)._outline = pUVar11;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._outline,pUVar11);
  pUVar5 = (UnityEngine_UI_Shadow_o *)(__this->fields)._outline;
  if (pUVar5 == (UnityEngine_UI_Shadow_o *)0x0) goto label_1823c3676;
  local_78 = (undefined1  [8])0x3f8000003f800000;
  uStack_70 = (Il2CppObject **)0x3f6666663f800000;
  UnityEngine_UI_Shadow__set_effectColor(pUVar5,(UnityEngine_Color_o *)local_78,(MethodInfo *)0x0);
  pUVar5 = (UnityEngine_UI_Shadow_o *)(__this->fields)._outline;
  if (pUVar5 == (UnityEngine_UI_Shadow_o *)0x0) goto label_1823c3676;
  UnityEngine_UI_Shadow__set_effectDistance
            (pUVar5,(UnityEngine_Vector2_o)0xc040000040400000,(MethodInfo *)0x0);
  pUVar5 = (UnityEngine_UI_Shadow_o *)(__this->fields)._outline;
  if (pUVar5 == (UnityEngine_UI_Shadow_o *)0x0) goto label_1823c3676;
  UnityEngine_UI_Shadow__set_useGraphicAlpha(pUVar5,false,(MethodInfo *)0x0);
  pUVar11 = (__this->fields)._outline;
  if (pUVar11 == (UnityEngine_UI_Outline_o *)0x0) goto label_1823c3676;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar11,false,(MethodInfo *)0x0);
  pUVar12 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pSVar13 = System_String__Concat_1969e50((__this->fields)._previewId,"-grid",(MethodInfo *)0x0)
  ;
  if (pUVar12 == (UnityEngine_Transform_o *)0x0) goto label_1823c3676;
  pUVar12 = UnityEngine_Transform__Find(pUVar12,pSVar13,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar8 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar8) {
    if (pUVar12 != (UnityEngine_Transform_o *)0x0) {
      local_res10 = (Il2CppObject *)UnityEngine_Transform__GetEnumerator(pUVar12,(MethodInfo *)0x0);
      local_78 = (undefined1  [8])0x0;
      uStack_70 = &local_res10;
      local_68 = local_88;
      do {
        pIVar19 = local_res10;
        if (local_res10 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar6 = local_res10->klass;
        uVar4 = (pIVar6->_2).interface_offsets_count;
        uVar22 = 0;
        if (uVar4 != 0) {
          pIVar7 = (pIVar6->_1).interfaceOffsets;
          uVar21 = uVar22;
          do {
            if (pIVar7[uVar21].interfaceType == (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
              pVVar14 = (VirtualInvokeData *)&pIVar6->vtable[pIVar7[uVar21].offset].methodPtr;
              goto label_1823c2fd6;
            }
            uVar21 = uVar21 + 1;
          } while (uVar21 < uVar4);
        }
        pVVar14 = GetInterfaceInvokeDataFromVTableSlowPath
                            (local_res10,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_1823c2fd6:
        bVar8 = (*pVVar14->methodPtr)(pIVar19,pVVar14->method);
        pIVar19 = local_res10;
        if (!bVar8) {
          il2cpp_runtime_helper_1818789e0(&uStack_70);
          goto label_1823c3165;
        }
        if (local_res10 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar6 = local_res10->klass;
        uVar4 = (pIVar6->_2).interface_offsets_count;
        if (uVar4 != 0) {
          pIVar7 = (pIVar6->_1).interfaceOffsets;
          do {
            if (pIVar7[uVar22].interfaceType == (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
              pVVar14 = (VirtualInvokeData *)&pIVar6->vtable[pIVar7[uVar22].offset + 1].methodPtr;
              goto label_1823c3045;
            }
            uVar22 = uVar22 + 1;
          } while (uVar22 < uVar4);
        }
        pVVar14 = GetInterfaceInvokeDataFromVTableSlowPath
                            (local_res10,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_1823c3045:
        __this_00 = (UnityEngine_Component_o *)(*pVVar14->methodPtr)(pIVar19,pVVar14->method);
        if (__this_00 == (UnityEngine_Component_o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar3 = (TypeInfo_UnityEngine_Transform->_2).typeHierarchyDepth;
        if (((__this_00->klass->_2).typeHierarchyDepth < bVar3) ||
           ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar3 - 1] !=
            (Il2CppClass *)TypeInfo_UnityEngine_Transform)) {
          il2cpp_codegen_raise_invalid_cast_exception(__this_00);
        }
        x = UnityEngine_Component__GetComponent_object_
                      (__this_00,(MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_RectMask2D
                      );
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar8 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar8) {
          pUVar10 = UnityEngine_Component__get_gameObject(__this_00,(MethodInfo *)0x0);
          if (pUVar10 == (UnityEngine_GameObject_o *)0x0) {
            ThrowNullReferenceException();
          }
          UnityEngine_GameObject__AddComponent_object_
                    (pUVar10,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_RectMask2D);
        }
      } while( true );
    }
    goto label_1823c3676;
  }
label_1823c3165:
  fallback = Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__FindImage
                       (__this,(__this->fields)._previewId,(MethodInfo *)0x0);
  pUVar15 = (UnityEngine_Object_o *)
            UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if ((pUVar15 == (UnityEngine_Object_o *)0x0) ||
     (pSVar13 = UnityEngine_Object__get_name(pUVar15,(MethodInfo *)0x0), pSVar13 == (System_String_o *)0x0))
  goto label_1823c3676;
  bVar8 = System_String__StartsWith(pSVar13,"game-create-category-",(MethodInfo *)0x0);
  if (bVar8) {
label_1823c333c:
    pUVar10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar10 == (UnityEngine_GameObject_o *)0x0) goto label_1823c3676;
    pGVar18 = UnityEngine_GameObject__AddComponent_object_
                        (pUVar10,(MethodInfo_6F4D60 *)
                                 MethodInfo_UnityEngine_GameObject_AddComponent_AottgGameCreateCardPreview);
    (__this->fields)._cardPreview = pGVar18;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._cardPreview,pGVar18);
    pGVar18 = (__this->fields)._cardPreview;
    pUVar15 = (UnityEngine_Object_o *)
              UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar15 == (UnityEngine_Object_o *)0x0) goto label_1823c3676;
    pSVar13 = UnityEngine_Object__get_name(pUVar15,(MethodInfo *)0x0);
    bVar8 = System_String__op_Equality(pSVar13,"game-create-root-favorites-tile",(MethodInfo *)0x0);
    if (pGVar18 == (Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_o *)0x0) goto label_1823c3676;
    Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__Setup(pGVar18,fallback,bVar8,(MethodInfo *)0x0);
    x_00 = UnityEngine_Component__GetComponentInChildren_object_
                     ((UnityEngine_Component_o *)__this,true,
                      (MethodInfo_664AA0 *)MethodInfo_UnityEngine_Component_GetComponentInChildren_Button);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar8 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar8) {
      if (((x_00 == (UnityEngine_UI_Button_o *)0x0) ||
          (pUVar10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x_00,(MethodInfo *)0x0),
          pUVar10 == (UnityEngine_GameObject_o *)0x0)) ||
         (pIVar19 = UnityEngine_GameObject__AddComponent_object_
                              (pUVar10,(MethodInfo_6F4D60 *)
                                       MethodInfo_UnityEngine_GameObject_AddComponent_AottgGameCreateChoiceHover_AottgGameCreateChoiceFocus
                              ), pIVar19 == (Il2CppObject *)0x0)) goto label_1823c3676;
      pIVar19[2].klass = (Il2CppClass *)__this;
      Il2CppCodeGenWriteBarrier(&pIVar19[2].klass,__this);
    }
  }
  else {
    pUVar15 = (UnityEngine_Object_o *)
              UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar15 == (UnityEngine_Object_o *)0x0) goto label_1823c3676;
    pSVar13 = UnityEngine_Object__get_name(pUVar15,(MethodInfo *)0x0);
    bVar8 = System_String__op_Equality(pSVar13,"game-create-root-favorites-tile",(MethodInfo *)0x0);
    if (bVar8) goto label_1823c333c;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar8 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)fallback,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar8) {
      if (fallback == (UnityEngine_UI_Image_o *)0x0) goto label_1823c3676;
      UnityEngine_UI_Image__set_preserveAspect(fallback,true,(MethodInfo *)0x0);
      pGVar16 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)fallback,
                           (MethodInfo_6651A0 *)
                           MethodInfo_UnityEngine_Component_GetComponent_GisketchLogoMotionBlur);
      if (pGVar16 == (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *)0x0) {
        pUVar10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)fallback,(MethodInfo *)0x0)
        ;
        if (pUVar10 == (UnityEngine_GameObject_o *)0x0) goto label_1823c3676;
        pGVar16 = UnityEngine_GameObject__AddComponent_object_
                            (pUVar10,(MethodInfo_6F4D60 *)
                                     MethodInfo_UnityEngine_GameObject_AddComponent_GisketchLogoMotionBlur);
      }
      (__this->fields)._blur = pGVar16;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._blur,pGVar16);
      pGVar16 = (__this->fields)._blur;
      if (pGVar16 == (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *)0x0) goto label_1823c3676;
      Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur__Setup(pGVar16,fallback,(MethodInfo *)0x0);
      if ((__this->fields)._mutedBackground != false) {
        pUVar17 = (*(fallback->klass->vtable)._22_get_color.methodPtr)
                            ((Unity_Hierarchy_ReadOnlyNativeVector_HierarchyFlattenedNode__o *)local_78,
                             fallback,(fallback->klass->vtable)._22_get_color.method);
        fVar1 = *(float *)&(pUVar17->fields).m_Ptr;
        pUVar17 = (*(fallback->klass->vtable)._22_get_color.methodPtr)
                            ((Unity_Hierarchy_ReadOnlyNativeVector_HierarchyFlattenedNode__o *)local_78,
                             fallback,(fallback->klass->vtable)._22_get_color.method);
        fVar2 = *(float *)((longlong)&(pUVar17->fields).m_Ptr + 4);
        pUVar17 = (*(fallback->klass->vtable)._22_get_color.methodPtr)
                            ((Unity_Hierarchy_ReadOnlyNativeVector_HierarchyFlattenedNode__o *)local_78,
                             fallback,(fallback->klass->vtable)._22_get_color.method);
        local_78._4_4_ = fVar2;
        local_78._0_4_ = fVar1;
        uStack_70 = (Il2CppObject **)CONCAT44(0x3e75c28f,(pUVar17->fields).m_Count);
        (*(fallback->klass->vtable)._23_set_color.methodPtr)
                  (fallback,(UnityEngine_Color_o *)local_78,(fallback->klass->vtable)._23_set_color.method);
        pGVar16 = (__this->fields)._blur;
        if (pGVar16 == (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *)0x0) goto label_1823c3676;
        Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur__SetBlur(pGVar16,3.0,(MethodInfo *)0x0);
      }
    }
  }
  x_01 = Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__FindImage
                   (__this,(__this->fields)._labelId,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar8 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar8) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar8 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)fallback,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar8) {
      if (x_01 == (UnityEngine_UI_Image_o *)0x0) goto label_1823c3676;
      pUVar17 = (*(x_01->klass->vtable)._22_get_color.methodPtr)
                          ((Unity_Hierarchy_ReadOnlyNativeVector_HierarchyFlattenedNode__o *)local_78,x_01,
                           (x_01->klass->vtable)._22_get_color.method);
      fVar1 = *(float *)&(pUVar17->fields).m_Ptr;
      pUVar17 = (*(x_01->klass->vtable)._22_get_color.methodPtr)
                          ((Unity_Hierarchy_ReadOnlyNativeVector_HierarchyFlattenedNode__o *)local_78,x_01,
                           (x_01->klass->vtable)._22_get_color.method);
      fVar2 = *(float *)((longlong)&(pUVar17->fields).m_Ptr + 4);
      pUVar17 = (*(x_01->klass->vtable)._22_get_color.methodPtr)
                          ((Unity_Hierarchy_ReadOnlyNativeVector_HierarchyFlattenedNode__o *)local_78,x_01,
                           (x_01->klass->vtable)._22_get_color.method);
      local_78._4_4_ = fVar2;
      local_78._0_4_ = fVar1;
      uStack_70 = (Il2CppObject **)CONCAT44(0x3f3851ec,(pUVar17->fields).m_Count);
      (*(x_01->klass->vtable)._23_set_color.methodPtr)
                (x_01,(UnityEngine_Color_o *)local_78,(x_01->klass->vtable)._23_set_color.method);
    }
  }
  pSVar13 = System_String__Concat_1969e50((__this->fields)._labelId,"-title",(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_184347d7d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_TMP_Text_40ac4d8);
    Il2CppMethodInitialized_184347d7d = '\x01';
  }
  bVar8 = System_String__IsNullOrEmpty(pSVar13,(MethodInfo *)0x0);
  pTVar23 = pTVar24;
  if (!bVar8) {
    pSVar20 = UnityEngine_Component__GetComponentsInChildren_object_
                        ((UnityEngine_Component_o *)__this,true,
                         (MethodInfo_665440 *)
                         MethodInfo_UnityEngine_Component_GetComponentsInChildren_TMP_Text_40ac4d8);
    if (pSVar20 == (System_Object_array *)0x0) goto label_1823c3676;
    while (uVar9 = (uint)pTVar23, pTVar23 = pTVar24, (int)uVar9 < (int)pSVar20->max_length) {
      if ((uint)pSVar20->max_length <= uVar9) {
        ThrowIndexOutOfRangeException();
      }
      pTVar23 = (TMPro_TMP_Text_o *)pSVar20->m_Items[(int)uVar9];
      if ((pTVar23 == (TMPro_TMP_Text_o *)0x0) ||
         (pUVar15 = (UnityEngine_Object_o *)
                    UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pTVar23,(MethodInfo *)0x0),
         pUVar15 == (UnityEngine_Object_o *)0x0)) goto label_1823c3676;
      a = UnityEngine_Object__get_name(pUVar15,(MethodInfo *)0x0);
      bVar8 = System_String__op_Equality(a,pSVar13,(MethodInfo *)0x0);
      if (bVar8) break;
      pTVar23 = (TMPro_TMP_Text_o *)(ulonglong)(uVar9 + 1);
    }
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar8 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar23,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((bVar8) && ((__this->fields)._framed != false)) {
    if (pTVar23 == (TMPro_TMP_Text_o *)0x0) {
label_1823c3676:
      ThrowNullReferenceException();
    }
    TMPro_TMP_Text__set_fontSize(pTVar23,22.0,(MethodInfo *)0x0);
    TMPro_TMP_Text__set_textWrappingMode(pTVar23,1,(MethodInfo *)0x0);
    TMPro_TMP_Text__set_overflowMode(pTVar23,0,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateChoiceHover$$OnPointerEnter
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__OnPointerEnter (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x1823c2790

void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__OnPointerEnter
               (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_o *pGVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184347d76 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347d76 = '\x01';
  }
  bVar2 = Il2CppMethodInitialized_184347d79 == '\0';
  (__this->fields)._hovered = true;
  if (bVar2) {
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-choice-detail-description");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-choice-detail-title");
    Il2CppMethodInitialized_184347d79 = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__SetHovered(__this,true,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__SetText
            (__this,"game-create-choice-detail-title",(__this->fields)._title,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__SetText
            (__this,"game-create-choice-detail-description",(__this->fields)._description,(MethodInfo *)0x0);
  pGVar1 = (__this->fields)._cardPreview;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pGVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pGVar1 = (__this->fields)._cardPreview;
    if (pGVar1 == (Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_o *)0x0) {
      ThrowNullReferenceException();
    }
    Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__SetPointer(pGVar1,true,eventData,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateChoiceHover$$OnPointerMove
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__OnPointerMove (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x1823c2920

void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__OnPointerMove
               (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_o *pGVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184347d77 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347d77 = '\x01';
  }
  pGVar1 = (__this->fields)._cardPreview;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pGVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pGVar1 = (__this->fields)._cardPreview;
    if (pGVar1 == (Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_o *)0x0) {
      ThrowNullReferenceException();
    }
    Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__MovePointer(pGVar1,eventData,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateChoiceHover$$OnPointerExit
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__OnPointerExit (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x1823c2880

void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__OnPointerExit
               (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_o *pGVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184347d78 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347d78 = '\x01';
  }
  (__this->fields)._hovered = false;
  Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__SetHovered
            (__this,(__this->fields)._selected,(MethodInfo *)0x0);
  pGVar1 = (__this->fields)._cardPreview;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pGVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pGVar1 = (__this->fields)._cardPreview;
    if (pGVar1 == (Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_o *)0x0) {
      ThrowNullReferenceException();
    }
    Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__SetPointer(pGVar1,false,eventData,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateChoiceHover$$OnSelect
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__OnSelect (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x1823c29b0

void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__OnSelect
               (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = Il2CppMethodInitialized_184347d79 == '\0';
  (__this->fields)._selected = true;
  if (bVar1) {
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-choice-detail-description");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-choice-detail-title");
    Il2CppMethodInitialized_184347d79 = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__SetHovered(__this,true,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__SetText
            (__this,"game-create-choice-detail-title",(__this->fields)._title,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__SetText
            (__this,"game-create-choice-detail-description",(__this->fields)._description,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateChoiceHover$$OnDeselect
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__OnDeselect (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x1823c2770

void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__OnDeselect
               (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  (__this->fields)._selected = false;
  Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__SetHovered
            (__this,(__this->fields)._hovered,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateChoiceHover$$OnDisable
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__OnDisable (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_o* __this, const MethodInfo* method);
// 0x1823c2780

void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__OnDisable
               (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_o *__this,MethodInfo *method)

{
  (__this->fields)._hovered = false;
  (__this->fields)._selected = false;
  Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__SetHovered(__this,false,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateChoiceHover$$Show
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__Show (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_o* __this, const MethodInfo* method);
// 0x1823c36b0

void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__Show
               (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347d79 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-choice-detail-description");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-choice-detail-title");
    Il2CppMethodInitialized_184347d79 = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__SetHovered(__this,true,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__SetText
            (__this,"game-create-choice-detail-title",(__this->fields)._title,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__SetText
            (__this,"game-create-choice-detail-description",(__this->fields)._description,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateChoiceHover$$SetHovered
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__SetHovered (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_o* __this, bool hovered, const MethodInfo* method);
// 0x1823c2a30

void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__SetHovered
               (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_o *__this,bool hovered,MethodInfo *method)

{
  UnityEngine_UI_Outline_o *pUVar1;
  Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *pGVar2;
  bool bVar3;
  float value;
  
  if (Il2CppMethodInitialized_184347d7a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347d7a = '\x01';
  }
  pUVar1 = (__this->fields)._outline;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pUVar1 = (__this->fields)._outline;
    if (pUVar1 == (UnityEngine_UI_Outline_o *)0x0) goto label_1823c2b21;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar1,hovered,(MethodInfo *)0x0);
  }
  pGVar2 = (__this->fields)._blur;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pGVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pGVar2 = (__this->fields)._blur;
    bVar3 = (__this->fields)._mutedBackground;
    if (hovered) {
      if (bVar3 == false) {
        value = 2.5;
      }
      else {
        value = 4.0;
      }
    }
    else if (bVar3 == false) {
      value = 0.0;
    }
    else {
      value = 3.0;
    }
    if (pGVar2 == (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *)0x0) {
label_1823c2b21:
      ThrowNullReferenceException();
    }
    Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur__SetBlur(pGVar2,value,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateChoiceHover$$SetText
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__SetText (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_o* __this, System_String_o* objectName, System_String_o* value, const MethodInfo* method);
// 0x1823c2b30

void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__SetText
               (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_o *__this,System_String_o *objectName,
               System_String_o *value,MethodInfo *method)

{
  TMPro_TMP_Text_o *__this_00;
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  System_Object_array *pSVar3;
  UnityEngine_Object_o *__this_01;
  System_String_o *a;
  uint uVar4;
  
  if (Il2CppMethodInitialized_184347d7b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_TMP_Text_40ac4d8);
    Il2CppMethodInitialized_184347d7b = '\x01';
  }
  pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (((pUVar2 != (UnityEngine_Transform_o *)0x0) &&
      (pUVar2 = UnityEngine_Transform__GetRoot(pUVar2,(MethodInfo *)0x0),
      pUVar2 != (UnityEngine_Transform_o *)0x0)) &&
     (pSVar3 = UnityEngine_Component__GetComponentsInChildren_object_
                         ((UnityEngine_Component_o *)pUVar2,true,
                          (MethodInfo_665440 *)
                          MethodInfo_UnityEngine_Component_GetComponentsInChildren_TMP_Text_40ac4d8),
     pSVar3 != (System_Object_array *)0x0)) {
    uVar4 = 0;
    while( true ) {
      if ((int)pSVar3->max_length <= (int)uVar4) {
        return;
      }
      if ((uint)pSVar3->max_length <= uVar4) {
        ThrowIndexOutOfRangeException();
      }
      __this_00 = (TMPro_TMP_Text_o *)pSVar3->m_Items[(int)uVar4];
      if ((__this_00 == (TMPro_TMP_Text_o *)0x0) ||
         (__this_01 = (UnityEngine_Object_o *)
                      UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
         __this_01 == (UnityEngine_Object_o *)0x0)) break;
      a = UnityEngine_Object__get_name(__this_01,(MethodInfo *)0x0);
      bVar1 = System_String__op_Equality(a,objectName,(MethodInfo *)0x0);
      if (bVar1) {
        TMPro_TMP_Text__SetText(__this_00,value,false,method);
        return;
      }
      uVar4 = uVar4 + 1;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateChoiceHover$$FindImage
// il2cpp: UnityEngine_UI_Image_o* Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__FindImage (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_o* __this, System_String_o* objectName, const MethodInfo* method);
// 0x1823c25b0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823c2659: mov rax, rsi
// asm:   0x1823c265c: jmp 0x1823c2660

UnityEngine_UI_Image_o *
Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__FindImage
          (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_o *__this,System_String_o *objectName,
          MethodInfo *method)

{
  UnityEngine_UI_Image_o *__this_00;
  bool bVar1;
  System_Object_array *pSVar2;
  UnityEngine_Object_o *__this_01;
  System_String_o *a;
  uint uVar3;
  
  if (Il2CppMethodInitialized_184347d7c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_Image);
    Il2CppMethodInitialized_184347d7c = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(objectName,(MethodInfo *)0x0);
  if (!bVar1) {
    pSVar2 = UnityEngine_Component__GetComponentsInChildren_object_
                       ((UnityEngine_Component_o *)__this,true,
                        (MethodInfo_665440 *)MethodInfo_UnityEngine_Component_GetComponentsInChildren_Image);
    if (pSVar2 == (System_Object_array *)0x0) {
label_1823c267b:
      ThrowNullReferenceException();
    }
    for (uVar3 = 0; (int)uVar3 < (int)pSVar2->max_length; uVar3 = uVar3 + 1) {
      if ((uint)pSVar2->max_length <= uVar3) {
        ThrowIndexOutOfRangeException();
      }
      __this_00 = (UnityEngine_UI_Image_o *)pSVar2->m_Items[(int)uVar3];
      if ((__this_00 == (UnityEngine_UI_Image_o *)0x0) ||
         (__this_01 = (UnityEngine_Object_o *)
                      UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
         __this_01 == (UnityEngine_Object_o *)0x0)) goto label_1823c267b;
      a = UnityEngine_Object__get_name(__this_01,(MethodInfo *)0x0);
      bVar1 = System_String__op_Equality(a,objectName,(MethodInfo *)0x0);
      if (bVar1) {
        return __this_00;
      }
    }
  }
  return (UnityEngine_UI_Image_o *)0x0;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateChoiceHover$$FindText
// il2cpp: TMPro_TMP_Text_o* Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__FindText (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_o* __this, System_String_o* objectName, const MethodInfo* method);
// 0x1823c2690
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823c2739: mov rax, rsi
// asm:   0x1823c273c: jmp 0x1823c2740

TMPro_TMP_Text_o *
Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__FindText
          (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_o *__this,System_String_o *objectName,
          MethodInfo *method)

{
  TMPro_TMP_Text_o *__this_00;
  bool bVar1;
  System_Object_array *pSVar2;
  UnityEngine_Object_o *__this_01;
  System_String_o *a;
  uint uVar3;
  
  if (Il2CppMethodInitialized_184347d7d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_TMP_Text_40ac4d8);
    Il2CppMethodInitialized_184347d7d = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(objectName,(MethodInfo *)0x0);
  if (!bVar1) {
    pSVar2 = UnityEngine_Component__GetComponentsInChildren_object_
                       ((UnityEngine_Component_o *)__this,true,
                        (MethodInfo_665440 *)
                        MethodInfo_UnityEngine_Component_GetComponentsInChildren_TMP_Text_40ac4d8);
    if (pSVar2 == (System_Object_array *)0x0) {
label_1823c275b:
      ThrowNullReferenceException();
    }
    for (uVar3 = 0; (int)uVar3 < (int)pSVar2->max_length; uVar3 = uVar3 + 1) {
      if ((uint)pSVar2->max_length <= uVar3) {
        ThrowIndexOutOfRangeException();
      }
      __this_00 = (TMPro_TMP_Text_o *)pSVar2->m_Items[(int)uVar3];
      if ((__this_00 == (TMPro_TMP_Text_o *)0x0) ||
         (__this_01 = (UnityEngine_Object_o *)
                      UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
         __this_01 == (UnityEngine_Object_o *)0x0)) goto label_1823c275b;
      a = UnityEngine_Object__get_name(__this_01,(MethodInfo *)0x0);
      bVar1 = System_String__op_Equality(a,objectName,(MethodInfo *)0x0);
      if (bVar1) {
        return __this_00;
      }
    }
  }
  return (TMPro_TMP_Text_o *)0x0;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateChoiceHover$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_o* __this, const MethodInfo* method);
// 0x180528540

void
Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover___ctor(Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


