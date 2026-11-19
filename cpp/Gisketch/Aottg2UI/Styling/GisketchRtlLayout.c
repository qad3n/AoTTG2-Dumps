// Type: Gisketch.Aottg2UI.Styling.GisketchRtlLayout
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp_body_deref/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Styling/GisketchRtlLayout.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Styling.GisketchRtlLayout$$Install
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchRtlLayout__Install (const MethodInfo* method);
// 0x5331010

void Gisketch_Aottg2UI_Styling_GisketchRtlLayout__Install(MethodInfo *method)

{
  TMPro_FastAction_Object__o *pTVar1;
  System_Action_Object__o *pSVar2;
  
  if (Il2CppMethodInitialized_0754286f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_Object);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_TMPro_FastAction_Object_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_TMPro_FastAction_Object_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Styling_GisketchRtlLayout_OnTextChanged);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_TMPro_TMPro_EventManager);
    Il2CppMethodInitialized_0754286f = '\x01';
  }
  if ((TypeInfo_TMPro_TMPro_EventManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_TMPro_TMPro_EventManager);
  }
  pTVar1 = TypeInfo_TMPro_TMPro_EventManager->static_fields->TEXT_CHANGED_EVENT;
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_Object);
  System_Action_object____ctor
            ((System_Action_object__o *)pSVar2,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Styling_GisketchRtlLayout_OnTextChanged,
             (MethodInfo_4A81BE0 *)0x0);
  if (pTVar1 != (TMPro_FastAction_Object__o *)0x0) {
    TMPro_FastAction_object___Remove
              ((TMPro_FastAction_A__o *)pTVar1,(System_Action_A__o *)pSVar2,
               (MethodInfo_4E84950 *)MethodInfo_TMPro_FastAction_Object_Remove);
    pTVar1 = TypeInfo_TMPro_TMPro_EventManager->static_fields->TEXT_CHANGED_EVENT;
    pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_Object);
    System_Action_object____ctor
              ((System_Action_object__o *)pSVar2,(Il2CppObject *)0x0,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Styling_GisketchRtlLayout_OnTextChanged,
               (MethodInfo_4A81BE0 *)0x0);
    if (pTVar1 != (TMPro_FastAction_Object__o *)0x0) {
      TMPro_FastAction_object___Add
                ((TMPro_FastAction_A__o *)pTVar1,(System_Action_A__o *)pSVar2,
                 (MethodInfo_4E848C0 *)MethodInfo_TMPro_FastAction_Object_Add);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Styling.GisketchRtlLayout$$OnTextChanged
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchRtlLayout__OnTextChanged (UnityEngine_Object_o* changed, const MethodInfo* method);
// 0x5331130
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5331241: jmp 0x53313e2
// asm:   0x5331271: jmp 0x53311ba
// asm:   0x5331391: nop word ptr cs:[rax + rax]

void Gisketch_Aottg2UI_Styling_GisketchRtlLayout__OnTextChanged
               (UnityEngine_Object_o *changed,MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  int32_t iVar3;
  uint uVar4;
  TMPro_TMP_LineInfo_array *pTVar5;
  TMPro_TMP_CharacterInfo_array *pTVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  TMPro_TMP_TextInfo_o *pTVar10;
  System_String_o *text;
  TMPro_TMP_InputField_o *x;
  MethodInfo *pMVar11;
  long lVar12;
  ulong uVar13;
  MethodInfo *in_R8;
  int firstLine;
  TMPro_TMP_Text_o *__this;
  
  if (Il2CppMethodInitialized_07542870 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentInParent_TMP_InputField);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_TMPro_TMP_Text);
    Il2CppMethodInitialized_07542870 = '\x01';
  }
  if (changed == (UnityEngine_Object_o *)0x0) {
label_053311a3:
    __this = (TMPro_TMP_Text_o *)0x0;
    uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
    bVar1 = (TypeInfo_TMPro_TMP_Text->_2).typeHierarchyDepth;
    if ((changed->klass->_2).typeHierarchyDepth < bVar1) goto label_053311a3;
    __this = (TMPro_TMP_Text_o *)0x0;
    if ((changed->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_TMPro_TMP_Text) {
      __this = (TMPro_TMP_Text_o *)changed;
    }
    uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar7 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar7) {
    if (__this == (TMPro_TMP_Text_o *)0x0) {
label_0533141a:
      ThrowNullReferenceException();
    }
    pTVar10 = TMPro_TMP_Text__get_textInfo(__this,(MethodInfo *)0x0);
    if (pTVar10 != (TMPro_TMP_TextInfo_o *)0x0) {
      pTVar10 = TMPro_TMP_Text__get_textInfo(__this,(MethodInfo *)0x0);
      if (pTVar10 == (TMPro_TMP_TextInfo_o *)0x0) goto label_0533141a;
      if (1 < (pTVar10->fields).lineCount) {
        pMVar11 = (__this->klass->vtable)._65_get_text.method;
        text = (*(__this->klass->vtable)._65_get_text.methodPtr)(__this,pMVar11);
        if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
          bVar7 = Gisketch_Aottg2UI_Styling_GisketchArabicText__HasPresentationForms(text,pMVar11);
        }
        else {
          bVar7 = Gisketch_Aottg2UI_Styling_GisketchArabicText__HasPresentationForms(text,pMVar11);
        }
        if (bVar7) {
          x = UnityEngine_Component__GetComponentInParent_object__34b0d00
                        ((UnityEngine_Component_o *)__this,
                         (MethodInfo_34B0D00 *)
                         MethodInfo_UnityEngine_Component_GetComponentInParent_TMP_InputField);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar7 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar7) {
            if (x == (TMPro_TMP_InputField_o *)0x0) goto label_0533141a;
            if ((x->fields).m_ReadOnly == false) {
              return;
            }
          }
          pTVar10 = TMPro_TMP_Text__get_textInfo(__this,(MethodInfo *)0x0);
          if (pTVar10 == (TMPro_TMP_TextInfo_o *)0x0) goto label_0533141a;
          iVar9 = (pTVar10->fields).lineCount;
          if (0 < iVar9) {
            iVar3 = (__this->fields).m_HorizontalAlignment;
            uVar13 = 0;
            lVar12 = 0x40;
            firstLine = 0;
            bVar7 = false;
            do {
              pMVar11 = (MethodInfo *)(long)(iVar9 + -1);
              if ((long)uVar13 < (long)pMVar11) {
                pTVar5 = (pTVar10->fields).lineInfo;
                if (pTVar5 == (TMPro_TMP_LineInfo_array *)0x0) goto label_0533141a;
                if ((uint)pTVar5->max_length <= uVar13) {
label_0533141f:
                  ThrowIndexOutOfRangeException();
                }
                uVar4 = *(uint *)((long)pTVar5->m_Items + lVar12 + -0x20);
                if ((-1 < (int)uVar4) && ((int)uVar4 < (pTVar10->fields).characterCount)) {
                  pTVar6 = (pTVar10->fields).characterInfo;
                  if (pTVar6 == (TMPro_TMP_CharacterInfo_array *)0x0) goto label_0533141a;
                  if ((uint)pTVar6->max_length <= uVar4) goto label_0533141f;
                  pMVar11 = (MethodInfo *)((ulong)uVar4 * 0x178);
                  if (pTVar6->m_Items[uVar4].fields.character == 10) goto label_053313a0;
                }
              }
              else {
label_053313a0:
                iVar9 = (int)uVar13;
                if (((long)firstLine < (long)uVar13) &&
                   (bVar8 = Gisketch_Aottg2UI_Styling_GisketchRtlLayout__EndsRightToLeft
                                      (pTVar10,firstLine,iVar9,pMVar11), bVar8)) {
                  Gisketch_Aottg2UI_Styling_GisketchRtlLayout__ReverseLines
                            (pTVar10,firstLine,iVar9,(bool)((byte)iVar3 & 1),in_R8);
                  bVar7 = true;
                }
                firstLine = iVar9 + 1;
                iVar9 = (pTVar10->fields).lineCount;
              }
              uVar13 = uVar13 + 1;
              lVar12 = lVar12 + 0x60;
            } while ((long)uVar13 < (long)iVar9);
            if (bVar7) {
              (*(__this->klass->vtable)._108_UpdateVertexData.methodPtr)
                        (__this,1,(__this->klass->vtable)._108_UpdateVertexData.method);
              return;
            }
          }
        }
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchRtlLayout$$EndsParagraph
// il2cpp: bool Gisketch_Aottg2UI_Styling_GisketchRtlLayout__EndsParagraph (TMPro_TMP_TextInfo_o* info, int32_t line, const MethodInfo* method);
// 0x5331430

bool Gisketch_Aottg2UI_Styling_GisketchRtlLayout__EndsParagraph
               (TMPro_TMP_TextInfo_o *info,int32_t line,MethodInfo *method)

{
  uint uVar1;
  TMPro_TMP_LineInfo_array *pTVar2;
  TMPro_TMP_CharacterInfo_array *pTVar3;
  
  if ((info == (TMPro_TMP_TextInfo_o *)0x0) ||
     (pTVar2 = (info->fields).lineInfo, pTVar2 == (TMPro_TMP_LineInfo_array *)0x0)) {
label_05331480:
    ThrowNullReferenceException();
  }
  if ((uint)line < (uint)pTVar2->max_length) {
    uVar1 = pTVar2->m_Items[line].fields.lastCharacterIndex;
    if (((int)uVar1 < 0) || ((info->fields).characterCount <= (int)uVar1)) {
      return false;
    }
    pTVar3 = (info->fields).characterInfo;
    if (pTVar3 == (TMPro_TMP_CharacterInfo_array *)0x0) goto label_05331480;
    if (uVar1 < (uint)pTVar3->max_length) {
      return pTVar3->m_Items[uVar1].fields.character == 10;
    }
  }
  ThrowIndexOutOfRangeException();
}


// Gisketch.Aottg2UI.Styling.GisketchRtlLayout$$EndsRightToLeft
// il2cpp: bool Gisketch_Aottg2UI_Styling_GisketchRtlLayout__EndsRightToLeft (TMPro_TMP_TextInfo_o* info, int32_t firstLine, int32_t lastLine, const MethodInfo* method);
// 0x5331490
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5331520: lea r12, [rip + 0x1f47231]  ; TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText
// asm:   0x5331527: lea r13, [rip + 0x222519a]
// asm:   0x533152e: nop 
// asm:   0x53315af: jmp 0x533150f

bool Gisketch_Aottg2UI_Styling_GisketchRtlLayout__EndsRightToLeft
               (TMPro_TMP_TextInfo_o *info,int32_t firstLine,int32_t lastLine,MethodInfo *method)

{
  uint16_t character;
  int iVar1;
  uint32_t uVar2;
  TMPro_TMP_LineInfo_array *pTVar3;
  TMPro_TMP_CharacterInfo_array *pTVar4;
  bool bVar5;
  uint uVar6;
  undefined4 in_register_00000034;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)CONCAT44(in_register_00000034,firstLine);
  if (Il2CppMethodInitialized_07542871 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
    Il2CppMethodInitialized_07542871 = '\x01';
  }
  if ((info != (TMPro_TMP_TextInfo_o *)0x0) &&
     (pTVar3 = (info->fields).lineInfo, pTVar3 != (TMPro_TMP_LineInfo_array *)0x0)) {
    uVar6 = (uint)pTVar3->max_length;
    if ((uVar6 <= (uint)firstLine) || (uVar6 <= (uint)lastLine)) {
label_0533161d:
      ThrowIndexOutOfRangeException();
    }
    iVar1 = pTVar3->m_Items[firstLine].fields.firstCharacterIndex;
    uVar6 = pTVar3->m_Items[lastLine].fields.lastCharacterIndex;
    while( true ) {
      if ((int)uVar6 < iVar1) {
        return false;
      }
      pTVar4 = (info->fields).characterInfo;
      if (pTVar4 == (TMPro_TMP_CharacterInfo_array *)0x0) break;
      if ((uint)pTVar4->max_length <= uVar6) goto label_0533161d;
      character = pTVar4->m_Items[(int)uVar6].fields.character;
      if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText)->_2).
          cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
        if (g_data_0754283f != '\0') goto label_0533156b;
label_053315ce:
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
        g_data_0754283f = '\x01';
        uVar2 = (TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->_2).cctor_finished_or_no_cctor;
      }
      else {
        if (g_data_0754283f == '\0') goto label_053315ce;
label_0533156b:
        uVar2 = (TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->_2).cctor_finished_or_no_cctor;
      }
      if (uVar2 == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
      }
      bVar5 = Gisketch_Aottg2UI_Styling_GisketchArabicText__IsRightToLeft(character,method_00);
      if (bVar5) {
label_053315f1:
        if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
        }
        bVar5 = Gisketch_Aottg2UI_Styling_GisketchArabicText__IsRightToLeft(character,method_00);
        return bVar5;
      }
      if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_07556750);
      }
      method_00 = (MethodInfo *)0x0;
      bVar5 = System_Char__IsLetter(character,(MethodInfo *)0x0);
      if (bVar5) goto label_053315f1;
      uVar6 = uVar6 - 1;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Styling.GisketchRtlLayout$$ReverseLines
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchRtlLayout__ReverseLines (TMPro_TMP_TextInfo_o* info, int32_t firstLine, int32_t lastLine, bool rightAlign, const MethodInfo* method);
// 0x5331630
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5331743: movsd xmm2, qword ptr [rsp]
// asm:   0x5331748: jmp 0x533175c
// asm:   0x533188c: mov dword ptr [rsp + 8], 0
// asm:   0x53318c8: movss dword ptr [rsp + 8], xmm2

void Gisketch_Aottg2UI_Styling_GisketchRtlLayout__ReverseLines
               (TMPro_TMP_TextInfo_o *info,int32_t firstLine,int32_t lastLine,bool rightAlign,
               MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  TMPro_TMP_LineInfo_array *pTVar11;
  TMPro_TMP_CharacterInfo_array *pTVar12;
  TMPro_TMP_MeshInfo_array *pTVar13;
  UnityEngine_Vector3_array *pUVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  ulong uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  if (firstLine <= lastLine) {
    if ((info == (TMPro_TMP_TextInfo_o *)0x0) ||
       (pTVar11 = (info->fields).lineInfo, pTVar11 == (TMPro_TMP_LineInfo_array *)0x0)) {
label_053318ce:
      ThrowNullReferenceException();
    }
    uVar17 = (uint)pTVar11->max_length;
    if (uVar17 < (uint)firstLine) {
      uVar17 = firstLine;
    }
    fVar20 = -3.4028235e+38;
    uVar15 = firstLine;
    do {
      if (uVar17 == uVar15) {
        ThrowIndexOutOfRangeException();
      }
      fVar21 = pTVar11->m_Items[(int)uVar15].fields.lineExtents.fields.max.fields.x;
      if (fVar20 <= fVar21) {
        fVar20 = fVar21;
      }
      uVar15 = uVar15 + 1;
    } while ((int)uVar15 <= lastLine);
    if (firstLine <= lastLine) {
      iVar16 = lastLine + firstLine;
      do {
        pTVar11 = (info->fields).lineInfo;
        if (pTVar11 == (TMPro_TMP_LineInfo_array *)0x0) goto label_053318ce;
        uVar17 = (uint)pTVar11->max_length;
        if ((uVar17 <= (uint)firstLine) || (uVar15 = iVar16 - firstLine, uVar17 <= uVar15)) {
          ThrowIndexOutOfRangeException();
        }
        if (rightAlign) {
          fVar21 = fVar20 - pTVar11->m_Items[firstLine].fields.lineExtents.fields.max.fields.x;
        }
        else {
          fVar21 = 0.0;
        }
        iVar10 = pTVar11->m_Items[firstLine].fields.lastCharacterIndex;
        fVar22 = pTVar11->m_Items[(int)uVar15].fields.baseline - pTVar11->m_Items[firstLine].fields.baseline;
        for (uVar17 = pTVar11->m_Items[firstLine].fields.firstCharacterIndex; (int)uVar17 <= iVar10;
            uVar17 = uVar17 + 1) {
          pTVar12 = (info->fields).characterInfo;
          if (pTVar12 == (TMPro_TMP_CharacterInfo_array *)0x0) goto label_053318ab;
          if ((uint)pTVar12->max_length <= uVar17) goto label_0533189e;
          if ((pTVar12->m_Items[(int)uVar17].fields.isVisible & 1U) != 0) {
            pTVar13 = (info->fields).meshInfo;
            if (pTVar13 == (TMPro_TMP_MeshInfo_array *)0x0) {
label_053318ab:
              ThrowNullReferenceException();
            }
            uVar15 = pTVar12->m_Items[(int)uVar17].fields.materialReferenceIndex;
            if ((uint)pTVar13->max_length <= uVar15) goto label_0533189e;
            pUVar14 = pTVar13->m_Items[(int)uVar15].fields.vertices;
            if (pUVar14 == (UnityEngine_Vector3_array *)0x0) goto label_053318ab;
            uVar15 = pTVar12->m_Items[(int)uVar17].fields.vertexIndex;
            uVar19 = (ulong)uVar15;
            if ((uint)pUVar14->max_length <= uVar19) {
label_0533189e:
              ThrowIndexOutOfRangeException();
            }
            uVar2 = pUVar14->m_Items[(int)uVar15].fields.x;
            uVar6 = pUVar14->m_Items[(int)uVar15].fields.y;
            fVar1 = pUVar14->m_Items[(int)uVar15].fields.z;
            pUVar14->m_Items[(int)uVar15].fields.x = (float)uVar2 + fVar21;
            pUVar14->m_Items[(int)uVar15].fields.y = (float)uVar6 + fVar22;
            pUVar14->m_Items[(int)uVar15].fields.z = fVar1 + 0.0;
            if ((ulong)(uint)pUVar14->max_length <= uVar19 + 1) goto label_0533189e;
            iVar18 = (int)(uVar19 + 1);
            uVar3 = pUVar14->m_Items[iVar18].fields.x;
            uVar7 = pUVar14->m_Items[iVar18].fields.y;
            fVar1 = pUVar14->m_Items[iVar18].fields.z;
            pUVar14->m_Items[iVar18].fields.x = (float)uVar3 + fVar21;
            pUVar14->m_Items[iVar18].fields.y = (float)uVar7 + fVar22;
            pUVar14->m_Items[iVar18].fields.z = fVar1 + 0.0;
            if ((ulong)(uint)pUVar14->max_length <= uVar19 + 2) goto label_0533189e;
            iVar18 = (int)(uVar19 + 2);
            uVar4 = pUVar14->m_Items[iVar18].fields.x;
            uVar8 = pUVar14->m_Items[iVar18].fields.y;
            fVar1 = pUVar14->m_Items[iVar18].fields.z;
            pUVar14->m_Items[iVar18].fields.x = (float)uVar4 + fVar21;
            pUVar14->m_Items[iVar18].fields.y = (float)uVar8 + fVar22;
            pUVar14->m_Items[iVar18].fields.z = fVar1 + 0.0;
            if ((ulong)(uint)pUVar14->max_length <= uVar19 + 3) goto label_0533189e;
            iVar18 = (int)(uVar19 + 3);
            uVar5 = pUVar14->m_Items[iVar18].fields.x;
            uVar9 = pUVar14->m_Items[iVar18].fields.y;
            fVar1 = pUVar14->m_Items[iVar18].fields.z;
            pUVar14->m_Items[iVar18].fields.x = (float)uVar5 + fVar21;
            pUVar14->m_Items[iVar18].fields.y = (float)uVar9 + fVar22;
            pUVar14->m_Items[iVar18].fields.z = fVar1 + 0.0;
          }
        }
        firstLine = firstLine + 1;
      } while (firstLine <= lastLine);
    }
  }
  return;
}


