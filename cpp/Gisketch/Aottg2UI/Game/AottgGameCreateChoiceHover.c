// Type: Gisketch.Aottg2UI.Game.AottgGameCreateChoiceHover
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.Game/AottgGameCreateChoiceHover.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgGameCreateChoiceHover.AottgGameCreateChoiceFocus$$Setup
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_AottgGameCreateChoiceFocus__Setup (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_AottgGameCreateChoiceFocus_o* __this, Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_o* hover, const MethodInfo* method);
// 0x5e93140

void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_AottgGameCreateChoiceFocus__Setup
               (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_AottgGameCreateChoiceFocus_o *__this,
               Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_o *hover,MethodInfo *method)

{
  (__this->fields)._hover = hover;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._hover);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateChoiceHover.AottgGameCreateChoiceFocus$$OnSelect
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_AottgGameCreateChoiceFocus__OnSelect (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_AottgGameCreateChoiceFocus_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x5e93150

void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_AottgGameCreateChoiceFocus__OnSelect
               (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_AottgGameCreateChoiceFocus_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_o *__this_00;
  MethodInfo *in_RCX;
  MethodInfo *extraout_RDX;
  
  __this_00 = (__this->fields)._hover;
  if (__this_00 == (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this_00->fields)._selected = true;
  if (Il2CppMethodInitialized_075488af == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-choice-detail-description");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-choice-detail-title");
    Il2CppMethodInitialized_075488af = '\x01';
    method = extraout_RDX;
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__SetHovered(__this_00,true,method);
  Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__SetText
            (__this_00,"game-create-choice-detail-title",(__this_00->fields)._title,in_RCX);
  Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__SetText
            (__this_00,"game-create-choice-detail-description",(__this_00->fields)._description,in_RCX);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateChoiceHover.AottgGameCreateChoiceFocus$$OnDeselect
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_AottgGameCreateChoiceFocus__OnDeselect (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_AottgGameCreateChoiceFocus_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x5e931d0

void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_AottgGameCreateChoiceFocus__OnDeselect
               (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_AottgGameCreateChoiceFocus_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_o *__this_00;
  
  __this_00 = (__this->fields)._hover;
  if (__this_00 == (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this_00->fields)._selected = false;
  Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__SetHovered(__this_00,(__this_00->fields)._hovered,method)
  ;
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateChoiceHover.AottgGameCreateChoiceFocus$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_AottgGameCreateChoiceFocus___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_AottgGameCreateChoiceFocus_o* __this, const MethodInfo* method);
// 0x5e931f0

void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_AottgGameCreateChoiceFocus___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_AottgGameCreateChoiceFocus_o *__this,
               MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateChoiceHover$$Setup
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__Setup (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_o* __this, System_String_o* title, System_String_o* description, System_String_o* previewId, System_String_o* labelId, bool framed, bool mutedBackground, const MethodInfo* method);
// 0x5e8f2f0
// fidelity: the machine code has facts this C leaves out:
//   2 call(s) printed without their arguments
// eh: try 0x5e8f5bf..0x5e8fc5f -> pad 0x5e8fc79 (+10 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5e8fc96..0x5e8fc9b -> pad 0x5e8fca0 cleanup
// eh: try 0x5e8fca3..0x5e8fcad -> pad 0x5e8fcb5 catch (...) [compiler noexcept guard]
// asm: 44 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e8f33c: jmp 0x5e8fc55
// asm:   0x5e8f55e: lea r13, [rip + 0x13e9e93]  ; TypeInfo_System_Collections_IEnumerator
// asm:   0x5e8f565: lea r14, [rip + 0x13ee744]  ; TypeInfo_UnityEngine_Transform
// asm:   0x5e8f56c: lea r12, [rip + 0x1415675]  ; MethodInfo_UnityEngine_Component_GetComponent_RectMask2D
// asm:   0x5e8f573: jmp 0x5e8f58d
// asm:   0x5e8f580: mov rbx, qword ptr [rsp]
// asm:   0x5e8f584: test rbx, rbx
// asm:   0x5e8f587: je 0x5e8fc46
// asm:   0x5e8f5ad: nop dword ptr [rax]
// asm:   0x5e8f7a6: test r12, r12
// asm:   0x5e8f7a9: jne 0x5e8fc5f
// asm:   0x5e8f7af: cmp r14d, 5
// asm:   0x5e8f7b3: je 0x5e8f7be
// asm:   0x5e8f7b5: test r14d, r14d
// asm:   0x5e8f7b8: jne 0x5e8fc2f
// asm:   0x5e8fc5f: mov rdi, r12
// asm:   0x5e8fc62: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5e8fc67: jmp 0x5e8fc7b
// asm:   0x5e8fc69: jmp 0x5e8fc7b
// asm:   0x5e8fc6b: jmp 0x5e8fc7b
// asm:   0x5e8fc6d: jmp 0x5e8fc7b
// asm:   0x5e8fc6f: jmp 0x5e8fc7b
// asm:   0x5e8fc71: jmp 0x5e8fc7b
// asm:   0x5e8fc73: jmp 0x5e8fc7b
// asm:   0x5e8fc75: jmp 0x5e8fc7b
// asm:   0x5e8fc77: jmp 0x5e8fc7b
// asm:   0x5e8fc79: jmp 0x5e8fc7b
// asm:   0x5e8fc7b: mov rbx, rax
// asm:   0x5e8fc7e: cmp edx, 1
// asm:   0x5e8fc81: jne 0x5e8fca3
// asm:   0x5e8fc83: mov rdi, rbx
// asm:   0x5e8fc86: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5e8fc8b: mov r12, qword ptr [rax]
// asm:   0x5e8fc8e: mov qword ptr [rsp + 0x30], r12
// asm:   0x5e8fc93: xor r14d, r14d
// asm:   0x5e8fc96: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e8fc9b: jmp 0x5e8f725
// asm:   0x5e8fca0: mov rbx, rax
// asm:   0x5e8fca3: lea rdi, [rsp + 0x30]
// asm:   0x5e8fca8: call 0x2fe1de0  ; il2cpp_runtime_helper_02fe1de0()
// asm:   0x5e8fcad: mov rdi, rbx
// asm:   0x5e8fcb0: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5e8fcb5: mov rdi, rax
// asm:   0x5e8fcb8: call 0x2ab61e0  ; __clang_call_terminate()
// body from a decompile with inferred signatures (Il2CppDecompileFallback.java): the final configuration did not decompile it


void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__Setup
               (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_o *__this,System_String_o *title,
               System_String_o *description,System_String_o *previewId,System_String_o *labelId,bool framed,
               bool mutedBackground,MethodInfo *method)

{
  Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o **targetAddress;
  byte bVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  UnityEngine_Object_c *pUVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  char cVar8;
  bool bVar9;
  bool bVar10;
  UnityEngine_Transform_o *pUVar11;
  System_String_o *pSVar12;
  Il2CppObject *pIVar13;
  VirtualInvokeData *pVVar14;
  UnityEngine_Component_o *__this_00;
  UnityEngine_Object_o *pUVar15;
  UnityEngine_GameObject_o *pUVar16;
  Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_o *x;
  Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_o *pGVar17;
  Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *pGVar18;
  UnityEngine_UI_Image_o *pUVar19;
  TMPro_TMP_Text_o *__this_01;
  ulong uVar20;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_o *method_01;
  long lVar21;
  undefined8 uVar22;
  undefined4 in_XMM1_Da;
  Il2CppObject *pIStack_78;
  Il2CppObject *pIStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  Il2CppObject **ppIStack_38;
  
  if (Il2CppMethodInitialized_075488ab == '\0') {
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
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_RectMask2D);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Transform);
    il2cpp_codegen_initialize_runtime_metadata(&"-title");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-category-");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-root-favorites-tile");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-root-sandbox-tile");
    il2cpp_codegen_initialize_runtime_metadata(&"-grid");
    Il2CppMethodInitialized_075488ab = '\x01';
    if (title != (System_String_o *)0x0) goto label_05e8f333;
label_05e8f422:
    uVar6 = CONCAT44(uStack_58._4_4_,(undefined4)uStack_58);
    uVar22 = CONCAT44(uStack_68._4_4_,(undefined4)uStack_68);
    title = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  else {
    if (title == (System_String_o *)0x0) goto label_05e8f422;
label_05e8f333:
    uVar6 = CONCAT44(uStack_58._4_4_,(undefined4)uStack_58);
    uVar22 = CONCAT44(uStack_68._4_4_,(undefined4)uStack_68);
  }
  pIStack_70 = (Il2CppObject *)0x0;
  pIStack_78 = (Il2CppObject *)0x0;
  if (__this == (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_o *)0x0) goto label_05e8fc55;
  pIStack_70 = (Il2CppObject *)0x0;
  pIStack_78 = (Il2CppObject *)0x0;
  (__this->fields)._title = title;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._title);
  if (description == (System_String_o *)0x0) {
    description = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  (__this->fields)._description = description;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._description);
  (__this->fields)._previewId = previewId;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._previewId);
  (__this->fields)._labelId = labelId;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._labelId);
  (__this->fields)._framed = framed;
  (__this->fields)._mutedBackground = mutedBackground;
  if (!framed) {
    return;
  }
  pUVar11 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pSVar12 = System_String__Concat_52f0320((__this->fields)._previewId,"-grid",(MethodInfo *)0x0)
  ;
  uVar22 = CONCAT44(uStack_68._4_4_,(undefined4)uStack_68);
  uVar6 = CONCAT44(uStack_58._4_4_,(undefined4)uStack_58);
  if (pUVar11 == (UnityEngine_Transform_o *)0x0) goto label_05e8fc55;
  pUVar11 = UnityEngine_Transform__Find(pUVar11,pSVar12,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar7) {
    uVar22 = CONCAT44(uStack_68._4_4_,(undefined4)uStack_68);
    uVar6 = CONCAT44(uStack_58._4_4_,(undefined4)uStack_58);
    if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
      pIVar13 = (Il2CppObject *)UnityEngine_Transform__GetEnumerator(pUVar11,(MethodInfo *)0x0);
      puStack_40 = (undefined1 *)&pIStack_78;
      uStack_48 = 0;
      ppIStack_38 = &pIStack_70;
      do {
        pIStack_78 = pIVar13;
        if (pIVar13 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar2 = pIVar13->klass;
        uVar20 = (ulong)(pIVar2->_2).interface_offsets_count;
        if (uVar20 != 0) {
          pIVar3 = (pIVar2->_1).interfaceOffsets;
          lVar21 = 0;
          do {
            if (*(Il2CppClass **)((long)&pIVar3->interfaceType + lVar21) ==
                (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
              pVVar14 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar21);
              goto label_05e8f5e3;
            }
            lVar21 = lVar21 + 0x10;
          } while (uVar20 * 0x10 != lVar21);
        }
        pVVar14 = GetInterfaceInvokeDataFromVTableSlowPath
                            (pIVar13,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_05e8f5e3:
        cVar8 = (*pVVar14->methodPtr)(pIVar13,pVVar14->method);
        pIVar13 = pIStack_78;
        if (cVar8 == '\0') {
          pIVar13 = il2cpp_vm_Object_IsInst(pIStack_78,(Il2CppClass *)TypeInfo_System_IDisposable);
          pIStack_70 = pIVar13;
          if (pIVar13 == (Il2CppObject *)0x0) goto label_05e8f7be;
          pIVar2 = pIVar13->klass;
          uVar20 = (ulong)(pIVar2->_2).interface_offsets_count;
          if (uVar20 == 0) goto label_05e8f77f;
          pIVar3 = (pIVar2->_1).interfaceOffsets;
          lVar21 = 0;
          goto label_05e8f770;
        }
        if (pIStack_78 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar2 = pIStack_78->klass;
        uVar20 = (ulong)(pIVar2->_2).interface_offsets_count;
        if (uVar20 != 0) {
          pIVar3 = (pIVar2->_1).interfaceOffsets;
          lVar21 = 0;
          do {
            if (*(System_Collections_IEnumerator_c **)((long)&pIVar3->interfaceType + lVar21) ==
                TypeInfo_System_Collections_IEnumerator) {
              pVVar14 = pIVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar21) + 1);
              goto label_05e8f677;
            }
            lVar21 = lVar21 + 0x10;
          } while (uVar20 * 0x10 != lVar21);
        }
        pVVar14 = GetInterfaceInvokeDataFromVTableSlowPath
                            (pIStack_78,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_05e8f677:
        __this_00 = (UnityEngine_Component_o *)(*pVVar14->methodPtr)(pIVar13,pVVar14->method);
        if (__this_00 == (UnityEngine_Component_o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar1 = (TypeInfo_UnityEngine_Transform->_2).typeHierarchyDepth;
        if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
           ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_UnityEngine_Transform)) {
          il2cpp_codegen_raise_invalid_cast_exception();
        }
        pUVar15 = (UnityEngine_Object_o *)
                  UnityEngine_Component__GetComponent_object_
                            (__this_00,
                             (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_RectMask2D);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar7 = UnityEngine_Object__op_Equality(pUVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        pIVar13 = pIStack_78;
        if (bVar7) {
          pUVar16 = UnityEngine_Component__get_gameObject(__this_00,(MethodInfo *)0x0);
          if (pUVar16 == (UnityEngine_GameObject_o *)0x0) {
            ThrowNullReferenceException();
          }
          UnityEngine_GameObject__AddComponent_object_
                    (pUVar16,(MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_RectMask2D);
          pIVar13 = pIStack_78;
        }
      } while( true );
    }
    goto label_05e8fc55;
  }
  goto label_05e8f7be;
  while (lVar21 = lVar21 + 0x10, uVar20 * 0x10 != lVar21) {
label_05e8f770:
    if (*(System_IDisposable_c **)((long)&pIVar3->interfaceType + lVar21) == TypeInfo_System_IDisposable) {
      pVVar14 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar21);
      goto label_05e8f79d;
    }
  }
label_05e8f77f:
  pVVar14 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar13,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05e8f79d:
  (*pVVar14->methodPtr)(pIVar13,pVVar14->method);
label_05e8f7be:
  x = (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_o *)
      Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__FindImage(__this);
  pUVar15 = (UnityEngine_Object_o *)
            UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  uVar22 = CONCAT44(uStack_68._4_4_,(undefined4)uStack_68);
  uVar6 = CONCAT44(uStack_58._4_4_,(undefined4)uStack_58);
  if (pUVar15 != (UnityEngine_Object_o *)0x0) {
    pSVar12 = UnityEngine_Object__get_name(pUVar15,(MethodInfo *)0x0);
    bVar7 = System_String__op_Equality(pSVar12,"game-create-root-favorites-tile",(MethodInfo *)0x0);
    pUVar15 = (UnityEngine_Object_o *)
              UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    uVar22 = CONCAT44(uStack_68._4_4_,(undefined4)uStack_68);
    uVar6 = CONCAT44(uStack_58._4_4_,(undefined4)uStack_58);
    if (pUVar15 != (UnityEngine_Object_o *)0x0) {
      pSVar12 = UnityEngine_Object__get_name(pUVar15,(MethodInfo *)0x0);
      bVar9 = System_String__op_Equality(pSVar12,"game-create-root-sandbox-tile",(MethodInfo *)0x0);
      pUVar15 = (UnityEngine_Object_o *)
                UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      uVar22 = CONCAT44(uStack_68._4_4_,(undefined4)uStack_68);
      uVar6 = CONCAT44(uStack_58._4_4_,(undefined4)uStack_58);
      if (pUVar15 != (UnityEngine_Object_o *)0x0) {
        pSVar12 = UnityEngine_Object__get_name(pUVar15,(MethodInfo *)0x0);
        uVar22 = CONCAT44(uStack_68._4_4_,(undefined4)uStack_68);
        uVar6 = CONCAT44(uStack_58._4_4_,(undefined4)uStack_58);
        if (pSVar12 != (System_String_o *)0x0) {
          bVar10 = System_String__StartsWith(pSVar12,"game-create-category-",(MethodInfo *)0x0);
          if ((bVar10 || bVar7) || bVar9) {
            pUVar16 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
            uVar22 = CONCAT44(uStack_68._4_4_,(undefined4)uStack_68);
            uVar6 = CONCAT44(uStack_58._4_4_,(undefined4)uStack_58);
            if (pUVar16 == (UnityEngine_GameObject_o *)0x0) goto label_05e8fc55;
            pGVar17 = (Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_o *)
                      UnityEngine_GameObject__AddComponent_object_
                                (pUVar16,(MethodInfo_353B6A0 *)
                                         MethodInfo_UnityEngine_GameObject_AddComponent_AottgGameCreateCardPreview
                                );
            (__this->fields)._cardPreview = pGVar17;
            Il2CppCodeGenWriteBarrier(&(__this->fields)._cardPreview);
            pGVar17 = (__this->fields)._cardPreview;
            uVar22 = CONCAT44(uStack_68._4_4_,(undefined4)uStack_68);
            uVar6 = CONCAT44(uStack_58._4_4_,(undefined4)uStack_58);
            if (pGVar17 == (Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_o *)0x0) goto label_05e8fc55;
            Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview__Setup(pGVar17,x,bVar7,bVar9,0);
            pUVar15 = (UnityEngine_Object_o *)
                      UnityEngine_Component__GetComponentInChildren_object_
                                ((UnityEngine_Component_o *)__this,true,
                                 (MethodInfo_34B0B60 *)
                                 MethodInfo_UnityEngine_Component_GetComponentInChildren_Button);
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            method_01 = (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_o *)0x0;
            bVar7 = UnityEngine_Object__op_Inequality(pUVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if (bVar7) {
              uVar22 = uStack_68;
              uVar6 = uStack_58;
              if (pUVar15 == (UnityEngine_Object_o *)0x0) goto label_05e8fc55;
              pUVar16 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pUVar15,(MethodInfo *)0x0);
              uVar22 = CONCAT44(uStack_68._4_4_,(undefined4)uStack_68);
              uVar6 = CONCAT44(uStack_58._4_4_,(undefined4)uStack_58);
              if (pUVar16 == (UnityEngine_GameObject_o *)0x0) goto label_05e8fc55;
              pIVar13 = UnityEngine_GameObject__AddComponent_object_
                                  (pUVar16,(MethodInfo_353B6A0 *)
                                           MethodInfo_UnityEngine_GameObject_AddComponent_AottgGameCreateChoiceHover_AottgGameCreateChoiceFocus
                                  );
              uVar22 = CONCAT44(uStack_68._4_4_,(undefined4)uStack_68);
              uVar6 = CONCAT44(uStack_58._4_4_,(undefined4)uStack_58);
              if (pIVar13 == (Il2CppObject *)0x0) goto label_05e8fc55;
              pIVar13[2].klass = (Il2CppClass *)__this;
              method_01 = __this;
              Il2CppCodeGenWriteBarrier(&pIVar13[2].klass);
            }
          }
          else {
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            method_01 = (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_o *)0x0;
            bVar7 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if (bVar7) {
              uVar22 = uStack_68;
              uVar6 = uStack_58;
              if (x == (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_o *)0x0) goto label_05e8fc55;
              UnityEngine_UI_Image__set_preserveAspect();
              pGVar18 = (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *)
                        UnityEngine_Component__GetComponent_object_
                                  ((UnityEngine_Component_o *)x,
                                   (MethodInfo_34B0830 *)
                                   MethodInfo_UnityEngine_Component_GetComponent_GisketchLogoMotionBlur);
              if (pGVar18 == (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *)0x0) {
                pUVar16 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
                uVar22 = CONCAT44(uStack_68._4_4_,(undefined4)uStack_68);
                uVar6 = CONCAT44(uStack_58._4_4_,(undefined4)uStack_58);
                if (pUVar16 == (UnityEngine_GameObject_o *)0x0) goto label_05e8fc55;
                pGVar18 = (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *)
                          UnityEngine_GameObject__AddComponent_object_
                                    (pUVar16,(MethodInfo_353B6A0 *)
                                             MethodInfo_UnityEngine_GameObject_AddComponent_GisketchLogoMotionBlur
                                    );
              }
              targetAddress = &(__this->fields)._blur;
              (__this->fields)._blur = pGVar18;
              Il2CppCodeGenWriteBarrier(targetAddress);
              uVar22 = CONCAT44(uStack_68._4_4_,(undefined4)uStack_68);
              uVar6 = CONCAT44(uStack_58._4_4_,(undefined4)uStack_58);
              if ((__this->fields)._blur == (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *)0x0)
              goto label_05e8fc55;
              method_01 = x;
              Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur__Setup();
              if ((__this->fields)._mutedBackground != false) {
                uStack_58 = (*((Il2CppClass *)x->klass)->vtable[22].methodPtr)
                                      (x,((Il2CppClass *)x->klass)->vtable[22].method);
                uStack_68 = (*((Il2CppClass *)x->klass)->vtable[22].methodPtr)
                                      (x,((Il2CppClass *)x->klass)->vtable[22].method);
                (*((Il2CppClass *)x->klass)->vtable[22].methodPtr)(x,((Il2CppClass *)x->klass)->vtable[22].method);
                (**(code **)&((Il2CppClass *)x->klass)->vtable[23].methodPtr)((undefined4)uStack_58,in_XMM1_Da,x);
                pGVar18 = *targetAddress;
                uVar22 = uStack_68;
                uVar6 = uStack_58;
                if (pGVar18 == (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *)0x0) goto label_05e8fc55;
                method_01 = (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_o *)0x0;
                Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur__SetBlur(pGVar18,3.0,(MethodInfo *)0x0);
              }
            }
          }
          pUVar19 = Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__CreateHoverRing
                              (__this,(MethodInfo *)method_01);
          (__this->fields)._hoverRing = pUVar19;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._hoverRing);
          pUVar15 = (UnityEngine_Object_o *)
                    Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__FindImage(__this);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar7 = UnityEngine_Object__op_Inequality(pUVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar7) {
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar7 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if (bVar7) {
              uVar22 = uStack_68;
              uVar6 = uStack_58;
              if (pUVar15 == (UnityEngine_Object_o *)0x0) goto label_05e8fc55;
              pUVar4 = pUVar15->klass;
              uVar22._0_2_ = ((Il2CppClass *)pUVar4)->vtable[22].method;
              uVar22._2_2_ = pUVar4[1]._2.vtable_count;
              uVar22._4_2_ = pUVar4[1]._2.interfaces_count;
              uVar22._6_2_ = pUVar4[1]._2.interface_offsets_count;
              uVar22 = (**(code **)&((Il2CppClass *)pUVar4)->vtable[22].methodPtr)(pUVar15,uVar22);
              pUVar4 = pUVar15->klass;
              uVar6._0_2_ = ((Il2CppClass *)pUVar4)->vtable[22].method;
              uVar6._2_2_ = pUVar4[1]._2.vtable_count;
              uVar6._4_2_ = pUVar4[1]._2.interfaces_count;
              uVar6._6_2_ = pUVar4[1]._2.interface_offsets_count;
              uStack_58 = uVar22;
              uVar22 = (**(code **)&((Il2CppClass *)pUVar4)->vtable[22].methodPtr)(pUVar15,uVar6);
              pUVar4 = pUVar15->klass;
              uVar5._0_2_ = ((Il2CppClass *)pUVar4)->vtable[22].method;
              uVar5._2_2_ = pUVar4[1]._2.vtable_count;
              uVar5._4_2_ = pUVar4[1]._2.interfaces_count;
              uVar5._6_2_ = pUVar4[1]._2.interface_offsets_count;
              uStack_68 = uVar22;
              (**(code **)&((Il2CppClass *)pUVar4)->vtable[22].methodPtr)(pUVar15,uVar5);
              (**(code **)&((Il2CppClass *)pUVar15->klass)->vtable[23].methodPtr)
                        ((undefined4)uStack_58,in_XMM1_Da,pUVar15,((Il2CppClass *)pUVar15->klass)->vtable[23].method
                        );
            }
          }
          pSVar12 = System_String__Concat_52f0320
                              ((__this->fields)._labelId,"-title",(MethodInfo *)0x0);
          __this_01 = Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__FindText(__this,pSVar12,method_00);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar7 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((bVar7) && ((__this->fields)._framed != false)) {
            uVar22 = uStack_68;
            uVar6 = uStack_58;
            if (__this_01 == (TMPro_TMP_Text_o *)0x0) goto label_05e8fc55;
            TMPro_TMP_Text__set_fontSize(__this_01,22.0,(MethodInfo *)0x0);
            TMPro_TMP_Text__set_textWrappingMode(__this_01,1,(MethodInfo *)0x0);
            TMPro_TMP_Text__set_overflowMode(__this_01,0,(MethodInfo *)0x0);
          }
          return;
        }
      }
    }
  }
label_05e8fc55:
  uStack_68 = uVar22;
  uStack_58 = uVar6;
  ThrowNullReferenceException();
}

// Gisketch.Aottg2UI.Game.AottgGameCreateChoiceHover$$OnPointerEnter
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__OnPointerEnter (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5e92af0

void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__OnPointerEnter
               (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_o *pGVar1;
  bool bVar2;
  MethodInfo *in_RCX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  
  if (Il2CppMethodInitialized_075488ac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075488ac = '\x01';
    method = extraout_RDX;
  }
  (__this->fields)._hovered = true;
  if (Il2CppMethodInitialized_075488af == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-choice-detail-description");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-choice-detail-title");
    Il2CppMethodInitialized_075488af = '\x01';
    method = extraout_RDX_00;
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__SetHovered(__this,true,method);
  Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__SetText
            (__this,"game-create-choice-detail-title",(__this->fields)._title,in_RCX);
  Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__SetText
            (__this,"game-create-choice-detail-description",(__this->fields)._description,in_RCX);
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
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateChoiceHover$$OnPointerMove
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__OnPointerMove (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5e92c40

void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__OnPointerMove
               (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_o *pGVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_075488ad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075488ad = '\x01';
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
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateChoiceHover$$OnPointerExit
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__OnPointerExit (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5e92cc0

void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__OnPointerExit
               (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreateCardPreview_o *pGVar1;
  bool bVar2;
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_075488ae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075488ae = '\x01';
    method = extraout_RDX;
  }
  (__this->fields)._hovered = false;
  Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__SetHovered(__this,(__this->fields)._selected,method);
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
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateChoiceHover$$OnSelect
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__OnSelect (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x5e92e60

void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__OnSelect
               (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  MethodInfo *in_RCX;
  MethodInfo *extraout_RDX;
  
  (__this->fields)._selected = true;
  if (Il2CppMethodInitialized_075488af == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-choice-detail-description");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-choice-detail-title");
    Il2CppMethodInitialized_075488af = '\x01';
    method = extraout_RDX;
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__SetHovered(__this,true,method);
  Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__SetText
            (__this,"game-create-choice-detail-title",(__this->fields)._title,in_RCX);
  Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__SetText
            (__this,"game-create-choice-detail-description",(__this->fields)._description,in_RCX);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateChoiceHover$$OnDeselect
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__OnDeselect (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x5e92ed0

void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__OnDeselect
               (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  (__this->fields)._selected = false;
  Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__SetHovered(__this,(__this->fields)._hovered,method);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateChoiceHover$$OnDisable
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__OnDisable (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_o* __this, const MethodInfo* method);
// 0x5e92ee0

void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__OnDisable
               (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  
  (__this->fields)._hovered = false;
  (__this->fields)._selected = false;
  Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__SetHovered(__this,false,in_RDX);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateChoiceHover$$Show
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__Show (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_o* __this, const MethodInfo* method);
// 0x5e92bd0

void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__Show
               (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_o *__this,MethodInfo *method)

{
  MethodInfo *in_RCX;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_075488af == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-choice-detail-description");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-choice-detail-title");
    Il2CppMethodInitialized_075488af = '\x01';
    in_RDX = extraout_RDX;
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__SetHovered(__this,true,in_RDX);
  Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__SetText
            (__this,"game-create-choice-detail-title",(__this->fields)._title,in_RCX);
  Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__SetText
            (__this,"game-create-choice-detail-description",(__this->fields)._description,in_RCX);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateChoiceHover$$SetHovered
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__SetHovered (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_o* __this, bool hovered, const MethodInfo* method);
// 0x5e92d50

void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__SetHovered
               (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_o *__this,bool hovered,MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *pGVar2;
  bool bVar3;
  MethodInfo *method_00;
  float value;
  UnityEngine_Color_o UVar4;
  
  if (Il2CppMethodInitialized_075488b0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075488b0 = '\x01';
  }
  pUVar1 = (__this->fields)._hoverRing;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  method_00 = (MethodInfo *)0x0;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    if (hovered) {
      pUVar1 = (__this->fields)._hoverRing;
      UVar4 = Gisketch_Aottg2UI_Game_AottgGameCreateMapHover__OutlineColor
                        ((UnityEngine_Component_o *)pUVar1,method_00);
      if (pUVar1 == (UnityEngine_UI_Image_o *)0x0) goto label_05e92e5a;
      (*(pUVar1->klass->vtable)._23_set_color.methodPtr)
                (pUVar1,UVar4,(pUVar1->klass->vtable)._23_set_color.method);
    }
    pUVar1 = (__this->fields)._hoverRing;
    if (pUVar1 == (UnityEngine_UI_Image_o *)0x0) goto label_05e92e5a;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar1,hovered,(MethodInfo *)0x0);
  }
  pGVar2 = (__this->fields)._blur;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pGVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar3) {
    return;
  }
  pGVar2 = (__this->fields)._blur;
  if (pGVar2 != (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *)0x0) {
    bVar3 = (__this->fields)._mutedBackground == false;
    value = 0.0;
    if (!bVar3) {
      value = 3.0;
    }
    if (hovered) {
      value = *(float *)(&g_data_0100ad58 + (ulong)bVar3 * 4);
    }
    Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur__SetBlur(pGVar2,value,(MethodInfo *)0x0);
    return;
  }
label_05e92e5a:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateChoiceHover$$SetText
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__SetText (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_o* __this, System_String_o* objectName, System_String_o* value, const MethodInfo* method);
// 0x5e92ef0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e92f6c: nop dword ptr [rax]

void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__SetText
               (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_o *__this,System_String_o *objectName,
               System_String_o *value,MethodInfo *method)

{
  TMPro_TMP_Text_o *__this_00;
  bool bVar1;
  uint uVar2;
  UnityEngine_Transform_o *pUVar3;
  System_Object_array *pSVar4;
  UnityEngine_Object_o *__this_01;
  System_String_o *a;
  uint uVar5;
  
  if (Il2CppMethodInitialized_075488b1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_TMP_Text_71a4ff8);
    Il2CppMethodInitialized_075488b1 = '\x01';
  }
  pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
    pUVar3 = UnityEngine_Transform__get_root(pUVar3,(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
      pSVar4 = UnityEngine_Component__GetComponentsInChildren_object_
                         ((UnityEngine_Component_o *)pUVar3,true,
                          (MethodInfo_34B1260 *)
                          MethodInfo_UnityEngine_Component_GetComponentsInChildren_TMP_Text_71a4ff8);
      if (pSVar4 != (System_Object_array *)0x0) {
        uVar2 = (uint)pSVar4->max_length;
        if (0 < (int)uVar2) {
          uVar5 = 0;
          do {
            if (uVar2 <= uVar5) {
              ThrowIndexOutOfRangeException();
            }
            __this_00 = (TMPro_TMP_Text_o *)pSVar4->m_Items[(int)uVar5];
            if (__this_00 == (TMPro_TMP_Text_o *)0x0) goto label_05e92fd6;
            __this_01 = (UnityEngine_Object_o *)
                        UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
            if (__this_01 == (UnityEngine_Object_o *)0x0) goto label_05e92fd6;
            a = UnityEngine_Object__get_name(__this_01,(MethodInfo *)0x0);
            bVar1 = System_String__op_Equality(a,objectName,(MethodInfo *)0x0);
            if (bVar1) {
              TMPro_TMP_Text__SetText(__this_00,value,(MethodInfo *)0x0);
              return;
            }
            uVar5 = uVar5 + 1;
            uVar2 = (uint)pSVar4->max_length;
          } while ((int)uVar5 < (int)uVar2);
        }
        return;
      }
    }
  }
label_05e92fd6:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateChoiceHover$$CreateHoverRing
// il2cpp: UnityEngine_UI_Image_o* Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__CreateHoverRing (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_o* __this, const MethodInfo* method);
// 0x5e925c0

UnityEngine_UI_Image_o *
Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__CreateHoverRing
          (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreateChoiceFrame_StaticFields *pGVar1;
  Il2CppType *handle;
  UnityEngine_Object_o *__this_00;
  System_String_o *pSVar2;
  System_Type_array *components;
  System_Type_o *pSVar3;
  Il2CppObject *pIVar4;
  Gisketch_Aottg2UI_Game_AottgGameCreateChoiceFrame_c **method_00;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_Transform_o *parent;
  UnityEngine_UI_LayoutElement_o *pUVar5;
  UnityEngine_UI_Image_o *__this_02;
  UnityEngine_Sprite_o *value;
  
  if (Il2CppMethodInitialized_075488b2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"-hover-ring");
    Il2CppMethodInitialized_075488b2 = '\x01';
  }
  __this_00 = (UnityEngine_Object_o *)
              UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_Object_o *)0x0) {
label_05e929e4:
    ThrowNullReferenceException();
  }
  pSVar2 = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0);
  pSVar2 = System_String__Concat_52f0320(pSVar2,"-hover-ring",(MethodInfo *)0x0);
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,3);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  pSVar3 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) goto label_05e929e4;
  if (pSVar3 != (System_Type_o *)0x0) {
    pIVar4 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar3,(((components->obj).klass)->_1).element_class);
    if (pIVar4 == (Il2CppObject *)0x0) goto label_05e929ee;
  }
  if ((int)components->max_length != 0) {
    components->m_Items[0] = pSVar3;
    Il2CppCodeGenWriteBarrier(components->m_Items);
    pSVar3 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_Image,(MethodInfo *)0x0);
    if (pSVar3 != (System_Type_o *)0x0) {
      pIVar4 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar3,(((components->obj).klass)->_1).element_class);
      if (pIVar4 == (Il2CppObject *)0x0) goto label_05e929ee;
    }
    if ((components->max_length & 0xfffffffe) != 0) {
      components->m_Items[1] = pSVar3;
      Il2CppCodeGenWriteBarrier(components->m_Items + 1);
      pSVar3 = System_Type__GetTypeFromHandle
                         ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_LayoutElement,(MethodInfo *)0x0);
      if (pSVar3 != (System_Type_o *)0x0) {
        pIVar4 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar3,(((components->obj).klass)->_1).element_class)
        ;
        if (pIVar4 == (Il2CppObject *)0x0) {
label_05e929ee:
          pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
        }
      }
      if (2 < (uint)components->max_length) {
        components->m_Items[2] = pSVar3;
        Il2CppCodeGenWriteBarrier(components->m_Items + 2);
        method_00 = (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceFrame_c **)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
        UnityEngine_GameObject___ctor_691aa60
                  ((UnityEngine_GameObject_o *)method_00,pSVar2,components,(MethodInfo *)0x0);
        if ((MethodInfo *)method_00 != (MethodInfo *)0x0) {
          __this_01 = (UnityEngine_RectTransform_o *)
                      UnityEngine_GameObject__get_transform
                                ((UnityEngine_GameObject_o *)method_00,(MethodInfo *)0x0);
          if (__this_01 == (UnityEngine_RectTransform_o *)0x0) {
            UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
            ThrowNullReferenceException();
          }
          if (__this_01->klass != TypeInfo_UnityEngine_RectTransform) {
            il2cpp_codegen_raise_invalid_cast_exception(__this_01);
          }
          parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          UnityEngine_Transform__SetParent_692d510
                    ((UnityEngine_Transform_o *)__this_01,parent,false,(MethodInfo *)0x0);
          if (Il2CppMethodInitialized_0753ecc8 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
            Il2CppMethodInitialized_0753ecc8 = '\x01';
          }
          UnityEngine_RectTransform__set_anchorMin
                    (__this_01,
                     (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                     (MethodInfo *)0x0);
          if (Il2CppMethodInitialized_07542885 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
            Il2CppMethodInitialized_07542885 = '\x01';
          }
          UnityEngine_RectTransform__set_anchorMax
                    (__this_01,
                     (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields,
                     (MethodInfo *)0x0);
          if (Il2CppMethodInitialized_0753ecc8 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
            Il2CppMethodInitialized_0753ecc8 = '\x01';
          }
          UnityEngine_RectTransform__set_offsetMin
                    (__this_01,
                     (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                     (MethodInfo *)0x0);
          if (Il2CppMethodInitialized_0753ecc8 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
            Il2CppMethodInitialized_0753ecc8 = '\x01';
          }
          UnityEngine_RectTransform__set_offsetMax
                    (__this_01,
                     (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                     (MethodInfo *)0x0);
          pUVar5 = UnityEngine_GameObject__GetComponent_object_
                             ((UnityEngine_GameObject_o *)method_00,
                              (MethodInfo_353B730 *)
                              MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
          if (pUVar5 != (UnityEngine_UI_LayoutElement_o *)0x0) {
            (*(pUVar5->klass->vtable)._28_set_ignoreLayout.methodPtr)
                      (pUVar5,true,(pUVar5->klass->vtable)._28_set_ignoreLayout.method);
            __this_02 = UnityEngine_GameObject__GetComponent_object_
                                  ((UnityEngine_GameObject_o *)method_00,
                                   (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Image)
            ;
            if (g_data_075488b6 == '\0') {
              method_00 = &TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceFrame;
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceFrame);
              g_data_075488b6 = '\x01';
            }
            value = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceFrame->static_fields->_ringSprite;
            if (value == (UnityEngine_Sprite_o *)0x0) {
              value = Gisketch_Aottg2UI_Game_AottgGameCreateChoiceFrame__CreateSprite
                                (2.0,(MethodInfo *)method_00);
              pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceFrame->static_fields;
              pGVar1->_ringSprite = value;
              Il2CppCodeGenWriteBarrier(&pGVar1->_ringSprite);
            }
            if (__this_02 != (UnityEngine_UI_Image_o *)0x0) {
              UnityEngine_UI_Image__set_sprite(__this_02,value,(MethodInfo *)0x0);
              UnityEngine_UI_Image__set_type(__this_02,1,(MethodInfo *)0x0);
              (*(__this_02->klass->vtable)._25_set_raycastTarget.methodPtr)
                        (__this_02,false,(__this_02->klass->vtable)._25_set_raycastTarget.method);
              UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_02,false,(MethodInfo *)0x0)
              ;
              return __this_02;
            }
          }
        }
        goto label_05e929e4;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateChoiceHover$$FindImage
// il2cpp: UnityEngine_UI_Image_o* Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__FindImage (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_o* __this, System_String_o* objectName, const MethodInfo* method);
// 0x5e924f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e925a5: xor ebx, ebx

UnityEngine_UI_Image_o *
Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__FindImage
          (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_o *__this,System_String_o *objectName,
          MethodInfo *method)

{
  UnityEngine_UI_Image_o *__this_00;
  bool bVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  UnityEngine_Object_o *__this_01;
  System_String_o *a;
  uint uVar4;
  
  if (Il2CppMethodInitialized_075488b3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_Image);
    Il2CppMethodInitialized_075488b3 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(objectName,(MethodInfo *)0x0);
  if (!bVar1) {
    pSVar3 = UnityEngine_Component__GetComponentsInChildren_object_
                       ((UnityEngine_Component_o *)__this,true,
                        (MethodInfo_34B1260 *)MethodInfo_UnityEngine_Component_GetComponentsInChildren_Image);
    if (pSVar3 == (System_Object_array *)0x0) {
label_05e925b5:
      ThrowNullReferenceException();
    }
    uVar2 = (uint)pSVar3->max_length;
    if (0 < (int)uVar2) {
      uVar4 = 0;
      do {
        if (uVar2 <= uVar4) {
          ThrowIndexOutOfRangeException();
        }
        __this_00 = (UnityEngine_UI_Image_o *)pSVar3->m_Items[(int)uVar4];
        if ((__this_00 == (UnityEngine_UI_Image_o *)0x0) ||
           (__this_01 = (UnityEngine_Object_o *)
                        UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
           __this_01 == (UnityEngine_Object_o *)0x0)) goto label_05e925b5;
        a = UnityEngine_Object__get_name(__this_01,(MethodInfo *)0x0);
        bVar1 = System_String__op_Equality(a,objectName,(MethodInfo *)0x0);
        if (bVar1) {
          return __this_00;
        }
        uVar4 = uVar4 + 1;
        uVar2 = (uint)pSVar3->max_length;
      } while ((int)uVar4 < (int)uVar2);
    }
  }
  return (UnityEngine_UI_Image_o *)0x0;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateChoiceHover$$FindText
// il2cpp: TMPro_TMP_Text_o* Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__FindText (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_o* __this, System_String_o* objectName, const MethodInfo* method);
// 0x5e92a20
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e92ad5: xor ebx, ebx

TMPro_TMP_Text_o *
Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__FindText
          (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_o *__this,System_String_o *objectName,
          MethodInfo *method)

{
  TMPro_TMP_Text_o *__this_00;
  bool bVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  UnityEngine_Object_o *__this_01;
  System_String_o *a;
  uint uVar4;
  
  if (Il2CppMethodInitialized_075488b4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_TMP_Text_71a4ff8);
    Il2CppMethodInitialized_075488b4 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(objectName,(MethodInfo *)0x0);
  if (!bVar1) {
    pSVar3 = UnityEngine_Component__GetComponentsInChildren_object_
                       ((UnityEngine_Component_o *)__this,true,
                        (MethodInfo_34B1260 *)
                        MethodInfo_UnityEngine_Component_GetComponentsInChildren_TMP_Text_71a4ff8);
    if (pSVar3 == (System_Object_array *)0x0) {
label_05e92ae5:
      ThrowNullReferenceException();
    }
    uVar2 = (uint)pSVar3->max_length;
    if (0 < (int)uVar2) {
      uVar4 = 0;
      do {
        if (uVar2 <= uVar4) {
          ThrowIndexOutOfRangeException();
        }
        __this_00 = (TMPro_TMP_Text_o *)pSVar3->m_Items[(int)uVar4];
        if ((__this_00 == (TMPro_TMP_Text_o *)0x0) ||
           (__this_01 = (UnityEngine_Object_o *)
                        UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
           __this_01 == (UnityEngine_Object_o *)0x0)) goto label_05e92ae5;
        a = UnityEngine_Object__get_name(__this_01,(MethodInfo *)0x0);
        bVar1 = System_String__op_Equality(a,objectName,(MethodInfo *)0x0);
        if (bVar1) {
          return __this_00;
        }
        uVar4 = uVar4 + 1;
        uVar2 = (uint)pSVar3->max_length;
      } while ((int)uVar4 < (int)uVar2);
    }
  }
  return (TMPro_TMP_Text_o *)0x0;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateChoiceHover$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_o* __this, const MethodInfo* method);
// 0x5e93130

void Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


