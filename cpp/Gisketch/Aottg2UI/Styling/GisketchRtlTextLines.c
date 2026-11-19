// Type: Gisketch.Aottg2UI.Styling.GisketchRtlTextLines
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Styling/GisketchRtlTextLines.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Styling.GisketchRtlTextLines$$ModifyMesh
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchRtlTextLines__ModifyMesh (Gisketch_Aottg2UI_Styling_GisketchRtlTextLines_o* __this, UnityEngine_UI_VertexHelper_o* helper, const MethodInfo* method);
// 0x53318e0
// eh: try 0x5332774..0x533277c -> pad 0x53328af catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x53328ce..0x53328d3 -> pad 0x5332d31 cleanup
// eh: try 0x5332d34..0x5332d41 -> pad 0x5332d49 catch (...) [compiler noexcept guard]
// asm: 34 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5331ba2: jmp 0x5332d15
// asm:   0x5331e59: mov ebp, r12d
// asm:   0x5331e5c: nop dword ptr [rax]
// asm:   0x5331e89: nop dword ptr [rax]
// asm:   0x5331fd4: test ebx, ebx
// asm:   0x5331fd6: jg 0x5331fed
// asm:   0x5331fd8: jmp 0x5331e60
// asm:   0x533203e: nop 
// asm:   0x53320e0: mov r14, qword ptr [rsp + 0x98]
// asm:   0x53320e8: jmp 0x5332384
// asm:   0x533213e: nop 
// asm:   0x53321d5: mov qword ptr [rsp + 0xa0], rax
// asm:   0x53321dd: jmp 0x5332384
// asm:   0x53321ee: nop 
// asm:   0x53326b0: jmp 0x5332d27
// asm:   0x53326d0: jmp 0x53326ef
// asm:   0x5332793: movss dword ptr [rsp + 0x7c], xmm0
// asm:   0x5332799: jmp 0x5332770
// asm:   0x53328af: mov rbx, rax
// asm:   0x53328b2: cmp edx, 1
// asm:   0x53328b5: jne 0x5332d34
// asm:   0x53328bb: mov rdi, rbx
// asm:   0x53328be: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x53328c3: mov rax, qword ptr [rax]
// asm:   0x53328c6: mov qword ptr [rsp + 0x148], rax
// asm:   0x53328ce: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x53328d3: mov r12, qword ptr [rsp + 0xb0]
// asm:   0x5332d31: mov rbx, rax
// asm:   0x5332d34: lea rdi, [rsp + 0x148]
// asm:   0x5332d3c: call 0x2d4a2a0  ; il2cpp_runtime_helper_02d4a2a0()
// asm:   0x5332d41: mov rdi, rbx
// asm:   0x5332d44: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5332d49: mov rdi, rax
// asm:   0x5332d4c: call 0x2ab61e0  ; __clang_call_terminate()

void Gisketch_Aottg2UI_Styling_GisketchRtlTextLines__ModifyMesh
               (Gisketch_Aottg2UI_Styling_GisketchRtlTextLines_o *__this,UnityEngine_UI_VertexHelper_o *helper
               ,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint32_t uVar3;
  Il2CppClass *pIVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  System_Collections_Generic_List_float__o *pSVar6;
  System_Collections_Generic_List_bool__o *pSVar7;
  System_Single_array *pSVar8;
  System_Boolean_array *pSVar9;
  UnityEngine_UIVertex_o vertex;
  UnityEngine_UIVertex_o vertex_00;
  UnityEngine_UIVertex_o vertex_01;
  UnityEngine_UIVertex_o vertex_02;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  bool bVar14;
  bool bVar15;
  uint16_t uVar16;
  int32_t iVar17;
  UnityEngine_UI_Text_o *pUVar18;
  UnityEngine_TextGenerator_o *__this_00;
  Il2CppObject *obj;
  System_String_o *text;
  VirtualInvokeData *pVVar19;
  Gisketch_Aottg2UI_Styling_GisketchRtlTextLines_StaticFields *pGVar20;
  MethodInfo *pMVar21;
  Il2CppObject *pIVar22;
  int iVar23;
  uint uVar24;
  int end;
  UnityEngine_UI_Text_o *pUVar25;
  uint uVar26;
  uint32_t length;
  long lVar27;
  ulong uVar28;
  uint uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fStack_15c;
  undefined1 auStack_118 [8];
  Il2CppMethodPointer pIStack_110;
  InvokerMethod pIStack_108;
  char *pcStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  Il2CppType **ppIStack_e8;
  _union_13 _Stack_e0;
  _union_14 _Stack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  undefined8 uStack_b4;
  ulong uStack_a0;
  float fStack_94;
  undefined1 auStack_90 [16];
  Il2CppObject *pIStack_80;
  float fStack_78;
  undefined1 auStack_68 [8];
  System_Collections_Generic_List_Enumerator_T__o *pSStack_60;
  Il2CppObject *pIStack_58;
  ulong uStack_48;
  UnityEngine_UI_Text_o *pUStack_40;
  ulong uStack_38;
  
  if (Il2CppMethodInitialized_07542872 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_float_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_float_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_float_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchRtlTextLines);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_ICollection_UILineInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IList_UILineInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_float_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_bool_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_float_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_bool_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_float_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_bool_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_float_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_float_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_bool_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UI_Text);
    Il2CppMethodInitialized_07542872 = '\x01';
  }
  fStack_b8 = 0.0;
  uStack_b4._0_4_ = 0.0;
  uStack_b4._4_4_ = 0.0;
  uStack_c8._0_4_ = 0.0;
  uStack_c8._4_4_ = 0.0;
  fStack_c0 = 0.0;
  fStack_bc = 0.0;
  _Stack_d8.genericMethod = (void *)0x0;
  uStack_d0._0_4_ = 0.0;
  uStack_d0._4_4_ = 0.0;
  ppIStack_e8 = (Il2CppType **)0x0;
  _Stack_e0.rgctx_data = (Il2CppRGCTXData *)0x0;
  uStack_f8 = (Il2CppClass *)0x0;
  uStack_f0 = (Il2CppType *)0x0;
  pIStack_108 = (InvokerMethod)0x0;
  pcStack_100 = (char *)0x0;
  auStack_118 = (undefined1  [8])0x0;
  pIStack_110 = (Il2CppMethodPointer)0x0;
  auStack_68 = (undefined1  [8])0x0;
  pSStack_60 = (System_Collections_Generic_List_Enumerator_T__o *)0x0;
  pIStack_58 = (Il2CppObject *)0x0;
  pUVar18 = (UnityEngine_UI_Text_o *)
            UnityEngine_UI_BaseMeshEffect__get_graphic
                      ((UnityEngine_UI_BaseMeshEffect_o *)__this,(MethodInfo *)0x0);
  pUVar25 = (UnityEngine_UI_Text_o *)0x0;
  if (pUVar18 != (UnityEngine_UI_Text_o *)0x0) {
    bVar2 = (TypeInfo_UnityEngine_UI_Text->_2).typeHierarchyDepth;
    if ((pUVar18->klass->_2).typeHierarchyDepth < bVar2) {
      pUVar25 = (UnityEngine_UI_Text_o *)0x0;
    }
    else {
      pUVar25 = (UnityEngine_UI_Text_o *)0x0;
      if ((pUVar18->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == (Il2CppClass *)TypeInfo_UnityEngine_UI_Text)
      {
        pUVar25 = pUVar18;
      }
    }
  }
  bVar14 = (*(__this->klass->vtable)._9_IsActive.methodPtr)(__this,(__this->klass->vtable)._9_IsActive.method)
  ;
  if (!bVar14) {
    return;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar14 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pUVar25,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar14) {
    return;
  }
  if (pUVar25 != (UnityEngine_UI_Text_o *)0x0) {
    __this_00 = UnityEngine_UI_Text__get_cachedTextGenerator(pUVar25,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_TextGenerator_o *)0x0) {
      obj = (Il2CppObject *)UnityEngine_TextGenerator__get_lines(__this_00,(MethodInfo *)0x0);
      text = (*(pUVar25->klass->vtable)._74_get_text.methodPtr)
                       (pUVar25,(pUVar25->klass->vtable)._74_get_text.method);
      if (obj != (Il2CppObject *)0x0) {
        pIVar4 = obj->klass;
        uVar28 = (ulong)(pIVar4->_2).interface_offsets_count;
        if (uVar28 != 0) {
          pIVar5 = (pIVar4->_1).interfaceOffsets;
          lVar27 = 0;
          do {
            if (*(System_Collections_Generic_ICollection_UILineInfo__c **)
                 ((long)&pIVar5->interfaceType + lVar27) ==
                TypeInfo_System_Collections_Generic_ICollection_UILineInfo) {
              pVVar19 = (VirtualInvokeData *)
                        &pIVar4->vtable[*(int *)((long)&pIVar5->offset + lVar27)].methodPtr;
              goto label_05331b71;
            }
            lVar27 = lVar27 + 0x10;
          } while (uVar28 * 0x10 != lVar27);
        }
        pVVar19 = GetInterfaceInvokeDataFromVTableSlowPath
                            (obj,(Il2CppClass *)TypeInfo_System_Collections_Generic_ICollection_UILineInfo,0);
label_05331b71:
        pMVar21 = pVVar19->method;
        iVar17 = (*pVVar19->methodPtr)(obj,pMVar21);
        if (iVar17 < 2) {
          return;
        }
        if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
          bVar14 = Gisketch_Aottg2UI_Styling_GisketchArabicText__HasPresentationForms(text,pMVar21);
        }
        else {
          bVar14 = Gisketch_Aottg2UI_Styling_GisketchArabicText__HasPresentationForms(text,pMVar21);
        }
        if (!bVar14) {
          return;
        }
        fVar30 = UnityEngine_UI_Text__get_pixelsPerUnit(pUVar25,(MethodInfo *)0x0);
        if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchRtlTextLines->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchRtlTextLines);
        }
        pGVar20 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchRtlTextLines->static_fields;
        pSVar6 = pGVar20->LineShift;
        if (pSVar6 != (System_Collections_Generic_List_float__o *)0x0) {
          piVar1 = &(pSVar6->fields)._version;
          *piVar1 = *piVar1 + 1;
          (pSVar6->fields)._size = 0;
          pSVar6 = pGVar20->LineRight;
          if (pSVar6 != (System_Collections_Generic_List_float__o *)0x0) {
            piVar1 = &(pSVar6->fields)._version;
            *piVar1 = *piVar1 + 1;
            (pSVar6->fields)._size = 0;
            pSVar7 = pGVar20->LineReversed;
            pUStack_40 = pUVar25;
            if (pSVar7 != (System_Collections_Generic_List_bool__o *)0x0) {
              fVar30 = 1.0 / fVar30;
              piVar1 = &(pSVar7->fields)._version;
              *piVar1 = *piVar1 + 1;
              (pSVar7->fields)._size = 0;
              iVar23 = 0;
              fStack_15c = -3.4028235e+38;
              do {
                pIVar4 = obj->klass;
                uVar28 = (ulong)(pIVar4->_2).interface_offsets_count;
                if (uVar28 != 0) {
                  pIVar5 = (pIVar4->_1).interfaceOffsets;
                  lVar27 = 0;
                  do {
                    if (*(System_Collections_Generic_ICollection_UILineInfo__c **)
                         ((long)&pIVar5->interfaceType + lVar27) ==
                        TypeInfo_System_Collections_Generic_ICollection_UILineInfo) {
                      pVVar19 = (VirtualInvokeData *)
                                &pIVar4->vtable[*(int *)((long)&pIVar5->offset + lVar27)].methodPtr;
                      goto label_05331d13;
                    }
                    lVar27 = lVar27 + 0x10;
                  } while (uVar28 * 0x10 != lVar27);
                }
                pVVar19 = GetInterfaceInvokeDataFromVTableSlowPath
                                    (obj,(Il2CppClass *)
                                         TypeInfo_System_Collections_Generic_ICollection_UILineInfo,0);
label_05331d13:
                iVar17 = (*pVVar19->methodPtr)(obj,pVVar19->method);
                if (iVar17 <= iVar23) {
                  uVar29 = 0;
                  bVar14 = false;
                  uVar26 = uVar29;
                  goto label_05331e60;
                }
                if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchRtlTextLines->_2).cctor_finished_or_no_cctor
                    == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchRtlTextLines);
                }
                pMVar21 = MethodInfo_System_Collections_Generic_List_float_Add;
                pGVar20 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchRtlTextLines->static_fields;
                pSVar6 = pGVar20->LineShift;
                if (pSVar6 == (System_Collections_Generic_List_float__o *)0x0) break;
                piVar1 = &(pSVar6->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar8 = (pSVar6->fields)._items;
                if (pSVar8 == (System_Single_array *)0x0) break;
                uVar26 = (pSVar6->fields)._size;
                if (uVar26 < (uint)pSVar8->max_length) {
                  (pSVar6->fields)._size = uVar26 + 1;
                  pSVar8->m_Items[(int)uVar26] = 0.0;
                }
                else {
                  System_Collections_Generic_List_float___AddWithResize
                            (pSVar6,0.0,(MethodInfo_39AC7A0 *)pMVar21->klass->rgctx_data[0xe].method);
                  pGVar20 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchRtlTextLines->static_fields;
                }
                pMVar21 = MethodInfo_System_Collections_Generic_List_float_Add;
                pSVar6 = pGVar20->LineRight;
                if (pSVar6 == (System_Collections_Generic_List_float__o *)0x0) break;
                piVar1 = &(pSVar6->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar8 = (pSVar6->fields)._items;
                if (pSVar8 == (System_Single_array *)0x0) break;
                uVar26 = (pSVar6->fields)._size;
                if (uVar26 < (uint)pSVar8->max_length) {
                  (pSVar6->fields)._size = uVar26 + 1;
                  pSVar8->m_Items[(int)uVar26] = -3.4028235e+38;
                }
                else {
                  System_Collections_Generic_List_float___AddWithResize
                            (pSVar6,-3.4028235e+38,
                             (MethodInfo_39AC7A0 *)pMVar21->klass->rgctx_data[0xe].method);
                  pGVar20 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchRtlTextLines->static_fields;
                }
                pMVar21 = MethodInfo_System_Collections_Generic_List_bool_Add;
                pSVar7 = pGVar20->LineReversed;
                if (pSVar7 == (System_Collections_Generic_List_bool__o *)0x0) break;
                piVar1 = &(pSVar7->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar9 = (pSVar7->fields)._items;
                if (pSVar9 == (System_Boolean_array *)0x0) break;
                uVar26 = (pSVar7->fields)._size;
                if (uVar26 < (uint)pSVar9->max_length) {
                  (pSVar7->fields)._size = uVar26 + 1;
                  pSVar9->m_Items[(int)uVar26] = false;
                }
                else {
                  System_Collections_Generic_List_bool___AddWithResize
                            (pSVar7,false,(MethodInfo_51DC120 *)pMVar21->klass->rgctx_data[0xe].method);
                }
                iVar23 = iVar23 + 1;
              } while( true );
            }
          }
        }
      }
    }
  }
  goto label_05332d27;
label_05331e60:
  uVar24 = uVar26;
  pIVar4 = obj->klass;
  uVar28 = (ulong)(pIVar4->_2).interface_offsets_count;
  if (uVar28 != 0) {
    pIVar5 = (pIVar4->_1).interfaceOffsets;
    lVar27 = 0;
    do {
      if (*(System_Collections_Generic_ICollection_UILineInfo__c **)((long)&pIVar5->interfaceType + lVar27) ==
          TypeInfo_System_Collections_Generic_ICollection_UILineInfo) {
        pVVar19 = (VirtualInvokeData *)&pIVar4->vtable[*(int *)((long)&pIVar5->offset + lVar27)].methodPtr;
        goto label_05331ec3;
      }
      lVar27 = lVar27 + 0x10;
    } while (uVar28 * 0x10 != lVar27);
  }
  pVVar19 = GetInterfaceInvokeDataFromVTableSlowPath
                      (obj,(Il2CppClass *)TypeInfo_System_Collections_Generic_ICollection_UILineInfo,0);
label_05331ec3:
  iVar17 = (*pVVar19->methodPtr)(obj,pVVar19->method);
  if ((int)uVar24 < iVar17) {
    pIVar4 = obj->klass;
    uVar28 = (ulong)(pIVar4->_2).interface_offsets_count;
    if (uVar28 != 0) {
      pIVar5 = (pIVar4->_1).interfaceOffsets;
      lVar27 = 0;
      do {
        if (*(System_Collections_Generic_ICollection_UILineInfo__c **)((long)&pIVar5->interfaceType + lVar27)
            == TypeInfo_System_Collections_Generic_ICollection_UILineInfo) {
          pVVar19 = (VirtualInvokeData *)&pIVar4->vtable[*(int *)((long)&pIVar5->offset + lVar27)].methodPtr;
          goto label_05331f33;
        }
        lVar27 = lVar27 + 0x10;
      } while (uVar28 * 0x10 != lVar27);
    }
    pVVar19 = GetInterfaceInvokeDataFromVTableSlowPath
                        (obj,(Il2CppClass *)TypeInfo_System_Collections_Generic_ICollection_UILineInfo,0);
label_05331f33:
    iVar17 = (*pVVar19->methodPtr)(obj,pVVar19->method);
    if ((int)uVar24 < iVar17 + -1) goto code_r0x05331f47;
    goto label_05332018;
  }
  if (!bVar14) {
    return;
  }
  fStack_b8 = 0.0;
  uStack_b4._0_4_ = 0.0;
  uStack_b4._4_4_ = 0.0;
  uStack_c8._0_4_ = 0.0;
  uStack_c8._4_4_ = 0.0;
  fStack_c0 = 0.0;
  fStack_bc = 0.0;
  _Stack_d8.genericMethod = (void *)0x0;
  uStack_d0._0_4_ = 0.0;
  uStack_d0._4_4_ = 0.0;
  ppIStack_e8 = (Il2CppType **)0x0;
  _Stack_e0.rgctx_data = (Il2CppRGCTXData *)0x0;
  uStack_f8 = (Il2CppClass *)0x0;
  uStack_f0 = (Il2CppType *)0x0;
  pIStack_108 = (InvokerMethod)0x0;
  pcStack_100 = (char *)0x0;
  auStack_118 = (undefined1  [8])0x0;
  pIStack_110 = (Il2CppMethodPointer)0x0;
  if (helper != (UnityEngine_UI_VertexHelper_o *)0x0) {
    uVar29 = UnityEngine_UI_VertexHelper__get_currentVertCount(helper,(MethodInfo *)0x0);
    uStack_48 = (ulong)uVar29;
    uVar26 = uVar29 + 3;
    if (-1 < (int)uVar29) {
      uVar26 = uVar29;
    }
    length = (int)uVar26 >> 2;
    pIVar22 = SZArrayNew(TypeInfo_int_array,length);
    if ((int)uVar29 < 4) goto label_0533265a;
    if (pIVar22 == (Il2CppObject *)0x0) {
      pMVar21 = (MethodInfo *)auStack_118;
      UnityEngine_UI_VertexHelper__PopulateUIVertex
                (helper,(UnityEngine_UIVertex_o *)pMVar21,0,(MethodInfo *)0x0);
      uVar10 = auStack_118._4_4_;
      UnityEngine_UI_VertexHelper__PopulateUIVertex
                (helper,(UnityEngine_UIVertex_o *)pMVar21,1,(MethodInfo *)0x0);
      uVar11 = auStack_118._4_4_;
      UnityEngine_UI_VertexHelper__PopulateUIVertex
                (helper,(UnityEngine_UIVertex_o *)pMVar21,2,(MethodInfo *)0x0);
      uVar12 = auStack_118._4_4_;
      UnityEngine_UI_VertexHelper__PopulateUIVertex
                (helper,(UnityEngine_UIVertex_o *)pMVar21,3,(MethodInfo *)0x0);
      uVar13 = auStack_118._4_4_;
      if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchRtlTextLines->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchRtlTextLines);
      }
      Gisketch_Aottg2UI_Styling_GisketchRtlTextLines__LineAt
                ((System_Collections_Generic_IList_UILineInfo__o *)obj,
                 ((float)uVar13 * 0.25 +
                 (float)uVar12 * 0.25 + (float)uVar11 * 0.25 + (float)uVar10 * 0.25 + 0.0) / fVar30,pMVar21);
      ThrowNullReferenceException();
    }
    uStack_38 = (ulong)length;
    iVar23 = 3;
    uVar28 = 0;
    goto label_05332460;
  }
  goto label_05332d27;
code_r0x05331f47:
  uVar26 = uVar24 + 1;
  pIVar4 = obj->klass;
  uVar28 = (ulong)(pIVar4->_2).interface_offsets_count;
  if (uVar28 != 0) {
    pIVar5 = (pIVar4->_1).interfaceOffsets;
    lVar27 = 0;
    do {
      if (*(System_Collections_Generic_IList_UILineInfo__c **)((long)&pIVar5->interfaceType + lVar27) ==
          TypeInfo_System_Collections_Generic_IList_UILineInfo) {
        pVVar19 = (VirtualInvokeData *)&pIVar4->vtable[*(int *)((long)&pIVar5->offset + lVar27)].methodPtr;
        goto label_05331fb3;
      }
      lVar27 = lVar27 + 0x10;
    } while (uVar28 * 0x10 != lVar27);
  }
  pVVar19 = GetInterfaceInvokeDataFromVTableSlowPath
                      (obj,(Il2CppClass *)TypeInfo_System_Collections_Generic_IList_UILineInfo,0);
label_05331fb3:
  iVar23 = (*pVVar19->methodPtr)(obj,(ulong)uVar26,pVVar19->method);
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchRtlTextLines->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchRtlTextLines);
  }
  if (0 < iVar23) {
    if (text == (System_String_o *)0x0) goto label_05332d27;
    if (iVar23 <= (text->fields)._stringLength) {
      uVar16 = System_String__get_Chars(text,iVar23 + -1,(MethodInfo *)0x0);
      if (uVar16 == 10) {
label_05332018:
        pIVar4 = obj->klass;
        uVar28 = (ulong)(pIVar4->_2).interface_offsets_count;
        if (uVar28 != 0) {
          pIVar5 = (pIVar4->_1).interfaceOffsets;
          lVar27 = 0;
          do {
            if (*(System_Collections_Generic_ICollection_UILineInfo__c **)
                 ((long)&pIVar5->interfaceType + lVar27) ==
                TypeInfo_System_Collections_Generic_ICollection_UILineInfo) {
              pVVar19 = (VirtualInvokeData *)
                        &pIVar4->vtable[*(int *)((long)&pIVar5->offset + lVar27)].methodPtr;
              goto label_05332071;
            }
            lVar27 = lVar27 + 0x10;
          } while (uVar28 * 0x10 != lVar27);
        }
        pVVar19 = GetInterfaceInvokeDataFromVTableSlowPath
                            (obj,(Il2CppClass *)TypeInfo_System_Collections_Generic_ICollection_UILineInfo,0);
label_05332071:
        iVar17 = (*pVVar19->methodPtr)(obj,pVVar19->method);
        if ((int)uVar24 < iVar17 + -1) {
          pIVar4 = obj->klass;
          uVar28 = (ulong)(pIVar4->_2).interface_offsets_count;
          if (uVar28 != 0) {
            pIVar5 = (pIVar4->_1).interfaceOffsets;
            lVar27 = 0;
            do {
              if (*(System_Collections_Generic_IList_UILineInfo__c **)((long)&pIVar5->interfaceType + lVar27)
                  == TypeInfo_System_Collections_Generic_IList_UILineInfo) {
                pVVar19 = (VirtualInvokeData *)
                          &pIVar4->vtable[*(int *)((long)&pIVar5->offset + lVar27)].methodPtr;
                goto label_05332100;
              }
              lVar27 = lVar27 + 0x10;
            } while (uVar28 * 0x10 != lVar27);
          }
          pVVar19 = GetInterfaceInvokeDataFromVTableSlowPath
                              (obj,(Il2CppClass *)TypeInfo_System_Collections_Generic_IList_UILineInfo,0);
label_05332100:
          iVar23 = (*pVVar19->methodPtr)(obj,(ulong)(uVar24 + 1),pVVar19->method);
        }
        else {
          if (text == (System_String_o *)0x0) goto label_05332d27;
          iVar23 = (text->fields)._stringLength;
        }
        if ((int)uVar29 < (int)uVar24) {
          pIVar4 = obj->klass;
          uVar28 = (ulong)(pIVar4->_2).interface_offsets_count;
          if (uVar28 != 0) {
            pIVar5 = (pIVar4->_1).interfaceOffsets;
            lVar27 = 0;
            do {
              if (*(Il2CppClass **)((long)&pIVar5->interfaceType + lVar27) ==
                  (Il2CppClass *)TypeInfo_System_Collections_Generic_IList_UILineInfo) {
                pMVar21 = (MethodInfo *)&pIVar4->vtable[*(int *)((long)&pIVar5->offset + lVar27)].methodPtr;
                goto label_05332171;
              }
              lVar27 = lVar27 + 0x10;
            } while (uVar28 * 0x10 != lVar27);
          }
          pMVar21 = (MethodInfo *)
                    GetInterfaceInvokeDataFromVTableSlowPath
                              (obj,(Il2CppClass *)TypeInfo_System_Collections_Generic_IList_UILineInfo,0);
label_05332171:
          iVar17 = (*pMVar21->methodPointer)(obj,(ulong)uVar29,(MethodInfo *)pMVar21->virtualMethodPointer);
          if (text == (System_String_o *)0x0) goto label_05332d27;
          end = (text->fields)._stringLength;
          if (iVar23 < end) {
            end = iVar23;
          }
          if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
          }
          bVar15 = Gisketch_Aottg2UI_Styling_GisketchArabicText__EndsRightToLeft(text,iVar17,end,pMVar21);
          if ((bVar15) && (bVar14 = true, (int)uVar29 <= (int)uVar24)) {
            iVar23 = uVar29 + uVar24;
            do {
              if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchRtlTextLines->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchRtlTextLines);
              }
              pSVar6 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchRtlTextLines->static_fields->LineShift;
              pIVar4 = obj->klass;
              uVar28 = (ulong)(pIVar4->_2).interface_offsets_count;
              if (uVar28 != 0) {
                pIVar5 = (pIVar4->_1).interfaceOffsets;
                lVar27 = 0;
                do {
                  if (*(System_Collections_Generic_IList_UILineInfo__c **)
                       ((long)&pIVar5->interfaceType + lVar27) ==
                      TypeInfo_System_Collections_Generic_IList_UILineInfo) {
                    pVVar19 = (VirtualInvokeData *)
                              &pIVar4->vtable[*(int *)((long)&pIVar5->offset + lVar27)].methodPtr;
                    goto label_05332281;
                  }
                  lVar27 = lVar27 + 0x10;
                } while (uVar28 * 0x10 != lVar27);
              }
              pVVar19 = GetInterfaceInvokeDataFromVTableSlowPath
                                  (obj,(Il2CppClass *)TypeInfo_System_Collections_Generic_IList_UILineInfo,0);
label_05332281:
              fVar31 = (float)(*pVVar19->methodPtr)(obj,(ulong)(iVar23 - uVar29),pVVar19->method);
              pIVar4 = obj->klass;
              uVar28 = (ulong)(pIVar4->_2).interface_offsets_count;
              if (uVar28 != 0) {
                pIVar5 = (pIVar4->_1).interfaceOffsets;
                lVar27 = 0;
                do {
                  if (*(System_Collections_Generic_IList_UILineInfo__c **)
                       ((long)&pIVar5->interfaceType + lVar27) ==
                      TypeInfo_System_Collections_Generic_IList_UILineInfo) {
                    pVVar19 = (VirtualInvokeData *)
                              &pIVar4->vtable[*(int *)((long)&pIVar5->offset + lVar27)].methodPtr;
                    goto label_05332301;
                  }
                  lVar27 = lVar27 + 0x10;
                } while (uVar28 * 0x10 != lVar27);
              }
              pVVar19 = GetInterfaceInvokeDataFromVTableSlowPath
                                  (obj,(Il2CppClass *)TypeInfo_System_Collections_Generic_IList_UILineInfo,0);
label_05332301:
              fVar32 = (float)(*pVVar19->methodPtr)(obj,(ulong)uVar29,pVVar19->method);
              if (pSVar6 == (System_Collections_Generic_List_float__o *)0x0) goto label_05332d27;
              System_Collections_Generic_List_float___set_Item
                        (pSVar6,uVar29,(fVar31 - fVar32) * fVar30,
                         (MethodInfo_39AC4D0 *)MethodInfo_System_Collections_Generic_List_float_set_Item);
              pSVar7 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchRtlTextLines->static_fields->LineReversed;
              if (pSVar7 == (System_Collections_Generic_List_bool__o *)0x0) goto label_05332d27;
              System_Collections_Generic_List_bool___set_Item
                        (pSVar7,uVar29,true,
                         (MethodInfo_51DBE60 *)MethodInfo_System_Collections_Generic_List_bool_set_Item);
              uVar29 = uVar29 + 1;
            } while ((int)uVar29 <= (int)uVar24);
          }
        }
        uVar29 = uVar24 + 1;
        uVar26 = uVar29;
      }
    }
  }
  goto label_05331e60;
  while( true ) {
    *(int32_t *)((long)&pIVar22[2].klass + uVar28 * 4) = iVar17;
    pSVar6 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchRtlTextLines->static_fields->LineRight;
    if (pSVar6 == (System_Collections_Generic_List_float__o *)0x0) goto label_05332d27;
    fVar32 = System_Collections_Generic_List_float___get_Item
                       (pSVar6,iVar17,
                        (MethodInfo_39AC490 *)MethodInfo_System_Collections_Generic_List_float_get_Item);
    if (fVar32 <= fVar31) {
      fVar32 = fVar31;
    }
    System_Collections_Generic_List_float___set_Item
              (pSVar6,iVar17,fVar32,
               (MethodInfo_39AC4D0 *)MethodInfo_System_Collections_Generic_List_float_set_Item);
    uVar28 = uVar28 + 1;
    iVar23 = iVar23 + 4;
    if (uStack_38 == uVar28) break;
label_05332460:
    UnityEngine_UI_VertexHelper__PopulateUIVertex
              (helper,(UnityEngine_UIVertex_o *)auStack_118,iVar23 + -3,(MethodInfo *)0x0);
    fVar31 = -3.4028235e+38;
    if (-3.4028235e+38 <= (float)auStack_118._0_4_) {
      fVar31 = (float)auStack_118._0_4_;
    }
    fVar32 = (float)auStack_118._4_4_ * 0.25;
    UnityEngine_UI_VertexHelper__PopulateUIVertex
              (helper,(UnityEngine_UIVertex_o *)auStack_118,iVar23 + -2,(MethodInfo *)0x0);
    if (fVar31 <= (float)auStack_118._0_4_) {
      fVar31 = (float)auStack_118._0_4_;
    }
    fStack_78 = (float)auStack_118._4_4_ * 0.25;
    UnityEngine_UI_VertexHelper__PopulateUIVertex
              (helper,(UnityEngine_UIVertex_o *)auStack_118,iVar23 + -1,(MethodInfo *)0x0);
    if (fVar31 <= (float)auStack_118._0_4_) {
      fVar31 = (float)auStack_118._0_4_;
    }
    uStack_a0 = CONCAT44(uStack_a0._4_4_,(float)auStack_118._4_4_ * 0.25);
    pMVar21 = (MethodInfo *)auStack_118;
    UnityEngine_UI_VertexHelper__PopulateUIVertex
              (helper,(UnityEngine_UIVertex_o *)auStack_118,iVar23,(MethodInfo *)0x0);
    if (fVar31 <= (float)auStack_118._0_4_) {
      fVar31 = (float)auStack_118._0_4_;
    }
    fVar33 = (float)auStack_118._4_4_ * 0.25;
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchRtlTextLines->_2).cctor_finished_or_no_cctor == 0) {
      fStack_94 = (float)auStack_118._4_4_ * 0.25;
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchRtlTextLines);
      fVar33 = fStack_94;
    }
    iVar17 = Gisketch_Aottg2UI_Styling_GisketchRtlTextLines__LineAt
                       ((System_Collections_Generic_IList_UILineInfo__o *)obj,
                        (fVar32 + 0.0 + fStack_78 + (float)uStack_a0 + fVar33) / fVar30,pMVar21);
    if (*(uint *)&pIVar22[1].monitor <= uVar28) goto label_05332d2c;
  }
label_0533265a:
  pUVar25 = pUStack_40;
  uVar28 = 0;
  iVar17 = UnityEngine_UI_Text__get_alignment(pUStack_40,(MethodInfo *)0x0);
  if (iVar17 == 0) {
    uVar3 = (TypeInfo_Gisketch_Aottg2UI_Styling_GisketchRtlTextLines->_2).cctor_finished_or_no_cctor;
joined_r0x053326ce:
    if (uVar3 != 0) goto label_053326a0;
label_053326ef:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchRtlTextLines);
    pSVar6 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchRtlTextLines->static_fields->LineRight;
  }
  else {
    uVar28 = 0;
    iVar17 = UnityEngine_UI_Text__get_alignment(pUVar25,(MethodInfo *)0x0);
    if (iVar17 != 3) {
      iVar17 = UnityEngine_UI_Text__get_alignment(pUVar25,(MethodInfo *)0x0);
      uVar28 = (ulong)(iVar17 != 6);
      uVar3 = (TypeInfo_Gisketch_Aottg2UI_Styling_GisketchRtlTextLines->_2).cctor_finished_or_no_cctor;
      goto joined_r0x053326ce;
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchRtlTextLines->_2).cctor_finished_or_no_cctor == 0)
    goto label_053326ef;
label_053326a0:
    pSVar6 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchRtlTextLines->static_fields->LineRight;
  }
  if (pSVar6 == (System_Collections_Generic_List_float__o *)0x0) {
label_05332d27:
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_float___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)auStack_90,pSVar6,
             (MethodInfo_39AD5C0 *)MethodInfo_System_Collections_Generic_List_float_GetEnumerator);
  pIStack_58 = pIStack_80;
  auStack_68 = (undefined1  [8])auStack_90._0_8_;
  pSStack_60 = (System_Collections_Generic_List_Enumerator_T__o *)auStack_90._8_8_;
  auStack_90._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  auStack_90._8_8_ = (System_Collections_Generic_List_Enumerator_T__o *)auStack_68;
  while (bVar14 = System_Collections_Generic_List_Enumerator_float___MoveNext
                            ((System_Collections_Generic_List_Enumerator_T__o *)auStack_68,
                             (MethodInfo_4C51EB0 *)
                             MethodInfo_System_Collections_Generic_List_Enumerator_float_MoveNext), bVar14) {
    if (fStack_15c <= pIStack_58._0_4_) {
      fStack_15c = pIStack_58._0_4_;
    }
  }
  uStack_a0 = uVar28;
  il2cpp_runtime_helper_02d4a2a0(auStack_90);
  if (3 < (int)uStack_48) {
    if (pIVar22 == (Il2CppObject *)0x0) goto label_05332d27;
    iVar23 = 3;
    uVar28 = 0;
    do {
      if (*(uint *)&pIVar22[1].monitor <= uVar28) {
label_05332d2c:
        ThrowIndexOutOfRangeException();
      }
      iVar17 = *(int32_t *)((long)&pIVar22[2].klass + uVar28 * 4);
      if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchRtlTextLines->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchRtlTextLines);
      }
      pSVar7 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchRtlTextLines->static_fields->LineReversed;
      if (pSVar7 == (System_Collections_Generic_List_bool__o *)0x0) goto label_05332d27;
      bVar14 = System_Collections_Generic_List_bool___get_Item
                         (pSVar7,iVar17,
                          (MethodInfo_51DBE20 *)MethodInfo_System_Collections_Generic_List_bool_get_Item);
      if (bVar14) {
        fVar30 = 0.0;
        if ((char)uStack_a0 == '\0') {
          if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchRtlTextLines->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchRtlTextLines);
          }
          pSVar6 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchRtlTextLines->static_fields->LineRight;
          if (pSVar6 == (System_Collections_Generic_List_float__o *)0x0) goto label_05332d27;
          fVar30 = System_Collections_Generic_List_float___get_Item
                             (pSVar6,iVar17,
                              (MethodInfo_39AC490 *)MethodInfo_System_Collections_Generic_List_float_get_Item)
          ;
          fVar30 = fStack_15c - fVar30;
        }
        if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchRtlTextLines->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchRtlTextLines);
        }
        pSVar6 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchRtlTextLines->static_fields->LineShift;
        if (pSVar6 == (System_Collections_Generic_List_float__o *)0x0) goto label_05332d27;
        fStack_78 = System_Collections_Generic_List_float___get_Item
                              (pSVar6,iVar17,
                               (MethodInfo_39AC490 *)MethodInfo_System_Collections_Generic_List_float_get_Item
                              );
        UnityEngine_UI_VertexHelper__PopulateUIVertex
                  (helper,(UnityEngine_UIVertex_o *)auStack_118,iVar23 + -3,(MethodInfo *)0x0);
        fVar31 = fStack_78;
        auStack_118 = (undefined1  [8])CONCAT44(auStack_118._4_4_ + fStack_78,auStack_118._0_4_ + fVar30);
        pIStack_110 = (Il2CppMethodPointer)CONCAT44(pIStack_110._4_4_,pIStack_110._0_4_ + 0.0);
        vertex.fields._8_8_ = pIStack_110;
        vertex.fields.position.fields._0_8_ = auStack_118;
        vertex.fields.normal.fields._4_8_ = pIStack_108;
        vertex.fields.tangent.fields._0_8_ = pcStack_100;
        vertex.fields.tangent.fields.z = (float)(int)uStack_f8;
        vertex.fields.tangent.fields.w = (float)(int)((ulong)uStack_f8 >> 0x20);
        vertex.fields.color.fields._overlap_0 =
             (UnityEngine_Color32_Fields)(UnityEngine_Color32_Fields)(int)uStack_f0;
        vertex.fields.uv0.fields.x = (float)(int)((ulong)uStack_f0 >> 0x20);
        vertex.fields.uv0.fields._4_8_ = ppIStack_e8;
        vertex.fields._56_8_ = _Stack_e0.rgctx_data;
        vertex.fields.uv1.fields._4_8_ = _Stack_d8.genericMethod;
        vertex.fields.uv1.fields.w = (float)uStack_d0;
        vertex.fields.uv2.fields.x = uStack_d0._4_4_;
        vertex.fields.uv2.fields.y = (float)uStack_c8;
        vertex.fields.uv2.fields.z = uStack_c8._4_4_;
        vertex.fields.uv2.fields.w = fStack_c0;
        vertex.fields.uv3.fields.x = fStack_bc;
        vertex.fields.uv3.fields.y = fStack_b8;
        vertex.fields.uv3.fields.z = (float)uStack_b4;
        vertex.fields.uv3.fields.w = uStack_b4._4_4_;
        UnityEngine_UI_VertexHelper__SetUIVertex(helper,vertex,iVar23 + -3,(MethodInfo *)0x0);
        UnityEngine_UI_VertexHelper__PopulateUIVertex
                  (helper,(UnityEngine_UIVertex_o *)auStack_118,iVar23 + -2,(MethodInfo *)0x0);
        auStack_118 = (undefined1  [8])CONCAT44(auStack_118._4_4_ + fVar31,auStack_118._0_4_ + fVar30);
        pIStack_110 = (Il2CppMethodPointer)CONCAT44(pIStack_110._4_4_,pIStack_110._0_4_ + 0.0);
        vertex_00.fields._8_8_ = pIStack_110;
        vertex_00.fields.position.fields._0_8_ = auStack_118;
        vertex_00.fields.normal.fields._4_8_ = pIStack_108;
        vertex_00.fields.tangent.fields._0_8_ = pcStack_100;
        vertex_00.fields.tangent.fields.z = (float)(int)uStack_f8;
        vertex_00.fields.tangent.fields.w = (float)(int)((ulong)uStack_f8 >> 0x20);
        vertex_00.fields.color.fields._overlap_0 =
             (UnityEngine_Color32_Fields)(UnityEngine_Color32_Fields)(int)uStack_f0;
        vertex_00.fields.uv0.fields.x = (float)(int)((ulong)uStack_f0 >> 0x20);
        vertex_00.fields.uv0.fields._4_8_ = ppIStack_e8;
        vertex_00.fields._56_8_ = _Stack_e0.rgctx_data;
        vertex_00.fields.uv1.fields._4_8_ = _Stack_d8.genericMethod;
        vertex_00.fields.uv1.fields.w = (float)uStack_d0;
        vertex_00.fields.uv2.fields.x = uStack_d0._4_4_;
        vertex_00.fields.uv2.fields.y = (float)uStack_c8;
        vertex_00.fields.uv2.fields.z = uStack_c8._4_4_;
        vertex_00.fields.uv2.fields.w = fStack_c0;
        vertex_00.fields.uv3.fields.x = fStack_bc;
        vertex_00.fields.uv3.fields.y = fStack_b8;
        vertex_00.fields.uv3.fields.z = (float)uStack_b4;
        vertex_00.fields.uv3.fields.w = uStack_b4._4_4_;
        UnityEngine_UI_VertexHelper__SetUIVertex(helper,vertex_00,iVar23 + -2,(MethodInfo *)0x0);
        UnityEngine_UI_VertexHelper__PopulateUIVertex
                  (helper,(UnityEngine_UIVertex_o *)auStack_118,iVar23 + -1,(MethodInfo *)0x0);
        auStack_118 = (undefined1  [8])CONCAT44(auStack_118._4_4_ + fVar31,auStack_118._0_4_ + fVar30);
        pIStack_110 = (Il2CppMethodPointer)CONCAT44(pIStack_110._4_4_,pIStack_110._0_4_ + 0.0);
        vertex_01.fields._8_8_ = pIStack_110;
        vertex_01.fields.position.fields._0_8_ = auStack_118;
        vertex_01.fields.normal.fields._4_8_ = pIStack_108;
        vertex_01.fields.tangent.fields._0_8_ = pcStack_100;
        vertex_01.fields.tangent.fields.z = (float)(int)uStack_f8;
        vertex_01.fields.tangent.fields.w = (float)(int)((ulong)uStack_f8 >> 0x20);
        vertex_01.fields.color.fields._overlap_0 =
             (UnityEngine_Color32_Fields)(UnityEngine_Color32_Fields)(int)uStack_f0;
        vertex_01.fields.uv0.fields.x = (float)(int)((ulong)uStack_f0 >> 0x20);
        vertex_01.fields.uv0.fields._4_8_ = ppIStack_e8;
        vertex_01.fields._56_8_ = _Stack_e0.rgctx_data;
        vertex_01.fields.uv1.fields._4_8_ = _Stack_d8.genericMethod;
        vertex_01.fields.uv1.fields.w = (float)uStack_d0;
        vertex_01.fields.uv2.fields.x = uStack_d0._4_4_;
        vertex_01.fields.uv2.fields.y = (float)uStack_c8;
        vertex_01.fields.uv2.fields.z = uStack_c8._4_4_;
        vertex_01.fields.uv2.fields.w = fStack_c0;
        vertex_01.fields.uv3.fields.x = fStack_bc;
        vertex_01.fields.uv3.fields.y = fStack_b8;
        vertex_01.fields.uv3.fields.z = (float)uStack_b4;
        vertex_01.fields.uv3.fields.w = uStack_b4._4_4_;
        UnityEngine_UI_VertexHelper__SetUIVertex(helper,vertex_01,iVar23 + -1,(MethodInfo *)0x0);
        UnityEngine_UI_VertexHelper__PopulateUIVertex
                  (helper,(UnityEngine_UIVertex_o *)auStack_118,iVar23,(MethodInfo *)0x0);
        auStack_118 = (undefined1  [8])CONCAT44(auStack_118._4_4_ + fVar31,auStack_118._0_4_ + fVar30);
        pIStack_110 = (Il2CppMethodPointer)CONCAT44(pIStack_110._4_4_,pIStack_110._0_4_ + 0.0);
        vertex_02.fields._8_8_ = pIStack_110;
        vertex_02.fields.position.fields._0_8_ = auStack_118;
        vertex_02.fields.normal.fields._4_8_ = pIStack_108;
        vertex_02.fields.tangent.fields._0_8_ = pcStack_100;
        vertex_02.fields.tangent.fields.z = (float)uStack_f8;
        vertex_02.fields.tangent.fields.w = uStack_f8._4_4_;
        vertex_02.fields.color.fields._overlap_0 = uStack_f0._0_4_;
        vertex_02.fields.uv0.fields.x = uStack_f0._4_4_;
        vertex_02.fields.uv0.fields._4_8_ = ppIStack_e8;
        vertex_02.fields._56_8_ = _Stack_e0.rgctx_data;
        vertex_02.fields.uv1.fields._4_8_ = _Stack_d8.genericMethod;
        vertex_02.fields.uv1.fields.w = (float)uStack_d0;
        vertex_02.fields.uv2.fields.x = uStack_d0._4_4_;
        vertex_02.fields.uv2.fields.y = (float)uStack_c8;
        vertex_02.fields.uv2.fields.z = uStack_c8._4_4_;
        vertex_02.fields.uv2.fields.w = fStack_c0;
        vertex_02.fields.uv3.fields.x = fStack_bc;
        vertex_02.fields.uv3.fields.y = fStack_b8;
        vertex_02.fields.uv3.fields.z = (float)uStack_b4;
        vertex_02.fields.uv3.fields.w = uStack_b4._4_4_;
        UnityEngine_UI_VertexHelper__SetUIVertex(helper,vertex_02,iVar23,(MethodInfo *)0x0);
      }
      uVar28 = uVar28 + 1;
      iVar23 = iVar23 + 4;
    } while (length != uVar28);
  }
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchRtlTextLines$$EndsParagraph
// il2cpp: bool Gisketch_Aottg2UI_Styling_GisketchRtlTextLines__EndsParagraph (System_String_o* value, int32_t nextLineStart, const MethodInfo* method);
// 0x5332d60

bool Gisketch_Aottg2UI_Styling_GisketchRtlTextLines__EndsParagraph
               (System_String_o *value,int32_t nextLineStart,MethodInfo *method)

{
  uint16_t uVar1;
  
  if (0 < nextLineStart) {
    if (value == (System_String_o *)0x0) {
      ThrowNullReferenceException();
    }
    if (nextLineStart <= (value->fields)._stringLength) {
      uVar1 = System_String__get_Chars(value,nextLineStart + -1,(MethodInfo *)0x0);
      return uVar1 == 10;
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Styling.GisketchRtlTextLines$$LineAt
// il2cpp: int32_t Gisketch_Aottg2UI_Styling_GisketchRtlTextLines__LineAt (System_Collections_Generic_IList_UILineInfo__o* lines, float y, const MethodInfo* method);
// 0x5332d90
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5332e0f: nop 

int32_t Gisketch_Aottg2UI_Styling_GisketchRtlTextLines__LineAt
                  (System_Collections_Generic_IList_UILineInfo__o *lines,float y,MethodInfo *method)

{
  System_Collections_Generic_IList_UILineInfo__c *pSVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  int32_t iVar3;
  VirtualInvokeData *pVVar4;
  int extraout_var;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  float fVar8;
  
  if (Il2CppMethodInitialized_07542873 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_ICollection_UILineInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IList_UILineInfo);
    Il2CppMethodInitialized_07542873 = '\x01';
  }
  if (lines == (System_Collections_Generic_IList_UILineInfo__o *)0x0) {
    ThrowNullReferenceException();
  }
  uVar7 = 0;
  do {
    pSVar1 = lines->klass;
    uVar5 = (ulong)(pSVar1->_2).interface_offsets_count;
    if (uVar5 != 0) {
      pIVar2 = (pSVar1->_1).interfaceOffsets;
      lVar6 = 0;
      do {
        if (*(System_Collections_Generic_ICollection_UILineInfo__c **)((long)&pIVar2->interfaceType + lVar6)
            == TypeInfo_System_Collections_Generic_ICollection_UILineInfo) {
          pVVar4 = pSVar1->vtable + *(int *)((long)&pIVar2->offset + lVar6);
          goto label_05332e43;
        }
        lVar6 = lVar6 + 0x10;
      } while (uVar5 * 0x10 != lVar6);
    }
    pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath
                       ((Il2CppObject *)lines,
                        (Il2CppClass *)TypeInfo_System_Collections_Generic_ICollection_UILineInfo,0);
label_05332e43:
    iVar3 = (*pVVar4->methodPtr)((Il2CppObject *)lines,pVVar4->method);
    if (iVar3 <= (int)uVar7) {
      pSVar1 = lines->klass;
      uVar5 = (ulong)(pSVar1->_2).interface_offsets_count;
      if (uVar5 == 0) goto label_05332f8f;
      pIVar2 = (pSVar1->_1).interfaceOffsets;
      lVar6 = 0;
      break;
    }
    pSVar1 = lines->klass;
    uVar5 = (ulong)(pSVar1->_2).interface_offsets_count;
    if (uVar5 != 0) {
      pIVar2 = (pSVar1->_1).interfaceOffsets;
      lVar6 = 0;
      do {
        if (*(System_Collections_Generic_IList_UILineInfo__c **)((long)&pIVar2->interfaceType + lVar6) ==
            TypeInfo_System_Collections_Generic_IList_UILineInfo) {
          pVVar4 = pSVar1->vtable + *(int *)((long)&pIVar2->offset + lVar6);
          goto label_05332eb3;
        }
        lVar6 = lVar6 + 0x10;
      } while (uVar5 * 0x10 != lVar6);
    }
    pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath
                       ((Il2CppObject *)lines,
                        (Il2CppClass *)TypeInfo_System_Collections_Generic_IList_UILineInfo,0);
label_05332eb3:
    fVar8 = (float)(*pVVar4->methodPtr)(lines,(ulong)uVar7,pVVar4->method);
    pSVar1 = lines->klass;
    uVar5 = (ulong)(pSVar1->_2).interface_offsets_count;
    if (uVar5 != 0) {
      pIVar2 = (pSVar1->_1).interfaceOffsets;
      lVar6 = 0;
      do {
        if (*(System_Collections_Generic_IList_UILineInfo__c **)((long)&pIVar2->interfaceType + lVar6) ==
            TypeInfo_System_Collections_Generic_IList_UILineInfo) {
          pVVar4 = pSVar1->vtable + *(int *)((long)&pIVar2->offset + lVar6);
          goto label_05332f23;
        }
        lVar6 = lVar6 + 0x10;
      } while (uVar5 * 0x10 != lVar6);
    }
    pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath
                       ((Il2CppObject *)lines,
                        (Il2CppClass *)TypeInfo_System_Collections_Generic_IList_UILineInfo,0);
label_05332f23:
    (*pVVar4->methodPtr)(lines,(ulong)uVar7,pVVar4->method);
    if (fVar8 - (float)extraout_var < y) {
      return uVar7;
    }
    uVar7 = uVar7 + 1;
  } while( true );
  while (lVar6 = lVar6 + 0x10, uVar5 * 0x10 != lVar6) {
    if (*(System_Collections_Generic_ICollection_UILineInfo__c **)((long)&pIVar2->interfaceType + lVar6) ==
        TypeInfo_System_Collections_Generic_ICollection_UILineInfo) {
      pVVar4 = pSVar1->vtable + *(int *)((long)&pIVar2->offset + lVar6);
      goto label_05332fb1;
    }
  }
label_05332f8f:
  pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath
                     ((Il2CppObject *)lines,
                      (Il2CppClass *)TypeInfo_System_Collections_Generic_ICollection_UILineInfo,0);
label_05332fb1:
  iVar3 = (*pVVar4->methodPtr)((Il2CppObject *)lines,pVVar4->method);
  return iVar3 + -1;
}


// Gisketch.Aottg2UI.Styling.GisketchRtlTextLines$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchRtlTextLines___ctor (Gisketch_Aottg2UI_Styling_GisketchRtlTextLines_o* __this, const MethodInfo* method);
// 0x5332fe0

void Gisketch_Aottg2UI_Styling_GisketchRtlTextLines___ctor
               (Gisketch_Aottg2UI_Styling_GisketchRtlTextLines_o *__this,MethodInfo *method)

{
  UnityEngine_UI_BaseMeshEffect___ctor((UnityEngine_UI_BaseMeshEffect_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchRtlTextLines$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchRtlTextLines___cctor (const MethodInfo* method);
// 0x5332ff0

void Gisketch_Aottg2UI_Styling_GisketchRtlTextLines___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Styling_GisketchRtlTextLines_StaticFields *pGVar1;
  System_Collections_Generic_List_float__o *pSVar2;
  System_Collections_Generic_List_bool__o *__this;
  
  if (Il2CppMethodInitialized_07542874 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchRtlTextLines);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_bool_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_float);
    Il2CppMethodInitialized_07542874 = '\x01';
  }
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_float);
  System_Collections_Generic_List_float____ctor
            (pSVar2,(MethodInfo_39ABE80 *)MethodInfo_System_Collections_Generic_List_float_ctor);
  TypeInfo_Gisketch_Aottg2UI_Styling_GisketchRtlTextLines->static_fields->LineShift = pSVar2;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchRtlTextLines->static_fields->LineShift);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_float);
  System_Collections_Generic_List_float____ctor
            (pSVar2,(MethodInfo_39ABE80 *)MethodInfo_System_Collections_Generic_List_float_ctor);
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchRtlTextLines->static_fields;
  pGVar1->LineRight = pSVar2;
  Il2CppCodeGenWriteBarrier(&pGVar1->LineRight);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_bool);
  System_Collections_Generic_List_bool____ctor
            (__this,(MethodInfo_51DB810 *)MethodInfo_System_Collections_Generic_List_bool_ctor);
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchRtlTextLines->static_fields;
  pGVar1->LineReversed = __this;
  Il2CppCodeGenWriteBarrier(&pGVar1->LineReversed);
  return;
}


